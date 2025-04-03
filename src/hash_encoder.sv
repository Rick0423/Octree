module hash_encoder #(
    parameter int PRIMES [4:0] = {2099719, 3867465, 807545, 2654435, 1}  // 质数数组，增强哈希随机性
)(
    input logic rst_n,                     // 复位信号（低有效）
    input logic [2:0] level,                // 当前层级 (0~4)
    input logic [64-1:0] offset [5],           // 偏移数组
    input logic tree_state,                 // 状态信号
    output logic [63:0] hash_addr  ,         // 哈希地址
    output logic [63:0] hash_addr_1           // 哈希地址
);

  // 计算哈希地址
  always_comb begin
    if (!rst_n) begin
      hash_addr = 64'd0;
    end else if (tree_state) begin  // OUT 状态
      case (level)
        0: hash_addr = offset[0]+1;
        1: hash_addr = offset[0]+1 + (offset[1] + 64'd1) * 8;
        2: hash_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                     ^ (offset[1] + 64'd1) * PRIMES[1] 
                     ^ (offset[2] + 64'd1) * PRIMES[2] )+ 64'd72;
        3: hash_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                     ^ (offset[1] + 64'd1) * PRIMES[1] 
                     ^ (offset[2] + 64'd1) * PRIMES[2] 
                     ^ (offset[3] + 64'd1) * PRIMES[3] )+ 64'd72;
        4: hash_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                     ^ (offset[1] + 64'd1) * PRIMES[1] 
                     ^ (offset[2] + 64'd1) * PRIMES[2] 
                     ^ (offset[3] + 64'd1) * PRIMES[3]  
                     ^ (offset[4] + 64'd1) * PRIMES[4] )+ 64'd72;
        default: hash_addr = 64'd0;
      endcase
    end else begin
      hash_addr = 64'd0;
    end
  end
    
    assign  hash_addr_1 = {53'd0,hash_addr[10:0]};

endmodule

module hash_encoder_tb;

  logic rst_n;
  logic [2:0] level;
  logic [63:0] offset [5];
  logic tree_state;
  logic [63:0] hash_addr;
  logic [63:0] hash_addr_1;

  // 实例化 hash_encoder
  hash_encoder uut (
      .rst_n(rst_n),
      .level(level),
      .offset(offset),
      .tree_state(tree_state),
      .hash_addr(hash_addr),
      .hash_addr_1(hash_addr_1)
  );

  initial begin
    // 初始化信号
    rst_n = 0;
    tree_state = 0;
    level =2;
    offset = '{0, 0, 0, 0, 0};

    #10 rst_n = 1;  // 释放复位
    #10 tree_state = 1;



    #10 $finish;  // 结束仿真
  end

  // 监视变量
  initial begin
    $monitor("Time: %0t | level: %0d | offset: %p | hash_addr: %0d", 
              $time, level, offset, hash_addr_1);
  end

endmodule
