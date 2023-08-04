.include "macros.inc"

.section .data

# Data Sections
#  80190770 -> 80190960

  .incbin "ovl7.raw.bin", 0x36B0, 0x48

glabel D_ovl7_801907B8
  .incbin "ovl7.raw.bin", 0x36F8, 0x24

glabel D_ovl7_801907DC
  .incbin "ovl7.raw.bin", 0x371C, 0x6

glabel D_ovl7_801907E2
  .incbin "ovl7.raw.bin", 0x3722, 0x2

glabel D_ovl7_801907E4
  .incbin "ovl7.raw.bin", 0x3724, 0x4

glabel D_ovl7_801907E8
  .incbin "ovl7.raw.bin", 0x3728, 0x4

glabel D_ovl7_801907EC
  .incbin "ovl7.raw.bin", 0x372C, 0x4

glabel jtbl_ovl7_801907F0
  /* 3730 117010 801907F0 */  .4byte jtgt_ovl7_8018D478
  /* 3734 117014 801907F4 */  .4byte jtgt_ovl7_8018D518
  /* 3738 117018 801907F8 */  .4byte jtgt_ovl7_8018D684
  /* 373C 11701C 801907FC */  .4byte jtgt_ovl7_8018D6DC
  /* 3740 117020 80190800 */  .4byte jtgt_ovl7_8018D7B8
  /* 3744 117024 80190804 */  .4byte jtgt_ovl7_8018D830

glabel D_ovl7_80190808
  .incbin "ovl7.raw.bin", 0x3748, 0x14

glabel D_ovl7_8019081C
  .incbin "ovl7.raw.bin", 0x375C, 0x1

glabel D_ovl7_8019081D
  .incbin "ovl7.raw.bin", 0x375D, 0x7

glabel D_ovl7_80190824
  .incbin "ovl7.raw.bin", 0x3764, 0x4

glabel D_ovl7_80190828
  .incbin "ovl7.raw.bin", 0x3768, 0x20

glabel D_ovl7_80190848
  .incbin "ovl7.raw.bin", 0x3788, 0x24

glabel D_ovl7_8019086C
  .incbin "ovl7.raw.bin", 0x37AC, 0x4

glabel D_ovl7_80190870
  /* 37B0 117090 80190870 */  .4byte D_NF_80392A00
  /* 37B4 117094 80190874 */  .4byte D_NF_803B6900
  /* 37B8 117098 80190878 */  .4byte D_NF_803DA800
  .incbin "ovl7.raw.bin", 0x37BC, 0x10

glabel D_ovl7_8019088C
  .incbin "ovl7.raw.bin", 0x37CC, 0x4
  /* 37D0 1170B0 80190890 */  .4byte func_ovl7_8018DA78
  /* 37D4 1170B4 80190894 */  .4byte func_800A26B8
  /* 37D8 1170B8 80190898 */  .4byte D_NF_80190FA0
  .incbin "ovl7.raw.bin", 0x37DC, 0x28
  /* 3804 1170E4 801908C4 */  .4byte func_ovl7_801905A8
  /* 3808 1170E8 801908C8 */  .4byte update_contdata
  .incbin "ovl7.raw.bin", 0x380C, 0x20
  /* 382C 11710C 801908EC */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl7.raw.bin", 0x3830, 0x24
  /* 3854 117134 80190914 */  .4byte func_ovl7_80190260
  .incbin "ovl7.raw.bin", 0x3858, 0x8

glabel D_ovl7_80190920
  /* 3860 117140 80190920 */
  .asciz "Error : wrong item! %d\n"
  .balign 4

glabel D_ovl7_80190938
  /* 3878 117158 80190938 */
  .4byte 0x3dcccccd # .float 0.1

glabel jtbl_ovl7_8019093C
  /* 387C 11715C 8019093C */  .4byte jtgt_ovl7_8018FA14
  /* 3880 117160 80190940 */  .4byte jtgt_ovl7_8018FA20
  /* 3884 117164 80190944 */  .4byte jtgt_ovl7_8018FA28
  /* 3888 117168 80190948 */  .4byte jtgt_ovl7_8018FA34
  /* 388C 11716C 8019094C */  .4byte jtgt_ovl7_8018FA40
  /* 3890 117170 80190950 */  .4byte jtgt_ovl7_8018FA48
  .incbin "ovl7.raw.bin", 0x3894, 0xC
