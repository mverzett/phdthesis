#!/bin/bash

# Copy the analysis plots from my area at UW

# Usage: ./copy_from_uw.sh [ntuple_date]

jobid7=2013-Nov-29-7TeV
jobid8=2013-Nov-23-8TeV
base_dir=/afs/hep.wisc.edu/home/mverzett/cms/vhanalysis_summer13_slc6/src/UWHiggs/wh/

echo "Copying plots 7TeV"
resdir=$base_dir/results/$jobid7
pushd pics/7TeV
echo 'copying plots'
find plots -name '*.*' | xargs -n 1 -I {} cp -v $resdir/{} {}
popd
#rsync -avz --existing --exclude "*.root" $base_dir/results/$jobid7/plots 4_Analisys/pics/7TeV/.
#rsync -avz --existing --exclude "*.root" $base_dir/results/$jobid7/NeighborsStudy 4_Analisys/pics/7TeV/.
##cp $base_dir/fitted_neighbors_$jobid7.json 4_Analisys/pics/7TeV//fitted_neighbors.json
#
echo "Copying plots 8TeV"
resdir=$base_dir/results/$jobid8
pushd pics/8TeV
echo 'copying plots'
find plots -name '*.*' | xargs -n 1 -I {} cp -v $resdir/{} {}
#echo 'copying kNN stuff'
#find -name '*.*' ProfileNeighbors | xargs -n 1 -I {} cp -v $resdir/NeighborsStudy/{} {}
#echo 'copying kNN stuff'
#find -name '*.*' fakerate_fits | xargs -n 1 -I {} cp -v $resdir/{} {}
popd

#rsync -avz --existing --exclude "*.root" $base_dir/results/$jobid8/plots 4_Analisys/pics/8TeV/.
#rsync -avz --existing --exclude "*.root" $base_dir/results/$jobid8/NeighborsStudy 4_Analisys/pics/8TeV/.
#cp $base_dir/fitted_neighbors_$jobid8.json 4_Analisys/pics/8TeV//fitted_neighbors.json

#cp $base_dir/kNN_minima_table.tex tabs/.
