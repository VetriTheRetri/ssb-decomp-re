# relocData

The **relocData** segment is a ~9.5 MB blob that lives near the end of the
Smash 64 ROM. It contains every "asset file" the game loads at runtime —
sprites, character animations, hitbox data, item attributes, stage models,
texture atlases, etc. — packed together with a small index table at the
front. The US ROM has 2,132 of these files; JP has 2,107.

Until recently the project treated this entire segment as opaque binary:
splat would extract each file as a `.vpk0.bin`, and the build would just
glue them all back together unchanged. That was fine for matching, but it
meant nobody could *edit* anything in those files without going through a
hex editor.

This directory's pipeline replaces that. Each individual relocData file can
be **promoted** from a binary blob to real C source. Once promoted, the
build compiles the C source with IDO, extracts the resulting `.data`
section, and substitutes that for the original binary when assembling
`relocData.bin`. The output is still byte-identical to the baserom — but
now the source is text you can read, diff, and modify.

## Status

| Version | Promoted | Total | % | ROM matches |
|---|---|---|---|---|
| US      | **220**  | 2132  | 10.3% | yes |
| JP      | **138**  | 2107  | 6.5%  | yes |

The unpromoted files (~89% of the segment) still flow through the original
binary path, untouched. Conversion is incremental: you promote one file,
verify the ROM still matches, commit.

### Block file inventory (US, committed source)

| Type | Files | What it is |
|---|---|---|
| `.sprite.c` | 988 | Sprite definitions (Sprite struct + Bitmap[] + texture include) |
| `.data.c`   | 486 | Raw `u32[]`/`u8[]` arrays (gaps, animation joints, raw blobs) |
| `.dobjdesc.c` | 74 | DObjDesc[] arrays (scene graph nodes) |
| `.mobjsub.c` | 45 | MObjSub material structs (now array-aware) |
| `.dl.c` | 36 | F3DEX display lists as `Gfx[]` raw word pairs |
| `.dobjdesc.c` ↑ | | (with labeled `dl` field expressions) |
| `.vtx.c` | 15 | `Vtx[]` arrays (16 bytes per vertex) |
| `.palette.c` | 14 | 16-color RGBA5551 palettes |
| `.manifest` | 130 | Block ordering for files with mixed content |
| `.spritelist` | 89 | Sprite-only flat ordering |

### What's left

Of the **1,912 unconverted US files**:

- **1,841** are unnamed pure-data files (no description block entries) —
  these can be batch-promoted today by running `genRelocDataC.py` on each;
  they fall through the "single big `u32[]`" code path and produce a
  matching binary on the first try.
- **60** are named but have no typed description blocks — same story.
- **11** have description blocks blocked by an unsupported type
  (see "What's missing" below).

## How it fits together

```
                       ┌─────────────────────────┐
src/relocData/N_Name.* │  per-block C source     │
                       │  + manifest + reloc     │
                       └──────────┬──────────────┘
                                  │ genRelocMaster.py
                                  ▼
                       ┌─────────────────────────┐
build/src/relocData/   │  master .c (auto-gen)   │
                       │  + extracted .inc.c     │
                       │    texture bytes        │
                       └──────────┬──────────────┘
                                  │ IDO 7.1
                                  ▼
                       ┌─────────────────────────┐
                       │  N.o  (.data section)   │
                       └──────────┬──────────────┘
                                  │ objcopy + fixRelocChain.py
                                  ▼
                       ┌─────────────────────────┐
build/assets/relocData/│  N.vpk0.bin override    │
                       └──────────┬──────────────┘
                                  │ vpk0cmd compress
                                  ▼
                       ┌─────────────────────────┐
                       │  relocData.bin (final)  │
                       └─────────────────────────┘
```

A promoted file consists of several pieces in [src/relocData/](src/relocData/):

