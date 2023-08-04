.include "macros.inc"

.section .data

# Data Sections
#  80390BE0 -> 803929D0


glabel D_ovl1_80390BE0
  .incbin "ovl1.raw.bin", 0x0800, 0x8

glabel D_ovl1_80390BE8
  .incbin "ovl1.raw.bin", 0x0808, 0x44
  /* 84C 10820C 80390C2C */  .4byte D_unkmulti_801322A0
  .incbin "ovl1.raw.bin", 0x0850, 0x4
  /* 854 108214 80390C34 */  .4byte func_ovl1_8039069C
  .incbin "ovl1.raw.bin", 0x0858, 0x4
  /* 85C 10821C 80390C3C */  .4byte func_ovl1_8039069C
  .incbin "ovl1.raw.bin", 0x0860, 0x20

glabel D_ovl1_80390C60
  .incbin "ovl1.raw.bin", 0x0880, 0x8

glabel D_ovl1_80390C68
  .incbin "ovl1.raw.bin", 0x0888, 0x20

glabel D_ovl1_80390C88
  .incbin "ovl1.raw.bin", 0x08A8, 0x48

glabel D_ovl1_80390CD0
  .incbin "ovl1.raw.bin", 0x08F0, 0x8

glabel D_ovl1_80390CD8
  .incbin "ovl1.raw.bin", 0x08F8, 0x8

glabel D_ovl1_80390CE0
  .incbin "ovl1.raw.bin", 0x0900, 0x20

glabel D_ovl1_80390D00
  .incbin "ovl1.raw.bin", 0x0920, 0x8

glabel D_ovl1_80390D08
  .incbin "ovl1.raw.bin", 0x0928, 0x18

glabel D_ovl1_80390D20
  /* 940 108300 80390D20 */  .4byte D_ovl1_80390C68
  /* 944 108304 80390D24 */  .4byte D_ovl1_80390C88
  /* 948 108308 80390D28 */  .4byte D_ovl1_80390C60
  /* 94C 10830C 80390D2C */  .4byte D_ovl1_80390C60
  /* 950 108310 80390D30 */  .4byte D_ovl1_80390C60
  /* 954 108314 80390D34 */  .4byte D_ovl1_80390CD8
  /* 958 108318 80390D38 */  .4byte D_ovl1_80390CE0
  /* 95C 10831C 80390D3C */  .4byte D_ovl1_80390C60
  /* 960 108320 80390D40 */  .4byte D_ovl1_80390CD0
  /* 964 108324 80390D44 */  .4byte D_ovl1_80390D00
  /* 968 108328 80390D48 */  .4byte D_ovl1_80390C60
  /* 96C 10832C 80390D4C */  .4byte D_ovl1_80390C60
  /* 970 108330 80390D50 */  .4byte D_ovl1_80390D08
  /* 974 108334 80390D54 */  .4byte D_ovl1_80390C60
  /* 978 108338 80390D58 */  .4byte D_ovl1_80390C60
  /* 97C 10833C 80390D5C */  .4byte D_ovl1_80390C60
  /* 980 108340 80390D60 */  .4byte D_ovl1_80390C60
  /* 984 108344 80390D64 */  .4byte D_ovl1_80390C60
  /* 988 108348 80390D68 */  .4byte D_ovl1_80390C60
  /* 98C 10834C 80390D6C */  .4byte D_ovl1_80390C60
  /* 990 108350 80390D70 */  .4byte D_ovl1_80390C60
  /* 994 108354 80390D74 */  .4byte D_ovl1_80390C60
  /* 998 108358 80390D78 */  .4byte D_ovl1_80390C60
  /* 99C 10835C 80390D7C */  .4byte D_ovl1_80390C60
  /* 9A0 108360 80390D80 */  .4byte D_ovl1_80390C60
  /* 9A4 108364 80390D84 */  .4byte D_ovl1_80390C60
  /* 9A8 108368 80390D88 */  .4byte D_ovl1_80390C60
  .incbin "ovl1.raw.bin", 0x09AC, 0x4

glabel D_ovl1_80390D90
  .incbin "ovl1.raw.bin", 0x09B0, 0x30

glabel D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x09E0, 0x24

glabel D_ovl1_80390DE4
  .incbin "ovl1.raw.bin", 0x0A04, 0x8
  /* A0C 1083CC 80390DEC */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A10, 0x8
  /* A18 1083D8 80390DF8 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A1C, 0x8
  /* A24 1083E4 80390E04 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A28, 0x8
  /* A30 1083F0 80390E10 */  .4byte D_ovl1_80390DE4

