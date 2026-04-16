#!/usr/bin/env python3
"""
Rewrite `(void**) 0xAABBCCDD` chain-encoded casts in MObjSub initializers
to symbolic references based on the .reloc metadata.

MObjSub has two `void **` pointer slots:
  +0x04  (typically pal_header or per-MObj palette list pointer)
  +0x24  (typically a secondary indirection)

For each such slot that the .reloc marks as `intern` or `extern`, look up
the target symbol and replace the raw hex cast. fixRelocChain.py writes
the chain word at build time, so bytes stay identical.
"""

import argparse
import os
import re
import subprocess

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
EXCESS_PATH = os.path.join(PROJECT_DIR, "tools", "vpk0_excess_bytes.txt")


_nm = {}
def nm_symbols(fid):
    if fid in _nm: return _nm[fid]
    obj = os.path.join(BUILD_DIR, ".build", f"{fid}.o")
    if not os.path.exists(obj): _nm[fid] = {}; return {}
    try: r = subprocess.run(["mips-linux-gnu-nm", obj], capture_output=True, text=True, check=True)
    except: _nm[fid] = {}; return {}
    s = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D","d"): s[p[2]] = int(p[0], 16)
    _nm[fid] = s
    return s


def load_excess():
    out = {}
    with open(EXCESS_PATH) as f:
        for ln in f:
            if " - " not in ln: continue
            k, v = ln.strip().split(" - ", 1)
            try: out[int(k)] = bytearray.fromhex(v)
            except: pass
    return out


def parse_reloc(reloc_path):
    intern, extern = [], []
    with open(reloc_path) as f:
        for ln in f:
            s = ln.strip()
            if not s or s.startswith("#"): continue
            p = s.split()
            if len(p) != 3: continue
            m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", p[1])
            if not m: continue
            sym, off = m.group(1), int(m.group(2), 16) if m.group(2) else 0
            if p[0] == "intern":
                intern.append((sym, off, p[2]))
            elif p[0] == "extern":
                extern.append((sym, off, p[2]))
    return intern, extern


def sym_near(fid, byte_off):
    syms = nm_symbols(fid)
    candidates = [(off, name) for name, off in syms.items()
                  if off <= byte_off and not name.endswith(("_bitmaps", "_dl", "_tex"))]
    if not candidates:
        return None, 0
    best_off, best_name = max(candidates)
    return best_name, byte_off - best_off


def is_scalar_symbol(source_text, sym):
    """Return True if the symbol is a scalar struct (not an array)."""
    m = re.search(rf"\b(?:static\s+)?\w+\s+{re.escape(sym)}\s*=\s*\{{", source_text)
    return m is not None


def addr_prefix(source_text, sym):
    """Return '&' if sym is a scalar struct that needs address-of for (u8*) cast,
    empty string if sym is an array (decays automatically)."""
    return "&" if is_scalar_symbol(source_text, sym) else ""


def build_slot_map(file_id, reloc_path, source_text):
    intern, extern = parse_reloc(reloc_path)
    syms = nm_symbols(file_id)
    excess = load_excess()
    slot_map = {}
    extern_syms_needed = set()

    for ptr_sym, ptr_off, tgt in intern:
        # Target is either a symbol (+0xOFF) or raw hex byte offset
        if tgt.startswith("0x"):
            try:
                tgt_byte = int(tgt, 16)
            except ValueError:
                continue
            ts, delta = sym_near(file_id, tgt_byte)
            if ts is None:
                continue
            if delta == 0:
                expr = f"(void**){addr_prefix(source_text, ts)}{ts}"
            else:
                expr = f"(void**)((u8*){addr_prefix(source_text, ts)}{ts} + 0x{delta:X})"
            slot_map[(ptr_sym, ptr_off)] = (expr, None)
            continue
        tm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", tgt)
        if tm and tm.group(1) in syms:
            ts = tm.group(1)
            to = int(tm.group(2), 16) if tm.group(2) else 0
            if to == 0:
                expr = f"(void**){addr_prefix(source_text, ts)}{ts}"
            else:
                expr = f"(void**)((u8*){addr_prefix(source_text, ts)}{ts} + 0x{to:X})"
            slot_map[(ptr_sym, ptr_off)] = (expr, None)

    if extern:
        sorted_ext = sorted(extern, key=lambda e: syms.get(e[0], 0) + e[1])
        n = len(sorted_ext)
        trailer = excess.get(file_id)
        if trailer is not None and len(trailer) >= 2*n:
            tail = trailer[-2*n:]
            fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]
            for (ptr_sym, ptr_off, tgt_str), tfid in zip(sorted_ext, fids):
                try:
                    tgt_byte = int(tgt_str, 16)
                except ValueError:
                    continue
                ts, delta = sym_near(tfid, tgt_byte)
                if ts is None:
                    continue
                if delta == 0:
                    expr = f"(void**){addr_prefix(source_text, ts)}{ts}"
                else:
                    expr = f"(void**)((u8*){addr_prefix(source_text, ts)}{ts} + 0x{delta:X})"
                slot_map[(ptr_sym, ptr_off)] = (expr, ts)
                extern_syms_needed.add(ts)
    return slot_map, extern_syms_needed


