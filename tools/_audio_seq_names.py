"""Shared helper for tools/extractMusicSequences.py and tools/decode_sbk.py.

Per-bank enum source: where to find the human-readable sequence names so
extracted/included files can be named after the BGM they hold instead of
just `seq_NN`. Both scripts have to agree on the naming or `#include` paths
won't resolve.
"""
import re

# Per-bank: (header_path, enum_name, prefix_to_strip)
SEQ_ENUMS = {
    "S1_music": ("src/gm/gmsound.h", "gmMusicID", "nSYAudioBGM"),
}


def parse_enum(header_path: str, enum_name: str) -> list:
    """Parse `typedef enum <name> { ... } <name>;` and return the
    identifiers in order. Trailing sentinel-style entries (anything whose
    short name is "End" after prefix-stripping) are NOT filtered here --
    callers do that against their bank's seqCount."""
    with open(header_path) as f:
        text = f.read()
    m = re.search(rf"typedef\s+enum\s+{enum_name}\s*\{{(.*?)\}}\s*{enum_name}\s*;",
                  text, re.DOTALL)
    if not m:
        raise SystemExit(
            f"could not find `typedef enum {enum_name}` in {header_path}")
    body = m.group(1)
    out = []
    for line in body.splitlines():
        line = re.sub(r"//.*$", "", line)
        line = re.sub(r"/\*.*?\*/", "", line)
        m = re.match(r"\s*([A-Za-z_][A-Za-z_0-9]*)\s*[,]?", line)
        if m:
            out.append(m.group(1))
    return out


def short(name: str, prefix: str) -> str:
    return name[len(prefix):] if name.startswith(prefix) else name


def suffixes_for_bank(bank: str, n_sequences: int) -> list:
    """Return a list of n length, each entry either '' or '_<ShortName>'.

    Drops trailing 'End' sentinels from the enum, then aligns to the
    requested sequence count. If the enum has fewer entries than the bank
    has sequences, the tail comes back blank."""
    if bank not in SEQ_ENUMS:
        return [""] * n_sequences
    header_path, enum_name, prefix = SEQ_ENUMS[bank]
    names = parse_enum(header_path, enum_name)
    names = [x for x in names
             if not (x.startswith(prefix)
                     and x[len(prefix):].lower() == "end")]
    out = [""] * n_sequences
    for i in range(min(n_sequences, len(names))):
        out[i] = "_" + short(names[i], prefix)
    return out
