module miter #(parameter W=52)(
  input wire [W-2:0] a,b,
  input wire subtract,sticky,
  output wire equal
);
  wire [W-1:0] ax={1'b0,a}, bx={1'b0,b};
  wire [W-1:0] old_diff=ax-bx;
  wire [W-1:0] magnitude=a>=b ? old_diff : ~old_diff+{{(W-1){1'b0}},1'b1};
  wire [W-1:0] expected=subtract ? magnitude-{{(W-1){1'b0}},(subtract & sticky)} : ax+bx;
  wire [W-1:0] actual;
  routeb_fma_accumulate #(.W(W)) candidate(a,b,subtract,sticky,actual);
  assign equal=(actual==expected);
endmodule
