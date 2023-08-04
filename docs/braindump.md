# Brain Dump
Collection of things that should be explained more throughly 

## Howtos
### Split File / Use ASM preprocessor
1. Try to find a split point in the ASM. Compiled objects are 0x10 byte aligned,
  so extra `nop`s indicate a file split. Also can look at data + bss to see alignment
2. Create a new asm file by moving `.text`, `.data`, `.rodata`, and `.bss` into a standalone file
3. Ensure `OK` build, and run `utils/cpy_expected.py`
4. Use script to split asm into "C" file:
```
utils/split_asm.py <input.s> game/nonmatching/ <output directory>
```
5. Delete routines from the split asm from step 2
6. Add new object file into `spec.dhall` (named as `src/{overlay}/{filename}.asm.o`). Add it as a new `Obj` before the old asm object.
7. Check that rebuild works.
8. Move over any `.rodata` (strings and arrays) and `.late_rodata` (jump tables and float constants) from split asm file into that data's nonmatching file. This helps with `mips2c`
  * TODO: update asm-preprocessor to make/edit `.d` for included ASM files
  * `.4byte` not supported. Change to `.word` or update asm-preprocessor
  * Also, replace any `.incbin` with the raw data. The data probably is padding zeroes.
  * TODO: `CustomObj` in spec file, as the game expected text -> data -> rodata -> bss
9. Check that build is still OK
10. Move bss over:
```
utils/convert_bss.py <bss.s>
```
11. Check build. If not OK, then there is probably some alignment issue due to the script only outputing basic types and arrays. Check the `.map` and split up arrays to `u32`, `u16`, or `u8` as necessary to match
  * `utils/first_diff.py`
12. Once you get an OK, do a clean build to double check
13. Commit!
14. Create header and start decompiling

### Using mips to c


## Links
* [Online MIPS to C](https://simonsoftware.se/other/mips_to_c.py)
* [IDO O2 Notes](https://hackmd.io/vPmcgdaFSlq4R2mfkq4bJg#Rematerialization-of-constants)
* [IDO Compiler Explorer](https://compiler.queueram.com/)
