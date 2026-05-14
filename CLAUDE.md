# Super Smash Bros. 64 Decompilation

## Project Overview

N64 decompilation of Super Smash Bros. (US version). The goal is to produce C source code that compiles to a byte-identical ROM. Currently ~95.9% code matched with ~30 nonmatching functions remaining, mostly in ovl8 (debug menu overlay).

## Build Commands

```bash
make -j$(nproc)                  # Build the US ROM (parallel)
make init -j$(nproc)             # Full extract + build for US (run on a fresh clone, after pulling, or after modifying splat yaml/symbols)
make init -j$(nproc) VERSION=jp  # Same, for JP
make VERSION=jp -j$(nproc)       # Day-to-day: switch versions with no re-init. Both versions' build/<v>/, asm/<v>/, assets/<v>/, .splat/<v>/, expected/build/<v>/ trees coexist.
make clean                       # Clean the active version's build artifacts
make extract                     # Re-extract the active version's assembly/assets from baserom (preserves the inactive version)
make format                      # Run clang-format on source files
make validate                    # Validate build output matches expected
```

Build flags: `NON_MATCHING=1` allows building with non-matching C stubs instead of assembly. `RELOC_DATA=1` compiles relocData files from C source instead of using original binaries. `make report` generates progress reports for decomp.dev. `VERSION=us` (default) or `VERSION=jp` selects the ROM version; the build is fully version-isolated so swapping between them is incremental.

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

- `src/` - Decompiled C source (shared across versions)
- `include/` - Headers and type definitions
- `symbols/` - Symbol definitions for linker
- `tools/` - Build tools, scripts, submodules
- `relocAssets/` - Relocated asset files
- `asm/<v>/` - Per-version splat output (asm files for unmatched/data segments). `asm/nonmatchings` is a symlink to `asm/<active-version>/nonmatchings` maintained by the Makefile so the existing `#pragma GLOBAL_ASM("asm/nonmatchings/...")` directives in `src/` resolve to the active version's bytes without per-pragma changes.
- `assets/<v>/` - Per-version extracted assets (`relocData/`, `db/`, `ovl8/`, `particles/`, plus splat-extracted `*.tbl.bin`, `fgm.*.bin`, etc.)
- `.splat/<v>/` - Per-version splat-generated linker script + undefined-symbol files
- `build/<v>/` - Per-version build output (.o files, generated headers, etc.). Final ROM/ELF/MAP land at `build/smashbrothers.<v>.{z64,elf,map}` so external tooling (`diff_settings.py`, `decomp.yaml`) finds them at well-known paths.
- `expected/build/<v>/` - Per-version asm-differ snapshot (populated by `make expected VERSION=<v>`)

Per-version trees coexist on disk; `make VERSION=<v>` swaps between them incrementally. None of `build/`, `asm/`, `assets/`, `.splat/`, or `expected/` is committed.

## Compiler

Uses IDO 7.1 (MIPS) via `tools/ido-recomp/`. Flags: `-O2 -mips2`. The compiler has specific codegen quirks that matter for matching — equivalent C logic may need specific patterns to match IDO's output.

## relocData Pipeline

relocData files are binary asset files (models, stages, effects) containing Gfx display lists, Vtx arrays, textures, palettes, DObjDesc arrays, animations, and other structures. They are decompiled into editable C source.

### Source files (`src/relocData/`)

- **`.c` files** — Hand-authored C source. These drive extraction and expansion. Each declaration's type (`Vtx`, `Gfx`, `u8`, `DObjDLLink`, etc.) tells the extraction tool what format to use for the `.inc.c` file. Only `.c`, `.reloc`, and `.spritelist` files belong here — no subdirectories or generated artifacts.
- **`.reloc` files** — Relocation metadata mapping pointer locations to target symbols. Symbol names here must match the `.c` file exactly.
- **`.spritelist` files** — Drive extraction for sprite-only files; expanded to `.c` files in `build/<v>/src/relocData/`.

### Build outputs (`build/<v>/src/relocData/`)

- **Expanded `.c` files** — Human-readable view with decoded Gfx macros, Vtx structs, etc. Inline data (Gfx, Vtx) is decoded directly; only textures, palettes, and untyped blobs use `#include`. Use these to identify what type untyped `u8[]` gap blocks actually are.
- **`.inc.c` files** — Generated from the baserom binary during `make extract`. **The include's filename extension — not the symbol name — is what types the block:** `.vtx.inc.c` ↔ `Vtx`, `.dl.inc.c` ↔ `Gfx`, `.palette.inc.c` ↔ `u16` palette, `.tex.inc.c` ↔ `u8` texture (also enables PNG previews when a DL references the symbol), `.data.inc.c` ↔ untyped raw bytes. A symbol called `dFoo_palette_0xNNNN` that still includes `.data.inc.c` is mistyped — rename the include to `.palette.inc.c` (and re-extract). The naming goal is to **eliminate `.data.inc.c` blocks** in favor of typed extensions wherever the block is a single coherent type.
- **`.png` previews** — Generated for `Tex_0xNNNN.tex.inc.c` blocks. The `Tex_` prefix on the symbol plus the `.tex.inc.c` extension are both required; the previewer also needs a DL elsewhere to set the texture image so it can recover fmt/dim, or an inline `/* @tex fmt=CI4 dim=WxH */` annotation above the decl.

