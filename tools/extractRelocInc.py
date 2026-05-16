#!/usr/bin/env python3
"""Regenerate `.inc.c` companions for typed relocData blocks from the ROM.

For each converted relocData file, walks its manifest in order, uses the
committed wrapper declarations to compute per-block offsets/sizes, and
writes the raw bytes of every Vtx / LUT / Tex wrapper to a fresh
`build/src/relocData/<Name>/<block>.{vtx,palette,tex}.inc.c`.

The committed wrappers stay small and sourceable — they declare the type
and the array count — while the copyrighted raw bytes are re-derived
from `assets/relocData/<fid>.vpk0.bin` every time `make extract` runs.
"""

import argparse
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_RELOC = os.path.join(PROJECT_DIR, "src", "relocData")
# BUILD_RELOC and ASSET_DIR default to the US tree; main() rebinds them via
# _bind_version() once --version is parsed.
BUILD_RELOC = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")


def _assets_root_for(version):
    return os.path.join(PROJECT_DIR, "assets", version, "relocData")


def _bind_version(version):
    """Rebind module-scoped paths to a specific version. Callers from inside
    the build pipeline pass an explicit version; legacy callers that rely on
    auto-detect can omit it."""
    global ASSET_DIR, BUILD_RELOC
    ASSET_DIR = _assets_root_for(version)
    BUILD_RELOC = os.path.join(PROJECT_DIR, "build", version, "src", "relocData")

sys.path.insert(0, SCRIPT_DIR)
from genRelocMaster import parse_manifest, compute_block_size

try:
    import pygfxd
    _HAS_PYGFXD = True
except ImportError:
    _HAS_PYGFXD = False

try:
    import n64img.image as _n64img
    _HAS_N64IMG = True
except ImportError:
    _HAS_N64IMG = False


def _resolve_fid_for_version(fid):
    """When the extracted assets are from a different version (e.g. JP),
    the same file may live at a different fid. Resolve *either* a US-era
    or JP-era fid to the fid whose binary is currently extracted.

    The same numeric fid can mean different things in US and JP (e.g.
    US 299 = MarioSecondaryImage, JP 299 = LinkModel). We resolve by
    checking: if the fid already names a file in the current version
    AND an inline master .c exists for that name, the fid is native.
    Otherwise, remap via the US name table."""
    version = _detect_version()
    if not version or version == "us":
        return fid  # US assets — fid is already correct
    # Check if the fid names a file in the current version AND we can
    # find its inline master — that confirms this is a native JP fid.
    cur_name = _name_for_fid(fid, version)
    if cur_name:
        import glob
        cands = [p for p in glob.glob(
            os.path.join(SRC_RELOC, f"*_{cur_name}.c"))
            if not p.endswith(".jp.c") and not p.endswith(".us.c")]
        if cands:
            return fid  # Native JP fid with a matching source file
    # Remap from US fid → name → current-version fid
    us_name = _name_for_fid(fid, "us")
    if us_name:
        jp_path = os.path.join(SCRIPT_DIR,
                                f"relocFileDescriptions.{version}.txt")
        if os.path.exists(jp_path):
            with open(jp_path) as f:
                for line in f:
                    s = line.strip()
                    if not s.startswith("-"):
                        continue
                    parts = s.split(":", 1)
                    if len(parts) == 2 and parts[1].strip() == us_name:
                        return int(parts[0].lstrip("-"))
    return fid


def bin_path(fid):
    resolved = _resolve_fid_for_version(fid)
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSET_DIR, f"{resolved}{ext}")
        if os.path.exists(p):
            return p
    # Fallback to original fid in case the resolved one doesn't exist
    if resolved != fid:
        for ext in (".vpk0.bin", ".bin"):
            p = os.path.join(ASSET_DIR, f"{fid}{ext}")
            if os.path.exists(p):
                return p
    return None


def manifest_for(fid):
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f"{fid}_") and fn.endswith(".manifest"):
            return os.path.join(SRC_RELOC, fn)
    return None


def _name_for_fid(fid, version):
    """Look up the file's symbolic name from
    `relocFileDescriptions.<version>.txt`. Returns `None` when the id
    has no name entry (the raw `-NNN:` header row is optional)."""
    path = os.path.join(SCRIPT_DIR,
                         f"relocFileDescriptions.{version}.txt")
    if not os.path.exists(path):
        return None
    with open(path) as f:
        for line in f:
            s = line.strip()
            if s.startswith(f"-{fid:d}:") or s.startswith(f"-{fid:03d}:"):
                name = s.split(":", 1)[1].strip()
                if re.match(r"^_\d+_$", name):
                    return None
                return name
    return None


def inline_master_for(fid):
    """Return the path to the new-style hand-written master .c (inline
    block declarations) for `fid`, or None.

    Resolution priority:
      1. Name lookup via `relocFileDescriptions.<version>.txt`. The
         current version's name for `fid` gets globbed against
         `*_<Name>.c` in `src/relocData/`. This matters because file
         names always encode the US fid, so a JP extract walking
         fid N needs to find the file that represents the SAME
         content under its US-era name.
      2. Fallback: literal `{fid}_*.c` prefix lookup. Only hits when
         the descriptions file is missing or the name isn't committed.
    """
    version = _detect_version() or "us"
    name = _name_for_fid(fid, version)
    if name:
        import glob
        candidates = [p for p in glob.glob(
            os.path.join(SRC_RELOC, f"*_{name}.c"))
            if not p.endswith(".jp.c") and not p.endswith(".us.c")]
        if candidates:
            return candidates[0]
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f"{fid}_") and fn.endswith(".c") \
                and not fn.endswith(".jp.c") and not fn.endswith(".us.c"):
            return os.path.join(SRC_RELOC, fn)
    return None


