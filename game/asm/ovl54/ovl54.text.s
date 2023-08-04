.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132AD0

glabel func_ovl54_80131B00
  /* 1774A0 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1774A4 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1774A8 80131B08 8C830000 */        lw $v1, ($a0)
  /* 1774AC 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 1774B0 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 1774B4 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 1774B8 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 1774BC 80131B1C 3C180002 */       lui $t8, 2
  /* 1774C0 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 1774C4 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 1774C8 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 1774CC 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 1774D0 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 1774D4 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 1774D8 80131B38 44060000 */      mfc1 $a2, $f0
  /* 1774DC 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 1774E0 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 1774E4 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 1774E8 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1774EC 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1774F0 80131B50 03E00008 */        jr $ra
  /* 1774F4 80131B54 00000000 */       nop 

glabel func_ovl54_80131B58
  /* 1774F8 80131B58 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1774FC 80131B5C AFBF0024 */        sw $ra, 0x24($sp)
  /* 177500 80131B60 AFB00020 */        sw $s0, 0x20($sp)
  /* 177504 80131B64 00002025 */        or $a0, $zero, $zero
  /* 177508 80131B68 00002825 */        or $a1, $zero, $zero
  /* 17750C 80131B6C 24060011 */     addiu $a2, $zero, 0x11
  /* 177510 80131B70 0C00265A */       jal omMakeGObjCommon
  /* 177514 80131B74 3C078000 */       lui $a3, 0x8000
  /* 177518 80131B78 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 17751C 80131B7C 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 177520 80131B80 3C0F0000 */       lui $t7, %hi(D_NF_00007E98)
  /* 177524 80131B84 3C018013 */       lui $at, %hi(D_ovl54_80132BE0)
  /* 177528 80131B88 25EF7E98 */     addiu $t7, $t7, %lo(D_NF_00007E98)
  /* 17752C 80131B8C AC222BE0 */        sw $v0, %lo(D_ovl54_80132BE0)($at)
  /* 177530 80131B90 00408025 */        or $s0, $v0, $zero
  /* 177534 80131B94 00402025 */        or $a0, $v0, $zero
  /* 177538 80131B98 00003025 */        or $a2, $zero, $zero
  /* 17753C 80131B9C 0C003C48 */       jal func_8000F120
  /* 177540 80131BA0 01CF2821 */      addu $a1, $t6, $t7
  /* 177544 80131BA4 3C058001 */       lui $a1, %hi(func_80014768)
  /* 177548 80131BA8 2418FFFF */     addiu $t8, $zero, -1
  /* 17754C 80131BAC AFB80010 */        sw $t8, 0x10($sp)
  /* 177550 80131BB0 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 177554 80131BB4 02002025 */        or $a0, $s0, $zero
  /* 177558 80131BB8 2406001D */     addiu $a2, $zero, 0x1d
  /* 17755C 80131BBC 0C00277D */       jal func_80009DF4
  /* 177560 80131BC0 3C078000 */       lui $a3, 0x8000
  /* 177564 80131BC4 3C198013 */       lui $t9, %hi(D_ovl54_80132F70)
  /* 177568 80131BC8 8F392F70 */        lw $t9, %lo(D_ovl54_80132F70)($t9)
  /* 17756C 80131BCC 3C080000 */       lui $t0, %hi(D_NF_000042F8)
  /* 177570 80131BD0 250842F8 */     addiu $t0, $t0, %lo(D_NF_000042F8)
  /* 177574 80131BD4 02002025 */        or $a0, $s0, $zero
  /* 177578 80131BD8 0C003E3D */       jal func_8000F8F4
  /* 17757C 80131BDC 03282821 */      addu $a1, $t9, $t0
  /* 177580 80131BE0 3C098013 */       lui $t1, %hi(D_ovl54_80132F70)
  /* 177584 80131BE4 8D292F70 */        lw $t1, %lo(D_ovl54_80132F70)($t1)
  /* 177588 80131BE8 3C0A0001 */       lui $t2, %hi(D_NF_00008788)
  /* 17758C 80131BEC 254A8788 */     addiu $t2, $t2, %lo(D_NF_00008788)
  /* 177590 80131BF0 02002025 */        or $a0, $s0, $zero
  /* 177594 80131BF4 24060000 */     addiu $a2, $zero, 0
  /* 177598 80131BF8 0C002F8A */       jal func_8000BE28
  /* 17759C 80131BFC 012A2821 */      addu $a1, $t1, $t2
  /* 1775A0 80131C00 0C0037CD */       jal func_8000DF34
  /* 1775A4 80131C04 02002025 */        or $a0, $s0, $zero
  /* 1775A8 80131C08 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1775AC 80131C0C 8FB00020 */        lw $s0, 0x20($sp)
  /* 1775B0 80131C10 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1775B4 80131C14 03E00008 */        jr $ra
  /* 1775B8 80131C18 00000000 */       nop 

glabel func_ovl54_80131C1C
  /* 1775BC 80131C1C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1775C0 80131C20 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1775C4 80131C24 00002025 */        or $a0, $zero, $zero
  /* 1775C8 80131C28 00002825 */        or $a1, $zero, $zero
  /* 1775CC 80131C2C 24060011 */     addiu $a2, $zero, 0x11
  /* 1775D0 80131C30 0C00265A */       jal omMakeGObjCommon
  /* 1775D4 80131C34 3C078000 */       lui $a3, 0x8000
  /* 1775D8 80131C38 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 1775DC 80131C3C 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 1775E0 80131C40 3C0F0001 */       lui $t7, %hi(D_NF_00008DF8)
  /* 1775E4 80131C44 3C018013 */       lui $at, %hi(D_ovl54_80132BE4)
  /* 1775E8 80131C48 25EF8DF8 */     addiu $t7, $t7, %lo(D_NF_00008DF8)
  /* 1775EC 80131C4C AC222BE4 */        sw $v0, %lo(D_ovl54_80132BE4)($at)
  /* 1775F0 80131C50 AFA20024 */        sw $v0, 0x24($sp)
  /* 1775F4 80131C54 00402025 */        or $a0, $v0, $zero
  /* 1775F8 80131C58 00003025 */        or $a2, $zero, $zero
  /* 1775FC 80131C5C 0C003C48 */       jal func_8000F120
  /* 177600 80131C60 01CF2821 */      addu $a1, $t6, $t7
  /* 177604 80131C64 3C058001 */       lui $a1, %hi(func_80014038)
  /* 177608 80131C68 2418FFFF */     addiu $t8, $zero, -1
  /* 17760C 80131C6C AFB80010 */        sw $t8, 0x10($sp)
  /* 177610 80131C70 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 177614 80131C74 8FA40024 */        lw $a0, 0x24($sp)
  /* 177618 80131C78 2406001D */     addiu $a2, $zero, 0x1d
  /* 17761C 80131C7C 0C00277D */       jal func_80009DF4
  /* 177620 80131C80 3C078000 */       lui $a3, 0x8000
  /* 177624 80131C84 8FBF001C */        lw $ra, 0x1c($sp)
  /* 177628 80131C88 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17762C 80131C8C 03E00008 */        jr $ra
  /* 177630 80131C90 00000000 */       nop 

glabel func_ovl54_80131C94
  /* 177634 80131C94 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 177638 80131C98 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17763C 80131C9C 00002025 */        or $a0, $zero, $zero
  /* 177640 80131CA0 00002825 */        or $a1, $zero, $zero
  /* 177644 80131CA4 24060011 */     addiu $a2, $zero, 0x11
  /* 177648 80131CA8 0C00265A */       jal omMakeGObjCommon
  /* 17764C 80131CAC 3C078000 */       lui $a3, 0x8000
  /* 177650 80131CB0 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 177654 80131CB4 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 177658 80131CB8 3C0F0001 */       lui $t7, %hi(D_NF_0000A6F8)
  /* 17765C 80131CBC 3C018013 */       lui $at, %hi(D_ovl54_80132BE8)
  /* 177660 80131CC0 25EFA6F8 */     addiu $t7, $t7, %lo(D_NF_0000A6F8)
  /* 177664 80131CC4 AC222BE8 */        sw $v0, %lo(D_ovl54_80132BE8)($at)
  /* 177668 80131CC8 AFA20024 */        sw $v0, 0x24($sp)
  /* 17766C 80131CCC 00402025 */        or $a0, $v0, $zero
  /* 177670 80131CD0 00003025 */        or $a2, $zero, $zero
  /* 177674 80131CD4 0C003C48 */       jal func_8000F120
  /* 177678 80131CD8 01CF2821 */      addu $a1, $t6, $t7
  /* 17767C 80131CDC 3C058001 */       lui $a1, %hi(func_80014038)
  /* 177680 80131CE0 2418FFFF */     addiu $t8, $zero, -1
  /* 177684 80131CE4 AFB80010 */        sw $t8, 0x10($sp)
  /* 177688 80131CE8 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 17768C 80131CEC 8FA40024 */        lw $a0, 0x24($sp)
  /* 177690 80131CF0 2406001D */     addiu $a2, $zero, 0x1d
  /* 177694 80131CF4 0C00277D */       jal func_80009DF4
  /* 177698 80131CF8 3C078000 */       lui $a3, 0x8000
  /* 17769C 80131CFC 3C198013 */       lui $t9, %hi(D_ovl54_80132F70)
  /* 1776A0 80131D00 8F392F70 */        lw $t9, %lo(D_ovl54_80132F70)($t9)
  /* 1776A4 80131D04 3C080001 */       lui $t0, %hi(D_NF_0000A7B0)
  /* 1776A8 80131D08 2508A7B0 */     addiu $t0, $t0, %lo(D_NF_0000A7B0)
  /* 1776AC 80131D0C 8FA40024 */        lw $a0, 0x24($sp)
  /* 1776B0 80131D10 3C064396 */       lui $a2, 0x4396
  /* 1776B4 80131D14 0C002F63 */       jal func_8000BD8C
  /* 1776B8 80131D18 03282821 */      addu $a1, $t9, $t0
  /* 1776BC 80131D1C 0C0037CD */       jal func_8000DF34
  /* 1776C0 80131D20 8FA40024 */        lw $a0, 0x24($sp)
  /* 1776C4 80131D24 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1776C8 80131D28 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1776CC 80131D2C 03E00008 */        jr $ra
  /* 1776D0 80131D30 00000000 */       nop 