- **`<id>_<Name>.manifest`** or **`<id>_<Name>.spritelist`** — block ordering.
  A `.spritelist` is a flat list of sprite names (the simple case); a
  `.manifest` interleaves sprite names with raw-data blocks and explicit
  `pad N` lines for inter-block padding.

- **`<id>_<Name>.reloc`** — relocation chain metadata. The original engine
  uses a linked-list of pointer fixups embedded in the .data section.
  Because individual symbol addresses move when the C source changes, the
  reloc file stores them as **variable-name labels** (e.g.
  `dMNCommon_Frame+0x34 dMNCommon_Frame_bitmaps`) which
  [tools/fixRelocChain.py](tools/fixRelocChain.py) resolves against the
  compiled .o symbol table after each build.

- **`<id>_<Name>.extras`** *(optional)* — sidecar declarations for typed
  blocks the descriptions don't track. Used as an escape hatch when
  auto-discovery doesn't catch a region. Format:
  ```
  # type        name        offset  [extra]
  MObjSub       Pose1       0xF0
  Vtx           VtxPool     0x180   96       # 96 vertices
  DataBlock     PtrArray    0x168   24       # 24 raw bytes
  DisplayList   -           0x780
  ```

- **`<Name>/<block>.sprite.c`** — typed `Sprite` + `Bitmap` definitions.
  Texture bytes are pulled in via `#include <Name/Block.<fmt>.inc.c>`.

- **`<Name>/<block>.mobjsub.c`** — `MObjSub` material struct (or array of
  structs when discovery groups them). Pointer fields (`sprites`, `palettes`,
  and several `unkXX` slots that are pointers in some files) get resolved
  to labeled C expressions like `(void**)((u8*)dFile_Owner_PtrArray + 0x8)`.

- **`<Name>/<block>.dobjdesc.c`** — `DObjDesc[]` arrays. The `dl` field of
  each entry is resolved to a labeled expression pointing at the actual
  display list.

- **`<Name>/<block>.dl.c`** — F3DEX display list as a `Gfx[]` of raw word
  pairs. Pointer-bearing words (relocated targets, typically `gsSPVertex`
  arguments) become labeled expressions like
  `(unsigned int)((u8*)dFile_Owner_Vtx + 0xC0)`.

- **`<Name>/<block>.vtx.c`** — `Vtx[]` array of N×16 byte vertices.

- **`<Name>/<block>.palette.c`** — 16-color RGBA5551 palette.

- **`<Name>/<block>.data.c`** — raw `u32`/`u8` arrays for regions that
  don't fit any typed shape yet.

- **`<Name>/<block>.png`** *(optional)* — drop a PNG here and the build
  re-encodes it into the corresponding `.inc.c` automatically. This is the
  hook you use to actually *change* a sprite's pixel content.

The list of promoted file ids per version lives in
[converted_files.us.mk](src/relocData/converted_files.us.mk) and
[converted_files.jp.mk](src/relocData/converted_files.jp.mk).
[`tools/relocFileDescriptions.us.txt`](tools/relocFileDescriptions.us.txt)
and the JP equivalent are the source-of-truth catalogs that map file ids to
names and list the typed regions inside each file.

## Auto-discovery

The auto-generator walks the data graph from each named description entry
to find anonymous typed sub-blocks that should be grouped under the same
owner name. This means you don't have to hand-author splits for the common
patterns:

1. **MObjSub array chain**. For each `MObjSub <name>` description entry,
   follow `.sprites` (+0x4). If it points at a contiguous run of u32 reloc
   entries and each target looks like another MObjSub when you subtract 0x8,
   the named MObjSub and the chained ones get folded into one
   `<name>.mobjsub.c` file as an array. The trailing pointer array is
   emitted in the same file.

