`timescale 1ns / 1ps

module Updater_tb;
    parameter int FEATURE_WIDTH    = 400 ; // TO_BR_DETERMINED 应该如何hashing？数据总线宽度？ 如果要分好几下读，hash加密如何处理？ 应该存多少个feature？每个feature存多少位
    parameter int ENCODE_WIDTH     = 12  ; // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置
    parameter int LEVEL_WIDTH      = 2   ;// 用于表示输入的原码（未经过hashing）的层次补偿，用于指示当前需要更新的anchor的位置，00代表第一层，01代表第二层，10代表第三层。
    parameter int SRAM1_ADDR_WIDTH = 12  ;
    parameter int SRAM1_DATA_WIDTH = 64  ;
    parameter int SRAM2_ADDR_WIDTH = 12  ;
    parameter int SRAM2_DATA_WIDTH = 64  ;
    
    reg clk;
    reg rst_n;
    
    reg add_anchor;
    reg del_anchor;
    wire add_done;
    wire del_done;
    
    reg [LEVEL_WIDTH+ENCODE_WIDTH-1:0] pos_encode;
    reg [FEATURE_WIDTH-1:0] feature_in;
    
    wire sram_1_CEN;
    wire [SRAM1_ADDR_WIDTH-1:0] sram_1_A;
    wire [SRAM1_DATA_WIDTH-1:0] sram_1_D;
    wire sram_1_GWEN;
    reg [SRAM1_DATA_WIDTH-1:0] sram_1_Q;
    
    wire sram_2_CEN;
    wire [SRAM2_ADDR_WIDTH-1:0] sram_2_A;
    wire [SRAM2_DATA_WIDTH-1:0] sram_2_D;
    wire sram_2_GWEN;
    reg [SRAM2_DATA_WIDTH-1:0] sram_2_Q;
    
    // Instantiate the Updater module
    Updater uut (
        .clk(clk),
        .rst_n(rst_n),
        .add_anchor(add_anchor),
        .del_anchor(del_anchor),
        .add_done(add_done),
        .del_done(del_done),
        .pos_encode(pos_encode),
        .feature_in(feature_in),
        .sram_1_CEN(sram_1_CEN),
        .sram_1_A(sram_1_A),
        .sram_1_D(sram_1_D),
        .sram_1_GWEN(sram_1_GWEN),
        .sram_1_Q(sram_1_Q),
        .sram_2_CEN(sram_2_CEN),
        .sram_2_A(sram_2_A),
        .sram_2_D(sram_2_D),
        .sram_2_GWEN(sram_2_GWEN),
        .sram_2_Q(sram_2_Q)
    );
    
    // Clock Generation
    always #5 clk = ~clk;
    
    initial begin
        // Initialize signals
        clk = 0;
        rst_n = 0;
        add_anchor = 0;
        del_anchor = 0;
        pos_encode = 0;
        feature_in = 0;
        sram_1_Q = 0;
        sram_2_Q = 0;
        
        // Reset the system
        #10 rst_n = 1;
        
        // Test Case 1: Add an anchor
        #10 add_anchor = 1;
        pos_encode = 14'h005;
        feature_in = {400{1'b1}}; // Changed test feature data
        #10 add_anchor = 0;
        
        // Wait for completion
        wait(add_done);
        #20;
        
        // Test Case 2: Delete an anchor
        #10 del_anchor = 1;
        pos_encode = 14'h005;
        #10 del_anchor = 0;
        
        // Wait for completion
        wait(del_done);
        #20;
        
        // Additional Test Case: Adding another anchor
        #10 add_anchor = 1;
        pos_encode = 14'h00A;
        feature_in = {400{1'b0}};
        #10 add_anchor = 0;
        
        wait(add_done);
        #20;
        
        // End simulation
        $stop;
    end
endmodule
