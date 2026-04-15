# relocData

The **relocData** segment is a ~9.5 MB region near the end of the ROM
containing 2,132 asset files (US) / 2,107 (JP) — sprites, animations,
hitbox data, stage models, texture atlases, fighter attribute tables,
and so on.

Every committed source file builds with `make RELOC_DATA=1` and the
resulting ROM is byte-identical to the baserom, for both US and JP.

## Status

| Version | Building from C | Total | ROM matches |
|---|---|---|---|
| US | **2132 / 2132** (100%) | 2132 | yes |
| JP | **2068 / 2107** (98.1%) | 2107 | yes |

39 JP fids still fall back to the raw baserom bytes via `makeBin`'s
override-or-fallback path — all of them are inline-master files
(character Models / Specials / a couple of stage files) whose
US-authored structure can't be walked against the JP binary without a
JP-aware inline-master extractor. The ROM remains byte-clean because
`tools/relocData.py makeBin` silently drops back to
`assets/relocData/<fid>.vpk0` for any fid that doesn't produce a
`build/assets/relocData/<fid>.vpk0` override.

### Structural decomposition

| Source type | Files | Description |
|---|---:|---|
| Inline typed `.c` masters | **1,983** | Self-contained `.c` file with typed struct initializers (`FTAttributes` / `MPGroundData` / `ftMotionCommand` / `ftAnim` / `Sprite` / `DObjDesc` / `MObjSub` / `Vtx` / raw-byte wrappers). Any referenced `.inc.c` blobs live under `build/` and are regenerated from the ROM at `make extract` time. |
| Auto-extracted sprite files | **94** | A committed `.spritelist` marker drives `tools/extractSpriteFile.py`, which walks the ROM binary's reloc chain, auto-discovers every Sprite + Bitmap + pixel block, and emits a full master `.c` + `.reloc` + `.inc.c` set under `build/`. |
| Raw-blob inline `.c` files | **55** | Inline `.c` whose only content is a single `u8[]` / `u32[]` array. Build, match, but aren't structurally typed yet. |
| **Total** | **2,132** | |

### Per-region divergence (JP build)

For files where US and JP share the same `.c` source but diverge on a
handful of values (FGM ids, gameplay tuning, extern reloc targets) the
build uses one of four override mechanisms, in priority order:

| Priority | Mechanism | Count | Purpose |
|---|---|---:|---|
| 1 | `<id>_<Name>.jp.c` raw blob | 50 | Raw byte dump of the JP file. Skips `fixRelocChain` entirely. Legacy mechanism for fids that never shared a `.c` with US. |
| 2 | `<id>_<Name>.jp.spritelist` | 2 | JP-specific sprite name list (drops / reorders entries). Falls through to `extractSpriteFile.py` which walks the JP binary. |
| 3 | `<id>_<Name>.jp.reloc` | 2 | JP-specific relocation chain (different extern targets / intern positions). Used with the shared `.c` when the structure matches but the chain diverges. |
| 4 | `#if defined(REGION_JP)` / `REGION_US` guards inside the shared `.c` | 30 files, **326 guards** | Per-line gameplay tuning differences (FGM ids, color-anim indices, attack collision damage, etc.). Guarded at whichever granularity narrows best — most guards are 1–3 lines. |

The 50 `.jp.c` raw blobs are tracked as a technical-debt pool: any one
of them could be promoted to a shared `.c` + one of mechanisms 2–4 if
the structural delta turns out to be small.

### Remaining raw-blob inline files (55 files, ~650 KB)

These are inline `.c` files whose only declaration is a single
`u8[]` / `u32[]` array. They build and match but aren't structurally
decomposed.

| Category | Files | Bytes | Notes |
|---|---:|---:|---|
| Opening / movie | 11 | 271,248 | `MVOpeningYamabuki` dominates (257 KB); hit a historical `fixRelocChain` overflow |
| Item / object | 5 | 100,656 | `IFCommonObject`, `ITCommonObject` — complex mixed item tables |
| Stage images | 2 | 94,624 | `StagePupupuImages`, `StageYosterImages` |
| Stage File2/3/4 | 10 | 54,752 | `StagePupupuFile2`, `StageBattlefieldFile2` and the File3/File4 tails |
| Pupupu beta | 4 | 48,528 | Beta prototype geometry |
| Other | 7 | 29,968 | `SYKseg1Validate`, `SYSignValidate`, `ITCommonData`, misc headers |
| Pupupu images | 2 | 22,400 | `StagePupupuBetaImages`, secondary pupupu images |
| Fighter Special | 8 | 18,400 | `*Special1` weapon attribute tables |
| Fighter Model | 1 | 12,112 | `LinkBoomerangModel` — too small for DObjDesc scan |
| Common textures | 4 | 8,704 | `Bonus1CommonImages1..4` |
| Transition | 1 | 4,176 | `LBTransitionPaperAirplane` |
| **Total** | **55** | **665,568** | |

