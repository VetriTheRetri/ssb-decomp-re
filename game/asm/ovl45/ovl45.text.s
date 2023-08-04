.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132330

glabel func_ovl45_80131B00
  /* 16FD40 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16FD44 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16FD48 80131B08 8C830000 */        lw $v1, ($a0)
  /* 16FD4C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16FD50 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16FD54 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 16FD58 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 16FD5C 80131B1C 3C180002 */       lui $t8, 2
  /* 16FD60 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 16FD64 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 16FD68 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 16FD6C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 16FD70 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 16FD74 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 16FD78 80131B38 44060000 */      mfc1 $a2, $f0
  /* 16FD7C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 16FD80 80131B40 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16FD84 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 16FD88 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16FD8C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16FD90 80131B50 03E00008 */        jr $ra
  /* 16FD94 80131B54 00000000 */       nop 

glabel func_ovl45_80131B58
  /* 16FD98 80131B58 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16FD9C 80131B5C AFBF0024 */        sw $ra, 0x24($sp)
  /* 16FDA0 80131B60 AFB00020 */        sw $s0, 0x20($sp)
  /* 16FDA4 80131B64 00002025 */        or $a0, $zero, $zero
  /* 16FDA8 80131B68 00002825 */        or $a1, $zero, $zero
  /* 16FDAC 80131B6C 24060011 */     addiu $a2, $zero, 0x11
  /* 16FDB0 80131B70 0C00265A */       jal omMakeGObjCommon
  /* 16FDB4 80131B74 3C078000 */       lui $a3, 0x8000
  /* 16FDB8 80131B78 3C0E8013 */       lui $t6, %hi(D_ovl45_801325F8)
  /* 16FDBC 80131B7C 8DCE25F8 */        lw $t6, %lo(D_ovl45_801325F8)($t6)
  /* 16FDC0 80131B80 3C0F0001 */       lui $t7, %hi(D_NF_00009808)
  /* 16FDC4 80131B84 25EF9808 */     addiu $t7, $t7, %lo(D_NF_00009808)
  /* 16FDC8 80131B88 00408025 */        or $s0, $v0, $zero
  /* 16FDCC 80131B8C 00402025 */        or $a0, $v0, $zero
  /* 16FDD0 80131B90 00003025 */        or $a2, $zero, $zero
  /* 16FDD4 80131B94 0C003C48 */       jal func_8000F120
  /* 16FDD8 80131B98 01CF2821 */      addu $a1, $t6, $t7
  /* 16FDDC 80131B9C 3C058001 */       lui $a1, %hi(func_80014768)
  /* 16FDE0 80131BA0 2418FFFF */     addiu $t8, $zero, -1
  /* 16FDE4 80131BA4 AFB80010 */        sw $t8, 0x10($sp)
  /* 16FDE8 80131BA8 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 16FDEC 80131BAC 02002025 */        or $a0, $s0, $zero
  /* 16FDF0 80131BB0 24060006 */     addiu $a2, $zero, 6
  /* 16FDF4 80131BB4 0C00277D */       jal func_80009DF4
  /* 16FDF8 80131BB8 3C078000 */       lui $a3, 0x8000
  /* 16FDFC 80131BBC 44800000 */      mtc1 $zero, $f0
  /* 16FE00 80131BC0 8E190074 */        lw $t9, 0x74($s0)
  /* 16FE04 80131BC4 E720001C */      swc1 $f0, 0x1c($t9)
  /* 16FE08 80131BC8 8E080074 */        lw $t0, 0x74($s0)
  /* 16FE0C 80131BCC E5000020 */      swc1 $f0, 0x20($t0)
  /* 16FE10 80131BD0 8E090074 */        lw $t1, 0x74($s0)
  /* 16FE14 80131BD4 E5200024 */      swc1 $f0, 0x24($t1)
  /* 16FE18 80131BD8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 16FE1C 80131BDC 8FB00020 */        lw $s0, 0x20($sp)
  /* 16FE20 80131BE0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16FE24 80131BE4 03E00008 */        jr $ra
  /* 16FE28 80131BE8 00000000 */       nop 

