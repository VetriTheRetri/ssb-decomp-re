#!/usr/bin/env python3
"""Decode a `.ctl` (ALBankFile) into a hand-editable C source file.

Walks the BankFile -> Bank -> Instrument -> Sound -> {Envelope, KeyMap,
WaveTable -> {ADPCMBook, ADPCMloop or RawLoop}} graph; emits one big
aggregate-struct wrapper (similar to the particle bank pipeline) where
every reachable struct gets a named field, and every internal pointer is
an `offsetof()` reference.

Per-type observed file-padding (used to size each block correctly):
    ALBankFile, ALSound, ALInstrument(0/4), ALBank, ALSeqFile -> no pad
    ALEnvelope:  pad 2  (size 14 -> 16, 8-aligned)
    ALKeyMap:    pad 2  (size  6 ->  8, 8-aligned)
    ALWaveTable: pad 4  (size 20 -> 24, 8-aligned)
    ALADPCMloop: pad 4  (size 44 -> 48, 8-aligned)
    ALADPCMBook: pad 8  (book bytes always padded to next 16-byte boundary)

Run from repo root:
    python3 tools/decode_ctl.py B1_sounds1 0xB4E5C0 0xB54CE0 \\
        > src/audio/B1_sounds1_ctl.c
"""
import argparse
import struct
import sys
from collections import OrderedDict


def u32(data, off): return struct.unpack_from(">I", data, off)[0]
def u16(data, off): return struct.unpack_from(">H", data, off)[0]
def s16(data, off): return struct.unpack_from(">h", data, off)[0]
def s32(data, off): return struct.unpack_from(">i", data, off)[0]
def u8(data, off):  return data[off]


# Per-type (base_size, file_size) -- file_size includes the trailing pad
# observed in real .ctl files. Books are variable so handled separately.
SIZE_OF = {
    "ALEnvelope":   (14, 16),
    "ALKeyMap":     ( 6,  8),
    "ALSound":      (16, 16),
    "ALWaveTable":  (20, 24),
    "ALADPCMloop":  (44, 48),
    "ALRawLoop":    (12, 16),  # rounded to 16 for safety; revisit when one shows up
}


