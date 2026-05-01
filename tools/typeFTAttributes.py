#!/usr/bin/env python3
"""
Convert raw u32 FTAttributes data in Fighter Main relocData C files to
typed FTAttributes struct initializers.

Reads the binary from assets/relocData/<id>.vpk0.bin, parses FTAttributes
at the given offset, and rewrites the .c file with a proper struct initializer.
Also updates the .reloc file to use the new symbol name.
"""

import struct
import sys
import os
import re
import math

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Fighter Main files: (file_id, name, o_attributes)
FIGHTER_MAINS = [
    (206, "MMarioMain",    0x02A8),
    (207, "NMarioMain",    0x0298),
    (209, "FoxMain",       0x046C),
    (211, "NFoxMain",      0x02A4),
    (213, "DonkeyMain",    0x04A4),
    (214, "NDonkeyMain",   0x0298),
    (215, "GDonkeyMain",   0x03C8),
    (219, "NSamusMain",    0x03BC),
    (221, "LuigiMain",     0x0580),
    (223, "NLuigiMain",    0x0298),
    (227, "NLinkMain",     0x02D8),
    (231, "NKirbyMain",    0x02C0),
    (233, "PurinMain",     0x0474),
    (234, "NPurinMain",    0x02A0),
    (236, "CaptainMain",   0x0488),
    (237, "NCaptainMain",  0x029C),
    (241, "NNessMain",     0x02F0),
    (245, "NPikachuMain",  0x02A8),
    (248, "NYoshiMain",    0x02B8),
    (250, "BossMain",      0x00E8),
]

FTATTR_SIZE = 0x348  # 840 bytes


def read_bin(fid):
    path = os.path.join(PROJECT_DIR, "assets", "us", "relocData", f"{fid}.vpk0.bin")
    with open(path, "rb") as f:
        return f.read()


def rf32(data, off):
    return struct.unpack(">f", data[off:off+4])[0]


def ri32(data, off):
    return struct.unpack(">i", data[off:off+4])[0]


def ru32(data, off):
    return struct.unpack(">I", data[off:off+4])[0]


def ru16(data, off):
    return struct.unpack(">H", data[off:off+2])[0]


def ru8(data, off):
    return data[off]


def fmt_f32(val):
    """Format a float for C source, using the shortest representation
    that roundtrips to the same IEEE 754 single-precision value."""
    raw_bytes = struct.pack(">f", val)
    raw_u32 = struct.unpack(">I", raw_bytes)[0]

    if val == 0.0:
        if raw_bytes == b'\x80\x00\x00\x00':
            return "-0.0f"
        return "0.0f"
    if math.isinf(val) or math.isnan(val):
        return f"FLOAT_LITERAL(0x{raw_u32:08X})"

    def roundtrips(s):
        """Check if string s roundtrips to the same f32."""
        try:
            rt = struct.pack(">f", float(s))
            return rt == raw_bytes
        except:
            return False

    # Check if it's an exact integer
    if val == int(val) and abs(val) < 1e7:
        return f"{int(val)}.0f"

    # Try increasing precision until we find shortest roundtrip
    for prec in range(1, 10):
        s = f"{val:.{prec}f}"
        if roundtrips(s):
            # Remove trailing zeros but keep at least one after decimal
            s = s.rstrip('0')
            if s.endswith('.'):
                s += '0'
            return s + 'f'

    # Fallback: use Python repr (guaranteed roundtrip for f64, usually works for f32)
    s = repr(val)
    if roundtrips(s):
        return s + 'f'

    # Last resort: hex literal
    return f"FLOAT_LITERAL(0x{raw_u32:08X})"


def fmt_s32(val):
    if val < 0:
        return str(val)
    return str(val)


def fmt_hex16(val):
    return f"0x{val:04X}"


def fmt_hex8(val):
    return f"0x{val:02X}"


def parse_bitfield(u32val):
    """Extract 22 1-bit fields from MSB of a u32 (IDO big-endian bitfield packing)."""
    bits = []
    for i in range(22):
        bit = (u32val >> (31 - i)) & 1
        bits.append(bit)
    return bits


