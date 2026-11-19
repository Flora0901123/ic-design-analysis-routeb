"""Link a new mapped GPU with all four SRAM LEF/Liberty views in OpenROAD."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile

from qualification_resource_guard import prepare, join

ROOT = Path(__file__).resolve().parents[1]
EXPERIMENTS = ROOT/'8-本轮实验'


def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('map_run')
    parser.add_argument('macro_run')
    args = parser.parse_args()
    mapped = (EXPERIMENTS/args.map_run).resolve()
    macro_root = EXPERIMENTS/'GPU-SRAM宏生成-20261111'
    views = (macro_root/args.macro_run/'openroad-four-views').resolve()
    if mapped.parent != EXPERIMENTS or views.parent.parent != macro_root:
        raise ValueError('Expected the names of existing evidence runs')
    mapping = json.loads((mapped/'status.json').read_text())
    assert mapping['status']=='GPU_REAL_SRAM_TECHNOLOGY_MAPPING_PASS'
    netlist = mapped/'gpu-sram-mapped.v'
    assert sha(netlist)==mapping['artifact_hashes'][netlist.name]
    loaded = json.loads((views/'status.json').read_text())
    assert loaded['status']=='OPENROAD_FOUR_SRAM_VIEWS_LOAD_PASS'
    tool_path = macro_root/'openroad-tool.json'
    tool = json.loads(tool_path.read_text())
    exe = ROOT/tool['binary']
    assert sha(exe)==tool['binary_sha256']
    prepare()
    join()
    names = ('32x256','8x1024','8x128','20x64')
    inputs = {'netlist.v':netlist}
    for path,expected in loaded['inputs'].items():
        p = ROOT/path
        assert sha(p)==expected, path
        shape = next((name for name in names if name in p.name),None)
        if shape:
            filename = shape+p.suffix
        elif p.suffix=='.tlef' or p.parent.name=='8x128-openroad-dbu2000':
            filename = 'tech.lef'
        else:
            filename = 'sky130'+p.suffix
        assert filename not in inputs
        inputs[filename] = p
    assert len(inputs)==12
    tcl = (views/'read.tcl').read_text().removesuffix('exit\n')+'''read_verilog netlist.v
link_design vortex_physical_top
set block [[[ord::get_db] getChip] getBlock]
set counts [dict create]
foreach inst [$block getInsts] {
  set name [[$inst getMaster] getName]
  dict incr counts $name
}
'''
    for macro,count in mapping['expected_macros'].items():
        tcl += f'if {{![dict exists $counts {macro}] || [dict get $counts {macro}] != {count}}} {{error "Incorrect macro count for {macro}"}}\n'
    tcl += 'puts ROUTEB_OPENROAD_LINKED_164_MACROS_PASS\nexit\n'
    output = mapped/'openroad-link'
    output.mkdir(exist_ok=False)
    script = output/'link.tcl'
    script.write_text(tcl)
    log = output/'openroad.log'
    with tempfile.TemporaryDirectory(prefix='routeb-openroad-gpu-link-') as temp:
        work = Path(temp)
        for name,path in inputs.items():
            shutil.copy2(path,work/name)
        shutil.copy2(script,work/script.name)
        with log.open('wb') as stream:
            subprocess.run([str(exe),'-no_init','-exit',script.name],cwd=work,
                           env=dict(os.environ,LD_LIBRARY_PATH=str(exe.parents[2]/'opt/or-tools/lib')),
                           stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=240)
    assert 'ROUTEB_OPENROAD_LINKED_164_MACROS_PASS' in log.read_text()
    receipt = dict(status='OPENROAD_LINKED_GPU_AND_164_SRAMS',physical_signoff=False,
                   macro_counts=mapping['expected_macros'],netlist_sha256=sha(netlist),
                   macro_library_receipt_sha256=sha(views/'status.json'),tool_receipt_sha256=sha(tool_path),
                   log_sha256=sha(log),script_sha256=sha(script))
    (output/'status.json').write_text(json.dumps(receipt,indent=2),encoding='utf-8')
    print(receipt['status'])


if __name__=='__main__':
    main()
