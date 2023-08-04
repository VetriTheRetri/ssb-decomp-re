.include "macros.inc"

.section .data

# Data Sections
#  8013B3A0 -> 8013BA80


glabel D_ovl26_8013B3A0
  .incbin "ovl26.raw.bin", 0x98A0, 0x20
  /* 98C0 139640 8013B3C0 */
  .asciz "   "
  .balign 4
  /* 98C4 139644 8013B3C4 */
  .asciz "   "
  .balign 4
  .incbin "ovl26.raw.bin", 0x98C8, 0x10
  /* 98D8 139658 8013B3D8 */
  .asciz "   "
  .balign 4
  /* 98DC 13965C 8013B3DC */
  .asciz "   "
  .balign 4
  .incbin "ovl26.raw.bin", 0x98E0, 0x10

glabel D_ovl26_8013B3F0
  .incbin "ovl26.raw.bin", 0x98F0, 0xC
  /* 98FC 13967C 8013B3FC */
  .asciz "C "
  .balign 4
  /* 9900 139680 8013B400 */
  .asciz "CM"
  .balign 4
  /* 9904 139684 8013B404 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9908, 0xC
  /* 9914 139694 8013B414 */
  .asciz "C "
  .balign 4
  /* 9918 139698 8013B418 */
  .asciz "CM"
  .balign 4
  /* 991C 13969C 8013B41C */
  .asciz "Cz"
  .balign 4

glabel D_ovl26_8013B420
  .incbin "ovl26.raw.bin", 0x9920, 0x30

glabel D_ovl26_8013B450
  .incbin "ovl26.raw.bin", 0x9950, 0x84

glabel D_ovl26_8013B4D4
  .incbin "ovl26.raw.bin", 0x99D4, 0x30

glabel D_ovl26_8013B504
  .incbin "ovl26.raw.bin", 0x9A04, 0x30

glabel D_ovl26_8013B534
  .incbin "ovl26.raw.bin", 0x9A34, 0x30

glabel D_ovl26_8013B564
  .incbin "ovl26.raw.bin", 0x9A64, 0x30

glabel D_ovl26_8013B594
  .incbin "ovl26.raw.bin", 0x9A94, 0xC

glabel D_ovl26_8013B5A0
  .incbin "ovl26.raw.bin", 0x9AA0, 0xC

glabel D_ovl26_8013B5AC
  .incbin "ovl26.raw.bin", 0x9AAC, 0x38
  /* 9AE4 139864 8013B5E4 */
  .asciz "@@"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9AE8, 0x24

glabel D_ovl26_8013B60C
  .incbin "ovl26.raw.bin", 0x9B0C, 0x30

glabel D_ovl26_8013B63C
  .incbin "ovl26.raw.bin", 0x9B3C, 0x30

glabel D_ovl26_8013B66C
  .incbin "ovl26.raw.bin", 0x9B6C, 0x10

glabel D_ovl26_8013B67C
  .incbin "ovl26.raw.bin", 0x9B7C, 0x10

glabel D_ovl26_8013B68C
  .incbin "ovl26.raw.bin", 0x9B8C, 0xC

glabel D_ovl26_8013B698
  .incbin "ovl26.raw.bin", 0x9B98, 0xC

glabel D_ovl26_8013B6A4
  .incbin "ovl26.raw.bin", 0x9BA4, 0x10

glabel D_ovl26_8013B6B4
  /* 9BB4 139934 8013B6B4 */
  .asciz "A"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9BB8, 0xC

glabel D_ovl26_8013B6C4
  .incbin "ovl26.raw.bin", 0x9BC4, 0x10

glabel D_ovl26_8013B6D4
  /* 9BD4 139954 8013B6D4 */
  .asciz "A"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9BD8, 0xC

glabel jtbl_ovl26_8013B6E4
  /* 9BE4 139964 8013B6E4 */  .4byte jtgt_ovl26_8013317C
  /* 9BE8 139968 8013B6E8 */  .4byte jtgt_ovl26_801331C8
  /* 9BEC 13996C 8013B6EC */  .4byte jtgt_ovl26_80133214
  /* 9BF0 139970 8013B6F0 */  .4byte jtgt_ovl26_80133260

