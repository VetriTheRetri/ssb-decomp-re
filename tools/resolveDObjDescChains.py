#!/usr/bin/env python3
"""
Rewrite chain-encoded `(void*)0xAABBCCDD` casts inside DObjDesc array
initializers to symbolic refs via the .reloc metadata.

DObjDesc layout: { s32 id; void *data; Vec3f translate; Vec3f rotate; Vec3f scale; } (44 bytes)
The `data` field is at struct offset 0x04 of each element; element N of a
DObjDesc array is at byte N*44 + 4. For each (void*) cast at such a slot,
look up the intern entry `sym+0x(N*44+4)` in the .reloc and replace with
the symbolic target.

fixRelocChain.py overwrites the chain slot at build time, so byte output
stays identical.

NOT HANDLED (no clean way to symbolicize): chain entries inside the Vec3f
translate/rotate/scale fields of DObjDesc elements. These are the
"terminator chain run" tail of JointTree arrays in fighter Model files —
the chain walks past the .data slots into bytes that the typed source
declares as f32 values like `4.213954025813984e-33f`. The compiled bytes
are correct (chain values reinterpreted as float bit patterns), and
fixRelocChain overwrites them at build time, but the source can't express
them as symbolic refs without breaking the Vec3f struct shape. A future
restructure could declare those terminator elements as a `union { Vec3f v;
u32 raw[3]; }` to make the chain bytes visible — left as TODO.
"""

import argparse
import os
import re
import subprocess

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")

_nm = {}
def nm(fid):
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


def parse_reloc(reloc_path):
    intern = []
    with open(reloc_path) as f:
        for ln in f:
            s = ln.strip()
            if not s or s.startswith("#"): continue
            p = s.split()
            if len(p) != 3 or p[0] != "intern": continue
            m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", p[1])
            if not m: continue
            sym = m.group(1)
            off = int(m.group(2), 16) if m.group(2) else 0
            intern.append((sym, off, p[2]))
    return intern


def sym_near(fid, byte_off):
    syms = nm(fid)
    candidates = [(off, name) for name, off in syms.items()
                  if off <= byte_off and not name.endswith(("_bitmaps", "_dl", "_tex"))]
    if not candidates:
        return None, 0
    best_off, best_name = max(candidates)
    return best_name, byte_off - best_off


def process(file_id):
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

    intern = parse_reloc(reloc_path)
    syms = nm(file_id)

    with open(c_path) as f:
        text = f.read()

    # Build intern map: (ptr_sym, ptr_off) -> replacement expression
    slot_map = {}
    for ptr_sym, ptr_off, tgt in intern:
        if tgt.startswith("0x"):
            try: tgt_byte = int(tgt, 16)
            except ValueError: continue
            ts, delta = sym_near(file_id, tgt_byte)
            if ts is None: continue
            expr = f"(void *){ts}" if delta == 0 else f"(void *)((u8*){ts} + 0x{delta:X})"
        else:
            tm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", tgt)
            if not tm or tm.group(1) not in syms: continue
            ts = tm.group(1)
            to = int(tm.group(2), 16) if tm.group(2) else 0
            expr = f"(void *){ts}" if to == 0 else f"(void *)((u8*){ts} + 0x{to:X})"
        slot_map[(ptr_sym, ptr_off)] = expr

    if not slot_map:
        return False

    # Find every DObjDesc array declaration and walk its elements
    changes = 0
    used_forward_syms = set()
    # Match `DObjDesc dXxx[...] = { ... };` blocks
    for m in list(re.finditer(r"DObjDesc (d\w+)\[\]?[^=]*=\s*\{(.*?)\n\};", text, re.DOTALL)):
        sym = m.group(1)
        body = m.group(2)
        # Split into element strings: `{ id, ptr, {...}, {...}, {...} },`
        # Use a simple brace-balancing scan
        elements = []
        depth = 0
        start = 0
        for i, ch in enumerate(body):
            if ch == "{":
                if depth == 0: start = i
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    elements.append((start, i+1))
        # For each element, check if its data field is a raw-hex cast
        new_body = body
        for idx, (estart, eend) in enumerate(elements):
            elem_text = body[estart:eend]
            cm = re.search(r"\(void\s*\*\)\s*0x([0-9A-Fa-f]+)", elem_text)
            if not cm: continue
            val = int(cm.group(1), 16)
            if val == 0 or (val >> 16) == 0: continue  # NULL or small int
            # Slot position = element idx * 44 + 4
            slot_off = idx * 44 + 4
            key = (sym, slot_off)
            if key not in slot_map: continue
            expr = slot_map[key]
            # Detect which symbol this expr references (for forward decl check)
            sm = re.search(r"\(u8\*\)(\w+)|\(void\s*\*\)(\w+)", expr)
            if sm:
                used_forward_syms.add(sm.group(1) or sm.group(2))
            new_elem = elem_text.replace(cm.group(0), expr, 1)
            new_body = new_body.replace(elem_text, new_elem, 1)
            changes += 1
        if new_body != body:
            text = text.replace(body, new_body, 1)

    # Write back if anything changed
    with open(c_path) as f:
        original = f.read()
    if text == original:
        return False

    # Insert forward extern decls for symbols used before their definition
    if used_forward_syms:
        already = set(re.findall(r"^\s*extern\s+[^;]*?\s([A-Za-z_]\w*)\s*\[", text, re.MULTILINE))
        missing = []
        for sym in sorted(used_forward_syms):
            if sym in already:
                continue
            use_pos = text.find(sym)
            def_re = re.search(
                rf"\n(?:static\s+)?(?:u8|u16|u32|Vtx|Gfx|DObjDesc|Sprite|MObjSub|AObjEvent32|MPGroundData|WPAttributes|ITAttributes)\s+{re.escape(sym)}\b",
                text,
            )
            if use_pos >= 0 and def_re and use_pos < def_re.start():
                missing.append(sym)
        if missing:
            decl_block = ["", "/* Forward DObjDesc chain-target decls for fixRelocChain.py */"]
            for s in missing:
                decl_block.append(f"extern u8 {s}[];")
            lines = text.split("\n")
            last_inc = max((i for i, ln in enumerate(lines) if ln.startswith("#include")), default=-1)
            if last_inc >= 0:
                lines[last_inc+1:last_inc+1] = decl_block
            text = "\n".join(lines)

    with open(c_path, "w") as f:
        f.write(text)
    print(f"fid {file_id} ({target_name}): rewrote {changes} DObjDesc chain ptr(s)")
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
            and re.match(r"^\d+_", fn)
        })
    else:
        targets = args.file_ids
    for fid in targets:
        process(fid)


if __name__ == "__main__":
    main()
