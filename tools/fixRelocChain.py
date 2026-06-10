#!/usr/bin/python3
"""
Rebuild relocation chains in a compiled relocData binary from the .o's
relocation records.

Walks the .o's R_MIPS_32 entries in .rel.data, reads in-place addends
from .data, resolves extern symbols via the global symbol index
(--sym-index, or a scan of every reloc .o under build/<version>/), and
classifies intern vs extern per slot by walking the original baserom
binary's two chains. After patching, the output must byte-match the
original extracted binary or the tool exits nonzero with diagnostics.

Usage:
    fixRelocChain.py <binary_path> <object_path> [--file-id N]
                     [--version us|jp] [--sym-index PATH]
"""

import os
import sys
import struct
import argparse
import csv
import subprocess
import re

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
# Default to the US tree; main() rebinds via _bind_version() once --version is parsed.
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "us", "relocData.csv")


def _bind_version(version):
    global CSV_PATH
    CSV_PATH = os.path.join(PROJECT_DIR, "assets", version, "relocData.csv")


def _nm(obj_path):
    """Run mips-{linux-gnu,elf}-nm on obj_path. Returns parsed lines."""
    for prefix in ['mips-linux-gnu', 'mips-elf']:
        nm = f"{prefix}-nm"
        try:
            return subprocess.run([nm, obj_path], capture_output=True, text=True, check=True)
        except (FileNotFoundError, subprocess.CalledProcessError):
            continue
    print(f"Error: no mips nm found", file=sys.stderr)
    sys.exit(1)


def read_symbol_table(obj_path):
    """Read symbol table from .o file using nm. Returns {name: offset}."""
    result = _nm(obj_path)
    symbols = {}
    for line in result.stdout.splitlines():
        parts = line.split()
        if len(parts) >= 3:
            offset = int(parts[0], 16)
            name = parts[2]
            symbols[name] = offset
    return symbols


def read_symbol_classes(obj_path):
    """Return ({defined_name: offset}, {undefined_name}) split."""
    result = _nm(obj_path)
    defined, undefined = {}, set()
    for line in result.stdout.splitlines():
        parts = line.split()
        # Defined: "<offset> <class> <name>"; undefined: "U <name>" or "         U <name>".
        if len(parts) >= 3:
            try:
                offset = int(parts[0], 16)
            except ValueError:
                continue
            cls, name = parts[1], parts[2]
            if cls in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
                defined[name] = offset
        elif len(parts) == 2 and parts[0] in ('U', 'w'):
            undefined.add(parts[1])
    return defined, undefined


def read_elf_relocs(obj_path):
    """Read R_MIPS_32 relocations from .rel.data via readelf -W.

    Returns a list of (data_offset, symbol_name) pairs. Symbol names
    that readelf truncated with `[...]` are unusable; we re-read full
    names below from the same nm output.
    """
    for prefix in ['mips-linux-gnu', 'mips-elf']:
        try:
            result = subprocess.run([f'{prefix}-readelf', '-r', '-W', obj_path],
                                    capture_output=True, text=True, check=True)
            break
        except (FileNotFoundError, subprocess.CalledProcessError):
            continue
    else:
        print(f"Error: no mips readelf found", file=sys.stderr)
        sys.exit(1)

    relocs = []
    in_data = False
    for line in result.stdout.splitlines():
        if line.startswith("Relocation section "):
            in_data = ".rel.data" in line or "'.rel.data'" in line or '.rela.data' in line
            continue
        if not in_data or not line.strip():
            continue
        # Format: "<off>  <info>  <type>  <symval>  <name>"
        m = re.match(r'^([0-9a-fA-F]{8,16})\s+\S+\s+(R_MIPS_\S+)\s+[0-9a-fA-F]+\s+(\S+)', line)
        if not m:
            continue
        off, rtype, name = int(m.group(1), 16), m.group(2), m.group(3)
        if rtype != 'R_MIPS_32':
            continue
        # If readelf truncated the name, fall back to objdump (slower).
        if name.endswith('[...]'):
            name = None
        relocs.append((off, name, rtype))

    # Patch any truncated names via objdump -r (gives full names).
    if any(n is None for _, n, _ in relocs):
        for prefix in ['mips-linux-gnu', 'mips-elf']:
            try:
                od = subprocess.run([f'{prefix}-objdump', '-r', obj_path],
                                    capture_output=True, text=True, check=True)
                break
            except (FileNotFoundError, subprocess.CalledProcessError):
                continue
        else:
            print("Error: no mips objdump found", file=sys.stderr)
            sys.exit(1)
        full_names = {}
        in_data = False
        for line in od.stdout.splitlines():
            if 'RELOCATION RECORDS FOR' in line:
                in_data = '[.data]' in line
                continue
            if not in_data:
                continue
            m = re.match(r'^([0-9a-fA-F]+)\s+R_MIPS_32\s+(\S+)', line)
            if m:
                full_names[int(m.group(1), 16)] = m.group(2)
        relocs = [(o, full_names.get(o, n), t) for (o, n, t) in relocs]

    return [(o, n) for (o, n, _t) in relocs if n is not None]