2. **DObjDesc → DL → Vtx chain**. For each `DObjDesc <name>` entry (in
   files without hand-curated `DisplayList` description entries — we defer
   to hand curation when it exists), walk the array and follow each entry's
   `.dl` field. Validate the target is a real display list by checking the
   first command byte against a small set of known F3DEX init/setup ops, and
   confirm there's a `0xDF` terminator within 0x4000 bytes. Multiple DLs
   under one owner get disambiguated as `<owner>.dl.c`, `<owner>_1.dl.c`, etc.

3. **Vtx pool from DL**. While walking a discovered DL, collect every
   `gsSPVertex` (cmd `0x01`) target. The lowest target up to the DL's start
   is the vertex pool extent, emitted as `<owner>.vtx.c`.

Result: file 35's "Mario" group goes from one opaque `gap_0x0078.data.c`
to a clean `Mario.mobjsub.c` (with array + ptr array), `Mario.vtx.c`,
`Mario.dl.c`, `Mario.dobjdesc.c`, `Mario_MatAnimJoint.data.c`. Same for
Donkey, Fox, Samus, etc.

When auto-discovery doesn't catch something, the `.extras` sidecar is the
fallback.

### Build flag

Promoted files are only compiled when you opt in:

```bash
make RELOC_DATA=1 -j$(nproc)               # US
make VERSION=jp RELOC_DATA=1 -j$(nproc)    # JP
```

Without `RELOC_DATA=1` the build just uses the original binaries, which is
useful for fast iteration on non-relocData code.

---

## Contributing: promoting a new file

**Pick a file.** Two flavors:

1. *Easy mode (1,841 candidates)*: a file that has no description block
   entries — just an unnamed blob in the segment. These promote in one
   command and produce a matching binary on the first try because they
   fall into the "single big `u32[]`" code path.

2. *Typed mode*: a file with description block entries. Look at
   [tools/relocFileDescriptions.us.txt](tools/relocFileDescriptions.us.txt)
   and check whether the block types are all in this list:

   - `Sprite`, `DObjDesc`, `MObjSub`, `LUT`, `Palette`,
     `DisplayList`, `Vtx`

   If yes, the auto-generator handles it. If it uses any of the unsupported
   types listed below, hold off (or add support for that type).

**Run the auto-generator.**

```bash
python3 tools/genRelocDataC.py <id> --extract-data
```

This will:

1. Read the original binary and the descriptions for that file.
2. Walk the data graph to discover typed sub-blocks (MObjSub arrays, DLs,
   Vtx pools).
3. Decode each `Sprite` into `<Name>/<block>.sprite.c` with named struct
   fields.
4. Dump every texture region to `<Name>/<block>.<fmt>.inc.c` and a matching
   PNG preview.
5. Walk the relocation chain and emit `<id>_<Name>.reloc`.
6. Write `<id>_<Name>.spritelist` (or `.manifest` if there are non-sprite
   blocks).

**Add the id to the converted-files list.** Edit
[converted_files.us.mk](src/relocData/converted_files.us.mk) and append
the new id to `RELOC_C_FILES`.

**Build and verify.**

```bash
make RELOC_DATA=1 -j$(nproc)
```

If the build prints `OK` at the end, the C source produces a byte-identical
binary and the ROM still matches. If it prints `FAILURE`, run:

```bash
python3 tools/verifyRelocOffsets.py <id>
```

to check whether your file's individual binary matches the original.

**Try the JP build** if the file exists in JP descriptions:

```bash
make extract VERSION=jp
make VERSION=jp RELOC_DATA=1 -j$(nproc)
```

If JP's binary for the same file name is byte-identical to US (about 60% of
files are), just add the JP id to
[converted_files.jp.mk](src/relocData/converted_files.jp.mk).

**Commit.** Include the new files under `src/relocData/` plus the updated
`converted_files.<ver>.mk`.

### Editing a promoted file

This is the whole point. Once a file is promoted you can:

- **Replace a sprite.** Save a PNG over `<Name>/<block>.<fmt>.png` and
  rebuild — the PNG-override rule re-encodes it into `.inc.c` automatically.
