
from pathlib import Path
import hashlib,json,os,re,shutil,subprocess,sys,tempfile,time
root=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*'))
exp=next(root.glob('8-*')); audit=next(root.glob('7-*'))
sys.path.insert(0,str(audit))
from qualification_resource_guard import prepare,join
prepare();join()
p=exp/'GPU-physical-acceptance-20261114'
native=p/'8x128-v3-native-lvs'
macro=next(exp.glob('GPU-SRAM*20261111'))
prior=macro/'geometry-repair-v3-run-20261114-140621/8x128'
candidate=macro/'write-control-route-run-20261118-144951'
out=candidate/'8x128/independent-write-control-verification'
name='routeb_new_1w1r_8x128'
def read(path):return json.loads(path.read_text(encoding='utf-8-sig'))
def sha(path):
    with path.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()
def write(data):
    temp=out/'status.tmp'
    temp.write_text(json.dumps(data,indent=2)+'\n')
    temp.replace(out/'status.json')

def top_pins(path,top):
    cells={}
    current=None
    lines=re.sub(r'\r?\n\s*\+', ' ',path.read_text()).splitlines()
    for line in lines:
        if line.lower().startswith('.subckt '):
            _,current,*ports=line.split()
            cells[current]=(ports,[])
        elif line.lower().startswith('.ends'):
            current=None
        elif current and line.startswith(('X','x')):
            cells[current][1].append(line.split())
    bank=[x[1:] for x in cells[top][1] if x[-1]==top+'_bank']
    assert len(bank)==1
    ports=cells[top+'_bank'][0]
    assert len(ports)==len(bank[0])-1
    return dict(zip(ports,bank[0][:-1]))
def checks(path,top,width):
    pins=top_pins(path,top)
    return {c:[i for i in range(width) if pins[c]==pins[f'din0_{i}']] for c in ('p_en_bar0','w_en0')}

assert checks(native/(name+'.sp'),name,8)=={'p_en_bar0':[],'w_en0':[]}
before=checks(native/(name+'.spice'),name,8)
assert before=={'p_en_bar0':[7],'w_en0':[1]},before
base20=macro/'geometry-repair-v2-run-20261114-125749/20x64'
name20='routeb_new_1w1r_20x64'
other=checks(base20/'lvs-native-reference'/(name20+'.spice'),name20,20)
deadline=time.monotonic()+900
while True:
    generated=read(candidate/'status.json')
    if generated['status']!='RUNNING':break
    if time.monotonic()>deadline:raise TimeoutError('Waiting for OpenRAM candidate')
    time.sleep(5)
assert generated['status']=='LAYOUT_VIEWS_GENERATED_NEEDS_INDEPENDENT_CHECK',generated['status']
files=generated['records'][0]['files']
source=candidate/'8x128'
gds=source/(name+'.gds')
ref=source/(name+'.lvs.sp')
for f in (gds,ref):assert sha(f)==files[f.name]
assert out.is_dir() and (out/'run.py').is_file()
metadata=read(native/'inputs.json')
netgen=Path(next(p for p in metadata['tools'] if p.endswith('/netgen')))
magic=Path(next(p for p in metadata['tools'] if p.endswith('/magic')))
assert all(sha(tool)==metadata['tools'][str(tool)] for tool in (netgen,magic))
pdk=Path('/root/.cache/routeb-openram-b2b069c/pdk')
tech=pdk/'sky130A/libs.tech/magic/sky130A.tech'
assert sha(tech)==next(h for f,h in metadata['inputs'].items() if f.endswith('/sky130A.tech'))
state={'status':'RUNNING','gds_sha256':sha(gds),'schematic_sha256':sha(ref),'power_and_data_connections_before':before,
       '20x64_different_candidate_connections':other,'physical_signoff':False}
print(state,flush=True)
write(state)
with tempfile.TemporaryDirectory(prefix='routeb-write-control-signoff-') as d:
    tmp=Path(d)
    for f,dest in ((gds,name+'.gds'),(ref,name+'.sp'),(native/'.magicrc','.magicrc'),(native/'setup.tcl','setup.tcl')):
        shutil.copy2(f,tmp/dest)
    scripts={'extract':native/'run_ext.sh','drc':prior/'recheck-magic-8.3.306/run_drc.sh'}
    env=os.environ|{'PDK_ROOT':str(pdk)}
    def run_phase(command,phase):
        with (out/(phase+'.log')).open('wb') as f:
            try: return subprocess.run(command,cwd=tmp,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=1200).returncode
            except subprocess.TimeoutExpired:return 'TIMEOUT'
    for phase,script in scripts.items():
        state[phase+'_script_sha256']=sha(script)
        state[phase+'_exit_code']=run_phase(['sh',str(script)],phase)
        write(state)
    extracted=tmp/(name+'.spice')
    if extracted.is_file():
        state['after']=checks(extracted,name,8)
        state['extract_sha256']=sha(extracted)
        shutil.copy2(extracted,out/extracted.name)
        script=tmp/'lvs.tcl'
        script.write_text(f'lvs {{{name}.spice {name}}} {{{name}.sp {name}}} setup.tcl lvs.report -full -json\nquit\n')
        shutil.copy2(script,out/script.name)
        state['lvs_exit_code']=run_phase([str(netgen),'-batch','source',script.name],'lvs')
        for f in tmp.glob('lvs.*'):
            if f.suffix in {'.report','.json'}:shutil.copy2(f,out/f.name)
        if (out/'lvs.report').exists():
            state['lvs_conclusion']=[l.strip() for l in (out/'lvs.report').read_text().splitlines() if 'Final result:' in l][-1:]
    full_drc=re.findall(r'Total DRC errors found:\s*(\d+)',(out/'drc.log').read_text(errors='replace'))
    state['drc_counts']=[int(n) for n in full_drc]
    state['status']='LAYOUT_TRIAL_INDEPENDENT_RESULTS'
    write(state)
    print(state,flush=True)
