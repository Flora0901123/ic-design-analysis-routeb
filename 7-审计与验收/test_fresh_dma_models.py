from pathlib import Path
import json,random,subprocess,time,hashlib
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';m=json.loads((O/'staged-openram-banked-manifest.json').read_text());records=[]
for row in m['macros']:
 n=row['macro_name'];w,d,mask=[row[k] for k in ['data_width','depth','write_enable_width']];aw=(d-1).bit_length();f=O/'model-tests'/n;f.mkdir(parents=True,exist_ok=True);ref=[0]*d;r=random.Random(341);calls=[];last=0
 for i in range(d+200):
  a=i if i<d else r.randrange(d);b=a if i<d or i%2 else r.randrange(d);data=0 if i<d else r.getrandbits(w);wm=(1<<mask)-1 if i<d or mask==1 else r.getrandbits(mask);cs=0 if i<d else int(i%7==0);rs=0 if i<d else int(i%5==0)
  if not cs:
   for k in range(mask):
    if wm>>k&1:bits=((1<<(w//mask))-1)<<(k*(w//mask));ref[a]=(ref[a]&~bits)|(data&bits)
  if not rs:last=ref[b]
  calls.append(f"@(negedge clk);csb0={cs};csb1={rs};a={a};b={b};data={w}'h{data:x};mask={mask}'h{wm:x};@(posedge clk);#1;if(q!=={w}'h{last:x})$fatal(1,\"step {i}\");")
 tb=f'''module tb;reg clk=0;always #5 clk=~clk;reg csb0=1,csb1=1;reg[{aw-1}:0]a,b;reg[{w-1}:0]data;reg[{mask-1}:0]mask;wire[{w-1}:0]q;{n} dut(.clk0(clk),.clk1(clk),.csb0(csb0),.csb1(csb1),.addr0(a),.addr1(b),.din0(data),.dout1(q){',.wmask0(mask)' if mask>1 else ''});initial begin
'''+ '\n'.join(calls)+'\n$display("MODEL_PASS");$finish;end endmodule';(f/'tb.sv').write_text(tb);model=Path(next(iter(row['artifacts'].values()))['path']);t=time.monotonic()
 with (f/'compile.log').open('w') as log:p=subprocess.run(['iverilog','-g2012','-s','tb','-o',str(f/'sim'),str(model),str(f/'tb.sv')],stdout=log,stderr=subprocess.STDOUT);assert p.returncode==0
 with (f/'run.log').open('w') as log:p=subprocess.run(['vvp',str(f/'sim')],stdout=log,stderr=subprocess.STDOUT);assert p.returncode==0
 records.append(dict(name=n,status='PASS',checks=d+200,seconds=time.monotonic()-t,model_sha256=hashlib.sha256(model.read_bytes()).hexdigest()))
(O/'model-tests/completion.json').write_text(json.dumps({'status':'FUNCTIONAL_MODEL_TESTS_PASS','records':records,'physical_qualification':False},indent=2));print(json.dumps(records))

