from pathlib import Path
import json,hashlib,re,subprocess,time,os,sys,concurrent.futures
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU并行独立回归探针-20261108';O.mkdir(exist_ok=True);T=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(T['work']);C=Path('/dev/shm/routeb-llvm-libs-20261108');cache=json.loads((R/'8-本轮实验/GPU锁定编译器内存缓存-20261108/cache.json').read_text());sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert all(sha(C/x['name'])==x['sha256'] for x in cache['records']);assert all(sha(Path(p))==h for p,h in T['new_bindings'].items())
S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
meta=json.loads((W/'build.json').read_text());inputs=meta['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));cmd0=(W/'run-command.sh').read_text().replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(C)+':',1)
G=[json.loads(s) for s in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()]
def run(i):
 f=O/f'{i:04d}.log';assert not f.exists();cwd=O/f'work-{i:04d}';cwd.mkdir();cmd=cmd0.replace('@OPTS@',f'{inputs}/inputs.bin {i} 1').replace('./student_mini',str(W/'student_mini'));start=time.monotonic()
 with f.open('w') as log:p=subprocess.run(['bash','-c',cmd],cwd=cwd,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120'),stdout=log,stderr=subprocess.STDOUT,timeout=180)
 assert p.returncode==0;text=f.read_text();lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and f'STUDENT_GPU_COMPLETE start={i} count=1' in text;a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];g=G[i]['golden'];assert a['actual_bits']==g['output_bits'] and a['actual_status']==g['expected_status']
 if G[i]['case']['operator']=='p1':assert a['selected']==[t for ids in g['selected_token_ids'] for t in ids]
 parent=R/('8-本轮实验/GPU同硬件全1000-20261108' if i==0 else '9-GPU复现/整机DMA重建/whole-gpu-runs')/f'{i:04d}.log';perf=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert perf==re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',parent.read_text(),re.M)
 return {'ordinal':i,'numeric_match':True,'target_counts_identical':True,'seconds':time.monotonic()-start,'log_sha256':sha(f),'cwd':str(cwd)}
state={'status':'RUNNING','bindings':T['new_bindings'],'workers':2,'isolated_working_directories':True}
try:
 start=time.monotonic()
 with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:state['records']=list(pool.map(run,[0,660]))
 state.update(status='TWO_INDEPENDENT_PROCESSES_CONTROL_PASS',seconds=time.monotonic()-start)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
state['resources']=snapshot();(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps({k:v for k,v in state.items() if k!='resources'},indent=2))