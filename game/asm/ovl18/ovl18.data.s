.include "macros.inc"

.section .data

# Data Sections
#  80133080 -> 801331A0


glabel D_ovl18_80133080
  .incbin "ovl18.raw.bin", 0x1580, 0x8

glabel D_ovl18_80133088
  /* 1588 11F198 80133088 */
  .asciz "   "
  .balign 4
  /* 158C 11F19C 8013308C */
  .asciz "   "
  .balign 4

glabel D_ovl18_80133090
  .incbin "ovl18.raw.bin", 0x1590, 0x8
  /* 1598 11F1A8 80133098 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl18.raw.bin", 0x159C, 0x4

glabel D_ovl18_801330A0
  .incbin "ovl18.raw.bin", 0x15A0, 0x14
  /* 15B4 11F1C4 801330B4 */  .4byte D_ovl18_80133090
  .incbin "ovl18.raw.bin", 0x15B8, 0x4
  /* 15BC 11F1CC 801330BC */  .4byte D_ovl18_80133088
  .incbin "ovl18.raw.bin", 0x15C0, 0x8

glabel D_ovl18_801330C8
  .incbin "ovl18.raw.bin", 0x15C8, 0x8

glabel D_ovl18_801330D0
  .incbin "ovl18.raw.bin", 0x15D0, 0x8

glabel D_ovl18_801330D8
  .incbin "ovl18.raw.bin", 0x15D8, 0x8

glabel D_ovl18_801330E0
  /* 15E0 11F1F0 801330E0 */  .4byte D_ovl18_801331A0
  /* 15E4 11F1F4 801330E4 */  .4byte D_ovl18_801331A4
  /* 15E8 11F1F8 801330E8 */  .4byte D_ovl18_801331A8
  /* 15EC 11F1FC 801330EC */  .4byte D_ovl18_801331AC

glabel D_ovl18_801330F0
  /* 15F0 11F200 801330F0 */  .4byte D_NF_80392A00
  /* 15F4 11F204 801330F4 */  .4byte D_NF_803B6900
  /* 15F8 11F208 801330F8 */  .4byte D_NF_803DA800
  .incbin "ovl18.raw.bin", 0x15FC, 0x10

glabel D_ovl18_8013310C
  .incbin "ovl18.raw.bin", 0x160C, 0x4
  /* 1610 11F220 80133110 */  .4byte func_8000A5E4
  /* 1614 11F224 80133114 */  .4byte func_8000A340
  /* 1618 11F228 80133118 */  .4byte D_NF_801332A0
  .incbin "ovl18.raw.bin", 0x161C, 0x28
  /* 1644 11F254 80133144 */  .4byte func_ovl18_80131B00
  /* 1648 11F258 80133148 */  .4byte update_contdata
  .incbin "ovl18.raw.bin", 0x164C, 0x48
  /* 1694 11F2A4 80133194 */  .4byte func_ovl18_80132E9C
  .incbin "ovl18.raw.bin", 0x1698, 0x8
