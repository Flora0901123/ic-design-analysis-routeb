"""Map the new GPU identity with all four independently checked SRAM models."""
from argparse import ArgumentParser
from collections import Counter
from datetime import datetime
from pathlib import Path
import json
import os
import shutil
import subprocess
import time

from generate_missing_sky130_sram_v3 import bounded_run, digest
from qualification_resource_guard import prepare, join, snapshot

ROOT = Path(__file__).resolve().parents[1]
EXPERIMENTS = ROOT/'8-本轮实验'
SOURCE = EXPERIMENTS/'GPU新身份物理输入准备-20261110'
PUBLIC = EXPERIMENTS/'GPU公开SRAM视图-20261111'
PUBLIC_CHECK = EXPERIMENTS/'GPU公开SRAM原版模型预检-20261111'
GENERATION = EXPERIMENTS/'GPU-SRAM宏生成-20261111'
LIB = EXPERIMENTS/'GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib'
TOP = 'vortex_physical_top'
PUBLIC_SHAPES = ('32x256', '8x1024')
GENERATED_SHAPES = ('20x64', '8x128')


def main():
    parser = ArgumentParser(description=__doc__)
    parser.add_argument('run_name')
    args = parser.parse_args()
    run = (GENERATION/args.run_name).resolve()
    if run.parent != GENERATION.resolve():
        raise ValueError('Run must be a direct SRAM generation evidence folder')
    check_path = run/'independent-check/status.json'
    check = json.loads(check_path.read_text())
    assert check['status'] == 'GENERATED_MACRO_MODELS_AND_VIEW_NAMES_PASS'
    generation_path = run/'status.json'
    assert digest(generation_path) == check['generation_status_sha256']
    generation = json.loads(generation_path.read_text())
    assert {row['shape'] for row in generation['records']} == set(GENERATED_SHAPES)
    assert digest(LIB) == 'ec0e1067a35c8bf20b11e58d1e8ac53326067e4dac84a125cc1b917a3518d0d9'
    public_status = PUBLIC_CHECK/'status.json'
    public = json.loads(public_status.read_text())
    assert public['status'] == 'TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS'
    assert sum(row['transactions'] for row in public['records']) == 3624
    for row in public['records']:
        assert row['status'] == 'PASS'
        for name, expected in row['source_bindings'].items():
            assert digest(ROOT/name) == expected, name
    prepare()
    join()

    stamp = datetime.now().strftime('%Y%m%d-%H%M%S')
    work = Path('/root/.cache')/('routeb-gpu-real-sram-map-'+stamp)
    out = EXPERIMENTS/('GPU新实宏标准单元映射-'+stamp)
    work.mkdir(exist_ok=False)
    out.mkdir(exist_ok=False)
    status = dict(status='RUNNING', scope='New GPU identity with real SRAM Liberty; post-map equivalence and physical checks pending',
                  native_workspace=str(work), physical_signoff=False, formal_promotion='HOLD', input_hashes={})
    receipt = out/'status.json'
    start = time.monotonic()

    def save():
        status.update(seconds=time.monotonic()-start, resources=snapshot())
        temporary = out/'status.tmp'
        temporary.write_text(json.dumps(status,ensure_ascii=False,indent=2),encoding='utf-8')
        temporary.replace(receipt)

    def stage(path, name):
        status['input_hashes'][path.relative_to(ROOT).as_posix()] = digest(path)
        shutil.copy2(path, work/name)

    status['mapping_strategy'] = 'synthesize and map per module, then flatten mapped cells'
    save()
    try:
        stage(LIB, 'sky130.lib')
        source_list = SOURCE/'openram-preflight.ys'
        names = source_list.read_text().splitlines()[0].split()[2:]
        assert names.pop() == 'rtl/openram_blackboxes.v'
        for name in names:
            (work/name).parent.mkdir(exist_ok=True)
            stage(SOURCE/name, name)
        source_counts = SOURCE/'resource-estimate.json'
        counts = json.loads(source_counts.read_text())['raw_openram_instance_counts']
        lib_names = {}
        for shape in PUBLIC_SHAPES:
            raw = 'routeb_new_1w1r_'+shape
            macro = 'sky130_sram_1kbyte_1rw1r_'+shape+'_8'
            path = PUBLIC/macro/(macro+'_TT_1p8V_25C.lib')
            lib_names[macro] = counts[raw]
            stage(path, shape+'.lib')
            adapter_path = PUBLIC_CHECK/(shape+'-adapter.sv')
            stage(adapter_path, shape+'-adapter.sv')
            adapter = work/(shape+'-adapter.sv')
            source = adapter.read_text()
            assert source.count('#(.VERBOSE(0))') == 1
            adapter.write_text(source.replace(' #(.VERBOSE(0))', ''))
            names.append(adapter.name)
        for row in generation['records']:
            shape = row['shape']
            macro = 'routeb_new_1w1r_'+shape
            filename = next(name for name in row['files'] if name.endswith('.lib'))
            path = run/shape/filename
            assert digest(path) == row['files'][filename]
            stage(path, shape+'.lib')
            lib_names[macro] = counts[macro]
        for path in (check_path, generation_path, public_status, source_counts, source_list, Path(__file__).resolve()):
            status['input_hashes'][path.relative_to(ROOT).as_posix()] = digest(path)
        for shape in PUBLIC_SHAPES:
            shutil.copy2(work/(shape+'-adapter.sv'),out/(shape+'-adapter.sv'))
        latch_map = """module \\$_DLATCH_N_ (input D,E, output Q);
  sky130_fd_sc_hd__dlxtn_1 _TECHMAP_REPLACE_ (.D(D),.GATE_N(E),.Q(Q));
endmodule
module \\$_DLATCH_P_ (input D,E, output Q);
  sky130_fd_sc_hd__dlxtp_1 _TECHMAP_REPLACE_ (.D(D),.GATE(E),.Q(Q));
endmodule
"""
        (work/'latch-map.v').write_text(latch_map)
        (out/'latch-map.v').write_text(latch_map)
        script = [f'read_liberty -lib {shape}.lib' for shape in PUBLIC_SHAPES+GENERATED_SHAPES]
        script += ['read_verilog -sv '+' '.join(names),
                   f'hierarchy -check -top {TOP}', f'synth -noabc -top {TOP}',
                   'write_rtlil generic-checkpoint.il', 'read_liberty -lib sky130.lib',
                   'techmap -map latch-map.v', 'dfflibmap -liberty sky130.lib',
                   'abc -liberty sky130.lib', 'clean', f'hierarchy -check -top {TOP}',
                   'flatten', 'clean', f'hierarchy -check -top {TOP}',
                   'check -assert', 'tee -o stat.json stat -json -liberty sky130.lib',
                   'write_verilog -noattr -noexpr gpu-sram-mapped.v']
        for directory in (work,out):
            (directory/'synthesis.ys').write_text('\n'.join(script)+'\n')
        status['expected_macros'] = lib_names
        save()
        bounded_run(['yosys','-s','synthesis.ys'],work,dict(os.environ,OMP_NUM_THREADS='1'),out/'synthesis.log',1800)
        stats = json.loads((work/'stat.json').read_text())
        types = Counter(stats['modules']['\\'+TOP]['num_cells_by_type'])
        assert {name:types[name] for name in lib_names} == lib_names
        assert all(name in lib_names or name.startswith('sky130_fd_sc_hd__') for name in types)
        for name in ('stat.json','gpu-sram-mapped.v'):
            shutil.copy2(work/name,out/name)
        status.update(status='GPU_REAL_SRAM_TECHNOLOGY_MAPPING_PASS', macro_instances=sum(lib_names.values()),
                      artifact_hashes={name:digest(out/name) for name in ('gpu-sram-mapped.v','stat.json','synthesis.log')})
    except Exception as exc:
        status.update(status='FAILED',error=f'{type(exc).__name__}: {exc}')
    save()
    print(receipt)
    return int(status['status']=='FAILED')


if __name__ == '__main__':
    raise SystemExit(main())
