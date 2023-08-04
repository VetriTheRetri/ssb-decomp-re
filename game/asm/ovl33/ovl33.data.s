.include "macros.inc"

.section .data

# Data Sections
#  801340B0 -> 801365F0


glabel D_ovl33_801340B0
  .incbin "ovl33.raw.bin", 0x25B0, 0x120

glabel D_ovl33_801341D0
  .incbin "ovl33.raw.bin", 0x26D0, 0x120

glabel D_ovl33_801342F0
  .incbin "ovl33.raw.bin", 0x27F0, 0x120

glabel D_ovl33_80134410
  .incbin "ovl33.raw.bin", 0x2910, 0x120

glabel D_ovl33_80134530
  .incbin "ovl33.raw.bin", 0x2A30, 0x120

glabel D_ovl33_80134650
  .incbin "ovl33.raw.bin", 0x2B50, 0x120

glabel D_ovl33_80134770
  .incbin "ovl33.raw.bin", 0x2C70, 0x120

glabel D_ovl33_80134890
  .incbin "ovl33.raw.bin", 0x2D90, 0x120

glabel D_ovl33_801349B0
  .incbin "ovl33.raw.bin", 0x2EB0, 0x120

glabel D_ovl33_80134AD0
  .incbin "ovl33.raw.bin", 0x2FD0, 0x120

glabel D_ovl33_80134BF0
  .incbin "ovl33.raw.bin", 0x30F0, 0x120

glabel D_ovl33_80134D10
  .incbin "ovl33.raw.bin", 0x3210, 0x120

glabel D_ovl33_80134E30
  .incbin "ovl33.raw.bin", 0x3330, 0xEA0

glabel D_ovl33_80135CD0
  .incbin "ovl33.raw.bin", 0x41D0, 0x60

glabel D_ovl33_80135D30
  .incbin "ovl33.raw.bin", 0x4230, 0xC

glabel D_ovl33_80135D3C
  .incbin "ovl33.raw.bin", 0x423C, 0x60

glabel D_ovl33_80135D9C
  .incbin "ovl33.raw.bin", 0x429C, 0xC

glabel D_ovl33_80135DA8
  .incbin "ovl33.raw.bin", 0x42A8, 0x480

glabel D_ovl33_80136228
  .incbin "ovl33.raw.bin", 0x4728, 0x20
  /* 4748 162298 80136248 */
  .asciz "\n\n<"
  .balign 4
  .incbin "ovl33.raw.bin", 0x474C, 0x4

glabel D_ovl33_80136250
  .incbin "ovl33.raw.bin", 0x4750, 0x30

glabel D_ovl33_80136280
  .incbin "ovl33.raw.bin", 0x4780, 0x30

glabel D_ovl33_801362B0
  .incbin "ovl33.raw.bin", 0x47B0, 0x30

glabel D_ovl33_801362E0
  .incbin "ovl33.raw.bin", 0x47E0, 0x30

glabel D_ovl33_80136310
  .incbin "ovl33.raw.bin", 0x4810, 0x30

glabel D_ovl33_80136340
  .incbin "ovl33.raw.bin", 0x4840, 0x30

glabel D_ovl33_80136370
  .incbin "ovl33.raw.bin", 0x4870, 0x4
  /* 4874 1623C4 80136374 */
  .asciz "BH"
  .balign 4
  /* 4878 1623C8 80136378 */
  .asciz "B8"
  .balign 4
  /* 487C 1623CC 8013637C */
  .asciz "BL"
  .balign 4
  .incbin "ovl33.raw.bin", 0x4880, 0x4
  /* 4884 1623D4 80136384 */
  .asciz "BL"
  .balign 4
  .incbin "ovl33.raw.bin", 0x4888, 0x4
  /* 488C 1623DC 8013638C */
  .asciz "BL"
  .balign 4
  .incbin "ovl33.raw.bin", 0x4890, 0x4
  /* 4894 1623E4 80136394 */
  .asciz "BH"
  .balign 4
  /* 4898 1623E8 80136398 */
  .asciz "B0"
  .balign 4
  /* 489C 1623EC 8013639C */
  .asciz "BD"
  .balign 4
  /* 48A0 1623F0 801363A0 */
  .asciz "B"
  .balign 4
  /* 48A4 1623F4 801363A4 */
  .asciz "BD"
  .balign 4
  .incbin "ovl33.raw.bin", 0x48A8, 0x4
  /* 48AC 1623FC 801363AC */
  .asciz "B@"
  .balign 4
  .incbin "ovl33.raw.bin", 0x48B0, 0x4
  /* 48B4 162404 801363B4 */
  .asciz "BD"
  .balign 4
  .incbin "ovl33.raw.bin", 0x48B8, 0x4
  /* 48BC 16240C 801363BC */
  .asciz "BH"
  .balign 4
  .incbin "ovl33.raw.bin", 0x48C0, 0x4
  /* 48C4 162414 801363C4 */
  .asciz "BD"
  .balign 4
  /* 48C8 162418 801363C8 */
  .asciz "B("
  .balign 4
  /* 48CC 16241C 801363CC */
  .asciz "BP"
  .balign 4

