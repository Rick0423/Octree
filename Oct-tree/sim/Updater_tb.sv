`timescale 1ns/1ps

// Updater 的 testbench
module Updater_tb;

  // 参数设置（与 Updater 模块默认参数一致）
  localparam DIMENTION          = 3;
  localparam DATA_WIDTH         = 16;
  localparam DATA_BUS_WIDTH     = 64;
  localparam ADDR_BUS_WIDTH     = 64;
  localparam CONTROL_WIDTH      = 3;
  localparam SELECT_WIDTH       = 3;
  localparam FEATURE_LENTH      = 9;
  localparam CHILDREN_NUM       = 8;
  localparam LOG_CHILD_NUM      = 3;
  localparam TREE_LEVEL         = 5;
  localparam LOG_TREE_LEVEL     = 3;
  localparam TREE_ADDR_START    = 0;
  localparam FEATURE_START_ADDR = 1200;
  localparam ENCODE_ADDR_WIDTH  = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL;
  
  // 信号定义
  reg                         clk;
  reg                         rst_n;
  reg                         add_anchor;
  reg                         del_anchor;
  wire                        add_done;
  wire                        del_done;
  reg  [ENCODE_ADDR_WIDTH-1:0] pos_encode;
  reg  [DATA_BUS_WIDTH-1:0]   feature_in;
  
  // SRAM 接口信号
  wire                        mem_sram_CEN;
  wire [ADDR_BUS_WIDTH-1:0]   mem_sram_A;
  wire [DATA_BUS_WIDTH-1:0]   mem_sram_D;
  wire                        mem_sram_GWEN;
  wire [DATA_BUS_WIDTH-1:0]   mem_sram_Q;
  
  // 实例化待测模块 Updater
  Updater #(
    .DIMENTION          (DIMENTION),
    .DATA_WIDTH         (DATA_WIDTH),
    .DATA_BUS_WIDTH     (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH     (ADDR_BUS_WIDTH),
    .CONTROL_WIDTH      (CONTROL_WIDTH),
    .SELECT_WIDTH       (SELECT_WIDTH),
    .FEATURE_LENTH      (FEATURE_LENTH),
    .CHILDREN_NUM       (CHILDREN_NUM),
    .LOG_CHILD_NUM      (LOG_CHILD_NUM),
    .TREE_LEVEL         (TREE_LEVEL),
    .LOG_TREE_LEVEL     (LOG_TREE_LEVEL),
    .TREE_ADDR_START    (TREE_ADDR_START),
    .FEATURE_START_ADDR (FEATURE_START_ADDR),
    .ENCODE_ADDR_WIDTH  (ENCODE_ADDR_WIDTH)
  ) uut (
    .clk            (clk),
    .rst_n          (rst_n),
    .add_anchor     (add_anchor),
    .del_anchor     (del_anchor),
    .add_done       (add_done),
    .del_done       (del_done),
    .pos_encode     (pos_encode),
    .feature_in     (feature_in),
    .mem_sram_CEN   (mem_sram_CEN),
    .mem_sram_A     (mem_sram_A),
    .mem_sram_D     (mem_sram_D),
    .mem_sram_GWEN  (mem_sram_GWEN),
    .mem_sram_Q     (mem_sram_Q)
  );
  
  // 实例化一个简单的 SRAM 模型，用于存储孩子节点有效性信息
  sram 
  #(
      .DATA_WIDTH (DATA_BUS_WIDTH ),
      .ADDR_WIDTH (ADDR_BUS_WIDTH ),
      .MEM_DEPTH  (20280      )
  )
  u_sram(
      .clk      (clk      ),
      .rst_n    (rst_n),
      .mem_sram_CEN (mem_sram_CEN ),
      .mem_sram_A (mem_sram_A),
      .mem_sram_D  (mem_sram_D ),
      .mem_sram_GWEN (mem_sram_GWEN ),
      .mem_sram_Q  (mem_sram_Q )
  );

  
  
  // 时钟生成：周期 10ns
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  initial begin
    $dumpfile("./outputs/updater_tb.vcd");
    $dumpvars(0, tb_Updater);
  end
  
  // testbench 主流程
  initial begin
    // 初始信号赋值
    rst_n      = 0;
    add_anchor = 0;
    del_anchor = 0;
    pos_encode = 0;
    feature_in = 0;
    
    // 复位过程
    #20;
    rst_n = 1;
    #20;
    
    // 模拟 add_anchor 操作：
    // 在第一次操作时，将 pos_encode 设置为一个示例值（注意宽度应为 ENCODE_ADDR_WIDTH），
    // 同时连续 FEATURE_LENTH 个周期提供 feature_in 数据
    //pos_encode = {3'd2,3'd0,3'd1,3'd6,3'd5,3'd7};  // 示例：全部置1
    //add_anchor = 1;
    //// 这里为了简单起见，每个周期用同一个 feature 数据
    //feature_in = 64'hDEADBEEF_DEADBEEF;
    //#10;
    //add_anchor = 0;
    
    // 等待 add_done 信号完成（注意：此处 wait 语句适用于仿真环境）
    //wait(add_done);
    //#100;
    
    // 模拟 del_anchor 操作：
    pos_encode = {3'd2,3'd0,3'd0,3'd3,3'd1,3'd0};
    del_anchor = 1;
    #10;
    del_anchor = 0;
    wait(del_done);
    #20;
    add_anchor = 1;
    for(int i=0;i<9;i+=1)begin
      feature_in = 64'd10 + {32'd0,i};  
      #10; add_anchor =0 ;
    end
    #200;
    $finish;
  end

endmodule


