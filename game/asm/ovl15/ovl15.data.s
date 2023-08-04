.include "macros.inc"

.section .data

# Data Sections
#  800D66E0 -> 800D69F0


glabel D_ovl15_800D66E0
  /* 250 150990 800D66E0 */
  .asciz "   "
  .balign 4
  /* 254 150994 800D66E4 */
  .asciz "   "
  .balign 4

glabel D_ovl15_800D66E8
  .incbin "ovl15.raw.bin", 0x0258, 0x8
  /* 260 1509A0 800D66F0 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl15.raw.bin", 0x0264, 0x4

glabel D_ovl15_800D66F8
  .incbin "ovl15.raw.bin", 0x0268, 0x14
  /* 27C 1509BC 800D670C */  .4byte D_ovl15_800D66E8
  .incbin "ovl15.raw.bin", 0x0280, 0x4
  /* 284 1509C4 800D6714 */  .4byte D_ovl15_800D66E0
  .incbin "ovl15.raw.bin", 0x0288, 0x8

glabel D_ovl15_800D6720
  .incbin "ovl15.raw.bin", 0x0290, 0x4

glabel D_ovl15_800D6724
  /* 294 1509D4 800D6724 */  .4byte D_ovl15_800D6950
  /* 298 1509D8 800D6728 */  .4byte D_ovl15_800D6958
  /* 29C 1509DC 800D672C */  .4byte D_ovl15_800D695C
  /* 2A0 1509E0 800D6730 */  .4byte D_ovl15_800D6964
  /* 2A4 1509E4 800D6734 */  .4byte D_ovl15_800D696C

glabel D_ovl15_800D6738
  .incbin "ovl15.raw.bin", 0x02A8, 0x4
  /* 2AC 1509EC 800D673C */  .4byte func_ovl15_800D64B4
  /* 2B0 1509F0 800D6740 */  .4byte D_ovl15_800D6974
  .incbin "ovl15.raw.bin", 0x02B4, 0x18
  /* 2CC 150A0C 800D675C */  .4byte D_ovl15_800D6724
  /* 2D0 150A10 800D6760 */  .4byte (D_800A4D08 + 0x23)
  .incbin "ovl15.raw.bin", 0x02D4, 0x14
  /* 2E8 150A28 800D6778 */  .4byte D_ovl15_800D697C
  /* 2EC 150A2C 800D677C */  .4byte (D_800A4D08 + 0x30)
  .incbin "ovl15.raw.bin", 0x02F0, 0x14
  /* 304 150A44 800D6794 */  .4byte D_ovl15_800D6988
  /* 308 150A48 800D6798 */  .4byte (D_800A4D08 + 0x34)
  .incbin "ovl15.raw.bin", 0x030C, 0x14
  /* 320 150A60 800D67B0 */  .4byte D_ovl15_800D6724
  /* 324 150A64 800D67B4 */  .4byte (D_800A4D08 + 0x97)
  .incbin "ovl15.raw.bin", 0x0328, 0x14
  /* 33C 150A7C 800D67CC */  .4byte D_ovl15_800D6998
  /* 340 150A80 800D67D0 */  .4byte (D_800A4D08 + 0xA4)
  .incbin "ovl15.raw.bin", 0x0344, 0x14
  /* 358 150A98 800D67E8 */  .4byte D_ovl15_800D69A4
  /* 35C 150A9C 800D67EC */  .4byte (D_800A4D08 + 0xA8)
  .incbin "ovl15.raw.bin", 0x0360, 0x14
  /* 374 150AB4 800D6804 */  .4byte D_ovl15_800D6724
  /* 378 150AB8 800D6808 */  .4byte (D_800A4D08 + 0x10B)
  .incbin "ovl15.raw.bin", 0x037C, 0x14
  /* 390 150AD0 800D6820 */  .4byte D_ovl15_800D69B4
  /* 394 150AD4 800D6824 */  .4byte (D_800A4D08 + 0x118)
  .incbin "ovl15.raw.bin", 0x0398, 0x14
  /* 3AC 150AEC 800D683C */  .4byte D_ovl15_800D69C0
  /* 3B0 150AF0 800D6840 */  .4byte (D_800A4D08 + 0x11C)
  .incbin "ovl15.raw.bin", 0x03B4, 0x14
  /* 3C8 150B08 800D6858 */  .4byte D_ovl15_800D6724
  /* 3CC 150B0C 800D685C */  .4byte (D_800A4D08 + 0x17F)
  .incbin "ovl15.raw.bin", 0x03D0, 0x14
  /* 3E4 150B24 800D6874 */  .4byte D_ovl15_800D69D0
  /* 3E8 150B28 800D6878 */  .4byte (D_800A4D08 + 0x18C)
  .incbin "ovl15.raw.bin", 0x03EC, 0x14
  /* 400 150B40 800D6890 */  .4byte D_ovl15_800D69DC
  /* 404 150B44 800D6894 */  .4byte (D_800A4D08 + 0x190)
  .incbin "ovl15.raw.bin", 0x0408, 0xC