glabel func_ovl45_80131BEC
  /* 16FE2C 80131BEC 27BDFF60 */     addiu $sp, $sp, -0xa0
  /* 16FE30 80131BF0 3C0F8013 */       lui $t7, %hi(D_ovl45_80132368)
  /* 16FE34 80131BF4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16FE38 80131BF8 AFB50038 */        sw $s5, 0x38($sp)
  /* 16FE3C 80131BFC AFB40034 */        sw $s4, 0x34($sp)
  /* 16FE40 80131C00 AFB30030 */        sw $s3, 0x30($sp)
  /* 16FE44 80131C04 AFB2002C */        sw $s2, 0x2c($sp)
  /* 16FE48 80131C08 AFB10028 */        sw $s1, 0x28($sp)
  /* 16FE4C 80131C0C AFB00024 */        sw $s0, 0x24($sp)
  /* 16FE50 80131C10 F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 16FE54 80131C14 F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 16FE58 80131C18 25EF2368 */     addiu $t7, $t7, %lo(D_ovl45_80132368)
  /* 16FE5C 80131C1C 8DF90000 */        lw $t9, ($t7) # D_ovl45_80132368 + 0
  /* 16FE60 80131C20 8DF80004 */        lw $t8, 4($t7) # D_ovl45_80132368 + 4
  /* 16FE64 80131C24 27AE008C */     addiu $t6, $sp, 0x8c
  /* 16FE68 80131C28 ADD90000 */        sw $t9, ($t6)
  /* 16FE6C 80131C2C ADD80004 */        sw $t8, 4($t6)
  /* 16FE70 80131C30 8DF8000C */        lw $t8, 0xc($t7) # D_ovl45_80132368 + 12
  /* 16FE74 80131C34 8DF90008 */        lw $t9, 8($t7) # D_ovl45_80132368 + 8
  /* 16FE78 80131C38 3C088011 */       lui $t0, %hi(D_ovl2_80116DD0)
  /* 16FE7C 80131C3C 27B40048 */     addiu $s4, $sp, 0x48
  /* 16FE80 80131C40 25086DD0 */     addiu $t0, $t0, %lo(D_ovl2_80116DD0)
  /* 16FE84 80131C44 250C003C */     addiu $t4, $t0, 0x3c
  /* 16FE88 80131C48 02805825 */        or $t3, $s4, $zero
  /* 16FE8C 80131C4C ADD8000C */        sw $t8, 0xc($t6)
  /* 16FE90 80131C50 ADD90008 */        sw $t9, 8($t6)
  .L80131C54:
  /* 16FE94 80131C54 8D0A0000 */        lw $t2, ($t0) # D_ovl2_80116DD0 + 0
  /* 16FE98 80131C58 2508000C */     addiu $t0, $t0, 0xc
  /* 16FE9C 80131C5C 256B000C */     addiu $t3, $t3, 0xc
  /* 16FEA0 80131C60 AD6AFFF4 */        sw $t2, -0xc($t3)
  /* 16FEA4 80131C64 8D09FFF8 */        lw $t1, -8($t0) # D_ovl2_80116DD0 + -8
  /* 16FEA8 80131C68 AD69FFF8 */        sw $t1, -8($t3)
  /* 16FEAC 80131C6C 8D0AFFFC */        lw $t2, -4($t0) # D_ovl2_80116DD0 + -4
  /* 16FEB0 80131C70 150CFFF8 */       bne $t0, $t4, .L80131C54
  /* 16FEB4 80131C74 AD6AFFFC */        sw $t2, -4($t3)
  /* 16FEB8 80131C78 8D0A0000 */        lw $t2, ($t0) # D_ovl2_80116DD0 + 0
  /* 16FEBC 80131C7C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16FEC0 80131C80 3C128013 */       lui $s2, %hi(D_ovl45_80132428)
  /* 16FEC4 80131C84 4481B000 */      mtc1 $at, $f22 # 1.0 to cop1
  /* 16FEC8 80131C88 4480A000 */      mtc1 $zero, $f20
  /* 16FECC 80131C8C 26522428 */     addiu $s2, $s2, %lo(D_ovl45_80132428)
  /* 16FED0 80131C90 00008025 */        or $s0, $zero, $zero
  /* 16FED4 80131C94 27B3008C */     addiu $s3, $sp, 0x8c
  /* 16FED8 80131C98 24150004 */     addiu $s5, $zero, 4
  /* 16FEDC 80131C9C AD6A0000 */        sw $t2, ($t3)
  .L80131CA0:
  /* 16FEE0 80131CA0 240D0006 */     addiu $t5, $zero, 6
  /* 16FEE4 80131CA4 AFAD0048 */        sw $t5, 0x48($sp)
  /* 16FEE8 80131CA8 24040006 */     addiu $a0, $zero, 6
  /* 16FEEC 80131CAC 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16FEF0 80131CB0 02002825 */        or $a1, $s0, $zero
  /* 16FEF4 80131CB4 8E4E0000 */        lw $t6, ($s2) # D_ovl45_80132428 + 0
  /* 16FEF8 80131CB8 A3A2005F */        sb $v0, 0x5f($sp)
  /* 16FEFC 80131CBC E7B4004C */      swc1 $f20, 0x4c($sp)
  /* 16FF00 80131CC0 E7B40050 */      swc1 $f20, 0x50($sp)
  /* 16FF04 80131CC4 E7B40054 */      swc1 $f20, 0x54($sp)
  /* 16FF08 80131CC8 02802025 */        or $a0, $s4, $zero
  /* 16FF0C 80131CCC 0C035FCF */       jal ftManager_CreateFighter
  /* 16FF10 80131CD0 AFAE0080 */        sw $t6, 0x80($sp)
  /* 16FF14 80131CD4 00408825 */        or $s1, $v0, $zero
  /* 16FF18 80131CD8 00402025 */        or $a0, $v0, $zero
  /* 16FF1C 80131CDC 0C0E4173 */       jal func_ovl1_803905CC
  /* 16FF20 80131CE0 8E650000 */        lw $a1, ($s3)
  /* 16FF24 80131CE4 8E2F0074 */        lw $t7, 0x74($s1)
  /* 16FF28 80131CE8 26100001 */     addiu $s0, $s0, 1
  /* 16FF2C 80131CEC 26520004 */     addiu $s2, $s2, 4
  /* 16FF30 80131CF0 E5F60040 */      swc1 $f22, 0x40($t7)
  /* 16FF34 80131CF4 8E380074 */        lw $t8, 0x74($s1)
  /* 16FF38 80131CF8 26730004 */     addiu $s3, $s3, 4
  /* 16FF3C 80131CFC E7160044 */      swc1 $f22, 0x44($t8)
  /* 16FF40 80131D00 8E390074 */        lw $t9, 0x74($s1)
  /* 16FF44 80131D04 1615FFE6 */       bne $s0, $s5, .L80131CA0
  /* 16FF48 80131D08 E7360048 */      swc1 $f22, 0x48($t9)
  /* 16FF4C 80131D0C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16FF50 80131D10 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 16FF54 80131D14 D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 16FF58 80131D18 8FB00024 */        lw $s0, 0x24($sp)
  /* 16FF5C 80131D1C 8FB10028 */        lw $s1, 0x28($sp)
  /* 16FF60 80131D20 8FB2002C */        lw $s2, 0x2c($sp)
  /* 16FF64 80131D24 8FB30030 */        lw $s3, 0x30($sp)
  /* 16FF68 80131D28 8FB40034 */        lw $s4, 0x34($sp)
  /* 16FF6C 80131D2C 8FB50038 */        lw $s5, 0x38($sp)
  /* 16FF70 80131D30 03E00008 */        jr $ra
  /* 16FF74 80131D34 27BD00A0 */     addiu $sp, $sp, 0xa0

