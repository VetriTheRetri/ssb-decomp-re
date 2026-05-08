#!/usr/bin/python3
"""Generate Make rules declaring cross-file extern dependencies.

For every shared `<usfid>_<Name>.reloc` (and version-specific
`<usfid>_<Name>.<v>.reloc`) under src/relocData/, scan for
`# -> file <usfid> (TargetName)` annotations on `extern` lines and
emit an order-only dependency from the source's vpk0.bin to the
target's `.o`, so fixRelocChain.py can resolve cross-file symbols.

Both ends are looked up *by name* in tools/relocFileDescriptions.<version>.txt
so JP/US fid divergence is handled correctly: the annotation's numeric
fid (US-numbered) is informational only — the parenthesized name is what
actually identifies the target file across versions.

Usage: genRelocExternDepsMk.py <version> [output]
"""
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, 'src', 'relocData')
EXTERN_RE = re.compile(r'#\s*->\s*file\s+\d+\s*\(([^)]+)\)')
NAME_RE = re.compile(r'^(\d+)_(.+)\.reloc$')


def load_name_to_fid(version):
    desc_path = os.path.join(PROJECT_DIR, 'tools', f'relocFileDescriptions.{version}.txt')
    name_to_fid = {}
    with open(desc_path) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)', line)
            if m:
                fid = int(m.group(1))
                name = m.group(2)
                if re.match(r'^_\d+_$', name):
                    continue
                name_to_fid[name] = fid
    return name_to_fid


def main():
    if len(sys.argv) < 2:
        print('Usage: genRelocExternDepsMk.py <version> [output]', file=sys.stderr)
        sys.exit(1)
    version = sys.argv[1]
    out = sys.stdout if len(sys.argv) < 3 else open(sys.argv[2], 'w')

    name_to_fid = load_name_to_fid(version)

    # source_fid -> set(target_fid) (both fids in active-version numbering)
    deps = {}
    for fname in sorted(os.listdir(RELOC_DIR)):
        if not fname.endswith('.reloc'):
            continue
        base = fname[:-len('.reloc')]
        # Skip the other version's overrides (`<n>_<Name>.us.reloc` /
        # `.jp.reloc`).
        if base.endswith('.us') and version != 'us':
            continue
        if base.endswith('.jp') and version != 'jp':
            continue
        if base.endswith('.us'):
            base = base[:-3]
        if base.endswith('.jp'):
            base = base[:-3]
        m = NAME_RE.match(base + '.reloc')
        if not m:
            continue
        source_name = m.group(2)
        if source_name not in name_to_fid:
            # Source file isn't present in this version (e.g. a version-
            # specific anim file or a renamed entry). Skip.
            continue
        source_fid = name_to_fid[source_name]

        path = os.path.join(RELOC_DIR, fname)
        with open(path) as f:
            for line in f:
                em = EXTERN_RE.search(line)
                if em:
                    target_name = em.group(1).strip()
                    if target_name not in name_to_fid:
                        continue
                    target_fid = name_to_fid[target_name]
                    if target_fid != source_fid:
                        deps.setdefault(source_fid, set()).add(target_fid)

    for fid in sorted(deps):
        targets = ' '.join(f'$(BUILD_DIR)/src/relocData/.build/{t}.o'
                           for t in sorted(deps[fid]))
        out.write(f'$(BUILD_DIR)/assets/$(VERSION)/relocData/{fid}.vpk0.bin: | {targets}\n')
        out.write(f'$(BUILD_DIR)/assets/$(VERSION)/relocData/{fid}.bin: | {targets}\n')

    if out is not sys.stdout:
        out.close()


if __name__ == '__main__':
    main()
