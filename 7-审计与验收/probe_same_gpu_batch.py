from pathlib import Path
import sys,json,os,subprocess,time,hashlib,re
from qualification_resource_guard import prepare,join
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
D=R/'9-GPU复现/整机DMA重建';t=json.loads((D/'trace-build/completion.json').read_text());W=Path(t['work']);B=json.loads((W/'build.json').read_text());O=R/'8-本轮实验/GPU同硬件批量调度探针-20261108';O.mkdir(exist_ok=True);gold=[json.loads(x) for x in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];rows=[]
for start,count in [(0,10),(660,10)]:
 assert all(hashlib.sha256(Path(p).read_bytes()).hexdigest()==h for p,h in t['new_bindings'].items())
 cmd=(W/'run-command.sh').read_text().replace('@OPTS@',f"{B['input_directory']}/inputs.bin {start} {count}").replace('./student_mini',str(W/'student_mini'));f=O/f'{start:04d}-{count}.log';begin=time.monotonic()
 with f.open('w') as log:code=subprocess.call(['bash','-c',cmd],cwd=W,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180'),stdout=log,stderr=subprocess.STDOUT)
 assert code==0
 text=f.read_text();lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==count and f'STUDENT_GPU_COMPLETE start={start} count={count}' in text
 normalized='\n'.join(line.replace(f'ordinal={start+j} ',f'ordinal={j} ',1) for j,line in enumerate(lines))+f'\nSTUDENT_GPU_COMPLETE start=0 count={count}\n';actual=parse(normalized,count)
 for j,a in enumerate(actual):
  g=gold[start+j];e=g['golden'];assert a['actual_status']==e['expected_status'] and compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits'])['status']=='PASS'
  if g['case']['operator']=='p1':assert a['selected']==[n for ids in e['selected_token_ids'] for n in ids]
 assert 'STUDENT_GPU_DEVICE_STATUS fault=0 busy=0' in text
 rows.append({'start':start,'count':count,'seconds':time.monotonic()-begin,'match':True,'log_sha256':hashlib.sha256(f.read_bytes()).hexdigest()});print(rows[-1],flush=True)
(O/'completion.json').write_text(json.dumps({'status':'SAME_BINARY_BATCH_NUMERIC_PROBE_PASS','bindings':t['new_bindings'],'rows':rows,'cycle_scope':'batch only, not per-case performance evidence'},indent=2))