glabel D_ovl26_8013B6F4
  .incbin "ovl26.raw.bin", 0x9BF4, 0x10

glabel D_ovl26_8013B704
  .incbin "ovl26.raw.bin", 0x9C04, 0x28

glabel D_ovl26_8013B72C
  .incbin "ovl26.raw.bin", 0x9C2C, 0x18

glabel D_ovl26_8013B744
  .incbin "ovl26.raw.bin", 0x9C44, 0x18

glabel D_ovl26_8013B75C
  .incbin "ovl26.raw.bin", 0x9C5C, 0x8

glabel D_ovl26_8013B764
  .incbin "ovl26.raw.bin", 0x9C64, 0x8

glabel D_ovl26_8013B76C
  .incbin "ovl26.raw.bin", 0x9C6C, 0x18

glabel D_ovl26_8013B784
  .incbin "ovl26.raw.bin", 0x9C84, 0x10

glabel D_ovl26_8013B794
  .incbin "ovl26.raw.bin", 0x9C94, 0xC

glabel D_ovl26_8013B7A0
  .incbin "ovl26.raw.bin", 0x9CA0, 0x18

glabel D_ovl26_8013B7B8
  .incbin "ovl26.raw.bin", 0x9CB8, 0x10

glabel D_ovl26_8013B7C8
  .incbin "ovl26.raw.bin", 0x9CC8, 0x8

glabel D_ovl26_8013B7D0
  .incbin "ovl26.raw.bin", 0x9CD0, 0x8

glabel D_ovl26_8013B7D8
  .incbin "ovl26.raw.bin", 0x9CD8, 0xC

glabel D_ovl26_8013B7E4
  .incbin "ovl26.raw.bin", 0x9CE4, 0xC

glabel D_ovl26_8013B7F0
  .incbin "ovl26.raw.bin", 0x9CF0, 0x10

glabel D_ovl26_8013B800
  .incbin "ovl26.raw.bin", 0x9D00, 0x18

glabel D_ovl26_8013B818
  .incbin "ovl26.raw.bin", 0x9D18, 0x28

glabel D_ovl26_8013B840
  .incbin "ovl26.raw.bin", 0x9D40, 0x10

glabel D_ovl26_8013B850
  .incbin "ovl26.raw.bin", 0x9D50, 0x10

glabel D_ovl26_8013B860
  .incbin "ovl26.raw.bin", 0x9D60, 0x10

glabel D_ovl26_8013B870
  .incbin "ovl26.raw.bin", 0x9D70, 0x18

glabel D_ovl26_8013B888
  .incbin "ovl26.raw.bin", 0x9D88, 0x14

glabel D_ovl26_8013B89C
  .incbin "ovl26.raw.bin", 0x9D9C, 0x10

glabel D_ovl26_8013B8AC
  /* 9DAC 139B2C 8013B8AC */
  .asciz "B "
  .balign 4
  /* 9DB0 139B30 8013B8B0 */
  .asciz "C*"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9DB4, 0x4
  /* 9DB8 139B38 8013B8B8 */
  .asciz "C*"
  .balign 4
  /* 9DBC 139B3C 8013B8BC */
  .asciz "C0"
  .balign 4
  /* 9DC0 139B40 8013B8C0 */
  .asciz "C*"
  .balign 4
  /* 9DC4 139B44 8013B8C4 */
  .asciz "Ct"
  .balign 4
  /* 9DC8 139B48 8013B8C8 */
  .asciz "C*"
  .balign 4

glabel D_ovl26_8013B8CC
  .incbin "ovl26.raw.bin", 0x9DCC, 0x10

glabel D_ovl26_8013B8DC
  .incbin "ovl26.raw.bin", 0x9DDC, 0x10

glabel D_ovl26_8013B8EC
  .incbin "ovl26.raw.bin", 0x9DEC, 0x10

glabel D_ovl26_8013B8FC
  .incbin "ovl26.raw.bin", 0x9DFC, 0x10

glabel D_ovl26_8013B90C
  .incbin "ovl26.raw.bin", 0x9E0C, 0x8
  /* 9E14 139B94 8013B914 */
  .asciz "@"
  .balign 4
  .incbin "ovl26.raw.bin", 0x9E18, 0x24

