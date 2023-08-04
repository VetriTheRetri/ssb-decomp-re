.include "macros.inc"

.section .data

# Data Sections
#  80136630 -> 80136C10


glabel D_ovl32_80136630
  .incbin "ovl32.raw.bin", 0x4B30, 0x1C

glabel D_ovl32_8013664C
  .incbin "ovl32.raw.bin", 0x4B4C, 0x14

glabel D_ovl32_80136660
  /* 4B60 15D5A0 80136660 */
  .asciz "   "
  .balign 4
  /* 4B64 15D5A4 80136664 */
  .asciz "   "
  .balign 4

glabel D_ovl32_80136668
  .incbin "ovl32.raw.bin", 0x4B68, 0x8
  /* 4B70 15D5B0 80136670 */
  .asciz "<<<"
  .balign 4
  .incbin "ovl32.raw.bin", 0x4B74, 0x4

glabel D_ovl32_80136678
  .incbin "ovl32.raw.bin", 0x4B78, 0x14
  /* 4B8C 15D5CC 8013668C */  .4byte D_ovl32_80136668
  .incbin "ovl32.raw.bin", 0x4B90, 0x4
  /* 4B94 15D5D4 80136694 */  .4byte D_ovl32_80136660
  .incbin "ovl32.raw.bin", 0x4B98, 0x8

glabel D_ovl32_801366A0
  .incbin "ovl32.raw.bin", 0x4BA0, 0x30

glabel D_ovl32_801366D0
  .incbin "ovl32.raw.bin", 0x4BD0, 0x28

glabel D_ovl32_801366F8
  .incbin "ovl32.raw.bin", 0x4BF8, 0x74

glabel D_ovl32_8013676C
  .incbin "ovl32.raw.bin", 0x4C6C, 0x10

glabel D_ovl32_8013677C
  .incbin "ovl32.raw.bin", 0x4C7C, 0x60

glabel D_ovl32_801367DC
  .incbin "ovl32.raw.bin", 0x4CDC, 0x30

glabel D_ovl32_8013680C
  .incbin "ovl32.raw.bin", 0x4D0C, 0x20
  /* 4D2C 15D76C 8013682C */
  .asciz "@@"
  .balign 4
  .incbin "ovl32.raw.bin", 0x4D30, 0x34
  /* 4D64 15D7A4 80136864 */
  .asciz "@@"
  .balign 4
  .incbin "ovl32.raw.bin", 0x4D68, 0x4

glabel D_ovl32_8013686C
  .incbin "ovl32.raw.bin", 0x4D6C, 0x30

glabel D_ovl32_8013689C
  .incbin "ovl32.raw.bin", 0x4D9C, 0x30

glabel D_ovl32_801368CC
  .incbin "ovl32.raw.bin", 0x4DCC, 0xC

glabel D_ovl32_801368D8
  .incbin "ovl32.raw.bin", 0x4DD8, 0x18

glabel D_ovl32_801368F0
  .incbin "ovl32.raw.bin", 0x4DF0, 0x18

glabel D_ovl32_80136908
  .incbin "ovl32.raw.bin", 0x4E08, 0x1C

glabel D_ovl32_80136924
  .incbin "ovl32.raw.bin", 0x4E24, 0x18

glabel D_ovl32_8013693C
  .incbin "ovl32.raw.bin", 0x4E3C, 0x1C

glabel D_ovl32_80136958
  .incbin "ovl32.raw.bin", 0x4E58, 0x1C

glabel D_ovl32_80136974
  /* 4E74 15D8B4 80136974 */
  .asciz "C "
  .balign 4
  /* 4E78 15D8B8 80136978 */
  .asciz "C,"
  .balign 4
  /* 4E7C 15D8BC 8013697C */
  .asciz "C8"
  .balign 4
  /* 4E80 15D8C0 80136980 */
  .asciz "CD"
  .balign 4

glabel D_ovl32_80136984
  .incbin "ovl32.raw.bin", 0x4E84, 0x18

glabel D_ovl32_8013699C
  .incbin "ovl32.raw.bin", 0x4E9C, 0x10

glabel D_ovl32_801369AC
  .incbin "ovl32.raw.bin", 0x4EAC, 0xC
  /* 4EB8 15D8F8 801369B8 */
  .asciz "C+"
  .balign 4
  .incbin "ovl32.raw.bin", 0x4EBC, 0x4
  /* 4EC0 15D900 801369C0 */
  .asciz "C7"
  .balign 4
  .incbin "ovl32.raw.bin", 0x4EC4, 0x4
  /* 4EC8 15D908 801369C8 */
  .asciz "CC"
  .balign 4

glabel D_ovl32_801369CC
  /* 4ECC 15D90C 801369CC */  .4byte D_NF_80392A00
  /* 4ED0 15D910 801369D0 */  .4byte D_NF_803B6900
  /* 4ED4 15D914 801369D4 */  .4byte D_NF_803DA800
  .incbin "ovl32.raw.bin", 0x4ED8, 0x10