glabel func_ovl54_80131D34
  /* 1776D4 80131D34 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1776D8 80131D38 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1776DC 80131D3C 00002025 */        or $a0, $zero, $zero
  /* 1776E0 80131D40 00002825 */        or $a1, $zero, $zero
  /* 1776E4 80131D44 24060011 */     addiu $a2, $zero, 0x11
  /* 1776E8 80131D48 0C00265A */       jal omMakeGObjCommon
  /* 1776EC 80131D4C 3C078000 */       lui $a3, 0x8000
  /* 1776F0 80131D50 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 1776F4 80131D54 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 1776F8 80131D58 3C0F0001 */       lui $t7, %hi(D_NF_0000AEB8)
  /* 1776FC 80131D5C 3C018013 */       lui $at, %hi(D_ovl54_80132BEC)
  /* 177700 80131D60 25EFAEB8 */     addiu $t7, $t7, %lo(D_NF_0000AEB8)
  /* 177704 80131D64 AC222BEC */        sw $v0, %lo(D_ovl54_80132BEC)($at)
  /* 177708 80131D68 AFA20024 */        sw $v0, 0x24($sp)
  /* 17770C 80131D6C 00402025 */        or $a0, $v0, $zero
  /* 177710 80131D70 00003025 */        or $a2, $zero, $zero
  /* 177714 80131D74 0C003C48 */       jal func_8000F120
  /* 177718 80131D78 01CF2821 */      addu $a1, $t6, $t7
  /* 17771C 80131D7C 3C058001 */       lui $a1, %hi(func_80014038)
  /* 177720 80131D80 2418FFFF */     addiu $t8, $zero, -1
  /* 177724 80131D84 AFB80010 */        sw $t8, 0x10($sp)
  /* 177728 80131D88 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 17772C 80131D8C 8FA40024 */        lw $a0, 0x24($sp)
  /* 177730 80131D90 2406001D */     addiu $a2, $zero, 0x1d
  /* 177734 80131D94 0C00277D */       jal func_80009DF4
  /* 177738 80131D98 3C078000 */       lui $a3, 0x8000
  /* 17773C 80131D9C 3C198013 */       lui $t9, %hi(D_ovl54_80132F70)
  /* 177740 80131DA0 8F392F70 */        lw $t9, %lo(D_ovl54_80132F70)($t9)
  /* 177744 80131DA4 3C080001 */       lui $t0, %hi(D_NF_0000AF70)
  /* 177748 80131DA8 2508AF70 */     addiu $t0, $t0, %lo(D_NF_0000AF70)
  /* 17774C 80131DAC 8FA40024 */        lw $a0, 0x24($sp)
  /* 177750 80131DB0 3C064396 */       lui $a2, 0x4396
  /* 177754 80131DB4 0C002F63 */       jal func_8000BD8C
  /* 177758 80131DB8 03282821 */      addu $a1, $t9, $t0
  /* 17775C 80131DBC 0C0037CD */       jal func_8000DF34
  /* 177760 80131DC0 8FA40024 */        lw $a0, 0x24($sp)
  /* 177764 80131DC4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 177768 80131DC8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17776C 80131DCC 03E00008 */        jr $ra
  /* 177770 80131DD0 00000000 */       nop 

glabel func_ovl54_80131DD4
  /* 177774 80131DD4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 177778 80131DD8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17777C 80131DDC 00002025 */        or $a0, $zero, $zero
  /* 177780 80131DE0 00002825 */        or $a1, $zero, $zero
  /* 177784 80131DE4 24060011 */     addiu $a2, $zero, 0x11
  /* 177788 80131DE8 0C00265A */       jal omMakeGObjCommon
  /* 17778C 80131DEC 3C078000 */       lui $a3, 0x8000
  /* 177790 80131DF0 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 177794 80131DF4 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 177798 80131DF8 3C0F0001 */       lui $t7, %hi(D_NF_0000BDC0)
  /* 17779C 80131DFC 3C018013 */       lui $at, %hi(D_ovl54_80132BF0)
  /* 1777A0 80131E00 25EFBDC0 */     addiu $t7, $t7, %lo(D_NF_0000BDC0)
  /* 1777A4 80131E04 AC222BF0 */        sw $v0, %lo(D_ovl54_80132BF0)($at)
  /* 1777A8 80131E08 AFA20024 */        sw $v0, 0x24($sp)
  /* 1777AC 80131E0C 00402025 */        or $a0, $v0, $zero
  /* 1777B0 80131E10 00003025 */        or $a2, $zero, $zero
  /* 1777B4 80131E14 0C003C48 */       jal func_8000F120
  /* 1777B8 80131E18 01CF2821 */      addu $a1, $t6, $t7
  /* 1777BC 80131E1C 3C058001 */       lui $a1, %hi(func_80014038)
  /* 1777C0 80131E20 2418FFFF */     addiu $t8, $zero, -1
  /* 1777C4 80131E24 AFB80010 */        sw $t8, 0x10($sp)
  /* 1777C8 80131E28 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 1777CC 80131E2C 8FA40024 */        lw $a0, 0x24($sp)
  /* 1777D0 80131E30 2406001D */     addiu $a2, $zero, 0x1d
  /* 1777D4 80131E34 0C00277D */       jal func_80009DF4
  /* 1777D8 80131E38 3C078000 */       lui $a3, 0x8000
  /* 1777DC 80131E3C 3C198013 */       lui $t9, %hi(D_ovl54_80132F70)
  /* 1777E0 80131E40 8F392F70 */        lw $t9, %lo(D_ovl54_80132F70)($t9)
  /* 1777E4 80131E44 3C080001 */       lui $t0, %hi(D_NF_0000BEA0)
  /* 1777E8 80131E48 2508BEA0 */     addiu $t0, $t0, %lo(D_NF_0000BEA0)
  /* 1777EC 80131E4C 8FA40024 */        lw $a0, 0x24($sp)
  /* 1777F0 80131E50 3C064396 */       lui $a2, 0x4396
  /* 1777F4 80131E54 0C002F63 */       jal func_8000BD8C
  /* 1777F8 80131E58 03282821 */      addu $a1, $t9, $t0
  /* 1777FC 80131E5C 0C0037CD */       jal func_8000DF34
  /* 177800 80131E60 8FA40024 */        lw $a0, 0x24($sp)
  /* 177804 80131E64 8FBF001C */        lw $ra, 0x1c($sp)
  /* 177808 80131E68 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17780C 80131E6C 03E00008 */        jr $ra
  /* 177810 80131E70 00000000 */       nop 

glabel func_ovl54_80131E74
  /* 177814 80131E74 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 177818 80131E78 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17781C 80131E7C 00002025 */        or $a0, $zero, $zero
  /* 177820 80131E80 00002825 */        or $a1, $zero, $zero
  /* 177824 80131E84 24060011 */     addiu $a2, $zero, 0x11
  /* 177828 80131E88 0C00265A */       jal omMakeGObjCommon
  /* 17782C 80131E8C 3C078000 */       lui $a3, 0x8000
  /* 177830 80131E90 3C0E8013 */       lui $t6, %hi(D_ovl54_80132F70)
  /* 177834 80131E94 8DCE2F70 */        lw $t6, %lo(D_ovl54_80132F70)($t6)
  /* 177838 80131E98 3C0F0001 */       lui $t7, %hi(D_NF_0000C690)
  /* 17783C 80131E9C 3C018013 */       lui $at, %hi(D_ovl54_80132BF4)
  /* 177840 80131EA0 25EFC690 */     addiu $t7, $t7, %lo(D_NF_0000C690)
  /* 177844 80131EA4 AC222BF4 */        sw $v0, %lo(D_ovl54_80132BF4)($at)
  /* 177848 80131EA8 AFA20024 */        sw $v0, 0x24($sp)
  /* 17784C 80131EAC 00402025 */        or $a0, $v0, $zero
  /* 177850 80131EB0 0C0024B4 */       jal func_800092D0
  /* 177854 80131EB4 01CF2821 */      addu $a1, $t6, $t7
  /* 177858 80131EB8 AFA20020 */        sw $v0, 0x20($sp)
  /* 17785C 80131EBC 00402025 */        or $a0, $v0, $zero
  /* 177860 80131EC0 2405001C */     addiu $a1, $zero, 0x1c
  /* 177864 80131EC4 0C002330 */       jal func_80008CC0
  /* 177868 80131EC8 00003025 */        or $a2, $zero, $zero
  /* 17786C 80131ECC 3C058001 */       lui $a1, %hi(func_80013E68)
  /* 177870 80131ED0 2418FFFF */     addiu $t8, $zero, -1
  /* 177874 80131ED4 AFB80010 */        sw $t8, 0x10($sp)
  /* 177878 80131ED8 24A53E68 */     addiu $a1, $a1, %lo(func_80013E68)
  /* 17787C 80131EDC 8FA40024 */        lw $a0, 0x24($sp)
  /* 177880 80131EE0 2406001D */     addiu $a2, $zero, 0x1d
  /* 177884 80131EE4 0C00277D */       jal func_80009DF4
  /* 177888 80131EE8 3C078000 */       lui $a3, 0x8000
  /* 17788C 80131EEC 3C198013 */       lui $t9, %hi(D_ovl54_80132F70)
  /* 177890 80131EF0 8F392F70 */        lw $t9, %lo(D_ovl54_80132F70)($t9)
  /* 177894 80131EF4 3C080001 */       lui $t0, %hi(D_NF_0000C884)
  /* 177898 80131EF8 2508C884 */     addiu $t0, $t0, %lo(D_NF_0000C884)
  /* 17789C 80131EFC 8FA40020 */        lw $a0, 0x20($sp)
  /* 1778A0 80131F00 3C064396 */       lui $a2, 0x4396
  /* 1778A4 80131F04 0C002F47 */       jal func_8000BD1C
  /* 1778A8 80131F08 03282821 */      addu $a1, $t9, $t0
  /* 1778AC 80131F0C 0C0037CD */       jal func_8000DF34
  /* 1778B0 80131F10 8FA40024 */        lw $a0, 0x24($sp)
  /* 1778B4 80131F14 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1778B8 80131F18 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1778BC 80131F1C 03E00008 */        jr $ra
  /* 1778C0 80131F20 00000000 */       nop 

