.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80134A20

glabel func_ovl34_80131B00
  /* 162640 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162644 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 162648 80131B08 8C830000 */        lw $v1, ($a0)
  /* 16264C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 162650 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 162654 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 162658 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 16265C 80131B1C 3C180002 */       lui $t8, 2
  /* 162660 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 162664 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 162668 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 16266C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 162670 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 162674 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 162678 80131B38 44060000 */      mfc1 $a2, $f0
  /* 16267C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 162680 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 162684 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 162688 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16268C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162690 80131B50 03E00008 */        jr $ra
  /* 162694 80131B54 00000000 */       nop 

glabel func_ovl34_80131B58
  /* 162698 80131B58 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 16269C 80131B5C 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 1626A0 80131B60 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1626A4 80131B64 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1626A8 80131B68 28410439 */      slti $at, $v0, 0x439
  /* 1626AC 80131B6C 14200005 */      bnez $at, .L80131B84
  /* 1626B0 80131B70 AFA40018 */        sw $a0, 0x18($sp)
  /* 1626B4 80131B74 0C0037CD */       jal func_8000DF34
  /* 1626B8 80131B78 00000000 */       nop 
  /* 1626BC 80131B7C 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 1626C0 80131B80 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L80131B84:
  /* 1626C4 80131B84 24010474 */     addiu $at, $zero, 0x474
  /* 1626C8 80131B88 54410004 */      bnel $v0, $at, .L80131B9C
  /* 1626CC 80131B8C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1626D0 80131B90 0C0026A1 */       jal omEjectGObjCommon
  /* 1626D4 80131B94 8FA40018 */        lw $a0, 0x18($sp)
  /* 1626D8 80131B98 8FBF0014 */        lw $ra, 0x14($sp)
  .L80131B9C:
  /* 1626DC 80131B9C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1626E0 80131BA0 03E00008 */        jr $ra
  /* 1626E4 80131BA4 00000000 */       nop 

glabel func_ovl34_80131BA8
  /* 1626E8 80131BA8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1626EC 80131BAC AFBF0024 */        sw $ra, 0x24($sp)
  /* 1626F0 80131BB0 AFB00020 */        sw $s0, 0x20($sp)
  /* 1626F4 80131BB4 00002025 */        or $a0, $zero, $zero
  /* 1626F8 80131BB8 00002825 */        or $a1, $zero, $zero
  /* 1626FC 80131BBC 24060011 */     addiu $a2, $zero, 0x11
  /* 162700 80131BC0 0C00265A */       jal omMakeGObjCommon
  /* 162704 80131BC4 3C078000 */       lui $a3, 0x8000
  /* 162708 80131BC8 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 16270C 80131BCC 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162710 80131BD0 3C0F0000 */       lui $t7, %hi(D_NF_00007E98)
  /* 162714 80131BD4 3C018013 */       lui $at, %hi(D_ovl34_80134D0C)
  /* 162718 80131BD8 25EF7E98 */     addiu $t7, $t7, %lo(D_NF_00007E98)
  /* 16271C 80131BDC AC224D0C */        sw $v0, %lo(D_ovl34_80134D0C)($at)
  /* 162720 80131BE0 00408025 */        or $s0, $v0, $zero
  /* 162724 80131BE4 00402025 */        or $a0, $v0, $zero
  /* 162728 80131BE8 00003025 */        or $a2, $zero, $zero
  /* 16272C 80131BEC 0C003C48 */       jal func_8000F120
  /* 162730 80131BF0 01CF2821 */      addu $a1, $t6, $t7
  /* 162734 80131BF4 3C058001 */       lui $a1, %hi(func_80014768)
  /* 162738 80131BF8 2418FFFF */     addiu $t8, $zero, -1
  /* 16273C 80131BFC AFB80010 */        sw $t8, 0x10($sp)
  /* 162740 80131C00 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 162744 80131C04 02002025 */        or $a0, $s0, $zero
  /* 162748 80131C08 24060006 */     addiu $a2, $zero, 6
  /* 16274C 80131C0C 0C00277D */       jal func_80009DF4
  /* 162750 80131C10 3C078000 */       lui $a3, 0x8000
  /* 162754 80131C14 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 162758 80131C18 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 16275C 80131C1C 3C080000 */       lui $t0, %hi(D_NF_000042F8)
  /* 162760 80131C20 250842F8 */     addiu $t0, $t0, %lo(D_NF_000042F8)
  /* 162764 80131C24 02002025 */        or $a0, $s0, $zero
  /* 162768 80131C28 0C003E3D */       jal func_8000F8F4
  /* 16276C 80131C2C 03282821 */      addu $a1, $t9, $t0
  /* 162770 80131C30 3C098013 */       lui $t1, %hi(D_ovl34_801350B0)
  /* 162774 80131C34 8D2950B0 */        lw $t1, %lo(D_ovl34_801350B0)($t1)
  /* 162778 80131C38 3C0A0001 */       lui $t2, %hi(D_NF_00008788)
  /* 16277C 80131C3C 254A8788 */     addiu $t2, $t2, %lo(D_NF_00008788)
  /* 162780 80131C40 02002025 */        or $a0, $s0, $zero
  /* 162784 80131C44 24060000 */     addiu $a2, $zero, 0
  /* 162788 80131C48 0C002F8A */       jal func_8000BE28
  /* 16278C 80131C4C 012A2821 */      addu $a1, $t1, $t2
  /* 162790 80131C50 3C058013 */       lui $a1, %hi(func_ovl34_80131B58)
  /* 162794 80131C54 24A51B58 */     addiu $a1, $a1, %lo(func_ovl34_80131B58)
  /* 162798 80131C58 02002025 */        or $a0, $s0, $zero
  /* 16279C 80131C5C 24060001 */     addiu $a2, $zero, 1
  /* 1627A0 80131C60 0C002062 */       jal omAddGObjCommonProc
  /* 1627A4 80131C64 24070001 */     addiu $a3, $zero, 1
  /* 1627A8 80131C68 0C0037CD */       jal func_8000DF34
  /* 1627AC 80131C6C 02002025 */        or $a0, $s0, $zero
  /* 1627B0 80131C70 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1627B4 80131C74 8FB00020 */        lw $s0, 0x20($sp)
  /* 1627B8 80131C78 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1627BC 80131C7C 03E00008 */        jr $ra
  /* 1627C0 80131C80 00000000 */       nop 

glabel func_ovl34_80131C84
  /* 1627C4 80131C84 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1627C8 80131C88 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1627CC 80131C8C 00002025 */        or $a0, $zero, $zero
  /* 1627D0 80131C90 00002825 */        or $a1, $zero, $zero
  /* 1627D4 80131C94 24060011 */     addiu $a2, $zero, 0x11
  /* 1627D8 80131C98 0C00265A */       jal omMakeGObjCommon
  /* 1627DC 80131C9C 3C078000 */       lui $a3, 0x8000
  /* 1627E0 80131CA0 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 1627E4 80131CA4 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 1627E8 80131CA8 3C0F0002 */       lui $t7, %hi(D_NF_00024708)
  /* 1627EC 80131CAC 3C018013 */       lui $at, %hi(D_ovl34_80134D10)
  /* 1627F0 80131CB0 25EF4708 */     addiu $t7, $t7, %lo(D_NF_00024708)
  /* 1627F4 80131CB4 AC224D10 */        sw $v0, %lo(D_ovl34_80134D10)($at)
  /* 1627F8 80131CB8 AFA20024 */        sw $v0, 0x24($sp)
  /* 1627FC 80131CBC 00402025 */        or $a0, $v0, $zero
  /* 162800 80131CC0 0C0024B4 */       jal func_800092D0
  /* 162804 80131CC4 01CF2821 */      addu $a1, $t6, $t7
  /* 162808 80131CC8 00402025 */        or $a0, $v0, $zero
  /* 16280C 80131CCC 2405001C */     addiu $a1, $zero, 0x1c
  /* 162810 80131CD0 0C002330 */       jal func_80008CC0
  /* 162814 80131CD4 00003025 */        or $a2, $zero, $zero
  /* 162818 80131CD8 3C058001 */       lui $a1, %hi(func_800143FC)
  /* 16281C 80131CDC 2418FFFF */     addiu $t8, $zero, -1
  /* 162820 80131CE0 AFB80010 */        sw $t8, 0x10($sp)
  /* 162824 80131CE4 24A543FC */     addiu $a1, $a1, %lo(func_800143FC)
  /* 162828 80131CE8 8FA40024 */        lw $a0, 0x24($sp)
  /* 16282C 80131CEC 24060006 */     addiu $a2, $zero, 6
  /* 162830 80131CF0 0C00277D */       jal func_80009DF4
  /* 162834 80131CF4 3C078000 */       lui $a3, 0x8000
  /* 162838 80131CF8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16283C 80131CFC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162840 80131D00 03E00008 */        jr $ra
  /* 162844 80131D04 00000000 */       nop 

glabel func_ovl34_80131D08
  /* 162848 80131D08 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16284C 80131D0C AFBF001C */        sw $ra, 0x1c($sp)
  /* 162850 80131D10 00002025 */        or $a0, $zero, $zero
  /* 162854 80131D14 00002825 */        or $a1, $zero, $zero
  /* 162858 80131D18 24060011 */     addiu $a2, $zero, 0x11
  /* 16285C 80131D1C 0C00265A */       jal omMakeGObjCommon
  /* 162860 80131D20 3C078000 */       lui $a3, 0x8000
  /* 162864 80131D24 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162868 80131D28 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 16286C 80131D2C 3C0F0001 */       lui $t7, %hi(D_NF_00008DF8)
  /* 162870 80131D30 3C018013 */       lui $at, %hi(D_ovl34_80134D14)
  /* 162874 80131D34 25EF8DF8 */     addiu $t7, $t7, %lo(D_NF_00008DF8)
  /* 162878 80131D38 AC224D14 */        sw $v0, %lo(D_ovl34_80134D14)($at)
  /* 16287C 80131D3C AFA20024 */        sw $v0, 0x24($sp)
  /* 162880 80131D40 00402025 */        or $a0, $v0, $zero
  /* 162884 80131D44 00003025 */        or $a2, $zero, $zero
  /* 162888 80131D48 0C003C48 */       jal func_8000F120
  /* 16288C 80131D4C 01CF2821 */      addu $a1, $t6, $t7
  /* 162890 80131D50 3C058001 */       lui $a1, %hi(func_80014038)
  /* 162894 80131D54 2418FFFF */     addiu $t8, $zero, -1
  /* 162898 80131D58 AFB80010 */        sw $t8, 0x10($sp)
  /* 16289C 80131D5C 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 1628A0 80131D60 8FA40024 */        lw $a0, 0x24($sp)
  /* 1628A4 80131D64 24060006 */     addiu $a2, $zero, 6
  /* 1628A8 80131D68 0C00277D */       jal func_80009DF4
  /* 1628AC 80131D6C 3C078000 */       lui $a3, 0x8000
  /* 1628B0 80131D70 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1628B4 80131D74 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1628B8 80131D78 03E00008 */        jr $ra
  /* 1628BC 80131D7C 00000000 */       nop 

glabel func_ovl34_80131D80
  /* 1628C0 80131D80 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1628C4 80131D84 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1628C8 80131D88 00002025 */        or $a0, $zero, $zero
  /* 1628CC 80131D8C 00002825 */        or $a1, $zero, $zero
  /* 1628D0 80131D90 24060011 */     addiu $a2, $zero, 0x11
  /* 1628D4 80131D94 0C00265A */       jal omMakeGObjCommon
  /* 1628D8 80131D98 3C078000 */       lui $a3, 0x8000
  /* 1628DC 80131D9C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 1628E0 80131DA0 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 1628E4 80131DA4 3C0F0002 */       lui $t7, %hi(D_NF_00024200)
  /* 1628E8 80131DA8 3C018013 */       lui $at, %hi(D_ovl34_80134D18)
  /* 1628EC 80131DAC 25EF4200 */     addiu $t7, $t7, %lo(D_NF_00024200)
  /* 1628F0 80131DB0 AC224D18 */        sw $v0, %lo(D_ovl34_80134D18)($at)
  /* 1628F4 80131DB4 AFA20024 */        sw $v0, 0x24($sp)
  /* 1628F8 80131DB8 00402025 */        or $a0, $v0, $zero
  /* 1628FC 80131DBC 0C0024B4 */       jal func_800092D0
  /* 162900 80131DC0 01CF2821 */      addu $a1, $t6, $t7
  /* 162904 80131DC4 00402025 */        or $a0, $v0, $zero
  /* 162908 80131DC8 2405001C */     addiu $a1, $zero, 0x1c
  /* 16290C 80131DCC 0C002330 */       jal func_80008CC0
  /* 162910 80131DD0 00003025 */        or $a2, $zero, $zero
  /* 162914 80131DD4 3C058001 */       lui $a1, %hi(func_800143FC)
  /* 162918 80131DD8 2418FFFF */     addiu $t8, $zero, -1
  /* 16291C 80131DDC AFB80010 */        sw $t8, 0x10($sp)
  /* 162920 80131DE0 24A543FC */     addiu $a1, $a1, %lo(func_800143FC)
  /* 162924 80131DE4 8FA40024 */        lw $a0, 0x24($sp)
  /* 162928 80131DE8 24060006 */     addiu $a2, $zero, 6
  /* 16292C 80131DEC 0C00277D */       jal func_80009DF4
  /* 162930 80131DF0 3C078000 */       lui $a3, 0x8000
  /* 162934 80131DF4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 162938 80131DF8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16293C 80131DFC 03E00008 */        jr $ra
  /* 162940 80131E00 00000000 */       nop 

glabel func_ovl34_80131E04
  /* 162944 80131E04 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162948 80131E08 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16294C 80131E0C 00002025 */        or $a0, $zero, $zero
  /* 162950 80131E10 00002825 */        or $a1, $zero, $zero
  /* 162954 80131E14 24060011 */     addiu $a2, $zero, 0x11
  /* 162958 80131E18 0C00265A */       jal omMakeGObjCommon
  /* 16295C 80131E1C 3C078000 */       lui $a3, 0x8000
  /* 162960 80131E20 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162964 80131E24 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162968 80131E28 3C0F0001 */       lui $t7, %hi(D_NF_000098F8)
  /* 16296C 80131E2C 3C018013 */       lui $at, %hi(D_ovl34_80134D1C)
  /* 162970 80131E30 25EF98F8 */     addiu $t7, $t7, %lo(D_NF_000098F8)
  /* 162974 80131E34 AC224D1C */        sw $v0, %lo(D_ovl34_80134D1C)($at)
  /* 162978 80131E38 AFA20024 */        sw $v0, 0x24($sp)
  /* 16297C 80131E3C 00402025 */        or $a0, $v0, $zero
  /* 162980 80131E40 0C0024B4 */       jal func_800092D0
  /* 162984 80131E44 01CF2821 */      addu $a1, $t6, $t7
  /* 162988 80131E48 00402025 */        or $a0, $v0, $zero
  /* 16298C 80131E4C 2405001C */     addiu $a1, $zero, 0x1c
  /* 162990 80131E50 0C002330 */       jal func_80008CC0
  /* 162994 80131E54 00003025 */        or $a2, $zero, $zero
  /* 162998 80131E58 3C058001 */       lui $a1, %hi(func_800143FC)
  /* 16299C 80131E5C 2418FFFF */     addiu $t8, $zero, -1
  /* 1629A0 80131E60 AFB80010 */        sw $t8, 0x10($sp)
  /* 1629A4 80131E64 24A543FC */     addiu $a1, $a1, %lo(func_800143FC)
  /* 1629A8 80131E68 8FA40024 */        lw $a0, 0x24($sp)
  /* 1629AC 80131E6C 24060006 */     addiu $a2, $zero, 6
  /* 1629B0 80131E70 0C00277D */       jal func_80009DF4
  /* 1629B4 80131E74 3C078000 */       lui $a3, 0x8000
  /* 1629B8 80131E78 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1629BC 80131E7C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1629C0 80131E80 03E00008 */        jr $ra
  /* 1629C4 80131E84 00000000 */       nop 

glabel func_ovl34_80131E88
  /* 1629C8 80131E88 3C0E8013 */       lui $t6, %hi(D_ovl34_80134CE4)
  /* 1629CC 80131E8C 8DCE4CE4 */        lw $t6, %lo(D_ovl34_80134CE4)($t6)
  /* 1629D0 80131E90 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1629D4 80131E94 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1629D8 80131E98 29C10230 */      slti $at, $t6, 0x230
  /* 1629DC 80131E9C 54200004 */      bnel $at, $zero, .L80131EB0
  /* 1629E0 80131EA0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1629E4 80131EA4 0C0037CD */       jal func_8000DF34
  /* 1629E8 80131EA8 00000000 */       nop 
  /* 1629EC 80131EAC 8FBF0014 */        lw $ra, 0x14($sp)
  .L80131EB0:
  /* 1629F0 80131EB0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1629F4 80131EB4 03E00008 */        jr $ra
  /* 1629F8 80131EB8 00000000 */       nop 

glabel func_ovl34_80131EBC
  /* 1629FC 80131EBC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162A00 80131EC0 AFBF0024 */        sw $ra, 0x24($sp)
  /* 162A04 80131EC4 AFB00020 */        sw $s0, 0x20($sp)
  /* 162A08 80131EC8 00002025 */        or $a0, $zero, $zero
  /* 162A0C 80131ECC 00002825 */        or $a1, $zero, $zero
  /* 162A10 80131ED0 24060011 */     addiu $a2, $zero, 0x11
  /* 162A14 80131ED4 0C00265A */       jal omMakeGObjCommon
  /* 162A18 80131ED8 3C078000 */       lui $a3, 0x8000
  /* 162A1C 80131EDC 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162A20 80131EE0 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162A24 80131EE4 3C0F0001 */       lui $t7, %hi(D_NF_0000A6F8)
  /* 162A28 80131EE8 3C018013 */       lui $at, %hi(D_ovl34_80134D20)
  /* 162A2C 80131EEC 25EFA6F8 */     addiu $t7, $t7, %lo(D_NF_0000A6F8)
  /* 162A30 80131EF0 AC224D20 */        sw $v0, %lo(D_ovl34_80134D20)($at)
  /* 162A34 80131EF4 00408025 */        or $s0, $v0, $zero
  /* 162A38 80131EF8 00402025 */        or $a0, $v0, $zero
  /* 162A3C 80131EFC 00003025 */        or $a2, $zero, $zero
  /* 162A40 80131F00 0C003C48 */       jal func_8000F120
  /* 162A44 80131F04 01CF2821 */      addu $a1, $t6, $t7
  /* 162A48 80131F08 3C058001 */       lui $a1, %hi(func_80014038)
  /* 162A4C 80131F0C 2418FFFF */     addiu $t8, $zero, -1
  /* 162A50 80131F10 AFB80010 */        sw $t8, 0x10($sp)
  /* 162A54 80131F14 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 162A58 80131F18 02002025 */        or $a0, $s0, $zero
  /* 162A5C 80131F1C 24060006 */     addiu $a2, $zero, 6
  /* 162A60 80131F20 0C00277D */       jal func_80009DF4
  /* 162A64 80131F24 3C078000 */       lui $a3, 0x8000
  /* 162A68 80131F28 3C058013 */       lui $a1, %hi(func_ovl34_80131E88)
  /* 162A6C 80131F2C 24A51E88 */     addiu $a1, $a1, %lo(func_ovl34_80131E88)
  /* 162A70 80131F30 02002025 */        or $a0, $s0, $zero
  /* 162A74 80131F34 24060001 */     addiu $a2, $zero, 1
  /* 162A78 80131F38 0C002062 */       jal omAddGObjCommonProc
  /* 162A7C 80131F3C 24070001 */     addiu $a3, $zero, 1
  /* 162A80 80131F40 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 162A84 80131F44 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 162A88 80131F48 3C080001 */       lui $t0, %hi(D_NF_0000A7B0)
  /* 162A8C 80131F4C 2508A7B0 */     addiu $t0, $t0, %lo(D_NF_0000A7B0)
  /* 162A90 80131F50 02002025 */        or $a0, $s0, $zero
  /* 162A94 80131F54 24060000 */     addiu $a2, $zero, 0
  /* 162A98 80131F58 0C002F63 */       jal func_8000BD8C
  /* 162A9C 80131F5C 03282821 */      addu $a1, $t9, $t0
  /* 162AA0 80131F60 0C0037CD */       jal func_8000DF34
  /* 162AA4 80131F64 02002025 */        or $a0, $s0, $zero
  /* 162AA8 80131F68 8FBF0024 */        lw $ra, 0x24($sp)
  /* 162AAC 80131F6C 8FB00020 */        lw $s0, 0x20($sp)
  /* 162AB0 80131F70 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162AB4 80131F74 03E00008 */        jr $ra
  /* 162AB8 80131F78 00000000 */       nop 

glabel func_ovl34_80131F7C
  /* 162ABC 80131F7C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162AC0 80131F80 AFBF0024 */        sw $ra, 0x24($sp)
  /* 162AC4 80131F84 AFB00020 */        sw $s0, 0x20($sp)
  /* 162AC8 80131F88 00002025 */        or $a0, $zero, $zero
  /* 162ACC 80131F8C 00002825 */        or $a1, $zero, $zero
  /* 162AD0 80131F90 24060011 */     addiu $a2, $zero, 0x11
  /* 162AD4 80131F94 0C00265A */       jal omMakeGObjCommon
  /* 162AD8 80131F98 3C078000 */       lui $a3, 0x8000
  /* 162ADC 80131F9C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162AE0 80131FA0 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162AE4 80131FA4 3C0F0001 */       lui $t7, %hi(D_NF_0000AEB8)
  /* 162AE8 80131FA8 3C018013 */       lui $at, %hi(D_ovl34_80134D24)
  /* 162AEC 80131FAC 25EFAEB8 */     addiu $t7, $t7, %lo(D_NF_0000AEB8)
  /* 162AF0 80131FB0 AC224D24 */        sw $v0, %lo(D_ovl34_80134D24)($at)
  /* 162AF4 80131FB4 00408025 */        or $s0, $v0, $zero
  /* 162AF8 80131FB8 00402025 */        or $a0, $v0, $zero
  /* 162AFC 80131FBC 00003025 */        or $a2, $zero, $zero
  /* 162B00 80131FC0 0C003C48 */       jal func_8000F120
  /* 162B04 80131FC4 01CF2821 */      addu $a1, $t6, $t7
  /* 162B08 80131FC8 3C058001 */       lui $a1, %hi(func_80014038)
  /* 162B0C 80131FCC 2418FFFF */     addiu $t8, $zero, -1
  /* 162B10 80131FD0 AFB80010 */        sw $t8, 0x10($sp)
  /* 162B14 80131FD4 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 162B18 80131FD8 02002025 */        or $a0, $s0, $zero
  /* 162B1C 80131FDC 24060006 */     addiu $a2, $zero, 6
  /* 162B20 80131FE0 0C00277D */       jal func_80009DF4
  /* 162B24 80131FE4 3C078000 */       lui $a3, 0x8000
  /* 162B28 80131FE8 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 162B2C 80131FEC 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 162B30 80131FF0 3C080001 */       lui $t0, %hi(D_NF_0000AF70)
  /* 162B34 80131FF4 2508AF70 */     addiu $t0, $t0, %lo(D_NF_0000AF70)
  /* 162B38 80131FF8 02002025 */        or $a0, $s0, $zero
  /* 162B3C 80131FFC 24060000 */     addiu $a2, $zero, 0
  /* 162B40 80132000 0C002F63 */       jal func_8000BD8C
  /* 162B44 80132004 03282821 */      addu $a1, $t9, $t0
  /* 162B48 80132008 3C058013 */       lui $a1, %hi(func_ovl34_80131E88)
  /* 162B4C 8013200C 24A51E88 */     addiu $a1, $a1, %lo(func_ovl34_80131E88)
  /* 162B50 80132010 02002025 */        or $a0, $s0, $zero
  /* 162B54 80132014 24060001 */     addiu $a2, $zero, 1
  /* 162B58 80132018 0C002062 */       jal omAddGObjCommonProc
  /* 162B5C 8013201C 24070001 */     addiu $a3, $zero, 1
  /* 162B60 80132020 0C0037CD */       jal func_8000DF34
  /* 162B64 80132024 02002025 */        or $a0, $s0, $zero
  /* 162B68 80132028 8FBF0024 */        lw $ra, 0x24($sp)
  /* 162B6C 8013202C 8FB00020 */        lw $s0, 0x20($sp)
  /* 162B70 80132030 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162B74 80132034 03E00008 */        jr $ra
  /* 162B78 80132038 00000000 */       nop 

glabel func_ovl34_8013203C
  /* 162B7C 8013203C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162B80 80132040 AFBF0024 */        sw $ra, 0x24($sp)
  /* 162B84 80132044 AFB00020 */        sw $s0, 0x20($sp)
  /* 162B88 80132048 00002025 */        or $a0, $zero, $zero
  /* 162B8C 8013204C 00002825 */        or $a1, $zero, $zero
  /* 162B90 80132050 24060011 */     addiu $a2, $zero, 0x11
  /* 162B94 80132054 0C00265A */       jal omMakeGObjCommon
  /* 162B98 80132058 3C078000 */       lui $a3, 0x8000
  /* 162B9C 8013205C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162BA0 80132060 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162BA4 80132064 3C0F0001 */       lui $t7, %hi(D_NF_0000BDC0)
  /* 162BA8 80132068 3C018013 */       lui $at, %hi(D_ovl34_80134D28)
  /* 162BAC 8013206C 25EFBDC0 */     addiu $t7, $t7, %lo(D_NF_0000BDC0)
  /* 162BB0 80132070 AC224D28 */        sw $v0, %lo(D_ovl34_80134D28)($at)
  /* 162BB4 80132074 00408025 */        or $s0, $v0, $zero
  /* 162BB8 80132078 00402025 */        or $a0, $v0, $zero
  /* 162BBC 8013207C 00003025 */        or $a2, $zero, $zero
  /* 162BC0 80132080 0C003C48 */       jal func_8000F120
  /* 162BC4 80132084 01CF2821 */      addu $a1, $t6, $t7
  /* 162BC8 80132088 3C058001 */       lui $a1, %hi(func_80014038)
  /* 162BCC 8013208C 2418FFFF */     addiu $t8, $zero, -1
  /* 162BD0 80132090 AFB80010 */        sw $t8, 0x10($sp)
  /* 162BD4 80132094 24A54038 */     addiu $a1, $a1, %lo(func_80014038)
  /* 162BD8 80132098 02002025 */        or $a0, $s0, $zero
  /* 162BDC 8013209C 24060006 */     addiu $a2, $zero, 6
  /* 162BE0 801320A0 0C00277D */       jal func_80009DF4
  /* 162BE4 801320A4 3C078000 */       lui $a3, 0x8000
  /* 162BE8 801320A8 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 162BEC 801320AC 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 162BF0 801320B0 3C080001 */       lui $t0, %hi(D_NF_0000BEA0)
  /* 162BF4 801320B4 2508BEA0 */     addiu $t0, $t0, %lo(D_NF_0000BEA0)
  /* 162BF8 801320B8 02002025 */        or $a0, $s0, $zero
  /* 162BFC 801320BC 24060000 */     addiu $a2, $zero, 0
  /* 162C00 801320C0 0C002F63 */       jal func_8000BD8C
  /* 162C04 801320C4 03282821 */      addu $a1, $t9, $t0
  /* 162C08 801320C8 3C058013 */       lui $a1, %hi(func_ovl34_80131E88)
  /* 162C0C 801320CC 24A51E88 */     addiu $a1, $a1, %lo(func_ovl34_80131E88)
  /* 162C10 801320D0 02002025 */        or $a0, $s0, $zero
  /* 162C14 801320D4 24060001 */     addiu $a2, $zero, 1
  /* 162C18 801320D8 0C002062 */       jal omAddGObjCommonProc
  /* 162C1C 801320DC 24070001 */     addiu $a3, $zero, 1
  /* 162C20 801320E0 0C0037CD */       jal func_8000DF34
  /* 162C24 801320E4 02002025 */        or $a0, $s0, $zero
  /* 162C28 801320E8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 162C2C 801320EC 8FB00020 */        lw $s0, 0x20($sp)
  /* 162C30 801320F0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162C34 801320F4 03E00008 */        jr $ra
  /* 162C38 801320F8 00000000 */       nop 

glabel func_ovl34_801320FC
  /* 162C3C 801320FC 3C0E8013 */       lui $t6, %hi(D_ovl34_80134CE4)
  /* 162C40 80132100 8DCE4CE4 */        lw $t6, %lo(D_ovl34_80134CE4)($t6)
  /* 162C44 80132104 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 162C48 80132108 AFBF0014 */        sw $ra, 0x14($sp)
  /* 162C4C 8013210C 29C10230 */      slti $at, $t6, 0x230
  /* 162C50 80132110 54200004 */      bnel $at, $zero, .L80132124
  /* 162C54 80132114 8FBF0014 */        lw $ra, 0x14($sp)
  /* 162C58 80132118 0C0037CD */       jal func_8000DF34
  /* 162C5C 8013211C 00000000 */       nop 
  /* 162C60 80132120 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132124:
  /* 162C64 80132124 27BD0018 */     addiu $sp, $sp, 0x18
  /* 162C68 80132128 03E00008 */        jr $ra
  /* 162C6C 8013212C 00000000 */       nop 

