//2022.7.18 xuxin
`include "defines.v"

module target_predictor(
    input wire reset,
    input wire clock,
    input wire pc,
    input wire id_pc,
    input wire [`ysyx_22040931_PC_BUS] id_branch, 
    input wire id_jumptype,  //10call 11ret
    //input wire is_ret,

    output wire hit,
    output wire branch,
);

    reg [`ysyx_22040931_BTB_WIDTH-1 : 0] BTB1[`ysyx_22040931_BTB_SIZE-1 : 0];
    //reg [`ysyx_22040931_BTB_WIDTH-1 : 0] BTB2[`ysyx_22040931_BTB_SIZE-1 : 0];

    wire [7 : 0] btb_index; 
    assign btb_index = pc[9 : 2];
    wire [7 : 0] id_btb_index; 
    assign id_btb_index = id_pc[9 : 2];

    //wire [1 : 0] type;
    //assign type = BTB1[1 : 0];
    assign hit = ({BTB1[btb_index]}[`ysyx_22040931_BTB_SIZE-1 : `ysyx_22040931_BTB_SIZE-64] == pc) ? 1'b1 : 1'b0;
    assign branch = (BTB1[1 : 0] == 2'b11) ? RAS[ras_index] : {BTB1[btb_index]}[`ysyx_22040931_BTB_SIZE-65 : 2];

    integer i,j;
    always@(posedge clock) begin
        if(reset == 1'b1) begin
            for(i = 0; i < `ysyx_22040931_BTB_SIZE; i = i+1) begin
                BTB1[i] <= 0;
            end
        end
        else begin
            if(id_jumptype) begin
                BTB1[id_btb_index] <= {id_pc, id_branch, id_jumptype};
            end
        end
    end
     


    //RAS
    reg [`ysyx_22040931_PC_BUS] RAS[`ysyx_22040931_RAS_SIZE-1 : 0];
    reg [`ysyx_22040931_RAS_SIZE-1 : 0] ras_index;

    always@(posedge clock) begin
        if(reset == 1'b1) begin
            for(j = 0; j < `ysyx_22040931_RAS_SIZE; j = j+1) begin
                RAS[j] <= 0;
            end
            ras_index <= 0;
        end
        else begin
            if(type == 2'b11) begin
                ras_index <= ras_index - 1;
            end
            else if(type == 2'b10) begin
                RAS[ras_index] <= pc + 4;  //pc
                ras_index <= ras_index + 1;
            end
        end
    end


endmodule
