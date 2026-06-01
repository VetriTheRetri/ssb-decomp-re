#!/usr/bin/python3
"""Shared helper: for each symbol referenced by a `.c` file, ensure an
`extern` declaration is present ABOVE the first non-extern use of that
symbol. If an `extern` line already exists below the first use, MOVE it
to the top (preserving its original type — no guessing). If no extern
line exists at all, derive the type from the symbol's definition (in
this file or in another reloc `.c` file) and synthesize a new one.

This is a library module imported by other tools, not a standalone CLI.
"""
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


# Cache: {sym_name: (extern_line_text or None)} populated lazily by scanning
# all reloc .c files for definitions.
_DEF_TYPE_CACHE = None


def _build_def_type_cache():
    """One-time scan of every reloc .c file's top-level definitions to build
    a {sym: extern_decl_line} map. Used only when a symbol isn't defined or
    externed in the file being processed.
    """
    global _DEF_TYPE_CACHE
    if _DEF_TYPE_CACHE is not None:
        return _DEF_TYPE_CACHE
    cache = {}
    src_dir = os.path.join(PROJECT_DIR, 'src', 'relocData')
    build_dir = os.path.join(PROJECT_DIR, 'build')
    # Scan src/relocData/*.c
    for fname in os.listdir(src_dir):
        if not fname.endswith('.c'): continue
        try:
            with open(os.path.join(src_dir, fname)) as f:
                text = f.read()
        except OSError: continue
        for m in re.finditer(
                r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=\s*\{',
                text, re.MULTILINE):
            type_, stars, sym = m.group(1), m.group(2), m.group(3)
            if type_ == 'extern': continue
            if stars:
                cache.setdefault(sym, f'extern {type_} {stars}{sym}[];')
            else:
                cache.setdefault(sym, f'extern {type_} {sym}[];')
    # Scan build/{us,jp}/src/relocData/*.c (spritelist-generated files)
    for version in ('us', 'jp'):
        bd = os.path.join(build_dir, version, 'src', 'relocData')
        if not os.path.isdir(bd): continue
        for fname in os.listdir(bd):
            if not fname.endswith('.c'): continue
            try:
                with open(os.path.join(bd, fname)) as f:
                    text = f.read()
            except OSError: continue
            for m in re.finditer(
                    r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=\s*\{',
                    text, re.MULTILINE):
                type_, stars, sym = m.group(1), m.group(2), m.group(3)
                if type_ == 'extern': continue
                if stars:
                    cache.setdefault(sym, f'extern {type_} {stars}{sym}[];')
                else:
                    cache.setdefault(sym, f'extern {type_} {sym}[];')
    _DEF_TYPE_CACHE = cache
    return cache


_EXTERN_LINE_RE = re.compile(
    r'^[ \t]*extern\s+\S[^;\n]*?\b([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;[ \t]*\n?',
    re.MULTILINE)

_DEF_RE = re.compile(
    r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=\s*\{',
    re.MULTILINE)


def hoist_or_add_externs(text, needed_syms, insertion_point=None,
                         comment='auto-added by hoistExterns',
                         require_use_in_text=False):
    """Ensure every sym in `needed_syms` has an `extern` decl ABOVE its first
    non-extern use in `text`.

    Returns the (possibly modified) text.

    Algorithm per sym:
      1. Find first non-extern use position `use_pos` (in `text`).
      2. If no use_pos AND `require_use_in_text` is True, skip.
         Otherwise treat use_pos as 0 (assume the sym is used somewhere
         outside `text`, e.g. inside an `.inc.c` that gets `#include`'d).
      3. Find ALL extern decl lines for `sym` anywhere in `text`.
      4. If any extern is ABOVE use_pos and ABOVE insertion_point, no-op.
      5. Otherwise:
         a. If at least one extern exists, hoist its line verbatim to
            `insertion_point` (preserve original type).
         b. If sym is defined in this `text` (no extern, just a definition),
            synthesize `extern <type> <stars><sym>[];` from the definition.
         c. Otherwise, look up `_build_def_type_cache()[sym]` and use that.
         d. If still nothing, fall back to `extern u32 <sym>[];` (4-byte
            aligned; safe for pointer slots).

    `insertion_point`: byte offset where new externs should be inserted.
    Defaults to just after `#include "relocdata_types.h"`.
    """
    if insertion_point is None:
        # Insert AFTER all `#include` lines (any of them, in case the file
        # uses types from sys/objdef.h, sys/interp.h, etc.). Find the last
        # contiguous `#include` block at the top of the file.
        m = re.search(r'#include\s+"relocdata_types\.h"\s*\n', text)
        if m:
            insertion_point = m.end()
            # Advance past additional #include lines that immediately follow
            # (with optional blank lines or comments between).
            while True:
                inc_m = re.match(r'(?:\s*//[^\n]*\n|\s*/\*[^*]*\*/\s*\n|#include\s+\S[^\n]*\n)',
                                 text[insertion_point:])
                if not inc_m: break
                insertion_point += inc_m.end()
        else:
            insertion_point = 0

    # Pre-compute first non-extern use position per symbol. If a sym isn't
    # found in `text` and `require_use_in_text` is False, assume it's
    # referenced from an included .inc.c — treat use_pos as 0 so the extern
    # gets emitted at insertion_point regardless.
    use_pos = {}
    for sym in needed_syms:
        pat = re.compile(rf'\b{re.escape(sym)}\b')
        found = False
        for m in pat.finditer(text):
            line_start = text.rfind('\n', 0, m.start()) + 1
            line_end = text.find('\n', m.start())
            line = text[line_start:line_end] if line_end > 0 else text[line_start:]
            if line.lstrip().startswith('extern '): continue
            use_pos[sym] = m.start()
            found = True
            break
        if not found and not require_use_in_text:
            # Assume the sym is referenced from an included .inc.c file.
            use_pos[sym] = 0

    # Pre-compute existing extern decl positions per symbol
    extern_positions = {}  # sym -> [(start, end, full_line), ...]
    for m in _EXTERN_LINE_RE.finditer(text):
        sym = m.group(1)
        extern_positions.setdefault(sym, []).append((m.start(), m.end(), m.group(0)))

    # Pre-compute definition positions and types
    def_info = {}  # sym -> (type, stars)
    for m in _DEF_RE.finditer(text):
        type_, stars, sym = m.group(1), m.group(2), m.group(3)
        if type_ == 'extern': continue
        def_info.setdefault(sym, (type_, stars))

    cache = _build_def_type_cache()

    # Collect operations:
    #   to_add: lines to insert at insertion_point
    #   to_remove: list of (start, end) ranges to delete from text
    to_add = []
    to_remove = []
    for sym in sorted(needed_syms):
        up = use_pos.get(sym)
        if up is None: continue
        # Are there any externs ABOVE both insertion_point and up?
        externs = extern_positions.get(sym, [])
        # An extern at position p is "effective" if p < up (before use).
        # We also want it ABOVE insertion_point so re-running doesn't move it.
        # If at least one extern has p <= insertion_point and p < up → no-op.
        # Otherwise, hoist (move) the first below-use extern to insertion_point.
        effective = [(s, e, l) for s, e, l in externs if s < up]
        if any(s <= insertion_point for s, e, l in effective):
            continue  # already correctly placed
        if effective:
            # Hoist the first one. (Remove from current location; add to top.)
            s, e, line = effective[0]
            to_remove.append((s, e))
            # Ensure line ends with \n
            ln = line if line.endswith('\n') else line + '\n'
            to_add.append(ln)
            continue
        # No effective extern; check if defined in this file
        if sym in def_info:
            type_, stars = def_info[sym]
            if stars:
                to_add.append(f'extern {type_} {stars}{sym}[];\n')
            else:
                to_add.append(f'extern {type_} {sym}[];\n')
            continue
        # Look up in global cache
        if sym in cache:
            line = cache[sym]
            to_add.append(line + '\n' if not line.endswith('\n') else line)
            continue
        # Fallback
        to_add.append(f'extern u32 {sym}[];\n')

    if not to_add and not to_remove:
        return text

    # Apply removals first (in reverse), then insert at insertion_point.
    # Note that insertion_point may shift after removals if any are above it;
    # adjust insertion_point accordingly.
    to_remove_sorted = sorted(to_remove, reverse=True)
    new_text = text
    adjusted_ins = insertion_point
    for s, e in to_remove_sorted:
        if e <= adjusted_ins:
            adjusted_ins -= (e - s)
        new_text = new_text[:s] + new_text[e:]

    insertion_block = '\n/* Forward decls auto-added/hoisted by hoistExterns.py */\n' + ''.join(to_add)
    new_text = new_text[:adjusted_ins] + insertion_block + new_text[adjusted_ins:]
    return new_text
