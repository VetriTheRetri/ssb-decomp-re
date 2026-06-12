#!/usr/bin/env python3
"""
Shared helpers for symbolic AObjEvent32 track-flag rendering.

The 10-bit `flags` field of SetVal*/SetExtVal* command words is a bitmask
of animation tracks, but WHICH track window bit N addresses depends on
the parser the script is registered with at runtime (src/sys/objanim.c):

  joint     gcParseDObjAnimJoint     bit N -> nGCAnimTrackJointStart + N
            (RotX..ScaZ — DObj position/rotation/scale)
  material  gcParseMObjMatAnimJoint  bit N -> nGCAnimTrackMaterialStart + N
            (TextureID..PaletteID — MObj texture/palette state)
  camera    gcParseCObjCamAnimJoint  bit N -> nGCAnimTrackCameraStart + N
            (EyeX..FovY — CObj look-at parameters)

The SetExtVal* commands exist ONLY in the material parser and address the
material color window (PrimColor..Light2Color); their payload words are
packed RGBA SYColorPack colors, not f32s.

The constant names emitted here are #define'd in src/sys/objdef.h — both
sides must stay in sync.
"""

import re

# --- Per-context flag-name tables ------------------------------------------
# bit value -> constant name (objdef.h)

JOINT_FLAGS = {
    0x001: "AOBJ_FLAG_ROTX",
    0x002: "AOBJ_FLAG_ROTY",
    0x004: "AOBJ_FLAG_ROTZ",
    0x008: "AOBJ_FLAG_TRAI",
    0x010: "AOBJ_FLAG_TRAX",
    0x020: "AOBJ_FLAG_TRAY",
    0x040: "AOBJ_FLAG_TRAZ",
    0x080: "AOBJ_FLAG_SCAX",
    0x100: "AOBJ_FLAG_SCAY",
    0x200: "AOBJ_FLAG_SCAZ",
}

# Whole-axis-group shorthands, tried greedily before single bits.
JOINT_COMBOS = [
    (0x007, "AOBJ_FLAG_ROTXYZ"),
    (0x070, "AOBJ_FLAG_TRAXYZ"),
    (0x380, "AOBJ_FLAG_SCAXYZ"),
]

MATERIAL_FLAGS = {
    0x001: "AOBJ_MATFLAG_TEXID",
    0x002: "AOBJ_MATFLAG_TRAU",
    0x004: "AOBJ_MATFLAG_TRAV",
    0x008: "AOBJ_MATFLAG_SCAU",
    0x010: "AOBJ_MATFLAG_SCAV",
    0x020: "AOBJ_MATFLAG_TEXIDNEXT",
    0x040: "AOBJ_MATFLAG_SCRU",
    0x080: "AOBJ_MATFLAG_SCRV",
    0x100: "AOBJ_MATFLAG_LFRAC",
    0x200: "AOBJ_MATFLAG_PALETTEID",
}

EXT_FLAGS = {
    0x001: "AOBJ_EXTFLAG_PRIMCOLOR",
    0x002: "AOBJ_EXTFLAG_ENVCOLOR",
    0x004: "AOBJ_EXTFLAG_BLENDCOLOR",
    0x008: "AOBJ_EXTFLAG_LIGHT1COLOR",
    0x010: "AOBJ_EXTFLAG_LIGHT2COLOR",
}

CAMERA_FLAGS = {
    0x001: "AOBJ_CAMFLAG_EYEX",
    0x002: "AOBJ_CAMFLAG_EYEY",
    0x004: "AOBJ_CAMFLAG_EYEZ",
    0x008: "AOBJ_CAMFLAG_EYEI",
    0x010: "AOBJ_CAMFLAG_ATX",
    0x020: "AOBJ_CAMFLAG_ATY",
    0x040: "AOBJ_CAMFLAG_ATZ",
    0x080: "AOBJ_CAMFLAG_ATI",
    0x100: "AOBJ_CAMFLAG_UPX",
    0x200: "AOBJ_CAMFLAG_FOVY",
}

CONTEXT_TABLES = {
    "joint": (JOINT_FLAGS, JOINT_COMBOS),
    "material": (MATERIAL_FLAGS, []),
    "camera": (CAMERA_FLAGS, []),
    "ext": (EXT_FLAGS, []),
}

# Name -> value, across all contexts (names are globally unique).
_NAME_TO_VALUE = {}
for _tbl, _combos in CONTEXT_TABLES.values():
    for _v, _n in _tbl.items():
        _NAME_TO_VALUE[_n] = _v
    for _v, _n in _combos:
        _NAME_TO_VALUE[_n] = _v


# Macros whose first arg is a track-flag bitmask in the SCRIPT's context
# (joint / material / camera depending on which runtime list consumes it).
SETVAL_FLAG_MACROS = {
    "aobjEvent32SetVal", "aobjEvent32SetValBlock",
    "aobjEvent32SetValRate", "aobjEvent32SetValRateBlock",
    "aobjEvent32SetVal0Rate", "aobjEvent32SetVal0RateBlock",
    "aobjEvent32SetValAfter", "aobjEvent32SetValAfterBlock",
    "aobjEvent32SetTargetRate",
    "aobjEvent32Cmd12",
}

