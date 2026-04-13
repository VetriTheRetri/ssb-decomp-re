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
| Typed Fighter Main | 27 | `FTAttributes` struct initializers + typed hitbox / throw arrays |
| Typed MainMotion | 14 | `u32[]` ftMotionCommand subaction scripts with named arrays |
| Typed ShieldPose | 11 | Figatree pointer arrays + AObjEvent16 per-joint data |
| Typed AnimJoint | 1775 | Per-joint `u16[]` AObjEvent16 scripts with `ftAnim*` macros |
| Typed manifests | 66 | Mixed-content files (sprites + DObjDesc + AnimJoint + MObjSub) |
| Typed spritelists | 89 | Sprite-only files with named sprite structs |
| **Typed total** | **1982 (92.97%)** | |
| **Raw u32 blobs** | **150** | Unstructured hex dumps — builds correctly but not human-readable |
| **Total** | **2132** | |

### Remaining raw u32 blobs (150 files, ~1.6 MB)

These build and match but are opaque hex. Each category needs either
block descriptions added to `tools/relocFileDescriptions.us.txt` (so
`tools/genRelocDataC.py` can decompose into typed sprite / DObjDesc /
DisplayList / Vtx blocks) or manual typing against an engine-side struct.

| Category | Files | Bytes | Blockers / notes |
|---|---:|---:|---|
| Stage File2/File3/File4          |  23 |  550,848 | DObjDesc / DisplayList / Vtx / texture decomposition |
| Stage Map (`GR*Map`)             |  41 |    8,560 | Small map-layout files, uniform 176–832 bytes each |
| Bonus stage File2/File3          |  26 |  400,768 | Same pipeline as stage File2, per-character bonus rooms |
| Fighter Model (N-variants, etc.) |  14 |  209,472 | Display-list / Vtx / texture blocks for "normal" fighter models |
| Fighter Special                  |  13 |    7,008 | Small mixed DObjDesc + texture files |
| Opening / movie                  |  10 |  266,656 | `MVOpeningYamabuki` (257 KB) hit a fixRelocChain overflow historically |
| Item / object                    |   5 |  103,888 | `IFCommonObject`, `ITCommonObject` — complex mixed data |
| Common textures                  |   4 |    8,704 | `Bonus1CommonImages1..4` |
| Stage Beta (Pupupu prototype)    |   2 |   17,056 | Early beta stage data, likely obsolete DObjDesc/texture |
| Scene / UI                       |   2 |    6,768 | `SCExplainMain`, `SC1PTrainingMode` |
| Stage images                     |   3 |   43,440 | Texture format identification (width/height/format) |
| Other                            |   7 |    8,480 | See section 8 below |

#### Full list — every file with raw u32 blobs

Each file is grouped by category. `Kind` is `.c` if the file is a
hand-written / auto-generated master C source, or `.manifest` if it's a
manifest with only `.data.c` blocks (no typed sprite / DObjDesc / etc.).

##### 1. Stage images (3 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 100 | `StagePupupuBetaImages` | .c | 10,176 |
| 103 | `StagePupupuImages` | .c | 12,224 |
| 110 | `StageYosterImages` | .c | 21,040 |

##### 2. Stage Beta (Pupupu prototype) (2 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 101 | `StagePupupuBeta1` | .c | 6,560 |
| 102 | `StagePupupuBeta2` | .c | 10,496 |

##### 3. Stage File2/File3/File4 (23 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 104 | `StagePupupuFile2` | .c | 17,392 |
| 105 | `StageZebesFile2` | .c | 57,184 |
| 106 | `StageCastleFile2` | .c | 17,696 |
| 107 | `StageInishieFile2` | .c | 27,792 |
| 108 | `StageJungleFile2` | .c | 62,944 |
| 109 | `StageSectorFile2` | .c | 47,120 |
| 111 | `StageYosterFile2` | .c | 47,408 |
| 112 | `StageYamabukiFile2` | .c | 66,160 |
| 113 | `StageHyruleFile2` | .c | 26,768 |
| 114 | `StageLastFile2` | .c | 76,128 |
| 115 | `StageExplainFile2` | .c | 3,680 |
| 116 | `StageBattlefieldFile2` | .c | 17,328 |
| 117 | `StageMetalFile2` | .c | 16,320 |
| 118 | `StageYosterSmallFile2` | .c | 17,744 |
| 152 | `StagePupupuFile3` | .c | 14,080 |
| 153 | `StageSectorFile3` | .c | 7,680 |
| 154 | `StageYosterFile3` | .c | 1,712 |
| 155 | `StageInishieFile3` | .c | 5,136 |
| 156 | `StageCastleFile3` | .c | 64 |
| 157 | `StageZebesFile3` | .c | 3,536 |
| 158 | `StageJungleFile3` | .c | 3,296 |
| 159 | `StageYamabukiFile3` | .c | 10,976 |
| 160 | `StageYamabukiFile4` | .c | 2,704 |

