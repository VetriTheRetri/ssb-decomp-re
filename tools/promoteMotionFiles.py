#!/usr/bin/python3
"""Promote MainMotion and ShieldPose relocData files from raw u32 blobs to typed C source.

MainMotion files are flat streams of ftMotionCommand u32 words.  The reloc chain
entries are the address words (word 2) of pointer commands: Subroutine/Goto/
SetParallelScript for intern relocs, and SetThrow/SetDamageThrown for extern.
Each MainMotion file is emitted as a single flat u32 array.

ShieldPose files contain AObjEvent16 figatree animation data (u16 commands)
organised into pointer arrays and per-joint script regions.

Usage:
    python3 tools/promoteMotionFiles.py <file_id>
    python3 tools/promoteMotionFiles.py --all
    python3 tools/promoteMotionFiles.py --dry-run <file_id>
"""

import argparse
import csv
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
OUT_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")

# Import decode_joint_to_macros from promoteAnimJoints
sys.path.insert(0, SCRIPT_DIR)
from promoteAnimJoints import decode_joint_to_macros


def get_us_names():
    names = {}
    with open(DESC_PATH) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)\s*$', line)
            if m:
                names[int(m.group(1))] = m.group(2)
    return names


def get_bin_path(fid):
    for ext in ['.bin', '.vpk0.bin']:
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            return p
    return None


def get_csv_row(fid):
    with open(CSV_PATH) as f:
        reader = csv.reader(f)
        next(reader)  # skip header
        for i, row in enumerate(reader):
            if i == fid:
                return row
    return None


def walk_reloc_chain(data, start_word):
    """Walk a relocation chain starting at start_word.

    Returns list of (ptr_word_offset, target_word_offset) pairs.
    """
    relocs = []
    cur = start_word
    while cur != 0xFFFF:
        byte_off = cur * 4
        if byte_off + 4 > len(data):
            break
        val = struct.unpack_from('>I', data, byte_off)[0]
        nxt = (val >> 16) & 0xFFFF
        tgt = val & 0xFFFF
        relocs.append((cur, tgt))
        cur = nxt
    return relocs


def find_figatree_arrays(relocs, file_size_words):
    """Group relocation entries into figatree pointer arrays.

    A figatree pointer array is a contiguous block of u32 slots where some
    slots are reloc'd pointers and others are NULL (0x00000000).

    Returns list of arrays, each being:
        {
            'start': first_word_offset,
            'end': last_word_offset + 1 (exclusive),
            'relocs': [(ptr_word, target_word), ...],
            'slots': total slot count
        }
    """
    if not relocs:
        return []

    sorted_relocs = sorted(relocs, key=lambda r: r[0])

    # Group relocs that are close together (within the same pointer array)
    # A figatree array for a character has N_joints slots (typically 16-24)
    # We detect group boundaries by looking for large gaps between pointer words
    groups = []
    cur_group = [sorted_relocs[0]]

    for i in range(1, len(sorted_relocs)):
        gap = sorted_relocs[i][0] - sorted_relocs[i - 1][0]
        # Within a single figatree array, pointers are at most ~24 slots apart
        # Between arrays, there's typically data (AObjEvent16) in between
        if gap > 30:
            groups.append(cur_group)
            cur_group = [sorted_relocs[i]]
        else:
            cur_group.append(sorted_relocs[i])
    groups.append(cur_group)

    arrays = []
    for g in groups:
        first_ptr = g[0][0]
        last_ptr = g[-1][0]
        # The array spans from first_ptr to last_ptr inclusive
        # But we need to figure out where it actually starts and ends
        # (there may be NULL slots before the first pointer or after the last)

        # For now, assume array starts at first_ptr and ends at last_ptr + 1
        # We'll refine boundaries later when we know what's around them
        arrays.append({
            'start': first_ptr,
            'end': last_ptr + 1,
            'relocs': g,
            'slots': last_ptr - first_ptr + 1,
        })

    return arrays