def _detect_version():
    """Figure out which baserom's assets we should look at. With per-version
    asset trees both can be present at once, so prefer whichever tree the
    caller bound via --version (reflected in ASSET_DIR). Otherwise fall back
    to the first existing per-version CSV."""
    cur_csv = os.path.join(os.path.dirname(ASSET_DIR), "relocData.csv")
    if os.path.exists(cur_csv):
        # ASSET_DIR is .../assets/<v>/relocData; pick its parent dir name.
        return os.path.basename(os.path.dirname(ASSET_DIR))
    for v in ("us", "jp"):
        csv = os.path.join(PROJECT_DIR, "assets", v, "relocData.csv")
        if os.path.exists(csv):
            return v
    return None


# Matches the start of a top-level typed declaration: `<Type> <name>...;`
# optionally wrapped in `static`/`const`. The declaration body (initializer
# list, if any) is consumed by brace-balanced scanning below, so this
# regex only needs to lock on to the opening tokens.
_TOP_DECL_RE = re.compile(
    r"^(?P<static>\s*(?:static\s+)?(?:const\s+)?)"
    r"(?P<type>\w+)\s+"
    r"(?P<ptr>\*+\s*)?"
    r"(?P<name>\w+)"
    r"(?:\s*\[\s*(?P<count>0[xX][0-9A-Fa-f]+|\d*)\s*\])?",
    re.MULTILINE,
)
_INC_RE = re.compile(r'#include\s+[<"](?P<path>[^>"]+\.inc\.c)[>"]')
_PAD_RE = re.compile(r"^\s*PAD\(\s*(?P<n>\d+)\s*\)\s*;", re.MULTILINE)

# Every typed block in the current tree is one of these. The walker skips
# identifiers that don't appear here (e.g. `extern`, `#define`, forward
# declarations).
_SUPPORTED_DECL_TYPES = frozenset({
    "u8", "u16", "u32", "u64", "s8", "s16", "s32", "s64", "f32",
    "Vtx", "Vtx_t", "Gfx", "Bitmap", "DObjDesc", "DObjDLLink", "MObjSub",
    "Sprite", "MPGroundData", "MPGeometryData", "MPItemWeights",
    "MPVertexData", "MPVertexLinks", "MPLineInfo", "MPMapObjData",
    "FTAttributes", "FTThrowHitDesc",
    "WPAttributes", "ITAttributes",
})


def _scan_declaration_body(text, body_start):
    """Given the position just past a declaration's type/name, locate the
    terminating semicolon (for either an `= { ... };` initializer or a
    bare `;` forward decl) and return (body_text, end_pos).

    `body_text` is everything between (and including) the opening `{` and
    the final `}` if present, otherwise the empty string. `end_pos` is the
    index just past the trailing `;`."""
    pos = body_start
    length = len(text)
    # Skip optional `= {` — if present, do brace-balanced scan; if absent,
    # look for the terminating `;`.
    while pos < length and text[pos] in " \t\n\r":
        pos += 1
    if pos < length and text[pos] == "=":
        pos += 1
        while pos < length and text[pos] in " \t\n\r":
            pos += 1
    if pos < length and text[pos] == "{":
        depth = 0
        body_begin = pos
        while pos < length:
            ch = text[pos]
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    pos += 1
                    break
            pos += 1
        body = text[body_begin:pos]
        # Consume trailing `;`
        while pos < length and text[pos] in " \t\n\r":
            pos += 1
        if pos < length and text[pos] == ";":
            pos += 1
        return body, pos
    # No initializer — find the `;` and return empty body.
    semi = text.find(";", pos)
    if semi < 0:
        return "", length
    return "", semi + 1


def _count_top_level_initializers(body):
    """Count the number of top-level `{ ... }` groups inside a `{ ... };`
    initializer. Used to size `Type foo[] = { {...}, {...}, ... };`."""
    if not body or body[0] != "{" or body[-1] != "}":
        return 0
    inner = body[1:-1]
    count = 0
    depth = 0
    for ch in inner:
        if ch == "{":
            if depth == 0:
                count += 1
            depth += 1
        elif ch == "}":
            depth -= 1
    return count


# Fixed per-element / per-instance struct sizes used when a declaration's
# array count comes from counting top-level `{}` groups instead of an
# explicit `[N]` bracket. MPGroundData / FTAttributes / FTThrowHitDesc come
# from the IDO sizeof; the others match the N64 SDK layouts.
_FIXED_TYPE_SIZES = {
    "u8":  1, "u16": 2, "u32": 4, "u64": 8,
    "s8":  1, "s16": 2, "s32": 4, "s64": 8, "f32": 4,
    "Vtx": 16, "Vtx_t": 16, "Gfx": 8, "Bitmap": 16,
    "DObjDesc": 44, "DObjDLLink": 8, "MObjSub": 120, "Sprite": 68,
    "MPGroundData": 0xA8,
    "MPItemWeights": 20,
    "MPGeometryData": 0x1C,
    "MPVertexData": 6,    # Vec2h pos + u16 flags
    "MPVertexLinks": 4,   # u16 vertex1, vertex2
    "MPLineInfo": 18,     # u16 yakumono_id + MPLineData[4] (u16,u16 each)
    "MPMapObjData": 6,    # u16 mapobj_kind + Vec2h pos

    "FTAttributes": 0x488,       # from src/ft/fttypes.h, matches stock main sources
    "FTThrowHitDesc": 0x1C,      # 7 × s32, src/ft/fttypes.h
    "WPAttributes": 52,          # from src/wp/wptypes.h (0x34 bytes)
    "ITAttributes": 72,          # from src/it/ittypes.h (0x48 bytes)
}


def _count_hex_literals(body):
    return len(re.findall(r"0x[0-9A-Fa-f]+", body))


