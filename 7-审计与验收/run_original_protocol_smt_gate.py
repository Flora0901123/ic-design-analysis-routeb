from pathlib import Path
import json,subprocess,os,time,signal,hashlib,sys,shutil
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.run_student_mini_gpu_adapter_formal import MUTATIONS,mutate
O=R/'8-本轮实验/GPU原协议门-20261108/smt32';O.mkdir(parents=True,exist_ok=True)
C=Path('/root/.cache/routeb-original-protocol-smt32');C.mkdir(exist_ok=True)
names=['shared/rtl/vortex_command_adapter.sv','shared/rtl/vortex_memory_adapter.sv','shared/formal/student_mini_gpu_adapters_harness.sv'];original={Path(x).name:(S/x).read_text() for x in names}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
state={'status':'RUNNING','depth':32,'ports':2,'data_width':512,'address_width':26,'tag_width':10,'formal_baseline':False,'partition_method':'Disjoint original command/memory assertion blocks, all reset and producer-stability assumptions retained; shared reset remains arbitrary with identical initial-reset assumption in each partition. Both physical port indices checked independently.', 'scope':'Original generic command and memory adapters only; not Vortex core, actual fault adapters, DMA replay or physical signoff','bindings':{x:sha(S/x) for x in names},'tool_versions':{x:subprocess.check_output(c,text=True).strip() for x,c in [('yosys',['yosys','-V']),('z3',['z3','--version'])]},'records':[]};start=time.monotonic()
def save():
 state['elapsed_seconds']=time.monotonic()-start;(O/'completion.json').write_text(json.dumps(state,indent=2))
def run(tag,stage,cmd,timeout=180):
 d=C/tag;d.mkdir(exist_ok=True);out=O/tag;out.mkdir(exist_ok=True);t=time.monotonic()
 with (out/(stage+'.log')).open('w') as log:
  p=subprocess.Popen(cmd,cwd=d,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=timeout)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
 text=(out/(stage+'.log')).read_text(errors='replace');r={'name':tag,'stage':stage,'exit_code':code,'seconds':time.monotonic()-t,'log_sha256':sha(out/(stage+'.log'))};state['records'].append(r);save();return code,text
try:
 jobs=[('baseline',x) for x in ['command','memory0','memory1']]+[(x[0], 'memory0' if x[1]=='vortex_memory_adapter.sv' else 'command') for x in MUTATIONS]
 for original_tag,partition in jobs:
  tag=original_tag+'-'+partition
  d=C/tag;d.mkdir(exist_ok=True);out=O/tag;out.mkdir(exist_ok=True);files=dict(original) if original_tag=='baseline' else mutate(original,original_tag)
  h=files['student_mini_gpu_adapters_harness.sv']; marker='  for(genvar port=0;'
  if partition=='command':h=h.split(marker)[0]+'endmodule\n';files.pop('vortex_memory_adapter.sv')
  else:
   h=h[:h.index('  (* anyseq *) reg host_valid')]+'  always @(posedge clk) begin past_valid<=1; if(!past_valid) assume(!rst_n); end\n'+marker+h.split(marker)[1]
   h=h.replace('port=0;port<2','port=0;port<1' if partition=='memory0' else 'port=1;port<2');files.pop('vortex_command_adapter.sv')
  files['student_mini_gpu_adapters_harness.sv']=h
  for n,s in files.items():(d/n).write_text(s);(out/n).write_text(s)
  script='read -formal -sv '+' '.join(files)+'; prep -top student_mini_gpu_adapters_harness -flatten; formalff -clk2ff; opt -keepdc; dffunmap; write_smt2 -wires model.smt2'
  (out/'prepare.ys').write_text(script)
  code,text=run(tag,'prepare',['yosys','-Q','-p',script]);assert code==0,'prepare '+tag
  bound='4' if original_tag=='baseline' and partition.startswith('memory') else '32'
  code,text=run(tag,'bmc',['yosys-smtbmc','-s','z3','-t',bound,'--timeout','150','--dump-vcd','counterexample.vcd','model.smt2'],180)
  expected='PASSED' if original_tag=='baseline' else 'FAILED';assert code==(0 if original_tag=='baseline' else 1) and 'Status: '+expected in text,tag+' safety/mutation expectation not met'
  if (d/'counterexample.vcd').exists():shutil.copy2(d/'counterexample.vcd',out/'counterexample.vcd')
  if original_tag=='baseline':
   if partition.startswith('memory'):
    code,text=run(tag,'induction',['yosys-smtbmc','-s','z3','-i','-t','4','--timeout','60','model.smt2'],90)
    assert code==0 and 'Temporal induction successful.' in text and 'Status: PASSED' in text,'memory induction failed'
   code,text=run(tag,'cover',['yosys-smtbmc','-s','z3','-c','-t','32','--timeout','150','--dump-vcd','cover%.vcd','model.smt2'],180)
   assert code==0 and 'Status: PASSED' in text,'coverage failed'
   reached=text.count('Reached cover statement');assert reached==4,('expected 4 original covers per partition',reached)
   state['covers_reached']=state.get('covers_reached',0)+reached
   for f in d.glob('cover*.vcd'):shutil.copy2(f,out/f.name)
  print(tag+' accepted',flush=True)
 assert all(sha(S/x)==h for x,h in state['bindings'].items())
 state.update(status='ADAPTER_PROTOCOL_STAGE_PASS',baseline_32_step_safety_pass=True, proof_method='Command: explicit 32-step BMC. Each full-width memory port: initial four-step BMC plus successful temporal induction (unbounded), entails all 32 steps. All original covers reachable within 32 steps.',mutations_killed=8,physical_signoff=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();state['artifacts']={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name!='completion.json'};save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','artifacts']},indent=2))