def identify_regions(data, intern_relocs, extern_relocs, file_size_words):
    """Identify all regions in the file: pointer arrays and data regions.

    Merges intern and extern relocs together when finding pointer array
    boundaries, since they can be interleaved in the same memory region.

    Returns a list of regions sorted by word offset:
        {'type': 'data', 'start': word, 'end': word, 'kind': 'raw'|'aobj'}
        {'type': 'ptrs', 'start': word, 'end': word,
         'intern_relocs': [...], 'extern_relocs': [...], 'slots': N}
    """
    # Merge ALL relocs (intern + extern) for grouping purposes
    # Tag each with its chain type
    all_relocs_tagged = [(r[0], r[1], 'intern') for r in intern_relocs]
    all_relocs_tagged += [(r[0], r[1], 'extern') for r in extern_relocs]

    # Find pointer arrays using ALL relocs merged
    all_relocs_plain = [(r[0], r[1]) for r in all_relocs_tagged]
    merged_arrays = find_figatree_arrays(all_relocs_plain, file_size_words)

    # Build intern/extern maps for quick lookup
    intern_map = {r[0]: r[1] for r in intern_relocs}
    extern_map = {r[0]: r[1] for r in extern_relocs}

    # Split each merged array's relocs back into intern/extern
    for arr in merged_arrays:
        arr['intern_relocs'] = [(pw, tw) for pw, tw in arr['relocs']
                                if pw in intern_map]
        arr['extern_relocs'] = [(pw, tw) for pw, tw in arr['relocs']
                                if pw in extern_map]

    # Collect target word offsets from intern relocs (these are AObjEvent16 data)
    intern_targets = set(r[1] for r in intern_relocs)

    # Build final region list
    regions = []
    pos = 0

    for arr in merged_arrays:
        # Data region before this array
        if pos < arr['start']:
            region_has_targets = any(
                pos <= t < arr['start'] for t in intern_targets
            )
            regions.append({
                'type': 'data',
                'start': pos,
                'end': arr['start'],
                'kind': 'aobj' if region_has_targets else 'raw',
            })

        # The pointer array itself
        regions.append({
            'type': 'ptrs',
            'start': arr['start'],
            'end': arr['end'],
            'intern_relocs': arr['intern_relocs'],
            'extern_relocs': arr['extern_relocs'],
            'slots': arr['slots'],
        })
        pos = arr['end']

    # Trailing data after last array
    if pos < file_size_words:
        region_has_targets = any(
            pos <= t < file_size_words for t in intern_targets
        )
        regions.append({
            'type': 'data',
            'start': pos,
            'end': file_size_words,
            'kind': 'aobj' if region_has_targets else 'raw',
        })

    return regions


def emit_raw_u32(data, start_word, end_word):
    """Emit raw u32 hex values for a data region."""
    lines = []
    n_words = end_word - start_word
    for w in range(0, n_words, 8):
        chunk = []
        for k in range(w, min(w + 8, n_words)):
            val = struct.unpack_from('>I', data, (start_word + k) * 4)[0]
            chunk.append(f"0x{val:08X}")
        lines.append("\t" + ", ".join(chunk) + ",")
    return lines


# ── ftMotionCommand decoder ─────────────────────────────────────────────

# Enum values from nFTMotionEvent (ftdef.h)
EVT_End = 0
EVT_SyncWait = 1
EVT_AsyncWait = 2
EVT_MakeAttackColl = 3
EVT_MakeAttackCollScaled = 4
EVT_ClearAttackCollID = 5
EVT_ClearAttackCollAll = 6
EVT_SetAttackCollOffset = 7
EVT_SetAttackCollDamage = 8
EVT_SetAttackCollSize = 9
EVT_SetAttackCollSoundLevel = 10
EVT_RefreshAttackCollID = 11
EVT_SetThrow = 12
EVT_SetDamageThrown = 13
EVT_PlayFGM = 14
EVT_PlayLoopSFXStoreInfo = 15
EVT_StopLoopSFX = 16
EVT_PlayVoiceStoreInfo = 17
EVT_PlayLoopVoiceStoreInfo = 18
EVT_PlayFGMStoreInfo = 19
EVT_PlaySmashVoice = 20
EVT_SetFlag0 = 21
EVT_SetFlag1 = 22
EVT_SetFlag2 = 23
EVT_SetFlag3 = 24
EVT_SetAirJumpAdd = 25
EVT_SetAirJumpMax = 26
EVT_SetHitStatusPartAll = 27
EVT_SetHitStatusPartID = 28
EVT_SetHitStatusAll = 29
EVT_ResetDamageCollPartAll = 30
EVT_SetDamageCollPartID = 31
EVT_LoopBegin = 32
EVT_LoopEnd = 33
EVT_Subroutine = 34
EVT_Return = 35
EVT_Goto = 36
EVT_PauseScript = 37
EVT_Effect = 38
EVT_EffectItemHold = 39
EVT_SetModelPartID = 40
EVT_ResetModelPartAll = 41
EVT_HideModelPartAll = 42
EVT_SetTexturePartID = 43
EVT_SetColAnim = 44
EVT_ResetColAnim = 45
EVT_SetParallelScript = 46
EVT_SetSlopeContour = 47
EVT_HideItem = 48
EVT_MakeRumble = 49
EVT_StopRumble = 50
EVT_SetAfterImage = 51

