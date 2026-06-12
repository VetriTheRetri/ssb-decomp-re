#!/usr/bin/env python3
"""
Walk a `u32 dXxx_AnimJoint[N]` (or MatAnimJoint / CamAnimJoint) array and
rewrite each command word as an `aobjEvent32*()` macro call from
src/sys/objdef.h. Payload words (f32 values that follow SetVal* commands
based on `popcount(flags)`) are left as raw hex.

Conservative: only commands whose stream-position is known unambiguously
are rewritten. The dispatch follows the runtime's logic in
src/sys/objanim.c — each opcode declares how many additional words it
consumes from the stream.

After decoding, the symbolize pass (tools/symbolizeAObjFlags.py) runs on
the file automatically: SetVal*/SetExt* flag masks become AOBJ_*FLAG_*
OR-expressions where the script's context (joint / material / camera) can
be inferred, and SetExt color payload words get `/* RGBA(...) */` comments.

Run as:
    tools/decodeAObjEvent32.py <file_id>     # rewrite one file
    tools/decodeAObjEvent32.py --all         # every file with anim arrays
"""

import argparse
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from symbolizeAObjFlags import process_file as symbolize_file

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

# Opcode -> (macro_template, payload_words_consumed_after_command)
# payload_words_consumed function takes (flags, payload) -> int
def popcount(x):
    n = 0
    while x:
        n += x & 1
        x >>= 1
    return n


# Layout: opcode at bits 25..31, flags at bits 15..24, payload at bits 0..14
#
# payload_fn(flags, payload) returns the number of words the runtime consumes
# AFTER the command word. Derived from src/sys/objanim.c's per-opcode
# dispatcher -- each case calls AObjAnimAdvance(...) once per payload
# word it reads, after the initial advance past the command itself.
#
# Notable corrections vs. naive guesses:
#  * SetVal0Rate / SetVal0RateBlock consume popcount(flags), not 2*popcount
#    (they only read target_val per track, not target_val + target_rate).
#  * SetInterp / SetAnim each consume 1 follow-up word (the next ->p slot).
#  * Cmd17 consumes popcount(flags >> 4) words (only tracks 4..13 emit f payloads).
OPCODES = {
    0x00: ("aobjEvent32End()", lambda f, p: 0),
    0x01: ("aobjEvent32Jump", lambda f, p: 1),  # Jump reads ->p (next word) as new script
    0x02: ("aobjEvent32Wait", lambda f, p: 0),
    0x03: ("aobjEvent32SetValBlock", lambda f, p: popcount(f)),
    0x04: ("aobjEvent32SetVal", lambda f, p: popcount(f)),
    0x05: ("aobjEvent32SetValRateBlock", lambda f, p: 2 * popcount(f)),
    0x06: ("aobjEvent32SetValRate", lambda f, p: 2 * popcount(f)),
    0x07: ("aobjEvent32SetTargetRate", lambda f, p: popcount(f)),
    0x08: ("aobjEvent32SetVal0RateBlock", lambda f, p: popcount(f)),
    0x09: ("aobjEvent32SetVal0Rate", lambda f, p: popcount(f)),
    0x0A: ("aobjEvent32SetValAfterBlock", lambda f, p: popcount(f)),
    0x0B: ("aobjEvent32SetValAfter", lambda f, p: popcount(f)),
    0x0C: ("aobjEvent32Cmd12", lambda f, p: 0),
    0x0D: ("aobjEvent32SetInterp", lambda f, p: 1),
    0x0E: ("aobjEvent32SetAnim", lambda f, p: 1),
    0x0F: ("aobjEvent32SetFlags", lambda f, p: 0),
    0x10: ("aobjEvent32Cmd16", lambda f, p: 0),
    0x11: ("aobjEvent32Cmd17", lambda f, p: popcount((f >> 4) & 0x3FF)),
    0x12: ("aobjEvent32SetExtValAfterBlock", lambda f, p: popcount(f)),
    0x13: ("aobjEvent32SetExtValAfter", lambda f, p: popcount(f)),
    0x14: ("aobjEvent32SetExtValBlock", lambda f, p: popcount(f)),
    0x15: ("aobjEvent32SetExtVal", lambda f, p: popcount(f)),
    0x16: ("aobjEvent32Cmd22", lambda f, p: 0),
    0x17: ("aobjEvent32Cmd23", lambda f, p: 0),
}


