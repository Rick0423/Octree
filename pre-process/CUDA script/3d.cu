/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

 #include "forward.h"
 #include "auxiliary.h"
 #include <cooperative_groups.h>
 #include <cooperative_groups/reduce.h>
 namespace cg = cooperative_groups;
 
 __device__ __constant__ float pi = 3.14159265358979323846f;

 
 
 // Forward version of 2D covariance matrix computation
 __device__ float3 computeCov2D(const float3& mean, float focal_x, float focal_y, float tan_fovx, float tan_fovy, const float* cov3D, const float* viewmatrix)
 {
	 // The following models the steps outlined by equations 29
	 // and 31 in "EWA Splatting" (Zwicker et al., 2002). 
	 // Additionally considers aspect / scaling of viewport.
	 // Transposes used to account for row-/column-major conventions.
	 float3 t = transformPoint4x3(mean, viewmatrix);
 
	 const float limx = 1.3f * tan_fovx;
	 const float limy = 1.3f * tan_fovy;
	 const float txtz = t.x / t.z;
	 const float tytz = t.y / t.z;
	 t.x = min(limx, max(-limx, txtz)) * t.z;
	 t.y = min(limy, max(-limy, tytz)) * t.z;
 
	 glm::mat3 J = glm::mat3(
		 focal_x / t.z, 0.0f, -(focal_x * t.x) / (t.z * t.z),
		 0.0f, focal_y / t.z, -(focal_y * t.y) / (t.z * t.z),
		 0, 0, 0);
 
	 glm::mat3 W = glm::mat3(
		 viewmatrix[0], viewmatrix[4], viewmatrix[8],
		 viewmatrix[1], viewmatrix[5], viewmatrix[9],
		 viewmatrix[2], viewmatrix[6], viewmatrix[10]);
 
	 glm::mat3 T = W * J;
 
	 glm::mat3 Vrk = glm::mat3(
		 cov3D[0], cov3D[1], cov3D[2],
		 cov3D[1], cov3D[3], cov3D[4],
		 cov3D[2], cov3D[4], cov3D[5]);
 
	 glm::mat3 cov = glm::transpose(T) * glm::transpose(Vrk) * T;
 
	 // Apply low-pass filter: every Gaussian should be at least
	 // one pixel wide/high. Discard 3rd row and column.
	 cov[0][0] += 0.3f;
	 cov[1][1] += 0.3f;
	 return { float(cov[0][0]), float(cov[0][1]), float(cov[1][1]) };
 }
 
 // Forward method for converting scale and rotation properties of each
 // Gaussian to a 3D covariance matrix in world space. Also takes care
 // of quaternion normalization.
 __device__ void computeCov3D(const glm::vec3 scale, float mod, const glm::vec4 rot, float* cov3D)
 {
	 // Create scaling matrix
	 glm::mat3 S = glm::mat3(1.0f);
	 S[0][0] = mod * scale.x;
	 S[1][1] = mod * scale.y;
	 S[2][2] = mod * scale.z;
 
	 // Normalize quaternion to get valid rotation
	 glm::vec4 q = rot;// / glm::length(rot);
	 float r = q.x;
	 float x = q.y;
	 float y = q.z;
	 float z = q.w;
 
	 // Compute rotation matrix from quaternion
	 glm::mat3 R = glm::mat3(
		 1.f - 2.f * (y * y + z * z), 2.f * (x * y - r * z), 2.f * (x * z + r * y),
		 2.f * (x * y + r * z), 1.f - 2.f * (x * x + z * z), 2.f * (y * z - r * x),
		 2.f * (x * z - r * y), 2.f * (y * z + r * x), 1.f - 2.f * (x * x + y * y)
	 );
 
	 glm::mat3 M = S * R;
 
	 // Compute 3D world covariance matrix Sigma
	 glm::mat3 Sigma = glm::transpose(M) * M;
 
	 // Covariance is symmetric, only store upper right
	 cov3D[0] = Sigma[0][0];
	 cov3D[1] = Sigma[0][1];
	 cov3D[2] = Sigma[0][2];
	 cov3D[3] = Sigma[1][1];
	 cov3D[4] = Sigma[1][2];
	 cov3D[5] = Sigma[2][2];
 }
 
 // Perform initial steps for each Gaussian prior to rasterization.
 template<int C>
 __global__ void preprocessCUDA(int P, int D, int M,
	 const float* orig_points,
	 const glm::vec3* scales,
	 const float scale_modifier,
	 const glm::vec4* rotations,
	 const float* opacities,
	 const float* shs,
	 bool* clamped,
	 const float* cov3D_precomp,
	 const float* colors_precomp,
	 const float* viewmatrix,
	 const float* projmatrix,
	 const glm::vec3* cam_pos,
	 const int W, int H,
	 const float tan_fovx, float tan_fovy,
	 const float focal_x, float focal_y,
	 int* radii,
	 float2* points_xy_image,
	 float* depths,
	 float* cov3Ds,
	 float* rgb,
	 float4* conic_opacity,
	 const dim3 grid,
	 uint32_t* tiles_touched,
	 bool prefiltered)
	 auto idx = cg::this_grid().thread_rank();
	 if (idx >= P)
		 return;
 
	 // Initialize radius and touched tiles to 0. If this isn't changed,
	 // this Gaussian will not be processed further.
	 radii[idx] = 0;
	 tiles_touched[idx] = 0;
 
	 // Perform near culling, quit if outside.
	 float3 p_view;
	 if (!in_frustum(idx, orig_points, viewmatrix, projmatrix, prefiltered, p_view))
		 return;
 
	 // Transform point by projecting
	 float3 p_orig = { orig_points[3 * idx], orig_points[3 * idx + 1], orig_points[3 * idx + 2] };
 
	 // If 3D covariance matrix is precomputed, use it, otherwise compute
	 // from scaling and rotation parameters. 
	 const float* cov3D;
	 if (cov3D_precomp != nullptr)
	 {
		 cov3D = cov3D_precomp + idx * 6;
	 }
	 else
	 {
		 computeCov3D(scales[idx], scale_modifier, rotations[idx], cov3Ds + idx * 6);
		 cov3D = cov3Ds + idx * 6;
	 }
 
	 // Compute 2D screen-space covariance matrix
	 float3 cov = computeCov2D(p_orig, focal_x, focal_y, tan_fovx, tan_fovy, cov3D, viewmatrix);
 
	 // Invert covariance (EWA algorithm)
	 float det = (cov.x * cov.z - cov.y * cov.y);
	 if (det == 0.0f)
		 return;
	 float det_inv = 1.f / det;
	 float3 conic = { cov.z * det_inv, -cov.y * det_inv, cov.x * det_inv };
 