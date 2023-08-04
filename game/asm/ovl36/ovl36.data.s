.include "macros.inc"

.section .data

# Data Sections
#  8018E090 -> 8018E200


glabel D_ovl36_8018E090
  .incbin "ovl36.raw.bin", 0x0FD0, 0x1C

glabel D_ovl36_8018E0AC
  /* FEC 1676DC 8018E0AC */
  .asciz "DH"
  .balign 4
  .incbin "ovl36.raw.bin", 0x0FF0, 0x18

glabel D_ovl36_8018E0C8
  /* 1008 1676F8 8018E0C8 */
  .asciz " "
  .balign 4
  .incbin "ovl36.raw.bin", 0x100C, 0x1C

glabel D_ovl36_8018E0E8
  .incbin "ovl36.raw.bin", 0x1028, 0x8

glabel D_ovl36_8018E0F0
  .incbin "ovl36.raw.bin", 0x1030, 0x18

glabel D_ovl36_8018E108
  .incbin "ovl36.raw.bin", 0x1048, 0x4
  /* 104C 16773C 8018E10C */
  .asciz "B "
  .balign 4
  .incbin "ovl36.raw.bin", 0x1050, 0xC

glabel D_ovl36_8018E11C
  /* 105C 16774C 8018E11C */  .4byte D_NF_80392A00
  /* 1060 167750 8018E120 */  .4byte D_NF_803B6900
  /* 1064 167754 8018E124 */  .4byte D_NF_803DA800
  .incbin "ovl36.raw.bin", 0x1068, 0x10

glabel D_ovl36_8018E138
  .incbin "ovl36.raw.bin", 0x1078, 0x4
  /* 107C 16776C 8018E13C */  .4byte func_8000A5E4
  /* 1080 167770 8018E140 */  .4byte func_800A26B8
  /* 1084 167774 8018E144 */  .4byte D_NF_8018E620
  .incbin "ovl36.raw.bin", 0x1088, 0x28
  /* 10B0 1677A0 8018E170 */  .4byte func_ovl36_8018DFE4
  /* 10B4 1677A4 8018E174 */  .4byte update_contdata
  .incbin "ovl36.raw.bin", 0x10B8, 0x20
  /* 10D8 1677C8 8018E198 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl36.raw.bin", 0x10DC, 0x24
  /* 1100 1677F0 8018E1C0 */  .4byte func_ovl36_8018DE64
  .incbin "ovl36.raw.bin", 0x1104, 0xC

glabel D_ovl36_8018E1D0
  /* 1110 167800 8018E1D0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl36_8018E1EC
  /* 112C 16781C 8018E1EC */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl36_8018E1F0
  /* 1130 167820 8018E1F0 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl36_8018E1F4
  /* 1134 167824 8018E1F4 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl36.raw.bin", 0x1138, 0x8
