"""Document evidence-based SRAM-generation prerequisites; no EDA is invoked."""
from pathlib import Path
import hashlib,json,re,zlib
O=Path(__file__).resolve().parent
R=O.parents[1]
B=R/'6-源码引用/原始参考包'
P=R/'8-本轮实验/GPU生成规则物理恢复-20261110'
a=json.loads((O/'archive-audit.json').read_text(encoding='utf-8'))
i=json.loads((O/'local-tool-inventory.json').read_text(encoding='utf-8'))
f=json.loads((O/'official-source-receipt.json').read_text(encoding='utf-8'))

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def dump(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')

source_paths=['sources/third_party/sources.lock.json','sources/scripts/generate_vortex_openram_bindings.py',
 'sources/scripts/run_student_mini_gpu_cut_synthesis.py','sources/scripts/normalize_student_mini_macro_lef.py',
 'sources/scripts/add_openram_via3_dogbones.py','sources/scripts/student_mini_gate_power.py',
 'sources/ppa/designs/gpu-vortex-b0/macro-inputs-banked.mk']
evidence=[{'path':str(B/p),'sha256':sha(B/p)} for p in source_paths]
macros=[]
for name in ('vortex_dp_80x64_w4','vortex_sp_128x128_w16','vortex_sp_32x1024_w4','vortex_sp_32x256_w1','vortex_sp_32x512_w4','vortex_sp_64x128_w8'):
 m=re.fullmatch(r'vortex_(dp|sp)_(\d+)x(\d+)_w(\d+)',name)
 width,depth,mask=map(int,m.groups()[1:])
 macros.append({'macro_name':name,'data_width':width,'depth':depth,'write_enable_width':mask,
  'write_slice_bits_inferred_from_wrapper':width//mask,'port_topology_from_original_binding_generator':'1r1w',
  'exact_openram_config_recovered':False,'caution':'Logical shape/topology is evidence-backed; remaining layout/compiler options are unresolved.'})
needs=[
 {'priority':0,'dependency':'Original six per-macro OpenRAM configurations and generation command receipts',
  'available':False,'why':'Shape and mask width do not fix words_per_row, banking, spare cells, pin/supply routing, bitcell/control options, corner tables and analytical/characterization switches.',
  'next_action':'Recover original config bytes or a complete provenance-backed generation recipe before trying byte-identity recreation.'},
 {'priority':0,'dependency':'Original staged-openram-banked-manifest.json and raw LEF/GDS/LIB input hashes',
  'available':False,'why':'The packaged cut-synthesis script consumes this original manifest; the R9 file is an explicitly new functional-model manifest.',
  'next_action':'Recover original staging manifest/receipts, including whether dogbone postprocessing ran and its actual invocation parameters.'},
 {'priority':1,'dependency':'OpenRAM compiler at b2b069ce119d1488cbe6883b2240bceb5c7ce29a and any original local modifications',
  'available':'Commit pinned publicly; only four inspection files downloaded, no compiler installed.',
  'next_action':'Fetch/verify the locked source in a later isolated generation environment; do not substitute latest OpenRAM or a pip release.'},
 {'priority':1,'dependency':'Matching Sky130 SRAM cell views, technology setup and SPICE models with version/hash provenance',
  'available':False,'why':'Official tech.py names sky130_fd_bd_sram cells and SPICE_MODEL_DIR/sky130.lib.spice. The recovered ORFS sky130_fd_sc_hd stdcell Liberty is a different dependency.',
  'next_action':'Pin the original SRAM cell/PDK input revisions and hashes; obtain required GDS/SPICE and setup files before generation.'},
 {'priority':2,'dependency':'Explicit Python/Git/toolchain environment and original OpenRAM flags',
  'available':'Python and Git available; OpenRAM/Nix/Magic/Netgen/ngspice absent from audited WSL PATH.',
  'why':'Locked defaults use Nix; use_nix=False can use PATH only if justified by the original run. Sky130 requires Magic for filtering; characterization and DRC/LVS/PEX add conditional tools.',
  'next_action':'Choose the exact original route. Require ngspice/Xyce if actual characterization ran; require the original verification tools and PDK decks when the original flags call for them. Do not install an unrestricted stack.'},
 {'priority':3,'dependency':'Postprocessing and twelve final expected SHA checks',
  'available':'Normalization and dogbone scripts are packaged; raw geometry and staging parameters are missing.',
  'next_action':'Apply only documented original staging operations. The LEF normalizer changes DATABASE MICRONS 2000 to 1000 without geometry changes. Check all six final LEFs and six TT Liberty hashes; mismatch remains a separate new version.'}
]
d={'status':'GENERATION_PREREQUISITES_IDENTIFIED_NO_PHYSICAL_RECOVERY_CLAIMED','macros':macros,
 'required_inputs':needs,'packaged_source_evidence':evidence,'official_source_receipt':'official-source-receipt.json',
 'tool_inventory':'local-tool-inventory.json','new_exact_matches':0,'total_exact_matches':32,'remaining_unmatched':18,
 'EDA_executed':False,'large_downloads_or_installations':False}
dump(O/'sram-generation-prerequisites.json',d)
lines=['# GPU 源小包及 SRAM 生成依赖复核（2026-11-10）','',
'已实际检查老师目录 `open-soc-ai-labs (1).7z` 的内部清单、解压内容和全部 Git blob。**没有新增精确恢复，原绑定仍为 32/50 匹配、18/50 未匹配，物理身份仍为 HOLD。** 本结论来自内容与 SHA 检查，不再依赖归档文件时间判断。','',
'## 归档检查结果','',
'- 原包 SHA-256：`'+a['archive_sha256']+'`；大小 387,664 字节。',
'- 内部 1,130 个条目：790 个文件、340 个目录；197 个非 Git 文件，全部解压文件合计 715,755 字节。',
'- Git 对象总数 570；使用 `cat-file --batch-all-objects` 取出的全部 401 个 blob 均逐一计算 SHA-256，对照剩余 18 项原绑定。匹配数为 0，扫描覆盖可达和不可达对象。',
'- 四条 Git 提交均为课程初始化/文档提交，完整原始日志见 `git-log.txt`；这是内容核查后的辅助信息。',
'- 文件名只命中 `ppa/common/constraint.sdc` 与 `shared/rtl/sram_1rw.sv`。前者仅 210 字节，SHA 为 `d37e4c6fae2d6c52bc2da31f65a77051196c75969e977f0cf0b2649ee6af34ed`，使用单一 core_clock，未定义 GPU io_clock/延迟；与缺失 top-config 约束 SHA 不同。后者是行为 RTL，不是 LEF/LIB/GDS。',
'- 归档中未找到 gpu_constraint.sdc、vortex 物理宏、原 staged manifest、六份 OpenRAM 配置、flat_3_place.v、quad.v 或原旧 final 网表。其 Git blob 的内容比对也未恢复这些目标字节。','',
'内部清单和解析结果分别见 `archive-listing.txt`、`archive-entries.json`；逐项审计见 `archive-audit.json`。原包只读，解压只在本实验目录 `extracted/`。未执行归档内代码。','',
'## 当前本机范围核查','',
'仅检查已知 WSL 路径 `/opt`、`/root/.cache` 的一级目录和 `/home/camellia/socai/student-mini-v1-cpu-gpu`；未全盘搜索。`/opt` 只有 sbt，缓存一级无 OpenRAM/PDK 项；课程路径是已发布参考包目录。WSL PATH 中有 Python 和 Yosys，未找到 OpenRAM、Magic、Netgen、ngspice、KLayout、OpenROAD 或 Nix；五个 OpenRAM/PDK 相关环境变量为空。结果见 `local-tool-inventory.json`。这些检查不能证明其他未知目录绝对不存在安装，但当前没有可引用的完整生成环境。','',
'## 有来源的 SRAM 恢复路线','',
'原包锁定 [OpenRAM 固定提交](https://github.com/VLSIDA/OpenRAM/tree/b2b069ce119d1488cbe6883b2240bceb5c7ce29a)。本轮只下载该提交的 README、options.py、globals.py 和 sky130 tech.py，合计 72,595 字节，全部保存在本目录 `official-source/` 并记录 URL、commit、SHA；未安装或执行。它们用于依赖审查，不计为宏视图恢复。','',
'原绑定生成器明确要求六种宏为 1R1W。宏名与原包装器可以确定以下逻辑条件，但不能唯一确定原 OpenRAM 几何/表征配置：','',
'| 宏 | 数据宽度 | 深度 | 写使能位数 | 每写片段位数（按原包装器推导） |','| --- | ---: | ---: | ---: | ---: |']
for m in macros:lines.append('| '+m['macro_name']+' | '+str(m['data_width'])+' | '+str(m['depth'])+' | '+str(m['write_enable_width'])+' | '+str(m['write_slice_bits_inferred_from_wrapper'])+' |')
lines += ['',
'建议按以下依赖顺序推进；本轮没有启动其后的 EDA 步骤：','',
'1. **先补原六份配置及 staging 收据。** 原生成命令、words_per_row、布局/供电/引脚选项、spare 及模型设置未交付；只从宏名填入宽度和深度不足以重现原字节。原 `staged-openram-banked-manifest.json` 缺失；R9 同名文件已明确标为功能重建，不能替代。',
'2. **固定编译器及真实 SRAM/PDK 输入。** 下载锁定 OpenRAM 源码仍需核对原修改。Sky130 技术文件依赖专门 SRAM cell 视图和 SPICE 根目录，必须获取可追溯版本/哈希；已恢复的 ORFS 标准单元 LIB 不能提供这些 SRAM 输入。[固定 Sky130 技术源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/technology/sky130/tech/tech.py)',
'3. **再确定工具路线。** 锁定源码默认使用 Nix，Sky130 另需 Magic 过滤；仿真表征、DRC/LVS/PEX 工具是否需要取决于原配置，不能由当前缺件倒推出。原功耗脚本提到分析功耗模型，不足以恢复六份宏的完整运行选项。[选项源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/compiler/options.py)、[初始化源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/compiler/globals.py)',
'4. **按原规则后处理并比对十二个 SHA。** `run_student_mini_gpu_cut_synthesis.py` 消费原 staged manifest 后调用已打包 normalizer，仅把 DBU 声明 2000 改为 1000，坐标与几何不变。有 dogbone 脚本，但如果原 staging 使用它，还须恢复实际 macro-origin/clock-track-shift 参数与收据。任何输出不匹配都只能记录为新版本。','',
'可机读依赖清单在 `sram-generation-prerequisites.json`，包含优先级、当前缺项、依据和下一步。当前没有足够来源支撑原十二份宏物理视图的精确重建；不以猜选项、猜文本或批量碰哈希替代缺失来源。','',
'## 本轮边界','',
'上一轮 `GPU生成规则物理恢复-20261110` 的 17 个封存文件未变；原始资料及报告构建器未改。无 EDA、无大规模下载、无安装。当前新增恢复数为 0，保持 32/50 与物理身份 HOLD。','']
(O/'小包与SRAM依赖报告.md').write_text('\n'.join(lines),encoding='utf-8',newline='\n')
entries=json.loads((O/'archive-entries.json').read_text(encoding='utf-8'))
checked=0
for e in entries:
 if 'D' in e.get('Attributes',''):continue
 p=O/'extracted'/e['Path']
 data=p.read_bytes()
 assert len(data)==int(e['Size'])
 assert f'{zlib.crc32(data)&0xffffffff:08X}'==e['CRC']
 checked+=1
assert checked==790
for line in (P/'MANIFEST.sha256').read_text(encoding='utf-8').splitlines():
 expected,rel=line.split('  ',1)
 assert sha(P/rel)==expected,rel
for row in f['records']:assert sha(O/row['file'])==row['sha256']
assert sha(Path(a['archive']))==a['archive_sha256']
verification={'status':'PASS_ARCHIVE_790_CRC_CHECKS_PRIOR_17_UNCHANGED_NO_NEW_RECOVERY','archive_files_crc_verified':790,
 'prior_experiment_files_sha_verified':17,'official_small_source_files_sha_verified':4,'new_binding_matches':0,
 'total_binding_matches':32,'remaining_unmatched':18,'physical_identity':'HOLD',
 'archive_audit_sha256':sha(O/'archive-audit.json'),'dependency_checklist_sha256':sha(O/'sram-generation-prerequisites.json'),
 'report_sha256':sha(O/'小包与SRAM依赖报告.md')}
dump(O/'verification.json',verification)
manifest=[]
for p in sorted(O.rglob('*')):
 if p.is_file() and p.name!='MANIFEST.sha256':manifest.append(sha(p)+'  '+p.relative_to(O).as_posix())
(O/'MANIFEST.sha256').write_text('\n'.join(manifest)+'\n',encoding='utf-8',newline='\n')
print(json.dumps(verification,ensure_ascii=True))
