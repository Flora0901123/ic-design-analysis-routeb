from pathlib import Path
import subprocess,ctypes,random,json
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/TopK修补-20261105';frag=(R/'3-优化链-P1/topk_v2.cfrag').read_text();code='void pick(int *scores,unsigned visible,unsigned *ids,unsigned *nout){unsigned count=visible;int prefill=1;for(unsigned i=0;i<visible;i++)ids[i]=i;'+frag+'*nout=count;}'
(O/'sort_check.c').write_text(code);subprocess.run(['gcc','-O2','-shared','-fPIC',str(O/'sort_check.c'),'-o',str(O/'sort_check.so')],check=True)
lib=ctypes.CDLL(str(O/'sort_check.so'));rng=random.Random(20261105);count=0
for n in range(1,33):
 arrays=[[0]*n,list(range(n)),list(range(n,0,-1))]+[[rng.randint(-8,8) for _ in range(n)] for _ in range(1000)]
 for a in arrays:
  scores=(ctypes.c_int*n)(*a);ids=(ctypes.c_uint*32)();size=ctypes.c_uint();lib.pick(scores,n,ids,ctypes.byref(size));got=list(ids)[:size.value];expected=sorted(range(n),key=lambda i:(-a[i],i))[:4];assert got==expected,(a,got,expected);count+=1
(O/'sort_check.json').write_text(json.dumps({'cases':count,'failures':0,'length_range':[1,32],'tie_break':'score descending, token id ascending','scope':'actual C fragment host equivalence; target performance separately measured'},indent=2));print('C fragment:',count,'cases PASS')
