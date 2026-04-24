# Super Smash Bros. 64 Decompilation

## Project Overview

N64 decompilation of Super Smash Bros. (US version). The goal is to produce C source code that compiles to a byte-identical ROM. Currently ~95.9% code matched with ~30 nonmatching functions remaining, mostly in ovl8 (debug menu overlay).

## Build Commands

```bash
make -j$(nproc)                  # Build the US ROM (parallel)
make init -j$(nproc)             # Full extract + build for US (run after pulling or modifying splat yaml/symbols)
make init -j$(nproc) VERSION=jp  # Full extract + build for JP — always use `make init` when switching versions; a plain `make VERSION=jp` on a tree last extracted for US can fail with missing-symbol linker errors
make clean                       # Clean build artifacts
make extract                     # Re-extract assembly/assets from baserom
make format                      # Run clang-format on source files
make validate                    # Validate build output matches expected
```

Build flags: `NON_MATCHING=1` allows building with non-matching C stubs instead of assembly. `RELOC_DATA=1` compiles relocData files from C source instead of using original binaries. `make report` generates progress reports for decomp.dev.

## Decomp Workflow

### Matching a function
1. Find the function's assembly in `asm/nonmatchings/<module>/<file>/<func_name>.s`
2. Write equivalent C in the corresponding `src/<module>/<file>.c`
3. Build and diff against the baserom:
   - `./livediff.sh <func_name>` - live diffing session (auto-rebuilds on save)
   - `python3 diff.py -mwo <func_name>` - one-shot diff
   - `python3 first_diff.py` - find first diff location
4. Use `./mips_to_c.sh <source_file> <func_name>` to generate initial C from assembly
5. Once matched, remove the `.s` file from `asm/nonmatchings/` and mark as `#pragma GLOBAL_ASM` removal
6. Update `us_report.json` progress

### Key tools
- `livediff.sh` - Live diff session for iterating on a function
- `mips_to_c.sh` - Generate C context + initial decompilation from assembly
- `diff.py` - Diff built ROM against baserom
- `first_diff.py` - Locate first byte difference from baserom
- `tools/m2ctx.py` - Generate context file for mips_to_c

## Code Style

- **Formatting**: GNU-based style via `.clang-format` (tabs, 4-space width, 120 col limit, braces on new lines)
- **Run `make format` before committing**
- **Function names**: `camelCase` with module prefix (`efParticleInitAll`, `dbUiNodeTypeRegisterHandler`)
- **Globals**: `g` prefix (`gEFParticleStructsGObj`)
- **Statics**: `s` prefix (`sEFParticleBanksNum`)
- **Types**: `CamelCase` (`Vec3f`, `dbMenuSprite`)
- **Unknown members**: `unk_<type>_0x<offset>` pattern
- **ROM addresses**: commented above functions/globals as `// 0x80XXXXXX`
- **Section separators**: block comments for GLOBAL/STATIC VARIABLES, FUNCTIONS, etc.

## Source Organization

| Prefix | Module |
|--------|--------|
| `ft` | Fighter system |
| `sc` | Scene management |
| `mn` | Main menu |
| `wp` | Weapon systems |
| `it` | Item systems |
| `ef` | Effects/particles |
| `gr` | Ground/stages |
| `gm` | Game mechanics |
| `mp` | Multiplayer/match |
| `db` | Debug menu |
| `mv` | Movie/opening |
| `sys` | Core system |
| `lb` | Library functions |
| `ovl8` | Debug overlay (active focus) |

## Directory Structure

- `src/` - Decompiled C source
- `asm/nonmatchings/` - Assembly stubs for unmatched functions
- `include/` - Headers and type definitions
- `assets/` - Game assets
- `symbols/` - Symbol definitions for linker
- `relocAssets/` - Relocated asset files
- `.splat/` - Generated linker scripts from splat
- `tools/` - Build tools, scripts, submodules
- `build/` - Build output (not committed)

## Compiler