glabel func_ovl54_80131F24
  /* 1778C4 80131F24 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 1778C8 80131F28 00802825 */        or $a1, $a0, $zero
  /* 1778CC 80131F2C 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 1778D0 80131F30 27A4001C */     addiu $a0, $sp, 0x1c
  /* 1778D4 80131F34 3C028013 */       lui $v0, %hi(D_ovl54_80132C08)
  /* 1778D8 80131F38 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 1778DC 80131F3C 24422C08 */     addiu $v0, $v0, %lo(D_ovl54_80132C08)
  /* 1778E0 80131F40 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1778E4 80131F44 25C8003C */     addiu $t0, $t6, 0x3c
  /* 1778E8 80131F48 0080C825 */        or $t9, $a0, $zero
  .L80131F4C:
  /* 1778EC 80131F4C 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 1778F0 80131F50 25CE000C */     addiu $t6, $t6, 0xc
  /* 1778F4 80131F54 2739000C */     addiu $t9, $t9, 0xc
  /* 1778F8 80131F58 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1778FC 80131F5C 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 177900 80131F60 AF2FFFF8 */        sw $t7, -8($t9)
  /* 177904 80131F64 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 177908 80131F68 15C8FFF8 */       bne $t6, $t0, .L80131F4C
  /* 17790C 80131F6C AF38FFFC */        sw $t8, -4($t9)
  /* 177910 80131F70 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 177914 80131F74 3C018013 */       lui $at, %hi(D_ovl54_80132BB0)
  /* 177918 80131F78 3C0B8013 */       lui $t3, %hi(D_ovl54_80132BC8)
  /* 17791C 80131F7C AF380000 */        sw $t8, ($t9)
  /* 177920 80131F80 C4242BB0 */      lwc1 $f4, %lo(D_ovl54_80132BB0)($at)
  /* 177924 80131F84 3C018013 */       lui $at, %hi(D_ovl54_80132BB4)
  /* 177928 80131F88 C4262BB4 */      lwc1 $f6, %lo(D_ovl54_80132BB4)($at)
  /* 17792C 80131F8C 3C018013 */       lui $at, %hi(D_ovl54_80132BB8)
  /* 177930 80131F90 8C490004 */        lw $t1, 4($v0) # D_ovl54_80132C08 + 4
  /* 177934 80131F94 8C4A0008 */        lw $t2, 8($v0) # D_ovl54_80132C08 + 8
  /* 177938 80131F98 8D6B2BC8 */        lw $t3, %lo(D_ovl54_80132BC8)($t3)
  /* 17793C 80131F9C C4282BB8 */      lwc1 $f8, %lo(D_ovl54_80132BB8)($at)
  /* 177940 80131FA0 AFA5001C */        sw $a1, 0x1c($sp)
  /* 177944 80131FA4 E7A40020 */      swc1 $f4, 0x20($sp)
  /* 177948 80131FA8 E7A60024 */      swc1 $f6, 0x24($sp)
  /* 17794C 80131FAC A3A90033 */        sb $t1, 0x33($sp)
  /* 177950 80131FB0 A3AA0034 */        sb $t2, 0x34($sp)
  /* 177954 80131FB4 AFAB0054 */        sw $t3, 0x54($sp)
  /* 177958 80131FB8 0C035FCF */       jal ftManager_CreateFighter
  /* 17795C 80131FBC E7A80028 */      swc1 $f8, 0x28($sp)
  /* 177960 80131FC0 3C018013 */       lui $at, %hi(D_ovl54_80132BDC)
  /* 177964 80131FC4 3C050001 */       lui $a1, (0x10009 >> 16) # 65545
  /* 177968 80131FC8 AC222BDC */        sw $v0, %lo(D_ovl54_80132BDC)($at)
  /* 17796C 80131FCC 34A50009 */       ori $a1, $a1, (0x10009 & 0xFFFF) # 65545
  /* 177970 80131FD0 0C0E4173 */       jal func_ovl1_803905CC
  /* 177974 80131FD4 00402025 */        or $a0, $v0, $zero
  /* 177978 80131FD8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17797C 80131FDC 27BD0060 */     addiu $sp, $sp, 0x60
  /* 177980 80131FE0 03E00008 */        jr $ra
  /* 177984 80131FE4 00000000 */       nop 

glabel func_ovl54_80131FE8
  /* 177988 80131FE8 3C038013 */       lui $v1, %hi(D_ovl54_80132BCC)
  /* 17798C 80131FEC 8C632BCC */        lw $v1, %lo(D_ovl54_80132BCC)($v1)
  /* 177990 80131FF0 3C0C8004 */       lui $t4, %hi(gpDisplayListHead)
  /* 177994 80131FF4 AFA40000 */        sw $a0, ($sp)
  /* 177998 80131FF8 2861021C */      slti $at, $v1, 0x21c
  /* 17799C 80131FFC 14200005 */      bnez $at, .L80132014
  /* 1779A0 80132000 258C65B0 */     addiu $t4, $t4, %lo(gpDisplayListHead)
  /* 1779A4 80132004 3C028013 */       lui $v0, %hi(D_ovl54_80132BF8)
  /* 1779A8 80132008 24422BF8 */     addiu $v0, $v0, %lo(D_ovl54_80132BF8)
  /* 1779AC 8013200C 240E00FF */     addiu $t6, $zero, 0xff
  /* 1779B0 80132010 AC4E0000 */        sw $t6, ($v0) # D_ovl54_80132BF8 + 0
  .L80132014:
  /* 1779B4 80132014 3C028013 */       lui $v0, %hi(D_ovl54_80132BF8)
  /* 1779B8 80132018 28610046 */      slti $at, $v1, 0x46
  /* 1779BC 8013201C 1420000A */      bnez $at, .L80132048
  /* 1779C0 80132020 24422BF8 */     addiu $v0, $v0, %lo(D_ovl54_80132BF8)
  /* 1779C4 80132024 2861021C */      slti $at, $v1, 0x21c
  /* 1779C8 80132028 50200008 */      beql $at, $zero, .L8013204C
  /* 1779CC 8013202C 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 1779D0 80132030 8C430000 */        lw $v1, ($v0) # D_ovl54_80132BF8 + 0
  /* 1779D4 80132034 18600004 */      blez $v1, .L80132048
  /* 1779D8 80132038 246FFFF9 */     addiu $t7, $v1, -7
  /* 1779DC 8013203C 05E10002 */      bgez $t7, .L80132048
  /* 1779E0 80132040 AC4F0000 */        sw $t7, ($v0) # D_ovl54_80132BF8 + 0
  /* 1779E4 80132044 AC400000 */        sw $zero, ($v0) # D_ovl54_80132BF8 + 0
  .L80132048:
  /* 1779E8 80132048 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  .L8013204C:
  /* 1779EC 8013204C 3C0DE700 */       lui $t5, 0xe700
  /* 1779F0 80132050 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 1779F4 80132054 24990008 */     addiu $t9, $a0, 8
  /* 1779F8 80132058 AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 1779FC 8013205C AC800004 */        sw $zero, 4($a0)
  /* 177A00 80132060 AC8D0000 */        sw $t5, ($a0)
  /* 177A04 80132064 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177A08 80132068 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 177A0C 8013206C 3C19FA00 */       lui $t9, 0xfa00
  /* 177A10 80132070 248E0008 */     addiu $t6, $a0, 8
  /* 177A14 80132074 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 177A18 80132078 AC800004 */        sw $zero, 4($a0)
  /* 177A1C 8013207C AC8F0000 */        sw $t7, ($a0)
  /* 177A20 80132080 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177A24 80132084 24980008 */     addiu $t8, $a0, 8
  /* 177A28 80132088 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 177A2C 8013208C AC990000 */        sw $t9, ($a0)
  /* 177A30 80132090 8C4E0000 */        lw $t6, ($v0) # D_ovl54_80132BF8 + 0
  /* 177A34 80132094 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 177A38 80132098 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 177A3C 8013209C 31CF00FF */      andi $t7, $t6, 0xff
  /* 177A40 801320A0 AC8F0004 */        sw $t7, 4($a0)
  /* 177A44 801320A4 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177A48 801320A8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 177A4C 801320AC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 177A50 801320B0 24980008 */     addiu $t8, $a0, 8
  /* 177A54 801320B4 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 177A58 801320B8 AC8E0004 */        sw $t6, 4($a0)
  /* 177A5C 801320BC AC990000 */        sw $t9, ($a0)
  /* 177A60 801320C0 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177A64 801320C4 3C190050 */       lui $t9, (0x504340 >> 16) # 5260096
  /* 177A68 801320C8 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 177A6C 801320CC 248F0008 */     addiu $t7, $a0, 8
  /* 177A70 801320D0 AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 177A74 801320D4 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 177A78 801320D8 37394340 */       ori $t9, $t9, (0x504340 & 0xFFFF) # 5260096
  /* 177A7C 801320DC AC990004 */        sw $t9, 4($a0)
  /* 177A80 801320E0 AC980000 */        sw $t8, ($a0)
  /* 177A84 801320E4 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177A88 801320E8 3C180002 */       lui $t8, (0x28028 >> 16) # 163880
  /* 177A8C 801320EC 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 177A90 801320F0 248E0008 */     addiu $t6, $a0, 8
  /* 177A94 801320F4 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 177A98 801320F8 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 177A9C 801320FC 37188028 */       ori $t8, $t8, (0x28028 & 0xFFFF) # 163880
  /* 177AA0 80132100 AC980004 */        sw $t8, 4($a0)
  /* 177AA4 80132104 AC8F0000 */        sw $t7, ($a0)
  /* 177AA8 80132108 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177AAC 8013210C 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 177AB0 80132110 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 177AB4 80132114 24990008 */     addiu $t9, $a0, 8
  /* 177AB8 80132118 AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 177ABC 8013211C AC800004 */        sw $zero, 4($a0)
  /* 177AC0 80132120 AC8D0000 */        sw $t5, ($a0)
  /* 177AC4 80132124 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 177AC8 80132128 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 177ACC 8013212C 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 177AD0 80132130 248E0008 */     addiu $t6, $a0, 8
  /* 177AD4 80132134 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 177AD8 80132138 AC980004 */        sw $t8, 4($a0)
  /* 177ADC 8013213C 03E00008 */        jr $ra
  /* 177AE0 80132140 AC8F0000 */        sw $t7, ($a0)