glabel func_ovl34_80132130
  /* 162C70 80132130 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 162C74 80132134 AFBF001C */        sw $ra, 0x1c($sp)
  /* 162C78 80132138 00002025 */        or $a0, $zero, $zero
  /* 162C7C 8013213C 00002825 */        or $a1, $zero, $zero
  /* 162C80 80132140 24060011 */     addiu $a2, $zero, 0x11
  /* 162C84 80132144 0C00265A */       jal omMakeGObjCommon
  /* 162C88 80132148 3C078000 */       lui $a3, 0x8000
  /* 162C8C 8013214C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 162C90 80132150 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 162C94 80132154 3C0F0001 */       lui $t7, %hi(D_NF_0000C690)
  /* 162C98 80132158 3C018013 */       lui $at, %hi(D_ovl34_80134D2C)
  /* 162C9C 8013215C 25EFC690 */     addiu $t7, $t7, %lo(D_NF_0000C690)
  /* 162CA0 80132160 AC224D2C */        sw $v0, %lo(D_ovl34_80134D2C)($at)
  /* 162CA4 80132164 AFA20024 */        sw $v0, 0x24($sp)
  /* 162CA8 80132168 00402025 */        or $a0, $v0, $zero
  /* 162CAC 8013216C 0C0024B4 */       jal func_800092D0
  /* 162CB0 80132170 01CF2821 */      addu $a1, $t6, $t7
  /* 162CB4 80132174 AFA20020 */        sw $v0, 0x20($sp)
  /* 162CB8 80132178 00402025 */        or $a0, $v0, $zero
  /* 162CBC 8013217C 2405001C */     addiu $a1, $zero, 0x1c
  /* 162CC0 80132180 0C002330 */       jal func_80008CC0
  /* 162CC4 80132184 00003025 */        or $a2, $zero, $zero
  /* 162CC8 80132188 3C058001 */       lui $a1, %hi(func_80013E68)
  /* 162CCC 8013218C 2418FFFF */     addiu $t8, $zero, -1
  /* 162CD0 80132190 AFB80010 */        sw $t8, 0x10($sp)
  /* 162CD4 80132194 24A53E68 */     addiu $a1, $a1, %lo(func_80013E68)
  /* 162CD8 80132198 8FA40024 */        lw $a0, 0x24($sp)
  /* 162CDC 8013219C 24060006 */     addiu $a2, $zero, 6
  /* 162CE0 801321A0 0C00277D */       jal func_80009DF4
  /* 162CE4 801321A4 3C078000 */       lui $a3, 0x8000
  /* 162CE8 801321A8 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 162CEC 801321AC 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 162CF0 801321B0 3C080001 */       lui $t0, %hi(D_NF_0000C884)
  /* 162CF4 801321B4 2508C884 */     addiu $t0, $t0, %lo(D_NF_0000C884)
  /* 162CF8 801321B8 8FA40020 */        lw $a0, 0x20($sp)
  /* 162CFC 801321BC 24060000 */     addiu $a2, $zero, 0
  /* 162D00 801321C0 0C002F47 */       jal func_8000BD1C
  /* 162D04 801321C4 03282821 */      addu $a1, $t9, $t0
  /* 162D08 801321C8 3C058013 */       lui $a1, %hi(func_ovl34_801320FC)
  /* 162D0C 801321CC 24A520FC */     addiu $a1, $a1, %lo(func_ovl34_801320FC)
  /* 162D10 801321D0 8FA40024 */        lw $a0, 0x24($sp)
  /* 162D14 801321D4 24060001 */     addiu $a2, $zero, 1
  /* 162D18 801321D8 0C002062 */       jal omAddGObjCommonProc
  /* 162D1C 801321DC 24070001 */     addiu $a3, $zero, 1
  /* 162D20 801321E0 0C0037CD */       jal func_8000DF34
  /* 162D24 801321E4 8FA40024 */        lw $a0, 0x24($sp)
  /* 162D28 801321E8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 162D2C 801321EC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 162D30 801321F0 03E00008 */        jr $ra
  /* 162D34 801321F4 00000000 */       nop 

glabel func_ovl34_801321F8
  /* 162D38 801321F8 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 162D3C 801321FC 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 162D40 80132200 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 162D44 80132204 AFBF0014 */        sw $ra, 0x14($sp)
  /* 162D48 80132208 25E8003C */     addiu $t0, $t7, 0x3c
  /* 162D4C 8013220C 27AE001C */     addiu $t6, $sp, 0x1c
  .L80132210:
  /* 162D50 80132210 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 162D54 80132214 25EF000C */     addiu $t7, $t7, 0xc
  /* 162D58 80132218 25CE000C */     addiu $t6, $t6, 0xc
  /* 162D5C 8013221C ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 162D60 80132220 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 162D64 80132224 ADD8FFF8 */        sw $t8, -8($t6)
  /* 162D68 80132228 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 162D6C 8013222C 15E8FFF8 */       bne $t7, $t0, .L80132210
  /* 162D70 80132230 ADD9FFFC */        sw $t9, -4($t6)
  /* 162D74 80132234 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 162D78 80132238 2409000C */     addiu $t1, $zero, 0xc
  /* 162D7C 8013223C 2404000C */     addiu $a0, $zero, 0xc
  /* 162D80 80132240 ADD90000 */        sw $t9, ($t6)
  /* 162D84 80132244 AFA9001C */        sw $t1, 0x1c($sp)
  /* 162D88 80132248 0C03B03B */       jal func_ovl2_800EC0EC
  /* 162D8C 8013224C 00002825 */        or $a1, $zero, $zero
  /* 162D90 80132250 44800000 */      mtc1 $zero, $f0
  /* 162D94 80132254 3C0A8013 */       lui $t2, %hi(D_ovl34_80134CD8)
  /* 162D98 80132258 8D4A4CD8 */        lw $t2, %lo(D_ovl34_80134CD8)($t2)
  /* 162D9C 8013225C A3A20033 */        sb $v0, 0x33($sp)
  /* 162DA0 80132260 27A4001C */     addiu $a0, $sp, 0x1c
  /* 162DA4 80132264 E7A00020 */      swc1 $f0, 0x20($sp)
  /* 162DA8 80132268 E7A00024 */      swc1 $f0, 0x24($sp)
  /* 162DAC 8013226C E7A00028 */      swc1 $f0, 0x28($sp)
  /* 162DB0 80132270 0C035FCF */       jal ftManager_CreateFighter
  /* 162DB4 80132274 AFAA0054 */        sw $t2, 0x54($sp)
  /* 162DB8 80132278 3C018013 */       lui $at, %hi(D_ovl34_80134CF4)
  /* 162DBC 8013227C 3C050001 */       lui $a1, (0x1000F >> 16) # 65551
  /* 162DC0 80132280 AC224CF4 */        sw $v0, %lo(D_ovl34_80134CF4)($at)
  /* 162DC4 80132284 34A5000F */       ori $a1, $a1, (0x1000F & 0xFFFF) # 65551
  /* 162DC8 80132288 0C0E4173 */       jal func_ovl1_803905CC
  /* 162DCC 8013228C 00402025 */        or $a0, $v0, $zero
  /* 162DD0 80132290 8FBF0014 */        lw $ra, 0x14($sp)
  /* 162DD4 80132294 27BD0060 */     addiu $sp, $sp, 0x60
  /* 162DD8 80132298 03E00008 */        jr $ra
  /* 162DDC 8013229C 00000000 */       nop 

  /* 162DE0 801322A0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 162DE4 801322A4 00802825 */        or $a1, $a0, $zero
  /* 162DE8 801322A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 162DEC 801322AC 3C048013 */       lui $a0, %hi(D_ovl34_80134CF4)
  /* 162DF0 801322B0 0C0E417D */       jal func_ovl1_803905F4
  /* 162DF4 801322B4 8C844CF4 */        lw $a0, %lo(D_ovl34_80134CF4)($a0)
  /* 162DF8 801322B8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 162DFC 801322BC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 162E00 801322C0 03E00008 */        jr $ra
  /* 162E04 801322C4 00000000 */       nop 

  /* 162E08 801322C8 8C820084 */        lw $v0, 0x84($a0)
  /* 162E0C 801322CC 8C4308EC */        lw $v1, 0x8ec($v0)
  /* 162E10 801322D0 C446019C */      lwc1 $f6, 0x19c($v0)
  /* 162E14 801322D4 8C4508E8 */        lw $a1, 0x8e8($v0)
  /* 162E18 801322D8 C464001C */      lwc1 $f4, 0x1c($v1)
  /* 162E1C 801322DC C4AA001C */      lwc1 $f10, 0x1c($a1)
  /* 162E20 801322E0 46062201 */     sub.s $f8, $f4, $f6
  /* 162E24 801322E4 46085400 */     add.s $f16, $f10, $f8
  /* 162E28 801322E8 C4AA0020 */      lwc1 $f10, 0x20($a1)
  /* 162E2C 801322EC E4B0001C */      swc1 $f16, 0x1c($a1)
  /* 162E30 801322F0 C44401A0 */      lwc1 $f4, 0x1a0($v0)
  /* 162E34 801322F4 C4720020 */      lwc1 $f18, 0x20($v1)
  /* 162E38 801322F8 46049181 */     sub.s $f6, $f18, $f4
  /* 162E3C 801322FC 46065200 */     add.s $f8, $f10, $f6
  /* 162E40 80132300 C4AA0024 */      lwc1 $f10, 0x24($a1)
  /* 162E44 80132304 E4A80020 */      swc1 $f8, 0x20($a1)
  /* 162E48 80132308 C45201A4 */      lwc1 $f18, 0x1a4($v0)
  /* 162E4C 8013230C C4700024 */      lwc1 $f16, 0x24($v1)
  /* 162E50 80132310 46128101 */     sub.s $f4, $f16, $f18
  /* 162E54 80132314 46045180 */     add.s $f6, $f10, $f4
  /* 162E58 80132318 03E00008 */        jr $ra
  /* 162E5C 8013231C E4A60024 */      swc1 $f6, 0x24($a1)

  /* 162E60 80132320 03E00008 */        jr $ra
  /* 162E64 80132324 00000000 */       nop 

  /* 162E68 80132328 03E00008 */        jr $ra
  /* 162E6C 8013232C 00000000 */       nop 

glabel func_ovl34_80132330
  /* 162E70 80132330 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 162E74 80132334 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 162E78 80132338 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 162E7C 8013233C AFBF0014 */        sw $ra, 0x14($sp)
  /* 162E80 80132340 25E8003C */     addiu $t0, $t7, 0x3c
  /* 162E84 80132344 27AE001C */     addiu $t6, $sp, 0x1c
  .L80132348:
  /* 162E88 80132348 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 162E8C 8013234C 25EF000C */     addiu $t7, $t7, 0xc
  /* 162E90 80132350 25CE000C */     addiu $t6, $t6, 0xc
  /* 162E94 80132354 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 162E98 80132358 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 162E9C 8013235C ADD8FFF8 */        sw $t8, -8($t6)
  /* 162EA0 80132360 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 162EA4 80132364 15E8FFF8 */       bne $t7, $t0, .L80132348
  /* 162EA8 80132368 ADD9FFFC */        sw $t9, -4($t6)
  /* 162EAC 8013236C 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 162EB0 80132370 00002825 */        or $a1, $zero, $zero
  /* 162EB4 80132374 ADD90000 */        sw $t9, ($t6)
  /* 162EB8 80132378 0C03B03B */       jal func_ovl2_800EC0EC
  /* 162EBC 8013237C AFA4001C */        sw $a0, 0x1c($sp)
  /* 162EC0 80132380 44800000 */      mtc1 $zero, $f0
  /* 162EC4 80132384 3C098013 */       lui $t1, %hi(D_ovl34_80134CDC)
  /* 162EC8 80132388 8D294CDC */        lw $t1, %lo(D_ovl34_80134CDC)($t1)
  /* 162ECC 8013238C A3A20033 */        sb $v0, 0x33($sp)
  /* 162ED0 80132390 27A4001C */     addiu $a0, $sp, 0x1c
  /* 162ED4 80132394 E7A00020 */      swc1 $f0, 0x20($sp)
  /* 162ED8 80132398 E7A00024 */      swc1 $f0, 0x24($sp)
  /* 162EDC 8013239C E7A00028 */      swc1 $f0, 0x28($sp)
  /* 162EE0 801323A0 0C035FCF */       jal ftManager_CreateFighter
  /* 162EE4 801323A4 AFA90054 */        sw $t1, 0x54($sp)
  /* 162EE8 801323A8 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 162EEC 801323AC 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 162EF0 801323B0 3C018013 */       lui $at, %hi(D_ovl34_80134D04)
  /* 162EF4 801323B4 AC224D04 */        sw $v0, %lo(D_ovl34_80134D04)($at)
  /* 162EF8 801323B8 AFA2005C */        sw $v0, 0x5c($sp)
  /* 162EFC 801323BC 8C4A0074 */        lw $t2, 0x74($v0)
  /* 162F00 801323C0 3C050001 */       lui $a1, (0x10008 >> 16) # 65544
  /* 162F04 801323C4 34A50008 */       ori $a1, $a1, (0x10008 & 0xFFFF) # 65544
  /* 162F08 801323C8 E5400040 */      swc1 $f0, 0x40($t2)
  /* 162F0C 801323CC 8C4B0074 */        lw $t3, 0x74($v0)
  /* 162F10 801323D0 00402025 */        or $a0, $v0, $zero
  /* 162F14 801323D4 E5600044 */      swc1 $f0, 0x44($t3)
  /* 162F18 801323D8 8C4C0074 */        lw $t4, 0x74($v0)
  /* 162F1C 801323DC 0C0E4173 */       jal func_ovl1_803905CC
  /* 162F20 801323E0 E5800048 */      swc1 $f0, 0x48($t4)
  /* 162F24 801323E4 8FA4005C */        lw $a0, 0x5c($sp)
  /* 162F28 801323E8 24050006 */     addiu $a1, $zero, 6
  /* 162F2C 801323EC 0C002834 */       jal om_g_move_obj_dl
  /* 162F30 801323F0 2406FFFF */     addiu $a2, $zero, -1
  /* 162F34 801323F4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 162F38 801323F8 27BD0060 */     addiu $sp, $sp, 0x60
  /* 162F3C 801323FC 03E00008 */        jr $ra
  /* 162F40 80132400 00000000 */       nop 

glabel func_ovl34_80132404
  /* 162F44 80132404 3C0E8013 */       lui $t6, %hi(D_ovl34_80134CE4)
  /* 162F48 80132408 8DCE4CE4 */        lw $t6, %lo(D_ovl34_80134CE4)($t6)
  /* 162F4C 8013240C 3C0C8004 */       lui $t4, %hi(gpDisplayListHead)
  /* 162F50 80132410 AFA40000 */        sw $a0, ($sp)
  /* 162F54 80132414 29C1003C */      slti $at, $t6, 0x3c
  /* 162F58 80132418 14200009 */      bnez $at, .L80132440
  /* 162F5C 8013241C 258C65B0 */     addiu $t4, $t4, %lo(gpDisplayListHead)
  /* 162F60 80132420 3C0B8013 */       lui $t3, %hi(D_ovl34_80134D38)
  /* 162F64 80132424 256B4D38 */     addiu $t3, $t3, %lo(D_ovl34_80134D38)
  /* 162F68 80132428 8D620000 */        lw $v0, ($t3) # D_ovl34_80134D38 + 0
  /* 162F6C 8013242C 18400004 */      blez $v0, .L80132440
  /* 162F70 80132430 244FFFF3 */     addiu $t7, $v0, -0xd
  /* 162F74 80132434 05E10002 */      bgez $t7, .L80132440
  /* 162F78 80132438 AD6F0000 */        sw $t7, ($t3) # D_ovl34_80134D38 + 0
  /* 162F7C 8013243C AD600000 */        sw $zero, ($t3) # D_ovl34_80134D38 + 0
  .L80132440:
  /* 162F80 80132440 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 162F84 80132444 3C0DE700 */       lui $t5, 0xe700
  /* 162F88 80132448 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 162F8C 8013244C 24790008 */     addiu $t9, $v1, 8
  /* 162F90 80132450 AD990004 */        sw $t9, 4($t4) # gpDisplayListHead + 4
  /* 162F94 80132454 AC600004 */        sw $zero, 4($v1)
  /* 162F98 80132458 AC6D0000 */        sw $t5, ($v1)
  /* 162F9C 8013245C 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 162FA0 80132460 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 162FA4 80132464 3C0B8013 */       lui $t3, %hi(D_ovl34_80134D38)
  /* 162FA8 80132468 246E0008 */     addiu $t6, $v1, 8
  /* 162FAC 8013246C AD8E0004 */        sw $t6, 4($t4) # gpDisplayListHead + 4
  /* 162FB0 80132470 AC600004 */        sw $zero, 4($v1)
  /* 162FB4 80132474 AC6F0000 */        sw $t7, ($v1)
  /* 162FB8 80132478 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 162FBC 8013247C 3C19FA00 */       lui $t9, 0xfa00
  /* 162FC0 80132480 256B4D38 */     addiu $t3, $t3, %lo(D_ovl34_80134D38)
  /* 162FC4 80132484 24780008 */     addiu $t8, $v1, 8
  /* 162FC8 80132488 AD980004 */        sw $t8, 4($t4) # gpDisplayListHead + 4
  /* 162FCC 8013248C AC790000 */        sw $t9, ($v1)
  /* 162FD0 80132490 8D6E0000 */        lw $t6, ($t3) # D_ovl34_80134D38 + 0
  /* 162FD4 80132494 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 162FD8 80132498 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 162FDC 8013249C 31CF00FF */      andi $t7, $t6, 0xff
  /* 162FE0 801324A0 AC6F0004 */        sw $t7, 4($v1)
  /* 162FE4 801324A4 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 162FE8 801324A8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 162FEC 801324AC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 162FF0 801324B0 24780008 */     addiu $t8, $v1, 8
  /* 162FF4 801324B4 AD980004 */        sw $t8, 4($t4) # gpDisplayListHead + 4
  /* 162FF8 801324B8 AC6E0004 */        sw $t6, 4($v1)
  /* 162FFC 801324BC AC790000 */        sw $t9, ($v1)
  /* 163000 801324C0 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 163004 801324C4 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 163008 801324C8 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 16300C 801324CC 246F0008 */     addiu $t7, $v1, 8
  /* 163010 801324D0 AD8F0004 */        sw $t7, 4($t4) # gpDisplayListHead + 4
  /* 163014 801324D4 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 163018 801324D8 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 16301C 801324DC AC790004 */        sw $t9, 4($v1)
  /* 163020 801324E0 AC780000 */        sw $t8, ($v1)
  /* 163024 801324E4 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 163028 801324E8 3C180002 */       lui $t8, (0x28028 >> 16) # 163880
  /* 16302C 801324EC 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 163030 801324F0 246E0008 */     addiu $t6, $v1, 8
  /* 163034 801324F4 AD8E0004 */        sw $t6, 4($t4) # gpDisplayListHead + 4
  /* 163038 801324F8 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 16303C 801324FC 37188028 */       ori $t8, $t8, (0x28028 & 0xFFFF) # 163880
  /* 163040 80132500 AC780004 */        sw $t8, 4($v1)
  /* 163044 80132504 AC6F0000 */        sw $t7, ($v1)
  /* 163048 80132508 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 16304C 8013250C 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 163050 80132510 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 163054 80132514 24790008 */     addiu $t9, $v1, 8
  /* 163058 80132518 AD990004 */        sw $t9, 4($t4) # gpDisplayListHead + 4
  /* 16305C 8013251C AC600004 */        sw $zero, 4($v1)
  /* 163060 80132520 AC6D0000 */        sw $t5, ($v1)
  /* 163064 80132524 8D830004 */        lw $v1, 4($t4) # gpDisplayListHead + 4
  /* 163068 80132528 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 16306C 8013252C 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 163070 80132530 246E0008 */     addiu $t6, $v1, 8
  /* 163074 80132534 AD8E0004 */        sw $t6, 4($t4) # gpDisplayListHead + 4
  /* 163078 80132538 AC780004 */        sw $t8, 4($v1)
  /* 16307C 8013253C 03E00008 */        jr $ra
  /* 163080 80132540 AC6F0000 */        sw $t7, ($v1)

glabel func_ovl34_80132544
  /* 163084 80132544 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 163088 80132548 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16308C 8013254C 240E00FF */     addiu $t6, $zero, 0xff
  /* 163090 80132550 3C018013 */       lui $at, %hi(D_ovl34_80134D38)
  /* 163094 80132554 AC2E4D38 */        sw $t6, %lo(D_ovl34_80134D38)($at)
  /* 163098 80132558 00002025 */        or $a0, $zero, $zero
  /* 16309C 8013255C 00002825 */        or $a1, $zero, $zero
  /* 1630A0 80132560 24060012 */     addiu $a2, $zero, 0x12
  /* 1630A4 80132564 0C00265A */       jal omMakeGObjCommon
  /* 1630A8 80132568 3C078000 */       lui $a3, 0x8000
  /* 1630AC 8013256C 3C018013 */       lui $at, %hi(D_ovl34_80134D3C)
  /* 1630B0 80132570 3C058013 */       lui $a1, %hi(func_ovl34_80132404)
  /* 1630B4 80132574 240FFFFF */     addiu $t7, $zero, -1
  /* 1630B8 80132578 AC224D3C */        sw $v0, %lo(D_ovl34_80134D3C)($at)
  /* 1630BC 8013257C AFAF0010 */        sw $t7, 0x10($sp)
  /* 1630C0 80132580 24A52404 */     addiu $a1, $a1, %lo(func_ovl34_80132404)
  /* 1630C4 80132584 00402025 */        or $a0, $v0, $zero
  /* 1630C8 80132588 2406001A */     addiu $a2, $zero, 0x1a
  /* 1630CC 8013258C 0C00277D */       jal func_80009DF4
  /* 1630D0 80132590 3C078000 */       lui $a3, 0x8000
  /* 1630D4 80132594 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1630D8 80132598 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1630DC 8013259C 03E00008 */        jr $ra
  /* 1630E0 801325A0 00000000 */       nop 

glabel func_ovl34_801325A4
  /* 1630E4 801325A4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1630E8 801325A8 AFBF0024 */        sw $ra, 0x24($sp)
  /* 1630EC 801325AC AFB00020 */        sw $s0, 0x20($sp)
  /* 1630F0 801325B0 00002025 */        or $a0, $zero, $zero
  /* 1630F4 801325B4 00002825 */        or $a1, $zero, $zero
  /* 1630F8 801325B8 24060015 */     addiu $a2, $zero, 0x15
  /* 1630FC 801325BC 0C00265A */       jal omMakeGObjCommon
  /* 163100 801325C0 3C078000 */       lui $a3, 0x8000
  /* 163104 801325C4 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 163108 801325C8 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 16310C 801325CC 3C0F0002 */       lui $t7, %hi(D_NF_0001C4A8)
  /* 163110 801325D0 3C018013 */       lui $at, %hi(D_ovl34_80134D00)
  /* 163114 801325D4 25EFC4A8 */     addiu $t7, $t7, %lo(D_NF_0001C4A8)
  /* 163118 801325D8 AC224D00 */        sw $v0, %lo(D_ovl34_80134D00)($at)
  /* 16311C 801325DC 00408025 */        or $s0, $v0, $zero
  /* 163120 801325E0 00402025 */        or $a0, $v0, $zero
  /* 163124 801325E4 00003025 */        or $a2, $zero, $zero
  /* 163128 801325E8 0C003C48 */       jal func_8000F120
  /* 16312C 801325EC 01CF2821 */      addu $a1, $t6, $t7
  /* 163130 801325F0 3C058001 */       lui $a1, %hi(func_80014768)
  /* 163134 801325F4 2418FFFF */     addiu $t8, $zero, -1
  /* 163138 801325F8 AFB80010 */        sw $t8, 0x10($sp)
  /* 16313C 801325FC 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 163140 80132600 02002025 */        or $a0, $s0, $zero
  /* 163144 80132604 2406001D */     addiu $a2, $zero, 0x1d
  /* 163148 80132608 0C00277D */       jal func_80009DF4
  /* 16314C 8013260C 3C078000 */       lui $a3, 0x8000
  /* 163150 80132610 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 163154 80132614 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 163158 80132618 3C080002 */       lui $t0, %hi(D_NF_0001BC60)
  /* 16315C 8013261C 2508BC60 */     addiu $t0, $t0, %lo(D_NF_0001BC60)
  /* 163160 80132620 02002025 */        or $a0, $s0, $zero
  /* 163164 80132624 0C003E3D */       jal func_8000F8F4
  /* 163168 80132628 03282821 */      addu $a1, $t9, $t0
  /* 16316C 8013262C 3C098013 */       lui $t1, %hi(D_ovl34_801350B0)
  /* 163170 80132630 8D2950B0 */        lw $t1, %lo(D_ovl34_801350B0)($t1)
  /* 163174 80132634 3C0A0002 */       lui $t2, %hi(D_NF_0001C52C)
  /* 163178 80132638 254AC52C */     addiu $t2, $t2, %lo(D_NF_0001C52C)
  /* 16317C 8013263C 02002025 */        or $a0, $s0, $zero
  /* 163180 80132640 24060000 */     addiu $a2, $zero, 0
  /* 163184 80132644 0C002F8A */       jal func_8000BE28
  /* 163188 80132648 012A2821 */      addu $a1, $t1, $t2
  /* 16318C 8013264C 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 163190 80132650 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 163194 80132654 02002025 */        or $a0, $s0, $zero
  /* 163198 80132658 24060001 */     addiu $a2, $zero, 1
  /* 16319C 8013265C 0C002062 */       jal omAddGObjCommonProc
  /* 1631A0 80132660 24070001 */     addiu $a3, $zero, 1
  /* 1631A4 80132664 0C0037CD */       jal func_8000DF34
  /* 1631A8 80132668 02002025 */        or $a0, $s0, $zero
  /* 1631AC 8013266C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1631B0 80132670 8FB00020 */        lw $s0, 0x20($sp)
  /* 1631B4 80132674 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1631B8 80132678 03E00008 */        jr $ra
  /* 1631BC 8013267C 00000000 */       nop 

glabel func_ovl34_80132680
  /* 1631C0 80132680 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1631C4 80132684 AFBF0024 */        sw $ra, 0x24($sp)
  /* 1631C8 80132688 AFB00020 */        sw $s0, 0x20($sp)
  /* 1631CC 8013268C 00002025 */        or $a0, $zero, $zero
  /* 1631D0 80132690 00002825 */        or $a1, $zero, $zero
  /* 1631D4 80132694 24060013 */     addiu $a2, $zero, 0x13
  /* 1631D8 80132698 0C00265A */       jal omMakeGObjCommon
  /* 1631DC 8013269C 3C078000 */       lui $a3, 0x8000
  /* 1631E0 801326A0 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 1631E4 801326A4 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 1631E8 801326A8 3C0F0002 */       lui $t7, %hi(D_NF_0001CA68)
  /* 1631EC 801326AC 25EFCA68 */     addiu $t7, $t7, %lo(D_NF_0001CA68)
  /* 1631F0 801326B0 00408025 */        or $s0, $v0, $zero
  /* 1631F4 801326B4 00402025 */        or $a0, $v0, $zero
  /* 1631F8 801326B8 00003025 */        or $a2, $zero, $zero
  /* 1631FC 801326BC 0C003C48 */       jal func_8000F120
  /* 163200 801326C0 01CF2821 */      addu $a1, $t6, $t7
  /* 163204 801326C4 3C058001 */       lui $a1, %hi(func_80014768)
  /* 163208 801326C8 2418FFFF */     addiu $t8, $zero, -1
  /* 16320C 801326CC AFB80010 */        sw $t8, 0x10($sp)
  /* 163210 801326D0 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 163214 801326D4 02002025 */        or $a0, $s0, $zero
  /* 163218 801326D8 2406001B */     addiu $a2, $zero, 0x1b
  /* 16321C 801326DC 0C00277D */       jal func_80009DF4
  /* 163220 801326E0 3C078000 */       lui $a3, 0x8000
  /* 163224 801326E4 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 163228 801326E8 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 16322C 801326EC 3C080002 */       lui $t0, %hi(D_NF_0001CAF0)
  /* 163230 801326F0 2508CAF0 */     addiu $t0, $t0, %lo(D_NF_0001CAF0)
  /* 163234 801326F4 02002025 */        or $a0, $s0, $zero
  /* 163238 801326F8 24060000 */     addiu $a2, $zero, 0
  /* 16323C 801326FC 0C002F63 */       jal func_8000BD8C
  /* 163240 80132700 03282821 */      addu $a1, $t9, $t0
  /* 163244 80132704 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 163248 80132708 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 16324C 8013270C 02002025 */        or $a0, $s0, $zero
  /* 163250 80132710 24060001 */     addiu $a2, $zero, 1
  /* 163254 80132714 0C002062 */       jal omAddGObjCommonProc
  /* 163258 80132718 24070001 */     addiu $a3, $zero, 1
  /* 16325C 8013271C 0C0037CD */       jal func_8000DF34
  /* 163260 80132720 02002025 */        or $a0, $s0, $zero
  /* 163264 80132724 8FBF0024 */        lw $ra, 0x24($sp)
  /* 163268 80132728 8FB00020 */        lw $s0, 0x20($sp)
  /* 16326C 8013272C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 163270 80132730 03E00008 */        jr $ra
  /* 163274 80132734 00000000 */       nop 

