"""Seal one fixed-128KiB-ROM baseline/candidate pair from raw target logs."""
import argparse,hashlib,json,pathlib,re,statistics
R=pathlib.Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2),encoding='utf-8')
def decomment(raw):
    token=re.compile(rb'"(?:\\.|[^"\\])*"|/\*.*?\*/|//[^\n]*',re.S)
    return token.sub(lambda m:b' ' if m[0].startswith((b'//',b'/*')) else m[0],raw)
def trace(p):
    log=p.read_text();rows=re.findall(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',log,re.M)
    assert rows and [int(s) for s,_,_,_ in rows]==list(range(len(rows)))
    assert all(len(h.split(','))==16 and len(l.split(','))==256 for _,_,h,l in rows)
    assert log.count('STUDENT_NATIVE_CPU_COMPLETE')==1
    return rows

def main():
    ap=argparse.ArgumentParser();ap.add_argument('baseline',type=pathlib.Path);ap.add_argument('candidate',type=pathlib.Path);ap.add_argument('--out',type=pathlib.Path);a=ap.parse_args()
    dirs=[a.baseline.resolve(),a.candidate.resolve()];states=[json.loads((p/'status.json').read_text()) for p in dirs]
    b,c=states;assert b['status']==c['status']=='TRANSCRIPTS_COLLECTED';assert [s['variant'] for s in states]==['baseline','stride']
    for k in ['checkpoint_sha256','baseline_sha256','question','primary_metric','rom_capacity_bytes','simulator_sha256','target_fp_flags','verilator_version','verilator_launcher_sha256','build_jobs']:
        assert b[k]==c[k],k
    assert b['rom_capacity_bytes']==131072 and b['primary_metric']=='ttft'
    assert b['checkpoint_sha256']=='809472c0b65cab930dbf05254f23bf6dd4a13f3b6b6ee76f08e4c086a9446b74'
    gates=[p/'soc/gateware' for p in dirs]
    for name in ['sim.v','sim_header.h','sim_init.cpp','sim_config.js']:
        left,right=[(g/name).read_bytes() for g in gates]
        if name=='sim.v':left,right=decomment(left),decomment(right)
        assert left==right,name
    for p,s,g in zip(dirs,states,gates):
        assert sha(g/'obj_dir/Vsim')==s['simulator_sha256']
        assert sha(p/'soc/software/bios/bios.bin')==s['bios_sha256']
        assert sha(p/'student_mini_native_nano.c')==s['candidate_sha256']
        assert s['bios_size_bytes']<=131072
        limits=s['resource_final']['limits'];assert limits['cpu.max']=='200000 100000' and limits['memory.max']=='8589934592' and limits['memory.swap.max']=='0'
    manifests=[json.loads((p/'image/manifest.json').read_text()) for p in dirs]
    assert manifests[0]['image_sha256']==manifests[1]['image_sha256']
    assert all(m['contains_expected_tokens'] is False for m in manifests)
    for p,m in zip(dirs,manifests):assert sha(p/'image/image.bin')==m['image_sha256']
    baseline_source=(dirs[0]/'student_mini_native_nano.c').read_text()
    begin=baseline_source.index('static void matmul(');end=baseline_source.index('static void norm(',begin)
    expected_source=baseline_source[:begin]+(R/'3-优化链-P1/nano_matmul_stride.cfrag').read_text()+'\n'+baseline_source[end:]
    assert (dirs[1]/'student_mini_native_nano.c').read_text()==expected_source,'candidate changes outside matmul'
    receipt=json.loads((dirs[1]/'rtl-reuse.json').read_text())
    assert receipt['simulator_sha256']==b['simulator_sha256']
    assert pathlib.Path(receipt['parent_simulator']).resolve()==(gates[0]/'obj_dir/Vsim').resolve()
    for p in dirs:
        mk=(p/'candidate-bios/Makefile').read_text()
        assert '-ffp-contract=off -fno-fast-math' in mk
    reftrace=trace(dirs[0]/'console-000.log');records=[]
    for p,s in zip(dirs,states):
        for row in s['runs']:
            log=p/('console-%03d.log'%row['run']);assert sha(log)==row['console_sha256'];assert trace(log)==reftrace
            assert row['complete'] and row['token_match']
            raw=log.read_text();ticks=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+) elapsed_cycles=(\d+):(\d+)',raw)
            elapsed=[(int(h)<<32)|int(l) for _,_,h,l in ticks]
            intervals=[y-x for x,y in zip(elapsed,elapsed[1:])]
            summary=re.findall(r'STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+)',raw)
            assert len(summary)==1
            st,n,hi,lo=map(int,summary[0]);assert st==0 and n==len(reftrace)
            assert row['ttft_cycles']==elapsed[0] and row['session_cycles']==(hi<<32)|lo
            assert row['decode_intervals_cycles']==intervals and row['per_token_decode_cycles']==statistics.mean(intervals)
        for metric in ['ttft_cycles','per_token_decode_cycles','session_cycles']:
            assert s['metrics_mean'][metric]==statistics.mean(row[metric] for row in s['runs'])
        counter_rows=[]
        for row in s['runs']:
            raw=(p/('console-%03d.log'%row['run'])).read_text()
            found=re.findall(r'STUDENT_NATIVE_CPU status=\d+ count=\d+ cycles=\d+:\d+ instructions=(\d+):(\d+) ibus_bytes=(\d+):(\d+) dbus_bytes=(\d+):(\d+) dma_bytes=(\d+):(\d+)',raw)
            assert len(found)==1;vals=list(map(int,found[0]));counter_rows.append({key:(vals[i*2]<<32)|vals[i*2+1] for i,key in enumerate(['instructions','ibus_bytes','dbus_bytes','dma_bytes'])})
        counters={key:statistics.mean(row[key] for row in counter_rows) for key in counter_rows[0]}
        records.append({'target_logical_counters_mean':counters,'source_size_bytes':(p/'student_mini_native_nano.c').stat().st_size,'variant':s['variant'],'work':str(p),'runs':len(s['runs']),'bios_size_bytes':s['bios_size_bytes'],'bios_sha256':s['bios_sha256'],'source_sha256':s['candidate_sha256'],**s['metrics_mean']})
    improvement={k:100*(b['metrics_mean'][k]-c['metrics_mean'][k])/b['metrics_mean'][k] for k in ['ttft_cycles','per_token_decode_cycles','session_cycles']}
    counter_changes={key:records[1]['target_logical_counters_mean'][key]-records[0]['target_logical_counters_mean'][key] for key in records[0]['target_logical_counters_mean']}
    result={'target_logical_counter_deltas_candidate_minus_baseline':counter_changes,'status':'FIXED_ROM_PAIR_VERIFIED','rom_capacity_bytes':131072,'same_compiled_simulator':True,'simulator_sha256':b['simulator_sha256'],'checkpoint_sha256':b['checkpoint_sha256'],'image_sha256':manifests[0]['image_sha256'],'verilator_version':b['verilator_version'],'verilator_launcher_sha256':b['verilator_launcher_sha256'],'primary_metric':'ttft_cycles','ttft_improvement_percent':improvement['ttft_cycles'],'ttft_two_percent_threshold_met':improvement['ttft_cycles']>=2,'all_metric_improvement_percent':improvement,'token_hidden_logits_bit_identical':True,'compared_steps_per_run':len(reftrace),'hidden_values_per_run':len(reftrace)*16,'logits_values_per_run':len(reftrace)*256,'records':records,'historical_baseline_cycles_used':False,'formal_promote':False,'scope':'one prompt on one frozen Nano checkpoint; fresh full VexRiscv RTL simulations; mcycle excludes boot and input transfer','remaining_gates':'larger coverage/repetitions, complete performance panel, new ROM model PPA/resource impacts and final integration remain separate; old PPA does not apply'}
    out=a.out or R/'8-本轮实验'/('CPU-Nano固定ROM-stride-'+str(dirs[0].name.rsplit('-',1)[-1]));out.mkdir(parents=True,exist_ok=True)
    layout=out/'code-layout.json'
    if layout.exists():
        detail=json.loads(layout.read_text())
        for item,state in zip(detail['records'],states):
            assert item['source_sha256']==state['candidate_sha256'] and item['bios_bytes']==state['bios_size_bytes']
        for name,digest in detail['artifacts_sha256'].items():assert sha(out/name)==digest
        result['code_layout']=detail
    save(out/'summary.json',result)
    evidence={}
    for p,s in zip(dirs,states):
        files=[p/'status.json',p/'rom-policy.json',p/'build.log',p/'student_mini_native_nano.c',p/'image/manifest.json',p/'soc/gateware/sim.v',p/'soc/gateware/obj_dir/Vsim']+list(p.glob('console-*.log'))
        if (p/'rtl-reuse.json').exists():files.append(p/'rtl-reuse.json')
        for f in files:evidence[str(f.relative_to(R))]=sha(f)
    for rel in ['7-审计与验收/run_cpu_stride_fixedrom_trial.py','7-审计与验收/summarize_cpu_fixedrom_stride.py','3-优化链-P1/nano_matmul_stride.cfrag','7-审计与验收/inspect_cpu_stride_layout.py']:
        evidence[rel]=sha(R/rel)
    if layout.exists():
        for file in [layout]+[out/name for name in detail['artifacts_sha256']]:evidence[str(file.relative_to(R))]=sha(file)
    save(out/'evidence-sha256.json',evidence)
    title='CPU Nano固定ROM同硬件配对：matmul权重指针步进'
    lines=['# '+title,'',f"状态：真实配对通过；TTFT改善 {improvement['ttft_cycles']:.6f}%，2%门槛{'达到' if result['ttft_two_percent_threshold_met'] else '未达到'}。此结果不等于正式PROMOTE。",'', '| 变体 | TTFT周期 | 平均decode周期 | 会话周期 | BIOS字节 |','|---|---:|---:|---:|---:|']
    for r in records:lines.append(f"| {r['variant']} | {r['ttft_cycles']} | {r['per_token_decode_cycles']} | {r['session_cycles']} | {r['bios_size_bytes']} |")
    lines+=['','LiteX原来按BIOS长度自动缩小ROM，46020与46324字节导致原硬件守卫正确拒绝。新脚本在私有Builder初始化接缝调用官方 `SoC.init_rom(auto_size=False)`，两端固定128KiB；基线重新编译并重新实跑。候选只在sim.v非注释字节与3个接口文件原始字节相同后，才复制同一个Vsim和运行模块。未使用旧基线周期。','',f"模型SHA：`{b['checkpoint_sha256']}`；模拟器SHA：`{b['simulator_sha256']}`。所有token、每步16个hidden和256个logits逐位相同。两端FP32/BF16/RNE边界和整数累加顺序保持；无fast-math、无FP收缩。",'',f'公共资源组2vCPU/8GiB、无swap，构建2线程。此实验仅覆盖“{b["question"]}”，不代替完整问题集、重复性、物理签核或新ROM的PPA；旧PPA证据继续HOLD。','', '失败原始证据保留：`8-本轮实验/nano-matmul4-1794236601611273075/status.json`。', '', '复现（WSL root，需已安装锁定工具链并保持课程公共资源控制器已启用；本轮下面三条构成实际执行链，此步长候选暂无一键包装器）：','```bash',f"PY=/home/camellia/socai/student-mini-v1-cpu-gpu/sources/.venv/bin/python",f"$PY '{R}/7-审计与验收/run_cpu_stride_fixedrom_trial.py' --variant baseline --repeat 1",f"$PY '{R}/7-审计与验收/run_cpu_stride_fixedrom_trial.py' --variant stride --repeat 1 --reuse-from '<上条输出目录>'",f"$PY '{R}/7-审计与验收/summarize_cpu_fixedrom_stride.py' '<新baseline目录>' '<新matmul4目录>'",'```']
    lines+=['','逻辑计数（覆盖generate测量区间，非宿主墙钟）：','| 指标 | baseline | stride | 候选减基线 |','|---|---:|---:|---:|']
    for key,delta in counter_changes.items():lines.append(f"| {key} | {records[0]['target_logical_counters_mean'][key]} | {records[1]['target_logical_counters_mean'][key]} | {delta} |")
    lines+=['','源码及目标代码尺寸详见 `code-layout.json` 和同目录反汇编；计数和链接布局变化不能独自证明cache-miss原因。','中止草稿仅因C指针边界审查而修订，没有将其性能作为候选选择依据。']
    (out/'试验说明.md').write_text('\n'.join(lines)+'\n',encoding='utf-8');print(json.dumps({'out':str(out),**result},ensure_ascii=False,indent=2))
if __name__=='__main__':main()
