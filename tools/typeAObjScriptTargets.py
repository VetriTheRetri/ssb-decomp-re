#!/usr/bin/env python3
"""
Iteratively retype `u8 X[N]` blocks referenced from `AObjEvent32 *Y[]`
arrays as `u32 X[N/4]` (the actual aobjEvent32 script bodies), then
decode them via decodeAObjEvent32 logic. Repeats until no more
retypes happen — newly-decoded scripts can contain
`aobjEvent32SetAnim` / `aobjEvent32Jump` chain pointers that point
at FURTHER scripts which then become typeable in the next pass.

Same idea for `MObjSub *X[]` arrays: any 120-byte `u8` target
becomes a typed `MObjSub` (delegated to promoteMObjSub.py).

Usage:
    tools/typeAObjScriptTargets.py            # iterate to fixpoint
    tools/typeAObjScriptTargets.py --once     # single pass
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))


def find_aobjevent_targets(text):
    """Find every `AObjEvent32 *X[N] = { … };` array and return the set
    of unique entry-target symbols (`(AObjEvent32 *)<sym>` and
    `(AObjEvent32 *)((u8*)<sym> + 0xN)` forms, the offset form is just
    recorded for filtering)."""
    targets = set()
    for blk in re.finditer(
        r"AObjEvent32\s*\*\s*(\w+)\[\d+\]\s*=\s*\{(.*?)\};",
        text, re.DOTALL,
    ):
        body = blk.group(2)
        for m in re.finditer(
            r"\(AObjEvent32\s*\*\)\s*"
            r"(?:&?\s*(?P<sym1>d\w+)|\(\s*\(\s*u8\s*\*\)\s*(?P<sym2>d\w+)\s*\+\s*0x[0-9A-Fa-f]+\s*\))",
            body,
        ):
            sym = m.group("sym1") or m.group("sym2")
            if sym:
                targets.add(sym)
    return targets


def retype_u8_to_u32(text, sym):
    """Retype `u8 <sym>[N] = { #include <X.data.inc.c> };` to
    `u32 <sym>[N/4]` (same include — decodeAObjEvent32 handles it).
    Also retypes any matching `extern u8 <sym>[];` forward decl to
    `extern u32 <sym>[];` so the forward decl matches the definition.
    Returns (new_text, changed)."""
    pat = re.compile(
        rf"^u8\s+{re.escape(sym)}\[(\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{{\n"
        rf"(\s*#include <[^>]+\.data\.inc\.c>\n)\}};",
        re.MULTILINE,
    )
    m = pat.search(text)
    if not m:
        return text, False
    nbytes_str = m.group(1)
    nbytes = int(nbytes_str, 16) if nbytes_str.startswith("0x") else int(nbytes_str)
    if nbytes % 4 != 0:
        return text, False
    n_words = nbytes // 4
    new_decl = (
        f"u32 {sym}[{n_words}] = {{\n"
        + m.group(2)
        + "};"
    )
    new_text = text[:m.start()] + new_decl + text[m.end():]
    # Sync any matching extern decl
    new_text = re.sub(
        rf"^extern\s+u8\s+{re.escape(sym)}\[\]\s*;\s*$",
        f"extern u32 {sym}[];",
        new_text,
        flags=re.MULTILINE,
    )
    return new_text, True


def find_files_with_aobjevent_arrays():
    out = []
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".c"):
            continue
        path = os.path.join(RELOC_DIR, fn)
        try:
            text = open(path).read()
        except OSError:
            continue
        if re.search(r"^AObjEvent32\s*\*\s*\w+\[", text, re.MULTILINE):
            out.append(path)
    return out


def run_pass():
    files = find_files_with_aobjevent_arrays()
    total_retyped = 0
    for path in files:
        text = open(path).read()
        targets = find_aobjevent_targets(text)
        n = 0
        for sym in sorted(targets):
            new_text, changed = retype_u8_to_u32(text, sym)
            if changed:
                text = new_text
                n += 1
        if n:
            open(path, "w").write(text)
            print(f"  {os.path.basename(path)}: retyped {n} u8 -> u32")
            total_retyped += n
    return total_retyped


def run_decode_all():
    """Run decodeAObjEvent32 on every fid that contains a u32 array
    referenced by AObjEvent32 *. We extend the pattern to also catch
    `gap_0x*` and other generic names."""
    # Patch decodeAObjEvent32 in-memory: monkey-patch its regex to also
    # match generic symbol names.
    import decodeAObjEvent32 as dae
    # The original regex requires the symbol's name to contain `AnimJoint`
    # or similar tokens. Replace with a pattern that matches any u32 array
    # whose include is a `.data.inc.c` file.
    original = dae.process_file
    fids = set()
    for fn in os.listdir(RELOC_DIR):
        m = re.match(r"^(\d+)_\w+\.c$", fn)
        if m:
            fids.add(int(m.group(1)))
    # Override the regex inside the module.
    dae_pat = re.compile(
        r"u32 (d\w+)\[(\d+)\] = \{\n"
        r"(\t#include <[^>]+>\n)\};",
        re.MULTILINE,
    )
    # Patch: use a wrapped process_file that uses the broader pat.
    def patched_process(file_id, dry=False):
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
        text = open(c_path).read()
        reloc_path = c_path[:-2] + ".reloc"
        changes = 0
        new_text = text
        # Capture syms whose entries reference them — these are the AObjEvent32
        # script targets we want to decode.
        target_syms = set()
        for blk in re.finditer(
            r"AObjEvent32\s*\*\s*\w+\[\d+\]\s*=\s*\{(.*?)\};",
            text, re.DOTALL,
        ):
            for mm in re.finditer(r"\(AObjEvent32\s*\*\)\s*&?\s*(d\w+)\b", blk.group(1)):
                target_syms.add(mm.group(1))

        for m in dae_pat.finditer(text):
            sym = m.group(1)
            if sym not in target_syms:
                continue
            n = int(m.group(2))
            inc_line = m.group(3)
            inc_match = re.search(r"<([^>]+)>", inc_line)
            if not inc_match:
                continue
            inc_path = os.path.join(PROJECT_DIR, "build", "src", "relocData", inc_match.group(1))
            if not os.path.exists(inc_path):
                continue
            inc_text = open(inc_path).read()
            words = []
            for hm in re.finditer(r"0x([0-9A-Fa-f]+)", inc_text):
                words.append(int(hm.group(1), 16))
            if len(words) != n:
                continue
            chain_pointers = dae.parse_reloc_chain_pointers(reloc_path, sym)
            decoded = dae.process_array(text, sym, words, chain_pointers)
            if decoded is None:
                continue
            old_block = m.group(0)
            new_block = f"u32 {sym}[{n}] = {{\n{decoded}}};"
            new_text = new_text.replace(old_block, new_block, 1)
            changes += 1
        if changes == 0 or new_text == text:
            return False
        if "objdef.h" not in new_text:
            new_text = new_text.replace(
                '#include "relocdata_types.h"',
                '#include "relocdata_types.h"\n#include <sys/objdef.h>',
                1,
            )
        if not dry:
            open(c_path, "w").write(new_text)
            print(f"  fid {file_id} ({target_name}): decoded {changes} aobjEvent32 arrays")
        return True

    decoded = 0
    for fid in sorted(fids):
        if patched_process(fid):
            decoded += 1
    return decoded


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--once", action="store_true",
                    help="single retype + decode pass (no fixpoint loop)")
    args = ap.parse_args()

    iteration = 0
    while True:
        iteration += 1
        print(f"--- iteration {iteration} ---")
        n_retyped = run_pass()
        n_decoded = run_decode_all()
        print(f"  total: {n_retyped} retyped, {n_decoded} files decoded")
        if args.once or (n_retyped == 0 and n_decoded == 0):
            break
    print("done")


if __name__ == "__main__":
    main()
