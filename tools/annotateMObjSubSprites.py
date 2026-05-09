#!/usr/bin/env python3
"""
annotateMObjSubSprites.py — walk MObjSub.sprites pointer tables in
src/relocData/<fid>_<Name>.c, derive each sprite block's (fmt, dim) from
the MObjSub fields, rename `gap_*` block symbols to `Tex_0xXXXX`, add
`/* @tex fmt=<F> dim=<W>x<H> */` comments above the declaration, and
update sibling references in the .c plus the .reloc file.

The C symbol rename keeps the relocation chain order (declaration position
in the file is unchanged) but matches the precedent already established
by SCExplainGraphics, PikachuSpecial2, etc. — required so that
tools/previewImagesTextures.py recognises the block as a texture.

Usage:
    tools/annotateMObjSubSprites.py <fid> [<fid> ...]            # apply
    tools/annotateMObjSubSprites.py --dry-run <fid> [...]        # plan only
    tools/annotateMObjSubSprites.py --all [--dry-run]
"""

import argparse
import contextlib
import io
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TOOLS_DIR = os.path.join(PROJECT_DIR, "tools")
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

sys.path.insert(0, TOOLS_DIR)
from extractRelocInc import parse_master_c  # noqa: E402

# Formats tools/previewImagesTextures.py knows how to render. Anything
# else (RGBA4, RGBA8, YUV*) gets flagged as an anomaly even when the
# MObjSub claims it.
_RENDERABLE_FMTS = frozenset({
    "CI4", "CI8", "I4", "I8", "IA4", "IA8", "IA16", "RGBA16", "RGBA32",
})

# G_IM_FMT_*: 0=RGBA 1=YUV 2=CI 3=IA 4=I
_FMT_NAMES = {0: "RGBA", 1: "YUV", 2: "CI", 3: "IA", 4: "I"}
_FMT_TOKENS = {
    "G_IM_FMT_RGBA": 0,
    "G_IM_FMT_YUV":  1,
    "G_IM_FMT_CI":   2,
    "G_IM_FMT_IA":   3,
    "G_IM_FMT_I":    4,
}
# G_IM_SIZ_*: 0=4b 1=8b 2=16b 3=32b
_SIZ_BITS = {0: 4, 1: 8, 2: 16, 3: 32}
_SIZ_TOKENS = {
    "G_IM_SIZ_4b":  0,
    "G_IM_SIZ_8b":  1,
    "G_IM_SIZ_16b": 2,
    "G_IM_SIZ_32b": 3,
}

# Power-of-two-ish widths the previewer uses.
_GUESS_WIDTHS = [8, 16, 24, 32, 48, 64, 96, 128, 160, 192, 256]


def fmt_token(text):
    """Decode a `G_IM_FMT_*` token or numeric literal to a 0..4 int, or None."""
    text = text.strip()
    if text in _FMT_TOKENS:
        return _FMT_TOKENS[text]
    try:
        return int(text, 0)
    except ValueError:
        return None


def siz_token(text):
    text = text.strip()
    if text in _SIZ_TOKENS:
        return _SIZ_TOKENS[text]
    try:
        return int(text, 0)
    except ValueError:
        return None


def fmt_string(fmt, siz):
    """Return e.g. "CI4", "IA8", "RGBA16" — or None if unrenderable."""
    name = _FMT_NAMES.get(fmt)
    bits = _SIZ_BITS.get(siz)
    if name is None or bits is None:
        return None
    return f"{name}{bits}"


def guess_dims(pixel_count):
    """Closest near-square (w,h) from pixel_count, preferring the widths
    in _GUESS_WIDTHS. Mirrors tools/previewImagesTextures.py's logic."""
    best, best_ratio = (pixel_count, 1), 999
    for w in _GUESS_WIDTHS:
        if pixel_count % w != 0:
            continue
        h = pixel_count // w
        ratio = max(w / h, h / w)
        if ratio < best_ratio:
            best_ratio = ratio
            best = (w, h)
    return best


def split_top_level(body):
    """Split a brace-balanced initializer body on top-level commas (depth==0
    for `()`, `[]`, `{}`). Returns the list of trimmed token strings.
    `body` should start with `{` and end with `}`; either or both can be
    optional, in which case we treat the whole thing as inner. Trailing
    `;` is also stripped."""
    text = body.strip()
    if text.endswith(";"):
        text = text[:-1].rstrip()
    if text.startswith("{"):
        text = text[1:]
    if text.endswith("}"):
        text = text[:-1]
    # Strip /* ... */ and // ... comments; commas inside count.
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)
    text = re.sub(r"//[^\n]*", "", text)
    out = []
    depth = 0
    cur = []
    for ch in text:
        if ch in "([{":
            depth += 1
            cur.append(ch)
        elif ch in ")]}":
            depth -= 1
            cur.append(ch)
        elif ch == "," and depth == 0:
            tok = "".join(cur).strip()
            if tok:
                out.append(tok)
            cur = []
        else:
            cur.append(ch)
    tok = "".join(cur).strip()
    if tok:
        out.append(tok)
    return out


def parse_mobjsub_initializer(body):
    """Parse a single MObjSub `{ ... }` initializer into a dict of fields
    we care about. Returns None if shape unexpected. The struct has 40
    positional values when fully spelled out (with prim_l/prim_m/prim_pad
    counted as 3 entries per the source convention). Order:

       1: pad00         2: fmt          3: siz         4: sprites
       5: unk08         6: unk0A        7: unk0C       8: unk0E
       9: unk10        10: trau       11: trav       12: scau
      13: scav         14: unk24      15: unk28      16: palettes
      17: flags        18: block_fmt  19: block_siz  20: block_dxt
      21: unk36        22: unk38      23: unk3A      24: scrollu
      25: scrollv      26: unk44      27: unk48      28: unk4C
      29: primcolor    30: prim_l     31: prim_m     32: prim_pad
      33: envcolor     34: blendcolor 35: light1color 36: light2color
      37: unk68        38: unk6C      39: unk70      40: unk74
    """
    toks = split_top_level(body)
    if len(toks) < 23:
        return None

    def hex_or_int(s):
        s = s.strip()
        try:
            return int(s, 0)
        except ValueError:
            return None

    return {
        "fmt":        fmt_token(toks[1]),
        "siz":        siz_token(toks[2]),
        "sprites":    toks[3],
        "unk0C":      hex_or_int(toks[6]),
        "unk0E":      hex_or_int(toks[7]),
        "unk10":      hex_or_int(toks[8]),
        "palettes":   toks[15],
        "block_fmt":  fmt_token(toks[17]),
        "block_siz":  siz_token(toks[18]),
        "block_dxt":  hex_or_int(toks[19]),
        "unk36":      hex_or_int(toks[20]),
        "unk38":      hex_or_int(toks[21]),
        "unk3A":      hex_or_int(toks[22]),
    }


_PTR_TARGET_RE = re.compile(
    r"\(\s*void\s*\*\*\s*\)\s*\(?\s*"
    r"(?P<name>[A-Za-z_]\w*)\s*\)?\s*$"
)


def extract_sprites_target(expr):
    """From a sprites field like `(void**)dFoo_sprites` or
    `(void**)(dFoo_sprites)` return the symbol name, or None for NULL /
    expressions we can't safely walk (e.g. `(void**)((u8*)X + 0x8)`)."""
    expr = expr.strip().rstrip(",")
    if not expr:
        return None
    if re.search(r"^\(\s*void\s*\*\*\s*\)\s*0x0+\s*$", expr):
        return None
    m = _PTR_TARGET_RE.match(expr)
    if not m:
        return None
    return m.group("name")


# Same shape as extract_sprites_target — the two MObjSub fields hold
# `(void**)<sym>` references to parallel pointer arrays.
extract_palettes_target = extract_sprites_target


def block_byte_size(block):
    """Bytes the block occupies in the binary (from parse_master_c)."""
    return block.get("size") or 0


def expected_bytes(fmt_str, w, h):
    """Bytes a w*h texture occupies at fmt_str (e.g. CI4, IA8). Returns
    None if fmt_str is unknown."""
    if fmt_str is None:
        return None
    bits = int(re.search(r"\d+$", fmt_str).group(0))
    return (w * h * bits + 7) // 8


