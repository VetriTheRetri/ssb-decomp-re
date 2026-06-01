#!/usr/bin/python3
"""Step 3: migrate NULL/0 shadow slots in hand-written struct bodies to
typed extern pointer expressions, driven by the .reloc's shadow entries.

Walks each parent struct's top-level initializer list, tracking field slots
where each plain `NULL,` is 1 slot and each `{ NULL, NULL, ..., NULL },` block
of all-NULL elements is N slots. For each shadow group of N entries, finds a
contiguous subsequence of entries whose summed slot count equals N and where
every slot is NULL/0. Substitutes typed extern expressions in order.

Usage:
    tools/migrateStructShadows.py <fid> [--version us|jp] [--dry]
    tools/migrateStructShadows.py --all [--version us|jp] [--dry]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _nm(o):
    r = subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True)
    out = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'):
            try: out[p[2]] = int(p[0], 16)
            except ValueError: pass
    return out


def _readelf_offsets(o):
    r = subprocess.run(['mips-linux-gnu-readelf', '-r', '-W', o],
                       capture_output=True, text=True)
    out = set()
    in_data = False
    for ln in r.stdout.splitlines():
        if ln.startswith('Relocation section'):
            in_data = '.rel.data' in ln or '.rela.data' in ln
            continue
        if not in_data:
            continue
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+R_MIPS_32', ln)
        if m: out.add(int(m.group(1), 16))
    return out


def _find_master_c(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    return None


def _find_reloc(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if (f.startswith(f'{fid}_') and f.endswith('.reloc')
                and '.jp.reloc' not in f and '.us.reloc' not in f):
            return os.path.join(src, f)
    return None


def _type_hint(sym):
    """Best-effort declared-array type for the extern (one * less than the cast
    used in the struct slot, which is `void *` everywhere)."""
    if '_Vtx' in sym: return 'Vtx'
    if '_DL' in sym or '_Gfx' in sym: return 'Gfx'
    if '_palette' in sym or '_LUT' in sym: return 'u16'
    if '_Tex' in sym: return 'u8'
    if '_DObjDesc' in sym: return 'DObjDesc'
    if '_MObjSub' in sym: return 'MObjSub'
    if '_AnimJoint' in sym: return 'AnimJoint'
    if 'AObjEvent32' in sym: return 'AObjEvent32 *'
    return 'u8'  # safe default for opaque externs


def _make_expr(target_label, addend, _hint):
    """Build a slot expression. We don't know each struct field's exact type,
    so use a generic `(void *)` cast that IDO accepts in any pointer slot.

    The address-of `&target_label` form works for both single-struct symbols
    and array symbols; the array-name form would only work for arrays.
    """
    if addend == 0:
        return f'(void *)&{target_label}'
    return f'(void *)((u8 *)&{target_label} + 0x{addend:X})'


def _find_decl_body(text, name):
    """Find body `{ ... }` of `<type> <name> = { ... };`. Returns (start, end)
    inside the braces."""
    pat = re.compile(rf'\b{re.escape(name)}\s*=\s*\{{', re.MULTILINE)
    m = pat.search(text)
    if not m: return None
    body_start = m.end()
    depth = 1
    i = body_start
    while i < len(text) and depth:
        c = text[i]
        if c == '{': depth += 1
        elif c == '}': depth -= 1
        i += 1
    if depth != 0: return None
    return (body_start, i - 1)


def _enumerate_top_level_slots(body, base_offset):
    """Walk top-level comma-separated entries in `body`. Return a list of:
        {kind: 'plain' | 'brace_null' | 'other',
         text_start, text_end,           # offsets within body
         null_positions: [(s, e), ...],  # only for 'plain'/'brace_null'
         slot_count: int}

    A 'plain' entry is a single NULL/0 (1 slot).
    A 'brace_null' entry is `{ NULL, NULL, …, NULL }` (N slots, all NULL).
    Any other entry is 'other' (can't substitute into it).
    """
    entries = []
    depth = 0
    cur_start = 0
    for i, c in enumerate(body):
        if c == '{': depth += 1
        elif c == '}': depth -= 1
        elif c == ',' and depth == 0:
            entries.append((cur_start, i))
            cur_start = i + 1
    if body[cur_start:].strip():
        entries.append((cur_start, len(body)))

    out = []
    for s, e in entries:
        # Strip both leading and trailing comments/whitespace to isolate the
        # value text. Leading `/* prev_field */`-style comments attach to the
        # entry that contains them syntactically (after the previous comma).
        txt = body[s:e]
        # Strip leading whitespace+comments
        leading_re = re.compile(r'^\s*(/\*.*?\*/\s*)*', re.DOTALL)
        m_lead = leading_re.match(txt)
        ls_offset = m_lead.end() if m_lead else 0
        # Strip trailing whitespace+comments
        trailing_re = re.compile(r'(\s*/\*.*?\*/)*\s*$', re.DOTALL)
        m_trail = trailing_re.search(txt)
        rs_end = m_trail.start() if m_trail else len(txt)
        val_stripped = txt[ls_offset:rs_end]
        v_pos_abs = s + ls_offset
        if val_stripped in ('NULL', '0', '(void *)0', '(void*)0'):
            v_end = v_pos_abs + len(val_stripped)
            assert body[v_pos_abs:v_end] == val_stripped, \
                f"value match failed: {body[v_pos_abs:v_end]!r} vs {val_stripped!r}"
            out.append({
                'kind': 'plain', 'text_start': s, 'text_end': e,
                'null_positions': [(v_pos_abs, v_end)],
                'slot_count': 1,
            })
            continue
        # Brace-block of all-NULL?
        bm = re.match(r'^\s*\{(.*)\}\s*$', val_stripped, re.DOTALL)
        if bm:
            inner = bm.group(1)
            # Inner starts at the position of `{`+1 inside val_stripped
            inner_offset_in_val = val_stripped.index('{') + 1
            # comma-split inner at depth 0
            sub = []
            d2 = 0
            cs2 = 0
            for k, c in enumerate(inner):
                if c in '{[(': d2 += 1
                elif c in '}])': d2 -= 1
                elif c == ',' and d2 == 0:
                    sub.append((cs2, k))
                    cs2 = k + 1
            if inner[cs2:].strip():
                sub.append((cs2, len(inner)))
            null_positions = []
            all_null = True
            for ss, se in sub:
                seg = inner[ss:se]
                t = seg.strip()
                if t in ('NULL', '0', '(void *)0', '(void*)0'):
                    ls_in_seg = len(seg) - len(seg.lstrip())
                    abs_s = v_pos_abs + inner_offset_in_val + ss + ls_in_seg
                    abs_e = abs_s + len(t)
                    assert body[abs_s:abs_e] == t, \
                        f"brace-null match failed: {body[abs_s:abs_e]!r} vs {t!r}"
                    null_positions.append((abs_s, abs_e))
                else:
                    all_null = False
                    break
            if all_null and null_positions:
                out.append({
                    'kind': 'brace_null', 'text_start': s, 'text_end': e,
                    'null_positions': null_positions,
                    'slot_count': len(null_positions),
                })
                continue
        out.append({
            'kind': 'other', 'text_start': s, 'text_end': e,
            'null_positions': [],
            'slot_count': None,  # unknown size — could be anything
        })
    return out


def _find_match_subsequence(entries, target_slots):
    """Find a consecutive subsequence of entries whose summed slot_count
    equals target_slots, where every entry is 'plain' or 'brace_null'.
    Returns the matching list of entries, or None.
    """
    matches = []
    n = len(entries)
    for i in range(n):
        if entries[i]['kind'] not in ('plain', 'brace_null'):
            continue
        s = 0
        for j in range(i, n):
            e = entries[j]
            if e['kind'] not in ('plain', 'brace_null'):
                break
            s += e['slot_count']
            if s == target_slots:
                matches.append(entries[i:j + 1])
                break
            if s > target_slots:
                break
    if len(matches) == 1:
        return matches[0]
    return None


def migrate_fid(fid, version, dry_run):
    master = _find_master_c(fid)
    rf = _find_reloc(fid)
    if not master or not rf:
        return 0

    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    local_syms = _nm(o)
    o_offs = _readelf_offsets(o)
    if not local_syms:
        return 0

    shadows = []
    with open(rf) as f:
        for ln in f:
            ln = ln.split('#')[0].strip()
            if not ln: continue
            p = ln.split()
            if len(p) != 3: continue
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[1])
            if not m or m.group(1) not in local_syms: continue
            base = m.group(1)
            addend = int(m.group(2), 16) if m.group(2) else 0
            ptr_byte = local_syms[base] + addend
            if ptr_byte in o_offs:
                continue
            tm = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[2])
            if not tm: continue
            shadows.append({
                'ptr_byte': ptr_byte, 'base': base, 'addend': addend,
                'target': tm.group(1),
                'target_addend': int(tm.group(2), 16) if tm.group(2) else 0,
            })

    if not shadows:
        return 0

    with open(master) as f:
        text = f.read()

    # Group consecutive shadows by parent + ascending addend (step 4 bytes)
    shadows.sort(key=lambda s: s['ptr_byte'])
    groups = []
    cur = []
    for s in shadows:
        if not cur or (s['base'] == cur[-1]['base']
                       and s['ptr_byte'] == cur[-1]['ptr_byte'] + 4):
            cur.append(s)
        else:
            groups.append(cur); cur = [s]
    if cur: groups.append(cur)

    replacements = []
    needed_externs = set()
    matched_total = 0
    skipped_groups = 0

    for grp in groups:
        base = grp[0]['base']
        body = _find_decl_body(text, base)
        if not body:
            skipped_groups += 1
            continue
        body_start, body_end = body
        body_text = text[body_start:body_end]
        entries = _enumerate_top_level_slots(body_text, 0)
        # Find a subsequence matching exact slot count
        matched = _find_match_subsequence(entries, len(grp))
        if not matched:
            skipped_groups += 1
            continue
        # Flatten matched slot positions in order
        slots = []
        for ent in matched:
            slots.extend(ent['null_positions'])
        if len(slots) != len(grp):
            skipped_groups += 1
            continue
        for slot_pos, shadow in zip(slots, grp):
            hint = _type_hint(shadow['target'])
            expr = _make_expr(shadow['target'], shadow['target_addend'], hint)
            abs_s = body_start + slot_pos[0]
            abs_e = body_start + slot_pos[1]
            replacements.append((abs_s, abs_e, expr))
            needed_externs.add((shadow['target'], hint))
            matched_total += 1

    if not replacements:
        return 0

    replacements.sort(key=lambda r: r[0], reverse=True)
    new_text = text
    for s, e, new in replacements:
        new_text = new_text[:s] + new + new_text[e:]

    # Add forward externs. Skip symbols already declared OR defined in this
    # same .c (matching extern + actual definition both register here).
    existing_externs = set()
    for m in re.finditer(r'^\s*extern\s+[^;]*?\b(\w+)\s*[\[;]', new_text, re.MULTILINE):
        existing_externs.add(m.group(1))
    own_defs = set()
    for m in re.finditer(r'^[A-Za-z_]\w*\s+(?:\**\s*)?(\w+)\s*(?:\[[^\]]*\])?\s*=',
                         new_text, re.MULTILINE):
        own_defs.add(m.group(1))
    to_add = sorted(
        (sym, hint) for sym, hint in needed_externs
        if sym not in existing_externs and sym not in own_defs)
    if to_add:
        lines = []
        for sym, hint in to_add:
            base = hint.rstrip(' *')
            stars = hint[len(base):].count('*')
            star_str = '*' * stars
            if star_str:
                lines.append(f'extern {base} {star_str}{sym}[];')
            else:
                lines.append(f'extern {base} {sym}[];')
        inc_re = re.search(r'#include\s+"relocdata_types\.h"\s*\n', new_text)
        if inc_re:
            ins = inc_re.end()
            block = '\n/* Step 3 forward decls auto-added by migrateStructShadows.py */\n' + '\n'.join(lines) + '\n'
            new_text = new_text[:ins] + block + new_text[ins:]

    if dry_run:
        print(f'fid={fid}: {matched_total} substitutions in {len(groups)-skipped_groups}/{len(groups)} shadow groups [dry]')
        return matched_total

    with open(master, 'w') as f:
        f.write(new_text)
    print(f'fid={fid}: {matched_total} substitutions in {len(groups)-skipped_groups}/{len(groups)} shadow groups')
    return matched_total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int, nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    if args.all:
        bad_path = os.path.join(PROJECT_DIR, 'assets', args.version, 'auto_reloc_bad.txt')
        with open(bad_path) as f:
            fids = [int(x) for x in f if x.strip()]
        total = 0
        for fid in fids:
            try:
                total += migrate_fid(fid, args.version, args.dry) or 0
            except Exception as e:
                print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'\nTotal: {total} substitutions across {len(fids)} fids')
    else:
        if args.fid is None:
            ap.error('fid required unless --all')
        migrate_fid(args.fid, args.version, args.dry)


if __name__ == '__main__':
    main()