# Word count for each opcode (derived from struct sizes in fttypes.h)
OPCODE_WORD_COUNT = {
    EVT_End: 1, EVT_SyncWait: 1, EVT_AsyncWait: 1,
    EVT_MakeAttackColl: 5, EVT_MakeAttackCollScaled: 5,
    EVT_ClearAttackCollID: 1, EVT_ClearAttackCollAll: 1,
    EVT_SetAttackCollOffset: 2,
    EVT_SetAttackCollDamage: 1, EVT_SetAttackCollSize: 1,
    EVT_SetAttackCollSoundLevel: 1, EVT_RefreshAttackCollID: 1,
    EVT_SetThrow: 2, EVT_SetDamageThrown: 2,
    EVT_PlayFGM: 1, EVT_PlayLoopSFXStoreInfo: 1, EVT_StopLoopSFX: 1,
    EVT_PlayVoiceStoreInfo: 1, EVT_PlayLoopVoiceStoreInfo: 1,
    EVT_PlayFGMStoreInfo: 1, EVT_PlaySmashVoice: 1,
    EVT_SetFlag0: 1, EVT_SetFlag1: 1, EVT_SetFlag2: 1, EVT_SetFlag3: 1,
    EVT_SetAirJumpAdd: 1, EVT_SetAirJumpMax: 1,
    EVT_SetHitStatusPartAll: 1, EVT_SetHitStatusPartID: 1,
    EVT_SetHitStatusAll: 1,
    EVT_ResetDamageCollPartAll: 1, EVT_SetDamageCollPartID: 4,
    EVT_LoopBegin: 1, EVT_LoopEnd: 1,
    EVT_Subroutine: 2, EVT_Return: 1, EVT_Goto: 2,
    EVT_PauseScript: 1,
    EVT_Effect: 4, EVT_EffectItemHold: 4,
    EVT_SetModelPartID: 1, EVT_ResetModelPartAll: 1, EVT_HideModelPartAll: 1,
    EVT_SetTexturePartID: 1, EVT_SetColAnim: 1, EVT_ResetColAnim: 1,
    EVT_SetParallelScript: 2,
    EVT_SetSlopeContour: 1, EVT_HideItem: 1,
    EVT_MakeRumble: 1, EVT_StopRumble: 1, EVT_SetAfterImage: 1,
}

# Human-readable names for opcodes
OPCODE_NAMES = {
    EVT_End: "End", EVT_SyncWait: "SyncWait", EVT_AsyncWait: "AsyncWait",
    EVT_MakeAttackColl: "MakeAttackColl",
    EVT_MakeAttackCollScaled: "MakeAttackCollScaled",
    EVT_ClearAttackCollID: "ClearAttackCollID",
    EVT_ClearAttackCollAll: "ClearAttackCollAll",
    EVT_SetAttackCollOffset: "SetAttackCollOffset",
    EVT_SetAttackCollDamage: "SetAttackCollDamage",
    EVT_SetAttackCollSize: "SetAttackCollSize",
    EVT_SetAttackCollSoundLevel: "SetAttackCollSoundLevel",
    EVT_RefreshAttackCollID: "RefreshAttackCollID",
    EVT_SetThrow: "SetThrow", EVT_SetDamageThrown: "SetDamageThrown",
    EVT_PlayFGM: "PlayFGM",
    EVT_PlayLoopSFXStoreInfo: "PlayLoopSFXStoreInfo",
    EVT_StopLoopSFX: "StopLoopSFX",
    EVT_PlayVoiceStoreInfo: "PlayVoiceStoreInfo",
    EVT_PlayLoopVoiceStoreInfo: "PlayLoopVoiceStoreInfo",
    EVT_PlayFGMStoreInfo: "PlayFGMStoreInfo",
    EVT_PlaySmashVoice: "PlaySmashVoice",
    EVT_SetFlag0: "SetFlag0", EVT_SetFlag1: "SetFlag1",
    EVT_SetFlag2: "SetFlag2", EVT_SetFlag3: "SetFlag3",
    EVT_SetAirJumpAdd: "SetAirJumpAdd", EVT_SetAirJumpMax: "SetAirJumpMax",
    EVT_SetHitStatusPartAll: "SetHitStatusPartAll",
    EVT_SetHitStatusPartID: "SetHitStatusPartID",
    EVT_SetHitStatusAll: "SetHitStatusAll",
    EVT_ResetDamageCollPartAll: "ResetDamageCollPartAll",
    EVT_SetDamageCollPartID: "SetDamageCollPartID",
    EVT_LoopBegin: "LoopBegin", EVT_LoopEnd: "LoopEnd",
    EVT_Subroutine: "Subroutine", EVT_Return: "Return",
    EVT_Goto: "Goto", EVT_PauseScript: "PauseScript",
    EVT_Effect: "Effect", EVT_EffectItemHold: "EffectItemHold",
    EVT_SetModelPartID: "SetModelPartID",
    EVT_ResetModelPartAll: "ResetModelPartAll",
    EVT_HideModelPartAll: "HideModelPartAll",
    EVT_SetTexturePartID: "SetTexturePartID",
    EVT_SetColAnim: "SetColAnim", EVT_ResetColAnim: "ResetColAnim",
    EVT_SetParallelScript: "SetParallelScript",
    EVT_SetSlopeContour: "SetSlopeContour", EVT_HideItem: "HideItem",
    EVT_MakeRumble: "MakeRumble", EVT_StopRumble: "StopRumble",
    EVT_SetAfterImage: "SetAfterImage",
}

FTTHROWHITDESC_WORDS = 7  # sizeof(FTThrowHitDesc) / sizeof(u32)


def sign_extend(val, bits):
    """Sign-extend a value from the given number of bits."""
    if val & (1 << (bits - 1)):
        val -= (1 << bits)
    return val


