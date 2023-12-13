#!/bin/bash

wget -P /tmp https://github.com/Edmund15/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so.1
