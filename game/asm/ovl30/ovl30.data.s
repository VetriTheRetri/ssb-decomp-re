.include "macros.inc"

.section .data

# Data Sections
#  801344D0 -> 80134BD0


glabel D_ovl30_801344D0
  .incbin "ovl30.raw.bin", 0x29D0, 0x14

glabel D_ovl30_801344E4
  .incbin "ovl30.raw.bin", 0x29E4, 0x48

glabel D_ovl30_8013452C
  .incbin "ovl30.raw.bin", 0x2A2C, 0x24

glabel D_ovl30_80134550
  .incbin "ovl30.raw.bin", 0x2A50, 0x18

glabel D_ovl30_80134568
  .incbin "ovl30.raw.bin", 0x2A68, 0x28

glabel D_ovl30_80134590
  /* 2A90 150100 80134590 */
  .asciz "   "
  .balign 4
  /* 2A94 150104 80134594 */
  .asciz "   "
  .balign 4

glabel D_ovl30_80134598
  .incbin "ovl30.raw.bin", 0x2A98, 0x10

glabel D_ovl30_801345A8
  .incbin "ovl30.raw.bin", 0x2AA8, 0x14
  /* 2ABC 15012C 801345BC */  .4byte D_ovl30_80134598
  .incbin "ovl30.raw.bin", 0x2AC0, 0x4
  /* 2AC4 150134 801345C4 */  .4byte D_ovl30_80134590
  .incbin "ovl30.raw.bin", 0x2AC8, 0x8

glabel D_ovl30_801345D0
  .incbin "ovl30.raw.bin", 0x2AD0, 0x74

glabel D_ovl30_80134644
  .incbin "ovl30.raw.bin", 0x2B44, 0x28

glabel D_ovl30_8013466C
  .incbin "ovl30.raw.bin", 0x2B6C, 0x28

glabel D_ovl30_80134694
  /* 2B94 150204 80134694 */
  .asciz "CC"
  .balign 4
  /* 2B98 150208 80134698 */
  .asciz "CD"
  .balign 4
  /* 2B9C 15020C 8013469C */
  .asciz "CJ"
  .balign 4
  /* 2BA0 150210 801346A0 */
  .asciz "CD"
  .balign 4
  /* 2BA4 150214 801346A4 */
  .asciz "C>"
  .balign 4
  /* 2BA8 150218 801346A8 */
  .asciz "CD"
  .balign 4
  /* 2BAC 15021C 801346AC */
  .asciz "CC"
  .balign 4
  /* 2BB0 150220 801346B0 */
  .asciz "CD"
  .balign 4
  /* 2BB4 150224 801346B4 */
  .asciz "CF"
  .balign 4
  /* 2BB8 150228 801346B8 */
  .asciz "CD"
  .balign 4
  /* 2BBC 15022C 801346BC */
  .asciz "C>"
  .balign 4
  /* 2BC0 150230 801346C0 */
  .asciz "CD"
  .balign 4
  /* 2BC4 150234 801346C4 */
  .asciz "CC"
  .balign 4
  /* 2BC8 150238 801346C8 */
  .asciz "CD"
  .balign 4
  /* 2BCC 15023C 801346CC */
  .asciz "C>"
  .balign 4
  /* 2BD0 150240 801346D0 */
  .asciz "CD"
  .balign 4
  /* 2BD4 150244 801346D4 */
  .asciz "C>"
  .balign 4
  /* 2BD8 150248 801346D8 */
  .asciz "CD"
  .balign 4

