from pathlib import Path
import hashlib,json,os,re,signal,subprocess,sys,time,shutil
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';out=R/'8-本轮实验'/('sqrt3-vortex-'+str(time.time_ns()));out.mkdir(parents=True)
image=R/'8-本轮实验/nano-baseline-1793256277077000207/image';env=dict(os.environ,PATH=str(R/'9-GPU复现/tools/llvm-vortex/bin')+':'+os.environ.get('PATH',''),HIP_CLANG_PATH=str(R/'9-GPU复现/tools/llvm-vortex/bin'),MAKEFLAGS='-j2',THREADS='2',CUDA_VISIBLE_DEVICES='',HIP_VISIBLE_DEVICES='',CHIP_BE='opencl');py=S/'.venv/bin/python';state={'question':'根号3等于几?','backend':'vortex-simx','performance_eligible':False,'image':str(image),'image_sha256':hashlib.sha256((image/'image.bin').read_bytes()).hexdigest(),'stages':[]}
source_image=image;image=out/'image';shutil.copytree(source_image,image)
manifest=json.loads((image/'manifest.json').read_text());manifest['size_bytes']=(image/'image.bin').stat().st_size;(image/'manifest.json').write_text(json.dumps(manifest,indent=2));state['gpu_image']=str(image)
def run(stage,cmd,cwd,timeout=600):
    (out/'status.json').write_text(json.dumps({**state,'stage':stage,'status':'RUNNING'},ensure_ascii=False,indent=2))
    with (out/(stage+'.log')).open('w') as log:
        p=subprocess.Popen([str(x) for x in cmd],cwd=cwd,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
        try:code=p.wait(timeout=timeout)
        except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(stage+' timeout')
    state['stages'].append({'stage':stage,'exit_code':code})
    if code:raise RuntimeError(stage+' failed: '+str(code))
try:
    run('prepare',[py,S/'scripts/prepare_student_mini_native_gpu.py','--image-dir',image],S)
    work=Path(json.loads((out/'prepare.log').read_text().strip().splitlines()[-1])['work']);state['work']=str(work);build=work/'vortex-build';build.mkdir()
    run('configure',['bash',R/'9-GPU复现/vortex/configure','--xlen=32','--tooldir='+str(R/'9-GPU复现/tools'),'--osversion=ubuntu/focal','--prefix='+str(work/'install')],build)
    flags='-DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD'
    run('kernel',['make','-j2','-C',build/'sw/kernel','CONFIGS='+flags,'THREADS=2'],work)
    run('compile',['make','-j2','-C',work,'all','THREADS=2'],work)
    run('execute',['make','-j2','-C',work,'run-simx','THREADS=2','OPTS='+str(image/'image.bin')],work,900)
    log=(out/'execute.log').read_text(errors='replace');tokens=[int(x) for x in re.findall(r'STUDENT_NATIVE_TOKEN step=\d+ token=(\d+)',log)];summary=re.findall(r'STUDENT_NATIVE_GPU status=(\d+) count=(\d+)',log)
    if len(summary)!=1 or int(summary[0][0])!=0 or int(summary[0][1])!=len(tokens) or 'STUDENT_NATIVE_GPU_COMPLETE ' not in log:raise ValueError('incomplete target transcript')
    state.update(status='TARGET_EXECUTED',tokens=tokens)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));raise SystemExit(state['status']!='TARGET_EXECUTED')