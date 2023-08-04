.include "macros.inc"

.section .data

# Data Sections
#  80137F60 -> 80138550


glabel D_ovl28_80137F60
  .incbin "ovl28.raw.bin", 0x6460, 0x20
  /* 6480 147560 80137F80 */
  .asciz "   "
  .balign 4
  /* 6484 147564 80137F84 */
  .asciz "   "
  .balign 4
  .incbin "ovl28.raw.bin", 0x6488, 0x10
  /* 6498 147578 80137F98 */
  .asciz "   "
  .balign 4
  /* 649C 14757C 80137F9C */
  .asciz "   "
  .balign 4
  .incbin "ovl28.raw.bin", 0x64A0, 0x10

glabel D_ovl28_80137FB0
  .incbin "ovl28.raw.bin", 0x64B0, 0xC
  /* 64BC 14759C 80137FBC */
  .asciz "C "
  .balign 4
  /* 64C0 1475A0 80137FC0 */
  .asciz "CM"
  .balign 4
  /* 64C4 1475A4 80137FC4 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl28.raw.bin", 0x64C8, 0xC
  /* 64D4 1475B4 80137FD4 */
  .asciz "C "
  .balign 4
  /* 64D8 1475B8 80137FD8 */
  .asciz "CM"
  .balign 4
  /* 64DC 1475BC 80137FDC */
  .asciz "Cz"
  .balign 4

glabel D_ovl28_80137FE0
  .incbin "ovl28.raw.bin", 0x64E0, 0x30

glabel D_ovl28_80138010
  .incbin "ovl28.raw.bin", 0x6510, 0x84

glabel D_ovl28_80138094
  .incbin "ovl28.raw.bin", 0x6594, 0x30

glabel D_ovl28_801380C4
  .incbin "ovl28.raw.bin", 0x65C4, 0x30

glabel D_ovl28_801380F4
  .incbin "ovl28.raw.bin", 0x65F4, 0x30

glabel D_ovl28_80138124
  .incbin "ovl28.raw.bin", 0x6624, 0x30

glabel D_ovl28_80138154
  /* 6654 147734 80138154 */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6658, 0x14
  /* 666C 14774C 8013816C */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6670, 0x4
  /* 6674 147754 80138174 */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6678, 0x4
  /* 667C 14775C 8013817C */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6680, 0x14
  /* 6694 147774 80138194 */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6698, 0x4
  /* 669C 14777C 8013819C */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x66A0, 0x4
  /* 66A4 147784 801381A4 */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x66A8, 0x4
  /* 66AC 14778C 801381AC */
  .asciz "AP"
  .balign 4
  .incbin "ovl28.raw.bin", 0x66B0, 0x4

glabel D_ovl28_801381B4
  .incbin "ovl28.raw.bin", 0x66B4, 0x30

glabel D_ovl28_801381E4
  .incbin "ovl28.raw.bin", 0x66E4, 0x30

glabel D_ovl28_80138214
  .incbin "ovl28.raw.bin", 0x6714, 0x10

glabel D_ovl28_80138224
  .incbin "ovl28.raw.bin", 0x6724, 0x10

glabel D_ovl28_80138234
  /* 6734 147814 80138234 */
  .asciz "A"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6738, 0xC

glabel D_ovl28_80138244
  .incbin "ovl28.raw.bin", 0x6744, 0x10

glabel D_ovl28_80138254
  /* 6754 147834 80138254 */
  .asciz "A"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6758, 0x34
  /* 678C 14786C 8013828C */
  .asciz "A"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6790, 0x8
  /* 6798 147878 80138298 */
  .asciz "A"
  .balign 4
  /* 679C 14787C 8013829C */
  .asciz "A"
  .balign 4
  .incbin "ovl28.raw.bin", 0x67A0, 0x4
  /* 67A4 147884 801382A4 */
  .asciz "A"
  .balign 4
  /* 67A8 147888 801382A8 */
  .asciz "A"
  .balign 4
  /* 67AC 14788C 801382AC */
  .asciz "A"
  .balign 4
  .incbin "ovl28.raw.bin", 0x67B0, 0x4

glabel D_ovl28_801382B4
  .incbin "ovl28.raw.bin", 0x67B4, 0x18

glabel D_ovl28_801382CC
  .incbin "ovl28.raw.bin", 0x67CC, 0x10

glabel D_ovl28_801382DC
  .incbin "ovl28.raw.bin", 0x67DC, 0xC

glabel D_ovl28_801382E8
  .incbin "ovl28.raw.bin", 0x67E8, 0x18

glabel D_ovl28_80138300
  .incbin "ovl28.raw.bin", 0x6800, 0x10

glabel D_ovl28_80138310
  .incbin "ovl28.raw.bin", 0x6810, 0x40

glabel D_ovl28_80138350
  .incbin "ovl28.raw.bin", 0x6850, 0x10

glabel D_ovl28_80138360
  .incbin "ovl28.raw.bin", 0x6860, 0x10

glabel D_ovl28_80138370
  .incbin "ovl28.raw.bin", 0x6870, 0x10

glabel D_ovl28_80138380
  .incbin "ovl28.raw.bin", 0x6880, 0x18