glabel func_ovl54_80132144
  /* 177AE4 80132144 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 177AE8 80132148 AFBF001C */        sw $ra, 0x1c($sp)
  /* 177AEC 8013214C 240E00FF */     addiu $t6, $zero, 0xff
  /* 177AF0 80132150 3C018013 */       lui $at, %hi(D_ovl54_80132BF8)
  /* 177AF4 80132154 AC2E2BF8 */        sw $t6, %lo(D_ovl54_80132BF8)($at)
  /* 177AF8 80132158 00002025 */        or $a0, $zero, $zero
  /* 177AFC 8013215C 00002825 */        or $a1, $zero, $zero
  /* 177B00 80132160 24060012 */     addiu $a2, $zero, 0x12
  /* 177B04 80132164 0C00265A */       jal omMakeGObjCommon
  /* 177B08 80132168 3C078000 */       lui $a3, 0x8000
  /* 177B0C 8013216C 3C018013 */       lui $at, %hi(D_ovl54_80132C00)
  /* 177B10 80132170 3C058013 */       lui $a1, %hi(func_ovl54_80131FE8)
  /* 177B14 80132174 240FFFFF */     addiu $t7, $zero, -1
  /* 177B18 80132178 AC222C00 */        sw $v0, %lo(D_ovl54_80132C00)($at)
  /* 177B1C 8013217C AFAF0010 */        sw $t7, 0x10($sp)
  /* 177B20 80132180 24A51FE8 */     addiu $a1, $a1, %lo(func_ovl54_80131FE8)
  /* 177B24 80132184 00402025 */        or $a0, $v0, $zero
  /* 177B28 80132188 2406001A */     addiu $a2, $zero, 0x1a
  /* 177B2C 8013218C 0C00277D */       jal func_80009DF4
  /* 177B30 80132190 3C078000 */       lui $a3, 0x8000
  /* 177B34 80132194 8FBF001C */        lw $ra, 0x1c($sp)
  /* 177B38 80132198 27BD0020 */     addiu $sp, $sp, 0x20
  /* 177B3C 8013219C 03E00008 */        jr $ra
  /* 177B40 801321A0 00000000 */       nop 

glabel func_ovl54_801321A4
  /* 177B44 801321A4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 177B48 801321A8 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 177B4C 801321AC AFBF003C */        sw $ra, 0x3c($sp)
  /* 177B50 801321B0 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 177B54 801321B4 240F003C */     addiu $t7, $zero, 0x3c
  /* 177B58 801321B8 24180000 */     addiu $t8, $zero, 0
  /* 177B5C 801321BC 3C190400 */       lui $t9, 0x400
  /* 177B60 801321C0 2408FFFF */     addiu $t0, $zero, -1
  /* 177B64 801321C4 24090001 */     addiu $t1, $zero, 1
  /* 177B68 801321C8 240A0001 */     addiu $t2, $zero, 1
  /* 177B6C 801321CC AFAA0030 */        sw $t2, 0x30($sp)
  /* 177B70 801321D0 AFA90028 */        sw $t1, 0x28($sp)
  /* 177B74 801321D4 AFA80020 */        sw $t0, 0x20($sp)
  /* 177B78 801321D8 AFB9001C */        sw $t9, 0x1c($sp)
  /* 177B7C 801321DC AFB80018 */        sw $t8, 0x18($sp)
  /* 177B80 801321E0 AFAF0014 */        sw $t7, 0x14($sp)
  /* 177B84 801321E4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 177B88 801321E8 AFA00024 */        sw $zero, 0x24($sp)
  /* 177B8C 801321EC AFA0002C */        sw $zero, 0x2c($sp)
  /* 177B90 801321F0 AFA00034 */        sw $zero, 0x34($sp)
  /* 177B94 801321F4 24040401 */     addiu $a0, $zero, 0x401
  /* 177B98 801321F8 00002825 */        or $a1, $zero, $zero
  /* 177B9C 801321FC 24060010 */     addiu $a2, $zero, 0x10
  /* 177BA0 80132200 0C002E4F */       jal func_8000B93C
  /* 177BA4 80132204 3C078000 */       lui $a3, 0x8000
  /* 177BA8 80132208 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 177BAC 8013220C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 177BB0 80132210 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 177BB4 80132214 8C430074 */        lw $v1, 0x74($v0)
  /* 177BB8 80132218 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 177BBC 8013221C 44050000 */      mfc1 $a1, $f0
  /* 177BC0 80132220 44060000 */      mfc1 $a2, $f0
  /* 177BC4 80132224 3C07439B */       lui $a3, 0x439b
  /* 177BC8 80132228 24640008 */     addiu $a0, $v1, 8
  /* 177BCC 8013222C 0C001C20 */       jal func_80007080
  /* 177BD0 80132230 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 177BD4 80132234 8FBF003C */        lw $ra, 0x3c($sp)
  /* 177BD8 80132238 27BD0040 */     addiu $sp, $sp, 0x40
  /* 177BDC 8013223C 03E00008 */        jr $ra
  /* 177BE0 80132240 00000000 */       nop 

