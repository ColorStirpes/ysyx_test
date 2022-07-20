//2022.7.20 xuxin
`include "defines.v"

module divider(
    input wire clock,
    input wire reset,
    input wire div,
    input wire div_signed,
    input wire [63 : 0] dividend,
    input wire [63 : 0] divisor,


    output wire [63 : 0] quotient,
    output wire [63 : 0] remainder,
    output wire complete
);

    reg [127 : 0] dividend_reg;
    reg [63 : 0] quotient_reg;
    reg [64 : 0] remainder_reg;
    reg [6 : 0] count;

    //1
    wire [63 : 0] abs_dividend, abs_divisor;
    wire quotient_signed, remainder_signed;
    assign abs_dividend = div_signed ? (dividend[63] ? ~dividend+1 : dividend) : dividend; 
    assign abs_divisor =  div_signed ? (divisor[63]  ? ~divisor+1  : divisor)  : divisor;
    assign quotient_signed = divisor[63] ^ dividend[63];  //1- 0+
    assign remainder_signed = dividend[63];
    //2
    wire [64 : 0] sub, ads_testsor;
    assign sub = {dividend_reg[127 : 63] - {1'b0, abs_divisor}};
    assign ads_testsor = {1'b0, abs_divisor};

    always@(posedge clock) begin
        if(reset == 1'b1) begin
            dividend_reg <= 0;
            quotient_reg <= 0;
            remainder_reg <= 0;
            count <= 0;
        end
        else if(div) begin
            if(count == 0) begin
                dividend_reg <= {64'b0, abs_dividend};
                count <= 1;
            end
            else begin
                count <= count + 1;
                if(count != 65) begin
                    quotient_reg <= {quotient_reg[62 : 0], ~sub[64]};
                    remainder_reg <= sub;
                    if(sub[64]) begin
                        dividend_reg <= dividend_reg << 1;
                    end
                    else begin
                        dividend_reg <= {sub, dividend_reg[62 : 0]} << 1;
                    end
                end
                else begin
                    count <= 0;
                end
            end
        end
        else begin
            count <= 0;
        end
    end
    
    //3
    assign quotient =  div_signed ? (quotient_signed  ? ~quotient_reg + 1  : quotient_reg)  : quotient_reg;
    wire [63 : 0] last_remainder;
    assign last_remainder = remainder_reg[64] ? dividend_reg[127 : 64] : remainder_reg[63 : 0];
    assign remainder = div_signed ? (remainder_signed ? ~last_remainder + 1 : last_remainder) : last_remainder;
    
    //4
    assign complete = (count == 65) ? 1'b1 : 1'b0;
    


endmodule