glabel D_ovl28_80138398
  .incbin "ovl28.raw.bin", 0x6898, 0x14

glabel D_ovl28_801383AC
  .incbin "ovl28.raw.bin", 0x68AC, 0x10

glabel D_ovl28_801383BC
  .incbin "ovl28.raw.bin", 0x68BC, 0x10

glabel D_ovl28_801383CC
  .incbin "ovl28.raw.bin", 0x68CC, 0x10

glabel D_ovl28_801383DC
  .incbin "ovl28.raw.bin", 0x68DC, 0x10

glabel D_ovl28_801383EC
  .incbin "ovl28.raw.bin", 0x68EC, 0x10

glabel D_ovl28_801383FC
  .incbin "ovl28.raw.bin", 0x68FC, 0x8
  /* 6904 1479E4 80138404 */
  .asciz "@"
  .balign 4
  .incbin "ovl28.raw.bin", 0x6908, 0x24

glabel D_ovl28_8013842C
  /* 692C 147A0C 8013842C */  .4byte D_NF_80392A00
  /* 6930 147A10 80138430 */  .4byte D_NF_803B6900
  /* 6934 147A14 80138434 */  .4byte D_NF_803DA800
  .incbin "ovl28.raw.bin", 0x6938, 0x10

glabel D_ovl28_80138448
  .incbin "ovl28.raw.bin", 0x6948, 0x4
  /* 694C 147A2C 8013844C */  .4byte func_8000A5E4
  /* 6950 147A30 80138450 */  .4byte func_800A26B8
  /* 6954 147A34 80138454 */  .4byte D_NF_80138CC0
  .incbin "ovl28.raw.bin", 0x6958, 0x28
  /* 6980 147A60 80138480 */  .4byte func_ovl28_80131B00
  /* 6984 147A64 80138484 */  .4byte update_contdata
  .incbin "ovl28.raw.bin", 0x6988, 0x20
  /* 69A8 147A88 801384A8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl28.raw.bin", 0x69AC, 0x24
  /* 69D0 147AB0 801384D0 */  .4byte func_ovl28_80137CAC
  .incbin "ovl28.raw.bin", 0x69D4, 0xC

glabel jtbl_ovl28_801384E0
  /* 69E0 147AC0 801384E0 */  .4byte jtgt_ovl28_80133660
  /* 69E4 147AC4 801384E4 */  .4byte jtgt_ovl28_8013363C
  /* 69E8 147AC8 801384E8 */  .4byte jtgt_ovl28_80133648
  /* 69EC 147ACC 801384EC */  .4byte jtgt_ovl28_8013363C
  /* 69F0 147AD0 801384F0 */  .4byte jtgt_ovl28_80133648
  /* 69F4 147AD4 801384F4 */  .4byte jtgt_ovl28_80133648
  /* 69F8 147AD8 801384F8 */  .4byte jtgt_ovl28_80133654
  /* 69FC 147ADC 801384FC */  .4byte jtgt_ovl28_80133648
  /* 6A00 147AE0 80138500 */  .4byte jtgt_ovl28_80133660
  /* 6A04 147AE4 80138504 */  .4byte jtgt_ovl28_8013366C
  /* 6A08 147AE8 80138508 */  .4byte jtgt_ovl28_80133654
  /* 6A0C 147AEC 8013850C */  .4byte jtgt_ovl28_80133654

glabel D_ovl28_80138510
  /* 6A10 147AF0 80138510 */
  .4byte 0x3ae4c389 # .float 0.0017453294
  .incbin "ovl28.raw.bin", 0x6A14, 0x4

glabel D_ovl28_80138518
  /* 6A18 147AF8 80138518 */
  .4byte 0x3eb2b8c2 # .float 0.34906584

glabel D_ovl28_8013851C
  /* 6A1C 147AFC 8013851C */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl28_80138520
  /* 6A20 147B00 80138520 */
  .4byte 0x3d0efa35 # .float 0.034906585

glabel D_ovl28_80138524
  /* 6A24 147B04 80138524 */
  .4byte 0xc44f8000 # .float -830.0

glabel D_ovl28_80138528
  /* 6A28 147B08 80138528 */
  .4byte 0xc4598000 # .float -870.0

glabel D_ovl28_8013852C
  /* 6A2C 147B0C 8013852C */
  .4byte 0x444f8000 # .float 830.0

glabel D_ovl28_80138530
  /* 6A30 147B10 80138530 */
  .4byte 0xc4598000 # .float -870.0

glabel D_ovl28_80138534
  /* 6A34 147B14 80138534 */
  .4byte 0x459c4000 # .float 5000.0

glabel D_ovl28_80138538
  /* 6A38 147B18 80138538 */
  .4byte 0x444f8000 # .float 830.0

glabel D_ovl28_8013853C
  /* 6A3C 147B1C 8013853C */
  .4byte 0xc44f8000 # .float -830.0

glabel D_ovl28_80138540
  /* 6A40 147B20 80138540 */
  .4byte 0xc4598000 # .float -870.0
  .incbin "ovl28.raw.bin", 0x6A44, 0xC
