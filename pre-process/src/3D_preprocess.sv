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
  input logic [DATA_WIDTH-1:0] tan_fovx,
  input logic [DATA_WIDTH-1:0] tan_fovy,

  output logic in_ready,
  input  logic in_valid,

  output logic out_ready,
  input  logic out_valid,

  output logic [DATA_WIDTH-1:0] result   [          2:0],
  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0]
);

  //-----------------------------------------------------------
  // Using a 4-stage Pipline method for throughput 
  // -----------------------------------------------------------
  
  //-----------------------------------------------------------
  // between stage 1 and input 
  // -----------------------------------------------------------
  logic                  in_ready_1_1;
  logic                  in_ready_1_2;
  //-----------------------------------------------------------
  // whithin stage 1 
  // -----------------------------------------------------------
  logic                  terminate;  // out of fustum , skip this Gaussian 
  //-----------------------------------------------------------
  // between stage 1 and 2 
  // -----------------------------------------------------------
  logic                  valid_1_1;
  logic                  valid_1_2;
  logic                  data_type_1_1;
  logic [DATA_WIDTH-1:0] projmatrix_1   [15:0];
  logic [DATA_WIDTH-1:0] viewmatrix_1   [15:0];
  logic [DATA_WIDTH-1:0] orig_points_1  [ DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] Jacobmatrix_1  [ 8:0];
  logic                  out_ready_1_1;

  logic                  data_type_1_2;
  logic                  out_ready_1_2;
  logic [DATA_WIDTH-1:0] rotation_matrix_1  [ 8:0];
  logic [DATA_WIDTH-1:0] scale_matrix_1     [ 8:0];
  //-----------------------------------------------------------
  // between stage 2 and 3 
  // -----------------------------------------------------------
  logic                  valid_2;
  logic                  in_ready_2_1;
  logic                  out_ready_2_1;
  logic                  data_type_2_1;
  logic [DATA_WIDTH-1:0] p_project_2 [DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] T_mat_2     [ 8:0];

  logic                  in_ready_2_2;
  logic                  out_ready_2_2;
  logic                  data_type_2_2;
  logic [DATA_WIDTH-1:0] cov_3D_2     [ 8:0];
  //-----------------------------------------------------------
  // between stage 3 and 4 
  // -----------------------------------------------------------
  logic                  valid_3;
  logic [DATA_WIDTH-1:0] cov_2D_3     [ 3:0];
  logic [DATA_WIDTH-1:0] p_project_3 [DIMENSION-1:0];
  logic                  data_type_3;
  logic                  in_ready_3;
  logic                  out_ready_3;
  logic                  in_ready_4;
  logic                  valid_4;

  //for debug
  logic data_type_erro;
  assign data_type_erro = (data_type_2_1 != data_type_2_2) | (data_type_1_1 != data_type_1_2);

  //valid-ready conjuction 
  always_ff @(posedge clk_i or negedge rst_n_i) begin : blockName
    if (!rst_n_i) begin
      valid_1_1 <= 0;
      valid_1_2 <= 0;
      valid_3   <= 0;
      valid_4   <= 0;
      in_ready  <= 0;
    end else begin
      valid_1_1 <= out_ready_1_1 & in_ready_2_1;
      valid_1_2 <= out_ready_1_2 & in_ready_2_2;
      valid_3   <= out_ready_2_1 & out_ready_2_2 & in_ready_3;
      valid_4   <= out_ready_3 & in_ready_4;
      in_ready  <= in_ready_1_1 & in_ready_1_2;
    end
  end

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
    .focal_x_i    (focal_x_i),
    .focal_y_i    (focal_y_i),
    .tan_fovx     (tan_fovx),
    .tan_fovy     (tan_fovy),
    .terminate_o  (terminate),
    .data_type_o  (data_type_1_1),
    .projmatrix_o (projmatrix_1),
    .viewmatrix_o (viewmatrix_1),
    .orig_points_o(orig_points_1),
    .Jacobmatrix_o  (Jacobmatrix_1),
    .in_valid     (in_valid),
    .in_ready     (in_ready_1_1),
    .out_valid    (valid_1_1),
    .out_ready    (out_ready_1_1)
  );


  stage_1_2 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_1_2 (
    .clk_i           (clk_i),
    .rst_n_i         (rst_n_i),
    .data_type_i     (data_type_i),
    .rotation_i      (rotation_i),
    .scale_i         (scale_i),
    .scale_modifier_i(scale_modifier_i),
    .terminate_i     (terminate),
    .in_valid        (in_valid),
    .in_ready        (in_ready_1_2),
    .out_valid       (valid_1_2),
    .out_ready       (out_ready_1_2),
    .data_type_o     (data_type_1_2),
    .rotation_matrix_o (rotation_matrix_1),
    .scale_matrix_o    (scale_matrix_1)
  );

  stage_2_1 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_2_1 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .data_type_i  (data_type_1_1),
    .Jacobmatrix  (Jacobmatrix_1),
    .projmatrix_i (projmatrix_1),
    .viewmatrix_i (viewmatrix_1),
    .orig_points_i(orig_points_1),
    .p_project_o  (p_project_2),
    .T_mat_o      (T_mat_2),
    .data_type_o  (data_type_2_1),
    .in_valid     (valid_1_1),
    .in_ready     (in_ready_2_1),
    .out_valid    (valid_3),
    .out_ready    (out_ready_2_1)
  );

  stage_2_2 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_2_2 (
    .clk_i          (clk_i),
    .rst_n_i        (rst_n_i),
    .data_type_i    (data_type_1_2),
    .rotation_matrix(rotation_matrix_1),
    .scale_matrix   (scale_matrix_1),
    .cov_3D_o       (cov_3D_2),
    .data_type_o    (data_type_2_2),
    .in_valid       (valid_1_2),
    .in_ready       (out_ready_1_2),
    .out_valid      (valid_3),
    .out_ready      (out_ready_2_2)
  );



  stage_3 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_3 (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .data_type_i(data_type_2_1),
    .cov_3D_i   (cov_3D_2),
    .p_project_i(p_project_2),
    .T_mat_i    (T_mat_2),
    .cov_2D_o   (cov_2D_3),
    .p_project_o(p_project_3),
    .data_type_o(data_type_3),
    .in_valid   (valid_3),
    .in_ready   (in_ready_3),
    .out_valid  (valid_4),
    .out_ready  (out_ready_3)
  );

  stage_4 #(
    .DATA_WIDTH(DATA_WIDTH),
    .DIMENSION (DIMENSION)
  ) u_stage_4 (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .data_type_i(data_type_i),
    .p_project_i(p_project_3),
    .cov_2D     (cov_2D_3),
    .p_project_o(p_project_o),
    .result     (result),
    .in_valid   (valid_4),
    .in_ready   (in_ready_4),
    .out_valid  (out_valid),
    .out_ready  (out_ready)
  );

