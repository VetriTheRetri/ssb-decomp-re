.include "macros.inc"

.section .data

# Data Sections
#  80132690 -> 80132C20


glabel D_ovl14_80132690
  .incbin "ovl14.raw.bin", 0x0B90, 0x4

glabel D_ovl14_80132694
  .incbin "ovl14.raw.bin", 0x0B94, 0x4

glabel D_ovl14_80132698
  .incbin "ovl14.raw.bin", 0x0B98, 0x4

glabel D_ovl14_8013269C
  /* B9C 11C50C 8013269C */  .4byte D_ovl14_801329E0
  /* BA0 11C510 801326A0 */  .4byte D_ovl14_801329E8
  /* BA4 11C514 801326A4 */  .4byte D_ovl14_801329F0
  /* BA8 11C518 801326A8 */  .4byte D_ovl14_801329F8
  /* BAC 11C51C 801326AC */  .4byte D_ovl14_80132A00
  /* BB0 11C520 801326B0 */  .4byte D_ovl14_80132A08
  /* BB4 11C524 801326B4 */  .4byte D_ovl14_80132A10
  /* BB8 11C528 801326B8 */  .4byte D_ovl14_80132A18
  /* BBC 11C52C 801326BC */  .4byte D_ovl14_80132A24
  /* BC0 11C530 801326C0 */  .4byte D_ovl14_80132A2C
  /* BC4 11C534 801326C4 */  .4byte D_ovl14_80132A38
  /* BC8 11C538 801326C8 */  .4byte D_ovl14_80132A40
  /* BCC 11C53C 801326CC */  .4byte D_ovl14_80132A48
  /* BD0 11C540 801326D0 */  .4byte D_ovl14_80132A50
  /* BD4 11C544 801326D4 */  .4byte D_ovl14_80132A58
  /* BD8 11C548 801326D8 */  .4byte D_ovl14_80132A60
  /* BDC 11C54C 801326DC */  .4byte D_ovl14_80132A68
  /* BE0 11C550 801326E0 */  .4byte D_ovl14_80132A74
  /* BE4 11C554 801326E4 */  .4byte D_ovl14_80132A7C
  /* BE8 11C558 801326E8 */  .4byte D_ovl14_80132A84
  /* BEC 11C55C 801326EC */  .4byte D_ovl14_80132A8C
  /* BF0 11C560 801326F0 */  .4byte D_ovl14_80132A94
  /* BF4 11C564 801326F4 */  .4byte D_ovl14_80132AA0
  /* BF8 11C568 801326F8 */  .4byte D_ovl14_80132AA8
  /* BFC 11C56C 801326FC */  .4byte D_ovl14_80132AB4
  /* C00 11C570 80132700 */  .4byte D_ovl14_80132ABC
  /* C04 11C574 80132704 */  .4byte D_ovl14_80132AC4

glabel D_ovl14_80132708
  /* C08 11C578 80132708 */  .4byte D_ovl14_80132AD0
  /* C0C 11C57C 8013270C */  .4byte D_ovl14_80132AD4
  /* C10 11C580 80132710 */  .4byte D_ovl14_80132AD8
  /* C14 11C584 80132714 */  .4byte D_ovl14_80132ADC
  /* C18 11C588 80132718 */  .4byte D_ovl14_80132AE4
  /* C1C 11C58C 8013271C */  .4byte D_ovl14_80132AE8

glabel D_ovl14_80132720
  /* C20 11C590 80132720 */  .4byte D_ovl14_80132AF0
  /* C24 11C594 80132724 */  .4byte D_ovl14_80132AF8
  /* C28 11C598 80132728 */  .4byte D_ovl14_80132B00
  /* C2C 11C59C 8013272C */  .4byte D_ovl14_80132B0C
  /* C30 11C5A0 80132730 */  .4byte D_ovl14_80132B14
  /* C34 11C5A4 80132734 */  .4byte D_ovl14_80132B20

