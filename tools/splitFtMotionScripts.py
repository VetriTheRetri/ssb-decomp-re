#!/usr/bin/python3
"""Split ftMotionCommand script blocks at hard-terminator boundaries.

Fixes validator R020 (internal hard terminator followed by more macros)
and the motion-file flavor of R004 (references like `(u8*)script + 0xN`
that should be bare block symbols at script entry points).

For each target decl:
  1. Compute each entry's word size (macro expansion comma-count from
     ftdef.h, 1 for raw hex words).
  2. Split after every hard terminator (End/Goto/Return/PauseScript and
     the one-word SubroutineS2 tail form) that is followed by further
     entries — but ONLY when the split point coincides with a known
     reference offset (from `(u8*)sym + 0xN` expressions in the same
     file) or `--all-terminators` is given.
  3. New blocks are named `d<Prefix>_0x<ABS>` where ABS = the parent's
     offset (from build/<v>/relocSymIndex.txt) + split byte offset.
  4. Rewrite `(cast)((u8*)parent + 0xN)` expressions that now have an
     exact block symbol to `(cast)newsym`.

Decls containing region guards (#if/#else/#endif) are skipped and
reported — split those by hand per version.

The caller is expected to rebuild the fid and run verifyAutoReloc; the
build's byte-compare gate guarantees splits are byte-neutral.

Usage: splitFtMotionScripts.py <fid> [--version us] [--dry] [--all-terminators]
"""
import argparse
import os
import re
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import extractRelocInc as eri  # noqa: E402

FTDEF = os.path.join(PROJECT_DIR, 'src', 'ft', 'ftdef.h')

HARD_TERMINATORS = (
    'ftMotionCommandEnd', 'ftMotionCommandGoto', 'ftMotionCommandReturn',
    'ftMotionCommandPauseScript', 'ftMotionCommandSubroutineS2',
)


def _macro_word_counts():
    """{macro_name: words} from ftdef.h — top-level comma count + 1."""
    text = open(FTDEF).read()
    # Join continuation lines.
    text = text.replace('\\\n', ' ')
    counts = {}
    for m in re.finditer(r'^#define\s+(ftMotion\w+)\s*(\([^)]*\))?\s+(.*)$',
                         text, re.M):
        name, body = m.group(1), m.group(3)
        depth = 0
        commas = 0
        for ch in body:
            if ch in '([':
                depth += 1
            elif ch in ')]':
                depth -= 1
            elif ch == ',' and depth == 0:
                commas += 1
        counts[name] = commas + 1
    return counts


_ENTRY_RE = re.compile(r'^\t(ftMotion\w+)\s*\(|^\t(0x[0-9A-Fa-f]+)\s*,|^\t\(u32\)')


def _entry_words(line, counts):
    """Word size of one initializer line, or None if unrecognized."""
    s = line.strip()
    if not s or s.startswith('/*') or s.startswith('//'):
        return 0
    m = re.match(r'(ftMotion\w+)\s*\(', s)
    if m:
        return counts.get(m.group(1))
    if re.match(r'0x[0-9A-Fa-f]+\s*,?\s*(/\*.*)?$', s):
        return 1
    if s.startswith('(u32)'):
        return 1
    return None


