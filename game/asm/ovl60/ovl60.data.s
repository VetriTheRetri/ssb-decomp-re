.include "macros.inc"

.section .data

# Data Sections
#  80133620 -> 801337A0


glabel D_ovl60_80133620
  .incbin "ovl60.raw.bin", 0x1B20, 0x8

glabel D_ovl60_80133628
  /* 1B28 120DD8 80133628 */
  .asciz "   "
  .balign 4
  /* 1B2C 120DDC 8013362C */
  .asciz "   "
  .balign 4

glabel D_ovl60_80133630
  .incbin "ovl60.raw.bin", 0x1B30, 0x8
  /* 1B38 120DE8 80133638 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl60.raw.bin", 0x1B3C, 0x4

glabel D_ovl60_80133640
  .incbin "ovl60.raw.bin", 0x1B40, 0x14
  /* 1B54 120E04 80133654 */  .4byte D_ovl60_80133630
  .incbin "ovl60.raw.bin", 0x1B58, 0x4
  /* 1B5C 120E0C 8013365C */  .4byte D_ovl60_80133628
  .incbin "ovl60.raw.bin", 0x1B60, 0x8

glabel D_ovl60_80133668
  .incbin "ovl60.raw.bin", 0x1B68, 0x8

glabel D_ovl60_80133670
  .incbin "ovl60.raw.bin", 0x1B70, 0x8

glabel D_ovl60_80133678
  .incbin "ovl60.raw.bin", 0x1B78, 0x8

glabel D_ovl60_80133680
  .incbin "ovl60.raw.bin", 0x1B80, 0xC

glabel D_ovl60_8013368C
  .incbin "ovl60.raw.bin", 0x1B8C, 0x4
  /* 1B90 120E40 80133690 */
  .asciz "CC"
  .balign 4
  .incbin "ovl60.raw.bin", 0x1B94, 0x4
  /* 1B98 120E48 80133698 */
  .asciz "CC"
  .balign 4
  .incbin "ovl60.raw.bin", 0x1B9C, 0x4
  /* 1BA0 120E50 801336A0 */
  .asciz "CC"
  .balign 4
  .incbin "ovl60.raw.bin", 0x1BA4, 0x4
  /* 1BA8 120E58 801336A8 */
  .asciz "CC"
  .balign 4

glabel D_ovl60_801336AC
  .incbin "ovl60.raw.bin", 0x1BAC, 0x20

glabel D_ovl60_801336CC
  .incbin "ovl60.raw.bin", 0x1BCC, 0x20

glabel D_ovl60_801336EC
  /* 1BEC 120E9C 801336EC */  .4byte D_ovl60_801337A0
  /* 1BF0 120EA0 801336F0 */  .4byte D_ovl60_801337A4
  /* 1BF4 120EA4 801336F4 */  .4byte D_ovl60_801337A8

glabel D_ovl60_801336F8
  /* 1BF8 120EA8 801336F8 */  .4byte D_NF_80392A00
  /* 1BFC 120EAC 801336FC */  .4byte D_NF_803B6900
  /* 1C00 120EB0 80133700 */  .4byte D_NF_803DA800
  .incbin "ovl60.raw.bin", 0x1C04, 0x10

glabel D_ovl60_80133714
  .incbin "ovl60.raw.bin", 0x1C14, 0x4
  /* 1C18 120EC8 80133718 */  .4byte func_8000A5E4
  /* 1C1C 120ECC 8013371C */  .4byte func_8000A340
  /* 1C20 120ED0 80133720 */  .4byte D_NF_801338C0
  .incbin "ovl60.raw.bin", 0x1C24, 0x28
  /* 1C4C 120EFC 8013374C */  .4byte func_ovl60_80131B00
  /* 1C50 120F00 80133750 */  .4byte update_contdata
  .incbin "ovl60.raw.bin", 0x1C54, 0x4C
