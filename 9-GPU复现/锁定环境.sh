#!/usr/bin/env bash
# Source this file in WSL; it only selects the packaged locked compiler.
routeb_lock_dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
routeb_verilator_root="$routeb_lock_dir/tools/verilator-5.040"
if [[ ! -x "$routeb_verilator_root/bin/verilator" ]]; then
  printf '%s\n' 'Locked Verilator 5.040 is not installed; run the durable builder first.' >&2
  return 1 2>/dev/null || exit 1
fi
routeb_tool_alias=/tmp/routeb-verilator-5040-install
if [[ -e "$routeb_tool_alias" || -L "$routeb_tool_alias" ]]; then
  if [[ "$(readlink -f -- "$routeb_tool_alias")" != "$(readlink -f -- "$routeb_verilator_root")" ]]; then
    printf '%s\n' 'ASCII tool alias belongs to another directory; refusing to replace it.' >&2
    return 1 2>/dev/null || exit 1
  fi
else
  ln -s -- "$routeb_verilator_root" "$routeb_tool_alias" || return 1
fi
export VERILATOR_ROOT="$routeb_tool_alias/share/verilator"
export PATH="$routeb_tool_alias/bin:$PATH"
routeb_version="$(verilator --version)"
if [[ "$routeb_version" != 'Verilator 5.040 '* ]]; then
  printf 'Unexpected compiler: %s\n' "$routeb_version" >&2
  return 1 2>/dev/null || exit 1
fi
printf '%s\n' "$routeb_version"
unset routeb_lock_dir routeb_verilator_root routeb_version routeb_tool_alias
