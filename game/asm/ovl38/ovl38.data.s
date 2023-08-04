.include "macros.inc"

.section .data

# Data Sections
#  8018E120 -> 8018E270


glabel D_ovl38_8018E120
  .incbin "ovl38.raw.bin", 0x1060, 0x10
  /* 1070 1699A0 8018E130 */
  .asciz "CH"
  .balign 4
  .incbin "ovl38.raw.bin", 0x1074, 0x8

glabel D_ovl38_8018E13C
  .incbin "ovl38.raw.bin", 0x107C, 0x4
  /* 1080 1699B0 8018E140 */
  .asciz "Cf"
  .balign 4
  /* 1084 1699B4 8018E144 */
  .asciz "CH"
  .balign 4
  .incbin "ovl38.raw.bin", 0x1088, 0x4
  /* 108C 1699BC 8018E14C */
  .asciz "CH"
  .balign 4
  .incbin "ovl38.raw.bin", 0x1090, 0x8

glabel D_ovl38_8018E158
  .incbin "ovl38.raw.bin", 0x1098, 0xC

glabel D_ovl38_8018E164
  .incbin "ovl38.raw.bin", 0x10A4, 0x8

glabel D_ovl38_8018E16C
  .incbin "ovl38.raw.bin", 0x10AC, 0x18

glabel D_ovl38_8018E184
  .incbin "ovl38.raw.bin", 0x10C4, 0x14

glabel D_ovl38_8018E198
  /* 10D8 169A08 8018E198 */  .4byte D_NF_80392A00
  /* 10DC 169A0C 8018E19C */  .4byte D_NF_803B6900
  /* 10E0 169A10 8018E1A0 */  .4byte D_NF_803DA800
  .incbin "ovl38.raw.bin", 0x10E4, 0x10

glabel D_ovl38_8018E1B4
  .incbin "ovl38.raw.bin", 0x10F4, 0x4
  /* 10F8 169A28 8018E1B8 */  .4byte func_8000A5E4
  /* 10FC 169A2C 8018E1BC */  .4byte func_800A26B8
  /* 1100 169A30 8018E1C0 */  .4byte D_NF_8018E690
  .incbin "ovl38.raw.bin", 0x1104, 0x28
  /* 112C 169A5C 8018E1EC */  .4byte func_ovl38_8018E07C
  /* 1130 169A60 8018E1F0 */  .4byte update_contdata
  .incbin "ovl38.raw.bin", 0x1134, 0x20
  /* 1154 169A84 8018E214 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl38.raw.bin", 0x1158, 0x24
  /* 117C 169AAC 8018E23C */  .4byte func_ovl38_8018DED0

glabel D_ovl38_8018E240
  /* 1180 169AB0 8018E240 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl38_8018E25C
  /* 119C 169ACC 8018E25C */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl38_8018E260
  /* 11A0 169AD0 8018E260 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl38_8018E264
  /* 11A4 169AD4 8018E264 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl38.raw.bin", 0x11A8, 0x8
