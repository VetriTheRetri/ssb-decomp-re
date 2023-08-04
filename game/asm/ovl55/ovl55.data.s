.include "macros.inc"

.section .data

# Data Sections
#  80134160 -> 801342F0


glabel D_ovl55_80134160
  .incbin "ovl55.raw.bin", 0x2660, 0x18
  /* 2678 17ABD8 80134178 */
  .asciz "   "
  .balign 4
  /* 267C 17ABDC 8013417C */
  .asciz "   "
  .balign 4
  .incbin "ovl55.raw.bin", 0x2680, 0x10
  /* 2690 17ABF0 80134190 */
  .asciz "   "
  .balign 4
  /* 2694 17ABF4 80134194 */
  .asciz "   "
  .balign 4
  .incbin "ovl55.raw.bin", 0x2698, 0x10

glabel D_ovl55_801341A8
  .incbin "ovl55.raw.bin", 0x26A8, 0x28

glabel D_ovl55_801341D0
  .incbin "ovl55.raw.bin", 0x26D0, 0x8

glabel D_ovl55_801341D8
  .incbin "ovl55.raw.bin", 0x26D8, 0x4
  /* 26DC 17AC3C 801341DC */
  .asciz "G_"
  .balign 4

glabel D_ovl55_801341E0
  .incbin "ovl55.raw.bin", 0x26E0, 0x8
  /* 26E8 17AC48 801341E8 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl55.raw.bin", 0x26EC, 0xC

glabel D_ovl55_801341F8
  .incbin "ovl55.raw.bin", 0x26F8, 0x20

glabel D_ovl55_80134218
  .incbin "ovl55.raw.bin", 0x2718, 0x4
  /* 271C 17AC7C 8013421C */
  .asciz "Bp"
  .balign 4
  .incbin "ovl55.raw.bin", 0x2720, 0x8
  /* 2728 17AC88 80134228 */
  .asciz "C&"
  .balign 4
  /* 272C 17AC8C 8013422C */
  .asciz "CH"
  .balign 4
  /* 2730 17AC90 80134230 */
  .asciz "Cf"
  .balign 4
  /* 2734 17AC94 80134234 */
  .asciz "C~"
  .balign 4

glabel D_ovl55_80134238
  /* 2738 17AC98 80134238 */  .4byte D_NF_80392A00
  /* 273C 17AC9C 8013423C */  .4byte D_NF_803B6900
  /* 2740 17ACA0 80134240 */  .4byte D_NF_803DA800
  .incbin "ovl55.raw.bin", 0x2744, 0x10

glabel D_ovl55_80134254
  .incbin "ovl55.raw.bin", 0x2754, 0x4
  /* 2758 17ACB8 80134258 */  .4byte func_8000A5E4
  /* 275C 17ACBC 8013425C */  .4byte func_800A26B8
  /* 2760 17ACC0 80134260 */  .4byte D_NF_80134540
  .incbin "ovl55.raw.bin", 0x2764, 0x28
  /* 278C 17ACEC 8013428C */  .4byte func_ovl55_80131B00
  /* 2790 17ACF0 80134290 */  .4byte update_contdata
  .incbin "ovl55.raw.bin", 0x2794, 0x20
  /* 27B4 17AD14 801342B4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl55.raw.bin", 0x27B8, 0x24
  /* 27DC 17AD3C 801342DC */  .4byte func_ovl55_80133F58

glabel D_ovl55_801342E0
  /* 27E0 17AD40 801342E0 */
  .4byte 0x45016000 # .float 2070.0

glabel D_ovl55_801342E4
  /* 27E4 17AD44 801342E4 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl55_801342E8
  /* 27E8 17AD48 801342E8 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl55_801342EC
  /* 27EC 17AD4C 801342EC */
  .4byte 0x466a6000 # .float 15000.0
