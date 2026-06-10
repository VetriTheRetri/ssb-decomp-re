#!/usr/bin/python3
"""Split include-backed blocks at `(u8*)sym + 0xN` reference offsets.

Fixes validator R004: pointer expressions like
`(Gfx*)((u8*)dFoo_DL_0x19F0 + 0x1A8)` indicate the parent block holds
several logical sub-blocks; splitting at the referenced offsets gives
each its own symbol and the expression becomes a clean reference.

Handles `Gfx` (.dl.inc.c), `Vtx` (.vtx.inc.c) and `u8`/`u16`/`u32`
(.tex/.data/.palette inc) decls whose body is a single `#include`.

Safety: a Gfx split offset is only accepted when the command right
before it is an end-of-DL word (0xDF/0xB8 F3DEX2/F3DEX1) in the current
generated .dl.inc.c — i.e. the offset starts a NEW display list rather
than branching into the middle of one. Other types only need element
alignment. Decl sizes are shared across versions, so the split is
version-neutral; the build's byte-compare gate is the final arbiter.

New symbols are named `<parent>_0x<ABSOLUTE>` when the parent name ends
in `_0x<hex>` (absolute-offset convention), else `<parent>_sub_0x<REL>`.

Usage: splitBlocksAtPtrOffsets.py <fid> [--version us] [--dry]
"""
import argparse
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import extractRelocInc as eri  # noqa: E402

ELEM = {'Gfx': 8, 'Vtx': 16, 'u8': 1, 'u16': 2, 'u32': 4}


def _gfx_end_offsets(inc_path):
    """Byte offsets just AFTER each end-of-DL command in a .dl.inc.c."""
    ends = set()
    if not os.path.exists(inc_path):
        return ends
    off = 0
    for ln in open(inc_path):
        s = ln.strip()
        if not s or s.startswith('/*') or s.startswith('//'):
            continue
        if s.startswith('gsSPEndDisplayList') or '0xDF000000' in s or '0xB8000000, 0x00000000' in s:
            ends.add(off + 8)
        off += 8
    return ends


def split_fid(fid, version, dry=False):
    eri._bind_version(version)
    master = eri.inline_master_for(fid)
    if master is None:
        return 0
    text = open(master).read()
    sub = None
    m = re.search(r'#include <([^/>]+)/', text)
    if m:
        sub = m.group(1)

    # Harvest reference offsets per parent, skipping region-guarded lines.
    guarded = set()
    depth = 0
    for i, ln in enumerate(text.split('\n'), 1):
        s = ln.strip()
        if s.startswith('#if'):
            depth += 1
        elif s.startswith('#endif'):
            depth = max(0, depth - 1)
        elif depth > 0:
            guarded.add(i)
    refs = {}
    for i, ln in enumerate(text.split('\n'), 1):
        if i in guarded:
            continue
        for m in re.finditer(r'\(u8\s*\*\)\s*(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)', ln):
            refs.setdefault(m.group(1), set()).add(int(m.group(2), 16))

    decl_re = re.compile(
        r'(?P<head>(?:/\*(?:[^*]|\*(?!/))*\*/\s*\n)*'
        r'(?P<type>Gfx|Vtx|u8|u16|u32)\s+(?P<name>\w+)\s*\[\s*(?P<count>0[xX][0-9A-Fa-f]+|\d+)\s*\]\s*=\s*\{\s*\n'
        r'\s*#include <(?P<inc>[^>]+)>\s*\n'
        r'\};)', re.M)

    n_done = 0
    new_syms = {}  # name -> (parent, rel_off)
    out, pos = [], 0
    for dm in decl_re.finditer(text):
        name, ctype = dm.group('name'), dm.group('type')
        if name not in refs:
            continue
        elem = ELEM[ctype]
        count = int(dm.group('count'), 0)
        total = count * elem
        offs = sorted(o for o in refs[name] if 0 < o < total and o % elem == 0)
        if not offs:
            continue
        if ctype == 'Gfx':
            inc_full = os.path.join(eri.BUILD_RELOC, dm.group('inc'))
            ends = _gfx_end_offsets(inc_full)
            offs = [o for o in offs if o in ends]
            if not offs:
                continue
        # Naming
        abs_m = re.match(r'^(.*)_0x([0-9A-Fa-f]+)$', name)
        inc_rel = dm.group('inc')
        inc_dir = os.path.dirname(inc_rel)
        inc_ext = inc_rel[inc_rel.index('.'):] if '.' in os.path.basename(inc_rel) else '.data.inc.c'
        inc_ext = '.' + os.path.basename(inc_rel).split('.', 1)[1]
        bounds = [0] + offs + [total]
        decls = []
        for k in range(len(bounds) - 1):
            lo, hi = bounds[k], bounds[k + 1]
            if k == 0:
                nm = name
            elif abs_m:
                nm = f'{abs_m.group(1)}_0x{int(abs_m.group(2), 16) + lo:04X}'
            else:
                nm = f'{name}_0x{lo:04X}'
            if k > 0:
                new_syms[nm] = (name, lo)
            cnt = (hi - lo) // elem
            inc_name = f'{inc_dir}/{nm}{inc_ext}' if k > 0 else inc_rel
            decls.append(f'{ctype} {nm}[{cnt}] = {{\n\t#include <{inc_name}>\n}};')
        head = dm.group('head')[:dm.start('type') - dm.start('head')] if dm.group('head') else ''
        # keep leading comment on the first decl
        full = text[dm.start():dm.end()]
        comment = full[:full.index(ctype + ' ' + name)]
        repl = comment + ('\n\n'.join(decls))
        out.append(text[pos:dm.start()])
        out.append(repl)
        pos = dm.end()
        n_done += len(offs)
        if dry:
            for o in offs:
                print(f'  {name} split @+0x{o:X}')

    out.append(text[pos:])
    text2 = ''.join(out)

    # Rewrite expressions that now have exact symbols.
    def rw(m):
        cast_open, sym, off = m.group(1), m.group(2), int(m.group(3), 16)
        for nm, (parent, rel) in new_syms.items():
            if parent == sym and rel == off:
                return nm
        return m.group(0)
    text2 = re.sub(r'(\(\(u8\s*\*\)\s*)(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)\)', rw, text2)

    if not dry and text2 != text:
        open(master, 'w').write(text2)
    print(f'fid {fid}: {n_done} split(s){" [dry]" if dry else ""}')
    return n_done


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int)
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    split_fid(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
