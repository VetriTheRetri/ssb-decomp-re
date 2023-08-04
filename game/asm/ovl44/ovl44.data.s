.include "macros.inc"

.section .data

# Data Sections
#  801325D0 -> 80132710


glabel D_ovl44_801325D0
  .incbin "ovl44.raw.bin", 0x0AD0, 0x10
  /* AE0 16FC10 801325E0 */
  .asciz "   "
  .balign 4
  /* AE4 16FC14 801325E4 */
  .asciz "   "
  .balign 4
  .incbin "ovl44.raw.bin", 0x0AE8, 0x10
  /* AF8 16FC28 801325F8 */
  .asciz "   "
  .balign 4
  /* AFC 16FC2C 801325FC */
  .asciz "   "
  .balign 4
  .incbin "ovl44.raw.bin", 0x0B00, 0x10

glabel D_ovl44_80132610
  .incbin "ovl44.raw.bin", 0x0B10, 0x20

glabel D_ovl44_80132630
  .incbin "ovl44.raw.bin", 0x0B30, 0x20

glabel D_ovl44_80132650
  /* B50 16FC80 80132650 */  .4byte D_NF_80392A00
  /* B54 16FC84 80132654 */  .4byte D_NF_803B6900
  /* B58 16FC88 80132658 */  .4byte D_NF_803DA800
  .incbin "ovl44.raw.bin", 0x0B5C, 0x10

glabel D_ovl44_8013266C
  .incbin "ovl44.raw.bin", 0x0B6C, 0x4
  /* B70 16FCA0 80132670 */  .4byte func_8000A5E4
  /* B74 16FCA4 80132674 */  .4byte func_8000A340
  /* B78 16FCA8 80132678 */  .4byte D_NF_80132AB0
  .incbin "ovl44.raw.bin", 0x0B7C, 0x28
  /* BA4 16FCD4 801326A4 */  .4byte func_ovl44_80131B00
  /* BA8 16FCD8 801326A8 */  .4byte update_contdata
  .incbin "ovl44.raw.bin", 0x0BAC, 0x20
  /* BCC 16FCFC 801326CC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl44.raw.bin", 0x0BD0, 0x24
  /* BF4 16FD24 801326F4 */  .4byte func_ovl44_8013237C
  .incbin "ovl44.raw.bin", 0x0BF8, 0x8

glabel D_ovl44_80132700
  /* C00 16FD30 80132700 */
  .4byte 0x3f666666 # .float 0.9

glabel D_ovl44_80132704
  /* C04 16FD34 80132704 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl44.raw.bin", 0x0C08, 0x8
