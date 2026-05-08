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
| JP | **2107 / 2107** (100%) | 2107 | yes |

Both `make init RELOC_DATA=1` (US) and `make init RELOC_DATA=1 VERSION=jp`
produce byte-identical ROMs. Zero JP fids fall back to raw baserom
bytes — every file compiles from C source.

### Structural decomposition

| Source type | Files | Description |
|---|---:|---|
| Inline typed `.c` masters | **2,038** | Self-contained `.c` file with typed struct initializers (`FTAttributes` / `MPGroundData` / `ftMotionCommand` / `aobjEvent32` / `ftAnim` / `Sprite` / `DObjDesc` / `MObjSub` / `WPAttributes` / `ITAttributes` / `ITAttackEvent` / `Vtx` / `Gfx` DL / `LUT` palette / `Tex` / raw-byte wrappers). Any referenced `.inc.c` blobs live under `build/` and are regenerated from the ROM at `make extract` time. Of these, **205** contain typed struct declarations (Sprite, DObjDesc, FTAttributes, etc.); the remaining **1,833** use only raw-byte `u8`/`u32` wrappers around `.inc.c` includes. |
| Auto-extracted sprite files | **96** | A committed `.spritelist` marker drives `tools/extractSpriteFile.py`, which walks the ROM binary's reloc chain, auto-discovers every Sprite + Bitmap + pixel block, and emits a full master `.c` + `.reloc` + `.inc.c` set under `build/`. |
| **Total** | **2,134** | |

### Per-file completion %

Overall: **2048 / 2132** files at 100% (97.34% of bytes typed; 454,480 / 17,082,000 bytes still untyped across 84 files).

Updated: regenerate with `python3 tools/computeRelocCompletion.py --format section --show-non-100 --sort pct`.

Definition: a block is *untyped* when it includes a `.data.inc.c` whose body is flat hex bytes (no nested `{...}` initializers). `.data.inc.c` files structured by a local `typedef struct` count as typed. Spritelist-driven files are 100% by construction. Sizes come from the `.data` section of the compiled US `.o`.

| FID | Name | Size (B) | Untyped (B) | Untyped blocks | Complete |
|----:|---|---:|---:|---:|---:|
| 252 | SCExplainMain | 6096 | 6096 | 5 | 0.00% |
| 152 | StagePupupuFile3 | 14080 | 14072 | 2 | 0.06% |
| 153 | StageSectorFile3 | 7680 | 7664 | 2 | 0.21% |
| 157 | StageZebesFile3 | 3536 | 3528 | 2 | 0.23% |
| 158 | StageJungleFile3 | 3296 | 3288 | 2 | 0.24% |
| 162 | GRBonus3File3 | 2320 | 2312 | 2 | 0.34% |
| 159 | StageYamabukiFile3 | 10976 | 10920 | 14 | 0.51% |
| 155 | StageInishieFile3 | 5136 | 5108 | 6 | 0.55% |
| 154 | StageYosterFile3 | 1712 | 1700 | 2 | 0.70% |
| 72 | MVOpeningClashFighters | 5248 | 5176 | 16 | 1.37% |
| 83 | EFCommonEffects1 | 52736 | 42572 | 26 | 19.27% |
| 264 | GRYamabukiMap | 832 | 664 | 11 | 20.19% |
| 138 | GRBonus2FoxFile2 | 68624 | 53864 | 3 | 21.51% |
| 114 | StageLastFile2 | 76128 | 58144 | 38 | 23.62% |
| 85 | EFCommonEffects3 | 13616 | 9228 | 7 | 32.23% |
| 105 | StageZebesFile2 | 57184 | 34040 | 50 | 40.47% |
| 260 | GRInishieMap | 368 | 200 | 4 | 45.65% |
| 84 | EFCommonEffects2 | 28352 | 12704 | 32 | 55.19% |
| 295 | GRBonus3Map | 272 | 104 | 2 | 61.76% |
| 262 | GRSectorMap | 304 | 116 | 2 | 61.84% |
| 347 | PikachuSpecial2 | 7008 | 2104 | 5 | 69.98% |
| 111 | StageYosterFile2 | 47408 | 13676 | 31 | 71.15% |
| 166 | IFCommonPlayer | 976 | 272 | 1 | 72.13% |
| 353 | LinkSpecial2 | 6672 | 1816 | 1 | 72.78% |
| 257 | GRZebesMap | 224 | 56 | 2 | 75.00% |
| 261 | GRJungleMap | 224 | 56 | 2 | 75.00% |
| 265 | GRHyruleMap | 224 | 56 | 2 | 75.00% |
| 68 | MVOpeningCliff | 35440 | 8464 | 11 | 76.12% |
| 107 | StageInishieFile2 | 27792 | 6164 | 11 | 77.82% |
| 336 | NessSpecial3 | 2976 | 656 | 7 | 77.96% |
| 61 | MVOpeningNewcomers1 | 167600 | 34656 | 4 | 79.32% |
| 104 | StagePupupuFile2 | 17392 | 3196 | 57 | 81.62% |
| 112 | StageYamabukiFile2 | 66160 | 12036 | 30 | 81.81% |
| 335 | NessModel | 50112 | 6436 | 23 | 87.16% |
| 113 | StageHyruleFile2 | 26768 | 3336 | 2 | 87.54% |
| 297 | MarioSpecial3 | 656 | 80 | 2 | 87.80% |
| 342 | PikachuSpecial3 | 9104 | 1072 | 11 | 88.22% |
| 75 | MVOpeningRunCrash | 15024 | 1760 | 32 | 88.29% |
| 66 | MVOpeningClashWallpaper | 19168 | 2240 | 44 | 88.31% |
| 115 | StageExplainFile2 | 3680 | 408 | 2 | 88.91% |
| 313 | FoxModel | 32336 | 3576 | 25 | 88.94% |
| 62 | MVOpeningNewcomers2 | 245008 | 25184 | 4 | 89.72% |
| 52 | MVCommon | 149280 | 15188 | 21 | 89.83% |
| 63 | MVOpeningRoomTransition | 4592 | 416 | 4 | 90.94% |
| 86 | ITCommonObject | 79584 | 7040 | 83 | 91.15% |
| 106 | StageCastleFile2 | 17696 | 1416 | 7 | 92.00% |
| 323 | LuigiModel | 32528 | 2540 | 28 | 92.19% |
| 136 | Bonus2Common | 25392 | 1804 | 4 | 92.90% |
| 316 | FoxSpecial4 | 144 | 8 | 1 | 94.44% |
| 328 | KirbyModel | 120864 | 6600 | 24 | 94.54% |
| 161 | FoxSpecial3 | 12160 | 604 | 2 | 95.03% |
| 118 | StageYosterSmallFile2 | 17744 | 816 | 8 | 95.40% |
| 195 | SCStaffroll | 31056 | 1340 | 76 | 95.69% |
| 333 | CaptainSpecial3 | 2160 | 88 | 1 | 95.93% |
| 167 | MNTitle | 168096 | 6632 | 11 | 96.05% |
| 133 | GRBonus1PikachuFile2 | 11488 | 448 | 1 | 96.10% |
| 39 | IFCommonObject | 16352 | 616 | 1 | 96.23% |
| 145 | GRBonus2KirbyFile2 | 15568 | 572 | 1 | 96.33% |
| 150 | ITBonus1Object | 4480 | 152 | 1 | 96.61% |
| 139 | GRBonus2DonkeyFile2 | 13760 | 452 | 1 | 96.72% |
| 149 | GRBonus3File2 | 26768 | 848 | 11 | 96.83% |
| 108 | StageJungleFile2 | 62944 | 1752 | 6 | 97.22% |
| 325 | LinkSpecial3 | 1776 | 48 | 1 | 97.30% |
| 116 | StageBattlefieldFile2 | 17328 | 444 | 6 | 97.44% |
| 354 | YoshiSpecial2 | 1984 | 48 | 1 | 97.58% |
| 109 | StageSectorFile2 | 47120 | 1028 | 12 | 97.82% |
| 341 | PikachuModel | 39984 | 832 | 7 | 97.92% |
| 117 | StageMetalFile2 | 16320 | 308 | 4 | 98.11% |
| 332 | CaptainModel | 51344 | 680 | 3 | 98.68% |
| 142 | GRBonus2LinkFile2 | 18768 | 224 | 1 | 98.81% |
| 344 | BossModel | 11584 | 136 | 1 | 98.83% |
| 324 | LinkModel | 73584 | 792 | 9 | 98.92% |
| 338 | YoshiModel | 44256 | 432 | 4 | 99.02% |
| 146 | GRBonus2PikachuFile2 | 18672 | 160 | 1 | 99.14% |
| 102 | StagePupupuBeta2 | 10496 | 64 | 1 | 99.39% |
| 135 | GRBonus1NessFile2 | 12496 | 76 | 2 | 99.39% |
| 144 | GRBonus2CaptainFile2 | 20368 | 120 | 2 | 99.41% |
| 198 | SCExplainGraphics | 122976 | 636 | 4 | 99.48% |
| 330 | PurinModel | 32224 | 100 | 3 | 99.69% |
| 350 | CaptainSpecial2 | 26080 | 48 | 1 | 99.82% |
| 320 | SamusModel | 58704 | 108 | 2 | 99.82% |
| 137 | GRBonus2MarioFile2 | 15648 | 24 | 1 | 99.85% |
| 348 | KirbySpecial2 | 10512 | 16 | 1 | 99.85% |
| 147 | GRBonus2PurinFile2 | 21728 | 24 | 1 | 99.89% |
### Per-region divergence (JP build)

