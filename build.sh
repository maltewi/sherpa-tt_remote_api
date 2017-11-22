#!/bin/bash

RED='\033[1;31m'
NC='\033[0m'

echo -e " ${RED} Compiling SherpaTTTeleClient ${NC}"

source ./checkenv.sh

mkdir -p build

cd build

cmake ..
make

cp ../include/SherpaTTTeleClient.h .

cd ..
