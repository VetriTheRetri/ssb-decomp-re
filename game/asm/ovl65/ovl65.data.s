.include "macros.inc"

.section .data

# Data Sections
#  80192800 -> 80192FA0


glabel D_ovl65_80192800
  .incbin "ovl65.raw.bin", 0x5740, 0x1

glabel D_ovl65_80192801
  .incbin "ovl65.raw.bin", 0x5741, 0x1

glabel D_ovl65_80192802
  .incbin "ovl65.raw.bin", 0x5742, 0x6

glabel D_ovl65_80192808
  /* 5748 111068 80192808 */
  .4byte 0xc1700000 # .float -15.0
  .incbin "ovl65.raw.bin", 0x574C, 0x4
  /* 5750 111070 80192810 */
  .asciz "Ap"
  .balign 4
  .incbin "ovl65.raw.bin", 0x5754, 0x4
  /* 5758 111078 80192818 */
  .asciz "B4"
  .balign 4
  /* 575C 11107C 8019281C */
  .asciz "Bp"
  .balign 4

glabel D_ovl65_80192820
  /* 5760 111080 80192820 */
  .4byte 0x3f800000 # .float 1.0
  /* 5764 111084 80192824 */
  .asciz "@"
  .balign 4
  .incbin "ovl65.raw.bin", 0x5768, 0x8

glabel D_ovl65_80192830
  .incbin "ovl65.raw.bin", 0x5770, 0x18C

glabel D_ovl65_801929BC
  .incbin "ovl65.raw.bin", 0x58FC, 0x10
  /* 590C 11122C 801929CC */  .4byte D_NF_800C0000
  .incbin "ovl65.raw.bin", 0x5910, 0x6C
  /* 597C 11129C 80192A3C */  .4byte D_80060000
  .incbin "ovl65.raw.bin", 0x5980, 0x3C
  /* 59BC 1112DC 80192A7C */  .4byte func_ovl2_800E0000
  .incbin "ovl65.raw.bin", 0x59C0, 0x5C

glabel D_ovl65_80192ADC
  .incbin "ovl65.raw.bin", 0x5A1C, 0x10

glabel D_ovl65_80192AEC
  .incbin "ovl65.raw.bin", 0x5A2C, 0xC

glabel D_ovl65_80192AF8
  .incbin "ovl65.raw.bin", 0x5A38, 0x8
  /* 5A40 111360 80192B00 */  .4byte D_ovl65_80192AF8
  /* 5A44 111364 80192B04 */  .4byte D_ovl65_80192AEC
  /* 5A48 111368 80192B08 */  .4byte D_ovl65_80192ADC

glabel D_ovl65_80192B0C
  .incbin "ovl65.raw.bin", 0x5A4C, 0x4

glabel D_ovl65_80192B10
  .incbin "ovl65.raw.bin", 0x5A50, 0x4

glabel D_ovl65_80192B14
  .incbin "ovl65.raw.bin", 0x5A54, 0x4

glabel D_ovl65_80192B18
  /* 5A58 111378 80192B18 */  .4byte D_NF_80392A00
  /* 5A5C 11137C 80192B1C */  .4byte D_NF_803B6900
  /* 5A60 111380 80192B20 */  .4byte D_NF_803DA800
  .incbin "ovl65.raw.bin", 0x5A64, 0x10

glabel D_ovl65_80192B34
  .incbin "ovl65.raw.bin", 0x5A74, 0x4
  /* 5A78 111398 80192B38 */  .4byte func_ovl65_8018D200
  /* 5A7C 11139C 80192B3C */  .4byte func_800A26B8
  /* 5A80 1113A0 80192B40 */  .4byte D_NF_80193900
  .incbin "ovl65.raw.bin", 0x5A84, 0x28
  /* 5AAC 1113CC 80192B6C */  .4byte func_ovl65_80190F8C
  /* 5AB0 1113D0 80192B70 */  .4byte update_contdata
  .incbin "ovl65.raw.bin", 0x5AB4, 0x20
  /* 5AD4 1113F4 80192B94 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl65.raw.bin", 0x5AD8, 0x24
  /* 5AFC 11141C 80192BBC */  .4byte func_ovl65_8018F7B4

glabel D_ovl65_80192BC0
  .incbin "ovl65.raw.bin", 0x5B00, 0x8

glabel D_ovl65_80192BC8
  .incbin "ovl65.raw.bin", 0x5B08, 0x8

