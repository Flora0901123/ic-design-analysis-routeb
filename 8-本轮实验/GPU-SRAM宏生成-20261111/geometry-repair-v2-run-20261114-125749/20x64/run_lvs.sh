#!/bin/sh
export OPENRAM_TECH="/root/.cache/routeb-openram-b2b069c/geometry-repair-v2/technology:/root/.cache/routeb-openram-b2b069c/geometry-repair-v2/compiler/../technology"
echo "$(date): Starting LVS using Netgen /root/.cache/routeb-openram-b2b069c/bin/netgen"
/root/.cache/routeb-openram-b2b069c/bin/netgen -noconsole << EOF
lvs {routeb_new_1w1r_20x64.spice routeb_new_1w1r_20x64} {routeb_new_1w1r_20x64.lvs.sp routeb_new_1w1r_20x64} setup.tcl routeb_new_1w1r_20x64.lvs.report -full -json
quit
EOF
magic_retcode=$?
echo "$(date): Finished ($magic_retcode) LVS using Netgen /root/.cache/routeb-openram-b2b069c/bin/netgen"
exit $magic_retcode
