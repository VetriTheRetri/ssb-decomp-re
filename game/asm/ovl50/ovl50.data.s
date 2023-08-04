.include "macros.inc"

.section .data

# Data Sections
#  801328F0 -> 80132A10


glabel D_ovl50_801328F0
  .incbin "ovl50.raw.bin", 0x0DF0, 0x10
  /* E00 174830 80132900 */
  .asciz "   "
  .balign 4
  /* E04 174834 80132904 */
  .asciz "   "
  .balign 4
  .incbin "ovl50.raw.bin", 0x0E08, 0x10
  /* E18 174848 80132918 */
  .asciz "   "
  .balign 4
  /* E1C 17484C 8013291C */
  .asciz "   "
  .balign 4
  .incbin "ovl50.raw.bin", 0x0E20, 0x10

glabel D_ovl50_80132930
  .incbin "ovl50.raw.bin", 0x0E30, 0xC

glabel D_ovl50_8013293C
  /* E3C 17486C 8013293C */  .4byte D_NF_80392A00
  /* E40 174870 80132940 */  .4byte D_NF_803B6900
  /* E44 174874 80132944 */  .4byte D_NF_803DA800
  .incbin "ovl50.raw.bin", 0x0E48, 0x10

glabel D_ovl50_80132958
  .incbin "ovl50.raw.bin", 0x0E58, 0x4
  /* E5C 17488C 8013295C */  .4byte func_8000A5E4
  /* E60 174890 80132960 */  .4byte func_8000A340
  /* E64 174894 80132964 */  .4byte D_NF_80132C10
  .incbin "ovl50.raw.bin", 0x0E68, 0x28
  /* E90 1748C0 80132990 */  .4byte func_ovl50_80131B00
  /* E94 1748C4 80132994 */  .4byte update_contdata
  .incbin "ovl50.raw.bin", 0x0E98, 0x20
  /* EB8 1748E8 801329B8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl50.raw.bin", 0x0EBC, 0x24
  /* EE0 174910 801329E0 */  .4byte func_ovl50_80132738
  .incbin "ovl50.raw.bin", 0x0EE4, 0xC

glabel D_ovl50_801329F0
  /* EF0 174920 801329F0 */
  .4byte 0xbe4ccccd # .float -0.2

glabel D_ovl50_801329F4
  /* EF4 174924 801329F4 */
  .4byte 0xbd4ccccd # .float -0.05

glabel D_ovl50_801329F8
  /* EF8 174928 801329F8 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl50_801329FC
  /* EFC 17492C 801329FC */
  .4byte 0x3ccccccd # .float 0.025

glabel D_ovl50_80132A00
  /* F00 174930 80132A00 */
  .4byte 0x46ea6000 # .float 30000.0
  .incbin "ovl50.raw.bin", 0x0F04, 0xC
