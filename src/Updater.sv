`timescale 1ns / 1ps
module Updater #(
  parameter  DIMENTION          = 3,  
  parameter  DATA_WIDTH         = 16,
  parameter  DATA_BUS_WIDTH     = 64,
  parameter  ADDR_BUS_WIDTH     = 64,
  parameter  FEATURE_LENTH      = 9,  //需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter  CHILDREN_NUM       = 8,
  parameter  TREE_LEVEL         = 5,
  parameter  SELECT_WIDTH       = 3,
  parameter  CONTROL_WIDTH      = 3,
  parameter  COUNTER_WIDTH      = 4,
  parameter  LOG_CHILD_NUM      = 3,
  parameter  LOG_TREE_LEVEL     = 3,
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM*TREE_LEVEL+LOG_TREE_LEVEL, // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  //     3*6 = 18 bit | level | offset 0 | offset  1 | offset  2 | offset  3 | offset  4 |
  parameter  TREE_ADDR_START   = 0,
  parameter  LOD_START_ADDR    = 500,
  parameter  FEATURE_START_ADDR= 400
) (  
  input  logic                         clk,
  input  logic                         rst_n,
  //控制信号
  input  logic                         add_anchor,
  input  logic                         del_anchor,
  output logic                         add_done,
  output logic                         del_done,
  //更新的anchor的数据
  input  logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,
  input  logic [   DATA_BUS_WIDTH-1:0] feature_in,
  //与主存连接的SRAM接口
  output logic                         mem_sram_CEN,
  output logic [   ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic [   DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                         mem_sram_GWEN,
  input  logic [   DATA_BUS_WIDTH-1:0] mem_sram_Q
);
  typedef enum logic [2:0] {
    IDLE,
    ADDING,
    DELETING
  } state_e;

  state_e                      state_updater;

  logic                        add_sram_CEN;  
  logic   [ADDR_BUS_WIDTH-1:0] add_sram_A;  
  logic   [DATA_BUS_WIDTH-1:0] add_sram_D;  
  logic                        add_sram_GWEN; 
  logic   [DATA_BUS_WIDTH-1:0] add_sram_Q;  

  logic                        del_sram_CEN;  
  logic   [ADDR_BUS_WIDTH-1:0] del_sram_A;  
  logic   [DATA_BUS_WIDTH-1:0] del_sram_D;  
  logic                        del_sram_GWEN; 
  logic   [DATA_BUS_WIDTH-1:0] del_sram_Q;  
  

  //updater状态机
  always_ff @(posedge clk or negedge rst_n) begin : updater_top_state_machine
    if (rst_n == 0) begin
      state_updater <= IDLE;
    end else begin
      case (state_updater)
        IDLE: begin
          if (add_anchor) begin
            state_updater <= ADDING;
          end else if (del_anchor) begin
            state_updater <= DELETING;
          end
        end
        ADDING: begin
          if (add_done) begin
            state_updater <= IDLE;
          end
        end
        DELETING: begin
          if (del_done) begin
            state_updater <= IDLE;
          end
        end
        default: begin
          state_updater <= IDLE;
        end
      endcase
    end
  end

  //updater的sram选通逻辑
  always_comb begin : SRAM_1_MUX
    case (state_updater)
      IDLE: begin
        mem_sram_CEN  = '1;
        mem_sram_A    = '0;
        mem_sram_D    = '0;
        mem_sram_GWEN = '1;
        del_sram_Q    = '0;
        add_sram_Q    = '0;
      end
      ADDING: begin
        mem_sram_CEN  = add_sram_CEN;
        mem_sram_A    = add_sram_A;
        mem_sram_D    = add_sram_D;
        mem_sram_GWEN = add_sram_GWEN;
        add_sram_Q    = mem_sram_Q;
        del_sram_Q    = '0;
      end
      DELETING: begin
        mem_sram_CEN  = del_sram_CEN;
        mem_sram_A    = del_sram_A;
        mem_sram_D    = del_sram_D;
        mem_sram_GWEN = del_sram_GWEN;
        del_sram_Q    = mem_sram_Q;
        add_sram_Q    = '0;
      end
      default: begin
        mem_sram_CEN  = '1;
        mem_sram_A    = '0;
        mem_sram_D    = '0;
        mem_sram_GWEN = '1;
        del_sram_Q    = '0;
        add_sram_Q    = '0;
      end
    endcase
  end

  Add_anchor #(
    .DIMENTION         (DIMENTION),
    .DATA_WIDTH        (DATA_WIDTH),
    .DATA_BUS_WIDTH    (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH    (ADDR_BUS_WIDTH),
    .FEATURE_LENTH     (FEATURE_LENTH),
    .CHILDREN_NUM      (CHILDREN_NUM),
    .TREE_LEVEL        (TREE_LEVEL),
    .SELECT_WIDTH      (SELECT_WIDTH),
    .CONTROL_WIDTH     (CONTROL_WIDTH),
    .COUNTER_WIDTH     (COUNTER_WIDTH),
    .LOG_CHILD_NUM     (LOG_CHILD_NUM),
    .LOG_TREE_LEVEL    (LOG_TREE_LEVEL),
    .ENCODE_ADDR_WIDTH (ENCODE_ADDR_WIDTH),
    .TREE_ADDR_START   (TREE_ADDR_START),
    .LOD_START_ADDR    (LOD_START_ADDR),
    .FEATURE_START_ADDR(FEATURE_START_ADDR)
  ) Add (
    .clk          (clk),
    .rst_n        (rst_n),
    .add_anchor   (add_anchor),
    .add_done     (add_done),
    .pos_encode   (pos_encode),
    .feature_in   (feature_in),
    .mem_sram_CEN (add_sram_CEN),
    .mem_sram_A   (add_sram_A),
    .mem_sram_D   (add_sram_D),
    .mem_sram_GWEN(add_sram_GWEN),
    .mem_sram_Q   (add_sram_Q)
  );

  Delete_anchor #(
    .DIMENTION         (DIMENTION),
    .DATA_WIDTH        (DATA_WIDTH),
    .DATA_BUS_WIDTH    (DATA_BUS_WIDTH),
    .ADDR_BUS_WIDTH    (ADDR_BUS_WIDTH),
    .FEATURE_LENTH     (FEATURE_LENTH),
    .CHILDREN_NUM      (CHILDREN_NUM),
    .TREE_LEVEL        (TREE_LEVEL),
    .SELECT_WIDTH      (SELECT_WIDTH),
    .CONTROL_WIDTH     (CONTROL_WIDTH),
    .COUNTER_WIDTH     (COUNTER_WIDTH),
    .LOG_CHILD_NUM     (LOG_CHILD_NUM),
    .LOG_TREE_LEVEL    (LOG_TREE_LEVEL),
    .ENCODE_ADDR_WIDTH (ENCODE_ADDR_WIDTH),
    .TREE_ADDR_START   (TREE_ADDR_START),
    .LOD_START_ADDR    (LOD_START_ADDR),
    .FEATURE_START_ADDR(FEATURE_START_ADDR)
  ) del (
    .clk          (clk),
    .rst_n        (rst_n),
    .del_anchor   (del_anchor),
    .del_done     (del_done),
    .pos_encode   (pos_encode),
    .mem_sram_CEN (del_sram_CEN),
    .mem_sram_A   (del_sram_A),
    .mem_sram_D   (del_sram_D),
    .mem_sram_GWEN(del_sram_GWEN),
    .mem_sram_Q   (del_sram_Q)
  );
endmodule

module Delete_anchor #(
  parameter  DIMENTION          = 3,  
  parameter  DATA_WIDTH         = 16,
  parameter  DATA_BUS_WIDTH     = 64,
  parameter  ADDR_BUS_WIDTH     = 64,
  parameter  FEATURE_LENTH      = 9,  //需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter  CHILDREN_NUM       = 8,
  parameter  TREE_LEVEL         = 5,
  parameter  SELECT_WIDTH       = 3,
  parameter  CONTROL_WIDTH      = 3,
  parameter  COUNTER_WIDTH      = 4,
  parameter  LOG_CHILD_NUM      = 3,
  parameter  LOG_TREE_LEVEL     = 3,
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM*TREE_LEVEL+LOG_TREE_LEVEL, // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  //     3*6 = 18 bit | level | offset 0 | offset  1 | offset  2 | offset  3 | offset  4 |
  parameter  TREE_ADDR_START   = 0,
  parameter  LOD_START_ADDR    = 500,
  parameter  FEATURE_START_ADDR= 400
) (
  input  logic                         clk,
  input  logic                         rst_n,

  input  logic                         del_anchor,
  output logic                         del_done,
  input  logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,

  output logic                         mem_sram_CEN,
  output logic [   ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic [   DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                         mem_sram_GWEN,
  input  logic [   DATA_BUS_WIDTH-1:0] mem_sram_Q
);

  typedef enum logic [1:0] {
    IDLE,
    UPDATE_SELF,
    UPDATE_PARENT,
    DONE
  } state_e;
  state_e delete_state;

  localparam [TREE_LEVEL-1:0][DATA_BUS_WIDTH-1:0] ADDR_VARY = {64'd74, 64'd10, 64'd2, 64'd1, 64'd0};

  logic [ENCODE_ADDR_WIDTH-1:0] reg_pos; //暂存需要更新的anchor地址
  logic [ENCODE_ADDR_WIDTH-1:0] addr_to_calculate;//输入到组合逻辑中，用于从原码中计算出实际地址
  logic [    COUNTER_WIDTH-1:0] cnt;
  logic [ DATA_BUS_WIDTH/4-1:0] anchor_data;//读取出来的64位数据中关心的16bit数据。（这一个八叉树的自己有效/孩子有效的逻辑）

  logic [                  2:0] level;//输入的addr_to_calculate的层次
  logic [   ADDR_BUS_WIDTH-1:0] offset             [4:0];//输入的addr_to_calculate的每一层的偏置
  logic [   ADDR_BUS_WIDTH-1:0] address_part_;          
  logic [   ADDR_BUS_WIDTH-1:0] actual_address;//计算出的，基本单元为16bit的地址，一簇anchor为1.
  logic [   ADDR_BUS_WIDTH-1:0] address_for_sram;//针对sram读写的，基本单元为64bit的地址。
  logic                         parent_all_invalid;//针对在查询父亲节点的时候发现和父亲节点同级的所有节点都是0
  logic                         self_all_invalid;//针对在查询自己节点的时候发现和自己节点同级的所有节点都是0

  //暂存输入数据
  always_ff @(posedge clk or negedge rst_n) begin : hold_anchor_to_delete
    if (rst_n == 0) begin
      reg_pos <= 'd0;
    end else if (del_anchor) begin
      reg_pos <= pos_encode;
    end
  end

  //更新的核心逻辑
  always_ff @(posedge clk or negedge rst_n) begin : main_logic_update_sram
    if (rst_n == 0) begin
      delete_state <= IDLE;
      cnt          <= 0;
      del_done     <=0;
    end else begin
      case (delete_state)
        IDLE: begin
          if (del_anchor) begin
            delete_state      <= UPDATE_SELF;
            cnt               <= 0;
            addr_to_calculate <= pos_encode;
          end
          mem_sram_CEN  <= 1;
          mem_sram_A    <= 0;
          mem_sram_D    <= 0;
          mem_sram_GWEN <= 1;
          del_done <=0;
          cnt <= 0;
        end
        UPDATE_SELF: begin
          //无论如何更新自己写回。
          //如果孩子位有效，则直接返回
          //如果孩子位无效，则检查同级的人是否有效，如果有效则直接返回
          //如果均无效则需要更新父亲节点。进入update——parent节点
          if (cnt == 0) begin
            mem_sram_CEN  <= 0;
            mem_sram_A    <= address_for_sram;
            mem_sram_GWEN <= 1;
            cnt <= cnt+1;
          end else if (cnt == 1) begin
            mem_sram_CEN <= 0;
            mem_sram_A <= address_for_sram;
            mem_sram_D    <= mem_sram_Q & (~(64'd1<<(actual_address[1:0]*2*CHILDREN_NUM+offset[level]*2+1)));
            mem_sram_GWEN <= 0;
            if (self_all_invalid) begin
              if (level == 0) begin
                delete_state <= DONE;
              end else begin
                delete_state      <= UPDATE_PARENT;
                addr_to_calculate <= {level - 3'd1, reg_pos[LOG_CHILD_NUM*TREE_LEVEL-1:0]};
                cnt               <= 0;
              end
            end else begin
              delete_state <= DONE;
            end
          end
        end
        UPDATE_PARENT: begin
          if (cnt == 0) begin
            //考虑一下第零级的事情
            //读父亲级的信息，
            mem_sram_CEN  <= 0;
            mem_sram_A    <= address_for_sram;
            mem_sram_GWEN <= 1;
            cnt <= cnt +1;
          end else if (cnt == 1) begin
            //无论如何都需要将父亲的孩子位写为0，写回
            //如果父亲级所有人都无效，在此进行UPDATE_PARENT,cnt清零，否则直接返回。
            mem_sram_CEN  <= 0;
            mem_sram_A    <= address_for_sram;
            mem_sram_D    <= mem_sram_Q & (~(64'd1<<(actual_address[1:0]*2*CHILDREN_NUM+offset[level]*2)));
            mem_sram_GWEN <= 0;
            if (parent_all_invalid) begin
              if (level == 0) begin
                delete_state <= DONE;
              end else begin
                delete_state      <= UPDATE_PARENT;
                addr_to_calculate <= {level - 3'd1, reg_pos[LOG_CHILD_NUM*TREE_LEVEL-1:0]};
                cnt               <= 0;
              end
            end else begin
              delete_state <= DONE;
            end
          end
        end
        DONE: begin
          del_done <= 1;
          delete_state <= IDLE;
          cnt <= 0;
        end
        default: begin
        end
      endcase
    end
  end

  //截取64bit数据中有用的部分，生成判断是否子节点全部为0的判断标志符
  always_comb begin : write_back_data_preparation
    if (0 == rst_n) begin
      anchor_data        = 0;
      parent_all_invalid = 0;
      self_all_invalid   = 0;
    end else begin
      anchor_data = mem_sram_Q[({2'b0, actual_address[1:0]}-4'd1)*2*CHILDREN_NUM-1-:2*CHILDREN_NUM];
      parent_all_invalid = ((anchor_data & (~(16'd1 << (offset[level] * 2)))) == 16'd0);
      self_all_invalid = ((anchor_data & (~(16'd1 << (offset[level] * 2 + 1)))) == 16'd0);
    end
  end

  //准备地址相关信息
  genvar a;
  generate 
    assign level = addr_to_calculate[ENCODE_ADDR_WIDTH-1:LOG_CHILD_NUM*TREE_LEVEL];
    for (a = 0; a < TREE_LEVEL; a += 1) begin
      assign offset[a] = {61'd0,addr_to_calculate[LOG_CHILD_NUM*TREE_LEVEL-1-a*LOG_CHILD_NUM -:LOG_CHILD_NUM]};
    end
  endgenerate

  // 计算实际地址
  always_comb begin
    address_part_ = 0;
    for (int i = 0; i < level; i++) begin
      if (i == 0) begin
        address_part_ += 586 * offset[i];
      end else begin
        address_part_ += offset[i] * (1'b1) << (LOG_CHILD_NUM * ({28'd0, level} - i ));
      end
    end
    actual_address   = address_part_ + ADDR_VARY[level] + TREE_ADDR_START;
    address_for_sram = {2'b0, actual_address[ADDR_BUS_WIDTH-1:2]};
    //same_addr        = (address_for_sram == last_addr_read) ? 1 : 0;
  end

endmodule

module Add_anchor #(
  parameter  DIMENTION          = 3,  
  parameter  DATA_WIDTH         = 16,
  parameter  DATA_BUS_WIDTH     = 64,
  parameter  ADDR_BUS_WIDTH     = 64,
  parameter  FEATURE_LENTH      = 9,  //需要多少个DATA_BUS_WIDTH才可以读出一个anchor_feature 36*16=64*9
  parameter  CHILDREN_NUM       = 8,
  parameter  TREE_LEVEL         = 5,
  parameter  SELECT_WIDTH       = 3,
  parameter  CONTROL_WIDTH      = 3,
  parameter  COUNTER_WIDTH      = 4,
  parameter  LOG_CHILD_NUM      = 3,
  parameter  LOG_TREE_LEVEL     = 3,
  parameter  ENCODE_ADDR_WIDTH = LOG_CHILD_NUM*TREE_LEVEL+LOG_TREE_LEVEL, // 用于表示输入的原码（未经过hashing）的地址宽度，用于指示当前需要更新的anchor的位置 
  //     3*6 = 18 bit | level | offset 0 | offset  1 | offset  2 | offset  3 | offset  4 |
  parameter  TREE_ADDR_START   = 0,
  parameter  LOD_START_ADDR    = 500,
  parameter  FEATURE_START_ADDR= 400
) (
  input  logic                         clk,
  input  logic                         rst_n,
  //控制信号
  input  logic                         add_anchor,
  output logic                         add_done,
  //输入更新anchor的信息
  input  logic [ENCODE_ADDR_WIDTH-1:0] pos_encode,
  input  logic [   DATA_BUS_WIDTH-1:0] feature_in,
  //主存的接口
  output logic                         mem_sram_CEN,
  output logic [   ADDR_BUS_WIDTH-1:0] mem_sram_A,
  output logic [   DATA_BUS_WIDTH-1:0] mem_sram_D,
  output logic                         mem_sram_GWEN,
  input  logic [   DATA_BUS_WIDTH-1:0] mem_sram_Q
);
  localparam IDLE = 0, BUFFERING = 1, UPDATE_SELF = 2, UPDATE_PARENT = 3, WRITE_FEATURE = 4;
  localparam [TREE_LEVEL-1:0][DATA_BUS_WIDTH-1:0] ADDR_VARY = {64'd74, 64'd10, 64'd2, 64'd1, 64'd0};
  localparam  int PRIMES [4:0] = {2099719, 3867465, 807545, 2654435, 1};  // 质数数组，增强哈希随机性

  logic [3-1:0] state_input_buffer, add_state;
  logic [COUNTER_WIDTH-1:0] input_cnt, cnt,hash_cnt;
  //暂存输入数据
  logic [ENCODE_ADDR_WIDTH-1:0]                     reg_pos;
  logic [ENCODE_ADDR_WIDTH-1:0]                     addr_to_calculate;
  logic [    FEATURE_LENTH-1:0][DATA_BUS_WIDTH-1:0] reg_feature_in;
  logic [DATA_BUS_WIDTH/4-1:0]                      anchor_data;
  //生成地址的相关组合逻辑信号
  logic [                  2:0]                     level;
  logic [   ADDR_BUS_WIDTH-1:0]                     offset            [4:0];
  logic [   ADDR_BUS_WIDTH-1:0]                     address_part_;
  logic [   ADDR_BUS_WIDTH-1:0]                     actual_address;
  logic [   ADDR_BUS_WIDTH-1:0]                     address_for_sram;
  logic [   ADDR_BUS_WIDTH-1:0]                     hash_encoded_addr;
  //指示是否需要向上递归的指示信号
  logic                                             self_all_invalid;
  logic                                             parent_all_invalid;

  //输入信号的暂存逻辑，TODO：可能可以做一个double buffer之类的设计来提高吞吐？
  always_ff @(posedge clk or negedge rst_n) begin : hold_input_data
    if (rst_n == 0) begin
      reg_pos <= 'd0;
      for (int i = 0; i < FEATURE_LENTH; i += 1) begin
        reg_feature_in[i] <= 'd0;
      end
      state_input_buffer <= IDLE;
      input_cnt          <= 'd0;
    end else begin
      case (state_input_buffer)
        IDLE: begin
          if (add_anchor) begin
            state_input_buffer <= BUFFERING;
            reg_pos            <= pos_encode;
            reg_feature_in[0]  <= feature_in;
            input_cnt <= 1;
          end else begin
            input_cnt <= 'd0;
          end
        end
        BUFFERING: begin
          if (input_cnt == FEATURE_LENTH) begin
            state_input_buffer <= IDLE;
          end else begin
            reg_feature_in[input_cnt] <= feature_in;
            input_cnt <= input_cnt + 1;
          end
        end
        default: begin
          state_input_buffer <= IDLE;
        end
      endcase
    end
  end

  //主要的核心逻辑，用于直接读写sram来更新tree结构
  always_ff @(posedge clk or negedge rst_n) begin : write_to_sram
    if (rst_n == 0) begin
      cnt       <= 0;
      add_state <= IDLE;
    end else begin
      case (add_state)
        IDLE: begin
          cnt <= 0;
          if (add_anchor) begin
            //准备进行访存，准备好地址数据
            add_state         <= UPDATE_SELF;
            addr_to_calculate <= pos_encode;
          end
        end
        UPDATE_SELF: begin
          if (cnt == 0) begin
            //读新增的anchor同级的所有元素信息。
            mem_sram_CEN  <= 0;
            mem_sram_A    <= address_for_sram;
            mem_sram_GWEN <= 1;
            cnt           <= cnt + 1;
          end else if (cnt == 1) begin
            //拿到新增的anchor同级的所有元素信息，检查是否全部为空，如果是更新新增的一位的自己哪一位，进入UPDATE_PARENT
            //否则更新自己的那一位，然后直接进入下一阶段。
            cnt <= 0;
            mem_sram_CEN <= 0;
            mem_sram_A <= address_for_sram;
            mem_sram_GWEN <= 0;
            mem_sram_D <= mem_sram_Q | (64'd1<<(actual_address[1:0]*2*CHILDREN_NUM+offset[level]*2+1));
            if (self_all_invalid) begin
              if (level == 0) begin
                add_state <= WRITE_FEATURE;
              end else begin
                add_state         <= UPDATE_PARENT;
                addr_to_calculate <= {level - 3'd1, reg_pos[LOG_CHILD_NUM*TREE_LEVEL-1:0]};
              end
            end else begin
              add_state <= WRITE_FEATURE;
            end
          end
        end
        UPDATE_PARENT: begin
          if (cnt == 0) begin
            //读父亲节点的anchor同级的所有元素信息
            mem_sram_CEN  <= 0;
            mem_sram_A    <= address_for_sram;
            mem_sram_GWEN <= 1;
            cnt           <= cnt + 1;
          end else if (cnt == 1) begin
            //检查父亲节点的anchor是否全空，如果是，则写入对应的孩子位，然后继续向上递归。cnt清零
            //如果不是，则写入对应的孩子位，然后返回。cnt清零
            cnt <= 0;
            mem_sram_CEN <= 0;
            mem_sram_A <= address_for_sram;
            mem_sram_GWEN <= 0;
            mem_sram_D <= mem_sram_Q | (64'd1<<(actual_address[1:0]*2*CHILDREN_NUM+offset[level]*2));
            if (parent_all_invalid) begin 
              cnt <= 0;
              if(level == 0)begin
                add_state <= WRITE_FEATURE;
              end else begin
                add_state <= UPDATE_PARENT;
                addr_to_calculate <= {level - 3'd1, reg_pos[LOG_CHILD_NUM*TREE_LEVEL-1:0]};
              end
            end else begin
              add_state <= WRITE_FEATURE;
            end
          end
        end
        WRITE_FEATURE: begin
          if (cnt == FEATURE_LENTH) begin
            //返回add_done，返回IDLE状态。
            add_done <= 1;
            add_state <= IDLE;
            cnt<=0;
          end else begin
            mem_sram_CEN <= 0;
            mem_sram_A    <= hash_encoded_addr + {60'd0,cnt}; // TODO：根据原码生成hash encoded 代码
            mem_sram_D   <= reg_feature_in[cnt];
            mem_sram_GWEN <= 0;
            cnt <= cnt + 1;
            //正常的写主存往hash_addr+cnt的位置写
          end
        end
        default: begin
          add_state <= IDLE;
          cnt       <= 0;
          add_done <= 0;
        end
      endcase
    end
  end

  //计算hash之后的地址 TODO ！！！！！
  always_comb begin
      if (!rst_n) begin
        hash_encoded_addr = 64'd0;
      end else if (add_state == WRITE_FEATURE) begin  // OUT 状态
        case (level)
          0: hash_encoded_addr = offset[0]+64'd1;
          1: hash_encoded_addr = offset[0]+64'd1 + (offset[1] + 64'd1) * 8;
          2: hash_encoded_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                       ^ (offset[1] + 64'd1) * PRIMES[1] 
                       ^ (offset[2] + 64'd1) * PRIMES[2] )+ 64'd72;
          3: hash_encoded_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                       ^ (offset[1] + 64'd1) * PRIMES[1] 
                       ^ (offset[2] + 64'd1) * PRIMES[2] 
                       ^ (offset[3] + 64'd1) * PRIMES[3] )+ 64'd72;
          4: hash_encoded_addr = ((offset[0] + 64'd1) * PRIMES[0] 
                       ^ (offset[1] + 64'd1) * PRIMES[1] 
                       ^ (offset[2] + 64'd1) * PRIMES[2] 
                       ^ (offset[3] + 64'd1) * PRIMES[3]  
                       ^ (offset[4] + 64'd1) * PRIMES[4] )+ 64'd72;
          default: hash_encoded_addr = 64'd0;
        endcase
      end else begin
        hash_encoded_addr = 64'd0;
      end
    end

  //截取64bit数据中有用的部分，生成判断是否子节点全部为0的判断标志符
  always_comb begin : write_back_data_preparation
    if (0 == rst_n) begin
      anchor_data        = 0;
      parent_all_invalid = 0;
      self_all_invalid   = 0;
    end else begin
      anchor_data = mem_sram_Q[({2'b0, actual_address[1:0]}-4'd1)*2*CHILDREN_NUM-1-:2*CHILDREN_NUM];
      parent_all_invalid = (anchor_data == 16'd0);
      self_all_invalid = (anchor_data == 16'd0);
    end
  end

  //从encode中解析出地址的具体位置
  genvar a;
  generate 
    assign level = addr_to_calculate[ENCODE_ADDR_WIDTH-1 -:3];
    for (a = 0; a < TREE_LEVEL; a += 1) begin
      assign offset[a] = {61'd0,addr_to_calculate[LOG_CHILD_NUM*TREE_LEVEL-1-a*LOG_CHILD_NUM -:LOG_CHILD_NUM]};
    end
  endgenerate

  // 计算实际地址
  always_comb begin
    address_part_ = 0;
    for (int i = 0; i < level; i++) begin
      if (i == 0) begin
        address_part_ += 586 * offset[i];
      end else begin
        address_part_ += offset[i] * (1'b1) << (LOG_CHILD_NUM * ({28'd0, level} - i - 1));
      end
    end
    actual_address   = address_part_ + ADDR_VARY[level] + TREE_ADDR_START;
    address_for_sram = {2'b0, actual_address[ADDR_BUS_WIDTH-1:2]};
    //same_addr        = (address_for_sram == last_addr_read) ? 1 : 0;
  end


endmodule