endmodule


module stage_1_1 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 3,
  parameter DATA_WIDTH_OUT = 36
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] projmatrix_i [15:0],
  input logic [DATA_WIDTH-1:0] viewmatrix_i [15:0],
  input logic [DATA_WIDTH-1:0] orig_points_i[ 2:0],
  input logic [DATA_WIDTH-1:0] focal_x_i,
  input logic [DATA_WIDTH-1:0] focal_y_i,
  input logic [DATA_WIDTH-1:0] tan_fovx,
  input logic [DATA_WIDTH-1:0] tan_fovy,

  output logic terminate_o,

  output logic                  data_type_o,
  output logic [DATA_WIDTH-1:0] projmatrix_o [15:0],
  output logic [DATA_WIDTH-1:0] viewmatrix_o [15:0],
  output logic [DATA_WIDTH-1:0] orig_points_o[ 2:0],
  output logic [DATA_WIDTH-1:0] Jacobmatrix_o[ 8:0],

  input  logic in_valid,
  output logic in_ready,

  input  logic out_valid,
  output logic out_ready
);
  // using several mul  ,add  ,div  to generate Jacob matrix  and determine in_frustum

  localparam IDLE = 0, DONE=1,OUTPUT=2;
  localparam PROJ_MATRIX = 0, VIEW_MATRIX = 1, JACOB_MATRIX = 2;
  localparam VIEW_ACT = 0, POINT_1_ACT = 1, POINT_0_ACT = 2;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_projmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_viewmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_orig_points[DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] reg_Jacobmatrix  [ 8:0];

  logic [DATA_WIDTH-1:0] reg_p_view[2:0];
  logic [DATA_WIDTH-1:0] reg_p_hom [3:0];

  logic [3:0] state_1_1;
  logic [4:0] cnt;
  logic [1:0] index_cnt;
  logic check_terminate;

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

  //generate output logic 
  always_ff @(posedge clk_i or negedge rst_n_i) begin :HOLD_OUTPUT_DATA
    if (!rst_n_i) begin
      data_type_o <= 0;
      for (int i = 0; i < 16; i += 1) begin
        projmatrix_o[i] <= 0;
        viewmatrix_o[i] <= 0;
      end
      for (int j = 0; j < DIMENSION; j += 1) orig_points_o[j] <= 0;
      for (int i=0;i<9;i+=1  ) Jacobmatrix_o[i]<=0;
    end else if(state_1_1 == DONE) begin  // TODO:add the condition to write the data to the output buffer
      data_type_o <= reg_data_type;
      for (int i = 0; i < 16; i += 1) begin
        projmatrix_o[i] <= reg_projmatrix[i];
        viewmatrix_o[i] <= reg_viewmatrix[i];
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        orig_points_o[j] <= reg_orig_points[j];
      end
      for (int i=0;i<9;i+=1  ) Jacobmatrix_o[i]<=reg_Jacobmatrix[i];
    end
  end



  //data path generate Jacob matrix
  always_ff @( posedge clk_i or negedge rst_n_i ) begin : Jacob_matrix_generation
    if(!rst_n_i)begin
      for(int i=0;i<16;i+=1)
        reg_Jacobmatrix[i] <= 16'h5640; // TO BE UPDATED 
    end else begin

    end
  end

  // generate terminate signal 
  always_comb begin : generate_terminate
    if(!rst_n_i)begin
      terminate_o = 0;
    end else begin
      if(check_terminate)begin
        if(data_type_i)begin
          //FP compare 
          //reg_p_view[2] with 0.2f
          if(reg_p_view[2][15]) begin // 0.2f in FP16  
            terminate_o =1 ;
          end else if(((reg_p_view[2][14-:5] < 5'b01100) | 
          ((reg_p_view[2][14-:5] == 5'b01100) & (reg_p_view[2][10:0] <= 11'b1001100110) ))) begin
            terminate_o =1 ; 
          end else begin
            terminate_o =0 ; 
          end
        end else begin
          //INT compare 
          //reg_p_view[2] with 0.2f TO BE DETERMINED 
          if(reg_p_view[2] < 16'h0001) begin // TODO determine the zero point 
            terminate_o = 1;
          end else begin
            terminate_o = 0;
          end
        end
      end else begin
        terminate_o = 0;
      end
    end
  end

  //control path , control the whole thing
  always_ff @(posedge clk_i or negedge rst_n_i) begin : state_machine
    if (!rst_n_i) begin
      cnt             <= 0;
      state_1_1       <= IDLE;
      in_ready        <= 1;
      check_terminate <= 0;
    end else begin
      case (state_1_1)
        IDLE: begin
          if (in_valid) begin
            in_ready  <= 0;
            state_1_1 <= DONE; // TODO:calculate the data;
            cnt       <= 0;
          end else begin
            cnt             <= 0;
            in_ready        <= 1;
            check_terminate <= 0;
          end
        end
        DONE:begin
          state_1_1 <= OUTPUT;
        end
        OUTPUT:begin
          if(out_valid) begin
            out_ready <= 0;
            state_1_1<= IDLE;
          end else begin
            out_ready <= 1;
          end
        end
      endcase
    end
  end

endmodule

module stage_1_2 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 4,
  parameter DATA_WIDTH_OUT = 36
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] rotation_i      [3:0],
  input logic [DATA_WIDTH-1:0] scale_i         [2:0],
  input logic [DATA_WIDTH-1:0] scale_modifier_i,

  input logic                  terminate_i,

  input  logic in_valid,
  output logic in_ready,

  input  logic out_valid,
  output logic out_ready,

  output logic                  data_type_o,
  output logic [DATA_WIDTH-1:0] rotation_matrix_o[8:0],
  output logic [DATA_WIDTH-1:0] scale_matrix_o   [8:0]
);
  // using several mul  ,add  ,div  to generate matrix S,and matrix R

  localparam IDLE = 0, CAL = 1,DONE = 2, OUTPUT=3;
  localparam PROJ_MATRIX = 0, VIEW_MATRIX = 1, JACOB_MATRIX = 2;
  localparam VIEW_ACT = 0, POINT_1_ACT = 1, POINT_0_ACT = 2;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_scale[2:0];
  logic [DATA_WIDTH-1:0] reg_scale_modifier;
  logic [DATA_WIDTH-1:0] reg_scalematrix[8:0];
  logic [DATA_WIDTH-1:0] reg_rotation[3:0];
  logic [DATA_WIDTH-1:0] reg_rotationmatrix[8:0];

  logic [3:0] state_1_2;
  logic [4:0] cnt;
  logic [1:0] index_cnt;

  //hold input data
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_INPUT
    if (!rst_n_i) begin
      reg_data_type  <= 0;
      reg_scale_modifier <= 0;
      for (int j = 0; j < 4; j += 1) reg_rotation[j] <= 0;
      for (int k = 0; k < 3; k += 1) reg_scale[k] <= 0;
    end else if (in_valid) begin
      reg_data_type  <= data_type_i;
      reg_scale_modifier <= scale_modifier_i;
      for (int j = 0; j < 4; j += 1) reg_rotation[j] <= rotation_i[j];
      for (int k = 0; k < 3; k += 1) reg_scale[k] <= scale_i[k];
    end
  end

  //write output data to output buffer
  always_ff @(posedge clk_i or negedge rst_n_i) begin : write_output
    if (!rst_n_i) begin
      data_type_o        <= 0;
      reg_scale_modifier <= 0;
      for (int i = 0; i < 9; i += 1) begin
        rotation_matrix_o[i] <= 0;
        scale_matrix_o[i]    <= 0;
      end
    end else if (state_1_2 == DONE) begin
      data_type_o <= reg_data_type;
      for (int i = 0; i < 9; i += 1) begin
        rotation_matrix_o[i] <= reg_rotationmatrix[i];
        scale_matrix_o[i]    <= reg_scalematrix[i];
      end
    end
  end

  //control path
  always_ff @( posedge clk_i or negedge rst_n_i ) begin : control_path
    if(!rst_n_i)begin
      state_1_2 <= IDLE;
    end else begin
      case(state_1_2)
      IDLE:begin
        if(in_valid) begin
          in_ready <= 0;
          state_1_2 <= CAL;
        end else begin
          in_ready <= 1;
        end
      end
      CAL:begin
        state_1_2 <= DONE;
      end
      DONE:begin
        state_1_2<= OUTPUT;
      end
      OUTPUT:begin
        if(out_valid) begin
          out_ready<=0;
          state_1_2<= IDLE;
        end else begin
          out_ready <= 1;
        end
      end
      default:begin
        
      end
      endcase
    end
  end

