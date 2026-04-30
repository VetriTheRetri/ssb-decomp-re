#!/usr/bin/env python3
"""
Decode raw u32 hex arrays inside `#if defined(REGION_JP)` guards in
MainMotion (and any other) relocData .c file into ftMotionCommand*
macros, mirroring the form already used on the US side. Then, for
each guard pair where the JP array decodes element-wise to the same
sequence of macros as the US side, the guard is removed and the
shared form is kept.

Walking strategy: standard ftMotionCommand stream — opcode in top 6
bits, word_count from the OPCODE_WORD_COUNT table (imported from
promoteMotionFiles). When the running word at the head of a command
has an invalid opcode payload (e.g. opcode 0 with non-zero payload
bits — `End` always has payload 0) or a multi-word command would
overflow the array, the tool emits the word as a raw hex literal
and steps a single word forward, then resumes decoding. This means
opaque leading bytes (FTThrowHitDesc data, undocumented pre-script
prologues) stay as hex while the bulk of recognisable command
sequences become readable macros.

Bytes preserved exactly — fixRelocChain still patches all chain
words at link time using the .reloc / .jp.reloc; the C source just
needs to evaluate to the same u32s.

Usage:
    tools/decodeJpMotionGuards.py <fid> [<fid> …]
    tools/decodeJpMotionGuards.py --all
"""

import argparse
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import promoteMotionFiles as pmf
from replaceFGMRegionGuards import parse_enum as parse_fgm_enum

# Region-aware FGM enum tables (us_map / jp_map keyed by ordinal → name).
_FGM_US, _FGM_JP = parse_fgm_enum()

# Macros whose payload is a region-aware FGM ordinal — substitute the
# matching `nSYAudioFGM*` enum name in JP-side decodes when the ordinal
# resolves; falls back to the raw integer otherwise.
_FGM_MACROS = {
    "ftMotionPlayFGM",
    "ftMotionCommandPlayFGMStoreInfo",
    "ftMotionCommandPlaySmashVoice",
    "ftMotionPlayVoice",
    "ftMotionPlayInterruptableVoice",
    "ftMotionCommandPlayLoopSFXStoreInfo",
    "ftMotionCommandStopLoopSFX",
}

_FGM_INVOC_RE = re.compile(r"^(\w+)\((-?\d+)\)$")


def substitute_fgm_enum(macro_str):
    """If `macro_str` is `<FGM_macro>(<int>)` and the int resolves to a
    JP-side enum entry, rewrite as `<FGM_macro>(<enum_name>)`."""
    m = _FGM_INVOC_RE.match(macro_str)
    if not m:
        return macro_str
    name, val_str = m.group(1), m.group(2)
    if name not in _FGM_MACROS:
        return macro_str
    val = int(val_str)
    enum_name = _FGM_JP.get(val)
    if enum_name is None:
        return macro_str
    return f"{name}({enum_name})"


# ---- macro decoding ----------------------------------------------------

def decode_command(words, pos, jp_intern_map, prefix):
    """Decode one ftMotionCommand starting at `pos` in the int list.
    Returns (lines, advance) where `lines` is a list of macro/hex
    strings (one per output line) and `advance` is the number of
    consumed words."""
    w = words[pos]
    opc = (w >> 26) & 0x3F
    payload = w & 0x03FFFFFF
    wc = pmf.OPCODE_WORD_COUNT.get(opc)

    if wc is None:
        return [f"\t0x{w:08X},  /* opc={opc} unrecognised */"], 1

    if pos + wc > len(words):
        return [f"\t0x{w:08X},  /* opc={opc} truncated */"], 1

    # 1-word commands
    if wc == 1:
        # End with non-zero payload — not actually an End. Emit as hex.
        if opc == pmf.EVT_End and payload != 0:
            return [f"\t0x{w:08X},"], 1
        macro = pmf.decode_single_word_macro(w)
        if macro is None:
            return [f"\t0x{w:08X},"], 1
        macro = substitute_fgm_enum(macro)
        return [f"\t{macro},"], 1

    # Multi-word: decode via promoteMotionFiles' helper. We don't pass an
    # intern_map — the chain value's target word offset alone can't tell
    # us whether it's intra-file or extern, so the helper falls back to
    # `<macro>(0xCHAINHEX)` form for pointer-bearing commands. fixRelocChain
    # rewrites the byte at link time using `.reloc` / `.jp.reloc` info.
    chunk = b"".join(struct.pack(">I", words[pos + j]) for j in range(wc))
    try:
        macro_lines = pmf.decode_multi_word_macro(
            chunk, 0, opc, {}, {}, prefix
        )
    except Exception:
        return [f"\t0x{w:08X},  /* opc={opc} multi-decode error */"], 1

    if not macro_lines:
        return [f"\t0x{w:08X},  /* opc={opc} empty multi-decode */"], 1

    # Each line is a macro string ending with `,` from promoteMotionFiles.
    # Apply FGM enum substitution to the leading macro of each line.
    out = []
    for ln in macro_lines:
        m_inv = re.match(r"^(\w+)\((\S+)\),?$", ln.strip())
        if m_inv and m_inv.group(1) in _FGM_MACROS:
            inner = ln.strip().rstrip(",")
            ln = substitute_fgm_enum(inner) + ","
        out.append("\t" + ln)
    return out, wc


