"""Read the pinned Sky130A and available real SRAM views in OpenROAD."""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import tempfile

from qualification_resource_guard import prepare, join

prepare()
join()
root = Path(__file__).resolve().parents[1]
out = root/'8-本轮实验/GPU-SRAM宏生成-20261111'
tool_path = out/'openroad-tool.json'
tool = json.loads(tool_path.read_text())
openroad = root/tool['binary']
sha = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
assert sha(openroad) == tool['binary_sha256']
lib = root/'9-GPU复现/downloads/openram-b2b069c/pdk/sky130A/libs.ref/sky130_fd_sc_hd'
views = root/'8-本轮实验/GPU公开SRAM视图-20261111'
macro_names = [f'sky130_sram_1kbyte_1rw1r_{shape}_8' for shape in ('32x256','8x1024')]
inputs = {'sky130.tlef':lib/'techlef/sky130_fd_sc_hd__nom.tlef',
          'sky130.lef':lib/'lef/sky130_fd_sc_hd.lef',
          'sky130.lib':lib/'lib/sky130_fd_sc_hd__tt_025C_1v80.lib'}
for name in macro_names:
    inputs[name+'.lef'] = views/name/(name+'.lef')
    inputs[name+'.lib'] = views/name/(name+'_TT_1p8V_25C.lib')
script = ['read_lef -tech sky130.tlef','read_lef -library sky130.lef','read_liberty sky130.lib']
for name in macro_names:
    script.extend([f'read_lef -library {name}.lef',f'read_liberty {name}.lib',
                   f'if {{[llength [get_lib_cells */{name}]] != 1}} {{error "Macro Liberty unresolved"}}',
                   f'if {{[[ord::get_db] findMaster {name}] == "NULL"}} {{error "Macro LEF unresolved"}}'])
script += ['puts "ROUTEB_OPENROAD_SKY130_AND_MACRO_VIEWS_PASS"','exit']
log = out/'openroad-read-libraries.log'
with tempfile.TemporaryDirectory(prefix='routeb-openroad-sky130-') as temporary:
    work = Path(temporary)
    for filename,path in inputs.items():
        shutil.copy2(path,work/filename)
    (work/'read-libraries.tcl').write_text('\n'.join(script)+'\n')
    shutil.copy2(work/'read-libraries.tcl',out/'openroad-read-libraries.tcl')
    env = dict(os.environ, LD_LIBRARY_PATH=str(openroad.parents[2]/'opt/or-tools/lib'))
    with log.open('wb') as stream:
        subprocess.run([str(openroad),'-no_init','-exit','read-libraries.tcl'],cwd=work,env=env,
                       stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=90)
assert 'ROUTEB_OPENROAD_SKY130_AND_MACRO_VIEWS_PASS' in log.read_text()
result = dict(status='OPENROAD_SKY130A_AND_TWO_SRAM_VIEWS_LOAD_PASS',physical_signoff=False,version=tool['version'],
              tool_receipt_sha256=sha(tool_path),log_sha256=sha(log),inputs={str(p.relative_to(root)):sha(p) for p in inputs.values()})
(out/'openroad-read-libraries.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
print(result['status'])