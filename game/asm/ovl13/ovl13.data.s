.include "macros.inc"

.section .data

# Data Sections
#  801321E0 -> 80133130

  .incbin "ovl13.raw.bin", 0x06E0, 0x8

glabel D_ovl13_801321E8
  .incbin "ovl13.raw.bin", 0x06E8, 0x800

glabel D_ovl13_801329E8
  .incbin "ovl13.raw.bin", 0x0EE8, 0x80

glabel D_ovl13_80132A68
  .incbin "ovl13.raw.bin", 0x0F68, 0x80

glabel D_ovl13_80132AE8
  .incbin "ovl13.raw.bin", 0x0FE8, 0x80

glabel D_ovl13_80132B68
  .incbin "ovl13.raw.bin", 0x1068, 0x1C
  /* 1084 11B3C4 80132B84 */
  .asciz "LLL"
  .balign 4
  .incbin "ovl13.raw.bin", 0x1088, 0x4
  /* 108C 11B3CC 80132B8C */
  .asciz "LLL"
  .balign 4
  .incbin "ovl13.raw.bin", 0x1090, 0x14
  /* 10A4 11B3E4 80132BA4 */  .4byte D_ovl13_801321E8
  .incbin "ovl13.raw.bin", 0x10A8, 0x2C
  /* 10D4 11B414 80132BD4 */  .4byte D_ovl13_801329E8
  .incbin "ovl13.raw.bin", 0x10D8, 0x14
  /* 10EC 11B42C 80132BEC */  .4byte D_ovl13_80132A68
  .incbin "ovl13.raw.bin", 0x10F0, 0x14
  /* 1104 11B444 80132C04 */  .4byte D_ovl13_80132AE8
  .incbin "ovl13.raw.bin", 0x1108, 0xD0

glabel D_ovl13_80132CD8
  /* 11D8 11B518 80132CD8 */
  .asciz "   "
  .balign 4
  /* 11DC 11B51C 80132CDC */
  .asciz "   "
  .balign 4

glabel D_ovl13_80132CE0
  .incbin "ovl13.raw.bin", 0x11E0, 0x8
  /* 11E8 11B528 80132CE8 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl13.raw.bin", 0x11EC, 0x4

glabel D_ovl13_80132CF0
  .incbin "ovl13.raw.bin", 0x11F0, 0x14
  /* 1204 11B544 80132D04 */  .4byte D_ovl13_80132CE0
  .incbin "ovl13.raw.bin", 0x1208, 0x4
  /* 120C 11B54C 80132D0C */  .4byte D_ovl13_80132CD8
  .incbin "ovl13.raw.bin", 0x1210, 0x8

glabel D_ovl13_80132D18
  /* 1218 11B558 80132D18 */
  .asciz "?"
  .balign 4

glabel D_ovl13_80132D1C
  .incbin "ovl13.raw.bin", 0x121C, 0x4

glabel D_ovl13_80132D20
  .incbin "ovl13.raw.bin", 0x1220, 0xC

glabel D_ovl13_80132D2C
  .incbin "ovl13.raw.bin", 0x122C, 0x4

glabel D_ovl13_80132D30
  .incbin "ovl13.raw.bin", 0x1230, 0x4

glabel D_ovl13_80132D34
  .incbin "ovl13.raw.bin", 0x1234, 0x4

glabel D_ovl13_80132D38
  .incbin "ovl13.raw.bin", 0x1238, 0x4

glabel D_ovl13_80132D3C
  .incbin "ovl13.raw.bin", 0x123C, 0x4

glabel D_ovl13_80132D40
  .incbin "ovl13.raw.bin", 0x1240, 0x4

glabel D_ovl13_80132D44
  .incbin "ovl13.raw.bin", 0x1244, 0x4

glabel D_ovl13_80132D48
  .incbin "ovl13.raw.bin", 0x1248, 0x4

glabel D_ovl13_80132D4C
  .incbin "ovl13.raw.bin", 0x124C, 0x4

