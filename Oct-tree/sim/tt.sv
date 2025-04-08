module address_calc #(
  parameter TREE_LEVEL       = 5,
  parameter LOG_CHILD_NUM    = 3,
  parameter ADDR_WIDTH       = 64,
  parameter ADDR_BUS_WIDTH   = 64,
  parameter TREE_ADDR_START  = 0,
  parameter DATA_BUS_WIDTH   = 64
)(
  input  logic [LOG_CHILD_NUM-1:0] offset     [TREE_LEVEL],
  input  logic [$clog2(TREE_LEVEL+1)-1:0] level,
  output logic [ADDR_WIDTH-1:0] address_part_,
  output logic [ADDR_WIDTH-1:0] actual_address,
  output logic [ADDR_BUS_WIDTH-1:0] address_for_sram
);

 localparam [5-1:0][DATA_BUS_WIDTH-1:0] ADDR_VARY = {64'd74, 64'd10, 64'd2, 64'd1, 64'd0};

  always_comb begin
    address_part_ = 0;
    for (int i = 0; i < TREE_LEVEL; i += 1) begin
      if (i < level) begin
        if (i == 0) begin
          address_part_ += 586 * offset[i];
        end else begin
          address_part_ += offset[i] * (1'b1) << (LOG_CHILD_NUM * ({28'd0, level} - i));
        end
      end 
    end
    actual_address   = address_part_ + ADDR_VARY[level] + TREE_ADDR_START;
    address_for_sram = {2'b0, actual_address[ADDR_BUS_WIDTH-1:2]};
    //same_addr        = (address_for_sram == last_addr_read) ? 1 : 0;
  end
endmodule

module tb_address_calc;

  parameter TREE_LEVEL     = 4;
  parameter LOG_CHILD_NUM  = 3;
  parameter ADDR_WIDTH     = 64;
  parameter ADDR_BUS_WIDTH = 32;

  logic [LOG_CHILD_NUM-1:0] offset     [TREE_LEVEL];
  logic [$clog2(TREE_LEVEL+1)-1:0] level;
  logic [ADDR_WIDTH-1:0] ADDR_VARY    [TREE_LEVEL];
  logic [ADDR_WIDTH-1:0] TREE_ADDR_START;

  logic [ADDR_WIDTH-1:0] address_part_;
  logic [ADDR_WIDTH-1:0] actual_address;
  logic [ADDR_BUS_WIDTH-1:0] address_for_sram;

  // DUT
  address_calc #(
    .TREE_LEVEL(TREE_LEVEL),
    .LOG_CHILD_NUM(LOG_CHILD_NUM),
    .ADDR_WIDTH(ADDR_WIDTH),
    .ADDR_BUS_WIDTH(ADDR_BUS_WIDTH)
  ) dut (
    .offset(offset),
    .level(level),
    .address_part_(address_part_),
    .actual_address(actual_address),
    .address_for_sram(address_for_sram)
  );

  initial begin
    // 初始化
    level = 2;

    offset[0] = 3'd0;
    offset[1] = 3'd1;
    offset[2] = 3'd2;
    offset[3] = 3'd0;

    #10; // 等待一会

    level = 3;

    offset[0] = 3'd1;
    offset[1] = 3'd3;
    offset[2] = 3'd2;
    offset[3] = 3'd3;

    $display("address_part_   = %h", address_part_);
    $display("actual_address  = %h", actual_address);
    $display("address_for_sram= %h", address_for_sram);
    #30; // 等待一会
    
    $finish;
  end

  initial begin
    $dumpfile("./outputs/tb_address_calc.vcd");
    $dumpvars(0, tb_address_calc);
  end

endmodule
