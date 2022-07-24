`timescale 1ns / 1ps
//ROM
`define ROM_NUM  1024
`define ROM_NUMLOG  10

//DTAT_MEM
`define D_NUM  1024
`define D_NUMLOG  10

//forcase
`define ysyx_22040931_PHT_SIZE  256     //1<<`ysyx_22040931_BHT_WIDTH
`define ysyx_22040931_BHT_WIDTH  8      //ysyx_22040931_HASH_WIDTH
`define ysyx_22040931_BHT_SIZE  256     //1<<`ysyx_22040931_HASH_WIDTH
`define ysyx_22040931_HASH_WIDTH 8      //
//
`define ysyx_22040931_BTB_WIDTH 98       //
`define ysyx_22040931_BTB_SIZE 256
`define ysyx_22040931_RAS_INDEX 4
`define ysyx_22040931_RAS_SIZE 16

`define ysyx_22040931_ALU        6
`define ysyx_22040931_ALU_BUS    5 : 0
`define ysyx_22040931_REG        32
`define ysyx_22040931_MEM        64
`define ysyx_22040931_ZERO_NUM   64'h00000000_00000000
`define ysyx_22040931_ZERO_PC    64'h00000000_80000000
`define ysyx_22040931_NONE_INST  32'h00000000
`define ysyx_22040931_ZERO_REG   5'b00000
`define ysyx_22040931_PC_BUS     63 : 0
`define ysyx_22040931_DATA_BUS   63 : 0
`define ysyx_22040931_MEM_BUS    63 : 0
`define ysyx_22040931_CSR_BUS    63 : 0
`define ysyx_22040931_INST_BUS   31 : 0
`define ysyx_22040931_REG_BUS     4 : 0
`define ysyx_22040931_N_ENA        1'b0
`define ysyx_22040931_ENA          1'b1
`define ysyx_22040931_READ         1'b0 

//ALUOP
`define ysyx_22040931_NO      6'b000000
`define ysyx_22040931_ADD     6'b000001
`define ysyx_22040931_SUB     6'b000010
`define ysyx_22040931_AND     6'b000011
`define ysyx_22040931_XOR     6'b000100
`define ysyx_22040931_OR      6'b000101
`define ysyx_22040931_COM     6'b000110
`define ysyx_22040931_COMU    6'b000111
`define ysyx_22040931_SHIL    6'b001000
`define ysyx_22040931_SHIR    6'b001001
`define ysyx_22040931_SRA     6'b001010
`define ysyx_22040931_SHILW   6'b001011
`define ysyx_22040931_SRAW    6'b001100
`define ysyx_22040931_SHIRW   6'b001101
`define ysyx_22040931_PC      6'b001110
`define ysyx_22040931_SORT    6'b001111
`define ysyx_22040931_JUMP    6'b010000
`define ysyx_22040931_REMW    6'b010001
`define ysyx_22040931_REMUW   6'b010010
`define ysyx_22040931_REMU    6'b010011
`define ysyx_22040931_REM     6'b010100
`define ysyx_22040931_MUL     6'b010101
`define ysyx_22040931_MULH    6'b010110
`define ysyx_22040931_MULHSU  6'b010111
`define ysyx_22040931_MULHU   6'b011000
`define ysyx_22040931_MULW    6'b011001
`define ysyx_22040931_DIV     6'b011010
`define ysyx_22040931_DIVU    6'b011011
`define ysyx_22040931_DIVUW   6'b011100
`define ysyx_22040931_DIVW    6'b011101



//EXOP
`define ysyx_22040931_No      3'b000
`define ysyx_22040931_Arith   3'b111
`define ysyx_22040931_Short   3'b110
`define ysyx_22040931_Stort   3'b101
`define ysyx_22040931_LOAD    3'b100
`define ysyx_22040931_System  3'b011
`define ysyx_22040931_LUI     3'b010

//MEMROP
`define ysyx_22040931_MNO   3'b000
`define ysyx_22040931_R_ONE   3'b001
`define ysyx_22040931_R_ONEU  3'b010
`define ysyx_22040931_R_DOU   3'b011
`define ysyx_22040931_R_DOUU  3'b100
`define ysyx_22040931_R_FOR   3'b101
`define ysyx_22040931_R_FORU  3'b110
`define ysyx_22040931_R_EIG   3'b111

//MEMWOP
`define ysyx_22040931_MNO   3'b000
`define ysyx_22040931_W_ONE   3'b001
`define ysyx_22040931_W_DOU   3'b011
`define ysyx_22040931_W_FOR   3'b101
`define ysyx_22040931_W_EIG   3'b111

