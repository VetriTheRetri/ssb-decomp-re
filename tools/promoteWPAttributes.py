#!/usr/bin/env python3
"""
Promote u8[52] *_WeaponAttributes blobs in 251_ITCommonData.c to typed
WPAttributes struct initializers.

Layout verified against the 7 Special1 WPAttributes files (which compile
byte-identical):
  0x00-0x0F  4 pointers (data, p_mobjsubs, anim_joints, p_matanim_joints)
  0x10-0x1B  Vec3h attack_offsets[2]
  0x1C       s16 map_coll_top
  0x1E       s16 map_coll_center
  0x20       s16 map_coll_bottom
  0x22       s16 map_coll_width
  0x24 u32   size:16 [31..16] + angle:10 [15..6]
  0x28 u32   ks:10 [31..22] + dmg:8 [21..14] + elem:4 [13..10] + kw:10 [9..0]
  0x2C u32   sd:8 [31..24] + ac:2 [23..22] + cso:1 [21] + sfx:10 [20..11]
              + pri:3 [10..8] + cri:1 [7] + crf:1 [6] + hop:1 [5]
              + reflect:1 [4] + absorb:1 [3] + shield:1 [2]
              + unused_b6:1 [1] + unused_b7:1 [0]
  0x30 u32   kb:10 [31..22]

For each *_WeaponAttributes[52] u8 blob in ITCommonData, decode the bytes
into field values and replace the u8 declaration with a WPAttributes
typed initializer. Pointer slots start as NULL or chain values (overwritten
by fixRelocChain at build time).
"""

import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")


def s16(x):
    return x - 0x10000 if x & 0x8000 else x


def sext(val, bits):
    if val & (1 << (bits - 1)):
        return val - (1 << bits)
    return val


def decode_wpattr(blob):
    assert len(blob) >= 52
    d = {}
    ptrs = struct.unpack(">4I", blob[0:16])
    d["data"] = ptrs[0]
    d["p_mobjsubs"] = ptrs[1]
    d["anim_joints"] = ptrs[2]
    d["p_matanim_joints"] = ptrs[3]
    off = struct.unpack(">6h", blob[16:28])
    d["attack_offsets"] = [(off[0], off[1], off[2]), (off[3], off[4], off[5])]
    coll = struct.unpack(">4h", blob[28:36])
    d["map_coll_top"], d["map_coll_center"], d["map_coll_bottom"], d["map_coll_width"] = coll

    w24 = struct.unpack(">I", blob[0x24:0x28])[0]
    d["size"]  = (w24 >> 16) & 0xFFFF
    d["angle"] = sext((w24 >> 6) & 0x3FF, 10)

    w28 = struct.unpack(">I", blob[0x28:0x2C])[0]
    d["ks"]   = (w28 >> 22) & 0x3FF
    d["dmg"]  = (w28 >> 14) & 0xFF
    d["elem"] = (w28 >> 10) & 0xF
    d["kw"]   = w28 & 0x3FF

    w2c = struct.unpack(">I", blob[0x2C:0x30])[0]
    d["sd"]  = sext((w2c >> 24) & 0xFF, 8)
    d["ac"]  = (w2c >> 22) & 0x3
    d["cso"] = (w2c >> 21) & 1
    d["sfx"] = (w2c >> 11) & 0x3FF
    d["pri"] = (w2c >> 8) & 0x7
    d["cri"] = (w2c >> 7) & 1
    d["crf"] = (w2c >> 6) & 1
    d["hop"] = (w2c >> 5) & 1
    d["reflect"] = (w2c >> 4) & 1
    d["absorb"] = (w2c >> 3) & 1
    d["shield"] = (w2c >> 2) & 1
    d["unused_b6"] = (w2c >> 1) & 1
    d["unused_b7"] = w2c & 1

    w30 = struct.unpack(">I", blob[0x30:0x34])[0]
    d["kb"] = (w30 >> 22) & 0x3FF
    return d


def format_attack_offsets(pairs):
    p1, p2 = pairs
    return f"{{ {{ {p1[0]}, {p1[1]}, {p1[2]} }}, {{ {p2[0]}, {p2[1]}, {p2[2]} }} }}"


