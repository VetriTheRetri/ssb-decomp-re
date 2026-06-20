#!/usr/bin/python3
"""Merge a SHARED Kirby motion block: the JP side is split into a head block
(in its own `#if defined(REGION_JP) ... #endif`) plus anonymous continuation
blocks (`0xNNNN`) that live at the START of the next guard's JP section, whose
`#else` holds the clean US block. For a block that is byte-identical between
versions modulo region-aware sound enums, collapse all of that to ONE shared
block (= the clean US body), dropping the JP head + the anon continuations and
keeping the NEXT block's head in its own `#if JP ... #endif`.

Deterministic + verified by the RELOC_DATA=1 byte-compare gate. One block per
invocation arg; re-reads the file each time so indices never go stale.

    mergeKirbyShared.py NAME [NAME ...]
"""
import re, sys, os

SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                   "src", "relocData", "228_KirbyMainMotion.c")
DECL = re.compile(r'^\s*(u32|ftMotionCommand|s32|f32)\s+(dKirbyMainMotion_\w+)\[\]\s*=\s*\{$')


def tokenize(lines):
    """-> list of tokens: ('pp', line) | ('blk', name, [lines]) | ('raw', line)."""
    toks = []
    i = 0
    while i < len(lines):
        s = lines[i].strip()
        m = DECL.match(s)
        if s.startswith('#if') or s == '#else' or s.startswith('#endif'):
            toks.append(['pp', lines[i]])
            i += 1
        elif m:
            j = i
            while j < len(lines) and lines[j].strip() != '};':
                j += 1
            toks.append(['blk', m.group(2), lines[i:j + 1]])
            i = j + 1
        else:
            toks.append(['raw', lines[i]])
            i += 1
    return toks


def regions(toks):
    """Annotate each token with its region: 'jp' | 'us' | None (shared)."""
    stack = []
    out = []
    for t in toks:
        if t[0] == 'pp':
            s = t[1].strip()
            if s.startswith('#if defined(REGION_JP)'):
                stack.append('jp')
            elif s.startswith('#if defined(REGION_US)'):
                stack.append('us')
            elif s.startswith('#if'):
                stack.append('x')
            elif s == '#else' and stack:
                stack[-1] = {'jp': 'us', 'us': 'jp', 'x': 'x'}[stack[-1]]
            elif s.startswith('#endif') and stack:
                stack.pop()
            out.append((t, None))
        else:
            out.append((t, stack[-1] if stack else None))
    return out


def is_anon(name):
    return name.split("Motion_")[-1].startswith("0x")


def cleanup_empty_guards(txt):
    """Remove `#if defined(REGION_XX)` ... `#endif` regions that contain no
    decl/content (only blanks), and collapse 3+ blank lines."""
    for _ in range(4):
        # empty `#if ...\n#endif`
        txt = re.sub(r"#if defined\(REGION_(?:US|JP)\)\n(?:\s*\n)*#endif\n", "", txt)
        txt = re.sub(r"\n\n\n+", "\n\n", txt)
    return txt


def merge_one(name):
    lines = open(SRC).read().split("\n")
    toks = tokenize(lines)
    ann = regions(toks)
    head_i = clean_i = None
    for idx, (t, reg) in enumerate(ann):
        if t[0] == 'blk' and t[1] == name:
            if reg == 'jp':
                head_i = idx
            elif reg == 'us':
                clean_i = idx
    if clean_i is None:
        print("  SKIP %s: no US-clean instance" % name)
        return False
    clean_block = toks[clean_i][2]

    def find_pp(rng, pred):
        for k in rng:
            if toks[k][0] == 'pp' and pred(toks[k][1].strip()):
                return k
        return None
    g_else = find_pp(range(clean_i - 1, -1, -1), lambda s: s == '#else')
    g_if = find_pp(range(g_else - 1, -1, -1), lambda s: s.startswith('#if'))
    g_end = find_pp(range(clean_i + 1, len(toks)), lambda s: s.startswith('#endif'))
    # JP section of G = toks[g_if+1 .. g_else-1]. Keep NAMED blocks AND any
    # anon block that is referenced elsewhere (a SetParallelScript/SetThrow/
    # Subroutine/Goto target = a real JP-only block, version-specific, paired
    # with a US block — keep it in the JP guard). Drop only the true
    # (unreferenced) continuations of THIS block.
    whole = open(SRC).read()
    def referenced(an):
        uses = len(re.findall(re.escape(an) + r'\b', whole))
        decls = len(re.findall(re.escape(an) + r'\[\]\s*=', whole))
        return uses > decls
    # Exclude `name` itself: when the JP head shares G with the US clean
    # (`#if JP {head, conts} #else {clean}`), the head must NOT be re-emitted
    # (the shared block replaces it) or it duplicates.
    jp_named = [toks[k] for k in range(g_if + 1, g_else)
                if toks[k][0] == 'blk' and toks[k][1] != name
                and (not is_anon(toks[k][1]) or referenced(toks[k][1]))]

    repl = list(clean_block)       # shared block (unguarded)
    if jp_named:
        repl += ["", "#if defined(REGION_JP)"]
        for b in jp_named:
            repl += b[2] + [""]
        if repl[-1] == "":
            repl.pop()
        repl.append("#endif")

    out = []
    k = 0
    while k < len(toks):
        if k == g_if:
            out += repl
            k = g_end + 1
            continue
        if k == head_i:            # drop the JP head wherever it lives
            k += 1
            continue
        t = toks[k]
        out += (t[2] if t[0] == 'blk' else [t[1]])
        k += 1
    txt = cleanup_empty_guards("\n".join(out))
    open(SRC, "w").write(txt)
    print("  merged %s (shared)%s" % (name, " +JP head %s" % jp_named[0][1] if jp_named else ""))
    return True


if __name__ == "__main__":
    for nm in sys.argv[1:]:
        full = nm if nm.startswith("dKirbyMainMotion_") else "dKirbyMainMotion_" + nm
        merge_one(full)
