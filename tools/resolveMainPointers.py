#!/usr/bin/env python3
"""
Resolve every pointer slot in a fighter Main.c that has a corresponding
entry in the companion .reloc file — hex casts, NULL placeholders, and
intern links — to a symbolic reference.

Covers three patterns:
  1. `(Type*)0xXXXXYYYY` hex casts inside typed sub-block initializers
     (modelparts_desc, commonparts_container, sprites, skeleton_dls, ...).
  2. `NULL, /* <field> */` placeholders inside the FTAttributes initializer
     (setup_parts, animlock, hiddenparts, commonparts_container,
     modelparts_container, textureparts_container, thrown_status, sprites,
     skeleton, dobj_lookup).
  3. `{ NULL, NULL, ... }, /* shield_anim_joints */` array aggregate, where
     each element corresponds to a separate extern entry.

For intern entries the replacement is the target symbol (resolved inside
the same file). For extern entries we look up a symbol in the target file's
.o via nm — or, if that file hasn't been built, fall back to scanning the
target file's .c source for declarations. Both produce `&sym` or
`((u8*)sym + 0xN)` expressions. fixRelocChain still owns the runtime chain
bytes so the compiled binary stays byte-identical.

Usage:
    tools/resolveMainPointers.py <fid>
    tools/resolveMainPointers.py --all
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


# FTAttributes pointer-field offsets (from fttypes.h layout; `unused_0x2CC`
# pins the start of the pointer cluster). The "field_type" string is the
# full type of the field (including the final `*`) so the replacement is a
# direct cast.
ATTR_SINGLE_SLOTS = {
    0x29C: ("setup_parts",            "u32*"),
    0x2A0: ("animlock",               "u32*"),
    0x2D0: ("hiddenparts",            "FTHiddenPart*"),
    0x2D4: ("commonparts_container",  "FTCommonPartContainer*"),
    0x2D8: ("dobj_lookup",            "DObjDesc*"),
    0x324: ("translate_scales",       "Vec3f*"),
    0x328: ("modelparts_container",   "FTModelPartContainer*"),
    0x32C: ("accesspart",             "FTAccessPart*"),
    0x330: ("textureparts_container", "FTTexturePartContainer*"),
    0x338: ("thrown_status",          "FTThrownStatusArray*"),
    0x340: ("sprites",                "FTSprites*"),
    0x344: ("skeleton",               "FTSkeleton**"),
}

# shield_anim_joints[8] spread: 0x2DC..0x2F8, stride 4, element type AObjEvent32**.
ATTR_ARRAY_SLOTS = {
    "shield_anim_joints": {
        "offsets": [0x2DC + 4 * i for i in range(8)],
        "elem_type": "AObjEvent32**",
    },
}


# --- nm / source scan -------------------------------------------------------

_nm_cache = {}


def nm(file_id):
    if file_id in _nm_cache:
        return _nm_cache[file_id]
    obj = os.path.join(BUILD_OBJ_DIR, f"{file_id}.o")
    name_at = {}
    if os.path.exists(obj):
        r = subprocess.run(["mips-linux-gnu-nm", obj],
                           capture_output=True, text=True)
        for ln in r.stdout.splitlines():
            parts = ln.split()
            if len(parts) >= 3 and parts[1] in ("D", "d"):
                off = int(parts[0], 16)
                name = parts[2]
                if off in name_at and len(name_at[off]) <= len(name):
                    continue
                name_at[off] = name
    type_at = load_source_decls(file_id)
    offs = sorted(name_at)
    _nm_cache[file_id] = (offs, name_at, type_at)
    return _nm_cache[file_id]


def load_source_decls(file_id):
    """Return {sym: (c_type, is_array)} parsed from the target file's .c."""
    out = {}
    for fn in os.listdir(RELOC_DIR):
        if fn.startswith(f"{file_id}_") and fn.endswith(".c") and not fn.endswith(".jp.c"):
            try:
                with open(os.path.join(RELOC_DIR, fn)) as f:
                    text = f.read()
            except OSError:
                return out
            for m in re.finditer(
                r"^\s*(?:static\s+)?([A-Za-z_][\w\s*]*?)\s+(d\w+)\s*(\[[^\]]*\])?\s*=",
                text,
                re.MULTILINE,
            ):
                out[m.group(2)] = (m.group(1).strip(), bool(m.group(3)))
            return out
    return out


_src_scan_cache = {}


