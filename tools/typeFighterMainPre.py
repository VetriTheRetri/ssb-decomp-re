#!/usr/bin/env python3
"""
Break a fighter Main.c file's monolithic `u32 d<Name>_pre[N]` block into
named sub-blocks keyed off the FTAttributes pointer fields (animlock,
setup_parts, hiddenparts, modelparts_container, textureparts_container,
commonparts_container, thrown_status, sprites, skeleton), plus a leading
array of pre-resolved file handles.

The split boundaries come from the intern-chain entries in the companion
`.reloc` file, which already record where each `FTAttributes` pointer lands
inside `_pre`. The tool:

1. Parses `d<Name>Main_attr+0xA -> d<Name>Main_pre+0xB` intern entries
   and maps each attr offset to a known FTAttributes field name.
2. Collects the resulting offsets + known sub-block sizes (FTHiddenPart=16,
   FTCommonPart=16, FTTexturePart=3→4, FTThrownStatus=8, ...) and walks
   the `_pre` range splitting at each named offset.
3. Rewrites the `.c` to declare each sub-block as its own typed array.
4. Rewrites the companion `.reloc` to reference the new symbols.

This is a pilot — it currently hard-codes FoxMain's layout and emits a
diagnostic report for other Main files so we can see which assumptions
carry over.
"""

import argparse
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")

# FTAttributes pointer-field offsets within the struct (computed from
# the struct declaration in src/ft/fttypes.h; `unused_0x2CC` pins the
# cluster).
ATTR_FIELD_OFFSETS = {
    0x29C: "setup_parts",
    0x2A0: "animlock",
    0x2D0: "hiddenparts",
    0x2D4: "commonparts_container",
    0x324: "translate_scales",
    0x328: "modelparts_container",
    0x32C: "accesspart",
    0x330: "textureparts_container",
    0x338: "thrown_status",
    0x340: "sprites",
    0x344: "skeleton",
    # shield_anim_joints[0..7] at 0x2D8..0x2F4 — extern (into ShieldPose
    # file), not an intern into _pre.
    # dobj_lookup at 0x2D8 overlaps with shield_anim_joints[0] — depends on
    # char; treat as "other" / extern if seen.
}


INTERN_RE = re.compile(
    r"^intern\s+(\S+)\s+(\S+)(?:\s*#.*)?$",
    re.MULTILINE,
)
LABEL_RE = re.compile(r"^(d\w+?)_(attr|pre)(?:\+0x([0-9A-Fa-f]+))?$")


def parse_reloc(reloc_path):
    """Return (attr_to_pre: {attr_offset: pre_offset},
               internal: [(ptr_pre, target_pre)])."""
    attr_to_pre = {}
    internal = []
    with open(reloc_path) as f:
        text = f.read()
    for m in INTERN_RE.finditer(text):
        ptr, tgt = m.group(1), m.group(2)
        mp = LABEL_RE.match(ptr)
        mt = LABEL_RE.match(tgt)
        if not mp or not mt:
            continue
        ptr_kind = mp.group(2)
        ptr_off = int(mp.group(3), 16) if mp.group(3) else 0
        tgt_kind = mt.group(2)
        tgt_off = int(mt.group(3), 16) if mt.group(3) else 0
        if ptr_kind == "attr" and tgt_kind == "pre":
            attr_to_pre[ptr_off] = tgt_off
        elif ptr_kind == "pre" and tgt_kind == "pre":
            internal.append((ptr_off, tgt_off))
    return attr_to_pre, internal


def categorize_pre(attr_to_pre, pre_size):
    """Map attr offsets to FTAttributes field names and return a sorted
    list of (offset, field_name) covering as much of `_pre` as possible.

    Also inserts known-shape sub-arrays (e.g. the FTModelPart[] that a
    modelparts_container points at via an intern chain) — but only if
    they're observed by the caller via `internal_links`."""
    named = {}
    for attr_off, pre_off in attr_to_pre.items():
        field = ATTR_FIELD_OFFSETS.get(attr_off)
        if field:
            named[pre_off] = field
    return dict(sorted(named.items()))


