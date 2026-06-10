#!/usr/bin/python3
"""Add `@tex fmt=… dim=WxH` annotations by walking expanded-view DLs.

Successor to annotateTexBlocks/annotateTexBlocksExtern's .reloc-driven
reference collection: scans every expanded view under
build/<v>/src/relocData/*.c for `gsDPSetTextureImage(fmt, siz, w, dSym)`
commands whose arg is a SYMBOL (the extractor now symbolizes chain
pointers), derives fmt/dim/LUT from the surrounding commands (reusing
annotateTexBlocksExtern.derive_tex_info_from_dl), locates the symbol's
defining committed .c, and inserts the annotation above the decl if none
is present. Works for same-file and cross-file references alike.

Usage: annotateTexFromExpanded.py [--version us] [--dry] [fids ...]
       (fids filter TARGET files to annotate; default: all)
"""
import argparse
import glob
import os
import re
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import annotateTexBlocksExtern as ax  # noqa: E402

GFX_BODY_RE = re.compile(r"Gfx (d\w+)\[\d+\] = \{\n(.*?)\n\};", re.DOTALL)
SETTIMG_SYM_RE = re.compile(
    r"gsDPSetTextureImage\(\s*G_IM_FMT_\w+\s*,\s*G_IM_SIZ_\d+b\s*,\s*\d+\s*,\s*"
    r"(d[A-Za-z_]\w+)")


def collect(version):
    """{tex_sym: (fmt, w, h, lut_sym)} across all expanded views."""
    out = {}
    for path in sorted(glob.glob(os.path.join(
            PROJECT_DIR, 'build', version, 'src', 'relocData', '*_*.c'))):
        try:
            text = open(path).read()
        except OSError:
            continue
        for bm in GFX_BODY_RE.finditer(text):
            body_lines = bm.group(2).split('\n')
            cmd_idx = -1
            for ln in body_lines:
                s = ln.strip()
                if not re.match(r"^gs(SP|DP)\w+\(", s):
                    continue
                cmd_idx += 1
                m = SETTIMG_SYM_RE.search(s)
                if not m:
                    continue
                sym = m.group(1)
                info = ax.derive_tex_info_from_dl(body_lines, cmd_idx)
                if info and sym not in out:
                    out[sym] = info
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', type=int, nargs='*')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()

    refs = collect(args.version)
    print(f'{len(refs)} symbol refs derived from expanded DLs')

    # Group by defining committed .c (symbol prefix d<Name>_ -> *_<Name>.c).
    src_dir = os.path.join(PROJECT_DIR, 'src', 'relocData')
    by_file = {}
    name_to_path = {}
    for f in os.listdir(src_dir):
        m = re.match(r'^(\d+)_(.+)\.c$', f)
        if m:
            name_to_path[m.group(2)] = (int(m.group(1)), os.path.join(src_dir, f))
    for sym, info in refs.items():
        m = re.match(r'^d([A-Za-z_0-9]+?)_', sym)
        if not m:
            continue
        # longest-prefix match against file names
        cand = None
        for name in name_to_path:
            if sym.startswith('d' + name + '_'):
                if cand is None or len(name) > len(cand):
                    cand = name
        if cand is None:
            continue
        fid, path = name_to_path[cand]
        if args.fids and fid not in args.fids:
            continue
        by_file.setdefault(path, {})[sym] = info

    total = 0
    for path, syms in sorted(by_file.items()):
        text = open(path).read()
        n = 0
        for sym, (fmt, w, h, lut) in syms.items():
            dm = re.search(r'(?m)^((?:static\s+)?u8 ' + re.escape(sym) + r'\s*\[)', text)
            if not dm:
                continue
            # annotated already? look back ~6 lines
            back = text[:dm.start()].split('\n')[-7:]
            if any('@tex' in b for b in back):
                continue
            ann = f'/* @tex fmt={fmt} dim={w}x{h}' + (f' lut={lut}' if lut else '') + ' */\n'
            text = text[:dm.start()] + ann + text[dm.start():]
            n += 1
        if n and not args.dry:
            open(path, 'w').write(text)
        if n:
            print(f'{os.path.basename(path)}: {n} annotation(s)')
            total += n
    print(f'total: {total}')


if __name__ == '__main__':
    main()