### JP-unpromoted inline masters (39 files)

All 39 have a shared US-authored inline `.c` that happens to compile
for JP but produces wrong bytes — either the binary layout differs,
the extern reloc targets shift, or the JP binary has a different
total size. They currently fall back to the raw baserom file via
`makeBin`'s override mechanism.

| Category | JP fids | Count | What's needed |
|---|---|---:|---|
| Character `Model` files | `276 NMarioModel`, `278 NFoxModel`, `279 NYoshiModel`, `280 NKirbyModel`, `281 NPurinModel`, `282 NPikachuModel`, `283 NDonkeyModel`, `284 NSamusModel`, `285 NLinkModel`, `286 NCaptainModel`, `287 NNessModel`, `292 DonkeyModel`, `313 YoshiModel`, `319 BossModel` | 14 | JP-specific `.inc.c` generation for the vertex / texture / DObjDesc blocks |
| Character `Special2` | `321 FoxSpecial2`, `322 PikachuSpecial2`, `323 KirbySpecial2`, `324 SamusSpecial2`, `325 CaptainSpecial2`, `326 PurinSpecial2`, `327 NessSpecial2`, `328 LinkSpecial2`, `329 YoshiSpecial2`, `330 DonkeySpecial2`, `331 MarioSpecial2` | 11 | Same |
| Character `Special3` | `272 MarioSpecial3`, `291 FoxSpecial4`, `296 SamusSpecial3`, `300 LinkSpecial3`, `308 CaptainSpecial3`, `311 NessSpecial3`, `314 YoshiSpecial3`, `317 PikachuSpecial3` | 8 | Same |
| Stage / validator | `112 StageYamabukiFile2`, `129 GRBonus1LinkFile2`, `174 SYKseg1Validate`, `175 SYSignValidate` | 4 | Same |
| Miscellaneous | `193 SamusSpecial1`, `217 PikachuMainMotion` | 2 | `PikachuMainMotion` has a 16-byte total size difference — needs a genuine JP-specific master |

Fixing these needs `extractRelocInc.py` to learn how to walk a typed
inline master against a version-mismatched binary and emit a
companion `.inc.c` set sized for that binary. Separate project.

### Gap bytes inside typed inline masters (~1.13 MB)

Typed files often still have `u8 d<Prefix>_gap_0xNNNN[N]` or `u8
d<Prefix>_data_0xNNNN[N]` raw-byte blocks for regions we haven't
classified — usually vertex pools / textures / palettes referenced
through segmented addresses the DL walker can't follow. They aren't
"raw" in the blob sense (the file has structural typing around them)
but they're the next big pool of bytes to break up.

Roughly 1.13 MB of `gap_*` / `data_*` raw-byte array bytes remain
across the 1,983 typed inline masters. The biggest offenders are the
character model files and the Opening / Yamabuki stage assets. Use
this to regenerate the exact breakdown:

```python
import os, re
R = "src/relocData"
total = 0
for fn in sorted(os.listdir(R)):
    if not re.match(r'\d+_\w+\.c$', fn): continue
    for m in re.finditer(r'u8\s+d\w+?_(gap|data)_0x[0-9A-F]+\[(\d+)\]',
                          open(f'{R}/{fn}').read()):
        total += int(m.group(2))
print(f'{total:,} bytes')
```

---

## Build pipeline

