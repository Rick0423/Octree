module lod_compute #(
  parameter DIMENTION      = 3,
  parameter DATA_WIDTH     = 16,
  parameter DATA_BUS_WIDTH = 64,
  parameter ADDR_BUS_WIDTH = 64,
  parameter TREE_LEVEL     = 8,
  parameter LOD_START_ADDR = 1
) (
  input logic clk,
  input logic rst_n,
  input logic cal_lod,  //是否需要进行计算，如果需要为高，否则为低.模块使能
  output logic lod_ready,

  output logic                      mem_sram_CEN,   // 芯片使能，低有效
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,     // 地址
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,     // 写入数据
  output logic                      mem_sram_GWEN,  // 读写使能：0 写，1 读
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q,     // 读出数据
  //在SRAM中保存有这个Octree的position和每一层的delta L信息（一整个Octree的所有anchor共用同一个position，在同一个level的所有anchor共用一个delta L）
  //在SRAM中的数据按照这个格式存储：以64个为一组，每一个octree保存3个64.
  // 1、  ｜16 (x)        | 16 (y)    | 16 (z)    | 16(layer 1 delta L)| 
  // 2、  | 16(layer 2)   |(layer 3)  | (layer 4) |(layer5)           |
  // 3、  | 16(layer 6)   |(layer 7)  | (layer 8) |(empty)            |
  //SRAM接口，直接操作读写即可，读写地址为    LOD_START_ADDR+3*current_tree_count 例如当current_tree_count为0 的时候需要读的地址就是LOD_START_ADDR，current_tree_count为5的时候，需要读的地址就是LOD_START_ADDR+3*5

  input reg [DIMENTION-1:0][DATA_WIDTH-1:0] cam_pos,
  input  reg                  [DATA_WIDTH-1: 0]        current_tree_count         ,//表示当前正在处理的是那一颗Octree，用于确定mem中的地址
  output reg                  [TREE_LEVEL-1: 0]        lod_active                  //最后的结果输出，表示第i位是否要输出，例如：
  //1-1-0-0-0-0-0-0   表示level 0 和 1的有效，其余均无效； 1-1-1-1-0-0-0-0     表示 level 0-3有效；
  //1-0-0-1-0-0-0-0   表示level 0 和 3的anchor有效，其余均无效（理论上，在delta L巨大的场景下有可能出现）


);
  //需要完成的是
  //1、根据提供的公式计算每一层的int_layer,
  //2、然后判断当前层要不要在之后输出，如果需要输出那就将lod_active的对应的置为1，否则为0,同时将lod_ready置高
  //计算中使用到的数据是cam_pos，cam_pos[0]、cam_pos[1]、cam_pos[2]分别代表x、y、z的坐标，每一个坐标都是fp16的数。
  //计算中针对一个octree只计算一次，默认这个octree中
  assign mem_sram_GWEN = 1;
  assign mem_sram_CEN  = (cal_lod) ? 0 : 1;

endmodule



module sram #(
  parameter int data_width = 64,              // 数据宽度
  parameter int addr_width = 64,              // 地址宽度
  parameter int depth      = 1 << addr_width  // 内存深度（条目数）
) (
  input  logic                  clk,      // 时钟，上升沿触发
  input  logic                  cen_n,    // 芯片使能，低有效
  input  logic [addr_width-1:0] addr,     // 地址
  input  logic [data_width-1:0] data_in,  // 写入数据
  input  logic                  gwen,     // 读写使能：0 写，1 读
  output logic [data_width-1:0] data_out, // 读出数据

  // 电源和调整引脚（版图时必须正确连接，仿真时可固定为高或低电平）(仿真的时候可以都不连)
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
  logic [data_width-1:0] mem[depth];

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

