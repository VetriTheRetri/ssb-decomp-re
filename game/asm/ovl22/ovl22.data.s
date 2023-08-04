.include "macros.inc"

.section .data

# Data Sections
#  80132500 -> 80132650


glabel D_ovl22_80132500
  .incbin "ovl22.raw.bin", 0x0A00, 0x8

glabel D_ovl22_80132508
  /* A08 12A378 80132508 */
  .asciz "   "
  .balign 4
  /* A0C 12A37C 8013250C */
  .asciz "   "
  .balign 4

glabel D_ovl22_80132510
  .incbin "ovl22.raw.bin", 0x0A10, 0x8
  /* A18 12A388 80132518 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl22.raw.bin", 0x0A1C, 0x4

glabel D_ovl22_80132520
  .incbin "ovl22.raw.bin", 0x0A20, 0x14
  /* A34 12A3A4 80132534 */  .4byte D_ovl22_80132510
  .incbin "ovl22.raw.bin", 0x0A38, 0x4
  /* A3C 12A3AC 8013253C */  .4byte D_ovl22_80132508
  .incbin "ovl22.raw.bin", 0x0A40, 0x8

glabel D_ovl22_80132548
  .incbin "ovl22.raw.bin", 0x0A48, 0x1C

glabel D_ovl22_80132564
  .incbin "ovl22.raw.bin", 0x0A64, 0x38

glabel D_ovl22_8013259C
  .incbin "ovl22.raw.bin", 0x0A9C, 0x4

glabel D_ovl22_801325A0
  /* AA0 12A410 801325A0 */  .4byte D_NF_80392A00
  /* AA4 12A414 801325A4 */  .4byte D_NF_803B6900
  /* AA8 12A418 801325A8 */  .4byte D_NF_803DA800
  .incbin "ovl22.raw.bin", 0x0AAC, 0x10

glabel D_ovl22_801325BC
  .incbin "ovl22.raw.bin", 0x0ABC, 0x4
  /* AC0 12A430 801325C0 */  .4byte func_8000A5E4
  /* AC4 12A434 801325C4 */  .4byte func_8000A340
  /* AC8 12A438 801325C8 */  .4byte D_NF_80132990
  .incbin "ovl22.raw.bin", 0x0ACC, 0x28
  /* AF4 12A464 801325F4 */  .4byte func_ovl22_80131B00
  /* AF8 12A468 801325F8 */  .4byte update_contdata
  .incbin "ovl22.raw.bin", 0x0AFC, 0x48
  /* B44 12A4B4 80132644 */  .4byte func_ovl22_801322D4
  .incbin "ovl22.raw.bin", 0x0B48, 0x8
