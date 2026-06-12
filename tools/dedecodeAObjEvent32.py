#!/usr/bin/env python3
"""
De-decode `aobjEvent32*()` macro calls back to raw `0xNNNNNNNN,` u32
literals inside relocData `.c` files. Useful when a u32 array was
mis-identified by the auto-typer as an AObjEvent32 script but the
underlying bytes aren't a script (e.g. lots of `aobjEvent32EndRaw(...)`
calls and raw floats interleaved with chain pointer expressions).

Byte-identical: every macro expands to a deterministic u32, which we
write back as a hex literal. Chain-pointer expressions (`(u32)dXxx`)
and other non-macro content are left untouched.

Usage:
    tools/dedecodeAObjEvent32.py <fid> [--threshold N] [--apply] [--all]

By default the tool processes only u32 array decls whose body holds at
least `--threshold` (default 3) `aobjEvent32End()` calls — those are
almost certainly misidentified blocks. Pass `--all` to process every
u32-typed array that has any aobjEvent32 macros (use with care: only
for blocks you've already confirmed aren't real scripts).

Without `--apply`, prints a dry-run report of what would change.
"""

import argparse
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from aobjflags import parse_flags_expr

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


# --- Opcode encoding tables ------------------------------------------------
# Mirrors the macros in include/sys/objdef.h. Each entry is
# (opcode, args_layout) where args_layout describes how the macro args
# map to (flags, payload).
#
# Most macros take (flags_mask, payload) directly. A few exceptions are
# called out below.
OPCODES = {
    "aobjEvent32End":             (0x00, "noargs"),
    "aobjEvent32EndRaw":          (0x00, "flags_payload"),
    "aobjEvent32Jump":            (0x01, "noargs"),       # `Jump(addr)` → 1 word + addr word
    "aobjEvent32JumpRaw":         (0x01, "flags_payload"),
    "aobjEvent32JumpCmd":         (0x01, "flags_payload"),
    "aobjEvent32Wait":            (0x02, "payload"),
    "aobjEvent32WaitRaw":         (0x02, "flags_payload"),
    "aobjEvent32SetValBlock":     (0x03, "flags_payload"),
    "aobjEvent32SetVal":          (0x04, "flags_payload"),
    "aobjEvent32SetValRateBlock": (0x05, "flags_payload"),
    "aobjEvent32SetValRate":      (0x06, "flags_payload"),
    "aobjEvent32SetTargetRate":   (0x07, "flags_payload"),
    "aobjEvent32SetVal0RateBlock": (0x08, "flags_payload"),
    "aobjEvent32SetVal0Rate":     (0x09, "flags_payload"),
    "aobjEvent32SetValAfterBlock": (0x0A, "flags_payload"),
    "aobjEvent32SetValAfter":     (0x0B, "flags_payload"),
    "aobjEvent32Cmd12":           (0x0C, "flags_payload"),
    "aobjEvent32SetInterp":       (0x0D, "interp"),       # SetInterp(kind, flags) — args reversed
    "aobjEvent32SetAnim":         (0x0E, "flags_payload"),
    "aobjEvent32SetFlags":        (0x0F, "flags_payload"),
    "aobjEvent32Cmd16":           (0x10, "flags_payload"),
    "aobjEvent32Cmd17":           (0x11, "flags_payload"),
    "aobjEvent32SetExtValAfterBlock": (0x12, "flags_payload"),
    "aobjEvent32SetExtValAfter":  (0x13, "flags_payload"),
    "aobjEvent32SetExtValBlock":  (0x14, "flags_payload"),
    "aobjEvent32SetExtVal":       (0x15, "flags_payload"),
    "aobjEvent32Cmd22":           (0x16, "flags_payload"),
    "aobjEvent32Cmd23":           (0x17, "flags_payload"),
}


MACRO_CALL_RE = re.compile(
    r"\b(?P<name>aobjEvent32[A-Za-z0-9_]+)\s*\((?P<args>[^)]*)\)"
)


def _parse_int(s):
    # Handles plain integers plus symbolic AOBJ_*FLAG_* names and
    # `A | B` OR-expressions of them (tools/symbolizeAObjFlags.py output).
    return parse_flags_expr(s.strip())


def encode(name, args_str):
    """Return the u32 value the named macro encodes to. Raises if the
    macro name is unknown or args don't fit the expected shape."""
    if name not in OPCODES:
        raise ValueError(f"unknown macro: {name}")
    opcode, layout = OPCODES[name]
    args = [a.strip() for a in args_str.split(",")] if args_str.strip() else []
    if layout == "noargs":
        flags, payload = 0, 0
    elif layout == "payload":
        flags = 0
        payload = _parse_int(args[0]) if args else 0
    elif layout == "flags_payload":
        flags = _parse_int(args[0])
        payload = _parse_int(args[1])
    elif layout == "interp":
        # aobjEvent32SetInterp(kind, flags_mask) — runtime stores
        # kind in payload, flags_mask in flags.
        payload = _parse_int(args[0])
        flags = _parse_int(args[1])
    else:
        raise ValueError(f"unknown layout: {layout}")
    return ((opcode & 0x7F) << 25) | ((flags & 0x3FF) << 15) | (payload & 0x7FFF)


# --- Decl scanner ---------------------------------------------------------

