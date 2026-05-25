#!/usr/bin/env python3
"""
Validate a relocData C source file (and its companion .reloc) for common
typing problems. Pure source-level — no built objects required.

Reports any of:

  R001  AObjEvent32 script doesn't end in End()/SetAnim()/Jump()
  R002  AObjEvent32 script contains more than one aobjEvent32End()
  R003  Reloc chain pointer slot held as raw hex (0xXXXXYYYY literal)
  R004  Reloc chain target uses blockname+offset / &blockname[N] /
        ((u8*)blockname + 0xN) instead of a bare block symbol
  R005  Untyped block body holds inline raw-hex literals instead of an
        `#include <... .data.inc.c>`
  R006  `*_palette_*` block isn't u16[16]+PAD(8) or u16[20]
  R007  Include file extension disagrees with the C type
        (.vtx.inc.c <-> Vtx, .dl.inc.c <-> Gfx, .palette.inc.c <-> u16,
         .tex/.i4/.ci4/.ia8/.rgba16/.rgba32 <-> u8)
  R008  .reloc references a symbol not declared or externed in the .c
  R009  Reloc chain pointer lands inside an untyped `.data.inc.c` blob —
        the block needs to be typed (or split) so the pointer slot has
        its own symbol
  R010  Untyped `.data.inc.c` blob (u8/u16/u32) — tracked so untyped
        sections stay visible until properly typed
  R011  DObjDesc / DObjDLLink array missing its terminating sentinel
        entry (DObjDesc: { 18, ... }; DObjDLLink: { 4, ... })
  R012  MObjSub.sprites or .palettes points at a `void *[]` array whose
        entries are mistyped (sprites should hold u8 texture blocks,
        palettes should hold u16 palette blocks)

Usage:
    tools/validateRelocFile.py <fid_or_path> [<fid_or_path> ...]
                               [--rules R001,R002,...]
                               [--skip-rules R005]
                               [--quiet]

The path form accepts either a numeric fid (resolved against
src/relocData/<fid>_*.c) or an explicit .c path. Exits non-zero if any
issue is reported (errors and warnings both count).
"""

import argparse
import os
import re
import sys
from collections import Counter, defaultdict

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


# ---------------------------------------------------------------------------
# Parsing
# ---------------------------------------------------------------------------

# Top-level decl head: `TYPE [*] NAME[N] = {`. The type may include
# leading `static`/`const`, trailing `*`s, etc. We capture the type
# without trailing whitespace, the name (`d…`), and the array size.
_DECL_HEAD_RE = re.compile(
    r"^\s*(?P<type>(?:static\s+|const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*)\b"
    r"(?P<stars>(?:\s*\*+)?)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[(?P<size>[^\]]*)\])?\s*=\s*\{"
)

# Same shape but allows the body-opening `{` to live on a later line:
# `TYPE NAME[N] =` ↵ `{` ↵ `…`. Used as a fallback when the one-liner
# form doesn't match.
_DECL_HEAD_SPLIT_RE = re.compile(
    r"^\s*(?P<type>(?:static\s+|const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*)\b"
    r"(?P<stars>(?:\s*\*+)?)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[(?P<size>[^\]]*)\])?\s*=\s*$"
)

_EXTERN_DECL_RE = re.compile(
    r"^\s*extern\s+(?P<type>(?:const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*)\b"
    r"(?P<stars>(?:\s*\*+)?)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[(?P<size>[^\]]*)\])?\s*;"
)

_PAD_RE = re.compile(r"^\s*PAD\s*\(\s*(?P<n>\d+)\s*\)\s*;")

_INCLUDE_RE = re.compile(
    r"#include\s+<[^>]*?(?P<ext>\.[a-z0-9]+\.inc\.c)\s*>"
)


class Decl:
    __slots__ = (
        "name", "ctype", "is_pointer", "size",
        "start_line", "end_line", "body", "includes",
    )

    def __init__(self, name, ctype, is_pointer, size, start_line):
        self.name = name
        self.ctype = ctype.replace(" ", "")
        self.is_pointer = is_pointer
        self.size = size
        self.start_line = start_line
        self.end_line = None
        self.body = []           # list of (line_no, stripped_text)
        self.includes = []       # list of (line_no, ext, raw_line)

    def macro_lines(self):
        """Return [(line_no, text)] for body lines holding an aobjEvent32 macro
        call (not the substring inside a comment)."""
        out = []
        for ln, txt in self.body:
            if _strip_comments(txt).find("aobjEvent32") != -1:
                out.append((ln, txt))
        return out

    def has_include(self):
        return bool(self.includes)


def _collapse_split_array_sizes(lines):
    """Collapse multi-line array-size declarations that use
    `#if defined(REGION_JP)` to pick a US/JP size:

        u8 dXxx_Tex[
        #if defined(REGION_JP)
            520
        #else
            1592
        #endif
        ] = { … };

    becomes the equivalent single-line head while preserving overall
    line count by leaving the original lines untouched and only patching
    the line that holds the unclosed `[` with the resolved size. The
    closer line gets the trailing `] = ...` retained so any following
    `{` body works the same. Other lines in the multi-line size block
    become harmless `// ` no-op markers.
    """
    out = list(lines)
    i = 0
    n = len(out)
    head_pat = re.compile(
        r"^(?P<head>\s*[A-Za-z_][A-Za-z_0-9]*(?:\s*\*+)?\s*"
        r"d[A-Za-z_][A-Za-z_0-9]*)\s*\[\s*$"
    )
    while i < n:
        m = head_pat.match(out[i])
        if not m:
            i += 1
            continue
        # Walk forward looking for `]` start-of-line, collecting candidate
        # sizes from non-preprocessor body lines.
        sizes = []
        j = i + 1
        in_else = False
        found_close = False
        while j < n:
            s = out[j].strip()
            if s == "":
                j += 1
                continue
            if s.startswith("#"):
                if s.startswith("#else"):
                    in_else = True
                j += 1
                continue
            if s.startswith("]"):
                # Splice: replace the head line with `<head>[<US_size>]<closing>`
                # picking the US (#else) size when present.
                if sizes:
                    chosen = sizes[-1] if in_else else sizes[0]
                else:
                    chosen = ""
                out[i] = f"{m.group('head')}[{chosen}{s}"
                # Clear the intermediate lines so they don't trigger
                # decl-head false matches downstream.
                for k in range(i + 1, j + 1):
                    out[k] = ""
                found_close = True
                j += 1
                break
            # Strip trailing comma if present (numeric size).
            sizes.append(s.rstrip(","))
            j += 1
        if not found_close:
            j = i + 1
        i = j
    return out


