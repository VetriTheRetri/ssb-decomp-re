#!/usr/bin/env python3
"""
Rewrite numeric track-flag masks in decoded `aobjEvent32*()` macro calls
as symbolic `AOBJ_*FLAG_*` OR-expressions (defined in src/sys/objdef.h),
and re-comment SetExtVal* payload words as the RGBA colors they are.

    aobjEvent32SetValAfterBlock(0x200, 0)     [material script]
        -> aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_PALETTEID, 0)
    aobjEvent32SetExtValAfterBlock(0x001, 1),
        0xFF0000FF,  /* -1.7014635547491816e+38f */
        -> aobjEvent32SetExtValAfterBlock(AOBJ_EXTFLAG_PRIMCOLOR, 1),
           0xFF0000FF,  /* RGBA(255, 0, 0, 255) */

Which name set applies to a SetVal* flags mask depends on the parser the
script runs under (joint / material / camera); see tools/aobjflags.py for
the classification heuristics. SetExt* masks are always material-color
names. Scripts whose context can't be inferred keep numeric SetVal* masks
(their SetExt* masks and RGBA comments are still rewritten).

Byte-identical by construction: every rewritten expression re-encodes to
the original integer (asserted per edit), and the macros fold at compile
time.

Usage:
    tools/symbolizeAObjFlags.py <fid|path> [...] [--dry]
    tools/symbolizeAObjFlags.py --all [--dry]
"""

import argparse
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from aobjflags import (
    SETVAL_FLAG_MACROS, SETEXT_FLAG_MACROS,
    classify_scripts, format_flags, parse_flags_expr, rgba_comment,
)

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

SCRIPT_DECL_RE = re.compile(
    r"^\s*u32\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*\[[^\]]*\]\s*=\s*\{\s*$"
)
CLOSE_RE = re.compile(r"^\s*\};\s*$")
MACRO_RE = re.compile(r"\b(?P<name>aobjEvent32[A-Za-z0-9_]+)\s*\((?P<args>[^)]*)\)")
# Payload word line: indented hex literal, optional trailing comment.
PAYLOAD_RE = re.compile(
    r"^(?P<head>\s*0x(?P<hex>[0-9A-Fa-f]{8})\s*,)\s*(?P<comment>/\*.*\*/)?\s*$"
)


def popcount(x):
    return bin(x).count("1")


def rewrite_macro_line(line, context):
    """Rewrite the flags arg of the (single) macro call on `line`.
    Returns (new_line, ext_payload_count): ext_payload_count > 0 when the
    macro opens a SetExt color-payload window of that many words."""
    m = MACRO_RE.search(line)
    if not m:
        return line, 0
    name = m.group("name")
    if name in SETEXT_FLAG_MACROS:
        flag_ctx = "ext"
    elif name in SETVAL_FLAG_MACROS:
        flag_ctx = context
    else:
        return line, 0
    args = [a.strip() for a in m.group("args").split(",")]
    if len(args) != 2:
        return line, 0
    try:
        value = parse_flags_expr(args[0])
    except ValueError:
        return line, 0
    sym = format_flags(value, flag_ctx)
    assert parse_flags_expr(sym) == value, (line, sym)
    new_call = f"{name}({sym}, {args[1]})"
    new_line = line[:m.start()] + new_call + line[m.end():]
    npayload = popcount(value) if name in SETEXT_FLAG_MACROS else 0
    return new_line, npayload


def rewrite_color_comment(line):
    m = PAYLOAD_RE.match(line)
    if not m:
        return line, False
    word = int(m.group("hex"), 16)
    return f"{m.group('head')}  /* {rgba_comment(word)} */", True


def process_file(path, dry, force_context=None):
    with open(path) as f:
        text = f.read()
    contexts = classify_scripts(text)
    if force_context:
        contexts = {
            name: ctx if ctx is not None else force_context
            for name, ctx in contexts.items()
        }
    lines = text.split("\n")
    changed = 0
    unknown = set()
    i = 0
    cur_script = None
    ext_payload_left = 0
    for i, line in enumerate(lines):
        m = SCRIPT_DECL_RE.match(line)
        if m and m.group("name") in contexts:
            cur_script = m.group("name")
            ext_payload_left = 0
            continue
        if cur_script is None:
            continue
        if CLOSE_RE.match(line):
            cur_script = None
            continue
        if ext_payload_left > 0:
            new_line, ok = rewrite_color_comment(line)
            if ok:
                ext_payload_left -= 1
                if new_line != line:
                    lines[i] = new_line
                    changed += 1
                continue
            # A chain pointer or unexpected shape inside the window:
            # stop tracking the window, fall through to macro handling.
            ext_payload_left = 0
        if "aobjEvent32" not in line:
            continue
        context = contexts[cur_script]
        if context is None:
            mm = MACRO_RE.search(line)
            if mm and mm.group("name") in SETVAL_FLAG_MACROS:
                unknown.add(cur_script)
        new_line, npayload = rewrite_macro_line(line, context)
        ext_payload_left = npayload
        if new_line != line:
            lines[i] = new_line
            changed += 1
    if changed and not dry:
        with open(path, "w") as f:
            f.write("\n".join(lines))
    return changed, contexts, unknown


def resolve_targets(args):
    if args.all:
        return sorted(
            os.path.join(RELOC_DIR, fn)
            for fn in os.listdir(RELOC_DIR) if fn.endswith(".c")
        )
    paths = []
    for tgt in args.targets:
        if tgt.endswith(".c") and os.path.exists(tgt):
            paths.append(os.path.abspath(tgt))
            continue
        if tgt.isdigit():
            fid = int(tgt)
            for fn in os.listdir(RELOC_DIR):
                m = re.match(r"^(\d+)_", fn)
                if m and int(m.group(1)) == fid and fn.endswith(".c"):
                    paths.append(os.path.join(RELOC_DIR, fn))
                    break
            else:
                raise SystemExit(f"no .c file for fid {fid}")
            continue
        raise SystemExit(f"could not resolve '{tgt}'")
    return paths


def main():
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="*", help="fid(s) or .c path(s)")
    ap.add_argument("--all", action="store_true",
                    help="process every src/relocData/*.c")
    ap.add_argument("--dry", action="store_true",
                    help="report only, don't write")
    ap.add_argument("--context", choices=("joint", "material", "camera"),
                    help="context to assume for scripts whose context "
                         "can't be inferred (use only when you know what "
                         "runtime list consumes them)")
    args = ap.parse_args()
    if not args.all and not args.targets:
        ap.error("give fids/paths or --all")

    total = 0
    files = 0
    ctx_counts = {"joint": 0, "material": 0, "camera": 0, None: 0}
    all_unknown = []
    for path in resolve_targets(args):
        changed, contexts, unknown = process_file(path, args.dry, args.context)
        for c in contexts.values():
            ctx_counts[c] += 1
        if unknown:
            all_unknown.append((os.path.basename(path), sorted(unknown)))
        if changed:
            files += 1
            total += changed
            verb = "would rewrite" if args.dry else "rewrote"
            print(f"{os.path.relpath(path, PROJECT_DIR)}: {verb} {changed} lines")
    print(f"\n{total} lines across {files} files; script contexts: "
          f"{ctx_counts['joint']} joint, {ctx_counts['material']} material, "
          f"{ctx_counts['camera']} camera, {ctx_counts[None]} unknown")
    if all_unknown:
        print("\nscripts left with numeric SetVal* masks (unknown context):")
        for fn, syms in all_unknown:
            print(f"  {fn}: {', '.join(syms)}")


if __name__ == "__main__":
    main()