def decode_single_word_macro(word):
    """Decode a single u32 word as an ftMotionCommand macro string, or None."""
    opcode = (word >> 26) & 0x3F
    payload = word & 0x03FFFFFF

    macro_map_simple = {
        EVT_End: "ftMotionCommandEnd()",
        EVT_ClearAttackCollAll: "ftMotionCommandClearAttackCollAll()",
        EVT_StopLoopSFX: "ftMotionCommandStopLoopSFX()",
        EVT_ResetDamageCollPartAll: "ftMotionCommandResetDamageCollPartAll()",
        EVT_LoopEnd: "ftMotionCommandLoopEnd()",
        EVT_Return: "ftMotionCommandReturn()",
        EVT_PauseScript: "ftMotionCommandPauseScript()",
        EVT_ResetModelPartAll: "ftMotionCommandResetModelPartAll()",
        EVT_HideModelPartAll: "ftMotionCommandHideModelPartAll()",
        EVT_ResetColAnim: "ftMotionCommandResetColAnim()",
    }
    if opcode in macro_map_simple:
        return macro_map_simple[opcode]

    macro_map_payload = {
        EVT_SyncWait: "ftMotionCommandWait",
        EVT_AsyncWait: "ftMotionCommandWaitAsync",
        EVT_ClearAttackCollID: "ftMotionCommandClearAttackCollID",
        EVT_RefreshAttackCollID: "ftMotionCommandRefreshAttackCollID",
        EVT_PlayFGM: "ftMotionPlayFGM",
        EVT_PlayLoopSFXStoreInfo: "ftMotionCommandPlayLoopSFXStoreInfo",
        EVT_PlayVoiceStoreInfo: "ftMotionPlayVoice",
        EVT_PlayLoopVoiceStoreInfo: "ftMotionPlayInterruptableVoice",
        EVT_PlayFGMStoreInfo: "ftMotionCommandPlayFGMStoreInfo",
        EVT_PlaySmashVoice: "ftMotionCommandPlaySmashVoice",
        EVT_SetFlag0: "ftMotionCommandSetFlag0",
        EVT_SetFlag1: "ftMotionCommandSetFlag1",
        EVT_SetFlag2: "ftMotionCommandSetFlag2",
        EVT_SetFlag3: "ftMotionCommandSetFlag3",
        EVT_SetAirJumpAdd: "ftMotionCommandSetAirJumpAdd",
        EVT_SetAirJumpMax: "ftMotionCommandSetAirJumpMax",
        EVT_SetHitStatusPartAll: "ftMotionCommandSetHitStatusPartAll",
        EVT_SetHitStatusAll: "ftMotionCommandSetHitStatusAll",
        EVT_LoopBegin: "ftMotionCommandLoopBegin",
        EVT_SetTexturePartID: "ftMotionCommandSetTexturePartID",
        EVT_SetSlopeContour: "ftMotionCommandSetSlopeContour",
        EVT_HideItem: "ftMotionCommandHideItem",
        EVT_StopRumble: "ftMotionCommandStopRumble",
    }
    if opcode in macro_map_payload:
        return f"{macro_map_payload[opcode]}({payload})"

    if opcode == EVT_SetAttackCollDamage:
        aid = (word >> 23) & 0x7
        dmg = (word >> 15) & 0xFF
        return f"ftMotionCommandSetAttackCollDamage({aid}, {dmg})"
    if opcode == EVT_SetAttackCollSize:
        aid = (word >> 23) & 0x7
        sz = (word >> 7) & 0xFFFF
        return f"ftMotionCommandSetAttackCollSize({aid}, {sz})"
    if opcode == EVT_SetAttackCollSoundLevel:
        aid = (word >> 23) & 0x7
        lvl = (word >> 20) & 0x7
        return f"ftMotionCommandSetAttackCollSoundLevel({aid}, {lvl})"
    if opcode == EVT_SetHitStatusPartID:
        jid = sign_extend((word >> 19) & 0x7F, 7)
        hs = word & 0x7FFFF
        return f"ftMotionCommandSetHitStatusPartID({jid}, {hs})"
    if opcode == EVT_SetModelPartID:
        jid = sign_extend((word >> 19) & 0x7F, 7)
        mid = sign_extend(word & 0x7FFFF, 19)
        return f"ftMotionCommandSetModelPartID({jid}, {mid})"
    if opcode == EVT_SetColAnim:
        cid = (word >> 18) & 0xFF
        ln = word & 0x3FFFF
        return f"ftMotionCommandSetColAnim({cid}, {ln})"
    if opcode == EVT_MakeRumble:
        ln = (word >> 13) & 0x1FFF
        rid = word & 0x1FFF
        return f"ftMotionCommandMakeRumble({ln}, {rid})"
    if opcode == EVT_SetAfterImage:
        isw = (word >> 18) & 0xFF
        ds = sign_extend(word & 0x3FFFF, 18)
        return f"ftMotionCommandSetAfterImage({isw}, {ds})"

    return None


