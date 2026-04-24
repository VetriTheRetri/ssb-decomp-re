#!/usr/bin/env python3
"""Type untyped u8 blocks in a relocData file by walking its display lists.

Three passes, idempotent:

  1. DL splits: u8 blocks starting with `0xE7000000` (gsDPPipeSync) and
     containing `0xDF00000000000000` (gsSPEndDisplayList) are split into
     Gfx[cmds] + u8[tail].

  2. Vtx retypes + merges: every gsSPVertex(ptr, count, v0) span
     [ptr, ptr+count*16) is collected; overlapping spans (strict) union.
     Blocks whose declared byte size exactly matches a span are retyped
     u8 -> Vtx. Spans that cover multiple contiguous blocks get merged
     into a single Vtx[N] at the span start; absorbed sub-block targets
     in .reloc are rewritten to <primary>+0x<offset>.

  3. Palette retypes: u8 blocks used as gsDPSetTextureImage targets
     followed by gsDPLoadTLUTCmd (not gsDPLoadBlock / gsDPLoadTile)
     are retyped u8 -> u16 with .palette.inc.c.

Usage:
  tools/typeRelocBlocks.py <fid>          # single file
  tools/typeRelocBlocks.py <fid1> <fid2>  # multiple
  tools/typeRelocBlocks.py --all-char     # every char model by name

Requires the target file already compiled at least once (nm reads the .o
to resolve block byte offsets). Run `make all RELOC_DATA=1` first, then
re-run after this tool to regenerate inc.c files and verify matching.
"""
import argparse
import os
import pathlib
import re
import subprocess
import sys

PROJECT = pathlib.Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT / 'src' / 'relocData'
EXP_DIR = PROJECT / 'build' / 'src' / 'relocData'
OBJ_DIR = PROJECT / 'build' / 'src' / 'relocData' / '.build'
ASSETS_DIR = PROJECT / 'assets' / 'relocData'

TYPE_SIZE = {'Vtx': 16, 'Gfx': 8, 'u8': 1, 'u16': 2, 'u32': 4,
             'DObjDesc': 16, 'DObjDLLink': 8}

# Character-model names worth typing. `--all-char` iterates these.
CHAR_MODELS = [
    '215_GDonkeyMain', '296_MarioModel', '300_MMarioModel', '301_NMarioModel',
    '303_NFoxModel', '304_NYoshiModel', '305_NKirbyModel', '306_NPurinModel',
    '307_NPikachuModel', '308_NDonkeyModel', '309_NSamusModel', '310_NLinkModel',
    '311_NCaptainModel', '312_NNessModel', '313_FoxModel', '317_DonkeyModel',
    '320_SamusModel', '323_LuigiModel', '324_LinkModel', '328_KirbyModel',
    '330_PurinModel', '332_CaptainModel', '335_NessModel', '338_YoshiModel',
    '341_PikachuModel', '344_BossModel',
]


def find_files(fid):
    """Return (src_path, reloc_path, expanded_path, asset_path, obj_path, short_name).
    short_name is the stem without the `<fid>_` prefix."""
    for p in SRC_DIR.iterdir():
        m = re.match(rf'^{fid}_(\w+)\.c$', p.name)
        if m:
            name = m.group(1)
            return (p,
                    SRC_DIR / f'{fid}_{name}.reloc',
                    EXP_DIR / f'{fid}_{name}.c',
                    _find_asset(fid),
                    OBJ_DIR / f'{fid}.o',
                    name)
    return None


def _find_asset(fid):
    for ext in ('.vpk0.bin', '.bin'):
        p = ASSETS_DIR / f'{fid}{ext}'
        if p.exists():
            return p
    return None


def load_nm(obj_path):
    r = subprocess.run(['mips-linux-gnu-nm', str(obj_path)],
                       capture_output=True, text=True, check=True)
    out = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'):
            off = int(p[0], 16)
            n = p[2]
            if n not in out or out[n] > off:
                out[n] = off
    return out


def parse_decls(src, name_to_off):
    decls = {}
    for m in re.finditer(
            r'^(Vtx|Gfx|u8|u16|u32|DObjDesc|DObjDLLink)\s+(d\w+)\[(\d+|0x[0-9A-Fa-f]+)\]',
            src, re.MULTILINE):
        ctype, name, cexpr = m.group(1), m.group(2), m.group(3)
        N = int(cexpr, 16) if cexpr.startswith('0x') else int(cexpr)
        off = name_to_off.get(name)
        if off is not None:
            decls[off] = (name, ctype, N, N * TYPE_SIZE.get(ctype, 1))
    return decls