def decode_word(word):
    opcode = (word >> 25) & 0x7F
    flags = (word >> 15) & 0x3FF
    payload = word & 0x7FFF
    return opcode, flags, payload


def format_call(macro, opcode, flags, payload):
    """Render the macro call with appropriate args."""
    if "()" in macro:
        return macro
    name = macro
    # SetVal* family takes (flags_mask, payload)
    set_val_set = {
        "aobjEvent32SetVal", "aobjEvent32SetValBlock",
        "aobjEvent32SetValRate", "aobjEvent32SetValRateBlock",
        "aobjEvent32SetVal0Rate", "aobjEvent32SetVal0RateBlock",
        "aobjEvent32SetValAfter", "aobjEvent32SetValAfterBlock",
        "aobjEvent32SetTargetRate",
        "aobjEvent32SetExtVal", "aobjEvent32SetExtValBlock",
        "aobjEvent32SetExtValAfter", "aobjEvent32SetExtValAfterBlock",
    }
    if name in set_val_set:
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32SetInterp":
        return f"{name}({payload}, 0x{flags:03X})"
    if name == "aobjEvent32SetAnim":
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32SetFlags":
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32Jump":
        return f"{name}"  # caller appends address
    if name == "aobjEvent32Wait":
        return f"{name}({payload})"
    if name.startswith("aobjEvent32Cmd"):  # Cmd12 / 16 / 17 / 22 / 23
        return f"{name}(0x{flags:03X}, {payload})"
    return name


