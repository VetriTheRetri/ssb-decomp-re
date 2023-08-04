.include "macros.inc"

.section .data

# Data Sections
#  8018E070 -> 8018E1C0


glabel D_ovl37_8018E070
  .incbin "ovl37.raw.bin", 0x0FB0, 0x1C

glabel D_ovl37_8018E08C
  .incbin "ovl37.raw.bin", 0x0FCC, 0x1C

glabel D_ovl37_8018E0A8
  .incbin "ovl37.raw.bin", 0x0FE8, 0x14

glabel D_ovl37_8018E0BC
  .incbin "ovl37.raw.bin", 0x0FFC, 0x8

glabel D_ovl37_8018E0C4
  .incbin "ovl37.raw.bin", 0x1004, 0xC

glabel D_ovl37_8018E0D0
  .incbin "ovl37.raw.bin", 0x1010, 0x8
  /* 1018 168848 8018E0D8 */
  .asciz "B "
  .balign 4
  .incbin "ovl37.raw.bin", 0x101C, 0x4

glabel D_ovl37_8018E0E0
  /* 1020 168850 8018E0E0 */  .4byte D_NF_80392A00
  /* 1024 168854 8018E0E4 */  .4byte D_NF_803B6900
  /* 1028 168858 8018E0E8 */  .4byte D_NF_803DA800
  .incbin "ovl37.raw.bin", 0x102C, 0x10

glabel D_ovl37_8018E0FC
  .incbin "ovl37.raw.bin", 0x103C, 0x4
  /* 1040 168870 8018E100 */  .4byte func_8000A5E4
  /* 1044 168874 8018E104 */  .4byte func_800A26B8
  /* 1048 168878 8018E108 */  .4byte D_NF_8018E5E0
  .incbin "ovl37.raw.bin", 0x104C, 0x28
  /* 1074 1688A4 8018E134 */  .4byte func_ovl37_8018DFCC
  /* 1078 1688A8 8018E138 */  .4byte update_contdata
  .incbin "ovl37.raw.bin", 0x107C, 0x20
  /* 109C 1688CC 8018E15C */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl37.raw.bin", 0x10A0, 0x24
  /* 10C4 1688F4 8018E184 */  .4byte func_ovl37_8018DE48
  .incbin "ovl37.raw.bin", 0x10C8, 0x8

glabel D_ovl37_8018E190
  /* 10D0 168900 8018E190 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl37_8018E1AC
  /* 10EC 16891C 8018E1AC */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl37_8018E1B0
  /* 10F0 168920 8018E1B0 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl37_8018E1B4
  /* 10F4 168924 8018E1B4 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl37.raw.bin", 0x10F8, 0x8
