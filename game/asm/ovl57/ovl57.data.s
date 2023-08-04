.include "macros.inc"

.section .data

# Data Sections
#  80132100 -> 801322B0


glabel D_ovl57_80132100
  .incbin "ovl57.raw.bin", 0x0600, 0x4

glabel D_ovl57_80132104
  .incbin "ovl57.raw.bin", 0x0604, 0x4

glabel D_ovl57_80132108
  .incbin "ovl57.raw.bin", 0x0608, 0x4

glabel D_ovl57_8013210C
  .incbin "ovl57.raw.bin", 0x060C, 0xB4

glabel D_ovl57_801321C0
  .incbin "ovl57.raw.bin", 0x06C0, 0x8

glabel D_ovl57_801321C8
  /* 6C8 17EBD8 801321C8 */
  .asciz "   "
  .balign 4
  /* 6CC 17EBDC 801321CC */
  .asciz "   "
  .balign 4

glabel D_ovl57_801321D0
  .incbin "ovl57.raw.bin", 0x06D0, 0x8
  /* 6D8 17EBE8 801321D8 */
  .asciz "\n22"
  .balign 4
  .incbin "ovl57.raw.bin", 0x06DC, 0x4

glabel D_ovl57_801321E0
  .incbin "ovl57.raw.bin", 0x06E0, 0x14
  /* 6F4 17EC04 801321F4 */  .4byte D_ovl57_801321D0
  .incbin "ovl57.raw.bin", 0x06F8, 0x4
  /* 6FC 17EC0C 801321FC */  .4byte D_ovl57_801321C8
  .incbin "ovl57.raw.bin", 0x0700, 0x8

glabel D_ovl57_80132208
  /* 708 17EC18 80132208 */  .4byte D_NF_80325400
  /* 70C 17EC1C 8013220C */  .4byte D_NF_8036D200
  /* 710 17EC20 80132210 */  .4byte D_NF_803B5000
  .incbin "ovl57.raw.bin", 0x0714, 0x10

glabel D_ovl57_80132224
  .incbin "ovl57.raw.bin", 0x0724, 0x4
  /* 728 17EC38 80132228 */  .4byte func_8000A5E4
  /* 72C 17EC3C 8013222C */  .4byte func_ovl57_80131F60
  /* 730 17EC40 80132230 */  .4byte D_NF_80132300
  .incbin "ovl57.raw.bin", 0x0734, 0x28
  /* 75C 17EC6C 8013225C */  .4byte func_ovl57_80131FE8
  /* 760 17EC70 80132260 */  .4byte update_contdata
  .incbin "ovl57.raw.bin", 0x0764, 0x4C