glabel D_ovl30_801346DC
  .incbin "ovl30.raw.bin", 0x2BDC, 0x24
  /* 2C00 150270 80134700 */  .4byte D_ovl30_801349C0
  /* 2C04 150274 80134704 */  .4byte D_ovl30_801349D0
  /* 2C08 150278 80134708 */  .4byte D_ovl30_801349DC
  /* 2C0C 15027C 8013470C */  .4byte D_ovl30_801349EC
  /* 2C10 150280 80134710 */  .4byte D_ovl30_801349FC
  /* 2C14 150284 80134714 */  .4byte D_ovl30_80134A10
  /* 2C18 150288 80134718 */  .4byte D_ovl30_80134A20
  /* 2C1C 15028C 8013471C */  .4byte D_ovl30_80134A2C
  /* 2C20 150290 80134720 */  .4byte D_ovl30_80134A3C
  /* 2C24 150294 80134724 */  .4byte D_ovl30_80134A50
  /* 2C28 150298 80134728 */  .4byte D_ovl30_80134A60
  .incbin "ovl30.raw.bin", 0x2C2C, 0x18
  /* 2C44 1502B4 80134744 */  .4byte D_ovl30_80134A74
  /* 2C48 1502B8 80134748 */
  .asciz "C@"
  .balign 4
  /* 2C4C 1502BC 8013474C */
  .asciz "C\'"
  .balign 4
  /* 2C50 1502C0 80134750 */
  .asciz "CV"
  .balign 4
  /* 2C54 1502C4 80134754 */
  .asciz "C\'"
  .balign 4
  /* 2C58 1502C8 80134758 */
  .asciz "CJ"
  .balign 4
  /* 2C5C 1502CC 8013475C */
  .asciz "C)"
  .balign 4
  /* 2C60 1502D0 80134760 */
  .asciz "CJ"
  .balign 4
  /* 2C64 1502D4 80134764 */
  .asciz "C)"
  .balign 4
  /* 2C68 1502D8 80134768 */
  .asciz "CA"
  .balign 4
  /* 2C6C 1502DC 8013476C */
  .asciz "C)"
  .balign 4
  /* 2C70 1502E0 80134770 */
  .asciz "CF"
  .balign 4
  /* 2C74 1502E4 80134774 */
  .asciz "C)"
  .balign 4
  /* 2C78 1502E8 80134778 */
  .asciz "CM"
  .balign 4
  /* 2C7C 1502EC 8013477C */
  .asciz "C)"
  .balign 4
  /* 2C80 1502F0 80134780 */
  .asciz "CG"
  .balign 4
  /* 2C84 1502F4 80134784 */
  .asciz "C)"
  .balign 4
  /* 2C88 1502F8 80134788 */
  .asciz "C?"
  .balign 4
  /* 2C8C 1502FC 8013478C */
  .asciz "C\'"
  .balign 4
  /* 2C90 150300 80134790 */
  .asciz "CQ"
  .balign 4
  /* 2C94 150304 80134794 */
  .asciz "C."
  .balign 4
  /* 2C98 150308 80134798 */
  .asciz "C<"
  .balign 4
  /* 2C9C 15030C 8013479C */
  .asciz "C."
  .balign 4
  .incbin "ovl30.raw.bin", 0x2CA0, 0x28
  /* 2CC8 150338 801347C8 */
  .asciz "CK"
  .balign 4
  /* 2CCC 15033C 801347CC */
  .asciz "C."
  .balign 4
  /* 2CD0 150340 801347D0 */
  .asciz "CU"
  .balign 4
  /* 2CD4 150344 801347D4 */
  .asciz "C."
  .balign 4
  .incbin "ovl30.raw.bin", 0x2CD8, 0xC

glabel D_ovl30_801347E4
  /* 2CE4 150354 801347E4 */
  .asciz "@@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2CE8, 0x4
  /* 2CEC 15035C 801347EC */
  .asciz "@@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2CF0, 0x4
  /* 2CF4 150364 801347F4 */
  .asciz "@@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2CF8, 0x4
  /* 2CFC 15036C 801347FC */
  .asciz "@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D00, 0x4
  /* 2D04 150374 80134804 */
  .asciz "@@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D08, 0x1C
  /* 2D24 150394 80134824 */
  .asciz "@@"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D28, 0xC

glabel D_ovl30_80134834
  .incbin "ovl30.raw.bin", 0x2D34, 0x24

