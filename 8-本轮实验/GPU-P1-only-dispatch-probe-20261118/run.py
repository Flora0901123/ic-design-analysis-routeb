
from pathlib import Path
import hashlib,importlib.util,json,os,re,shlex,struct,subprocess,sys,time
r=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*'))
a=next(r.glob('7-*')); x=next(r.glob('8-*')); z=next(r.glob('9-*'))
sys.path.insert(0,str(a))
from qualification_resource_guard import prepare,join
from restore_locked_host_cache import restore
from route_locked_gpu_candidate import choose
prepare();join()
def sha(p): return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p): return json.loads(p.read_text(encoding='utf-8-sig'))
def locate(pattern,root=x): return next(root.glob(pattern))
if __name__=='__main__':
    main=True
    out=x/'GPU-P1-only-dispatch-probe-20261118'
    base=locate('GPU*1000-20261108')
    old=locate('GPU*20261109/source-and-apps').parent
    assert (old/'0340.log').is_file()
    sealed=read(locate('*\u7ed3\u8bba.json',old))
    assert sealed['status']=='FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED'
    bindings=read(old/'evidence-sha256.json')
    t=read(locate('*/trace-build/completion.json',z))
    work=Path(t['work'])
    command=shlex.split((work/'run-command.sh').read_text())
    assert command[-2:]==['./student_mini','@OPTS@']
    env=dict(token.split('=',1) for token in command[:-2])
    mc=locate('GPU*20261108/runtime')
    cache=locate('GPU*20261108/cache.json').parent
    clean_cache=restore(read(cache/'cache.json'),cache)
    env['LD_LIBRARY_PATH']=str(clean_cache)+':'+str(mc)+':'+env['LD_LIBRARY_PATH']
    env.update(VORTEX_PROFILING='0', VORTEX_CP_POLL_TIMEOUT_S='240', ROUTEB_MULTI_PERF='1')
    binary_root=old/'source-and-apps'
    input_path=base/'replay-source-and-binary/inputs.bin'
    inputs=input_path.read_bytes()
    assert len(inputs)==1936*1000
    reports=[]
    for ordinal in (0,340,620,660):
        header=inputs[ordinal*1936:ordinal*1936+128]
        op=struct.unpack_from('<I',header,4)[0]
        policy='baseline' if op==2 else 'combined'
        selection=choose(header,policy)
        original=base if selection=='baseline' else old
        logname=f'{ordinal:04d}.log'
        original_log=original/logname
        assert sha(original_log)==read(original/'evidence-sha256.json')[logname]
        if selection=='baseline':
            binary=Path(next(k for k in t['new_bindings'] if k.endswith('/student_mini')))
            expected=t['new_bindings'][str(binary)]
        else:
            record=next(v for v in read(locate('GPU*20261109/routed-control-status-v2.json').parent/'build.json')['records'] if v['variant']==selection)
            binary=Path(record['work'])/'student_mini'
            expected=record['executable_sha256']
        assert sha(binary)==expected
        target=out/logname
        t0=time.monotonic()
        if not target.exists():
            with target.open('xb') as f:
                cp=subprocess.run([str(binary),str(input_path),str(ordinal),'1'],env=os.environ|env,cwd=work,
                                  stdout=f,stderr=subprocess.STDOUT,timeout=300)
            cp.check_returncode()
        def signature(log,group_count):
            raw=log.read_text(errors='replace')
            numeric=[line for line in raw.splitlines() if line.startswith('STUDENT_GPU ')]
            perf=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',raw,re.M)
            beats=len(re.findall(r'^DMA_REQ ',raw,re.M))
            assert len(numeric)==1 and len(perf)==group_count and len(set(perf))==1 and beats>0
            assert f'STUDENT_GPU_COMPLETE start={ordinal} count=1' in raw
            return numeric[0],perf[0],beats
        exact=signature(target,3)
        reference=signature(original_log,1 if selection=='baseline' else 3)
        assert exact==reference,(ordinal,exact,reference)
        reports.append({'ordinal':ordinal,'op':op,'selected':selection,'cycles':int(exact[1][1]),'external_beats':exact[2],
                        'executable_sha256':expected,'log_sha256':sha(target),'reference_log_sha256':sha(original_log),'seconds':time.monotonic()-t0})
        print(ordinal,selection,exact[1],exact[2],flush=True)
    (out/'status.json').write_text(json.dumps({'status':'P1_ONLY_POLICY_FOUR_RTLSIM_CONTROLS_MATCH','formal_promotion':'HOLD','records':reports,
                                                'input_sha256':sha(input_path),'script_sha256':sha(Path(__file__)),'full_campaign_run':False},indent=2)+'\n')
