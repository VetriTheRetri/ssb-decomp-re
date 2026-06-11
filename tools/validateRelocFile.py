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
  R013  Undecoded opcode word in an AObjEvent32 script — once the first
        body entry is an aobjEvent32 macro, every opcode-position slot
        should be a macro, not raw hex
  R014  Vtx block holds inline literal data instead of a `.vtx.inc.c`
        include
  R021  Pointer table under-typed by one level of indirection. A decl
        `T *X[N]` whose every non-NULL entry casts a symbol Y, and Y is
        itself a `T *[]` (or T[] for `void *`) — X should be `T **`
        instead of `T *`. Specifically catches:
          void  *X[]  whose entries target `MObjSub Y[]`  → `MObjSub *`
          MObjSub  *X[]  whose entries target `MObjSub *Y[]` → `MObjSub **`
          AObjEvent32 *X[] whose entries target `AObjEvent32 *Y[]` → `AObjEvent32 **`
  R022  Untyped `.data.inc.c` blob whose bytes carry the MObjSub
        signature `0x00022205` at file-offset 0x4C (the `unk4C` field
        of the `MObjSub` struct, which is constant across nearly every
        MObjSub instance in the game). The block is almost certainly
        a mistyped `MObjSub[N]` waiting to be retyped. Walks the .o's
        .data section so the check works against either u8/u16/u32
        untyped blocks regardless of the array element type.
  R023  `u32 X[N]` whose every non-NULL entry is a `(u32)dSym` cast
        and every target `dSym` is a typed array — X is a pointer
        table mistyped as raw `u32`. Reports the inferred type
        (e.g., `u8 *` for textures, `Gfx *` for DLs, `MObjSub **` for
        MObjSub-pointer arrays). This is the broader sibling of R021,
        which only catches the T*→T** case.
  R024  `Gfx X[N]` block whose `.dl.inc.c` doesn't end with
        `gsSPEndDisplayList()` (the `0xDF000000 0x00000000` terminator).
        99% of DLs end this way; the exception is `gsSPBranchList()`
        (a tail-branch into another DL — accepted). An unterminated DL
        means the next adjacent block continues the DL and the two
        should be merged into a single Gfx[N].

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
    r"(?:\[(?P<size>[^\]]*)\](?:\[[^\]]*\])*)?\s*=\s*\{"
)

# Same shape but allows the body-opening `{` to live on a later line:
# `TYPE NAME[N] =` ↵ `{` ↵ `…`. Used as a fallback when the one-liner
# form doesn't match.
_DECL_HEAD_SPLIT_RE = re.compile(
    r"^\s*(?P<type>(?:static\s+|const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*)\b"
    r"(?P<stars>(?:\s*\*+)?)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[(?P<size>[^\]]*)\](?:\[[^\]]*\])*)?\s*=\s*$"
)

