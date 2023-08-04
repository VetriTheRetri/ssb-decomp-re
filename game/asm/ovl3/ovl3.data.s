.include "macros.inc"

.section .data

# Data Sections
#  80186660 -> 8018CF80


glabel D_ovl3_80186660
  .incbin "ovl3.raw.bin", 0x54B60, 0x24

glabel D_ovl3_80186684
  .incbin "ovl3.raw.bin", 0x54B84, 0x18
  /* 54B9C 1010DC 8018669C */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54BA0, 0xC
  /* 54BAC 1010EC 801866AC */
  .asciz "B4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54BB0, 0x18
  /* 54BC8 101108 801866C8 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54BCC, 0x24
  /* 54BF0 101130 801866F0 */
  .asciz "D "
  .balign 4
  .incbin "ovl3.raw.bin", 0x54BF4, 0x2C
  /* 54C20 101160 80186720 */
  .asciz "D4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54C24, 0x4
  /* 54C28 101168 80186728 */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54C2C, 0x64
  /* 54C90 1011D0 80186790 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54C94, 0x14
  /* 54CA8 1011E8 801867A8 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54CAC, 0x38
  /* 54CE4 101224 801867E4 */
  .asciz "CI"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54CE8, 0xA4
  /* 54D8C 1012CC 8018688C */
  .asciz "Cz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54D90, 0x24

glabel D_ovl3_801868B4
  .incbin "ovl3.raw.bin", 0x54DB4, 0xC
  /* 54DC0 101300 801868C0 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54DC4, 0x18
  /* 54DDC 10131C 801868DC */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54DE0, 0x3C
  /* 54E1C 10135C 8018691C */
  .asciz "C9"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54E20, 0x18
  /* 54E38 101378 80186938 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54E3C, 0x38
  /* 54E74 1013B4 80186974 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54E78, 0x48
  /* 54EC0 101400 801869C0 */
  .asciz "C4"
  .balign 4
  /* 54EC4 101404 801869C4 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54EC8, 0x10
  /* 54ED8 101418 801869D8 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54EDC, 0x3C
  /* 54F18 101458 80186A18 */
  .asciz "Bl"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54F1C, 0x18
  /* 54F34 101474 80186A34 */
  .asciz "BT"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54F38, 0x1C
  /* 54F54 101494 80186A54 */
  .asciz "D0"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54F58, 0x48
  /* 54FA0 1014E0 80186AA0 */
  .asciz "B,"
  .balign 4
  /* 54FA4 1014E4 80186AA4 */
  .asciz "Cj"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54FA8, 0x14
  /* 54FBC 1014FC 80186ABC */
  .asciz "C4"
  .balign 4
  /* 54FC0 101500 80186AC0 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x54FC4, 0x20

glabel D_ovl3_80186AE4
  .incbin "ovl3.raw.bin", 0x54FE4, 0xC
  /* 54FF0 101530 80186AF0 */
  .asciz "C*"
  .balign 4
  /* 54FF4 101534 80186AF4 */
  .asciz "D/"
  .balign 4
  /* 54FF8 101538 80186AF8 */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x54FFC, 0x10
  /* 5500C 10154C 80186B0C */
  .asciz "C*"
  .balign 4
  /* 55010 101550 80186B10 */
  .asciz "D/"
  .balign 4
  /* 55014 101554 80186B14 */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x55018, 0x10
  /* 55028 101568 80186B28 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5502C, 0x4
  /* 55030 101570 80186B30 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55034, 0x18
  /* 5504C 10158C 80186B4C */
  .asciz "CH"
  .balign 4
  /* 55050 101590 80186B50 */
  .asciz "Dq@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55054, 0x18
  /* 5506C 1015AC 80186B6C */
  .asciz "Dv@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55070, 0xC
  /* 5507C 1015BC 80186B7C */
  .asciz "C>"
  .balign 4
  /* 55080 1015C0 80186B80 */
  .asciz "D>"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55084, 0x4
  /* 55088 1015C8 80186B88 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5508C, 0x30
  /* 550BC 1015FC 80186BBC */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x550C0, 0x18
  /* 550D8 101618 80186BD8 */
  .asciz "B "
  .balign 4
  /* 550DC 10161C 80186BDC */
  .asciz "D4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x550E0, 0x18
  /* 550F8 101638 80186BF8 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x550FC, 0xC
  /* 55108 101648 80186C08 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5510C, 0x108

glabel D_ovl3_80186D14
  .incbin "ovl3.raw.bin", 0x55214, 0xC
  /* 55220 101760 80186D20 */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55224, 0x4
  /* 55228 101768 80186D28 */
  .asciz "Cp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5522C, 0x10
  /* 5523C 10177C 80186D3C */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55240, 0x4
  /* 55244 101784 80186D44 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55248, 0x18
  /* 55260 1017A0 80186D60 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55264, 0x48
  /* 552AC 1017EC 80186DAC */
  .asciz "C "
  .balign 4
  .incbin "ovl3.raw.bin", 0x552B0, 0x8
  /* 552B8 1017F8 80186DB8 */
  .asciz "CC"
  .balign 4
  .incbin "ovl3.raw.bin", 0x552BC, 0x30
  /* 552EC 10182C 80186DEC */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x552F0, 0xC0
  /* 553B0 1018F0 80186EB0 */
  .asciz "C1"
  .balign 4
  .incbin "ovl3.raw.bin", 0x553B4, 0x34
  /* 553E8 101928 80186EE8 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x553EC, 0x14
  /* 55400 101940 80186F00 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55404, 0x40

glabel D_ovl3_80186F44
  .incbin "ovl3.raw.bin", 0x55444, 0x18
  /* 5545C 10199C 80186F5C */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55460, 0xC
  /* 5546C 1019AC 80186F6C */
  .asciz "B4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55470, 0x18
  /* 55488 1019C8 80186F88 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5548C, 0x24
  /* 554B0 1019F0 80186FB0 */
  .asciz "D "
  .balign 4
  .incbin "ovl3.raw.bin", 0x554B4, 0x2C
  /* 554E0 101A20 80186FE0 */
  .asciz "D4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x554E4, 0x4
  /* 554E8 101A28 80186FE8 */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x554EC, 0x64
  /* 55550 101A90 80187050 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55554, 0x14
  /* 55568 101AA8 80187068 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5556C, 0x38
  /* 555A4 101AE4 801870A4 */
  .asciz "CI"
  .balign 4
  .incbin "ovl3.raw.bin", 0x555A8, 0xA4
  /* 5564C 101B8C 8018714C */
  .asciz "Cz"
  .balign 4
  /* 55650 101B90 80187150 */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x55654, 0x20

glabel D_ovl3_80187174
  .incbin "ovl3.raw.bin", 0x55674, 0x50
  /* 556C4 101C04 801871C4 */
  .asciz "D]@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x556C8, 0x10
  /* 556D8 101C18 801871D8 */
  .asciz "D%"
  .balign 4
  .incbin "ovl3.raw.bin", 0x556DC, 0x20
  /* 556FC 101C3C 801871FC */
  .asciz "Dk"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55700, 0xC
  /* 5570C 101C4C 8018720C */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55710, 0x8
  /* 55718 101C58 80187218 */
  .asciz "Cp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5571C, 0x10
  /* 5572C 101C6C 8018722C */
  .asciz "D9"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55730, 0x34
  /* 55764 101CA4 80187264 */
  .asciz "DD@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55768, 0x30
  /* 55798 101CD8 80187298 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5579C, 0x58
  /* 557F4 101D34 801872F4 */
  .asciz "B$"
  .balign 4
  .incbin "ovl3.raw.bin", 0x557F8, 0x14
  /* 5580C 101D4C 8018730C */
  .asciz "CI"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55810, 0x54
  /* 55864 101DA4 80187364 */
  .asciz "C>"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55868, 0x3C

glabel D_ovl3_801873A4
  .incbin "ovl3.raw.bin", 0x558A4, 0xC
  /* 558B0 101DF0 801873B0 */
  .asciz "Ap"
  .balign 4
  .incbin "ovl3.raw.bin", 0x558B4, 0x18
  /* 558CC 101E0C 801873CC */
  .asciz "Ap"
  .balign 4
  .incbin "ovl3.raw.bin", 0x558D0, 0x58
  /* 55928 101E68 80187428 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5592C, 0x14
  /* 55940 101E80 80187440 */
  .asciz "D!@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55944, 0x4
  /* 55948 101E88 80187448 */
  .asciz "Cu"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5594C, 0x10
  /* 5595C 101E9C 8018745C */
  .asciz "D+@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55960, 0x14
  /* 55974 101EB4 80187474 */
  .asciz "Ca"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55978, 0x1C
  /* 55994 101ED4 80187494 */
  .asciz "Da"
  .balign 4
  /* 55998 101ED8 80187498 */
  .asciz "DH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5599C, 0x30
  /* 559CC 101F0C 801874CC */
  .asciz "DS@"
  .balign 4
  /* 559D0 101F10 801874D0 */
  .asciz "B "
  .balign 4
  .incbin "ovl3.raw.bin", 0x559D4, 0x68
  /* 55A3C 101F7C 8018753C */
  .asciz "C;"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55A40, 0x18
  /* 55A58 101F98 80187558 */
  .asciz "C~"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55A5C, 0x14
  /* 55A70 101FB0 80187570 */
  .asciz "C`"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55A74, 0x38
  /* 55AAC 101FEC 801875AC */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55AB0, 0x24

glabel D_ovl3_801875D4
  .incbin "ovl3.raw.bin", 0x55AD4, 0x44
  /* 55B18 102058 80187618 */
  .asciz "CW"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B1C, 0x3C
  /* 55B58 102098 80187658 */
  .asciz "C9"
  .balign 4
  /* 55B5C 10209C 8018765C */
  .asciz "D\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B60, 0x10
  /* 55B70 1020B0 80187670 */
  .asciz "D:@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B74, 0x4
  /* 55B78 1020B8 80187678 */
  .asciz "Cu"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B7C, 0x10
  /* 55B8C 1020CC 8018768C */
  .asciz "D\r@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B90, 0x4
  /* 55B94 1020D4 80187694 */
  .asciz "C>"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55B98, 0xC
  /* 55BA4 1020E4 801876A4 */
  .asciz "B4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55BA8, 0x20
  /* 55BC8 102108 801876C8 */
  .asciz "B\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55BCC, 0x2C
  /* 55BF8 102138 801876F8 */
  .asciz "C/"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55BFC, 0x40
  /* 55C3C 10217C 8018773C */
  .asciz "Cn"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55C40, 0x50
  /* 55C90 1021D0 80187790 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55C94, 0xC
  /* 55CA0 1021E0 801877A0 */
  .asciz "B,"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55CA4, 0x38
  /* 55CDC 10221C 801877DC */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55CE0, 0x4
  /* 55CE4 102224 801877E4 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55CE8, 0x1C

glabel D_ovl3_80187804
  .incbin "ovl3.raw.bin", 0x55D04, 0x18
  /* 55D1C 10225C 8018781C */
  .asciz "Ck"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55D20, 0x14
  /* 55D34 102274 80187834 */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x55D38, 0x10
  /* 55D48 102288 80187848 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55D4C, 0x3C
  /* 55D88 1022C8 80187888 */
  .asciz "B "
  .balign 4
  /* 55D8C 1022CC 8018788C */
  .asciz "D?@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55D90, 0x18
  /* 55DA8 1022E8 801878A8 */
  .asciz "Cu"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55DAC, 0x7C
  /* 55E28 102368 80187928 */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55E2C, 0x38
  /* 55E64 1023A4 80187964 */
  .asciz "CP"
  .balign 4
  /* 55E68 1023A8 80187968 */
  .asciz "B"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55E6C, 0x14
  /* 55E80 1023C0 80187980 */
  .asciz "B`"
  .balign 4
  /* 55E84 1023C4 80187984 */
  .asciz "A`"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55E88, 0x1C
  /* 55EA4 1023E4 801879A4 */
  .asciz "D6@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55EA8, 0x10
  /* 55EB8 1023F8 801879B8 */
  .asciz "C;"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55EBC, 0x78

glabel D_ovl3_80187A34
  .incbin "ovl3.raw.bin", 0x55F34, 0x44
  /* 55F78 1024B8 80187A78 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55F7C, 0x4
  /* 55F80 1024C0 80187A80 */
  .asciz "Ca"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55F84, 0x14
  /* 55F98 1024D8 80187A98 */
  .asciz "D/"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55F9C, 0x20
  /* 55FBC 1024FC 80187ABC */
  .asciz "Dz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x55FC0, 0x44
  /* 56004 102544 80187B04 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56008, 0x1C
  /* 56024 102564 80187B24 */
  .asciz "D\r@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56028, 0x30
  /* 56058 102598 80187B58 */
  .asciz "C*"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5605C, 0x74
  /* 560D0 102610 80187BD0 */
  .asciz "C"
  .balign 4
  .incbin "ovl3.raw.bin", 0x560D4, 0x14
  /* 560E8 102628 80187BE8 */
  .asciz "C@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x560EC, 0x14
  /* 56100 102640 80187C00 */
  .asciz "C!"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56104, 0x60

glabel D_ovl3_80187C64
  .incbin "ovl3.raw.bin", 0x56164, 0x14
  /* 56178 1026B8 80187C78 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5617C, 0x10
  /* 5618C 1026CC 80187C8C */
  .asciz "B\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56190, 0x38
  /* 561C8 102708 80187CC8 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x561CC, 0x4
  /* 561D0 102710 80187CD0 */
  .asciz "D:@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x561D4, 0x50
  /* 56224 102764 80187D24 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56228, 0x10
  /* 56238 102778 80187D38 */
  .asciz "DI@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5623C, 0x4C
  /* 56288 1027C8 80187D88 */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5628C, 0x40
  /* 562CC 10280C 80187DCC */
  .asciz "Cq"
  .balign 4
  .incbin "ovl3.raw.bin", 0x562D0, 0x50
  /* 56320 102860 80187E20 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56324, 0x70

glabel D_ovl3_80187E94
  .incbin "ovl3.raw.bin", 0x56394, 0x18
  /* 563AC 1028EC 80187EAC */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x563B0, 0xC
  /* 563BC 1028FC 80187EBC */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x563C0, 0x38
  /* 563F8 102938 80187EF8 */
  .asciz "Cz"
  .balign 4
  /* 563FC 10293C 80187EFC */
  .asciz "CW"
  .balign 4
  /* 56400 102940 80187F00 */
  .asciz "D&@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56404, 0x14
  /* 56418 102958 80187F18 */
  .asciz "A "
  .balign 4
  .incbin "ovl3.raw.bin", 0x5641C, 0x4C
  /* 56468 1029A8 80187F68 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5646C, 0x4C
  /* 564B8 1029F8 80187FB8 */
  .asciz "BH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x564BC, 0x38
  /* 564F4 102A34 80187FF4 */
  .asciz "C\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x564F8, 0x4
  /* 564FC 102A3C 80187FFC */
  .asciz "CB"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56500, 0x48
  /* 56548 102A88 80188048 */
  .asciz "C@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5654C, 0x18
  /* 56564 102AA4 80188064 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56568, 0x5C

glabel D_ovl3_801880C4
  /* 565C4 102B04 801880C4 */  .4byte D_ovl3_80186684
  /* 565C8 102B08 801880C8 */  .4byte D_ovl3_801868B4
  /* 565CC 102B0C 801880CC */  .4byte D_ovl3_80186AE4
  /* 565D0 102B10 801880D0 */  .4byte D_ovl3_80186D14
  /* 565D4 102B14 801880D4 */  .4byte D_ovl3_80186F44
  /* 565D8 102B18 801880D8 */  .4byte D_ovl3_80187174
  /* 565DC 102B1C 801880DC */  .4byte D_ovl3_801873A4
  /* 565E0 102B20 801880E0 */  .4byte D_ovl3_80187A34
  /* 565E4 102B24 801880E4 */  .4byte D_ovl3_801875D4
  /* 565E8 102B28 801880E8 */  .4byte D_ovl3_80187804
  /* 565EC 102B2C 801880EC */  .4byte D_ovl3_80187C64
  /* 565F0 102B30 801880F0 */  .4byte D_ovl3_80187E94
  .incbin "ovl3.raw.bin", 0x565F4, 0x4
  /* 565F8 102B38 801880F8 */  .4byte D_ovl3_80186684
  /* 565FC 102B3C 801880FC */  .4byte D_ovl3_80186684
  /* 56600 102B40 80188100 */  .4byte D_ovl3_801868B4
  /* 56604 102B44 80188104 */  .4byte D_ovl3_80186AE4
  /* 56608 102B48 80188108 */  .4byte D_ovl3_80186D14
  /* 5660C 102B4C 8018810C */  .4byte D_ovl3_80186F44
  /* 56610 102B50 80188110 */  .4byte D_ovl3_80187174
  /* 56614 102B54 80188114 */  .4byte D_ovl3_801873A4
  /* 56618 102B58 80188118 */  .4byte D_ovl3_80187A34
  /* 5661C 102B5C 8018811C */  .4byte D_ovl3_801875D4
  /* 56620 102B60 80188120 */  .4byte D_ovl3_80187804
  /* 56624 102B64 80188124 */  .4byte D_ovl3_80187C64
  /* 56628 102B68 80188128 */  .4byte D_ovl3_80187E94
  /* 5662C 102B6C 8018812C */  .4byte D_ovl3_80186AE4

glabel D_ovl3_80188130
  .incbin "ovl3.raw.bin", 0x56630, 0x8

glabel D_ovl3_80188138
  .incbin "ovl3.raw.bin", 0x56638, 0x4

glabel D_ovl3_8018813C
  .incbin "ovl3.raw.bin", 0x5663C, 0x8

glabel D_ovl3_80188144
  .incbin "ovl3.raw.bin", 0x56644, 0x8

glabel D_ovl3_8018814C
  .incbin "ovl3.raw.bin", 0x5664C, 0xC

glabel D_ovl3_80188158
  .incbin "ovl3.raw.bin", 0x56658, 0x8

glabel D_ovl3_80188160
  .incbin "ovl3.raw.bin", 0x56660, 0xC

glabel D_ovl3_8018816C
  .incbin "ovl3.raw.bin", 0x5666C, 0x4

glabel D_ovl3_80188170
  .incbin "ovl3.raw.bin", 0x56670, 0x8

glabel D_ovl3_80188178
  .incbin "ovl3.raw.bin", 0x56678, 0xC

glabel D_ovl3_80188184
  .incbin "ovl3.raw.bin", 0x56684, 0xC

glabel D_ovl3_80188190
  .incbin "ovl3.raw.bin", 0x56690, 0xC

glabel D_ovl3_8018819C
  .incbin "ovl3.raw.bin", 0x5669C, 0x4

glabel D_ovl3_801881A0
  .incbin "ovl3.raw.bin", 0x566A0, 0xC

glabel D_ovl3_801881AC
  .incbin "ovl3.raw.bin", 0x566AC, 0x10

glabel D_ovl3_801881BC
  .incbin "ovl3.raw.bin", 0x566BC, 0xC

glabel D_ovl3_801881C8
  .incbin "ovl3.raw.bin", 0x566C8, 0x4

glabel D_ovl3_801881CC
  .incbin "ovl3.raw.bin", 0x566CC, 0x8

glabel D_ovl3_801881D4
  .incbin "ovl3.raw.bin", 0x566D4, 0x8

glabel D_ovl3_801881DC
  .incbin "ovl3.raw.bin", 0x566DC, 0x8

glabel D_ovl3_801881E4
  .incbin "ovl3.raw.bin", 0x566E4, 0xC

glabel D_ovl3_801881F0
  .incbin "ovl3.raw.bin", 0x566F0, 0xC

glabel D_ovl3_801881FC
  .incbin "ovl3.raw.bin", 0x566FC, 0xC

glabel D_ovl3_80188208
  .incbin "ovl3.raw.bin", 0x56708, 0xC

glabel D_ovl3_80188214
  .incbin "ovl3.raw.bin", 0x56714, 0xC

glabel D_ovl3_80188220
  .incbin "ovl3.raw.bin", 0x56720, 0x10

glabel D_ovl3_80188230
  .incbin "ovl3.raw.bin", 0x56730, 0x10

glabel D_ovl3_80188240
  .incbin "ovl3.raw.bin", 0x56740, 0xC

glabel D_ovl3_8018824C
  .incbin "ovl3.raw.bin", 0x5674C, 0xC

glabel D_ovl3_80188258
  .incbin "ovl3.raw.bin", 0x56758, 0xC

glabel D_ovl3_80188264
  .incbin "ovl3.raw.bin", 0x56764, 0x8

glabel D_ovl3_8018826C
  .incbin "ovl3.raw.bin", 0x5676C, 0x8

glabel D_ovl3_80188274
  .incbin "ovl3.raw.bin", 0x56774, 0xC

glabel D_ovl3_80188280
  .incbin "ovl3.raw.bin", 0x56780, 0x10

glabel D_ovl3_80188290
  .incbin "ovl3.raw.bin", 0x56790, 0xC

glabel D_ovl3_8018829C
  .incbin "ovl3.raw.bin", 0x5679C, 0x8

glabel D_ovl3_801882A4
  .incbin "ovl3.raw.bin", 0x567A4, 0x4

glabel D_ovl3_801882A8
  .incbin "ovl3.raw.bin", 0x567A8, 0x8

glabel D_ovl3_801882B0
  .incbin "ovl3.raw.bin", 0x567B0, 0x4

glabel D_ovl3_801882B4
  .incbin "ovl3.raw.bin", 0x567B4, 0x8

glabel D_ovl3_801882BC
  .incbin "ovl3.raw.bin", 0x567BC, 0xC

glabel D_ovl3_801882C8
  .incbin "ovl3.raw.bin", 0x567C8, 0xC

glabel D_ovl3_801882D4
  .incbin "ovl3.raw.bin", 0x567D4, 0xC

glabel D_ovl3_801882E0
  .incbin "ovl3.raw.bin", 0x567E0, 0x14

glabel D_ovl3_801882F4
  .incbin "ovl3.raw.bin", 0x567F4, 0x18

glabel D_ovl3_8018830C
  .incbin "ovl3.raw.bin", 0x5680C, 0xC

glabel D_ovl3_80188318
  .incbin "ovl3.raw.bin", 0x56818, 0xC

glabel D_ovl3_80188324
  .incbin "ovl3.raw.bin", 0x56824, 0x18

glabel D_ovl3_8018833C
  .incbin "ovl3.raw.bin", 0x5683C, 0x4

glabel gpComputerPlayerScripts
  /* 56840 102D80 80188340 */  .4byte D_ovl3_80188130
  /* 56844 102D84 80188344 */  .4byte D_ovl3_80188138
  /* 56848 102D88 80188348 */  .4byte D_ovl3_8018813C
  /* 5684C 102D8C 8018834C */  .4byte D_ovl3_80188144
  /* 56850 102D90 80188350 */  .4byte D_ovl3_8018814C
  /* 56854 102D94 80188354 */  .4byte D_ovl3_80188158
  /* 56858 102D98 80188358 */  .4byte D_ovl3_80188160
  /* 5685C 102D9C 8018835C */  .4byte D_ovl3_8018816C
  /* 56860 102DA0 80188360 */  .4byte D_ovl3_80188170
  /* 56864 102DA4 80188364 */  .4byte D_ovl3_80188178
  /* 56868 102DA8 80188368 */  .4byte D_ovl3_80188184
  /* 5686C 102DAC 8018836C */  .4byte D_ovl3_80188190
  /* 56870 102DB0 80188370 */  .4byte D_ovl3_8018819C
  /* 56874 102DB4 80188374 */  .4byte D_ovl3_801881A0
  /* 56878 102DB8 80188378 */  .4byte D_ovl3_801881AC
  /* 5687C 102DBC 8018837C */  .4byte D_ovl3_801881BC
  /* 56880 102DC0 80188380 */  .4byte D_ovl3_801881C8
  /* 56884 102DC4 80188384 */  .4byte D_ovl3_801881CC
  /* 56888 102DC8 80188388 */  .4byte D_ovl3_801881D4
  /* 5688C 102DCC 8018838C */  .4byte D_ovl3_801881DC
  /* 56890 102DD0 80188390 */  .4byte D_ovl3_801881E4
  /* 56894 102DD4 80188394 */  .4byte D_ovl3_801881F0
  /* 56898 102DD8 80188398 */  .4byte D_ovl3_801881FC
  /* 5689C 102DDC 8018839C */  .4byte D_ovl3_80188208
  /* 568A0 102DE0 801883A0 */  .4byte D_ovl3_80188220
  /* 568A4 102DE4 801883A4 */  .4byte D_ovl3_80188214
  /* 568A8 102DE8 801883A8 */  .4byte D_ovl3_80188230
  /* 568AC 102DEC 801883AC */  .4byte D_ovl3_80188240
  /* 568B0 102DF0 801883B0 */  .4byte D_ovl3_8018824C
  /* 568B4 102DF4 801883B4 */  .4byte D_ovl3_80188258
  /* 568B8 102DF8 801883B8 */  .4byte D_ovl3_80188264
  /* 568BC 102DFC 801883BC */  .4byte D_ovl3_8018826C
  /* 568C0 102E00 801883C0 */  .4byte D_ovl3_80188274
  /* 568C4 102E04 801883C4 */  .4byte D_ovl3_80188280
  /* 568C8 102E08 801883C8 */  .4byte D_ovl3_80188290
  /* 568CC 102E0C 801883CC */  .4byte D_ovl3_8018829C
  /* 568D0 102E10 801883D0 */  .4byte D_ovl3_801882A4
  /* 568D4 102E14 801883D4 */  .4byte D_ovl3_801882A8
  /* 568D8 102E18 801883D8 */  .4byte D_ovl3_801882B0
  /* 568DC 102E1C 801883DC */  .4byte D_ovl3_801882B4
  /* 568E0 102E20 801883E0 */  .4byte D_ovl3_801882BC
  /* 568E4 102E24 801883E4 */  .4byte D_ovl3_801882C8
  /* 568E8 102E28 801883E8 */  .4byte D_ovl3_801882D4
  /* 568EC 102E2C 801883EC */  .4byte D_ovl3_801882E0
  /* 568F0 102E30 801883F0 */  .4byte D_ovl3_801882F4
  /* 568F4 102E34 801883F4 */  .4byte D_ovl3_8018830C
  /* 568F8 102E38 801883F8 */  .4byte D_ovl3_80188318
  /* 568FC 102E3C 801883FC */  .4byte D_ovl3_80188324
  /* 56900 102E40 80188400 */  .4byte D_ovl3_8018833C
  .incbin "ovl3.raw.bin", 0x56904, 0xC

glabel D_ovl3_80188410
  .incbin "ovl3.raw.bin", 0x56910, 0x24
  /* 56934 102E74 80188434 */  .4byte 0x80008000
  .incbin "ovl3.raw.bin", 0x56938, 0x20

glabel D_ovl3_80188458
  .incbin "ovl3.raw.bin", 0x56958, 0x38

glabel ftCommon_Rebirth_OffsetX
  .incbin "ovl3.raw.bin", 0x56990, 0x8
  /* 56998 102ED8 80188498 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5699C, 0x4

glabel Fighter_Status_EntryStatusIndex
  .incbin "ovl3.raw.bin", 0x569A0, 0xD8

glabel ftKirby_JumpAerialF_VelY
  /* 56A78 102FB8 80188578 */
  .4byte 0x000000 # .float 0.0
  .incbin "ovl3.raw.bin", 0x56A7C, 0x4
  /* 56A80 102FC0 80188580 */
  .asciz "Bp"
  .balign 4
  /* 56A84 102FC4 80188584 */
  .asciz "BP"
  .balign 4

glabel ftPurin_JumpAerialF_VelY
  /* 56A88 102FC8 80188588 */
  .4byte 0x423c0000 # .float 47.0
  /* 56A8C 102FCC 8018858C */
  .asciz "B "
  .balign 4
  /* 56A90 102FD0 80188590 */
  .asciz "Bp"
  .balign 4
  /* 56A94 102FD4 80188594 */
  .asciz "B "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56A98, 0x8

glabel Fighter_StatusList_DamageGround
  .incbin "ovl3.raw.bin", 0x56AA0, 0x30

glabel Fighter_StatusList_DamageAir
  .incbin "ovl3.raw.bin", 0x56AD0, 0x30

glabel Fighter_StarRodSwing_Star_Offset
  .incbin "ovl3.raw.bin", 0x56B00, 0x4
  /* 56B04 103044 80188604 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56B08, 0x4

glabel Fighter_StarRodSwing_Dust_Offset
  .incbin "ovl3.raw.bin", 0x56B0C, 0x4
  /* 56B10 103050 80188610 */
  .asciz "CH"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56B14, 0x4

glabel Fighter_ItemSwing_Status
  .incbin "ovl3.raw.bin", 0x56B18, 0x48

glabel Fighter_LGunShoot_Ammo_Offset
  .incbin "ovl3.raw.bin", 0x56B60, 0x4
  /* 56B64 1030A4 80188664 */
  .asciz "Bp"
  .balign 4
  /* 56B68 1030A8 80188668 */
  .asciz "C4"
  .balign 4

glabel Fighter_LGunShoot_Dust_Offset
  .incbin "ovl3.raw.bin", 0x56B6C, 0x4
  /* 56B70 1030B0 80188670 */
  .asciz "Bp"
  .balign 4
  /* 56B74 1030B4 80188674 */
  .asciz "C4"
  .balign 4

glabel Fighter_FireFlowerShoot_Ammo_Offset
  /* 56B78 1030B8 80188678 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56B7C, 0x8

glabel Fighter_FireFlowerShoot_HaveAmmo_Dust_Offset
  /* 56B84 1030C4 80188684 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56B88, 0x8

glabel Fighter_FireFlowerShoot_NoAmmo_Dust_Offset
  .incbin "ovl3.raw.bin", 0x56B90, 0xC

glabel Fighter_FireFlowerShoot_Spark_Offset
  .incbin "ovl3.raw.bin", 0x56B9C, 0xC

glabel Fighter_FireFlowerShoot_Spark_Scatter
  .incbin "ovl3.raw.bin", 0x56BA8, 0xC

glabel Fighter_FireFlowerShoot_Kickup_Offset
  .incbin "ovl3.raw.bin", 0x56BB4, 0xC

glabel Fighter_Yoshi_GuardOffGfxOffset
  .incbin "ovl3.raw.bin", 0x56BC0, 0x10

glabel ftCommon_CatchPull_OffsetGFX
  .incbin "ovl3.raw.bin", 0x56BD0, 0x10

glabel Fighter_ThrowHitDesc_Default # Struct spans until 0x80188700
  .incbin "ovl3.raw.bin", 0x56BE0, 0x4

glabel D_ovl3_801886E4
  .incbin "ovl3.raw.bin", 0x56BE4, 0x4

glabel D_ovl3_801886E8
  .incbin "ovl3.raw.bin", 0x56BE8, 0x4

glabel D_ovl3_801886EC
  .incbin "ovl3.raw.bin", 0x56BEC, 0x4

glabel D_ovl3_801886F0
  .incbin "ovl3.raw.bin", 0x56BF0, 0x4

glabel D_ovl3_801886F4
  .incbin "ovl3.raw.bin", 0x56BF4, 0x4

glabel D_ovl3_801886F8
  .incbin "ovl3.raw.bin", 0x56BF8, 0x8

glabel Fighter_CaptureKirby_Catch_Release
  .incbin "ovl3.raw.bin", 0x56C00, 0x10

glabel Fighter_CaptureKirby_Capture_Release
  .incbin "ovl3.raw.bin", 0x56C10, 0x10

glabel Fighter_YoshiEgg_HurtDesc
  /* 56C20 103160 80188720 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C24, 0xC
  /* 56C30 103170 80188730 */
  .asciz "C4"
  .balign 4
  /* 56C34 103174 80188734 */
  .asciz "C4"
  .balign 4
  /* 56C38 103178 80188738 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C3C, 0x10
  /* 56C4C 10318C 8018874C */
  .asciz "C+"
  .balign 4
  /* 56C50 103190 80188750 */
  .asciz "C+"
  .balign 4
  /* 56C54 103194 80188754 */
  .asciz "C+"
  .balign 4
  /* 56C58 103198 80188758 */
  .asciz "@`"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C5C, 0x4
  /* 56C60 1031A0 80188760 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C64, 0x4
  /* 56C68 1031A8 80188768 */
  .asciz "Cu"
  .balign 4
  /* 56C6C 1031AC 8018876C */
  .asciz "Cu"
  .balign 4
  /* 56C70 1031B0 80188770 */
  .asciz "Cu"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C74, 0x8
  /* 56C7C 1031BC 8018877C */
  .asciz "C#"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C80, 0x4
  /* 56C84 1031C4 80188784 */
  .asciz "CF"
  .balign 4
  /* 56C88 1031C8 80188788 */
  .asciz "CF"
  .balign 4
  /* 56C8C 1031CC 8018878C */
  .asciz "CF"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C90, 0x8
  /* 56C98 1031D8 80188798 */
  .asciz "C "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56C9C, 0x4
  /* 56CA0 1031E0 801887A0 */
  .asciz "C<"
  .balign 4
  /* 56CA4 1031E4 801887A4 */
  .asciz "C<"
  .balign 4
  /* 56CA8 1031E8 801887A8 */
  .asciz "C<"
  .balign 4
  /* 56CAC 1031EC 801887AC */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56CB0, 0x18
  /* 56CC8 103208 801887C8 */
  .asciz "@ "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56CCC, 0x4
  /* 56CD0 103210 801887D0 */
  .asciz "C/"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56CD4, 0x4
  /* 56CD8 103218 801887D8 */
  .asciz "CR"
  .balign 4
  /* 56CDC 10321C 801887DC */
  .asciz "CR"
  .balign 4
  /* 56CE0 103220 801887E0 */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56CE4, 0x10
  /* 56CF4 103234 801887F4 */
  .asciz "CF"
  .balign 4
  /* 56CF8 103238 801887F8 */
  .asciz "CF"
  .balign 4
  /* 56CFC 10323C 801887FC */
  .asciz "CF"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D00, 0x10
  /* 56D10 103250 80188810 */
  .asciz "C$"
  .balign 4
  /* 56D14 103254 80188814 */
  .asciz "C$"
  .balign 4
  /* 56D18 103258 80188818 */
  .asciz "C$"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D1C, 0x10
  /* 56D2C 10326C 8018882C */
  .asciz "C%"
  .balign 4
  /* 56D30 103270 80188830 */
  .asciz "C%"
  .balign 4
  /* 56D34 103274 80188834 */
  .asciz "C%"
  .balign 4
  /* 56D38 103278 80188838 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D3C, 0xC
  /* 56D48 103288 80188848 */
  .asciz "C\""
  .balign 4
  /* 56D4C 10328C 8018884C */
  .asciz "C\""
  .balign 4
  /* 56D50 103290 80188850 */
  .asciz "C\""
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D54, 0x8
  /* 56D5C 10329C 8018885C */
  .asciz "C "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D60, 0x4
  /* 56D64 1032A4 80188864 */
  .asciz "C("
  .balign 4
  /* 56D68 1032A8 80188868 */
  .asciz "C("
  .balign 4
  /* 56D6C 1032AC 8018886C */
  .asciz "C("
  .balign 4
  /* 56D70 1032B0 80188870 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D74, 0xC
  /* 56D80 1032C0 80188880 */
  .asciz "C4"
  .balign 4
  /* 56D84 1032C4 80188884 */
  .asciz "C4"
  .balign 4
  /* 56D88 1032C8 80188888 */
  .asciz "C4"
  .balign 4
  /* 56D8C 1032CC 8018888C */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56D90, 0xC
  /* 56D9C 1032DC 8018889C */
  .asciz "C4"
  .balign 4
  /* 56DA0 1032E0 801888A0 */
  .asciz "C4"
  .balign 4
  /* 56DA4 1032E4 801888A4 */
  .asciz "C4"
  .balign 4
  /* 56DA8 1032E8 801888A8 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56DAC, 0xC
  /* 56DB8 1032F8 801888B8 */
  .asciz "C4"
  .balign 4
  /* 56DBC 1032FC 801888BC */
  .asciz "C4"
  .balign 4
  /* 56DC0 103300 801888C0 */
  .asciz "C4"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56DC4, 0x10
  /* 56DD4 103314 801888D4 */
  .asciz "C+"
  .balign 4
  /* 56DD8 103318 801888D8 */
  .asciz "C+"
  .balign 4
  /* 56DDC 10331C 801888DC */
  .asciz "C+"
  .balign 4
  /* 56DE0 103320 801888E0 */
  .asciz "@`"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56DE4, 0x4
  /* 56DE8 103328 801888E8 */
  .asciz "Cf"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56DEC, 0x4
  /* 56DF0 103330 801888F0 */
  .asciz "Cu"
  .balign 4
  /* 56DF4 103334 801888F4 */
  .asciz "Cu"
  .balign 4
  /* 56DF8 103338 801888F8 */
  .asciz "Cu"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56DFC, 0x8
  /* 56E04 103344 80188904 */
  .asciz "C#"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E08, 0x4
  /* 56E0C 10334C 8018890C */
  .asciz "CF"
  .balign 4
  /* 56E10 103350 80188910 */
  .asciz "CF"
  .balign 4
  /* 56E14 103354 80188914 */
  .asciz "CF"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E18, 0x8
  /* 56E20 103360 80188920 */
  .asciz "C "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E24, 0x4
  /* 56E28 103368 80188928 */
  .asciz "C<"
  .balign 4
  /* 56E2C 10336C 8018892C */
  .asciz "C<"
  .balign 4
  /* 56E30 103370 80188930 */
  .asciz "C<"
  .balign 4
  /* 56E34 103374 80188934 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E38, 0x18
  /* 56E50 103390 80188950 */
  .asciz "@ "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E54, 0x4
  /* 56E58 103398 80188958 */
  .asciz "C/"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E5C, 0x4
  /* 56E60 1033A0 80188960 */
  .asciz "CR"
  .balign 4
  /* 56E64 1033A4 80188964 */
  .asciz "CR"
  .balign 4
  /* 56E68 1033A8 80188968 */
  .asciz "CR"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E6C, 0x10
  /* 56E7C 1033BC 8018897C */
  .asciz "CF"
  .balign 4
  /* 56E80 1033C0 80188980 */
  .asciz "CF"
  .balign 4
  /* 56E84 1033C4 80188984 */
  .asciz "CF"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56E88, 0x10
  /* 56E98 1033D8 80188998 */
  .asciz "C$"
  .balign 4
  /* 56E9C 1033DC 8018899C */
  .asciz "C$"
  .balign 4
  /* 56EA0 1033E0 801889A0 */
  .asciz "C$"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56EA4, 0x10
  /* 56EB4 1033F4 801889B4 */
  .asciz "C%"
  .balign 4
  /* 56EB8 1033F8 801889B8 */
  .asciz "C%"
  .balign 4
  /* 56EBC 1033FC 801889BC */
  .asciz "C%"
  .balign 4
  /* 56EC0 103400 801889C0 */
  .asciz "@"
  .balign 4
  .incbin "ovl3.raw.bin", 0x56EC4, 0xC
  /* 56ED0 103410 801889D0 */
  .asciz "C\""
  .balign 4
  /* 56ED4 103414 801889D4 */
  .asciz "C\""
  .balign 4
  /* 56ED8 103418 801889D8 */
  .asciz "C\""
  .balign 4
  .incbin "ovl3.raw.bin", 0x56EDC, 0x8
  /* 56EE4 103424 801889E4 */
  .asciz "C "
  .balign 4
  .incbin "ovl3.raw.bin", 0x56EE8, 0x4
  /* 56EEC 10342C 801889EC */
  .asciz "C("
  .balign 4
  /* 56EF0 103430 801889F0 */
  .asciz "C("
  .balign 4
  /* 56EF4 103434 801889F4 */
  .asciz "C("
  .balign 4
  .incbin "ovl3.raw.bin", 0x56EF8, 0x28

glabel Fighter_CaptureCaptain_Offset
  .incbin "ovl3.raw.bin", 0x56F20, 0x10

glabel Fighter_ThrowF_Catch_Release
  .incbin "ovl3.raw.bin", 0x56F30, 0x10

glabel Fighter_Shouldered_Capture_Release
  .incbin "ovl3.raw.bin", 0x56F40, 0x10

glabel ftKirby_SpecialAirN_StatusList
  /* 56F50 103490 80188A50 */  .4byte ftKirby_CopyMario_SpecialAirN_SetStatus
  /* 56F54 103494 80188A54 */  .4byte ftKirby_CopyFox_SpecialAirN_SetStatus
  /* 56F58 103498 80188A58 */  .4byte ftKirby_CopyDonkey_SpecialAirNStart_SetStatus
  /* 56F5C 10349C 80188A5C */  .4byte ftKirby_CopySamus_SpecialAirNStart_SetStatus
  /* 56F60 1034A0 80188A60 */  .4byte ftKirby_CopyMario_SpecialAirN_SetStatus
  /* 56F64 1034A4 80188A64 */  .4byte ftKirby_CopyLink_SpecialAirN_SetStatus
  /* 56F68 1034A8 80188A68 */  .4byte ftKirby_CopyYoshi_SpecialAirN_SetStatus
  /* 56F6C 1034AC 80188A6C */  .4byte ftKirby_CopyCaptain_SpecialAirN_SetStatus
  /* 56F70 1034B0 80188A70 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F74 1034B4 80188A74 */  .4byte ftKirby_CopyPikachu_SpecialAirN_SetStatus
  /* 56F78 1034B8 80188A78 */  .4byte ftKirby_CopyPurin_SpecialAirN_SetStatus
  /* 56F7C 1034BC 80188A7C */  .4byte ftKirby_CopyNess_SpecialAirN_SetStatus
  /* 56F80 1034C0 80188A80 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F84 1034C4 80188A84 */  .4byte ftKirby_CopyMario_SpecialAirN_SetStatus
  /* 56F88 1034C8 80188A88 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F8C 1034CC 80188A8C */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F90 1034D0 80188A90 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F94 1034D4 80188A94 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F98 1034D8 80188A98 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56F9C 1034DC 80188A9C */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FA0 1034E0 80188AA0 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FA4 1034E4 80188AA4 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FA8 1034E8 80188AA8 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FAC 1034EC 80188AAC */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FB0 1034F0 80188AB0 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FB4 1034F4 80188AB4 */  .4byte ftKirby_SpecialAirNStart_SetStatus
  /* 56FB8 1034F8 80188AB8 */  .4byte ftKirby_SpecialAirNStart_SetStatus

glabel ftCommon_SpecialAirN_StatusList
  /* 56FBC 1034FC 80188ABC */  .4byte ftMario_SpecialAirN_SetStatus
  /* 56FC0 103500 80188AC0 */  .4byte ftFox_SpecialAirN_SetStatus
  /* 56FC4 103504 80188AC4 */  .4byte ftDonkey_SpecialAirNStart_SetStatus
  /* 56FC8 103508 80188AC8 */  .4byte ftSamus_SpecialAirNStart_SetStatus
  /* 56FCC 10350C 80188ACC */  .4byte ftMario_SpecialAirN_SetStatus
  /* 56FD0 103510 80188AD0 */  .4byte ftLink_SpecialAirN_SetStatus
  /* 56FD4 103514 80188AD4 */  .4byte ftYoshi_SpecialAirN_SetStatus
  /* 56FD8 103518 80188AD8 */  .4byte ftCaptain_SpecialAirN_SetStatus
  /* 56FDC 10351C 80188ADC */  .4byte ftKirby_SpecialAirN_SetStatusIndex
  /* 56FE0 103520 80188AE0 */  .4byte ftPikachu_SpecialAirN_SetStatus
  /* 56FE4 103524 80188AE4 */  .4byte ftPurin_SpecialAirN_SetStatus
  /* 56FE8 103528 80188AE8 */  .4byte ftNess_SpecialAirN_SetStatus
  /* 56FEC 10352C 80188AEC */  .4byte ftMario_SpecialAirN_SetStatus
  /* 56FF0 103530 80188AF0 */  .4byte ftMario_SpecialAirN_SetStatus
  /* 56FF4 103534 80188AF4 */  .4byte ftMario_SpecialAirN_SetStatus
  /* 56FF8 103538 80188AF8 */  .4byte ftFox_SpecialAirN_SetStatus
  /* 56FFC 10353C 80188AFC */  .4byte ftDonkey_SpecialAirNStart_SetStatus
  /* 57000 103540 80188B00 */  .4byte ftSamus_SpecialAirNStart_SetStatus
  /* 57004 103544 80188B04 */  .4byte ftMario_SpecialAirN_SetStatus
  /* 57008 103548 80188B08 */  .4byte ftLink_SpecialAirN_SetStatus
  /* 5700C 10354C 80188B0C */  .4byte ftMario_SpecialAirN_SetStatus
  /* 57010 103550 80188B10 */  .4byte ftCaptain_SpecialAirN_SetStatus
  /* 57014 103554 80188B14 */  .4byte ftKirby_SpecialAirN_SetStatusIndex
  /* 57018 103558 80188B18 */  .4byte ftPikachu_SpecialAirN_SetStatus
  /* 5701C 10355C 80188B1C */  .4byte ftPurin_SpecialAirN_SetStatus
  /* 57020 103560 80188B20 */  .4byte ftNess_SpecialAirN_SetStatus
  /* 57024 103564 80188B24 */  .4byte ftDonkey_SpecialAirNStart_SetStatus

glabel ftCommon_SpecialAirHi_StatusList
  /* 57028 103568 80188B28 */  .4byte ftMario_SpecialAirHi_SetStatus
  /* 5702C 10356C 80188B2C */  .4byte ftFox_SpecialAirHiStart_SetStatus
  /* 57030 103570 80188B30 */  .4byte ftDonkey_SpecialAirHi_SetStatus
  /* 57034 103574 80188B34 */  .4byte ftSamus_SpecialAirHi_SetStatus
  /* 57038 103578 80188B38 */  .4byte ftMario_SpecialAirHi_SetStatus
  /* 5703C 10357C 80188B3C */  .4byte ftLink_SpecialAirHi_SetStatus
  /* 57040 103580 80188B40 */  .4byte ftYoshi_SpecialAirHi_SetStatus
  /* 57044 103584 80188B44 */  .4byte ftCaptain_SpecialAirHi_SetStatus
  /* 57048 103588 80188B48 */  .4byte ftKirby_SpecialAirHi_SetStatus
  /* 5704C 10358C 80188B4C */  .4byte ftPikachu_SpecialAirHiStart_SetStatus
  /* 57050 103590 80188B50 */  .4byte ftPurin_SpecialAirHi_SetStatus
  /* 57054 103594 80188B54 */  .4byte ftNess_SpecialAirHiStart_SetStatus
  /* 57058 103598 80188B58 */  .4byte ftMario_SpecialAirN_SetStatus
  /* 5705C 10359C 80188B5C */  .4byte ftMario_SpecialAirHi_SetStatus
  /* 57060 1035A0 80188B60 */  .4byte ftMario_SpecialAirHi_SetStatus
  /* 57064 1035A4 80188B64 */  .4byte ftFox_SpecialAirHiStart_SetStatus
  /* 57068 1035A8 80188B68 */  .4byte ftDonkey_SpecialAirHi_SetStatus
  /* 5706C 1035AC 80188B6C */  .4byte ftSamus_SpecialAirHi_SetStatus
  /* 57070 1035B0 80188B70 */  .4byte ftMario_SpecialAirHi_SetStatus
  /* 57074 1035B4 80188B74 */  .4byte ftLink_SpecialAirHi_SetStatus
  /* 57078 1035B8 80188B78 */  .4byte ftYoshi_SpecialAirHi_SetStatus
  /* 5707C 1035BC 80188B7C */  .4byte ftCaptain_SpecialAirHi_SetStatus
  /* 57080 1035C0 80188B80 */  .4byte ftKirby_SpecialAirHi_SetStatus
  /* 57084 1035C4 80188B84 */  .4byte ftPikachu_SpecialAirHiStart_SetStatus
  /* 57088 1035C8 80188B88 */  .4byte ftPurin_SpecialAirHi_SetStatus
  /* 5708C 1035CC 80188B8C */  .4byte ftNess_SpecialAirHiStart_SetStatus
  /* 57090 1035D0 80188B90 */  .4byte ftDonkey_SpecialAirHi_SetStatus

glabel ftCommon_SpecialAirLw_StatusList
  /* 57094 1035D4 80188B94 */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 57098 1035D8 80188B98 */  .4byte ftFox_SpecialAirLwStart_SetStatus
  .incbin "ovl3.raw.bin", 0x5709C, 0x4

glabel jtbl_ovl3_80188BA0
  /* 570A0 1035E0 80188BA0 */  .4byte ftSamus_SpecialAirLw_SetStatus
  /* 570A4 1035E4 80188BA4 */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 570A8 1035E8 80188BA8 */  .4byte ftLink_SpecialAirLw_SetStatus
  /* 570AC 1035EC 80188BAC */  .4byte ftYoshi_SpecialAirLwStart_SetStatus
  /* 570B0 1035F0 80188BB0 */  .4byte ftCaptain_SpecialAirLw_SetStatus
  /* 570B4 1035F4 80188BB4 */  .4byte ftKirby_SpecialAirLwStart_SetStatus
  /* 570B8 1035F8 80188BB8 */  .4byte ftPikachu_SpecialAirLwStart_SetStatus
  /* 570BC 1035FC 80188BBC */  .4byte ftPurin_SpecialAirLw_SetStatus
  /* 570C0 103600 80188BC0 */  .4byte ftNess_SpecialAirLwStart_SetStatus
  /* 570C4 103604 80188BC4 */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 570C8 103608 80188BC8 */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 570CC 10360C 80188BCC */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 570D0 103610 80188BD0 */  .4byte ftFox_SpecialAirLwStart_SetStatus
  .incbin "ovl3.raw.bin", 0x570D4, 0x4

glabel jtbl_ovl3_80188BD8
  /* 570D8 103618 80188BD8 */  .4byte ftSamus_SpecialAirLw_SetStatus
  /* 570DC 10361C 80188BDC */  .4byte ftMario_SpecialAirLw_SetStatus
  /* 570E0 103620 80188BE0 */  .4byte ftLink_SpecialAirLw_SetStatus
  /* 570E4 103624 80188BE4 */  .4byte ftYoshi_SpecialAirLwStart_SetStatus
  /* 570E8 103628 80188BE8 */  .4byte ftCaptain_SpecialAirLw_SetStatus
  /* 570EC 10362C 80188BEC */  .4byte ftKirby_SpecialAirLwStart_SetStatus
  /* 570F0 103630 80188BF0 */  .4byte ftPikachu_SpecialAirLwStart_SetStatus
  /* 570F4 103634 80188BF4 */  .4byte ftPurin_SpecialAirLw_SetStatus
  /* 570F8 103638 80188BF8 */  .4byte ftNess_SpecialAirLwStart_SetStatus
  .incbin "ovl3.raw.bin", 0x570FC, 0x4

glabel ftKirby_SpecialN_StatusList
  /* 57100 103640 80188C00 */  .4byte ftKirby_CopyMario_SpecialN_SetStatus
  /* 57104 103644 80188C04 */  .4byte ftKirby_CopyFox_SpecialN_SetStatus
  /* 57108 103648 80188C08 */  .4byte ftKirby_CopyDonkey_SpecialNStart_SetStatus
  /* 5710C 10364C 80188C0C */  .4byte ftKirby_CopySamus_SpecialNStart_SetStatus
  /* 57110 103650 80188C10 */  .4byte ftKirby_CopyMario_SpecialN_SetStatus
  /* 57114 103654 80188C14 */  .4byte ftKirby_CopyLink_SpecialN_SetStatus
  /* 57118 103658 80188C18 */  .4byte ftKirby_CopyYoshi_SpecialN_SetStatus
  /* 5711C 10365C 80188C1C */  .4byte ftKirby_CopyCaptain_SpecialN_SetStatus
  /* 57120 103660 80188C20 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57124 103664 80188C24 */  .4byte ftKirby_CopyPikachu_SpecialN_SetStatus
  /* 57128 103668 80188C28 */  .4byte ftKirby_CopyPurin_SpecialN_SetStatus
  /* 5712C 10366C 80188C2C */  .4byte ftKirby_CopyNess_SpecialN_SetStatus
  /* 57130 103670 80188C30 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57134 103674 80188C34 */  .4byte ftKirby_CopyMario_SpecialN_SetStatus
  /* 57138 103678 80188C38 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 5713C 10367C 80188C3C */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57140 103680 80188C40 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57144 103684 80188C44 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57148 103688 80188C48 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 5714C 10368C 80188C4C */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57150 103690 80188C50 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57154 103694 80188C54 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57158 103698 80188C58 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 5715C 10369C 80188C5C */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57160 1036A0 80188C60 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57164 1036A4 80188C64 */  .4byte ftKirby_SpecialNStart_SetStatus
  /* 57168 1036A8 80188C68 */  .4byte ftKirby_SpecialNStart_SetStatus

glabel ftCommon_SpecialN_StatusList
  /* 5716C 1036AC 80188C6C */  .4byte ftMario_SpecialN_SetStatus
  /* 57170 1036B0 80188C70 */  .4byte ftFox_SpecialN_SetStatus
  /* 57174 1036B4 80188C74 */  .4byte ftDonkey_SpecialNStart_SetStatus
  /* 57178 1036B8 80188C78 */  .4byte ftSamus_SpecialNStart_SetStatus
  /* 5717C 1036BC 80188C7C */  .4byte ftMario_SpecialN_SetStatus
  /* 57180 1036C0 80188C80 */  .4byte ftLink_SpecialN_SetStatus
  /* 57184 1036C4 80188C84 */  .4byte ftYoshi_SpecialN_SetStatus
  /* 57188 1036C8 80188C88 */  .4byte ftCaptain_SpecialN_SetStatus
  /* 5718C 1036CC 80188C8C */  .4byte ftKirby_SpecialN_SetStatusIndex
  /* 57190 1036D0 80188C90 */  .4byte ftPikachu_SpecialN_SetStatus
  /* 57194 1036D4 80188C94 */  .4byte ftPurin_SpecialN_SetStatus
  /* 57198 1036D8 80188C98 */  .4byte ftNess_SpecialN_SetStatus
  /* 5719C 1036DC 80188C9C */  .4byte ftMario_SpecialN_SetStatus
  /* 571A0 1036E0 80188CA0 */  .4byte ftMario_SpecialN_SetStatus
  /* 571A4 1036E4 80188CA4 */  .4byte ftMario_SpecialN_SetStatus
  /* 571A8 1036E8 80188CA8 */  .4byte ftFox_SpecialN_SetStatus
  /* 571AC 1036EC 80188CAC */  .4byte ftDonkey_SpecialNStart_SetStatus
  /* 571B0 1036F0 80188CB0 */  .4byte ftSamus_SpecialNStart_SetStatus
  /* 571B4 1036F4 80188CB4 */  .4byte ftMario_SpecialN_SetStatus
  /* 571B8 1036F8 80188CB8 */  .4byte ftLink_SpecialN_SetStatus
  /* 571BC 1036FC 80188CBC */  .4byte ftMario_SpecialN_SetStatus
  /* 571C0 103700 80188CC0 */  .4byte ftCaptain_SpecialN_SetStatus
  /* 571C4 103704 80188CC4 */  .4byte ftKirby_SpecialN_SetStatusIndex
  /* 571C8 103708 80188CC8 */  .4byte ftPikachu_SpecialN_SetStatus
  /* 571CC 10370C 80188CCC */  .4byte ftPurin_SpecialN_SetStatus
  /* 571D0 103710 80188CD0 */  .4byte ftNess_SpecialN_SetStatus
  /* 571D4 103714 80188CD4 */  .4byte ftDonkey_SpecialNStart_SetStatus
  .incbin "ovl3.raw.bin", 0x571D8, 0x8

glabel ftCommon_SpecialHi_StatusList
  /* 571E0 103720 80188CE0 */  .4byte ftMario_SpecialHi_SetStatus
  /* 571E4 103724 80188CE4 */  .4byte ftFox_SpecialHiStart_SetStatus
  /* 571E8 103728 80188CE8 */  .4byte ftDonkey_SpecialHi_SetStatus
  /* 571EC 10372C 80188CEC */  .4byte ftSamus_SpecialHi_SetStatus
  /* 571F0 103730 80188CF0 */  .4byte ftMario_SpecialHi_SetStatus
  /* 571F4 103734 80188CF4 */  .4byte ftLink_SpecialHi_SetStatus
  /* 571F8 103738 80188CF8 */  .4byte ftYoshi_SpecialHi_SetStatus
  /* 571FC 10373C 80188CFC */  .4byte ftCaptain_SpecialHi_SetStatus
  /* 57200 103740 80188D00 */  .4byte ftKirby_SpecialHi_SetStatus
  /* 57204 103744 80188D04 */  .4byte ftPikachu_SpecialHiStart_SetStatus
  /* 57208 103748 80188D08 */  .4byte ftPurin_SpecialHi_SetStatus
  /* 5720C 10374C 80188D0C */  .4byte ftNess_SpecialHiStart_SetStatus
  /* 57210 103750 80188D10 */  .4byte ftMario_SpecialHi_SetStatus
  /* 57214 103754 80188D14 */  .4byte ftMario_SpecialHi_SetStatus
  /* 57218 103758 80188D18 */  .4byte ftMario_SpecialHi_SetStatus
  /* 5721C 10375C 80188D1C */  .4byte ftFox_SpecialHiStart_SetStatus
  /* 57220 103760 80188D20 */  .4byte ftDonkey_SpecialHi_SetStatus
  /* 57224 103764 80188D24 */  .4byte ftSamus_SpecialHi_SetStatus
  /* 57228 103768 80188D28 */  .4byte ftMario_SpecialHi_SetStatus
  /* 5722C 10376C 80188D2C */  .4byte ftLink_SpecialHi_SetStatus
  /* 57230 103770 80188D30 */  .4byte ftYoshi_SpecialHi_SetStatus
  /* 57234 103774 80188D34 */  .4byte ftCaptain_SpecialHi_SetStatus
  /* 57238 103778 80188D38 */  .4byte ftKirby_SpecialHi_SetStatus
  /* 5723C 10377C 80188D3C */  .4byte ftPikachu_SpecialHiStart_SetStatus
  /* 57240 103780 80188D40 */  .4byte ftPurin_SpecialHi_SetStatus
  /* 57244 103784 80188D44 */  .4byte ftNess_SpecialHiStart_SetStatus
  /* 57248 103788 80188D48 */  .4byte ftDonkey_SpecialHi_SetStatus
  .incbin "ovl3.raw.bin", 0x5724C, 0x4

glabel ftCommon_SpecialLw_StatusList
  /* 57250 103790 80188D50 */  .4byte ftMario_SpecialLw_SetStatus
  /* 57254 103794 80188D54 */  .4byte ftFox_SpecialLwStart_SetStatus
  /* 57258 103798 80188D58 */  .4byte ftDonkey_SpecialLwStart_SetStatus
  /* 5725C 10379C 80188D5C */  .4byte ftSamus_SpecialLw_SetStatus
  /* 57260 1037A0 80188D60 */  .4byte ftMario_SpecialLw_SetStatus
  /* 57264 1037A4 80188D64 */  .4byte ftLink_SpecialLw_SetStatus
  /* 57268 1037A8 80188D68 */  .4byte ftYoshi_SpecialLwStart_SetStatus
  /* 5726C 1037AC 80188D6C */  .4byte ftCaptain_SpecialLw_SetStatus
  /* 57270 1037B0 80188D70 */  .4byte ftKirby_SpecialLwStart_SetStatus
  /* 57274 1037B4 80188D74 */  .4byte ftPikachu_SpecialLwStart_SetStatus
  /* 57278 1037B8 80188D78 */  .4byte ftPurin_SpecialLw_SetStatus
  /* 5727C 1037BC 80188D7C */  .4byte ftNess_SpeciaLwStart_SetStatus
  /* 57280 1037C0 80188D80 */  .4byte ftMario_SpecialLw_SetStatus
  /* 57284 1037C4 80188D84 */  .4byte ftMario_SpecialLw_SetStatus
  /* 57288 1037C8 80188D88 */  .4byte ftMario_SpecialLw_SetStatus
  /* 5728C 1037CC 80188D8C */  .4byte ftFox_SpecialLwStart_SetStatus
  /* 57290 1037D0 80188D90 */  .4byte ftDonkey_SpecialLwStart_SetStatus
  /* 57294 1037D4 80188D94 */  .4byte ftSamus_SpecialLw_SetStatus
  /* 57298 1037D8 80188D98 */  .4byte ftMario_SpecialLw_SetStatus
  /* 5729C 1037DC 80188D9C */  .4byte ftLink_SpecialLw_SetStatus
  /* 572A0 1037E0 80188DA0 */  .4byte ftYoshi_SpecialLwStart_SetStatus
  /* 572A4 1037E4 80188DA4 */  .4byte ftCaptain_SpecialLw_SetStatus
  /* 572A8 1037E8 80188DA8 */  .4byte ftKirby_SpecialLwStart_SetStatus
  /* 572AC 1037EC 80188DAC */  .4byte ftPikachu_SpecialLwStart_SetStatus
  /* 572B0 1037F0 80188DB0 */  .4byte ftPurin_SpecialLw_SetStatus
  /* 572B4 1037F4 80188DB4 */  .4byte ftNess_SpeciaLwStart_SetStatus
  /* 572B8 1037F8 80188DB8 */  .4byte ftDonkey_SpecialLwStart_SetStatus
  .incbin "ovl3.raw.bin", 0x572BC, 0x4

glabel ftMasterHand_Random_StatusList
  .incbin "ovl3.raw.bin", 0x572C0, 0xC

glabel D_ovl3_80188DCC
  .incbin "ovl3.raw.bin", 0x572CC, 0x10

glabel D_ovl3_80188DDC
  .incbin "ovl3.raw.bin", 0x572DC, 0x8

glabel D_ovl3_80188DE4
  .incbin "ovl3.raw.bin", 0x572E4, 0x8

glabel D_ovl3_80188DEC
  .incbin "ovl3.raw.bin", 0x572EC, 0x14

glabel ftKirby_SpecialN_UnusedVec
  .incbin "ovl3.raw.bin", 0x57300, 0x10

glabel wpNess_PKThunder_PrimColor
  .incbin "ovl3.raw.bin", 0x57310, 0xC

glabel wpNess_PKThunder_EnvColor
  .incbin "ovl3.raw.bin", 0x5731C, 0x14

glabel wpMario_Fireball_WeaponAttributes
  .incbin "ovl3.raw.bin", 0x57330, 0x4
  /* 57334 103874 80188E34 */
  .asciz "B\\"
  .balign 4

glabel D_ovl3_80188E38
  /* 57338 103878 80188E38 */
  .4byte 0x41f00000 # .float 30.0
  .incbin "ovl3.raw.bin", 0x5733C, 0x4

glabel D_ovl3_80188E40
  .incbin "ovl3.raw.bin", 0x57340, 0x4

glabel D_ovl3_80188E44
  /* 57344 103884 80188E44 */
  .4byte 0x3eb2b8c3 # .float 0.34906587
  .incbin "ovl3.raw.bin", 0x57348, 0x8
  /* 57350 103890 80188E50 */
  .asciz "BH"
  .balign 4
  /* 57354 103894 80188E54 */  .4byte D_ovl2_80130E3C
  .incbin "ovl3.raw.bin", 0x57358, 0xC
  /* 57364 1038A4 80188E64 */
  .asciz "B\\"
  .balign 4
  .incbin "ovl3.raw.bin", 0x57368, 0x1C
  /* 57384 1038C4 80188E84 */  .4byte D_ovl2_80130F7C
  .incbin "ovl3.raw.bin", 0x57388, 0x8

glabel wpMario_Fireball_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57390, 0x8
  /* 57398 1038D8 80188E98 */  .4byte D_ovl2_80130E30
  .incbin "ovl3.raw.bin", 0x5739C, 0x8

glabel jtbl_ovl3_80188EA4
  /* 573A4 1038E4 80188EA4 */  .4byte wpMario_Fireball_ProcUpdate
  /* 573A8 1038E8 80188EA8 */  .4byte wpMario_Fireball_ProcMap
  /* 573AC 1038EC 80188EAC */  .4byte wpMario_Fireball_ProcHit
  /* 573B0 1038F0 80188EB0 */  .4byte wpMario_Fireball_ProcHit
  /* 573B4 1038F4 80188EB4 */  .4byte wpMario_Fireball_ProcHop
  /* 573B8 1038F8 80188EB8 */  .4byte wpMario_Fireball_ProcHit
  /* 573BC 1038FC 80188EBC */  .4byte wpMario_Fireball_ProcReflector
  /* 573C0 103900 80188EC0 */  .4byte wpMario_Fireball_ProcHit
  .incbin "ovl3.raw.bin", 0x573C4, 0xC

glabel wpFox_Blaster_WeaponDesc
  .incbin "ovl3.raw.bin", 0x573D0, 0x8
  /* 573D8 103918 80188ED8 */  .4byte D_ovl2_80130E9C
  .incbin "ovl3.raw.bin", 0x573DC, 0x8

glabel jtbl_ovl3_80188EE4
  /* 573E4 103924 80188EE4 */  .4byte wpFox_Blaster_ProcUpdate
  /* 573E8 103928 80188EE8 */  .4byte wpFox_Blaster_ProcMap
  /* 573EC 10392C 80188EEC */  .4byte wpFox_Blaster_ProcHit
  /* 573F0 103930 80188EF0 */  .4byte wpFox_Blaster_ProcHit
  /* 573F4 103934 80188EF4 */  .4byte wpFox_Blaster_ProcHop
  /* 573F8 103938 80188EF8 */  .4byte wpFox_Blaster_ProcHit
  /* 573FC 10393C 80188EFC */  .4byte wpFox_Blaster_ProcReflector
  /* 57400 103940 80188F00 */  .4byte wpFox_Blaster_ProcHit
  .incbin "ovl3.raw.bin", 0x57404, 0xC

glabel wpSamus_ChargeShot_WeaponAttributes
  /* 57410 103950 80188F10 */
  .4byte 0x43160000 # .float 150.0
  /* 57414 103954 80188F14 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl3.raw.bin", 0x57418, 0x1C
  /* 57434 103974 80188F34 */
  .asciz "Cf"
  .balign 4
  /* 57438 103978 80188F38 */
  .asciz "Bx"
  .balign 4
  .incbin "ovl3.raw.bin", 0x5743C, 0xD0
  /* 5750C 103A4C 8018900C */
  .asciz "D/"
  .balign 4
  .incbin "ovl3.raw.bin", 0x57510, 0x20

glabel wpSamus_ChargeShot_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57530, 0x8
  /* 57538 103A78 80189038 */  .4byte D_ovl2_80130F3C
  .incbin "ovl3.raw.bin", 0x5753C, 0x8

glabel jtbl_ovl3_80189044
  /* 57544 103A84 80189044 */  .4byte wpSamus_ChargeShot_ProcUpdate
  /* 57548 103A88 80189048 */  .4byte wpSamus_ChargeShot_ProcMap
  /* 5754C 103A8C 8018904C */  .4byte wpSamus_ChargeShot_ProcHit
  /* 57550 103A90 80189050 */  .4byte wpSamus_ChargeShot_ProcHit
  /* 57554 103A94 80189054 */  .4byte wpSamus_ChargeShot_ProcHop
  /* 57558 103A98 80189058 */  .4byte wpSamus_ChargeShot_ProcHit
  /* 5755C 103A9C 8018905C */  .4byte wpSamus_ChargeShot_ProcReflector
  /* 57560 103AA0 80189060 */  .4byte wpSamus_ChargeShot_ProcHit
  .incbin "ovl3.raw.bin", 0x57564, 0xC

glabel wpSamus_Bomb_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57570, 0x8
  /* 57578 103AB8 80189078 */  .4byte D_ovl2_80130F30
  .incbin "ovl3.raw.bin", 0x5757C, 0x8

glabel jtbl_ovl3_80189084
  /* 57584 103AC4 80189084 */  .4byte wpSamus_Bomb_ProcUpdate
  /* 57588 103AC8 80189088 */  .4byte wpSamus_Bomb_ProcMap
  /* 5758C 103ACC 8018908C */  .4byte wpSamus_Bomb_ProcHit
  /* 57590 103AD0 80189090 */  .4byte wpSamus_Bomb_ProcHit
  /* 57594 103AD4 80189094 */  .4byte wpSamus_Bomb_ProcHop
  /* 57598 103AD8 80189098 */  .4byte wpSamus_Bomb_ProcHit
  /* 5759C 103ADC 8018909C */  .4byte wpSamus_Bomb_ProcReflector
  /* 575A0 103AE0 801890A0 */  .4byte wpSamus_Bomb_ProcAbsorb
  .incbin "ovl3.raw.bin", 0x575A4, 0xC

glabel wpPikachu_ThunderJoltAir_WeaponDesc
  .incbin "ovl3.raw.bin", 0x575B0, 0x8
  /* 575B8 103AF8 801890B8 */  .4byte D_ovl2_801310BC
  .incbin "ovl3.raw.bin", 0x575BC, 0x8

glabel jtbl_ovl3_801890C4
  /* 575C4 103B04 801890C4 */  .4byte wpPikachu_ThunderJoltAir_ProcUpdate
  /* 575C8 103B08 801890C8 */  .4byte wpPikachu_ThunderJoltAir_ProcMap
  /* 575CC 103B0C 801890CC */  .4byte wpPikachu_ThunderJoltAir_ProcHit
  /* 575D0 103B10 801890D0 */  .4byte wpPikachu_ThunderJoltAir_ProcHit
  /* 575D4 103B14 801890D4 */  .4byte wpPikachu_ThunderJoltAir_ProcHop
  /* 575D8 103B18 801890D8 */  .4byte wpPikachu_ThunderJoltAir_ProcHit
  /* 575DC 103B1C 801890DC */  .4byte wpPikachu_ThunderJoltAir_ProcReflector
  /* 575E0 103B20 801890E0 */  .4byte wpPikachu_ThunderJoltAir_ProcHit

glabel wpPikachu_ThunderJoltGround_WeaponDesc
  .incbin "ovl3.raw.bin", 0x575E4, 0x8
  /* 575EC 103B2C 801890EC */  .4byte D_ovl2_801310BC
  .incbin "ovl3.raw.bin", 0x575F0, 0x8

glabel jtbl_ovl3_801890F8
  /* 575F8 103B38 801890F8 */  .4byte wpPikachu_ThunderJoltGround_ProcUpdate
  /* 575FC 103B3C 801890FC */  .4byte wpPikachu_ThunderJoltGround_ProcMap
  /* 57600 103B40 80189100 */  .4byte wpPikachu_ThunderJoltGround_ProcHit
  /* 57604 103B44 80189104 */  .4byte wpPikachu_ThunderJoltGround_ProcHit
  .incbin "ovl3.raw.bin", 0x57608, 0x4

glabel jtbl_ovl3_8018910C
  /* 5760C 103B4C 8018910C */  .4byte wpPikachu_ThunderJoltGround_ProcHit
  /* 57610 103B50 80189110 */  .4byte wpPikachu_ThunderJoltGround_ProcReflector
  /* 57614 103B54 80189114 */  .4byte wpPikachu_ThunderJoltGround_ProcHit
  .incbin "ovl3.raw.bin", 0x57618, 0x8

glabel wpPikachu_ThunderHead_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57620, 0x8
  /* 57628 103B68 80189128 */  .4byte D_ovl2_801310B0
  .incbin "ovl3.raw.bin", 0x5762C, 0x8

glabel jtbl_ovl3_80189134
  /* 57634 103B74 80189134 */  .4byte wpPikachu_ThunderHead_ProcUpdate
  /* 57638 103B78 80189138 */  .4byte wpPikachu_ThunderHead_ProcMap
  .incbin "ovl3.raw.bin", 0x5763C, 0x18

glabel wpPikachu_ThunderTrail_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57654, 0x8
  /* 5765C 103B9C 8018915C */  .4byte D_ovl2_801310B0
  .incbin "ovl3.raw.bin", 0x57660, 0x8
  /* 57668 103BA8 80189168 */  .4byte wpPikachu_ThunderTrail_ProcUpdate
  .incbin "ovl3.raw.bin", 0x5766C, 0x4

glabel jtbl_ovl3_80189170
  /* 57670 103BB0 80189170 */  .4byte wpPikachu_ThunderTrail_ProcHit
  /* 57674 103BB4 80189174 */  .4byte wpPikachu_ThunderTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57678, 0x4
  /* 5767C 103BBC 8018917C */  .4byte wpPikachu_ThunderTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57680, 0x4
  /* 57684 103BC4 80189184 */  .4byte wpPikachu_ThunderTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57688, 0x8

glabel wpNess_PKFire_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57690, 0x8
  /* 57698 103BD8 80189198 */  .4byte D_ovl2_8013113C
  .incbin "ovl3.raw.bin", 0x5769C, 0x8

glabel jtbl_ovl3_801891A4
  /* 576A4 103BE4 801891A4 */  .4byte wpNess_PKFire_ProcUpdate
  /* 576A8 103BE8 801891A8 */  .4byte wpNess_PKFire_ProcMap
  /* 576AC 103BEC 801891AC */  .4byte wpNess_PKFire_ProcHit
  /* 576B0 103BF0 801891B0 */  .4byte wpNess_PKFire_ProcAbsorb
  /* 576B4 103BF4 801891B4 */  .4byte wpNess_PKFire_ProcHop
  /* 576B8 103BF8 801891B8 */  .4byte wpNess_PKFire_ProcHit
  /* 576BC 103BFC 801891BC */  .4byte wpNess_PKFire_ProcReflector
  /* 576C0 103C00 801891C0 */  .4byte wpNess_PKFire_ProcAbsorb
  .incbin "ovl3.raw.bin", 0x576C4, 0xC

glabel wpNess_PKThunderHead_WeaponDesc
  .incbin "ovl3.raw.bin", 0x576D0, 0x8
  /* 576D8 103C18 801891D8 */  .4byte D_ovl2_80131130
  .incbin "ovl3.raw.bin", 0x576DC, 0x8

glabel jtbl_ovl3_801891E4
  /* 576E4 103C24 801891E4 */  .4byte wpNess_PKThunderHead_ProcUpdate
  /* 576E8 103C28 801891E8 */  .4byte wpNess_PKThunderHead_ProcMap
  /* 576EC 103C2C 801891EC */  .4byte wpNess_PKThunderHead_ProcHit
  /* 576F0 103C30 801891F0 */  .4byte wpNess_PKThunderHead_ProcHit
  .incbin "ovl3.raw.bin", 0x576F4, 0x4

glabel jtbl_ovl3_801891F8
  /* 576F8 103C38 801891F8 */  .4byte wpNess_PKThunderHead_ProcHit
  /* 576FC 103C3C 801891FC */  .4byte wpNess_PKThunderHead_ProcReflector
  /* 57700 103C40 80189200 */  .4byte wpNess_PKThunderHead_ProcHit

glabel wpNess_PKThunderTrail_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57704, 0x8
  /* 5770C 103C4C 8018920C */  .4byte D_ovl2_80131130
  .incbin "ovl3.raw.bin", 0x57710, 0x8
  /* 57718 103C58 80189218 */  .4byte wpNess_PKThunderTrail_ProcUpdate
  .incbin "ovl3.raw.bin", 0x5771C, 0x4

glabel jtbl_ovl3_80189220
  /* 57720 103C60 80189220 */  .4byte wpNess_PKThunderTrail_ProcHit
  /* 57724 103C64 80189224 */  .4byte wpNess_PKThunderTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57728, 0x4
  /* 5772C 103C6C 8018922C */  .4byte wpNess_PKThunderTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57730, 0x4
  /* 57734 103C74 80189234 */  .4byte wpNess_PKThunderTrail_ProcHit

glabel wpNess_PKReflectHead_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57738, 0x8
  /* 57740 103C80 80189240 */  .4byte D_ovl2_80131130
  .incbin "ovl3.raw.bin", 0x57744, 0x8

glabel jtbl_ovl3_8018924C
  /* 5774C 103C8C 8018924C */  .4byte wpNess_PKReflectHead_ProcUpdate
  /* 57750 103C90 80189250 */  .4byte wpNess_PKReflectHead_ProcMap
  /* 57754 103C94 80189254 */  .4byte wpNess_PKReflectHead_ProcHit
  /* 57758 103C98 80189258 */  .4byte wpNess_PKReflectHead_ProcHit
  .incbin "ovl3.raw.bin", 0x5775C, 0x4

glabel jtbl_ovl3_80189260
  /* 57760 103CA0 80189260 */  .4byte wpNess_PKReflectHead_ProcHit
  /* 57764 103CA4 80189264 */  .4byte wpNess_PKReflectHead_ProcReflector
  /* 57768 103CA8 80189268 */  .4byte wpNess_PKReflectHead_ProcHit

glabel wpNess_PKReflectTrail_WeaponDesc
  .incbin "ovl3.raw.bin", 0x5776C, 0x8
  /* 57774 103CB4 80189274 */  .4byte D_ovl2_80131130
  .incbin "ovl3.raw.bin", 0x57778, 0x8
  /* 57780 103CC0 80189280 */  .4byte wpNess_PKReflectTrail_ProcUpdate
  .incbin "ovl3.raw.bin", 0x57784, 0x4

glabel jtbl_ovl3_80189288
  /* 57788 103CC8 80189288 */  .4byte wpNess_PKReflectTrail_ProcHit
  /* 5778C 103CCC 8018928C */  .4byte wpNess_PKReflectTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57790, 0x4
  /* 57794 103CD4 80189294 */  .4byte wpNess_PKReflectTrail_ProcHit
  .incbin "ovl3.raw.bin", 0x57798, 0x4
  /* 5779C 103CDC 8018929C */  .4byte wpNess_PKReflectTrail_ProcHit

glabel wpKirby_Cutter_WeaponDesc
  .incbin "ovl3.raw.bin", 0x577A0, 0x8
  /* 577A8 103CE8 801892A8 */  .4byte D_ovl2_80131070
  .incbin "ovl3.raw.bin", 0x577AC, 0x8

glabel jtbl_ovl3_801892B4
  /* 577B4 103CF4 801892B4 */  .4byte wpKirby_Cutter_ProcUpdate
  /* 577B8 103CF8 801892B8 */  .4byte wpKirby_Cutter_ProcMap
  /* 577BC 103CFC 801892BC */  .4byte wpKirby_Cutter_ProcHit
  /* 577C0 103D00 801892C0 */  .4byte wpKirby_Cutter_ProcShield
  .incbin "ovl3.raw.bin", 0x577C4, 0x4

glabel jtbl_ovl3_801892C8
  /* 577C8 103D08 801892C8 */  .4byte wpKirby_Cutter_ProcSetOff
  /* 577CC 103D0C 801892CC */  .4byte wpKirby_Cutter_ProcReflector
  /* 577D0 103D10 801892D0 */  .4byte wpKirby_Cutter_ProcShield
  .incbin "ovl3.raw.bin", 0x577D4, 0xC

glabel wpYoshi_EggThrow_WeaponDesc
  .incbin "ovl3.raw.bin", 0x577E0, 0x8
  /* 577E8 103D28 801892E8 */  .4byte D_ovl2_80130FF0
  .incbin "ovl3.raw.bin", 0x577EC, 0x8

glabel jtbl_ovl3_801892F4
  /* 577F4 103D34 801892F4 */  .4byte wpYoshi_EggThrow_ProcUpdate
  /* 577F8 103D38 801892F8 */  .4byte wpYoshi_EggThrow_ProcMap
  /* 577FC 103D3C 801892FC */  .4byte wpYoshi_EggThrow_ProcHit
  /* 57800 103D40 80189300 */  .4byte wpYoshi_EggThrow_ProcHit
  /* 57804 103D44 80189304 */  .4byte wpYoshi_EggThrow_ProcHop
  /* 57808 103D48 80189308 */  .4byte wpYoshi_EggThrow_ProcHit
  /* 5780C 103D4C 8018930C */  .4byte wpYoshi_EggThrow_ProcReflector
  .incbin "ovl3.raw.bin", 0x57810, 0x10

glabel wpYoshi_Star_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57820, 0x8
  /* 57828 103D68 80189328 */  .4byte D_ovl2_80130FF0
  .incbin "ovl3.raw.bin", 0x5782C, 0x8

glabel jtbl_ovl3_80189334
  /* 57834 103D74 80189334 */  .4byte wpYoshi_Star_ProcUpdate
  /* 57838 103D78 80189338 */  .4byte wpYoshi_Star_ProcMap
  /* 5783C 103D7C 8018933C */  .4byte wpYoshi_Star_ProcHit
  /* 57840 103D80 80189340 */  .4byte wpYoshi_Star_ProcShield
  /* 57844 103D84 80189344 */  .4byte wpYoshi_Star_ProcHop
  /* 57848 103D88 80189348 */  .4byte wpYoshi_Star_ProcHit
  /* 5784C 103D8C 8018934C */  .4byte wpYoshi_Star_ProcReflector
  /* 57850 103D90 80189350 */  .4byte wpYoshi_Star_ProcShield
  .incbin "ovl3.raw.bin", 0x57854, 0xC

glabel wpLink_SpinAttack_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57860, 0x8
  /* 57868 103DA8 80189368 */  .4byte D_ovl2_80130FB0
  .incbin "ovl3.raw.bin", 0x5786C, 0x8

glabel jtbl_ovl3_80189374
  /* 57874 103DB4 80189374 */  .4byte wpLink_SpinAttack_ProcUpdate
  /* 57878 103DB8 80189378 */  .4byte wpLink_SpinAttack_ProcMap
  /* 5787C 103DBC 8018937C */  .4byte wpLink_SpinAttack_ProcHit
  /* 57880 103DC0 80189380 */  .4byte wpLink_SpinAttack_ProcHit
  .incbin "ovl3.raw.bin", 0x57884, 0x4
  /* 57888 103DC8 80189388 */  .4byte wpLink_SpinAttack_ProcHit
  .incbin "ovl3.raw.bin", 0x5788C, 0x14

glabel wpLink_Boomerang_CreateDesc
  .incbin "ovl3.raw.bin", 0x578A0, 0x8
  /* 578A8 103DE8 801893A8 */  .4byte D_ovl2_80130FBC
  .incbin "ovl3.raw.bin", 0x578AC, 0x8

glabel jtbl_ovl3_801893B4
  /* 578B4 103DF4 801893B4 */  .4byte wpLink_Boomerang_ProcUpdate
  /* 578B8 103DF8 801893B8 */  .4byte wpLink_Boomerang_ProcMap
  /* 578BC 103DFC 801893BC */  .4byte wpLink_Boomerang_ProcHit
  /* 578C0 103E00 801893C0 */  .4byte wpLink_Boomerang_ProcShield
  /* 578C4 103E04 801893C4 */  .4byte wpLink_Boomerang_ProcHop
  /* 578C8 103E08 801893C8 */  .4byte wpLink_Boomerang_ProcHit
  /* 578CC 103E0C 801893CC */  .4byte wpLink_Boomerang_ProcReflector
  /* 578D0 103E10 801893D0 */  .4byte wpLink_Boomerang_ProcHit
  .incbin "ovl3.raw.bin", 0x578D4, 0xC

glabel wpMasterHand_YubiBulletSingle_WeaponDesc
  .incbin "ovl3.raw.bin", 0x578E0, 0x8
  /* 578E8 103E28 801893E8 */  .4byte D_ovl2_80131174
  .incbin "ovl3.raw.bin", 0x578EC, 0xC

glabel jtbl_ovl3_801893F8
  /* 578F8 103E38 801893F8 */  .4byte wpMasterHand_YubiBullet_ProcMap
  /* 578FC 103E3C 801893FC */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 57900 103E40 80189400 */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 57904 103E44 80189404 */  .4byte wpMasterHand_YubiBullet_ProcHop
  /* 57908 103E48 80189408 */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 5790C 103E4C 8018940C */  .4byte wpMasterHand_YubiBullet_ProcReflector
  /* 57910 103E50 80189410 */  .4byte wpMasterHand_YubiBullet_ProcHit

glabel wpMasterHand_YubiBulletTriple_WeaponDesc
  .incbin "ovl3.raw.bin", 0x57914, 0x8
  /* 5791C 103E5C 8018941C */  .4byte D_ovl2_80131174
  .incbin "ovl3.raw.bin", 0x57920, 0xC

glabel jtbl_ovl3_8018942C
  /* 5792C 103E6C 8018942C */  .4byte wpMasterHand_YubiBullet_ProcMap
  /* 57930 103E70 80189430 */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 57934 103E74 80189434 */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 57938 103E78 80189438 */  .4byte wpMasterHand_YubiBullet_ProcHop
  /* 5793C 103E7C 8018943C */  .4byte wpMasterHand_YubiBullet_ProcHit
  /* 57940 103E80 80189440 */  .4byte wpMasterHand_YubiBullet_ProcReflector
  /* 57944 103E84 80189444 */  .4byte wpMasterHand_YubiBullet_ProcHit
  .incbin "ovl3.raw.bin", 0x57948, 0x8

glabel itMonster_Global_SelectMonsterIndex
  .incbin "ovl3.raw.bin", 0x57950, 0x4

glabel gItemAppearanceRate1
  .incbin "ovl3.raw.bin", 0x57954, 0xC

glabel gItemAppearanceRate2
  .incbin "ovl3.raw.bin", 0x57960, 0xC

glabel itManager_ProcMake
  /* 5796C 103EAC 8018946C */  .4byte itCommon_Box_MakeItem
  /* 57970 103EB0 80189470 */  .4byte itCommon_Taru_MakeItem
  /* 57974 103EB4 80189474 */  .4byte itCommon_Capsule_MakeItem
  /* 57978 103EB8 80189478 */  .4byte itCommon_Egg_MakeItem
  /* 5797C 103EBC 8018947C */  .4byte itCommon_Tomato_MakeItem
  /* 57980 103EC0 80189480 */  .4byte itCommon_Heart_MakeItem
  /* 57984 103EC4 80189484 */  .4byte itCommon_Star_MakeItem
  /* 57988 103EC8 80189488 */  .4byte itCommon_Sword_MakeItem
  /* 5798C 103ECC 8018948C */  .4byte itCommon_Bat_MakeItem
  /* 57990 103ED0 80189490 */  .4byte itCommon_Harisen_MakeItem
  /* 57994 103ED4 80189494 */  .4byte itCommon_StarRod_MakeItem
  /* 57998 103ED8 80189498 */  .4byte itCommon_LGun_MakeItem
  /* 5799C 103EDC 8018949C */  .4byte itCommon_FFlower_MakeItem
  /* 579A0 103EE0 801894A0 */  .4byte itCommon_Hammer_MakeItem
  /* 579A4 103EE4 801894A4 */  .4byte itCommon_MSBomb_MakeItem
  /* 579A8 103EE8 801894A8 */  .4byte itCommon_BombHei_MakeItem
  /* 579AC 103EEC 801894AC */  .4byte itCommon_NBumper_MakeItem
  /* 579B0 103EF0 801894B0 */  .4byte itCommon_GShell_MakeItem
  /* 579B4 103EF4 801894B4 */  .4byte itCommon_RShell_MakeItem
  /* 579B8 103EF8 801894B8 */  .4byte itCommon_MBall_MakeItem

glabel D_ovl3_801894BC
  .incbin "ovl3.raw.bin", 0x579BC, 0x8

glabel jtbl_ovl3_801894C4
  /* 579C4 103F04 801894C4 */  .4byte itGround_PowerBlock_MakeItem
  /* 579C8 103F08 801894C8 */  .4byte itGround_Bumper_MakeItem
  /* 579CC 103F0C 801894CC */  .4byte itGround_Pakkun_MakeItem
  /* 579D0 103F10 801894D0 */  .4byte D_unkmulti_8018EE5C

glabel jtbl_ovl3_801894D4
  /* 579D4 103F14 801894D4 */  .4byte itGround_RBomb_MakeItem
  /* 579D8 103F18 801894D8 */  .4byte itGround_Lucky_MakeItem
  /* 579DC 103F1C 801894DC */  .4byte itGround_Marumine_MakeItem
  /* 579E0 103F20 801894E0 */  .4byte itGround_Hitokage_MakeItem
  /* 579E4 103F24 801894E4 */  .4byte itGround_Fushigibana_MakeItem
  /* 579E8 103F28 801894E8 */  .4byte itGround_Porygon_MakeItem
  /* 579EC 103F2C 801894EC */  .4byte jtgt_ovl3_8017DBA0
  /* 579F0 103F30 801894F0 */  .4byte jtgt_ovl3_8017E6C0
  /* 579F4 103F34 801894F4 */  .4byte jtgt_ovl3_8017EAD8
  /* 579F8 103F38 801894F8 */  .4byte jtgt_ovl3_8017F08C
  /* 579FC 103F3C 801894FC */  .4byte jtgt_ovl3_8017F9CC
  /* 57A00 103F40 80189500 */  .4byte jtgt_ovl3_80180218
  /* 57A04 103F44 80189504 */  .4byte jtgt_ovl3_80180CDC
  /* 57A08 103F48 80189508 */  .4byte jtgt_ovl3_801814C0
  /* 57A0C 103F4C 8018950C */  .4byte jtgt_ovl3_801822B0
  /* 57A10 103F50 80189510 */  .4byte jtgt_ovl3_80182B74
  /* 57A14 103F54 80189514 */  .4byte itMonster_Dogas_MakeItem
  /* 57A18 103F58 80189518 */  .4byte jtgt_ovl3_80183690
  /* 57A1C 103F5C 8018951C */  .4byte jtgt_ovl3_8017EDE4

glabel itCommon_Drop_ProcList
  /* 57A20 103F60 80189520 */  .4byte itBox_FDrop_SetStatus
  /* 57A24 103F64 80189524 */  .4byte itTaru_FDrop_SetStatus
  /* 57A28 103F68 80189528 */  .4byte itCapsule_FDrop_SetStatus
  /* 57A2C 103F6C 8018952C */  .4byte itEgg_FDrop_SetStatus
  /* 57A30 103F70 80189530 */  .4byte itTomato_FDrop_SetStatus
  /* 57A34 103F74 80189534 */  .4byte itHeart_FDrop_SetStatus
  .incbin "ovl3.raw.bin", 0x57A38, 0x4

glabel jtbl_ovl3_8018953C
  /* 57A3C 103F7C 8018953C */  .4byte itSword_FDrop_SetStatus
  /* 57A40 103F80 80189540 */  .4byte itBat_FDrop_SetStatus
  /* 57A44 103F84 80189544 */  .4byte itHarisen_FDrop_SetStatus
  /* 57A48 103F88 80189548 */  .4byte itStarRod_FDrop_SetStatus
  /* 57A4C 103F8C 8018954C */  .4byte itLGun_FDrop_SetStatus
  /* 57A50 103F90 80189550 */  .4byte itFFlower_FDrop_SetStatus
  /* 57A54 103F94 80189554 */  .4byte itHammer_FDrop_SetStatus
  /* 57A58 103F98 80189558 */  .4byte itMSBomb_FDrop_SetStatus
  /* 57A5C 103F9C 8018955C */  .4byte itBombHei_FDrop_SetStatus
  /* 57A60 103FA0 80189560 */  .4byte itNBumper_FDrop_SetStatus
  /* 57A64 103FA4 80189564 */  .4byte itGShell_FDrop_SetStatus
  /* 57A68 103FA8 80189568 */  .4byte itRShell_FDrop_SetStatus
  /* 57A6C 103FAC 8018956C */  .4byte itMBall_FDrop_SetStatus
  .incbin "ovl3.raw.bin", 0x57A70, 0x4

glabel jtbl_ovl3_80189574
  /* 57A74 103FB4 80189574 */  .4byte itLinkBomb_FDrop_SetStatus

glabel itCommon_Throw_ProcList
  /* 57A78 103FB8 80189578 */  .4byte itBox_FThrow_SetStatus
  /* 57A7C 103FBC 8018957C */  .4byte itTaru_FThrow_SetStatus
  /* 57A80 103FC0 80189580 */  .4byte itCapsule_FThrow_SetStatus
  /* 57A84 103FC4 80189584 */  .4byte itEgg_FThrow_SetStatus
  .incbin "ovl3.raw.bin", 0x57A88, 0xC

glabel jtbl_ovl3_80189594
  /* 57A94 103FD4 80189594 */  .4byte itSword_FThrow_SetStatus
  /* 57A98 103FD8 80189598 */  .4byte itBat_FThrow_SetStatus
  /* 57A9C 103FDC 8018959C */  .4byte itHarisen_FThrow_SetStatus
  /* 57AA0 103FE0 801895A0 */  .4byte itStarRod_FThrow_SetStatus
  /* 57AA4 103FE4 801895A4 */  .4byte itLGun_FThrow_SetStatus
  /* 57AA8 103FE8 801895A8 */  .4byte itFFlower_FThrow_SetStatus
  /* 57AAC 103FEC 801895AC */  .4byte itHammer_FThrow_SetStatus
  /* 57AB0 103FF0 801895B0 */  .4byte itMSBomb_FThrow_SetStatus
  /* 57AB4 103FF4 801895B4 */  .4byte itBombHei_FThrow_SetStatus
  /* 57AB8 103FF8 801895B8 */  .4byte itNBumper_FThrow_SetStatus
  /* 57ABC 103FFC 801895BC */  .4byte itGShell_FThrow_SetStatus
  /* 57AC0 104000 801895C0 */  .4byte itRShell_FThrow_SetStatus
  /* 57AC4 104004 801895C4 */  .4byte itMBall_FThrow_SetStatus
  .incbin "ovl3.raw.bin", 0x57AC8, 0x4

glabel jtbl_ovl3_801895CC
  /* 57ACC 10400C 801895CC */  .4byte itLinkBomb_FThrow_SetStatus

glabel itCommon_Pickup_ProcList
  /* 57AD0 104010 801895D0 */  .4byte itBox_FHold_SetStatus
  /* 57AD4 104014 801895D4 */  .4byte itTaru_FHold_SetStatus
  /* 57AD8 104018 801895D8 */  .4byte itCapsule_FHold_SetStatus
  /* 57ADC 10401C 801895DC */  .4byte itEgg_FHold_SetStatus
  .incbin "ovl3.raw.bin", 0x57AE0, 0xC

glabel jtbl_ovl3_801895EC
  /* 57AEC 10402C 801895EC */  .4byte itSword_FHold_SetStatus
  /* 57AF0 104030 801895F0 */  .4byte itBat_FHold_SetStatus
  /* 57AF4 104034 801895F4 */  .4byte itHarisen_FHold_SetStatus
  /* 57AF8 104038 801895F8 */  .4byte itStarRod_FHold_SetStatus
  /* 57AFC 10403C 801895FC */  .4byte itLGun_FHold_SetStatus
  /* 57B00 104040 80189600 */  .4byte itFFlower_FHold_SetStatus
  /* 57B04 104044 80189604 */  .4byte itHammer_FHold_SetStatus
  /* 57B08 104048 80189608 */  .4byte itMSBomb_FHold_SetStatus
  /* 57B0C 10404C 8018960C */  .4byte itBombHei_FHold_SetStatus
  /* 57B10 104050 80189610 */  .4byte itNBumper_FHold_SetStatus
  /* 57B14 104054 80189614 */  .4byte itGShell_FHold_SetStatus
  /* 57B18 104058 80189618 */  .4byte itRShell_FHold_SetStatus
  /* 57B1C 10405C 8018961C */  .4byte itMBall_FHold_SetStatus
  .incbin "ovl3.raw.bin", 0x57B20, 0x4
  /* 57B24 104064 80189624 */  .4byte itLinkBomb_FHold_SetStatus
  .incbin "ovl3.raw.bin", 0x57B28, 0x8

glabel itCommon_Capsule_ItemDesc
  .incbin "ovl3.raw.bin", 0x57B30, 0x4

glabel D_ovl3_80189634
  /* 57B34 104074 80189634 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57B38, 0xC

glabel jtbl_ovl3_80189644
  /* 57B44 104084 80189644 */  .4byte itCapsule_AFall_ProcUpdate
  /* 57B48 104088 80189648 */  .4byte itCapsule_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57B4C, 0x14
  /* 57B60 1040A0 80189660 */  .4byte itCapsule_SDefault_ProcHit

glabel itCommon_Capsule_StatusDesc
  .incbin "ovl3.raw.bin", 0x57B64, 0x4
  /* 57B68 1040A8 80189668 */  .4byte itCapsule_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57B6C, 0x14

glabel jtbl_ovl3_80189680
  /* 57B80 1040C0 80189680 */  .4byte itCapsule_SDefault_ProcHit
  /* 57B84 1040C4 80189684 */  .4byte itCapsule_AFall_ProcUpdate
  /* 57B88 1040C8 80189688 */  .4byte itCapsule_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57B8C, 0x14
  /* 57BA0 1040E0 801896A0 */  .4byte itCapsule_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x57BA4, 0x20

glabel jtbl_ovl3_801896C4
  /* 57BC4 104104 801896C4 */  .4byte itCapsule_FThrow_ProcUpdate
  /* 57BC8 104108 801896C8 */  .4byte itCapsule_FThrow_ProcMap
  /* 57BCC 10410C 801896CC */  .4byte itCapsule_SDefault_ProcHit
  /* 57BD0 104110 801896D0 */  .4byte itCapsule_SDefault_ProcHit
  /* 57BD4 104114 801896D4 */  .4byte itCommon_SDefault_ProcHop
  /* 57BD8 104118 801896D8 */  .4byte itCapsule_SDefault_ProcHit
  /* 57BDC 10411C 801896DC */  .4byte itCapsule_SDefault_ProcHit
  /* 57BE0 104120 801896E0 */  .4byte itCapsule_SDefault_ProcHit
  /* 57BE4 104124 801896E4 */  .4byte itCapsule_AFall_ProcUpdate
  /* 57BE8 104128 801896E8 */  .4byte itCapsule_FDrop_ProcMap
  /* 57BEC 10412C 801896EC */  .4byte itCapsule_SDefault_ProcHit
  /* 57BF0 104130 801896F0 */  .4byte itCapsule_SDefault_ProcHit
  /* 57BF4 104134 801896F4 */  .4byte itCommon_SDefault_ProcHop
  /* 57BF8 104138 801896F8 */  .4byte itCapsule_SDefault_ProcHit
  /* 57BFC 10413C 801896FC */  .4byte itCapsule_SDefault_ProcHit
  /* 57C00 104140 80189700 */  .4byte itCapsule_SDefault_ProcHit
  /* 57C04 104144 80189704 */  .4byte itCapsule_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x57C08, 0x28

glabel itCommon_Tomato_ItemDesc
  .incbin "ovl3.raw.bin", 0x57C30, 0x4
  /* 57C34 104174 80189734 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57C38, 0xC

glabel jtbl_ovl3_80189744
  /* 57C44 104184 80189744 */  .4byte itTomato_AFall_ProcUpdate
  /* 57C48 104188 80189748 */  .4byte itTomato_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57C4C, 0x18

glabel itCommon_Tomato_StatusDesc
  .incbin "ovl3.raw.bin", 0x57C64, 0x4
  /* 57C68 1041A8 80189768 */  .4byte itTomato_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57C6C, 0x18

glabel jtbl_ovl3_80189784
  /* 57C84 1041C4 80189784 */  .4byte itTomato_AFall_ProcUpdate
  /* 57C88 1041C8 80189788 */  .4byte itTomato_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57C8C, 0x18

glabel jtbl_ovl3_801897A4
  /* 57CA4 1041E4 801897A4 */  .4byte itTomato_AFall_ProcUpdate
  /* 57CA8 1041E8 801897A8 */  .4byte itTomato_FDrop_ProcMap
  .incbin "ovl3.raw.bin", 0x57CAC, 0x24

glabel itCommon_Heart_ItemDesc
  .incbin "ovl3.raw.bin", 0x57CD0, 0x4
  /* 57CD4 104214 801897D4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57CD8, 0xC

glabel jtbl_ovl3_801897E4
  /* 57CE4 104224 801897E4 */  .4byte itHeart_AFall_ProcUpdate
  /* 57CE8 104228 801897E8 */  .4byte itHeart_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57CEC, 0x18

glabel itCommon_Heart_StatusDesc
  .incbin "ovl3.raw.bin", 0x57D04, 0x4
  /* 57D08 104248 80189808 */  .4byte itHeart_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57D0C, 0x18

glabel jtbl_ovl3_80189824
  /* 57D24 104264 80189824 */  .4byte itHeart_AFall_ProcUpdate
  /* 57D28 104268 80189828 */  .4byte itHeart_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57D2C, 0x18

glabel jtbl_ovl3_80189844
  /* 57D44 104284 80189844 */  .4byte itHeart_AFall_ProcUpdate
  /* 57D48 104288 80189848 */  .4byte itHeart_FDrop_ProcMap
  .incbin "ovl3.raw.bin", 0x57D4C, 0x24

glabel itCommon_Star_ItemDesc
  .incbin "ovl3.raw.bin", 0x57D70, 0x4
  /* 57D74 1042B4 80189874 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57D78, 0xC

glabel jtbl_ovl3_80189884
  /* 57D84 1042C4 80189884 */  .4byte itStar_SDefault_ProcUpdate
  /* 57D88 1042C8 80189888 */  .4byte itStar_SDefault_ProcMap
  /* 57D8C 1042CC 8018988C */  .4byte itStar_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x57D90, 0x20

glabel itCommon_Sword_ItemDesc
  .incbin "ovl3.raw.bin", 0x57DB0, 0x4
  /* 57DB4 1042F4 801898B4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57DB8, 0xC

glabel jtbl_ovl3_801898C4
  /* 57DC4 104304 801898C4 */  .4byte itSword_AFall_ProcUpdate
  /* 57DC8 104308 801898C8 */  .4byte itSword_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57DCC, 0x18

glabel itCommon_Sword_StatusDesc
  .incbin "ovl3.raw.bin", 0x57DE4, 0x4
  /* 57DE8 104328 801898E8 */  .4byte itSword_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57DEC, 0x18

glabel jtbl_ovl3_80189904
  /* 57E04 104344 80189904 */  .4byte itSword_AFall_ProcUpdate
  /* 57E08 104348 80189908 */  .4byte itSword_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57E0C, 0x38

glabel jtbl_ovl3_80189944
  /* 57E44 104384 80189944 */  .4byte itSword_AFall_ProcUpdate
  /* 57E48 104388 80189948 */  .4byte itSword_FThrow_ProcMap
  /* 57E4C 10438C 8018994C */  .4byte itSword_FThrow_ProcHit
  /* 57E50 104390 80189950 */  .4byte itSword_FThrow_ProcHit
  /* 57E54 104394 80189954 */  .4byte itCommon_SDefault_ProcHop
  /* 57E58 104398 80189958 */  .4byte itSword_FThrow_ProcHit
  /* 57E5C 10439C 8018995C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x57E60, 0x4

glabel jtbl_ovl3_80189964
  /* 57E64 1043A4 80189964 */  .4byte itSword_AFall_ProcUpdate
  /* 57E68 1043A8 80189968 */  .4byte itSword_FDrop_ProcMap
  /* 57E6C 1043AC 8018996C */  .4byte itSword_FThrow_ProcHit
  /* 57E70 1043B0 80189970 */  .4byte itSword_FThrow_ProcHit
  /* 57E74 1043B4 80189974 */  .4byte itCommon_SDefault_ProcHop
  /* 57E78 1043B8 80189978 */  .4byte itSword_FThrow_ProcHit
  /* 57E7C 1043BC 8018997C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x57E80, 0x10

glabel itCommon_Bat_ItemDesc
  .incbin "ovl3.raw.bin", 0x57E90, 0x4
  /* 57E94 1043D4 80189994 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57E98, 0xC

glabel jtbl_ovl3_801899A4
  /* 57EA4 1043E4 801899A4 */  .4byte itBat_AFall_ProcUpdate
  /* 57EA8 1043E8 801899A8 */  .4byte itBat_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57EAC, 0x18

glabel itCommon_Bat_StatusDesc
  .incbin "ovl3.raw.bin", 0x57EC4, 0x4
  /* 57EC8 104408 801899C8 */  .4byte itBat_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57ECC, 0x18

glabel jtbl_ovl3_801899E4
  /* 57EE4 104424 801899E4 */  .4byte itBat_AFall_ProcUpdate
  /* 57EE8 104428 801899E8 */  .4byte itBat_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57EEC, 0x38

glabel jtbl_ovl3_80189A24
  /* 57F24 104464 80189A24 */  .4byte itBat_FThrow_ProcUpdate
  /* 57F28 104468 80189A28 */  .4byte itBat_FThrow_ProcMap
  /* 57F2C 10446C 80189A2C */  .4byte itBat_FThrow_ProcHit
  /* 57F30 104470 80189A30 */  .4byte itBat_FThrow_ProcHit
  /* 57F34 104474 80189A34 */  .4byte itCommon_SDefault_ProcHop
  /* 57F38 104478 80189A38 */  .4byte itBat_FThrow_ProcHit
  /* 57F3C 10447C 80189A3C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x57F40, 0x4

glabel jtbl_ovl3_80189A44
  /* 57F44 104484 80189A44 */  .4byte itBat_AFall_ProcUpdate
  /* 57F48 104488 80189A48 */  .4byte itBat_FDrop_ProcMap
  /* 57F4C 10448C 80189A4C */  .4byte itBat_FThrow_ProcHit
  /* 57F50 104490 80189A50 */  .4byte itBat_FThrow_ProcHit
  /* 57F54 104494 80189A54 */  .4byte itCommon_SDefault_ProcHop
  /* 57F58 104498 80189A58 */  .4byte itBat_FThrow_ProcHit
  /* 57F5C 10449C 80189A5C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x57F60, 0x10

glabel D_ovl3_80189A70
  .incbin "ovl3.raw.bin", 0x57F70, 0x8

glabel itCommon_Harisen_ItemDesc
  .incbin "ovl3.raw.bin", 0x57F78, 0x4
  /* 57F7C 1044BC 80189A7C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x57F80, 0xC

glabel jtbl_ovl3_80189A8C
  /* 57F8C 1044CC 80189A8C */  .4byte itHarisen_AFall_ProcUpdate
  /* 57F90 1044D0 80189A90 */  .4byte itHarisen_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57F94, 0x18

glabel itCommon_Harisen_StatusDesc
  .incbin "ovl3.raw.bin", 0x57FAC, 0x4
  /* 57FB0 1044F0 80189AB0 */  .4byte itHarisen_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x57FB4, 0x18

glabel jtbl_ovl3_80189ACC
  /* 57FCC 10450C 80189ACC */  .4byte itHarisen_AFall_ProcUpdate
  /* 57FD0 104510 80189AD0 */  .4byte itHarisen_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x57FD4, 0x38

glabel jtbl_ovl3_80189B0C
  /* 5800C 10454C 80189B0C */  .4byte itHarisen_FThrow_ProcUpdate
  /* 58010 104550 80189B10 */  .4byte itHarisen_FThrow_ProcMap
  /* 58014 104554 80189B14 */  .4byte itHarisen_SDefault_ProcHit
  /* 58018 104558 80189B18 */  .4byte itHarisen_SDefault_ProcHit
  /* 5801C 10455C 80189B1C */  .4byte itCommon_SDefault_ProcHop
  /* 58020 104560 80189B20 */  .4byte itHarisen_SDefault_ProcHit
  /* 58024 104564 80189B24 */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58028, 0x4

glabel jtbl_ovl3_80189B2C
  /* 5802C 10456C 80189B2C */  .4byte itHarisen_AFall_ProcUpdate
  /* 58030 104570 80189B30 */  .4byte itHarisen_FDrop_ProcMap
  /* 58034 104574 80189B34 */  .4byte itHarisen_SDefault_ProcHit
  /* 58038 104578 80189B38 */  .4byte itHarisen_SDefault_ProcHit
  /* 5803C 10457C 80189B3C */  .4byte itCommon_SDefault_ProcHop
  /* 58040 104580 80189B40 */  .4byte itHarisen_SDefault_ProcHit
  /* 58044 104584 80189B44 */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58048, 0x8

glabel itCommon_LGun_ItemDesc
  .incbin "ovl3.raw.bin", 0x58050, 0x4
  /* 58054 104594 80189B54 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58058, 0xC

glabel jtbl_ovl3_80189B64
  /* 58064 1045A4 80189B64 */  .4byte itLGun_AFall_ProcUpdate
  /* 58068 1045A8 80189B68 */  .4byte itLGun_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5806C, 0x18

glabel itCommon_LGun_StatusDesc
  .incbin "ovl3.raw.bin", 0x58084, 0x4
  /* 58088 1045C8 80189B88 */  .4byte itLGun_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5808C, 0x18

glabel jtbl_ovl3_80189BA4
  /* 580A4 1045E4 80189BA4 */  .4byte itLGun_AFall_ProcUpdate
  /* 580A8 1045E8 80189BA8 */  .4byte itLGun_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x580AC, 0x38

glabel jtbl_ovl3_80189BE4
  /* 580E4 104624 80189BE4 */  .4byte itLGun_AFall_ProcUpdate
  /* 580E8 104628 80189BE8 */  .4byte itLGun_FThrow_ProcMap
  /* 580EC 10462C 80189BEC */  .4byte itLGun_SDefault_ProcHit
  /* 580F0 104630 80189BF0 */  .4byte itLGun_SDefault_ProcHit
  /* 580F4 104634 80189BF4 */  .4byte itCommon_SDefault_ProcHop
  /* 580F8 104638 80189BF8 */  .4byte itLGun_SDefault_ProcHit
  /* 580FC 10463C 80189BFC */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58100, 0x4

glabel jtbl_ovl3_80189C04
  /* 58104 104644 80189C04 */  .4byte itLGun_AFall_ProcUpdate
  /* 58108 104648 80189C08 */  .4byte itLGun_FDrop_ProcMap
  /* 5810C 10464C 80189C0C */  .4byte itLGun_SDefault_ProcHit
  /* 58110 104650 80189C10 */  .4byte itLGun_SDefault_ProcHit
  /* 58114 104654 80189C14 */  .4byte itCommon_SDefault_ProcHop
  /* 58118 104658 80189C18 */  .4byte itLGun_SDefault_ProcHit
  /* 5811C 10465C 80189C1C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58120, 0x4

glabel wpLGun_Ammo_WeaponDesc
  .incbin "ovl3.raw.bin", 0x58124, 0x8
  /* 5812C 10466C 80189C2C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58130, 0x8

glabel jtbl_ovl3_80189C38
  /* 58138 104678 80189C38 */  .4byte wpLGun_Ammo_ProcUpdate
  /* 5813C 10467C 80189C3C */  .4byte wpLGun_Ammo_ProcMap
  /* 58140 104680 80189C40 */  .4byte wpLGun_Ammo_ProcHit
  /* 58144 104684 80189C44 */  .4byte wpLGun_Ammo_ProcHit
  /* 58148 104688 80189C48 */  .4byte wpLGun_Ammo_ProcHop
  /* 5814C 10468C 80189C4C */  .4byte wpLGun_Ammo_ProcHit
  /* 58150 104690 80189C50 */  .4byte wpLGun_Ammo_ProcReflector
  /* 58154 104694 80189C54 */  .4byte wpLGun_Ammo_ProcHit
  .incbin "ovl3.raw.bin", 0x58158, 0x8

glabel itCommon_FFlower_ItemDesc
  .incbin "ovl3.raw.bin", 0x58160, 0x4

glabel D_ovl3_80189C64
  /* 58164 1046A4 80189C64 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58168, 0xC

glabel jtbl_ovl3_80189C74
  /* 58174 1046B4 80189C74 */  .4byte itFFlower_AFall_ProcUpdate
  /* 58178 1046B8 80189C78 */  .4byte itFFlower_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5817C, 0x18

glabel itCommon_FFlower_StatusDesc
  .incbin "ovl3.raw.bin", 0x58194, 0x4
  /* 58198 1046D8 80189C98 */  .4byte itFFlower_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5819C, 0x18

glabel jtbl_ovl3_80189CB4
  /* 581B4 1046F4 80189CB4 */  .4byte itFFlower_AFall_ProcUpdate
  /* 581B8 1046F8 80189CB8 */  .4byte itFFlower_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x581BC, 0x38

glabel jtbl_ovl3_80189CF4
  /* 581F4 104734 80189CF4 */  .4byte itFFlower_AFall_ProcUpdate
  /* 581F8 104738 80189CF8 */  .4byte itFFlower_FThrow_ProcMap
  /* 581FC 10473C 80189CFC */  .4byte itFFlower_SDefault_ProcHit
  /* 58200 104740 80189D00 */  .4byte itFFlower_SDefault_ProcHit
  /* 58204 104744 80189D04 */  .4byte itCommon_SDefault_ProcHop
  /* 58208 104748 80189D08 */  .4byte itFFlower_SDefault_ProcHit
  /* 5820C 10474C 80189D0C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58210, 0x4

glabel jtbl_ovl3_80189D14
  /* 58214 104754 80189D14 */  .4byte itFFlower_AFall_ProcUpdate
  /* 58218 104758 80189D18 */  .4byte itFFlower_FDrop_ProcMap
  /* 5821C 10475C 80189D1C */  .4byte itFFlower_SDefault_ProcHit
  /* 58220 104760 80189D20 */  .4byte itFFlower_SDefault_ProcHit
  /* 58224 104764 80189D24 */  .4byte itCommon_SDefault_ProcHop
  /* 58228 104768 80189D28 */  .4byte itFFlower_SDefault_ProcHit
  /* 5822C 10476C 80189D2C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58230, 0x4

glabel wpFFlower_Flame_WeaponDesc
  .incbin "ovl3.raw.bin", 0x58234, 0x8
  /* 5823C 10477C 80189D3C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58240, 0x8

glabel jtbl_ovl3_80189D48
  /* 58248 104788 80189D48 */  .4byte wpFFlower_Flame_ProcUpdate
  /* 5824C 10478C 80189D4C */  .4byte wpFFlower_Flame_ProcMap
  /* 58250 104790 80189D50 */  .4byte wpFFlower_Flame_ProcHit
  /* 58254 104794 80189D54 */  .4byte wpFFlower_Flame_ProcHit
  .incbin "ovl3.raw.bin", 0x58258, 0x4

glabel jtbl_ovl3_80189D5C
  /* 5825C 10479C 80189D5C */  .4byte wpFFlower_Flame_ProcHit
  /* 58260 1047A0 80189D60 */  .4byte wpFFlower_Flame_ProcReflector
  .incbin "ovl3.raw.bin", 0x58264, 0xC

glabel itCommon_Hammer_ItemDesc
  .incbin "ovl3.raw.bin", 0x58270, 0x4
  /* 58274 1047B4 80189D74 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58278, 0xC

glabel jtbl_ovl3_80189D84
  /* 58284 1047C4 80189D84 */  .4byte itHammer_AFall_ProcUpdate
  /* 58288 1047C8 80189D88 */  .4byte itHammer_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5828C, 0x18

glabel itCommon_Hammer_StatusDesc
  .incbin "ovl3.raw.bin", 0x582A4, 0x4
  /* 582A8 1047E8 80189DA8 */  .4byte itHammer_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x582AC, 0x18

glabel jtbl_ovl3_80189DC4
  /* 582C4 104804 80189DC4 */  .4byte itHammer_AFall_ProcUpdate
  /* 582C8 104808 80189DC8 */  .4byte itHammer_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x582CC, 0x38

glabel jtbl_ovl3_80189E04
  /* 58304 104844 80189E04 */  .4byte itHammer_FThrow_ProcUpdate
  /* 58308 104848 80189E08 */  .4byte itHammer_FThrow_ProcMap
  /* 5830C 10484C 80189E0C */  .4byte itHammer_SDefault_ProcHit
  /* 58310 104850 80189E10 */  .4byte itHammer_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58314, 0x4
  /* 58318 104858 80189E18 */  .4byte itHammer_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x5831C, 0x8

glabel jtbl_ovl3_80189E24
  /* 58324 104864 80189E24 */  .4byte itHammer_AFall_ProcUpdate
  /* 58328 104868 80189E28 */  .4byte itHammer_FDrop_ProcMap
  /* 5832C 10486C 80189E2C */  .4byte itHammer_SDefault_ProcHit
  /* 58330 104870 80189E30 */  .4byte itHammer_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58334, 0x4
  /* 58338 104878 80189E38 */  .4byte itHammer_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x5833C, 0x14

glabel D_ovl3_80189E50
  .incbin "ovl3.raw.bin", 0x58350, 0x4

glabel itCommon_MSBomb_ItemDesc
  /* 58354 104894 80189E54 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58358, 0xC

glabel jtbl_ovl3_80189E64
  /* 58364 1048A4 80189E64 */  .4byte itMSBomb_AFall_ProcUpdate
  /* 58368 1048A8 80189E68 */  .4byte itMSBomb_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5836C, 0x18

glabel itCommon_MSBomb_StatusDesc
  .incbin "ovl3.raw.bin", 0x58384, 0x4
  /* 58388 1048C8 80189E88 */  .4byte itMSBomb_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5838C, 0x18

glabel jtbl_ovl3_80189EA4
  /* 583A4 1048E4 80189EA4 */  .4byte itMSBomb_AFall_ProcUpdate
  /* 583A8 1048E8 80189EA8 */  .4byte itMSBomb_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x583AC, 0x38

glabel jtbl_ovl3_80189EE4
  /* 583E4 104924 80189EE4 */  .4byte itMSBomb_FThrow_ProcUpdate
  /* 583E8 104928 80189EE8 */  .4byte itMSBomb_FThrow_ProcMap
  /* 583EC 10492C 80189EEC */  .4byte itMSBomb_SDefault_ProcHit
  /* 583F0 104930 80189EF0 */  .4byte itMSBomb_SDefault_ProcHit
  /* 583F4 104934 80189EF4 */  .4byte itCommon_SDefault_ProcHop
  /* 583F8 104938 80189EF8 */  .4byte itMSBomb_SDefault_ProcHit
  /* 583FC 10493C 80189EFC */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58400, 0x4

glabel jtbl_ovl3_80189F04
  /* 58404 104944 80189F04 */  .4byte itMSBomb_AFall_ProcUpdate
  /* 58408 104948 80189F08 */  .4byte itMSBomb_FDrop_ProcMap
  /* 5840C 10494C 80189F0C */  .4byte itMSBomb_SDefault_ProcHit
  /* 58410 104950 80189F10 */  .4byte itMSBomb_SDefault_ProcHit
  /* 58414 104954 80189F14 */  .4byte itCommon_SDefault_ProcHop
  /* 58418 104958 80189F18 */  .4byte itMSBomb_SDefault_ProcHit
  /* 5841C 10495C 80189F1C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58420, 0x4

glabel jtbl_ovl3_80189F24
  /* 58424 104964 80189F24 */  .4byte itMSBomb_GAttach_ProcUpdate
  /* 58428 104968 80189F28 */  .4byte itMSBomb_GAttach_ProcMap
  .incbin "ovl3.raw.bin", 0x5842C, 0x14

glabel jtbl_ovl3_80189F40
  /* 58440 104980 80189F40 */  .4byte itMSBomb_SDefault_ProcDamage
  /* 58444 104984 80189F44 */  .4byte itMSBomb_ADetach_ProcUpdate
  /* 58448 104988 80189F48 */  .4byte itMSBomb_FDrop_ProcMap
  .incbin "ovl3.raw.bin", 0x5844C, 0x14

glabel jtbl_ovl3_80189F60
  /* 58460 1049A0 80189F60 */  .4byte itMSBomb_SDefault_ProcDamage
  /* 58464 1049A4 80189F64 */  .4byte itMSBomb_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58468, 0x30

glabel itCommon_BombHei_ItemDesc
  .incbin "ovl3.raw.bin", 0x58498, 0x4

glabel D_ovl3_80189F9C
  /* 5849C 1049DC 80189F9C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x584A0, 0xC

glabel jtbl_ovl3_80189FAC
  /* 584AC 1049EC 80189FAC */  .4byte itBombHei_AFall_ProcUpdate
  /* 584B0 1049F0 80189FB0 */  .4byte itBombHei_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x584B4, 0x18

glabel itCommon_BombHei_StatusDesc
  /* 584CC 104A0C 80189FCC */  .4byte itBombHei_GWait_ProcUpdate
  /* 584D0 104A10 80189FD0 */  .4byte itBombHei_GWait_ProcMap
  /* 584D4 104A14 80189FD4 */  .4byte itBombHei_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x584D8, 0x10

glabel jtbl_ovl3_80189FE8
  /* 584E8 104A28 80189FE8 */  .4byte itBombHei_SDefault_ProcHit
  /* 584EC 104A2C 80189FEC */  .4byte itBombHei_AFall_ProcUpdate
  /* 584F0 104A30 80189FF0 */  .4byte itBombHei_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x584F4, 0x14
  /* 58508 104A48 8018A008 */  .4byte itBombHei_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x5850C, 0x20

glabel jtbl_ovl3_8018A02C
  /* 5852C 104A6C 8018A02C */  .4byte itBombHei_FThrow_ProcUpdate
  /* 58530 104A70 8018A030 */  .4byte itBombHei_FThrow_ProcMap
  /* 58534 104A74 8018A034 */  .4byte itBombHei_SDefault_ProcHit
  /* 58538 104A78 8018A038 */  .4byte itBombHei_SDefault_ProcHit
  /* 5853C 104A7C 8018A03C */  .4byte itCommon_SDefault_ProcHop
  /* 58540 104A80 8018A040 */  .4byte itBombHei_SDefault_ProcHit
  /* 58544 104A84 8018A044 */  .4byte itCommon_SDefault_ProcReflector
  /* 58548 104A88 8018A048 */  .4byte itBombHei_SDefault_ProcHit
  /* 5854C 104A8C 8018A04C */  .4byte itBombHei_AFall_ProcUpdate
  /* 58550 104A90 8018A050 */  .4byte itBombHei_FDrop_ProcMap
  /* 58554 104A94 8018A054 */  .4byte itBombHei_SDefault_ProcHit
  /* 58558 104A98 8018A058 */  .4byte itBombHei_SDefault_ProcHit
  /* 5855C 104A9C 8018A05C */  .4byte itCommon_SDefault_ProcHop
  /* 58560 104AA0 8018A060 */  .4byte itBombHei_SDefault_ProcHit
  /* 58564 104AA4 8018A064 */  .4byte itCommon_SDefault_ProcReflector
  /* 58568 104AA8 8018A068 */  .4byte itBombHei_SDefault_ProcHit
  /* 5856C 104AAC 8018A06C */  .4byte itBombHei_GWalk_ProcUpdate
  /* 58570 104AB0 8018A070 */  .4byte itBombHei_GWalk_ProcMap
  /* 58574 104AB4 8018A074 */  .4byte itBombHei_MExplode_ProcHit
  /* 58578 104AB8 8018A078 */  .4byte itBombHei_MExplode_ProcHit
  .incbin "ovl3.raw.bin", 0x5857C, 0x4

glabel jtbl_ovl3_8018A080
  /* 58580 104AC0 8018A080 */  .4byte itBombHei_MExplode_ProcHit
  /* 58584 104AC4 8018A084 */  .4byte itBombHei_MExplode_ProcHit
  /* 58588 104AC8 8018A088 */  .4byte itBombHei_MExplode_ProcHit
  /* 5858C 104ACC 8018A08C */  .4byte itBombHei_MExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58590, 0x4

glabel jtbl_ovl3_8018A094
  /* 58594 104AD4 8018A094 */  .4byte itBombHei_MExplode_ProcUpdate
  /* 58598 104AD8 8018A098 */  .4byte itBombHei_MExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x5859C, 0x8

glabel jtbl_ovl3_8018A0A4
  /* 585A4 104AE4 8018A0A4 */  .4byte itBombHei_MExplode_ProcUpdate
  /* 585A8 104AE8 8018A0A8 */  .4byte itBombHei_MExplode_ProcUpdate
  /* 585AC 104AEC 8018A0AC */  .4byte itBombHei_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x585B0, 0x1C

glabel jtbl_ovl3_8018A0CC
  /* 585CC 104B0C 8018A0CC */  .4byte itBombHei_GExplodeWait_ProcUpdate
  /* 585D0 104B10 8018A0D0 */  .4byte itBombHei_GExplodeWait_ProcMap
  /* 585D4 104B14 8018A0D4 */  .4byte itBombHei_MExplode_ProcHit
  /* 585D8 104B18 8018A0D8 */  .4byte itBombHei_MExplode_ProcHit
  .incbin "ovl3.raw.bin", 0x585DC, 0x4

glabel jtbl_ovl3_8018A0E0
  /* 585E0 104B20 8018A0E0 */  .4byte itBombHei_MExplode_ProcHit
  /* 585E4 104B24 8018A0E4 */  .4byte itBombHei_MExplode_ProcHit
  /* 585E8 104B28 8018A0E8 */  .4byte itBombHei_MExplode_ProcHit
  .incbin "ovl3.raw.bin", 0x585EC, 0x4

glabel itCommon_StarRod_ItemDesc
  .incbin "ovl3.raw.bin", 0x585F0, 0x4
  /* 585F4 104B34 8018A0F4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x585F8, 0xC

glabel jtbl_ovl3_8018A104
  /* 58604 104B44 8018A104 */  .4byte itStarRod_AFall_ProcUpdate
  /* 58608 104B48 8018A108 */  .4byte itStarRod_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5860C, 0x18

glabel itCommon_StarRod_StatusDesc
  .incbin "ovl3.raw.bin", 0x58624, 0x4
  /* 58628 104B68 8018A128 */  .4byte itStarRod_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5862C, 0x18

glabel jtbl_ovl3_8018A144
  /* 58644 104B84 8018A144 */  .4byte itStarRod_AFall_ProcUpdate
  /* 58648 104B88 8018A148 */  .4byte itStarRod_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5864C, 0x38

glabel jtbl_ovl3_8018A184
  /* 58684 104BC4 8018A184 */  .4byte itStarRod_FThrow_ProcUpdate
  /* 58688 104BC8 8018A188 */  .4byte itStarRod_FThrow_ProcMap
  /* 5868C 104BCC 8018A18C */  .4byte itStarRod_FThrow_ProcHit
  /* 58690 104BD0 8018A190 */  .4byte itStarRod_FThrow_ProcHit
  /* 58694 104BD4 8018A194 */  .4byte itCommon_SDefault_ProcHop
  /* 58698 104BD8 8018A198 */  .4byte itStarRod_FThrow_ProcHit
  /* 5869C 104BDC 8018A19C */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x586A0, 0x4

glabel jtbl_ovl3_8018A1A4
  /* 586A4 104BE4 8018A1A4 */  .4byte itStarRod_AFall_ProcUpdate
  /* 586A8 104BE8 8018A1A8 */  .4byte itStarRod_FDrop_ProcMap
  /* 586AC 104BEC 8018A1AC */  .4byte itStarRod_FThrow_ProcHit
  /* 586B0 104BF0 8018A1B0 */  .4byte itStarRod_FThrow_ProcHit
  /* 586B4 104BF4 8018A1B4 */  .4byte itCommon_SDefault_ProcHop
  /* 586B8 104BF8 8018A1B8 */  .4byte itStarRod_FThrow_ProcHit
  /* 586BC 104BFC 8018A1BC */  .4byte itCommon_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x586C0, 0x4

glabel wpStarRod_Star_WeaponDesc
  .incbin "ovl3.raw.bin", 0x586C4, 0x8
  /* 586CC 104C0C 8018A1CC */  .4byte gpItemFileData

glabel D_ovl3_8018A1D0
  .incbin "ovl3.raw.bin", 0x586D0, 0x8

glabel jtbl_ovl3_8018A1D8
  /* 586D8 104C18 8018A1D8 */  .4byte wpStarRod_Star_ProcUpdate
  /* 586DC 104C1C 8018A1DC */  .4byte wpStarRod_Star_ProcMap
  /* 586E0 104C20 8018A1E0 */  .4byte wpStarRod_Star_ProcHit
  /* 586E4 104C24 8018A1E4 */  .4byte wpStarRod_Star_ProcHit
  /* 586E8 104C28 8018A1E8 */  .4byte wpStarRod_Star_ProcHop
  /* 586EC 104C2C 8018A1EC */  .4byte wpStarRod_Star_ProcHit
  /* 586F0 104C30 8018A1F0 */  .4byte wpStarRod_Star_ProcReflector
  /* 586F4 104C34 8018A1F4 */  .4byte wpStarRod_Star_ProcHit
  .incbin "ovl3.raw.bin", 0x586F8, 0x8

glabel itCommon_GShell_ItemDesc
  .incbin "ovl3.raw.bin", 0x58700, 0x4
  /* 58704 104C44 8018A204 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58708, 0xC

glabel jtbl_ovl3_8018A214
  /* 58714 104C54 8018A214 */  .4byte itGShell_AFall_ProcUpdate
  /* 58718 104C58 8018A218 */  .4byte itGShell_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5871C, 0x18

glabel itCommon_GShell_StatusDesc
  .incbin "ovl3.raw.bin", 0x58734, 0x4
  /* 58738 104C78 8018A238 */  .4byte itGShell_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5873C, 0x14

glabel jtbl_ovl3_8018A250
  /* 58750 104C90 8018A250 */  .4byte itGShell_SDefault_ProcDamage
  /* 58754 104C94 8018A254 */  .4byte itGShell_AFall_ProcUpdate
  /* 58758 104C98 8018A258 */  .4byte itGShell_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5875C, 0x38

glabel jtbl_ovl3_8018A294
  /* 58794 104CD4 8018A294 */  .4byte itGShell_FThrow_ProcUpdate
  /* 58798 104CD8 8018A298 */  .4byte itGShell_FThrow_ProcMap
  /* 5879C 104CDC 8018A29C */  .4byte itGShell_SDefault_ProcHit
  /* 587A0 104CE0 8018A2A0 */  .4byte itGShell_SDefault_ProcShield
  /* 587A4 104CE4 8018A2A4 */  .4byte itCommon_SDefault_ProcHop
  /* 587A8 104CE8 8018A2A8 */  .4byte itGShell_SDefault_ProcShield
  /* 587AC 104CEC 8018A2AC */  .4byte itCommon_SDefault_ProcReflector
  /* 587B0 104CF0 8018A2B0 */  .4byte itGShell_SDefault_ProcDamage
  /* 587B4 104CF4 8018A2B4 */  .4byte itGShell_AFall_ProcUpdate
  /* 587B8 104CF8 8018A2B8 */  .4byte itGShell_FThrow_ProcMap
  /* 587BC 104CFC 8018A2BC */  .4byte itGShell_SDefault_ProcHit
  /* 587C0 104D00 8018A2C0 */  .4byte itGShell_SDefault_ProcShield
  /* 587C4 104D04 8018A2C4 */  .4byte itCommon_SDefault_ProcHop
  /* 587C8 104D08 8018A2C8 */  .4byte itGShell_SDefault_ProcShield
  /* 587CC 104D0C 8018A2CC */  .4byte itCommon_SDefault_ProcReflector
  /* 587D0 104D10 8018A2D0 */  .4byte itGShell_SDefault_ProcDamage
  /* 587D4 104D14 8018A2D4 */  .4byte itGShell_GSpin_ProcUpdate
  /* 587D8 104D18 8018A2D8 */  .4byte itGShell_GSpin_ProcMap
  /* 587DC 104D1C 8018A2DC */  .4byte itGShell_SDefault_ProcHit
  /* 587E0 104D20 8018A2E0 */  .4byte itGShell_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x587E4, 0x8

glabel jtbl_ovl3_8018A2EC
  /* 587EC 104D2C 8018A2EC */  .4byte itCommon_SDefault_ProcReflector
  /* 587F0 104D30 8018A2F0 */  .4byte itGShell_GASpin_ProcDamage
  /* 587F4 104D34 8018A2F4 */  .4byte itGShell_AFall_ProcUpdate
  /* 587F8 104D38 8018A2F8 */  .4byte itGShell_FThrow_ProcMap
  /* 587FC 104D3C 8018A2FC */  .4byte itGShell_SDefault_ProcHit
  /* 58800 104D40 8018A300 */  .4byte itGShell_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58804, 0x8

glabel jtbl_ovl3_8018A30C
  /* 5880C 104D4C 8018A30C */  .4byte itCommon_SDefault_ProcReflector
  /* 58810 104D50 8018A310 */  .4byte itGShell_GASpin_ProcDamage
  .incbin "ovl3.raw.bin", 0x58814, 0xC

glabel D_ovl3_8018A320
  .incbin "ovl3.raw.bin", 0x58820, 0x4
  /* 58824 104D64 8018A324 */
  .asciz "B@"
  .balign 4

glabel D_ovl3_8018A328
  .incbin "ovl3.raw.bin", 0x58828, 0x4
  /* 5882C 104D6C 8018A32C */
  .asciz "B@"
  .balign 4
  /* 58830 104D70 8018A330 */
  .asciz "@"
  .balign 4
  /* 58834 104D74 8018A334 */
  .asciz "B@"
  .balign 4

glabel D_ovl3_8018A338
  .incbin "ovl3.raw.bin", 0x58838, 0x18

glabel itCommon_Box_ItemDesc
  .incbin "ovl3.raw.bin", 0x58850, 0x4

glabel D_ovl3_8018A354
  /* 58854 104D94 8018A354 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58858, 0xC

glabel jtbl_ovl3_8018A364
  /* 58864 104DA4 8018A364 */  .4byte itBox_AFall_ProcUpdate
  /* 58868 104DA8 8018A368 */  .4byte itBox_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5886C, 0x18

glabel itCommon_Box_StatusDesc
  .incbin "ovl3.raw.bin", 0x58884, 0x4
  /* 58888 104DC8 8018A388 */  .4byte itBox_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5888C, 0x14

glabel jtbl_ovl3_8018A3A0
  /* 588A0 104DE0 8018A3A0 */  .4byte itBox_SDefault_ProcDamage
  /* 588A4 104DE4 8018A3A4 */  .4byte itBox_AFall_ProcUpdate
  /* 588A8 104DE8 8018A3A8 */  .4byte itBox_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x588AC, 0x38

glabel jtbl_ovl3_8018A3E4
  /* 588E4 104E24 8018A3E4 */  .4byte itBox_AFall_ProcUpdate
  /* 588E8 104E28 8018A3E8 */  .4byte itBox_FThrow_ProcMap
  /* 588EC 104E2C 8018A3EC */  .4byte itBox_SDefault_ProcHit
  /* 588F0 104E30 8018A3F0 */  .4byte itBox_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x588F4, 0x4

glabel jtbl_ovl3_8018A3F8
  /* 588F8 104E38 8018A3F8 */  .4byte itBox_SDefault_ProcHit
  /* 588FC 104E3C 8018A3FC */  .4byte itBox_SDefault_ProcHit
  /* 58900 104E40 8018A400 */  .4byte itBox_SDefault_ProcDamage
  /* 58904 104E44 8018A404 */  .4byte itBox_AFall_ProcUpdate
  /* 58908 104E48 8018A408 */  .4byte itBox_FDrop_ProcMap
  /* 5890C 104E4C 8018A40C */  .4byte itBox_SDefault_ProcHit
  /* 58910 104E50 8018A410 */  .4byte itBox_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58914, 0x4

glabel jtbl_ovl3_8018A418
  /* 58918 104E58 8018A418 */  .4byte itBox_SDefault_ProcHit
  /* 5891C 104E5C 8018A41C */  .4byte itBox_SDefault_ProcHit
  /* 58920 104E60 8018A420 */  .4byte itBox_SDefault_ProcDamage
  /* 58924 104E64 8018A424 */  .4byte itBox_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58928, 0x28

glabel itCommon_Taru_ItemDesc
  .incbin "ovl3.raw.bin", 0x58950, 0x4

glabel D_ovl3_8018A454
  /* 58954 104E94 8018A454 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58958, 0xC

glabel jtbl_ovl3_8018A464
  /* 58964 104EA4 8018A464 */  .4byte itTaru_AFall_ProcUpdate
  /* 58968 104EA8 8018A468 */  .4byte itTaru_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5896C, 0x18

glabel itCommon_Taru_StatusDesc
  .incbin "ovl3.raw.bin", 0x58984, 0x4
  /* 58988 104EC8 8018A488 */  .4byte itTaru_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x5898C, 0x14

glabel jtbl_ovl3_8018A4A0
  /* 589A0 104EE0 8018A4A0 */  .4byte itTaru_SDefault_ProcDamage
  /* 589A4 104EE4 8018A4A4 */  .4byte itTaru_AFall_ProcUpdate
  /* 589A8 104EE8 8018A4A8 */  .4byte itTaru_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x589AC, 0x38

glabel jtbl_ovl3_8018A4E4
  /* 589E4 104F24 8018A4E4 */  .4byte itTaru_AFall_ProcUpdate
  /* 589E8 104F28 8018A4E8 */  .4byte itTaru_FThrow_ProcMap
  /* 589EC 104F2C 8018A4EC */  .4byte itTaru_SDefault_ProcHit
  /* 589F0 104F30 8018A4F0 */  .4byte itTaru_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x589F4, 0x4

glabel jtbl_ovl3_8018A4F8
  /* 589F8 104F38 8018A4F8 */  .4byte itTaru_SDefault_ProcHit
  /* 589FC 104F3C 8018A4FC */  .4byte itTaru_SDefault_ProcHit
  /* 58A00 104F40 8018A500 */  .4byte itTaru_SDefault_ProcDamage
  /* 58A04 104F44 8018A504 */  .4byte itTaru_AFall_ProcUpdate
  /* 58A08 104F48 8018A508 */  .4byte itTaru_FThrow_ProcMap
  /* 58A0C 104F4C 8018A50C */  .4byte itTaru_SDefault_ProcHit
  /* 58A10 104F50 8018A510 */  .4byte itTaru_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58A14, 0x4

glabel jtbl_ovl3_8018A518
  /* 58A18 104F58 8018A518 */  .4byte itTaru_SDefault_ProcHit
  /* 58A1C 104F5C 8018A51C */  .4byte itTaru_SDefault_ProcHit
  /* 58A20 104F60 8018A520 */  .4byte itTaru_SDefault_ProcDamage
  /* 58A24 104F64 8018A524 */  .4byte itTaru_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58A28, 0x1C

glabel jtbl_ovl3_8018A544
  /* 58A44 104F84 8018A544 */  .4byte itTaru_GRoll_ProcUpdate
  /* 58A48 104F88 8018A548 */  .4byte itTaru_GRoll_ProcMap
  /* 58A4C 104F8C 8018A54C */  .4byte itTaru_SDefault_ProcHit
  /* 58A50 104F90 8018A550 */  .4byte itTaru_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58A54, 0x4

glabel jtbl_ovl3_8018A558
  /* 58A58 104F98 8018A558 */  .4byte itTaru_SDefault_ProcHit
  /* 58A5C 104F9C 8018A55C */  .4byte itTaru_SDefault_ProcHit
  /* 58A60 104FA0 8018A560 */  .4byte itTaru_SDefault_ProcDamage
  .incbin "ovl3.raw.bin", 0x58A64, 0xC

glabel itCommon_RShell_ItemDesc
  .incbin "ovl3.raw.bin", 0x58A70, 0x4
  /* 58A74 104FB4 8018A574 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58A78, 0xC

glabel jtbl_ovl3_8018A584
  /* 58A84 104FC4 8018A584 */  .4byte itRShell_AFall_ProcUpdate
  /* 58A88 104FC8 8018A588 */  .4byte itRShell_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58A8C, 0x14
  /* 58AA0 104FE0 8018A5A0 */  .4byte itRShell_SDefault_ProcDamage

glabel itCommon_RShell_StatusDesc
  .incbin "ovl3.raw.bin", 0x58AA4, 0x4
  /* 58AA8 104FE8 8018A5A8 */  .4byte itRShell_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x58AAC, 0x14

glabel jtbl_ovl3_8018A5C0
  /* 58AC0 105000 8018A5C0 */  .4byte itRShell_SDefault_ProcDamage
  /* 58AC4 105004 8018A5C4 */  .4byte itRShell_AFall_ProcUpdate
  /* 58AC8 105008 8018A5C8 */  .4byte itRShell_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58ACC, 0x38

glabel jtbl_ovl3_8018A604
  /* 58B04 105044 8018A604 */  .4byte itRShell_AFall_ProcUpdate
  /* 58B08 105048 8018A608 */  .4byte itRShell_FThrow_ProcMap
  /* 58B0C 10504C 8018A60C */  .4byte itRShell_SDefault_ProcHit
  /* 58B10 105050 8018A610 */  .4byte itRShell_SDefault_ProcShield
  /* 58B14 105054 8018A614 */  .4byte itCommon_SDefault_ProcHop
  /* 58B18 105058 8018A618 */  .4byte itRShell_SDefault_ProcShield
  /* 58B1C 10505C 8018A61C */  .4byte itRShell_SDefault_ProcReflector
  /* 58B20 105060 8018A620 */  .4byte itRShell_SDefault_ProcDamage
  /* 58B24 105064 8018A624 */  .4byte itRShell_AFall_ProcUpdate
  /* 58B28 105068 8018A628 */  .4byte itRShell_FThrow_ProcMap
  /* 58B2C 10506C 8018A62C */  .4byte itRShell_SDefault_ProcHit
  /* 58B30 105070 8018A630 */  .4byte itRShell_SDefault_ProcShield
  /* 58B34 105074 8018A634 */  .4byte itCommon_SDefault_ProcHop
  /* 58B38 105078 8018A638 */  .4byte itRShell_SDefault_ProcShield
  /* 58B3C 10507C 8018A63C */  .4byte itRShell_SDefault_ProcReflector
  /* 58B40 105080 8018A640 */  .4byte itRShell_SDefault_ProcDamage
  /* 58B44 105084 8018A644 */  .4byte itRShell_GSpin_ProcUpdate
  /* 58B48 105088 8018A648 */  .4byte itRShell_GSpin_ProcMap
  /* 58B4C 10508C 8018A64C */  .4byte itRShell_SDefault_ProcHit
  /* 58B50 105090 8018A650 */  .4byte itRShell_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58B54, 0x8

glabel jtbl_ovl3_8018A65C
  /* 58B5C 10509C 8018A65C */  .4byte itRShell_SDefault_ProcReflector
  /* 58B60 1050A0 8018A660 */  .4byte itRShell_GSpin_ProcDamage
  /* 58B64 1050A4 8018A664 */  .4byte itRShell_AFall_ProcUpdate
  /* 58B68 1050A8 8018A668 */  .4byte itRShell_FThrow_ProcMap
  /* 58B6C 1050AC 8018A66C */  .4byte itRShell_SDefault_ProcHit
  /* 58B70 1050B0 8018A670 */  .4byte itRShell_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58B74, 0x8

glabel jtbl_ovl3_8018A67C
  /* 58B7C 1050BC 8018A67C */  .4byte itRShell_SDefault_ProcReflector
  /* 58B80 1050C0 8018A680 */  .4byte itRShell_SDefault_ProcDamage
  .incbin "ovl3.raw.bin", 0x58B84, 0xC

glabel itCommon_NBumper_ItemDesc
  .incbin "ovl3.raw.bin", 0x58B90, 0x4
  /* 58B94 1050D4 8018A694 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58B98, 0xC

glabel jtbl_ovl3_8018A6A4
  /* 58BA4 1050E4 8018A6A4 */  .4byte itNBumper_AFall_ProcUpdate
  /* 58BA8 1050E8 8018A6A8 */  .4byte itNBumper_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58BAC, 0x18

glabel itCommon_NBumper_StatusDesc
  .incbin "ovl3.raw.bin", 0x58BC4, 0x4
  /* 58BC8 105108 8018A6C8 */  .4byte itNBumper_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x58BCC, 0x18

glabel jtbl_ovl3_8018A6E4
  /* 58BE4 105124 8018A6E4 */  .4byte itNBumper_AFall_ProcUpdate
  /* 58BE8 105128 8018A6E8 */  .4byte itNBumper_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58BEC, 0x38

glabel jtbl_ovl3_8018A724
  /* 58C24 105164 8018A724 */  .4byte itNBumper_FThrow_ProcUpdate
  /* 58C28 105168 8018A728 */  .4byte itNBumper_FThrow_ProcMap
  /* 58C2C 10516C 8018A72C */  .4byte itNBumper_FThrow_ProcHit
  /* 58C30 105170 8018A730 */  .4byte itNBumper_FThrow_ProcShield
  /* 58C34 105174 8018A734 */  .4byte itCommon_SDefault_ProcHop
  .incbin "ovl3.raw.bin", 0x58C38, 0x4
  /* 58C3C 10517C 8018A73C */  .4byte itNBumper_FThrow_ProcReflector
  .incbin "ovl3.raw.bin", 0x58C40, 0x4

glabel jtbl_ovl3_8018A744
  /* 58C44 105184 8018A744 */  .4byte itNBumper_FThrow_ProcUpdate
  /* 58C48 105188 8018A748 */  .4byte itNBumper_FThrow_ProcMap
  /* 58C4C 10518C 8018A74C */  .4byte itNBumper_FThrow_ProcHit
  /* 58C50 105190 8018A750 */  .4byte itNBumper_FThrow_ProcShield
  /* 58C54 105194 8018A754 */  .4byte itCommon_SDefault_ProcHop
  .incbin "ovl3.raw.bin", 0x58C58, 0x4
  /* 58C5C 10519C 8018A75C */  .4byte itNBumper_FThrow_ProcReflector
  .incbin "ovl3.raw.bin", 0x58C60, 0x4

glabel jtbl_ovl3_8018A764
  /* 58C64 1051A4 8018A764 */  .4byte itNBumper_GWaitHit_ProcUpdate
  /* 58C68 1051A8 8018A768 */  .4byte itNBumper_GWaitHit_ProcMap
  /* 58C6C 1051AC 8018A76C */  .4byte itNBumper_GWaitHit_ProcHit
  .incbin "ovl3.raw.bin", 0x58C70, 0xC
  /* 58C7C 1051BC 8018A77C */  .4byte itNBumper_GWaitHit_ProcReflector
  .incbin "ovl3.raw.bin", 0x58C80, 0x4

glabel jtbl_ovl3_8018A784
  /* 58C84 1051C4 8018A784 */  .4byte itNBumper_AHit_ProcUpdate
  /* 58C88 1051C8 8018A788 */  .4byte itNBumper_FThrow_ProcMap
  /* 58C8C 1051CC 8018A78C */  .4byte itNBumper_FThrow_ProcHit
  /* 58C90 1051D0 8018A790 */  .4byte itNBumper_FThrow_ProcShield
  .incbin "ovl3.raw.bin", 0x58C94, 0x8
  /* 58C9C 1051DC 8018A79C */  .4byte itNBumper_FThrow_ProcReflector
  .incbin "ovl3.raw.bin", 0x58CA0, 0x4
  /* 58CA4 1051E4 8018A7A4 */  .4byte itNBumper_GDisappear_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58CA8, 0x28

glabel itGround_PowerBlock_ItemDesc
  .incbin "ovl3.raw.bin", 0x58CD0, 0x4
  /* 58CD4 105214 8018A7D4 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x58CD8, 0x4
  /* 58CDC 10521C 8018A7DC */
  .asciz "D"
  .balign 4
  .incbin "ovl3.raw.bin", 0x58CE0, 0x4
  /* 58CE4 105224 8018A7E4 */  .4byte itPowerBlock_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58CE8, 0x1C

glabel itGround_PowerBlock_StatusDesc
  .incbin "ovl3.raw.bin", 0x58D04, 0x1C
  /* 58D20 105260 8018A820 */  .4byte itPowerBlock_NWait_ProcDamage
  .incbin "ovl3.raw.bin", 0x58D24, 0xC

glabel itGround_Lucky_ItemDesc
  .incbin "ovl3.raw.bin", 0x58D30, 0x4
  /* 58D34 105274 8018A834 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x58D38, 0xC
  /* 58D44 105284 8018A844 */  .4byte itGLucky_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58D48, 0x4
  /* 58D4C 10528C 8018A84C */  .4byte itGLucky_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58D50, 0x10

glabel jtbl_ovl3_8018A860
  /* 58D60 1052A0 8018A860 */  .4byte itGLucky_SDefault_ProcDamage

glabel itGround_Lucky_StatusDesc
  /* 58D64 1052A4 8018A864 */  .4byte itGLucky_NDamage_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58D68, 0x28

glabel itCommon_MBall_ItemDesc
  .incbin "ovl3.raw.bin", 0x58D90, 0x4
  /* 58D94 1052D4 8018A894 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58D98, 0xC

glabel jtbl_ovl3_8018A8A4
  /* 58DA4 1052E4 8018A8A4 */  .4byte itMBall_AFall_ProcUpdate
  /* 58DA8 1052E8 8018A8A8 */  .4byte itMBall_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58DAC, 0x18

glabel itCommon_MBall_StatusDesc
  .incbin "ovl3.raw.bin", 0x58DC4, 0x4
  /* 58DC8 105308 8018A8C8 */  .4byte itMBall_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x58DCC, 0x18

glabel jtbl_ovl3_8018A8E4
  /* 58DE4 105324 8018A8E4 */  .4byte itMBall_AFall_ProcUpdate
  /* 58DE8 105328 8018A8E8 */  .4byte itMBall_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x58DEC, 0x38

glabel jtbl_ovl3_8018A924
  /* 58E24 105364 8018A924 */  .4byte itMBall_FThrow_ProcUpdate
  /* 58E28 105368 8018A928 */  .4byte itMBall_FThrow_ProcMap
  /* 58E2C 10536C 8018A92C */  .4byte itMBall_SDefault_ProcHit
  /* 58E30 105370 8018A930 */  .4byte itMBall_SDefault_ProcHit
  /* 58E34 105374 8018A934 */  .4byte itCommon_SDefault_ProcHop
  /* 58E38 105378 8018A938 */  .4byte itMBall_SDefault_ProcHit
  /* 58E3C 10537C 8018A93C */  .4byte itMBall_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58E40, 0x4

glabel jtbl_ovl3_8018A944
  /* 58E44 105384 8018A944 */  .4byte itMBall_AFall_ProcUpdate
  /* 58E48 105388 8018A948 */  .4byte itMBall_FThrow_ProcMap
  /* 58E4C 10538C 8018A94C */  .4byte itMBall_SDefault_ProcHit
  /* 58E50 105390 8018A950 */  .4byte itMBall_SDefault_ProcHit
  /* 58E54 105394 8018A954 */  .4byte itCommon_SDefault_ProcHop
  /* 58E58 105398 8018A958 */  .4byte itMBall_SDefault_ProcHit
  /* 58E5C 10539C 8018A95C */  .4byte itMBall_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58E60, 0x4

glabel jtbl_ovl3_8018A964
  /* 58E64 1053A4 8018A964 */  .4byte itMBall_GOpen_ProcUpdate
  /* 58E68 1053A8 8018A968 */  .4byte itMBall_GOpen_ProcMap
  .incbin "ovl3.raw.bin", 0x58E6C, 0x18

glabel jtbl_ovl3_8018A984
  /* 58E84 1053C4 8018A984 */  .4byte itMBall_AOpen_ProcUpdate
  /* 58E88 1053C8 8018A988 */  .4byte itMBall_AOpen_ProcMap
  .incbin "ovl3.raw.bin", 0x58E8C, 0x10
  /* 58E9C 1053DC 8018A99C */  .4byte itMBall_SDefault_ProcReflector
  .incbin "ovl3.raw.bin", 0x58EA0, 0x10

glabel itGround_Pakkun_ItemDesc
  .incbin "ovl3.raw.bin", 0x58EB0, 0x4
  /* 58EB4 1053F4 8018A9B4 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x58EB8, 0xC
  /* 58EC4 105404 8018A9C4 */  .4byte itPakkun_DWait_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58EC8, 0x1C

glabel itGround_Pakkun_StatusDesc
  /* 58EE4 105424 8018A9E4 */  .4byte itPakkun_DWait_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58EE8, 0x1C
  /* 58F04 105444 8018AA04 */  .4byte itPakkun_DAppear_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58F08, 0x18

glabel jtbl_ovl3_8018AA20
  /* 58F20 105460 8018AA20 */  .4byte itPakkun_DAppear_ProcDamage
  /* 58F24 105464 8018AA24 */  .4byte itPakkun_NDamage_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58F28, 0x28

glabel itGround_Bumper_ItemDesc
  .incbin "ovl3.raw.bin", 0x58F50, 0x4
  /* 58F54 105494 8018AA54 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58F58, 0xC
  /* 58F64 1054A4 8018AA64 */  .4byte itGBumper_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x58F68, 0x4
  /* 58F6C 1054AC 8018AA6C */  .4byte itGBumper_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x58F70, 0x20

glabel Article_Iwark_Data
  .incbin "ovl3.raw.bin", 0x58F90, 0x4
  /* 58F94 1054D4 8018AA94 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x58F98, 0xC

glabel jtbl_ovl3_8018AAA4
  /* 58FA4 1054E4 8018AAA4 */  .4byte jtgt_ovl3_8017DB18
  /* 58FA8 1054E8 8018AAA8 */  .4byte jtgt_ovl3_8017DB5C
  .incbin "ovl3.raw.bin", 0x58FAC, 0x18

glabel Article_Iwark_Status
  /* 58FC4 105504 8018AAC4 */  .4byte func_ovl3_8017DA94
  .incbin "ovl3.raw.bin", 0x58FC8, 0x1C
  /* 58FE4 105524 8018AAE4 */  .4byte func_ovl3_8017D820
  .incbin "ovl3.raw.bin", 0x58FE8, 0x1C

glabel Item_Iwark_Rock_Data
  .incbin "ovl3.raw.bin", 0x59004, 0x8
  /* 5900C 10554C 8018AB0C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59010, 0x8

glabel jtbl_ovl3_8018AB18
  /* 59018 105558 8018AB18 */  .4byte jtgt_ovl3_8017DCCC
  /* 5901C 10555C 8018AB1C */  .4byte jtgt_ovl3_8017DD18
  .incbin "ovl3.raw.bin", 0x59020, 0x8
  /* 59028 105568 8018AB28 */  .4byte func_ovl3_8017DE10
  .incbin "ovl3.raw.bin", 0x5902C, 0x4
  /* 59030 105570 8018AB30 */  .4byte func_ovl3_8017DEB8
  .incbin "ovl3.raw.bin", 0x59034, 0xC

glabel Article_Kabigon_Data
  .incbin "ovl3.raw.bin", 0x59040, 0x4
  /* 59044 105584 8018AB44 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59048, 0xC
  /* 59054 105594 8018AB54 */  .4byte func_ovl3_8017E67C
  .incbin "ovl3.raw.bin", 0x59058, 0x1C

glabel Article_Kabigon_Status
  /* 59074 1055B4 8018AB74 */  .4byte func_ovl3_8017E384
  .incbin "ovl3.raw.bin", 0x59078, 0x1C
  /* 59094 1055D4 8018AB94 */  .4byte func_ovl3_8017E070
  .incbin "ovl3.raw.bin", 0x59098, 0x28

glabel Article_Tosakinto_Data
  .incbin "ovl3.raw.bin", 0x590C0, 0x4
  /* 590C4 105604 8018ABC4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x590C8, 0xC

glabel jtbl_ovl3_8018ABD4
  /* 590D4 105614 8018ABD4 */  .4byte jtgt_ovl3_8017EA48
  /* 590D8 105618 8018ABD8 */  .4byte jtgt_ovl3_8017EA98
  .incbin "ovl3.raw.bin", 0x590DC, 0x18

glabel Article_Tosakinto_Status
  /* 590F4 105634 8018ABF4 */  .4byte jtgt_ovl3_8017E7A0
  /* 590F8 105638 8018ABF8 */  .4byte jtgt_ovl3_8017E7CC
  .incbin "ovl3.raw.bin", 0x590FC, 0x18

glabel jtbl_ovl3_8018AC14
  /* 59114 105654 8018AC14 */  .4byte jtgt_ovl3_8017E880
  /* 59118 105658 8018AC18 */  .4byte jtgt_ovl3_8017E8CC
  .incbin "ovl3.raw.bin", 0x5911C, 0x24

glabel Article_Mew_Data
  .incbin "ovl3.raw.bin", 0x59140, 0x4
  /* 59144 105684 8018AC44 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59148, 0xC

glabel jtbl_ovl3_8018AC54
  /* 59154 105694 8018AC54 */  .4byte jtgt_ovl3_8017ED54
  /* 59158 105698 8018AC58 */  .4byte jtgt_ovl3_8017EDA4
  .incbin "ovl3.raw.bin", 0x5915C, 0x18

glabel Article_Mew_Status
  /* 59174 1056B4 8018AC74 */  .4byte func_ovl3_8017EBE0
  .incbin "ovl3.raw.bin", 0x59178, 0x28

glabel Article_Nyars_Data
  .incbin "ovl3.raw.bin", 0x591A0, 0x4
  /* 591A4 1056E4 8018ACA4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x591A8, 0xC

glabel jtbl_ovl3_8018ACB4
  /* 591B4 1056F4 8018ACB4 */  .4byte jtgt_ovl3_8017EFF8
  /* 591B8 1056F8 8018ACB8 */  .4byte jtgt_ovl3_8017F04C
  .incbin "ovl3.raw.bin", 0x591BC, 0x18

glabel Article_Nyars_Status
  /* 591D4 105714 8018ACD4 */  .4byte func_ovl3_8017EEB0
  .incbin "ovl3.raw.bin", 0x591D8, 0x1C

glabel D_ovl3_8018ACF4
  .incbin "ovl3.raw.bin", 0x591F4, 0x8
  /* 591FC 10573C 8018ACFC */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59200, 0x8
  /* 59208 105748 8018AD08 */  .4byte func_ovl3_8017F17C
  .incbin "ovl3.raw.bin", 0x5920C, 0x4

glabel jtbl_ovl3_8018AD10
  /* 59210 105750 8018AD10 */  .4byte jtgt_ovl3_8017F1A4
  /* 59214 105754 8018AD14 */  .4byte jtgt_ovl3_8017F1A4
  /* 59218 105758 8018AD18 */  .4byte jtgt_ovl3_8017F1CC
  /* 5921C 10575C 8018AD1C */  .4byte jtgt_ovl3_8017F1A4
  /* 59220 105760 8018AD20 */  .4byte jtgt_ovl3_8017F274
  /* 59224 105764 8018AD24 */  .4byte jtgt_ovl3_8017F1A4
  .incbin "ovl3.raw.bin", 0x59228, 0x8

glabel Article_Lizardon_Data
  .incbin "ovl3.raw.bin", 0x59230, 0x4
  /* 59234 105774 8018AD34 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59238, 0xC

glabel jtbl_ovl3_8018AD44
  /* 59244 105784 8018AD44 */  .4byte jtgt_ovl3_8017F90C
  /* 59248 105788 8018AD48 */  .4byte jtgt_ovl3_8017F98C
  .incbin "ovl3.raw.bin", 0x5924C, 0x18

glabel Article_Lizardon_Status
  /* 59264 1057A4 8018AD64 */  .4byte jtgt_ovl3_8017F470
  /* 59268 1057A8 8018AD68 */  .4byte jtgt_ovl3_8017F49C
  .incbin "ovl3.raw.bin", 0x5926C, 0x18

glabel jtbl_ovl3_8018AD84
  /* 59284 1057C4 8018AD84 */  .4byte jtgt_ovl3_8017F53C
  /* 59288 1057C8 8018AD88 */  .4byte jtgt_ovl3_8017F568
  .incbin "ovl3.raw.bin", 0x5928C, 0x18

glabel jtbl_ovl3_8018ADA4
  /* 592A4 1057E4 8018ADA4 */  .4byte jtgt_ovl3_8017F5EC
  /* 592A8 1057E8 8018ADA8 */  .4byte jtgt_ovl3_8017F7E8
  .incbin "ovl3.raw.bin", 0x592AC, 0x18

glabel Item_Lizardon_Flame_Data
  .incbin "ovl3.raw.bin", 0x592C4, 0x8
  /* 592CC 10580C 8018ADCC */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x592D0, 0x8

glabel jtbl_ovl3_8018ADD8
  /* 592D8 105818 8018ADD8 */  .4byte jtgt_ovl3_8017FACC
  /* 592DC 10581C 8018ADDC */  .4byte jtgt_ovl3_8017FAF8
  /* 592E0 105820 8018ADE0 */  .4byte jtgt_ovl3_8017FB3C
  /* 592E4 105824 8018ADE4 */  .4byte jtgt_ovl3_8017FB3C
  .incbin "ovl3.raw.bin", 0x592E8, 0x4

glabel jtbl_ovl3_8018ADEC
  /* 592EC 10582C 8018ADEC */  .4byte jtgt_ovl3_8017FB3C
  /* 592F0 105830 8018ADF0 */  .4byte jtgt_ovl3_8017FB74
  .incbin "ovl3.raw.bin", 0x592F4, 0xC

glabel Article_Spear_Data
  .incbin "ovl3.raw.bin", 0x59300, 0x4
  /* 59304 105844 8018AE04 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59308, 0xC

glabel jtbl_ovl3_8018AE14
  /* 59314 105854 8018AE14 */  .4byte jtgt_ovl3_80180194
  /* 59318 105858 8018AE18 */  .4byte jtgt_ovl3_801801D8
  .incbin "ovl3.raw.bin", 0x5931C, 0x18

glabel Article_Spear_Status
  /* 59334 105874 8018AE34 */  .4byte func_ovl3_8017FE70
  .incbin "ovl3.raw.bin", 0x59338, 0x1C
  /* 59354 105894 8018AE54 */  .4byte func_ovl3_8017FFA8
  .incbin "ovl3.raw.bin", 0x59358, 0x1C

glabel Item_Spear_Swarm_Data
  .incbin "ovl3.raw.bin", 0x59374, 0x8
  /* 5937C 1058BC 8018AE7C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59380, 0x8
  /* 59388 1058C8 8018AE88 */  .4byte func_ovl3_80180354
  .incbin "ovl3.raw.bin", 0x5938C, 0x1C

glabel Item_Pippi_Swarm_Data
  .incbin "ovl3.raw.bin", 0x593A8, 0x8
  /* 593B0 1058F0 8018AEB0 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x593B4, 0x8
  /* 593BC 1058FC 8018AEBC */  .4byte func_ovl3_80180354
  .incbin "ovl3.raw.bin", 0x593C0, 0x20

glabel Article_Kamex_Data
  .incbin "ovl3.raw.bin", 0x593E0, 0x4
  /* 593E4 105924 8018AEE4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x593E8, 0xC

glabel jtbl_ovl3_8018AEF4
  /* 593F4 105934 8018AEF4 */  .4byte jtgt_ovl3_80180B1C
  /* 593F8 105938 8018AEF8 */  .4byte jtgt_ovl3_80180B6C
  .incbin "ovl3.raw.bin", 0x593FC, 0x18

glabel Article_Kamex_Status
  /* 59414 105954 8018AF14 */  .4byte jtgt_ovl3_801807DC
  /* 59418 105958 8018AF18 */  .4byte jtgt_ovl3_80180808
  .incbin "ovl3.raw.bin", 0x5941C, 0x18

glabel jtbl_ovl3_8018AF34
  /* 59434 105974 8018AF34 */  .4byte jtgt_ovl3_801808D8
  /* 59438 105978 8018AF38 */  .4byte jtgt_ovl3_80180904
  .incbin "ovl3.raw.bin", 0x5943C, 0x18

glabel jtbl_ovl3_8018AF54
  /* 59454 105994 8018AF54 */  .4byte jtgt_ovl3_801809BC
  /* 59458 105998 8018AF58 */  .4byte jtgt_ovl3_80180A30
  .incbin "ovl3.raw.bin", 0x5945C, 0x18

glabel Item_Hydro_Data
  .incbin "ovl3.raw.bin", 0x59474, 0x8
  /* 5947C 1059BC 8018AF7C */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59480, 0x8
  /* 59488 1059C8 8018AF88 */  .4byte func_ovl3_80180E10
  .incbin "ovl3.raw.bin", 0x5948C, 0x4

glabel jtbl_ovl3_8018AF90
  /* 59490 1059D0 8018AF90 */  .4byte jtgt_ovl3_80180E60
  /* 59494 1059D4 8018AF94 */  .4byte jtgt_ovl3_80180E60
  .incbin "ovl3.raw.bin", 0x59498, 0x4

glabel jtbl_ovl3_8018AF9C
  /* 5949C 1059DC 8018AF9C */  .4byte jtgt_ovl3_80180E60
  /* 594A0 1059E0 8018AFA0 */  .4byte jtgt_ovl3_80180E6C
  /* 594A4 1059E4 8018AFA4 */  .4byte jtgt_ovl3_80180E60
  .incbin "ovl3.raw.bin", 0x594A8, 0x8

glabel Article_Mb_Lucky_Data
  .incbin "ovl3.raw.bin", 0x594B0, 0x4
  /* 594B4 1059F4 8018AFB4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x594B8, 0xC

glabel jtbl_ovl3_8018AFC4
  /* 594C4 105A04 8018AFC4 */  .4byte jtgt_ovl3_80181430
  /* 594C8 105A08 8018AFC8 */  .4byte jtgt_ovl3_80181480
  .incbin "ovl3.raw.bin", 0x594CC, 0x18

glabel Article_Mb_Lucky_Status
  /* 594E4 105A24 8018AFE4 */  .4byte jtgt_ovl3_80181048
  /* 594E8 105A28 8018AFE8 */  .4byte jtgt_ovl3_80181074
  .incbin "ovl3.raw.bin", 0x594EC, 0x18

glabel jtbl_ovl3_8018B004
  /* 59504 105A44 8018B004 */  .4byte jtgt_ovl3_80181124
  /* 59508 105A48 8018B008 */  .4byte jtgt_ovl3_80181150
  .incbin "ovl3.raw.bin", 0x5950C, 0x18

glabel jtbl_ovl3_8018B024
  /* 59524 105A64 8018B024 */  .4byte itMBLucky_GSpawn_ProcUpdate
  /* 59528 105A68 8018B028 */  .4byte itMBLucky_GSpawn_ProcMap
  .incbin "ovl3.raw.bin", 0x5952C, 0x14

glabel jtbl_ovl3_8018B040
  /* 59540 105A80 8018B040 */  .4byte itMBLucky_GSpawn_ProcDamage
  /* 59544 105A84 8018B044 */  .4byte jtgt_ovl3_801813D0
  /* 59548 105A88 8018B048 */  .4byte itMBLucky_GSpawn_ProcMap
  .incbin "ovl3.raw.bin", 0x5954C, 0x24

glabel itCommon_Egg_ItemDesc
  .incbin "ovl3.raw.bin", 0x59570, 0x4

glabel D_ovl3_8018B074
  /* 59574 105AB4 8018B074 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59578, 0xC

glabel jtbl_ovl3_8018B084
  /* 59584 105AC4 8018B084 */  .4byte itEgg_AFall_ProcUpdate
  /* 59588 105AC8 8018B088 */  .4byte itEgg_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x5958C, 0x14
  /* 595A0 105AE0 8018B0A0 */  .4byte itEgg_SDefault_ProcHit

glabel itCommon_Egg_StatusDesc
  .incbin "ovl3.raw.bin", 0x595A4, 0x4
  /* 595A8 105AE8 8018B0A8 */  .4byte itEgg_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x595AC, 0x14

glabel jtbl_ovl3_8018B0C0
  /* 595C0 105B00 8018B0C0 */  .4byte itEgg_SDefault_ProcHit
  /* 595C4 105B04 8018B0C4 */  .4byte itEgg_AFall_ProcUpdate
  /* 595C8 105B08 8018B0C8 */  .4byte itEgg_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x595CC, 0x14
  /* 595E0 105B20 8018B0E0 */  .4byte itEgg_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x595E4, 0x20

glabel jtbl_ovl3_8018B104
  /* 59604 105B44 8018B104 */  .4byte itEgg_FThrow_ProcUpdate
  /* 59608 105B48 8018B108 */  .4byte itEgg_FThrow_ProcMap
  /* 5960C 105B4C 8018B10C */  .4byte itEgg_SDefault_ProcHit
  /* 59610 105B50 8018B110 */  .4byte itEgg_SDefault_ProcHit
  /* 59614 105B54 8018B114 */  .4byte itCommon_SDefault_ProcHop
  /* 59618 105B58 8018B118 */  .4byte itEgg_SDefault_ProcHit
  /* 5961C 105B5C 8018B11C */  .4byte itEgg_SDefault_ProcHit
  /* 59620 105B60 8018B120 */  .4byte itEgg_SDefault_ProcHit
  /* 59624 105B64 8018B124 */  .4byte itEgg_AFall_ProcUpdate
  /* 59628 105B68 8018B128 */  .4byte itEgg_FDrop_ProcMap
  /* 5962C 105B6C 8018B12C */  .4byte itEgg_SDefault_ProcHit
  /* 59630 105B70 8018B130 */  .4byte itEgg_SDefault_ProcHit
  /* 59634 105B74 8018B134 */  .4byte itCommon_SDefault_ProcHop
  /* 59638 105B78 8018B138 */  .4byte itEgg_SDefault_ProcHit
  /* 5963C 105B7C 8018B13C */  .4byte itEgg_SDefault_ProcHit
  /* 59640 105B80 8018B140 */  .4byte itEgg_SDefault_ProcHit
  /* 59644 105B84 8018B144 */  .4byte itEgg_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59648, 0x28

glabel Article_Starmie_Data
  .incbin "ovl3.raw.bin", 0x59670, 0x4
  /* 59674 105BB4 8018B174 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59678, 0xC

glabel jtbl_ovl3_8018B184
  /* 59684 105BC4 8018B184 */  .4byte jtgt_ovl3_8018221C
  /* 59688 105BC8 8018B188 */  .4byte jtgt_ovl3_80182270
  .incbin "ovl3.raw.bin", 0x5968C, 0x18

glabel Article_Starmie_Status
  /* 596A4 105BE4 8018B1A4 */  .4byte func_ovl3_80181E40
  .incbin "ovl3.raw.bin", 0x596A8, 0x1C
  /* 596C4 105C04 8018B1C4 */  .4byte func_ovl3_80181D24
  .incbin "ovl3.raw.bin", 0x596C8, 0x1C

glabel Item_Swift_Data
  .incbin "ovl3.raw.bin", 0x596E4, 0x8
  /* 596EC 105C2C 8018B1EC */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x596F0, 0x8
  /* 596F8 105C38 8018B1F8 */  .4byte func_ovl3_801823B4
  .incbin "ovl3.raw.bin", 0x596FC, 0x4

glabel jtbl_ovl3_8018B200
  /* 59700 105C40 8018B200 */  .4byte jtgt_ovl3_801823E8
  /* 59704 105C44 8018B204 */  .4byte jtgt_ovl3_801823E8
  /* 59708 105C48 8018B208 */  .4byte jtgt_ovl3_80182418
  /* 5970C 105C4C 8018B20C */  .4byte jtgt_ovl3_801823E8
  /* 59710 105C50 8018B210 */  .4byte jtgt_ovl3_801824C0
  /* 59714 105C54 8018B214 */  .4byte jtgt_ovl3_801823E8
  .incbin "ovl3.raw.bin", 0x59718, 0x8

glabel Article_Sawamura_Data
  .incbin "ovl3.raw.bin", 0x59720, 0x4
  /* 59724 105C64 8018B224 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x59728, 0xC

glabel jtbl_ovl3_8018B234
  /* 59734 105C74 8018B234 */  .4byte jtgt_ovl3_80182AE0
  /* 59738 105C78 8018B238 */  .4byte jtgt_ovl3_80182B34
  .incbin "ovl3.raw.bin", 0x5973C, 0x18

glabel Article_Sawamura_Status
  /* 59754 105C94 8018B254 */  .4byte jtgt_ovl3_80182630
  /* 59758 105C98 8018B258 */  .4byte jtgt_ovl3_80182660
  .incbin "ovl3.raw.bin", 0x5975C, 0x18

glabel jtbl_ovl3_8018B274
  /* 59774 105CB4 8018B274 */  .4byte jtgt_ovl3_801826D0
  /* 59778 105CB8 8018B278 */  .4byte jtgt_ovl3_80182714
  .incbin "ovl3.raw.bin", 0x5977C, 0x18
  /* 59794 105CD4 8018B294 */  .4byte func_ovl3_80182764
  .incbin "ovl3.raw.bin", 0x59798, 0x28

glabel Article_Dogas_Data
  .incbin "ovl3.raw.bin", 0x597C0, 0x4
  /* 597C4 105D04 8018B2C4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x597C8, 0xC

glabel jtbl_ovl3_8018B2D4
  /* 597D4 105D14 8018B2D4 */  .4byte itDogas_NAppear_ProcUpdate
  /* 597D8 105D18 8018B2D8 */  .4byte itDogas_NAppear_ProcMap
  .incbin "ovl3.raw.bin", 0x597DC, 0x18

glabel itMonster_Dogas_StatusDesc
  /* 597F4 105D34 8018B2F4 */  .4byte itDogas_NActive_ProcUpdate
  .incbin "ovl3.raw.bin", 0x597F8, 0x1C
  /* 59814 105D54 8018B314 */  .4byte itDogas_NDisappear_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59818, 0x1C

glabel Item_Smog_Data
  .incbin "ovl3.raw.bin", 0x59834, 0x8

glabel D_ovl3_8018B33C
  /* 5983C 105D7C 8018B33C */  .4byte gpItemFileData

glabel D_ovl3_8018B340
  .incbin "ovl3.raw.bin", 0x59840, 0x8
  /* 59848 105D88 8018B348 */  .4byte wpDogas_Smog_ProcUpdate
  .incbin "ovl3.raw.bin", 0x5984C, 0x24

glabel Article_Pippi_ProcStatus
  /* 59870 105DB0 8018B370 */  .4byte func_ovl3_8017DA60
  /* 59874 105DB4 8018B374 */  .4byte func_ovl3_8017E648
  /* 59878 105DB8 8018B378 */  .4byte func_ovl3_8017E828
  /* 5987C 105DBC 8018B37C */  .4byte func_ovl3_8017EFC4
  /* 59880 105DC0 8018B380 */  .4byte func_ovl3_8017F5C4
  /* 59884 105DC4 8018B384 */  .4byte func_ovl3_80180160
  /* 59888 105DC8 8018B388 */  .4byte func_ovl3_80180964
  /* 5988C 105DCC 8018B38C */  .4byte func_ovl3_801811AC
  /* 59890 105DD0 8018B390 */  .4byte func_ovl3_801821E8
  /* 59894 105DD4 8018B394 */  .4byte func_ovl3_801826A8
  /* 59898 105DD8 8018B398 */  .4byte itDogas_NActive_SetStatus
  /* 5989C 105DDC 8018B39C */  .4byte func_ovl3_8017ED20

glabel Article_Pippi_Data
  .incbin "ovl3.raw.bin", 0x598A0, 0x4
  /* 598A4 105DE4 8018B3A4 */  .4byte gpItemFileData
  .incbin "ovl3.raw.bin", 0x598A8, 0xC

glabel jtbl_ovl3_8018B3B4
  /* 598B4 105DF4 8018B3B4 */  .4byte jtgt_ovl3_801835FC
  /* 598B8 105DF8 8018B3B8 */  .4byte jtgt_ovl3_80183650
  .incbin "ovl3.raw.bin", 0x598BC, 0x44

glabel itGround_Marumine_ItemDesc
  .incbin "ovl3.raw.bin", 0x59900, 0x4

glabel D_ovl3_8018B404
  /* 59904 105E44 8018B404 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59908, 0xC
  /* 59914 105E54 8018B414 */  .4byte itMarumine_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59918, 0x1C

glabel itGround_Marumine_StatusDesc
  /* 59934 105E74 8018B434 */  .4byte itMarumine_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59938, 0x28

glabel itGround_Porygon_ItemDesc
  .incbin "ovl3.raw.bin", 0x59960, 0x4

glabel D_ovl3_8018B464
  /* 59964 105EA4 8018B464 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59968, 0xC
  /* 59974 105EB4 8018B474 */  .4byte itPorygon_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59978, 0x28

glabel itGround_Hitokage_ItemDesc
  .incbin "ovl3.raw.bin", 0x599A0, 0x4
  /* 599A4 105EE4 8018B4A4 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x599A8, 0xC
  /* 599B4 105EF4 8018B4B4 */  .4byte itHitokage_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x599B8, 0x18

glabel jtbl_ovl3_8018B4D0
  /* 599D0 105F10 8018B4D0 */  .4byte itHitokage_SDefault_ProcDamage

glabel itGround_Hitokage_StatusDesc
  /* 599D4 105F14 8018B4D4 */  .4byte itHitokage_NDamage_ProcUpdate
  .incbin "ovl3.raw.bin", 0x599D8, 0x1C

glabel wpHitokage_Flame_WeaponDesc
  .incbin "ovl3.raw.bin", 0x599F4, 0x8
  /* 599FC 105F3C 8018B4FC */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59A00, 0x8

glabel jtbl_ovl3_8018B508
  /* 59A08 105F48 8018B508 */  .4byte wpHitokage_Flame_ProcUpdate
  /* 59A0C 105F4C 8018B50C */  .4byte wpHitokage_Flame_ProcMap
  /* 59A10 105F50 8018B510 */  .4byte wpHitokage_Flame_ProcHit
  /* 59A14 105F54 8018B514 */  .4byte wpHitokage_Flame_ProcHit
  .incbin "ovl3.raw.bin", 0x59A18, 0x4

glabel jtbl_ovl3_8018B51C
  /* 59A1C 105F5C 8018B51C */  .4byte wpHitokage_Flame_ProcHit
  /* 59A20 105F60 8018B520 */  .4byte wpHitokage_Flame_ProcReflector
  .incbin "ovl3.raw.bin", 0x59A24, 0xC

glabel itGround_Fushigibana_ItemDesc
  .incbin "ovl3.raw.bin", 0x59A30, 0x4

glabel D_ovl3_8018B534
  /* 59A34 105F74 8018B534 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59A38, 0xC
  /* 59A44 105F84 8018B544 */  .4byte itFushigibana_SDefault_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59A48, 0x1C

glabel wpFushigibana_Razor_WeaponDesc
  .incbin "ovl3.raw.bin", 0x59A64, 0x8
  /* 59A6C 105FAC 8018B56C */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59A70, 0x8
  /* 59A78 105FB8 8018B578 */  .4byte wpFushigibana_Razor_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59A7C, 0x4

glabel jtbl_ovl3_8018B580
  /* 59A80 105FC0 8018B580 */  .4byte wpFushigibana_Razor_ProcHit
  /* 59A84 105FC4 8018B584 */  .4byte wpFushigibana_Razor_ProcHit
  /* 59A88 105FC8 8018B588 */  .4byte wpFushigibana_Razor_ProcHop
  /* 59A8C 105FCC 8018B58C */  .4byte wpFushigibana_Razor_ProcHit
  /* 59A90 105FD0 8018B590 */  .4byte wpFushigibana_Razor_ProcReflector
  /* 59A94 105FD4 8018B594 */  .4byte wpFushigibana_Razor_ProcHit
  .incbin "ovl3.raw.bin", 0x59A98, 0x8

glabel itGround_RBomb_ItemDesc
  .incbin "ovl3.raw.bin", 0x59AA0, 0x4

glabel D_ovl3_8018B5A4
  /* 59AA4 105FE4 8018B5A4 */  .4byte D_ovl2_801313F4
  .incbin "ovl3.raw.bin", 0x59AA8, 0xC

glabel jtbl_ovl3_8018B5B4
  /* 59AB4 105FF4 8018B5B4 */  .4byte itRBomb_AFall_ProcUpdate
  /* 59AB8 105FF8 8018B5B8 */  .4byte itRBomb_AFall_ProcMap
  /* 59ABC 105FFC 8018B5BC */  .4byte itRBomb_SDefault_ProcHit
  /* 59AC0 106000 8018B5C0 */  .4byte itRBomb_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x59AC4, 0x4

glabel jtbl_ovl3_8018B5C8
  /* 59AC8 106008 8018B5C8 */  .4byte itRBomb_SDefault_ProcHit
  /* 59ACC 10600C 8018B5CC */  .4byte itRBomb_SDefault_ProcHit
  /* 59AD0 106010 8018B5D0 */  .4byte itRBomb_SDefault_ProcDamage

glabel itGround_RBomb_StatusDesc
  /* 59AD4 106014 8018B5D4 */  .4byte itRBomb_AFall_ProcUpdate
  /* 59AD8 106018 8018B5D8 */  .4byte itRBomb_AFall_ProcMap
  /* 59ADC 10601C 8018B5DC */  .4byte itRBomb_SDefault_ProcHit
  /* 59AE0 106020 8018B5E0 */  .4byte itRBomb_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x59AE4, 0x4

glabel jtbl_ovl3_8018B5E8
  /* 59AE8 106028 8018B5E8 */  .4byte itRBomb_SDefault_ProcHit
  /* 59AEC 10602C 8018B5EC */  .4byte itRBomb_SDefault_ProcHit
  /* 59AF0 106030 8018B5F0 */  .4byte itRBomb_SDefault_ProcDamage
  /* 59AF4 106034 8018B5F4 */  .4byte itRBomb_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59AF8, 0x1C

glabel jtbl_ovl3_8018B614
  /* 59B14 106054 8018B614 */  .4byte itRBomb_GRoll_ProcUpdate
  /* 59B18 106058 8018B618 */  .4byte itRBomb_GRoll_ProcMap
  /* 59B1C 10605C 8018B61C */  .4byte itRBomb_SDefault_ProcHit
  /* 59B20 106060 8018B620 */  .4byte itRBomb_SDefault_ProcHit
  .incbin "ovl3.raw.bin", 0x59B24, 0x4

glabel jtbl_ovl3_8018B628
  /* 59B28 106068 8018B628 */  .4byte itRBomb_SDefault_ProcHit
  /* 59B2C 10606C 8018B62C */  .4byte itRBomb_SDefault_ProcHit
  /* 59B30 106070 8018B630 */  .4byte itRBomb_SDefault_ProcDamage
  .incbin "ovl3.raw.bin", 0x59B34, 0xC

glabel itNess_PKFire_ItemDesc
  .incbin "ovl3.raw.bin", 0x59B40, 0x4
  /* 59B44 106084 8018B644 */  .4byte D_ovl2_8013113C
  .incbin "ovl3.raw.bin", 0x59B48, 0xC
  /* 59B54 106094 8018B654 */  .4byte itPKFire_NCreate_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59B58, 0x1C

glabel itNess_PKFire_StatusDesc
  /* 59B74 1060B4 8018B674 */  .4byte itPKFire_GWait_ProcUpdate
  /* 59B78 1060B8 8018B678 */  .4byte itPKFire_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x59B7C, 0x14

glabel jtbl_ovl3_8018B690
  /* 59B90 1060D0 8018B690 */  .4byte itPKFire_SDefault_ProcDamage
  /* 59B94 1060D4 8018B694 */  .4byte itPKFire_AFall_ProcUpdate
  /* 59B98 1060D8 8018B698 */  .4byte itPKFire_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x59B9C, 0x14
  /* 59BB0 1060F0 8018B6B0 */  .4byte itPKFire_SDefault_ProcDamage
  .incbin "ovl3.raw.bin", 0x59BB4, 0xC

glabel itLink_Bomb_ItemDesc
  .incbin "ovl3.raw.bin", 0x59BC0, 0x4

glabel D_ovl3_8018B6C4
  /* 59BC4 106104 8018B6C4 */  .4byte D_ovl2_80130FB0
  .incbin "ovl3.raw.bin", 0x59BC8, 0xC
  /* 59BD4 106114 8018B6D4 */  .4byte itLinkBomb_FHold_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59BD8, 0x1C

glabel itLink_Bomb_StatusDesc
  /* 59BF4 106134 8018B6F4 */  .4byte itLinkBomb_GWait_ProcUpdate
  /* 59BF8 106138 8018B6F8 */  .4byte itLinkBomb_GWait_ProcMap
  .incbin "ovl3.raw.bin", 0x59BFC, 0x14

glabel jtbl_ovl3_8018B710
  /* 59C10 106150 8018B710 */  .4byte itLinkBomb_SDefault_ProcDamage
  /* 59C14 106154 8018B714 */  .4byte itLinkBomb_AFall_ProcUpdate
  /* 59C18 106158 8018B718 */  .4byte itLinkBomb_AFall_ProcMap
  .incbin "ovl3.raw.bin", 0x59C1C, 0x14

glabel jtbl_ovl3_8018B730
  /* 59C30 106170 8018B730 */  .4byte itLinkBomb_SDefault_ProcDamage
  /* 59C34 106174 8018B734 */  .4byte itLinkBomb_FHold_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59C38, 0x1C

glabel jtbl_ovl3_8018B754
  /* 59C54 106194 8018B754 */  .4byte itLinkBomb_AFall_ProcUpdate
  /* 59C58 106198 8018B758 */  .4byte itLinkBomb_FThrow_ProcMap
  /* 59C5C 10619C 8018B75C */  .4byte itLinkBomb_FThrow_ProcHit
  /* 59C60 1061A0 8018B760 */  .4byte itLinkBomb_SDefault_ProcShield
  /* 59C64 1061A4 8018B764 */  .4byte itCommon_SDefault_ProcHop
  .incbin "ovl3.raw.bin", 0x59C68, 0x4

glabel jtbl_ovl3_8018B76C
  /* 59C6C 1061AC 8018B76C */  .4byte itCommon_SDefault_ProcReflector
  /* 59C70 1061B0 8018B770 */  .4byte itLinkBomb_SDefault_ProcDamage
  /* 59C74 1061B4 8018B774 */  .4byte itLinkBomb_FDrop_ProcUpdate
  /* 59C78 1061B8 8018B778 */  .4byte itLinkBomb_FThrow_ProcMap
  /* 59C7C 1061BC 8018B77C */  .4byte itLinkBomb_FDrop_ProcHit
  /* 59C80 1061C0 8018B780 */  .4byte itLinkBomb_SDefault_ProcShield
  /* 59C84 1061C4 8018B784 */  .4byte itCommon_SDefault_ProcHop
  .incbin "ovl3.raw.bin", 0x59C88, 0x4

glabel jtbl_ovl3_8018B78C
  /* 59C8C 1061CC 8018B78C */  .4byte itCommon_SDefault_ProcReflector
  /* 59C90 1061D0 8018B790 */  .4byte itLinkBomb_FDrop_ProcDamage
  /* 59C94 1061D4 8018B794 */  .4byte itLinkBomb_NExplode_ProcUpdate
  .incbin "ovl3.raw.bin", 0x59C98, 0x28

glabel jtbl_ovl3_8018B7C0
  /* 59CC0 106200 8018B7C0 */  .4byte jtgt_ovl3_80131CFC
  /* 59CC4 106204 8018B7C4 */  .4byte jtgt_ovl3_8013253C
  /* 59CC8 106208 8018B7C8 */  .4byte jtgt_ovl3_8013253C
  /* 59CCC 10620C 8018B7CC */  .4byte jtgt_ovl3_8013253C
  /* 59CD0 106210 8018B7D0 */  .4byte jtgt_ovl3_8013253C
  /* 59CD4 106214 8018B7D4 */  .4byte jtgt_ovl3_8013253C
  /* 59CD8 106218 8018B7D8 */  .4byte jtgt_ovl3_8013253C
  /* 59CDC 10621C 8018B7DC */  .4byte jtgt_ovl3_8013253C
  /* 59CE0 106220 8018B7E0 */  .4byte jtgt_ovl3_8013253C
  /* 59CE4 106224 8018B7E4 */  .4byte jtgt_ovl3_8013253C
  /* 59CE8 106228 8018B7E8 */  .4byte jtgt_ovl3_8013253C
  /* 59CEC 10622C 8018B7EC */  .4byte jtgt_ovl3_8013253C
  /* 59CF0 106230 8018B7F0 */  .4byte jtgt_ovl3_8013253C
  /* 59CF4 106234 8018B7F4 */  .4byte jtgt_ovl3_8013253C
  /* 59CF8 106238 8018B7F8 */  .4byte jtgt_ovl3_8013253C
  /* 59CFC 10623C 8018B7FC */  .4byte jtgt_ovl3_8013253C
  /* 59D00 106240 8018B800 */  .4byte jtgt_ovl3_80131D0C
  /* 59D04 106244 8018B804 */  .4byte jtgt_ovl3_8013253C
  /* 59D08 106248 8018B808 */  .4byte jtgt_ovl3_8013253C
  /* 59D0C 10624C 8018B80C */  .4byte jtgt_ovl3_8013253C
  /* 59D10 106250 8018B810 */  .4byte jtgt_ovl3_8013253C
  /* 59D14 106254 8018B814 */  .4byte jtgt_ovl3_8013253C
  /* 59D18 106258 8018B818 */  .4byte jtgt_ovl3_8013253C
  /* 59D1C 10625C 8018B81C */  .4byte jtgt_ovl3_8013253C
  /* 59D20 106260 8018B820 */  .4byte jtgt_ovl3_8013253C
  /* 59D24 106264 8018B824 */  .4byte jtgt_ovl3_8013253C
  /* 59D28 106268 8018B828 */  .4byte jtgt_ovl3_8013253C
  /* 59D2C 10626C 8018B82C */  .4byte jtgt_ovl3_8013253C
  /* 59D30 106270 8018B830 */  .4byte jtgt_ovl3_8013253C
  /* 59D34 106274 8018B834 */  .4byte jtgt_ovl3_8013253C
  /* 59D38 106278 8018B838 */  .4byte jtgt_ovl3_8013253C
  /* 59D3C 10627C 8018B83C */  .4byte jtgt_ovl3_8013253C
  /* 59D40 106280 8018B840 */  .4byte jtgt_ovl3_80131D24
  /* 59D44 106284 8018B844 */  .4byte jtgt_ovl3_8013253C
  /* 59D48 106288 8018B848 */  .4byte jtgt_ovl3_8013253C
  /* 59D4C 10628C 8018B84C */  .4byte jtgt_ovl3_8013253C
  /* 59D50 106290 8018B850 */  .4byte jtgt_ovl3_8013253C
  /* 59D54 106294 8018B854 */  .4byte jtgt_ovl3_8013253C
  /* 59D58 106298 8018B858 */  .4byte jtgt_ovl3_8013253C
  /* 59D5C 10629C 8018B85C */  .4byte jtgt_ovl3_8013253C
  /* 59D60 1062A0 8018B860 */  .4byte jtgt_ovl3_8013253C
  /* 59D64 1062A4 8018B864 */  .4byte jtgt_ovl3_8013253C
  /* 59D68 1062A8 8018B868 */  .4byte jtgt_ovl3_8013253C
  /* 59D6C 1062AC 8018B86C */  .4byte jtgt_ovl3_8013253C
  /* 59D70 1062B0 8018B870 */  .4byte jtgt_ovl3_8013253C
  /* 59D74 1062B4 8018B874 */  .4byte jtgt_ovl3_8013253C
  /* 59D78 1062B8 8018B878 */  .4byte jtgt_ovl3_8013253C
  /* 59D7C 1062BC 8018B87C */  .4byte jtgt_ovl3_8013253C
  /* 59D80 1062C0 8018B880 */  .4byte jtgt_ovl3_80131D34
  /* 59D84 1062C4 8018B884 */  .4byte jtgt_ovl3_8013253C
  /* 59D88 1062C8 8018B888 */  .4byte jtgt_ovl3_8013253C
  /* 59D8C 1062CC 8018B88C */  .4byte jtgt_ovl3_8013253C
  /* 59D90 1062D0 8018B890 */  .4byte jtgt_ovl3_8013253C
  /* 59D94 1062D4 8018B894 */  .4byte jtgt_ovl3_8013253C
  /* 59D98 1062D8 8018B898 */  .4byte jtgt_ovl3_8013253C
  /* 59D9C 1062DC 8018B89C */  .4byte jtgt_ovl3_8013253C
  /* 59DA0 1062E0 8018B8A0 */  .4byte jtgt_ovl3_8013253C
  /* 59DA4 1062E4 8018B8A4 */  .4byte jtgt_ovl3_8013253C
  /* 59DA8 1062E8 8018B8A8 */  .4byte jtgt_ovl3_8013253C
  /* 59DAC 1062EC 8018B8AC */  .4byte jtgt_ovl3_8013253C
  /* 59DB0 1062F0 8018B8B0 */  .4byte jtgt_ovl3_8013253C
  /* 59DB4 1062F4 8018B8B4 */  .4byte jtgt_ovl3_8013253C
  /* 59DB8 1062F8 8018B8B8 */  .4byte jtgt_ovl3_8013253C
  /* 59DBC 1062FC 8018B8BC */  .4byte jtgt_ovl3_8013253C
  /* 59DC0 106300 8018B8C0 */  .4byte jtgt_ovl3_80131D44
  /* 59DC4 106304 8018B8C4 */  .4byte jtgt_ovl3_8013253C
  /* 59DC8 106308 8018B8C8 */  .4byte jtgt_ovl3_8013253C
  /* 59DCC 10630C 8018B8CC */  .4byte jtgt_ovl3_8013253C
  /* 59DD0 106310 8018B8D0 */  .4byte jtgt_ovl3_8013253C
  /* 59DD4 106314 8018B8D4 */  .4byte jtgt_ovl3_8013253C
  /* 59DD8 106318 8018B8D8 */  .4byte jtgt_ovl3_8013253C
  /* 59DDC 10631C 8018B8DC */  .4byte jtgt_ovl3_8013253C
  /* 59DE0 106320 8018B8E0 */  .4byte jtgt_ovl3_8013253C
  /* 59DE4 106324 8018B8E4 */  .4byte jtgt_ovl3_8013253C
  /* 59DE8 106328 8018B8E8 */  .4byte jtgt_ovl3_8013253C
  /* 59DEC 10632C 8018B8EC */  .4byte jtgt_ovl3_8013253C
  /* 59DF0 106330 8018B8F0 */  .4byte jtgt_ovl3_8013253C
  /* 59DF4 106334 8018B8F4 */  .4byte jtgt_ovl3_8013253C
  /* 59DF8 106338 8018B8F8 */  .4byte jtgt_ovl3_8013253C
  /* 59DFC 10633C 8018B8FC */  .4byte jtgt_ovl3_8013253C
  /* 59E00 106340 8018B900 */  .4byte jtgt_ovl3_80131D54
  /* 59E04 106344 8018B904 */  .4byte jtgt_ovl3_8013253C
  /* 59E08 106348 8018B908 */  .4byte jtgt_ovl3_8013253C
  /* 59E0C 10634C 8018B90C */  .4byte jtgt_ovl3_8013253C
  /* 59E10 106350 8018B910 */  .4byte jtgt_ovl3_8013253C
  /* 59E14 106354 8018B914 */  .4byte jtgt_ovl3_8013253C
  /* 59E18 106358 8018B918 */  .4byte jtgt_ovl3_8013253C
  /* 59E1C 10635C 8018B91C */  .4byte jtgt_ovl3_8013253C
  /* 59E20 106360 8018B920 */  .4byte jtgt_ovl3_8013253C
  /* 59E24 106364 8018B924 */  .4byte jtgt_ovl3_8013253C
  /* 59E28 106368 8018B928 */  .4byte jtgt_ovl3_8013253C
  /* 59E2C 10636C 8018B92C */  .4byte jtgt_ovl3_8013253C
  /* 59E30 106370 8018B930 */  .4byte jtgt_ovl3_8013253C
  /* 59E34 106374 8018B934 */  .4byte jtgt_ovl3_8013253C
  /* 59E38 106378 8018B938 */  .4byte jtgt_ovl3_8013253C
  /* 59E3C 10637C 8018B93C */  .4byte jtgt_ovl3_8013253C
  /* 59E40 106380 8018B940 */  .4byte jtgt_ovl3_80131D64
  /* 59E44 106384 8018B944 */  .4byte jtgt_ovl3_8013253C
  /* 59E48 106388 8018B948 */  .4byte jtgt_ovl3_8013253C
  /* 59E4C 10638C 8018B94C */  .4byte jtgt_ovl3_8013253C
  /* 59E50 106390 8018B950 */  .4byte jtgt_ovl3_8013253C
  /* 59E54 106394 8018B954 */  .4byte jtgt_ovl3_8013253C
  /* 59E58 106398 8018B958 */  .4byte jtgt_ovl3_8013253C
  /* 59E5C 10639C 8018B95C */  .4byte jtgt_ovl3_8013253C
  /* 59E60 1063A0 8018B960 */  .4byte jtgt_ovl3_8013253C
  /* 59E64 1063A4 8018B964 */  .4byte jtgt_ovl3_8013253C
  /* 59E68 1063A8 8018B968 */  .4byte jtgt_ovl3_8013253C
  /* 59E6C 1063AC 8018B96C */  .4byte jtgt_ovl3_8013253C
  /* 59E70 1063B0 8018B970 */  .4byte jtgt_ovl3_8013253C
  /* 59E74 1063B4 8018B974 */  .4byte jtgt_ovl3_8013253C
  /* 59E78 1063B8 8018B978 */  .4byte jtgt_ovl3_8013253C
  /* 59E7C 1063BC 8018B97C */  .4byte jtgt_ovl3_8013253C
  /* 59E80 1063C0 8018B980 */  .4byte jtgt_ovl3_80131D74
  /* 59E84 1063C4 8018B984 */  .4byte jtgt_ovl3_8013253C
  /* 59E88 1063C8 8018B988 */  .4byte jtgt_ovl3_8013253C
  /* 59E8C 1063CC 8018B98C */  .4byte jtgt_ovl3_8013253C
  /* 59E90 1063D0 8018B990 */  .4byte jtgt_ovl3_8013253C
  /* 59E94 1063D4 8018B994 */  .4byte jtgt_ovl3_8013253C
  /* 59E98 1063D8 8018B998 */  .4byte jtgt_ovl3_8013253C
  /* 59E9C 1063DC 8018B99C */  .4byte jtgt_ovl3_8013253C
  /* 59EA0 1063E0 8018B9A0 */  .4byte jtgt_ovl3_8013253C
  /* 59EA4 1063E4 8018B9A4 */  .4byte jtgt_ovl3_8013253C
  /* 59EA8 1063E8 8018B9A8 */  .4byte jtgt_ovl3_8013253C
  /* 59EAC 1063EC 8018B9AC */  .4byte jtgt_ovl3_8013253C
  /* 59EB0 1063F0 8018B9B0 */  .4byte jtgt_ovl3_8013253C
  /* 59EB4 1063F4 8018B9B4 */  .4byte jtgt_ovl3_8013253C
  /* 59EB8 1063F8 8018B9B8 */  .4byte jtgt_ovl3_8013253C
  /* 59EBC 1063FC 8018B9BC */  .4byte jtgt_ovl3_8013253C
  /* 59EC0 106400 8018B9C0 */  .4byte jtgt_ovl3_80131D84
  /* 59EC4 106404 8018B9C4 */  .4byte jtgt_ovl3_8013253C
  /* 59EC8 106408 8018B9C8 */  .4byte jtgt_ovl3_8013253C
  /* 59ECC 10640C 8018B9CC */  .4byte jtgt_ovl3_8013253C
  /* 59ED0 106410 8018B9D0 */  .4byte jtgt_ovl3_8013253C
  /* 59ED4 106414 8018B9D4 */  .4byte jtgt_ovl3_8013253C
  /* 59ED8 106418 8018B9D8 */  .4byte jtgt_ovl3_8013253C
  /* 59EDC 10641C 8018B9DC */  .4byte jtgt_ovl3_8013253C
  /* 59EE0 106420 8018B9E0 */  .4byte jtgt_ovl3_8013253C
  /* 59EE4 106424 8018B9E4 */  .4byte jtgt_ovl3_8013253C
  /* 59EE8 106428 8018B9E8 */  .4byte jtgt_ovl3_8013253C
  /* 59EEC 10642C 8018B9EC */  .4byte jtgt_ovl3_8013253C
  /* 59EF0 106430 8018B9F0 */  .4byte jtgt_ovl3_8013253C
  /* 59EF4 106434 8018B9F4 */  .4byte jtgt_ovl3_8013253C
  /* 59EF8 106438 8018B9F8 */  .4byte jtgt_ovl3_8013253C
  /* 59EFC 10643C 8018B9FC */  .4byte jtgt_ovl3_8013253C
  /* 59F00 106440 8018BA00 */  .4byte jtgt_ovl3_80131D94
  /* 59F04 106444 8018BA04 */  .4byte jtgt_ovl3_8013253C
  /* 59F08 106448 8018BA08 */  .4byte jtgt_ovl3_8013253C
  /* 59F0C 10644C 8018BA0C */  .4byte jtgt_ovl3_8013253C
  /* 59F10 106450 8018BA10 */  .4byte jtgt_ovl3_8013253C
  /* 59F14 106454 8018BA14 */  .4byte jtgt_ovl3_8013253C
  /* 59F18 106458 8018BA18 */  .4byte jtgt_ovl3_8013253C
  /* 59F1C 10645C 8018BA1C */  .4byte jtgt_ovl3_8013253C
  /* 59F20 106460 8018BA20 */  .4byte jtgt_ovl3_8013253C
  /* 59F24 106464 8018BA24 */  .4byte jtgt_ovl3_8013253C
  /* 59F28 106468 8018BA28 */  .4byte jtgt_ovl3_8013253C
  /* 59F2C 10646C 8018BA2C */  .4byte jtgt_ovl3_8013253C
  /* 59F30 106470 8018BA30 */  .4byte jtgt_ovl3_8013253C
  /* 59F34 106474 8018BA34 */  .4byte jtgt_ovl3_8013253C
  /* 59F38 106478 8018BA38 */  .4byte jtgt_ovl3_8013253C
  /* 59F3C 10647C 8018BA3C */  .4byte jtgt_ovl3_8013253C
  /* 59F40 106480 8018BA40 */  .4byte jtgt_ovl3_80131DA4
  /* 59F44 106484 8018BA44 */  .4byte jtgt_ovl3_8013253C
  /* 59F48 106488 8018BA48 */  .4byte jtgt_ovl3_8013253C
  /* 59F4C 10648C 8018BA4C */  .4byte jtgt_ovl3_8013253C
  /* 59F50 106490 8018BA50 */  .4byte jtgt_ovl3_8013253C
  /* 59F54 106494 8018BA54 */  .4byte jtgt_ovl3_8013253C
  /* 59F58 106498 8018BA58 */  .4byte jtgt_ovl3_8013253C
  /* 59F5C 10649C 8018BA5C */  .4byte jtgt_ovl3_8013253C
  /* 59F60 1064A0 8018BA60 */  .4byte jtgt_ovl3_8013253C
  /* 59F64 1064A4 8018BA64 */  .4byte jtgt_ovl3_8013253C
  /* 59F68 1064A8 8018BA68 */  .4byte jtgt_ovl3_8013253C
  /* 59F6C 1064AC 8018BA6C */  .4byte jtgt_ovl3_8013253C
  /* 59F70 1064B0 8018BA70 */  .4byte jtgt_ovl3_8013253C
  /* 59F74 1064B4 8018BA74 */  .4byte jtgt_ovl3_8013253C
  /* 59F78 1064B8 8018BA78 */  .4byte jtgt_ovl3_8013253C
  /* 59F7C 1064BC 8018BA7C */  .4byte jtgt_ovl3_8013253C
  /* 59F80 1064C0 8018BA80 */  .4byte jtgt_ovl3_80131E30
  /* 59F84 1064C4 8018BA84 */  .4byte jtgt_ovl3_8013253C
  /* 59F88 1064C8 8018BA88 */  .4byte jtgt_ovl3_8013253C
  /* 59F8C 1064CC 8018BA8C */  .4byte jtgt_ovl3_8013253C
  /* 59F90 1064D0 8018BA90 */  .4byte jtgt_ovl3_8013253C
  /* 59F94 1064D4 8018BA94 */  .4byte jtgt_ovl3_8013253C
  /* 59F98 1064D8 8018BA98 */  .4byte jtgt_ovl3_8013253C
  /* 59F9C 1064DC 8018BA9C */  .4byte jtgt_ovl3_8013253C
  /* 59FA0 1064E0 8018BAA0 */  .4byte jtgt_ovl3_8013253C
  /* 59FA4 1064E4 8018BAA4 */  .4byte jtgt_ovl3_8013253C
  /* 59FA8 1064E8 8018BAA8 */  .4byte jtgt_ovl3_8013253C
  /* 59FAC 1064EC 8018BAAC */  .4byte jtgt_ovl3_8013253C
  /* 59FB0 1064F0 8018BAB0 */  .4byte jtgt_ovl3_8013253C
  /* 59FB4 1064F4 8018BAB4 */  .4byte jtgt_ovl3_8013253C
  /* 59FB8 1064F8 8018BAB8 */  .4byte jtgt_ovl3_8013253C
  /* 59FBC 1064FC 8018BABC */  .4byte jtgt_ovl3_8013253C
  /* 59FC0 106500 8018BAC0 */  .4byte jtgt_ovl3_80131EBC
  /* 59FC4 106504 8018BAC4 */  .4byte jtgt_ovl3_8013253C
  /* 59FC8 106508 8018BAC8 */  .4byte jtgt_ovl3_8013253C
  /* 59FCC 10650C 8018BACC */  .4byte jtgt_ovl3_8013253C
  /* 59FD0 106510 8018BAD0 */  .4byte jtgt_ovl3_8013253C
  /* 59FD4 106514 8018BAD4 */  .4byte jtgt_ovl3_8013253C
  /* 59FD8 106518 8018BAD8 */  .4byte jtgt_ovl3_8013253C
  /* 59FDC 10651C 8018BADC */  .4byte jtgt_ovl3_8013253C
  /* 59FE0 106520 8018BAE0 */  .4byte jtgt_ovl3_8013253C
  /* 59FE4 106524 8018BAE4 */  .4byte jtgt_ovl3_8013253C
  /* 59FE8 106528 8018BAE8 */  .4byte jtgt_ovl3_8013253C
  /* 59FEC 10652C 8018BAEC */  .4byte jtgt_ovl3_8013253C
  /* 59FF0 106530 8018BAF0 */  .4byte jtgt_ovl3_8013253C
  /* 59FF4 106534 8018BAF4 */  .4byte jtgt_ovl3_8013253C
  /* 59FF8 106538 8018BAF8 */  .4byte jtgt_ovl3_8013253C
  /* 59FFC 10653C 8018BAFC */  .4byte jtgt_ovl3_8013253C
  /* 5A000 106540 8018BB00 */  .4byte jtgt_ovl3_8013249C
  /* 5A004 106544 8018BB04 */  .4byte jtgt_ovl3_8013253C
  /* 5A008 106548 8018BB08 */  .4byte jtgt_ovl3_8013253C
  /* 5A00C 10654C 8018BB0C */  .4byte jtgt_ovl3_8013253C
  /* 5A010 106550 8018BB10 */  .4byte jtgt_ovl3_8013253C
  /* 5A014 106554 8018BB14 */  .4byte jtgt_ovl3_8013253C
  /* 5A018 106558 8018BB18 */  .4byte jtgt_ovl3_8013253C
  /* 5A01C 10655C 8018BB1C */  .4byte jtgt_ovl3_8013253C
  /* 5A020 106560 8018BB20 */  .4byte jtgt_ovl3_8013253C
  /* 5A024 106564 8018BB24 */  .4byte jtgt_ovl3_8013253C
  /* 5A028 106568 8018BB28 */  .4byte jtgt_ovl3_8013253C
  /* 5A02C 10656C 8018BB2C */  .4byte jtgt_ovl3_8013253C
  /* 5A030 106570 8018BB30 */  .4byte jtgt_ovl3_8013253C
  /* 5A034 106574 8018BB34 */  .4byte jtgt_ovl3_8013253C
  /* 5A038 106578 8018BB38 */  .4byte jtgt_ovl3_8013253C
  /* 5A03C 10657C 8018BB3C */  .4byte jtgt_ovl3_8013253C
  /* 5A040 106580 8018BB40 */  .4byte jtgt_ovl3_801324A4

glabel D_ovl3_8018BB44
  /* 5A044 106584 8018BB44 */  .4byte jtgt_ovl3_801324D0
  /* 5A048 106588 8018BB48 */  .4byte jtgt_ovl3_801324E0
  /* 5A04C 10658C 8018BB4C */  .4byte jtgt_ovl3_801324E8
  /* 5A050 106590 8018BB50 */  .4byte jtgt_ovl3_801324F0
  /* 5A054 106594 8018BB54 */  .4byte jtgt_ovl3_8013253C
  /* 5A058 106598 8018BB58 */  .4byte jtgt_ovl3_8013253C
  /* 5A05C 10659C 8018BB5C */  .4byte jtgt_ovl3_8013253C
  /* 5A060 1065A0 8018BB60 */  .4byte jtgt_ovl3_8013253C
  /* 5A064 1065A4 8018BB64 */  .4byte jtgt_ovl3_8013253C
  /* 5A068 1065A8 8018BB68 */  .4byte jtgt_ovl3_8013253C
  /* 5A06C 1065AC 8018BB6C */  .4byte jtgt_ovl3_8013253C
  /* 5A070 1065B0 8018BB70 */  .4byte jtgt_ovl3_8013253C
  /* 5A074 1065B4 8018BB74 */  .4byte jtgt_ovl3_8013253C
  /* 5A078 1065B8 8018BB78 */  .4byte jtgt_ovl3_8013253C
  /* 5A07C 1065BC 8018BB7C */  .4byte jtgt_ovl3_8013253C
  /* 5A080 1065C0 8018BB80 */  .4byte jtgt_ovl3_80132530

glabel D_ovl3_8018BB84
  /* 5A084 1065C4 8018BB84 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018BB88
  /* 5A088 1065C8 8018BB88 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018BB8C
  /* 5A08C 1065CC 8018BB8C */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018BB90
  /* 5A090 1065D0 8018BB90 */
  .4byte 0x451c4000 # .float 2500.0

glabel D_ovl3_8018BB94
  /* 5A094 1065D4 8018BB94 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BB98
  /* 5A098 1065D8 8018BB98 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018BB9C
  /* 5A09C 1065DC 8018BB9C */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl3_8018BBA0
  /* 5A0A0 1065E0 8018BBA0 */
  .4byte 0x3fa66666 # .float 1.3

glabel jtbl_ovl3_8018BBA4
  /* 5A0A4 1065E4 8018BBA4 */  .4byte jtgt_ovl3_801334EC
  /* 5A0A8 1065E8 8018BBA8 */  .4byte jtgt_ovl3_80133520
  /* 5A0AC 1065EC 8018BBAC */  .4byte jtgt_ovl3_80133520
  /* 5A0B0 1065F0 8018BBB0 */  .4byte jtgt_ovl3_80133520
  /* 5A0B4 1065F4 8018BBB4 */  .4byte jtgt_ovl3_801334EC
  /* 5A0B8 1065F8 8018BBB8 */  .4byte jtgt_ovl3_80133520
  /* 5A0BC 1065FC 8018BBBC */  .4byte jtgt_ovl3_80133510
  /* 5A0C0 106600 8018BBC0 */  .4byte jtgt_ovl3_80133510
  /* 5A0C4 106604 8018BBC4 */  .4byte jtgt_ovl3_80133500
  /* 5A0C8 106608 8018BBC8 */  .4byte jtgt_ovl3_80133520
  /* 5A0CC 10660C 8018BBCC */  .4byte jtgt_ovl3_80133520
  /* 5A0D0 106610 8018BBD0 */  .4byte jtgt_ovl3_80133520
  /* 5A0D4 106614 8018BBD4 */  .4byte jtgt_ovl3_80133520
  /* 5A0D8 106618 8018BBD8 */  .4byte jtgt_ovl3_801334EC
  /* 5A0DC 10661C 8018BBDC */  .4byte jtgt_ovl3_801334EC
  /* 5A0E0 106620 8018BBE0 */  .4byte jtgt_ovl3_80133520
  /* 5A0E4 106624 8018BBE4 */  .4byte jtgt_ovl3_80133520
  /* 5A0E8 106628 8018BBE8 */  .4byte jtgt_ovl3_80133520
  /* 5A0EC 10662C 8018BBEC */  .4byte jtgt_ovl3_801334EC
  /* 5A0F0 106630 8018BBF0 */  .4byte jtgt_ovl3_80133520
  /* 5A0F4 106634 8018BBF4 */  .4byte jtgt_ovl3_80133510
  /* 5A0F8 106638 8018BBF8 */  .4byte jtgt_ovl3_80133510
  /* 5A0FC 10663C 8018BBFC */  .4byte jtgt_ovl3_80133500
  /* 5A100 106640 8018BC00 */  .4byte jtgt_ovl3_80133520
  /* 5A104 106644 8018BC04 */  .4byte jtgt_ovl3_80133520
  /* 5A108 106648 8018BC08 */  .4byte jtgt_ovl3_80133520
  /* 5A10C 10664C 8018BC0C */  .4byte jtgt_ovl3_80133520

glabel D_ovl3_8018BC10
  /* 5A110 106650 8018BC10 */  .4byte jtgt_ovl3_80133830
  /* 5A114 106654 8018BC14 */  .4byte jtgt_ovl3_80133A08
  /* 5A118 106658 8018BC18 */  .4byte jtgt_ovl3_80133A08
  /* 5A11C 10665C 8018BC1C */  .4byte jtgt_ovl3_80133A08
  /* 5A120 106660 8018BC20 */  .4byte jtgt_ovl3_801339C0
  /* 5A124 106664 8018BC24 */  .4byte jtgt_ovl3_80133A08
  /* 5A128 106668 8018BC28 */  .4byte jtgt_ovl3_80133A08
  /* 5A12C 10666C 8018BC2C */  .4byte jtgt_ovl3_80133A08
  /* 5A130 106670 8018BC30 */  .4byte jtgt_ovl3_80133A08
  /* 5A134 106674 8018BC34 */  .4byte jtgt_ovl3_80133A08
  /* 5A138 106678 8018BC38 */  .4byte jtgt_ovl3_80133A08
  /* 5A13C 10667C 8018BC3C */  .4byte jtgt_ovl3_80133A08
  /* 5A140 106680 8018BC40 */  .4byte jtgt_ovl3_801337BC
  /* 5A144 106684 8018BC44 */  .4byte jtgt_ovl3_80133A08
  /* 5A148 106688 8018BC48 */  .4byte jtgt_ovl3_80133A08
  /* 5A14C 10668C 8018BC4C */  .4byte jtgt_ovl3_80133A08
  /* 5A150 106690 8018BC50 */  .4byte jtgt_ovl3_80133A08
  /* 5A154 106694 8018BC54 */  .4byte jtgt_ovl3_80133A08
  /* 5A158 106698 8018BC58 */  .4byte jtgt_ovl3_801339C0
  /* 5A15C 10669C 8018BC5C */  .4byte jtgt_ovl3_801339E4

glabel D_ovl3_8018BC60
  /* 5A160 1066A0 8018BC60 */
  .4byte 0xbf4ccccd # .float -0.8

glabel jtbl_ovl3_8018BC64
  /* 5A164 1066A4 8018BC64 */  .4byte jtgt_ovl3_80133A14
  /* 5A168 1066A8 8018BC68 */  .4byte jtgt_ovl3_80133A14
  /* 5A16C 1066AC 8018BC6C */  .4byte jtgt_ovl3_8013389C
  /* 5A170 1066B0 8018BC70 */  .4byte jtgt_ovl3_80133A14
  /* 5A174 1066B4 8018BC74 */  .4byte jtgt_ovl3_80133A14
  /* 5A178 1066B8 8018BC78 */  .4byte jtgt_ovl3_80133A14
  /* 5A17C 1066BC 8018BC7C */  .4byte jtgt_ovl3_8013389C
  /* 5A180 1066C0 8018BC80 */  .4byte jtgt_ovl3_8013389C
  /* 5A184 1066C4 8018BC84 */  .4byte jtgt_ovl3_8013389C
  /* 5A188 1066C8 8018BC88 */  .4byte jtgt_ovl3_80133A14
  /* 5A18C 1066CC 8018BC8C */  .4byte jtgt_ovl3_8013389C
  /* 5A190 1066D0 8018BC90 */  .4byte jtgt_ovl3_8013389C
  /* 5A194 1066D4 8018BC94 */  .4byte jtgt_ovl3_8013389C
  /* 5A198 1066D8 8018BC98 */  .4byte jtgt_ovl3_80133A14

glabel D_ovl3_8018BC9C
  /* 5A19C 1066DC 8018BC9C */
  .4byte 0x3e4ccccd # .float 0.2

glabel jtbl_ovl3_8018BCA0
  /* 5A1A0 1066E0 8018BCA0 */  .4byte jtgt_ovl3_80133BAC
  /* 5A1A4 1066E4 8018BCA4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1A8 1066E8 8018BCA8 */  .4byte jtgt_ovl3_80133E28
  /* 5A1AC 1066EC 8018BCAC */  .4byte jtgt_ovl3_80133E28
  /* 5A1B0 1066F0 8018BCB0 */  .4byte jtgt_ovl3_80133D2C
  /* 5A1B4 1066F4 8018BCB4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1B8 1066F8 8018BCB8 */  .4byte jtgt_ovl3_80133E28
  /* 5A1BC 1066FC 8018BCBC */  .4byte jtgt_ovl3_80133E28
  /* 5A1C0 106700 8018BCC0 */  .4byte jtgt_ovl3_80133D6C
  /* 5A1C4 106704 8018BCC4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1C8 106708 8018BCC8 */  .4byte jtgt_ovl3_80133E28
  /* 5A1CC 10670C 8018BCCC */  .4byte jtgt_ovl3_80133E28
  /* 5A1D0 106710 8018BCD0 */  .4byte jtgt_ovl3_80133E28
  /* 5A1D4 106714 8018BCD4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1D8 106718 8018BCD8 */  .4byte jtgt_ovl3_80133B6C
  /* 5A1DC 10671C 8018BCDC */  .4byte jtgt_ovl3_80133E28
  /* 5A1E0 106720 8018BCE0 */  .4byte jtgt_ovl3_80133BEC
  /* 5A1E4 106724 8018BCE4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1E8 106728 8018BCE8 */  .4byte jtgt_ovl3_80133C2C
  /* 5A1EC 10672C 8018BCEC */  .4byte jtgt_ovl3_80133E28
  /* 5A1F0 106730 8018BCF0 */  .4byte jtgt_ovl3_80133C6C
  /* 5A1F4 106734 8018BCF4 */  .4byte jtgt_ovl3_80133E28
  /* 5A1F8 106738 8018BCF8 */  .4byte jtgt_ovl3_80133DAC
  /* 5A1FC 10673C 8018BCFC */  .4byte jtgt_ovl3_80133DEC
  /* 5A200 106740 8018BD00 */  .4byte jtgt_ovl3_80133E28
  /* 5A204 106744 8018BD04 */  .4byte jtgt_ovl3_80133E28
  /* 5A208 106748 8018BD08 */  .4byte jtgt_ovl3_80133E28
  /* 5A20C 10674C 8018BD0C */  .4byte jtgt_ovl3_80133CAC
  /* 5A210 106750 8018BD10 */  .4byte jtgt_ovl3_80133E28
  /* 5A214 106754 8018BD14 */  .4byte jtgt_ovl3_80133CEC

glabel D_ovl3_8018BD18
  /* 5A218 106758 8018BD18 */  .4byte jtgt_ovl3_80133F20
  /* 5A21C 10675C 8018BD1C */  .4byte jtgt_ovl3_80133F6C
  /* 5A220 106760 8018BD20 */  .4byte jtgt_ovl3_80133F6C
  /* 5A224 106764 8018BD24 */  .4byte jtgt_ovl3_80133F6C
  /* 5A228 106768 8018BD28 */  .4byte jtgt_ovl3_80133F50
  /* 5A22C 10676C 8018BD2C */  .4byte jtgt_ovl3_80133F6C
  /* 5A230 106770 8018BD30 */  .4byte jtgt_ovl3_80133F6C
  /* 5A234 106774 8018BD34 */  .4byte jtgt_ovl3_80133F6C
  /* 5A238 106778 8018BD38 */  .4byte jtgt_ovl3_80133F58
  /* 5A23C 10677C 8018BD3C */  .4byte jtgt_ovl3_80133F6C
  /* 5A240 106780 8018BD40 */  .4byte jtgt_ovl3_80133F6C
  /* 5A244 106784 8018BD44 */  .4byte jtgt_ovl3_80133F6C
  /* 5A248 106788 8018BD48 */  .4byte jtgt_ovl3_80133F6C
  /* 5A24C 10678C 8018BD4C */  .4byte jtgt_ovl3_80133F6C
  /* 5A250 106790 8018BD50 */  .4byte jtgt_ovl3_80133F18
  /* 5A254 106794 8018BD54 */  .4byte jtgt_ovl3_80133F6C
  /* 5A258 106798 8018BD58 */  .4byte jtgt_ovl3_80133F28
  /* 5A25C 10679C 8018BD5C */  .4byte jtgt_ovl3_80133F6C
  /* 5A260 1067A0 8018BD60 */  .4byte jtgt_ovl3_80133F30
  /* 5A264 1067A4 8018BD64 */  .4byte jtgt_ovl3_80133F6C
  /* 5A268 1067A8 8018BD68 */  .4byte jtgt_ovl3_80133F38
  /* 5A26C 1067AC 8018BD6C */  .4byte jtgt_ovl3_80133F6C
  /* 5A270 1067B0 8018BD70 */  .4byte jtgt_ovl3_80133F60
  /* 5A274 1067B4 8018BD74 */  .4byte jtgt_ovl3_80133F68
  /* 5A278 1067B8 8018BD78 */  .4byte jtgt_ovl3_80133F6C
  /* 5A27C 1067BC 8018BD7C */  .4byte jtgt_ovl3_80133F6C
  /* 5A280 1067C0 8018BD80 */  .4byte jtgt_ovl3_80133F6C
  /* 5A284 1067C4 8018BD84 */  .4byte jtgt_ovl3_80133F40
  /* 5A288 1067C8 8018BD88 */  .4byte jtgt_ovl3_80133F6C
  /* 5A28C 1067CC 8018BD8C */  .4byte jtgt_ovl3_80133F48

glabel D_ovl3_8018BD90
  /* 5A290 1067D0 8018BD90 */
  .4byte 0x3f666666 # .float 0.9

glabel D_ovl3_8018BD94
  /* 5A294 1067D4 8018BD94 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BD98
  /* 5A298 1067D8 8018BD98 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BD9C
  /* 5A29C 1067DC 8018BD9C */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDA0
  /* 5A2A0 1067E0 8018BDA0 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BDA4
  /* 5A2A4 1067E4 8018BDA4 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDA8
  /* 5A2A8 1067E8 8018BDA8 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BDAC
  /* 5A2AC 1067EC 8018BDAC */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BDB0
  /* 5A2B0 1067F0 8018BDB0 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDB4
  /* 5A2B4 1067F4 8018BDB4 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDB8
  /* 5A2B8 1067F8 8018BDB8 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDBC
  /* 5A2BC 1067FC 8018BDBC */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018BDC0
  /* 5A2C0 106800 8018BDC0 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDC4
  /* 5A2C4 106804 8018BDC4 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BDC8
  /* 5A2C8 106808 8018BDC8 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BDCC
  /* 5A2CC 10680C 8018BDCC */
  .4byte 0x44898000 # .float 1100.0
  .incbin "ovl3.raw.bin", 0x5A2D0, 0x4

glabel D_ovl3_8018BDD4
  /* 5A2D4 106814 8018BDD4 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BDD8
  /* 5A2D8 106818 8018BDD8 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018BDDC
  /* 5A2DC 10681C 8018BDDC */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018BDE0
  /* 5A2E0 106820 8018BDE0 */
  .4byte 0x4abebc20 # .float 6250000.0

glabel D_ovl3_8018BDE4
  /* 5A2E4 106824 8018BDE4 */
  .4byte 0x4abebc20 # .float 6250000.0

glabel D_ovl3_8018BDE8
  /* 5A2E8 106828 8018BDE8 */
  .4byte 0x451c4000 # .float 2500.0
  .incbin "ovl3.raw.bin", 0x5A2EC, 0x4

glabel jtbl_ovl3_8018BDF0
  /* 5A2F0 106830 8018BDF0 */  .4byte jtgt_ovl3_80136AE4
  /* 5A2F4 106834 8018BDF4 */  .4byte jtgt_ovl3_80136AE4
  /* 5A2F8 106838 8018BDF8 */  .4byte jtgt_ovl3_80136AE4
  /* 5A2FC 10683C 8018BDFC */  .4byte jtgt_ovl3_80136AE4
  /* 5A300 106840 8018BE00 */  .4byte jtgt_ovl3_80136BF8
  /* 5A304 106844 8018BE04 */  .4byte jtgt_ovl3_80136AE4
  /* 5A308 106848 8018BE08 */  .4byte jtgt_ovl3_80136AE4
  /* 5A30C 10684C 8018BE0C */  .4byte jtgt_ovl3_80136AE4
  /* 5A310 106850 8018BE10 */  .4byte jtgt_ovl3_80136BF8
  /* 5A314 106854 8018BE14 */  .4byte jtgt_ovl3_80136BF8
  /* 5A318 106858 8018BE18 */  .4byte jtgt_ovl3_80136BF8
  /* 5A31C 10685C 8018BE1C */  .4byte jtgt_ovl3_80136BF8
  /* 5A320 106860 8018BE20 */  .4byte jtgt_ovl3_80136BF8
  /* 5A324 106864 8018BE24 */  .4byte jtgt_ovl3_80136BF8
  /* 5A328 106868 8018BE28 */  .4byte jtgt_ovl3_80136BF8
  /* 5A32C 10686C 8018BE2C */  .4byte jtgt_ovl3_80136BF8
  /* 5A330 106870 8018BE30 */  .4byte jtgt_ovl3_80136BF8
  /* 5A334 106874 8018BE34 */  .4byte jtgt_ovl3_80136BF8
  /* 5A338 106878 8018BE38 */  .4byte jtgt_ovl3_80136AE4
  /* 5A33C 10687C 8018BE3C */  .4byte jtgt_ovl3_80136AE4
  /* 5A340 106880 8018BE40 */  .4byte jtgt_ovl3_80136AE4
  /* 5A344 106884 8018BE44 */  .4byte jtgt_ovl3_80136AE4
  /* 5A348 106888 8018BE48 */  .4byte jtgt_ovl3_80136BF8
  /* 5A34C 10688C 8018BE4C */  .4byte jtgt_ovl3_80136BF8
  /* 5A350 106890 8018BE50 */  .4byte jtgt_ovl3_80136BF8
  /* 5A354 106894 8018BE54 */  .4byte jtgt_ovl3_80136AE4
  /* 5A358 106898 8018BE58 */  .4byte jtgt_ovl3_80136AE4

glabel D_ovl3_8018BE5C
  /* 5A35C 10689C 8018BE5C */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018BE60
  /* 5A360 1068A0 8018BE60 */
  .4byte 0x3ecccccd # .float 0.4

glabel D_ovl3_8018BE64
  /* 5A364 1068A4 8018BE64 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl3_8018BE68
  /* 5A368 1068A8 8018BE68 */
  .4byte 0x461c4000 # .float 10000.0

glabel D_ovl3_8018BE6C
  /* 5A36C 1068AC 8018BE6C */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018BE70
  /* 5A370 1068B0 8018BE70 */
  .4byte 0x3cf5c28f # .float 0.03

glabel D_ovl3_8018BE74
  /* 5A374 1068B4 8018BE74 */
  .4byte 0x3d23d70a # .float 0.04

glabel D_ovl3_8018BE78
  /* 5A378 1068B8 8018BE78 */
  .4byte 0x451c4000 # .float 2500.0

glabel jtbl_ovl3_8018BE7C
  /* 5A37C 1068BC 8018BE7C */  .4byte jtgt_ovl3_8013774C
  /* 5A380 1068C0 8018BE80 */  .4byte jtgt_ovl3_8013774C
  /* 5A384 1068C4 8018BE84 */  .4byte jtgt_ovl3_8013774C
  /* 5A388 1068C8 8018BE88 */  .4byte jtgt_ovl3_8013774C
  /* 5A38C 1068CC 8018BE8C */  .4byte jtgt_ovl3_80137764
  /* 5A390 1068D0 8018BE90 */  .4byte jtgt_ovl3_8013774C
  /* 5A394 1068D4 8018BE94 */  .4byte jtgt_ovl3_8013774C
  /* 5A398 1068D8 8018BE98 */  .4byte jtgt_ovl3_8013774C
  /* 5A39C 1068DC 8018BE9C */  .4byte jtgt_ovl3_80137764
  /* 5A3A0 1068E0 8018BEA0 */  .4byte jtgt_ovl3_80137764
  /* 5A3A4 1068E4 8018BEA4 */  .4byte jtgt_ovl3_80137764
  /* 5A3A8 1068E8 8018BEA8 */  .4byte jtgt_ovl3_80137764
  /* 5A3AC 1068EC 8018BEAC */  .4byte jtgt_ovl3_80137764
  /* 5A3B0 1068F0 8018BEB0 */  .4byte jtgt_ovl3_80137764
  /* 5A3B4 1068F4 8018BEB4 */  .4byte jtgt_ovl3_80137764
  /* 5A3B8 1068F8 8018BEB8 */  .4byte jtgt_ovl3_80137764
  /* 5A3BC 1068FC 8018BEBC */  .4byte jtgt_ovl3_80137764
  /* 5A3C0 106900 8018BEC0 */  .4byte jtgt_ovl3_80137764
  /* 5A3C4 106904 8018BEC4 */  .4byte jtgt_ovl3_8013774C
  /* 5A3C8 106908 8018BEC8 */  .4byte jtgt_ovl3_8013774C
  /* 5A3CC 10690C 8018BECC */  .4byte jtgt_ovl3_8013774C
  /* 5A3D0 106910 8018BED0 */  .4byte jtgt_ovl3_8013774C
  /* 5A3D4 106914 8018BED4 */  .4byte jtgt_ovl3_80137764
  /* 5A3D8 106918 8018BED8 */  .4byte jtgt_ovl3_80137764
  /* 5A3DC 10691C 8018BEDC */  .4byte jtgt_ovl3_80137764
  /* 5A3E0 106920 8018BEE0 */  .4byte jtgt_ovl3_8013774C
  /* 5A3E4 106924 8018BEE4 */  .4byte jtgt_ovl3_8013774C

glabel D_ovl3_8018BEE8
  /* 5A3E8 106928 8018BEE8 */
  .8byte 0x40a3880000000000 # .double 2500.0

glabel D_ovl3_8018BEF0
  /* 5A3F0 106930 8018BEF0 */
  .4byte 0x461c4000 # .float 10000.0

glabel D_ovl3_8018BEF4
  /* 5A3F4 106934 8018BEF4 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BEF8
  /* 5A3F8 106938 8018BEF8 */
  .4byte 0x461c4000 # .float 10000.0

glabel D_ovl3_8018BEFC
  /* 5A3FC 10693C 8018BEFC */
  .4byte 0x461c4000 # .float 10000.0

glabel D_ovl3_8018BF00
  /* 5A400 106940 8018BF00 */
  .4byte 0x44898000 # .float 1100.0

glabel D_ovl3_8018BF04
  /* 5A404 106944 8018BF04 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF08
  /* 5A408 106948 8018BF08 */
  .8byte 0x40a3880000000000 # .double 2500.0

glabel D_ovl3_8018BF10
  /* 5A410 106950 8018BF10 */
  .4byte 0x44bb8000 # .float 1500.0

glabel jtbl_ovl3_8018BF14
  /* 5A414 106954 8018BF14 */  .4byte jtgt_ovl3_80138D24
  /* 5A418 106958 8018BF18 */  .4byte jtgt_ovl3_80138D24
  /* 5A41C 10695C 8018BF1C */  .4byte jtgt_ovl3_80138ECC
  /* 5A420 106960 8018BF20 */  .4byte jtgt_ovl3_80138D24
  /* 5A424 106964 8018BF24 */  .4byte jtgt_ovl3_80138D24
  /* 5A428 106968 8018BF28 */  .4byte jtgt_ovl3_80138CD4
  /* 5A42C 10696C 8018BF2C */  .4byte jtgt_ovl3_80138ECC
  /* 5A430 106970 8018BF30 */  .4byte jtgt_ovl3_80138ECC
  /* 5A434 106974 8018BF34 */  .4byte jtgt_ovl3_80138ECC
  /* 5A438 106978 8018BF38 */  .4byte jtgt_ovl3_80138D24
  /* 5A43C 10697C 8018BF3C */  .4byte jtgt_ovl3_80138ECC
  /* 5A440 106980 8018BF40 */  .4byte jtgt_ovl3_80138ECC
  /* 5A444 106984 8018BF44 */  .4byte jtgt_ovl3_80138ECC
  /* 5A448 106988 8018BF48 */  .4byte jtgt_ovl3_80138D24

glabel D_ovl3_8018BF4C
  /* 5A44C 10698C 8018BF4C */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF50
  /* 5A450 106990 8018BF50 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl3_8018BF54
  /* 5A454 106994 8018BF54 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF58
  /* 5A458 106998 8018BF58 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl3_8018BF5C
  /* 5A45C 10699C 8018BF5C */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF60
  /* 5A460 1069A0 8018BF60 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl3_8018BF64
  /* 5A464 1069A4 8018BF64 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF68
  /* 5A468 1069A8 8018BF68 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018BF6C
  /* 5A46C 1069AC 8018BF6C */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF70
  /* 5A470 1069B0 8018BF70 */
  .4byte 0x3d4ccccd # .float 0.05

glabel D_ovl3_8018BF74
  /* 5A474 1069B4 8018BF74 */
  .4byte 0x44bb8000 # .float 1500.0

glabel D_ovl3_8018BF78
  /* 5A478 1069B8 8018BF78 */
  .4byte 0x3d4ccccd # .float 0.05

glabel jtbl_ovl3_8018BF7C
  /* 5A47C 1069BC 8018BF7C */  .4byte jtgt_ovl3_8013A3DC
  /* 5A480 1069C0 8018BF80 */  .4byte jtgt_ovl3_8013A3F4
  /* 5A484 1069C4 8018BF84 */  .4byte jtgt_ovl3_8013A404
  /* 5A488 1069C8 8018BF88 */  .4byte jtgt_ovl3_8013A414
  /* 5A48C 1069CC 8018BF8C */  .4byte jtgt_ovl3_8013A424
  /* 5A490 1069D0 8018BF90 */  .4byte jtgt_ovl3_8013A434
  /* 5A494 1069D4 8018BF94 */  .4byte jtgt_ovl3_8013A444
  /* 5A498 1069D8 8018BF98 */  .4byte jtgt_ovl3_8013A454
  /* 5A49C 1069DC 8018BF9C */  .4byte jtgt_ovl3_8013A464
  /* 5A4A0 1069E0 8018BFA0 */  .4byte jtgt_ovl3_8013A474
  /* 5A4A4 1069E4 8018BFA4 */  .4byte jtgt_ovl3_8013A484
  /* 5A4A8 1069E8 8018BFA8 */  .4byte jtgt_ovl3_8013A494

glabel D_ovl3_8018BFAC
  /* 5A4AC 1069EC 8018BFAC */  .4byte jtgt_ovl3_8013A4D0
  /* 5A4B0 1069F0 8018BFB0 */  .4byte jtgt_ovl3_8013A4EC
  /* 5A4B4 1069F4 8018BFB4 */  .4byte jtgt_ovl3_8013A508
  /* 5A4B8 1069F8 8018BFB8 */  .4byte jtgt_ovl3_8013A524
  /* 5A4BC 1069FC 8018BFBC */  .4byte jtgt_ovl3_8013A540
  /* 5A4C0 106A00 8018BFC0 */  .4byte jtgt_ovl3_8013A55C
  /* 5A4C4 106A04 8018BFC4 */  .4byte jtgt_ovl3_8013A634
  /* 5A4C8 106A08 8018BFC8 */  .4byte jtgt_ovl3_8013A578
  /* 5A4CC 106A0C 8018BFCC */  .4byte jtgt_ovl3_8013A594
  /* 5A4D0 106A10 8018BFD0 */  .4byte jtgt_ovl3_8013A5B0
  /* 5A4D4 106A14 8018BFD4 */  .4byte jtgt_ovl3_8013A634
  /* 5A4D8 106A18 8018BFD8 */  .4byte jtgt_ovl3_8013A634
  /* 5A4DC 106A1C 8018BFDC */  .4byte jtgt_ovl3_8013A634
  /* 5A4E0 106A20 8018BFE0 */  .4byte jtgt_ovl3_8013A5CC
  /* 5A4E4 106A24 8018BFE4 */  .4byte jtgt_ovl3_8013A634
  /* 5A4E8 106A28 8018BFE8 */  .4byte jtgt_ovl3_8013A5E8
  /* 5A4EC 106A2C 8018BFEC */  .4byte jtgt_ovl3_8013A5F8
  /* 5A4F0 106A30 8018BFF0 */  .4byte jtgt_ovl3_8013A608
  /* 5A4F4 106A34 8018BFF4 */  .4byte jtgt_ovl3_8013A618
  /* 5A4F8 106A38 8018BFF8 */  .4byte jtgt_ovl3_8013A628

glabel D_ovl3_8018BFFC
  /* 5A4FC 106A3C 8018BFFC */  .4byte jtgt_ovl3_8013A668
  /* 5A500 106A40 8018C000 */  .4byte jtgt_ovl3_8013A784
  /* 5A504 106A44 8018C004 */  .4byte jtgt_ovl3_8013A7B8
  /* 5A508 106A48 8018C008 */  .4byte jtgt_ovl3_8013A7C4
  /* 5A50C 106A4C 8018C00C */  .4byte jtgt_ovl3_8013A7D0
  /* 5A510 106A50 8018C010 */  .4byte jtgt_ovl3_8013A7DC
  /* 5A514 106A54 8018C014 */  .4byte jtgt_ovl3_8013A7FC
  /* 5A518 106A58 8018C018 */  .4byte jtgt_ovl3_8013A804
  /* 5A51C 106A5C 8018C01C */  .4byte jtgt_ovl3_8013A810
  /* 5A520 106A60 8018C020 */  .4byte jtgt_ovl3_8013A81C
  /* 5A524 106A64 8018C024 */  .4byte jtgt_ovl3_8013A824

glabel D_ovl3_8018C028
  /* 5A528 106A68 8018C028 */
  .4byte 0x461c3f9a # .float 9999.9

glabel D_ovl3_8018C02C
  /* 5A52C 106A6C 8018C02C */
  .4byte 0x3f0ccccd # .float 0.55

glabel D_ovl3_8018C030
  /* 5A530 106A70 8018C030 */
  .4byte 0x3f19999a # .float 0.6

glabel D_ovl3_8018C034
  /* 5A534 106A74 8018C034 */
  .4byte 0xc2a6aaab # .float -83.333336

glabel D_ovl3_8018C038
  /* 5A538 106A78 8018C038 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl3_8018C03C
  /* 5A53C 106A7C 8018C03C */
  .4byte 0x3e2aaaab # .float 0.16666667

glabel D_ovl3_8018C040
  /* 5A540 106A80 8018C040 */
  .4byte 0x3e2aaaab # .float 0.16666667
  .incbin "ovl3.raw.bin", 0x5A544, 0xC

glabel D_ovl3_8018C050
  /* 5A550 106A90 8018C050 */
  .4byte 0x3f19999a # .float 0.6

glabel D_ovl3_8018C054
  /* 5A554 106A94 8018C054 */
  .4byte 0x45fd2000 # .float 8100.0

glabel D_ovl3_8018C058
  /* 5A558 106A98 8018C058 */
  .4byte 0x3f19999a # .float 0.6

glabel D_ovl3_8018C05C
  /* 5A55C 106A9C 8018C05C */
  .4byte 0x3f19999a # .float 0.6

glabel D_ovl3_8018C060
  /* 5A560 106AA0 8018C060 */
  .4byte 0x40490fdb # .float 3.1415927

glabel jtbl_ovl3_8018C064
  /* 5A564 106AA4 8018C064 */  .4byte jtgt_ovl3_8013DC8C
  /* 5A568 106AA8 8018C068 */  .4byte jtgt_ovl3_8013DC9C
  /* 5A56C 106AAC 8018C06C */  .4byte jtgt_ovl3_8013DCAC
  /* 5A570 106AB0 8018C070 */  .4byte jtgt_ovl3_8013DCBC
  /* 5A574 106AB4 8018C074 */  .4byte jtgt_ovl3_8013DC8C
  /* 5A578 106AB8 8018C078 */  .4byte jtgt_ovl3_8013DCCC
  /* 5A57C 106ABC 8018C07C */  .4byte jtgt_ovl3_8013DCE4
  /* 5A580 106AC0 8018C080 */  .4byte jtgt_ovl3_8013DD14
  /* 5A584 106AC4 8018C084 */  .4byte jtgt_ovl3_8013DCF4
  /* 5A588 106AC8 8018C088 */  .4byte jtgt_ovl3_8013DD04
  /* 5A58C 106ACC 8018C08C */  .4byte jtgt_ovl3_8013DD04
  /* 5A590 106AD0 8018C090 */  .4byte jtgt_ovl3_8013DD68
  /* 5A594 106AD4 8018C094 */  .4byte jtgt_ovl3_8013DD3C
  /* 5A598 106AD8 8018C098 */  .4byte jtgt_ovl3_8013DC8C
  /* 5A59C 106ADC 8018C09C */  .4byte jtgt_ovl3_8013DD68
  /* 5A5A0 106AE0 8018C0A0 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5A4 106AE4 8018C0A4 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5A8 106AE8 8018C0A8 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5AC 106AEC 8018C0AC */  .4byte jtgt_ovl3_8013DD68
  /* 5A5B0 106AF0 8018C0B0 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5B4 106AF4 8018C0B4 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5B8 106AF8 8018C0B8 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5BC 106AFC 8018C0BC */  .4byte jtgt_ovl3_8013DD68
  /* 5A5C0 106B00 8018C0C0 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5C4 106B04 8018C0C4 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5C8 106B08 8018C0C8 */  .4byte jtgt_ovl3_8013DD68
  /* 5A5CC 106B0C 8018C0CC */  .4byte jtgt_ovl3_8013DCAC

glabel D_ovl3_8018C0D0
  /* 5A5D0 106B10 8018C0D0 */
  .4byte 0xbe860a92 # .float -0.2617994

glabel D_ovl3_8018C0D4
  /* 5A5D4 106B14 8018C0D4 */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018C0D8
  /* 5A5D8 106B18 8018C0D8 */
  .4byte 0x3f4ccccd # .float 0.8
  .incbin "ovl3.raw.bin", 0x5A5DC, 0x4

glabel D_ovl3_8018C0E0
  /* 5A5E0 106B20 8018C0E0 */
  .4byte 0x40066666 # .float 2.1

glabel D_ovl3_8018C0E4
  /* 5A5E4 106B24 8018C0E4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C0E8
  /* 5A5E8 106B28 8018C0E8 */
  .4byte 0x3f402037 # .float 0.75049156
  .incbin "ovl3.raw.bin", 0x5A5EC, 0x4

glabel D_ovl3_8018C0F0
  /* 5A5F0 106B30 8018C0F0 */
  .4byte 0x3dcccc00 # .float 0.099998474

glabel D_ovl3_8018C0F4
  /* 5A5F4 106B34 8018C0F4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C0F8
  /* 5A5F8 106B38 8018C0F8 */
  .4byte 0x3fa78d37 # .float 1.308997

glabel D_ovl3_8018C0FC
  /* 5A5FC 106B3C 8018C0FC */
  .4byte 0x400074cc # .float 2.0071287

glabel D_ovl3_8018C100
  /* 5A600 106B40 8018C100 */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018C104
  /* 5A604 106B44 8018C104 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C108
  /* 5A608 106B48 8018C108 */
  .4byte 0x3fdf66f3 # .float 1.7453293

glabel D_ovl3_8018C10C
  /* 5A60C 106B4C 8018C10C */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018C110
  /* 5A610 106B50 8018C110 */
  .4byte 0x3f9c61ab # .float 1.2217306

glabel D_ovl3_8018C114
  /* 5A614 106B54 8018C114 */
  .4byte 0x3ff5be0b # .float 1.9198622

glabel D_ovl3_8018C118
  /* 5A618 106B58 8018C118 */
  .4byte 0x477de800 # .float 65000.0
  .incbin "ovl3.raw.bin", 0x5A61C, 0x4

glabel D_ovl3_8018C120
  /* 5A620 106B60 8018C120 */
  .4byte 0xbe490fdb # .float -0.19634955

glabel D_ovl3_8018C124
  /* 5A624 106B64 8018C124 */
  .4byte 0x3d088889 # .float 0.033333335

glabel D_ovl3_8018C128
  /* 5A628 106B68 8018C128 */
  .4byte 0x3d088889 # .float 0.033333335

glabel D_ovl3_8018C12C
  /* 5A62C 106B6C 8018C12C */
  .4byte 0x3e490fdb # .float 0.19634955

glabel D_ovl3_8018C130
  /* 5A630 106B70 8018C130 */
  .4byte 0x3c888889 # .float 0.016666668

glabel D_ovl3_8018C134
  /* 5A634 106B74 8018C134 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C138
  /* 5A638 106B78 8018C138 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5A63C, 0x4

glabel D_ovl3_8018C140
  /* 5A640 106B80 8018C140 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5A644, 0xC

glabel D_ovl3_8018C150
  /* 5A650 106B90 8018C150 */
  .4byte 0x40c90fdb # .float 6.2831855
  .incbin "ovl3.raw.bin", 0x5A654, 0xC

glabel D_ovl3_8018C160
  /* 5A660 106BA0 8018C160 */
  .4byte 0x3f5f66f3 # .float 0.87266463
  .incbin "ovl3.raw.bin", 0x5A664, 0xC

glabel D_ovl3_8018C170
  /* 5A670 106BB0 8018C170 */
  .4byte 0x3f5f66f3 # .float 0.87266463
  .incbin "ovl3.raw.bin", 0x5A674, 0xC

glabel D_ovl3_8018C180
  /* 5A680 106BC0 8018C180 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C184
  /* 5A684 106BC4 8018C184 */
  .4byte 0xbf5f66f3 # .float -0.87266463
  .incbin "ovl3.raw.bin", 0x5A688, 0x8

glabel D_ovl3_8018C190
  /* 5A690 106BD0 8018C190 */
  .4byte 0x7f7fffff # .float 3.4028235e38

glabel D_ovl3_8018C194
  /* 5A694 106BD4 8018C194 */
  .4byte 0xbec90fdb # .float -0.3926991
  .incbin "ovl3.raw.bin", 0x5A698, 0x8

glabel D_ovl3_8018C1A0
  /* 5A6A0 106BE0 8018C1A0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C1A4
  /* 5A6A4 106BE4 8018C1A4 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018C1A8
  /* 5A6A8 106BE8 8018C1A8 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018C1AC
  /* 5A6AC 106BEC 8018C1AC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C1B0
  /* 5A6B0 106BF0 8018C1B0 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C1B4
  /* 5A6B4 106BF4 8018C1B4 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C1B8
  /* 5A6B8 106BF8 8018C1B8 */
  .4byte 0xbf5f66f3 # .float -0.87266463

glabel D_ovl3_8018C1BC
  /* 5A6BC 106BFC 8018C1BC */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C1C0
  /* 5A6C0 106C00 8018C1C0 */
  .4byte 0x3c23d70a # .float 0.01
  .incbin "ovl3.raw.bin", 0x5A6C4, 0xC

glabel D_ovl3_8018C1D0
  /* 5A6D0 106C10 8018C1D0 */
  .4byte 0xbe860a92 # .float -0.2617994
  .incbin "ovl3.raw.bin", 0x5A6D4, 0xC

glabel D_ovl3_8018C1E0
  /* 5A6E0 106C20 8018C1E0 */
  .4byte 0x3f266666 # .float 0.65

glabel D_ovl3_8018C1E4
  /* 5A6E4 106C24 8018C1E4 */
  .4byte 0x3eb33333 # .float 0.35

glabel D_ovl3_8018C1E8
  /* 5A6E8 106C28 8018C1E8 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018C1EC
  /* 5A6EC 106C2C 8018C1EC */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C1F0
  /* 5A6F0 106C30 8018C1F0 */
  .4byte 0x43b38000 # .float 359.0

glabel D_ovl3_8018C1F4
  /* 5A6F4 106C34 8018C1F4 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018C1F8
  /* 5A6F8 106C38 8018C1F8 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5A6FC, 0x4

glabel D_ovl3_8018C200
  /* 5A700 106C40 8018C200 */
  .4byte 0x3fcf5c29 # .float 1.62
  .incbin "ovl3.raw.bin", 0x5A704, 0xC

glabel D_ovl3_8018C210
  /* 5A710 106C50 8018C210 */
  .4byte 0x3f7fbe77 # .float 0.999

glabel D_ovl3_8018C214
  /* 5A714 106C54 8018C214 */
  .4byte 0x3f7fbe77 # .float 0.999
  .incbin "ovl3.raw.bin", 0x5A718, 0x8

glabel D_ovl3_8018C220
  /* 5A720 106C60 8018C220 */
  .4byte 0x3ee66666 # .float 0.45

glabel D_ovl3_8018C224
  /* 5A724 106C64 8018C224 */
  .4byte 0x3f0ccccd # .float 0.55

glabel D_ovl3_8018C228
  /* 5A728 106C68 8018C228 */
  .4byte 0x3ee66666 # .float 0.45

glabel D_ovl3_8018C22C
  /* 5A72C 106C6C 8018C22C */
  .4byte 0x3f0ccccd # .float 0.55

glabel D_ovl3_8018C230
  /* 5A730 106C70 8018C230 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C234
  /* 5A734 106C74 8018C234 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C238
  /* 5A738 106C78 8018C238 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C23C
  /* 5A73C 106C7C 8018C23C */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018C240
  /* 5A740 106C80 8018C240 */
  .4byte 0x3da3d70a # .float 0.08
  .incbin "ovl3.raw.bin", 0x5A744, 0xC

glabel jtbl_ovl3_8018C250
  /* 5A750 106C90 8018C250 */  .4byte jtgt_ovl3_8014EB54
  /* 5A754 106C94 8018C254 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A758 106C98 8018C258 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A75C 106C9C 8018C25C */  .4byte jtgt_ovl3_8014EBA4
  /* 5A760 106CA0 8018C260 */  .4byte jtgt_ovl3_8014EB64
  /* 5A764 106CA4 8018C264 */  .4byte jtgt_ovl3_8014EB84
  /* 5A768 106CA8 8018C268 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A76C 106CAC 8018C26C */  .4byte jtgt_ovl3_8014EB74
  /* 5A770 106CB0 8018C270 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A774 106CB4 8018C274 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A778 106CB8 8018C278 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A77C 106CBC 8018C27C */  .4byte jtgt_ovl3_8014EB94
  /* 5A780 106CC0 8018C280 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A784 106CC4 8018C284 */  .4byte jtgt_ovl3_8014EB54
  /* 5A788 106CC8 8018C288 */  .4byte jtgt_ovl3_8014EB54
  /* 5A78C 106CCC 8018C28C */  .4byte jtgt_ovl3_8014EBA4
  /* 5A790 106CD0 8018C290 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A794 106CD4 8018C294 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A798 106CD8 8018C298 */  .4byte jtgt_ovl3_8014EB64
  /* 5A79C 106CDC 8018C29C */  .4byte jtgt_ovl3_8014EB84
  /* 5A7A0 106CE0 8018C2A0 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A7A4 106CE4 8018C2A4 */  .4byte jtgt_ovl3_8014EB74
  /* 5A7A8 106CE8 8018C2A8 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A7AC 106CEC 8018C2AC */  .4byte jtgt_ovl3_8014EBA4
  /* 5A7B0 106CF0 8018C2B0 */  .4byte jtgt_ovl3_8014EBA4
  /* 5A7B4 106CF4 8018C2B4 */  .4byte jtgt_ovl3_8014EB94

glabel D_ovl3_8018C2B8
  /* 5A7B8 106CF8 8018C2B8 */  .4byte jtgt_ovl3_8014EBF8
  /* 5A7BC 106CFC 8018C2BC */  .4byte jtgt_ovl3_8014EC30
  /* 5A7C0 106D00 8018C2C0 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7C4 106D04 8018C2C4 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7C8 106D08 8018C2C8 */  .4byte jtgt_ovl3_8014EC04
  /* 5A7CC 106D0C 8018C2CC */  .4byte jtgt_ovl3_8014EC1C
  /* 5A7D0 106D10 8018C2D0 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7D4 106D14 8018C2D4 */  .4byte jtgt_ovl3_8014EC10
  /* 5A7D8 106D18 8018C2D8 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7DC 106D1C 8018C2DC */  .4byte jtgt_ovl3_8014EC30
  /* 5A7E0 106D20 8018C2E0 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7E4 106D24 8018C2E4 */  .4byte jtgt_ovl3_8014EC28
  /* 5A7E8 106D28 8018C2E8 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7EC 106D2C 8018C2EC */  .4byte jtgt_ovl3_8014EBF8
  /* 5A7F0 106D30 8018C2F0 */  .4byte jtgt_ovl3_8014EBF8
  /* 5A7F4 106D34 8018C2F4 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7F8 106D38 8018C2F8 */  .4byte jtgt_ovl3_8014EC30
  /* 5A7FC 106D3C 8018C2FC */  .4byte jtgt_ovl3_8014EC30
  /* 5A800 106D40 8018C300 */  .4byte jtgt_ovl3_8014EC04
  /* 5A804 106D44 8018C304 */  .4byte jtgt_ovl3_8014EC1C
  /* 5A808 106D48 8018C308 */  .4byte jtgt_ovl3_8014EC30
  /* 5A80C 106D4C 8018C30C */  .4byte jtgt_ovl3_8014EC10
  /* 5A810 106D50 8018C310 */  .4byte jtgt_ovl3_8014EC30
  /* 5A814 106D54 8018C314 */  .4byte jtgt_ovl3_8014EC30
  /* 5A818 106D58 8018C318 */  .4byte jtgt_ovl3_8014EC30
  /* 5A81C 106D5C 8018C31C */  .4byte jtgt_ovl3_8014EC28

glabel D_ovl3_8018C320
  /* 5A820 106D60 8018C320 */  .4byte jtgt_ovl3_8014F13C
  /* 5A824 106D64 8018C324 */  .4byte jtgt_ovl3_8014F174
  /* 5A828 106D68 8018C328 */  .4byte jtgt_ovl3_8014F174
  /* 5A82C 106D6C 8018C32C */  .4byte jtgt_ovl3_8014F174
  /* 5A830 106D70 8018C330 */  .4byte jtgt_ovl3_8014F148
  /* 5A834 106D74 8018C334 */  .4byte jtgt_ovl3_8014F174
  /* 5A838 106D78 8018C338 */  .4byte jtgt_ovl3_8014F16C
  /* 5A83C 106D7C 8018C33C */  .4byte jtgt_ovl3_8014F154
  /* 5A840 106D80 8018C340 */  .4byte jtgt_ovl3_8014F174
  /* 5A844 106D84 8018C344 */  .4byte jtgt_ovl3_8014F160
  /* 5A848 106D88 8018C348 */  .4byte jtgt_ovl3_8014F174
  /* 5A84C 106D8C 8018C34C */  .4byte jtgt_ovl3_8014F174
  /* 5A850 106D90 8018C350 */  .4byte jtgt_ovl3_8014F174
  /* 5A854 106D94 8018C354 */  .4byte jtgt_ovl3_8014F174
  /* 5A858 106D98 8018C358 */  .4byte jtgt_ovl3_8014F13C
  /* 5A85C 106D9C 8018C35C */  .4byte jtgt_ovl3_8014F174
  /* 5A860 106DA0 8018C360 */  .4byte jtgt_ovl3_8014F174
  /* 5A864 106DA4 8018C364 */  .4byte jtgt_ovl3_8014F174
  /* 5A868 106DA8 8018C368 */  .4byte jtgt_ovl3_8014F148
  /* 5A86C 106DAC 8018C36C */  .4byte jtgt_ovl3_8014F174
  /* 5A870 106DB0 8018C370 */  .4byte jtgt_ovl3_8014F16C
  /* 5A874 106DB4 8018C374 */  .4byte jtgt_ovl3_8014F154
  /* 5A878 106DB8 8018C378 */  .4byte jtgt_ovl3_8014F174
  /* 5A87C 106DBC 8018C37C */  .4byte jtgt_ovl3_8014F160

glabel D_ovl3_8018C380
  /* 5A880 106DC0 8018C380 */  .4byte jtgt_ovl3_8014F3F4
  /* 5A884 106DC4 8018C384 */  .4byte jtgt_ovl3_8014F42C
  /* 5A888 106DC8 8018C388 */  .4byte jtgt_ovl3_8014F42C
  /* 5A88C 106DCC 8018C38C */  .4byte jtgt_ovl3_8014F42C
  /* 5A890 106DD0 8018C390 */  .4byte jtgt_ovl3_8014F400
  /* 5A894 106DD4 8018C394 */  .4byte jtgt_ovl3_8014F42C
  /* 5A898 106DD8 8018C398 */  .4byte jtgt_ovl3_8014F424
  /* 5A89C 106DDC 8018C39C */  .4byte jtgt_ovl3_8014F40C
  /* 5A8A0 106DE0 8018C3A0 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8A4 106DE4 8018C3A4 */  .4byte jtgt_ovl3_8014F418
  /* 5A8A8 106DE8 8018C3A8 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8AC 106DEC 8018C3AC */  .4byte jtgt_ovl3_8014F42C
  /* 5A8B0 106DF0 8018C3B0 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8B4 106DF4 8018C3B4 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8B8 106DF8 8018C3B8 */  .4byte jtgt_ovl3_8014F3F4
  /* 5A8BC 106DFC 8018C3BC */  .4byte jtgt_ovl3_8014F42C
  /* 5A8C0 106E00 8018C3C0 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8C4 106E04 8018C3C4 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8C8 106E08 8018C3C8 */  .4byte jtgt_ovl3_8014F400
  /* 5A8CC 106E0C 8018C3CC */  .4byte jtgt_ovl3_8014F42C
  /* 5A8D0 106E10 8018C3D0 */  .4byte jtgt_ovl3_8014F424
  /* 5A8D4 106E14 8018C3D4 */  .4byte jtgt_ovl3_8014F40C
  /* 5A8D8 106E18 8018C3D8 */  .4byte jtgt_ovl3_8014F42C
  /* 5A8DC 106E1C 8018C3DC */  .4byte jtgt_ovl3_8014F418

glabel D_ovl3_8018C3E0
  /* 5A8E0 106E20 8018C3E0 */  .4byte jtgt_ovl3_8014F490
  /* 5A8E4 106E24 8018C3E4 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A8E8 106E28 8018C3E8 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A8EC 106E2C 8018C3EC */  .4byte jtgt_ovl3_8014F4C8
  /* 5A8F0 106E30 8018C3F0 */  .4byte jtgt_ovl3_8014F49C
  /* 5A8F4 106E34 8018C3F4 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A8F8 106E38 8018C3F8 */  .4byte jtgt_ovl3_8014F4C0
  /* 5A8FC 106E3C 8018C3FC */  .4byte jtgt_ovl3_8014F4A8
  /* 5A900 106E40 8018C400 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A904 106E44 8018C404 */  .4byte jtgt_ovl3_8014F4B4
  /* 5A908 106E48 8018C408 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A90C 106E4C 8018C40C */  .4byte jtgt_ovl3_8014F4C8
  /* 5A910 106E50 8018C410 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A914 106E54 8018C414 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A918 106E58 8018C418 */  .4byte jtgt_ovl3_8014F490
  /* 5A91C 106E5C 8018C41C */  .4byte jtgt_ovl3_8014F4C8
  /* 5A920 106E60 8018C420 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A924 106E64 8018C424 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A928 106E68 8018C428 */  .4byte jtgt_ovl3_8014F49C
  /* 5A92C 106E6C 8018C42C */  .4byte jtgt_ovl3_8014F4C8
  /* 5A930 106E70 8018C430 */  .4byte jtgt_ovl3_8014F4C0
  /* 5A934 106E74 8018C434 */  .4byte jtgt_ovl3_8014F4A8
  /* 5A938 106E78 8018C438 */  .4byte jtgt_ovl3_8014F4C8
  /* 5A93C 106E7C 8018C43C */  .4byte jtgt_ovl3_8014F4B4

glabel D_ovl3_8018C440
  /* 5A940 106E80 8018C440 */  .4byte jtgt_ovl3_8014F5B0
  /* 5A944 106E84 8018C444 */  .4byte jtgt_ovl3_8014F610
  /* 5A948 106E88 8018C448 */  .4byte jtgt_ovl3_8014F610
  /* 5A94C 106E8C 8018C44C */  .4byte jtgt_ovl3_8014F610
  /* 5A950 106E90 8018C450 */  .4byte jtgt_ovl3_8014F5C4
  /* 5A954 106E94 8018C454 */  .4byte jtgt_ovl3_8014F610
  /* 5A958 106E98 8018C458 */  .4byte jtgt_ovl3_8014F600
  /* 5A95C 106E9C 8018C45C */  .4byte jtgt_ovl3_8014F5D8
  /* 5A960 106EA0 8018C460 */  .4byte jtgt_ovl3_8014F610
  /* 5A964 106EA4 8018C464 */  .4byte jtgt_ovl3_8014F5EC
  /* 5A968 106EA8 8018C468 */  .4byte jtgt_ovl3_8014F610
  /* 5A96C 106EAC 8018C46C */  .4byte jtgt_ovl3_8014F610
  /* 5A970 106EB0 8018C470 */  .4byte jtgt_ovl3_8014F610
  /* 5A974 106EB4 8018C474 */  .4byte jtgt_ovl3_8014F610
  /* 5A978 106EB8 8018C478 */  .4byte jtgt_ovl3_8014F5B0
  /* 5A97C 106EBC 8018C47C */  .4byte jtgt_ovl3_8014F610
  /* 5A980 106EC0 8018C480 */  .4byte jtgt_ovl3_8014F610
  /* 5A984 106EC4 8018C484 */  .4byte jtgt_ovl3_8014F610
  /* 5A988 106EC8 8018C488 */  .4byte jtgt_ovl3_8014F5C4
  /* 5A98C 106ECC 8018C48C */  .4byte jtgt_ovl3_8014F610
  /* 5A990 106ED0 8018C490 */  .4byte jtgt_ovl3_8014F600
  /* 5A994 106ED4 8018C494 */  .4byte jtgt_ovl3_8014F5D8
  /* 5A998 106ED8 8018C498 */  .4byte jtgt_ovl3_8014F610
  /* 5A99C 106EDC 8018C49C */  .4byte jtgt_ovl3_8014F5EC

glabel D_ovl3_8018C4A0
  /* 5A9A0 106EE0 8018C4A0 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl3_8018C4A4
  /* 5A9A4 106EE4 8018C4A4 */
  .4byte 0x3e32b8c3 # .float 0.17453294

glabel D_ovl3_8018C4A8
  /* 5A9A8 106EE8 8018C4A8 */
  .4byte 0xbf060a92 # .float -0.5235988

glabel D_ovl3_8018C4AC
  /* 5A9AC 106EEC 8018C4AC */
  .4byte 0xbe32b8c3 # .float -0.17453294

glabel D_ovl3_8018C4B0
  /* 5A9B0 106EF0 8018C4B0 */
  .4byte 0x3e97e9d9 # .float 0.296706

glabel D_ovl3_8018C4B4
  /* 5A9B4 106EF4 8018C4B4 */
  .4byte 0xbe97e9d9 # .float -0.296706

glabel D_ovl3_8018C4B8
  /* 5A9B8 106EF8 8018C4B8 */
  .4byte 0x3f5f66f3 # .float 0.87266463
  .incbin "ovl3.raw.bin", 0x5A9BC, 0x4

glabel D_ovl3_8018C4C0
  /* 5A9C0 106F00 8018C4C0 */
  .4byte 0x3fac0508 # .float 1.3439035

glabel D_ovl3_8018C4C4
  /* 5A9C4 106F04 8018C4C4 */
  .4byte 0x3fe61aae # .float 1.7976892

glabel D_ovl3_8018C4C8
  /* 5A9C8 106F08 8018C4C8 */
  .4byte 0x3f5f66f3 # .float 0.87266463
  .incbin "ovl3.raw.bin", 0x5A9CC, 0x4

glabel D_ovl3_8018C4D0
  /* 5A9D0 106F10 8018C4D0 */
  .4byte 0xbf5f66f3 # .float -0.87266463
  .incbin "ovl3.raw.bin", 0x5A9D4, 0xC

glabel D_ovl3_8018C4E0
  /* 5A9E0 106F20 8018C4E0 */
  .4byte 0x3ebba866 # .float 0.36651915

glabel D_ovl3_8018C4E4
  /* 5A9E4 106F24 8018C4E4 */
  .4byte 0x3dfa35de # .float 0.122173056

glabel D_ovl3_8018C4E8
  /* 5A9E8 106F28 8018C4E8 */
  .4byte 0xbebba866 # .float -0.36651915

glabel D_ovl3_8018C4EC
  /* 5A9EC 106F2C 8018C4EC */
  .4byte 0xbdfa35de # .float -0.122173056

glabel D_ovl3_8018C4F0
  /* 5A9F0 106F30 8018C4F0 */
  .4byte 0x3e97e9d9 # .float 0.296706

glabel D_ovl3_8018C4F4
  /* 5A9F4 106F34 8018C4F4 */
  .4byte 0xbe97e9d9 # .float -0.296706
  .incbin "ovl3.raw.bin", 0x5A9F8, 0x8

glabel D_ovl3_8018C500
  /* 5AA00 106F40 8018C500 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018C504
  /* 5AA04 106F44 8018C504 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C508
  /* 5AA08 106F48 8018C508 */
  .4byte 0xbf5f66f3 # .float -0.87266463

glabel D_ovl3_8018C50C
  /* 5AA0C 106F4C 8018C50C */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C510
  /* 5AA10 106F50 8018C510 */
  .4byte 0xbf5f66f3 # .float -0.87266463
  .incbin "ovl3.raw.bin", 0x5AA14, 0xC

glabel D_ovl3_8018C520
  /* 5AA20 106F60 8018C520 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C524
  /* 5AA24 106F64 8018C524 */
  .4byte 0x3f6b851f # .float 0.92
  .incbin "ovl3.raw.bin", 0x5AA28, 0x8

glabel D_ovl3_8018C530
  /* 5AA30 106F70 8018C530 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C534
  /* 5AA34 106F74 8018C534 */
  .4byte 0x3f6b851f # .float 0.92
  .incbin "ovl3.raw.bin", 0x5AA38, 0x8

glabel D_ovl3_8018C540
  /* 5AA40 106F80 8018C540 */
  .4byte 0xbf490fdb # .float -0.7853982

glabel D_ovl3_8018C544
  /* 5AA44 106F84 8018C544 */
  .4byte 0xbf490fdb # .float -0.7853982
  .incbin "ovl3.raw.bin", 0x5AA48, 0x8

glabel D_ovl3_8018C550
  /* 5AA50 106F90 8018C550 */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018C554
  /* 5AA54 106F94 8018C554 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C558
  /* 5AA58 106F98 8018C558 */
  .4byte 0x3f99999a # .float 1.2

glabel D_ovl3_8018C55C
  /* 5AA5C 106F9C 8018C55C */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018C560
  /* 5AA60 106FA0 8018C560 */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018C564
  /* 5AA64 106FA4 8018C564 */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018C568
  /* 5AA68 106FA8 8018C568 */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018C56C
  /* 5AA6C 106FAC 8018C56C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C570
  /* 5AA70 106FB0 8018C570 */
  .4byte 0x3f666666 # .float 0.9
  .incbin "ovl3.raw.bin", 0x5AA74, 0x4

glabel D_ovl3_8018C578
  /* 5AA78 106FB8 8018C578 */
  .4byte 0x3f666666 # .float 0.9

glabel D_ovl3_8018C57C
  /* 5AA7C 106FBC 8018C57C */
  .4byte 0x3f3ba866 # .float 0.7330383

glabel D_ovl3_8018C580
  /* 5AA80 106FC0 8018C580 */
  .4byte 0x3ecccccd # .float 0.4

glabel D_ovl3_8018C584
  /* 5AA84 106FC4 8018C584 */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018C588
  /* 5AA88 106FC8 8018C588 */
  .4byte 0x3e4ccccd # .float 0.2
  .incbin "ovl3.raw.bin", 0x5AA8C, 0x4

glabel D_ovl3_8018C590
  /* 5AA90 106FD0 8018C590 */
  .4byte 0xbf490fdb # .float -0.7853982

glabel D_ovl3_8018C594
  /* 5AA94 106FD4 8018C594 */
  .4byte 0xbf490fdb # .float -0.7853982
  .incbin "ovl3.raw.bin", 0x5AA98, 0x8

glabel D_ovl3_8018C5A0
  /* 5AAA0 106FE0 8018C5A0 */
  .4byte 0xbf29c91f # .float -0.6632251

glabel D_ovl3_8018C5A4
  /* 5AAA4 106FE4 8018C5A4 */
  .4byte 0xbf29c91f # .float -0.6632251

glabel D_ovl3_8018C5A8
  /* 5AAA8 106FE8 8018C5A8 */
  .4byte 0xbd80adfc # .float -0.06283185

glabel D_ovl3_8018C5AC
  /* 5AAAC 106FEC 8018C5AC */
  .4byte 0xbd80adfc # .float -0.06283185

glabel D_ovl3_8018C5B0
  /* 5AAB0 106FF0 8018C5B0 */
  .4byte 0x3e2e147b # .float 0.17

glabel D_ovl3_8018C5B4
  /* 5AAB4 106FF4 8018C5B4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C5B8
  /* 5AAB8 106FF8 8018C5B8 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018C5BC
  /* 5AABC 106FFC 8018C5BC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018C5C0
  /* 5AAC0 107000 8018C5C0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C5C4
  /* 5AAC4 107004 8018C5C4 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C5C8
  /* 5AAC8 107008 8018C5C8 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018C5CC
  /* 5AACC 10700C 8018C5CC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018C5D0
  /* 5AAD0 107010 8018C5D0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C5D4
  /* 5AAD4 107014 8018C5D4 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C5D8
  /* 5AAD8 107018 8018C5D8 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018C5DC
  /* 5AADC 10701C 8018C5DC */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C5E0
  /* 5AAE0 107020 8018C5E0 */
  .4byte 0x40c49249 # .float 6.142857

glabel D_ovl3_8018C5E4
  /* 5AAE4 107024 8018C5E4 */
  .4byte 0x40c49249 # .float 6.142857

glabel D_ovl3_8018C5E8
  /* 5AAE8 107028 8018C5E8 */
  .4byte 0x40c49249 # .float 6.142857

glabel D_ovl3_8018C5EC
  /* 5AAEC 10702C 8018C5EC */
  .4byte 0x402d22fc # .float 2.7052603

glabel D_ovl3_8018C5F0
  /* 5AAF0 107030 8018C5F0 */
  .4byte 0x402d22fc # .float 2.7052603

glabel D_ovl3_8018C5F4
  /* 5AAF4 107034 8018C5F4 */
  .4byte 0x402d22fc # .float 2.7052603

glabel D_ovl3_8018C5F8
  /* 5AAF8 107038 8018C5F8 */
  .4byte 0x402d22fc # .float 2.7052603

glabel D_ovl3_8018C5FC
  /* 5AAFC 10703C 8018C5FC */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C600
  /* 5AB00 107040 8018C600 */
  .4byte 0x402d22fc # .float 2.7052603

glabel D_ovl3_8018C604
  /* 5AB04 107044 8018C604 */
  .4byte 0x3e2e147b # .float 0.17
  .incbin "ovl3.raw.bin", 0x5AB08, 0x8

glabel D_ovl3_8018C610
  /* 5AB10 107050 8018C610 */
  .4byte 0xc0490fdb # .float -3.1415927
  .incbin "ovl3.raw.bin", 0x5AB14, 0xC

glabel D_ovl3_8018C620
  /* 5AB20 107060 8018C620 */
  .4byte 0xbf29c91f # .float -0.6632251

glabel D_ovl3_8018C624
  /* 5AB24 107064 8018C624 */
  .4byte 0xbf29c91f # .float -0.6632251

glabel D_ovl3_8018C628
  /* 5AB28 107068 8018C628 */
  .4byte 0xbd80adfc # .float -0.06283185

glabel D_ovl3_8018C62C
  /* 5AB2C 10706C 8018C62C */
  .4byte 0xbd80adfc # .float -0.06283185

glabel jtbl_ovl3_8018C630
  /* 5AB30 107070 8018C630 */  .4byte jtgt_ovl3_80155ED4
  /* 5AB34 107074 8018C634 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB38 107078 8018C638 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB3C 10707C 8018C63C */  .4byte jtgt_ovl3_80155EE4
  /* 5AB40 107080 8018C640 */  .4byte jtgt_ovl3_80155EDC
  /* 5AB44 107084 8018C644 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB48 107088 8018C648 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB4C 10708C 8018C64C */  .4byte jtgt_ovl3_80155EE4
  /* 5AB50 107090 8018C650 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB54 107094 8018C654 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB58 107098 8018C658 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB5C 10709C 8018C65C */  .4byte jtgt_ovl3_80155EE4
  /* 5AB60 1070A0 8018C660 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB64 1070A4 8018C664 */  .4byte jtgt_ovl3_80155ED4
  /* 5AB68 1070A8 8018C668 */  .4byte jtgt_ovl3_80155ED4
  /* 5AB6C 1070AC 8018C66C */  .4byte jtgt_ovl3_80155EE4
  /* 5AB70 1070B0 8018C670 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB74 1070B4 8018C674 */  .4byte jtgt_ovl3_80155EE4
  /* 5AB78 1070B8 8018C678 */  .4byte jtgt_ovl3_80155EDC
  .incbin "ovl3.raw.bin", 0x5AB7C, 0x4

glabel D_ovl3_8018C680
  /* 5AB80 1070C0 8018C680 */
  .4byte 0x3e8f5c29 # .float 0.28

glabel D_ovl3_8018C684
  /* 5AB84 1070C4 8018C684 */
  .4byte 0x3f19999a # .float 0.6

glabel D_ovl3_8018C688
  /* 5AB88 1070C8 8018C688 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C68C
  /* 5AB8C 1070CC 8018C68C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C690
  /* 5AB90 1070D0 8018C690 */
  .4byte 0x3f733333 # .float 0.95
  .incbin "ovl3.raw.bin", 0x5AB94, 0xC

glabel jtbl_ovl3_8018C6A0
  /* 5ABA0 1070E0 8018C6A0 */  .4byte jtgt_ovl3_80156A44
  /* 5ABA4 1070E4 8018C6A4 */  .4byte jtgt_ovl3_80156A54
  /* 5ABA8 1070E8 8018C6A8 */  .4byte jtgt_ovl3_80156A54
  /* 5ABAC 1070EC 8018C6AC */  .4byte jtgt_ovl3_80156A54
  /* 5ABB0 1070F0 8018C6B0 */  .4byte jtgt_ovl3_80156A4C
  /* 5ABB4 1070F4 8018C6B4 */  .4byte jtgt_ovl3_80156A54
  /* 5ABB8 1070F8 8018C6B8 */  .4byte jtgt_ovl3_80156A54
  /* 5ABBC 1070FC 8018C6BC */  .4byte jtgt_ovl3_80156A54
  /* 5ABC0 107100 8018C6C0 */  .4byte jtgt_ovl3_80156A54
  /* 5ABC4 107104 8018C6C4 */  .4byte jtgt_ovl3_80156A54
  /* 5ABC8 107108 8018C6C8 */  .4byte jtgt_ovl3_80156A54
  /* 5ABCC 10710C 8018C6CC */  .4byte jtgt_ovl3_80156A54
  /* 5ABD0 107110 8018C6D0 */  .4byte jtgt_ovl3_80156A54
  /* 5ABD4 107114 8018C6D4 */  .4byte jtgt_ovl3_80156A44
  /* 5ABD8 107118 8018C6D8 */  .4byte jtgt_ovl3_80156A44
  /* 5ABDC 10711C 8018C6DC */  .4byte jtgt_ovl3_80156A54
  /* 5ABE0 107120 8018C6E0 */  .4byte jtgt_ovl3_80156A54
  /* 5ABE4 107124 8018C6E4 */  .4byte jtgt_ovl3_80156A54
  /* 5ABE8 107128 8018C6E8 */  .4byte jtgt_ovl3_80156A4C
  .incbin "ovl3.raw.bin", 0x5ABEC, 0x4

glabel D_ovl3_8018C6F0
  /* 5ABF0 107130 8018C6F0 */
  .4byte 0xbe23d70c # .float -0.16000003
  .incbin "ovl3.raw.bin", 0x5ABF4, 0xC

glabel D_ovl3_8018C700
  /* 5AC00 107140 8018C700 */
  .asciz "nothing under cll id\n"
  .balign 4

glabel D_ovl3_8018C718
  /* 5AC18 107158 8018C718 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5AC1C, 0x4

glabel D_ovl3_8018C720
  /* 5AC20 107160 8018C720 */
  .4byte 0x466a6000 # .float 15000.0
  .incbin "ovl3.raw.bin", 0x5AC24, 0xC

glabel D_ovl3_8018C730
  /* 5AC30 107170 8018C730 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C734
  /* 5AC34 107174 8018C734 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C738
  /* 5AC38 107178 8018C738 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C73C
  /* 5AC3C 10717C 8018C73C */
  .4byte 0xbf5f66f3 # .float -0.87266463

glabel D_ovl3_8018C740
  /* 5AC40 107180 8018C740 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C744
  /* 5AC44 107184 8018C744 */
  .4byte 0x3f5f66f3 # .float 0.87266463

glabel D_ovl3_8018C748
  /* 5AC48 107188 8018C748 */
  .4byte 0xbf5f66f3 # .float -0.87266463

glabel jtbl_ovl3_8018C74C
  /* 5AC4C 10718C 8018C74C */  .4byte jtgt_ovl3_80158D88
  /* 5AC50 107190 8018C750 */  .4byte jtgt_ovl3_80158F0C
  /* 5AC54 107194 8018C754 */  .4byte jtgt_ovl3_80158DB0
  /* 5AC58 107198 8018C758 */  .4byte jtgt_ovl3_80158F58
  /* 5AC5C 10719C 8018C75C */  .4byte jtgt_ovl3_80158F58
  /* 5AC60 1071A0 8018C760 */  .4byte jtgt_ovl3_80158DEC
  /* 5AC64 1071A4 8018C764 */  .4byte jtgt_ovl3_80158F58
  /* 5AC68 1071A8 8018C768 */  .4byte jtgt_ovl3_80158F58
  /* 5AC6C 1071AC 8018C76C */  .4byte jtgt_ovl3_80158F58
  /* 5AC70 1071B0 8018C770 */  .4byte jtgt_ovl3_80158DC0
  /* 5AC74 1071B4 8018C774 */  .4byte jtgt_ovl3_80158F58
  /* 5AC78 1071B8 8018C778 */  .4byte jtgt_ovl3_80158F58
  /* 5AC7C 1071BC 8018C77C */  .4byte jtgt_ovl3_80158F58
  /* 5AC80 1071C0 8018C780 */  .4byte jtgt_ovl3_80158F34
  /* 5AC84 1071C4 8018C784 */  .4byte jtgt_ovl3_80158F58
  /* 5AC88 1071C8 8018C788 */  .4byte jtgt_ovl3_80158F58
  /* 5AC8C 1071CC 8018C78C */  .4byte jtgt_ovl3_80158EDC
  /* 5AC90 1071D0 8018C790 */  .4byte jtgt_ovl3_80158EA8
  /* 5AC94 1071D4 8018C794 */  .4byte jtgt_ovl3_80158E14
  /* 5AC98 1071D8 8018C798 */  .4byte jtgt_ovl3_80158F58
  /* 5AC9C 1071DC 8018C79C */  .4byte jtgt_ovl3_80158F58
  /* 5ACA0 1071E0 8018C7A0 */  .4byte jtgt_ovl3_80158E48
  /* 5ACA4 1071E4 8018C7A4 */  .4byte jtgt_ovl3_80158F58
  /* 5ACA8 1071E8 8018C7A8 */  .4byte jtgt_ovl3_80158F58
  /* 5ACAC 1071EC 8018C7AC */  .4byte jtgt_ovl3_80158F58
  /* 5ACB0 1071F0 8018C7B0 */  .4byte jtgt_ovl3_80158E78

glabel D_ovl3_8018C7B4
  /* 5ACB4 1071F4 8018C7B4 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5ACB8, 0x8

glabel D_ovl3_8018C7C0
  /* 5ACC0 107200 8018C7C0 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018C7C4
  /* 5ACC4 107204 8018C7C4 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5ACC8, 0x8

glabel D_ovl3_8018C7D0
  /* 5ACD0 107210 8018C7D0 */
  .4byte 0xc60ca000 # .float -9000.0

glabel D_ovl3_8018C7D4
  /* 5ACD4 107214 8018C7D4 */
  .4byte 0x45bb8000 # .float 6000.0

glabel D_ovl3_8018C7D8
  /* 5ACD8 107218 8018C7D8 */
  .4byte 0xc66a6000 # .float -15000.0

glabel D_ovl3_8018C7DC
  /* 5ACDC 10721C 8018C7DC */
  .4byte 0x45dac000 # .float 7000.0

glabel D_ovl3_8018C7E0
  /* 5ACE0 107220 8018C7E0 */
  .4byte 0x460ca000 # .float 9000.0

glabel D_ovl3_8018C7E4
  /* 5ACE4 107224 8018C7E4 */
  .4byte 0x453b8000 # .float 3000.0
  .incbin "ovl3.raw.bin", 0x5ACE8, 0x8

glabel D_ovl3_8018C7F0
  /* 5ACF0 107230 8018C7F0 */
  .4byte 0x453b8000 # .float 3000.0
  .incbin "ovl3.raw.bin", 0x5ACF4, 0xC

glabel D_ovl3_8018C800
  /* 5AD00 107240 8018C800 */
  .4byte 0x453b8000 # .float 3000.0
  .incbin "ovl3.raw.bin", 0x5AD04, 0xC

glabel D_ovl3_8018C810
  /* 5AD10 107250 8018C810 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5AD14, 0xC

glabel D_ovl3_8018C820
  /* 5AD20 107260 8018C820 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl3_8018C824
  /* 5AD24 107264 8018C824 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5AD28, 0x8

glabel D_ovl3_8018C830
  /* 5AD30 107270 8018C830 */
  .4byte 0xc66a6000 # .float -15000.0

glabel D_ovl3_8018C834
  /* 5AD34 107274 8018C834 */
  .4byte 0x45dac000 # .float 7000.0
  .incbin "ovl3.raw.bin", 0x5AD38, 0x8

glabel D_ovl3_8018C840
  /* 5AD40 107280 8018C840 */
  .4byte 0x45bb8000 # .float 6000.0
  .incbin "ovl3.raw.bin", 0x5AD44, 0xC

glabel D_ovl3_8018C850
  /* 5AD50 107290 8018C850 */
  .4byte 0xc66a6000 # .float -15000.0

glabel D_ovl3_8018C854
  /* 5AD54 107294 8018C854 */
  .4byte 0x45dac000 # .float 7000.0
  .incbin "ovl3.raw.bin", 0x5AD58, 0x8

glabel D_ovl3_8018C860
  /* 5AD60 1072A0 8018C860 */
  .4byte 0x3f490fdb # .float 0.7853982

glabel D_ovl3_8018C864
  /* 5AD64 1072A4 8018C864 */
  .4byte 0x3f490fdb # .float 0.7853982
  .incbin "ovl3.raw.bin", 0x5AD68, 0x8

glabel D_ovl3_8018C870
  /* 5AD70 1072B0 8018C870 */
  .4byte 0x3e99999a # .float 0.3
  .incbin "ovl3.raw.bin", 0x5AD74, 0x4

glabel D_ovl3_8018C878
  /* 5AD78 1072B8 8018C878 */
  .4byte 0x41a26666 # .float 20.3
  .incbin "ovl3.raw.bin", 0x5AD7C, 0x4

glabel D_ovl3_8018C880
  /* 5AD80 1072C0 8018C880 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C884
  /* 5AD84 1072C4 8018C884 */
  .4byte 0x40424925 # .float 3.0357144

glabel D_ovl3_8018C888
  /* 5AD88 1072C8 8018C888 */
  .4byte 0x40424925 # .float 3.0357144

glabel D_ovl3_8018C88C
  /* 5AD8C 1072CC 8018C88C */
  .4byte 0x3ff5be0b # .float 1.9198622

glabel D_ovl3_8018C890
  /* 5AD90 1072D0 8018C890 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C894
  /* 5AD94 1072D4 8018C894 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C898
  /* 5AD98 1072D8 8018C898 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C89C
  /* 5AD9C 1072DC 8018C89C */
  .4byte 0x3eae147b # .float 0.34

glabel D_ovl3_8018C8A0
  /* 5ADA0 1072E0 8018C8A0 */
  .4byte 0x3eae147b # .float 0.34

glabel D_ovl3_8018C8A4
  /* 5ADA4 1072E4 8018C8A4 */
  .4byte 0x3eae147b # .float 0.34
  .incbin "ovl3.raw.bin", 0x5ADA8, 0x8

glabel D_ovl3_8018C8B0
  /* 5ADB0 1072F0 8018C8B0 */
  .4byte 0xbf490fdb # .float -0.7853982
  .incbin "ovl3.raw.bin", 0x5ADB4, 0xC

glabel D_ovl3_8018C8C0
  /* 5ADC0 107300 8018C8C0 */
  .4byte 0xbe23d70c # .float -0.16000003
  .incbin "ovl3.raw.bin", 0x5ADC4, 0xC

glabel D_ovl3_8018C8D0
  /* 5ADD0 107310 8018C8D0 */
  .4byte 0x3ecccccd # .float 0.4
  .incbin "ovl3.raw.bin", 0x5ADD4, 0xC

glabel D_ovl3_8018C8E0
  /* 5ADE0 107320 8018C8E0 */
  .4byte 0x3f28f5c3 # .float 0.66

glabel D_ovl3_8018C8E4
  /* 5ADE4 107324 8018C8E4 */
  .4byte 0x3f28f5c3 # .float 0.66

glabel D_ovl3_8018C8E8
  /* 5ADE8 107328 8018C8E8 */
  .4byte 0x3f28f5c3 # .float 0.66

glabel D_ovl3_8018C8EC
  /* 5ADEC 10732C 8018C8EC */
  .4byte 0x3f28f5c3 # .float 0.66

glabel D_ovl3_8018C8F0
  /* 5ADF0 107330 8018C8F0 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5ADF4, 0x4

glabel D_ovl3_8018C8F8
  /* 5ADF8 107338 8018C8F8 */
  .8byte 0x3fed70a3d70a3d71 # .double 0.92

glabel D_ovl3_8018C900
  /* 5AE00 107340 8018C900 */
  .4byte 0x3f266666 # .float 0.65

glabel D_ovl3_8018C904
  /* 5AE04 107344 8018C904 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018C908
  /* 5AE08 107348 8018C908 */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018C90C
  /* 5AE0C 10734C 8018C90C */
  .4byte 0x3f8ccccd # .float 1.1

glabel D_ovl3_8018C910
  /* 5AE10 107350 8018C910 */
  .4byte 0x3f4ccccd # .float 0.8
  .incbin "ovl3.raw.bin", 0x5AE14, 0xC

glabel D_ovl3_8018C920
  /* 5AE20 107360 8018C920 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018C924
  /* 5AE24 107364 8018C924 */
  .4byte 0x3f6b851f # .float 0.92
  .incbin "ovl3.raw.bin", 0x5AE28, 0x8

glabel D_ovl3_8018C930
  /* 5AE30 107370 8018C930 */
  .asciz "gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n"
  .balign 4

glabel D_ovl3_8018C96C
  /* 5AE6C 1073AC 8018C96C */
  .asciz "gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n"
  .balign 4

glabel jtbl_ovl3_8018C9A8
  /* 5AEA8 1073E8 8018C9A8 */  .4byte jtgt_ovl3_80160D08
  /* 5AEAC 1073EC 8018C9AC */  .4byte jtgt_ovl3_80160C3C
  /* 5AEB0 1073F0 8018C9B0 */  .4byte jtgt_ovl3_80160C5C
  /* 5AEB4 1073F4 8018C9B4 */  .4byte jtgt_ovl3_80160C80
  /* 5AEB8 1073F8 8018C9B8 */  .4byte jtgt_ovl3_80160CA4
  /* 5AEBC 1073FC 8018C9BC */  .4byte jtgt_ovl3_80160CC8

glabel D_ovl3_8018C9C0
  /* 5AEC0 107400 8018C9C0 */
  .4byte 0x3f4ccccd # .float 0.8
  .incbin "ovl3.raw.bin", 0x5AEC4, 0xC

glabel D_ovl3_8018C9D0
  /* 5AED0 107410 8018C9D0 */
  .4byte 0x3edf66f3 # .float 0.43633232

glabel D_ovl3_8018C9D4
  /* 5AED4 107414 8018C9D4 */
  .4byte 0xbedf66f3 # .float -0.43633232

glabel D_ovl3_8018C9D8
  /* 5AED8 107418 8018C9D8 */
  .4byte 0x3f933333 # .float 1.15
  .incbin "ovl3.raw.bin", 0x5AEDC, 0x4

glabel D_ovl3_8018C9E0
  /* 5AEE0 107420 8018C9E0 */
  .4byte 0x3fa78d37 # .float 1.308997

glabel D_ovl3_8018C9E4
  /* 5AEE4 107424 8018C9E4 */
  .4byte 0x3fa78d37 # .float 1.308997

glabel D_ovl3_8018C9E8
  /* 5AEE8 107428 8018C9E8 */
  .4byte 0x3daaaaab # .float 0.083333336
  .incbin "ovl3.raw.bin", 0x5AEEC, 0x4

glabel jtbl_ovl3_8018C9F0
  /* 5AEF0 107430 8018C9F0 */  .4byte jtgt_ovl3_80163CE8
  /* 5AEF4 107434 8018C9F4 */  .4byte jtgt_ovl3_80163C60
  /* 5AEF8 107438 8018C9F8 */  .4byte jtgt_ovl3_80163C7C
  /* 5AEFC 10743C 8018C9FC */  .4byte jtgt_ovl3_80163C9C
  /* 5AF00 107440 8018CA00 */  .4byte jtgt_ovl3_80163CBC
  /* 5AF04 107444 8018CA04 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF08 107448 8018CA08 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF0C 10744C 8018CA0C */  .4byte jtgt_ovl3_80163CE4
  /* 5AF10 107450 8018CA10 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF14 107454 8018CA14 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF18 107458 8018CA18 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF1C 10745C 8018CA1C */  .4byte jtgt_ovl3_80163CE4
  /* 5AF20 107460 8018CA20 */  .4byte jtgt_ovl3_80163CE4
  /* 5AF24 107464 8018CA24 */  .4byte jtgt_ovl3_80163CDC

glabel D_ovl3_8018CA28
  /* 5AF28 107468 8018CA28 */
  .4byte 0x3f266666 # .float 0.65

glabel D_ovl3_8018CA2C
  /* 5AF2C 10746C 8018CA2C */
  .4byte 0x3e6b851f # .float 0.23

glabel D_ovl3_8018CA30
  /* 5AF30 107470 8018CA30 */
  .4byte 0xc69c4000 # .float -20000.0

glabel D_ovl3_8018CA34
  /* 5AF34 107474 8018CA34 */
  .4byte 0x469c4000 # .float 20000.0

glabel jtbl_ovl3_8018CA38
  /* 5AF38 107478 8018CA38 */  .4byte jtgt_ovl3_801665C8
  /* 5AF3C 10747C 8018CA3C */  .4byte jtgt_ovl3_801665D8
  /* 5AF40 107480 8018CA40 */  .4byte jtgt_ovl3_801665E8
  /* 5AF44 107484 8018CA44 */  .4byte jtgt_ovl3_80166638
  /* 5AF48 107488 8018CA48 */  .4byte jtgt_ovl3_80166658
  /* 5AF4C 10748C 8018CA4C */  .4byte jtgt_ovl3_80166628
  /* 5AF50 107490 8018CA50 */  .4byte jtgt_ovl3_80166608

glabel D_ovl3_8018CA54
  /* 5AF54 107494 8018CA54 */  .4byte jtgt_ovl3_801666E8
  /* 5AF58 107498 8018CA58 */  .4byte jtgt_ovl3_801666F8
  /* 5AF5C 10749C 8018CA5C */  .4byte jtgt_ovl3_80166708
  /* 5AF60 1074A0 8018CA60 */  .4byte jtgt_ovl3_80166758
  /* 5AF64 1074A4 8018CA64 */  .4byte jtgt_ovl3_80166778
  /* 5AF68 1074A8 8018CA68 */  .4byte jtgt_ovl3_80166748
  /* 5AF6C 1074AC 8018CA6C */  .4byte jtgt_ovl3_80166728

glabel D_ovl3_8018CA70
  /* 5AF70 1074B0 8018CA70 */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018CA74
  /* 5AF74 1074B4 8018CA74 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CA78
  /* 5AF78 1074B8 8018CA78 */
  .4byte 0x3fe66666 # .float 1.8

glabel D_ovl3_8018CA7C
  /* 5AF7C 1074BC 8018CA7C */
  .4byte 0x3f7d70a4 # .float 0.99

glabel D_ovl3_8018CA80
  /* 5AF80 1074C0 8018CA80 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5AF84, 0x4

glabel D_ovl3_8018CA88
  /* 5AF88 1074C8 8018CA88 */
  .4byte 0x3f7fbe77 # .float 0.999

glabel D_ovl3_8018CA8C
  /* 5AF8C 1074CC 8018CA8C */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5AF90, 0x10

glabel D_ovl3_8018CAA0
  /* 5AFA0 1074E0 8018CAA0 */
  .4byte 0x42555555 # .float 53.333332

glabel D_ovl3_8018CAA4
  /* 5AFA4 1074E4 8018CAA4 */
  .4byte 0x40aaaaab # .float 5.3333335
  .incbin "ovl3.raw.bin", 0x5AFA8, 0x8

glabel D_ovl3_8018CAB0
  /* 5AFB0 1074F0 8018CAB0 */
  .4byte 0x3ea0d97c # .float 0.31415927
  .incbin "ovl3.raw.bin", 0x5AFB4, 0xC

glabel D_ovl3_8018CAC0
  /* 5AFC0 107500 8018CAC0 */
  .4byte 0x3eb2b8c3 # .float 0.34906587

glabel D_ovl3_8018CAC4
  /* 5AFC4 107504 8018CAC4 */
  .4byte 0x3e32b8c3 # .float 0.17453294
  .incbin "ovl3.raw.bin", 0x5AFC8, 0x8

glabel D_ovl3_8018CAD0
  /* 5AFD0 107510 8018CAD0 */
  .4byte 0x3fdf66f3 # .float 1.7453293

glabel D_ovl3_8018CAD4
  /* 5AFD4 107514 8018CAD4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CAD8
  /* 5AFD8 107518 8018CAD8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CADC
  /* 5AFDC 10751C 8018CADC */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018CAE0
  /* 5AFE0 107520 8018CAE0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CAE4
  /* 5AFE4 107524 8018CAE4 */
  .4byte 0x3f490fdb # .float 0.7853982

glabel D_ovl3_8018CAE8
  /* 5AFE8 107528 8018CAE8 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5AFEC, 0x4

glabel D_ovl3_8018CAF0
  /* 5AFF0 107530 8018CAF0 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5AFF4, 0xC

glabel D_ovl3_8018CB00
  /* 5B000 107540 8018CB00 */
  .4byte 0x3f490fdb # .float 0.7853982

glabel D_ovl3_8018CB04
  /* 5B004 107544 8018CB04 */
  .4byte 0x3dd67750 # .float 0.10471976

glabel D_ovl3_8018CB08
  /* 5B008 107548 8018CB08 */
  .4byte 0x3dd67750 # .float 0.10471976

glabel D_ovl3_8018CB0C
  /* 5B00C 10754C 8018CB0C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CB10
  /* 5B010 107550 8018CB10 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CB14
  /* 5B014 107554 8018CB14 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CB18
  /* 5B018 107558 8018CB18 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5B01C, 0x4

glabel D_ovl3_8018CB20
  /* 5B020 107560 8018CB20 */
  .4byte 0x3eb2b8c3 # .float 0.34906587

glabel D_ovl3_8018CB24
  /* 5B024 107564 8018CB24 */
  .4byte 0x3dd67750 # .float 0.10471976

glabel D_ovl3_8018CB28
  /* 5B028 107568 8018CB28 */
  .4byte 0x3fa31565 # .float 1.2740904

glabel D_ovl3_8018CB2C
  /* 5B02C 10756C 8018CB2C */
  .4byte 0x3fef0a51 # .float 1.8675023

glabel D_ovl3_8018CB30
  /* 5B030 107570 8018CB30 */
  .4byte 0x40133333 # .float 2.3

glabel D_ovl3_8018CB34
  /* 5B034 107574 8018CB34 */
  .4byte 0x40133333 # .float 2.3

glabel D_ovl3_8018CB38
  /* 5B038 107578 8018CB38 */
  .4byte 0xc0066666 # .float -2.1

glabel D_ovl3_8018CB3C
  /* 5B03C 10757C 8018CB3C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CB40
  /* 5B040 107580 8018CB40 */
  .4byte 0x3e333333 # .float 0.175

glabel D_ovl3_8018CB44
  /* 5B044 107584 8018CB44 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl3_8018CB48
  /* 5B048 107588 8018CB48 */
  .4byte 0x3e75c28f # .float 0.24

glabel D_ovl3_8018CB4C
  /* 5B04C 10758C 8018CB4C */
  .4byte 0x3fe66666 # .float 1.8

glabel D_ovl3_8018CB50
  /* 5B050 107590 8018CB50 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl3_8018CB54
  /* 5B054 107594 8018CB54 */
  .4byte 0x3f060a92 # .float 0.5235988
  .incbin "ovl3.raw.bin", 0x5B058, 0x8

glabel D_ovl3_8018CB60
  /* 5B060 1075A0 8018CB60 */
  .4byte 0x3ecccccd # .float 0.4

glabel D_ovl3_8018CB64
  /* 5B064 1075A4 8018CB64 */
  .4byte 0x3e32b8c3 # .float 0.17453294

glabel D_ovl3_8018CB68
  /* 5B068 1075A8 8018CB68 */
  .4byte 0x3e32b8c3 # .float 0.17453294
  .incbin "ovl3.raw.bin", 0x5B06C, 0x4

glabel D_ovl3_8018CB70
  /* 5B070 1075B0 8018CB70 */
  .4byte 0x40c90fdb # .float 6.2831855
  .incbin "ovl3.raw.bin", 0x5B074, 0x4

glabel D_ovl3_8018CB78
  /* 5B078 1075B8 8018CB78 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CB7C
  /* 5B07C 1075BC 8018CB7C */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018CB80
  /* 5B080 1075C0 8018CB80 */
  .4byte 0x3cd67750 # .float 0.02617994

glabel D_ovl3_8018CB84
  /* 5B084 1075C4 8018CB84 */
  .4byte 0x3c567750 # .float 0.01308997

glabel D_ovl3_8018CB88
  /* 5B088 1075C8 8018CB88 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CB8C
  /* 5B08C 1075CC 8018CB8C */
  .4byte 0x4096cbe4 # .float 4.712389

glabel D_ovl3_8018CB90
  /* 5B090 1075D0 8018CB90 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl3_8018CB94
  /* 5B094 1075D4 8018CB94 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CB98
  /* 5B098 1075D8 8018CB98 */
  .4byte 0x40278d36 # .float 2.6179938

glabel D_ovl3_8018CB9C
  /* 5B09C 1075DC 8018CB9C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CBA0
  /* 5B0A0 1075E0 8018CBA0 */
  .4byte 0x406a9280 # .float 3.6651917

glabel D_ovl3_8018CBA4
  /* 5B0A4 1075E4 8018CBA4 */
  .4byte 0x4096cbe4 # .float 4.712389

glabel D_ovl3_8018CBA8
  /* 5B0A8 1075E8 8018CBA8 */
  .4byte 0x40b84e89 # .float 5.759587

glabel D_ovl3_8018CBAC
  /* 5B0AC 1075EC 8018CBAC */
  .4byte 0x4096cbe4 # .float 4.712389

glabel D_ovl3_8018CBB0
  /* 5B0B0 1075F0 8018CBB0 */
  .4byte 0xc0490fdb # .float -3.1415927

glabel D_ovl3_8018CBB4
  /* 5B0B4 1075F4 8018CBB4 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018CBB8
  /* 5B0B8 1075F8 8018CBB8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CBBC
  /* 5B0BC 1075FC 8018CBBC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018CBC0
  /* 5B0C0 107600 8018CBC0 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018CBC4
  /* 5B0C4 107604 8018CBC4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CBC8
  /* 5B0C8 107608 8018CBC8 */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl3_8018CBCC
  /* 5B0CC 10760C 8018CBCC */
  .4byte 0x3f060a92 # .float 0.5235988

glabel D_ovl3_8018CBD0
  /* 5B0D0 107610 8018CBD0 */
  .4byte 0xbf060a92 # .float -0.5235988

glabel D_ovl3_8018CBD4
  /* 5B0D4 107614 8018CBD4 */
  .4byte 0xc0490fdb # .float -3.1415927

glabel D_ovl3_8018CBD8
  /* 5B0D8 107618 8018CBD8 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CBDC
  /* 5B0DC 10761C 8018CBDC */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_ovl3_8018CBE0
  /* 5B0E0 107620 8018CBE0 */
  .asciz "Item positions are over %d!\n"
  .balign 4

glabel D_ovl3_8018CC00
  /* 5B100 107640 8018CC00 */
  .4byte 0x3c23d70a # .float 0.01

glabel jtbl_ovl3_8018CC04
  /* 5B104 107644 8018CC04 */  .4byte jtgt_ovl3_8016E9F0
  /* 5B108 107648 8018CC08 */  .4byte jtgt_ovl3_8016EA48
  /* 5B10C 10764C 8018CC0C */  .4byte jtgt_ovl3_8016EA10
  /* 5B110 107650 8018CC10 */  .4byte jtgt_ovl3_8016EA30
  /* 5B114 107654 8018CC14 */  .4byte jtgt_ovl3_8016EA48

glabel D_ovl3_8018CC18
  /* 5B118 107658 8018CC18 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5B11C, 0x4

glabel jtbl_ovl3_8018CC20
  /* 5B120 107660 8018CC20 */  .4byte jtgt_ovl3_8016F964
  /* 5B124 107664 8018CC24 */  .4byte jtgt_ovl3_8016F974
  /* 5B128 107668 8018CC28 */  .4byte jtgt_ovl3_8016F984
  /* 5B12C 10766C 8018CC2C */  .4byte jtgt_ovl3_8016F9C4
  /* 5B130 107670 8018CC30 */  .4byte jtgt_ovl3_8016F9E4
  /* 5B134 107674 8018CC34 */  .4byte jtgt_ovl3_8016FA14
  /* 5B138 107678 8018CC38 */  .4byte jtgt_ovl3_8016F9A4

glabel D_ovl3_8018CC3C
  /* 5B13C 10767C 8018CC3C */  .4byte jtgt_ovl3_8016FA74
  /* 5B140 107680 8018CC40 */  .4byte jtgt_ovl3_8016FA84
  /* 5B144 107684 8018CC44 */  .4byte jtgt_ovl3_8016FA94
  /* 5B148 107688 8018CC48 */  .4byte jtgt_ovl3_8016FAD4
  /* 5B14C 10768C 8018CC4C */  .4byte jtgt_ovl3_8016FAF4
  /* 5B150 107690 8018CC50 */  .4byte jtgt_ovl3_8016FB10
  /* 5B154 107694 8018CC54 */  .4byte jtgt_ovl3_8016FAB4

glabel D_ovl3_8018CC58
  /* 5B158 107698 8018CC58 */
  .4byte 0x4016cbe4 # .float 2.3561945

glabel D_ovl3_8018CC5C
  /* 5B15C 10769C 8018CC5C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CC60
  /* 5B160 1076A0 8018CC60 */
  .4byte 0x3fe66666 # .float 1.8

glabel D_ovl3_8018CC64
  /* 5B164 1076A4 8018CC64 */
  .4byte 0x3f7d70a4 # .float 0.99
  .incbin "ovl3.raw.bin", 0x5B168, 0x8

glabel D_ovl3_8018CC70
  /* 5B170 1076B0 8018CC70 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018CC74
  /* 5B174 1076B4 8018CC74 */
  .4byte 0x3ea0d97c # .float 0.31415927

glabel D_ovl3_8018CC78
  /* 5B178 1076B8 8018CC78 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018CC7C
  /* 5B17C 1076BC 8018CC7C */
  .4byte 0x3e32b8c3 # .float 0.17453294

glabel D_ovl3_8018CC80
  /* 5B180 1076C0 8018CC80 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018CC84
  /* 5B184 1076C4 8018CC84 */
  .4byte 0x3e8efa35 # .float 0.27925268

glabel D_ovl3_8018CC88
  /* 5B188 1076C8 8018CC88 */
  .4byte 0xbebba866 # .float -0.36651915

glabel D_ovl3_8018CC8C
  /* 5B18C 1076CC 8018CC8C */
  .4byte 0xbe32b8c3 # .float -0.17453294

glabel D_ovl3_8018CC90
  /* 5B190 1076D0 8018CC90 */
  .4byte 0x3c23d70a # .float 0.01

glabel D_ovl3_8018CC94
  /* 5B194 1076D4 8018CC94 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018CC98
  /* 5B198 1076D8 8018CC98 */
  .4byte 0x3f7fbe77 # .float 0.999

glabel D_ovl3_8018CC9C
  /* 5B19C 1076DC 8018CC9C */
  .4byte 0xbd75c28f # .float -0.06

glabel D_ovl3_8018CCA0
  /* 5B1A0 1076E0 8018CCA0 */
  .4byte 0xbe99999a # .float -0.3
  .incbin "ovl3.raw.bin", 0x5B1A4, 0xC

glabel D_ovl3_8018CCB0
  /* 5B1B0 1076F0 8018CCB0 */
  .4byte 0x3fb33333 # .float 1.4
  .incbin "ovl3.raw.bin", 0x5B1B4, 0xC

glabel D_ovl3_8018CCC0
  /* 5B1C0 107700 8018CCC0 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CCC4
  /* 5B1C4 107704 8018CCC4 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CCC8
  /* 5B1C8 107708 8018CCC8 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5B1CC, 0x4

glabel D_ovl3_8018CCD0
  /* 5B1D0 107710 8018CCD0 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CCD4
  /* 5B1D4 107714 8018CCD4 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CCD8
  /* 5B1D8 107718 8018CCD8 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5B1DC, 0x4

glabel D_ovl3_8018CCE0
  /* 5B1E0 107720 8018CCE0 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018CCE4
  /* 5B1E4 107724 8018CCE4 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018CCE8
  /* 5B1E8 107728 8018CCE8 */
  .4byte 0xbfc90fdb # .float -1.5707964
  .incbin "ovl3.raw.bin", 0x5B1EC, 0x4

glabel D_ovl3_8018CCF0
  /* 5B1F0 107730 8018CCF0 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018CCF4
  /* 5B1F4 107734 8018CCF4 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CCF8
  /* 5B1F8 107738 8018CCF8 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018CCFC
  /* 5B1FC 10773C 8018CCFC */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD00
  /* 5B200 107740 8018CD00 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD04
  /* 5B204 107744 8018CD04 */
  .4byte 0xbfc90fdb # .float -1.5707964

glabel D_ovl3_8018CD08
  /* 5B208 107748 8018CD08 */
  .4byte 0x42555555 # .float 53.333332
  .incbin "ovl3.raw.bin", 0x5B20C, 0x4

glabel D_ovl3_8018CD10
  /* 5B210 107750 8018CD10 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD14
  /* 5B214 107754 8018CD14 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD18
  /* 5B218 107758 8018CD18 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5B21C, 0x4

glabel D_ovl3_8018CD20
  /* 5B220 107760 8018CD20 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD24
  /* 5B224 107764 8018CD24 */
  .4byte 0x3f99999a # .float 1.2

glabel D_ovl3_8018CD28
  /* 5B228 107768 8018CD28 */
  .4byte 0x481c4000 # .float 160000.0

glabel D_ovl3_8018CD2C
  /* 5B22C 10776C 8018CD2C */
  .4byte 0x481c4000 # .float 160000.0

glabel D_ovl3_8018CD30
  /* 5B230 107770 8018CD30 */
  .4byte 0x3fb33333 # .float 1.4
  .incbin "ovl3.raw.bin", 0x5B234, 0xC

glabel D_ovl3_8018CD40
  /* 5B240 107780 8018CD40 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD44
  /* 5B244 107784 8018CD44 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD48
  /* 5B248 107788 8018CD48 */
  .4byte 0xbe4ccccd # .float -0.2
  .incbin "ovl3.raw.bin", 0x5B24C, 0x4

glabel D_ovl3_8018CD50
  /* 5B250 107790 8018CD50 */
  .4byte 0x3fc90fdb # .float 1.5707964
  .incbin "ovl3.raw.bin", 0x5B254, 0xC

glabel D_ovl3_8018CD60
  /* 5B260 1077A0 8018CD60 */
  .4byte 0x3fa66666 # .float 1.3

glabel D_ovl3_8018CD64
  /* 5B264 1077A4 8018CD64 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CD68
  /* 5B268 1077A8 8018CD68 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD6C
  /* 5B26C 1077AC 8018CD6C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD70
  /* 5B270 1077B0 8018CD70 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD74
  /* 5B274 1077B4 8018CD74 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD78
  /* 5B278 1077B8 8018CD78 */
  .4byte 0x3fb33333 # .float 1.4
  .incbin "ovl3.raw.bin", 0x5B27C, 0x4

glabel D_ovl3_8018CD80
  /* 5B280 1077C0 8018CD80 */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018CD84
  /* 5B284 1077C4 8018CD84 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD88
  /* 5B288 1077C8 8018CD88 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CD8C
  /* 5B28C 1077CC 8018CD8C */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl3_8018CD90
  /* 5B290 1077D0 8018CD90 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018CD94
  /* 5B294 1077D4 8018CD94 */
  .4byte 0x3b9374bc # .float 0.0045

glabel D_ovl3_8018CD98
  /* 5B298 1077D8 8018CD98 */
  .4byte 0xbb9374bc # .float -0.0045

glabel D_ovl3_8018CD9C
  /* 5B29C 1077DC 8018CD9C */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl3_8018CDA0
  /* 5B2A0 1077E0 8018CDA0 */
  .4byte 0x3f99999a # .float 1.2

glabel D_ovl3_8018CDA4
  /* 5B2A4 1077E4 8018CDA4 */
  .4byte 0x3f333333 # .float 0.7

glabel D_ovl3_8018CDA8
  /* 5B2A8 1077E8 8018CDA8 */
  .4byte 0x3f333333 # .float 0.7

glabel D_ovl3_8018CDAC
  /* 5B2AC 1077EC 8018CDAC */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CDB0
  /* 5B2B0 1077F0 8018CDB0 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018CDB4
  /* 5B2B4 1077F4 8018CDB4 */
  .4byte 0x3f4ccccd # .float 0.8

glabel D_ovl3_8018CDB8
  /* 5B2B8 1077F8 8018CDB8 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CDBC
  /* 5B2BC 1077FC 8018CDBC */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl3_8018CDC0
  /* 5B2C0 107800 8018CDC0 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5B2C4, 0xC

glabel D_ovl3_8018CDD0
  /* 5B2D0 107810 8018CDD0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CDD4
  /* 5B2D4 107814 8018CDD4 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5B2D8, 0x8

glabel D_ovl3_8018CDE0
  /* 5B2E0 107820 8018CDE0 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CDE4
  /* 5B2E4 107824 8018CDE4 */
  .4byte 0x3dd67750 # .float 0.10471976

glabel D_ovl3_8018CDE8
  /* 5B2E8 107828 8018CDE8 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5B2EC, 0x4

glabel D_ovl3_8018CDF0
  /* 5B2F0 107830 8018CDF0 */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018CDF4
  /* 5B2F4 107834 8018CDF4 */
  .4byte 0x3e4ccccd # .float 0.2
  .incbin "ovl3.raw.bin", 0x5B2F8, 0x4

glabel D_ovl3_8018CDFC
  /* 5B2FC 10783C 8018CDFC */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018CE00
  /* 5B300 107840 8018CE00 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CE04
  /* 5B304 107844 8018CE04 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CE08
  /* 5B308 107848 8018CE08 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CE0C
  /* 5B30C 10784C 8018CE0C */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CE10
  /* 5B310 107850 8018CE10 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5B314, 0xC

glabel D_ovl3_8018CE20
  /* 5B320 107860 8018CE20 */
  .4byte 0x3dcccccd # .float 0.1
  .incbin "ovl3.raw.bin", 0x5B324, 0xC

glabel D_ovl3_8018CE30
  /* 5B330 107870 8018CE30 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B334, 0xC

glabel D_ovl3_8018CE40
  /* 5B340 107880 8018CE40 */
  .4byte 0x40a66666 # .float 5.2
  .incbin "ovl3.raw.bin", 0x5B344, 0xC

glabel D_ovl3_8018CE50
  /* 5B350 107890 8018CE50 */
  .4byte 0x3f4ccccd # .float 0.8
  .incbin "ovl3.raw.bin", 0x5B354, 0xC

glabel D_ovl3_8018CE60
  /* 5B360 1078A0 8018CE60 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CE64
  /* 5B364 1078A4 8018CE64 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B368, 0x8

glabel D_ovl3_8018CE70
  /* 5B370 1078B0 8018CE70 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CE74
  /* 5B374 1078B4 8018CE74 */
  .4byte 0xbe860a92 # .float -0.2617994

glabel D_ovl3_8018CE78
  /* 5B378 1078B8 8018CE78 */
  .4byte 0xbe860a92 # .float -0.2617994
  .incbin "ovl3.raw.bin", 0x5B37C, 0x4

glabel D_ovl3_8018CE80
  /* 5B380 1078C0 8018CE80 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CE84
  /* 5B384 1078C4 8018CE84 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CE88
  /* 5B388 1078C8 8018CE88 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B38C, 0x4

glabel D_ovl3_8018CE90
  /* 5B390 1078D0 8018CE90 */
  .4byte 0x43aa8000 # .float 341.0

glabel D_ovl3_8018CE94
  /* 5B394 1078D4 8018CE94 */
  .4byte 0xc3aa8000 # .float -341.0

glabel D_ovl3_8018CE98
  /* 5B398 1078D8 8018CE98 */
  .4byte 0x40133333 # .float 2.3

glabel D_ovl3_8018CE9C
  /* 5B39C 1078DC 8018CE9C */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CEA0
  /* 5B3A0 1078E0 8018CEA0 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B3A4, 0xC

glabel D_ovl3_8018CEB0
  /* 5B3B0 1078F0 8018CEB0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CEB4
  /* 5B3B4 1078F4 8018CEB4 */
  .4byte 0x3fb33333 # .float 1.4
  .incbin "ovl3.raw.bin", 0x5B3B8, 0x8

glabel D_ovl3_8018CEC0
  /* 5B3C0 107900 8018CEC0 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CEC4
  /* 5B3C4 107904 8018CEC4 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CEC8
  /* 5B3C8 107908 8018CEC8 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B3CC, 0x4

glabel D_ovl3_8018CED0
  /* 5B3D0 107910 8018CED0 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B3D4, 0xC

glabel D_ovl3_8018CEE0
  /* 5B3E0 107920 8018CEE0 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B3E4, 0xC

glabel D_ovl3_8018CEF0
  /* 5B3F0 107930 8018CEF0 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl3_8018CEF4
  /* 5B3F4 107934 8018CEF4 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5B3F8, 0x8

glabel D_ovl3_8018CF00
  /* 5B400 107940 8018CF00 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl3.raw.bin", 0x5B404, 0xC

glabel D_ovl3_8018CF10
  /* 5B410 107950 8018CF10 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CF14
  /* 5B414 107954 8018CF14 */
  .4byte 0x3dd67750 # .float 0.10471976

glabel D_ovl3_8018CF18
  /* 5B418 107958 8018CF18 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CF1C
  /* 5B41C 10795C 8018CF1C */
  .4byte 0xbe567750 # .float -0.20943952

glabel D_ovl3_8018CF20
  /* 5B420 107960 8018CF20 */
  .4byte 0xbe567750 # .float -0.20943952
  .incbin "ovl3.raw.bin", 0x5B424, 0xC

glabel D_ovl3_8018CF30
  /* 5B430 107970 8018CF30 */
  .4byte 0xff7fffff # .float -3.4028235e38

glabel D_ovl3_8018CF34
  /* 5B434 107974 8018CF34 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CF38
  /* 5B438 107978 8018CF38 */
  .4byte 0x40490fdb # .float 3.1415927
  .incbin "ovl3.raw.bin", 0x5B43C, 0x4

glabel D_ovl3_8018CF40
  /* 5B440 107980 8018CF40 */
  .4byte 0x3fa66666 # .float 1.3

glabel D_ovl3_8018CF44
  /* 5B444 107984 8018CF44 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl3_8018CF48
  /* 5B448 107988 8018CF48 */
  .4byte 0x3e4ccccd # .float 0.2

glabel D_ovl3_8018CF4C
  /* 5B44C 10798C 8018CF4C */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CF50
  /* 5B450 107990 8018CF50 */
  .4byte 0x3fc90fdb # .float 1.5707964

glabel D_ovl3_8018CF54
  /* 5B454 107994 8018CF54 */
  .4byte 0x3fb33333 # .float 1.4

glabel D_ovl3_8018CF58
  /* 5B458 107998 8018CF58 */
  .4byte 0x3b9374bc # .float 0.0045

glabel D_ovl3_8018CF5C
  /* 5B45C 10799C 8018CF5C */
  .4byte 0xbb9374bc # .float -0.0045

glabel D_ovl3_8018CF60
  /* 5B460 1079A0 8018CF60 */
  .4byte 0x3fb33333 # .float 1.4
  .incbin "ovl3.raw.bin", 0x5B464, 0xC

glabel D_ovl3_8018CF70
  /* 5B470 1079B0 8018CF70 */
  .4byte 0x3fa66666 # .float 1.3
  .incbin "ovl3.raw.bin", 0x5B474, 0xC
