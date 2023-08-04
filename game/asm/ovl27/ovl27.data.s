.include "macros.inc"

.section .data

# Data Sections
#  801385B0 -> 80138EE0

  .incbin "ovl27.raw.bin", 0x6AB0, 0x48
  /* 6AF8 1407F8 801385F8 */
  .asciz "1A{A"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6B00, 0x30

glabel D_ovl27_80138630
  .incbin "ovl27.raw.bin", 0x6B30, 0x30
  /* 6B60 140860 80138660 */
  .asciz "   "
  .balign 4
  /* 6B64 140864 80138664 */
  .asciz "   "
  .balign 4
  .incbin "ovl27.raw.bin", 0x6B68, 0x10
  /* 6B78 140878 80138678 */
  .asciz "   "
  .balign 4
  /* 6B7C 14087C 8013867C */
  .asciz "   "
  .balign 4
  .incbin "ovl27.raw.bin", 0x6B80, 0x10

glabel D_ovl27_80138690
  .incbin "ovl27.raw.bin", 0x6B90, 0x28

glabel D_ovl27_801386B8
  .incbin "ovl27.raw.bin", 0x6BB8, 0x74

glabel D_ovl27_8013872C
  .incbin "ovl27.raw.bin", 0x6C2C, 0x20
  /* 6C4C 14094C 8013874C */
  .asciz "@@"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6C50, 0x44
  /* 6C94 140994 80138794 */
  .asciz "@"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6C98, 0x4
  /* 6C9C 14099C 8013879C */
  .asciz "@@"
  .balign 4

glabel D_ovl27_801387A0
  .incbin "ovl27.raw.bin", 0x6CA0, 0xC
  /* 6CAC 1409AC 801387AC */
  .asciz "C "
  .balign 4
  /* 6CB0 1409B0 801387B0 */
  .asciz "CM"
  .balign 4
  /* 6CB4 1409B4 801387B4 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6CB8, 0xC
  /* 6CC4 1409C4 801387C4 */
  .asciz "C "
  .balign 4
  /* 6CC8 1409C8 801387C8 */
  .asciz "CM"
  .balign 4
  /* 6CCC 1409CC 801387CC */
  .asciz "Cz"
  .balign 4

glabel D_ovl27_801387D0
  .incbin "ovl27.raw.bin", 0x6CD0, 0x30

glabel D_ovl27_80138800
  .incbin "ovl27.raw.bin", 0x6D00, 0x84

glabel D_ovl27_80138884
  .incbin "ovl27.raw.bin", 0x6D84, 0x30

glabel D_ovl27_801388B4
  .incbin "ovl27.raw.bin", 0x6DB4, 0x30

glabel D_ovl27_801388E4
  .incbin "ovl27.raw.bin", 0x6DE4, 0x30

glabel D_ovl27_80138914
  .incbin "ovl27.raw.bin", 0x6E14, 0x30

glabel D_ovl27_80138944
  /* 6E44 140B44 80138944 */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E48, 0x14
  /* 6E5C 140B5C 8013895C */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E60, 0x4
  /* 6E64 140B64 80138964 */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E68, 0x4
  /* 6E6C 140B6C 8013896C */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E70, 0x14
  /* 6E84 140B84 80138984 */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E88, 0x4
  /* 6E8C 140B8C 8013898C */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E90, 0x4
  /* 6E94 140B94 80138994 */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6E98, 0x4
  /* 6E9C 140B9C 8013899C */
  .asciz "AP"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6EA0, 0x4

glabel D_ovl27_801389A4
  .incbin "ovl27.raw.bin", 0x6EA4, 0x30

glabel D_ovl27_801389D4
  .incbin "ovl27.raw.bin", 0x6ED4, 0x30

glabel D_ovl27_80138A04
  .incbin "ovl27.raw.bin", 0x6F04, 0x10

glabel D_ovl27_80138A14
  .incbin "ovl27.raw.bin", 0x6F14, 0x10

