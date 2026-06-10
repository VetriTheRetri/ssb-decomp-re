#!/usr/bin/env python3
"""typeAObjEvent32Scripts.py — detect untyped u8 .data.inc.c blocks that
are actually AObjEvent32 scripts and retype them, then cascade the typing
into pointer tables that target them.

Three classes of fix:

  1. `u8 X[N] = { #include <…/X.data.inc.c> };` whose bytes decode as a
     valid AObjEvent32 script (ends with End/SetAnim/Jump) — rewrite as
     `u32 X[N/4] = { aobjEvent32*() … };` inline, drop the .inc.c.

  2. `u32 T[K] = { (u32)X, (u32)Y, … };` where every entry casts a
     symbol now typed as an AObjEvent32 script — retype as
     `AObjEvent32 *T[K] = { (AObjEvent32 *)X, … };`.

  3. `u32 U[K] = { (u32)T, … };` where every entry targets a
     `AObjEvent32 *` table (case 2 above) — retype as `AObjEvent32 **U[K]`.

Iterates classes 2 and 3 to a fixpoint so chains of pointer-table
retypings propagate.

Conservative: only touches blocks the decoder validates end-to-end (no
half-consumed scripts, no invalid opcodes, no payload-count mismatches).
Skips region-guarded `#if`/`#else` decls because the inc.c view doesn't
reflect the per-region split.

Usage:
    tools/typeAObjEvent32Scripts.py <fid> [<fid> …]   # apply
    tools/typeAObjEvent32Scripts.py --all              # apply across corpus
    tools/typeAObjEvent32Scripts.py --dry-run --all    # plan only
"""

import argparse
import glob
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR_US = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")

# AObjEvent32 opcode table — name + payload-word count formula.
# Payload-word count for SetVal* / SetExtVal* opcodes equals popcount(flags).
# Opcode 0 (End) terminates the script, opcode 1 (Jump) takes 1 payload
# word (the target), opcode 2 (Wait) takes none, etc.
OPCODES = {
    0x00: ("End",                       lambda f: 0,    True),  # terminator
    0x01: ("Jump",                      lambda f: 1,    True),  # terminator (takes addr)
    0x02: ("Wait",                      lambda f: 0,    False),
    0x03: ("SetValBlock",               lambda f: bin(f).count('1'), False),
    0x04: ("SetVal",                    lambda f: bin(f).count('1'), False),
    0x05: ("SetValRateBlock",           lambda f: bin(f).count('1'), False),
    0x06: ("SetValRate",                lambda f: bin(f).count('1'), False),
    0x07: ("SetTargetRate",             lambda f: bin(f).count('1'), False),
    0x08: ("SetVal0RateBlock",          lambda f: bin(f).count('1'), False),
    0x09: ("SetVal0Rate",               lambda f: bin(f).count('1'), False),
    0x0A: ("SetValAfterBlock",          lambda f: bin(f).count('1'), False),
    0x0B: ("SetValAfter",               lambda f: bin(f).count('1'), False),
    0x0D: ("SetInterp",                 lambda f: 0,    False),
    0x0E: ("SetAnim",                   lambda f: 0,    True),   # terminator
    0x0F: ("SetFlags",                  lambda f: 0,    False),
    0x12: ("SetExtValAfterBlock",       lambda f: bin(f).count('1'), False),
    0x13: ("SetExtValAfter",            lambda f: bin(f).count('1'), False),
    0x14: ("SetExtValBlock",            lambda f: bin(f).count('1'), False),
    0x15: ("SetExtVal",                 lambda f: bin(f).count('1'), False),
}


def decode_word(w):
    """Return (opcode, flags, payload)."""
    return (w >> 25) & 0x7F, (w >> 15) & 0x3FF, w & 0x7FFF


def try_decode_script(words):
    """Walk `words` as an AObjEvent32 script. Return list of (opcode,
    flags, payload, payload_words) tuples if the script consumes all
    `words` AND ends with a terminator; else None.

    Each tuple's last element is a list of the trailing payload-word
    integers consumed by that opcode."""
    out = []
    i = 0
    saw_terminator = False
    while i < len(words):
        if saw_terminator:
            # Trailing data after a terminator — script is over but
            # block continues. Reject (we don't auto-merge trailing
            # data into the script type).
            return None
        opcode, flags, payload = decode_word(words[i])
        if opcode not in OPCODES:
            return None
        _name, payload_count_fn, is_terminator = OPCODES[opcode]
        n_payload = payload_count_fn(flags)
        if i + 1 + n_payload > len(words):
            return None
        payload_words = words[i + 1 : i + 1 + n_payload]
        out.append((opcode, flags, payload, payload_words))
        i += 1 + n_payload
        if is_terminator:
            saw_terminator = True
    return out if saw_terminator else None