def _count_toplevel_array_entries(body):
    """Count top-level comma-separated entries inside a `{ ... }` array
    initializer body. `body` may include the surrounding braces or just
    the inner text. Macros with internal commas (e.g.
    `aobjEvent32SetVal0Rate(0x002, 0)`) and casts like
    `(u32)((u8*)X + 0x1F4)` are kept as a single entry by tracking
    paren depth. Returns 0 if the body looks empty.
    """
    if not body:
        return 0
    text = body
    if text.lstrip().startswith("{"):
        text = text[text.index("{") + 1:]
    if text.rstrip().endswith("}"):
        text = text[:text.rindex("}")]
    # Strip line + block comments so commas inside `/* ... */` don't count.
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)
    text = re.sub(r"//[^\n]*", "", text)
    depth = 0
    entries = 0
    has_token = False
    for ch in text:
        if ch == "(" or ch == "[" or ch == "{":
            depth += 1
            has_token = True
        elif ch == ")" or ch == "]" or ch == "}":
            if depth > 0:
                depth -= 1
        elif ch == "," and depth == 0:
            if has_token:
                entries += 1
                has_token = False
        elif not ch.isspace():
            has_token = True
    if has_token:
        entries += 1
    return entries


def _classify_decl_virtual_path(type_, inc_path, decl_text):
    """Pick an appropriate filename suffix so `compute_block_size` routes
    each virtual block to the right compute_*_c_size helper.

    The helper dispatches on filename extension (.vtx.c, .dl.c, .palette.c,
    .data.c, .dobjdesc.c, .mobjsub.c) so we just need to pick one whose
    semantics match the declaration we're feeding it."""
    if type_ == "Vtx" or type_ == "Vtx_t":
        return "block.vtx.c"
    if type_ == "Gfx":
        # `Gfx X[] = { gsSPEndDisplayList() };` is a DL terminator stub —
        # compute_dl_c_size doesn't recognise it (it counts `{{}}` pairs),
        # so route those through compute_data_c_size which hard-codes the
        # 8-byte DL_TERMINATOR_SIZE for exactly this pattern.
        if "gsSPEndDisplayList" in decl_text:
            return "block.data.c"
        return "block.dl.c"
    if type_ == "DObjDesc":
        return "block.dobjdesc.c"
    if type_ == "MObjSub":
        return "block.mobjsub.c"
    if type_ == "Sprite" or type_ == "Bitmap":
        return "block.sprite.c"
    if type_ == "u16" and inc_path and inc_path.endswith(".palette.inc.c"):
        return "block.palette.c"
    # Everything else (u8/u16/u32/u64/FTAttributes/MPGroundData/...) goes
    # through compute_data_c_size, which handles both raw-literal arrays
    # and `#include` blobs, plus KNOWN_STRUCT_SIZES hard-coded structs.
    return "block.data.c"


def _virtual_block_text(body_open, body_close, decl_text, type_):
    """Wrap a declaration's raw text in the minimal .c file the compute_*
    helpers expect (a `#include "relocdata_types.h"` plus the single
    declaration). Extra includes for any types referenced by the decl
    keep the file self-consistent for the helper that parses it."""
    extras = []
    if type_ in ("FTAttributes", "FTThrowHitDesc"):
        extras.append('#include <ft/fttypes.h>')
    if type_ == "MPGroundData":
        extras.append('#include <mp/mptypes.h>')
    header = '#include "relocdata_types.h"\n' + "".join(e + "\n" for e in extras)
    return header + "\n" + decl_text


def _strip_inactive_region_branches(text, version):
    """Blank out the inactive half of `#if defined(REGION_JP) / #else /
    #endif` guards in `text`, keeping byte offsets stable so downstream
    position-based slicing keeps working. Each stripped character is
    replaced with a space (newlines preserved) so lines/columns line up
    with the original. Handles simple, non-nested REGION_JP guards —
    the only form used by relocData masters."""

    def blank(s):
        return "".join(c if c == "\n" else " " for c in s)

    want_jp = (version == "jp")
    out = []
    pos = 0
    # Match both `#if defined(REGION_JP)` and `#if !defined(REGION_JP)`
    if_re = re.compile(
        r"^[ \t]*#if\s+(!?\s*defined\s*\(\s*REGION_JP\s*\))[^\n]*\n",
        re.MULTILINE)
    else_re = re.compile(r"^[ \t]*#else\b[^\n]*\n", re.MULTILINE)
    endif_re = re.compile(r"^[ \t]*#endif\b[^\n]*\n", re.MULTILINE)

    while True:
        m_if = if_re.search(text, pos)
        if m_if is None:
            out.append(text[pos:])
            break
        out.append(text[pos:m_if.start()])
        out.append(blank(m_if.group(0)))
        # Check if negated: `!defined(REGION_JP)` flips the sense
        is_negated = m_if.group(1).startswith("!")
        first_is_jp = not is_negated  # #if defined → first branch is JP
        jp_start = m_if.end()
        m_end = endif_re.search(text, jp_start)
        if m_end is None:
            out.append(text[jp_start:])
            break
        m_else = else_re.search(text, jp_start, m_end.start())
        if m_else is not None:
            first_body = text[jp_start:m_else.start()]
            second_body = text[m_else.end():m_end.start()]
            jp_body = first_body if first_is_jp else second_body
            us_body = second_body if first_is_jp else first_body
            out.append(first_body if (want_jp == first_is_jp) else blank(first_body))
            out.append(blank(m_else.group(0)))
            out.append(second_body if (want_jp != first_is_jp) else blank(second_body))
        else:
            first_body = text[jp_start:m_end.start()]
            keep = (want_jp == first_is_jp)
            out.append(first_body if keep else blank(first_body))
        out.append(blank(m_end.group(0)))
        pos = m_end.end()
    return "".join(out)


_TYPEDEF_STRUCT_RE = re.compile(
    r"typedef\s+struct\s*\{([^{}]*)\}\s*(\w+)\s*;",
    re.DOTALL,
)
_PRIM_SIZES = {
    "u8": 1, "s8": 1,
    "u16": 2, "s16": 2,
    "u32": 4, "s32": 4,
    "u64": 8, "s64": 8,
    "f32": 4,
}


