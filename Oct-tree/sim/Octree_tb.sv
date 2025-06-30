`timescale 1ns / 1ps

module Octree_tb;

    reg                                 clk                         ;
    reg                                 rst_n                       ;
    reg                  [18-1: 0]      csr_pos_encode              ;
    reg                  [   1: 0]      csr_ctrl                    ;
    reg                  [   3: 0]      csr_tree_num                ;
    wire                 [   1: 0]      csr_op_done                 ;
    wire                 [4:0][15:0]    csr_lod_param               ;
    wire                                in_out_sram_CEN_o           ;
    wire                 [  63: 0]      in_out_sram_A_o             ;
    wire                 [  63: 0]      in_out_sram_D_o             ;
    wire                                in_out_sram_GWEN_o          ;
    reg                  [  63: 0]      in_out_sram_Q_i             ;
    wire                                mem_sram_CEN                ;
    wire                 [  63: 0]      mem_sram_A                  ;
    wire                 [  63: 0]      mem_sram_D                  ;
    wire                                mem_sram_GWEN               ;
    reg                  [  63: 0]      mem_sram_Q                  ;
    reg                  [  15: 0]      s                           ;
    reg                  [  15: 0]      dist_max                    ;
    reg               [2:0][15: 0]      cam_pos                     ;

Octree#(
   .FEATURE_LENTH  (9              ),
   .ENCODE_ADDR_WIDTH(3*5+3          ),
   .TREE_START_ADDR(0              ),
   .LOD_START_ADDR (500            ),
   .FEATURE_START_ADDR(400            ),
   .INPUT_FEATURE_START_ADDR(0              ),
   .OUTPUT_FEATURE_START_ADDR(10             )
)
 u_Octree(
    .clk                         (clk                       ),
    .rst_n                       (rst_n                     ),
    .csr_pos_encode              (csr_pos_encode            ),// level | offset 0 | offset  1 | offset  2 | offset  3 | offset  4
    .csr_ctrl                    (csr_ctrl                  ),// 0 IDLE; 1 search tree;2 add anchor; 3 delete anchor
    .csr_tree_num                (csr_tree_num              ),// （take 8 for now）
    .csr_op_done                 (csr_op_done               ),// 00 IDLE;01 search_done;02 add_done;03 del_done
    .csr_lod_param               (csr_lod_param             ),
//in_out_sram for testing
    .in_out_sram_CEN_o           (in_out_sram_CEN_o         ),
    .in_out_sram_A_o             (in_out_sram_A_o           ),
    .in_out_sram_D_o             (in_out_sram_D_o           ),
    .in_out_sram_GWEN_o          (in_out_sram_GWEN_o        ),
    .in_out_sram_Q_i             (in_out_sram_Q_i           ),
//main_memory
    .mem_sram_CEN                (mem_sram_CEN              ),
    .mem_sram_A                  (mem_sram_A                ),
    .mem_sram_D                  (mem_sram_D                ),
    .mem_sram_GWEN               (mem_sram_GWEN             ),
    .mem_sram_Q                  (mem_sram_Q                ) 
);


sram #(
    .DATA_WIDTH                  (64                        ),
    .ADDR_WIDTH                  (64                        ),
    .MEM_DEPTH                   (20280                     ) 
)
 Main_mem (
    .clk                         (clk                       ),// Clock signal
    .rst_n                       (rst_n                     ),// Active-low reset
    .mem_sram_CEN                (mem_sram_CEN              ),// Chip Enable (Active Low)
    .mem_sram_A                  (mem_sram_A                ),// Address Bus
    .mem_sram_D                  (mem_sram_D                ),// Data Bus (Bidirectional)
    .mem_sram_GWEN               (mem_sram_GWEN             ),// Global Write Enable (Active Low)
    .mem_sram_Q                  (mem_sram_Q                ) // Data Output
);

sram #(
    .DATA_WIDTH                  (64                        ),
    .ADDR_WIDTH                  (64                        ),
    .MEM_DEPTH                   (20280                     ) 
)
 in_out_sram(
    .clk                         (clk                       ),// Clock signal
    .rst_n                       (rst_n                     ),// Active-low reset
    .mem_sram_CEN                (in_out_sram_CEN_o           ),// Chip Enable (Active Low)
    .mem_sram_A                  (in_out_sram_A_o             ),// Address Bus
    .mem_sram_D                  (in_out_sram_D_o             ),// Data Bus (Bidirectional)
    .mem_sram_GWEN               (in_out_sram_GWEN_o          ),// Global Write Enable (Active Low)
    .mem_sram_Q                  (in_out_sram_Q_i             ) // Data Output
);

  // Clock generation
  always #5 clk = ~clk;
  assign csr_lod_param = {s,dist_max,cam_pos};

  // Test stimulus
  initial begin
    // Initialize signals
    clk = 0;
    rst_n = 0;
    csr_pos_encode = 0;
    csr_ctrl = 0;
    csr_tree_num = 1;
    cam_pos = '{16'h3C00, 16'h3C00, 16'h3C00};
    dist_max = 16'b0100100100000000;
    s = 16'b0011110000000000;
    
    // Reset sequence
    #10 rst_n = 1;
    
    // search 
//    #20 csr_ctrl = 2'b01; 
//    #20 csr_ctrl = 2'b00;                                     
//    wait(csr_op_done == 2'b01);
//    #50
    //del
    #10 csr_ctrl = 2'b11;
    #10 csr_ctrl = 2'b00;
    csr_pos_encode = {3'd1,3'd4,3'd1,3'd2,3'd5,3'd6};
    wait(csr_op_done == 2'b11);
    #50
    //add
    #30 csr_ctrl = 2'b10;
    #10 csr_ctrl = 2'b00;
    csr_pos_encode = {3'd1,3'd4,3'd1,3'd2,3'd5,3'd6};
    wait(csr_op_done == 2'b10);
    #500;
    $finish;
  end

  initial begin
    $dumpfile("./outputs/Octree_tb.vcd");
    $dumpvars(0, tree_search_tb);
  end

endmodule