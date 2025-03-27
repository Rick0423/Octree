`timescale 1ns / 1ps
module Searcher #(
  parameter DIMENTION = 3,
  parameter DATA_WIDTH = 16,
  parameter DATA_BUS_WIDTH = 64,
  parameter ADDR_BUS_WIDTH = 64,
  parameter ENCODE_ADDR_WIDTH          = 12    ,// 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  parameter FEATURE_LENTH              = 9     ,//需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter CHILDREN_NUM = 8,
  parameter TREE_LEVEL = 8,
  parameter SELECT_WIDTH = 4
) (
  input  logic                                     clk,
  input  logic                                     rst_n,
  //控制信号，用于与controler交互 
  input  logic                                     search_start,
  output logic                                     search_done,
  //SRAM_2_interface 用于存储孩子的FEATURE
  output logic                                     mem_sram_CEN,   // 芯片使能，低有效
  output logic                [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic                [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                                     mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic                [DATA_BUS_WIDTH-1:0] mem_sram_Q,     // 读出数据
  input  logic [DIMENTION-1:0][    DATA_WIDTH-1:0] cam_pos,

  //输出的feature
  output logic [DATA_BUS_WIDTH-1:0] feature_out,
  input  logic                      out_valid,
  output logic                      out_ready

);

  logic                      lod_sram_CEN;  // 芯片使能，低有效
  logic [ADDR_BUS_WIDTH-1:0] lod_sram_A;  // 地址
  logic [DATA_BUS_WIDTH-1:0] lod_sram_D;  // 写入数据
  logic                      lod_sram_GWEN;  // 读写使能：0 写，1 读
  logic [DATA_BUS_WIDTH-1:0] lod_sram_Q;  // 读出数据

  logic                      tree_sram_CEN;  // 芯片使能，低有效
  logic [ADDR_BUS_WIDTH-1:0] tree_sram_A;  // 地址
  logic [DATA_BUS_WIDTH-1:0] tree_sram_D;  // 写入数据
  logic                      tree_sram_GWEN;  // 读写使能：0 写，1 读
  logic [DATA_BUS_WIDTH-1:0] tree_sram_Q;  // 读出数据

  logic                      out_sram_CEN;  // 芯片使能，低有效
  logic [ADDR_BUS_WIDTH-1:0] out_sram_A;  // 地址
  logic [DATA_BUS_WIDTH-1:0] out_sram_D;  // 写入数据
  logic                      out_sram_GWEN;  // 读写使能：0 写，1 读
  logic [DATA_BUS_WIDTH-1:0] out_sram_Q;  // 读出数据

  logic [  SELECT_WIDTH-1:0] mem_select;

  localparam LOD = 0;
  localparam TREE = 1;
  localparam OUT = 2;
  always_comb begin : Mux_mem
    if (rst_n == 0) begin
      mem_sram_CEN  = 1;
      mem_sram_A    = 0;
      mem_sram_D    = 0;
      mem_sram_GWEN = 1;
      out_sram_Q    = 0;
      tree_sram_Q   = 0;
      lod_sram_Q    = 0;
    end else begin
      case (mem_select)
        LOD: begin
          mem_sram_CEN  = lod_sram_CEN;
          mem_sram_A    = lod_sram_A;
          mem_sram_D    = lod_sram_D;
          mem_sram_GWEN = lod_sram_GWEN;
          out_sram_Q    = 0;
          tree_sram_Q   = 0;
          lod_sram_Q    = mem_sram_Q;
        end
        TREE: begin
          mem_sram_CEN  = tree_sram_CEN;
          mem_sram_A    = tree_sram_A;
          mem_sram_D    = tree_sram_D;
          mem_sram_GWEN = tree_sram_GWEN;
          out_sram_Q    = 0;
          tree_sram_Q   = mem_sram_Q;
          lod_sram_Q    = 0;
        end
        OUT: begin
          mem_sram_CEN  = out_sram_CEN;
          mem_sram_A    = out_sram_A;
          mem_sram_D    = out_sram_D;
          mem_sram_GWEN = out_sram_GWEN;
          out_sram_Q    = mem_sram_Q;
          tree_sram_Q   = 0;
          lod_sram_Q    = 0;
        end
      endcase
    end
  end

  lod_compute #() u_lod_compute ();

  genvar i;
  generate
    for (i = 0; i < 4; i += 1) begin
      Sub_search #() u_Sub_search ();
    end
  endgenerate

endmodule

module lod_compute #(
    parameter    DIMENTION                  = 3     ,
    parameter    DATA_WIDTH                 = 16    ,
    parameter    DATA_BUS_WIDTH             = 64    ,
    parameter    ADDR_BUS_WIDTH             = 64    ,

    parameter    TREE_LEVEL                 = 8     ,
    parameter    LOD_START_ADDR             = 1     
) (
  input logic clk,
  input logic rst_n,
  input logic cal_lod,  //是否需要进行计算，如果需要为高，否则为低.模块使能
  output logic lod_ready,

  output logic                      mem_sram_CEN,   // 芯片使能，低有效
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                      mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q,     // 读出数据
  //在SRAM中保存有这个Octree的position和每一层的delta L信息（一整个Octree的所有anchor共用同一个position，在同一个level的所有anchor共用一个delta L）
  //在SRAM中的数据按照这个格式存储：以64个为一组，每一个octree保存3个64.
  // 1、  ｜16 (x)        | 16 (y)    | 16 (z)    | 16(layer 1 delta L)| 
  // 2、  | 16(layer 2)   |(layer 3)  | (layer 4) |(layer5)           |
  // 3、  | 16(layer 6)   |(layer 7)  | (layer 8) |(empty)            |
  //SRAM接口，直接操作读写即可，读写地址为    LOD_START_ADDR+3*current_tree_count 例如当current_tree_count为0 的时候需要读的地址就是LOD_START_ADDR，current_tree_count为5的时候，需要读的地址就是LOD_START_ADDR+3*5

  input logic [DIMENTION-1:0][DATA_WIDTH-1:0] cam_pos,
  input                                        logic [DATA_WIDTH-1:0]                      current_tree_count,//表示当前正在处理的是那一颗Octree，用于确定mem中的地址
  output                                       logic [TREE_LEVEL-1:0]                      lod_active //最后的结果输出，表示第i位是否要输出，例如：
  //1-1-0-0-0-0-0-0   表示level 0 和 1的有效，其余均无效； 1-1-1-1-0-0-0-0     表示 level 0-3有效；
  //1-0-0-1-0-0-0-0   表示level 0 和 3的anchor有效，其余均无效（理论上，在delta L巨大的场景下有可能出现）


);
  assign mem_sram_GWEN = 1;
  assign mem_sram_CEN  = (cal_lod) ? 0 : 1;

endmodule


module Sub_search #(
  parameter int FEATURE_WIDTH = 400,
  parameter int N = 4,
  parameter int CHILDREN_NUM = 64,
  parameter int ENCODE_WIDTH     = 12  , // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置
  parameter int SRAM1_ADDR_WIDTH = 12,
  parameter int SRAM1_DATA_WIDTH = 64,
  parameter int SRAM2_ADDR_WIDTH = 12,
  parameter int SRAM2_DATA_WIDTH = 64
) (
  input logic clk,
  input logic rst_n,

  input logic                      sub_search_start,
  input logic [CHILDREN_NUM/N-1:0] child_encode_all,
  input logic [  ENCODE_WIDTH-1:0] parent_encode,
  input logic                      child_valid,

  output logic [SRAM1_ADDR_WIDTH-1:0] child_encode_valid,
  output logic                        child_ready

);

endmodule

module Arbiter #(
  parameter FEATURE_WIDTH = 400,
  parameter N = 4,
  parameter CHILDREN_NUM = 64,
  parameter  ENCODE_WIDTH     = 12  , // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置
  parameter SRAM1_ADDR_WIDTH = 12,
  parameter SRAM1_DATA_WIDTH = 64,
  parameter SRAM2_ADDR_WIDTH = 12,
  parameter SRAM2_DATA_WIDTH = 64
) (
  input logic clk,
  input logic rst_n,

  input logic                        child_ready_1,
  input logic [SRAM1_ADDR_WIDTH-1:0] child_encode_valid_1,

  input logic                        child_ready_2,
  input logic [SRAM1_ADDR_WIDTH-1:0] child_encode_valid_2,

  input logic                        child_ready_3,
  input logic [SRAM1_ADDR_WIDTH-1:0] child_encode_valid_3,

  input logic                        child_ready_4,
  input logic [SRAM1_ADDR_WIDTH-1:0] child_encode_valid_4,

  output logic [SRAM1_ADDR_WIDTH-1:0] child_encode_final,
  output logic                        child_ready_final
);

endmodule


