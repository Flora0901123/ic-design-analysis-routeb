from pathlib import Path
import json,os,re,signal,subprocess,time
R=Path(__file__).resolve().parents[1];out=R/'8-本轮实验/sqrt3-vortex-1793256475787480420';state=json.loads((out/'status.json').read_text());work=Path(state['work']);image=Path(state['gpu_image']);tools=R/'9-GPU复现/tools';env=dict(os.environ,PATH=str(tools/'llvm-vortex/bin')+':'+os.environ.get('PATH',''),HIP_CLANG_PATH=str(tools/'llvm-vortex/bin'),MAKEFLAGS='-j2',THREADS='2',CUDA_VISIBLE_DEVICES='',HIP_VISIBLE_DEVICES='',CHIP_BE='opencl');name='execute-resumed-'+str(time.time_ns())+'.log';state.update(status='RUNNING',stage='execute-resumed',latest_log=name);(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
if state.get('error'):
    state.setdefault('previous_errors',[]).append(state.pop('error'))
try:
    with (out/name).open('w') as log:
        p=subprocess.Popen(['make','-j2','-C',str(work),'run-simx','THREADS=2','OPTS='+str(image/'image.bin')],cwd=work,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
        try:code=p.wait(timeout=3600)
        except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('GPU resume timeout')
    text=(out/name).read_text(errors='replace');tokens=[int(x) for x in re.findall(r'STUDENT_NATIVE_TOKEN step=\d+ token=(\d+)',text)];matches=re.findall(r'STUDENT_NATIVE_GPU status=(\d+) count=(\d+)',text)
    if code:raise RuntimeError('run-simx exit '+str(code))
    if len(matches)!=1 or int(matches[0][0])!=0 or int(matches[0][1])!=len(tokens) or 'STUDENT_NATIVE_GPU_COMPLETE ' not in text:raise ValueError('missing target completion')
    state.update(status='TARGET_EXECUTED',tokens=tokens,stage='complete')
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps(state,ensure_ascii=False,indent=2));raise SystemExit(state['status']!='TARGET_EXECUTED')