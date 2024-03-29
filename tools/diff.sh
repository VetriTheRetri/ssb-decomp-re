#!/bin/bash

python ./tools/disasm.py -b $1 > /tmp/a.s
python ./tools/disasm.py -b $2 > /tmp/b.s
diff --side-by-side /tmp/a.s /tmp/b.s
