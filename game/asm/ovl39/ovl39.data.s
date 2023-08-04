.include "macros.inc"

.section .data

# Data Sections
#  8018E090 -> 8018E1F0


glabel D_ovl39_8018E090
  .incbin "ovl39.raw.bin", 0x0FD0, 0x1C

glabel D_ovl39_8018E0AC
  .incbin "ovl39.raw.bin", 0x0FEC, 0x8
  /* FF4 16AAD4 8018E0B4 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl39.raw.bin", 0x0FF8, 0x10

glabel D_ovl39_8018E0C8
  .incbin "ovl39.raw.bin", 0x1008, 0x18

glabel D_ovl39_8018E0E0
  .incbin "ovl39.raw.bin", 0x1020, 0x8

glabel D_ovl39_8018E0E8
  .incbin "ovl39.raw.bin", 0x1028, 0x10

glabel D_ovl39_8018E0F8
  .incbin "ovl39.raw.bin", 0x1038, 0x18

glabel D_ovl39_8018E110
  /* 1050 16AB30 8018E110 */  .4byte D_NF_80392A00
  /* 1054 16AB34 8018E114 */  .4byte D_NF_803B6900
  /* 1058 16AB38 8018E118 */  .4byte D_NF_803DA800
  .incbin "ovl39.raw.bin", 0x105C, 0x10

glabel D_ovl39_8018E12C
  .incbin "ovl39.raw.bin", 0x106C, 0x4
  /* 1070 16AB50 8018E130 */  .4byte func_8000A5E4
  /* 1074 16AB54 8018E134 */  .4byte func_800A26B8
  /* 1078 16AB58 8018E138 */  .4byte D_NF_8018E610
  .incbin "ovl39.raw.bin", 0x107C, 0x28
  /* 10A4 16AB84 8018E164 */  .4byte func_ovl39_8018DFE0
  /* 10A8 16AB88 8018E168 */  .4byte update_contdata
  .incbin "ovl39.raw.bin", 0x10AC, 0x20
  /* 10CC 16ABAC 8018E18C */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl39.raw.bin", 0x10D0, 0x24
  /* 10F4 16ABD4 8018E1B4 */  .4byte func_ovl39_8018DE60
  .incbin "ovl39.raw.bin", 0x10F8, 0x8

glabel D_ovl39_8018E1C0
  /* 1100 16ABE0 8018E1C0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl39_8018E1DC
  /* 111C 16ABFC 8018E1DC */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl39_8018E1E0
  /* 1120 16AC00 8018E1E0 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl39_8018E1E4
  /* 1124 16AC04 8018E1E4 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl39.raw.bin", 0x1128, 0x8