_EXTERN_DECL_RE = re.compile(
    r"^\s*extern\s+(?P<type>(?:const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*)\b"
    r"(?P<stars>(?:\s*\*+)?)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[(?P<size>[^\]]*)\](?:\[[^\]]*\])*)?\s*;"
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

    def macro_lines(self, prefix="aobjEvent32"):
        """Return [(line_no, text)] for body lines holding a macro call
        whose name contains `prefix` (case-sensitive, comment-stripped).
        Default `aobjEvent32` picks up AObjEvent32 scripts; pass
        `ftMotion` to pick up `ftMotionCommand*()` / `ftMotionPlay*()`
        macros for ftMotionCommand scripts."""
        out = []
        for ln, txt in self.body:
            if _strip_comments(txt).find(prefix) != -1:
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
    extern_ptr_syms = set()  # extern decls with `*` in their type
    i = 0
    while i < len(lines):
        line = lines[i]
        em = _EXTERN_DECL_RE.match(line)
        if em:
            externs[em.group("name")] = em.group("type").strip()
            if em.group("stars") and "*" in em.group("stars"):
                extern_ptr_syms.add(em.group("name"))
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
    return decls, externs, lines, extern_ptr_syms


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


def is_ftmotion_script(decl):
    """A decl is a ftMotionCommand script iff its declared type is
    `ftMotionCommand` (the corpus-wide typedef from src/ft/ftdef.h)."""
    return decl.ctype == "ftMotionCommand" and not decl.is_pointer


_FTMOTION_TERMINATORS = (
    "ftMotionCommandEnd",
    "ftMotionCommandGoto",
    "ftMotionCommandGotoS1",
    "ftMotionCommandReturn",
    "ftMotionCommandSubroutine",
    "ftMotionCommandSubroutineS1",
    "ftMotionCommandPauseScript",
)


def check_ftmotion_raw_hex(decl, path, diags):
    """R018 — raw hex literal inside an `ftMotionCommand` script body.
    Every word of a script should be the result of an `ftMotionCommand*()`
    or `ftMotionPlay*()` macro (multi-word macros include their payload
    args in the macro expansion). A bare `0xHHHHHHHH,` line means either
    an undecoded opcode or a multi-word macro that was split into pieces
    and lost its tail — both worth surfacing for cleanup."""
    if not is_ftmotion_script(decl):
        return
    for ln, txt in decl.body:
        if not _OPCODE_RAW_HEX_RE.match(txt):
            continue
        raw = txt.strip().rstrip(",").strip()
        diags.append(Diag(
            path, ln, "R018", "warn",
            f"raw hex `{raw}` inside ftMotionCommand script "
            f"'{decl.name}' — decode the opcode (or fold into the "
            f"preceding multi-word macro's args)"
        ))


def check_ftmotion_termination(decl, path, diags, next_decl=None):
    """R019 — last macro of an `ftMotionCommand` script must be a flow
    terminator: `ftMotionCommandEnd()`, `ftMotionCommandGoto(…)`,
    `ftMotionCommandReturn()`, `ftMotionCommandSubroutine(…)`, or
    `ftMotionCommandPauseScript()`.

    A non-terminator ending is fine when the IMMEDIATELY FOLLOWING decl
    is another ftMotionCommand script: execution falls through into the
    next entry point, which is real engine behavior (shared script
    tails). Only flag when there's nothing valid to fall into (end of
    file, or a non-script block next) — that indicates a mis-typed or
    mis-split body."""
    if not is_ftmotion_script(decl):
        return
    macros = decl.macro_lines("ftMotion")
    if not macros:
        return
    last_ln, last_txt = macros[-1]
    if not any(t + "(" in last_txt for t in _FTMOTION_TERMINATORS):
        if next_decl is not None and is_ftmotion_script(next_decl):
            return  # legitimate fall-through into the next script
        diags.append(Diag(
            path, last_ln, "R019", "warn",
            f"ftMotionCommand script '{decl.name}' doesn't end with a "
            f"flow-terminator macro (End/Goto/Return/Subroutine/PauseScript) "
            f"— last macro is `{last_txt.strip().rstrip(',').strip()}`; "
            f"consider splitting after the last terminator"
        ))


def check_ftmotion_terminator_not_last(decl, path, diags, lines=None):
    """R020 — an `ftMotionCommand` script contains a hard terminator
    (`End`/`Goto`/`Return`) followed by more macros that are NOT
    themselves another terminator. After a hard terminator the script
    engine never falls through to the next word — it halts (End) or
    transfers control unconditionally (Goto/Return). A mid-decl hard
    terminator with non-terminator code after it almost always means
    the extractor merged two adjacent scripts into one body — the
    trailing code is a *separate* script reached via `<sym>+N` from
    elsewhere (e.g. `dFoo_0x1A34 + 5` for the script at +0x14, or
    `dFoo_0x18DC + 0x8` for the FireFoxGround sub-script). Split the
    decl at every such terminator so each piece gets its own bare
    block symbol; the `+N` offset references become clean symbol refs.

    `Subroutine`/`PauseScript` are NOT terminators here — they yield
    control briefly and the script resumes after them.

    **Dispatch-table / loop-body exemption:** a Goto followed by
    another Goto (or by an End that itself terminates a dispatch table)
    is the well-known 4-entry dispatch pattern (`Goto×N, End`) and is
    intentional, not flagged. Same for `Goto(self)`-style loop bodies
    where the only thing after the back-Goto is a fall-through End.

    The *last* macro in the body is exempt (that's the script's own
    legitimate terminator, flagged by R019 if missing)."""
    if lines is not None and decl.end_line:
        body = "\n".join(lines[decl.start_line - 1:decl.end_line])
        if "#if" in body:
            # Version-divergent script run: the two regions pack different
            # entries at different offsets, so per-piece symbols can't be
            # shared. Keep as one block.
            return
    if not is_ftmotion_script(decl):
        return
    macros = decl.macro_lines("ftMotion")
    if len(macros) < 2:
        return
    def is_hard_term(txt):
        return any(("ftMotionCommandEnd(" in txt,
                    "ftMotionCommandGoto(" in txt,
                    "ftMotionCommandGotoS1(" in txt,
                    "ftMotionCommandReturn(" in txt))
    last_idx = len(macros) - 1
    for i in range(last_idx):
        _, txt_i = macros[i]
        if not is_hard_term(txt_i):
            continue
        # Trailing macros, in order; skip the rule if the very next
        # macro is also a hard terminator (dispatch tables / loop
        # tails). If the trail contains a non-terminator macro,
        # something separate starts after this terminator.
        _, next_txt = macros[i + 1]
        if is_hard_term(next_txt):
            continue
        # All later macros also being terminators would be a dispatch
        # table tail; this branch already has at least one non-term.
        # Any non-terminator after a hard terminator = split candidate.
        non_term_present = any(
            not is_hard_term(t) for _, t in macros[i + 1:]
        )
        if not non_term_present:
            continue
        term = txt_i.strip().rstrip(",").strip()
        ln = macros[i][0]
        diags.append(Diag(
            path, ln, "R020", "warn",
            f"ftMotionCommand script '{decl.name}' has an internal "
            f"hard terminator `{term}` followed by non-terminator "
            f"macros — split the script after this terminator into a "
            f"separate decl so the trailing entry point gets its own "
            f"block symbol (referring to `{decl.name}+N` for the "
            f"trailing script is a code smell)"
        ))


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


def is_figatree_script(decl):
    """Heuristic: a u16 array whose body holds `ftAnim*` macro calls.
    These are figatree animation scripts (AObjEvent16-style); the runtime
    walks them from any u16 offset, so mid-script entry-point references
    in .reloc are legitimate."""
    if decl.ctype != "u16" or decl.is_pointer:
        return False
    for _, txt in decl.body:
        s = _strip_comments(txt).strip()
        if not s or s == "};":
            continue
        return "ftAnim" in s
    return False


# Cache of {file_id: (script_syms_set, ptr_syms_set)} loaded from other
# relocData files for cross-file extern-target validation.
_extern_decl_cache = {}


def _load_extern_decl_info(fid):
    """Load `(script_syms, ptr_syms)` for relocData file `fid` from the
    project tree, caching the result. Used by R004 to recognize extern
    targets whose typing only lives in another file."""
    if fid in _extern_decl_cache:
        return _extern_decl_cache[fid]
    # Resolve fid → src path.
    target_path = None
    src_dir = os.path.dirname(os.path.abspath(__file__))
    # tools/validateRelocFile.py → ../src/relocData/<fid>_*.c
    proj_root = os.path.dirname(src_dir)
    reloc_dir = os.path.join(proj_root, "src", "relocData")
    if os.path.isdir(reloc_dir):
        for fname in os.listdir(reloc_dir):
            if fname.startswith(f"{fid}_") and fname.endswith(".c"):
                target_path = os.path.join(reloc_dir, fname)
                break
    if target_path is None:
        _extern_decl_cache[fid] = (set(), set())
        return _extern_decl_cache[fid]
    try:
        decls, _externs, _lines, _eptr = parse_c(target_path)
    except Exception:
        _extern_decl_cache[fid] = (set(), set())
        return _extern_decl_cache[fid]
    scripts = {d.name for d in decls
               if is_aobjevent32_script(d) or is_figatree_script(d)}
    ptrs = {d.name for d in decls if d.is_pointer}
    _extern_decl_cache[fid] = (scripts, ptrs)
    return _extern_decl_cache[fid]


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


# A line at AObjEvent32 opcode position: single tab + raw hex literal + comma.
# Payload words sit at deeper indent (tab + four spaces) so this only
# matches undecoded *opcode* slots.
_OPCODE_RAW_HEX_RE = re.compile(r"^\t0x[0-9A-Fa-f]+,\s*(?:/\*.*\*/)?\s*$")
# A line at AObjEvent32 payload position OR an opcode mis-indented as
# payload: tab + 4+ spaces + raw hex literal + comma. We need this to
# catch the second R013 variant — opcodes that appear BEFORE the first
# real macro (so they cannot be payload of anything).
_PAYLOAD_RAW_HEX_RE = re.compile(r"^\t {2,}0x[0-9A-Fa-f]+,\s*(?:/\*.*\*/)?\s*$")


def check_aobjevent32_undecoded_opcode(decl, path, diags):
    """R013 — Raw hex word inside an AObjEvent32 script that should be a
    decoded aobjEvent32*() macro. Two variants:
      (a) raw hex at opcode indent (single tab) appearing before the
          script's terminator macro — a missed opcode decode;
      (b) raw hex at payload indent appearing BEFORE the first macro —
          a mis-indented opcode (it cannot be payload of anything).
    Words AFTER the last End()/SetAnim()/Jump() are treated as trailing
    data and not flagged."""
    if decl.ctype != "u32" or decl.is_pointer:
        return
    macros = decl.macro_lines()
    if not macros:
        return  # not a script
    first_macro_ln = macros[0][0]
    terminator_ln = None
    for ln, txt in macros:
        if any(t.rstrip("()") in txt for t in _AOBJ_TERMINATORS):
            terminator_ln = ln
    for ln, txt in decl.body:
        opcode_form = bool(_OPCODE_RAW_HEX_RE.match(txt))
        payload_form = bool(_PAYLOAD_RAW_HEX_RE.match(txt))
        if not (opcode_form or payload_form):
            continue
        raw_word = txt.strip().rstrip(",").strip()
        if "(" in raw_word or "&" in raw_word:
            continue
        # Variant (a): opcode-indent raw hex before terminator.
        # Variant (b): payload-indent raw hex BEFORE the first macro.
        if opcode_form and (terminator_ln is None or ln < terminator_ln):
            diags.append(Diag(
                path, ln, "R013", "warn",
                f"undecoded opcode word in script '{decl.name}' — "
                f"`{raw_word}` should be an `aobjEvent32*()` macro "
                f"(decode the opcode at this slot)"
            ))
        elif payload_form and ln < first_macro_ln:
            diags.append(Diag(
                path, ln, "R013", "warn",
                f"mis-indented opcode word in script '{decl.name}' — "
                f"`{raw_word}` appears at payload indent before any opcode "
                f"macro; it should be an `aobjEvent32*()` call at opcode "
                f"indent"
            ))


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



_WHOLE_TEXT_CACHE = {}


def _whole_text_of(path):
    t = _WHOLE_TEXT_CACHE.get(path)
    if t is None:
        try:
            with open(path) as f:
                t = f.read()
        except OSError:
            t = ""
        _WHOLE_TEXT_CACHE[path] = t
    return t


def check_chain_pointer_target_form(decl, path, diags, script_syms,
                                     mobjsub_array_syms=None,
                                     typed_ptr_array_syms=None,
                                     script_sizes=None):
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
    way to point at a specific element. See also R012, which catches
    the related case of MObjSub.sprites/palettes pointing at a
    wrongly-typed pointer array (e.g. `&MObjSub_ptr_arr[N]` assigned
    to a sprites field that expects `u8 *[]`).

    Skip refs whose target is a known AObjEvent32 script — mid-script
    entry points are legitimate (the runtime walks opcodes from any
    starting offset until it hits End)."""
    is_ptr_arr = is_pointer_array(decl)
    for ln, txt in decl.body:
        if "NULL" in txt:
            continue
        m = _OFFSET_REF_RE.search(txt)
        if m:
            sym = m.group("sym")
            off = int(m.group("off"), 16)
            # `((u8*)script + N)` is exempt ONLY when N is within the
            # script's own body. Past-the-end offsets are reaching into
            # sibling data and must use the sibling's symbol — the
            # script_syms exemption was meant for mid-script entry
            # points only.
            if sym in script_syms:
                body_size = (script_sizes or {}).get(sym, 0)
                if off < body_size:
                    continue
            diags.append(Diag(
                path, ln, "R004", "warn",
                f"'{decl.name}' slot uses `((u8*){sym} + "
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
            # `&X[N]` / `&X[N].field` is legitimate when X is a typed
            # struct array like `MObjSub X[]` — N indexes a real array
            # element (and .field a real member), not byte-offset
            # arithmetic into fused data.
            if mobjsub_array_syms and m.group("sym") in mobjsub_array_syms:
                continue
            # `&X[N].field` member access into a struct array addresses a
            # real field; bare `&X[N]` into ANY homogeneous pointer/data
            # array almost always means the block boundary is wrong (the
            # entries before N are padding or separate data) — the block
            # should be split/rebased so the ref is a bare symbol.
            after = txt[m.end():m.end() + 2]
            is_member = after.startswith(".")
            if is_member and typed_ptr_array_syms and m.group("sym") in typed_ptr_array_syms:
                continue
            # Cross-file struct arrays: an `extern DObjDesc X[];`-style
            # decl types the target as a real struct array, so `&X[N]`
            # (with or without a trailing member access) addresses a
            # genuine element/field, not fused data.
            if re.search(r"^extern\s+(?:DObjDesc|MObjSub|DObjDLLink|Vtx|Gfx|"
                         r"FTModelPart|FTModelPartDesc|Sprite|Bitmap)\s+"
                         + re.escape(m.group("sym")) + r"\s*\[",
                         _whole_text_of(path), re.M):
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
    # Conventional fighter-main bitmask blocks: `<file>_animlock[2]` and
    # `<file>_setup_parts[2]` are u32 bone/part bitmask + terminator pairs.
    # The type is correct; the values are intentionally inline.
    for suffix in ("_animlock", "_setup_parts"):
        if decl.name.endswith(suffix):
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


def check_binary_data_inline(decl, path, diags):
    """R014 — Vtx blocks should reference a `.vtx.inc.c` include rather
    than inlining literal vertex data. Vtx coordinate arrays are heavy
    enough that keeping them inline in the .c file makes the source
    unreadable and obscures the diff against baserom; the convention is
    to extract them to `build/<v>/src/relocData/<file>/<sym>.vtx.inc.c`
    and reference that via `#include`. Pointer arrays (`Vtx *foo[]`) are
    exempt — those are dispatch tables, not raw vertex data. (Gfx
    sentinel arrays like `Gfx X[1] = { gsSPEndDisplayList() }` are
    commonly inlined and not flagged.)"""
    if decl.is_pointer:
        return
    if decl.ctype != "Vtx":
        return
    if any(e == ".vtx.inc.c" for _ln, e, _raw in decl.includes):
        return
    # Inline data — anything in `body` past whitespace constitutes
    # literal entries (the parser already filters blanks and #-directives).
    if not decl.body:
        return
    parts = decl.name.split("_", 1)
    sym_tail = parts[1] if len(parts) > 1 else decl.name
    diags.append(Diag(
        path, decl.start_line, "R014", "warn",
        f"'{decl.name}' (Vtx[{decl.size}]) inlines literal data — "
        f"replace the body with `#include <<FileName>/{sym_tail}.vtx.inc.c>` "
        f"so the extractor regenerates the block from the baserom"
    ))


def check_untyped_data_blob(decl, path, diags, lines=None):
    """R010 — a u8/u16/u32 block backed by a raw `.data.inc.c` include.
    The extractor couldn't classify it; tracked so untyped blobs stay
    visible until typed (Vtx/Gfx/texture/palette/struct) or confirmed as
    genuine raw data. Typed includes (.vtx/.dl/.tex/.palette.inc.c) and
    pointer/struct arrays are exempt."""
    if decl.is_pointer or decl.ctype not in ("u8", "u16", "u32"):
        return
    if any(ext == ".data.inc.c" for _ln, ext, _raw in decl.includes):
        # `/* @raw-data */` in the leading comment confirms the block as
        # genuine raw data (same lookback convention as @tex/@dl-prefix).
        if lines:
            start = max(0, decl.start_line - 7)
            if "@raw-data" in "\n".join(lines[start:decl.start_line]):
                return
        diags.append(Diag(
            path, decl.start_line, "R010", "warn",
            f"'{decl.name}' ({decl.ctype}[{decl.size}]) is an untyped "
            f"`.data.inc.c` blob — type it (Vtx/Gfx/texture/palette/"
            f"struct) or confirm as genuine raw data"))


_DL_INCLUDE_PATH_RE = re.compile(
    r"#include\s+<(?P<path>[^>]+\.dl\.inc\.c)\s*>"
)


def _dl_inc_terminator_ok(c_path, raw_include_line):
    """Return (ok, last_macro_text) for a `.dl.inc.c` include. Resolves
    the include path against `build/<v>/src/relocData/` and reads the
    file; checks that the last non-blank, non-comment macro line is
    `gsSPEndDisplayList(` or `gsSPBranchList(` (both validly terminate
    a DL — End halts, BranchList tail-branches). Returns (None, None)
    if the file cannot be located (so the check is skipped silently
    rather than producing noise on pre-extract checkouts)."""
    m = _DL_INCLUDE_PATH_RE.search(raw_include_line)
    if not m:
        return None, None
    inc_rel = m.group("path").strip()
    # Try each version's build dir.
    bases = [
        os.path.join(PROJECT_DIR, "build", "us", "src", "relocData"),
        os.path.join(PROJECT_DIR, "build", "jp", "src", "relocData"),
    ]
    file_path = None
    for base in bases:
        cand = os.path.join(base, inc_rel)
        if os.path.exists(cand):
            file_path = cand
            break
    if file_path is None:
        return None, None
    try:
        with open(file_path) as f:
            body = f.read()
    except OSError:
        return None, None
    # Walk lines backward to find the last meaningful macro line.
    for ln in reversed(body.split("\n")):
        s = ln.strip()
        if not s:
            continue
        if s.startswith("/*") or s.startswith("//") or s.startswith("*"):
            continue
        # Strip trailing comma and inline comment.
        s = re.sub(r"/\*.*?\*/", "", s).strip().rstrip(",").strip()
        if not s:
            continue
        # Accept macro form: gsSPEndDisplayList(...) or gsSPBranchList(...)
        if s.startswith("gsSPEndDisplayList") or s.startswith("gsSPBranchList"):
            return True, s
        # Accept raw-bytes form: any of these end a DL —
        #   { { 0xDF000000, 0x00000000 } }     (Gfx struct, end)
        #   0xDF000000, 0x00000000             (paired words, end)
        #   { { 0xDE......, ......  } }        (Gfx struct, branch list)
        #   0xDE......                         (raw branch-list word)
        # gsSPEndDisplayList is opcode 0xDF; gsSPBranchList is 0xDE with
        # the LSB of byte 1 set (e.g. 0xDE010000) — we accept any 0xDE
        # high byte since the next 0xDE form (gsSPDisplayList) is
        # actually a sub-DL call, not a terminator. Both share the byte
        # opcode space but gsSPDisplayList doesn't end the DL — it
        # pushes a sub-DL and continues. To be safe we only treat 0xDE
        # as a terminator if the second word starts with `0x00000000`
        # (gsSPBranchList convention has no payload) — otherwise it's
        # a sub-DL call.
        if re.match(r"0xDF000000", s, re.I):
            return True, s
        # Match a paired-word terminator like "0xDF000000, 0x00000000"
        if re.match(r"\{?\s*\{?\s*0xDF000000\s*,\s*0x00000000\s*\}?\s*\}?", s, re.I):
            return True, s
        # F3DEX1-era end-DL opcode (0xB8) — some files carry legacy
        # microcode fragments (e.g. SCStaffroll's unused sprite DLs).
        if re.match(r"\{?\s*\{?\s*0xB8000000\s*,\s*0x00000000\s*\}?\s*\}?", s, re.I):
            return True, s
        return False, s
    return None, None



_DL_PREFIX_RE = re.compile(r"@dl-prefix")
_DL_PREFIX_FILE_CACHE = {}


def _decl_has_dl_prefix_annotation(decl, lines):
    """True if an `@dl-prefix` marker sits in the comment block right
    above the decl (same lookback convention as `@tex`)."""
    if not lines:
        return False
    start = max(0, decl.start_line - 7)
    blob = "\n".join(lines[start:decl.start_line])
    return bool(_DL_PREFIX_RE.search(blob))


def check_dl_termination(decl, c_path, diags, lines=None):
    """R024 — `Gfx X[N]` block's `.dl.inc.c` payload must end with a DL
    terminator (`gsSPEndDisplayList()` or `gsSPBranchList(...)`). An
    unterminated DL means the next adjacent block continues this one
    and the two should be merged into a single `Gfx[N]`. Silently
    skipped if the include file isn't on disk yet."""
    if decl.ctype != "Gfx" or decl.is_pointer:
        return
    dl_incs = [(ln, raw) for ln, ext, raw in decl.includes
               if ext == ".dl.inc.c"]
    if not dl_incs:
        return
    # `/* @dl-prefix */` marks an intentionally unterminated DL: the
    # engine runs it as a setup/prefix fragment (DObjDLLink list_ids with
    # the 0x4000 bit execute a prefix DL and continue with the joint's
    # main DL; matanim setup fragments work the same way).
    if _decl_has_dl_prefix_annotation(decl, lines):
        return
    # Check the LAST include — DLs whose body spans multiple includes
    # are rare, but the terminator should live in the last one.
    _ln, raw = dl_incs[-1]
    ok, last = _dl_inc_terminator_ok(c_path, raw)
    if ok is False:
        diags.append(Diag(
            c_path, decl.start_line, "R024", "warn",
            f"Gfx '{decl.name}' ({decl.size} cmds) doesn't end with "
            f"`gsSPEndDisplayList()` — last macro is `{last}`. "
            f"DLs should terminate with `0xDF000000 0x00000000`; "
            f"the trailing adjacent block likely continues this DL "
            f"and the two should be merged into one Gfx[N]"
        ))


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
    r"(?:\[(\d+)\])?"
)


