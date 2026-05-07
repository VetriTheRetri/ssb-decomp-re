#!/usr/bin/env python3
"""
Type chain-hex `u32 X[N]` pointer arrays in fighter Model relocData files
to `u16 *X[N]` palette arrays or `u8 *X[N]` sprite arrays based on the
MObjSub field offset that references each one in the `.reloc`:

    +0x4  -> sprites field   -> u8 *X[N]
    +0x2C -> palettes field  -> u16 *X[N]

Per-entry expression comes from the `.reloc` target form:
    NULL                          -> NULL,
    dXxx_palette_0xN              -> (u16 *)dXxx_palette_0xN,
    dXxx_<gap>_sub_<sub>          -> (u16 *)dXxx_<gap>_sub_<sub>,    (palette)
    dXxx_Tex_0xN                  -> dXxx_Tex_0xN,                    (sprite)
    dXxx_Tex_0xN+0xK              -> (u16 *)((u8 *)dXxx_Tex_0xN+0xK), (palette)
                                     &dXxx_Tex_0xN[0xK],              (sprite)

Handles raw-hex `.reloc` targets (e.g. `0x75A8`) by looking up the
matching symbol in the compiled .o with `nm` and rewriting to
`<sym>` or `<sym>+0x<delta>` form.

Usage: python3 tools/typeMObjSubChainArrays.py <fid>
"""
from __future__ import annotations
import re
import subprocess
import sys
from pathlib import Path

if len(sys.argv) != 2:
    sys.exit(f'usage: {sys.argv[0]} <fid>')

fid = sys.argv[1]
src_dir = Path('src/relocData')
candidates = sorted(src_dir.glob(f'{fid}_*.c'))
candidates = [p for p in candidates if not p.name.endswith('.jp.c')]
if not candidates:
    sys.exit(f'no src/relocData/{fid}_*.c found')
c_path = candidates[0]
reloc_path = c_path.with_suffix('.reloc')
assert reloc_path.exists(), f'missing {reloc_path}'

obj_path = Path(f'build/us/src/relocData/.build/{fid}.o')

c = c_path.read_text()
reloc = reloc_path.read_text()

# Build offset -> symbol map from nm
offset_to_sym = {}  # int -> symbol name (preferring the longest/most-specific name when multiple)
sym_offsets = []  # sorted list of (offset, sym)
if obj_path.exists():
    out = subprocess.check_output(
        ['mips-linux-gnu-nm', str(obj_path)], text=True
    )
    for line in out.splitlines():
        m = re.match(r'^([0-9a-fA-F]+) [DBdb] (\w+)$', line)
        if m:
            off = int(m.group(1), 16)
            name = m.group(2)
            # Skip auto-generated PAD names
            if '_relocdata_pad_' in name:
                continue
            sym_offsets.append((off, name))
    sym_offsets.sort()


def resolve_byte_offset(byte_off: int) -> str:
    """Return symbol name (or symbol+0xN) covering byte_off, else hex literal."""
    if not sym_offsets:
        return f'0x{byte_off:X}'
    # Binary search for largest symbol whose offset <= byte_off
    import bisect
    idx = bisect.bisect_right([o for o, _ in sym_offsets], byte_off) - 1
    if idx < 0:
        return f'0x{byte_off:X}'
    sym_off, sym_name = sym_offsets[idx]
    delta = byte_off - sym_off
    if delta == 0:
        return sym_name
    return f'{sym_name}+0x{delta:X}'


# Build map: array_name -> {byte_off: target_expr}
# Target may already be symbolic, or raw hex (we resolve raw hex via nm)
target_map = {}
intern_re = re.compile(r'^intern (\w+?)(\+0x([0-9A-Fa-f]+))? (\S+)$', re.M)
for m in intern_re.finditer(reloc):
    base = m.group(1)
    off = int(m.group(3), 16) if m.group(3) else 0
    raw_tgt = m.group(4)
    # Resolve raw hex if needed
    if re.fullmatch(r'0x[0-9A-Fa-f]+', raw_tgt):
        tgt = resolve_byte_offset(int(raw_tgt, 16))
    else:
        tgt = raw_tgt
    target_map.setdefault(base, {})[off] = tgt

# Reverse lookup: array_name -> referencing MObjSub offset (or None)
ref_offset = {}
for m in intern_re.finditer(reloc):
    base = m.group(1)
    off = int(m.group(3), 16) if m.group(3) else 0
    raw_tgt = m.group(4)
    tgt_sym = raw_tgt
    if re.fullmatch(r'0x[0-9A-Fa-f]+', raw_tgt):
        tgt_sym = resolve_byte_offset(int(raw_tgt, 16))
    # Strip +0xN if present so we match by base symbol
    base_only = tgt_sym.split('+', 1)[0]
    if base_only in target_map and off in (0x4, 0x2C):
        ref_offset.setdefault(base_only, set()).add(off)

