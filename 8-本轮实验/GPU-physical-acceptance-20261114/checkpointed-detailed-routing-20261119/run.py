"""Serial detailed routing with native per-iteration ODB checkpoints."""
from pathlib import Path
import fcntl
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import time

ROOT=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*'))
AUDIT=next(ROOT.glob('7-*'))
sys.path.insert(0,str(AUDIT))
from qualification_resource_guard import prepare,join,snapshot
EXP=next(ROOT.glob('8-*'))/'GPU-physical-acceptance-20261114'
OUT=Path(__file__).resolve().parent
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def sha(p):
    with p.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()
def save(p,value):
    t=p.with_suffix('.new')
    t.write_text(json.dumps(value,indent=2)+'\n')
    t.replace(p)
def verified(p,h):
    if sha(p)!=h:raise ValueError(f'Input hash differs: {p}')
    return p

TCL=r"""
set_thread_count 1
foreach lib {sky130 32x256 8x1024 8x128 20x64} {read_liberty $lib.lib}
read_db input.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks core_clock]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides route.guide
file mkdir checkpoints
set_debug_level DRT snapshot 1
detailed_route_debug -snapshot_dir checkpoints
puts ROUTEB_DETAIL_ROUTING_START
detailed_route -output_drc route-drc.rpt -drc_report_iter_step 1 -output_guide_coverage guide-coverage.csv -verbose 1
set count [detailed_route_num_drvs]
puts "ROUTEB_ROUTER_RETURNED drc=$count"
write_db routed.odb.new
file rename -force routed.odb.new routed.odb
write_def routed.def
write_verilog routed.v
check_placement
check_power_grid -net VDD
check_power_grid -net VSS
check_antennas -report_violating_nets -report_file antenna.rpt
if {$count == 0} {
    write_abstract_lef -bloat_occupied_layers block.lef
}
puts ROUTEB_DETAIL_EXPORT_COMPLETE
exit
"""
def run():
    prepare();join()
    meta=read(EXP/'gpu-floorplan/inputs.json')
    binary=verified(ROOT/meta['openroad']['binary'],meta['openroad']['binary_sha256'])
    env=os.environ|{'LD_LIBRARY_PATH':str(binary.parents[2]/'opt/or-tools/lib')}
    old=EXP/'other-blocks-physical-implementation-20261117'
    jobs=[]
    for name in ('q2_UL','q3_UR','q1_LR','q0_LL'):
        if name=='q0_LL':
            parent=EXP/'q0-global-route-congestion-retry-20261117/status.json'; key='files';guide='route.guide'
        elif name=='q1_LR':
            parent=EXP/'q1-block-track-aligned-global-route/status.json'; key='outputs';guide='q1.route.guide'
        else:parent=old/name/'status.json';key='outputs';guide='route.guide'
        proof=read(parent)
        assert proof.get('global_route_pass',proof.get('stages',{}).get('global_route',False))
        jobs.append((name,parent,key,guide))
    limits=read(EXP/'four-block-physical-inputs/status.json')['outputs']
    summary={'status':'RUNNING','physical_signoff':False,'order':[j[0] for j in jobs],'blocks':{}}
    save(OUT/'status.json',summary)
    for name,parent,key,guide in jobs:
        output=OUT/name
        output.mkdir(exist_ok=True)
        scratch=Path('/root/.cache/routeb-detail-checkpoints-20261119')/name
        scratch.mkdir(parents=True,exist_ok=True)
        proof=read(parent)
        receipt={'status':'PREPARING','physical_signoff':False,'source_receipt_sha256':sha(parent),
                 'tool_sha256':meta['openroad']['binary_sha256'],'scratch':str(scratch),
                 'signal_routing_layers':['met1','met4'],'threads':1,'source_odb_sha256':proof[key]['global-route.odb']}
        checkpoint_dir=scratch/'checkpoints'
        existing=list(checkpoint_dir.glob('drt_iter*.odb')) if checkpoint_dir.exists() else []
        if existing:
            source=max(existing,key=lambda p:int(re.search(r'iter(\d+)',p.name)[1]))
            shutil.copyfile(source,scratch/'input.odb')
            receipt['resume_checkpoint_sha256']=sha(source)
        else:
            shutil.copyfile(verified(parent.parent/'global-route.odb',proof[key]['global-route.odb']),scratch/'input.odb')
        shutil.copyfile(verified(parent.parent/guide,proof[key][guide]),scratch/'route.guide')
        sdc=EXP/'four-block-physical-inputs'/name/'constraint.sdc'
        shutil.copyfile(verified(sdc,limits[name+'/constraint.sdc']),scratch/'constraint.sdc')
        for lib in ('sky130.lib','32x256.lib','8x1024.lib','8x128.lib','20x64.lib'):
            row=meta['inputs'][lib]; target=scratch/lib
            if not target.exists():target.symlink_to(verified(ROOT/row['path'],row['sha256']))
            else:verified(target,row['sha256'])
        (output/'run.tcl').write_text(TCL)
        receipt['run_tcl_sha256']=sha(output/'run.tcl')
        initial_events=snapshot()['limits']['memory.events']
        log_path=output/'openroad.log'
        if log_path.exists():raise RuntimeError(f'Existing run logs require an explicit resume destination: {log_path}')
        with log_path.open('xb') as log:
            process=subprocess.Popen([str(binary),'-no_init','-exit',str(output/'run.tcl')],cwd=scratch,env=env,
                                     stdin=subprocess.DEVNULL,stdout=log,stderr=subprocess.STDOUT)
            receipt.update(status='RUNNING',pid=process.pid,memory_events_at_start=initial_events)
            print('START',name,process.pid,flush=True)
            save(output/'status.json',receipt)
            seen=set()
            while process.poll() is None:
                raw=log_path.read_text(errors='replace')
                violations=re.findall(r'Number of violations\s*=\s*(\d+)',raw)
                markers=re.findall(r'Start (\d+)(?:st|nd|rd|th) optimization iteration',raw)
                receipt.update(last_violations=int(violations[-1]) if violations else None,
                               iteration=int(markers[-1]) if markers else None,resources=snapshot())
                checkpoints=sorted(checkpoint_dir.glob('drt_iter*.odb'),key=lambda p:int(re.search(r'iter(\d+)',p.name)[1])) if checkpoint_dir.exists() else []
                # The router writes the next snapshot only after its prior snapshot is closed.
                if len(checkpoints)>=2:
                    stable=checkpoints[-2]
                    if stable.name not in seen:
                        dest=output/'route-checkpoint.odb.new'
                        shutil.copyfile(stable,dest)
                        dest.replace(output/'route-checkpoint.odb')
                        receipt['checkpoint']={'source':stable.name,'sha256':sha(output/'route-checkpoint.odb')}
                        seen.add(stable.name)
                    for old_file in checkpoints[:-2]:old_file.unlink()
                save(output/'status.json',receipt)
                summary['blocks'][name]={'status':receipt['status'],'last_violations':receipt['last_violations'],'iteration':receipt['iteration'],'receipt':str(output/'status.json')}
                save(OUT/'status.json',summary)
                time.sleep(20)
        code=process.returncode
        raw=log_path.read_text(errors='replace')
        result=re.search(r'ROUTEB_ROUTER_RETURNED drc=(\d+)',raw)
        returned=result is not None
        receipt.update(exit_code=code,router_returned=returned,last_violations=int(result[1]) if returned else receipt.get('last_violations'))
        exports={}
        for filename in ('routed.odb','routed.def','routed.v','route-drc.rpt','guide-coverage.csv','antenna.rpt','block.lef'):
            source=scratch/filename
            if source.is_file():
                shutil.copyfile(source,output/filename)
                exports[filename]=sha(output/filename)
        stable=sorted(checkpoint_dir.glob('drt_iter*.odb'),key=lambda p:int(re.search(r'iter(\d+)',p.name)[1])) if checkpoint_dir.exists() else []
        if stable and code==0:
            shutil.copyfile(stable[-1],output/'route-checkpoint.odb')
            receipt['checkpoint']={'source':stable[-1].name,'sha256':sha(output/'route-checkpoint.odb')}
        complete=code==0 and returned and int(result[1])==0 and 'ROUTEB_DETAIL_EXPORT_COMPLETE' in raw
        receipt.update(status='ROUTING_ZERO_DRC_EXPORTED' if complete else 'ROUTED_WITH_OPEN_VIOLATIONS' if code==0 and returned else 'PROCESS_FAILED',
                       outputs=exports,log_sha256=sha(log_path),resources=snapshot())
        save(output/'status.json',receipt)
        summary['blocks'][name]={'status':receipt['status'],'last_violations':receipt['last_violations'],'receipt_sha256':sha(output/'status.json')}
        save(OUT/'status.json',summary)
        print(name,receipt['status'],receipt['last_violations'],flush=True)
    summary['status']='FOUR_BLOCK_ROUTING_ZERO_DRC_EXPORTED' if all(v['status']=='ROUTING_ZERO_DRC_EXPORTED' for v in summary['blocks'].values()) else 'FOUR_BLOCK_ROUTING_NEEDS_REPAIR'
    save(OUT/'status.json',summary)
if __name__=='__main__':
    with (OUT/'controller.lock').open('a') as lock:
        fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
        run()
