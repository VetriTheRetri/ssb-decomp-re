#!/usr/bin/env python3
"""
For each `u32 X[N] = { … };` block in a relocData `.c` file, detect
trailing `0x00000000,` lines (zero padding) and split them off into
`PAD(n*4);` so the script proper ends at its final non-padding word.

Skip a block if any of its trailing-zero positions is referenced as a
chain pointer position (the position would actually be a chain slot
fixRelocChain rewrites — not real padding).

Usage:
    tools/splitTrailingZeroPad.py <fid> [--apply]
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


_HEAD_RE = re.compile(
    r"^(?P<lead>\s*u32\s+(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"\[(?P<size>\d+)\])\s*=\s*\{\s*$"
)
# A trailing pad word can be a raw `0x00…,` literal or the decoded
# form `aobjEvent32End(),` — both encode to 0x00000000.
_ZERO_RE = re.compile(
    r"^\s*(?:0x0+|aobjEvent32End\(\))\s*,\s*(?:/\*.*\*/)?\s*$"
)
_CLOSE_RE = re.compile(r"^\s*\};\s*$")


def resolve(arg):
    if arg.endswith(".c") and os.path.exists(arg):
        return os.path.abspath(arg)
    if arg.isdigit():
        fid = int(arg)
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_", fn)
            if m and int(m.group(1)) == fid and fn.endswith(".c"):
                return os.path.join(RELOC_DIR, fn)
    raise SystemExit(f"could not resolve '{arg}'")


def parse_reloc_ptr_offsets(reloc_path, sym):
    """Return set of byte offsets within `sym` that hold a chain pointer
    (per .reloc `intern`/`extern` ptr labels). These positions must not
    be split off as padding — they're chain slots."""
    if not os.path.exists(reloc_path):
        return set()
    out = set()
    sym_re = re.compile(rf"^(?:intern|extern)\s+{re.escape(sym)}(?:\+0x([0-9A-Fa-f]+))?\s+\S+")
    with open(reloc_path) as f:
        for ln in f:
            m = sym_re.match(ln.strip())
            if m:
                off = int(m.group(1), 16) if m.group(1) else 0
                out.add(off)
    return out


_SCRIPT_TERMINATOR_RE = re.compile(
    r"\baobjEvent32(End\b|EndRaw\b|SetAnim\b|Jump\b|JumpRaw\b|JumpCmd\b)"
)


def _looks_like_script(body_lines, lines):
    """Body holds aobjEvent32 macro calls — treat as a real script."""
    for idx in body_lines:
        if "aobjEvent32" in lines[idx]:
            return True
    return False


def _last_macro_is_terminator(body_lines, drop_count, lines):
    """After dropping the trailing `drop_count` zero/End rows, is the
    last remaining aobjEvent32 macro a script terminator?"""
    kept = body_lines[:len(body_lines) - drop_count]
    for idx in reversed(kept):
        if "aobjEvent32" in lines[idx]:
            return bool(_SCRIPT_TERMINATOR_RE.search(lines[idx]))
    return False


def process(c_path, apply_changes):
    reloc_path = c_path[:-2] + ".reloc"
    with open(c_path) as f:
        text = f.read()
    lines = text.split("\n")

    edits = []  # list of (head_idx, close_idx, sym, old_size, new_size, pad_bytes)
    i = 0
    while i < len(lines):
        m = _HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        sym = m.group("sym")
        size = int(m.group("size"))
        # Find body + close
        j = i + 1
        body_indices = []
        while j < len(lines) and not _CLOSE_RE.match(lines[j]):
            if lines[j].strip():
                body_indices.append(j)
            j += 1
        if j >= len(lines):
            i += 1
            continue
        if len(body_indices) != size:
            # 1 line ≠ 1 word — skip (might be multi-line macro)
            i = j + 1
            continue
        # Count trailing-zero lines
        pad_count = 0
        for k in range(len(body_indices) - 1, -1, -1):
            ln = lines[body_indices[k]]
            if _ZERO_RE.match(ln):
                pad_count += 1
            else:
                break
        if pad_count == 0:
            i = j + 1
            continue
        # If this is an AObjEvent32 script, keep at least one trailing
        # End() so the script body itself ends with a terminator —
        # otherwise the runtime would fall through into the PAD bytes
        # (which works in practice but leaves the source looking
        # un-terminated).
        if _looks_like_script(body_indices, lines):
            if not _last_macro_is_terminator(body_indices, pad_count, lines):
                pad_count -= 1
                if pad_count <= 0:
                    i = j + 1
                    continue
        # The chunk that would become PAD covers byte offsets
        # [(size - pad_count) * 4 .. size * 4).
        new_size = size - pad_count
        # Check that no chain pointer slot lives in the padding region.
        chain_offsets = parse_reloc_ptr_offsets(reloc_path, sym)
        bad = [o for o in chain_offsets if o >= new_size * 4]
        if bad:
            i = j + 1
            continue
        edits.append((i, j, sym, size, new_size, pad_count * 4))
        i = j + 1

    if not edits:
        return [], False
    if apply_changes:
        # Build new-size map for extern patching.
        size_map = {sym: (old, new) for _h, _c, sym, old, new, _p in edits}
        for head_idx, close_idx, sym, old_size, new_size, pad_bytes in reversed(edits):
            # Replace head's [N] → [new_size]
            lines[head_idx] = lines[head_idx].replace(
                f"{sym}[{old_size}]", f"{sym}[{new_size}]", 1
            )
            drop = old_size - new_size
            body_idxs = [k for k in range(head_idx + 1, close_idx)
                         if lines[k].strip()]
            for k in body_idxs[-drop:]:
                lines[k] = None  # mark for removal
            lines.insert(close_idx + 1, f"PAD({pad_bytes});")
        # Patch matching `extern u32 <sym>[N];` forward decls.
        extern_re = re.compile(
            r"^(?P<lead>\s*extern\s+u32\s+)"
            r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)"
            r"\s*\[(?P<size>\d+)\]\s*;\s*$"
        )
        for k, ln in enumerate(lines):
            if ln is None:
                continue
            em = extern_re.match(ln)
            if em and em.group("sym") in size_map:
                _old, new_n = size_map[em.group("sym")]
                lines[k] = f"{em.group('lead')}{em.group('sym')}[{new_n}];"
        lines = [ln for ln in lines if ln is not None]
        with open(c_path, "w") as f:
            f.write("\n".join(lines))
    return edits, apply_changes


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="+", help="fid(s) or .c path(s)")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    args = ap.parse_args()

    total = 0
    for tgt in args.targets:
        path = resolve(tgt)
        edits, applied = process(path, args.apply)
        rel = os.path.relpath(path, PROJECT_DIR)
        if not edits:
            print(f"{rel}: nothing to do")
            continue
        action = "rewrote" if applied else "would rewrite"
        print(f"{rel}: {action} {len(edits)} blocks")
        for head_idx, close_idx, sym, old_size, new_size, pad_bytes in edits:
            print(f"  L{head_idx+1}  {sym}  [{old_size}] → [{new_size}] + PAD({pad_bytes})")
        total += len(edits)
    if args.apply and total:
        print(f"\n--> {total} trailing-pad splits applied. Verify byte-identity.")


if __name__ == "__main__":
    main()