def find_main_files():
    return sorted([
        os.path.join(RELOC_DIR, fn)
        for fn in os.listdir(RELOC_DIR)
        if fn.endswith("Main.c") and re.match(r"^\d+_", fn)
    ])


def fighter_name(c_path):
    m = re.match(r"^\d+_(\w+?)Main\.c$", os.path.basename(c_path))
    return m.group(1) if m else None


def report(c_path):
    base = os.path.splitext(c_path)[0]
    reloc_path = base + ".reloc"
    if not os.path.exists(reloc_path):
        return None
    attr_to_pre, internal = parse_reloc(reloc_path)
    named = categorize_pre(attr_to_pre, 0)
    # Read pre_size from the .c declaration
    with open(c_path) as f:
        txt = f.read()
    m = re.search(r"u32 d\w+?Main_pre\[(\d+)\]", txt)
    pre_words = int(m.group(1)) if m else 0
    pre_size = pre_words * 4
    name = fighter_name(c_path)
    print(f"{name}Main ({os.path.basename(c_path)}): _pre = {pre_words} words / 0x{pre_size:X} B")
    print(f"  attr->pre intern entries: {len(attr_to_pre)}, internal: {len(internal)}")
    if named:
        print(f"  named offsets (from FTAttributes pointer fields):")
        prev_off = None
        for off in sorted(named):
            delta = f"  +0x{off - prev_off:X}" if prev_off is not None else ""
            print(f"    pre+0x{off:03X}  <- {named[off]}{delta}")
            prev_off = off
    unresolved = {off: name for off, name in attr_to_pre.items() if off not in ATTR_FIELD_OFFSETS}
    if unresolved:
        print(f"  unmapped attr offsets (not in ATTR_FIELD_OFFSETS table):")
        for off, target in sorted(unresolved.items()):
            print(f"    attr+0x{off:03X} -> pre+0x{target:03X}")
    return named


