`timescale 1ns / 1ps
module Octree #(
  parameter  DIMENTION         = 3,  //3D空间
  parameter  DATA_WIDTH        = 16,
  parameter  DATA_BUS_WIDTH    = 64,
  parameter  ADDR_BUS_WIDTH    = 64,
  parameter  CONTROL_WIDTH     = 3,
  parameter  SELECT_WIDTH      = 2,
  parameter  FEATURE_LENTH     = 9,  //需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter  CHILDREN_NUM      = 8,
  parameter  LOG_CHILD_NUM     = 3,
  parameter  TREE_LEVEL        = 5,
  parameter  LOG_TREE_LEVEL    = 3,
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM*TREE_LEVEL+LOG_TREE_LEVEL // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  //     均为3位 | level | 0 | 1 | 2 | 3 | 4 |
) (
  input logic clk,
  input logic rst_n, // 清零负有效

  input  logic                [ENCODE_ADDR_WIDTH-1:0] pos_encode,
  input  logic                [   DATA_BUS_WIDTH-1:0] feature_in,
  output logic                [   DATA_BUS_WIDTH-1:0] feature_out,
  input  logic                [    CONTROL_WIDTH-1:0] ctrl,         // 控制信号
  input  logic [DIMENTION-1:0][       DATA_WIDTH-1:0] cam_pos,//csr

  //输入输出features的握手信号
  input  logic out_valid,
  input  logic in_valid,
  output logic out_ready,
  output logic in_ready,

  //与主存SRAM的唯一的interface
  output logic                      mem_sram_CEN,   // 芯片使能，低有效
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                      mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q      // 读出数据
);

  // 定义两个个来源的选择编码
  localparam   NAN                        = 0     ;
  localparam   SEARCHER                   = 1     ;
  localparam   UPDATER                    = 2     ;

  // Control模块与其他模块之间的控制信号
  logic                      search_start;
  logic                      add_anchor;
  logic                      del_anchor;
  logic                      search_done;
  logic                      add_done;
  logic                      del_done;
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

  Control #(
    .CONTROL_WIDTH(CONTROL_WIDTH),
    .CHILDREN_NUM (CHILDREN_NUM)
  ) control_inst (
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
    .DIMENTION        (DIMENTION),
    .DATA_WIDTH       (DATA_WIDTH),
    .DATA_BUS_WIDTH   (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH   (ADDR_BUS_WIDTH),
    .ENCODE_ADDR_WIDTH(ENCODE_ADDR_WIDTH),
    .FEATURE_LENTH    (FEATURE_LENTH),
    .CHILDREN_NUM     (CHILDREN_NUM),
    .TREE_LEVEL       (TREE_LEVEL)
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
    .mem_sram_Q   (searcher_sram_Q),     // 可根据需要连接
    .feature_out  (feature_out),
    .out_valid    (out_valid),
    .out_ready    (out_ready),
    .tree_num     ()
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
