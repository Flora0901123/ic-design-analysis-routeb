"""Check the whole-GPU SRAM wrapper hierarchy and actual macro multiplicities."""
from collections import Counter
from functools import lru_cache
from pathlib import Path
import hashlib
import json
import shlex
import subprocess
import tempfile
import time

from qualification_resource_guard import prepare, join, snapshot

prepare()
join()
root = Path(__file__).resolve().parents[1]
source = root / '8-本轮实验/GPU新身份物理输入准备-20261110'
output = root / '8-本轮实验/GPU新SRAM整机绑定预检-20261111'
output.mkdir(exist_ok=False)
preflight = source / 'openram-preflight.ys'
estimate = source / 'resource-estimate.json'
sha = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
expected = json.loads(estimate.read_text())['raw_openram_instance_counts']
state = dict(status='RUNNING', expected_macro_counts=expected, physical_signoff=False,
             scope='Whole-GPU RTL hierarchy, process and macro port binding. Four SRAM definitions are interface blackboxes.')
start = time.monotonic()
try:
    with tempfile.TemporaryDirectory(prefix='routeb-sram-') as temporary:
        stats = Path(temporary) / 'stat.json'
        script = Path(temporary) / 'preflight.ys'
        script.write_text(preflight.read_text() + f'\ntee -o {stats} stat -json\n')
        (output / 'preflight.ys').write_bytes(script.read_bytes())
        log = output / 'yosys.log'
        with log.open('wb') as stream:
            subprocess.run(['yosys', '-s', str(script)], cwd=source, stdout=stream, stderr=subprocess.STDOUT, check=True, timeout=240)
        assert 'Found and reported 0 problems.' in log.read_text()
        (output / 'stat.json').write_bytes(stats.read_bytes())
        modules = {name.lstrip('\\'): row['num_cells_by_type'] for name, row in json.loads(stats.read_text())['modules'].items()}
    @lru_cache(None)
    def count_macros(module):
        counts = Counter()
        for cell, multiplicity in modules[module].items():
            cell = cell.lstrip('\\')
            if cell in expected:
                counts[cell] += multiplicity
            elif cell in modules:
                counts.update({k:v*multiplicity for k,v in count_macros(cell).items()})
            elif not cell.startswith('$'):
                raise ValueError(f'Unexpected unresolved module {cell}')
        return counts
    actual = dict(count_macros('vortex_physical_top'))
    assert actual == expected and sum(actual.values()) == 164, (expected, actual)
    state.update(status='WHOLE_GPU_SRAM_WRAPPER_BINDINGS_PASS', actual_macro_counts=actual, total_macro_instances=164)
except Exception as exc:
    state.update(status='FAILED', error=f'{type(exc).__name__}: {exc}')
inputs = [preflight, estimate, Path(__file__).resolve()]
inputs.extend(source / arg for arg in shlex.split(preflight.read_text().splitlines()[0])[2:])
state.update(seconds=time.monotonic()-start, source_bindings={p.relative_to(root).as_posix():sha(p) for p in inputs},
             artifact_hashes={p.name:sha(p) for p in output.iterdir() if p.is_file()}, resources=snapshot())
(output / 'status.json').write_text(json.dumps(state, ensure_ascii=False, indent=2), encoding='utf-8')
print(json.dumps({k:v for k,v in state.items() if k not in ('resources', 'source_bindings')}, ensure_ascii=False))
raise SystemExit(int(state['status'] == 'FAILED'))