def split_pre(c_path):
    """Split `u32 d<Name>Main_pre[N]` into named sub-blocks at each
    FTAttributes-pointer target offset (plus any internal-link targets
    that lie between the named ones). Rewrites the .c and .reloc in
    place. Preserves bytes exactly — every sub-block stays `u32 X[N]`
    with the original hex values; a follow-up pass can upgrade to
    typed structs (FTHiddenPart, FTCommonPartContainer, ...).
    """
    base = os.path.splitext(c_path)[0]
    reloc_path = base + ".reloc"
    if not os.path.exists(reloc_path):
        raise SystemExit(f"missing {reloc_path}")
    name = fighter_name(c_path)
    pre_sym = f"d{name}Main_pre"

    attr_to_pre, internal = parse_reloc(reloc_path)
    named = categorize_pre(attr_to_pre, 0)

    # Add internal-chain targets as sub-block boundaries too.
    for _ptr, tgt in internal:
        if tgt not in named:
            named[tgt] = f"sub_0x{tgt:03X}"
    named = dict(sorted(named.items()))

    with open(c_path) as f:
        text = f.read()

    decl_re = re.compile(
        rf"u32 {re.escape(pre_sym)}\[(\d+)\] = \{{(.*?)\n\}};",
        re.DOTALL,
    )
    m = decl_re.search(text)
    if not m:
        print(f"{os.path.basename(c_path)}: no {pre_sym} declaration (already split?) — skipping")
        return
    pre_words = int(m.group(1))
    body = m.group(2)

    # Each entry in `body` is one u32 line: "\n\t0xXXXXXXXX, [/* comment */]".
    # Split into per-word fragments so we can slice them by word index.
    word_re = re.compile(r"^\s*(0x[0-9A-Fa-f]+),.*$", re.MULTILINE)
    word_lines = [m.group(0) for m in word_re.finditer(body)]
    if len(word_lines) != pre_words:
        raise SystemExit(f"word-line count {len(word_lines)} != declared {pre_words}")

    # Add a leading 0 boundary for the file-handles block.
    boundaries = [(0, "file_handles")] + [(off, lbl) for off, lbl in named.items()]
    pre_bytes = pre_words * 4
    # Build sub-blocks.
    decls = []
    reloc_renames = {}  # old label -> new label (for .reloc rewrite)
    for i, (off, label) in enumerate(boundaries):
        if i + 1 < len(boundaries):
            next_off = boundaries[i + 1][0]
        else:
            next_off = pre_bytes
        n_words = (next_off - off) // 4
        if n_words <= 0:
            continue
        w_start = off // 4
        w_end = w_start + n_words
        sub_body = "\n".join(word_lines[w_start:w_end])
        sub_sym = f"d{name}Main_{label}"
        decls.append(
            f"/* @ 0x{off:04X}, {n_words * 4} bytes: "
            f"FTAttributes.{label} target (was {pre_sym}+0x{off:X}) */\n"
            f"u32 {sub_sym}[{n_words}] = {{\n{sub_body}\n}};"
        )
        # Any intra-block offset keeps the old +delta.
        reloc_renames[(pre_sym, off)] = sub_sym

    new_decl = "\n\n".join(decls)
    new_text = text[:m.start()] + new_decl + text[m.end():]

    # Rewrite .reloc: every `d<Name>Main_pre+0xN` -> pick the sub-block
    # with the greatest offset <= N; emit `<new_sym>+0x(N - sub_off)`.
    with open(reloc_path) as f:
        rel = f.read()
    sub_bounds = sorted(reloc_renames.keys())  # list of (pre_sym, off)
    import bisect
    sub_offs = [off for (_, off) in sub_bounds]

    label_re = re.compile(rf"^{re.escape(pre_sym)}(?:\+0x([0-9A-Fa-f]+))?$")

    def resolve_label(label):
        mm = label_re.match(label)
        if not mm:
            return label
        off = int(mm.group(1), 16) if mm.group(1) else 0
        idx = bisect.bisect_right(sub_offs, off) - 1
        sub_off = sub_offs[idx]
        sub_sym = reloc_renames[(pre_sym, sub_off)]
        delta = off - sub_off
        return f"{sub_sym}" if delta == 0 else f"{sub_sym}+0x{delta:X}"

    def repl_line(line):
        line = line.rstrip()
        if line.startswith("#") or not line:
            return line
        parts = line.split()
        if len(parts) < 3:
            return line
        kind, ptr, tgt, *rest = parts
        ptr = resolve_label(ptr)
        tgt = resolve_label(tgt)
        rest_s = (" " + " ".join(rest)) if rest else ""
        return f"{kind} {ptr} {tgt}{rest_s}"

    new_rel = "\n".join(repl_line(ln) for ln in rel.splitlines()) + "\n"

    with open(c_path, "w") as f:
        f.write(new_text)
    with open(reloc_path, "w") as f:
        f.write(new_rel)
    print(f"{os.path.basename(c_path)}: split _pre into {len(boundaries)} sub-blocks")


def name_pre_root(pre_sym):
    m = re.match(r"^(d\w+?)Main_pre$", pre_sym)
    return m.group(1) if m else pre_sym


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--all", action="store_true",
                    help="Report on every Main.c file")
    ap.add_argument("--split", action="store_true",
                    help="Apply the split (rewrite .c and .reloc)")
    ap.add_argument("files", nargs="*")
    args = ap.parse_args()
    if args.all:
        files = find_main_files()
    else:
        files = args.files
    if not files:
        ap.error("pass files or --all")
    for f in files:
        if args.split:
            split_pre(f)
        else:
            report(f)
            print()


if __name__ == "__main__":
    main()
