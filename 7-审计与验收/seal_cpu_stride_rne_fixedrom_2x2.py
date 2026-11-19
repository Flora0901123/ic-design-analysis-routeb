"""Seal the final fixed-ROM 2x2 (stride x fixed-divisor RNE15) from fresh target logs."""
import argparse,ast,hashlib,json,pathlib,re,statistics,subprocess
from summarize_cpu_fixedrom_stride import sha,decomment,trace
R=pathlib.Path(__file__).resolve().parents[1]
METRICS=['ttft_cycles','per_token_decode_cycles','session_cycles']
def write(p,v):p.write_text(json.dumps(v,ensure_ascii=False,indent=2))
def values():
    found={}
    for n in ast.parse((R/'3-优化链-P1/modify_nano.py').read_text()).body:
        if isinstance(n,ast.Assign) and len(n.targets)==1 and isinstance(n.targets[0],ast.Name):
            name=n.targets[0].id
            if name=='anchor':found[name]=ast.literal_eval(n.value)
            if name=='r15':found[name]=found['anchor']+ast.literal_eval(n.value.right)
    return found
def rne(source,v):
    assert source.count(v['anchor'])==1
    for seam in ['rne_div((int64_t)denominator*old,32768)','rne_div(numerator[j]*old,32768)','rne_div(numerator[j]*65536,denominator)']:assert source.count(seam)==1
    return source.replace(v['anchor'],v['r15']).replace('rne_div((int64_t)denominator*old,32768)','rne15((int64_t)denominator*old)').replace('rne_div(numerator[j]*old,32768)','rne15(numerator[j]*old)')
def parse(log):
    text=log.read_text();assert text.count('STUDENT_NATIVE_CPU_COMPLETE')==1
    tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+) elapsed_cycles=(\d+):(\d+)',text)
    summary=re.findall(r'STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+) instructions=(\d+):(\d+) ibus_bytes=(\d+):(\d+) dbus_bytes=(\d+):(\d+) dma_bytes=(\d+):(\d+)',text);assert len(summary)==1
    st,n,hi,lo,*counter=map(int,summary[0]);assert st==0 and n==len(tokens) and [int(x[0]) for x in tokens]==list(range(n))
    elapsed=[(int(h)<<32)|int(l) for _,_,h,l in tokens];intervals=[y-x for x,y in zip(elapsed,elapsed[1:])];assert intervals and min(intervals)>0
    return {'ttft_cycles':elapsed[0],'per_token_decode_cycles':statistics.mean(intervals),'session_cycles':(hi<<32)|lo,'tokens':[int(x[1]) for x in tokens],'logical_counters':{key:(counter[i*2]<<32)|counter[i*2+1] for i,key in enumerate(['instructions','ibus_bytes','dbus_bytes','dma_bytes'])}}
