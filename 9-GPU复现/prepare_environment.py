from pathlib import Path
import hashlib,json,os,subprocess
R=Path(__file__).resolve().parent;source=R/'vortex';tools=R/'tools';records=[]
for listing in R.glob('*-links.json'):
    for item in json.loads(listing.read_text()):
        p=source/item['path'];target=(p.parent/item['target']).resolve()
        if not target.is_relative_to(R.resolve()):raise ValueError('external link rejected')
        if p.is_symlink() and os.readlink(p)==item['target']:continue
        if p.exists():p.unlink()
        p.symlink_to(item['target']);records.append({'path':item['path'],'target':item['target']})
icd=tools/'pocl/etc/OpenCL/vendors/pocl.icd'
if icd.exists():
    before=hashlib.sha256(icd.read_bytes()).hexdigest();library=tools/'pocl/lib/libpocl.so.2.14.0'
    if not library.exists():raise ValueError('missing locked POCL library')
    icd.write_text(str(library)+'\n');records.append({'icd_relocation':str(icd),'before':before,'after':hashlib.sha256(icd.read_bytes()).hexdigest(),'library_sha256':hashlib.sha256(library.read_bytes()).hexdigest()})
versions={}
for name,p in [('clang',tools/'llvm-vortex/bin/clang'),('riscv32-g++',tools/'riscv32-gnu-toolchain/bin/riscv32-unknown-elf-g++'),('verilator',tools/'verilator/bin/verilator')]:
    process=subprocess.run([str(p),'--version'],capture_output=True,text=True);versions[name]={'exit_code':process.returncode,'stdout':process.stdout[:1200],'stderr':process.stderr[:600]}
(R/'environment-check.json').write_text(json.dumps({'relocations':records,'versions':versions,'platform_execution':False},indent=2));print(json.dumps(versions,indent=2))
build=R/'build';build.mkdir(exist_ok=True)
with (R/'configure.log').open('w') as log:
    result=subprocess.run(['bash',str(source/'configure'),'--xlen=32','--tooldir='+str(tools),'--osversion=ubuntu/focal','--prefix='+str(R/'install')],cwd=build,stdout=log,stderr=subprocess.STDOUT)
print('configure_exit',result.returncode)
raise SystemExit(result.returncode)