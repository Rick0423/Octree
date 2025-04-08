`timescale 1ns / 1ps

module Searcher_tb;

  // Parameters
  parameter DIMENTION         = 3;
  parameter DATA_WIDTH        = 16;
  parameter DATA_BUS_WIDTH    = 64;
  parameter ADDR_BUS_WIDTH    = 64;
  parameter FEATURE_LENTH     = 9;
  parameter CHILDREN_NUM      = 8;
  parameter TREE_LEVEL        = 5;
  parameter SELECT_WIDTH      = 3;
  parameter COUNTER_WIDTH     = 4;
  parameter LOG_CHILD_NUM     = 3;
  parameter LOG_TREE_LEVEL    = 3;
  parameter TREE_ADDR_START   = 0;
  parameter LOD_START_ADDR    = 500;
  parameter FEATURE_START_ADDR= 1200;
  parameter ENCODE_ADDR_WIDTH = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL;
  parameter FIFO_DATA_WIDTH   = ENCODE_ADDR_WIDTH + LOG_CHILD_NUM+1+LOG_CHILD_NUM*CHILDREN_NUM;
  parameter FIFO_DEPTH_1      = ENCODE_ADDR_WIDTH + 10;
  parameter FIFO_DEPTH_2      = ENCODE_ADDR_WIDTH + 10;

  // DUT I/O
  logic                                     clk;
  logic                                     rst_n;
  logic                                     search_start;
  logic                                     search_done;
  logic                                     mem_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0]                mem_sram_A;
  logic [DATA_BUS_WIDTH-1:0]                mem_sram_D;
  logic                                     mem_sram_GWEN;
  logic [DATA_BUS_WIDTH-1:0]                mem_sram_Q;
  logic [DIMENTION-1:0][DATA_WIDTH-1:0]     cam_pos;
  logic [DATA_WIDTH-1:0]                    dist_max;
  logic [DATA_WIDTH-1:0]                    s;
  logic [DATA_BUS_WIDTH-1:0]                feature_out;
  logic                                     out_valid;
  logic                                     out_ready;
  logic [COUNTER_WIDTH-1:0]                 tree_num;

  // Clock generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100MHz
  end

  // DUT instantiation
  Searcher #(
    .DIMENTION         (DIMENTION),
    .DATA_WIDTH        (DATA_WIDTH),
    .DATA_BUS_WIDTH    (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH    (ADDR_BUS_WIDTH),
    .FEATURE_LENTH     (FEATURE_LENTH),
    .CHILDREN_NUM      (CHILDREN_NUM),
    .TREE_LEVEL        (TREE_LEVEL),
    .SELECT_WIDTH      (SELECT_WIDTH),
    .COUNTER_WIDTH     (COUNTER_WIDTH),
    .LOG_CHILD_NUM     (LOG_CHILD_NUM),
    .LOG_TREE_LEVEL    (LOG_TREE_LEVEL),
    .TREE_ADDR_START   (TREE_ADDR_START),
    .LOD_START_ADDR    (LOD_START_ADDR),
    .FEATURE_START_ADDR(FEATURE_START_ADDR),
    .ENCODE_ADDR_WIDTH (ENCODE_ADDR_WIDTH),
    .FIFO_DATA_WIDTH   (FIFO_DATA_WIDTH),
    .FIFO_DEPTH_1      (FIFO_DEPTH_1),
    .FIFO_DEPTH_2      (FIFO_DEPTH_2)
  ) DUT (
    .clk          (clk),
    .rst_n        (rst_n),
    .search_start (search_start),
    .search_done  (search_done),
    .mem_sram_CEN (mem_sram_CEN),
    .mem_sram_A   (mem_sram_A),
    .mem_sram_D   (mem_sram_D),
    .mem_sram_GWEN(mem_sram_GWEN),
    .mem_sram_Q   (mem_sram_Q),
    .cam_pos      (cam_pos),
    .dist_max     (dist_max),
    .s            (s),
    .feature_out  (feature_out),
    .out_valid    (out_valid),
    .out_ready    (out_ready),
    .tree_num     (tree_num)
  );

  sram #(
      .DATA_WIDTH (DATA_BUS_WIDTH ),
      .ADDR_WIDTH (64 ),
      .MEM_DEPTH  (20280      )
  )
  u_sram(
      .clk      (clk      ),
      .rst_n    (rst_n),
      .mem_sram_CEN (mem_sram_CEN ),
      .mem_sram_A (mem_sram_A ),
      .mem_sram_D  (mem_sram_D ),
      .mem_sram_GWEN (mem_sram_GWEN ),
      .mem_sram_Q  (mem_sram_Q )
  );
  

  // Stimulus
  initial begin
    $display("==== Starting Searcher TB ====");

    // Default values
    rst_n        = 0;
    search_start = 0;
    out_valid    = 0;
    tree_num     = 1;
    dist_max     = 16'h00FF;
    s            = 16'h0010;

    // Apply reset
    #20;
    rst_n = 1;

    // Start a search
    #20;
    search_start = 1;

    #10;
    search_start = 0;

    wait(out_ready)
    #10
    out_valid =1;
    #10
    out_valid =0;
    // Mock `lod_ready` and `tree_search_done` (depends on DUT internals)
    // You can inject behavior via force/release if needed

    // Wait sufficient cycles
    wait(search_done);
    #50
    $finish;
  end

  initial begin
    $dumpfile("./outputs/search_tb.vcd");
    $dumpvars(0, Searcher_tb);
  end

endmodule
