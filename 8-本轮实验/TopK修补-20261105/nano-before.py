"""Fresh CPU Nano experiments in RouteB. No host oracle is sent to the target."""
import argparse,ast,hashlib,json,os,pathlib,queue,re,statistics,subprocess,sys,threading,time,shutil
R=pathlib.Path(__file__).resolve().parent;S=R/'student-mini-v1-cpu-gpu/sources'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    a=argparse.ArgumentParser();a.add_argument('--question',default='一加一等于几');a.add_argument('--variant',choices=['baseline','topk','rne','combined'],default='baseline');a.add_argument('--repeat',type=int,default=1);args=a.parse_args()
    if not 1<=args.repeat<=100:raise ValueError('repeat must be 1..100')
    sys.path[:0]=[str(S),str(S/'shared/python')]
    from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime
    from scripts.export_student_mini_native_image import pack,header
    checkpoints=list((R/'8-本轮实验/历史原始证据归档/native-nano').glob('*/ptq.npz'))
    if len(checkpoints)!=1:raise ValueError('select exactly one archived checkpoint')
    ck=checkpoints[0];inputs=json.loads((ck.parent/'inputs.json').read_text());rt=MiniNanoRuntime.from_npz(ck)
    source=S/'software/student_mini_native_nano.c';original=source.read_bytes();text=original.decode()
    tree=ast.parse((R/'3-优化链-P1/modify_nano.py').read_text());values={}
    for n in tree.body:
        if isinstance(n,ast.Assign) and len(n.targets)==1 and isinstance(n.targets[0],ast.Name):
            name=n.targets[0].id
            if name in ['anchor','old_sort','new_sort']:values[name]=ast.literal_eval(n.value)
            if name=='r15':values[name]=values['anchor']+ast.literal_eval(n.value.right)
    # Normalize a previously modified source to the historical baseline.
    text=text.replace(values['r15'],values['anchor']).replace(values['new_sort'],values['old_sort']).replace('rne15((int64_t)denominator*old)','rne_div((int64_t)denominator*old,32768)').replace('rne15(numerator[j]*old)','rne_div(numerator[j]*old,32768)')
    baseline=text
    if args.variant in ['topk','combined']:
        if text.count(values['old_sort'])!=1:raise ValueError('unknown sort seam')
        text=text.replace(values['old_sort'],values['new_sort'])
    if args.variant in ['rne','combined']:
        if text.count(values['anchor'])!=1:raise ValueError('unknown RNE seam')
        text=text.replace(values['anchor'],values['r15']).replace('rne_div((int64_t)denominator*old,32768)','rne15((int64_t)denominator*old)').replace('rne_div(numerator[j]*old,32768)','rne15(numerator[j]*old)')
    out=R/'8-本轮实验'/('nano-'+args.variant+'-'+str(time.time_ns()));out.mkdir(parents=True)
    state={'status':'RUNNING','variant':args.variant,'question':args.question,'repeat_requested':args.repeat,'formal_baseline':False,'checkpoint_sha256':sha(ck),'baseline_sha256':hashlib.sha256(baseline.encode()).hexdigest(),'candidate_sha256':hashlib.sha256(text.encode()).hexdigest(),'primary_metric':'ttft','primary_metric_registration':'new experiments only, not retrospective registration of historical runs'}
    try:
        source.write_text(text);(out/'student_mini_native_nano.c').write_text(text)
        blob,manifest=pack(rt,inputs['tokenizer'],args.question);image_dir=out/'image';image_dir.mkdir()
        (image_dir/'image.bin').write_bytes(blob);(image_dir/'student_mini_native_image.h').write_text(header(manifest))
        manifest.update(contains_expected_tokens=False,image_sha256=sha(image_dir/'image.bin'),checkpoint_sha256=sha(ck));(image_dir/'manifest.json').write_text(json.dumps(manifest,indent=2))
        expected=rt.generate(manifest['prompt_tokens']);(out/'host-golden.json').write_text(json.dumps({'tokens':expected,'scope':'host-side check only; never sent to target'}))
        loader=out/'loader.bin';loader.write_bytes(blob+bytes((-len(blob))%1936))
        py=pathlib.Path(os.environ.get('COURSE_PYTHON',str(S/'.venv/bin/python')))
        state['python_executable']=str(py)
        os.environ.update(PATH=str(py.parent)+':'+os.environ.get('PATH',''),PYTHON=str(py),COURSE_ROOT=str(S),COURSE_NATIVE_IMAGE_DIR=str(image_dir),COURSE_VERILATOR_BIN='/usr/bin/verilator',MAKEFLAGS='-j2')
        from litex.soc.integration.builder import Builder
        from integration.litex.soc import build_soc
        original_add=Builder.add_software_package
        def add(self,name,*xs,**kw):return original_add(self,name,str(S/'integration/litex/native_nano_bios')) if name=='bios' else original_add(self,name,*xs,**kw)
        Builder.add_software_package=add
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
                cache_cross=(cached/'cross.txt').read_text().replace(str(cached.parent),'<SOFTWARE_DIR>')
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

        # Build output is streamed to a durable log, never discarded.
        log=(out/'build.log').open('w',buffering=1);oldout,olderr=os.dup(1),os.dup(2)
        try:
            os.dup2(log.fileno(),1);os.dup2(log.fileno(),2)
            os.cpu_count=lambda:2
            build_soc(output_dir=out/'soc',run=False,cpu_b0=True,control_smoke=True,cpu_variant='full',student_mini_image=loader,student_mini_count=loader.stat().st_size//1936)
        finally:sys.stdout.flush();sys.stderr.flush();os.dup2(oldout,1);os.dup2(olderr,2);os.close(oldout);os.close(olderr);log.close();Builder.add_software_package=original_add;Builder._generate_rom_software=original_generate
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
            if not complete:raise RuntimeError('missing native completion marker')
        state.update(status='TRANSCRIPTS_COLLECTED',runs=runs,token_and_metrics_validation='PASS',metrics_mean={key:statistics.mean(r[key] for r in runs if r[key] is not None) if any(r[key] is not None for r in runs) else None for key in ['ttft_cycles','per_token_decode_cycles','session_cycles']},measurement_boundary='mcycle around mini_native_generate; excludes boot, input transfer, host tokenization; EOS included in decode intervals',promotion='NOT_EVALUATED')
    except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
    finally:
        source.write_bytes(original);(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
    print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));return 0 if state['status']=='TRANSCRIPTS_COLLECTED' else 1
if __name__=='__main__':raise SystemExit(main())
