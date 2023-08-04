.include "macros.inc"

.section .data

# Data Sections
#  80138EF0 -> 801398A0


glabel D_ovl31_80138EF0
  .incbin "ovl31.raw.bin", 0x73F0, 0x18
  /* 7408 1580A8 80138F08 */
  .asciz "aKYI"
  .balign 4

glabel D_ovl31_80138F10
  .incbin "ovl31.raw.bin", 0x7410, 0x18
  /* 7428 1580C8 80138F28 */
  .asciz "*O*\r"
  .balign 4

glabel D_ovl31_80138F30
  .incbin "ovl31.raw.bin", 0x7430, 0x18
  /* 7448 1580E8 80138F48 */
  .asciz "JkJi"
  .balign 4

glabel D_ovl31_80138F50
  .incbin "ovl31.raw.bin", 0x7450, 0x20

glabel D_ovl31_80138F70
  .incbin "ovl31.raw.bin", 0x7470, 0x30
  /* 74A0 158140 80138FA0 */
  .asciz "\n\n<"
  .balign 4
  .incbin "ovl31.raw.bin", 0x74A4, 0x4

glabel D_ovl31_80138FA8
  .incbin "ovl31.raw.bin", 0x74A8, 0x30

glabel D_ovl31_80138FD8
  .incbin "ovl31.raw.bin", 0x74D8, 0xC

glabel D_ovl31_80138FE4
  .incbin "ovl31.raw.bin", 0x74E4, 0x30

glabel D_ovl31_80139014
  .incbin "ovl31.raw.bin", 0x7514, 0x30

glabel D_ovl31_80139044
  .incbin "ovl31.raw.bin", 0x7544, 0x30

glabel D_ovl31_80139074
  .incbin "ovl31.raw.bin", 0x7574, 0xC

glabel D_ovl31_80139080
  .incbin "ovl31.raw.bin", 0x7580, 0x18

glabel D_ovl31_80139098
  /* 7598 158238 80139098 */  .4byte D_ovl31_80138EF0
  /* 759C 15823C 8013909C */  .4byte D_ovl31_80138F30
  /* 75A0 158240 801390A0 */  .4byte D_ovl31_80138F50
  /* 75A4 158244 801390A4 */  .4byte D_ovl31_80138F10

glabel D_ovl31_801390A8
  .incbin "ovl31.raw.bin", 0x75A8, 0xC

glabel D_ovl31_801390B4
  .incbin "ovl31.raw.bin", 0x75B4, 0x18

glabel D_ovl31_801390CC
  .incbin "ovl31.raw.bin", 0x75CC, 0x14
  /* 75E0 158280 801390E0 */
  .asciz "Cz"
  .balign 4
  .incbin "ovl31.raw.bin", 0x75E4, 0x4
  /* 75E8 158288 801390E8 */
  .asciz "Dz"
  .balign 4

glabel D_ovl31_801390EC
  .incbin "ovl31.raw.bin", 0x75EC, 0x24
  /* 7610 1582B0 80139110 */
  .asciz "DH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7614, 0x4
  /* 7618 1582B8 80139118 */
  .asciz "E/"
  .balign 4

glabel D_ovl31_8013911C
  .incbin "ovl31.raw.bin", 0x761C, 0x28
  /* 7644 1582E4 80139144 */
  .asciz "D/"
  .balign 4
  /* 7648 1582E8 80139148 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl31.raw.bin", 0x764C, 0x4
  /* 7650 1582F0 80139150 */
  .asciz "DH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7654, 0x4
  /* 7658 1582F8 80139158 */
  .asciz "E/"
  .balign 4

glabel D_ovl31_8013915C
  .incbin "ovl31.raw.bin", 0x765C, 0x20

glabel D_ovl31_8013917C
  .incbin "ovl31.raw.bin", 0x767C, 0xC

glabel D_ovl31_80139188
  .incbin "ovl31.raw.bin", 0x7688, 0x10

glabel D_ovl31_80139198
  .incbin "ovl31.raw.bin", 0x7698, 0x14