glabel D_ovl14_80132738
  /* C38 11C5A8 80132738 */  .4byte D_ovl14_80132B28
  /* C3C 11C5AC 8013273C */  .4byte D_ovl14_80132B30
  /* C40 11C5B0 80132740 */  .4byte D_ovl14_80132B38
  /* C44 11C5B4 80132744 */  .4byte D_ovl14_80132B40
  /* C48 11C5B8 80132748 */  .4byte D_ovl14_80132B4C
  /* C4C 11C5BC 8013274C */  .4byte D_ovl14_80132B58
  /* C50 11C5C0 80132750 */  .4byte D_ovl14_80132B64
  /* C54 11C5C4 80132754 */  .4byte D_ovl14_80132B70
  /* C58 11C5C8 80132758 */  .4byte D_ovl14_80132B7C
  /* C5C 11C5CC 8013275C */  .4byte D_ovl14_80132B84
  /* C60 11C5D0 80132760 */  .4byte D_ovl14_80132B8C
  /* C64 11C5D4 80132764 */  .4byte D_ovl14_80132B94
  /* C68 11C5D8 80132768 */  .4byte D_ovl14_80132BA0
  /* C6C 11C5DC 8013276C */  .4byte D_ovl14_80132BA8
  /* C70 11C5E0 80132770 */  .4byte D_ovl14_80132BB0
  /* C74 11C5E4 80132774 */  .4byte D_ovl14_80132BB8
  /* C78 11C5E8 80132778 */  .4byte D_ovl14_80132BC0
  /* C7C 11C5EC 8013277C */  .4byte D_ovl14_80132BC8

glabel D_ovl14_80132780
  .incbin "ovl14.raw.bin", 0x0C80, 0x4
  /* C84 11C5F4 80132784 */  .4byte func_ovl14_80131B58
  /* C88 11C5F8 80132788 */  .4byte D_ovl14_80132720
  /* C8C 11C5FC 8013278C */  .4byte D_ovl14_80132694
  .incbin "ovl14.raw.bin", 0x0C90, 0x14
  /* CA4 11C614 801327A4 */  .4byte D_ovl14_80132BD4
  /* CA8 11C618 801327A8 */  .4byte (D_800A4D08 + 0x6)
  .incbin "ovl14.raw.bin", 0x0CAC, 0x4
  /* CB0 11C620 801327B0 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl14.raw.bin", 0x0CB4, 0xC
  /* CC0 11C630 801327C0 */  .4byte D_ovl14_80132738
  /* CC4 11C634 801327C4 */  .4byte (gSceneData + 0x17)
  .incbin "ovl14.raw.bin", 0x0CC8, 0x14
  /* CDC 11C64C 801327DC */  .4byte D_ovl14_80132708
  /* CE0 11C650 801327E0 */  .4byte (D_800A4D08 + 0x22)
  .incbin "ovl14.raw.bin", 0x0CE4, 0x14
  /* CF8 11C668 801327F8 */  .4byte D_ovl14_8013269C
  /* CFC 11C66C 801327FC */  .4byte (D_800A4D08 + 0x23)
  .incbin "ovl14.raw.bin", 0x0D00, 0x14
  /* D14 11C684 80132814 */  .4byte D_ovl14_80132BE4
  /* D18 11C688 80132818 */  .4byte (D_800A4D08 + 0x26)
  .incbin "ovl14.raw.bin", 0x0D1C, 0x4
  /* D20 11C690 80132820 */
  .asciz "A "
  .balign 4
  .incbin "ovl14.raw.bin", 0x0D24, 0xC
  /* D30 11C6A0 80132830 */  .4byte D_ovl14_80132708
  /* D34 11C6A4 80132834 */  .4byte (D_800A4D08 + 0x96)
  .incbin "ovl14.raw.bin", 0x0D38, 0x14
  /* D4C 11C6BC 8013284C */  .4byte D_ovl14_8013269C
  /* D50 11C6C0 80132850 */  .4byte (D_800A4D08 + 0x97)
  .incbin "ovl14.raw.bin", 0x0D54, 0x14
  /* D68 11C6D8 80132868 */  .4byte D_ovl14_80132BEC
  /* D6C 11C6DC 8013286C */  .4byte (D_800A4D08 + 0x9A)
  .incbin "ovl14.raw.bin", 0x0D70, 0x4
  /* D74 11C6E4 80132874 */
  .asciz "A "
  .balign 4
  .incbin "ovl14.raw.bin", 0x0D78, 0xC
  /* D84 11C6F4 80132884 */  .4byte D_ovl14_80132708
  /* D88 11C6F8 80132888 */  .4byte (D_800A4D08 + 0x10A)
  .incbin "ovl14.raw.bin", 0x0D8C, 0x14
  /* DA0 11C710 801328A0 */  .4byte D_ovl14_8013269C
  /* DA4 11C714 801328A4 */  .4byte (D_800A4D08 + 0x10B)
  .incbin "ovl14.raw.bin", 0x0DA8, 0x14
  /* DBC 11C72C 801328BC */  .4byte D_ovl14_80132BF4
  /* DC0 11C730 801328C0 */  .4byte (D_800A4D08 + 0x10E)
  .incbin "ovl14.raw.bin", 0x0DC4, 0x4
  /* DC8 11C738 801328C8 */
  .asciz "A "
  .balign 4
  .incbin "ovl14.raw.bin", 0x0DCC, 0xC
  /* DD8 11C748 801328D8 */  .4byte D_ovl14_80132708
  /* DDC 11C74C 801328DC */  .4byte (D_800A4D08 + 0x17E)
  .incbin "ovl14.raw.bin", 0x0DE0, 0x14
  /* DF4 11C764 801328F4 */  .4byte D_ovl14_8013269C
  /* DF8 11C768 801328F8 */  .4byte (D_800A4D08 + 0x17F)
  .incbin "ovl14.raw.bin", 0x0DFC, 0x14
  /* E10 11C780 80132910 */  .4byte D_ovl14_80132BFC
  /* E14 11C784 80132914 */  .4byte (D_800A4D08 + 0x182)
  .incbin "ovl14.raw.bin", 0x0E18, 0x4
  /* E1C 11C78C 8013291C */
  .asciz "A "
  .balign 4
  .incbin "ovl14.raw.bin", 0x0E20, 0x4

