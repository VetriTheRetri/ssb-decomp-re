#!/usr/bin/env python3
"""Compute per-file completion % for every relocData source file.

A "file" is one of:
- src/relocData/<id>_<Name>.spritelist  (100% — auto-extracted; assumed correctly typed)
- src/relocData/<id>_<Name>.c           (mix of typed and untyped blocks)

Untyped bytes = sum of size of every top-level declaration whose body
includes a `.data.inc.c` file. Total bytes = `.data` section size of
the compiled `build/us/src/relocData/.build/<id>.o`.

Outputs a TSV (or markdown table) to stdout.
"""

import argparse
import os
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
SRC = REPO / "src" / "relocData"
BUILD = REPO / "build" / "us" / "src" / "relocData" / ".build"
INC_ROOT = REPO / "build" / "us" / "src" / "relocData"
DESCS = REPO / "tools" / "relocFileDescriptions.us.txt"

# Top-level declaration: TYPE NAME[N] = { ... };   spans multiple lines.
# We capture the name and the body up to the closing brace+semicolon.
DECL_RE = re.compile(
    r"^(?P<type>[A-Za-z_][A-Za-z_0-9 *]*?)\s+"  # type
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"      # symbol (starts with d)
    r"(?:\[[^\]]*\])?\s*=\s*\{",
    re.MULTILINE,
)


def _is_inc_c_raw_bytes(inc_path: Path) -> bool:
    """An inc.c is *raw* (truly untyped) when it contains only flat hex
    literals separated by commas (no nested `{...}` initializers). Inc.c
    files emitted via a local typedef contain `{ … },` per-row initializers
    and are considered structured."""
    if not inc_path.exists():
        return True  # missing file — assume worst
    txt = inc_path.read_text()
    return "{" not in txt


def parse_decls(c_path: Path, fid_name: str):
    """Yield (sym_name, is_untyped) for each top-level decl in c_path.

    A block is untyped iff (a) it includes a `.data.inc.c` file AND
    (b) that file is raw hex (no nested struct initializers)."""
    src = c_path.read_text()
    src_stripped = re.sub(r"/\*.*?\*/", "", src, flags=re.DOTALL)
    lines = src_stripped.split("\n")
    inc_re = re.compile(r"#include\s*<([^>]+\.data\.inc\.c)>")
    i = 0
    while i < len(lines):
        line = lines[i]
        m = DECL_RE.match(line)
        if not m:
            i += 1
            continue
        name = m.group("name")
        body = []
        i += 1
        while i < len(lines):
            if lines[i].rstrip() == "};" or lines[i].rstrip() == "} ;":
                break
            body.append(lines[i])
            i += 1
        i += 1
        body_text = "\n".join(body)
        is_untyped = False
        for inc_m in inc_re.finditer(body_text):
            inc_rel = inc_m.group(1)
            inc_full = INC_ROOT / inc_rel
            if _is_inc_c_raw_bytes(inc_full):
                is_untyped = True
                break
        yield name, is_untyped


def get_symbol_sizes(o_path: Path):
    """Return {sym_name: size_bytes} for every D symbol with non-zero size."""
    out = subprocess.run(
        ["nm", "--print-size", str(o_path)],
        check=True, capture_output=True, text=True,
    ).stdout
    sizes = {}
    for line in out.splitlines():
        # `<addr> <size> <type> <sym>`  — but if size is missing, only 3 fields
        parts = line.split()
        if len(parts) != 4:
            continue
        _, sz_hex, t, sym = parts
        if t not in ("D", "d"):
            continue
        try:
            sizes[sym] = int(sz_hex, 16)
        except ValueError:
            continue
    return sizes


def get_data_section_size(o_path: Path):
    out = subprocess.run(
        ["mips-linux-gnu-objdump", "-h", str(o_path)],
        check=True, capture_output=True, text=True,
    ).stdout
    for line in out.splitlines():
        m = re.match(r"\s*\d+\s+\.data\s+([0-9a-f]+)\s", line)
        if m:
            return int(m.group(1), 16)
    return 0


def load_descriptions():
    """Return {fid: name} from relocFileDescriptions.us.txt."""
    descs = {}
    for line in DESCS.read_text().splitlines():
        m = re.match(r"-(\d+):\s*(.+)", line)
        if m:
            descs[int(m.group(1))] = m.group(2).strip()
    return descs