glabel D_ovl27_80138A24
  /* 6F24 140C24 80138A24 */
  .asciz "A"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6F28, 0xC

glabel D_ovl27_80138A34
  .incbin "ovl27.raw.bin", 0x6F34, 0x28

glabel D_ovl27_80138A5C
  /* 6F5C 140C5C 80138A5C */
  .asciz "A"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6F60, 0x8
  /* 6F68 140C68 80138A68 */
  .asciz "A"
  .balign 4
  /* 6F6C 140C6C 80138A6C */
  .asciz "A"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6F70, 0x4
  /* 6F74 140C74 80138A74 */
  .asciz "A"
  .balign 4
  /* 6F78 140C78 80138A78 */
  .asciz "A"
  .balign 4
  /* 6F7C 140C7C 80138A7C */
  .asciz "A"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6F80, 0x4

glabel D_ovl27_80138A84
  .incbin "ovl27.raw.bin", 0x6F84, 0x18

glabel D_ovl27_80138A9C
  .incbin "ovl27.raw.bin", 0x6F9C, 0x14

glabel D_ovl27_80138AB0
  /* 6FB0 140CB0 80138AB0 */
  .asciz "CL"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6FB4, 0x4
  /* 6FB8 140CB8 80138AB8 */
  .asciz "C["
  .balign 4
  .incbin "ovl27.raw.bin", 0x6FBC, 0x4
  /* 6FC0 140CC0 80138AC0 */
  .asciz "CQ"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6FC4, 0x4
  /* 6FC8 140CC8 80138AC8 */
  .asciz "C["
  .balign 4
  .incbin "ovl27.raw.bin", 0x6FCC, 0x4
  /* 6FD0 140CD0 80138AD0 */
  .asciz "CM"
  .balign 4
  .incbin "ovl27.raw.bin", 0x6FD4, 0x4

glabel D_ovl27_80138AD8
  .incbin "ovl27.raw.bin", 0x6FD8, 0x10

glabel D_ovl27_80138AE8
  .incbin "ovl27.raw.bin", 0x6FE8, 0xC

glabel D_ovl27_80138AF4
  .incbin "ovl27.raw.bin", 0x6FF4, 0x18

glabel D_ovl27_80138B0C
  .incbin "ovl27.raw.bin", 0x700C, 0x10

glabel D_ovl27_80138B1C
  .incbin "ovl27.raw.bin", 0x701C, 0x18

glabel D_ovl27_80138B34
  .incbin "ovl27.raw.bin", 0x7034, 0xC

glabel D_ovl27_80138B40
  .incbin "ovl27.raw.bin", 0x7040, 0x18

glabel D_ovl27_80138B58
  .incbin "ovl27.raw.bin", 0x7058, 0x18

glabel D_ovl27_80138B70
  .incbin "ovl27.raw.bin", 0x7070, 0x18

glabel D_ovl27_80138B88
  .incbin "ovl27.raw.bin", 0x7088, 0x10

glabel D_ovl27_80138B98
  .incbin "ovl27.raw.bin", 0x7098, 0xC

glabel D_ovl27_80138BA4
  .incbin "ovl27.raw.bin", 0x70A4, 0x18

glabel D_ovl27_80138BBC
  .incbin "ovl27.raw.bin", 0x70BC, 0x18

glabel D_ovl27_80138BD4
  .incbin "ovl27.raw.bin", 0x70D4, 0x10

glabel D_ovl27_80138BE4
  .incbin "ovl27.raw.bin", 0x70E4, 0x10

glabel D_ovl27_80138BF4
  .incbin "ovl27.raw.bin", 0x70F4, 0x2C

glabel D_ovl27_80138C20
  .incbin "ovl27.raw.bin", 0x7120, 0x10

glabel D_ovl27_80138C30
  .incbin "ovl27.raw.bin", 0x7130, 0x10

