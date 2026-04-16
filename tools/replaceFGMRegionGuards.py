#!/usr/bin/env python3
"""
Rewrite `#if defined(REGION_JP) ... #else ... #endif` guards in fighter
Main.c files that only exist because raw fgm_id / sfx ordinals shift
between JP and US. The `gmFGMVoiceID` enum in src/gm/gmsound.h is region-
aware (US-only entries are fenced with `#if defined(REGION_US)`), so
substituting the enum name for the raw ordinal removes the need for the
guard.

For each guard block:
  - Collect the JP and US payload bodies.
  - Extract every `0xNNNN` ordinal in each, ordered.
  - Look up each ordinal in the per-region enum table.
  - If every JP ordinal resolves to the SAME enum name as the matching US
    ordinal at the same position, collapse the whole `#if / #else /
    #endif` block to the US payload with hex replaced by enum names.
  - Otherwise leave the guard alone.

Usage:
    tools/replaceFGMRegionGuards.py <file.c> [<file.c> ...]
    tools/replaceFGMRegionGuards.py --all    # every src/relocData/*Main.c
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HEADER_PATH = os.path.join(PROJECT_DIR, "src", "gm", "gmsound.h")
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


def parse_enum():
    with open(HEADER_PATH) as f:
        text = f.read()
    m = re.search(r"typedef enum gmFGMVoiceID\s*\{([^}]*)\}", text, re.DOTALL)
    body = m.group(1)
    us_map, jp_map = {}, {}
    us_ord, jp_ord = 0, 0
    state = None
    for ln in body.splitlines():
        s = ln.strip()
        if s.startswith("#if defined(REGION_US)"):
            state = "us"
            continue
        if s.startswith("#if defined(REGION_JP)"):
            state = "jp"
            continue
        if s.startswith("#else"):
            state = "jp" if state == "us" else "us" if state == "jp" else state
            continue
        if s.startswith("#endif"):
            state = None
            continue
        m_named_val = re.match(r"(nSY\w+)\s*=\s*0x([0-9A-Fa-f]+)", s)
        if m_named_val:
            # Explicit-value sentinel: record under both maps only for the
            # region(s) currently active. Skip auto-increment because the
            # sentinel "value" is one-past-the-end, not a real ordinal slot.
            name = m_named_val.group(1)
            val = int(m_named_val.group(2), 16)
            if state != "jp":
                us_map.setdefault(val, name)
            if state != "us":
                jp_map.setdefault(val, name)
            continue
        m_name = re.match(r"(nSY\w+)", s)
        if not m_name:
            continue
        name = m_name.group(1)
        if state != "jp":
            us_map[us_ord] = name
            us_ord += 1
        if state != "us":
            jp_map[jp_ord] = name
            jp_ord += 1
    return us_map, jp_map


HEX_RE = re.compile(r"0x([0-9A-Fa-f]+)")

GUARD_RE = re.compile(
    r"^[ \t]*#if defined\(REGION_JP\)\n"
    r"(?P<jp>(?:(?!^[ \t]*#(?:else|endif)).*\n)+)"
    r"^[ \t]*#else\n"
    r"(?P<us>(?:(?!^[ \t]*#endif).*\n)+)"
    r"^[ \t]*#endif[ \t]*\n",
    re.MULTILINE,
)


def rewrite(text, us_map, jp_map):
    resolved = []
    skipped = []

    def repl(m):
        jp_body = m.group("jp")
        us_body = m.group("us")
        jp_vals = [int(v, 16) for v in HEX_RE.findall(jp_body)]
        us_vals = [int(v, 16) for v in HEX_RE.findall(us_body)]
        if not jp_vals or len(jp_vals) != len(us_vals):
            skipped.append((m.start(), "len mismatch"))
            return m.group(0)
        names = []
        for jv, uv in zip(jp_vals, us_vals):
            jname = jp_map.get(jv)
            uname = us_map.get(uv)
            if jname is None or uname is None or jname != uname:
                names = None
                break
            names.append(uname)
        if not names:
            skipped.append((m.start(), f"name mismatch or oob: jp={jp_vals} us={us_vals}"))
            return m.group(0)
        # Rewrite the US payload replacing each 0x... with the enum name.
        def sub_hex(ms, it=iter(names)):
            return next(it)
        new_body = HEX_RE.sub(sub_hex, us_body)
        resolved.append((m.start(), names))
        return new_body

    new_text = GUARD_RE.sub(repl, text)
    return new_text, resolved, skipped


def process_file(path, us_map, jp_map, dry_run=False):
    with open(path) as f:
        text = f.read()
    new_text, resolved, skipped = rewrite(text, us_map, jp_map)
    if new_text == text:
        return 0, skipped
    if not dry_run:
        with open(path, "w") as f:
            f.write(new_text)
    return len(resolved), skipped


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="*")
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    us_map, jp_map = parse_enum()
    print(f"parsed enum: {len(us_map)} US entries, {len(jp_map)} JP entries")

    if args.all:
        files = sorted(os.path.join(RELOC_DIR, fn)
                       for fn in os.listdir(RELOC_DIR)
                       if fn.endswith("Main.c") and re.match(r"^\d+_", fn))
    else:
        files = args.files
    if not files:
        ap.error("pass file paths or --all")

    total_resolved = 0
    total_skipped = 0
    for f in files:
        n, sk = process_file(f, us_map, jp_map, dry_run=args.dry_run)
        if n or sk:
            print(f"{os.path.relpath(f, PROJECT_DIR)}: resolved {n} guard(s), skipped {len(sk)}")
            for start, why in sk:
                print(f"  skip @ {start}: {why}")
        total_resolved += n
        total_skipped += len(sk)
    print(f"total: {total_resolved} resolved, {total_skipped} skipped")


if __name__ == "__main__":
    main()
