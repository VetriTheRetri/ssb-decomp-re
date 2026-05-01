#!/usr/bin/env python3
"""Extract a version-specific .reloc file from the currently-extracted
relocData binary.

For files where the shared .c source compiles fine for both US and JP
(no content divergence, or already handled via #ifdef REGION_JP wraps)
but the US-authored .reloc file has extern target offsets that are
wrong for JP, this tool reads the actual chain from
`assets/relocData/<fid>.vpk0.bin`, resolves each intern entry's
ptr+target through the compiled .o symbol table, and emits a new
`.reloc` file using symbolic labels for intern entries and raw hex
offsets for extern entries.

Typical workflow:

    # Extract JP baserom first so assets/relocData/ has JP bytes.
    make init VERSION=jp

    # Resolve the shared .c file's US fid (the one named in the
    # source tree) to the current version's fid via the name map, then
    # walk the JP binary and spit out a <basename>.jp.reloc file.
    python3 tools/extractJpReloc.py <us_fid>

    # The committed shared .c compiles for both versions; on a JP
    # build the Makefile now prefers <basename>.jp.reloc over the
    # shared .reloc, so fixRelocChain writes JP chain data without
    # touching US.

Usage:
    extractJpReloc.py <us_fid> [--version us|jp] [--out PATH]
"""

import argparse
import csv
import os
import re
import struct
import subprocess
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
# JP-specific tool — defaults point at the JP per-version trees.
CSV_PATH = os.path.join(PROJECT_DIR, 'assets', 'jp', 'relocData.csv')
ASSETS_DIR = os.path.join(PROJECT_DIR, 'assets', 'jp', 'relocData')
SRC_DIR = os.path.join(PROJECT_DIR, 'src', 'relocData')
BUILD_DIR = os.path.join(PROJECT_DIR, 'build', 'jp', 'src', 'relocData')

IDO = os.path.join(PROJECT_DIR, 'tools/ido-recomp/7.1/cc')
INCLUDES = ['-Iinclude', '-Isrc', '-Isrc/relocData', '-Ibuild/src',
            '-Ibuild/src/relocData']
CFLAGS = ['-c', '-G', '0', '-non_shared', '-Xfullwarn', '-Xcpluscomm',
          '-Wab,-r4300_mul', '-woff', '649,838,712,516,624,568,763',
          '-O2', '-mips2']


def load_name_map(version):
    path = os.path.join(SCRIPT_DIR, f'relocFileDescriptions.{version}.txt')
    result = {}
    with open(path) as f:
        for line in f:
            s = line.strip()
            if s.startswith('-'):
                m = re.match(r'-(\d+):\s*(.*)', s)
                if m:
                    result[int(m.group(1))] = m.group(2).strip()
    return result


def detect_current_version():
    """Guess which version's assets are currently extracted from the CSV
    line count — JP has 2109 lines, US has 2134."""
    with open(CSV_PATH) as f:
        n = sum(1 for _ in f)
    return 'jp' if n == 2109 else 'us'


def name_to_fid_for(version, name):
    nm = load_name_map(version)
    for fid, n in nm.items():
        if n == name:
            return fid
    return None


def find_shared_reloc(us_fid):
    """Find `src/relocData/<us_fid>_<Name>.reloc` — the US-authored
    shared .reloc file that this fid's .c compiles against."""
    us_names = load_name_map('us')
    name = us_names.get(us_fid, '')
    candidates = []
    if name:
        candidates.append(os.path.join(SRC_DIR, f'{us_fid}_{name}.reloc'))
    # Fallback to glob on the fid prefix
    import glob
    candidates += glob.glob(os.path.join(SRC_DIR, f'{us_fid}_*.reloc'))
    for p in candidates:
        if os.path.exists(p):
            return p
    return None


def load_csv_row(fid):
    with open(CSV_PATH) as f:
        reader = csv.reader(f)
        next(reader)
        for i, row in enumerate(reader):
            if i == fid and len(row) >= 6:
                return {
                    'is_vpk0': int(row[0].strip()) != 0,
                    'data_off': int(row[1].strip(), 16),
                    'intern_off': int(row[2].strip(), 16),
                    'extern_off': int(row[4].strip(), 16),
                }
    raise KeyError(f'no csv row for fid {fid}')


def walk_chain(data, start_word):
    """Return a sorted list of (ptr_byte_off, target_byte_off) tuples."""
    entries = []
    if start_word == 0xFFFF:
        return entries
    offset = start_word
    seen = set()
    while offset != 0xFFFF:
        if offset in seen:
            break
        seen.add(offset)
        byte_off = offset * 4
        if byte_off + 4 > len(data):
            break
        val = struct.unpack('>I', data[byte_off:byte_off + 4])[0]
        next_r = (val >> 16) & 0xFFFF
        target = (val & 0xFFFF) * 4
        entries.append((byte_off, target))
        offset = next_r
    entries.sort()
    return entries