DECL_HEAD_RE = re.compile(
    r"^\s*u32\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"\[(?P<size>[^\]]*)\]\s*=\s*\{"
)


def scan_decls(text):
    """Yield (name, start_idx, end_idx, body_lines_with_indices)."""
    lines = text.split("\n")
    i = 0
    while i < len(lines):
        m = DECL_HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        start = i
        i += 1
        body = []
        while i < len(lines):
            if re.match(r"^\s*\}+;\s*$", lines[i]):
                yield m.group("name"), start, i, body
                i += 1
                break
            body.append((i, lines[i]))
            i += 1
        else:
            # No close found
            i = start + 1


def count_ends(body):
    return sum(
        1 for _, ln in body
        if re.search(r"\baobjEvent32End\b|\baobjEvent32EndRaw\b", ln)
    )


def has_any_macro(body):
    return any("aobjEvent32" in ln for _, ln in body)


def dedecode_line(line):
    """Replace every aobjEvent32 macro call in `line` with its u32 hex
    encoding. Leave the rest of the line (e.g. trailing `,` and
    comments) intact. Indentation is preserved.

    Special-case multi-word macros:
      aobjEvent32Jump(addr)               → `0x02000000, (u32)(addr)`
      aobjEvent32JumpRaw(fl, pl, addr)    → `0xNNNNNNNN, (u32)(addr)`
    Both expand to TWO comma-separated u32 array elements per the
    macros in `include/sys/objdef.h`."""
    def repl(match):
        name = match.group("name")
        args = match.group("args")
        if name == "aobjEvent32Jump":
            # Single arg = address. The opcode word is always 0x02000000
            # (opcode 0x01, flags 0, payload 0). Address is preserved as
            # a cast expression so symbolic forms survive.
            addr = args.strip()
            return f"0x02000000, (u32)({addr})"
        if name == "aobjEvent32JumpRaw":
            parts = [a.strip() for a in args.split(",")]
            if len(parts) != 3:
                return match.group(0)
            fl, pl, addr = parts
            try:
                word = ((0x01 & 0x7F) << 25) | ((_parse_int(fl) & 0x3FF) << 15) | (_parse_int(pl) & 0x7FFF)
            except ValueError:
                return match.group(0)
            return f"0x{word:08X}, (u32)({addr})"
        try:
            value = encode(name, args)
        except (ValueError, IndexError):
            return match.group(0)  # leave untouched
        return f"0x{value:08X}"
    return MACRO_CALL_RE.sub(repl, line)


def process_file(path, threshold, all_mode, apply_changes, target_syms=None):
    """Return (changed_decls, lines_changed). When `apply_changes`,
    rewrites the file."""
    with open(path) as f:
        text = f.read()
    lines = text.split("\n")
    changed_decls = []
    total_changed = 0
    for name, start, end, body in scan_decls(text):
        end_count = count_ends(body)
        if not has_any_macro(body):
            continue
        if target_syms and name not in target_syms:
            continue
        if not target_syms and not all_mode and end_count < threshold:
            continue
        edits = []
        for ln_idx, ln_text in body:
            if "aobjEvent32" not in ln_text:
                continue
            new = dedecode_line(ln_text)
            if new != ln_text:
                edits.append((ln_idx, ln_text, new))
        if not edits:
            continue
        changed_decls.append((name, start + 1, end + 1, end_count, len(edits)))
        total_changed += len(edits)
        if apply_changes:
            for ln_idx, _, new in edits:
                lines[ln_idx] = new
    if apply_changes and changed_decls:
        with open(path, "w") as f:
            f.write("\n".join(lines))
    return changed_decls, total_changed


def resolve_path(fid_or_path):
    if fid_or_path.endswith(".c") and os.path.exists(fid_or_path):
        return os.path.abspath(fid_or_path)
    if fid_or_path.isdigit():
        fid = int(fid_or_path)
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_", fn)
            if m and int(m.group(1)) == fid and fn.endswith(".c"):
                return os.path.join(RELOC_DIR, fn)
        raise SystemExit(f"no .c file for fid {fid}")
    raise SystemExit(f"could not resolve '{fid_or_path}'")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="+", help="fid(s) or .c path(s)")
    ap.add_argument("--threshold", type=int, default=3,
                    help="minimum aobjEvent32End() count to process a decl (default 3)")
    ap.add_argument("--all", action="store_true",
                    help="process every u32 decl that contains any aobjEvent32 macro")
    ap.add_argument("--symbol", action="append", default=[],
                    help="process only this specific decl name (may be repeated)")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    args = ap.parse_args()

    grand_total = 0
    for tgt in args.targets:
        path = resolve_path(tgt)
        changed, total = process_file(path, args.threshold, args.all, args.apply,
                                       target_syms=set(args.symbol) if args.symbol else None)
        rel = os.path.relpath(path, PROJECT_DIR)
        if not changed:
            print(f"{rel}: nothing to do")
            continue
        action = "rewrote" if args.apply else "would rewrite"
        print(f"{rel}: {action} {total} macro calls across {len(changed)} decl(s)")
        for name, start, end, ends, n in changed:
            print(f"  L{start}-{end}  {name}  ({ends} End()s, {n} macro lines)")
        grand_total += total
    if not args.apply:
        print(f"\n[dry-run] would rewrite {grand_total} macro calls total")


if __name__ == "__main__":
    main()
