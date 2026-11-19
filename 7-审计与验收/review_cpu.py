from pathlib import Path
import sys,json,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.assemble_student_mini_cpu_results import parse,join
vectors=[json.loads(l) for l in (R/'student-mini-v1-cpu-gpu/data/golden/vectors.jsonl').read_text().splitlines()]
for out in (R/'8-本轮实验').glob('*-cpu-*'):
    if not (out/'console.log').exists():continue
    status=json.loads((out/'status.json').read_text());n=status['records_expected']
    try:
        parsed=parse((out/'console.log').read_text(),n)
        if n!=1000:continue
        report=join(vectors,parsed);(out/'official-numeric-report.json').write_text(json.dumps(report,ensure_ascii=False,indent=2))
        review={'strict_transcript':'PASS','records':n,'numeric_matches':report['numeric_matches'],'numeric_failures':report['counts']['FAIL'],'formal_baseline':False,'protocol_physical_resource':'PENDING','note':'Official parser only requires selected-token output for P1; initial local checker incorrectly checked P2 too. Initial status retained for audit.','official_parser_sha256':hashlib.sha256((S/'scripts/assemble_student_mini_cpu_results.py').read_bytes()).hexdigest()}
        (out/'reviewed-status.json').write_text(json.dumps(review,ensure_ascii=False,indent=2));print(out.name,json.dumps(review,ensure_ascii=False))
    except Exception as e:print(out.name,'REVIEW_FAILED',repr(e))