"""Freeze a new delivery snapshot after the 1,000 ZIP replay records are verified."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import time

from verify_gpu_zip_replay_progress import verify

AUDIT = Path(__file__).resolve().parent
ROOT = AUDIT.parent
RUN = AUDIT/'ZIP洁净目录GPU全量-20261114'
OUTPUT = AUDIT/'GPU全量复跑与冻结封包-20261114'
ARCHIVE = ROOT/'RouteB-复现验收冻结快照-20261114.zip'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream,'sha256').hexdigest()


def main():
    OUTPUT.mkdir(exist_ok=False)

    # The writer changes each checkpoint atomically. No reads of half-written logs.
    deadline = time.monotonic()+4*3600
    while time.monotonic() < deadline:
        current = read(RUN/'status.json')
        if current['status'] != 'RUNNING':
            break
        time.sleep(20)
    assert current['status'] == 'ZIP_GPU_FULL_1000_EXACT_REPLAY_PASS' and current['passed']==1000, current
    checks = verify()
    assert checks['status']=='GPU_ZIP_REPLAY_1000_INDEPENDENT_PASS' and len(checks['verified_log_sha256'])==1000
    cpu = AUDIT/'ZIP洁净目录CPU全12题-20261114/status.json'
    gpu = AUDIT/'GPU洁净安装与平台输入迁移-v2-20261114/status.json'
    assert (read(cpu)['questions'],read(cpu)['steps'])==(12,81)
    assert read(cpu)['archive_sha256']==checks['archive_sha256']
    assert read(gpu)['status']=='GPU_CLEAN_RELOCATED_PLATFORM_SIX_PASS' and len(read(gpu)['cases'])==6

    full = RUN/'independent-1000.json'
    with full.open('x',encoding='utf-8') as stream:
        json.dump(checks,stream,ensure_ascii=False,indent=2)
    with (OUTPUT/'replay-seal.json').open('x',encoding='utf-8') as stream:
        json.dump(dict(status='CPU_GPU_REPLAY_EVIDENCE_SEALED',cpu_sha256=digest(cpu),gpu_relocated_sha256=digest(gpu),
                       full_gpu_sha256=digest(full),physical_signoff=False),stream,indent=2)

    # Capture stdout in memory: a log changing while it is packed invalidates the snapshot.
    proc = subprocess.run([sys.executable,str(ROOT/'package_delivery.py'),'--build','--output',str(ARCHIVE)],
                          cwd=ROOT,capture_output=True,encoding='utf-8',env={**__import__('os').environ,'PYTHONUTF8':'1'},
                          check=False,timeout=1800)
    (OUTPUT/'package.log').write_text(proc.stdout+proc.stderr,encoding='utf-8')
    proc.check_returncode()
    receipt = ARCHIVE.with_name(ARCHIVE.stem+'-receipt.json')
    value = read(receipt)
    assert value['status']=='ARCHIVE_SIZE_AND_CRC_PASS' and value['verified_payload_sha256_files']>0
    assert ARCHIVE.stat().st_size==value['archive_bytes'] and value['archive_bytes']<=1024**3
    assert value['archive_expanded_bytes']<=3*1024**3
    result=dict(status='REPLAY_AND_FROZEN_ZIP_VERIFIED',archive=ARCHIVE.name,archive_sha256=digest(ARCHIVE),
                receipt_sha256=digest(receipt),cpu_questions=12,gpu_target_records=1000,gpu_relocated_controls=6,
                physical_signoff=False)
    (OUTPUT/'status.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
    print(json.dumps(result,ensure_ascii=False))


if __name__=='__main__':
    main()
