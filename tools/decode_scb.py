#!/usr/bin/env python3
"""Decode an .scb particle script bank into a C source file.

Reads a baserom range or a .scb.bin file, walks the LBScriptDesc -> LBScript
records and the per-script bytecode (using the opcode dispatch in
src/lb/lbparticle.c), and emits a src/particles/<name>_scb.c that compiles
to byte-identical bytes when placed at the bank's ROM offset.

Run from repo root, e.g.:
    python3 tools/decode_scb.py mntitle 0xB22C30 0xB277B0 \\
        > src/particles/mntitle_scb.c
"""
import argparse
import struct
import sys
import textwrap


# Flag bits from src/lb/lbdef.h (in order so we emit them deterministically).
FLAGS = [
    (0x0001, "LBPARTICLE_FLAG_GRAVITY"),
    (0x0002, "LBPARTICLE_FLAG_FRICTION"),
    (0x0004, "LBPARTICLE_FLAG_VORTEX"),
    (0x0010, "LBPARTICLE_FLAG_SHAREDPAL"),
    (0x0020, "LBPARTICLE_FLAG_MASKS"),
    (0x0040, "LBPARTICLE_FLAG_MASKT"),
    (0x0080, "LBPARTICLE_FLAG_ENVCOLOR"),
    (0x0100, "LBPARTICLE_FLAG_NOISE"),
    (0x0200, "LBPARTICLE_FLAG_ALPHABLEND"),
    (0x0400, "LBPARTICLE_FLAG_DITHER"),
    (0x0800, "LBPARTICLE_FLAG_PAUSE"),
    (0x8000, "LBPARTICLE_FLAG_ATTACH"),
]


def fmt_flags(value: int) -> str:
    """Render a u32 flags value as a `|`-joined list of LBPARTICLE_FLAG_*
    constants, with any unknown high bits left as a stray hex term."""
    if value == 0:
        return "0"
    parts = []
    remaining = value
    for bit, name in FLAGS:
        if value & bit:
            parts.append(name)
            remaining &= ~bit
    if remaining:
        parts.append(f"0x{remaining:x}")
    return " | ".join(parts)


def f32_of_bits(bits: int) -> float:
    return struct.unpack(">f", struct.pack(">I", bits))[0]


def bits_of_f32(f: float) -> int:
    return struct.unpack(">I", struct.pack(">f", f))[0]


def fmt_float_decimal(bits: int) -> str | None:
    """If a clean decimal literal round-trips to the same bit pattern, return
    it (with `f` suffix). Else None. Used for the LBScriptHeader fields that
    are typed `f32` -- we never need this for u8[] bytecode, where bit-pattern
    is the only option in C89."""
    f = f32_of_bits(bits)
    if f != f:  # NaN
        return None
    # Try a sequence of representations from short to long, accept the
    # shortest that round-trips.
    candidates = [
        f"{f:.1f}",
        f"{f:.2f}",
        f"{f:.3f}",
        f"{f:.4f}",
        f"{f:.5f}",
        f"{f:.6f}",
        f"{f:.7f}",
        repr(f),
    ]
    for c in candidates:
        try:
            if struct.unpack(">f", struct.pack(">f", float(c)))[0] == f and \
               bits_of_f32(float(c)) == bits:
                # Strip a trailing zero-only run after the decimal point so we
                # get e.g. `300.0f` not `300.0000f`. Keep at least one digit.
                if "." in c:
                    int_part, frac = c.split(".")
                    frac = frac.rstrip("0") or "0"
                    c = f"{int_part}.{frac}"
                return c + "f"
        except ValueError:
            continue
    return None


