#!/usr/bin/env python3
"""
Replace raw byte offsets in ftdata.c's `FTMotionDesc dFT<X>MotionDescs[]`
arrays with the symbolic constants from include/ft/motiondesc_offsets.h.

Each fighter's array references scripts in a particular MainMotion file.
The fighter -> MainMotion-prefix mapping is derived by reading each
`FTData dFT<X>Data` initializer in ftdata.c: the second field is the
file_mainmotion_id (the MainMotion file the fighter loads), and when that
is 0, the third field (file_submotion_id) is consulted instead. The
N-prefix and Giant Donkey fighters have no MainMotion file of their own,
so they reuse the corresponding base fighter's MainMotion as a submotion
file.

Fighters whose MainMotion file has not yet been promoted to a typed source
(i.e. its scripts aren't named in motiondesc_offsets.h) are skipped with a
warning.
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FTDATA_PATH = os.path.join(PROJECT_DIR, "src", "ft", "ftdata.c")
HEADER_PATH = os.path.join(PROJECT_DIR, "include", "ft", "motiondesc_offsets.h")


def load_offset_symbols():
    """Return {prefix: {byte_offset: symbol}}.

    prefix is the dXMainMotion identifier (e.g. "dMarioMainMotion"); the
    inner dict maps byte offset to the full symbol name.
    """
    out = {}
    with open(HEADER_PATH) as f:
        for line in f:
            m = re.match(r"#define\s+(d\w+MainMotion)_(\w+)\s+0x([0-9A-Fa-f]+)", line)
            if not m:
                continue
            prefix = m.group(1)
            sym = f"{prefix}_{m.group(2)}"
            byte_off = int(m.group(3), 16)
            out.setdefault(prefix, {})[byte_off] = sym
    return out


def parse_fighter_motion_files(text):
    """Read FTData initializers and return {fighter: (mainmotion_prefix, submotion_prefix)}.

    Each entry is a 2-tuple of symbol prefixes (or None when the slot is 0).
    For an FTMotionDesc entry whose flags include FTANIM_FLAG_SUBMOTION_SCRIPT
    the runtime indexes the *submotion* file pointer; otherwise it indexes
    the *mainmotion* file pointer. We need both so we can pick the right
    prefix per-entry. Many fighters with no MainMotion of their own (the
    N-prefix variants and GDonkey) only have a submotion file, so the
    mainmotion prefix is None and the submotion prefix is what gets used
    regardless.
    """
    result = {}
    for m in re.finditer(r"FTData dFT(\w+)Data\s*=\s*\{([^}]*)\};", text, re.DOTALL):
        name = m.group(1)
        body = m.group(2)
        fields = [x.strip() for x in body.split(",")]
        if len(fields) < 3:
            continue

        def field_name(field):
            fm = re.match(r"&ll(\w+)FileID", field)
            return fm.group(1) if fm else None

        mainmotion_name = field_name(fields[1])
        submotion_name = field_name(fields[2])
        mm_prefix = f"d{mainmotion_name}" if mainmotion_name else None
        sm_prefix = f"d{submotion_name}" if submotion_name else None
        if mm_prefix or sm_prefix:
            result[name] = (mm_prefix, sm_prefix)
    return result


def rewrite_fighter_block(body, mm_offsets, sm_offsets, max_delta=0x400):
    """Rewrite an FTMotionDesc array body, replacing raw hex offsets with
    symbolic forms. Each entry is matched as a whole — including its flag
    expression — so we can pick the mainmotion vs submotion prefix based on
    whether FTANIM_FLAG_SUBMOTION_SCRIPT appears in the flags.

    Returns (new_body, num_replacements).
    """

    def lookup(off_to_sym, off):
        if not off_to_sym:
            return None
        if off in off_to_sym:
            return off_to_sym[off]
        # Mid-script: find the largest known offset <= off and emit base+delta
        sorted_offsets = sorted(off_to_sym.keys())
        best = None
        for o in sorted_offsets:
            if o <= off:
                best = o
            else:
                break
        if best is None:
            return None
        delta = off - best
        if delta >= max_delta:
            return None
        return f"{off_to_sym[best]} + 0x{delta:X}"

    def sub_entry(em):
        sym_field = em.group(1)
        off_hex = em.group(2)
        flag_field = em.group(3)
        off = int(off_hex, 16)
        if off == 0x80000000:
            return em.group(0)
        use_submotion = "FTANIM_FLAG_SUBMOTION_SCRIPT" in flag_field
        chosen = sm_offsets if use_submotion else mm_offsets
        # Fall back to the other table if the first lookup fails — happens
        # for fighters with only a submotion file (the N-prefix variants).
        replacement = lookup(chosen, off)
        if replacement is None:
            other = mm_offsets if use_submotion else sm_offsets
            replacement = lookup(other, off)
        if replacement is None:
            return em.group(0)
        return f"{sym_field}{replacement}, {flag_field}"

    # Match `{ &symbol, 0xHEX, <flag-expression> }`. The flag expression
    # is usually FTANIM_FLAG_* but a handful of entries still use raw
    # joint-id bit hex (e.g. 0x10000000) — we accept either.
    entry_re = re.compile(
        r"(\{\s*&\w+,\s*)0x([0-9a-fA-F]+),\s*([^}]*?)(?=\s*\})",
    )
    new_body, n = entry_re.subn(sub_entry, body)
    return new_body, n


def main():
    with open(FTDATA_PATH) as f:
        text = f.read()

    fighter_to_prefix = parse_fighter_motion_files(text)
    offsets = load_offset_symbols()

    converted = []
    skipped = []

    # Find every FTMotionDesc array (dFT<X>MotionDescs, not Sub)
    array_re = re.compile(
        r"(FTMotionDesc dFT(\w+?)MotionDescs\[\]\s*=\s*\{)(.*?)(\};)",
        re.DOTALL,
    )

    def sub_array(am):
        head = am.group(1)
        fighter = am.group(2)
        body = am.group(3)
        tail = am.group(4)

        if fighter.endswith("Sub"):
            return am.group(0)  # SubMotionDescs are externs, never matched here

        pair = fighter_to_prefix.get(fighter)
        if not pair:
            skipped.append((fighter, "no motion-file mapping"))
            return am.group(0)

        mm_prefix, sm_prefix = pair
        mm_offsets = offsets.get(mm_prefix) if mm_prefix else None
        sm_offsets = offsets.get(sm_prefix) if sm_prefix else None
        if not mm_offsets and not sm_offsets:
            available = mm_prefix or sm_prefix or "?"
            skipped.append((fighter, f"{available} not in offset header"))
            return am.group(0)

        new_body, n = rewrite_fighter_block(body, mm_offsets, sm_offsets)
        if n:
            label = "+".join(p for p in (mm_prefix, sm_prefix) if p)
            converted.append((fighter, label, n))
        return head + new_body + tail

    new_text = array_re.sub(sub_array, text)
    with open(FTDATA_PATH, "w") as f:
        f.write(new_text)

    print("Converted:")
    for fighter, prefix, n in converted:
        print(f"  {fighter:12s} via {prefix:25s} {n:4d} replacements")

    if skipped:
        print()
        print("Skipped (MainMotion file not yet promoted to typed source):")
        for fighter, reason in skipped:
            print(f"  {fighter:12s} ({reason})")


if __name__ == "__main__":
    main()
