#!/usr/bin/env python3
"""Add forward `extern` decls for any retyped symbol referenced before
its definition.

Detects:
  - `(AObjEvent32 **)<sym>`     in `AObjEvent32 **X[]` blocks
  - `(AObjEvent32 *)<sym>`      in `AObjEvent32 *X[]` blocks
  - `(MObjSub **)<sym>`         in `MObjSub **X[]` blocks
  - `(MObjSub *)<sym>`          in `MObjSub *X[]` blocks
  - `(u32)<sym>` / `(u32)&<sym>` in `u32 X[]` anim scripts
"""
import re
from pathlib import Path
import sys

c_path = Path(sys.argv[1])
text = c_path.read_text()

defns = {}
for m in re.finditer(
    r'^(?P<typ>'
    r'AObjEvent32\s*\*\*|AObjEvent32\s*\*|'
    r'MObjSub\s*\*\*|MObjSub\s*\*|'
    r'u32|u16|u8|Vtx|Gfx|MObjSub|DObjDesc'
    r')\s*(?P<name>\w+)\s*\[',
    text, re.M,
):
    defns[m.group('name')] = (m.start(), re.sub(r'\s+', ' ', m.group('typ').strip()))

needed = set()
for m in re.finditer(
    r'\(('
    r'AObjEvent32 \*\*|AObjEvent32 \*|MObjSub \*\*|MObjSub \*|u32'
    r')\)(&?\s*)(\w+)',
    text,
):
    sym = m.group(3)
    if sym not in defns:
        continue
    defn_pos, defn_typ = defns[sym]
    if m.start() < defn_pos:
        needed.add((sym, defn_typ))

to_add = []
for sym, typ in sorted(needed):
    pat = (rf'^extern\s+(?:AObjEvent32\s*\*\*|AObjEvent32\s*\*|'
           rf'MObjSub\s*\*\*|MObjSub\s*\*|u32|u16|u8|Vtx|Gfx|MObjSub|DObjDesc)'
           rf'\s*{re.escape(sym)}\s*\[\];$')
    if not re.search(pat, text, re.M):
        to_add.append(f'extern {typ} {sym}[];')

if not to_add:
    print('no forward externs needed')
    sys.exit(0)

last_extern = list(re.finditer(r'^extern\s+[^;]+;\n', text, re.M))
if last_extern:
    insertion = last_extern[-1].end()
else:
    m = list(re.finditer(r'^#include[^\n]+\n', text, re.M))
    insertion = m[-1].end() if m else 0
text = text[:insertion] + '\n'.join(to_add) + '\n' + text[insertion:]

c_path.write_text(text)
print(f'added {len(to_add)} forward externs')
