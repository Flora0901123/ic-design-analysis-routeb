"""Read-only object/ELF inspection for one fixed-ROM CPU pair; no performance inference is made."""
import argparse,hashlib,json,pathlib,re,subprocess
R=pathlib.Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    a=argparse.ArgumentParser();a.add_argument('baseline',type=pathlib.Path);a.add_argument('candidate',type=pathlib.Path);a.add_argument('--out',type=pathlib.Path,required=True);args=a.parse_args();args.out.mkdir(exist_ok=True,parents=True);rows=[];files={}
    for label,p in [('baseline',args.baseline),('stride',args.candidate)]:
        source=p/'student_mini_native_nano.c';objects=p/'soc/software/bios';entry={'variant':label,'source_bytes':source.stat().st_size,'source_sha256':sha(source),'bios_bytes':(objects/'bios.bin').stat().st_size,'symbols':{}}
        for kind,file in [('object',objects/'student_mini_native_nano.o'),('elf',objects/'bios.elf')]:
            symbols=subprocess.run(['riscv64-unknown-elf-nm','-S','--size-sort',str(file)],check=True,capture_output=True,text=True).stdout
            path=args.out/(label+'-'+kind+'-symbols.txt');path.write_text(symbols);files[path.name]=sha(path)
            names=[]
            for line in symbols.splitlines():
                m=re.fullmatch(r'([0-9a-f]+)\s+([0-9a-f]+)\s+[tT]\s+(matmul(?:\..*)?)',line)
                if m:names.append({'name':m[3],'address_hex':m[1],'size_bytes':int(m[2],16)})
            assert names,'matmul symbol missing';entry['symbols'][kind]=names
            disasm=''.join(subprocess.run(['riscv64-unknown-elf-objdump','-dr','--disassemble='+n['name'],str(file)],check=True,capture_output=True,text=True).stdout for n in names)
            path=args.out/(label+'-'+kind+'-matmul.disasm');path.write_text(disasm);files[path.name]=sha(path)
        rows.append(entry)
    result={'status':'CODE_LAYOUT_INSPECTED','scope':'RISC-V object and final BIOS symbols/disassembly; code size and placement evidence only, not proof of cache-miss causality','records':rows,'artifacts_sha256':files,'source_size_delta_candidate_minus_baseline':rows[1]['source_bytes']-rows[0]['source_bytes'],'matmul_object_code_size_delta':sum(n['size_bytes'] for n in rows[1]['symbols']['object'])-sum(n['size_bytes'] for n in rows[0]['symbols']['object'])}
    (args.out/'code-layout.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))
if __name__=='__main__':main()
