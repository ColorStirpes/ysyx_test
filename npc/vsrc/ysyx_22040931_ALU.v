//2022.6.24 xuxin
`include "defines.v"


module ysyx_22040931_ALU(
    input wire reset,
    input wire clock,
    input wire id_valid,
    input wire ex_ready,
    output wire alu_valid,
    output wire alu_ready,
    input wire [`ysyx_22040931_DATA_BUS] num1,
    input wire [`ysyx_22040931_DATA_BUS] num2,
    input wire [`ysyx_22040931_DATA_BUS] imm,
    input wire [`ysyx_22040931_PC_BUS]    pc,
    input wire [4 : 0] op,

    output wire alu_valid,
    output wire alu_ready,
    output wire [`ysyx_22040931_DATA_BUS] out
);

wire signed [63 : 0] num1_s;
wire signed [31 : 0] num1_sw;
wire signed [63 : 0] num2_s;
wire signed [31 : 0] num2_sw;

assign num1_s = num1;
assign num2_s = num2;
assign num1_sw = num1[31 : 0];
assign num2_sw = num2[31 : 0];

    


    wire [2 : 0] d_m_ena;
    ysyx_22040931_MuxD #(8, 5, 3) D_M_ENA (d_m_ena, op, {1'b0, 1'b0, 1'b0}, {
    `ysyx_22040931_REMW  ,  {1'b1, 1'b1, 1'b1},
    `ysyx_22040931_REMUW ,  {1'b1, 1'b1, 1'b0},
    `ysyx_22040931_REMU  ,  {1'b0, 1'b1, 1'b0},
    `ysyx_22040931_REM   ,  {1'b0, 1'b1, 1'b1},
    `ysyx_22040931_DIV   ,  {1'b0, 1'b1, 1'b1},
    `ysyx_22040931_DIVU  ,  {1'b0, 1'b1, 1'b0},
    `ysyx_22040931_DIVUW ,  {1'b1, 1'b1, 1'b0},
    `ysyx_22040931_DIVW  ,  {1'b1, 1'b1, 1'b1}
    });


    wire [`ysyx_22040931_DATA_BUS] quotient, remainder;
    divider divider(
    .clock(clock),
    .reset(reset),
    .w(d_m_ena[2]),
    .div(d_m_ena[1]),
    .div_signed(d_m_ena[0]),
    .dividend(num1),
    .divisor(num2),

    .quotient(quotient),
    .remainder(remainder),
    .complete(div_complete)
    );


    ysyx_22040931_MuxD #(28, 5, 64) ALU (out, op, `ysyx_22040931_ZERO_NUM, {
    `ysyx_22040931_ADD   ,  num1 + num2,
    `ysyx_22040931_SUB   ,  num1 - num2,
    `ysyx_22040931_AND   ,  num1 & num2,
    `ysyx_22040931_XOR   ,  num1 ^ num2,
    `ysyx_22040931_OR    ,  num1 | num2,
    `ysyx_22040931_COM   ,  {63'b0, {num1 - num2}[63]},
    `ysyx_22040931_COMU  ,  {63'b0, {{1'b0, num1} - {1'b0, num2}}[64]},
    `ysyx_22040931_SHIL  ,  num1 << num2[5 : 0],
    `ysyx_22040931_SHIR  ,  num1 >> num2[5 : 0],
    `ysyx_22040931_SRA   ,  num1_s >>> num2[5 : 0],
    `ysyx_22040931_SHILW ,  num1 << num2[4 : 0],
    `ysyx_22040931_SRAW  ,  {{32{num1_sw[31]}} , {num1_sw >>> num2[4 : 0]}},
    `ysyx_22040931_SHIRW ,  {{32{1'b0}} , {num1[31 : 0] >> num2[4 : 0]}},
    `ysyx_22040931_PC    ,  num2 + pc,
    `ysyx_22040931_SORT  ,  num1 + imm,
    `ysyx_22040931_JUMP  ,  pc + 4,
    `ysyx_22040931_REMW  ,  remainder,
    `ysyx_22040931_REMUW ,  remainder,
    `ysyx_22040931_REMU  ,  remainder,
    `ysyx_22040931_REM   ,  remainder,
    `ysyx_22040931_MUL   ,  num1 * num2,
    `ysyx_22040931_MULH  ,  (num1_s * num2_s) >> 64,
    `ysyx_22040931_MULHSU,  (num1_s * num2) >> 64,
    `ysyx_22040931_MULHU ,  (num1 * num2) >> 64,
    `ysyx_22040931_DIV   ,  quotient,
    `ysyx_22040931_DIVU  ,  quotient,
    `ysyx_22040931_DIVUW ,  quotient,     
    `ysyx_22040931_DIVW  ,  quotient
    });



    wire div_complete;
    assign alu_valid = d_m_ena[1] ? div_complete : 1'b1;
    assign alu_ready = d_m_ena[1] ? div_complete : 1'b1;

endmodule
