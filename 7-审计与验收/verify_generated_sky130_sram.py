"""Check the two generated macro views against the frozen four-state transactions."""
from argparse import ArgumentParser
from pathlib import Path
import hashlib
import json
import re
import subprocess

from qualification_resource_guard import prepare, join, snapshot

ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT/'8-本轮实验/GPU-SRAM宏生成-20261111'
SOURCE = ROOT/'8-本轮实验/GPU新身份物理输入准备-20261110'
SHAPES = {'20x64':'vortex_dp_80x64_w4', '8x128':'vortex_sp_64x128_w8'}

def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def main():
    parser = ArgumentParser(description=__doc__)
    parser.add_argument('run_name')
    args = parser.parse_args()
    run_dir = (EVIDENCE/args.run_name).resolve()
    if run_dir.parent != EVIDENCE.resolve():
        raise ValueError('Run must be a direct SRAM generation evidence folder')
    status_path = run_dir/'status.json'
    generation = json.loads(status_path.read_text())
    if generation['status'] != 'LAYOUT_VIEWS_GENERATED_NEEDS_INDEPENDENT_CHECK':
        raise ValueError('Generation is not complete')
    prepare()
    join()
    out = run_dir/'independent-check'
    out.mkdir(exist_ok=False)
    timescale = out/'timescale.v'
    timescale.write_text('`timescale 1ns/1ps\n')
    wrapper = SOURCE/'rtl/openram_wrappers.v'
    records = []
    for row in generation['records']:
        shape = row['shape']
        logical = SHAPES[shape]
        module = 'routeb_new_1w1r_'+shape
        files = {Path(name).suffix:run_dir/shape/name for name in row['files']}
        for name, expected in row['files'].items():
            assert digest(run_dir/shape/name) == expected, (shape,name)
        assert re.search(r'\bmodule\s+'+module+r'\s*\(', files['.v'].read_text())
        assert re.search(r'^MACRO\s+'+module+r'\s*$', files['.lef'].read_text(), re.M)
        assert re.search(r'\bcell\s*\(\s*"?'+module+r'"?\s*\)', files['.lib'].read_text())
        gds = files['.gds'].read_bytes()
        assert gds.startswith(bytes.fromhex('00060002')) and module.encode() in gds and bytes.fromhex('00040400') in gds[-512:]
        bench = SOURCE/'verification'/f'tb_{logical}_openram.sv'
        vectors = SOURCE/'verification'/(logical+'.vectors')
        exe = out/(shape+'.vvp')
        build_log = out/(shape+'-compile.log')
        run_log = out/(shape+'-run.log')
        with build_log.open('wb') as stream:
            subprocess.run(['iverilog','-g2012','-s','tb','-Ptb.READ_SETTLE_NS=4','-o',str(exe),
                            str(timescale),str(files['.v']),str(wrapper),str(bench)],
                            cwd=SOURCE,stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=60)
        with run_log.open('wb') as stream:
            subprocess.run(['vvp',str(exe)],cwd=SOURCE,stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=60)
        transcript = run_log.read_text()
        transactions = len(vectors.read_text().splitlines())
        assert f'PASS openram {logical}: {transactions} records' in transcript
        assert 'FATAL' not in transcript and 'WARNING: Writing and reading' not in transcript
        records.append(dict(shape=shape,transactions=transactions,macro=module,log=run_log.name,
                            transcript_sha256=digest(run_log), model_sha256=digest(files['.v']),
                            bench_sha256=digest(bench), vectors_sha256=digest(vectors)))
    result = dict(status='GENERATED_MACRO_MODELS_AND_VIEW_NAMES_PASS',physical_signoff=False,
                  generation_status_sha256=digest(status_path),wrapper_sha256=digest(wrapper),records=records,
                  total_transactions=sum(r['transactions'] for r in records),resources=snapshot())
    (out/'status.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k!='resources'},ensure_ascii=False))


if __name__=='__main__':
    main()