glabel D_ovl31_801391AC
  .incbin "ovl31.raw.bin", 0x76AC, 0x4
  /* 76B0 158350 801391B0 */
  .asciz "BH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x76B4, 0x18
  /* 76CC 15836C 801391CC */
  .asciz "C-"
  .balign 4
  /* 76D0 158370 801391D0 */
  .asciz "BH"
  .balign 4
  /* 76D4 158374 801391D4 */
  .asciz "C1"
  .balign 4
  .incbin "ovl31.raw.bin", 0x76D8, 0x4
  /* 76DC 15837C 801391DC */
  .asciz "C7"
  .balign 4
  .incbin "ovl31.raw.bin", 0x76E0, 0x4
  /* 76E4 158384 801391E4 */
  .asciz "C:"
  .balign 4
  .incbin "ovl31.raw.bin", 0x76E8, 0x4

glabel D_ovl31_801391EC
  .incbin "ovl31.raw.bin", 0x76EC, 0x4
  /* 76F0 158390 801391F0 */
  .asciz "BH"
  .balign 4
  /* 76F4 158394 801391F4 */
  .asciz "BH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x76F8, 0x18
  /* 7710 1583B0 80139210 */
  .asciz "BH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7714, 0x18
  /* 772C 1583CC 8013922C */
  .asciz "Cu"
  .balign 4
  /* 7730 1583D0 80139230 */
  .asciz "BH"
  .balign 4
  /* 7734 1583D4 80139234 */
  .asciz "Cm"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7738, 0x4
  /* 773C 1583DC 8013923C */
  .asciz "C~"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7740, 0xC

glabel D_ovl31_8013924C
  .incbin "ovl31.raw.bin", 0x774C, 0x4
  /* 7750 1583F0 80139250 */
  .asciz "BH"
  .balign 4
  /* 7754 1583F4 80139254 */
  .asciz "BH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7758, 0x18
  /* 7770 158410 80139270 */
  .asciz "BH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7774, 0x18
  /* 778C 15842C 8013928C */
  .asciz "C-"
  .balign 4
  /* 7790 158430 80139290 */
  .asciz "BH"
  .balign 4
  /* 7794 158434 80139294 */
  .asciz "C1"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7798, 0x4
  /* 779C 15843C 8013929C */
  .asciz "C<"
  .balign 4
  .incbin "ovl31.raw.bin", 0x77A0, 0x4
  /* 77A4 158444 801392A4 */
  .asciz "C:"
  .balign 4
  .incbin "ovl31.raw.bin", 0x77A8, 0x4
  /* 77AC 15844C 801392AC */
  .asciz "Cu"
  .balign 4
  /* 77B0 158450 801392B0 */
  .asciz "BH"
  .balign 4
  /* 77B4 158454 801392B4 */
  .asciz "Cm"
  .balign 4
  .incbin "ovl31.raw.bin", 0x77B8, 0x14

glabel D_ovl31_801392CC
  .incbin "ovl31.raw.bin", 0x77CC, 0xC0

glabel D_ovl31_8013938C
  .incbin "ovl31.raw.bin", 0x788C, 0x4
  /* 7890 158530 80139390 */
  .asciz "66"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7894, 0x10

glabel D_ovl31_801393A4
  .incbin "ovl31.raw.bin", 0x78A4, 0x10

glabel D_ovl31_801393B4
  .incbin "ovl31.raw.bin", 0x78B4, 0x68
  /* 791C 1585BC 8013941C */
  .asciz "A "
  .balign 4
  /* 7920 1585C0 80139420 */
  .asciz "A"
  .balign 4

glabel D_ovl31_80139424
  .incbin "ovl31.raw.bin", 0x7924, 0x70

glabel D_ovl31_80139494
  .incbin "ovl31.raw.bin", 0x7994, 0x20

