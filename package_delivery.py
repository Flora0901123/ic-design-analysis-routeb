"""Plan or build the auditable delivery. Working files are never deleted."""
from pathlib import Path
import argparse,collections,datetime,hashlib,json,os,stat,zipfile
R=Path(__file__).resolve().parent
EXCLUDED={'.git','.venv','__pycache__','tools','downloads','toolchain-metadata','vortex-toolchain-prebuilt','build-source','build-5.040-obj'}
EXPANDED_LIMIT=3*1024**3;ZIP_LIMIT=1024**3

# Derived layout-development netlists and tool checkout can be regenerated
# from these build entries. Their original hashes are recorded in the archive.
REBUILDABLE_PHYSICAL = {
    '8-本轮实验/OpenSTA工具搭建-20261110-v4/OpenSTA-source.tar.gz':
        '7-审计与验收/build_pinned_opensta_v4.py (pinned upstream source checkout and git archive)',
    '8-本轮实验/GPU新实宏标准单元映射-20261112-221037/gpu-sram-mapped.v':
        '7-审计与验收/run_new_gpu_real_sram_mapping_v2.py run-20261112-175857',
    '8-本轮实验/GPU-FMA候选实宏映射-20261112-224536/gpu-sram-mapped.v':
        '7-审计与验收/run_new_gpu_fma_candidate_mapping.py run-20261112-175857',
    '8-本轮实验/GPU新FF标准单元映射-20261110-v2/generic-checkpoint.il':
        '7-审计与验收/run_new_gpu_ff_mapping_v2.py (generic checkpoint)',
}


def cache_reason(rel):
    s=rel.as_posix();parts=rel.parts
    cpu=(s.startswith('8-本轮实验/nano-') and '/soc/' in s)
    gpu=s.startswith('9-GPU复现/rtlsim-optimization/') and any('.obj_dir' in p for p in parts)
    if cpu or gpu:
        if rel.suffix in {'.c','.cpp','.h','.log','.jsonl','.json','.txt','.v','.sv','.cu'}:return None
        if rel.suffix in {'.a','.o','.gch'} or '.a.p/' in s or '/meson-private/' in s or rel.name in {'.ninja_log','.ninja_deps','build.ninja'}:
            return 'rebuildable compiler cache; retained target binaries, RTL, input images, sources and raw logs'
    return None