def find_data_structure_ranges(data, intern_relocs):
    """Find word offsets that are FTThrowHitDesc data (not command scripts).

    SetThrow (opcode 12) intern relocs point to FTThrowHitDesc data.
    Returns a set of word offsets that are part of data structures.
    """
    data_words = set()
    file_words = len(data) // 4

    for pw, tw in intern_relocs:
        if pw > 0:
            prev = struct.unpack_from('>I', data, (pw - 1) * 4)[0]
            prev_opc = (prev >> 26) & 0x3F
            if prev_opc == EVT_SetThrow:
                pos = tw
                while pos + FTTHROWHITDESC_WORDS <= file_words:
                    for w in range(pos, pos + FTTHROWHITDESC_WORDS):
                        data_words.add(w)
                    end_pos = pos + FTTHROWHITDESC_WORDS
                    if end_pos < file_words:
                        nv = struct.unpack_from('>I', data, end_pos * 4)[0]
                        nopc = (nv >> 26) & 0x3F
                        is_data = (nv == 0xFFFFFFFF or
                                   (nopc == 0 and nv < 0x1000))
                    else:
                        is_data = False
                    if not is_data:
                        break
                    pos += FTTHROWHITDESC_WORDS

    return data_words


def _decode_motion_comment(data, pos, opcode, word_count,
                           intern_map, extern_map, var):
    """Build a human-readable comment for a command at the given position."""
    word = struct.unpack_from('>I', data, pos * 4)[0]
    payload = word & 0x03FFFFFF
    name_str = OPCODE_NAMES.get(opcode, f"Unk{opcode}")
    loc = f"word {pos} (0x{pos * 4:04X})"

    macro = decode_single_word_macro(word)
    if word_count == 1 and macro:
        return f"{loc} {macro}"

    if word_count == 1:
        return f"{loc} {name_str}({payload})"

    if word_count == 2:
        w2 = struct.unpack_from('>I', data, (pos + 1) * 4)[0]
        if opcode == EVT_SetAttackCollOffset:
            aid = (word >> 23) & 0x7
            ox = sign_extend((word >> 7) & 0xFFFF, 16)
            oy = sign_extend((w2 >> 16) & 0xFFFF, 16)
            oz = sign_extend(w2 & 0xFFFF, 16)
            return f"{loc} SetAttackCollOffset({aid}, {ox}, {oy}, {oz})"
        if opcode in (EVT_Subroutine, EVT_Goto, EVT_SetThrow,
                      EVT_SetDamageThrown, EVT_SetParallelScript):
            return f"{loc} {name_str}"
        return f"{loc} {name_str}"

    if word_count == 4:
        w2 = struct.unpack_from('>I', data, (pos + 1) * 4)[0]
        w3 = struct.unpack_from('>I', data, (pos + 2) * 4)[0]
        w4 = struct.unpack_from('>I', data, (pos + 3) * 4)[0]
        if opcode in (EVT_Effect, EVT_EffectItemHold):
            jt = sign_extend((word >> 19) & 0x7F, 7)
            eid = (word >> 10) & 0x1FF
            fl = word & 0x3FF
            ox = sign_extend((w2 >> 16) & 0xFFFF, 16)
            oy = sign_extend(w2 & 0xFFFF, 16)
            oz = sign_extend((w3 >> 16) & 0xFFFF, 16)
            rx = sign_extend(w3 & 0xFFFF, 16)
            ry = sign_extend((w4 >> 16) & 0xFFFF, 16)
            rz = sign_extend(w4 & 0xFFFF, 16)
            return (f"{loc} {name_str}({jt}, {eid}, {fl}, "
                    f"{ox}, {oy}, {oz}, {rx}, {ry}, {rz})")
        if opcode == EVT_SetDamageCollPartID:
            jid = sign_extend((word >> 19) & 0x7F, 7)
            ox = sign_extend((w2 >> 16) & 0xFFFF, 16)
            oy = sign_extend(w2 & 0xFFFF, 16)
            oz = sign_extend((w3 >> 16) & 0xFFFF, 16)
            sx = sign_extend(w3 & 0xFFFF, 16)
            sy = sign_extend((w4 >> 16) & 0xFFFF, 16)
            sz = sign_extend(w4 & 0xFFFF, 16)
            return (f"{loc} SetDamageCollPartID({jid}, "
                    f"{ox}, {oy}, {oz}, {sx}, {sy}, {sz})")
        return f"{loc} {name_str}"

    if word_count == 5:
        w2 = struct.unpack_from('>I', data, (pos + 1) * 4)[0]
        w3 = struct.unpack_from('>I', data, (pos + 2) * 4)[0]
        w4 = struct.unpack_from('>I', data, (pos + 3) * 4)[0]
        w5 = struct.unpack_from('>I', data, (pos + 4) * 4)[0]
        if opcode in (EVT_MakeAttackColl, EVT_MakeAttackCollScaled):
            aid = (word >> 23) & 0x7
            gid = (word >> 20) & 0x7
            jid = sign_extend((word >> 13) & 0x7F, 7)
            dmg = (word >> 5) & 0xFF
            reb = (word >> 4) & 0x1
            ele = word & 0xF
            sz = (w2 >> 16) & 0xFFFF
            ox = sign_extend(w2 & 0xFFFF, 16)
            oy = sign_extend((w3 >> 16) & 0xFFFF, 16)
            oz = sign_extend(w3 & 0xFFFF, 16)
            ang = sign_extend((w4 >> 22) & 0x3FF, 10)
            kbs = (w4 >> 12) & 0x3FF
            kbw = (w4 >> 2) & 0x3FF
            ga = w4 & 0x3
            sd = sign_extend((w5 >> 24) & 0xFF, 8)
            fl = (w5 >> 21) & 0x7
            fk = (w5 >> 17) & 0xF
            kbb = (w5 >> 7) & 0x3FF
            return (f"{loc} {name_str}({aid}, {gid}, {jid}, {dmg}, {reb}, "
                    f"{ele}, {sz}, {ox}, {oy}, {oz}, {ang}, {kbs}, {kbw}, "
                    f"{ga}, {sd}, {fl}, {fk}, {kbb})")
        return f"{loc} {name_str}"

    return f"{loc} {name_str}"


