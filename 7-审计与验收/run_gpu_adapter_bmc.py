from pathlib import Path
import subprocess,json,sys,time,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.run_student_mini_gpu_adapter_formal import MUTATIONS,mutate
O=R/'8-本轮实验/GPU适配器形式验证-20261105';O.mkdir(exist_ok=True);names=['shared/rtl/vortex_command_adapter.sv','shared/rtl/vortex_memory_adapter.sv','shared/formal/student_mini_gpu_adapters_harness.sv'];original={Path(x).name:(S/x).read_text() for x in names};state={'status':'RUNNING','scope':'generic command/memory skid adapters only; excludes Vortex core, fault extension and external DRAM','depth':32,'ports':2,'data_width':512,'address_width':26,'tag_width':10,'tools':{'yosys':subprocess.check_output(['yosys','-V'],text=True).strip(),'z3':subprocess.check_output(['z3','--version'],text=True).strip()},'bindings':{x:hashlib.sha256((S/x).read_bytes()).hexdigest() for x in names},'records':[]};(O/'completion.json').write_text(json.dumps(state,indent=2))
try:
 for tag in ['baseline',*[x[0] for x in MUTATIONS]]:
  folder=O/tag;folder.mkdir(exist_ok=True);files=original if tag=='baseline' else mutate(original,tag)
  for n,t in files.items():(folder/n).write_text(t)
  script='read -formal -sv '+' '.join(files)+'; prep -top student_mini_gpu_adapters_harness; delete t:$print; write_smt2 -wires model.smt2'
  with (folder/'yosys.log').open('w') as f:r=subprocess.run(['yosys','-p',script],cwd=folder,stdout=f,stderr=subprocess.STDOUT,timeout=120)
  assert r.returncode==0,'yosys '+tag
  for mode in (['bmc','cover'] if tag=='baseline' else ['bmc']):
   cmd=['yosys-smtbmc','-s','z3','-t','32','--noprogress']+(['-c'] if mode=='cover' else [])+['model.smt2']
   with (folder/(mode+'.log')).open('w') as f:r=subprocess.run(cmd,cwd=folder,stdout=f,stderr=subprocess.STDOUT,timeout=180)
   t=(folder/(mode+'.log')).read_text();expected='PASSED' if tag=='baseline' else 'FAILED';assert ('Status: '+expected) in t,tag+' '+mode
   state['records'].append({'name':tag,'mode':mode,'expected':expected,'exit_code':r.returncode,'accepted':True});(O/'completion.json').write_text(json.dumps(state,indent=2));print(tag,mode,expected,flush=True)
 state.update(status='BOUNDED_ADAPTER_PROTOCOL_PASS',baseline_safety=True,cover=True,mutations_killed=8)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