def parse_c(path):
    """Parse a relocData .c file. Returns (decls, externs, all_lines)."""
    text = path_read(path)
    raw_lines = text.split("\n")
    lines = _collapse_split_array_sizes(raw_lines)
    decls = []
    externs = {}  # name -> ctype
    i = 0
    while i < len(lines):
        line = lines[i]
        em = _EXTERN_DECL_RE.match(line)
        if em:
            externs[em.group("name")] = em.group("type").strip()
            i += 1
            continue
        dm = _DECL_HEAD_RE.match(line)
        body_starts_on_same_line = bool(dm)
        if not dm:
            sm = _DECL_HEAD_SPLIT_RE.match(line)
            # Split form: next non-blank, non-comment line must be `{`.
            if sm:
                k = i + 1
                while k < len(lines):
                    s = lines[k].strip()
                    if s == "":
                        k += 1
                        continue
                    if s.startswith("/*") or s.startswith("//"):
                        k += 1
                        continue
                    break
                if k < len(lines) and lines[k].strip() == "{":
                    dm = sm
                    # Pretend the `{` was on the head line by jumping the
                    # walk start past it.
                    i_advance_extra = (k - i)
                else:
                    dm = None
                    i_advance_extra = 0
            else:
                i_advance_extra = 0
        else:
            i_advance_extra = 0
        if dm:
            size_grp = dm.group("size") or ""
            try:
                size = int(size_grp, 0) if size_grp.strip() else 0
            except ValueError:
                size = 0
            decl = Decl(
                name=dm.group("name"),
                ctype=dm.group("type"),
                is_pointer=bool(dm.group("stars") and "*" in dm.group("stars")),
                size=size,
                start_line=i + 1,
            )
            # Walk forward to the closing `};` at the start of a line.
            # Brace-counting is unreliable here because relocData files
            # use #if defined(REGION_JP) blocks with conditional decl
            # heads — `};` at start-of-line is the project's actual
            # close-of-decl marker. If another decl head appears before
            # we see the close, abort the current decl: the previous
            # head was a conditional sibling.
            j = i + 1 + i_advance_extra
            tail = line[dm.end():] if body_starts_on_same_line else ""
            # One-line decl: the rest of the head line ends with `};`
            # (e.g. `T NAME = { ... };` or `T NAME[N] = { ... } };`).
            if body_starts_on_same_line and tail.rstrip().endswith("};"):
                # `T NAME[N] = { … };` all on one line.
                decl.end_line = i + 1
                inc = _INCLUDE_RE.search(line)
                if inc:
                    decl.includes.append((i + 1, inc.group("ext"), line.rstrip()))
                decls.append(decl)
                i += 1
                continue
            while j < len(lines):
                body_line = lines[j]
                if re.match(r"^\s*\}+;\s*$", body_line):
                    decl.end_line = j + 1
                    j += 1
                    break
                if _DECL_HEAD_RE.match(body_line):
                    # Encountered next decl head before a close — likely
                    # the previous head was guarded by #if and the
                    # current one is the live decl. Bail without
                    # appending the previous one.
                    decl = None
                    break
                stripped = body_line.strip()
                if stripped and not stripped.startswith("#"):
                    decl.body.append((j + 1, body_line.rstrip()))
                inc = _INCLUDE_RE.search(body_line)
                if inc:
                    decl.includes.append((j + 1, inc.group("ext"), body_line.rstrip()))
                j += 1
            if decl is not None:
                decls.append(decl)
            i = j
            continue
        i += 1
    return decls, externs, lines


_EXTERN_FID_RE = re.compile(
    r"#\s*->\s*file\s+(?P<fid>\d+)(?:\s*\((?P<name>[^)]+)\))?"
)


def parse_reloc(path):
    """Yield (line_no, kind, ptr_label, target_label, comment) for each
    entry. `comment` is the trailing `# -> file NNN (Name)` annotation
    string if present, else None."""
    out = []
    if not os.path.exists(path):
        return out
    with open(path) as f:
        for line_no, raw in enumerate(f, 1):
            line = raw.rstrip("\n")
            stripped = line.strip()
            if not stripped or stripped.startswith("#"):
                continue
            # Split off any trailing `#` comment.
            comment = None
            if "#" in line:
                head, _, comment_text = line.partition("#")
                comment = "#" + comment_text
                line = head
            parts = line.split()
            if len(parts) != 3:
                continue
            kind, ptr_label, target_label = parts
            if kind not in ("intern", "extern"):
                continue
            out.append((line_no, kind, ptr_label, target_label, comment))
    return out


def path_read(p):
    with open(p) as f:
        return f.read()


# ---------------------------------------------------------------------------
# Diagnostics
# ---------------------------------------------------------------------------


class Diag:
    __slots__ = ("path", "line", "rule", "severity", "msg", "info")

    def __init__(self, path, line, rule, severity, msg, info=None):
        self.path = path
        self.line = line
        self.rule = rule
        self.severity = severity  # 'error' or 'warn'
        self.msg = msg
        # Optional structured payload used by aggregators (e.g.
        # --by-parent groups R009 by `parent` and `offset`).
        self.info = info or {}

    def fmt(self):
        rel = os.path.relpath(self.path, PROJECT_DIR)
        return f"{rel}:{self.line}: [{self.rule} {self.severity}] {self.msg}"


# ---------------------------------------------------------------------------
# AObjEvent32 helpers
# ---------------------------------------------------------------------------

# Macro names that terminate (or branch out of) a script. SetAnim and Jump
# read 1 follow-up payload word as the next-script pointer, so the actual
# last token in the script may be a `(u32)dXxx` reference rather than the
# macro itself.
_AOBJ_TERMINATORS = (
    "aobjEvent32End()",
    "aobjEvent32EndRaw",
    "aobjEvent32SetAnim",
    "aobjEvent32Jump",
    "aobjEvent32JumpCmd",
    "aobjEvent32JumpRaw",
)

_AOBJ_END_RE = re.compile(r"\baobjEvent32(End\b|EndRaw\b)")


_BLOCK_COMMENT_RE = re.compile(r"/\*.*?\*/")
_LINE_COMMENT_RE = re.compile(r"//.*$")


def _strip_comments(text):
    """Strip C `/* */` and `//` comments from a single line."""
    return _LINE_COMMENT_RE.sub("", _BLOCK_COMMENT_RE.sub("", text))


def is_aobjevent32_script(decl):
    """Heuristic: a u32 array whose FIRST meaningful entry is an
    aobjEvent32 macro call. A real decoded script always starts with an
    opcode macro; a lone stray End() amid a raw-hex dump (a decode
    false-positive on a 0x00000000 word) does NOT make the block a
    script — checking only the first entry avoids that escape hatch."""
    if decl.ctype != "u32" or decl.is_pointer:
        return False
    for _, txt in decl.body:
        s = _strip_comments(txt).strip()
        if not s or s == "};":
            continue
        return "aobjEvent32" in s
    return False