def decode_jp_array(words, jp_intern_map, prefix):
    """Walk the entire u32 array and emit decoded body lines, also tracking
    the per-line word offset (from the array start). Returns
    (lines, line_word_offsets) — `line_word_offsets[i]` is the word offset
    at which `lines[i]` starts."""
    out_lines = []
    line_word_offsets = []
    pos = 0
    while pos < len(words):
        lines, adv = decode_command(words, pos, jp_intern_map, prefix)
        for ln in lines:
            line_word_offsets.append(pos)
            out_lines.append(ln)
        pos += adv
    return out_lines, line_word_offsets


def split_on_end_markers(lines, line_word_offsets, base_word_off, sym):
    """Emit one or more `u32 dXxx_0xNNNN[] = { … };` declarations, splitting
    after every `ftMotionCommandEnd(),` line whose word position lies before
    the array's last decoded line. The first declaration keeps the original
    symbol; subsequent ones are named `<base_sym_root>_0x<absolute_off>`,
    where the offset is in bytes from the file start."""
    end_re = re.compile(r"\bftMotionCommandEnd\(\)\s*,\s*$")
    # Find end-marker line indices (excluding any final End that's the array's
    # last meaningful line — that's the natural terminator for the original
    # symbol).
    end_idxs = [i for i, ln in enumerate(lines) if end_re.search(ln)]
    if not end_idxs:
        return [(sym, lines)]

    # If the very last line is an End, treat it as the original symbol's
    # natural end and split only on the earlier Ends.
    last_end_is_terminator = (end_idxs[-1] == len(lines) - 1)
    split_after = end_idxs[:-1] if last_end_is_terminator else end_idxs

    if not split_after:
        return [(sym, lines)]

    # Derive a "name root" by stripping any trailing `_0xNNNN` so we can
    # append a new offset suffix per sub-block.
    root_match = re.match(r"^(d\w+?)(?:_0x[0-9A-Fa-f]+)?$", sym)
    name_root = root_match.group(1) if root_match else sym

    blocks = []
    cursor = 0
    for split_at in split_after + [len(lines) - 1]:
        block_lines = lines[cursor:split_at + 1]
        if cursor == 0:
            blocks.append((sym, block_lines))
        else:
            sub_word_off = line_word_offsets[cursor]
            sub_byte_off = base_word_off * 4 + sub_word_off * 4
            sub_sym = f"{name_root}_0x{sub_byte_off:04X}"
            blocks.append((sub_sym, block_lines))
        cursor = split_at + 1
    return blocks


# ---- source-file rewriting ---------------------------------------------

GUARD_RE = re.compile(
    r"^#if defined\(REGION_JP\)\n"
    r"(u32 (d\w+)\[\] = \{\n)"
    r"((?:\t0x[0-9A-Fa-f]+,?\n)+)"
    r"\};\n"
    r"#else\n"
    r"u32 \2\[\] = \{\n"
    r"((?:.*\n)*?)"
    r"\};\n"
    r"#endif",
    re.MULTILINE,
)


def parse_intern_map(reloc_path, sym_to_word_offset, target_sym):
    """Parse a `.reloc` file and return a dict mapping the (in-array
    word offset) of any pointer-bearing slot of `target_sym` to its
    target offset (also a word offset). promoteMotionFiles uses
    `intern_map` keyed by absolute word offsets in the binary; here we
    key by offsets relative to the array's start (which is what the
    decoder passes via `pos` adjusted)."""
    out = {}
    if not os.path.exists(reloc_path):
        return out
    sym_off = sym_to_word_offset.get(target_sym)
    if sym_off is None:
        return out
    with open(reloc_path) as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            parts = s.split()
            if len(parts) != 3 or parts[0] != "intern":
                continue
            m_p = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
            m_t = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[2])
            if not m_p or not m_t:
                continue
            if m_p.group(1) != target_sym:
                continue
            ptr_word_off = (int(m_p.group(2), 16) if m_p.group(2) else 0) // 4
            tgt_sym = m_t.group(1)
            tgt_off = int(m_t.group(2), 16) if m_t.group(2) else 0
            tgt_word_off = (sym_to_word_offset.get(tgt_sym, 0) + tgt_off) // 4
            out.setdefault(ptr_word_off - 1, {})[ptr_word_off] = tgt_word_off
    return out


