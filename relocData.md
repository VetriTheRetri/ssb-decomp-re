# relocData

The **relocData** segment is a ~9.5 MB region near the end of the ROM
containing 2,132 asset files (US) / 2,107 (JP) — sprites, animations,
hitbox data, stage models, texture atlases, etc.

All files build from C source with `make RELOC_DATA=1`. The output is
byte-identical to the baserom.

## Status

| Version | Building from C | Total | ROM matches |
|---|---|---|---|
| US      | **2132/2132** (100%) | 2132 | yes |
| JP      | **2107/2107** (100%) | 2107 | yes |

### Structural decomposition

| Source type | Files | Description |
|---|---|---|
| Typed C files (struct initializers) | 1,861 | `FTAttributes` / `MPGroundData` / `ftMotionCommand` / AObjEvent16 / sprite structs |
| Typed manifests (structural blocks) | 121 | Mixed-content files decomposed into sprite / DObjDesc / DL / Vtx / MObjSub / palette blocks |
| Typed spritelists | 89 | Sprite-only files with named sprite structs |
| **Typed total** | **2,071 (97.1%)** | |
| **Raw blobs** | **61 (2.9%)** | Single inline `u8`/`u32` array or manifest with only gap blocks |
| **Total** | **2,132** | |

### Copyrighted game bytes extracted from the ROM at build time

