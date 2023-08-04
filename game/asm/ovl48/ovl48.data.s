.include "macros.inc"

.section .data

# Data Sections
#  801323A0 -> 80132480


glabel D_ovl48_801323A0
  .incbin "ovl48.raw.bin", 0x08A0, 0x8
  /* 8A8 172A88 801323A8 */
  .asciz "   "
  .balign 4
  /* 8AC 172A8C 801323AC */
  .asciz "   "
  .balign 4
  .incbin "ovl48.raw.bin", 0x08B0, 0x10
  /* 8C0 172AA0 801323C0 */
  .asciz "   "
  .balign 4
  /* 8C4 172AA4 801323C4 */
  .asciz "   "
  .balign 4
  .incbin "ovl48.raw.bin", 0x08C8, 0x10

glabel D_ovl48_801323D8
  /* 8D8 172AB8 801323D8 */  .4byte D_NF_80392A00
  /* 8DC 172ABC 801323DC */  .4byte D_NF_803B6900
  /* 8E0 172AC0 801323E0 */  .4byte D_NF_803DA800
  .incbin "ovl48.raw.bin", 0x08E4, 0x10

glabel D_ovl48_801323F4
  .incbin "ovl48.raw.bin", 0x08F4, 0x4
  /* 8F8 172AD8 801323F8 */  .4byte func_8000A5E4
  /* 8FC 172ADC 801323FC */  .4byte func_8000A340
  /* 900 172AE0 80132400 */  .4byte D_NF_80132660
  .incbin "ovl48.raw.bin", 0x0904, 0x28
  /* 92C 172B0C 8013242C */  .4byte func_ovl48_80131B00
  /* 930 172B10 80132430 */  .4byte update_contdata
  .incbin "ovl48.raw.bin", 0x0934, 0x20
  /* 954 172B34 80132454 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl48.raw.bin", 0x0958, 0x28