Uses IDO 7.1 (MIPS) via `tools/ido-recomp/`. Flags: `-O2 -mips2`. The compiler has specific codegen quirks that matter for matching — equivalent C logic may need specific patterns to match IDO's output.

## relocData Pipeline

relocData files are binary asset files (models, stages, effects) containing Gfx display lists, Vtx arrays, textures, palettes, DObjDesc arrays, animations, and other structures. They are decompiled into editable C source.

### Source files (`src/relocData/`)

- **`.c` files** — Hand-authored C source. These drive extraction and expansion. Each declaration's type (`Vtx`, `Gfx`, `u8`, `DObjDLLink`, etc.) tells the extraction tool what format to use for the `.inc.c` file. Only `.c`, `.reloc`, and `.spritelist` files belong here — no subdirectories or generated artifacts.
- **`.reloc` files** — Relocation metadata mapping pointer locations to target symbols. Symbol names here must match the `.c` file exactly.
- **`.spritelist` files** — Drive extraction for sprite-only files; expanded to `.c` files in `build/src/relocData/`.

### Build outputs (`build/src/relocData/`)

- **Expanded `.c` files** — Human-readable view with decoded Gfx macros, Vtx structs, etc. Inline data (Gfx, Vtx) is decoded directly; only textures, palettes, and untyped blobs use `#include`. Use these to identify what type untyped `u8[]` gap blocks actually are.
- **`.inc.c` files** — Generated from the baserom binary during `make extract`. Format depends on the declared C type: `.vtx.inc.c` for `Vtx`, `.dl.inc.c` for `Gfx`, `.palette.inc.c` for `u16` palettes, `.data.inc.c` for raw `u8`/`u32`.
- **`.png` previews** — Generated for texture blocks to help with annotation.

### Typing workflow

To convert an untyped `u8[]` gap block to its actual type:

1. Look at the **expanded** `.c` file in `build/src/relocData/` to see how the data is used (e.g., `gsSPVertex(symbol, N, 0)` → Vtx, `gsDPSetTextureImage(...)` → texture).
2. In the **source** `.c` file in `src/relocData/`, change the type and include path:
   - `u8 dFoo_gap_0xNN[64]` with `.data.inc.c` → `Vtx dFoo_gap_0xNN[4]` with `.vtx.inc.c`
   - Keep the **same symbol name** to preserve relocation chain order (renaming symbols changes the chain threading and breaks matching).
3. Run `make extract` to regenerate the `.inc.c` files in the new format, then rebuild with `RELOC_DATA=1`.
4. Only convert blocks whose size is exactly divisible by the element size (e.g., 16 bytes per Vtx). Blocks that straddle type boundaries (e.g., 56 bytes = 3 Vtx + 8 shared bytes) should stay as `u8`.

### Key types in relocData files

| Type | C type | Inc format | Usage |
|------|--------|------------|-------|
| Vertex data | `Vtx` | `.vtx.inc.c` | Referenced by `gsSPVertex()` |
| Display list | `Gfx` | `.dl.inc.c` | Referenced by `gsSPDisplayList()` or DObjDLLink |
| DL link array | `DObjDLLink` | inline C init | `{ list_id, Gfx* }` pairs, terminator `{ 4, NULL }` |
| DObj descriptor | `DObjDesc` | inline C init | Scene graph entries |
| Palette/TLUT | `u16` | `.palette.inc.c` | Referenced by `gsDPSetTextureImage()` + `gsDPLoadTLUT()` |
| Texture | `u8` | `.data.inc.c` | Referenced by `gsDPSetTextureImage()` + `gsDPLoadBlock()` |
| Animation | `u32` / `u16` | `.data.inc.c` | AnimJoint / AObjEvent16 data |

## Important Notes

- This is a **matching decomp** — the compiled ROM must be byte-identical to the original
- Assembly in `asm/nonmatchings/` is authoritative for unmatched functions
- Don't modify generated files in `.splat/` or `build/`
- `baserom.us.z64` must be present but is not committed (copyrighted ROM)
- After modifying `smashbrothers.us.yaml` or `symbols/`, run `make init`