def check_mobjsub_pointer_array_types(decl, path, diags, decls_by_name,
                                      palette_tables=frozenset()):
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
            refs.append((_ln, m.group(1), int(m.group(2)) if m.group(2) else 0))
    if len(refs) < 2:
        return
    sprites_ln, sprites_target, sprites_base = refs[0]
    palettes_ln, palettes_target, palettes_base = refs[1]

    def entries_of(name):
        d = decls_by_name.get(name)
        if d is None or not d.is_pointer:
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

    def check_role(target_sym, target_ln, field, expected_ctype, base=0,
                   stop=None):
        if target_sym.startswith("0x"):
            return
        target_decl = decls_by_name.get(target_sym)
        if target_decl is None:
            return
        # Fast-path: the target is already typed as the expected pointer
        # array (`u8 *[]` for sprites, `u16 *[]` for palettes).
        if target_decl.is_pointer and target_decl.ctype == expected_ctype:
            return
        # If the target is a typed pointer array of the WRONG base type
        # (e.g. MObjSub.sprites pointing at an `MObjSub *[]` joint-dispatch
        # table), flag the array itself — the field expects a homogenous
        # block-pointer array of `expected_ctype`. This is the smoking gun
        # for "slicing into the middle of a different-purpose pointer
        # array" (e.g. `&Joint_0x0060_post[4]` where Joint_0x0060_post is
        # an MObjSub-dispatch table, not a texture/palette array).
        if (target_decl.is_pointer and target_decl.ctype != "void"
                and target_decl.ctype != expected_ctype):
            if field == "sprites" and target_decl.ctype == "u16":
                return  # palette-swap set referenced through .sprites
            diags.append(Diag(
                path, target_ln, "R012", "warn",
                f"'{decl.name}'.{field} points at '{target_sym}' which "
                f"is `{target_decl.ctype} *[]` — {field} expects "
                f"`{expected_ctype} *[]`. Either retype the target or "
                f"split it: slicing into a heterogeneous pointer array "
                f"often hides a mis-split parent"
            ))
            return
        entries = entries_of(target_sym)
        if entries is None:
            return
        # `&table[N]` sub-range refs: only entries from index N (up to the
        # other field's base, when both point into the SAME table) carry
        # this field's expected type — mixed sprite/palette tables are
        # common in model files.
        if base or stop is not None:
            kept = []
            idx = -1
            d2 = decls_by_name.get(target_sym)
            body_syms = entries
            # entries_of skips NULLs, so recompute indexes over raw body.
            idxed = []
            i = 0
            for ln2, txt2 in (d2.body if d2 is not None else []):
                s2 = _strip_comments(txt2).strip().rstrip(",").strip()
                if not s2 or s2 == "};":
                    continue
                if s2 != "NULL":
                    m2 = re.match(r"^(?:\(.+?\))?\s*&?\s*([A-Za-z_]\w*)", s2)
                    if m2:
                        idxed.append((i, ln2, m2.group(1)))
                i += 1
            entries = [(ln2, sym2) for (i2, ln2, sym2) in idxed
                       if i2 >= base and (stop is None or i2 < stop)]
        # Palette-swap heuristic at entry level: a "sprites" table whose
        # resolvable entries are mostly u16 palettes is a palette-swap
        # animation set; per-entry complaints add no signal there.
        if field == "sprites":
            kinds = [decls_by_name[s].ctype for _l, s in entries
                     if s in decls_by_name]
            if kinds and sum(1 for k in kinds if k == "u16") * 2 >= len(kinds):
                return
        for ln, sym in entries:
            entry_decl = decls_by_name.get(sym)
            if entry_decl is None:
                continue
            if (expected_ctype == "u8"
                    and ("palette" in sym or "_Lut_" in sym)):
                continue  # palette member of a mixed swap set
            actual = entry_decl.ctype
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

    same = sprites_target == palettes_target
    lo, hi = sorted((sprites_base, palettes_base))
    # Palette-swap animations: a sprites field pointing at a table that is
    # ALSO referenced as palettes (by any MObjSub) legitimately holds u16
    # palette frames — the anim swaps palettes, not pixel data.
    if sprites_target not in palette_tables:
        check_role(sprites_target, sprites_ln, "sprites", "u8", sprites_base,
                   hi if (same and sprites_base == lo) else None)
    check_role(palettes_target, palettes_ln, "palettes", "u16", palettes_base,
               hi if (same and palettes_base == lo) else None)


