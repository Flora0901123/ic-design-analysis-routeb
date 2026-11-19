// Parallel four-bit groups with a prefix over group carries.
module routeb_fma_prefix_add #(parameter W=52, parameter G=4)(
  input wire [W-1:0] a, b,
  input wire cin,
  output wire [W-1:0] y
);
  localparam N=(W+G-1)/G, L=$clog2(N);
  wire [N-1:0] p [0:L];
  wire [N-1:0] g [0:L];
  wire [N:0] c;
  assign c[0]=cin;
  genvar i,s,j;
  generate
    for (i=0;i<N;i=i+1) begin: group
      localparam LO=i*G, B=(W-LO<G)?W-LO:G;
      wire [B:0] local_sum={1'b0,a[LO+:B]}+{1'b0,b[LO+:B]};
      assign g[0][i]=local_sum[B];
      assign p[0][i]=&(a[LO+:B]^b[LO+:B]);
      assign c[i+1]=g[L][i] | (p[L][i] & cin);
      assign y[LO+:B]=a[LO+:B]+b[LO+:B]+c[i];
    end
    for (s=0;s<L;s=s+1) begin: level
      for (j=0;j<N;j=j+1) begin: node
        if (j >= (1<<s)) begin
          assign g[s+1][j]=g[s][j] | (p[s][j] & g[s][j-(1<<s)]);
          assign p[s+1][j]=p[s][j] & p[s][j-(1<<s)];
        end else begin
          assign g[s+1][j]=g[s][j];
          assign p[s+1][j]=p[s][j];
        end
      end
    end
  endgenerate
endmodule

module routeb_fma_accumulate #(parameter W=52)(
  input wire [W-2:0] a, b,
  input wire subtract, sticky,
  output wire [W-1:0] result
);
  wire [W-1:0] ax={1'b0,a}, bx={1'b0,b};
  wire [W-1:0] sum, ab, ba;
  routeb_fma_prefix_add #(.W(W)) add_u(ax,bx,1'b0,sum);
  routeb_fma_prefix_add #(.W(W)) sub_ab_u(ax,~bx,~sticky,ab);
  routeb_fma_prefix_add #(.W(W)) sub_ba_u(bx,~ax,~sticky,ba);
  assign result=subtract ? (a>=b ? ab : ba) : sum;
endmodule
