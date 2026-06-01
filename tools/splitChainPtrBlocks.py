#!/usr/bin/python3
"""Split typed blocks (Vtx[], Tex[], MatAnimJoint[], ...) that contain
chain-encoded pointers in their data fields.

User's spec:
  - Turn the host block into a `.data.inc.c` block (or chain of them)
  - Split out each 4-byte chain pointer slot into its own u32[1] array
    initialized to (u32)&<canonical_target>
  - Mark each new data block with `// TODO: data.inc.c` comment.

For each shadow ptr_byte_offset inside a host block:
  1. Pre-segment: bytes from host_block_start..ptr_byte → u8 data block
  2. Pointer:    4 bytes at ptr_byte → u32 ptr block
  3. Post-segment: bytes from ptr_byte+4..next_ptr_or_end → u8 data block

Usage:
    tools/splitChainPtrBlocks.py <fid> [--version us|jp] [--dry]
    tools/splitChainPtrBlocks.py --all [--version us|jp] [--dry]
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


def _get_file_prefix(master):
    """e.g. src/relocData/52_MVCommon.c → 'MVCommon'"""
    base = os.path.basename(master)
    m = re.match(r'^\d+_(.+)\.c$', base)
    return m.group(1) if m else None


def split_file(fid, version, dry_run):
    master = _find_master_c(fid)
    rf = _find_reloc(fid)
    if not master or not rf: return 0
    file_prefix = _get_file_prefix(master)
    if not file_prefix: return 0
    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    if not os.path.exists(o): return 0
    local = _nm(o)
    o_offs = _readelf_offsets(o)

    # Parse .reloc: shadows are entries whose ptr_byte_offset isn't in o_offs.
    shadows = {}  # ptr_byte -> (target_label, target_addend)
    with open(rf) as f:
        for ln in f:
            ln_c = ln.split('#')[0].strip()
            if not ln_c: continue
            p = ln_c.split()
            if len(p) != 3: continue
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[1])
            if not m or m.group(1) not in local: continue
            ptr_byte = local[m.group(1)] + (int(m.group(2), 16) if m.group(2) else 0)
            if ptr_byte in o_offs: continue
            tm = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[2])
            if not tm: continue
            shadows[ptr_byte] = (tm.group(1), int(tm.group(2), 16) if tm.group(2) else 0)
    if not shadows:
        return 0

    # Find each host block containing 1+ shadows.
    # A host block is a defined symbol whose byte range contains a ptr_byte.
    syms_by_off = sorted([(off, name) for name, off in local.items()])
    def host_of(byte):
        # Largest start <= byte
        last = None
        for off, name in syms_by_off:
            if off > byte: break
            last = (off, name)
        return last

    # Group shadows by host block name
    hosts = {}  # host_name -> {start, ptrs: sorted list of (ptr_byte, target)}
    for ptr_byte, target in shadows.items():
        h = host_of(ptr_byte)
        if not h: continue
        h_off, h_name = h
        hosts.setdefault(h_name, {'start': h_off, 'ptrs': []})['ptrs'].append((ptr_byte, target))
    for h in hosts.values():
        h['ptrs'].sort()

    with open(master) as f:
        text = f.read()

    # Find each host block's declaration in the source.
    # Pattern: `<type> <stars>? <name>[N] = { #include <path> };`
    # OR        `<type> <stars>? <name>[N] = { /* body */ };`
    # We need: the declaration's text range so we can replace it wholesale.
    decl_re = re.compile(
        r'(?P<all>'
        r'(?:/\*[^*]*\*/\s*)*'  # leading comments
        r'(?P<type>[A-Za-z_]\w*)\s+(?P<stars>\**)\s*(?P<name>[A-Za-z_]\w*)'
        r'\s*\[(?P<count>[^\]]*)\]\s*=\s*\{'
        r'(?P<body>(?:[^{}]|\{[^{}]*\})*?)'
        r'\}\s*;'
        r')',
        re.DOTALL | re.MULTILINE)

    decl_locs = {}
    for m in decl_re.finditer(text):
        decl_locs[m.group('name')] = m

    new_text = text
    splits_done = 0
    edits = []  # list of (start, end, new_text, host_name)

    for h_name, info in hosts.items():
        if h_name not in decl_locs: continue
        m = decl_locs[h_name]
        h_start = info['start']
        # Determine block byte size: next host's start - this one's start,
        # or end-of-file for the last block.
        # Find next defined symbol address.
        next_off = None
        for off, name in syms_by_off:
            if off > h_start:
                next_off = off; break
        block_size = (next_off - h_start) if next_off else None
        if block_size is None:
            continue

        # Generate new decls. Keep the original host name for the FIRST u8
        # segment so external .reloc references to <host_name>+<offset>
        # continue to resolve correctly via nm.
        new_decls = [f'/* TODO: data.inc.c — block at 0x{h_start:X} was {m.group("type")}[{m.group("count")}]; '
                     f'contains {len(info["ptrs"])} embedded chain pointer(s) split out below */']
        cursor = h_start
        first_segment = True  # next emitted decl uses h_name (the host's address)
        for ptr_byte, (tgt_lbl, tgt_add) in info['ptrs']:
            if ptr_byte > cursor:
                pre_size = ptr_byte - cursor
                if first_segment:
                    pre_name = h_name  # keep original name for first segment
                    inc_basename = f'{h_name[len(f"d{file_prefix}_"):] if h_name.startswith(f"d{file_prefix}_") else f"data_0x{cursor:04X}"}'
                else:
                    pre_name = f'd{file_prefix}_data_0x{cursor:04X}'
                    inc_basename = f'data_0x{cursor:04X}'
                new_decls.append(f'u8 {pre_name}[{pre_size}] = {{')
                new_decls.append(f'\t/* TODO: data.inc.c */')
                new_decls.append(f'\t#include <{file_prefix}/{inc_basename}.data.inc.c>')
                new_decls.append('};')
                new_decls.append('')
                first_segment = False
            # The pointer slot: if first_segment is still True (host starts WITH
            # a pointer, no preceding data), use the host's original name on
            # this u32[1] so the symbol's address (== host_start) is preserved.
            if first_segment:
                ptr_name = h_name
                first_segment = False
            else:
                ptr_name = f'd{file_prefix}_data_0x{ptr_byte:04X}'
            tgt_expr = tgt_lbl if tgt_add == 0 else f'(u8 *){tgt_lbl} + 0x{tgt_add:X}'
            new_decls.append(f'u32 {ptr_name}[1] = {{ (u32){tgt_expr} }};')
            new_decls.append('')
            cursor = ptr_byte + 4
        # Trailing segment
        if cursor < h_start + block_size:
            tail_size = h_start + block_size - cursor
            tail_name = f'd{file_prefix}_data_0x{cursor:04X}'
            new_decls.append(f'u8 {tail_name}[{tail_size}] = {{')
            new_decls.append(f'\t/* TODO: data.inc.c */')
            new_decls.append(f'\t#include <{file_prefix}/data_0x{cursor:04X}.data.inc.c>')
            new_decls.append('};')
            new_decls.append('')

        edits.append((m.start(), m.end(), '\n'.join(new_decls), h_name))
        splits_done += 1

    if not edits:
        return 0

    # Apply edits in reverse. We keep the host's original name on its first
    # segment so external references continue to resolve.
    edits.sort(key=lambda e: e[0], reverse=True)
    for s, e, new, h in edits:
        new_text = new_text[:s] + new + new_text[e:]

    # Rewrite any existing `extern <T> <host_name>[..];` lines to match the
    # new definition type. Possible new types per host:
    #   - `u32 host[1]` (host starts WITH a chain pointer, no pre-segment)
    #   - `u8  host[N]` (host has data BEFORE the first chain pointer)
    # Determine from the new_decls we just emitted.
    for h in hosts:
        info = hosts[h]
        # Did this host's first chain pointer land at host_start (cursor==h_start)?
        # If yes, h_name is now `u32[1]`; otherwise `u8[N]`.
        first_ptr_at_start = info['ptrs'][0][0] == info['start']
        new_type = 'u32' if first_ptr_at_start else 'u8'
        new_text = re.sub(
            rf'^([ \t]*)extern\s+\S[^;\n]*?\b{re.escape(h)}\b\s*\[[^\]]*\]\s*;([ \t]*\n)',
            rf'\1extern {new_type} {h}[];\2',
            new_text, flags=re.MULTILINE)

    # Use hoistExterns to manage forward decls: it preserves existing types
    # by hoisting below-use externs to the top, only synthesizing new ones
    # when no extern exists at all (and then derives type from the actual
    # definition, never guessing).
    needed_externs = set()
    for h_info in hosts.values():
        for _, (tgt, _) in h_info['ptrs']:
            needed_externs.add(tgt)
    import hoistExterns
    new_text = hoistExterns.hoist_or_add_externs(new_text, needed_externs)

    if dry_run:
        print(f'fid={fid}: would split {splits_done} blocks, {sum(len(h["ptrs"]) for h in hosts.values())} chain ptrs [dry]')
        return splits_done

    with open(master, 'w') as f:
        f.write(new_text)
    print(f'fid={fid}: split {splits_done} blocks ({sum(len(h["ptrs"]) for h in hosts.values())} chain ptrs)')
    return splits_done


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
            try: total += split_file(fid, args.version, args.dry) or 0
            except Exception as e: print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'Total: {total} blocks split')
    else:
        if args.fid is None: ap.error('fid required')
        split_file(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
