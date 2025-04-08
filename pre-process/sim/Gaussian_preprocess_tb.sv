`timescale 1ns/1ps

module GS_pre_tb;

  // Parameters
  localparam DIMENSION             = 3;
  localparam DATA_WIDTH            = 16;
  localparam COUNTER_WIDTH         = 4;
  localparam PREPROCESS_START_ADDR = 0;

  // Clock and reset
  logic clk;
  logic rst_n;

  // Inputs
  logic data_type_i;
  logic [DATA_WIDTH-1:0] orig_points_i   [DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] projmatrix_i    [15:0];
  logic [DATA_WIDTH-1:0] viewmatrix_i    [15:0];
  logic [DATA_WIDTH-1:0] scale_i         [DIMENSION-1:0];
  logic [DATA_WIDTH-1:0] scale_modifier_i;
  logic [DATA_WIDTH-1:0] rotation_i      [3:0];
  logic [DATA_WIDTH-1:0] focal_x_i;
  logic [DATA_WIDTH-1:0] focal_y_i;
  logic in_valid;

  // Outputs
  logic in_ready;
  logic [DATA_WIDTH-1:0] Ttrans_o   [2:0];
  logic [DATA_WIDTH-1:0] p_project_o[DIMENSION-1:0];

  // Instantiate DUT
  Gaussian_preprocess #(
    .DIMENSION(DIMENSION),
    .DATA_WIDTH(DATA_WIDTH),
    .COUNTER_WIDTH(COUNTER_WIDTH),
    .PREPROCESS_START_ADDR(PREPROCESS_START_ADDR)
  ) dut (
    .clk_i(clk),
    .rst_n_i(rst_n),
    .data_type_i(data_type_i),
    .orig_points_i(orig_points_i),
    .projmatrix_i(projmatrix_i),
    .viewmatrix_i(viewmatrix_i),
    .scale_i(scale_i),
    .scale_modifier_i(scale_modifier_i),
    .rotation_i(rotation_i),
    .focal_x_i(focal_x_i),
    .focal_y_i(focal_y_i),
    .in_ready(in_ready),
    .in_valid(in_valid),
    .Ttrans_o(Ttrans_o),
    .p_project_o(p_project_o)
  );

  // Clock generation
  always #5 clk = ~clk;

  // Initialization
  initial begin
    clk = 0;
    rst_n = 0;
    in_valid = 0;
    data_type_i = 0;

    #10
    rst_n = 1;

    #20
    // Apply test vectors
    apply_inputs();


    #1000 $finish;
  end

  initial begin
    $dumpfile("./outputs/gs_pre_tb");
    $dumpvars(0, GS_pre_tb);
  end

  task apply_inputs();
    begin
      // Random test vectors or manually crafted ones
      projmatrix_i    = '{default: 16'h0010};
      viewmatrix_i    = '{default: 16'h0020};
      orig_points_i   = '{16'h0001, 16'h0002, 16'h0003};
      scale_i         = '{16'h0005, 16'h0005, 16'h0005};
      scale_modifier_i = 16'h0002;
      rotation_i      = '{16'h0001, 16'h0002, 16'h0003, 16'h0004};
      focal_x_i       = 16'h0040;
      focal_y_i       = 16'h0050;
      data_type_i     = 0;

      wait (in_ready);
      in_valid = 1;
      #10
      in_valid = 0;
    end
  endtask

endmodule
