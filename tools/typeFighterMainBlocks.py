#!/usr/bin/env python3
"""
Promote the u32[N] sub-blocks in a fighter Main.c to their proper struct
types — the same shape FoxMain got by hand in 209_FoxMain.c.

Each sub-block was split out by tools/typeFighterMainPre.py keyed off the
FTAttributes pointer fields. This tool walks those sub-blocks and rewrites
each with the appropriate struct initializer:

  - hiddenparts            u32[16]             -> FTHiddenPart[4]
  - sub_0xNNN (modelparts) u32[N]              -> FTModelPart[N/5]
    (20 bytes per FTModelPart: Gfx*, MObjSub**, AObjEvent32**, AObjEvent32**, u8 flags)
  - modelparts_container   u32[N]              -> FTModelPartDesc*[N]
  - textureparts_container u32[1] or u32[2]    -> FTTexturePartContainer
  - commonparts_container  u32[8]              -> FTCommonPartContainer
  - thrown_status          u32[N]              -> FTThrownStatus[N/2]
    (status fields written as FTCommonStatus enum names)
  - stock_luts (sub_0xNNN) u32[4]              -> int*[4]
  - sprites                u32[3]              -> FTSprites
  - skeleton_dls           u32[N]              -> FTSkeleton[N/2]
  - skeleton               u32[3]              -> FTSkeleton*[3]
    (slot 0 stores a joint id cast as FTSkeleton*)

Run after resolveMainPointers.py has made every pointer symbolic. The
u32[] source then has `(u32)<expr>` casts that we just strip back to a
direct reference.

Usage:
    tools/typeFighterMainBlocks.py <fid>
    tools/typeFighterMainBlocks.py --all
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


# --- FTCommonStatus enum parse (reused from earlier) ----------------------

_status_map = None


def status_map():
    global _status_map
    if _status_map is not None:
        return _status_map
    with open(os.path.join(PROJECT_DIR, "src", "ft", "ftdef.h")) as f:
        text = f.read()
    m = re.search(r"typedef enum FTCommonStatus\s*\{([^}]*?)\}\s*FTCommonStatus",
                  text, re.DOTALL)
    body = m.group(1)
    ord_ = 0
    out = {}
    for ln in body.splitlines():
        s = re.sub(r"//.*$|/\*.*?\*/", "", ln).strip().rstrip(",;")
        if not s or s.startswith("#"):
            continue
        m2 = re.match(r"(nFT\w+)(?:\s*=\s*(\S+))?$", s)
        if not m2:
            continue
        name, val = m2.group(1), m2.group(2)
        if val is None:
            out.setdefault(ord_, name)
            ord_ += 1
        elif val.startswith("0x") or val.isdigit():
            ord_ = int(val, 16) if val.startswith("0x") else int(val)
            out.setdefault(ord_, name)
            ord_ += 1
        # else: alias — no advance
    _status_map = out
    return out


def status_name(v):
    if v == -1 or v == 0xFFFFFFFF:
        return "-1"
    m = status_map()
    return m.get(v, str(v))


# --- Helpers --------------------------------------------------------------

BLOCK_RE = re.compile(
    r"(/\*[^*]*\*/\s*\n)?"
    r"u32\s+(d\w+?)(hiddenparts|thrown_status|modelparts_container|"
    r"textureparts_container|commonparts_container|sprites|skeleton|"
    r"skeleton_dls|stock_luts|sub_0x[0-9A-Fa-f]+)\s*"
    r"\[(\d+)\]\s*=\s*\{([\s\S]*?)\n\};",
    re.MULTILINE,
)


U32_EXPR_RE = re.compile(r"\(u32\)\s*(\S+?)(?=\s*,?\s*(?:/\*|$|\n|,))")


def parse_u32_values(body):
    """Return a list of tuples (kind, text) for each comma-separated u32
    entry in `body`. Kind is 'hex' (bare 0x...), 'expr' (e.g. (u32)&sym or
    (u32)((u8*)sym + N)), or 'zero'."""
    out = []
    # Strip comments; they don't participate in value count.
    clean = re.sub(r"/\*.*?\*/", "", body, flags=re.DOTALL)
    # Tokenise by top-level commas (no nested parens here beyond casts —
    # but (u32) casts have parens, so track depth).
    depth = 0
    cur = ""
    for ch in clean:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            s = cur.strip()
            if s:
                out.append(s)
            cur = ""
            continue
        cur += ch
    s = cur.strip()
    if s:
        out.append(s)
    return out


def strip_u32_cast(v):
    """Turn `(u32)&sym` into `&sym`, `(u32)((u8*)sym + N)` into `((u8*)sym + N)`,
    leave hex literals and signed ints unchanged."""
    m = re.match(r"^\(u32\)\s*(.+)$", v)
    if m:
        return m.group(1).strip()
    return v


# --- Per-block rewrite routines -------------------------------------------

def rewrite_hiddenparts(comment, name, count, body):
    """u32[16] -> FTHiddenPart[4]."""
    vals = parse_u32_values(body)
    if len(vals) % 4 != 0:
        return None
    entries = []
    for i in range(0, len(vals), 4):
        a, b, c, d = (v for v in vals[i:i + 4])
        entries.append(f"\t{{ {a}, {b}, {c}, {d} }},")
    n = len(vals) // 4
    return (comment or "") + f"FTHiddenPart {name}[{n}] = {{\n" + "\n".join(entries) + "\n};"


def rewrite_modelpart_array(comment, name, count, body):
    """u32[N*5] -> FTModelPart[N] (5 u32 slots per entry: dl, mobjsubs,
    costume_matanim_joints, main_matanim_joints, flags+pad)."""
    vals = parse_u32_values(body)
    if len(vals) % 5 != 0:
        return None
    entries = []
    for i in range(0, len(vals), 5):
        dl = strip_u32_cast(vals[i])
        mobj = strip_u32_cast(vals[i + 1])
        cost = strip_u32_cast(vals[i + 2])
        mama = strip_u32_cast(vals[i + 3])
        flags_raw = vals[i + 4]
        # `dl` is a Gfx*. If it's already &sym or ((u8*)sym+N), wrap in (Gfx*).
        dl_str = dl if dl == "NULL" or dl == "0" else f"(Gfx*){dl}"
        mobj_str = mobj if mobj in ("NULL", "0", "0x00000000") else f"(MObjSub**){mobj}"
        cost_str = cost if cost in ("NULL", "0", "0x00000000") else f"(AObjEvent32**){cost}"
        mama_str = mama if mama in ("NULL", "0", "0x00000000") else f"(AObjEvent32**){mama}"
        # Flags byte lives in the HIGH byte of the 4-byte slot (big-endian).
        # Extract it explicitly — writing a u32 literal like 0x40000000 into
        # a u8 field drops the top byte and loses the flag.
        try:
            flags_int = int(flags_raw, 16) if flags_raw.startswith("0x") else int(flags_raw)
        except ValueError:
            flags_int = 0
        flags_byte = (flags_int >> 24) & 0xFF
        entries.append(
            f"\t{{ {dl_str}, {norm_null(mobj_str)}, {norm_null(cost_str)}, "
            f"{norm_null(mama_str)}, 0x{flags_byte:02X} }},")
    n = len(vals) // 5
    return (comment or "") + f"FTModelPart {name}[{n}] = {{\n" + "\n".join(entries) + "\n};"


def norm_null(s):
    return "NULL" if s in ("0", "0x00000000") else s


def rewrite_modelparts_container(comment, name, count, body):
    """u32[N] -> FTModelPartDesc*[N]. Each u32 is either 0 (NULL) or a
    `(u32)sym` cast for a pointer into a modelparts_desc sub-block."""
    vals = parse_u32_values(body)
    entries = []
    for v in vals:
        v_clean = strip_u32_cast(v)
        if v_clean in ("0", "0x00000000", "NULL"):
            entries.append("NULL")
        else:
            entries.append(f"(FTModelPartDesc*){v_clean}")
    # Fold into rows of 6
    rows = []
    for i in range(0, len(entries), 6):
        rows.append("\t" + ", ".join(entries[i:i + 6]) + ",")
    return ((comment or "") +
            f"FTModelPartDesc *{name}[{len(entries)}] = {{\n"
            + "\n".join(rows) + "\n};")


def rewrite_textureparts_container(comment, name, count, body):
    """u32[N] -> FTTexturePartContainer (always 2 entries packed into u32s).
    Bytes are [joint_id, detail[0], detail[1], pad, joint_id, detail[0],
    detail[1], pad] — packed as 2 u32s in most fighters; some files use 1
    u32 aggregate."""
    vals = parse_u32_values(body)
    if not vals:
        return None
    # Combine all u32s into a flat byte list (big-endian)
    bts = []
    for v in vals:
        try:
            iv = int(v, 16) if v.startswith("0x") else int(v)
        except ValueError:
            return None
        bts += [(iv >> 24) & 0xFF, (iv >> 16) & 0xFF, (iv >> 8) & 0xFF, iv & 0xFF]
    # Pack bytes into FTTexturePart[2] = 2*3 = 6 bytes of data + 2 pad
    if len(bts) < 6:
        return None
    e0 = (bts[0], bts[1], bts[2])
    # Find the 2nd entry — starts right after the first one; sometimes
    # there's 1 pad byte between, but with packed 3-byte structs the 2nd
    # struct starts at byte 3.
    e1 = (bts[3], bts[4], bts[5]) if len(bts) >= 6 else (0, 0, 0)
    return ((comment or "") +
            f"FTTexturePartContainer {name} = {{\n"
            f"\t{{\n"
            f"\t\t{{ 0x{e0[0]:02X}, {{ 0x{e0[1]:02X}, 0x{e0[2]:02X} }} }},\n"
            f"\t\t{{ 0x{e1[0]:02X}, {{ 0x{e1[1]:02X}, 0x{e1[2]:02X} }} }},\n"
            f"\t}},\n"
            f"}};")


def rewrite_commonparts_container(comment, name, count, body):
    """u32[8] -> FTCommonPartContainer (2 × FTCommonPart). Each part has
    4 u32 slots: dobjdesc, p_mobjsubs, p_costume_matanim_joints, flags."""
    vals = parse_u32_values(body)
    if len(vals) != 8:
        return None
    ents = []
    for i in (0, 4):
        do = strip_u32_cast(vals[i])
        mo = strip_u32_cast(vals[i + 1])
        mj = strip_u32_cast(vals[i + 2])
        fl_raw = vals[i + 3]
        do_s = "NULL" if do in ("0", "0x00000000") else f"(DObjDesc*){do}"
        mo_s = "NULL" if mo in ("0", "0x00000000") else f"(MObjSub***){mo}"
        mj_s = "NULL" if mj in ("0", "0x00000000") else f"(AObjEvent32***){mj}"
        # flags byte is big-endian top byte of this 4-byte slot
        try:
            fl_int = int(fl_raw, 16) if fl_raw.startswith("0x") else int(fl_raw)
        except ValueError:
            fl_int = 0
        fl_byte = (fl_int >> 24) & 0xFF
        ents.append(f"\t\t{{ {do_s}, {mo_s}, {mj_s}, 0x{fl_byte:02X} }},")
    return ((comment or "") +
            f"FTCommonPartContainer {name} = {{\n"
            f"\t{{\n" + "\n".join(ents) + "\n\t},\n};")


def rewrite_thrown_status(comment, name, count, body):
    """u32[N*2] -> FTThrownStatus[N] with FTCommonStatus enum names."""
    vals = parse_u32_values(body)
    if len(vals) % 2 != 0:
        return None
    entries = []
    # Compute max name width for alignment
    def to_int(v):
        try:
            if v.startswith("0x"):
                return int(v, 16)
            return int(v)
        except ValueError:
            return 0
    raw_pairs = [(to_int(vals[i]), to_int(vals[i + 1]))
                 for i in range(0, len(vals), 2)]
    # Treat 0xFFFFFFFF as -1
    def norm(x):
        return -1 if x == 0xFFFFFFFF else x
    nameset = set()
    for a, b in raw_pairs:
        nameset.add(status_name(norm(a)))
        nameset.add(status_name(norm(b)))
    width = max(len(n) for n in nameset)
    for a, b in raw_pairs:
        na = status_name(norm(a))
        nb = status_name(norm(b))
        entries.append(f"\t{{ {na:>{width}}, {nb:<{width}} }},")
    return ((comment or "") +
            f"FTThrownStatus {name}[{len(raw_pairs)}] = {{\n" +
            "\n".join(entries) + "\n};")


def rewrite_stock_luts(comment, name, count, body):
    """u32[4] -> int*[4]."""
    vals = parse_u32_values(body)
    entries = []
    for v in vals:
        vc = strip_u32_cast(v)
        if vc in ("0", "0x00000000"):
            entries.append("NULL")
        else:
            entries.append(f"(int*){vc}")
    rows = ["\t" + e + "," for e in entries]
    return ((comment or "") +
            f"int *{name}[{len(entries)}] = {{\n" + "\n".join(rows) + "\n};")


def rewrite_sprites(comment, name, count, body):
    """u32[3] -> FTSprites (stock_sprite, stock_luts, emblem)."""
    vals = parse_u32_values(body)
    if len(vals) != 3:
        return None
    ss, sl, em = (strip_u32_cast(v) for v in vals)
    def pick(raw, cast):
        if raw in ("0", "0x00000000"):
            return "NULL"
        return f"({cast}){raw}"
    return ((comment or "") +
            f"FTSprites {name} = {{\n"
            f"\t{pick(ss, 'Sprite*')}, /* stock_sprite */\n"
            f"\t{pick(sl, 'int**')}, /* stock_luts */\n"
            f"\t{pick(em, 'Sprite*')}, /* emblem */\n}};")


def rewrite_skeleton_dls(comment, name, count, body):
    """u32[N*2] -> FTSkeleton[N]. Each FTSkeleton is (Gfx* dl | Gfx** dls) + u8 flags."""
    vals = parse_u32_values(body)
    if len(vals) % 2 != 0:
        return None
    entries = []
    for i in range(0, len(vals), 2):
        dl = strip_u32_cast(vals[i])
        fl = vals[i + 1]
        dl_s = "NULL" if dl in ("0", "0x00000000") else f"(Gfx*){dl}"
        # flags: lives in low 8 bits of the second u32 (big-endian: actually
        # the HIGH byte of the u32 — byte 0 of the 4-byte slot). Be defensive
        # and just print the full u32 as numeric flags; rare nonzero cases
        # are handled by the expander downstream.
        try:
            fl_int = int(fl, 16) if fl.startswith("0x") else int(fl)
        except ValueError:
            fl_int = 0
        fl_byte = (fl_int >> 24) & 0xFF  # top byte of the 4-byte slot
        entries.append(f"\t{{ {{ {dl_s} }}, {fl_byte} }},")
    return ((comment or "") +
            f"FTSkeleton {name}[{len(vals) // 2}] = {{\n" +
            "\n".join(entries) + "\n};")


def rewrite_skeleton(comment, name, count, body):
    """u32[3] -> FTSkeleton*[3]. Slot 0 is a joint id, slot 1 is a pointer
    to the FTSkeleton array, slot 2 is NULL."""
    vals = parse_u32_values(body)
    if len(vals) != 3:
        return None
    j = strip_u32_cast(vals[0])
    dls = strip_u32_cast(vals[1])
    tail = strip_u32_cast(vals[2])
    # slot 0: joint id as small int — cast to FTSkeleton* per
    # ftdisplaymain.c:939's `fp->joints[(s32)(attr->skeleton[0])]` idiom.
    try:
        j_int = int(j, 16) if j.startswith("0x") else int(j)
    except ValueError:
        j_int = None
    if j_int is not None:
        j_s = f"(FTSkeleton*){j_int}"
    else:
        j_s = f"(FTSkeleton*){j}"
    dls_s = "NULL" if dls in ("0", "0x00000000") else dls
    tail_s = "NULL" if tail in ("0", "0x00000000") else tail
    return ((comment or "") +
            f"FTSkeleton *{name}[3] = {{\n"
            f"\t{j_s},\n\t{dls_s},\n\t{tail_s},\n}};")


# --- Driver ----------------------------------------------------------------

def process_file(c_path):
    with open(c_path) as f:
        text = f.read()
    # Find typed "desc_0xNNN" blocks to detect modelpart sub-blocks. The
    # _pre split named them `sub_0xNNN` — we rename to `modelparts_desc_0xNNN`
    # if they have FTModelPart-like size (count % 5 == 0 and at least 5).
    # Also find skeleton_dls candidate: sub_0xNNN with all-zero flag-u32s.
    out = text

    def replace(m):
        comment, sym_prefix, suffix, count_str, body = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5)
        count = int(count_str)
        name = sym_prefix + suffix
        handlers = {
            "hiddenparts":              rewrite_hiddenparts,
            "modelparts_container":     rewrite_modelparts_container,
            "textureparts_container":   rewrite_textureparts_container,
            "commonparts_container":    rewrite_commonparts_container,
            "thrown_status":            rewrite_thrown_status,
            "sprites":                  rewrite_sprites,
            "skeleton":                 rewrite_skeleton,
        }
        if suffix in handlers:
            result = handlers[suffix](comment, name, count, body)
            if result is not None:
                return result
        return m.group(0)

    out = BLOCK_RE.sub(replace, out)

    # Sub-block identification uses the .reloc intern entries to locate
    # exactly which `sub_0xNNN` is which named structure:
    #   - stock_luts        = intern target of sprites+0x4
    #   - skeleton_dls      = intern target of skeleton+0x4 (slot[1])
    #   - modelparts_desc_* = intern targets of modelparts_container+<N>
    reloc_path = c_path.replace(".c", ".reloc")
    intern_targets = {}   # ptr_label -> target_label
    if os.path.exists(reloc_path):
        with open(reloc_path) as f:
            for ln in f:
                ln = ln.split("#")[0].strip()
                if not ln.startswith("intern"):
                    continue
                parts = ln.split()
                if len(parts) != 3:
                    continue
                intern_targets[parts[1]] = parts[2]

    prefix = None
    m_pref = re.search(r"d(\w+?Main)_", text)
    if m_pref:
        prefix = "d" + m_pref.group(1)
    if prefix is None:
        with open(c_path, "w") as f:
            f.write(out)
        return 0

    def resolve_intern(label):
        tgt = intern_targets.get(label)
        if tgt is None:
            return None
        return tgt.split("+")[0]  # symbol root

    stock_luts_sym   = resolve_intern(f"{prefix}_sprites+0x4")
    skeleton_dls_sym = resolve_intern(f"{prefix}_skeleton+0x4")
    modelparts_desc_syms = {
        resolve_intern(ptr)
        for ptr in intern_targets
        if ptr.startswith(f"{prefix}_modelparts_container")
    }
    modelparts_desc_syms.discard(None)

    sub_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?"
        r"u32\s+(d\w+?Main_(?:sub_0x[0-9A-Fa-f]+|modelparts_desc_0x[0-9A-Fa-f]+"
        r"|skeleton_dls|stock_luts))\s*\[(\d+)\]\s*=\s*\{([\s\S]*?)\n\};",
        re.MULTILINE,
    )

    rename_map = {}
    def sub_replace(mo):
        comment, full_name, count_str, body = mo.group(1), mo.group(2), mo.group(3), mo.group(4)
        count = int(count_str)
        # skeleton_dls
        if full_name == skeleton_dls_sym:
            new_name = f"{prefix}_skeleton_dls"
            rename_map[full_name] = new_name
            r = rewrite_skeleton_dls(comment, new_name, count, body)
            return r if r is not None else mo.group(0)
        # stock_luts
        if full_name == stock_luts_sym:
            new_name = f"{prefix}_stock_luts"
            rename_map[full_name] = new_name
            r = rewrite_stock_luts(comment, new_name, count, body)
            return r if r is not None else mo.group(0)
        # modelparts_desc_*
        if full_name in modelparts_desc_syms and count % 5 == 0 and count >= 5:
            sub_off = int(full_name.rsplit("_", 1)[-1].lstrip("sub_").lstrip("0x") or "0", 16)
            new_name = f"{prefix}_modelparts_desc_0x{sub_off:03X}"
            if new_name != full_name:
                rename_map[full_name] = new_name
            r = rewrite_modelpart_array(comment, new_name, count, body)
            return r if r is not None else mo.group(0)
        return mo.group(0)
    out = sub_re.sub(sub_replace, out)

    if rename_map:
        for old, new in rename_map.items():
            out = re.sub(rf"\b{re.escape(old)}\b", new, out)

        # Also rewrite the companion .reloc file
        reloc_path = c_path.replace(".c", ".reloc")
        if os.path.exists(reloc_path):
            with open(reloc_path) as f:
                rel_text = f.read()
            for old, new in rename_map.items():
                rel_text = re.sub(rf"\b{re.escape(old)}\b", new, rel_text)
            with open(reloc_path, "w") as f:
                f.write(rel_text)

    # After retyping sub-blocks, the FTAttributes initializer still has
    # `(FTXxx*)dXxxMain_yyy` casts from resolveMainPointers.py. For scalar
    # struct targets (FTCommonPartContainer, FTTexturePartContainer,
    # FTSprites), IDO rejects `(T*)struct_value` as an invalid constant
    # expression — the right form is `&struct_value`. Array targets
    # (FTModelPartDesc*[], FTHiddenPart[], FTThrownStatus[], FTSkeleton[],
    # FTSkeleton*[], FTModelPart[]) decay to pointers naturally.
    SCALAR_STRUCTS = (
        ("(FTCommonPartContainer*)",  "FTCommonPartContainer*"),
        ("(FTTexturePartContainer*)", "FTTexturePartContainer*"),
        ("(FTSprites*)",              "FTSprites*"),
        ("(FTThrownStatusArray*)",    "FTThrownStatusArray*"),
    )
    # Flip `(T*)sym` → `&sym` when `sym` is declared as a bare struct
    # instance (not an array) earlier in the file.
    decl_kinds = {}
    for m in re.finditer(
            r"^([A-Za-z_][\w\s*]*?)\s+(d\w+?Main_\w+)\s*(\[[^\]]*\])?\s*=",
            out, re.MULTILINE):
        decl_kinds[m.group(2)] = (m.group(1).strip(), bool(m.group(3)))
    def attr_slot_replace(mo):
        sym = mo.group(2)
        kind = decl_kinds.get(sym, (None, True))
        if kind[1]:  # is_array — keep cast
            return mo.group(0)
        return f"&{sym}{mo.group(3)}"
    for cast_prefix, _ in SCALAR_STRUCTS:
        escaped = re.escape(cast_prefix)
        out = re.sub(
            rf"{escaped}\s*(d\w+?Main_\w+)([,\s]*)",
            lambda mo, p=cast_prefix: (
                f"&{mo.group(1)}{mo.group(2)}"
                if not decl_kinds.get(mo.group(1), (None, True))[1]
                else f"{p}{mo.group(1)}{mo.group(2)}"
            ),
            out,
        )

    with open(c_path, "w") as f:
        f.write(out)
    return len(rename_map)


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
    for c_path in files:
        renamed = process_file(c_path)
        print(f"{os.path.basename(c_path)}: {renamed} sub-blocks renamed")


if __name__ == "__main__":
    main()
