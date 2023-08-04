.include "macros.inc"

.section .data

# Data Sections
#  80134EE0 -> 801352C0


glabel D_ovl56_80134EE0
  .incbin "ovl56.raw.bin", 0x33E0, 0x1C

glabel D_ovl56_80134EFC
  .incbin "ovl56.raw.bin", 0x33FC, 0x1D4
  /* 35D0 17E320 801350D0 */
  .asciz "   "
  .balign 4
  /* 35D4 17E324 801350D4 */
  .asciz "   "
  .balign 4
  .incbin "ovl56.raw.bin", 0x35D8, 0x10
  /* 35E8 17E338 801350E8 */
  .asciz "   "
  .balign 4
  /* 35EC 17E33C 801350EC */
  .asciz "   "
  .balign 4
  .incbin "ovl56.raw.bin", 0x35F0, 0x10

glabel D_ovl56_80135100
  .incbin "ovl56.raw.bin", 0x3600, 0x14

glabel D_ovl56_80135114
  .incbin "ovl56.raw.bin", 0x3614, 0xC

glabel D_ovl56_80135120
  .incbin "ovl56.raw.bin", 0x3620, 0x78

glabel D_ovl56_80135198
  .incbin "ovl56.raw.bin", 0x3698, 0x38

glabel D_ovl56_801351D0
  .incbin "ovl56.raw.bin", 0x36D0, 0x14

glabel D_ovl56_801351E4
  .incbin "ovl56.raw.bin", 0x36E4, 0x8

glabel D_ovl56_801351EC
  /* 36EC 17E43C 801351EC */  .4byte D_NF_80392A00
  /* 36F0 17E440 801351F0 */  .4byte D_NF_803B6900
  /* 36F4 17E444 801351F4 */  .4byte D_NF_803DA800
  .incbin "ovl56.raw.bin", 0x36F8, 0x10

glabel D_ovl56_80135208
  .incbin "ovl56.raw.bin", 0x3708, 0x4
  /* 370C 17E45C 8013520C */  .4byte func_8000A5E4
  /* 3710 17E460 80135210 */  .4byte func_8000A340
  /* 3714 17E464 80135214 */  .4byte D_NF_801355B0
  .incbin "ovl56.raw.bin", 0x3718, 0x28
  /* 3740 17E490 80135240 */  .4byte func_ovl56_80131B00
  /* 3744 17E494 80135244 */  .4byte update_contdata
  .incbin "ovl56.raw.bin", 0x3748, 0x20
  /* 3768 17E4B8 80135268 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl56.raw.bin", 0x376C, 0x24
  /* 3790 17E4E0 80135290 */  .4byte func_ovl56_80134CC4
  .incbin "ovl56.raw.bin", 0x3794, 0xC

glabel jtbl_ovl56_801352A0
  /* 37A0 17E4F0 801352A0 */  .4byte jtgt_ovl56_80133118
  /* 37A4 17E4F4 801352A4 */  .4byte jtgt_ovl56_80133118
  /* 37A8 17E4F8 801352A8 */  .4byte jtgt_ovl56_80133118
  /* 37AC 17E4FC 801352AC */  .4byte jtgt_ovl56_80133118
  /* 37B0 17E500 801352B0 */  .4byte jtgt_ovl56_80133118
  .incbin "ovl56.raw.bin", 0x37B4, 0xC