_TEX_ANNOTATION_RE = re.compile(
    r"@tex\b[^*]*\bfmt\s*=\s*(?P<fmt>[A-Za-z0-9_]+)[^*]*\bdim\s*=\s*"
    r"(?P<w>\d+)\s*x\s*(?P<h>\d+)"
)

# Recognise both convention forms for sprite-set / textured blocks.
_TEX_NAME_RE = re.compile(r"(?:^|_)Tex(?:_0x[0-9A-Fa-f]+|$|_)")


def _decl_has_tex_annotation(decl, lines):
    """Return True if a `/* @tex fmt=... dim=WxH */` annotation sits in
    the comment block immediately preceding `decl`. The annotation may
    span multiple lines or share a line with the decl head."""
    # Search up to 6 lines of leading comments / blank lines.
    start = max(0, decl.start_line - 7)
    end = decl.start_line  # 1-based — slice end-exclusive
    blob = "\n".join(lines[start:end])
    return bool(_TEX_ANNOTATION_RE.search(blob))


_BITMAP_OWNED_CACHE = {}


def _bitmap_owned_names(path, lines):
    """Names referenced from any `Bitmap X[] = { ... };` initializer in the
    file. Sprite/Bitmap-owned textures carry their fmt/dims in the Sprite
    struct and are previewed by the sprite pipeline — they don't need an
    `@tex` annotation."""
    cached = _BITMAP_OWNED_CACHE.get(path)
    if cached is not None:
        return cached
    text = "\n".join(lines)
    names = set()
    for m in re.finditer(r"\bBitmap\s+\w+\s*\[[^\]]*\]\s*=\s*\{(.*?)\};",
                         text, re.DOTALL):
        names.update(re.findall(r"[A-Za-z_]\w+", m.group(1)))
    _BITMAP_OWNED_CACHE[path] = names
    return names


