module mp_adder(
    input logic                              clk_i,
    input logic                              rst_n_i,
    input logic                              en_i,
    input logic                              data_type_i,              //0：integer       1:FP16      (assume all integer inputs are sign_expanded to 32bits)
    input logic              [35:0]          opa_i,                      //max 36_bit input for partial_sum prop
    input logic              [31:0]          opb_i,                      //max 32 bit input for mult results
    output logic              [35:0]          sum_o                       //align output to 36bit
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
logic inf = a_inf || b_inf;
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

logic [35:0] sum = data_type_i ? ({{24{preshifted_a[11]}},preshifted_a} + {{24{preshifted_b[11]}},preshifted_b}) : (a_reg + {{4{b_reg[31]}}, b_reg});

logic [35:0] comp_sum = data_type_i?(sum[35]) ? (~sum + 1'b1) : sum:sum;

logic [3:0] post_shift;

leading_zero_detector #(12) detecter (
    .data       (comp_sum[11:0]),
    .leading_zero(post_shift)
);

logic overflow = (max_exp > 6'd29 + post_shift) || inf;
logic underflow = (max_exp + 6'b1 < post_shift) || comp_sum[11:0] == 12'b0;

logic [11:0] shifted_sum = (overflow || underflow) ? 12'b0 : comp_sum[11:0] << post_shift;
logic [4:0] exp_result = overflow ? 5'd31 :underflow ? 5'b0 : max_exp + 5'd1 - post_shift;

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