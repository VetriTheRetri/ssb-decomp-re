#!/usr/bin/env python3
"""
For every typed block declaration in src/relocData/<fid>_*.c that has
a `(<cast>)((u8*)&<sym> + 0x<offset>)` reference targeting itself at a
non-zero internal offset (PARTIAL_SELF, per tools/auditOffsetRefs.py),
split the parent block at each unique referenced offset. Each split
chunk is declared with the parent's element type; references are
rewritten to use the new symbol name.

Why split: the reference `&parent + 0xN` is a stride-style index whose
purpose (which row / frame / sub-element it picks) is opaque. Giving
the target its own name makes the relationship explicit, which
matters most when subsequent typing passes need to walk references
back to typed declarations.

Constraints:
  - Each split offset must be aligned to the parent's element size
    (u8 / u16 / u32 / Vtx[16] / etc.). Mis-aligned offsets are skipped
    with a note (would need a finer-grained split).
  - Parent must use a single `#include <…>` for its body (the standard
    pattern). Inline-initialized parents (`u32 X[] = { 0xAAA, … };`)
    aren't handled here — those are usually small enough to read.
  - Each new chunk gets its own `.<inc-suffix>.inc.c` file at the
    parent's same suffix; tools/extractRelocInc.py regenerates the
    actual byte content at the new symbol's nm offset on the next
    extract.
  - Forward externs are injected at the top of the file (split symbols
    are always declared after the parent).

Usage:
    tools/splitBlockAtSelfRefs.py <fid> [<fid> ...]   # apply
    tools/splitBlockAtSelfRefs.py --dry-run <fid>     # report only
"""
import argparse
import bisect
import os
import re
import subprocess
import glob

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", ".build")

# Element type → size in bytes (used to verify alignment of split offsets).
ELEM_SIZE = {
    "u8": 1, "s8": 1,
    "u16": 2, "s16": 2,
    "u32": 4, "s32": 4, "f32": 4,
    "void": 4,           # for `void *X[]`
    "AObjEvent32": 4,
    "AObjEvent16": 2,
    "Vtx": 16,
    "Gfx": 8,
    "DObjDLLink": 8,
    "MObjSub": 120,
}

# Match a reference of the form `(<cast>)((u8*)&<sym> + 0x<offset>)`.
REF_RE = re.compile(
    r"(?P<full>\((?P<cast>[^)]+)\)\s*\(\s*\(u8\*\)\s*&\s*(?P<sym>\w+)\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\))"
)


