from pathlib import Path
import json,shutil,sys,subprocess,os,time,hashlib,signal
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.student_mini_gpu_protocol_sources import protocol_processor
D=R/'9-GPU复现/整机DMA重建';O=R/'8-本轮实验/GPU整机协议-20261108';O.mkdir(exist_ok=True);trace=json.loads((D/'trace-build/completion.json').read_text());W=Path(trace['work']);P=Path('/root/.cache/routeb-gpu-protocol-20261108');t=time.monotonic()
state={'status':'PREPARING','scope':'fresh functional macro-bound Vortex with seeded protocol bridge; distinct build from numeric replay; no original physical identity claim','parent_bindings':trace['new_bindings'],'work':str(P)}
def save():(O/'build.json').write_text(json.dumps(state,indent=2))
try:
 assert P==Path('/root/.cache/routeb-gpu-protocol-20261108')
 for name,h in trace['new_bindings'].items():assert hashlib.sha256(Path(name).read_bytes()).hexdigest()==h
 if not P.exists():shutil.copytree(W,P,symlinks=True)
 # Relocate only the independent cache copy. Repoint its internal links and textual build recipes.
 for base,dirs,files in os.walk(P,followlinks=False):
  for name in dirs+files:
   f=Path(base)/name
   if f.is_symlink():
    target=os.readlink(f)
    if str(W) in target:f.unlink();f.symlink_to(target.replace(str(W),str(P)),target_is_directory=f.is_dir())
   elif f.is_file() and f.stat().st_size<12000000:
    raw=f.read_bytes()
    if b'\0' not in raw and str(W).encode() in raw:f.write_bytes(raw.replace(str(W).encode(),str(P).encode()))
 private=P/'source/sim/rtlsim';before=(D/'trace-build/processor-before.cpp').read_text();processor=protocol_processor(before);(private/'processor.cpp').write_text(processor)
 bridge=S/'tests/rtl/student_mini_gpu_protocol_bridge.sv';(private/'protocol-bridge.sv').write_bytes(bridge.read_bytes())
 f=private/'Makefile';old='/tmp/routeb-course-source/tests/rtl/student_mini_gpu_fault_bridge.sv';s=f.read_text();assert s.count(old)==1 or str(private/'protocol-bridge.sv') in s;s=s.replace(old,str(private/'protocol-bridge.sv'));f.write_text(s)
 f=P/'vortex-build/sim/rtlsim/Makefile';s=f.read_text();assert s.count(old)==1 or str(private/'protocol-bridge.sv') in s;f.write_text(s.replace(old,str(private/'protocol-bridge.sv')))
 for name in ['integration/student-mini/gpu_status_command_adapter.sv','integration/student-mini/gpu_fault_memory_adapter.sv','shared/rtl/vortex_banked_large_sram_wrappers.sv']:
  target=private/Path(name).name;target.write_bytes((S/name).read_bytes())
  for mf in [private/'Makefile',P/'vortex-build/sim/rtlsim/Makefile']:
   mf.write_text(mf.read_text().replace('/tmp/routeb-course-source/'+name,str(target)))
 # Preserve root executable and kernel source bytes; protocol stimulus stays outside the kernel.
 state['bindings']={str(f):hashlib.sha256(f.read_bytes()).hexdigest() for f in [private/'processor.cpp',private/'protocol-bridge.sv',P/'student_mini.cu',P/'student_mini',D/'project-banked.v']};state['status']='BUILDING';save()
 env=dict(os.environ,CHIP_BE='opencl',HIP_CLANG_PATH='/root/.cache/routeb-dma-rebuild/locked-tools/llvm-vortex/bin',MAKEFLAGS='-j1',THREADS='1',VERILATOR_ROOT='/tmp/routeb-verilator-5040-install/share/verilator',VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120',STUDENT_MINI_PROTOCOL='0,1,0,0')
 tool=Path('/root/.cache/routeb-protocol-tools/verilator-5.040')
 if not tool.exists():shutil.copytree(R/'9-GPU复现/tools/verilator-5.040',tool,symlinks=False)
 for n in ['bin/verilator','bin/verilator_bin']:
  assert hashlib.sha256((tool/n).read_bytes()).digest()==hashlib.sha256((R/'9-GPU复现/tools/verilator-5.040'/n).read_bytes()).digest()
 obj=P/'vortex-build/sw/runtime/librtlsim.so.obj_dir'
 if obj.exists() and not (P/'failed-obj-before-ascii-tool').exists():obj.rename(P/'failed-obj-before-ascii-tool')
 env['VERILATOR_PATH']=str(tool);env['VERILATOR_ROOT']=str(tool/'share/verilator')
 state['verilator_ascii_cache']=str(tool);state['verilator_version']=subprocess.check_output([str(tool/'bin/verilator'),'--version'],env=env,text=True).strip();save()
 inputs=json.loads((W/'build.json').read_text())['input_directory']
 with (O/'build.log').open('w') as log:
  child=subprocess.Popen(['make','-j1','-C',str(P),'run-rtlsim','PERF=1','THREADS=1',f'VERILATOR_PATH={tool}',f'OPTS={inputs}/inputs.bin 0 1'],env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=child.wait(timeout=2400)
  except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();code='TIMEOUT'
 assert code==0,'protocol build/control failed: '+str(code)
 text=(O/'build.log').read_text(errors='replace');assert 'STUDENT_GPU_COMPLETE start=0 count=1' in text and 'stability_violations=0' in text
 state.update(status='PROTOCOL_BUILD_AND_CONTROL_PASS',seconds=time.monotonic()-t,run_command=(P/'run-command.sh').read_text(),input_directory=inputs,binary_bindings={str(f):hashlib.sha256(f.read_bytes()).hexdigest() for f in [P/'student_mini',P/'vortex-build/sw/runtime/librtlsim.so']})
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k!='run_command'},indent=2))
