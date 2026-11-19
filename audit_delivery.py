"""Read-only offline audit of selected independently sealed evidence. Not a fresh target replay."""
from pathlib import Path
import argparse,json,sys,datetime
R=Path(__file__).resolve().parent
sys.path.insert(0,str(R/'7-审计与验收'))
from report_evidence import load_gpu_progress,load_physical_progress,load_new_physical_preflight,load_new_physical_mapping,sha,read_snapshot
from verify_report_outputs import verify

def audit():
 gpu=load_gpu_progress(R);physical=load_physical_progress(R);pre=load_new_physical_preflight(R);mapping=load_new_physical_mapping(R)
 cpu=R/'8-本轮实验/CPU-Nano组合最终确认-20261110'
 receipt,_=read_snapshot(cpu/'验收结论.json');bindings,_=read_snapshot(cpu/'evidence-sha256.json')
 assert receipt['status']=='CPU_COMBO_RESET3X2_FROZEN12_INDEPENDENTLY_SEALED'
 for name,expected in bindings.items():
  path=(R/name).resolve();assert path.is_relative_to(R) and sha(path)==expected,('CPU evidence changed',name)
 assert receipt['frozen_questions_passed']==12 and receipt['fresh_interleaved_resets_per_variant']==3 and receipt['formal_promote'] is False
 report=verify(R)
 open_gates=[]
 if not gpu['full_board']:open_gates.append('完整1000条候选板尚未独立封存')
 open_gates += ['原物理来源仍18项未匹配，新硬件单独验收','映射后整机等价、布局布线及提取后时序未闭环','功耗与能耗证据未完成','GPU Nano优化前后交互性能对照未完成','正式优化晋升仍HOLD']
 if not gpu['delivery']:open_gates.append('本机冻结ZIP与复现尚待验收')
 return dict(status='SELECTED_SEALED_EVIDENCE_PASS_WITH_OPEN_GATES',checked_at=datetime.datetime.now(datetime.timezone.utc).isoformat(),scope='Offline selected evidence only; not all historical files, no fresh CPU/GPU execution or clean-environment replay',completion=gpu['completion'],teacher_score=None,formal_promotion='HOLD',physical_signoff=False,selected_evidence=dict(gpu_baseline_1000_sealed=gpu['full_numeric'],gpu_candidate_1000_sealed=gpu['full_board'],cpu_combo_reset3x2_frozen12=True,cpu_manifest_files=len(bindings),ff_four_state_records=pre['receipt']['total_four_state_records'],mapped_leaf_cells=mapping['receipt']['standard_cell_count'],physical_exact_bindings=physical['exact'],physical_total_bindings=physical['total'],report_consistency=report['status']),open_gates=open_gates)

def main():
 parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--require-final',action='store_true',help='Return code 2 while any final gate remains open.');args=parser.parse_args()
 try:
  result=audit();print(json.dumps(result,ensure_ascii=False,indent=2));return 2 if args.require_final and result['open_gates'] else 0
 except Exception as e:
  print(json.dumps(dict(status='OFFLINE_EVIDENCE_AUDIT_FAILED',error=f'{type(e).__name__}: {e}'),ensure_ascii=False,indent=2));return 1
if __name__=='__main__':raise SystemExit(main())