def render_macro(opcode, flags, payload):
    """Render a single opcode word as its `aobjEvent32*()` macro call."""
    name, _, _ = OPCODES[opcode]
    macro = f"aobjEvent32{name}"
    if opcode == 0x00:  # End()
        return f"{macro}()"
    if opcode == 0x01:  # Jump(addr) — payload word emitted separately
        return f"{macro}(0x{payload:X})"
    if opcode == 0x02:  # Wait(frames)
        return f"{macro}({payload})"
    if opcode == 0x0E:  # SetAnim(flags, payload)
        return f"{macro}(0x{flags:X}, 0x{payload:X})"
    if opcode == 0x0F:  # SetFlags(flags, payload)
        return f"{macro}(0x{flags:X}, 0x{payload:X})"
    if opcode == 0x0D:  # SetInterp(kind, flags)
        return f"{macro}(0x{payload:X}, 0x{flags:X})"
    # SetVal*/SetExtVal* family: (flags_mask, dur)
    return f"{macro}(0x{flags:X}, {payload})"


def render_payload_word(w):
    """Render a payload word as `0x???????? /* float comment */`."""
    f = struct.unpack(">f", struct.pack(">I", w))[0]
    # Use repr-ish float; skip Inf/NaN comments
    if f != f or f == float("inf") or f == -float("inf"):
        return f"0x{w:08X},"
    return f"0x{w:08X},  /* {f!r}f */"


def render_script(script, indent="\t"):
    """Render a decoded script as inline body lines (without surrounding braces)."""
    lines = []
    payload_indent = indent + "    "
    for opcode, flags, payload, payload_words in script:
        lines.append(f"{indent}{render_macro(opcode, flags, payload)},")
        for w in payload_words:
            lines.append(f"{payload_indent}{render_payload_word(w)}")
    # Strip the trailing comma from the last entry to keep formatting tidy
    if lines:
        # Last line either ends with `,` or with `/* … */` — find the
        # last comma-terminated emission and leave it (clang-format will
        # canonicalize). Simpler to leave as-is.
        pass
    return lines


# ---------------------------------------------------------------------------
# .c parsing
# ---------------------------------------------------------------------------

DECL_HEAD_RE = re.compile(
    r"^(?P<type>u8|u16|u32|AObjEvent32)\s*(?P<stars>\*{0,2})\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)"
    r"\s*\[\s*(?P<size>[^\]]*)\]\s*=\s*\{"
)

INCLUDE_DATA_RE = re.compile(
    r"#include\s+<(?P<path>[^>]+?)\.data\.inc\.c\s*>"
)

EXTERN_RE = re.compile(
    r"^extern\s+(?P<type>u8|u16|u32|AObjEvent32)\s*(?P<stars>\*{0,2})\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*\[[^\]]*\]\s*;"
)

# `(u32)dSomeName` or `(u32)(dSomeName)` — pointer-cast entry in a u32[]
# pointer table (the second form, with redundant inner parens, appears
# in many auto-generated files). We reject `(u32)((u8 *)dSym + N)`
# because the cast offset means it doesn't point at a clean script
# head.
PTR_CAST_RE = re.compile(
    r"^\(u32\)\(?\s*(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\)?$"
)


class Decl:
    __slots__ = ("name", "ctype", "stars", "size", "head_line", "body_lines",
                 "end_line", "inc_path", "guarded")

    def __init__(self, name, ctype, stars, size, head_line):
        self.name = name
        self.ctype = ctype
        self.stars = stars
        self.size = size
        self.head_line = head_line
        self.body_lines = []  # raw body text (between { and };)
        self.end_line = head_line
        self.inc_path = None
        self.guarded = False  # inside an #if/#else block


