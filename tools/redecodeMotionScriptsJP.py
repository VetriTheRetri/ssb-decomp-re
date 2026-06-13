#!/usr/bin/env python3
"""Re-decode garbage ftMotionCommand renderings in relocData script arrays.

Table-driven: word layouts are derived from the ftMotionCommand* macros in
src/ft/ftdef.h, so decode/encode share one source of truth. Every rewritten
array is round-trip verified against the gold bin words before writing.

Handles three source forms:
  (a) one decl whose initializer body is region-guarded
  (b) region guard wrapping whole declarations
  (c) unguarded decl (bytes shared across regions; enum names only used
      when region-stable)
"""
import re, sys, struct, subprocess, collections

ROOT = '/home/jtl3d/ssb-decomp-re'

OPS = """End SyncWait AsyncWait MakeAttackColl MakeAttackCollScaled ClearAttackCollID ClearAttackCollAll
SetAttackCollOffset SetAttackCollDamage SetAttackCollSize SetAttackCollSoundLevel RefreshAttackCollID
SetThrow SetDamageThrown PlayFGM PlayLoopSFXStoreInfo StopLoopSFX PlayVoiceStoreInfo PlayLoopVoiceStoreInfo
PlayFGMStoreInfo PlaySmashVoice SetFlag0 SetFlag1 SetFlag2 SetFlag3 SetAirJumpAdd SetAirJumpMax
SetHitStatusPartAll SetHitStatusPartID SetHitStatusAll ResetDamageCollPartAll SetDamageCollPartID
LoopBegin LoopEnd Subroutine Return Goto PauseScript Effect EffectItemHold SetModelPartID
ResetModelPartAll HideModelPartAll SetTexturePartID SetColAnim ResetColAnim SetParallelScript
SetSlopeContour HideItem MakeRumble StopRumble SetAfterImage""".split()

# ---------------- region-aware enum parsing ----------------

def parse_enum(path, enum_name, region):
    txt = open(f'{ROOT}/{path}').read()
    m = re.search(r'typedef enum ' + enum_name + r'\b.*?\{(.*?)\n\}', txt, re.S)
    body = m.group(1)
    val = 0
    names = {}   # name -> value
    stack = []
    for line in body.splitlines():
        s = line.strip()
        if s.startswith('#if'):
            cond = ('REGION_US' in s) == (region == 'us')
            if '!defined' in s: cond = not cond
            stack.append(cond)
        elif s.startswith('#else'):
            stack[-1] = not stack[-1]
        elif s.startswith('#endif'):
            stack.pop()
        else:
            if stack and not all(stack): continue
            s = re.sub(r'//.*|/\*.*?\*/', '', s).strip()
            mm = re.match(r'(\w+)\s*(?:=\s*([^,]+))?,?$', s)
            if mm and s:
                if mm.group(2):
                    ref = mm.group(2).strip()
                    try: val = int(ref, 0)
                    except ValueError:
                        if ref in names: val = names[ref]
                        else: continue
                names[mm.group(1)] = val
                val += 1
    return names

# ---------------- ELF / gold helpers ----------------

def read_symbols(obj):
    out = {}
    for line in subprocess.run(['readelf','-W','-s',obj], capture_output=True, text=True).stdout.splitlines():
        f = line.split()
        if len(f) >= 8 and f[3] == 'OBJECT':
            out[f[7]] = (int(f[1],16), int(f[2]))
    return out

def read_relocs(obj):
    offs = set(); in_data = False
    for line in subprocess.run(['readelf','-W','-r',obj], capture_output=True, text=True).stdout.splitlines():
        if line.startswith("Relocation section '.rel.data"): in_data = True; continue
        if line.startswith('Relocation section'): in_data = False; continue
        if in_data and 'R_MIPS_32' in line:
            offs.add(int(line.split()[0],16))
    return offs

# ---------------- macro table & word templates ----------------