def check_tex_preview_annotation(decl, path, diags, lines):
    """R016 — texture blocks need `@tex fmt=… dim=WxH` annotation so the
    PNG previewer can render them. Two derivation paths exist (walk the
    DLs in the expanded view, or read the owning MObjSub's `block_fmt` /
    `block_siz` / `unk38` / `unk3A` fields and apply across its sprites
    array), both implemented by `tools/annotateTexBlocks.py` and
    `tools/annotateMObjSubSprites.py`. The validator just flags the
    missing annotation; run the annotators to fix.

    Scope: any `u8 X[N]` decl whose include uses a tex-format extension
    (`.tex.inc.c`, `.i4.inc.c`, `.ci4.inc.c`, …) or whose symbol name
    matches the `Tex_0xNNNN` convention. Untyped `.data.inc.c` and
    palette blocks are out of scope."""
    if decl.is_pointer or decl.ctype != "u8":
        return
    tex_exts = (".tex.inc.c", ".i4.inc.c", ".i4c.inc.c", ".ci4.inc.c",
                ".ci8.inc.c", ".ia8.inc.c", ".rgba16.inc.c", ".rgba32.inc.c")
    has_tex_include = any(ext in tex_exts for _ln, ext, _raw in decl.includes)
    looks_like_tex = bool(_TEX_NAME_RE.search(decl.name))
    if not (has_tex_include or looks_like_tex):
        return
    # Pad fragments split off texture blocks (e.g. `Tex_0xNNNN_jp_pad`)
    # and blocks too small to be a meaningful texture aren't previewable
    # images — no annotation needed.
    if decl.name.endswith('_pad') or (decl.size or 0) < 16:
        return
    if _decl_has_tex_annotation(decl, lines):
        return
    if decl.name in _bitmap_owned_names(path, lines):
        return
    diags.append(Diag(
        path, decl.start_line, "R016", "warn",
        f"texture '{decl.name}' (u8[{decl.size}]) has no "
        f"`@tex fmt=… dim=WxH` annotation above the decl — the PNG "
        f"previewer falls back to dimension-guessing. Run "
        f"`tools/annotateTexBlocks.py` (walks the DL to derive "
        f"fmt/dim/LUT) and/or `tools/annotateMObjSubSprites.py` "
        f"(applies the owning MObjSub's block_fmt/dim across the "
        f"sprites array, propagating palettes too) to fix"))


_MOBJSUB_FMT_LINE_RE = re.compile(
    r"^\s*(?P<f>[A-Za-z_][A-Za-z_0-9]*|\d+|0x[0-9A-Fa-f]+)\s*,\s*"
    r"(?P<s>[A-Za-z_][A-Za-z_0-9]*|\d+|0x[0-9A-Fa-f]+)\s*,?\s*$"
)


def _value_lines(decl):
    """Return [(line_no, stripped)] for body lines that hold initializer
    values — stripping comments, the opening `{`, includes, and blank
    lines. Used by check_mobjsub_format_constants to walk the MObjSub
    initializer field-by-field."""
    out = []
    for ln, txt in decl.body:
        s = _strip_comments(txt).strip()
        if not s or s.startswith("#"):
            continue
        # Drop a leading `{` (the per-element opener for array bodies)
        # and trailing `},` / `}`.
        s = s.lstrip("{").rstrip(",").rstrip().rstrip("}").rstrip(",").strip()
        if not s:
            continue
        out.append((ln, s))
    return out


