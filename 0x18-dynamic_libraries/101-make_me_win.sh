#!/bin/bash

wget -P https://github.com/FrancisMich/alx-low_level_programming/blob/master/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