glabel D_ovl33_801363D0
  .incbin "ovl33.raw.bin", 0x48D0, 0x30

glabel D_ovl33_80136400
  .incbin "ovl33.raw.bin", 0x4900, 0x30

glabel D_ovl33_80136430
  /* 4930 162480 80136430 */  .4byte D_ovl33_801340B0
  /* 4934 162484 80136434 */  .4byte D_ovl33_801341D0
  /* 4938 162488 80136438 */  .4byte D_ovl33_801342F0
  /* 493C 16248C 8013643C */  .4byte D_ovl33_80134410
  /* 4940 162490 80136440 */  .4byte D_ovl33_80134530
  /* 4944 162494 80136444 */  .4byte D_ovl33_80134650
  /* 4948 162498 80136448 */  .4byte D_ovl33_80134770
  /* 494C 16249C 8013644C */  .4byte D_ovl33_80134890
  /* 4950 1624A0 80136450 */  .4byte D_ovl33_801349B0
  /* 4954 1624A4 80136454 */  .4byte D_ovl33_80134AD0
  /* 4958 1624A8 80136458 */  .4byte D_ovl33_80134BF0
  /* 495C 1624AC 8013645C */  .4byte D_ovl33_80134D10

glabel D_ovl33_80136460
  .incbin "ovl33.raw.bin", 0x4960, 0x90

glabel D_ovl33_801364F0
  .incbin "ovl33.raw.bin", 0x49F0, 0xC

glabel D_ovl33_801364FC
  /* 49FC 16254C 801364FC */  .4byte D_NF_80392A00
  /* 4A00 162550 80136500 */  .4byte D_NF_803B6900
  /* 4A04 162554 80136504 */  .4byte D_NF_803DA800
  .incbin "ovl33.raw.bin", 0x4A08, 0x10

glabel D_ovl33_80136518
  .incbin "ovl33.raw.bin", 0x4A18, 0x4
  /* 4A1C 16256C 8013651C */  .4byte func_8000A5E4
  /* 4A20 162570 80136520 */  .4byte func_800A26B8
  /* 4A24 162574 80136524 */  .4byte D_NF_80136A90
  .incbin "ovl33.raw.bin", 0x4A28, 0x28
  /* 4A50 1625A0 80136550 */  .4byte func_ovl33_80131B00
  /* 4A54 1625A4 80136554 */  .4byte update_contdata
  .incbin "ovl33.raw.bin", 0x4A58, 0x20
  /* 4A78 1625C8 80136578 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl33.raw.bin", 0x4A7C, 0x24
  /* 4AA0 1625F0 801365A0 */  .4byte func_ovl33_80133E28
  .incbin "ovl33.raw.bin", 0x4AA4, 0xC

glabel D_ovl33_801365B0
  /* 4AB0 162600 801365B0 */
  .4byte 0x43808000 # .float 257.0

glabel D_ovl33_801365B4
  /* 4AB4 162604 801365B4 */
  .4byte 0x43898000 # .float 275.0

glabel D_ovl33_801365B8
  /* 4AB8 162608 801365B8 */
  .4byte 0x3fd9999a # .float 1.7

glabel D_ovl33_801365BC
  /* 4ABC 16260C 801365BC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl33_801365C0
  /* 4AC0 162610 801365C0 */
  .4byte 0x3c0efa35 # .float 0.008726646

glabel D_ovl33_801365C4
  /* 4AC4 162614 801365C4 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl33_801365C8
  /* 4AC8 162618 801365C8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl33_801365CC
  /* 4ACC 16261C 801365CC */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl33_801365D0
  /* 4AD0 162620 801365D0 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl33_801365D4
  /* 4AD4 162624 801365D4 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl33_801365D8
  /* 4AD8 162628 801365D8 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl33_801365DC
  /* 4ADC 16262C 801365DC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl33_801365E0
  /* 4AE0 162630 801365E0 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl33_801365E4
  /* 4AE4 162634 801365E4 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl33.raw.bin", 0x4AE8, 0x8