def parse_ftattributes(data, base, raw_ptrs=False):
    """Parse FTAttributes from binary data at given base offset.
    Returns a list of (field_name, c_value_string) tuples.

    If raw_ptrs is True, pointer fields are emitted as casts of the raw u32
    value from the binary instead of NULL. Used for JP version-specific
    overrides where the .reloc fixup pass is skipped by the Makefile, so the
    binary must already contain the correct chain-encoded bytes at compile
    time."""

    lines = []
    off = 0

    def ptr(name, ctype):
        nonlocal off
        if raw_ptrs:
            val = ru32(data, base + off)
            if val == 0:
                lines.append((name, "NULL", None))
            else:
                lines.append((name, f"({ctype})0x{val:08X}", None))
        else:
            lines.append((name, "NULL", None))
        off += 4

    def f32(name, comment=None):
        nonlocal off
        val = rf32(data, base + off)
        c = fmt_f32(val)
        if comment:
            lines.append((name, c, comment))
        else:
            lines.append((name, c, None))
        off += 4

    def s32(name, comment=None):
        nonlocal off
        val = ri32(data, base + off)
        lines.append((name, fmt_s32(val), comment))
        off += 4

    def sb32(name, comment=None):
        nonlocal off
        val = ri32(data, base + off)
        c = "TRUE" if val else "FALSE"
        lines.append((name, c, comment))
        off += 4

    # ---- Scalar fields (0x000 - 0x064) ----
    f32("size")
    f32("walkslow_anim_length")
    f32("walkmiddle_anim_length")
    f32("walkfast_anim_length")
    f32("throw_walkslow_anim_length")
    f32("throw_walkmiddle_anim_length")
    f32("throw_walkfast_anim_length")
    f32("rebound_anim_length")
    f32("walk_speed_mul")
    f32("traction")
    f32("dash_speed")
    f32("dash_decel")
    f32("run_speed")
    f32("kneebend_anim_length")
    f32("jump_vel_x")
    f32("jump_height_mul")
    f32("jump_height_base")
    f32("jumpaerial_vel_x")
    f32("jumpaerial_height")
    f32("air_accel")
    f32("air_speed_max_x")
    f32("air_friction")
    f32("gravity")
    f32("tvel_base")
    f32("tvel_fast")
    assert off == 0x064, f"Expected 0x064, got 0x{off:X}"

    # jumps_max (s32)
    s32("jumps_max")
    assert off == 0x068

    # More f32 fields
    f32("weight")
    f32("attack1_followup_frames")
    f32("dash_to_run")
    f32("shield_size")
    f32("shield_break_vel_y")
    f32("shadow_size")
    f32("jostle_width")
    f32("jostle_x")
    assert off == 0x088

    # is_metallic (sb32)
    sb32("is_metallic")
    assert off == 0x08C

    # Camera floats
    f32("cam_offset_y")
    f32("closeup_camera_zoom")
    f32("camera_zoom")
    f32("camera_zoom_base")
    assert off == 0x09C

    # MPObjectColl map_coll (4 f32: top, center, bottom, width)
    map_top = fmt_f32(rf32(data, base + off)); off += 4
    map_center = fmt_f32(rf32(data, base + off)); off += 4
    map_bottom = fmt_f32(rf32(data, base + off)); off += 4
    map_width = fmt_f32(rf32(data, base + off)); off += 4
    lines.append(("map_coll", f"{{ {map_top}, {map_center}, {map_bottom}, {map_width} }}", None))
    assert off == 0x0AC

    # Vec2f cliffcatch_coll
    cc_x = fmt_f32(rf32(data, base + off)); off += 4
    cc_y = fmt_f32(rf32(data, base + off)); off += 4
    lines.append(("cliffcatch_coll", f"{{ {cc_x}, {cc_y} }}", None))
    assert off == 0x0B4

    # u16 dead_fgm_ids[2]
    d0 = ru16(data, base + off); off += 2
    d1 = ru16(data, base + off); off += 2
    lines.append(("dead_fgm_ids", f"{{ {fmt_hex16(d0)}, {fmt_hex16(d1)} }}", None))

    # u16 deadup_sfx
    val = ru16(data, base + off); off += 2
    lines.append(("deadup_sfx", fmt_hex16(val), None))

    # u16 damage_sfx
    val = ru16(data, base + off); off += 2
    lines.append(("damage_sfx", fmt_hex16(val), None))

    # u16 smash_sfx[3]
    s0 = ru16(data, base + off); off += 2
    s1 = ru16(data, base + off); off += 2
    s2 = ru16(data, base + off); off += 2
    lines.append(("smash_sfx", f"{{ {fmt_hex16(s0)}, {fmt_hex16(s1)}, {fmt_hex16(s2)} }}", None))
    assert off == 0x0C2

    # 2 bytes padding before FTItemPickup (struct alignment)
    off += 2
    assert off == 0x0C4

    # FTItemPickup item_pickup (4 Vec2f = 8 f32)
    ip = []
    for vname in ["pickup_offset_light", "pickup_range_light",
                   "pickup_offset_heavy", "pickup_range_heavy"]:
        x = fmt_f32(rf32(data, base + off)); off += 4
        y = fmt_f32(rf32(data, base + off)); off += 4
        ip.append(f"{{ {x}, {y} }}")
    lines.append(("item_pickup", "{ " + ", ".join(ip) + " }", None))
    assert off == 0x0E4

    # u16 itemthrow_vel_scale
    val = ru16(data, base + off); off += 2
    lines.append(("itemthrow_vel_scale", fmt_hex16(val), None))

    # u16 itemthrow_damage_scale
    val = ru16(data, base + off); off += 2
    lines.append(("itemthrow_damage_scale", fmt_hex16(val), None))

    # u16 heavyget_sfx
    val = ru16(data, base + off); off += 2
    lines.append(("heavyget_sfx", fmt_hex16(val), None))

    # 2 bytes padding before halo_size
    off += 2
    assert off == 0x0EC

    # f32 halo_size
    f32("halo_size")
    assert off == 0x0F0

    # SYColorRGBA shade_color[3] (3 * 4 bytes)
    colors = []
    for i in range(3):
        r = ru8(data, base + off); off += 1
        g = ru8(data, base + off); off += 1
        b = ru8(data, base + off); off += 1
        a = ru8(data, base + off); off += 1
        colors.append(f"{{ {fmt_hex8(r)}, {fmt_hex8(g)}, {fmt_hex8(b)}, {fmt_hex8(a)} }}")
    lines.append(("shade_color", "{ " + ", ".join(colors) + " }", None))

    # SYColorRGBA fog_color
    r = ru8(data, base + off); off += 1
    g = ru8(data, base + off); off += 1
    b = ru8(data, base + off); off += 1
    a = ru8(data, base + off); off += 1
    lines.append(("fog_color", f"{{ {fmt_hex8(r)}, {fmt_hex8(g)}, {fmt_hex8(b)}, {fmt_hex8(a)} }}", None))
    assert off == 0x100

    # Bitfield u32 (22 x 1-bit fields)
    bf_val = ru32(data, base + off); off += 4
    bf_names = [
        "is_have_attack11", "is_have_attack12", "is_have_attackdash",
        "is_have_attacks3", "is_have_attackhi3", "is_have_attacklw3",
        "is_have_attacks4", "is_have_attackhi4", "is_have_attacklw4",
        "is_have_attackairn", "is_have_attackairf", "is_have_attackairb",
        "is_have_attackairhi", "is_have_attackairlw",
        "is_have_specialn", "is_have_specialairn",
        "is_have_specialhi", "is_have_specialairhi",
        "is_have_speciallw", "is_have_specialairlw",
        "is_have_catch", "is_have_voice",
    ]
    bits = parse_bitfield(bf_val)
    for i, name in enumerate(bf_names):
        lines.append((name, str(bits[i]), None))
    assert off == 0x104

    # FTDamageCollDesc damage_coll_descs[11]
    # Each: s32 joint_id, s32 placement, sb32 is_grabbable, Vec3f offset, Vec3f size
    # = 4+4+4+12+12 = 36 bytes each
    descs = []
    for i in range(11):
        joint_id = ri32(data, base + off); off += 4
        placement = ri32(data, base + off); off += 4
        is_grabbable = ri32(data, base + off); off += 4
        ox = fmt_f32(rf32(data, base + off)); off += 4
        oy = fmt_f32(rf32(data, base + off)); off += 4
        oz = fmt_f32(rf32(data, base + off)); off += 4
        sx = fmt_f32(rf32(data, base + off)); off += 4
        sy = fmt_f32(rf32(data, base + off)); off += 4
        sz = fmt_f32(rf32(data, base + off)); off += 4
        grab_str = "TRUE" if is_grabbable else "FALSE"
        desc = f"{{ {joint_id}, {placement}, {grab_str}, {{ {ox}, {oy}, {oz} }}, {{ {sx}, {sy}, {sz} }} }}"
        descs.append(desc)

    assert off == 0x104 + 11 * 36
    assert off == 0x290, f"Expected 0x290, got 0x{off:X}"
    lines.append(("damage_coll_descs", None, None))  # placeholder, handled specially
    # Store descs for later
    lines[-1] = ("damage_coll_descs", descs, None)

    # Vec3f hit_detect_range
    hx = fmt_f32(rf32(data, base + off)); off += 4
    hy = fmt_f32(rf32(data, base + off)); off += 4
    hz = fmt_f32(rf32(data, base + off)); off += 4
    lines.append(("hit_detect_range", f"{{ {hx}, {hy}, {hz} }}", None))
    assert off == 0x29C

    # ---- Pointer region (0x29C - 0x347) ----
    # These are all u32 slots that contain reloc-encoded values.
    # For US, fixRelocChain.py overwrites them via the .reloc file so the
    # initializer value does not matter; we use NULL for clarity. For JP
    # version-specific overrides (raw_ptrs=True), the .reloc step is skipped
    # by the Makefile, so we emit the raw chain-encoded u32 from the binary.

    ptr("setup_parts", "u32 *")
    ptr("animlock", "u32 *")
    assert off == 0x2A4

    # s32 effect_joint_ids[5]
    ejs = []
    for i in range(5):
        ejs.append(fmt_s32(ri32(data, base + off)))
        off += 4
    lines.append(("effect_joint_ids", "{ " + ", ".join(ejs) + " }", None))
    assert off == 0x2B8

    # sb32 cliff_status_ga[5]
    csg = []
    for i in range(5):
        val = ri32(data, base + off)
        csg.append("TRUE" if val else "FALSE")
        off += 4
    lines.append(("cliff_status_ga", "{ " + ", ".join(csg) + " }", None))
    assert off == 0x2CC

    # s32 unused_0x2CC
    s32("unused_0x2CC")
    assert off == 0x2D0

    ptr("hiddenparts", "FTHiddenPart *")
    ptr("commonparts_container", "FTCommonPartContainer *")
    ptr("dobj_lookup", "DObjDesc *")

    # AObjEvent32 **shield_anim_joints[8] (8 ptrs)
    if raw_ptrs:
        sa_vals = []
        for i in range(8):
            v = ru32(data, base + off + i * 4)
            sa_vals.append("NULL" if v == 0 else f"(AObjEvent32 **)0x{v:08X}")
        lines.append(("shield_anim_joints", "{ " + ", ".join(sa_vals) + " }", None))
    else:
        lines.append(("shield_anim_joints", "{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }", None))
    off += 32
    assert off == 0x2FC

    # s32 joint_rfoot_id
    s32("joint_rfoot_id")

    # f32 joint_rfoot_rotate
    f32("joint_rfoot_rotate")

    # s32 joint_lfoot_id
    s32("joint_lfoot_id")

    # f32 joint_lfoot_rotate
    f32("joint_lfoot_rotate")
    assert off == 0x30C

    # u8 filler_0x30C[16]
    filler_bytes = []
    for i in range(16):
        filler_bytes.append(fmt_hex8(ru8(data, base + off)))
        off += 1
    lines.append(("filler_0x30C", "{ " + ", ".join(filler_bytes) + " }", None))
    assert off == 0x31C

    # f32 unk_0x31C
    f32("unk_0x31C")

    # f32 unk_0x320
    f32("unk_0x320")
    assert off == 0x324

    ptr("translate_scales", "Vec3f *")
    ptr("modelparts_container", "FTModelPartContainer *")
    ptr("accesspart", "FTAccessPart *")
    ptr("textureparts_container", "FTTexturePartContainer *")

    s32("joint_itemheavy_id")

    ptr("thrown_status", "FTThrownStatusArray *")

    s32("joint_itemlight_id")

    ptr("sprites", "FTSprites *")
    ptr("skeleton", "FTSkeleton **")

    assert off == 0x348, f"Expected 0x348, got 0x{off:X}"

    return lines



