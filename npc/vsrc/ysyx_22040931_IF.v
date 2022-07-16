//2022.6.28 xuxin
`include "defines.v"

module ysyx_22040931_IF(
  
    input wire reset,
    input wire clock,
    input wire flush,
    input wire stall,
    //wo shou
    input wire if_ready,
    output wire pc_ready,
    output wire pc_valid,
    input wire mux_pc,
    input wire [`ysyx_22040931_PC_BUS] branch,
    
    output wire fetch_enb,
    output wire [`ysyx_22040931_PC_BUS]   if_pc
    //output wire [`ysyx_22040931_INST_BUS] instr

);

reg pc_now_valid;
wire pc_go;
assign pc_go = stall;
assign pc_ready = !(pc_now_valid & ~flush) | pc_go & if_ready;   //当前时钟不是有效数据，或者当前已经处理完这个周期的活
assign pc_valid = (pc_now_valid & ~flush) & pc_go;

    always@(posedge clock) begin
        if(reset == 1'b1) begin
            pc_now_valid <= 0;
        end
        else if(pc_ready) begin
            pc_now_vaild <= 1;
        end
    end



wire [`ysyx_22040931_PC_BUS] pc_i;
assign pc_i = mux_pc ? branch : if_pc + 4;

ysyx_22040931_PC ysyx_22040931_PC(
  
  .reset(reset),
  .clock(clock),
  .pc_ready(pc_ready),
  .pc_i(pc_i),

  .pc_o(if_pc),
  .fetch_enb(fetch_enb)
  
);

endmodule
