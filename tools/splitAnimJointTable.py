"""Split decoded u32 AnimJoint arrays whose leading words form a script-pointer
table into separate u32 arrays for the table + each script + a PAD trailer.

For each `u32 dXxx_AnimJoint_0xN[M] = { ... };` block:
  1. Read .reloc for entries `dXxx_AnimJoint_0xN+0xPTR <target_label>`. Build a
     map of byte_offset -> target_label.
  2. Walk words byte-by-byte from the start. While each word is either a chain
     pointer (per the .reloc) or zero (NULL slot), it's part of the table.
     Stop at the first non-zero non-chain word -- that's the start of the
     first script.
  3. Each chain target offset >= table_size that appears in the .reloc points
     at a script start. Sort them.
  4. For each script i:  ends at chain_targets[i+1] - 1 OR at the first
     aobjEvent32End() row not preceded by an in-progress payload window
     (which the decoder already laid out faithfully -- we just look for a
     line == 'aobjEvent32End(),' and split there).
  5. After the last script's End(), trailing all-zero-or-End() words become
     a `PAD(N);` macro.

Emits new C source for the array region. Also rewrites the .reloc entries:
each `<sym>+0xPTR <sym>+0xTGT` becomes `<sym>+0xPTR <new_script_sym>` (or
`+0xN` if interior).

Skip arrays that don't have a clean leading table (no chain pointers at low
offset) -- those decoded as a single flat script.
"""
import argparse
import os
import pathlib
import re
import subprocess

PROJECT = pathlib.Path(__file__).resolve().parent.parent if False else pathlib.Path('.')
SRC = pathlib.Path('src/relocData')


def parse_reloc(reloc_path, target_sym):
    """Return [(ptr_off, target_label, target_full)] for intern entries
    `target_sym+0xN <target_label>`. target_full is the right-hand side
    string verbatim from the .reloc file."""
    out = []
    if not reloc_path.exists():
        return out
    for ln in reloc_path.read_text().split('\n'):
        ln = ln.split('#', 1)[0].strip()
        if not ln:
            continue
        parts = ln.split()
        if len(parts) != 3 or parts[0] != 'intern':
            continue
        m = re.match(rf"^{re.escape(target_sym)}(?:\+0x([0-9A-Fa-f]+))?$", parts[1])
        if not m:
            continue
        out.append((int(m.group(1), 16) if m.group(1) else 0, parts[2]))
    return out


def parse_array_body(body):
    """Walk the decoded body lines, return list of (line_text, byte_offset).
    Each line corresponds to one u32 word."""
    lines = []
    byte_off = 0
    for raw_ln in body.split('\n'):
        if not raw_ln.strip():
            continue
        lines.append((raw_ln, byte_off))
        byte_off += 4
    return lines, byte_off


def line_is_chain_pointer(ln):
    """Lines emitted by the decoder for chain pointers look like
        \t(u32)dSym  ,
    or
        \t(u32)((u8*)dSym + 0x18),
    """
    s = ln.strip().rstrip(',').strip()
    return s.startswith('(u32)') and 'aobjEvent32' not in s


def line_is_zero(ln):
    s = ln.strip().rstrip(',').strip()
    return s == 'aobjEvent32End()' or s == '0' or s == '0x00000000' or s == 'NULL'


def line_is_end(ln):
    s = ln.strip().rstrip(',').strip()
    return s == 'aobjEvent32End()'


def find_table_end(lines, chain_offsets):
    """Walk lines from offset 0 while each word is either a chain pointer
    or a zero/null slot. Return the byte offset where the table ends (=
    start of first script)."""
    table_end = 0
    for ln, off in lines:
        if off in chain_offsets:
            table_end = off + 4
        elif line_is_zero(ln):
            table_end = off + 4
        else:
            break
    return table_end


def find_script_end(lines, start_off, limit_off):
    """Within [start_off, limit_off), find the byte offset of the first
    aobjEvent32End() line. Returns the byte AFTER that End (script end
    exclusive). If no End found within limit, returns limit_off."""
    for ln, off in lines:
        if off < start_off:
            continue
        if off >= limit_off:
            break
        if line_is_end(ln):
            return off + 4
    return limit_off


def short_sym_with_offset(orig_sym, file_prefix, new_off):
    """Replace the trailing `_0xN` in orig_sym with `_0x{new_off:X}` so the
    new script symbol carries its absolute file offset."""
    m = re.match(rf'^({re.escape(file_prefix)}\w+?)_0x[0-9A-Fa-f]+$', orig_sym)
    if not m:
        return f'{orig_sym}_0x{new_off:X}'
    return f'{m.group(1)}_0x{new_off:X}'


