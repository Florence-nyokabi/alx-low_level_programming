#!/bin/bash
wget -O /tmp/win.so https://github.com/Florence-wangui/alx-low_level_programming/edit/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/101-make_me_win.sh
