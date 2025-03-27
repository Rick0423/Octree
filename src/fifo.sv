`timescale 1ns / 1ps

module fifo_sync #(
    parameter DATA_WIDTH = 64
) (  //data_width = 8  data depth =8
    input  wire       clk,
    input  wire       rst_n,
    input  wire       wr_en,  //写使能
    input  wire       rd_en,  //读使能
    input  wire [7:0] wdata,  //写入数据输入
    output reg  [7:0] rdata,  //读取数据输出
    output wire       empty,  //读空标志信号
    output wire       full    //写满标志信号
);
  reg  [7:0] data                                      [7:0];  //数据存储单元(8bit数据8个)
  reg  [3:0] wr_ptr = 4'd0;  //写指针
  reg  [3:0] rd_ptr = 4'd0;  //读指针
  wire [2:0] wr_addr;  //写地址(写指针的低3位)
  wire [2:0] rd_addr;  //读地址(读指针的低3位)

  assign wr_addr = wr_ptr[2:0];
  assign rd_addr = rd_ptr[2:0];

  always @(posedge clk or negedge rst_n) begin  //写数据
    if (!rst_n) wr_ptr <= 4'd0;
    else if (wr_en && !full) begin
      data[wr_addr] <= wdata;
      wr_ptr <= wr_ptr + 4'd1;
    end
  end

  always @(posedge clk or negedge rst_n) begin  //读数据
    if (!rst_n) rd_ptr <= 'd0;
    else if (rd_en && !empty) begin
      rdata  <= data[rd_addr];
      rd_ptr <= rd_ptr + 4'd1;
    end
  end

  assign empty = (wr_ptr == rd_ptr);  //读空
  assign full  = (wr_ptr == {~rd_ptr[3], rd_ptr[2:0]});  //写满

endmodule