# Find all `u32 X[N] = { 0xNNNNNNNN, ... }` arrays whose body is pure
# chain-hex (and not aobjEvent32 anim scripts).
arr_re = re.compile(
    r'(?P<full>'
    r'(?P<comment>(?:/\*[^\n]*\*/\n)?)'
    r'u32 (?P<name>\w+)\[(?P<size>\d+)\] = \{\n'
    r'(?P<body>(?:\s+0x[0-9A-Fa-f]+,\n)+)'
    r'\};'
    r')',
    re.M,
)


def is_chain_hex_only(body_text: str) -> bool:
    lines = [l.strip().rstrip(',') for l in body_text.strip().split('\n') if l.strip()]
    if not lines:
        return False
    if not all(re.fullmatch(r'0x[0-9A-Fa-f]+', x) for x in lines):
        return False
    nonzero = [x for x in lines if int(x, 16) != 0]
    if not nonzero:
        return False
    return True


new_c = c
needed_externs: dict[str, str] = {}
n_pal = 0
n_spr = 0
n_skip_other = 0
n_skip_unknown = 0
n_skip_already_typed = 0

for m in arr_re.finditer(c):
    name = m.group('name')
    size = int(m.group('size'))
    body = m.group('body')

    if not is_chain_hex_only(body):
        continue

    refs = ref_offset.get(name, set())
    if refs == {0x4}:
        elem_type = 'u8'
        n_spr += 1
    elif refs == {0x2C}:
        elem_type = 'u16'
        n_pal += 1
    elif not refs:
        n_skip_unknown += 1
        continue
    else:
        n_skip_other += 1
        continue

    targets = target_map.get(name, {})
    new_entries = []
    for i in range(size):
        off = i * 4
        if off not in targets:
            new_entries.append('\tNULL,')
            continue
        tgt = targets[off]
        plus = tgt.find('+')
        if plus >= 0:
            base = tgt[:plus]
            off_str = tgt[plus + 1:]
            if elem_type == 'u8':
                new_entries.append(f'\t&{base}[{off_str}],')
            else:
                new_entries.append(f'\t({elem_type} *)((u8 *){base} + {off_str}),')
        else:
            base = tgt
            if elem_type == 'u8':
                new_entries.append(f'\t{base},')
            else:
                new_entries.append(f'\t({elem_type} *){base},')

        # Forward extern needed for any referenced symbol
        if '_palette_' in base:
            needed_externs.setdefault(base, 'u16')
        elif '_Tex_' in base:
            needed_externs.setdefault(base, 'u8')
        elif '_Lut_' in base:
            needed_externs.setdefault(base, 'u16')
        elif '_gap_' in base or '_Joint_' in base or '_post' in base or '_sub_' in base:
            needed_externs[base] = elem_type

    body_new = '\n'.join(new_entries)
    new_block = (
        f'{m.group("comment")}'
        f'{elem_type} *{name}[{size}] = {{\n'
        f'{body_new}\n'
        f'}};'
    )
    new_c = new_c.replace(m.group('full'), new_block, 1)

print(f'{c_path.name}: converted {n_pal} palette + {n_spr} sprite arrays'
      f' (skipped: {n_skip_unknown} unknown ref, {n_skip_other} non-+0x4/+0x2C ref)')

# Find existing typed declarations to know their actual type
existing_decls = {}
for m in re.finditer(r'^(u8|u16|u32|MObjSub|AObjEvent32|Vtx|Gfx|DObjDesc) (\w+)(?:\[|\b)', new_c, re.M):
    typ, name = m.group(1), m.group(2)
    existing_decls[name] = typ

# Add forward externs for unknown gap palette/sprite blocks; use existing type
# if a definition already exists (avoids redeclaration conflicts)
existing = set()
for sym in list(needed_externs):
    # Already declared as extern
    if re.search(rf'extern\s+\S+\s+\*?{re.escape(sym)}\b', new_c):
        existing.add(sym)
        continue
    # Defined later in the file with a different type -> use that type
    if sym in existing_decls:
        needed_externs[sym] = existing_decls[sym]

to_add = [(s, t) for s, t in sorted(needed_externs.items()) if s not in existing]

if to_add:
    extern_lines = '\n'.join(f'extern {t} {s}[];' for s, t in to_add)
    last_palette_extern = list(re.finditer(r'extern u16 \w+_palette_0x[0-9A-Fa-f]+\[\];\n', new_c))
    if last_palette_extern:
        end = last_palette_extern[-1].end()
        new_c = new_c[:end] + extern_lines + '\n' + new_c[end:]
    else:
        m_inc = list(re.finditer(r'^#include[^\n]+\n', new_c, re.M))
        if m_inc:
            end = m_inc[-1].end()
            new_c = new_c[:end] + extern_lines + '\n' + new_c[end:]
    print(f'  added {len(to_add)} externs: {[s for s, _ in to_add]}')

if new_c != c:
    c_path.write_text(new_c)
    print(f'  wrote {c_path}')