glabel D_ovl31_801394B4
  /* 79B4 158654 801394B4 */
  .asciz "C/"
  .balign 4
  /* 79B8 158658 801394B8 */
  .asciz "C "
  .balign 4
  .incbin "ovl31.raw.bin", 0x79BC, 0x4
  /* 79C0 158660 801394C0 */
  .asciz "C0"
  .balign 4
  /* 79C4 158664 801394C4 */
  .asciz "C#"
  .balign 4
  /* 79C8 158668 801394C8 */
  .asciz "C "
  .balign 4
  /* 79CC 15866C 801394CC */
  .asciz "C*"
  .balign 4
  /* 79D0 158670 801394D0 */
  .asciz "C2"
  .balign 4
  /* 79D4 158674 801394D4 */
  .asciz "C%"
  .balign 4
  /* 79D8 158678 801394D8 */
  .asciz "C,"
  .balign 4
  /* 79DC 15867C 801394DC */
  .asciz "C-"
  .balign 4
  /* 79E0 158680 801394E0 */
  .asciz "C "
  .balign 4

glabel D_ovl31_801394E4
  /* 79E4 158684 801394E4 */
  .asciz "C "
  .balign 4
  /* 79E8 158688 801394E8 */
  .asciz "C*"
  .balign 4
  /* 79EC 15868C 801394EC */
  .asciz "C4"
  .balign 4

glabel D_ovl31_801394F0
  /* 79F0 158690 801394F0 */  .4byte D_ovl31_801397D4
  /* 79F4 158694 801394F4 */  .4byte D_ovl31_801397DC
  /* 79F8 158698 801394F8 */  .4byte D_ovl31_801397E0
  /* 79FC 15869C 801394FC */  .4byte D_ovl31_801397E4
  /* 7A00 1586A0 80139500 */  .4byte D_ovl31_801397EC
  /* 7A04 1586A4 80139504 */  .4byte D_ovl31_801397F8
  /* 7A08 1586A8 80139508 */  .4byte D_ovl31_80139800
  /* 7A0C 1586AC 8013950C */  .4byte D_ovl31_80139808
  /* 7A10 1586B0 80139510 */  .4byte D_ovl31_80139818
  /* 7A14 1586B4 80139514 */  .4byte D_ovl31_80139820
  /* 7A18 1586B8 80139518 */  .4byte D_ovl31_8013982C
  /* 7A1C 1586BC 8013951C */  .4byte D_ovl31_80139838

glabel D_ovl31_80139520
  .incbin "ovl31.raw.bin", 0x7A20, 0x4
  /* 7A24 1586C4 80139524 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7A28, 0x8
  /* 7A30 1586D0 80139530 */
  .asciz "BH"
  .balign 4
  /* 7A34 1586D4 80139534 */
  .asciz "B\\"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7A38, 0x8
  /* 7A40 1586E0 80139540 */
  .asciz "B "
  .balign 4
  .incbin "ovl31.raw.bin", 0x7A44, 0x8
  /* 7A4C 1586EC 8013954C */
  .asciz "BH"
  .balign 4

glabel D_ovl31_80139550
  .incbin "ovl31.raw.bin", 0x7A50, 0x30

glabel D_ovl31_80139580
  /* 7A80 158720 80139580 */  .4byte D_ovl31_80139840
  /* 7A84 158724 80139584 */  .4byte D_ovl31_80139844
  /* 7A88 158728 80139588 */  .4byte D_ovl31_8013984C
  .incbin "ovl31.raw.bin", 0x7A8C, 0x18

glabel D_ovl31_801395A4
  .incbin "ovl31.raw.bin", 0x7AA4, 0x4
  /* 7AA8 158748 801395A8 */
  .asciz "Bp"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7AAC, 0x1C

glabel D_ovl31_801395C8
  .incbin "ovl31.raw.bin", 0x7AC8, 0x20

glabel D_ovl31_801395E8
  .incbin "ovl31.raw.bin", 0x7AE8, 0x28

glabel D_ovl31_80139610
  .incbin "ovl31.raw.bin", 0x7B10, 0x4
  /* 7B14 1587B4 80139614 */
  .asciz "66"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7B18, 0x18

glabel D_ovl31_80139630
  .incbin "ovl31.raw.bin", 0x7B30, 0x28