def decode_stream(words, sym, chain_pointers):
    """Walk the words, return list of (output_str, kind, original_word).
    kind is 'cmd' / 'payload' / 'pointer' / 'raw'.

    chain_pointers maps `byte_offset_within_array -> target_label` for
    every word position in the block that is a chain-encoded pointer per
    the file's .reloc. Those positions emit a `(u32)((u8*)<target>)`
    macro and the runtime fixRelocChain.py rewrites them to the chain
    encoding -- the C source value can be anything since fixRelocChain
    overwrites it.

    Greedy / lenient: never returns None. Unknown opcodes or
    payload-overflow cases emit raw hex so the array still round-trips
    byte-identically."""
    out = []
    i = 0
    n = len(words)
    while i < n:
        byte_off = i * 4
        word = words[i]
        # Chain-encoded pointer per .reloc -- emit symbol-relative ref.
        if byte_off in chain_pointers:
            target = chain_pointers[byte_off]
            out.append((f"(u32){target}", 'pointer', word))
            i += 1
            continue
        opcode, flags, payload = decode_word(word)
        # End / Jump / Wait shorthands hardcode some fields to 0.
        # Fall back to *Raw variants when real bytes carry non-zero values.
        if opcode == 0x00:
            if flags == 0 and payload == 0:
                out.append(("aobjEvent32End()", 'cmd', word))
            else:
                out.append((f"aobjEvent32EndRaw(0x{flags:03X}, {payload})", 'cmd', word))
            i += 1
            continue
        if opcode not in OPCODES:
            out.append((f"0x{word:08X}", 'raw', word))
            i += 1
            continue
        macro, payload_fn = OPCODES[opcode]
        nfollow = payload_fn(flags, payload)
        # Guard against payload overflow OR a chain pointer landing inside
        # this opcode's payload window (mis-aligned decode). Jump (0x01),
        # SetAnim (0x0E), and SetInterp (0x0D) read their next word as
        # `->p` -- a pointer the runtime jumps to. A chain pointer at that
        # position is the EXPECTED form, so don't fall back to raw hex.
        if i + nfollow >= n:
            out.append((f"0x{word:08X}", 'raw', word))
            i += 1
            continue
        expects_pointer_payload = opcode in (0x01, 0x0D, 0x0E)
        if not expects_pointer_payload:
            payload_window_clean = all(
                (i + 1 + k) * 4 not in chain_pointers
                for k in range(nfollow)
            )
            if not payload_window_clean:
                out.append((f"0x{word:08X}", 'raw', word))
                i += 1
                continue
        if opcode == 0x01:  # Jump
            # Always emit Jump as TWO separate source lines (cmd word +
            # address word) so the post-decode line count matches the
            # array's u32 count -- the splitter assumes 1 line == 1 word
            # and the convenience macros aobjEvent32Jump(addr) / JumpRaw
            # expand to two u32s on one line, which throws off counting.
            out.append((f"aobjEvent32JumpCmd(0x{flags:03X}, {payload})", 'cmd', word))
            i += 1
            payload_byte = i * 4
            if payload_byte in chain_pointers:
                out.append((f"(u32){chain_pointers[payload_byte]}", 'pointer', words[i]))
            else:
                out.append((f"(u32)0x{words[i]:08X}", 'payload', words[i]))
            i += 1
            continue
        if opcode == 0x02:  # Wait — shorthand hardcodes flags=0
            if flags == 0:
                out.append((f"aobjEvent32Wait({payload})", 'cmd', word))
            else:
                out.append((f"aobjEvent32WaitRaw(0x{flags:03X}, {payload})", 'cmd', word))
            i += 1
            continue
        out.append((format_call(macro, opcode, flags, payload), 'cmd', word))
        i += 1
        # Opcodes whose follow-up payload words are f32 values (the runtime
        # reads `event32->f` from each one). Annotate with `/* {value}f */`
        # so the human-readable view shows the numeric value alongside the
        # bit pattern.
        is_f32_payload_op = opcode in (
            0x03, 0x04,           # SetValBlock / SetVal
            0x05, 0x06,           # SetValRateBlock / SetValRate
            0x07,                 # SetTargetRate
            0x08, 0x09,           # SetVal0RateBlock / SetVal0Rate
            0x0A, 0x0B,           # SetValAfterBlock / SetValAfter
            0x11,                 # Cmd17 (multi-track f32 dispatch)
            0x12, 0x13, 0x14, 0x15  # SetExt* family
        )
        for _ in range(nfollow):
            payload_byte = i * 4
            if payload_byte in chain_pointers:
                # Jump / SetAnim / SetInterp -- runtime reads `->p` here,
                # and the .reloc has the chain target. Emit symbolic ref.
                out.append((f"(u32){chain_pointers[payload_byte]}", 'pointer', words[i]))
            elif is_f32_payload_op:
                bits = words[i]
                f = struct.unpack('>f', struct.pack('>I', bits))[0]
                # Annotate with the float value for readability. process_array
                # adds the trailing `,`; we put the comment after where it
                # would land.
                out.append((f"0x{bits:08X}", 'f32_payload', bits))
            else:
                out.append((f"0x{words[i]:08X}", 'payload', words[i]))
            i += 1
    return out


def process_array(text, sym, words, chain_pointers):
    """Decode this array's words to a body string. Lines are tab-indented;
    payload words and raw entries get an extra spacing prefix to visually
    separate them from command lines. f32 payloads get a trailing
    `/* {value}f */` comment showing the float interpretation."""
    decoded = decode_stream(words, sym, chain_pointers)
    lines = []
    for s, kind, orig_word in decoded:
        prefix = "" if kind in ('cmd', 'pointer') else "    "
        if kind == 'f32_payload':
            f = struct.unpack('>f', struct.pack('>I', orig_word))[0]
            lines.append(f"\t{prefix}{s},  /* {f!r}f */")
        else:
            lines.append(f"\t{prefix}{s},")
    return "\n".join(lines) + "\n"