def last_aobjevent32_macro(decl):
    """Return the last body line that holds an aobjEvent32 macro, or None."""
    macros = decl.macro_lines()
    return macros[-1] if macros else None


# ---------------------------------------------------------------------------
# Chain-pointer-in-source heuristics
# ---------------------------------------------------------------------------

# A pointer slot in a `Foo *X[N]` decl appears as one of:
#   NULL,
#   (Foo *)dXxx,
#   (Foo *)&dXxx[N],
#   (Foo *)((u8 *)dXxx + 0xN),
#   (u16 *)dXxx_palette_0x...,
# A raw chain encoding looks like a bare `0xXXXXYYYY,` literal — never
# valid in C source for any reloc'd slot.
_RAW_HEX_LITERAL_RE = re.compile(
    r"^\s*0x[0-9A-Fa-f]{7,8}\s*,?\s*(?:/\*.*\*/)?\s*$"
)

# Match `(...)blockname+0xN`, `(...)&blockname[N]` or
# `(...)((u8*)blockname + 0xN)` — flag for R004.
_OFFSET_REF_RE = re.compile(
    r"\(\s*\(\s*u8\s*\*\)\s*&?\s*"
    r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\)"
)
_INDEX_REF_RE = re.compile(
    r"&\s*(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\[\s*0?x?[0-9A-Fa-f]+\s*\]"
)

# `0x[0-9A-Fa-f]+,` payload inside an aobjEvent32 script *and* the only
# decoded content the line carries — used to spot the SetAnim/Jump
# loopback word being raw hex.
_AOBJ_PAYLOAD_HEX_RE = re.compile(
    r"^\s*(?:\(u32\)\s*)?0x[0-9A-Fa-f]{8}\s*,"
)


# Decl types that hold reloc'd chain pointer slots (every element is a
# pointer that's expected to land in the chain). The list is conservative;
# add more as the corpus expands.
_POINTER_ARRAY_CTYPES = {
    "u8", "u16", "u32", "void", "Gfx", "Vtx",
    "AObjEvent32", "DObjDesc", "DObjDLLink", "MObjSub",
}


def is_pointer_array(decl):
    return decl.is_pointer and decl.ctype in _POINTER_ARRAY_CTYPES


# ---------------------------------------------------------------------------
# Rules
# ---------------------------------------------------------------------------


def check_aobjevent32_termination(decl, path, diags):
    """R001 + R002 — AObjEvent32 script terminator + at-most-one End()."""
    if not is_aobjevent32_script(decl):
        return
    macros = decl.macro_lines()
    if not macros:
        return

    # R002: count End / EndRaw macros — there must be ≤1. Report once
    # per decl so a giant unsplit blob doesn't flood the output.
    end_lines = [ln for ln, txt in macros if _AOBJ_END_RE.search(txt)]
    if len(end_lines) > 1:
        first, second = end_lines[0], end_lines[1]
        extra = "" if len(end_lines) == 2 else f" (+{len(end_lines) - 2} more)"
        diags.append(Diag(
            path, second, "R002", "error",
            f"AObjEvent32 script '{decl.name}' has "
            f"{len(end_lines)} aobjEvent32End() calls"
            f"{extra} — first is at L{first}; split after the first or "
            f"fix mistyped boundary"
        ))

    # R001: last macro must be End / EndRaw / SetAnim / Jump.
    last_ln, last_txt = macros[-1]
    if not any(t.rstrip("()") in last_txt for t in _AOBJ_TERMINATORS):
        # Allow loopback pointer after SetAnim/Jump — the last *macro* is
        # one of those, but the actual last body line is the (u32) payload
        # word. Re-scan macros list to confirm.
        if not any(
            "aobjEvent32SetAnim" in t or "aobjEvent32Jump" in t
            for _, t in macros[-2:]
        ):
            diags.append(Diag(
                path, last_ln, "R001", "error",
                f"AObjEvent32 script '{decl.name}' doesn't end in "
                f"aobjEvent32End() / SetAnim() / Jump() — last macro: "
                f"'{last_txt.strip()}'"
            ))


def check_chain_pointer_raw_hex(decl, path, diags):
    """R003 — Raw 0xXXXXYYYY literal in a pointer-array slot, an
    aobjEvent32 macro in a pointer-array slot (NULL slots get
    mistakenly decoded as `aobjEvent32End()`), or as the payload word
    after aobjEvent32SetAnim/Jump."""
    if is_pointer_array(decl):
        for ln, txt in decl.body:
            if _RAW_HEX_LITERAL_RE.match(txt):
                diags.append(Diag(
                    path, ln, "R003", "error",
                    f"chain pointer slot in '{decl.name}' is raw hex "
                    f"({txt.strip().rstrip(',')}) — replace with a typed "
                    f"pointer expression (e.g. `(u16 *)dXxx_palette_0xN` "
                    f"or NULL); fixRelocChain.py rewrites the slot"
                ))
                continue
            # `aobjEvent32End()` in a pointer-array slot is a NULL slot
            # that decodeAObjEvent32 wrongly typed as an End opcode.
            # Other aobjEvent32 macros are similarly bad — pointer
            # arrays hold pointers, not script opcodes.
            stripped = _strip_comments(txt).strip().rstrip(",").rstrip()
            if re.match(r"^aobjEvent32\w+\s*\(", stripped):
                diags.append(Diag(
                    path, ln, "R003", "error",
                    f"pointer-array slot in '{decl.name}' contains an "
                    f"aobjEvent32 macro ({stripped}) — these are typed "
                    f"pointers; NULL slots should be `NULL`, not "
                    f"`aobjEvent32End()` (decode false positive)"
                ))
        return

    if is_aobjevent32_script(decl):
        # Find payload words following SetAnim or Jump that are raw hex
        # rather than `(u32)dXxx` expressions. Walk macro positions and
        # look at the immediately-following body line(s).
        body_by_idx = decl.body  # already in source order
        for idx, (ln, txt) in enumerate(body_by_idx):
            is_setanim = "aobjEvent32SetAnim(" in txt
            is_jump = ("aobjEvent32Jump(" in txt
                       or "aobjEvent32JumpCmd(" in txt
                       or "aobjEvent32JumpRaw(" in txt)
            if not (is_setanim or is_jump):
                continue
            if idx + 1 >= len(body_by_idx):
                continue
            nxt_ln, nxt_txt = body_by_idx[idx + 1]
            if _AOBJ_PAYLOAD_HEX_RE.match(nxt_txt) and "(u32)d" not in nxt_txt:
                kind = "SetAnim" if is_setanim else "Jump"
                diags.append(Diag(
                    path, nxt_ln, "R003", "error",
                    f"aobjEvent32{kind} loopback in '{decl.name}' is raw "
                    f"hex ({nxt_txt.strip().rstrip(',')}) — write the "
                    f"target as `(u32)dXxx_script_label` so the chain "
                    f"target is symbolic"
                ))