glabel D_ovl1_80390E14
  .incbin "ovl1.raw.bin", 0x0A34, 0x8
  /* A3C 1083FC 80390E1C */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A40, 0xC
  /* A4C 10840C 80390E2C */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A50, 0x4

glabel D_ovl1_80390E34
  .incbin "ovl1.raw.bin", 0x0A54, 0x8
  /* A5C 10841C 80390E3C */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A60, 0x8
  /* A68 108428 80390E48 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A6C, 0x4

glabel D_ovl1_80390E50
  .incbin "ovl1.raw.bin", 0x0A70, 0x8
  /* A78 108438 80390E58 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A7C, 0xC
  /* A88 108448 80390E68 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0A8C, 0x4

glabel D_ovl1_80390E70
  .incbin "ovl1.raw.bin", 0x0A90, 0xC

glabel D_ovl1_80390E7C
  .incbin "ovl1.raw.bin", 0x0A9C, 0x8
  /* AA4 108464 80390E84 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0AA8, 0x8
  /* AB0 108470 80390E90 */  .4byte D_ovl1_80390DC0
  .incbin "ovl1.raw.bin", 0x0AB4, 0x8
  /* ABC 10847C 80390E9C */  .4byte D_ovl1_80390E7C

glabel D_ovl1_80390EA0
  .incbin "ovl1.raw.bin", 0x0AC0, 0x4
  /* AC4 108484 80390EA4 */  .4byte D_ovl1_80390DE4
  .incbin "ovl1.raw.bin", 0x0AC8, 0x8
  /* AD0 108490 80390EB0 */  .4byte D_ovl1_80390E14
  .incbin "ovl1.raw.bin", 0x0AD4, 0x8
  /* ADC 10849C 80390EBC */  .4byte D_ovl1_80390E34
  .incbin "ovl1.raw.bin", 0x0AE0, 0x14
  /* AF4 1084B4 80390ED4 */  .4byte D_ovl1_80390E50
  .incbin "ovl1.raw.bin", 0x0AF8, 0x8
  /* B00 1084C0 80390EE0 */  .4byte D_ovl1_80390E70
  .incbin "ovl1.raw.bin", 0x0B04, 0x30
  /* B34 1084F4 80390F14 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0B38, 0x8
  /* B40 108500 80390F20 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0B44, 0x34
  /* B78 108538 80390F58 */  .4byte D_ovl1_80390E7C
  .incbin "ovl1.raw.bin", 0x0B7C, 0xC
  /* B88 108548 80390F68 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0B8C, 0x18

glabel D_ovl1_80390F84
  .incbin "ovl1.raw.bin", 0x0BA4, 0xC

glabel D_ovl1_80390F90
  .incbin "ovl1.raw.bin", 0x0BB0, 0xB4

glabel D_ovl1_80391044
  .incbin "ovl1.raw.bin", 0x0C64, 0xC

glabel D_ovl1_80391050
  .incbin "ovl1.raw.bin", 0x0C70, 0xB4

glabel D_ovl1_80391104
  .incbin "ovl1.raw.bin", 0x0D24, 0xC

glabel D_ovl1_80391110
  .incbin "ovl1.raw.bin", 0x0D30, 0x14

glabel D_ovl1_80391124
  .incbin "ovl1.raw.bin", 0x0D44, 0x10

glabel D_ovl1_80391134
  .incbin "ovl1.raw.bin", 0x0D54, 0xC

glabel D_ovl1_80391140
  .incbin "ovl1.raw.bin", 0x0D60, 0xC

glabel D_ovl1_8039114C
  .incbin "ovl1.raw.bin", 0x0D6C, 0x8

glabel D_ovl1_80391154
  .incbin "ovl1.raw.bin", 0x0D74, 0x10
  /* D84 108744 80391164 */  .4byte D_ovl1_80391110
  .incbin "ovl1.raw.bin", 0x0D88, 0x8
  /* D90 108750 80391170 */  .4byte D_ovl1_80391124
  .incbin "ovl1.raw.bin", 0x0D94, 0x8
  /* D9C 10875C 8039117C */  .4byte D_ovl1_80391134
  .incbin "ovl1.raw.bin", 0x0DA0, 0x8
  /* DA8 108768 80391188 */  .4byte D_ovl1_80391134
  .incbin "ovl1.raw.bin", 0x0DAC, 0x8
  /* DB4 108774 80391194 */  .4byte D_ovl1_80391140
  .incbin "ovl1.raw.bin", 0x0DB8, 0x30
  /* DE8 1087A8 803911C8 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0DEC, 0x8
  /* DF4 1087B4 803911D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0DF8, 0x1C
  /* E14 1087D4 803911F4 */  .4byte D_ovl1_8039114C
  .incbin "ovl1.raw.bin", 0x0E18, 0x8
  /* E20 1087E0 80391200 */  .4byte D_ovl1_8039114C
  .incbin "ovl1.raw.bin", 0x0E24, 0x70

