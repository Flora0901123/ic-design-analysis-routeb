"""Replay the sealed fixed-ROM question in fresh baseline and optimized VexRiscv RTL processes."""
import json
from pathlib import Path
import queue
import signal
import subprocess
import threading
import time

from qualification_resource_guard import prepare, join, snapshot
from seal_cpu_stride_rne_fixedrom_2x2 import parse, sha, trace

ROOT = Path(__file__).resolve().parents[1]
EXPERIMENTS = ROOT/'8-本轮实验'
RESETS = EXPERIMENTS/'CPU-Nano固定ROM-组合有限重启-1794285753919289018'
ABLATION = EXPERIMENTS/'CPU-Nano固定ROM-StrideRNE2x2-1794284177187099883'
SEALED = EXPERIMENTS/'CPU-Nano组合最终确认-20261110/验收结论.json'
VARIANTS = ('baseline', 'stride_rne15')


def capture(gate, log):
    proc = subprocess.Popen([str(gate/'obj_dir/Vsim')], cwd=gate, stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT, text=True, errors='replace', start_new_session=True)
    lines = queue.Queue()

    def read_console():
        for line in proc.stdout:
            lines.put(line)
        lines.put(None)

    threading.Thread(target=read_console, daemon=True).start()
    try:
        deadline = time.monotonic()+600
        with log.open('w', buffering=1) as stream:
            while time.monotonic() < deadline:
                try:
                    line = lines.get(timeout=1)
                except queue.Empty:
                    continue
                if line is None:
                    break
                stream.write(line)
                if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):
                    return
        raise RuntimeError(f'RTL did not emit the complete response: {log.name}')
    finally:
        if proc.poll() is None:
            proc.send_signal(signal.SIGTERM)
            try:
                proc.wait(timeout=10)
            except subprocess.TimeoutExpired:
                proc.kill()
                proc.wait()


def main():
    prepare()
    join()
    seal = json.loads(SEALED.read_text())
    assert seal['status'] == 'CPU_COMBO_RESET3X2_FROZEN12_INDEPENDENTLY_SEALED'
    study = json.loads((ABLATION/'summary.json').read_text())
    saved = json.loads((RESETS/'bindings.json').read_text())
    work = {row['variant']:EXPERIMENTS/Path(row['work']).name for row in study['records']
            if row['variant'] in VARIANTS}
    expected = trace(RESETS/'baseline-00.log')
    out = EXPERIMENTS/f'CPU-Nano一加一课堂复跑-{time.time_ns()}'
    out.mkdir()
    state = dict(status='RUNNING', prompt='一加一等于几', target='VexRiscv RTL', records=[],
                 seal_sha256=sha(SEALED), replay_script_sha256=sha(Path(__file__)), target_clock_reference_hz=100_000_000)
    receipt = out/'status.json'

    def save():
        state['resources'] = snapshot()
        receipt.write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8')

    save()
    print(out, flush=True)
    try:
        for variant in VARIANTS:
            w = work[variant]
            assert json.loads((w/'image/manifest.json').read_text())['question'] == state['prompt']
            assert 'COURSE_TARGET_CLOCK_HZ 100000000' in (w/'soc/software/include/generated/soc.h').read_text()
            def verify_inputs():
                assert all(sha(Path(p))==h for p,h in saved[variant].items())
                assert sha(w/'soc/gateware/obj_dir/Vsim') == seal['same_compiled_simulator']
                assert sha(w/'image/image.bin') == study['image_sha256']
            verify_inputs()
            log = out/(variant+'.log')
            capture(w/'soc/gateware',log)
            verify_inputs()
            assert trace(log) == expected
            actual = parse(log)
            assert all(actual[key]==value for key,value in seal['metrics'][variant].items())
            state['records'].append(dict(variant=variant,**actual,log_sha256=sha(log)))
            save()
        state['status'] = 'FRESH_RTL_PAIR_REPRODUCED'
    except Exception as exc:
        state.update(status='FAILED', error=f'{type(exc).__name__}: {exc}')
    save()
    print(state['status'], flush=True)
    return int(state['status']=='FAILED')


if __name__=='__main__':
    raise SystemExit(main())
