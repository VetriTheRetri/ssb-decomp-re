.include "macros.inc"

.section .data

# Data Sections
#  80136F50 -> 80137640


glabel D_ovl29_80136F50
  .incbin "ovl29.raw.bin", 0x5450, 0x30
  /* 5480 14CFB0 80136F80 */
  .asciz "   "
  .balign 4
  /* 5484 14CFB4 80136F84 */
  .asciz "   "
  .balign 4
  .incbin "ovl29.raw.bin", 0x5488, 0x10
  /* 5498 14CFC8 80136F98 */
  .asciz "   "
  .balign 4
  /* 549C 14CFCC 80136F9C */
  .asciz "   "
  .balign 4
  .incbin "ovl29.raw.bin", 0x54A0, 0x10

glabel D_ovl29_80136FB0
  .incbin "ovl29.raw.bin", 0x54B0, 0xBC
  /* 556C 14D09C 8013706C */
  .asciz "@@"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5570, 0x44
  /* 55B4 14D0E4 801370B4 */
  .asciz "@"
  .balign 4
  .incbin "ovl29.raw.bin", 0x55B8, 0x4
  /* 55BC 14D0EC 801370BC */
  .asciz "@@"
  .balign 4

glabel D_ovl29_801370C0
  .incbin "ovl29.raw.bin", 0x55C0, 0xC
  /* 55CC 14D0FC 801370CC */
  .asciz "C "
  .balign 4
  /* 55D0 14D100 801370D0 */
  .asciz "CM"
  .balign 4
  /* 55D4 14D104 801370D4 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl29.raw.bin", 0x55D8, 0xC
  /* 55E4 14D114 801370E4 */
  .asciz "C "
  .balign 4
  /* 55E8 14D118 801370E8 */
  .asciz "CM"
  .balign 4
  /* 55EC 14D11C 801370EC */
  .asciz "Cz"
  .balign 4

glabel D_ovl29_801370F0
  .incbin "ovl29.raw.bin", 0x55F0, 0x30

glabel D_ovl29_80137120
  .incbin "ovl29.raw.bin", 0x5620, 0x84

glabel D_ovl29_801371A4
  .incbin "ovl29.raw.bin", 0x56A4, 0x30

glabel D_ovl29_801371D4
  .incbin "ovl29.raw.bin", 0x56D4, 0x30

glabel D_ovl29_80137204
  .incbin "ovl29.raw.bin", 0x5704, 0x30

glabel D_ovl29_80137234
  .incbin "ovl29.raw.bin", 0x5734, 0x30

glabel D_ovl29_80137264
  /* 5764 14D294 80137264 */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5768, 0x14
  /* 577C 14D2AC 8013727C */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5780, 0x4
  /* 5784 14D2B4 80137284 */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5788, 0x4
  /* 578C 14D2BC 8013728C */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5790, 0x14
  /* 57A4 14D2D4 801372A4 */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x57A8, 0x4
  /* 57AC 14D2DC 801372AC */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x57B0, 0x4
  /* 57B4 14D2E4 801372B4 */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x57B8, 0x4
  /* 57BC 14D2EC 801372BC */
  .asciz "AP"
  .balign 4
  .incbin "ovl29.raw.bin", 0x57C0, 0x4

glabel D_ovl29_801372C4
  .incbin "ovl29.raw.bin", 0x57C4, 0x30

glabel D_ovl29_801372F4
  .incbin "ovl29.raw.bin", 0x57F4, 0x30

glabel D_ovl29_80137324
  .incbin "ovl29.raw.bin", 0x5824, 0x10

glabel D_ovl29_80137334
  .incbin "ovl29.raw.bin", 0x5834, 0x10

glabel D_ovl29_80137344
  /* 5844 14D374 80137344 */
  .asciz "A"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5848, 0x34
  /* 587C 14D3AC 8013737C */
  .asciz "A"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5880, 0x8
  /* 5888 14D3B8 80137388 */
  .asciz "A"
  .balign 4
  /* 588C 14D3BC 8013738C */
  .asciz "A"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5890, 0x4
  /* 5894 14D3C4 80137394 */
  .asciz "A"
  .balign 4
  /* 5898 14D3C8 80137398 */
  .asciz "A"
  .balign 4
  /* 589C 14D3CC 8013739C */
  .asciz "A"
  .balign 4
  .incbin "ovl29.raw.bin", 0x58A0, 0x4

glabel D_ovl29_801373A4
  .incbin "ovl29.raw.bin", 0x58A4, 0xC

glabel D_ovl29_801373B0
  .incbin "ovl29.raw.bin", 0x58B0, 0x18

glabel D_ovl29_801373C8
  .incbin "ovl29.raw.bin", 0x58C8, 0xC

glabel D_ovl29_801373D4
  .incbin "ovl29.raw.bin", 0x58D4, 0x18

glabel D_ovl29_801373EC
  .incbin "ovl29.raw.bin", 0x58EC, 0xC

glabel D_ovl29_801373F8
  .incbin "ovl29.raw.bin", 0x58F8, 0x18

glabel D_ovl29_80137410
  .incbin "ovl29.raw.bin", 0x5910, 0x18

glabel D_ovl29_80137428
  .incbin "ovl29.raw.bin", 0x5928, 0x10