MOBJSUB_SLOT_OFFSETS = [0x04, 0x2C]  # sprites, palettes


def rewrite_file(file_id):
    c_path = target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        return False
    reloc_path = c_path.replace(".c", ".reloc")
    if not os.path.exists(reloc_path):
        return False

    with open(c_path) as f:
        text = f.read()

    slot_map, extern_syms = build_slot_map(file_id, reloc_path, text)
    if not slot_map:
        return False
    new_text = text
    changed = 0
    used_extern_syms = set()
    used_intern_syms = set()

    # Iterate every MObjSub definition (match to the closing `};` on its own line)
    pattern = re.compile(r"(MObjSub\s+(d\w+)\s*=\s*\{)(.*?)(\n\};)", re.DOTALL)

    def replace_mobjsub(m):
        nonlocal changed
        header, sym, body, closer = m.group(1), m.group(2), m.group(3), m.group(4)
        # Match every (void**) cast, including already-symbolic ones, so we
        # count the positional index correctly (slot 0x04 = first cast,
        # slot 0x24 = second). Only rewrite raw-hex casts.
        all_casts = list(re.finditer(r"\(void\*\*\)\s*(\(?\S[^,\n]*)", body))
        new_body = body
        for i, cm in enumerate(all_casts):
            if i >= len(MOBJSUB_SLOT_OFFSETS):
                break
            struct_off = MOBJSUB_SLOT_OFFSETS[i]
            # Only rewrite if this cast is a raw hex literal AND the slot
            # has a reloc mapping.
            hex_m = re.match(r"^0x([0-9A-Fa-f]+)$", cm.group(1).strip().rstrip(","))
            if not hex_m:
                continue  # already-symbolic or complex expression — leave
            key = (sym, struct_off)
            if key not in slot_map:
                continue
            val = int(hex_m.group(1), 16)
            if val == 0:
                continue
            expr, extern_sym = slot_map[key]
            if extern_sym:
                used_extern_syms.add(extern_sym)
            else:
                m2 = re.search(r"\(u8\*\)&?(\w+)|\(void\*\*\)&?(\w+)", expr)
                if m2:
                    intern_sym = m2.group(1) or m2.group(2)
                    used_intern_syms.add(intern_sym)
            old_cast_text = f"(void**)0x{hex_m.group(1)}"
            new_body = new_body.replace(old_cast_text, expr, 1)
            changed += 1
        return header + new_body + closer

    new_text = pattern.sub(replace_mobjsub, new_text)

    # For intra-file references used BEFORE the symbol is defined, emit
    # forward `extern` declarations so IDO can link them.
    all_new_externs = set(used_extern_syms)
    # Only add forward declarations for intra-file symbols used before their definition
    for sym in used_intern_syms:
        # Find position of symbol usage and position of symbol definition
        use_pos = new_text.find(sym)
        def_match = re.search(rf"\n(?:static\s+)?(?:u8|u16|u32|Vtx|Gfx|DObjDesc|Sprite|MObjSub|AObjEvent32|MPGroundData|WPAttributes|ITAttributes)\s+{re.escape(sym)}\b", new_text)
        if use_pos >= 0 and def_match and use_pos < def_match.start():
            all_new_externs.add(sym)

    if all_new_externs:
        already = set(re.findall(r"^\s*extern\s+[^;]*?\s([A-Za-z_]\w*)\s*\[", new_text, re.MULTILINE))
        missing = [s for s in all_new_externs if s not in already]
        if missing:
            decl_block = ["", "/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */"]
            for s in sorted(missing):
                decl_block.append(f"extern u8 {s}[];")
            lines = new_text.split("\n")
            last_inc = max(
                (i for i, ln in enumerate(lines) if ln.startswith("#include")),
                default=-1,
            )
            if last_inc >= 0:
                lines[last_inc+1:last_inc+1] = decl_block
            new_text = "\n".join(lines)

    if new_text == text:
        return False
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"fid {file_id} ({target_name}): resolved {changed} MObjSub chain pointer(s)")
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()

    if args.all:
        targets = sorted({
            int(re.match(r"^(\d+)_", fn).group(1))
            for fn in os.listdir(RELOC_DIR)
            if fn.endswith(".c") and not fn.endswith(".jp.c")
        })
    else:
        targets = args.file_ids

    for fid in targets:
        rewrite_file(fid)


if __name__ == "__main__":
    main()
