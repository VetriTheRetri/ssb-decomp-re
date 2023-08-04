.include "macros.inc"

.section .data

# Data Sections
#  801347B0 -> 80134930


glabel D_ovl19_801347B0
  .incbin "ovl19.raw.bin", 0x2CB0, 0x8

glabel D_ovl19_801347B8
  /* 2CB8 125168 801347B8 */
  .asciz "   "
  .balign 4
  /* 2CBC 12516C 801347BC */
  .asciz "   "
  .balign 4

glabel D_ovl19_801347C0
  .incbin "ovl19.raw.bin", 0x2CC0, 0x8
  /* 2CC8 125178 801347C8 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl19.raw.bin", 0x2CCC, 0x4

glabel D_ovl19_801347D0
  .incbin "ovl19.raw.bin", 0x2CD0, 0x14
  /* 2CE4 125194 801347E4 */  .4byte D_ovl19_801347C0
  .incbin "ovl19.raw.bin", 0x2CE8, 0x4
  /* 2CEC 12519C 801347EC */  .4byte D_ovl19_801347B8
  .incbin "ovl19.raw.bin", 0x2CF0, 0x8

glabel D_ovl19_801347F8
  .incbin "ovl19.raw.bin", 0x2CF8, 0x28

glabel D_ovl19_80134820
  /* 2D20 1251D0 80134820 */
  .asciz "A "
  .balign 4
  .incbin "ovl19.raw.bin", 0x2D24, 0xC
  /* 2D30 1251E0 80134830 */
  .asciz "A "
  .balign 4
  .incbin "ovl19.raw.bin", 0x2D34, 0x8
  /* 2D3C 1251EC 8013483C */
  .asciz "A "
  .balign 4
  .incbin "ovl19.raw.bin", 0x2D40, 0x4
  /* 2D44 1251F4 80134844 */
  .asciz "A "
  .balign 4

glabel D_ovl19_80134848
  .incbin "ovl19.raw.bin", 0x2D48, 0x8

glabel D_ovl19_80134850
  .incbin "ovl19.raw.bin", 0x2D50, 0x8

glabel D_ovl19_80134858
  .incbin "ovl19.raw.bin", 0x2D58, 0x8

glabel D_ovl19_80134860
  .incbin "ovl19.raw.bin", 0x2D60, 0x4

glabel D_ovl19_80134864
  .incbin "ovl19.raw.bin", 0x2D64, 0xC

glabel D_ovl19_80134870
  /* 2D70 125220 80134870 */  .4byte D_ovl19_80134930
  /* 2D74 125224 80134874 */  .4byte D_ovl19_80134934
  /* 2D78 125228 80134878 */  .4byte D_ovl19_80134938
  /* 2D7C 12522C 8013487C */  .4byte D_ovl19_8013493C

glabel D_ovl19_80134880
  /* 2D80 125230 80134880 */  .4byte D_NF_80392A00
  /* 2D84 125234 80134884 */  .4byte D_NF_803B6900
  /* 2D88 125238 80134888 */  .4byte D_NF_803DA800
  .incbin "ovl19.raw.bin", 0x2D8C, 0x10

glabel D_ovl19_8013489C
  .incbin "ovl19.raw.bin", 0x2D9C, 0x4
  /* 2DA0 125250 801348A0 */  .4byte func_8000A5E4
  /* 2DA4 125254 801348A4 */  .4byte func_8000A340
  /* 2DA8 125258 801348A8 */  .4byte D_NF_80134A50
  .incbin "ovl19.raw.bin", 0x2DAC, 0x28
  /* 2DD4 125284 801348D4 */  .4byte func_ovl19_80131B00
  /* 2DD8 125288 801348D8 */  .4byte update_contdata
  .incbin "ovl19.raw.bin", 0x2DDC, 0x48
  /* 2E24 1252D4 80134924 */  .4byte func_ovl19_801345C4
  .incbin "ovl19.raw.bin", 0x2E28, 0x8
