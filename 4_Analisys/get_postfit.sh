#!/bin/bash

# Copy the analysis plots from my area at UW

# Usage: ./copy_from_uw.sh [ntuple_date]

base_dir=/afs/hep.wisc.edu/home/mverzett/cms/whlimits/src/HIG-13-004/plots/

echo "Copying GoF plots"
pushd pics/postfit
ls *.pdf | xargs -n 1 -I {} cp -v $base_dir/{} .
popd