glabel D_ovl13_80132D50
  .incbin "ovl13.raw.bin", 0x1250, 0x4

glabel D_ovl13_80132D54
  .incbin "ovl13.raw.bin", 0x1254, 0x30

glabel D_ovl13_80132D84
  .incbin "ovl13.raw.bin", 0x1284, 0x4
  /* 1288 11B5C8 80132D88 */  .4byte D_ovl13_80133020
  /* 128C 11B5CC 80132D8C */  .4byte D_ovl13_80133024
  /* 1290 11B5D0 80132D90 */  .4byte D_ovl13_80133028
  /* 1294 11B5D4 80132D94 */  .4byte D_ovl13_8013302C
  /* 1298 11B5D8 80132D98 */  .4byte D_ovl13_80133030

glabel D_ovl13_80132D9C
  /* 129C 11B5DC 80132D9C */  .4byte D_ovl13_80133034
  /* 12A0 11B5E0 80132DA0 */  .4byte D_ovl13_80133040
  /* 12A4 11B5E4 80132DA4 */  .4byte D_ovl13_80133048
  /* 12A8 11B5E8 80132DA8 */  .4byte D_ovl13_80133054
  /* 12AC 11B5EC 80132DAC */  .4byte D_ovl13_8013305C
  /* 12B0 11B5F0 80132DB0 */  .4byte D_ovl13_80133064
  /* 12B4 11B5F4 80132DB4 */  .4byte D_ovl13_8013306C
  /* 12B8 11B5F8 80132DB8 */  .4byte D_ovl13_80133074
  /* 12BC 11B5FC 80132DBC */  .4byte D_ovl13_8013307C
  /* 12C0 11B600 80132DC0 */  .4byte D_ovl13_80133084
  /* 12C4 11B604 80132DC4 */  .4byte D_ovl13_80133090