raw_h = open(f'{ROOT}/src/ft/ftdef.h').read().replace('\\\n', ' ')
MACROS = {}
for m in re.finditer(r'#define (\w+)\(([^)]*)\)[ \t]+(.+)', raw_h):
    MACROS[m.group(1)] = ([p.strip() for p in m.group(2).split(',') if p.strip()],
                          m.group(3).split('//')[0].strip())

EVENT_VAL = {('nFTMotionEvent' + n): i for i, n in enumerate(OPS)}

def split_top(s, sep=','):
    parts, depth, cur = [], 0, ''
    for ch in s:
        if ch == sep and depth == 0:
            parts.append(cur); cur = ''
        else:
            if ch == '(': depth += 1
            elif ch == ')': depth -= 1
            cur += ch
    if cur.strip(): parts.append(cur)
    return [p.strip() for p in parts if p.strip()]

def strip_parens(s):
    s = s.strip()
    while s.startswith('(') and s.endswith(')'):
        d = 0; ok = True
        for k, ch in enumerate(s):
            if ch == '(': d += 1
            elif ch == ')':
                d -= 1
                if d == 0 and k != len(s)-1: ok = False; break
        if ok: s = s[1:-1].strip()
        else: break
    return s

def word_templates(macro):
    """For a public command macro: list of word templates.
    Template = ('fields', const, [(param,start,len),...]) or ('rawparam', param).
    Returns None if macro shape unsupported."""
    params, body = MACROS[macro]
    # expand nested macro calls (S1..S5) textually with param passthrough
    def expand(call):
        call = call.strip()
        m = re.fullmatch(r'(\w+)\((.*)\)', call, re.S)
        if m and m.group(1) in MACROS:
            ps, bd = MACROS[m.group(1)]
            args = split_top(m.group(2))
            if len(args) != len(ps): return None
            e = bd
            for p, a in sorted(zip(ps, args), key=lambda x: -len(x[0])):
                e = re.sub(r'\b'+re.escape(p)+r'\b', a, e)
            outs = []
            for part in split_top(e):
                sub = expand(part)
                if sub is None: return None
                outs.extend(sub)
            return outs
        return [call]
    parts = []
    for top in split_top(body):
        sub = expand(top)
        if sub is None: return None
        parts.extend(sub)
    templates = []
    for word_expr in parts:
        e = strip_parens(word_expr)
        e2 = strip_parens(re.sub(r'^\((uintptr_t|u32|s32)\)', '', e).strip())
        if e2 in params:
            templates.append(('rawparam', e2)); continue
        const = 0; fields = []
        ok = True
        for term in split_top(e, '|'):
            term = strip_parens(term)
            mm = re.fullmatch(r'GC_FIELDSET\((.*)\)', term, re.S)
            if not mm: ok = False; break
            a = split_top(mm.group(1))
            if len(a) != 3 or not a[1].isdigit() or not a[2].isdigit(): ok = False; break
            arg, st, ln = strip_parens(a[0]), int(a[1]), int(a[2])
            if arg in params:
                fields.append((arg, st, ln))
            elif arg in EVENT_VAL:
                const |= (EVENT_VAL[arg] & ((1<<ln)-1)) << st
            else:
                try: const |= (int(arg,0) & ((1<<ln)-1)) << st
                except ValueError: ok = False; break
        if not ok: return None
        templates.append(('fields', const, fields))
    return templates

# build decode table: opcode -> list of (macro_name, templates), longest first
DECODE = collections.defaultdict(list)
S1FALLBACK = collections.defaultdict(list)   # opcode -> [(macro_name, single fields-template)]
for name in MACROS:
    if not re.fullmatch(r'ftMotion(Command\w+|Play\w+)', name): continue
    t = word_templates(name)
    if not t or t[0][0] != 'fields': continue
    const = t[0][1]
    opc = const >> 26
    if re.search(r'S1$', name) and len(t) == 1 and opc != 0:
        S1FALLBACK[opc].append((name, t))
        continue
    if re.search(r'S[1-9]$', name): continue          # other S-piece macros: not entry points
    DECODE[opc].append((name, t))
for opc in DECODE:
    DECODE[opc].sort(key=lambda x: -len(x[1]))