def check_chain_pointer_target_form(decl, path, diags, script_syms):
    """R004 (C-source half) — `((u8*)blockname + 0xN)` byte-offset
    arithmetic and `&blockname[N]` indexing in pointer slots.

    `((u8*)sym + 0xN)` is flagged in ANY decl body — DObjDesc[] and
    similar struct arrays carry pointer fields (`dl`, etc.) that obey
    the same chain-pointer rules as bare pointer-array slots. The
    `(u8*)` cast is the smoking gun: it always indicates byte-address
    arithmetic into a parent, which silently breaks when the parent is
    split or retyped. Replace with the matching block symbol, or split
    the parent if no symbol exists at that offset.

    Pointer arrays are NOT exempted: byte-offset arithmetic into a
    pointer array often indicates the array is actually several
    distinct sub-arrays masquerading as one, which the user should
    split into separate symbols.

    `&sym[N]` is only flagged inside pointer arrays — for typed struct
    arrays, `&typed_arr[N]` at an element boundary is a legitimate
    way to point at a specific element.

    Skip refs whose target is a known AObjEvent32 script — mid-script
    entry points are legitimate (the runtime walks opcodes from any
    starting offset until it hits End)."""
    is_ptr_arr = is_pointer_array(decl)
    for ln, txt in decl.body:
        if "NULL" in txt:
            continue
        m = _OFFSET_REF_RE.search(txt)
        if m and m.group("sym") not in script_syms:
            diags.append(Diag(
                path, ln, "R004", "warn",
                f"'{decl.name}' slot uses `((u8*){m.group('sym')} + "
                f"0x{m.group('off')})` byte-offset arithmetic — replace "
                f"with the matching block symbol (or split the parent "
                f"if no symbol exists at that offset)"
            ))
            continue
        if not is_ptr_arr:
            continue
        m = _INDEX_REF_RE.search(txt)
        if m:
            if m.group("sym") in script_syms:
                continue
            diags.append(Diag(
                path, ln, "R004", "warn",
                f"'{decl.name}' slot uses `&{m.group('sym')}[…]` form — "
                f"split the parent so the pointer can use a bare block "
                f"symbol"
            ))


def check_raw_hex_chunks(decl, path, diags, lines):
    """R005 — Untyped u8/u16/u32 body listing raw hex literals inline
    instead of using `#include <… .data.inc.c>`. Only fires on blocks
    that hold at least 2 elements — a lone u32[1] packed-param word is
    fine as-is. Also skips
    blocks whose body has `#if`/`#else`/`#endif` preprocessor blocks
    — those are intentionally region-tweaked inline files."""
    if decl.is_pointer:
        return
    if decl.ctype not in ("u8", "u16", "u32"):
        return
    if is_aobjevent32_script(decl):
        return
    if decl.has_include():
        return
    # Check raw source lines (including stripped `#` lines) for
    # preprocessor block markers — body member list excludes them.
    for k in range(decl.start_line, decl.end_line):
        raw = lines[k] if k < len(lines) else ""
        if raw.lstrip().startswith("#"):
            return
    # If every meaningful body line is a hex literal (or terminator), the
    # block is an inline raw-hex dump. `(u32)0xNNNN,` is a decode
    # artifact (Jump-payload form) — count as hex too.
    _ARTIFACT_HEX_RE = re.compile(
        r"^\s*\(u32\)\s*0x[0-9A-Fa-f]+\s*,?\s*(?:/\*.*\*/)?\s*$"
    )
    has_hex = False
    has_other = False
    hex_count = 0
    for ln, txt in decl.body:
        stripped = txt.strip()
        if not stripped or stripped == "};":
            continue
        if _RAW_HEX_LITERAL_RE.match(txt) or _ARTIFACT_HEX_RE.match(txt):
            has_hex = True
            hex_count += 1
        else:
            has_other = True
            break
    if has_hex and not has_other and hex_count >= 2:
        diags.append(Diag(
            path, decl.start_line, "R005", "warn",
            f"'{decl.name}' ({decl.ctype}[{decl.size}]) is an inline "
            f"raw-hex dump ({hex_count} entries) — use "
            f"`#include <…/{decl.name}.data.inc.c>` (or properly type "
            f"the block) until it can be typed"
        ))


def check_untyped_data_blob(decl, path, diags):
    """R010 — a u8/u16/u32 block backed by a raw `.data.inc.c` include.
    The extractor couldn't classify it; tracked so untyped blobs stay
    visible until typed (Vtx/Gfx/texture/palette/struct) or confirmed as
    genuine raw data. Typed includes (.vtx/.dl/.tex/.palette.inc.c) and
    pointer/struct arrays are exempt."""
    if decl.is_pointer or decl.ctype not in ("u8", "u16", "u32"):
        return
    if any(ext == ".data.inc.c" for _ln, ext, _raw in decl.includes):
        diags.append(Diag(
            path, decl.start_line, "R010", "warn",
            f"'{decl.name}' ({decl.ctype}[{decl.size}]) is an untyped "
            f"`.data.inc.c` blob — type it (Vtx/Gfx/texture/palette/"
            f"struct) or confirm as genuine raw data"))


def check_palette_format(decl, path, diags, lines):
    """R006 — palette decls should be u16[16] + PAD(8) or u16[20].

    The PAD(8) convention only applies when the palette is followed by
    another palette (chaining tightly-packed 40-byte palette blocks) or
    a structured type that needs 16-byte alignment. When followed by
    plain `u8` data (textures, gaps, raw bytes), no PAD is needed and
    adding one would break byte identity."""
    if "palette" not in decl.name:
        return
    if decl.ctype != "u16" or decl.is_pointer:
        return

    if decl.size == 20:
        return  # inline-padded form

    if decl.size == 16:
        # Inspect the line immediately after the closing `};`.
        idx = decl.end_line  # 1-based end_line is the line of `};`
        # Find next non-blank, non-comment line.
        for k in range(idx, min(idx + 6, len(lines))):
            line = lines[k]
            if not line.strip():
                continue
            if line.strip().startswith("/*"):
                continue
            if _PAD_RE.match(line):
                n = int(_PAD_RE.match(line).group("n"))
                if n != 8:
                    diags.append(Diag(
                        path, k + 1, "R006", "warn",
                        f"palette '{decl.name}' uses PAD({n}); expected "
                        f"PAD(8) after u16[16]"
                    ))
                return
            # The PAD(8) convention applies only when one palette is
            # followed by another (making each occupy a 40-byte stride).
            # When followed by any other type, the layout is governed
            # by THAT type and adding a PAD would break byte identity.
            m = re.match(
                r"^\s*(?:extern\s+)?(?P<type>[A-Za-z_][A-Za-z_0-9]*)"
                r"(?:\s*\*+)?\s+(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)",
                line,
            )
            if m and m.group("type") == "u16" and "palette" in m.group("sym"):
                diags.append(Diag(
                    path, decl.end_line, "R006", "warn",
                    f"palette '{decl.name}' is u16[16] but no PAD(8) "
                    f"follows before the next palette decl"
                ))
            return
        # Hit end of search window with nothing.
        diags.append(Diag(
            path, decl.end_line, "R006", "warn",
            f"palette '{decl.name}' is u16[16] but no PAD(8) follows"
        ))
        return

    # Other valid palette sizes: 256 (CI8), 8 (half-palette), 32, 64
    # (multi-frame palettes). Don't flag — they're legitimate variants.