def file_sha256(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def deduplicate_recovered_gpu_views(kept, omitted):
    historical = '8-本轮实验/GPU压缩物理视图复核-20261108/recovered/physical/gpu/'
    canonical = '8-本轮实验/GPU生成规则物理恢复-20261110/inputs/'
    candidates = {historical + f'vortex_physical_top_q{i}/6_final.v':
                  canonical + f'vortex_physical_top_q{i}/6_final.v' for i in range(4)}
    index = {row['path']:row for row in kept}
    selected = []
    for row in kept:
        name = row['path']
        canonical_name = candidates.get(name)
        if canonical_name in index and index[canonical_name]['bytes'] == row['bytes']:
            digest = file_sha256(R / name)
            if digest == file_sha256(R / canonical_name):
                omitted.append(dict(row, reason='identical recovered GPU view',
                                    canonical_path=canonical_name, sha256=digest))
                continue
        selected.append(row)
    return selected, omitted


def deduplicate_replay_fixtures(kept, omitted):
    """Retain raw transcripts while aliasing byte-identical extracted target fixtures."""
    package = '8-本轮实验/NanoCPU可搬移运行包-20261109/package/'
    replay = '7-审计与验收/ZIP洁净目录CPU全12题-20261114/target/'
    nano = '8-本轮实验/nano-fixedrom-'
    rows = {row['path']:row for row in kept}
    verified = {}

    def digest(name):
        if name not in verified:
            verified[name] = file_sha256(R/name)
        return verified[name]

    result = []
    first_vsim = {}
    for row in sorted(kept, key=lambda item:item['path']):
        name = row['path']
        canonical = None
        if name.startswith(replay):
            case, _, fixture = name[len(replay):].partition('/')
            if fixture == 'Vsim' or fixture == 'sim_config.js' or fixture.startswith('modules/'):
                canonical = package+'common/'+fixture
            elif fixture.endswith('.init'):
                canonical = package+'cases/'+case+'/'+fixture
        elif name.startswith(nano) and name.endswith('/soc/gateware/obj_dir/Vsim'):
            canonical = first_vsim.setdefault((row['bytes'],digest(name)),name)
        if (canonical != name and canonical in rows and rows[canonical]['bytes'] == row['bytes']
                and digest(canonical) == digest(name)):
            omitted.append(dict(row,reason='byte-identical replay fixture',canonical_path=canonical,sha256=digest(name)))
        else:
            result.append(row)
    return result, omitted


def inventory():
    kept=[];omitted=[]
    for folder,dirs,names in os.walk(R,topdown=True,followlinks=False):
        parent=Path(folder);relparent=parent.relative_to(R)
        dirs[:]=sorted(d for d in dirs if d not in EXCLUDED and not (parent==R and d=='student-mini-v1-cpu-gpu') and not (d=='vortex' and relparent.parts and relparent.parts[0]=='9-GPU复现'))
        for name in sorted(names):
            p=parent/name;rel=p.relative_to(R)
            if p.suffix in {'.zip','.partial','.tmp'} or '.joined.tar.' in name or name=='SUBMISSION-SHA256SUMS':continue
            reason=cache_reason(rel)
            try:st=p.stat()
            except OSError as e:raise RuntimeError(f'unreadable dependency {rel}: use WSL or materialize the verified link: {e}') from e
            if not stat.S_ISREG(st.st_mode):raise RuntimeError(f'not a regular file: {rel}')
            row={'path':rel.as_posix(),'bytes':st.st_size,'mtime_ns':st.st_mtime_ns}
            if rel.as_posix() in REBUILDABLE_PHYSICAL:
                omitted.append(dict(row, reason='rebuildable layout-development intermediate',
                                    rebuild=REBUILDABLE_PHYSICAL[rel.as_posix()], sha256=file_sha256(p)))
            elif reason:omitted.append(dict(row,reason=reason))
            else:kept.append(row)
    selected, omitted = deduplicate_recovered_gpu_views(kept, omitted)
    return deduplicate_replay_fixtures(selected, omitted)

def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--build',action='store_true');parser.add_argument('--output',type=Path);parser.add_argument('--plan-output',type=Path);a=parser.parse_args();kept,omitted=inventory();size=sum(x['bytes'] for x in kept)
    duplicates=[row for row in omitted if 'canonical_path' in row]
    physical=[row for row in duplicates if row['reason']=='identical recovered GPU view']
    fixtures=[row for row in duplicates if row['reason']=='byte-identical replay fixture']
    caches=[row for row in omitted if 'canonical_path' not in row]
    summary={'status':'PLAN_READY' if size<=EXPANDED_LIMIT else 'EXPANDED_LIMIT_EXCEEDED','files':len(kept),'bytes':size,'expanded_limit':EXPANDED_LIMIT,'omitted_rebuildable_cache_files':len(caches),'omitted_rebuildable_cache_bytes':sum(x['bytes'] for x in caches),'deduplicated_physical_view_files':len(physical),'deduplicated_physical_view_bytes':sum(x['bytes'] for x in physical),'deduplicated_replay_fixture_files':len(fixtures),'deduplicated_replay_fixture_bytes':sum(x['bytes'] for x in fixtures),'workspace_files_deleted':0,'scope':'actual target binaries, reference, sources, inputs, raw evidence and failure records retained; identified caches omitted; byte-identical physical views and replay fixtures have an explicit canonical path and SHA','build_requested':a.build}
    if a.plan_output:
        path=a.plan_output.resolve();assert path.is_relative_to(R),'plan must remain in RouteB';path.parent.mkdir(parents=True,exist_ok=True);path.write_text(json.dumps({'summary':summary,'selected_files':kept,'omitted_cache_files':caches,'deduplicated_physical_views':duplicates,'excluded_dependency_directories':sorted(EXCLUDED)},ensure_ascii=False,indent=2),encoding='utf-8')
    if a.build:
        if size>EXPANDED_LIMIT:raise RuntimeError('expanded package exceeds SPEC 3 GiB')
        stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ');dest=(a.output or R/f'RouteB-交付快照-{stamp}.zip').resolve();assert dest.parent==R and dest.suffix=='.zip','archive must remain at RouteB root';assert not dest.exists(),'archive already exists; choose a fresh filename'
        partial=dest.with_suffix('.zip.partial');assert not partial.exists();digests=[];digest_index={}
        with zipfile.ZipFile(partial,'w',compression=zipfile.ZIP_DEFLATED,compresslevel=4) as z:
            for row in kept:
                p=R/row['path'];before=p.stat()
                if (before.st_size,before.st_mtime_ns)!=(row['bytes'],row['mtime_ns']):raise RuntimeError('file changed after inventory: '+row['path'])
                info=zipfile.ZipInfo.from_file(p,row['path']);info.compress_type=zipfile.ZIP_DEFLATED;h=hashlib.sha256()
                with p.open('rb') as source,z.open(info,'w',force_zip64=True) as target:
                    while chunk:=source.read(1024*1024):h.update(chunk);target.write(chunk)
                after=p.stat()
                if (after.st_size,after.st_mtime_ns)!=(before.st_size,before.st_mtime_ns):raise RuntimeError('file changed while packaging: '+row['path'])
                digest_index[row['path']]=h.hexdigest()
                digests.append(h.hexdigest()+'  '+row['path'])
            for row in duplicates:
                if digest_index[row['canonical_path']] != row['sha256'] or file_sha256(R/row['path']) != row['sha256']:
                    raise RuntimeError('physical view changed after deduplication check: '+row['path'])
            z.writestr('PACKAGING-DEDUPLICATED-VIEWS.json',json.dumps(physical,ensure_ascii=False,indent=2))
            z.writestr('PACKAGING-DEDUPLICATED-REPLAY-FIXTURES.json',json.dumps(fixtures,ensure_ascii=False,indent=2))
            sums='\n'.join(digests)+'\n';z.writestr('SUBMISSION-SHA256SUMS',sums);z.writestr('PACKAGING-OMITTED-CACHES.json',json.dumps({'workspace_files_deleted':0,'omitted':caches,'excluded_dependency_directories':sorted(EXCLUDED)},ensure_ascii=False,indent=2))
        with zipfile.ZipFile(partial) as z:
            actual_expanded=sum(x.file_size for x in z.infolist());assert actual_expanded<=EXPANDED_LIMIT
            bad=z.testzip();assert bad is None,('ZIP CRC failed',bad)
            assert z.read('SUBMISSION-SHA256SUMS').decode('utf-8')==sums
            for name,digest in digest_index.items():
                with z.open(name) as entry:
                    assert hashlib.file_digest(entry,'sha256').hexdigest()==digest, ('ZIP SHA-256 failed',name)
        if partial.stat().st_size>ZIP_LIMIT:raise RuntimeError('compressed package exceeds SPEC 1 GiB')
        os.replace(partial,dest);summary.update(status='ARCHIVE_SIZE_AND_CRC_PASS',archive=dest.name,archive_bytes=dest.stat().st_size,archive_expanded_bytes=actual_expanded, verified_payload_sha256_files=len(digest_index))
        (R/(dest.stem+'-receipt.json')).write_text(json.dumps(summary,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps(summary,ensure_ascii=False,indent=2))
if __name__=='__main__':main()