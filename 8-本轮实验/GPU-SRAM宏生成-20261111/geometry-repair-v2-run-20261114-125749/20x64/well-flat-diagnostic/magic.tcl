load routeb_new_1w1r_20x64 -dereference
select top cell
flatten routeb_well_flat
load routeb_well_flat
select top cell
expand
drc euclidean on
drc check
drc catchup
drc count total
box values -1000 -1000 300000 300000
puts "ROUTEB_FLAT_RULES [drc listall why]"
save routeb_well_flat
quit -noprompt
