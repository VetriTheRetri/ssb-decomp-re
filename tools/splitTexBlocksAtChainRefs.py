#!/usr/bin/env python3
"""
Split existing typed `u8 Tex_0xN[...]` blocks at chain-reference offsets
that land inside them, so each ptr-array target is its own named symbol
instead of `(u8*)&Tex_X + 0xN`. The chunk reached via a MObjSub.palettes
chain is typed as `u16 palette_0xN[K]`; chunks reached via .sprites stay
as `u8 Tex_0xN[K]`.

How splits are computed per Tex block:
  1. Collect every absolute file-offset that is the target of a chain
     pointer (from the .reloc, after numeric→symbolic resolution).
  2. Filter to offsets that fall *inside* the Tex block (not at its
     start, since 0-offset targets are already symbolic).
  3. Sort, then carve the block into contiguous chunks.
  4. Type each chunk:
       palette chain target → u16[size/2] palette (only for size%2==0)
       sprite  chain target → u8[size] (texture data)
       first chunk          → keep original Tex_0xN (truncated)

After editing the .c, rerun tools/extractRelocInc.py for the fid to
regenerate the per-block .inc.c files at the new sizes.

Usage:
    tools/splitTexBlocksAtChainRefs.py <file_id> [<file_id> ...]
"""
import argparse
import bisect
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")


