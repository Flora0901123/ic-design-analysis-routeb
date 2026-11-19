"""Fresh target replay of the GPU policy that enables the candidate only for P1."""
from pathlib import Path
import fcntl
import hashlib
import json
import os
import re
import shlex
import struct
import subprocess
import sys
import time

OUT = Path(__file__).resolve().parent
EXP = OUT.parent
ROOT = EXP.parent
sys.path.insert(0, str(next(ROOT.glob('7-*'))))
from qualification_resource_guard import prepare, join, snapshot
from restore_locked_host_cache import restore
from route_locked_gpu_candidate import choose

def read(path):
    return json.loads(path.read_text(encoding='utf-8-sig'))

def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()

def write_json(path, value):
    temp = path.with_suffix('.tmp')
    temp.write_text(json.dumps(value, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    temp.replace(path)

def signature(path, ordinal, group_count):
    raw = path.read_text(errors='replace')
    numeric = re.findall(r'^STUDENT_GPU ordinal=\d+ .*$', raw, re.M)
    counts = re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=', raw, re.M)
    device = re.findall(r'^STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])', raw, re.M)
    dma = re.findall(r'^DMA_REQ .*? write=([01]) ', raw, re.M)
    assert len(numeric) == 1 and numeric[0].startswith(f'STUDENT_GPU ordinal={ordinal} ')
    assert len(counts) == group_count and len(set(counts)) == 1
    assert device and all(busy == '0' for fault, busy in device)
    assert dma and f'STUDENT_GPU_COMPLETE start={ordinal} count=1' in raw
    if group_count == 3:
        assert re.findall(r'^ROUTEB_PERF_CLASS_END group=(\d+) code=0$', raw, re.M) == ['0','4','7']
    return numeric[0], tuple(map(int, counts[0])), device, (dma.count('0'), dma.count('1'))

def run():
    prepare()
    join()
    base = next(EXP.glob('GPU*1000-20261108/replay-source-and-binary')).parent
    old = next(EXP.glob('GPU*20261109/source-and-apps')).parent
    pilot = EXP/'GPU-P1-only-dispatch-probe-20261118'
    comparison = pilot/'sealed-log-comparison.json'
    data = read(comparison)
    rows = data['rows']
    assert [x['ordinal'] for x in rows] == list(range(1000))
    assert sha(base/'status.json') == data['source_hashes']['baseline_status']
    assert sha(old/'status.json') == data['source_hashes']['candidate_status']
    input_path = base/'replay-source-and-binary/inputs.bin'
    inputs = input_path.read_bytes()
    assert sha(input_path) == read(pilot/'status.json')['input_sha256'] and len(inputs) == 1936000
    source_manifest = next(ROOT.glob('9-*/*/trace-build/completion.json'))
    source = read(source_manifest)
    work = Path(source['work'])
    command = shlex.split((work/'run-command.sh').read_text(encoding='utf-8'))
    assert command[-2:] == ['./student_mini','@OPTS@']
    env = dict(token.split('=',1) for token in command[:-2])
    runtime = next(EXP.glob('GPU*20261108/runtime'))
    cache = next(EXP.glob('GPU*20261108/cache.json'))
    linked_cache = restore(read(cache), cache.parent)
    env['LD_LIBRARY_PATH'] = str(linked_cache) + ':' + str(runtime) + ':' + env['LD_LIBRARY_PATH']
    env.update(VORTEX_PROFILING='0', VORTEX_CP_POLL_TIMEOUT_S='240', ROUTEB_MULTI_PERF='1')
    baseline, digest = next((Path(p), h) for p,h in source['new_bindings'].items() if p.endswith('/student_mini'))
    executables = {'baseline': (baseline,digest)}
    build = next(EXP.glob('GPU*20261109/routed-control-status-v2.json')).parent/'build.json'
    for entry in read(build)['records']:
        if entry['variant'] in ('combined','rne'):
            executables[entry['variant']] = (Path(entry['work'])/'student_mini',entry['executable_sha256'])
    for executable, expected in executables.values():
        assert sha(executable) == expected
    sealed_boards = {'baseline': read(base/'evidence-sha256.json'), 'candidate': read(old/'evidence-sha256.json')}
    identity = {'runner_sha256':sha(Path(__file__)), 'comparison_sha256':sha(comparison), 'inputs_sha256':sha(input_path),
                'dispatch_sha256':sha(next(ROOT.glob('7-*/route_locked_gpu_candidate.py'))),
                'reference_boards':{key:sha(folder/'evidence-sha256.json') for key,folder in (('baseline',base),('candidate',old))},
                'runtime':{name:sha(runtime/name) for name in ('libvortex.so','libvortex-rtlsim.so','librtlsim.so')},
                'executables':{name:value[1] for name,value in executables.items()}}
    identity_path = OUT/'inputs.json'
    if identity_path.exists():
        assert read(identity_path)==identity
    else:
        write_json(identity_path,identity)
    target_logs = OUT/'target'
    target_logs.mkdir(exist_ok=True)
    changed = data['changed_dispatch']
    records = []
    ordered = sorted(rows,key=lambda row: (row['old_selected']==row['selected'],row['ordinal']))
    state_path = OUT/'status.json'
    def save(status, **extra):
        write_json(state_path, {'status':status,'target_records_verified':len(records),'expected_records':1000,
            'changed_dispatch_expected':changed,'changed_dispatch_verified':sum(x['changed_dispatch'] for x in records),
            'exact_reference_matches':all(x['exact_reference_match'] for x in records) if records else None,
            'physical_signoff':False,'formal_promotion':'HOLD','official_weighted_gain':None,
            'input_receipt_sha256':sha(identity_path),'records':records,'resources':snapshot(),**extra})
    save('RUNNING')
    for row in ordered:
        ordinal = row['ordinal']
        block = inputs[ordinal*1936:(ordinal+1)*1936]
        op = struct.unpack_from('<I',block,4)[0]
        selection = choose(block[:128],'baseline' if op==2 else 'combined')
        assert selection==row['selected']
        old_file_name = f'{ordinal:04d}.log'
        reference_folder, board = (base,'baseline') if selection=='baseline' else (old,'candidate')
        reference = reference_folder/old_file_name
        target = target_logs/old_file_name
        expected_hash = sealed_boards[board][old_file_name]
        start = time.monotonic()
        temporary = target.with_suffix('.partial')
        try:
            assert sha(reference)==expected_hash
            expected = signature(reference,ordinal,1 if board=='baseline' else 3)
            executable, _ = executables[selection]
            if not target.exists():
                with temporary.open('wb') as log:
                    subprocess.run([str(executable),str(input_path),str(ordinal),'1'],cwd=work,
                                   env=os.environ|env,stdout=log,stderr=subprocess.STDOUT,timeout=300,check=True)
                actual = signature(temporary,ordinal,3)
            else:
                actual = signature(target,ordinal,3)
            assert actual==expected,(ordinal,actual,expected)
            assert actual[1][1]==row['expected_cycles'] and sum(actual[3])==row['expected_external_beats']
            if temporary.is_file() and not target.exists():
                temporary.replace(target)
            records.append({'ordinal':ordinal,'selection':selection,'changed_dispatch':selection!=row['old_selected'],
                'cycles':actual[1][1],'instructions':actual[1][0],'external_beats':sum(actual[3]),'exact_reference_match':True,
                'device_fault':any(fault=='1' for fault,busy in actual[2]),'log_sha256':sha(target),
                'reference_log_sha256':expected_hash,'elapsed_seconds':time.monotonic()-start})
            save('RUNNING')
            if len(records)<=3 or len(records)%10==0:
                print('verified',len(records),'last',ordinal,selection,flush=True)
        except Exception as error:
            save('REPLAY_FAILED',failed_ordinal=ordinal,error=f'{type(error).__name__}: {error}')
            raise
    assert len(records)==1000 and sum(x['changed_dispatch'] for x in records)==changed
    save('FRESH_POLICY_ALL_1000_EXACT_MATCH')

if __name__ == '__main__':
    with (OUT/'run.lock').open('a') as lock:
        fcntl.flock(lock, fcntl.LOCK_EX|fcntl.LOCK_NB)
        run()