glabel D_ovl1_80391274
  .incbin "ovl1.raw.bin", 0x0E94, 0xC

glabel D_ovl1_80391280
  .incbin "ovl1.raw.bin", 0x0EA0, 0xB4

glabel D_ovl1_80391334
  .incbin "ovl1.raw.bin", 0x0F54, 0xC

glabel D_ovl1_80391340
  .incbin "ovl1.raw.bin", 0x0F60, 0x8

glabel D_ovl1_80391348
  .incbin "ovl1.raw.bin", 0x0F68, 0x4

glabel D_ovl1_8039134C
  .incbin "ovl1.raw.bin", 0x0F6C, 0x4

glabel D_ovl1_80391350
  .incbin "ovl1.raw.bin", 0x0F70, 0xC

glabel D_ovl1_8039135C
  .incbin "ovl1.raw.bin", 0x0F7C, 0x10
  /* F8C 10894C 8039136C */  .4byte D_ovl1_80391340
  .incbin "ovl1.raw.bin", 0x0F90, 0x8
  /* F98 108958 80391378 */  .4byte D_ovl1_80391348
  .incbin "ovl1.raw.bin", 0x0F9C, 0x14
  /* FB0 108970 80391390 */  .4byte D_ovl1_8039134C
  .incbin "ovl1.raw.bin", 0x0FB4, 0x8
  /* FBC 10897C 8039139C */  .4byte D_ovl1_80391350
  .incbin "ovl1.raw.bin", 0x0FC0, 0x30
  /* FF0 1089B0 803913D0 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x0FF4, 0x8
  /* FFC 1089BC 803913DC */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1000, 0x30

glabel D_ovl1_80391410
  .incbin "ovl1.raw.bin", 0x1030, 0x10

glabel D_ovl1_80391420
  .incbin "ovl1.raw.bin", 0x1040, 0xB4

glabel D_ovl1_803914D4
  .incbin "ovl1.raw.bin", 0x10F4, 0xC

glabel D_ovl1_803914E0
  .incbin "ovl1.raw.bin", 0x1100, 0xC

glabel D_ovl1_803914EC
  .incbin "ovl1.raw.bin", 0x110C, 0x4

glabel D_ovl1_803914F0
  .incbin "ovl1.raw.bin", 0x1110, 0x5C

glabel D_ovl1_8039154C
  .incbin "ovl1.raw.bin", 0x116C, 0x20

glabel D_ovl1_8039156C
  .incbin "ovl1.raw.bin", 0x118C, 0xC

glabel D_ovl1_80391578
  .incbin "ovl1.raw.bin", 0x1198, 0x8

glabel D_ovl1_80391580
  .incbin "ovl1.raw.bin", 0x11A0, 0x10
  /* 11B0 108B70 80391590 */  .4byte D_ovl1_803914F0
  .incbin "ovl1.raw.bin", 0x11B4, 0x8
  /* 11BC 108B7C 8039159C */  .4byte D_ovl1_8039154C
  .incbin "ovl1.raw.bin", 0x11C0, 0x8
  /* 11C8 108B88 803915A8 */  .4byte D_ovl1_8039156C
  .incbin "ovl1.raw.bin", 0x11CC, 0x8
  /* 11D4 108B94 803915B4 */  .4byte D_ovl1_8039156C
  .incbin "ovl1.raw.bin", 0x11D8, 0x8
  /* 11E0 108BA0 803915C0 */  .4byte D_ovl1_80391578
  .incbin "ovl1.raw.bin", 0x11E4, 0x30
  /* 1214 108BD4 803915F4 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1218, 0x8
  /* 1220 108BE0 80391600 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1224, 0x30

glabel D_ovl1_80391634
  .incbin "ovl1.raw.bin", 0x1254, 0xC

glabel D_ovl1_80391640
  .incbin "ovl1.raw.bin", 0x1260, 0xB4

glabel D_ovl1_803916F4
  .incbin "ovl1.raw.bin", 0x1314, 0xC

glabel D_ovl1_80391700
  .incbin "ovl1.raw.bin", 0x1320, 0x24

glabel D_ovl1_80391724
  .incbin "ovl1.raw.bin", 0x1344, 0x8
  /* 134C 108D0C 8039172C */  .4byte D_ovl1_80391700
  .incbin "ovl1.raw.bin", 0x1350, 0x8
  /* 1358 108D18 80391738 */  .4byte D_ovl1_80391700
  .incbin "ovl1.raw.bin", 0x135C, 0x8
  /* 1364 108D24 80391744 */  .4byte D_ovl1_80391700
  .incbin "ovl1.raw.bin", 0x1368, 0x8
  /* 1370 108D30 80391750 */  .4byte D_ovl1_80391724

