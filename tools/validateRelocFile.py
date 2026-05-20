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
        """Return [(line_no, text)] for body lines holding an aobjEvent32 macro."""
        out = []
        for ln, txt in self.body:
            if "aobjEvent32" in txt:
                out.append((ln, txt))
        return out

    def has_include(self):
        return bool(self.includes)


def parse_c(path):
    """Parse a relocData .c file. Returns (decls, externs, all_lines)."""
    text = path_read(path)
    lines = text.split("\n")
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
            j = i + 1
            tail = line[dm.end():]
            if re.match(r"^\s*\};\s*$", tail):
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
                if re.match(r"^\s*\};\s*$", body_line):
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
    __slots__ = ("path", "line", "rule", "severity", "msg")

    def __init__(self, path, line, rule, severity, msg):
        self.path = path
        self.line = line
        self.rule = rule
        self.severity = severity  # 'error' or 'warn'
        self.msg = msg

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


def is_aobjevent32_script(decl):
    """Heuristic: a u32 array with at least one aobjEvent32 macro call."""
    if decl.ctype != "u32" or decl.is_pointer:
        return False
    return any("aobjEvent32" in txt for _, txt in decl.body)


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
    """R003 — Raw 0xXXXXYYYY literal in a pointer-array slot, or as the
    payload word after aobjEvent32SetAnim/Jump."""
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


def check_chain_pointer_target_form(decl, path, diags):
    """R004 (C-source half) — `blockname+offset`, `&blockname[N]`,
    `((u8*)blockname+0xN)` references inside pointer-array slots."""
    if not is_pointer_array(decl):
        return
    for ln, txt in decl.body:
        if "NULL" in txt:
            continue
        m = _OFFSET_REF_RE.search(txt)
        if m:
            diags.append(Diag(
                path, ln, "R004", "warn",
                f"'{decl.name}' slot references "
                f"{m.group('sym')}+0x{m.group('off')} — split the parent "
                f"so the pointer can use a bare block symbol"
            ))
            continue
        m = _INDEX_REF_RE.search(txt)
        if m:
            diags.append(Diag(
                path, ln, "R004", "warn",
                f"'{decl.name}' slot uses `&{m.group('sym')}[…]` form — "
                f"split the parent so the pointer can use a bare block "
                f"symbol"
            ))


def check_raw_hex_chunks(decl, path, diags):
    """R005 — Untyped u8/u16/u32 body listing raw hex literals inline
    instead of using `#include <… .data.inc.c>`."""
    if decl.is_pointer:
        return
    if decl.ctype not in ("u8", "u16", "u32"):
        return
    if is_aobjevent32_script(decl):
        return
    if decl.has_include():
        return
    # If every meaningful body line is a hex literal (or terminator), the
    # block is an inline raw-hex dump.
    has_hex = False
    has_other = False
    for ln, txt in decl.body:
        stripped = txt.strip()
        if not stripped or stripped == "};":
            continue
        if _RAW_HEX_LITERAL_RE.match(txt):
            has_hex = True
        else:
            has_other = True
            break
    if has_hex and not has_other:
        diags.append(Diag(
            path, decl.start_line, "R005", "warn",
            f"'{decl.name}' ({decl.ctype}[{decl.size}]) is an inline "
            f"raw-hex dump — use `#include <…/{decl.name}.data.inc.c>` "
            f"(or properly type the block) until it can be typed"
        ))


def check_palette_format(decl, path, diags, lines):
    """R006 — palette decls should be u16[16] + PAD(8) or u16[20]."""
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
            # Not a PAD: missing padding.
            diags.append(Diag(
                path, decl.end_line, "R006", "warn",
                f"palette '{decl.name}' is u16[16] but no PAD(8) follows "
                f"— add `PAD(8);` for 16-byte alignment"
            ))
            return
        # Hit end of search window with nothing.
        diags.append(Diag(
            path, decl.end_line, "R006", "warn",
            f"palette '{decl.name}' is u16[16] but no PAD(8) follows"
        ))
        return

    diags.append(Diag(
        path, decl.start_line, "R006", "warn",
        f"palette '{decl.name}' has unusual size u16[{decl.size}]; "
        f"palettes are normally u16[16]+PAD(8) or u16[20]"
    ))


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


def check_reloc_target_form(reloc_path, entries, diags):
    """R004 (.reloc half) + R003 partial — flag entries whose target is
    `<sym>+0xN`, `0xNNNN` raw, or otherwise not a bare blockname."""
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
        m = re.match(r"^(?P<sym>[A-Za-z_][A-Za-z_0-9]*)\+0x[0-9A-Fa-f]+$", target)
        if m:
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
    # Even decls that have no include but are typed `u8`/`u32` without
    # any aobjEvent32 macro are "untyped raw" too — count them as well.
    for d in decls:
        if d.has_include():
            continue
        if d.ctype in ("u8", "u16", "u32") and not d.is_pointer:
            if not any("aobjEvent32" in txt for _, txt in d.body):
                untyped.add(d.name)
    if not untyped:
        return

    defined = {d.name for d in decls}
    for line_no, kind, ptr, target, comment in entries:
        parent, off = _resolve_to_parent(ptr, untyped, defined)
        if parent is None:
            continue
        # Format target description.
        if kind == "extern":
            tgt_desc = target
            fid_note = ""
            if comment:
                m = _EXTERN_FID_RE.search(comment)
                if m:
                    name = m.group("name") or "?"
                    fid_note = f" (file {m.group('fid')} {name})"
            tgt_full = f"extern {tgt_desc}{fid_note}"
        else:
            tgt_full = f"intern {target}"
        diags.append(Diag(
            reloc_path, line_no, "R009", "warn",
            f"chain pointer at {parent}+0x{off:X} lands in an untyped "
            f"`.data.inc.c` blob — target: {tgt_full}; type the parent "
            f"(or split at +0x{off:X}) so the pointer slot has its own "
            f"symbol"
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

    diags = []
    for d in decls:
        if "R001" in enabled_rules or "R002" in enabled_rules:
            check_aobjevent32_termination(d, c_path, diags)
        if "R003" in enabled_rules:
            check_chain_pointer_raw_hex(d, c_path, diags)
        if "R004" in enabled_rules:
            check_chain_pointer_target_form(d, c_path, diags)
        if "R005" in enabled_rules:
            check_raw_hex_chunks(d, c_path, diags)
        if "R006" in enabled_rules:
            check_palette_format(d, c_path, diags, lines)
        if "R007" in enabled_rules:
            check_include_type_match(d, c_path, diags)
    if "R003" in enabled_rules or "R004" in enabled_rules:
        check_reloc_target_form(reloc_path, entries, diags)
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
             "R009"]


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
    args = ap.parse_args()

    enabled = set(ALL_RULES)
    if args.rules:
        enabled = {r.strip().upper() for r in args.rules.split(",") if r.strip()}
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


if __name__ == "__main__":
    main()
