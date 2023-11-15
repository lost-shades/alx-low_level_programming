#!/bin/bash
wgeT -P /tmp/ https://github.com/lost-shades/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigamil.so
export LD_PRELOAD =/tmp/gigamil.so
