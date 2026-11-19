from pathlib import Path
import shutil,json,hashlib
R=Path(__file__).resolve().parents[1];P=R/'student-mini-v1-cpu-gpu/sources/build/student-mini/gpu/6f151dd40a110180994d750f3b6a5bce9ab06d18b2b75d92010d8ab0514d85cf';O=R/'9-GPU复现/整机DMA重建/kernel';O.mkdir(exist_ok=True)
for n in ['student_mini.cu','device_compat.cc','common.h','Makefile']:shutil.copyfile(P/n,O/n)
p=O/'student_mini.cu';s=p.read_text();old='if(word(p,12)&1u){r->status=6;return;}';new='''if(word(p,12)&1u){
        // Reserved unmapped address is decoded by the external RTL bridge.
        const volatile uint32_t* fault_probe=(const volatile uint32_t*)(uintptr_t)0xe0000000u;
        volatile uint32_t fault_data=*fault_probe;
        (void)fault_data;
        r->status=6;return;
      }''';assert s.count(old)==1;p.write_text(s.replace(old,new));(O/'derivation.json').write_text(json.dumps({'status':'SOURCE_DERIVED_NOT_EXECUTED','parent_sha256':hashlib.sha256((P/'student_mini.cu').read_bytes()).hexdigest(),'derived_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'change':'real volatile fault-window read; status 6 retained so BUS_ERROR may only be derived from actual device status','whole_dma_pass':False},indent=2));print('Kernel source derived; not compiled or accepted')