def process_anim_array(c_text, reloc_text, file_prefix, sym_byte_off, sym, count,
                       body, reloc_pairs):
    """Decide whether to split this array. Returns (new_c_block, new_reloc_lines,
    rename_map) or None if no split applies.

    new_c_block replaces the original `u32 sym[count] = { body };` text.
    rename_map: {old_target_label_in_reloc -> new_target_label} for each chain
                entry whose target falls inside the array.
    """
    chain_offsets = {off for off, _ in reloc_pairs}
    if not chain_offsets:
        return None
    lines, total_bytes = parse_array_body(body)
    if total_bytes != count * 4:
        return None
    table_end = find_table_end(lines, chain_offsets)
    if table_end == 0:
        return None
    # Chain entries pointing inside the array (`<sym>+0xN`) are script targets.
    inside_targets = []
    for ptr_off, target_label in reloc_pairs:
        m = re.match(rf'^{re.escape(sym)}(?:\+0x([0-9A-Fa-f]+))?$', target_label)
        if not m:
            continue
        tgt_off = int(m.group(1), 16) if m.group(1) else 0
        if tgt_off >= table_end:
            inside_targets.append((ptr_off, tgt_off))
    if not inside_targets:
        return None
    # Sort script starts ascending
    script_starts = sorted({tgt for _, tgt in inside_targets})
    # Each script ends at the first End in [start, next_start)
    ranges = []
    for i, start in enumerate(script_starts):
        next_start = script_starts[i + 1] if i + 1 < len(script_starts) else total_bytes
        end = find_script_end(lines, start, next_start)
        ranges.append((start, end))
    # Collect lines per range
    lines_at = {off: ln for ln, off in lines}
    table_lines = []
    for ln, off in lines:
        if off >= table_end:
            break
        table_lines.append((ln, off))
    script_blocks = []  # (start_off, end_off, [lines])
    for start, end in ranges:
        block_lines = [(ln, off) for ln, off in lines if start <= off < end]
        script_blocks.append((start, end, block_lines))
    # Trailing pad: bytes from last script end to total_bytes, all zero
    pad_start = ranges[-1][1] if ranges else table_end
    pad_lines = [(ln, off) for ln, off in lines if off >= pad_start]
    if not all(line_is_zero(ln) for ln, _ in pad_lines):
        return None  # non-zero trailer; bail to be safe
    pad_size = total_bytes - pad_start
    # Coverage check: every byte after table_end must be in exactly one
    # script range or in the trailing PAD. Anything else means there are
    # scripts reachable only via Jump/SetAnim from inside other scripts
    # (not from the leading pointer table) -- our naive splitter would
    # silently drop those bytes, so abort the split.
    covered = table_end
    for s, e in ranges:
        if s != covered:
            return None  # gap or overlap
        covered = e
    if covered + pad_size != total_bytes:
        return None
    # Build symbol names for the new scripts; each script uses absolute offset
    # = sym's nm offset + script byte offset within array.
    new_names = {}
    for start, _, _ in script_blocks:
        new_names[start] = short_sym_with_offset(sym, file_prefix, sym_byte_off + start)
    # Emit new C block
    c_lines = []
    # Forward decls
    c_lines.append('/* Script-table split: leading chain-pointer table at the')
    c_lines.append(' * start of the AnimJoint, followed by per-joint AObjEvent32')
    c_lines.append(' * scripts. Forward decls so the table can reference them. */')
    for start in script_starts:
        c_lines.append(f'extern u32 {new_names[start]}[];')
    c_lines.append('')
    c_lines.append(f'u32 {sym}[{table_end // 4}] = {{')
    for ln, off in table_lines:
        # Rewrite chain-pointer lines that point into the array, to use the
        # new symbol names.
        s = ln.strip().rstrip(',').strip()
        replaced = ln
        if off in chain_offsets:
            # Find the matching reloc entry
            for ptr_off, target_label in reloc_pairs:
                if ptr_off != off:
                    continue
                m = re.match(rf'^{re.escape(sym)}(?:\+0x([0-9A-Fa-f]+))?$', target_label)
                if not m:
                    continue
                tgt = int(m.group(1), 16) if m.group(1) else 0
                if tgt in new_names:
                    replaced = f'\t(u32){new_names[tgt]},'
                break
        c_lines.append(replaced)
    c_lines.append('};')
    for start, end, block_lines in script_blocks:
        c_lines.append('')
        c_lines.append(f'u32 {new_names[start]}[] = {{')
        for ln, _ in block_lines:
            c_lines.append(ln)
        c_lines.append('};')
    if pad_size:
        c_lines.append('')
        c_lines.append(f'PAD({pad_size});')
    new_block = '\n'.join(c_lines)
    # Rewrite .reloc lines: any chain entry whose target falls into a
    # script's range gets retargeted to `<new_script_sym>+<off_within>`.
    rename_map = {}
    for ptr_off, target_label in reloc_pairs:
        m = re.match(rf'^{re.escape(sym)}(?:\+0x([0-9A-Fa-f]+))?$', target_label)
        if not m:
            continue
        tgt = int(m.group(1), 16) if m.group(1) else 0
        # Find the containing script
        for start in script_starts:
            new_name = new_names[start]
            for s2, e2 in ranges:
                if s2 != start:
                    continue
                if s2 <= tgt < e2:
                    delta = tgt - s2
                    if delta == 0:
                        rename_map[target_label] = new_name
                    else:
                        rename_map[target_label] = f'{new_name}+0x{delta:X}'
                    break
            else:
                continue
            break
    return new_block, rename_map


