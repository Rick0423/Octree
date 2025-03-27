`timescale 1ns / 1ps
module Updater #(
  parameter int DIMENTION = 3,  //3D空间
  parameter int DATA_WIDTH = 16,
  parameter int DATA_BUS_WIDTH = 64,
  parameter int ADDR_BUS_WIDTH = 64,
  parameter int ENCODE_ADDR_WIDTH         = 12            ,// 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  parameter int CONTROL_WIDTH = 3,
  parameter int SELECT_WIDTH = 2,
  parameter int FEATURE_LENTH             = 9             ,//需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter int CHILDREN_NUM = 8,
  parameter int TREE_LEVEL = 5
) (
  input  logic clk,
  input  logic rst_n,
  input  logic add_anchor,
  input  logic del_anchor,
  output logic add_done,
  output logic del_done,

  input logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,  //用于指示要更新的anchor的位置
  input logic [   DATA_BUS_WIDTH-1:0] feature_in,

  //SRAM_1_interface 用于存储孩子是否有效的编码
  output logic                      mem_sram_CEN,   // 芯片使能，低有效
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                      mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q      // 读出数据
);
  typedef enum logic [2:0] {
    IDLE,
    ADDING,
    DELETING
  } state_e;

  state_e                      state_updater;

  logic                        add_sram_CEN;  // 芯片使能，低有效
  logic   [ADDR_BUS_WIDTH-1:0] add_sram_A;  // 地址
  logic   [DATA_BUS_WIDTH-1:0] add_sram_D;  // 写入数据
  logic                        add_sram_GWEN;  // 读写使能：0 写，1 读
  logic   [DATA_BUS_WIDTH-1:0] add_sram_Q;  // 读出数据

  logic                        del_sram_CEN;  // 芯片使能，低有效
  logic   [ADDR_BUS_WIDTH-1:0] del_sram_A;  // 地址
  logic   [DATA_BUS_WIDTH-1:0] del_sram_D;  // 写入数据
  logic                        del_sram_GWEN;  // 读写使能：0 写，1 读
  logic   [DATA_BUS_WIDTH-1:0] del_sram_Q;  // 读出数据



  always_ff @(posedge clk or negedge rst_n) begin : updater_top_state_machine
    if (rst_n == 0) begin
      state_updater <= IDLE;
    end else begin
      case (state_updater)
        IDLE: begin
          if (add_anchor) begin
            state_updater <= ADDING;
          end else if (del_anchor) begin
            state_updater <= DELETING;
          end
        end
        ADDING: begin
          if (add_done) begin
            state_updater <= IDLE;
          end
        end
        DELETING: begin
          if (del_done) begin
            state_updater <= IDLE;
          end
        end
        default: begin
          state_updater <= IDLE;
        end
      endcase
    end
  end

  always_comb begin : SRAM_1_MUX
    case (state_updater)
      IDLE: begin
        mem_sram_CEN  = '1;
        mem_sram_A    = '0;
        mem_sram_D    = '0;
        mem_sram_GWEN = '1;
        del_sram_Q    = '0;
        add_sram_Q    = '0;
      end
      ADDING: begin
        mem_sram_CEN  = add_sram_CEN;
        mem_sram_A    = add_sram_A;
        mem_sram_D    = add_sram_D;
        mem_sram_GWEN = add_sram_GWEN;
        add_sram_Q    = mem_sram_Q;
        del_sram_Q    = '0;
      end
      DELETING: begin
        mem_sram_CEN  = del_sram_CEN;
        mem_sram_A    = del_sram_A;
        mem_sram_D    = del_sram_D;
        mem_sram_GWEN = del_sram_GWEN;
        del_sram_Q    = mem_sram_Q;
        add_sram_Q    = '0;
      end
      default: begin
        mem_sram_CEN  = '1;
        mem_sram_A    = '0;
        mem_sram_D    = '0;
        mem_sram_GWEN = '1;
        del_sram_Q    = '0;
        add_sram_Q    = '0;
      end
    endcase
  end

  Add_anchor #(
    .DIMENTION        (DIMENTION),
    .DATA_WIDTH       (DATA_WIDTH),
    .DATA_BUS_WIDTH   (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH   (ADDR_BUS_WIDTH),
    .ENCODE_ADDR_WIDTH(ENCODE_ADDR_WIDTH),
    .FEATURE_LENTH    (FEATURE_LENTH),
    .CHILDREN_NUM     (CHILDREN_NUM),
    .TREE_LEVEL       (TREE_LEVEL)
  ) Add (
    .clk          (clk),
    .rst_n        (rst_n),
    .add_anchor   (add_anchor),
    .add_done     (add_done),
    .pos_encode   (pos_encode),
    .feature_in   (feature_in),
    .mem_sram_CEN (add_sram_CEN),
    .mem_sram_A   (add_sram_A),
    .mem_sram_D   (add_sram_D),
    .mem_sram_GWEN(add_sram_GWEN),
    .mem_sram_Q   (add_sram_Q)
  );

  Delete_anchor #(
    .DIMENTION        (DIMENTION),
    .DATA_WIDTH       (DATA_WIDTH),
    .DATA_BUS_WIDTH   (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH   (ADDR_BUS_WIDTH),
    .ENCODE_ADDR_WIDTH(ENCODE_ADDR_WIDTH),
    .FEATURE_LENTH    (FEATURE_LENTH),
    .CHILDREN_NUM     (CHILDREN_NUM),
    .TREE_LEVEL       (TREE_LEVEL)
  ) del (
    .clk          (clk),
    .rst_n        (rst_n),
    .del_anchor   (del_anchor),
    .del_done     (del_done),
    .pos_encode   (pos_encode),
    .mem_sram_CEN (del_sram_CEN),
    .mem_sram_A   (del_sram_A),
    .mem_sram_D   (del_sram_D),
    .mem_sram_GWEN(del_sram_GWEN),
    .mem_sram_Q   (del_sram_Q)
  );
endmodule

module Add_anchor #(
  parameter int DIMENTION               = 3,  //3D空间
  parameter int DATA_WIDTH              = 16,
  parameter int DATA_BUS_WIDTH          = 64,
  parameter int ADDR_BUS_WIDTH              = 64,
  parameter int ENCODE_ADDR_WIDTH         = 12            ,// 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  parameter int CONTROL_WIDTH               = 3,
  parameter int SELECT_WIDTH                =       2,
  parameter int FEATURE_LENTH             = 9             ,//需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter int CHILDREN_NUM                = 8,
  parameter int TREE_LEVEL              = 5
) (
  input logic clk,
  input logic rst_n,

  input  logic add_anchor,
  //时序说明：控制信号对应变化之后，下一个周期输入对应的数据信号，包括 pos_encode 与 feature_in
  output logic add_done,

  input logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,  //用于指示要更新的anchor的位置
  input logic [   DATA_BUS_WIDTH-1:0] feature_in,

  //关于位置编码的逻辑如下所示：
  //｜--2bit--｜--6bit--｜--6bit--｜，｜所在层数｜相对第一层的偏移｜相对第二层的偏移｜   （2+6bit*2 = LEVEL_INDICATE+ ENCODE_WIDTH ）
  //｜   1    ｜   0    ｜    0   ｜，代表第二层第一个元素，｜   2    ｜   0    ｜    0   ｜，代表第二层的第一个元素的第一个孩子（第三层的元素）
  //｜   2    ｜   7    ｜    9   ｜，代表第三层的元素，第二层第7个元素的第九个孩子。以此类推

  //SRAM_1_interface 用于存储孩子是否有效的编码
  output logic                      mem_sram_CEN,   // 芯片使能，低有效
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                      mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q      // 读出数据
);

  // SRAM 1 组织的形式如下所示：data_width为64位，其中第Depth只需要到67为止，addr = 0： 主节点自己是否有效，addr = 1 主节点下的64个字节点是否有效（含自己孩子有效），
  //  addr=2:主节点下的64个字节点自己是否有效，仅含自己。 addr=3-64+3 ： 第二层的anchor每一个的字节点是否有效。
  typedef enum logic [2:0] {
    IDLE,
    STEP1,
    STEP2,
    STEP3,
    WAITING
  } state_e;
  //sram的两个状态机
  state_e state_sram_1, state_sram_2;
  //计数器用于可能的数据
  logic [                  2:0] counter;
  //暂存输入数据
  logic [ENCODE_ADDR_WIDTH-1:0] reg_pos;
  logic [   DATA_BUS_WIDTH-1:0] reg_feature_in;

  //分别指示Sram是否更新完毕
  logic                         add_done_sram_1;
  logic                         add_done_sram_2;

  //用于区分在读取SRAM过程中，是哪一层在进行读取与更新操作。
  logic                         is_third_layer;

  assign add_done = add_done_sram_1 & add_done_sram_2;

endmodule

module Delete_anchor #(
  parameter int DIMENTION = 3,  //3D空间
  parameter int DATA_WIDTH = 16,
  parameter int DATA_BUS_WIDTH = 64,
  parameter int ADDR_BUS_WIDTH = 64,
  parameter int ENCODE_ADDR_WIDTH         = 12            ,// 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  parameter int CONTROL_WIDTH = 3,
  parameter int SELECT_WIDTH = 2,
  parameter int FEATURE_LENTH             = 9             ,//需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter int CHILDREN_NUM = 8,
  parameter int TREE_LEVEL = 5
) (
  input logic clk,
  input logic rst_n,

  input  logic del_anchor,
  output logic del_done,

  input  logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,     //用于指示要更新的anchor的位置
  output logic                         mem_sram_CEN,   // 芯片使能，低有效
  output logic [   ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [   DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                         mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [   DATA_BUS_WIDTH-1:0] mem_sram_Q      // 读出数据
);

  typedef enum logic [2:0] {
    IDLE,
    STEP1,
    STEP2,
    STEP3,
    STEP4,
    WAITING
  } state_e;

  //sram的两个状态机
  state_e state_sram_1, state_sram_2;

  logic [                  2:0] counter;
  //暂存输入数据
  logic [ENCODE_ADDR_WIDTH-1:0] reg_pos;

  //用于区分在读取SRAM过程中，是哪一层在进行更新操作。
  logic                         is_third_layer;

  logic                         still_valid_reg;



endmodule
