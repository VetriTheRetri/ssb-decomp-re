#!/usr/bin/env python3
"""
Retype `u8 X[N]` blocks in a fighter Model relocData file as either:

  Pass A — `u32 X[N/4]` AObjEvent32 anim scripts (bytes decode cleanly)
  Pass B — `AObjEvent32 *X[N/4]` pointer arrays (every non-NULL slot has a
           BOTH-versions reloc entry pointing to a now-typed AObjEvent32
           script or pointer-array)
  Pass C — `AObjEvent32 **X[N/4]` master arrays (every non-NULL slot has a
           BOTH-versions reloc entry pointing to a now-typed
           AObjEvent32 *X[] pointer-array)

JP-safety: every retype consults BOTH `<fid>.reloc` and `<fid>.jp.reloc`
when both exist. A slot is only treated as a chain pointer if both
versions agree on the target. This avoids producing JP byte mismatches
when JP has different palette/Tex offsets at the same byte position.

Usage: tools/retypeAObjEventBlocks.py <fid>
"""
from __future__ import annotations
import re
import struct
import sys
from pathlib import Path


def popcount(x):
    n = 0
    while x:
        n += x & 1
        x >>= 1
    return n


OPCODE_PAYLOAD = {
    0x00: lambda f, p: 0,
    0x01: lambda f, p: 1,
    0x02: lambda f, p: 0,
    0x03: lambda f, p: popcount(f),
    0x04: lambda f, p: popcount(f),
    0x05: lambda f, p: 2 * popcount(f),
    0x06: lambda f, p: 2 * popcount(f),
    0x07: lambda f, p: popcount(f),
    0x08: lambda f, p: popcount(f),
    0x09: lambda f, p: popcount(f),
    0x0A: lambda f, p: popcount(f),
    0x0B: lambda f, p: popcount(f),
    0x0C: lambda f, p: 0,
    0x0D: lambda f, p: 1,
    0x0E: lambda f, p: 1,
    0x0F: lambda f, p: 0,
    0x10: lambda f, p: 0,
    0x11: lambda f, p: popcount((f >> 4) & 0x3FF),
    0x12: lambda f, p: popcount(f),
    0x13: lambda f, p: popcount(f),
    0x14: lambda f, p: popcount(f),
    0x15: lambda f, p: popcount(f),
    0x16: lambda f, p: 0,
    0x17: lambda f, p: 0,
}


def decode_word(word):
    return ((word >> 25) & 0x7F, (word >> 15) & 0x3FF, word & 0x7FFF)


def looks_like_anim_script(words, chain_offsets):
    if not words:
        return False
    i = 0
    n = len(words)
    last_op = None
    while i < n:
        boff = i * 4
        if boff in chain_offsets:
            if i == 0:
                return False
            prev_op, _, _ = decode_word(words[i - 1])
            if prev_op not in (0x01, 0x0D, 0x0E):
                return False
            i += 1
            continue
        word = words[i]
        op, fl, pl = decode_word(word)
        if op > 0x17:
            return False
        if op == 0x00 and (fl != 0 or pl != 0):
            return False
        consumed = OPCODE_PAYLOAD[op](fl, pl)
        if i + 1 + consumed > n:
            return False
        last_op = op
        i += 1 + consumed
    return last_op in (0x00, 0x01, 0x0E, 0x0D)


def render_script(words, chain_targets):
    out = []
    i = 0
    n = len(words)
    while i < n:
        boff = i * 4
        if boff in chain_targets:
            out.append(f'\t(u32){chain_targets[boff]},')
            i += 1
            continue
        word = words[i]
        op, fl, pl = decode_word(word)
        if op == 0x00 and fl == 0 and pl == 0:
            out.append('\taobjEvent32End(),')
        elif op == 0x01:
            # Jump consumes 1 follow-up word (target pointer); emit it inline
            tgt_word_idx = i + 1
            tgt_word = words[tgt_word_idx] if tgt_word_idx < n else 0
            tgt_off = tgt_word_idx * 4
            if tgt_off in chain_targets:
                out.append(f'\taobjEvent32Jump({chain_targets[tgt_off]}),')
            else:
                out.append(f'\taobjEvent32Jump(0x{tgt_word:08X}),')
            # Skip past command + payload
            i += 2
            continue
        elif op == 0x02:
            out.append(f'\taobjEvent32Wait({pl}),')
        elif op == 0x0D:
            out.append(f'\taobjEvent32SetInterp({pl}, 0x{fl:03X}),')
        elif op == 0x0E:
            out.append(f'\taobjEvent32SetAnim(0x{fl:03X}, {pl}),')
        elif op == 0x0F:
            out.append(f'\taobjEvent32SetFlags(0x{fl:03X}, {pl}),')
        elif op in (0x0C, 0x10, 0x11, 0x16, 0x17):
            cmd = {0x0C: '12', 0x10: '16', 0x11: '17', 0x16: '22', 0x17: '23'}[op]
            out.append(f'\taobjEvent32Cmd{cmd}(0x{fl:03X}, {pl}),')
        else:
            macro = {
                0x03: 'SetValBlock', 0x04: 'SetVal',
                0x05: 'SetValRateBlock', 0x06: 'SetValRate',
                0x07: 'SetTargetRate',
                0x08: 'SetVal0RateBlock', 0x09: 'SetVal0Rate',
                0x0A: 'SetValAfterBlock', 0x0B: 'SetValAfter',
                0x12: 'SetExtValAfterBlock', 0x13: 'SetExtValAfter',
                0x14: 'SetExtValBlock', 0x15: 'SetExtVal',
            }[op]
            out.append(f'\taobjEvent32{macro}(0x{fl:03X}, {pl}),')
        consumed = OPCODE_PAYLOAD[op](fl, pl)
        i += 1
        for _ in range(consumed):
            if i >= n:
                break
            pw = words[i]
            if i * 4 in chain_targets:
                out.append(f'\t    (u32){chain_targets[i * 4]},')
            else:
                f = struct.unpack('>f', struct.pack('>I', pw))[0]
                out.append(f'\t    0x{pw:08X},  /* {f}f */')
            i += 1
    return '\n'.join(out)


