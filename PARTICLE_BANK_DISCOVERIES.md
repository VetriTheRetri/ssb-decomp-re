# Particle Bank Decomp — Discoveries & Plan

Working notes on the `*.scb` / `*.txb` segments declared starting at line 1870 of
[smashbrothers.us.yaml](smashbrothers.us.yaml#L1870). These are the "Particle banks"
referenced by code in [src/ef/](src/ef/) and consumed via
[efParticleGetLoadBankID](src/ef/efparticle.c#L77) → [lbParticleSetupBankID](src/lb/lbparticle.c#L181).

## 1. What lives in each bank

There are 9 bank pairs, each pair = one `.scb` (scripts) + one `.txb` (textures):

| Bank | .scb size / scripts | `.scb` C source | .txb size / textures | `.txb` C source | Loaded by |
|---|--:|---|--:|---|---|
| `efcommon` | 10912 / 119 | [efcommon_scb.c](src/particles/efcommon_scb.c) | 315040 / 47 | [efcommon_txb.c](src/particles/efcommon_txb.c) | [efDisplayInit](src/ef/efdisplay.c#L100) |
| `particles_unk0` | 992 / 13 | [particles_unk0_scb.c](src/particles/particles_unk0_scb.c) | 1088 / 3 | [particles_unk0_txb.c](src/particles/particles_unk0_txb.c) | per-fighter ([ftmanager.c:289](src/ft/ftmanager.c#L289)) |
| `particles_unk1` | 512 / 4 | [particles_unk1_scb.c](src/particles/particles_unk1_scb.c) | 8288 / 2 | [particles_unk1_txb.c](src/particles/particles_unk1_txb.c) | per-fighter |
| `particles_unk2` | 336 / 4 | [particles_unk2_scb.c](src/particles/particles_unk2_scb.c) | 9296 / 2 | [particles_unk2_txb.c](src/particles/particles_unk2_txb.c) | per-fighter |
| `itcommon` | 320 / 3 | [itcommon_scb.c](src/particles/itcommon_scb.c) | 10336 / 2 | [itcommon_txb.c](src/particles/itcommon_txb.c) | [itManagerInit](src/it/itmanager.c#L150) |
| `grpupupu` | 416 / 5 | [grpupupu_scb.c](src/particles/grpupupu_scb.c) | 4480 / 3 | [grpupupu_txb.c](src/particles/grpupupu_txb.c) | [grpupupu.c:689](src/gr/grcommon/grpupupu.c#L689) |
| `grhyrule` | 800 / 8 | [grhyrule_scb.c](src/particles/grhyrule_scb.c) | 11520 / 3 | [grhyrule_txb.c](src/particles/grhyrule_txb.c) | [grhyrule.c:411](src/gr/grcommon/grhyrule.c#L411) |
| `gryoster` | 128 / 1 | [gryoster_scb.c](src/particles/gryoster_scb.c) | 560 / 1 | [gryoster_txb.c](src/particles/gryoster_txb.c) | [gryoster.c:256](src/gr/grcommon/gryoster.c#L256) |
| `mntitle` | 272 / 3 | [mntitle_scb.c](src/particles/mntitle_scb.c) | 19056 / 2 | [mntitle_txb.c](src/particles/mntitle_txb.c) | [mntitle.c:1469](src/mn/mncommon/mntitle.c#L1469) |

All 9 `.scb` (160 scripts) and 9 `.txb` (66 textures) banks are decompiled.
`make -j$(nproc)` produces a byte-identical ROM (SHA1 matches the baserom).

The link to the rest of the codebase is via splat-emitted symbols
`<bankname>_scb_ROM_START`/`_ROM_END` and `_txb_ROM_START`/`_ROM_END`, aliased in
[symbols/linker_constants.txt](symbols/linker_constants.txt). The runtime DMAs the
ROM range to a freshly-allocated heap buffer, so **the contents are completely
position-independent** — every internal pointer is stored as a *file-relative
offset* and "pointerized" by [lbParticleSetupBankID](src/lb/lbparticle.c#L181)
after DMA.

That is the key fact that makes this tractable: nothing inside a `.scb`/`.txb`
depends on a linker symbol, so a hand-written C file that compiles to the same
bytes Just Works — no `.reloc` companion file like `relocData/` needs.

## 2. `.scb` (script bin) layout

Confirmed by reading the binary against the C structs in [src/lb/lbtypes.h](src/lb/lbtypes.h#L69-L90).

```
file offset 0x000:  s32 scripts_num                (big-endian, e.g. 0x77 = 119 in efcommon)
file offset 0x004:  u32 script_offsets[scripts_num]   // file-relative offsets into the script blob below
file offset varies: LBScript script_0 ... script_{N-1}    // packed back-to-back, 4-byte aligned
```

Each `LBScript` is a 48-byte (0x30) fixed header followed by a variable-length
bytecode trailer:

```c
struct LBScript {
    u16   kind;                  // 0x00 — generator kind (matches nLBParticleKind*)
    u16   texture_id;            // 0x02 — index into the paired .txb
    u16   generator_lifetime;    // 0x04
    u16   particle_lifetime;     // 0x06
    u32   flags;                 // 0x08 — LBPARTICLE_FLAG_* bits
    f32   gravity;               // 0x0C
    f32   friction;              // 0x10
    Vec3f vel;                   // 0x14
    f32   unk_0x20;              // 0x20
    f32   unk_0x24;              // 0x24
    f32   update_rate;           // 0x28
    f32   size;                  // 0x2C
    u8    bytecode[ /* size = next_offset - this_offset - 0x30 */ ];
};
```

The bytecode length is the gap to the next script's offset (or to end-of-file
for the last one). Bytecodes are padded so each next header is 4-byte aligned —
trailing bytes after the `END/DEAD` opcode are pad and ignored at runtime.

### Bytecode encoding

The interpreter is [lbParticleUpdateStruct](src/lb/lbparticle.c#L707) and the
opcode table is in [src/lb/lbdef.h](src/lb/lbdef.h#L27-L72). High bit decides
opcode vs. wait:

- `cmd & 0x80 == 0` — **wait/animate command**:
  - low 5 bits = wait frames (0..31). If bit `0x20` is set, an extra byte
    follows that extends the wait to `((low5 << 8) | byte)`.
  - if `0x40` is set, the byte after the wait is the new `frame_id`.
- `cmd & 0x80 != 0` — **opcode**:
  - opcodes are mostly clustered at 5-bit boundaries (mask `0xF8`), with a
    couple at 4-bit boundaries (`0xC0` SETPRIMBLEND, `0xD0` SETENVBLEND), and
    several individuals (`0xFA..0xFF`).
  - low bits of the command often act as channel selectors (e.g. `SETPOS`
    bits 0/1/2 → write x/y/z big-endian f32; `SETPRIMBLEND` bits 0/1/2/3 → r/g/b/a).
  - `0xFE` (`DEAD`) and `0xFF` (`END`) terminate the script.

Floats in bytecode are big-endian via [lbParticleReadFloatBigEnd](src/lb/lbparticle.c#L584).
"u-shorts" are 1- or 2-byte varints via [lbParticleReadUShort](src/lb/lbparticle.c#L599).

For matching purposes we don't need to *interpret* the bytecode — we just need
to ship the same bytes back. (Future possibility: build a disassembler so the
bytecode appears as readable mnemonics in the C source. Not required.)

## 3. `.txb` (texture bin) layout

```
file offset 0x000:  s32 textures_num
file offset 0x004:  u32 texture_offsets[textures_num]
file offset 0x0C0:  LBTexture tex_0; image_0 bytes; (palette_0 bytes if CI)
                    LBTexture tex_1; image_1 bytes; (palette_1 bytes if CI)
                    ...
```

`LBTexture` from [src/lb/lbtypes.h](src/lb/lbtypes.h#L98-L105):

```c
struct LBTexture {
    u32  count;                  // # frames in animation
    s32  fmt;                    // G_IM_FMT_RGBA(0) / G_IM_FMT_CI(2) / G_IM_FMT_IA(3) / G_IM_FMT_I(4)
    s32  siz;                    // G_IM_SIZ_4b/8b/16b/32b
    s32  width;
    s32  height;
    u32  flags;                  // bit0 = single shared palette (CI only)
    void *data[count + slots];   // image offsets, then palette offsets
};
```

`slots` = number of palette pointer slots:
- non-CI: in practice the file always reserves **1** trailing word as padding
  (verified for both observed efcommon textures, even though the runtime never
  reads it). Treat the `data[]` array as length `count + 1`.
- CI with `flags&1`: one shared palette → `data[]` length `count + 1`.
- CI without `flags&1`: per-frame palettes → `data[]` length `count + count`.

Image and palette bytes follow each `LBTexture` directly (4-byte aligned).
Image size = `width * height * bits_per_pixel / 8`. Palette size = `2 *
palette_entries` where palette_entries is `16` for CI4 and `256` for CI8.

This is also fully position-independent — the offsets in `data[]` are
file-relative and get pointerized at load time.

## 4. Why this is *much* simpler than `relocData`

`relocData` files contain Gfx display lists, Vtx arrays, `DObjDesc` graphs, and
animation joints with cross-file pointer chains that point at linker-resolved
symbols. That's why they need:
- per-file `.reloc` companions,
- the [tools/relocData.py](tools/relocData.py) pipeline,
- `RELOC_DATA=1` C-to-bin compilation,
- 4000+ generated `.inc.c` files.

Particle banks have:
- **no Gfx**, **no Vtx**, **no DObj** — bytecode + textures only
- **no cross-file pointers** — all offsets are file-relative
- **no linker dependencies** — every byte is determined purely by file layout

So we can decompile particle banks without touching the relocData tooling at all.

## 5. Plan (proven on `gryoster.scb`)

The full pipeline now exists end-to-end and produces a byte-identical ROM
(`make` reports `smashbrothers.us.z64: OK` after `make validate`). Each
particle bank pair becomes 1 hand-written C file plus a one-line splat yaml
change. No Makefile changes, no new Python tooling.

### 5a. Splat yaml: one `code` segment per bank, sharing `vram: 0x0`

Each .scb / .txb bank is its own top-level splat segment with a single
`.rodata` subsegment. They share `vram: 0x0` and a single
`exclusive_ram_id: particles` so splat treats them as living in the same
(unused-at-runtime) VRAM region:

```yaml
# Before (originally a `bin` segment):
- name: gryoster.scb
  type: bin
  start: 0xB22980

# After:
- name: gryoster_scb
  type: code
  start: 0xB22980
  vram: 0x0                       # banks are DMA'd; vram is irrelevant
  exclusive_ram_id: particles
  subsegments:
    - [0xB22980, .rodata, particles/gryoster_scb]
```

`vram: 0x0` is fine -- the runtime never executes against this VRAM, the
loader copies each bank into a fresh heap buffer. Sharing one
`exclusive_ram_id` is OK since the segments don't overlap in ROM and are
never co-resident at the (fictitious) VRAM 0x0.

The renamed segment (`gryoster.scb` -> `gryoster_scb`) keeps the
splat-emitted symbol identical (`gryoster_scb_ROM_START` either way), so
[symbols/linker_constants.txt](symbols/linker_constants.txt#L11) needs no
change.

(An earlier attempt combined all 18 banks under one parent segment named
`particles`. That collapsed the yaml to ~22 lines but cost the per-bank
`*_ROM_START` symbols, which splat only emits for top-level segments,
so the linker_constants.txt aliases would have needed a parallel
`symbols/particles.txt` with hand-maintained absolute addresses. The
extra tracking surface wasn't worth the yaml savings; keeping segments
separate.)

### 5b. Reused types + new `LBScriptHeader`

[src/lb/lbtypes.h](src/lb/lbtypes.h) gets a new `LBScriptHeader` typedef -
the 0x30-byte prefix of `LBScript`, used by particle source files because
`LBScript` itself ends in `bytecode[1]` and can't take a sized initializer.
`LBScript` itself is unchanged so runtime code (`script->bytecode`,
`script->kind`, etc.) is untouched.

The wrapper struct **does** stay per-bank (e.g. `gryosterScb`), because
each script's bytecode length is unique and `offsetof` on the wrapper is
how we get correct file-relative offsets into `script_offsets[]` at compile
time. Splitting into multiple consts would force hand-computed offsets,
which doesn't survive bytecode edits cleanly.

### 5c. Bytecode macros: [src/lb/lbparticle_script.h](src/lb/lbparticle_script.h)

Style matches the `ftAnim` macros in
[src/relocData/relocdata_types.h](src/relocData/relocdata_types.h): each
function-like macro expands to one or more comma-separated `u8` expressions
that drop into the `bytecode[]` initializer. Variable-width arguments
(big-endian f32, var-length ushort, fixed u16) have their own helpers.

Channel masks:
- `LBP_X | LBP_Y | LBP_Z` for SETPOS/ADDPOS/SETVEL/ADDVEL
- `LBP_R | LBP_G | LBP_B | LBP_A` for SETPRIMBLEND/SETENVBLEND

Width helpers:
- `LBP_F32(0x43960000)` -> 4 BE bytes for the f32 with that bit pattern
- `LBP_U16(value)` -> 2 BE bytes (for opcodes that hardcode u16, e.g. MAKESCRIPT)
- `LBP_USHORT_S(len)` / `LBP_USHORT_L(len)` -> the variable-length 1- or
  2-byte ushort form (the `+1` from `lbParticleReadUShort` is folded in,
  so write the *length the runtime sees*)

Wait commands cover all four shapes from the dispatcher
([src/lb/lbparticle.c:1239-1250](src/lb/lbparticle.c#L1239-L1250)):
`lbpWait`, `lbpWaitLong`, `lbpWaitFrame`, `lbpWaitLongFrame`.

Opcodes are named `lbp<Mnemonic>`. Some take only a fixed argument and emit
fully (e.g. `lbpMakeScript(id)` emits opcode + LBP_U16). Others emit only
the opcode byte and you append the float/ushort args yourself (e.g.
`lbpSetSizeRand, LBP_USHORT_S(len), LBP_F32(target), LBP_F32(rand)`),
which keeps the macros short and lets the comma chain stay readable.

There's one undocumented opcode in [src/lb/lbdef.h](src/lb/lbdef.h) - the
dispatcher labels it as bare `case 0xBC`. From the handler it appears to be
"set frame_id base + random*amount", so it's exposed as
`lbpSetFrameIDRand(base, rand)`.

### 5d. Bytecode array sizing and decimal float literals -- the C89 ceiling

In the per-script wrapper `struct { LBScriptHeader hdr; u8 bytecode[N]; }`,
the `N` is the one number we can't fully eliminate in IDO C89. What helps:

- **N is just the END-inclusive byte count** (e.g. 61 for `gryoster.scb`,
  not the 72 you'd get if you also baked in inter-script + file padding).
  C struct alignment rounds each script's struct out to a multiple of 4
  (because `LBScriptHeader` aligns to 4), and the `.rodata` section's
  16-byte alignment rounds the final file size out to the next 16-byte
  boundary. Verified across all 9 .scb files: **every original .scb size =
  align16(4 + 4*scripts_num + sum_scripts_of(48 + align4(bytecode_used)))**.
  So the user's job is to count the bytecode bytes; the compiler and
  linker handle every form of padding.

What we tried and could not get to work in IDO 7.1:

- `u8 bytecode[]` (C99 flexible array members) -- *Warning 807: member
  cannot be of function or incomplete type*. IDO accepts it grudgingly and
  the output happens to come out right because the .rodata section aligns
  to 16 anyway, but it's not real C89 and will warn on every build.
- `(union { f32 f; u32 u; }){300.0f}.u` (compound literal) -- syntax error.
- `{ .f = 300.0f }` (designated initializer) -- syntax error.
- `static const u8 helper[] = { ... };` followed by `u8 bc[sizeof(helper)]`
  -- works but the helper takes up real `.rodata` bytes (no
  `__attribute__((section))` since IDO strips attributes via the
  [include/macros.h](include/macros.h#L32) define), which doubles the
  bytecode footprint. Not viable.
- Linker arithmetic like `(u32)((uintptr_t)&dHdr0 - (uintptr_t)&dDesc)` --
  *Invalid constant expression*; IDO doesn't admit symbol-difference
  constants in static init.

What this means in practice:

- **Q1 ("hardcoded 72")**: replace `bytecode[72]` with `bytecode[<END byte
  count>]`. For gryoster: `bytecode[61]`. The user counts the visible
  bytes once when transcribing; everything else is automatic.
- **Q2 ("`300.0F` instead of hex")**: not in pure C89. Two real options:
  - Keep `LBP_F32(0x43960000)` with `// 300.0` comments. We're doing this.
  - Switch the bytecode payload from a `u8[]` macro chain to a
    `#pragma pack(1)` struct with named typed fields per opcode -- then
    each `f32` field takes a decimal literal natively. Cost: every
    bytecode pattern needs its own struct typedef, and the macro
    shorthand goes away. Documented but not used here.
  - (Not pursued: a sed-style preprocessor step to convert
    `LBP_F32D(300.0f)` to `LBP_F32(0x43960000)` ahead of IDO -- the
    project already has asm-processor in this slot but adding more rules
    is "new tooling".)
- **Q3 ("don't pad for file padding")**: the user's instinct is correct.
  `.rodata`'s 16-byte alignment fills the file tail; per-script C struct
  alignment fills the inter-script gap. No explicit zero bytes needed.

### 5e. `gryoster.scb` proof-of-concept -- done, byte-identical ROM

[src/particles/gryoster_scb.c](src/particles/gryoster_scb.c) decompiles the
1-script bank using `LBScriptHeader` + the bytecode macros + `offsetof`. A
plain `make` builds the full ROM and `sha1sum` matches the baserom -- no
flags, no opt-ins, the splat segment is now first-class.

Things to watch out for, from doing it for real:

- ASCII only in source. asm-processor pipes UTF-8 through an EUC-JP encoder
  on the way in; em-dashes and other non-ASCII chars in comments break the
  build. Use plain `--`.
- `const` global lands in `.rodata`, not `.data`. Yaml uses `.rodata`.
- IDO 7.1 is C89. **No designated initializers, no compound literals, no
  flexible array members** -- use positional `{...}` with field-comment
  markers (relocData style), and explicit fixed-size bytecode arrays.
- Float literals: `HALF_PI32` in [include/macros.h](include/macros.h#L14) is
  `1.5707964F` (bit pattern `0x3FC90FDB`), but `gryoster.scb` happens to
  encode `0x3FC90FDA` (the f32 immediately *below* pi/2). The bare literal
  `1.5707963f` rounds to the right pattern, so prefer it over the project
  macro here. More generally, when a bank's float doesn't match a known
  decimal, fall back to `LBP_F32(0x...)` with the raw bit pattern -- it's
  cheaper than fighting C89's lack of bit-cast.
- Easy to misread bytes when transcribing manually (I did, twice). The
  decoder I wrote inline above (parses opcodes and prints args) is the
  fastest sanity check; consider keeping it as a small `tools/decode_scb.py`.

### 5f. `.txb` files -- done, byte-identical (66 textures)

All 9 `.txb` banks are now hand-editable C in
[src/particles/](src/particles/) and produce byte-identical bytes. The
generator is [tools/decode_txb.py](tools/decode_txb.py); per-bank verify
helper is [tools/check_txb.sh](tools/check_txb.sh).

**Texture data is not inlined.** Following the
[dDBCubeKirbyFaceTexture](src/db/dbcube.c#L26) pattern, each per-frame
image and per-palette is `#include`d from a separate `.inc.c` of hex
bytes. The pipeline:

```
                    +-- assets/<v>/particles/<bank>/tex_N_img_M.<fmt>.bin   (raw bytes)
                    |   assets/<v>/particles/<bank>/tex_N_img_M.<fmt>.png   (RGBA preview)
                    |   assets/<v>/particles/<bank>/tex_N_pal_M.bin
baserom.us.z64 ----+
                    |
                    +-- build/<v>/src/particles/<bank>/tex_N_img_M.<fmt>.inc.c
                        build/<v>/src/particles/<bank>/tex_N_pal_M.inc.c
                                                            |
                                                            v
                        src/particles/<bank>_txb.c uses `#include <particles/<bank>/...>`
```

[tools/extractParticleTextures.py](tools/extractParticleTextures.py)
reads the baserom slice, parses the LBTextures, and writes all of the
above. It runs lazily as a build dependency: each `_txb.o` depends on a
per-bank `extract-stamp` file that guards the extractor invocation, same
shape as the dbkirby rule in the [Makefile](Makefile#L527). All
`assets/<v>/particles/` files are gitignored (the broader `assets/` rule in
[.gitignore](.gitignore#L11) covers them); `build/<v>/src/particles/` is also
gitignored (under `build/`).

PNG previews go through a per-format decoder
(I4/I8/IA4/IA8/IA16/CI4/CI8/RGBA16/RGBA32) so even CI textures render
with their real palette. Pillow is preferred; falls back to pypng if
Pillow isn't installed.

Source size before vs after the `#include` switch:

```
inline hex:    src/particles/efcommon_txb.c was 21,469 lines / 2.0 MB
#include:      src/particles/efcommon_txb.c is   2,193 lines /  39 KB
```

(Whole src/particles/ dropped from 2.6 MB to 284 KB; 246 PNG previews
landed in assets/<v>/particles/.)

A future tightening: swap to splat's typed image segments
(`i4`/`ci4`/etc. + `palette`) and a PNG -> bin build step so the PNGs
are the source of truth and editing a texture means editing the PNG.
That needs pigment64 or similar in the build chain; not done here.

Findings from doing all 9 banks:

- **Per-texture `data[]` length isn't fixed.** Of the 66 textures: 16 use
  exactly `data[count]` (no trailing word), 38 non-CI use `data[count + 1]`
  with a 0 trailing word, 9 CI textures use `data[count + 1]` (shared
  palette), and 1 CI uses `data[count * 2]` (per-frame palettes -- one of
  efcommon's animated CI textures with `flags == 0`). The decoder reads
  `data[0]` from the file to compute `ndata` per texture and emits the
  matching wrapper struct.
- **`count == 0` exists.** [efcommon[6]](src/particles/efcommon_txb.c) is a
  24-byte stub with no images and no palette -- just header fields.
  Probably an unused slot the encoder allocated.
- **Banks with even `textures_num` insert a 4-byte pad** between the
  offsets table and the first texture, so the first texture struct lands
  on an 8-byte file boundary. The pad is normally zero, but for
  `itcommon.txb` it's `0x00002860` (the file's total size in bytes, looks
  like an encoder leftover). Captured verbatim in the C source.
- **No inter-texture padding** observed across all 66 textures; the C
  struct's natural 4-byte alignment is sufficient (each `LBTexture` field
  set is u32-aligned), and `.rodata`'s 16-byte section alignment fills
  the file's tail pad.
- **Texture C files are large** (efcommon_txb.c is ~21k lines / 2MB
  because of the 315 KB of inlined hex). They compile fine but aren't
  pleasant to read by hand. The PNG-roundtrip plan above would mostly
  shrink these.

### 5g. JP and US

Both versions are wired up. Bank contents are **byte-for-byte identical
between US and JP** (verified pairwise from the two baseroms); only the
ROM offsets differ. So [src/particles/](src/particles/) is shared
verbatim between the two builds, and the per-frame `.bin` / `.png` /
`.inc.c` outputs from [extractParticleTextures.py](tools/extractParticleTextures.py)
are interchangeable. The extractor takes `--version us|jp` and reads the
matching baserom; the Makefile passes `--version $(VERSION)` through.

Both builds match their baserom SHA1 after `make init VERSION=us` /
`make init VERSION=jp`.

### 5h. Tooling

Five scripts now live under [tools/](tools/):

- [decode_scb.py](tools/decode_scb.py) / [check_scb.sh](tools/check_scb.sh):
  decode an `.scb` ROM range into `src/particles/<name>_scb.c` (header
  struct + per-script wrapper + bytecode via the `lbp*` macros), then
  build + `cmp` against the baserom slice. Mirrors
  [lbParticleUpdateStruct](src/lb/lbparticle.c#L707) opcode-for-opcode.
- [decode_txb.py](tools/decode_txb.py) / [check_txb.sh](tools/check_txb.sh):
  same for `.txb` banks. Detects per-texture `data[]` length variants
  and the optional 8-aligning post-offsets pad. Emits `#include` lines
  pointing at the per-frame/per-palette `.inc.c` that
  `extractParticleTextures.py` produces.
- [extractParticleTextures.py](tools/extractParticleTextures.py): reads
  baserom + bank ROM range, writes per-frame `.bin` + decoded `.png` +
  hex `.inc.c` for every image and palette. Run lazily by the
  Makefile's per-bank stamp rule.

The `decode_*` scripts are meant to run **once** for first-pass
extraction; from that point the `.c` files are hand-edited. The
extractor runs every time the baserom changes (build dependency).

## 6. Open questions / TODO

- The 0xBC opcode (currently exposed as `lbpSetFrameIDRand`) doesn't have
  a named constant in [src/lb/lbdef.h](src/lb/lbdef.h) and the dispatcher
  treats it as a literal `case 0xBC`. Worth confirming the semantic and
  adding a proper `LBPARTICLE_OPCODE_*` name there.
- One CI texture in efcommon ([tex_6](src/particles/efcommon_txb.c)) has
  `count == 0` -- a 24-byte stub with no images and no palette. Probably an
  unused slot from the original encoder. No runtime code seems to reference
  it; harmless to keep but worth noting.
- The `_pad_after_offsets` value for `itcommon.txb` is the file size in
  bytes (`0x2860`), not zero like the other count-2 banks. Nothing reads
  this slot at runtime, but the encoder behaviour is curious.
- `.txb` C sources `#include` per-frame/per-palette `.inc.c` files that
  the extractor regenerates from the baserom. PNGs are emitted alongside
  for human review. A natural follow-up: make the PNG the source of truth
  (PNG -> bin via pigment64 or similar) so editing a texture means
  editing the image. Not on the critical path; baseline is matching.
