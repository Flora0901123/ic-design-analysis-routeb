"""Generate the two missing Sky130 SRAM layouts from pinned compiler inputs."""
from argparse import ArgumentParser
from datetime import datetime, timezone, timedelta
from pathlib import Path
import hashlib
import json
import os
import shutil
import signal
import subprocess
import time

from qualification_resource_guard import GROUP, prepare, join, snapshot

ROOT = Path(__file__).resolve().parents[1]
WORK = Path('/root/.cache/routeb-openram-b2b069c')
DOWNLOADS = ROOT / '9-GPU复现/downloads/openram-b2b069c'
EVIDENCE = ROOT / '8-本轮实验/GPU-SRAM宏生成-20261111'
CONFIGS = ROOT / '8-本轮实验/GPU新身份物理输入准备-20261110/openram-configs'
NAMES = ('20x64','8x128')


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def bounded_run(command, cwd, env, log, timeout):
    with log.open('wb') as stream:
        process = subprocess.Popen(command, cwd=cwd, env=env, stdout=stream, stderr=subprocess.STDOUT, start_new_session=True)
        deadline = time.monotonic()+timeout
        while process.poll() is None:
            if time.monotonic() > deadline or int((GROUP/'memory.current').read_text()) > 7*1024**3:
                os.killpg(process.pid, signal.SIGTERM)
                try:
                    process.wait(timeout=10)
                except subprocess.TimeoutExpired:
                    os.killpg(process.pid, signal.SIGKILL)
                    process.wait()
                raise RuntimeError(f'Time or 7 GiB early stop reached; see {log.name}')
            time.sleep(1)
        if process.returncode:
            raise subprocess.CalledProcessError(process.returncode, command)


