.include "macros.inc"

.section .data

# Data Sections
#  8018E0C0 -> 8018E220


glabel D_ovl41_8018E0C0
  .incbin "ovl41.raw.bin", 0x1000, 0x8
  /* 1008 16CD18 8018E0C8 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl41.raw.bin", 0x100C, 0x4
  /* 1010 16CD20 8018E0D0 */
  .asciz "CH"
  .balign 4
  .incbin "ovl41.raw.bin", 0x1014, 0x8

glabel D_ovl41_8018E0DC
  .incbin "ovl41.raw.bin", 0x101C, 0x1C

glabel D_ovl41_8018E0F8
  .incbin "ovl41.raw.bin", 0x1038, 0x10

glabel D_ovl41_8018E108
  .incbin "ovl41.raw.bin", 0x1048, 0x8

glabel D_ovl41_8018E110
  .incbin "ovl41.raw.bin", 0x1050, 0x18

glabel D_ovl41_8018E128
  .incbin "ovl41.raw.bin", 0x1068, 0x10
  /* 1078 16CD88 8018E138 */
  .asciz "C"
  .balign 4

glabel D_ovl41_8018E13C
  /* 107C 16CD8C 8018E13C */  .4byte D_NF_80392A00
  /* 1080 16CD90 8018E140 */  .4byte D_NF_803B6900
  /* 1084 16CD94 8018E144 */  .4byte D_NF_803DA800
  .incbin "ovl41.raw.bin", 0x1088, 0x10

glabel D_ovl41_8018E158
  .incbin "ovl41.raw.bin", 0x1098, 0x4
  /* 109C 16CDAC 8018E15C */  .4byte func_8000A5E4
  /* 10A0 16CDB0 8018E160 */  .4byte func_800A26B8
  /* 10A4 16CDB4 8018E164 */  .4byte D_NF_8018E640
  .incbin "ovl41.raw.bin", 0x10A8, 0x28
  /* 10D0 16CDE0 8018E190 */  .4byte func_ovl41_8018E010
  /* 10D4 16CDE4 8018E194 */  .4byte update_contdata
  .incbin "ovl41.raw.bin", 0x10D8, 0x20
  /* 10F8 16CE08 8018E1B8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl41.raw.bin", 0x10FC, 0x24
  /* 1120 16CE30 8018E1E0 */  .4byte func_ovl41_8018DE88
  .incbin "ovl41.raw.bin", 0x1124, 0xC

glabel D_ovl41_8018E1F0
  /* 1130 16CE40 8018E1F0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl41_8018E20C
  /* 114C 16CE5C 8018E20C */
  .4byte 0x40092492 # .float 2.142857

glabel D_ovl41_8018E210
  /* 1150 16CE60 8018E210 */
  .4byte 0xbd888889 # .float -0.06666667
  .incbin "ovl41.raw.bin", 0x1154, 0xC
