.include "macros.inc"

.section .data

# Data Sections
#  8018E160 -> 8018E2F0

  .incbin "ovl64.raw.bin", 0x10A0, 0x8

glabel D_ovl64_8018E168
  .incbin "ovl64.raw.bin", 0x10A8, 0x8

glabel D_ovl64_8018E170
  .incbin "ovl64.raw.bin", 0x10B0, 0x4

glabel D_ovl64_8018E174
  .incbin "ovl64.raw.bin", 0x10B4, 0xC

glabel D_ovl64_8018E180
  .incbin "ovl64.raw.bin", 0x10C0, 0x10
  /* 10D0 18CED0 8018E190 */  .4byte func_ovl64_8018D19C
  .incbin "ovl64.raw.bin", 0x10D4, 0x8
  /* 10DC 18CEDC 8018E19C */  .4byte func_ovl64_8018D2CC
  .incbin "ovl64.raw.bin", 0x10E0, 0x8

glabel jtbl_ovl64_8018E1A8
  /* 10E8 18CEE8 8018E1A8 */  .4byte jtgt_ovl64_8018D3D4
  /* 10EC 18CEEC 8018E1AC */  .4byte jtgt_ovl64_8018D39C
  .incbin "ovl64.raw.bin", 0x10F0, 0x4

glabel jtbl_ovl64_8018E1B4
  /* 10F4 18CEF4 8018E1B4 */  .4byte jtgt_ovl64_8018D528
  /* 10F8 18CEF8 8018E1B8 */  .4byte jtgt_ovl64_8018D4F0
  .incbin "ovl64.raw.bin", 0x10FC, 0x4
  /* 1100 18CF00 8018E1C0 */  .4byte func_ovl64_8018D5E0
  .incbin "ovl64.raw.bin", 0x1104, 0x8
  /* 110C 18CF0C 8018E1CC */  .4byte func_ovl64_8018D5F0
  .incbin "ovl64.raw.bin", 0x1110, 0x4

glabel D_ovl64_8018E1D4
  /* 1114 18CF14 8018E1D4 */
  .4byte 0xc2200000 # .float -40.0
  .incbin "ovl64.raw.bin", 0x1118, 0x8
  /* 1120 18CF20 8018E1E0 */
  .asciz "A`"
  .balign 4
  .incbin "ovl64.raw.bin", 0x1124, 0x4
  /* 1128 18CF28 8018E1E8 */
  .asciz "B "
  .balign 4

glabel D_ovl64_8018E1EC
  /* 112C 18CF2C 8018E1EC */
  .4byte 0x40000000 # .float 2.0
  .incbin "ovl64.raw.bin", 0x1130, 0x10

glabel D_ovl64_8018E200
  .incbin "ovl64.raw.bin", 0x1140, 0x30

glabel D_ovl64_8018E230
  .incbin "ovl64.raw.bin", 0x1170, 0x4

glabel D_ovl64_8018E234
  /* 1174 18CF74 8018E234 */  .4byte D_NF_80392A00
  /* 1178 18CF78 8018E238 */  .4byte D_NF_803B6900
  /* 117C 18CF7C 8018E23C */  .4byte D_NF_803DA800
  .incbin "ovl64.raw.bin", 0x1180, 0x10

glabel D_ovl64_8018E250
  .incbin "ovl64.raw.bin", 0x1190, 0x4
  /* 1194 18CF94 8018E254 */  .4byte func_ovl64_8018D0C0
  /* 1198 18CF98 8018E258 */  .4byte func_800A26B8
  /* 119C 18CF9C 8018E25C */  .4byte D_NF_8018E860
  .incbin "ovl64.raw.bin", 0x11A0, 0x28
  /* 11C8 18CFC8 8018E288 */  .4byte func_ovl64_8018DFC8
  /* 11CC 18CFCC 8018E28C */  .4byte update_contdata
  .incbin "ovl64.raw.bin", 0x11D0, 0x20
  /* 11F0 18CFF0 8018E2B0 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl64.raw.bin", 0x11F4, 0x24
  /* 1218 18D018 8018E2D8 */  .4byte func_ovl64_8018DCC4
  .incbin "ovl64.raw.bin", 0x121C, 0x4

glabel D_ovl64_8018E2E0
  /* 1220 18D020 8018E2E0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl64_8018E2E4
  /* 1224 18D024 8018E2E4 */
  .4byte 0x3e99999a # .float 0.3
  .incbin "ovl64.raw.bin", 0x1228, 0x8
