"""Prepare an isolated OpenRAM geometry repair; leave Magic and PDK rule decks intact."""
from pathlib import Path
import difflib
import hashlib
import json
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
E = ROOT/'8-本轮实验/GPU-SRAM宏生成-20261111'
WORK = Path('/root/.cache/routeb-openram-b2b069c')
BASE = WORK/'source'
OVERLAY = WORK/'geometry-repair-v4'
PROOF = E/'geometry-repair-v4'

CHANGES = {
    'technology/sky130/tech/tech.py': (
        ('drc.add_layer("m3",\n              width=0.300,\n              spacing=0.300,',
         'drc.add_layer("m3",\n              width=0.300,\n              spacing=0.400,'),
    ),
    'compiler/modules/sram_1bank.py': (
        ('self.add_dnwell(inflate=2.5)', 'self.add_dnwell(inflate=4.5)'),
    ),
}


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    PROOF.mkdir(exist_ok=False)
    shutil.copytree(BASE,OVERLAY,symlinks=True,ignore=shutil.ignore_patterns('__pycache__'))
    records=[]
    for name,changes in CHANGES.items():
        original=BASE/name
        current=OVERLAY/name
        before=original.read_text()
        after=before
        for old,new in changes:
            assert after.count(old)==1,(name,old)
            after=after.replace(old,new)
        compile(after,name,'exec')
        current.write_text(after)
        records.append(dict(path=name,original_sha256=sha(original),candidate_sha256=sha(current)))
        patch=''.join(difflib.unified_diff(before.splitlines(keepends=True),after.splitlines(keepends=True),
                                           fromfile='original/'+name,tofile='candidate/'+name))
        (PROOF/(Path(name).name+'.diff')).write_text(patch)
    state=dict(status='ISOLATED_GENERATOR_REPAIR_PREPARED',physical_signoff=False,
               candidate_rules='routing Metal3 spacing 0.400 µm and intermediate deep-well moat (inflate=4.5); stock device sizes',
               openram_paths=records,script_sha256=sha(Path(__file__)))
    (PROOF/'status.json').write_text(json.dumps(state,indent=2))
    subprocess.run([sys.executable,str(Path(__file__).with_name('generate_sram_geometry_repair_v4.py')),
                    '--shape','20x64'],check=True)


if __name__=='__main__':
    main()