glabel func_ovl34_80132738
  /* 163278 80132738 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16327C 8013273C AFBF002C */        sw $ra, 0x2c($sp)
  /* 163280 80132740 AFB10028 */        sw $s1, 0x28($sp)
  /* 163284 80132744 AFB00024 */        sw $s0, 0x24($sp)
  /* 163288 80132748 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 16328C 8013274C 00002025 */        or $a0, $zero, $zero
  /* 163290 80132750 00002825 */        or $a1, $zero, $zero
  /* 163294 80132754 24060011 */     addiu $a2, $zero, 0x11
  /* 163298 80132758 0C00265A */       jal omMakeGObjCommon
  /* 16329C 8013275C 3C078000 */       lui $a3, 0x8000
  /* 1632A0 80132760 3C118013 */       lui $s1, %hi(D_ovl34_801350B0)
  /* 1632A4 80132764 263150B0 */     addiu $s1, $s1, %lo(D_ovl34_801350B0)
  /* 1632A8 80132768 8E2E0000 */        lw $t6, ($s1) # D_ovl34_801350B0 + 0
  /* 1632AC 8013276C 3C0F0002 */       lui $t7, %hi(D_NF_0001DF28)
  /* 1632B0 80132770 25EFDF28 */     addiu $t7, $t7, %lo(D_NF_0001DF28)
  /* 1632B4 80132774 00408025 */        or $s0, $v0, $zero
  /* 1632B8 80132778 00402025 */        or $a0, $v0, $zero
  /* 1632BC 8013277C 00003025 */        or $a2, $zero, $zero
  /* 1632C0 80132780 0C003C48 */       jal func_8000F120
  /* 1632C4 80132784 01CF2821 */      addu $a1, $t6, $t7
  /* 1632C8 80132788 3C058001 */       lui $a1, %hi(func_80014768)
  /* 1632CC 8013278C 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 1632D0 80132790 2418FFFF */     addiu $t8, $zero, -1
  /* 1632D4 80132794 AFB80010 */        sw $t8, 0x10($sp)
  /* 1632D8 80132798 AFA50038 */        sw $a1, 0x38($sp)
  /* 1632DC 8013279C 02002025 */        or $a0, $s0, $zero
  /* 1632E0 801327A0 24060006 */     addiu $a2, $zero, 6
  /* 1632E4 801327A4 0C00277D */       jal func_80009DF4
  /* 1632E8 801327A8 3C078000 */       lui $a3, 0x8000
  /* 1632EC 801327AC 4480A000 */      mtc1 $zero, $f20
  /* 1632F0 801327B0 8E190074 */        lw $t9, 0x74($s0)
  /* 1632F4 801327B4 3C0B0002 */       lui $t3, %hi(D_NF_0001DCA0)
  /* 1632F8 801327B8 256BDCA0 */     addiu $t3, $t3, %lo(D_NF_0001DCA0)
  /* 1632FC 801327BC E734001C */      swc1 $f20, 0x1c($t9)
  /* 163300 801327C0 8E080074 */        lw $t0, 0x74($s0)
  /* 163304 801327C4 02002025 */        or $a0, $s0, $zero
  /* 163308 801327C8 E5140020 */      swc1 $f20, 0x20($t0)
  /* 16330C 801327CC 8E090074 */        lw $t1, 0x74($s0)
  /* 163310 801327D0 E5340024 */      swc1 $f20, 0x24($t1)
  /* 163314 801327D4 8E2A0000 */        lw $t2, ($s1) # D_ovl34_801350B0 + 0
  /* 163318 801327D8 0C003E3D */       jal func_8000F8F4
  /* 16331C 801327DC 014B2821 */      addu $a1, $t2, $t3
  /* 163320 801327E0 8E2C0000 */        lw $t4, ($s1) # D_ovl34_801350B0 + 0
  /* 163324 801327E4 3C0D0002 */       lui $t5, %hi(D_NF_0001DFD8)
  /* 163328 801327E8 25ADDFD8 */     addiu $t5, $t5, %lo(D_NF_0001DFD8)
  /* 16332C 801327EC 4406A000 */      mfc1 $a2, $f20
  /* 163330 801327F0 02002025 */        or $a0, $s0, $zero
  /* 163334 801327F4 0C002F8A */       jal func_8000BE28
  /* 163338 801327F8 018D2821 */      addu $a1, $t4, $t5
  /* 16333C 801327FC 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 163340 80132800 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 163344 80132804 AFA50034 */        sw $a1, 0x34($sp)
  /* 163348 80132808 02002025 */        or $a0, $s0, $zero
  /* 16334C 8013280C 24060001 */     addiu $a2, $zero, 1
  /* 163350 80132810 0C002062 */       jal omAddGObjCommonProc
  /* 163354 80132814 24070001 */     addiu $a3, $zero, 1
  /* 163358 80132818 8E2E0000 */        lw $t6, ($s1) # D_ovl34_801350B0 + 0
  /* 16335C 8013281C 3C0F0002 */       lui $t7, %hi(D_NF_0001E010)
  /* 163360 80132820 25EFE010 */     addiu $t7, $t7, %lo(D_NF_0001E010)
  /* 163364 80132824 4406A000 */      mfc1 $a2, $f20
  /* 163368 80132828 02002025 */        or $a0, $s0, $zero
  /* 16336C 8013282C 0C002F63 */       jal func_8000BD8C
  /* 163370 80132830 01CF2821 */      addu $a1, $t6, $t7
  /* 163374 80132834 0C0037CD */       jal func_8000DF34
  /* 163378 80132838 02002025 */        or $a0, $s0, $zero
  /* 16337C 8013283C 00002025 */        or $a0, $zero, $zero
  /* 163380 80132840 00002825 */        or $a1, $zero, $zero
  /* 163384 80132844 24060011 */     addiu $a2, $zero, 0x11
  /* 163388 80132848 0C00265A */       jal omMakeGObjCommon
  /* 16338C 8013284C 3C078000 */       lui $a3, 0x8000
  /* 163390 80132850 8E380000 */        lw $t8, ($s1) # D_ovl34_801350B0 + 0
  /* 163394 80132854 3C190002 */       lui $t9, %hi(D_NF_0001F270)
  /* 163398 80132858 2739F270 */     addiu $t9, $t9, %lo(D_NF_0001F270)
  /* 16339C 8013285C 00408025 */        or $s0, $v0, $zero
  /* 1633A0 80132860 00402025 */        or $a0, $v0, $zero
  /* 1633A4 80132864 00003025 */        or $a2, $zero, $zero
  /* 1633A8 80132868 0C003C48 */       jal func_8000F120
  /* 1633AC 8013286C 03192821 */      addu $a1, $t8, $t9
  /* 1633B0 80132870 2408FFFF */     addiu $t0, $zero, -1
  /* 1633B4 80132874 AFA80010 */        sw $t0, 0x10($sp)
  /* 1633B8 80132878 02002025 */        or $a0, $s0, $zero
  /* 1633BC 8013287C 8FA50038 */        lw $a1, 0x38($sp)
  /* 1633C0 80132880 24060006 */     addiu $a2, $zero, 6
  /* 1633C4 80132884 0C00277D */       jal func_80009DF4
  /* 1633C8 80132888 3C078000 */       lui $a3, 0x8000
  /* 1633CC 8013288C 8E090074 */        lw $t1, 0x74($s0)
  /* 1633D0 80132890 3C0D0002 */       lui $t5, %hi(D_NF_0001F0F8)
  /* 1633D4 80132894 25ADF0F8 */     addiu $t5, $t5, %lo(D_NF_0001F0F8)
  /* 1633D8 80132898 E534001C */      swc1 $f20, 0x1c($t1)
  /* 1633DC 8013289C 8E0A0074 */        lw $t2, 0x74($s0)
  /* 1633E0 801328A0 02002025 */        or $a0, $s0, $zero
  /* 1633E4 801328A4 E5540020 */      swc1 $f20, 0x20($t2)
  /* 1633E8 801328A8 8E0B0074 */        lw $t3, 0x74($s0)
  /* 1633EC 801328AC E5740024 */      swc1 $f20, 0x24($t3)
  /* 1633F0 801328B0 8E2C0000 */        lw $t4, ($s1) # D_ovl34_801350B0 + 0
  /* 1633F4 801328B4 0C003E3D */       jal func_8000F8F4
  /* 1633F8 801328B8 018D2821 */      addu $a1, $t4, $t5
  /* 1633FC 801328BC 8E2E0000 */        lw $t6, ($s1) # D_ovl34_801350B0 + 0
  /* 163400 801328C0 3C0F0002 */       lui $t7, %hi(D_NF_0001F2F4)
  /* 163404 801328C4 25EFF2F4 */     addiu $t7, $t7, %lo(D_NF_0001F2F4)
  /* 163408 801328C8 4406A000 */      mfc1 $a2, $f20
  /* 16340C 801328CC 02002025 */        or $a0, $s0, $zero
  /* 163410 801328D0 0C002F8A */       jal func_8000BE28
  /* 163414 801328D4 01CF2821 */      addu $a1, $t6, $t7
  /* 163418 801328D8 02002025 */        or $a0, $s0, $zero
  /* 16341C 801328DC 8FA50034 */        lw $a1, 0x34($sp)
  /* 163420 801328E0 24060001 */     addiu $a2, $zero, 1
  /* 163424 801328E4 0C002062 */       jal omAddGObjCommonProc
  /* 163428 801328E8 24070001 */     addiu $a3, $zero, 1
  /* 16342C 801328EC 8E380000 */        lw $t8, ($s1) # D_ovl34_801350B0 + 0
  /* 163430 801328F0 3C190002 */       lui $t9, %hi(D_NF_0001F330)
  /* 163434 801328F4 2739F330 */     addiu $t9, $t9, %lo(D_NF_0001F330)
  /* 163438 801328F8 4406A000 */      mfc1 $a2, $f20
  /* 16343C 801328FC 02002025 */        or $a0, $s0, $zero
  /* 163440 80132900 0C002F63 */       jal func_8000BD8C
  /* 163444 80132904 03192821 */      addu $a1, $t8, $t9
  /* 163448 80132908 0C0037CD */       jal func_8000DF34
  /* 16344C 8013290C 02002025 */        or $a0, $s0, $zero
  /* 163450 80132910 8FBF002C */        lw $ra, 0x2c($sp)
  /* 163454 80132914 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 163458 80132918 8FB00024 */        lw $s0, 0x24($sp)
  /* 16345C 8013291C 8FB10028 */        lw $s1, 0x28($sp)
  /* 163460 80132920 03E00008 */        jr $ra
  /* 163464 80132924 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl34_80132928
  /* 163468 80132928 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 16346C 8013292C 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 163470 80132930 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 163474 80132934 AFBF0014 */        sw $ra, 0x14($sp)
  /* 163478 80132938 25E8003C */     addiu $t0, $t7, 0x3c
  /* 16347C 8013293C 27AE001C */     addiu $t6, $sp, 0x1c
  .L80132940:
  /* 163480 80132940 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 163484 80132944 25EF000C */     addiu $t7, $t7, 0xc
  /* 163488 80132948 25CE000C */     addiu $t6, $t6, 0xc
  /* 16348C 8013294C ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 163490 80132950 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 163494 80132954 ADD8FFF8 */        sw $t8, -8($t6)
  /* 163498 80132958 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 16349C 8013295C 15E8FFF8 */       bne $t7, $t0, .L80132940
  /* 1634A0 80132960 ADD9FFFC */        sw $t9, -4($t6)
  /* 1634A4 80132964 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 1634A8 80132968 00002825 */        or $a1, $zero, $zero
  /* 1634AC 8013296C ADD90000 */        sw $t9, ($t6)
  /* 1634B0 80132970 0C03B03B */       jal func_ovl2_800EC0EC
  /* 1634B4 80132974 AFA4001C */        sw $a0, 0x1c($sp)
  /* 1634B8 80132978 3C018013 */       lui $at, %hi(D_ovl34_80134C80)
  /* 1634BC 8013297C C4244C80 */      lwc1 $f4, %lo(D_ovl34_80134C80)($at)
  /* 1634C0 80132980 3C018013 */       lui $at, %hi(D_ovl34_80134C84)
  /* 1634C4 80132984 C4264C84 */      lwc1 $f6, %lo(D_ovl34_80134C84)($at)
  /* 1634C8 80132988 3C098013 */       lui $t1, %hi(D_ovl34_80134CE0)
  /* 1634CC 8013298C 3C018013 */       lui $at, %hi(D_ovl34_80134C88)
  /* 1634D0 80132990 8D294CE0 */        lw $t1, %lo(D_ovl34_80134CE0)($t1)
  /* 1634D4 80132994 C4284C88 */      lwc1 $f8, %lo(D_ovl34_80134C88)($at)
  /* 1634D8 80132998 A3A20033 */        sb $v0, 0x33($sp)
  /* 1634DC 8013299C 27A4001C */     addiu $a0, $sp, 0x1c
  /* 1634E0 801329A0 E7A40020 */      swc1 $f4, 0x20($sp)
  /* 1634E4 801329A4 E7A60024 */      swc1 $f6, 0x24($sp)
  /* 1634E8 801329A8 AFA90054 */        sw $t1, 0x54($sp)
  /* 1634EC 801329AC 0C035FCF */       jal ftManager_CreateFighter
  /* 1634F0 801329B0 E7A80028 */      swc1 $f8, 0x28($sp)
  /* 1634F4 801329B4 3C018013 */       lui $at, %hi(D_ovl34_80134D08)
  /* 1634F8 801329B8 3C050001 */       lui $a1, (0x10009 >> 16) # 65545
  /* 1634FC 801329BC AC224D08 */        sw $v0, %lo(D_ovl34_80134D08)($at)
  /* 163500 801329C0 AFA2005C */        sw $v0, 0x5c($sp)
  /* 163504 801329C4 34A50009 */       ori $a1, $a1, (0x10009 & 0xFFFF) # 65545
  /* 163508 801329C8 0C0E4173 */       jal func_ovl1_803905CC
  /* 16350C 801329CC 00402025 */        or $a0, $v0, $zero
  /* 163510 801329D0 8FA4005C */        lw $a0, 0x5c($sp)
  /* 163514 801329D4 24050006 */     addiu $a1, $zero, 6
  /* 163518 801329D8 0C002834 */       jal om_g_move_obj_dl
  /* 16351C 801329DC 2406FFFF */     addiu $a2, $zero, -1
  /* 163520 801329E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 163524 801329E4 27BD0060 */     addiu $sp, $sp, 0x60
  /* 163528 801329E8 03E00008 */        jr $ra
  /* 16352C 801329EC 00000000 */       nop 

glabel func_ovl34_801329F0
  /* 163530 801329F0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163534 801329F4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 163538 801329F8 00002025 */        or $a0, $zero, $zero
  /* 16353C 801329FC 00002825 */        or $a1, $zero, $zero
  /* 163540 80132A00 24060011 */     addiu $a2, $zero, 0x11
  /* 163544 80132A04 0C00265A */       jal omMakeGObjCommon
  /* 163548 80132A08 3C078000 */       lui $a3, 0x8000
  /* 16354C 80132A0C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 163550 80132A10 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 163554 80132A14 3C0F0002 */       lui $t7, %hi(D_NF_0001F790)
  /* 163558 80132A18 3C018013 */       lui $at, %hi(D_ovl34_80134D30)
  /* 16355C 80132A1C 25EFF790 */     addiu $t7, $t7, %lo(D_NF_0001F790)
  /* 163560 80132A20 AC224D30 */        sw $v0, %lo(D_ovl34_80134D30)($at)
  /* 163564 80132A24 AFA20024 */        sw $v0, 0x24($sp)
  /* 163568 80132A28 00402025 */        or $a0, $v0, $zero
  /* 16356C 80132A2C 0C0024B4 */       jal func_800092D0
  /* 163570 80132A30 01CF2821 */      addu $a1, $t6, $t7
  /* 163574 80132A34 AFA20020 */        sw $v0, 0x20($sp)
  /* 163578 80132A38 00402025 */        or $a0, $v0, $zero
  /* 16357C 80132A3C 2405001C */     addiu $a1, $zero, 0x1c
  /* 163580 80132A40 0C002330 */       jal func_80008CC0
  /* 163584 80132A44 00003025 */        or $a2, $zero, $zero
  /* 163588 80132A48 3C058001 */       lui $a1, %hi(func_80013E8C)
  /* 16358C 80132A4C 2418FFFF */     addiu $t8, $zero, -1
  /* 163590 80132A50 AFB80010 */        sw $t8, 0x10($sp)
  /* 163594 80132A54 24A53E8C */     addiu $a1, $a1, %lo(func_80013E8C)
  /* 163598 80132A58 8FA40024 */        lw $a0, 0x24($sp)
  /* 16359C 80132A5C 24060009 */     addiu $a2, $zero, 9
  /* 1635A0 80132A60 0C00277D */       jal func_80009DF4
  /* 1635A4 80132A64 3C078000 */       lui $a3, 0x8000
  /* 1635A8 80132A68 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 1635AC 80132A6C 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 1635B0 80132A70 3C080002 */       lui $t0, %hi(D_NF_0001F924)
  /* 1635B4 80132A74 2508F924 */     addiu $t0, $t0, %lo(D_NF_0001F924)
  /* 1635B8 80132A78 8FA40020 */        lw $a0, 0x20($sp)
  /* 1635BC 80132A7C 24060000 */     addiu $a2, $zero, 0
  /* 1635C0 80132A80 0C002F47 */       jal func_8000BD1C
  /* 1635C4 80132A84 03282821 */      addu $a1, $t9, $t0
  /* 1635C8 80132A88 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 1635CC 80132A8C 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1635D0 80132A90 8FA40024 */        lw $a0, 0x24($sp)
  /* 1635D4 80132A94 24060001 */     addiu $a2, $zero, 1
  /* 1635D8 80132A98 0C002062 */       jal omAddGObjCommonProc
  /* 1635DC 80132A9C 24070001 */     addiu $a3, $zero, 1
  /* 1635E0 80132AA0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1635E4 80132AA4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1635E8 80132AA8 03E00008 */        jr $ra
  /* 1635EC 80132AAC 00000000 */       nop 

glabel func_ovl34_80132AB0
  /* 1635F0 80132AB0 3C0E8013 */       lui $t6, %hi(D_ovl34_80134CE4)
  /* 1635F4 80132AB4 8DCE4CE4 */        lw $t6, %lo(D_ovl34_80134CE4)($t6)
  /* 1635F8 80132AB8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1635FC 80132ABC AFBF0014 */        sw $ra, 0x14($sp)
  /* 163600 80132AC0 29C10425 */      slti $at, $t6, 0x425
  /* 163604 80132AC4 54200004 */      bnel $at, $zero, .L80132AD8
  /* 163608 80132AC8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16360C 80132ACC 0C0037CD */       jal func_8000DF34
  /* 163610 80132AD0 00000000 */       nop 
  /* 163614 80132AD4 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132AD8:
  /* 163618 80132AD8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16361C 80132ADC 03E00008 */        jr $ra
  /* 163620 80132AE0 00000000 */       nop 

glabel func_ovl34_80132AE4
  /* 163624 80132AE4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163628 80132AE8 AFBF0024 */        sw $ra, 0x24($sp)
  /* 16362C 80132AEC AFB00020 */        sw $s0, 0x20($sp)
  /* 163630 80132AF0 00002025 */        or $a0, $zero, $zero
  /* 163634 80132AF4 00002825 */        or $a1, $zero, $zero
  /* 163638 80132AF8 24060011 */     addiu $a2, $zero, 0x11
  /* 16363C 80132AFC 0C00265A */       jal omMakeGObjCommon
  /* 163640 80132B00 3C078000 */       lui $a3, 0x8000
  /* 163644 80132B04 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 163648 80132B08 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 16364C 80132B0C 3C0F0002 */       lui $t7, %hi(D_NF_00022440)
  /* 163650 80132B10 25EF2440 */     addiu $t7, $t7, %lo(D_NF_00022440)
  /* 163654 80132B14 00408025 */        or $s0, $v0, $zero
  /* 163658 80132B18 00402025 */        or $a0, $v0, $zero
  /* 16365C 80132B1C 00003025 */        or $a2, $zero, $zero
  /* 163660 80132B20 0C003C48 */       jal func_8000F120
  /* 163664 80132B24 01CF2821 */      addu $a1, $t6, $t7
  /* 163668 80132B28 3C058001 */       lui $a1, %hi(func_80014768)
  /* 16366C 80132B2C 2418FFFF */     addiu $t8, $zero, -1
  /* 163670 80132B30 AFB80010 */        sw $t8, 0x10($sp)
  /* 163674 80132B34 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 163678 80132B38 02002025 */        or $a0, $s0, $zero
  /* 16367C 80132B3C 24060006 */     addiu $a2, $zero, 6
  /* 163680 80132B40 0C00277D */       jal func_80009DF4
  /* 163684 80132B44 3C078000 */       lui $a3, 0x8000
  /* 163688 80132B48 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 16368C 80132B4C 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 163690 80132B50 3C080002 */       lui $t0, %hi(D_NF_00020480)
  /* 163694 80132B54 25080480 */     addiu $t0, $t0, %lo(D_NF_00020480)
  /* 163698 80132B58 02002025 */        or $a0, $s0, $zero
  /* 16369C 80132B5C 0C003E3D */       jal func_8000F8F4
  /* 1636A0 80132B60 03282821 */      addu $a1, $t9, $t0
  /* 1636A4 80132B64 3C098013 */       lui $t1, %hi(D_ovl34_801350B0)
  /* 1636A8 80132B68 8D2950B0 */        lw $t1, %lo(D_ovl34_801350B0)($t1)
  /* 1636AC 80132B6C 3C0A0002 */       lui $t2, %hi(D_NF_000225CC)
  /* 1636B0 80132B70 254A25CC */     addiu $t2, $t2, %lo(D_NF_000225CC)
  /* 1636B4 80132B74 02002025 */        or $a0, $s0, $zero
  /* 1636B8 80132B78 24060000 */     addiu $a2, $zero, 0
  /* 1636BC 80132B7C 0C002F8A */       jal func_8000BE28
  /* 1636C0 80132B80 012A2821 */      addu $a1, $t1, $t2
  /* 1636C4 80132B84 3C058013 */       lui $a1, %hi(func_ovl34_80132AB0)
  /* 1636C8 80132B88 24A52AB0 */     addiu $a1, $a1, %lo(func_ovl34_80132AB0)
  /* 1636CC 80132B8C 02002025 */        or $a0, $s0, $zero
  /* 1636D0 80132B90 24060001 */     addiu $a2, $zero, 1
  /* 1636D4 80132B94 0C002062 */       jal omAddGObjCommonProc
  /* 1636D8 80132B98 24070001 */     addiu $a3, $zero, 1
  /* 1636DC 80132B9C 0C0037CD */       jal func_8000DF34
  /* 1636E0 80132BA0 02002025 */        or $a0, $s0, $zero
  /* 1636E4 80132BA4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1636E8 80132BA8 8FB00020 */        lw $s0, 0x20($sp)
  /* 1636EC 80132BAC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1636F0 80132BB0 03E00008 */        jr $ra
  /* 1636F4 80132BB4 00000000 */       nop 

glabel func_ovl34_80132BB8
  /* 1636F8 80132BB8 3C028013 */       lui $v0, %hi(D_ovl34_80134D38)
  /* 1636FC 80132BBC 24424D38 */     addiu $v0, $v0, %lo(D_ovl34_80134D38)
  /* 163700 80132BC0 8C430000 */        lw $v1, ($v0) # D_ovl34_80134D38 + 0
  /* 163704 80132BC4 3C0C8004 */       lui $t4, %hi(gpDisplayListHead)
  /* 163708 80132BC8 AFA40000 */        sw $a0, ($sp)
  /* 16370C 80132BCC 286100A0 */      slti $at, $v1, 0xa0
  /* 163710 80132BD0 10200007 */      beqz $at, .L80132BF0
  /* 163714 80132BD4 258C65B0 */     addiu $t4, $t4, %lo(gpDisplayListHead)
  /* 163718 80132BD8 246E0009 */     addiu $t6, $v1, 9
  /* 16371C 80132BDC 29C100A1 */      slti $at, $t6, 0xa1
  /* 163720 80132BE0 14200003 */      bnez $at, .L80132BF0
  /* 163724 80132BE4 AC4E0000 */        sw $t6, ($v0) # D_ovl34_80134D38 + 0
  /* 163728 80132BE8 241800A0 */     addiu $t8, $zero, 0xa0
  /* 16372C 80132BEC AC580000 */        sw $t8, ($v0) # D_ovl34_80134D38 + 0
  .L80132BF0:
  /* 163730 80132BF0 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 163734 80132BF4 3C0DE700 */       lui $t5, 0xe700
  /* 163738 80132BF8 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 16373C 80132BFC 24990008 */     addiu $t9, $a0, 8
  /* 163740 80132C00 AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 163744 80132C04 AC800004 */        sw $zero, 4($a0)
  /* 163748 80132C08 AC8D0000 */        sw $t5, ($a0)
  /* 16374C 80132C0C 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 163750 80132C10 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 163754 80132C14 3C19FA00 */       lui $t9, 0xfa00
  /* 163758 80132C18 248E0008 */     addiu $t6, $a0, 8
  /* 16375C 80132C1C AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 163760 80132C20 AC800004 */        sw $zero, 4($a0)
  /* 163764 80132C24 AC8F0000 */        sw $t7, ($a0)
  /* 163768 80132C28 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 16376C 80132C2C 24980008 */     addiu $t8, $a0, 8
  /* 163770 80132C30 AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 163774 80132C34 AC990000 */        sw $t9, ($a0)
  /* 163778 80132C38 8C4E0000 */        lw $t6, ($v0) # D_ovl34_80134D38 + 0
  /* 16377C 80132C3C 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 163780 80132C40 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 163784 80132C44 31CF00FF */      andi $t7, $t6, 0xff
  /* 163788 80132C48 AC8F0004 */        sw $t7, 4($a0)
  /* 16378C 80132C4C 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 163790 80132C50 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 163794 80132C54 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 163798 80132C58 24980008 */     addiu $t8, $a0, 8
  /* 16379C 80132C5C AD980000 */        sw $t8, ($t4) # gpDisplayListHead + 0
  /* 1637A0 80132C60 AC8E0004 */        sw $t6, 4($a0)
  /* 1637A4 80132C64 AC990000 */        sw $t9, ($a0)
  /* 1637A8 80132C68 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 1637AC 80132C6C 3C190050 */       lui $t9, (0x504340 >> 16) # 5260096
  /* 1637B0 80132C70 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 1637B4 80132C74 248F0008 */     addiu $t7, $a0, 8
  /* 1637B8 80132C78 AD8F0000 */        sw $t7, ($t4) # gpDisplayListHead + 0
  /* 1637BC 80132C7C 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 1637C0 80132C80 37394340 */       ori $t9, $t9, (0x504340 & 0xFFFF) # 5260096
  /* 1637C4 80132C84 AC990004 */        sw $t9, 4($a0)
  /* 1637C8 80132C88 AC980000 */        sw $t8, ($a0)
  /* 1637CC 80132C8C 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 1637D0 80132C90 3C180002 */       lui $t8, (0x28028 >> 16) # 163880
  /* 1637D4 80132C94 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 1637D8 80132C98 248E0008 */     addiu $t6, $a0, 8
  /* 1637DC 80132C9C AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 1637E0 80132CA0 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 1637E4 80132CA4 37188028 */       ori $t8, $t8, (0x28028 & 0xFFFF) # 163880
  /* 1637E8 80132CA8 AC980004 */        sw $t8, 4($a0)
  /* 1637EC 80132CAC AC8F0000 */        sw $t7, ($a0)
  /* 1637F0 80132CB0 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 1637F4 80132CB4 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1637F8 80132CB8 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 1637FC 80132CBC 24990008 */     addiu $t9, $a0, 8
  /* 163800 80132CC0 AD990000 */        sw $t9, ($t4) # gpDisplayListHead + 0
  /* 163804 80132CC4 AC800004 */        sw $zero, 4($a0)
  /* 163808 80132CC8 AC8D0000 */        sw $t5, ($a0)
  /* 16380C 80132CCC 8D840000 */        lw $a0, ($t4) # gpDisplayListHead + 0
  /* 163810 80132CD0 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 163814 80132CD4 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 163818 80132CD8 248E0008 */     addiu $t6, $a0, 8
  /* 16381C 80132CDC AD8E0000 */        sw $t6, ($t4) # gpDisplayListHead + 0
  /* 163820 80132CE0 AC980004 */        sw $t8, 4($a0)
  /* 163824 80132CE4 03E00008 */        jr $ra
  /* 163828 80132CE8 AC8F0000 */        sw $t7, ($a0)

