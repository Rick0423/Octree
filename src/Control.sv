`timescale 1ns / 1ps
module Control #(
  parameter int CONTROL_WIDTH = 8,
  parameter int CHILDREN_NUM  = 64,
  parameter int SELECT_WIDTH  = 2
) (
  input  logic                     clk,
  input  logic                     rst_n,
  input  logic [CONTROL_WIDTH-1:0] ctrl,// 指示当前需要octree完成的操作，包括：增、减anchor，还有遍历octree，以及中断当前节点的所有孩子
  output logic                     search_start,
  input  logic                     search_done,
  output logic                     add_anchor,
  output logic                     del_anchor,
  input  logic                     add_done,
  input  logic                     del_done,

  //SRAM的选通信号：searcher，updater 两种选择
  output logic [SELECT_WIDTH-1:0] mem_select
);

  //用于给sram的MUX指示接通那一个模块给sram sram_1_select与sram_2_select
  localparam NAN = 0;
  localparam SEARCHER = 1;
  localparam UPDATER = 2;


  //由外界告知的control 信号，告知octree应该做什么工作。即ctrl信号的取值。
  localparam [CONTROL_WIDTH-1:0] WAIT = 0;
  localparam [CONTROL_WIDTH-1:0] SEARCH = 1;
  localparam [CONTROL_WIDTH-1:0] ADD = 2;
  localparam [CONTROL_WIDTH-1:0] DEL = 3;

  typedef enum logic [1:0] {
    IDLE,
    SEARCHING,
    ADDING,
    DELETING
  } state_e;

  state_e state;

  always @(posedge clk or negedge rst_n) begin
    if (rst_n == 0) begin
      search_start <= 1'b0;
      add_anchor   <= 1'b0;
      del_anchor   <= 1'b0;
      mem_select   <= NAN;
    end else begin
      case (state)
        IDLE: begin
          if (ctrl == SEARCH) begin
            state <= SEARCHING;
          end else if (ctrl == ADD) begin
            state <= ADDING;
          end else if (ctrl == DEL) begin
            state <= DELETING;
          end else begin
            state        <= IDLE;
            search_start <= 1'b0;
            add_anchor   <= 1'b0;
            del_anchor   <= 1'b0;
            mem_select   <= NAN;
          end
        end
        SEARCHING: begin
          if (search_done) begin
            state <= IDLE;
          end else begin
            search_start <= 1'b1;
            add_anchor   <= 1'b0;
            del_anchor   <= 1'b0;
            mem_select   <= SEARCHER;
          end
        end
        ADDING: begin
          if (add_done) begin
            state <= IDLE;
          end else begin
            search_start <= 1'b0;
            add_anchor   <= 1'b1;
            del_anchor   <= 1'b0;
            mem_select   <= UPDATER;
          end
        end
        DELETING: begin
          if (del_done) begin
            state <= IDLE;
          end else begin
            search_start <= 1'b0;
            add_anchor   <= 1'b0;
            del_anchor   <= 1'b1;
            mem_select   <= UPDATER;
          end
        end
        default: begin
          state        <= IDLE;
          search_start <= 1'b0;
          add_anchor   <= 1'b0;
          del_anchor   <= 1'b0;
          mem_select   <= NAN;
        end
      endcase
    end
  end
endmodule