def _collect_local_typedef_info(text):
    """Return `{TypedefName: (byte_size, [(field_type, array_len)...])}` for
    `typedef struct { ... } Name;` blocks whose fields are all primitives
    we can size. The field list is in declaration order and drives the
    per-struct initializer emitter."""
    info = {}
    for m in _TYPEDEF_STRUCT_RE.finditer(text):
        body = m.group(1)
        name = m.group(2)
        total = 0
        fields = []
        for fm in re.finditer(
                r"\b(u8|s8|u16|s16|u32|s32|u64|s64|f32)\s+\w+"
                r"(?:\s*\[\s*(\d+)\s*\])?\s*;",
                body):
            t = fm.group(1)
            n = int(fm.group(2)) if fm.group(2) else 1
            total += _PRIM_SIZES[t] * n
            fields.append((t, n))
        # Bail out if the typedef contains anything other than primitive
        # scalar fields — we'd rather miss the size than guess wrong.
        if total > 0 and fields:
            info[name] = (total, fields)
    return info


def _collect_local_typedef_sizes(text):
    return {k: v[0] for k, v in _collect_local_typedef_info(text).items()}


def _blank_typedef_struct_blocks(text):
    return _TYPEDEF_STRUCT_RE.sub(
        lambda m: " " * len(m.group(0)), text)


def parse_master_c(path):
    """Walk a hand-written inline master .c and yield a sequence of

        ('pad', byte_count)
        ('block', {'type': str, 'name': str, 'size': int,
                   'inc_path': 'Sub/Foo.inc.c' or None})

    in source order. Each declaration's size comes from extracting just
    that declaration into a temporary virtual block .c file and calling
    `genRelocMaster.compute_block_size` on it — the same helper the old
    manifest-driven pipeline used for per-block files, so the results
    stay byte-accurate."""
    import tempfile
    try:
        from genRelocMaster import compute_block_size
    except ImportError:  # pragma: no cover — shouldn't happen in practice
        raise RuntimeError("genRelocMaster.compute_block_size is required")

    with open(path) as f:
        raw = f.read()
    # Resolve `#if defined(REGION_JP) / #else / #endif` guards for the
    # current version so the scanner only sees declarations from the
    # active branch. The inactive branch is blanked out (spaces, same
    # length) so byte offsets in `raw` still line up with `scan_text`
    # for the decl-text extraction below.
    raw = _strip_inactive_region_branches(raw, _detect_version() or "us")
    # Preserve comments (parse_sprite_info / compute_data_c_size strip
    # them themselves) but remove them *for the scan positions only*.
    scan_text = re.sub(r"/\*.*?\*/", lambda m: " " * len(m.group(0)),
                        raw, flags=re.DOTALL)
    scan_text = re.sub(r"//[^\n]*", lambda m: " " * len(m.group(0)), scan_text)
    # Some .c files declare small local typedef structs whose field list
    # would otherwise match `_TOP_DECL_RE` line-by-line (e.g. `s16 x;`
    # inside `typedef struct { ... } Name;`). Blank those blocks in the
    # scan buffer and record each typedef's byte size so the main loop
    # can size arrays declared with that typedef.
    local_typedef_info = _collect_local_typedef_info(scan_text)
    local_typedef_sizes = {k: v[0] for k, v in local_typedef_info.items()}
    scan_text = _blank_typedef_struct_blocks(scan_text)

    out = []
    pos = 0
    length = len(scan_text)
    search_paths = [SRC_RELOC, BUILD_RELOC]

    with tempfile.TemporaryDirectory() as tmpdir:
        while pos < length:
            pad_m = _PAD_RE.search(scan_text, pos)
            decl_m = _TOP_DECL_RE.search(scan_text, pos)
            if pad_m is None and decl_m is None:
                break
            if decl_m is None or (
                    pad_m is not None and pad_m.start() < decl_m.start()):
                out.append(('pad', int(pad_m.group('n'))))
                pos = pad_m.end()
                continue
            type_ = decl_m.group('type')
            name = decl_m.group('name')
            is_ptr = bool(decl_m.group('ptr'))
            if is_ptr:
                # `Type *Name[N]` — opaque 4-byte-per-pointer table (e.g.
                # `AObjEvent32 *Foo[N]`). The initializer is inline C
                # (NULL slots and address casts), so there is no inc.c to
                # emit. But we still need to advance the running file
                # offset by N*4 so any subsequent inc.c-emitting block
                # lands at its real position in the binary.
                body, body_end = _scan_declaration_body(
                    scan_text, decl_m.end())
                count_str = decl_m.group('count')
                if count_str:
                    count = int(count_str, 0)
                else:
                    # Try brace-group count first (handles nested struct
                    # initializers like `DObjDesc *Foo[] = {{...},{...}}`),
                    # then fall back to top-level comma counting (handles
                    # the common pointer-array case where each entry is a
                    # bare `(Type *)expr,` with no surrounding braces).
                    count = _count_top_level_initializers(body)
                    if not count:
                        count = _count_toplevel_array_entries(body)
                if count:
                    out.append(('block', {
                        'type': type_, 'name': name,
                        'size': count * 4, 'inc_path': None,
                    }))
                pos = body_end
                continue
            if type_ not in _SUPPORTED_DECL_TYPES \
                    and type_ not in local_typedef_sizes:
                pos = decl_m.end()
                continue

            body, body_end = _scan_declaration_body(scan_text, decl_m.end())
            # The real (commented) text of the declaration, for feeding to
            # the compute helper — we want compute_sprite_c_size to see
            # the actual `Bitmap foo[] = { {...} };` instead of our
            # blanked-out scan buffer.
            decl_start = decl_m.start('type')
            decl_text = raw[decl_start:body_end]

            inc_m = _INC_RE.search(body)
            inc_path = inc_m.group('path') if inc_m else None

            virt_name = _classify_decl_virtual_path(type_, inc_path, decl_text)
            virt_path = os.path.join(tmpdir, virt_name)
            with open(virt_path, "w") as fh:
                fh.write(_virtual_block_text(None, None, decl_text, type_))
            try:
                size = compute_block_size(virt_path, search_paths=search_paths)
            except SystemExit:
                size = None
            # `compute_data_c_size` sizes inline u8/u16/u32/u64 arrays without
            # an explicit `[N]` by counting `0x...` hex literals. That breaks
            # in two ways:
            #   - Underruns for decoded AObjScript32 arrays where macros like
            #     `aobjEvent32End()` consume a u32 but carry no hex literal.
            #   - Overruns when entries contain symbol names with embedded hex
            #     (e.g. `(u32)((u8*)dXxx_AnimJoint_0x3700 + 0x14)` counts as
            #     two literals — `0x3700` and `0x14` — for a one-entry array).
            # When the array is ungated by `[N]` and lacks an inc.c include,
            # reseat `size` from a top-level comma-counted scan so the
            # cumulative offset stays aligned with the binary for any
            # inc.c-emitting blocks that follow.
            if (type_ in ('u8', 'u16', 'u32', 'u64')
                    and not decl_m.group('count')
                    and inc_path is None
                    and body):
                elem_count = _count_toplevel_array_entries(body)
                if elem_count:
                    elem_size = {'u8': 1, 'u16': 2, 'u32': 4, 'u64': 8}[type_]
                    size = elem_count * elem_size
            if not size:
                # Fallback to the fixed per-element table when compute_*
                # can't parse the declaration (e.g. a FTAttributes struct
                # instance, or an sNN array compute_data_c_size doesn't
                # recognise). Prefer the explicit `[N]` count from the
                # declaration when present; otherwise count top-level
                # `{...}` groups in the initializer; fall back to a
                # single instance as a last resort.
                per_elem = _FIXED_TYPE_SIZES.get(
                    type_, local_typedef_sizes.get(type_, 0))
                if per_elem:
                    count_str = decl_m.group('count')
                    if count_str:
                        n = int(count_str, 0)
                    else:
                        brace_open = decl_text.find("{")
                        if brace_open >= 0:
                            body_text = decl_text[brace_open:]
                            if body_text.endswith(";"):
                                body_text = body_text[:-1].rstrip()
                            n = _count_top_level_initializers(body_text)
                        else:
                            n = 0
                    size = (n * per_elem) if n else per_elem

            block = {
                'type': type_, 'name': name, 'size': size,
                'inc_path': inc_path,
            }
            if type_ in local_typedef_info:
                block['typedef_fields'] = local_typedef_info[type_][1]
                block['typedef_size'] = local_typedef_info[type_][0]
            out.append(('block', block))
            pos = body_end
    return out


