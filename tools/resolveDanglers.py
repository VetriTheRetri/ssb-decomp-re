#!/usr/bin/python3
"""Resolve dangling extern references in relocData .c files.

A "dangling extern" is a `extern T sym[];` declaration whose symbol isn't
defined anywhere — neither in the same .o nor in any other reloc .o.

This script finds such symbols, computes the byte address they would refer
to (parsing the `_0xN` / `_sub_0xN` suffix in the name), looks up the
defined symbol at that byte address in the same file (intern) or in the
parent-file (extern), and rewrites the source's references to use the
canonical name.

Usage:
    tools/resolveDanglers.py [--version us|jp] [--dry] [--all]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _nm(o):
    r = subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True)
    out = []
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
            try: out.append((int(p[0], 16), p[2], p[1]))
            except ValueError: pass
    out.sort()
    return out


def _readelf_relocs(o):
    """Return [(byte_off, sym_name)]."""
    r = subprocess.run(['mips-linux-gnu-readelf', '-r', '-W', o],
                       capture_output=True, text=True)
    out = []
    in_data = False
    for ln in r.stdout.splitlines():
        if ln.startswith('Relocation section'):
            in_data = '.rel.data' in ln or '.rela.data' in ln
            continue
        if not in_data: continue
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+R_MIPS_32\s+[0-9a-f]+\s+(\S+)', ln)
        if m:
            out.append((int(m.group(1), 16), m.group(2)))
    return out


def _load_descriptions(version):
    """Return {name: fid} from relocFileDescriptions.<v>.txt."""
    path = os.path.join(PROJECT_DIR, 'tools', f'relocFileDescriptions.{version}.txt')
    out = {}
    with open(path) as f:
        for ln in f:
            m = re.match(r'^-(\d+):\s+(\S+)', ln)
            if m: out[m.group(2)] = int(m.group(1))
    return out


def _build_global_index(version):
    """Return {sym_name: (fid, byte_offset)} across all reloc .o files."""
    build = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build')
    idx = {}
    fid_syms = {}  # fid -> sorted [(offset, name)]
    for fname in os.listdir(build):
        if not fname.endswith('.o'): continue
        try: fid = int(fname[:-2])
        except: continue
        syms = _nm(os.path.join(build, fname))
        fid_syms[fid] = syms
        for off, name, cls in syms:
            idx.setdefault(name, (fid, off))
    return idx, fid_syms


def _parse_dangling_address(sym, defined_global, fid_syms, desc_index):
    """Try to extract (file_name, intended_byte_offset) from a dangling sym.

    Two strategies, tried in order:

    1. Iteratively strip the `_0xN` trailing suffix and check if the remainder
       is a defined symbol. If yes, the address is `defined_sym + sum(trailing hex)`.
       Example:
         dITCommonObject_LGunAmmo_Weapon_data_post_0x68
           → strip `_0x68` → dITCommonObject_LGunAmmo_Weapon_data_post (defined at 0x4150)
           → byte = 0x4150 + 0x68 = 0x41B8

    2. Fall back to summing all `_0xN` tokens — works for `dFooModel_gap_0xN_sub_0xM`
       style patterns where neither `gap_0xN` nor `gap_0xN_sub` is defined as a
       separate symbol.
    """
    if not sym.startswith('d'): return None
    body = sym[1:]
    file_name = body.split('_', 1)[0] if '_' in body else body

    # Strategy 1: progressively strip trailing _0xN tokens and look up parent.
    # Collect all trailing _0xN tokens (left-to-right).
    trail_re = re.compile(r'_(?:sub|post)?_?0x([0-9a-fA-F]+)$')
    cur = sym
    trail_total = 0
    while True:
        m = re.search(r'_0x([0-9a-fA-F]+)$', cur)
        if not m: break
        # Try this prefix as a defined symbol
        prefix = cur[:m.start()]
        if prefix in defined_global:
            _fid, off = defined_global[prefix]
            return file_name, off + trail_total + int(m.group(1), 16)
        # Try stripping the `_sub` or `_post` token before the offset
        for suffix in ('_sub', '_post'):
            if prefix.endswith(suffix):
                pre = prefix[:-len(suffix)]
                if pre in defined_global:
                    _fid, off = defined_global[pre]
                    return file_name, off + trail_total + int(m.group(1), 16)
        # Step into the trailing token: add its value to trail_total and recurse
        trail_total += int(m.group(1), 16)
        cur = prefix

    # Strategy 2 fallback: just sum all _0xN tokens.
    parts = re.split(r'_0x([0-9a-fA-F]+)', body)
    if len(parts) < 3: return None
    total = 0
    for hexpart in parts[1::2]:
        total += int(hexpart, 16)
    return file_name, total


def _find_canonical_at_address(file_name, byte_off, version, desc_index, fid_syms):
    """Find the defined symbol at `byte_off` in the file whose name matches.

    Strategy: look up the fid for file_name, then scan fid_syms[fid] for an
    exact match at `byte_off`. If multiple symbols share that offset, prefer
    one that starts with `d{file_name}_` and doesn't itself look like a
    dangling synth (no `gap_`/`sub_` heuristic).
    """
    if file_name not in desc_index: return None
    fid = desc_index[file_name]
    if fid not in fid_syms: return None
    candidates = [name for off, name, cls in fid_syms[fid] if off == byte_off]
    if not candidates: return None
    # Prefer non-gap, non-sub names if present
    pref = [c for c in candidates if 'gap_' not in c and '_sub_' not in c]
    return pref[0] if pref else candidates[0]


def resolve_file(fid, version, defined_global, desc_index, fid_syms, dry_run):
    src_dir = os.path.join(PROJECT_DIR, 'src', 'relocData')
    c_path = None
    for fname in os.listdir(src_dir):
        if fname.startswith(f'{fid}_') and fname.endswith('.c'):
            c_path = os.path.join(src_dir, fname); break
    if not c_path: return 0

    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    if not os.path.exists(o): return 0

    # Collect dangling syms from .o relocs
    rn = subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True).stdout
    local_def = set()
    for ln in rn.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'): local_def.add(p[2])
    relocs = _readelf_relocs(o)
    danglers = set()
    for off, sym in relocs:
        if sym not in local_def and sym not in defined_global:
            danglers.add(sym)
    if not danglers:
        return 0

    # Resolve each dangler to a canonical name
    mapping = {}  # dangler → canonical
    unresolvable = []
    for sym in sorted(danglers):
        parsed = _parse_dangling_address(sym, defined_global, fid_syms, desc_index)
        if not parsed:
            unresolvable.append(sym); continue
        file_name, byte_off = parsed
        canon = _find_canonical_at_address(file_name, byte_off, version, desc_index, fid_syms)
        if not canon:
            unresolvable.append(sym); continue
        if canon == sym:
            continue  # already canonical (shouldn't happen since sym is dangling)
        mapping[sym] = canon

    if not mapping:
        if unresolvable:
            print(f'fid={fid}: {len(unresolvable)} dangling, none resolvable', file=sys.stderr)
        return 0

    # Apply replacements in the C source: replace each dangler with canon
    with open(c_path) as f:
        text = f.read()
    n_subs = 0
    for sym, canon in mapping.items():
        # Whole-word replacement using \b boundary
        new_text, n = re.subn(rf'\b{re.escape(sym)}\b', canon, text)
        if n:
            n_subs += n
            text = new_text

    if dry_run:
        print(f'fid={fid}: {len(mapping)} dangling resolvable, {n_subs} text subs '
              f'(unresolvable: {len(unresolvable)}) [dry]')
        return n_subs

    with open(c_path, 'w') as f:
        f.write(text)
    print(f'fid={fid}: {len(mapping)} danglers resolved, {n_subs} text subs '
          f'(unresolvable: {len(unresolvable)})')
    return n_subs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int, nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()

    print('Building global symbol index...', file=sys.stderr)
    defined_global, fid_syms = _build_global_index(args.version)
    desc_index = _load_descriptions(args.version)

    if args.all:
        bad = os.path.join(PROJECT_DIR, 'assets', args.version, 'auto_reloc_bad.txt')
        with open(bad) as f:
            fids = [int(x) for x in f if x.strip()]
        total = 0
        for fid in fids:
            try:
                total += resolve_file(fid, args.version, defined_global, desc_index, fid_syms, args.dry) or 0
            except Exception as e:
                print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'\nTotal: {total} dangler substitutions')
    else:
        if args.fid is None:
            ap.error('fid required unless --all')
        resolve_file(args.fid, args.version, defined_global, desc_index, fid_syms, args.dry)


if __name__ == '__main__':
    main()