def derive_tex_dims(block_size, fmt_str, mobjsub):
    """Pick (width, height) for a texture block, preferring the stored
    dim from MObjSub.{block_dxt, unk36} (the LoadBlock pair) over the
    render-tile fields unk0C/0E and unk38/3A.

    From src/sys/objdisplay.c:gcDrawMObjForDObj (case G_IM_SIZ_*b):
        gDPLoadBlock(... block_dxt * unk36 - 1, ...)
    so each sprite stores `block_dxt` texels per row × `unk36` rows in
    the texture's native format. unk0C/0E is the *render tile* size used
    by gDPSetTileSize; on N64 the render tile can exceed the loaded data
    when a sprite is mirrored or scaled, so deriving from unk0C/0E
    inflates the dim and the previewer falls back to guess_dims, yielding
    16×N strips.

    Preference order (each accepted only if its byte count is ≤
    block_size with up to 8 bytes of alignment padding):
        1. block_dxt × unk36   ('block_dxt')
        2. unk0C × unk0E       ('unk0C/0E')        — render tile fallback
        3. unk38 × unk3A       ('unk38/3A')        — split render tile
        4. guess_dims(pixels)  ('guess')           — last resort
    Returns (w, h, source). Source 'none' when block_size is 0/invalid."""
    if fmt_str is None or block_size <= 0:
        return None, None, "none"
    bits = int(re.search(r"\d+$", fmt_str).group(0))
    pixels = block_size * 8 // bits

    for label, (w, h) in (
        ("block_dxt", (mobjsub.get("block_dxt") or 0, mobjsub.get("unk36") or 0)),
        ("unk0C/0E", (mobjsub.get("unk0C") or 0, mobjsub.get("unk0E") or 0)),
        ("unk38/3A", (mobjsub.get("unk38") or 0, mobjsub.get("unk3A") or 0)),
    ):
        if w <= 0 or h <= 0:
            continue
        exp = (w * h * bits + 7) // 8
        # Accept exact match or small alignment overrun (≤8B common for
        # 64-bit-aligned blocks). N64 texture data is usually padded to
        # 8 or 16 bytes.
        if exp <= block_size and (block_size - exp) <= 8:
            return w, h, label

    if pixels > 0:
        gw, gh = guess_dims(pixels)
        return gw, gh, "guess"
    return None, None, "none"


# ─── declaration scanner ────────────────────────────────────────────────

# A loose top-level declaration matcher. Captures static/const, type, and
# name; the body is consumed via brace-balanced scanning.
_DECL_HEADER_RE = re.compile(
    r"^(?P<lead>\s*(?:static\s+)?(?:const\s+)?)"
    r"(?P<type>\w+)\s*(?P<ptr>\*+\s*)?"
    r"(?P<name>[A-Za-z_]\w*)"
    r"(?:\s*\[\s*(?P<count>[^\]]*)\s*\])?\s*=\s*",
    re.MULTILINE,
)
_BRACE_OPEN_RE = re.compile(r"\{")


def find_decl(text, name):
    """Locate the declaration `<type> <name> [...] = { ... };`. Returns
    a dict with: type, name, ptr, body, body_start, body_end, and
    `decl_start` — the offset of the type token (`u8`/`MObjSub`/etc.),
    *not* the regex match start. The regex's leading `\\s*` matches
    blank-line whitespace too, so `m.start()` would point to the blank
    line above the actual decl; using `m.start("type")` puts us right at
    the declaration line so callers can insert annotations immediately
    above the decl without straddling intervening blanks."""
    for m in _DECL_HEADER_RE.finditer(text):
        if m.group("name") != name:
            continue
        body_start = text.find("{", m.end() - 1)
        if body_start < 0:
            continue
        depth = 0
        i = body_start
        while i < len(text):
            ch = text[i]
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    body_end = i + 1
                    break
            i += 1
        else:
            continue
        # consume `;`
        j = body_end
        while j < len(text) and text[j] in " \t":
            j += 1
        if j < len(text) and text[j] == ";":
            body_end = j + 1
        return {
            "type": m.group("type"),
            "name": name,
            "ptr": bool(m.group("ptr")),
            "body": text[body_start:body_end],
            "decl_start": m.start("type"),
            "body_start": body_start,
            "body_end": body_end,
        }
    return None


def find_pointer_array_targets(text, array_name):
    """Find `<T> *<array_name>[N] = { (cast)A, (cast)B, NULL };` and
    return the list of pointee symbol names. `<T>` is typically `void`,
    `MObjSub`, `u8`, `u16`, or `u32` — any pointer-array type whose
    body is a flat list of `(cast)NAME` / `&NAME` / `NULL` entries.

    Also accepts the *legacy* form `u32 <name>[N] = { 0xCHAINHEX, ... };`
    where each slot is a raw chain-encoded pointer literal that
    fixRelocChain.py rewrites at link time. Such slots produce
    `("__unresolved__", text)` entries — callers should fall back to a
    .reloc lookup keyed on `(array_name, slot_offset)` to recover the
    target symbol.

    Each entry is one of:
       - str: direct symbol reference we can rename
       - None: NULL slot
       - ("__expr__", text): cast involving arithmetic (e.g. base+offset)
       - ("__unresolved__", text): bare numeric literal (chain placeholder)
    Returns None if the array isn't found, or if its body looks like
    inline struct literals (DObjDesc, Vtx, Gfx) rather than a flat
    pointer-or-hex list."""
    decl = find_decl(text, array_name)
    if decl is None:
        return None
    # Reject struct-instance arrays (DObjDesc, Vtx, Gfx, etc.) whose body
    # holds inline struct literals, not bare pointer slots. A pointer-or-
    # hex list always has each entry on its own line as a single token.
    if not decl["ptr"] and decl["type"] not in ("u8", "u16", "u32", "u64", "s32", "void"):
        return None
    body = decl["body"]
    targets = []
    # Recognises pointer-into-block expressions in two equivalent shapes
    # commonly emitted by the splatter for legacy reloc-data files:
    #   `&NAME[0xN]`              — clean form
    #   `((u8*)&NAME + 0xN)`      — older legacy form (typically wrapped
    #                                in another cast, e.g. `(u32)(...)`)
    # Both indicate the slot points into the middle of `NAME` at offset
    # `N` and the parser flags them as `("__split__", parent, offset)`
    # so the planner can split the parent at that offset and replace the
    # reference with a bare symbol.
    split_re = re.compile(
        r"^&\s*([A-Za-z_]\w*)\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]\s*$"
    )
    legacy_split_re = re.compile(
        r"^\(\s*\w+\s*\*+\s*\)\s*&\s*([A-Za-z_]\w*)\s*"
        r"\+\s*(0x[0-9A-Fa-f]+|\d+)\s*$"
    )
    for tok in split_top_level(body):
        tok = tok.strip().rstrip(",")
        if not tok:
            continue
        # Strip up to two leading casts `(<T> *...)` (any number of `*`s,
        # any element type) so the remaining text exposes the actual
        # pointee expression. The legacy form `(u32)((u8*)&Foo + 0xN)`
        # carries an outer + inner cast; both are stripped before split
        # parsing matches the inner expression.
        cast_stripped = re.sub(
            r"^(?:\(\s*\w+\s*\**\s*\)\s*){1,2}", "", tok)
        # Also strip an enclosing pair of parens like `((u8*)&Foo + 0xN)`
        # (after the outer `(u32)` was peeled).
        cast_stripped = cast_stripped.strip()
        if cast_stripped.startswith("(") and cast_stripped.endswith(")"):
            inner = cast_stripped[1:-1].strip()
            inner = re.sub(r"^\(\s*\w+\s*\**\s*\)\s*", "", inner).strip()
            if "+" in inner and inner.startswith("&"):
                cast_stripped = inner
        # Pure NULL slot
        if cast_stripped in ("NULL", "0", "0x0", "0x00000000") or \
                re.fullmatch(r"0x0+", cast_stripped):
            targets.append(None)
            continue
        # Bare numeric literal (e.g. `0xFF00FF00`) — chain-placeholder for
        # fixRelocChain, can't be resolved without consulting the .reloc.
        if re.fullmatch(r"0x[0-9A-Fa-f]+", cast_stripped):
            targets.append(("__unresolved__", tok))
            continue
        # `&Tex_X[0xN]` / `&Tex_X[N]` — a pointer into the middle of an
        # existing block. The parent should be split at the offset; the
        # planner treats this as a split request.
        m = split_re.match(cast_stripped)
        if m:
            off = int(m.group(2), 0)
            targets.append(("__split__", m.group(1), off))
            continue
        # `&Tex_X + 0xN` (legacy form, with the casts already stripped).
        m = legacy_split_re.match(cast_stripped)
        if m:
            off = int(m.group(2), 0)
            targets.append(("__split__", m.group(1), off))
            continue
        # Same form without the outer cast (just `&Tex_X + 0xN`).
        m2 = re.match(
            r"^&\s*([A-Za-z_]\w*)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*$",
            cast_stripped,
        )
        if m2:
            off = int(m2.group(2), 0)
            targets.append(("__split__", m2.group(1), off))
            continue
        # Address-of or arithmetic expression — points into another block,
        # not a standalone block we can rename.
        if "+" in cast_stripped or "(u8" in cast_stripped or "(u32" in cast_stripped:
            targets.append(("__expr__", tok))
            continue
        # Otherwise, expect `&NAME` or bare `NAME`.
        m = re.match(r"&?\s*([A-Za-z_]\w*)\s*$", cast_stripped)
        if m and m.group(1).lower() != "null":
            targets.append(m.group(1))
        else:
            targets.append(("__expr__", tok))
    return targets


