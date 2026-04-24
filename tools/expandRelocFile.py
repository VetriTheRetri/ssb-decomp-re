#!/usr/bin/env python3
"""
Generate a human-readable "expanded" view of a relocData .c file.

The expanded view inlines every `#include <X.data.inc.c>` blob as actual
formatted data, replaces chain-encoded `(void*)0xXXXXYYYY` pointers with
symbolic references when the target byte offset has a known symbol in the
file's compiled .o, and emits Gfx[] arrays via pygfxd's gsDP* macro
disassembly.

Output goes to build/src/relocData/<fid>_<Name>.expanded.c. The file is
NOT part of the build — it exists purely for human reading and review.

Run as:
    tools/expandRelocFile.py <fid>
"""

import argparse
import csv
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
BUILD_OBJ_DIR = os.path.join(BUILD_DIR, ".build")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")

try:
    import pygfxd
    HAS_PYGFXD = True
except ImportError:
    HAS_PYGFXD = False


def nm_symbols(fid):
    """Return ({byte_offset: symbol_name}, {byte_offset: byte_size}) from the
    compiled .o. Size is inferred from gaps between sorted symbol offsets
    (last symbol gets a generous default)."""
    obj = os.path.join(BUILD_OBJ_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        return {}, {}
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            off = int(p[0], 16)
            name = p[2]
            if off in syms and len(syms[off]) <= len(name):
                continue
            syms[off] = name
    sizes = {}
    sorted_offs = sorted(syms)
    for i, off in enumerate(sorted_offs):
        if i + 1 < len(sorted_offs):
            sizes[off] = sorted_offs[i + 1] - off
        else:
            sizes[off] = 0x10000
    return syms, sizes


def csv_chain_starts(fid):
    """Look up (intern_word_start, extern_word_start) for `fid` from
    assets/relocData.csv. Returns (None, None) if not found."""
    if not os.path.exists(CSV_PATH):
        return None, None
    with open(CSV_PATH) as f:
        rows = list(csv.reader(f))
    if fid + 1 >= len(rows):  # +1 to skip header
        return None, None
    row = rows[fid + 1]
    if len(row) < 6:
        return None, None
    intern = int(row[2].strip(), 16)
    extern = int(row[4].strip(), 16)
    return intern, extern


def walk_chain(data, start_word):
    """Walk a chain starting at `start_word` (word offset). Returns a list of
    (ptr_byte, target_byte, word) tuples. Stops at 0xFFFF terminator, EOF,
    cycle, or misalignment."""
    out = []
    addr = start_word * 4
    seen = set()
    while True:
        if start_word == 0xFFFF or addr in seen or addr + 4 > len(data):
            break
        seen.add(addr)
        word = struct.unpack(">I", data[addr:addr + 4])[0]
        nxt = (word >> 16) & 0xFFFF
        tgt = (word & 0xFFFF) * 4
        out.append((addr, tgt, word))
        if nxt == 0xFFFF:
            break
        addr = nxt * 4
        start_word = nxt
    return out


def _nearest_sym(syms_sorted, off):
    """Binary search: return (sym_off, sym_name) of the symbol whose start is
    <= off, else (None, None)."""
    import bisect
    idx = bisect.bisect_right(syms_sorted, (off, "\xff")) - 1
    if idx < 0:
        return None, None
    return syms_sorted[idx]


def chain_summary(fid, data, syms):
    """Format a multi-line chain integrity / coverage summary for the
    expanded view header."""
    intern_start, extern_start = csv_chain_starts(fid)
    syms_sorted = sorted(syms.items())
    lines = []
    lines.append(" *")
    lines.append(" * Chain integrity (from assets/relocData.csv):")
    for label, start in (("intern", intern_start), ("extern", extern_start)):
        if start is None:
            lines.append(f" *   {label}: csv lookup failed")
            continue
        if start == 0xFFFF:
            lines.append(f" *   {label}: empty (start=0xFFFF)")
            continue
        chain = walk_chain(data, start)
        n_target_named = sum(1 for _, t, _ in chain if t in syms)
        # Treat a ptr as "covered" if it falls within the byte range of a
        # named symbol (i.e. inside a typed block, not in a raw gap).
        n_ptr_covered = 0
        first_uncovered = None
        for ptr, _, _ in chain:
            sym_off, sym_name = _nearest_sym(syms_sorted, ptr)
            if sym_off is not None and sym_name and "_gap_" not in sym_name:
                n_ptr_covered += 1
            elif first_uncovered is None:
                first_uncovered = ptr
        lines.append(
            f" *   {label}: head=word 0x{start:04X} (byte 0x{start*4:04X}),"
            f" {len(chain)} ptrs"
        )
        lines.append(
            f" *     {n_ptr_covered}/{len(chain)} ptrs inside typed blocks,"
            f" {n_target_named}/{len(chain)} targets named"
        )
        if first_uncovered is not None:
            lines.append(
                f" *     first uncovered ptr: 0x{first_uncovered:04X}"
            )
        unresolved_tgts = [(a, t) for a, t, _ in chain if t not in syms]
        if unresolved_tgts:
            lines.append(
                f" *     first unnamed target: ptr 0x{unresolved_tgts[0][0]:04X}"
                f" -> 0x{unresolved_tgts[0][1]:04X}"
            )
    return "\n".join(lines)


def find_c_file(fid):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def resolve_chain(chain_value, syms, sym_sizes=None):
    """Given a chain-encoded u32 (high 16 = next, low 16 = target word),
    return a symbol name + delta string if the target byte matches a
    known symbol; else return None.

    When `sym_sizes` is provided, an interior offset resolves only if the
    target byte falls strictly inside the nearest preceding symbol's byte
    range. Without it, fall back to a conservative 0x800 delta cap."""
    target_word = chain_value & 0xFFFF
    target_byte = target_word * 4
    if target_byte in syms:
        return syms[target_byte]
    candidates = sorted(o for o in syms if o <= target_byte)
    if not candidates:
        return None
    nearest = candidates[-1]
    delta = target_byte - nearest
    if delta == 0:
        return syms[nearest]
    if sym_sizes is not None:
        size = sym_sizes.get(nearest)
        if size is not None and delta < size:
            return f"((u8*){syms[nearest]} + 0x{delta:X})"
        return None
    if delta < 0x800:
        return f"((u8*){syms[nearest]} + 0x{delta:X})"
    return None


def _extract_block_bytes(raw, syms, sym_sizes, block_name, expected_size):
    """Return `expected_size` bytes from `raw` starting at the byte offset
    nm reports for `block_name`. Returns None when the symbol is unknown
    or the raw bytes don't cover the full block."""
    off = next((o for o, name in syms.items() if name == block_name), None)
    if off is None:
        return None
    if off + expected_size > len(raw):
        return None
    return raw[off:off + expected_size]


def _render_vtx_entries(blob, indent):
    """Format raw Vtx bytes as `{ { { x, y, z }, 0, { u, v }, { r, g, b, a } } }`."""
    lines = []
    for i in range(0, len(blob), 16):
        chunk = blob[i:i+16]
        if len(chunk) < 16:
            break
        x, y, z, flag, s, t = struct.unpack(">hhhhhh", chunk[:12])
        r, g, b, a = chunk[12], chunk[13], chunk[14], chunk[15]
        lines.append(
            f"{indent}{{ {{ {{ {x}, {y}, {z} }}, {flag}, {{ {s}, {t} }}, "
            f"{{ {r}, {g}, {b}, {a} }} }} }},"
        )
    return "\n".join(lines)


def _render_lut_entries(blob, indent, per_line=8):
    """Format raw bytes as `0xXXXX, ...` u16 big-endian pairs."""
    u16s = [int.from_bytes(blob[i:i+2], "big")
            for i in range(0, len(blob) - 1, 2)]
    lines = []
    for i in range(0, len(u16s), per_line):
        row = ", ".join(f"0x{v:04X}" for v in u16s[i:i+per_line])
        lines.append(f"{indent}{row},")
    return "\n".join(lines)


def _render_gfx_entries(blob, indent, array_file_offset=None,
                        syms=None, sym_sizes=None, chain_positions=None):
    """Decode a Gfx DL blob to gbi macros via pygfxd. Falls back to a raw
    `{ { word0, word1 } }` pair list on decode failure.

    When `chain_positions` is provided, pointer args (vtx / dl / timg / tlut)
    at byte positions in that set are resolved to symbol references via
    `resolve_chain`. Args at positions NOT in the chain are left as literal
    hex by pygfxd — this is the right behavior for segment-0x0E-style
    literal addresses that the game resolves at runtime via gsSPSegment
    rather than via the file's reloc chain."""
    if len(blob) == 0 or len(blob) % 8 != 0:
        return None
    chain_gated = (chain_positions is not None and array_file_offset is not None
                   and syms is not None)
    if HAS_PYGFXD and _dl_is_pygfxd_safe(blob):
        out_buf = pygfxd.gfxd_output_buffer(
            b'\0' * (len(blob) * 40 + 1024), len(blob) * 40 + 1024)
        pygfxd.gfxd_input_buffer(blob)
        pygfxd.gfxd_target(pygfxd.gfxd_f3dex2)
        pygfxd.gfxd_endian(pygfxd.GfxdEndian.big, 4)

        def _resolve_if_chained(value):
            """Return replacement text or None.
            Returns None (-> pygfxd default = literal hex) when the arg's
            byte position is not in the walked chain, or when resolve_chain
            can't produce a symbol."""
            if not chain_gated:
                return None
            arg_file_offset = array_file_offset + pygfxd.gfxd_macro_offset() + 4
            if arg_file_offset not in chain_positions:
                return None
            sym = resolve_chain(value, syms, sym_sizes)
            if sym is None:
                return None
            return f"{sym} /* was 0x{value:08X} */"

        def _addr_cb(value, *_ignored):
            rep = _resolve_if_chained(value)
            if rep is None:
                return 0
            pygfxd.gfxd_puts(rep)
            return 1

        if chain_gated:
            pygfxd.gfxd_vtx_callback(_addr_cb)
            pygfxd.gfxd_dl_callback(_addr_cb)
            pygfxd.gfxd_timg_callback(_addr_cb)
            pygfxd.gfxd_tlut_callback(_addr_cb)

        def macro_fn():
            pygfxd.gfxd_puts(indent)
            pygfxd.gfxd_macro_dflt()
            pygfxd.gfxd_puts(',\n')
            return 0

        pygfxd.gfxd_macro_fn(macro_fn)
        pygfxd.gfxd_execute()

        # Reset callbacks with no-op stubs (returning 0 → pygfxd default
        # formatting). pygfxd's setters don't accept None, so we swap in
        # stubs rather than clearing.
        if chain_gated:
            _noop = lambda *a, **kw: 0
            pygfxd.gfxd_vtx_callback(_noop)
            pygfxd.gfxd_dl_callback(_noop)
            pygfxd.gfxd_timg_callback(_noop)
            pygfxd.gfxd_tlut_callback(_noop)

        text = pygfxd.gfxd_buffer_to_string(out_buf).rstrip()
        if text:
            return text
    # Fallback: pair each 8-byte cmd as `{ { word0, word1 } },`
    lines = []
    for i in range(0, len(blob), 8):
        w0 = int.from_bytes(blob[i:i+4], "big")
        w1 = int.from_bytes(blob[i+4:i+8], "big")
        lines.append(f"{indent}{{ {{ 0x{w0:08X}, 0x{w1:08X} }} }},")
    return "\n".join(lines)


def _inc_kind(inc_rel):
    """Classify an inc.c path into vtx / gfx / lut / tex / other."""
    low = inc_rel.lower()
    if "_vtx_" in low:
        return "vtx"
    if "_gfx_" in low:
        return "gfx"
    if "_lut_" in low or "_tlut_" in low or "_palette" in low:
        return "lut"
    if "_tex_" in low:
        return "tex"
    return "other"


def inline_inc(text, target_name, raw, syms, sym_sizes, chain_positions=None):
    """Replace each `Type name[N] = { #include <...> };` with decoded content
    for Vtx / Gfx / u16-LUT arrays. Tex and raw u8/u32 blocks keep the
    `#include` line. Decoding pulls bytes directly from the asset binary
    using nm's symbol offsets — inc.c format doesn't matter.

    `chain_positions` (optional) gates Gfx pointer-arg resolution so that
    literals like 0x0E000000 (segmented addresses) don't get misresolved
    to whatever in-file symbol their low 16 bits happens to coincide with."""
    decl_re = re.compile(
        r"^(?P<ctype>Vtx|Gfx|u16)\s+(?P<name>d\w+)\[(?P<count>\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{\n"
        r"(?P<indent>[ \t]*)#include <[^>]+\.inc\.c>\n"
        r"\};",
        re.MULTILINE,
    )
    type_byte_size = {"Vtx": 16, "Gfx": 8, "u16": 2}
    name_to_offset = {n: o for o, n in syms.items()}

    def repl(m):
        ctype = m.group("ctype")
        name = m.group("name")
        count_expr = m.group("count")
        indent = m.group("indent") or "\t"
        count = int(count_expr, 16) if count_expr.startswith("0x") else int(count_expr)
        nbytes = count * type_byte_size[ctype]
        # Only decode LUT-flavored u16 arrays; a u16 array named `_something_else`
        # stays as #include because it might not be a palette.
        if ctype == "u16" and "_lut_" not in name.lower() and "_palette" not in name.lower():
            return m.group(0)
        blob = _extract_block_bytes(raw, syms, sym_sizes, name, nbytes)
        if blob is None:
            return m.group(0)
        if ctype == "Vtx":
            rendered = _render_vtx_entries(blob, indent)
        elif ctype == "Gfx":
            rendered = _render_gfx_entries(
                blob, indent,
                array_file_offset=name_to_offset.get(name),
                syms=syms, sym_sizes=sym_sizes,
                chain_positions=chain_positions,
            )
        else:  # u16 LUT
            rendered = _render_lut_entries(blob, indent)
        if rendered is None:
            return m.group(0)
        return f"{ctype} {name}[{count_expr}] = {{\n{rendered}\n}};"

    return decl_re.sub(repl, text)


def expand_chain_pointers(text, syms, sym_sizes):
    """Within DObjDesc array initializers, replace `(void*)0xCHAINHEX` with
    symbolic refs when the chain target maps to a known symbol."""
    def repl_dobj(blk):
        body = blk.group(1)
        def repl_ptr(m):
            chain = int(m.group(1), 16)
            sym = resolve_chain(chain, syms, sym_sizes)
            if sym is None:
                return m.group(0)
            target_word = chain & 0xFFFF
            return f"(void*){sym}  /* was 0x{chain:08X} -> byte 0x{target_word*4:04X} */"
        new_body = re.sub(r"\(void\*\)0x([0-9A-Fa-f]{8})", repl_ptr, body)
        return blk.group(0).replace(body, new_body)
    return re.sub(
        r"DObjDesc \w+\[\d+\] = \{(.*?)\n\};",
        repl_dobj,
        text,
        flags=re.DOTALL,
    )


def _dl_is_pygfxd_safe(dl_bytes):
    """Skip DLs containing 0x00-prefixed-but-nonzero word0 — pygfxd's
    decode of those (gsDPNoOpTag) doesn't roundtrip."""
    for i in range(0, len(dl_bytes), 8):
        if i + 8 > len(dl_bytes):
            return False
        w0 = int.from_bytes(dl_bytes[i:i+4], "big")
        if (w0 >> 24) == 0x00 and w0 != 0:
            return False
    return True


def resolve_gfx_chain_args(text, syms, sym_sizes):
    """In Gfx macros, address-typed args are chain-encoded pointers. Replace
    with symbol references (with `/* was 0xXXXX */` trail) where the chain
    target maps to a known symbol. Per-macro arg position table avoids
    accidentally rewriting non-pointer hex constants."""
    # macro_name -> arg index (0-based) of the chain pointer
    LEADING_ADDR = {
        "gsSPVertex": 0,
        "gsSPDisplayList": 0,
        "gsSPBranchList": 0,
        "gsSPBranchLessZ": 0,
        "gsDPLoadTextureBlock": 0,
        "gsDPLoadTextureBlock_4b": 0,
        "gsDPLoadTextureTile": 0,
        "gsDPLoadTextureTile_4b": 0,
        "gsDPLoadTLUT_pal16": 1,
        "gsDPLoadTLUT_pal256": 0,
    }
    TRAILING_ADDR = {
        # arg index counted from the end: the last arg is index -1
        "gsDPSetTextureImage": -1,
        "gsSPSegment": -1,
    }

    def replace_arg(args, idx, original):
        if idx < 0:
            idx = len(args) + idx
        if idx < 0 or idx >= len(args):
            return None
        a = args[idx].strip()
        m = re.fullmatch(r"0x([0-9A-Fa-f]{8})", a)
        if not m:
            return None
        chain = int(m.group(1), 16)
        sym = resolve_chain(chain, syms, sym_sizes)
        if sym is None:
            return None
        args[idx] = f" {sym} /* was 0x{chain:08X} */"
        return args

    def repl(m):
        macro = m.group(1)
        body = m.group(2)
        # Split on top-level commas only (no nested parens here in practice)
        args = body.split(",")
        if macro in LEADING_ADDR:
            idx = LEADING_ADDR[macro]
        elif macro in TRAILING_ADDR:
            idx = TRAILING_ADDR[macro]
        else:
            return m.group(0)
        new_args = replace_arg(args, idx, body)
        if new_args is None:
            return m.group(0)
        return f"{macro}({','.join(new_args)})"

    all_macros = list(LEADING_ADDR) + list(TRAILING_ADDR)
    pat = re.compile(r"\b(" + "|".join(all_macros) + r")\(([^()]*)\)")
    return pat.sub(repl, text)


def expand_gfx_arrays(text, syms):
    """Decode Gfx[N] array contents (which are { { word0, word1 } } pairs in
    inc.c form) into pygfxd-disassembled gsDP* macro calls."""
    if not HAS_PYGFXD:
        return text

    def repl(m):
        decl_line = m.group(1)
        body = m.group(2)
        words = re.findall(r"0x([0-9A-Fa-f]{8})", body)
        if len(words) % 2 != 0 or not words:
            return m.group(0)
        dl_bytes = b"".join(int(w, 16).to_bytes(4, "big") for w in words)
        if not _dl_is_pygfxd_safe(dl_bytes):
            return m.group(0)
        out_buf = pygfxd.gfxd_output_buffer(b'\0' * (len(dl_bytes) * 40 + 1024),
                                             len(dl_bytes) * 40 + 1024)
        pygfxd.gfxd_input_buffer(dl_bytes)
        pygfxd.gfxd_target(pygfxd.gfxd_f3dex2)
        pygfxd.gfxd_endian(pygfxd.GfxdEndian.big, 4)

        def macro_fn():
            pygfxd.gfxd_puts('\t')
            pygfxd.gfxd_macro_dflt()
            pygfxd.gfxd_puts(',\n')
            return 0

        pygfxd.gfxd_macro_fn(macro_fn)
        pygfxd.gfxd_execute()
        body_out = pygfxd.gfxd_buffer_to_string(out_buf)
        return f"{decl_line}\n{body_out}}};"

    return re.sub(
        r"(Gfx \w+\[\d+\] = \{)\n(.*?)\n\};",
        repl,
        text,
        flags=re.DOTALL,
    )


def expand(fid):
    c_path, target_name = find_c_file(fid)
    if c_path is None:
        print(f"fid {fid}: no .c found")
        return
    syms, sym_sizes = nm_symbols(fid)
    print(f"fid {fid} ({target_name}): {len(syms)} symbols")

    # Load raw asset bytes for chain walking
    asset_path = None
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            asset_path = p
            break
    raw = b""
    if asset_path:
        with open(asset_path, "rb") as f:
            raw = f.read()
    summary = chain_summary(fid, raw, syms) if raw else ""

    # Byte positions in the file that are actual chain-encoded pointers.
    # Used by `_render_gfx_entries` to distinguish real chain pointers (which
    # encode `(next_word << 16) | target_word`) from literal segmented
    # addresses like 0x0E000000 whose byte position isn't in the chain and
    # whose u32 value must stay literal.
    chain_positions = set()
    if raw:
        intern_start, extern_start = csv_chain_starts(fid)
        for start in (intern_start, extern_start):
            if start is None or start == 0xFFFF:
                continue
            for ptr, _, _ in walk_chain(raw, start):
                chain_positions.add(ptr)

    with open(c_path) as f:
        text = f.read()

    text = inline_inc(text, target_name, raw, syms, sym_sizes,
                     chain_positions=chain_positions)
    text = expand_chain_pointers(text, syms, sym_sizes)

    header = (
        f"/* AUTO-GENERATED expanded view of src/relocData/{fid}_{target_name}.c\n"
        f" * Inlines every .inc.c blob, expands chain pointers to symbol refs\n"
        f" * where possible, and decodes Gfx[] arrays via pygfxd.\n"
        f" *\n"
        f" * NOT COMPILED. For human reading only.\n"
        f"{summary}\n"
        f" */\n\n"
    )

    out_path = os.path.join(BUILD_DIR, f"{fid}_{target_name}.c")
    os.makedirs(BUILD_DIR, exist_ok=True)
    with open(out_path, "w") as f:
        f.write(header + text)
    print(f"  wrote {out_path}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int, nargs="?")
    ap.add_argument("--all", action="store_true",
                    help="Expand every relocData .c file with a built .o")
    args = ap.parse_args()
    if args.all:
        fids = []
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_\w+\.c$", fn)
            if m:
                fids.append(int(m.group(1)))
        for fid in sorted(fids):
            try:
                expand(fid)
            except Exception as e:
                print(f"fid {fid}: ERROR {e}")
    else:
        if args.fid is None:
            ap.error("fid required (or use --all)")
        expand(args.fid)


if __name__ == "__main__":
    main()