def fid_from_filename(stem: str):
    m = re.match(r"(\d+)_(.+)", stem)
    if not m:
        return None, None
    return int(m.group(1)), m.group(2)


def compute_for_c(fid: int, name: str, c_path: Path):
    o_path = BUILD / f"{fid}.o"
    if not o_path.exists():
        return None
    total = get_data_section_size(o_path)
    if total == 0:
        return (fid, name, 0, 0, 0, 0, 100.0)
    sym_sizes = get_symbol_sizes(o_path)
    untyped_syms = []
    untyped_bytes = 0
    for sym, is_untyped in parse_decls(c_path, name):
        if not is_untyped:
            continue
        sz = sym_sizes.get(sym, 0)
        if sz == 0:
            continue
        untyped_bytes += sz
        untyped_syms.append((sym, sz))
    typed_bytes = total - untyped_bytes
    pct = 100.0 * typed_bytes / total if total else 100.0
    return (fid, name, total, typed_bytes, untyped_bytes, len(untyped_syms), pct)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--format", choices=["tsv", "md", "section"], default="tsv")
    ap.add_argument("--show-non-100", action="store_true",
                    help="only emit non-100%% rows")
    ap.add_argument("--sort", choices=["fid", "pct"], default="fid",
                    help="sort by fid (default) or pct ascending")
    args = ap.parse_args()

    descs = load_descriptions()
    rows = []
    for path in sorted(SRC.iterdir()):
        if path.name.endswith(".reloc") or path.name.endswith(".jp.reloc"):
            continue
        if path.name.endswith(".jp.spritelist"):
            continue
        if path.name.endswith(".spritelist"):
            stem = path.stem
            fid, name = fid_from_filename(stem)
            if fid is None:
                continue
            o_path = BUILD / f"{fid}.o"
            total = get_data_section_size(o_path) if o_path.exists() else 0
            rows.append((fid, name, total, total, 0, 0, 100.0))
            continue
        if not path.name.endswith(".c"):
            continue
        stem = path.stem
        fid, name = fid_from_filename(stem)
        if fid is None:
            continue
        r = compute_for_c(fid, name, path)
        if r is None:
            continue
        rows.append(r)

    rows.sort(key=lambda x: x[0])
    all_rows = list(rows)

    if args.show_non_100:
        rows = [r for r in rows if r[6] < 100.0]
    if args.sort == "pct":
        rows.sort(key=lambda x: (x[6], x[0]))

    total_files = len(all_rows)
    full = sum(1 for r in all_rows if r[6] >= 100.0)
    total_bytes = sum(r[2] for r in all_rows)
    untyped_bytes = sum(r[4] for r in all_rows)
    overall_pct = 100.0 * (total_bytes - untyped_bytes) / total_bytes if total_bytes else 100.0

    if args.format == "tsv":
        print("fid\tname\ttotal\ttyped\tuntyped\tn_untyped\tpct")
        for r in rows:
            print(f"{r[0]}\t{r[1]}\t{r[2]}\t{r[3]}\t{r[4]}\t{r[5]}\t{r[6]:.2f}")
        return
    if args.format == "section":
        print(f"Overall: **{full} / {total_files}** files at 100% "
              f"({overall_pct:.2f}% of bytes typed; "
              f"{untyped_bytes:,} / {total_bytes:,} bytes still untyped "
              f"across {total_files - full} files).\n")
        print(f"Updated: regenerate with `python3 tools/computeRelocCompletion.py "
              f"--format section --show-non-100 --sort pct`.\n")
        print("Definition: a block is *untyped* when it includes a "
              "`.data.inc.c` whose body is flat hex bytes (no nested "
              "`{...}` initializers). `.data.inc.c` files structured by a "
              "local `typedef struct` count as typed. Spritelist-driven "
              "files are 100% by construction. Sizes come from the "
              "`.data` section of the compiled US `.o`.\n")
    print("| FID | Name | Size (B) | Untyped (B) | Untyped blocks | Complete |")
    print("|----:|---|---:|---:|---:|---:|")
    for r in rows:
        print(f"| {r[0]} | {r[1]} | {r[2]} | {r[4]} | {r[5]} | {r[6]:.2f}% |")


if __name__ == "__main__":
    main()