glabel func_ovl34_80132CEC
  /* 16382C 80132CEC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 163830 80132CF0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 163834 80132CF4 3C018013 */       lui $at, %hi(D_ovl34_80134D38)
  /* 163838 80132CF8 AC204D38 */        sw $zero, %lo(D_ovl34_80134D38)($at)
  /* 16383C 80132CFC 00002025 */        or $a0, $zero, $zero
  /* 163840 80132D00 00002825 */        or $a1, $zero, $zero
  /* 163844 80132D04 24060012 */     addiu $a2, $zero, 0x12
  /* 163848 80132D08 0C00265A */       jal omMakeGObjCommon
  /* 16384C 80132D0C 3C078000 */       lui $a3, 0x8000
  /* 163850 80132D10 3C018013 */       lui $at, %hi(D_ovl34_80134D3C)
  /* 163854 80132D14 3C058013 */       lui $a1, %hi(func_ovl34_80132BB8)
  /* 163858 80132D18 240EFFFF */     addiu $t6, $zero, -1
  /* 16385C 80132D1C AC224D3C */        sw $v0, %lo(D_ovl34_80134D3C)($at)
  /* 163860 80132D20 AFAE0010 */        sw $t6, 0x10($sp)
  /* 163864 80132D24 24A52BB8 */     addiu $a1, $a1, %lo(func_ovl34_80132BB8)
  /* 163868 80132D28 00402025 */        or $a0, $v0, $zero
  /* 16386C 80132D2C 2406001A */     addiu $a2, $zero, 0x1a
  /* 163870 80132D30 0C00277D */       jal func_80009DF4
  /* 163874 80132D34 3C078000 */       lui $a3, 0x8000
  /* 163878 80132D38 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16387C 80132D3C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 163880 80132D40 03E00008 */        jr $ra
  /* 163884 80132D44 00000000 */       nop 

glabel func_ovl34_80132D48
  /* 163888 80132D48 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16388C 80132D4C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 163890 80132D50 AFBF003C */        sw $ra, 0x3c($sp)
  /* 163894 80132D54 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 163898 80132D58 240F003C */     addiu $t7, $zero, 0x3c
  /* 16389C 80132D5C 24180000 */     addiu $t8, $zero, 0
  /* 1638A0 80132D60 3C190400 */       lui $t9, 0x400
  /* 1638A4 80132D64 2408FFFF */     addiu $t0, $zero, -1
  /* 1638A8 80132D68 24090001 */     addiu $t1, $zero, 1
  /* 1638AC 80132D6C 240A0001 */     addiu $t2, $zero, 1
  /* 1638B0 80132D70 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1638B4 80132D74 AFA90028 */        sw $t1, 0x28($sp)
  /* 1638B8 80132D78 AFA80020 */        sw $t0, 0x20($sp)
  /* 1638BC 80132D7C AFB9001C */        sw $t9, 0x1c($sp)
  /* 1638C0 80132D80 AFB80018 */        sw $t8, 0x18($sp)
  /* 1638C4 80132D84 AFAF0014 */        sw $t7, 0x14($sp)
  /* 1638C8 80132D88 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1638CC 80132D8C AFA00024 */        sw $zero, 0x24($sp)
  /* 1638D0 80132D90 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1638D4 80132D94 AFA00034 */        sw $zero, 0x34($sp)
  /* 1638D8 80132D98 24040401 */     addiu $a0, $zero, 0x401
  /* 1638DC 80132D9C 00002825 */        or $a1, $zero, $zero
  /* 1638E0 80132DA0 24060010 */     addiu $a2, $zero, 0x10
  /* 1638E4 80132DA4 0C002E4F */       jal func_8000B93C
  /* 1638E8 80132DA8 3C078000 */       lui $a3, 0x8000
  /* 1638EC 80132DAC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1638F0 80132DB0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1638F4 80132DB4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1638F8 80132DB8 8C430074 */        lw $v1, 0x74($v0)
  /* 1638FC 80132DBC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 163900 80132DC0 44050000 */      mfc1 $a1, $f0
  /* 163904 80132DC4 44060000 */      mfc1 $a2, $f0
  /* 163908 80132DC8 3C07439B */       lui $a3, 0x439b
  /* 16390C 80132DCC 24640008 */     addiu $a0, $v1, 8
  /* 163910 80132DD0 0C001C20 */       jal func_80007080
  /* 163914 80132DD4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 163918 80132DD8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16391C 80132DDC 27BD0040 */     addiu $sp, $sp, 0x40
  /* 163920 80132DE0 03E00008 */        jr $ra
  /* 163924 80132DE4 00000000 */       nop 

glabel func_ovl34_80132DE8
  /* 163928 80132DE8 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 16392C 80132DEC 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 163930 80132DF0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163934 80132DF4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 163938 80132DF8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16393C 80132DFC 244E0008 */     addiu $t6, $v0, 8
  /* 163940 80132E00 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 163944 80132E04 3C0FE700 */       lui $t7, 0xe700
  /* 163948 80132E08 AC4F0000 */        sw $t7, ($v0)
  /* 16394C 80132E0C AC400004 */        sw $zero, 4($v0)
  /* 163950 80132E10 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163954 80132E14 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 163958 80132E18 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16395C 80132E1C 24580008 */     addiu $t8, $v0, 8
  /* 163960 80132E20 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 163964 80132E24 AC400004 */        sw $zero, 4($v0)
  /* 163968 80132E28 AC590000 */        sw $t9, ($v0)
  /* 16396C 80132E2C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163970 80132E30 3C0D8FFF */       lui $t5, (0x8FFF0001 >> 16) # 2415853569
  /* 163974 80132E34 35AD0001 */       ori $t5, $t5, (0x8FFF0001 & 0xFFFF) # 2415853569
  /* 163978 80132E38 244B0008 */     addiu $t3, $v0, 8
  /* 16397C 80132E3C AC6B0000 */        sw $t3, ($v1) # gpDisplayListHead + 0
  /* 163980 80132E40 3C0CEE00 */       lui $t4, 0xee00
  /* 163984 80132E44 AC4C0000 */        sw $t4, ($v0)
  /* 163988 80132E48 AC4D0004 */        sw $t5, 4($v0)
  /* 16398C 80132E4C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163990 80132E50 3C0FE200 */       lui $t7, (0xE2001D00 >> 16) # 3791658240
  /* 163994 80132E54 35EF1D00 */       ori $t7, $t7, (0xE2001D00 & 0xFFFF) # 3791658240
  /* 163998 80132E58 244E0008 */     addiu $t6, $v0, 8
  /* 16399C 80132E5C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1639A0 80132E60 24180004 */     addiu $t8, $zero, 4
  /* 1639A4 80132E64 AC580004 */        sw $t8, 4($v0)
  /* 1639A8 80132E68 AC4F0000 */        sw $t7, ($v0)
  /* 1639AC 80132E6C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1639B0 80132E70 3C0C0055 */       lui $t4, (0x552058 >> 16) # 5578840
  /* 1639B4 80132E74 3C0BE200 */       lui $t3, (0xE200001C >> 16) # 3791650844
  /* 1639B8 80132E78 24590008 */     addiu $t9, $v0, 8
  /* 1639BC 80132E7C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 1639C0 80132E80 356B001C */       ori $t3, $t3, (0xE200001C & 0xFFFF) # 3791650844
  /* 1639C4 80132E84 358C2058 */       ori $t4, $t4, (0x552058 & 0xFFFF) # 5578840
  /* 1639C8 80132E88 AC4C0004 */        sw $t4, 4($v0)
  /* 1639CC 80132E8C AC4B0000 */        sw $t3, ($v0)
  /* 1639D0 80132E90 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1639D4 80132E94 3C0FFFFC */       lui $t7, (0xFFFCF279 >> 16) # 4294767225
  /* 1639D8 80132E98 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 1639DC 80132E9C 244D0008 */     addiu $t5, $v0, 8
  /* 1639E0 80132EA0 AC6D0000 */        sw $t5, ($v1) # gpDisplayListHead + 0
  /* 1639E4 80132EA4 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 1639E8 80132EA8 35EFF279 */       ori $t7, $t7, (0xFFFCF279 & 0xFFFF) # 4294767225
  /* 1639EC 80132EAC AC4F0004 */        sw $t7, 4($v0)
  /* 1639F0 80132EB0 0C0333DD */       jal func_ovl0_800CCF74
  /* 1639F4 80132EB4 AC4E0000 */        sw $t6, ($v0)
  /* 1639F8 80132EB8 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 1639FC 80132EBC 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 163A00 80132EC0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163A04 80132EC4 3C19E700 */       lui $t9, 0xe700
  /* 163A08 80132EC8 3C0CE300 */       lui $t4, (0xE3000A01 >> 16) # 3808430593
  /* 163A0C 80132ECC 24580008 */     addiu $t8, $v0, 8
  /* 163A10 80132ED0 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 163A14 80132ED4 AC400004 */        sw $zero, 4($v0)
  /* 163A18 80132ED8 AC590000 */        sw $t9, ($v0)
  /* 163A1C 80132EDC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163A20 80132EE0 358C0A01 */       ori $t4, $t4, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 163A24 80132EE4 3C0EE200 */       lui $t6, (0xE2001D00 >> 16) # 3791658240
  /* 163A28 80132EE8 244B0008 */     addiu $t3, $v0, 8
  /* 163A2C 80132EEC AC6B0000 */        sw $t3, ($v1) # gpDisplayListHead + 0
  /* 163A30 80132EF0 AC400004 */        sw $zero, 4($v0)
  /* 163A34 80132EF4 AC4C0000 */        sw $t4, ($v0)
  /* 163A38 80132EF8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163A3C 80132EFC 35CE1D00 */       ori $t6, $t6, (0xE2001D00 & 0xFFFF) # 3791658240
  /* 163A40 80132F00 3C190055 */       lui $t9, (0x552078 >> 16) # 5578872
  /* 163A44 80132F04 244D0008 */     addiu $t5, $v0, 8
  /* 163A48 80132F08 AC6D0000 */        sw $t5, ($v1) # gpDisplayListHead + 0
  /* 163A4C 80132F0C AC400004 */        sw $zero, 4($v0)
  /* 163A50 80132F10 AC4E0000 */        sw $t6, ($v0)
  /* 163A54 80132F14 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 163A58 80132F18 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 163A5C 80132F1C 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 163A60 80132F20 244F0008 */     addiu $t7, $v0, 8
  /* 163A64 80132F24 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 163A68 80132F28 37392078 */       ori $t9, $t9, (0x552078 & 0xFFFF) # 5578872
  /* 163A6C 80132F2C AC590004 */        sw $t9, 4($v0)
  /* 163A70 80132F30 AC580000 */        sw $t8, ($v0)
  /* 163A74 80132F34 8FBF0014 */        lw $ra, 0x14($sp)
  /* 163A78 80132F38 27BD0018 */     addiu $sp, $sp, 0x18
  /* 163A7C 80132F3C 03E00008 */        jr $ra
  /* 163A80 80132F40 00000000 */       nop 

glabel func_ovl34_80132F44
  /* 163A84 80132F44 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163A88 80132F48 AFBF001C */        sw $ra, 0x1c($sp)
  /* 163A8C 80132F4C 00002025 */        or $a0, $zero, $zero
  /* 163A90 80132F50 00002825 */        or $a1, $zero, $zero
  /* 163A94 80132F54 24060014 */     addiu $a2, $zero, 0x14
  /* 163A98 80132F58 0C00265A */       jal omMakeGObjCommon
  /* 163A9C 80132F5C 3C078000 */       lui $a3, 0x8000
  /* 163AA0 80132F60 3C018013 */       lui $at, %hi(D_ovl34_80134D44)
  /* 163AA4 80132F64 3C058013 */       lui $a1, %hi(func_ovl34_80132DE8)
  /* 163AA8 80132F68 240EFFFF */     addiu $t6, $zero, -1
  /* 163AAC 80132F6C AC224D44 */        sw $v0, %lo(D_ovl34_80134D44)($at)
  /* 163AB0 80132F70 AFA20024 */        sw $v0, 0x24($sp)
  /* 163AB4 80132F74 AFAE0010 */        sw $t6, 0x10($sp)
  /* 163AB8 80132F78 24A52DE8 */     addiu $a1, $a1, %lo(func_ovl34_80132DE8)
  /* 163ABC 80132F7C 00402025 */        or $a0, $v0, $zero
  /* 163AC0 80132F80 2406001C */     addiu $a2, $zero, 0x1c
  /* 163AC4 80132F84 0C00277D */       jal func_80009DF4
  /* 163AC8 80132F88 3C078000 */       lui $a3, 0x8000
  /* 163ACC 80132F8C 3C0F8013 */       lui $t7, %hi(D_ovl34_801350CC)
  /* 163AD0 80132F90 8DEF50CC */        lw $t7, %lo(D_ovl34_801350CC)($t7)
  /* 163AD4 80132F94 3C180002 */       lui $t8, %hi(D_NF_00026C88)
  /* 163AD8 80132F98 27186C88 */     addiu $t8, $t8, %lo(D_NF_00026C88)
  /* 163ADC 80132F9C 8FA40024 */        lw $a0, 0x24($sp)
  /* 163AE0 80132FA0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 163AE4 80132FA4 01F82821 */      addu $a1, $t7, $t8
  /* 163AE8 80132FA8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 163AEC 80132FAC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 163AF0 80132FB0 00000000 */       nop 
  /* 163AF4 80132FB4 E4400058 */      swc1 $f0, 0x58($v0)
  /* 163AF8 80132FB8 E440005C */      swc1 $f0, 0x5c($v0)
  /* 163AFC 80132FBC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 163B00 80132FC0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 163B04 80132FC4 03E00008 */        jr $ra
  /* 163B08 80132FC8 00000000 */       nop 

glabel func_ovl34_80132FCC
  /* 163B0C 80132FCC 27BDFEE0 */     addiu $sp, $sp, -0x120
  /* 163B10 80132FD0 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 163B14 80132FD4 3C0E8013 */       lui $t6, %hi(D_ovl34_80134A70)
  /* 163B18 80132FD8 27A70090 */     addiu $a3, $sp, 0x90
  /* 163B1C 80132FDC 25CE4A70 */     addiu $t6, $t6, %lo(D_ovl34_80134A70)
  /* 163B20 80132FE0 44810000 */      mtc1 $at, $f0 # 30.0 to cop1
  /* 163B24 80132FE4 27A80000 */     addiu $t0, $sp, 0
  /* 163B28 80132FE8 25C90090 */     addiu $t1, $t6, 0x90
  /* 163B2C 80132FEC 00E0C825 */        or $t9, $a3, $zero
  .L80132FF0:
  /* 163B30 80132FF0 8DD80000 */        lw $t8, ($t6) # D_ovl34_80134A70 + 0
  /* 163B34 80132FF4 25CE000C */     addiu $t6, $t6, 0xc
  /* 163B38 80132FF8 2739000C */     addiu $t9, $t9, 0xc
  /* 163B3C 80132FFC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 163B40 80133000 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl34_80134A70 + -8
  /* 163B44 80133004 AF2FFFF8 */        sw $t7, -8($t9)
  /* 163B48 80133008 8DD8FFFC */        lw $t8, -4($t6) # D_ovl34_80134A70 + -4
  /* 163B4C 8013300C 15C9FFF8 */       bne $t6, $t1, .L80132FF0
  /* 163B50 80133010 AF38FFFC */        sw $t8, -4($t9)
  /* 163B54 80133014 3C0A8013 */       lui $t2, %hi(D_ovl34_80134B00)
  /* 163B58 80133018 254A4B00 */     addiu $t2, $t2, %lo(D_ovl34_80134B00)
  /* 163B5C 8013301C 25490090 */     addiu $t1, $t2, 0x90
  /* 163B60 80133020 01006825 */        or $t5, $t0, $zero
  .L80133024:
  /* 163B64 80133024 8D4C0000 */        lw $t4, ($t2) # D_ovl34_80134B00 + 0
  /* 163B68 80133028 254A000C */     addiu $t2, $t2, 0xc
  /* 163B6C 8013302C 25AD000C */     addiu $t5, $t5, 0xc
  /* 163B70 80133030 ADACFFF4 */        sw $t4, -0xc($t5)
  /* 163B74 80133034 8D4BFFF8 */        lw $t3, -8($t2) # D_ovl34_80134B00 + -8
  /* 163B78 80133038 ADABFFF8 */        sw $t3, -8($t5)
  /* 163B7C 8013303C 8D4CFFFC */        lw $t4, -4($t2) # D_ovl34_80134B00 + -4
  /* 163B80 80133040 1549FFF8 */       bne $t2, $t1, .L80133024
  /* 163B84 80133044 ADACFFFC */        sw $t4, -4($t5)
  /* 163B88 80133048 00051080 */       sll $v0, $a1, 2
  /* 163B8C 8013304C 00451023 */      subu $v0, $v0, $a1
  /* 163B90 80133050 00021080 */       sll $v0, $v0, 2
  /* 163B94 80133054 00E21821 */      addu $v1, $a3, $v0
  /* 163B98 80133058 C4640000 */      lwc1 $f4, ($v1)
  /* 163B9C 8013305C 8C8E0074 */        lw $t6, 0x74($a0)
  /* 163BA0 80133060 01023021 */      addu $a2, $t0, $v0
  /* 163BA4 80133064 46002182 */     mul.s $f6, $f4, $f0
  /* 163BA8 80133068 E5C6001C */      swc1 $f6, 0x1c($t6)
  /* 163BAC 8013306C C4680004 */      lwc1 $f8, 4($v1)
  /* 163BB0 80133070 8C990074 */        lw $t9, 0x74($a0)
  /* 163BB4 80133074 46004282 */     mul.s $f10, $f8, $f0
  /* 163BB8 80133078 E72A0020 */      swc1 $f10, 0x20($t9)
  /* 163BBC 8013307C C4700008 */      lwc1 $f16, 8($v1)
  /* 163BC0 80133080 8C8F0074 */        lw $t7, 0x74($a0)
  /* 163BC4 80133084 46008482 */     mul.s $f18, $f16, $f0
  /* 163BC8 80133088 E5F20024 */      swc1 $f18, 0x24($t7)
  /* 163BCC 8013308C 8C980074 */        lw $t8, 0x74($a0)
  /* 163BD0 80133090 C4C40000 */      lwc1 $f4, ($a2)
  /* 163BD4 80133094 E7040040 */      swc1 $f4, 0x40($t8)
  /* 163BD8 80133098 8C890074 */        lw $t1, 0x74($a0)
  /* 163BDC 8013309C C4C60004 */      lwc1 $f6, 4($a2)
  /* 163BE0 801330A0 E5260044 */      swc1 $f6, 0x44($t1)
  /* 163BE4 801330A4 8C8A0074 */        lw $t2, 0x74($a0)
  /* 163BE8 801330A8 C4C80008 */      lwc1 $f8, 8($a2)
  /* 163BEC 801330AC 27BD0120 */     addiu $sp, $sp, 0x120
  /* 163BF0 801330B0 03E00008 */        jr $ra
  /* 163BF4 801330B4 E5480048 */      swc1 $f8, 0x48($t2)

glabel func_ovl34_801330B8
  /* 163BF8 801330B8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163BFC 801330BC AFBF0024 */        sw $ra, 0x24($sp)
  /* 163C00 801330C0 AFB00020 */        sw $s0, 0x20($sp)
  /* 163C04 801330C4 00002025 */        or $a0, $zero, $zero
  /* 163C08 801330C8 00002825 */        or $a1, $zero, $zero
  /* 163C0C 801330CC 24060011 */     addiu $a2, $zero, 0x11
  /* 163C10 801330D0 0C00265A */       jal omMakeGObjCommon
  /* 163C14 801330D4 3C078000 */       lui $a3, 0x8000
  /* 163C18 801330D8 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B0)
  /* 163C1C 801330DC 8DCE50B0 */        lw $t6, %lo(D_ovl34_801350B0)($t6)
  /* 163C20 801330E0 3C0F0002 */       lui $t7, %hi(D_NF_00022E18)
  /* 163C24 801330E4 3C018013 */       lui $at, %hi(D_ovl34_80134D40)
  /* 163C28 801330E8 25EF2E18 */     addiu $t7, $t7, %lo(D_NF_00022E18)
  /* 163C2C 801330EC AC224D40 */        sw $v0, %lo(D_ovl34_80134D40)($at)
  /* 163C30 801330F0 00408025 */        or $s0, $v0, $zero
  /* 163C34 801330F4 00402025 */        or $a0, $v0, $zero
  /* 163C38 801330F8 0C0024B4 */       jal func_800092D0
  /* 163C3C 801330FC 01CF2821 */      addu $a1, $t6, $t7
  /* 163C40 80133100 00402025 */        or $a0, $v0, $zero
  /* 163C44 80133104 2405001C */     addiu $a1, $zero, 0x1c
  /* 163C48 80133108 0C002330 */       jal func_80008CC0
  /* 163C4C 8013310C 00003025 */        or $a2, $zero, $zero
  /* 163C50 80133110 3C058001 */       lui $a1, %hi(func_80013E8C)
  /* 163C54 80133114 2418FFFF */     addiu $t8, $zero, -1
  /* 163C58 80133118 AFB80010 */        sw $t8, 0x10($sp)
  /* 163C5C 8013311C 24A53E8C */     addiu $a1, $a1, %lo(func_80013E8C)
  /* 163C60 80133120 02002025 */        or $a0, $s0, $zero
  /* 163C64 80133124 2406001B */     addiu $a2, $zero, 0x1b
  /* 163C68 80133128 0C00277D */       jal func_80009DF4
  /* 163C6C 8013312C 3C078000 */       lui $a3, 0x8000
  /* 163C70 80133130 3C198013 */       lui $t9, %hi(D_ovl34_801350B0)
  /* 163C74 80133134 8F3950B0 */        lw $t9, %lo(D_ovl34_801350B0)($t9)
  /* 163C78 80133138 3C080002 */       lui $t0, %hi(D_NF_00022C90)
  /* 163C7C 8013313C 25082C90 */     addiu $t0, $t0, %lo(D_NF_00022C90)
  /* 163C80 80133140 02002025 */        or $a0, $s0, $zero
  /* 163C84 80133144 0C003E3D */       jal func_8000F8F4
  /* 163C88 80133148 03282821 */      addu $a1, $t9, $t0
  /* 163C8C 8013314C 3C098013 */       lui $t1, %hi(D_ovl34_801350B0)
  /* 163C90 80133150 8D2950B0 */        lw $t1, %lo(D_ovl34_801350B0)($t1)
  /* 163C94 80133154 3C0A0002 */       lui $t2, %hi(D_NF_00022F10)
  /* 163C98 80133158 254A2F10 */     addiu $t2, $t2, %lo(D_NF_00022F10)
  /* 163C9C 8013315C 02002025 */        or $a0, $s0, $zero
  /* 163CA0 80133160 24060000 */     addiu $a2, $zero, 0
  /* 163CA4 80133164 0C002F8A */       jal func_8000BE28
  /* 163CA8 80133168 012A2821 */      addu $a1, $t1, $t2
  /* 163CAC 8013316C 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 163CB0 80133170 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 163CB4 80133174 02002025 */        or $a0, $s0, $zero
  /* 163CB8 80133178 24060001 */     addiu $a2, $zero, 1
  /* 163CBC 8013317C 0C002062 */       jal omAddGObjCommonProc
  /* 163CC0 80133180 24070001 */     addiu $a3, $zero, 1
  /* 163CC4 80133184 0C0037CD */       jal func_8000DF34
  /* 163CC8 80133188 02002025 */        or $a0, $s0, $zero
  /* 163CCC 8013318C 3C058013 */       lui $a1, %hi(D_ovl34_80134CF8)
  /* 163CD0 80133190 8CA54CF8 */        lw $a1, %lo(D_ovl34_80134CF8)($a1)
  /* 163CD4 80133194 0C04CBF3 */       jal func_ovl34_80132FCC
  /* 163CD8 80133198 02002025 */        or $a0, $s0, $zero
  /* 163CDC 8013319C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 163CE0 801331A0 8FB00020 */        lw $s0, 0x20($sp)
  /* 163CE4 801331A4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 163CE8 801331A8 03E00008 */        jr $ra
  /* 163CEC 801331AC 00000000 */       nop 

glabel func_ovl34_801331B0
  /* 163CF0 801331B0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 163CF4 801331B4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 163CF8 801331B8 3C048013 */       lui $a0, %hi(D_ovl34_80134D18)
  /* 163CFC 801331BC 0C0026A1 */       jal omEjectGObjCommon
  /* 163D00 801331C0 8C844D18 */        lw $a0, %lo(D_ovl34_80134D18)($a0)
  /* 163D04 801331C4 3C048013 */       lui $a0, %hi(D_ovl34_80134D1C)
  /* 163D08 801331C8 0C0026A1 */       jal omEjectGObjCommon
  /* 163D0C 801331CC 8C844D1C */        lw $a0, %lo(D_ovl34_80134D1C)($a0)
  /* 163D10 801331D0 3C048013 */       lui $a0, %hi(D_ovl34_80134D20)
  /* 163D14 801331D4 0C0026A1 */       jal omEjectGObjCommon
  /* 163D18 801331D8 8C844D20 */        lw $a0, %lo(D_ovl34_80134D20)($a0)
  /* 163D1C 801331DC 3C048013 */       lui $a0, %hi(D_ovl34_80134D24)
  /* 163D20 801331E0 0C0026A1 */       jal omEjectGObjCommon
  /* 163D24 801331E4 8C844D24 */        lw $a0, %lo(D_ovl34_80134D24)($a0)
  /* 163D28 801331E8 3C048013 */       lui $a0, %hi(D_ovl34_80134D28)
  /* 163D2C 801331EC 0C0026A1 */       jal omEjectGObjCommon
  /* 163D30 801331F0 8C844D28 */        lw $a0, %lo(D_ovl34_80134D28)($a0)
  /* 163D34 801331F4 3C048013 */       lui $a0, %hi(D_ovl34_80134D2C)
  /* 163D38 801331F8 0C0026A1 */       jal omEjectGObjCommon
  /* 163D3C 801331FC 8C844D2C */        lw $a0, %lo(D_ovl34_80134D2C)($a0)
  /* 163D40 80133200 8FBF0014 */        lw $ra, 0x14($sp)
  /* 163D44 80133204 27BD0018 */     addiu $sp, $sp, 0x18
  /* 163D48 80133208 03E00008 */        jr $ra
  /* 163D4C 8013320C 00000000 */       nop 

glabel func_ovl34_80133210
  /* 163D50 80133210 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 163D54 80133214 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 163D58 80133218 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163D5C 8013321C AFBF0024 */        sw $ra, 0x24($sp)
  /* 163D60 80133220 AFB00020 */        sw $s0, 0x20($sp)
  /* 163D64 80133224 AFA40028 */        sw $a0, 0x28($sp)
  /* 163D68 80133228 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 163D6C 8013322C 8C900074 */        lw $s0, 0x74($a0)
  /* 163D70 80133230 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 163D74 80133234 44050000 */      mfc1 $a1, $f0
  /* 163D78 80133238 44060000 */      mfc1 $a2, $f0
  /* 163D7C 8013323C 3C07439B */       lui $a3, 0x439b
  /* 163D80 80133240 26040008 */     addiu $a0, $s0, 8
  /* 163D84 80133244 0C001C20 */       jal func_80007080
  /* 163D88 80133248 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 163D8C 8013324C 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 163D90 80133250 44813000 */      mtc1 $at, $f6 # 80.0 to cop1
  /* 163D94 80133254 3C018013 */       lui $at, %hi(D_ovl34_80134C8C)
  /* 163D98 80133258 3C0F8013 */       lui $t7, %hi(D_ovl34_801350B8)
  /* 163D9C 8013325C E6060028 */      swc1 $f6, 0x28($s0)
  /* 163DA0 80133260 C4284C8C */      lwc1 $f8, %lo(D_ovl34_80134C8C)($at)
  /* 163DA4 80133264 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 163DA8 80133268 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 163DAC 8013326C E608002C */      swc1 $f8, 0x2c($s0)
  /* 163DB0 80133270 8DEF50B8 */        lw $t7, %lo(D_ovl34_801350B8)($t7)
  /* 163DB4 80133274 02002025 */        or $a0, $s0, $zero
  /* 163DB8 80133278 24060000 */     addiu $a2, $zero, 0
  /* 163DBC 8013327C 0C003E8F */       jal func_8000FA3C
  /* 163DC0 80133280 01F82821 */      addu $a1, $t7, $t8
  /* 163DC4 80133284 3C058001 */       lui $a1, %hi(func_80010580)
  /* 163DC8 80133288 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 163DCC 8013328C 8FA40028 */        lw $a0, 0x28($sp)
  /* 163DD0 80133290 24060001 */     addiu $a2, $zero, 1
  /* 163DD4 80133294 0C002062 */       jal omAddGObjCommonProc
  /* 163DD8 80133298 24070001 */     addiu $a3, $zero, 1
  /* 163DDC 8013329C 8E190080 */        lw $t9, 0x80($s0)
  /* 163DE0 801332A0 37280004 */       ori $t0, $t9, 4
  /* 163DE4 801332A4 AE080080 */        sw $t0, 0x80($s0)
  /* 163DE8 801332A8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 163DEC 801332AC 8FB00020 */        lw $s0, 0x20($sp)
  /* 163DF0 801332B0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 163DF4 801332B4 03E00008 */        jr $ra
  /* 163DF8 801332B8 00000000 */       nop 