def check_mobjsub_format_constants(decl, path, diags):
    r"""R015 — MObjSub `fmt`/`siz` and `block_fmt`/`block_siz` fields must
    use the `G_IM_FMT_*` / `G_IM_SIZ_*` macros, not raw integers.

    The MObjSub initializer body is positional:
      [0] pad00 (u16)
      [1] fmt, siz                  ← line 2 — typically `G_IM_FMT_X, G_IM_SIZ_Y`
      [2] sprites (void**)
      [3] unk08,0A,0C,0E (4x u16)
      [4] unk10 (s32)
      [5] trau, trav (2x f32)
      [6] scau, scav (2x f32)
      [7] unk24, unk28 (2x f32)
      [8] palettes (void**)
      [9] flags (u16)
      [10] block_fmt, block_siz     ← line 11 — typically `G_IM_FMT_X, G_IM_SIZ_Y`
      ... rest

    Lines [1] and [10] should match `^G_IM_FMT_\w+, G_IM_SIZ_\w+$`. If
    they hold bare digits / hex (e.g. `3, 2`), flag with the suggested
    macro names. Hand-typed MObjSubs sometimes go in as raw ints when
    decoded from a binary walk."""
    if decl.ctype != "MObjSub" or decl.is_pointer:
        return
    vals = _value_lines(decl)
    # Skip array-of-MObjSub: check each element's first ~12 value-lines.
    # `MObjSub X[1] = { { ... } };` has the same flat order as the single
    # form once `{` and `}` are stripped.
    if len(vals) < 11:
        return
    for idx, label in ((1, "fmt/siz"), (10, "block_fmt/block_siz")):
        if idx >= len(vals):
            continue
        ln, text = vals[idx]
        m = _MOBJSUB_FMT_LINE_RE.match(text)
        if not m:
            continue
        f_tok = m.group("f")
        s_tok = m.group("s")
        f_is_macro = f_tok.startswith("G_IM_FMT_")
        s_is_macro = s_tok.startswith("G_IM_SIZ_")
        if f_is_macro and s_is_macro:
            continue
        # Resolve raw → macro name suggestion.
        fmt_map = {0: "G_IM_FMT_RGBA", 1: "G_IM_FMT_YUV", 2: "G_IM_FMT_CI",
                   3: "G_IM_FMT_IA",   4: "G_IM_FMT_I"}
        siz_map = {0: "G_IM_SIZ_4b", 1: "G_IM_SIZ_8b",
                   2: "G_IM_SIZ_16b", 3: "G_IM_SIZ_32b"}
        try:
            f_int = int(f_tok, 0)
            s_int = int(s_tok, 0)
        except ValueError:
            continue
        f_name = fmt_map.get(f_int, f"<unknown fmt {f_int}>")
        s_name = siz_map.get(s_int, f"<unknown siz {s_int}>")
        diags.append(Diag(
            path, ln, "R015", "warn",
            f"MObjSub '{decl.name}' {label} uses raw `{f_tok}, {s_tok}` "
            f"— replace with `{f_name}, {s_name}` so the format/size are "
            f"readable and grep-able"))


def _collect_pointer_targets(decl):
    """Walk a pointer-array decl's body, returning a list of target
    symbol names (None for NULL/0 entries). Returns None if any entry
    isn't a recognized form (raw hex, opcode macro, etc.). Used by
    R021 — accepts `(T *)dSym`, `(T *)(dSym)`, `(T *)&dSym[N]`, and
    bare `dSym` / `&dSym[N]` forms."""
    targets = []
    for ln, txt in decl.body:
        s = txt.strip().rstrip(",").strip()
        if not s or s.startswith("/*") or s.startswith("//"):
            continue
        if s == "NULL" or s == "0":
            targets.append(None); continue
        # (T *)dSym | (T *)(dSym) | (T *)&dSym[N] | (T *)((u8*)dSym + N)
        m = re.match(
            r"^\((?:void|MObjSub|AObjEvent32|u32|u16|u8|Gfx|Vtx)\s*\*+\)\s*"
            r"(?:\(\s*\(u8\s*\*\)\s*[^)]*\)|"   # (u8*) cast variant — disqualify
            r"\(?\s*&?\s*(d[A-Za-z_][A-Za-z_0-9]*)"
            r"(?:\s*\[[^\]]*\])?\s*\)?\s*)$", s)
        if m and m.group(1):
            targets.append(m.group(1)); continue
        # Bare dSym (array-decay)
        m = re.match(r"^&?\s*(d[A-Za-z_][A-Za-z_0-9]*)"
                      r"(?:\s*\[[^\]]*\])?\s*$", s)
        if m:
            targets.append(m.group(1)); continue
        return None  # non-cast entry — bail
    return targets


def _decl_stars(decl, lines):
    """Count `*` in the decl's head line (between type keyword and name).
    `MObjSub  *X[]` → 1, `AObjEvent32 **X[]` → 2, `MObjSub X[]` → 0."""
    head = lines[decl.start_line - 1]
    # Slice between type keyword and decl name. Cheaper: count `*` that
    # precede the decl's name occurrence on that line.
    idx = head.find(decl.name)
    if idx < 0:
        return 1 if decl.is_pointer else 0
    return head[:idx].count("*")


def check_pointer_indirection_undertyped(decl, path, diags,
                                          decls_by_name, lines,
                                          script_syms=None):
    """R021 — Pointer-table decl `T *X[]` whose every non-NULL entry
    casts a symbol Y, and Y is itself a typed array of `T *[]` (or, for
    `void *X[]`, `T[]`) — the C type misses one level of indirection.

    Catches four concrete shapes:
      void  *X[]  whose entries target `MObjSub Y[]`            → MObjSub *
      MObjSub *X[]  whose entries target `MObjSub *Y[]`         → MObjSub **
      AObjEvent32 *X[] whose entries target `AObjEvent32 *Y[]`  → AObjEvent32 **
      u32 *X[]   whose entries target `u32 Y[]` AObjEvent32     → AObjEvent32 *
                 script bodies (script_syms-based detection;
                 same indirection level, just the right pointee
                 type — same pattern as MVOpeningClashWallpaper
                 LL/LR/UL/UR sub-tables)

    Skips bodies with non-cast entries (raw hex, opcode macros) and
    decls whose body holds an `#include` (typed-include arrays)."""
    if not decl.is_pointer:
        return
    if decl.includes:
        return
    stars = _decl_stars(decl, lines)
    decl_type = f"{decl.ctype} {'*' * stars}".strip()
    # Special case: `u32 *X[]` of AObjEvent32-script pointers should be
    # `AObjEvent32 *X[]`. Same indirection level, just the right pointee
    # type. Reported only when every non-NULL target is in script_syms.
    if decl_type == "u32 *" and script_syms:
        targets = _collect_pointer_targets(decl)
        if targets is None:
            return  # non-cast entry — skip
        non_null = [t for t in targets if t]
        if non_null and all(t in script_syms for t in non_null):
            diags.append(Diag(
                path, decl.start_line, "R021", "warn",
                f"'{decl.name}' is typed `u32 *` but its entries target "
                f"AObjEvent32-script `u32[]` bodies — retype as "
                f"`AObjEvent32 *` (same indirection level, correct "
                f"pointee type)"))
        return
    if decl_type == "void *":
        expected_target = ("MObjSub", 0)
        new_type = "MObjSub *"
    elif decl_type == "MObjSub *":
        expected_target = ("MObjSub", 1)
        new_type = "MObjSub **"
    elif decl_type == "AObjEvent32 *":
        expected_target = ("AObjEvent32", 1)
        new_type = "AObjEvent32 **"
    else:
        return
    targets = _collect_pointer_targets(decl)
    if targets is None:
        return
    non_null = [t for t in targets if t]
    if not non_null:
        return
    for t in non_null:
        td = decls_by_name.get(t)
        if td is None:
            return
        td_stars = _decl_stars(td, lines)
        if (td.ctype, td_stars) != expected_target:
            return
    diags.append(Diag(
        path, decl.start_line, "R021", "warn",
        f"'{decl.name}' is typed `{decl_type}` but its entries target "
        f"`{expected_target[0]}{' *' * expected_target[1]}[]` arrays "
        f"— retype as `{new_type}` (one extra level of indirection)"))


