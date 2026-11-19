"""Fixed-ROM CPU Nano experiment. A newly compiled 128KiB model is paired by strict RTL checks; historical cycles are not a baseline."""
import argparse,ast,hashlib,json,os,pathlib,queue,re,statistics,subprocess,sys,threading,time,shutil
R=pathlib.Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources'
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
os.environ['COURSE_PYTHON']='/home/camellia/socai/student-mini-v1-cpu-gpu/sources/.venv/bin/python'
os.environ['COURSE_LIBC_CACHE']=str(R/'8-本轮实验/nano-baseline-1793253668984369265/soc/software/libc')

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    a=argparse.ArgumentParser();a.add_argument('--question',default='一加一等于几');a.add_argument('--variant',choices=['rne15','stride_rne15'],default='rne15');a.add_argument('--repeat',type=int,default=1);a.add_argument('--reuse-from',type=pathlib.Path);args=a.parse_args()
    if args.variant not in ['rne15','stride_rne15']:raise ValueError('final experiment permits only RNE15 and stride+RNE15')
    if args.reuse_from is None:raise ValueError('requires the completed fixed-ROM baseline')
    if args.reuse_from is not None:
        prior=json.loads((args.reuse_from/'status.json').read_text())
        if prior.get('status')!='TRANSCRIPTS_COLLECTED' or prior.get('rom_capacity_bytes')!=0x20000 or prior.get('variant')!='baseline':raise ValueError('reference must be a completed fixed-ROM baseline')
    requested_variant=args.variant
    if args.variant=='topk':args.variant='baseline'
    elif args.variant=='topk_legacy':args.variant='topk'
    if not 1<=args.repeat<=100:raise ValueError('repeat must be 1..100')
    sys.path[:0]=[str(S),str(S/'shared/python')]
    from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime
    from scripts.export_student_mini_native_image import pack,header
    checkpoints=list((R/'8-本轮实验/历史原始证据归档/native-nano').glob('*/ptq.npz'))
    if len(checkpoints)!=1:raise ValueError('select exactly one archived checkpoint')
    ck=checkpoints[0];assert sha(ck)=='809472c0b65cab930dbf05254f23bf6dd4a13f3b6b6ee76f08e4c086a9446b74','frozen checkpoint differs';inputs=json.loads((ck.parent/'inputs.json').read_text());rt=MiniNanoRuntime.from_npz(ck)
    source=S/'software/student_mini_native_nano.c';original=source.read_bytes();text=original.decode()
    tree=ast.parse((R/'3-优化链-P1/modify_nano.py').read_text());values={}
    for n in tree.body:
        if isinstance(n,ast.Assign) and len(n.targets)==1 and isinstance(n.targets[0],ast.Name):
            name=n.targets[0].id
            if name in ['anchor','old_sort','new_sort']:values[name]=ast.literal_eval(n.value)
            if name=='r15':values[name]=values['anchor']+ast.literal_eval(n.value.right)
    # Normalize a previously modified source to the historical baseline.
    text=text.replace(values['r15'],values['anchor']).replace(values['new_sort'],values['old_sort']).replace('rne15((int64_t)denominator*old)','rne_div((int64_t)denominator*old,32768)').replace('rne15(numerator[j]*old)','rne_div(numerator[j]*old,32768)')
    v2=(R/'3-优化链-P1/topk_v2.cfrag').read_text()
    text=text.replace(v2,values['old_sort'])
    baseline=text
    if args.variant=='stride_rne15':
        begin=text.index('static void matmul(');end=text.index('static void norm(',begin);text=text[:begin]+(R/'3-优化链-P1/nano_matmul_stride.cfrag').read_text()+'\n'+text[end:]
    if args.variant in ['topk_v2','topk_v2_combined']:
        if text.count(values['old_sort'])!=1:raise ValueError('unknown sort seam')
        text=text.replace(values['old_sort'],v2)
    if args.variant=='topk_v3':
        helper="""
static __attribute__((noinline)) void mini_topk4(unsigned *ids,const int32_t *scores,unsigned visible) {
    for(unsigned i=1;i<visible;++i) {
        unsigned token=ids[i],pos=i<4?i:4;
        while(pos && (scores[token]>scores[ids[pos-1]] || (scores[token]==scores[ids[pos-1]] && token<ids[pos-1]))) {
            if(pos<4)ids[pos]=ids[pos-1];
            --pos;
        }
        if(pos<4)ids[pos]=token;
    }
}
"""
        text=text.replace('static int64_t rne_div', 'static void mini_topk4(unsigned *,const int32_t *,unsigned);\nstatic int64_t rne_div',1)
        text=text.replace(values['old_sort'],'        if(prefill) { mini_topk4(ids,scores,visible); if(count>4)count=4; }')+helper
    if args.variant in ['topk','combined']:
        if text.count(values['old_sort'])!=1:raise ValueError('unknown sort seam')
        text=text.replace(values['old_sort'],values['new_sort'])
    if args.variant in ['rne15','stride_rne15']:
        if text.count(values['anchor'])!=1 or text.count('rne_div((int64_t)denominator*old,32768)')!=1 or text.count('rne_div(numerator[j]*old,32768)')!=1:raise ValueError('unknown fixed RNE seams')
        if text.count('rne_div(numerator[j]*65536,denominator)')!=1:raise ValueError('dynamic RNE seam differs')
        text=text.replace(values['anchor'],values['r15']).replace('rne_div((int64_t)denominator*old,32768)','rne15((int64_t)denominator*old)').replace('rne_div(numerator[j]*old,32768)','rne15(numerator[j]*old)')
    out=R/'8-本轮实验'/('nano-fixedrom-final-'+args.variant+'-'+str(time.time_ns()));out.mkdir(parents=True)
    private_bios=out/'candidate-bios';shutil.copytree(S/'integration/litex/native_nano_bios',private_bios);make=private_bios/'Makefile';make.write_text(make.read_text().replace('VPATH = ','CFLAGS += -I$(COURSE_ROOT)/software\nVPATH = $(COURSE_NATIVE_CANDIDATE_DIR):'));os.environ['COURSE_NATIVE_CANDIDATE_DIR']=str(out)
    state={'status':'RUNNING','experiment':'final-2x2-stride-rne15','fixed_rne_replacements':2,'dynamic_rne_preserved':True,'variant':args.variant,'requested_variant':requested_variant,'selection_policy':'Nano Top-K defaults to verified baseline fallback; experimental candidates require explicit names','question':args.question,'repeat_requested':args.repeat,'formal_baseline':False,'rom_capacity_bytes':0x20000,'resource_before':snapshot(),'comparison_policy':'fresh baseline and candidate on exactly one newly compiled 128KiB ROM RTL model; no historical cycles used','checkpoint_sha256':sha(ck),'baseline_sha256':hashlib.sha256(baseline.encode()).hexdigest(),'candidate_sha256':hashlib.sha256(text.encode()).hexdigest(),'primary_metric':'ttft','primary_metric_registration':'new experiments only, not retrospective registration of historical runs'}
    (out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
    try:
        (out/'student_mini_native_nano.c').write_text(text)
        blob,manifest=pack(rt,inputs['tokenizer'],args.question);image_dir=out/'image';image_dir.mkdir()
        (image_dir/'image.bin').write_bytes(blob);(image_dir/'student_mini_native_image.h').write_text(header(manifest))
        manifest.update(contains_expected_tokens=False,image_sha256=sha(image_dir/'image.bin'),checkpoint_sha256=sha(ck));(image_dir/'manifest.json').write_text(json.dumps(manifest,indent=2))
        expected=rt.generate(manifest['prompt_tokens']);(out/'host-golden.json').write_text(json.dumps({'tokens':expected,'scope':'host-side check only; never sent to target'}))
        loader=out/'loader.bin';loader.write_bytes(blob+bytes((-len(blob))%1936))
        py=pathlib.Path(os.environ.get('COURSE_PYTHON',str(S/'.venv/bin/python')))
        state['python_executable']=str(py)
        os.environ.update(PATH=str(py.parent)+':'+os.environ.get('PATH',''),PYTHON=str(py),COURSE_ROOT=str(S),COURSE_NATIVE_IMAGE_DIR=str(image_dir),COURSE_VERILATOR_BIN='/root/.cache/routeb-protocol-tools/verilator-5.040/bin/verilator',VERILATOR_ROOT='/root/.cache/routeb-protocol-tools/verilator-5.040/share/verilator',MAKEFLAGS='-j2',JOBS='2')
        verilator=pathlib.Path(os.environ['COURSE_VERILATOR_BIN']);state['verilator_path']=str(verilator);state['verilator_launcher_sha256']=sha(verilator);state['verilator_version']=subprocess.run([str(verilator),'--version'],check=True,capture_output=True,text=True).stdout.strip();assert state['verilator_version'].startswith('Verilator 5.040 '),'locked Verilator required'
        state['target_fp_flags']=['-ffp-contract=off','-fno-fast-math'];state['build_jobs']=2
        from litex.soc.integration.builder import Builder
        from integration.litex.soc import build_soc
        original_add=Builder.add_software_package
        def add(self,name,*xs,**kw):return original_add(self,name,str(private_bios)) if name=='bios' else original_add(self,name,*xs,**kw)
        Builder.add_software_package=add
        # Use LiteX's supported no-resize parameter at the private initialization seam.
        # The ROM remains the configured 128KiB for both BIOS images. No RTL check is weakened.
        original_initialize=Builder._initialize_rom_software
        def initialize(self):
            from litex.soc.integration import soc_core
            bios=pathlib.Path(self.software_dir)/'bios/bios.bin'
            data=soc_core.get_mem_data(str(bios),data_width=self.soc.bus.data_width,endianness=self.soc.cpu.endianness)
            if bios.stat().st_size>0x20000:raise ValueError('BIOS exceeds fixed 128KiB ROM')
            self.soc.init_rom(name='rom',contents=data,auto_size=False)
            if self.soc.rom.mem.depth*self.soc.bus.data_width//8!=0x20000:raise ValueError('ROM depth changed')
            state.update(bios_size_bytes=bios.stat().st_size,bios_sha256=sha(bios),rom_init_words=len(data))
            (out/'rom-policy.json').write_text(json.dumps({'capacity_bytes':0x20000,'bios_bytes':bios.stat().st_size,'auto_size':False,'method':'Builder._initialize_rom_software calls SoC.init_rom(auto_size=False); all source remains private'},indent=2))
        Builder._initialize_rom_software=initialize
        original_generate=Builder._generate_rom_software
        def generate(self,*xs,**kw):
            cache=os.environ.get('COURSE_LIBC_CACHE')
            if cache:
                cached=pathlib.Path(cache);dest=pathlib.Path(self.software_dir)/'libc';dest.mkdir(parents=True,exist_ok=True)
                libc=next(pathlib.Path(folder) for name,folder in self.software_packages if name=='libc')
                subprocess.run(['make','-s','-C',str(dest),'-f',str(libc/'Makefile'),'cross.txt'],check=True)
                def headers(folder):
                    result={}
                    for file in folder.rglob('*'):
                        if file.is_file() and file.suffix in ['.h','.ld']:
                            content=re.sub(r'(?m)^(// Auto-generated by LiteX .*? on ).*$',r'\1<TIMESTAMP>',file.read_text())
                            result[file.relative_to(folder).as_posix()]=hashlib.sha256(content.encode()).hexdigest()
                    return result
                cache_cross=(cached/'cross.txt').read_text().replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R)).replace(str(cached.parent),'<SOFTWARE_DIR>')
                dest_cross=(dest/'cross.txt').read_text().replace(str(dest.parent),'<SOFTWARE_DIR>')
                cache_headers=headers(cached.parent/'include');dest_headers=headers(dest.parent/'include')
                if cache_cross==dest_cross and cache_headers==dest_headers:

                    record={'scope':'standard-library cache; flags and generated headers identical after normalizing output paths and timestamp comments only; BIOS rebuilt and target rerun','origin':str(cached),'normalized_header_hashes':cache_headers,'files':{}}
                    for name in ['__libc.a','_libc.a','libc.a','picolibc.h']:
                        digest=sha(cached/name);shutil.copyfile(cached/name,dest/name)
                        if sha(dest/name)!=digest:raise ValueError('cache copy mismatch')
                        os.utime(dest/name,None);record['files'][name]=digest
                    (out/'libc-cache.json').write_text(json.dumps(record,indent=2))
            return original_generate(self,*xs,**kw)
        Builder._generate_rom_software=generate

        # Reuse only a RTL model identical outside comments. BIOS and all image/init files are regenerated.
        actual_run=subprocess.run
        reference=args.reuse_from/'soc/gateware' if args.reuse_from else None
        def checked_run(command,*xs,**kw):
            if command==['bash','build_sim.sh'] and reference is not None:
                gate=out/'soc/gateware'
                checked={}
                for name in ['sim.v','sim_header.h','sim_init.cpp','sim_config.js']:
                    left=(gate/name).read_bytes();right=(reference/name).read_bytes()
                    if name=='sim.v':
                        def without_comments(raw):
                            # Preserve quoted strings and every non-comment byte; only remove comments.
                            token=re.compile(rb'"(?:\\.|[^"\\])*"|/\*.*?\*/|//[^\n]*',re.S)
                            return token.sub(lambda m:b' ' if m[0].startswith((b'//',b'/*')) else m[0],raw)
                        left=without_comments(left);right=without_comments(right)
                    if left!=right:raise ValueError('RTL reuse guard differs outside comments: '+name)
                    checked[name]=sha(gate/name)
                obj=gate/'obj_dir';obj.mkdir(exist_ok=True)
                shutil.copy2(reference/'obj_dir/Vsim',obj/'Vsim')
                for module in (reference/'modules').rglob('*.so'):
                    target=gate/module.relative_to(reference);target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(module,target)
                    assert sha(target)==sha(module)
                receipt={'rom_capacity_bytes':0x20000,'method':'identical non-comment RTL bytes and byte-identical simulator interface files; rebuilt BIOS and fresh model/input data; target process freshly reset','parent_simulator':str(reference/'obj_dir/Vsim'),'simulator_sha256':sha(obj/'Vsim'),'guard_files':checked,'reference_runtime_modules':{str(p.relative_to(reference)):sha(p) for p in (reference/'modules').rglob('*.so') if p.is_file()}}
                (out/'rtl-reuse.json').write_text(json.dumps(receipt,indent=2))
                return subprocess.CompletedProcess(command,0)
            return actual_run(command,*xs,**kw)
        subprocess.run=checked_run
        # Build output is streamed to a durable log, never discarded.
        log=(out/'build.log').open('w',buffering=1);oldout,olderr=os.dup(1),os.dup(2)
        try:
            os.dup2(log.fileno(),1);os.dup2(log.fileno(),2)
            os.cpu_count=lambda:2
            build_soc(output_dir=out/'soc',run=False,cpu_b0=True,control_smoke=True,cpu_variant='full',student_mini_image=loader,student_mini_count=loader.stat().st_size//1936)
        finally:sys.stdout.flush();sys.stderr.flush();os.dup2(oldout,1);os.dup2(olderr,2);os.close(oldout);os.close(olderr);log.close();Builder._initialize_rom_software=original_initialize;Builder.add_software_package=original_add;Builder._generate_rom_software=original_generate;subprocess.run=actual_run
        gate=out/'soc/gateware'
        state['simulator_sha256']=sha(gate/'obj_dir/Vsim')
        state['rtl_sha256']=sha(gate/'sim.v')
        state['resource_after_build']=snapshot()
        state['build_script_sha256']=sha(gate/'build_sim.sh')
        if args.reuse_from is not None:
            for key in ['checkpoint_sha256','baseline_sha256']:
                if state[key]!=prior[key]:raise ValueError('paired identity differs: '+key)
            if state['simulator_sha256']!=prior['simulator_sha256']:raise ValueError('paired simulator identity differs')
            previous_image=json.loads((args.reuse_from/'image/manifest.json').read_text())
            if manifest['image_sha256']!=previous_image['image_sha256']:raise ValueError('paired model/input image differs')
        state['status']='RUNNING_TARGET';(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
        runs=[]
        for i in range(args.repeat):
            p=subprocess.Popen([str(out/'soc/gateware/obj_dir/Vsim')],cwd=out/'soc/gateware',stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace');q=queue.Queue()
            def drain():
                for line in p.stdout:q.put(line)
                q.put(None)
            threading.Thread(target=drain,daemon=True).start();deadline=time.monotonic()+1800;complete=False;lines=[]
            try:
                with (out/f'console-{i:03d}.log').open('w',buffering=1) as f:
                    while time.monotonic()<deadline:
                        try:line=q.get(timeout=.5)
                        except queue.Empty:continue
                        if line is None:break
                        f.write(line);lines.append(line)
                        if 'STUDENT_NATIVE_CPU_COMPLETE' in line:complete=True;break
            finally:
                p.terminate()
                try:p.wait(timeout=5)
                except subprocess.TimeoutExpired:p.kill();p.wait()
            textlog=''.join(lines)
            tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+) elapsed_cycles=(\d+):(\d+)',textlog)
            summary=re.findall(r'STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+)',textlog)
            if len(summary)!=1:raise ValueError('missing/duplicate native summary')
            st,count,hi,lo=map(int,summary[0]);elapsed=[(int(h)<<32)|int(l) for step,token,h,l in tokens]
            actual=[int(token) for step,token,h,l in tokens]
            match=st==0 and count==len(tokens) and [int(t[0]) for t in tokens]==list(range(count)) and actual==expected
            if not match:raise ValueError('target tokens/status mismatch')
            if elapsed!=sorted(elapsed) or not elapsed:raise ValueError('invalid token timing')
            intervals=[b-a for a,b in zip(elapsed,elapsed[1:])]
            ops={int(op):(int(h)<<32)|int(l) for op,h,l in re.findall(r'STUDENT_NATIVE_OPERATOR op=(\d+) cycles=(\d+):(\d+)',textlog)}
            runs.append({'run':i,'complete':complete,'console_sha256':sha(out/f'console-{i:03d}.log'),'tokens':actual,'token_match':match,'ttft_cycles':elapsed[0],'per_token_decode_cycles':statistics.mean(intervals) if intervals else None,'decode_intervals_cycles':intervals,'session_cycles':(hi<<32)|lo,'operator_cycles':ops})
            trace=re.findall(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',textlog,re.M)
            if len(trace)!=count or any(len(h.split(','))!=16 or len(l.split(','))!=256 for _,_,h,l in trace):raise ValueError('missing/invalid hidden/logit trace')
            runs[-1]['token_hidden_logits_trace_sha256']=hashlib.sha256(json.dumps(trace).encode()).hexdigest()
            if args.reuse_from is not None:
                reference_log=(args.reuse_from/'console-000.log').read_text()
                reference_trace=re.findall(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',reference_log,re.M)
                if trace!=reference_trace:raise ValueError('paired token/hidden/logits differ')
                runs[-1]['paired_token_hidden_logits_bit_identical']=True
            counters=re.findall(r'STUDENT_NATIVE_CPU status=\d+ count=\d+ cycles=\d+:\d+ instructions=(\d+):(\d+) ibus_bytes=(\d+):(\d+) dbus_bytes=(\d+):(\d+) dma_bytes=(\d+):(\d+)',textlog)
            if len(counters)!=1:raise ValueError('target logical counters missing')
            vals=list(map(int,counters[0]));runs[-1]['target_logical_counters']={key:(vals[i*2]<<32)|vals[i*2+1] for i,key in enumerate(['instructions','ibus_bytes','dbus_bytes','dma_bytes'])}
            if not complete:raise RuntimeError('missing native completion marker')
        state.update(status='TRANSCRIPTS_COLLECTED',runs=runs,token_and_metrics_validation='PASS',metrics_mean={key:statistics.mean(r[key] for r in runs if r[key] is not None) if any(r[key] is not None for r in runs) else None for key in ['ttft_cycles','per_token_decode_cycles','session_cycles']},measurement_boundary='mcycle around mini_native_generate; excludes boot, input transfer, host tokenization; EOS included in decode intervals',promotion='NOT_EVALUATED')
    except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
    finally:
        state['resource_final']=snapshot();assert source.read_bytes()==original,'shared native source changed';(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
    print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));return 0 if state['status']=='TRANSCRIPTS_COLLECTED' else 1
if __name__=='__main__':raise SystemExit(main())