glabel func_ovl54_80132244
  /* 177BE4 80132244 3C0E8013 */       lui $t6, %hi(D_ovl54_80132BCC)
  /* 177BE8 80132248 8DCE2BCC */        lw $t6, %lo(D_ovl54_80132BCC)($t6)
  /* 177BEC 8013224C 3C0C8004 */       lui $t4, %hi(gpDisplayListHead)
  /* 177BF0 80132250 AFA40000 */        sw $a0, ($sp)
  /* 177BF4 80132254 29C10154 */      slti $at, $t6, 0x154
  /* 177BF8 80132258 14200014 */      bnez $at, .L801322AC
  /* 177BFC 8013225C 258C65B0 */     addiu $t4, $t4, %lo(gpDisplayListHead)
  /* 177C00 80132260 3C0B8013 */       lui $t3, %hi(D_ovl54_80132BFC)
  /* 177C04 80132264 256B2BFC */     addiu $t3, $t3, %lo(D_ovl54_80132BFC)
  /* 177C08 80132268 3C01435C */       lui $at, (0x435C0000 >> 16) # 220.0
  /* 177C0C 8013226C 44811000 */      mtc1 $at, $f2 # 220.0 to cop1
  /* 177C10 80132270 C5600000 */      lwc1 $f0, ($t3) # D_ovl54_80132BFC + 0
  /* 177C14 80132274 3C018013 */       lui $at, %hi(D_ovl54_80132BBC)
  /* 177C18 80132278 4602003C */    c.lt.s $f0, $f2
  /* 177C1C 8013227C 00000000 */       nop 
  /* 177C20 80132280 4502000B */     bc1fl .L801322B0
  /* 177C24 80132284 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177C28 80132288 C4242BBC */      lwc1 $f4, %lo(D_ovl54_80132BBC)($at)
  /* 177C2C 8013228C 46040180 */     add.s $f6, $f0, $f4
  /* 177C30 80132290 E5660000 */      swc1 $f6, ($t3) # D_ovl54_80132BFC + 0
  /* 177C34 80132294 C5680000 */      lwc1 $f8, ($t3) # D_ovl54_80132BFC + 0
  /* 177C38 80132298 4608103C */    c.lt.s $f2, $f8
  /* 177C3C 8013229C 00000000 */       nop 
  /* 177C40 801322A0 45020003 */     bc1fl .L801322B0
  /* 177C44 801322A4 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177C48 801322A8 E5620000 */      swc1 $f2, ($t3) # D_ovl54_80132BFC + 0
  .L801322AC:
  /* 177C4C 801322AC 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  .L801322B0:
  /* 177C50 801322B0 3C0DE700 */       lui $t5, 0xe700
  /* 177C54 801322B4 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 177C58 801322B8 246F0008 */     addiu $t7, $v1, 8
  /* 177C5C 801322BC AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 177C60 801322C0 AC600004 */        sw $zero, 4($v1)
  /* 177C64 801322C4 AC6D0000 */        sw $t5, ($v1)
  /* 177C68 801322C8 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177C6C 801322CC 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 177C70 801322D0 3C0B8013 */       lui $t3, %hi(D_ovl54_80132BFC)
  /* 177C74 801322D4 24780008 */     addiu $t8, $v1, 8
  /* 177C78 801322D8 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 177C7C 801322DC AC600004 */        sw $zero, 4($v1)
  /* 177C80 801322E0 AC790000 */        sw $t9, ($v1)
  /* 177C84 801322E4 8D850000 */        lw $a1, ($t4) # gpDisplayListHead + 0
  /* 177C88 801322E8 3C0FFA00 */       lui $t7, 0xfa00
  /* 177C8C 801322EC 256B2BFC */     addiu $t3, $t3, %lo(D_ovl54_80132BFC)
  /* 177C90 801322F0 24AE0008 */     addiu $t6, $a1, 8
  /* 177C94 801322F4 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 177C98 801322F8 24190001 */     addiu $t9, $zero, 1
  /* 177C9C 801322FC 4458F800 */      cfc1 $t8, $31
  /* 177CA0 80132300 ACAF0000 */        sw $t7, ($a1)
  /* 177CA4 80132304 44D9F800 */      ctc1 $t9, $31
  /* 177CA8 80132308 C56A0000 */      lwc1 $f10, ($t3) # D_ovl54_80132BFC + 0
  /* 177CAC 8013230C 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 177CB0 80132310 46005424 */   cvt.w.s $f16, $f10
  /* 177CB4 80132314 4459F800 */      cfc1 $t9, $31
  /* 177CB8 80132318 00000000 */       nop 
  /* 177CBC 8013231C 33390078 */      andi $t9, $t9, 0x78
  /* 177CC0 80132320 53200013 */      beql $t9, $zero, .L80132370
  /* 177CC4 80132324 44198000 */      mfc1 $t9, $f16
  /* 177CC8 80132328 44818000 */      mtc1 $at, $f16 # 2147483600.0 to cop1
  /* 177CCC 8013232C 24190001 */     addiu $t9, $zero, 1
  /* 177CD0 80132330 46105401 */     sub.s $f16, $f10, $f16
  /* 177CD4 80132334 44D9F800 */      ctc1 $t9, $31
  /* 177CD8 80132338 00000000 */       nop 
  /* 177CDC 8013233C 46008424 */   cvt.w.s $f16, $f16
  /* 177CE0 80132340 4459F800 */      cfc1 $t9, $31
  /* 177CE4 80132344 00000000 */       nop 
  /* 177CE8 80132348 33390078 */      andi $t9, $t9, 0x78
  /* 177CEC 8013234C 17200005 */      bnez $t9, .L80132364
  /* 177CF0 80132350 00000000 */       nop 
  /* 177CF4 80132354 44198000 */      mfc1 $t9, $f16
  /* 177CF8 80132358 3C018000 */       lui $at, 0x8000
  /* 177CFC 8013235C 10000007 */         b .L8013237C
  /* 177D00 80132360 0321C825 */        or $t9, $t9, $at
  .L80132364:
  /* 177D04 80132364 10000005 */         b .L8013237C
  /* 177D08 80132368 2419FFFF */     addiu $t9, $zero, -1
  /* 177D0C 8013236C 44198000 */      mfc1 $t9, $f16
  .L80132370:
  /* 177D10 80132370 00000000 */       nop 
  /* 177D14 80132374 0720FFFB */      bltz $t9, .L80132364
  /* 177D18 80132378 00000000 */       nop 
  .L8013237C:
  /* 177D1C 8013237C 03207025 */        or $t6, $t9, $zero
  /* 177D20 80132380 31CF00FF */      andi $t7, $t6, 0xff
  /* 177D24 80132384 44D8F800 */      ctc1 $t8, $31
  /* 177D28 80132388 2401FF00 */     addiu $at, $zero, -0x100
  /* 177D2C 8013238C 01E1C025 */        or $t8, $t7, $at
  /* 177D30 80132390 ACB80004 */        sw $t8, 4($a1)
  /* 177D34 80132394 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177D38 80132398 3C0FFFFD */       lui $t7, (0xFFFDF6FB >> 16) # 4294833915
  /* 177D3C 8013239C 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 177D40 801323A0 24790008 */     addiu $t9, $v1, 8
  /* 177D44 801323A4 AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 177D48 801323A8 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 177D4C 801323AC 35EFF6FB */       ori $t7, $t7, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 177D50 801323B0 AC6F0004 */        sw $t7, 4($v1)
  /* 177D54 801323B4 AC6E0000 */        sw $t6, ($v1)
  /* 177D58 801323B8 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177D5C 801323BC 3C0E0050 */       lui $t6, (0x504340 >> 16) # 5260096
  /* 177D60 801323C0 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 177D64 801323C4 24780008 */     addiu $t8, $v1, 8
  /* 177D68 801323C8 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 177D6C 801323CC 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 177D70 801323D0 35CE4340 */       ori $t6, $t6, (0x504340 & 0xFFFF) # 5260096
  /* 177D74 801323D4 AC6E0004 */        sw $t6, 4($v1)
  /* 177D78 801323D8 AC790000 */        sw $t9, ($v1)
  /* 177D7C 801323DC 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177D80 801323E0 3C190002 */       lui $t9, (0x28028 >> 16) # 163880
  /* 177D84 801323E4 3C18F64D */       lui $t8, (0xF64D8398 >> 16) # 4132275096
  /* 177D88 801323E8 246F0008 */     addiu $t7, $v1, 8
  /* 177D8C 801323EC AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 177D90 801323F0 37188398 */       ori $t8, $t8, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 177D94 801323F4 37398028 */       ori $t9, $t9, (0x28028 & 0xFFFF) # 163880
  /* 177D98 801323F8 AC790004 */        sw $t9, 4($v1)
  /* 177D9C 801323FC AC780000 */        sw $t8, ($v1)
  /* 177DA0 80132400 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177DA4 80132404 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 177DA8 80132408 3C190055 */       lui $t9, (0x552078 >> 16) # 5578872
  /* 177DAC 8013240C 246E0008 */     addiu $t6, $v1, 8
  /* 177DB0 80132410 AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 177DB4 80132414 AC600004 */        sw $zero, 4($v1)
  /* 177DB8 80132418 AC6D0000 */        sw $t5, ($v1)
  /* 177DBC 8013241C 8D830000 */        lw $v1, ($t4) # gpDisplayListHead + 0
  /* 177DC0 80132420 37392078 */       ori $t9, $t9, (0x552078 & 0xFFFF) # 5578872
  /* 177DC4 80132424 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 177DC8 80132428 246F0008 */     addiu $t7, $v1, 8
  /* 177DCC 8013242C AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 177DD0 80132430 AC790004 */        sw $t9, 4($v1)
  /* 177DD4 80132434 03E00008 */        jr $ra
  /* 177DD8 80132438 AC780000 */        sw $t8, ($v1)

glabel func_ovl54_8013243C
  /* 177DDC 8013243C 44802000 */      mtc1 $zero, $f4
  /* 177DE0 80132440 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 177DE4 80132444 AFBF001C */        sw $ra, 0x1c($sp)
  /* 177DE8 80132448 3C018013 */       lui $at, %hi(D_ovl54_80132BFC)
  /* 177DEC 8013244C 00002025 */        or $a0, $zero, $zero
  /* 177DF0 80132450 00002825 */        or $a1, $zero, $zero
  /* 177DF4 80132454 24060015 */     addiu $a2, $zero, 0x15
  /* 177DF8 80132458 3C078000 */       lui $a3, 0x8000
  /* 177DFC 8013245C 0C00265A */       jal omMakeGObjCommon
  /* 177E00 80132460 E4242BFC */      swc1 $f4, %lo(D_ovl54_80132BFC)($at)
  /* 177E04 80132464 3C018013 */       lui $at, %hi(D_ovl54_80132C04)
  /* 177E08 80132468 3C058013 */       lui $a1, %hi(func_ovl54_80132244)
  /* 177E0C 8013246C 240EFFFF */     addiu $t6, $zero, -1
  /* 177E10 80132470 AC222C04 */        sw $v0, %lo(D_ovl54_80132C04)($at)
  /* 177E14 80132474 AFAE0010 */        sw $t6, 0x10($sp)
  /* 177E18 80132478 24A52244 */     addiu $a1, $a1, %lo(func_ovl54_80132244)
  /* 177E1C 8013247C 00402025 */        or $a0, $v0, $zero
  /* 177E20 80132480 2406001E */     addiu $a2, $zero, 0x1e
  /* 177E24 80132484 0C00277D */       jal func_80009DF4
  /* 177E28 80132488 3C078000 */       lui $a3, 0x8000
  /* 177E2C 8013248C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 177E30 80132490 27BD0020 */     addiu $sp, $sp, 0x20
  /* 177E34 80132494 03E00008 */        jr $ra
  /* 177E38 80132498 00000000 */       nop 

glabel func_ovl54_8013249C
  /* 177E3C 8013249C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 177E40 801324A0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 177E44 801324A4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 177E48 801324A8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 177E4C 801324AC 240F001E */     addiu $t7, $zero, 0x1e
  /* 177E50 801324B0 24180000 */     addiu $t8, $zero, 0
  /* 177E54 801324B4 3C194000 */       lui $t9, 0x4000
  /* 177E58 801324B8 2408FFFF */     addiu $t0, $zero, -1
  /* 177E5C 801324BC 24090001 */     addiu $t1, $zero, 1
  /* 177E60 801324C0 240A0001 */     addiu $t2, $zero, 1
  /* 177E64 801324C4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 177E68 801324C8 AFA90028 */        sw $t1, 0x28($sp)
  /* 177E6C 801324CC AFA80020 */        sw $t0, 0x20($sp)
  /* 177E70 801324D0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 177E74 801324D4 AFB80018 */        sw $t8, 0x18($sp)
  /* 177E78 801324D8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 177E7C 801324DC AFAE0010 */        sw $t6, 0x10($sp)
  /* 177E80 801324E0 AFA00024 */        sw $zero, 0x24($sp)
  /* 177E84 801324E4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 177E88 801324E8 AFA00034 */        sw $zero, 0x34($sp)
  /* 177E8C 801324EC 24040401 */     addiu $a0, $zero, 0x401
  /* 177E90 801324F0 00002825 */        or $a1, $zero, $zero
  /* 177E94 801324F4 24060010 */     addiu $a2, $zero, 0x10
  /* 177E98 801324F8 0C002E4F */       jal func_8000B93C
  /* 177E9C 801324FC 3C078000 */       lui $a3, 0x8000
  /* 177EA0 80132500 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 177EA4 80132504 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 177EA8 80132508 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 177EAC 8013250C 8C430074 */        lw $v1, 0x74($v0)
  /* 177EB0 80132510 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 177EB4 80132514 44050000 */      mfc1 $a1, $f0
  /* 177EB8 80132518 44060000 */      mfc1 $a2, $f0
  /* 177EBC 8013251C 3C07439B */       lui $a3, 0x439b
  /* 177EC0 80132520 24640008 */     addiu $a0, $v1, 8
  /* 177EC4 80132524 0C001C20 */       jal func_80007080
  /* 177EC8 80132528 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 177ECC 8013252C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 177ED0 80132530 27BD0040 */     addiu $sp, $sp, 0x40
  /* 177ED4 80132534 03E00008 */        jr $ra
  /* 177ED8 80132538 00000000 */       nop 