def fmt_float_for_header(bits: int) -> str:
    """f32 header field rendering: prefer decimal, fall back to a u32->f32
    union-bit-pattern macro."""
    if bits == 0:
        return "0.0f"
    dec = fmt_float_decimal(bits)
    if dec is not None:
        return dec
    # No clean decimal -- caller needs to use the header struct's `f32` field
    # type to receive a hex-pattern value via memcpy or a literal trick. C89
    # IDO can't bit-cast in a static init, so we punt to a comment showing
    # the pattern; the user has to type `<value>f` themselves.
    return f"/* TODO: 0x{bits:08X} -- no clean decimal */ 0.0f"


# ----------------------------------------------------------------------
# Bytecode dispatcher mirror.
# ----------------------------------------------------------------------

def read_ushort(bc: bytes, i: int) -> tuple[int, int]:
    """Mirror of lbParticleReadUShort: returns (length_after_+1, bytes_used)."""
    v = bc[i]
    if v & 0x80:
        return ((v & 0x7F) << 8) + bc[i + 1] + 1, 2
    return v + 1, 1


def fmt_ushort(length: int) -> str:
    if length - 1 < 128:
        return f"LBP_USHORT_S({length})"
    return f"LBP_USHORT_L({length})"


def fmt_f32_bytecode(bits: int) -> str:
    """Bytecode floats are always written as LBP_F32(0xXXXXXXXX) with a
    decimal comment. C89 IDO can't bit-cast a decimal literal into a u8[]
    initializer so the hex pattern is unavoidable."""
    f = f32_of_bits(bits)
    return f"LBP_F32(0x{bits:08X}) /* {f!r} */"


