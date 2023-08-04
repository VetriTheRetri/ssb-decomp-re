.include "macros.inc"

.section .data

# Data Sections
#  80132330 -> 80132420


glabel D_ovl45_80132330
  .incbin "ovl45.raw.bin", 0x0830, 0x8
  /* 838 170578 80132338 */
  .asciz "   "
  .balign 4
  /* 83C 17057C 8013233C */
  .asciz "   "
  .balign 4
  .incbin "ovl45.raw.bin", 0x0840, 0x10
  /* 850 170590 80132350 */
  .asciz "   "
  .balign 4
  /* 854 170594 80132354 */
  .asciz "   "
  .balign 4
  .incbin "ovl45.raw.bin", 0x0858, 0x10

glabel D_ovl45_80132368
  .incbin "ovl45.raw.bin", 0x0868, 0x10

glabel D_ovl45_80132378
  /* 878 1705B8 80132378 */  .4byte D_NF_80392A00
  /* 87C 1705BC 8013237C */  .4byte D_NF_803B6900
  /* 880 1705C0 80132380 */  .4byte D_NF_803DA800
  .incbin "ovl45.raw.bin", 0x0884, 0x10

glabel D_ovl45_80132394
  .incbin "ovl45.raw.bin", 0x0894, 0x4
  /* 898 1705D8 80132398 */  .4byte func_8000A5E4
  /* 89C 1705DC 8013239C */  .4byte func_8000A340
  /* 8A0 1705E0 801323A0 */  .4byte D_NF_80132600
  .incbin "ovl45.raw.bin", 0x08A4, 0x28
  /* 8CC 17060C 801323CC */  .4byte func_ovl45_80131B00
  /* 8D0 170610 801323D0 */  .4byte update_contdata
  .incbin "ovl45.raw.bin", 0x08D4, 0x20
  /* 8F4 170634 801323F4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl45.raw.bin", 0x08F8, 0x28