glabel D_ovl1_80391754
  .incbin "ovl1.raw.bin", 0x1374, 0x44

glabel D_ovl1_80391798
  .incbin "ovl1.raw.bin", 0x13B8, 0x8

glabel D_ovl1_803917A0
  .incbin "ovl1.raw.bin", 0x13C0, 0x14

glabel D_ovl1_803917B4
  .incbin "ovl1.raw.bin", 0x13D4, 0x8

glabel D_ovl1_803917BC
  .incbin "ovl1.raw.bin", 0x13DC, 0x4
  /* 13E0 108DA0 803917C0 */  .4byte D_ovl1_80391724
  .incbin "ovl1.raw.bin", 0x13E4, 0x8
  /* 13EC 108DAC 803917CC */  .4byte D_ovl1_80391754
  .incbin "ovl1.raw.bin", 0x13F0, 0x8
  /* 13F8 108DB8 803917D8 */  .4byte D_ovl1_80391798
  .incbin "ovl1.raw.bin", 0x13FC, 0x14
  /* 1410 108DD0 803917F0 */  .4byte D_ovl1_803917A0
  .incbin "ovl1.raw.bin", 0x1414, 0x74
  /* 1488 108E48 80391868 */  .4byte D_ovl1_803917B4
  .incbin "ovl1.raw.bin", 0x148C, 0x4

glabel D_ovl1_80391870
  .incbin "ovl1.raw.bin", 0x1490, 0x10

glabel D_ovl1_80391880
  .incbin "ovl1.raw.bin", 0x14A0, 0xC

glabel D_ovl1_8039188C
  .incbin "ovl1.raw.bin", 0x14AC, 0x4

glabel D_ovl1_80391890
  .incbin "ovl1.raw.bin", 0x14B0, 0x14

glabel D_ovl1_803918A4
  .incbin "ovl1.raw.bin", 0x14C4, 0x4
  /* 14C8 108E88 803918A8 */  .4byte D_ovl1_80391890
  .incbin "ovl1.raw.bin", 0x14CC, 0x8
  /* 14D4 108E94 803918B4 */  .4byte D_ovl1_80391890
  .incbin "ovl1.raw.bin", 0x14D8, 0x8
  /* 14E0 108EA0 803918C0 */  .4byte D_ovl1_80391890
  .incbin "ovl1.raw.bin", 0x14E4, 0x8
  /* 14EC 108EAC 803918CC */  .4byte D_ovl1_803918A4

glabel D_ovl1_803918D0
  .incbin "ovl1.raw.bin", 0x14F0, 0x4C

glabel D_ovl1_8039191C
  .incbin "ovl1.raw.bin", 0x153C, 0x38

glabel D_ovl1_80391954
  .incbin "ovl1.raw.bin", 0x1574, 0x24

glabel D_ovl1_80391978
  .incbin "ovl1.raw.bin", 0x1598, 0x14

glabel D_ovl1_8039198C
  .incbin "ovl1.raw.bin", 0x15AC, 0x18

glabel D_ovl1_803919A4
  .incbin "ovl1.raw.bin", 0x15C4, 0x48

glabel D_ovl1_803919EC
  .incbin "ovl1.raw.bin", 0x160C, 0x14

glabel D_ovl1_80391A00
  .incbin "ovl1.raw.bin", 0x1620, 0x4
  /* 1624 108FE4 80391A04 */  .4byte D_ovl1_803918A4
  .incbin "ovl1.raw.bin", 0x1628, 0x8
  /* 1630 108FF0 80391A10 */  .4byte D_ovl1_803918D0
  .incbin "ovl1.raw.bin", 0x1634, 0x8
  /* 163C 108FFC 80391A1C */  .4byte D_ovl1_8039191C
  .incbin "ovl1.raw.bin", 0x1640, 0x8
  /* 1648 109008 80391A28 */  .4byte D_ovl1_80391954
  .incbin "ovl1.raw.bin", 0x164C, 0x8
  /* 1654 109014 80391A34 */  .4byte D_ovl1_80391954
  .incbin "ovl1.raw.bin", 0x1658, 0x8
  /* 1660 109020 80391A40 */  .4byte D_ovl1_80391978
  .incbin "ovl1.raw.bin", 0x1664, 0x14
  /* 1678 109038 80391A58 */  .4byte D_ovl1_8039198C
  .incbin "ovl1.raw.bin", 0x167C, 0x18
  /* 1694 109054 80391A74 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1698, 0x8
  /* 16A0 109060 80391A80 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x16A4, 0x1C
  /* 16C0 109080 80391AA0 */  .4byte D_ovl1_803919EC
  .incbin "ovl1.raw.bin", 0x16C4, 0x8
  /* 16CC 10908C 80391AAC */  .4byte D_ovl1_803919EC
  .incbin "ovl1.raw.bin", 0x16D0, 0x8
  /* 16D8 109098 80391AB8 */  .4byte D_ovl1_803919A4
  .incbin "ovl1.raw.bin", 0x16DC, 0x4

