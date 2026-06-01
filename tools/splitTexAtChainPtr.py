#!/usr/bin/python3
"""Split a Tex_ block at a chain-pointer offset by truncating the Tex and
inserting a typed pointer decl immediately after.

For each fid in the bad list, finds shadow entries whose ptr-offset falls
inside a `u8 d<fid>_Tex_0xNNNN` block. Truncates the Tex to end just before
that offset and adds a typed `void *d<fid>_data_0xMMMM = &<target>;` decl.

Run after running symbolizeDLInc + migrateStructShadows so the unhandled
shadows are isolated to Tex-embedded pointers.

Usage:
    tools/splitTexAtChainPtr.py <fid> [--version us|jp] [--dry]
    tools/splitTexAtChainPtr.py --all [--version us|jp] [--dry]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _nm(o):
    r = subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True)
    out = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'):
            try: out[p[2]] = int(p[0], 16)
            except ValueError: pass
    return out


def _readelf_offsets(o):
    r = subprocess.run(['mips-linux-gnu-readelf', '-r', '-W', o],
                       capture_output=True, text=True)
    out = set()
    in_data = False
    for ln in r.stdout.splitlines():
        if ln.startswith('Relocation section'):
            in_data = '.rel.data' in ln
            continue
        if not in_data: continue
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+R_MIPS_32', ln)
        if m: out.add(int(m.group(1), 16))
    return out


def _find_master_c(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    return None


def _find_reloc(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if (f.startswith(f'{fid}_') and f.endswith('.reloc')
                and '.jp.reloc' not in f and '.us.reloc' not in f):
            return os.path.join(src, f)
    return None


def split_file(fid, version, dry_run):
    master = _find_master_c(fid)
    rf = _find_reloc(fid)
    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    if not master or not rf or not os.path.exists(o): return 0

    local = _nm(o)
    o_offs = _readelf_offsets(o)

    # Find Tex_ shadow entries
    tex_shadows = []
    with open(rf) as f:
        for ln in f:
            ln = ln.split('#')[0].strip()
            if not ln: continue
            p = ln.split()
            if len(p) != 3: continue
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[1])
            if not m or m.group(1) not in local: continue
            base = m.group(1)
            addend = int(m.group(2), 16) if m.group(2) else 0
            ptr_byte = local[base] + addend
            if ptr_byte in o_offs: continue
            # Must be inside a Tex_ block
            # Find the symbol at ptr_byte: closest D-sym at or below
            best = None
            for sym, off in local.items():
                if off <= ptr_byte and (best is None or off > best[1]):
                    best = (sym, off)
            if not best or '_Tex_' not in best[0]:
                continue
            tex_shadows.append({
                'ptr_byte': ptr_byte,
                'tex_sym': best[0],
                'tex_start': best[1],
                'inner_offset': ptr_byte - best[1],
                'target': p[2],
            })

    if not tex_shadows:
        return 0

    # Group by tex_sym; for each, find the SMALLEST inner_offset — that becomes the
    # new truncated size. Insert one pointer slot at that offset.
    # If multiple shadows in the same Tex block, only handle the first one for now
    # (a follow-up pass can handle the rest).
    by_tex = {}
    for s in tex_shadows:
        by_tex.setdefault(s['tex_sym'], []).append(s)
    for tex_sym in list(by_tex.keys()):
        by_tex[tex_sym].sort(key=lambda s: s['inner_offset'])

    with open(master) as f:
        text = f.read()

    edits = []
    for tex_sym, shadows in by_tex.items():
        s0 = shadows[0]
        new_size = s0['inner_offset']  # truncate to just before the pointer slot
        # Find the existing `u8 <tex_sym>[N] = { #include <X> };` block.
        pat = re.compile(
            rf'(u8\s+{re.escape(tex_sym)}\s*\[)(\d+)(\]\s*=\s*\{{)\s*'
            r'(?:/\*[^*]*\*/\s*)?'
            r'(#include\s+<[^>]+\.tex\.inc\.c>)\s*'
            r'\}\s*;',
            re.MULTILINE)
        m = pat.search(text)
        if not m:
            continue
        # Trailing 4 bytes after the new size become a pointer decl
        ptr_addr = s0['tex_start'] + new_size
        new_decl = (
            f'{m.group(1)}{new_size}{m.group(3)}\n'
            f'\t{m.group(4)}\n'
            f'}};\n\n'
            f'/* chain-pointer slot at 0x{ptr_addr:04X} (split off from {tex_sym}) */\n'
            f'void *d{master.rsplit("/", 1)[1].split("_", 1)[1][:-2]}_data_0x{ptr_addr:04X}[1] = {{\n'
            f'\t&{s0["target"]},\n'
            f'}};'
        )
        edits.append((m.start(), m.end(), new_decl, tex_sym, new_size, s0['target']))

    if not edits:
        return 0

    # Apply in reverse
    edits.sort(key=lambda e: e[0], reverse=True)
    new_text = text
    for s, e, new, tex_sym, sz, tgt in edits:
        new_text = new_text[:s] + new + new_text[e:]

    # Add forward extern decls for each target symbol (in case the target is
    # defined later in the same file).
    existing_externs = set()
    first_inc = re.search(r'#include\s+<[^>]+\.(?:dl|tex|vtx|palette|data)\.inc\.c>', new_text)
    cutoff = first_inc.start() if first_inc else len(new_text)
    for m in re.finditer(r'^\s*extern\s+\S[^;]*?\b([A-Za-z_]\w*)\s*[\[;]',
                         new_text[:cutoff], re.MULTILINE):
        existing_externs.add(m.group(1))
    # Build a type lookup from definitions in the file
    type_lookup = {}
    for m in re.finditer(
            r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=',
            new_text, re.MULTILINE):
        type_, stars, name = m.group(1), m.group(2), m.group(3)
        if type_ == 'extern': continue
        type_lookup[name] = (type_, stars)
    extras = []
    for _, _, _, _, _, tgt in edits:
        if tgt not in existing_externs:
            if tgt in type_lookup:
                type_, stars = type_lookup[tgt]
                if stars:
                    extras.append(f'extern {type_} {stars}{tgt}[];')
                else:
                    extras.append(f'extern {type_} {tgt}[];')
            else:
                extras.append(f'extern u32 {tgt}[];')
            existing_externs.add(tgt)
    if extras:
        inc_re = re.search(r'#include\s+"relocdata_types\.h"\s*\n', new_text)
        if inc_re:
            ins = inc_re.end()
            block = '\n/* Forward decls auto-added by splitTexAtChainPtr.py */\n' + '\n'.join(extras) + '\n'
            new_text = new_text[:ins] + block + new_text[ins:]

    if dry_run:
        for s, e, new, tex_sym, sz, tgt in edits:
            print(f'fid={fid}: split {tex_sym} -> size {sz}, ptr -> {tgt} [dry]')
        return len(edits)

    with open(master, 'w') as f:
        f.write(new_text)
    for s, e, new, tex_sym, sz, tgt in edits:
        print(f'fid={fid}: split {tex_sym} -> size {sz}, ptr -> {tgt}')
    return len(edits)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int, nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()

    if args.all:
        bad = os.path.join(PROJECT_DIR, 'assets', args.version, 'auto_reloc_bad.txt')
        with open(bad) as f:
            fids = [int(x) for x in f if x.strip()]
        total = 0
        for fid in fids:
            try:
                total += split_file(fid, args.version, args.dry) or 0
            except Exception as e:
                print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'Total splits: {total}')
    else:
        if args.fid is None:
            ap.error('fid required unless --all')
        split_file(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
