.include "macros.inc"

.section .data

# Data Sections
#  8018D580 -> 8018D670


glabel D_ovl5_8018D580
  .incbin "ovl5.raw.bin", 0x04C0, 0x4

glabel D_ovl5_8018D584
  .incbin "ovl5.raw.bin", 0x04C4, 0x4
  /* 4C8 10B838 8018D588 */
  .asciz " "
  .balign 4
  .incbin "ovl5.raw.bin", 0x04CC, 0x8

glabel D_ovl5_8018D594
  .incbin "ovl5.raw.bin", 0x04D4, 0x8

glabel D_ovl5_8018D59C
  .incbin "ovl5.raw.bin", 0x04DC, 0x8

glabel D_ovl5_8018D5A4
  .incbin "ovl5.raw.bin", 0x04E4, 0x8
  /* 4EC 10B85C 8018D5AC */
  .asciz " "
  .balign 4
  .incbin "ovl5.raw.bin", 0x04F0, 0x4

glabel D_ovl5_8018D5B4
  .incbin "ovl5.raw.bin", 0x04F4, 0x4

glabel D_ovl5_8018D5B8
  .incbin "ovl5.raw.bin", 0x04F8, 0x4

glabel D_ovl5_8018D5BC
  /* 4FC 10B86C 8018D5BC */  .4byte D_NF_80392A00
  /* 500 10B870 8018D5C0 */  .4byte D_NF_803B6900
  /* 504 10B874 8018D5C4 */  .4byte D_NF_803DA800
  .incbin "ovl5.raw.bin", 0x0508, 0x10

glabel D_ovl5_8018D5D8
  .incbin "ovl5.raw.bin", 0x0518, 0x4
  /* 51C 10B88C 8018D5DC */  .4byte func_8000A5E4
  /* 520 10B890 8018D5E0 */  .4byte func_800A26B8
  /* 524 10B894 8018D5E4 */  .4byte D_NF_8018D950
  .incbin "ovl5.raw.bin", 0x0528, 0x28
  /* 550 10B8C0 8018D610 */  .4byte func_ovl5_8018D4BC
  /* 554 10B8C4 8018D614 */  .4byte update_contdata
  .incbin "ovl5.raw.bin", 0x0558, 0x20
  /* 578 10B8E8 8018D638 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl5.raw.bin", 0x057C, 0x24
  /* 5A0 10B910 8018D660 */  .4byte func_ovl5_8018D1A0
  .incbin "ovl5.raw.bin", 0x05A4, 0xC