_U32_PTR_CAST_RE = re.compile(r"^\(u32\)\(?\s*&?\s*(d[A-Za-z_][A-Za-z_0-9]*)"
                                r"(?:\s*\[[^\]]*\])?\s*\)?$")


def check_u32_pointer_table_undertyped(decl, path, diags, decls_by_name,
                                          lines):
    """R023 — `u32 X[N]` whose every non-NULL entry is `(u32)dSym` and
    every target `dSym` is itself a typed array. The decl should be a
    typed pointer table instead of raw `u32`. Reports the inferred
    pointer type (`u8 *` for textures, `Gfx *` for DLs,
    `MObjSub **` when targets are themselves `MObjSub *[]`, etc.).

    Sentinels accepted as NULL: bare `NULL`, `0`, and
    `aobjEvent32End()` (= 0x00000000) — the last appears at the tail
    of End-terminated u32 pointer-tables (an AObjEvent32 chain
    convention where the trailing zero word doubles as a NULL ptr)."""
    if decl.ctype != "u32" or decl.is_pointer:
        return
    if decl.includes:
        return
    targets = []
    for ln, txt in decl.body:
        s = txt.strip().rstrip(",").strip()
        if not s or s.startswith("/*") or s.startswith("//"):
            continue
        if s == "NULL" or s == "0" or s == "aobjEvent32End()":
            targets.append(None); continue
        m = _U32_PTR_CAST_RE.match(s)
        if not m:
            return  # non-cast entry — not a uniform pointer table
        targets.append(m.group(1))
    non_null = [t for t in targets if t]
    if not non_null:
        return
    target_types = set()
    for t in non_null:
        td = decls_by_name.get(t)
        if td is None:
            return
        td_stars = _decl_stars(td, lines)
        target_types.add((td.ctype, td_stars))
    if len(target_types) != 1:
        return  # mixed targets — leave alone
    (tt, ts) = target_types.pop()
    new_type = f"{tt} {'*' * (ts + 1)}"
    diags.append(Diag(
        path, decl.start_line, "R023", "warn",
        f"'{decl.name}' is typed `u32[]` but its entries are `(u32)dSym` "
        f"casts targeting `{tt}{' *' * ts}[]` arrays — retype as "
        f"`{new_type.strip()}`"))


_MOBJSUB_SIZE = 0x78  # 120
# Empirical unk4C values across all typed MObjSubs in the corpus. The
# canonical value is 0x00022205 (74% of MObjSubs); the rest are minor
# variants that all share the low-byte/mid-byte pattern. 0x00000000 is
# DELIBERATELY EXCLUDED — entries with unk4C=0 turned out to be
# mistyped (see EFCommonEffects1 / MVCommon revert to u8 .data.inc.c).
_MOBJSUB_SIGS = frozenset(bytes.fromhex(h) for h in (
    "00022205",  # canonical (574 entries)
    "00002005",  # 97 entries
    "00002205",  # 63 entries
    "00002001",  # 23 entries
    "00062205",  # 10 entries
    "00002004",  #  2 entries
    "000E2205",  #  1 entry
))


def _read_inc_bytes(inc_path_root):
    """Read raw bytes from `build/us/src/relocData/<inc_path>.data.inc.c`,
    parsing comma-separated `0xNN` hex tokens. Returns None if missing."""
    full = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData",
                         inc_path_root + ".data.inc.c")
    if not os.path.isfile(full):
        return None
    with open(full) as f:
        text = f.read()
    hexes = re.findall(r"0x([0-9A-Fa-f]{2})", text)
    if not hexes:
        return b""
    return bytes(int(h, 16) for h in hexes)


