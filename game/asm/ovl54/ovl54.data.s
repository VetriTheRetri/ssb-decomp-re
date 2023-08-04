.include "macros.inc"

.section .data

# Data Sections
#  80132AD0 -> 80132BC0


glabel D_ovl54_80132AD0
  .incbin "ovl54.raw.bin", 0x0FD0, 0x8
  /* FD8 178478 80132AD8 */
  .asciz "   "
  .balign 4
  /* FDC 17847C 80132ADC */
  .asciz "   "
  .balign 4
  .incbin "ovl54.raw.bin", 0x0FE0, 0x10
  /* FF0 178490 80132AF0 */
  .asciz "   "
  .balign 4
  /* FF4 178494 80132AF4 */
  .asciz "   "
  .balign 4
  .incbin "ovl54.raw.bin", 0x0FF8, 0x10

glabel D_ovl54_80132B08
  /* 1008 1784A8 80132B08 */  .4byte D_NF_80392A00
  /* 100C 1784AC 80132B0C */  .4byte D_NF_803B6900
  /* 1010 1784B0 80132B10 */  .4byte D_NF_803DA800
  .incbin "ovl54.raw.bin", 0x1014, 0x10

glabel D_ovl54_80132B24
  .incbin "ovl54.raw.bin", 0x1024, 0x4
  /* 1028 1784C8 80132B28 */  .4byte func_8000A5E4
  /* 102C 1784CC 80132B2C */  .4byte func_8000A340
  /* 1030 1784D0 80132B30 */  .4byte D_NF_80132F80
  .incbin "ovl54.raw.bin", 0x1034, 0x28
  /* 105C 1784FC 80132B5C */  .4byte func_ovl54_80131B00
  /* 1060 178500 80132B60 */  .4byte update_contdata
  .incbin "ovl54.raw.bin", 0x1064, 0x20
  /* 1084 178524 80132B84 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl54.raw.bin", 0x1088, 0x24
  /* 10AC 17854C 80132BAC */  .4byte func_ovl54_801328D0

glabel D_ovl54_80132BB0
  /* 10B0 178550 80132BB0 */
  .4byte 0xc486b9ba # .float -1077.804

glabel D_ovl54_80132BB4
  /* 10B4 178554 80132BB4 */
  .4byte 0x457c6dd3 # .float 4038.864

glabel D_ovl54_80132BB8
  /* 10B8 178558 80132BB8 */
  .4byte 0xc566887a # .float -3688.5298

glabel D_ovl54_80132BBC
  /* 10BC 17855C 80132BBC */
  .4byte 0x3f8ccccd # .float 1.1