glabel D_ovl27_80138C40
  .incbin "ovl27.raw.bin", 0x7140, 0x10

glabel D_ovl27_80138C50
  .incbin "ovl27.raw.bin", 0x7150, 0x10

glabel D_ovl27_80138C60
  .incbin "ovl27.raw.bin", 0x7160, 0x8
  /* 7168 140E68 80138C68 */
  .asciz "@"
  .balign 4
  .incbin "ovl27.raw.bin", 0x716C, 0x24

glabel D_ovl27_80138C90
  /* 7190 140E90 80138C90 */  .4byte D_NF_80392A00
  /* 7194 140E94 80138C94 */  .4byte D_NF_803B6900
  /* 7198 140E98 80138C98 */  .4byte D_NF_803DA800
  .incbin "ovl27.raw.bin", 0x719C, 0x10

glabel D_ovl27_80138CAC
  .incbin "ovl27.raw.bin", 0x71AC, 0x4
  /* 71B0 140EB0 80138CB0 */  .4byte func_8000A5E4
  /* 71B4 140EB4 80138CB4 */  .4byte func_8000A340
  /* 71B8 140EB8 80138CB8 */  .4byte D_NF_801396D0
  .incbin "ovl27.raw.bin", 0x71BC, 0x28
  /* 71E4 140EE4 80138CE4 */  .4byte func_ovl27_80131B00
  /* 71E8 140EE8 80138CE8 */  .4byte update_contdata
  .incbin "ovl27.raw.bin", 0x71EC, 0x20
  /* 720C 140F0C 80138D0C */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl27.raw.bin", 0x7210, 0x24
  /* 7234 140F34 80138D34 */  .4byte func_ovl27_80138334
  .incbin "ovl27.raw.bin", 0x7238, 0x8

glabel D_ovl27_80138D40
  /* 7240 140F40 80138D40 */
  .asciz "HIGH SCORE"
  .balign 4

glabel D_ovl27_80138D4C
  /* 724C 140F4C 80138D4C */
  .asciz "TOTAL HIGH SCORE"
  .balign 4

