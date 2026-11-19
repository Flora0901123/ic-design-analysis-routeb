from pathlib import Path
import json,subprocess,sys,os,time,re,hashlib,signal,shutil
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path[:0]=[str(S),str(S/'shared/python')]
from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime
from scripts.export_student_mini_native_image import pack,header
O=R/'8-本轮实验/Nano冻结问题GPU目标-20261108';O.mkdir(exist_ok=True);ck=next((R/'8-本轮实验/历史原始证据归档/native-nano').glob('*/ptq.npz'));tokenizer=json.loads((ck.parent/'inputs.json').read_text())['tokenizer'];card=json.loads((S.parent/'data/nano/model-card.json').read_text());digest=hashlib.sha256(ck.read_bytes()).hexdigest();assert digest==card['deployment']['quantized_sha256'];rt=MiniNanoRuntime.from_npz(ck);sessions=json.loads((S.parent/'data/nano/sessions.json').read_text())['gpu']['sessions'];old=json.loads((R/'8-本轮实验/sqrt3-vortex-1793256475787480420/status.json').read_text());common=Path(old['work'])/'vortex-build';assert common.exists();tools=R/'9-GPU复现/tools';env=dict(os.environ,PATH=str(tools/'llvm-vortex/bin')+':'+os.environ.get('PATH',''),HIP_CLANG_PATH=str(tools/'llvm-vortex/bin'),MAKEFLAGS='-j1',THREADS='1',CUDA_VISIBLE_DEVICES='',HIP_VISIBLE_DEVICES='',CHIP_BE='opencl');state={'status':'RUNNING','backend':'Vortex-SimX','performance_eligible':False,'checkpoint_sha256':digest,'scope':'12 frozen questions, real target full-model generation; no expected tokens in device image or host launcher','records':[]};t=time.monotonic()
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():state['elapsed_seconds']=time.monotonic()-t;state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
def run(f,cmd,cwd,timeout=600):
 with f.open('w') as log:
  p=subprocess.Popen([str(x) for x in cmd],cwd=cwd,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=timeout)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
 assert code==0,('process failed',str(f),code)
 return f.read_text(errors='replace')
try:
 for index,case in enumerate(sessions):
  q=O/f'{index:02d}';q.mkdir(exist_ok=False);image=q/'image';image.mkdir();blob,m=pack(rt,tokenizer,case['question']);(image/'image.bin').write_bytes(blob);(image/'student_mini_native_image.h').write_text(header(m));m.update(contains_expected_tokens=False,image_sha256=sha(image/'image.bin'),checkpoint_sha256=digest,size_bytes=len(blob));(image/'manifest.json').write_text(json.dumps(m,indent=2))
  assert sha(S/'software/student_mini_native_nano.c')=='3d45d0a4587ebcc0489f97835dd874781648d9c4561bbe0e044ad8e197cbd1e6','baseline source changed'
  text=run(q/'prepare.log',[sys.executable,S/'scripts/prepare_student_mini_native_gpu.py','--image-dir',image],S);W=Path(json.loads(text.strip().splitlines()[-1])['work']);mf=W/'Makefile';s=mf.read_text();old=f'VORTEX_BUILD := {W}/vortex-build';assert s.count(old)==1;mf.write_text(s.replace(old,f'VORTEX_BUILD := {common}'));(q/'work.json').write_text(json.dumps({'work':str(W),'runtime_build':str(common),'source_sha256':sha(W/'native_nano.cu')},indent=2))
  run(q/'compile.log',['make','-j1','-C',W,'all','THREADS=1'],W)
  text=run(q/'execute.log',['make','-j1','-C',W,'run-simx','THREADS=1','OPTS='+str(image/'image.bin')],W,900)
  tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+)',text);summary=re.findall(r'STUDENT_NATIVE_GPU status=(\d+) count=(\d+)',text);actual=[int(x[1]) for x in tokens];assert len(summary)==1 and summary[0]==('0',str(len(actual))) and 'STUDENT_NATIVE_GPU_COMPLETE ' in text and [int(x[0]) for x in tokens]==list(range(len(actual))) and actual==case['expected_tokens'],'target frozen reply mismatch'
  state['records'].append({'index':index,'question':case['question'],'domain':case['domain'],'tokens':actual,'expected_tokens':case['expected_tokens'],'expected_text':case['expected_text'],'pass':True,'work':str(W),'image_sha256':sha(image/'image.bin'),'executable_sha256':sha(W/'native_nano'),'log_sha256':sha(q/'execute.log')});save();print(json.dumps({'GPU_frozen_passed':len(state['records']),'question':case['question']},ensure_ascii=False),flush=True)
 state['status']='FROZEN_GPU_SIMX_12_PASS'
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k!='records'},ensure_ascii=False,indent=2))