def book_alignment(book_data_bytes: int) -> int:
    """ALADPCMBook is `s32 order; s32 npredictors; s16 book[order*npred*8]`,
    then padded so the whole block ends on a 16-byte boundary."""
    raw = 8 + book_data_bytes
    return ((raw + 15) // 16) * 16


# ----------------------------------------------------------------------
# Walk the file: collect every reachable struct, indexed by file offset.
# ----------------------------------------------------------------------

def walk(data: bytes):
    structs = OrderedDict()  # file_off -> dict of fields

    def add(off, kind, **fields):
        if off in structs:
            existing = structs[off]
            assert existing["kind"] == kind, (off, kind, existing)
            return
        structs[off] = {"offset": off, "kind": kind, **fields}

    def visit_wave(off):
        if off == 0 or off in structs: return
        base, length, t, flags = struct.unpack_from(">IiBB", data, off)
        loop, book = (0, 0)
        if t == 0:
            loop, book = struct.unpack_from(">II", data, off + 0xC)
        elif t == 1:
            loop = u32(data, off + 0xC)
        # Trailing 4 bytes after the 20-byte ALWaveTable - leftover bytes
        # the bank-builder didn't always zero. Also the 2-byte internal pad
        # between {type,flags} and the union has leftover data in some banks.
        wt_hpad  = list(data[off + 0x0A : off + 0x0C])
        wt_trail = list(data[off + 0x14 : off + 0x18])
        add(off, "ALWaveTable",
            base=base, length=length, type=t, flags=flags,
            loop_off=loop, book_off=book, hpad=wt_hpad, trail=wt_trail)
        if loop:
            if t == 0:
                start, end, count = struct.unpack_from(">III", data, loop)
                state = struct.unpack_from(">16h", data, loop + 12)
                # Trailing 4 bytes after the 44-byte ALADPCMloop.
                loop_trail = list(data[loop + 44 : loop + 48])
                add(loop, "ALADPCMloop",
                    start=start, end=end, count=count, state=list(state),
                    trail=loop_trail)
            else:
                start, end, count = struct.unpack_from(">III", data, loop)
                rl_trail = list(data[loop + 12 : loop + 16])
                add(loop, "ALRawLoop", start=start, end=end, count=count,
                    trail=rl_trail)
        if book:
            order, npred = struct.unpack_from(">ii", data, book)
            n_entries = order * npred * 8
            entries = list(struct.unpack_from(f">{n_entries}h", data, book + 8))
            # Trailing 8 bytes after the book data.
            book_end = book + 8 + n_entries * 2
            book_trail = list(data[book_end : book_end + 8])
            add(book, "ALADPCMBook",
                order=order, npredictors=npred, entries=entries,
                trail=book_trail)

    def visit_sound(off):
        if off == 0 or off in structs: return
        env, km, wt = struct.unpack_from(">III", data, off)
        pan, vol, flags = struct.unpack_from(">BBB", data, off + 12)
        # ALSound is 15 used bytes + 1 implicit pad byte that the bank-builder
        # may have filled with arbitrary data. Capture for byte-identical match.
        sound_trail = data[off + 15]
        add(off, "ALSound",
            env_off=env, keyMap_off=km, wavetable_off=wt,
            samplePan=pan, sampleVolume=vol, flags=flags, trail=sound_trail)
        if env and env not in structs:
            atk, dcy, rel, av, dv = struct.unpack_from(">iiiBB", data, env)
            # 2 trailing bytes after the 14-byte ALEnvelope.
            env_trail = list(data[env + 14 : env + 16])
            add(env, "ALEnvelope",
                attackTime=atk, decayTime=dcy, releaseTime=rel,
                attackVolume=av, decayVolume=dv, trail=env_trail)
        if km and km not in structs:
            vmin, vmax, kmin, kmax, kbase, det = struct.unpack_from(">BBBBBb", data, km)
            # 2 trailing bytes after the 6-byte ALKeyMap. Often zero, but in
            # some banks (B1_sounds2) they're non-zero leftover-from-buffer bytes
            # the bank-builder didn't clear, so we have to preserve them verbatim.
            trail = list(data[km + 6 : km + 8])
            add(km, "ALKeyMap",
                velocityMin=vmin, velocityMax=vmax, keyMin=kmin, keyMax=kmax,
                keyBase=kbase, detune=det, trail=trail)
        visit_wave(wt)

    def visit_inst(off):
        if off == 0 or off in structs: return
        vol, pan, prio, flags = struct.unpack_from(">BBBB", data, off)
        tr = struct.unpack_from(">4B", data, off + 4)   # tremType/Rate/Depth/Delay
        vb = struct.unpack_from(">4B", data, off + 8)   # vibType/Rate/Depth/Delay
        bend, sound_count = struct.unpack_from(">hh", data, off + 12)
        sound_offs = list(struct.unpack_from(f">{sound_count}I", data, off + 16))
        # Trailing pad: 4 bytes if soundCount is odd (to 8-align), else 0.
        trail = []
        if sound_count % 2 == 1:
            end = off + 16 + 4 * sound_count
            trail = list(data[end : end + 4])
        add(off, "ALInstrument",
            volume=vol, pan=pan, priority=prio, flags=flags,
            tremType=tr[0], tremRate=tr[1], tremDepth=tr[2], tremDelay=tr[3],
            vibType=vb[0],  vibRate=vb[1],  vibDepth=vb[2],  vibDelay=vb[3],
            bendRange=bend, soundCount=sound_count,
            soundArray_offs=sound_offs, trail=trail)
        for s in sound_offs:
            visit_sound(s)

    def visit_bank(off):
        if off == 0 or off in structs: return
        inst_count = s16(data, off)
        flags = u8(data, off + 2)
        pad = u8(data, off + 3)
        sample_rate = s32(data, off + 4)
        percussion = u32(data, off + 8)
        inst_offs = list(struct.unpack_from(f">{inst_count}I", data, off + 12))
        add(off, "ALBank",
            instCount=inst_count, flags=flags, pad=pad,
            sampleRate=sample_rate, percussion_off=percussion,
            instArray_offs=inst_offs)
        if percussion:
            visit_inst(percussion)
        for ip in inst_offs:
            visit_inst(ip)

    rev, bf_count = struct.unpack_from(">hh", data, 0)
    bank_offs = list(struct.unpack_from(f">{bf_count}I", data, 4))
    add(0, "ALBankFile", revision=rev, bankCount=bf_count, bankArray_offs=bank_offs)
    for bp in bank_offs:
        visit_bank(bp)

    # Sort by file offset; that's the layout order in the wrapper struct.
    return sorted(structs.values(), key=lambda s: s["offset"])


def index_by_offset(structs):
    return {s["offset"]: s for s in structs}


def assign_field_names(structs):
    """Per-type sequential numbering. ALBankFile / ALBank get fixed names."""
    counters = {}
    for s in structs:
        k = s["kind"]
        if k == "ALBankFile":
            s["name"] = "_file"
            continue
        if k == "ALBank":
            i = counters.get("ALBank", 0); counters["ALBank"] = i + 1
            s["name"] = f"bank_{i}"
            continue
        i = counters.get(k, 0); counters[k] = i + 1
        s["name"] = {
            "ALEnvelope":   f"env_{i}",
            "ALKeyMap":     f"keyMap_{i}",
            "ALSound":      f"sound_{i}",
            "ALWaveTable":  f"wave_{i}",
            "ALADPCMloop":  f"loop_{i}",
            "ALRawLoop":    f"rloop_{i}",
            "ALADPCMBook":  f"book_{i}",
            "ALInstrument": f"inst_{i}",
        }[k]


# ----------------------------------------------------------------------
# Emit the wrapper struct + initializer.
# ----------------------------------------------------------------------

C_TYPES = {
    "ALEnvelope": ("EnvelopeBlock",  16),
    "ALKeyMap":   ("KeyMapBlock",     8),
    "ALSound":    ("SoundBlock",     16),
    "ALWaveTable":("WaveTableBlock", 24),
    "ALADPCMloop":("LoopBlock",      48),
    "ALRawLoop":  ("RawLoopBlock",   16),
}


def emit_block_typedefs(structs, out):
    out.append("/* Local block typedefs: byte-identical mirrors of the "
               "libaudio types but with explicit trailing-byte fields so we "
               "can preserve the bank-builder's leftover/uninitialized bytes "
               "(some banks have non-zero data in the trailing pad). */\n")
    out.append("typedef struct {\n"
               "\ts32 attackTime, decayTime, releaseTime;\n"
               "\tu8 attackVolume, decayVolume;\n"
               "\tu8 _trail[2];\n"
               "} EnvelopeBlock;\n")
    out.append("typedef struct {\n"
               "\tu8 velocityMin, velocityMax, keyMin, keyMax, keyBase;\n"
               "\ts8 detune;\n"
               "\tu8 _trail[2];\n"
               "} KeyMapBlock;\n")
    out.append("typedef struct {\n"
               "\tu32 envelope, keyMap, wavetable;\n"
               "\tu8 samplePan, sampleVolume, flags, _trail;\n"
               "} SoundBlock;\n")
    out.append("typedef struct {\n"
               "\tu32 base; s32 len;\n"
               "\tu8 type, flags; u8 _hpad[2];\n"
               "\tu32 loop, book;\n"
               "\tu8 _trail[4];\n"
               "} WaveTableBlock;\n")
    out.append("typedef struct {\n"
               "\tu32 start, end, count;\n"
               "\ts16 state[16];\n"
               "\tu8 _trail[4];\n"
               "} LoopBlock;\n")
    out.append("typedef struct {\n"
               "\tu32 start, end, count;\n"
               "\tu8 _trail[4];\n"
               "} RawLoopBlock;\n\n")

    # ALADPCMBook: variable-size book[]. Always +8 trailing bytes.
    seen = set()
    for s in structs:
        if s["kind"] != "ALADPCMBook": continue
        key = (s["order"], s["npredictors"])
        if key in seen: continue
        seen.add(key)
        order, npred = key
        n = order * npred * 8
        out.append(f"typedef struct {{ s32 order; s32 npredictors; "
                   f"s16 book[{n}]; u8 _trail[8]; }} BookBlock_{order}_{npred};\n")

    # ALInstrument: pad to 8-byte alignment. soundCount even -> 0 pad,
    # odd -> 4 pad (since base = 16 + 4*N; 4*N mod 8 = 4 when N odd).
    seen_inst = set()
    for s in structs:
        if s["kind"] != "ALInstrument": continue
        n = s["soundCount"]
        if n in seen_inst: continue
        seen_inst.add(n)
        pad = 4 if (n % 2 == 1) else 0
        pad_field = f" u8 _trail[{pad}];" if pad else ""
        out.append(f"typedef struct {{ u8 volume, pan, priority, flags; "
                   f"u8 tremType, tremRate, tremDepth, tremDelay; "
                   f"u8 vibType, vibRate, vibDepth, vibDelay; "
                   f"s16 bendRange, soundCount; "
                   f"u32 soundArray[{n}];{pad_field} }} InstrumentBlock_{n};\n")

    # ALBank: no extra pad (trailing file pad comes from .rodata 16-alignment).
    seen_bank = set()
    for s in structs:
        if s["kind"] != "ALBank": continue
        n = s["instCount"]
        if n in seen_bank: continue
        seen_bank.add(n)
        out.append(f"typedef struct {{ s16 instCount; u8 flags, _pad; "
                   f"s32 sampleRate; u32 percussion; "
                   f"u32 instArray[{n}]; }} BankBlock_{n};\n")
    out.append("\n")


def field_type_for(s):
    k = s["kind"]
    if k in C_TYPES:
        return C_TYPES[k][0]
    if k == "ALADPCMBook":
        return f"BookBlock_{s['order']}_{s['npredictors']}"
    if k == "ALInstrument":
        return f"InstrumentBlock_{s['soundCount']}"
    if k == "ALBank":
        return f"BankBlock_{s['instCount']}"
    raise ValueError(k)


def field_size_for(s):
    k = s["kind"]
    if k in C_TYPES:
        return C_TYPES[k][1]
    if k == "ALADPCMBook":
        return book_alignment(s["order"] * s["npredictors"] * 8 * 2)
    if k == "ALInstrument":
        raw = 16 + 4 * s["soundCount"]
        return ((raw + 7) // 8) * 8
    if k == "ALBank":
        return 12 + 4 * s["instCount"]
    if k == "ALBankFile":
        return 4 + 4 * s["bankCount"]
    raise ValueError(k)


def emit_struct(file_, structs, banner: str, out):
    out.append(f"typedef struct {banner}\n{{\n")
    out.append(f"\ts16 _revision;\n\ts16 _bankCount;\n\tu32 _bankArray[{file_['bankCount']}];\n")
    # Now emit each leaf struct in offset order.
    for s in structs:
        if s["kind"] == "ALBankFile":
            continue
        out.append(f"\t{field_type_for(s)} {s['name']};\n")
    out.append(f"}} {banner};\n\n")


def fmt_offsetof(banner, name, sub=None):
    if sub is None:
        return f"offsetof({banner}, {name})"
    return f"offsetof({banner}, {name}.{sub})"


def emit_initializer(structs, by_off, banner, sym_name, file_struct, out):
    out.append(f"const {banner} {sym_name} = {{\n")
    out.append(f"\t0x{file_struct['revision']:04X},\n")
    out.append(f"\t{file_struct['bankCount']},\n")
    out.append(f"\t{{\n")
    for bo in file_struct["bankArray_offs"]:
        if bo == 0:
            out.append(f"\t\t0,\n")
        else:
            out.append(f"\t\t{fmt_offsetof(banner, by_off[bo]['name'])},\n")
    out.append(f"\t}},\n")

    for s in structs:
        if s["kind"] == "ALBankFile":
            continue
        out.append(f"\t{{  /* {s['name']} */\n")
        emit_one_struct(s, by_off, banner, out)
        out.append(f"\t}},\n")
    out.append("};\n")


def emit_one_struct(s, by_off, banner, out):
    k = s["kind"]
    def fmt_bytes(blist):
        return "{ " + ", ".join(f"0x{b:02X}" for b in blist) + " }"

    if k == "ALEnvelope":
        out.append(f"\t\t{s['attackTime']}, {s['decayTime']}, {s['releaseTime']},\n")
        out.append(f"\t\t{s['attackVolume']}, {s['decayVolume']},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALKeyMap":
        out.append(f"\t\t{s['velocityMin']}, {s['velocityMax']}, "
                   f"{s['keyMin']}, {s['keyMax']}, {s['keyBase']}, {s['detune']},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALSound":
        env = "0" if s["env_off"] == 0 else fmt_offsetof(banner, by_off[s['env_off']]['name'])
        km  = "0" if s["keyMap_off"] == 0 else fmt_offsetof(banner, by_off[s['keyMap_off']]['name'])
        wt  = "0" if s["wavetable_off"] == 0 else fmt_offsetof(banner, by_off[s['wavetable_off']]['name'])
        out.append(f"\t\t{env}, {km}, {wt},\n")
        out.append(f"\t\t{s['samplePan']}, {s['sampleVolume']}, {s['flags']}, 0x{s['trail']:02X},\n")
    elif k == "ALWaveTable":
        loop_off = s["loop_off"]
        book_off = s["book_off"]
        loop = "0" if loop_off == 0 else fmt_offsetof(banner, by_off[loop_off]['name'])
        book = "0" if book_off == 0 else fmt_offsetof(banner, by_off[book_off]['name'])
        out.append(f"\t\t0x{s['base']:X}u, {s['length']},\n")
        out.append(f"\t\t{s['type']}, {s['flags']}, {fmt_bytes(s['hpad'])},\n")
        out.append(f"\t\t{loop}, {book},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALADPCMloop":
        out.append(f"\t\t{s['start']}, {s['end']}, {s['count']},\n")
        state_strs = ", ".join(str(v) for v in s["state"])
        out.append(f"\t\t{{ {state_strs} }},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALRawLoop":
        out.append(f"\t\t{s['start']}, {s['end']}, {s['count']},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALADPCMBook":
        out.append(f"\t\t{s['order']}, {s['npredictors']},\n")
        out.append(f"\t\t{{\n")
        ents = s["entries"]
        for i in range(0, len(ents), 8):
            row = ents[i:i+8]
            out.append("\t\t\t" + ", ".join(str(v) for v in row) + ",\n")
        out.append(f"\t\t}},\n")
        out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALInstrument":
        out.append(f"\t\t{s['volume']}, {s['pan']}, {s['priority']}, {s['flags']},\n")
        out.append(f"\t\t{s['tremType']}, {s['tremRate']}, {s['tremDepth']}, {s['tremDelay']},\n")
        out.append(f"\t\t{s['vibType']},  {s['vibRate']},  {s['vibDepth']},  {s['vibDelay']},\n")
        out.append(f"\t\t{s['bendRange']}, {s['soundCount']},\n")
        out.append(f"\t\t{{\n")
        for so in s["soundArray_offs"]:
            if so == 0:
                out.append(f"\t\t\t0,\n")
            else:
                out.append(f"\t\t\t{fmt_offsetof(banner, by_off[so]['name'])},\n")
        out.append(f"\t\t}},\n")
        # If soundCount is odd, the typedef has a trailing u8 _trail[4].
        if s["soundCount"] % 2 == 1:
            out.append(f"\t\t{fmt_bytes(s['trail'])},\n")
    elif k == "ALBank":
        out.append(f"\t\t{s['instCount']}, {s['flags']}, {s['pad']},\n")
        out.append(f"\t\t{s['sampleRate']},\n")
        perc = "0" if s["percussion_off"] == 0 else fmt_offsetof(banner, by_off[s["percussion_off"]]["name"])
        out.append(f"\t\t{perc},\n")
        out.append(f"\t\t{{\n")
        for ip in s["instArray_offs"]:
            if ip == 0:
                out.append(f"\t\t\t0,\n")
            else:
                out.append(f"\t\t\t{fmt_offsetof(banner, by_off[ip]['name'])},\n")
        out.append(f"\t\t}},\n")
    else:
        raise ValueError(k)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("name", help="bank name without _ctl suffix (e.g. B1_sounds1)")
    ap.add_argument("rom_lo", type=lambda x: int(x, 0))
    ap.add_argument("rom_hi", type=lambda x: int(x, 0))
    ap.add_argument("--baserom", default="baserom.us.z64")
    args = ap.parse_args()

    with open(args.baserom, "rb") as f:
        f.seek(args.rom_lo)
        data = f.read(args.rom_hi - args.rom_lo)

    structs = walk(data)
    assign_field_names(structs)
    by_off = index_by_offset(structs)
    file_struct = by_off[0]

    sname = args.name.replace(".", "_").replace("-", "_")
    banner = "".join(p.capitalize() for p in sname.split("_")) + "Ctl"
    sym_name = "d" + banner

    out = []
    out.append(f"""/*
 * Instrument bank for {args.name}.ctl.
 * ROM: 0x{args.rom_lo:X}..0x{args.rom_hi:X}.
 *
 * See [MUSIC_AND_SFX_DISCOVERIES.md] for the structure of these files.
 * Generated by tools/decode_ctl.py; edit by hand thereafter.
 *
 * The file is one ALBankFile aggregate -- header at the front, every
 * reachable ALEnvelope / ALKeyMap / ALSound / ALWaveTable / ALADPCMloop /
 * ALADPCMBook / ALInstrument / ALBank packed in original file-offset
 * order, with internal pointers as offsetof references. The runtime
 * (alBnkfNew + syAudioBnkfPatchBank/Inst/Sound/WaveTable in
 * src/sys/audio.c) walks the tree post-DMA and converts each offset to
 * an absolute pointer. ALWaveTable.base is the only offset that gets the
 * paired .tbl base added rather than the .ctl base.
 */

#include <PR/libaudio.h>
#include <PR/ultratypes.h>
#include <stddef.h>

""")
    emit_block_typedefs(structs, out)
    emit_struct(file_struct, structs, banner, out)
    emit_initializer(structs, by_off, banner, sym_name, file_struct, out)

    sys.stdout.write("".join(out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
