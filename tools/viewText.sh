#!/bin/bash

python ./tools/disasm.py -b $1 > /tmp/$(basename $1).s
nano /tmp/$(basename $1).s