##### 4. Stage Map (41 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 255 | `GRPupupuMap` | .manifest | 192 |
| 256 | `GRPupupuSmallMap` | .manifest | 192 |
| 257 | `GRZebesMap` | .manifest | 224 |
| 258 | `GRPupupuTestMap` | .manifest | 192 |
| 259 | `GRCastleMap` | .manifest | 192 |
| 260 | `GRInishieMap` | .manifest | 368 |
| 261 | `GRJungleMap` | .manifest | 224 |
| 262 | `GRSectorMap` | .manifest | 304 |
| 263 | `GRYosterMap` | .manifest | 192 |
| 264 | `GRYamabukiMap` | .manifest | 832 |
| 265 | `GRHyruleMap` | .manifest | 224 |
| 266 | `GRLastMap` | .manifest | 176 |
| 267 | `GRExplainMap` | .manifest | 176 |
| 268 | `GRZakoMap` | .manifest | 192 |
| 269 | `GRMetalMap` | .manifest | 192 |
| 270 | `GRYosterSmallMap` | .manifest | 192 |
| 271 | `GRBonus1MarioMap` | .manifest | 176 |
| 272 | `GRBonus1FoxMap` | .manifest | 176 |
| 273 | `GRBonus1DonkeyMap` | .manifest | 176 |
| 274 | `GRBonus1SamusMap` | .manifest | 176 |
| 275 | `GRBonus1LuigiMap` | .manifest | 176 |
| 276 | `GRBonus1LinkMap` | .manifest | 176 |
| 277 | `GRBonus1YoshiMap` | .manifest | 176 |
| 278 | `GRBonus1CaptainMap` | .manifest | 176 |
| 279 | `GRBonus1KirbyMap` | .manifest | 176 |
| 280 | `GRBonus1PikachuMap` | .manifest | 176 |
| 281 | `GRBonus1PurinMap` | .manifest | 176 |
| 282 | `GRBonus1NessMap` | .manifest | 176 |
| 283 | `GRBonus2MarioMap` | .manifest | 176 |
| 284 | `GRBonus2FoxMap` | .manifest | 176 |
| 285 | `GRBonus2DonkeyMap` | .manifest | 176 |
| 286 | `GRBonus2SamusMap` | .manifest | 176 |
| 287 | `GRBonus2LuigiMap` | .manifest | 176 |
| 288 | `GRBonus2LinkMap` | .manifest | 176 |
| 289 | `GRBonus2YoshiMap` | .manifest | 176 |
| 290 | `GRBonus2CaptainMap` | .manifest | 176 |
| 291 | `GRBonus2KirbyMap` | .manifest | 176 |
| 292 | `GRBonus2PikachuMap` | .manifest | 176 |
| 293 | `GRBonus2PurinMap` | .manifest | 176 |
| 294 | `GRBonus2NessMap` | .manifest | 176 |
| 295 | `GRBonus3Map` | .manifest | 272 |

##### 5. Bonus stage File2/File3 (26 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 124 | `GRBonus1MarioFile2` | .c | 9,152 |
| 125 | `GRBonus1FoxFile2` | .c | 10,080 |
| 126 | `GRBonus1DonkeyFile2` | .c | 9,392 |
| 127 | `GRBonus1SamusFile2` | .c | 7,584 |
| 128 | `GRBonus1LuigiFile2` | .c | 8,832 |
| 129 | `GRBonus1LinkFile2` | .c | 10,720 |
| 130 | `GRBonus1YoshiFile2` | .c | 13,536 |
| 131 | `GRBonus1CaptainFile2` | .c | 7,648 |
| 132 | `GRBonus1KirbyFile2` | .c | 10,112 |
| 133 | `GRBonus1PikachuFile2` | .c | 11,488 |
| 134 | `GRBonus1PurinFile2` | .c | 9,808 |
| 135 | `GRBonus1NessFile2` | .c | 12,496 |
| 137 | `GRBonus2MarioFile2` | .c | 15,648 |
| 138 | `GRBonus2FoxFile2` | .c | 68,624 |
| 139 | `GRBonus2DonkeyFile2` | .c | 13,760 |
| 140 | `GRBonus2SamusFile2` | .c | 10,736 |
| 141 | `GRBonus2LuigiFile2` | .c | 16,032 |
| 142 | `GRBonus2LinkFile2` | .c | 18,768 |
| 143 | `GRBonus2YoshiFile2` | .c | 14,352 |
| 144 | `GRBonus2CaptainFile2` | .c | 20,368 |
| 145 | `GRBonus2KirbyFile2` | .c | 15,568 |
| 146 | `GRBonus2PikachuFile2` | .c | 18,672 |
| 147 | `GRBonus2PurinFile2` | .c | 21,728 |
| 148 | `GRBonus2NessFile2` | .c | 16,576 |
| 149 | `GRBonus3File2` | .c | 26,768 |
| 162 | `GRBonus3File3` | .c | 2,320 |

