"""Build the Magic version required by the pinned Sky130A technology file."""
from pathlib import Path
import hashlib
import json
import os
import subprocess
import time

from qualification_resource_guard import prepare, join, snapshot

prepare()
join()
root = Path(__file__).resolve().parents[1]
archive = root/'9-GPU复现/downloads/magic-8.3.306/magic-8.3.306.tar.gz'
expected = '1cfd782198a5b0384712523e7e7ef89ca4e5e3446006fbfa04420aa944bf743e'
assert hashlib.sha256(archive.read_bytes()).hexdigest() == expected
output = root/'8-本轮实验/GPU-SRAM宏生成-20261111/magic-8.3.306'
output.mkdir(exist_ok=False)
work = Path('/root/.cache/routeb-magic-8.3.306')
source = work/'source'
source.mkdir(parents=True,exist_ok=True)
install = work/'install'
pdk = Path('/root/.cache/routeb-openram-b2b069c/pdk')
magicrc = pdk/'sky130A/libs.tech/magic/sky130A.magicrc'
start = time.monotonic()
state = dict(status='RUNNING',source_url='https://github.com/RTimothyEdwards/magic/tree/8.3.306',source_sha256=expected)

def run(command, label, timeout, stdin=None):
    with (output/(label+'.log')).open('wb') as log:
        subprocess.run(command,cwd=source,env=dict(os.environ,PDK_ROOT=str(pdk),PDK='sky130A'),
                       input=stdin,stdout=log,stderr=subprocess.STDOUT,check=True,timeout=timeout)

try:
    run(['tar','-xzf',str(archive),'--strip-components=1','-C',str(source)],'extract',90)
    run(['./configure',f'--prefix={install}'],'configure',180)
    run(['make','-j2'],'build',1200)
    run(['make','install'],'install',180)
    binary = install/'bin/magic'
    run([str(binary),'-dnull','-noconsole','-rcfile',str(magicrc)],'sky130-load',60,
        b'puts "ROUTEB_TECH [tech name]"\nquit -noprompt\n')
    raw = (output/'sky130-load.log').read_text()
    assert 'Magic 8.3 revision 306' in raw and 'ROUTEB_TECH sky130A' in raw
    assert 'contained errors' not in raw and 'Malformed line' not in raw
    state.update(status='MAGIC_8_3_306_SKY130A_LOAD_PASS',binary=str(binary),
                 binary_sha256=hashlib.sha256(binary.read_bytes()).hexdigest(),
                 tech_file_sha256=hashlib.sha256(magicrc.with_name('sky130A.tech').read_bytes()).hexdigest())
except Exception as exc:
    state.update(status='FAILED',error=f'{type(exc).__name__}: {exc}')
state.update(seconds=time.monotonic()-start,resources=snapshot())
(output/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps({k:v for k,v in state.items() if k!='resources'},ensure_ascii=False))
raise SystemExit(int(state['status']=='FAILED'))