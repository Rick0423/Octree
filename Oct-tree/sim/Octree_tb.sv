`timescale 1ns / 1ps

module Octree_tb;

  // Parameter definitions
  parameter  DIMENTION         = 3;  
  parameter  DATA_WIDTH        = 16;
  parameter  DATA_BUS_WIDTH    = 64;
  parameter  ADDR_BUS_WIDTH    = 64;
  parameter  FEATURE_LENTH     = 9;
  parameter  CHILDREN_NUM      = 8;
  parameter  TREE_LEVEL        = 5;
  parameter  SELECT_WIDTH      = 3;
  parameter  CONTROL_WIDTH     = 3;
  parameter  COUNTER_WIDTH     = 4;
  parameter  LOG_CHILD_NUM     = 3;
  parameter  LOG_TREE_LEVEL    = 3;
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL;
  parameter  TREE_ADDR_START   = 0;
  parameter  LOD_START_ADDR    = 500;
  parameter  FEATURE_START_ADDR= 400;

  // Signal declarations
  logic clk;
  logic rst_n;
  logic [ENCODE_ADDR_WIDTH-1:0] pos_encode;
  logic [DATA_BUS_WIDTH-1:0] feature_in;
  logic [DATA_BUS_WIDTH-1:0] feature_out;
  logic [CONTROL_WIDTH-1:0] ctrl;
  logic [COUNTER_WIDTH-1:0] tree_num;
  logic [DIMENTION-1:0][DATA_WIDTH-1:0] cam_pos;
  logic [DATA_WIDTH-1:0] dist_max;
  logic [DATA_WIDTH-1:0] s;
  logic out_valid;
  logic out_ready;
  logic in_valid;
  logic in_ready;
  logic mem_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] mem_sram_A;
  logic [DATA_BUS_WIDTH-1:0] mem_sram_D;
  logic mem_sram_GWEN;
  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q;

  logic   search_done;
  logic   del_done   ;
  logic   add_done    ;

  // Instantiate the Octree module
  Octree #(
      .DIMENTION          (DIMENTION          ),
      .DATA_WIDTH         (DATA_WIDTH         ),
      .DATA_BUS_WIDTH     (DATA_BUS_WIDTH     ),
      .ADDR_BUS_WIDTH     (ADDR_BUS_WIDTH     ),
      .FEATURE_LENTH      (FEATURE_LENTH      ),
      .CHILDREN_NUM       (CHILDREN_NUM       ),
      .TREE_LEVEL         (TREE_LEVEL         ),
      .SELECT_WIDTH       (SELECT_WIDTH       ),
      .CONTROL_WIDTH      (CONTROL_WIDTH      ),
      .COUNTER_WIDTH      (COUNTER_WIDTH      ),
      .LOG_CHILD_NUM      (LOG_CHILD_NUM      ),
      .LOG_TREE_LEVEL     (LOG_TREE_LEVEL     ),
      .ENCODE_ADDR_WIDTH  (ENCODE_ADDR_WIDTH  ),
      .TREE_ADDR_START    (TREE_ADDR_START    ),
      .LOD_START_ADDR     (LOD_START_ADDR     ),
      .FEATURE_START_ADDR (FEATURE_START_ADDR )
  ) u_Octree(
      .clk           (clk           ),
      .rst_n         (rst_n         ),
      .pos_encode    (pos_encode    ),
      .feature_in    (feature_in    ),
      .feature_out   (feature_out   ),
      .ctrl          (ctrl          ),
      .tree_num      (tree_num      ),
      .cam_pos       (cam_pos       ),
      .dist_max      (dist_max      ),
      .s             (s             ),
      .out_valid     (out_valid     ),
      .out_ready     (out_ready     ),
      .mem_sram_CEN  (mem_sram_CEN  ),
      .mem_sram_A    (mem_sram_A    ),
      .mem_sram_D    (mem_sram_D    ),
      .mem_sram_GWEN (mem_sram_GWEN ),
      .mem_sram_Q    (mem_sram_Q    ),
      .search_done   (search_done),
      .del_done      (del_done),
      .add_done      (add_done)
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

  // Clock generation
  always #5 clk = ~clk;

  // Test stimulus
  initial begin
    // Initialize signals
    clk = 0;
    rst_n = 0;
    pos_encode = 0;
    feature_in = 0;
    ctrl = 0;
    tree_num = 1;
    cam_pos = 0;
    dist_max = 0;
    s = 0;
    in_valid = 0;
    
    // Reset sequence
    #10 rst_n = 1;
    
    // Apply some test cases
    #20 ctrl = 3'b001; // Example control signal
    //pos_encode = 18'h3FF; // Example position encoding
    //feature_in = 64'h123456789ABCDEF0; // Example feature data
    //in_valid = 1;
    wait(out_ready);

    #10
    out_valid = 1;
    #10 
    out_valid = 0;

    wait(search_done);

    
    //#10 ctrl = 3'b000;
//
    //#2000 ctrl = 3'b011;
    //pos_encode = {3'd1,3'd4,3'd1,3'd2,3'd5,3'd6};
//
    ////#10 in_valid = 0;
    //#100 ctrl = 3'b010;
    //pos_encode = {3'd1,3'd4,3'd1,3'd2,3'd5,3'd6};
    //for(int i=0;i<9;i+=1)begin
    //  feature_in = {32'd0,i};
    //  #10;
    //end
    //// Wait for output to be valid
    //#10 ctrl = 3'b000;
    

    
    
    // Observe the output
    $display("Feature Out: %h", feature_out);
    
    #50;
    $finish;
  end

  initial begin
    $dumpfile("./outputs/Octree_tb.vcd");
    $dumpvars(0, tree_search_tb);
  end

endmodule