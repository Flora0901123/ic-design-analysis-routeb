"""Verify names, LEF pins and Liberty parseability for the two imported SRAMs."""
from pathlib import Path
import hashlib
import json
import re
import shutil
import subprocess
import tempfile

from qualification_resource_guard import prepare, join

prepare()
join()
root = Path(__file__).resolve().parents[1]
views = root / '8-本轮实验/GPU公开SRAM轻量视图-20261111'
model_test = root / '8-本轮实验/GPU公开SRAM原版模型预检-20261111/status.json'
tool = json.loads((root / '8-本轮实验/OpenSTA工具搭建-20261110-v4/status.json').read_text())
source = json.loads((views / 'download.json').read_text(encoding='utf-8-sig'))
model = json.loads(model_test.read_text())
sha = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
assert model['status'] == 'TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS'
assert model['source_commit'] == source['commit']
for row in source['records']:
    path = views / row['path']
    assert path.stat().st_size == row['bytes'] and sha(path) == row['sha256']
sta = root / tool['binary_relative']
assert sha(sta) == tool['binary_sha256']
rows = []
with tempfile.TemporaryDirectory(prefix='routeb-sram-liberty-') as temp:
    work = Path(temp)
    tcl = []
    for shape, width, addr, mask in [('32x256',32,8,4),('8x1024',8,10,1)]:
        name = f'sky130_sram_1kbyte_1rw1r_{shape}_8'
        lef = (views / name / (name + '.lef')).read_text()
        lib = views / name / (name + '_TT_1p8V_25C.lib')
        assert re.search(r'^MACRO '+name+r'\s*$', lef, re.M)
        pins = set(re.findall(r'^\s*PIN\s+(\S+)\s*$', lef, re.M))
        required = {'clk0','clk1','csb0','csb1','web0','vccd1','vssd1'}
        for signal, count in [('addr0',addr),('addr1',addr),('din0',width),('dout0',width),('dout1',width),('wmask0',mask)]:
            required.update(f'{signal}[{i}]' for i in range(count))
        # Some generated LEF views use the scalar name for a one-bit mask.
        if mask==1 and 'wmask0' in pins:
            required.remove('wmask0[0]')
            required.add('wmask0')
        assert required <= pins, (name, sorted(required-pins))
        dimensions = re.search(r'\bSIZE\s+(\d+\.\d+)\s+BY\s+(\d+\.\d+)', lef).groups()
        shutil.copy2(lib, work / (shape+'.lib'))
        tcl.extend([f'read_liberty {shape}.lib', f'if {{[llength [get_lib_cells */{name}]] != 1}} {{exit 1}}', f'puts "LIBERTY_CELL_OK {name}"'])
        rows.append(dict(name=name,lef_pin_count=len(pins),lef_dimensions_um=[float(v) for v in dimensions],liberty_sha256=sha(lib)))
    (work/'read-libs.tcl').write_text('\n'.join(tcl+['exit 0'])+'\n')
    transcript = subprocess.run([str(sta),'-no_init','-no_splash','-exit','read-libs.tcl'],cwd=work,capture_output=True,text=True,timeout=30,check=True).stdout
assert all('LIBERTY_CELL_OK '+x['name'] in transcript for x in rows) and 'Error:' not in transcript
log = views / 'liberty-read.log'
log.write_text(transcript,encoding='utf-8')
result=dict(status='TWO_PUBLIC_MACRO_LEF_PORTS_AND_TT_LIBERTY_PASS',source_commit=source['commit'],physical_signoff=False,
            records=rows,liberty_read_log_sha256=sha(log),download_manifest_sha256=sha(views/'download.json'),functional_status_sha256=sha(model_test),
            scope='LEF pin declarations and OpenSTA Liberty read. GDS, macro timing closure and whole-GPU equivalence remain separate.')
(views/'view-check.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
print(json.dumps(result,indent=2))