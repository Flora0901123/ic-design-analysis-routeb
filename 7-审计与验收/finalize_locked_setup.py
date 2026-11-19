from pathlib import Path
R=Path(__file__).resolve().parents[1];p=R/'9-GPU复现/锁定环境.sh';s=p.read_text(encoding='utf-8-sig');s=s.replace('export VERILATOR_ROOT="$routeb_verilator_root/share/verilator"', '''routeb_tool_alias=/tmp/routeb-verilator-5040-install
if [[ -e "$routeb_tool_alias" || -L "$routeb_tool_alias" ]]; then
  if [[ "$(readlink -f -- "$routeb_tool_alias")" != "$(readlink -f -- "$routeb_verilator_root")" ]]; then
    printf '%s\\n' 'ASCII tool alias belongs to another directory; refusing to replace it.' >&2
    return 1 2>/dev/null || exit 1
  fi
else
  ln -s -- "$routeb_verilator_root" "$routeb_tool_alias" || return 1
fi
export VERILATOR_ROOT="$routeb_tool_alias/share/verilator"''').replace('export PATH="$routeb_verilator_root/bin:$PATH"','export PATH="$routeb_tool_alias/bin:$PATH"').replace('unset routeb_lock_dir routeb_verilator_root routeb_version','unset routeb_lock_dir routeb_verilator_root routeb_version routeb_tool_alias');p.write_text(s,encoding='utf-8',newline='\n')
# Installer should derive adapter acceptance from its explicit final status as well as exit code.
p=R/'7-审计与验收/build_locked_tool_durable.py';s=p.read_text(encoding='utf-8-sig');s=s.replace("state['adapter_producer_exit_code']=code;save()", "adapter=json.loads((R/'8-本轮实验/GPU锁定版适配器-20261107/status.json').read_text());state['adapter_producer_exit_code']=code;state['adapter_status']=adapter['status'];save()")
s=s.replace("state.get('adapter_producer_exit_code')==0 else 1", "state.get('adapter_producer_exit_code')==0 and state.get('adapter_status')=='ADAPTER_RTL_PASS' else 1");p.write_text(s,encoding='utf-8')
