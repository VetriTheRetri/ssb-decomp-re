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
| Inline typed `.c` masters | **2,026** | Self-contained `.c` file with typed struct initializers (`FTAttributes` / `MPGroundData` / `ftMotionCommand` / `aobjEvent32` / `ftAnim` / `Sprite` / `DObjDesc` / `MObjSub` / `WPAttributes` / `Vtx` / `Gfx` DL / `LUT` palette / `Tex` / raw-byte wrappers). Any referenced `.inc.c` blobs live under `build/` and are regenerated from the ROM at `make extract` time. |
| Auto-extracted sprite files | **94** | A committed `.spritelist` marker drives `tools/extractSpriteFile.py`, which walks the ROM binary's reloc chain, auto-discovers every Sprite + Bitmap + pixel block, and emits a full master `.c` + `.reloc` + `.inc.c` set under `build/`. |
| Raw-blob inline `.c` files | **12** | Inline `.c` whose only content is one or two raw `u8[]` arrays (no struct types). Build, match, but aren't structurally typed yet. |
| **Total** | **2,132** | |

### Per-region divergence (JP build)

For files where US and JP share the same `.c` source but diverge on a
handful of values (FGM ids, gameplay tuning, extern reloc targets) the
build uses one of three override mechanisms, in priority order:

| Priority | Mechanism | Count | Purpose |
|---|---|---:|---|
| 1 | `<id>_<Name>.jp.spritelist` | 2 | JP-specific sprite name list (drops / reorders entries). Falls through to `extractSpriteFile.py` which walks the JP binary. |
| 2 | `<id>_<Name>.jp.reloc` | 12 | JP-specific relocation chain (different extern targets / intern positions). Used with the shared `.c` when the structure matches but the chain diverges. |
| 3 | `#if defined(REGION_JP)` / `REGION_US` guards inside the shared `.c` | 20 files, **258 guards** | Per-line gameplay tuning differences (FGM ids, color-anim indices, attack collision damage, etc.). Guarded at whichever granularity narrows best — most guards are 1–3 lines. Down from 358 after `tools/replaceFGMRegionGuards.py` collapsed 100 fighter-Main guards (fgm_id / sfx / dead_fgm_ids / smash_sfx / heavyget_sfx / deadup_sfx / damage_sfx) into `gmFGMVoiceID` enum references; the enum is itself region-aware so the named value picks the right ordinal. |

`.jp.c` raw blobs are no longer used — every previously-blob-overridden
file has been migrated to one of the structural mechanisms above.

### Remaining raw-blob inline files (9 files, ~51 KB)

These are inline `.c` files whose only declarations are one or two raw
`u8[]` arrays (no struct types, no LUT/Tex blocks, no animation u32[]).
They build and match but aren't structurally decomposed.

| Category | Files | Bytes | Notes |
|---|---:|---:|---|
| Item / object | 1 | 5,888 | `ITBonus1Object` |
| Pupupu beta | 3 | 27,232 | `StagePupupuBetaImages`, `StagePupupuBeta1`, `StagePupupuBeta2` — beta prototype geometry |
| Stage File2/3/4 | 1 | 17,328 | `StageBattlefieldFile2` — split into 3 named u8 regions, no struct typing yet |
| Other / utility | 3 | 816 | `SC1PTrainingMode`, `SYKseg1Validate`, `SYSignValidate` |
| Common textures | 1 | 560 | `NCommonTexture` |
| **Total** | **9** | **51,824** | |

Recent round of structural work:
- All 27 fighter **Main.c** files now have every `_pre` sub-block
  typed (`FTHiddenPart`, `FTModelPart`, `FTModelPartDesc*[]`,
  `FTCommonPartContainer`, `FTTexturePartContainer`, `FTThrownStatus[]`,
  `FTSprites`, `FTSkeleton[]`, `FTSkeleton*[]`), and every pointer slot
  with a `.reloc` entry resolved symbolically (intern + extern). 100
  region guards collapsed to `gmFGMVoiceID` enum refs. `thrown_status`
  entries use `FTCommonStatus` enum names (`nFTCommonStatusThrownCommon`,
  `nFTCommonStatusThrownFoxF`, `nFTCommonStatusThrownMarioBStart`, …).
  See `tools/replaceFGMRegionGuards.py`, `tools/typeFighterMainPre.py`,
  `tools/typeFighterMainBlocks.py`, `tools/resolveMainPointers.py`.