def nm_for_fid(fid):
    obj = os.path.join(BUILD_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        return None
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms


def covering_symbol(target_off, sorted_syms):
    offsets = [v for _, v in sorted_syms]
    i = bisect.bisect_right(offsets, target_off) - 1
    if i < 0:
        return None, None
    sym_off = sorted_syms[i][1]
    sym_name = sorted_syms[i][0]
    return sym_name, target_off - sym_off


# Match a typed block declaration with a single #include body. The element
# type and array size live in groups; the included file path is in `inc`.
BLOCK_DECL_RE = re.compile(
    r"(?P<lead>(/\*[^*]*\*/\s*\n)*)"
    r"(?P<type>(?:const\s+)?(?:u8|s8|u16|s16|u32|s32|f32|void\s*\*|AObjEvent16|AObjEvent32|Vtx|Gfx|DObjDLLink|MObjSub))"
    r"\s+(?P<sym>\w+)\s*\[\s*(?P<count>\d+)\s*\]\s*=\s*\{\n"
    r"\t#include <(?P<inc>[^>]+)>\n\};",
    re.MULTILINE,
)


def collect_self_offsets(text, syms):
    """Return {parent_sym: sorted list of internal offsets where the parent
    is referenced via `(cast)((u8*)&parent + N)`}."""
    sorted_syms = sorted(syms.items(), key=lambda kv: kv[1])
    by_parent = {}
    for m in REF_RE.finditer(text):
        sym = m.group("sym")
        off = int(m.group("off"), 16)
        if sym not in syms:
            continue
        target_abs = syms[sym] + off
        target_sym, delta = covering_symbol(target_abs, sorted_syms)
        if target_sym is None or delta == 0:
            continue
        if target_sym != sym:
            continue  # PARTIAL_CROSS — handled by auditOffsetRefs.py rewriter
        by_parent.setdefault(target_sym, set()).add(delta)
    return {s: sorted(offs) for s, offs in by_parent.items()}


def process(fid, dry_run=False):
    paths = sorted(glob.glob(os.path.join(SRC_DIR, f"{fid}_*.c")))
    if not paths:
        print(f"fid {fid}: no .c found")
        return
    c_path = paths[0]

    syms = nm_for_fid(fid)
    if syms is None:
        print(f"fid {fid}: no .o built — skip")
        return

    with open(c_path) as f:
        text = f.read()

    self_offs = collect_self_offsets(text, syms)
    if not self_offs:
        print(f"fid {fid}: no PARTIAL_SELF refs")
        return

    # Index typed-block declarations by symbol so we know how to rewrite each.
    block_decls = {m.group("sym"): m for m in BLOCK_DECL_RE.finditer(text)}

    new_text = text
    new_externs = []  # (sym, type)
    n_split = 0
    n_new_chunks = 0
    n_skipped = 0

    for parent_sym, offs in self_offs.items():
        m = block_decls.get(parent_sym)
        if m is None:
            print(f"  skip {parent_sym}: not a single-#include block decl")
            n_skipped += 1
            continue
        elem_type = m.group("type").replace(" ", "").replace("*", "")
        if elem_type not in ELEM_SIZE:
            print(f"  skip {parent_sym}: element type '{m.group('type')}' not handled")
            n_skipped += 1
            continue
        elem_sz = ELEM_SIZE[elem_type]
        count = int(m.group("count"))
        total_bytes = count * elem_sz
        # Filter offsets that are element-aligned.
        valid_offs = [o for o in offs if o % elem_sz == 0]
        invalid = [o for o in offs if o % elem_sz != 0]
        if invalid:
            print(f"  skip {parent_sym}: misaligned offset(s) for {elem_type} (size {elem_sz}): "
                  f"{[hex(o) for o in invalid]}")
        if not valid_offs:
            n_skipped += 1
            continue

        parent_off = syms[parent_sym]
        boundaries = [0] + valid_offs + [total_bytes]
        chunks = []  # (start, size)
        for i in range(len(boundaries) - 1):
            chunks.append((boundaries[i], boundaries[i + 1] - boundaries[i]))

        # Original includes the same .inc.c file; new chunks need new .inc.c
        # paths. Strip the suffix off the parent's path to derive new ones.
        parent_inc = m.group("inc")
        # path has form "<Sub>/<basename>.<suffix>"
        m_sfx = re.match(r"^(?P<dir>[^/]+)/(?P<base>[^.]+)(?P<suffix>\..+)$", parent_inc)
        if not m_sfx:
            print(f"  skip {parent_sym}: can't parse inc path '{parent_inc}'")
            n_skipped += 1
            continue
        sub_dir = m_sfx.group("dir")
        suffix = m_sfx.group("suffix")  # e.g. ".data.inc.c"

        # Build replacement. First chunk keeps the parent's name + lead.
        lead = m.group("lead") or ""
        replacement = []
        first_off, first_size = chunks[0]
        if lead:
            replacement.append(lead.rstrip())
        replacement.append(
            f"{m.group('type')} {parent_sym}[{first_size // elem_sz}] = {{\n"
            f"\t#include <{parent_inc}>\n"
            f"}};"
        )

        for inner_off, size in chunks[1:]:
            abs_off = parent_off + inner_off
            new_sym = f"{parent_sym}_0x{inner_off:X}"
            new_externs.append((new_sym, m.group("type")))
            inc_basename = f"{m_sfx.group('base')}_0x{inner_off:X}"
            inc_path = f"{sub_dir}/{inc_basename}{suffix}"
            replacement.append(
                f"/* split-self chunk @ +0x{inner_off:X} ({size} bytes, abs 0x{abs_off:X}) */\n"
                f"{m.group('type')} {new_sym}[{size // elem_sz}] = {{\n"
                f"\t#include <{inc_path}>\n"
                f"}};"
            )
            n_new_chunks += 1

        # Rewrite parent ref `(cast)((u8*)&parent + 0xN)` to use the chunk
        # symbol. Build a chunk-start lookup.
        chunk_starts = [(0, parent_sym)]
        for inner_off, _size in chunks[1:]:
            chunk_starts.append((inner_off, f"{parent_sym}_0x{inner_off:X}"))

        ref_re_specific = re.compile(
            rf"\((?P<cast>[^)]+)\)\s*\(\s*\(u8\*\)\s*&\s*{re.escape(parent_sym)}\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\)"
        )
        def rewrite_ref(rm):
            target = int(rm.group("off"), 16)
            for j in range(len(chunk_starts) - 1, -1, -1):
                start, sym = chunk_starts[j]
                if start <= target:
                    delta = target - start
                    cast = rm.group("cast").strip()
                    if delta == 0:
                        return f"({cast})&{sym}"
                    return f"({cast})((u8*)&{sym} + 0x{delta:X})"
            return rm.group(0)

        new_text_after_rewrite = ref_re_specific.sub(rewrite_ref, new_text)
        new_text = new_text_after_rewrite.replace(m.group(0), "\n".join(replacement), 1)
        n_split += 1
        print(f"  split {parent_sym}: {len(chunks) - 1} new chunk(s), elem={elem_type}")

    # Inject forward externs at top of file (only if not already declared).
    if new_externs:
        existing = set(re.findall(r"^extern\s+\S+\s+\*?(d\w+)", new_text, re.MULTILINE))
        to_add = [(s, t) for s, t in new_externs if s not in existing]
        if to_add:
            last = None
            for em in re.finditer(r"^extern\s+[^;]+;", new_text, re.MULTILINE):
                last = em
                if em.end() > 4096:
                    break
            ins = last.end() if last else 0
            extern_text = "\n".join(f"extern {t} {s}[];" for s, t in to_add)
            new_text = new_text[:ins] + "\n" + extern_text + new_text[ins:]

    if dry_run:
        print(f"fid {fid}: WOULD split {n_split} block(s) into {n_new_chunks} new chunk(s); "
              f"skipped {n_skipped} (dry-run)")
    elif n_split:
        with open(c_path, "w") as f:
            f.write(new_text)
        print(f"fid {fid}: split {n_split} block(s) into {n_new_chunks} new chunk(s); "
              f"skipped {n_skipped}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid, args.dry_run)


if __name__ == "__main__":
    main()