For files where US and JP share the same `.c` source but diverge on a
handful of values (FGM ids, gameplay tuning, extern reloc targets) the
build uses one of three override mechanisms, in priority order:

| Priority | Mechanism | Count | Purpose |
|---|---|---:|---|
| 1 | `<id>_<Name>.jp.spritelist` | 2 | JP-specific sprite name list (drops / reorders entries). Falls through to `extractSpriteFile.py` which walks the JP binary. |
| 2 | `<id>_<Name>.jp.reloc` | 88 | JP-specific relocation chain (different extern targets / intern positions). Generated by `tools/extractJpReloc.py` which compiles the `.c` with the target region's defines so symbol offsets match the actual binary layout. |
| 3 | `#if defined(REGION_JP)` / `REGION_US` guards inside the shared `.c` | **44 files, ~622 guards** | Four categories: (a) per-line gameplay tuning — FTAttributes stats, WPAttributes hitbox bitfields, GR map item spawn weights, DObjDesc joint rotations, ftMotion script parameters; (b) region-aware enum names (`gmFGMVoiceID` for SFX, `GMColAnimKind` for color animations) where a single name produces the correct ordinal for both regions; (c) structural layout diffs (KeyEvent array sizes, Gfx DL array sizes, Lut+Tex pair reordering, PAD garbage bytes); (d) full sprite section replacements where JP has different text sprites (MNTitle: 15 JP vs 7 US sprites, SCExplainGraphics: 26 JP vs 30 US sprites, SC1PIntro: 13 sprites with different JP text dimensions). |

`.jp.c` raw blobs are no longer used — every previously-blob-overridden
file has been migrated to one of the structural mechanisms above.

Recent round of structural work:
- **Mario-style post-region decompose across 10 fighter Models** —
  split each fighter's per-skeleton MObjSub region (the giant
  `Joint_0xNN_post[N]` block targeted by `gap_0x0000`'s
  `MObjSub **` dispatch) into:
  1. **N typed `MObjSub *Joint_0xNN_post_sub_0xM[k]` trailing-index
     cell arrays** (NULL-terminated, 1..6 MObjSub* entries each), at
     the tail of the post region. Each cell is one of the lists that
     `gap_0x0000[joint]` dispatch entries point to; entries now use
     `(MObjSub **)&Joint_0xNN_post_sub_0xM` instead of raw
     `+0xN` arithmetic.
  2. **K typed `MObjSub Joint_0xNN_post_sub_0xM[1]` struct
     initializers** (0x78 bytes each, 0x78-stride) covering the body
     of the post region. Promoted via
     `tools/promoteMObjSub.py <fid> --dual-version` which emits
     per-line `#if defined(REGION_US/JP)` overlays where US and JP
     byte content diverges (e.g. fighter primcolor differences).
  3. The remaining post region head (0..first-MObjSub offset) holds
     palette/sprite tables targeted by each MObjSub's
     `palettes`/`sprites` pointer fields.
  - **Donkey only**: also extended `gap_0x0000` from `[24]` to `[25]`
    by absorbing the first 4 bytes of the old `Joint_0x0060_post`
    (the dispatch slot for joint 24); split the remaining 28 bytes
    (`Joint_0x0060_post_sub_0x8[6]`, 6-entry `u16*` palette table)
    referenced by MObjSub `_sub_0x1C8.palettes`. Plus 22 inner
    `u16 *Joint_0x0080_post_sub_0xM[5]` palette tables split out of
    the post head for each MObjSub palette field.
  - **Texture trailing palettes**: `tools/split_tex_palettes.py`
    (new) walks each `Tex_0xN` block's intern reloc entries and
    splits any consecutive 40-byte trailing palette frames into
    standalone `u16 palette_0xN[20]` decls with `.palette.inc.c`
    extension. Applied to Donkey/Samus/Link/Purin/Captain/Ness/Yoshi/
    Pikachu (Fox/Luigi/Kirby had no trailing palettes to split).
  - Per-fighter completion deltas (US, before → after this whole
    round of fighter Model work): Mario 99.23% (untouched, reference);
    Fox 87.85% → 99.04%; Donkey 88.78% → 96.55%; Samus 90.73% →
    98.54%; Luigi 88.13% → 91.91% (head-dispatch alignment trap
    blocks further work — need `Vtx_0x0910` → `Vtx_0x090C` rename
    first); Link 96.28% → 98.86%; Kirby 90.73% → 94.13%;
    Purin 87.88% → 99.07%; Captain 82.95% → 98.03%; Ness 83.58% →
    87.08% (head dispatch lives in `JointVerts_Vtx[2]` — different
    pattern, blocks gap_0x0000 promotion); Yoshi 84.79% → 98.38%;
    Pikachu 79.93% → 92.21%. Both ROMs byte-identical for each
    fighter.
- **Head MObjSub** dispatch tables typed across 6 fighter Models** —
  the file 0x0000 region of each fighter Model holds a sparse
  `MObjSub **gap_0x0000[N]` array — chain-encoded pointers to the
  trailing-index cells inside the per-skeleton `Joint_0xNN_post`
  region. `Xxx Main.c`'s `commonparts_container` casts
  `&dXxxModel_gap_0x0000` to `(MObjSub***)` (matching Mario's
  reference layout). The original splat splitter sliced this region
  into 2..5 untyped fragments (`gap_0x0000`, `gap_0x0000_sub_0x8`,
  `gap_0x0000_sub_0x18`, `Joint_0x0020_post`, `Joint_0x0040_post`,
  with PAD(8) between when split was 8-byte-aligned). Fragments now
  collapsed into one `MObjSub **gap_0x0000[N]` array. Per-fighter
  entry counts: Captain/Donkey/Fox 24, Pikachu/Link/Samus 16. Cross-
  file references in fighter Main / GMain files (`(u8*)<frag> + 0xN`)
  rewritten to `(u8*)<post_sym> + 0x(frag_off+N-post_off)`. .reloc /
  .jp.reloc labels for absorbed fragments rewritten to
  `gap_0x0000+0x<file_off>`. **Skipped fighters**: Luigi (downstream
  alignment trap when head shape changes — same `Vtx_0x0910` issue
  documented earlier; needs `Vtx_0x0910` → `Vtx_0x090C` rename
  first), Ness/Purin/Kirby (head dispatch lives in a `Vtx
  JointVerts[2]` block — different layout pattern), Yoshi (head
  already typed as 6 separate `MObjSub *` arrays in a previous pass).
  Both ROMs byte-identical after each fighter.
- **AObjEvent32 anim scripts decoded across 11 fighter Models** —
  `u8 d<Fighter>Model_gap_*_sub_*[N*4]` blocks whose first u32 word
  decodes to a valid AObjEvent32 opcode (0x00..0x17) and whose last
  word is `aobjEvent32End()` were retyped to `u32 X[N]` with
  `aobjEvent32*()` macros, reusing `tools/decodeAObjEvent32.py`.
  Driven by `process_array()` + `parse_reloc_chain_pointers()` from
  the same module the Mario passes used. Per-fighter counts:
  Captain 53, Yoshi 43, Samus 37, Purin 30, Kirby 23, Pikachu 23,
  Luigi 17, Link 11, Ness 8, Fox 4, Donkey 2 — 251 anim scripts
  total. Forward-`extern` decls auto-injected (typed to match each
  referenced symbol's actual declaration so a later `u32 X[N]`
  promotion doesn't conflict with an existing `extern u8 X[]` from
  earlier passes). Both ROMs byte-identical after each fighter.
- **Post-DObjDesc zero-pad gaps → `PAD(N);`** across 30 stage / GRBonus
  / Model / MVOpening files. Many `*File2`-style files had a small
  `u8 dXxx_gap_0xNNN[N]` block (4/8/12/20 bytes, all-zero in baserom)
  sitting between a top-level `DObjDesc` array and the next data
  region — pure alignment padding to the next 16-byte boundary, not
  meaningful data. Two distinct fixups: (a) replace the `u8` decl
  with `PAD(N);` so the bytes still emit but the file no longer
  carries a name for the pad; (b) rewrite `(void*)((u8*)<sym> +
  0xMMM)` references in DObjDesc / DObjDLLink / similar entries (which
  used the gap as an arbitrary base for arithmetic into a much later
  block) to the actual target symbol they index — e.g.
  `(u8*)dGRBonus1SamusFile2_gap_0x0A58 + 0xA08` →
  `dGRBonus1SamusFile2_DL_0x1460`. Resolution walks every top-level
  decl in the file, derives the file offset from its name (`_0xNNN`
  or `_0xNNN_sub_0xMMM`), and looks up `gap_offset + ref_offset`. 31
  pads created, 39 base-offset references rewritten across files
  52, 67, 68, 106, 108, 111, 113, 115, 118, 124–132, 134, 137, 139,
  141, 143, 145, 147, 149, 309, 320, 328, 330, 344. ROM byte-identical.