Nothing in `src/relocData/` carries raw vertex / palette / texture /
display-list bytes. Every committed `.vtx.c`, `.palette.c`, `.dl.c`, and
`.data.c` (Tex_* + gap_*) file is a thin C wrapper that `#include`s a
companion `.inc.c` generated from `assets/relocData/<fid>.vpk0.bin` on
every `make extract`:

    Vtx X[N] = { #include <Sub/X.vtx.inc.c>   };
    u16 X[16] = { #include <Sub/X.palette.inc.c> };
    u8  X[N]  = { #include <Sub/X.{tex,data}.inc.c> };
    Gfx X[N]  = { #include <Sub/X.dl.inc.c>    };

The `.dl.inc.c` files are disassembled through `pygfxd` into readable
`gsSP* / gsDP*` macro calls (guarded by a byte-roundtrip check).
`Tex_*` blocks whose format/dimensions are recoverable from their
parent display list also produce a `.png` preview via `n64img`.

### Raw blobs remaining (61 files, ~545 KB)

These are either (a) untyped manifests whose only block is a single
`gap_*.data.c`, or (b) inline `.c` files that haven't been promoted to
a manifest at all. They build and match, but they aren't structurally
decomposed.

| Category | Files | Bytes | Notes |
|---|---:|---:|---|
| Opening / movie                 | 10 | 266,656 | `MVOpeningYamabuki` (257 KB) — hit a `fixRelocChain` overflow historically |
| Item / object                   |  5 | 102,592 | `IFCommonObject`, `ITCommonObject` — complex mixed item tables |
| Stage File2/3/4                 | 11 |  83,904 | `StagePupupuFile2`, `StageBattlefieldFile2`, and the File3/File4 tails |
| Stage images                    |  3 |  43,440 | `StagePupupuImages`, `StageYosterImages`, `StagePupupuBetaImages` |
| Pupupu beta                     |  2 |  17,056 | Beta prototype geometry files |
| Other                           |  7 |   9,776 | `LBTransitionPaperAirplane`, `FTCommonMoveset`, misc headers |
| Common textures                 |  4 |   8,704 | `Bonus1CommonImages1..4` |
| Scene / UI                      |  2 |   6,768 | `SCExplainMain`, `SC1PTrainingMode` |
| Bonus stage                     |  2 |   2,592 | `GRBonus3File3`, `GRBonus3Map` |
| Stage Map (`GR*Map`)            |  6 |   2,176 | `GRZebesMap`, `GRInishieMap`, etc. — 224–832 B each |
| Fighter Special                 |  8 |     608 | `*Special1` 48–128 B weapon attribute tables |
| Fighter Model                   |  1 |     464 | `LinkBoomerangModel` — 464 B, too small for DObjDesc scan |
| **Raw total**                   | **61** | **544,736** | |

### Gap bytes inside already-typed manifests (1.76 MB, 47.8% of typed bytes)

Typed files often still have `gap_*.data.c` blocks for regions we haven't
classified — usually vertex pools / textures / palettes referenced by
display lists through segmented addresses the DL walker can't follow.
These aren't "raw" in the blob sense (the file has structural typing
around them) but they're the next big pool of bytes to break up.

| Category | Files | Gap bytes |
|---|---:|---:|
| Fighter Model (typed)          | 18 |   502,044 |
| Opening / movie (typed)        | 12 |   356,328 |
| Bonus stage File2/3 (typed)    | 25 |   292,652 |
| Stage File2/3/4 (typed)        | 13 |   286,272 |
| Transition (`LBTransition*`)   | 11 |   200,904 |
| Effects (`EFCommon*`)          |  3 |    43,640 |
| Scene / UI (typed)             |  2 |    25,384 |
| Fighter Special (typed)        | 13 |    21,884 |
| Menu / misc                    | 16 |    32,492 |
| **Total**                      | **113** | **1,761,600** |

Worst offenders (percent gap within the typed file):

| ID | Name | Gap | Total | Gap % |
|---:|---|---:|---:|---:|
|  50 | `LBTransitionCurtain`     |  31,456 |  32,368 | 97.2% |
|  45 | `LBTransitionSudare1`     |  29,864 |  30,768 | 97.1% |
|  40 | `LBTransitionAeroplane`   |  46,072 |  47,600 | 96.8% |
| 149 | `GRBonus3File2`           |  25,112 |  26,768 | 93.8% |
| 338 | `YoshiModel`              |  40,868 |  44,256 | 92.3% |
| 328 | `KirbyModel`              | 108,488 | 120,864 | 89.8% |
| 112 | `StageYamabukiFile2`      |  59,200 |  66,160 | 89.5% |
|  67 | `MVOpeningYoster`         |  45,488 |  51,616 | 88.1% |
| 108 | `StageJungleFile2`        |  50,888 |  62,944 | 80.8% |
| 317 | `DonkeyModel`             |  41,368 |  54,784 | 75.5% |
| 320 | `SamusModel`              |  43,452 |  58,704 | 74.0% |
| 332 | `CaptainModel`            |  37,160 |  51,344 | 72.4% |
| 341 | `PikachuModel`            |  29,948 |  39,984 | 74.9% |
| 324 | `LinkModel`               |  52,372 |  73,584 | 71.2% |
| 323 | `LuigiModel`              |  23,860 |  32,528 | 73.4% |

### Untyped-blob full list

`Kind` is `.c` if the file is a single inline array, or `.manifest` if
it's a manifest whose only blocks are `gap_*.data.c`.

##### Opening / movie (10 files, 266,656 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
|  56 | `MVOpeningRoomScene1`   | .manifest |   1,008 |
|  57 | `MVOpeningRoomScene2`   | .manifest |      80 |
|  58 | `MVOpeningRoomScene3`   | .manifest |     112 |
|  59 | `MVOpeningRoomScene4`   | .manifest |     224 |
|  60 | `MVOpeningRunMain`      | .manifest |     240 |
|  64 | `MVOpeningJungle`       | .manifest |     400 |
|  65 | `MVOpeningCommon`       | .manifest |     384 |
|  71 | `MVOpeningYamabuki`     | .c        | 257,696 |
|  72 | `MVOpeningClashFighters`| .manifest |   5,248 |
|  76 | `MVEnding`              | .manifest |   1,264 |

##### Item / object (5 files, 102,592 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
|  39 | `IFCommonObject`        | .c |  16,352 |
|  86 | `ITCommonObject`        | .c |  79,584 |
| 150 | `ITBonus1Object`        | .c |   4,480 |
| 201 | `FTCommonMoveset`       | .c |   2,096 |
| 253 | `ITBonus1ObjectHeader`  | .c |      80 |

##### Stage File2/3/4 (11 files, 83,904 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 104 | `StagePupupuFile2`      | .manifest | 17,392 |
| 116 | `StageBattlefieldFile2` | .c        | 17,328 |
| 152 | `StagePupupuFile3`      | .c        | 14,080 |
| 153 | `StageSectorFile3`      | .c        |  7,680 |
| 154 | `StageYosterFile3`      | .c        |  1,712 |
| 155 | `StageInishieFile3`     | .c        |  5,136 |
| 156 | `StageCastleFile3`      | .c        |     64 |
| 157 | `StageZebesFile3`       | .c        |  3,536 |
| 158 | `StageJungleFile3`      | .c        |  3,296 |
| 159 | `StageYamabukiFile3`    | .c        | 10,976 |
| 160 | `StageYamabukiFile4`    | .c        |  2,704 |

##### Stage images (3 files, 43,440 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 100 | `StagePupupuBetaImages` | .c | 10,176 |
| 103 | `StagePupupuImages`     | .c | 12,224 |
| 110 | `StageYosterImages`     | .c | 21,040 |

##### Pupupu beta (2 files, 17,056 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 101 | `StagePupupuBeta1` | .c |  6,560 |
| 102 | `StagePupupuBeta2` | .c | 10,496 |

##### Other (7 files, 9,776 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
|  47 | `LBTransitionPaperAirplane` | .c        | 4,176 |
| 199 | `SYKseg1Validate`           | .manifest |    64 |
| 200 | `SYSignValidate`            | .manifest |    80 |
| 251 | `ITCommonData`              | .manifest | 3,392 |
| 299 | `MarioSecondaryImage`       | .c        |   192 |
| 302 | `NCommonTexture`            | .c        |   560 |
| 315 | `FoxUnknown`                | .c        | 1,312 |

##### Common textures (4 files, 8,704 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 120 | `Bonus1CommonImages1` | .c | 2,672 |
| 121 | `Bonus1CommonImages2` | .c | 2,032 |
| 122 | `Bonus1CommonImages3` | .c |   976 |
| 123 | `Bonus1CommonImages4` | .c | 3,024 |

##### Scene / UI (2 files, 6,768 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 252 | `SCExplainMain`    | .manifest | 6,096 |
| 254 | `SC1PTrainingMode` | .manifest |   672 |

##### Bonus stage (2 files, 2,592 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 162 | `GRBonus3File3` | .c        | 2,320 |
| 295 | `GRBonus3Map`   | .manifest |   272 |

##### Stage Map (6 files, 2,176 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 257 | `GRZebesMap`    | .manifest | 224 |
| 260 | `GRInishieMap`  | .manifest | 368 |
| 261 | `GRJungleMap`   | .manifest | 224 |
| 262 | `GRSectorMap`   | .manifest | 304 |
| 264 | `GRYamabukiMap` | .manifest | 832 |
| 265 | `GRHyruleMap`   | .manifest | 224 |

##### Fighter Special (8 files, 608 B)

All `*Special1` files — small `WeaponAttributes` headers.

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 204 | `MarioSpecial1`    | .manifest |  64 |
| 210 | `FoxSpecial1`      | .manifest |  64 |
| 218 | `SamusSpecial1`    | .manifest |  64 |
| 222 | `LuigiSpecial1`    | .manifest |  64 |
| 226 | `LinkSpecial1`     | .manifest |  64 |
| 230 | `KirbySpecial1`    | .c        |  48 |
| 240 | `NessSpecial1`     | .manifest | 128 |
| 244 | `PikachuSpecial1`  | .manifest | 112 |

##### Fighter Model (1 file, 464 B)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 326 | `LinkBoomerangModel` | .c | 464 |

The raw-count + gap-byte breakdown can be regenerated any time with:

```bash
python3 - <<'PY'
import os, re, sys
sys.path.insert(0, 'tools')
from genRelocMaster import parse_manifest, compute_block_size
R = "src/relocData"
TYPED = ('.sprite.c','.dobjdesc.c','.dl.c','.vtx.c','.mobjsub.c','.palette.c')
sp = [R, 'build/src/relocData']
raw = typed = total_gap = 0
for fn in sorted(os.listdir(R)):
    full = os.path.join(R, fn)
    m = re.match(r'(\d+)_(\w+)\.manifest$', fn)
    if m:
        has_typed = False
        for line in open(full):
            line = line.strip()
            if line and not line.startswith('#') and not line.startswith('pad ') and line.endswith(TYPED):
                has_typed = True; break
        (typed if has_typed else raw).__iadd__ if False else None
        if has_typed:
            typed += 1
            for kind, payload in parse_manifest(full):
                if kind == 'block' and payload.startswith('gap_'):
                    try: total_gap += compute_block_size(os.path.join(R, m.group(2), payload), sp)
                    except: pass
        else:
            raw += 1
print(f"raw={raw} typed={typed} gap_bytes={total_gap:,}")
PY
```

---

## Build pipeline

```
src/relocData/<id>_<Name>.c        ─── IDO 7.1 ──→  <id>.o
src/relocData/<id>_<Name>.reloc    ─── fixRelocChain.py ──→  patched .data
                                                      ↓
                                              objcopy → <id>.bin
                                                      ↓
                                      vpk0cmd compress (if id < 499)
                                                      ↓
                                         relocData.bin → ROM
```

### Source file types

All wrapper blocks (`.vtx.c`, `.palette.c`, `.dl.c`, `.data.c`)
`#include` a companion `.inc.c` holding the raw game bytes.
Everything under `build/src/relocData/` is gitignored and regenerated
from `assets/relocData/<fid>.vpk0.bin` at every `make extract`.

| Extension | Location | What |
|---|---|---|
| `<id>_<Name>.c` | committed | Hand-written master C source (FTAttributes / MPGroundData / etc.) |
| `<id>_<Name>.manifest` | committed | Block ordering + `pad N` entries for mixed-content files |
| `<id>_<Name>.spritelist` | committed | Sprite-only block ordering |
| `<id>_<Name>.reloc` | committed | Relocation chain metadata (symbolic labels) |
| `<id>_<Name>.jp.c` | committed | JP-specific master override |
| `<Name>/<block>.sprite.c` | committed | `Sprite` + `Bitmap[]` struct declarations + texture `#include` |
| `<Name>/<block>.dobjdesc.c` | committed | `DObjDesc[]` joint arrays (hand-readable struct initializers) |
| `<Name>/<block>.mobjsub.c` | committed | `MObjSub` material struct initializers |
| `<Name>/<block>.vtx.c` | committed wrapper | `Vtx X[N] = { #include <...vtx.inc.c> }` |
| `<Name>/<block>.palette.c` | committed wrapper | `u16 X[16] = { #include <...palette.inc.c> }` |
| `<Name>/<block>.dl.c` | committed wrapper | `Gfx X[N] = { #include <...dl.inc.c> }` |
| `<Name>/<block>.data.c` | committed wrapper | `u8 X[N] = { #include <....inc.c> }` — Tex / gap / AnimJoint / etc. |
| `<Name>/<block>.*.inc.c` | **build/** | Raw bytes, regenerated at extract. Not in git. |
| `<Name>/<block>.png` | **build/** | Texture preview (sprites via `relocSpriteTool`, typed Tex blocks via `n64img`). Not in git. |
| `<Name>/<block>.png` (user) | committed | Optional user override — a `.png` in `src/` regenerates its `.inc.c` at build time. |

---

## Tools

| Tool | Purpose |
|---|---|
| `tools/genRelocDataC.py` | Binary → C auto-generator. Emits wrapper + inc.c split directly. |
| `tools/genRelocMaster.py` | Manifest/spritelist → master `.c` (build-time). Computes block sizes from wrappers. |
| `tools/genRelocSymbols.py` | Generate `reloc_data.h` + linker symbols from descriptions + manifests. |
| `tools/fixRelocChain.py` | Post-compile reloc chain rebuilder (patches chain pointers from `.reloc` metadata). |
| `tools/relocSpriteTool.py` | Sprite texture extraction + PNG conversion from ROM. |
| `tools/extractRelocInc.py` | Regenerate every typed block's `.inc.c` body from the decompressed ROM segment. Runs at `make extract` time. Uses `pygfxd` for DL macro disassembly and `n64img` for Tex PNG previews. |
| `tools/splitRelocInlineData.py` | One-shot migration: splits a committed inline `.vtx.c` / `.palette.c` / `.dl.c` / `.data.c` into a wrapper + inc.c. Idempotent. |
| `tools/typeFighterModels.py` | Promote N-variant / main fighter models to typed DObjDesc + DL + Vtx blocks. |
| `tools/typeFighterSpecials.py` | Promote fighter Special2/3 files to typed DObjDesc / MObjSub / AnimJoint / MatAnimJoint blocks driven by the `ll*` symbol map. |
| `tools/typeSpecialGaps.py` | Walk each Special2/3 file's typed DLs and carve Vtx / LUT / Tex references out of the `gap_*` bytes. |
| `tools/typeStageMap.py` | Promote `GR*Map` files into `MPGroundData` struct initializers. |
| `tools/typeStageFile2.py` | Promote Stage File2 files using `gr_desc` metadata. |
| `tools/promoteAnimJoints.py` | AnimJoint files → typed `AObjEvent16` scripts with `ftAnim*` macros. |
| `tools/promoteMotionFiles.py` | MainMotion/ShieldPose → typed scripts. |
| `tools/promoteAnimFiles.py` | Batch raw blob promotion for anim files. |
| `tools/relocData.py` | Original extract/assemble tool. |
| `tools/verifyRelocOffsets.py` | Per-file binary verification. |

---

## Contributing

All files build from C and the ROM is byte-identical. The remaining
work is (a) promoting the **61 raw blob files** (~545 KB) into
structurally typed source and (b) carving the **1.76 MB of `gap_*`
bytes** inside already-typed manifests into `Vtx` / `Tex` / `LUT` /
`DisplayList` wrappers.

**To type a raw blob file:**

1. Study how the game loads the file (check `ftdata.c`, `ftmanager.c`,
   `ef/efmanager.c`, stage loading code, etc.)
2. Add block entries to `tools/relocFileDescriptions.us.txt`
3. Run `python3 tools/genRelocDataC.py <id> --extract-data --no-discover`
4. Build: `make RELOC_DATA=1 -j$(nproc)`
5. Verify: `cmp build/smashbrothers.us.z64 baserom.us.z64`

For fighter models and Special2/3 files, the typing tools already
handle most of the work:

    python3 tools/typeFighterModels.py     # all N-variant + main fighter models
    python3 tools/typeFighterSpecials.py   # uses ll* symbols
    python3 tools/typeSpecialGaps.py       # carves Vtx / Tex / LUT from DL refs

**To edit a promoted file:**

- **Replace a sprite:** save a PNG at `src/relocData/<Name>/<block>.<fmt>.png`
- **Tweak structs:** edit `.sprite.c` / `.dobjdesc.c` / `.mobjsub.c`
- **Reorder blocks:** edit the `.manifest` or `.spritelist`

The raw byte wrappers (`.vtx.c`, `.palette.c`, `.dl.c`, Tex_*/gap_*
`.data.c`) aren't meant to be hand-edited — they're regenerated from
the ROM on every extract. Edit the binary or the manifest block
shape instead.