glabel func_ovl54_8013253C
  /* 177EDC 8013253C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 177EE0 80132540 AFBF0014 */        sw $ra, 0x14($sp)
  /* 177EE4 80132544 3C048013 */       lui $a0, %hi(D_ovl54_80132BE0)
  /* 177EE8 80132548 0C0026A1 */       jal omEjectGObjCommon
  /* 177EEC 8013254C 8C842BE0 */        lw $a0, %lo(D_ovl54_80132BE0)($a0)
  /* 177EF0 80132550 3C048013 */       lui $a0, %hi(D_ovl54_80132BE8)
  /* 177EF4 80132554 0C0026A1 */       jal omEjectGObjCommon
  /* 177EF8 80132558 8C842BE8 */        lw $a0, %lo(D_ovl54_80132BE8)($a0)
  /* 177EFC 8013255C 3C048013 */       lui $a0, %hi(D_ovl54_80132BEC)
  /* 177F00 80132560 0C0026A1 */       jal omEjectGObjCommon
  /* 177F04 80132564 8C842BEC */        lw $a0, %lo(D_ovl54_80132BEC)($a0)
  /* 177F08 80132568 3C048013 */       lui $a0, %hi(D_ovl54_80132BF0)
  /* 177F0C 8013256C 0C0026A1 */       jal omEjectGObjCommon
  /* 177F10 80132570 8C842BF0 */        lw $a0, %lo(D_ovl54_80132BF0)($a0)
  /* 177F14 80132574 3C048013 */       lui $a0, %hi(D_ovl54_80132BF4)
  /* 177F18 80132578 0C0026A1 */       jal omEjectGObjCommon
  /* 177F1C 8013257C 8C842BF4 */        lw $a0, %lo(D_ovl54_80132BF4)($a0)
  /* 177F20 80132580 8FBF0014 */        lw $ra, 0x14($sp)
  /* 177F24 80132584 27BD0018 */     addiu $sp, $sp, 0x18
  /* 177F28 80132588 03E00008 */        jr $ra
  /* 177F2C 8013258C 00000000 */       nop 

glabel func_ovl54_80132590
  /* 177F30 80132590 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 177F34 80132594 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 177F38 80132598 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 177F3C 8013259C AFBF0024 */        sw $ra, 0x24($sp)
  /* 177F40 801325A0 AFB00020 */        sw $s0, 0x20($sp)
  /* 177F44 801325A4 AFA40028 */        sw $a0, 0x28($sp)
  /* 177F48 801325A8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 177F4C 801325AC 8C900074 */        lw $s0, 0x74($a0)
  /* 177F50 801325B0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 177F54 801325B4 44050000 */      mfc1 $a1, $f0
  /* 177F58 801325B8 44060000 */      mfc1 $a2, $f0
  /* 177F5C 801325BC 3C07439B */       lui $a3, 0x439b
  /* 177F60 801325C0 26040008 */     addiu $a0, $s0, 8
  /* 177F64 801325C4 0C001C20 */       jal func_80007080
  /* 177F68 801325C8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 177F6C 801325CC 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 177F70 801325D0 44813000 */      mtc1 $at, $f6 # 128.0 to cop1
  /* 177F74 801325D4 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 177F78 801325D8 44814000 */      mtc1 $at, $f8 # 16384.0 to cop1
  /* 177F7C 801325DC 3C0F8013 */       lui $t7, %hi(D_ovl54_80132F74)
  /* 177F80 801325E0 E6060028 */      swc1 $f6, 0x28($s0)
  /* 177F84 801325E4 E608002C */      swc1 $f8, 0x2c($s0)
  /* 177F88 801325E8 8DEF2F74 */        lw $t7, %lo(D_ovl54_80132F74)($t7)
  /* 177F8C 801325EC 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 177F90 801325F0 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 177F94 801325F4 02002025 */        or $a0, $s0, $zero
  /* 177F98 801325F8 24060000 */     addiu $a2, $zero, 0
  /* 177F9C 801325FC 0C003E8F */       jal func_8000FA3C
  /* 177FA0 80132600 01F82821 */      addu $a1, $t7, $t8
  /* 177FA4 80132604 3C058001 */       lui $a1, %hi(func_80010580)
  /* 177FA8 80132608 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 177FAC 8013260C 8FA40028 */        lw $a0, 0x28($sp)
  /* 177FB0 80132610 24060001 */     addiu $a2, $zero, 1
  /* 177FB4 80132614 0C002062 */       jal omAddGObjCommonProc
  /* 177FB8 80132618 24070001 */     addiu $a3, $zero, 1
  /* 177FBC 8013261C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 177FC0 80132620 8FB00020 */        lw $s0, 0x20($sp)
  /* 177FC4 80132624 27BD0028 */     addiu $sp, $sp, 0x28
  /* 177FC8 80132628 03E00008 */        jr $ra
  /* 177FCC 8013262C 00000000 */       nop 

glabel func_ovl54_80132630
  /* 177FD0 80132630 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 177FD4 80132634 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 177FD8 80132638 AFBF0044 */        sw $ra, 0x44($sp)
  /* 177FDC 8013263C 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 177FE0 80132640 240E0050 */     addiu $t6, $zero, 0x50
  /* 177FE4 80132644 24180000 */     addiu $t8, $zero, 0
  /* 177FE8 80132648 3C192000 */       lui $t9, 0x2000
  /* 177FEC 8013264C 240FFFFF */     addiu $t7, $zero, -1
  /* 177FF0 80132650 24080001 */     addiu $t0, $zero, 1
  /* 177FF4 80132654 24090001 */     addiu $t1, $zero, 1
  /* 177FF8 80132658 AFB00040 */        sw $s0, 0x40($sp)
  /* 177FFC 8013265C AFA90030 */        sw $t1, 0x30($sp)
  /* 178000 80132660 AFA80028 */        sw $t0, 0x28($sp)
  /* 178004 80132664 AFAF0020 */        sw $t7, 0x20($sp)
  /* 178008 80132668 AFB9001C */        sw $t9, 0x1c($sp)
  /* 17800C 8013266C AFB80018 */        sw $t8, 0x18($sp)
  /* 178010 80132670 AFAE0014 */        sw $t6, 0x14($sp)
  /* 178014 80132674 AFA20010 */        sw $v0, 0x10($sp)
  /* 178018 80132678 AFA20048 */        sw $v0, 0x48($sp)
  /* 17801C 8013267C AFA00024 */        sw $zero, 0x24($sp)
  /* 178020 80132680 AFA0002C */        sw $zero, 0x2c($sp)
  /* 178024 80132684 AFA00034 */        sw $zero, 0x34($sp)
  /* 178028 80132688 24040401 */     addiu $a0, $zero, 0x401
  /* 17802C 8013268C 00002825 */        or $a1, $zero, $zero
  /* 178030 80132690 24060010 */     addiu $a2, $zero, 0x10
  /* 178034 80132694 0C002E4F */       jal func_8000B93C
  /* 178038 80132698 3C078000 */       lui $a3, 0x8000
  /* 17803C 8013269C 3C018013 */       lui $at, %hi(D_ovl54_80132BD0)
  /* 178040 801326A0 AC222BD0 */        sw $v0, %lo(D_ovl54_80132BD0)($at)
  /* 178044 801326A4 00408025 */        or $s0, $v0, $zero
  /* 178048 801326A8 8C440074 */        lw $a0, 0x74($v0)
  /* 17804C 801326AC 24050003 */     addiu $a1, $zero, 3
  /* 178050 801326B0 0C00233C */       jal func_80008CF0
  /* 178054 801326B4 00003025 */        or $a2, $zero, $zero
  /* 178058 801326B8 8E040074 */        lw $a0, 0x74($s0)
  /* 17805C 801326BC 24050008 */     addiu $a1, $zero, 8
  /* 178060 801326C0 0C00233C */       jal func_80008CF0
  /* 178064 801326C4 00003025 */        or $a2, $zero, $zero
  /* 178068 801326C8 0C04C964 */       jal func_ovl54_80132590
  /* 17806C 801326CC 02002025 */        or $a0, $s0, $zero
  /* 178070 801326D0 8E020074 */        lw $v0, 0x74($s0)
  /* 178074 801326D4 240D0028 */     addiu $t5, $zero, 0x28
  /* 178078 801326D8 240E0000 */     addiu $t6, $zero, 0
  /* 17807C 801326DC 8C4A0080 */        lw $t2, 0x80($v0)
  /* 178080 801326E0 240F0200 */     addiu $t7, $zero, 0x200
  /* 178084 801326E4 2418FFFF */     addiu $t8, $zero, -1
  /* 178088 801326E8 354B0004 */       ori $t3, $t2, 4
  /* 17808C 801326EC AC4B0080 */        sw $t3, 0x80($v0)
  /* 178090 801326F0 8FAC0048 */        lw $t4, 0x48($sp)
  /* 178094 801326F4 24190001 */     addiu $t9, $zero, 1
  /* 178098 801326F8 24080001 */     addiu $t0, $zero, 1
  /* 17809C 801326FC 24090001 */     addiu $t1, $zero, 1
  /* 1780A0 80132700 AFA90030 */        sw $t1, 0x30($sp)
  /* 1780A4 80132704 AFA80028 */        sw $t0, 0x28($sp)
  /* 1780A8 80132708 AFB90024 */        sw $t9, 0x24($sp)
  /* 1780AC 8013270C AFA00034 */        sw $zero, 0x34($sp)
  /* 1780B0 80132710 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1780B4 80132714 AFB80020 */        sw $t8, 0x20($sp)
  /* 1780B8 80132718 AFAF001C */        sw $t7, 0x1c($sp)
  /* 1780BC 8013271C AFAE0018 */        sw $t6, 0x18($sp)
  /* 1780C0 80132720 AFAD0014 */        sw $t5, 0x14($sp)
  /* 1780C4 80132724 24040401 */     addiu $a0, $zero, 0x401
  /* 1780C8 80132728 00002825 */        or $a1, $zero, $zero
  /* 1780CC 8013272C 24060010 */     addiu $a2, $zero, 0x10
  /* 1780D0 80132730 3C078000 */       lui $a3, 0x8000
  /* 1780D4 80132734 0C002E4F */       jal func_8000B93C
  /* 1780D8 80132738 AFAC0010 */        sw $t4, 0x10($sp)
  /* 1780DC 8013273C 3C018013 */       lui $at, %hi(D_ovl54_80132BD4)
  /* 1780E0 80132740 AC222BD4 */        sw $v0, %lo(D_ovl54_80132BD4)($at)
  /* 1780E4 80132744 00408025 */        or $s0, $v0, $zero
  /* 1780E8 80132748 0C04C964 */       jal func_ovl54_80132590
  /* 1780EC 8013274C 00402025 */        or $a0, $v0, $zero
  /* 1780F0 80132750 8E020074 */        lw $v0, 0x74($s0)
  /* 1780F4 80132754 8C4A0080 */        lw $t2, 0x80($v0)
  /* 1780F8 80132758 354B0004 */       ori $t3, $t2, 4
  /* 1780FC 8013275C AC4B0080 */        sw $t3, 0x80($v0)
  /* 178100 80132760 8FBF0044 */        lw $ra, 0x44($sp)
  /* 178104 80132764 8FB00040 */        lw $s0, 0x40($sp)
  /* 178108 80132768 27BD0050 */     addiu $sp, $sp, 0x50
  /* 17810C 8013276C 03E00008 */        jr $ra
  /* 178110 80132770 00000000 */       nop 