def collapse_blank_runs(src):
    return re.sub(r'\n{3,}', '\n\n', src)


# ---- Pass 1: DL splits ----

def _find_consecutive_dls(blob):
    """Starting at blob offset 0, peel off consecutive DLs (gsDPPipeSync
    prefix + gsSPEndDisplayList terminator). Returns (dl_sizes, tail_start)
    where dl_sizes is a list of byte lengths and tail_start is the first
    byte offset after all DLs (equal to len(blob) if no tail)."""
    END = b'\xDF\x00\x00\x00\x00\x00\x00\x00'
    dl_sizes = []
    pos = 0
    while pos + 8 <= len(blob):
        if blob[pos:pos + 4] != b'\xE7\x00\x00\x00':
            break
        end_pos = None
        for i in range(pos, len(blob) - 8 + 1, 8):
            if blob[i:i + 8] == END:
                end_pos = i + 8
                break
        if end_pos is None:
            break
        dl_sizes.append(end_pos - pos)
        pos = end_pos
    return dl_sizes, pos


def do_splits(src, raw, decls, name_prefix):
    """For each u8 block that starts with a DL, peel every consecutive DL
    in one pass (so re-runs are idempotent -- no _post_post_post chains
    that grow one level per invocation)."""
    splits = []
    for off, (name, ctype, N, bs) in list(decls.items()):
        if ctype != 'u8' or bs % 8 != 0 or bs < 16:
            continue
        if raw[off:off + 4] != b'\xE7\x00\x00\x00':
            continue
        dl_sizes, tail_start = _find_consecutive_dls(raw[off:off + bs])
        if not dl_sizes:
            continue
        tail_size = bs - tail_start
        splits.append((name, off, bs, dl_sizes, tail_size))

    total_dls = 0
    for name, off, total, dl_sizes, ts in splits:
        pat = re.compile(
            r'(?P<comment>/\*[^*]*\*/\n)?'
            rf'u8\s+{re.escape(name)}\[(?:\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{{\n'
            rf'(?P<indent>[ \t]*)#include <(?P<inc>[^>]+)\.data\.inc\.c>\n\}};',
            re.MULTILINE,
        )
        m = pat.search(src)
        if not m:
            print(f'  SPLIT MISS: {name}')
            continue
        inc = m.group('inc')
        indent = m.group('indent') or '\t'
        pieces = []
        cur_off = off
        # Keep the primary (first DL) using the original symbol name so the
        # reloc chain still points at it. Subsequent DLs and any raw tail get
        # _post suffixes (_post, _post_post, ...); this is ugly but matches the
        # pre-existing convention in files already partially split.
        for idx, dls in enumerate(dl_sizes):
            if idx == 0:
                cname = name
                cinc = inc
            else:
                suffix = '_post' * idx
                cname = name + suffix
                cinc = inc + suffix
            short = cname.removeprefix(name_prefix)
            pieces.append(
                f'/* Gfx DL: {short} @ 0x{cur_off:X} ({dls // 8} cmds) */\n'
                f'Gfx {cname}[{dls // 8}] = {{\n{indent}#include <{cinc}.dl.inc.c>\n}};'
            )
            cur_off += dls
        if ts > 0:
            suffix = '_post' * len(dl_sizes)
            tname = name + suffix
            tinc = inc + suffix
            pieces.append(
                f'/* Raw tail after {len(dl_sizes)} DL(s) @ 0x{cur_off:X} ({ts} bytes) */\n'
                f'u8 {tname}[{ts}] = {{\n{indent}#include <{tinc}.data.inc.c>\n}};'
            )
        total_dls += len(dl_sizes)
        src = src[:m.start()] + '\n\n'.join(pieces) + src[m.end():]
    print(f'  Pass 1 (DL splits): {total_dls} DLs peeled from {len(splits)} blocks')
    return src, total_dls


# ---- Pass 2: Vtx retypes + merges (with strict-overlap union) ----

def collect_vertex_unions(expanded, decls):
    spans = []
    for m in re.finditer(
            r'gsSPVertex\(\s*(\S+)\s*/\*\s*was\s*0x([0-9A-Fa-f]+)\s*\*/,\s*(\d+),',
            expanded):
        raw = int(m.group(2), 16)
        count = int(m.group(3))
        tb = (raw & 0xFFFF) * 4
        if tb in decls:
            spans.append((tb, tb + count * 16))
    spans.sort()
    unions = []
    for s, e in spans:
        # Strict overlap: second span starts strictly before first span ends
        # (adjacent spans -- where next span starts exactly at prev end --
        # stay separate so semantically-distinct Vtx arrays don't collapse).
        if unions and s < unions[-1][1]:
            unions[-1] = (unions[-1][0], max(unions[-1][1], e))
        else:
            unions.append((s, e))
    return unions


