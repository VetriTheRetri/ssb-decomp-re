#!/usr/bin/env python3
"""Add forward `extern` decls for any retyped symbol referenced before
its definition.

Detects:
  - `(AObjEvent32 **)<sym>`     in `AObjEvent32 **X[N]` blocks
  - `(AObjEvent32 *)<sym>`      in `AObjEvent32 *X[N]` blocks
  - `(u32)<sym>` / `(u32)&<sym>` in `u32 X[N]` anim scripts
"""
import re
from pathlib import Path
import sys

c_path = Path(sys.argv[1])
text = c_path.read_text()

# Build map of sym -> (line_pos, type)
defns = {}
for m in re.finditer(r'^(?P<typ>AObjEvent32\s*\*\*|AObjEvent32\s*\*|u32)\s*(?P<name>\w+)\s*\[', text, re.M):
    defns[m.group('name')] = (m.start(), m.group('typ').strip())

# Find all references and check forward
needed = set()
for m in re.finditer(r'\((AObjEvent32 \*\*|AObjEvent32 \*|u32)\)(&?\s*)(\w+)', text):
    sym = m.group(3)
    if sym not in defns:
        continue
    defn_pos, defn_typ = defns[sym]
    if m.start() < defn_pos:
        # Forward reference — needs extern
        needed.add((sym, defn_typ))

if not needed:
    print('no forward externs needed')
    sys.exit(0)

# Filter out already-extern'd symbols
to_add = []
for sym, typ in sorted(needed):
    pat = rf'^extern\s+(?:AObjEvent32\s*\*\*|AObjEvent32\s*\*|u32|u8)\s*{re.escape(sym)}\s*\[\];$'
    if not re.search(pat, text, re.M):
        to_add.append(f'extern {typ} {sym}[];')

if not to_add:
    print('all forward externs already declared')
    sys.exit(0)

# Insert after last existing extern in header region
last_extern = list(re.finditer(r'^extern\s+[^;]+;\n', text, re.M))
if last_extern:
    insertion = last_extern[-1].end()
else:
    m = list(re.finditer(r'^#include[^\n]+\n', text, re.M))
    insertion = m[-1].end() if m else 0
text = text[:insertion] + '\n'.join(to_add) + '\n' + text[insertion:]

c_path.write_text(text)
print(f'added {len(to_add)} forward externs')