```
                  ┌──── [1] inline typed .c ────────────────────┐
                  │         (1983 files)                        │
                  │                                             │
src/relocData/    ├──── [2] auto-extracted sprite file ────────┤
                  │         (.spritelist marker, 94 files)      │
                  │         build/ master .c + .reloc + .inc.c  │
                  │                                             │
                  └──── [3] raw-blob inline .c ─────────────────┤
                            (55 files)                          │
                                                                ▼
                                                       IDO 7.1 compile
                                                                ▼
                                                       build/src/relocData/<fid>.o
                                                                ▼
                                                     objcopy .data → .vpk0.bin / .bin
                                                                ▼
                                                fixRelocChain.py <.reloc> patches chain
                                                                ▼
                                                      vpk0cmd compress (fid < 499)
                                                                ▼
                                          tools/relocData.py makeBin assembles
                                                                ▼
                                                          relocData.bin
                                                                ▼
                                                             ROM
```

Auto-extracted sprite files use the same compile + patch flow. Their
master `.c`, `.reloc`, and companion `.inc.c` blobs are generated on
the fly into `build/src/relocData/` — no committed artifacts.

### Source file types

| Extension | Committed? | What |
|---|---|---|
| `<id>_<Name>.c` | yes | Inline typed master — struct initializers, `ftMotion*` / `ftAnim*` macros, raw-byte wrappers. May contain `#if defined(REGION_JP)` / `REGION_US` guards around per-region tuning. |
| `<id>_<Name>.reloc` | yes | Relocation chain metadata using symbolic labels. Resolved via `nm` on the compiled `.o`. |
| `<id>_<Name>.spritelist` | yes | Marker file for the auto-sprite-extract pipeline. Contains an optional ordered list of sprite names which `extractSpriteFile.py` zips with the sprites it auto-discovers from the binary. |
| `<id>_<Name>.jp.c` | yes | JP-specific raw blob override. Highest priority — skips `fixRelocChain`. |
| `<id>_<Name>.jp.spritelist` | yes | JP-specific sprite name list. |
| `<id>_<Name>.jp.reloc` | yes | JP-specific relocation chain (different extern targets / ptr positions). |
| `build/src/relocData/<id>_<Name>.c` | no | Auto-generated master `.c` for spritelist-driven fids. |
| `build/src/relocData/<id>_<Name>.reloc` | no | Auto-generated `.reloc` for spritelist-driven fids. |
| `build/src/relocData/<Name>/<block>.*.inc.c` | no | Raw bytes extracted from `assets/relocData/<fid>.vpk0.bin` at `make extract` time. Regenerated every build. Not in git. |
| `build/src/relocData/<Name>/<block>.png` | no | Texture preview (sprites via `relocSpriteTool`, typed Tex blocks via `n64img`). Not in git. |
| `src/relocData/<Name>/<block>.png` | yes (optional) | User texture override — drop a `.png` here and its `.inc.c` gets regenerated from it at build time instead of from the baserom. |

Everything under `build/src/relocData/` is gitignored and regenerated
from `assets/relocData/<fid>.vpk0.bin` on every `make extract`.

---

## Tools

| Tool | Purpose |
|---|---|
| `tools/extractSpriteFile.py` | Walks the ROM reloc chain for a spritelist-driven fid, auto-discovers every Sprite via struct sanity filter, reconstructs Bitmap arrays + pixel data + embedded palettes, emits the complete inline master `.c` + companion `.reloc` + texture `.inc.c` blobs. Zips sprite names in positional order with the committed `.spritelist` contents. |
| `tools/extractJpReloc.py` | Walks the currently-extracted binary's intern + extern chains and emits a JP-specific `.reloc` override for files where the shared `.c` compiles fine but the chain structure differs. |
| `tools/extractRelocInc.py` | Regenerates every typed block's `.inc.c` body from the decompressed ROM segment. Runs at `make extract` time. Uses `pygfxd` for DL macro disassembly and `n64img` for Tex PNG previews. |
| `tools/relocSpriteTool.py` | Sprite texture extraction + PNG conversion directly from the ROM. Used by the `make extract` stamp step and for user-override workflows. |
| `tools/fixRelocChain.py` | Post-compile reloc chain rebuilder — patches chain pointers at specific byte offsets using the symbolic labels in a `.reloc` file. |
| `tools/genRelocSymbols.py` | Generates `include/reloc_data.h` and the version-specific linker symbol file from `relocFileDescriptions.<version>.txt` plus the committed inline masters. |
| `tools/genRelocMaster.py` | Legacy manifest/spritelist → master `.c` generator. Still used by `genRelocSymbols.py` for size computation; no longer drives build-time master generation (auto-extract handles that). |
| `tools/genRelocDataC.py` | Binary → C auto-generator used during initial file typing. |
| `tools/relocData.py` | Original extract / assemble tool. `makeBin` assembles the final `relocData.bin` from override (`build/assets/relocData/`) or baserom (`assets/relocData/`) files. |
| `tools/verifyRelocOffsets.py` | Per-file binary verification. |
| `tools/splitRelocInlineData.py` | One-shot migration: splits a committed inline `u8[]` / `u32[]` / `Vtx[]` / `Gfx[]` declaration into an outer wrapper + `.inc.c` companion. |
| `tools/typeFighterModels.py` | Promote N-variant and main fighter models to typed DObjDesc + DL + Vtx blocks. |
| `tools/typeFighterSpecials.py` | Promote fighter `Special2/3` files to typed DObjDesc / MObjSub / AnimJoint / MatAnimJoint blocks driven by the `ll*` symbol map. |
| `tools/typeSpecialGaps.py` | Walks each `Special2/3` file's typed DLs and carves `Vtx` / `LUT` / `Tex` references out of the `gap_*` bytes. |
| `tools/typeStageMap.py` | Promote `GR*Map` files into `MPGroundData` struct initializers. |
| `tools/typeStageFile2.py` | Promote Stage File2 files using `gr_desc` metadata. |
| `tools/promoteAnimJoints.py` | Animation files → typed `AObjEvent16` scripts with `ftAnim*` macros. |
| `tools/promoteMotionFiles.py` | MainMotion / ShieldPose → typed motion scripts. |
| `tools/promoteAnimFiles.py` | Batch raw-blob promotion for animation files. |

