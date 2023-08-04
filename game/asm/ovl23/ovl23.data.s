.include "macros.inc"

.section .data

# Data Sections
#  80132370 -> 80132480


glabel D_ovl23_80132370
  .incbin "ovl23.raw.bin", 0x0870, 0x8

glabel D_ovl23_80132378
  /* 878 12AD38 80132378 */
  .asciz "   "
  .balign 4
  /* 87C 12AD3C 8013237C */
  .asciz "   "
  .balign 4

glabel D_ovl23_80132380
  .incbin "ovl23.raw.bin", 0x0880, 0x8
  /* 888 12AD48 80132388 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl23.raw.bin", 0x088C, 0x4

glabel D_ovl23_80132390
  .incbin "ovl23.raw.bin", 0x0890, 0x14
  /* 8A4 12AD64 801323A4 */  .4byte D_ovl23_80132380
  .incbin "ovl23.raw.bin", 0x08A8, 0x4
  /* 8AC 12AD6C 801323AC */  .4byte D_ovl23_80132378
  .incbin "ovl23.raw.bin", 0x08B0, 0x8

glabel D_ovl23_801323B8
  /* 8B8 12AD78 801323B8 */  .4byte D_NF_80392A00
  /* 8BC 12AD7C 801323BC */  .4byte D_NF_803B6900
  /* 8C0 12AD80 801323C0 */  .4byte D_NF_803DA800
  .incbin "ovl23.raw.bin", 0x08C4, 0x10

glabel D_ovl23_801323D4
  .incbin "ovl23.raw.bin", 0x08D4, 0x4
  /* 8D8 12AD98 801323D8 */  .4byte func_8000A5E4
  /* 8DC 12AD9C 801323DC */  .4byte func_8000A340
  /* 8E0 12ADA0 801323E0 */  .4byte D_NF_80132800
  .incbin "ovl23.raw.bin", 0x08E4, 0x28
  /* 90C 12ADCC 8013240C */  .4byte func_ovl23_80131B00
  /* 910 12ADD0 80132410 */  .4byte update_contdata
  .incbin "ovl23.raw.bin", 0x0914, 0x20
  /* 934 12ADF4 80132434 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl23.raw.bin", 0x0938, 0x24
  /* 95C 12AE1C 8013245C */  .4byte func_ovl23_801321C0

glabel D_ovl23_80132460
  /* 960 12AE20 80132460 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl23_80132464
  /* 964 12AE24 80132464 */
  .4byte 0x3d0efa35 # .float 0.034906585

glabel D_ovl23_80132468
  /* 968 12AE28 80132468 */
  .4byte 0x44188000 # .float 610.0

glabel D_ovl23_8013246C
  /* 96C 12AE2C 8013246C */
  .4byte 0xc4098000 # .float -550.0

glabel D_ovl23_80132470
  /* 970 12AE30 80132470 */
  .4byte 0x453b8000 # .float 3000.0
  .incbin "ovl23.raw.bin", 0x0974, 0xC