glabel D_ovl14_80132924
  .incbin "ovl14.raw.bin", 0x0E24, 0x10

glabel D_ovl14_80132934
  /* E34 11C7A4 80132934 */  .4byte D_NF_80392A00
  /* E38 11C7A8 80132938 */  .4byte D_NF_803B6900
  /* E3C 11C7AC 8013293C */  .4byte D_NF_803DA800
  .incbin "ovl14.raw.bin", 0x0E40, 0x10

glabel D_ovl14_80132950
  .incbin "ovl14.raw.bin", 0x0E50, 0x4
  /* E54 11C7C4 80132954 */  .4byte func_8000A5E4
  /* E58 11C7C8 80132958 */  .4byte func_8000A340
  /* E5C 11C7CC 8013295C */  .4byte D_NF_80133130
  .incbin "ovl14.raw.bin", 0x0E60, 0x28
  /* E88 11C7F8 80132988 */  .4byte func_ovl14_80131B00
  /* E8C 11C7FC 8013298C */  .4byte update_contdata
  .incbin "ovl14.raw.bin", 0x0E90, 0x20
  /* EB0 11C820 801329B0 */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl14.raw.bin", 0x0EB4, 0x24
  /* ED8 11C848 801329D8 */  .4byte func_ovl14_8013239C
  .incbin "ovl14.raw.bin", 0x0EDC, 0x4

glabel D_ovl14_801329E0
  /* EE0 11C850 801329E0 */
  .asciz " Mario"
  .balign 4

glabel D_ovl14_801329E8
  /* EE8 11C858 801329E8 */
  .asciz " Fox"
  .balign 4

glabel D_ovl14_801329F0
  /* EF0 11C860 801329F0 */
  .asciz " Donkey"
  .balign 4

glabel D_ovl14_801329F8
  /* EF8 11C868 801329F8 */
  .asciz " Samus"
  .balign 4

glabel D_ovl14_80132A00
  /* F00 11C870 80132A00 */
  .asciz " Luigi"
  .balign 4

glabel D_ovl14_80132A08
  /* F08 11C878 80132A08 */
  .asciz " Link"
  .balign 4

glabel D_ovl14_80132A10
  /* F10 11C880 80132A10 */
  .asciz " Yoshi"
  .balign 4