def generate_motion_file(fid, name, data, intern_relocs, extern_relocs):
    """Generate .c and .reloc for a MainMotion file as a single flat u32 array."""
    prefix = f"d{name}"
    file_size_words = len(data) // 4
    var = prefix

    c_lines = [
        f"/* ftMotionCommand script data for relocData file {fid} ({name}) */",
        f"/* File size: {len(data)} bytes (0x{len(data):X}) */",
        "",
        '#include "relocdata_types.h"',
        '#include <ft/ftdef.h>',
        "",
    ]
    reloc_lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]

    intern_map = {r[0]: r[1] for r in intern_relocs}
    extern_map = {r[0]: r[1] for r in extern_relocs}
    data_struct_words = find_data_structure_ranges(data, intern_relocs)

    c_lines.append(f"u32 {var}[{file_size_words}] = {{")

    pos = 0
    while pos < file_size_words:
        # Data structure regions (FTThrowHitDesc) - emit raw hex
        if pos in data_struct_words:
            while pos < file_size_words and pos in data_struct_words:
                val = struct.unpack_from('>I', data, pos * 4)[0]
                c_lines.append(f"\t0x{val:08X}, /* word {pos} (0x{pos * 4:04X}) data */")
                pos += 1
            continue

        word = struct.unpack_from('>I', data, pos * 4)[0]
        opcode = (word >> 26) & 0x3F
        word_count = OPCODE_WORD_COUNT.get(opcode, 1)

        available = file_size_words - pos
        if word_count > available:
            for w in range(pos, file_size_words):
                val = struct.unpack_from('>I', data, w * 4)[0]
                c_lines.append(f"\t0x{val:08X}, /* word {w} */")
            break

        # Decode command for comment, but always emit raw hex
        comment = _decode_motion_comment(data, pos, opcode, word_count,
                                          intern_map, extern_map, var)
        c_lines.append(f"\t0x{word:08X}, /* {comment} */")
        for k in range(1, word_count):
            wk = struct.unpack_from('>I', data, (pos + k) * 4)[0]
            wk_pos = pos + k
            # Annotate reloc'd pointer words
            if wk_pos in intern_map:
                tw = intern_map[wk_pos]
                c_lines.append(f"\t0x{wk:08X}, /* -> word {tw} (0x{tw * 4:04X}) */")
                reloc_lines.append(
                    f"intern {var}+0x{wk_pos * 4:X} {var}+0x{tw * 4:X}")
            elif wk_pos in extern_map:
                tw = extern_map[wk_pos]
                c_lines.append(f"\t0x{wk:08X}, /* extern -> 0x{tw * 4:X} */")
                reloc_lines.append(
                    f"extern {var}+0x{wk_pos * 4:X} 0x{tw * 4:X}")
            else:
                c_lines.append(f"\t0x{wk:08X},")

        pos += word_count

    c_lines.append("};")
    c_lines.append("")

    return "\n".join(c_lines), "\n".join(reloc_lines) + "\n"


# ── ShieldPose (AObjEvent16) helpers ────────────────────────────────────