def sub_name_of(manifest_path):
    """Extract `<Name>` from `src/relocData/<fid>_<Name>.manifest`."""
    name = os.path.basename(manifest_path)[:-len(".manifest")]
    return name.split("_", 1)[1] if "_" in name else name


def wrapper_inc_target(block_filename):
    """Return the inc.c filename the wrapper would expect for this block.
    None if the block isn't a wrappable type."""
    if block_filename.endswith('.vtx.c'):
        return block_filename[:-len('.vtx.c')] + '.vtx.inc.c'
    if block_filename.endswith('.palette.c'):
        return block_filename[:-len('.palette.c')] + '.palette.inc.c'
    if block_filename.endswith('.dl.c'):
        return block_filename[:-len('.dl.c')] + '.dl.inc.c'
    if block_filename.endswith('.data.c'):
        base = block_filename[:-len('.data.c')]
        if block_filename.startswith('Tex_'):
            return base + '.tex.inc.c'
        return base + '.data.inc.c'
    return None


def scan_dl_for_tex_meta(data, dl_start, dl_end):
    """Walk an F3DEX2 DL region looking for SETTIMG/SETTILESIZE/LOADBLOCK
    triples, LOADTLUT, and SETTILE, and return a map
        {tex_target_offset: (fmt, siz, width, height, palette_target_offset)}

    where fmt ∈ 0..4 (RGBA/YUV/CI/IA/I) and siz ∈ 0..3 (4/8/16/32-bit)
    are taken from the *render* tile's SETTILE (tile 0 — byte-accurate
    rendering format) rather than SETTIMG (which usually reflects the
    LOAD tile's DMA format, e.g. CI16 for loading a CI4 block fast).
    palette_target_offset is the file-relative byte offset of the last
    palette SETTIMG seen (for CI textures) or None.
    """
    meta = {}
    pending_settimg = None        # (addr,) — load-tile SETTIMG
    last_settilesize = None       # (width, height)
    last_palette_addr = None
    render_tile_fmt = None        # (fmt, siz) for the render tile (tile 0)

    pos = dl_start
    while pos + 8 <= dl_end:
        w0, w1 = struct.unpack('>II', data[pos:pos + 8])
        op = (w0 >> 24) & 0xFF
        if op == 0xFD:  # G_SETTIMG
            addr = (w1 & 0xFFFF) * 4
            pending_settimg = addr
        elif op == 0xF5:  # G_SETTILE — track render tile (tile index 0)
            fmt_nibble = (w0 >> 21) & 0x7   # fff
            siz_field = (w0 >> 19) & 0x3    # ii
            tile = (w1 >> 24) & 0x7
            if tile == 0:
                render_tile_fmt = (fmt_nibble, siz_field)
        elif op == 0xF2:  # G_SETTILESIZE
            w_raw = (w1 >> 12) & 0xFFF
            h_raw = w1 & 0xFFF
            width = (w_raw >> 2) + 1
            height = (h_raw >> 2) + 1
            last_settilesize = (width, height)
        elif op == 0xF0:  # G_LOADTLUT — the pending SETTIMG was a palette
            if pending_settimg is not None:
                last_palette_addr = pending_settimg
            pending_settimg = None
        elif op == 0xF3:  # G_LOADBLOCK — the pending SETTIMG was a texture
            if (pending_settimg is not None and last_settilesize is not None
                    and render_tile_fmt is not None):
                addr = pending_settimg
                fmt, siz = render_tile_fmt
                w, h = last_settilesize
                meta[addr] = (fmt, siz, w, h, last_palette_addr)
            pending_settimg = None
        elif op == 0xDF:
            break
        pos += 8
    return meta