glabel D_ovl65_80192BD0
  .incbin "ovl65.raw.bin", 0x5B10, 0x8

glabel jtbl_ovl65_80192BD8
  /* 5B18 111438 80192BD8 */  .4byte jtgt_ovl65_80191D60
  /* 5B1C 11143C 80192BDC */  .4byte jtgt_ovl65_80191364
  .incbin "ovl65.raw.bin", 0x5B20, 0x8

glabel D_ovl65_80192BE8
  .incbin "ovl65.raw.bin", 0x5B28, 0x8
  /* 5B30 111450 80192BF0 */
  .asciz "?"
  .balign 4
  .incbin "ovl65.raw.bin", 0x5B34, 0x24

glabel D_ovl65_80192C18
  .incbin "ovl65.raw.bin", 0x5B58, 0x30

glabel jtbl_ovl65_80192C48
  /* 5B88 1114A8 80192C48 */  .4byte jtgt_ovl65_80191DA4
  /* 5B8C 1114AC 80192C4C */  .4byte jtgt_ovl65_80191498
  .incbin "ovl65.raw.bin", 0x5B90, 0x8

glabel D_ovl65_80192C58
  .incbin "ovl65.raw.bin", 0x5B98, 0x8
  /* 5BA0 1114C0 80192C60 */
  .asciz "?"
  .balign 4

glabel D_ovl65_80192C64
  .incbin "ovl65.raw.bin", 0x5BA4, 0x18

glabel jtbl_ovl65_80192C7C
  /* 5BBC 1114DC 80192C7C */  .4byte jtgt_ovl65_80191E28
  /* 5BC0 1114E0 80192C80 */  .4byte jtgt_ovl65_801915B8
  .incbin "ovl65.raw.bin", 0x5BC4, 0x8

glabel jtbl_ovl65_80192C8C
  /* 5BCC 1114EC 80192C8C */  .4byte jtgt_ovl65_80191F28
  /* 5BD0 1114F0 80192C90 */  .4byte jtgt_ovl65_801916A8
  .incbin "ovl65.raw.bin", 0x5BD4, 0x8

glabel D_ovl65_80192C9C
  .incbin "ovl65.raw.bin", 0x5BDC, 0x18

glabel D_ovl65_80192CB4
  .incbin "ovl65.raw.bin", 0x5BF4, 0x2C
  /* 5C20 111540 80192CE0 */
  .asciz "Dz"
  .balign 4

glabel jtbl_ovl65_80192CE4
  /* 5C24 111544 80192CE4 */  .4byte func_ovl65_80191AEC
  /* 5C28 111548 80192CE8 */  .4byte jtgt_ovl65_801916A8
  .incbin "ovl65.raw.bin", 0x5C2C, 0x8

glabel jtbl_ovl65_80192CF4
  /* 5C34 111554 80192CF4 */  .4byte jtgt_ovl65_80191F90
  /* 5C38 111558 80192CF8 */  .4byte jtgt_ovl65_801915B8
  .incbin "ovl65.raw.bin", 0x5C3C, 0x8

glabel D_ovl65_80192D04
  .incbin "ovl65.raw.bin", 0x5C44, 0x8
  /* 5C4C 11156C 80192D0C */
  .asciz "?"
  .balign 4
  .incbin "ovl65.raw.bin", 0x5C50, 0xC

glabel D_ovl65_80192D1C
  .incbin "ovl65.raw.bin", 0x5C5C, 0x14
  /* 5C70 111590 80192D30 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl65.raw.bin", 0x5C74, 0x18

glabel D_ovl65_80192D4C
  .incbin "ovl65.raw.bin", 0x5C8C, 0x24
  /* 5CB0 1115D0 80192D70 */  .4byte jtbl_ovl65_80192BD8
  /* 5CB4 1115D4 80192D74 */  .4byte D_ovl65_80192BE8
  /* 5CB8 1115D8 80192D78 */  .4byte D_ovl65_80192C18
  .incbin "ovl65.raw.bin", 0x5CBC, 0x24
  /* 5CE0 111600 80192DA0 */  .4byte jtbl_ovl65_80192C48
  /* 5CE4 111604 80192DA4 */  .4byte D_ovl65_80192C58
  /* 5CE8 111608 80192DA8 */  .4byte D_ovl65_80192C64
  .incbin "ovl65.raw.bin", 0x5CEC, 0x24
  /* 5D10 111630 80192DD0 */  .4byte jtbl_ovl65_80192C7C
  /* 5D14 111634 80192DD4 */  .4byte D_ovl65_80192C9C
  /* 5D18 111638 80192DD8 */  .4byte D_ovl65_80192CB4
  .incbin "ovl65.raw.bin", 0x5D1C, 0x24
  /* 5D40 111660 80192E00 */  .4byte jtbl_ovl65_80192CE4
  /* 5D44 111664 80192E04 */  .4byte D_ovl65_80192D04
  /* 5D48 111668 80192E08 */  .4byte D_ovl65_80192D1C
  .incbin "ovl65.raw.bin", 0x5D4C, 0x4