glabel D_ovl30_80134858
  /* 2D58 1503C8 80134858 */
  .asciz "?"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D5C, 0x8
  /* 2D64 1503D4 80134864 */
  .asciz "?"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D68, 0x8
  /* 2D70 1503E0 80134870 */
  .asciz "?"
  .balign 4
  .incbin "ovl30.raw.bin", 0x2D74, 0x8

glabel D_ovl30_8013487C
  .incbin "ovl30.raw.bin", 0x2D7C, 0x6C

glabel D_ovl30_801348E8
  .incbin "ovl30.raw.bin", 0x2DE8, 0x24

glabel D_ovl30_8013490C
  /* 2E0C 15047C 8013490C */  .4byte D_NF_80392A00
  /* 2E10 150480 80134910 */  .4byte D_NF_803B6900
  /* 2E14 150484 80134914 */  .4byte D_NF_803DA800
  .incbin "ovl30.raw.bin", 0x2E18, 0x10

glabel D_ovl30_80134928
  .incbin "ovl30.raw.bin", 0x2E28, 0x4
  /* 2E2C 15049C 8013492C */  .4byte func_8000A5E4
  /* 2E30 1504A0 80134930 */  .4byte func_800A26B8
  /* 2E34 1504A4 80134934 */  .4byte D_NF_80134E30
  .incbin "ovl30.raw.bin", 0x2E38, 0x28
  /* 2E60 1504D0 80134960 */  .4byte func_ovl30_80131B88
  /* 2E64 1504D4 80134964 */  .4byte update_contdata
  .incbin "ovl30.raw.bin", 0x2E68, 0x48
  /* 2EB0 150520 801349B0 */  .4byte func_ovl30_80134304
  .incbin "ovl30.raw.bin", 0x2EB4, 0xC

glabel D_ovl30_801349C0
  /* 2EC0 150530 801349C0 */
  .asciz "IN THE SKY OF"
  .balign 4

glabel D_ovl30_801349D0
  /* 2ED0 150540 801349D0 */
  .asciz "SECTOR Z"
  .balign 4

glabel D_ovl30_801349DC
  /* 2EDC 15054C 801349DC */
  .asciz "CONGO JUNGLE"
  .balign 4

glabel D_ovl30_801349EC
  /* 2EEC 15055C 801349EC */
  .asciz "PLANET ZEBES"
  .balign 4

glabel D_ovl30_801349FC
  /* 2EFC 15056C 801349FC */
  .asciz "CASTLE OF HYRULE"
  .balign 4

glabel D_ovl30_80134A10
  /* 2F10 150580 80134A10 */
  .asciz "YOSHI\'S ISLAND"
  .balign 4

glabel D_ovl30_80134A20
  /* 2F20 150590 80134A20 */
  .asciz "PUPUPU LAND"
  .balign 4

glabel D_ovl30_80134A2C
  /* 2F2C 15059C 80134A2C */
  .asciz "YAMABUKI CITY"
  .balign 4

glabel D_ovl30_80134A3C
  /* 2F3C 1505AC 80134A3C */
  .asciz "CLASSIC MUSHROOM"
  .balign 4

glabel D_ovl30_80134A50
  /* 2F50 1505C0 80134A50 */
  .asciz "CASTLE PEACH"
  .balign 4

glabel D_ovl30_80134A60
  /* 2F60 1505D0 80134A60 */
  .asciz "ABOARD A GREAT FOX"
  .balign 4

glabel D_ovl30_80134A74
  /* 2F74 1505E4 80134A74 */
  .asciz "KINGDOM"
  .balign 4

