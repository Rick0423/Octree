import numpy as np

def transformPoint4x3(p, matrix):
    """
    使用 4x4 变换矩阵（matrix）对 3D 点 p (3,) 进行变换，返回 3D 坐标。
    """
    p_h = np.array([p[0], p[1], p[2], 1.0])
    return matrix.dot(p_h)[:3]

def transformPoint4x4(p, matrix):
    """
    使用 4x4 变换矩阵（matrix）对 3D 点 p (3,) 进行齐次变换，返回 4D 坐标。
    """
    p_h = np.array([p[0], p[1], p[2], 1.0])
    return matrix.dot(p_h)

def in_frustum(p, viewmatrix, projmatrix, prefiltered=False):
    """
    判断点 p 是否在视锥体内：
      - 先用 projmatrix 将 p 投影到屏幕空间
      - 再用 viewmatrix 将 p 转换到相机空间，检查 z 值
    如果 p_view.z 小于等于 0.2，则认为该点不在视锥内。
    返回 (bool, p_view) 供后续使用。
    """
    p_hom = transformPoint4x4(p, projmatrix)
    p_w = 1.0 / (p_hom[3] + 1e-7)
    p_proj = p_hom[:3] * p_w
    p_view = transformPoint4x3(p, viewmatrix)
    if p_view[2] <= 0.2:
        if prefiltered:
            raise Exception("Point is filtered although prefiltered is set. This shouldn't happen!")
        return False, p_view
    return True, p_view

def computeCov3D(scale, mod, rot):
    """
    根据缩放 (scale: 3-vector) 与旋转 (rot: 4-vector, 四元数形式, 顺序为 [r, x, y, z])
    参数，计算出 3D 世界空间的协方差矩阵的上三角部分，
    返回一个长度为 6 的数组：[Sigma_00, Sigma_01, Sigma_02, Sigma_11, Sigma_12, Sigma_22]
    """
    S = np.eye(3)
    S[0, 0] = mod * scale[0]
    S[1, 1] = mod * scale[1]
    S[2, 2] = mod * scale[2]
    
    # 提取四元数（假定已归一化或近似归一化）
    r, x, y, z = rot
    R = np.array([
        [1 - 2*(y*y + z*z),     2*(x*y - r*z),     2*(x*z + r*y)],
        [    2*(x*y + r*z), 1 - 2*(x*x + z*z),     2*(y*z - r*x)],
        [    2*(x*z - r*y),     2*(y*z + r*x), 1 - 2*(x*x + y*y)]
    ])
    
    M = S.dot(R)
    Sigma = M.T.dot(M)
    cov3D = np.array([
        Sigma[0, 0],  # Sigma_00
        Sigma[0, 1],  # Sigma_01
        Sigma[0, 2],  # Sigma_02
        Sigma[1, 1],  # Sigma_11
        Sigma[1, 2],  # Sigma_12
        Sigma[2, 2]   # Sigma_22
    ])
    return cov3D

def computeCov2D(mean, focal_x, focal_y, tan_fovx, tan_fovy, cov3D, viewmatrix):
    """
    根据输入的 3D 坐标 mean 及相机参数，将 3D 协方差矩阵 cov3D 转换为 2D 屏幕空间协方差矩阵，
    返回一个长度为 3 的数组 [cov_xx, cov_xy, cov_yy]
    """
    # 首先将点转换到相机空间
    t = transformPoint4x3(mean, viewmatrix)
    
    limx = 1.3 * tan_fovx
    limy = 1.3 * tan_fovy
    txtz = t[0] / t[2]
    tytz = t[1] / t[2]
    # 限制投影后的 x, y 范围
    t[0] = np.clip(txtz, -limx, limx) * t[2]
    t[1] = np.clip(tytz, -limy, limy) * t[2]
    
    # 构造 J 矩阵（部分雅可比矩阵）
    J = np.array([
        [focal_x / t[2], 0.0, -(focal_x * t[0]) / (t[2]*t[2])],
        [0.0, focal_y / t[2], -(focal_y * t[1]) / (t[2]*t[2])],
        [0.0, 0.0, 0.0]
    ])
    
    # 根据 CUDA 代码，W 矩阵取自 viewmatrix 的前三列，但注意排列顺序
    # 若 viewmatrix 是 4x4 矩阵（行主序），则 W 为：
    W = np.array([
        [viewmatrix[0, 0], viewmatrix[1, 0], viewmatrix[2, 0]],
        [viewmatrix[0, 1], viewmatrix[1, 1], viewmatrix[2, 1]],
        [viewmatrix[0, 2], viewmatrix[1, 2], viewmatrix[2, 2]]
    ])
    
    T = W.dot(J)
    
    # 构造 3x3 对称矩阵 Vrk
    Vrk = np.array([
        [cov3D[0], cov3D[1], cov3D[2]],
        [cov3D[1], cov3D[3], cov3D[4]],
        [cov3D[2], cov3D[4], cov3D[5]]
    ])
    
    # 计算协方差矩阵： cov = T^T * Vrk * T
    cov = (T.T).dot(Vrk).dot(T)
    
    # 加上低通滤波项，确保最小宽度/高度
    cov[0, 0] += 0.3
    cov[1, 1] += 0.3
    return np.array([cov[0, 0], cov[0, 1], cov[1, 1]])

def computeConic(cov2D):
    """
    根据 2D 协方差矩阵（cov2D = [cov_xx, cov_xy, cov_yy]），计算 EWA 算法中
    conic 的参数： { cov_yy / det, -cov_xy / det, cov_xx / det }
    """
    det = cov2D[0] * cov2D[2] - cov2D[1]**2
    if det == 0:
        raise Exception("Determinant is zero, cannot invert covariance.")
    det_inv = 1.0 / det
    conic = np.array([
        cov2D[2] * det_inv,
        -cov2D[1] * det_inv,
        cov2D[0] * det_inv
    ])
    return conic

# 示例：给定输入参数，计算 conic 值
if __name__ == "__main__":
    # 示例输入
    mean = np.array([1.0, 2.0, 3.0])
    focal_x = 800.0
    focal_y = 800.0
    # 假设视场角 45°（可根据需要调整）
    tan_fovx = np.tan(np.radians(45.0) / 2)
    tan_fovy = np.tan(np.radians(45.0) / 2)
    
    # 缩放和旋转参数
    scale = np.array([1.0, 1.0, 1.0])
    mod = 1.0
    # 四元数 (r, x, y, z)，这里使用单位四元数代表无旋转
    rot = np.array([1.0, 0.0, 0.0, 0.0])
    
    # 视图矩阵和投影矩阵，简单示例中使用单位矩阵（实际应用中需要使用真实的相机矩阵）
    viewmatrix = np.eye(4)
    projmatrix = np.eye(4)
    
    # 检查点是否在视锥体内
    inside, p_view = in_frustum(mean, viewmatrix, projmatrix)
    if not inside:
        print("Point is not in the frustum.")
        exit(0)
    
    # 计算 3D 协方差矩阵
    cov3D = computeCov3D(scale, mod, rot)
    print(cov3D)
    # 计算 2D 协方差矩阵
    cov2D = computeCov2D(mean, focal_x, focal_y, tan_fovx, tan_fovy, cov3D, viewmatrix)
    print(cov2D)
    # 计算 conic
    conic = computeConic(cov2D)
    print(conic)
    print("Conic value:", conic)
