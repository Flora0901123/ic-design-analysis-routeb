from pathlib import Path
import json,hashlib,os,subprocess,time,re,sys,signal,difflib
from qualification_resource_guard import prepare,join,snapshot
from restore_locked_host_cache import restore
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU锁定硬件四组候选-20261109';B=json.loads((O/'build.json').read_text());assert B['status']=='FOUR_LOCKED_HARDWARE_APPS_BUILT_NOT_QUALIFIED';T=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(T['work']);MC=R/'8-本轮实验/GPU单轮多类计数运行库-20261108';assert json.loads((MC/'completion.json').read_text())['status']=='POST_KERNEL_MULTICLASS_4_CONTROL_SEALED';L=MC/'runtime';sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();cache_dir=R/'8-本轮实验/GPU锁定编译器内存缓存-20261108';C=restore(json.loads((cache_dir/'cache.json').read_text()),cache_dir)
S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
G=[json.loads(s) for s in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];meta=json.loads((W/'build.json').read_text());old='/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付';inputs=meta['input_directory'].replace(old,str(R));cmd0=(W/'run-command.sh').read_text().replace(old,str(R)).replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(C)+':'+str(L)+':',1);P=O/'routed-controls';P.mkdir(exist_ok=True)
bindings={str(Path(p)):h for p,h in T['new_bindings'].items()};bindings[str(R/'7-审计与验收/route_locked_gpu_candidate.py')]=sha(R/'7-审计与验收/route_locked_gpu_candidate.py')
for row in B['records']:
 d=Path(row['work']);assert sha(d/'student_mini')==row['executable_sha256'] and sha(d/'student_mini.cu')==row['source_sha256'];bindings[str(d/'student_mini')]=row['executable_sha256'];bindings[str(d/'student_mini.cu')]=row['source_sha256'];parent=O/('topk' if row['variant']=='combined' else 'baseline')/'student_mini.cu';row['direct_parent_source_sha256']=sha(parent);(d/'direct-parent.diff').write_text(''.join(difflib.unified_diff(parent.read_text().splitlines(True),(d/'student_mini.cu').read_text().splitlines(True),fromfile=row['direct_parent'],tofile=row['variant'])))
for name in ['libvortex.so','librtlsim.so','libvortex-rtlsim.so']:bindings[str(L/name)]=sha(L/name)
state={'status':'RUNNING','formal_performance_board':False,'formal_promotion':'HOLD','tool':'same Verilator 5.040 production model','selected_ordinals':[0,100,330,660],'seeds':[1],'records':[],'bindings':bindings,'software_lineage':B['records']};start=time.monotonic()
def save():state['elapsed_seconds']=time.monotonic()-start;state['resources']=snapshot();tmp=O/'routed-control-status.tmp';tmp.write_text(json.dumps(state,ensure_ascii=False,indent=2));os.replace(tmp,O/'routed-control-status.json')
try:
 for i in state['selected_ordinals']:
  for variant in ['topk','combined']:
   work=O/variant;f=P/f'{variant}-{i:04d}.log';assert not f.exists();cwd=P/f'{variant}-{i:04d}-work';cwd.mkdir();cmd=cmd0.replace('@OPTS@',f'{inputs}/inputs.bin {i} 1').replace('./student_mini',__import__('shlex').join([sys.executable,str(R/'7-审计与验收/route_locked_gpu_candidate.py'),variant]));t=time.monotonic()
   with f.open('w') as log:
    child=subprocess.Popen(['bash','-c',cmd],cwd=cwd,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180',ROUTEB_MULTI_PERF='1'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
    try:code=child.wait(timeout=300)
    except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();raise RuntimeError('probe timed out')
   assert code==0,(variant,i,code);text=f.read_text();lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and f'STUDENT_GPU_COMPLETE start={i} count=1' in text;a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];g=G[i]['golden'];assert a['actual_bits']==g['output_bits'] and a['actual_status']==g['expected_status']
   if G[i]['case']['operator']=='p1':assert a['selected']==[t for ids in g['selected_token_ids'] for t in ids]
   blocks=re.findall(r'ROUTEB_PERF_CLASS_BEGIN group=(\d+)\n(.*?)ROUTEB_PERF_CLASS_END group=\1 code=0',text,re.S);assert [x[0] for x in blocks]==['0','4','7'];perf=[re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',body,re.M) for group,body in blocks];assert len(perf[0])==1 and all(x==perf[0] for x in perf)
   if False:
    parent=R/'8-本轮实验/GPU同硬件全1000-20261108'/f'{i:04d}.log'
    if not parent.exists():parent=R/'9-GPU复现/整机DMA重建/whole-gpu-runs'/f'{i:04d}.log'
    assert perf[0]==re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',parent.read_text(),re.M),'baseline relocation changed target counts'
   original=json.loads((O/'control-status.json').read_text());selected='topk' if variant=='topk' and i in [0,100] else 'combined' if variant=='combined' and i in [0,100] else 'rne' if variant=='combined' and i==330 else 'baseline';expected=next(x for x in original['records'] if x['ordinal']==i and x['variant']==selected)
   assert f'ROUTEB_DISPATCH requested={variant} op={G[i]["case"]["operator"][1:]} selected={selected} reason=operator-only-no-oracle' in text;assert (int(perf[0][0][0]),int(perf[0][0][1]))==(expected['instructions'],expected['cycles']),'dispatched path changed target work'
   reads=len(re.findall(r'^DMA_REQ .*write=0 ',text,re.M));writes=len(re.findall(r'^DMA_REQ .*write=1 ',text,re.M));mem=re.findall(r'PERF: memory: reqs=(\d+) \(r=(\d+), w=(\d+)\)',text);assert len(mem)==1 and tuple(map(int,mem[0]))==(reads+writes,reads,writes);mask_bytes=sum(int(h,16).bit_count() for h in re.findall(r'^DMA_REQ .*write=1 .*mask=([0-9a-f]+)',text,re.M))
   state['records'].append({'variant':variant,'ordinal':i,'case_id':G[i]['case']['id'],'seed':G[i]['seed'],'golden_match':True,'instructions':int(perf[0][0][0]),'cycles':int(perf[0][0][1]),'external_read_beats':reads,'external_write_beats':writes,'external_512bit_beat_bytes':64*(reads+writes),'write_byte_enable_bytes':mask_bytes,'memory_counters_equal_handshakes':True,'raw_class_reports':dict(blocks),'seconds':time.monotonic()-t,'log_sha256':sha(f)});save();print({'passed':len(state['records']),'variant':variant,'ordinal':i},flush=True)
 assert all(sha(Path(p))==h for p,h in bindings.items());state.update(status='OPERATOR_DISPATCH_8_CONTROL_PASS',scope='P1 optimized; pure TopK P2/P3 baseline; combined P2 RNE and P3 baseline; descriptor-only routing')
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','bindings','resources','software_lineage','comparisons']},indent=2))