glabel D_ovl14_80132A18
  /* F18 11C888 80132A18 */
  .asciz " Captain"
  .balign 4

glabel D_ovl14_80132A24
  /* F24 11C894 80132A24 */
  .asciz " Kirby"
  .balign 4

glabel D_ovl14_80132A2C
  /* F2C 11C89C 80132A2C */
  .asciz " Pikacyu"
  .balign 4

glabel D_ovl14_80132A38
  /* F38 11C8A8 80132A38 */
  .asciz " Purin"
  .balign 4

glabel D_ovl14_80132A40
  /* F40 11C8B0 80132A40 */
  .asciz " Nes"
  .balign 4

glabel D_ovl14_80132A48
  /* F48 11C8B8 80132A48 */
  .asciz " Boss"
  .balign 4

glabel D_ovl14_80132A50
  /* F50 11C8C0 80132A50 */
  .asciz " Metal"
  .balign 4

glabel D_ovl14_80132A58
  /* F58 11C8C8 80132A58 */
  .asciz " NMario"
  .balign 4

glabel D_ovl14_80132A60
  /* F60 11C8D0 80132A60 */
  .asciz " NFox"
  .balign 4

glabel D_ovl14_80132A68
  /* F68 11C8D8 80132A68 */
  .asciz " NDonkey"
  .balign 4

glabel D_ovl14_80132A74
  /* F74 11C8E4 80132A74 */
  .asciz " NSamus"
  .balign 4

glabel D_ovl14_80132A7C
  /* F7C 11C8EC 80132A7C */
  .asciz " NLuigi"
  .balign 4

glabel D_ovl14_80132A84
  /* F84 11C8F4 80132A84 */
  .asciz " NLink"
  .balign 4

glabel D_ovl14_80132A8C
  /* F8C 11C8FC 80132A8C */
  .asciz " NYoshi"
  .balign 4

glabel D_ovl14_80132A94
  /* F94 11C904 80132A94 */
  .asciz " NCaptain"
  .balign 4

glabel D_ovl14_80132AA0
  /* FA0 11C910 80132AA0 */
  .asciz " NKirby"
  .balign 4

glabel D_ovl14_80132AA8
  /* FA8 11C918 80132AA8 */
  .asciz " NPikacyu"
  .balign 4

glabel D_ovl14_80132AB4
  /* FB4 11C924 80132AB4 */
  .asciz " NPurin"
  .balign 4

glabel D_ovl14_80132ABC
  /* FBC 11C92C 80132ABC */
  .asciz " NNes"
  .balign 4

glabel D_ovl14_80132AC4
  /* FC4 11C934 80132AC4 */
  .asciz " GDonkey"
  .balign 4

glabel D_ovl14_80132AD0
  /* FD0 11C940 80132AD0 */
  .asciz "Man"
  .balign 4

glabel D_ovl14_80132AD4
  /* FD4 11C944 80132AD4 */
  .asciz "Com"
  .balign 4

glabel D_ovl14_80132AD8
  /* FD8 11C948 80132AD8 */
  .asciz "Not"
  .balign 4

glabel D_ovl14_80132ADC
  /* FDC 11C94C 80132ADC */
  .asciz "Demo"
  .balign 4

glabel D_ovl14_80132AE4
  /* FE4 11C954 80132AE4 */
  .asciz "Key"
  .balign 4

glabel D_ovl14_80132AE8
  /* FE8 11C958 80132AE8 */
  .asciz "GameKey"
  .balign 4

glabel D_ovl14_80132AF0
  /* FF0 11C960 80132AF0 */
  .asciz "VS mode"
  .balign 4

glabel D_ovl14_80132AF8
  /* FF8 11C968 80132AF8 */
  .asciz "1P mode"
  .balign 4

glabel D_ovl14_80132B00
  /* 1000 11C970 80132B00 */
  .asciz "Staffroll"
  .balign 4

glabel D_ovl14_80132B0C
  /* 100C 11C97C 80132B0C */
  .asciz "Explain"
  .balign 4

glabel D_ovl14_80132B14
  /* 1014 11C984 80132B14 */
  .asciz "AutoDemo"
  .balign 4

