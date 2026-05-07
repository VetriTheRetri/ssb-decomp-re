#!/usr/bin/env python3
"""
Second-pass retype for AObjEvent32 ** master arrays.

After retype_anim.py types `u8 X[N]` blocks as `u32 X[]` anim scripts and
`AObjEvent32 *Y[]` pointer arrays, this pass finds remaining `u8 Z[N]`
blocks (any N divisible by 4) whose every non-zero u32 has an outgoing
chain entry pointing to a now-typed `AObjEvent32 *Y[]` symbol — those are
`AObjEvent32 **Z[N/4]` master arrays.
"""
from __future__ import annotations
import re
import sys
from pathlib import Path


def main(fid: int):
    src = Path('src/relocData')
    candidates = list(src.glob(f'{fid}_*.c'))
    candidates = [p for p in candidates if not p.name.endswith('.jp.c')]
    c_path = candidates[0]
    target_name = c_path.stem.split('_', 1)[1]
    text = c_path.read_text()
    reloc_path = c_path.with_suffix('.reloc')
    reloc = reloc_path.read_text()

    # Find every typed AObjEvent32 *X[N] symbol in the file
    star_syms = set(re.findall(r'AObjEvent32\s*\*(\w+)\s*\[\d+\]\s*=', text))
    # Also include anim u32 X[N] arrays (those can be ** array targets too)
    anim_syms = set()
    for m in re.finditer(r'^u32 (\w+)\[\d+\] = \{\n((?:.+\n)+?)\};', text, re.M):
        if 'aobjEvent32' in m.group(2):
            anim_syms.add(m.group(1))
    valid_targets = star_syms | anim_syms

    # Build outgoing chain map: sym -> {byte_off: target_sym}
    chain = {}
    for line in reloc.splitlines():
        m = re.match(r'^(intern|extern)\s+(\w+)(?:\+0x([0-9A-Fa-f]+))?\s+(\S+)', line)
        if m:
            base = m.group(2)
            off = int(m.group(3), 16) if m.group(3) else 0
            tgt = m.group(4).split('+')[0]
            chain.setdefault(base, {})[off] = tgt

    block_re = re.compile(
        r'^u8 (?P<name>d\w+)\[(?P<size>\d+)\] = \{\n'
        r'\t#include <(?P<inc>[^>]+)>\n'
        r'\};',
        re.M,
    )

    n_pp = 0
    new_text = text
    candidates_to_retype = []
    for m in block_re.finditer(text):
        name = m.group('name')
        size = int(m.group('size'))
        if size == 0 or size % 4 != 0:
            continue
        n_words = size // 4
        own_chain = chain.get(name, {})
        if not own_chain:
            continue
        # All chain entries target AObjEvent32 * arrays
        if not all(t in valid_targets for t in own_chain.values()):
            continue
        # Reasonable size (cap at 256 bytes / 64 entries to be safe)
        if size > 256:
            continue
        candidates_to_retype.append((m, name, n_words, own_chain))

    # Build new blocks
    for m, name, n_words, own_chain in candidates_to_retype:
        entries = []
        for j in range(n_words):
            slot_off = j * 4
            if slot_off in own_chain:
                tgt = own_chain[slot_off]
                # If target is anim script (u32 X[N]), cast as (AObjEvent32 *)
                if tgt in valid_targets:
                    entries.append(f'\t(AObjEvent32 **){tgt},')
                else:
                    entries.append(f'\t(AObjEvent32 **){tgt},')
            else:
                entries.append('\tNULL,')
        new_block = (
            f'AObjEvent32 **{name}[{n_words}] = {{\n'
            + '\n'.join(entries) + '\n};'
        )
        new_text = new_text[:m.start()] + new_block + new_text[m.end():]
        n_pp += 1

    # Update extern decls
    for _, name, _, _ in candidates_to_retype:
        new_text = re.sub(
            rf'^extern\s+u8\s+{re.escape(name)}\s*\[\];$',
            f'extern AObjEvent32 **{name}[];',
            new_text, count=1, flags=re.M,
        )

    # Apply replacements (reverse to preserve offsets)
    if candidates_to_retype:
        # Re-apply in reverse — but we already mutated new_text; let's redo
        # by running back-to-front
        new_text = text
        for m, name, n_words, own_chain in reversed(candidates_to_retype):
            entries = []
            for j in range(n_words):
                slot_off = j * 4
                if slot_off in own_chain:
                    entries.append(f'\t(AObjEvent32 **){own_chain[slot_off]},')
                else:
                    entries.append('\tNULL,')
            new_block = (
                f'AObjEvent32 **{name}[{n_words}] = {{\n'
                + '\n'.join(entries) + '\n};'
            )
            new_text = new_text[:m.start()] + new_block + new_text[m.end():]
        for _, name, _, _ in candidates_to_retype:
            new_text = re.sub(
                rf'^extern\s+u8\s+{re.escape(name)}\s*\[\];$',
                f'extern AObjEvent32 **{name}[];',
                new_text, count=1, flags=re.M,
            )

    if new_text != text:
        c_path.write_text(new_text)
    print(f'fid {fid} ({target_name}): retyped {n_pp} ** arrays')


if __name__ == '__main__':
    main(int(sys.argv[1]))
