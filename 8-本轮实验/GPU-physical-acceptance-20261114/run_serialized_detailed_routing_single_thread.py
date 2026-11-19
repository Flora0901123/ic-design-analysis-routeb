
from pathlib import Path
import hashlib,json,os,re,shutil,subprocess,sys,tempfile,time
root=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*'))
exp=next(root.glob('8-*'))
sys.path.insert(0,str(next(root.glob('7-*'))))
import qualification_resource_guard as rg
rg.prepare()
rg.join()
e=exp/'GPU-physical-acceptance-20261114'
def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream,'sha256').hexdigest()
def read(path):
    return json.loads(path.read_text(encoding='utf-8-sig'))
def check(path, expected):
    actual=digest(path)
    if actual!=expected:
        raise ValueError(f'Incorrect SHA256 for {path}: {actual}')
    return path

m=read(e/'gpu-floorplan/inputs.json')
binary=check(root/m['openroad']['binary'],m['openroad']['binary_sha256'])
env=os.environ|{'LD_LIBRARY_PATH':str(binary.parents[2]/'opt/or-tools/lib')}

parents=e/'other-blocks-physical-implementation-20261117'
prep=e/'four-block-physical-inputs'
first=e/'q1-detailed-routing-20261117/status.json'
retry=e/'q0-global-route-congestion-retry-20261117/status.json'
out=e/'detailed-routing-single-thread-20261118'
out.mkdir(exist_ok=False)
tcl=r"""
set_thread_count 1
foreach lib {sky130 32x256 8x1024 8x128 20x64} {read_liberty $lib.lib}
read_db global-route.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks core_clock]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides route.guide
puts ROUTEB_DRT_START
detailed_route -output_drc detailed-drc.rpt -output_guide_coverage guide-coverage.csv -verbose 1
puts ROUTEB_DRT_RETURNED
write_db detailed.odb
write_def detailed.def
write_verilog detailed.v
if {[detailed_route_num_drvs] == 0} {
    write_abstract_lef -bloat_occupied_layers block.lef
}
check_antennas -report_violating_nets -report_file antenna.rpt
puts ROUTEB_DRT_OUTPUTS_COMPLETE
exit
"""
(out/'run.tcl').write_text(tcl)
routes=[parents/n/'status.json' for n in ('q0_LL','q2_UL','q3_UR')]
deadline=time.monotonic()+5400
while not (first.is_file() and retry.is_file() and all(p.is_file() for p in routes)):
    if time.monotonic()>deadline:
        raise TimeoutError('Waiting for global-route receipts and Q1 detailed route')
    time.sleep(20)

jobs=[]
q1=e/'q1-block-track-aligned-global-route'
jobs.append(('q1_LR',q1/'status.json',q1/'global-route.odb',q1/'q1.route.guide',read(prep/'status.json')['outputs']['q1_LR/constraint.sdc']))
for src in routes:
    data=read(src)
    name=src.parent.name
    if name=='q0_LL' and read(retry)['global_route_pass']:
        jobs.append((name,retry,retry.parent/'global-route.odb',retry.parent/'route.guide',data['sdc_sha256']))
    elif data['stages']['global_route']:
        jobs.append((name,src,src.parent/'global-route.odb',src.parent/'route.guide',data['sdc_sha256']))
    else:
        r=out/name
        r.mkdir()
        (r/'status.json').write_text(json.dumps({'source_receipt_sha256':digest(src),'status':'GLOBAL_ROUTE_NOT_PASSED','physical_signoff':False},indent=2)+'\n')
for name,src,odb,guide,sdc_hash in sorted(jobs,key=lambda job: ('q3_UR','q2_UL','q1_LR','q0_LL').index(job[0])):
    data=read(src)
    r=out/name
    r.mkdir()
    status={'source_receipt_sha256':digest(src),'run_tcl_sha256':digest(out/'run.tcl'),'physical_signoff':False}
    start=time.monotonic()
    code='TIMEOUT'
    with tempfile.TemporaryDirectory(prefix=f'routeb-{name}-drt-') as tmp:
        d=Path(tmp)
        shutil.copyfile(check(odb,(data.get('outputs') or data['files'])[odb.name]),d/'global-route.odb')
        shutil.copyfile(check(guide,(data.get('outputs') or data['files'])[guide.name]),d/'route.guide')
        (d/'constraint.sdc').symlink_to(check(prep/name/'constraint.sdc',sdc_hash))
        for lib in ('sky130.lib','32x256.lib','8x1024.lib','8x128.lib','20x64.lib'):
            row=m['inputs'][lib]
            (d/lib).symlink_to(check(root/row['path'],row['sha256']))
        print('DRT START',name,flush=True)
        with (r/'openroad.log').open('wb') as log:
            try:
                code=subprocess.run([str(binary),'-no_init','-exit',str(out/'run.tcl')],cwd=d,env=env,stdout=log,stderr=subprocess.STDOUT,timeout=7200).returncode
            except subprocess.TimeoutExpired:
                pass
        for f in ('detailed-drc.rpt','guide-coverage.csv','detailed.odb','detailed.def','detailed.v','block.lef','antenna.rpt'):
            if (d/f).is_file(): shutil.copyfile(d/f,r/f)
    log=(r/'openroad.log').read_text(errors='replace')
    status.update(exit_code=code,router_returned='ROUTEB_DRT_RETURNED' in log,router_drc_counts=[int(x) for x in re.findall(r'Number of violations\s*=\s*(\d+)', log)],resources=rg.snapshot(),elapsed_seconds=time.monotonic()-start,outputs={p.name:digest(p) for p in r.iterdir()})
    (r/'status.json').write_text(json.dumps(status,indent=2)+'\n')
    print(name,code,log[-1200:],flush=True)