def parse_c(path):
    """Return (lines, decls, extern_map) for a relocData .c file.

    decls: ordered list of Decl objects we recognize.
    extern_map: name → ctype (no stars, just bare).
    """
    with open(path) as f:
        lines = f.read().split("\n")
    decls = []
    externs = {}
    i = 0
    if_depth = 0
    while i < len(lines):
        line = lines[i]
        s = line.strip()
        if s.startswith("#if"):
            if_depth += 1
        elif s.startswith("#endif"):
            if_depth = max(0, if_depth - 1)
        # External decl
        em = EXTERN_RE.match(s)
        if em:
            externs[em.group("name")] = (em.group("type"),
                                          em.group("stars") or "")
            i += 1
            continue
        # Body decl
        dm = DECL_HEAD_RE.match(s)
        if dm:
            try:
                size = int(dm.group("size"), 0)
            except (ValueError, TypeError):
                size = 0
            decl = Decl(
                name=dm.group("name"),
                ctype=dm.group("type"),
                stars=dm.group("stars") or "",
                size=size,
                head_line=i,
            )
            decl.guarded = if_depth > 0
            # Single-line form: `T NAME[N] = { … };` all on one line.
            # The body lives between the opening `{` and the closing `}`
            # on the head line itself.
            head_after_brace = s.split("{", 1)[1] if "{" in s else ""
            single_line_close = head_after_brace.rstrip().endswith("};")
            if single_line_close:
                inner = head_after_brace.rstrip()
                # strip trailing "};"
                inner = inner[:-2].rstrip()
                # Each comma-separated entry becomes a body line
                for entry in inner.split(","):
                    entry = entry.strip()
                    if entry:
                        decl.body_lines.append("\t" + entry + ",")
                decl.end_line = i
                decls.append(decl)
                i += 1
                continue
            # Multi-line form: collect body until matching `};`.
            depth = 1  # opened by `{` on head line
            j = i + 1
            while j < len(lines) and depth > 0:
                bs = lines[j].strip()
                if bs == "};":
                    depth -= 1
                    if depth == 0:
                        decl.end_line = j
                        j += 1
                        break
                else:
                    decl.body_lines.append(lines[j])
                    # Detect `#include <…/X.data.inc.c>`
                    im = INCLUDE_DATA_RE.search(bs)
                    if im:
                        decl.inc_path = im.group("path")
                j += 1
            decls.append(decl)
            i = j
            continue
        i += 1
    return lines, decls, externs


def find_inc_bytes(inc_path):
    """Read raw bytes from build/us/src/relocData/<inc_path>.data.inc.c.

    The file contains hex-comma text like `0x12, 0x34, …`."""
    full = os.path.join(BUILD_DIR_US, inc_path + ".data.inc.c")
    if not os.path.isfile(full):
        return None
    with open(full) as f:
        text = f.read()
    hex_pairs = re.findall(r"0x([0-9A-Fa-f]{2})", text)
    if not hex_pairs:
        return b""
    return bytes(int(h, 16) for h in hex_pairs)


def bytes_to_u32_be(b):
    """Convert bytes to a list of u32 big-endian. Returns None if length
    isn't a multiple of 4."""
    if len(b) % 4 != 0:
        return None
    return [struct.unpack_from(">I", b, i)[0] for i in range(0, len(b), 4)]


# ---------------------------------------------------------------------------
# Pointer-table classification
# ---------------------------------------------------------------------------

def classify_u32_pointer_table(decl):
    """For a u32[N] decl whose body is a list of `(u32)dSym,` entries,
    return [target_name or None for each entry]. Returns None if any
    entry isn't a bare pointer cast or NULL.

    Tolerates trailing comments and blank lines. `aobjEvent32End()` is
    treated as a NULL terminator (= 0x00000000) so the common
    `{ (u32)script, …, aobjEvent32End() }` pointer-table-with-terminator
    pattern still classifies as a pointer table.

    Rejects bodies that hold ANY `aobjEvent32` opcode macro other than
    `End()`/`Wait(0)`/etc. — those are real scripts, not pointer tables."""
    if decl.ctype != "u32" or decl.stars or decl.inc_path is not None:
        return None
    targets = []
    has_ptr_cast = False
    for raw in decl.body_lines:
        s = raw.strip().rstrip(",").strip()
        if not s or s.startswith("/*") or s.startswith("//"):
            continue
        if s == "NULL" or s == "0" or s == "(u32)0" or s == "(u32)NULL":
            targets.append(None)
            continue
        if s in ("aobjEvent32End()", "aobjEvent32End ()"):
            # NULL terminator written as End macro
            targets.append(None)
            continue
        m = PTR_CAST_RE.match(s)
        if m:
            targets.append(m.group("sym"))
            has_ptr_cast = True
            continue
        # Any other content — e.g. `aobjEvent32SetExtValAfterBlock(…)`,
        # `0x12345678`, a payload word — disqualifies this as a pointer
        # table.
        return None
    if not targets or not has_ptr_cast:
        return None
    return targets