- `ITCommonObject` (fid 86, 78 KB — the single biggest historical
  raw-blob file) graduated out of the raw-blob set this round. It's
  now structural: 402 intern-chain entries all resolved to symbolic
  references via a committed `.reloc`, 63 per-item `DObjDesc` / `Vtx` /
  `Gfx` / `LUT` / `Tex` / `MObjSub` / `animjoint` / `matanim` named
  sub-blocks, all `(void*)0xXXXXYYYY` hex placeholders replaced with
  `(void*)&local_sym`. See `tools/symbolizeRelocFile.py`.
- `KirbySpecial1` (fid 230, 48 B) → `void *[9]` table of cross-file
  `WPAttributes` pointers — one entry per fighter whose neutral
  special Kirby can copy. Extern chain with 9 entries, all resolved
  symbolically (target symbols like `dMarioSpecial1_Fireball_WeaponAttributes`,
  `dFoxSpecial1_Blaster_WeaponAttributes`, etc.).
- `FoxUnknown` (fid 315, 1,312 B) split into typed `u16 palette[16]`,
  `u8 Tex[256]`, `Vtx Vtx[44]`, `Gfx DL[38]` — it's a Fox costume-
  accessory DL asset referenced by both FoxMain and KirbyMain at
  offset 0x3F0. Callers now reference `dFoxUnknown_DL` directly
  instead of `(Gfx*)((u8*)dFoxUnknown + 0x3F0)`.
- Earlier rounds: all `*MainMotion`, `MV opening / ending`,
  `Bonus*CommonImages`, `Stage*Images`, `Special1`, the `LBTransition*`,
  and `MarioSecondaryImage` files.

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
across the 2,026 typed inline masters. The biggest offenders are the
character model files and the Opening / Yamabuki stage assets. Many
gaps that DO have inbound chain references (extern from other files,
or intern within the same file) have already been split into named
sub-regions via `tools/splitGapFull.py`. Use this to regenerate the
exact remaining breakdown:

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
                  │         (2,027 files)                       │
                  │                                             │
src/relocData/    ├──── [2] auto-extracted sprite file ────────┤
                  │         (.spritelist marker, 94 files)      │
                  │         build/ master .c + .reloc + .inc.c  │
                  │                                             │
                  └──── [3] raw-blob inline .c ─────────────────┤
                            (11 files, 53 KB)                   │
                                                                ▼
                                                       IDO 7.1 compile
                                                                ▼
                                           build/src/relocData/.build/<fid>.o
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

`build/src/relocData/` layout:
- `build/src/relocData/<fid>_<Name>.c` — human-readable expanded view
  generated by `tools/expandRelocFile.py` (Vtx decoded as struct
  literals, Gfx as gbi macros, chain pointers resolved to local
  symbols). Parallel artifact for code review; not compiled.
- `build/src/relocData/<Name>/*.inc.c` — raw-byte `.inc.c` blobs
  regenerated by `extractRelocInc.py` from the ROM.
- `build/src/relocData/<Name>/*.png` — PNG previews of sprites
  (via `relocSpriteTool`) and CI4 Tex / LUT blocks
  (via `previewImagesTextures.py`).
- `build/src/relocData/.build/<fid>.o` — compiled object file.
- `build/src/relocData/.build/.extract-<fid>.stamp` — extract timestamp.

Auto-extracted sprite files use the same compile + patch flow. Their
master `.c`, `.reloc`, and companion `.inc.c` blobs are generated on
the fly into `build/src/relocData/` — no committed artifacts.

### Source file types

