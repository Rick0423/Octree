module mp_mult_tb;

    // 定义信号
    reg         clk_i;
    reg         rst_n_i;
    reg         en_i;
    reg         data_type_i;
    reg  [15:0] opa_i;
    reg  [15:0] opb_i;
    wire [31:0] prod_o;

    // 实例化待测模块
    mp_mult dut (
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .en_i(en_i),
        .data_type_i(data_type_i),
        .opa_i(opa_i),
        .opb_i(opb_i),
        .prod_o(prod_o)
    );

    // 时钟产生: 10ns周期
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i;
    end

    // 初始化及测试激励
    initial begin
        // 复位及初始状态
        rst_n_i    = 0;
        en_i       = 0;
        data_type_i = 0;
        opa_i      = 16'h0;
        opb_i      = 16'h0;
        #15;  // 等待几个时钟周期

        rst_n_i = 1;  // 释放复位
        #10;
        en_i = 1;

        // Test Case 1: 整数模式乘法 (data_type_i = 0)
        data_type_i = 0;
        opa_i = 16'h0003;  // 3
        opb_i = 16'h0002;  // 2
        #10;

        // Test Case 2: 整数模式下含负数运算
        data_type_i = 0;
        opa_i = 16'hFFFD;  // -3 (16位补码表示)
        opb_i = 16'h0002;  // 2
        #10;

        // Test Case 3: 浮点模式乘法 (data_type_i = 1) —— 正常数值
        data_type_i = 1;
        // 这里用FP16格式表示1.0和2.0，注意IEEE754 half-precision格式
        opa_i = 16'h3C00;  // FP16的1.0
        opb_i = 16'h4000;  // FP16的2.0
        #10;

        // Test Case 4: 浮点模式下一个操作数为零
        data_type_i = 1;
        opa_i = 16'h0000;  // 0.0
        opb_i = 16'h3C00;  // 1.0
        #10;

        // Test Case 5: 浮点模式下测试无穷大输入（模拟：指数全1）
        data_type_i = 1;
        opa_i = 16'h7C00;  // FP16的无穷大
        opb_i = 16'h3C00;  // 1.0
        #10;

        // 结束测试
        en_i = 0;
        #20;
        $finish;
    end

    // 实时监控信号变化
    initial begin
        $monitor("Time=%0t, rst_n_i=%b, en_i=%b, data_type_i=%b, opa_i=0x%h, opb_i=0x%h, prod_o=0x%h", 
                 $time, rst_n_i, en_i, data_type_i, opa_i, opb_i, prod_o);
    end

    initial begin
    $dumpfile("./outputs/tb_mp_mult");
    $dumpvars(0, tb_mp_mult);
  end

endmodule