glabel func_ovl45_80131D38
  /* 16FF78 80131D38 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16FF7C 80131D3C AFBF001C */        sw $ra, 0x1c($sp)
  /* 16FF80 80131D40 00002025 */        or $a0, $zero, $zero
  /* 16FF84 80131D44 00002825 */        or $a1, $zero, $zero
  /* 16FF88 80131D48 24060014 */     addiu $a2, $zero, 0x14
  /* 16FF8C 80131D4C 0C00265A */       jal omMakeGObjCommon
  /* 16FF90 80131D50 3C078000 */       lui $a3, 0x8000
  /* 16FF94 80131D54 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16FF98 80131D58 240EFFFF */     addiu $t6, $zero, -1
  /* 16FF9C 80131D5C AFA20024 */        sw $v0, 0x24($sp)
  /* 16FFA0 80131D60 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16FFA4 80131D64 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16FFA8 80131D68 00402025 */        or $a0, $v0, $zero
  /* 16FFAC 80131D6C 2406001C */     addiu $a2, $zero, 0x1c
  /* 16FFB0 80131D70 0C00277D */       jal func_80009DF4
  /* 16FFB4 80131D74 3C078000 */       lui $a3, 0x8000
  /* 16FFB8 80131D78 3C0F8013 */       lui $t7, %hi(D_ovl45_801325FC)
  /* 16FFBC 80131D7C 8DEF25FC */        lw $t7, %lo(D_ovl45_801325FC)($t7)
  /* 16FFC0 80131D80 3C180002 */       lui $t8, %hi(D_NF_00026C88)
  /* 16FFC4 80131D84 27186C88 */     addiu $t8, $t8, %lo(D_NF_00026C88)
  /* 16FFC8 80131D88 8FA40024 */        lw $a0, 0x24($sp)
  /* 16FFCC 80131D8C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16FFD0 80131D90 01F82821 */      addu $a1, $t7, $t8
  /* 16FFD4 80131D94 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16FFD8 80131D98 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16FFDC 80131D9C 00000000 */       nop 
  /* 16FFE0 80131DA0 E4400058 */      swc1 $f0, 0x58($v0)
  /* 16FFE4 80131DA4 E440005C */      swc1 $f0, 0x5c($v0)
  /* 16FFE8 80131DA8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16FFEC 80131DAC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 16FFF0 80131DB0 03E00008 */        jr $ra
  /* 16FFF4 80131DB4 00000000 */       nop 