# Macros whose first arg is ALWAYS a material-color (ext) bitmask,
# regardless of how the script symbol is reached.
SETEXT_FLAG_MACROS = {
    "aobjEvent32SetExtVal", "aobjEvent32SetExtValBlock",
    "aobjEvent32SetExtValAfter", "aobjEvent32SetExtValAfterBlock",
}


def format_flags(value, context):
    """Render `value` as an OR-expression of AOBJ_*FLAG_* names for the
    given context ('joint' / 'material' / 'camera' / 'ext'). Returns a
    hex literal when the context is unknown/None or any bit has no name."""
    if value == 0:
        return "0"
    if context not in CONTEXT_TABLES:
        return f"0x{value:03X}"
    table, combos = CONTEXT_TABLES[context]
    parts = []
    rest = value
    for combo_val, combo_name in combos:
        if rest & combo_val == combo_val:
            parts.append(combo_name)
            rest &= ~combo_val
    bit = 1
    while bit <= rest:
        if rest & bit:
            if bit not in table:
                return f"0x{value:03X}"  # unmappable bit -> keep raw
            parts.append(table[bit])
        bit <<= 1
    # Keep bit-significance order: single flags sort by value, combos
    # were appended first; re-sort everything by their numeric value.
    parts.sort(key=lambda n: _NAME_TO_VALUE[n])
    return " | ".join(parts)


def parse_flags_expr(expr):
    """Evaluate a flags argument: hex/decimal literal, AOBJ_* name, or a
    `|` expression of those. Raises ValueError on anything else."""
    total = 0
    for tok in expr.split("|"):
        tok = tok.strip()
        if not tok:
            raise ValueError(f"empty term in flags expr: {expr!r}")
        if tok in _NAME_TO_VALUE:
            total |= _NAME_TO_VALUE[tok]
        else:
            total |= int(tok, 0)
    return total


def rgba_comment(word):
    """Render a packed SYColorPack payload word as an RGBA comment body."""
    r = (word >> 24) & 0xFF
    g = (word >> 16) & 0xFF
    b = (word >> 8) & 0xFF
    a = word & 0xFF
    return f"RGBA({r}, {g}, {b}, {a})"


# --- Script context classification ------------------------------------------

_SCRIPT_DECL_RE = re.compile(
    r"^\s*u32\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*\[[^\]]*\]\s*=\s*\{",
    re.M,
)
_PTR_ARRAY_RE = re.compile(
    r"^\s*AObjEvent32\s*\*\s*(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*\[[^\]]*\]\s*=\s*\{",
    re.M,
)
_PP_ARRAY_RE = re.compile(
    r"^\s*AObjEvent32\s*\*\s*\*\s*(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*\[[^\]]*\]\s*=\s*\{",
    re.M,
)
_SYM_RE = re.compile(r"\bd[A-Za-z_][A-Za-z_0-9]*\b")


def _decl_body(text, start):
    """Return initializer body text from the `{` at/after `start` to its
    matching `};` (line-based; relocData decls close with `};` on its
    own line)."""
    end = text.find("\n};", start)
    if end == -1:
        end = len(text)
    return text[start:end]


def classify_scripts(text):
    """Map each u32 AObjEvent32-script decl name in `text` to a context:
    'joint' / 'material' / 'camera' / None (unknown).

    Signals, strongest first:
      1. symbol name contains matanim/camanim/animjoint (case-insens.)
      2. script body contains SetExt* or Cmd22 -> material-only commands
      3. script is reached through an `AObjEvent32 **` table (the
         per-DObj-per-MObj indirection only gcAddMatAnimJointAll uses)
         -> material
      4. script is referenced from an `AObjEvent32 *` array that is NOT
         inside any `**` table (the per-DObj animjoints shape) -> joint
    """
    # Scripts: name -> body
    scripts = {}
    for m in _SCRIPT_DECL_RE.finditer(text):
        body = _decl_body(text, m.end())
        if "aobjEvent32" in body:
            scripts[m.group("name")] = body

    # AObjEvent32 * arrays: name -> set of referenced symbols
    ptr_arrays = {}
    for m in _PTR_ARRAY_RE.finditer(text):
        body = _decl_body(text, m.end())
        ptr_arrays[m.group("name")] = set(_SYM_RE.findall(body))

    # AObjEvent32 ** tables: union of referenced array names
    pp_members = set()
    for m in _PP_ARRAY_RE.finditer(text):
        body = _decl_body(text, m.end())
        pp_members |= set(_SYM_RE.findall(body))

    result = {}
    for name, body in scripts.items():
        low = name.lower()
        if "matanim" in low:
            result[name] = "material"
            continue
        if "camanim" in low:
            result[name] = "camera"
            continue
        if "animjoint" in low:
            result[name] = "joint"
            continue
        if re.search(r"\baobjEvent32SetExtVal|\baobjEvent32Cmd22\b", body):
            result[name] = "material"
            continue
        ctx = None
        for arr_name, refs in ptr_arrays.items():
            if name not in refs:
                continue
            arr_low = arr_name.lower()
            if "matanim" in arr_low or arr_name in pp_members:
                ctx = "material"
                break
            if "camanim" in arr_low:
                ctx = "camera"
                break
            if "animjoint" in arr_low:
                ctx = "joint"
                break
            # Plain `AObjEvent32 *` array not inside any ** table: the
            # per-DObj animjoints shape.
            ctx = "joint"
        result[name] = ctx
    return result