# ─── main planner ───────────────────────────────────────────────────────

def collect_blocks(c_path):
    """Run parse_master_c and return a list of blocks (in source order)
    with cumulative file offsets, keyed by symbol name. Suppresses the
    helper's stderr noise (compute_palette_c_size etc. flag non-palette
    blocks that happen to share the .palette.c routing)."""
    blocks = []
    offset = 0
    with contextlib.redirect_stderr(io.StringIO()):
        for kind, payload in parse_master_c(c_path):
            if kind == "pad":
                offset += payload
                continue
            block = dict(payload)
            block["offset"] = offset
            blocks.append(block)
            offset += block.get("size") or 0
    return blocks


def find_target_basename(target_name, file_prefix):
    """Strip the `dFile_` prefix to expose the trailing identifier, e.g.
    `dStageZebesFile2_gap_0x2BC0_sub_0xD8` → `gap_0x2BC0_sub_0xD8`."""
    if target_name.startswith(file_prefix):
        return target_name[len(file_prefix):]
    return target_name


def load_reloc_map(reloc_path):
    """Parse a .reloc file into `{(source_sym, byte_offset): target}`.
    The target is captured *with* any trailing `+0xN` (i.e.
    `dFoo_Bar+0x18`), not just the bare symbol name — that's needed so
    callers can detect chain pointers landing in the middle of an
    existing block (split candidates) rather than at its boundary.
    Used to resolve `u32 X[N] = { 0xCHAINHEX, ... }`-style legacy sprite/
    palette arrays, where each slot's binary value is opaque chain hex
    that fixRelocChain.py rewrites at link time but the .reloc carries
    the symbolic target. Returns {} if the .reloc is missing."""
    out = {}
    if not os.path.exists(reloc_path):
        return out
    line_re = re.compile(
        r"^\s*(?:intern|extern)\s+"
        r"([A-Za-z_]\w*)(?:\+0x([0-9A-Fa-f]+))?"
        r"\s+([A-Za-z_]\w*(?:\+0x[0-9A-Fa-f]+)?)"
    )
    with open(reloc_path) as f:
        for ln in f:
            m = line_re.match(ln)
            if not m:
                continue
            src, off_hex, tgt = m.group(1), m.group(2), m.group(3)
            off = int(off_hex, 16) if off_hex else 0
            out[(src, off)] = tgt
    return out


def resolve_unresolved_targets(targets, array_name, reloc_map):
    """For each `("__unresolved__", text)` entry, look up the target
    symbol in `reloc_map` keyed on `(array_name, slot_idx*4)`. The
    array's slot stride is fixed at 4 bytes (chain pointer width).
    A target carrying `+0xN` (a chain pointer landing mid-block) is
    converted to a `("__split__", parent, offset)` tuple so the planner
    splits the parent block."""
    out = []
    for idx, t in enumerate(targets):
        if isinstance(t, tuple) and t[0] == "__unresolved__":
            tgt = reloc_map.get((array_name, idx * 4))
            if tgt is not None:
                m = re.match(r"^([A-Za-z_]\w*)\+0x([0-9A-Fa-f]+)$", tgt)
                if m:
                    out.append(("__split__", m.group(1), int(m.group(2), 16)))
                else:
                    out.append(tgt)
                continue
        out.append(t)
    return out


