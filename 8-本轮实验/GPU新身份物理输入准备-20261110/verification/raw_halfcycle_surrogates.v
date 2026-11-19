module routeb_new_1w1r_20x64(input wire clk0,csb0, input wire [5:0] addr0,input wire [19:0] din0,input wire clk1,csb1,input wire [5:0] addr1,output reg [19:0] dout1);
// TEST SURROGATE ONLY. Not an OpenRAM view and not for synthesis or PPA.
reg [19:0] memory[0:63];
reg [5:0] wa,ra;
reg [19:0] wd;
reg wen,ren;
always @(posedge clk0) begin wa<=addr0;wd<=din0;wen<=!csb0;end
always @(posedge clk1) begin ra<=addr1;ren<=!csb1;dout1<={ 20{1'bx} };end
always @(negedge clk0) if(wen) memory[wa]<=wd;
always @(negedge clk1) if(ren) dout1<=memory[ra];
endmodule

module routeb_new_1w1r_32x256(input wire clk0,csb0, input wire [7:0] addr0,input wire [31:0] din0,input wire clk1,csb1,input wire [7:0] addr1,output reg [31:0] dout1);
// TEST SURROGATE ONLY. Not an OpenRAM view and not for synthesis or PPA.
reg [31:0] memory[0:255];
reg [7:0] wa,ra;
reg [31:0] wd;
reg wen,ren;
always @(posedge clk0) begin wa<=addr0;wd<=din0;wen<=!csb0;end
always @(posedge clk1) begin ra<=addr1;ren<=!csb1;dout1<={ 32{1'bx} };end
always @(negedge clk0) if(wen) memory[wa]<=wd;
always @(negedge clk1) if(ren) dout1<=memory[ra];
endmodule

module routeb_new_1w1r_8x1024(input wire clk0,csb0, input wire [9:0] addr0,input wire [7:0] din0,input wire clk1,csb1,input wire [9:0] addr1,output reg [7:0] dout1);
// TEST SURROGATE ONLY. Not an OpenRAM view and not for synthesis or PPA.
reg [7:0] memory[0:1023];
reg [9:0] wa,ra;
reg [7:0] wd;
reg wen,ren;
always @(posedge clk0) begin wa<=addr0;wd<=din0;wen<=!csb0;end
always @(posedge clk1) begin ra<=addr1;ren<=!csb1;dout1<={ 8{1'bx} };end
always @(negedge clk0) if(wen) memory[wa]<=wd;
always @(negedge clk1) if(ren) dout1<=memory[ra];
endmodule

module routeb_new_1w1r_8x128(input wire clk0,csb0, input wire [6:0] addr0,input wire [7:0] din0,input wire clk1,csb1,input wire [6:0] addr1,output reg [7:0] dout1);
// TEST SURROGATE ONLY. Not an OpenRAM view and not for synthesis or PPA.
reg [7:0] memory[0:127];
reg [6:0] wa,ra;
reg [7:0] wd;
reg wen,ren;
always @(posedge clk0) begin wa<=addr0;wd<=din0;wen<=!csb0;end
always @(posedge clk1) begin ra<=addr1;ren<=!csb1;dout1<={ 8{1'bx} };end
always @(negedge clk0) if(wen) memory[wa]<=wd;
always @(negedge clk1) if(ren) dout1<=memory[ra];
endmodule
