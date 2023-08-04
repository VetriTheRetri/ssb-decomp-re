.include "macros.inc"

.section .data

# Data Sections
#  80133210 -> 801333D0

  .incbin "ovl21.raw.bin", 0x1710, 0x4

glabel D_ovl21_80133214
  .incbin "ovl21.raw.bin", 0x1714, 0x4

glabel D_ovl21_80133218
  .incbin "ovl21.raw.bin", 0x1718, 0x4

glabel D_ovl21_8013321C
  .incbin "ovl21.raw.bin", 0x171C, 0x4

glabel D_ovl21_80133220
  .incbin "ovl21.raw.bin", 0x1720, 0x30

glabel D_ovl21_80133250
  .incbin "ovl21.raw.bin", 0x1750, 0x8

glabel D_ovl21_80133258
  /* 1758 1297F8 80133258 */
  .asciz "   "
  .balign 4
  /* 175C 1297FC 8013325C */
  .asciz "   "
  .balign 4

glabel D_ovl21_80133260
  .incbin "ovl21.raw.bin", 0x1760, 0x8
  /* 1768 129808 80133268 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl21.raw.bin", 0x176C, 0x4

glabel D_ovl21_80133270
  .incbin "ovl21.raw.bin", 0x1770, 0x14
  /* 1784 129824 80133284 */  .4byte D_ovl21_80133260
  .incbin "ovl21.raw.bin", 0x1788, 0x4
  /* 178C 12982C 8013328C */  .4byte D_ovl21_80133258
  .incbin "ovl21.raw.bin", 0x1790, 0x8

glabel D_ovl21_80133298
  .incbin "ovl21.raw.bin", 0x1798, 0x40

glabel D_ovl21_801332D8
  .incbin "ovl21.raw.bin", 0x17D8, 0x18

glabel D_ovl21_801332F0
  .incbin "ovl21.raw.bin", 0x17F0, 0x18

glabel D_ovl21_80133308
  .incbin "ovl21.raw.bin", 0x1808, 0x18

glabel D_ovl21_80133320
  /* 1820 1298C0 80133320 */  .4byte D_NF_80392A00
  /* 1824 1298C4 80133324 */  .4byte D_NF_803B6900
  /* 1828 1298C8 80133328 */  .4byte D_NF_803DA800
  .incbin "ovl21.raw.bin", 0x182C, 0x10

glabel D_ovl21_8013333C
  .incbin "ovl21.raw.bin", 0x183C, 0x4
  /* 1840 1298E0 80133340 */  .4byte func_8000A5E4
  /* 1844 1298E4 80133344 */  .4byte func_8000A340
  /* 1848 1298E8 80133348 */  .4byte D_NF_80133540
  .incbin "ovl21.raw.bin", 0x184C, 0x28
  /* 1874 129914 80133374 */  .4byte func_ovl21_80131B00
  /* 1878 129918 80133378 */  .4byte update_contdata
  .incbin "ovl21.raw.bin", 0x187C, 0x48
  /* 18C4 129964 801333C4 */  .4byte func_ovl21_80133090
  .incbin "ovl21.raw.bin", 0x18C8, 0x8
