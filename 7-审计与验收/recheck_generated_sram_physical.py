"""Independently check DRC and LVS of the exported SRAM development views."""
from argparse import ArgumentParser
from pathlib import Path
import hashlib
import json
import os
import shutil
import sys
import tempfile
import time

from qualification_resource_guard import prepare, join, snapshot

ROOT = Path(__file__).resolve().parents[1]
WORK = Path('/root/.cache/routeb-openram-b2b069c')
EVIDENCE = ROOT/'8-本轮实验/GPU-SRAM宏生成-20261111'
MAGIC = EVIDENCE/'magic-8.3.306-v4/status.json'


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = ArgumentParser(description=__doc__)
    parser.add_argument('shape', choices=('20x64','8x128'))
    parser.add_argument('run_name')
    args = parser.parse_args()
    run = (EVIDENCE/args.run_name).resolve()
    assert run.parent == EVIDENCE.resolve()
    generation = json.loads((run/'status.json').read_text())
    row = next(r for r in generation['records'] if r['shape'] == args.shape)
    assert row['status'] == 'LAYOUT_VIEWS_GENERATED'
    tool = json.loads(MAGIC.read_text())
    assert tool['status'] == 'MAGIC_8_3_306_SKY130A_LOAD_PASS'
    assert sha(Path(tool['binary'])) == tool['binary_sha256']
    prepare()
    join()
    name = 'routeb_new_1w1r_'+args.shape
    archive = run/args.shape
    reference = row['files']
    for extension in ('.gds','.sp'):
        assert sha(archive/(name+extension)) == reference[name+extension]
    out = run/args.shape/'recheck-magic-8.3.306'
    out.mkdir(exist_ok=False)
    source = WORK/'source'
    scratch = Path(tempfile.mkdtemp(prefix='routeb-sram-recheck-'))
    config = scratch/'config.py'
    original = archive/'config.py'
    config.write_text(original.read_text().replace('check_lvsdrc = False','check_lvsdrc = True')+f'\noutput_path={str(scratch/"output")!r}\n')
    os.environ.update(OPENRAM_HOME=str(source/'compiler'),OPENRAM_TECH=str(source/'technology'),
                      PDK_ROOT=str(WORK/'pdk'),OPENRAM_TMP=str(scratch/'temp'),
                      PATH=f"{Path(tool['binary']).parent}:{WORK/'bin'}:{os.environ['PATH']}",
                      OPENBLAS_NUM_THREADS='1',OMP_NUM_THREADS='1')
    start = time.monotonic()
    state = dict(status='RUNNING',shape=args.shape,layout_sha256=reference[name+'.gds'],
                 schematic_sha256=reference[name+'.sp'],magic_status_sha256=sha(MAGIC),physical_signoff=False)
    try:
        sys.path.insert(0,str(source))
        from common import make_openram_package
        make_openram_package()
        import openram
        openram.OPTS.top_process = 'openram'
        openram.init_openram(config_file=str(config))
        from openram import verify
        temp = Path(openram.OPTS.openram_temp)
        for extension in ('.gds','.sp'):
            shutil.copy2(archive/(name+extension),temp/(name+extension))
        state['drc_errors'] = verify.run_drc(name,name+'.gds',name+'.sp',extract=True,final_verification=True)
        state['lvs_errors'] = verify.run_lvs(name,name+'.gds',name+'.sp',final_verification=True)
        state['status'] = 'MACRO_DRC_LVS_PASS' if state['drc_errors']==state['lvs_errors']==0 else 'MACRO_DRC_OR_LVS_VIOLATIONS'
    except Exception as exc:
        state.update(status='FAILED',error=f'{type(exc).__name__}: {exc}')
    for path in (scratch/'temp').rglob('*'):
        if path.is_file() and (path.suffix in ('.err','.out','.report','.log','.sh') or path.name=='lvs.report'):
            shutil.copy2(path,out/path.name)
    state.update(seconds=time.monotonic()-start,resources=snapshot())
    (out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps({k:v for k,v in state.items() if k!='resources'},ensure_ascii=False))
    return int(state['status']!='MACRO_DRC_LVS_PASS')


if __name__=='__main__':
    raise SystemExit(main())