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

## Important Notes

- This is a **matching decomp** — the compiled ROM must be byte-identical to the original
- Assembly in `asm/nonmatchings/` is authoritative for unmatched functions
- Don't modify generated files in `.splat/` or `build/`
- `baserom.us.z64` must be present but is not committed (copyrighted ROM)
- After modifying `smashbrothers.us.yaml` or `symbols/`, run `make init`