SIGNED_PARAMS = {'ox','oy','oz','rx','ry','rz','sd'}
MASKY_PARAMS = {'mid','ds','hs','jid','isw'}

# ---------------- region enum environments ----------------

ENV = {}      # region -> {name: value}
FGM_BYVAL = {}  # region -> {value: name}
EFK_BYVAL = {}

for region in ('us','jp'):
    fgm = parse_enum('src/gm/gmsound.h','gmFGMVoiceID',region)
    efk = parse_enum('src/ef/efdef.h','efKind',region)
    col = parse_enum('src/gm/gmdef.h','GMColAnimKind',region)
    env = dict(EVENT_VAL); env.update(fgm); env.update(efk); env.update(col)
    ENV[region] = env
    FGM_BYVAL[region] = {}
    for k,v in fgm.items(): FGM_BYVAL[region].setdefault(v,k)
    EFK_BYVAL[region] = {}
    for k,v in efk.items(): EFK_BYVAL[region].setdefault(v,k)

# ---------------- encode (element -> words) ----------------

def eval_expr(e, env):
    while 'GC_FIELDSET' in e:
        i = e.find('GC_FIELDSET(')
        j = i+len('GC_FIELDSET('); d=1; k=j
        while k < len(e) and d:
            if e[k]=='(': d+=1
            elif e[k]==')': d-=1
            k+=1
        p = split_top(e[j:k-1])
        if len(p)!=3: return None
        e = e[:i]+f'((({p[0]}) & ((1<<({p[2]}))-1)) << ({p[1]}))'+e[k:]
    e = re.sub(r'\((u|s)(8|16|32)\)|\(uintptr_t\)','',e)
    ids = set(re.findall(r'\b[A-Za-z_]\w*\b', e)) - {'x'}
    envd = {}
    for i in ids:
        if re.fullmatch(r'0[xX][0-9a-fA-F]+|\d+', i): continue
        if i in env: envd[i] = env[i]
        else: return None
    try:
        return eval(e, {'__builtins__':{}}, envd) & 0xFFFFFFFF
    except Exception:
        return None

def expand_element(el, env, depth=0):
    """-> list of int words / 'PTR' markers, or None."""
    el = el.strip().rstrip(',').strip()
    if depth > 8 or not el: return []
    if re.fullmatch(r'-?(0x[0-9A-Fa-f]+|\d+)', el):
        return [int(el,0) & 0xFFFFFFFF]
    m = re.fullmatch(r'(\w+)\((.*)\)', el, re.S)
    if m and m.group(1) in MACROS:
        params, body = MACROS[m.group(1)]
        args = split_top(m.group(2))
        if len(args) != len(params): return None
        expr = body
        for p,a in sorted(zip(params,args), key=lambda x:-len(x[0])):
            rep = a if re.fullmatch(r'-?\w+', a) else '('+a+')'
            expr = re.sub(r'\b'+re.escape(p)+r'\b', rep.replace('\\','\\\\'), expr)
        words = []
        for part in split_top(expr):
            mm = re.fullmatch(r'(\w+)\((.*)\)', part.strip(), re.S)
            if mm and mm.group(1) in MACROS:
                w = expand_element(part, env, depth+1)
                if w is None: return None
                words.extend(w)
            else:
                v = eval_expr(part, env)
                words.append('PTR' if v is None else v)
        return words
    v = eval_expr(el, env)
    return ['PTR'] if v is None else [v]

# ---------------- decode (words -> elements) ----------------

def render_val(param, v, st, ln, enumkind, region_stable_only):
    if param in ('eid',):
        name = lookup_enum(EFK_BYVAL, v, region_stable_only, enumkind)
        if name: return name
    if param in ('fgm_id','sfx_id','voice_id') or (enumkind == 'fgm'):
        name = lookup_enum(FGM_BYVAL, v, region_stable_only, 'fgm')
        if name: return name
    if v == (1<<ln)-1 and param in MASKY_PARAMS:
        return '-1'
    if ln == 16 and param in SIGNED_PARAMS and v >= 0x8000:
        return str(v - 0x10000)
    if ln == 8 and param in SIGNED_PARAMS and v >= 0x80:
        return str(v - 0x100)
    return str(v)