glabel D_ovl14_80132B20
  /* 1020 11C990 80132B20 */
  .asciz "Congra"
  .balign 4

glabel D_ovl14_80132B28
  /* 1028 11C998 80132B28 */
  .asciz "S:Link"
  .balign 4

glabel D_ovl14_80132B30
  /* 1030 11C9A0 80132B30 */
  .asciz "S:Yoshi"
  .balign 4

glabel D_ovl14_80132B38
  /* 1038 11C9A8 80132B38 */
  .asciz "S:Fox"
  .balign 4

glabel D_ovl14_80132B40
  /* 1040 11C9B0 80132B40 */
  .asciz "S:Bonus1"
  .balign 4

glabel D_ovl14_80132B4C
  /* 104C 11C9BC 80132B4C */
  .asciz "S:MarioBros"
  .balign 4

glabel D_ovl14_80132B58
  /* 1058 11C9C8 80132B58 */
  .asciz "S:Pikacyu"
  .balign 4

glabel D_ovl14_80132B64
  /* 1064 11C9D4 80132B64 */
  .asciz "S:GDonkey"
  .balign 4

glabel D_ovl14_80132B70
  /* 1070 11C9E0 80132B70 */
  .asciz "S:Bonus2"
  .balign 4

glabel D_ovl14_80132B7C
  /* 107C 11C9EC 80132B7C */
  .asciz "S:Kirby"
  .balign 4

glabel D_ovl14_80132B84
  /* 1084 11C9F4 80132B84 */
  .asciz "S:Samus"
  .balign 4

glabel D_ovl14_80132B8C
  /* 108C 11C9FC 80132B8C */
  .asciz "S:Metal"
  .balign 4

glabel D_ovl14_80132B94
  /* 1094 11CA04 80132B94 */
  .asciz "S:Bonus3"
  .balign 4

glabel D_ovl14_80132BA0
  /* 10A0 11CA10 80132BA0 */
  .asciz "S:Zako"
  .balign 4

glabel D_ovl14_80132BA8
  /* 10A8 11CA18 80132BA8 */
  .asciz "S:Boss"
  .balign 4

glabel D_ovl14_80132BB0
  /* 10B0 11CA20 80132BB0 */
  .asciz "S:Luigi"
  .balign 4

glabel D_ovl14_80132BB8
  /* 10B8 11CA28 80132BB8 */
  .asciz "S:Nes"
  .balign 4

glabel D_ovl14_80132BC0
  /* 10C0 11CA30 80132BC0 */
  .asciz "S:Purin"
  .balign 4

glabel D_ovl14_80132BC8
  /* 10C8 11CA38 80132BC8 */
  .asciz "S:Captain"
  .balign 4

glabel D_ovl14_80132BD4
  /* 10D4 11CA44 80132BD4 */
  .asciz "BattleTime %3d"
  .balign 4

glabel D_ovl14_80132BE4
  /* 10E4 11CA54 80132BE4 */
  .asciz "  %1d"
  .balign 4

glabel D_ovl14_80132BEC
  /* 10EC 11CA5C 80132BEC */
  .asciz "  %1d"
  .balign 4

glabel D_ovl14_80132BF4
  /* 10F4 11CA64 80132BF4 */
  .asciz "  %1d"
  .balign 4

glabel D_ovl14_80132BFC
  /* 10FC 11CA6C 80132BFC */
  .asciz "  %1d"
  .balign 4

glabel jtbl_ovl14_80132C04
  /* 1104 11CA74 80132C04 */  .4byte jtgt_ovl14_80132190
  /* 1108 11CA78 80132C08 */  .4byte jtgt_ovl14_8013219C
  /* 110C 11CA7C 80132C0C */  .4byte jtgt_ovl14_801321C4
  /* 1110 11CA80 80132C10 */  .4byte jtgt_ovl14_801321D0
  /* 1114 11CA84 80132C14 */  .4byte jtgt_ovl14_801321E8
  /* 1118 11CA88 80132C18 */  .4byte jtgt_ovl14_80132208

glabel D_ovl14_80132C1C
  /* 111C 11CA8C 80132C1C */
  .4byte 0x453b8000 # .float 3000.0