def plan_for_file(fid, file_path):
    """Return (plan, anomalies) for a single relocData .c file.
    `plan` is an ordered list of per-block actions. `anomalies` is a list
    of human-readable warning strings to surface for follow-up review."""
    with open(file_path) as f:
        text = f.read()
    # The US .reloc is enough for symbol resolution; targets that differ
    # in JP have the same symbolic name in both reloc files for the slots
    # referenced from sprite/palette arrays.
    reloc_map = load_reloc_map(file_path[:-2] + ".reloc")

    # `<File>` short name (e.g. `StageZebesFile2`) and `dFile_` prefix.
    base = os.path.basename(file_path)
    short_name = re.match(r"^\d+_(\w+)\.c$", base).group(1)
    file_prefix = f"d{short_name}_"

    blocks = collect_blocks(file_path)
    by_name = {b["name"]: b for b in blocks}

    plan = []
    splits = {}  # parent_name -> list of (offset, sub_size, sub_fmt, sub_lut, sub_dim, dim_src, mobjsub_name)
    anomalies = []
    seen_blocks = set()  # prevent double-renaming if 2 MObjSubs share a sprite

    for block in blocks:
        if block.get("type") != "MObjSub":
            continue
        # MObjSub array: walk each element's body separately.
        decl = find_decl(text, block["name"])
        if decl is None:
            anomalies.append(f"  ! MObjSub `{block['name']}`: decl not found")
            continue
        # `MObjSub **Foo[N]` and `MObjSub *Foo[N]` are pointer tables, not
        # struct instances — skip silently. parse_master_c surfaces them
        # alongside real structs but they have no sprites/fmt/dim of their
        # own.
        if decl["ptr"]:
            continue
        bodies = []
        if "[" in text[decl["decl_start"]:decl["body_start"]]:
            inner = decl["body"]
            # outer brace-strip then split into top-level `{...}` groups
            inner = inner.strip()
            if inner.startswith("{"):
                inner = inner[1:]
            if inner.endswith("}"):
                inner = inner[:-1]
            # collect top-level brace groups
            depth = 0
            cur = []
            for ch in inner:
                if ch == "{":
                    if depth == 0:
                        cur = ["{"]
                    else:
                        cur.append(ch)
                    depth += 1
                elif ch == "}":
                    depth -= 1
                    cur.append(ch)
                    if depth == 0:
                        bodies.append("".join(cur))
                else:
                    if depth >= 1:
                        cur.append(ch)
            if not bodies:
                bodies = [decl["body"]]
        else:
            bodies = [decl["body"]]

        for idx, sub_body in enumerate(bodies):
            mobj = parse_mobjsub_initializer(sub_body)
            if mobj is None:
                anomalies.append(
                    f"  ! MObjSub `{block['name']}`[{idx}]: couldn't parse fields")
                continue
            sprites_target = extract_sprites_target(mobj["sprites"])
            if sprites_target is None:
                continue
            if sprites_target not in by_name:
                anomalies.append(
                    f"  ! MObjSub `{block['name']}`[{idx}].sprites = "
                    f"`{sprites_target}` — not declared in this file")
                continue

            tex_targets = find_pointer_array_targets(text, sprites_target)
            if tex_targets is None:
                anomalies.append(
                    f"  ! sprites array `{sprites_target}` — failed to parse")
                continue
            # Resolve raw-chain-hex slots via .reloc lookup so legacy
            # `u32 X[] = { 0x..., ... }` sprite tables become usable.
            tex_targets = resolve_unresolved_targets(
                tex_targets, sprites_target, reloc_map)

            # Palettes parallel array (optional). When present, slot N of
            # palettes_array corresponds to the LUT for sprites[N]. Used
            # for the `lut=<sym>` half of the @tex annotation.
            pal_targets = []
            palettes_target = extract_palettes_target(mobj["palettes"])
            if palettes_target is not None and palettes_target in by_name:
                pal_parsed = find_pointer_array_targets(text, palettes_target)
                if pal_parsed is not None:
                    pal_targets = resolve_unresolved_targets(
                        pal_parsed, palettes_target, reloc_map)

            fmt_str = fmt_string(mobj["block_fmt"], mobj["block_siz"])
            if fmt_str is None:
                # Fall back to fmt/siz if block_fmt/siz aren't usable.
                fmt_str = fmt_string(mobj["fmt"], mobj["siz"])

            unresolved_count = sum(
                1 for t in tex_targets
                if isinstance(t, tuple) and t[0] == "__unresolved__")
            if unresolved_count > 0:
                anomalies.append(
                    f"  ! sprites array `{sprites_target}` has "
                    f"{unresolved_count} chain-placeholder entries "
                    f"(0x...); fixRelocChain patches them at link time. "
                    f"Skipping (would need .reloc lookup to identify "
                    f"each block).")
                continue

            for tex_idx, tgt in enumerate(tex_targets):
                if tgt is None:
                    continue
                if isinstance(tgt, tuple) and tgt[0] == "__expr__":
                    anomalies.append(
                        f"  ! sprites[{tex_idx}] in `{sprites_target}` is an "
                        f"expression, not a direct ref: {tgt[1]}")
                    continue
                if isinstance(tgt, tuple) and tgt[0] == "__split__":
                    # `&parent[off]` — the slot points into the middle of
                    # an existing block, so the parent should be split at
                    # `off` and a fresh sub-symbol introduced for the
                    # sub-frame. The sub-frame's dim/fmt come straight from
                    # the MObjSub (block_dxt × unk36 in the format named by
                    # block_fmt/block_siz) — we trust the MObjSub here
                    # since there's no allocated block yet to byte-fit.
                    _, parent_name, off = tgt
                    if parent_name not in by_name:
                        anomalies.append(
                            f"  ! sprites[{tex_idx}] in `{sprites_target}`: "
                            f"parent `{parent_name}` not declared in this file")
                        continue
                    sub_fmt = fmt_string(mobj["block_fmt"], mobj["block_siz"]) \
                        or fmt_string(mobj["fmt"], mobj["siz"])
                    sub_w = mobj.get("block_dxt") or 0
                    sub_h = mobj.get("unk36") or 0
                    if sub_w <= 0 or sub_h <= 0:
                        # Fall back to render dim if block_dxt/unk36 are 0.
                        sub_w = mobj.get("unk0C") or 0
                        sub_h = mobj.get("unk0E") or 0
                    sub_lut = None
                    if pal_targets and tex_idx < len(pal_targets):
                        pal = pal_targets[tex_idx]
                        if isinstance(pal, str):
                            sub_lut = pal
                    splits.setdefault(parent_name, []).append({
                        "offset": off,
                        "fmt": sub_fmt,
                        "w": sub_w,
                        "h": sub_h,
                        "lut": sub_lut,
                        "mobjsub": block["name"],
                        "from_idx": idx,
                        "tex_idx": tex_idx,
                        "from_sprites": sprites_target,
                    })
                    continue
                if tgt in seen_blocks:
                    continue
                if tgt not in by_name:
                    anomalies.append(
                        f"  ! sprites[{tex_idx}] = `{tgt}` — not declared in "
                        f"this file")
                    continue
                # Pair this sprite with the same-index palettes entry,
                # falling back to `palettes[i mod len]` when the sprites
                # array is longer than the palettes array — gcDrawMObjForDObj
                # cycles palettes via the texture_id field, so a 5-frame
                # sprite atlas with 2 palettes alternates pal[0]/pal[1].
                lut_name = None
                if pal_targets:
                    pal = pal_targets[tex_idx % len(pal_targets)]
                    if isinstance(pal, str):
                        lut_name = pal
                tex_block = by_name[tgt]
                size = block_byte_size(tex_block)
                w, h, dim_src = derive_tex_dims(size, fmt_str, mobj)
                # The MObjSub *truth* dim — what gcDrawMObjForDObj would
                # actually load. Captured regardless of whether it fits
                # the current block size, so the merge pass can detect
                # over-split blocks (size < truth_bytes - 8).
                truth_w = mobj.get("block_dxt") or 0
                truth_h = mobj.get("unk36") or 0
                if truth_w <= 0 or truth_h <= 0:
                    truth_w = mobj.get("unk0C") or 0
                    truth_h = mobj.get("unk0E") or 0
                # if rename target already starts with Tex_, use existing
                # offset suffix; otherwise compute Tex_<file_offset>.
                suffix_existing = find_target_basename(tgt, file_prefix)
                tex_offset = tex_block.get("offset")
                if (suffix_existing.startswith("Tex_")
                        and re.match(r"^Tex_0x[0-9A-Fa-f]+$", suffix_existing)):
                    new_name = tgt
                else:
                    new_name = f"{file_prefix}Tex_0x{tex_offset:X}"

                exp = expected_bytes(fmt_str, w or 0, h or 0)
                size_ok = (exp is not None and exp <= size
                           and (size - exp) <= 8)  # allow ≤8B alignment pad
                if fmt_str is None or w is None or h is None:
                    anomalies.append(
                        f"  ! `{tgt}` (size={size}): can't derive fmt/dim — "
                        f"fmt={fmt_str} mobj.fmt={mobj['fmt']}/"
                        f"{mobj['siz']} block={mobj['block_fmt']}/"
                        f"{mobj['block_siz']} unk0C={mobj['unk0C']} "
                        f"unk0E={mobj['unk0E']}")
                elif not size_ok:
                    anomalies.append(
                        f"  ! `{tgt}`: size={size}, fmt={fmt_str}, "
                        f"dim={w}x{h} ({dim_src}) → expected={exp} bytes "
                        f"(MObjSub `{block['name']}`[{idx}])")
                elif fmt_str not in _RENDERABLE_FMTS:
                    anomalies.append(
                        f"  ! `{tgt}`: fmt={fmt_str} is not a renderable N64 "
                        f"format — likely the MObjSub stores SetTextureImage "
                        f"load-tile fmt/siz, not the actual render fmt "
                        f"(MObjSub `{block['name']}`[{idx}])")
                elif dim_src == "guess":
                    anomalies.append(
                        f"  ! `{tgt}`: MObjSub unk0C/0E and unk38/3A both "
                        f"missing or inconsistent with size — fell back to "
                        f"near-square guess {w}x{h} (MObjSub "
                        f"`{block['name']}`[{idx}])")

                # Skip non-renderable fmt — leaving the block unrenamed
                # avoids burning a Tex_* slot with metadata the previewer
                # can't use. The anomaly above carries the diagnosis.
                skip_apply = (fmt_str is None or w is None or h is None
                              or fmt_str not in _RENDERABLE_FMTS)
                plan.append({
                    "old_name": tgt,
                    "new_name": new_name,
                    "fmt": fmt_str,
                    "w": w,
                    "h": h,
                    "lut": lut_name,
                    "dim_src": dim_src,
                    "size": size,
                    "offset": tex_offset,
                    "truth_w": truth_w,
                    "truth_h": truth_h,
                    "from_mobjsub": block["name"],
                    "from_idx": idx,
                    "from_sprites": sprites_target,
                    "from_palettes": palettes_target,
                    "expected_bytes": exp,
                    "skip_apply": skip_apply,
                })
                seen_blocks.add(tgt)

    # Sweep the entire reloc map for `Tex+offset` chain pointers we
    # didn't already discover via sprites arrays. Each one is a split
    # request without dim/lut info; the planner uses minimal stub dim
    # so the layout split happens but no @tex annotation is forced.
    extra_splits = scan_reloc_for_tex_offsets(reloc_map, by_name)
    for parent, offsets in extra_splits.items():
        for off in offsets:
            existing_offsets = {r["offset"] for r in splits.get(parent, [])}
            if off in existing_offsets:
                continue
            splits.setdefault(parent, []).append({
                "offset": off,
                "fmt": None, "w": None, "h": None, "lut": None,
                "mobjsub": "(reloc-scan)",
                "from_idx": 0, "tex_idx": 0,
                "from_sprites": None,
            })

    return plan, anomalies, splits, by_name, blocks


# ─── merge over-splits ──────────────────────────────────────────────────

def scan_reloc_for_tex_offsets(reloc_map, by_name):
    """Scan a parsed reloc map for `<source>+<offset>: <Tex_X>+<N>`
    entries — any chain pointer landing in the middle of an existing
    `Tex_*` block. These are split candidates even when they originate
    from a u8/u32-typed legacy block (which the regular plan walk
    skips because it can't parse the slot list as pointer expressions).

    Returns a dict {parent_name: set(offsets)} for each Tex with at
    least one mid-block reference. The planner converts these into
    split requests using the MObjSub-supplied dim/lut from any
    referencing sprites array we already saw, otherwise falls back to
    a sensible default."""
    splits_from_reloc = {}
    for (_src, _src_off), target in reloc_map.items():
        m = re.match(r"^(d\w+_Tex_0x[0-9A-Fa-f]+)\+0x([0-9A-Fa-f]+)$", target)
        if not m:
            continue
        parent, off = m.group(1), int(m.group(2), 16)
        if parent not in by_name:
            continue
        if off <= 0 or off >= (by_name[parent].get("size") or 0):
            continue
        splits_from_reloc.setdefault(parent, set()).add(off)
    return splits_from_reloc