- **MPGeometryData + referenced vertex/line/mapobj typing** across 36 of
  38 stage / GRBonus collision files. Each file's
  `dXxx_MPGeometryData_0xNNN` symbol — previously a `u8[28..3340]` raw
  blob — is now a typed `MPGeometryData` struct initializer pulling its
  pointer fields from the existing `.reloc` targets (`yakumono_count`,
  `mapobj_count` decoded from the binary). Seven files needed structural
  treatment beyond the simple case: 31 had only trailing zero pad
  (handled with `MPGeometryData = { … }` followed by an implicit
  alignment pad — IDO 7.1 sizes typed-pointer structs differently from
  `void*` and aligns the next decl naturally, so explicit `PAD()` after
  the typed struct corrupts the layout); 5 multi-struct files
  (107/111/113/115/118) carry trailing DObjDLLink/DL/texture data after
  the 28-byte header that is referenced by other `Layer*DObj` decls and
  by extern relocs, and were split into `MPGeometryData header` +
  `u8 …_trailing[N]` with `.reloc` offsets ≥ 28 retargeted to the
  trailing symbol (offset rebased by −28); 1 file (104 StagePupupu)
  stays `u8[28]` because the binary has 0xFFFF in the u16-to-pointer
  struct padding (which a typed initializer can't reproduce — C zeroes
  pad bytes) and the pointer fields hold literal sentinels instead of
  reloc chain values; 1 file (129 GRBonus1Link) stays `u8` because the
  JP binary has a different MPGeometryData layout (an extra leading u32
  chain field shifting every field by 4 bytes, plus 4 bytes prepended
  into the `line_info` and `mapobjs` target blocks) that the shared US
  `.reloc` and `.jp.reloc` overrides encode independently — a single
  typed initializer in the shared `.c` can only describe one layout, so
  the whole sub_0x2454/MPGeometryData region was reverted to raw u8. Then a second pass typed the five blocks each
  MPGeometryData points to: `vertex_data` → `MPVertexData[N]` (`Vec2h
  pos + u16 flags`, 6 B), `vertex_id` → flat `u16[N]` (the container
  wraps a flexible `u16 vertex_id[1]`), `vertex_links` →
  `MPVertexLinks[N]` (`u16 v1, v2`), `line_info` → `MPLineInfo[N]`
  (`u16 yakumono_id + MPLineData[4]`, 18 B), `mapobjs` →
  `MPMapObjData[N]` (`u16 kind + Vec2h pos`, 6 B). Field types worked
  out from `src/mp/mpcollision.c`'s globals (`gMPCollisionVertexData/
  IDs/Links/MapObjs`) which receive `gdata->{vertex_data,vertex_id,
  vertex_links,mapobjs}` directly. The MPGeometryData struct in
  `src/mp/mptypes.h` keeps its `void*` fields (a brief experiment with
  typed pointers shrank `sizeof` from 28→26 because IDO derives pointer
  alignment from the pointed-to type's alignment — typed pointers to
  2-byte-aligned structs collapse the pad before `mapobjs`); the
  initializers carry casts at use sites instead. Net: 169 typed
  declarations / ~22 KB out of u8 in this pass.
  Also added `MPGeometryData` (0x1C), `MPVertexData` (6), `MPVertexLinks`
  (4), `MPLineInfo` (18), `MPMapObjData` (6) to
  `tools/extractRelocInc.py`'s `_SUPPORTED_DECL_TYPES` /
  `_FIXED_TYPE_SIZES`, plus a 4-byte alignment step in `_process_inline`
  between non-`pad` decls so the cumulative offset matches IDO's actual
  placement (without it, MPLineInfo[1] / MPMapObjData[odd-N] blocks
  produce a 2-byte offset slip that corrupts every later inc.c — caught
  during the JP build, since US's trailing inc.c was hand-extracted to
  the right offsets while JP went through the walker fresh). ROM
  byte-identical for both US and JP.
- **DL-chain merge for file 127's `gap_0x0000_sub_0x580`**. The block
  referenced from `dGRBonus1SamusFile2_DLLink_0x0920` was a 5-piece
  mistype (`u8[8]` + `u16` palette + `u8` data + `u16` palette +
  `Gfx[5]` tail) covering one logical 256-byte Gfx DL whose head
  wasn't terminated with `gsSPEndDisplayList` — runtime walks straight
  through. Merged to one `Gfx[32]` mirroring the symmetric existing
  `_sub_0x680` merge (relocs at +0x74/+0xA4 to file 121 textures and
  +0xC4 to internal vertex match exactly). After the fix, audited
  every `(Gfx*)<sym>` cast and unconditional DObjDLLink target across
  all 412 relocData `.c` files: every target now declares `Gfx[N]`
  ending in `gsSPEndDisplayList()`. ROM byte-identical.
- **`tools/typeRelocBlocks.py` Pass 4 + `tools/promoteMObjSub.py` + `tools/annotateTexBlocks.py`**.
  Three additions: (a) `typeRelocBlocks.py` gained a fourth pass that
  renames `gsDPSetTextureImage → gsDPLoadBlock/Tile` targets to
  `<prefix>Tex_0x<file_off>` and switches their includes from
  `.data.inc.c` to `.tex.inc.c`, propagating renames through the
  `.reloc` and every inline reference (DObjDesc casts, MObjSub
  palette/sprites pointers, ptr arrays); single batch run added 86
  Tex retypes across ~18 files. (b) `promoteMObjSub.py` promotes
  remaining `u8 X[120]` declarations inside `_mobjsubs_*` to typed
  `MObjSub X = { … };` initializers (reusing genRelocDataC's
  `parse_mobjsub` + `format_float`), and a second pass converts the
  small u8 ptr-array sub-blocks (4..32 bytes, %4==0) inside
  `_mobjsubs_*` to typed `u32 X[N/4]` with symbolic chain-pointer
  entries — falls back to raw hex for forward references (IDO doesn't
  accept those in initializers; fixRelocChain rewrites at link time
  regardless). 16 MObjSubs + 47 ptr arrays typed in `86_ITCommonObject`.
  Two IDO gotchas the tool handles: `(u32)<struct_sym>` is not a valid
  constant initializer (must use `(u32)&<struct_sym>`); and forward
  references in initializers fail to compile. (c) `annotateTexBlocks.py`
  walks the expanded view's Gfx bodies and adds
  `/* @tex fmt=… dim=…x… lut=… */` annotations above
  `u8 Tex_*` declarations that don't already have one. Combined with
  `tools/annotateMObjSubSprites.py` (which derives fmt/dim from MObjSub
  fields when a sprite isn't reached via Gfx), **445 of 593 Tex blocks
  (75%) are now annotated**, so `previewImagesTextures.py` renders
  correct-size PNG previews instead of dimension-guessing for them. The
  remaining 148 un-annotated blocks are concentrated in stage-image
  files (`StagePupupuImages`, `Bonus1CommonImages*`, `StageYosterImages`,
  etc.) where the texture isn't reached via either of the two automated
  derivation paths; they need manual fmt/dim from inspecting the
  renderer code or from a sibling Sprite struct.
  Also extended `tools/splitGapFull.py` to accept non-`gap_*` u8
  parents (`_data_remainder` and `_mobjsubs`); file offset is looked up
  via `nm` for those. And extended `tools/typeITCommonObjectDL.py` so
  `parse_existing_blocks` recognises `Gfx`/`Vtx`/`u16`/`DObjDLLink`
  declarations and a new `collect_dl_starts` walks every typed Gfx
  block (not just chain-hex DObjDesc entries) — without this the prior
  pass had silently disconnected from its entry points after DObjDesc
  fields had been promoted to typed Gfx symbols. ROM byte-identical.
- **End-to-end "offset → typed symbol" pipeline** (`auditOffsetRefs.py` →
  `splitBlockAtSelfRefs.py` → `retypeSpriteChunks.py`). Closes the gap
  where a chain pointer lands at a non-zero offset into an existing
  typed block, leaving the source littered with `(cast)((u8*)&parent +
  0xN)` arithmetic that's opaque about what's actually being indexed.
  - `auditOffsetRefs.py --apply` rewrites references whose target lives
    at exactly that offset (EXACT — `(cast)&target`) or in an adjacent
    typed sibling (PARTIAL_CROSS — `(cast)((u8*)&adjacent + delta)`).
    20 EXACT + 15 PARTIAL_CROSS rewrites applied across `117`, `198`,
    `69`, `84`, `86` on first run.
  - `splitBlockAtSelfRefs.py` handles what's left — internal indices into
    the *same* block (PARTIAL_SELF). Splits at every unique referenced
    offset, generating element-type-aware chunks (u8/u16/u32/AObjEvent32/
    Vtx/Gfx/MObjSub) with their own `.inc.c` files. 20 new chunks across
    `198_SCExplainGraphics`, `69_MVOpeningStandoff`, `84_EFCommonEffects2`,
    `86_ITCommonObject`. Inline-init arrays (e.g. `MObjSub **X[18]`) are
    skipped because the offset is just C array indexing.
  - `retypeSpriteChunks.py` walks every typed MObjSub's `.sprites` field
    to its leaf chunks and retypes them as `u8 <File>_Tex_0x<abs>[size]`
    with `.tex.inc.c` and an `@tex fmt=… dim=…x…` annotation derived from
    the MObjSub's `block_fmt`/`block_siz` and `unk38`/`unk3A` fields.
    Handles both `G_IM_FMT_*` macros and raw-hex (`0x04, 0x02`) forms;
    sanity-checks dim vs chunk size (atlas dims that don't fit a leaf
    chunk are dropped so the previewer falls back to size-guessing).
    Renames propagate through the .c, the `.reloc`, and any per-version
    `.jp.reloc`. Accepts `void *X[]`, `MObjSub *X[]`, and `u32 X[]` sprite
    array shapes. Plumbs PNG previews through `previewImagesTextures.py`
    (which got a grayscale fallback for CI textures whose owning MObjSub
    has no LUT in scope — output tagged `.nolut.png`).
  - Concrete result for the user-flagged
    `dMVOpeningStandoff_gap_0x61B8_sub_0xC` example: each entry now reads
    `(u32)&dMVOpeningStandoff_Tex_0x{2128,3130,4138,5140}` instead of
    `(u32)((u8*)&Ground_post + 0x{10,1018,2020,3028})`, and each Tex has
    a `@tex fmt=I4 dim=64x128` annotation + an `.i4.png` preview. Both
    US and JP `RELOC_DATA=1` byte-match. Files retyped this round: `69`,
    `84`, `86`, `108`, `111`, `112`, `198`, `335`, `342`.
- **`tools/splitTexBlocksAtChainRefs.py`**. For each typed `u8 Tex_0xN[size]`
  block that has chain-pointer entries landing *inside* it (rather than at
  offset 0), splits the block at every internal chain offset so each
  ptr-array target becomes its own first-class symbol. Targets reached
  via `MObjSub.palettes` (+0x2C) chain are typed as `u16 palette_0xN[K]`
  with `.palette.inc.c`; targets via `MObjSub.sprites` (+0x4) chain stay
  `u8 Tex_0xN[K]` with `.tex.inc.c`. The truncated original keeps the
  `Tex_0xN` name. The tool then rewrites every `(u32)((u8*)&Tex_X + 0xN)`
  reference in u32 ptr arrays to use the appropriate new symbol (with
  inner offset preserved when the reference doesn't land on a chunk
  boundary), and injects forward-extern declarations at the top of the
  file so IDO accepts the const-initializer references. Applied to 3
  files: `117_StageMetalFile2` (1 block → 16 palettes), `323_LuigiModel`
  (2 blocks → 6 palettes + 5 tex chunks), `341_PikachuModel` (3 blocks
  → 27 palettes + 14 tex chunks). After the rewrite, run
  `tools/extractRelocInc.py <fid> --version us|jp` to generate the
  per-version `.inc.c` files at the new symbol offsets. ROM
  byte-identical for both versions.
- **MObjSub header / sprites split + sprite-texture promotion**.
  For 14 MObjSub-typed symbols whose declared 120-byte body actually
  packs `MObjSub **<sym>[H]` header + the real `MObjSub` at +0xN
  (`pad00 != 0` at offset 0 was the audit signal), restructured to a
  pair of declarations: `MObjSub **<sym>[H]` + `MObjSub <sym>_real`,
  absorbing the immediately-following `gap_0xPP` into the real
  initializer. Then for the 12 cases whose `_real.sprites` field
  pointed mid-header (`&<sym> + 0xN`, N>0 — meaning the leading slots
  were a pre-sprite header and the tail was the real sprites array),
  split each header into `MObjSub **<sym>[N/4]` + `void *<sym>_sprites
  [H − N/4]` and updated `_real.sprites` to reference the new array
  directly. Populated NULL slots from `.reloc` chain entries, and
  renamed the 24 sprite-target gap blocks (`gap_<P>_sub_<S>`) to
  `Tex_0x<P+S>` with `.tex.inc.c` includes (so the extractor regenerates
  them with PNG previews). One secondary MObjSub uncovered by this
  pass (`83_EFCommonEffects1.c :: gap_0x7458_sub_0x40` — 120 B with
  `pad00=0, fmt=2, siz=2`, sprites field pointing into
  `DamageSlash_MObjSub_sprites + 0x20`) was retyped from `u8[120]` to
  `MObjSub`, and its 8-byte back-pointer block (`gap_0x7458_sub_0xC0`)
  from `u8[8]` to `MObjSub *[2] = { &<sub_0x40>, NULL }`. Files
  affected: 52, 83, 84, 117, 198, 333, 341, 342, 347, 349, 350, 351,
  352, 354. Auxiliary cleanups: 7 × 8-byte back-pointer blocks
  retyped to `MObjSub *[2]`, 1 × 16-byte block to `MObjSub *[4]`, 1
  secondary 120-byte MObjSub typed (`52_MVCommon.c :: gap_0x22D08_sub_0x8`),
  2 mistyped `void *[128]` arrays converted to `u8[512]` raw, and
  one stale `(u8*)gap_0x9498 + 0x60` cross-reference repointed to
  `dPikachuModel_DL_0x94F8` (the absorbed gap symbol no longer exists).
  Also resolved 12 `(void**)0xXXXXYYYY` chain-encoded placeholders
  in `_real` MObjSubs to symbolic refs. ROM byte-identical.
- **DL-chain merging** (15 chains across the GRBonus1/2 corpus + a few
  MVOpening / Stage files). Many character / stage / opening Gfx DLs
  were split across multiple `gap_0xNNNN_sub_0xMM` symbols at intern-
  chain boundaries — the splat tool placed a symbol at every chain-
  pointer landing, even mid-DL. After classification many intermediate
  blocks ended up typed as `Gfx[N/8]` (or `u16` palette / `u8` data)
  but didn't carry a `gsSPEndDisplayList` terminator: the runtime
  walks straight through them into the next sub-block. The new
  `tools/merge_dl_chains.py` (a) detects truncated Gfx blocks (no
  `gsSPEndDisplayList` in the decoded `.dl.inc.c` *or* in the raw
  `{ { 0xDF000000, 0x00000000 } }` fallback emit_dl produces), (b)
  walks forward through subsequent blocks treating them as Gfx
  continuations until it hits a properly-terminated Gfx, (c) merges
  the whole chain into one `Gfx[N]` at the head's symbol, deleting
  the intermediates and rewriting `.reloc` entries that used to
  source from `<intermediate>+0xN` to `<head>+0x(intermediate_off-
  head_off+N)` form. Skips chains where any intermediate is a branch
  target (referenced from `.reloc` as a *target*, or from `.c` source
  outside its own declaration). One outlier survives (`73_MVOpeningSector.c
  :: dMVOpeningSector_DL_0xD110` — used both as a fall-through
  continuation *and* as a branch target via `Vtx_0xD1D0_Vtx+0x4`).
  Also retypes the 8-byte `_sub_0x580` blocks in 9 GRBonus1/2 stages
  from `u8[8]` to `Gfx[1]` (each holds a single `gsDPPipeSync()`
  command) and the 4 wallpaper `gap_0xNNNN_sub_0xA0` blocks in
  `66_MVOpeningClashWallpaper.c` from `u8[120]` to typed `MObjSub`
  initializers. ROM byte-identical.
- **`(u8*)<base> + 0xN` symbol resolver** ([tools/resolve_base_offset_refs.py]):
  scanned every relocData `.c` for `(u8*)<base> + 0xN` cast
  expressions, used `nm` on the compiled `.o` to compute the byte
  offset, and replaced the expression with the existing
  `<base>_0xNNN`-style sibling symbol when one lived at exactly that
  address. Rewrote 257 expressions across 44 files (e.g.
  `(u8*)dXxx_MatAnimJoint + 0x8` → `dXxx_MatAnimJoint_0xA1C`). When
  the substitution would create a forward reference, an
  `extern <type> <name>[];` is auto-inserted before the file's first
  definition. Also fixed two latent parser bugs in
  `extractRelocInc.py`: (1) `_TOP_DECL_RE` regex now accepts `**`
  (`Type **Name[N]`) declarations — without this fix the byte-offset
  walker silently skipped any double-pointer declaration, drifting
  every subsequent block's extracted `.inc.c` content; (2) for
  `u8/u16/u32/u64` arrays without an explicit `[N]` and without an
  `.inc.c` include, fall back to a top-level comma-counted scan
  instead of the hex-literal counter (which double-counted hex inside
  identifier names like `_0x3700` and undercounted entries that are
  bare macro calls). The former regression was masked by a stale
  build until `make clean` + RELOC_DATA build exposed it on
  `75_MVOpeningRunCrash.c`.
- **AObjScript32 anim arrays decoded** to `aobjEvent32*()` macros across
  every `u32 dXxx_AnimJoint[] / MatAnimJoint[] / CamAnimJoint[]` block
  (105 files). Decoded forms expose the per-opcode payload-consumption
  rules from `src/sys/objanim.c`: SetVal* macros emit their f32/u32
  payload words on follow-up source lines, SetInterp/SetAnim/Jump emit
  one chain-pointer payload each. AObjEvent32 union initializers
  promoted from `u32` to `AObjEvent32 *[N]` tables (NULL slots instead
  of `aobjEvent32End()` placeholders) using forward-decls into the
  per-joint `u32` script bodies. `tools/decodeAObjEvent32.py` and
  `tools/splitAnimJointTable.py`.
- **AnimJoint pointer-table + raw `_data` split**: 24 stage / effects /
  fighter MatAnim and 1 AnimJoint table whose post-table region
  contains scripts only reachable via Jump/SetAnim from inside other
  scripts (orphan scripts) now use a two-block fallback split — the
  leading chain-pointer table emits as `AObjEvent32 *X[N]`, the
  remaining bytes dump as one `u8 X_data[L]` `.data.inc.c` include.
  fixRelocChain still patches the chain-encoded forms via the .reloc;
  the splitter retargets every entry whose pointer or target offset
  lands in the post-table region to `<sym>_data+<delta>`. Adds 31
  `_data` u8 blocks (~222 KB) under the "Semantically named" bucket;
  zero `u32 ... MatAnimJoint[]` arrays remain. ROM byte-identical.
- **`tools/extractRelocInc.py` pointer-array awareness**: the
  parse_master_c walker now recognises `AObjEvent32 *Foo[N]` (and any
  `Type *Name[N]`) declarations and advances the running file offset
  by N×4. Without this, downstream `.inc.c` blocks placed after a
  pointer-array declaration would land at the wrong baserom byte
  offset (a latent bug exposed by the AnimJoint-split work above —
  every typed AnimJoint or MatAnim split with a leading `AObjEvent32 *[]`
  was at risk; some files with inc.c blocks following the table had
  been silently producing wrong inc.c content). Also adds a
  top-level-comma counter so u32 arrays containing
  `aobjEvent32End()` (which has no hex literal) get sized correctly.

- **Display-list walk typing** (180 files covering every character
  model, stage `*File2`, opening cutscene, character Special, effects
  common, and all LB transitions). `tools/typeRelocBlocks.py` walks the
  Gfx DLs inside each file and types untyped `u8` blocks accordingly:
    1. u8 blocks starting with the full `gsDPPipeSync` sentinel
       (`E7000000 00000000`) split into `Gfx[cmds] + tail`. The
       split handles the multi-DL chain case (re-entrant peel for
       consecutive DLs separated by `gsSPEndDisplayList`), the
       unterminated-DL case (one logical DL sliced into multiple
       sub-blocks by intern-chain pointers — each chunk types as
       `Gfx[N/8]` even without a terminator inside the block), and
       trailer emission. Trailers that are pure zero padding and
       not referenced by any `.reloc` entry collapse to a `PAD(N);`
       macro instead of a named `u8 trailer[N]` array.
    2. Every `gsSPVertex(ptr, count, v0)` span gets unioned (strict
       overlap) so blocks whose declared size matches a span retype
       u8→Vtx, and spans crossing block boundaries merge a contiguous
       run of sub-blocks into a single Vtx[N] at the span start.
       Absorbed sub-block targets in `.reloc` rewrite to
       `<primary>+0x<offset>`.
    3. u8 blocks loaded as `gsDPSetTextureImage` + `gsDPLoadTLUTCmd`
       retype to `u16` palette with `.palette.inc.c`. The pass scans
       every expanded view so cross-file palettes (e.g. a
       Bonus1CommonImages block loaded as a TLUT from a character
       file's Gfx) get caught too.
  Iterated to fixpoint with rebuilds between passes. Final counts:
  **1,876 `Gfx[]` arrays** (~656 KB), **3,671 `Vtx[]` arrays** (~616
  KB), **505 u16 palettes** (~24 KB), **566 `u8 Tex_*[]` arrays**
  (~605 KB with `.tex.inc.c` includes), **1,121 `PAD()` usages** (~9 KB
  of zeroed gap, including 31 added by the post-DObjDesc pad-gap pass). ROM
  stays byte-identical throughout.
- **`tools/expandRelocFile.py` correctness fixes**. The Gfx-arg
  resolver now gates on walked chain positions (so `0x0EXXXXXX`
  segmented addresses don't falsely bind to in-file symbols whose
  low 16 bits coincidentally match), and distinguishes intern vs.
  extern chain positions — extern args now resolve via `.reloc`
  `# -> file N (Name)` annotations into cross-file symbol references
  (e.g. `dStageSectorFile2_Tex_0x19F8 /* was 0xFFFF067E */`) rather
  than binding them to unrelated in-file symbols.
