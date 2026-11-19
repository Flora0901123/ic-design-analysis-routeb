from pathlib import Path
import subprocess,json,hashlib,time
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU锁定版适配器-20261107'
p=subprocess.run(['bash','-c','source "$1" && command -v verilator && verilator --version','routeb-env',str(R/'9-GPU复现/锁定环境.sh')],capture_output=True,text=True,timeout=30)
(O/'activation.log').write_text(p.stdout+p.stderr);assert p.returncode==0 and p.stdout.count('Verilator 5.040')==2
state={'status':'LOCAL_CHECKS_PASS_WHOLE_GPU_HOLD','version_alignment':'COURSE_VERSION_MATCH_LOCAL_SOURCE_BUILD','identical_teacher_tool_binary':False,'whole_gpu_eligible':False,'activation_exit_code':p.returncode,'checks':{},'bindings':{}}
paths={'locked_tool':'9-GPU复现/locked-verilator-5.040/status.json','locked_adapter':'8-本轮实验/GPU锁定版适配器-20261107/status.json','local_induction':'8-本轮实验/GPU适配器局部契约-20261107/completion.json','mutation':'8-本轮实验/GPU适配器突变-20261107/completion.json','whole_dma_preflight':'8-本轮实验/GPU整机DMA预检-20261107/completion.json','physical_audit':'8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'}
for name,path in paths.items():
 q=R/path;d=json.loads(q.read_text());state['checks'][name]={'status':d['status'],'source':path};state['bindings'][path]=hashlib.sha256(q.read_bytes()).hexdigest()
assert state['checks']['locked_tool']['status']=='INSTALLED'
a=json.loads((R/paths['locked_adapter']).read_text());assert a['status']=='ADAPTER_RTL_PASS' and a['cases']==120
assert all(x['result']=='INDUCTIVE_LOCAL_SAFETY_PASS' for x in json.loads((R/paths['local_induction']).read_text())['records'])
assert json.loads((R/paths['mutation']).read_text())['mutations_caught']==8
# Current source must match every fresh accepting verification, not just similarly named files.
for path in [paths['locked_adapter'],paths['local_induction'],paths['mutation']]:
 d=json.loads((R/path).read_text());blocks=d['records'] if path==paths['local_induction'] else [d]
 for block in blocks:
  for path2,sha in block['bindings'].items():assert Path(path2).is_file() and hashlib.sha256(Path(path2).read_bytes()).hexdigest()==sha
for name,sha in a['tool_bindings'].items():assert hashlib.sha256((R/'9-GPU复现/tools/verilator-5.040/bin'/name).read_bytes()).hexdigest()==sha
state['interpretation']='120 adapter probes and local inductive safety are passed; 30 whole-platform DMA rows remain NOT_EXECUTED; mapped identity remains not established.'
(R/'8-本轮实验/GPU来源与锁定环境-20261105/acceptance-20261107.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps(state,ensure_ascii=False,indent=2))