_EXT_TYPE_MAP = {
    ".vtx.inc.c":     ("Vtx",),
    ".dl.inc.c":      ("Gfx",),
    ".palette.inc.c": ("u16",),
    ".tex.inc.c":     ("u8",),
    ".i4.inc.c":      ("u8",),
    ".i4c.inc.c":     ("u8",),
    ".ci4.inc.c":     ("u8",),
    ".ci8.inc.c":     ("u8",),
    ".ia8.inc.c":     ("u8",),
    ".rgba16.inc.c":  ("u8", "u16"),
    ".rgba32.inc.c":  ("u8", "u32"),
    # .data.inc.c: any type is fine; not in this map.
}


_DOBJ_SENTINEL_BY_TYPE = {
    # Trailing entry must use this `id` value as the first field of its
    # struct initializer to mark end-of-array.
    "DObjDesc":   18,   # joint id 18 = end-of-tree sentinel
    "DObjDLLink": 4,    # link-list-id 4 = end-of-list sentinel
}


def check_dobj_sentinel(decl, path, diags):
    """R011 — final entry of a DObjDesc / DObjDLLink array must use the
    well-known sentinel id (DObjDesc: 18, DObjDLLink: 4) as the first
    field of its struct initializer. Missing-sentinel arrays render past
    the end at runtime because the engine walks until it sees the marker.

    Skips:
      - pointer-of-array decls (`DObjDLLink *foo[]`) — those are
        pointer tables, not scene-graph arrays.
      - decls with no inline initializer (forward decls or include-only).
      - decls whose final body line uses `#include` — the bytes are
        opaque and we can't decide.
    """
    sentinel = _DOBJ_SENTINEL_BY_TYPE.get(decl.ctype)
    if sentinel is None or decl.is_pointer:
        return
    if not decl.body:
        return
    # Find the last brace-initialized entry in the body — i.e. the last
    # line of form `{ N, ... }` (optional trailing comma). Skip
    # comment-only or blank trailing lines, and skip `#include` lines
    # (we can't inspect those bytes).
    last_entry_text = None
    last_entry_line = None
    for ln, txt in reversed(decl.body):
        stripped = _strip_comments(txt).strip()
        if not stripped:
            continue
        if stripped.startswith("#include"):
            return  # opaque body — can't check
        # Match `{ FIRST, ... }` capturing FIRST as a decimal / hex / NULL.
        m = re.match(
            r"\{\s*(?P<first>0x[0-9A-Fa-f]+|-?\d+|NULL)\b",
            stripped,
        )
        if not m:
            continue
        last_entry_text = stripped
        last_entry_line = ln
        first_tok = m.group("first")
        break
    if last_entry_text is None:
        return
    # Parse the first field.
    try:
        if first_tok == "NULL":
            first_val = 0
        else:
            first_val = int(first_tok, 0)
    except ValueError:
        return
    if first_val != sentinel:
        diags.append(Diag(
            path, last_entry_line, "R011", "error",
            f"{decl.ctype} '{decl.name}' final entry starts with "
            f"{first_tok} but the sentinel id must be {sentinel} "
            f"(use `{{ {sentinel}, ... }}` as the array terminator); "
            f"without it the engine walks past the end at runtime"
        ))


_MOBJ_SPRITES_PALETTES_RE = re.compile(
    r"\(void\*\*\)\s*&?\s*([A-Za-z_][A-Za-z_0-9]*|0x[0-9A-Fa-f]+)"
)


def check_mobjsub_pointer_array_types(decl, path, diags, decls_by_name):
    """R012 — MObjSub.sprites / .palettes targets a `void *[N]` array
    whose entries must be u8 textures (for sprites) or u16 palettes
    (for palettes).

    The 4th and 16th initializer expressions of a `MObjSub` are the
    `sprites` and `palettes` fields respectively. Each is `void **` —
    a pointer to an array of `void *` block pointers. If the pointed-to
    array contains entries that don't match the expected per-field type,
    that's a clue the referenced blocks are mistyped (e.g. a palette
    extracted as a u8 texture because it happens to share a byte size
    with one).

    Only fires when the target array can be resolved to a `void *[N]`
    decl in the same .c file — extern targets are ignored."""
    if decl.ctype != "MObjSub":
        return
    # Pull the (void**)<sym> references in order: [0] = sprites, [1] = palettes.
    refs = []
    for _ln, txt in decl.body:
        for m in _MOBJ_SPRITES_PALETTES_RE.finditer(txt):
            refs.append((_ln, m.group(1)))
    if len(refs) < 2:
        return
    sprites_ln, sprites_target = refs[0]
    palettes_ln, palettes_target = refs[1]

    def entries_of(name):
        d = decls_by_name.get(name)
        if d is None or not d.is_pointer or d.ctype != "void":
            return None
        # Parse body for non-NULL symbol references.
        out = []
        for ln, txt in d.body:
            s = _strip_comments(txt).strip().rstrip(",").strip()
            if not s or s == "NULL" or s == "};":
                continue
            # Strip casts: `(MObjSub *)sym` → `sym`
            cm = re.match(r"^\(.+?\)\s*&?\s*([A-Za-z_][A-Za-z_0-9]*)", s)
            if cm:
                out.append((ln, cm.group(1)))
                continue
            sm = re.match(r"^&?\s*([A-Za-z_][A-Za-z_0-9]*)$", s)
            if sm:
                out.append((ln, sm.group(1)))
        return out

    def check_role(target_sym, target_ln, field, expected_ctype):
        if target_sym.startswith("0x"):
            return
        entries = entries_of(target_sym)
        if entries is None:
            return
        for ln, sym in entries:
            target_decl = decls_by_name.get(sym)
            if target_decl is None:
                continue
            actual = target_decl.ctype
            ok = (actual == expected_ctype)
            # Allow palette-typed (`u16`) blocks in palettes arrays. Allow
            # u8/Texture blocks in sprites arrays. Reject mismatch.
            if ok:
                continue
            # The MObjSub struct slots for sprites/palettes accept any
            # block — but the RUNTIME interpretation depends on the
            # field. Flag mismatches.
            diags.append(Diag(
                path, ln, "R012", "warn",
                f"'{target_sym}' (referenced as MObjSub.{field} by "
                f"'{decl.name}') contains '{sym}' typed as "
                f"`{actual}[]` but expected `{expected_ctype}[]` — "
                f"retype the block (sprites arrays should hold u8 "
                f"textures; palettes arrays should hold u16 palettes)"
            ))

    check_role(sprites_target, sprites_ln, "sprites", "u8")
    check_role(palettes_target, palettes_ln, "palettes", "u16")


