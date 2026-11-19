from pathlib import Path
import json,subprocess,sys,hashlib,os
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.run_student_mini_gpu_adapter_formal import MUTATIONS,mutate
O=R/'8-本轮实验/GPU适配器SAT-20261105';O.mkdir(exist_ok=True);names=['shared/rtl/vortex_command_adapter.sv','shared/rtl/vortex_memory_adapter.sv','shared/formal/student_mini_gpu_adapters_harness.sv'];original={Path(x).name:(S/x).read_text() for x in names};state={'status':'RUNNING','scope':'32-step bounded safety of generic adapters, not whole GPU or fault extension; no unbounded equivalence claim','tools':subprocess.check_output(['yosys','-V'],text=True).strip(),'records':[]}
try:
 for tag in ['baseline',*[x[0] for x in MUTATIONS]]:
  f=O/tag;f.mkdir(exist_ok=True);files=original if tag=='baseline' else mutate(original,tag)
  for name,text in files.items():(f/name).write_text(text)
  script='read -formal -sv '+' '.join(files)+'; prep -top student_mini_gpu_adapters_harness -flatten; chformal -cover -remove; opt_clean; sat -seq 32 -prove-asserts -set-assumes -verify -timeout 120'
  with (f/'sat.log').open('w') as log:p=subprocess.run(['yosys','-p',script],cwd=f,stdout=log,stderr=subprocess.STDOUT,timeout=150)
  text=(f/'sat.log').read_text();expected='no model found: SUCCESS!' if tag=='baseline' else 'model found: FAIL!';assert expected in text,tag+' missing proof/counterexample'
  state['records'].append({'name':tag,'result':'PASS' if tag=='baseline' else 'COUNTEREXAMPLE_FOUND','expected_result_met':True,'exit_code':p.returncode,'sha256':hashlib.sha256((f/'sat.log').read_bytes()).hexdigest()});(O/'completion.json').write_text(json.dumps(state,indent=2));print(tag,'expected result obtained',flush=True)
 state.update(status='BOUNDED_SAFETY_PASS',depth=32,mutations_killed=8,baseline_proof_pass=True)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