def decode_bytecode(bc: bytes) -> tuple[list[str], int]:
    """Decode bytecode bytes into a list of macro-expanded source lines.
    Returns (lines, bytes_consumed_through_END_inclusive)."""
    out = []
    i = 0
    n = len(bc)

    def add(line: str):
        out.append(line)

    while i < n:
        op = bc[i]

        # Wait commands (cmd < 0x80).
        if op < 0x80:
            short = op & 0x1F
            long = bool(op & 0x20)
            frame = bool(op & 0x40)
            if long and frame:
                wait = (short << 8) | bc[i + 1]
                fid = bc[i + 2]
                add(f"lbpWaitLongFrame({wait}, {fid}),")
                i += 3
            elif long:
                wait = (short << 8) | bc[i + 1]
                add(f"lbpWaitLong({wait}),")
                i += 2
            elif frame:
                fid = bc[i + 1]
                add(f"lbpWaitFrame({short}, {fid}),")
                i += 2
            else:
                add(f"lbpWait({short}),")
                i += 1
            continue

        # Position / velocity (mask in low 3 bits).
        if 0x80 <= op <= 0x9F:
            mask = op & 0x07
            base = op & 0xF8
            macro = {0x80: "lbpSetPos", 0x88: "lbpAddPos",
                     0x90: "lbpSetVel", 0x98: "lbpAddVel"}[base]
            mask_parts = []
            if mask & 1: mask_parts.append("LBP_X")
            if mask & 2: mask_parts.append("LBP_Y")
            if mask & 4: mask_parts.append("LBP_Z")
            mask_str = " | ".join(mask_parts) if mask_parts else "0"
            i += 1
            n_floats = bin(mask).count("1")
            floats = []
            for _ in range(n_floats):
                bits = struct.unpack(">I", bc[i:i+4])[0]
                floats.append(fmt_f32_bytecode(bits))
                i += 4
            if floats:
                add(f"{macro}({mask_str}), {', '.join(floats)},")
            else:
                add(f"{macro}({mask_str}),")
            continue

        # SETSIZELERP (A0): ushort + 1 float
        if op == 0xA0:
            length, used = read_ushort(bc, i + 1)
            i += 1 + used
            bits = struct.unpack(">I", bc[i:i+4])[0]
            i += 4
            add(f"lbpSetSizeLerp, {fmt_ushort(length)}, {fmt_f32_bytecode(bits)},")
            continue

        # SETSIZERAND (AC): ushort + 2 floats
        if op == 0xAC:
            length, used = read_ushort(bc, i + 1)
            i += 1 + used
            t = struct.unpack(">I", bc[i:i+4])[0]
            r = struct.unpack(">I", bc[i+4:i+8])[0]
            i += 8
            add(f"lbpSetSizeRand, {fmt_ushort(length)},")
            add(f"\t{fmt_f32_bytecode(t)},")
            add(f"\t{fmt_f32_bytecode(r)},")
            continue

        if op == 0xA1:
            add(f"lbpSetFlag(0x{bc[i+1]:02X}),")
            i += 2
            continue

        if op == 0xA2:  # SETGRAVITY
            bits = struct.unpack(">I", bc[i+1:i+5])[0]
            add(f"lbpSetGravity, {fmt_f32_bytecode(bits)},")
            i += 5
            continue

        if op == 0xA3:  # SETFRICTION
            bits = struct.unpack(">I", bc[i+1:i+5])[0]
            add(f"lbpSetFriction, {fmt_f32_bytecode(bits)},")
            i += 5
            continue

        if op == 0xA4:  # MAKESCRIPT
            sid = struct.unpack(">H", bc[i+1:i+3])[0]
            add(f"lbpMakeScript({sid}),")
            i += 3
            continue

        if op == 0xA5:  # MAKEGENERATOR
            sid = struct.unpack(">H", bc[i+1:i+3])[0]
            add(f"lbpMakeGenerator({sid}),")
            i += 3
            continue

        if op == 0xA6:  # SETLIFERAND
            base = struct.unpack(">H", bc[i+1:i+3])[0]
            rand = struct.unpack(">H", bc[i+3:i+5])[0]
            add(f"lbpSetLifeRand({base}, {rand}),")
            i += 5
            continue

        if op == 0xA7:  # TRYDEADRAND
            add(f"lbpTryDeadRand({bc[i+1]}),")
            i += 2
            continue

        if op == 0xA8:  # ADDPOSRAND (3 floats)
            xb = struct.unpack(">I", bc[i+1:i+5])[0]
            yb = struct.unpack(">I", bc[i+5:i+9])[0]
            zb = struct.unpack(">I", bc[i+9:i+13])[0]
            add(f"lbpAddPosRand,")
            add(f"\t{fmt_f32_bytecode(xb)},")
            add(f"\t{fmt_f32_bytecode(yb)},")
            add(f"\t{fmt_f32_bytecode(zb)},")
            i += 13
            continue

        if op == 0xA9:  # SETVELANGLE
            bits = struct.unpack(">I", bc[i+1:i+5])[0]
            add(f"lbpSetVelAngle, {fmt_f32_bytecode(bits)},")
            i += 5
            continue

        if op == 0xAA:  # MAKERAND
            base = struct.unpack(">H", bc[i+1:i+3])[0]
            rand = struct.unpack(">H", bc[i+3:i+5])[0]
            add(f"lbpMakeRand({base}, {rand}),")
            i += 5
            continue

        if op == 0xAB:  # MULVELUFORM
            bits = struct.unpack(">I", bc[i+1:i+5])[0]
            add(f"lbpMulVelUniform, {fmt_f32_bytecode(bits)},")
            i += 5
            continue

        if op == 0xAD:
            add("lbpEnvColor(),")
            i += 1
            continue
        if op == 0xAE:
            add("lbpNoMaskST(),"); i += 1; continue
        if op == 0xAF:
            add("lbpMaskS(),"); i += 1; continue
        if op == 0xB0:
            add("lbpMaskT(),"); i += 1; continue
        if op == 0xB1:
            add("lbpMaskST(),"); i += 1; continue
        if op == 0xB2:
            add("lbpAlphaBlend(),"); i += 1; continue
        if op == 0xB3:
            add("lbpNoDither(),"); i += 1; continue
        if op == 0xB4:
            add("lbpDither(),"); i += 1; continue
        if op == 0xB5:
            add("lbpNoNoise(),"); i += 1; continue
        if op == 0xB6:
            add("lbpNoise(),"); i += 1; continue

        if op == 0xB7:  # SETDISTVEL
            add(f"lbpSetDistVel({bc[i+1]}),")
            i += 2; continue
        if op == 0xB8:  # ADDDISTVELMAG (u8 + f32)
            id_ = bc[i+1]
            bits = struct.unpack(">I", bc[i+2:i+6])[0]
            add(f"lbpAddDistVelMag({id_}), {fmt_f32_bytecode(bits)},")
            i += 6; continue
        if op == 0xB9:  # MAKEID
            sid = struct.unpack(">H", bc[i+1:i+3])[0]
            add(f"lbpMakeID({sid}),"); i += 3; continue

        if op == 0xBA:  # PRIMBLENDRAND
            r, g, b, a = bc[i+1:i+5]
            add(f"lbpPrimBlendRand(0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X}),")
            i += 5; continue
        if op == 0xBB:  # ENVBLENDRAND
            r, g, b, a = bc[i+1:i+5]
            add(f"lbpEnvBlendRand(0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X}),")
            i += 5; continue
        if op == 0xBC:  # SETFRAMEIDRAND
            add(f"lbpSetFrameIDRand({bc[i+1]}, {bc[i+2]}),")
            i += 3; continue

        if op == 0xBD:  # SETVELMAG (2 floats)
            b1 = struct.unpack(">I", bc[i+1:i+5])[0]
            b2 = struct.unpack(">I", bc[i+5:i+9])[0]
            add(f"lbpSetVelMag, {fmt_f32_bytecode(b1)}, {fmt_f32_bytecode(b2)},")
            i += 9; continue
        if op == 0xBE:  # MULVELAXIS (3 floats)
            b1 = struct.unpack(">I", bc[i+1:i+5])[0]
            b2 = struct.unpack(">I", bc[i+5:i+9])[0]
            b3 = struct.unpack(">I", bc[i+9:i+13])[0]
            add(f"lbpMulVelAxis,")
            add(f"\t{fmt_f32_bytecode(b1)},")
            add(f"\t{fmt_f32_bytecode(b2)},")
            add(f"\t{fmt_f32_bytecode(b3)},")
            i += 13; continue
        if op == 0xBF:  # SETATTACHID
            add(f"lbpSetAttachID({bc[i+1]}),")
            i += 2; continue

        if 0xC0 <= op <= 0xCF:
            channels = op & 0x0F
            length, used = read_ushort(bc, i + 1)
            ch_parts = []
            if channels & 1: ch_parts.append("LBP_R")
            if channels & 2: ch_parts.append("LBP_G")
            if channels & 4: ch_parts.append("LBP_B")
            if channels & 8: ch_parts.append("LBP_A")
            ch_str = " | ".join(ch_parts) if ch_parts else "0"
            n_ch = bin(channels).count("1")
            i += 1 + used
            vals = [f"0x{bc[i+k]:02X}" for k in range(n_ch)]
            i += n_ch
            add(f"lbpSetPrimBlend({ch_str}), {fmt_ushort(length)}{', ' + ', '.join(vals) if vals else ''},")
            continue
        if 0xD0 <= op <= 0xDF:
            channels = op & 0x0F
            length, used = read_ushort(bc, i + 1)
            ch_parts = []
            if channels & 1: ch_parts.append("LBP_R")
            if channels & 2: ch_parts.append("LBP_G")
            if channels & 4: ch_parts.append("LBP_B")
            if channels & 8: ch_parts.append("LBP_A")
            ch_str = " | ".join(ch_parts) if ch_parts else "0"
            n_ch = bin(channels).count("1")
            i += 1 + used
            vals = [f"0x{bc[i+k]:02X}" for k in range(n_ch)]
            i += n_ch
            add(f"lbpSetEnvBlend({ch_str}), {fmt_ushort(length)}{', ' + ', '.join(vals) if vals else ''},")
            continue

        if op == 0xFA:  # SETLOOP
            add(f"lbpSetLoop({bc[i+1]}),"); i += 2; continue
        if op == 0xFB:
            add("lbpLoop(),"); i += 1; continue
        if op == 0xFC:
            add("lbpSetReturn(),"); i += 1; continue
        if op == 0xFD:
            add("lbpReturn(),"); i += 1; continue
        if op == 0xFE:
            add("lbpDead(),"); i += 1
            return out, i
        if op == 0xFF:
            add("lbpEnd(),"); i += 1
            return out, i

        # Unknown opcode -- emit raw byte and bail with a diagnostic.
        add(f"/* unknown op 0x{op:02X} */ 0x{op:02X},")
        i += 1
        return out, i

    return out, i


