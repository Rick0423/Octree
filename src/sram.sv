`timescale 1ns / 1ps
module sram #(
    parameter int data_width = 64,               // 数据宽度
    parameter int addr_width = 64,               // 地址宽度
    parameter int depth      = 1 << addr_width  // 内存深度（条目数）
)(
  input  logic                  clk,      // 时钟，上升沿触发
  input  logic                  cen_n,    // 芯片使能，低有效
  input  logic [addr_width-1:0] addr,     // 地址
  input  logic [data_width-1:0] data_in,  // 写入数据
  input  logic                  gwen,     // 读写使能：0 写，1 读
  output logic [data_width-1:0] data_out, // 读出数据

  // 电源和调整引脚（版图时必须正确连接，仿真时可固定为高或低电平）
  input logic vddpe,  // 电源引脚
  input logic vddce,  // 电源引脚
  input logic vsse,   // 电源引脚
  input logic ema,    // 边沿调整端口，可硬连到vdd/vss
  input logic emaw,   // 边沿调整端口，可硬连到vdd/vss
  input logic emas,   // 边沿调整端口，可硬连到vdd/vss
  input logic stov,   // 必须接好，不能floating
  input logic ret1n   // 必须接好，不能floating
);


    // 内部存储单元：二维寄存器数组模拟SRAM存储
    logic [data_width-1:0] mem [depth];

    // 时钟上升沿触发：只有在cen_n有效（低）时进行操作
    always_ff @(posedge clk) begin
        if (!cen_n) begin
            if (!gwen) begin
                // 写操作：把数据data_in写入地址addr
                mem[addr] <= data_in;
            end else begin
                // 读操作：将地址addr处的数据送到输出data_out
                data_out <= mem[addr];
            end
        end
    end

endmodule
