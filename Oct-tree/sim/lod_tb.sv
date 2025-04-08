`timescale 1ns / 1ps

module lod_compute_tb;

// 定义模块参数
localparam DIMENTION       = 3;
localparam DATA_WIDTH      = 16;
localparam DATA_BUS_WIDTH  = 64;
localparam ADDR_BUS_WIDTH  = 64;
localparam TREE_LEVEL      = 5;
localparam LOD_START_ADDR  = 1;

// 生成时钟和复位信号
logic clk;
logic rst_n;
logic cal_lod;
logic lod_ready;
logic [DIMENTION-1:0][DATA_WIDTH-1:0] cam_pos;
logic [DATA_WIDTH-1:0] current_tree_count;
logic [TREE_LEVEL-1:0] lod_active;

// SRAM接口信号
logic mem_sram_CEN;
logic [ADDR_BUS_WIDTH-1:0] mem_sram_A;
logic [DATA_BUS_WIDTH-1:0] mem_sram_D;
logic mem_sram_GWEN;
logic [DATA_BUS_WIDTH-1:0] mem_sram_Q;

// 实例化被测模块
lod_compute #(
    .DIMENTION          (DIMENTION),
    .DATA_WIDTH         (DATA_WIDTH),
    .DATA_BUS_WIDTH     (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH     (ADDR_BUS_WIDTH),
    .TREE_LEVEL         (TREE_LEVEL),
    .LOD_START_ADDR     (LOD_START_ADDR)
) u_lod_compute (
    .s                  (16'b0011110000000000),          // 示例参数
    .dist_max           (16'b0100100100000000),        // 示例参数
    .clk                (clk),
    .rst_n              (rst_n),
    .cal_lod            (cal_lod),
    .lod_ready          (lod_ready),
    .mem_sram_CEN       (mem_sram_CEN),
    .mem_sram_A         (mem_sram_A),
    .mem_sram_D         (),
    .mem_sram_GWEN      (mem_sram_GWEN),
    .mem_sram_Q         (mem_sram_Q),
    .cam_pos            (cam_pos),
    .current_tree_count (current_tree_count),
    .lod_active         (lod_active)
);

// 实例化SRAM模型
sram_1 #(
    .data_width (DATA_BUS_WIDTH),
    .addr_width (ADDR_BUS_WIDTH)
) u_sram (
    .clk        (clk),
    .cen_n      (mem_sram_CEN),
    .addr       (mem_sram_A),
    .data_in    (mem_sram_D),
    .gwen       (mem_sram_GWEN),
    .data_out   (mem_sram_Q),
    // 电源引脚（仿真时可固定）
    .vddpe      (1'b1),
    .vddce      (1'b1),
    .vsse       (1'b1),
    .ema        (1'b0),
    .emaw       (1'b0),
    .emas       (1'b0),
    .stov       (1'b0),
    .ret1n      (1'b1)
);

// 生成时钟（100MHz）
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end
initial begin
        real last_pre_int;  // 记录上一次的值
        last_pre_int = 0.0;

        // 等待复位完成
        @(posedge rst_n);
        $display("===== 开始监控 pre_int_layer =====");

        forever begin
            // 仅在状态机进入计算阶段（c1）时检测变化
            @(posedge clk );

            // 检查数值是否变化（浮点数需考虑精度误差）
            if (1|(u_lod_compute.lod_active_temp[4]) != (last_pre_int)) begin
                $display("[%0t] oct_pos_dL[0] 更新: %0.3f → %0.3f",
                        $time,
                        last_pre_int,
                        u_lod_compute.lod_active_temp[4]);
                last_pre_int = u_lod_compute.lod_active_temp[4];
            end
        end
    end

// 测试主流程
initial begin
    // 初始化信号
    rst_n = 0;
    cal_lod = 0;
    cam_pos = '{default:0};
    current_tree_count = 0;

    // 复位（10个周期）
    rst_n = 1;

    // 初始化SRAM数据（写入测试数据）
    initialize_sram();
    
   
// 测试用例1：摄像机在原点附近
    $display("[TEST CASE 1] Camera near octree position");
    cal_lod=1;
    cam_pos = '{16'h3C00, 16'h3C00, 16'h3C00}; // FP16: (1.0, 1.0, 1.0)
    current_tree_count = 0; // 选择第一个八叉树
    trigger_calculation();
    
    // 等待计算完成
    wait(lod_ready);
    cal_lod=1;
    $display("lod_active = %b", lod_active);
    #50;
    // 测试用例2：摄像机远离八叉树
    $display("[TEST CASE 2] Camera far from octree");
    cal_lod=1;
    cam_pos = '{16'h4800, 16'h4800, 16'h4800}; // FP16: (8.0, 8.0, 8.0)
    trigger_calculation();
    
    wait(lod_ready);
    cal_lod=1;
    $display("lod_active = %b", lod_active);
    #50;
 
    // 结束仿真
    $display("Simulation completed");
    $finish;
end

// SRAM初始化任务：写入测试用八叉树数据
task initialize_sram();
    // 八叉树0的数据结构：
    // Block 0: position (1.0, 2.0, 3.0) + layer1 deltaL
    u_sram.mem[LOD_START_ADDR + 0] = 64'h3C00_4000_4200_3E00; // FP16: 1.0, 2.0, 3.0, 1.5
    // Block 1: layer2-5 deltaL
    u_sram.mem[LOD_START_ADDR + 1] = 64'h3E80_3F00_3F80_4000; // 1.625, 1.75, 1.875, 2.0
    // Block 2: layer6-8 deltaL
    u_sram.mem[LOD_START_ADDR + 2] = 64'h4080_4100_4180_0000; // 2.5, 2.25, 2.75, 0
endtask

// 触发计算任务
task trigger_calculation();
    cal_lod = 1;
    #10;
    cal_lod = 1;
endtask

initial begin
    $dumpfile("./outputs/lod_tb.vcd");
    $dumpvars(0, lod_compute_tb);
  end

endmodule


module sram_1 #(
    parameter int data_width = 64,               // ���ݿ���
    parameter int addr_width = 64,               // ��ַ����
    parameter int depth      = 1 << addr_width  // �ڴ���ȣ���Ŀ����
)(
    input  logic                      clk,      // ʱ�ӣ������ش���
    input  logic                      cen_n,    // оƬʹ�ܣ�����Ч
    input  logic [addr_width-1:0]     addr,     // ��ַ
    input  logic [data_width-1:0]     data_in,  // д������
    input  logic                      gwen,     // ��дʹ�ܣ�0 д��1 ��
    output logic [data_width-1:0]     data_out, // ��������

    // ��Դ�͵������ţ���ͼʱ������ȷ���ӣ�����ʱ�ɹ̶�Ϊ�߻�͵�ƽ��(�����ʱ����Զ�����)
    input  logic                      vddpe,    // ��Դ����
    input  logic                      vddce,    // ��Դ����
    input  logic                      vsse,     // ��Դ����
    input  logic                      ema,      // ���ص����˿ڣ���Ӳ����vdd/vss
    input  logic                      emaw,     // ���ص����˿ڣ���Ӳ����vdd/vss
    input  logic                      emas,     // ���ص����˿ڣ���Ӳ����vdd/vss
    input  logic                      stov,     // ����Ӻã�����floating
    input  logic                      ret1n     // ����Ӻã�����floating
);

    // �ڲ��洢��Ԫ����ά�Ĵ�������ģ��SRAM�洢
    logic [data_width-1:0] mem [400];

    // ʱ�������ش�����ֻ����cen_n��Ч���ͣ�ʱ���в���
    always_ff @(posedge clk) begin
        if (!cen_n) begin
            if (!gwen) begin
                // д������������data_inд���ַaddr
                mem[addr[8:0]] <= data_in;
            end else begin
                // ������������ַaddr���������͵����data_out
                data_out <= mem[addr[8:0]];
            end
        end
    end

endmodule