def generate_attr_block(name, attr_fields):
    """Generate the FTAttributes struct initializer C code."""
    lines = []
    lines.append(f"FTAttributes d{name}_attr = {{")

    for field_name, value, comment in attr_fields:
        if field_name == "damage_coll_descs":
            # Special handling for array of structs
            lines.append(f"\t/* damage_coll_descs */")
            lines.append(f"\t{{")
            for i, desc in enumerate(value):
                comma = "," if i < len(value) - 1 else ","
                lines.append(f"\t\t{desc}{comma}")
            lines.append(f"\t}},")
        else:
            cmt = f" /* {comment} */" if comment else ""
            # Add field name comment
            cmt = f" /* {field_name} */"
            lines.append(f"\t{value},{cmt}")

    lines.append("};")
    return "\n".join(lines)


def update_reloc_file(fid, name, o_attributes):
    """Update .reloc file to use new symbol names.

    Replace references to the old data/ptrs array names with dName_attr+offset.
    """
    reloc_path = os.path.join(PROJECT_DIR, "src", "relocData", f"{fid}_{name}.reloc")
    with open(reloc_path) as f:
        reloc_text = f.read()

    data = read_bin(fid)
    file_size = len(data)

    # Parse the existing C file to find old symbol names and their byte offsets
    c_path = os.path.join(PROJECT_DIR, "src", "relocData", f"{fid}_{name}.c")
    with open(c_path) as f:
        c_text = f.read()

    # Find all arrays and determine which ones are in the FTAttributes region
    attr_word = o_attributes // 4

    # Build a mapping of old label -> new label for the attr region
    replacements = {}

    # Find data arrays and pointer arrays
    pattern = re.compile(
        r'/\*.*?at word 0x([0-9A-Fa-f]+).*?\*/\s*\n\s*(?:u32|u16)\s+(d' + re.escape(name) + r'_\w+)\[(\d+)',
        re.MULTILINE
    )

    for m in pattern.finditer(c_text):
        word_off = int(m.group(1), 16)
        label = m.group(2)
        count = int(m.group(3))
        byte_off = word_off * 4

        # Determine element size
        decl_line = c_text[m.start():m.end()]
        is_u16 = 'u16 ' in decl_line
        elem_size = 2 if is_u16 else 4
        byte_end = byte_off + count * elem_size

        if byte_off >= o_attributes and byte_off < o_attributes + FTATTR_SIZE:
            # Array starts within FTAttributes - replaced entirely
            attr_off = byte_off - o_attributes
            replacements[label] = (f"d{name}_attr", attr_off)
        elif byte_off < o_attributes and byte_end > o_attributes:
            # Array straddles boundary - relocs pointing into the attr part
            # need to be remapped. The label survives but only covers pre-attr data.
            # Any reloc at offset >= (o_attributes - byte_off) within this array
            # maps to attr+0x0 onwards.
            # We store the boundary info for use in replace_label
            replacements[label] = (f"d{name}_attr", -(o_attributes - byte_off))
            # negative base_off signals "straddling": actual offset is
            # label_offset + base_off, and if >= 0 it's in the attr

    if not replacements:
        print(f"  No arrays found in FTAttributes region for {name}")
        return

    # Apply replacements to reloc file
    new_lines = []
    for line in reloc_text.splitlines():
        if line.strip().startswith('#') or not line.strip():
            new_lines.append(line)
            continue

        parts = line.split()
        if len(parts) != 3:
            new_lines.append(line)
            continue

        chain_type, ptr_label, target_label = parts

        # Replace ptr_label if it references an old array in the attr region
        new_ptr = replace_label(ptr_label, replacements)
        new_target = replace_label(target_label, replacements)

        new_lines.append(f"{chain_type} {new_ptr} {new_target}")

    new_reloc = "\n".join(new_lines)
    if not new_reloc.endswith("\n"):
        new_reloc += "\n"

    with open(reloc_path, "w") as f:
        f.write(new_reloc)

    return replacements


