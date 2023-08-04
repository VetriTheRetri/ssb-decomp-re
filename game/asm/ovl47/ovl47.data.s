.include "macros.inc"

.section .data

# Data Sections
#  801328D0 -> 801329C0


glabel D_ovl47_801328D0
  .incbin "ovl47.raw.bin", 0x0DD0, 0x8
  /* DD8 1720F8 801328D8 */
  .asciz "   "
  .balign 4
  /* DDC 1720FC 801328DC */
  .asciz "   "
  .balign 4
  .incbin "ovl47.raw.bin", 0x0DE0, 0x10
  /* DF0 172110 801328F0 */
  .asciz "   "
  .balign 4
  /* DF4 172114 801328F4 */
  .asciz "   "
  .balign 4
  .incbin "ovl47.raw.bin", 0x0DF8, 0x10

glabel D_ovl47_80132908
  /* E08 172128 80132908 */  .4byte D_NF_80392A00
  /* E0C 17212C 8013290C */  .4byte D_NF_803B6900
  /* E10 172130 80132910 */  .4byte D_NF_803DA800
  .incbin "ovl47.raw.bin", 0x0E14, 0x10

glabel D_ovl47_80132924
  .incbin "ovl47.raw.bin", 0x0E24, 0x4
  /* E28 172148 80132928 */  .4byte func_8000A5E4
  /* E2C 17214C 8013292C */  .4byte func_8000A340
  /* E30 172150 80132930 */  .4byte D_NF_80132BA0
  .incbin "ovl47.raw.bin", 0x0E34, 0x28
  /* E5C 17217C 8013295C */  .4byte func_ovl47_80131B00
  /* E60 172180 80132960 */  .4byte update_contdata
  .incbin "ovl47.raw.bin", 0x0E64, 0x20
  /* E84 1721A4 80132984 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl47.raw.bin", 0x0E88, 0x24
  /* EAC 1721CC 801329AC */  .4byte func_ovl47_801326A8

glabel D_ovl47_801329B0
  /* EB0 1721D0 801329B0 */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl47_801329B4
  /* EB4 1721D4 801329B4 */
  .4byte 0x3ecccccd # .float 0.4
  .incbin "ovl47.raw.bin", 0x0EB8, 0x8
