.include "macros.inc"

.section .data

# Data Sections
#  801328A0 -> 801329E0


glabel D_ovl35_801328A0
  .incbin "ovl35.raw.bin", 0x0DA0, 0x8
  /* DA8 1665B8 801328A8 */
  .asciz "   "
  .balign 4
  /* DAC 1665BC 801328AC */
  .asciz "   "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0DB0, 0x10
  /* DC0 1665D0 801328C0 */
  .asciz "   "
  .balign 4
  /* DC4 1665D4 801328C4 */
  .asciz "   "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0DC8, 0x10

glabel D_ovl35_801328D8
  .incbin "ovl35.raw.bin", 0x0DD8, 0x10

glabel D_ovl35_801328E8
  /* DE8 1665F8 801328E8 */
  .asciz "A "
  .balign 4
  /* DEC 1665FC 801328EC */
  .asciz "A "
  .balign 4
  /* DF0 166600 801328F0 */
  .asciz "A "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0DF4, 0x4
  /* DF8 166608 801328F8 */
  .asciz "A "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0DFC, 0x4
  /* E00 166610 80132900 */
  .asciz "A "
  .balign 4
  /* E04 166614 80132904 */
  .asciz "C/"
  .balign 4

glabel D_ovl35_80132908
  .incbin "ovl35.raw.bin", 0x0E08, 0x10

glabel D_ovl35_80132918
  /* E18 166628 80132918 */
  .asciz "A "
  .balign 4
  /* E1C 16662C 8013291C */
  .asciz "A "
  .balign 4
  /* E20 166630 80132920 */
  .asciz "A "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0E24, 0x4
  /* E28 166638 80132928 */
  .asciz "A "
  .balign 4
  .incbin "ovl35.raw.bin", 0x0E2C, 0x4
  /* E30 166640 80132930 */
  .asciz "A "
  .balign 4
  /* E34 166644 80132934 */
  .asciz "C/"
  .balign 4

glabel D_ovl35_80132938
  /* E38 166648 80132938 */  .4byte D_NF_80392A00
  /* E3C 16664C 8013293C */  .4byte D_NF_803B6900
  /* E40 166650 80132940 */  .4byte D_NF_803DA800
  .incbin "ovl35.raw.bin", 0x0E44, 0x10

glabel D_ovl35_80132954
  .incbin "ovl35.raw.bin", 0x0E54, 0x4
  /* E58 166668 80132958 */  .4byte func_8000A5E4
  /* E5C 16666C 8013295C */  .4byte func_8000A340
  /* E60 166670 80132960 */  .4byte D_NF_80132BC0
  .incbin "ovl35.raw.bin", 0x0E64, 0x28
  /* E8C 16669C 8013298C */  .4byte func_ovl35_80131B00
  /* E90 1666A0 80132990 */  .4byte update_contdata
  .incbin "ovl35.raw.bin", 0x0E94, 0x20
  /* EB4 1666C4 801329B4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl35.raw.bin", 0x0EB8, 0x28
