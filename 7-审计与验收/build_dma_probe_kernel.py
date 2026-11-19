from pathlib import Path
import os,subprocess,json,time
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';K=O/'kernel';T=R/'9-GPU复现/tools';env=dict(os.environ,CHIP_BE='opencl',HIP_CLANG_PATH=str(T/'llvm-vortex/bin'),MAKEFLAGS='-j2',THREADS='2',CUDA_VISIBLE_DEVICES='',HIP_VISIBLE_DEVICES='');env['PATH']=':'.join(str(T/x/'bin') for x in ['chipstar','llvm-vortex','riscv32-gnu-toolchain'])+':'+env['PATH'];then=time.monotonic()
with (K/'compile.log').open('w') as f:p=subprocess.run(['make','-j2','-C',str(K),'all','PERF=1','THREADS=2'],env=env,stdout=f,stderr=subprocess.STDOUT,timeout=600)
state={'status':'KERNEL_BUILT' if p.returncode==0 else 'FAILED','exit_code':p.returncode,'seconds':time.monotonic()-then,'whole_gpu_dma_pass':False};(K/'build-status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state))