- **`tools/relocSpriteTool.py` PNG preview fixes**. The extract-time
  PNG generator now (a) reads `Sprite.attr` and applies the 16-byte
  odd-row deshuffle on RGBA32 sprites whose `SP_TEXSHUF` bit is set
  — fixes the zigzag-interleave artefact on title-screen art like
  `dSC1PIntro_VSDecal` and `dMNTitle_Smash`; (b) renders CI4/CI8
  sprite previews instead of skipping them, by reading 32 / 512 bytes
  from `Sprite.LUT` (already resolved by the relocs map) and passing
  them as `tlut_data` to `n64_to_rgba`. Pure preview-side fixes; ROM
  bytes unchanged.
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
- `NCommonTexture` (fid 302, 560 B) split into `u16 palette[16]` +
  `u8 Tex[512]` (32×32 CI4) — shared texture pool for the N-variant
  fighter rendering pipeline.
- `ITBonus1Object` (fid 150, 4,480 B) — Break-the-Targets target
  asset. Split into `u8 data[0x1000]` (header + RGBA32 image data),
  `Vtx[4]`, `Gfx DL[20]`, `u8 dobj[0x98]` (DObjDesc-shaped block,
  exact field layout TBD). Four intern chain entries inside the DL
  resolved to the typed sub-blocks via a committed `.reloc`.