glabel D_ovl32_801369E8
  .incbin "ovl32.raw.bin", 0x4EE8, 0x4
  /* 4EEC 15D92C 801369EC */  .4byte func_8000A5E4
  /* 4EF0 15D930 801369F0 */  .4byte func_8000A340
  /* 4EF4 15D934 801369F4 */  .4byte D_NF_80136DA0
  .incbin "ovl32.raw.bin", 0x4EF8, 0x28
  /* 4F20 15D960 80136A20 */  .4byte func_ovl32_80131B00
  /* 4F24 15D964 80136A24 */  .4byte update_contdata
  .incbin "ovl32.raw.bin", 0x4F28, 0x48
  /* 4F70 15D9B0 80136A70 */  .4byte func_ovl32_80136488
  .incbin "ovl32.raw.bin", 0x4F74, 0xC

glabel D_ovl32_80136A80
  /* 4F80 15D9C0 80136A80 */
  .asciz "RANKING"
  .balign 4

glabel D_ovl32_80136A88
  /* 4F88 15D9C8 80136A88 */
  .asciz "USED %"
  .balign 4

glabel D_ovl32_80136A90
  /* 4F90 15D9D0 80136A90 */
  .asciz "ATTACK 3TOTAL"
  .balign 4

glabel D_ovl32_80136AA0
  /* 4FA0 15D9E0 80136AA0 */
  .asciz "DAMAGE TOTAL"
  .balign 4

glabel jtbl_ovl32_80136AB0
  /* 4FB0 15D9F0 80136AB0 */  .4byte jtgt_ovl32_80132478
  /* 4FB4 15D9F4 80136AB4 */  .4byte jtgt_ovl32_80132498
  /* 4FB8 15D9F8 80136AB8 */  .4byte jtgt_ovl32_80132498
  /* 4FBC 15D9FC 80136ABC */  .4byte jtgt_ovl32_80132498
  /* 4FC0 15DA00 80136AC0 */  .4byte jtgt_ovl32_80132498
  /* 4FC4 15DA04 80136AC4 */  .4byte jtgt_ovl32_80132498
  /* 4FC8 15DA08 80136AC8 */  .4byte jtgt_ovl32_80132498
  /* 4FCC 15DA0C 80136ACC */  .4byte jtgt_ovl32_80132488
  /* 4FD0 15DA10 80136AD0 */  .4byte jtgt_ovl32_80132498
  /* 4FD4 15DA14 80136AD4 */  .4byte jtgt_ovl32_80132498
  /* 4FD8 15DA18 80136AD8 */  .4byte jtgt_ovl32_80132498
  /* 4FDC 15DA1C 80136ADC */  .4byte jtgt_ovl32_80132498
  /* 4FE0 15DA20 80136AE0 */  .4byte jtgt_ovl32_80132498
  /* 4FE4 15DA24 80136AE4 */  .4byte jtgt_ovl32_80132498
  /* 4FE8 15DA28 80136AE8 */  .4byte jtgt_ovl32_80132498
  /* 4FEC 15DA2C 80136AEC */  .4byte jtgt_ovl32_80132498
  /* 4FF0 15DA30 80136AF0 */  .4byte jtgt_ovl32_80132498
  /* 4FF4 15DA34 80136AF4 */  .4byte jtgt_ovl32_80132498
  /* 4FF8 15DA38 80136AF8 */  .4byte jtgt_ovl32_80132498
  /* 4FFC 15DA3C 80136AFC */  .4byte jtgt_ovl32_80132498
  /* 5000 15DA40 80136B00 */  .4byte jtgt_ovl32_80132498
  /* 5004 15DA44 80136B04 */  .4byte jtgt_ovl32_80132498
  /* 5008 15DA48 80136B08 */  .4byte jtgt_ovl32_80132498
  /* 500C 15DA4C 80136B0C */  .4byte jtgt_ovl32_80132498
  /* 5010 15DA50 80136B10 */  .4byte jtgt_ovl32_80132498
  /* 5014 15DA54 80136B14 */  .4byte jtgt_ovl32_80132498
  /* 5018 15DA58 80136B18 */  .4byte jtgt_ovl32_801323D0
  /* 501C 15DA5C 80136B1C */  .4byte jtgt_ovl32_80132498
  /* 5020 15DA60 80136B20 */  .4byte jtgt_ovl32_80132498
  /* 5024 15DA64 80136B24 */  .4byte jtgt_ovl32_80132498
  /* 5028 15DA68 80136B28 */  .4byte jtgt_ovl32_80132498
  /* 502C 15DA6C 80136B2C */  .4byte jtgt_ovl32_80132414
  /* 5030 15DA70 80136B30 */  .4byte jtgt_ovl32_80132498
  /* 5034 15DA74 80136B34 */  .4byte jtgt_ovl32_80132498
  /* 5038 15DA78 80136B38 */  .4byte jtgt_ovl32_80132498
  /* 503C 15DA7C 80136B3C */  .4byte jtgt_ovl32_80132498
  /* 5040 15DA80 80136B40 */  .4byte jtgt_ovl32_80132498
  /* 5044 15DA84 80136B44 */  .4byte jtgt_ovl32_80132498
  /* 5048 15DA88 80136B48 */  .4byte jtgt_ovl32_80132498
  /* 504C 15DA8C 80136B4C */  .4byte jtgt_ovl32_80132498
  /* 5050 15DA90 80136B50 */  .4byte jtgt_ovl32_80132498
  /* 5054 15DA94 80136B54 */  .4byte jtgt_ovl32_80132414
  /* 5058 15DA98 80136B58 */  .4byte jtgt_ovl32_80132448
  /* 505C 15DA9C 80136B5C */  .4byte jtgt_ovl32_80132498
  /* 5060 15DAA0 80136B60 */  .4byte jtgt_ovl32_80132498
  /* 5064 15DAA4 80136B64 */  .4byte jtgt_ovl32_80132448
  /* 5068 15DAA8 80136B68 */  .4byte jtgt_ovl32_80132498
  /* 506C 15DAAC 80136B6C */  .4byte jtgt_ovl32_80132414
  /* 5070 15DAB0 80136B70 */  .4byte jtgt_ovl32_80132498
  /* 5074 15DAB4 80136B74 */  .4byte jtgt_ovl32_80132498
  /* 5078 15DAB8 80136B78 */  .4byte jtgt_ovl32_80132414