def scan_dl_annotations(text, blocks):
    """Find every `/* @tex fmt=… dim=W×H lut=… */` annotation already in
    the .c source (typically inserted by tools/annotateTexBlocks.py from
    DL bindings). Returns a list of plan-style entries — same shape as
    plan_for_file's entries — so find_merges can detect over-splits in
    DL-bound blocks that aren't referenced from any MObjSub sprites
    array. Avoids duplicating an entry the planner already produced."""
    out = []
    decl_re = re.compile(
        r"^/\*\s*@tex\s+fmt=(\w+)\s+dim=(\d+)x(\d+)(?:\s+lut=([A-Za-z_]\w+))?\s*\*/\s*\n"
        r"u8\s+(d\w+_Tex_0x[0-9A-Fa-f]+)\s*\[(\d+)\]\s*=",
        re.MULTILINE,
    )
    by_name = {b["name"]: b for b in blocks}
    for m in decl_re.finditer(text):
        fmt, w, h, lut, name, size = m.group(1), int(m.group(2)), \
            int(m.group(3)), m.group(4), m.group(5), int(m.group(6))
        block = by_name.get(name)
        offset = block["offset"] if block else None
        out.append({
            "old_name": name,
            "new_name": name,
            "fmt": fmt,
            "w": w,
            "h": h,
            "lut": lut,
            "dim_src": "dl_annotation",
            "size": size,
            "offset": offset,
            "truth_w": w,
            "truth_h": h,
            "from_mobjsub": "(DL annotation)",
            "from_idx": 0,
            "from_sprites": None,
            "from_palettes": None,
            "expected_bytes": (w * h * int(re.search(r"\d+$", fmt).group(0)) + 7) // 8,
            "skip_apply": False,
        })
    return out


def find_merges(plan, blocks, dl_entries=None):
    """Detect over-split blocks: plan entries whose `size` is smaller than
    `truth_w × truth_h × bpp / 8` (the MObjSub-specified storage size,
    with up to 8 bytes of alignment pad). For each, find the immediately-
    following sibling sub-block(s) to absorb until the cumulative size
    reaches the truth size. Also consumes DL-annotation entries (from
    scan_dl_annotations) so blocks bound directly by display lists —
    which never appear in plan_for_file's plan — get merged too.

    Returns (merges, anomalies). Each merge dict has:
        parent: name of the block to expand
        absorbed: list of trailing block names to remove
        truth_size: target size after merge (matches truth dim exactly)
        pad: trailing bytes after parent that become PAD(N)
        truth_w, truth_h, fmt, lut: copied from the plan entry

    The `parent` block keeps its name; absorbed siblings disappear from
    the .c source. References to absorbed siblings in any .reloc / .jp.reloc
    must be rewritten to `parent+offset`."""
    merges = []
    anomalies = []
    by_name = {b["name"]: i for i, b in enumerate(blocks)}
    # Combine plan entries with DL-annotation entries; dedup on old_name
    # so a block referenced from both an MObjSub and a DL doesn't get
    # processed twice.
    candidates = list(plan)
    seen = {e["old_name"] for e in candidates}
    for e in (dl_entries or []):
        if e["old_name"] not in seen:
            candidates.append(e)
            seen.add(e["old_name"])
    for entry in candidates:
        if entry.get("skip_apply"):
            continue
        fmt = entry.get("fmt")
        truth_w = entry.get("truth_w") or 0
        truth_h = entry.get("truth_h") or 0
        if not fmt or truth_w <= 0 or truth_h <= 0:
            continue
        bits = int(re.search(r"\d+$", fmt).group(0))
        truth_bytes = (truth_w * truth_h * bits + 7) // 8
        size = entry.get("size") or 0
        # Only consider under-sized blocks (over-split). Allow up to 8
        # bytes pad; if size already accommodates truth_bytes, leave alone.
        if size >= truth_bytes:
            continue
        if size + 8 >= truth_bytes:
            # within alignment pad — no action needed
            continue
        idx = by_name.get(entry["old_name"])
        if idx is None:
            continue
        # Walk subsequent blocks, absorbing each in turn until the
        # cumulative size reaches truth_bytes (with up to 8B trailing pad).
        absorbed = []
        accumulated = size
        j = idx + 1
        while j < len(blocks) and accumulated < truth_bytes:
            nxt = blocks[j]
            nxt_size = nxt.get("size") or 0
            if nxt_size <= 0:
                break
            absorbed.append(nxt["name"])
            accumulated += nxt_size
            j += 1
        # Validate: accumulated must reach truth_bytes (allowing for up
        # to 16B of trailing alignment). Otherwise the merge wouldn't
        # restore the right shape — flag and skip.
        if accumulated < truth_bytes:
            anomalies.append(
                f"  ! `{entry['old_name']}` (size={size}) + "
                f"{len(absorbed)} sibling(s) total {accumulated} < "
                f"truth {truth_bytes} bytes; can't merge to fit "
                f"{fmt} dim={truth_w}x{truth_h}")
            continue
        if accumulated - truth_bytes > 16:
            anomalies.append(
                f"  ! `{entry['old_name']}` merge candidate has "
                f"{accumulated} bytes, leaving {accumulated - truth_bytes} "
                f"trailing pad — too large; skipping")
            continue
        merges.append({
            "parent": entry["old_name"],
            "parent_offset": entry.get("offset") or 0,
            "absorbed": absorbed,
            "truth_size": truth_bytes,
            "pad": accumulated - truth_bytes,
            "truth_w": truth_w,
            "truth_h": truth_h,
            "fmt": fmt,
            "lut": entry.get("lut"),
        })
    return merges, anomalies


def _read_baserom_pad(file_path, parent_offset, truth_size, pad_size):
    """Read the trailing `pad_size` bytes of the merged region from the
    US and JP baserom asset files. Used to pick the right pad form: a
    plain `PAD(N)` when both regions are all-zero, otherwise a
    `#if REGION_JP / static u8 _pad_X[N] = {…}; / #else PAD(N); / #endif`
    block when JP has _jp_pad-style filler bytes there. Returns
    `(us_bytes, jp_bytes)` or `(None, None)` if either asset is missing."""
    base = os.path.basename(file_path)
    m = re.match(r"^(\d+)_(\w+)\.c$", base)
    if not m:
        return None, None
    us_fid = int(m.group(1))
    name = m.group(2)
    # Resolve JP fid by name.
    jp_fid = None
    desc = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.jp.txt")
    if os.path.exists(desc):
        with open(desc) as f:
            for ln in f:
                dm = re.match(rf"^-(\d+):\s+{re.escape(name)}\s*$", ln)
                if dm:
                    jp_fid = int(dm.group(1))
                    break
    pad_off = parent_offset + truth_size

    def _slice(version, fid):
        if fid is None:
            return None
        for suf in (".vpk0.bin", ".bin"):
            p = os.path.join(PROJECT_DIR, "assets", version,
                             "relocData", f"{fid}{suf}")
            if os.path.exists(p):
                with open(p, "rb") as f:
                    f.seek(pad_off)
                    return f.read(pad_size)
        return None

    return _slice("us", us_fid), _slice("jp", jp_fid)


def _format_pad_block(us_bytes, jp_bytes, pad_size, tag):
    """Build the C-source pad text for a merge's trailing region. When
    both versions are all-zero, returns plain `PAD(N);`; when JP has
    non-zero filler, returns the `#if REGION_JP / _pad / #else PAD(N) /
    #endif` form (matching the existing _jp_pad convention in this file).
    `tag` is a unique-ish suffix appended to the static var name."""
    if pad_size <= 0:
        return ""
    us_zero = us_bytes is None or all(b == 0 for b in us_bytes)
    jp_zero = jp_bytes is None or all(b == 0 for b in jp_bytes)
    if us_zero and jp_zero:
        return f"PAD({pad_size});"
    # When JP differs from US, emit a region-guarded pad. We only know
    # the actual bytes in the version where the asset was present.
    parts = []
    parts.append("#if defined(REGION_JP)")
    if jp_bytes is not None:
        hex_list = ", ".join(f"0x{b:02X}" for b in jp_bytes)
        parts.append(f"static u8 _pad_{tag}_jp[{pad_size}] = {{ {hex_list} }};")
    else:
        parts.append(f"PAD({pad_size});")
    parts.append("#else")
    if us_bytes is not None and not us_zero:
        hex_list = ", ".join(f"0x{b:02X}" for b in us_bytes)
        parts.append(f"static u8 _pad_{tag}_us[{pad_size}] = {{ {hex_list} }};")
    else:
        parts.append(f"PAD({pad_size});")
    parts.append("#endif")
    return "\n".join(parts)


