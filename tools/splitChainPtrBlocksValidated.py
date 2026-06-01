#!/usr/bin/python3
"""Per-fid validation loop wrapping splitChainPtrBlocks.py.

For each fid:
  1. Snapshot all relocData .c files that might be touched.
  2. Apply splitChainPtrBlocks to the target fid.
  3. Propagate type rewrites: any block whose definition type CHANGED
     (e.g. `Gfx host[N]` → `u8 host[N]`) gets the matching `extern <T>
     host[];` line rewritten in EVERY other .c file that references it.
  4. Re-extract this fid's `.inc.c` files.
  5. Re-symbolize the fid so the master `.c` carries the right externs.
  6. Build the fid's `.o`.
  7. Build the fid's `.vpk0.bin` via the existing `.reloc`-driven path.
     Compare against the golden (= original .reloc-driven baserom-matching
     binary). If different, the split is destructive: revert all snapshots.
  8. Run `--auto` verify. If the fid now passes auto mode, keep the
     changes. If it still mismatches under `--auto`, that's fine (we'll
     keep the change since at least the .reloc-driven build still matches).

Usage:
    tools/splitChainPtrBlocksValidated.py [--version us|jp] [--all]
    tools/splitChainPtrBlocksValidated.py <fid> [--version us|jp]
"""
import argparse
import hashlib
import os
import re
import shutil
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(PROJECT_DIR, 'tools'))

import splitChainPtrBlocks as sp  # noqa: E402
import symbolizeDLInc as sdi  # noqa: E402
import hoistExterns  # noqa: E402


def _md5(path):
    if not os.path.exists(path): return None
    h = hashlib.md5()
    with open(path, 'rb') as f:
        for chunk in iter(lambda: f.read(65536), b''):
            h.update(chunk)
    return h.hexdigest()


def _snapshot_all_c(src_dir):
    """Return {filename: content} for every .c file in src_dir."""
    snap = {}
    for fname in os.listdir(src_dir):
        if not fname.endswith('.c'): continue
        path = os.path.join(src_dir, fname)
        with open(path) as f:
            snap[fname] = f.read()
    return snap


def _restore(src_dir, snap):
    for fname, content in snap.items():
        with open(os.path.join(src_dir, fname), 'w') as f:
            f.write(content)


def _detect_retyped_hosts(snap_before, src_dir):
    """Compare each .c before/after to find blocks whose TOP-LEVEL definition
    type changed. Returns {sym_name: new_type_str}.
    """
    out = {}
    after = {}
    for fname in snap_before:
        with open(os.path.join(src_dir, fname)) as f:
            after[fname] = f.read()
    def_re = re.compile(
        r'^([A-Za-z_]\w*)\s+(\**)\s*([A-Za-z_]\w*)\s*\[[^\]]*\]\s*=\s*\{',
        re.MULTILINE)
    for fname in snap_before:
        old_defs = {}
        for m in def_re.finditer(snap_before[fname]):
            type_, stars, sym = m.group(1), m.group(2), m.group(3)
            if type_ == 'extern': continue
            old_defs.setdefault(sym, f'{type_}{(" " + stars) if stars else ""}')
        new_defs = {}
        for m in def_re.finditer(after[fname]):
            type_, stars, sym = m.group(1), m.group(2), m.group(3)
            if type_ == 'extern': continue
            new_defs.setdefault(sym, f'{type_}{(" " + stars) if stars else ""}')
        for sym, new_type in new_defs.items():
            old_type = old_defs.get(sym)
            if old_type and old_type != new_type:
                out[sym] = new_type
    return out


def _propagate_extern_rewrites(retyped, src_dir):
    """For every .c file (not just the touched fid's), rewrite
    `extern <oldT> <sym>[..];` lines to `extern <newT> <sym>[];`.
    """
    if not retyped: return
    n_files_touched = 0
    for fname in os.listdir(src_dir):
        if not fname.endswith('.c'): continue
        path = os.path.join(src_dir, fname)
        with open(path) as f:
            text = f.read()
        new_text = text
        for sym, new_type in retyped.items():
            new_text = re.sub(
                rf'^([ \t]*)extern\s+\S[^;\n]*?\b{re.escape(sym)}\b\s*\[[^\]]*\]\s*;([ \t]*\n)',
                rf'\1extern {new_type} {sym}[];\2',
                new_text, flags=re.MULTILINE)
        if new_text != text:
            with open(path, 'w') as f:
                f.write(new_text)
            n_files_touched += 1
    return n_files_touched