glabel D_ovl32_80136B7C
  /* 507C 15DABC 80136B7C */  .4byte jtgt_ovl32_801323F8
  /* 5080 15DAC0 80136B80 */  .4byte jtgt_ovl32_80132404
  /* 5084 15DAC4 80136B84 */  .4byte jtgt_ovl32_80132404
  /* 5088 15DAC8 80136B88 */  .4byte jtgt_ovl32_80132404
  /* 508C 15DACC 80136B8C */  .4byte jtgt_ovl32_80132404
  /* 5090 15DAD0 80136B90 */  .4byte jtgt_ovl32_80132404
  /* 5094 15DAD4 80136B94 */  .4byte jtgt_ovl32_80132404
  /* 5098 15DAD8 80136B98 */  .4byte jtgt_ovl32_80132404
  /* 509C 15DADC 80136B9C */  .4byte jtgt_ovl32_80132404
  /* 50A0 15DAE0 80136BA0 */  .4byte jtgt_ovl32_80132404
  /* 50A4 15DAE4 80136BA4 */  .4byte jtgt_ovl32_801323F8
  /* 50A8 15DAE8 80136BA8 */  .4byte jtgt_ovl32_80132404
  /* 50AC 15DAEC 80136BAC */  .4byte jtgt_ovl32_80132404
  /* 50B0 15DAF0 80136BB0 */  .4byte jtgt_ovl32_80132404
  /* 50B4 15DAF4 80136BB4 */  .4byte jtgt_ovl32_801323F8
  /* 50B8 15DAF8 80136BB8 */  .4byte jtgt_ovl32_80132404
  /* 50BC 15DAFC 80136BBC */  .4byte jtgt_ovl32_801323F8
  /* 50C0 15DB00 80136BC0 */  .4byte jtgt_ovl32_80132404
  /* 50C4 15DB04 80136BC4 */  .4byte jtgt_ovl32_80132404
  /* 50C8 15DB08 80136BC8 */  .4byte jtgt_ovl32_801323F8

glabel D_ovl32_80136BCC
  /* 50CC 15DB0C 80136BCC */
  .4byte 0x438c8000 # .float 281.0

glabel jtbl_ovl32_80136BD0
  /* 50D0 15DB10 80136BD0 */  .4byte jtgt_ovl32_801340C8
  /* 50D4 15DB14 80136BD4 */  .4byte jtgt_ovl32_801340E4
  /* 50D8 15DB18 80136BD8 */  .4byte jtgt_ovl32_80134108
  /* 50DC 15DB1C 80136BDC */  .4byte jtgt_ovl32_8013412C
  /* 50E0 15DB20 80136BE0 */  .4byte jtgt_ovl32_80134148
  /* 50E4 15DB24 80136BE4 */  .4byte jtgt_ovl32_80134194
  /* 50E8 15DB28 80136BE8 */  .4byte jtgt_ovl32_801341B0

glabel D_ovl32_80136BEC
  /* 50EC 15DB2C 80136BEC */  .4byte jtgt_ovl32_80134C20
  /* 50F0 15DB30 80136BF0 */  .4byte jtgt_ovl32_80134CA4
  /* 50F4 15DB34 80136BF4 */  .4byte jtgt_ovl32_80134D1C
  /* 50F8 15DB38 80136BF8 */  .4byte jtgt_ovl32_80134D94
  /* 50FC 15DB3C 80136BFC */  .4byte jtgt_ovl32_80134E18
  /* 5100 15DB40 80136C00 */  .4byte jtgt_ovl32_80134F8C
  /* 5104 15DB44 80136C04 */  .4byte jtgt_ovl32_80135010
  .incbin "ovl32.raw.bin", 0x5108, 0x8
