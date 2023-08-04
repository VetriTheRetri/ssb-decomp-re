.include "macros.inc"

.section .data

# Data Sections
#  8018E0B0 -> 8018E220


glabel D_ovl43_8018E0B0
  .incbin "ovl43.raw.bin", 0x0FF0, 0x1C

glabel D_ovl43_8018E0CC
  .incbin "ovl43.raw.bin", 0x100C, 0x1C

glabel D_ovl43_8018E0E8
  .incbin "ovl43.raw.bin", 0x1028, 0xC

glabel D_ovl43_8018E0F4
  .incbin "ovl43.raw.bin", 0x1034, 0x8

glabel D_ovl43_8018E0FC
  .incbin "ovl43.raw.bin", 0x103C, 0x18

glabel D_ovl43_8018E114
  .incbin "ovl43.raw.bin", 0x1054, 0x10
  /* 1064 16F034 8018E124 */
  .asciz "BH"
  .balign 4
  .incbin "ovl43.raw.bin", 0x1068, 0x14

glabel D_ovl43_8018E13C
  /* 107C 16F04C 8018E13C */  .4byte D_NF_80392A00
  /* 1080 16F050 8018E140 */  .4byte D_NF_803B6900
  /* 1084 16F054 8018E144 */  .4byte D_NF_803DA800
  .incbin "ovl43.raw.bin", 0x1088, 0x10

glabel D_ovl43_8018E158
  .incbin "ovl43.raw.bin", 0x1098, 0x4
  /* 109C 16F06C 8018E15C */  .4byte func_8000A5E4
  /* 10A0 16F070 8018E160 */  .4byte func_800A26B8
  /* 10A4 16F074 8018E164 */  .4byte D_NF_8018E640
  .incbin "ovl43.raw.bin", 0x10A8, 0x28
  /* 10D0 16F0A0 8018E190 */  .4byte func_ovl43_8018E00C
  /* 10D4 16F0A4 8018E194 */  .4byte update_contdata
  .incbin "ovl43.raw.bin", 0x10D8, 0x20
  /* 10F8 16F0C8 8018E1B8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl43.raw.bin", 0x10FC, 0x24
  /* 1120 16F0F0 8018E1E0 */  .4byte func_ovl43_8018DE84
  .incbin "ovl43.raw.bin", 0x1124, 0xC

glabel D_ovl43_8018E1F0
  /* 1130 16F100 8018E1F0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl43_8018E20C
  /* 114C 16F11C 8018E20C */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl43_8018E210
  /* 1150 16F120 8018E210 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl43_8018E214
  /* 1154 16F124 8018E214 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl43.raw.bin", 0x1158, 0x8
