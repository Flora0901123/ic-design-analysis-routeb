"""Independently verify the recovery outputs and original release-manifest bindings."""
import hashlib
import json
from pathlib import Path

OUT = Path(__file__).resolve().parent
ROOT = OUT.parents[1]
BASE = ROOT / '6-源码引用/原始参考包'

def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

audit = json.loads((OUT / 'binding-recheck.json').read_text(encoding='utf-8'))
completion = json.loads((OUT / 'completion.json').read_text(encoding='utf-8'))
manifest = dict(line.split('  ', 1)[::-1] for line in (BASE / 'MANIFEST.sha256').read_text(encoding='utf-8').splitlines() if line)
source_checks = []
for rel, expected in completion['input_sha256'].items():
    source = ROOT / rel
    actual = digest(source)
    assert actual == expected, rel
    row = {'path': rel, 'sha256': actual, 'unchanged_from_recovery': True}
    if source.is_relative_to(BASE):
        original_rel = source.relative_to(BASE).as_posix()
        assert manifest[original_rel] == actual, original_rel
        row['original_release_manifest_match'] = True
    source_checks.append(row)
file_checks = []
for binding in audit['bindings']:
    if binding['status'] == 'EXACT_SHA_MATCH':
        assert binding['verified_local_files']
        for rel in binding['verified_local_files']:
            actual = digest(ROOT / rel)
            assert actual == binding['expected_sha256'], rel
            file_checks.append({'file': rel, 'expected_sha256': actual, 'status': 'EXACT_SHA_MATCH'})
    else:
        assert not binding['verified_local_files']
assert len(file_checks) == 32
assert len(audit['bindings']) == 50
assert len([b for b in audit['bindings'] if b['status'] != 'EXACT_SHA_MATCH']) == 18
script = ROOT / audit['recovery_script']
assert digest(script) == audit['recovery_script_sha256']
result = {'status': 'PASS_32_EXACT_BINDINGS_18_UNRESOLVED_PHYSICAL_IDENTITY_HOLD',
          'binding_checks': 50, 'verified_binding_matches': 32, 'remaining_unmatched': 18,
          'source_checks': source_checks, 'matched_file_checks': file_checks,
          'recovery_script_sha256': digest(script),
          'original_release_manifest_sha256': digest(BASE / 'MANIFEST.sha256'),
          'recovery_completion_sha256': digest(OUT / 'completion.json'),
          'binding_audit_sha256': digest(OUT / 'binding-recheck.json')}
(OUT / 'verification.json').write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8', newline='\n')
print(json.dumps({k: result[k] for k in ('status','binding_checks','verified_binding_matches','remaining_unmatched')}, ensure_ascii=False))
