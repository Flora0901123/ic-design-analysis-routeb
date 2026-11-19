"""Measure the FMA candidate with the same pre-placement repair and 10 ns constraints."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import tempfile

from generate_missing_sky130_sram_v3 import bounded_run
from qualification_resource_guard import prepare, join, snapshot

ROOT = Path(__file__).resolve().parents[1]
E = ROOT/'8-本轮实验'
BASE = E/'GPU新实宏标准单元映射-20261112-221037/openroad-preplacement-repair'
G = E/'GPU-SRAM宏生成-20261111'
VIEWS = G/'run-20261112-175857/openroad-four-views/status.json'


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream,'sha256').hexdigest()


def slacks(text):
    values={key:float(value) for key,value in re.findall(r'^worst slack (max|min) (-?[\d.]+)',text,re.M)}
    assert set(values)=={'max','min'}
    return values


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('map_run')
    args=parser.parse_args()
    mapped=(E/args.map_run).resolve()
    assert mapped.parent==E and mapped.name.startswith('GPU-FMA候选实宏映射-')
    link=mapped/'openroad-link/status.json'
    l=json.loads(link.read_text())
    assert l['status']=='OPENROAD_LINKED_GPU_AND_164_SRAMS'
    assert sha(VIEWS)==l['macro_library_receipt_sha256']
    netlist=mapped/'gpu-sram-mapped.v'
    assert sha(netlist)==l['netlist_sha256']
    baseline=json.loads((BASE/'status.json').read_text())
    assert baseline['status']=='OPENROAD_PREPLACEMENT_REPAIR_MEASURED'
    assert sha(BASE/'repair.tcl')==baseline['script_sha256']
    tool=json.loads((G/'openroad-tool.json').read_text())
    exe=ROOT/tool['binary']
    assert sha(exe)==tool['binary_sha256']
    inputs={'netlist.v':netlist,'constraints.sdc':E/'GPU新身份物理输入准备-20261110/constraint.sdc'}
    assert sha(inputs['constraints.sdc'])==json.loads((BASE.parent/'openroad-prelayout-sta/status.json').read_text())['sdc_sha256']
    for name,expected in json.loads(VIEWS.read_text())['inputs'].items():
        p=ROOT/name
        assert sha(p)==expected
        shape=next((s for s in ('32x256','8x1024','8x128','20x64') if s in p.name),None)
        filename=shape+p.suffix if shape else ('tech.lef' if p.parent.name=='8x128-openroad-dbu2000' else 'sky130'+p.suffix)
        inputs[filename]=p
    prepare()
    join()
    out=mapped/'openroad-fma-timing'
    out.mkdir(exist_ok=False)
    log=out/'candidate-repair.log'
    with tempfile.TemporaryDirectory(prefix='routeb-fma-compare-') as td:
        w=Path(td)
        for name,path in inputs.items():
            shutil.copy2(path,w/name)
        shutil.copy2(BASE/'repair.tcl',w/'repair.tcl')
        bounded_run([str(exe),'-no_init','-exit','repair.tcl'],w,
                    dict(os.environ,LD_LIBRARY_PATH=str(exe.parents[2]/'opt/or-tools/lib')),log,600)
    text=log.read_text()
    assert 'ROUTEB_PREPLACEMENT_REPAIR_COMPLETE' in text
    pre,post=text.split('ROUTEB_PREPLACEMENT_BEFORE',1)[1].split('ROUTEB_PREPLACEMENT_AFTER',1)
    after=slacks(post)
    delta=after['max']-baseline['after']['max']
    result=dict(status='FMA_PREPLACEMENT_TIMING_MEASURED',physical_signoff=False,
                clock_ns=10,reference=baseline['after'],candidate_before_repair=slacks(pre),
                candidate_after_repair=after,setup_improvement_ns=delta,
                ten_ns_met_at_this_stage=after['max']>=0 and after['min']>=0,
                reference_status_sha256=sha(BASE/'status.json'),link_status_sha256=sha(link),
                common_tcl_sha256=baseline['script_sha256'],log_sha256=sha(log),resources=snapshot())
    (out/'status.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    print({k:v for k,v in result.items() if k!='resources'})


if __name__=='__main__':
    main()