- `SYKseg1Validate` (fid 199, 64 B) and `SYSignValidate` (fid 200,
  80 B) — small MIPS validator stubs the engine loads onto a heap and
  invokes via `lbRelocGetFileData` + `osWritebackDCache`. Typed as
  `u32 Func[12 / 16]` (the raw instructions) plus an `s32 NBytes`
  size constant the runtime reads to size the icache flush.
- `SC1PTrainingMode` (fid 254, 672 B) — Training-mode menu/HUD
  layout. Now uses two local typedefs:
  `SC1PTrainingPosSprite { s16 x, s16 y, u16 sprite_id, u16 offset }`
  for positioned label arrays and `SC1PTrainingSprite { u16 sprite_id,
  u16 offset }` for option-text glyph streams. Six named arrays cover
  the file (DisplayLabel/Option, MenuLabel/Option, plus two tag-named
  PosSprite arrays).
- `StagePupupuBetaImages` (fid 100, 10,176 B) → 12 typed (LUT + Tex)
  pairs in the same `PAD(8) + Lut(32) + PAD(8) + Tex(N)` cadence as
  the production `StagePupupuImages` file. Block layout recovered by
  walking the extern reloc chains in StagePupupuBeta1/2 (both target
  the same 12 LUT and 12 Tex offsets). Tex sizes 128 / 512 / 1024 /
  2048 bytes (CI4 32×8 / 32×32 / 64×32 / 64×64).
- `StagePupupuBeta1` (fid 101, 6,560 B) and `StagePupupuBeta2`
  (fid 102, 10,496 B) — Pupupu Beta stage geometry, now **fully typed**:
  12 `Vtx[]` arrays in the data pool (1 of size 5/7 + 11 of size 4),
  one `Gfx[]` array per DL (8 DLs in Beta1, 13 in Beta2, sizes from
  13 to 482 cmds), and a `DObjDesc[3]` / `DObjDesc[4]` block in the
  trailer. The two chain-encoded `p_dobjs` values in each trailer
  remain inline-hex placeholders (no `.reloc` for these fids yet) —
  fixRelocChain leaves them alone since both files have empty `.reloc`,
  and the runtime patches them via the `gMPCollisionGroundData`-based
  load path.
- `ITCommonData` (fid 251, 3,392 B) — item attribute + weapon attribute
  pool, now **fully typed**: 34 `ITAttributes` struct initializers (33
  matching + 1 Sawamura with IDO bitfield bug comment), 6
  `ITAttackEvent[4]` explosion/hitbox event tables with decoded
  timer/angle/damage/size fields, 2 `f32[]` gameplay data arrays
  (`Container_VelocitiesY[20]`, `FFlowerFlame_Angles[5]` using
  `F_CST_DTOR32()` degree-to-radian macros), and all 68 extern
  chain pointers resolved to symbolic `dITCommonObject_*` references.
  Zero `u8`/`u32` raw-byte data arrays remain.