def parse_reloc_chain_pointers(reloc_path, target_sym):
    """Return {byte_offset_in_target_array: target_label_string} for every
    intern .reloc entry whose ptr label is `target_sym+0xN`. The label
    string is what we'll write in the C source, e.g.
        ((u8*)dXxx + 0x18)
        dXxx
        dOtherSym
    """
    out = {}
    if not os.path.exists(reloc_path):
        return out
    label_re = re.compile(r'^(\w+)(?:\+0x([0-9A-Fa-f]+))?$')
    with open(reloc_path) as f:
        for ln in f:
            # Strip the trailing "# -> file N (Name)" annotation
            if '#' in ln:
                ln = ln.split('#', 1)[0]
            ln = ln.strip()
            if not ln:
                continue
            parts = ln.split()
            if len(parts) != 3:
                continue
            chain_type, ptr_label, target_label = parts
            if chain_type != 'intern':
                continue
            m = label_re.match(ptr_label)
            if not m:
                continue
            ptr_sym, ptr_off_hex = m.group(1), m.group(2)
            if ptr_sym != target_sym:
                continue
            ptr_off = int(ptr_off_hex, 16) if ptr_off_hex else 0
            # Build the target expression for the C source. Same parsing
            # for the target label.
            tm = label_re.match(target_label)
            if not tm:
                continue
            tgt_sym, tgt_off_hex = tm.group(1), tm.group(2)
            tgt_off = int(tgt_off_hex, 16) if tgt_off_hex else 0
            if tgt_off == 0:
                target_expr = tgt_sym
            else:
                target_expr = f"((u8*){tgt_sym} + 0x{tgt_off:X})"
            out[ptr_off] = target_expr
    return out


