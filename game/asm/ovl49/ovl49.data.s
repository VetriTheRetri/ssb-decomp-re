.include "macros.inc"

.section .data

# Data Sections
#  801328D0 -> 801329D0


glabel D_ovl49_801328D0
  .incbin "ovl49.raw.bin", 0x0DD0, 0x8
  /* DD8 173938 801328D8 */
  .asciz "   "
  .balign 4
  /* DDC 17393C 801328DC */
  .asciz "   "
  .balign 4
  .incbin "ovl49.raw.bin", 0x0DE0, 0x10
  /* DF0 173950 801328F0 */
  .asciz "   "
  .balign 4
  /* DF4 173954 801328F4 */
  .asciz "   "
  .balign 4
  .incbin "ovl49.raw.bin", 0x0DF8, 0x10

glabel D_ovl49_80132908
  .incbin "ovl49.raw.bin", 0x0E08, 0x20

glabel D_ovl49_80132928
  /* E28 173988 80132928 */  .4byte D_NF_80392A00
  /* E2C 17398C 8013292C */  .4byte D_NF_803B6900
  /* E30 173990 80132930 */  .4byte D_NF_803DA800
  .incbin "ovl49.raw.bin", 0x0E34, 0x10

glabel D_ovl49_80132944
  .incbin "ovl49.raw.bin", 0x0E44, 0x4
  /* E48 1739A8 80132948 */  .4byte func_8000A5E4
  /* E4C 1739AC 8013294C */  .4byte func_8000A340
  /* E50 1739B0 80132950 */  .4byte D_NF_80132D80
  .incbin "ovl49.raw.bin", 0x0E54, 0x28
  /* E7C 1739DC 8013297C */  .4byte func_ovl49_80131B00
  /* E80 1739E0 80132980 */  .4byte update_contdata
  .incbin "ovl49.raw.bin", 0x0E84, 0x20
  /* EA4 173A04 801329A4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl49.raw.bin", 0x0EA8, 0x28