- **Tweak struct fields.** Edit `<block>.sprite.c` / `.mobjsub.c` /
  `.dobjdesc.c` directly. The build will recompute the file size and
  re-emit the appropriate symbols.
- **Reorder or add blocks.** Edit the `.manifest` / `.spritelist` and add
  the new block file. `genRelocMaster.py` recomputes inter-block padding.
- **Cross-reference symbols from C code.** All block symbols are exported
  via `include/reloc_data.h` (auto-generated), so other source files can
  reference them as `extern int llMNCommonOptionTabLeftSprite;`.

---

## What's missing / next

### Data types not yet supported

[tools/genRelocDataC.py](tools/genRelocDataC.py) currently emits typed
output for these block types:

| Type | Output |
|---|---|
| `Sprite` | `.sprite.c` (Sprite + Bitmap[] + textures + LUT label) |
| `DObjDesc` | `.dobjdesc.c` (with labeled `dl` field) |
| `MObjSub` | `.mobjsub.c` (single struct or array, with trailing ptr array) |
| `LUT` / `Palette` | `.palette.c` (16-color RGBA5551) |
| `DisplayList` | `.dl.c` (raw `Gfx[]` words with labeled pointer arguments) |
| `Vtx` | `.vtx.c` (auto-discovered from `gsSPVertex` targets) |

The remaining types from the descriptions, ranked by how many files they
unblock:

| Type             | Files | What it is | Notes |
|------------------|-------|------------|-------|
| `Sprite`         | 10    | Sprite (already supported but with edge cases) | Files where a sprite extractor heuristic falls down |
| `AnimJoint`      | 8     | Skeletal animation joint (`AObjEvent32` arrays) | Heavy in character motion files |
| `DObjDesc`       | 8     | (already supported but with edge cases) | |
| `MObjSub`        | 5     | (already supported but with edge cases) | |
| `MatAnimJoint`   | 3     | Material animation joint | Color/UV animation |
| `Palette`        | 1     | (alternate name for LUT in some files) | |
| `TextureImage`   | 1     | Loose texture data outside Sprite blocks | |
| `Image`          | 1     | Raw image data (likely a `Bitmap` variant) | |
| `Interpolation`  | 1     | Animation interpolation tables | |
| `DisplayList`    | 1     | Edge case in remaining files | |

The biggest blocker is **`AnimJoint` / `MatAnimJoint`** — they appear in
character motion files (`*MainMotion`), animation-heavy stage files, and
combo-attack effect files. Adding support would require figuring out the
struct shape (variable size, terminated by some sentinel), which fields
hold pointers, and how to walk the chain.

The other types each block only 1–3 files and could be handled with
hand-authored `.extras` files for now.

### Pure-data file batch (1,841 candidates)

The lowest-hanging fruit by far. Each unnamed file with no description
entries promotes in one command and produces a matching binary on the first
try. A simple loop would do it:

```bash
for fid in <list>; do
    python3 tools/genRelocDataC.py $fid --extract-data
done
# add ids to converted_files.us.mk, build, verify
```

This would push US coverage from 220 to ~2000 files. The downside: those
files end up as opaque `u32[]` blobs in the source with no symbol names.
They're "promoted" for build-pipeline purposes (you can edit them) but
they don't gain any decompilation insight. Still, it's an unblock for
modding work, since any of those files could be replaced wholesale.

### JP files needing per-version handling

Of the 220 US-promoted files, **49 cannot currently be reused for JP**
because they have different binary layouts. Two ways forward:

1. **Per-version `.data.c` blobs.** Run the auto-generator with
   `--version jp` and commit `*.jp.data.c` siblings, then guard the
   include with `#ifdef VERSION_JP` in the manifest.
2. **Type the data.** Once `AnimJoint` / etc. exist, those files won't
   *need* hardcoded byte arrays at all and JP/US can share the same source.

A further 31 files are completely JP-incompatible — they don't exist in
the JP descriptions at all (per-character `MNCongra*` victory screens,
`N64Logo`, and a handful of unnamed-in-US files).