def substitute_fgm_in_jp_guards(text):
    """Walk every `#if defined(REGION_JP) … #else` block and substitute
    raw FGM ordinals in already-decoded `ftMotion*` macro lines with
    JP-side enum names from `gmFGMVoiceID`. Idempotent — operates on
    macro invocations only, leaves hex literals alone."""
    out = []
    i = 0
    in_jp = False
    for line in text.split("\n"):
        s = line.strip()
        if s == "#if defined(REGION_JP)":
            in_jp = True
            out.append(line)
            continue
        if s == "#else" or s == "#endif":
            in_jp = False
            out.append(line)
            continue
        if in_jp:
            # Try to substitute FGM enum on `\tftMotion*(N),` lines.
            m = re.match(r"^(\s*)(\w+)\((-?\d+)\)(,?)(\s*(?:/\*.*\*/)?\s*)$", line)
            if m:
                indent, name, val, trailing, suffix = m.groups()
                if name in _FGM_MACROS:
                    val_int = int(val)
                    enum_name = _FGM_JP.get(val_int)
                    if enum_name is not None:
                        line = f"{indent}{name}({enum_name}){trailing}{suffix}"
        out.append(line)
    return "\n".join(out)


def process_file(src_path):
    text = open(src_path).read()
    text = substitute_fgm_in_jp_guards(text)
    base = os.path.basename(src_path).replace(".c", "")
    short = re.sub(r"^\d+_", "", base)
    prefix = "d" + short

    n_decoded = 0
    n_collapsed = 0

    def repl(m):
        nonlocal n_decoded, n_collapsed
        decl_line = m.group(1)
        sym = m.group(2)
        hex_body = m.group(3)
        else_body = m.group(4)

        # Parse hex words
        words = []
        for ln in hex_body.split("\n"):
            mm = re.search(r"0x([0-9A-Fa-f]+)", ln)
            if mm:
                words.append(int(mm.group(1), 16))

        # Decode (FGM enum substitution applied per-line)
        decoded_lines, line_word_offs = decode_jp_array(words, {}, prefix)

        # Recover the array's base offset (from the symbol name, e.g.
        # `dKirbyMainMotion_0x1000` → 0x1000 word_off=0x400).
        base_byte_off = 0
        m_off = re.search(r"_0x([0-9A-Fa-f]+)$", sym)
        if m_off:
            base_byte_off = int(m_off.group(1), 16)

        # Split on End() markers — each becomes its own array declaration.
        sub_blocks = split_on_end_markers(
            decoded_lines, line_word_offs, base_byte_off // 4, sym)

        # Compare with US (else_body) line by line, after stripping
        # whitespace. If identical (after macro normalisation), drop guard.
        def normalize(body):
            out = []
            for ln in body.split("\n"):
                s = ln.strip()
                if not s or s.endswith("{") or s == "};":
                    continue
                out.append(s)
            return out

        us_lines = normalize(else_body)
        jp_lines = normalize("\n".join(decoded_lines))

        if jp_lines == us_lines and len(jp_lines) > 0:
            # Identical — drop the guard, keep just the US declaration
            n_collapsed += 1
            return f"{decl_line}{else_body}}};"

        n_decoded += 1
        # Build the JP-side body. When there are multiple sub-blocks (from
        # End() splitting), emit them as separate `u32 X[] = { … };`
        # declarations stacked in the same #if branch.
        jp_decls = []
        for sub_sym, sub_lines in sub_blocks:
            body_text = "\n".join(sub_lines) + "\n"
            jp_decls.append(f"u32 {sub_sym}[] = {{\n{body_text}}};")
        jp_block = "\n".join(jp_decls)
        return (
            "#if defined(REGION_JP)\n"
            f"{jp_block}\n"
            "#else\n"
            f"u32 {sym}[] = {{\n{else_body}}};\n"
            "#endif"
        )

    new_text = GUARD_RE.sub(repl, text)
    if new_text == text:
        return 0, 0
    with open(src_path, "w") as f:
        f.write(new_text)
    return n_decoded, n_collapsed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()
    if args.all:
        fids = []
        for fn in sorted(os.listdir(RELOC_DIR)):
            m = re.match(r"^(\d+)_\w+\.c$", fn)
            if m:
                fids.append(int(m.group(1)))
    else:
        fids = args.fids
    if not fids:
        ap.error("pass fids or --all")

    total_dec = 0
    total_col = 0
    for fid in fids:
        for fn in os.listdir(RELOC_DIR):
            m = re.match(rf"^{fid}_(\w+)\.c$", fn)
            if m:
                d, c = process_file(os.path.join(RELOC_DIR, fn))
                if d or c:
                    print(f"  fid {fid} ({m.group(1)}): {d} decoded, {c} collapsed")
                total_dec += d
                total_col += c
                break
    print(f"\nTotal: {total_dec} guards decoded, {total_col} guards collapsed")


if __name__ == "__main__":
    main()