def replace_label(label, replacements):
    """Replace a label like 'dName_ptrs3+0x34' using the replacements mapping."""
    # Parse label+offset
    m = re.match(r'^(.+)\+0x([0-9a-fA-F]+)$', label)
    if m:
        base_name = m.group(1)
        hex_off = int(m.group(2), 16)
        if base_name in replacements:
            new_base, base_off = replacements[base_name]
            if base_off < 0:
                # Straddling array: base_off is negative boundary offset
                # If hex_off is past the boundary, remap to attr
                attr_off = hex_off + base_off  # hex_off - abs(base_off)
                if attr_off >= 0:
                    if attr_off == 0:
                        return new_base
                    return f"{new_base}+0x{attr_off:X}"
                else:
                    # Still in pre-attr portion, keep original
                    return label
            else:
                new_off = base_off + hex_off
                if new_off == 0:
                    return new_base
                return f"{new_base}+0x{new_off:X}"
    else:
        # Plain label (no offset)
        if label in replacements:
            new_base, base_off = replacements[label]
            if base_off <= 0:
                return new_base if base_off == 0 else label
            return f"{new_base}+0x{base_off:X}"

    return label


def find_array_decls(c_text, name):
    """Find all array declarations with word offsets.

    Returns list of (word_off, label, match_start, match_end) sorted by position.
    match_start is the start of the comment, match_end is after the closing ";".
    """
    decl_pattern = re.compile(
        r'/\*.*?at word 0x([0-9A-Fa-f]+).*?\*/\s*\n\s*(?:u32|u16)\s+(d' + re.escape(name) + r'_\w+)\[(\d+)\]\s*=\s*\{',
        re.MULTILINE
    )

    results = []
    for m in decl_pattern.finditer(c_text):
        word_off = int(m.group(1), 16)
        label = m.group(2)
        count = int(m.group(3))
        start = m.start()

        # Find the closing }; for this array
        brace_start = c_text.index('{', m.start())
        depth = 0
        pos = brace_start
        while pos < len(c_text):
            if c_text[pos] == '{':
                depth += 1
            elif c_text[pos] == '}':
                depth -= 1
                if depth == 0:
                    semi = c_text.index(';', pos)
                    end = semi + 1
                    break
            pos += 1

        results.append((word_off, label, count, start, end))

    return results


