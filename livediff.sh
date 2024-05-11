#!/bin/sh

#Pass an extra arg like --nostop to to not stop after the first return  

if [ $# -lt 2 ]; then
    python3 tools/asm-differ/diff.py -smwo3 --line-numbers --max-lines 2048 "$1"
else 
    python3 tools/asm-differ/diff.py -mwo3 --line-numbers --max-lines 2048 "$2"
fi
