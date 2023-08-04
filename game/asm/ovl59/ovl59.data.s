.include "macros.inc"

.section .data

# Data Sections
#  80135260 -> 8013A7D0


glabel D_ovl59_80135260
  .incbin "ovl59.raw.bin", 0x3760, 0x1294

glabel D_ovl59_801364F4
  .incbin "ovl59.raw.bin", 0x49F4, 0x4

glabel D_ovl59_801364F8
  .incbin "ovl59.raw.bin", 0x49F8, 0x2A4

glabel D_ovl59_8013679C
  .incbin "ovl59.raw.bin", 0x4C9C, 0xC0

glabel D_ovl59_8013685C
  .incbin "ovl59.raw.bin", 0x4D5C, 0x2B4

glabel D_ovl59_80136B10
  .incbin "ovl59.raw.bin", 0x5010, 0x90

glabel D_ovl59_80136BA0
  .incbin "ovl59.raw.bin", 0x50A0, 0x2FC8

glabel D_ovl59_80139B68
  .incbin "ovl59.raw.bin", 0x8068, 0x298

glabel D_ovl59_80139E00
  .incbin "ovl59.raw.bin", 0x8300, 0x8

glabel D_ovl59_80139E08
  .incbin "ovl59.raw.bin", 0x8308, 0x1CC

glabel D_ovl59_80139FD4
  .incbin "ovl59.raw.bin", 0x84D4, 0x60

glabel D_ovl59_8013A034
  .incbin "ovl59.raw.bin", 0x8534, 0x150

glabel D_ovl59_8013A184
  .incbin "ovl59.raw.bin", 0x8684, 0x4

glabel D_ovl59_8013A188
  .incbin "ovl59.raw.bin", 0x8688, 0x1C0

glabel D_ovl59_8013A348
  .incbin "ovl59.raw.bin", 0x8848, 0xD8
  /* 8920 187B20 8013A420 */
  .asciz "\n\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8924, 0xC
  /* 8930 187B30 8013A430 */
  .asciz "\n\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8934, 0xC
  /* 8940 187B40 8013A440 */
  .asciz "\t\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8944, 0xC
  /* 8950 187B50 8013A450 */
  .asciz "\n\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8954, 0x14
  /* 8968 187B68 8013A468 */
  .asciz "\n\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x896C, 0x44
  /* 89B0 187BB0 8013A4B0 */
  .asciz "\t\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x89B4, 0xDC
  /* 8A90 187C90 8013A590 */
  .asciz "\n\r"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8A94, 0x4

glabel D_ovl59_8013A598
  .incbin "ovl59.raw.bin", 0x8A98, 0x48

glabel D_ovl59_8013A5E0
  .incbin "ovl59.raw.bin", 0x8AE0, 0x14

glabel D_ovl59_8013A5F4
  .incbin "ovl59.raw.bin", 0x8AF4, 0x28

glabel D_ovl59_8013A61C
  .incbin "ovl59.raw.bin", 0x8B1C, 0x20

glabel D_ovl59_8013A63C
  .incbin "ovl59.raw.bin", 0x8B3C, 0x10

glabel D_ovl59_8013A64C
  .incbin "ovl59.raw.bin", 0x8B4C, 0x28

glabel D_ovl59_8013A674
  .incbin "ovl59.raw.bin", 0x8B74, 0x20

glabel D_ovl59_8013A694
  .incbin "ovl59.raw.bin", 0x8B94, 0x34

glabel D_ovl59_8013A6C8
  /* 8BC8 187DC8 8013A6C8 */
  .asciz "   "
  .balign 4
  /* 8BCC 187DCC 8013A6CC */
  .asciz "   "
  .balign 4

glabel D_ovl59_8013A6D0
  .incbin "ovl59.raw.bin", 0x8BD0, 0x8
  /* 8BD8 187DD8 8013A6D8 */
  .asciz "\n22"
  .balign 4
  .incbin "ovl59.raw.bin", 0x8BDC, 0x4

glabel D_ovl59_8013A6E0
  .incbin "ovl59.raw.bin", 0x8BE0, 0x14
  /* 8BF4 187DF4 8013A6F4 */  .4byte D_ovl59_8013A6D0
  .incbin "ovl59.raw.bin", 0x8BF8, 0x4
  /* 8BFC 187DFC 8013A6FC */  .4byte D_ovl59_8013A6C8
  .incbin "ovl59.raw.bin", 0x8C00, 0x8

glabel D_ovl59_8013A708
  /* 8C08 187E08 8013A708 */  .4byte D_NF_8023E000
  /* 8C0C 187E0C 8013A70C */  .4byte D_NF_802D4000
  /* 8C10 187E10 8013A710 */  .4byte D_NF_8036A000
  .incbin "ovl59.raw.bin", 0x8C14, 0x10

glabel D_ovl59_8013A724
  .incbin "ovl59.raw.bin", 0x8C24, 0x4
  /* 8C28 187E28 8013A728 */  .4byte func_8000A5E4
  /* 8C2C 187E2C 8013A72C */  .4byte func_ovl59_80135118
  /* 8C30 187E30 8013A730 */  .4byte D_NF_8013AA60
  .incbin "ovl59.raw.bin", 0x8C34, 0x28
  /* 8C5C 187E5C 8013A75C */  .4byte func_ovl59_801350F4
  /* 8C60 187E60 8013A760 */  .4byte update_contdata
  .incbin "ovl59.raw.bin", 0x8C64, 0x48
  /* 8CAC 187EAC 8013A7AC */  .4byte func_ovl59_8013505C

glabel D_ovl59_8013A7B0
  /* 8CB0 187EB0 8013A7B0 */
  .4byte 0x3b75c290 # .float 0.0037500001

glabel D_ovl59_8013A7B4
  /* 8CB4 187EB4 8013A7B4 */
  .4byte 0x3d4ccccc # .float 0.049999997

glabel D_ovl59_8013A7B8
  /* 8CB8 187EB8 8013A7B8 */
  .4byte 0x43918000 # .float 291.0

glabel D_ovl59_8013A7BC
  /* 8CBC 187EBC 8013A7BC */
  .4byte 0x4019999a # .float 2.4

glabel D_ovl59_8013A7C0
  /* 8CC0 187EC0 8013A7C0 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl59_8013A7C4
  /* 8CC4 187EC4 8013A7C4 */
  .4byte 0x3e19999a # .float 0.15

glabel D_ovl59_8013A7C8
  /* 8CC8 187EC8 8013A7C8 */
  .4byte 0x3b75c290 # .float 0.0037500001
  .incbin "ovl59.raw.bin", 0x8CCC, 0x4
