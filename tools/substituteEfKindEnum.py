#!/usr/bin/env python3
"""
Substitute integer `eid` arguments of `ftMotionCommandEffect` and
`ftMotionCommandEffectItemHold` with the matching `nEFKind*` enum name
from `src/ef/efdef.h` (the `efKind` enum).

Both macros pack `eid` into bits 18..10 of word 1 — same encoding —
so the substitution is a pure source-readability change. Bytes
unchanged. Auto-adds `#include <ef/efdef.h>` to any file that gains
its first `nEFKind*` reference.

Usage:
    tools/substituteEfKindEnum.py             # all relocData/*.c files
    tools/substituteEfKindEnum.py <file.c> …  # specific files
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EFDEF = os.path.join(PROJECT_DIR, "src", "ef", "efdef.h")
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


def parse_efkind_enum():
    """Return {value: name} from the efKind enum."""
    text = open(EFDEF).read()
    body_match = re.search(r"typedef enum efKind\s*\{([^}]*)\}", text, re.DOTALL)
    body = body_match.group(1)
    out = {}
    next_val = 0
    for line in body.splitlines():
        s = line.strip()
        if not s or s.startswith("//"):
            continue
        # Strip trailing comments
        s = re.sub(r"//.*$", "", s).strip().rstrip(",").strip()
        if not s:
            continue
        m_val = re.match(r"^(nEFKind\w+)\s*=\s*(0x[0-9A-Fa-f]+|\d+)$", s)
        if m_val:
            val = int(m_val.group(2), 16) if m_val.group(2).startswith("0x") else int(m_val.group(2))
            out[val] = m_val.group(1)
            next_val = val + 1
            continue
        m_name = re.match(r"^(nEFKind\w+)$", s)
        if m_name:
            out[next_val] = m_name.group(1)
            next_val += 1
    return out


_EFFECT_RE = re.compile(
    r"\bftMotionCommandEffect(?:ItemHold)?\(\s*"
    r"(-?\d+|nFT\w+|0x[0-9A-Fa-f]+)\s*,\s*"      # jid
    r"(-?\d+|nEF\w+|0x[0-9A-Fa-f]+)\s*,\s*"      # eid
)


def substitute_in_text(text, kind_map):
    """Rewrite each Effect/EffectItemHold's eid integer to the matching
    enum name. Skip already-symbolic eids (`nEFKind*`)."""
    n = 0

    def repl(m):
        nonlocal n
        full = m.group(0)
        eid_str = m.group(2)
        if eid_str.startswith("nEF"):
            return full
        try:
            val = int(eid_str, 16) if eid_str.startswith("0x") else int(eid_str)
        except ValueError:
            return full
        if val not in kind_map:
            return full
        new_eid = kind_map[val]
        # Replace the eid arg in the matched span; preserve everything else.
        # The span ends right after the eid argument and its trailing `,`.
        before = full[: m.start(2) - m.start()]
        after = full[m.end(2) - m.start():]
        n += 1
        return before + new_eid + after

    new_text = _EFFECT_RE.sub(repl, text)
    return new_text, n


def ensure_include(text):
    """Add `#include <ef/efdef.h>` after the last existing relocData/header
    include if the file uses an `nEFKind*` symbol but doesn't include the
    header yet."""
    if "<ef/efdef.h>" in text or '"ef/efdef.h"' in text:
        return text
    if not re.search(r"\bnEFKind\w+", text):
        return text
    # Find the last `#include` line and insert after it.
    inc_re = re.compile(r"(^#include\s+[<\"][^>\"]+[>\"]\s*\n)+", re.MULTILINE)
    last = None
    for m in inc_re.finditer(text):
        last = m
    if not last:
        # No includes — prepend.
        return "#include <ef/efdef.h>\n\n" + text
    insertion = "#include <ef/efdef.h>\n"
    return text[: last.end()] + insertion + text[last.end():]


def process_file(path, kind_map):
    text = open(path).read()
    new_text, n = substitute_in_text(text, kind_map)
    if n == 0:
        return 0
    new_text = ensure_include(new_text)
    if new_text != text:
        open(path, "w").write(new_text)
        print(f"  {os.path.basename(path)}: substituted {n} eid arg(s)")
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="*")
    args = ap.parse_args()
    kind_map = parse_efkind_enum()
    print(f"Loaded {len(kind_map)} efKind entries")

    if args.files:
        files = args.files
    else:
        files = sorted(
            os.path.join(RELOC_DIR, f)
            for f in os.listdir(RELOC_DIR)
            if f.endswith(".c")
        )

    total = 0
    for p in files:
        total += process_file(p, kind_map)
    print(f"\nTotal: {total} eid args substituted")


if __name__ == "__main__":
    main()