def update_c_file(fid, name, o_attributes, attr_fields):
    """Rewrite the C file, replacing the attr region arrays with FTAttributes."""
    c_path = os.path.join(PROJECT_DIR, "src", "relocData", f"{fid}_{name}.c")
    with open(c_path) as f:
        c_text = f.read()

    data = read_bin(fid)
    file_size = len(data)
    attr_word = o_attributes // 4
    attr_end = o_attributes + FTATTR_SIZE
    trailing_size = file_size - attr_end

    # Find all array declarations
    decls = find_array_decls(c_text, name)

    # Identify arrays that overlap with or are within the FTAttributes region
    # An array at word W with N words covers bytes [W*4, W*4 + N*4)
    arrays_to_remove = []  # (start_pos, end_pos) in c_text
    arrays_to_truncate = []  # (word_off, label, old_count, new_count, start_pos, end_pos)

    for word_off, label, count, start, end in decls:
        byte_start = word_off * 4
        # Determine element size from the type
        # Check if it's u16 or u32
        decl_text = c_text[start:end]
        if 'u16 ' in decl_text.split('{')[0]:
            elem_size = 2
        else:
            elem_size = 4
        byte_end = byte_start + count * elem_size

        if byte_start >= o_attributes and byte_start < attr_end:
            # Array starts within FTAttributes - remove entirely
            arrays_to_remove.append((start, end))
            # If it extends past attr_end, we need trailing data
            if byte_end > attr_end and trailing_size == 0:
                trailing_size = byte_end - attr_end
        elif byte_start < o_attributes and byte_end > o_attributes:
            # Array straddles the start boundary - truncate
            new_count = (o_attributes - byte_start) // elem_size
            arrays_to_truncate.append((word_off, label, count, new_count, start, end))
        elif byte_start >= attr_end:
            # Array is after FTAttributes - keep it
            pass

    # Generate the new attr block
    attr_block = generate_attr_block(name, attr_fields)

    # Check for trailing data after FTAttributes
    trailing_block = ""
    if trailing_size > 0:
        trailing_word = attr_end // 4
        # Check if there's already a trailing data array
        has_trailing = False
        for word_off, label, count, start, end in decls:
            if word_off * 4 >= attr_end:
                has_trailing = True
                break
        if not has_trailing:
            trailing_words = trailing_size // 4
            if trailing_words > 0:
                tw_data = []
                for i in range(trailing_words):
                    tw_data.append(f"0x{ru32(data, attr_end + i*4):08X}")
                trailing_block = f"\n\n/* Trailing padding at word 0x{trailing_word:04X} ({trailing_words} words) */\n"
                trailing_block += f"u32 d{name}_trailing[{trailing_words}] = {{\n"
                trailing_block += "\t" + ", ".join(tw_data) + ",\n"
                trailing_block += "};"

    # Now rebuild the C file by collecting text segments.
    # We identify all regions to remove/replace and build the output linearly.

    # Build a list of (byte_off_in_file, start_in_text, end_in_text, action)
    # for all arrays in the attr region, sorted by position in the text.
    modifications = []  # (text_start, text_end, 'remove'|'truncate', extra_data)

    for start, end in arrays_to_remove:
        modifications.append((start, end, 'remove', None))

    for word_off, label, old_count, new_count, start, end in arrays_to_truncate:
        modifications.append((start, end, 'truncate',
                              (word_off, label, old_count, new_count)))

    # Sort by position in text (ascending)
    modifications.sort(key=lambda x: x[0])

    if not modifications:
        print(f"  ERROR: No modifications found for {name}")
        return False

    # Build output by walking through the text
    parts = []
    prev_end = 0
    attr_inserted = False

    for text_start, text_end, action, extra in modifications:
        if action == 'truncate':
            # Keep text before this array as-is
            parts.append(c_text[prev_end:text_end])

            # Insert FTAttributes after the truncated array
            # (the truncation will be done in a second pass)
            prev_end = text_end

            # We'll insert the attr block after collecting all modifications
            if not attr_inserted:
                parts.append("\n\n" + attr_block)
                attr_inserted = True

        elif action == 'remove':
            # Keep text before this array, but insert attr if not yet done
            before = c_text[prev_end:text_start]

            if not attr_inserted:
                # Insert attr at this point (replacing the removed array)
                # Strip trailing newlines from before
                before = before.rstrip('\n')
                parts.append(before)
                parts.append("\n\n" + attr_block)
                attr_inserted = True
            else:
                # Just skip this array
                # Strip the leading newlines that separated it from the previous
                before = before.rstrip('\n')
                if before:
                    parts.append(before)

            prev_end = text_end

    # Add remaining text after all modifications
    remaining = c_text[prev_end:]
    if remaining.strip():
        # Make sure there's a newline separator
        if not remaining.startswith('\n'):
            parts.append("\n")
        parts.append(remaining)
    elif trailing_block:
        parts.append(trailing_block + "\n")
    else:
        parts.append("\n")

    new_c = "".join(parts)

    # Now handle truncations: replace the array declarations with shorter versions
    for text_start, text_end, action, extra in modifications:
        if action != 'truncate':
            continue
        word_off, label, old_count, new_count = extra
        byte_start = word_off * 4

        # Find the array in new_c by its label and word offset
        old_pattern = re.compile(
            r'(/\*[^\n]*at word 0x' + f'{word_off:04X}' + r'[^\n]*\*/\s*\n\s*(?:u32|u16)\s+' +
            re.escape(label) + r'\[' + str(old_count) + r'\]\s*=\s*\{.*?\};)',
            re.DOTALL
        )
        m = old_pattern.search(new_c)
        if not m:
            print(f"  WARNING: Could not find truncation target {label}[{old_count}] in output")
            continue

        old_decl = m.group(1)
        is_u16 = 'u16 ' in old_decl.split('{')[0]
        elem_size = 2 if is_u16 else 4

        # Extract the comment line
        comment_line = old_decl.split('\n')[0]
        comment_line = re.sub(r'\d+ words\)', f'{new_count} words)', comment_line)
        if is_u16:
            comment_line = re.sub(r'\d+ u16s\)', f'{new_count} u16s)', comment_line)

        # Build new array content from binary
        new_values = []
        for i in range(new_count):
            if is_u16:
                val = ru16(data, byte_start + i * 2)
                new_values.append(f"0x{val:04X}")
            else:
                val = ru32(data, byte_start + i * 4)
                new_values.append(f"0x{val:08X}")

        type_str = "u16" if is_u16 else "u32"
        new_decl = f"{comment_line}\n{type_str} {label}[{new_count}] = {{\n"
        new_decl += "\t" + ", ".join(new_values) + ",\n"
        new_decl += "};"

        new_c = new_c[:m.start()] + new_decl + new_c[m.end():]

    # Add the include for fttypes.h if not present
    if '<ft/fttypes.h>' not in new_c:
        new_c = new_c.replace(
            '#include "relocdata_types.h"',
            '#include "relocdata_types.h"\n#include <ft/fttypes.h>'
        )

    with open(c_path, 'w') as f:
        f.write(new_c)

    return True


