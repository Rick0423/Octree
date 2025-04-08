`timescale 1ns / 1ps
module GEMM_3 #(
  parameter DATA_WIDTH     = 16,
  parameter DATA_WIDTH_OUT = 36,
  parameter MATRIX_SIZE    = 3
) (
  input  logic                      clk_i,
  input  logic                      rst_n_i,
  input  logic                      en_i,
  input  logic                      load_weight_i,
  input  logic                      data_type_i,
  input  logic [    DATA_WIDTH-1:0] weight_i     [MATRIX_SIZE*MATRIX_SIZE-1:0],
  input  logic [    DATA_WIDTH-1:0] act_i        [            MATRIX_SIZE-1:0],
  output logic [DATA_WIDTH_OUT-1:0] mat_o        [            MATRIX_SIZE-1:0]
);

  logic                    reg_data_type_i;
  logic                    reg_en_i;
  logic                    red_unit_en_i;
  logic                    red_unit_data_type_i;
  logic [  DATA_WIDTH-1:0] reg_weight      [MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH*2-1:0] reg_prod        [MATRIX_SIZE*MATRIX_SIZE-1:0];

  //hold input weight
  always @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
        reg_weight[i] <= 0;
      end
    end else if (load_weight_i) begin
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
        reg_weight[i] <= weight_i[i];
      end
    end
  end

  always @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      reg_data_type_i <= 0;
      reg_en_i        <= 0;
      red_unit_en_i   <= 0;
      red_unit_data_type_i<=0;
    end else begin
      reg_data_type_i <= data_type_i;
      reg_en_i        <= en_i;
      red_unit_en_i        <= reg_en_i;
      red_unit_data_type_i<=reg_data_type_i;
    end
  end

  genvar o, u;
  generate
    for (o = 0; o < MATRIX_SIZE; o += 1) begin

      for (u = 0; u < MATRIX_SIZE; u += 1) begin
        mp_mult  u_multiplier (
          .clk_i      (clk_i),
          .rst_n_i    (rst_n_i),
          .en_i       (en_i),
          .data_type_i(data_type_i),
          .opa_i      (act_i[u]),                     //activation broadcast
          .opb_i      (reg_weight[u*MATRIX_SIZE+o]),  //stored weight unroll row-wise
          .prod_o     (reg_prod[o*MATRIX_SIZE+u])
        );
      end

      red_unit_3 #(
        .DATA_WIDTH    (DATA_WIDTH * 2),
        .DATA_WIDTH_OUT(DATA_WIDTH_OUT)
      ) u_red_unit (
        .clk_i      (clk_i),
        .rst_n_i    (rst_n_i),
        .en_i       (red_unit_en_i),
        .data_type_i(red_unit_data_type_i),
        .a_i        (reg_prod[o*MATRIX_SIZE+0]),
        .b_i        (reg_prod[o*MATRIX_SIZE+1]),
        .c_i        (reg_prod[o*MATRIX_SIZE+2]),
        .sum_o      (mat_o[o])
      );
    end
  endgenerate

endmodule

module GEMM_4 #(
  parameter DATA_WIDTH     = 16,
  parameter DATA_WIDTH_OUT = 36,
  parameter MATRIX_SIZE    = 3
) (
  input  logic                      clk_i,
  input  logic                      rst_n_i,
  input  logic                      en_i,
  input  logic                      load_weight_i,
  input  logic                      data_type_i,
  input  logic [    DATA_WIDTH-1:0] weight_i     [MATRIX_SIZE*MATRIX_SIZE-1:0],
  input  logic [    DATA_WIDTH-1:0] act_i        [            MATRIX_SIZE-1:0],
  output logic [DATA_WIDTH_OUT-1:0] mat_o        [            MATRIX_SIZE-1:0]
);

  logic                    reg_data_type_i;
  logic                    reg_en_i;
  logic                    red_unit_en_i;
  logic                    red_unit_data_type_i;
  logic [  DATA_WIDTH-1:0] reg_weight      [MATRIX_SIZE*MATRIX_SIZE-1:0];
  logic [DATA_WIDTH*2-1:0] reg_prod        [MATRIX_SIZE*MATRIX_SIZE-1:0];

  //hold input weight
  always @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
        reg_weight[i] <= 0;
      end
    end else if (load_weight_i) begin
      for (int i = 0; i < MATRIX_SIZE * MATRIX_SIZE; i += 1) begin
        reg_weight[i] <= weight_i[i];
      end
    end
  end

  always @(posedge clk_i or negedge rst_n_i) begin
    if (!rst_n_i) begin
      reg_data_type_i <= 0;
      reg_en_i        <= 0;
      red_unit_en_i   <= 0;
      red_unit_data_type_i<=0;
    end else begin
      reg_data_type_i <= data_type_i;
      reg_en_i        <= en_i;
      red_unit_en_i        <= reg_en_i;
      red_unit_data_type_i<=reg_data_type_i;
    end
  end

  genvar o, u;
  generate
    for (o = 0; o < MATRIX_SIZE; o += 1) begin
      for (u = 0; u < MATRIX_SIZE; u += 1) begin
        mp_mult  u_multiplier (
          .clk_i      (clk_i),
          .rst_n_i    (rst_n_i),
          .en_i       (en_i),
          .data_type_i(data_type_i),
          .opa_i      (act_i[u]),                     //activation broadcast
          .opb_i      (reg_weight[u*MATRIX_SIZE+o]),  //stored weight unroll row-wise
          .prod_o     (reg_prod[o*MATRIX_SIZE+u])
        );
      end

      red_unit_3 #(
        .DATA_WIDTH    (DATA_WIDTH * 2),
        .DATA_WIDTH_OUT(DATA_WIDTH_OUT)
      ) u_red_unit (
        .clk_i      (clk_i),
        .rst_n_i    (rst_n_i),
        .en_i       (red_unit_en_i),
        .data_type_i(red_unit_data_type_i),
        .a_i        (reg_prod[o*MATRIX_SIZE+0]),
        .b_i        (reg_prod[o*MATRIX_SIZE+1]),
        .c_i        (reg_prod[o*MATRIX_SIZE+2]),
        .sum_o      (mat_o[o])
      );
    end
  endgenerate
endmodule

module red_unit_3 #(
  parameter DATA_WIDTH     = 32,
  parameter DATA_WIDTH_OUT = 36
) (
  input  logic                      clk_i,
  input  logic                      rst_n_i,
  input  logic                      en_i,
  input  logic                      data_type_i,
  input  logic [    DATA_WIDTH-1:0] a_i,
  input  logic [    DATA_WIDTH-1:0] b_i,
  input  logic [    DATA_WIDTH-1:0] c_i,
  output logic [DATA_WIDTH_OUT-1:0] sum_o
);

  logic [DATA_WIDTH_OUT-1:0] sum_ab;
  logic [    DATA_WIDTH-1:0] hold_c;
  logic [    DATA_WIDTH-1:0] hold_c_2;
  logic                      reg_en_i;
  logic                      reg_en_i_2;
  logic                      reg_data_type_i;
  logic                      reg_data_type_i_2;

  always @(posedge clk_i or rst_n_i) begin
    if (!rst_n_i) begin
      hold_c          <= 'd0;
      reg_en_i        <= 0;
      reg_data_type_i <= 0;
      hold_c_2          <= 'd0;
      reg_en_i_2        <= 0;
      reg_data_type_i_2 <= 0;
    end else if (en_i) begin
      hold_c_2          <=hold_c;
      reg_en_i_2        <=reg_en_i ;
      reg_data_type_i_2 <=reg_data_type_i ;
      hold_c          <= c_i;
      reg_en_i        <= en_i;
      reg_data_type_i <= data_type_i;
    end
  end

  mp_adder  u_adder_ab (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .en_i       (en_i),
    .data_type_i(data_type_i),
    .opa_i      ({4'd0,a_i}),
    .opb_i      (b_i),
    .sum_o      (sum_ab)
  );

  mp_adder u_adder_out (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .en_i       (reg_en_i_2),
    .data_type_i(reg_data_type_i_2),
    .opa_i      (sum_ab),
    .opb_i      (hold_c_2),
    .sum_o      (sum_o)
  );
endmodule


module red_unit_4 #(
  parameter DATA_WIDTH     = 32,
  parameter DATA_WIDTH_OUT = 36
) (
  input  logic                      clk_i,
  input  logic                      rst_n_i,
  input  logic                      en_i,
  input  logic                      data_type_i,
  input  logic [    DATA_WIDTH-1:0] a_i,
  input  logic [    DATA_WIDTH-1:0] b_i,
  input  logic [    DATA_WIDTH-1:0] c_i,
  input  logic [    DATA_WIDTH-1:0] d_i,
  output logic [DATA_WIDTH_OUT-1:0] sum_o
);

  logic [DATA_WIDTH_OUT-1:0] sum_ab;
  logic [DATA_WIDTH_OUT-1:0] sum_cd;
  logic [    DATA_WIDTH-1:0] hold_c;
  logic [    DATA_WIDTH-1:0] hold_c_2;
  logic                      reg_en_i;
  logic                      reg_en_i_2;
  logic                      reg_data_type_i;
  logic                      reg_data_type_i_2;

  always @(posedge clk_i or rst_n_i) begin
    if (!rst_n_i) begin
      hold_c          <= 'd0;
      reg_en_i        <= 0;
      reg_data_type_i <= 0;
      hold_c_2          <= 'd0;
      reg_en_i_2        <= 0;
      reg_data_type_i_2 <= 0;
    end else if (en_i) begin
      hold_c_2          <=hold_c;
      reg_en_i_2        <=reg_en_i ;
      reg_data_type_i_2 <=reg_data_type_i ;
      hold_c          <= c_i;
      reg_en_i        <= en_i;
      reg_data_type_i <= data_type_i;
    end
  end

  mp_adder  u_adder_ab (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .en_i       (en_i),
    .data_type_i(data_type_i),
    .opa_i      ({4'd0,a_i}),
    .opb_i      (b_i),
    .sum_o      (sum_ab)
  );

  mp_adder  u_adder_cd (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .en_i       (en_i),
    .data_type_i(data_type_i),
    .opa_i      ({4'd0,c_i}),
    .opb_i      (d_i),
    .sum_o      (sum_cd)
  );

  mp_adder u_adder_out (
    .clk_i      (clk_i),
    .rst_n_i    (rst_n_i),
    .en_i       (reg_en_i_2),
    .data_type_i(reg_data_type_i_2),
    .opa_i      (sum_ab),
    .opb_i      (sum_cd[31:0]),
    .sum_o      (sum_o)
  );

endmodule

module mp_adder(
    input logic                              clk_i,
    input logic                              rst_n_i,
    input logic                              en_i,
    input logic                              data_type_i,              //0：integer       1:FP16      (assume all integer inputs are sign_expanded to 32bits)
    input logic              [35:0]          opa_i,                      //max 36_bit input for partial_sum prop
    input logic              [31:0]          opb_i,                      //max 32 bit input for mult results
    output logic              [35:0]         sum_o                       //align output to 36bit
);

logic [35:0] a_reg;
logic [31:0] b_reg;

// register input (0 for denorm, INF for NAN)


logic a_inf, b_inf;
logic [4:0] a_exp, b_exp;
logic [11:0] a_mantissa, b_mantissa;

always@(*) begin
    if(en_i && data_type_i) begin 
        a_exp = a_reg[14:10];
        a_inf = &a_reg[14:10];
        a_mantissa = (|a_exp && !a_inf) ? (a_reg[15] ? ({2'b10, ~a_reg[9:0]}+1'b1) : {2'b01, a_reg[9:0]}) : 12'b0;

        b_exp = b_reg[14:10];
        b_inf = &b_reg[14:10];
        b_mantissa = (|b_exp && !b_inf) ? (b_reg[15] ? ({2'b10, ~b_reg[9:0]}+1'b1) : {2'b01, b_reg[9:0]}) : 12'b0;

    end
    else begin      //not activated
        a_exp = 5'b0;
        a_mantissa = 12'b0;
        a_inf = 1'b0;

        b_exp = 5'b0;
        b_mantissa = 12'b0;
        b_inf = 1'b0;
    end
end
wire inf = a_inf || b_inf;
logic [5:0] max_exp;
logic [4:0] b_shift;
logic [4:0] a_shift;

logic [11:0] preshifted_a;
logic [11:0] preshifted_b;

//preshift
always@(*) begin
    case(a_exp > b_exp)
    1'b0: begin
        max_exp = a_exp;
        b_shift = a_exp - b_exp;
        a_shift = 5'b0;
        preshifted_a = a_mantissa;
        preshifted_b = b_shift > 4'd10 ? 12'b0 : b_mantissa >>> b_shift;
    end
    1'b1: begin
        max_exp = b_exp;
        a_shift = b_exp - a_exp;
        b_shift = 5'b0;
        preshifted_b = b_mantissa;
        preshifted_a = a_shift > 4'd10 ? 12'b0 : a_mantissa >>> a_shift;
    end
    endcase
end

wire [35:0] sum = data_type_i ? ({{24{preshifted_a[11]}},preshifted_a} + {{24{preshifted_b[11]}},preshifted_b}) : (a_reg + {{4{b_reg[31]}}, b_reg});

wire [35:0] comp_sum = data_type_i?(sum[35]) ? (~sum + 1'b1) : sum :sum;

logic [3:0] post_shift;

leading_zero_detector #(12) detecter (
    .data       (comp_sum[11:0]),
    .leading_zero(post_shift)
);

wire overflow = (max_exp > 6'd29 + post_shift) || inf;
wire underflow = (max_exp + 6'b1 < post_shift) || comp_sum[11:0] == 12'b0;

wire [11:0] shifted_sum = (overflow || underflow) ? 12'b0 : comp_sum[11:0] << post_shift;
wire [4:0] exp_result = overflow ? 5'd31 :underflow ? 5'b0 : max_exp + 5'd1 - post_shift;

always@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        a_reg <= 36'b0;
        b_reg <= 32'b0;
        sum_o <= 36'b0;
    end
    else if(en_i)begin
        case(data_type_i) 
        1'b0: begin
            a_reg <= opa_i;
            b_reg <= opb_i;
            sum_o <= sum;
        end
        1'b1: begin
            a_reg <= opa_i;
            b_reg <= opb_i;
            sum_o <= {20'b0, sum[35], exp_result,shifted_sum[10:1]};
        end
        endcase
    end
end


endmodule


module leading_zero_detector #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] data,
    output logic [$clog2(WIDTH+1)-1:0] leading_zero
);


generate
    if (WIDTH == 1) begin: base
        assign leading_zero = data[0] ? 1'b0 : 1'b1;
    end 
    else begin: recur
        localparam UPPER_W = (WIDTH + 1)/2;
        localparam LOWER_W = WIDTH - UPPER_W;
        
        logic [UPPER_W-1:0] upper = data[WIDTH-1 -: UPPER_W];
        logic [LOWER_W-1:0] lower = data[LOWER_W-1:0];
        
        logic [$clog2(UPPER_W+1)-1:0] cnt_upper;
        logic [$clog2(LOWER_W+1)-1:0] cnt_lower;
        logic upper_non_zero = |upper;

        leading_zero_detector #(UPPER_W) inst_upper(upper, cnt_upper);
        leading_zero_detector #(LOWER_W) inst_lower(lower, cnt_lower);

        assign leading_zero =upper_non_zero ? cnt_upper : (UPPER_W + cnt_lower);
    end
endgenerate

endmodule

module mp_mult(
    input logic                      clk_i,
    input logic                      rst_n_i,
    input logic                      en_i,
    input logic                      data_type_i,  //0:INT 1:FP16  all INTs are sign_expanded to 16 bits
    input logic      [15:0]          opa_i,
    input logic      [15:0]          opb_i,
    output logic     [31:0]          prod_o          //align to 32bit
);
reg [15:0] a_reg;
reg [15:0] b_reg;

wire sign = a_reg[15] ^ b_reg[15];

// Detect infinite inputs (treating NANs as infinite)
wire a_inf = data_type_i ? (&a_reg[14:10] == 1'b1) : 1'b1;
wire b_inf = data_type_i ? (&b_reg[14:10] == 1'b1) : 1'b1;
wire inf =  a_inf || b_inf;
// Detect zero iFnputs (treating denormals as zeros)
wire a_zero = (a_reg[14:10] == 5'b0);
wire b_zero = (b_reg[14:10] == 5'b0);
wire zero = ! inf && (a_zero || b_zero);

wire [14:0] comp_a =  !data_type_i ? (a_reg[15] ? (~a_reg[14:0] + 1'b1) : a_reg[14:0]) : (a_zero || a_inf) ? 15'b0 : {5'b0_0001, a_reg[9:0]};
wire [14:0] comp_b =  !data_type_i ? (b_reg[15] ? (~b_reg[14:0] + 1'b1) : b_reg[14:0]) : (b_zero || b_inf) ? 15'b0 : {5'b0_0001, b_reg[9:0]};

wire [29:0] product = {15'b0, comp_a} * {15'b0, comp_b};
wire [30:0] comp_prod = sign ? ({sign, ~product}+1'b1) : {sign, product};
wire mant_msb = product[21];
wire [29:0] norm_prod = data_type_i ? (mant_msb ? (product >> 1) : product) : product;
wire [5:0] flow_judge = {1'b0, b_reg[14:10]} + {1'b0, b_reg[14:10]} + {5'b0, mant_msb};
wire overflow = inf ? 1'b1 : flow_judge > 6'd45 ;
wire underflow = zero ? 1'b1 : flow_judge < 6'd15 ;
wire [4:0] exp_sum = underflow ? 5'd0 : overflow ? 5'd31 : a_reg[14:10] + b_reg[14:10] + {4'd0,mant_msb} - 5'd15;
wire [9:0] mantissa = (overflow || underflow) ? 10'b0 : norm_prod[20:11];



always@(posedge clk_i or negedge rst_n_i) begin
    if(!rst_n_i) begin
        a_reg <= 16'b0;
        b_reg <= 16'b0;
        prod_o <= 32'b0;
    end
    else if(en_i) begin
        case (data_type_i)
        1'b0: begin
            a_reg <= opa_i;
            b_reg <= opb_i;
            prod_o <= {sign, (comp_prod)};
        end
        1'b1: begin
            a_reg <= opa_i;
            b_reg <= opb_i;
            prod_o <= {16'b0, sign, exp_sum[4:0], mantissa};
        end
        endcase
    end
end
endmodule
