import ast,ctypes,hashlib,json,random,subprocess
from pathlib import Path
R=Path(__file__).resolve().parents[1]; out=R/'8-本轮实验/RNE独立等价检查';out.mkdir(parents=True,exist_ok=True)
tree=ast.parse((R/'3-优化链-P1/modify_nano.py').read_text())
anchor=next(ast.literal_eval(n.value) for n in tree.body if isinstance(n,ast.Assign) and any(isinstance(t,ast.Name) and t.id=='anchor' for t in n.targets))
extra=next(ast.literal_eval(n.value.right) for n in tree.body if isinstance(n,ast.Assign) and any(isinstance(t,ast.Name) and t.id=='r15' for t in n.targets))
source='#include <stdint.h>\n'+anchor.replace('static int64_t rne_div','int64_t baseline_rne')+extra.replace('static int64_t rne15','int64_t candidate_rne')
(out/'rne.c').write_text(source)
subprocess.run(['gcc','-shared','-fPIC','-O2',str(out/'rne.c'),'-o',str(out/'rne.so')],check=True)
lib=ctypes.CDLL(str(out/'rne.so'));b=lib.baseline_rne;b.argtypes=[ctypes.c_int64,ctypes.c_int64];b.restype=ctypes.c_int64;c=lib.candidate_rne;c.argtypes=[ctypes.c_int64];c.restype=ctypes.c_int64
random.seed(20261029);count=0;bad=[]
values=list(range(-131073,131074))+[-2**63,2**63-1]
for q in [0,1,2,32767,2**31,2**47-1]:
    for d in [-1,0,1,16383,16384,16385,32767]:
        for sign in [-1,1]:
            v=sign*(q*32768+d)
            if -2**63<=v<2**63:values.append(v)
values.extend(random.randrange(-2**63,2**63) for _ in range(200000))
for v in values:
    actual=c(v);base=b(v,32768);a=abs(v);q,r=divmod(a,32768);oracle=(q+(r>16384 or (r==16384 and q%2==1)))*(-1 if v<0 else 1)
    count+=1
    if actual!=base or actual!=oracle:bad.append({'n':v,'baseline':base,'actual':actual,'oracle':oracle})
result={'scope':'host C component equivalence only; no target execution/performance/formal claim','samples':count,'failures':bad,'source_sha256':hashlib.sha256(source.encode()).hexdigest(),'seed':20261029}
(out/'result.json').write_text(json.dumps(result,indent=2));print(json.dumps({'samples':count,'failures':len(bad)}));raise SystemExit(bool(bad))