def split_fid(fid, version, dry=False, all_terminators=False):
    eri._bind_version(version)
    master = eri.inline_master_for(fid)
    if master is None:
        print(f'fid {fid}: no master', file=sys.stderr)
        return 0
    text = open(master).read()
    counts = _macro_word_counts()

    # Symbol offsets for this fid.
    sym_off = {}
    idx_path = os.path.join(PROJECT_DIR, 'build', version, 'relocSymIndex.txt')
    if os.path.exists(idx_path):
        for ln in open(idx_path):
            p = ln.split()
            if len(p) == 3 and int(p[1]) == fid:
                sym_off[p[0]] = int(p[2], 16)

    # Reference offsets used in `(u8*)sym + 0xN` expressions anywhere in
    # the file (these are the entry points that deserve their own symbol).
    ref_offsets = {}
    for m in re.finditer(r'\(u8\s*\*\)\s*(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)', text):
        ref_offsets.setdefault(m.group(1), set()).add(int(m.group(2), 16))

    decl_re = re.compile(
        r'(?P<head>(?:/\*(?:[^*]|\*(?!/))*\*/\s*\n)?'
        r'(?:static\s+)?ftMotionCommand\s+(?P<name>\w+)\s*\[\s*\]\s*=\s*\{\n)'
        r'(?P<body>(?:[^{}]|\{[^{}]*\})*?)'
        r'(?P<tail>^\};)', re.M)

    out = []
    pos = 0
    n_splits = 0
    skipped = []
    for dm in decl_re.finditer(text):
        name = dm.group('name')
        body = dm.group('body')
        if name not in sym_off:
            continue
        if '#if' in body or '#else' in body or '#endif' in body:
            if re.search(r'ftMotionCommand(End|Goto|Return|PauseScript)\s*\([^)]*\)\s*,\s*\n\t\w', body):
                skipped.append(name)
            continue
        lines = body.split('\n')
        # Walk entries, find split points (byte offset, line index).
        word = 0
        points = []  # (line_idx_after_terminator, byte_off)
        ok = True
        for i, ln in enumerate(lines):
            w = _entry_words(ln, counts)
            if w is None:
                ok = False
                break
            word += w
            s = ln.strip()
            is_term = any(s.startswith(t + '(') for t in HARD_TERMINATORS)
            # A terminator followed by more content = split point.
            if is_term:
                rest = [l for l in lines[i + 1:] if l.strip() and not l.strip().startswith(('/*', '//'))]
                if rest:
                    points.append((i + 1, word * 4))
        if not ok or not points:
            continue
        base = sym_off[name]
        wanted = ref_offsets.get(name, set())
        use = [(li, off) for li, off in points
               if all_terminators or off in wanted]
        if not use:
            continue
        # Build replacement text.
        prefix = re.match(r'd(\w+?)_', name)
        file_prefix = 'd' + prefix.group(1) if prefix else name.split('_')[0]
        pieces = []
        prev_line = 0
        prev_name = name
        cur_head = dm.group('head')
        for li, off in use:
            seg = '\n'.join(lines[prev_line:li]).rstrip('\n')
            pieces.append((cur_head if prev_line == 0 else
                           f'ftMotionCommand {prev_name}[] = {{\n', seg))
            prev_line = li
            prev_name = f'{file_prefix}_0x{base + off:04X}'
            cur_head = None
        seg = '\n'.join(lines[prev_line:]).rstrip('\n')
        pieces.append((f'ftMotionCommand {prev_name}[] = {{\n', seg))

        newtext = ''
        first = True
        for head, seg in pieces:
            if first:
                newtext += dm.group('head') + seg + '\n};\n'
                first = False
            else:
                newtext += '\n' + head + seg + '\n};\n'
        newtext = newtext.rstrip('\n')

        out.append(text[pos:dm.start()])
        out.append(newtext)
        pos = dm.end()
        n_splits += len(use)
        if dry:
            for li, off in use:
                print(f'  {name} split @+0x{off:X} -> {file_prefix}_0x{base + off:04X}')

    out.append(text[pos:])
    text2 = ''.join(out)

    # Rewrite (cast)((u8*)parent + 0xN) where an exact symbol now exists.
    def rewrite(m):
        sym, off = m.group(1), int(m.group(2), 16)
        if sym in sym_off:
            target = sym_off[sym] + off
            # find a symbol at exactly `target` among new names we created
            cand = None
            for nm2 in re.finditer(r'ftMotionCommand\s+(\w+_0x[0-9A-Fa-f]+)\[\]', text2):
                nm = nm2.group(1)
                m2 = re.match(r'.*_0x([0-9A-Fa-f]+)$', nm)
                if m2 and int(m2.group(1), 16) == target:
                    cand = nm
                    break
            if cand:
                return cand
        return m.group(0)

    text2 = re.sub(r'\(\(u8\s*\*\)\s*(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)\)', rewrite, text2)

    if not dry and text2 != text:
        open(master, 'w').write(text2)
    print(f'fid {fid}: {n_splits} split(s)'
          + (f', skipped (region guards): {", ".join(skipped)}' if skipped else '')
          + (' [dry]' if dry else ''))
    return n_splits


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int)
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    ap.add_argument('--all-terminators', action='store_true',
                    help='split at every internal hard terminator, not just '
                         'referenced entry points')
    args = ap.parse_args()
    split_fid(args.fid, args.version, args.dry, args.all_terminators)


if __name__ == '__main__':
    main()