| Extension | Committed? | What |
|---|---|---|
| `<id>_<Name>.c` | yes | Inline typed master — struct initializers, `ftMotion*` / `ftAnim*` / `aobjEvent32*` macros, raw-byte wrappers. May contain `#if defined(REGION_JP)` / `REGION_US` guards around per-region tuning. |
| `<id>_<Name>.reloc` | yes | Relocation chain metadata using symbolic labels. Resolved via `nm` on the compiled `.o`. Each `extern` line carries a trailing `# -> file N (Name)` comment naming the trailer-resolved target file. |
| `<id>_<Name>.spritelist` | yes | Marker file for the auto-sprite-extract pipeline. Contains an optional ordered list of sprite names which `extractSpriteFile.py` zips with the sprites it auto-discovers from the binary. |
| `<id>_<Name>.jp.spritelist` | yes | JP-specific sprite name list. |
| `<id>_<Name>.jp.reloc` | yes | JP-specific relocation chain (different extern targets / ptr positions). |
| `build/src/relocData/<id>_<Name>.c` | no | Either (a) the auto-generated master `.c` for spritelist-driven fids, or (b) the `expandRelocFile.py` expanded view (Vtx/Gfx decoded, chain pointers symbolic) for every other fid. Only one applies per fid. |
| `build/src/relocData/<id>_<Name>.reloc` | no | Auto-generated `.reloc` for spritelist-driven fids. |
| `build/src/relocData/<Name>/<block>.*.inc.c` | no | Raw bytes extracted from `assets/relocData/<fid>.vpk0.bin` at `make extract` time. Regenerated every build. Not in git. |
| `build/src/relocData/<Name>/<block>.png` | no | Texture preview (sprites via `relocSpriteTool`, typed Tex blocks via `n64img` driven by `previewImagesTextures.py`). Not in git. |
| `build/src/relocData/.build/<fid>.o` | no | IDO-compiled object file. |
| `build/src/relocData/.build/.extract-<fid>.stamp` | no | Per-fid extract timestamp. |
| `src/relocData/<Name>/<block>.png` | yes (optional) | User texture override — drop a `.png` here and its `.inc.c` gets regenerated from it at build time instead of from the baserom. |

Everything under `build/src/relocData/` is gitignored and regenerated
from `assets/relocData/<fid>.vpk0.bin` on every `make extract`.

---

## Tools

### Build-time pipeline

| Tool | Purpose |
|---|---|
| `tools/extractSpriteFile.py` | Walks the ROM reloc chain for a spritelist-driven fid, auto-discovers every Sprite via struct sanity filter, reconstructs Bitmap arrays + pixel data + embedded palettes, emits the complete inline master `.c` + companion `.reloc` + texture `.inc.c` blobs. Zips sprite names in positional order with the committed `.spritelist` contents. |
| `tools/extractJpReloc.py` | Walks the currently-extracted binary's intern + extern chains and emits a JP-specific `.reloc` override for files where the shared `.c` compiles fine but the chain structure differs. |
| `tools/extractRelocInc.py` | Regenerates every typed block's `.inc.c` body from the decompressed ROM segment. Runs at `make extract` time. Routes emission by the declared C type (`u8` / `u16` / `u32` / `Vtx` / `Gfx` / palette) so a `#include` in a `u32 X[N] = { … }` gets u32-hex values rather than u8 bytes. Uses `pygfxd` for DL macro disassembly and `n64img` for Tex PNG previews. |
| `tools/relocSpriteTool.py` | Sprite texture extraction + PNG conversion directly from the ROM. Used by the `make extract` stamp step and for user-override workflows. |
| `tools/fixRelocChain.py` | Post-compile reloc chain rebuilder — patches chain pointers at specific byte offsets using the symbolic labels in a `.reloc` file. Strips inline `# -> file N (Name)` annotations before tokenising so annotated extern entries actually get applied (the lack of this was the cause of a silent 35-byte drift on FoxMain and probably other fighter Mains before the fix landed). |
| `tools/genRelocSymbols.py` | Generates `include/reloc_data.h` and the version-specific linker symbol file from `relocFileDescriptions.<version>.txt` plus the committed inline masters. |
| `tools/genRelocMaster.py` | Legacy manifest/spritelist → master `.c` generator. Still used by `genRelocSymbols.py` for size computation; no longer drives build-time master generation (auto-extract handles that). |
| `tools/genMotionDescOffsets.py` | Scans every `u32 d<File>_<label>[]` motion-script symbol across `*MainMotion.c` / `*SubMotion.c` and emits `include/ft/motiondesc_offsets.h` (one `#define name byte_offset` per script entry). Lets `src/ft/ftdata.c` reference scripts by name. |
| `tools/relocData.py` | Original extract / assemble tool. `makeBin` assembles the final `relocData.bin` from override (`build/assets/relocData/`) or baserom (`assets/relocData/`) files. |
| `tools/verifyRelocOffsets.py` | Per-file binary verification. |
| `tools/previewImagesTextures.py` | CI4/CI8 PNG previews for typed `LUT` + `Tex` block pairs. Annotation-aware (`/* @tex fmt=CI4 dim=WxH lut=… */`) with fallback to dimension-guessing. Runs at `make extract` time alongside `extractRelocInc.py`. |
| `tools/expandRelocFile.py` | Emits a human-readable expanded view of any fighter-style relocData file at `build/src/relocData/<fid>_<Name>.c`: decodes Vtx[] blobs into struct literals, Gfx[] into gbi macros via pygfxd, LUTs into u16 hex pairs, and rewrites chain-encoded `0xXXXXYYYY` pointer args to symbolic `&sym` references. Parallel artifact for code review; not compiled. `make reloc-expand-<fid>` / `reloc-expand-all` drives it. |