def _read_data_section(obj_path):
    """Extract .data section bytes via objcopy for in-place addend lookup."""
    import tempfile
    with tempfile.NamedTemporaryFile(suffix='.bin', delete=False) as tmp:
        tmp_path = tmp.name
    try:
        for prefix in ['mips-linux-gnu', 'mips-elf']:
            try:
                subprocess.run([f'{prefix}-objcopy', '-O', 'binary',
                                '--only-section=.data', obj_path, tmp_path],
                               capture_output=True, check=True)
                break
            except (FileNotFoundError, subprocess.CalledProcessError):
                continue
        with open(tmp_path, 'rb') as f:
            return f.read()
    finally:
        try: os.unlink(tmp_path)
        except OSError: pass


_global_sym_index_cache = {}  # {version: {sym_name: (fid, offset)}}
_sym_index_path = None        # set via --sym-index; preferred over .o scanning


def set_sym_index_path(path):
    global _sym_index_path
    _sym_index_path = path


def _build_global_sym_index(version):
    """Return {sym: (fid, offset)} for every relocData symbol.

    Prefers the materialized index file (--sym-index, generated by
    tools/genRelocSymIndex.py after the compile stage); falls back to
    scanning every reloc .o under build/<version>/ when no index file
    is available (offline / ad-hoc use).
    """
    if version in _global_sym_index_cache:
        return _global_sym_index_cache[version]
    if _sym_index_path and os.path.exists(_sym_index_path):
        idx = {}
        with open(_sym_index_path) as f:
            for line in f:
                parts = line.split()
                if len(parts) == 3:
                    sym, fid, off = parts[0], int(parts[1]), int(parts[2], 16)
                    if sym not in idx:
                        idx[sym] = (fid, off)
        _global_sym_index_cache[version] = idx
        return idx
    build_dir = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build')
    idx = {}
    if not os.path.isdir(build_dir):
        _global_sym_index_cache[version] = idx
        return idx
    for fname in os.listdir(build_dir):
        if not fname.endswith('.o'):
            continue
        try:
            fid = int(fname[:-2])
        except ValueError:
            continue
        defined, _ = read_symbol_classes(os.path.join(build_dir, fname))
        for sym, off in defined.items():
            # First-writer wins; symbols should be globally unique anyway.
            if sym not in idx:
                idx[sym] = (fid, off)
    _global_sym_index_cache[version] = idx
    return idx


_baserom_chain_cache = {}  # {(version, fid): (intern_set, extern_set)}
_baserom_data_cache = {}   # {(version, fid): bytes or None}


def _baserom_data(version, fid):
    """The original extracted (decompressed) binary for fid, or None."""
    key = (version, fid)
    if key in _baserom_data_cache:
        return _baserom_data_cache[key]
    bin_dir = os.path.join(PROJECT_DIR, 'assets', version, 'relocData')
    data = None
    for ext in ('vpk0.bin', 'bin'):
        p = os.path.join(bin_dir, f'{fid}.{ext}')
        if os.path.exists(p):
            with open(p, 'rb') as f:
                data = f.read()
            break
    _baserom_data_cache[key] = data
    return data


def _walk_baserom_chains(version, fid):
    """Walk the baserom binary's intern + extern chains to recover the
    original chain classification of every pointer slot.

    Returns (intern_set, extern_set) of byte offsets, or (None, None) if
    the baserom or CSV info isn't available.
    """
    key = (version, fid)
    if key in _baserom_chain_cache:
        return _baserom_chain_cache[key]
    import csv as _csv
    csv_path = os.path.join(PROJECT_DIR, 'assets', version, 'relocData.csv')
    if not os.path.exists(csv_path):
        _baserom_chain_cache[key] = (None, None)
        return None, None
    intern_start = extern_start = None
    with open(csv_path) as f:
        reader = _csv.reader(f)
        next(reader)
        for i, row in enumerate(reader):
            if i == fid and len(row) >= 6:
                try:
                    intern_start = int(row[2].strip(), 16)
                    extern_start = int(row[4].strip(), 16)
                except ValueError:
                    pass
                break
    if intern_start is None:
        _baserom_chain_cache[key] = (None, None)
        return None, None
    # Locate the baserom binary
    bin_dir = os.path.join(PROJECT_DIR, 'assets', version, 'relocData')
    data = None
    for ext in ('vpk0.bin', 'bin'):
        p = os.path.join(bin_dir, f'{fid}.{ext}')
        if os.path.exists(p):
            with open(p, 'rb') as f:
                data = f.read()
            break
    if data is None:
        _baserom_chain_cache[key] = (None, None)
        return None, None

    def walk(start_word):
        out = set()
        cur = start_word
        visited = 0
        while cur != 0xFFFF:
            byte_off = cur * 4
            if byte_off + 4 > len(data):
                break
            word = struct.unpack('>I', data[byte_off:byte_off + 4])[0]
            next_word = (word >> 16) & 0xFFFF
            out.add(byte_off)
            if next_word == cur:
                break
            cur = next_word
            visited += 1
            if visited > 100000:  # safety bound
                break
        return out

    result = (walk(intern_start), walk(extern_start))
    _baserom_chain_cache[key] = result
    return result


