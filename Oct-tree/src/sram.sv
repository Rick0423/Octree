module sram #(
    parameter       ADDR_WIDTH                  = 64    ,  // Address bus width
    parameter       DATA_WIDTH                  = 64    ,  // Data bus width
    parameter       MEM_DEPTH                   = 1 << ADDR_WIDTH, // Memory depth
    parameter       INIT_FILE                   = "sram_init.txt"// Initialization file
) (
    input                                       clk                        ,// Clock signal
    input                                       rst_n                      ,// Active-low reset
    input                                       mem_sram_CEN               ,// Chip Enable (Active Low)
    input                [ADDR_WIDTH-1: 0]      mem_sram_A                 ,// Address Bus
    inout                [DATA_WIDTH-1: 0]      mem_sram_D                 ,// Data Bus (Bidirectional)
    input                                       mem_sram_GWEN              ,// Global Write Enable (Active Low)
    output               [DATA_WIDTH-1: 0]      mem_sram_Q                  // Data Output
);

    reg                  [DATA_WIDTH-1: 0]      memory[0:MEM_DEPTH-1]      ;// SRAM array
    reg                  [DATA_WIDTH-1: 0]      mem_sram_Q_reg                 ;

    // Load memory contents from a file during initialization
    initial begin
        $readmemh("sram.txt", memory);                              // Load hex format file
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset logic (optional, clearing memory can be costly)
            mem_sram_Q_reg <= {DATA_WIDTH{1'b0}};
            for (int i =0;i<MEM_DEPTH;i+=1)begin
                memory[i] <= {DATA_WIDTH{1'b0}};
            end
        end else if (!mem_sram_CEN) begin
            if (!mem_sram_GWEN) begin
                memory[mem_sram_A[14:0]] <= mem_sram_D;             // Write operation
            end else begin
                mem_sram_Q_reg <= memory[mem_sram_A[14:0]];             // Read operation
            end
        end
    end

    assign      mem_sram_Q         = mem_sram_Q_reg;

endmodule