def check_include_type_match(decl, path, diags):
    """R007 — type vs include-extension agreement."""
    if not decl.has_include():
        return
    for ln, ext, _ in decl.includes:
        if ext == ".data.inc.c":
            continue
        if ext not in _EXT_TYPE_MAP:
            diags.append(Diag(
                path, ln, "R007", "warn",
                f"'{decl.name}' uses unknown include extension '{ext}'"
            ))
            continue
        allowed = _EXT_TYPE_MAP[ext]
        if decl.ctype not in allowed or decl.is_pointer:
            ptr_marker = " *" if decl.is_pointer else ""
            diags.append(Diag(
                path, ln, "R007", "error",
                f"'{decl.name}' is `{decl.ctype}{ptr_marker}[{decl.size}]` "
                f"but include uses '{ext}' (expects "
                f"{'/'.join(allowed)}); rename the include or retype the "
                f"declaration"
            ))


# Element sizes (bytes) for typed array element types. References into
# these at element boundaries are NORMAL (e.g. `Vtx_0x0000_Vtx+0x20` is
# the third Vtx in an array). R004 only fires when the offset isn't on
# an element boundary or the parent type is untyped (u8/u16/u32).
_TYPED_ELEMENT_SIZES = {
    "Vtx": 16,
    "Gfx": 8,
    "DObjDLLink": 8,
    "DObjDesc": 44,
    "MObjSub": 120,
    "AObjEvent32": 4,  # AObjEvent32 is u32-sized command words
}


def check_reloc_target_form(reloc_path, entries, diags, type_by_sym,
                              script_syms, ptr_syms):
    """R004 (.reloc half) + R003 partial — flag entries whose target is
    `<sym>+0xN`, `0xNNNN` raw, or otherwise not a bare blockname.
    Skips element-boundary references into typed `Vtx`/`Gfx`/etc.
    arrays AND mid-script entry points into AObjEvent32 scripts.
    Pointer arrays (e.g. `MObjSub **arr[]`, `void *arr[]`) have a 4-byte
    element size regardless of the base ctype — landing on a 4-byte
    boundary in a pointer array is a clean element reference."""
    for line_no, kind, ptr, target, _comment in entries:
        # Raw 0xNNNN byte-offset target → very-likely chain hex.
        if re.match(r"^0x[0-9A-Fa-f]+$", target):
            diags.append(Diag(
                reloc_path, line_no, "R003", "error",
                f"reloc target is raw hex '{target}' — replace with the "
                f"matching block symbol so symbol shuffles don't "
                f"silently desync"
            ))
            continue
        m = re.match(r"^(?P<sym>[A-Za-z_][A-Za-z_0-9]*)\+0x(?P<off>[0-9A-Fa-f]+)$", target)
        if m:
            sym = m.group("sym")
            off = int(m.group("off"), 16)
            # Mid-script entry points into AObjEvent32 scripts are
            # legitimate — the runtime walks from any offset.
            if sym in script_syms:
                continue
            # Pointer arrays: each element is 4 bytes regardless of the
            # pointed-to ctype.
            if sym in ptr_syms and off % 4 == 0:
                continue
            t = type_by_sym.get(sym)
            elem_size = _TYPED_ELEMENT_SIZES.get(t)
            if elem_size and off % elem_size == 0:
                continue
            diags.append(Diag(
                reloc_path, line_no, "R004", "warn",
                f"reloc target '{target}' uses sym+offset form — split "
                f"the parent so the target can be a bare block symbol"
            ))


_SUB_LABEL_RE = re.compile(r"^(?P<parent>.+?)_sub_0x[0-9A-Fa-f]+$")


_LABEL_BASE_RE = re.compile(
    r"^(?P<base>[A-Za-z_][A-Za-z_0-9]*)"
    r"(?:\+0x(?P<delta>[0-9A-Fa-f]+))?$"
)


def _resolve_to_parent(label, untyped_parents, defined):
    """Map a .reloc label to (parent_sym, byte_offset) where
    `parent_sym` is in `untyped_parents`. Returns (None, None) when the
    label points anywhere else.

    Label forms (in priority order):
      <sym>[+0xM]             — if `<sym>` is itself defined, use it
                                directly; don't decompose `_sub_0xN`
                                even when the suffix would parse.
      <parent>_sub_0xN[+0xM]  — only when the literal `_sub_0xN` form
                                isn't itself defined; the suffix is
                                then a byte-offset alias of `parent`
                                (per fixRelocChain.py's resolver).
    """
    m = _LABEL_BASE_RE.match(label)
    if not m:
        return None, None
    base = m.group("base")
    delta = int(m.group("delta"), 16) if m.group("delta") else 0
    # 1. The base symbol is defined — use it as-is. Don't strip a
    # `_sub_0xN` suffix off a real symbol.
    if base in defined:
        if base in untyped_parents:
            return base, delta
        return None, None
    # 2. Base looks like `<parent>_sub_0xN` and the literal base wasn't
    # defined — treat the suffix as a byte-offset alias.
    sm = _SUB_LABEL_RE.match(base)
    if sm:
        parent = sm.group("parent")
        sub_hex = base[len(parent) + len("_sub_0x"):]
        sub = int(sub_hex, 16)
        if parent in untyped_parents:
            return parent, sub + delta
    return None, None


def _label_resolves(label, defined):
    """A label resolves if its head symbol is defined, or if it ends in
    `_sub_0xN` and the parent (everything before the last `_sub_0xN`) is
    defined. `fixRelocChain.py` treats the suffix as a byte-offset alias
    of the parent, so an undeclared `_sub_0xN` is the canonical form for
    a mid-block target — not an error."""
    head = label.split("+", 1)[0]
    if head in defined:
        return True
    m = _SUB_LABEL_RE.match(head)
    if m and m.group("parent") in defined:
        return True
    return False