### Pipeline gaps

A few things the pipeline doesn't (yet) handle gracefully:

- **DL macro decoding.** `.dl.c` files emit raw `{ { 0xWWWWWWWW, 0xWWWWWWWW } }`
  word pairs with a `/* cmd 0xNN */` comment. A real `gs*` macro
  disassembler would make these editable as F3DEX commands instead of hex,
  but ~50 commands need decoding and each has its own argument format.
  Manual editing is feasible today using gbi.h and existing examples in
  `src/db/dbcube.c`.
- **Cross-file relocation support beyond externs.** Each file's reloc
  chain is rebuilt in isolation; if a file's external relocations point
  into another *promoted* file, the link is hardcoded by raw word value
  rather than resolved through the symbol table.
- **No automated sanity check on promoted-file naming.** If you typo a
  variable name in a `.sprite.c`, you'll only find out when
  `fixRelocChain.py` can't resolve a label.

### Recommended next steps in priority order

1. **Batch-promote the 1,841 unnamed pure-data files.** Biggest coverage
   gain for the least effort. Single shell loop, ROM stays matching.
2. **Add `AnimJoint` typed support.** Unblocks the 8 files currently using
   it plus dozens more that have it interleaved with other types via
   `.data.c` blobs in already-promoted files.
3. **Bring JP up to parity** by adding per-version `.data.c` overrides
   for the 49 files where the binaries differ.
4. **Decode F3DEX macros in `.dl.c`** to make display lists human-editable.
5. **`MapHeader` typed support** to convert `gap_0x0000.data.c` blobs in
   stage files (`GR*Map`) into proper headers.

---

## File reference

| File / dir | Role |
|---|---|
| [src/relocData/](src/relocData/) | Per-block C source, manifests, reloc files |
| [src/relocData/relocdata_types.h](src/relocData/relocdata_types.h) | Shared header (`PAD()` macro, type includes) |
| [src/relocData/converted_files.us.mk](src/relocData/converted_files.us.mk) | US promoted-file id list |
| [src/relocData/converted_files.jp.mk](src/relocData/converted_files.jp.mk) | JP promoted-file id list |
| [tools/relocFileDescriptions.us.txt](tools/relocFileDescriptions.us.txt) | US file id → name + block layout catalog |
| [tools/relocFileDescriptions.jp.txt](tools/relocFileDescriptions.jp.txt) | JP equivalent |
| [tools/genRelocDataC.py](tools/genRelocDataC.py) | Binary → C source auto-generator (with auto-discovery) |
| [tools/genRelocMaster.py](tools/genRelocMaster.py) | Manifest → master `.c` generator (build-time) |
| [tools/genRelocSymbols.py](tools/genRelocSymbols.py) | `reloc_data_symbols.<ver>.txt` + `reloc_data.h` generator |
| [tools/genRelocNamesMk.py](tools/genRelocNamesMk.py) | id → name `.mk` generator (build-time) |
| [tools/fixRelocChain.py](tools/fixRelocChain.py) | Post-compile reloc chain rebuilder |
| [tools/relocSpriteTool.py](tools/relocSpriteTool.py) | Texture/PNG extraction + conversion |
| [tools/verifyRelocOffsets.py](tools/verifyRelocOffsets.py) | Per-file binary verification |
| [tools/relocData.py](tools/relocData.py) | Original extract/assemble tool (still used for the binary path) |
| [tools/genVpk0Excess.py](tools/genVpk0Excess.py) | Generate `vpk0_excess_bytes.<ver>.txt` from a baserom |
| [tools/vpk0_excess_bytes.txt](tools/vpk0_excess_bytes.txt) | US trailing-bytes table for vpk0 round-tripping |
| [tools/vpk0_excess_bytes.jp.txt](tools/vpk0_excess_bytes.jp.txt) | JP equivalent |