endmodule

module stage_2_1 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 4,
  parameter DATA_WIDTH_OUT = 36
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] Jacobmatrix  [ 8:0],
  input logic [DATA_WIDTH-1:0] projmatrix_i [15:0],
  input logic [DATA_WIDTH-1:0] viewmatrix_i [15:0],
  input logic [DATA_WIDTH-1:0] orig_points_i[ 2:0],

  output logic [DATA_WIDTH-1:0] p_project_o[2:0],
  output logic [DATA_WIDTH-1:0] T_mat_o    [8:0],
  output logic                  data_type_o,

  input  logic in_valid,
  output logic in_ready,

  input  logic out_valid,
  output logic out_ready
);
  // calculate p_project, W*J 
  localparam IDLE = 0, CAL=2,DONE=3,OUTPUT=4;
  localparam PROJ_MATRIX = 0, JACOB_MATRIX = 1;
  localparam VIEW_ACT = 0, POINT_1_ACT = 1;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_projmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_viewmatrix[15:0];
  logic [DATA_WIDTH-1:0] reg_Jacobmatrix  [ 8:0];
  logic [DATA_WIDTH-1:0] reg_orig_points[DIMENSION-1:0];

  logic [DATA_WIDTH-1:0] reg_p_hom    [3:0];
  logic [DATA_WIDTH-1:0] reg_p_project[2:0];
  logic [DATA_WIDTH-1:0] reg_T_mat    [8:0];

  logic [3:0] state_2_1;
  logic [4:0] cnt;
  logic [1:0] index_cnt;
  logic cal_project;     // to calculate p_proj with p_hom
  logic p_proj_done;     // indicating the div is done, p_proj is done

  logic gemm_en;
  logic gemm_data_type;
  logic [DATA_WIDTH-1:0] gemm_weight[MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH-1:0] gemm_act[MATRIX_SIZE-1:0];
  logic [DATA_WIDTH_OUT-1:0] gemm_mat[MATRIX_SIZE-1:0];

  logic [3:0] weight_sel;  //PROJ_MATRIX,JACOB_MATRIX
  logic [3:0] act_sel;     //POINT_1_ACT,VIEW
  

  //hold input data in reg
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_INPUT
    if (!rst_n_i) begin
      reg_data_type <= 0;
      for (int i = 0; i < 16; i += 1) begin
        reg_projmatrix[i] <= 0;
        reg_viewmatrix[i] <= 0;
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        reg_orig_points[j] <= 0;
      end
      for (int i = 0; i < 9; i += 1) begin
        reg_Jacobmatrix[i] <= 0;
      end
    end else if (in_valid) begin
      reg_data_type <= data_type_i;
      for (int i = 0; i < 16; i += 1) begin
        reg_projmatrix[i] <= projmatrix_i[i];
        reg_viewmatrix[i] <= viewmatrix_i[i];
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        reg_orig_points[j] <= orig_points_i[j];
      end
      for (int i = 0; i < 9; i += 1) begin
        reg_Jacobmatrix[i] <= Jacobmatrix[i];
      end
    end
  end

  //generate output logic 
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_OUTPUT_DATA
    if (!rst_n_i) begin
      data_type_o <= 0;
      for (int i = 0; i < 9; i += 1) begin
        T_mat_o[i] <= 0;
      end
      for (int j = 0; j < 3; j += 1) p_project_o[j] <= 0;
    end else if(state_2_1 == DONE) begin  // TODO:add the condition to write the data to the output buffer
      data_type_o <= reg_data_type;
      for (int i = 0; i < 9; i += 1) begin
        T_mat_o[i] <= reg_T_mat[i];
      end
      for (int j = 0; j < 3; j += 1) p_project_o[j] <= reg_p_project[j];
    end
  end

  //generate signals passed into the systolic array
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
          gemm_act[3] = (reg_data_type)?16'h3C00:1; 
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
        JACOB_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
            if (i % 4 == 3 | i > 10) begin
              gemm_weight[i] = 0;
            end else begin
              gemm_weight[i] = reg_Jacobmatrix[i];
            end
          end
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
        end
      endcase
    end
  end


  //control path , control the whole thing
  always_ff @(posedge clk_i or negedge rst_n_i) begin : state_machine
    if (!rst_n_i) begin
      cnt             <= 0;
      state_2_1       <= IDLE;
      in_ready        <= 1;
      weight_sel      <= PROJ_MATRIX;
      act_sel         <= POINT_1_ACT;
      gemm_en         <= 0;
      index_cnt       <= 0;
    end else begin
      case (state_2_1)
        IDLE: begin
          if (in_valid) begin
            in_ready  <= 0;
            state_2_1 <= CAL;
            cnt       <= 0;
            cal_project <= 0;
          end else begin
            cnt             <= 0;
            in_ready        <= 1;
            weight_sel      <= PROJ_MATRIX;
            act_sel         <= POINT_1_ACT;
            gemm_en         <= 0;
            index_cnt       <= 0;
            cal_project <= 0;
          end
        end
        CAL: begin
          case (cnt)
            0: begin
              weight_sel <= PROJ_MATRIX;
              act_sel    <= POINT_1_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            1: begin
              cnt        <= cnt + 1;
              weight_sel <= JACOB_MATRIX;
              act_sel    <= VIEW_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            5: begin
              gemm_en   <= 0;
              cnt       <= cnt + 1;
              index_cnt <= 0;
            end
            7: begin
              cnt <= cnt + 1;
              for (int i = 0; i < 4; i += 1) begin
                reg_p_hom[i] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
              cal_project = 1;
            end
            8: begin
              if (index_cnt == 2) begin
                cnt <= cnt +1;
                index_cnt <= 0;
              end
              index_cnt <= index_cnt + 1;
              for (int i = 0; i < 3; i += 1) begin
                reg_T_mat[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
              cal_project = 1;
            end
            9:begin
              if(p_proj_done)begin
                state_2_1 <= DONE;
              end
            end
            default: begin
              if ((cnt!=0) & (index_cnt < 2)) begin
                index_cnt <= index_cnt + 1;
              end
              cnt <= cnt + 1;
            end
          endcase
        end
        DONE: begin
            if (out_valid) begin
              out_ready <= 0;
              state_2_1 <= IDLE;
            end else begin
              out_ready <= 1;
            end
          end
      endcase
    end
  end

  //using a 4*4 array for proj especially
  GEMM_4 #(
    .DATA_WIDTH    (DATA_WIDTH),
    .DATA_WIDTH_OUT(36),
    .MATRIX_SIZE   (4)
  ) u_GEMM_4 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .en_i         (gemm_en),
    .data_type_i  (gemm_data_type),
    .weight_i     (gemm_weight),
    .act_i        (gemm_act),
    .mat_o        (gemm_mat)
  );