glabel func_ovl54_80132774
  /* 178114 80132774 3C0E800A */       lui $t6, %hi((gSceneData + 0x13))
  /* 178118 80132778 91CE4AE3 */       lbu $t6, %lo((gSceneData + 0x13))($t6)
  /* 17811C 8013277C 3C18800A */       lui $t8, %hi(D_800A4B18)
  /* 178120 80132780 3C018013 */       lui $at, %hi(D_ovl54_80132BCC)
  /* 178124 80132784 000E78C0 */       sll $t7, $t6, 3
  /* 178128 80132788 01EE7823 */      subu $t7, $t7, $t6
  /* 17812C 8013278C 000F7880 */       sll $t7, $t7, 2
  /* 178130 80132790 01EE7821 */      addu $t7, $t7, $t6
  /* 178134 80132794 000F7880 */       sll $t7, $t7, 2
  /* 178138 80132798 27184B18 */     addiu $t8, $t8, %lo(D_800A4B18)
  /* 17813C 8013279C AC202BCC */        sw $zero, %lo(D_ovl54_80132BCC)($at)
  /* 178140 801327A0 01F81021 */      addu $v0, $t7, $t8
  /* 178144 801327A4 3C038013 */       lui $v1, %hi(D_ovl54_80132C08)
  /* 178148 801327A8 90590023 */       lbu $t9, 0x23($v0)
  /* 17814C 801327AC 90480026 */       lbu $t0, 0x26($v0)
  /* 178150 801327B0 90490027 */       lbu $t1, 0x27($v0)
  /* 178154 801327B4 24632C08 */     addiu $v1, $v1, %lo(D_ovl54_80132C08)
  /* 178158 801327B8 AC790000 */        sw $t9, ($v1) # D_ovl54_80132C08 + 0
  /* 17815C 801327BC AC680004 */        sw $t0, 4($v1) # D_ovl54_80132C08 + 4
  /* 178160 801327C0 03E00008 */        jr $ra
  /* 178164 801327C4 AC690008 */        sw $t1, 8($v1) # D_ovl54_80132C08 + 8

glabel func_ovl54_801327C8
  /* 178168 801327C8 3C068013 */       lui $a2, %hi(D_ovl54_80132BCC)
  /* 17816C 801327CC 24C62BCC */     addiu $a2, $a2, %lo(D_ovl54_80132BCC)
  /* 178170 801327D0 8CCE0000 */        lw $t6, ($a2) # D_ovl54_80132BCC + 0
  /* 178174 801327D4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 178178 801327D8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17817C 801327DC 25CF0001 */     addiu $t7, $t6, 1
  /* 178180 801327E0 29E1000A */      slti $at, $t7, 0xa
  /* 178184 801327E4 AFA40018 */        sw $a0, 0x18($sp)
  /* 178188 801327E8 14200035 */      bnez $at, .L801328C0
  /* 17818C 801327EC ACCF0000 */        sw $t7, ($a2) # D_ovl54_80132BCC + 0
  /* 178190 801327F0 3C038013 */       lui $v1, %hi(D_ovl54_80132C14)
  /* 178194 801327F4 24632C14 */     addiu $v1, $v1, %lo(D_ovl54_80132C14)
  /* 178198 801327F8 8C620000 */        lw $v0, ($v1) # D_ovl54_80132C14 + 0
  /* 17819C 801327FC 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 1781A0 80132800 10400002 */      beqz $v0, .L8013280C
  /* 1781A4 80132804 2459FFFF */     addiu $t9, $v0, -1
  /* 1781A8 80132808 AC790000 */        sw $t9, ($v1) # D_ovl54_80132C14 + 0
  .L8013280C:
  /* 1781AC 8013280C 0C0E4281 */       jal func_ovl1_80390A04
  /* 1781B0 80132810 2405000F */     addiu $a1, $zero, 0xf
  /* 1781B4 80132814 3C068013 */       lui $a2, %hi(D_ovl54_80132BCC)
  /* 1781B8 80132818 10400009 */      beqz $v0, .L80132840
  /* 1781BC 8013281C 24C62BCC */     addiu $a2, $a2, %lo(D_ovl54_80132BCC)
  /* 1781C0 80132820 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 1781C4 80132824 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 1781C8 80132828 2405000F */     addiu $a1, $zero, 0xf
  /* 1781CC 8013282C 3C068013 */       lui $a2, %hi(D_ovl54_80132BCC)
  /* 1781D0 80132830 10400003 */      beqz $v0, .L80132840
  /* 1781D4 80132834 24C62BCC */     addiu $a2, $a2, %lo(D_ovl54_80132BCC)
  /* 1781D8 80132838 3C018013 */       lui $at, %hi(D_ovl54_80132C14)
  /* 1781DC 8013283C AC202C14 */        sw $zero, %lo(D_ovl54_80132C14)($at)
  .L80132840:
  /* 1781E0 80132840 8CC30000 */        lw $v1, ($a2) # D_ovl54_80132BCC + 0
  /* 1781E4 80132844 24010154 */     addiu $at, $zero, 0x154
  /* 1781E8 80132848 54610006 */      bnel $v1, $at, .L80132864
  /* 1781EC 8013284C 2401021C */     addiu $at, $zero, 0x21c
  /* 1781F0 80132850 0C04C90F */       jal func_ovl54_8013243C
  /* 1781F4 80132854 00000000 */       nop 
  /* 1781F8 80132858 3C038013 */       lui $v1, %hi(D_ovl54_80132BCC)
  /* 1781FC 8013285C 8C632BCC */        lw $v1, %lo(D_ovl54_80132BCC)($v1)
  /* 178200 80132860 2401021C */     addiu $at, $zero, 0x21c
  .L80132864:
  /* 178204 80132864 5461000E */      bnel $v1, $at, .L801328A0
  /* 178208 80132868 24010294 */     addiu $at, $zero, 0x294
  /* 17820C 8013286C 0C04C94F */       jal func_ovl54_8013253C
  /* 178210 80132870 00000000 */       nop 
  /* 178214 80132874 3C048013 */       lui $a0, %hi(D_ovl54_80132BDC)
  /* 178218 80132878 0C035E3A */       jal func_ovl2_800D78E8
  /* 17821C 8013287C 8C842BDC */        lw $a0, %lo(D_ovl54_80132BDC)($a0)
  /* 178220 80132880 3C048013 */       lui $a0, %hi(D_ovl54_80132C04)
  /* 178224 80132884 0C0026A1 */       jal omEjectGObjCommon
  /* 178228 80132888 8C842C04 */        lw $a0, %lo(D_ovl54_80132C04)($a0)
  /* 17822C 8013288C 0C009A70 */       jal func_800269C0
  /* 178230 80132890 24040014 */     addiu $a0, $zero, 0x14
  /* 178234 80132894 3C038013 */       lui $v1, %hi(D_ovl54_80132BCC)
  /* 178238 80132898 8C632BCC */        lw $v1, %lo(D_ovl54_80132BCC)($v1)
  /* 17823C 8013289C 24010294 */     addiu $at, $zero, 0x294
  .L801328A0:
  /* 178240 801328A0 14610007 */       bne $v1, $at, .L801328C0
  /* 178244 801328A4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 178248 801328A8 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17824C 801328AC 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 178250 801328B0 24090038 */     addiu $t1, $zero, 0x38
  /* 178254 801328B4 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 178258 801328B8 0C00171D */       jal func_80005C74
  /* 17825C 801328BC A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L801328C0:
  /* 178260 801328C0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 178264 801328C4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 178268 801328C8 03E00008 */        jr $ra
  /* 17826C 801328CC 00000000 */       nop 