def check_chain_pointers_in_untyped(reloc_path, c_path, entries, decls, diags):
    """R009 — flag every .reloc ptr that lands inside an untyped
    `.data.inc.c` blob, listing the parent blob, the byte offset within
    it, the target symbol, and (for externs) the target file from any
    trailing `# -> file NNN (Name)` annotation."""
    untyped = {d.name for d in decls if d.has_include()
               and any(ext == ".data.inc.c" for _ln, ext, _raw in d.includes)}
    # Decls with no include but typed `u8`/`u16`/`u32` are "untyped raw"
    # too — unless the block is a genuine AObjEvent32 script (its first
    # body entry is an opcode macro). A `u32[]` blob that merely *contains*
    # aobjEvent32 macros but does not start with one is a mixed
    # pointer-table / struct blob (e.g. a pointer head + DObjDesc[] +
    # pointer table), not a script — count it as untyped so chain pointers
    # landing inside it are still flagged for proper typing.
    for d in decls:
        if d.has_include():
            continue
        if d.ctype in ("u8", "u16", "u32") and not d.is_pointer:
            if not is_aobjevent32_script(d):
                untyped.add(d.name)
    if not untyped:
        return

    defined = {d.name for d in decls}
    for line_no, kind, ptr, target, comment in entries:
        parent, off = _resolve_to_parent(ptr, untyped, defined)
        if parent is None:
            continue
        # Format target description. Also collect structured info for
        # --by-parent aggregation downstream.
        fid_str = None
        fid_name = None
        if kind == "extern":
            tgt_desc = target
            fid_note = ""
            if comment:
                m = _EXTERN_FID_RE.search(comment)
                if m:
                    fid_str = m.group("fid")
                    fid_name = m.group("name") or "?"
                    fid_note = f" (file {fid_str} {fid_name})"
            tgt_full = f"extern {tgt_desc}{fid_note}"
        else:
            tgt_full = f"intern {target}"
        diags.append(Diag(
            reloc_path, line_no, "R009", "warn",
            f"chain pointer at {parent}+0x{off:X} lands in an untyped "
            f"`.data.inc.c` blob — target: {tgt_full}; type the parent "
            f"(or split at +0x{off:X}) so the pointer slot has its own "
            f"symbol",
            info={
                "parent": parent,
                "offset": off,
                "kind": kind,
                "target": target,
                "extern_fid": fid_str,
                "extern_name": fid_name,
            },
        ))


def check_reloc_symbols_resolve(reloc_path, entries, decls, externs, diags):
    """R008 — every symbol referenced in .reloc must resolve, either as
    a declared/extern'd symbol or as `<defined_parent>_sub_0xN`."""
    defined = {d.name for d in decls} | set(externs.keys())
    for line_no, kind, ptr, target, _comment in entries:
        if not _label_resolves(ptr, defined):
            diags.append(Diag(
                reloc_path, line_no, "R008", "error",
                f"reloc ptr-label '{ptr.split('+', 1)[0]}' is not declared "
                f"(or extern'd) in the .c and isn't a `<parent>_sub_0xN` "
                f"alias of a defined symbol"
            ))
        if kind != "intern":
            continue
        head = target.split("+", 1)[0]
        if re.match(r"^0x[0-9A-Fa-f]+$", head):
            continue  # R003 catches raw hex targets
        if not _label_resolves(target, defined):
            diags.append(Diag(
                reloc_path, line_no, "R008", "error",
                f"reloc target '{head}' is not declared (or extern'd) "
                f"in the .c and isn't a `<parent>_sub_0xN` alias"
            ))


# ---------------------------------------------------------------------------
# Driver
# ---------------------------------------------------------------------------


def find_c_path(arg):
    """Resolve a numeric fid or path into an absolute .c path."""
    if os.path.isabs(arg) and arg.endswith(".c"):
        return arg
    if arg.endswith(".c") and os.path.exists(arg):
        return os.path.abspath(arg)
    if arg.isdigit():
        fid = int(arg)
        for fn in os.listdir(RELOC_DIR):
            if fn.endswith(".c") and not fn.endswith(".jp.c"):
                m = re.match(r"^(\d+)_", fn)
                if m and int(m.group(1)) == fid:
                    return os.path.join(RELOC_DIR, fn)
        raise SystemExit(f"no .c file in src/relocData matches fid {fid}")
    cand = os.path.join(RELOC_DIR, arg)
    if os.path.exists(cand):
        return cand
    raise SystemExit(f"could not resolve '{arg}' to a relocData .c file")


def validate(c_path, enabled_rules):
    decls, externs, lines = parse_c(c_path)
    reloc_path = c_path[:-2] + ".reloc"
    entries = parse_reloc(reloc_path)
    # Pre-compute set of decl names that are AObjEvent32 scripts (u32
    # arrays with aobjEvent32 macros). Used by R004 to skip mid-script
    # entry-point references.
    script_syms = {d.name for d in decls if is_aobjevent32_script(d)}

    diags = []
    for d in decls:
        if "R001" in enabled_rules or "R002" in enabled_rules:
            check_aobjevent32_termination(d, c_path, diags)
        if "R003" in enabled_rules:
            check_chain_pointer_raw_hex(d, c_path, diags)
        if "R004" in enabled_rules:
            check_chain_pointer_target_form(d, c_path, diags, script_syms)
        if "R005" in enabled_rules:
            check_raw_hex_chunks(d, c_path, diags, lines)
        if "R006" in enabled_rules:
            check_palette_format(d, c_path, diags, lines)
        if "R007" in enabled_rules:
            check_include_type_match(d, c_path, diags)
        if "R010" in enabled_rules:
            check_untyped_data_blob(d, c_path, diags)
        if "R011" in enabled_rules:
            check_dobj_sentinel(d, c_path, diags)
    if "R012" in enabled_rules:
        decls_by_name = {d.name: d for d in decls}
        for d in decls:
            check_mobjsub_pointer_array_types(d, c_path, diags, decls_by_name)
    if "R003" in enabled_rules or "R004" in enabled_rules:
        type_by_sym = {d.name: d.ctype for d in decls}
        type_by_sym.update(externs)  # extern type also helps
        ptr_syms = {d.name for d in decls if d.is_pointer}
        check_reloc_target_form(reloc_path, entries, diags, type_by_sym,
                                  script_syms, ptr_syms)
    if "R008" in enabled_rules:
        check_reloc_symbols_resolve(reloc_path, entries, decls, externs, diags)
    if "R009" in enabled_rules:
        check_chain_pointers_in_untyped(reloc_path, c_path, entries, decls,
                                        diags)

    # Filter to enabled rules (rule-pair checks emit by R-code; filter the
    # final list so --rules / --skip-rules are precise).
    diags = [d for d in diags if d.rule in enabled_rules]
    diags.sort(key=lambda d: (d.path, d.line, d.rule))
    return diags