glabel D_ovl15_800D68A4
  /* 414 150B54 800D68A4 */  .4byte D_NF_80392A00
  /* 418 150B58 800D68A8 */  .4byte D_NF_803B6900
  /* 41C 150B5C 800D68AC */  .4byte D_NF_803DA800
  .incbin "ovl15.raw.bin", 0x0420, 0x10

glabel D_ovl15_800D68C0
  .incbin "ovl15.raw.bin", 0x0430, 0x4
  /* 434 150B74 800D68C4 */  .4byte func_8000A5E4
  /* 438 150B78 800D68C8 */  .4byte func_8000A340
  /* 43C 150B7C 800D68CC */  .4byte D_NF_800D6A00
  .incbin "ovl15.raw.bin", 0x0440, 0x28
  /* 468 150BA8 800D68F8 */  .4byte func_ovl15_800D6490
  /* 46C 150BAC 800D68FC */  .4byte update_contdata
  .incbin "ovl15.raw.bin", 0x0470, 0x48
  /* 4B8 150BF8 800D6948 */  .4byte func_ovl15_800D660C
  .incbin "ovl15.raw.bin", 0x04BC, 0x4

glabel D_ovl15_800D6950
  /* 4C0 150C00 800D6950 */
  .asciz "Mario"
  .balign 4

glabel D_ovl15_800D6958
  /* 4C8 150C08 800D6958 */
  .asciz "Fox"
  .balign 4

glabel D_ovl15_800D695C
  /* 4CC 150C0C 800D695C */
  .asciz "Donkey"
  .balign 4

glabel D_ovl15_800D6964
  /* 4D4 150C14 800D6964 */
  .asciz "Samus"
  .balign 4

glabel D_ovl15_800D696C
  /* 4DC 150C1C 800D696C */
  .asciz "Luigi"
  .balign 4

glabel D_ovl15_800D6974
  /* 4E4 150C24 800D6974 */
  .asciz "Exit"
  .balign 4

glabel D_ovl15_800D697C
  /* 4EC 150C2C 800D697C */
  .asciz " Dead : %3d"
  .balign 4

glabel D_ovl15_800D6988
  /* 4F8 150C38 800D6988 */
  .asciz " Finish : %3d"
  .balign 4

glabel D_ovl15_800D6998
  /* 508 150C48 800D6998 */
  .asciz " Dead : %3d"
  .balign 4

glabel D_ovl15_800D69A4
  /* 514 150C54 800D69A4 */
  .asciz " Finish : %3d"
  .balign 4

glabel D_ovl15_800D69B4
  /* 524 150C64 800D69B4 */
  .asciz " Dead : %3d"
  .balign 4

glabel D_ovl15_800D69C0
  /* 530 150C70 800D69C0 */
  .asciz " Finish : %3d"
  .balign 4

glabel D_ovl15_800D69D0
  /* 540 150C80 800D69D0 */
  .asciz " Dead : %3d"
  .balign 4

glabel D_ovl15_800D69DC
  /* 54C 150C8C 800D69DC */
  .asciz " Finish : %3d"
  .balign 4

glabel D_ovl15_800D69EC
  /* 55C 150C9C 800D69EC */
  .4byte 0x453b8000 # .float 3000.0