def src_scan(file_id):
    """When .o is unavailable, scan src/<fid>_*.c for offset→symbol mapping
    using `/* @ 0xNNNN */` comments that precede declarations."""
    if file_id in _src_scan_cache:
        return _src_scan_cache[file_id]
    syms = {}
    for fn in os.listdir(RELOC_DIR):
        if fn.startswith(f"{file_id}_") and fn.endswith(".c") and not fn.endswith(".jp.c"):
            try:
                with open(os.path.join(RELOC_DIR, fn)) as f:
                    text = f.read()
            except OSError:
                break
            lines = text.split("\n")
            for i, ln in enumerate(lines):
                off_m = re.search(r"@\s*0x([0-9A-Fa-f]+)", ln)
                if not off_m:
                    continue
                # Look ahead up to 4 lines for a declaration
                for j in range(i, min(i + 5, len(lines))):
                    d = re.match(
                        r"\s*(?:static\s+)?[\w\s*]+?\s(d\w+)\s*(\[[^\]]*\])?\s*=",
                        lines[j])
                    if d:
                        try:
                            off = int(off_m.group(1), 16)
                        except ValueError:
                            break
                        syms.setdefault(off, d.group(1))
                        break
            break
    _src_scan_cache[file_id] = syms
    return syms


def resolve_extern(target_fid, target_off):
    offs, names, types = nm(target_fid)
    if offs:
        idx = bisect.bisect_right(offs, target_off) - 1
        if idx >= 0:
            base = offs[idx]
            sym = names[base]
            c_type, is_array = types.get(sym, ("u8", True))
            return sym, target_off - base, c_type, is_array
    # Fall back to source scan
    src = src_scan(target_fid)
    if src:
        offs2 = sorted(src)
        idx = bisect.bisect_right(offs2, target_off) - 1
        if idx >= 0:
            base = offs2[idx]
            sym = src[base]
            types = load_source_decls(target_fid)
            c_type, is_array = types.get(sym, ("u8", True))
            return sym, target_off - base, c_type, is_array
    return None


# --- .reloc parsing ---------------------------------------------------------

RELOC_RE = re.compile(
    r"^(intern|extern)\s+(\S+)\s+(\S+)(?:\s*#\s*->\s*file\s+(\d+)\s*\([^)]+\))?",
)


def parse_reloc(reloc_path):
    """Return list of (kind, ptr_sym, ptr_off, target_expr or (fid, off))."""
    entries = []
    with open(reloc_path) as f:
        for ln in f:
            ln = ln.rstrip()
            # strip inline '#' comments (but keep the `# -> file N` form for RE)
            m = RELOC_RE.match(ln)
            if not m:
                continue
            kind = m.group(1)
            ptr = m.group(2)
            target = m.group(3)
            target_fid = int(m.group(4)) if m.group(4) else None

            sm = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", ptr)
            if not sm:
                continue
            ptr_sym = sm.group(1)
            ptr_off = int(sm.group(2), 16) if sm.group(2) else 0

            if kind == "intern":
                tm = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", target)
                if not tm:
                    continue
                target_sym = tm.group(1)
                target_off = int(tm.group(2), 16) if tm.group(2) else 0
                entries.append(("intern", ptr_sym, ptr_off, target_sym, target_off))
            else:
                try:
                    target_off = int(target, 16)
                except ValueError:
                    continue
                entries.append(("extern", ptr_sym, ptr_off, target_fid, target_off))
    return entries


# --- Source rewriting -------------------------------------------------------

HEX_CAST_RE = re.compile(r"\(\s*([A-Za-z_][\w\s*]*?)\s*\*\s*\)\s*0x([0-9A-Fa-f]{8})")


def build_expr(entry, extern_decls):
    """Return (expr, c_type, is_array_target) for a single reloc entry, or None."""
    kind = entry[0]
    if kind == "intern":
        _, _, _, target_sym, target_off = entry
        if target_off == 0:
            return f"{target_sym}", None, None
        return f"((u8*){target_sym} + 0x{target_off:X})", None, None
    _, _, _, target_fid, target_off = entry
    if target_fid is None:
        return None
    r = resolve_extern(target_fid, target_off)
    if r is None:
        return None
    sym, delta, c_type, is_array = r
    extern_decls.setdefault(sym, (c_type, is_array))
    if delta == 0:
        return f"&{sym}", c_type, is_array
    return f"((u8*){sym} + 0x{delta:X})", c_type, is_array


U32_RAW_RE = re.compile(r"\b0x([0-9A-Fa-f]{8})\b(?!\s*[,}]\s*0x)", )


