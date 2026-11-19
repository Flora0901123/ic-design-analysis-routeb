from pathlib import Path
import subprocess,json
R=Path(__file__).resolve().parents[1];out=R/'8-本轮实验/CPU完整优化对照';out.mkdir(exist_ok=True);meta={}
for variant in ['baseline','topk']:
    folder=max((R/'8-本轮实验').glob('*-cpu-'+variant),key=lambda p:p.name);work=json.loads((folder/'run.log').read_text().splitlines()[0])['work'];elf=Path(work)/'soc/software/bios/bios.elf';binary=elf.with_suffix('.bin')
    with (out/(variant+'-bios.disasm.txt')).open('w') as f:subprocess.run(['riscv64-unknown-elf-objdump','-dr',str(elf)],stdout=f,check=True)
    sizes=subprocess.check_output(['riscv64-unknown-elf-size','-A',str(elf)],text=True);(out/(variant+'-bios-sections.txt')).write_text(sizes)
    report=json.loads((folder/'official-numeric-report.json').read_text());stats={}
    for op in ['p1','p2','p3']:
        rows=[r['observation'] for r in report['records'] if r['case']['operator']==op];stats[op]={field:sum(r[field] for r in rows)/len(rows) for field in ['cycles','instructions','ibus_bytes','dbus_bytes','dma_bytes']}
    meta[variant]={'bios_bytes':binary.stat().st_size,'counter_means':stats,'scope':'software size/accepted bus traffic; not area or power measurement'}
(out/'side-effects-and-counters.json').write_text(json.dumps(meta,indent=2));print(json.dumps(meta,indent=2))