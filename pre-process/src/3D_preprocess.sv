`timescale 1ns / 1ps
module Gaussian_preprocess #(
  parameter DIMENSION             = 3,
  parameter DATA_WIDTH            = 16,
  parameter COUNTER_WIDTH         = 4,
  parameter PREPROCESS_START_ADDR = 0
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] orig_points_i   [DIMENSION-1:0],
  input logic [DATA_WIDTH-1:0] projmatrix_i    [         15:0],
  input logic [DATA_WIDTH-1:0] viewmatrix_i    [         15:0],
  input logic [DATA_WIDTH-1:0] scale_i         [DIMENSION-1:0],
  input logic [DATA_WIDTH-1:0] scale_modifier_i,
  input logic [DATA_WIDTH-1:0] rotation_i      [          3:0],
  input logic [DATA_WIDTH-1:0] focal_x_i,
  input logic [DATA_WIDTH-1:0] focal_y_i,

  output logic in_ready,
  input  logic in_valid,

  output logic [DATA_WIDTH-1:0] Ttrans_o   [          2:0],
  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0]
);

  //-----------------------------------------------------------
  // Using a 2-stage method for throughput  improvement which can be piplined with II =  cycles.
  // -----------------------------------------------------------
  logic                  terminate;
  logic [DATA_WIDTH-1:0] p_project [DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] T_mat     [          8:0];
  logic [DATA_WIDTH-1:0] sigma_3D  [          5:0];
  logic in_ready_1;
  logic in_ready_2;

  assign in_ready = in_ready_1 & in_ready_2;

  stage_1_1 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_1_1 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .data_type_i  (data_type_i),
    .projmatrix_i (projmatrix_i),
    .viewmatrix_i (viewmatrix_i),
    .orig_points_i(orig_points_i),
    .terminate_o  (terminate),
    .p_project_o  (p_project),
    .T_mat_o      (T_mat),
    .in_ready     (in_ready_1),
    .in_valid     (in_valid)
  );

  stage_1_2 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_1_2 (
    .clk_i           (clk_i),
    .rst_n_i         (rst_n_i),
    .rotation_i      (rotation_i),
    .orig_points_i   (orig_points_i),
    .scale_i         (scale_i),
    .scale_modifier_i(scale_modifier_i),
    .terminate_i     (terminate),
    .sigma_3D_o      (sigma_3D),
    .in_ready        (in_ready_2),
    .in_valid        (in_valid)
  );

  stage_2 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_2 (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .sigma_3D_i (sigma_3D),
    .p_project_i(p_project),
    .T_mat_i    (T_mat),
    .Trans_o    (Ttrans_o),
    .p_project_o(p_project_o)
  );

endmodule


module stage_1_1 #(
  parameter DATA_WIDTH = 16     ,
  parameter DIMENSION  = 3      ,
  parameter MATRIX_SIZE= 4      ,
  parameter DATA_WIDTH_OUT = 36 
  ) 
(
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] projmatrix_i [         15:0],
  input logic [DATA_WIDTH-1:0] viewmatrix_i [         15:0],
  input logic [DATA_WIDTH-1:0] orig_points_i[DIMENSION-1:0],

  output logic                  terminate_o,
  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0],
  output logic [DATA_WIDTH-1:0] T_mat_o    [          8:0],

  input logic                   in_valid,
  output logic                  in_ready
);
  // generate p_view,p_project,T_mat = W*J and to determin whether to skip this Gausians based on p_view
  // utilize a 4*4 matrix multiplication systolic array and some extra logic (J generation using p_view)

  //    float3 p_orig = { orig_points[0], orig_points[1], orig_points[2] };
  //    float4 p_hom = transformPoint4x4(p_orig, projmatrix);
  //    float p_w = 1.0f / (p_hom.w + 0.0000001f);
  //    float3 p_proj = { p_hom.x * p_w, p_hom.y * p_w, p_hom.z * p_w };
  //    float3 p_view;
  //   
  //    in_frustum   ---> float4 p_view = transformPoint4x3(p_orig, viewmatrix); if (p_view.z <= 0.2f)
  //    float3 t = transformPoint4x3(mean, viewmatrix);
  //    
  //    const float limx = 1.3f * tan_fovx;
  //    const float limy = 1.3f * tan_fovy;
  //    const float txtz = t.x / t.z;
  //    const float tytz = t.y / t.z;
  //    t.x = min(limx, max(-limx, txtz)) * t.z;
  //    t.y = min(limy, max(-limy, tytz)) * t.z;
  //    
  //    glm::mat3 J = glm::mat3(
  //    	focal_x / t.z, 0.0f, -(focal_x * t.x) / (t.z * t.z),
  //    	0.0f, focal_y / t.z, -(focal_y * t.y) / (t.z * t.z),
  //    	0, 0, 0);
  //    
  //    glm::mat3 W = glm::mat3(
  //    	viewmatrix[0], viewmatrix[4], viewmatrix[8],
  //    	viewmatrix[1], viewmatrix[5], viewmatrix[9],
  //    	viewmatrix[2], viewmatrix[6], viewmatrix[10]);
  //    
  //    glm::mat3 T = W * J;
  //        
  //
  localparam IDLE = 0, PROJ = 1, VIEW = 2, FINAL = 3;
  localparam PROJ_MATRIX = 0, VIEW_MATRIX = 1, JACOB_MATRIX = 2;
  localparam VIEW_ACT = 0, POINT_1_ACT = 1, POINT_0_ACT = 2;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_projmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_viewmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_Jacob[15:0];
  logic [DATA_WIDTH-1:0] reg_orig_points[DIMENSION-1:0];

  logic [DATA_WIDTH-1:0] reg_p_view[2:0];
  logic [DATA_WIDTH-1:0] reg_p_hom [3:0];

  logic [3:0] state_1_1;
  logic [4:0] cnt;
  logic [1:0] index_cnt;

  logic gemm_en;
  logic gemm_load_weight;
  logic gemm_data_type;
  logic [DATA_WIDTH-1:0] gemm_weight[MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH-1:0] gemm_act[MATRIX_SIZE-1:0];
  logic [DATA_WIDTH_OUT-1:0] gemm_mat[MATRIX_SIZE-1:0];

  logic [3:0] weight_sel;  //PROJ_MATRIX,VIEW_MATRIX,JACOB_MATRIX
  logic [3:0] act_sel;  //      POINT_1_ACT,POINT_0_ACT,VIEW

  //select activation and weight to GEMM 
  always_comb begin : GEMM_SIGNAL_SEL 
    if (!rst_n_i) begin
      gemm_data_type = 0;
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
      for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
    end else begin
      gemm_data_type = reg_data_type;
      //Activation
      case (act_sel)
        POINT_1_ACT: begin  // use 1 to fill 
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1) gemm_act[i] = reg_orig_points[i];
          gemm_act[3] = 1;
        end
        POINT_0_ACT: begin  // use 0 to fill 
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1) 
            gemm_act[i] = reg_orig_points[i];
          gemm_act[3] = 0;
        end
        VIEW_ACT: begin
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1)
            gemm_act[i] = reg_viewmatrix[index_cnt+4*i[1:0]];
          gemm_act[3] = 0;
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
        end
      endcase
      //Weight
      case (weight_sel)
        PROJ_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = reg_projmatrix[i];
        end
        VIEW_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
            if (i % 4 == 3 ) begin
              gemm_weight[i] = 0;
            end else begin
              gemm_weight[i] = reg_projmatrix[i];
            end
          end
        end
        JACOB_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
            if (i % 4 == 3 | i > 10) begin
              gemm_weight[i] = 0;
            end else begin
              gemm_weight[i] = reg_Jacob[i];
            end
          end
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
        end
      endcase
    end
  end

  //hold input data in reg
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_INPUT
    if (!rst_n_i) begin
      reg_data_type <= 0;
      for (int i = 0; i < 16; i += 1) begin
        reg_projmatrix[i] <= 0;
        reg_viewmatrix[i] <= 0;
      end
      for (int j = 0; j < DIMENSION; j += 1) reg_orig_points[j] <= 0;
    end else if (in_valid) begin
      reg_data_type <= data_type_i;
      for (int i = 0; i < 16; i += 1) begin
        reg_projmatrix[i] <= projmatrix_i[i];
        reg_viewmatrix[i] <= viewmatrix_i[i];
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        reg_orig_points[j] <= orig_points_i[j];
      end
    end
  end

  always_ff @( posedge clk_i or negedge rst_n_i ) begin : Jacob_matrix_generation
    if(!rst_n_i)begin
      for(int i=0;i<16;i+=1)
        reg_Jacob[i] <= 1;
    end else begin

    end
  end

  //control path , control the whole thing
  always_ff @(posedge clk_i or negedge rst_n_i) begin : state_machine
    if (!rst_n_i) begin
      cnt              <= 0;
      state_1_1        <= IDLE;
      gemm_load_weight <= 0;
    end else begin
      case (state_1_1)
        IDLE: begin
          if (in_valid) begin
            in_ready   <= 0;
            ////prepare PE array for view_matrix mul
            state_1_1  <= VIEW;
            cnt        <= 0;
            weight_sel <= VIEW_MATRIX;
            act_sel    <= POINT_1_ACT;
          end else begin
            cnt              <= 0;
            in_ready         <= 1;
            gemm_load_weight <= 0;
          end
        end
        VIEW: begin
          if (cnt == 0) begin
            gemm_load_weight <= 1;
            cnt              <= cnt + 1;
          end else if (cnt == 1) begin
            gemm_en <= 1;
            cnt     <= cnt + 1;
          end else if (cnt == 8) begin
            for (int i = 0; i < 3; i += 1) begin
              reg_p_view[i] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
            end
            ////prepare PE array for proj_matrix mul
            state_1_1  <= PROJ;
            cnt        <= 0;
            weight_sel <= PROJ_MATRIX;
            act_sel    <= POINT_1_ACT;
          end else begin
            cnt <= cnt + 1;
          end
        end
        PROJ: begin
          if (cnt == 0) begin
            gemm_load_weight <= 1;
            cnt              <= cnt + 1;
          end else if (cnt == 1) begin
            gemm_en <= 1;
            cnt     <= cnt + 1;
          end else if (cnt == 8) begin
            for (int i = 0; i < 4; i += 1) begin
              reg_p_hom[i] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
            end
            state_1_1 <= FINAL;
            cnt        <= 0;
            weight_sel <= JACOB_MATRIX;
            act_sel    <= VIEW_ACT;
          end else begin
            cnt <= cnt + 1;
          end
        end
        FINAL:begin
          if (cnt == 0) begin
            gemm_load_weight <= 1;
            cnt              <= cnt + 1;
          end else if (cnt == 1) begin
            gemm_en <= 1;
            cnt     <= cnt + 1;
          end else if (cnt == 8) begin
            if(index_cnt == 2)begin
              state_1_1 <= IDLE;
              index_cnt <= 0;
            end
            index_cnt <= index_cnt + 1;
            for (int i = 0; i < 3; i += 1) begin
              T_mat_o[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
            end
            state_1_1 <= FINAL;
          end else begin
            cnt <= cnt + 1;
          end
        end
      endcase
    end
  end

  GEMM_4 #(
    .DATA_WIDTH    (DATA_WIDTH),
    .DATA_WIDTH_OUT(36),
    .MATRIX_SIZE   (4)
  ) u_GEMM_4 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .en_i         (gemm_en),
    .load_weight_i(gemm_load_weight),
    .data_type_i  (gemm_data_type),
    .weight_i     (gemm_weight),
    .act_i        (gemm_act),
    .mat_o        (gemm_mat)
  );


endmodule

module stage_1_2 #(
  parameter DATA_WIDTH = 16,
  parameter DIMENSION  = 3
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic [DATA_WIDTH-1:0] rotation_i      [          3:0],
  input logic [DATA_WIDTH-1:0] orig_points_i   [DIMENSION-1:0],
  input logic [DATA_WIDTH-1:0] scale_i         [DIMENSION-1:0],
  input logic [DATA_WIDTH-1:0] scale_modifier_i,
  input logic                  terminate_i,

  input logic                   in_valid,
  output logic                  in_ready,

  output logic [DATA_WIDTH-1:0] sigma_3D_o[5:0]
);
  // generate cov_3D matrix, terminate if the Gausian is not in the frustum 
  // utilize a 3*3 matrix multiplication systolic array and some extra logic (S,R generation )

  //  Create scaling matrix
  //	glm::mat3 S = glm::mat3(1.0f);
  //	S[0][0] = mod * scale.x;
  //	S[1][1] = mod * scale.y;
  //	S[2][2] = mod * scale.z;
  //
  //	// Normalize quaternion to get valid rotation
  //	glm::vec4 q = rot;// / glm::length(rot);
  //	float r = q.x;
  //	float x = q.y;
  //	float y = q.z;
  //	float z = q.w;
  //
  //	// Compute rotation matrix from quaternion
  //	glm::mat3 R = glm::mat3(
  //		1.f - 2.f * (y * y + z * z), 2.f * (x * y - r * z), 2.f * (x * z + r * y),
  //		2.f * (x * y + r * z), 1.f - 2.f * (x * x + z * z), 2.f * (y * z - r * x),
  //		2.f * (x * z - r * y), 2.f * (y * z + r * x), 1.f - 2.f * (x * x + y * y)
  //	);
  //
  //	glm::mat3 M = S * R;
  //
  //	// Compute 3D world covariance matrix Sigma
  //	glm::mat3 Sigma = glm::transpose(M) * M;
  assign in_ready =1;

endmodule

module stage_2 #(
  parameter DATA_WIDTH = 16,
  parameter DIMENSION  = 3
) (
  input  logic                  clk_i,
  input  logic                  rst_n_i,
  input  logic [DATA_WIDTH-1:0] sigma_3D_i [          5:0],
  input  logic [DATA_WIDTH-1:0] p_project_i[DIMENSION-1:0],
  input  logic [DATA_WIDTH-1:0] T_mat_i    [          8:0],
  output logic [DATA_WIDTH-1:0] Trans_o    [          2:0],
  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0]
);
  //  glm::mat3 Vrk = glm::mat3(
  //		cov3D[0], cov3D[1], cov3D[2],
  //		cov3D[1], cov3D[3], cov3D[4],
  //		cov3D[2], cov3D[4], cov3D[5]);
  //
  //	glm::mat3 cov = glm::transpose(T) * glm::transpose(Vrk) * T;
  //
  //	// Apply low-pass filter: every Gaussian should be at least
  //	// one pixel wide/high. Discard 3rd row and column.
  //	cov[0][0] += 0.3f;
  //	cov[1][1] += 0.3f;
  //	return { float(cov[0][0]), float(cov[0][1]), float(cov[1][1]) };
  // 
  //	
  //	calculate T
  //	inverse T
  //	
  //	
endmodule




//module GEMM_4 #(
//  parameter DATA_WIDTH     = 16,
//  parameter DATA_WIDTH_OUT = 36,
//  parameter MATRIX_SIZE    = 3
//) (
//  input  logic                      clk_i,
//  input  logic                      rst_n_i,
//  input  logic                      en_i,
//  input  logic                      load_weight_i,
//  input  logic                      data_type_i,
//  input  logic [    DATA_WIDTH-1:0] weight_i     [MATRIX_SIZE*MATRIX_SIZE-1:0],
//  input  logic [    DATA_WIDTH-1:0] act_i        [            MATRIX_SIZE-1:0],
//  output logic [DATA_WIDTH_OUT-1:0] mat_o        [            MATRIX_SIZE-1:0]
//);
//endmodule
//
//module GEMM_3 #(
//  parameter DATA_WIDTH     = 16,
//  parameter DATA_WIDTH_OUT = 36,
//  parameter MATRIX_SIZE    = 3
//) (
//  input  logic                      clk_i,
//  input  logic                      rst_n_i,
//  input  logic                      en_i,
//  input  logic                      load_weight_i,
//  input  logic                      data_type_i,
//  input  logic [    DATA_WIDTH-1:0] weight_i     [MATRIX_SIZE*MATRIX_SIZE-1:0],
//  input  logic [    DATA_WIDTH-1:0] act_i        [            MATRIX_SIZE-1:0],
//  output logic [DATA_WIDTH_OUT-1:0] mat_o        [            MATRIX_SIZE-1:0]
//);
//endmodule
//
