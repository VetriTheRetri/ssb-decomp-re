#!/usr/bin/env python3
"""
Split a monolithic `u32 <parent>[N]` AnimJoint / MatAnimJoint blob into:

    AObjEvent32 *<parent>[T] = { ... };         // joint pointer table at head
    u32 <parent>_0x<entry>[L] = { ... };        // each AObjEvent32 script
    u32 <parent>_0x<entry>[L] = { ... };
    ...                                          // (+ trailing data, if any)

The split points come from the `.reloc` file: every `<parent>+0xN`
chain-target offset becomes a split boundary. The leading region (from
offset 0 to the first split point) is the joint pointer table.

Rewrites both the `.c` source and the `.reloc` file:
  - `.c`: parent's monolithic decl replaced by the table + script decls.
  - `.reloc`: every `<parent>+0xN` label is remapped to either
    `<parent>+0xN` (if N is in the joint table) or
    `<parent>_0x<entry>+0x<delta>` (if N is inside a script region).

Source assumption (post-Phase-2 de-decode): the parent decl is currently
inline u32 lines, one element per source line (so the source line count
between the head `{` and trailing `};` equals the array length).

Usage:
    tools/splitAnimJointBlob.py <fid> <parent_symbol> [--apply]
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


def resolve_c_path(fid):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(r"^(\d+)_(.+)\.c$", fn)
        if m and int(m.group(1)) == fid and not fn.endswith(".jp.c"):
            return os.path.join(RELOC_DIR, fn), m.group(2)
    raise SystemExit(f"no .c for fid {fid}")


def find_decl_range(lines, parent_sym):
    """Return (head_idx, close_idx, size) for the parent decl."""
    head_re = re.compile(
        rf"^\s*u32\s+{re.escape(parent_sym)}\s*\[(?P<size>\d+)\]\s*=\s*\{{\s*$"
    )
    for i, line in enumerate(lines):
        m = head_re.match(line)
        if not m:
            continue
        size = int(m.group("size"))
        # Find matching `};`
        for j in range(i + 1, len(lines)):
            if re.match(r"^\s*\};\s*$", lines[j]):
                return i, j, size
        raise SystemExit(f"unclosed decl for {parent_sym}")
    raise SystemExit(f"could not find `u32 {parent_sym}[N] = {{` in source")


def parse_reloc(reloc_path):
    """Yield (line_idx, kind, ptr_label, target_label, raw_line)."""
    out = []
    with open(reloc_path) as f:
        for idx, raw in enumerate(f):
            line = raw.rstrip("\n")
            stripped = line.strip()
            if not stripped or stripped.startswith("#"):
                out.append((idx, None, None, None, raw))
                continue
            # Split off trailing comment
            head = line
            comment = ""
            if "#" in line:
                hi = line.index("#")
                head = line[:hi]
                comment = line[hi:]
            parts = head.split()
            if len(parts) != 3 or parts[0] not in ("intern", "extern"):
                out.append((idx, None, None, None, raw))
                continue
            kind, ptr, tgt = parts
            out.append((idx, kind, ptr, tgt, raw))
    return out


def label_components(label):
    """`dXxx+0x1234` → ('dXxx', 0x1234). `dXxx` → ('dXxx', 0)."""
    m = re.match(r"^(?P<sym>[A-Za-z_][A-Za-z_0-9]*)(?:\+0x(?P<delta>[0-9A-Fa-f]+))?$", label)
    if not m:
        return None, None
    return m.group("sym"), int(m.group("delta"), 16) if m.group("delta") else 0


def remap_label(label, parent_sym, split_points, script_for_offset):
    """Map a `<parent>+0xN` label to its new form after the split.
    Non-matching labels return unchanged. `script_for_offset[N]` is the
    new symbol for offset N (either `<parent>` for the joint table or
    `<parent>_0xEntry` for a script region)."""
    sym, delta = label_components(label)
    if sym != parent_sym:
        return label
    new_sym = script_for_offset(delta)
    new_off = delta - script_offset(delta, split_points)
    if new_off == 0:
        return new_sym
    return f"{new_sym}+0x{new_off:X}"


def script_offset(byte_off, split_points):
    """Return the byte offset of the script region containing
    `byte_off`. Offsets in [0, split_points[0]) belong to the joint
    table region (offset 0)."""
    if byte_off < split_points[0]:
        return 0
    # Find the highest split point ≤ byte_off.
    for sp in reversed(split_points):
        if sp <= byte_off:
            return sp
    return 0


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("fid", type=int)
    ap.add_argument("parent_sym",
                    help="parent u32 array name, e.g. dStageSectorFile2_Layer0Anim_AnimJoint")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    ap.add_argument("--no-joint-table", action="store_true",
                    help="treat the parent as a pure script/data blob (no "
                    "leading joint pointer table). Splits at every chain "
                    "target offset, including offset 0 — the joint table "
                    "is assumed to live in a SEPARATE decl that references "
                    "this blob at the chain target offsets.")
    ap.add_argument("--pipeline", action="store_true",
                    help="after split, run extractRelocInc + decodeAObjEvent32 "
                    "+ dedecodeAObjEvent32 (--threshold 2) to fully type the "
                    "scripts in one go; then clean up any residual R001/R003 "
                    "misidentifications by per-symbol de-decode.")
    ap.add_argument("--jp-fid", type=int,
                    help="JP fid (when pipeline=True and US fid != JP fid) "
                    "used for `--version jp` extract step")
    args = ap.parse_args()

    c_path, file_basename = resolve_c_path(args.fid)
    reloc_path = c_path[:-2] + ".reloc"
    parent = args.parent_sym

    # ---- 1. Parse the source decl ----
    with open(c_path) as f:
        c_text = f.read()
    c_lines = c_text.split("\n")
    head_idx, close_idx, size = find_decl_range(c_lines, parent)
    body_lines = c_lines[head_idx + 1: close_idx]
    # Detect `.data.inc.c` form: body is just `#include <.../X.data.inc.c>`.
    # In that case the splitter generates `#include` sub-decls (one per
    # region) and relies on extractRelocInc to populate them. We synthesise
    # `size`-many empty body lines so downstream slicing still works.
    include_form = False
    for ln in body_lines:
        m = re.search(r"#include\s+<[^>]*\.data\.inc\.c\s*>", ln)
        if m:
            include_form = True
            break
    if include_form:
        # Fabricate body_lines: one placeholder per element. Downstream
        # code that slices body_lines per region will produce empty
        # bodies; we override them with `#include` lines just before
        # writing the new source.
        body_lines = [""] * size
    elif len(body_lines) != size:
        # Tolerate one-line-per-element layout; warn if mismatch.
        print(f"warning: decl size {size} but body has {len(body_lines)} lines",
              file=sys.stderr)

    # ---- 2. Parse .reloc for split points ----
    reloc_entries = parse_reloc(reloc_path)
    target_offsets = set()
    ptr_offsets = set()
    for idx, kind, ptr, tgt, raw in reloc_entries:
        if kind is None:
            continue
        psym, poff = label_components(ptr)
        tsym, toff = label_components(tgt)
        if psym == parent:
            ptr_offsets.add(poff)
        if tsym == parent:
            target_offsets.add(toff)

    # With a joint table at the head, offset 0 is the table head and
    # never a script entry. Without one, offset 0 IS a script entry
    # (the leading region is the first script).
    if args.no_joint_table:
        split_points = sorted(target_offsets)
        if 0 not in split_points:
            split_points = [0] + split_points
        joint_table_bytes = 0
        joint_table_words = 0
    else:
        split_points = sorted(o for o in target_offsets if o > 0)
        if not split_points:
            raise SystemExit(f"no chain targets inside {parent} — nothing to split")
        joint_table_bytes = split_points[0]
        if joint_table_bytes % 4 != 0:
            raise SystemExit(f"first split point 0x{joint_table_bytes:X} not 4-aligned")
        joint_table_words = joint_table_bytes // 4

    # ---- 3. Generate region map ----
    # Each region: (start_offset, end_offset, words)
    blob_bytes = size * 4
    boundaries = [0] + split_points + [blob_bytes]
    regions = []
    for a, b in zip(boundaries[:-1], boundaries[1:]):
        if b > a:
            regions.append((a, b))
    # region[0] = joint table
    # region[1..] = scripts (or trailing data)

    # ---- 4. Build symbol map per offset ----
    def script_sym_for(byte_off):
        if joint_table_words > 0 and byte_off < joint_table_bytes:
            return parent
        for sp in reversed(split_points):
            if sp <= byte_off:
                if sp == 0 and joint_table_words == 0:
                    # First region keeps the parent's symbol name so
                    # external references stay valid.
                    return parent
                return f"{parent}_0x{sp:X}"
        return parent

    # ---- 5. Build the new source ----
    out_blocks = []
    if joint_table_words == 0:
        # --no-joint-table mode: skip emitting a joint pointer table;
        # the first region is the first script.
        regions_to_emit = regions
        joint_table_emitted = False
    else:
        joint_table_emitted = True
        regions_to_emit = regions[1:]
    # Joint table: AObjEvent32 *parent[joint_table_words] = { lines };
    table_body = body_lines[:joint_table_words]
    # Rewrite chain-pointer expressions in joint table:
    #   (u32)((u8*)parent + 0xN) -> (AObjEvent32 *)parent_0xN
    cast_re = re.compile(
        rf"\(u32\)\(\(u8\*\)\s*{re.escape(parent)}\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\)"
    )
    new_table_body = []
    null_re = re.compile(r"^(?P<lead>\s*)0x0+\s*,(?P<tail>.*)$")
    if include_form:
        # For an `.data.inc.c` parent, the original body has no per-slot
        # expressions. Synthesize joint-table entries directly from the
        # .reloc: every chain pointer at offset N < joint_table_bytes
        # whose target is inside the parent becomes a typed entry.
        target_for_slot = {}  # byte_off -> target_label
        for idx, kind, ptr, tgt, raw in reloc_entries:
            if kind is None:
                continue
            psym, poff = label_components(ptr)
            tsym, toff = label_components(tgt)
            if psym != parent or poff >= joint_table_bytes:
                continue
            target_for_slot[poff] = (tsym, toff)
        for slot in range(joint_table_words):
            off = slot * 4
            if off in target_for_slot:
                tsym, toff = target_for_slot[off]
                # If target is inside this parent, map to a sub-decl
                # symbol; otherwise reference cross-file.
                if tsym == parent:
                    sub_sym = script_sym_for(toff)
                    delta = toff - script_offset(toff, split_points)
                    if delta == 0:
                        new_table_body.append(f"\t(AObjEvent32 *){sub_sym},")
                    else:
                        new_table_body.append(
                            f"\t(AObjEvent32 *)((u8*){sub_sym} + 0x{delta:X}),"
                        )
                else:
                    if toff == 0:
                        new_table_body.append(f"\t(AObjEvent32 *){tsym},")
                    else:
                        new_table_body.append(
                            f"\t(AObjEvent32 *)((u8*){tsym} + 0x{toff:X}),"
                        )
            else:
                new_table_body.append("\tNULL,")
    else:
        for ln in table_body:
            m = cast_re.search(ln)
            if m:
                off = int(m.group("off"), 16)
                sym = script_sym_for(off)
                if off == script_offset(off, split_points):
                    replacement = f"(AObjEvent32 *){sym}"
                else:
                    delta = off - script_offset(off, split_points)
                    replacement = f"(AObjEvent32 *)((u8*){sym} + 0x{delta:X})"
                new_table_body.append(cast_re.sub(replacement, ln))
                continue
            nm = null_re.match(ln)
            if nm:
                new_table_body.append(f"{nm.group('lead')}NULL,{nm.group('tail')}")
                continue
            # Unknown shape — pass through unchanged.
            new_table_body.append(ln)
    if joint_table_emitted:
        out_blocks.append(
            f"AObjEvent32 *{parent}[{joint_table_words}] = {{\n"
            + "\n".join(new_table_body)
            + "\n};"
        )

    # Script / trailing-data regions
    forward_externs = []
    # Derive include-path prefix for `.data.inc.c` form sub-decls.
    inc_prefix = re.sub(r"^d", "", parent.split("_")[0]) if include_form else None
    # Actually: derive prefix from the file's basename like the other tools do.
    if include_form:
        inc_prefix = file_basename
    for start, end in regions_to_emit:
        start_word = start // 4
        end_word = end // 4
        n_words = end_word - start_word
        if joint_table_words == 0 and start == 0:
            sym = parent
        else:
            sym = f"{parent}_0x{start:X}"
        forward_externs.append(f"extern u32 {sym}[{n_words}];")
        if include_form:
            # Drop the file's `d<FileName>_` prefix for include path.
            local = sym
            file_lead = f"d{inc_prefix}_"
            if local.startswith(file_lead):
                local = local[len(file_lead):]
            new_region_body = [f"\t#include <{inc_prefix}/{local}.data.inc.c>"]
        else:
            region_body = body_lines[start_word:end_word]
            # Rewrite any chain-pointer expressions to use the right symbol.
            new_region_body = []
            for ln in region_body:
                m = cast_re.search(ln)
                if m:
                    off = int(m.group("off"), 16)
                    tgt_sym = script_sym_for(off)
                    tgt_delta = off - script_offset(off, split_points)
                    if tgt_delta == 0:
                        replacement = f"(u32)({tgt_sym})"
                    else:
                        replacement = f"(u32)((u8*){tgt_sym} + 0x{tgt_delta:X})"
                    new_region_body.append(cast_re.sub(replacement, ln))
                else:
                    new_region_body.append(ln)
        out_blocks.append(
            f"u32 {sym}[{n_words}] = {{\n"
            + "\n".join(new_region_body)
            + "\n};"
        )

    # ---- 6. Stitch new source ----
    # Forward externs go after the existing `extern` block (immediately
    # before the parent decl is the easy/safe place if no existing block
    # is identified).
    new_decl_block = "\n\n".join(out_blocks)
    # Comment header reused from existing parent decl head's preceding
    # comment (best-effort).
    new_lines = list(c_lines[:head_idx])
    # Insert forward externs above the new decls (in a small block).
    new_lines.append("/* Split AnimJoint blob: forward decls for sub-scripts. */")
    new_lines.extend(forward_externs)
    new_lines.append("")
    new_lines.extend(new_decl_block.split("\n"))
    new_lines.extend(c_lines[close_idx + 1:])

    # If we generated a joint table, patch any pre-existing
    # `extern u32 <parent>[];` to match the new `AObjEvent32 *[N]`.
    if joint_table_emitted:
        extern_re = re.compile(
            rf"^(\s*extern\s+)u32(\s+){re.escape(parent)}\s*\[(\d*)\]\s*;\s*$"
        )
        for k, ln in enumerate(new_lines):
            em = extern_re.match(ln)
            if em:
                new_lines[k] = (
                    f"{em.group(1)}AObjEvent32 *{em.group(2)}{parent}"
                    f"[{joint_table_words}];"
                )

    new_c_text = "\n".join(new_lines)

    # ---- 7. Rewrite .reloc ----
    new_reloc_lines = []
    for idx, kind, ptr, tgt, raw in reloc_entries:
        if kind is None:
            new_reloc_lines.append(raw.rstrip("\n"))
            continue
        new_ptr = ptr
        new_tgt = tgt
        psym, poff = label_components(ptr)
        if psym == parent:
            new_sym = script_sym_for(poff)
            new_off = poff - script_offset(poff, split_points)
            new_ptr = new_sym if new_off == 0 else f"{new_sym}+0x{new_off:X}"
        tsym, toff = label_components(tgt)
        if tsym == parent:
            new_sym = script_sym_for(toff)
            new_off = toff - script_offset(toff, split_points)
            new_tgt = new_sym if new_off == 0 else f"{new_sym}+0x{new_off:X}"
        # Preserve any trailing comment
        comment = ""
        if "#" in raw:
            comment = raw[raw.index("#"):].rstrip("\n")
        new_reloc_lines.append(f"{kind} {new_ptr} {new_tgt}"
                                + (f"  {comment}" if comment else ""))
    new_reloc_text = "\n".join(new_reloc_lines) + "\n"

    # ---- 8. Report and (optionally) write ----
    print(f"fid {args.fid} ({file_basename}): {parent}")
    print(f"  joint table: AObjEvent32 *[{joint_table_words}]  "
          f"(0x{0:X} – 0x{joint_table_bytes:X})")
    print(f"  scripts: {len(regions) - 1} (sizes "
          + ", ".join(f"0x{e - s:X}" for s, e in regions[1:][:8])
          + ("…" if len(regions) > 9 else "")
          + ")")
    print(f"  total: {len(regions)} regions, {size} words → {len(out_blocks)} decls")

    if not args.apply:
        print("  (dry-run; pass --apply to write)")
        return
    with open(c_path, "w") as f:
        f.write(new_c_text)
    with open(reloc_path, "w") as f:
        f.write(new_reloc_text)
    print(f"  wrote {c_path} and {reloc_path}")

    if args.pipeline:
        _run_pipeline(args.fid, args.jp_fid or args.fid, parent)


def _run_pipeline(us_fid, jp_fid, parent):
    """After splitAnimJointBlob writes the split, run the followup
    pipeline that converts each sub-decl to .data.inc.c, regenerates
    the inc.c files from baserom (per-version), decodes aobjEvent32
    macros, and cleans up misidentified sub-decls via
    dedecodeAObjEvent32 (--threshold 2 + per-symbol R001/R003 sweep)."""
    import subprocess
    def run(cmd):
        print("  $", " ".join(cmd))
        subprocess.run(cmd, check=False)
    # 1. inlineHexToDataInc (sub-decls are inline u32 hex; we want them in
    #    .data.inc.c form so decodeAObjEvent32 can find them)
    run(["python3", "tools/inlineHexToDataInc.py", "--apply", str(us_fid)])
    # 2. extract for both versions
    run(["python3", "tools/extractRelocInc.py", "--version", "us", str(us_fid)])
    run(["python3", "tools/extractRelocInc.py", "--version", "jp", str(jp_fid)])
    # 3. decode aobjEvent32 macros
    run(["python3", "tools/decodeAObjEvent32.py", str(us_fid)])
    # 4. de-decode misidentified sub-decls (multi-End)
    run(["python3", "tools/dedecodeAObjEvent32.py",
         "--apply", "--threshold", "2", str(us_fid)])
    # 5. Iterate: de-decode any remaining R001/R002/R003-flagged sub-decls
    for _ in range(3):  # cap iterations to avoid pathological loops
        out = subprocess.run(
            ["python3", "tools/validateRelocFile.py",
             "--rules", "R001,R002,R003", "--quiet", str(us_fid)],
            capture_output=True, text=True,
        ).stdout
        bad_syms = set()
        for line in out.splitlines():
            if "[R001 " in line or "[R002 " in line or "[R003 " in line:
                m = re.search(r"'([^']+)'", line)
                if m:
                    sym = m.group(1)
                    if sym.startswith("d"):
                        bad_syms.add(sym)
        if not bad_syms:
            break
        cmd = ["python3", "tools/dedecodeAObjEvent32.py", "--apply"]
        for s in sorted(bad_syms):
            cmd.extend(["--symbol", s])
        cmd.append(str(us_fid))
        run(cmd)
    # 6. Retype Gfx display lists (u32 starting with gsDPPipeSync → Gfx)
    run(["python3", "tools/retypeU32DLs.py", "--apply", str(us_fid)])
    # 7. Split trailing zero-padding off into PAD(n)
    run(["python3", "tools/splitTrailingZeroPad.py", "--apply", str(us_fid)])
    # 8. Re-extract after retyping (DL blocks need .dl.inc.c)
    run(["python3", "tools/extractRelocInc.py", "--version", "us", str(us_fid)])
    run(["python3", "tools/extractRelocInc.py", "--version", "jp", str(jp_fid)])


if __name__ == "__main__":
    main()
