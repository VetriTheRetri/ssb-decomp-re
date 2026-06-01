#!/usr/bin/python3
"""Remove forward `extern` declarations for symbols that are DEFINED in the
same .c file. Tests the CHAIN_CLASS_MISMATCH hypothesis: that forward
externs cause IDO to emit relocations differently from same-file defs.

Usage:
    tools/removeSameFileExterns.py <fid> [--version us|jp] [--dry]
    tools/removeSameFileExterns.py --all [--version us|jp] [--dry]
"""
import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _find_master_c(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    return None


def process_fid(fid, version, dry_run):
    master = _find_master_c(fid)
    if not master: return 0
    with open(master) as f:
        text = f.read()
    # Find every top-level definition AND its position.
    defined = {}  # name -> definition_start_offset
    for m in re.finditer(
            r'^([A-Za-z_]\w*)\s+\**\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*=\s*\{',
            text, re.MULTILINE):
        if m.group(1) != 'extern':
            # Keep the FIRST definition position (shouldn't be duplicates)
            defined.setdefault(m.group(2), m.start())

    # Find the first NON-extern, NON-comment USE of each symbol (any reference
    # in code that isn't itself an `extern` declaration line).
    # We can't easily parse uses, so approximate: any line containing `<name>`
    # that isn't in an `extern ` line and isn't in a /* */ comment.
    # We compute the position of the FIRST such line for each symbol.
    first_use = {}
    for sym in defined:
        for m in re.finditer(rf'\b{re.escape(sym)}\b', text):
            pos = m.start()
            # Find line start
            line_start = text.rfind('\n', 0, pos) + 1
            line_end = text.find('\n', pos)
            line = text[line_start:line_end]
            if line.lstrip().startswith('extern '): continue
            if line.lstrip().startswith('/*') or '//' in line[:max(0,pos-line_start)]: continue
            first_use[sym] = pos
            break

    # Find every `extern <type> <name>[..];` line. Remove only if:
    #   - `name` is defined in this file, AND
    #   - the definition comes BEFORE the first non-extern use
    # (i.e., the forward decl is genuinely redundant).
    extern_re = re.compile(
        r'^\s*extern\s+\S[^;\n]*?\b([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;\s*\n',
        re.MULTILINE)
    removals = []
    for m in extern_re.finditer(text):
        sym = m.group(1)
        if sym not in defined: continue
        if sym not in first_use: continue
        if defined[sym] < first_use[sym]:
            removals.append((m.start(), m.end(), sym))
    if not removals:
        return 0
    # Apply in reverse
    removals.sort(key=lambda r: r[0], reverse=True)
    new_text = text
    for s, e, _sym in removals:
        new_text = new_text[:s] + new_text[e:]
    if dry_run:
        print(f'fid={fid}: would remove {len(removals)} same-file externs [dry]')
        return len(removals)
    with open(master, 'w') as f:
        f.write(new_text)
    print(f'fid={fid}: removed {len(removals)} same-file externs')
    return len(removals)


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
            try: total += process_fid(fid, args.version, args.dry) or 0
            except Exception as e: print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'Total: {total}')
    else:
        if args.fid is None: ap.error('fid required')
        process_fid(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