### Migration / promotion (one-shot)

| Tool | Purpose |
|---|---|
| `tools/splitRelocInlineData.py` | Splits a committed inline `u8[]` / `u32[]` / `Vtx[]` / `Gfx[]` declaration into an outer wrapper + `.inc.c` companion. |
| `tools/typeFighterModels.py` | Promote N-variant and main fighter models to typed DObjDesc + DL + Vtx blocks. |
| `tools/typeFighterSpecials.py` | Promote fighter `Special2/3` files to typed DObjDesc / MObjSub / AnimJoint / MatAnimJoint blocks driven by the `ll*` symbol map. |
| `tools/typeSpecialGaps.py` | Walks each `Special2/3` file's typed DLs and carves `Vtx` / `LUT` / `Tex` references out of the `gap_*` bytes. |
| `tools/typeStageMap.py` | Promote `GR*Map` files into `MPGroundData` struct initializers. |
| `tools/typeStageFile2.py` | Promote Stage File2 files using `gr_desc` metadata. |
| `tools/typeImagesFile.py` | Decompose a stage `*Images` data pool by scanning every other file's extern reloc chain + post-compression trailer file IDs ("req-list reverse lookup"), pairing offsets that differ by 0x28 as `(LUT, Tex)` and the rest as raw u8 blocks. Used for `Stage*Images`, `Bonus1CommonImages*`, `MarioSecondaryImage`. |
| `tools/promoteAnimJoints.py` | Animation files → typed `AObjEvent16` scripts with `ftAnim*` macros. |
| `tools/promoteMotionFiles.py` | MainMotion / ShieldPose → typed motion scripts. |
| `tools/promoteAnimFiles.py` | Batch raw-blob promotion for animation files. |
| `tools/promoteWPAttributes.py` | Decode a `u8[52]` blob using the verified WPAttributes bitfield layout and emit a typed struct initializer. |
| `tools/decodeItemAttrs.py` | Decode a `u8[72]` ITAttributes blob's visible fields (pointers, flags, attack offsets, Vec3h, map_coll, size) and emit a documentation comment block above the array. |
| `tools/decodeAObjEvent32.py` | Walk a `u32 dXxx_AnimJoint[]` / `MatAnimJoint` / `CamAnimJoint` array as an AObjEvent32 command stream, applying per-opcode payload-consumption rules from `src/sys/objanim.c`, and rewrite each command word as an `aobjEvent32End/Wait/SetVal/...` macro call. |
| `tools/retypeAnimBlocks.py` | Bulk rename `u8 dXxx_AnimJoint[]` → `u32 dXxx_AnimJoint[]` (and same for `MatAnimJoint` / `AttackEvents` / `KeyEvent`). |
| `tools/replaceFGMRegionGuards.py` | Collapse `#if defined(REGION_JP) … #else … #endif` guards in fighter Main.c files that only exist because raw fgm_id / sfx ordinals shift between regions. Parses `gmFGMVoiceID` in `src/gm/gmsound.h` (which is itself region-aware), matches the JP and US ordinal pair against the enum, and substitutes the named value when both regions agree. Collapsed 100 guards across 29 fighter Main files on first run. |
| `tools/typeFighterMainPre.py` | Split a fighter Main.c's monolithic `u32 d<Name>Main_pre[N]` arena into named sub-blocks, one per FTAttributes pointer-field target. Uses the intern-chain entries in the companion `.reloc` to identify which offset corresponds to which field (setup_parts / animlock / hiddenparts / modelparts_container / textureparts_container / commonparts_container / thrown_status / sprites / skeleton / file_handles), plus any internal-chain sub-block targets. Bytes are preserved exactly — everything stays `u32[N]` pending typed promotion. Applied across 27 fighter Main files. |
| `tools/typeFighterMainBlocks.py` | Promote the u32[N] sub-blocks from `typeFighterMainPre.py` to their real struct types: `FTHiddenPart`, `FTModelPart`, `FTModelPartDesc*[]`, `FTTexturePartContainer`, `FTCommonPartContainer`, `FTThrownStatus[]` (with `FTCommonStatus` enum names), `FTSprites`, `FTSkeleton[]`, `FTSkeleton*[]`. Sub-block identity comes from .reloc intern entries (strict — no shape guessing), so files with unusual layouts leave unknown sub-blocks as u32. After typing, rewrites any resulting `(T*)struct_value` casts in the FTAttributes initializer to `&struct_value` where needed (IDO rejects the cast for scalar struct targets). All 27 fighter Mains still byte-identical after typing. |

