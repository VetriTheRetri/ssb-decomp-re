.include "macros.inc"

.section .data

# Data Sections
#  801339E0 -> 80134300


glabel D_ovl62_801339E0
  .incbin "ovl62.raw.bin", 0x1EE0, 0xB6

glabel D_ovl62_80133A96
  .incbin "ovl62.raw.bin", 0x1F96, 0x308

glabel D_ovl62_80133D9E
  .incbin "ovl62.raw.bin", 0x229E, 0x3CE

glabel D_ovl62_8013416C
  .incbin "ovl62.raw.bin", 0x266C, 0x14

glabel D_ovl62_80134180
  /* 2680 18A550 80134180 */
  .asciz "C\""
  .balign 4
  .incbin "ovl62.raw.bin", 0x2684, 0x4
  /* 2688 18A558 80134188 */
  .asciz "C`"
  .balign 4
  /* 268C 18A55C 8013418C */
  .asciz "C5"
  .balign 4
  .incbin "ovl62.raw.bin", 0x2690, 0x4
  /* 2694 18A564 80134194 */
  .asciz "Cs"
  .balign 4
  /* 2698 18A568 80134198 */
  .asciz "CI"
  .balign 4
  /* 269C 18A56C 8013419C */
  .asciz "C("
  .balign 4
  .incbin "ovl62.raw.bin", 0x26A0, 0x4

glabel D_ovl62_801341A4
  .incbin "ovl62.raw.bin", 0x26A4, 0x28

glabel D_ovl62_801341CC
  .incbin "ovl62.raw.bin", 0x26CC, 0x34

glabel D_ovl62_80134200
  /* 2700 18A5D0 80134200 */
  .asciz "   "
  .balign 4
  /* 2704 18A5D4 80134204 */
  .asciz "   "
  .balign 4

glabel D_ovl62_80134208
  .incbin "ovl62.raw.bin", 0x2708, 0x8
  /* 2710 18A5E0 80134210 */
  .asciz "\n22"
  .balign 4
  .incbin "ovl62.raw.bin", 0x2714, 0x4

glabel D_ovl62_80134218
  .incbin "ovl62.raw.bin", 0x2718, 0x14
  /* 272C 18A5FC 8013422C */  .4byte D_ovl62_80134208
  .incbin "ovl62.raw.bin", 0x2730, 0x4
  /* 2734 18A604 80134234 */  .4byte D_ovl62_80134200
  .incbin "ovl62.raw.bin", 0x2738, 0x8

glabel D_ovl62_80134240
  /* 2740 18A610 80134240 */  .4byte D_NF_80392A00
  /* 2744 18A614 80134244 */  .4byte D_NF_803B6900
  /* 2748 18A618 80134248 */  .4byte D_NF_803DA800
  .incbin "ovl62.raw.bin", 0x274C, 0x10

glabel D_ovl62_8013425C
  .incbin "ovl62.raw.bin", 0x275C, 0x4
  /* 2760 18A630 80134260 */  .4byte func_8000A5E4
  /* 2764 18A634 80134264 */  .4byte func_8000A340
  /* 2768 18A638 80134268 */  .4byte D_NF_80134480
  .incbin "ovl62.raw.bin", 0x276C, 0x28
  /* 2794 18A664 80134294 */  .4byte func_ovl62_80133964
  /* 2798 18A668 80134298 */  .4byte update_contdata
  .incbin "ovl62.raw.bin", 0x279C, 0x48
  /* 27E4 18A6B4 801342E4 */  .4byte func_ovl62_801338F8
  .incbin "ovl62.raw.bin", 0x27E8, 0x8

glabel D_ovl62_801342F0
  /* 27F0 18A6C0 801342F0 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl62.raw.bin", 0x27F4, 0xC