glabel func_ovl45_80131DB8
  /* 16FFF8 80131DB8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 16FFFC 80131DBC AFBF0024 */        sw $ra, 0x24($sp)
  /* 170000 80131DC0 AFB00020 */        sw $s0, 0x20($sp)
  /* 170004 80131DC4 00002025 */        or $a0, $zero, $zero
  /* 170008 80131DC8 00002825 */        or $a1, $zero, $zero
  /* 17000C 80131DCC 24060011 */     addiu $a2, $zero, 0x11
  /* 170010 80131DD0 0C00265A */       jal omMakeGObjCommon
  /* 170014 80131DD4 3C078000 */       lui $a3, 0x8000
  /* 170018 80131DD8 3C0E8013 */       lui $t6, %hi(D_ovl45_801325F8)
  /* 17001C 80131DDC 8DCE25F8 */        lw $t6, %lo(D_ovl45_801325F8)($t6)
  /* 170020 80131DE0 3C0F0001 */       lui $t7, %hi(D_NF_0000B990)
  /* 170024 80131DE4 25EFB990 */     addiu $t7, $t7, %lo(D_NF_0000B990)
  /* 170028 80131DE8 00408025 */        or $s0, $v0, $zero
  /* 17002C 80131DEC 00402025 */        or $a0, $v0, $zero
  /* 170030 80131DF0 00003025 */        or $a2, $zero, $zero
  /* 170034 80131DF4 0C003C48 */       jal func_8000F120
  /* 170038 80131DF8 01CF2821 */      addu $a1, $t6, $t7
  /* 17003C 80131DFC 3C058001 */       lui $a1, %hi(func_80014768)
  /* 170040 80131E00 2418FFFF */     addiu $t8, $zero, -1
  /* 170044 80131E04 AFB80010 */        sw $t8, 0x10($sp)
  /* 170048 80131E08 24A54768 */     addiu $a1, $a1, %lo(func_80014768)
  /* 17004C 80131E0C 02002025 */        or $a0, $s0, $zero
  /* 170050 80131E10 24060006 */     addiu $a2, $zero, 6
  /* 170054 80131E14 0C00277D */       jal func_80009DF4
  /* 170058 80131E18 3C078000 */       lui $a3, 0x8000
  /* 17005C 80131E1C 44800000 */      mtc1 $zero, $f0
  /* 170060 80131E20 8E190074 */        lw $t9, 0x74($s0)
  /* 170064 80131E24 3C0A8013 */       lui $t2, %hi(D_ovl45_801325F8)
  /* 170068 80131E28 3C0B0001 */       lui $t3, %hi(D_NF_0000BF70)
  /* 17006C 80131E2C E720001C */      swc1 $f0, 0x1c($t9)
  /* 170070 80131E30 8E080074 */        lw $t0, 0x74($s0)
  /* 170074 80131E34 256BBF70 */     addiu $t3, $t3, %lo(D_NF_0000BF70)
  /* 170078 80131E38 44060000 */      mfc1 $a2, $f0
  /* 17007C 80131E3C E5000020 */      swc1 $f0, 0x20($t0)
  /* 170080 80131E40 8E090074 */        lw $t1, 0x74($s0)
  /* 170084 80131E44 02002025 */        or $a0, $s0, $zero
  /* 170088 80131E48 E5200024 */      swc1 $f0, 0x24($t1)
  /* 17008C 80131E4C 8D4A25F8 */        lw $t2, %lo(D_ovl45_801325F8)($t2)
  /* 170090 80131E50 0C002F63 */       jal func_8000BD8C
  /* 170094 80131E54 014B2821 */      addu $a1, $t2, $t3
  /* 170098 80131E58 3C058001 */       lui $a1, %hi(func_8000DF34)
  /* 17009C 80131E5C 24A5DF34 */     addiu $a1, $a1, %lo(func_8000DF34)
  /* 1700A0 80131E60 02002025 */        or $a0, $s0, $zero
  /* 1700A4 80131E64 24060001 */     addiu $a2, $zero, 1
  /* 1700A8 80131E68 0C002062 */       jal omAddGObjCommonProc
  /* 1700AC 80131E6C 24070001 */     addiu $a3, $zero, 1
  /* 1700B0 80131E70 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1700B4 80131E74 8FB00020 */        lw $s0, 0x20($sp)
  /* 1700B8 80131E78 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1700BC 80131E7C 03E00008 */        jr $ra
  /* 1700C0 80131E80 00000000 */       nop 

