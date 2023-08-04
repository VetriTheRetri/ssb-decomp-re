.include "macros.inc"

.section .data

# Data Sections
#  80132640 -> 80132740


glabel D_ovl52_80132640
  .incbin "ovl52.raw.bin", 0x0B40, 0x8
  /* B48 175E08 80132648 */
  .asciz "   "
  .balign 4
  /* B4C 175E0C 8013264C */
  .asciz "   "
  .balign 4
  .incbin "ovl52.raw.bin", 0x0B50, 0x28

glabel D_ovl52_80132678
  /* B78 175E38 80132678 */  .4byte D_NF_80392A00
  /* B7C 175E3C 8013267C */  .4byte D_NF_803B6900
  /* B80 175E40 80132680 */  .4byte D_NF_803DA800
  .incbin "ovl52.raw.bin", 0x0B84, 0x10

glabel D_ovl52_80132694
  .incbin "ovl52.raw.bin", 0x0B94, 0x4
  /* B98 175E58 80132698 */  .4byte func_8000A5E4
  /* B9C 175E5C 8013269C */  .4byte func_8000A340
  /* BA0 175E60 801326A0 */  .4byte D_NF_80132920
  .incbin "ovl52.raw.bin", 0x0BA4, 0x28
  /* BCC 175E8C 801326CC */  .4byte func_ovl52_80131B00
  /* BD0 175E90 801326D0 */  .4byte update_contdata
  .incbin "ovl52.raw.bin", 0x0BD4, 0x20
  /* BF4 175EB4 801326F4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl52.raw.bin", 0x0BF8, 0x24
  /* C1C 175EDC 8013271C */  .4byte func_ovl52_80132490

glabel D_ovl52_80132720
  /* C20 175EE0 80132720 */
  .4byte 0x423571b4 # .float 45.36104

glabel D_ovl52_80132724
  /* C24 175EE4 80132724 */
  .4byte 0x419f53d8 # .float 19.91594

glabel D_ovl52_80132728
  /* C28 175EE8 80132728 */
  .4byte 0x467218e7 # .float 15494.226

glabel D_ovl52_8013272C
  /* C2C 175EEC 8013272C */
  .4byte 0xc2db78e5 # .float -109.73612

glabel D_ovl52_80132730
  /* C30 175EF0 80132730 */
  .4byte 0x4380dd01 # .float 257.7266

glabel D_ovl52_80132734
  /* C34 175EF4 80132734 */
  .4byte 0xc16fb500 # .float -14.981689

glabel D_ovl52_80132738
  /* C38 175EF8 80132738 */
  .4byte 0x403758b4 # .float 2.864789
  .incbin "ovl52.raw.bin", 0x0C3C, 0x4