glabel D_ovl1_80391AC0
  .incbin "ovl1.raw.bin", 0x16E0, 0x10

glabel D_ovl1_80391AD0
  .incbin "ovl1.raw.bin", 0x16F0, 0xB4

glabel D_ovl1_80391B84
  .incbin "ovl1.raw.bin", 0x17A4, 0xC

glabel D_ovl1_80391B90
  .incbin "ovl1.raw.bin", 0x17B0, 0x34

glabel D_ovl1_80391BC4
  .incbin "ovl1.raw.bin", 0x17E4, 0x4
  /* 17E8 1091A8 80391BC8 */  .4byte D_ovl1_80391B90
  .incbin "ovl1.raw.bin", 0x17EC, 0x8
  /* 17F4 1091B4 80391BD4 */  .4byte D_ovl1_80391B90
  .incbin "ovl1.raw.bin", 0x17F8, 0x8
  /* 1800 1091C0 80391BE0 */  .4byte D_ovl1_80391B90
  .incbin "ovl1.raw.bin", 0x1804, 0x8
  /* 180C 1091CC 80391BEC */  .4byte D_ovl1_80391BC4

glabel D_ovl1_80391BF0
  .incbin "ovl1.raw.bin", 0x1810, 0x18

glabel D_ovl1_80391C08
  .incbin "ovl1.raw.bin", 0x1828, 0x20

glabel D_ovl1_80391C28
  .incbin "ovl1.raw.bin", 0x1848, 0x38

glabel D_ovl1_80391C60
  .incbin "ovl1.raw.bin", 0x1880, 0x4

glabel D_ovl1_80391C64
  .incbin "ovl1.raw.bin", 0x1884, 0x3C

glabel D_ovl1_80391CA0
  .incbin "ovl1.raw.bin", 0x18C0, 0x4
  /* 18C4 109284 80391CA4 */  .4byte D_ovl1_80391BC4
  .incbin "ovl1.raw.bin", 0x18C8, 0x8
  /* 18D0 109290 80391CB0 */  .4byte D_ovl1_80391BF0
  .incbin "ovl1.raw.bin", 0x18D4, 0x8
  /* 18DC 10929C 80391CBC */  .4byte D_ovl1_80391C08
  .incbin "ovl1.raw.bin", 0x18E0, 0x8
  /* 18E8 1092A8 80391CC8 */  .4byte D_ovl1_80391C28
  .incbin "ovl1.raw.bin", 0x18EC, 0x8
  /* 18F4 1092B4 80391CD4 */  .4byte D_ovl1_80391C28
  .incbin "ovl1.raw.bin", 0x18F8, 0x8
  /* 1900 1092C0 80391CE0 */  .4byte D_ovl1_80391C60
  .incbin "ovl1.raw.bin", 0x1904, 0x30
  /* 1934 1092F4 80391D14 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1938, 0x8
  /* 1940 109300 80391D20 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1944, 0x34
  /* 1978 109338 80391D58 */  .4byte D_ovl1_80391C64
  .incbin "ovl1.raw.bin", 0x197C, 0x28

glabel D_ovl1_80391D84
  .incbin "ovl1.raw.bin", 0x19A4, 0xC

glabel D_ovl1_80391D90
  .incbin "ovl1.raw.bin", 0x19B0, 0xB4

glabel D_ovl1_80391E44
  .incbin "ovl1.raw.bin", 0x1A64, 0xC

glabel D_ovl1_80391E50
  .incbin "ovl1.raw.bin", 0x1A70, 0xC

glabel D_ovl1_80391E5C
  .incbin "ovl1.raw.bin", 0x1A7C, 0x14

glabel D_ovl1_80391E70
  .incbin "ovl1.raw.bin", 0x1A90, 0x14

glabel D_ovl1_80391E84
  .incbin "ovl1.raw.bin", 0x1AA4, 0x4

glabel D_ovl1_80391E88
  .incbin "ovl1.raw.bin", 0x1AA8, 0x8