---

## Editing workflows

| To change … | Edit this | Effect |
|---|---|---|
| A struct field (fighter weight, hitbox, jump arc) | `<id>_<Name>.c` | Next build compiles the new value directly. |
| A sprite texture | `src/relocData/<Name>/<block>.<fmt>.png` | User-PNG override gets picked up, re-encoded to `.inc.c` at build time. |
| Sprite name / order | `<id>_<Name>.spritelist` | `extractSpriteFile.py` names the Nth discovered sprite after the Nth line. |
| A motion script value | `<id>_<Name>MainMotion.c` | Drop the numeric literal, use the `ftMotionCommand*` macro or `gmFGMVoiceID` enum name so the preprocessor picks the right value per region. |
| A per-region tuning difference | `<id>_<Name>.c` around a `#if defined(REGION_JP)` guard | The build handles US + JP from a single shared source. |
| An extern reloc target that differs between versions | `<id>_<Name>.jp.reloc` (generate with `tools/extractJpReloc.py`) | JP build uses the override; US falls back to the shared `.reloc`. |

Raw-byte wrappers (`u8`/`u16`/`u32` arrays that `#include` a
`.inc.c`) aren't meant to be hand-edited — they're regenerated from
the ROM on every extract. Edit the binary (via PNG override / hex
edit), the surrounding struct declaration, or promote the block to a
more structural representation instead.

---

## Contributing

The remaining work splits into three buckets:

1. **Promote the 55 raw-blob inline files** (~650 KB). Each one needs
   its block structure analyzed and broken into typed declarations
   driven by the game loader. `MVOpeningYamabuki` and the
   `ITCommonObject` / `IFCommonObject` item tables dominate the byte
   count; the rest are small.

2. **Carve `gap_*` bytes inside typed inline masters** (~1.13 MB
   remaining). These are vertex pools, textures, and palettes
   referenced through segmented addresses the DL walker can't follow
   yet. Worst offenders are the character model files and the stage
   File2/File3 files.

3. **Promote the 39 JP-unpromoted inline masters**. This needs
   `extractRelocInc.py` to learn how to walk a typed inline master
   against a version-mismatched binary and emit a companion `.inc.c`
   set sized for that binary — or alternatively commit JP-specific
   inline masters for each one.

### Quick reference

```bash
# Full US build
make init -j$(nproc)
make RELOC_DATA=1 -j$(nproc)

# Full JP build
make init -j$(nproc) VERSION=jp
make RELOC_DATA=1 -j$(nproc) VERSION=jp

# Generate a JP-specific reloc override
make init -j$(nproc) VERSION=jp
python3 tools/extractJpReloc.py <us_fid>

# Verify a single fid after promotion
python3 tools/verifyRelocOffsets.py <fid>
```