glabel D_ovl31_80139658
  .incbin "ovl31.raw.bin", 0x7B58, 0x4
  /* 7B5C 1587FC 8013965C */
  .asciz "66"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7B60, 0x18

glabel D_ovl31_80139678
  .incbin "ovl31.raw.bin", 0x7B78, 0x4
  /* 7B7C 15881C 8013967C */
  .asciz "CW"
  .balign 4

glabel D_ovl31_80139680
  .incbin "ovl31.raw.bin", 0x7B80, 0x4
  /* 7B84 158824 80139684 */
  .asciz "C/"
  .balign 4
  /* 7B88 158828 80139688 */
  .asciz "Ca"
  .balign 4

glabel D_ovl31_8013968C
  .incbin "ovl31.raw.bin", 0x7B8C, 0x8
  /* 7B94 158834 80139694 */
  .asciz "CC"
  .balign 4
  /* 7B98 158838 80139698 */
  .asciz "Ck"
  .balign 4

glabel D_ovl31_8013969C
  .incbin "ovl31.raw.bin", 0x7B9C, 0xC

glabel D_ovl31_801396A8
  .incbin "ovl31.raw.bin", 0x7BA8, 0x14
  /* 7BBC 15885C 801396BC */
  .asciz "C4"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7BC0, 0x4
  /* 7BC4 158864 801396C4 */
  .asciz "C "
  .balign 4
  /* 7BC8 158868 801396C8 */
  .asciz "CH"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7BCC, 0x8
  /* 7BD4 158874 801396D4 */
  .asciz "C4"
  .balign 4
  /* 7BD8 158878 801396D8 */
  .asciz "C\\"
  .balign 4

glabel D_ovl31_801396DC
  .incbin "ovl31.raw.bin", 0x7BDC, 0x8

glabel jtbl_ovl31_801396E4
  /* 7BE4 158884 801396E4 */  .4byte jtgt_ovl31_80136290
  /* 7BE8 158888 801396E8 */  .4byte jtgt_ovl31_80136358
  /* 7BEC 15888C 801396EC */  .4byte jtgt_ovl31_801363E8
  /* 7BF0 158890 801396F0 */  .4byte jtgt_ovl31_801364B0
  /* 7BF4 158894 801396F4 */  .4byte jtgt_ovl31_80136540

glabel D_ovl31_801396F8
  .incbin "ovl31.raw.bin", 0x7BF8, 0x4
  /* 7BFC 15889C 801396FC */
  .asciz "Dz"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7C00, 0x4

glabel D_ovl31_80139704
  .incbin "ovl31.raw.bin", 0x7C04, 0x4
  /* 7C08 1588A8 80139708 */
  .asciz "Dz"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7C0C, 0x4

glabel D_ovl31_80139710
  /* 7C10 1588B0 80139710 */  .4byte D_NF_80392A00
  /* 7C14 1588B4 80139714 */  .4byte D_NF_803B6900
  /* 7C18 1588B8 80139718 */  .4byte D_NF_803DA800
  .incbin "ovl31.raw.bin", 0x7C1C, 0x10

glabel D_ovl31_8013972C
  .incbin "ovl31.raw.bin", 0x7C2C, 0x4
  /* 7C30 1588D0 80139730 */  .4byte func_8000A5E4
  /* 7C34 1588D4 80139734 */  .4byte func_800A26B8
  /* 7C38 1588D8 80139738 */  .4byte D_NF_8013A070
  .incbin "ovl31.raw.bin", 0x7C3C, 0x28
  /* 7C64 158904 80139764 */  .4byte func_ovl31_80131B20
  /* 7C68 158908 80139768 */  .4byte update_contdata
  .incbin "ovl31.raw.bin", 0x7C6C, 0x20
  /* 7C8C 15892C 8013978C */  .4byte jtbl_ovl0_800D5CAC
  .incbin "ovl31.raw.bin", 0x7C90, 0x24
  /* 7CB4 158954 801397B4 */  .4byte func_ovl31_80138B70
  .incbin "ovl31.raw.bin", 0x7CB8, 0x8

