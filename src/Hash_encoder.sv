`timescale 1ns / 1ps
module Hash_encoder #(
  parameter int DATA_WIDTH             = 8,
  parameter int ENCODE_WIDTH           = 12,
  parameter int SRAM_2_ADDR_WIDTH_REAL = 15
) (
  input logic clk,
  input logic rst_n,

  input  logic                    sram_2_CEN,   // 芯片使能，低有效
  input  logic [ENCODE_WIDTH-1:0] sram_2_A,     // 地址
  input  logic [  DATA_WIDTH-1:0] sram_2_D,     // 写入数据
  input  logic                    sram_2_GWEN,  // 读写使能：0 写，1 读
  output logic [  DATA_WIDTH-1:0] sram_2_Q,     // 读出数据

  output logic                              cen_n,    // 芯片使能，低有效
  output logic [SRAM_2_ADDR_WIDTH_REAL-1:0] addr,     // 地址
  output logic [            DATA_WIDTH-1:0] data_in,  // 写入数据
  output logic                              gwen,     // 读写使能：0 写，1 读
  input  logic [            DATA_WIDTH-1:0] data_out  // 读出数据
);

  always_ff @(posedge clk or negedge rst_n) begin : Hash_encode
    if (rst_n == 0) begin
      sram_2_Q <= 0;
      cen_n    <= 0;
      addr     <= 0;
      data_in  <= 0;
      gwen     <= 1;
    end else begin
      addr     <= Hash_encoding(sram_2_A);
      cen_n    <= sram_2_CEN;
      data_in  <= sram_2_D;
      gwen     <= sram_2_GWEN;
      sram_2_Q <= data_out;
    end
  end

  //To_DO implement the hashing function 
  function automatic logic [SRAM_2_ADDR_WIDTH_REAL-1:0] Hash_encoding(
      input logic [ENCODE_WIDTH-1:0] encoded_addr);
  endfunction
endmodule
