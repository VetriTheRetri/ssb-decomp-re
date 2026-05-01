#!/usr/bin/env python3
"""
Type symbols in fighter Model files based on the casts that fighter
Main files use to reference them in `FTModelPart` arrays.

Each `FTModelPart` entry has 4 pointer fields and a flags byte:

    { (Gfx*)<dl>, (MObjSub**)<mobjsubs>, (AObjEvent32**)<costume_anim>,
      (AObjEvent32**)<main_anim>, <flags> }

When the cast is `(<T>**)&<sym>`, the target symbol `<sym>` is itself
an `<T> *X[N]` array (one level of indirection — `&array` is `T(*)[N]`,
which decays to `T**`). We use this to retype `u8 <sym>[N]` blocks in
the Model file as the proper pointer-array type.

Substitutions performed:
    (AObjEvent32**)&<sym>  -> typed as `AObjEvent32 *<sym>[N/4]`
    (MObjSub**)&<sym>      -> typed as `MObjSub *<sym>[N/4]`
    (Gfx*)&<sym>           -> only when sym is currently u8 with size %8==0,
                              retyped as `Gfx <sym>[N/8]`. Already-typed
                              Gfx blocks are left alone.

Cases that are SKIPPED (logged for follow-up):
    (T**)((u8*)<sym> + 0xN)  — mid-block ref; sym would need splitting
                                first.
    cast target already typed — leave alone.

Usage:
    tools/typeFromMainPartRefs.py            # process all *Main.c
    tools/typeFromMainPartRefs.py --dry-run
"""

import argparse
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")
OBJDIR = os.path.join(PROJECT_DIR, "build", "src", "relocData", ".build")


def find_main_files():
    return sorted(p for p in os.listdir(RELOC_DIR)
                  if re.match(r"^\d+_\w+Main\.c$", p))


# Match `(<Type>)<expr>` where expr is `<&sym>` or `((u8*)<sym> + 0xN)` etc.
_CAST_RE = re.compile(
    r"\((Gfx\s*\*|MObjSub\s*\*\*|AObjEvent32\s*\*\*)\)\s*"
    r"(?:&\s*(?P<sym1>d\w+)"
    r"|\(\s*\(\s*u8\s*\*\)\s*(?P<sym2>d\w+)\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\)"
    r"|(?P<sym3>d\w+))"
)


def cast_type_to_target(cast_type):
    """Map cast type string (with ** or *) to the target sym's declared type."""
    cast_type = re.sub(r"\s+", "", cast_type)
    if cast_type == "Gfx*":
        return "Gfx"
    if cast_type == "MObjSub**":
        return "MObjSubPtr"
    if cast_type == "AObjEvent32**":
        return "AObjEvent32Ptr"
    return None


def collect_main_refs():
    """Walk every FTModelPart array across every *Main.c file and return
    a dict {target_sym: (target_type, [main_file …])}.

    target_type ∈ {'Gfx', 'MObjSubPtr', 'AObjEvent32Ptr'}.
    Only `(<T>**)&<sym>` and `(Gfx*)&<sym>` forms are recorded; offset
    forms are logged and skipped."""
    refs = {}
    skipped_offset_forms = []

    for main_fn in find_main_files():
        text = open(os.path.join(RELOC_DIR, main_fn)).read()
        for blk in re.finditer(
            r"FTModelPart\s+(\w+)\[(\d+)\]\s*=\s*\{(.*?)\n\};",
            text, re.DOTALL,
        ):
            body = blk.group(3)
            for m in _CAST_RE.finditer(body):
                cast_type = m.group(1)
                tgt_type = cast_type_to_target(cast_type)
                if tgt_type is None:
                    continue
                sym = m.group("sym1") or m.group("sym3")
                off_sym = m.group("sym2")
                if off_sym is not None:
                    skipped_offset_forms.append(
                        (main_fn, off_sym, m.group("off"), tgt_type))
                    continue
                if sym is None:
                    continue
                # Ignore already-typed targets we shouldn't change. Specifically,
                # `Joint_*_DisplayList` and `*MObjSub*` syms are clearly Gfx/MObjSub-related
                # but we only retype when the target is currently `u8`. We'll re-check
                # at apply time.
                existing_type, existing_files = refs.get(sym, (None, []))
                if existing_type is not None and existing_type != tgt_type:
                    print(f"  WARNING: {sym} cast as both {existing_type} and {tgt_type}; skipping")
                    refs[sym] = ("CONFLICT", existing_files + [main_fn])
                    continue
                refs[sym] = (tgt_type, existing_files + [main_fn])
    return refs, skipped_offset_forms


