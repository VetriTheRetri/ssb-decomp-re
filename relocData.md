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

Currently:

| Version | Promoted files | ROM matches |
|---|---|---|
| US      | 218            | yes         |
| JP      | 138            | yes         |

The unpromoted files (~89% of the segment) still flow through the original
binary path, untouched. Conversion is incremental: you promote one file,
verify the ROM still matches, commit.

---

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

- **`<Name>/<block>.sprite.c`** — typed `Sprite` + `Bitmap` definitions.
  Texture bytes are pulled in via `#include <Name/Block.<fmt>.inc.c>`,
  where `<fmt>` is `i4`, `ia8`, `ci4`, `rgba16`, etc.

- **`<Name>/<block>.data.c`** — raw `u32`/`u8` arrays for regions where
  no typed parser exists yet (animation tables, palette LUTs, etc.).

- **`<Name>/<block>.dobjdesc.c`** — `DObjDesc[]` arrays (the Hal3D scene
  graph node descriptors used heavily by stage and character files).

- **`<Name>/<block>.png`** *(optional)* — drop a PNG here and the build
  re-encodes it into the corresponding `.inc.c` automatically. This is the
  hook you use to actually *change* a sprite's pixel content.

The list of promoted file ids per version lives in
[converted_files.us.mk](src/relocData/converted_files.us.mk) and
[converted_files.jp.mk](src/relocData/converted_files.jp.mk).
[`tools/relocFileDescriptions.us.txt`](tools/relocFileDescriptions.us.txt)
and the JP equivalent are the source-of-truth catalogs that map file ids to
names and list the typed regions inside each file.

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

**Pick a file.** A good first target is a small, sprite-only file from the
unconverted region. Look at [tools/relocFileDescriptions.us.txt](tools/relocFileDescriptions.us.txt)
and find one whose `[N]` block contains only `Sprite` lines and no exotic
types like `MapHeader`, `KeyEvent`, or `AnimJoint`. Cross-reference against
`converted_files.us.mk` to make sure it isn't already promoted.

**Run the auto-generator.** This does the heavy lifting:

```bash
python3 tools/genRelocDataC.py <id> --extract-data
```

This will:

1. Read the original binary and the descriptions for that file.
2. Decode each `Sprite` into `<Name>/<block>.sprite.c` with named struct
   fields.
3. Dump every texture region to `<Name>/<block>.<fmt>.inc.c` and a matching
   PNG preview.
4. Walk the relocation chain and emit `<id>_<Name>.reloc`.
5. Write `<id>_<Name>.spritelist` (or `.manifest` if there are non-sprite
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

to check whether your file's individual binary matches the original. If the
file matches but the ROM doesn't, the issue is likely in the symbol offsets
emitted by [tools/genRelocSymbols.py](tools/genRelocSymbols.py).

**Also try the JP build** if you want bonus credit:

```bash
make extract VERSION=jp
make VERSION=jp RELOC_DATA=1 -j$(nproc)
```

If JP's binary for the same file name is byte-identical to US (about 60% of
files are), just add the JP id to
[converted_files.jp.mk](src/relocData/converted_files.jp.mk) — the build
will reuse the same C source via name-based manifest lookup. If the binary
differs only in texture pixel content (struct layout matches, only the
bytes inside textures differ), it will *also* "just work", because texture
`.inc.c` files are extracted at build time from whichever version is
active.

**Commit.** Include the new files under `src/relocData/` plus the updated
`converted_files.<ver>.mk`.

### Editing a promoted file

This is the whole point. Once a file is promoted you can:

- **Replace a sprite.** Save a PNG over `<Name>/<block>.<fmt>.png` (or drop
  a brand-new file at the same path) and rebuild — the PNG-override rule
  re-encodes it into `.inc.c` automatically.
- **Tweak struct fields.** Edit `<block>.sprite.c` directly (`x`, `y`,
  `width`, `height`, `attr` flags, color fields, etc.). The build will
  recompute the file size and re-emit the appropriate symbols.
- **Reorder or add blocks.** Edit the `.manifest` / `.spritelist` and add
  the new block file. `genRelocMaster.py` recomputes inter-block padding.
- **Cross-reference symbols from C code.** All block symbols are exported
  via `include/reloc_data.h` (auto-generated), so other source files can
  reference them as `extern int llMNCommonOptionTabLeftSprite;` and the
  linker resolves them to the right runtime offset.

---

## What's missing / next

### Data types not yet decoded

[tools/genRelocDataC.py](tools/genRelocDataC.py) currently only emits typed
output for two block types — **`Sprite`** and **`DObjDesc`**. Everything
else in the descriptions falls back to raw `u32[]` arrays in `.data.c`
files. The full list of types that *appear* in
[relocFileDescriptions.us.txt](tools/relocFileDescriptions.us.txt) but
aren't yet typed:

