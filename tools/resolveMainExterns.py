#!/usr/bin/env python3
"""
Resolve extern-chain `(Type*)0xXXXXYYYY` placeholders in a fighter-style
relocData .c file to symbolic cross-file references.

For each extern entry in the companion .reloc file:
  1. Parse `# -> file N (Name)` trailing annotations to get the target fid.
     (If the annotation is missing, fall back to the vpk0 trailer.)
  2. Load the target file's nm symbol map.
  3. Find the nearest preceding data symbol whose offset is <= target_off.
  4. Build a `((u8*)sym + delta)` expression (or bare `sym` when delta == 0).
  5. Locate the `(Type*)0xHEX` cast at the ptr position in the source .c and
     swap it in. Also emit an `extern Type sym[];` forward decl at the top
     of the file.

fixRelocChain.py overwrites the chain bytes post-compile regardless of the
literal used in source, so the binary stays byte-identical.

Usage:
    tools/resolveMainExterns.py <fid>           # rewrite one file
    tools/resolveMainExterns.py <fid> --dry-run
    tools/resolveMainExterns.py --all           # every *Main.c
"""

import argparse
import bisect
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_OBJ_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", ".build")


_nm_cache = {}


def nm(file_id):
    """Return (offs_sorted, name_at_off, type_at_off) for file <fid>.o."""
    if file_id in _nm_cache:
        return _nm_cache[file_id]
    obj = os.path.join(BUILD_OBJ_DIR, f"{file_id}.o")
    if not os.path.exists(obj):
        _nm_cache[file_id] = ([], {}, {})
        return _nm_cache[file_id]
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True)
    name_at = {}
    for ln in r.stdout.splitlines():
        parts = ln.split()
        if len(parts) >= 3 and parts[1] in ("D", "d"):
            off = int(parts[0], 16)
            name = parts[2]
            # prefer shorter (canonical) name when there are duplicates
            if off in name_at and len(name_at[off]) <= len(name):
                continue
            name_at[off] = name
    # Load C declaration types from the target file's source (for `extern` decls)
    type_at = {}
    for fn in os.listdir(RELOC_DIR):
        if fn.startswith(f"{file_id}_") and fn.endswith(".c") and not fn.endswith(".jp.c"):
            try:
                with open(os.path.join(RELOC_DIR, fn)) as f:
                    text = f.read()
            except OSError:
                break
            for m in re.finditer(
                r"^\s*(?:static\s+)?([A-Za-z_][\w\s*]*?)\s+(d\w+)\s*(\[[^\]]*\])?\s*=",
                text,
                re.MULTILINE,
            ):
                type_at[m.group(2)] = (m.group(1).strip(), bool(m.group(3)))
            break
    offs_sorted = sorted(name_at.keys())
    _nm_cache[file_id] = (offs_sorted, name_at, type_at)
    return _nm_cache[file_id]


def resolve_target(target_fid, target_off):
    """Return (sym, delta, c_type, is_array) or None."""
    offs, names, types = nm(target_fid)
    if not offs:
        return None
    idx = bisect.bisect_right(offs, target_off) - 1
    if idx < 0:
        return None
    base = offs[idx]
    delta = target_off - base
    sym = names[base]
    c_type, is_array = types.get(sym, ("u8", True))
    return sym, delta, c_type, is_array


RELOC_LINE_RE = re.compile(
    r"^extern\s+(\S+)\s+0x([0-9A-Fa-f]+)(?:\s*#\s*->\s*file\s+(\d+)\s*\(([^)]+)\))?",
)


def parse_externs(reloc_path):
    """Return list of (ptr_label, ptr_sym, ptr_off_in_sym, target_off, target_fid, target_name)."""
    out = []
    with open(reloc_path) as f:
        for ln in f:
            ln = ln.rstrip()
            m = RELOC_LINE_RE.match(ln)
            if not m:
                continue
            ptr = m.group(1)
            target_off = int(m.group(2), 16)
            target_fid = int(m.group(3)) if m.group(3) else None
            target_name = m.group(4) if m.group(4) else None
            sm = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", ptr)
            if not sm:
                continue
            ptr_sym = sm.group(1)
            ptr_off = int(sm.group(2), 16) if sm.group(2) else 0
            out.append((ptr, ptr_sym, ptr_off, target_off, target_fid, target_name))
    return out


HEX_CAST_RE = re.compile(
    r"\(\s*([A-Za-z_][\w\s*]*?)\s*\*\s*\)\s*0x([0-9A-Fa-f]{8})"
)


