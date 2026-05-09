#!/usr/bin/env python3
"""
symbolizeReloc.py — rewrite raw byte-offset targets in a relocData
.reloc file (e.g. ``intern dXxx_Foo+0x4 0x0898``) into
``<sym>[+0xN]`` symbolic form (``intern dXxx_Foo+0x4 dXxx_Bar+0x108``)
by resolving each target offset against the compiled .o's symbol
table. Older relocData fids were emitted with raw byte offsets so
that fixRelocChain.py could thread them; the symbolic form is more
readable, robust to layout shuffles, and lets the rest of the tool
suite (annotateMObjSubSprites.py et al.) follow the chain to the
actual sub-block.

Usage:
    tools/symbolizeReloc.py <fid> [<fid> ...]   # rewrite in-place
    tools/symbolizeReloc.py --all
    tools/symbolizeReloc.py --dry-run <fid>     # show changes only
"""
import argparse
import os
import re
import subprocess
import sys
from pathlib import Path

PROJECT_DIR = Path(__file__).resolve().parent.parent
RELOC_DIR = PROJECT_DIR / "src" / "relocData"


def load_nm_offsets(fid, version):
    """Return {byte_offset: symbol_name} from the .o symbol table.
    The .o must already exist (`make` once before symbolizing). When
    several symbols share an offset, prefer the longest name (helps
    pick `Foo_sub_0x10` over plain `Foo` when both would resolve)."""
    o_path = PROJECT_DIR / "build" / version / "src" / "relocData" / ".build" / f"{fid}.o"
    if not o_path.exists():
        raise FileNotFoundError(f"missing {o_path} — run `make` first")
    nm = subprocess.run(
        ["mips-linux-gnu-nm", str(o_path)],
        capture_output=True, text=True, check=True,
    ).stdout
    by_off = {}
    for ln in nm.splitlines():
        m = re.match(r"^([0-9a-fA-F]+)\s+[Dd]\s+(\w+)$", ln)
        if not m:
            continue
        off, name = int(m.group(1), 16), m.group(2)
        prev = by_off.get(off)
        if prev is None or len(name) > len(prev):
            by_off[off] = name
    return by_off


def resolve(target_off, sym_offs):
    """Find the symbol covering `target_off`. Returns the symbol's name
    and the relative offset (`<sym>` or `<sym>+0xN`). Picks the symbol
    with the closest offset ≤ target_off."""
    best = None
    for off, name in sym_offs.items():
        if off > target_off:
            continue
        if best is None or off > best[0]:
            best = (off, name)
    if best is None:
        return None
    off, name = best
    delta = target_off - off
    return name if delta == 0 else f"{name}+0x{delta:X}"


_LINE_RE = re.compile(
    r"^(?P<lead>\s*(?:intern|extern)\s+\w+(?:\+0x[0-9A-Fa-f]+)?\s+)"
    r"(?P<target>0x[0-9A-Fa-f]+)(?P<trail>\s*(?:#.*)?)$"
)


def symbolize_text(text, sym_offs):
    """Rewrite raw-hex targets in a .reloc text body. Lines whose target
    is already a symbol pass through unchanged. Returns the new text and
    a count of substitutions."""
    out = []
    n = 0
    for ln in text.split("\n"):
        m = _LINE_RE.match(ln)
        if m:
            tgt = int(m.group("target"), 0)
            sym = resolve(tgt, sym_offs)
            if sym is not None:
                out.append(m.group("lead") + sym + m.group("trail"))
                n += 1
                continue
        out.append(ln)
    return "\n".join(out), n


def find_c_files(fid):
    """Return (c_path, [reloc_paths]) for the fid. Multiple .reloc
    siblings are possible (.reloc + .jp.reloc + .us.reloc)."""
    c = list(RELOC_DIR.glob(f"{fid}_*.c"))
    if not c:
        return None, []
    base = str(c[0])[:-2]  # strip .c
    relocs = []
    for suf in (".reloc", ".jp.reloc", ".us.reloc"):
        p = Path(base + suf)
        if p.exists():
            relocs.append(p)
    return c[0], relocs


def process(fid, dry_run=False):
    c_path, reloc_paths = find_c_files(fid)
    if c_path is None:
        print(f"fid {fid}: no .c file")
        return 0
    if not reloc_paths:
        print(f"fid {fid}: no .reloc files")
        return 0
    # Per-version symbolisation: a .jp.reloc resolves against the JP
    # build's .o. The shared `.reloc` (no suffix) resolves against US.
    total = 0
    for rp in reloc_paths:
        if rp.name.endswith(".jp.reloc"):
            version = "jp"
            # JP fid differs from US fid; resolve via name.
            jp_fid = _resolve_version_fid(c_path, "jp")
            if jp_fid is None:
                print(f"  skip {rp.name}: no JP fid for {c_path.name}")
                continue
            sym_offs = load_nm_offsets(jp_fid, "jp")
        else:
            version = "us"
            sym_offs = load_nm_offsets(fid, "us")
        text = rp.read_text()
        new_text, n = symbolize_text(text, sym_offs)
        if n > 0:
            print(f"  {rp.name}: {n} target(s) symbolised")
            if not dry_run:
                rp.write_text(new_text)
        total += n
    return total


def _resolve_version_fid(c_path, version):
    """Look up the version-specific fid via tools/relocFileDescriptions.<v>.txt
    using the `<Name>` portion of the .c filename."""
    m = re.match(r"^\d+_(\w+)\.c$", c_path.name)
    if not m:
        return None
    name = m.group(1)
    desc = PROJECT_DIR / "tools" / f"relocFileDescriptions.{version}.txt"
    if not desc.exists():
        return None
    for ln in desc.read_text().splitlines():
        dm = re.match(rf"^-(\d+):\s+{re.escape(name)}\s*$", ln)
        if dm:
            return int(dm.group(1))
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    if args.all:
        fids = []
        for f in sorted(os.listdir(RELOC_DIR)):
            m = re.match(r"^(\d+)_\w+\.c$", f)
            if m:
                fids.append(int(m.group(1)))
    elif args.fids:
        fids = args.fids
    else:
        ap.error("pass fids or --all")

    total = 0
    for fid in fids:
        n = process(fid, dry_run=args.dry_run)
        if n:
            print(f"fid {fid}: {n} symbolisation(s)")
            total += n
    print(f"\nTotal: {total}")


if __name__ == "__main__":
    main()