# ---------------------------------------------------------------------------
# Main pass
# ---------------------------------------------------------------------------

def process_file(path, dry_run=False):
    """Returns (n_scripts_retyped, n_ptr_tables_retyped, n_ptrptr_retyped)."""
    lines, decls, externs = parse_c(path)
    by_name = {d.name: d for d in decls}

    # First pass: identify u8 data.inc.c blocks that decode as AObjEvent32 scripts.
    script_decls = {}  # name → decoded script (list of (opcode,flags,payload,payloads))
    for d in decls:
        if d.guarded or d.stars or d.ctype != "u8" or d.inc_path is None:
            continue
        if d.size <= 0 or d.size % 4 != 0:
            continue
        b = find_inc_bytes(d.inc_path)
        if b is None or len(b) != d.size:
            continue
        words = bytes_to_u32_be(b)
        if words is None:
            continue
        decoded = try_decode_script(words)
        if decoded is None:
            continue
        # Heuristic: skip degenerate `End()`-only blocks ≤ 4 bytes — they
        # are almost always padding or terminator markers that another
        # decl absorbs, not standalone scripts.
        if d.size == 4 and len(decoded) == 1 and decoded[0][0] == 0x00:
            continue
        script_decls[d.name] = decoded

    if not script_decls:
        # No script-shaped u8 blocks; nothing to cascade.
        return (0, 0, 0)

    # Second pass: identify u32[N] pointer tables whose every target is
    # NULL or a now-typed AObjEvent32 script. Repeat for AObjEvent32*
    # tables.
    aobj_scripts = set(script_decls.keys())
    # Also include any pre-existing extern AObjEvent32 (no stars) decls
    for n, (ctype, stars) in externs.items():
        if ctype == "AObjEvent32" and not stars:
            aobj_scripts.add(n)
    # And pre-existing `u32 NAME[N] = { aobjEvent32*…(), … }` inline
    # scripts (already typed correctly modulo the `u32` shell). Exclude
    # u32 decls that would classify as POINTER TABLES (those have at
    # least one `(u32)dSym` cast and only End()/NULL terminators).
    for d in decls:
        if d.guarded or d.stars or d.ctype != "u32" or d.inc_path is not None:
            continue
        if classify_u32_pointer_table(d) is not None:
            continue
        body_text = "\n".join(d.body_lines)
        if "aobjEvent32" in body_text:
            aobj_scripts.add(d.name)

    aobj_ptr_tables = set()
    for n, (ctype, stars) in externs.items():
        if ctype == "AObjEvent32" and stars == "*":
            aobj_ptr_tables.add(n)

    ptr_retypes = {}    # name → "AObjEvent32 *" (single-pointer table)
    ptrptr_retypes = {} # name → "AObjEvent32 **" (pointer-to-pointer)

    changed = True
    while changed:
        changed = False
        for d in decls:
            if d.name in ptr_retypes or d.name in ptrptr_retypes:
                continue
            if d.guarded:
                continue
            targets = classify_u32_pointer_table(d)
            if targets is None:
                continue
            non_null = [t for t in targets if t is not None]
            if not non_null:
                continue
            if all(t in aobj_scripts for t in non_null):
                ptr_retypes[d.name] = "AObjEvent32 *"
                aobj_ptr_tables.add(d.name)
                changed = True
            elif all(t in aobj_ptr_tables for t in non_null):
                ptrptr_retypes[d.name] = "AObjEvent32 **"
                changed = True

    if not script_decls and not ptr_retypes and not ptrptr_retypes:
        return (0, 0, 0)

    # Now build replacement lines.
    if dry_run:
        return (len(script_decls), len(ptr_retypes), len(ptrptr_retypes))

    # Apply rewrites bottom-up so line indices stay valid.
    decls_sorted = sorted(decls, key=lambda d: -d.head_line)
    for d in decls_sorted:
        if d.name in script_decls:
            decoded = script_decls[d.name]
            new_head = (
                f"u32 {d.name}[{d.size // 4}] = {{"
            )
            body = render_script(decoded, indent="\t")
            new_block = [new_head] + body + ["};"]
            lines[d.head_line : d.end_line + 1] = new_block
        elif d.name in ptr_retypes:
            # Retype the entire decl span (head + body) — single-line
            # decls have body on the head line; multi-line decls have
            # body on intermediate lines. Either way, rewrite the leading
            # `u32 ` and any `(u32)dSymName` casts in the span, and
            # replace bare `aobjEvent32End()` terminator macros with NULL
            # (the macro form was a decode false positive on what is
            # really a pointer table's NULL terminator).
            for k in range(d.head_line, d.end_line + 1):
                if k == d.head_line:
                    # `u32 NAME` → `AObjEvent32 *NAME` (no space after *).
                    lines[k] = re.sub(
                        r"^u32\s+", "AObjEvent32 *", lines[k], count=1)
                lines[k] = re.sub(
                    r"\(u32\)\(?\s*(d[A-Za-z_][A-Za-z_0-9]*)\s*\)?",
                    r"(AObjEvent32 *)\1",
                    lines[k],
                )
                lines[k] = re.sub(
                    r"\baobjEvent32End\(\)",
                    "NULL",
                    lines[k],
                )
        elif d.name in ptrptr_retypes:
            for k in range(d.head_line, d.end_line + 1):
                if k == d.head_line:
                    lines[k] = re.sub(
                        r"^u32\s+", "AObjEvent32 **", lines[k], count=1)
                lines[k] = re.sub(
                    r"\(u32\)\(?\s*(d[A-Za-z_][A-Za-z_0-9]*)\s*\)?",
                    r"(AObjEvent32 **)\1",
                    lines[k],
                )
                lines[k] = re.sub(
                    r"\baobjEvent32End\(\)",
                    "NULL",
                    lines[k],
                )

    # Also update extern decls in this file to match the new types.
    # For retyped scripts we keep `extern u32` (matches the decl `u32 X[N]`
    # with inline `aobjEvent32*()` macros — the macros return u32).
    for k, line in enumerate(lines):
        em = EXTERN_RE.match(line.strip())
        if not em:
            continue
        name = em.group("name")
        if name in script_decls:
            lines[k] = re.sub(
                r"^extern\s+u8(\s+)",
                r"extern u32\1",
                line,
                count=1,
            )
        elif name in ptr_retypes:
            lines[k] = re.sub(
                r"^extern\s+u32(\s+)",
                r"extern AObjEvent32 *\1",
                line,
                count=1,
            )
        elif name in ptrptr_retypes:
            lines[k] = re.sub(
                r"^extern\s+u32(\s+)",
                r"extern AObjEvent32 **\1",
                line,
                count=1,
            )

    with open(path, "w") as f:
        f.write("\n".join(lines))
    return (len(script_decls), len(ptr_retypes), len(ptrptr_retypes))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", help="numeric fid(s) or .c paths")
    ap.add_argument("--all", action="store_true",
                    help="process every src/relocData/*.c file")
    ap.add_argument("--dry-run", action="store_true",
                    help="show counts without modifying files")
    args = ap.parse_args()

    if args.all and args.fids:
        ap.error("either --all or explicit fids, not both")

    if args.all:
        targets = sorted(glob.glob(os.path.join(RELOC_DIR, "*.c")))
    else:
        targets = []
        for arg in args.fids:
            if arg.endswith(".c"):
                targets.append(arg)
            else:
                hits = glob.glob(os.path.join(RELOC_DIR, f"{arg}_*.c"))
                targets.extend(h for h in hits if not h.endswith(".jp.c"))

    total_scripts = total_ptr = total_ptrptr = 0
    touched_files = 0
    for path in targets:
        n_s, n_p, n_pp = process_file(path, dry_run=args.dry_run)
        if n_s or n_p or n_pp:
            rel = os.path.relpath(path, PROJECT_DIR)
            print(f"{rel}: {n_s} script(s) typed, {n_p} ptr-table(s), "
                  f"{n_pp} ptr-to-ptr-table(s)")
            touched_files += 1
            total_scripts += n_s
            total_ptr += n_p
            total_ptrptr += n_pp

    label = "Would touch" if args.dry_run else "Touched"
    print(f"\n{label} {touched_files} file(s): "
          f"{total_scripts} script(s), {total_ptr} ptr-table(s), "
          f"{total_ptrptr} ptr-to-ptr-table(s)")


if __name__ == "__main__":
    main()