glabel func_ovl34_801332BC
  /* 163DFC 801332BC 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 163E00 801332C0 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 163E04 801332C4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 163E08 801332C8 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 163E0C 801332CC 240E0050 */     addiu $t6, $zero, 0x50
  /* 163E10 801332D0 24180000 */     addiu $t8, $zero, 0
  /* 163E14 801332D4 24190040 */     addiu $t9, $zero, 0x40
  /* 163E18 801332D8 240FFFFF */     addiu $t7, $zero, -1
  /* 163E1C 801332DC 24080001 */     addiu $t0, $zero, 1
  /* 163E20 801332E0 24090001 */     addiu $t1, $zero, 1
  /* 163E24 801332E4 AFA90030 */        sw $t1, 0x30($sp)
  /* 163E28 801332E8 AFA80028 */        sw $t0, 0x28($sp)
  /* 163E2C 801332EC AFAF0020 */        sw $t7, 0x20($sp)
  /* 163E30 801332F0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 163E34 801332F4 AFB80018 */        sw $t8, 0x18($sp)
  /* 163E38 801332F8 AFAE0014 */        sw $t6, 0x14($sp)
  /* 163E3C 801332FC AFA20010 */        sw $v0, 0x10($sp)
  /* 163E40 80133300 AFA20040 */        sw $v0, 0x40($sp)
  /* 163E44 80133304 AFA00024 */        sw $zero, 0x24($sp)
  /* 163E48 80133308 AFA0002C */        sw $zero, 0x2c($sp)
  /* 163E4C 8013330C AFA00034 */        sw $zero, 0x34($sp)
  /* 163E50 80133310 24040401 */     addiu $a0, $zero, 0x401
  /* 163E54 80133314 00002825 */        or $a1, $zero, $zero
  /* 163E58 80133318 24060010 */     addiu $a2, $zero, 0x10
  /* 163E5C 8013331C 0C002E4F */       jal func_8000B93C
  /* 163E60 80133320 3C078000 */       lui $a3, 0x8000
  /* 163E64 80133324 3C018013 */       lui $at, %hi(D_ovl34_80134CE8)
  /* 163E68 80133328 AC224CE8 */        sw $v0, %lo(D_ovl34_80134CE8)($at)
  /* 163E6C 8013332C AFA20044 */        sw $v0, 0x44($sp)
  /* 163E70 80133330 8C440074 */        lw $a0, 0x74($v0)
  /* 163E74 80133334 24050003 */     addiu $a1, $zero, 3
  /* 163E78 80133338 0C00233C */       jal func_80008CF0
  /* 163E7C 8013333C 00003025 */        or $a2, $zero, $zero
  /* 163E80 80133340 8FAA0044 */        lw $t2, 0x44($sp)
  /* 163E84 80133344 2405000E */     addiu $a1, $zero, 0xe
  /* 163E88 80133348 00003025 */        or $a2, $zero, $zero
  /* 163E8C 8013334C 0C00233C */       jal func_80008CF0
  /* 163E90 80133350 8D440074 */        lw $a0, 0x74($t2)
  /* 163E94 80133354 0C04CC84 */       jal func_ovl34_80133210
  /* 163E98 80133358 8FA40044 */        lw $a0, 0x44($sp)
  /* 163E9C 8013335C 8FAB0040 */        lw $t3, 0x40($sp)
  /* 163EA0 80133360 3C0F0800 */       lui $t7, (0x8000200 >> 16) # 134218240
  /* 163EA4 80133364 35EF0200 */       ori $t7, $t7, (0x8000200 & 0xFFFF) # 134218240
  /* 163EA8 80133368 240C0028 */     addiu $t4, $zero, 0x28
  /* 163EAC 8013336C 240E0000 */     addiu $t6, $zero, 0
  /* 163EB0 80133370 240DFFFF */     addiu $t5, $zero, -1
  /* 163EB4 80133374 24180001 */     addiu $t8, $zero, 1
  /* 163EB8 80133378 24190001 */     addiu $t9, $zero, 1
  /* 163EBC 8013337C 24080001 */     addiu $t0, $zero, 1
  /* 163EC0 80133380 AFA80030 */        sw $t0, 0x30($sp)
  /* 163EC4 80133384 AFB90028 */        sw $t9, 0x28($sp)
  /* 163EC8 80133388 AFB80024 */        sw $t8, 0x24($sp)
  /* 163ECC 8013338C AFAD0020 */        sw $t5, 0x20($sp)
  /* 163ED0 80133390 AFAE0018 */        sw $t6, 0x18($sp)
  /* 163ED4 80133394 AFAC0014 */        sw $t4, 0x14($sp)
  /* 163ED8 80133398 AFAF001C */        sw $t7, 0x1c($sp)
  /* 163EDC 8013339C 24040401 */     addiu $a0, $zero, 0x401
  /* 163EE0 801333A0 00002825 */        or $a1, $zero, $zero
  /* 163EE4 801333A4 24060010 */     addiu $a2, $zero, 0x10
  /* 163EE8 801333A8 3C078000 */       lui $a3, 0x8000
  /* 163EEC 801333AC AFA0002C */        sw $zero, 0x2c($sp)
  /* 163EF0 801333B0 AFA00034 */        sw $zero, 0x34($sp)
  /* 163EF4 801333B4 0C002E4F */       jal func_8000B93C
  /* 163EF8 801333B8 AFAB0010 */        sw $t3, 0x10($sp)
  /* 163EFC 801333BC 3C018013 */       lui $at, %hi(D_ovl34_80134CEC)
  /* 163F00 801333C0 AC224CEC */        sw $v0, %lo(D_ovl34_80134CEC)($at)
  /* 163F04 801333C4 0C04CC84 */       jal func_ovl34_80133210
  /* 163F08 801333C8 00402025 */        or $a0, $v0, $zero
  /* 163F0C 801333CC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 163F10 801333D0 27BD0048 */     addiu $sp, $sp, 0x48
  /* 163F14 801333D4 03E00008 */        jr $ra
  /* 163F18 801333D8 00000000 */       nop 

glabel func_ovl34_801333DC
  /* 163F1C 801333DC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 163F20 801333E0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 163F24 801333E4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 163F28 801333E8 AFBF0024 */        sw $ra, 0x24($sp)
  /* 163F2C 801333EC AFB00020 */        sw $s0, 0x20($sp)
  /* 163F30 801333F0 AFA40028 */        sw $a0, 0x28($sp)
  /* 163F34 801333F4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 163F38 801333F8 8C900074 */        lw $s0, 0x74($a0)
  /* 163F3C 801333FC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 163F40 80133400 44050000 */      mfc1 $a1, $f0
  /* 163F44 80133404 44060000 */      mfc1 $a2, $f0
  /* 163F48 80133408 3C07439B */       lui $a3, 0x439b
  /* 163F4C 8013340C 26040008 */     addiu $a0, $s0, 8
  /* 163F50 80133410 0C001C20 */       jal func_80007080
  /* 163F54 80133414 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 163F58 80133418 3C0F8013 */       lui $t7, %hi(D_ovl34_801350BC)
  /* 163F5C 8013341C 8DEF50BC */        lw $t7, %lo(D_ovl34_801350BC)($t7)
  /* 163F60 80133420 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 163F64 80133424 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 163F68 80133428 02002025 */        or $a0, $s0, $zero
  /* 163F6C 8013342C 24060000 */     addiu $a2, $zero, 0
  /* 163F70 80133430 0C003E8F */       jal func_8000FA3C
  /* 163F74 80133434 01F82821 */      addu $a1, $t7, $t8
  /* 163F78 80133438 3C058001 */       lui $a1, %hi(func_80010580)
  /* 163F7C 8013343C 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 163F80 80133440 8FA40028 */        lw $a0, 0x28($sp)
  /* 163F84 80133444 24060001 */     addiu $a2, $zero, 1
  /* 163F88 80133448 0C002062 */       jal omAddGObjCommonProc
  /* 163F8C 8013344C 24070001 */     addiu $a3, $zero, 1
  /* 163F90 80133450 8E190080 */        lw $t9, 0x80($s0)
  /* 163F94 80133454 37280004 */       ori $t0, $t9, 4
  /* 163F98 80133458 AE080080 */        sw $t0, 0x80($s0)
  /* 163F9C 8013345C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 163FA0 80133460 8FB00020 */        lw $s0, 0x20($sp)
  /* 163FA4 80133464 27BD0028 */     addiu $sp, $sp, 0x28
  /* 163FA8 80133468 03E00008 */        jr $ra
  /* 163FAC 8013346C 00000000 */       nop 

glabel func_ovl34_80133470
  /* 163FB0 80133470 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 163FB4 80133474 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 163FB8 80133478 AFBF003C */        sw $ra, 0x3c($sp)
  /* 163FBC 8013347C 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 163FC0 80133480 240E0050 */     addiu $t6, $zero, 0x50
  /* 163FC4 80133484 24180000 */     addiu $t8, $zero, 0
  /* 163FC8 80133488 24190040 */     addiu $t9, $zero, 0x40
  /* 163FCC 8013348C 240FFFFF */     addiu $t7, $zero, -1
  /* 163FD0 80133490 24080001 */     addiu $t0, $zero, 1
  /* 163FD4 80133494 24090001 */     addiu $t1, $zero, 1
  /* 163FD8 80133498 AFA90030 */        sw $t1, 0x30($sp)
  /* 163FDC 8013349C AFA80028 */        sw $t0, 0x28($sp)
  /* 163FE0 801334A0 AFAF0020 */        sw $t7, 0x20($sp)
  /* 163FE4 801334A4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 163FE8 801334A8 AFB80018 */        sw $t8, 0x18($sp)
  /* 163FEC 801334AC AFAE0014 */        sw $t6, 0x14($sp)
  /* 163FF0 801334B0 AFA20010 */        sw $v0, 0x10($sp)
  /* 163FF4 801334B4 AFA20040 */        sw $v0, 0x40($sp)
  /* 163FF8 801334B8 AFA00024 */        sw $zero, 0x24($sp)
  /* 163FFC 801334BC AFA0002C */        sw $zero, 0x2c($sp)
  /* 164000 801334C0 AFA00034 */        sw $zero, 0x34($sp)
  /* 164004 801334C4 24040401 */     addiu $a0, $zero, 0x401
  /* 164008 801334C8 00002825 */        or $a1, $zero, $zero
  /* 16400C 801334CC 24060010 */     addiu $a2, $zero, 0x10
  /* 164010 801334D0 0C002E4F */       jal func_8000B93C
  /* 164014 801334D4 3C078000 */       lui $a3, 0x8000
  /* 164018 801334D8 3C018013 */       lui $at, %hi(D_ovl34_80134CE8)
  /* 16401C 801334DC AC224CE8 */        sw $v0, %lo(D_ovl34_80134CE8)($at)
  /* 164020 801334E0 AFA20044 */        sw $v0, 0x44($sp)
  /* 164024 801334E4 8C440074 */        lw $a0, 0x74($v0)
  /* 164028 801334E8 24050003 */     addiu $a1, $zero, 3
  /* 16402C 801334EC 0C00233C */       jal func_80008CF0
  /* 164030 801334F0 00003025 */        or $a2, $zero, $zero
  /* 164034 801334F4 8FAA0044 */        lw $t2, 0x44($sp)
  /* 164038 801334F8 24050008 */     addiu $a1, $zero, 8
  /* 16403C 801334FC 00003025 */        or $a2, $zero, $zero
  /* 164040 80133500 0C00233C */       jal func_80008CF0
  /* 164044 80133504 8D440074 */        lw $a0, 0x74($t2)
  /* 164048 80133508 0C04CCF7 */       jal func_ovl34_801333DC
  /* 16404C 8013350C 8FA40044 */        lw $a0, 0x44($sp)
  /* 164050 80133510 8FAB0040 */        lw $t3, 0x40($sp)
  /* 164054 80133514 3C0F0800 */       lui $t7, (0x8000200 >> 16) # 134218240
  /* 164058 80133518 35EF0200 */       ori $t7, $t7, (0x8000200 & 0xFFFF) # 134218240
  /* 16405C 8013351C 240C0028 */     addiu $t4, $zero, 0x28
  /* 164060 80133520 240E0000 */     addiu $t6, $zero, 0
  /* 164064 80133524 240DFFFF */     addiu $t5, $zero, -1
  /* 164068 80133528 24180001 */     addiu $t8, $zero, 1
  /* 16406C 8013352C 24190001 */     addiu $t9, $zero, 1
  /* 164070 80133530 24080001 */     addiu $t0, $zero, 1
  /* 164074 80133534 AFA80030 */        sw $t0, 0x30($sp)
  /* 164078 80133538 AFB90028 */        sw $t9, 0x28($sp)
  /* 16407C 8013353C AFB80024 */        sw $t8, 0x24($sp)
  /* 164080 80133540 AFAD0020 */        sw $t5, 0x20($sp)
  /* 164084 80133544 AFAE0018 */        sw $t6, 0x18($sp)
  /* 164088 80133548 AFAC0014 */        sw $t4, 0x14($sp)
  /* 16408C 8013354C AFAF001C */        sw $t7, 0x1c($sp)
  /* 164090 80133550 24040401 */     addiu $a0, $zero, 0x401
  /* 164094 80133554 00002825 */        or $a1, $zero, $zero
  /* 164098 80133558 24060010 */     addiu $a2, $zero, 0x10
  /* 16409C 8013355C 3C078000 */       lui $a3, 0x8000
  /* 1640A0 80133560 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1640A4 80133564 AFA00034 */        sw $zero, 0x34($sp)
  /* 1640A8 80133568 0C002E4F */       jal func_8000B93C
  /* 1640AC 8013356C AFAB0010 */        sw $t3, 0x10($sp)
  /* 1640B0 80133570 3C018013 */       lui $at, %hi(D_ovl34_80134CEC)
  /* 1640B4 80133574 AC224CEC */        sw $v0, %lo(D_ovl34_80134CEC)($at)
  /* 1640B8 80133578 0C04CCF7 */       jal func_ovl34_801333DC
  /* 1640BC 8013357C 00402025 */        or $a0, $v0, $zero
  /* 1640C0 80133580 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1640C4 80133584 27BD0048 */     addiu $sp, $sp, 0x48
  /* 1640C8 80133588 03E00008 */        jr $ra
  /* 1640CC 8013358C 00000000 */       nop 

glabel func_ovl34_80133590
  /* 1640D0 80133590 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1640D4 80133594 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1640D8 80133598 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1640DC 8013359C AFBF0024 */        sw $ra, 0x24($sp)
  /* 1640E0 801335A0 AFB00020 */        sw $s0, 0x20($sp)
  /* 1640E4 801335A4 AFA40028 */        sw $a0, 0x28($sp)
  /* 1640E8 801335A8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1640EC 801335AC 8C900074 */        lw $s0, 0x74($a0)
  /* 1640F0 801335B0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1640F4 801335B4 44050000 */      mfc1 $a1, $f0
  /* 1640F8 801335B8 44060000 */      mfc1 $a2, $f0
  /* 1640FC 801335BC 3C07439B */       lui $a3, 0x439b
  /* 164100 801335C0 26040008 */     addiu $a0, $s0, 8
  /* 164104 801335C4 0C001C20 */       jal func_80007080
  /* 164108 801335C8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16410C 801335CC 3C018013 */       lui $at, %hi(D_ovl34_80134C90)
  /* 164110 801335D0 C4264C90 */      lwc1 $f6, %lo(D_ovl34_80134C90)($at)
  /* 164114 801335D4 3C018013 */       lui $at, %hi(D_ovl34_80134C94)
  /* 164118 801335D8 44800000 */      mtc1 $zero, $f0
  /* 16411C 801335DC E606003C */      swc1 $f6, 0x3c($s0)
  /* 164120 801335E0 C4284C94 */      lwc1 $f8, %lo(D_ovl34_80134C94)($at)
  /* 164124 801335E4 3C018013 */       lui $at, %hi(D_ovl34_80134C98)
  /* 164128 801335E8 3C0F8013 */       lui $t7, %hi(D_ovl34_801350C0)
  /* 16412C 801335EC E6080040 */      swc1 $f8, 0x40($s0)
  /* 164130 801335F0 C42A4C98 */      lwc1 $f10, %lo(D_ovl34_80134C98)($at)
  /* 164134 801335F4 3C018013 */       lui $at, %hi(D_ovl34_80134C9C)
  /* 164138 801335F8 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 16413C 801335FC E60A0044 */      swc1 $f10, 0x44($s0)
  /* 164140 80133600 C4304C9C */      lwc1 $f16, %lo(D_ovl34_80134C9C)($at)
  /* 164144 80133604 3C018013 */       lui $at, %hi(D_ovl34_80134CA0)
  /* 164148 80133608 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 16414C 8013360C E6100048 */      swc1 $f16, 0x48($s0)
  /* 164150 80133610 C4324CA0 */      lwc1 $f18, %lo(D_ovl34_80134CA0)($at)
  /* 164154 80133614 3C018013 */       lui $at, %hi(D_ovl34_80134CA4)
  /* 164158 80133618 44060000 */      mfc1 $a2, $f0
  /* 16415C 8013361C E612004C */      swc1 $f18, 0x4c($s0)
  /* 164160 80133620 C4244CA4 */      lwc1 $f4, %lo(D_ovl34_80134CA4)($at)
  /* 164164 80133624 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 164168 80133628 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 16416C 8013362C 3C018013 */       lui $at, %hi(D_ovl34_80134CA8)
  /* 164170 80133630 E6000054 */      swc1 $f0, 0x54($s0)
  /* 164174 80133634 E600005C */      swc1 $f0, 0x5c($s0)
  /* 164178 80133638 E6040050 */      swc1 $f4, 0x50($s0)
  /* 16417C 8013363C E6060058 */      swc1 $f6, 0x58($s0)
  /* 164180 80133640 C4284CA8 */      lwc1 $f8, %lo(D_ovl34_80134CA8)($at)
  /* 164184 80133644 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 164188 80133648 44815000 */      mtc1 $at, $f10 # 128.0 to cop1
  /* 16418C 8013364C 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 164190 80133650 44818000 */      mtc1 $at, $f16 # 16384.0 to cop1
  /* 164194 80133654 E6080020 */      swc1 $f8, 0x20($s0)
  /* 164198 80133658 E60A0028 */      swc1 $f10, 0x28($s0)
  /* 16419C 8013365C E610002C */      swc1 $f16, 0x2c($s0)
  /* 1641A0 80133660 8DEF50C0 */        lw $t7, %lo(D_ovl34_801350C0)($t7)
  /* 1641A4 80133664 02002025 */        or $a0, $s0, $zero
  /* 1641A8 80133668 0C003E8F */       jal func_8000FA3C
  /* 1641AC 8013366C 01F82821 */      addu $a1, $t7, $t8
  /* 1641B0 80133670 3C058001 */       lui $a1, %hi(func_80010580)
  /* 1641B4 80133674 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 1641B8 80133678 8FA40028 */        lw $a0, 0x28($sp)
  /* 1641BC 8013367C 24060001 */     addiu $a2, $zero, 1
  /* 1641C0 80133680 0C002062 */       jal omAddGObjCommonProc
  /* 1641C4 80133684 24070001 */     addiu $a3, $zero, 1
  /* 1641C8 80133688 8E190080 */        lw $t9, 0x80($s0)
  /* 1641CC 8013368C 37280004 */       ori $t0, $t9, 4
  /* 1641D0 80133690 AE080080 */        sw $t0, 0x80($s0)
  /* 1641D4 80133694 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1641D8 80133698 8FB00020 */        lw $s0, 0x20($sp)
  /* 1641DC 8013369C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1641E0 801336A0 03E00008 */        jr $ra
  /* 1641E4 801336A4 00000000 */       nop 

glabel func_ovl34_801336A8
  /* 1641E8 801336A8 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 1641EC 801336AC 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 1641F0 801336B0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1641F4 801336B4 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 1641F8 801336B8 240E0050 */     addiu $t6, $zero, 0x50
  /* 1641FC 801336BC 24180000 */     addiu $t8, $zero, 0
  /* 164200 801336C0 24190040 */     addiu $t9, $zero, 0x40
  /* 164204 801336C4 240FFFFF */     addiu $t7, $zero, -1
  /* 164208 801336C8 24080001 */     addiu $t0, $zero, 1
  /* 16420C 801336CC 24090001 */     addiu $t1, $zero, 1
  /* 164210 801336D0 AFA90030 */        sw $t1, 0x30($sp)
  /* 164214 801336D4 AFA80028 */        sw $t0, 0x28($sp)
  /* 164218 801336D8 AFAF0020 */        sw $t7, 0x20($sp)
  /* 16421C 801336DC AFB9001C */        sw $t9, 0x1c($sp)
  /* 164220 801336E0 AFB80018 */        sw $t8, 0x18($sp)
  /* 164224 801336E4 AFAE0014 */        sw $t6, 0x14($sp)
  /* 164228 801336E8 AFA20010 */        sw $v0, 0x10($sp)
  /* 16422C 801336EC AFA20044 */        sw $v0, 0x44($sp)
  /* 164230 801336F0 AFA00024 */        sw $zero, 0x24($sp)
  /* 164234 801336F4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 164238 801336F8 AFA00034 */        sw $zero, 0x34($sp)
  /* 16423C 801336FC 24040401 */     addiu $a0, $zero, 0x401
  /* 164240 80133700 00002825 */        or $a1, $zero, $zero
  /* 164244 80133704 24060010 */     addiu $a2, $zero, 0x10
  /* 164248 80133708 0C002E4F */       jal func_8000B93C
  /* 16424C 8013370C 3C078000 */       lui $a3, 0x8000
  /* 164250 80133710 3C018013 */       lui $at, %hi(D_ovl34_80134CE8)
  /* 164254 80133714 AC224CE8 */        sw $v0, %lo(D_ovl34_80134CE8)($at)
  /* 164258 80133718 AFA2004C */        sw $v0, 0x4c($sp)
  /* 16425C 8013371C 8C440074 */        lw $a0, 0x74($v0)
  /* 164260 80133720 24050003 */     addiu $a1, $zero, 3
  /* 164264 80133724 0C00233C */       jal func_80008CF0
  /* 164268 80133728 00003025 */        or $a2, $zero, $zero
  /* 16426C 8013372C 8FAA004C */        lw $t2, 0x4c($sp)
  /* 164270 80133730 24050008 */     addiu $a1, $zero, 8
  /* 164274 80133734 00003025 */        or $a2, $zero, $zero
  /* 164278 80133738 0C00233C */       jal func_80008CF0
  /* 16427C 8013373C 8D440074 */        lw $a0, 0x74($t2)
  /* 164280 80133740 0C04CD64 */       jal func_ovl34_80133590
  /* 164284 80133744 8FA4004C */        lw $a0, 0x4c($sp)
  /* 164288 80133748 8FAB0044 */        lw $t3, 0x44($sp)
  /* 16428C 8013374C 3C0F0800 */       lui $t7, (0x8000200 >> 16) # 134218240
  /* 164290 80133750 35EF0200 */       ori $t7, $t7, (0x8000200 & 0xFFFF) # 134218240
  /* 164294 80133754 240C0028 */     addiu $t4, $zero, 0x28
  /* 164298 80133758 240E0000 */     addiu $t6, $zero, 0
  /* 16429C 8013375C 240DFFFF */     addiu $t5, $zero, -1
  /* 1642A0 80133760 24180001 */     addiu $t8, $zero, 1
  /* 1642A4 80133764 24190001 */     addiu $t9, $zero, 1
  /* 1642A8 80133768 24080001 */     addiu $t0, $zero, 1
  /* 1642AC 8013376C AFA80030 */        sw $t0, 0x30($sp)
  /* 1642B0 80133770 AFB90028 */        sw $t9, 0x28($sp)
  /* 1642B4 80133774 AFB80024 */        sw $t8, 0x24($sp)
  /* 1642B8 80133778 AFAD0020 */        sw $t5, 0x20($sp)
  /* 1642BC 8013377C AFAE0018 */        sw $t6, 0x18($sp)
  /* 1642C0 80133780 AFAC0014 */        sw $t4, 0x14($sp)
  /* 1642C4 80133784 AFAF001C */        sw $t7, 0x1c($sp)
  /* 1642C8 80133788 24040401 */     addiu $a0, $zero, 0x401
  /* 1642CC 8013378C 00002825 */        or $a1, $zero, $zero
  /* 1642D0 80133790 24060010 */     addiu $a2, $zero, 0x10
  /* 1642D4 80133794 3C078000 */       lui $a3, 0x8000
  /* 1642D8 80133798 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1642DC 8013379C AFA00034 */        sw $zero, 0x34($sp)
  /* 1642E0 801337A0 0C002E4F */       jal func_8000B93C
  /* 1642E4 801337A4 AFAB0010 */        sw $t3, 0x10($sp)
  /* 1642E8 801337A8 3C018013 */       lui $at, %hi(D_ovl34_80134CEC)
  /* 1642EC 801337AC AC224CEC */        sw $v0, %lo(D_ovl34_80134CEC)($at)
  /* 1642F0 801337B0 0C04CD64 */       jal func_ovl34_80133590
  /* 1642F4 801337B4 00402025 */        or $a0, $v0, $zero
  /* 1642F8 801337B8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1642FC 801337BC 27BD0050 */     addiu $sp, $sp, 0x50
  /* 164300 801337C0 03E00008 */        jr $ra
  /* 164304 801337C4 00000000 */       nop 

glabel func_ovl34_801337C8
  /* 164308 801337C8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16430C 801337CC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 164310 801337D0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 164314 801337D4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 164318 801337D8 AFB00020 */        sw $s0, 0x20($sp)
  /* 16431C 801337DC AFA40028 */        sw $a0, 0x28($sp)
  /* 164320 801337E0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 164324 801337E4 8C900074 */        lw $s0, 0x74($a0)
  /* 164328 801337E8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16432C 801337EC 44050000 */      mfc1 $a1, $f0
  /* 164330 801337F0 44060000 */      mfc1 $a2, $f0
  /* 164334 801337F4 3C07439B */       lui $a3, 0x439b
  /* 164338 801337F8 26040008 */     addiu $a0, $s0, 8
  /* 16433C 801337FC 0C001C20 */       jal func_80007080
  /* 164340 80133800 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 164344 80133804 3C018013 */       lui $at, %hi(D_ovl34_80134CAC)
  /* 164348 80133808 C4264CAC */      lwc1 $f6, %lo(D_ovl34_80134CAC)($at)
  /* 16434C 8013380C 3C018013 */       lui $at, %hi(D_ovl34_80134CB0)
  /* 164350 80133810 44800000 */      mtc1 $zero, $f0
  /* 164354 80133814 E606003C */      swc1 $f6, 0x3c($s0)
  /* 164358 80133818 C4284CB0 */      lwc1 $f8, %lo(D_ovl34_80134CB0)($at)
  /* 16435C 8013381C 3C018013 */       lui $at, %hi(D_ovl34_80134CB4)
  /* 164360 80133820 3C0F8013 */       lui $t7, %hi(D_ovl34_801350C4)
  /* 164364 80133824 E6080040 */      swc1 $f8, 0x40($s0)
  /* 164368 80133828 C42A4CB4 */      lwc1 $f10, %lo(D_ovl34_80134CB4)($at)
  /* 16436C 8013382C 3C018013 */       lui $at, %hi(D_ovl34_80134CB8)
  /* 164370 80133830 3C180000 */       lui $t8, %hi(D_NF_00000000)
  /* 164374 80133834 E60A0044 */      swc1 $f10, 0x44($s0)
  /* 164378 80133838 C4304CB8 */      lwc1 $f16, %lo(D_ovl34_80134CB8)($at)
  /* 16437C 8013383C 3C018013 */       lui $at, %hi(D_ovl34_80134CBC)
  /* 164380 80133840 27180000 */     addiu $t8, $t8, %lo(D_NF_00000000)
  /* 164384 80133844 E6100048 */      swc1 $f16, 0x48($s0)
  /* 164388 80133848 C4324CBC */      lwc1 $f18, %lo(D_ovl34_80134CBC)($at)
  /* 16438C 8013384C 3C018013 */       lui $at, %hi(D_ovl34_80134CC0)
  /* 164390 80133850 44060000 */      mfc1 $a2, $f0
  /* 164394 80133854 E612004C */      swc1 $f18, 0x4c($s0)
  /* 164398 80133858 C4244CC0 */      lwc1 $f4, %lo(D_ovl34_80134CC0)($at)
  /* 16439C 8013385C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 1643A0 80133860 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 1643A4 80133864 3C018013 */       lui $at, %hi(D_ovl34_80134CC4)
  /* 1643A8 80133868 E6000054 */      swc1 $f0, 0x54($s0)
  /* 1643AC 8013386C E600005C */      swc1 $f0, 0x5c($s0)
  /* 1643B0 80133870 E6040050 */      swc1 $f4, 0x50($s0)
  /* 1643B4 80133874 E6060058 */      swc1 $f6, 0x58($s0)
  /* 1643B8 80133878 C4284CC4 */      lwc1 $f8, %lo(D_ovl34_80134CC4)($at)
  /* 1643BC 8013387C 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 1643C0 80133880 44815000 */      mtc1 $at, $f10 # 128.0 to cop1
  /* 1643C4 80133884 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 1643C8 80133888 44818000 */      mtc1 $at, $f16 # 16384.0 to cop1
  /* 1643CC 8013388C E6080020 */      swc1 $f8, 0x20($s0)
  /* 1643D0 80133890 E60A0028 */      swc1 $f10, 0x28($s0)
  /* 1643D4 80133894 E610002C */      swc1 $f16, 0x2c($s0)
  /* 1643D8 80133898 8DEF50C4 */        lw $t7, %lo(D_ovl34_801350C4)($t7)
  /* 1643DC 8013389C 02002025 */        or $a0, $s0, $zero
  /* 1643E0 801338A0 0C003E8F */       jal func_8000FA3C
  /* 1643E4 801338A4 01F82821 */      addu $a1, $t7, $t8
  /* 1643E8 801338A8 3C058001 */       lui $a1, %hi(func_80010580)
  /* 1643EC 801338AC 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 1643F0 801338B0 8FA40028 */        lw $a0, 0x28($sp)
  /* 1643F4 801338B4 24060001 */     addiu $a2, $zero, 1
  /* 1643F8 801338B8 0C002062 */       jal omAddGObjCommonProc
  /* 1643FC 801338BC 24070001 */     addiu $a3, $zero, 1
  /* 164400 801338C0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 164404 801338C4 8FB00020 */        lw $s0, 0x20($sp)
  /* 164408 801338C8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16440C 801338CC 03E00008 */        jr $ra
  /* 164410 801338D0 00000000 */       nop 