glabel func_ovl54_801328D0
  /* 178270 801328D0 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 178274 801328D4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 178278 801328D8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 17827C 801328DC 3C188013 */       lui $t8, %hi(D_ovl54_80132C18)
  /* 178280 801328E0 3C088013 */       lui $t0, %hi(D_ovl54_80132F38)
  /* 178284 801328E4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 178288 801328E8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 17828C 801328EC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 178290 801328F0 27182C18 */     addiu $t8, $t8, %lo(D_ovl54_80132C18)
  /* 178294 801328F4 24190064 */     addiu $t9, $zero, 0x64
  /* 178298 801328F8 25082F38 */     addiu $t0, $t0, %lo(D_ovl54_80132F38)
  /* 17829C 801328FC 24090007 */     addiu $t1, $zero, 7
  /* 1782A0 80132900 AFAE002C */        sw $t6, 0x2c($sp)
  /* 1782A4 80132904 AFAF0030 */        sw $t7, 0x30($sp)
  /* 1782A8 80132908 AFA00034 */        sw $zero, 0x34($sp)
  /* 1782AC 8013290C AFA00038 */        sw $zero, 0x38($sp)
  /* 1782B0 80132910 AFB8003C */        sw $t8, 0x3c($sp)
  /* 1782B4 80132914 AFB90040 */        sw $t9, 0x40($sp)
  /* 1782B8 80132918 AFA80044 */        sw $t0, 0x44($sp)
  /* 1782BC 8013291C AFA90048 */        sw $t1, 0x48($sp)
  /* 1782C0 80132920 0C0337DE */       jal rldm_initialize
  /* 1782C4 80132924 27A4002C */     addiu $a0, $sp, 0x2c
  /* 1782C8 80132928 3C048013 */       lui $a0, %hi(D_ovl54_80132AD0)
  /* 1782CC 8013292C 24842AD0 */     addiu $a0, $a0, %lo(D_ovl54_80132AD0)
  /* 1782D0 80132930 0C0337BB */       jal rldm_bytes_need_to_load
  /* 1782D4 80132934 24050002 */     addiu $a1, $zero, 2
  /* 1782D8 80132938 00402025 */        or $a0, $v0, $zero
  /* 1782DC 8013293C 0C001260 */       jal hal_alloc
  /* 1782E0 80132940 24050010 */     addiu $a1, $zero, 0x10
  /* 1782E4 80132944 3C048013 */       lui $a0, %hi(D_ovl54_80132AD0)
  /* 1782E8 80132948 3C068013 */       lui $a2, %hi(D_ovl54_80132F70)
  /* 1782EC 8013294C 24C62F70 */     addiu $a2, $a2, %lo(D_ovl54_80132F70)
  /* 1782F0 80132950 24842AD0 */     addiu $a0, $a0, %lo(D_ovl54_80132AD0)
  /* 1782F4 80132954 24050002 */     addiu $a1, $zero, 2
  /* 1782F8 80132958 0C033781 */       jal rldm_load_files_into
  /* 1782FC 8013295C 00403825 */        or $a3, $v0, $zero
  /* 178300 80132960 3C058013 */       lui $a1, %hi(func_ovl54_801327C8)
  /* 178304 80132964 24A527C8 */     addiu $a1, $a1, %lo(func_ovl54_801327C8)
  /* 178308 80132968 00002025 */        or $a0, $zero, $zero
  /* 17830C 8013296C 00003025 */        or $a2, $zero, $zero
  /* 178310 80132970 0C00265A */       jal omMakeGObjCommon
  /* 178314 80132974 3C078000 */       lui $a3, 0x8000
  /* 178318 80132978 240AFFFF */     addiu $t2, $zero, -1
  /* 17831C 8013297C AFAA0010 */        sw $t2, 0x10($sp)
  /* 178320 80132980 00002025 */        or $a0, $zero, $zero
  /* 178324 80132984 3C058000 */       lui $a1, 0x8000
  /* 178328 80132988 24060064 */     addiu $a2, $zero, 0x64
  /* 17832C 8013298C 0C002E7F */       jal func_8000B9FC
  /* 178330 80132990 24070003 */     addiu $a3, $zero, 3
  /* 178334 80132994 0C045624 */       jal func_ovl2_80115890
  /* 178338 80132998 00000000 */       nop 
  /* 17833C 8013299C 0C04C9DD */       jal func_ovl54_80132774
  /* 178340 801329A0 00000000 */       nop 
  /* 178344 801329A4 0C03F4C0 */       jal efManager_AllocUserData
  /* 178348 801329A8 00000000 */       nop 
  /* 17834C 801329AC 24040001 */     addiu $a0, $zero, 1
  /* 178350 801329B0 0C035C65 */       jal func_ovl2_800D7194
  /* 178354 801329B4 24050001 */     addiu $a1, $zero, 1
  /* 178358 801329B8 3C048013 */       lui $a0, %hi(D_ovl54_80132C08)
  /* 17835C 801329BC 0C035E1B */       jal func_ovl2_800D786C
  /* 178360 801329C0 8C842C08 */        lw $a0, %lo(D_ovl54_80132C08)($a0)
  /* 178364 801329C4 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 178368 801329C8 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 17836C 801329CC 0C001260 */       jal hal_alloc
  /* 178370 801329D0 24050010 */     addiu $a1, $zero, 0x10
  /* 178374 801329D4 3C018013 */       lui $at, %hi(D_ovl54_80132BC8)
  /* 178378 801329D8 0C04C98C */       jal func_ovl54_80132630
  /* 17837C 801329DC AC222BC8 */        sw $v0, %lo(D_ovl54_80132BC8)($at)
  /* 178380 801329E0 0C04C869 */       jal func_ovl54_801321A4
  /* 178384 801329E4 00000000 */       nop 
  /* 178388 801329E8 0C04C927 */       jal func_ovl54_8013249C
  /* 17838C 801329EC 00000000 */       nop 
  /* 178390 801329F0 0C04C6D6 */       jal func_ovl54_80131B58
  /* 178394 801329F4 00000000 */       nop 
  /* 178398 801329F8 0C04C707 */       jal func_ovl54_80131C1C
  /* 17839C 801329FC 00000000 */       nop 
  /* 1783A0 80132A00 0C04C725 */       jal func_ovl54_80131C94
  /* 1783A4 80132A04 00000000 */       nop 
  /* 1783A8 80132A08 0C04C775 */       jal func_ovl54_80131DD4
  /* 1783AC 80132A0C 00000000 */       nop 
  /* 1783B0 80132A10 0C04C74D */       jal func_ovl54_80131D34
  /* 1783B4 80132A14 00000000 */       nop 
  /* 1783B8 80132A18 0C04C79D */       jal func_ovl54_80131E74
  /* 1783BC 80132A1C 00000000 */       nop 
  /* 1783C0 80132A20 3C048013 */       lui $a0, %hi(D_ovl54_80132C08)
  /* 1783C4 80132A24 0C04C7C9 */       jal func_ovl54_80131F24
  /* 1783C8 80132A28 8C842C08 */        lw $a0, %lo(D_ovl54_80132C08)($a0)
  /* 1783CC 80132A2C 0C04C851 */       jal func_ovl54_80132144
  /* 1783D0 80132A30 00000000 */       nop 
  /* 1783D4 80132A34 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 1783D8 80132A38 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 1783DC 80132A3C 240B00FF */     addiu $t3, $zero, 0xff
  /* 1783E0 80132A40 240C00FF */     addiu $t4, $zero, 0xff
  /* 1783E4 80132A44 AFAC0014 */        sw $t4, 0x14($sp)
  /* 1783E8 80132A48 AFAB0010 */        sw $t3, 0x10($sp)
  /* 1783EC 80132A4C 240600FF */     addiu $a2, $zero, 0xff
  /* 1783F0 80132A50 240700FF */     addiu $a3, $zero, 0xff
  /* 1783F4 80132A54 0C0E4138 */       jal func_ovl1_803904E0
  /* 1783F8 80132A58 46006386 */     mov.s $f14, $f12
  /* 1783FC 80132A5C 00002025 */        or $a0, $zero, $zero
  /* 178400 80132A60 0C0082AD */       jal func_80020AB4
  /* 178404 80132A64 24050026 */     addiu $a1, $zero, 0x26
  /* 178408 80132A68 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17840C 80132A6C 27BD0050 */     addiu $sp, $sp, 0x50
  /* 178410 80132A70 03E00008 */        jr $ra
  /* 178414 80132A74 00000000 */       nop 

glabel overlay_set48_entry
  /* 178418 80132A78 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 17841C 80132A7C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 178420 80132A80 3C048013 */       lui $a0, %hi(D_ovl54_80132B08)
  /* 178424 80132A84 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 178428 80132A88 24842B08 */     addiu $a0, $a0, %lo(D_ovl54_80132B08)
  /* 17842C 80132A8C AFBF0014 */        sw $ra, 0x14($sp)
  /* 178430 80132A90 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 178434 80132A94 0C001C09 */       jal func_80007024
  /* 178438 80132A98 AC8F000C */        sw $t7, 0xc($a0) # D_ovl54_80132B08 + 12
  /* 17843C 80132A9C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 178440 80132AA0 3C198013 */       lui $t9, %hi(D_NF_80132F80)
  /* 178444 80132AA4 3C048013 */       lui $a0, %hi(D_ovl54_80132B24)
  /* 178448 80132AA8 27392F80 */     addiu $t9, $t9, %lo(D_NF_80132F80)
  /* 17844C 80132AAC 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 178450 80132AB0 24842B24 */     addiu $a0, $a0, %lo(D_ovl54_80132B24)
  /* 178454 80132AB4 03194023 */      subu $t0, $t8, $t9
  /* 178458 80132AB8 0C001A0F */       jal func_8000683C
  /* 17845C 80132ABC AC880010 */        sw $t0, 0x10($a0) # D_ovl54_80132B24 + 16
  /* 178460 80132AC0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 178464 80132AC4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 178468 80132AC8 03E00008 */        jr $ra
  /* 17846C 80132ACC 00000000 */       nop 
#
#glabel D_ovl54_80132AD0   # Routine parsed as data
#  /* 178470 80132AD0 00000034 */       teq $zero, $zero
#  /* 178474 80132AD4 0000004C */   syscall 1
#  /* 178478 80132AD8 20202000 */      addi $zero, $at, 0x2000
#  /* 17847C 80132ADC 20202000 */      addi $zero, $at, 0x2000
#  /* 178480 80132AE0 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 178484 80132AE4 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 178488 80132AE8 14141400 */       bne $zero, $s4, 0x80137aec # branch target not found
#  /* 17848C 80132AEC 00000000 */       nop 
#  /* 178490 80132AF0 20202000 */      addi $zero, $at, 0x2000
#  /* 178494 80132AF4 20202000 */      addi $zero, $at, 0x2000
#  /* 178498 80132AF8 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 17849C 80132AFC FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 1784A0 80132B00 00140000 */       sll $zero, $s4, 0
#  /* 1784A4 80132B04 00000000 */       nop 
#glabel D_ovl54_80132B08   # Routine parsed as data
#  /* 1784A8 80132B08 80392A00 */        lb $t9, 0x2a00($at)
#  /* 1784AC 80132B0C 803B6900 */        lb $k1, 0x6900($at)
#  /* 1784B0 80132B10 803DA800 */        lb $sp, -0x5800($at)
#  /* 1784B4 80132B14 00000000 */       nop 
#  /* 1784B8 80132B18 00000140 */     pause 
#  /* 1784BC 80132B1C 000000F0 */       tge $zero, $zero, 3