glabel jtbl_ovl27_80138D60
  /* 7260 140F60 80138D60 */  .4byte jtgt_ovl27_801320A8
  /* 7264 140F64 80138D64 */  .4byte jtgt_ovl27_801320C8
  /* 7268 140F68 80138D68 */  .4byte jtgt_ovl27_801320C8
  /* 726C 140F6C 80138D6C */  .4byte jtgt_ovl27_801320C8
  /* 7270 140F70 80138D70 */  .4byte jtgt_ovl27_801320C8
  /* 7274 140F74 80138D74 */  .4byte jtgt_ovl27_801320C8
  /* 7278 140F78 80138D78 */  .4byte jtgt_ovl27_801320C8
  /* 727C 140F7C 80138D7C */  .4byte jtgt_ovl27_801320B8
  /* 7280 140F80 80138D80 */  .4byte jtgt_ovl27_801320C8
  /* 7284 140F84 80138D84 */  .4byte jtgt_ovl27_801320C8
  /* 7288 140F88 80138D88 */  .4byte jtgt_ovl27_801320C8
  /* 728C 140F8C 80138D8C */  .4byte jtgt_ovl27_801320C8
  /* 7290 140F90 80138D90 */  .4byte jtgt_ovl27_801320C8
  /* 7294 140F94 80138D94 */  .4byte jtgt_ovl27_801320C8
  /* 7298 140F98 80138D98 */  .4byte jtgt_ovl27_801320C8
  /* 729C 140F9C 80138D9C */  .4byte jtgt_ovl27_801320C8
  /* 72A0 140FA0 80138DA0 */  .4byte jtgt_ovl27_801320C8
  /* 72A4 140FA4 80138DA4 */  .4byte jtgt_ovl27_801320C8
  /* 72A8 140FA8 80138DA8 */  .4byte jtgt_ovl27_801320C8
  /* 72AC 140FAC 80138DAC */  .4byte jtgt_ovl27_801320C8
  /* 72B0 140FB0 80138DB0 */  .4byte jtgt_ovl27_801320C8
  /* 72B4 140FB4 80138DB4 */  .4byte jtgt_ovl27_801320C8
  /* 72B8 140FB8 80138DB8 */  .4byte jtgt_ovl27_801320C8
  /* 72BC 140FBC 80138DBC */  .4byte jtgt_ovl27_801320C8
  /* 72C0 140FC0 80138DC0 */  .4byte jtgt_ovl27_801320C8
  /* 72C4 140FC4 80138DC4 */  .4byte jtgt_ovl27_801320C8
  /* 72C8 140FC8 80138DC8 */  .4byte jtgt_ovl27_80132000
  /* 72CC 140FCC 80138DCC */  .4byte jtgt_ovl27_801320C8
  /* 72D0 140FD0 80138DD0 */  .4byte jtgt_ovl27_801320C8
  /* 72D4 140FD4 80138DD4 */  .4byte jtgt_ovl27_801320C8
  /* 72D8 140FD8 80138DD8 */  .4byte jtgt_ovl27_801320C8
  /* 72DC 140FDC 80138DDC */  .4byte jtgt_ovl27_80132044
  /* 72E0 140FE0 80138DE0 */  .4byte jtgt_ovl27_801320C8
  /* 72E4 140FE4 80138DE4 */  .4byte jtgt_ovl27_801320C8
  /* 72E8 140FE8 80138DE8 */  .4byte jtgt_ovl27_801320C8
  /* 72EC 140FEC 80138DEC */  .4byte jtgt_ovl27_801320C8
  /* 72F0 140FF0 80138DF0 */  .4byte jtgt_ovl27_801320C8
  /* 72F4 140FF4 80138DF4 */  .4byte jtgt_ovl27_801320C8
  /* 72F8 140FF8 80138DF8 */  .4byte jtgt_ovl27_801320C8
  /* 72FC 140FFC 80138DFC */  .4byte jtgt_ovl27_801320C8
  /* 7300 141000 80138E00 */  .4byte jtgt_ovl27_801320C8
  /* 7304 141004 80138E04 */  .4byte jtgt_ovl27_80132044
  /* 7308 141008 80138E08 */  .4byte jtgt_ovl27_80132078
  /* 730C 14100C 80138E0C */  .4byte jtgt_ovl27_801320C8
  /* 7310 141010 80138E10 */  .4byte jtgt_ovl27_801320C8
  /* 7314 141014 80138E14 */  .4byte jtgt_ovl27_80132078
  /* 7318 141018 80138E18 */  .4byte jtgt_ovl27_801320C8
  /* 731C 14101C 80138E1C */  .4byte jtgt_ovl27_80132044
  /* 7320 141020 80138E20 */  .4byte jtgt_ovl27_801320C8
  /* 7324 141024 80138E24 */  .4byte jtgt_ovl27_801320C8
  /* 7328 141028 80138E28 */  .4byte jtgt_ovl27_80132044

