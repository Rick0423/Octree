`timescale 1ns / 1ps
module Searcher #(
  parameter DIMENTION         = 3,
  parameter DATA_WIDTH        = 16,
  parameter DATA_BUS_WIDTH    = 64,
  parameter ADDR_BUS_WIDTH    = 64,
  parameter FEATURE_LENTH     = 9,
  parameter CHILDREN_NUM      = 8,
  parameter TREE_LEVEL        = 5,
  parameter SELECT_WIDTH      = 3,
  parameter COUNTER_WIDTH     = 4,
  parameter LOG_CHILD_NUM     = 3,
  parameter LOG_TREE_LEVEL    = 3,
  parameter TREE_ADDR_START   = 0,
  parameter LOD_START_ADDR    = 500,
  parameter FEATURE_START_ADDR= 1200,
  parameter ENCODE_ADDR_WIDTH = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL,
  parameter FIFO_DATA_WIDTH   = ENCODE_ADDR_WIDTH + LOG_CHILD_NUM+1+LOG_CHILD_NUM*CHILDREN_NUM, //+1原因在于0-8需要4bit数据来表示
  parameter FIFO_DEPTH_1      = ENCODE_ADDR_WIDTH + 10,
  parameter FIFO_DEPTH_2      = ENCODE_ADDR_WIDTH + 10
) (
  input  logic                                     clk,
  input  logic                                     rst_n,
  //控制信号，用于与controler交互 
  input  logic                                     search_start,
  output logic                                     search_done,
  //用于和主存连接的mem接口
  output logic                                     mem_sram_CEN,   
  output logic                [ADDR_BUS_WIDTH-1:0] mem_sram_A,     
  output logic                [DATA_BUS_WIDTH-1:0] mem_sram_D,     
  output logic                                     mem_sram_GWEN,  
  input  logic                [DATA_BUS_WIDTH-1:0] mem_sram_Q,     
  //CSR信号
  input  logic [DIMENTION-1:0][    DATA_WIDTH-1:0] cam_pos,       
  input  logic                [    DATA_WIDTH-1:0] dist_max,      
  input  logic                [    DATA_WIDTH-1:0] s,             
  //输出的feature
  output logic                [DATA_BUS_WIDTH-1:0] feature_out,
  input  logic                                     out_valid,
  output logic                                     out_ready,
  //当前主存中存储的八叉树的总量
  input  logic                [ COUNTER_WIDTH-1:0] tree_num
);
  //针对SRAM接口进行多路选通
  localparam SRAM_LOD = 0, SRAM_SEARCH = 1;

  //状态机的状态
  localparam IDLE = 0, LOD = 1, TREE_SEARCH = 2, DONE = 3;

  //用于可能的计数器
  logic [COUNTER_WIDTH-1:0] tree_cnt;

  //主存接口
  logic                      lod_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] lod_sram_A;
  logic [DATA_BUS_WIDTH-1:0] lod_sram_D;
  logic                      lod_sram_GWEN;
  logic [DATA_BUS_WIDTH-1:0] lod_sram_Q;
  logic                      search_sram_CEN;
  logic [ADDR_BUS_WIDTH-1:0] search_sram_A;
  logic [DATA_BUS_WIDTH-1:0] search_sram_D;
  logic                      search_sram_GWEN;
  logic [DATA_BUS_WIDTH-1:0] search_sram_Q;

  //用于和lod计算部分的接口
  logic [  DATA_WIDTH-1:0] current_tree_count;
  logic [TREE_LEVEL-1:0]   lod_active;
  logic                    lod_ready;
  logic                    cal_lod;

  //用于和tree search链接的端口
  logic                    tree_search_done;
  logic                    tree_search_start;

  //用于Searcher顶层的一些状态指示
  logic [SELECT_WIDTH-1:0]  mem_select;
  logic [SELECT_WIDTH-1:0]  searcher_state;

  //用于生成内存的选通逻辑
  always_comb begin : Mux_mem
    if (rst_n == 0) begin
      mem_sram_CEN  = 1;
      mem_sram_A    = 0;
      mem_sram_D    = 0;
      mem_sram_GWEN = 1;
      search_sram_Q = 0;
      lod_sram_Q    = 0;
    end else begin
      case (mem_select)
        SRAM_LOD: begin
          mem_sram_CEN  = lod_sram_CEN;
          mem_sram_A    = lod_sram_A;
          mem_sram_D    = lod_sram_D;
          mem_sram_GWEN = lod_sram_GWEN;
          search_sram_Q = 0;
          lod_sram_Q    = mem_sram_Q;
        end
        SRAM_SEARCH: begin
          mem_sram_CEN  = search_sram_CEN;
          mem_sram_A    = search_sram_A;
          mem_sram_D    = search_sram_D;
          mem_sram_GWEN = search_sram_GWEN;
          search_sram_Q = mem_sram_Q;
          lod_sram_Q    = 0;
        end
        default: begin
          mem_sram_CEN  = 1;
          mem_sram_A    = 0;
          mem_sram_D    = 0;
          mem_sram_GWEN = 1;
          search_sram_Q = 0;
          lod_sram_Q    = 0;
        end
      endcase
    end
  end

  //用于两个模块流程的状态机
  always_ff @(posedge clk or negedge rst_n) begin : state_machine_for_searcher
    if (rst_n == 0) begin
      mem_select <= SRAM_LOD;
      tree_cnt   <= 0;
      cal_lod    <= 0;
    end else begin
      case (searcher_state)
        IDLE: begin
          mem_select <= SRAM_LOD;
          tree_cnt   <= 0;
          cal_lod    <= 0;
          if (search_start) begin
            searcher_state <= LOD;
          end
        end
        LOD: begin
          if (lod_ready) begin
            searcher_state <= TREE_SEARCH;
            mem_select     <= SRAM_SEARCH;
            tree_search_start <= 1;
            cal_lod        <= 0;
          end else begin
            cal_lod    <= 1;
            mem_select <= SRAM_LOD;
          end
        end
        TREE_SEARCH: begin
          if (tree_search_done) begin
            tree_search_start <= 1;
            if (tree_cnt == tree_num - 1) begin
              search_done    <= 1;
              searcher_state <= IDLE;
            end else begin
              tree_cnt       <= tree_cnt + 1;
              searcher_state <= LOD;
            end
          end else begin
            tree_search_start <= 0;
          end
        end
        default: begin
          searcher_state <= IDLE;
          mem_select     <= SRAM_LOD;
          tree_cnt       <= 0;
          cal_lod        <= 0;
        end
      endcase
    end
  end

  lod_compute #(
    .DIMENTION     (DIMENTION),
    .DATA_WIDTH    (DATA_WIDTH),
    .DATA_BUS_WIDTH(DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH(ADDR_BUS_WIDTH),
    .TREE_LEVEL    (TREE_LEVEL),
    .LOD_START_ADDR(LOD_START_ADDR)
  ) u_lod_compute (
    .clk               (clk),
    .rst_n             (rst_n),
    .cal_lod           (cal_lod),
    .lod_ready         (lod_ready),
    .mem_sram_CEN      (lod_sram_CEN),
    .mem_sram_A        (lod_sram_A),
    .mem_sram_D        (lod_sram_D),
    .mem_sram_GWEN     (lod_sram_GWEN),
    .mem_sram_Q        (lod_sram_Q),
    .cam_pos           (cam_pos),
    .current_tree_count(current_tree_count),
    .lod_active        (lod_active),
    .dist_max          (dist_max),
    .s                 (s)
  );

  tree_search  #(
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
  ) u_tree_search (
    .clk              (clk),
    .rst_n            (rst_n),
    .tree_search_start(tree_search_start),
    .tree_search_done (tree_search_done),
    .mem_sram_CEN     (search_sram_CEN),
    .mem_sram_A       (search_sram_A),
    .mem_sram_D       (search_sram_D),
    .mem_sram_GWEN    (search_sram_GWEN),
    .mem_sram_Q       (search_sram_Q),
    .feature_out      (feature_out),
    .out_valid        (out_valid),
    .out_ready        (out_ready),
    .tree_cnt         (tree_cnt),
    .lod_active       (lod_active)
  );
  
  
endmodule

module lod_compute #(
  parameter DIMENTION      = 3,
  parameter DATA_WIDTH     = 16,
  parameter DATA_BUS_WIDTH = 64,
  parameter ADDR_BUS_WIDTH = 64,
  parameter TREE_LEVEL     = 5 ,
  parameter LOD_START_ADDR = 1
) (
  input  logic                                     clk,
  input  logic                                     rst_n,
  input  logic                                     cal_lod,
  output logic                                     lod_ready,
  output logic                                     mem_sram_CEN,
  output logic                [ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic                [DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                                     mem_sram_GWEN,
  input  logic                [DATA_BUS_WIDTH-1:0] mem_sram_Q,
  input  logic [DIMENTION-1:0][    DATA_WIDTH-1:0] cam_pos,
  input  logic                [    DATA_WIDTH-1:0] current_tree_count,
  output logic                [    TREE_LEVEL-1:0] lod_active,
  input logic[DATA_WIDTH-1:0]                      s,
  input logic[DATA_WIDTH-1:0]                      dist_max
);
  //在SRAM中保存有这个Octree的position和每一层的delta L信息（一整个Octree的所有anchor共用同一个position，在同一个level的所有anchor共用一个delta L）
  //在SRAM中的数据按照这个格式存储：以64个为一组，每一个octree保存3个64.
  // 1、  ｜16 (x)        | 16 (y)    | 16 (z)    | 16(layer 1 delta L)| 
  // 2、  | 16(layer 2)   |(layer 3)  | (layer 4) |(layer5)           |
  //SRAM接口，直接操作读写即可，读写地址为    LOD_START_ADDR+2*current_tree_count 例如当current_tree_count为0 的时候需要读的地址就是LOD_START_ADDR，current_tree_count为5的时候，需要读的地址就是LOD_START_ADDR+3*5
  //lod_active 1-1-0-0-0   表示level 0 和 1的有效，其余均无效； 1-1-1-1-0-0-0-0     表示 level 0-3有效；
  //lod_active 1-0-0-1-0   表示level 0 和 3的anchor有效，其余均无效（理论上，在delta L巨大的场景下有可能出现）

  assign mem_sram_GWEN = 1;
  assign mem_sram_A    = 0;
  assign mem_sram_D    = 0;
  assign mem_sram_CEN  = (cal_lod) ? 0 : 1;
  assign lod_active    = 5'b00111;
  assign lod_ready     = 1;


endmodule

module tree_search #(
  parameter DIMENTION         = 3,
  parameter DATA_WIDTH        = 16,
  parameter DATA_BUS_WIDTH    = 64,
  parameter ADDR_BUS_WIDTH    = 64,
  parameter FEATURE_LENTH     = 9,
  parameter CHILDREN_NUM      = 8,
  parameter TREE_LEVEL        = 5,
  parameter SELECT_WIDTH      = 4,
  parameter COUNTER_WIDTH     = 4,
  parameter LOG_CHILD_NUM     = 3,
  parameter LOG_TREE_LEVEL    = 3,
  parameter TREE_ADDR_START   = 0,
  parameter LOD_START_ADDR    = 500,
  parameter FEATURE_START_ADDR= 400,
  parameter ENCODE_ADDR_WIDTH = LOG_CHILD_NUM * TREE_LEVEL + LOG_TREE_LEVEL,
  parameter FIFO_DATA_WIDTH   = ENCODE_ADDR_WIDTH + LOG_CHILD_NUM+1+LOG_CHILD_NUM*CHILDREN_NUM, //+1原因在与0-8需要4bit数据来表示
  parameter FIFO_DEPTH_1      = ENCODE_ADDR_WIDTH + 10,
  parameter FIFO_DEPTH_2      = ENCODE_ADDR_WIDTH + 10
) (
  input  logic                      clk,
  input  logic                      rst_n,
  //控制信号
  input  logic                      tree_search_start,
  output logic                      tree_search_done,
  input  logic [ COUNTER_WIDTH-1:0] tree_cnt,
  input  logic [    TREE_LEVEL-1:0] lod_active,
  //主存接口
  output logic                      mem_sram_CEN,
  output logic [ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic [DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                      mem_sram_GWEN,
  input  logic [DATA_BUS_WIDTH-1:0] mem_sram_Q,
  //输出接口（连PE）
  output logic [DATA_BUS_WIDTH-1:0] feature_out,
  input  logic                      out_valid,
  output logic                      out_ready
);
  localparam IDLE = 0, SEARCH = 1, OUT = 2, DONE = 3;
  localparam FIFO_IDLE=0,FIFO_SEARCH=1,FIFO_OUTPUT=2,FIFO_SEARCH_THIS_ANCHOR=3,FIFO_READY_OUT=4,FIFO_OUTPUT_THIS_ANCHOR=5,FIFO_STALL_1_C=6;
  localparam [TREE_LEVEL-1:0][DATA_BUS_WIDTH-1:0] ADDR_VARY = {64'd74, 64'd10, 64'd2, 64'd1, 64'd0};
  // Prime numbers for hash calculation
  localparam  int PRIMES [4:0] = {2099719, 3867465, 807545, 2654435, 1};  // 质数数组，增强哈希随机性

  //控制信号、计数器、状态机
  logic [COUNTER_WIDTH-1:0] fifo_cnt, in_anchor_cnt;
  logic [SELECT_WIDTH-1:0] tree_state;
  logic [SELECT_WIDTH-1:0] fifo_state;
  logic outing_done;
  logic searching_done;
  logic first;

  //输入到FIFO中保存的anchor原码地址
  logic [ENCODE_ADDR_WIDTH-1:0] w_fifo_pos_encode;
  //从64bit中选出关心的16bit,4选1。
  logic [1:0] anchor_interested;  

  //解算的组合逻辑，根据从SRAM中读上来的数据，生成ready to search的数据，写入FIFO中
  logic [CHILDREN_NUM-1:0]                    self_data;
  logic [CHILDREN_NUM-1:0]                    child_data;
  logic [CHILDREN_NUM-1:0][LOG_CHILD_NUM-1:0] self_ones_pos;
  logic [LOG_CHILD_NUM:0]                     self_ones_count;
  logic [CHILDREN_NUM-1:0][LOG_CHILD_NUM-1:0] child_ones_pos;
  logic [LOG_CHILD_NUM:0]                     child_ones_count;

  //用于标识流水线中的数据是否有效。
  logic                         offset_level_valid;
  logic                         mem_read_data_valid;//访存拿到的数据是否有效
  logic                         mem_read_data_valid_pre;
  logic                         write_fifo_data_valid;//准备写进fifo的数据是否有效
  

  //FIFO的接口信号
  logic                       fifo_1_wr_en;
  logic                       fifo_1_rd_en;
  logic                       fifo_1_empty;
  logic                       fifo_1_full;
  logic [FIFO_DATA_WIDTH-1:0] fifo_1_wdata;
  logic [FIFO_DATA_WIDTH-1:0] fifo_1_rdata;

  logic                       fifo_2_wr_en;
  logic                       fifo_2_rd_en;
  logic                       fifo_2_empty;
  logic                       fifo_2_full;
  logic [FIFO_DATA_WIDTH-1:0] fifo_2_wdata;
  logic [FIFO_DATA_WIDTH-1:0] fifo_2_rdata;

  //从fifo中读出的数据中的第三部分，标识当前的fifo读出信号中有多少个有效的anchor，
  logic [3:0]              r_fifo_1_anchor_num;
  logic [3:0]              r_fifo_2_anchor_num;

  //实际地址计算过程中的使用的数据，方便debug地址线是否正确。
  logic [ 2:0]                                      level;
  logic [ ADDR_BUS_WIDTH-1:0]                                      offset [4:0];
  //加_ 表示是组合逻辑信号，组合路径太长，插入寄存器，level和offset
  logic [   ADDR_BUS_WIDTH-1:0]                     address_part_;
  logic [   ADDR_BUS_WIDTH-1:0]                     actual_address;
  logic [   ADDR_BUS_WIDTH-1:0]                     address_for_sram;
  logic [ENCODE_ADDR_WIDTH-1:0]                     mem_posencode;

  // Direct mapping calculation
  logic [ADDR_BUS_WIDTH-1:0] hash_addr;
  // Fast hash calculation

  //总的状态机
  always_ff @(posedge clk or negedge rst_n) begin : state_machin
    if (rst_n == 0) begin
      tree_state       <= IDLE;
      tree_search_done <= 0;
    end else begin
      case (tree_state)
        IDLE: begin
          if (tree_search_start) begin
            tree_state <= SEARCH;
          end else begin
            tree_search_done <= 0;
          end
        end
        SEARCH: begin
          if(searching_done) begin 
            tree_state <= OUT;
          end
        end
        OUT: begin
          if(outing_done) begin 
            tree_state <= DONE;
          end
        end
        DONE: begin
          tree_search_done <= 1;
          tree_state       <= IDLE;
        end
      endcase
    end
  end

  //从主存中读取数据，写入child_data、self_data中以便之后的处理
  always_ff @( posedge clk or negedge rst_n ) begin : get_intersted_data
    if(rst_n == 0) begin
      self_data <= 0;
      child_data <= 0;
    end else if(mem_read_data_valid) begin   
      for (int i = 0; i < CHILDREN_NUM; i++) begin : bit_separation
            child_data[i] <= mem_sram_Q[anchor_interested*CHILDREN_NUM*2+2*i];     // 提取偶数位
            self_data[i]  <= mem_sram_Q[anchor_interested*CHILDREN_NUM*2+2*i + 1]; // 提取奇数位
        end
    end
  end

  //从输入拿到的数据，根据组合逻辑，生成要写入输出fifo的anchor数据。
  int i, j;
  always_comb begin : produce_ready_to_read_data_self
    self_ones_count = 0;
    // 初始化所有位置为0
    for (int i = 0; i < CHILDREN_NUM; i = i + 1) self_ones_pos[i] = 0;
    j = 0;
    // 遍历每一位，如果为1则将位下标存入 ones_pos 数组中
    for (i = 0; i < 8; i = i + 1) begin
      if (self_data[i]) begin
        self_ones_pos[j] = i[2:0];  // i 的值（只取低3位）即为位序
        j                = j + 1;
      end
    end
    self_ones_count = j[3:0];
  end

  //从输入拿到的数据，根据组合逻辑，生成要写入搜索fifo的anchor数据。
  int u, o;
  always_comb begin : produce_ready_to_read_data_child
    child_ones_count = 0;
    // 初始化所有位置为0
    for (int u = 0; u < CHILDREN_NUM; u = u + 1) child_ones_pos[u] = 0;
    o = 0;
    // 遍历每一位，如果为1则将位下标存入 ones_pos 数组中
    for (u = 0; u < 8; u = u + 1) begin
      if (child_data[u]) begin
        child_ones_pos[o] = u[2:0];  // i 的值（只取低3位）即为位序
        o                 = o + 1;
      end
    end
    child_ones_count = o[3:0];
  end

  //写入FIFO的逻辑
  always_ff @(posedge clk or negedge rst_n) begin : FIFO_write_logic
    if (rst_n == 0) begin
      fifo_1_wr_en <= 0;
      fifo_2_wr_en <= 0;
      fifo_1_wdata <= 0;
      fifo_2_wdata <= 0;
    end else begin
      if (write_fifo_data_valid & (tree_state == SEARCH)) begin // 只有在搜索阶段需要写入FIFO  
        if((child_ones_count != 0) && lod_active[w_fifo_pos_encode[ENCODE_ADDR_WIDTH-1 -:3]]) begin 
          fifo_1_wr_en <= 1;
          fifo_1_wdata <= {w_fifo_pos_encode, child_ones_pos, child_ones_count};
        end else begin
          fifo_1_wr_en <= 0;
        end 
        if((self_ones_count != 0) && lod_active[w_fifo_pos_encode[ENCODE_ADDR_WIDTH-1 -:3]]) begin
          fifo_2_wr_en <= 1;
          fifo_2_wdata <= {w_fifo_pos_encode, self_ones_pos, self_ones_count};
        end else begin
          fifo_2_wr_en <= 0;
        end
      end else begin
        fifo_1_wr_en <= 0;
        fifo_2_wr_en <= 0;
      end
    end
  end

  //读出FIFO的逻辑 
  //FIFO的输出逻辑主要由这个状态机来实现
  always_ff @(posedge clk or negedge rst_n) begin : FIFO_1_read_out
    if (rst_n == 0) begin
      fifo_state <= FIFO_IDLE;
      fifo_cnt   <= 0;
      fifo_1_rd_en <= 0;
      fifo_2_rd_en <= 0;
      first           <= 1;
    end else begin
      case (fifo_state)
        FIFO_IDLE: begin
          if(tree_search_start) begin
            fifo_state <= FIFO_SEARCH ;
          end
          fifo_cnt   <= 0;
          fifo_1_rd_en <= 0;
          fifo_2_rd_en <= 0;
          first           <= 1;
        end
        FIFO_SEARCH:begin
          if(searching_done) begin
            fifo_state <= FIFO_READY_OUT;
            fifo_1_rd_en <= 0; 
          end
          if(fifo_1_empty == 0) begin
              fifo_1_rd_en <= 1;
              fifo_state <= FIFO_STALL_1_C;
              first <=0;
          end else begin
            fifo_1_rd_en <= 0;
          end
        end
        FIFO_STALL_1_C:begin
          fifo_state <= FIFO_SEARCH_THIS_ANCHOR;
          fifo_1_rd_en <= 0;
        end
        FIFO_SEARCH_THIS_ANCHOR:begin
          if(fifo_cnt == r_fifo_1_anchor_num-1)begin
              fifo_1_rd_en <= 0;
              fifo_state <= SEARCH;
              fifo_cnt <= 0;
          end else begin
            fifo_1_rd_en <= 0;
            fifo_cnt <= fifo_cnt +1;
          end
        end
        FIFO_READY_OUT:begin
          if(out_valid)begin
            fifo_state <= FIFO_OUTPUT;
            out_ready <= 0;
          end  else begin
            out_ready <= 1;
          end
        end
        FIFO_OUTPUT:begin
          if(fifo_2_empty == 0) begin
            fifo_2_rd_en <= 1;
            fifo_state <= FIFO_OUTPUT_THIS_ANCHOR;
          end else begin
            fifo_state <= FIFO_IDLE;
          end
        end
        FIFO_OUTPUT_THIS_ANCHOR:begin
          if((fifo_cnt == r_fifo_2_anchor_num-1) & (in_anchor_cnt == FEATURE_LENTH))begin
            if(fifo_2_empty == 0) begin
              fifo_2_rd_en <= 1;
              fifo_cnt <= 0;
              in_anchor_cnt <= 0;
            end else begin
              fifo_state <= FIFO_OUTPUT;
              in_anchor_cnt <= 0;
              fifo_cnt <= 0;
            end
          end else begin
            fifo_2_rd_en <= 0;
            if(in_anchor_cnt == FEATURE_LENTH)begin
              fifo_cnt <= fifo_cnt+1;
              in_anchor_cnt <= 1;
            end else  begin
              in_anchor_cnt <= in_anchor_cnt+1;
            end
          end
        end
        default:begin
          fifo_state <= FIFO_IDLE;
        end
      endcase
    end
  end


  always_ff @(posedge clk or negedge rst_n) begin : read_write_to_sram
    if (rst_n == 0) begin
      mem_sram_CEN        <= 1;
      mem_sram_D          <= 0;
      mem_sram_GWEN       <= 1;
    end else begin
      if (tree_search_start) begin
        mem_sram_CEN        <= 0;
        mem_sram_D          <= 0;
        mem_sram_GWEN       <= 1;
      end else begin
        if(fifo_1_rd_en | fifo_2_rd_en | ((fifo_state == FIFO_SEARCH_THIS_ANCHOR) &(fifo_cnt != r_fifo_1_anchor_num-1)) 
                        | ((fifo_state == FIFO_OUTPUT_THIS_ANCHOR) &((fifo_cnt != r_fifo_2_anchor_num-1)|(in_anchor_cnt != FEATURE_LENTH)))) begin
          mem_sram_CEN        <= 0;
          mem_sram_D          <= 0;
          mem_sram_GWEN       <= 1;
        end else begin
          mem_sram_D          <= 0;
          mem_sram_CEN        <= 1;
          mem_sram_GWEN       <= 1;
        end
      end
    end
  end

  assign mem_sram_A = address_for_sram;
  assign feature_out= (fifo_state == FIFO_OUTPUT_THIS_ANCHOR)?mem_sram_Q:0;
  assign mem_read_data_valid_pre = ~mem_sram_CEN;
  //准备地址相关信息 根据当前的fifo cnt 准备好要抓取的anchor的位置。
  always_comb begin : gen_level_offset_from_fifo_data
    if (tree_state == SEARCH) begin
      r_fifo_1_anchor_num = fifo_1_rdata[3:0];
      r_fifo_2_anchor_num = 0; 
      level = (first)?0:fifo_1_rdata[FIFO_DATA_WIDTH-1-:3]+1;
      for (int a = 0; a < TREE_LEVEL; a += 1) begin
        if (a == {29'd0, fifo_1_rdata[FIFO_DATA_WIDTH-1-:3]} ) begin
          offset[a]={61'd0,fifo_1_rdata[LOG_CHILD_NUM+(fifo_cnt+1)*LOG_CHILD_NUM -:LOG_CHILD_NUM]};
        end else begin
          offset[a] ={61'd0, fifo_1_rdata[FIFO_DATA_WIDTH-LOG_TREE_LEVEL-1-a*LOG_CHILD_NUM-:LOG_CHILD_NUM]};
        end
      end
    end else if (tree_state == OUT) begin
      r_fifo_1_anchor_num = 0;
      r_fifo_2_anchor_num = fifo_2_rdata[3:0];; 
      level = (first)?0:fifo_2_rdata[FIFO_DATA_WIDTH-1-:3];
      for (int a = 0; a < TREE_LEVEL; a += 1) begin
        if (a == {29'd0, fifo_2_rdata[FIFO_DATA_WIDTH-1-:3]} ) begin
          offset[a]={61'd0,fifo_2_rdata[FIFO_DATA_WIDTH-ENCODE_ADDR_WIDTH-1-fifo_cnt*LOG_CHILD_NUM -:LOG_CHILD_NUM]};
        end else begin
          offset[a] = {61'd0,fifo_2_rdata[FIFO_DATA_WIDTH-LOG_TREE_LEVEL-1-a*LOG_CHILD_NUM-:LOG_CHILD_NUM]};
        end
      end
    end else begin
      r_fifo_1_anchor_num = 0;
      r_fifo_2_anchor_num = 0; 
      level= 0;
      for (int a = 0; a < TREE_LEVEL; a += 1) offset[a] = 0;
    end
  end

  //保存当前搜索的anchor的相关信息。
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      mem_posencode <= 18'd0;
      anchor_interested <= 0;
    end else begin
      // 组成格式：|level[2:0]| offset0[2:0] | offset1[2:0] | offset2[2:0] | offset3[2:0] | offset4[2:0]|
      mem_posencode <= {level, offset[0][LOG_CHILD_NUM-1:0], 
                        offset[1][LOG_CHILD_NUM-1:0], offset[2][LOG_CHILD_NUM-1:0], 
                        offset[3][LOG_CHILD_NUM-1:0], offset[4][LOG_CHILD_NUM-1:0]};
      w_fifo_pos_encode <= mem_posencode;
      anchor_interested <= actual_address[1:0];
    end
  end

  // 在tree结构中计算实际地址 // TODO：增加hash的访存逻辑，最后将计算得到的输出也赋值给address_for_sram
  always_comb begin
    if (tree_state == SEARCH) begin
      address_part_ = 0;
      for (int i = 0; i < level; i++) begin
        if (i == 0) begin
          address_part_ += 586 * offset[i];
        end else begin
          address_part_ += offset[i] * (1'b1) << (LOG_CHILD_NUM * ({28'd0, level} - i -1));
        end
      end
      actual_address   = address_part_ + ADDR_VARY[level] + TREE_ADDR_START;
      address_for_sram = {2'b0, actual_address[ADDR_BUS_WIDTH-1:2]};
      //same_addr        = (address_for_sram == last_addr_read) ? 1 : 0;// TODO：可以加一个同一地址的信号，用于标识是否有必要再次访存？
    end else if (tree_state == OUT)begin //TODO:生成hash寻址逻辑
      address_part_ =0;
      actual_address = 0;
      address_for_sram = FEATURE_START_ADDR + {53'd0,hash_addr[10:0]} * 9 + {60'd0,in_anchor_cnt} - 1;      // Direct mappin
    end else begin
      address_part_ =0;
      actual_address = 0;
      address_for_sram = 0;
    end
  end

  //哈希算法，用于计算每一个encode pos 的具体地址。
  always_comb begin
    if (!rst_n) begin
      hash_addr = 64'd0;
    end else if (tree_state == OUT) begin  // OUT 状态
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


  //生成总的状态转移控制信号
  always_ff @( posedge clk or rst_n ) begin : gen_extra_data
    if(rst_n == 0) begin
      searching_done <= 0;
      outing_done    <= 0;
    end else begin
      if((tree_state == SEARCH) & fifo_1_empty & ((write_fifo_data_valid+mem_read_data_valid_pre+mem_read_data_valid+fifo_1_wr_en )==0))begin
        //当搜索fifo空，并且流水线中不存在任何有效数据时，搜索结束
        searching_done <= 1;
      end else if((tree_state == OUT) & fifo_2_empty& (fifo_state ==FIFO_IDLE) )begin
        outing_done <= 1;
      end else begin
        outing_done <= 0;
        searching_done <= 0;
      end
    end
  end

  //流水线中的数据有效信号依次进行传递
  always_ff @(posedge clk or negedge rst_n) begin : valid_signal_in_pipline
    if (rst_n == 0) begin
      write_fifo_data_valid <= 0;
      mem_read_data_valid   <= 0;
    end else begin
      write_fifo_data_valid <= mem_read_data_valid;
      mem_read_data_valid   <=  mem_read_data_valid_pre;
    end
  end

  //FIFO——1 用于存储搜索的信息
  fifo_sync #(
    .DATA_WIDTH(FIFO_DATA_WIDTH),
    .DEPTH     (FIFO_DEPTH_1)
  ) u_fifo_sync_1 (
    .clk  (clk),
    .rst_n(rst_n),
    .wr_en(fifo_1_wr_en),
    .rd_en(fifo_1_rd_en),
    .wdata(fifo_1_wdata),
    .rdata(fifo_1_rdata),
    .empty(fifo_1_empty),
    .full (fifo_1_full)
  );

  //FIFO——2 用于存储anchor相关的信息。
  fifo_sync #(
    .DATA_WIDTH(FIFO_DATA_WIDTH),
    .DEPTH     (FIFO_DEPTH_2)
  ) u_fifo_sync_2 (
    .clk  (clk),
    .rst_n(rst_n),
    .wr_en(fifo_2_wr_en),
    .rd_en(fifo_2_rd_en),
    .wdata(fifo_2_wdata),
    .rdata(fifo_2_rdata),
    .empty(fifo_2_empty),
    .full (fifo_2_full)
  );
endmodule




module fifo_sync #(
    parameter DATA_WIDTH = 8,   // 数据位宽
    parameter DEPTH = 8         // FIFO 深度
) (
    input  logic                 clk,
    input  logic                 rst_n,
    input  logic                 wr_en,   // 写使能
    input  logic                 rd_en,   // 读使能
    input  logic [DATA_WIDTH-1:0] wdata,   // 写入数据
    output logic [DATA_WIDTH-1:0] rdata,   // 读取数据
    output logic                  empty,  // 读空标志
    output logic                  full    // 写满标志
);

    // FIFO 存储器
    logic [DATA_WIDTH-1:0] mem [DEPTH-1:0];

    // 指针
    logic [$clog2(DEPTH):0] wr_ptr = '0;  // 写指针
    logic [$clog2(DEPTH):0] rd_ptr = '0;  // 读指针

    // 计算地址
    logic [$clog2(DEPTH)-1:0] wr_addr, rd_addr;
    assign wr_addr = wr_ptr[$clog2(DEPTH)-1:0];
    assign rd_addr = rd_ptr[$clog2(DEPTH)-1:0];

    // 写数据逻辑
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            wr_ptr <= '0;
        else if (wr_en && !full) begin
            mem[wr_addr] <= wdata;
            wr_ptr <= wr_ptr + 1;
        end
    end

    // 读数据逻辑
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            rd_ptr <= '0;
        else if (rd_en && !empty) begin
            rdata  <= mem[rd_addr];
            rd_ptr <= rd_ptr + 1;
        end
    end

    // 计算空和满
    assign empty = (wr_ptr == rd_ptr);
    assign full  = (wr_ptr == {~rd_ptr[$clog2(DEPTH)], rd_ptr[$clog2(DEPTH)-1:0]});

endmodule