def rewrite(c_path, reloc_path, dry_run=False):
    externs = parse_externs(reloc_path)
    if not externs:
        return 0, 0, []

    with open(c_path) as f:
        text = f.read()

    # Group extern entries by the source symbol the pointer lives inside.
    # For each (ptr_sym, ptr_off_in_sym) we need to find the Nth hex cast
    # within that symbol's initializer — but we'll just do a whole-file
    # scan keyed on the exact chain hex value (the low-16 bits encode the
    # target_word, which matches our target_off via target_word*4).
    resolved = 0
    skipped = 0
    unresolved = []
    extern_decls = {}  # sym -> (c_type, is_array)

    def replace_slot(ptr_sym, ptr_off, target_off, target_fid):
        nonlocal resolved, skipped, text
        if target_fid is None:
            skipped += 1
            return False
        r = resolve_target(target_fid, target_off)
        if r is None:
            skipped += 1
            return False
        sym, delta, c_type, is_array = r
        if delta == 0:
            expr_core = sym
        else:
            expr_core = f"((u8*){sym} + 0x{delta:X})"
        extern_decls[sym] = (c_type, is_array)
        # Locate the source symbol initializer, then replace the hex cast
        # whose file byte-offset equals (ptr_off_in_sym) in that decl.
        # Simplest heuristic: scan the whole file for the exact chain hex
        # and replace it, keyed by the unique chain word. The chain hex
        # encodes (next_ptr_word << 16 | target_word), so it's unique per
        # chain slot.
        return False

    # Better approach: for each ptr_sym, find the symbol's `= { ... };` body
    # and walk its casts in order, matching by offset-within-symbol.
    # Build per-symbol groups.
    from collections import defaultdict
    by_sym = defaultdict(list)
    for item in externs:
        by_sym[item[1]].append(item)
    for sym, entries in by_sym.items():
        entries.sort(key=lambda e: e[2])  # by ptr_off_in_sym
        decl_re = re.compile(
            rf"^[^/\n]*\b{re.escape(sym)}\b[^\n]*=\s*\{{([\s\S]*?)\n\}};",
            re.MULTILINE,
        )
        m = decl_re.search(text)
        if not m:
            for e in entries:
                skipped += 1
                unresolved.append(f"{sym}+0x{e[2]:X}: couldn't find decl")
            continue
        body_start = m.start(1)
        body_end = m.end(1)
        body = text[body_start:body_end]
        # Find all hex casts in body, in order; for each position compute
        # the byte-offset within the declaration by counting cast-slots
        # sequentially — unreliable when fields vary in width. Instead,
        # we rely on the .reloc offset being already correct: since slots
        # are typically 4-byte-aligned pointer fields, the Nth cast at
        # ptr_off == N*4 isn't guaranteed when struct fields have variable
        # sizes. Practical compromise: for fighter Main files the casts
        # are all `(Type*)0xHEX` in pointer fields, and the ptr_off order
        # matches the textual order of the casts. So we just replace the
        # Nth cast with the Nth resolution.
        casts = list(HEX_CAST_RE.finditer(body))
        if len(casts) < len(entries):
            for e in entries[len(casts):]:
                skipped += 1
                unresolved.append(f"{sym}+0x{e[2]:X}: no hex cast slot available")
        pairs = []
        for i, entry in enumerate(entries[:len(casts)]):
            cast = casts[i]
            _, _, _, target_off, target_fid, _ = entry
            if target_fid is None:
                skipped += 1
                unresolved.append(f"{sym}+0x{entry[2]:X}: no target fid")
                continue
            r = resolve_target(target_fid, target_off)
            if r is None:
                skipped += 1
                unresolved.append(f"{sym}+0x{entry[2]:X}: unresolved in fid {target_fid}")
                continue
            tsym, delta, c_type, is_array = r
            if delta == 0:
                replacement = f"&{tsym}"
            else:
                replacement = f"((u8*){tsym} + 0x{delta:X})"
            type_cast = cast.group(1).strip()
            new_cast = f"({type_cast}*){replacement}"
            pairs.append((cast.start(), cast.end(), new_cast))
            extern_decls[tsym] = (c_type, is_array)
            resolved += 1
        # Apply replacements in reverse order to keep offsets valid
        new_body = body
        for start, end, repl in sorted(pairs, key=lambda p: -p[0]):
            new_body = new_body[:start] + repl + new_body[end:]
        text = text[:body_start] + new_body + text[body_end:]

    # Insert extern declarations after the last #include.
    if extern_decls:
        # Filter out already-declared externs
        existing = set(re.findall(r"^\s*extern\s+[^;]+?\s(\w+)\s*(?:\[.*?\])?\s*;",
                                  text, re.MULTILINE))
        new_decls = {s: (t, a) for s, (t, a) in extern_decls.items() if s not in existing}
        if new_decls:
            lines = text.split("\n")
            idx = max((i for i, ln in enumerate(lines)
                       if ln.lstrip().startswith("#include")), default=-1)
            block = [""]
            for sym in sorted(new_decls):
                c_type, is_array = new_decls[sym]
                bracket = "[]" if is_array else ""
                block.append(f"extern {c_type} {sym}{bracket};")
            lines[idx+1:idx+1] = block
            text = "\n".join(lines)

    if not dry_run:
        with open(c_path, "w") as f:
            f.write(text)
    return resolved, skipped, unresolved


def find_main_files():
    return sorted(
        os.path.join(RELOC_DIR, fn)
        for fn in os.listdir(RELOC_DIR)
        if fn.endswith("Main.c") and re.match(r"^\d+_", fn)
    )


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int, nargs="?")
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    if args.all:
        files = find_main_files()
    elif args.fid is not None:
        files = [f for f in find_main_files()
                 if os.path.basename(f).startswith(f"{args.fid}_")]
        if not files:
            sys.exit(f"no Main.c for fid {args.fid}")
    else:
        ap.error("fid or --all required")

    total_resolved = total_skipped = 0
    for c_path in files:
        reloc_path = c_path.replace(".c", ".reloc")
        if not os.path.exists(reloc_path):
            continue
        r, s, unresolved = rewrite(c_path, reloc_path, dry_run=args.dry_run)
        label = os.path.basename(c_path)
        print(f"{label}: resolved {r}, skipped {s}")
        for u in unresolved[:5]:
            print(f"  {u}")
        if len(unresolved) > 5:
            print(f"  ... +{len(unresolved)-5} more")
        total_resolved += r
        total_skipped += s
    print(f"TOTAL: {total_resolved} resolved, {total_skipped} skipped")


if __name__ == "__main__":
    main()
