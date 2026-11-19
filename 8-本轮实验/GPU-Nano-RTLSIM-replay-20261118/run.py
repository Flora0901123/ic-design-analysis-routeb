
from pathlib import Path
import json,hashlib,os,shlex,subprocess,sys,re,time
r=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*')); a=next(r.glob('7-*')); x=next(r.glob('8-*'))
def sha(p):
    with p.open('rb') as f: return hashlib.file_digest(f,'sha256').hexdigest()
old=next(x.glob('GPU-Nano*20261114-v2/status.json'))
before=json.loads(old.read_text())
frozen=next(x.glob('Nano*GPU*20261108/09/image/image.bin'))
exe=next((r/'student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu').glob('1b56ee*/native_nano'))
assert sha(frozen)==before['image_sha256'] and sha(exe)==before['target_exe_sha256']
fixture=x/'GPU\u540c\u786c\u4ef6\u51681000-20261108/replay-source-and-binary'
cmd=shlex.split((fixture/'run-command.sh').read_text())
assignments=cmd[:-2]
assert cmd[-2:]==['./student_mini','@OPTS@']
env_config=dict(s.split('=',1) for s in assignments)
libs=['libvortex.so','libvortex-rtlsim.so','librtlsim.so']
env_config['LD_LIBRARY_PATH']=str(fixture)+':'+env_config['LD_LIBRARY_PATH'].rstrip(':')
env_config.update(VORTEX_CP_POLL_TIMEOUT_S='7200',VORTEX_PROFILING='1')
# Existing comparison binary and image are held fixed. Archive aggregate observations separately.
out=x/'GPU-Nano-RTLSIM-replay-20261118'
receipt={'status':'RUNNING','question':before['question'],'scope':'full-model locked baseline experiment, no per-token timing instrumentation','image_sha256':sha(frozen),'host_sha256':sha(exe),'rtlsim_libs':{n:sha(fixture/n) for n in libs},'physical_signoff':False}
if __name__=='__main__':
    if '--execute' not in sys.argv:
        out.mkdir(exist_ok=False)
        wrapper=out/'run.py'
        wrapper.write_bytes(sys.stdin.buffer.read())
        (out/'inputs.json').write_text(json.dumps(receipt|{'environment':env_config},ensure_ascii=False,indent=2)+'\n')
        with (out/'controller.log').open('wb') as f:
            p=subprocess.Popen([sys.executable,'-u',str(wrapper),'--execute'],stdin=subprocess.DEVNULL,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
        print(p.pid,flush=True)
    else:
        sys.path.insert(0,str(a))
        import qualification_resource_guard as guard
        guard.prepare();guard.join()
        t=time.monotonic()
        with (out/'run.log').open('wb') as log:
            try:
                code=subprocess.run([str(exe),str(frozen)],cwd=exe.parent,env=os.environ|env_config,stdout=log,stderr=subprocess.STDOUT,timeout=7300).returncode
            except subprocess.TimeoutExpired: code='TIMEOUT'
        raw=(out/'run.log').read_text(errors='replace')
        tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+)',raw)
        expected=json.loads((r/'student-mini-v1-cpu-gpu/data/nano/sessions.json').read_text())['gpu']['sessions'][9]['expected_tokens']
        verified=code==0 and [int(p[1]) for p in tokens]==expected and 'STUDENT_NATIVE_GPU_COMPLETE ' in raw
        receipt.update(status='BASELINE_OUTPUT_MATCH' if verified else 'BASELINE_RUN_INCOMPLETE',exit_code=code,tokens=tokens,expected_tokens=expected,
                       performance_eligible=False,elapsed_seconds=time.monotonic()-t,
                       perf_lines=[line for line in raw.splitlines() if 'PERF' in line][-30:],outputs={'run.log':sha(out/'run.log')})
        (out/'status.json').write_text(json.dumps(receipt,ensure_ascii=False,indent=2)+'\n')