glabel D_ovl1_80391E90
  .incbin "ovl1.raw.bin", 0x1AB0, 0x10
  /* 1AC0 109480 80391EA0 */  .4byte D_ovl1_80391E50
  .incbin "ovl1.raw.bin", 0x1AC4, 0x8
  /* 1ACC 10948C 80391EAC */  .4byte D_ovl1_80391E5C
  .incbin "ovl1.raw.bin", 0x1AD0, 0x8
  /* 1AD8 109498 80391EB8 */  .4byte D_ovl1_80391E70
  .incbin "ovl1.raw.bin", 0x1ADC, 0x8
  /* 1AE4 1094A4 80391EC4 */  .4byte D_ovl1_80391E70
  .incbin "ovl1.raw.bin", 0x1AE8, 0x8
  /* 1AF0 1094B0 80391ED0 */  .4byte D_ovl1_80391E84
  .incbin "ovl1.raw.bin", 0x1AF4, 0x30
  /* 1B24 1094E4 80391F04 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1B28, 0x8
  /* 1B30 1094F0 80391F10 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1B34, 0x1C
  /* 1B50 109510 80391F30 */  .4byte D_ovl1_80391E88
  .incbin "ovl1.raw.bin", 0x1B54, 0x10

glabel D_ovl1_80391F44
  .incbin "ovl1.raw.bin", 0x1B64, 0xC

glabel D_ovl1_80391F50
  .incbin "ovl1.raw.bin", 0x1B70, 0xB4

glabel D_ovl1_80392004
  .incbin "ovl1.raw.bin", 0x1C24, 0xC

glabel D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1C30, 0x10

glabel D_ovl1_80392020
  .incbin "ovl1.raw.bin", 0x1C40, 0x4
  /* 1C44 109604 80392024 */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1C48, 0x8
  /* 1C50 109610 80392030 */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1C54, 0x8
  /* 1C5C 10961C 8039203C */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1C60, 0x18
  /* 1C78 109638 80392058 */  .4byte D_ovl1_80392020

glabel D_ovl1_8039205C
  .incbin "ovl1.raw.bin", 0x1C7C, 0xC

glabel D_ovl1_80392068
  .incbin "ovl1.raw.bin", 0x1C88, 0xC

glabel D_ovl1_80392074
  .incbin "ovl1.raw.bin", 0x1C94, 0xC

glabel D_ovl1_80392080
  .incbin "ovl1.raw.bin", 0x1CA0, 0x8

glabel D_ovl1_80392088
  .incbin "ovl1.raw.bin", 0x1CA8, 0x4
  /* 1CAC 10966C 8039208C */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1CB0, 0x8
  /* 1CB8 109678 80392098 */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1CBC, 0x8
  /* 1CC4 109684 803920A4 */  .4byte D_ovl1_80392010
  .incbin "ovl1.raw.bin", 0x1CC8, 0x8
  /* 1CD0 109690 803920B0 */  .4byte D_ovl1_80392088

glabel D_ovl1_803920B4
  .incbin "ovl1.raw.bin", 0x1CD4, 0x4
  /* 1CD8 109698 803920B8 */  .4byte D_ovl1_80392020
  .incbin "ovl1.raw.bin", 0x1CDC, 0x8
  /* 1CE4 1096A4 803920C4 */  .4byte D_ovl1_8039205C
  .incbin "ovl1.raw.bin", 0x1CE8, 0x8
  /* 1CF0 1096B0 803920D0 */  .4byte D_ovl1_80392068
  .incbin "ovl1.raw.bin", 0x1CF4, 0x8
  /* 1CFC 1096BC 803920DC */  .4byte D_ovl1_80392074
  .incbin "ovl1.raw.bin", 0x1D00, 0x8
  /* 1D08 1096C8 803920E8 */  .4byte D_ovl1_80392074
  .incbin "ovl1.raw.bin", 0x1D0C, 0x8
  /* 1D14 1096D4 803920F4 */  .4byte D_ovl1_80392080
  .incbin "ovl1.raw.bin", 0x1D18, 0x30
  /* 1D48 109708 80392128 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1D4C, 0x8
  /* 1D54 109714 80392134 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1D58, 0x34
  /* 1D8C 10974C 8039216C */  .4byte D_ovl1_80392088
  .incbin "ovl1.raw.bin", 0x1D90, 0x4

glabel D_ovl1_80392174
  .incbin "ovl1.raw.bin", 0x1D94, 0xC

glabel D_ovl1_80392180
  .incbin "ovl1.raw.bin", 0x1DA0, 0xB4

glabel D_ovl1_80392234
  .incbin "ovl1.raw.bin", 0x1E54, 0xC

glabel D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1E60, 0x10