def nm_symbols(file_id):
    obj = os.path.join(BUILD_DIR, ".build", f"{file_id}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj], capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms


def resolve_numeric(target_off, sorted_syms):
    """Return (sym_name, delta) for the symbol that contains target_off."""
    offsets = [v for _, v in sorted_syms]
    i = bisect.bisect_right(offsets, target_off) - 1
    if i < 0:
        return None, None
    sym_off = sorted_syms[i][1]
    sym_name = sorted_syms[i][0]
    return sym_name, target_off - sym_off


def parse_reloc(reloc_path, syms):
    """Yield (lhs_owner_sym, lhs_word_off, rhs_target_sym, rhs_inner_off, abs_target_off)."""
    sorted_syms = sorted(syms.items(), key=lambda kv: kv[1])
    if not os.path.exists(reloc_path):
        return
    with open(reloc_path) as f:
        for line in f:
            s = line.strip()
            if not s.startswith("intern "):
                continue
            parts = s.split()
            if len(parts) != 3:
                continue
            _, lhs, rhs = parts
            lm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", lhs)
            if not lm or lm.group(1) not in syms:
                continue
            lhs_sym = lm.group(1)
            lhs_off = int(lm.group(2), 16) if lm.group(2) else 0

            rhs_sym = None
            rhs_inner = 0
            abs_tgt = None
            num_match = re.match(r"^0x([0-9a-fA-F]+)$", rhs)
            if num_match:
                abs_tgt = int(num_match.group(1), 16)
                rhs_sym, rhs_inner = resolve_numeric(abs_tgt, sorted_syms)
            else:
                rm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", rhs)
                if rm and rm.group(1) in syms:
                    rhs_sym = rm.group(1)
                    rhs_inner = int(rm.group(2), 16) if rm.group(2) else 0
                    abs_tgt = syms[rhs_sym] + rhs_inner

            if rhs_sym is None:
                continue
            yield lhs_sym, lhs_off, rhs_sym, rhs_inner, abs_tgt


def process(file_id):
    # Locate files
    c_path = None
    for fn in os.listdir(RELOC_DIR):
        if re.match(rf"^{file_id}_\w+\.c$", fn):
            c_path = os.path.join(RELOC_DIR, fn)
            break
    if c_path is None:
        print(f"fid {file_id}: no .c found")
        return
    reloc_path = c_path.replace(".c", ".reloc")
    target_name = re.match(rf"^{file_id}_(\w+)\.c$", os.path.basename(c_path)).group(1)

    syms = nm_symbols(file_id)
    if not syms:
        print(f"fid {file_id}: no nm — build first")
        return

    with open(c_path) as f:
        text = f.read()

    # Identify chain owners that are MObjSub.sprites/palettes ptr arrays.
    # We classify by walking from each MObjSub's +0x4 (sprites) / +0x2C
    # (palettes) reloc entry.
    mobjsub_decls = set()
    for m in re.finditer(r"^MObjSub\s+(\w+)(?:\[\d*\])?\s*=", text, re.MULTILINE):
        mobjsub_decls.add(m.group(1))

    sprite_arrays = set()
    palette_arrays = set()
    chain_entries = list(parse_reloc(reloc_path, syms))
    for lhs_sym, lhs_off, rhs_sym, _rhs_inner, _abs in chain_entries:
        if lhs_sym in mobjsub_decls:
            if lhs_off == 0x4:
                sprite_arrays.add(rhs_sym)
            elif lhs_off == 0x2C:
                palette_arrays.add(rhs_sym)

    # For each chain ptr-array, walk *its* entries to find the actual
    # texture/palette target (and whether the target lands inside an
    # already-typed parent block).
    palette_targets = {}  # parent_sym -> set of inner offsets
    sprite_targets = {}
    for lhs_sym, _lhs_off, rhs_sym, rhs_inner, _abs in chain_entries:
        bucket = None
        if lhs_sym in palette_arrays:
            bucket = palette_targets
        elif lhs_sym in sprite_arrays:
            bucket = sprite_targets
        if bucket is None:
            continue
        if rhs_inner == 0:
            continue  # already its own symbol
        bucket.setdefault(rhs_sym, set()).add(rhs_inner)

    if not palette_targets and not sprite_targets:
        print(f"fid {file_id}: no internal chain refs into existing blocks")
        return

    # Find the original size of each parent block by parsing its `u8 X[N]`
    # declaration. Build a list of edits: for each parent, emit replacement
    # text containing the truncated original + new typed sub-blocks.
    block_decl_re = re.compile(
        r"(?P<lead>(/\*[^*]*\*/\s*\n)?)u8 (?P<sym>\w+)\[(?P<size>\d+)\] = \{\n"
        r"\t#include <(?P<inc>[^>]+)>\n\};",
        re.MULTILINE,
    )
    block_decls = {m.group("sym"): m for m in block_decl_re.finditer(text)}

    new_text = text
    n_palette = 0
    n_sprite = 0
    n_split = 0
    forward_externs = []
    for parent_sym in sorted(set(list(palette_targets) + list(sprite_targets))):
        if parent_sym not in block_decls:
            continue
        if parent_sym not in syms:
            continue
        m = block_decls[parent_sym]
        parent_size = int(m.group("size"))
        parent_inc = m.group("inc")
        parent_off = syms[parent_sym]
        # Annotated lead (the /* @tex ... */ comment) — keep on the
        # truncated original block.
        lead = m.group("lead")
        # Pull the parent's `@tex fmt=...` so we can carry it onto sprite
        # sub-chunks. Width/height won't be valid post-split (the dim
        # described the original tex region), so we drop them; the user
        # can refine via tools/annotateMObjSubSprites.py later.
        parent_fmt = None
        fmt_match = re.search(r"@tex\s+fmt=(\w+)", lead or "")
        if fmt_match:
            parent_fmt = fmt_match.group(1)

        # Combine offsets from both chains.
        offs = sorted(set(palette_targets.get(parent_sym, set())
                          | sprite_targets.get(parent_sym, set())))
        # Drop offsets out of bounds.
        offs = [o for o in offs if 0 < o < parent_size]
        if not offs:
            continue

        # Build chunks: [0..offs[0], offs[0]..offs[1], ..., offs[-1]..parent_size]
        boundaries = [0] + offs + [parent_size]
        chunks = []
        for i in range(len(boundaries) - 1):
            chunks.append((boundaries[i], boundaries[i + 1] - boundaries[i]))

        # Generate replacement block declarations.
        replacement_lines = []
        # First chunk keeps the parent's name and (truncated) Tex annotation.
        first_off, first_size = chunks[0]
        if lead:
            replacement_lines.append(lead.rstrip())
        replacement_lines.append(
            f"u8 {parent_sym}[{first_size}] = {{\n"
            f"\t#include <{parent_inc}>\n"
            f"}};"
        )

        for inner_off, size in chunks[1:]:
            abs_off = parent_off + inner_off
            is_palette = inner_off in palette_targets.get(parent_sym, set())
            is_sprite = inner_off in sprite_targets.get(parent_sym, set())
            new_sym = (f"d{target_name}_palette_0x{abs_off:X}"
                       if is_palette
                       else f"d{target_name}_Tex_0x{abs_off:X}")
            forward_externs.append((new_sym, "u16" if is_palette else "u8"))
            # The extractor names the inc.c by stripping the file's "d<Name>_"
            # prefix and using the rest as the sub-path component.
            inc_basename = new_sym[len(f"d{target_name}_"):]
            # Palette chunks → .palette.inc.c (u16 hex); sprite/tex chunks →
            # .tex.inc.c so previewImagesTextures.py recognises them as textures.
            if is_palette and size % 2 == 0:
                inc_ext = ".palette.inc.c"
            elif is_sprite:
                inc_ext = ".tex.inc.c"
            else:
                inc_ext = ".data.inc.c"
            inc_path = f"{target_name}/{inc_basename}{inc_ext}"
            if is_palette and size % 2 == 0:
                replacement_lines.append(
                    f"/* palette @ 0x{abs_off:X} ({size} bytes) — split from {parent_sym}+0x{inner_off:X} */"
                )
                replacement_lines.append(
                    f"u16 {new_sym}[{size // 2}] = {{\n"
                    f"\t#include <{inc_path}>\n"
                    f"}};"
                )
                n_palette += 1
            else:
                replacement_lines.append(
                    f"/* tex chunk @ 0x{abs_off:X} ({size} bytes) — split from {parent_sym}+0x{inner_off:X} */"
                )
                if parent_fmt:
                    replacement_lines.append(f"/* @tex fmt={parent_fmt} */")
                replacement_lines.append(
                    f"u8 {new_sym}[{size}] = {{\n"
                    f"\t#include <{inc_path}>\n"
                    f"}};"
                )
                # When this chunk is a .sprites chain target we used
                # `.tex.inc.c`; the file won't exist on disk yet —
                # extractRelocInc.py needs to be re-run after the .c is
                # rewritten so the new tex inc.c gets generated.
                n_sprite += 1

        new_text = new_text.replace(m.group(0), "\n".join(replacement_lines), 1)

        # Build (start_off, sym_name) list for the new chunks so we can
        # rewrite `(u32)((u8*)&parent_sym + 0xN)` references in existing
        # u32 ptr arrays to use the new symbol names.
        new_chunks = []  # (start_off, sym, size)
        new_chunks.append((0, parent_sym, chunks[0][1]))
        i = 1
        for inner_off, size in chunks[1:]:
            abs_off = parent_off + inner_off
            is_palette = inner_off in palette_targets.get(parent_sym, set())
            new_sym = (f"d{target_name}_palette_0x{abs_off:X}"
                       if is_palette
                       else f"d{target_name}_Tex_0x{abs_off:X}")
            new_chunks.append((inner_off, new_sym, size))
            i += 1
        # Rewrite `(u32)((u8*)&<parent_sym> + 0xN)` to use the appropriate
        # sub-symbol. Match any reference no matter the offset (some land
        # exactly on a split boundary, some inside a chunk).
        ref_re = re.compile(
            rf"\(u32\)\(\(u8\*\)&\s*{re.escape(parent_sym)}\s*\+\s*0x([0-9A-Fa-f]+)\)"
        )
        def rewrite_ref(rm):
            target = int(rm.group(1), 16)
            # Find the chunk that contains this offset.
            for j in range(len(new_chunks) - 1, -1, -1):
                start, sym, _size = new_chunks[j]
                if start <= target:
                    delta = target - start
                    if delta == 0:
                        return f"(u32)&{sym}"
                    return f"(u32)((u8*)&{sym} + 0x{delta:X})"
            return rm.group(0)
        new_text = ref_re.sub(rewrite_ref, new_text)

        n_split += 1
        print(f"  split {parent_sym}: {len(chunks) - 1} new sub-block(s)")

    # Inject forward externs at top of file. New split symbols are defined
    # *later* in the file (after the original block's position), so any
    # earlier `(u32)&new_sym` reference is a forward reference even though
    # the definition exists below — IDO needs the extern at top to resolve.
    # Only filter against pre-existing extern declarations, not full defs.
    if forward_externs:
        existing_externs = set(re.findall(r"^extern\s+\w+\s+\*?(d\w+)",
                                          new_text, re.MULTILINE))
        new_externs = [(s, t) for (s, t) in forward_externs
                       if s not in existing_externs]
        if new_externs:
            # insert after the last existing top-of-file extern
            last_extern = None
            for em in re.finditer(r"^extern\s+[^;]+;", new_text, re.MULTILINE):
                last_extern = em
                if em.end() > 4096:
                    break
            insertion = last_extern.end() if last_extern else 0
            extern_text = "\n".join(f"extern {t} {s}[];" for s, t in new_externs)
            new_text = new_text[:insertion] + "\n" + extern_text + new_text[insertion:]

    if n_split:
        with open(c_path, "w") as f:
            f.write(new_text)
        print(f"fid {file_id}: split {n_split} block(s) "
              f"({n_palette} palette(s), {n_sprite} tex chunk(s))")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