def derive_entries_from_obj(obj_path, version, strict=True, fid=None):
    """Build (intern_entries, extern_entries) from the .o's .rel.data.

    Chain classification (intern vs extern) is derived from the BASEROM
    binary by walking its two chains and recording which byte offsets
    fall on which chain. This matches the original baserom encoding
    exactly, including cases where a locally-defined symbol was placed
    on the extern chain.

    Falls back to symbol-class-based classification (defined locally =>
    intern) when the baserom info isn't available.

    If strict=False, unresolved externs are reported and skipped.

    Returns (intern, extern, unresolved).
    """
    defined, undefined = read_symbol_classes(obj_path)
    relocs = read_elf_relocs(obj_path)
    data = _read_data_section(obj_path)

    intern_set = extern_set = None
    if fid is not None:
        intern_set, extern_set = _walk_baserom_chains(version, fid)

    intern, extern, unresolved = [], [], []
    extra = []
    extern_index = None

    for off, sym in relocs:
        addend = struct.unpack_from('>I', data, off)[0] if off + 4 <= len(data) else 0
        # Resolve target byte address
        if sym in defined:
            target_off = defined[sym] + addend
        else:
            if extern_index is None:
                extern_index = _build_global_sym_index(version)
            if sym not in extern_index:
                unresolved.append((off, sym))
                if strict:
                    print(f"Error: extern symbol '{sym}' (at .data+0x{off:X}) "
                          f"not defined in any reloc .o", file=sys.stderr)
                    sys.exit(1)
                continue
            _fid, sym_off = extern_index[sym]
            target_off = sym_off + addend
        # Determine chain class
        if intern_set is not None and extern_set is not None:
            if off in intern_set:
                intern.append((off, target_off))
            elif off in extern_set:
                extern.append((off, target_off))
            else:
                # .o has a reloc at a slot the baserom doesn't put on
                # either chain: the C source holds a pointer expression
                # where the original had a plain word. Skipping it would
                # silently diverge, so collect for the completeness check.
                extra.append((off, sym))
        else:
            # Fallback: classify by symbol class
            if sym in defined:
                intern.append((off, target_off))
            else:
                extern.append((off, target_off))

    # Completeness diagnostics against the baserom chains:
    #   missing — slot is chained in the baserom but the .o has no reloc
    #             record there. Tolerated when the in-place word already
    #             equals the baserom's chain encoding (raw pre-encoded
    #             words in committed sources); reported otherwise.
    #   extra   — reloc record at a slot on neither baserom chain.
    # These are surfaced by fixup_binary's post-patch byte compare; we
    # only collect human-readable hints here.
    diagnostics = []
    if intern_set is not None and extern_set is not None:
        reloc_offs = {off for off, _ in relocs}
        orig = _baserom_data(version, fid)
        for off in sorted((intern_set | extern_set) - reloc_offs):
            if orig is not None and off + 4 <= len(orig) and off + 4 <= len(data) \
                    and orig[off:off + 4] == data[off:off + 4]:
                continue  # raw word already carries the correct chain encoding
            diagnostics.append(f"  missing: .data+0x{off:X} is chain-encoded in "
                               f"the baserom but has no relocation in the .o")
        for off, sym in extra:
            diagnostics.append(f"  extra: .data+0x{off:X} ({sym}) has a relocation "
                               f"but is on neither baserom chain")

    return intern, extern, unresolved, diagnostics