##### 6. Fighter Model (14 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 301 | `NMarioModel` | .c | 11,952 |
| 303 | `NFoxModel` | .c | 13,008 |
| 304 | `NYoshiModel` | .c | 13,312 |
| 305 | `NKirbyModel` | .c | 10,032 |
| 306 | `NPurinModel` | .c | 10,336 |
| 307 | `NPikachuModel` | .c | 11,344 |
| 308 | `NDonkeyModel` | .c | 12,752 |
| 309 | `NSamusModel` | .c | 19,408 |
| 310 | `NLinkModel` | .c | 13,872 |
| 311 | `NCaptainModel` | .c | 12,832 |
| 312 | `NNessModel` | .c | 13,792 |
| 317 | `DonkeyModel` | .c | 54,784 |
| 326 | `LinkBoomerangModel` | .c | 464 |
| 344 | `BossModel` | .c | 11,584 |

##### 7. Fighter Special (13 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 204 | `MarioSpecial1` | .manifest | 64 |
| 210 | `FoxSpecial1` | .manifest | 64 |
| 218 | `SamusSpecial1` | .manifest | 64 |
| 222 | `LuigiSpecial1` | .manifest | 64 |
| 226 | `LinkSpecial1` | .manifest | 64 |
| 230 | `KirbySpecial1` | .c | 48 |
| 240 | `NessSpecial1` | .manifest | 128 |
| 244 | `PikachuSpecial1` | .manifest | 112 |
| 297 | `MarioSpecial3` | .c | 656 |
| 316 | `FoxSpecial4` | .c | 144 |
| 321 | `SamusSpecial3` | .c | 848 |
| 325 | `LinkSpecial3` | .c | 1,776 |
| 336 | `NessSpecial3` | .c | 2,976 |

##### 8. Other (7 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 47 | `LBTransitionPaperAirplane` | .c | 4,176 |
| 199 | `SYKseg1Validate` | .manifest | 64 |
| 200 | `SYSignValidate` | .manifest | 80 |
| 201 | `FTCommonMoveset` | .c | 2,096 |
| 299 | `MarioSecondaryImage` | .c | 192 |
| 302 | `NCommonTexture` | .c | 560 |
| 315 | `FoxUnknown` | .c | 1,312 |

##### 9. Common textures (4 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 120 | `Bonus1CommonImages1` | .c | 2,672 |
| 121 | `Bonus1CommonImages2` | .c | 2,032 |
| 122 | `Bonus1CommonImages3` | .c | 976 |
| 123 | `Bonus1CommonImages4` | .c | 3,024 |

##### 10. Opening / movie (10 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 56 | `MVOpeningRoomScene1` | .manifest | 1,008 |
| 57 | `MVOpeningRoomScene2` | .manifest | 80 |
| 58 | `MVOpeningRoomScene3` | .manifest | 112 |
| 59 | `MVOpeningRoomScene4` | .manifest | 224 |
| 60 | `MVOpeningRunMain` | .manifest | 240 |
| 64 | `MVOpeningJungle` | .manifest | 400 |
| 65 | `MVOpeningCommon` | .manifest | 384 |
| 71 | `MVOpeningYamabuki` | .c | 257,696 |
| 72 | `MVOpeningClashFighters` | .manifest | 5,248 |
| 76 | `MVEnding` | .manifest | 1,264 |

##### 11. Scene / UI (2 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 252 | `SCExplainMain` | .manifest | 6,096 |
| 254 | `SC1PTrainingMode` | .manifest | 672 |

##### 12. Item / object (5 files)

