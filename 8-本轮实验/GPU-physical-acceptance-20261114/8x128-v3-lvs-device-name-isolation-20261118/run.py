from pathlib import Path
import hashlib,json,os,re,shutil,subprocess,sys,time
r=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*')); x=next(r.glob('8-*'))
p=x/'GPU-physical-acceptance-20261114'; src=p/'8x128-v3-native-lvs'
out=p/'8x128-v3-lvs-device-name-isolation-20261118'
sys.path.insert(0,str(next(r.glob('7-*'))))
from qualification_resource_guard import prepare,join
prepare();join()
def sha(f):return hashlib.sha256(f.read_bytes()).hexdigest()
def read(f):return json.loads(f.read_text(encoding='utf-8-sig'))
proof=read(src/'inputs.json')
tool=Path(next(k for k in proof['tools'] if k.endswith('/netgen')))
assert sha(tool)==proof['tools'][str(tool)]
name='routeb_new_1w1r_8x128'
layout=src/(name+'.spice')
reference=src/(name+'.sp')
assert sha(reference)==next(v for k,v in proof['inputs'].items() if k.endswith('.lvs.sp'))
schematic=reference.read_text()
pat=r'^(X\S+[^\r\n]*?)\bsky130_fd_pr__special_nfet_01v8\b(?=[^\r\n]*\bw=0\.36u(?:\s|$))(?=[^\r\n]*\bl=0\.15u(?:\s|$))'
transferred,n=re.subn(pat,lambda m:m[1]+'sky130_fd_pr__nfet_01v8',schematic,flags=re.M|re.I)
assert n>0
assert (out/'run.py').is_file()
shutil.copyfile(layout,out/'extract.spice')
shutil.copyfile(src/'setup.tcl',out/'setup.tcl')
(out/'alias-diagnostic.sp').write_text(transferred)
results=[]
for unit in ('control_logic_r','control_logic_w','bank','top'):
    subckt=name if unit=='top' else name+'_'+unit
    script=out/(unit+'.tcl')
    report=out/(unit+'.report')
    script.write_text(f'lvs {{extract.spice {subckt}}} {{alias-diagnostic.sp {subckt}}} setup.tcl {report.name} -full -json\nquit\n')
    started=time.monotonic()
    with (out/(unit+'.log')).open('wb') as f:
        code=subprocess.run([str(tool),'-batch','source',script.name],cwd=out,stdout=f,stderr=subprocess.STDOUT,timeout=600).returncode
    lines=report.read_text(errors='replace').splitlines() if report.exists() else []
    result={'scope':unit,'exit_code':code,'pin_or_match_lines':[line.strip() for line in lines if 'Final result:' in line or 'Top level cell failed' in line or 'Netlists match' in line][-5:],
            'last_mismatch_counts':[line.strip() for line in lines if 'Number of nets' in line and 'Mismatch' in line][-3:],
            'elapsed_seconds':time.monotonic()-started,'report_sha256':sha(report) if report.exists() else None}
    results.append(result)
    print(result,flush=True)
    (out/'status.json').write_text(json.dumps({'scope':'Diagnostic schematic device model-label alias only; locked PDK and GDS unchanged','physical_signoff':False,
        'pinned_netgen_sha256':sha(tool),'layout_extract_sha256':sha(layout),'original_reference_sha256':sha(reference),
        'narrow_device_label_changes':n,'results':results},indent=2)+'\n')