- **JP RELOC_DATA=1 fully operational** (2107/2107 = 100%). All
  previously-excluded JP fids now compile from C source.
  Key work across sessions:
  - Graduated all 11 Special2/3/4 files (pure chain diffs → `.jp.reloc`)
  - Graduated all Model files by fixing unsized sprite `u8 *_tex[]`
    arrays. LinkModel uses 3 DL array size guards + 4 DObjDesc rotation
    guards + 12 PAD garbage-byte guards
  - Graduated MNTitle with full `#if defined(REGION_JP)` sprite section
    replacement: 15 typed JP sprites (IA8 Japanese title text) vs 7 US
    sprites (I4/IA8/RGBA32 English text), plus JP-specific
    `LabelsAnimJoint_AnimJoint` size (u32[264] vs u32[352]) and
    `LabelsDObjDesc` (17 vs 9 entries)
  - Graduated SCExplainGraphics with full JP sprite replacement: 26
    typed JP how-to-play sprites (I4 + CI4/CI8 Japanese text) vs 30 US
    sprites. All sprites have correct bmfmt/bmsiz (u8 fields), flags,
    and palette references
  - Graduated SC1PIntro with 13 targeted sprite dimension guards for
    JP text sprites (character names, stage names in Japanese)
  - Graduated StageYamabukiFile2 with 4 PAD garbage-byte guards
  - Graduated 5 MainMotion files (MMario, Fox, Kirby, Ness, Pikachu)
    by decoding JP binaries into `ftMotionCommand` macros with
    `nSYAudioFGM*` (FGM IDs) and `nGMColAnim*` (color animation IDs)
    enum names — both enums are region-aware, eliminating most guards
  - Generated 88 `.jp.reloc` files via `extractJpReloc.py`
  - Added ~622 targeted `#if REGION_JP` guards across 44 files
  - Fixed `extractRelocInc.py`: JP fid resolution (`_resolve_fid_for_version`),
    multi-DL block handling (pygfxd fallback to raw word pairs)
- Earlier rounds: all `*MainMotion`, `MV opening / ending`,
  `Bonus*CommonImages`, `Stage*Images`, `Special1`, the `LBTransition*`,
  and `MarioSecondaryImage` files.

### Remaining u8 `.data.inc.c` blocks by classification

Every relocData file now has at least some typed declaration (u16
palette / u32 anim / Vtx / Gfx / DObjDesc / etc.). The "pure raw-blob
file" category from earlier rounds is empty — files that used to be
all-u8 (Images pools, SC1PIntro, SCStaffroll, the stage & bonus image
files) have all graduated to at least (u16 palette + u8 Tex) form,
where the `u8 Tex_*` blocks use `.tex.inc.c` includes (properly
classified as texture data, correct type for `gsDPLoadBlock`).

What remains are u8 blocks still included via `.data.inc.c` (no
texture / palette / DL / Vtx / u32 anim classification). Split by
intent:

| Bucket | Blocks | Bytes | Files |
|---|---:|---:|---:|
| Truly unclassified (`_gap_0x*`, `_data_0x*`, `_data_remainder`, `_mobjsubs_gap`) | 3,115 | ~327 KB | 92 |
| Semantically named but still wrapped as `u8 …data.inc.c` (post-DL data, MPGeometryData_*_trailing, JointCmd, MatAnim/AnimJoint `_data` trailers, misc tails) | 167 | ~351 KB | 82 |
| **Total u8 `.data.inc.c`** | 3,282 | ~678 KB | 104 |

Counts above are pre-MPGeometryData-typing snapshots; the recent
typing pass (174 typed decls / ~23 KB, see top of "Recent round")
moved that work out without rerunning the per-file scan.

The semantic bucket dropped from ~450 KB to ~127 KB in an earlier
round (74 texture-named blocks renamed `.data.inc.c` → `.tex.inc.c`
moved ~300 KB to texture classification; 18 AnimJoint blocks retyped
u8 → u32 for another ~23 KB).

The unclassified bucket dropped from ~540 KB to ~455 KB in the most
recent round when `tools/typeRelocBlocks.py`'s split pass was
extended to:
- type DL fragments that lack a `gsSPEndDisplayList` terminator (the
  block is a slice of a longer DL chained across sub-blocks);
- emit `PAD(N);` macros for trailers that are pure zero padding and
  not referenced by any `.reloc` entry.

After the new split pass, `Gfx[]` arrays grew to **1,768 declarations
/ ~622 KB**, and 744 `PAD()` usages (~6 KB of zeroed gap) replaced
small all-zero `u8[]` trailers.

Two follow-up rounds further refined the typing:
- **Extension alignment** moved 171 declarations whose include
  extension didn't match their declared C type onto the proper
  extension: 70 `Vtx[]` to `.vtx.inc.c`, 66 `Gfx[]` to `.dl.inc.c`,
  35 `u16` palette-named arrays to `.palette.inc.c`. Bytes unchanged
  (the extract tool routes by C type, not extension); `rg
  '\.data\.inc\.c'` now strictly returns raw-byte wrappers.
- **CI8 palette extension**: 7 sprite palettes named `u16[16]` but
  referenced by Sprites with `nTLUT=256` had their remaining 240
  colors sitting in adjacent unreferenced gaps. They were merged
  to `u16[256]` (BannerTop in SC1PIntro plus 6 in SCExplainGraphics).

Top files in each bucket (bytes):

**Truly unclassified — real typing work**

| Fid | File | Blocks | Bytes |
|---:|---|---:|---:|
| 112 | StageYamabukiFile2 | 61 | 30,936 |
| 328 | KirbyModel | 338 | 30,484 |
| 83 | EFCommonEffects1 | 42 | 29,420 |
| 198 | SCExplainGraphics | 16 | 23,464 |
| 111 | StageYosterFile2 | 68 | 21,676 |
| 105 | StageZebesFile2 | 106 | 14,808 |
| 136 | Bonus2Common | 12 | 14,520 |
| 335 | NessModel | 100 | 12,856 |
| 332 | CaptainModel | 230 | 11,776 |
| 75 | MVOpeningRunCrash | 40 | 11,752 |
| 149 | GRBonus3File2 | 34 | 11,736 |
| 68 | MVOpeningCliff | 13 | 11,288 |
| 317 | DonkeyModel | 224 | 11,096 |
| 114 | StageLastFile2 | 60 | 10,708 |
| 108 | StageJungleFile2 | 19 | 9,904 |
| 167 | MNTitle | 15 | 9,256 |
| 338 | YoshiModel | 164 | 8,712 |
| 341 | PikachuModel | 141 | 8,528 |
| 320 | SamusModel | 194 | 8,344 |
| 84 | EFCommonEffects2 | 45 | 7,088 |

`ITCommonObject` graduated out of this list this round (was top with
46 KB of per-item `_data_remainder` sub-blocks; those moved to the
"semantically named" bucket via the `symbolizeRelocFile.py` typing
pass). KirbyModel and the other character models continue to
dominate — their remaining unclassified blocks are joint-hierarchy
bodies that need Joint/AnimJoint structural typing from the joint
tree, not DL content.

**Semantically named — structural analysis required**

| Fid | File | Bytes | What |
|---:|---|---:|---|
| 114 | StageLastFile2 | 55,848 | Stage collision + per-layer animation tracks. |
| 138 | GRBonus2FoxFile2 | 55,644 | Bonus2 stage data — DL-continuation chains and tail metadata. |
| 86 | ITCommonObject | 46,792 | Per-item `_data_remainder` and `JointCmd` blocks (graduated this round from the unclassified bucket via `symbolizeRelocFile.py`). |
| 61 | MVOpeningNewcomers1 | 34,656 | Opening cutscene — `*_post` DL-tail metadata (Joint / DObj / Anim fragments). |
| 105 | StageZebesFile2 | 31,488 | Stage collision + per-layer animation tracks. |
| 52 | MVCommon | 26,796 | Room-decoration cutscene tails. |
| 62 | MVOpeningNewcomers2 | 25,184 | Same shape as Newcomers1. |
| 83 | EFCommonEffects1 | 19,260 | Effect parameter tables. |
| 69 | MVOpeningStandoff | 16,424 | Opening cutscene post-DL data. |
| 84 | EFCommonEffects2 | 9,648 | Effect parameter tails. |
| 85 | EFCommonEffects3 | 9,084 | Effect parameter tails. |
| 111 | StageYosterFile2 | 7,384 | Stage geometry tails. |
| 112 | StageYamabukiFile2 | 6,504 | Stage geometry tails. |
| 335 | NessModel | 5,700 | Joint-hierarchy `_post` tails. |
| 107 | StageInishieFile2 | 5,696 | Stage geometry tails. |
| (70 more files) | — | ~38 KB | Smaller entries. |

These blocks all have semantic names (`*_post`, `*MPGeometryData_*_trailing`,
`*JointCmd_*`, `*HitParties_*`) but still `u8[]` with `.data.inc.c`.
Unlike the earlier renames (which were straight texture/anim identity
calls), these need structural typing — e.g. Joint hierarchy parsing,
per-item HitParty format — rather than just a mechanical include
rename. (`*MPGeometryData_*` blocks themselves are now typed; only the
`*MPGeometryData_*_trailing` tails on the 5 multi-struct stage files,
which carry embedded DObjDLLink/DL/texture data after the 28-byte
header, remain in this bucket pending block splitting.)

Scanner to regenerate the per-file breakdown above:

```python
import os, re
R = "src/relocData"
per_file = {}
for fn in sorted(os.listdir(R)):
    if not re.match(r'\d+_\w+\.c$', fn) or '.jp.c' in fn: continue
    text = open(f'{R}/{fn}').read()
    total = 0
    for m in re.finditer(
            r'^u8\s+(d\w+)\[(\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{\n'
            r'[ \t]*#include <[^>]+\.data\.inc\.c>',
            text, re.MULTILINE):
        N = int(m.group(2), 16) if m.group(2).startswith('0x') else int(m.group(2))
        total += N
    if total > 0: per_file[fn] = total
for fn, b in sorted(per_file.items(), key=lambda x: -x[1])[:20]:
    print(f'{b:>9,}  {fn}')
```

