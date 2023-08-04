.include "macros.inc"

.section .data

# Data Sections
#  8018E0C0 -> 8018E220


glabel D_ovl42_8018E0C0
  .incbin "ovl42.raw.bin", 0x1000, 0x1C

glabel D_ovl42_8018E0DC
  /* 101C 16DE8C 8018E0DC */
  .asciz "BH"
  .balign 4
  .incbin "ovl42.raw.bin", 0x1020, 0x4
  /* 1024 16DE94 8018E0E4 */
  .asciz "Dz"
  .balign 4
  /* 1028 16DE98 8018E0E8 */
  .asciz "BH"
  .balign 4
  .incbin "ovl42.raw.bin", 0x102C, 0xC

glabel D_ovl42_8018E0F8
  .incbin "ovl42.raw.bin", 0x1038, 0x4

glabel D_ovl42_8018E0FC
  .incbin "ovl42.raw.bin", 0x103C, 0x8

glabel D_ovl42_8018E104
  .incbin "ovl42.raw.bin", 0x1044, 0x20

glabel D_ovl42_8018E124
  .incbin "ovl42.raw.bin", 0x1064, 0x8
  /* 106C 16DEDC 8018E12C */
  .asciz "B4"
  .balign 4
  .incbin "ovl42.raw.bin", 0x1070, 0xC
  /* 107C 16DEEC 8018E13C */
  .asciz "C*"
  .balign 4

glabel D_ovl42_8018E140
  /* 1080 16DEF0 8018E140 */  .4byte D_NF_80392A00
  /* 1084 16DEF4 8018E144 */  .4byte D_NF_803B6900
  /* 1088 16DEF8 8018E148 */  .4byte D_NF_803DA800
  .incbin "ovl42.raw.bin", 0x108C, 0x10

glabel D_ovl42_8018E15C
  .incbin "ovl42.raw.bin", 0x109C, 0x4
  /* 10A0 16DF10 8018E160 */  .4byte func_8000A5E4
  /* 10A4 16DF14 8018E164 */  .4byte func_800A26B8
  /* 10A8 16DF18 8018E168 */  .4byte D_NF_8018E640
  .incbin "ovl42.raw.bin", 0x10AC, 0x28
  /* 10D4 16DF44 8018E194 */  .4byte func_ovl42_8018E010
  /* 10D8 16DF48 8018E198 */  .4byte update_contdata
  .incbin "ovl42.raw.bin", 0x10DC, 0x20
  /* 10FC 16DF6C 8018E1BC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl42.raw.bin", 0x1100, 0x24
  /* 1124 16DF94 8018E1E4 */  .4byte func_ovl42_8018DE88
  .incbin "ovl42.raw.bin", 0x1128, 0x8

glabel D_ovl42_8018E1F0
  /* 1130 16DFA0 8018E1F0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl42_8018E20C
  /* 114C 16DFBC 8018E20C */
  .4byte 0x3f68ba2f # .float 0.90909094

glabel D_ovl42_8018E210
  /* 1150 16DFC0 8018E210 */
  .4byte 0xbd888889 # .float -0.06666667

glabel D_ovl42_8018E214
  /* 1154 16DFC4 8018E214 */
  .4byte 0x3ee8ba2f # .float 0.45454547
  .incbin "ovl42.raw.bin", 0x1158, 0x8
