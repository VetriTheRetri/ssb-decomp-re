.include "macros.inc"

.section .data

# Data Sections
#  8018EEC0 -> 8018F1A0

  .incbin "ovl6.raw.bin", 0x1E00, 0x4

glabel D_ovl6_8018EEC4
  .incbin "ovl6.raw.bin", 0x1E04, 0x90

glabel D_ovl6_8018EF54
  .incbin "ovl6.raw.bin", 0x1E94, 0x60

glabel D_ovl6_8018EFB4
  .incbin "ovl6.raw.bin", 0x1EF4, 0x30

glabel D_ovl6_8018EFE4
  .incbin "ovl6.raw.bin", 0x1F24, 0x18

glabel D_ovl6_8018EFFC
  .incbin "ovl6.raw.bin", 0x1F3C, 0x4
  /* 1F40 113740 8018F000 */
  .asciz "Ea"
  .balign 4
  .incbin "ovl6.raw.bin", 0x1F44, 0x4
  /* 1F48 113748 8018F008 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl6.raw.bin", 0x1F4C, 0x8

glabel D_ovl6_8018F014
  .incbin "ovl6.raw.bin", 0x1F54, 0x18

glabel D_ovl6_8018F02C
  .incbin "ovl6.raw.bin", 0x1F6C, 0x10

glabel D_ovl6_8018F03C
  .incbin "ovl6.raw.bin", 0x1F7C, 0x4

glabel D_ovl6_8018F040
  /* 1F80 113780 8018F040 */
  .asciz "   "
  .balign 4
  /* 1F84 113784 8018F044 */
  .asciz "   "
  .balign 4

glabel D_ovl6_8018F048
  .incbin "ovl6.raw.bin", 0x1F88, 0x8
  /* 1F90 113790 8018F050 */
  .asciz "222"
  .balign 4
  .incbin "ovl6.raw.bin", 0x1F94, 0x18
  /* 1FAC 1137AC 8018F06C */  .4byte D_ovl6_8018F048
  .incbin "ovl6.raw.bin", 0x1FB0, 0x4
  /* 1FB4 1137B4 8018F074 */  .4byte D_ovl6_8018F040
  .incbin "ovl6.raw.bin", 0x1FB8, 0x8

glabel D_ovl6_8018F080
  /* 1FC0 1137C0 8018F080 */  .4byte D_NF_80392A00
  /* 1FC4 1137C4 8018F084 */  .4byte D_NF_803B6900
  /* 1FC8 1137C8 8018F088 */  .4byte D_NF_803DA800
  .incbin "ovl6.raw.bin", 0x1FCC, 0x10

glabel D_ovl6_8018F09C
  .incbin "ovl6.raw.bin", 0x1FDC, 0x4
  /* 1FE0 1137E0 8018F0A0 */  .4byte func_ovl6_8018D0D0
  /* 1FE4 1137E4 8018F0A4 */  .4byte func_800A26B8
  /* 1FE8 1137E8 8018F0A8 */  .4byte D_NF_8018F710
  .incbin "ovl6.raw.bin", 0x1FEC, 0x28
  /* 2014 113814 8018F0D4 */  .4byte func_ovl6_8018EA80
  /* 2018 113818 8018F0D8 */  .4byte update_contdata
  .incbin "ovl6.raw.bin", 0x201C, 0x20
  /* 203C 11383C 8018F0FC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl6.raw.bin", 0x2040, 0x24
  /* 2064 113864 8018F124 */  .4byte func_ovl6_8018E5F8
  .incbin "ovl6.raw.bin", 0x2068, 0x8

glabel D_ovl6_8018F130
  .incbin "ovl6.raw.bin", 0x2070, 0x4
  /* 2074 113874 8018F134 */  .4byte D_ovl6_8018F1A0
  .incbin "ovl6.raw.bin", 0x2078, 0x28
  /* 20A0 1138A0 8018F160 */  .4byte func_ovl6_8018EE10
  .incbin "ovl6.raw.bin", 0x20A4, 0xC

glabel D_ovl6_8018F170
  /* 20B0 1138B0 8018F170 */
  .asciz "Error : not %d targets!\n"
  .balign 4

glabel D_ovl6_8018F18C
  /* 20CC 1138CC 8018F18C */
  .4byte 0x443b8000 # .float 750.0

glabel D_ovl6_8018F190
  /* 20D0 1138D0 8018F190 */
  .4byte 0x44834000 # .float 1050.0

glabel D_ovl6_8018F194
  /* 20D4 1138D4 8018F194 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl6_8018F198
  /* 20D8 1138D8 8018F198 */
  .4byte 0x3e99999a # .float 0.3
  .incbin "ovl6.raw.bin", 0x20DC, 0x4