ALL_RULES = ["R001", "R002", "R003", "R004", "R005", "R006", "R007", "R008",
             "R009", "R010", "R011", "R012"]


def main():
    ap = argparse.ArgumentParser(
        description=__doc__.split("\n\n", 1)[0],
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=(
            "Rule codes:\n"
            "  R001  AObjEvent32 script termination\n"
            "  R002  AObjEvent32 script has >1 aobjEvent32End()\n"
            "  R003  Reloc chain pointer is raw hex\n"
            "  R004  Reloc chain target isn't a bare block symbol\n"
            "  R005  Inline raw-hex dump (should be a .data.inc.c include)\n"
            "  R006  palette block isn't u16[16]+PAD(8) or u16[20]\n"
            "  R007  Include extension doesn't match the C type\n"
            "  R008  .reloc references a symbol not declared in the .c\n"
            "  R009  Chain pointer lands inside a `.data.inc.c` blob\n"
            "  R010  Untyped `.data.inc.c` blob (tracked for typing)\n"
            "  R011  DObjDesc/DObjDLLink missing terminating sentinel\n"
            "  R012  MObjSub.sprites/.palettes target has wrong-typed entries\n"
        ),
    )
    ap.add_argument("targets", nargs="+",
                    help="one or more fids or paths to relocData .c files")
    ap.add_argument("--rules", help="comma-separated rule codes to enable "
                    "(default: all)")
    ap.add_argument("--skip-rules", help="comma-separated rule codes to "
                    "disable")
    ap.add_argument("--quiet", action="store_true",
                    help="suppress per-file headers; print diagnostics only")
    ap.add_argument("--summary", action="store_true",
                    help="print only the summary line per file")
    ap.add_argument("--by-parent", action="store_true",
                    help="aggregate R009 hits by untyped parent blob: "
                    "rank parents by inbound chain pointer count, show "
                    "distinct offsets and target symbols. Implies "
                    "`--rules R009` unless --rules is explicitly given.")
    ap.add_argument("--top", type=int, default=0,
                    help="limit --by-parent output to the top N parents "
                    "(default: all)")
    args = ap.parse_args()

    if args.by_parent and not args.rules:
        enabled = {"R009"}
    else:
        enabled = set(ALL_RULES)
        if args.rules:
            enabled = {r.strip().upper()
                       for r in args.rules.split(",") if r.strip()}
            bad = enabled - set(ALL_RULES)
            if bad:
                raise SystemExit(f"unknown rules: {sorted(bad)}")
    if args.skip_rules:
        enabled -= {r.strip().upper() for r in args.skip_rules.split(",")
                    if r.strip()}

    total_errors = 0
    total_warns = 0
    files_with_issues = 0
    overall_counter = Counter()
    by_parent_diags = []  # collected R009 diags for --by-parent aggregation

    for tgt in args.targets:
        c_path = find_c_path(tgt)
        diags = validate(c_path, enabled)
        rel = os.path.relpath(c_path, PROJECT_DIR)

        errors = sum(1 for d in diags if d.severity == "error")
        warns = sum(1 for d in diags if d.severity == "warn")
        total_errors += errors
        total_warns += warns
        if diags:
            files_with_issues += 1
            for d in diags:
                overall_counter[d.rule] += 1

        if args.by_parent:
            for d in diags:
                if d.rule == "R009":
                    by_parent_diags.append((c_path, d))
            continue

        if args.summary:
            status = "OK" if not diags else f"{errors}E {warns}W"
            print(f"{rel}: {status}")
            continue
        if not args.quiet:
            print(f"== {rel} ==")
        for d in diags:
            print(d.fmt())
        if not diags and not args.quiet:
            print("  (clean)")

    if args.by_parent:
        _print_by_parent_report(by_parent_diags, top=args.top)
        sys.exit(1 if total_errors else 0)

    if not args.quiet or args.summary:
        if overall_counter:
            tally = "  ".join(f"{r}:{n}" for r, n in sorted(overall_counter.items()))
            print()
            print(f"{total_errors} errors, {total_warns} warnings across "
                  f"{files_with_issues} file(s)  [{tally}]")
        elif not args.summary:
            print()
            print("All clean.")

    sys.exit(1 if total_errors else 0)


def _print_by_parent_report(by_parent_diags, top=0):
    """Group R009 hits by (file, parent_symbol) and print a ranked
    report: parent, # inbound chain pointers, distinct offsets within
    the parent, and the set of distinct target symbols (annotated with
    extern file ID if applicable)."""
    if not by_parent_diags:
        print("No R009 hits to aggregate.")
        return

    # Group: (c_path, parent) -> list of Diag.
    groups = defaultdict(list)
    for c_path, d in by_parent_diags:
        key = (c_path, d.info["parent"])
        groups[key].append(d)

    # Rank by hit count.
    ranked = sorted(groups.items(), key=lambda kv: -len(kv[1]))
    if top > 0:
        ranked = ranked[:top]

    print(f"R009 grouped by parent — {len(groups)} parents, "
          f"{sum(len(v) for v in groups.values())} chain pointers")
    print()
    for (c_path, parent), diags in ranked:
        rel = os.path.relpath(c_path, PROJECT_DIR)
        offsets = sorted({d.info["offset"] for d in diags})
        target_counter = Counter()
        externs = {}  # target_head_sym -> "file <fid> <name>"
        for d in diags:
            t = d.info["target"]
            head = t.split("+", 1)[0]
            target_counter[head] += 1
            if d.info["kind"] == "extern" and d.info.get("extern_fid"):
                externs[head] = (d.info["extern_fid"],
                                 d.info.get("extern_name") or "?")
        print(f"{rel}  {parent}: {len(diags)} chain ptrs across "
              f"{len(offsets)} offsets, {len(target_counter)} distinct targets")
        # Offsets summary — show first 8 + last for context.
        if len(offsets) <= 10:
            off_str = ", ".join(f"0x{o:X}" for o in offsets)
        else:
            head = ", ".join(f"0x{o:X}" for o in offsets[:6])
            tail = ", ".join(f"0x{o:X}" for o in offsets[-2:])
            off_str = f"{head}, … (+{len(offsets) - 8}), {tail}"
        print(f"  offsets: {off_str}")
        # Top 5 targets.
        for tgt, n in target_counter.most_common(5):
            extra = ""
            if tgt in externs:
                fid, name = externs[tgt]
                extra = f"  [extern → file {fid} {name}]"
            print(f"    {n:4d}  {tgt}{extra}")
        if len(target_counter) > 5:
            print(f"    … +{len(target_counter) - 5} more")
        print()


if __name__ == "__main__":
    main()
