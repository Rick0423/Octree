`timescale 1ns / 1ps
module Octree #(
  parameter  DIMENTION         = 3,  
  parameter  DATA_WIDTH        = 16,
  parameter  DATA_BUS_WIDTH    = 64,
  parameter  ADDR_BUS_WIDTH    = 64,
  parameter  FEATURE_LENTH     = 9,  //需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter  CHILDREN_NUM      = 8,
  parameter  TREE_LEVEL        = 5,
  parameter  SELECT_WIDTH      = 2,
  parameter  CONTROL_WIDTH     = 2,  //控制信号的宽度
  parameter  COUNTER_WIDTH     = 4,
  parameter  LOG_CHILD_NUM     = 3,
  parameter  LOG_TREE_LEVEL    = 3,
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM*TREE_LEVEL+LOG_TREE_LEVEL, // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  //     3*6 = 18 bit | level | offset 0 | offset  1 | offset  2 | offset  3 | offset  4 |
  parameter  TREE_ADDR_START   = 0,
  parameter  LOD_START_ADDR    = 500,
  parameter  FEATURE_START_ADDR= 400
) (
  input  logic                                        clk,
  input  logic                                        rst_n,
  input  logic                [ENCODE_ADDR_WIDTH-1:0] pos_encode, // 输入的要更新的anchor的坐标
  input  logic                [   DATA_BUS_WIDTH-1:0] feature_in, // 要更新的新增的anchor的feature
  output logic                [   DATA_BUS_WIDTH-1:0] feature_out,// 输出的anchor的feature
  input  logic                [    CONTROL_WIDTH-1:0] ctrl,       // 控制信号，包括add anchor ，delete anchor，输出信息等等
  input  logic                [    COUNTER_WIDTH-1:0] tree_num,   // CSR, 指示当前主存中总的八叉树的数量
  input  logic [DIMENTION-1:0][       DATA_WIDTH-1:0] cam_pos,    // CSR, 用于计算LOD中的激活层次，指示相机位置
  input  logic                [    DATA_WIDTH-1:0]    dist_max,   // CSR, 用于计算LOD中的激活层次，指示最远的距离
  input  logic                [    DATA_WIDTH-1:0]    s,          // CSR, 用于计算LOD中的激活层次，
  //输入输出的握手信号 
  input  logic                                        out_valid,  
  output logic                                        out_ready,
  //与主存的sram接口
  output logic                                        mem_sram_CEN,
  output logic                [   ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic                [   DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                                        mem_sram_GWEN,
  input  logic                [   DATA_BUS_WIDTH-1:0] mem_sram_Q,
  //标识操作结束的信号
  output logic                      search_done,
  output logic                      add_done,
  output logic                      del_done             
);

  // 定义两个个来源的选择编码，用于选通sram
  localparam   NAN                        = 0;
  localparam   SEARCHER                   = 1;
  localparam   UPDATER                    = 2;

  // Control模块与其他模块之间的控制信号
  logic                      search_start;
  logic                      add_anchor;
  logic                      del_anchor;
  //输出到模块外部
  //logic                      search_done;
  //logic                      add_done;
  //logic                      del_done;
  logic [  SELECT_WIDTH-1:0] mem_select;

  // Searcher模块接口信号
  logic                      searcher_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] searcher_sram_A;
  logic [DATA_BUS_WIDTH-1:0] searcher_sram_D;
  logic [DATA_BUS_WIDTH-1:0] searcher_sram_Q;
  logic                      searcher_sram_GWEN;

  // Updater模块接口信号
  logic                      updater_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] updater_sram_A;
  logic [DATA_BUS_WIDTH-1:0] updater_sram_D;
  logic [DATA_BUS_WIDTH-1:0] updater_sram_Q;
  logic                      updater_sram_GWEN;

  Control  control_inst (
    .clk         (clk),
    .rst_n       (rst_n),
    .ctrl        (ctrl),
    .search_start(search_start),
    .search_done (search_done),
    .add_anchor  (add_anchor),
    .del_anchor  (del_anchor),
    .add_done    (add_done),
    .del_done    (del_done),
    .mem_select  (mem_select)
  );

  Searcher #(
      .DIMENTION         (DIMENTION         ),
      .DATA_WIDTH        (DATA_WIDTH        ),
      .DATA_BUS_WIDTH    (DATA_BUS_WIDTH    ),
      .ADDR_BUS_WIDTH    (ADDR_BUS_WIDTH    ),
      .FEATURE_LENTH     (FEATURE_LENTH     ),
      .CHILDREN_NUM      (CHILDREN_NUM      ),
      .TREE_LEVEL        (TREE_LEVEL        ),
      .SELECT_WIDTH      (SELECT_WIDTH      ),
      .COUNTER_WIDTH     (COUNTER_WIDTH     ),
      .LOG_CHILD_NUM     (LOG_CHILD_NUM     ),
      .LOG_TREE_LEVEL    (LOG_TREE_LEVEL    ),
      .TREE_ADDR_START   (TREE_ADDR_START   ),
      .LOD_START_ADDR    (LOD_START_ADDR    ),
      .FEATURE_START_ADDR(FEATURE_START_ADDR),
      .ENCODE_ADDR_WIDTH (ENCODE_ADDR_WIDTH )
  ) searcher_inst (
    .clk          (clk),
    .rst_n        (rst_n),
    .search_start (search_start),
    .search_done  (search_done),
    .cam_pos      (cam_pos),
    .mem_sram_CEN (searcher_sram_CEN),
    .mem_sram_A   (searcher_sram_A),
    .mem_sram_D   (searcher_sram_D),
    .mem_sram_GWEN(searcher_sram_GWEN),
    .mem_sram_Q   (searcher_sram_Q),     
    .feature_out  (feature_out),
    .out_valid    (out_valid),
    .out_ready    (out_ready),
    .dist_max     (dist_max),
    .s            (s),
    .tree_num     (tree_num) // 用于指示当前的sram中存了多少颗树
  );

  Updater #(
    .DIMENTION        (DIMENTION),
    .DATA_WIDTH       (DATA_WIDTH),
    .DATA_BUS_WIDTH   (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH   (ADDR_BUS_WIDTH),
    .ENCODE_ADDR_WIDTH(ENCODE_ADDR_WIDTH),
    .FEATURE_LENTH    (FEATURE_LENTH),
    .CHILDREN_NUM     (CHILDREN_NUM),
    .TREE_LEVEL       (TREE_LEVEL)
  ) updater_inst (
    .clk       (clk),
    .rst_n     (rst_n),
    .add_anchor(add_anchor),
    .del_anchor(del_anchor),
    .add_done  (add_done),
    .del_done  (del_done),
    .pos_encode(pos_encode),
    .feature_in(feature_in),

    .mem_sram_CEN (updater_sram_CEN),
    .mem_sram_A   (updater_sram_A),
    .mem_sram_D   (updater_sram_D),
    .mem_sram_GWEN(updater_sram_GWEN),
    .mem_sram_Q   (updater_sram_Q)      // 根据需要连接
  );

  // SRAM1多路选择器——根据 Control 模块给出的 sram_1_select 选择信号来源
  always_comb begin
    case (mem_select)
      NAN: begin
        mem_sram_CEN    = 1'b1;
        mem_sram_A      = '0;
        mem_sram_D      = '0;
        mem_sram_GWEN   = 1'b1;
        searcher_sram_Q = '0;
        updater_sram_Q  = '0;
      end
      SEARCHER: begin
        mem_sram_CEN    = searcher_sram_CEN;
        mem_sram_A      = searcher_sram_A;
        mem_sram_D      = searcher_sram_D;
        mem_sram_GWEN   = searcher_sram_GWEN;
        searcher_sram_Q = mem_sram_Q;
        updater_sram_Q  = 0;
      end
      UPDATER: begin
        mem_sram_CEN    = updater_sram_CEN;
        mem_sram_A      = updater_sram_A;
        mem_sram_D      = updater_sram_D;
        mem_sram_GWEN   = updater_sram_GWEN;
        updater_sram_Q  = mem_sram_Q;
        searcher_sram_Q = 0;
      end
      default: begin
        mem_sram_CEN    = 1'b1;
        mem_sram_A      = '0;
        mem_sram_D      = '0;
        mem_sram_GWEN   = 1'b1;
        searcher_sram_Q = '0;
        updater_sram_Q  = '0;
      end
    endcase
  end

endmodule