def apply_merges(file_path, merges):
    """Rewrite the .c file and every sibling .reloc / .jp.reloc to apply
    each merge. The parent's declaration's `[size]` shrinks to truth_size,
    a region-aware pad block is inserted right after if pad > 0
    (`PAD(N);` if both versions are all-zero there, otherwise a
    `#if REGION_JP / _jp_pad / #else PAD(N) / #endif` block matching the
    existing convention), and absorbed sub-block declarations (decl +
    body + trailing `;` + leading blank line, if present) are removed.
    Reloc references to absorbed names are rewritten to `parent+0xN`
    where N is the absorbed block's offset relative to the parent
    (recomputed from parsing).

    Returns (anomalies). The .c file and reloc files are written in-place."""
    anomalies = []
    if not merges:
        return anomalies
    with open(file_path) as f:
        text = f.read()
    reloc_paths = reloc_paths_for(file_path)
    reloc_texts = {p: open(p).read() for p in reloc_paths}

    for merge in merges:
        parent = merge["parent"]
        parent_decl = find_decl(text, parent)
        if parent_decl is None:
            anomalies.append(f"  ! merge: parent `{parent}` decl not found")
            continue

        # Re-derive each absorbed sub's offset relative to the parent.
        # The parent decl's body_end gives us the byte just after the
        # parent's `;`, and we walk forward through absorbed decls,
        # accumulating their declared `[size]`s — which is exactly the
        # in-binary offset since the splatter packs them contiguously.
        running_off = parent_decl["body"].count
        # Restart from parsing the parent's `[<size>]` — fall back to
        # zero-padding if the bracket isn't a literal.
        size_m = re.search(
            rf"^\s*u8\s+{re.escape(parent)}\s*\[\s*(\d+)\s*\]",
            text[parent_decl["decl_start"]:parent_decl["body_start"]],
            re.MULTILINE,
        )
        cur_off = int(size_m.group(1)) if size_m else 0
        absorbed_offsets = {}
        for aname in merge["absorbed"]:
            absorbed_offsets[aname] = cur_off
            adecl = find_decl(text, aname)
            if adecl is None:
                anomalies.append(
                    f"  ! merge: absorbed `{aname}` decl not found")
                continue
            asize_m = re.search(
                rf"^\s*\w+\s+{re.escape(aname)}\s*\[\s*(\d+)\s*\]",
                text[adecl["decl_start"]:adecl["body_start"]],
                re.MULTILINE,
            )
            asize = int(asize_m.group(1)) if asize_m else 0
            # u16 [N] is 2*N bytes; u32 [N] is 4*N. We only see u8 here
            # (the typical absorbed-tex case), but `palette_X` is u16.
            type_m = re.match(
                rf"\s*(\w+)\s+{re.escape(aname)}",
                text[adecl["decl_start"]:adecl["body_start"]],
            )
            atype = type_m.group(1) if type_m else "u8"
            scale = {"u8": 1, "u16": 2, "u32": 4}.get(atype, 1)
            cur_off += asize * scale

        # Rewrite parent's `[<old_size>]` → `[<truth_size>]`.
        text = re.sub(
            rf"(u8\s+{re.escape(parent)}\s*\[)\s*\d+\s*(\])",
            rf"\g<1>{merge['truth_size']}\g<2>",
            text, count=1,
        )

        # Insert `PAD(<pad>);` immediately after the parent's body_end
        # (i.e., the trailing `;`). Use a leading newline + blank line
        # to keep the visual spacing consistent with surrounding decls.
        # Note: re.sub above changed the text, but the parent's body_end
        # offset shift is at most a few chars (digit count), so we
        # re-locate the parent decl to compute the fresh insertion point.
        parent_decl2 = find_decl(text, parent)
        if parent_decl2 is None:
            anomalies.append(
                f"  ! merge: parent `{parent}` decl missing after resize")
            continue
        if merge["pad"] > 0:
            us_bytes, jp_bytes = _read_baserom_pad(
                file_path,
                merge["parent_offset"],
                merge["truth_size"],
                merge["pad"],
            )
            tag = f"{merge['parent_offset']:X}_{merge['truth_size']:X}"
            pad_block = _format_pad_block(
                us_bytes, jp_bytes, merge["pad"], tag)
            insert = "\n" + pad_block
            text = text[:parent_decl2["body_end"]] + insert + text[parent_decl2["body_end"]:]

        # Strip absorbed decls from text. Each absorbed block may carry
        # a leading prose comment (e.g. `/* @tex … */`) and/or a blank
        # line — collect from the start of any preceding @tex/comment
        # line up through the trailing `;\n` (and any single trailing
        # blank line for tidy spacing).
        for aname in merge["absorbed"]:
            adecl = find_decl(text, aname)
            if adecl is None:
                continue
            line_start = text.rfind("\n", 0, adecl["decl_start"]) + 1
            # Walk back over consecutive comment-only lines (`/* ... */`
            # immediately above the decl) so they get removed too.
            scan = line_start
            while scan > 0:
                prev_nl = text.rfind("\n", 0, scan - 1)
                prev_line = text[(prev_nl + 1 if prev_nl >= 0 else 0):scan - 1]
                stripped = prev_line.strip()
                if stripped.startswith("/*") and stripped.endswith("*/"):
                    scan = prev_nl + 1 if prev_nl >= 0 else 0
                    continue
                break
            end = adecl["body_end"]
            # Eat one trailing newline if it would leave a stranded blank
            # line — keeps spacing consistent.
            if end < len(text) and text[end] == "\n":
                end += 1
            text = text[:scan] + text[end:]

        # Update reloc files: `<absorbed>` → `<parent>+0x<off>`.
        for aname in merge["absorbed"]:
            off = absorbed_offsets.get(aname, 0)
            replacement = f"{parent}+0x{off:X}"
            for rp in list(reloc_texts):
                # Be careful not to replace `<absorbed>` *if* it already
                # has a `+0xN` suffix (some reloc lines already encode
                # an in-block offset). In that case we add the offsets:
                # `<absorbed>+0xK` → `<parent>+0x(off+K)`.
                def repl_with_inner_off(m):
                    inner = int(m.group(1), 16) if m.group(1) else 0
                    return f"{parent}+0x{(off + inner):X}"
                reloc_texts[rp] = re.sub(
                    rf"\b{re.escape(aname)}(?:\+0x([0-9A-Fa-f]+))?\b",
                    repl_with_inner_off,
                    reloc_texts[rp],
                )

    with open(file_path, "w") as f:
        f.write(text)
    for rp, rt in reloc_texts.items():
        with open(rp, "w") as f:
            f.write(rt)

    return anomalies


# ─── apply edits ────────────────────────────────────────────────────────

def plan_split_layout(parent_name, parent_block, split_reqs):
    """Resolve a parent-texture's split requests into a contiguous list
    of `(name, size, fmt, w, h, lut)` sub-blocks covering the parent's
    full byte range. The first sub-block keeps the parent's name; later
    ones are named `<file_prefix>Tex_0x<absolute_file_offset>`.

    Sizes come from the difference between consecutive split offsets
    (and from the parent's end). The MObjSub-supplied dim is preserved
    in the per-slot dict but isn't enforced against size — the actual
    sub-block may include trailing alignment padding (typically 8B).
    Returns (layout, anomalies)."""
    parent_size = parent_block.get("size") or 0
    parent_offset = parent_block.get("offset") or 0
    anomalies = []
    # Dedup splits at the same offset (multiple MObjSubs frequently
    # share a sprites array — keep the first dim/lut we saw).
    by_off = {}
    for req in split_reqs:
        if req["offset"] not in by_off:
            by_off[req["offset"]] = req
    offsets = sorted(by_off)
    if not offsets:
        return [], anomalies
    # Drop out-of-bounds offsets (a previous split round may have already
    # shrunk the parent below the request, leaving stale offsets in the
    # reloc that already point past the parent's new size — the .reloc
    # remapper handles those once a new split runs).
    in_bounds = []
    for off in offsets:
        if off <= 0 or off >= parent_size:
            anomalies.append(
                f"  ! split at `{parent_name}+0x{off:X}` falls outside "
                f"parent (size={parent_size}); skipping this offset only")
            continue
        in_bounds.append(off)
    if not in_bounds:
        return [], anomalies
    offsets = in_bounds

    layout = [{
        "name": parent_name,
        "size": offsets[0],
        "fmt": None, "w": None, "h": None, "lut": None,
        "is_parent_head": True,
    }]
    name_re = re.match(r"^(d\w+?_)Tex_0x[0-9A-Fa-f]+$", parent_name)
    file_prefix = name_re.group(1) if name_re else parent_name + "_"
    for i, off in enumerate(offsets):
        end = offsets[i + 1] if i + 1 < len(offsets) else parent_size
        size = end - off
        if size <= 0:
            anomalies.append(
                f"  ! split at `{parent_name}+0x{off:X}` has zero/negative "
                f"size; skipping splits for this parent")
            return [], anomalies
        req = by_off[off]
        sub_off_abs = parent_offset + off
        sub_name = f"{file_prefix}Tex_0x{sub_off_abs:X}"
        layout.append({
            "name": sub_name,
            "size": size,
            "fmt": req["fmt"], "w": req["w"], "h": req["h"], "lut": req["lut"],
            "parent_offset": off,
            "from_mobjsub": req["mobjsub"],
        })
    return layout, anomalies


