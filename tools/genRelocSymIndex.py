#!/usr/bin/python3
"""Generate the global relocData symbol index for fixRelocChain.py.

Sweeps every compiled relocData object under
build/<version>/src/relocData/.build/<fid>.o with nm and emits one line
per defined symbol:

    <symbol> <fid> <hex_offset>

fixRelocChain.py --auto reads this file (via --sym-index) to resolve
cross-file extern targets without rescanning every .o per invocation.
The Makefile regenerates it after the relocData compile stage and only
bumps its mtime when the content actually changes, so downstream
chain-fix steps re-run exactly when some symbol moved.

Usage: genRelocSymIndex.py --version us|jp [-o OUTPUT] [--workers N]
"""
import argparse
import concurrent.futures
import os
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

_NM = None


def _find_nm():
    global _NM
    if _NM:
        return _NM
    for prefix in ('mips-linux-gnu', 'mips-elf'):
        nm = f'{prefix}-nm'
        try:
            subprocess.run([nm, '--version'], capture_output=True, check=True)
            _NM = nm
            return nm
        except (FileNotFoundError, subprocess.CalledProcessError):
            continue
    print('Error: no mips nm found', file=sys.stderr)
    sys.exit(1)


def _scan_obj(args):
    fid, path, nm = args
    out = subprocess.run([nm, path], capture_output=True, text=True)
    rows = []
    for line in out.stdout.splitlines():
        parts = line.split()
        if len(parts) >= 3 and parts[1] in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
            try:
                rows.append((parts[2], fid, int(parts[0], 16)))
            except ValueError:
                continue
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('-o', '--output', default=None,
                    help='Output path (default: stdout)')
    ap.add_argument('--workers', type=int, default=os.cpu_count() or 4)
    args = ap.parse_args()

    build_dir = os.path.join(PROJECT_DIR, 'build', args.version,
                             'src', 'relocData', '.build')
    if not os.path.isdir(build_dir):
        print(f'Error: no build dir {build_dir}', file=sys.stderr)
        sys.exit(1)

    nm = _find_nm()
    jobs = []
    for fname in os.listdir(build_dir):
        if not fname.endswith('.o'):
            continue
        try:
            fid = int(fname[:-2])
        except ValueError:
            continue
        jobs.append((fid, os.path.join(build_dir, fname), nm))

    rows = []
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.workers) as ex:
        for batch in ex.map(_scan_obj, jobs):
            rows.extend(batch)

    # First-writer wins on duplicates (symbols should be globally unique);
    # deterministic order: by symbol name, then fid.
    seen = {}
    for sym, fid, off in sorted(rows, key=lambda r: (r[0], r[1])):
        if sym not in seen:
            seen[sym] = (fid, off)

    lines = [f'{sym} {fid} 0x{off:X}\n' for sym, (fid, off) in seen.items()]
    if args.output:
        with open(args.output, 'w') as f:
            f.writelines(lines)
    else:
        sys.stdout.writelines(lines)


if __name__ == '__main__':
    main()
