.include "macros.inc"

.section .data

# Data Sections
#  80132B90 -> 80132C80


glabel D_ovl17_80132B90
  .incbin "ovl17.raw.bin", 0x1090, 0x8

glabel D_ovl17_80132B98
  /* 1098 11DB28 80132B98 */
  .asciz "   "
  .balign 4
  /* 109C 11DB2C 80132B9C */
  .asciz "   "
  .balign 4

glabel D_ovl17_80132BA0
  .incbin "ovl17.raw.bin", 0x10A0, 0x8
  /* 10A8 11DB38 80132BA8 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl17.raw.bin", 0x10AC, 0x4

glabel D_ovl17_80132BB0
  .incbin "ovl17.raw.bin", 0x10B0, 0x14
  /* 10C4 11DB54 80132BC4 */  .4byte D_ovl17_80132BA0
  .incbin "ovl17.raw.bin", 0x10C8, 0x4
  /* 10CC 11DB5C 80132BCC */  .4byte D_ovl17_80132B98
  .incbin "ovl17.raw.bin", 0x10D0, 0x8

glabel D_ovl17_80132BD8
  /* 10D8 11DB68 80132BD8 */  .4byte D_NF_80392A00
  /* 10DC 11DB6C 80132BDC */  .4byte D_NF_803B6900
  /* 10E0 11DB70 80132BE0 */  .4byte D_NF_803DA800
  .incbin "ovl17.raw.bin", 0x10E4, 0x10

glabel D_ovl17_80132BF4
  .incbin "ovl17.raw.bin", 0x10F4, 0x4
  /* 10F8 11DB88 80132BF8 */  .4byte func_8000A5E4
  /* 10FC 11DB8C 80132BFC */  .4byte func_8000A340
  /* 1100 11DB90 80132C00 */  .4byte D_NF_80132D70
  .incbin "ovl17.raw.bin", 0x1104, 0x28
  /* 112C 11DBBC 80132C2C */  .4byte func_ovl17_80131B00
  /* 1130 11DBC0 80132C30 */  .4byte update_contdata
  .incbin "ovl17.raw.bin", 0x1134, 0x4C