### Symbolic chain rewriting

| Tool | Purpose |
|---|---|
| `tools/resolveStageMapExterns.py` | Rewrite raw chain hex casts in `GR*Map` MPGroundData struct fields (`gr_desc[].dobjdesc/anim_joints/p_mobjsubs/p_matanim_joints`, `map_geometry`, `wallpaper`, `map_nodes`) as symbolic refs to the target stage's File2/sprite symbols. |
| `tools/resolveRelocExterns.py` | Generic version of `resolveStageMapExterns.py` — works on any file with extern chains by reading the trailer u16 file IDs and looking up symbols in the target file's compiled `.o` via `nm`. |
| `tools/resolveMObjSubChains.py` | Rewrite `(void**) 0xAABBCCDD` casts at MObjSub struct offsets 0x04 (sprites) and 0x2C (palettes) as symbolic intern/extern refs. |
| `tools/resolveDObjDescChains.py` | Rewrite raw chain casts at `DObjDesc[N].data` slots (element `N*44 + 4`) inside DObjDesc array initializers. |
| `tools/annotateExternRelocFids.py` | Annotate every `extern` line in every `.reloc` with a trailing `# -> file N (Name)` comment resolving the trailer u16 file ID. Pure documentation, idempotent. |
| `tools/symbolizeRelocFile.py` | Walk a file's intern (and extern) chain from the CSV-recorded head, emit `.reloc` entries with symbolic `ptr_sym+0xN target_sym+0xN` labels, and rewrite every `(void*)0xXXXXYYYY` hex placeholder in the .c source to `(void*)local_sym` / `(void*)((u8*)local_sym + delta)`. Used to turn `ITCommonObject` from a hand-chain-encoded raw-blob file into a fully symbolic typed file (402 intern entries, 47 DObjDesc pointers resolved). |
| `tools/resolveMainExterns.py` | Cross-file extern resolver: rewrites `(Type*)0xXXXXYYYY` casts in a fighter Main.c to `(Type*)&sym` / `(Type*)((u8*)sym + delta)` by looking up each extern's target in the target file's compiled `.o` via nm. Adds the corresponding `extern Type sym[];` forward declarations. |
| `tools/resolveMainPointers.py` | Generalisation of `resolveMainExterns.py` covering all pointer-slot kinds in a fighter Main.c: hex casts in typed sub-blocks, raw `0xHEX` u32 literals in untyped sub-blocks (`(u32)&sym`), and `NULL` placeholders inside the FTAttributes initializer (matched by `/* <field> */` comment against a hardcoded offset table). Handles both intern (intra-file) and extern (cross-file) entries. Falls back to source-code scanning of the target .c when the target .o isn't built. |

### Gap decomposition

| Tool | Purpose |
|---|---|
| `tools/auditGapRefs.py` | Report `gap_0xNNNN` raw-byte regions that have inbound external references from other files. |
| `tools/splitGapAtExternRefs.py` | Split such gap regions at the inbound offsets, naming each sub-region `gap_0xNNNN_sub_0xMM`. Skips gaps whose symbol is referenced anywhere in the local `.reloc` (would need label rewrites). |
| `tools/splitGapFull.py` | Like `splitGapAtExternRefs.py` but ALSO rewrites local `.reloc` intern entries to use the new sub-region symbols, so it works on gaps with intra-file chain references too. |