glabel D_ovl27_80138E2C
  /* 732C 14102C 80138E2C */  .4byte jtgt_ovl27_80132028
  /* 7330 141030 80138E30 */  .4byte jtgt_ovl27_80132034
  /* 7334 141034 80138E34 */  .4byte jtgt_ovl27_80132034
  /* 7338 141038 80138E38 */  .4byte jtgt_ovl27_80132034
  /* 733C 14103C 80138E3C */  .4byte jtgt_ovl27_80132034
  /* 7340 141040 80138E40 */  .4byte jtgt_ovl27_80132034
  /* 7344 141044 80138E44 */  .4byte jtgt_ovl27_80132034
  /* 7348 141048 80138E48 */  .4byte jtgt_ovl27_80132034
  /* 734C 14104C 80138E4C */  .4byte jtgt_ovl27_80132034
  /* 7350 141050 80138E50 */  .4byte jtgt_ovl27_80132034
  /* 7354 141054 80138E54 */  .4byte jtgt_ovl27_80132028
  /* 7358 141058 80138E58 */  .4byte jtgt_ovl27_80132034
  /* 735C 14105C 80138E5C */  .4byte jtgt_ovl27_80132034
  /* 7360 141060 80138E60 */  .4byte jtgt_ovl27_80132034
  /* 7364 141064 80138E64 */  .4byte jtgt_ovl27_80132028
  /* 7368 141068 80138E68 */  .4byte jtgt_ovl27_80132034
  /* 736C 14106C 80138E6C */  .4byte jtgt_ovl27_80132028
  /* 7370 141070 80138E70 */  .4byte jtgt_ovl27_80132034
  /* 7374 141074 80138E74 */  .4byte jtgt_ovl27_80132034
  /* 7378 141078 80138E78 */  .4byte jtgt_ovl27_80132028

glabel D_ovl27_80138E7C
  /* 737C 14107C 80138E7C */
  .4byte 0x43868000 # .float 269.0

glabel D_ovl27_80138E80
  /* 7380 141080 80138E80 */
  .4byte 0x43868000 # .float 269.0

glabel jtbl_ovl27_80138E84
  /* 7384 141084 80138E84 */  .4byte jtgt_ovl27_80134F24
  /* 7388 141088 80138E88 */  .4byte jtgt_ovl27_80134F00
  /* 738C 14108C 80138E8C */  .4byte jtgt_ovl27_80134F0C
  /* 7390 141090 80138E90 */  .4byte jtgt_ovl27_80134F00
  /* 7394 141094 80138E94 */  .4byte jtgt_ovl27_80134F0C
  /* 7398 141098 80138E98 */  .4byte jtgt_ovl27_80134F0C
  /* 739C 14109C 80138E9C */  .4byte jtgt_ovl27_80134F18
  /* 73A0 1410A0 80138EA0 */  .4byte jtgt_ovl27_80134F0C
  /* 73A4 1410A4 80138EA4 */  .4byte jtgt_ovl27_80134F24
  /* 73A8 1410A8 80138EA8 */  .4byte jtgt_ovl27_80134F30
  /* 73AC 1410AC 80138EAC */  .4byte jtgt_ovl27_80134F18
  /* 73B0 1410B0 80138EB0 */  .4byte jtgt_ovl27_80134F18

glabel D_ovl27_80138EB4
  /* 73B4 1410B4 80138EB4 */
  .4byte 0x3ae4c389 # .float 0.0017453294
  .incbin "ovl27.raw.bin", 0x73B8, 0x4

glabel D_ovl27_80138EBC
  /* 73BC 1410BC 80138EBC */
  .4byte 0x3eb2b8c2 # .float 0.34906584

glabel D_ovl27_80138EC0
  /* 73C0 1410C0 80138EC0 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl27_80138EC4
  /* 73C4 1410C4 80138EC4 */
  .4byte 0x3d0efa35 # .float 0.034906585

glabel D_ovl27_80138EC8
  /* 73C8 1410C8 80138EC8 */
  .4byte 0xc4898000 # .float -1100.0

glabel D_ovl27_80138ECC
  /* 73CC 1410CC 80138ECC */
  .4byte 0xc4548000 # .float -850.0

glabel D_ovl27_80138ED0
  /* 73D0 1410D0 80138ED0 */
  .4byte 0x459c4000 # .float 5000.0

glabel D_ovl27_80138ED4
  /* 73D4 1410D4 80138ED4 */
  .4byte 0xc4898000 # .float -1100.0

glabel D_ovl27_80138ED8
  /* 73D8 1410D8 80138ED8 */
  .4byte 0xc4548000 # .float -850.0
  .incbin "ovl27.raw.bin", 0x73DC, 0x4
