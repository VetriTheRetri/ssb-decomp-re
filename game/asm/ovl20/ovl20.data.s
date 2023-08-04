.include "macros.inc"

.section .data

# Data Sections
#  801346C0 -> 801348C0


glabel D_ovl20_801346C0
  .incbin "ovl20.raw.bin", 0x2BC0, 0x8

glabel D_ovl20_801346C8
  /* 2BC8 127EA8 801346C8 */
  .asciz "   "
  .balign 4
  /* 2BCC 127EAC 801346CC */
  .asciz "   "
  .balign 4

glabel D_ovl20_801346D0
  .incbin "ovl20.raw.bin", 0x2BD0, 0x8
  /* 2BD8 127EB8 801346D8 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl20.raw.bin", 0x2BDC, 0x4

glabel D_ovl20_801346E0
  .incbin "ovl20.raw.bin", 0x2BE0, 0x14
  /* 2BF4 127ED4 801346F4 */  .4byte D_ovl20_801346D0
  .incbin "ovl20.raw.bin", 0x2BF8, 0x4
  /* 2BFC 127EDC 801346FC */  .4byte D_ovl20_801346C8
  .incbin "ovl20.raw.bin", 0x2C00, 0x8

glabel D_ovl20_80134708
  .incbin "ovl20.raw.bin", 0x2C08, 0x28

glabel D_ovl20_80134730
  /* 2C30 127F10 80134730 */
  .asciz "A "
  .balign 4
  .incbin "ovl20.raw.bin", 0x2C34, 0xC
  /* 2C40 127F20 80134740 */
  .asciz "A "
  .balign 4
  .incbin "ovl20.raw.bin", 0x2C44, 0x8
  /* 2C4C 127F2C 8013474C */
  .asciz "A "
  .balign 4
  .incbin "ovl20.raw.bin", 0x2C50, 0x4
  /* 2C54 127F34 80134754 */
  .asciz "A "
  .balign 4

glabel D_ovl20_80134758
  .incbin "ovl20.raw.bin", 0x2C58, 0x8

glabel D_ovl20_80134760
  .incbin "ovl20.raw.bin", 0x2C60, 0x8

glabel D_ovl20_80134768
  .incbin "ovl20.raw.bin", 0x2C68, 0x18

glabel D_ovl20_80134780
  .incbin "ovl20.raw.bin", 0x2C80, 0xC

glabel D_ovl20_8013478C
  .incbin "ovl20.raw.bin", 0x2C8C, 0x30

glabel D_ovl20_801347BC
  .incbin "ovl20.raw.bin", 0x2CBC, 0x20

glabel D_ovl20_801347DC
  .incbin "ovl20.raw.bin", 0x2CDC, 0x20

glabel D_ovl20_801347FC
  /* 2CFC 127FDC 801347FC */  .4byte D_ovl20_801348C0
  /* 2D00 127FE0 80134800 */  .4byte D_ovl20_801348C4
  /* 2D04 127FE4 80134804 */  .4byte D_ovl20_801348C8
  /* 2D08 127FE8 80134808 */  .4byte D_ovl20_801348CC
  /* 2D0C 127FEC 8013480C */  .4byte D_ovl20_801348D0

glabel D_ovl20_80134810
  /* 2D10 127FF0 80134810 */  .4byte D_NF_80392A00
  /* 2D14 127FF4 80134814 */  .4byte D_NF_803B6900
  /* 2D18 127FF8 80134818 */  .4byte D_NF_803DA800
  .incbin "ovl20.raw.bin", 0x2D1C, 0x10

glabel D_ovl20_8013482C
  .incbin "ovl20.raw.bin", 0x2D2C, 0x4
  /* 2D30 128010 80134830 */  .4byte func_8000A5E4
  /* 2D34 128014 80134834 */  .4byte func_8000A340
  /* 2D38 128018 80134838 */  .4byte D_NF_801349E0
  .incbin "ovl20.raw.bin", 0x2D3C, 0x28
  /* 2D64 128044 80134864 */  .4byte func_ovl20_80131B00
  /* 2D68 128048 80134868 */  .4byte update_contdata
  .incbin "ovl20.raw.bin", 0x2D6C, 0x48
  /* 2DB4 128094 801348B4 */  .4byte func_ovl20_80134504
  .incbin "ovl20.raw.bin", 0x2DB8, 0x8