# ----------------------------------------------------------------------
# Top-level emitter.
# ----------------------------------------------------------------------

def parse_bank(data: bytes):
    n = struct.unpack_from(">i", data, 0)[0]
    offsets = list(struct.unpack_from(f">{n}I", data, 4))
    scripts = []
    for idx, off in enumerate(offsets):
        hdr = struct.unpack_from(">HHHHIff fff ffff", data, off)
        bc_start = off + 0x30
        bc_end = offsets[idx + 1] if idx + 1 < n else len(data)
        bc_full = data[bc_start:bc_end]
        lines, used = decode_bytecode(bc_full)
        scripts.append({
            "kind": hdr[0],
            "texture_id": hdr[1],
            "generator_lifetime": hdr[2],
            "particle_lifetime": hdr[3],
            "flags": hdr[4],
            "gravity": hdr[5],
            "friction": hdr[6],
            "vel": (hdr[7], hdr[8], hdr[9]),
            "unk_0x20": hdr[10],
            "unk_0x24": hdr[11],
            "update_rate": hdr[12],
            "size": hdr[13],
            "bytecode_lines": lines,
            "bytecode_used": used,
        })
    return scripts


def fmt_header_field(name: str, kind: str, raw, comment: str = "") -> str:
    if kind == "f32":
        bits = bits_of_f32(raw) if isinstance(raw, float) else int(raw)
        dec = fmt_float_decimal(bits)
        if dec is None:
            return f"\t/* {name}: bit pattern 0x{bits:08X} (no clean decimal) */"
        return f"\t{dec},  /* {name}{comment} */"
    if kind == "u16":
        return f"\t{raw},  /* {name}{comment} */"
    if kind == "flags":
        return f"\t{fmt_flags(raw)},  /* {name}{comment} */"
    if kind == "vec3":
        x, y, z = raw
        xs = fmt_float_decimal(bits_of_f32(x)) or f"/* 0x{bits_of_f32(x):08X} */ 0.0f"
        ys = fmt_float_decimal(bits_of_f32(y)) or f"/* 0x{bits_of_f32(y):08X} */ 0.0f"
        zs = fmt_float_decimal(bits_of_f32(z)) or f"/* 0x{bits_of_f32(z):08X} */ 0.0f"
        return f"\t{{ {xs}, {ys}, {zs} }},  /* {name}{comment} */"
    raise ValueError(kind)