glabel func_ovl34_801338D4
  /* 164414 801338D4 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 164418 801338D8 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 16441C 801338DC AFBF003C */        sw $ra, 0x3c($sp)
  /* 164420 801338E0 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 164424 801338E4 240E0050 */     addiu $t6, $zero, 0x50
  /* 164428 801338E8 24180000 */     addiu $t8, $zero, 0
  /* 16442C 801338EC 24190040 */     addiu $t9, $zero, 0x40
  /* 164430 801338F0 240FFFFF */     addiu $t7, $zero, -1
  /* 164434 801338F4 24080001 */     addiu $t0, $zero, 1
  /* 164438 801338F8 24090001 */     addiu $t1, $zero, 1
  /* 16443C 801338FC 240A0001 */     addiu $t2, $zero, 1
  /* 164440 80133900 AFAA0030 */        sw $t2, 0x30($sp)
  /* 164444 80133904 AFA90028 */        sw $t1, 0x28($sp)
  /* 164448 80133908 AFA80024 */        sw $t0, 0x24($sp)
  /* 16444C 8013390C AFAF0020 */        sw $t7, 0x20($sp)
  /* 164450 80133910 AFB9001C */        sw $t9, 0x1c($sp)
  /* 164454 80133914 AFB80018 */        sw $t8, 0x18($sp)
  /* 164458 80133918 AFAE0014 */        sw $t6, 0x14($sp)
  /* 16445C 8013391C AFA20010 */        sw $v0, 0x10($sp)
  /* 164460 80133920 AFA20044 */        sw $v0, 0x44($sp)
  /* 164464 80133924 AFA0002C */        sw $zero, 0x2c($sp)
  /* 164468 80133928 AFA00034 */        sw $zero, 0x34($sp)
  /* 16446C 8013392C 24040401 */     addiu $a0, $zero, 0x401
  /* 164470 80133930 00002825 */        or $a1, $zero, $zero
  /* 164474 80133934 24060010 */     addiu $a2, $zero, 0x10
  /* 164478 80133938 0C002E4F */       jal func_8000B93C
  /* 16447C 8013393C 3C078000 */       lui $a3, 0x8000
  /* 164480 80133940 3C018013 */       lui $at, %hi(D_ovl34_80134CE8)
  /* 164484 80133944 AC224CE8 */        sw $v0, %lo(D_ovl34_80134CE8)($at)
  /* 164488 80133948 0C04CDF2 */       jal func_ovl34_801337C8
  /* 16448C 8013394C 00402025 */        or $a0, $v0, $zero
  /* 164490 80133950 8FAB0044 */        lw $t3, 0x44($sp)
  /* 164494 80133954 240C0028 */     addiu $t4, $zero, 0x28
  /* 164498 80133958 240E0000 */     addiu $t6, $zero, 0
  /* 16449C 8013395C 240F0200 */     addiu $t7, $zero, 0x200
  /* 1644A0 80133960 240DFFFF */     addiu $t5, $zero, -1
  /* 1644A4 80133964 24180001 */     addiu $t8, $zero, 1
  /* 1644A8 80133968 24190001 */     addiu $t9, $zero, 1
  /* 1644AC 8013396C 24080001 */     addiu $t0, $zero, 1
  /* 1644B0 80133970 AFA80030 */        sw $t0, 0x30($sp)
  /* 1644B4 80133974 AFB90028 */        sw $t9, 0x28($sp)
  /* 1644B8 80133978 AFB80024 */        sw $t8, 0x24($sp)
  /* 1644BC 8013397C AFAD0020 */        sw $t5, 0x20($sp)
  /* 1644C0 80133980 AFAF001C */        sw $t7, 0x1c($sp)
  /* 1644C4 80133984 AFAE0018 */        sw $t6, 0x18($sp)
  /* 1644C8 80133988 AFAC0014 */        sw $t4, 0x14($sp)
  /* 1644CC 8013398C 24040401 */     addiu $a0, $zero, 0x401
  /* 1644D0 80133990 00002825 */        or $a1, $zero, $zero
  /* 1644D4 80133994 24060010 */     addiu $a2, $zero, 0x10
  /* 1644D8 80133998 3C078000 */       lui $a3, 0x8000
  /* 1644DC 8013399C AFA0002C */        sw $zero, 0x2c($sp)
  /* 1644E0 801339A0 AFA00034 */        sw $zero, 0x34($sp)
  /* 1644E4 801339A4 0C002E4F */       jal func_8000B93C
  /* 1644E8 801339A8 AFAB0010 */        sw $t3, 0x10($sp)
  /* 1644EC 801339AC 3C018013 */       lui $at, %hi(D_ovl34_80134CEC)
  /* 1644F0 801339B0 AC224CEC */        sw $v0, %lo(D_ovl34_80134CEC)($at)
  /* 1644F4 801339B4 0C04CDF2 */       jal func_ovl34_801337C8
  /* 1644F8 801339B8 00402025 */        or $a0, $v0, $zero
  /* 1644FC 801339BC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 164500 801339C0 27BD0050 */     addiu $sp, $sp, 0x50
  /* 164504 801339C4 03E00008 */        jr $ra
  /* 164508 801339C8 00000000 */       nop 

glabel func_ovl34_801339CC
  /* 16450C 801339CC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 164510 801339D0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 164514 801339D4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 164518 801339D8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16451C 801339DC 240F005A */     addiu $t7, $zero, 0x5a
  /* 164520 801339E0 24180000 */     addiu $t8, $zero, 0
  /* 164524 801339E4 3C191000 */       lui $t9, 0x1000
  /* 164528 801339E8 2408FFFF */     addiu $t0, $zero, -1
  /* 16452C 801339EC 24090001 */     addiu $t1, $zero, 1
  /* 164530 801339F0 240A0001 */     addiu $t2, $zero, 1
  /* 164534 801339F4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 164538 801339F8 AFA90028 */        sw $t1, 0x28($sp)
  /* 16453C 801339FC AFA80020 */        sw $t0, 0x20($sp)
  /* 164540 80133A00 AFB9001C */        sw $t9, 0x1c($sp)
  /* 164544 80133A04 AFB80018 */        sw $t8, 0x18($sp)
  /* 164548 80133A08 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16454C 80133A0C AFAE0010 */        sw $t6, 0x10($sp)
  /* 164550 80133A10 AFA00024 */        sw $zero, 0x24($sp)
  /* 164554 80133A14 AFA0002C */        sw $zero, 0x2c($sp)
  /* 164558 80133A18 AFA00034 */        sw $zero, 0x34($sp)
  /* 16455C 80133A1C 24040401 */     addiu $a0, $zero, 0x401
  /* 164560 80133A20 00002825 */        or $a1, $zero, $zero
  /* 164564 80133A24 24060010 */     addiu $a2, $zero, 0x10
  /* 164568 80133A28 0C002E4F */       jal func_8000B93C
  /* 16456C 80133A2C 3C078000 */       lui $a3, 0x8000
  /* 164570 80133A30 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 164574 80133A34 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 164578 80133A38 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16457C 80133A3C 8C430074 */        lw $v1, 0x74($v0)
  /* 164580 80133A40 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 164584 80133A44 44050000 */      mfc1 $a1, $f0
  /* 164588 80133A48 44060000 */      mfc1 $a2, $f0
  /* 16458C 80133A4C 3C07439B */       lui $a3, 0x439b
  /* 164590 80133A50 24640008 */     addiu $a0, $v1, 8
  /* 164594 80133A54 0C001C20 */       jal func_80007080
  /* 164598 80133A58 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16459C 80133A5C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1645A0 80133A60 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1645A4 80133A64 03E00008 */        jr $ra
  /* 1645A8 80133A68 00000000 */       nop 

glabel func_ovl34_80133A6C
  /* 1645AC 80133A6C 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 1645B0 80133A70 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 1645B4 80133A74 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1645B8 80133A78 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 1645BC 80133A7C 240F0032 */     addiu $t7, $zero, 0x32
  /* 1645C0 80133A80 24180000 */     addiu $t8, $zero, 0
  /* 1645C4 80133A84 3C192000 */       lui $t9, 0x2000
  /* 1645C8 80133A88 2408FFFF */     addiu $t0, $zero, -1
  /* 1645CC 80133A8C 24090001 */     addiu $t1, $zero, 1
  /* 1645D0 80133A90 240A0001 */     addiu $t2, $zero, 1
  /* 1645D4 80133A94 240B0001 */     addiu $t3, $zero, 1
  /* 1645D8 80133A98 AFAB0030 */        sw $t3, 0x30($sp)
  /* 1645DC 80133A9C AFAA0028 */        sw $t2, 0x28($sp)
  /* 1645E0 80133AA0 AFA90024 */        sw $t1, 0x24($sp)
  /* 1645E4 80133AA4 AFA80020 */        sw $t0, 0x20($sp)
  /* 1645E8 80133AA8 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1645EC 80133AAC AFB80018 */        sw $t8, 0x18($sp)
  /* 1645F0 80133AB0 AFAF0014 */        sw $t7, 0x14($sp)
  /* 1645F4 80133AB4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1645F8 80133AB8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1645FC 80133ABC AFA00034 */        sw $zero, 0x34($sp)
  /* 164600 80133AC0 24040401 */     addiu $a0, $zero, 0x401
  /* 164604 80133AC4 00002825 */        or $a1, $zero, $zero
  /* 164608 80133AC8 24060010 */     addiu $a2, $zero, 0x10
  /* 16460C 80133ACC 0C002E4F */       jal func_8000B93C
  /* 164610 80133AD0 3C078000 */       lui $a3, 0x8000
  /* 164614 80133AD4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 164618 80133AD8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16461C 80133ADC 3C018013 */       lui $at, %hi(D_ovl34_80134CF0)
  /* 164620 80133AE0 AC224CF0 */        sw $v0, %lo(D_ovl34_80134CF0)($at)
  /* 164624 80133AE4 AFA20044 */        sw $v0, 0x44($sp)
  /* 164628 80133AE8 8C430074 */        lw $v1, 0x74($v0)
  /* 16462C 80133AEC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 164630 80133AF0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 164634 80133AF4 44050000 */      mfc1 $a1, $f0
  /* 164638 80133AF8 44060000 */      mfc1 $a2, $f0
  /* 16463C 80133AFC 3C07439B */       lui $a3, 0x439b
  /* 164640 80133B00 24640008 */     addiu $a0, $v1, 8
  /* 164644 80133B04 AFA30040 */        sw $v1, 0x40($sp)
  /* 164648 80133B08 0C001C20 */       jal func_80007080
  /* 16464C 80133B0C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 164650 80133B10 3C0C8013 */       lui $t4, %hi(D_ovl34_801350B8)
  /* 164654 80133B14 8D8C50B8 */        lw $t4, %lo(D_ovl34_801350B8)($t4)
  /* 164658 80133B18 3C0D0000 */       lui $t5, %hi(D_NF_00000000)
  /* 16465C 80133B1C 25AD0000 */     addiu $t5, $t5, %lo(D_NF_00000000)
  /* 164660 80133B20 8FA40040 */        lw $a0, 0x40($sp)
  /* 164664 80133B24 24060000 */     addiu $a2, $zero, 0
  /* 164668 80133B28 0C003E8F */       jal func_8000FA3C
  /* 16466C 80133B2C 018D2821 */      addu $a1, $t4, $t5
  /* 164670 80133B30 3C058001 */       lui $a1, %hi(func_80010580)
  /* 164674 80133B34 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 164678 80133B38 8FA40044 */        lw $a0, 0x44($sp)
  /* 16467C 80133B3C 24060001 */     addiu $a2, $zero, 1
  /* 164680 80133B40 0C002062 */       jal omAddGObjCommonProc
  /* 164684 80133B44 24070001 */     addiu $a3, $zero, 1
  /* 164688 80133B48 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16468C 80133B4C 27BD0048 */     addiu $sp, $sp, 0x48
  /* 164690 80133B50 03E00008 */        jr $ra
  /* 164694 80133B54 00000000 */       nop 

glabel func_ovl34_80133B58
  /* 164698 80133B58 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 16469C 80133B5C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 1646A0 80133B60 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1646A4 80133B64 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1646A8 80133B68 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1646AC 80133B6C 244E0008 */     addiu $t6, $v0, 8
  /* 1646B0 80133B70 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1646B4 80133B74 3C0FE700 */       lui $t7, 0xe700
  /* 1646B8 80133B78 AC4F0000 */        sw $t7, ($v0)
  /* 1646BC 80133B7C AC400004 */        sw $zero, 4($v0)
  /* 1646C0 80133B80 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1646C4 80133B84 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 1646C8 80133B88 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 1646CC 80133B8C 24580008 */     addiu $t8, $v0, 8
  /* 1646D0 80133B90 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 1646D4 80133B94 AC400004 */        sw $zero, 4($v0)
  /* 1646D8 80133B98 AC590000 */        sw $t9, ($v0)
  /* 1646DC 80133B9C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1646E0 80133BA0 3C0C8004 */       lui $t4, %hi(gCurrScreenWidth)
  /* 1646E4 80133BA4 3C01FF10 */       lui $at, 0xff10
  /* 1646E8 80133BA8 244B0008 */     addiu $t3, $v0, 8
  /* 1646EC 80133BAC AC6B0000 */        sw $t3, ($v1) # gpDisplayListHead + 0
  /* 1646F0 80133BB0 8D8C6678 */        lw $t4, %lo(gCurrScreenWidth)($t4)
  /* 1646F4 80133BB4 3C188004 */       lui $t8, %hi(gZBuffer)
  /* 1646F8 80133BB8 3C0BFA00 */       lui $t3, 0xfa00
  /* 1646FC 80133BBC 258DFFFF */     addiu $t5, $t4, -1
  /* 164700 80133BC0 31AE0FFF */      andi $t6, $t5, 0xfff
  /* 164704 80133BC4 01C17825 */        or $t7, $t6, $at
  /* 164708 80133BC8 AC4F0000 */        sw $t7, ($v0)
  /* 16470C 80133BCC 8F186670 */        lw $t8, %lo(gZBuffer)($t8)
  /* 164710 80133BD0 240CFFFF */     addiu $t4, $zero, -1
  /* 164714 80133BD4 3C0FFFFD */       lui $t7, (0xFFFDFCFE >> 16) # 4294835454
  /* 164718 80133BD8 AC580004 */        sw $t8, 4($v0)
  /* 16471C 80133BDC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164720 80133BE0 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 164724 80133BE4 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 164728 80133BE8 24590008 */     addiu $t9, $v0, 8
  /* 16472C 80133BEC AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 164730 80133BF0 AC4C0004 */        sw $t4, 4($v0)
  /* 164734 80133BF4 AC4B0000 */        sw $t3, ($v0)
  /* 164738 80133BF8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 16473C 80133BFC 35EFFCFE */       ori $t7, $t7, (0xFFFDFCFE & 0xFFFF) # 4294835454
  /* 164740 80133C00 3C0B0F0A */       lui $t3, (0xF0A4000 >> 16) # 252329984
  /* 164744 80133C04 244D0008 */     addiu $t5, $v0, 8
  /* 164748 80133C08 AC6D0000 */        sw $t5, ($v1) # gpDisplayListHead + 0
  /* 16474C 80133C0C AC4F0004 */        sw $t7, 4($v0)
  /* 164750 80133C10 AC4E0000 */        sw $t6, ($v0)
  /* 164754 80133C14 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164758 80133C18 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 16475C 80133C1C 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 164760 80133C20 24580008 */     addiu $t8, $v0, 8
  /* 164764 80133C24 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 164768 80133C28 356B4000 */       ori $t3, $t3, (0xF0A4000 & 0xFFFF) # 252329984
  /* 16476C 80133C2C AC4B0004 */        sw $t3, 4($v0)
  /* 164770 80133C30 0C004F9A */       jal func_80013E68
  /* 164774 80133C34 AC590000 */        sw $t9, ($v0)
  /* 164778 80133C38 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 16477C 80133C3C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 164780 80133C40 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164784 80133C44 3C0DE700 */       lui $t5, 0xe700
  /* 164788 80133C48 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 16478C 80133C4C 244C0008 */     addiu $t4, $v0, 8
  /* 164790 80133C50 AC6C0000 */        sw $t4, ($v1) # gpDisplayListHead + 0
  /* 164794 80133C54 AC400004 */        sw $zero, 4($v0)
  /* 164798 80133C58 AC4D0000 */        sw $t5, ($v0)
  /* 16479C 80133C5C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1647A0 80133C60 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 1647A4 80133C64 3C198004 */       lui $t9, %hi(gPixelComponentSize)
  /* 1647A8 80133C68 244E0008 */     addiu $t6, $v0, 8
  /* 1647AC 80133C6C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1647B0 80133C70 AC400004 */        sw $zero, 4($v0)
  /* 1647B4 80133C74 AC4F0000 */        sw $t7, ($v0)
  /* 1647B8 80133C78 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1647BC 80133C7C 3C0E8004 */       lui $t6, %hi(gCurrScreenWidth)
  /* 1647C0 80133C80 3C01FF00 */       lui $at, 0xff00
  /* 1647C4 80133C84 24580008 */     addiu $t8, $v0, 8
  /* 1647C8 80133C88 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 1647CC 80133C8C 8F396674 */        lw $t9, %lo(gPixelComponentSize)($t9)
  /* 1647D0 80133C90 8DCE6678 */        lw $t6, %lo(gCurrScreenWidth)($t6)
  /* 1647D4 80133C94 332B0003 */      andi $t3, $t9, 3
  /* 1647D8 80133C98 000B64C0 */       sll $t4, $t3, 0x13
  /* 1647DC 80133C9C 25CFFFFF */     addiu $t7, $t6, -1
  /* 1647E0 80133CA0 31F80FFF */      andi $t8, $t7, 0xfff
  /* 1647E4 80133CA4 01816825 */        or $t5, $t4, $at
  /* 1647E8 80133CA8 01B8C825 */        or $t9, $t5, $t8
  /* 1647EC 80133CAC 3C0B0F00 */       lui $t3, 0xf00
  /* 1647F0 80133CB0 AC4B0004 */        sw $t3, 4($v0)
  /* 1647F4 80133CB4 AC590000 */        sw $t9, ($v0)
  /* 1647F8 80133CB8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1647FC 80133CBC 3C0F0055 */       lui $t7, (0x552078 >> 16) # 5578872
  /* 164800 80133CC0 3C0EE200 */       lui $t6, (0xE200001C >> 16) # 3791650844
  /* 164804 80133CC4 244C0008 */     addiu $t4, $v0, 8
  /* 164808 80133CC8 AC6C0000 */        sw $t4, ($v1) # gpDisplayListHead + 0
  /* 16480C 80133CCC 35CE001C */       ori $t6, $t6, (0xE200001C & 0xFFFF) # 3791650844
  /* 164810 80133CD0 35EF2078 */       ori $t7, $t7, (0x552078 & 0xFFFF) # 5578872
  /* 164814 80133CD4 AC4F0004 */        sw $t7, 4($v0)
  /* 164818 80133CD8 AC4E0000 */        sw $t6, ($v0)
  /* 16481C 80133CDC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164820 80133CE0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 164824 80133CE4 03E00008 */        jr $ra
  /* 164828 80133CE8 00000000 */       nop 

glabel func_ovl34_80133CEC
  /* 16482C 80133CEC 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 164830 80133CF0 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 164834 80133CF4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164838 80133CF8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16483C 80133CFC AFBF0014 */        sw $ra, 0x14($sp)
  /* 164840 80133D00 244E0008 */     addiu $t6, $v0, 8
  /* 164844 80133D04 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 164848 80133D08 3C0FE700 */       lui $t7, 0xe700
  /* 16484C 80133D0C AC4F0000 */        sw $t7, ($v0)
  /* 164850 80133D10 AC400004 */        sw $zero, 4($v0)
  /* 164854 80133D14 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164858 80133D18 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 16485C 80133D1C 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 164860 80133D20 24580008 */     addiu $t8, $v0, 8
  /* 164864 80133D24 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 164868 80133D28 AC400004 */        sw $zero, 4($v0)
  /* 16486C 80133D2C AC590000 */        sw $t9, ($v0)
  /* 164870 80133D30 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164874 80133D34 3C0F8004 */       lui $t7, %hi(gCurrScreenWidth)
  /* 164878 80133D38 3C01FF10 */       lui $at, 0xff10
  /* 16487C 80133D3C 244E0008 */     addiu $t6, $v0, 8
  /* 164880 80133D40 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 164884 80133D44 8DEF6678 */        lw $t7, %lo(gCurrScreenWidth)($t7)
  /* 164888 80133D48 25F8FFFF */     addiu $t8, $t7, -1
  /* 16488C 80133D4C 33190FFF */      andi $t9, $t8, 0xfff
  /* 164890 80133D50 03217025 */        or $t6, $t9, $at
  /* 164894 80133D54 3C0F8004 */       lui $t7, %hi(gZBuffer)
  /* 164898 80133D58 AC4E0000 */        sw $t6, ($v0)
  /* 16489C 80133D5C 8DEF6670 */        lw $t7, %lo(gZBuffer)($t7)
  /* 1648A0 80133D60 240E00FF */     addiu $t6, $zero, 0xff
  /* 1648A4 80133D64 3C19FA00 */       lui $t9, 0xfa00
  /* 1648A8 80133D68 AC4F0004 */        sw $t7, 4($v0)
  /* 1648AC 80133D6C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1648B0 80133D70 3C01FF00 */       lui $at, 0xff00
  /* 1648B4 80133D74 24580008 */     addiu $t8, $v0, 8
  /* 1648B8 80133D78 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 1648BC 80133D7C AC4E0004 */        sw $t6, 4($v0)
  /* 1648C0 80133D80 AC590000 */        sw $t9, ($v0)
  /* 1648C4 80133D84 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1648C8 80133D88 3C19FFFD */       lui $t9, (0xFFFDF6FB >> 16) # 4294833915
  /* 1648CC 80133D8C 3C18FCFF */       lui $t8, (0xFCFFFFFF >> 16) # 4244635647
  /* 1648D0 80133D90 244F0008 */     addiu $t7, $v0, 8
  /* 1648D4 80133D94 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 1648D8 80133D98 3718FFFF */       ori $t8, $t8, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 1648DC 80133D9C 3739F6FB */       ori $t9, $t9, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 1648E0 80133DA0 AC590004 */        sw $t9, 4($v0)
  /* 1648E4 80133DA4 AC580000 */        sw $t8, ($v0)
  /* 1648E8 80133DA8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1648EC 80133DAC 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 1648F0 80133DB0 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1648F4 80133DB4 244E0008 */     addiu $t6, $v0, 8
  /* 1648F8 80133DB8 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1648FC 80133DBC 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 164900 80133DC0 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 164904 80133DC4 AC580004 */        sw $t8, 4($v0)
  /* 164908 80133DC8 AC4F0000 */        sw $t7, ($v0)
  /* 16490C 80133DCC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164910 80133DD0 3C0EF650 */       lui $t6, (0xF65003C0 >> 16) # 4132438976
  /* 164914 80133DD4 35CE03C0 */       ori $t6, $t6, (0xF65003C0 & 0xFFFF) # 4132438976
  /* 164918 80133DD8 24590008 */     addiu $t9, $v0, 8
  /* 16491C 80133DDC AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 164920 80133DE0 AC400004 */        sw $zero, 4($v0)
  /* 164924 80133DE4 AC4E0000 */        sw $t6, ($v0)
  /* 164928 80133DE8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 16492C 80133DEC 3C18E700 */       lui $t8, 0xe700
  /* 164930 80133DF0 3C0E8004 */       lui $t6, %hi(gPixelComponentSize)
  /* 164934 80133DF4 244F0008 */     addiu $t7, $v0, 8
  /* 164938 80133DF8 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 16493C 80133DFC AC400004 */        sw $zero, 4($v0)
  /* 164940 80133E00 AC580000 */        sw $t8, ($v0)
  /* 164944 80133E04 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164948 80133E08 24590008 */     addiu $t9, $v0, 8
  /* 16494C 80133E0C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 164950 80133E10 8DCE6674 */        lw $t6, %lo(gPixelComponentSize)($t6)
  /* 164954 80133E14 31CF0003 */      andi $t7, $t6, 3
  /* 164958 80133E18 3C0E8004 */       lui $t6, %hi(gCurrScreenWidth)
  /* 16495C 80133E1C 8DCE6678 */        lw $t6, %lo(gCurrScreenWidth)($t6)
  /* 164960 80133E20 000FC4C0 */       sll $t8, $t7, 0x13
  /* 164964 80133E24 0301C825 */        or $t9, $t8, $at
  /* 164968 80133E28 25CFFFFF */     addiu $t7, $t6, -1
  /* 16496C 80133E2C 31F80FFF */      andi $t8, $t7, 0xfff
  /* 164970 80133E30 03387025 */        or $t6, $t9, $t8
  /* 164974 80133E34 3C0F0F00 */       lui $t7, 0xf00
  /* 164978 80133E38 AC4F0004 */        sw $t7, 4($v0)
  /* 16497C 80133E3C AC4E0000 */        sw $t6, ($v0)
  /* 164980 80133E40 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164984 80133E44 3C0E0055 */       lui $t6, (0x552048 >> 16) # 5578824
  /* 164988 80133E48 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 16498C 80133E4C 24590008 */     addiu $t9, $v0, 8
  /* 164990 80133E50 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 164994 80133E54 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 164998 80133E58 35CE2048 */       ori $t6, $t6, (0x552048 & 0xFFFF) # 5578824
  /* 16499C 80133E5C AC4E0004 */        sw $t6, 4($v0)
  /* 1649A0 80133E60 AC580000 */        sw $t8, ($v0)
  /* 1649A4 80133E64 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1649A8 80133E68 3C18FFFE */       lui $t8, (0xFFFE7D3E >> 16) # 4294868286
  /* 1649AC 80133E6C 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 1649B0 80133E70 244F0008 */     addiu $t7, $v0, 8
  /* 1649B4 80133E74 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 1649B8 80133E78 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 1649BC 80133E7C 37187D3E */       ori $t8, $t8, (0xFFFE7D3E & 0xFFFF) # 4294868286
  /* 1649C0 80133E80 AC580004 */        sw $t8, 4($v0)
  /* 1649C4 80133E84 0C004F9A */       jal func_80013E68
  /* 1649C8 80133E88 AC590000 */        sw $t9, ($v0)
  /* 1649CC 80133E8C 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 1649D0 80133E90 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 1649D4 80133E94 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1649D8 80133E98 3C0FE700 */       lui $t7, 0xe700
  /* 1649DC 80133E9C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 1649E0 80133EA0 244E0008 */     addiu $t6, $v0, 8
  /* 1649E4 80133EA4 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1649E8 80133EA8 AC400004 */        sw $zero, 4($v0)
  /* 1649EC 80133EAC AC4F0000 */        sw $t7, ($v0)
  /* 1649F0 80133EB0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1649F4 80133EB4 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 1649F8 80133EB8 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1649FC 80133EBC 24590008 */     addiu $t9, $v0, 8
  /* 164A00 80133EC0 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 164A04 80133EC4 AC400004 */        sw $zero, 4($v0)
  /* 164A08 80133EC8 AC580000 */        sw $t8, ($v0)
  /* 164A0C 80133ECC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 164A10 80133ED0 3C190055 */       lui $t9, (0x552078 >> 16) # 5578872
  /* 164A14 80133ED4 37392078 */       ori $t9, $t9, (0x552078 & 0xFFFF) # 5578872
  /* 164A18 80133ED8 244E0008 */     addiu $t6, $v0, 8
  /* 164A1C 80133EDC AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 164A20 80133EE0 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 164A24 80133EE4 AC4F0000 */        sw $t7, ($v0)
  /* 164A28 80133EE8 AC590004 */        sw $t9, 4($v0)
  /* 164A2C 80133EEC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164A30 80133EF0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 164A34 80133EF4 03E00008 */        jr $ra
  /* 164A38 80133EF8 00000000 */       nop 

