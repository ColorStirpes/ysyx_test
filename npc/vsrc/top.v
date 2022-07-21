//2022.6.28 xuxin
`include "defines.v"

module top(
    input wire reset,
    input wire clock,
    input wire [`ysyx_22040931_INST_BUS] instr,
    //mem
    input wire [`ysyx_22040931_DATA_BUS] momory_data,
    
    output wire fetch_enb,
    output wire [`ysyx_22040931_PC_BUS] pc,
    //mem
    output wire [1 : 0]       memop,
    output wire             mem_ena,
    output wire              mem_wr,
    output wire [`ysyx_22040931_MEM_BUS] mem_addr,
    output wire [`ysyx_22040931_DATA_BUS] mem_stor_data,

    output wire [`ysyx_22040931_INST_BUS] difftest_instr,
    output wire [`ysyx_22040931_PC_BUS] difftest_pc

);

//DPI-C
import "DPI-C" function void Inst(input int instruct);
always @(posedge clock) begin
	if(reset == 1'b0) begin
	   Inst(instr);
	end
end

import "DPI-C" function void E(input int a);
always @(instr) begin
	if(difftest_instr == 32'b0000000_00001_00000_000_00000_11100_11) begin
		Inst(instr);
		E(1);
	end
	else begin
		E(0);
	end
end

wire [63:0] rdata;
import "DPI-C" function void mem_read(input longint raddr, output longint rdata);
import "DPI-C" function void mem_write(input longint waddr, input longint wdata, input byte wmask);
wire [7 : 0] wmask;
assign wmask = (memop == `ysyx_22040931_SIZE_D) ? 8'b1111_1111 :
               (memop == `ysyx_22040931_SIZE_W) ? (mem_addr[2] ? 8'b1111_0000 : 8'b0000_1111) :
               (memop == `ysyx_22040931_SIZE_H) ? (8'b0000_0011 << (mem_addr[2 : 0] << 1))    :
               (memop == `ysyx_22040931_SIZE_B) ? (8'b0000_0001 <<  mem_addr[2 : 0] )         : 8'b0000_0000;


always @(*) begin
      	mem_read(mem_addr, rdata);
      	mem_write(mem_addr, mem_stor_data, wmask);
end

// reg [6 : 0] test;
// always @(posedge clock) begin
//     if(reset) begin
//         test <= 0;
//     end
//     else begin
//         test <= test + 1;
//     end
// end
// wire div;
// assign div = (test <= 65) ? 1'b1 : 1'b0;

// divider divider(
//     .clock(clock),
//     .reset(reset),
//     .w(1),
//     .div(div),
//     .div_signed(1),
//     .dividend(1598),
//     .divisor(5),


//     .quotient(),
//     .remainder(),
//     .complete()
// );



wire mux_pc;
wire [`ysyx_22040931_PC_BUS] branch;

ysyx_22040931_IF ysyx_22040931_IF(
    .reset(reset),
    .clock(clock),
    .flush(),
    .stall(),
    //wo shou
    .if_ready(if_ready),
    .pc_ready(pc_ready),
    .pc_valid(pc_valid),


    .error_pre(error_pre),
    .id_jump(mux_pc),
    .id_jumptype(jumptype),
    .id_pc(id_pc),
    .id_branch(branch),
    
    .pre_jump(pre_jump),
    .pre_branch(pre_branch),
    .fetch_enb(fetch_enb),
    .if_pc(pc)
);

//forecase
wire pre_jump;
wire [`ysyx_22040931_PC_BUS] pre_branch;

//pc valid <-> ready
wire pc_ready;
wire pc_valid;


//if valid <-> ready
wire if_ready;
wire if_valid;

if_id if_id(
    .reset(reset),
    .clock(clock),
    .flush(),
    .stall(load_stall),         ////////////////
    .nop(error_pre),            ////////////////
    //wo shou
    .pc_valid(pc_valid),
    .id_ready(id_ready),
    .if_ready(if_ready),
    .if_valid(if_valid),

    .IF_pre_jump(pre_jump),
    .IF_pre_branch(pre_branch),
    .IF_pc(pc),
    .IF_instr(instr),

    .ID_pre_jump(ID_pre_jump),
    .ID_pre_branch(ID_pre_branch),
    .ID_pc(ID_pc),
    .ID_instr(ID_instr)
);

wire ID_pre_jump;
wire [`ysyx_22040931_PC_BUS] ID_pre_branch;
wire [`ysyx_22040931_PC_BUS]   ID_pc;
wire [`ysyx_22040931_INST_BUS] ID_instr;

ysyx_22040931_ID ysyx_22040931_ID(

    //regfile
    .reset(reset),
    .clock(clock),
    .w_ena_i(wb_w_ena),
    .w_addr_i(wb_w_addr),
    .w_data_i(wb_w_data),
    //liushuixian
    .pc_i(ID_pc),
    .instr(ID_instr),
    //bypass
    .ex_w_ena(ex_w_ena),
    .ex_w_addr(ex_w_addr),
    .ex_w_data(ex_w_data),
    .mem_w_ena(mem_w_ena),
    .mem_w_addr(mem_w_addr),
    .mem_w_data(mem_w_data),
    //load hazard
    .ex_mem_ena(EX_mem_ena),
    .ex_mem_wr(EX_mem_ena),
    //pre
    .pre_jump(ID_pre_jump),
    .pre_branch(ID_pre_branch),


    //load hazard and mux_pc
    //.nop(nop),
    .load_stall(load_stall),
    //liushuixian
    .instr_o(id_instr),
    .pc_o(id_pc),    
    //branch
    .branch(branch),
    .mux_pc(mux_pc),
    .jumptype(jumptype),
    .error_pre(error_pre),
    //regfile
    .w_ena(id_w_ena),
    .w_addr(id_w_addr),
    .data1(id_data1),
    .data2(id_data2),
    //ex
    .mem_ena(id_mem_ena),
    .mem_wr(id_mem_wr),
    .imm(id_imm),
    .exop(id_exop),
    .aluop(id_aluop),    
    .memwop(id_memwop),
    .memrop(id_memrop)

);

//load hazard 
wire nop;
wire load_stall;
//liushuixian
wire [`ysyx_22040931_PC_BUS] id_pc;
wire [`ysyx_22040931_INST_BUS] id_instr;   
//branch
wire [1 : 0] jumptype;
wire [`ysyx_22040931_PC_BUS] branch;
wire mux_pc;
wire error_pre;
//regfile
wire 		   id_w_ena;
wire [`ysyx_22040931_REG_BUS] id_w_addr;
wire [`ysyx_22040931_DATA_BUS] id_data1;
wire [`ysyx_22040931_DATA_BUS] id_data2;
//ex
wire id_mem_ena;
wire id_mem_wr;
wire [`ysyx_22040931_DATA_BUS] id_imm;
wire [2 : 0]     id_exop;
wire [4 : 0]    id_aluop;    
wire [2 : 0]   id_memwop;
wire [2 : 0]   id_memrop;

//id valid <-> ready
wire id_ready;
wire id_valid;

id_ex id_ex(
    .reset(reset),
    .clock(clock),
    .flush(),     //记得flush与各级使能相与 p71
    .stall(),
    .nop(load_stall),
    //wo shou
    .if_valid(if_valid),
    .ex_ready(ex_ready),
    .id_ready(id_ready),
    .id_valid(id_valid),
    .ID_pc(id_pc),
    .ID_instr(ID_instr),
    //regfile
    .ID_w_ena(id_w_ena),
    .ID_w_addr(id_w_addr),
    .ID_data1(id_data1),
    .ID_data2(id_data2),
    .ID_imm(id_imm),
    
    //ex
    .ID_exop(id_exop),
    .ID_aluop(id_aluop),
    //mem    
    .ID_memwop(id_memwop),
    .ID_memrop(id_memrop),
    .ID_mem_ena(id_mem_ena),
    .ID_mem_wr(id_mem_wr),


    .EX_w_ena(EX_w_ena),
    .EX_w_addr(EX_w_addr),
    .EX_data1(EX_data1),
    .EX_data2(EX_data2),
    .EX_imm(EX_imm),

    .EX_exop(EX_exop),
    .EX_aluop(EX_aluop),
    //mem    
    .EX_memwop(EX_memwop),
    .EX_memrop(EX_memrop),
    .EX_mem_ena(EX_mem_ena),
    .EX_mem_wr(EX_mem_wr),

    .EX_instr(EX_instr),
    .EX_pc(EX_pc)
);

wire          EX_w_ena;
wire [`ysyx_22040931_REG_BUS]  EX_w_addr;
wire [`ysyx_22040931_DATA_BUS] EX_data1;
wire [`ysyx_22040931_DATA_BUS] EX_data2;
wire [`ysyx_22040931_DATA_BUS] EX_imm;

wire [2 : 0]     EX_exop;
wire [4 : 0]    EX_aluop;
//mem    
wire [2 : 0]   EX_memwop;
wire [2 : 0]   EX_memrop;
wire          EX_mem_ena;
wire           EX_mem_wr;
wire [`ysyx_22040931_INST_BUS] EX_instr;
wire [`ysyx_22040931_PC_BUS] EX_pc;

ysyx_22040931_EX ysyx_22040931_EX(
    .reset(reset),
    .clock(clock),
    .w_ena_i(EX_w_ena),
    .w_addr_i(EX_w_addr),
    .pc_i(EX_pc),
    .instr(EX_instr),
    
    .data1(EX_data1),
    .data2(EX_data2),
    .imm(EX_imm),

    .exop(EX_exop),
    .aluop(EX_aluop),
    //mem    
    .memwop_i(EX_memwop),
    .memrop_i(EX_memrop),
    .mem_ena_i(EX_mem_ena),
    .mem_wr_i(EX_mem_wr),
    

    //regfile
    .w_ena(ex_w_ena),
    .w_addr(ex_w_addr),
    .w_data(ex_w_data),
    //mem
    .memwop(ex_memwop),
    .memrop(ex_memrop),
    .mem_ena(ex_mem_ena),
    .mem_wr(ex_mem_wr),    
    .mem_addr(ex_mem_addr),
    .mem_data(ex_mem_data),
    //liushuixian
    .instr_o(ex_instr),
    .pc_o(ex_pc)

);


//regfile
wire ex_w_ena;
wire [`ysyx_22040931_REG_BUS] ex_w_addr;
wire [`ysyx_22040931_DATA_BUS] ex_w_data;
//mem
wire [2 : 0]   ex_memwop;
wire [2 : 0]   ex_memrop;
wire          ex_mem_ena;
wire           ex_mem_wr;    
wire [`ysyx_22040931_MEM_BUS] ex_mem_addr;
wire [`ysyx_22040931_DATA_BUS] ex_mem_data;
//liushuixian
wire [`ysyx_22040931_INST_BUS] ex_instr;
wire [`ysyx_22040931_PC_BUS] ex_pc;


//ex valid <-> ready
wire ex_ready;
wire ex_valid;

ex_mem ex_mem(
    .reset(reset),
    .clock(clock),
    .flush(),
    .stall(),
    //wo shou
    .id_valid(id_valid),
    .mem_ready(mem_ready),
    .ex_ready(ex_ready),
    .ex_valid(ex_valid),
    //liushuixian
    .EX_pc(ex_pc),
    .EX_instr(ex_instr),
    //regfile
    .EX_w_ena(ex_w_ena),
    .EX_w_addr(ex_w_addr),
    .EX_w_data(ex_w_data),
    //mem
    .EX_memwop(ex_memwop),
    .EX_memrop(ex_memrop),
    .EX_mem_ena(ex_mem_ena),
    .EX_mem_wr(ex_mem_wr),    
    .EX_mem_addr(ex_mem_addr),
    .EX_mem_data(ex_mem_data),


    .MEM_w_ena(MEM_w_ena),
    .MEM_w_addr(MEM_w_addr),
    .MEM_w_data(MEM_w_data),
    //mem
    .MEM_memwop(MEM_memwop),
    .MEM_memrop(MEM_memrop),
    .MEM_mem_ena(MEM_mem_ena),
    .MEM_mem_wr(MEM_mem_wr),
    .MEM_mem_addr(MEM_mem_addr),
    .MEM_mem_stor_data(MEM_mem_stor_data),
    //liushuixian
    .MEM_instr(MEM_instr),
    .MEM_pc(MEM_pc)

);


wire          MEM_w_ena;
wire [`ysyx_22040931_REG_BUS] MEM_w_addr;
wire [`ysyx_22040931_DATA_BUS] MEM_w_data;
//mem
wire [2 : 0]   MEM_memwop;
wire [2 : 0]   MEM_memrop;
wire           MEM_mem_ena;
wire           MEM_mem_wr;
wire [`ysyx_22040931_MEM_BUS]  MEM_mem_addr;
wire [`ysyx_22040931_DATA_BUS] MEM_mem_stor_data;
//liushuixian
wire [`ysyx_22040931_INST_BUS] MEM_instr;
wire [`ysyx_22040931_PC_BUS]  MEM_pc;


ysyx_22040931_MEM ysyx_22040931_MEM(

    .w_ena_i(MEM_w_ena),
    .w_addr_i(MEM_w_addr),
    .w_data_i(MEM_w_data),
    //mem
    .memwop(MEM_memwop),
    .memrop(MEM_memrop),
    .mem_ena_i(MEM_mem_ena),
    .mem_wr_i(MEM_mem_wr),
    .mem_addr_i(MEM_mem_addr),
    .mem_stor_data_i(MEM_mem_stor_data),
    .mem_data(rdata),                                      ////////////
    //liushuixian
    .pc_i(MEM_pc),
    .instr(MEM_instr),


    .w_ena(mem_w_ena),
    .w_addr(mem_w_addr),
    .w_data(mem_w_data),
    //mem
    .memop(memop),//
    .mem_ena(mem_ena),
    .mem_wr(mem_wr),
    .mem_addr(mem_addr),
    .mem_stor_data(mem_stor_data),//
    //liushuixian
    .instr_o(mem_instr),
    .pc_o(mem_pc)

);

wire mem_w_ena;
wire [`ysyx_22040931_REG_BUS] mem_w_addr;
wire [`ysyx_22040931_DATA_BUS] mem_w_data;
//liushuixian
wire [`ysyx_22040931_PC_BUS] mem_pc;
wire [`ysyx_22040931_INST_BUS] mem_instr;


//mem valid <-> ready
wire mem_ready;
wire mem_valid;

mem_wb mem_wb(
    .reset(reset),
    .clock(clock),
    .flush(),
    .stall(),
    //wo shou
    .ex_valid(ex_valid),
    //input wire wb_ready,
    .mem_ready(mem_ready),
    .mem_valid(mem_valid),
    //liushuixian
    .MEM_pc(mem_pc),
    .MEM_instr(mem_instr),
    //regfile 
    .MEM_w_ena(mem_w_ena),
    .MEM_w_addr(mem_w_addr),
    .MEM_w_data(mem_w_data),


    .WB_w_ena(WB_w_ena),
    .WB_w_addr(WB_w_addr),
    .WB_w_data(WB_w_data),
    //liushuixian
    .WB_instr(WB_instr),
    .WB_pc(WB_pc)
);


wire          WB_w_ena;
wire [`ysyx_22040931_REG_BUS]  WB_w_addr;
wire [`ysyx_22040931_DATA_BUS] WB_w_data;
//liushuixian
wire [`ysyx_22040931_PC_BUS] WB_pc;
wire [`ysyx_22040931_INST_BUS] WB_instr;
//difftest
assign difftest_pc = WB_pc;
assign difftest_instr = WB_instr;

ysyx_22040931_WB ysyx_22040931_WB(

    .w_ena_i(WB_w_ena),
    .w_addr_i(WB_w_addr),
    .w_data_i(WB_w_data),
    //liushuixian
    .pc_i(WB_pc),
    

    .w_ena(wb_w_ena),
    .w_addr(wb_w_addr),
    .w_data(wb_w_data)
);

wire wb_w_ena;
wire [4 : 0] wb_w_addr;
wire [`ysyx_22040931_DATA_BUS] wb_w_data;

endmodule