glabel jtbl_ovl30_80134A7C
  /* 2F7C 1505EC 80134A7C */  .4byte jtgt_ovl30_80131D30
  /* 2F80 1505F0 80134A80 */  .4byte jtgt_ovl30_80131D50
  /* 2F84 1505F4 80134A84 */  .4byte jtgt_ovl30_80131D50
  /* 2F88 1505F8 80134A88 */  .4byte jtgt_ovl30_80131D50
  /* 2F8C 1505FC 80134A8C */  .4byte jtgt_ovl30_80131D50
  /* 2F90 150600 80134A90 */  .4byte jtgt_ovl30_80131D50
  /* 2F94 150604 80134A94 */  .4byte jtgt_ovl30_80131D50
  /* 2F98 150608 80134A98 */  .4byte jtgt_ovl30_80131D40
  /* 2F9C 15060C 80134A9C */  .4byte jtgt_ovl30_80131D50
  /* 2FA0 150610 80134AA0 */  .4byte jtgt_ovl30_80131D50
  /* 2FA4 150614 80134AA4 */  .4byte jtgt_ovl30_80131D50
  /* 2FA8 150618 80134AA8 */  .4byte jtgt_ovl30_80131D50
  /* 2FAC 15061C 80134AAC */  .4byte jtgt_ovl30_80131D50
  /* 2FB0 150620 80134AB0 */  .4byte jtgt_ovl30_80131D50
  /* 2FB4 150624 80134AB4 */  .4byte jtgt_ovl30_80131D50
  /* 2FB8 150628 80134AB8 */  .4byte jtgt_ovl30_80131D50
  /* 2FBC 15062C 80134ABC */  .4byte jtgt_ovl30_80131D50
  /* 2FC0 150630 80134AC0 */  .4byte jtgt_ovl30_80131D50
  /* 2FC4 150634 80134AC4 */  .4byte jtgt_ovl30_80131D50
  /* 2FC8 150638 80134AC8 */  .4byte jtgt_ovl30_80131D50
  /* 2FCC 15063C 80134ACC */  .4byte jtgt_ovl30_80131D50
  /* 2FD0 150640 80134AD0 */  .4byte jtgt_ovl30_80131D50
  /* 2FD4 150644 80134AD4 */  .4byte jtgt_ovl30_80131D50
  /* 2FD8 150648 80134AD8 */  .4byte jtgt_ovl30_80131D50
  /* 2FDC 15064C 80134ADC */  .4byte jtgt_ovl30_80131D50
  /* 2FE0 150650 80134AE0 */  .4byte jtgt_ovl30_80131D50
  /* 2FE4 150654 80134AE4 */  .4byte jtgt_ovl30_80131C88
  /* 2FE8 150658 80134AE8 */  .4byte jtgt_ovl30_80131D50
  /* 2FEC 15065C 80134AEC */  .4byte jtgt_ovl30_80131D50
  /* 2FF0 150660 80134AF0 */  .4byte jtgt_ovl30_80131D50
  /* 2FF4 150664 80134AF4 */  .4byte jtgt_ovl30_80131D50
  /* 2FF8 150668 80134AF8 */  .4byte jtgt_ovl30_80131CCC
  /* 2FFC 15066C 80134AFC */  .4byte jtgt_ovl30_80131D50
  /* 3000 150670 80134B00 */  .4byte jtgt_ovl30_80131D50
  /* 3004 150674 80134B04 */  .4byte jtgt_ovl30_80131D50
  /* 3008 150678 80134B08 */  .4byte jtgt_ovl30_80131D50
  /* 300C 15067C 80134B0C */  .4byte jtgt_ovl30_80131D50
  /* 3010 150680 80134B10 */  .4byte jtgt_ovl30_80131D50
  /* 3014 150684 80134B14 */  .4byte jtgt_ovl30_80131D50
  /* 3018 150688 80134B18 */  .4byte jtgt_ovl30_80131D50
  /* 301C 15068C 80134B1C */  .4byte jtgt_ovl30_80131D50
  /* 3020 150690 80134B20 */  .4byte jtgt_ovl30_80131CCC
  /* 3024 150694 80134B24 */  .4byte jtgt_ovl30_80131D00
  /* 3028 150698 80134B28 */  .4byte jtgt_ovl30_80131D50
  /* 302C 15069C 80134B2C */  .4byte jtgt_ovl30_80131D50
  /* 3030 1506A0 80134B30 */  .4byte jtgt_ovl30_80131D00
  /* 3034 1506A4 80134B34 */  .4byte jtgt_ovl30_80131D50
  /* 3038 1506A8 80134B38 */  .4byte jtgt_ovl30_80131CCC
  /* 303C 1506AC 80134B3C */  .4byte jtgt_ovl30_80131D50
  /* 3040 1506B0 80134B40 */  .4byte jtgt_ovl30_80131D50
  /* 3044 1506B4 80134B44 */  .4byte jtgt_ovl30_80131CCC

