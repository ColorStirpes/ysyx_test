//2022.7.15 xuxin
`include "defines.v"

module ex_mem(
    input wire reset,
    input wire clock,   
    //liushuixian
    input wire [`ysyx_22040931_PC_BUS] EX_pc
    //regfile
    input wire         EX_w_ena,
    input wire [`ysyx_22040931_REG_BUS] EX_w_addr,
    input wire [`ysyx_22040931_DATA_BUS] EX_w_data,
    //mem
    input wire [2 : 0]   EX_memwop,
    input wire [2 : 0]   EX_memrop,
    input wire          EX_mem_ena,
    input wire           EX_mem_wr,    
    input wire [`ysyx_22040931_MEM_BUS] EX_mem_addr,
    input wire [`ysyx_22040931_DATA_BUS] EX_mem_data,


    output reg          MEM_w_ena,
    output reg [`ysyx_22040931_REG_BUS] MEM_w_addr,
    output reg [`ysyx_22040931_DATA_BUS] MEM_w_data,
    //mem
    output reg [2 : 0]   MEM_memwop,
    output reg [2 : 0]   MEM_memrop,
    output reg           MEM_mem_ena,
    output reg           MEM_mem_wr,
    output reg [`ysyx_22040931_MEM_BUS]  MEM_mem_addr,
    output reg [`ysyx_22040931_DATA_BUS] MEM_mem_stor_data,
    //liushuixian
    output reg [`ysyx_22040931_PC_BUS]  MEM_pc

);

    always @(posedge clock) begin
        if(reset == 1'b1) begin
            MEM_w_ena <= `ysyx_22040931_N_ENA;
            MEM_w_addr <= `ysyx_22040931_ZERO_REG;
            MEM_memwop <= `ysyx_22040931_MNO;
            MEM_memrop <= `ysyx_22040931_MNO;
            MEM_mem_ena <= `ysyx_22040931_N_ENA;
            MEM_mem_wr <= `ysyx_22040931_READ;
            MEM_mem_addr <= `ysyx_22040931_ZERO_NUM;
            MEM_mem_stor_data <= `ysyx_22040931_ZERO_NUM;
            MEM_pc <= `ysyx_22040931_ZERO_PC;
        end
        else begin
            MEM_w_ena <= EX_w_ena;
            MEM_w_addr <= EX_w_addr;
            MEM_memwop <= EX_memwop;
            MEM_memrop <= EX_memrop;
            MEM_mem_ena <= EX_mem_ena;
            MEM_mem_wr <= EX_mem_wr;
            MEM_mem_addr <= EX_mem_addr;
            MEM_mem_stor_data <= EX_mem_data;
            MEM_pc <= EX_pc;
        end
    end

endmodule