def apply_splits(file_path, splits, by_name):
    """For each parent block with split requests, rewrite its declaration
    in the .c file into a sequence of sub-block declarations covering
    the parent's byte range. The first piece keeps the parent's name
    (with reduced size); later pieces get fresh `Tex_0x<file_offset>`
    names. Each new piece's `.tex.inc.c` will be regenerated by
    `make extract` from the baserom slice at that offset.

    Also rewrites every `&parent[off]` / `(cast)&parent[off]` reference
    in the same file — and *every* sibling .reloc / .jp.reloc — to use
    the new sub-symbol name. Returns
        (new_c_text, {reloc_path: new_text, ...}, anomalies, sub_names_by_parent)."""
    with open(file_path) as f:
        text = f.read()
    reloc_texts = {}
    for p in reloc_paths_for(file_path):
        with open(p) as f:
            reloc_texts[p] = f.read()

    anomalies = []
    sub_names = {}  # parent → list of sub-block dicts (as in plan_split_layout)

    for parent, reqs in splits.items():
        if parent not in by_name:
            anomalies.append(f"  ! split parent `{parent}` not declared")
            continue
        layout, layout_anom = plan_split_layout(parent, by_name[parent], reqs)
        anomalies.extend(layout_anom)
        if not layout:
            continue
        sub_names[parent] = layout

        # Rewrite the parent's declaration into the layout sequence.
        decl = find_decl(text, parent)
        if decl is None:
            anomalies.append(f"  ! couldn't locate decl for `{parent}`")
            continue

        # Find the leading comment block (any /* ... */ + header lines
        # immediately above the decl). We replace the decl-line + body +
        # trailing `;` only — leading prose comments stay attached to
        # the head sub-block (whose name is unchanged).
        new_decls = []
        for i, sub in enumerate(layout):
            ann = ""
            if not sub.get("is_parent_head") and sub["fmt"] and sub["w"] and sub["h"]:
                ann_body = f"@tex fmt={sub['fmt']} dim={sub['w']}x{sub['h']}"
                if sub.get("lut"):
                    ann_body += f" lut={sub['lut']}"
                ann = f"/* {ann_body} */\n"
            # Each sub-block uses the same `<File>/<short>.tex.inc.c`
            # extension regardless of original block kind.
            inc_short = re.match(r"^d(\w+?)_(.+)$", sub["name"])
            if inc_short:
                short = inc_short.group(1)
                suf = inc_short.group(2)
                inc = f"#include <{short}/{suf}.tex.inc.c>"
            else:
                inc = f"/* missing include for {sub['name']} */"
            new_decls.append(
                f"{ann}u8 {sub['name']}[{sub['size']}] = {{\n\t{inc}\n}};"
            )
        replacement = "\n\n".join(new_decls)

        # Build a regex for the parent's full declaration including any
        # `static`/`const`/leading whitespace. The body_end already
        # consumes the trailing `;`.
        line_start = text.rfind("\n", 0, decl["decl_start"]) + 1
        text = text[:line_start] + replacement + text[decl["body_end"]:]

        # After rewriting the parent decl, insert forward `extern u8`
        # declarations for every new sub-symbol so the sprites array
        # (declared earlier in the file) can resolve them. We hook them
        # in immediately after the parent's existing
        # `extern u8 <parent>[];` line — matches the convention already
        # used for split-out sub-frames.
        ext_re = re.compile(
            rf"^extern\s+u8\s+{re.escape(parent)}\s*\[\s*\]\s*;\s*$",
            re.MULTILINE,
        )
        ext_match = ext_re.search(text)
        if ext_match:
            insert_pos = ext_match.end()
            ext_lines = []
            for sub in layout:
                if sub.get("is_parent_head"):
                    continue
                ext = f"extern u8 {sub['name']}[];"
                if ext not in text:
                    ext_lines.append("\n" + ext)
            if ext_lines:
                text = text[:insert_pos] + "".join(ext_lines) + text[insert_pos:]

        # Rewrite every `&parent[off]` / `(cast)&parent[off]` reference,
        # plus the legacy `(u32)((u8*)&parent + 0xN)` form.
        for sub in layout:
            if sub.get("is_parent_head"):
                continue
            off = sub["parent_offset"]
            # `&parent[<off>]` or `(cast)&parent[<off>]`
            ref_re = re.compile(
                rf"\(?\s*(?:\(\s*\w+\s*\**\s*\)\s*)?\&\s*"
                rf"{re.escape(parent)}\s*\[\s*"
                rf"(?:0x0*{off:X}|{off})\s*\]\s*\)?",
                re.IGNORECASE,
            )
            text = ref_re.sub(sub["name"], text)
            # Legacy expression form `(u32)((u8*)&parent + 0xN)` — common
            # in older `u32 X[]` sprite/palette tables. Strip the casts
            # too so the slot becomes a plain symbol reference.
            legacy_re = re.compile(
                rf"\(\s*\w+\s*\**\s*\)\s*\(\s*\(\s*\w+\s*\**\s*\)\s*\&\s*"
                rf"{re.escape(parent)}\s*\+\s*"
                rf"(?:0x0*{off:X}|{off})\s*\)",
                re.IGNORECASE,
            )
            text = legacy_re.sub(sub["name"], text)

        # Build the parent's full sub-block range table so we can map *any*
        # `parent+0xK` reloc target — even ones that don't align to a split
        # boundary — to `<sub>+0x<remainder>`. Without this fixup, refs
        # whose offset falls past the head's new (smaller) size would be
        # left dangling, breaking fixRelocChain.py.
        ranges = []  # list of (start_offset, sub_name)
        cur = 0
        for sub in layout:
            ranges.append((cur, sub["name"]))
            cur += sub["size"]
        ranges.sort()
        def remap_target(parent_off):
            """Find the sub-block covering `parent_off` and return
            `<sub>+0x<remainder>` (or just `<sub>` if remainder == 0)."""
            chosen = None
            for start, name in ranges:
                if start <= parent_off:
                    chosen = (start, name)
                else:
                    break
            if chosen is None:
                return None
            start, name = chosen
            rem = parent_off - start
            return name if rem == 0 else f"{name}+0x{rem:X}"

        ref_re = re.compile(rf"\b{re.escape(parent)}\+0x([0-9A-Fa-f]+)\b")
        def _ref_repl(m):
            new = remap_target(int(m.group(1), 16))
            return new if new is not None else m.group(0)
        for rp in list(reloc_texts):
            reloc_texts[rp] = ref_re.sub(_ref_repl, reloc_texts[rp])

    return text, reloc_texts, anomalies, sub_names