def main():
    parser = ArgumentParser(description=__doc__)
    parser.add_argument('--shape', choices=NAMES, action='append')
    parser.add_argument('--skip-layout-verification', action='store_true',
                        help='Export development views for independent checks; no DRC/LVS acceptance')
    args = parser.parse_args()
    prepare()
    join()
    pdk_receipt = EVIDENCE / 'macro-pdk-ready.json'
    assert json.loads(pdk_receipt.read_text())['status'] == 'PINNED_SKY130A_SRAM_INPUTS_READY'
    magic_receipt = EVIDENCE / 'magic-8.3.306-v4/status.json'
    magic = json.loads(magic_receipt.read_text())
    assert magic['status'] == 'MAGIC_8_3_306_SKY130A_LOAD_PASS'
    magic_path = Path(magic['binary'])
    assert digest(magic_path) == magic['binary_sha256']
    source = WORK / 'geometry-repair-v3'
    overlay_receipt = EVIDENCE/'geometry-repair-v3/status.json'
    for row in json.loads(overlay_receipt.read_text())['openram_paths']:
        assert digest(source/row['path']) == row['candidate_sha256']
    pdk = WORK / 'pdk'
    latch_rel = 'skywater-pdk/libraries/sky130_fd_sc_hd/latest/cells/dlxtn'
    latch_dir = pdk / latch_rel
    latch_dir.mkdir(parents=True, exist_ok=True)
    latch_inputs = sorted((DOWNLOADS/'hd-latch').glob('sky130_fd_sc_hd__dlxtn_1.*'))
    assert {path.suffix for path in latch_inputs} == {'.spice','.gds'} and all(p.stat().st_size > 100 for p in latch_inputs)
    for path in latch_inputs:
        shutil.copy2(path, latch_dir/path.name)
    stamp = datetime.now(timezone(timedelta(hours=8))).strftime('%Y%m%d-%H%M%S')
    output = EVIDENCE / ('geometry-repair-v3-run-'+stamp)
    output.mkdir(exist_ok=False)
    native = WORK / ('run-'+stamp)
    native.mkdir()
    env = dict(os.environ, OPENRAM_HOME=str(source/'compiler'), OPENRAM_TECH=str(source/'technology'),
               PDK_ROOT=str(pdk), PATH=f"{magic_path.parent}:{WORK/'bin'}:{WORK/'venv/bin'}:{os.environ['PATH']}",
               OPENBLAS_NUM_THREADS='1', OMP_NUM_THREADS='1', MKL_NUM_THREADS='1', PYTHONUNBUFFERED='1')
    state = dict(status='RUNNING',records=[],physical_signoff=False,layout_view_mode='analytical Liberty',
                 layout_verification_requested=not args.skip_layout_verification,
                 source_pins={'openram':'b2b069ce119d1488cbe6883b2240bceb5c7ce29a',
                              'bitcells':'dd64256961317205343a3fd446908b42bafba388',
                              'hd_latch':'ac7fb61f06e6470b94e8afdf7c25268f62fbd7b1'},
                 inputs={path.relative_to(ROOT).as_posix():digest(path) for path in
                         [pdk_receipt,magic_receipt,overlay_receipt,*latch_inputs,*sorted(DOWNLOADS.glob('*.tar.gz')),Path(__file__).resolve()]})
    receipt = output / 'status.json'
    def save():
        state['resources'] = snapshot()
        temporary = output / 'status.tmp'
        temporary.write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8')
        temporary.replace(receipt)
    save()
    try:
        for shape in args.shape or NAMES:
            name = 'routeb_new_1w1r_'+shape
            original = CONFIGS / (name+'_analytical.py')
            stage = native / shape
            stage.mkdir()
            config = stage / 'config.py'
            text = original.read_text()
            assert 'only_use_config_corners = True' in text and text.count('nominal_corner_only = True') == 1
            text = text.replace('nominal_corner_only = True', 'nominal_corner_only = False')
            text += '\nuse_specified_corners = [(\"TT\", 1.8, 25)]\n'
            if args.skip_layout_verification:
                assert text.count('check_lvsdrc = True') == 1
                text = text.replace('check_lvsdrc = True', 'check_lvsdrc = False')
            config.write_text(text+f'\noutput_path={str(stage/"views")!r}\n')
            artifact = output / shape
            artifact.mkdir()
            shutil.copy2(config, artifact/'config.py')
            row = dict(shape=shape, status='RUNNING',base_config_sha256=digest(original),config_sha256=digest(config))
            state['records'].append(row)
            save()
            begin = time.monotonic()
            try:
                bounded_run([str(WORK/'venv/bin/python'),str(source/'sram_compiler.py'),str(config)],
                            stage,dict(env,OPENRAM_TMP=str(stage/'tmp')),artifact/'compile.log',3000)
                views = stage / 'views'
                files = [p for p in views.iterdir() if p.is_file() and p.stat().st_size > 0]
                assert {'.v','.lef','.lib','.gds','.sp'} <= {p.suffix for p in files}
                row.update(status='LAYOUT_VIEWS_GENERATED', files={p.name:digest(p) for p in files})
                for path in files:
                    shutil.copy2(path,artifact/path.name)
            except Exception as exc:
                row.update(status='FAILED',error=f'{type(exc).__name__}: {exc}')
                views = stage/'views'
                if views.is_dir():
                    files = [p for p in views.iterdir() if p.is_file() and p.stat().st_size]
                    row['partial_files'] = {p.name:digest(p) for p in files}
                    for path in files:
                        shutil.copy2(path,artifact/path.name)
            verification = artifact / 'verification'
            for path in (stage/'tmp').rglob('*'):
                if path.is_file() and path.suffix in ('.err','.out','.report','.sh'):
                    verification.mkdir(exist_ok=True)
                    shutil.copy2(path, verification/path.name)
            row['seconds'] = time.monotonic()-begin
            save()
        state['status'] = 'LAYOUT_VIEWS_GENERATED_NEEDS_INDEPENDENT_CHECK' if all(r['status']=='LAYOUT_VIEWS_GENERATED' for r in state['records']) else 'FAILED_OR_PARTIAL'
    except Exception as exc:
        state.update(status='FAILED',error=f'{type(exc).__name__}: {exc}')
    save()
    print(receipt)
    print(state['status'])
    return int(state['status'] != 'LAYOUT_VIEWS_GENERATED_NEEDS_INDEPENDENT_CHECK')


if __name__ == '__main__':
    raise SystemExit(main())