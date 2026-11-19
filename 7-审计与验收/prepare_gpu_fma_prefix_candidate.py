"""Build an isolated, latency-preserving FMA accumulator candidate and prove its arithmetic."""
from pathlib import Path
import hashlib
import json
import subprocess

from qualification_resource_guard import prepare, join

ROOT = Path(__file__).resolve().parents[1]
E = ROOT/'8-本轮实验'
SOURCE = E/'GPU新身份物理输入准备-20261110/snapshot/project-physical.v'
OUT = E/'GPU-FMA分组进位候选-20261112'

ARITHMETIC = """// Parallel four-bit groups with a prefix over group carries.
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
"""

MITER = """module miter #(parameter W=52)(
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
"""


def sha(p):
    return hashlib.sha256(p.read_bytes()).hexdigest()


def main():
    prepare()
    join()
    OUT.mkdir(exist_ok=False)
    helper=OUT/'fma-prefix.v'
    helper.write_text(ARITHMETIC)
    miter=OUT/'miter.v'
    miter.write_text(MITER)
    proof=[]
    for width in (26,52,110):
        ys=f'read_verilog fma-prefix.v miter.v; hierarchy -top miter -chparam W {width}; prep -top miter -flatten; opt; sat -timeout 80 -verify -prove equal 1'
        log=OUT/f'proof-{width}.log'
        with log.open('wb') as f:
            subprocess.run(['yosys','-p',ys],cwd=OUT,stdout=f,stderr=subprocess.STDOUT,check=True,timeout=100)
        assert 'SAT proof finished - no model found: SUCCESS!' in log.read_text()
        proof.append(dict(width=width,log=log.name,sha256=sha(log)))
    original=SOURCE.read_text()
    left='\twire [ACC_BITS - 1:0] add_result ='
    right='\tassign acc_sign ='
    assert original.count(left)==original.count(right)==1
    start=original.index(left)
    end=original.index(right,start)
    assert 'wire [ACC_BITS - 1:0] acc_sum;' in original[start:end]
    replacement="""\twire [ACC_BITS - 1:0] acc_sum;
\trouteb_fma_accumulate #(.W(ACC_BITS)) routeb_accumulator (
\t\t.a(s2_aln_prod), .b(s2_aln_c), .subtract(s2_eff_sub),
\t\t.sticky(s2_sticky), .result(acc_sum)
\t);
"""
    candidate=OUT/'project-physical-fma.v'
    candidate.write_text(original[:start]+replacement+original[end:]+ARITHMETIC)
    state=dict(status='FMA_ARITHMETIC_SAT_EQUIVALENT',physical_signoff=False,pipeline_registers_changed=False,
               original_sha256=sha(SOURCE),candidate_sha256=sha(candidate),proofs=proof)
    (OUT/'status.json').write_text(json.dumps(state,indent=2),encoding='utf-8')
    print(state,flush=True)


if __name__=='__main__':
    main()