def rewrite_typed_block(text, sym, entries, extern_decls, decl_type):
    """Replace the .reloc-indicated slots in ptr_sym's initializer body.

    - For `(Type*)0xHEX` casts (in typed sub-blocks), replace positionally
      with `(Type*)<expr>`.
    - For raw `u32` arrays, the N-th u32 literal is slot index N; replace
      the one whose byte offset matches each entry's `ptr_off_in_sym`.
    """
    decl_re = re.compile(
        rf"^[^/\n]*\b{re.escape(sym)}\b[^\n]*=\s*\{{([\s\S]*?)\n\}};",
        re.MULTILINE,
    )
    m = decl_re.search(text)
    if not m:
        return text, 0, len(entries), [f"{sym}: decl not found"]

    body_start, body_end = m.start(1), m.end(1)
    body = text[body_start:body_end]
    entries = sorted(entries, key=lambda e: e[2])
    resolved = skipped = 0
    unres = []
    pairs = []

    if decl_type == "u32":
        # Find all 8-hex-digit literals in order. Match their file byte
        # offset via slot index * 4.
        hex_re = re.compile(r"0x([0-9A-Fa-f]{8})")
        hex_matches = list(hex_re.finditer(body))
        for entry in entries:
            slot_idx = entry[2] // 4
            if slot_idx >= len(hex_matches):
                skipped += 1
                unres.append(f"{sym}+0x{entry[2]:X}: slot {slot_idx} out of range")
                continue
            made = build_expr(entry, extern_decls)
            if made is None:
                skipped += 1
                unres.append(f"{sym}+0x{entry[2]:X}: unresolved")
                continue
            expr, _c_type, _is_arr = made
            m2 = hex_matches[slot_idx]
            # Cast to (u32) so we can assign a pointer/expr into the u32 slot.
            if expr.startswith("&"):
                new_val = f"(u32){expr}"
            elif expr.startswith("((u8*)"):
                new_val = f"(u32){expr}"
            else:
                new_val = f"(u32){expr}"
            pairs.append((m2.start(), m2.end(), new_val))
            resolved += 1
    else:
        casts = list(HEX_CAST_RE.finditer(body))
        for i, entry in enumerate(entries):
            if i >= len(casts):
                skipped += 1
                unres.append(f"{sym}+0x{entry[2]:X}: out of cast slots")
                continue
            made = build_expr(entry, extern_decls)
            if made is None:
                skipped += 1
                unres.append(f"{sym}+0x{entry[2]:X}: unresolved")
                continue
            expr, _, _ = made
            cast = casts[i]
            outer_type = cast.group(1).strip()
            pairs.append((cast.start(), cast.end(), f"({outer_type}*){expr}"))
            resolved += 1

    new_body = body
    for start, end, repl in sorted(pairs, key=lambda p: -p[0]):
        new_body = new_body[:start] + repl + new_body[end:]
    text = text[:body_start] + new_body + text[body_end:]
    return text, resolved, skipped, unres


def rewrite_attr_slot(text, attr_off, entry, extern_decls):
    """Replace a single NULL/hex-cast in the FTAttributes initializer at the
    given byte offset with the resolved expression. Match by `/* <field> */`
    comment label derived from ATTR_SINGLE_SLOTS / ATTR_ARRAY_SLOTS."""
    # Find the field name and element index (if array)
    field = None
    idx = None
    elem_type = None
    if attr_off in ATTR_SINGLE_SLOTS:
        field, elem_type = ATTR_SINGLE_SLOTS[attr_off]
    else:
        for fname, meta in ATTR_ARRAY_SLOTS.items():
            if attr_off in meta["offsets"]:
                field = fname
                idx = meta["offsets"].index(attr_off)
                elem_type = meta["elem_type"]
                break
    if field is None:
        return text, False, f"unknown FTAttr offset 0x{attr_off:X}"

    made = build_expr(entry, extern_decls)
    if made is None:
        return text, False, f"unresolved"
    expr, _c_type, _is_array = made

    if idx is None:
        # Single slot. Match `<something>, /* <field> */`.
        slot_re = re.compile(
            rf"(\b(?:NULL|0|&\w+|\(\s*[\w\s*]+?\s*\*+\s*\)\s*\S+?)),(\s*/\*\s*{field}\s*\*/)",
        )
        m = slot_re.search(text)
        if not m:
            return text, False, f"{field}: slot not found"
        # Emit `(field_type)expr` for a direct, unambiguous cast that works
        # regardless of whether `expr` already has a compatible type.
        replacement = f"({elem_type}){expr}"
        text = text[:m.start()] + replacement + "," + m.group(2) + text[m.end():]
        return text, True, None

    # Array element. Find `{ NULL, NULL, ..., NULL }, /* <field> */` and
    # rewrite the `idx`th element. Handle multi-line braces too.
    arr_re = re.compile(
        rf"\{{([^{{}}]*?)\}}(\s*,\s*/\*\s*{field}\s*\*/)", re.DOTALL,
    )
    m = arr_re.search(text)
    if not m:
        return text, False, f"{field}[{idx}]: aggregate not found"
    inner = m.group(1)
    parts = [p.strip() for p in inner.split(",") if p.strip()]
    if idx >= len(parts):
        return text, False, f"{field}[{idx}]: out of bounds"
    parts[idx] = f"({elem_type}){expr}"
    new_inner = "\n\t\t" + ",\n\t\t".join(parts) + ",\n\t"
    text = text[:m.start()] + "{" + new_inner + "}" + m.group(2) + text[m.end():]
    return text, True, None


