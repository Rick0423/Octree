`timescale 1ns / 1ps

module GEMM_tb;

  // 参数定义
  parameter DATA_WIDTH     = 16;
  parameter DATA_WIDTH_OUT = 36;
  parameter MATRIX_SIZE    = 4;

  // 信号定义
  logic                      clk_i;
  logic                      rst_n_i;
  logic                      en_i;
  logic                      load_weight_i;
  logic                      data_type_i;
  // weight_i 数组：总共 MATRIX_SIZE*MATRIX_SIZE 个元素
  logic [DATA_WIDTH-1:0]     weight_i [MATRIX_SIZE*MATRIX_SIZE-1:0];
  // act_i 数组：每周期广播 MATRIX_SIZE 个激活值
  logic [DATA_WIDTH-1:0]     act_i    [MATRIX_SIZE-1:0];
  logic [DATA_WIDTH*2-1:0]     d_in    [MATRIX_SIZE-1:0];

  logic                      res_valid_o;
  logic [DATA_WIDTH_OUT-1:0] mat_o    [MATRIX_SIZE-1:0];

  // 实例化待测模块 GEMM_3x3
  GEMM_4 #(
    .DATA_WIDTH     (DATA_WIDTH),
    .DATA_WIDTH_OUT (DATA_WIDTH_OUT),
    .MATRIX_SIZE    (MATRIX_SIZE)
  ) dut (
    .clk_i          (clk_i),
    .rst_n_i        (rst_n_i),
    .en_i           (en_i),
    .load_weight_i  (load_weight_i),
    .data_type_i    (data_type_i),
    .weight_i       (weight_i),
    .act_i          (act_i),
    .mat_o          (mat_o)
  );

  // 时钟产生，周期为10ns
  initial begin
    clk_i = 0;
    forever #5 clk_i = ~clk_i;
  end

  // Testbench 主激励
  initial begin
    // 初始状态
    rst_n_i       = 0;
    en_i          = 0;
    load_weight_i = 0;
    data_type_i   = 0; // 0：integer 模式

    // 初始化输入数组
    for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i++) begin
      weight_i[i] = '0;
    end
    for (int j = 0; j < MATRIX_SIZE; j++) begin
      act_i[j] = '0;
      d_in[j] ='0;
    end

    // 保持复位20ns
    #20;
    rst_n_i = 1;

    // 载入权重矩阵，例子：权重矩阵为
    // [ 1, 2, 3 ]
    // [ 4, 5, 6 ]
    // [ 7, 8, 9 ]
    load_weight_i = 1;
    weight_i[0] = 16'd1;
    weight_i[1] = 16'd2;
    weight_i[2] = 16'd3;
    weight_i[3] = 16'd4;
    weight_i[4] = 16'd5;
    weight_i[5] = 16'd6;
    weight_i[6] = 16'd7;
    weight_i[7] = 16'd8;
    weight_i[8] = 16'd9;
    weight_i[9] = 16'd1;
    weight_i[10] = 16'd2;
    weight_i[11] = 16'd7;
    weight_i[12] = 16'd3;
    weight_i[13] = 16'd4;
    weight_i[14] = 16'd5;
    weight_i[15] = 16'd6;
    #10;
    load_weight_i = 0;

    // 使能运算，并送入激活向量
    en_i = 1;
    // 第1组激活值（例子）：[10, 20, 30]
    act_i[0] = 16'd1;
    act_i[1] = 16'd2;
    act_i[2] = 16'd3;
    act_i[3] = 16'd4;

    // 等待足够时间，使流水线计算完成
    #10;
    act_i[0] = 16'd2;
    act_i[1] = 16'd3;
    act_i[2] = 16'd4;
    act_i[3] = 16'd5;
    #10
    act_i[0] = 16'd3;
    act_i[1] = 16'd4;
    act_i[2] = 16'd5;
    act_i[3] = 16'd6;
    #60;
    $finish;
  end

  initial begin
    $dumpfile("./outputs/GEMM_tb");
    $dumpvars(0, GEMM_tb);
  end

endmodule