def check_mobjsub_signature_in_untyped(decl, path, diags):
    """R022 — Untyped u8/u16/u32 `.data.inc.c` blob whose raw bytes
    contain a recognized MObjSub `unk4C` signature at a position
    consistent with a MObjSub-stride layout (offset ≡ 0x4C mod 0x78,
    within a block whose size is a multiple of 0x78). Strong signal
    that the parent block is a mistyped `MObjSub[N]`.

    `unk4C = 0x00000000` is DELIBERATELY NOT a recognized signature —
    blocks where unk4C is all-zero turned out to be mistyped on closer
    inspection (e.g. `dEFCommonEffects1_CommonSpark_MObjSub`,
    `dMVCommon_RoomBackgroundMObjSub_MObjSub`)."""
    if decl.is_pointer:
        return
    if decl.ctype not in ("u8", "u16", "u32"):
        return
    if not decl.includes:
        return
    for ln, ext, _raw in decl.includes:
        if ext != ".data.inc.c":
            continue
        m = re.search(r"#include\s+<([^>]+)\.data\.inc\.c\s*>", _raw)
        if not m:
            continue
        b = _read_inc_bytes(m.group(1))
        if b is None or len(b) < _MOBJSUB_SIZE:
            continue
        if len(b) % _MOBJSUB_SIZE != 0:
            continue
        bad = []
        for k in range(len(b) // _MOBJSUB_SIZE):
            off = k * _MOBJSUB_SIZE + 0x4C
            sig = b[off:off + 4]
            if sig in _MOBJSUB_SIGS:
                bad.append((k, sig.hex().upper()))
        if bad:
            sigs_seen = sorted({s for _, s in bad})
            diags.append(Diag(
                path, decl.start_line, "R022", "warn",
                f"untyped '{decl.name}' ({decl.ctype}[{decl.size}]) carries "
                f"MObjSub.unk4C signature(s) {sigs_seen} at MObjSub-stride "
                f"offsets {[hex(k * _MOBJSUB_SIZE + 0x4C) for k, _ in bad]} "
                f"— likely a mistyped `MObjSub[{len(b) // _MOBJSUB_SIZE}]`"
            ))


def check_trailing_pad(c_path, lines, diags):
    """R017 — files must not end with a `PAD(N);` macro. Object alignment
    is governed by the linker / next-section start; trailing PAD bytes
    inflate the .data section and aren't byte-relevant. If the final
    block is a PAD, drop it."""
    # Walk backward, skipping blank lines and comments.
    i = len(lines) - 1
    while i >= 0:
        s = lines[i].strip()
        if not s:
            i -= 1
            continue
        if s.startswith("/*") or s.startswith("//") or s.startswith("*"):
            i -= 1
            continue
        # Match the PAD macro.
        m = _PAD_RE.match(lines[i])
        if m:
            diags.append(Diag(
                c_path, i + 1, "R017", "warn",
                f"file ends with `PAD({m.group('n')});` — trailing pads "
                f"should be removed (the build alignment handles tail "
                f"padding automatically)"))
        return


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
    "Vec2h": 4,        # paired s16 (x,y)
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
    for line_no, kind, ptr, target, comment in entries:
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
            # Cross-file lookup: if this is an extern target with a
            # `# -> file NNN` annotation, load that file's local
            # script/ptr_sym info and re-check.
            if kind == "extern" and comment:
                fm = _EXTERN_FID_RE.search(comment)
                if fm:
                    fid = int(fm.group("fid"))
                    ext_scripts, ext_ptrs = _load_extern_decl_info(fid)
                    if sym in ext_scripts:
                        continue
                    if sym in ext_ptrs and off % 4 == 0:
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
    decls, externs, lines, extern_ptr_syms = parse_c(c_path)
    reloc_path = c_path[:-2] + ".reloc"
    entries = parse_reloc(reloc_path)
    # Pre-compute set of decl names that are AObjEvent32 scripts (u32
    # arrays with aobjEvent32 macros). Used by R004 to skip mid-script
    # entry-point references.
    script_syms = {d.name for d in decls if is_aobjevent32_script(d)}
    # For R004's mid-script exemption: byte size of each script's
    # declared body. A `((u8*)script + N)` ref past this size is
    # reaching into sibling data and is NOT a legitimate mid-script
    # entry point — flag it.
    script_sizes = {
        d.name: (d.size * 4) for d in decls
        if d.name in script_syms and d.size > 0
    }
    # Pre-compute set of decl names that are MObjSub arrays. `&X[N]` is
    # legitimate when X is a MObjSub[] (the N is an element index, not
    # byte arithmetic). R004 skips those.
    mobjsub_array_syms = {
        d.name for d in decls
        if d.ctype == "MObjSub" and not d.is_pointer and d.size > 0
    }
    # Pre-compute set of typed pointer-array decls — `T *X[]` where
    # T != void. `&X[N]` against one of these is a legitimate element
    # address, same as for MObjSub[] arrays.
    typed_ptr_array_syms = {
        d.name for d in decls
        if d.is_pointer and d.ctype != "void" and d.size > 0
    }

    diags = []
    decl_after = {}
    for i, d in enumerate(decls):
        decl_after[d.name] = decls[i + 1] if i + 1 < len(decls) else None
    for d in decls:
        if "R001" in enabled_rules or "R002" in enabled_rules:
            check_aobjevent32_termination(d, c_path, diags)
        if "R003" in enabled_rules:
            check_chain_pointer_raw_hex(d, c_path, diags)
        if "R004" in enabled_rules:
            check_chain_pointer_target_form(d, c_path, diags, script_syms,
                                             mobjsub_array_syms,
                                             typed_ptr_array_syms,
                                             script_sizes)
        if "R005" in enabled_rules:
            check_raw_hex_chunks(d, c_path, diags, lines)
        if "R006" in enabled_rules:
            check_palette_format(d, c_path, diags, lines)
        if "R007" in enabled_rules:
            check_include_type_match(d, c_path, diags)
        if "R010" in enabled_rules:
            check_untyped_data_blob(d, c_path, diags, lines)
        if "R011" in enabled_rules:
            check_dobj_sentinel(d, c_path, diags)
        if "R013" in enabled_rules:
            check_aobjevent32_undecoded_opcode(d, c_path, diags)
        if "R014" in enabled_rules:
            check_binary_data_inline(d, c_path, diags)
        if "R015" in enabled_rules:
            check_mobjsub_format_constants(d, c_path, diags)
        if "R016" in enabled_rules:
            check_tex_preview_annotation(d, c_path, diags, lines)
        if "R018" in enabled_rules:
            check_ftmotion_raw_hex(d, c_path, diags)
        if "R019" in enabled_rules:
            check_ftmotion_termination(d, c_path, diags,
                                        decl_after.get(d.name))
        if "R020" in enabled_rules:
            check_ftmotion_terminator_not_last(d, c_path, diags, lines)
        if "R022" in enabled_rules:
            check_mobjsub_signature_in_untyped(d, c_path, diags)
    # R004/R019/R020 hits inside `#if defined(REGION_*)` regions are
    # exempt: the data is version-divergent — offsets and successor
    # blocks differ per version, so split symbols can't be shared and
    # fall-through analysis is meaningless across an #else boundary.
    if any(dg.rule in ("R004", "R019", "R020") for dg in diags):
        guarded = set()
        depth = 0
        for i, ln in enumerate(lines, 1):
            s = ln.strip()
            if s.startswith("#if"):
                depth += 1
            elif s.startswith("#endif"):
                depth = max(0, depth - 1)
            elif depth > 0:
                guarded.add(i)
            if s.startswith(("#if", "#else", "#elif")):
                guarded.add(i)
        diags = [dg for dg in diags
                 if not (dg.rule in ("R004", "R019", "R020")
                         and dg.line in guarded)]

    if ("R012" in enabled_rules or "R021" in enabled_rules
            or "R023" in enabled_rules):
        decls_by_name = {d.name: d for d in decls}
        if "R012" in enabled_rules:
            palette_tables = set()
            for d in decls:
                if d.ctype != "MObjSub":
                    continue
                refs12 = []
                for _ln12, txt12 in d.body:
                    for m12 in _MOBJ_SPRITES_PALETTES_RE.finditer(txt12):
                        refs12.append(m12.group(1))
                if len(refs12) >= 2:
                    palette_tables.add(refs12[1])
            for d in decls:
                check_mobjsub_pointer_array_types(d, c_path, diags, decls_by_name,
                                                  palette_tables)
        if "R021" in enabled_rules:
            for d in decls:
                check_pointer_indirection_undertyped(d, c_path, diags,
                                                      decls_by_name, lines,
                                                      script_syms)
        if "R023" in enabled_rules:
            for d in decls:
                check_u32_pointer_table_undertyped(d, c_path, diags,
                                                    decls_by_name, lines)
    if "R024" in enabled_rules:
        for d in decls:
            check_dl_termination(d, c_path, diags, lines)
    if "R017" in enabled_rules:
        check_trailing_pad(c_path, lines, diags)
    if "R003" in enabled_rules or "R004" in enabled_rules:
        type_by_sym = {d.name: d.ctype for d in decls}
        type_by_sym.update(externs)  # extern type also helps
        ptr_syms = {d.name for d in decls if d.is_pointer}
        ptr_syms |= extern_ptr_syms
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


ALL_RULES = ["R001", "R002", "R003", "R004", "R005", "R006", "R007", "R008", "R021", "R022",
             "R023", "R024",
             "R009", "R010", "R011", "R012", "R013", "R014", "R015", "R016",
             "R017", "R018", "R019", "R020"]


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
            "  R013  Undecoded opcode word in an AObjEvent32 script\n"
            "  R014  Vtx block inlines literal data instead of using a `.vtx.inc.c` include\n"
            "  R015  MObjSub fmt/siz fields use raw ints instead of G_IM_FMT_*/G_IM_SIZ_*\n"
            "  R016  Texture block missing `@tex fmt=… dim=WxH` annotation for previewer\n"
            "  R017  File ends with a trailing PAD(N);\n"
            "  R018  Raw hex inside an `ftMotionCommand` script body\n"
            "  R019  ftMotionCommand script doesn't end with End/Goto/Return\n"
            "  R020  ftMotionCommand script has a hard terminator (End/Goto/Return) followed by non-terminator macros (split the script)\n"
            "  R024  Gfx DL doesn't end with gsSPEndDisplayList() / gsSPBranchList() — adjacent block likely continues it\n"
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