glabel func_ovl34_80133EFC
  /* 164A3C 80133EFC 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 164A40 80133F00 AFBF0024 */        sw $ra, 0x24($sp)
  /* 164A44 80133F04 AFB00020 */        sw $s0, 0x20($sp)
  /* 164A48 80133F08 00002025 */        or $a0, $zero, $zero
  /* 164A4C 80133F0C 00002825 */        or $a1, $zero, $zero
  /* 164A50 80133F10 24060016 */     addiu $a2, $zero, 0x16
  /* 164A54 80133F14 0C00265A */       jal omMakeGObjCommon
  /* 164A58 80133F18 3C078000 */       lui $a3, 0x8000
  /* 164A5C 80133F1C 3C0E8013 */       lui $t6, %hi(D_ovl34_801350B4)
  /* 164A60 80133F20 8DCE50B4 */        lw $t6, %lo(D_ovl34_801350B4)($t6)
  /* 164A64 80133F24 3C0F0000 */       lui $t7, %hi(D_NF_00000F40)
  /* 164A68 80133F28 3C018013 */       lui $at, %hi(D_ovl34_80134D48)
  /* 164A6C 80133F2C 25EF0F40 */     addiu $t7, $t7, %lo(D_NF_00000F40)
  /* 164A70 80133F30 AC224D48 */        sw $v0, %lo(D_ovl34_80134D48)($at)
  /* 164A74 80133F34 00408025 */        or $s0, $v0, $zero
  /* 164A78 80133F38 00402025 */        or $a0, $v0, $zero
  /* 164A7C 80133F3C 0C0024B4 */       jal func_800092D0
  /* 164A80 80133F40 01CF2821 */      addu $a1, $t6, $t7
  /* 164A84 80133F44 AFA20030 */        sw $v0, 0x30($sp)
  /* 164A88 80133F48 00402025 */        or $a0, $v0, $zero
  /* 164A8C 80133F4C 2405001C */     addiu $a1, $zero, 0x1c
  /* 164A90 80133F50 0C002330 */       jal func_80008CC0
  /* 164A94 80133F54 00003025 */        or $a2, $zero, $zero
  /* 164A98 80133F58 3C058013 */       lui $a1, %hi(func_ovl34_80133CEC)
  /* 164A9C 80133F5C 2418FFFF */     addiu $t8, $zero, -1
  /* 164AA0 80133F60 AFB80010 */        sw $t8, 0x10($sp)
  /* 164AA4 80133F64 24A53CEC */     addiu $a1, $a1, %lo(func_ovl34_80133CEC)
  /* 164AA8 80133F68 02002025 */        or $a0, $s0, $zero
  /* 164AAC 80133F6C 2406001E */     addiu $a2, $zero, 0x1e
  /* 164AB0 80133F70 0C00277D */       jal func_80009DF4
  /* 164AB4 80133F74 3C078000 */       lui $a3, 0x8000
  /* 164AB8 80133F78 3C198013 */       lui $t9, %hi(D_ovl34_801350B4)
  /* 164ABC 80133F7C 8F3950B4 */        lw $t9, %lo(D_ovl34_801350B4)($t9)
  /* 164AC0 80133F80 3C080000 */       lui $t0, %hi(D_NF_000011C4)
  /* 164AC4 80133F84 250811C4 */     addiu $t0, $t0, %lo(D_NF_000011C4)
  /* 164AC8 80133F88 8FA40030 */        lw $a0, 0x30($sp)
  /* 164ACC 80133F8C 24060000 */     addiu $a2, $zero, 0
  /* 164AD0 80133F90 0C002F47 */       jal func_8000BD1C
  /* 164AD4 80133F94 03282821 */      addu $a1, $t9, $t0
  /* 164AD8 80133F98 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 164ADC 80133F9C 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 164AE0 80133FA0 AFA5002C */        sw $a1, 0x2c($sp)
  /* 164AE4 80133FA4 02002025 */        or $a0, $s0, $zero
  /* 164AE8 80133FA8 24060001 */     addiu $a2, $zero, 1
  /* 164AEC 80133FAC 0C002062 */       jal omAddGObjCommonProc
  /* 164AF0 80133FB0 24070001 */     addiu $a3, $zero, 1
  /* 164AF4 80133FB4 0C0037CD */       jal func_8000DF34
  /* 164AF8 80133FB8 02002025 */        or $a0, $s0, $zero
  /* 164AFC 80133FBC 00002025 */        or $a0, $zero, $zero
  /* 164B00 80133FC0 00002825 */        or $a1, $zero, $zero
  /* 164B04 80133FC4 24060016 */     addiu $a2, $zero, 0x16
  /* 164B08 80133FC8 0C00265A */       jal omMakeGObjCommon
  /* 164B0C 80133FCC 3C078000 */       lui $a3, 0x8000
  /* 164B10 80133FD0 3C098013 */       lui $t1, %hi(D_ovl34_801350B4)
  /* 164B14 80133FD4 8D2950B4 */        lw $t1, %lo(D_ovl34_801350B4)($t1)
  /* 164B18 80133FD8 3C0A0000 */       lui $t2, %hi(D_NF_000005A0)
  /* 164B1C 80133FDC 3C018013 */       lui $at, %hi(D_ovl34_80134D4C)
  /* 164B20 80133FE0 254A05A0 */     addiu $t2, $t2, %lo(D_NF_000005A0)
  /* 164B24 80133FE4 AC224D4C */        sw $v0, %lo(D_ovl34_80134D4C)($at)
  /* 164B28 80133FE8 00408025 */        or $s0, $v0, $zero
  /* 164B2C 80133FEC 00402025 */        or $a0, $v0, $zero
  /* 164B30 80133FF0 0C0024B4 */       jal func_800092D0
  /* 164B34 80133FF4 012A2821 */      addu $a1, $t1, $t2
  /* 164B38 80133FF8 AFA20030 */        sw $v0, 0x30($sp)
  /* 164B3C 80133FFC 00402025 */        or $a0, $v0, $zero
  /* 164B40 80134000 2405001C */     addiu $a1, $zero, 0x1c
  /* 164B44 80134004 0C002330 */       jal func_80008CC0
  /* 164B48 80134008 00003025 */        or $a2, $zero, $zero
  /* 164B4C 8013400C 3C058013 */       lui $a1, %hi(func_ovl34_80133B58)
  /* 164B50 80134010 240BFFFF */     addiu $t3, $zero, -1
  /* 164B54 80134014 AFAB0010 */        sw $t3, 0x10($sp)
  /* 164B58 80134018 24A53B58 */     addiu $a1, $a1, %lo(func_ovl34_80133B58)
  /* 164B5C 8013401C 02002025 */        or $a0, $s0, $zero
  /* 164B60 80134020 2406001E */     addiu $a2, $zero, 0x1e
  /* 164B64 80134024 0C00277D */       jal func_80009DF4
  /* 164B68 80134028 3C078000 */       lui $a3, 0x8000
  /* 164B6C 8013402C 3C0C8013 */       lui $t4, %hi(D_ovl34_801350B4)
  /* 164B70 80134030 8D8C50B4 */        lw $t4, %lo(D_ovl34_801350B4)($t4)
  /* 164B74 80134034 3C0D0000 */       lui $t5, %hi(D_NF_00000714)
  /* 164B78 80134038 25AD0714 */     addiu $t5, $t5, %lo(D_NF_00000714)
  /* 164B7C 8013403C 8FA40030 */        lw $a0, 0x30($sp)
  /* 164B80 80134040 24060000 */     addiu $a2, $zero, 0
  /* 164B84 80134044 0C002F47 */       jal func_8000BD1C
  /* 164B88 80134048 018D2821 */      addu $a1, $t4, $t5
  /* 164B8C 8013404C 02002025 */        or $a0, $s0, $zero
  /* 164B90 80134050 8FA5002C */        lw $a1, 0x2c($sp)
  /* 164B94 80134054 24060001 */     addiu $a2, $zero, 1
  /* 164B98 80134058 0C002062 */       jal omAddGObjCommonProc
  /* 164B9C 8013405C 24070001 */     addiu $a3, $zero, 1
  /* 164BA0 80134060 0C0037CD */       jal func_8000DF34
  /* 164BA4 80134064 02002025 */        or $a0, $s0, $zero
  /* 164BA8 80134068 8FBF0024 */        lw $ra, 0x24($sp)
  /* 164BAC 8013406C 8FB00020 */        lw $s0, 0x20($sp)
  /* 164BB0 80134070 27BD0038 */     addiu $sp, $sp, 0x38
  /* 164BB4 80134074 03E00008 */        jr $ra
  /* 164BB8 80134078 00000000 */       nop 

glabel func_ovl34_8013407C
  /* 164BBC 8013407C 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 164BC0 80134080 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 164BC4 80134084 AFBF003C */        sw $ra, 0x3c($sp)
  /* 164BC8 80134088 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 164BCC 8013408C 240F005F */     addiu $t7, $zero, 0x5f
  /* 164BD0 80134090 24180000 */     addiu $t8, $zero, 0
  /* 164BD4 80134094 3C194000 */       lui $t9, 0x4000
  /* 164BD8 80134098 2408FFFF */     addiu $t0, $zero, -1
  /* 164BDC 8013409C 24090001 */     addiu $t1, $zero, 1
  /* 164BE0 801340A0 240A0001 */     addiu $t2, $zero, 1
  /* 164BE4 801340A4 240B0001 */     addiu $t3, $zero, 1
  /* 164BE8 801340A8 AFAB0030 */        sw $t3, 0x30($sp)
  /* 164BEC 801340AC AFAA0028 */        sw $t2, 0x28($sp)
  /* 164BF0 801340B0 AFA90024 */        sw $t1, 0x24($sp)
  /* 164BF4 801340B4 AFA80020 */        sw $t0, 0x20($sp)
  /* 164BF8 801340B8 AFB9001C */        sw $t9, 0x1c($sp)
  /* 164BFC 801340BC AFB80018 */        sw $t8, 0x18($sp)
  /* 164C00 801340C0 AFAF0014 */        sw $t7, 0x14($sp)
  /* 164C04 801340C4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 164C08 801340C8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 164C0C 801340CC AFA00034 */        sw $zero, 0x34($sp)
  /* 164C10 801340D0 24040401 */     addiu $a0, $zero, 0x401
  /* 164C14 801340D4 00002825 */        or $a1, $zero, $zero
  /* 164C18 801340D8 24060010 */     addiu $a2, $zero, 0x10
  /* 164C1C 801340DC 0C002E4F */       jal func_8000B93C
  /* 164C20 801340E0 3C078000 */       lui $a3, 0x8000
  /* 164C24 801340E4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 164C28 801340E8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 164C2C 801340EC 8C430074 */        lw $v1, 0x74($v0)
  /* 164C30 801340F0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 164C34 801340F4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 164C38 801340F8 44050000 */      mfc1 $a1, $f0
  /* 164C3C 801340FC 44060000 */      mfc1 $a2, $f0
  /* 164C40 80134100 3C07439B */       lui $a3, 0x439b
  /* 164C44 80134104 24640008 */     addiu $a0, $v1, 8
  /* 164C48 80134108 AFA30040 */        sw $v1, 0x40($sp)
  /* 164C4C 8013410C 0C001C20 */       jal func_80007080
  /* 164C50 80134110 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 164C54 80134114 8FA30040 */        lw $v1, 0x40($sp)
  /* 164C58 80134118 44800000 */      mtc1 $zero, $f0
  /* 164C5C 8013411C 3C01447A */       lui $at, (0x447A0000 >> 16) # 1000.0
  /* 164C60 80134120 44813000 */      mtc1 $at, $f6 # 1000.0 to cop1
  /* 164C64 80134124 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 164C68 80134128 44814000 */      mtc1 $at, $f8 # 1.0 to cop1
  /* 164C6C 8013412C 3C018013 */       lui $at, %hi(D_ovl34_80134CC8)
  /* 164C70 80134130 E460003C */      swc1 $f0, 0x3c($v1)
  /* 164C74 80134134 E4600040 */      swc1 $f0, 0x40($v1)
  /* 164C78 80134138 E4600048 */      swc1 $f0, 0x48($v1)
  /* 164C7C 8013413C E460004C */      swc1 $f0, 0x4c($v1)
  /* 164C80 80134140 E4600050 */      swc1 $f0, 0x50($v1)
  /* 164C84 80134144 E4600054 */      swc1 $f0, 0x54($v1)
  /* 164C88 80134148 E460005C */      swc1 $f0, 0x5c($v1)
  /* 164C8C 8013414C E4660044 */      swc1 $f6, 0x44($v1)
  /* 164C90 80134150 E4680058 */      swc1 $f8, 0x58($v1)
  /* 164C94 80134154 C42A4CC8 */      lwc1 $f10, %lo(D_ovl34_80134CC8)($at)
  /* 164C98 80134158 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 164C9C 8013415C 44818000 */      mtc1 $at, $f16 # 128.0 to cop1
  /* 164CA0 80134160 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 164CA4 80134164 44819000 */      mtc1 $at, $f18 # 16384.0 to cop1
  /* 164CA8 80134168 E46A0020 */      swc1 $f10, 0x20($v1)
  /* 164CAC 8013416C E4700028 */      swc1 $f16, 0x28($v1)
  /* 164CB0 80134170 E472002C */      swc1 $f18, 0x2c($v1)
  /* 164CB4 80134174 8FBF003C */        lw $ra, 0x3c($sp)
  /* 164CB8 80134178 27BD0048 */     addiu $sp, $sp, 0x48
  /* 164CBC 8013417C 03E00008 */        jr $ra
  /* 164CC0 80134180 00000000 */       nop 

glabel func_ovl34_80134184
  /* 164CC4 80134184 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 164CC8 80134188 AFBF0014 */        sw $ra, 0x14($sp)
  /* 164CCC 8013418C 3C048013 */       lui $a0, %hi(D_ovl34_80134CE8)
  /* 164CD0 80134190 0C0026A1 */       jal omEjectGObjCommon
  /* 164CD4 80134194 8C844CE8 */        lw $a0, %lo(D_ovl34_80134CE8)($a0)
  /* 164CD8 80134198 3C048013 */       lui $a0, %hi(D_ovl34_80134CEC)
  /* 164CDC 8013419C 0C0026A1 */       jal omEjectGObjCommon
  /* 164CE0 801341A0 8C844CEC */        lw $a0, %lo(D_ovl34_80134CEC)($a0)
  /* 164CE4 801341A4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164CE8 801341A8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 164CEC 801341AC 03E00008 */        jr $ra
  /* 164CF0 801341B0 00000000 */       nop 

glabel func_ovl34_801341B4
  /* 164CF4 801341B4 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 164CF8 801341B8 3C0E8013 */       lui $t6, %hi(D_ovl34_80134B90)
  /* 164CFC 801341BC AFBF001C */        sw $ra, 0x1c($sp)
  /* 164D00 801341C0 AFB10018 */        sw $s1, 0x18($sp)
  /* 164D04 801341C4 AFB00014 */        sw $s0, 0x14($sp)
  /* 164D08 801341C8 25CE4B90 */     addiu $t6, $t6, %lo(D_ovl34_80134B90)
  /* 164D0C 801341CC 8DD80000 */        lw $t8, ($t6) # D_ovl34_80134B90 + 0
  /* 164D10 801341D0 27B00028 */     addiu $s0, $sp, 0x28
  /* 164D14 801341D4 24040008 */     addiu $a0, $zero, 8
  /* 164D18 801341D8 AE180000 */        sw $t8, ($s0)
  /* 164D1C 801341DC 8DCF0004 */        lw $t7, 4($t6) # D_ovl34_80134B90 + 4
  /* 164D20 801341E0 AE0F0004 */        sw $t7, 4($s0)
  /* 164D24 801341E4 8DD80008 */        lw $t8, 8($t6) # D_ovl34_80134B90 + 8
  /* 164D28 801341E8 AE180008 */        sw $t8, 8($s0)
  /* 164D2C 801341EC 8DCF000C */        lw $t7, 0xc($t6) # D_ovl34_80134B90 + 12
  /* 164D30 801341F0 AE0F000C */        sw $t7, 0xc($s0)
  /* 164D34 801341F4 8DD80010 */        lw $t8, 0x10($t6) # D_ovl34_80134B90 + 16
  /* 164D38 801341F8 AE180010 */        sw $t8, 0x10($s0)
  /* 164D3C 801341FC 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl34_80134B90 + 20
  /* 164D40 80134200 AE0F0014 */        sw $t7, 0x14($s0)
  /* 164D44 80134204 8DD80018 */        lw $t8, 0x18($t6) # D_ovl34_80134B90 + 24
  /* 164D48 80134208 AE180018 */        sw $t8, 0x18($s0)
  /* 164D4C 8013420C 8DCF001C */        lw $t7, 0x1c($t6) # D_ovl34_80134B90 + 28
  /* 164D50 80134210 0C00628C */       jal lbRandom_GetTimeByteRange
  /* 164D54 80134214 AE0F001C */        sw $t7, 0x1c($s0)
  /* 164D58 80134218 3C118013 */       lui $s1, %hi(D_ovl34_80134CF8)
  /* 164D5C 8013421C 0002C880 */       sll $t9, $v0, 2
  /* 164D60 80134220 02194021 */      addu $t0, $s0, $t9
  /* 164D64 80134224 26314CF8 */     addiu $s1, $s1, %lo(D_ovl34_80134CF8)
  /* 164D68 80134228 8E290000 */        lw $t1, ($s1) # D_ovl34_80134CF8 + 0
  /* 164D6C 8013422C 8D030000 */        lw $v1, ($t0)
  /* 164D70 80134230 5469000A */      bnel $v1, $t1, .L8013425C
  /* 164D74 80134234 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134238:
  /* 164D78 80134238 0C00628C */       jal lbRandom_GetTimeByteRange
  /* 164D7C 8013423C 24040008 */     addiu $a0, $zero, 8
  /* 164D80 80134240 00025080 */       sll $t2, $v0, 2
  /* 164D84 80134244 020A5821 */      addu $t3, $s0, $t2
  /* 164D88 80134248 8D630000 */        lw $v1, ($t3)
  /* 164D8C 8013424C 8E2C0000 */        lw $t4, ($s1) # D_ovl34_80134CF8 + 0
  /* 164D90 80134250 106CFFF9 */       beq $v1, $t4, .L80134238
  /* 164D94 80134254 00000000 */       nop 
  /* 164D98 80134258 8FBF001C */        lw $ra, 0x1c($sp)
  .L8013425C:
  /* 164D9C 8013425C 8FB00014 */        lw $s0, 0x14($sp)
  /* 164DA0 80134260 8FB10018 */        lw $s1, 0x18($sp)
  /* 164DA4 80134264 27BD0048 */     addiu $sp, $sp, 0x48
  /* 164DA8 80134268 03E00008 */        jr $ra
  /* 164DAC 8013426C 00601025 */        or $v0, $v1, $zero

glabel func_ovl34_80134270
  /* 164DB0 80134270 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 164DB4 80134274 3C0F8013 */       lui $t7, %hi(D_ovl34_80134BB0)
  /* 164DB8 80134278 AFBF0014 */        sw $ra, 0x14($sp)
  /* 164DBC 8013427C 25EF4BB0 */     addiu $t7, $t7, %lo(D_ovl34_80134BB0)
  /* 164DC0 80134280 8DF90000 */        lw $t9, ($t7) # D_ovl34_80134BB0 + 0
  /* 164DC4 80134284 8DF80004 */        lw $t8, 4($t7) # D_ovl34_80134BB0 + 4
  /* 164DC8 80134288 27AE0020 */     addiu $t6, $sp, 0x20
  /* 164DCC 8013428C ADD90000 */        sw $t9, ($t6)
  /* 164DD0 80134290 ADD80004 */        sw $t8, 4($t6)
  /* 164DD4 80134294 8DF8000C */        lw $t8, 0xc($t7) # D_ovl34_80134BB0 + 12
  /* 164DD8 80134298 8DF90008 */        lw $t9, 8($t7) # D_ovl34_80134BB0 + 8
  /* 164DDC 8013429C 24040008 */     addiu $a0, $zero, 8
  /* 164DE0 801342A0 ADD8000C */        sw $t8, 0xc($t6)
  /* 164DE4 801342A4 ADD90008 */        sw $t9, 8($t6)
  /* 164DE8 801342A8 8DF90010 */        lw $t9, 0x10($t7) # D_ovl34_80134BB0 + 16
  /* 164DEC 801342AC 8DF80014 */        lw $t8, 0x14($t7) # D_ovl34_80134BB0 + 20
  /* 164DF0 801342B0 ADD90010 */        sw $t9, 0x10($t6)
  /* 164DF4 801342B4 ADD80014 */        sw $t8, 0x14($t6)
  /* 164DF8 801342B8 8DF8001C */        lw $t8, 0x1c($t7) # D_ovl34_80134BB0 + 28
  /* 164DFC 801342BC 8DF90018 */        lw $t9, 0x18($t7) # D_ovl34_80134BB0 + 24
  /* 164E00 801342C0 ADD8001C */        sw $t8, 0x1c($t6)
  /* 164E04 801342C4 0C00628C */       jal lbRandom_GetTimeByteRange
  /* 164E08 801342C8 ADD90018 */        sw $t9, 0x18($t6)
  /* 164E0C 801342CC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164E10 801342D0 00024080 */       sll $t0, $v0, 2
  /* 164E14 801342D4 03A81021 */      addu $v0, $sp, $t0
  /* 164E18 801342D8 8C420020 */        lw $v0, 0x20($v0)
  /* 164E1C 801342DC 03E00008 */        jr $ra
  /* 164E20 801342E0 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl34_801342E4
  /* 164E24 801342E4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 164E28 801342E8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 164E2C 801342EC 3C018013 */       lui $at, %hi(D_ovl34_80134CE4)
  /* 164E30 801342F0 0C04D09C */       jal func_ovl34_80134270
  /* 164E34 801342F4 AC204CE4 */        sw $zero, %lo(D_ovl34_80134CE4)($at)
  /* 164E38 801342F8 3C018013 */       lui $at, %hi(D_ovl34_80134CF8)
  /* 164E3C 801342FC 0C04D06D */       jal func_ovl34_801341B4
  /* 164E40 80134300 AC224CF8 */        sw $v0, %lo(D_ovl34_80134CF8)($at)
  /* 164E44 80134304 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164E48 80134308 3C018013 */       lui $at, %hi(D_ovl34_80134CFC)
  /* 164E4C 8013430C AC224CFC */        sw $v0, %lo(D_ovl34_80134CFC)($at)
  /* 164E50 80134310 03E00008 */        jr $ra
  /* 164E54 80134314 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl34_80134318
  /* 164E58 80134318 3C0E8004 */       lui $t6, %hi(D_80044F9C)
  /* 164E5C 8013431C 8DCE4F9C */        lw $t6, %lo(D_80044F9C)($t6)
  /* 164E60 80134320 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 164E64 80134324 AFBF0014 */        sw $ra, 0x14($sp)
  /* 164E68 80134328 11C00003 */      beqz $t6, .L80134338
  /* 164E6C 8013432C AFA40028 */        sw $a0, 0x28($sp)
  /* 164E70 80134330 1000002F */         b .L801343F0
  /* 164E74 80134334 24020001 */     addiu $v0, $zero, 1
  .L80134338:
  /* 164E78 80134338 0C00C9A4 */       jal osViGetNextFramebuffer
  /* 164E7C 8013433C 00000000 */       nop 
  /* 164E80 80134340 0C00E58C */       jal osViGetCurrentFramebuffer
  /* 164E84 80134344 AFA2001C */        sw $v0, 0x1c($sp)
  /* 164E88 80134348 3C038004 */       lui $v1, %hi(D_80044FA8)
  /* 164E8C 8013434C 8C634FA8 */        lw $v1, %lo(D_80044FA8)($v1)
  /* 164E90 80134350 3C058039 */       lui $a1, %hi(D_NF_80392A00)
  /* 164E94 80134354 24A52A00 */     addiu $a1, $a1, %lo(D_NF_80392A00)
  /* 164E98 80134358 14A30003 */       bne $a1, $v1, .L80134368
  /* 164E9C 8013435C 3C0F803B */       lui $t7, %hi(D_NF_803B6900)
  /* 164EA0 80134360 1000000C */         b .L80134394
  /* 164EA4 80134364 24030001 */     addiu $v1, $zero, 1
  .L80134368:
  /* 164EA8 80134368 25EF6900 */     addiu $t7, $t7, %lo(D_NF_803B6900)
  /* 164EAC 8013436C 15E30003 */       bne $t7, $v1, .L8013437C
  /* 164EB0 80134370 3C18803E */       lui $t8, %hi(D_NF_803DA800)
  /* 164EB4 80134374 10000007 */         b .L80134394
  /* 164EB8 80134378 24030002 */     addiu $v1, $zero, 2
  .L8013437C:
  /* 164EBC 8013437C 2718A800 */     addiu $t8, $t8, %lo(D_NF_803DA800)
  /* 164EC0 80134380 57030004 */      bnel $t8, $v1, .L80134394
  /* 164EC4 80134384 00001825 */        or $v1, $zero, $zero
  /* 164EC8 80134388 10000002 */         b .L80134394
  /* 164ECC 8013438C 00001825 */        or $v1, $zero, $zero
  /* 164ED0 80134390 00001825 */        or $v1, $zero, $zero
  .L80134394:
  /* 164ED4 80134394 0003C8C0 */       sll $t9, $v1, 3
  /* 164ED8 80134398 0323C821 */      addu $t9, $t9, $v1
  /* 164EDC 8013439C 0019C980 */       sll $t9, $t9, 6
  /* 164EE0 801343A0 0323C823 */      subu $t9, $t9, $v1
  /* 164EE4 801343A4 0019CA00 */       sll $t9, $t9, 8
  /* 164EE8 801343A8 00B92021 */      addu $a0, $a1, $t9
  /* 164EEC 801343AC 1044000F */       beq $v0, $a0, .L801343EC
  /* 164EF0 801343B0 8FA8001C */        lw $t0, 0x1c($sp)
  /* 164EF4 801343B4 1104000D */       beq $t0, $a0, .L801343EC
  /* 164EF8 801343B8 000348C0 */       sll $t1, $v1, 3
  /* 164EFC 801343BC 01234821 */      addu $t1, $t1, $v1
  /* 164F00 801343C0 00094980 */       sll $t1, $t1, 6
  /* 164F04 801343C4 01234823 */      subu $t1, $t1, $v1
  /* 164F08 801343C8 00094A00 */       sll $t1, $t1, 8
  /* 164F0C 801343CC 00A95021 */      addu $t2, $a1, $t1
  /* 164F10 801343D0 3C018004 */       lui $at, %hi(D_80044F9C)
  /* 164F14 801343D4 0C00CD24 */       jal osGetCount
  /* 164F18 801343D8 AC2A4F9C */        sw $t2, %lo(D_80044F9C)($at)
  /* 164F1C 801343DC 3C018004 */       lui $at, %hi(D_80044FAC)
  /* 164F20 801343E0 AC224FAC */        sw $v0, %lo(D_80044FAC)($at)
  /* 164F24 801343E4 10000002 */         b .L801343F0
  /* 164F28 801343E8 24020001 */     addiu $v0, $zero, 1
  .L801343EC:
  /* 164F2C 801343EC 00001025 */        or $v0, $zero, $zero
  .L801343F0:
  /* 164F30 801343F0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 164F34 801343F4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 164F38 801343F8 03E00008 */        jr $ra
  /* 164F3C 801343FC 00000000 */       nop 

