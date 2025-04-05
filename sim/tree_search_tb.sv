module tree_search_tb;

  // 参数定义
  parameter DIMENTION         = 3;
  parameter DATA_WIDTH        = 16;
  parameter DATA_BUS_WIDTH    = 64;
  parameter ADDR_BUS_WIDTH    = 64;
  parameter FEATURE_LENTH     = 9;
  parameter CHILDREN_NUM      = 8;
  parameter TREE_LEVEL        = 5;
  parameter SELECT_WIDTH      = 3;
  parameter COUNTER_WIDTH     = 4;
  parameter LOG_CHILD_NUM     = 3;
  parameter LOG_TREE_LEVEL    = 3;
  parameter TREE_ADDR_START   = 0;
  parameter LOD_START_ADDR    = 500;
  parameter FEATURE_START_ADDR= 1200;
  parameter ENCODE_ADDR_WIDTH = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL;
  parameter FIFO_DATA_WIDTH   = ENCODE_ADDR_WIDTH + LOG_CHILD_NUM+1+LOG_CHILD_NUM*CHILDREN_NUM; //+1原因在于0-8需要4bit数据来表示
  parameter FIFO_DEPTH_1      = ENCODE_ADDR_WIDTH + 10;
  parameter FIFO_DEPTH_2      = ENCODE_ADDR_WIDTH + 10;

  // 信号定义
  logic                      clk;
  logic                      rst_n;
  logic                      tree_search_start;
  logic                      tree_search_done;
  logic [COUNTER_WIDTH-1:0]  tree_cnt;
  logic [TREE_LEVEL-1:0]     lod_active;
  logic                      mem_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] mem_sram_A;
  logic [DATA_BUS_WIDTH-1:0] mem_sram_D;
  logic                      mem_sram_GWEN;
  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q;
  logic [DATA_BUS_WIDTH-1:0] feature_out;
  logic                      out_valid;
  logic                      out_ready;

tree_search #(
    .DIMENTION          (DIMENTION          ),
    .DATA_WIDTH         (DATA_WIDTH         ),
    .DATA_BUS_WIDTH     (DATA_BUS_WIDTH     ),
    .ADDR_BUS_WIDTH     (ADDR_BUS_WIDTH     ),
    .FEATURE_LENTH      (FEATURE_LENTH      ),
    .CHILDREN_NUM       (CHILDREN_NUM       ),
    .TREE_LEVEL         (TREE_LEVEL         ),
    .SELECT_WIDTH       (SELECT_WIDTH       ),
    .COUNTER_WIDTH      (COUNTER_WIDTH      ),
    .LOG_CHILD_NUM      (LOG_CHILD_NUM      ),
    .LOG_TREE_LEVEL     (LOG_TREE_LEVEL     ),
    .TREE_ADDR_START    (TREE_ADDR_START    ),
    .LOD_START_ADDR     (LOD_START_ADDR     ),
    .FEATURE_START_ADDR (FEATURE_START_ADDR ),
    .ENCODE_ADDR_WIDTH  (ENCODE_ADDR_WIDTH  ),
    .FIFO_DATA_WIDTH    (FIFO_DATA_WIDTH    ),
    .FIFO_DEPTH_1       (FIFO_DEPTH_1       ),
    .FIFO_DEPTH_2       (FIFO_DEPTH_2       )
) dut (
    .clk(clk),
    .rst_n(rst_n),
    .tree_search_start(tree_search_start),
    .tree_search_done(tree_search_done),
    .tree_cnt(tree_cnt),
    .lod_active(lod_active),
    .mem_sram_CEN(mem_sram_CEN),
    .mem_sram_A(mem_sram_A),
    .mem_sram_D(mem_sram_D),
    .mem_sram_GWEN(mem_sram_GWEN),
    .mem_sram_Q(mem_sram_Q),
    .feature_out(feature_out),
    .out_valid(out_valid),
    .out_ready(out_ready)
  );

  sram 
  #(
      .DATA_WIDTH (DATA_BUS_WIDTH ),
      .ADDR_WIDTH (64 ),
      .MEM_DEPTH  (20280      )
  )
  u_sram(
      .clk      (clk      ),
      .rst_n    (rst_n),
      .mem_sram_CEN (mem_sram_CEN ),
      .mem_sram_A (mem_sram_A ),
      .mem_sram_D  (mem_sram_D ),
      .mem_sram_GWEN (mem_sram_GWEN ),
      .mem_sram_Q  (mem_sram_Q )
  );
  

  // 时钟生成
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100MHz 时钟
  end

  // 复位逻辑
  initial begin
    rst_n = 0;
    #10;
    rst_n = 1;
  end

  // 输入激励
  initial begin
    // 初始化输入信号
    tree_search_start = 0;
    tree_cnt = 0;
    lod_active = 0;
    out_valid = 0;

    // 等待复位结束
    #20;

    // 开始树搜索
    tree_search_start = 1;
    tree_cnt = 1; // 示例值
    lod_active = 5'b00111; // 示例值
    #10;
    tree_search_start = 0;

    // 模拟存储器读取数据
    #10;

    // 模拟输出有效信号
    wait(out_ready);
    #10;
    out_valid = 1;
    #10;
    out_valid = 0;

    // 等待搜索完成
    wait(tree_search_done);

    // 结束仿真
    #50
    $finish;
  end

  // 波形记录
  initial begin
    $dumpfile("tree_search_tb.vcd");
    $dumpvars(0, tree_search_tb);
  end

endmodule

module sram #(
    parameter ADDR_WIDTH = 64,  // Address bus width
    parameter DATA_WIDTH = 64,  // Data bus width
    parameter MEM_DEPTH = 1 << ADDR_WIDTH, // Memory depth
    parameter INIT_FILE = "sram_init.txt" // Initialization file
) (
    input wire clk,                // Clock signal
    input wire rst_n,              // Active-low reset
    input wire mem_sram_CEN,       // Chip Enable (Active Low)
    input wire [ADDR_WIDTH-1:0] mem_sram_A,  // Address Bus
    inout wire [DATA_WIDTH-1:0] mem_sram_D,  // Data Bus (Bidirectional)
    input wire mem_sram_GWEN,      // Global Write Enable (Active Low)
    output reg [DATA_WIDTH-1:0] mem_sram_Q   // Data Output
);

    reg [DATA_WIDTH-1:0] memory [0:MEM_DEPTH-1];   // SRAM array

    // Load memory contents from a file during initialization
    initial begin
        $readmemh("sram.txt", memory); // Load hex format file
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset logic (optional, clearing memory can be costly)
            mem_sram_Q <= {DATA_WIDTH{1'b0}};
        end else if (!mem_sram_CEN) begin
            if (!mem_sram_GWEN) begin
                memory[mem_sram_A[14:0]] <= mem_sram_D; // Write operation
            end else begin
                mem_sram_Q <= memory[mem_sram_A[14:0]]; // Read operation
            end
        end
    end

endmodule
