.include "macros.inc"

.section .data

# Data Sections
#  80132830 -> 80132920


glabel D_ovl25_80132830
  .incbin "ovl25.raw.bin", 0x0D30, 0x8

glabel D_ovl25_80132838
  /* D38 12FC98 80132838 */
  .asciz "   "
  .balign 4
  /* D3C 12FC9C 8013283C */
  .asciz "   "
  .balign 4

glabel D_ovl25_80132840
  .incbin "ovl25.raw.bin", 0x0D40, 0x8
  /* D48 12FCA8 80132848 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl25.raw.bin", 0x0D4C, 0x4

glabel D_ovl25_80132850
  .incbin "ovl25.raw.bin", 0x0D50, 0x14
  /* D64 12FCC4 80132864 */  .4byte D_ovl25_80132840
  .incbin "ovl25.raw.bin", 0x0D68, 0x4
  /* D6C 12FCCC 8013286C */  .4byte D_ovl25_80132838
  .incbin "ovl25.raw.bin", 0x0D70, 0x8

glabel D_ovl25_80132878
  /* D78 12FCD8 80132878 */  .4byte D_NF_80392A00
  /* D7C 12FCDC 8013287C */  .4byte D_NF_803B6900
  /* D80 12FCE0 80132880 */  .4byte D_NF_803DA800
  .incbin "ovl25.raw.bin", 0x0D84, 0x10

glabel D_ovl25_80132894
  .incbin "ovl25.raw.bin", 0x0D94, 0x4
  /* D98 12FCF8 80132898 */  .4byte func_8000A5E4
  /* D9C 12FCFC 8013289C */  .4byte func_8000A340
  /* DA0 12FD00 801328A0 */  .4byte D_NF_80132A40
  .incbin "ovl25.raw.bin", 0x0DA4, 0x28
  /* DCC 12FD2C 801328CC */  .4byte func_ovl25_80131B00
  /* DD0 12FD30 801328D0 */  .4byte update_contdata
  .incbin "ovl25.raw.bin", 0x0DD4, 0x4C