def main():
    ap=argparse.ArgumentParser();ap.add_argument('baseline',type=pathlib.Path);ap.add_argument('stride',type=pathlib.Path);ap.add_argument('rne15',type=pathlib.Path);ap.add_argument('stride_rne15',type=pathlib.Path);ap.add_argument('--out',type=pathlib.Path);a=ap.parse_args()
    names=['baseline','stride','rne15','stride_rne15'];dirs=[getattr(a,k).resolve() for k in names];states=[json.loads((p/'status.json').read_text()) for p in dirs];base=states[0]
    assert all(s['status']=='TRANSCRIPTS_COLLECTED' and s['variant']==name for s,name in zip(states,names))
    for k in ['checkpoint_sha256','baseline_sha256','question','primary_metric','rom_capacity_bytes','simulator_sha256','target_fp_flags','verilator_version','verilator_launcher_sha256','build_jobs']:
        assert all(s[k]==base[k] for s in states),k
    assert base['rom_capacity_bytes']==131072 and base['primary_metric']=='ttft'
    assert base['checkpoint_sha256']=='809472c0b65cab930dbf05254f23bf6dd4a13f3b6b6ee76f08e4c086a9446b74'
    source=(dirs[0]/'student_mini_native_nano.c').read_text();begin=source.index('static void matmul(');end=source.index('static void norm(',begin)
    stride=source[:begin]+(R/'3-优化链-P1/nano_matmul_stride.cfrag').read_text()+'\n'+source[end:];v=values();expected=[source,stride,rne(source,v),rne(stride,v)]
    for p,e,s in zip(dirs,expected,states):
        assert (p/'student_mini_native_nano.c').read_text()==e,'unexpected source changes'
        assert sha(p/'student_mini_native_nano.c')==s['candidate_sha256']
        assert e.count('rne_div(numerator[j]*65536,denominator)')==1
        assert '-ffp-contract=off -fno-fast-math' in (p/'candidate-bios/Makefile').read_text()
    out=a.out or R/'8-本轮实验'/('CPU-Nano固定ROM-StrideRNE2x2-'+dirs[0].name.rsplit('-',1)[-1]);out.mkdir(parents=True,exist_ok=True)
    frozen=trace(dirs[0]/'console-000.log');records=[];evidence={};image_sha=None;gate0=dirs[0]/'soc/gateware'
    for name,p,s in zip(names,dirs,states):
        gate=p/'soc/gateware'
        for file in ['sim.v','sim_header.h','sim_init.cpp','sim_config.js']:
            l,r=(gate/file).read_bytes(),(gate0/file).read_bytes()
            if file=='sim.v':l,r=decomment(l),decomment(r)
            assert l==r,file
        assert sha(gate/'obj_dir/Vsim')==base['simulator_sha256']
        assert sha(p/'soc/software/bios/bios.bin')==s['bios_sha256']
        policy=json.loads((p/'rom-policy.json').read_text());assert policy['auto_size'] is False and policy['capacity_bytes']==131072
        manifest=json.loads((p/'image/manifest.json').read_text());assert manifest['contains_expected_tokens'] is False and sha(p/'image/image.bin')==manifest['image_sha256']
        if image_sha is None:image_sha=manifest['image_sha256']
        assert manifest['image_sha256']==image_sha
        if name!='baseline':
            receipt=json.loads((p/'rtl-reuse.json').read_text());assert receipt['simulator_sha256']==base['simulator_sha256'] and pathlib.Path(receipt['parent_simulator']).resolve()==(gate0/'obj_dir/Vsim').resolve()
        raw=[]
        for row in s['runs']:
            logfile=p/('console-%03d.log'%row['run']);assert sha(logfile)==row['console_sha256'] and trace(logfile)==frozen
            data=parse(logfile);assert data['tokens']==row['tokens']
            for metric in METRICS:assert data[metric]==row[metric]
            assert row['complete'] and row['token_match'];raw.append(data)
        means={k:statistics.mean(r[k] for r in raw) for k in METRICS}
        assert means==s['metrics_mean']
        logical={k:statistics.mean(r['logical_counters'][k] for r in raw) for k in raw[0]['logical_counters']}
        limits=s['resource_final']['limits'];assert limits['cpu.max']=='200000 100000' and limits['memory.max']=='8589934592' and limits['memory.swap.max']=='0'
        symbols={}
        for kind,file in [('object',p/'soc/software/bios/student_mini_native_nano.o'),('elf',p/'soc/software/bios/bios.elf')]:
            nm=subprocess.run(['riscv64-unknown-elf-nm','-S','--size-sort',str(file)],check=True,capture_output=True,text=True).stdout
            target=out/(name+'-'+kind+'-symbols.txt');target.write_text(nm);evidence[str(target.relative_to(R))]=sha(target)
            selected=[]
            for line in nm.splitlines():
                m=re.fullmatch(r'([0-9a-f]+)\s+([0-9a-f]+)\s+[tT]\s+((?:matmul|rne15|rne_div|mini_native_scalar_attention)(?:\..*)?)',line)
                if m:selected.append({'name':m[3],'address_hex':m[1],'size_bytes':int(m[2],16)})
            symbols[kind]=selected
            disassembly=''.join(subprocess.run(['riscv64-unknown-elf-objdump','-dr','--disassemble='+n['name'],str(file)],check=True,capture_output=True,text=True).stdout for n in selected)
            target=out/(name+'-'+kind+'.disasm');target.write_text(disassembly);evidence[str(target.relative_to(R))]=sha(target)
        records.append({'variant':name,'work':str(p),'runs':len(raw),'source_size_bytes':(p/'student_mini_native_nano.c').stat().st_size,'source_sha256':s['candidate_sha256'],'bios_size_bytes':s['bios_size_bytes'],'bios_sha256':s['bios_sha256'],'metrics_mean':means,'target_logical_counters_mean':logical,'code_symbols':symbols})
        files=[p/'status.json',p/'rom-policy.json',p/'build.log',p/'student_mini_native_nano.c',p/'candidate-bios/Makefile',p/'image/manifest.json',gate/'sim.v',gate/'obj_dir/Vsim']+list(p.glob('console-*.log'))
        if name!='baseline':files.append(p/'rtl-reuse.json')
        for f in files:evidence[str(f.relative_to(R))]=sha(f)
    improvements={r['variant']:{k:100*(records[0]['metrics_mean'][k]-r['metrics_mean'][k])/records[0]['metrics_mean'][k] for k in METRICS} for r in records}
    combo=improvements['stride_rne15'];gate_pass=combo['ttft_cycles']>=2 and all(combo[k]>=0 for k in METRICS)
    result={'status':'FIXED_ROM_2X2_VERIFIED','experiment':'stride x fixed32768-RNE15; final two additional variants only','primary_metric':'ttft_cycles','rom_capacity_bytes':131072,'simulator_sha256':base['simulator_sha256'],'checkpoint_sha256':base['checkpoint_sha256'],'image_sha256':image_sha,'verilator_version':base['verilator_version'],'same_compiled_simulator':True,'all_token_hidden_logits_bit_identical':True,'compared_steps_per_run':len(frozen),'hidden_values_per_run':len(frozen)*16,'logits_values_per_run':len(frozen)*256,'records':records,'improvement_percent_vs_baseline':improvements,'combination_ttft_two_percent_and_no_other_metric_regression':gate_pass,'formal_promote':False,'next_gate':'limited independent resets and frozen12 correctness' if gate_pass else 'HOLD; stop this branch','physical_ppa':'HOLD: old ROM hardware PPA does not apply','scope':'one question per variant at this stage; excludes boot/input transfer; EOS included; target mcycle not host wall time','dynamic_rne_preserved':True,'fixed_rne_call_sites_changed':2,'historical_baseline_cycles_used':False}
    write(out/'summary.json',result)
    for rel in ['7-审计与验收/run_cpu_stride_rne_fixedrom_trial.py','7-审计与验收/seal_cpu_stride_rne_fixedrom_2x2.py','3-优化链-P1/nano_matmul_stride.cfrag','3-优化链-P1/modify_nano.py']:evidence[rel]=sha(R/rel)
    write(out/'evidence-sha256.json',evidence)
    lines=['# 固定ROM CPU Nano：Stride × RNE15收尾2×2消融','',f"组合TTFT改善{combo['ttft_cycles']:.6f}%；2%且其它主指标不退化门：{'通过，待有限重启与冻结12题确认' if gate_pass else '未过，保留HOLD并停止此分支'}。正式PROMOTE仍为false，旧PPA继续HOLD。",'', '| 变体 | TTFT周期 | decode均值周期 | 会话周期 | BIOS字节 |','|---|---:|---:|---:|---:|']
    for r in records:lines.append(f"| {r['variant']} | {r['metrics_mean']['ttft_cycles']} | {r['metrics_mean']['per_token_decode_cycles']} | {r['metrics_mean']['session_cycles']} | {r['bios_size_bytes']} |")
    lines+=['','四组来自同一新128KiB/Verilator5.040 Vsim、同checkpoint和image。每步token/16个hidden/256个logits逐位一致。新两项只加入原已验证RNE15 helper，并替换两处固定32768调用；动态除法、FP32/BF16/RNE边界及k累加顺序保留。公共资源组2vCPU/8GiB、无swap，BIOS构建2线程。','', '每组源码尺寸、目标逻辑指令/Ibus/Dbus/DMA、.o/ELF函数地址与尺寸见summary.json；对应符号与反汇编已保存。代码布局和计数不单独证明cache原因。','', '原matmul4、stride证据和共享C未更改。此前两个步长实现草稿因C指针边界审查中止，没有接受其性能统计。']
    (out/'试验说明.md').write_text('\n'.join(lines)+'\n');print(json.dumps({'out':str(out),**result},ensure_ascii=False,indent=2))
if __name__=='__main__':main()