glabel D_ovl13_80132DC8
  .incbin "ovl13.raw.bin", 0x12C8, 0x8
  /* 12D0 11B610 80132DD0 */  .4byte D_ovl13_80133098
  .incbin "ovl13.raw.bin", 0x12D4, 0x14
  /* 12E8 11B628 80132DE8 */  .4byte func_ovl13_80131BD4
  /* 12EC 11B62C 80132DEC */  .4byte D_ovl13_801330A4
  /* 12F0 11B630 80132DF0 */  .4byte D_ovl13_80132D40
  .incbin "ovl13.raw.bin", 0x12F4, 0x4
  /* 12F8 11B638 80132DF8 */
  .asciz "A "
  .balign 4
  .incbin "ovl13.raw.bin", 0x12FC, 0x8
  /* 1304 11B644 80132E04 */  .4byte func_ovl13_80131BD4
  /* 1308 11B648 80132E08 */  .4byte D_ovl13_801330B0
  /* 130C 11B64C 80132E0C */  .4byte D_ovl13_80132D44
  .incbin "ovl13.raw.bin", 0x1310, 0x10
  /* 1320 11B660 80132E20 */  .4byte func_ovl13_80131C04
  /* 1324 11B664 80132E24 */  .4byte D_ovl13_801330BC
  .incbin "ovl13.raw.bin", 0x1328, 0x14
  /* 133C 11B67C 80132E3C */  .4byte func_ovl13_80131C70
  /* 1340 11B680 80132E40 */  .4byte D_ovl13_801330C8
  /* 1344 11B684 80132E44 */  .4byte D_ovl13_80132D2C
  .incbin "ovl13.raw.bin", 0x1348, 0x4
  /* 134C 11B68C 80132E4C */
  .asciz "A0"
  .balign 4
  .incbin "ovl13.raw.bin", 0x1350, 0x8
  /* 1358 11B698 80132E58 */  .4byte func_ovl13_80131C2C
  /* 135C 11B69C 80132E5C */  .4byte D_ovl13_801330D4
  /* 1360 11B6A0 80132E60 */  .4byte D_ovl13_80132D30
  .incbin "ovl13.raw.bin", 0x1364, 0x10
  /* 1374 11B6B4 80132E74 */  .4byte func_ovl13_80131C50
  /* 1378 11B6B8 80132E78 */  .4byte D_ovl13_801330DC
  .incbin "ovl13.raw.bin", 0x137C, 0x14
  /* 1390 11B6D0 80132E90 */  .4byte func_ovl13_80131CB4
  /* 1394 11B6D4 80132E94 */  .4byte D_ovl13_801330E8
  /* 1398 11B6D8 80132E98 */  .4byte D_ovl13_80132D34
  .incbin "ovl13.raw.bin", 0x139C, 0x4
  /* 13A0 11B6E0 80132EA0 */
  .asciz "B8"
  .balign 4
  .incbin "ovl13.raw.bin", 0x13A4, 0x8
  /* 13AC 11B6EC 80132EAC */  .4byte func_ovl13_80131CB4
  /* 13B0 11B6F0 80132EB0 */  .4byte D_ovl13_801330F0
  /* 13B4 11B6F4 80132EB4 */  .4byte D_ovl13_80132D38
  .incbin "ovl13.raw.bin", 0x13B8, 0x10
  /* 13C8 11B708 80132EC8 */  .4byte func_ovl13_80131C94
  /* 13CC 11B70C 80132ECC */  .4byte D_ovl13_801330FC
  .incbin "ovl13.raw.bin", 0x13D0, 0x14
  /* 13E4 11B724 80132EE4 */  .4byte func_ovl13_80131CE8
  /* 13E8 11B728 80132EE8 */  .4byte D_ovl13_80132D9C
  /* 13EC 11B72C 80132EEC */  .4byte D_ovl13_80132D84
  .incbin "ovl13.raw.bin", 0x13F0, 0x4
  /* 13F4 11B734 80132EF4 */
  .asciz "A "
  .balign 4
  .incbin "ovl13.raw.bin", 0x13F8, 0xC
  /* 1404 11B744 80132F04 */  .4byte D_ovl13_80133108
  /* 1408 11B748 80132F08 */  .4byte D_800A50EC
  .incbin "ovl13.raw.bin", 0x140C, 0x14
  /* 1420 11B760 80132F20 */  .4byte D_ovl13_80133110
  /* 1424 11B764 80132F24 */  .4byte (gSaveData + 0x5e3)
  .incbin "ovl13.raw.bin", 0x1428, 0x14
  /* 143C 11B77C 80132F3C */  .4byte D_ovl13_8013311C
  .incbin "ovl13.raw.bin", 0x1440, 0x14
  /* 1454 11B794 80132F54 */  .4byte func_ovl13_80131BBC
  /* 1458 11B798 80132F58 */  .4byte D_ovl13_80133128
  .incbin "ovl13.raw.bin", 0x145C, 0x10

glabel D_ovl13_80132F6C
  /* 146C 11B7AC 80132F6C */  .4byte D_NF_80392A00
  /* 1470 11B7B0 80132F70 */  .4byte D_NF_803B6900
  /* 1474 11B7B4 80132F74 */  .4byte D_NF_803DA800
  .incbin "ovl13.raw.bin", 0x1478, 0x10

glabel D_ovl13_80132F88
  .incbin "ovl13.raw.bin", 0x1488, 0x4
  /* 148C 11B7CC 80132F8C */  .4byte func_8000A5E4
  /* 1490 11B7D0 80132F90 */  .4byte func_8000A340
  /* 1494 11B7D4 80132F94 */  .4byte D_NF_80133170
  .incbin "ovl13.raw.bin", 0x1498, 0x28
  /* 14C0 11B800 80132FC0 */  .4byte func_ovl13_80131B00
  /* 14C4 11B804 80132FC4 */  .4byte update_contdata
  .incbin "ovl13.raw.bin", 0x14C8, 0x48
  /* 1510 11B850 80133010 */  .4byte func_ovl13_80131FDC
  .incbin "ovl13.raw.bin", 0x1514, 0xC

