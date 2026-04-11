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
| Typed manifests | 139 | Mixed-content files (sprites + DObjDesc + AnimJoint + MObjSub) |
| Typed spritelists | 89 | Sprite-only files with named sprite structs |
| Typed AnimJoint | 1773 | Per-joint `u16[]` AObjEvent16 scripts with `ftAnim*` macros |
| Typed MainMotion | 9 | `u32[]` ftMotionCommand subaction scripts with named arrays |
| Typed ShieldPose | 11 | Figatree pointer arrays + AObjEvent16 per-joint data |
| **Raw u32 blobs** | **111** | Unstructured hex dumps — builds correctly but not human-readable |
| **Typed total** | **2021 (94.8%)** | |

### Remaining raw u32 blobs (111 files)

These build and match but are opaque hex. Each needs reverse engineering
or block descriptions added to `relocFileDescriptions.us.txt`.

| Category | Files | Bytes | What's needed |
|---|---|---|---|
| Stage File2/File3/File4 | 54 | ~1 MB | Block descriptions for DObjDesc, DisplayList, Vtx, texture regions |
| Fighter Main | 20 | 33 KB | FTAttributes/hitbox structure from `FTData` in ftdata.c |
| Fighter Model | 14 | 209 KB | Block descriptions → manifest pipeline handles the rest |
| Fighter Special | 6 | 6 KB | Small mixed DObjDesc + texture files |
| Stage images | 4 | 9 KB | Texture format identification (width/height/format) |
| Item/object | 2 | 96 KB | IFCommonObject, ITCommonObject — complex mixed data |
| Transition/opening | 2 | 262 KB | File 71 (MVOpeningYamabuki) has fixRelocChain overflow |
| Bonus/target | 2 | 5 KB | ITBonus1Object + header |
| Non-standard anim | 2 | 5 KB | FTSamusAnimRollF/B — non-standard AnimJoint format |
| Other | 5 | 36 KB | MNBackupClear, MarioSecondaryImage, FoxUnknown, FTCommonMoveset, NCommonTexture |

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
111 raw `u32[]` blobs into structurally typed source.

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