def validate_fid(fid, version, verbose=True):
    """Apply split, propagate, build, verify. Returns one of:
      'no-op'    — no shadows; nothing to do
      'pass'     — split succeeded AND fid now passes --auto
      'pass-noauto' — split succeeded (build ok) but --auto still mismatches
      'reverted' — build broke or .reloc-driven mismatched; reverted
      'error'    — unexpected exception; reverted
    """
    src_dir = os.path.join(PROJECT_DIR, 'src', 'relocData')
    build_dir = os.path.join(PROJECT_DIR, 'build', version)
    o_path = os.path.join(build_dir, 'src', 'relocData', '.build', f'{fid}.o')
    # Detect .bin vs .vpk0.bin
    bin_candidates = [
        os.path.join(build_dir, 'assets', version, 'relocData', f'{fid}.vpk0.bin'),
        os.path.join(build_dir, 'assets', version, 'relocData', f'{fid}.bin'),
    ]
    golden_md5 = None
    bin_path = None
    for c in bin_candidates:
        if os.path.exists(c):
            bin_path = c
            golden_md5 = _md5(c)
            break
    if not bin_path:
        if verbose: print(f'fid={fid}: no golden binary found', file=sys.stderr)
        return 'no-op'

    snap = _snapshot_all_c(src_dir)
    try:
        # Apply split
        n_split = sp.split_file(fid, version, dry_run=False) or 0
        if n_split == 0:
            return 'no-op'

        # Propagate extern rewrites
        retyped = _detect_retyped_hosts(snap, src_dir)
        if retyped:
            n_files = _propagate_extern_rewrites(retyped, src_dir)
            if verbose: print(f'  retyped {len(retyped)} hosts; updated {n_files} .c files')

        # Re-extract this fid's inc.c
        subprocess.run(['python3', os.path.join(PROJECT_DIR, 'tools', 'extractRelocInc.py'),
                        str(fid), '--version', version], capture_output=True)
        # Re-symbolize
        hoistExterns._DEF_TYPE_CACHE = None  # invalidate cache
        sdi.symbolize_fid(fid, version, dry_run=False)

        # Build .o
        for p in (o_path, bin_path):
            if os.path.exists(p): os.unlink(p)
        # Use a relative path for the make target — `make` matches its rules
        # against the path as written.
        bin_path_rel = os.path.relpath(bin_path, PROJECT_DIR)
        r = subprocess.run(['make', '-j4', 'RELOC_DATA=1', bin_path_rel],
                           cwd=PROJECT_DIR, capture_output=True, text=True)
        if r.returncode != 0:
            if verbose: print(f'  build failed (rc={r.returncode}):\n    '
                              + (r.stderr or '').splitlines()[-1] if r.stderr else '')
            _restore(src_dir, snap)
            # Restore inc.c too by re-extracting
            subprocess.run(['python3', os.path.join(PROJECT_DIR, 'tools', 'extractRelocInc.py'),
                            str(fid), '--version', version], capture_output=True)
            return 'reverted'

        # Compare .reloc-driven output to golden
        new_md5 = _md5(bin_path)
        if new_md5 != golden_md5:
            if verbose: print(f'  .reloc-driven binary diverged from baserom! Reverting.')
            _restore(src_dir, snap)
            subprocess.run(['python3', os.path.join(PROJECT_DIR, 'tools', 'extractRelocInc.py'),
                            str(fid), '--version', version], capture_output=True)
            return 'reverted'

        # Run auto verify
        r = subprocess.run(['python3', os.path.join(PROJECT_DIR, 'tools', 'verifyAutoReloc.py'),
                            '--fid', str(fid), '--workers', '1', '--version', version],
                           capture_output=True, text=True)
        if '  ok:           1' in (r.stdout or ''):
            return 'pass'
        return 'pass-noauto'
    except Exception as e:
        if verbose: print(f'  exception: {e}', file=sys.stderr)
        _restore(src_dir, snap)
        return 'error'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int, nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    args = ap.parse_args()
    if args.all:
        bad = os.path.join(PROJECT_DIR, 'assets', args.version, 'auto_reloc_bad.txt')
        with open(bad) as f:
            fids = [int(x) for x in f if x.strip()]
        counters = {'pass': 0, 'pass-noauto': 0, 'reverted': 0, 'no-op': 0, 'error': 0}
        for fid in fids:
            print(f'=== fid {fid} ===', flush=True)
            outcome = validate_fid(fid, args.version)
            counters[outcome] = counters.get(outcome, 0) + 1
            print(f'  -> {outcome}', flush=True)
        print(f'\nSummary: {counters}')
    else:
        if args.fid is None: ap.error('fid required unless --all')
        outcome = validate_fid(args.fid, args.version)
        print(f'fid={args.fid}: {outcome}')


if __name__ == '__main__':
    main()
