from pathlib import Path
import os,subprocess,json,time,shutil,hashlib,sys
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';C=Path('/root/.cache/routeb-dma-rebuild');B=C/'vortex-build';B.mkdir(exist_ok=True)
for name,target in [('routeb-dma-vortex',R/'9-GPU复现/vortex'),('routeb-dma-tools',R/'9-GPU复现/tools'),('routeb-verilator-5040-install',R/'9-GPU复现/tools/verilator-5.040')]:
 p=Path('/tmp')/name
 if p.is_symlink():assert p.resolve()==target.resolve()
 else:p.symlink_to(target,target_is_directory=True)
V=C/'vendor-source';T=Path('/tmp/routeb-dma-tools');config=C/'configure-fixed';text=(V/'configure').read_text();text='\n'.join('SOURCE_DIR="'+str(V)+'"' if line.startswith('SOURCE_DIR=') else line for line in text.splitlines())+'\n';config.write_text(text);config.chmod(0o755);sv=Path(json.loads((O/'sv2v-source.json').read_text())['binary']);env=dict(os.environ,VERILATOR_ROOT='/tmp/routeb-verilator-5040-install/share/verilator',PATH='/tmp/routeb-verilator-5040-install/bin:'+os.environ['PATH'],MAKEFLAGS='-j2');state={'status':'EXTRACTING_FRESH_ASIC_BOUNDARY','reference_physical_identity':False,'steps':[]};t=time.monotonic()
try:
 for name,cmd,cwd,timeout in [('configure',[str(config),'--xlen=32','--tooldir='+str(T),'--osversion=ubuntu/focal','--prefix='+str(C/'install')],B,180),('export',['make','-j2','-C',str(B/'hw/syn/yosys'),'gen-sources','PERF=1','CONFIGS=-DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD','PREFIX='+str(C/'mini'),'SV2V='+str(sv),'VERILATOR=/tmp/routeb-verilator-5040-install/bin/verilator'],C,900)]:
  st=time.monotonic();(O/'export-status.json').write_text(json.dumps(state,indent=2))
  with (O/(name+'.log')).open('w') as f:p=subprocess.run(cmd,cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=timeout)
  state['steps'].append({'step':name,'exit_code':p.returncode,'seconds':time.monotonic()-st});assert p.returncode==0,name
 project=C/'mini_Vortex/project.v';assert project.is_file();shutil.copyfile(project,O/'project-unmapped.v');state.update(status='FRESH_ASIC_BOUNDARY_EXPORTED',source_sha256=hashlib.sha256(project.read_bytes()).hexdigest(),bytes=project.stat().st_size)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
state['seconds']=time.monotonic()-t;(O/'export-status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2));sys.exit(0 if state['status']=='FRESH_ASIC_BOUNDARY_EXPORTED' else 1)