---

## Build pipeline

```
                  ┌──── [1] inline typed .c ────────────────────┐
                  │         (2,038 files)                       │
                  │                                             │
src/relocData/    ├──── [2] auto-extracted sprite file ────────┤
                  │         (.spritelist marker, 96 files)      │
                  │         build/ master .c + .reloc + .inc.c  │
                  │                                             │
                  └──── [3] raw-blob inline .c ─────────────────┤
                            (10 files, 50 KB)                   │
                                                                ▼
                                                       IDO 7.1 compile
                                                                ▼
                                           build/<v>/src/relocData/.build/<fid>.o
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

`build/<v>/src/relocData/` layout:
- `build/<v>/src/relocData/<fid>_<Name>.c` — human-readable expanded view
  generated by `tools/expandRelocFile.py` (Vtx decoded as struct
  literals, Gfx as gbi macros, chain pointers resolved to local
  symbols). Parallel artifact for code review; not compiled.
- `build/<v>/src/relocData/<Name>/*.inc.c` — raw-byte `.inc.c` blobs
  regenerated by `extractRelocInc.py` from the ROM.
- `build/<v>/src/relocData/<Name>/*.png` — PNG previews of sprites
  (via `relocSpriteTool`) and CI4 Tex / LUT blocks
  (via `previewImagesTextures.py`).
- `build/<v>/src/relocData/.build/<fid>.o` — compiled object file.
- `build/<v>/src/relocData/.build/.extract-<fid>.stamp` — extract timestamp.

Auto-extracted sprite files use the same compile + patch flow. Their
master `.c`, `.reloc`, and companion `.inc.c` blobs are generated on
the fly into `build/<v>/src/relocData/` — no committed artifacts.

### Source file types

| Extension | Committed? | What |
|---|---|---|
| `<id>_<Name>.c` | yes | Inline typed master — struct initializers, `ftMotion*` / `ftAnim*` / `aobjEvent32*` macros, raw-byte wrappers. May contain `#if defined(REGION_JP)` / `REGION_US` guards around per-region tuning. |
| `<id>_<Name>.reloc` | yes | Relocation chain metadata using symbolic labels. Resolved via `nm` on the compiled `.o`. Each `extern` line carries a trailing `# -> file N (Name)` comment naming the trailer-resolved target file. |
| `<id>_<Name>.spritelist` | yes | Marker file for the auto-sprite-extract pipeline. Contains an optional ordered list of sprite names which `extractSpriteFile.py` zips with the sprites it auto-discovers from the binary. |
| `<id>_<Name>.jp.spritelist` | yes | JP-specific sprite name list. |
| `<id>_<Name>.jp.reloc` | yes | JP-specific relocation chain (different extern targets / ptr positions). |
| `build/<v>/src/relocData/<id>_<Name>.c` | no | Either (a) the auto-generated master `.c` for spritelist-driven fids, or (b) the `expandRelocFile.py` expanded view (Vtx/Gfx decoded, chain pointers symbolic) for every other fid. Only one applies per fid. |
| `build/<v>/src/relocData/<id>_<Name>.reloc` | no | Auto-generated `.reloc` for spritelist-driven fids. |
| `build/<v>/src/relocData/<Name>/<block>.*.inc.c` | no | Raw bytes extracted from `assets/<v>/relocData/<fid>.vpk0.bin` at `make extract` time. Regenerated every build. Not in git. |
| `build/<v>/src/relocData/<Name>/<block>.png` | no | Texture preview (sprites via `relocSpriteTool`, typed Tex blocks via `n64img` driven by `previewImagesTextures.py`). Not in git. |
| `build/<v>/src/relocData/.build/<fid>.o` | no | IDO-compiled object file. |
| `build/<v>/src/relocData/.build/.extract-<fid>.stamp` | no | Per-fid extract timestamp. |
| `src/relocData/<Name>/<block>.png` | yes (optional) | User texture override — drop a `.png` here and its `.inc.c` gets regenerated from it at build time instead of from the baserom. |

Everything under `build/<v>/src/relocData/` is gitignored and regenerated
from `assets/<v>/relocData/<fid>.vpk0.bin` on every `make extract`.

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
| `tools/genRelocSymbols.py` | Generates `include/reloc_data.<v>.h` and the version-specific linker symbol file from `relocFileDescriptions.<v>.txt` plus the committed inline masters. The committed `include/reloc_data.h` is a thin selector shim that `#include`s the active version's header based on `REGION_US` / `REGION_JP`. |
| `tools/genRelocMaster.py` | Legacy manifest/spritelist → master `.c` generator. Still used by `genRelocSymbols.py` for size computation; no longer drives build-time master generation (auto-extract handles that). |
| `tools/genMotionDescOffsets.py` | Scans every `u32 d<File>_<label>[]` motion-script symbol across `*MainMotion.c` / `*SubMotion.c` and emits `include/ft/motiondesc_offsets.h` (one `#define name byte_offset` per script entry). Lets `src/ft/ftdata.c` reference scripts by name. |
| `tools/relocData.py` | Original extract / assemble tool. `makeBin` assembles the final `relocData.bin` from override (`build/<v>/assets/<v>/relocData/`) or baserom (`assets/<v>/relocData/`) files. |
| `tools/verifyRelocOffsets.py` | Per-file binary verification. |
| `tools/previewImagesTextures.py` | PNG previews for typed `LUT` + `Tex` block pairs in any format the previewer knows (`CI4/CI8/I4/I8/IA4/IA8/IA16/RGBA16/RGBA32`). Annotation-aware (`/* @tex fmt=… dim=WxH lut=… */`); when no `dim=` is given, falls back to a near-square guess sized by the annotated `fmt=`'s bpp (preserves the `fmt`, not hardcoded CI4). For CI textures with no LUT in scope (e.g. sibling MObjSub.palettes is NULL or in another file) the renderer uses a grayscale ramp and tags the output `.nolut.png` so the missing LUT is obvious. Runs at `make extract` time alongside `extractRelocInc.py`. |
| `tools/expandRelocFile.py` | Emits a human-readable expanded view of any fighter-style relocData file at `build/<v>/src/relocData/<fid>_<Name>.c`: decodes Vtx[] blobs into struct literals, Gfx[] into gbi macros via pygfxd, LUTs into u16 hex pairs, and rewrites chain-encoded `0xXXXXYYYY` pointer args to symbolic `&sym` references. Parallel artifact for code review; not compiled. `make reloc-expand-<fid>` / `reloc-expand-all` drives it. |

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
| `tools/typeRelocBlocks.py` | Display-list-driven bulk typer: four passes over a file's expanded Gfx bodies. (1) Split u8 blocks whose first 8 bytes are the full gsDPPipeSync sentinel (`E7000000 00000000`) into `Gfx[cmds] + tail`; handles multi-DL chains (re-entrant peel), unterminated DL fragments (one logical DL spread across intern-chain sub-blocks — each chunk still types as `Gfx[N/8]`), and trailer collapse to `PAD(N);` when the trailer is all-zero and unreferenced. (2) Walk every `gsSPVertex` span and retype / merge u8 blocks into `Vtx[N]` with strict-overlap span union and `.reloc` target rewrites. (3) Retype `gsDPSetTextureImage → gsDPLoadTLUTCmd` targets as `u16 palette[N/2]`. (4) Rename `gsDPSetTextureImage → gsDPLoadBlock/Tile` targets to `<prefix>Tex_0x<file_off>` with `.tex.inc.c` includes; substitution propagates through `.reloc` and inline source refs (DObjDesc casts, MObjSub palette/sprites pointers, ptr arrays). Global palette/texture hint map is derived from every expanded view so cross-file palettes (e.g. a Bonus1CommonImages block loaded as a TLUT from a character file) get caught — and a symbol observed as both a TLUT and a block load is skipped from both passes. Idempotent — re-running against a fully-typed file produces zero changes. |
| `tools/promoteMObjSub.py` | Promote `u8 X[120]` declarations into typed `MObjSub X[1] = {{ … }};` initializers, reusing `parse_mobjsub` + `format_float` from `genRelocDataC.py`. Three passes: (1) MObjSub blocks: matched either by legacy `_mobjsubs` substring, OR by being referenced from a `MObjSub *Y[]` array elsewhere in the file (covers `*_gap_*_sub_*` blocks in fighter models). Emits the array form `MObjSub X[1]` so `(MObjSub *)X` casts decay correctly; auto-rewrites within-file `extern u8 X[]` to `extern MObjSub X[]`. (2) Small `u8 X[N]` blocks (4..32 bytes, %4==0) that are either legacy `_mobjsubs` syms OR `.sprites/.palettes` chain targets become `u32 X[N/4]` with symbolic chain-pointer entries; emits `(u32)&sym` (not `(u32)sym`) for struct-symbol refs since IDO rejects the latter as a constant initializer; auto-injects forward-extern declarations at the top of the file when a referenced sym is declared further down. (3) Second-level `.palettes` chain targets (palette data blocks reached via MObjSub.palettes → ptr-array → block) get retyped as `u16 X[N/2]` with `.palette.inc.c`. **`--dual-version` mode**: also reads JP-side bytes (via JP fid mapping in `relocFileDescriptions.jp.txt` + `build/jp/src/relocData/.build/<jp_fid>.o`); per-line diff between US and JP decoded MObjSub fields produces `#if defined(REGION_US) / #elif defined(REGION_JP)` overlays only around lines whose values differ (e.g. fighter primcolor differences). **`parse_reloc`** resolves bare numeric file-offset targets (`0xXXXX`) back to `<sym>+0xN` form by binary-searching the nm symbol table, so downstream emit can produce symbolic references even when the .reloc didn't pre-resolve them. |
| `tools/annotateTexBlocks.py` | Add `/* @tex fmt=<FMT> dim=<W>x<H> lut=<LUT_SYM> */` annotations above `u8 Tex_*` declarations that don't already carry one, by walking the expanded view's Gfx bodies for the `gsDPSetTile / gsDPSetTextureImage(LUT) / gsDPLoadTLUTCmd / gsDPSetTileSize / gsDPSetTextureImage(TEX) / gsDPLoadBlock` sequence. Format comes from the most-recent `gsDPSetTile` (the SetTextureImage's fmt/siz describes the load buffer, not the texture); dimensions from `gsDPSetTileSize` (`W = lrs/4 + 1`, `H = lrt/4 + 1`); palette from the most-recent committed-via-LoadTLUTCmd target. Pure-comment edit; bytes unchanged. `previewImagesTextures.py` reads these annotations to render correct-size CI4/CI8 PNG previews instead of dimension-guessing. |
| `tools/annotateMObjSubSprites.py` | Companion to `annotateTexBlocks.py` for sprites that aren't reached via Gfx command sequences. Walks each `MObjSub` declaration's `sprites`/`palettes` ptr arrays in the .c, derives `(fmt, dim)` from the MObjSub's `fmt`/`siz`/`unk0C`/`unk0E` and `block_*`/`unk38`/`unk3A` fields, and emits `/* @tex fmt=<F> dim=<W>x<H> */` above each target Tex block. Also renames any lingering `gap_*` sprite targets to `Tex_0xXXXX` and updates references in the .c + .reloc. `--all` to bulk-process; flagged anomalies (size/dim mismatch, non-renderable fmt, expression-form refs) are reported as warnings without blocking annotation of the rest. |
| `tools/splitTexBlocksAtChainRefs.py` | For each typed `u8 Tex_0xN[size]` block whose `.reloc` has chain pointers landing inside it (not at offset 0), splits the block at every internal chain offset so each ptr-array target becomes a first-class symbol. `MObjSub.palettes` chain targets become `u16 palette_0xN[K]` (`.palette.inc.c`); `MObjSub.sprites` chain targets become `u8 Tex_0xN[K]` (`.tex.inc.c`). Truncates the original Tex block to its first chunk; rewrites every `(u32)((u8*)&Tex_X + 0xN)` reference in u32 ptr arrays to use the appropriate new symbol; injects forward-extern declarations at the top of the file. Re-run `extractRelocInc.py` per version after to materialize the per-symbol `.inc.c` files. Carries the parent's `@tex fmt=…` annotation onto sprite chunks when present. |
| `tools/auditOffsetRefs.py` | Cast-agnostic inventory of every `(<cast>)((u8*)&<sym> + 0x<offset>)` reference in `src/relocData/*.c`. Categorises each as `EXACT` (a typed sym lives at exactly that offset → safe rewrite to `(<cast>)&<target>`), `PARTIAL_CROSS` (target offset lands inside an *adjacent* typed sym → rewrite to `(<cast>)((u8*)&<adjacent>+<delta>)`), `PARTIAL_SELF` (offset is into the source sym itself — legitimate array-indexing or a candidate for `splitBlockAtSelfRefs`), or `ORPHAN` (no covering sym). With `--apply`, rewrites EXACT and PARTIAL_CROSS in-place — same byte address, but the reference reads as a direct symbolic ref instead of an opaque offset. |
| `tools/splitBlockAtSelfRefs.py` | Generic block splitter for the PARTIAL_SELF cases left after `auditOffsetRefs.py` — when a typed declaration like `u8 X[N]` / `u32 X[N]` / `Vtx X[N]` is referenced via `(<cast>)((u8*)&X + 0x<offset>)` at a non-zero offset, splits `X` at each unique offset so each chunk becomes its own first-class symbol. Each chunk inherits the parent's element type (alignment-validated against the element size), gets its own `.inc.c` at the parent's same suffix, and references rewrite to `(<cast>)&<chunk_sym>`. Forward externs injected at top. Skips inline-init arrays (where the offset is just C array indexing). Bytes preserved. |
| `tools/retypeSpriteChunks.py` | After `splitBlockAtSelfRefs.py` (or any other split) produces chunks that are reached via a `MObjSub.sprites` pointer-array indirection, retype each chunk as a texture: rename the chunk to `<File>_Tex_0x<abs>` (abs offset from `nm`), switch its include extension to `.tex.inc.c`, and prepend a `/* @tex fmt=… dim=…x… */` annotation derived from the owning MObjSub's `block_fmt`/`block_siz` (offset 0x32–33) and `unk38`/`unk3A` (offset 0x38–3A). Handles both the `G_IM_FMT_*` macro form and the raw-hex form (`0x04, 0x02`). Sanity-checks the dim against chunk size (drops `dim=` if a tile-atlas dim wouldn't fit a single chunk so previewImagesTextures.py size-guesses instead). Propagates the rename to both the shared `.reloc` and any per-version `.jp.reloc`. Accepts u32-typed sprite ptr arrays in addition to `void *X[]` / `MObjSub *X[]`. |

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
| The human-readable expanded view | Run `make reloc-expand-<fid>` (or `reloc-expand-all`) after building. Writes `build/<v>/src/relocData/<fid>_<Name>.c` with Vtx decoded, Gfx as gbi macros, chain pointers resolved to their target symbols. |