glabel D_ovl13_80133020
  /* 1520 11B860 80133020 */
  .asciz "FOO"
  .balign 4

glabel D_ovl13_80133024
  /* 1524 11B864 80133024 */
  .asciz "BAR"
  .balign 4

glabel D_ovl13_80133028
  /* 1528 11B868 80133028 */
  .asciz "BAZ"
  .balign 4

glabel D_ovl13_8013302C
  /* 152C 11B86C 8013302C */
  .asciz "POI"
  .balign 4

glabel D_ovl13_80133030
  /* 1530 11B870 80133030 */
  .asciz "QWE"
  .balign 4

glabel D_ovl13_80133034
  /* 1534 11B874 80133034 */
  .asciz "Aeroplane"
  .balign 4

glabel D_ovl13_80133040
  /* 1540 11B880 80133040 */
  .asciz "Check"
  .balign 4

glabel D_ovl13_80133048
  /* 1548 11B888 80133048 */
  .asciz "Gakubuthi"
  .balign 4

glabel D_ovl13_80133054
  /* 1554 11B894 80133054 */
  .asciz "Kannon"
  .balign 4

glabel D_ovl13_8013305C
  /* 155C 11B89C 8013305C */
  .asciz "Star"
  .balign 4

glabel D_ovl13_80133064
  /* 1564 11B8A4 80133064 */
  .asciz "Sudare1"
  .balign 4

glabel D_ovl13_8013306C
  /* 156C 11B8AC 8013306C */
  .asciz "Sudare2"
  .balign 4

glabel D_ovl13_80133074
  /* 1574 11B8B4 80133074 */
  .asciz "Camera"
  .balign 4

glabel D_ovl13_8013307C
  /* 157C 11B8BC 8013307C */
  .asciz "Block"
  .balign 4

glabel D_ovl13_80133084
  /* 1584 11B8C4 80133084 */
  .asciz "RotScale"
  .balign 4

glabel D_ovl13_80133090
  /* 1590 11B8D0 80133090 */
  .asciz "Curtain"
  .balign 4

glabel D_ovl13_80133098
  /* 1598 11B8D8 80133098 */
  .asciz "Continue"
  .balign 4

glabel D_ovl13_801330A4
  /* 15A4 11B8E4 801330A4 */
  .asciz "rumble %3d"
  .balign 4

glabel D_ovl13_801330B0
  /* 15B0 11B8F0 801330B0 */
  .asciz "frame %4d"
  .balign 4

glabel D_ovl13_801330BC
  /* 15BC 11B8FC 801330BC */
  .asciz "STOP RUMBLE"
  .balign 4

glabel D_ovl13_801330C8
  /* 15C8 11B908 801330C8 */
  .asciz "call %3d"
  .balign 4

glabel D_ovl13_801330D4
  /* 15D4 11B914 801330D4 */
  .asciz "fgm %3d"
  .balign 4

glabel D_ovl13_801330DC
  /* 15DC 11B91C 801330DC */
  .asciz "STOP FGM"
  .balign 4

glabel D_ovl13_801330E8
  /* 15E8 11B928 801330E8 */
  .asciz "bgm %3d"
  .balign 4

glabel D_ovl13_801330F0
  /* 15F0 11B930 801330F0 */
  .asciz "effect %3d"
  .balign 4

glabel D_ovl13_801330FC
  /* 15FC 11B93C 801330FC */
  .asciz "STOP BGM"
  .balign 4

glabel D_ovl13_80133108
  /* 1608 11B948 80133108 */
  .asciz "cic %3d"
  .balign 4

glabel D_ovl13_80133110
  /* 1610 11B950 80133110 */
  .asciz "boot %3d"
  .balign 4

glabel D_ovl13_8013311C
  /* 161C 11B95C 8013311C */
  .asciz "TvType %3d"
  .balign 4

glabel D_ovl13_80133128
  /* 1628 11B968 80133128 */
  .asciz "Exit"
  .balign 4
