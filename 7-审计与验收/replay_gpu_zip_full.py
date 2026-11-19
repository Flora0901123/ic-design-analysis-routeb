"""Replay all 1,000 frozen GPU baseline records from the accepted ZIP."""
import concurrent.futures
import fcntl
import hashlib
import json
import os
from pathlib import Path
import shlex
import subprocess
import tempfile
import zipfile

from qualification_resource_guard import prepare, join

ROOT = Path(__file__).resolve().parents[1]
ARCHIVE = ROOT/'RouteB-本机验收快照-20261114.zip'
OUTPUT = Path(__file__).resolve().parent/'ZIP洁净目录GPU全量-20261114'
PREFIX = '8-本轮实验/GPU同硬件全1000-20261108/'
FILES = ('student_mini','inputs.bin','librtlsim.so','libvortex.so','libvortex-rtlsim.so','run-command.sh')


def sha(data):
    return hashlib.sha256(data).hexdigest()


def write_json(path, data):
    pending=path.with_suffix('.tmp')
    pending.write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf-8')
    pending.replace(path)


def markers(text):
    return [line for line in text.splitlines() if line.startswith(('STUDENT_GPU ','STUDENT_GPU_COMPLETE ','PERF: instrs='))]


def main():
    prepare()
    join()
    OUTPUT.mkdir(exist_ok=True)
    with (OUTPUT/'.driver.lock').open('a') as lock:
        fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
        replay()


def replay():
    records=OUTPUT/'records'
    records.mkdir(exist_ok=True)
    with ARCHIVE.open('rb') as stream:
        archive_hash=hashlib.file_digest(stream,'sha256').hexdigest()
    identity={'archive_sha256':archive_hash,'script_sha256':sha(Path(__file__).read_bytes()),
              'scope':'RTLSIM baseline target program, input and runtime extracted from ZIP; existing locked host toolchain'}
    identity_path=OUTPUT/'identity.json'
    if identity_path.exists():
        assert json.loads(identity_path.read_text())==identity
    else:
        write_json(identity_path,identity)
    with zipfile.ZipFile(ARCHIVE) as z, tempfile.TemporaryDirectory(prefix='routeb-zip-gpu-1000-') as td:
        work=Path(td)
        manifest={n:h for h,n in (line.split('  ',1) for line in z.read('SUBMISSION-SHA256SUMS').decode().splitlines())}
        def read(name):
            raw=z.read(PREFIX+name)
            assert sha(raw)==manifest[PREFIX+name],name
            return raw
        for name in FILES:
            (work/name).write_bytes(read('replay-source-and-binary/'+name))
        (work/'student_mini').chmod(0o755)
        frozen=json.loads(read('status.json'))['records']
        assert [row['ordinal'] for row in frozen]==list(range(1000))
        args=shlex.split((work/'run-command.sh').read_text())
        assert args[-2:]==['./student_mini','@OPTS@']
        env=dict(os.environ)
        env.update(s.split('=',1) for s in args[:-2])
        assert env['VORTEX_DRIVER']=='rtlsim'
        old=next(p for p in env['LD_LIBRARY_PATH'].split(':') if p.endswith('/vortex-build/sw/runtime'))
        env['LD_LIBRARY_PATH']=str(work)+':'+':'.join(p for p in env['LD_LIBRARY_PATH'].split(':') if p!=old)
        for name in ('LD_PRELOAD','LD_DEBUG'):
            env.pop(name,None)
        env['VORTEX_PROFILING']='0'
        references=[]
        for i,row in enumerate(frozen):
            source=read(f'{i:04d}.log')
            assert sha(source)==row['log_sha256'], i
            references.append(markers(source.decode()))
            assert len(references[-1])==3
        def verify(i, raw):
            text=raw.decode(errors='replace')
            assert markers(text)==references[i],i
            assert ('STUDENT_GPU_DEVICE_STATUS fault=1' in text)==frozen[i]['device_fault'],i
        accepted={}
        for path in sorted(records.glob('*.json')):
            i=int(path.stem)
            item=json.loads(path.read_text())
            payload=(records/f'{i:04d}.log').read_bytes()
            assert item['ordinal']==i and item['log_sha256']==sha(payload)
            verify(i,payload)
            accepted[i]=item
        def save(status, **fields):
            write_json(OUTPUT/'status.json',dict(status=status,expected=1000,passed=len(accepted),**identity,**fields))
        def run(i):
            directory=work/f'{i:04d}'
            directory.mkdir()
            path=records/f'{i:04d}.log'
            temporary=records/f'{i:04d}.log.partial'
            with temporary.open('wb') as stream:
                subprocess.run([str(work/'student_mini'),str(work/'inputs.bin'),str(i),'1'],cwd=directory,env=env,stdout=stream,
                               stderr=subprocess.STDOUT,check=True,timeout=400,start_new_session=True)
            raw=temporary.read_bytes()
            verify(i,raw)
            temporary.replace(path)
            row={k:frozen[i][k] for k in ('ordinal','case_id','seed','cycles','instructions','device_fault')}
            row['log_sha256']=sha(raw)
            write_json(records/f'{i:04d}.json',row)
            return row
        save('RUNNING')
        try:
            with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:
                remaining=iter(i for i in range(1000) if i not in accepted)
                active={pool.submit(run,i) for i in [next(remaining,None),next(remaining,None)] if i is not None}
                while active:
                    finished,active=concurrent.futures.wait(active,return_when=concurrent.futures.FIRST_COMPLETED)
                    for future in finished:
                        row=future.result()
                        accepted[row['ordinal']]=row
                        save('RUNNING')
                        if len(accepted)%20==0:print(len(accepted),flush=True)
                        i=next(remaining,None)
                        if i is not None:active.add(pool.submit(run,i))
            assert len(accepted)==1000 and sum(row['device_fault'] for row in accepted.values())==30
            save('ZIP_GPU_FULL_1000_EXACT_REPLAY_PASS',fault_records=30)
        except Exception as exc:
            save('FAILED',error=f'{type(exc).__name__}: {exc}')
            raise


if __name__=='__main__':
    main()