def do_retypes_and_merges(src, reloc_text, decls, expanded, name_prefix):
    unions = collect_vertex_unions(expanded, decls)
    clean = []
    merges = []
    for s, e in unions:
        if s not in decls:
            continue
        name, ctype, N, bs = decls[s]
        span = e - s
        if bs >= span:
            if ctype == 'u8' and bs == span:
                clean.append((name, bs, span // 16))
            # Vtx already correct OR larger (declared array bigger than span) -- skip
            continue
        # Need to merge: absorb contiguous following blocks until span is filled
        absorbed = []
        pos = s
        while pos < e:
            d = decls.get(pos)
            if d is None:
                absorbed = None
                break
            absorbed.append((pos, d))
            pos += d[3]
        if absorbed is None or pos != e:
            continue
        merges.append((s, name, span // 16, absorbed))

    for name, bs, count in clean:
        pat = re.compile(
            rf'^u8\s+{re.escape(name)}\[{bs}\]\s*=\s*\{{\n'
            rf'(?P<indent>[ \t]*)#include <(?P<inc>[^>]+)\.data\.inc\.c>\n\}};',
            re.MULTILINE,
        )
        m = pat.search(src)
        if not m:
            print(f'  RETYPE MISS: {name}')
            continue
        inc = m.group('inc')
        indent = m.group('indent') or '\t'
        new = f'Vtx {name}[{count}] = {{\n{indent}#include <{inc}.vtx.inc.c>\n}};'
        src = src[:m.start()] + new + src[m.end():]

    absorbed_map = {}
    for p_off, p_name, vcount, absorbed in merges:
        p_ctype = decls[p_off][1]
        pat = re.compile(
            r'(/\*[^*]*\*/\n)?'
            rf'{re.escape(p_ctype)}\s+{re.escape(p_name)}\[(?:\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{{\n'
            rf'[ \t]*#include <([^>]+)>\n\}};',
            re.MULTILINE,
        )
        m = pat.search(src)
        if not m:
            print(f'  MERGE MISS primary: {p_name} ({p_ctype})')
            continue
        inc = m.group(2)
        new_inc = re.sub(r'\.data\.inc\.c$', '.vtx.inc.c', inc)
        short = p_name.removeprefix(name_prefix)
        block = (
            f'/* Vtx: {short} @ 0x{p_off:X} ({vcount} vertices) */\n'
            f'Vtx {p_name}[{vcount}] = {{\n\t#include <{new_inc}>\n}};'
        )
        src = src[:m.start()] + block + src[m.end():]
        for off, (name, ctype, N, bs) in absorbed:
            if off == p_off:
                continue
            absorbed_map[name] = (p_name, off - p_off)
            pat_a = re.compile(
                r'(?:/\*[^*]*\*/\n)?'
                rf'{re.escape(ctype)}\s+{re.escape(name)}\[(?:\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{{\n'
                rf'[ \t]*#include <[^>]+>\n\}};\n',
                re.MULTILINE,
            )
            m2 = pat_a.search(src)
            if m2:
                src = src[:m2.start()] + src[m2.end():]
            else:
                print(f'  ABSORB MISS: {name}')

    reloc_rewrites = 0
    if absorbed_map and reloc_text is not None:
        out = []
        for ln in reloc_text.splitlines():
            if ln.startswith('#') or not ln.strip():
                out.append(ln)
                continue
            parts = ln.split()
            if len(parts) != 3:
                out.append(ln)
                continue
            for i in (1, 2):
                mm = re.fullmatch(r'(\w+)(?:\+0x([0-9A-Fa-f]+))?', parts[i])
                if not mm:
                    continue
                sym, oh = mm.group(1), mm.group(2)
                extra = int(oh, 16) if oh else 0
                if sym in absorbed_map:
                    pr, bo = absorbed_map[sym]
                    parts[i] = f'{pr}+0x{bo + extra:X}'
                    reloc_rewrites += 1
            out.append(' '.join(parts))
        reloc_text = '\n'.join(out) + '\n'

    print(f'  Pass 2 (Vtx): {len(clean)} retypes, {len(merges)} merges,'
          f' {reloc_rewrites} .reloc rewrites')
    return src, reloc_text, len(clean) + len(merges)


# ---- Pass 3: palettes ----

def do_palettes(src, decls, expanded):
    """u8 blocks used as gsDPSetTextureImage -> gsDPLoadTLUTCmd become u16 palette."""
    dl_bodies = re.findall(r'Gfx d\w+\[\d+\] = \{\n(.*?)\n\};', expanded, re.DOTALL)
    palette_syms = set()
    texture_syms = set()
    for body in dl_bodies:
        pending = None
        for ln in body.split('\n'):
            mt = re.search(r'gsDPSetTextureImage\([^)]*,\s*(\S+?)(?:\s*/\*.*)?\)', ln)
            if mt:
                sym = mt.group(1).rstrip(',')
                pending = None if sym.startswith('0x') else sym
                continue
            if 'gsDPLoadTLUTCmd' in ln:
                if pending:
                    palette_syms.add(pending)
                pending = None
            elif 'gsDPLoadBlock' in ln or 'gsDPLoadTile' in ln:
                if pending:
                    texture_syms.add(pending)
                pending = None

    # Skip ambiguous symbols (used both ways somewhere)
    palette_only = palette_syms - texture_syms

    name_to_off = {d[0]: off for off, d in decls.items()}
    applied = 0
    for sym in sorted(palette_only):
        off = name_to_off.get(sym)
        if off is None:
            continue
        _, ct, N, bs = decls[off]
        if ct != 'u8' or bs % 2 != 0:
            continue
        u16count = bs // 2
        pat = re.compile(
            rf'^u8\s+{re.escape(sym)}\[{bs}\]\s*=\s*\{{\n'
            rf'(?P<indent>[ \t]*)#include <(?P<inc>[^>]+)\.data\.inc\.c>\n\}};',
            re.MULTILINE,
        )
        m = pat.search(src)
        if not m:
            print(f'  PALETTE MISS: {sym}')
            continue
        inc = m.group('inc')
        indent = m.group('indent') or '\t'
        new = f'u16 {sym}[{u16count}] = {{\n{indent}#include <{inc}.palette.inc.c>\n}};'
        src = src[:m.start()] + new + src[m.end():]
        applied += 1
    print(f'  Pass 3 (palettes): {applied}')
    return src, applied


# ---- Orchestration ----

def run_for_fid(fid):
    files = find_files(fid)
    if files is None:
        print(f'fid {fid}: no src/relocData/{fid}_*.c found')
        return 0
    src_p, reloc_p, exp_p, asset_p, obj_p, short = files
    if not obj_p.exists():
        print(f'fid {fid} ({short}): .o missing, build first')
        return 0
    if asset_p is None or not exp_p.exists():
        print(f'fid {fid} ({short}): asset or expanded view missing')
        return 0

    print(f'fid {fid} ({short})')
    name_prefix = f'd{short}_'
    raw = asset_p.read_bytes()
    name_to_off = load_nm(obj_p)

    src = src_p.read_text()
    reloc_text = reloc_p.read_text() if reloc_p.exists() else None
    changes = 0

    # Pass 1
    decls = parse_decls(src, name_to_off)
    src, n = do_splits(src, raw, decls, name_prefix)
    changes += n
    if n > 0:
        # Splits only change declarations in src; the expanded view won't
        # reflect new Gfx bodies until after a rebuild. Users should rebuild
        # between tool runs if they want the Vtx pass to see newly-exposed refs.
        pass

    # Pass 2 (Vtx)
    expanded = exp_p.read_text()
    decls = parse_decls(src, name_to_off)
    src, reloc_text, n = do_retypes_and_merges(src, reloc_text, decls, expanded, name_prefix)
    changes += n

    # Pass 3 (palettes)
    decls = parse_decls(src, name_to_off)
    src, n = do_palettes(src, decls, expanded)
    changes += n

    # Clean up blank-line runs left by removed decls
    src = collapse_blank_runs(src)

    src_p.write_text(src)
    if reloc_text is not None:
        reloc_p.write_text(reloc_text)
    return changes


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int)
    ap.add_argument('--all-char', action='store_true',
                    help='Process every character model in the built-in list')
    args = ap.parse_args()

    if args.all_char:
        fids = [int(n.split('_')[0]) for n in CHAR_MODELS]
    else:
        fids = args.fids

    if not fids:
        ap.error('pass one or more fid args or --all-char')

    total = 0
    for f in fids:
        total += run_for_fid(f)
    print(f'\nTotal changes applied: {total}')


if __name__ == '__main__':
    main()
