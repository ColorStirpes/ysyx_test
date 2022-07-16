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
	if(instr == 32'b0000000_00001_00000_000_00000_11100_11) begin
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
    .mux_pc(mux_pc),
    .branch(branch),
    
    .fetch_enb(fetch_enb),
    .if_pc(pc)

);

//pc valid <-> ready
wire pc_ready;
wire pc_valid;


//if valid <-> ready
wire if_ready;
wire if_valid;

module if_id(
    .reset(reset),
    .clock(clock),
    .flush(),
    .stall(),
    //wo shou
    .pc_valid(pc_valid),
    .id_ready(id_ready),
    .if_ready(if_ready),
    .if_valid(if_valid),

    .IF_pc(pc),
    .IF_instr(instr),


    .ID_pc(ID_pc),
    .ID_instr(ID_instr)
);


wire [`ysyx_22040931_PC_BUS]   ID_pc;
wire [`ysyx_22040931_INST_BUS] ID_instr;

module ysyx_22040931_ID(

    //regfile
    .reset(reset),
    .clock(clock),
    input wire w_ena_i,
    input wire [`ysyx_22040931_REG_BUS] w_addr_i,
    input wire [`ysyx_22040931_DATA_BUS] w_data_i,
    //liushuixian
    .pc_i(ID_pc),
    .instr(ID_instr),
    //bypass
    .ex_w_ena(EX_w_ena),
    .ex_w_addr(EX_w_addr),
    .ex_w_data(EX_w_data),
    input wire mem_w_ena,
    input wire [`ysyx_22040931_REG_BUS] mem_w_addr,
    input wire [`ysyx_22040931_DATA_BUS] mem_w_data,


    //load hazard 
    .stall(load_stall),
    //liushuixian
    .pc_o(id_pc),    
    //branch
    .branch(branch),
    .mux_pc(mux_pc),
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
wire load_stall;
//liushuixian
wire [`ysyx_22040931_PC_BUS] id_pc;   
//branch
wire [`ysyx_22040931_PC_BUS] branch;
wire mux_pc;
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

module id_ex(
    .reset(reset),
    .clock(clock),
    .flush(),     //记得flush与各级使能相与 p71
    .stall(),
    //wo shou
    .if_valid(if_valid),
    .ex_ready(ex_ready),
    .id_ready(id_ready),
    .id_valid(id_valid),
    .ID_pc(id_pc),
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

    .EX_pc(.EX_pc)
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
wire [`ysyx_22040931_PC_BUS] EX_pc;

ysyx_22040931_EX ysyx_22040931_EX(

    .w_ena_i(EX_w_ena),
    .w_addr_i(EX_w_addr),
    .pc_i(EX_pc),
    
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
wire [`ysyx_22040931_PC_BUS] ex_pc;


//ex valid <-> ready
wire ex_ready;
wire ex_valid;

module ex_mem(
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
    output reg [2 : 0]   MEM_memwop,
    output reg [2 : 0]   MEM_memrop,
    output reg           MEM_mem_ena,
    output reg           MEM_mem_wr,
    output reg [`ysyx_22040931_MEM_BUS]  MEM_mem_addr,
    output reg [`ysyx_22040931_DATA_BUS] MEM_mem_stor_data,
    //liushuixian
    output reg [`ysyx_22040931_PC_BUS]  MEM_pc

);


wire          MEM_w_ena;
wire [`ysyx_22040931_REG_BUS] MEM_w_addr;
wire [`ysyx_22040931_DATA_BUS] MEM_w_data;
//mem
    output reg [2 : 0]   MEM_memwop,
    output reg [2 : 0]   MEM_memrop,
    output reg           MEM_mem_ena,
    output reg           MEM_mem_wr,
    output reg [`ysyx_22040931_MEM_BUS]  MEM_mem_addr,
    output reg [`ysyx_22040931_DATA_BUS] MEM_mem_stor_data,
    //liushuixian
    output reg [`ysyx_22040931_PC_BUS]  MEM_pc


module ysyx_22040931_MEM(

    .w_ena_i(MEM_w_ena),
    .w_addr_i(MEM_w_addr),
    .w_data_i(MEM_w_data),
    //mem
    input wire [2 : 0]   memwop,
    input wire [2 : 0]   memrop,
    input wire           mem_ena_i,
    input wire           mem_wr_i,
    input wire [`ysyx_22040931_MEM_BUS] mem_addr_i,
    input wire [`ysyx_22040931_DATA_BUS] mem_stor_data_i,
    input wire [`ysyx_22040931_DATA_BUS] mem_data,
    //liushuixian
    input wire [`ysyx_22040931_PC_BUS] pc_i,
    //load hazard
    input wire ex_mem_ena,
    input wire ex_mem_wr,


    output wire w_ena,
    output wire [`ysyx_22040931_REG_BUS] w_addr,
    output wire [`ysyx_22040931_DATA_BUS] w_data,
    //mem
    output wire [1 : 0]       memop,//
    output wire             mem_ena,
    output wire              mem_wr,
    output wire [`ysyx_22040931_MEM_BUS] mem_addr,
    output wire [`ysyx_22040931_DATA_BUS] mem_stor_data,//
    //liushuixian
    output wire [`ysyx_22040931_PC_BUS] pc_o

);

    output wire w_ena,
    output wire [`ysyx_22040931_REG_BUS] w_addr,
    output wire [`ysyx_22040931_DATA_BUS] w_data,
    //mem
    output wire [1 : 0]       memop,//
    output wire             mem_ena,
    output wire              mem_wr,
    output wire [`ysyx_22040931_MEM_BUS] mem_addr,
    output wire [`ysyx_22040931_DATA_BUS] mem_stor_data,//
    //liushuixian
    output wire [`ysyx_22040931_PC_BUS] pc_o


ysyx_22040931_WB ysyx_22040931_WB(

    .w_ena_i(mem_w_ena),
    .w_addr_i(mem_w_addr),
    .w_data_i(mem_w_data),
    //liushuixian
    .pc_i(mem_pc),
    

    .w_ena(wb_w_ena),
    .w_addr(wb_w_addr),
    .w_data(wb_w_data)
);

wire wb_w_ena;
wire [4 : 0] wb_w_addr;
wire [`ysyx_22040931_DATA_BUS] wb_w_data;

endmodule
