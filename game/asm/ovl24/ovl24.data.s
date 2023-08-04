.include "macros.inc"

.section .data

# Data Sections
#  80134DF0 -> 80135C20


glabel D_ovl24_80134DF0
  .incbin "ovl24.raw.bin", 0x32F0, 0x10

glabel D_ovl24_80134E00
  /* 3300 12E140 80134E00 */
  .asciz "   "
  .balign 4
  /* 3304 12E144 80134E04 */
  .asciz "   "
  .balign 4

glabel D_ovl24_80134E08
  .incbin "ovl24.raw.bin", 0x3308, 0x8
  /* 3310 12E150 80134E10 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl24.raw.bin", 0x3314, 0x4

glabel D_ovl24_80134E18
  .incbin "ovl24.raw.bin", 0x3318, 0x14
  /* 332C 12E16C 80134E2C */  .4byte D_ovl24_80134E08
  .incbin "ovl24.raw.bin", 0x3330, 0x4
  /* 3334 12E174 80134E34 */  .4byte D_ovl24_80134E00
  .incbin "ovl24.raw.bin", 0x3338, 0x8

glabel D_ovl24_80134E40
  .incbin "ovl24.raw.bin", 0x3340, 0x38

glabel D_ovl24_80134E78
  .incbin "ovl24.raw.bin", 0x3378, 0x3C

glabel D_ovl24_80134EB4
  .incbin "ovl24.raw.bin", 0x33B4, 0x70

glabel D_ovl24_80134F24
  .incbin "ovl24.raw.bin", 0x3424, 0x3C

glabel D_ovl24_80134F60
  .incbin "ovl24.raw.bin", 0x3460, 0x30

glabel D_ovl24_80134F90
  .incbin "ovl24.raw.bin", 0x3490, 0x4
  /* 3494 12E2D4 80134F94 */
  .asciz "B "
  .balign 4
  /* 3498 12E2D8 80134F98 */
  .asciz "B "
  .balign 4
  /* 349C 12E2DC 80134F9C */
  .asciz "BH"
  .balign 4
  /* 34A0 12E2E0 80134FA0 */
  .asciz "BH"
  .balign 4
  /* 34A4 12E2E4 80134FA4 */
  .asciz "BH"
  .balign 4

glabel D_ovl24_80134FA8
  .incbin "ovl24.raw.bin", 0x34A8, 0x18

glabel D_ovl24_80134FC0
  .incbin "ovl24.raw.bin", 0x34C0, 0x18

glabel D_ovl24_80134FD8
  .incbin "ovl24.raw.bin", 0x34D8, 0x20

glabel D_ovl24_80134FF8
  .incbin "ovl24.raw.bin", 0x34F8, 0x188

glabel D_ovl24_80135180
  .incbin "ovl24.raw.bin", 0x3680, 0x38

glabel D_ovl24_801351B8
  .incbin "ovl24.raw.bin", 0x36B8, 0x38

glabel D_ovl24_801351F0
  .incbin "ovl24.raw.bin", 0x36F0, 0x20C
  /* 38FC 12E73C 801353FC */
  .asciz "C\\T{"
  .balign 4
  .incbin "ovl24.raw.bin", 0x3904, 0x1D4
  /* 3AD8 12E918 801355D8 */
  .asciz "D>l)"
  .balign 4
  .incbin "ovl24.raw.bin", 0x3AE0, 0x2A4
  /* 3D84 12EBC4 80135884 */
  .asciz "CF"
  .balign 4
  .incbin "ovl24.raw.bin", 0x3D88, 0x7C
  /* 3E04 12EC44 80135904 */
  .asciz "DEL)"
  .balign 4
  .incbin "ovl24.raw.bin", 0x3E0C, 0xC4

glabel D_ovl24_801359D0
  .incbin "ovl24.raw.bin", 0x3ED0, 0x30

glabel D_ovl24_80135A00
  .incbin "ovl24.raw.bin", 0x3F00, 0x30

glabel D_ovl24_80135A30
  .incbin "ovl24.raw.bin", 0x3F30, 0x38

glabel D_ovl24_80135A68
  .incbin "ovl24.raw.bin", 0x3F68, 0x30

glabel D_ovl24_80135A98
  .incbin "ovl24.raw.bin", 0x3F98, 0x38

glabel D_ovl24_80135AD0
  .incbin "ovl24.raw.bin", 0x3FD0, 0x30

glabel D_ovl24_80135B00
  .incbin "ovl24.raw.bin", 0x4000, 0x38

glabel D_ovl24_80135B38
  /* 4038 12EE78 80135B38 */  .4byte D_NF_80392A00
  /* 403C 12EE7C 80135B3C */  .4byte D_NF_803B6900
  /* 4040 12EE80 80135B40 */  .4byte D_NF_803DA800
  .incbin "ovl24.raw.bin", 0x4044, 0x10

glabel D_ovl24_80135B54
  .incbin "ovl24.raw.bin", 0x4054, 0x4
  /* 4058 12EE98 80135B58 */  .4byte func_8000A5E4
  /* 405C 12EE9C 80135B5C */  .4byte func_800A26B8
  /* 4060 12EEA0 80135B60 */  .4byte D_NF_80136070
  .incbin "ovl24.raw.bin", 0x4064, 0x28
  /* 408C 12EECC 80135B8C */  .4byte func_ovl24_80131B00
  /* 4090 12EED0 80135B90 */  .4byte update_contdata
  .incbin "ovl24.raw.bin", 0x4094, 0x20
  /* 40B4 12EEF4 80135BB4 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl24.raw.bin", 0x40B8, 0x24

glabel jtbl_ovl24_80135BDC
  /* 40DC 12EF1C 80135BDC */  .4byte jtgt_ovl24_80134B38

glabel D_ovl24_80135BE0
  /* 40E0 12EF20 80135BE0 */  .4byte jtgt_ovl24_80133D0C
  /* 40E4 12EF24 80135BE4 */  .4byte jtgt_ovl24_80133B58
  /* 40E8 12EF28 80135BE8 */  .4byte jtgt_ovl24_80133D0C
  /* 40EC 12EF2C 80135BEC */  .4byte jtgt_ovl24_80133EB8
  /* 40F0 12EF30 80135BF0 */  .4byte jtgt_ovl24_80133DEC
  /* 40F4 12EF34 80135BF4 */  .4byte jtgt_ovl24_80133D0C
  /* 40F8 12EF38 80135BF8 */  .4byte jtgt_ovl24_80133DB8
  /* 40FC 12EF3C 80135BFC */  .4byte jtgt_ovl24_80133EB8
  /* 4100 12EF40 80135C00 */  .4byte jtgt_ovl24_80133C18
  /* 4104 12EF44 80135C04 */  .4byte jtgt_ovl24_80133D0C
  /* 4108 12EF48 80135C08 */  .4byte jtgt_ovl24_80133D0C
  /* 410C 12EF4C 80135C0C */  .4byte jtgt_ovl24_80133EB8
  /* 4110 12EF50 80135C10 */  .4byte jtgt_ovl24_80133CA4
  /* 4114 12EF54 80135C14 */  .4byte jtgt_ovl24_80133D0C
  .incbin "ovl24.raw.bin", 0x4118, 0x8
