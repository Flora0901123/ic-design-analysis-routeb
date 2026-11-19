"""Run the existing SRAM contract vectors against the public macro simulation views."""
from pathlib import Path
import hashlib
import json
import re
import subprocess
import time

from qualification_resource_guard import prepare, join

prepare()
join()
root = Path(__file__).resolve().parents[1]
source = root / '8-本轮实验/GPU新身份物理输入准备-20261110'
views = root / '8-本轮实验/GPU公开SRAM轻量视图-20261111'
output = root / '8-本轮实验/GPU公开SRAM原版模型预检-20261111'
output.mkdir(exist_ok=False)
wrapper = source / 'rtl/openram_wrappers.v'
shapes = [
    ('vortex_sp_32x256_w1', '32x256', 32, 8, "4'b1111"),
    ('vortex_sp_32x1024_w4', '8x1024', 8, 10, "1'b1"),
]
commit = '965df150c754fe2b3f93a0bd1f9883eb114279b2'

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def run(args, log):
    with log.open('wb') as stream:
        subprocess.run(args, cwd=source, stdout=stream, stderr=subprocess.STDOUT, check=True, timeout=60)

records = []
for shape, raw_shape, width, address, mask in shapes:
    name = f'sky130_sram_1kbyte_1rw1r_{raw_shape}_8'
    model = views / name / (name + '.v')
    bench = source / 'verification' / f'tb_{shape}_openram.sv'
    vectors = source / 'verification' / (shape + '.vectors')
    state = dict(shape=shape, source_commit=commit, upstream_module=name, status='RUNNING')
    started = time.monotonic()
    try:
        model_text = model.read_text(encoding='utf-8')
        assert re.search(r'^module ' + name + r'\(', model_text, re.M)
        assert set(re.findall(r'\$([a-zA-Z_]\w*)', model_text)) <= {'time','display'}, 'Review unfamiliar upstream system calls'
        assert '`include' not in model_text
        # The upstream RW port is wired for writes, and the separate R port supplies reads.
        adapter = output / f'{raw_shape}-adapter.sv'
        adapter.write_text(f'''`timescale 1ns/1ps
module routeb_new_1w1r_{raw_shape}(
  input wire clk0, csb0, input wire [{address-1}:0] addr0,
  input wire [{width-1}:0] din0, input wire clk1, csb1,
  input wire [{address-1}:0] addr1, output wire [{width-1}:0] dout1
);
  {name} #(.VERBOSE(0)) mem (
    .clk0(clk0), .csb0(csb0), .web0(1'b0), .wmask0({mask}),
    .addr0(addr0), .din0(din0), .dout0(),
    .clk1(clk1), .csb1(csb1), .addr1(addr1), .dout1(dout1)
  );
endmodule
''', encoding='utf-8')
        exe = output / f'{raw_shape}.vvp'
        build = output / f'{raw_shape}-compile.log'
        transcript = output / f'{raw_shape}-run.log'
        run(['iverilog', '-g2012', '-s', 'tb', '-Ptb.READ_SETTLE_NS=4', '-o', str(exe),
             str(adapter), str(model), str(wrapper), str(bench)], build)
        run(['vvp', str(exe)], transcript)
        text = transcript.read_text()
        count = len(vectors.read_text().splitlines())
        assert f'PASS openram {shape}: {count} records' in text and 'WARNING: Writing and reading' not in text
        state.update(status='PASS', transactions=count, transcript_sha256=sha(transcript),
                     source_bindings={p.relative_to(root).as_posix():sha(p) for p in [model, bench, vectors, adapter, wrapper, Path(__file__).resolve()]})
    except Exception as exc:
        state.update(status='FAILED', error=f'{type(exc).__name__}: {exc}')
    state['seconds'] = time.monotonic()-started
    records.append(state)
summary = dict(status='TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS' if all(r['status']=='PASS' for r in records) and sum(r['transactions'] for r in records)==3624 else 'INCOMPLETE_OR_FAILED',
               physical_signoff=False, source_commit=commit, records=records,
               scope='Functional simulation of public macro models, 10 ns stimulus, sample 4 ns after falling edge. No Liberty timing or post-route test.')
(output / 'status.json').write_text(json.dumps(summary, ensure_ascii=False, indent=2), encoding='utf-8')
print(json.dumps({**summary, 'records':[{k:v for k,v in x.items() if k!='source_bindings'} for x in records]}, ensure_ascii=False))
raise SystemExit(int(summary['status']!='TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS'))