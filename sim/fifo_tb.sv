`timescale 1ns / 1ps
module fifo_tb (); 
  reg clk_tb;
  reg rst_n_tb;
  reg wr_en_tb;
  reg rd_en_tb;
  reg [7:0]wdata_tb;
  wire [7:0]rdata_tb;
  wire empty_tb;
  wire full_tb;
 
always #10 clk_tb = ~clk_tb;
 
initial begin
  clk_tb    = 1'b0;
  wdata_tb  = 8'b0000_0000; 
  wr_en_tb  = 1'b0;
  rd_en_tb  = 1'b0;
  rst_n_tb  = 1'b0;
  #15;
  rst_n_tb  = 1'b1;
  #75;
  wr_en_tb  = 1'b1;
  rd_en_tb  = 1'b1;
  generate_wdata;    //任务：每隔20ns生成一次写数据
  #100;
  $finish;
end 
 
task generate_wdata; //任务：每隔20ns生成一次写数据
  integer i;
  begin
    for(i=0;i<15;i=i+1)begin
      wdata_tb = wdata_tb + 8'b0000_0001; 
      #20;
    end
  end
endtask
fifo_sync fifo_sync(
  .clk     (clk_tb),
  .rst_n   (rst_n_tb),
  .wr_en   (wr_en_tb),
  .rd_en   (rd_en_tb),
  .wdata   (wdata_tb),
  .rdata   (rdata_tb),
  .empty   (empty_tb),
  .full    (full_tb)
);

initial begin
  $dumpfile("./outputs/fifo_tb.vcd");
  $dumpvars(0, fifo_tb);
end
endmodule