glabel D_ovl29_80137438
  .incbin "ovl29.raw.bin", 0x5938, 0xC

glabel D_ovl29_80137444
  .incbin "ovl29.raw.bin", 0x5944, 0x18

glabel D_ovl29_8013745C
  .incbin "ovl29.raw.bin", 0x595C, 0x18

glabel D_ovl29_80137474
  .incbin "ovl29.raw.bin", 0x5974, 0x10

glabel D_ovl29_80137484
  .incbin "ovl29.raw.bin", 0x5984, 0x10

glabel D_ovl29_80137494
  .incbin "ovl29.raw.bin", 0x5994, 0x2C

glabel D_ovl29_801374C0
  .incbin "ovl29.raw.bin", 0x59C0, 0x10

glabel D_ovl29_801374D0
  .incbin "ovl29.raw.bin", 0x59D0, 0x10

glabel D_ovl29_801374E0
  .incbin "ovl29.raw.bin", 0x59E0, 0x10

glabel D_ovl29_801374F0
  .incbin "ovl29.raw.bin", 0x59F0, 0x10

glabel D_ovl29_80137500
  .incbin "ovl29.raw.bin", 0x5A00, 0x8
  /* 5A08 14D538 80137508 */
  .asciz "@"
  .balign 4
  .incbin "ovl29.raw.bin", 0x5A0C, 0x24

glabel D_ovl29_80137530
  /* 5A30 14D560 80137530 */  .4byte D_NF_80392A00
  /* 5A34 14D564 80137534 */  .4byte D_NF_803B6900
  /* 5A38 14D568 80137538 */  .4byte D_NF_803DA800
  .incbin "ovl29.raw.bin", 0x5A3C, 0x10

glabel D_ovl29_8013754C
  .incbin "ovl29.raw.bin", 0x5A4C, 0x4
  /* 5A50 14D580 80137550 */  .4byte func_8000A5E4
  /* 5A54 14D584 80137554 */  .4byte func_8000A340
  /* 5A58 14D588 80137558 */  .4byte D_NF_80137E30
  .incbin "ovl29.raw.bin", 0x5A5C, 0x28
  /* 5A84 14D5B4 80137584 */  .4byte func_ovl29_80131B00
  /* 5A88 14D5B8 80137588 */  .4byte update_contdata
  .incbin "ovl29.raw.bin", 0x5A8C, 0x20
  /* 5AAC 14D5DC 801375AC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl29.raw.bin", 0x5AB0, 0x24
  /* 5AD4 14D604 801375D4 */  .4byte func_ovl29_80136CD8
  .incbin "ovl29.raw.bin", 0x5AD8, 0x8

glabel D_ovl29_801375E0
  /* 5AE0 14D610 801375E0 */
  .4byte 0x3f0dd2f2 # .float 0.554

glabel D_ovl29_801375E4
  /* 5AE4 14D614 801375E4 */
  .4byte 0x43828000 # .float 261.0

glabel D_ovl29_801375E8
  /* 5AE8 14D618 801375E8 */
  .4byte 0x43828000 # .float 261.0

glabel jtbl_ovl29_801375EC
  /* 5AEC 14D61C 801375EC */  .4byte jtgt_ovl29_80133FCC
  /* 5AF0 14D620 801375F0 */  .4byte jtgt_ovl29_80133FA8
  /* 5AF4 14D624 801375F4 */  .4byte jtgt_ovl29_80133FB4
  /* 5AF8 14D628 801375F8 */  .4byte jtgt_ovl29_80133FA8
  /* 5AFC 14D62C 801375FC */  .4byte jtgt_ovl29_80133FB4
  /* 5B00 14D630 80137600 */  .4byte jtgt_ovl29_80133FB4
  /* 5B04 14D634 80137604 */  .4byte jtgt_ovl29_80133FC0
  /* 5B08 14D638 80137608 */  .4byte jtgt_ovl29_80133FB4
  /* 5B0C 14D63C 8013760C */  .4byte jtgt_ovl29_80133FCC
  /* 5B10 14D640 80137610 */  .4byte jtgt_ovl29_80133FD8
  /* 5B14 14D644 80137614 */  .4byte jtgt_ovl29_80133FC0
  /* 5B18 14D648 80137618 */  .4byte jtgt_ovl29_80133FC0

glabel D_ovl29_8013761C
  /* 5B1C 14D64C 8013761C */
  .4byte 0x3ae4c389 # .float 0.0017453294
  .incbin "ovl29.raw.bin", 0x5B20, 0x4

glabel D_ovl29_80137624
  /* 5B24 14D654 80137624 */
  .4byte 0x3eb2b8c2 # .float 0.34906584

glabel D_ovl29_80137628
  /* 5B28 14D658 80137628 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl29_8013762C
  /* 5B2C 14D65C 8013762C */
  .4byte 0x3d0efa35 # .float 0.034906585

glabel D_ovl29_80137630
  /* 5B30 14D660 80137630 */
  .4byte 0xc4548000 # .float -850.0

glabel D_ovl29_80137634
  /* 5B34 14D664 80137634 */
  .4byte 0x459c4000 # .float 5000.0

glabel D_ovl29_80137638
  /* 5B38 14D668 80137638 */
  .4byte 0xc4548000 # .float -850.0
  .incbin "ovl29.raw.bin", 0x5B3C, 0x4