glabel func_ovl45_80131E84
  /* 1700C4 80131E84 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 1700C8 80131E88 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 1700CC 80131E8C 3C190004 */       lui $t9, (0x48640 >> 16) # 296512
  /* 1700D0 80131E90 AFBF0044 */        sw $ra, 0x44($sp)
  /* 1700D4 80131E94 37398640 */       ori $t9, $t9, (0x48640 & 0xFFFF) # 296512
  /* 1700D8 80131E98 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 1700DC 80131E9C 240F0050 */     addiu $t7, $zero, 0x50
  /* 1700E0 80131EA0 24180000 */     addiu $t8, $zero, 0
  /* 1700E4 80131EA4 2408FFFF */     addiu $t0, $zero, -1
  /* 1700E8 80131EA8 24090001 */     addiu $t1, $zero, 1
  /* 1700EC 80131EAC 240A0001 */     addiu $t2, $zero, 1
  /* 1700F0 80131EB0 240B0001 */     addiu $t3, $zero, 1
  /* 1700F4 80131EB4 AFB00040 */        sw $s0, 0x40($sp)
  /* 1700F8 80131EB8 AFAB0030 */        sw $t3, 0x30($sp)
  /* 1700FC 80131EBC AFAA0028 */        sw $t2, 0x28($sp)
  /* 170100 80131EC0 AFA90024 */        sw $t1, 0x24($sp)
  /* 170104 80131EC4 AFA80020 */        sw $t0, 0x20($sp)
  /* 170108 80131EC8 AFB80018 */        sw $t8, 0x18($sp)
  /* 17010C 80131ECC AFAF0014 */        sw $t7, 0x14($sp)
  /* 170110 80131ED0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 170114 80131ED4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 170118 80131ED8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17011C 80131EDC AFA00034 */        sw $zero, 0x34($sp)
  /* 170120 80131EE0 24040401 */     addiu $a0, $zero, 0x401
  /* 170124 80131EE4 00002825 */        or $a1, $zero, $zero
  /* 170128 80131EE8 24060010 */     addiu $a2, $zero, 0x10
  /* 17012C 80131EEC 0C002E4F */       jal func_8000B93C
  /* 170130 80131EF0 3C078000 */       lui $a3, 0x8000
  /* 170134 80131EF4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 170138 80131EF8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17013C 80131EFC AFA2004C */        sw $v0, 0x4c($sp)
  /* 170140 80131F00 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 170144 80131F04 8C500074 */        lw $s0, 0x74($v0)
  /* 170148 80131F08 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 17014C 80131F0C 44050000 */      mfc1 $a1, $f0
  /* 170150 80131F10 44060000 */      mfc1 $a2, $f0
  /* 170154 80131F14 3C07439B */       lui $a3, 0x439b
  /* 170158 80131F18 26040008 */     addiu $a0, $s0, 8
  /* 17015C 80131F1C 0C001C20 */       jal func_80007080
  /* 170160 80131F20 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 170164 80131F24 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 170168 80131F28 44813000 */      mtc1 $at, $f6 # 128.0 to cop1
  /* 17016C 80131F2C 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 170170 80131F30 44814000 */      mtc1 $at, $f8 # 16384.0 to cop1
  /* 170174 80131F34 3C0C8013 */       lui $t4, %hi(D_ovl45_801325F8)
  /* 170178 80131F38 E6060028 */      swc1 $f6, 0x28($s0)
  /* 17017C 80131F3C E608002C */      swc1 $f8, 0x2c($s0)
  /* 170180 80131F40 8D8C25F8 */        lw $t4, %lo(D_ovl45_801325F8)($t4)
  /* 170184 80131F44 3C0D0001 */       lui $t5, %hi(D_NF_0000C940)
  /* 170188 80131F48 25ADC940 */     addiu $t5, $t5, %lo(D_NF_0000C940)
  /* 17018C 80131F4C 02002025 */        or $a0, $s0, $zero
  /* 170190 80131F50 24060000 */     addiu $a2, $zero, 0
  /* 170194 80131F54 0C003E8F */       jal func_8000FA3C
  /* 170198 80131F58 018D2821 */      addu $a1, $t4, $t5
  /* 17019C 80131F5C 3C058001 */       lui $a1, %hi(func_80010580)
  /* 1701A0 80131F60 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 1701A4 80131F64 8FA4004C */        lw $a0, 0x4c($sp)
  /* 1701A8 80131F68 24060001 */     addiu $a2, $zero, 1
  /* 1701AC 80131F6C 0C002062 */       jal omAddGObjCommonProc
  /* 1701B0 80131F70 24070001 */     addiu $a3, $zero, 1
  /* 1701B4 80131F74 0C004160 */       jal func_80010580
  /* 1701B8 80131F78 8FA4004C */        lw $a0, 0x4c($sp)
  /* 1701BC 80131F7C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 1701C0 80131F80 8FB00040 */        lw $s0, 0x40($sp)
  /* 1701C4 80131F84 27BD0050 */     addiu $sp, $sp, 0x50
  /* 1701C8 80131F88 03E00008 */        jr $ra
  /* 1701CC 80131F8C 00000000 */       nop 

glabel func_ovl45_80131F90
  /* 1701D0 80131F90 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1701D4 80131F94 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 1701D8 80131F98 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1701DC 80131F9C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 1701E0 80131FA0 240F005A */     addiu $t7, $zero, 0x5a
  /* 1701E4 80131FA4 24180000 */     addiu $t8, $zero, 0
  /* 1701E8 80131FA8 3C191000 */       lui $t9, 0x1000
  /* 1701EC 80131FAC 2408FFFF */     addiu $t0, $zero, -1
  /* 1701F0 80131FB0 24090001 */     addiu $t1, $zero, 1
  /* 1701F4 80131FB4 240A0001 */     addiu $t2, $zero, 1
  /* 1701F8 80131FB8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1701FC 80131FBC AFA90028 */        sw $t1, 0x28($sp)
  /* 170200 80131FC0 AFA80020 */        sw $t0, 0x20($sp)
  /* 170204 80131FC4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 170208 80131FC8 AFB80018 */        sw $t8, 0x18($sp)
  /* 17020C 80131FCC AFAF0014 */        sw $t7, 0x14($sp)
  /* 170210 80131FD0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 170214 80131FD4 AFA00024 */        sw $zero, 0x24($sp)
  /* 170218 80131FD8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17021C 80131FDC AFA00034 */        sw $zero, 0x34($sp)
  /* 170220 80131FE0 24040401 */     addiu $a0, $zero, 0x401
  /* 170224 80131FE4 00002825 */        or $a1, $zero, $zero
  /* 170228 80131FE8 24060010 */     addiu $a2, $zero, 0x10
  /* 17022C 80131FEC 0C002E4F */       jal func_8000B93C
  /* 170230 80131FF0 3C078000 */       lui $a3, 0x8000
  /* 170234 80131FF4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 170238 80131FF8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17023C 80131FFC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 170240 80132000 8C430074 */        lw $v1, 0x74($v0)
  /* 170244 80132004 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 170248 80132008 44050000 */      mfc1 $a1, $f0
  /* 17024C 8013200C 44060000 */      mfc1 $a2, $f0
  /* 170250 80132010 3C07439B */       lui $a3, 0x439b
  /* 170254 80132014 24640008 */     addiu $a0, $v1, 8
  /* 170258 80132018 0C001C20 */       jal func_80007080
  /* 17025C 8013201C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 170260 80132020 8FBF003C */        lw $ra, 0x3c($sp)
  /* 170264 80132024 27BD0040 */     addiu $sp, $sp, 0x40
  /* 170268 80132028 03E00008 */        jr $ra
  /* 17026C 8013202C 00000000 */       nop 