def n64img_class_for(fmt, siz):
    """Map F3DEX2 fmt/siz pair to an `n64img.image.*` class. Returns
    None if n64img doesn't support the combination."""
    if not _HAS_N64IMG:
        return None
    # fmt: 0=RGBA, 1=YUV, 2=CI, 3=IA, 4=I
    # siz: 0=4b, 1=8b, 2=16b, 3=32b
    mapping = {
        (0, 2): _n64img.RGBA16,
        (0, 3): _n64img.RGBA32,
        (2, 0): _n64img.CI4,
        (2, 1): _n64img.CI8,
        (3, 0): _n64img.IA4,
        (3, 1): _n64img.IA8,
        (3, 2): _n64img.IA16,
        (4, 0): _n64img.I4,
        (4, 1): _n64img.I8,
    }
    return mapping.get((fmt, siz))


def wrapper_is_include_form(block_path):
    """Return True if the committed wrapper uses the `#include <...inc.c>`
    form (so we should regenerate its companion inc.c from the ROM).
    Files that still hold typed struct initializers (MPGroundData etc.)
    don't have an inc.c and should be left alone."""
    try:
        with open(block_path) as f:
            content = f.read()
    except OSError:
        return False
    return bool(re.search(r'#include\s+[<"][^>"]+\.inc\.c[>"]', content))


def write_lines(path, lines):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, 'w') as f:
        f.write("\n".join(lines) + "\n")


def emit_vtx(data, start, count, path):
    lines = []
    for i in range(count):
        off = start + i * 16
        if off + 16 > len(data):
            break
        v = data[off:off + 16]
        x, y, z = struct.unpack('>3h', v[0:6])
        flag = struct.unpack('>H', v[6:8])[0]
        s, t = struct.unpack('>2h', v[8:12])
        r, g, b, a = v[12], v[13], v[14], v[15]
        lines.append(
            f"\t{{ {{ {{ {x}, {y}, {z} }}, 0x{flag:04X}, "
            f"{{ {s}, {t} }}, {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X} }} }} }},")
    write_lines(path, lines)


def emit_palette(data, start, path):
    colors = struct.unpack('>16H', data[start:start + 32])
    lines = [
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[0:8]) + ",",
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[8:16]) + ",",
    ]
    write_lines(path, lines)


def emit_tex(data, start, size, path):
    lines = []
    for i in range(0, size, 16):
        end = min(i + 16, size)
        chunk = data[start + i:start + end]
        lines.append("\t" + ", ".join(f"0x{b:02X}" for b in chunk) + ",")
    write_lines(path, lines)


def emit_u16(data, start, size, path):
    """Emit `size` bytes as u16 big-endian values, 8 per line."""
    assert size % 2 == 0, f"u16 block size {size} isn't 2-byte aligned"
    vals = list(struct.unpack(f">{size // 2}H", data[start:start + size]))
    lines = []
    for i in range(0, len(vals), 8):
        row = ", ".join(f"0x{v:04X}" for v in vals[i:i + 8])
        lines.append("\t" + row + ",")
    write_lines(path, lines)


def emit_u32(data, start, size, path):
    """Emit `size` bytes as u32 big-endian values, 6 per line."""
    assert size % 4 == 0, f"u32 block size {size} isn't 4-byte aligned"
    vals = list(struct.unpack(f">{size // 4}I", data[start:start + size]))
    lines = []
    for i in range(0, len(vals), 6):
        row = " ".join(f"0x{v:08X}," for v in vals[i:i + 6])
        lines.append("\t" + row)
    write_lines(path, lines)