def process_fighter(fid, name, o_attributes):
    """Process a single fighter main file."""
    print(f"Processing {fid}_{name} (attr at 0x{o_attributes:04X})...")

    data = read_bin(fid)
    file_size = len(data)

    # Verify attr region fits
    if o_attributes + FTATTR_SIZE > file_size:
        print(f"  ERROR: FTAttributes extends beyond file! "
              f"attr_end=0x{o_attributes + FTATTR_SIZE:X}, file_size=0x{file_size:X}")
        return False

    # Parse FTAttributes from binary
    attr_fields = parse_ftattributes(data, o_attributes)

    # Update reloc file first (before changing C symbols)
    update_reloc_file(fid, name, o_attributes)

    # Update C file
    result = update_c_file(fid, name, o_attributes, attr_fields)

    return result


def main():
    if len(sys.argv) > 1:
        # Process specific files
        targets = []
        for arg in sys.argv[1:]:
            fid = int(arg)
            for f in FIGHTER_MAINS:
                if f[0] == fid:
                    targets.append(f)
                    break
            else:
                print(f"Unknown file ID: {fid}")
                return 1
    else:
        targets = FIGHTER_MAINS

    for fid, name, o_attr in targets:
        if not process_fighter(fid, name, o_attr):
            print(f"  FAILED!")
            return 1

    print("\nDone!")
    return 0


if __name__ == "__main__":
    sys.exit(main())