glabel D_ovl26_8013B93C
  .incbin "ovl26.raw.bin", 0x9E3C, 0x20

glabel D_ovl26_8013B95C
  .incbin "ovl26.raw.bin", 0x9E5C, 0x20

glabel D_ovl26_8013B97C
  .incbin "ovl26.raw.bin", 0x9E7C, 0x4

glabel D_ovl26_8013B980
  /* 9E80 139C00 8013B980 */  .4byte D_NF_80392A00
  /* 9E84 139C04 8013B984 */  .4byte D_NF_803B6900
  /* 9E88 139C08 8013B988 */  .4byte D_NF_803DA800
  .incbin "ovl26.raw.bin", 0x9E8C, 0x10

glabel D_ovl26_8013B99C
  .incbin "ovl26.raw.bin", 0x9E9C, 0x4
  /* 9EA0 139C20 8013B9A0 */  .4byte func_8000A5E4
  /* 9EA4 139C24 8013B9A4 */  .4byte func_800A26B8
  /* 9EA8 139C28 8013B9A8 */  .4byte D_NF_8013C4C0
  .incbin "ovl26.raw.bin", 0x9EAC, 0x28
  /* 9ED4 139C54 8013B9D4 */  .4byte func_ovl26_80131B20
  /* 9ED8 139C58 8013B9D8 */  .4byte update_contdata
  .incbin "ovl26.raw.bin", 0x9EDC, 0x20
  /* 9EFC 139C7C 8013B9FC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl26.raw.bin", 0x9F00, 0x24
  /* 9F24 139CA4 8013BA24 */  .4byte func_ovl26_8013B0C8
  .incbin "ovl26.raw.bin", 0x9F28, 0x8

glabel jtbl_ovl26_8013BA30
  /* 9F30 139CB0 8013BA30 */  .4byte jtgt_ovl26_80134930
  /* 9F34 139CB4 8013BA34 */  .4byte jtgt_ovl26_8013490C
  /* 9F38 139CB8 8013BA38 */  .4byte jtgt_ovl26_80134918
  /* 9F3C 139CBC 8013BA3C */  .4byte jtgt_ovl26_8013490C
  /* 9F40 139CC0 8013BA40 */  .4byte jtgt_ovl26_80134918
  /* 9F44 139CC4 8013BA44 */  .4byte jtgt_ovl26_80134918
  /* 9F48 139CC8 8013BA48 */  .4byte jtgt_ovl26_80134924
  /* 9F4C 139CCC 8013BA4C */  .4byte jtgt_ovl26_80134918
  /* 9F50 139CD0 8013BA50 */  .4byte jtgt_ovl26_80134930
  /* 9F54 139CD4 8013BA54 */  .4byte jtgt_ovl26_8013493C
  /* 9F58 139CD8 8013BA58 */  .4byte jtgt_ovl26_80134924
  /* 9F5C 139CDC 8013BA5C */  .4byte jtgt_ovl26_80134924

glabel D_ovl26_8013BA60
  /* 9F60 139CE0 8013BA60 */
  .4byte 0x3ae4c389 # .float 0.0017453294
  .incbin "ovl26.raw.bin", 0x9F64, 0x4

glabel D_ovl26_8013BA68
  /* 9F68 139CE8 8013BA68 */
  .4byte 0x3eb2b8c2 # .float 0.34906584

glabel D_ovl26_8013BA6C
  /* 9F6C 139CEC 8013BA6C */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl26_8013BA70
  /* 9F70 139CF0 8013BA70 */
  .4byte 0x3d0efa35 # .float 0.034906585

glabel D_ovl26_8013BA74
  /* 9F74 139CF4 8013BA74 */
  .4byte 0xc4548000 # .float -850.0

glabel D_ovl26_8013BA78
  /* 9F78 139CF8 8013BA78 */
  .4byte 0x459c4000 # .float 5000.0

glabel D_ovl26_8013BA7C
  /* 9F7C 139CFC 8013BA7C */
  .4byte 0xc4548000 # .float -850.0
