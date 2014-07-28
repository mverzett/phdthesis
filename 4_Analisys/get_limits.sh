#!/bin/bash

# Copy the analysis plots from my area at UW

# Usage: ./copy_from_uw.sh [ntuple_date]

base_dir=/afs/hep.wisc.edu/home/mverzett/cms/vhanalysis_summer13_slc6/src/UWHiggs/wh/results/2013-Nov-23-8TeV/plots/

echo "Copying limit plots"
pushd pics/
find limits -name '*.*' | xargs -n 1 -I {} cp -v $base_dir/{} {}
popd