glabel D_ovl65_80192E10
  /* 5D50 111670 80192E10 */
  .asciz "getMapObjPos:mpGetMapObjNumId(%d) = %d\n"
  .balign 4

glabel D_ovl65_80192E38
  /* 5D78 111698 80192E38 */
  .asciz "getMapObjPosRandom:mpGetMapObjNumId(%d) = 0\n"
  .balign 4

glabel jtbl_ovl65_80192E68
  /* 5DA8 1116C8 80192E68 */  .4byte jtgt_ovl65_8018D6C0
  /* 5DAC 1116CC 80192E6C */  .4byte jtgt_ovl65_8018D6E0
  /* 5DB0 1116D0 80192E70 */  .4byte jtgt_ovl65_8018D6E0
  /* 5DB4 1116D4 80192E74 */  .4byte jtgt_ovl65_8018D6D0
  /* 5DB8 1116D8 80192E78 */  .4byte jtgt_ovl65_8018D6D0
  /* 5DBC 1116DC 80192E7C */  .4byte jtgt_ovl65_8018D6D0
  /* 5DC0 1116E0 80192E80 */  .4byte jtgt_ovl65_8018D6D0

glabel D_ovl65_80192E84
  /* 5DC4 1116E4 80192E84 */  .4byte jtgt_ovl65_8018D874
  /* 5DC8 1116E8 80192E88 */  .4byte jtgt_ovl65_8018DAC0
  /* 5DCC 1116EC 80192E8C */  .4byte jtgt_ovl65_8018D874
  /* 5DD0 1116F0 80192E90 */  .4byte jtgt_ovl65_8018DFF0
  /* 5DD4 1116F4 80192E94 */  .4byte jtgt_ovl65_8018D874
  /* 5DD8 1116F8 80192E98 */  .4byte jtgt_ovl65_8018D874
  /* 5DDC 1116FC 80192E9C */  .4byte jtgt_ovl65_8018D874
  /* 5DE0 111700 80192EA0 */  .4byte jtgt_ovl65_8018DFF0
  /* 5DE4 111704 80192EA4 */  .4byte jtgt_ovl65_8018DDD0
  /* 5DE8 111708 80192EA8 */  .4byte jtgt_ovl65_8018D874
  /* 5DEC 11170C 80192EAC */  .4byte jtgt_ovl65_8018D874
  /* 5DF0 111710 80192EB0 */  .4byte jtgt_ovl65_8018DEEC
  /* 5DF4 111714 80192EB4 */  .4byte jtgt_ovl65_8018DC64
  /* 5DF8 111718 80192EB8 */  .4byte jtgt_ovl65_8018D874
  /* 5DFC 11171C 80192EBC */  .4byte jtgt_ovl65_8018D874
  /* 5E00 111720 80192EC0 */  .4byte jtgt_ovl65_8018D874
  /* 5E04 111724 80192EC4 */  .4byte jtgt_ovl65_8018D874
  /* 5E08 111728 80192EC8 */  .4byte jtgt_ovl65_8018D874

glabel D_ovl65_80192ECC
  /* 5E0C 11172C 80192ECC */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl65_80192ED0
  /* 5E10 111730 80192ED0 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl65_80192ED4
  /* 5E14 111734 80192ED4 */
  .4byte 0x3e99999a # .float 0.3

glabel D_ovl65_80192ED8
  /* 5E18 111738 80192ED8 */
  .4byte 0x3dcccccd # .float 0.1

glabel D_ovl65_80192EDC
  /* 5E1C 11173C 80192EDC */
  .4byte 0x3e99999a # .float 0.3

