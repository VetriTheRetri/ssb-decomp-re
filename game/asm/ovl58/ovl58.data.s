.include "macros.inc"

.section .data

# Data Sections
#  80131F50 -> 80132040


glabel D_ovl58_80131F50
  .incbin "ovl58.raw.bin", 0x0450, 0x4

glabel D_ovl58_80131F54
  .incbin "ovl58.raw.bin", 0x0454, 0x4

glabel D_ovl58_80131F58
  /* 458 17F118 80131F58 */
  .asciz "   "
  .balign 4
  /* 45C 17F11C 80131F5C */
  .asciz "   "
  .balign 4

glabel D_ovl58_80131F60
  .incbin "ovl58.raw.bin", 0x0460, 0x8
  /* 468 17F128 80131F68 */
  .asciz "\n22"
  .balign 4
  .incbin "ovl58.raw.bin", 0x046C, 0x4

glabel D_ovl58_80131F70
  .incbin "ovl58.raw.bin", 0x0470, 0x14
  /* 484 17F144 80131F84 */  .4byte D_ovl58_80131F60
  .incbin "ovl58.raw.bin", 0x0488, 0x4
  /* 48C 17F14C 80131F8C */  .4byte D_ovl58_80131F58
  .incbin "ovl58.raw.bin", 0x0490, 0x8

glabel D_ovl58_80131F98
  /* 498 17F158 80131F98 */  .4byte D_NF_80392A00
  /* 49C 17F15C 80131F9C */  .4byte D_NF_803B6900
  /* 4A0 17F160 80131FA0 */  .4byte D_NF_803DA800
  .incbin "ovl58.raw.bin", 0x04A4, 0x10

glabel D_ovl58_80131FB4
  .incbin "ovl58.raw.bin", 0x04B4, 0x4
  /* 4B8 17F178 80131FB8 */  .4byte func_8000A5E4
  /* 4BC 17F17C 80131FBC */  .4byte func_8000A340
  /* 4C0 17F180 80131FC0 */  .4byte D_NF_80132080
  .incbin "ovl58.raw.bin", 0x04C4, 0x28
  /* 4EC 17F1AC 80131FEC */  .4byte func_ovl58_80131ECC
  /* 4F0 17F1B0 80131FF0 */  .4byte update_contdata
  .incbin "ovl58.raw.bin", 0x04F4, 0x4C
