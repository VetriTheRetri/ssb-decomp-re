.include "macros.inc"

.section .data

# Data Sections
#  8018D870 -> 8018DA40


glabel D_ovl51_8018D870
  /* 7B0 1750F0 8018D870 */
  .asciz "Dz"
  .balign 4
  /* 7B4 1750F4 8018D874 */
  .asciz "Da"
  .balign 4
  /* 7B8 1750F8 8018D878 */
  .asciz "Ea"
  .balign 4

glabel D_ovl51_8018D87C
  .incbin "ovl51.raw.bin", 0x07BC, 0x4
  /* 7C0 175100 8018D880 */
  .asciz "DH"
  .balign 4
  .incbin "ovl51.raw.bin", 0x07C4, 0x8

glabel D_ovl51_8018D88C
  .incbin "ovl51.raw.bin", 0x07CC, 0x4
  /* 7D0 175110 8018D890 */
  .asciz "DH"
  .balign 4
  .incbin "ovl51.raw.bin", 0x07D4, 0x4
  /* 7D8 175118 8018D898 */
  .asciz "Dz"
  .balign 4
  /* 7DC 17511C 8018D89C */
  .asciz "D/"
  .balign 4
  .incbin "ovl51.raw.bin", 0x07E0, 0x8

glabel D_ovl51_8018D8A8
  .incbin "ovl51.raw.bin", 0x07E8, 0xC

glabel D_ovl51_8018D8B4
  /* 7F4 175134 8018D8B4 */
  .asciz " 2"
  .balign 4
  .incbin "ovl51.raw.bin", 0x07F8, 0x4
  /* 7FC 17513C 8018D8BC */
  .asciz " \nP"
  .balign 4
  .incbin "ovl51.raw.bin", 0x0800, 0x8

glabel D_ovl51_8018D8C8
  /* 808 175148 8018D8C8 */
  .asciz " <P"
  .balign 4
  .incbin "ovl51.raw.bin", 0x080C, 0x4
  /* 810 175150 8018D8D0 */
  .asciz " \n"
  .balign 4
  .incbin "ovl51.raw.bin", 0x0814, 0xC

glabel D_ovl51_8018D8E0
  .incbin "ovl51.raw.bin", 0x0820, 0x8

glabel D_ovl51_8018D8E8
  .incbin "ovl51.raw.bin", 0x0828, 0xC
  /* 834 175174 8018D8F4 */
  .asciz " K"
  .balign 4
  .incbin "ovl51.raw.bin", 0x0838, 0x20

glabel D_ovl51_8018D918
  /* 858 175198 8018D918 */
  .asciz " ("
  .balign 4
  .incbin "ovl51.raw.bin", 0x085C, 0x10

glabel D_ovl51_8018D92C
  .incbin "ovl51.raw.bin", 0x086C, 0x8

glabel D_ovl51_8018D934
  .incbin "ovl51.raw.bin", 0x0874, 0x8

glabel D_ovl51_8018D93C
  /* 87C 1751BC 8018D93C */  .4byte D_NF_80392A00
  /* 880 1751C0 8018D940 */  .4byte D_NF_803B6900
  /* 884 1751C4 8018D944 */  .4byte D_NF_803DA800
  .incbin "ovl51.raw.bin", 0x0888, 0x10

glabel D_ovl51_8018D958
  .incbin "ovl51.raw.bin", 0x0898, 0x4
  /* 89C 1751DC 8018D95C */  .4byte func_8000A5E4
  /* 8A0 1751E0 8018D960 */  .4byte func_800A26B8
  /* 8A4 1751E4 8018D964 */  .4byte D_NF_8018DE60
  .incbin "ovl51.raw.bin", 0x08A8, 0x28
  /* 8D0 175210 8018D990 */  .4byte func_ovl51_8018D7CC
  /* 8D4 175214 8018D994 */  .4byte update_contdata
  .incbin "ovl51.raw.bin", 0x08D8, 0x20
  /* 8F8 175238 8018D9B8 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl51.raw.bin", 0x08FC, 0x24
  /* 920 175260 8018D9E0 */  .4byte func_ovl51_8018D670
  .incbin "ovl51.raw.bin", 0x0924, 0xC

glabel D_ovl51_8018D9F0
  /* 930 175270 8018D9F0 */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl51_8018DA0C
  /* 94C 17528C 8018DA0C */
  .asciz "wrong number of mapobject\n"
  .balign 4

glabel D_ovl51_8018DA28
  /* 968 1752A8 8018DA28 */
  .4byte 0x3fae8ba3 # .float 1.3636364

glabel D_ovl51_8018DA2C
  /* 96C 1752AC 8018DA2C */
  .4byte 0x466a6000 # .float 15000.0

glabel D_ovl51_8018DA30
  /* 970 1752B0 8018DA30 */
  .4byte 0x44898000 # .float 1100.0
  .incbin "ovl51.raw.bin", 0x0974, 0xC