def emit_typedef_struct(data, start, total_size, path, fields, struct_size):
    """Emit `total_size / struct_size` entries of a `typedef struct`
    array as nested `{ v0, v1, ... },` initializers. `fields` is the
    declaration-order list of `(primitive_type, array_len)` captured when
    the local typedef was parsed."""
    fmt_map = {
        "u8": ("B", 1), "s8": ("b", 1),
        "u16": ("H", 2), "s16": ("h", 2),
        "u32": ("I", 4), "s32": ("i", 4),
        "u64": ("Q", 8), "s64": ("q", 8),
        "f32": ("f", 4),
    }
    assert total_size % struct_size == 0, \
        f"typedef array {total_size} bytes / {struct_size} per-struct mismatch"
    lines = []
    off = start
    for _ in range(total_size // struct_size):
        parts = []
        for ftype, flen in fields:
            code, esize = fmt_map[ftype]
            for _j in range(flen):
                val = struct.unpack(f">{code}", data[off:off + esize])[0]
                if ftype == "f32":
                    parts.append(f"{val}f")
                else:
                    width = esize * 2
                    parts.append(f"0x{val & ((1 << (esize * 8)) - 1):0{width}X}")
                off += esize
        lines.append("\t{ " + ", ".join(parts) + " },")
    write_lines(path, lines)


def _emit_dl_raw(data, start, size, path):
    """Emit a DL inc.c as raw `{ { w0, w1 } },` word pairs."""
    lines = []
    for i in range(0, size, 8):
        w0, w1 = struct.unpack('>II', data[start + i:start + i + 8])
        lines.append(f"\t{{ {{ 0x{w0:08X}, 0x{w1:08X} }} }},")
    write_lines(path, lines)


def _dl_is_pygfxd_safe(data, start, size):
    """Return False if the byte stream contains patterns pygfxd's
    decoder can't roundtrip byte-identically back through gbi.h's
    encoders. The main offender is a 0x00-prefixed word0 with nonzero
    lower bytes: pygfxd emits it as `gsDPNoOpTag(w1)` which re-encodes
    to `word0 == 0`, dropping the lower-byte data.
    """
    for i in range(0, size, 8):
        if i + 8 > size:
            return False
        w0 = struct.unpack('>I', data[start + i:start + i + 4])[0]
        if (w0 >> 24) == 0x00 and w0 != 0:
            return False
    return True


def emit_dl(data, start, size, path):
    """Disassemble an F3DEX2 DL region into readable `gsSP* / gsDP*`
    macro calls using pygfxd, falling back to raw `{ { w0, w1 } }` word
    pairs for blocks that contain command patterns pygfxd can't
    roundtrip (or when pygfxd isn't available).

    For macro output, chain-encoded pointer arguments (SPVertex / SETTIMG
    / etc.) stay as literal hex — they still get patched to a real
    address at link time by fixRelocChain.
    """
    os.makedirs(os.path.dirname(path), exist_ok=True)

    if _HAS_PYGFXD and _dl_is_pygfxd_safe(data, start, size):
        dl_bytes = data[start:start + size]
        out_buf = pygfxd.gfxd_output_buffer(b'\0' * (size * 40 + 1024),
                                             size * 40 + 1024)
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
        body = pygfxd.gfxd_buffer_to_string(out_buf)
        # pygfxd stops at the first gsSPEndDisplayList(), but blocks may
        # contain multiple concatenated DLs.  Count how many 8-byte
        # commands the decoded body covers; if it's fewer than size//8
        # then fall through to the raw emitter.
        decoded_cmds = body.count(',\n')
        expected_cmds = size // 8
        if decoded_cmds >= expected_cmds:
            with open(path, 'w') as f:
                f.write(body)
            return

    _emit_dl_raw(data, start, size, path)


def process_fid(fid):
    manifest = manifest_for(fid)
    if manifest is not None:
        return _process_manifest(fid, manifest)
    inline = inline_master_for(fid)
    if inline is not None:
        return _process_inline(fid, inline)
    return 0


def _process_manifest(fid, manifest):
    binp = bin_path(fid)
    if binp is None:
        return 0
    with open(binp, 'rb') as f:
        data = f.read()

    sub = sub_name_of(manifest)
    src_sub_dir = os.path.join(SRC_RELOC, sub)
    build_sub_dir = os.path.join(BUILD_RELOC, sub)
    search_paths = [SRC_RELOC, BUILD_RELOC]

    entries = parse_manifest(manifest)

    # First pass: record each block's offset + size and, for .dl.c blocks,
    # scan their F3DEX2 command stream to recover Tex format metadata for
    # the second pass (so we can emit PNG previews alongside Tex inc.c).
    block_info = []  # (payload, offset, size)
    tex_meta = {}    # tex_offset → (fmt, siz, width, height, palette_offset)
    offset = 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        block_path = os.path.join(src_sub_dir, payload)
        size = compute_block_size(block_path, search_paths=search_paths)
        block_info.append((payload, offset, size))
        if payload.endswith('.dl.c'):
            tex_meta.update(scan_dl_for_tex_meta(data, offset, offset + size))
        offset += size

    # Second pass: emit inc.c / PNG outputs for wrapper blocks.
    emitted = 0
    for payload, off, size in block_info:
        block_path = os.path.join(src_sub_dir, payload)
        inc_name = wrapper_inc_target(payload)
        if inc_name is None or not wrapper_is_include_form(block_path):
            continue
        inc_path = os.path.join(build_sub_dir, inc_name)
        if payload.endswith('.vtx.c'):
            count = size // 16
            emit_vtx(data, off, count, inc_path)
        elif payload.endswith('.palette.c'):
            emit_palette(data, off, inc_path)
        elif payload.endswith('.dl.c'):
            emit_dl(data, off, size, inc_path)
        elif payload.endswith('.data.c'):
            emit_tex(data, off, size, inc_path)
            if _HAS_N64IMG and payload.startswith('Tex_'):
                emit_tex_png(data, off, size, tex_meta, block_sub_dir=build_sub_dir,
                             payload=payload)
        emitted += 1
    return emitted


def _process_inline(fid, master_path):
    """Walk a hand-written inline master .c file (the new layout) and emit
    its referenced `.inc.c` files from the binary at the running offset."""
    binp = bin_path(fid)
    if binp is None:
        return 0
    with open(binp, 'rb') as f:
        data = f.read()

    # If this fid has a version-specific `.c` override in play (`.jp.c` /
    # `.us.c`), the master .c here is NOT the one the build will compile.
    # Walking it against a potentially-different binary would corrupt any
    # existing inc.c files the real master depends on, so skip entirely.
    version = _detect_version()
    if version:
        for fn in os.listdir(SRC_RELOC):
            if (fn.startswith(f"{fid}_") and
                    fn.endswith(f".{version}.c")):
                return 0

    try:
        entries = parse_master_c(master_path)
    except SystemExit:
        return 0

    # First pass: assign byte offsets and gather DL tex metadata.
    # IDO aligns top-level globals to 4 bytes; emulate that between non-`pad`
    # decls so the cumulative offset matches the linker's actual placement.
    # `pad` entries (PAD(N)) are byte-exact and not auto-aligned.
    block_info = []  # (entry, offset)
    tex_meta = {}
    offset = 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        if offset % 4 != 0:
            offset += 4 - (offset % 4)
        size = payload['size']
        block_info.append((payload, offset))
        inc_path = payload.get('inc_path') or ''
        if inc_path.endswith('.dl.inc.c') and offset + size <= len(data):
            tex_meta.update(scan_dl_for_tex_meta(data, offset, offset + size))
        offset += size

    # Bail out only when we'd walk off the end of the binary (overshoot);
    # undershoot is fine — the trailing bytes are ignored. An overshoot
    # usually means we're extracting the wrong file/version and any bytes
    # we write would be junk.
    if offset > len(data):
        return 0

    # Second pass: write each block's inc.c into build/. Route by declared
    # C type — an inc.c included into `u32 X[N]` needs u32-hex values, not
    # u8 bytes, or IDO rejects it with "Too many initial values".
    emitted = 0
    for payload, off in block_info:
        inc_path_rel = payload.get('inc_path')
        if not inc_path_rel:
            continue
        inc_full = os.path.join(BUILD_RELOC, inc_path_rel)
        size = payload['size']
        decl_type = payload.get('type', 'u8')
        if decl_type in ('Vtx', 'Vtx_t'):
            count = size // 16
            emit_vtx(data, off, count, inc_full)
        elif decl_type == 'Gfx':
            emit_dl(data, off, size, inc_full)
        elif decl_type == 'u16':
            emit_u16(data, off, size, inc_full)
        elif decl_type == 'u32':
            emit_u32(data, off, size, inc_full)
        elif 'typedef_fields' in payload:
            emit_typedef_struct(data, off, size, inc_full,
                                payload['typedef_fields'],
                                payload['typedef_size'])
        elif inc_path_rel.endswith('.palette.inc.c'):
            emit_palette(data, off, inc_full)
        else:
            emit_tex(data, off, size, inc_full)
            # Tex_*.tex.inc.c blocks: emit PNG preview if a DL referenced this
            # offset and we recovered fmt/siz/dims from `scan_dl_for_tex_meta`.
            base = os.path.basename(inc_path_rel)
            if (_HAS_N64IMG and base.startswith('Tex_')
                    and inc_path_rel.endswith('.tex.inc.c')):
                block_sub_dir = os.path.dirname(inc_full)
                # emit_tex_png strips `.data.c`; mock that suffix on the
                # inline `.tex.inc.c` filename so the PNG name comes out as
                # `<base>.png`.
                payload = base[:-len('.tex.inc.c')] + '.data.c'
                emit_tex_png(data, off, size, tex_meta,
                             block_sub_dir=block_sub_dir, payload=payload)
        emitted += 1
    return emitted


def _expected_tex_bytes(fmt, siz, width, height):
    """Bytes needed to represent a width*height texture at the given
    fmt/siz. Returns None if the format isn't understood."""
    pixels = width * height
    if siz == 0:  # 4bpp
        return (pixels + 1) // 2
    if siz == 1:  # 8bpp
        return pixels
    if siz == 2:  # 16bpp
        return pixels * 2
    if siz == 3:  # 32bpp
        return pixels * 4
    return None


def emit_tex_png(data, offset, size, tex_meta, block_sub_dir, payload):
    """If the metadata map has a format entry for this Tex block, render
    it as a PNG alongside the inc.c using n64img."""
    meta = tex_meta.get(offset)
    if meta is None:
        return
    fmt, siz, width, height, palette_offset = meta
    img_cls = n64img_class_for(fmt, siz)
    if img_cls is None:
        return
    # SETTILESIZE can outsize the actual block (the DL may load with a
    # line stride larger than the stored texture). Skip if the
    # dimensions don't fit in the committed block size.
    expected = _expected_tex_bytes(fmt, siz, width, height)
    if expected is None or expected > size:
        return
    tex_bytes = data[offset:offset + expected]
    try:
        img = img_cls(tex_bytes, width, height)
    except Exception:
        return
    if fmt == 2 and palette_offset is not None:
        img.set_palette(data[palette_offset:palette_offset + 32])
    # Format suffix in filename keeps the PNG identifiable when multiple
    # tools emit previews and matches `previewImagesTextures.py`'s scheme,
    # so the two tools produce the same filename rather than duplicates.
    fmt_to_str = {
        (0, 2): 'rgba16', (0, 3): 'rgba32',
        (2, 0): 'ci4',    (2, 1): 'ci8',
        (3, 0): 'ia4',    (3, 1): 'ia8', (3, 2): 'ia16',
        (4, 0): 'i4',     (4, 1): 'i8',
    }
    fmt_token = fmt_to_str.get((fmt, siz), 'png')
    png_name = payload[:-len('.data.c')] + f'.{fmt_token}.png'
    png_path = os.path.join(block_sub_dir, png_name)
    os.makedirs(block_sub_dir, exist_ok=True)
    try:
        img.write(png_path)
    except Exception:
        # Clean up a partially-written file so a stale 0-byte doesn't linger
        if os.path.exists(png_path) and os.path.getsize(png_path) == 0:
            os.remove(png_path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int,
                    help='File IDs to extract; default = every manifest on disk.')
    ap.add_argument('--version', default=None,
                    help='Version (us|jp) — selects assets/<v>/relocData/. '
                         'Defaults to auto-detect from on-disk CSVs.')
    args = ap.parse_args()

    if args.version:
        _bind_version(args.version)
    else:
        v = _detect_version()
        if v:
            _bind_version(v)

    if args.fids:
        targets = args.fids
    else:
        targets = []
        for fn in sorted(os.listdir(SRC_RELOC)):
            if fn.endswith('.manifest'):
                fid_str = fn.split('_', 1)[0]
                if fid_str.isdigit():
                    targets.append(int(fid_str))

    total = 0
    for fid in targets:
        n = process_fid(fid)
        if n:
            total += n
    print(f"extractRelocInc: wrote {total} inc.c files across {len(targets)} fids")


if __name__ == '__main__':
    main()
