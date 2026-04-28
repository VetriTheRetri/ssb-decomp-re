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
        "palettes":   toks[15],
        "block_fmt":  fmt_token(toks[17]),
        "block_siz":  siz_token(toks[18]),
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
    """Pick (width, height) for a texture block.
    Preference: unk0C/unk0E if those produce expected_bytes within an
    8-byte alignment pad of block_size, else unk38/unk3A on same
    condition, else guess_dims from pixel count. Returns (w, h, source)
    where source is one of 'unk0C/0E', 'unk38/3A', 'guess', 'none'."""
    if fmt_str is None or block_size <= 0:
        return None, None, "none"
    bits = int(re.search(r"\d+$", fmt_str).group(0))
    pixels = block_size * 8 // bits

    for label, (w, h) in (
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
    a dict with: start (line index of decl), end (line index of `;`),
    head_line_idx, type, name, body, body_start, body_end (offsets in
    text). Returns None if not found."""
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
            "decl_start": m.start(),
            "body_start": body_start,
            "body_end": body_end,
        }
    return None


def find_pointer_array_targets(text, array_name):
    """Find `void *<array_name>[N] = { (void*)A, (void*)B, NULL };` and
    return the list of pointee symbol names. Each entry is one of:
       - str: direct symbol reference we can rename
       - None: NULL slot
       - ("__expr__", text): cast involving arithmetic (e.g. base+offset)
       - ("__unresolved__", text): bare numeric literal (chain placeholder
         left for fixRelocChain.py — would need .reloc lookup to resolve)
    Returns None if the array isn't found."""
    decl = find_decl(text, array_name)
    if decl is None:
        return None
    if decl["type"] not in ("void", "MObjSub"):
        return None
    body = decl["body"]
    targets = []
    for tok in split_top_level(body):
        tok = tok.strip().rstrip(",")
        if not tok:
            continue
        # Strip leading cast `(void *)` / `(void**)` so the remaining text
        # exposes the actual pointee expression.
        cast_stripped = re.sub(r"^\(\s*void\s*\*+\s*\)\s*", "", tok)
        cast_stripped = cast_stripped.strip()
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


def plan_for_file(fid, file_path):
    """Return (plan, anomalies) for a single relocData .c file.
    `plan` is an ordered list of per-block actions. `anomalies` is a list
    of human-readable warning strings to surface for follow-up review."""
    with open(file_path) as f:
        text = f.read()

    # `<File>` short name (e.g. `StageZebesFile2`) and `dFile_` prefix.
    base = os.path.basename(file_path)
    short_name = re.match(r"^\d+_(\w+)\.c$", base).group(1)
    file_prefix = f"d{short_name}_"

    blocks = collect_blocks(file_path)
    by_name = {b["name"]: b for b in blocks}

    plan = []
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
                if tgt in seen_blocks:
                    continue
                if tgt not in by_name:
                    anomalies.append(
                        f"  ! sprites[{tex_idx}] = `{tgt}` — not declared in "
                        f"this file")
                    continue
                tex_block = by_name[tgt]
                size = block_byte_size(tex_block)
                w, h, dim_src = derive_tex_dims(size, fmt_str, mobj)
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
                    "dim_src": dim_src,
                    "size": size,
                    "offset": tex_offset,
                    "from_mobjsub": block["name"],
                    "from_idx": idx,
                    "from_sprites": sprites_target,
                    "expected_bytes": exp,
                    "skip_apply": skip_apply,
                })
                seen_blocks.add(tgt)

    return plan, anomalies


# ─── apply edits ────────────────────────────────────────────────────────

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
        ann = f"/* @tex fmt={fmt} dim={w}x{h} */\n"

        decl = find_decl(text, old)
        if decl is None:
            continue
        # locate the start-of-line for the declaration so we insert the
        # comment on its own line just above.
        line_start = text.rfind("\n", 0, decl["decl_start"]) + 1
        # avoid duplicate annotations if one already exists immediately above
        prev_line = text[max(0, line_start - 200):line_start]
        if re.search(r"@tex\s+fmt=", prev_line.split("\n")[-2] if "\n" in prev_line else prev_line):
            new_text = text
        else:
            new_text = text[:line_start] + ann + text[line_start:]
        text = new_text

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
        plan, anomalies = plan_for_file(fid, c_path)
        if not plan and not anomalies:
            continue
        print(f"\n=== fid {fid} ({short}) — {len(plan)} sprite block(s), "
              f"{len(anomalies)} anomalies ===")
        for entry in plan:
            note = f"@ 0x{entry['offset']:X}" if entry['offset'] is not None else ""
            tag = " [SKIP]" if entry.get("skip_apply") else ""
            rename = (
                f"  {entry['old_name']} → {entry['new_name']}{tag}"
                if entry['old_name'] != entry['new_name']
                else f"  {entry['old_name']} (kept){tag}"
            )
            print(f"{rename}  {note}")
            print(f"    @tex fmt={entry['fmt']} dim={entry['w']}x{entry['h']}"
                  f"  (size={entry['size']}, src={entry['dim_src']})")
        for a in anomalies:
            print(a)
            summary_anomalies.append(f"fid {fid}: {a.lstrip()}")

        if args.dry_run or not plan:
            continue

        # apply
        new_text = apply_plan(c_path, plan)
        with open(c_path, "w") as f:
            f.write(new_text)
        reloc_path = c_path[:-2] + ".reloc"
        new_reloc = apply_reloc(reloc_path, plan)
        if new_reloc is not None:
            with open(reloc_path, "w") as f:
                f.write(new_reloc)

    if summary_anomalies:
        print(f"\n{'─' * 60}\nFLAGGED ANOMALIES ({len(summary_anomalies)}):")
        for a in summary_anomalies:
            print(f"  {a}")


if __name__ == "__main__":
    main()