endmodule

module stage_2_2 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 3,
  parameter DATA_WIDTH_OUT = 36
) (
  input  logic                  clk_i,
  input  logic                  rst_n_i,
  input  logic                  data_type_i,
  input  logic [DATA_WIDTH-1:0] rotation_matrix[8:0],
  input  logic [DATA_WIDTH-1:0] scale_matrix   [8:0],
  output logic [DATA_WIDTH-1:0] cov_3D_o       [8:0],
  output logic                  data_type_o,
  input  logic                  in_valid,
  output logic                  in_ready,
  input  logic                  out_valid,
  output logic                  out_ready
);
// generate cov_3D matrix, terminate if the Gausian is not in the frustum 
// utilize a 3*3 matrix multiplication systolic array 
//	glm::mat3 M = S * R;
//	glm::mat3 Sigma = glm::transpose(M) * M;
  
// calculate p_project, W*J 
  localparam IDLE = 0, CAL=2,DONE=3,OUTPUT=4;
  localparam ROT_MATRIX =0 ,M_MATRIX=1;
  localparam S_ACT=0,M_ACT=1;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_rotation_matrix[8:0];
  logic [DATA_WIDTH-1:0] reg_scale_matrix   [8:0];
  logic [DATA_WIDTH-1:0] reg_cov_3D         [8:0];

  logic [DATA_WIDTH-1:0] reg_M_matrix       [8:0];

  logic [3:0] state_2_2;
  logic [4:0] cnt;
  logic [1:0] index_cnt;

  logic gemm_en;
  logic gemm_data_type;
  logic [DATA_WIDTH-1:0] gemm_weight[MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH-1:0] gemm_act[MATRIX_SIZE-1:0];
  logic [DATA_WIDTH_OUT-1:0] gemm_mat[MATRIX_SIZE-1:0];

  logic [3:0] weight_sel;  //ROT_MATRIX,M_MATRIX
  logic [3:0] act_sel;     //S_ACT,M_ACT
  

  //hold input data in reg
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_INPUT
    if (!rst_n_i) begin
      reg_data_type <= 0;
      for (int i = 0; i < 9; i += 1) begin
        reg_rotation_matrix[i] <= 0;
        reg_scale_matrix[i] <= 0;
      end
    end else if (in_valid) begin
      reg_data_type <= data_type_i;
      for (int i = 0; i < 9; i += 1) begin
        reg_rotation_matrix[i] <= rotation_matrix[i];
        reg_scale_matrix[i] <= scale_matrix[i];
      end
    end
  end

  //generate output logic 
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_OUTPUT_DATA
    if (!rst_n_i) begin
      data_type_o <= 0;
      for (int i = 0; i < 9; i += 1) begin
        cov_3D_o[i] <= 0;
      end
    end else if(state_2_2 == DONE) begin  // TODO:add the condition to write the data to the output buffer
      data_type_o <= reg_data_type;
      for (int i = 0; i < 9; i += 1) begin
        cov_3D_o[i] <= reg_cov_3D[i];
      end
    end
  end

  //generate signals passed into the systolic array
  always_comb begin : GEMM_SIGNAL_SEL 
    if (!rst_n_i) begin
      gemm_data_type = 0;
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
      for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
    end else begin
      gemm_data_type = reg_data_type;
      //Activation
      case (act_sel)
        S_ACT: begin  
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1) 
            gemm_act[i] = reg_scale_matrix[index_cnt+4*i[1:0]];
        end
        M_ACT: begin
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1)
            gemm_act[i] = reg_M_matrix[index_cnt+4*i[1:0]]; // TODO determine the index here
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
        end
      endcase
      //Weight
      case (weight_sel)
        ROT_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) 
            gemm_weight[i] = reg_rotation_matrix[i];
        end
        M_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) 
            gemm_weight[i] = reg_M_matrix[i];
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
        end
      endcase
    end
  end


  //control path , control the whole thing
  always_ff @(posedge clk_i or negedge rst_n_i) begin : state_machine
    if (!rst_n_i) begin
      cnt             <= 0;
      state_2_2       <= IDLE;
      in_ready        <= 1;
      weight_sel      <= ROT_MATRIX;
      act_sel         <= S_ACT;
      gemm_en         <= 0;
      index_cnt       <= 0;
    end else begin
      case (state_2_2)
        IDLE: begin
          if (in_valid) begin
            in_ready  <= 0;
            state_2_2 <= CAL;
            cnt       <= 0;
          end else begin
            cnt             <= 0;
            in_ready        <= 1;
            weight_sel      <= ROT_MATRIX;
            act_sel         <= S_ACT;
            gemm_en         <= 0;
            index_cnt       <= 0;
          end
        end
        CAL: begin
          case (cnt)
            0: begin
              weight_sel <= ROT_MATRIX;
              act_sel    <= S_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            6:begin
              gemm_en   <= 0;
              index_cnt <= 0;
              cnt      <=cnt+1;
            end
            7:begin
              if (index_cnt == 2) begin
                cnt <= cnt +1;
                index_cnt <= 0;
              end
              index_cnt <= index_cnt + 1;
              for (int i = 0; i < 3; i += 1) begin
                reg_M_matrix[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
            end
            8: begin
              cnt        <= cnt + 1;
              weight_sel <= M_MATRIX;
              act_sel    <= M_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            12: begin
              gemm_en   <= 0;
              cnt       <= cnt + 1;
              index_cnt <= 0;
            end
            15: begin
              if (index_cnt == 2) begin
                index_cnt <= 0;
                state_2_2 <= DONE;
              end
              index_cnt <= index_cnt + 1;
              for (int i = 0; i < 3; i += 1) begin
                reg_cov_3D[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
            end
            default: begin
              if ((cnt!=0) & (index_cnt < 2)) begin
                index_cnt <= index_cnt + 1;
              end
              cnt <= cnt + 1;
            end
          endcase
        end
        DONE: begin
            if (out_valid) begin
              out_ready <= 0;
              state_2_2 <= IDLE;
            end else begin
              out_ready <= 1;
            end
          end
      endcase
    end
  end

  GEMM_3 #(
    .DATA_WIDTH    (DATA_WIDTH),
    .DATA_WIDTH_OUT(36),
    .MATRIX_SIZE   (3)
  ) u_GEMM_4 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .en_i         (gemm_en),
    .data_type_i  (gemm_data_type),
    .weight_i     (gemm_weight),
    .act_i        (gemm_act),
    .mat_o        (gemm_mat)
  );


