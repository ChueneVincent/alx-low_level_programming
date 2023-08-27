#!/bin/bash 
wget -p https://github.com/ChueneVincent/alx-low_level_programming/tree/master/0x18-dynamic_libraries/nrandom.so 
export LD_PRELOAD=/tmp/nrandom.so