| ID | Name | Kind | Bytes |
|---:|---|---|---:|
| 39 | `IFCommonObject` | .c | 16,352 |
| 86 | `ITCommonObject` | .c | 79,584 |
| 150 | `ITBonus1Object` | .c | 4,480 |
| 251 | `ITCommonData` | .manifest | 3,392 |
| 253 | `ITBonus1ObjectHeader` | .c | 80 |

The raw count and category breakdown can be regenerated any time with:

```bash
python3 - <<'PY'
import os, re
R = "src/relocData"
T = re.compile(r'\b(ftAnim[A-Z]\w*|ftMotionCommand\w*|FTAttributes|FTThrowHitDesc'
               r'|Sprite|Bitmap|DObjDesc|MObjSub|AObjEvent\d+|Gfx|Vtx'
               r'|FTSkeleton|FtStatusDesc)|#include\s+<ft/')
def is_raw_c(p):
    t = re.sub(r'/\*.*?\*/','',open(p).read(),flags=re.DOTALL)
    return not T.search(re.sub(r'//[^\n]*','',t))
def is_raw_m(n):
    d = f"{R}/{n}"
    return not any(f.endswith(('.sprite.c','.dobjdesc.c','.mobjsub.c',
                               '.palette.c','.dl.c','.vtx.c'))
                   for f in os.listdir(d)) if os.path.isdir(d) else True
raw = 0
for fn in os.listdir(R):
    m = re.match(r'(\d+)_(\w+)\.c$', fn)
    if m and not fn.endswith('.jp.c') and is_raw_c(f"{R}/{fn}"): raw += 1
    m = re.match(r'(\d+)_(\w+)\.manifest$', fn)
    if m and is_raw_m(m.group(2)): raw += 1
print(f"raw: {raw} / 2132")
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

| Extension | What |
|---|---|
| `<id>_<Name>.c` | Hand-written or raw blob C source |
| `<id>_<Name>.manifest` | Block ordering for mixed-content files |
| `<id>_<Name>.spritelist` | Sprite-only block ordering |
| `<id>_<Name>.reloc` | Relocation chain metadata (symbolic labels) |
| `<id>_<Name>.jp.c` | JP-specific override (used when content differs) |
| `<Name>/<block>.sprite.c` | Sprite struct + Bitmap[] + texture `#include` |
| `<Name>/<block>.data.c` | Raw data arrays for gaps/untyped regions |
| `<Name>/<block>.dobjdesc.c` | DObjDesc[] arrays |
| `<Name>/<block>.mobjsub.c` | MObjSub material structs |
| `<Name>/<block>.dl.c` | F3DEX display lists |
| `<Name>/<block>.vtx.c` | Vtx[] vertex arrays |
| `<Name>/<block>.palette.c` | 16-color RGBA5551 palettes |
| `<Name>/<block>.png` | Optional texture override (auto-encoded on build) |

---

## Tools

| Tool | Purpose |
|---|---|
| `tools/genRelocDataC.py` | Binary → C auto-generator (with block discovery) |
| `tools/genRelocMaster.py` | Manifest/spritelist → master `.c` (build-time) |
| `tools/genRelocSymbols.py` | Generate `reloc_data.h` + linker symbols |
| `tools/fixRelocChain.py` | Post-compile reloc chain rebuilder |
| `tools/relocSpriteTool.py` | Texture extraction + PNG conversion |
| `tools/promoteAnimJoints.py` | AnimJoint → typed AObjEvent16 with macros |
| `tools/promoteMotionFiles.py` | MainMotion/ShieldPose → typed scripts |
| `tools/promoteAnimFiles.py` | Batch raw blob promotion for anim files |
| `tools/relocData.py` | Original extract/assemble tool |
| `tools/verifyRelocOffsets.py` | Per-file binary verification |

---

## Contributing

All files already build from C. The remaining work is converting the
**150 raw `u32[]` blobs** (~1.6 MB, 7.03% of the segment) into
structurally typed source.

**To type a raw blob file:**

1. Study how the game loads the file (check `ftdata.c`, `ftmanager.c`,
   stage loading code, etc.)
2. Add block entries to `tools/relocFileDescriptions.us.txt`
3. Run `python3 tools/genRelocDataC.py <id> --extract-data`
4. Build: `make RELOC_DATA=1 -j$(nproc)`
5. Verify: `cmp build/smashbrothers.us.z64 baserom.us.z64`

**To edit a promoted file:**

- **Replace a sprite:** save a PNG at `<Name>/<block>.<fmt>.png`
- **Tweak structs:** edit `.sprite.c` / `.dobjdesc.c` / `.mobjsub.c`
- **Reorder blocks:** edit the `.manifest` or `.spritelist`