def compile_for_symbols(us_fid, region='us'):
    """Compile the shared .c file, return the .o path.
    Uses the specified region define so symbol offsets match the target
    binary layout — important when #if REGION_JP guards change array sizes."""
    import glob
    cands = glob.glob(os.path.join(SRC_DIR, f'{us_fid}_*.c'))
    cands = [c for c in cands if not c.endswith('.jp.c')
             and not c.endswith('.us.c')]
    if not cands:
        raise RuntimeError(f'no .c file for fid {us_fid}')
    c_path = cands[0]
    obj_dir = '/tmp/jp_reloc_obj'
    os.makedirs(obj_dir, exist_ok=True)
    obj_path = os.path.join(obj_dir, f'{us_fid}.o')
    region_def = '-DREGION_JP' if region == 'jp' else '-DREGION_US'
    defines = ['-DF3DEX_GBI_2', '-D_MIPS_SZLONG=32', '-DNDEBUG', '-DN_MICRO',
               '-D_FINALROM', region_def]
    subprocess.run([IDO] + CFLAGS + INCLUDES + defines +
                   ['-o', obj_path, c_path],
                   cwd=PROJECT_DIR, check=True, capture_output=True)
    return obj_path, c_path


def nm_symbols(obj_path):
    """Return a sorted list of (byte_offset, name) tuples from nm."""
    result = subprocess.run(
        ['mips-linux-gnu-nm', '-n', '--defined-only', obj_path],
        capture_output=True, text=True, check=True)
    syms = []
    for line in result.stdout.splitlines():
        parts = line.split()
        if len(parts) == 3:
            syms.append((int(parts[0], 16), parts[2]))
    syms.sort()
    return syms


def label_for(byte_off, syms):
    """Resolve a byte offset to `<symbol>+0xOFF` or bare `<symbol>`. If
    the offset falls before the first symbol (shouldn't happen for real
    reloc entries), return a raw hex string."""
    if not syms:
        return f'0x{byte_off:X}'
    for i in range(len(syms)):
        start = syms[i][0]
        name = syms[i][1]
        end = syms[i + 1][0] if i + 1 < len(syms) else None
        if start <= byte_off and (end is None or byte_off < end):
            delta = byte_off - start
            if delta == 0:
                return name
            return f'{name}+0x{delta:X}'
    return f'0x{byte_off:X}'


def emit_reloc(shared_path, us_fid, version, intern_entries,
                extern_entries, syms, out_path):
    """Write the generated .reloc file. The output format matches the
    existing committed files: three header comments, then `intern` /
    `extern` lines sorted by ptr offset (fixRelocChain re-sorts anyway,
    so order is purely for human readability)."""
    header = [
        f'# Relocation metadata for file {us_fid} ({version.upper()} binary walk)',
        f'# Format: <type> <ptr_label> <target_label>',
        f'# Labels resolved via {os.path.relpath(shared_path, PROJECT_DIR) if shared_path else "<shared .c>"} .o symbol table',
        '',
    ]
    lines = list(header)
    for po, to in intern_entries:
        lines.append(f'intern {label_for(po, syms)} {label_for(to, syms)}')
    lines.append('')
    for po, to in extern_entries:
        lines.append(f'extern {label_for(po, syms)} 0x{to:X}')
    os.makedirs(os.path.dirname(out_path) or '.', exist_ok=True)
    with open(out_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')


def process_fid(us_fid, version, out_path=None):
    shared = find_shared_reloc(us_fid)
    us_names = load_name_map('us')
    file_name = us_names.get(us_fid, '')

    # Resolve the equivalent fid in the CURRENTLY-extracted version by
    # name, since JP and US use different fid numbers for the same file.
    current_fid = us_fid
    if version == 'jp':
        jp_names = load_name_map('jp')
        jp_name_to_fid = {n: f for f, n in jp_names.items() if n}
        current_fid = jp_name_to_fid.get(file_name)
        if current_fid is None:
            raise RuntimeError(
                f'{file_name}: no JP fid found (exists in US as {us_fid} '
                f'but missing from JP description table)')

    row = load_csv_row(current_fid)
    ext = 'vpk0.bin' if row['is_vpk0'] else 'bin'
    bin_path = os.path.join(ASSETS_DIR, f'{current_fid}.{ext}')
    data = open(bin_path, 'rb').read()

    intern = walk_chain(data, row['intern_off'])
    extern = walk_chain(data, row['extern_off'])

    obj_path, c_path = compile_for_symbols(us_fid, region=version)
    syms = nm_symbols(obj_path)

    if out_path is None:
        base = shared[:-len('.reloc')] if shared else os.path.join(
            SRC_DIR, f'{us_fid}_{file_name}')
        out_path = f'{base}.{version}.reloc'
    emit_reloc(shared, us_fid, version, intern, extern, syms, out_path)
    print(f'fid {us_fid} ({file_name}): {len(intern)} intern + {len(extern)} '
          f'extern -> {out_path}')
    return out_path


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('us_fid', type=int)
    ap.add_argument('--version', default=None,
                    help='Version whose binary we\'re walking '
                         '(default: detected from assets/relocData.csv)')
    ap.add_argument('--out', default=None,
                    help='Output path (default: alongside the shared .reloc, '
                         'with a .<version>.reloc suffix)')
    args = ap.parse_args()
    version = args.version or detect_current_version()
    process_fid(args.us_fid, version, args.out)


if __name__ == '__main__':
    main()