def emit_c(bank_name: str, ucase: str, scripts: list, rom_lo: int, rom_hi: int) -> str:
    n = len(scripts)
    parts = []
    parts.append(f"""/*
 * Particle script bank for {ucase}.
 * ROM: 0x{rom_lo:X}..0x{rom_hi:X} -- see smashbrothers.us.yaml.
 *
 * See [PARTICLE_BANK_DISCOVERIES.md] for the structure of these files.
 * Generated by tools/decode_scb.py; edit by hand thereafter.
 */

#include <ssb_types.h>
#include <stddef.h>
#include <lb/lbtypes.h>
#include <lb/lbparticle_script.h>

""")

    # Per-script wrapper struct typedefs.
    for idx, s in enumerate(scripts):
        parts.append(f"typedef struct {bank_name}Script_{idx}\n{{\n")
        parts.append(f"\tLBScriptHeader hdr;\n")
        parts.append(f"\tu8             bytecode[{s['bytecode_used']}];\n")
        parts.append(f"}} {bank_name}Script_{idx};\n\n")

    # Bank wrapper.
    parts.append(f"typedef struct {bank_name}Scb\n{{\n")
    parts.append(f"\ts32              scripts_num;\n")
    parts.append(f"\tu32              script_offsets[{n}];\n")
    for idx in range(n):
        parts.append(f"\t{bank_name}Script_{idx} script_{idx};\n")
    parts.append(f"}} {bank_name}Scb;\n\n")

    # The big initializer.
    parts.append(f"const {bank_name}Scb d{ucase}Scb = {{\n")
    parts.append(f"\t{n},\n")
    parts.append(f"\t{{\n")
    for idx in range(n):
        parts.append(f"\t\toffsetof({bank_name}Scb, script_{idx}),\n")
    parts.append(f"\t}},\n")

    for idx, s in enumerate(scripts):
        parts.append(f"\t{{  /* script_{idx} */\n")
        parts.append(f"\t\t{{  /* hdr */\n")
        parts.append("\t\t" + fmt_header_field("kind", "u16", s["kind"]) + "\n")
        parts.append("\t\t" + fmt_header_field("texture_id", "u16", s["texture_id"]) + "\n")
        parts.append("\t\t" + fmt_header_field("generator_lifetime", "u16", s["generator_lifetime"]) + "\n")
        parts.append("\t\t" + fmt_header_field("particle_lifetime", "u16", s["particle_lifetime"]) + "\n")
        parts.append("\t\t" + fmt_header_field("flags", "flags", s["flags"]) + "\n")
        parts.append("\t\t" + fmt_header_field("gravity", "f32", s["gravity"]) + "\n")
        parts.append("\t\t" + fmt_header_field("friction", "f32", s["friction"]) + "\n")
        parts.append("\t\t" + fmt_header_field("vel", "vec3", s["vel"]) + "\n")
        parts.append("\t\t" + fmt_header_field("unk_0x20", "f32", s["unk_0x20"]) + "\n")
        parts.append("\t\t" + fmt_header_field("unk_0x24", "f32", s["unk_0x24"]) + "\n")
        parts.append("\t\t" + fmt_header_field("update_rate", "f32", s["update_rate"]) + "\n")
        parts.append("\t\t" + fmt_header_field("size", "f32", s["size"]) + "\n")
        parts.append(f"\t\t}},\n")
        parts.append(f"\t\t{{  /* bytecode */\n")
        for line in s["bytecode_lines"]:
            parts.append(f"\t\t\t{line}\n")
        parts.append(f"\t\t}},\n")
        parts.append(f"\t}},\n")

    parts.append(f"}};\n")
    return "".join(parts)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("name", help="bank name without _scb suffix (e.g. mntitle)")
    ap.add_argument("rom_lo", help="ROM start (0x...)", type=lambda x: int(x, 0))
    ap.add_argument("rom_hi", help="ROM end (0x...)", type=lambda x: int(x, 0))
    ap.add_argument("--baserom", default="baserom.us.z64")
    ap.add_argument("--ucase", default=None,
                    help="symbol-name prefix camel-case form. Defaults to "
                         "name with first letter uppercased.")
    args = ap.parse_args()

    with open(args.baserom, "rb") as f:
        f.seek(args.rom_lo)
        data = f.read(args.rom_hi - args.rom_lo)

    scripts = parse_bank(data)
    bank_name = args.name.replace(".", "_").replace("-", "_")
    ucase = args.ucase or (bank_name[:1].upper() + bank_name[1:])
    sys.stdout.write(emit_c(bank_name, ucase, scripts, args.rom_lo, args.rom_hi))
    return 0


if __name__ == "__main__":
    sys.exit(main())
