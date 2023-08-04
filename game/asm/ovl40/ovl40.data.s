.include "macros.inc"

.section .data

# Data Sections
#  8018E070 -> 8018E1C0


glabel D_ovl40_8018E070
  .incbin "ovl40.raw.bin", 0x0FB0, 0x4
  /* FB4 16BBC4 8018E074 */
  .asciz "C4"
  .balign 4
  /* FB8 16BBC8 8018E078 */
  .asciz "DH"
  .balign 4
  .incbin "ovl40.raw.bin", 0x0FBC, 0x4
  /* FC0 16BBD0 8018E080 */
  .asciz "C4"
  .balign 4
  .incbin "ovl40.raw.bin", 0x0FC4, 0x8

glabel D_ovl40_8018E08C
  /* FCC 16BBDC 8018E08C */
  .asciz "CH"
  .balign 4
  .incbin "ovl40.raw.bin", 0x0FD0, 0xC
  /* FDC 16BBEC 8018E09C */
  .asciz "Cp"
  .balign 4
  .incbin "ovl40.raw.bin", 0x0FE0, 0x8

glabel D_ovl40_8018E0A8
  .incbin "ovl40.raw.bin", 0x0FE8, 0x8

glabel D_ovl40_8018E0B0
  .incbin "ovl40.raw.bin", 0x0FF0, 0x8

glabel D_ovl40_8018E0B8
  .incbin "ovl40.raw.bin", 0x0FF8, 0x14

glabel D_ovl40_8018E0CC
  .incbin "ovl40.raw.bin", 0x100C, 0x8
  /* 1014 16BC24 8018E0D4 */
  .asciz "B4"
  .balign 4
  .incbin "ovl40.raw.bin", 0x1018, 0x4

glabel D_ovl40_8018E0DC
  /* 101C 16BC2C 8018E0DC */  .4byte D_NF_80392A00
  /* 1020 16BC30 8018E0E0 */  .4byte D_NF_803B6900
  /* 1024 16BC34 8018E0E4 */  .4byte D_NF_803DA800
  .incbin "ovl40.raw.bin", 0x1028, 0x10

glabel D_ovl40_8018E0F8
  .incbin "ovl40.raw.bin", 0x1038, 0x4
  /* 103C 16BC4C 8018E0FC */  .4byte func_8000A5E4
  /* 1040 16BC50 8018E100 */  .4byte func_800A26B8
  /* 1044 16BC54 8018E104 */  .4byte D_NF_8018E5E0
  .incbin "ovl40.raw.bin", 0x1048, 0x28
  /* 1070 16BC80 8018E130 */  .4byte func_ovl40_8018DFCC
  /* 1074 16BC84 8018E134 */  .4byte update_contdata
  .incbin "ovl40.raw.bin", 0x1078, 0x20
  /* 1098 16BCA8 8018E158 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl40.raw.bin", 0x109C, 0x24
  /* 10C0 16BCD0 8018E180 */  .4byte func_ovl40_8018DE48
  .incbin "ovl40.raw.bin", 0x10C4, 0xC

glabel D_ovl40_8018E190
  /* 10D0 16BCE0 8018E190 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl40_8018E1AC
  /* 10EC 16BCFC 8018E1AC */
  .4byte 0x40092492 # .float 2.142857

glabel D_ovl40_8018E1B0
  /* 10F0 16BD00 8018E1B0 */
  .4byte 0xbd888889 # .float -0.06666667
  .incbin "ovl40.raw.bin", 0x10F4, 0xC