glabel D_ovl1_80392250
  .incbin "ovl1.raw.bin", 0x1E70, 0x4
  /* 1E74 109834 80392254 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1E78, 0x8
  /* 1E80 109840 80392260 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1E84, 0x8
  /* 1E8C 10984C 8039226C */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1E90, 0x8
  /* 1E98 109858 80392278 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1E9C, 0x8
  /* 1EA4 109864 80392284 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1EA8, 0x8
  /* 1EB0 109870 80392290 */  .4byte D_ovl1_80392250

glabel D_ovl1_80392294
  .incbin "ovl1.raw.bin", 0x1EB4, 0x4

glabel D_ovl1_80392298
  .incbin "ovl1.raw.bin", 0x1EB8, 0x4

glabel D_ovl1_8039229C
  .incbin "ovl1.raw.bin", 0x1EBC, 0x10

glabel D_ovl1_803922AC
  .incbin "ovl1.raw.bin", 0x1ECC, 0xC
  /* 1ED8 109898 803922B8 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1EDC, 0x10
  /* 1EEC 1098AC 803922CC */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1EF0, 0x10
  /* 1F00 1098C0 803922E0 */  .4byte D_ovl1_80392240
  .incbin "ovl1.raw.bin", 0x1F04, 0xC

glabel D_ovl1_803922F0
  .incbin "ovl1.raw.bin", 0x1F10, 0x4
  /* 1F14 1098D4 803922F4 */  .4byte D_ovl1_80392250
  .incbin "ovl1.raw.bin", 0x1F18, 0x8
  /* 1F20 1098E0 80392300 */  .4byte D_ovl1_80392294
  .incbin "ovl1.raw.bin", 0x1F24, 0x8
  /* 1F2C 1098EC 8039230C */  .4byte D_ovl1_80392298
  .incbin "ovl1.raw.bin", 0x1F30, 0x8
  /* 1F38 1098F8 80392318 */  .4byte D_ovl1_8039229C
  .incbin "ovl1.raw.bin", 0x1F3C, 0x8
  /* 1F44 109904 80392324 */  .4byte D_ovl1_8039229C
  .incbin "ovl1.raw.bin", 0x1F48, 0x3C
  /* 1F84 109944 80392364 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1F88, 0x8
  /* 1F90 109950 80392370 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x1F94, 0x34
  /* 1FC8 109988 803923A8 */  .4byte D_ovl1_803922AC
  .incbin "ovl1.raw.bin", 0x1FCC, 0x4

glabel D_ovl1_803923B0
  .incbin "ovl1.raw.bin", 0x1FD0, 0x10

glabel D_ovl1_803923C0
  .incbin "ovl1.raw.bin", 0x1FE0, 0xB4

glabel D_ovl1_80392474
  .incbin "ovl1.raw.bin", 0x2094, 0xC

glabel D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x20A0, 0x34

glabel D_ovl1_803924B4
  .incbin "ovl1.raw.bin", 0x20D4, 0x4
  /* 20D8 109A98 803924B8 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x20DC, 0x8
  /* 20E4 109AA4 803924C4 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x20E8, 0x8
  /* 20F0 109AB0 803924D0 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x20F4, 0x8
  /* 20FC 109ABC 803924DC */  .4byte D_ovl1_803924B4

glabel D_ovl1_803924E0
  .incbin "ovl1.raw.bin", 0x2100, 0x8
  /* 2108 109AC8 803924E8 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x210C, 0x8
  /* 2114 109AD4 803924F4 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2118, 0x8
  /* 2120 109AE0 80392500 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2124, 0x4

glabel D_ovl1_80392508
  .incbin "ovl1.raw.bin", 0x2128, 0x8
  /* 2130 109AF0 80392510 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2134, 0x8
  /* 213C 109AFC 8039251C */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2140, 0x8
  /* 2148 109B08 80392528 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x214C, 0x8
  /* 2154 109B14 80392534 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2158, 0x8
  /* 2160 109B20 80392540 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2164, 0x4

glabel D_ovl1_80392548
  .incbin "ovl1.raw.bin", 0x2168, 0x28
  /* 2190 109B50 80392570 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x2194, 0x8
  /* 219C 109B5C 8039257C */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x21A0, 0x4

glabel D_ovl1_80392584
  .incbin "ovl1.raw.bin", 0x21A4, 0x4
  /* 21A8 109B68 80392588 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x21AC, 0x8
  /* 21B4 109B74 80392594 */  .4byte D_ovl1_80392480
  .incbin "ovl1.raw.bin", 0x21B8, 0x8

