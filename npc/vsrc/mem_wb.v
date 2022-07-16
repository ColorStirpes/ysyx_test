//2022.7.15 xuxin
`include "defines.v"

module mem_wb(
    input wire reset,
    input wire clock,
    //liushuixian
    input wire [`ysyx_22040931_PC_BUS] MEM_pc,
    //regfile 
    input wire          MEM_w_ena,
    input wire [`ysyx_22040931_REG_BUS] MEM_w_addr,
    input wire [`ysyx_22040931_DATA_BUS] MEM_w_data,


    output reg          WB_w_ena,
    output reg [`ysyx_22040931_REG_BUS]  WB_w_addr,
    output reg [`ysyx_22040931_DATA_BUS] WB_w_data,
    //liushuixian
    output reg [`ysyx_22040931_PC_BUS] WB_pc
);

    always @(posedge clock) begin
        if(reset == 1'b1) begin
            WB_w_ena <= `ysyx_22040931_N_ENA;
            WB_w_addr <= `ysyx_22040931_ZERO_REG;
            WB_w_data <= `ysyx_22040931_ZERO_NUM;
            WB_pc <= `ysyx_22040931_ZERO_PC;
        end
        else begin
            WB_w_ena <= MEM_w_ena;
            WB_w_addr <= MEM_w_addr;
            WB_w_data <= MEM_w_data;
            WB_pc <= MEM_pc;
        end
    end

endmodule