def rewrite(c_path, reloc_path):
    entries = parse_reloc(reloc_path)
    if not entries:
        return 0, 0, []

    with open(c_path) as f:
        text = f.read()

    extern_decls = {}
    total_resolved = total_skipped = 0
    unres = []

    # Group entries by ptr_sym
    from collections import defaultdict
    by_sym = defaultdict(list)
    for e in entries:
        by_sym[e[1]].append(e)

    # Pass 1: sub-blocks (both typed casts and raw u32 arrays).
    for sym, slots in list(by_sym.items()):
        if sym.endswith("_attr"):
            continue
        decl_re = re.compile(
            rf"^\s*(?:static\s+)?([A-Za-z_][\w\s*]*?)\s+{re.escape(sym)}\b",
            re.MULTILINE,
        )
        m = decl_re.search(text)
        if not m:
            continue
        decl_type_raw = m.group(1).strip()
        decl_type = "u32" if decl_type_raw == "u32" else "typed"
        text, r, s, u = rewrite_typed_block(text, sym, slots, extern_decls, decl_type)
        total_resolved += r
        total_skipped += s
        unres.extend(u)
        del by_sym[sym]

    # Pass 2: FTAttributes pointer slots.
    attr_entries = [e for e in entries if e[1].endswith("_attr")]
    for entry in sorted(attr_entries, key=lambda e: e[2]):
        attr_off = entry[2]
        text, ok, why = rewrite_attr_slot(text, attr_off, entry, extern_decls)
        if ok:
            total_resolved += 1
        else:
            total_skipped += 1
            unres.append(f"{entry[1]}+0x{attr_off:X}: {why}")

    # Pass 3: insert extern declarations for any new cross-file refs.
    if extern_decls:
        existing = set(re.findall(
            r"^\s*extern\s+[^;]+?\s(\w+)\s*(?:\[.*?\])?\s*;",
            text, re.MULTILINE))
        new_decls = {s: d for s, d in extern_decls.items() if s not in existing}
        if new_decls:
            lines = text.split("\n")
            idx = max((i for i, ln in enumerate(lines)
                       if ln.lstrip().startswith(("#include", "extern "))),
                      default=-1)
            block = [""]
            for sym in sorted(new_decls):
                c_type, is_array = new_decls[sym]
                bracket = "[]" if is_array else ""
                block.append(f"extern {c_type} {sym}{bracket};")
            lines[idx+1:idx+1] = block
            text = "\n".join(lines)

    with open(c_path, "w") as f:
        f.write(text)
    return total_resolved, total_skipped, unres


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
    args = ap.parse_args()
    if args.all:
        files = find_main_files()
    elif args.fid is not None:
        files = [f for f in find_main_files()
                 if os.path.basename(f).startswith(f"{args.fid}_")]
    else:
        ap.error("fid or --all required")

    total_r = total_s = 0
    for c_path in files:
        reloc_path = c_path.replace(".c", ".reloc")
        if not os.path.exists(reloc_path):
            continue
        r, s, unres = rewrite(c_path, reloc_path)
        print(f"{os.path.basename(c_path)}: resolved {r}, skipped {s}")
        for u in unres[:3]:
            print(f"  {u}")
        if len(unres) > 3:
            print(f"  ... +{len(unres)-3} more")
        total_r += r
        total_s += s
    print(f"TOTAL: {total_r} resolved, {total_s} skipped")


if __name__ == "__main__":
    main()
