from pathlib import Path
import json,subprocess,hashlib,shlex,shutil,time
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];D=R/'9-GPU复现/整机DMA重建';receipt=json.loads((D/'trace-build/completion.json').read_text());W=Path(receipt['work']);O=R/'8-本轮实验/GPU单轮多类计数运行库-20261108';O.mkdir(exist_ok=True);L=O/'runtime';L.mkdir(exist_ok=True);src=W/'source/sw/runtime/common/perf.cpp';text=src.read_text();before=text
anchor='extern "C" vx_result_t vx_device_dump_perf(vx_device_h hdevice, FILE *stream) {';assert text.count(anchor)==1
text=text.replace(anchor,'static vx_result_t routeb_dump_perf_class(vx_device_h hdevice, FILE *stream, uint32_t mpm_class) {');line='  const auto mpm_class = get_profiling_mode();';assert text.count(line)==1;text=text.replace(line,'')
text+='\n// Host-only observation after target completion. No target execution or outputs are synthesized.\nextern "C" vx_result_t vx_device_dump_perf(vx_device_h hdevice, FILE *stream) {\n  if (!std::getenv("ROUTEB_MULTI_PERF")) return routeb_dump_perf_class(hdevice,stream,get_profiling_mode());\n  if (!stream) stream=stdout;\n  for (uint32_t group : {0u, uint32_t(VX_DCR_MPM_CLASS_DCACHE), uint32_t(VX_DCR_MPM_CLASS_MEM)}) {\n    std::fprintf(stream,"ROUTEB_PERF_CLASS_BEGIN group=%u\\n",group);\n    auto code=routeb_dump_perf_class(hdevice,stream,group);\n    std::fprintf(stream,"ROUTEB_PERF_CLASS_END group=%u code=%d\\n",group,int(code));\n    if (code!=VX_SUCCESS) return code;\n  }\n  std::fflush(stream); return VX_SUCCESS;\n}\n'
copy=O/'perf-multiclass.cpp';copy.write_text(text);(O/'perf-before.cpp').write_text(before)
flags='-DVX_CFG_FPU_TYPE=STD -DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD'
cmd=['make','-n','-C',str(W/'vortex-build/sw/runtime/stub'),'DESTDIR='+str(L),'CONFIGS='+flags];plan=subprocess.check_output(cmd,text=True);(O/'make-plan.log').write_text(plan);lines=[s for s in plan.splitlines() if s.startswith('g++ ')];assert len(lines)==1
args=shlex.split(lines[0]);assert args.count(str(src))==1;args=[str(copy) if x==str(src) else x for x in args];(O/'command.json').write_text(json.dumps(args,indent=2));start=time.monotonic()
with (O/'build.log').open('w') as log:p=subprocess.run(args,stdout=log,stderr=subprocess.STDOUT,timeout=600)
assert p.returncode==0,'runtime compile failed'
for name in ['librtlsim.so','libvortex-rtlsim.so']:
 f=L/name;assert not f.exists();f.symlink_to(W/'vortex-build/sw/runtime'/name)
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert all(sha(Path(p))==h for p,h in receipt['new_bindings'].items())
state={'status':'MULTICLASS_RUNTIME_BUILT_NOT_QUALIFIED','runtime_directory':str(L),'changed_source':'perf.cpp report routine only','target_RTL_changed':False,'target_kernel_changed':False,'parent_source_sha256':sha(src),'derived_source_sha256':sha(copy),'library_sha256':sha(L/'libvortex.so'),'seconds':time.monotonic()-start,'parent_bindings':receipt['new_bindings'],'resource_snapshot':snapshot()};(O/'build.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
