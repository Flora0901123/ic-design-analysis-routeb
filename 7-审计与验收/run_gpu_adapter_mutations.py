from pathlib import Path
import subprocess,json,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources/integration/student-mini';O=R/'8-本轮实验/GPU适配器突变-20261105';O.mkdir(exist_ok=True);tb=R/'8-本轮实验/GPU适配器协议-20261105/tb.sv'
files={n:(S/n).read_text() for n in ['gpu_fault_memory_adapter.sv','gpu_status_command_adapter.sv']}
mut=[('request-address','gpu_fault_memory_adapter.sv','req_addr_q <= vx_req_addr_i;','req_addr_q <= vx_req_addr_i ^ 1;'),('request-data','gpu_fault_memory_adapter.sv','req_data_q <= vx_req_data_i;','req_data_q <= vx_req_data_i ^ 1;'),('request-mask','gpu_fault_memory_adapter.sv','req_byteen_q <= vx_req_byteen_i;','req_byteen_q <= vx_req_byteen_i ^ 1;'),('response-tag','gpu_fault_memory_adapter.sv','rsp_tag_q <= mem_rsp_tag_i;','rsp_tag_q <= mem_rsp_tag_i ^ 1;'),('busy-start','gpu_status_command_adapter.sv','(host_cmd_kind_i != CMD_START || !busy_i)',"1'b1"),('unstable-response','gpu_status_command_adapter.sv','host_rsp_valid_o = state_q == RESP;','host_rsp_valid_o = state_q == RESP && host_rsp_ready_i;'),('missing-fault','gpu_fault_memory_adapter.sv',"fault_q <= 1'b1;","fault_q <= 1'b0;"),('reset-not-flushed','gpu_fault_memory_adapter.sv',"req_valid_q <= 1'b0;","req_valid_q <= 1'b1;")]
state={'status':'RUNNING','scope':'dynamic adapter RTL regression and test sensitivity, not formal proof or whole-GPU qualification','records':[]}
try:
 for tag in ['baseline',*[x[0] for x in mut]]:
  f=O/tag;f.mkdir(exist_ok=True);sources=dict(files)
  if tag!='baseline':
   _,name,old,new=next(x for x in mut if x[0]==tag);assert sources[name].count(old)==1;sources[name]=sources[name].replace(old,new)
  for name,text in sources.items():(f/name).write_text(text)
  with (f/'compile.log').open('w') as log:p=subprocess.run(['iverilog','-g2012','-s','tb','-o',str(f/'sim.vvp'),str(tb),*[str(f/n) for n in sources]],stdout=log,stderr=subprocess.STDOUT,timeout=60)
  assert p.returncode==0,tag+' compile'
  with (f/'transcript.log').open('w') as log:p=subprocess.run(['vvp',str(f/'sim.vvp')],stdout=log,stderr=subprocess.STDOUT,timeout=60)
  text=(f/'transcript.log').read_text();ok=(p.returncode==0 and 'ADAPTER_COMPLETE cases=120' in text) if tag=='baseline' else (p.returncode!=0 and 'FATAL:' in text)
  state['records'].append({'name':tag,'accepted':ok,'exit_code':p.returncode,'outcome':'baseline passes' if tag=='baseline' and ok else 'mutation caught by assertion' if ok else 'unexpected','transcript_sha256':hashlib.sha256((f/'transcript.log').read_bytes()).hexdigest()});assert ok,tag
 state.update(status='ADAPTER_MUTATION_REGRESSION_PASS',mutations_caught=8)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