glabel D_ovl1_803925A0
  .incbin "ovl1.raw.bin", 0x21C0, 0x4
  /* 21C4 109B84 803925A4 */  .4byte D_ovl1_803924B4
  .incbin "ovl1.raw.bin", 0x21C8, 0x8
  /* 21D0 109B90 803925B0 */  .4byte D_ovl1_803924E0
  .incbin "ovl1.raw.bin", 0x21D4, 0x8
  /* 21DC 109B9C 803925BC */  .4byte D_ovl1_80392508
  .incbin "ovl1.raw.bin", 0x21E0, 0x8
  /* 21E8 109BA8 803925C8 */  .4byte D_ovl1_80392548
  .incbin "ovl1.raw.bin", 0x21EC, 0x8
  /* 21F4 109BB4 803925D4 */  .4byte D_ovl1_80392548
  .incbin "ovl1.raw.bin", 0x21F8, 0x8
  /* 2200 109BC0 803925E0 */  .4byte D_ovl1_80392584
  .incbin "ovl1.raw.bin", 0x2204, 0x30
  /* 2234 109BF4 80392614 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x2238, 0x8
  /* 2240 109C00 80392620 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x2244, 0x30

glabel D_ovl1_80392654
  .incbin "ovl1.raw.bin", 0x2274, 0xC

glabel D_ovl1_80392660
  .incbin "ovl1.raw.bin", 0x2280, 0xC

glabel D_ovl1_8039266C
  .incbin "ovl1.raw.bin", 0x228C, 0x4

glabel D_ovl1_80392670
  .incbin "ovl1.raw.bin", 0x2290, 0x24

glabel D_ovl1_80392694
  .incbin "ovl1.raw.bin", 0x22B4, 0x8
  /* 22BC 109C7C 8039269C */  .4byte D_ovl1_80392670
  .incbin "ovl1.raw.bin", 0x22C0, 0xC
  /* 22CC 109C8C 803926AC */  .4byte D_ovl1_80392670
  .incbin "ovl1.raw.bin", 0x22D0, 0x8
  /* 22D8 109C98 803926B8 */  .4byte D_ovl1_80392670
  .incbin "ovl1.raw.bin", 0x22DC, 0x8
  /* 22E4 109CA4 803926C4 */  .4byte D_ovl1_80392694

glabel D_ovl1_803926C8
  .incbin "ovl1.raw.bin", 0x22E8, 0x58

glabel D_ovl1_80392720
  .incbin "ovl1.raw.bin", 0x2340, 0xC

glabel D_ovl1_8039272C
  .incbin "ovl1.raw.bin", 0x234C, 0x24

glabel D_ovl1_80392750
  .incbin "ovl1.raw.bin", 0x2370, 0x4

glabel D_ovl1_80392754
  .incbin "ovl1.raw.bin", 0x2374, 0xC

glabel D_ovl1_80392760
  .incbin "ovl1.raw.bin", 0x2380, 0x4
  /* 2384 109D44 80392764 */  .4byte D_ovl1_80392694
  .incbin "ovl1.raw.bin", 0x2388, 0x8
  /* 2390 109D50 80392770 */  .4byte D_ovl1_803926C8
  .incbin "ovl1.raw.bin", 0x2394, 0x8
  /* 239C 109D5C 8039277C */  .4byte D_ovl1_80392720
  .incbin "ovl1.raw.bin", 0x23A0, 0x8
  /* 23A8 109D68 80392788 */  .4byte D_ovl1_8039272C
  .incbin "ovl1.raw.bin", 0x23AC, 0x8
  /* 23B4 109D74 80392794 */  .4byte D_ovl1_8039272C
  .incbin "ovl1.raw.bin", 0x23B8, 0x8
  /* 23C0 109D80 803927A0 */  .4byte D_ovl1_80392750
  .incbin "ovl1.raw.bin", 0x23C4, 0x30
  /* 23F4 109DB4 803927D4 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x23F8, 0x8
  /* 2400 109DC0 803927E0 */
  .asciz "@"
  .balign 4
  .incbin "ovl1.raw.bin", 0x2404, 0x1C
  /* 2420 109DE0 80392800 */  .4byte D_ovl1_80392754
  .incbin "ovl1.raw.bin", 0x2424, 0x10

glabel D_ovl1_80392814
  .incbin "ovl1.raw.bin", 0x2434, 0xC

glabel D_ovl1_80392820
  .incbin "ovl1.raw.bin", 0x2440, 0xB4

glabel D_ovl1_803928D4
  .incbin "ovl1.raw.bin", 0x24F4, 0xC

glabel D_ovl1_803928E0
  .incbin "ovl1.raw.bin", 0x2500, 0x8

glabel D_ovl1_803928E8
  .incbin "ovl1.raw.bin", 0x2508, 0xC4
  /* 25CC 109F8C 803929AC */  .4byte D_ovl1_803928E0
  .incbin "ovl1.raw.bin", 0x25D0, 0x10

glabel D_ovl1_803929C0
  .incbin "ovl1.raw.bin", 0x25E0, 0x10
