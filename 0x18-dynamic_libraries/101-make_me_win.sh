#!/bin/bash
wget -P ../ https://github.com/Gumindoga/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpotlib.so
export LD_PRELOAD=../jackpotlib.so