"""Recover five missing GPU physical source bindings using packaged original generation rules.

Only writes below this script's directory. Does not invoke EDA or touch sealed inputs.
"""
from __future__ import annotations
import ast
import copy
from datetime import datetime
import gzip
import hashlib
import json
from pathlib import Path
import re
import sys

sys.dont_write_bytecode = True
OUT = Path(__file__).resolve().parent
ROOT = OUT.parents[1]
BASE = ROOT / '6-源码引用/原始参考包'
PREVIOUS = ROOT / '8-本轮实验/GPU物理依赖公开来源核对-20261109/binding-recheck.json'
GENERATOR = BASE / 'sources/scripts/prepare_student_mini_gpu_top.py'
PARTITION = BASE / 'physical/gpu/partition/completion.json'
TOP_DONE = BASE / 'physical/gpu/top/completion.json'
FULLCHIP = BASE / 'physical/gpu/fullchip-sta/completion.json'
SOURCE_TOP = BASE / 'physical/gpu/partition/top.v.gz'


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def load(path: Path):
    return json.loads(path.read_text(encoding='utf-8-sig'))


def local(path: Path) -> str:
    return path.relative_to(ROOT).as_posix()


def write(path: Path, data: bytes):
    assert path.resolve().is_relative_to(OUT), path
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(data)


def json_write(path: Path, value):
    write(path, (json.dumps(value, ensure_ascii=False, indent=2) + '\n').encode('utf-8'))


def bound_ending(record, suffix):
    found = [(p, h) for p, h in record['bindings'].items() if p.endswith(suffix)]
    assert len(found) == 1, (suffix, found)
    return found[0]