| Type             | What it is                                          | Notes |
|------------------|-----------------------------------------------------|-------|
| `MObjSub`        | Material sub-object (0x78 bytes, color/texture state) | Used in every model file |
| `AnimJoint`      | Skeletal animation joint (`AObjEvent32` arrays)     | Heavy in character files |
| `MatAnimJoint`   | Material animation joint                            | Color/UV animation |
| `MapHeader`      | Stage map header                                    | Top of every `GR*Map` file |
| `MapHead`        | Older variant of MapHeader                          | |
| `HitDesc`        | Hit/hurt-box descriptors                            | Per-character collision |
| `GRAttackColl`   | Stage hazard attack collision data                  | |
| `FTSpecialColl`  | Fighter special-move collision tables               | |
| `ItemAttributes` | Per-item parameters (damage, lifetime, etc.)        | `251_ITCommonData` |
| `WeaponAttributes` | Weapon parameter blocks                           | |
| `KeyEvent`       | Cinematic/cutscene event tables                     | |
| `Func`           | Embedded MIPS function pointers                     | |
| `LUT`            | Color/palette lookup tables                         | |
| `Palette`        | CI texture palettes                                 | |
| `Texture` / `TextureImage` | Loose texture data outside Sprite blocks  | |
| `DisplayList`    | F3DEX2 display lists                                | |
| `EffectDisplayList` | Effect-specific display lists                    | |
| `SpriteArray`, `PosSpriteArray` | Arrays of Sprite pointers           | |
| `Angles`, `BloatScales`, `VelocitiesY` | Misc. parameter arrays      | Item physics |
| `Interpolation`  | Animation interpolation tables                      | |
| `Image`          | Raw image data (likely a `Bitmap` variant)          | |
| `AttackEvents`, `HitParties`, `ExplainPhase` | Game-logic event blocks | |
| `FTKirbyCopy`    | Kirby's copy-ability table                          | |
| `AnimBankStart`, `TargetsStart`, `FileHead`, `DataStart` | Sentinel/header markers | Often need the *next* block to know their size |
| `SectorDesc`     | Sector-style stage layout                           | |
| `NBytes`         | "N raw bytes here, no typing" hint                  | |

Each new type added to `genRelocDataC.py` unlocks a chunk of files that
currently can't be cleanly promoted (because their typed regions become
opaque `.data.c` blobs that lose all symbol info).

The **highest-leverage** next types to add are probably:

1. **`MObjSub`** — appears in almost every model file. Doable in a couple
   of hours: it's a fixed 0x78-byte struct.
2. **`MapHeader`** — would unlock the entire `GR*Map` family, which is
   already partially promoted but uses raw `.data.c` for the header.
3. **`AnimJoint`** — would unlock character motion files (`*MainMotion`)
   for proper editing.

### JP files needing per-version handling

Of the 218 US-promoted files, **49 cannot currently be reused for JP**
because they either have different binary sizes (15 files) or contain
hardcoded `.data.c` blobs that don't match JP's bytes (16 character data
files like `MarioMain`, `FoxSpecial1`, etc.). Two ways forward:

1. **Per-version `.data.c` blobs.** Run the auto-generator with
   `--version jp` and commit `*.jp.data.c` siblings, then guard the
   include with `#ifdef VERSION_JP` in the manifest. Cheap and mechanical.
2. **Type the data.** Once `MObjSub` / `AnimJoint` / etc. exist, those
   files won't *need* hardcoded byte arrays at all and JP/US can share the
   same source.

A further 31 files are completely JP-incompatible — they don't exist in
the JP descriptions at all. These are the per-character `MNCongra*`
victory screens, `N64Logo`, and a handful of unnamed-in-US files. They
need separate JP investigation to find out what (if anything) replaces
them.

### Pipeline gaps

A few things the pipeline doesn't (yet) handle gracefully:

- **No cross-file relocation support beyond externs.** Each file's reloc
  chain is rebuilt in isolation; if a file's external relocations point
  into another *promoted* file, the link is hardcoded by raw word value
  rather than resolved through the symbol table. Most files use externs
  pointing into the engine, so this rarely bites — but it will eventually.
- **No "diff-friendly" output for raw data blocks.** A `.data.c` file is
  just `u32`s with no comments — perfectly fine for matching but useless
  for understanding what the bytes *mean*. Adding type guesses based on
  the surrounding block context (e.g. "this looks like a 4x4 matrix")
  would make manual reverse engineering much faster.
- **`relocSpriteTool.py extract` only handles bitmaps with reloc-chain
  pointers.** Loose textures referenced by `Texture` / `LUT` / `Palette`
  description lines are skipped, so any file that uses those types
  produces empty texture dirs and fails to compile.
- **No automated sanity check on promoted-file naming.** If you typo a
  variable name in a `.sprite.c`, you'll only find out when
  `fixRelocChain.py` can't resolve a label.

### Stretch goals

- **Live texture editor.** Drop a PNG, save the file, watch the rebuilt
  ROM update. The hooks are already in place — it just needs a file
  watcher around `make RELOC_DATA=1`.
- **Per-block ROM-diff helper.** "Show me the bytes that this single
  promoted file contributes to the final ROM" — useful for hunting
  regressions in `MapHeader` / `AnimJoint` work without rebuilding.
- **Auto-promote unconverted files.** A batch `tools/genRelocDataC.py
  --all` mode that promotes every safe file in one pass, with reporting
  on which ones fail and why.

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
| [tools/genRelocDataC.py](tools/genRelocDataC.py) | Binary → C source auto-generator |
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
