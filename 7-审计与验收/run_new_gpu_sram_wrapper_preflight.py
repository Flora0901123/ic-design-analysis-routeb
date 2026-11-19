"""Exercise SRAM wrappers with the explicitly labeled half-cycle surrogate."""
from pathlib import Path
import hashlib
import json
import re
import subprocess
import time

from qualification_resource_guard import prepare, join, snapshot

prepare()
join()
root = Path(__file__).resolve().parents[1]
source = root / '8-本轮实验/GPU新身份物理输入准备-20261110'
output = root / '8-本轮实验/GPU新SRAM包装四态预检-20261111'
output.mkdir(exist_ok=False)
wrapper = source / 'rtl/openram_wrappers.v'
surrogate = source / 'verification/raw_halfcycle_surrogates.v'

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def run(args, log, timeout):
    with log.open('wb') as stream:
        subprocess.run(args, cwd=source, stdout=stream, stderr=subprocess.STDOUT, check=True, timeout=timeout)

records = []
inputs = [wrapper, surrogate, Path(__file__).resolve()]
start = time.monotonic()
state = dict(status='RUNNING', scope='Real RTL wrappers with test-only surrogate SRAMs; no actual macro timing/layout or whole-GPU equivalence', physical_signoff=False, records=records)
try:
    for bench in sorted((source / 'verification').glob('tb_*_openram.sv')):
        shape = bench.stem.removeprefix('tb_').removesuffix('_openram')
        vectors = source / 'verification' / (shape + '.vectors')
        inputs.extend((bench, vectors))
        count = len(vectors.read_text().splitlines())
        executable = output / (shape + '.vvp')
        build_log = output / (shape + '-compile.log')
        run_log = output / (shape + '-run.log')
        started = time.monotonic()
        run(['iverilog', '-g2012', '-s', 'tb', '-o', str(executable), str(wrapper), str(surrogate), str(bench)], build_log, 60)
        run(['vvp', str(executable)], run_log, 60)
        raw = run_log.read_text()
        assert re.search(r'^PASS openram ' + re.escape(shape) + r': ' + str(count) + r' records$', raw, re.M) and 'FATAL' not in raw
        records.append(dict(shape=shape, transactions=count, seconds=time.monotonic()-started, run_log=run_log.name, run_log_sha256=sha(run_log), executable_sha256=sha(executable)))
    assert len(records) == 4 and sum(x['transactions'] for x in records) == 5326
    state['status'] = 'FOUR_WRAPPERS_5326_SURROGATE_TRANSACTIONS_PASS'
except Exception as exc:
    state.update(status='FAILED', error=f'{type(exc).__name__}: {exc}')
state.update(seconds=time.monotonic()-start, source_bindings={p.relative_to(root).as_posix():sha(p) for p in inputs}, resources=snapshot())
(output / 'status.json').write_text(json.dumps(state, ensure_ascii=False, indent=2), encoding='utf-8')
print(json.dumps({k:v for k,v in state.items() if k not in ('resources', 'source_bindings')}, ensure_ascii=False))
raise SystemExit(int(state['status'] == 'FAILED'))