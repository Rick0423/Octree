`timescale 1ns / 1ps
module top_tb;

    // 时钟和复位
    logic clk;
    logic rst_n;

    // Octree接口信号定义
    localparam int ENCODE_ADDR_WIDTH = 12;
    localparam int DATA_BUS_WIDTH    = 64;
    localparam int CONTROL_WIDTH     = 3;
    localparam int DIMENTION         = 3;
    localparam int DATA_WIDTH        = 16;

    logic [ENCODE_ADDR_WIDTH-1:0] pos_encode;
    logic [DATA_BUS_WIDTH-1:0]    feature_in;
    logic [DATA_BUS_WIDTH-1:0]    feature_out;
    logic [CONTROL_WIDTH-1:0]     ctrl;
    logic [DIMENTION-1:0][DATA_WIDTH-1:0] cam_pos;

    logic out_valid;
    logic in_valid;
    logic out_ready;
    logic in_ready;

    // SRAM接口信号
    // Octree模块中的SRAM接口信号宽度为64位
    logic                       mem_sram_CEN;
    logic [63:0]                mem_sram_A;
    logic [63:0]                mem_sram_D;
    logic                       mem_sram_GWEN;
    logic [63:0]                mem_sram_Q;

    // 实例化Octree模块
    Octree octree_inst (
        .clk(clk),
        .rst_n(rst_n),
        .pos_encode(pos_encode),
        .feature_in(feature_in),
        .feature_out(feature_out),
        .ctrl(ctrl),
        .cam_pos(cam_pos),
        .out_valid(out_valid),
        .in_valid(in_valid),
        .out_ready(out_ready),
        .in_ready(in_ready),
        .mem_sram_CEN(mem_sram_CEN),
        .mem_sram_A(mem_sram_A),
        .mem_sram_D(mem_sram_D),
        .mem_sram_GWEN(mem_sram_GWEN),
        .mem_sram_Q(mem_sram_Q)
    );

    // 实例化SRAM模块
    // 为了仿真方便，将sram参数进行重定义：data_width=64, addr_width=6, depth=64
    // 注意：Octree产生的地址为64位，这里取低6位作为SRAM地址
    logic [63:0] sram_data_out;
    sram #(
        .data_width(64),
        .addr_width(6),
        .depth(64)
    ) sram_inst (
        .clk(clk),
        .cen_n(mem_sram_CEN),
        .addr(mem_sram_A[5:0]), // 取低6位作为地址
        .data_in(mem_sram_D),
        .gwen(mem_sram_GWEN),
        .data_out(sram_data_out),
        // 电源及调整信号固定为适当的电平
        .vddpe(1'b1),
        .vddce(1'b1),
        .vsse(1'b0),
        .ema(1'b1),
        .emaw(1'b1),
        .emas(1'b1),
        .stov(1'b1),
        .ret1n(1'b1)
    );

    // 将SRAM模块的读出数据反馈给Octree模块
    assign mem_sram_Q = sram_data_out;

    // 时钟生成：10ns周期
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // 仿真激励
    initial begin
        // 初始复位，所有输入清零
        rst_n      = 0;
        pos_encode = '0;
        feature_in = 64'h0;
        ctrl       = 3'b000;
        cam_pos    = '{default:16'd0};
        out_valid  = 0;
        in_valid   = 0;
        
        // 保持复位20ns后释放复位
        #20;
        rst_n = 1;
        
        // 等待10ns后开始测试更新操作（假定ctrl的“2”代表更新操作）
        #10;
        ctrl       = 3'b010;   // 更新操作码（依据实际设计定义）
        pos_encode = 12'd1;
        feature_in = 64'hA5A5_A5A5_A5A5_A5A5;
        in_valid   = 1;
        #10;
        in_valid   = 0;
        
        // 等待一段时间后测试搜索操作（假定ctrl的“1”代表搜索操作）
        #50;
        ctrl    = 3'b001;       // 搜索操作码
        cam_pos = '{16'd10, 16'd20, 16'd30};
        out_valid = 1;
        #10;
        out_valid = 0;
        
        // 继续仿真观察一段时间
        #100;
        $finish;
    end

endmodule