def lookup_enum(byval, v, region_stable_only, kind):
    jp = byval['jp'].get(v); us = byval['us'].get(v)
    if region_stable_only:
        return jp if jp and jp == us else None
    return jp   # JP-branch rendering

def decode(words, ptr_exprs, region_stable_only):
    out = []
    i = 0; n = len(words)
    while i < n:
        v = words[i]
        if v == 'PTR':
            out.append(f'{ptr_exprs[i]},'); i += 1; continue
        opc = v >> 26
        matched = False
        for name, templates in DECODE.get(opc, []):
            nw = len(templates)
            if i + nw > n: continue
            argvals = {}
            ok = True
            for k, t in enumerate(templates):
                wv = words[i+k]
                if t[0] == 'rawparam':
                    if wv == 'PTR':
                        argvals[t[1]] = ptr_exprs[i+k]
                    else:
                        argvals[t[1]] = f'0x{wv:08X}' if wv > 9 else str(wv)
                    continue
                if wv == 'PTR': ok = False; break
                _, const, fields = t
                fmask = 0
                for p, st, ln in fields:
                    fmask |= ((1<<ln)-1) << st
                if (wv & ~fmask) != const: ok = False; break
                for p, st, ln in fields:
                    fv = (wv >> st) & ((1<<ln)-1)
                    if p in argvals:                      # same param in two fields
                        if argvals[p] != fv: ok = False
                    argvals[p] = fv
                if not ok: break
            if not ok: continue
            params = MACROS[name][0]
            # render args in declared order
            enumkind = 'fgm' if ('Play' in name or 'SFX' in name or 'Voice' in name) else None
            rend = []
            for p in params:
                av = argvals.get(p)
                if av is None: ok = False; break
                if isinstance(av, str):
                    rend.append(av)
                else:
                    st_ln = next(((st,ln) for t in templates if t[0]=='fields'
                                  for q,st,ln in t[2] if q == p), (0,26))
                    rend.append(render_val(p, av, st_ln[0], st_ln[1], enumkind, region_stable_only))
            if not ok: continue
            el = f'{name}({", ".join(rend)}),'
            # verify re-encode (cheap guard against renderer bugs); PTR words skipped
            chk = expand_element(el, ENV['jp'])
            if chk is None or len(chk) != nw: continue
            good = all(chk[k] == 'PTR' or chk[k] == words[i+k] or words[i+k] == 'PTR'
                       for k in range(nw))
            if not good: continue
            out.append(el)
            i += nw
            matched = True
            break
        if not matched:
            # lone composite-head word (command straddles a block boundary):
            # render with the S1-piece macro, matching the curated convention
            for name, templates in S1FALLBACK.get(opc, []):
                _, const, fields = templates[0]
                fmask = 0
                for p, st, ln in fields: fmask |= ((1<<ln)-1) << st
                if (v & ~fmask) != const: continue
                params = MACROS[name][0]
                argv = {p: (v >> st) & ((1<<ln)-1) for p, st, ln in fields}
                if set(params) - set(argv): continue
                rend = [render_val(p, argv[p],
                                   *next((st,ln) for q,st,ln in fields if q==p),
                                   None, region_stable_only) for p in params]
                el = f'{name}({", ".join(rend)}),'
                chk = expand_element(el, ENV['jp'])
                if chk == [v]:
                    out.append(el + ' /* command continues in the next block */')
                    matched = True
                    i += 1
                    break
        if not matched:
            # annotate raw words that are likely embedded float params
            import struct as _s
            f = _s.unpack('>f', _s.pack('>I', v))[0]
            note = ''
            if v and (0x38000000 <= (v & 0x7F800000) <= 0x4C000000) and abs(f) >= 0.001:
                note = f' /* {f:g}f */'
            out.append(f'0x{v:08X},{note}')
            i += 1
    return out

# ---------------- source parsing & rewriting ----------------

