.include "macros.inc"

.section .data

# Data Sections
#  80132F20 -> 80133060


glabel D_ovl61_80132F20
  .incbin "ovl61.raw.bin", 0x1420, 0x8

glabel D_ovl61_80132F28
  /* 1428 122378 80132F28 */
  .asciz "   "
  .balign 4
  /* 142C 12237C 80132F2C */
  .asciz "   "
  .balign 4

glabel D_ovl61_80132F30
  .incbin "ovl61.raw.bin", 0x1430, 0x8
  /* 1438 122388 80132F38 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl61.raw.bin", 0x143C, 0x4

glabel D_ovl61_80132F40
  .incbin "ovl61.raw.bin", 0x1440, 0x14
  /* 1454 1223A4 80132F54 */  .4byte D_ovl61_80132F30
  .incbin "ovl61.raw.bin", 0x1458, 0x4
  /* 145C 1223AC 80132F5C */  .4byte D_ovl61_80132F28
  .incbin "ovl61.raw.bin", 0x1460, 0x8

glabel D_ovl61_80132F68
  .incbin "ovl61.raw.bin", 0x1468, 0x8

glabel D_ovl61_80132F70
  .incbin "ovl61.raw.bin", 0x1470, 0x8

glabel D_ovl61_80132F78
  .incbin "ovl61.raw.bin", 0x1478, 0x8

glabel D_ovl61_80132F80
  .incbin "ovl61.raw.bin", 0x1480, 0xC

glabel D_ovl61_80132F8C
  .incbin "ovl61.raw.bin", 0x148C, 0x4
  /* 1490 1223E0 80132F90 */
  .asciz "CB"
  .balign 4
  .incbin "ovl61.raw.bin", 0x1494, 0x4
  /* 1498 1223E8 80132F98 */
  .asciz "CB"
  .balign 4
  .incbin "ovl61.raw.bin", 0x149C, 0x4
  /* 14A0 1223F0 80132FA0 */
  .asciz "CB"
  .balign 4

glabel D_ovl61_80132FA4
  /* 14A4 1223F4 80132FA4 */  .4byte D_ovl61_80133060
  /* 14A8 1223F8 80132FA8 */  .4byte D_ovl61_80133064
  /* 14AC 1223FC 80132FAC */  .4byte D_ovl61_80133068

glabel D_ovl61_80132FB0
  /* 14B0 122400 80132FB0 */  .4byte D_NF_80392A00
  /* 14B4 122404 80132FB4 */  .4byte D_NF_803B6900
  /* 14B8 122408 80132FB8 */  .4byte D_NF_803DA800
  .incbin "ovl61.raw.bin", 0x14BC, 0x10

glabel D_ovl61_80132FCC
  .incbin "ovl61.raw.bin", 0x14CC, 0x4
  /* 14D0 122420 80132FD0 */  .4byte func_8000A5E4
  /* 14D4 122424 80132FD4 */  .4byte func_8000A340
  /* 14D8 122428 80132FD8 */  .4byte D_NF_80133170
  .incbin "ovl61.raw.bin", 0x14DC, 0x28
  /* 1504 122454 80133004 */  .4byte func_ovl61_80131B00
  /* 1508 122458 80133008 */  .4byte update_contdata
  .incbin "ovl61.raw.bin", 0x150C, 0x48
  /* 1554 1224A4 80133054 */  .4byte func_ovl61_80132D64
  .incbin "ovl61.raw.bin", 0x1558, 0x8