glabel func_ovl45_80132030
  /* 170270 80132030 3C018013 */       lui $at, %hi(D_ovl45_80132438)
  /* 170274 80132034 03E00008 */        jr $ra
  /* 170278 80132038 AC202438 */        sw $zero, %lo(D_ovl45_80132438)($at)

glabel func_ovl45_8013203C
  /* 17027C 8013203C 3C038013 */       lui $v1, %hi(D_ovl45_80132438)
  /* 170280 80132040 24632438 */     addiu $v1, $v1, %lo(D_ovl45_80132438)
  /* 170284 80132044 8C6E0000 */        lw $t6, ($v1) # D_ovl45_80132438 + 0
  /* 170288 80132048 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17028C 8013204C AFBF0014 */        sw $ra, 0x14($sp)
  /* 170290 80132050 25CF0001 */     addiu $t7, $t6, 1
  /* 170294 80132054 29E1000A */      slti $at, $t7, 0xa
  /* 170298 80132058 AFA40018 */        sw $a0, 0x18($sp)
  /* 17029C 8013205C 14200026 */      bnez $at, .L801320F8
  /* 1702A0 80132060 AC6F0000 */        sw $t7, ($v1) # D_ovl45_80132438 + 0
  /* 1702A4 80132064 3C068013 */       lui $a2, %hi(D_ovl45_8013243C)
  /* 1702A8 80132068 24C6243C */     addiu $a2, $a2, %lo(D_ovl45_8013243C)
  /* 1702AC 8013206C 8CC20000 */        lw $v0, ($a2) # D_ovl45_8013243C + 0
  /* 1702B0 80132070 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 1702B4 80132074 10400002 */      beqz $v0, .L80132080
  /* 1702B8 80132078 2459FFFF */     addiu $t9, $v0, -1
  /* 1702BC 8013207C ACD90000 */        sw $t9, ($a2) # D_ovl45_8013243C + 0
  .L80132080:
  /* 1702C0 80132080 0C0E4281 */       jal func_ovl1_80390A04
  /* 1702C4 80132084 2405000F */     addiu $a1, $zero, 0xf
  /* 1702C8 80132088 10400006 */      beqz $v0, .L801320A4
  /* 1702CC 8013208C 2404FFF1 */     addiu $a0, $zero, -0xf
  /* 1702D0 80132090 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 1702D4 80132094 2405000F */     addiu $a1, $zero, 0xf
  /* 1702D8 80132098 10400002 */      beqz $v0, .L801320A4
  /* 1702DC 8013209C 3C018013 */       lui $at, %hi(D_ovl45_8013243C)
  /* 1702E0 801320A0 AC20243C */        sw $zero, %lo(D_ovl45_8013243C)($at)
  .L801320A4:
  /* 1702E4 801320A4 0C0E41DB */       jal func_ovl1_8039076C
  /* 1702E8 801320A8 3404D000 */       ori $a0, $zero, 0xd000
  /* 1702EC 801320AC 10400007 */      beqz $v0, .L801320CC
  /* 1702F0 801320B0 24090001 */     addiu $t1, $zero, 1
  /* 1702F4 801320B4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 1702F8 801320B8 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1702FC 801320BC 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 170300 801320C0 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 170304 801320C4 0C00171D */       jal func_80005C74
  /* 170308 801320C8 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L801320CC:
  /* 17030C 801320CC 3C0A8013 */       lui $t2, %hi(D_ovl45_80132438)
  /* 170310 801320D0 8D4A2438 */        lw $t2, %lo(D_ovl45_80132438)($t2)
  /* 170314 801320D4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 170318 801320D8 240100A0 */     addiu $at, $zero, 0xa0
  /* 17031C 801320DC 15410006 */       bne $t2, $at, .L801320F8
  /* 170320 801320E0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 170324 801320E4 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 170328 801320E8 240C002C */     addiu $t4, $zero, 0x2c
  /* 17032C 801320EC A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 170330 801320F0 0C00171D */       jal func_80005C74
  /* 170334 801320F4 A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  .L801320F8:
  /* 170338 801320F8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17033C 801320FC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 170340 80132100 03E00008 */        jr $ra
  /* 170344 80132104 00000000 */       nop 

  /* 170348 80132108 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 17034C 8013210C 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 170350 80132110 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 170354 80132114 3C188013 */       lui $t8, %hi(D_ovl45_80132440)
  /* 170358 80132118 3C088013 */       lui $t0, %hi(D_ovl45_801325C0)
  /* 17035C 8013211C AFBF002C */        sw $ra, 0x2c($sp)
  /* 170360 80132120 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 170364 80132124 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 170368 80132128 27182440 */     addiu $t8, $t8, %lo(D_ovl45_80132440)
  /* 17036C 8013212C 24190030 */     addiu $t9, $zero, 0x30
  /* 170370 80132130 250825C0 */     addiu $t0, $t0, %lo(D_ovl45_801325C0)
  /* 170374 80132134 24090007 */     addiu $t1, $zero, 7
  /* 170378 80132138 AFB20028 */        sw $s2, 0x28($sp)
  /* 17037C 8013213C AFB10024 */        sw $s1, 0x24($sp)
  /* 170380 80132140 AFB00020 */        sw $s0, 0x20($sp)
  /* 170384 80132144 AFAE003C */        sw $t6, 0x3c($sp)
  /* 170388 80132148 AFAF0040 */        sw $t7, 0x40($sp)
  /* 17038C 8013214C AFA00044 */        sw $zero, 0x44($sp)
  /* 170390 80132150 AFA00048 */        sw $zero, 0x48($sp)
  /* 170394 80132154 AFB8004C */        sw $t8, 0x4c($sp)
  /* 170398 80132158 AFB90050 */        sw $t9, 0x50($sp)
  /* 17039C 8013215C AFA80054 */        sw $t0, 0x54($sp)
  /* 1703A0 80132160 AFA90058 */        sw $t1, 0x58($sp)
  /* 1703A4 80132164 0C0337DE */       jal rldm_initialize
  /* 1703A8 80132168 27A4003C */     addiu $a0, $sp, 0x3c
  /* 1703AC 8013216C 3C108013 */       lui $s0, %hi(D_ovl45_80132330)
  /* 1703B0 80132170 26102330 */     addiu $s0, $s0, %lo(D_ovl45_80132330)
  /* 1703B4 80132174 02002025 */        or $a0, $s0, $zero
  /* 1703B8 80132178 0C0337BB */       jal rldm_bytes_need_to_load
  /* 1703BC 8013217C 24050002 */     addiu $a1, $zero, 2
  /* 1703C0 80132180 00402025 */        or $a0, $v0, $zero
  /* 1703C4 80132184 0C001260 */       jal hal_alloc
  /* 1703C8 80132188 24050010 */     addiu $a1, $zero, 0x10
  /* 1703CC 8013218C 3C068013 */       lui $a2, %hi(D_ovl45_801325F8)
  /* 1703D0 80132190 24C625F8 */     addiu $a2, $a2, %lo(D_ovl45_801325F8)
  /* 1703D4 80132194 02002025 */        or $a0, $s0, $zero
  /* 1703D8 80132198 24050002 */     addiu $a1, $zero, 2
  /* 1703DC 8013219C 0C033781 */       jal rldm_load_files_into
  /* 1703E0 801321A0 00403825 */        or $a3, $v0, $zero
  /* 1703E4 801321A4 3C108000 */       lui $s0, 0x8000
  /* 1703E8 801321A8 3C058013 */       lui $a1, %hi(func_ovl45_8013203C)
  /* 1703EC 801321AC 24A5203C */     addiu $a1, $a1, %lo(func_ovl45_8013203C)
  /* 1703F0 801321B0 02003825 */        or $a3, $s0, $zero
  /* 1703F4 801321B4 00002025 */        or $a0, $zero, $zero
  /* 1703F8 801321B8 0C00265A */       jal omMakeGObjCommon
  /* 1703FC 801321BC 00003025 */        or $a2, $zero, $zero
  /* 170400 801321C0 00002025 */        or $a0, $zero, $zero
  /* 170404 801321C4 02002825 */        or $a1, $s0, $zero
  /* 170408 801321C8 24060064 */     addiu $a2, $zero, 0x64
  /* 17040C 801321CC 24070001 */     addiu $a3, $zero, 1
  /* 170410 801321D0 0C002E7F */       jal func_8000B9FC
  /* 170414 801321D4 AFA00010 */        sw $zero, 0x10($sp)
  /* 170418 801321D8 0C045624 */       jal func_ovl2_80115890
  /* 17041C 801321DC 00000000 */       nop 
  /* 170420 801321E0 0C04C80C */       jal func_ovl45_80132030
  /* 170424 801321E4 00000000 */       nop 
  /* 170428 801321E8 0C03F4C0 */       jal efManager_AllocUserData
  /* 17042C 801321EC 00000000 */       nop 
  /* 170430 801321F0 24040001 */     addiu $a0, $zero, 1
  /* 170434 801321F4 0C035C65 */       jal func_ovl2_800D7194
  /* 170438 801321F8 24050004 */     addiu $a1, $zero, 4
  /* 17043C 801321FC 0C035E1B */       jal func_ovl2_800D786C
  /* 170440 80132200 24040006 */     addiu $a0, $zero, 6
  /* 170444 80132204 3C108013 */       lui $s0, %hi(D_ovl45_80132428)
  /* 170448 80132208 3C128013 */       lui $s2, %hi(D_ovl45_80132438)
  /* 17044C 8013220C 3C118013 */       lui $s1, %hi(D_ovl2_80130D9C)
  /* 170450 80132210 26310D9C */     addiu $s1, $s1, %lo(D_ovl2_80130D9C)
  /* 170454 80132214 26522438 */     addiu $s2, $s2, %lo(D_ovl45_80132438)
  /* 170458 80132218 26102428 */     addiu $s0, $s0, %lo(D_ovl45_80132428)
  .L8013221C:
  /* 17045C 8013221C 8E240000 */        lw $a0, ($s1) # D_ovl2_80130D9C + 0
  /* 170460 80132220 0C001260 */       jal hal_alloc
  /* 170464 80132224 24050010 */     addiu $a1, $zero, 0x10
  /* 170468 80132228 26100004 */     addiu $s0, $s0, 4
  /* 17046C 8013222C 1612FFFB */       bne $s0, $s2, .L8013221C
  /* 170470 80132230 AE02FFFC */        sw $v0, -4($s0) # D_ovl45_80132428 + -4
  /* 170474 80132234 0C04C7A1 */       jal func_ovl45_80131E84
  /* 170478 80132238 00000000 */       nop 
  /* 17047C 8013223C 0C04C7E4 */       jal func_ovl45_80131F90
  /* 170480 80132240 00000000 */       nop 
  /* 170484 80132244 0C04C74E */       jal func_ovl45_80131D38
  /* 170488 80132248 00000000 */       nop 
  /* 17048C 8013224C 0C04C6D6 */       jal func_ovl45_80131B58
  /* 170490 80132250 00000000 */       nop 
  /* 170494 80132254 0C04C76E */       jal func_ovl45_80131DB8
  /* 170498 80132258 00000000 */       nop 
  /* 17049C 8013225C 0C04C6FB */       jal func_ovl45_80131BEC
  /* 1704A0 80132260 00000000 */       nop 
  /* 1704A4 80132264 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 1704A8 80132268 44816000 */      mtc1 $at, $f12 # 45.0 to cop1
  /* 1704AC 8013226C 240A00FF */     addiu $t2, $zero, 0xff
  /* 1704B0 80132270 240B00FF */     addiu $t3, $zero, 0xff
  /* 1704B4 80132274 AFAB0014 */        sw $t3, 0x14($sp)
  /* 1704B8 80132278 AFAA0010 */        sw $t2, 0x10($sp)
  /* 1704BC 8013227C 240600FF */     addiu $a2, $zero, 0xff
  /* 1704C0 80132280 240700FF */     addiu $a3, $zero, 0xff
  /* 1704C4 80132284 0C0E4138 */       jal func_ovl1_803904E0
  /* 1704C8 80132288 46006386 */     mov.s $f14, $f12
  /* 1704CC 8013228C 0C00024B */       jal func_8000092C
  /* 1704D0 80132290 00000000 */       nop 
  /* 1704D4 80132294 2C410C9E */     sltiu $at, $v0, 0xc9e
  /* 1704D8 80132298 50200007 */      beql $at, $zero, .L801322B8
  /* 1704DC 8013229C 8FBF002C */        lw $ra, 0x2c($sp)
  .L801322A0:
  /* 1704E0 801322A0 0C00024B */       jal func_8000092C
  /* 1704E4 801322A4 00000000 */       nop 
  /* 1704E8 801322A8 2C410C9E */     sltiu $at, $v0, 0xc9e
  /* 1704EC 801322AC 1420FFFC */      bnez $at, .L801322A0
  /* 1704F0 801322B0 00000000 */       nop 
  /* 1704F4 801322B4 8FBF002C */        lw $ra, 0x2c($sp)
  .L801322B8:
  /* 1704F8 801322B8 8FB00020 */        lw $s0, 0x20($sp)
  /* 1704FC 801322BC 8FB10024 */        lw $s1, 0x24($sp)
  /* 170500 801322C0 8FB20028 */        lw $s2, 0x28($sp)
  /* 170504 801322C4 03E00008 */        jr $ra
  /* 170508 801322C8 27BD0060 */     addiu $sp, $sp, 0x60