endmodule


module stage_3 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 3,
  parameter DATA_WIDTH_OUT = 36
) (
  input  logic                  clk_i,
  input  logic                  rst_n_i,
  input  logic                  data_type_i,
  input  logic [DATA_WIDTH-1:0] cov_3D_i   [          8:0],
  input  logic [DATA_WIDTH-1:0] p_project_i[DIMENSION-1:0],
  input  logic [DATA_WIDTH-1:0] T_mat_i    [          8:0],
  output logic [DATA_WIDTH-1:0] cov_2D_o   [          3:0],
  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0],
  output logic                  data_type_o,

  input  logic in_valid,
  output logic in_ready,

  input  logic out_valid,
  output logic out_ready
);
// calculate p_project, W*J 
  localparam IDLE = 0, CAL=2,DONE=3,OUTPUT=4;
  localparam T_MATRIX = 0, O_MATRIX = 1;
  localparam COV_ACT = 0, T_ACT = 1;

  logic reg_data_type;
  logic [DATA_WIDTH-1:0] reg_cov_3D   [8:0];
  logic [DATA_WIDTH-1:0] reg_p_project[15:0];
  logic [DATA_WIDTH-1:0] reg_T_mat      [ 8:0];
  logic [DATA_WIDTH-1:0] reg_cov_2D   [DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] reg_O_mat      [ 8:0];

  logic [3:0] state_3;
  logic [4:0] cnt;
  logic [1:0] index_cnt;

  logic gemm_en;
  logic gemm_data_type;
  logic [DATA_WIDTH-1:0] gemm_weight[MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH-1:0] gemm_act[MATRIX_SIZE-1:0];
  logic [DATA_WIDTH_OUT-1:0] gemm_mat[MATRIX_SIZE-1:0];

  logic [3:0] weight_sel;  //PROJ_MATRIX,JACOB_MATRIX
  logic [3:0] act_sel;     //POINT_1_ACT,VIEW
  

  //hold input data in reg
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_INPUT
    if (!rst_n_i) begin
      reg_data_type <= 0;
      for (int i = 0; i < 9; i += 1) begin
        reg_cov_3D[i] <= 0;
        reg_T_mat[i] <= 0;
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        reg_p_project[j] <= 0;
      end
    end else if (in_valid) begin
      reg_data_type <= data_type_i;
      for (int i = 0; i < 9; i += 1) begin
        reg_cov_3D[i] <= cov_3D_i[i];
        reg_T_mat[i] <= T_mat_i[i];
      end
      for (int j = 0; j < DIMENSION; j += 1) begin
        reg_p_project[j] <= p_project_i[j];
      end
    end
  end

  //generate output logic 
  always_ff @(posedge clk_i or negedge rst_n_i) begin : HOLD_OUTPUT_DATA
    if (!rst_n_i) begin
      data_type_o <= 0;
      for (int i = 0; i < 9; i += 1) begin
        cov_2D_o[i] <= 0;
      end
      for (int j = 0; j < 3; j += 1) p_project_o[j] <= 0;
    end else if(state_3 == DONE) begin  // TODO:add the condition to write the data to the output buffer
      data_type_o <= reg_data_type;
      for (int i = 0; i < 9; i += 1) begin
        cov_2D_o[i] <= reg_cov_2D[i];
      end
      for (int j = 0; j < DIMENSION; j += 1) p_project_o[j] <= reg_p_project[j];
    end
  end

  //generate signals passed into the systolic array
  always_comb begin : GEMM_SIGNAL_SEL 
    if (!rst_n_i) begin
      gemm_data_type = 0;
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
      for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
    end else begin
      gemm_data_type = reg_data_type;
      //Activation
      case (act_sel)
        COV_ACT: begin  // use 1 to fill 
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1) 
            gemm_act[i] = reg_cov_3D[index_cnt+4*i[1:0]];
        end
        T_ACT: begin
          for (int i = 0; i < MATRIX_SIZE - 1; i += 1)
            gemm_act[i] = reg_T_mat[index_cnt+4*i[1:0]];
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE; i += 1) gemm_act[i] = 0;
        end
      endcase
      //Weight
      case (weight_sel)
        T_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = reg_T_mat[i];
        end
        O_MATRIX: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
            if (i % 4 == 3 | i > 10) begin
              gemm_weight[i] = 0;
            end else begin
              gemm_weight[i] = reg_O_mat[i];
            end
          end
        end
        default: begin
          for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) gemm_weight[i] = 0;
        end
      endcase
    end
  end


  //control path , control the whole thing
  always_ff @(posedge clk_i or negedge rst_n_i) begin : state_machine
    if (!rst_n_i) begin
      cnt             <= 0;
      state_3       <= IDLE;
      in_ready        <= 1;
      weight_sel      <= T_MATRIX;
      act_sel         <= COV_ACT;
      gemm_en         <= 0;
      index_cnt       <= 0;
    end else begin
      case (state_3)
        IDLE: begin
          if (in_valid) begin
            in_ready  <= 0;
            state_3 <= CAL;
            cnt       <= 0;
          end else begin
            cnt             <= 0;
            in_ready        <= 1;
            weight_sel      <= T_MATRIX;
            act_sel         <= COV_ACT;
            gemm_en         <= 0;
            index_cnt       <= 0;
          end
        end
        CAL: begin
          case (cnt)
            0: begin
              weight_sel <= T_MATRIX;
              act_sel    <= COV_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            6:begin
              gemm_en   <= 0;
              index_cnt <= 0;
              cnt      <=cnt+1;
            end
            7:begin
              if (index_cnt == 2) begin
                cnt <= cnt +1;
                index_cnt <= 0;
              end
              index_cnt <= index_cnt + 1;
              for (int i = 0; i < 3; i += 1) begin
                reg_O_mat[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
            end
            8: begin
              cnt        <= cnt + 1;
              weight_sel <= O_MATRIX;
              act_sel    <= T_ACT;
              gemm_en    <= 1;
              cnt        <= cnt + 1;
            end
            12: begin
              gemm_en   <= 0;
              cnt       <= cnt + 1;
              index_cnt <= 0;
            end
            15: begin
              if (index_cnt == 2) begin
                index_cnt <= 0;
                state_3 <= DONE;
              end
              index_cnt <= index_cnt + 1;
              for (int i = 0; i < 3; i += 1) begin
                reg_cov_2D[i[2:0]*3+index_cnt] <= gemm_mat[i][15:0];  //use lower 16bit TODO why 32/36bit?
              end
            end
            default: begin
              if ((cnt!=0) & (index_cnt < 2)) begin
                index_cnt <= index_cnt + 1;
              end
              cnt <= cnt + 1;
            end
          endcase
        end
        DONE: begin
            if (out_valid) begin
              out_ready <= 0;
              state_3 <= IDLE;
            end else begin
              out_ready <= 1;
            end
          end
      endcase
    end
  end

  GEMM_3 #(
    .DATA_WIDTH    (DATA_WIDTH),
    .DATA_WIDTH_OUT(36),
    .MATRIX_SIZE   (3)
  ) u_GEMM_4 (
    .clk_i        (clk_i),
    .rst_n_i      (rst_n_i),
    .en_i         (gemm_en),
    .data_type_i  (gemm_data_type),
    .weight_i     (gemm_weight),
    .act_i        (gemm_act),
    .mat_o        (gemm_mat)
  );

endmodule


module stage_4 #(
  parameter DATA_WIDTH     = 16,
  parameter DIMENSION      = 3,
  parameter MATRIX_SIZE    = 4,
  parameter DATA_WIDTH_OUT = 36
) (
  input logic                  clk_i,
  input logic                  rst_n_i,
  input logic                  data_type_i,
  input logic [DATA_WIDTH-1:0] p_project_i[DIMENSION-1:0],
  input logic [DATA_WIDTH-1:0] cov_2D     [          3:0],

  output logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0],
  output logic [DATA_WIDTH-1:0] result     [          2:0],

  input  logic in_valid,
  output logic in_ready,

  input  logic out_valid,
  output logic out_ready
);
//post calculation
endmodule