//MEMOP
`define ysyx_22040931_SIZE_B    2'b00
`define ysyx_22040931_SIZE_H    2'b01
`define ysyx_22040931_SIZE_W    2'b10
`define ysyx_22040931_SIZE_D    2'b11


//TYPE
`define ysyx_22040931_It     3'b111
`define ysyx_22040931_St     3'b110
`define ysyx_22040931_Bt     3'b101
`define ysyx_22040931_Jt     3'b100
`define ysyx_22040931_Ut     3'b011
`define ysyx_22040931_Rt     3'b010



//R
`define ysyx_22040931_add    17'b0000000_000_0110011
`define ysyx_22040931_addw   17'b0000000_000_0111011
`define ysyx_22040931_and    17'b0000000_111_0110011
`define ysyx_22040931_sll    17'b0000000_001_0110011
`define ysyx_22040931_sllw   17'b0000000_001_0111011
`define ysyx_22040931_slt    17'b0000000_010_0110011
`define ysyx_22040931_sltu   17'b0000000_011_0110011
`define ysyx_22040931_sra    17'b0100000_101_0110011
`define ysyx_22040931_sraw   17'b0100000_101_0111011
`define ysyx_22040931_srl    17'b0000000_101_0110011
`define ysyx_22040931_srlw   17'b0000000_101_0111011
`define ysyx_22040931_sub    17'b0100000_000_0110011
`define ysyx_22040931_subw   17'b0100000_000_0111011
`define ysyx_22040931_xor    17'b0000000_100_0110011
`define ysyx_22040931_remw   17'b0000001_110_0111011
`define ysyx_22040931_remuw  17'b0000001_111_0111011
`define ysyx_22040931_remu   17'b0000001_111_0110011
`define ysyx_22040931_rem    17'b0000001_110_0110011
`define ysyx_22040931_or     17'b0000000_110_0110011
`define ysyx_22040931_mul    17'b0000001_000_0110011
`define ysyx_22040931_mulh   17'b0000001_001_0110011
`define ysyx_22040931_mulhsu 17'b0000001_010_0110011
`define ysyx_22040931_mulhu  17'b0000001_011_0110011
`define ysyx_22040931_mulw   17'b0000001_000_0111011
`define ysyx_22040931_div    17'b0000001_100_0110011
`define ysyx_22040931_divu   17'b0000001_101_0110011
`define ysyx_22040931_divuw  17'b0000001_101_0111011
`define ysyx_22040931_divw   17'b0000001_100_0111011

//I
`define ysyx_22040931_addi    10'b000_0010011 
`define ysyx_22040931_addiw   10'b000_0011011
`define ysyx_22040931_andi    10'b111_0010011   
`define ysyx_22040931_ld      10'b011_0000011 
`define ysyx_22040931_lw      10'b010_0000011
`define ysyx_22040931_lh      10'b001_0000011
`define ysyx_22040931_lb      10'b000_0000011
`define ysyx_22040931_lwu     10'b110_0000011 
`define ysyx_22040931_lhu     10'b101_0000011 
`define ysyx_22040931_lbu     10'b100_0000011 
`define ysyx_22040931_xori    10'b100_0010011
`define ysyx_22040931_jalr    10'b000_1100111 
`define ysyx_22040931_ori     10'b110_0010011    
`define ysyx_22040931_slli    16'b000000_001_0010011 
`define ysyx_22040931_srai    16'b010000_101_0010011
`define ysyx_22040931_srli    16'b000000_101_0010011     
`define ysyx_22040931_slliw   17'b0000000_001_0011011
`define ysyx_22040931_slti    17'b0000000_010_0010011
`define ysyx_22040931_sltiu   17'b0000000_011_0010011 
`define ysyx_22040931_sraiw   17'b0100000_101_0011011 
`define ysyx_22040931_srliw   17'b0000000_101_0011011

`define ysyx_22040931_ecall   18'b0000000_0_000_1110011
`define ysyx_22040931_ebreak  18'b0000000_1_000_1110011 

//S
`define ysyx_22040931_sd  10'b011_0100011
`define ysyx_22040931_sw  10'b010_0100011
`define ysyx_22040931_sh  10'b001_0100011
`define ysyx_22040931_sb  10'b000_0100011

//B
`define ysyx_22040931_beq   10'b000_1100011
`define ysyx_22040931_bge   10'b101_1100011
`define ysyx_22040931_bgeu  10'b111_1100011
`define ysyx_22040931_blt   10'b100_1100011
`define ysyx_22040931_bltu  10'b110_1100011
`define ysyx_22040931_bne   10'b001_1100011

//J
`define ysyx_22040931_jal     7'b1101111

//U
`define ysyx_22040931_auipc   7'b0010111
`define ysyx_22040931_lui     7'b0110111




    