glabel intro_yoshi_nest_entry
  /* 17050C 801322CC 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 170510 801322D0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 170514 801322D4 3C048013 */       lui $a0, %hi(D_ovl45_80132378)
  /* 170518 801322D8 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 17051C 801322DC 24842378 */     addiu $a0, $a0, %lo(D_ovl45_80132378)
  /* 170520 801322E0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 170524 801322E4 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 170528 801322E8 0C001C09 */       jal func_80007024
  /* 17052C 801322EC AC8F000C */        sw $t7, 0xc($a0) # D_ovl45_80132378 + 12
  /* 170530 801322F0 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 170534 801322F4 3C198013 */       lui $t9, %hi(D_NF_80132600)
  /* 170538 801322F8 3C048013 */       lui $a0, %hi(D_ovl45_80132394)
  /* 17053C 801322FC 27392600 */     addiu $t9, $t9, %lo(D_NF_80132600)
  /* 170540 80132300 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 170544 80132304 24842394 */     addiu $a0, $a0, %lo(D_ovl45_80132394)
  /* 170548 80132308 03194023 */      subu $t0, $t8, $t9
  /* 17054C 8013230C 0C001A0F */       jal func_8000683C
  /* 170550 80132310 AC880010 */        sw $t0, 0x10($a0) # D_ovl45_80132394 + 16
  /* 170554 80132314 8FBF0014 */        lw $ra, 0x14($sp)
  /* 170558 80132318 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17055C 8013231C 03E00008 */        jr $ra
  /* 170560 80132320 00000000 */       nop 

  /* 170564 80132324 00000000 */       nop 
  /* 170568 80132328 00000000 */       nop 
  /* 17056C 8013232C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl45_80132330   # Routine parsed as data
#  /* 170570 80132330 00000043 */       sra $zero, $zero, 1