def parse_reloc(reloc_text):
    out = {}
    for line in reloc_text.splitlines():
        m = re.match(r'^(intern|extern)\s+(\w+)(?:\+0x([0-9A-Fa-f]+))?\s+(\S+)', line)
        if m:
            base = m.group(2)
            off = int(m.group(3), 16) if m.group(3) else 0
            tgt = m.group(4)
            out.setdefault(base, {})[off] = tgt
    return out


def main(fid: int):
    src = Path('src/relocData')
    candidates = list(src.glob(f'{fid}_*.c'))
    candidates = [p for p in candidates if not p.name.endswith('.jp.c')]
    c_path = candidates[0]
    target_name = c_path.stem.split('_', 1)[1]
    text = c_path.read_text()

    us_reloc = c_path.with_suffix('.reloc').read_text()
    jp_path = c_path.with_suffix('.jp.reloc')
    jp_reloc = jp_path.read_text() if jp_path.exists() else ''
    us_chain = parse_reloc(us_reloc)
    jp_chain = parse_reloc(jp_reloc)

    def chain_for(sym):
        u = us_chain.get(sym, {})
        if not jp_chain:
            return u, dict(u)
        j = jp_chain.get(sym, {})
        agreed = {}
        for off in u:
            if off not in j:
                continue
            if u[off].split('+')[0] == j[off].split('+')[0]:
                agreed[off] = u[off]
        return u, agreed

    block_re = re.compile(
        r'^u8 (?P<name>d\w+)\[(?P<size>\d+)\] = \{\n'
        r'\t#include <(?P<inc>[^>]+)>\n'
        r'\};',
        re.M,
    )

    # Pass A: anim scripts
    n_anim = 0
    candidates_to_retype = []
    for m in block_re.finditer(text):
        name = m.group('name')
        size = int(m.group('size'))
        inc = m.group('inc')
        if size == 0 or size % 4 != 0 or size < 8:
            continue
        inc_path = Path('build/us/src/relocData') / inc
        if not inc_path.exists():
            continue
        bv = [int(t, 16) for t in re.findall(r'0x([0-9A-Fa-f]{2})',
                                              inc_path.read_text())][:size]
        if len(bv) < size:
            continue
        words = [struct.unpack('>I', bytes(bv[i:i+4]))[0]
                 for i in range(0, size, 4)]
        us_own, agreed = chain_for(name)
        if looks_like_anim_script(words, set(us_own.keys())):
            chain_targets = {}
            for off, t in us_own.items():
                if re.fullmatch(r'0x[0-9A-Fa-f]+', t):
                    chain_targets[off] = f'((u8*)0x{int(t, 16):X})'
                elif '+' in t:
                    bs, _, doff = t.partition('+')
                    chain_targets[off] = f'((u8*){bs} + {doff})'
                else:
                    chain_targets[off] = t
            body = render_script(words, chain_targets)
            n_words = size // 4
            new_block = f'u32 {name}[{n_words}] = {{\n{body}\n}};'
            candidates_to_retype.append((m, name, new_block))
            n_anim += 1

    new_text = text
    for m, name, new_block in reversed(candidates_to_retype):
        new_text = new_text[:m.start()] + new_block + new_text[m.end():]
    for _, name, _ in candidates_to_retype:
        new_text = re.sub(
            rf'^extern\s+u8\s+{re.escape(name)}\s*\[\];$',
            f'extern u32 {name}[];', new_text, count=1, flags=re.M,
        )
    text = new_text

    # Pass B: pointer arrays. Targets must be already-typed anim scripts.
    typed_anim = set()
    for m in re.finditer(r'^u32\s+(\w+)\s*\[\d+\]\s*=\s*\{\n((?:.+\n)+?)\};',
                         text, re.M):
        if 'aobjEvent32' in m.group(2):
            typed_anim.add(m.group(1))

    n_ptr = 0
    candidates_to_retype = []
    for m in block_re.finditer(text):
        name = m.group('name')
        size = int(m.group('size'))
        if size == 0 or size % 4 != 0 or size > 64:
            continue
        n_words = size // 4
        us_own, agreed = chain_for(name)
        if not agreed:
            continue
        inc = m.group('inc')
        inc_path = Path('build/us/src/relocData') / inc
        if not inc_path.exists():
            continue
        bv = [int(t, 16) for t in re.findall(r'0x([0-9A-Fa-f]{2})',
                                              inc_path.read_text())][:size]
        if len(bv) < size:
            continue
        words = [struct.unpack('>I', bytes(bv[i:i+4]))[0]
                 for i in range(0, size, 4)]
        good = True
        for j in range(n_words):
            slot_off = j * 4
            if slot_off in agreed:
                tbase = agreed[slot_off].split('+')[0]
                if tbase not in typed_anim:
                    good = False
                    break
            else:
                if words[j] != 0:
                    good = False
                    break
                if slot_off in us_own:
                    good = False
                    break
        if not good:
            continue
        entries = []
        for j in range(n_words):
            slot_off = j * 4
            if slot_off in agreed:
                t = agreed[slot_off]
                if '+' in t:
                    bs, _, off = t.partition('+')
                    entries.append(f'\t(AObjEvent32 *)((u8 *){bs} + {off}),')
                else:
                    entries.append(f'\t(AObjEvent32 *){t},')
            else:
                entries.append('\tNULL,')
        new_block = f'AObjEvent32 *{name}[{n_words}] = {{\n' + '\n'.join(entries) + '\n};'
        candidates_to_retype.append((m, name, new_block))
        n_ptr += 1

    new_text = text
    for m, name, new_block in reversed(candidates_to_retype):
        new_text = new_text[:m.start()] + new_block + new_text[m.end():]
    for _, name, _ in candidates_to_retype:
        new_text = re.sub(
            rf'^extern\s+u8\s+{re.escape(name)}\s*\[\];$',
            f'extern AObjEvent32 *{name}[];', new_text, count=1, flags=re.M,
        )
    text = new_text

    # Pass C: ** arrays. Targets must be already-typed AObjEvent32 *.
    typed_star = set()
    for m in re.finditer(r'^AObjEvent32\s*\*\s*(\w+)\s*\[', text, re.M):
        typed_star.add(m.group(1))

    n_pp = 0
    candidates_to_retype = []
    for m in block_re.finditer(text):
        name = m.group('name')
        size = int(m.group('size'))
        if size == 0 or size % 4 != 0 or size > 256:
            continue
        n_words = size // 4
        us_own, agreed = chain_for(name)
        if not agreed:
            continue
        inc = m.group('inc')
        inc_path = Path('build/us/src/relocData') / inc
        if not inc_path.exists():
            continue
        bv = [int(t, 16) for t in re.findall(r'0x([0-9A-Fa-f]{2})',
                                              inc_path.read_text())][:size]
        if len(bv) < size:
            continue
        words = [struct.unpack('>I', bytes(bv[i:i+4]))[0]
                 for i in range(0, size, 4)]
        good = True
        for j in range(n_words):
            slot_off = j * 4
            if slot_off in agreed:
                tbase = agreed[slot_off].split('+')[0]
                if tbase not in typed_star:
                    good = False
                    break
            else:
                if words[j] != 0:
                    good = False
                    break
                if slot_off in us_own:
                    good = False
                    break
        if not good:
            continue
        entries = []
        for j in range(n_words):
            slot_off = j * 4
            if slot_off in agreed:
                entries.append(f'\t(AObjEvent32 **){agreed[slot_off].split("+")[0]},')
            else:
                entries.append('\tNULL,')
        new_block = f'AObjEvent32 **{name}[{n_words}] = {{\n' + '\n'.join(entries) + '\n};'
        candidates_to_retype.append((m, name, new_block))
        n_pp += 1

    new_text = text
    for m, name, new_block in reversed(candidates_to_retype):
        new_text = new_text[:m.start()] + new_block + new_text[m.end():]
    for _, name, _ in candidates_to_retype:
        new_text = re.sub(
            rf'^extern\s+u8\s+{re.escape(name)}\s*\[\];$',
            f'extern AObjEvent32 **{name}[];', new_text, count=1, flags=re.M,
        )

    if new_text != c_path.read_text():
        c_path.write_text(new_text)
    print(f'fid {fid} ({target_name}): {n_anim} anim + {n_ptr} ptr-arrays '
          f'+ {n_pp} ** arrays')


if __name__ == '__main__':
    main(int(sys.argv[1]))