def parse_init_elements(body):
    clean = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    clean = re.sub(r'//[^\n]*', '', clean)
    return split_top(clean.replace('\n', ' '))

def decode_array(name, syms, relocs, gold, body, region_stable_only, env):
    """Returns decoded element list or (None, reason)."""
    if name not in syms: return None, 'nosym'
    off, size = syms[name]
    nwords = size // 4
    if nwords == 0 or size % 4: return None, 'oddsize'
    gold_words = list(struct.unpack(f'>{nwords}I', gold[off:off+size]))
    ptr_idx = sorted((r - off)//4 for r in relocs if off <= r < off+size)
    els = parse_init_elements(body)
    words = []; ptr_exprs = {}
    for el in els:
        ws = expand_element(el, env)
        if ws is None: return None, f'unparsed:{el[:40]}'
        if ws.count('PTR') == 1 and len(ws) > 1:
            # pointer inside composite: recover arg text
            mm = re.fullmatch(r'(\w+)\((.*)\)', el.strip().rstrip(','), re.S)
            ptr_arg = None
            if mm:
                for a in split_top(mm.group(2)):
                    if expand_element(a, env) == ['PTR']: ptr_arg = a
            if ptr_arg is None: return None, 'ptrcomplex'
            for wv in ws:
                if wv == 'PTR': ptr_exprs[len(words)] = ptr_arg
                words.append(wv)
        else:
            for wv in ws:
                if wv == 'PTR': ptr_exprs[len(words)] = el.strip().rstrip(',')
                words.append(wv)
    if len(words) != nwords: return None, f'len {len(words)} != {nwords}'
    mism = [k for k in range(nwords) if words[k] != 'PTR' and words[k] != gold_words[k]]
    if mism: return None, f'goldmismatch@{mism[:3]}'
    if sorted(ptr_exprs) != ptr_idx: return None, f'ptrslots {sorted(ptr_exprs)}!={ptr_idx}'
    stream = ['PTR' if k in ptr_exprs else gold_words[k] for k in range(nwords)]
    dec = decode(stream, ptr_exprs, region_stable_only)
    # full round-trip
    rt = []
    for el in dec:
        ws = expand_element(re.sub(r'/\*.*?\*/', '', el).strip(), env)
        if ws is None: return None, f'rt-unparsed:{el[:40]}'
        rt.extend(ws)
    if len(rt) != nwords: return None, 'rt-len'
    for k in range(nwords):
        if rt[k] == 'PTR':
            if k not in ptr_exprs: return None, f'rt-ptr@{k}'
        elif rt[k] != gold_words[k]:
            return None, f'rt-word@{k}: 0x{rt[k]:08X}!=0x{gold_words[k]:08X}'
    return dec, None

DECL_RE = re.compile(r'^(static )?(u32|s32|ftMotionCommand) (\w+)\[[^\]]*\]\s*=\s*\{\s*$')

def process(src_name, usfid, jpfid, write=False):
    src_path = f'{ROOT}/src/relocData/{src_name}'
    jp_obj  = f'{ROOT}/build/jp/src/relocData/.build/{jpfid}.o'
    us_obj  = f'{ROOT}/build/us/src/relocData/.build/{usfid}.o'
    jp_gold = open(f'{ROOT}/assets/jp/relocData/{jpfid}.vpk0.bin','rb').read()
    us_gold = open(f'{ROOT}/assets/us/relocData/{usfid}.vpk0.bin','rb').read()
    jp_syms, jp_rel = read_symbols(jp_obj), read_relocs(jp_obj)
    us_syms, us_rel = read_symbols(us_obj), read_relocs(us_obj)

    lines = open(src_path).read().splitlines(keepends=True)
    stats = collections.Counter()
    edits = []

    def find_close(start):
        depth = 0
        for k in range(start, len(lines)):
            t = lines[k]
            depth += t.count('{') - t.count('}')
            if depth <= 0 and '}' in t:
                return k
        return None

    i = 0
    while i < len(lines):
        stripped = lines[i].strip()
        m = DECL_RE.match(stripped)
        guard_jp_side = None

        # form (b): guard wrapping whole decls — detect "#if defined(REGION_JP)" followed by decl
        if stripped == '#if defined(REGION_JP)' and i+1 < len(lines) and DECL_RE.match(lines[i+1].strip()):
            # walk JP side decls until #else
            j = i + 1
            while j < len(lines) and lines[j].strip() not in ('#else', '#endif'):
                dm = DECL_RE.match(lines[j].strip())
                if dm:
                    close = find_close(j)
                    name = dm.group(3)
                    raw_body = lines[j+1:close]
                    if any(l.strip().startswith('#') for l in raw_body):
                        # redundant nested region guard inside a JP-only decl:
                        # resolve it for JP (the #else side is dead code)
                        resolved = []
                        stk = []
                        for l in raw_body:
                            t = l.strip()
                            if t == '#if defined(REGION_JP)': stk.append(True)
                            elif t == '#else': stk[-1] = not stk[-1]
                            elif t == '#endif': stk.pop()
                            elif not stk or all(stk): resolved.append(l)
                        raw_body = resolved
                    body = ''.join(raw_body)
                    if 'ftMotion' in body or re.search(r'0x[0-9A-Fa-f]{7,8}', body):
                        dec, err = decode_array(name, jp_syms, jp_rel, jp_gold, body, False, ENV['jp'])
                        if err:
                            stats['skip'] += 1
                            print(f'  SKIP(b) {name}: {err}')
                        else:
                            old = [l.strip().rstrip(',') for l in lines[j+1:close] if l.strip()]
                            def _n(x):
                                x = re.sub(r'/\*.*?\*/', '', x)
                                return re.sub(r'\s+', '', x).rstrip(',')
                            if [_n(x) for x in old if not x.startswith('//') and _n(x)] != \
                               [_n(x) for x in dec if _n(x)]:
                                edits.append((j+1, close, ['\t'+e+'\n' for e in dec]))
                                stats['redecoded'] += 1
                                print(f'  redecode(b) {name}')
                            else:
                                stats['unchanged'] += 1
                    j = close + 1
                else:
                    j += 1
            # skip the #else side entirely (US decls — leave verbatim)
            depth = 1
            while j < len(lines) and depth:
                t = lines[j].strip()
                if t.startswith('#if'): depth += 1
                elif t.startswith('#endif'): depth -= 1
                j += 1
            i = j
            continue

        if m:
            name = m.group(3)
            close = find_close(i)
            if close is None: i += 1; continue
            inner = lines[i+1:close]
            inner_txt = ''.join(inner)
            if 'ftMotion' not in inner_txt and not re.search(r'0x[0-9A-Fa-f]{7,8}', inner_txt):
                i = close + 1; continue

            if '#if defined(REGION_JP)' in inner_txt:
                # form (a): guard(s) anywhere inside the initializer
                def preproc(ls, region):
                    out = []; stack = []
                    for l in ls:
                        t = l.strip()
                        if t == '#if defined(REGION_JP)': stack.append(region == 'jp')
                        elif t == '#else': stack[-1] = not stack[-1]
                        elif t == '#endif': stack.pop()
                        elif t.startswith('#'): return None
                        elif not stack or all(stack): out.append(l)
                    return out
                jp_l, us_l = preproc(inner, 'jp'), preproc(inner, 'us')
                if jp_l is None or us_l is None:
                    i = close + 1; continue
                dec, err = decode_array(name, jp_syms, jp_rel, jp_gold, ''.join(jp_l), False, ENV['jp'])
                if err:
                    stats['skip'] += 1
                    print(f'  SKIP(a) {name}: {err}')
                    i = close + 1; continue

                def normtext(s):
                    s = re.sub(r'/\*.*?\*/', '', s, flags=re.S)
                    s = re.sub(r'//.*', '', s)
                    s = re.sub(r'^\s*(/\*[^\n]*|\*[^\n]*)$', '', s, flags=re.M)  # comment fragments
                    return re.sub(r'\s+', '', s).replace('(u32)','').replace('(s32)','').rstrip(',')
                # group US lines: comment/empty lines attach to next element line
                us_groups = []   # (norm, [orig lines])
                pend = []
                for l in us_l:
                    if normtext(l):
                        us_groups.append((normtext(l), pend + [l])); pend = []
                    else:
                        pend.append(l)
                tail_us = pend
                jp_norm = [normtext(e) for e in dec]
                us_norm = [g[0] for g in us_groups]
                import difflib
                sm = difflib.SequenceMatcher(a=jp_norm, b=us_norm, autojunk=False)
                repl = []
                nguards = 0
                for tag, a1, a2, b1, b2 in sm.get_opcodes():
                    if tag == 'equal':
                        for _, orig in us_groups[b1:b2]: repl.extend(orig)
                    elif a1 == a2:          # US-only insertion
                        nguards += 1
                        repl.append('#if defined(REGION_US)\n')
                        for _, orig in us_groups[b1:b2]: repl.extend(orig)
                        repl.append('#endif\n')
                    elif b1 == b2:          # JP-only insertion
                        nguards += 1
                        repl.append('#if defined(REGION_JP)\n')
                        repl.extend('\t'+e+'\n' for e in dec[a1:a2])
                        repl.append('#endif\n')
                    else:
                        nguards += 1
                        repl.append('#if defined(REGION_JP)\n')
                        repl.extend('\t'+e+'\n' for e in dec[a1:a2])
                        repl.append('#else\n')
                        for _, orig in us_groups[b1:b2]: repl.extend(orig)
                        repl.append('#endif\n')
                repl.extend(tail_us)
                if normtext(''.join(repl)) == normtext(''.join(inner)):
                    stats['unchanged'] += 1
                else:
                    edits.append((i+1, close, repl))
                    if nguards == 0:
                        stats['unguarded'] += 1
                        print(f'  UNGUARD(a) {name}')
                    else:
                        stats['redecoded'] += 1
                        print(f'  redecode(a) {name} ({nguards} guard runs)')
                i = close + 1
                continue

            if '#' not in inner_txt:
                # form (c): unguarded array — only touch if it has raw words at top level
                els = parse_init_elements(inner_txt)
                if not any(re.fullmatch(r'-?0x[0-9A-Fa-f]{7,8}', e) for e in els):
                    i = close + 1; continue
                if name not in us_syms or name not in jp_syms:
                    i = close + 1; continue
                dec_jp, err1 = decode_array(name, jp_syms, jp_rel, jp_gold, inner_txt, True, ENV['jp'])
                dec_us, err2 = decode_array(name, us_syms, us_rel, us_gold, inner_txt, True, ENV['us'])
                if err1 or err2:
                    stats['skip'] += 1
                    print(f'  SKIP(c) {name}: jp={err1} us={err2}')
                elif dec_jp == dec_us:
                    old = [re.sub(r'\s+','',re.sub(r'/\*.*?\*/','',l)).rstrip(',') for l in inner if l.strip()]
                    if old != [re.sub(r'\s+','',e).rstrip(',') for e in dec_jp]:
                        edits.append((i+1, close, ['\t'+e+'\n' for e in dec_jp]))
                        stats['redecoded-shared'] += 1
                        print(f'  redecode(c) {name}')
                    else:
                        stats['unchanged'] += 1
                else:
                    stats['skip'] += 1
                    print(f'  SKIP(c) {name}: region-divergent decode of shared bytes?!')
                i = close + 1
                continue
        i += 1

    if write and edits:
        for s, e, repl in sorted(edits, key=lambda x: -x[0]):
            lines[s:e] = repl
        open(src_path,'w').write(''.join(lines))
    print(f'{src_name}: {dict(stats)}{" (WRITTEN)" if write and edits else " (dry)"}')

if __name__ == '__main__':
    write = '--write' in sys.argv
    for src, usfid, jpfid in [('224_LinkMainMotion.c',224,199),
                              ('228_KirbyMainMotion.c',228,203),
                              ('238_NessMainMotion.c',238,213)]:
        print('==', src)
        process(src, usfid, jpfid, write)