def process_file(fid):
    files = list(SRC.glob(f'{fid}_*.c'))
    files = [f for f in files if '.jp.c' not in f.name]
    if not files:
        return False
    c_path = files[0]
    fname = re.match(rf'^{fid}_(\w+)\.c$', c_path.name).group(1)
    file_prefix = f'd{fname}_'
    reloc_path = c_path.with_suffix('.reloc')
    obj = pathlib.Path(f'build/src/relocData/.build/{fid}.o')
    if not obj.exists():
        return False
    nm_out = subprocess.run(['mips-linux-gnu-nm', str(obj)],
                            capture_output=True, text=True, check=True).stdout
    name_to_off = {}
    for ln in nm_out.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'):
            name_to_off[p[2]] = int(p[0], 16)

    text = c_path.read_text()
    reloc_text = reloc_path.read_text() if reloc_path.exists() else ''
    arr_re = re.compile(
        r'^u32 (d\w*(?:AnimJoint|MatAnimJoint|CamAnimJoint|animjoints|matanimjoints)\w*)\[(\d+)\] = \{\n(.*?)\n\};',
        re.MULTILINE | re.DOTALL,
    )
    splits = []
    for m in arr_re.finditer(text):
        sym, count, body = m.group(1), int(m.group(2)), m.group(3)
        if sym not in name_to_off:
            continue
        sym_off = name_to_off[sym]
        reloc_pairs = parse_reloc(reloc_path, sym)
        result = process_anim_array(text, reloc_text, file_prefix, sym_off,
                                     sym, count, body, reloc_pairs)
        if result is None:
            continue
        new_block, rename_map = result
        splits.append((m.span(), new_block, rename_map))

    if not splits:
        return False

    # Apply text replacements from end to start (preserve offsets)
    new_text = text
    for (start, end), new_block, _ in sorted(splits, key=lambda x: -x[0][0]):
        new_text = new_text[:start] + new_block + new_text[end:]
    c_path.write_text(new_text)

    # Apply reloc rewrites
    if reloc_text and any(rm for _, _, rm in splits):
        merged_renames = {}
        for _, _, rm in splits:
            merged_renames.update(rm)
        out_lines = []
        for ln in reloc_text.split('\n'):
            stripped = ln.split('#', 1)[0].strip()
            if not stripped:
                out_lines.append(ln)
                continue
            parts = stripped.split()
            if len(parts) != 3 or parts[0] != 'intern':
                out_lines.append(ln)
                continue
            target = parts[2]
            if target in merged_renames:
                parts[2] = merged_renames[target]
                out_lines.append(' '.join(parts))
            else:
                out_lines.append(ln)
        reloc_path.write_text('\n'.join(out_lines))

    print(f'fid {fid} ({fname}): split {len(splits)} arrays')
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int)
    ap.add_argument('--all', action='store_true')
    args = ap.parse_args()
    if args.all:
        targets = sorted({
            int(re.match(r'^(\d+)_', p.name).group(1))
            for p in SRC.iterdir()
            if p.suffix == '.c' and not p.name.endswith('.jp.c')
        })
    else:
        targets = args.fids or []
    n = sum(process_file(f) for f in targets)
    print(f'\n{n} files updated')


if __name__ == '__main__':
    main()
