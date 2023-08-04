.include "macros.inc"

.section .data

# Data Sections
#  80369F60 -> 8036A400


glabel D_ovl9_80369F60
  .incbin "ovl9.raw.bin", 0x0D20, 0x4

glabel D_ovl9_80369F64
  .incbin "ovl9.raw.bin", 0x0D24, 0x4

glabel D_ovl9_80369F68
  .incbin "ovl9.raw.bin", 0x0D28, 0x4

glabel D_ovl9_80369F6C
  .incbin "ovl9.raw.bin", 0x0D2C, 0x4

glabel D_ovl9_80369F70
  .incbin "ovl9.raw.bin", 0x0D30, 0xC

glabel D_ovl9_80369F7C
  .incbin "ovl9.raw.bin", 0x0D3C, 0x14
  /* D50 1AC400 80369F90 */
  .asciz "BWIN"
  .balign 4
  .incbin "ovl9.raw.bin", 0x0D58, 0x34

glabel D_ovl9_80369FCC
  .incbin "ovl9.raw.bin", 0x0D8C, 0x4

glabel D_ovl9_80369FD0
  .incbin "ovl9.raw.bin", 0x0D90, 0x4

glabel D_ovl9_80369FD4
  .incbin "ovl9.raw.bin", 0x0D94, 0x4

glabel D_ovl9_80369FD8
  .incbin "ovl9.raw.bin", 0x0D98, 0x8

glabel D_ovl9_80369FE0
  .incbin "ovl9.raw.bin", 0x0DA0, 0xC0

glabel D_ovl9_8036A0A0
  .incbin "ovl9.raw.bin", 0x0E60, 0xC
  /* E6C 1AC51C 8036A0AC */  .4byte 0x80008000
  .incbin "ovl9.raw.bin", 0x0E70, 0x44
  /* EB4 1AC564 8036A0F4 */
  .asciz " P"
  .balign 4
  .incbin "ovl9.raw.bin", 0x0EB8, 0x4
  /* EBC 1AC56C 8036A0FC */
  .asciz "  "
  .balign 4
  .incbin "ovl9.raw.bin", 0x0EC0, 0x2C
  /* EEC 1AC59C 8036A12C */
  .asciz "@@@"
  .balign 4
  .incbin "ovl9.raw.bin", 0x0EF0, 0x2C
  /* F1C 1AC5CC 8036A15C */
  .asciz "   "
  .balign 4
  .incbin "ovl9.raw.bin", 0x0F20, 0x24
  /* F44 1AC5F4 8036A184 */
  .asciz "@ "
  .balign 4
  .incbin "ovl9.raw.bin", 0x0F48, 0xBC
  /* 1004 1AC6B4 8036A244 */
  .asciz "   "
  .balign 4
  .incbin "ovl9.raw.bin", 0x1008, 0xC
  /* 1014 1AC6C4 8036A254 */
  .asciz "P  "
  .balign 4
  .incbin "ovl9.raw.bin", 0x1018, 0x4
  /* 101C 1AC6CC 8036A25C */
  .asciz "((("
  .balign 4
  .incbin "ovl9.raw.bin", 0x1020, 0xC
  /* 102C 1AC6DC 8036A26C */
  .asciz "   "
  .balign 4
  .incbin "ovl9.raw.bin", 0x1030, 0x64
  /* 1094 1AC744 8036A2D4 */
  .asciz "@@@"
  .balign 4
  .incbin "ovl9.raw.bin", 0x1098, 0x14
  /* 10AC 1AC75C 8036A2EC */
  .asciz "@@@"
  .balign 4
  .incbin "ovl9.raw.bin", 0x10B0, 0x14
  /* 10C4 1AC774 8036A304 */
  .asciz "@@@"
  .balign 4
  .incbin "ovl9.raw.bin", 0x10C8, 0x4C
  /* 1114 1AC7C4 8036A354 */
  .asciz "P  "
  .balign 4
  .incbin "ovl9.raw.bin", 0x1118, 0x4
  /* 111C 1AC7CC 8036A35C */
  .asciz "T(("
  .balign 4
  .incbin "ovl9.raw.bin", 0x1120, 0x38

glabel D_ovl9_8036A398
  .incbin "ovl9.raw.bin", 0x1158, 0x8
  /* 1160 1AC810 8036A3A0 */  .4byte D_ovl9_80369FE0
  .incbin "ovl9.raw.bin", 0x1164, 0x4
  /* 1168 1AC818 8036A3A8 */  .4byte D_ovl9_8036A0A0
  .incbin "ovl9.raw.bin", 0x116C, 0x4

glabel D_ovl9_8036A3B0
  /* 1170 1AC820 8036A3B0 */
  .asciz ">"
  .balign 4

glabel jtbl_ovl9_8036A3B4
  /* 1174 1AC824 8036A3B4 */  .4byte jtgt_ovl9_803694FC
  /* 1178 1AC828 8036A3B8 */  .4byte jtgt_ovl9_80369518
  /* 117C 1AC82C 8036A3BC */  .4byte jtgt_ovl9_80369560
  /* 1180 1AC830 8036A3C0 */  .4byte jtgt_ovl9_80369594
  /* 1184 1AC834 8036A3C4 */  .4byte jtgt_ovl9_803694FC
  /* 1188 1AC838 8036A3C8 */  .4byte jtgt_ovl9_8036953C
  /* 118C 1AC83C 8036A3CC */  .4byte jtgt_ovl9_803695C4

glabel D_ovl9_8036A3D0
  /* 1190 1AC840 8036A3D0 */  .4byte jtgt_ovl9_80369890
  /* 1194 1AC844 8036A3D4 */  .4byte jtgt_ovl9_803699C0
  /* 1198 1AC848 8036A3D8 */  .4byte jtgt_ovl9_80369890
  /* 119C 1AC84C 8036A3DC */  .4byte jtgt_ovl9_80369A08
  /* 11A0 1AC850 8036A3E0 */  .4byte jtgt_ovl9_803698E4
  /* 11A4 1AC854 8036A3E4 */  .4byte jtgt_ovl9_803698E4

glabel D_ovl9_8036A3E8
  /* 11A8 1AC858 8036A3E8 */  .4byte jtgt_ovl9_80369A68
  /* 11AC 1AC85C 8036A3EC */  .4byte jtgt_ovl9_80369B8C
  /* 11B0 1AC860 8036A3F0 */  .4byte jtgt_ovl9_80369A68
  /* 11B4 1AC864 8036A3F4 */  .4byte jtgt_ovl9_80369BCC
  /* 11B8 1AC868 8036A3F8 */  .4byte jtgt_ovl9_80369AB4
  /* 11BC 1AC86C 8036A3FC */  .4byte jtgt_ovl9_80369AB4
