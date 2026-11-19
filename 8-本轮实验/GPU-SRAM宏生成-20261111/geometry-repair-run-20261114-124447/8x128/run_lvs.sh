#!/bin/sh
export OPENRAM_TECH="/root/.cache/routeb-openram-b2b069c/geometry-repair-v1/technology:/root/.cache/routeb-openram-b2b069c/geometry-repair-v1/compiler/../technology"
echo "$(date): Starting LVS using Netgen /root/.cache/routeb-openram-b2b069c/bin/netgen"
/root/.cache/routeb-openram-b2b069c/bin/netgen -noconsole << EOF
lvs {routeb_new_1w1r_8x128.spice routeb_new_1w1r_8x128} {routeb_new_1w1r_8x128.lvs.sp routeb_new_1w1r_8x128} setup.tcl routeb_new_1w1r_8x128.lvs.report -full -json
quit
EOF
magic_retcode=$?
echo "$(date): Finished ($magic_retcode) LVS using Netgen /root/.cache/routeb-openram-b2b069c/bin/netgen"
exit $magic_retcode