def build_chain(data, entries):
    """Rebuild a relocation chain in the binary data.

    Each u32 at ptr_byte_offset gets patched to:
      (next_ptr_word_offset << 16) | target_word_offset

    Returns the word offset of the first entry (chain start).
    """
    if not entries:
        return 0xFFFF

    entries = sorted(entries, key=lambda e: e[0])

    for i, (ptr_off, target_off) in enumerate(entries):
        target_word = target_off // 4
        next_ptr_word = entries[i + 1][0] // 4 if i + 1 < len(entries) else 0xFFFF
        packed = (next_ptr_word << 16) | target_word
        struct.pack_into('>I', data, ptr_off, packed)

    return entries[0][0] // 4


def fixup_binary(binary_path, obj_path, file_id=None, version=None):
    """Patch relocation chains derived from the .o's relocation records,
    then verify the result byte-for-byte against the original binary."""

    intern_entries, extern_entries, unresolved, diagnostics = \
        derive_entries_from_obj(obj_path, version, strict=False, fid=file_id)
    if unresolved:
        print(f"  WARNING: {len(unresolved)} dangling extern(s) "
              f"skipped in {os.path.basename(obj_path)}:", file=sys.stderr)
        for off, sym in unresolved[:5]:
            print(f"    .data+0x{off:X} -> {sym}", file=sys.stderr)
        if len(unresolved) > 5:
            print(f"    ... and {len(unresolved)-5} more", file=sys.stderr)

    with open(binary_path, 'rb') as f:
        data = bytearray(f.read())

    intern_start = build_chain(data, intern_entries)
    extern_start = build_chain(data, extern_entries)

    with open(binary_path, 'wb') as f:
        f.write(data)

    # The hard gate for --auto: the patched output must be byte-identical
    # to the original extracted binary. Any divergence (mis-typed slot,
    # wrong pointer expression, stale symbol, missing reloc) fails the
    # build here, with chain diagnostics for triage. The original may
    # carry trailing bytes (extern fid table) beyond the .data extract,
    # so only the patched length is compared.
    if file_id is not None and version is not None:
        orig = _baserom_data(version, file_id)
        if orig is not None and len(orig) >= len(data):
            if orig[:len(data)] != bytes(data):
                first = next((i for i in range(min(len(orig), len(data)))
                              if orig[i] != data[i]), None)
                print(f"Error: {binary_path} differs from the original binary "
                      f"after --auto chain rebuild (first diff @0x{first:X})",
                      file=sys.stderr)
                for p in diagnostics[:20]:
                    print(p, file=sys.stderr)
                if len(diagnostics) > 20:
                    print(f"  ... and {len(diagnostics) - 20} more", file=sys.stderr)
                sys.exit(1)
        elif orig is not None:
            print(f"Error: {binary_path} is larger than the original binary "
                  f"({len(data)} vs {len(orig)})", file=sys.stderr)
            sys.exit(1)

    print(f"Patched {binary_path}:")
    print(f"  {len(intern_entries)} internal relocations (start word: 0x{intern_start:04X})")
    print(f"  {len(extern_entries)} external relocations (start word: 0x{extern_start:04X})")

    # Verify chain start matches CSV
    if file_id is not None and os.path.exists(CSV_PATH):
        with open(CSV_PATH) as f:
            reader = csv.reader(f)
            next(reader)
            for i, row in enumerate(reader):
                if i == file_id and len(row) >= 6:
                    csv_intern = int(row[2].strip(), 16)
                    csv_extern = int(row[4].strip(), 16)
                    if csv_intern != intern_start:
                        print(f"  WARNING: CSV intern 0x{csv_intern:04X} != chain start 0x{intern_start:04X}")
                    if csv_extern != extern_start:
                        print(f"  WARNING: CSV extern 0x{csv_extern:04X} != chain start 0x{extern_start:04X}")
                    break

    return intern_start, extern_start


def main():
    parser = argparse.ArgumentParser(
        description="Rebuild relocation chains from the .o's relocations")
    parser.add_argument("binary_path", help="Compiled binary (.vpk0.bin or .bin)")
    parser.add_argument("obj_path", help="Compiled object file (.o)")
    parser.add_argument("--file-id", type=int, default=None,
                        help="File ID (selects the baserom chain info row)")
    parser.add_argument("--version", default="us", choices=("us", "jp"),
                        help="Selects assets/<v>/relocData.csv")
    parser.add_argument("--auto", action="store_true",
                        help="Accepted for compatibility; chain derivation is "
                             "always .o-driven.")
    parser.add_argument("--sym-index", default=None,
                        help="Path to the global symbol index file generated "
                             "by genRelocSymIndex.py; avoids rescanning every "
                             "reloc .o for extern resolution.")
    args = parser.parse_args()
    _bind_version(args.version)
    if args.sym_index:
        set_sym_index_path(args.sym_index)

    fixup_binary(args.binary_path, args.obj_path,
                 args.file_id, args.version)


if __name__ == "__main__":
    main()
