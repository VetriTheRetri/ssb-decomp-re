#!/usr/bin/python3
"""Symbolize chain-encoded pointers in .dl.inc.c files (Step 2b).

For each fid:
  1. Parse the master .c to find `<type> dFoo_<kind>_0xN[count] = { #include <subdir/foo.<kind>.inc.c> };`
     declarations and their byte ranges.
  2. Read the .reloc file to build a {ptr_byte_offset: (target_label, addend)} map.
  3. For each .dl.inc.c include whose byte range overlaps the reloc map:
       - Identify chain-pointer bytes in the included file.
       - Rewrite the raw hex value (or pygfxd macro arg) with a typed symbol expression.
  4. Insert forward `extern` declarations into the master .c for any extern targets.

The result: every chain pointer in the file becomes a real C pointer expression,
the compiler emits R_MIPS_32 for it, and `fixRelocChain.py --auto` produces
byte-identical output to the .reloc-driven build.

Usage:
    tools/symbolizeDLInc.py <fid> [--version us|jp] [--dry]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# F3DEX2 gs* macros that carry a pointer in their last 32-bit word (word1).
# Format: macro_name → argument_index (0-based, of the pointer arg in the
# macro's textual signature).
_POINTER_MACROS = {
    'gsSPDisplayList': 0,
    'gsSPBranchList': 0,
    'gsSPVertex': 0,
    'gsSPMatrix': 0,
    'gsSPViewport': 0,
    'gsSPLight': 0,
    'gsSPLookAt': 0,
    'gsDPSetTextureImage': 3,  # gsDPSetTextureImage(fmt, siz, width, addr)
}


def _find_master_c(fid, version='us'):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    # For JP, look up by manifest name FIRST (the JP fid often disagrees with
    # the US fid prefix in the filename — e.g. JP fid 299 = US fid 324 = LinkModel).
    if version == 'jp':
        manifest = os.path.join(PROJECT_DIR, 'tools', 'relocFileDescriptions.jp.txt')
        if os.path.exists(manifest):
            name = None
            with open(manifest) as fh:
                for line in fh:
                    line = line.strip()
                    if line.startswith(f'-{fid:03d}: ') or line.startswith(f'-{fid}: '):
                        name = line.split(': ', 1)[1].strip()
                        break
            if name:
                for f in os.listdir(src):
                    if f.endswith(f'_{name}.c'):
                        return os.path.join(src, f)
    # Fall back to direct fid-prefix match (works when src and JP fids align).
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    # spritelist-driven: master lives in build/
    return None


def _find_reloc(fid, version='us'):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    # Try direct fid match first (works when src filename uses this version's fid)
    for f in os.listdir(src):
        if (f.startswith(f'{fid}_') and f.endswith('.reloc')
                and '.jp.reloc' not in f and '.us.reloc' not in f):
            base = f[:-len('.reloc')]
            # For JP, prefer .jp.reloc override if present
            if version == 'jp':
                jp_path = os.path.join(src, base + '.jp.reloc')
                if os.path.exists(jp_path):
                    return jp_path
            return os.path.join(src, f)
    # JP fallback: map JP fid → name via manifest, then find <us_fid>_<name>.reloc
    if version == 'jp':
        manifest = os.path.join(PROJECT_DIR, 'tools', 'relocFileDescriptions.jp.txt')
        if os.path.exists(manifest):
            name = None
            with open(manifest) as fh:
                for line in fh:
                    line = line.strip()
                    if line.startswith(f'-{fid:03d}: ') or line.startswith(f'-{fid}: '):
                        name = line.split(': ', 1)[1].strip()
                        break
            if name:
                # Look for any *_<name>.reloc
                for f in os.listdir(src):
                    if f.endswith(f'_{name}.reloc') and '.jp.reloc' not in f and '.us.reloc' not in f:
                        base = f[:-len('.reloc')]
                        jp_path = os.path.join(src, base + '.jp.reloc')
                        if os.path.exists(jp_path):
                            return jp_path
                        return os.path.join(src, f)
    return None


def _local_syms_from_master(master_path):
    """Derive {symbol: byte_offset} from `_0xN` suffixes in decl names.

    Best-effort fallback when nm can't read the .o (e.g. before first compile).
    """
    with open(master_path) as f:
        text = f.read()
    out = {}
    # Match decl headers: `<type> <name>[N] = {` or `<type> <name> = {` or `... <name>[];`
    for m in re.finditer(
            r'^[A-Za-z_][A-Za-z_0-9]*\s+(?:\*\s*)?'
            r'([A-Za-z_][A-Za-z_0-9]*)\b'
            r'(?:\s*\[[^\]]*\])?'
            r'\s*=', text, re.MULTILINE):
        name = m.group(1)
        # Match the FIRST _0xN token in the name (not the last, and not
        # requiring a word boundary, since the suffix may continue with
        # `_DisplayList` etc.)
        bo = re.search(r'_0x([0-9a-fA-F]+)(?=_|$)', name)
        if bo:
            out[name] = int(bo.group(1), 16)
    return out


def _nm_symbols(obj_path):
    if not os.path.exists(obj_path):
        return {}
    r = subprocess.run(['mips-linux-gnu-nm', obj_path], capture_output=True, text=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
            try: syms[p[2]] = int(p[0], 16)
            except ValueError: pass
    return syms


def _parse_reloc(rf, local_syms):
    """Returns {ptr_byte_offset: (target_label, addend)}."""
    out = {}
    with open(rf) as f:
        for ln in f:
            ln = ln.split('#')[0].strip()
            if not ln: continue
            p = ln.split()
            if len(p) != 3: continue
            kind, ptr, tgt = p
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', ptr)
            if not m: continue
            base = m.group(1)
            offs = int(m.group(2), 16) if m.group(2) else 0
            if base not in local_syms: continue
            ptr_byte = local_syms[base] + offs
            # Parse target
            tm = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', tgt)
            if not tm: continue
            tn = tm.group(1)
            ta = int(tm.group(2), 16) if tm.group(2) else 0
            out[ptr_byte] = (tn, ta)
    return out


# Match a top-level decl with an .inc.c include. Captures: type, name, count, inc_path.
_DECL_RE = re.compile(
    r'^([A-Za-z_][A-Za-z_0-9]*)\s+'         # type
    r'([A-Za-z_][A-Za-z_0-9]*)'              # name
    r'\s*\[\s*(\d+)\s*\]\s*=\s*\{\s*\n'      # [count] = {
    r'\s*#include\s+<([^>]+)>\s*\n'          # #include <...>
    r'\s*\}\s*;',
    re.MULTILINE
)


def _parse_decls(text, local_syms=None):
    """Find all `<type> <name>[N] = { #include <path> };` blocks.

    Returns list of dicts with byte_offset, name, type, count, inc_path.
    The byte_offset prefers `local_syms[name]` when available (definitive),
    falling back to parsing the `_0xN` suffix in the name when that's the
    only signal (e.g. before any .o has been compiled).
    """
    out = []
    for m in _DECL_RE.finditer(text):
        type_, name, count, inc = m.group(1), m.group(2), int(m.group(3)), m.group(4)
        byte_offset = None
        if local_syms is not None and name in local_syms:
            byte_offset = local_syms[name]
        else:
            bo_m = re.search(r'_0x([0-9a-fA-F]+)\b', name)
            if bo_m: byte_offset = int(bo_m.group(1), 16)
        if byte_offset is None:
            continue
        out.append({
            'name': name,
            'type': type_,
            'count': count,
            'byte_offset': byte_offset,
            'inc_path': inc,
            'decl_match_start': m.start(),
            'decl_match_end': m.end(),
        })
    return out


def _format_target_expr(target_label, addend, target_type_hint):
    """Build a C expression that resolves to (target byte address)."""
    # Cast format: `(type *)sym + addend_in_units` doesn't work
    # well for arbitrary addends because pointer arithmetic scales.
    # Use byte arithmetic via u8 cast.
    if addend == 0:
        return f"(u32){target_label}"
    return f"(u32)((u8 *){target_label} + 0x{addend:X})"


def _resolve_inc_path(fid_name_prefix, inc_path, version):
    """`inc_path` is relative to build/<v>/src/relocData/. Returns abs path."""
    return os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', inc_path)


# Raw-form line: \t{ { 0xXX, 0xYY } },  (one Gfx command)
_RAW_LINE_RE = re.compile(
    r'^(\s*\{\s*\{\s*0x[0-9a-fA-F]{8}\s*,\s*)0x([0-9a-fA-F]{8})(\s*\}\s*\}\s*,?\s*)$'
)

# Macro-form line: \tgs<Name>(arg1, arg2, ..., 0xXXXXXXXX, ...),
_MACRO_LINE_RE = re.compile(
    r'^(\s*)(gs[A-Za-z][A-Za-z0-9_]*)\((.*)\)(\s*,?\s*)$'
)


def _process_raw(lines, base_byte, reloc_map, needed_externs):
    """Each raw line = 1 Gfx command (8 bytes). word1 at base + i*8 + 4."""
    new_lines = list(lines)
    edits = 0
    for i, line in enumerate(lines):
        m = _RAW_LINE_RE.match(line.rstrip('\n'))
        if not m: continue
        word1_byte = base_byte + i * 8 + 4
        tgt = reloc_map.get(word1_byte)
        if not tgt: continue
        target_label, addend = tgt
        expr = _format_target_expr(target_label, addend, None)
        needed_externs.add(target_label)
        new_lines[i] = f"{m.group(1)}{expr}{m.group(3)}\n"
        edits += 1
    return new_lines, edits


def _split_macro_args(s):
    """Split a macro arg string by top-level commas. Returns list of (text, start, end)."""
    args = []
    depth = 0
    start = 0
    for i, c in enumerate(s):
        if c in '([': depth += 1
        elif c in ')]': depth -= 1
        elif c == ',' and depth == 0:
            args.append((s[start:i], start, i))
            start = i + 1
    if s[start:].strip():
        args.append((s[start:], start, len(s)))
    return args


def _process_macro(lines, base_byte, reloc_map, needed_externs):
    """Each non-blank line = 1 Gfx command (8 bytes) in pygfxd output."""
    new_lines = list(lines)
    edits = 0
    cmd_idx = 0
    for i, line in enumerate(lines):
        stripped = line.strip()
        if not stripped:
            continue
        m = _MACRO_LINE_RE.match(line.rstrip('\n'))
        if not m:
            # Not a recognized macro line; skip and don't advance cmd_idx
            continue
        leading, macro_name, args_str, trailing = m.group(1), m.group(2), m.group(3), m.group(4)
        word1_byte = base_byte + cmd_idx * 8 + 4
        cmd_idx += 1
        tgt = reloc_map.get(word1_byte)
        if not tgt:
            continue
        if macro_name not in _POINTER_MACROS:
            # The reloc says this byte has a pointer but our macro table doesn't
            # know how to substitute. Skip; will fall back to .reloc.
            continue
        arg_idx = _POINTER_MACROS[macro_name]
        parts = _split_macro_args(args_str)
        if arg_idx >= len(parts):
            continue
        arg_text, arg_s, arg_e = parts[arg_idx]
        # The hex literal we want to replace
        hex_m = re.search(r'0x[0-9a-fA-F]{8}', arg_text)
        if not hex_m:
            continue
        target_label, addend = tgt
        expr = _format_target_expr(target_label, addend, None)
        # Some pointer macros expect a pointer (not u32), e.g. gsSPDisplayList(addr).
        # Use the symbolic name directly with appropriate cast.
        if macro_name in ('gsSPDisplayList', 'gsSPBranchList'):
            if addend == 0:
                expr = f"(Gfx *){target_label}"
            else:
                expr = f"(Gfx *)((u8 *){target_label} + 0x{addend:X})"
        elif macro_name == 'gsSPVertex':
            if addend == 0:
                expr = f"(Vtx *){target_label}"
            else:
                expr = f"(Vtx *)((u8 *){target_label} + 0x{addend:X})"
        elif macro_name == 'gsDPSetTextureImage':
            if addend == 0:
                expr = target_label
            else:
                expr = f"((u8 *){target_label} + 0x{addend:X})"
        elif macro_name == 'gsSPMatrix':
            if addend == 0:
                expr = f"(Mtx *){target_label}"
            else:
                expr = f"(Mtx *)((u8 *){target_label} + 0x{addend:X})"
        new_arg = arg_text[:hex_m.start()] + expr + arg_text[hex_m.end():]
        new_args = (args_str[:arg_s] + new_arg + args_str[arg_e:])
        needed_externs.add(target_label)
        new_lines[i] = f"{leading}{macro_name}({new_args}){trailing}\n"
        edits += 1
    return new_lines, edits


def _build_type_lookup(master_text):
    """Map {symbol: (type_with_stars, is_ptr_array_form)} for top-level defs.

    Matches `<type> <stars?> <name>[N] = {` (including `<type> **<name>` etc).
    The stars are preserved in the type string so forward externs match the
    definition's full type.
    """
    out = {}
    for m in re.finditer(
            r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=',
            master_text, re.MULTILINE):
        type_, stars, name = m.group(1), m.group(2), m.group(3)
        if type_ == 'extern':
            continue
        full_type = type_ if not stars else f'{type_} {stars}'
        out[name] = (full_type, False)
    return out


def _extern_decl(sym, type_lookup=None):
    """Forward-declare `sym`. If `type_lookup` knows the full type, use it
    verbatim. Otherwise fall back to a name-pattern heuristic, and finally to
    `u32` (which is 4-byte-aligned like all pointer-bearing slots).
    """
    if type_lookup and sym in type_lookup:
        type_, _ = type_lookup[sym]
        return f'extern {type_} {sym}[];'
    if '_Vtx' in sym: return f'extern Vtx {sym}[];'
    if '_DL' in sym or '_Gfx' in sym: return f'extern Gfx {sym}[];'
    if '_palette' in sym or '_LUT' in sym: return f'extern u16 {sym}[];'
    if '_Tex' in sym: return f'extern u8 {sym}[];'
    if '_DObjDesc' in sym: return f'extern DObjDesc {sym}[];'
    if '_MObjSub' in sym: return f'extern MObjSub {sym}[];'
    if '_AObjEvent32' in sym: return f'extern AObjEvent32 *{sym}[];'
    # Conservative fallback: u32 keeps 4-byte alignment without assuming any
    # specific named type (e.g. AnimJoint is just a label here, not a typedef).
    return f'extern u32 {sym}[];'


def _add_externs_to_master(master_path, needed):
    """Insert forward `extern` decls for symbols not already declared.

    `needed` is the set of symbols that chain-pointer substitutions referenced.
    We only consider existing EXTERN declarations as conflicting — actual
    definitions are not forward decls, so a forward `extern` ABOVE the
    definition is fine and required when the inc.c that uses the symbol is
    included before the definition.
    """
    with open(master_path) as f:
        text = f.read()
    # Use hoistExterns to manage forward decls: it hoists existing extern
    # lines (preserving their type) when they sit below their first use,
    # and only synthesizes new ones from definition types when no extern
    # exists at all. No type guessing.
    import hoistExterns
    new_text = hoistExterns.hoist_or_add_externs(text, needed)
    if new_text == text:
        return False
    with open(master_path, 'w') as f:
        f.write(new_text)
    return True


def symbolize_fid(fid, version, dry_run=False):
    master = _find_master_c(fid, version)
    if not master:
        print(f'fid={fid}: no master .c in src/relocData; skipping (spritelist or other)', file=sys.stderr)
        return 0
    rf = _find_reloc(fid, version)
    if not rf:
        print(f'fid={fid}: no .reloc; nothing to symbolize')
        return 0

    obj = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    local_syms = _nm_symbols(obj)
    if not local_syms:
        # Fall back to parsing the master .c — each symbol's _0xN suffix
        # encodes its byte offset within the file.
        local_syms = _local_syms_from_master(master)
    reloc_map = _parse_reloc(rf, local_syms)
    if not reloc_map:
        print(f'fid={fid}: empty reloc map; skipping')
        return 0

    with open(master) as f:
        master_text = f.read()
    decls = _parse_decls(master_text, local_syms=local_syms)
    if not decls:
        print(f'fid={fid}: no .inc.c-driven decls; skipping')
        return 0

    needed_externs = set()
    total_edits = 0
    processed = 0
    for d in decls:
        if not d['inc_path'].endswith('.dl.inc.c'):
            continue
        inc_path = _resolve_inc_path(fid, d['inc_path'], version)
        if not os.path.exists(inc_path):
            print(f'  warn: {inc_path} missing', file=sys.stderr)
            continue
        with open(inc_path) as f:
            lines = f.readlines()
        # Detect format by first non-empty line
        first = next((ln for ln in lines if ln.strip()), '')
        if '{ {' in first:
            new_lines, edits = _process_raw(lines, d['byte_offset'], reloc_map, needed_externs)
        elif first.lstrip().startswith('gs'):
            new_lines, edits = _process_macro(lines, d['byte_offset'], reloc_map, needed_externs)
        else:
            continue
        if edits:
            total_edits += edits
            processed += 1
            if not dry_run:
                with open(inc_path, 'w') as f:
                    f.writelines(new_lines)
        # Also harvest symbol refs already in the file (from prior runs) so
        # extern decls cover them even when nothing changed this pass.
        for ln in (new_lines if edits else lines):
            for m in re.finditer(r'\b(d[A-Za-z_][A-Za-z_0-9]*)\b', ln):
                sym = m.group(1)
                if sym.startswith('d') and len(sym) > 4 and '_' in sym[1:]:
                    needed_externs.add(sym)

    # Also harvest symbols from every .dl.inc.c file in this fid's subdir, even
    # if it isn't tied to a parseable parent decl (e.g. sub-block includes
    # inside complex pool layouts). This ensures the master .c gets forward
    # externs for every chain-pointer-symbol the inc.c references.
    fid_basename = None
    m = re.search(r'src/relocData/(\d+_[^.]+)\.c', master)
    if m:
        fid_basename = m.group(1).split('_', 1)[1]
    if fid_basename:
        subdir = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', fid_basename)
        if os.path.isdir(subdir):
            for fname in os.listdir(subdir):
                if not fname.endswith('.dl.inc.c'):
                    continue
                with open(os.path.join(subdir, fname)) as f:
                    for ln in f:
                        for m in re.finditer(r'\b(d[A-Za-z_][A-Za-z_0-9]*)\b', ln):
                            sym = m.group(1)
                            if sym.startswith('d') and len(sym) > 4 and '_' in sym[1:]:
                                needed_externs.add(sym)

    extern_added = False
    if needed_externs and not dry_run:
        # Forward-declare every chain-pointer target. Same-file symbols defined
        # later need a forward decl ABOVE any inc.c include that uses them;
        # cross-file targets need a regular extern. C accepts a forward extern
        # before a same-file definition, so emit both.
        extern_added = _add_externs_to_master(master, needed_externs)

    print(f'fid={fid}: {total_edits} chain-ptr substitutions across {processed} DL blocks'
          + (f', {len(needed_externs)} externs needed' if needed_externs else '')
          + (' (extern decls inserted)' if extern_added else '')
          + (' [dry run]' if dry_run else ''))
    return total_edits


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int)
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    symbolize_fid(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
