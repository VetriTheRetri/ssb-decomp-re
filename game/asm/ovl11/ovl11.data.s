.include "macros.inc"

.section .data

# Data Sections
#  800D6700 -> 800D67C0


glabel D_ovl11_800D6700
  /* 270 119D30 800D6700 */  .4byte D_NF_80392A00
  /* 274 119D34 800D6704 */  .4byte D_NF_803B6900
  /* 278 119D38 800D6708 */  .4byte D_NF_803DA800
  .incbin "ovl11.raw.bin", 0x027C, 0x10

glabel D_ovl11_800D671C
  .incbin "ovl11.raw.bin", 0x028C, 0x4
  /* 290 119D50 800D6720 */  .4byte func_8000A5E4
  /* 294 119D54 800D6724 */  .4byte func_8000A340
  /* 298 119D58 800D6728 */  .4byte D_NF_800D6B30
  .incbin "ovl11.raw.bin", 0x029C, 0x2C
  /* 2C8 119D88 800D6758 */  .4byte update_contdata
  .incbin "ovl11.raw.bin", 0x02CC, 0x48
  /* 314 119DD4 800D67A4 */  .4byte func_ovl11_800D65B8
  .incbin "ovl11.raw.bin", 0x0318, 0x8

glabel D_ovl11_800D67B0
  .incbin "ovl11.raw.bin", 0x0320, 0x10