def emit_aobj_data(data, start_word, end_word, intern_relocs, prefix, region_idx):
    """Emit AObjEvent16 data for a region that is targeted by figatree pointers.

    The intern_relocs list contains (ptr_word, target_word) pairs where
    target_word points into this region. We use the targets to split
    the region into per-joint script arrays.
    """
    c_lines = []
    reloc_lines = []

    # Find all targets that point into this region
    targets_in_region = sorted(set(
        r[1] for r in intern_relocs
        if start_word <= r[1] < end_word
    ))

    if not targets_in_region:
        # No targets point here - emit as raw u32
        var = f"{prefix}_data{region_idx}"
        n = end_word - start_word
        c_lines.append(f"/* Data region at word 0x{start_word:04X} ({n} words) */")
        c_lines.append(f"u32 {var}[{n}] = {{")
        c_lines.extend(emit_raw_u32(data, start_word, end_word))
        c_lines.append("};")
        c_lines.append("")
        return c_lines, reloc_lines, {start_word: var}

    # Split into per-target script arrays
    symbols = {}

    # Check if there's data before the first target
    if start_word < targets_in_region[0]:
        pre_var = f"{prefix}_pre{region_idx}"
        n = targets_in_region[0] - start_word
        c_lines.append(f"/* Pre-data at word 0x{start_word:04X} ({n} words) */")
        c_lines.append(f"u32 {pre_var}[{n}] = {{")
        c_lines.extend(emit_raw_u32(data, start_word, targets_in_region[0]))
        c_lines.append("};")
        c_lines.append("")
        symbols[start_word] = pre_var

    for ti, target_word in enumerate(targets_in_region):
        # Determine the extent of this script
        if ti + 1 < len(targets_in_region):
            script_end = targets_in_region[ti + 1]
        else:
            script_end = end_word

        script_byte_start = target_word * 4
        script_byte_end = script_end * 4
        script_size = script_byte_end - script_byte_start
        n_u16 = script_size // 2

        var = f"{prefix}_script{region_idx}_{ti}"
        symbols[target_word] = var

        c_lines.append(f"/* Script at word 0x{target_word:04X} ({n_u16} u16s) */")
        c_lines.append(f"u16 {var}[{n_u16}] = {{")

        # Try macro decode
        decoded, end_pos = decode_joint_to_macros(data, script_byte_start, script_byte_end)
        if end_pos > script_byte_end:
            # Decode overshot — emit raw u16
            for w in range(0, n_u16, 16):
                chunk = []
                for k in range(w, min(w + 16, n_u16)):
                    val = struct.unpack_from('>H', data, script_byte_start + k * 2)[0]
                    chunk.append(f"0x{val:04X}")
                c_lines.append("\t" + ", ".join(chunk) + ",")
        else:
            c_lines.extend(decoded)
            # Trailing bytes after End command
            remaining = script_byte_end - end_pos
            if remaining > 0:
                trailing = []
                for k in range(remaining // 2):
                    v = struct.unpack_from('>H', data, end_pos + k * 2)[0]
                    trailing.append(f"0x{v:04X}")
                if trailing:
                    c_lines.append(f"\t{', '.join(trailing)},")

        c_lines.append("};")
        c_lines.append("")

    return c_lines, reloc_lines, symbols


def generate_file(fid, name, data, intern_relocs, extern_relocs,
                   is_motion=False):
    """Generate typed .c and .reloc content for a MainMotion/ShieldPose file."""
    if is_motion:
        return generate_motion_file(fid, name, data, intern_relocs,
                                     extern_relocs)
    prefix = f"d{name}"
    file_size_words = len(data) // 4

    c_lines = []
    reloc_lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]

    c_lines.append(f"/* Figatree motion data for relocData file {fid} ({name}) */")
    c_lines.append(f"/* File size: {len(data)} bytes (0x{len(data):X}) */")
    c_lines.append("")
    c_lines.append('#include "relocdata_types.h"')
    c_lines.append("")

    # Identify all regions
    regions = identify_regions(data, intern_relocs, extern_relocs, file_size_words)

    # First pass: identify all data regions and build symbol tables
    # (needed for forward declarations)
    all_symbols = {}  # word_offset -> variable_name

    # Assign names to pointer array regions
    ptrs_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'ptrs':
            var = f"{prefix}_ptrs{ptrs_idx}"
            region['var_name'] = var
            all_symbols[region['start']] = var
            ptrs_idx += 1

    # Pre-scan data regions to find target symbols
    data_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'data':
            targets_in_region = sorted(set(
                r[1] for r in intern_relocs
                if region['start'] <= r[1] < region['end']
            ))
            if targets_in_region:
                # Check for pre-data
                if region['start'] < targets_in_region[0]:
                    pre_var = f"{prefix}_pre{data_idx}"
                    all_symbols[region['start']] = pre_var

                for ti, tw in enumerate(targets_in_region):
                    var = f"{prefix}_script{data_idx}_{ti}"
                    all_symbols[tw] = var
            else:
                var = f"{prefix}_data{data_idx}"
                all_symbols[region['start']] = var
            data_idx += 1

    # Generate forward declarations for all data symbols that are referenced
    # by pointer arrays (intern relocs only - extern targets are external)
    declared_symbols = set()
    for ri, region in enumerate(regions):
        if region['type'] == 'ptrs':
            for ptr_w, tgt_w in region['intern_relocs']:
                if tgt_w in all_symbols:
                    sym = all_symbols[tgt_w]
                    if sym not in declared_symbols:
                        if 'script' in sym:
                            c_lines.append(f"extern u16 {sym}[];")
                        else:
                            c_lines.append(f"extern u32 {sym}[];")
                        declared_symbols.add(sym)
    if declared_symbols:
        c_lines.append("")

    # Second pass: emit all regions
    data_idx = 0
    ptrs_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'data':
            data_c, data_reloc, data_syms = emit_aobj_data(
                data, region['start'], region['end'],
                intern_relocs, prefix, data_idx
            )
            c_lines.extend(data_c)
            reloc_lines.extend(data_reloc)
            data_idx += 1

        elif region['type'] == 'ptrs':
            var = region['var_name']
            n_slots = region['slots']

            # Build maps for intern and extern relocs in this array
            intern_map = {r[0]: r[1] for r in region['intern_relocs']}
            extern_map = {r[0]: r[1] for r in region['extern_relocs']}

            n_intern = len(region['intern_relocs'])
            n_extern = len(region['extern_relocs'])
            desc_parts = []
            if n_intern:
                desc_parts.append(f"{n_intern} intern")
            if n_extern:
                desc_parts.append(f"{n_extern} extern")
            desc = ", ".join(desc_parts)

            c_lines.append(f"/* Pointer array at word 0x{region['start']:04X} "
                          f"({n_slots} slots, {desc}) */")
            c_lines.append(f"u32 {var}[{n_slots}] = {{")

            for slot in range(region['start'], region['end']):
                slot_idx = slot - region['start']
                byte_off_in_array = slot_idx * 4

                if slot in intern_map:
                    tgt_w = intern_map[slot]
                    if tgt_w in all_symbols:
                        tgt_sym = all_symbols[tgt_w]
                        c_lines.append(f"\t(u32){tgt_sym}, /* [{slot_idx}] intern -> 0x{tgt_w:04X} */")
                        reloc_lines.append(
                            f"intern {var}+0x{byte_off_in_array:X} {tgt_sym}")
                    else:
                        # Intern target not in symbols - find closest symbol
                        val = struct.unpack_from('>I', data, slot * 4)[0]
                        c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] intern -> 0x{tgt_w:04X} */")
                        best_sym, best_off = None, None
                        for sw, sn in sorted(all_symbols.items()):
                            if sw <= tgt_w:
                                best_sym, best_off = sn, sw
                        if best_sym:
                            offset_bytes = (tgt_w - best_off) * 4
                            if offset_bytes > 0:
                                reloc_lines.append(
                                    f"intern {var}+0x{byte_off_in_array:X} "
                                    f"{best_sym}+0x{offset_bytes:X}")
                            else:
                                reloc_lines.append(
                                    f"intern {var}+0x{byte_off_in_array:X} {best_sym}")
                        else:
                            reloc_lines.append(
                                f"intern {var}+0x{byte_off_in_array:X} 0x{tgt_w * 4:X}")

                elif slot in extern_map:
                    tgt_w = extern_map[slot]
                    val = struct.unpack_from('>I', data, slot * 4)[0]
                    c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] extern -> 0x{tgt_w:04X} */")
                    reloc_lines.append(
                        f"extern {var}+0x{byte_off_in_array:X} 0x{tgt_w * 4:X}")

                else:
                    # Non-reloc'd slot
                    val = struct.unpack_from('>I', data, slot * 4)[0]
                    if val == 0:
                        c_lines.append(f"\t0x00000000, /* [{slot_idx}] NULL */")
                    else:
                        c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] */")

            c_lines.append("};")
            c_lines.append("")
            ptrs_idx += 1

    return "\n".join(c_lines), "\n".join(reloc_lines) + "\n"


