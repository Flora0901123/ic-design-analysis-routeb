"""Independently verify fresh GPU RTL replay checkpoints against the accepted ZIP."""
import argparse
import hashlib
import json
from pathlib import Path
import zipfile

AUDIT = Path(__file__).resolve().parent
ROOT = AUDIT.parent
RUN = AUDIT/'ZIP洁净目录GPU全量-20261114'
PREFIX = '8-本轮实验/GPU同硬件全1000-20261108/'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def transcript(raw):
    return [line for line in raw.splitlines()
            if line.startswith((b'STUDENT_GPU ', b'STUDENT_GPU_COMPLETE ', b'PERF: instrs='))]


def verify():
    state = json.loads((RUN/'status.json').read_text(encoding='utf-8'))
    identity = json.loads((RUN/'identity.json').read_text(encoding='utf-8'))
    assert all(state[k] == v for k,v in identity.items())
    assert sha((AUDIT/'replay_gpu_zip_full.py').read_bytes()) == identity['script_sha256']
    archive = ROOT/'RouteB-本机验收快照-20261114.zip'
    with archive.open('rb') as stream:
        assert hashlib.file_digest(stream,'sha256').hexdigest() == identity['archive_sha256']
    checkpoint_paths = sorted((RUN/'records').glob('*.json'))
    checked = {}
    with zipfile.ZipFile(archive) as z:
        manifest = {n:h for h,n in (line.split('  ',1) for line in
                                    z.read('SUBMISSION-SHA256SUMS').decode().splitlines())}
        def frozen_file(name):
            raw = z.read(PREFIX+name)
            assert sha(raw) == manifest[PREFIX+name], name
            return raw
        rows = json.loads(frozen_file('status.json'))['records']
        assert len(rows) == 1000 and [row['ordinal'] for row in rows] == list(range(1000))
        for path in checkpoint_paths:
            ordinal = int(path.stem)
            assert 0 <= ordinal < len(rows) and ordinal not in checked
            row = json.loads(path.read_text(encoding='utf-8'))
            raw = path.with_suffix('.log').read_bytes()
            frozen = rows[ordinal]
            reference = frozen_file(f'{ordinal:04d}.log')
            assert sha(reference) == frozen['log_sha256']
            assert sha(raw) == row['log_sha256']
            for key in ('ordinal','case_id','seed','cycles','instructions','device_fault'):
                assert row[key] == frozen[key], (ordinal,key)
            assert len(transcript(raw)) == 3 and transcript(raw) == transcript(reference), ordinal
            assert (b'STUDENT_GPU_DEVICE_STATUS fault=1' in raw) == frozen['device_fault'], ordinal
            checked[ordinal] = row['log_sha256']
    assert len(checked) >= state['passed']
    return dict(status='GPU_ZIP_REPLAY_1000_INDEPENDENT_PASS' if len(checked)==1000 else 'GPU_ZIP_REPLAY_CHECKPOINTS_INDEPENDENT_PASS',
                verified=len(checked), goal=1000, runner_reported_at_start=state['passed'],
                archive_sha256=identity['archive_sha256'], scope=identity['scope'],
                verified_log_sha256={f'{i:04d}':h for i,h in checked.items()})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--seal', action='store_true')
    args = parser.parse_args()
    result = verify()
    if args.seal:
        file = RUN/f'independent-{result["verified"]:04d}.json'
        with file.open('x',encoding='utf-8') as stream:
            json.dump(result,stream,indent=2,ensure_ascii=False)
        print(file)
    print(json.dumps({k:v for k,v in result.items() if k!='verified_log_sha256'},ensure_ascii=False))


if __name__=='__main__':
    main()