glabel D_ovl31_801397C0
  /* 7CC0 158960 801397C0 */
  .asciz "W1I1N1!"
  .balign 4

glabel D_ovl31_801397C8
  /* 7CC8 158968 801397C8 */
  .asciz "W1I1N1S1!"
  .balign 4

glabel D_ovl31_801397D4
  /* 7CD4 158974 801397D4 */
  .asciz "MARIO"
  .balign 4

glabel D_ovl31_801397DC
  /* 7CDC 15897C 801397DC */
  .asciz "FOX"
  .balign 4

glabel D_ovl31_801397E0
  /* 7CE0 158980 801397E0 */
  .asciz "D3K"
  .balign 4

glabel D_ovl31_801397E4
  /* 7CE4 158984 801397E4 */
  .asciz "SAMUS"
  .balign 4

glabel D_ovl31_801397EC
  /* 7CEC 15898C 801397EC */
  .asciz "LU1I1G1I"
  .balign 4

glabel D_ovl31_801397F8
  /* 7CF8 158998 801397F8 */
  .asciz "L1I1N1K"
  .balign 4

glabel D_ovl31_80139800
  /* 7D00 1589A0 80139800 */
  .asciz "YOSH3I"
  .balign 4

glabel D_ovl31_80139808
  /* 7D08 1589A8 80139808 */
  .asciz "C2.2FA1L1C1O1N"
  .balign 4

glabel D_ovl31_80139818
  /* 7D18 1589B8 80139818 */
  .asciz "K1I1RBY"
  .balign 4

glabel D_ovl31_80139820
  /* 7D20 1589C0 80139820 */
  .asciz "P4I4KAC3H3U"
  .balign 4

glabel D_ovl31_8013982C
  /* 7D2C 1589CC 8013982C */
  .asciz "JIGGLYPUFF"
  .balign 4

glabel D_ovl31_80139838
  /* 7D38 1589D8 80139838 */
  .asciz "N2E2S2S"
  .balign 4

glabel D_ovl31_80139840
  /* 7D40 1589E0 80139840 */
  .asciz "RED"
  .balign 4

glabel D_ovl31_80139844
  /* 7D44 1589E4 80139844 */
  .asciz "BLUE"
  .balign 4

glabel D_ovl31_8013984C
  /* 7D4C 1589EC 8013984C */
  .asciz "GREEN"
  .balign 4

glabel D_ovl31_80139854
  /* 7D54 1589F4 80139854 */
  .asciz "NO CONTEST"
  .balign 4
  .incbin "ovl31.raw.bin", 0x7D60, 0x4

glabel D_ovl31_80139864
  /* 7D64 158A04 80139864 */
  .4byte 0xc62be000 # .float -11000.0

glabel jtbl_ovl31_80139868
  /* 7D68 158A08 80139868 */  .4byte jtgt_ovl31_80138750
  /* 7D6C 158A0C 8013986C */  .4byte jtgt_ovl31_80138764
  /* 7D70 158A10 80139870 */  .4byte jtgt_ovl31_80138778
  /* 7D74 158A14 80139874 */  .4byte jtgt_ovl31_8013878C
  /* 7D78 158A18 80139878 */  .4byte jtgt_ovl31_80138750
  /* 7D7C 158A1C 8013987C */  .4byte jtgt_ovl31_801387A0
  /* 7D80 158A20 80139880 */  .4byte jtgt_ovl31_801387B4
  /* 7D84 158A24 80139884 */  .4byte jtgt_ovl31_801387C8
  /* 7D88 158A28 80139888 */  .4byte jtgt_ovl31_801387F0
  /* 7D8C 158A2C 8013988C */  .4byte jtgt_ovl31_801387DC
  /* 7D90 158A30 80139890 */  .4byte jtgt_ovl31_801387DC
  /* 7D94 158A34 80139894 */  .4byte jtgt_ovl31_80138804
  .incbin "ovl31.raw.bin", 0x7D98, 0x8