def apply_plan(file_path, plan):
    """Rewrite the .c file: rename each old block symbol to new_name and
    add a `/* @tex fmt=<F> dim=<W>x<H> */` comment immediately above its
    declaration. Updates all references to the old name in the same file
    (sprites array entries, externs, comments, etc.). Returns the new
    text."""
    with open(file_path) as f:
        text = f.read()

    # Pass 1: insert annotation comment + rename declaration line.
    for entry in plan:
        if entry.get("skip_apply"):
            continue
        old, new = entry["old_name"], entry["new_name"]
        fmt, w, h = entry["fmt"], entry["w"], entry["h"]
        if fmt is None or w is None or h is None:
            continue
        lut = entry.get("lut")
        ann_body = f"@tex fmt={fmt} dim={w}x{h}"
        if lut:
            ann_body += f" lut={lut}"
        ann = f"/* {ann_body} */\n"

        decl = find_decl(text, old)
        if decl is None:
            continue
        # locate the start-of-line for the declaration so we insert the
        # comment on its own line just above.
        line_start = text.rfind("\n", 0, decl["decl_start"]) + 1
        # If an `@tex` annotation is already present on the line directly
        # above the decl, replace it (rewrites stale lut= / dim= values
        # whenever the planner produces a new derivation).
        prev_nl = text.rfind("\n", 0, line_start - 1)
        prev_line = text[prev_nl + 1:line_start - 1] if prev_nl >= 0 else ""
        if "@tex" in prev_line:
            text = text[:prev_nl + 1] + ann + text[line_start:]
        else:
            text = text[:line_start] + ann + text[line_start:]

    # Pass 2: rewrite all references — declaration name + uses + include path.
    for entry in plan:
        if entry.get("skip_apply"):
            continue
        old, new = entry["old_name"], entry["new_name"]
        if old == new:
            continue
        # whole-word symbol replacement
        text = re.sub(rf"\b{re.escape(old)}\b", new, text)
        # also rewrite the include path: `<File/<old_suffix>.tex.inc.c>` etc.
        # We don't know the exact existing include suffix here, so handle
        # both `.tex.inc.c` and `.data.inc.c` forms via a broader regex.
        # The old suffix is whatever followed `dFile_` — recompute it.
        # Note: this is best-effort; missing or already-Tex_ paths are
        # tolerated.
        m_old = re.match(r"^d(\w+?)_(.+)$", old)
        m_new = re.match(r"^d(\w+?)_(.+)$", new)
        if m_old and m_new and m_old.group(1) == m_new.group(1):
            short = m_old.group(1)
            old_suf = m_old.group(2)
            new_suf = m_new.group(2)
            for ext in (".tex.inc.c", ".data.inc.c"):
                old_inc = f"<{short}/{old_suf}{ext}>"
                new_inc = f"<{short}/{new_suf}.tex.inc.c>"
                text = text.replace(old_inc, new_inc)

    return text


def apply_reloc(reloc_path, plan):
    """Rewrite the .reloc file: replace every occurrence of an old symbol
    name with its new name. Returns the new text or None if .reloc is
    missing."""
    if not os.path.exists(reloc_path):
        return None
    with open(reloc_path) as f:
        text = f.read()
    for entry in plan:
        if entry.get("skip_apply"):
            continue
        old, new = entry["old_name"], entry["new_name"]
        if old == new:
            continue
        text = re.sub(rf"\b{re.escape(old)}\b", new, text)
    return text


def reloc_paths_for(c_path):
    """Return the list of every .reloc / .jp.reloc / .us.reloc sibling
    of `c_path` that exists on disk. JP-specific reloc files must be
    updated alongside the shared .reloc whenever the tool renames a
    symbol or splits a parent block — otherwise the JP build resolves
    chain pointers via stale symbol names and the ROM diverges."""
    base = c_path[:-2]  # strip `.c`
    out = []
    for suffix in (".reloc", ".jp.reloc", ".us.reloc"):
        p = base + suffix
        if os.path.exists(p):
            out.append(p)
    return out


# ─── driver ─────────────────────────────────────────────────────────────

def find_c_file(fid):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def discover_mobjsub_fids():
    """Return all fids whose master .c has at least one top-level
    `MObjSub `-typed declaration (struct or array, not pointer)."""
    fids = []
    for fn in sorted(os.listdir(RELOC_DIR)):
        m = re.match(r"^(\d+)_(\w+)\.c$", fn)
        if not m:
            continue
        with open(os.path.join(RELOC_DIR, fn)) as f:
            t = f.read()
        if re.search(r"^MObjSub\s+\w+", t, re.MULTILINE):
            fids.append(int(m.group(1)))
    return fids


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    if args.all:
        targets = discover_mobjsub_fids()
    elif args.file_ids:
        targets = args.file_ids
    else:
        ap.print_help()
        sys.exit(1)

    summary_anomalies = []

    for fid in targets:
        c_path, short = find_c_file(fid)
        if c_path is None:
            print(f"fid {fid}: no .c file found")
            continue
        plan, anomalies, splits, by_name, blocks = plan_for_file(fid, c_path)
        # Detect over-splits: blocks too small for their MObjSub-truth
        # dim. Each gets a merge that absorbs the next sibling(s) until
        # the cumulative size matches truth_size + ≤8B pad. Also pulls in
        # @tex annotations the DL walker (annotateTexBlocks.py) put on
        # DL-bound parents, so over-split DL parents (e.g. Tex_0xB610
        # annotated 16x16 but only 24 bytes long) get caught too.
        with open(c_path) as _f:
            _src_text = _f.read()
        dl_entries = scan_dl_annotations(_src_text, blocks)
        merges, merge_anom = find_merges(plan, blocks, dl_entries)
        anomalies.extend(merge_anom)

        if not plan and not anomalies and not splits and not merges:
            continue
        split_count = sum(len(set(r["offset"] for r in v)) for v in splits.values())
        print(f"\n=== fid {fid} ({short}) — {len(plan)} sprite block(s), "
              f"{split_count} split(s), {len(merges)} merge(s), "
              f"{len(anomalies)} anomalies ===")
        for m in merges:
            print(f"  MERGE `{m['parent']}` ← absorb {m['absorbed']} "
                  f"→ size {m['truth_size']} + PAD({m['pad']}) "
                  f"({m['fmt']} {m['truth_w']}x{m['truth_h']})")
        for parent, reqs in splits.items():
            offs = sorted(set(r["offset"] for r in reqs))
            print(f"  SPLIT `{parent}` at " +
                  ", ".join(f"+0x{o:X}" for o in offs))
        for entry in plan:
            note = f"@ 0x{entry['offset']:X}" if entry['offset'] is not None else ""
            tag = " [SKIP]" if entry.get("skip_apply") else ""
            rename = (
                f"  {entry['old_name']} → {entry['new_name']}{tag}"
                if entry['old_name'] != entry['new_name']
                else f"  {entry['old_name']} (kept){tag}"
            )
            print(f"{rename}  {note}")
            lut_part = f" lut={entry['lut']}" if entry.get("lut") else ""
            print(f"    @tex fmt={entry['fmt']} dim={entry['w']}x{entry['h']}"
                  f"{lut_part}  (size={entry['size']}, src={entry['dim_src']})")
        for a in anomalies:
            print(a)
            summary_anomalies.append(f"fid {fid}: {a.lstrip()}")

        if args.dry_run or not (plan or splits or merges):
            continue

        # apply merges first — over-split parents absorb siblings,
        # collapsing spurious sub-symbols into PAD() so subsequent
        # annotation passes see the correct (truth-dim-sized) blocks.
        if merges:
            apply_anom = apply_merges(c_path, merges)
            for a in apply_anom:
                print(a)
                summary_anomalies.append(f"fid {fid}: {a.lstrip()}")
            # Re-plan after merging: the block list has changed (some
            # absorbed siblings are gone, parent's size is now truth-fit
            # so dim_src will resolve to block_dxt instead of guess).
            plan, anomalies, splits, by_name, blocks = plan_for_file(fid, c_path)
            for a in anomalies:
                summary_anomalies.append(f"fid {fid}: {a.lstrip()}")

        # apply splits first so the .c file's parent decls are rewritten
        # into per-sub-frame Tex_0xN blocks; the rename pass below then
        # operates on the new symbol space.
        if splits:
            new_text, new_relocs, split_anom, _sub = apply_splits(
                c_path, splits, by_name)
            with open(c_path, "w") as f:
                f.write(new_text)
            for rp, rt in new_relocs.items():
                with open(rp, "w") as f:
                    f.write(rt)
            for a in split_anom:
                print(a)
                summary_anomalies.append(f"fid {fid}: {a.lstrip()}")

        # apply renames + annotations across the .c and *every* sibling
        # .reloc / .jp.reloc — JP-only relocs must follow the rename or
        # the JP build resolves chain pointers via stale symbol names.
        new_text = apply_plan(c_path, plan)
        with open(c_path, "w") as f:
            f.write(new_text)
        for rp in reloc_paths_for(c_path):
            new_reloc = apply_reloc(rp, plan)
            if new_reloc is not None:
                with open(rp, "w") as f:
                    f.write(new_reloc)

    if summary_anomalies:
        print(f"\n{'─' * 60}\nFLAGGED ANOMALIES ({len(summary_anomalies)}):")
        for a in summary_anomalies:
            print(f"  {a}")


if __name__ == "__main__":
    main()