def model_file_for_sym(sym):
    """Find the .c file that declares `sym`. Returns (path, fid, name) or
    None. Symbol prefix `dXxxModel_*` typically maps to a `_Model.c` file
    but we just grep."""
    for fn in os.listdir(RELOC_DIR):
        if not fn.endswith(".c"):
            continue
        path = os.path.join(RELOC_DIR, fn)
        try:
            text = open(path).read()
        except OSError:
            continue
        if re.search(rf"^[A-Za-z]\w*[\s*]+{re.escape(sym)}\b", text, re.MULTILINE):
            m = re.match(r"^(\d+)_(\w+)\.c$", fn)
            if m:
                return path, int(m.group(1)), m.group(2)
    return None


def nm_offsets(fid):
    obj = os.path.join(OBJDIR, f"{fid}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True)
    out = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            o = int(p[0], 16)
            if p[2] not in out or o < out[p[2]]:
                out[p[2]] = o
    return out


def parse_reloc_targets(reloc_path, syms):
    """Return {abs_ptr_byte_offset: 'sym_label' or 'sym+0xN' string} for
    `intern` entries (so we can resolve pointer-array entries to symbols)."""
    out = {}
    if not os.path.exists(reloc_path):
        return out
    for ln in open(reloc_path):
        s = ln.strip()
        if not s or s.startswith("#"):
            continue
        parts = s.split()
        if len(parts) != 3 or parts[0] != "intern":
            continue
        m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
        if not m or m.group(1) not in syms:
            continue
        ptr_off = syms[m.group(1)] + (int(m.group(2), 16) if m.group(2) else 0)
        out[ptr_off] = parts[2]
    return out


def asset_path(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            return p
    return None


def retype_block(model_path, fid, sym, target_type, dry_run=False):
    """Find `u8 <sym>[N] = { #include <...> };` in `model_path` and retype
    based on `target_type`. Returns (status_str, applied)."""
    text = open(model_path).read()
    decl_re = re.compile(
        rf"(?P<indent>^[ \t]*)?u8 {re.escape(sym)}\[(?P<n>\d+|0x[0-9A-Fa-f]+)\]"
        rf"\s*=\s*\{{\n\s*#include <(?P<inc>[^>]+)>\n\}};",
        re.MULTILINE,
    )
    m = decl_re.search(text)
    if not m:
        # Maybe already typed — check briefly
        if re.search(rf"^(?:Gfx|MObjSub\s*\*|AObjEvent32\s*\*)\s+{re.escape(sym)}\[", text, re.MULTILINE):
            return ("already_typed", False)
        return ("not_u8_or_missing", False)

    nbytes_str = m.group("n")
    nbytes = int(nbytes_str, 16) if nbytes_str.startswith("0x") else int(nbytes_str)
    inc = m.group("inc")

    if target_type in ("AObjEvent32Ptr", "MObjSubPtr"):
        if nbytes % 4 != 0:
            return ("wrong_size_not_4", False)
        n_entries = nbytes // 4
        elem_type = "AObjEvent32" if target_type == "AObjEvent32Ptr" else "MObjSub"
        # Read pointer values from binary; resolve via .reloc + nm
        ap = asset_path(fid)
        if ap is None:
            return ("no_binary", False)
        raw = open(ap, "rb").read()
        syms = nm_offsets(fid)
        sym_off = syms.get(sym)
        if sym_off is None:
            return ("no_nm_offset", False)
        if sym_off + nbytes > len(raw):
            return ("size_overflow", False)
        # Parse reloc to know which slots are non-NULL
        reloc_path = os.path.join(RELOC_DIR, os.path.basename(model_path).replace(".c", ".reloc"))
        reloc_targets = parse_reloc_targets(reloc_path, syms)
        entries = []
        for i in range(n_entries):
            ent_off = sym_off + i * 4
            if ent_off in reloc_targets:
                # Use the reloc target as the symbolic ref
                tgt = reloc_targets[ent_off]
                tm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", tgt)
                if tm and tm.group(2):
                    entries.append(f"\t({elem_type} *)((u8*){tm.group(1)} + 0x{int(tm.group(2), 16):X}),")
                else:
                    entries.append(f"\t({elem_type} *){tgt},")
            else:
                # Read the raw word; if zero, NULL; else keep as raw (extern target)
                raw_word = struct.unpack(">I", raw[ent_off:ent_off + 4])[0]
                if raw_word == 0:
                    entries.append("\tNULL,")
                else:
                    entries.append(f"\t({elem_type} *)0x{raw_word:08X},  /* extern */")

        new_decl = (
            f"{elem_type} *{sym}[{n_entries}] = {{\n"
            + "\n".join(entries)
            + "\n};"
        )
        if dry_run:
            return (f"would_retype_to_{elem_type}*", True)
        text = text[:m.start()] + new_decl + text[m.end():]
        open(model_path, "w").write(text)
        return (f"retyped_to_{elem_type}_ptr", True)

    if target_type == "Gfx":
        # Gfx blocks are typically already typed by `typeRelocBlocks.py`;
        # skip if already typed. If still u8 with size %8 == 0, leave for
        # the existing tool.
        return ("gfx_skipped_use_typeRelocBlocks", False)

    return ("unknown_target_type", False)


def add_forward_externs(path, retyped_syms):
    """For each newly-typed sym, add `extern <type> *<sym>[];` near the
    top of the file. Also scan each retyped array's entries and add
    `extern u8 <target>[];` for any target sym that's referenced before
    its u8 definition (only when no other extern already covers it)."""
    text = open(path).read()
    new_externs = []
    declared_externs = set(re.findall(r"^extern\s+\w[\w\s\*]*?\b(d\w+)\[\]\s*;", text, re.MULTILINE))
    for sym, elem_type in retyped_syms:
        if sym in declared_externs:
            continue
        new_externs.append(f"extern {elem_type} *{sym}[];")
        declared_externs.add(sym)

    # Scan retyped arrays' entries for targets that aren't yet extern-declared
    # AND that point at a u8 declaration somewhere later in the file.
    referenced_targets = set()
    for sym, elem_type in retyped_syms:
        decl_re = re.compile(
            rf"^{re.escape(elem_type)}\s*\*\s*{re.escape(sym)}\[\d+\]\s*=\s*\{{\n((?:.*\n)*?)\}};",
            re.MULTILINE,
        )
        m = decl_re.search(text)
        if not m:
            continue
        for tgt in re.finditer(r"\((?:AObjEvent32|MObjSub|Gfx)\s*\*\)(d\w+)\b", m.group(1)):
            target = tgt.group(1)
            if target in declared_externs or target in referenced_targets:
                continue
            referenced_targets.add(target)
    for target in sorted(referenced_targets):
        # Look up the target's type in the source
        m_decl = re.search(
            rf"^(u8|u16|u32|Vtx|Gfx|MObjSub|DObjDesc|DObjDLLink|AObjEvent32)\s*\*?\s*{re.escape(target)}\[",
            text, re.MULTILINE,
        )
        if not m_decl:
            continue
        target_type = m_decl.group(1)
        # Detect whether the declaration uses a `*` (pointer-array form)
        ptr_match = re.search(
            rf"^{re.escape(target_type)}\s*(\*?)\s*{re.escape(target)}\[",
            text, re.MULTILINE,
        )
        ptr_part = ptr_match.group(1) if ptr_match else ""
        new_externs.append(f"extern {target_type} {ptr_part}{target}[];")
    if not new_externs:
        return
    # Insert after the LAST top-level `extern u32 dXxx[]` (or after the
    # last `#include` block if no externs exist).
    last_extern = None
    for m in re.finditer(r"^extern\s+\w+(?:\s*\*\*?)?\s*d\w+\[\];?\s*\n", text, re.MULTILINE):
        last_extern = m
    if last_extern:
        anchor = last_extern.end()
    else:
        last_inc = None
        for m in re.finditer(r"^#include\s+[<\"][^>\"]+[>\"]\s*\n", text, re.MULTILINE):
            last_inc = m
        anchor = last_inc.end() if last_inc else 0
    insertion = "\n".join(new_externs) + "\n"
    text = text[:anchor] + insertion + text[anchor:]
    open(path, "w").write(text)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    refs, skipped = collect_main_refs()
    print(f"Collected {len(refs)} target syms, {len(skipped)} skipped (offset form)")

    counts = {"retyped_to_AObjEvent32_ptr": 0, "retyped_to_MObjSub_ptr": 0,
              "already_typed": 0, "not_u8_or_missing": 0,
              "wrong_size_not_4": 0, "no_nm_offset": 0,
              "gfx_skipped_use_typeRelocBlocks": 0,
              "would_retype": 0, "errors": 0}

    # Track per-file: list of (sym, elem_type) for forward-extern injection
    per_file_retyped = {}

    for sym, (tgt_type, mains) in sorted(refs.items()):
        if tgt_type == "CONFLICT":
            continue
        loc = model_file_for_sym(sym)
        if loc is None:
            counts["errors"] += 1
            continue
        path, fid, name = loc
        status, applied = retype_block(path, fid, sym, tgt_type,
                                       dry_run=args.dry_run)
        counts[status] = counts.get(status, 0) + 1
        if applied and tgt_type in ("AObjEvent32Ptr", "MObjSubPtr"):
            elem_type = "AObjEvent32" if tgt_type == "AObjEvent32Ptr" else "MObjSub"
            per_file_retyped.setdefault(path, []).append((sym, elem_type))

    if not args.dry_run:
        for path, lst in per_file_retyped.items():
            add_forward_externs(path, lst)

    print()
    for k, v in sorted(counts.items(), key=lambda x: -x[1]):
        if v > 0:
            print(f"  {k}: {v}")

    if skipped:
        print(f"\n{len(skipped)} offset-form refs skipped (need split first):")
        for s in skipped[:8]:
            print(f"  {s[0]}: ({s[3]}**)((u8*){s[1]} + 0x{s[2]})")


if __name__ == "__main__":
    main()
