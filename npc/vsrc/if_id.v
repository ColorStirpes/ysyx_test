//2022.7.15 xuxin
`include "defines.v"

module if_id(
    input wire reset,
    input wire clock,
    input wire [`ysyx_22040931_PC_BUS]   IF_pc,
    input wire [`ysyx_22040931_INST_BUS] IF_instr,


    output reg [`ysyx_22040931_PC_BUS]   ID_pc,
    output reg [`ysyx_22040931_INST_BUS] ID_instr
);

    always @(posedge clock) begin
        if(reset == 1'b1) begin
            ID_pc <= `ysyx_22040931_ZERO_PC;
            ID_instr <= `syx_22040931_NONE_INST;
        end
        else begin
            ID_pc <= IF_pc;
            ID_instr <= IF_instr;
        end
    end

endmodule