Raw-byte wrappers (`u8`/`u16`/`u32` arrays that `#include` a
`.inc.c`) aren't meant to be hand-edited — they're regenerated from
the ROM on every extract. Edit the binary (via PNG override / hex
edit), the surrounding struct declaration, or promote the block to a
more structural representation instead.

---

## Contributing

The remaining work splits into three buckets:

1. **Promote unclassified u8 `.data.inc.c` blocks** (~393 KB across
   ~3,120 blocks in 94 files — the "Truly unclassified" row of the
   table above). Ranked by impact:
   - **Character models** (KirbyModel 30 KB, NessModel 13 KB,
     CaptainModel 12 KB, DonkeyModel 11 KB, YoshiModel 9 KB,
     PikachuModel 9 KB, SamusModel 8 KB, …) — joint-hierarchy bodies
     and per-DL metadata left after the display-list walk. Structural
     typing would need Joint / DObj / AnimJoint recognition from the
     joint tree structure rather than DL content.
   - **Stage File2** (StageYamabukiFile2 31 KB, StageYosterFile2
     22 KB, StageZebesFile2 15 KB, StageLastFile2 11 KB,
     StageJungleFile2 10 KB, …) — collision geometry, layer animation
     tracks, and interleaved texture / palette subsections.
   - **EFCommonEffects1** (29 KB, 42 blocks) — effect parameter
     tables used by the VFX system (`src/ef/*.c`).
   - **SCExplainGraphics** (23 KB), **Bonus2Common** (15 KB),
     **MVOpeningRunCrash** (12 KB), **GRBonus3File2** (12 KB),
     **MVOpeningCliff** (11 KB), **MNTitle** (9 KB), other MVOpening*
     files — scene-specific data.

2. **Promote semantically-named `.data.inc.c` blocks** (~397 KB across
   ~383 blocks in 85 files — the "Semantically named" row). These
   already have meaningful names (Tex_pool, AnimJoint, tex_tiles,
   `*_post`, `*_data`) but still use `.data.inc.c`. The bulk sits in
   StageLastFile2 / GRBonus2FoxFile2 (~111 KB combined — DL-tail
   metadata after the recent merge pass), MVOpening* cutscene files
   (~76 KB combined), and ITCommonObject (47 KB of per-item
   structural tails after symbolizeRelocFile.py promotion).

3. **Finish typing remaining struct bitfield tails**. The `WPAttributes` 52-byte
   layout is fully verified (used by 8 hand-typed Special1 / Lizardon
   files and 11 promoted ITCommonData blobs). `ITAttributes` 72-byte
   layout has the visible fields (size, angle, ks, dmg, elem) verified
   via empirical IDO test fixtures, but the bitfield tail at 0x38+
   doesn't reduce to a clean MSB-first packing — see the comment block
   above `struct ITAttributes` in `src/it/ittypes.h`. All 33 promotable
   ITAttributes blobs in `ITCommonData` (fid 251) are now typed; only
   Sawamura's `shield_damage=30` remains as a commented-out struct due
   to the IDO `s32:8` second-bitfield-run static-init bug. All 6
   `ITAttackEvent[4]` arrays are also typed with decoded fields.

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
# symbolic chain pointers) → build/<v>/src/relocData/<fid>_<Name>.c
make reloc-expand-<fid> RELOC_DATA=1
make reloc-expand-all RELOC_DATA=1
```
