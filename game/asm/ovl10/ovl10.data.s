.include "macros.inc"

.section .data

# Data Sections
#  801341E0 -> 80134440


glabel D_ovl10_801341E0
  .incbin "ovl10.raw.bin", 0x26E0, 0xC

glabel D_ovl10_801341EC
  .incbin "ovl10.raw.bin", 0x26EC, 0x4

glabel D_ovl10_801341F0
  .incbin "ovl10.raw.bin", 0x26F0, 0x78

glabel D_ovl10_80134268
  .incbin "ovl10.raw.bin", 0x2768, 0x3C

glabel D_ovl10_801342A4
  .incbin "ovl10.raw.bin", 0x27A4, 0x20

glabel D_ovl10_801342C4
  .incbin "ovl10.raw.bin", 0x27C4, 0xC

glabel D_ovl10_801342D0
  .incbin "ovl10.raw.bin", 0x27D0, 0x18
  /* 27E8 119968 801342E8 */  .4byte D_ovl10_80134430
  .incbin "ovl10.raw.bin", 0x27EC, 0x18
  /* 2804 119984 80134304 */  .4byte D_800A41C0
  .incbin "ovl10.raw.bin", 0x2808, 0x10

glabel D_ovl10_80134318
  .incbin "ovl10.raw.bin", 0x2818, 0x8

glabel D_ovl10_80134320
  .incbin "ovl10.raw.bin", 0x2820, 0x8

glabel D_ovl10_80134328
  .incbin "ovl10.raw.bin", 0x2828, 0x8

glabel D_ovl10_80134330
  /* 2830 1199B0 80134330 */
  .asciz "   "
  .balign 4
  /* 2834 1199B4 80134334 */
  .asciz "   "
  .balign 4

glabel D_ovl10_80134338
  .incbin "ovl10.raw.bin", 0x2838, 0x8
  /* 2840 1199C0 80134340 */
  .asciz "\n22"
  .balign 4
  .incbin "ovl10.raw.bin", 0x2844, 0x4

glabel D_ovl10_80134348
  .incbin "ovl10.raw.bin", 0x2848, 0x14
  /* 285C 1199DC 8013435C */  .4byte D_ovl10_80134338
  .incbin "ovl10.raw.bin", 0x2860, 0x4
  /* 2864 1199E4 80134364 */  .4byte D_ovl10_80134330
  .incbin "ovl10.raw.bin", 0x2868, 0x8

glabel D_ovl10_80134370
  /* 2870 1199F0 80134370 */  .4byte D_NF_80392A00
  /* 2874 1199F4 80134374 */  .4byte D_NF_803B6900
  /* 2878 1199F8 80134378 */  .4byte D_NF_803DA800
  .incbin "ovl10.raw.bin", 0x287C, 0x10

glabel D_ovl10_8013438C
  .incbin "ovl10.raw.bin", 0x288C, 0x4
  /* 2890 119A10 80134390 */  .4byte func_ovl10_80134098
  /* 2894 119A14 80134394 */  .4byte func_8000A340
  /* 2898 119A18 80134398 */  .4byte D_NF_801345B0
  .incbin "ovl10.raw.bin", 0x289C, 0x28
  /* 28C4 119A44 801343C4 */  .4byte func_ovl10_80134074
  /* 28C8 119A48 801343C8 */  .4byte update_contdata
  .incbin "ovl10.raw.bin", 0x28CC, 0x48
  /* 2914 119A94 80134414 */  .4byte func_ovl10_80133F90
  .incbin "ovl10.raw.bin", 0x2918, 0x8

glabel D_ovl10_80134420
  .incbin "ovl10.raw.bin", 0x2920, 0x10

glabel D_ovl10_80134430
  /* 2930 119AB0 80134430 */
  .asciz "English"
  .balign 4

glabel D_ovl10_80134438
  /* 2938 119AB8 80134438 */
  .4byte 0x38d1b717 # .float 0.0001

glabel D_ovl10_8013443C
  /* 293C 119ABC 8013443C */
  .4byte 0x38d1b717 # .float 0.0001