glabel D_ovl30_80134B48
  /* 3048 1506B8 80134B48 */  .4byte jtgt_ovl30_80131CB0
  /* 304C 1506BC 80134B4C */  .4byte jtgt_ovl30_80131CBC
  /* 3050 1506C0 80134B50 */  .4byte jtgt_ovl30_80131CBC
  /* 3054 1506C4 80134B54 */  .4byte jtgt_ovl30_80131CBC
  /* 3058 1506C8 80134B58 */  .4byte jtgt_ovl30_80131CBC
  /* 305C 1506CC 80134B5C */  .4byte jtgt_ovl30_80131CBC
  /* 3060 1506D0 80134B60 */  .4byte jtgt_ovl30_80131CBC
  /* 3064 1506D4 80134B64 */  .4byte jtgt_ovl30_80131CBC
  /* 3068 1506D8 80134B68 */  .4byte jtgt_ovl30_80131CBC
  /* 306C 1506DC 80134B6C */  .4byte jtgt_ovl30_80131CBC
  /* 3070 1506E0 80134B70 */  .4byte jtgt_ovl30_80131CB0
  /* 3074 1506E4 80134B74 */  .4byte jtgt_ovl30_80131CBC
  /* 3078 1506E8 80134B78 */  .4byte jtgt_ovl30_80131CBC
  /* 307C 1506EC 80134B7C */  .4byte jtgt_ovl30_80131CBC
  /* 3080 1506F0 80134B80 */  .4byte jtgt_ovl30_80131CB0
  /* 3084 1506F4 80134B84 */  .4byte jtgt_ovl30_80131CBC
  /* 3088 1506F8 80134B88 */  .4byte jtgt_ovl30_80131CB0
  /* 308C 1506FC 80134B8C */  .4byte jtgt_ovl30_80131CBC
  /* 3090 150700 80134B90 */  .4byte jtgt_ovl30_80131CBC
  /* 3094 150704 80134B94 */  .4byte jtgt_ovl30_80131CB0

glabel D_ovl30_80134B98
  /* 3098 150708 80134B98 */  .4byte jtgt_ovl30_801324D4
  /* 309C 15070C 80134B9C */  .4byte jtgt_ovl30_8013250C
  /* 30A0 150710 80134BA0 */  .4byte jtgt_ovl30_801324DC
  /* 30A4 150714 80134BA4 */  .4byte jtgt_ovl30_801324EC
  /* 30A8 150718 80134BA8 */  .4byte jtgt_ovl30_801324E4
  /* 30AC 15071C 80134BAC */  .4byte jtgt_ovl30_801324FC
  /* 30B0 150720 80134BB0 */  .4byte jtgt_ovl30_80132504
  /* 30B4 150724 80134BB4 */  .4byte jtgt_ovl30_80132514
  /* 30B8 150728 80134BB8 */  .4byte jtgt_ovl30_801324F4

glabel D_ovl30_80134BBC
  /* 30BC 15072C 80134BBC */
  .4byte 0x3ebd70a4 # .float 0.37

glabel D_ovl30_80134BC0
  /* 30C0 150730 80134BC0 */
  .4byte 0xc53b8000 # .float -3000.0

glabel D_ovl30_80134BC4
  /* 30C4 150734 80134BC4 */
  .4byte 0x453b8000 # .float 3000.0

glabel D_ovl30_80134BC8
  /* 30C8 150738 80134BC8 */
  .4byte 0x460ca000 # .float 9000.0

glabel D_ovl30_80134BCC
  /* 30CC 15073C 80134BCC */
  .4byte 0x40490fdb # .float 3.1415927