def emit_wpattr_init(name, d, indent="    "):
    ptr_lines = [
        f"{indent}NULL,  /* data (chain-encoded — fixRelocChain patches if .reloc has entry) */"
        if d["data"] == 0 else
        f"{indent}(void *)0x{d['data']:08X},  /* data (chain) */",
        f"{indent}NULL,  /* p_mobjsubs */"
        if d["p_mobjsubs"] == 0 else
        f"{indent}(MObjSub ***)0x{d['p_mobjsubs']:08X},  /* p_mobjsubs (chain) */",
        f"{indent}NULL,  /* anim_joints */"
        if d["anim_joints"] == 0 else
        f"{indent}(AObjEvent32 **)0x{d['anim_joints']:08X},  /* anim_joints (chain) */",
        f"{indent}NULL,  /* p_matanim_joints */"
        if d["p_matanim_joints"] == 0 else
        f"{indent}(AObjEvent32 ***)0x{d['p_matanim_joints']:08X},  /* p_matanim_joints (chain) */",
    ]
    lines = [f"WPAttributes {name} = {{"]
    lines.extend(ptr_lines)
    lines.append(f"{indent}{format_attack_offsets(d['attack_offsets'])},  /* attack_offsets */")
    lines.append(f"{indent}{d['map_coll_top']}, {d['map_coll_center']}, {d['map_coll_bottom']}, {d['map_coll_width']},  /* map_coll top/center/bottom/width */")
    lines.append(f"{indent}{d['size']},  /* size */")
    lines.append(f"{indent}{d['angle']},  /* angle            : 10 */")
    lines.append(f"{indent}{d['ks']},  /* knockback_scale  : 10 */")
    lines.append(f"{indent}{d['dmg']},  /* damage           :  8 */")
    lines.append(f"{indent}{d['elem']},  /* element          :  4 */")
    lines.append(f"{indent}{d['kw']},  /* knockback_weight : 10 */")
    lines.append(f"{indent}{d['sd']},  /* shield_damage    :  8 */")
    lines.append(f"{indent}{d['ac']},  /* attack_count     :  2 */")
    lines.append(f"{indent}{d['cso']},  /* can_setoff       :  1 */")
    lines.append(f"{indent}{d['sfx']},  /* sfx              : 10 */")
    lines.append(f"{indent}{d['pri']},  /* priority         :  3 */")
    lines.append(f"{indent}{d['cri']},  /* can_rehit_item   :  1 */")
    lines.append(f"{indent}{d['crf']},  /* can_rehit_fighter:  1 */")
    lines.append(f"{indent}{d['hop']},  /* can_hop          :  1 */")
    lines.append(f"{indent}{d['reflect']},  /* can_reflect      :  1 */")
    lines.append(f"{indent}{d['absorb']},  /* can_absorb       :  1 */")
    lines.append(f"{indent}{d['shield']},  /* can_shield       :  1 */")
    lines.append(f"{indent}{d['unused_b6']},  /* unused_0x2F_b6   :  1 */")
    lines.append(f"{indent}{d['unused_b7']},  /* unused_0x2F_b7   :  1 */")
    lines.append(f"{indent}{d['kb']},  /* knockback_base   : 10 */")
    lines.append("};")
    return "\n".join(lines)


def process():
    c_path = os.path.join(RELOC_DIR, "251_ITCommonData.c")
    with open(c_path) as f:
        text = f.read()
    with open(os.path.join(ASSETS_DIR, "251.vpk0.bin"), "rb") as f:
        data = f.read()

    # Find every u8 dITCommonData_<Name>_WeaponAttributes[52] block and
    # its preceding file-offset comment.
    changes = 0
    pat = re.compile(
        r"(/\* Raw data from file offset 0x([0-9A-Fa-f]+)[^\n]*\*/\n)?"
        r"u8 (dITCommonData_\w+_WeaponAttributes)\[52\] = \{\n"
        r"\t#include <[^>]+>\n\};",
        re.MULTILINE,
    )
    def replace(m):
        nonlocal changes
        off_comment = m.group(1)
        off_hex = m.group(2)
        sym = m.group(3)
        # Without the offset comment we can't locate the bytes — fall back to
        # symbol-based lookup via nm (skip here for simplicity).
        if off_hex is None:
            return m.group(0)
        off = int(off_hex, 16)
        blob = data[off:off+52]
        fields = decode_wpattr(blob)
        new_decl = emit_wpattr_init(sym, fields)
        changes += 1
        return f"/* WPAttributes @ 0x{off:04X} */\n{new_decl}"
    new_text = pat.sub(replace, text)
    if new_text == text:
        print("no changes")
        return
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"promoted {changes} WPAttributes blob(s) in ITCommonData")


if __name__ == "__main__":
    process()