def process_file(fid, name, dry_run=False):
    """Process one file. Returns (success, message)."""
    bin_path = get_bin_path(fid)
    if not bin_path:
        return False, f"no binary for {fid}"

    with open(bin_path, 'rb') as f:
        data = f.read()

    if len(data) % 4 != 0:
        return False, f"size {len(data)} not word-aligned"

    # Get CSV data
    row = get_csv_row(fid)
    if not row:
        return False, f"no CSV entry for {fid}"

    intern_start = int(row[2].strip(), 16)
    extern_start = int(row[4].strip(), 16)

    # Walk reloc chains
    intern_relocs = walk_reloc_chain(data, intern_start)
    extern_relocs = walk_reloc_chain(data, extern_start)

    is_motion = fid in MAINMOTION_IDS
    c_content, reloc_content = generate_file(fid, name, data,
                                              intern_relocs, extern_relocs,
                                              is_motion=is_motion)

    c_path = os.path.join(OUT_DIR, f"{fid}_{name}.c")
    reloc_path = os.path.join(OUT_DIR, f"{fid}_{name}.reloc")

    if dry_run:
        return True, f"would write {os.path.basename(c_path)} ({len(data)} bytes, {len(intern_relocs)}i/{len(extern_relocs)}e relocs)"

    with open(c_path, 'w') as f:
        f.write(c_content)
    with open(reloc_path, 'w') as f:
        f.write(reloc_content)

    return True, f"{len(data)} bytes, {len(intern_relocs)} intern + {len(extern_relocs)} extern relocs"


# Target files
MAINMOTION_IDS = [202, 205, 212, 216, 220, 224, 232, 242, 246]
SHIELDPOSE_IDS = [298, 314, 318, 322, 327, 329, 331, 334, 337, 340, 343]
ALL_IDS = MAINMOTION_IDS + SHIELDPOSE_IDS


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_id", nargs="?", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    us_names = get_us_names()

    if args.file_id:
        fids = [args.file_id]
    elif args.all:
        fids = ALL_IDS
    else:
        ap.print_help()
        return 2

    ok = fail = 0
    for fid in fids:
        name = us_names.get(fid)
        if not name:
            print(f"  SKIP {fid}: no name in descriptions", file=sys.stderr)
            continue
        success, msg = process_file(fid, name, dry_run=args.dry_run)
        if success:
            ok += 1
            print(f"  OK {fid} {name}: {msg}")
        else:
            fail += 1
            print(f"  FAIL {fid} {name}: {msg}", file=sys.stderr)

    print(f"processed {ok + fail}: {ok} ok, {fail} failed")
    return 0 if fail == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