### Typing workflow

To convert an untyped `u8[]` gap block to its actual type:

1. Look at the **expanded** `.c` file in `build/<v>/src/relocData/` to see how the data is used (e.g., `gsSPVertex(symbol, N, 0)` → Vtx, `gsDPSetTextureImage(...)` → texture).
2. In the **source** `.c` file in `src/relocData/`, change the type and include path:
   - `u8 dFoo_gap_0xNN[64]` with `.data.inc.c` → `Vtx dFoo_gap_0xNN[4]` with `.vtx.inc.c`
   - Keep the **same symbol name** to preserve relocation chain order (renaming symbols changes the chain threading and breaks matching).
3. Run `make extract` to regenerate the `.inc.c` files in the new format, then rebuild with `RELOC_DATA=1`.
4. Only convert blocks whose size is exactly divisible by the element size (e.g., 16 bytes per Vtx). Blocks that straddle type boundaries (e.g., 56 bytes = 3 Vtx + 8 shared bytes) should stay as `u8`.
5. **Never hardcode reloc-chain pointer values (`0xXXXXYYYY`).** Any 4-byte slot listed as an `intern`/`extern` entry in the `.reloc` is a chain-encoded pointer that `tools/fixRelocChain.py` rewrites at link time using the `(next_word << 16) | target_word` encoding. In the C source, write these slots as **typed pointer expressions** (e.g. `(MObjSub *)dFoo_sub_0x1234`, `(u16 *)&dFoo_Tex_0x65F0[0x1B0]`, or `NULL`) — never as raw chain hex like `0x0A961972`. The compiler emits whatever address the expression evaluates to; `fixRelocChain.py` overwrites it post-link, so the chosen pointer type only needs to give the slot the right size. Add forward `extern` decls when the target appears later in the file. Same rule applies to `.reloc` files: prefer `dFoo_sub_0x1234` symbolic targets over raw `0x1234` byte offsets so symbol shuffles don't silently desync.
6. **If a chain-encoded pointer in a typed array points into the middle of an existing block, that's a signal to split the parent.** E.g., a palette pointer landing inside `Tex_0xNNNN+0x5E8` usually means the texture has trailing palette frames embedded — split them out into their own typed `u16` arrays so the pointer becomes `dFoo_palette_0xMMMM` instead of `(u16 *)&dFoo_Tex_0xNNNN[0x5E8]`. The `.reloc` raw-offset form (`dFoo_Tex_0xNNNN+0x5E8`) is also a hint that a split is overdue.
7. **aobjEvent32End() indicates the end of an AObjEvent32 script and should never be followed by anything.** If more than one aobjEvent32End() call is decoded into the script then that indicates it is either mistyped or needs to be split after the first aobjEvent32End() occurs.

### Key types in relocData files

| Type | C type | Inc format | Usage |
|------|--------|------------|-------|
| Vertex data | `Vtx` | `.vtx.inc.c` | Referenced by `gsSPVertex()` |
| Display list | `Gfx` | `.dl.inc.c` | Referenced by `gsSPDisplayList()` or DObjDLLink |
| DL link array | `DObjDLLink` | inline C init | `{ list_id, Gfx* }` pairs, terminator `{ 4, NULL }` |
| DObj descriptor | `DObjDesc` | inline C init | Scene graph entries |
| Palette/TLUT | `u16` | `.palette.inc.c` | Referenced by `gsDPSetTextureImage()` + `gsDPLoadTLUT()` |
| Texture | `u8` (`Tex_0xNNNN`) | `.tex.inc.c` | Referenced by `gsDPSetTextureImage()` + `gsDPLoadBlock()`; previewer also writes a `.png` |
| Animation | `u32` / `u16` | `.data.inc.c` or **inline** | AnimJoint / AObjEvent16 data (no dedicated typed extension yet). For `AObjEvent32` scripts (typed `u32`, referenced by `AObjEvent32 *` arrays), prefer **inline** decoding with `aobjEvent32*()` macros over `.data.inc.c` includes — match the surrounding style of already-decoded scripts in the file. The trailing pair `aobjEvent32Wait(N), aobjEvent32End()` (raw bytes `0x040000NN, 0x00000000`) is the giveaway that a block is an AObjEvent32 script; opcode = `(word >> 25) & 0x7F` (0x12 = SetExtValAfterBlock, 0x13 = SetExtValAfter, etc., per `AObjEvent32Kind` in `src/sys/objdef.h`). The block size = (1 + popcount(flags)) words per opcode + 1 word for `Wait` + 1 word for `End`. |
| Untyped raw | `u8` / `u32` | `.data.inc.c` | Last resort — only for blocks that genuinely straddle types |

## Important Notes

- This is a **matching decomp** — the compiled ROM must be byte-identical to the original
- Assembly in `asm/nonmatchings/` is authoritative for unmatched functions
- Don't modify generated files in `.splat/` or `build/`
- `baserom.us.z64` must be present but is not committed (copyrighted ROM)
- After modifying `smashbrothers.us.yaml` or `symbols/`, run `make init`