def main():
    previous = load(PREVIOUS)
    partition, top_done, fullchip = map(load, (PARTITION, TOP_DONE, FULLCHIP))
    summary_path = BASE / 'physical/gpu/partition/summary.json'
    summary = load(summary_path)
    touched_sources = [PREVIOUS, GENERATOR, PARTITION, TOP_DONE, FULLCHIP, SOURCE_TOP, summary_path]
    source_before = {str(p): sha(p.read_bytes()) for p in touched_sources}
    # Compile the two original, unmodified functions and CHAIN_CELL assignment from the packaged script.
    # This avoids importing modules or creating bytecode caches beside sealed source files.
    tree = ast.parse(GENERATOR.read_text(encoding='utf-8'))
    keep = []
    for node in tree.body:
        if isinstance(node, ast.FunctionDef) and node.name in ('block_drivers', 'direct_chip_feedthroughs'):
            keep.append(node)
        elif isinstance(node, ast.Assign) and any(isinstance(t, ast.Name) and t.id == 'CHAIN_CELL' for t in node.targets):
            keep.append(node)
    assert len(keep) == 3
    namespace = {'re': re, 'Path': Path}
    exec(compile(ast.Module(body=keep, type_ignores=[]), str(GENERATOR), 'exec'), namespace)
    functions = [{'name': n.name if isinstance(n, ast.FunctionDef) else 'CHAIN_CELL',
                  'first_line': n.lineno, 'last_line': n.end_lineno} for n in keep]
    decompressed = gzip.decompress(SOURCE_TOP.read_bytes())
    original_partition_top = bound_ending(partition, '/blocks_final2/top.v')
    assert sha(decompressed) == original_partition_top[1]
    partition_top = OUT / 'inputs/partition/top.v'
    write(partition_top, decompressed)
    insts, netlists, input_receipts = [], [], []
    for i, name in enumerate(('LL', 'LR', 'UL', 'UR')):
        module = summary['blocks'][name]['module']
        assert module == f'vortex_physical_top_q{i}'
        insts.append(f'{module}_inst')
        compressed = BASE / f'physical/gpu/{module}/6_final.v.gz'
        touched_sources.append(compressed)
        source_before[str(compressed)] = sha(compressed.read_bytes())
        data = gzip.decompress(compressed.read_bytes())
        original, expected = bound_ending(fullchip, f'/{module}/' +
            next(p.split(f'/{module}/', 1)[1] for p in fullchip['bindings'] if f'/{module}/' in p and p.endswith('/6_final.v')))
        assert sha(data) == expected
        dest = OUT / f'inputs/{module}/6_final.v'
        write(dest, data)
        netlists.append(dest)
        input_receipts.append({'packaged_gzip': local(compressed), 'gzip_sha256': sha(compressed.read_bytes()),
                               'original_bound_path': original, 'uncompressed_sha256': sha(data)})
    text = partition_top.read_text(encoding='utf-8')
    m = re.search(r'^module ' + re.escape(summary['top']) + r'\b.*?^endmodule', text, re.S | re.M)
    assert m
    top_text, rewired = namespace['direct_chip_feedthroughs'](m.group(0), insts, netlists)
    top_data = (top_text + '\n').encode('utf-8')
    original, expected = bound_ending(top_done, '/clean-20261014-i3/top.v')
    assert sha(top_data) == expected
    dest = OUT / 'recovered/top-config/top.v'
    write(dest, top_data)
    new_matches = [{'original_bound_path': original, 'expected_sha256': expected, 'actual_sha256': sha(top_data),
                    'recovered_file': local(dest), 'status': 'EXACT_SHA_MATCH',
                    'method': 'Original direct_chip_feedthroughs applied to original partition top and SHA-verified current final block netlists; append one LF.',
                    'rewiring_count': len(rewired)}]
    json_write(OUT / 'feedthrough_rewiring.json', rewired)
    lef_rule = r'\n    LAYER met5 ;\n     RECT [^\n]*;'
    assert lef_rule in GENERATOR.read_text(encoding='utf-8')
    for i in range(4):
        module = f'vortex_physical_top_q{i}'
        compressed = BASE / f'physical/gpu/{module}/abstract/{module}.lef.gz'
        touched_sources.append(compressed)
        source_before[str(compressed)] = sha(compressed.read_bytes())
        data = gzip.decompress(compressed.read_bytes())
        block_record = load(BASE / f'physical/gpu/{module}/completion.json')
        abstract_path = block_record['abstract']['lef']
        assert sha(data) == block_record['artifacts'][abstract_path]
        text, count = re.subn(lef_rule, '', data.decode('utf-8'), count=1)
        assert count == 1 and 'LAYER met5' in text.split('  OBS')[0]
        candidate = text.encode('utf-8')
        original, expected = bound_ending(top_done, f'/clean-20261014-i3/{module}.lef')
        assert sha(candidate) == expected
        dest = OUT / f'recovered/top-config/{module}.lef'
        write(dest, candidate)
        new_matches.append({'original_bound_path': original, 'expected_sha256': expected, 'actual_sha256': sha(candidate),
                            'recovered_file': local(dest), 'status': 'EXACT_SHA_MATCH',
                            'method': 'Decompress packaged abstract LEF; apply original prepare_student_mini_gpu_top.py single met5 OBS removal expression.',
                            'packaged_gzip': local(compressed), 'gzip_sha256': sha(compressed.read_bytes()),
                            'uncompressed_abstract_sha256': sha(data), 'substitution_count': count})
    updates = {m['original_bound_path']: m for m in new_matches}
    audit = copy.deepcopy(previous)
    audit.update({'date': datetime.now().astimezone().isoformat(), 'status': 'PARTIAL_GENERATION_RULE_RECOVERY_PHYSICAL_IDENTITY_STILL_HOLD',
                  'previous_exact_matches': previous['exact_matches_after_source_recovery'],
                  'new_generation_rule_matches': len(new_matches), 'previous_audit': local(PREVIOUS),
                  'previous_audit_sha256': sha(PREVIOUS.read_bytes()), 'teacher_originals_modified': False,
                  'teacher_physical_identity_established': False, 'fresh_functional_boundary_replaced': False,
                  'recovery_script': local(Path(__file__)), 'recovery_script_sha256': sha(Path(__file__).read_bytes())})
    for binding in audit['bindings']:
        if binding['original_bound_path'] in updates:
            new = updates[binding['original_bound_path']]
            assert binding['expected_sha256'] == new['actual_sha256']
            binding['verified_local_files'] = [new['recovered_file']]
            binding['status'] = 'EXACT_SHA_MATCH'
            binding['recovery_method'] = new['method']
        for rel in binding['verified_local_files']:
            assert sha((ROOT / rel).read_bytes()) == binding['expected_sha256'], rel
    exact = sum(x['status'] == 'EXACT_SHA_MATCH' for x in audit['bindings'])
    audit['exact_matches_after_source_recovery'] = exact
    audit['remaining_unmatched_checks'] = len(audit['bindings']) - exact
    assert exact == 32 and audit['remaining_unmatched_checks'] == 18
    json_write(OUT / 'binding-recheck.json', audit)
    source_after = {str(p): sha(p.read_bytes()) for p in touched_sources}
    assert source_before == source_after
    receipt = {'status': 'FIVE_EXACT_BINDINGS_RECOVERED_PHYSICAL_IDENTITY_STILL_HOLD',
               'timestamp': datetime.now().astimezone().isoformat(), 'original_checks': 50,
               'previous_exact_matches': 27, 'new_exact_matches': 5, 'total_exact_matches': 32, 'remaining_unmatched': 18,
               'generator': local(GENERATOR), 'generator_sha256': sha(GENERATOR.read_bytes()),
               'original_function_nodes': functions, 'original_partition_top': {'original_bound_path': original_partition_top[0],
                   'packaged_gzip': local(SOURCE_TOP), 'uncompressed_sha256': sha(decompressed)},
               'block_netlist_inputs': input_receipts, 'new_matches': new_matches,
               'sealed_source_hashes_unchanged': source_before == source_after,
               'input_sha256': {local(Path(p)): h for p, h in source_before.items()},
               'network_downloads': [], 'eda_commands_run': [], 'parameter_searches': [],
               'remaining_categories': {'sram_lib': 6, 'sram_lef': 6, 'partition_flat_and_quad_netlists': 2,
                                        'top_constraint_sdc': 1, 'older_context_final_netlists': 3},
               'physical_identity_established': False,
               'limitations': ['The 18 remaining original file identities are unresolved.',
                   'No missing SDC text was guessed or searched by hash.',
                   'The original file hashes are recovered; no new DRC/STA/route run is claimed.',
                   'Fresh functional project-banked.v and behavioral SRAM models are not physical views.']}
    json_write(OUT / 'completion.json', receipt)
    print(json.dumps({k: receipt[k] for k in ('status','new_exact_matches','total_exact_matches','remaining_unmatched')}, ensure_ascii=False))


if __name__ == '__main__':
    main()
