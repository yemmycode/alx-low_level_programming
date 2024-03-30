#!/bin/bash

wget -P .. https://raw.githubusercontent.com/yemmycode/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libplayer.so
export LD_PRELOAD="PWD/../libplayer.so"