glabel jtbl_ovl65_80192EE0
  /* 5E20 111740 80192EE0 */  .4byte jtgt_ovl65_8018EB10
  /* 5E24 111744 80192EE4 */  .4byte jtgt_ovl65_8018EB20
  /* 5E28 111748 80192EE8 */  .4byte jtgt_ovl65_8018EB10
  /* 5E2C 11174C 80192EEC */  .4byte jtgt_ovl65_8018EB48
  /* 5E30 111750 80192EF0 */  .4byte jtgt_ovl65_8018EB10
  /* 5E34 111754 80192EF4 */  .4byte jtgt_ovl65_8018EB10
  /* 5E38 111758 80192EF8 */  .4byte jtgt_ovl65_8018EB10
  /* 5E3C 11175C 80192EFC */  .4byte jtgt_ovl65_8018EB48
  /* 5E40 111760 80192F00 */  .4byte jtgt_ovl65_8018EB20
  /* 5E44 111764 80192F04 */  .4byte jtgt_ovl65_8018EB10
  /* 5E48 111768 80192F08 */  .4byte jtgt_ovl65_8018EB10
  /* 5E4C 11176C 80192F0C */  .4byte jtgt_ovl65_8018EB30
  /* 5E50 111770 80192F10 */  .4byte jtgt_ovl65_8018EB20
  /* 5E54 111774 80192F14 */  .4byte jtgt_ovl65_8018EB40
  /* 5E58 111778 80192F18 */  .4byte jtgt_ovl65_8018EB10
  /* 5E5C 11177C 80192F1C */  .4byte jtgt_ovl65_8018EB10
  /* 5E60 111780 80192F20 */  .4byte jtgt_ovl65_8018EB10
  /* 5E64 111784 80192F24 */  .4byte jtgt_ovl65_8018EB10

glabel D_ovl65_80192F28
  /* 5E68 111788 80192F28 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl65_80192F2C
  /* 5E6C 11178C 80192F2C */
  .4byte 0x3d75c28f # .float 0.06

glabel D_ovl65_80192F30
  /* 5E70 111790 80192F30 */
  .4byte 0x453b8000 # .float 3000.0

glabel jtbl_ovl65_80192F34
  /* 5E74 111794 80192F34 */  .4byte jtgt_ovl65_801900E0
  /* 5E78 111798 80192F38 */  .4byte jtgt_ovl65_80190108
  /* 5E7C 11179C 80192F3C */  .4byte jtgt_ovl65_80190130
  /* 5E80 1117A0 80192F40 */  .4byte jtgt_ovl65_80190144
  /* 5E84 1117A4 80192F44 */  .4byte jtgt_ovl65_80190158
  /* 5E88 1117A8 80192F48 */  .4byte jtgt_ovl65_80190180
  /* 5E8C 1117AC 80192F4C */  .4byte jtgt_ovl65_801901BC
  /* 5E90 1117B0 80192F50 */  .4byte jtgt_ovl65_801901D0
  /* 5E94 1117B4 80192F54 */  .4byte jtgt_ovl65_8019020C
  /* 5E98 1117B8 80192F58 */  .4byte jtgt_ovl65_8019025C
  /* 5E9C 1117BC 80192F5C */  .4byte jtgt_ovl65_80190234
  /* 5EA0 1117C0 80192F60 */  .4byte jtgt_ovl65_80190248

glabel D_ovl65_80192F64
  /* 5EA4 1117C4 80192F64 */
  .4byte 0x3eb33333 # .float 0.35
  .incbin "ovl65.raw.bin", 0x5EA8, 0x8

glabel D_ovl65_80192F70
  /* 5EB0 1117D0 80192F70 */
  .4byte 0x40233333 # .float 2.55

glabel D_ovl65_80192F74
  /* 5EB4 1117D4 80192F74 */
  .4byte 0x40490fdb # .float 3.1415927

glabel D_ovl65_80192F78
  /* 5EB8 1117D8 80192F78 */
  .8byte 0xbf53a92a30553261 # .double -0.0012

glabel D_ovl65_80192F80
  /* 5EC0 1117E0 80192F80 */
  .4byte 0xc1966666 # .float -18.8
  .incbin "ovl65.raw.bin", 0x5EC4, 0x4

glabel D_ovl65_80192F88
  /* 5EC8 1117E8 80192F88 */
  .8byte 0x3f947ae147ae147b # .double 0.02

glabel D_ovl65_80192F90
  /* 5ED0 1117F0 80192F90 */
  .8byte 0x3f70624dd2f1a9fc # .double 0.004

glabel D_ovl65_80192F98
  /* 5ED8 1117F8 80192F98 */
  .4byte 0xff7fffff # .float -3.4028235e38
  .incbin "ovl65.raw.bin", 0x5EDC, 0x4
