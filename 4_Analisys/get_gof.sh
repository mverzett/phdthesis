#!/bin/bash

# Copy the analysis plots from my area at UW

# Usage: ./copy_from_uw.sh [ntuple_date]

base_dir=/afs/hep.wisc.edu/home/mverzett/cms/whlimits/src

echo "Copying GoF plots"
pushd pics/GoF
ls *.pdf | xargs -n 1 -I {} cp -v $base_dir/{} .
popd

