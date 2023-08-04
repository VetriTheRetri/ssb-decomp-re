.include "macros.inc"

.section .data

# Data Sections
#  801326D0 -> 801327C0


glabel D_ovl46_801326D0
  .incbin "ovl46.raw.bin", 0x0BD0, 0x8
  /* BD8 171238 801326D8 */
  .asciz "   "
  .balign 4
  /* BDC 17123C 801326DC */
  .asciz "   "
  .balign 4
  .incbin "ovl46.raw.bin", 0x0BE0, 0x10
  /* BF0 171250 801326F0 */
  .asciz "   "
  .balign 4
  /* BF4 171254 801326F4 */
  .asciz "   "
  .balign 4
  .incbin "ovl46.raw.bin", 0x0BF8, 0x10

glabel D_ovl46_80132708
  /* C08 171268 80132708 */  .4byte D_NF_80392A00
  /* C0C 17126C 8013270C */  .4byte D_NF_803B6900
  /* C10 171270 80132710 */  .4byte D_NF_803DA800
  .incbin "ovl46.raw.bin", 0x0C14, 0x10

glabel D_ovl46_80132724
  .incbin "ovl46.raw.bin", 0x0C24, 0x4
  /* C28 171288 80132728 */  .4byte func_8000A5E4
  /* C2C 17128C 8013272C */  .4byte func_8000A340
  /* C30 171290 80132730 */  .4byte D_NF_801329A0
  .incbin "ovl46.raw.bin", 0x0C34, 0x28
  /* C5C 1712BC 8013275C */  .4byte func_ovl46_80131B00
  /* C60 1712C0 80132760 */  .4byte update_contdata
  .incbin "ovl46.raw.bin", 0x0C64, 0x20
  /* C84 1712E4 80132784 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl46.raw.bin", 0x0C88, 0x24
  /* CAC 17130C 801327AC */  .4byte func_ovl46_801324E0

glabel D_ovl46_801327B0
  /* CB0 171310 801327B0 */
  .4byte 0xbd819ec9 # .float -0.06329114

glabel D_ovl46_801327B4
  /* CB4 171314 801327B4 */
  .4byte 0xbecccccd # .float -0.4

glabel D_ovl46_801327B8
  /* CB8 171318 801327B8 */
  .4byte 0xbe088889 # .float -0.13333334

glabel D_ovl46_801327BC
  /* CBC 17131C 801327BC */
  .4byte 0xbd088889 # .float -0.033333335