glabel func_ovl34_80134400
  /* 164F40 80134400 3C038013 */       lui $v1, %hi(D_ovl34_80134CE4)
  /* 164F44 80134404 24634CE4 */     addiu $v1, $v1, %lo(D_ovl34_80134CE4)
  /* 164F48 80134408 8C6E0000 */        lw $t6, ($v1) # D_ovl34_80134CE4 + 0
  /* 164F4C 8013440C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 164F50 80134410 AFBF0014 */        sw $ra, 0x14($sp)
  /* 164F54 80134414 25CF0001 */     addiu $t7, $t6, 1
  /* 164F58 80134418 29E1000A */      slti $at, $t7, 0xa
  /* 164F5C 8013441C AFA40018 */        sw $a0, 0x18($sp)
  /* 164F60 80134420 142000D5 */      bnez $at, .L80134778
  /* 164F64 80134424 AC6F0000 */        sw $t7, ($v1) # D_ovl34_80134CE4 + 0
  /* 164F68 80134428 3C068013 */       lui $a2, %hi(D_ovl34_80134D54)
  /* 164F6C 8013442C 24C64D54 */     addiu $a2, $a2, %lo(D_ovl34_80134D54)
  /* 164F70 80134430 8CC20000 */        lw $v0, ($a2) # D_ovl34_80134D54 + 0
  /* 164F74 80134434 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 164F78 80134438 10400002 */      beqz $v0, .L80134444
  /* 164F7C 8013443C 2459FFFF */     addiu $t9, $v0, -1
  /* 164F80 80134440 ACD90000 */        sw $t9, ($a2) # D_ovl34_80134D54 + 0
  .L80134444:
  /* 164F84 80134444 0C0E4281 */       jal func_ovl1_80390A04
  /* 164F88 80134448 2405000F */     addiu $a1, $zero, 0xf
  /* 164F8C 8013444C 10400006 */      beqz $v0, .L80134468
  /* 164F90 80134450 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 164F94 80134454 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 164F98 80134458 2405000F */     addiu $a1, $zero, 0xf
  /* 164F9C 8013445C 10400002 */      beqz $v0, .L80134468
  /* 164FA0 80134460 3C018013 */       lui $at, %hi(D_ovl34_80134D54)
  /* 164FA4 80134464 AC204D54 */        sw $zero, %lo(D_ovl34_80134D54)($at)
  .L80134468:
  /* 164FA8 80134468 0C0E41DB */       jal func_ovl1_8039076C
  /* 164FAC 8013446C 3404D000 */       ori $a0, $zero, 0xd000
  /* 164FB0 80134470 10400007 */      beqz $v0, .L80134490
  /* 164FB4 80134474 3C02800A */       lui $v0, %hi(gSceneData)
  /* 164FB8 80134478 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 164FBC 8013447C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 164FC0 80134480 24090001 */     addiu $t1, $zero, 1
  /* 164FC4 80134484 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 164FC8 80134488 0C00171D */       jal func_80005C74
  /* 164FCC 8013448C A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L80134490:
  /* 164FD0 80134490 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 164FD4 80134494 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 164FD8 80134498 24010118 */     addiu $at, $zero, 0x118
  /* 164FDC 8013449C 14410010 */       bne $v0, $at, .L801344E0
  /* 164FE0 801344A0 3C048013 */       lui $a0, %hi(D_ovl34_80134CF8)
  /* 164FE4 801344A4 0C04C8CC */       jal func_ovl34_80132330
  /* 164FE8 801344A8 8C844CF8 */        lw $a0, %lo(D_ovl34_80134CF8)($a0)
  /* 164FEC 801344AC 0C04C7DF */       jal func_ovl34_80131F7C
  /* 164FF0 801344B0 00000000 */       nop 
  /* 164FF4 801344B4 3C048013 */       lui $a0, %hi(D_ovl34_80134D00)
  /* 164FF8 801344B8 0C0026A1 */       jal omEjectGObjCommon
  /* 164FFC 801344BC 8C844D00 */        lw $a0, %lo(D_ovl34_80134D00)($a0)
  /* 165000 801344C0 3C048013 */       lui $a0, %hi(D_ovl34_80134D3C)
  /* 165004 801344C4 0C0026A1 */       jal omEjectGObjCommon
  /* 165008 801344C8 8C844D3C */        lw $a0, %lo(D_ovl34_80134D3C)($a0)
  /* 16500C 801344CC 3C048013 */       lui $a0, %hi(D_ovl34_80134D30)
  /* 165010 801344D0 0C0026A1 */       jal omEjectGObjCommon
  /* 165014 801344D4 8C844D30 */        lw $a0, %lo(D_ovl34_80134D30)($a0)
  /* 165018 801344D8 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 16501C 801344DC 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L801344E0:
  /* 165020 801344E0 240102B7 */     addiu $at, $zero, 0x2b7
  /* 165024 801344E4 14410005 */       bne $v0, $at, .L801344FC
  /* 165028 801344E8 3C048013 */       lui $a0, %hi(D_ovl34_80134CFC)
  /* 16502C 801344EC 0C04CA4A */       jal func_ovl34_80132928
  /* 165030 801344F0 8C844CFC */        lw $a0, %lo(D_ovl34_80134CFC)($a0)
  /* 165034 801344F4 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165038 801344F8 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L801344FC:
  /* 16503C 801344FC 2401017C */     addiu $at, $zero, 0x17c
  /* 165040 80134500 14410016 */       bne $v0, $at, .L8013455C
  /* 165044 80134504 3C048013 */       lui $a0, %hi(D_ovl34_80134D04)
  /* 165048 80134508 3C050001 */       lui $a1, (0x10009 >> 16) # 65545
  /* 16504C 8013450C 34A50009 */       ori $a1, $a1, (0x10009 & 0xFFFF) # 65545
  /* 165050 80134510 0C0E4173 */       jal func_ovl1_803905CC
  /* 165054 80134514 8C844D04 */        lw $a0, %lo(D_ovl34_80134D04)($a0)
  /* 165058 80134518 3C0A8013 */       lui $t2, %hi(D_ovl34_80134D04)
  /* 16505C 8013451C 8D4A4D04 */        lw $t2, %lo(D_ovl34_80134D04)($t2)
  /* 165060 80134520 44802000 */      mtc1 $zero, $f4
  /* 165064 80134524 3C0C8013 */       lui $t4, %hi(D_ovl34_80134D04)
  /* 165068 80134528 8D4B0074 */        lw $t3, 0x74($t2)
  /* 16506C 8013452C 44803000 */      mtc1 $zero, $f6
  /* 165070 80134530 3C0E8013 */       lui $t6, %hi(D_ovl34_80134D04)
  /* 165074 80134534 E5640030 */      swc1 $f4, 0x30($t3)
  /* 165078 80134538 8D8C4D04 */        lw $t4, %lo(D_ovl34_80134D04)($t4)
  /* 16507C 8013453C 44804000 */      mtc1 $zero, $f8
  /* 165080 80134540 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165084 80134544 8D8D0074 */        lw $t5, 0x74($t4)
  /* 165088 80134548 E5A60034 */      swc1 $f6, 0x34($t5)
  /* 16508C 8013454C 8DCE4D04 */        lw $t6, %lo(D_ovl34_80134D04)($t6)
  /* 165090 80134550 8DCF0074 */        lw $t7, 0x74($t6)
  /* 165094 80134554 E5E80038 */      swc1 $f8, 0x38($t7)
  /* 165098 80134558 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L8013455C:
  /* 16509C 8013455C 240101C2 */     addiu $at, $zero, 0x1c2
  /* 1650A0 80134560 54410009 */      bnel $v0, $at, .L80134588
  /* 1650A4 80134564 24010230 */     addiu $at, $zero, 0x230
  /* 1650A8 80134568 0C04CB3B */       jal func_ovl34_80132CEC
  /* 1650AC 8013456C 00000000 */       nop 
  /* 1650B0 80134570 3C048013 */       lui $a0, %hi(D_ovl34_80134D10)
  /* 1650B4 80134574 0C0026A1 */       jal omEjectGObjCommon
  /* 1650B8 80134578 8C844D10 */        lw $a0, %lo(D_ovl34_80134D10)($a0)
  /* 1650BC 8013457C 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 1650C0 80134580 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 1650C4 80134584 24010230 */     addiu $at, $zero, 0x230
  .L80134588:
  /* 1650C8 80134588 5441000D */      bnel $v0, $at, .L801345C0
  /* 1650CC 8013458C 240101F4 */     addiu $at, $zero, 0x1f4
  /* 1650D0 80134590 0C04D061 */       jal func_ovl34_80134184
  /* 1650D4 80134594 00000000 */       nop 
  /* 1650D8 80134598 0C04CD1C */       jal func_ovl34_80133470
  /* 1650DC 8013459C 00000000 */       nop 
  /* 1650E0 801345A0 3C048013 */       lui $a0, %hi(D_ovl34_80134CF4)
  /* 1650E4 801345A4 3C050001 */       lui $a1, (0x10010 >> 16) # 65552
  /* 1650E8 801345A8 34A50010 */       ori $a1, $a1, (0x10010 & 0xFFFF) # 65552
  /* 1650EC 801345AC 0C0E4173 */       jal func_ovl1_803905CC
  /* 1650F0 801345B0 8C844CF4 */        lw $a0, %lo(D_ovl34_80134CF4)($a0)
  /* 1650F4 801345B4 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 1650F8 801345B8 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 1650FC 801345BC 240101F4 */     addiu $at, $zero, 0x1f4
  .L801345C0:
  /* 165100 801345C0 14410009 */       bne $v0, $at, .L801345E8
  /* 165104 801345C4 3C048013 */       lui $a0, %hi(D_ovl34_80134D04)
  /* 165108 801345C8 8C844D04 */        lw $a0, %lo(D_ovl34_80134D04)($a0)
  /* 16510C 801345CC 24050009 */     addiu $a1, $zero, 9
  /* 165110 801345D0 0C002834 */       jal om_g_move_obj_dl
  /* 165114 801345D4 2406FFFF */     addiu $a2, $zero, -1
  /* 165118 801345D8 0C04CC2E */       jal func_ovl34_801330B8
  /* 16511C 801345DC 00000000 */       nop 
  /* 165120 801345E0 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165124 801345E4 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L801345E8:
  /* 165128 801345E8 2401035C */     addiu $at, $zero, 0x35c
  /* 16512C 801345EC 5441000F */      bnel $v0, $at, .L8013462C
  /* 165130 801345F0 2401040D */     addiu $at, $zero, 0x40d
  /* 165134 801345F4 0C04D061 */       jal func_ovl34_80134184
  /* 165138 801345F8 00000000 */       nop 
  /* 16513C 801345FC 0C04CDAA */       jal func_ovl34_801336A8
  /* 165140 80134600 00000000 */       nop 
  /* 165144 80134604 3C048013 */       lui $a0, %hi(D_ovl34_80134CF4)
  /* 165148 80134608 3C050001 */       lui $a1, (0x10011 >> 16) # 65553
  /* 16514C 8013460C 34A50011 */       ori $a1, $a1, (0x10011 & 0xFFFF) # 65553
  /* 165150 80134610 0C0E4173 */       jal func_ovl1_803905CC
  /* 165154 80134614 8C844CF4 */        lw $a0, %lo(D_ovl34_80134CF4)($a0)
  /* 165158 80134618 0C04C9A0 */       jal func_ovl34_80132680
  /* 16515C 8013461C 00000000 */       nop 
  /* 165160 80134620 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165164 80134624 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 165168 80134628 2401040D */     addiu $at, $zero, 0x40d
  .L8013462C:
  /* 16516C 8013462C 14410009 */       bne $v0, $at, .L80134654
  /* 165170 80134630 3C188013 */       lui $t8, %hi(D_ovl34_80134D50)
  /* 165174 80134634 8F184D50 */        lw $t8, %lo(D_ovl34_80134D50)($t8)
  /* 165178 80134638 2401FFFD */     addiu $at, $zero, -3
  /* 16517C 8013463C 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165180 80134640 8F030074 */        lw $v1, 0x74($t8)
  /* 165184 80134644 8C790080 */        lw $t9, 0x80($v1)
  /* 165188 80134648 03214024 */       and $t0, $t9, $at
  /* 16518C 8013464C AC680080 */        sw $t0, 0x80($v1)
  /* 165190 80134650 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L80134654:
  /* 165194 80134654 24010410 */     addiu $at, $zero, 0x410
  /* 165198 80134658 14410015 */       bne $v0, $at, .L801346B0
  /* 16519C 8013465C 3C048013 */       lui $a0, %hi(D_ovl34_80134D3C)
  /* 1651A0 80134660 0C0026A1 */       jal omEjectGObjCommon
  /* 1651A4 80134664 8C844D3C */        lw $a0, %lo(D_ovl34_80134D3C)($a0)
  /* 1651A8 80134668 3C048013 */       lui $a0, %hi(D_ovl34_80134D40)
  /* 1651AC 8013466C 0C0026A1 */       jal omEjectGObjCommon
  /* 1651B0 80134670 8C844D40 */        lw $a0, %lo(D_ovl34_80134D40)($a0)
  /* 1651B4 80134674 3C048013 */       lui $a0, %hi(D_ovl34_80134CF4)
  /* 1651B8 80134678 0C0026A1 */       jal omEjectGObjCommon
  /* 1651BC 8013467C 8C844CF4 */        lw $a0, %lo(D_ovl34_80134CF4)($a0)
  /* 1651C0 80134680 0C04D01F */       jal func_ovl34_8013407C
  /* 1651C4 80134684 00000000 */       nop 
  /* 1651C8 80134688 0C04CFBF */       jal func_ovl34_80133EFC
  /* 1651CC 8013468C 00000000 */       nop 
  /* 1651D0 80134690 0C04CC6C */       jal func_ovl34_801331B0
  /* 1651D4 80134694 00000000 */       nop 
  /* 1651D8 80134698 0C04CAB9 */       jal func_ovl34_80132AE4
  /* 1651DC 8013469C 00000000 */       nop 
  /* 1651E0 801346A0 0C04CBD1 */       jal func_ovl34_80132F44
  /* 1651E4 801346A4 00000000 */       nop 
  /* 1651E8 801346A8 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 1651EC 801346AC 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L801346B0:
  /* 1651F0 801346B0 24010474 */     addiu $at, $zero, 0x474
  /* 1651F4 801346B4 5441001E */      bnel $v0, $at, .L80134730
  /* 1651F8 801346B8 24010438 */     addiu $at, $zero, 0x438
  /* 1651FC 801346BC 0C04D061 */       jal func_ovl34_80134184
  /* 165200 801346C0 00000000 */       nop 
  /* 165204 801346C4 0C04C9CE */       jal func_ovl34_80132738
  /* 165208 801346C8 00000000 */       nop 
  /* 16520C 801346CC 3C098013 */       lui $t1, %hi(D_ovl34_80134D04)
  /* 165210 801346D0 8D294D04 */        lw $t1, %lo(D_ovl34_80134D04)($t1)
  /* 165214 801346D4 44805000 */      mtc1 $zero, $f10
  /* 165218 801346D8 3C0B8013 */       lui $t3, %hi(D_ovl34_80134D04)
  /* 16521C 801346DC 8D2A0074 */        lw $t2, 0x74($t1)
  /* 165220 801346E0 44808000 */      mtc1 $zero, $f16
  /* 165224 801346E4 3C0D8013 */       lui $t5, %hi(D_ovl34_80134D04)
  /* 165228 801346E8 E54A0030 */      swc1 $f10, 0x30($t2)
  /* 16522C 801346EC 8D6B4D04 */        lw $t3, %lo(D_ovl34_80134D04)($t3)
  /* 165230 801346F0 44809000 */      mtc1 $zero, $f18
  /* 165234 801346F4 3C048013 */       lui $a0, %hi(D_ovl34_80134D04)
  /* 165238 801346F8 8D6C0074 */        lw $t4, 0x74($t3)
  /* 16523C 801346FC 3C050001 */       lui $a1, (0x1000A >> 16) # 65546
  /* 165240 80134700 34A5000A */       ori $a1, $a1, (0x1000A & 0xFFFF) # 65546
  /* 165244 80134704 E5900034 */      swc1 $f16, 0x34($t4)
  /* 165248 80134708 8DAD4D04 */        lw $t5, %lo(D_ovl34_80134D04)($t5)
  /* 16524C 8013470C 8DAE0074 */        lw $t6, 0x74($t5)
  /* 165250 80134710 E5D20038 */      swc1 $f18, 0x38($t6)
  /* 165254 80134714 0C0E4173 */       jal func_ovl1_803905CC
  /* 165258 80134718 8C844D04 */        lw $a0, %lo(D_ovl34_80134D04)($a0)
  /* 16525C 8013471C 0C04CE35 */       jal func_ovl34_801338D4
  /* 165260 80134720 00000000 */       nop 
  /* 165264 80134724 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165268 80134728 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  /* 16526C 8013472C 24010438 */     addiu $at, $zero, 0x438
  .L80134730:
  /* 165270 80134730 14410008 */       bne $v0, $at, .L80134754
  /* 165274 80134734 3C048013 */       lui $a0, %hi(D_ovl34_80134D4C)
  /* 165278 80134738 0C0026A1 */       jal omEjectGObjCommon
  /* 16527C 8013473C 8C844D4C */        lw $a0, %lo(D_ovl34_80134D4C)($a0)
  /* 165280 80134740 3C048013 */       lui $a0, %hi(D_ovl34_80134D48)
  /* 165284 80134744 0C0026A1 */       jal omEjectGObjCommon
  /* 165288 80134748 8C844D48 */        lw $a0, %lo(D_ovl34_80134D48)($a0)
  /* 16528C 8013474C 3C028013 */       lui $v0, %hi(D_ovl34_80134CE4)
  /* 165290 80134750 8C424CE4 */        lw $v0, %lo(D_ovl34_80134CE4)($v0)
  .L80134754:
  /* 165294 80134754 24010528 */     addiu $at, $zero, 0x528
  /* 165298 80134758 14410007 */       bne $v0, $at, .L80134778
  /* 16529C 8013475C 2418001D */     addiu $t8, $zero, 0x1d
  /* 1652A0 80134760 3C02800A */       lui $v0, %hi(gSceneData)
  /* 1652A4 80134764 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1652A8 80134768 904F0000 */       lbu $t7, ($v0) # gSceneData + 0
  /* 1652AC 8013476C A0580000 */        sb $t8, ($v0) # gSceneData + 0
  /* 1652B0 80134770 0C00171D */       jal func_80005C74
  /* 1652B4 80134774 A04F0001 */        sb $t7, 1($v0) # gSceneData + 1
  .L80134778:
  /* 1652B8 80134778 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1652BC 8013477C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1652C0 80134780 03E00008 */        jr $ra
  /* 1652C4 80134784 00000000 */       nop 

glabel func_ovl34_80134788
  /* 1652C8 80134788 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 1652CC 8013478C AFBF001C */        sw $ra, 0x1c($sp)
  /* 1652D0 80134790 3C048013 */       lui $a0, %hi(func_ovl34_80134318)
  /* 1652D4 80134794 0C001234 */       jal func_800048D0
  /* 1652D8 80134798 24844318 */     addiu $a0, $a0, %lo(func_ovl34_80134318)
  /* 1652DC 8013479C 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 1652E0 801347A0 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 1652E4 801347A4 3C188013 */       lui $t8, %hi(D_ovl34_80134D58)
  /* 1652E8 801347A8 3C088013 */       lui $t0, %hi(D_ovl34_80135078)
  /* 1652EC 801347AC 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 1652F0 801347B0 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 1652F4 801347B4 27184D58 */     addiu $t8, $t8, %lo(D_ovl34_80134D58)
  /* 1652F8 801347B8 24190064 */     addiu $t9, $zero, 0x64
  /* 1652FC 801347BC 25085078 */     addiu $t0, $t0, %lo(D_ovl34_80135078)
  /* 165300 801347C0 24090007 */     addiu $t1, $zero, 7
  /* 165304 801347C4 AFAE002C */        sw $t6, 0x2c($sp)
  /* 165308 801347C8 AFAF0030 */        sw $t7, 0x30($sp)
  /* 16530C 801347CC AFA00034 */        sw $zero, 0x34($sp)
  /* 165310 801347D0 AFA00038 */        sw $zero, 0x38($sp)
  /* 165314 801347D4 AFB8003C */        sw $t8, 0x3c($sp)
  /* 165318 801347D8 AFB90040 */        sw $t9, 0x40($sp)
  /* 16531C 801347DC AFA80044 */        sw $t0, 0x44($sp)
  /* 165320 801347E0 AFA90048 */        sw $t1, 0x48($sp)
  /* 165324 801347E4 0C0337DE */       jal rldm_initialize
  /* 165328 801347E8 27A4002C */     addiu $a0, $sp, 0x2c
  /* 16532C 801347EC 3C048013 */       lui $a0, %hi(D_ovl34_80134A20)
  /* 165330 801347F0 24844A20 */     addiu $a0, $a0, %lo(D_ovl34_80134A20)
  /* 165334 801347F4 0C0337BB */       jal rldm_bytes_need_to_load
  /* 165338 801347F8 24050008 */     addiu $a1, $zero, 8
  /* 16533C 801347FC 00402025 */        or $a0, $v0, $zero
  /* 165340 80134800 0C001260 */       jal hal_alloc
  /* 165344 80134804 24050010 */     addiu $a1, $zero, 0x10
  /* 165348 80134808 3C048013 */       lui $a0, %hi(D_ovl34_80134A20)
  /* 16534C 8013480C 3C068013 */       lui $a2, %hi(D_ovl34_801350B0)
  /* 165350 80134810 24C650B0 */     addiu $a2, $a2, %lo(D_ovl34_801350B0)
  /* 165354 80134814 24844A20 */     addiu $a0, $a0, %lo(D_ovl34_80134A20)
  /* 165358 80134818 24050008 */     addiu $a1, $zero, 8
  /* 16535C 8013481C 0C033781 */       jal rldm_load_files_into
  /* 165360 80134820 00403825 */        or $a3, $v0, $zero
  /* 165364 80134824 3C058013 */       lui $a1, %hi(func_ovl34_80134400)
  /* 165368 80134828 24A54400 */     addiu $a1, $a1, %lo(func_ovl34_80134400)
  /* 16536C 8013482C 00002025 */        or $a0, $zero, $zero
  /* 165370 80134830 00003025 */        or $a2, $zero, $zero
  /* 165374 80134834 0C00265A */       jal omMakeGObjCommon
  /* 165378 80134838 3C078000 */       lui $a3, 0x8000
  /* 16537C 8013483C 240A00FF */     addiu $t2, $zero, 0xff
  /* 165380 80134840 AFAA0010 */        sw $t2, 0x10($sp)
  /* 165384 80134844 00002025 */        or $a0, $zero, $zero
  /* 165388 80134848 3C058000 */       lui $a1, 0x8000
  /* 16538C 8013484C 24060064 */     addiu $a2, $zero, 0x64
  /* 165390 80134850 0C002E7F */       jal func_8000B9FC
  /* 165394 80134854 24070003 */     addiu $a3, $zero, 3
  /* 165398 80134858 3C018013 */       lui $at, %hi(D_ovl34_80134D50)
  /* 16539C 8013485C 0C045624 */       jal func_ovl2_80115890
  /* 1653A0 80134860 AC224D50 */        sw $v0, %lo(D_ovl34_80134D50)($at)
  /* 1653A4 80134864 0C04D0B9 */       jal func_ovl34_801342E4
  /* 1653A8 80134868 00000000 */       nop 
  /* 1653AC 8013486C 0C03F4C0 */       jal efManager_AllocUserData
  /* 1653B0 80134870 00000000 */       nop 
  /* 1653B4 80134874 24040001 */     addiu $a0, $zero, 1
  /* 1653B8 80134878 0C035C65 */       jal func_ovl2_800D7194
  /* 1653BC 8013487C 24050003 */     addiu $a1, $zero, 3
  /* 1653C0 80134880 3C048013 */       lui $a0, %hi(D_ovl34_80134CF8)
  /* 1653C4 80134884 0C035E1B */       jal func_ovl2_800D786C
  /* 1653C8 80134888 8C844CF8 */        lw $a0, %lo(D_ovl34_80134CF8)($a0)
  /* 1653CC 8013488C 3C048013 */       lui $a0, %hi(D_ovl34_80134CFC)
  /* 1653D0 80134890 0C035E1B */       jal func_ovl2_800D786C
  /* 1653D4 80134894 8C844CFC */        lw $a0, %lo(D_ovl34_80134CFC)($a0)
  /* 1653D8 80134898 0C035E1B */       jal func_ovl2_800D786C
  /* 1653DC 8013489C 2404000C */     addiu $a0, $zero, 0xc
  /* 1653E0 801348A0 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 1653E4 801348A4 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 1653E8 801348A8 0C001260 */       jal hal_alloc
  /* 1653EC 801348AC 24050010 */     addiu $a1, $zero, 0x10
  /* 1653F0 801348B0 3C018013 */       lui $at, %hi(D_ovl34_80134CD8)
  /* 1653F4 801348B4 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 1653F8 801348B8 AC224CD8 */        sw $v0, %lo(D_ovl34_80134CD8)($at)
  /* 1653FC 801348BC 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 165400 801348C0 0C001260 */       jal hal_alloc
  /* 165404 801348C4 24050010 */     addiu $a1, $zero, 0x10
  /* 165408 801348C8 3C018013 */       lui $at, %hi(D_ovl34_80134CDC)
  /* 16540C 801348CC 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 165410 801348D0 AC224CDC */        sw $v0, %lo(D_ovl34_80134CDC)($at)
  /* 165414 801348D4 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 165418 801348D8 0C001260 */       jal hal_alloc
  /* 16541C 801348DC 24050010 */     addiu $a1, $zero, 0x10
  /* 165420 801348E0 3C018013 */       lui $at, %hi(D_ovl34_80134CE0)
  /* 165424 801348E4 0C04CCAF */       jal func_ovl34_801332BC
  /* 165428 801348E8 AC224CE0 */        sw $v0, %lo(D_ovl34_80134CE0)($at)
  /* 16542C 801348EC 0C04CB52 */       jal func_ovl34_80132D48
  /* 165430 801348F0 00000000 */       nop 
  /* 165434 801348F4 0C04CE73 */       jal func_ovl34_801339CC
  /* 165438 801348F8 00000000 */       nop 
  /* 16543C 801348FC 0C04CE9B */       jal func_ovl34_80133A6C
  /* 165440 80134900 00000000 */       nop 
  /* 165444 80134904 0C04C760 */       jal func_ovl34_80131D80
  /* 165448 80134908 00000000 */       nop 
  /* 16544C 8013490C 0C04C781 */       jal func_ovl34_80131E04
  /* 165450 80134910 00000000 */       nop 
  /* 165454 80134914 0C04C6EA */       jal func_ovl34_80131BA8
  /* 165458 80134918 00000000 */       nop 
  /* 16545C 8013491C 0C04C721 */       jal func_ovl34_80131C84
  /* 165460 80134920 00000000 */       nop 
  /* 165464 80134924 0C04C742 */       jal func_ovl34_80131D08
  /* 165468 80134928 00000000 */       nop 
  /* 16546C 8013492C 0C04C951 */       jal func_ovl34_80132544
  /* 165470 80134930 00000000 */       nop 
  /* 165474 80134934 0C04C969 */       jal func_ovl34_801325A4
  /* 165478 80134938 00000000 */       nop 
  /* 16547C 8013493C 0C04C7AF */       jal func_ovl34_80131EBC
  /* 165480 80134940 00000000 */       nop 
  /* 165484 80134944 0C04C80F */       jal func_ovl34_8013203C
  /* 165488 80134948 00000000 */       nop 
  /* 16548C 8013494C 0C04C84C */       jal func_ovl34_80132130
  /* 165490 80134950 00000000 */       nop 
  /* 165494 80134954 0C04C87E */       jal func_ovl34_801321F8
  /* 165498 80134958 00000000 */       nop 
  /* 16549C 8013495C 0C04CA7C */       jal func_ovl34_801329F0
  /* 1654A0 80134960 00000000 */       nop 
  /* 1654A4 80134964 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 1654A8 80134968 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 1654AC 8013496C 240B00FF */     addiu $t3, $zero, 0xff
  /* 1654B0 80134970 240C00FF */     addiu $t4, $zero, 0xff
  /* 1654B4 80134974 AFAC0014 */        sw $t4, 0x14($sp)
  /* 1654B8 80134978 AFAB0010 */        sw $t3, 0x10($sp)
  /* 1654BC 8013497C 240600FF */     addiu $a2, $zero, 0xff
  /* 1654C0 80134980 240700FF */     addiu $a3, $zero, 0xff
  /* 1654C4 80134984 0C0E4138 */       jal func_ovl1_803904E0
  /* 1654C8 80134988 46006386 */     mov.s $f14, $f12
  /* 1654CC 8013498C 0C0099A8 */       jal func_800266A0
  /* 1654D0 80134990 00000000 */       nop 
  /* 1654D4 80134994 00002025 */        or $a0, $zero, $zero
  /* 1654D8 80134998 0C0082AD */       jal func_80020AB4
  /* 1654DC 8013499C 24050021 */     addiu $a1, $zero, 0x21
  /* 1654E0 801349A0 0C000248 */       jal func_80000920
  /* 1654E4 801349A4 00002025 */        or $a0, $zero, $zero
  /* 1654E8 801349A8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1654EC 801349AC 3C01800A */       lui $at, %hi(D_800A50F0)
  /* 1654F0 801349B0 AC2050F0 */        sw $zero, %lo(D_800A50F0)($at)
  /* 1654F4 801349B4 03E00008 */        jr $ra
  /* 1654F8 801349B8 27BD0050 */     addiu $sp, $sp, 0x50

glabel intro_firstscene_entry
  /* 1654FC 801349BC 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 165500 801349C0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 165504 801349C4 3C048013 */       lui $a0, %hi(D_ovl34_80134BD0)
  /* 165508 801349C8 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16550C 801349CC 24844BD0 */     addiu $a0, $a0, %lo(D_ovl34_80134BD0)
  /* 165510 801349D0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 165514 801349D4 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 165518 801349D8 0C001C09 */       jal func_80007024
  /* 16551C 801349DC AC8F000C */        sw $t7, 0xc($a0) # D_ovl34_80134BD0 + 12
  /* 165520 801349E0 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 165524 801349E4 3C198013 */       lui $t9, %hi(D_NF_801350D0)
  /* 165528 801349E8 3C048013 */       lui $a0, %hi(D_ovl34_80134BEC)
  /* 16552C 801349EC 273950D0 */     addiu $t9, $t9, %lo(D_NF_801350D0)
  /* 165530 801349F0 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 165534 801349F4 24844BEC */     addiu $a0, $a0, %lo(D_ovl34_80134BEC)
  /* 165538 801349F8 03194023 */      subu $t0, $t8, $t9
  /* 16553C 801349FC 0C0289A6 */       jal func_800A2698
  /* 165540 80134A00 AC880010 */        sw $t0, 0x10($a0) # D_ovl34_80134BEC + 16
  /* 165544 80134A04 0C001234 */       jal func_800048D0
  /* 165548 80134A08 00002025 */        or $a0, $zero, $zero
  /* 16554C 80134A0C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 165550 80134A10 27BD0018 */     addiu $sp, $sp, 0x18
  /* 165554 80134A14 03E00008 */        jr $ra
  /* 165558 80134A18 00000000 */       nop 

  /* 16555C 80134A1C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl34_80134A20   # Routine parsed as data
#  /* 165560 80134A20 00000034 */       teq $zero, $zero
#  /* 165564 80134A24 0000003F */    dsra32 $zero, $zero, 0
#  /* 165568 80134A28 00000038 */      dsll $zero, $zero, 0