---

## Editing workflows

| To change … | Edit this | Effect |
|---|---|---|
| A struct field (fighter weight, hitbox, jump arc) | `<id>_<Name>.c` | Next build compiles the new value directly. |
| A sprite texture | `src/relocData/<Name>/<block>.<fmt>.png` | User-PNG override gets picked up, re-encoded to `.inc.c` at build time. |
| Sprite name / order | `<id>_<Name>.spritelist` | `extractSpriteFile.py` names the Nth discovered sprite after the Nth line. |
| A motion script value | `<id>_<Name>MainMotion.c` | Drop the numeric literal, use the `ftMotionCommand*` macro or `gmFGMVoiceID` enum name so the preprocessor picks the right value per region. |
| A per-region tuning difference | `<id>_<Name>.c` around a `#if defined(REGION_JP)` guard | The build handles US + JP from a single shared source. |
| A fighter fgm_id / sfx value | Use the `gmFGMVoiceID` enum name (e.g. `nSYAudioVoiceFoxSmash1`) rather than a raw hex ordinal. The enum is region-aware, so no `#if REGION_JP` guard is needed. `tools/replaceFGMRegionGuards.py` converts any legacy hex-plus-guard patterns in bulk. |
| A fighter thrown-state id | Use the `FTCommonStatus` enum name (e.g. `nFTCommonStatusThrownFoxF`) in `FTThrownStatus` entries. `tools/typeFighterMainBlocks.py` handles this conversion automatically. |
| An extern reloc target that differs between versions | `<id>_<Name>.jp.reloc` (generate with `tools/extractJpReloc.py`) | JP build uses the override; US falls back to the shared `.reloc`. |
| The human-readable expanded view | Run `make reloc-expand-<fid>` (or `reloc-expand-all`) after building. Writes `build/src/relocData/<fid>_<Name>.c` with Vtx decoded, Gfx as gbi macros, chain pointers resolved to their target symbols. |

Raw-byte wrappers (`u8`/`u16`/`u32` arrays that `#include` a
`.inc.c`) aren't meant to be hand-edited — they're regenerated from
the ROM on every extract. Edit the binary (via PNG override / hex
edit), the surrounding struct declaration, or promote the block to a
more structural representation instead.

---

## Contributing

The remaining work splits into four buckets:

1. **Promote the 9 raw-blob inline files** (~51 KB). `StageBattlefieldFile2`
   is the biggest remaining (17 KB); the others are each ≤ 14 KB.
   Recent rounds removed `ITCommonObject`, `KirbySpecial1`, and
   `FoxUnknown` from this list.

2. **Carve `gap_*` bytes inside typed inline masters** (~1.13 MB
   remaining). These are vertex pools, textures, and palettes
   referenced through segmented addresses the DL walker can't follow
   yet. Worst offenders are the character model files and the Opening /
   Yamabuki stage assets. Many gaps that have inbound chain references
   have already been split via `tools/splitGapFull.py`; the remaining
   bytes mostly live in self-contained internal regions.

3. **Promote the 39 JP-unpromoted inline masters**. This needs
   `extractRelocInc.py` to learn how to walk a typed inline master
   against a version-mismatched binary and emit a companion `.inc.c`
   set sized for that binary — or alternatively commit JP-specific
   inline masters for each one.

4. **Finish typing struct bitfield tails**. The `WPAttributes` 52-byte
   layout is fully verified (used by 8 hand-typed Special1 / Lizardon
   files and 11 promoted ITCommonData blobs). `ITAttributes` 72-byte
   layout has the visible fields (size, angle, ks, dmg, elem) verified
   via empirical IDO test fixtures, but the bitfield tail at 0x38+
   doesn't reduce to a clean MSB-first packing — see the comment block
   above `struct ITAttributes` in `src/it/ittypes.h`. Decoding the rest
   would unlock typed promotion of the 33 remaining `ITCommonData`
   `*_ItemAttributes` blobs.

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

# Emit the human-readable expanded view of one file (Vtx structs, gbi macros,
# symbolic chain pointers) → build/src/relocData/<fid>_<Name>.c
make reloc-expand-<fid> RELOC_DATA=1
make reloc-expand-all RELOC_DATA=1
```