def process_file(file_id, dry=False, target_syms=None):
    c_path = None
    target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        return False

    with open(c_path) as f:
        text = f.read()

    # Default symbol-name pattern: match anywhere `AnimJoint`,
    # `MatAnimJoint`, `CamAnimJoint`, `animjoints`, or `matanimjoints`
    # appears in the symbol name. If `target_syms` is set, accept any
    # u32 array whose name is in the explicit list — useful for blocks
    # that don't follow the standard naming convention.
    if target_syms:
        sym_alt = "|".join(re.escape(s) for s in target_syms)
        sym_pattern = rf"(?:{sym_alt})"
    else:
        sym_pattern = (r"d\w*(?:AnimJoint|MatAnimJoint|CamAnimJoint|"
                       r"animjoints|matanimjoints)\w*")
    pat_inc = re.compile(
        rf"u32 ({sym_pattern})\[(\d+)\] = \{{\n"
        r"(\t#include <[^>]+>\n)\};",
        re.MULTILINE,
    )
    pat_inline = re.compile(
        rf"u32 ({sym_pattern})\[(\d+)\] = \{{\n"
        r"(?P<body>(?:[^}].*\n)+?)\};",
        re.MULTILINE,
    )
    reloc_path = c_path[:-2] + ".reloc"
    changes = 0
    new_text = text

    for m in pat_inc.finditer(text):
        sym = m.group(1)
        n = int(m.group(2))
        inc_line = m.group(3)
        # Read the .inc.c file for the words
        inc_match = re.search(r"<([^>]+)>", inc_line)
        if not inc_match:
            continue
        inc_path = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", inc_match.group(1))
        if not os.path.exists(inc_path):
            continue
        with open(inc_path) as f:
            inc_text = f.read()
        words = []
        for hm in re.finditer(r"0x([0-9A-Fa-f]+)", inc_text):
            words.append(int(hm.group(1), 16))
        if len(words) != n:
            continue
        chain_pointers = parse_reloc_chain_pointers(reloc_path, sym)
        decoded_body = process_array(text, sym, words, chain_pointers)
        if decoded_body is None:
            continue
        old_block = m.group(0)
        new_block = f"u32 {sym}[{n}] = {{\n{decoded_body}}};"
        new_text = new_text.replace(old_block, new_block, 1)
        changes += 1

    # Now also handle inline-hex bodies.
    for m in pat_inline.finditer(new_text):
        sym = m.group(1)
        n = int(m.group(2))
        body = m.group("body")
        # Skip blocks that already contain aobjEvent32 macro calls (i.e.
        # already decoded) or `#include` references (handled above).
        if "aobjEvent32" in body or "#include" in body:
            continue
        # Each non-blank source line corresponds to ONE u32 word in the
        # array. Parse each line: either a `0xNNNN…` hex literal or a
        # chain-pointer expression like `(u32)dXxx` / `(u32)((u8*)dXxx + 0xN)`.
        body_lines = [ln for ln in body.split("\n") if ln.strip()]
        if len(body_lines) != n:
            continue
        words = []
        chain_pointers = {}
        ok = True
        for i, ln in enumerate(body_lines):
            byte_off = i * 4
            stripped = ln.strip().rstrip(",").rstrip()
            # Strip trailing comment
            stripped = re.sub(r"\s*/\*.*\*/\s*$", "", stripped).rstrip(",").rstrip()
            hm = re.match(r"^0x([0-9A-Fa-f]+)$", stripped)
            if hm:
                words.append(int(hm.group(1), 16))
                continue
            # Chain pointer expressions: `(u32)dXxx`, `(u32)(dXxx)`,
            # `(u32)((u8*)dXxx + 0xN)`, `(u32)((u8*)dXxx+0xN)`.
            cm = re.match(
                r"^\(u32\)\s*\(?\s*(?:\(u8\s*\*\)\s*)?(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)"
                r"\s*(?:\+\s*0x(?P<off>[0-9A-Fa-f]+))?\s*\)?\s*\)?\s*$",
                stripped,
            )
            if cm:
                tgt_sym = cm.group("sym")
                tgt_off = int(cm.group("off"), 16) if cm.group("off") else 0
                if tgt_off == 0:
                    chain_pointers[byte_off] = tgt_sym
                else:
                    chain_pointers[byte_off] = f"((u8*){tgt_sym} + 0x{tgt_off:X})"
                words.append(0)  # placeholder, decoder ignores via chain_pointers
                continue
            ok = False
            break
        if not ok or len(words) != n:
            continue
        decoded_body = process_array(text, sym, words, chain_pointers)
        if decoded_body is None:
            continue
        old_block = m.group(0)
        new_block = f"u32 {sym}[{n}] = {{\n{decoded_body}}};"
        new_text = new_text.replace(old_block, new_block, 1)
        changes += 1

    if changes == 0 or new_text == text:
        return False
    if dry:
        print(f"fid {file_id}: would rewrite {changes} arrays")
        return True
    # Need <sys/objdef.h> include for the macros
    if "objdef.h" not in new_text:
        new_text = new_text.replace(
            '#include "relocdata_types.h"',
            '#include "relocdata_types.h"\n#include <sys/objdef.h>  // aobjEvent32* macros',
            1,
        )
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"fid {file_id} ({target_name}): rewrote {changes} anim arrays as macro calls")
    sym_changed, _, unknown = symbolize_file(c_path, False)
    if sym_changed:
        print(f"fid {file_id}: symbolized flags on {sym_changed} lines"
              + (f" ({len(unknown)} scripts left numeric — unknown context)"
                 if unknown else ""))
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry", action="store_true")
    ap.add_argument("--symbol", action="append", default=[],
                    help="decode only this u32 array (may be repeated). "
                    "Use for blocks whose name doesn't include AnimJoint.")
    args = ap.parse_args()
    if args.all:
        targets = sorted({
            int(re.match(r"^(\d+)_", fn).group(1))
            for fn in os.listdir(RELOC_DIR)
            if fn.endswith(".c") and not fn.endswith(".jp.c")
            and re.match(r"^\d+_", fn)
        })
    else:
        targets = args.file_ids
    total = 0
    for fid in targets:
        if process_file(fid, dry=args.dry,
                         target_syms=args.symbol or None):
            total += 1
    print(f"{total} files updated")


if __name__ == "__main__":
    main()
