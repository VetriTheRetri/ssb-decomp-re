.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132B90

glabel func_ovl17_80131B00
  /* 11CA90 80131B00 8C830000 */        lw $v1, ($a0)
  /* 11CA94 80131B04 3C188013 */       lui $t8, %hi(D_ovl17_80132BB0)
  /* 11CA98 80131B08 27182BB0 */     addiu $t8, $t8, %lo(D_ovl17_80132BB0)
  /* 11CA9C 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 11CAA0 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 11CAA4 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 11CAA8 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 11CAAC 80131B1C 03E00008 */        jr $ra
  /* 11CAB0 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl17_80131B24
  /* 11CAB4 80131B24 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11CAB8 80131B28 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11CABC 80131B2C 00002025 */        or $a0, $zero, $zero
  /* 11CAC0 80131B30 00002825 */        or $a1, $zero, $zero
  /* 11CAC4 80131B34 24060003 */     addiu $a2, $zero, 3
  /* 11CAC8 80131B38 0C00265A */       jal omMakeGObjCommon
  /* 11CACC 80131B3C 3C078000 */       lui $a3, 0x8000
  /* 11CAD0 80131B40 3C018013 */       lui $at, %hi(D_ovl17_80132C8C)
  /* 11CAD4 80131B44 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11CAD8 80131B48 240EFFFF */     addiu $t6, $zero, -1
  /* 11CADC 80131B4C AC222C8C */        sw $v0, %lo(D_ovl17_80132C8C)($at)
  /* 11CAE0 80131B50 AFA20024 */        sw $v0, 0x24($sp)
  /* 11CAE4 80131B54 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11CAE8 80131B58 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11CAEC 80131B5C 00402025 */        or $a0, $v0, $zero
  /* 11CAF0 80131B60 24060001 */     addiu $a2, $zero, 1
  /* 11CAF4 80131B64 0C00277D */       jal func_80009DF4
  /* 11CAF8 80131B68 3C078000 */       lui $a3, 0x8000
  /* 11CAFC 80131B6C 3C0F8013 */       lui $t7, %hi(D_ovl17_80132C88)
  /* 11CB00 80131B70 8DEF2C88 */        lw $t7, %lo(D_ovl17_80132C88)($t7)
  /* 11CB04 80131B74 8FA40024 */        lw $a0, 0x24($sp)
  /* 11CB08 80131B78 3C0C8013 */       lui $t4, 0x8013
  /* 11CB0C 80131B7C 15E0001A */      bnez $t7, .L80131BE8
  /* 11CB10 80131B80 3C0D0000 */       lui $t5, 0
  /* 11CB14 80131B84 3C188013 */       lui $t8, %hi(D_ovl17_80132D6C)
  /* 11CB18 80131B88 8F182D6C */        lw $t8, %lo(D_ovl17_80132D6C)($t8)
  /* 11CB1C 80131B8C 3C190000 */       lui $t9, %hi(D_NF_00001990)
  /* 11CB20 80131B90 27391990 */     addiu $t9, $t9, %lo(D_NF_00001990)
  /* 11CB24 80131B94 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CB28 80131B98 03192821 */      addu $a1, $t8, $t9
  /* 11CB2C 80131B9C 94480024 */       lhu $t0, 0x24($v0)
  /* 11CB30 80131BA0 3C014329 */       lui $at, (0x43290000 >> 16) # 169.0
  /* 11CB34 80131BA4 44812000 */      mtc1 $at, $f4 # 169.0 to cop1
  /* 11CB38 80131BA8 3C0141D8 */       lui $at, (0x41D80000 >> 16) # 27.0
  /* 11CB3C 80131BAC 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11CB40 80131BB0 44813000 */      mtc1 $at, $f6 # 27.0 to cop1
  /* 11CB44 80131BB4 240300FF */     addiu $v1, $zero, 0xff
  /* 11CB48 80131BB8 A44A0024 */        sh $t2, 0x24($v0)
  /* 11CB4C 80131BBC 354B0001 */       ori $t3, $t2, 1
  /* 11CB50 80131BC0 A44B0024 */        sh $t3, 0x24($v0)
  /* 11CB54 80131BC4 A0430028 */        sb $v1, 0x28($v0)
  /* 11CB58 80131BC8 A0430029 */        sb $v1, 0x29($v0)
  /* 11CB5C 80131BCC A043002A */        sb $v1, 0x2a($v0)
  /* 11CB60 80131BD0 A0400060 */        sb $zero, 0x60($v0)
  /* 11CB64 80131BD4 A0400061 */        sb $zero, 0x61($v0)
  /* 11CB68 80131BD8 A0400062 */        sb $zero, 0x62($v0)
  /* 11CB6C 80131BDC E4440058 */      swc1 $f4, 0x58($v0)
  /* 11CB70 80131BE0 10000014 */         b .L80131C34
  /* 11CB74 80131BE4 E446005C */      swc1 $f6, 0x5c($v0)
  .L80131BE8:
  /* 11CB78 80131BE8 8D8C2D6C */        lw $t4, 0x2d6c($t4)
  /* 11CB7C 80131BEC 25AD6048 */     addiu $t5, $t5, 0x6048
  /* 11CB80 80131BF0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CB84 80131BF4 018D2821 */      addu $a1, $t4, $t5
  /* 11CB88 80131BF8 944E0024 */       lhu $t6, 0x24($v0)
  /* 11CB8C 80131BFC 3C014329 */       lui $at, (0x43290000 >> 16) # 169.0
  /* 11CB90 80131C00 44814000 */      mtc1 $at, $f8 # 169.0 to cop1
  /* 11CB94 80131C04 3C0141D8 */       lui $at, (0x41D80000 >> 16) # 27.0
  /* 11CB98 80131C08 44815000 */      mtc1 $at, $f10 # 27.0 to cop1
  /* 11CB9C 80131C0C 24030096 */     addiu $v1, $zero, 0x96
  /* 11CBA0 80131C10 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11CBA4 80131C14 A4580024 */        sh $t8, 0x24($v0)
  /* 11CBA8 80131C18 37190001 */       ori $t9, $t8, 1
  /* 11CBAC 80131C1C A4590024 */        sh $t9, 0x24($v0)
  /* 11CBB0 80131C20 A0430028 */        sb $v1, 0x28($v0)
  /* 11CBB4 80131C24 A0430029 */        sb $v1, 0x29($v0)
  /* 11CBB8 80131C28 A043002A */        sb $v1, 0x2a($v0)
  /* 11CBBC 80131C2C E4480058 */      swc1 $f8, 0x58($v0)
  /* 11CBC0 80131C30 E44A005C */      swc1 $f10, 0x5c($v0)
  .L80131C34:
  /* 11CBC4 80131C34 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11CBC8 80131C38 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11CBCC 80131C3C 03E00008 */        jr $ra
  /* 11CBD0 80131C40 00000000 */       nop 

glabel func_ovl17_80131C44
  /* 11CBD4 80131C44 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11CBD8 80131C48 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11CBDC 80131C4C 00002025 */        or $a0, $zero, $zero
  /* 11CBE0 80131C50 00002825 */        or $a1, $zero, $zero
  /* 11CBE4 80131C54 24060003 */     addiu $a2, $zero, 3
  /* 11CBE8 80131C58 0C00265A */       jal omMakeGObjCommon
  /* 11CBEC 80131C5C 3C078000 */       lui $a3, 0x8000
  /* 11CBF0 80131C60 3C018013 */       lui $at, %hi(D_ovl17_80132C90)
  /* 11CBF4 80131C64 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11CBF8 80131C68 240EFFFF */     addiu $t6, $zero, -1
  /* 11CBFC 80131C6C AC222C90 */        sw $v0, %lo(D_ovl17_80132C90)($at)
  /* 11CC00 80131C70 AFA20024 */        sw $v0, 0x24($sp)
  /* 11CC04 80131C74 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11CC08 80131C78 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11CC0C 80131C7C 00402025 */        or $a0, $v0, $zero
  /* 11CC10 80131C80 24060001 */     addiu $a2, $zero, 1
  /* 11CC14 80131C84 0C00277D */       jal func_80009DF4
  /* 11CC18 80131C88 3C078000 */       lui $a3, 0x8000
  /* 11CC1C 80131C8C 3C0F8013 */       lui $t7, %hi(D_ovl17_80132C88)
  /* 11CC20 80131C90 8DEF2C88 */        lw $t7, %lo(D_ovl17_80132C88)($t7)
  /* 11CC24 80131C94 24010001 */     addiu $at, $zero, 1
  /* 11CC28 80131C98 8FA40024 */        lw $a0, 0x24($sp)
  /* 11CC2C 80131C9C 15E1001A */       bne $t7, $at, .L80131D08
  /* 11CC30 80131CA0 3C0C8013 */       lui $t4, 0x8013
  /* 11CC34 80131CA4 3C188013 */       lui $t8, %hi(D_ovl17_80132D6C)
  /* 11CC38 80131CA8 8F182D6C */        lw $t8, %lo(D_ovl17_80132D6C)($t8)
  /* 11CC3C 80131CAC 3C190000 */       lui $t9, %hi(D_NF_00002520)
  /* 11CC40 80131CB0 27392520 */     addiu $t9, $t9, %lo(D_NF_00002520)
  /* 11CC44 80131CB4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CC48 80131CB8 03192821 */      addu $a1, $t8, $t9
  /* 11CC4C 80131CBC 94480024 */       lhu $t0, 0x24($v0)
  /* 11CC50 80131CC0 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 11CC54 80131CC4 44812000 */      mtc1 $at, $f4 # 128.0 to cop1
  /* 11CC58 80131CC8 3C014280 */       lui $at, (0x42800000 >> 16) # 64.0
  /* 11CC5C 80131CCC 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11CC60 80131CD0 44813000 */      mtc1 $at, $f6 # 64.0 to cop1
  /* 11CC64 80131CD4 240300FF */     addiu $v1, $zero, 0xff
  /* 11CC68 80131CD8 A44A0024 */        sh $t2, 0x24($v0)
  /* 11CC6C 80131CDC 354B0001 */       ori $t3, $t2, 1
  /* 11CC70 80131CE0 A44B0024 */        sh $t3, 0x24($v0)
  /* 11CC74 80131CE4 A0430028 */        sb $v1, 0x28($v0)
  /* 11CC78 80131CE8 A0430029 */        sb $v1, 0x29($v0)
  /* 11CC7C 80131CEC A043002A */        sb $v1, 0x2a($v0)
  /* 11CC80 80131CF0 A0400060 */        sb $zero, 0x60($v0)
  /* 11CC84 80131CF4 A0400061 */        sb $zero, 0x61($v0)
  /* 11CC88 80131CF8 A0400062 */        sb $zero, 0x62($v0)
  /* 11CC8C 80131CFC E4440058 */      swc1 $f4, 0x58($v0)
  /* 11CC90 80131D00 10000015 */         b .L80131D58
  /* 11CC94 80131D04 E446005C */      swc1 $f6, 0x5c($v0)
  .L80131D08:
  /* 11CC98 80131D08 8D8C2D6C */        lw $t4, 0x2d6c($t4)
  /* 11CC9C 80131D0C 3C0D0000 */       lui $t5, %hi(D_NF_00006708)
  /* 11CCA0 80131D10 25AD6708 */     addiu $t5, $t5, %lo(D_NF_00006708)
  /* 11CCA4 80131D14 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CCA8 80131D18 018D2821 */      addu $a1, $t4, $t5
  /* 11CCAC 80131D1C 944E0024 */       lhu $t6, 0x24($v0)
  /* 11CCB0 80131D20 3C014300 */       lui $at, (0x43000000 >> 16) # 128.0
  /* 11CCB4 80131D24 44814000 */      mtc1 $at, $f8 # 128.0 to cop1
  /* 11CCB8 80131D28 3C014280 */       lui $at, (0x42800000 >> 16) # 64.0
  /* 11CCBC 80131D2C 44815000 */      mtc1 $at, $f10 # 64.0 to cop1
  /* 11CCC0 80131D30 24030096 */     addiu $v1, $zero, 0x96
  /* 11CCC4 80131D34 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11CCC8 80131D38 A4580024 */        sh $t8, 0x24($v0)
  /* 11CCCC 80131D3C 37190001 */       ori $t9, $t8, 1
  /* 11CCD0 80131D40 A4590024 */        sh $t9, 0x24($v0)
  /* 11CCD4 80131D44 A0430028 */        sb $v1, 0x28($v0)
  /* 11CCD8 80131D48 A0430029 */        sb $v1, 0x29($v0)
  /* 11CCDC 80131D4C A043002A */        sb $v1, 0x2a($v0)
  /* 11CCE0 80131D50 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11CCE4 80131D54 E44A005C */      swc1 $f10, 0x5c($v0)
  .L80131D58:
  /* 11CCE8 80131D58 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11CCEC 80131D5C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11CCF0 80131D60 03E00008 */        jr $ra
  /* 11CCF4 80131D64 00000000 */       nop 

glabel func_ovl17_80131D68
  /* 11CCF8 80131D68 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11CCFC 80131D6C AFBF001C */        sw $ra, 0x1c($sp)
  /* 11CD00 80131D70 00002025 */        or $a0, $zero, $zero
  /* 11CD04 80131D74 00002825 */        or $a1, $zero, $zero
  /* 11CD08 80131D78 24060003 */     addiu $a2, $zero, 3
  /* 11CD0C 80131D7C 0C00265A */       jal omMakeGObjCommon
  /* 11CD10 80131D80 3C078000 */       lui $a3, 0x8000
  /* 11CD14 80131D84 3C018013 */       lui $at, %hi(D_ovl17_80132C94)
  /* 11CD18 80131D88 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11CD1C 80131D8C 240EFFFF */     addiu $t6, $zero, -1
  /* 11CD20 80131D90 AC222C94 */        sw $v0, %lo(D_ovl17_80132C94)($at)
  /* 11CD24 80131D94 AFA20024 */        sw $v0, 0x24($sp)
  /* 11CD28 80131D98 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11CD2C 80131D9C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11CD30 80131DA0 00402025 */        or $a0, $v0, $zero
  /* 11CD34 80131DA4 24060001 */     addiu $a2, $zero, 1
  /* 11CD38 80131DA8 0C00277D */       jal func_80009DF4
  /* 11CD3C 80131DAC 3C078000 */       lui $a3, 0x8000
  /* 11CD40 80131DB0 3C0F8013 */       lui $t7, %hi(D_ovl17_80132C88)
  /* 11CD44 80131DB4 8DEF2C88 */        lw $t7, %lo(D_ovl17_80132C88)($t7)
  /* 11CD48 80131DB8 24010002 */     addiu $at, $zero, 2
  /* 11CD4C 80131DBC 8FA40024 */        lw $a0, 0x24($sp)
  /* 11CD50 80131DC0 15E1001A */       bne $t7, $at, .L80131E2C
  /* 11CD54 80131DC4 3C0C8013 */       lui $t4, 0x8013
  /* 11CD58 80131DC8 3C188013 */       lui $t8, %hi(D_ovl17_80132D6C)
  /* 11CD5C 80131DCC 8F182D6C */        lw $t8, %lo(D_ovl17_80132D6C)($t8)
  /* 11CD60 80131DD0 3C190000 */       lui $t9, %hi(D_NF_00004C80)
  /* 11CD64 80131DD4 27394C80 */     addiu $t9, $t9, %lo(D_NF_00004C80)
  /* 11CD68 80131DD8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CD6C 80131DDC 03192821 */      addu $a1, $t8, $t9
  /* 11CD70 80131DE0 94480024 */       lhu $t0, 0x24($v0)
  /* 11CD74 80131DE4 3C0142AE */       lui $at, (0x42AE0000 >> 16) # 87.0
  /* 11CD78 80131DE8 44812000 */      mtc1 $at, $f4 # 87.0 to cop1
  /* 11CD7C 80131DEC 3C0142CA */       lui $at, (0x42CA0000 >> 16) # 101.0
  /* 11CD80 80131DF0 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11CD84 80131DF4 44813000 */      mtc1 $at, $f6 # 101.0 to cop1
  /* 11CD88 80131DF8 240300FF */     addiu $v1, $zero, 0xff
  /* 11CD8C 80131DFC A44A0024 */        sh $t2, 0x24($v0)
  /* 11CD90 80131E00 354B0001 */       ori $t3, $t2, 1
  /* 11CD94 80131E04 A44B0024 */        sh $t3, 0x24($v0)
  /* 11CD98 80131E08 A0430028 */        sb $v1, 0x28($v0)
  /* 11CD9C 80131E0C A0430029 */        sb $v1, 0x29($v0)
  /* 11CDA0 80131E10 A043002A */        sb $v1, 0x2a($v0)
  /* 11CDA4 80131E14 A0400060 */        sb $zero, 0x60($v0)
  /* 11CDA8 80131E18 A0400061 */        sb $zero, 0x61($v0)
  /* 11CDAC 80131E1C A0400062 */        sb $zero, 0x62($v0)
  /* 11CDB0 80131E20 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11CDB4 80131E24 10000015 */         b .L80131E7C
  /* 11CDB8 80131E28 E446005C */      swc1 $f6, 0x5c($v0)
  .L80131E2C:
  /* 11CDBC 80131E2C 8D8C2D6C */        lw $t4, 0x2d6c($t4)
  /* 11CDC0 80131E30 3C0D0001 */       lui $t5, %hi(D_NF_000082F8)
  /* 11CDC4 80131E34 25AD82F8 */     addiu $t5, $t5, %lo(D_NF_000082F8)
  /* 11CDC8 80131E38 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CDCC 80131E3C 018D2821 */      addu $a1, $t4, $t5
  /* 11CDD0 80131E40 944E0024 */       lhu $t6, 0x24($v0)
  /* 11CDD4 80131E44 3C0142AE */       lui $at, (0x42AE0000 >> 16) # 87.0
  /* 11CDD8 80131E48 44814000 */      mtc1 $at, $f8 # 87.0 to cop1
  /* 11CDDC 80131E4C 3C0142CA */       lui $at, (0x42CA0000 >> 16) # 101.0
  /* 11CDE0 80131E50 44815000 */      mtc1 $at, $f10 # 101.0 to cop1
  /* 11CDE4 80131E54 24030096 */     addiu $v1, $zero, 0x96
  /* 11CDE8 80131E58 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11CDEC 80131E5C A4580024 */        sh $t8, 0x24($v0)
  /* 11CDF0 80131E60 37190001 */       ori $t9, $t8, 1
  /* 11CDF4 80131E64 A4590024 */        sh $t9, 0x24($v0)
  /* 11CDF8 80131E68 A0430028 */        sb $v1, 0x28($v0)
  /* 11CDFC 80131E6C A0430029 */        sb $v1, 0x29($v0)
  /* 11CE00 80131E70 A043002A */        sb $v1, 0x2a($v0)
  /* 11CE04 80131E74 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11CE08 80131E78 E44A005C */      swc1 $f10, 0x5c($v0)
  .L80131E7C:
  /* 11CE0C 80131E7C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11CE10 80131E80 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11CE14 80131E84 03E00008 */        jr $ra
  /* 11CE18 80131E88 00000000 */       nop 

glabel func_ovl17_80131E8C
  /* 11CE1C 80131E8C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11CE20 80131E90 AFBF001C */        sw $ra, 0x1c($sp)
  /* 11CE24 80131E94 00002025 */        or $a0, $zero, $zero
  /* 11CE28 80131E98 00002825 */        or $a1, $zero, $zero
  /* 11CE2C 80131E9C 24060003 */     addiu $a2, $zero, 3
  /* 11CE30 80131EA0 0C00265A */       jal omMakeGObjCommon
  /* 11CE34 80131EA4 3C078000 */       lui $a3, 0x8000
  /* 11CE38 80131EA8 3C018013 */       lui $at, %hi(D_ovl17_80132C98)
  /* 11CE3C 80131EAC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11CE40 80131EB0 240EFFFF */     addiu $t6, $zero, -1
  /* 11CE44 80131EB4 AC222C98 */        sw $v0, %lo(D_ovl17_80132C98)($at)
  /* 11CE48 80131EB8 AFA20024 */        sw $v0, 0x24($sp)
  /* 11CE4C 80131EBC AFAE0010 */        sw $t6, 0x10($sp)
  /* 11CE50 80131EC0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11CE54 80131EC4 00402025 */        or $a0, $v0, $zero
  /* 11CE58 80131EC8 24060001 */     addiu $a2, $zero, 1
  /* 11CE5C 80131ECC 0C00277D */       jal func_80009DF4
  /* 11CE60 80131ED0 3C078000 */       lui $a3, 0x8000
  /* 11CE64 80131ED4 3C0F8013 */       lui $t7, %hi(D_ovl17_80132C88)
  /* 11CE68 80131ED8 8DEF2C88 */        lw $t7, %lo(D_ovl17_80132C88)($t7)
  /* 11CE6C 80131EDC 24010003 */     addiu $at, $zero, 3
  /* 11CE70 80131EE0 8FA40024 */        lw $a0, 0x24($sp)
  /* 11CE74 80131EE4 15E1001A */       bne $t7, $at, .L80131F50
  /* 11CE78 80131EE8 3C0C8013 */       lui $t4, 0x8013
  /* 11CE7C 80131EEC 3C188013 */       lui $t8, %hi(D_ovl17_80132D6C)
  /* 11CE80 80131EF0 8F182D6C */        lw $t8, %lo(D_ovl17_80132D6C)($t8)
  /* 11CE84 80131EF4 3C190000 */       lui $t9, %hi(D_NF_000030B0)
  /* 11CE88 80131EF8 273930B0 */     addiu $t9, $t9, %lo(D_NF_000030B0)
  /* 11CE8C 80131EFC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CE90 80131F00 03192821 */      addu $a1, $t8, $t9
  /* 11CE94 80131F04 94480024 */       lhu $t0, 0x24($v0)
  /* 11CE98 80131F08 3C014238 */       lui $at, (0x42380000 >> 16) # 46.0
  /* 11CE9C 80131F0C 44812000 */      mtc1 $at, $f4 # 46.0 to cop1
  /* 11CEA0 80131F10 3C01430A */       lui $at, (0x430A0000 >> 16) # 138.0
  /* 11CEA4 80131F14 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11CEA8 80131F18 44813000 */      mtc1 $at, $f6 # 138.0 to cop1
  /* 11CEAC 80131F1C 240300FF */     addiu $v1, $zero, 0xff
  /* 11CEB0 80131F20 A44A0024 */        sh $t2, 0x24($v0)
  /* 11CEB4 80131F24 354B0001 */       ori $t3, $t2, 1
  /* 11CEB8 80131F28 A44B0024 */        sh $t3, 0x24($v0)
  /* 11CEBC 80131F2C A0430028 */        sb $v1, 0x28($v0)
  /* 11CEC0 80131F30 A0430029 */        sb $v1, 0x29($v0)
  /* 11CEC4 80131F34 A043002A */        sb $v1, 0x2a($v0)
  /* 11CEC8 80131F38 A0400060 */        sb $zero, 0x60($v0)
  /* 11CECC 80131F3C A0400061 */        sb $zero, 0x61($v0)
  /* 11CED0 80131F40 A0400062 */        sb $zero, 0x62($v0)
  /* 11CED4 80131F44 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11CED8 80131F48 10000015 */         b .L80131FA0
  /* 11CEDC 80131F4C E446005C */      swc1 $f6, 0x5c($v0)
  .L80131F50:
  /* 11CEE0 80131F50 8D8C2D6C */        lw $t4, 0x2d6c($t4)
  /* 11CEE4 80131F54 3C0D0000 */       lui $t5, %hi(D_NF_00006DC8)
  /* 11CEE8 80131F58 25AD6DC8 */     addiu $t5, $t5, %lo(D_NF_00006DC8)
  /* 11CEEC 80131F5C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CEF0 80131F60 018D2821 */      addu $a1, $t4, $t5
  /* 11CEF4 80131F64 944E0024 */       lhu $t6, 0x24($v0)
  /* 11CEF8 80131F68 3C014238 */       lui $at, (0x42380000 >> 16) # 46.0
  /* 11CEFC 80131F6C 44814000 */      mtc1 $at, $f8 # 46.0 to cop1
  /* 11CF00 80131F70 3C01430A */       lui $at, (0x430A0000 >> 16) # 138.0
  /* 11CF04 80131F74 44815000 */      mtc1 $at, $f10 # 138.0 to cop1
  /* 11CF08 80131F78 24030096 */     addiu $v1, $zero, 0x96
  /* 11CF0C 80131F7C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11CF10 80131F80 A4580024 */        sh $t8, 0x24($v0)
  /* 11CF14 80131F84 37190001 */       ori $t9, $t8, 1
  /* 11CF18 80131F88 A4590024 */        sh $t9, 0x24($v0)
  /* 11CF1C 80131F8C A0430028 */        sb $v1, 0x28($v0)
  /* 11CF20 80131F90 A0430029 */        sb $v1, 0x29($v0)
  /* 11CF24 80131F94 A043002A */        sb $v1, 0x2a($v0)
  /* 11CF28 80131F98 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11CF2C 80131F9C E44A005C */      swc1 $f10, 0x5c($v0)
  .L80131FA0:
  /* 11CF30 80131FA0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11CF34 80131FA4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11CF38 80131FA8 03E00008 */        jr $ra
  /* 11CF3C 80131FAC 00000000 */       nop 

glabel func_ovl17_80131FB0
  /* 11CF40 80131FB0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11CF44 80131FB4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 11CF48 80131FB8 AFB00020 */        sw $s0, 0x20($sp)
  /* 11CF4C 80131FBC 00002025 */        or $a0, $zero, $zero
  /* 11CF50 80131FC0 00002825 */        or $a1, $zero, $zero
  /* 11CF54 80131FC4 24060003 */     addiu $a2, $zero, 3
  /* 11CF58 80131FC8 0C00265A */       jal omMakeGObjCommon
  /* 11CF5C 80131FCC 3C078000 */       lui $a3, 0x8000
  /* 11CF60 80131FD0 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11CF64 80131FD4 240EFFFF */     addiu $t6, $zero, -1
  /* 11CF68 80131FD8 00408025 */        or $s0, $v0, $zero
  /* 11CF6C 80131FDC AFAE0010 */        sw $t6, 0x10($sp)
  /* 11CF70 80131FE0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11CF74 80131FE4 00402025 */        or $a0, $v0, $zero
  /* 11CF78 80131FE8 24060001 */     addiu $a2, $zero, 1
  /* 11CF7C 80131FEC 0C00277D */       jal func_80009DF4
  /* 11CF80 80131FF0 3C078000 */       lui $a3, 0x8000
  /* 11CF84 80131FF4 3C0F8013 */       lui $t7, %hi(D_ovl17_80132D6C)
  /* 11CF88 80131FF8 8DEF2D6C */        lw $t7, %lo(D_ovl17_80132D6C)($t7)
  /* 11CF8C 80131FFC 3C180000 */       lui $t8, %hi(D_NF_00005570)
  /* 11CF90 80132000 27185570 */     addiu $t8, $t8, %lo(D_NF_00005570)
  /* 11CF94 80132004 02002025 */        or $a0, $s0, $zero
  /* 11CF98 80132008 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CF9C 8013200C 01F82821 */      addu $a1, $t7, $t8
  /* 11CFA0 80132010 94590024 */       lhu $t9, 0x24($v0)
  /* 11CFA4 80132014 3C014360 */       lui $at, (0x43600000 >> 16) # 224.0
  /* 11CFA8 80132018 44812000 */      mtc1 $at, $f4 # 224.0 to cop1
  /* 11CFAC 8013201C 3C014250 */       lui $at, (0x42500000 >> 16) # 52.0
  /* 11CFB0 80132020 44813000 */      mtc1 $at, $f6 # 52.0 to cop1
  /* 11CFB4 80132024 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 11CFB8 80132028 A4490024 */        sh $t1, 0x24($v0)
  /* 11CFBC 8013202C 352A0001 */       ori $t2, $t1, 1
  /* 11CFC0 80132030 240B00FF */     addiu $t3, $zero, 0xff
  /* 11CFC4 80132034 A44A0024 */        sh $t2, 0x24($v0)
  /* 11CFC8 80132038 A04B0028 */        sb $t3, 0x28($v0)
  /* 11CFCC 8013203C A0400029 */        sb $zero, 0x29($v0)
  /* 11CFD0 80132040 A040002A */        sb $zero, 0x2a($v0)
  /* 11CFD4 80132044 3C0C8013 */       lui $t4, %hi(D_ovl17_80132D6C)
  /* 11CFD8 80132048 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11CFDC 8013204C E446005C */      swc1 $f6, 0x5c($v0)
  /* 11CFE0 80132050 8D8C2D6C */        lw $t4, %lo(D_ovl17_80132D6C)($t4)
  /* 11CFE4 80132054 3C0D0000 */       lui $t5, %hi(D_NF_000057E0)
  /* 11CFE8 80132058 25AD57E0 */     addiu $t5, $t5, %lo(D_NF_000057E0)
  /* 11CFEC 8013205C 02002025 */        or $a0, $s0, $zero
  /* 11CFF0 80132060 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11CFF4 80132064 018D2821 */      addu $a1, $t4, $t5
  /* 11CFF8 80132068 944E0024 */       lhu $t6, 0x24($v0)
  /* 11CFFC 8013206C 3C014337 */       lui $at, (0x43370000 >> 16) # 183.0
  /* 11D000 80132070 44814000 */      mtc1 $at, $f8 # 183.0 to cop1
  /* 11D004 80132074 3C0142B2 */       lui $at, (0x42B20000 >> 16) # 89.0
  /* 11D008 80132078 44815000 */      mtc1 $at, $f10 # 89.0 to cop1
  /* 11D00C 8013207C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 11D010 80132080 A4580024 */        sh $t8, 0x24($v0)
  /* 11D014 80132084 37190001 */       ori $t9, $t8, 1
  /* 11D018 80132088 240800FF */     addiu $t0, $zero, 0xff
  /* 11D01C 8013208C A4590024 */        sh $t9, 0x24($v0)
  /* 11D020 80132090 A0480028 */        sb $t0, 0x28($v0)
  /* 11D024 80132094 A0400029 */        sb $zero, 0x29($v0)
  /* 11D028 80132098 A040002A */        sb $zero, 0x2a($v0)
  /* 11D02C 8013209C 3C098013 */       lui $t1, %hi(D_ovl17_80132D6C)
  /* 11D030 801320A0 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11D034 801320A4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11D038 801320A8 8D292D6C */        lw $t1, %lo(D_ovl17_80132D6C)($t1)
  /* 11D03C 801320AC 3C0A0001 */       lui $t2, %hi(D_NF_000084F8)
  /* 11D040 801320B0 254A84F8 */     addiu $t2, $t2, %lo(D_NF_000084F8)
  /* 11D044 801320B4 02002025 */        or $a0, $s0, $zero
  /* 11D048 801320B8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D04C 801320BC 012A2821 */      addu $a1, $t1, $t2
  /* 11D050 801320C0 944B0024 */       lhu $t3, 0x24($v0)
  /* 11D054 801320C4 3C01430E */       lui $at, (0x430E0000 >> 16) # 142.0
  /* 11D058 801320C8 44818000 */      mtc1 $at, $f16 # 142.0 to cop1
  /* 11D05C 801320CC 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 11D060 801320D0 44819000 */      mtc1 $at, $f18 # 126.0 to cop1
  /* 11D064 801320D4 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 11D068 801320D8 A44D0024 */        sh $t5, 0x24($v0)
  /* 11D06C 801320DC 35AE0001 */       ori $t6, $t5, 1
  /* 11D070 801320E0 240F00FF */     addiu $t7, $zero, 0xff
  /* 11D074 801320E4 A44E0024 */        sh $t6, 0x24($v0)
  /* 11D078 801320E8 A04F0028 */        sb $t7, 0x28($v0)
  /* 11D07C 801320EC A0400029 */        sb $zero, 0x29($v0)
  /* 11D080 801320F0 A040002A */        sb $zero, 0x2a($v0)
  /* 11D084 801320F4 3C188013 */       lui $t8, %hi(D_ovl17_80132D6C)
  /* 11D088 801320F8 E4500058 */      swc1 $f16, 0x58($v0)
  /* 11D08C 801320FC E452005C */      swc1 $f18, 0x5c($v0)
  /* 11D090 80132100 8F182D6C */        lw $t8, %lo(D_ovl17_80132D6C)($t8)
  /* 11D094 80132104 3C190000 */       lui $t9, %hi(D_NF_00005980)
  /* 11D098 80132108 27395980 */     addiu $t9, $t9, %lo(D_NF_00005980)
  /* 11D09C 8013210C 02002025 */        or $a0, $s0, $zero
  /* 11D0A0 80132110 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D0A4 80132114 03192821 */      addu $a1, $t8, $t9
  /* 11D0A8 80132118 94480024 */       lhu $t0, 0x24($v0)
  /* 11D0AC 8013211C 3C0142CC */       lui $at, (0x42CC0000 >> 16) # 102.0
  /* 11D0B0 80132120 44812000 */      mtc1 $at, $f4 # 102.0 to cop1
  /* 11D0B4 80132124 3C014323 */       lui $at, (0x43230000 >> 16) # 163.0
  /* 11D0B8 80132128 44813000 */      mtc1 $at, $f6 # 163.0 to cop1
  /* 11D0BC 8013212C 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 11D0C0 80132130 A44A0024 */        sh $t2, 0x24($v0)
  /* 11D0C4 80132134 354B0001 */       ori $t3, $t2, 1
  /* 11D0C8 80132138 240C00FF */     addiu $t4, $zero, 0xff
  /* 11D0CC 8013213C A44B0024 */        sh $t3, 0x24($v0)
  /* 11D0D0 80132140 A04C0028 */        sb $t4, 0x28($v0)
  /* 11D0D4 80132144 A0400029 */        sb $zero, 0x29($v0)
  /* 11D0D8 80132148 A040002A */        sb $zero, 0x2a($v0)
  /* 11D0DC 8013214C E4440058 */      swc1 $f4, 0x58($v0)
  /* 11D0E0 80132150 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11D0E4 80132154 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11D0E8 80132158 8FB00020 */        lw $s0, 0x20($sp)
  /* 11D0EC 8013215C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11D0F0 80132160 03E00008 */        jr $ra
  /* 11D0F4 80132164 00000000 */       nop 

glabel func_ovl17_80132168
  /* 11D0F8 80132168 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11D0FC 8013216C AFBF0024 */        sw $ra, 0x24($sp)
  /* 11D100 80132170 AFB00020 */        sw $s0, 0x20($sp)
  /* 11D104 80132174 00002025 */        or $a0, $zero, $zero
  /* 11D108 80132178 00002825 */        or $a1, $zero, $zero
  /* 11D10C 8013217C 24060002 */     addiu $a2, $zero, 2
  /* 11D110 80132180 0C00265A */       jal omMakeGObjCommon
  /* 11D114 80132184 3C078000 */       lui $a3, 0x8000
  /* 11D118 80132188 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 11D11C 8013218C 240EFFFF */     addiu $t6, $zero, -1
  /* 11D120 80132190 00408025 */        or $s0, $v0, $zero
  /* 11D124 80132194 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11D128 80132198 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 11D12C 8013219C 00402025 */        or $a0, $v0, $zero
  /* 11D130 801321A0 00003025 */        or $a2, $zero, $zero
  /* 11D134 801321A4 0C00277D */       jal func_80009DF4
  /* 11D138 801321A8 3C078000 */       lui $a3, 0x8000
  /* 11D13C 801321AC 3C0F8013 */       lui $t7, %hi(D_ovl17_80132D68)
  /* 11D140 801321B0 8DEF2D68 */        lw $t7, %lo(D_ovl17_80132D68)($t7)
  /* 11D144 801321B4 3C180002 */       lui $t8, %hi(D_NF_00018000)
  /* 11D148 801321B8 27188000 */     addiu $t8, $t8, %lo(D_NF_00018000)
  /* 11D14C 801321BC 02002025 */        or $a0, $s0, $zero
  /* 11D150 801321C0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D154 801321C4 01F82821 */      addu $a1, $t7, $t8
  /* 11D158 801321C8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11D15C 801321CC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11D160 801321D0 3C198013 */       lui $t9, %hi(D_ovl17_80132D6C)
  /* 11D164 801321D4 3C080000 */       lui $t0, %hi(D_NF_00007C38)
  /* 11D168 801321D8 E4400058 */      swc1 $f0, 0x58($v0)
  /* 11D16C 801321DC E440005C */      swc1 $f0, 0x5c($v0)
  /* 11D170 801321E0 8F392D6C */        lw $t9, %lo(D_ovl17_80132D6C)($t9)
  /* 11D174 801321E4 25087C38 */     addiu $t0, $t0, %lo(D_NF_00007C38)
  /* 11D178 801321E8 02002025 */        or $a0, $s0, $zero
  /* 11D17C 801321EC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D180 801321F0 03282821 */      addu $a1, $t9, $t0
  /* 11D184 801321F4 94490024 */       lhu $t1, 0x24($v0)
  /* 11D188 801321F8 3C014214 */       lui $at, (0x42140000 >> 16) # 37.0
  /* 11D18C 801321FC 44802000 */      mtc1 $zero, $f4
  /* 11D190 80132200 44813000 */      mtc1 $at, $f6 # 37.0 to cop1
  /* 11D194 80132204 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 11D198 80132208 A44B0024 */        sh $t3, 0x24($v0)
  /* 11D19C 8013220C 356C0001 */       ori $t4, $t3, 1
  /* 11D1A0 80132210 240D0008 */     addiu $t5, $zero, 8
  /* 11D1A4 80132214 240E0033 */     addiu $t6, $zero, 0x33
  /* 11D1A8 80132218 240F0065 */     addiu $t7, $zero, 0x65
  /* 11D1AC 8013221C 24180004 */     addiu $t8, $zero, 4
  /* 11D1B0 80132220 24190060 */     addiu $t9, $zero, 0x60
  /* 11D1B4 80132224 24080026 */     addiu $t0, $zero, 0x26
  /* 11D1B8 80132228 A44C0024 */        sh $t4, 0x24($v0)
  /* 11D1BC 8013222C A04D0028 */        sb $t5, 0x28($v0)
  /* 11D1C0 80132230 A04E0029 */        sb $t6, 0x29($v0)
  /* 11D1C4 80132234 A04F002A */        sb $t7, 0x2a($v0)
  /* 11D1C8 80132238 A0400065 */        sb $zero, 0x65($v0)
  /* 11D1CC 8013223C A0400064 */        sb $zero, 0x64($v0)
  /* 11D1D0 80132240 A0580067 */        sb $t8, 0x67($v0)
  /* 11D1D4 80132244 A0400066 */        sb $zero, 0x66($v0)
  /* 11D1D8 80132248 A4590068 */        sh $t9, 0x68($v0)
  /* 11D1DC 8013224C A448006A */        sh $t0, 0x6a($v0)
  /* 11D1E0 80132250 3C098013 */       lui $t1, %hi(D_ovl17_80132D6C)
  /* 11D1E4 80132254 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11D1E8 80132258 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11D1EC 8013225C 8D292D6C */        lw $t1, %lo(D_ovl17_80132D6C)($t1)
  /* 11D1F0 80132260 3C0A0000 */       lui $t2, %hi(D_NF_000072E8)
  /* 11D1F4 80132264 254A72E8 */     addiu $t2, $t2, %lo(D_NF_000072E8)
  /* 11D1F8 80132268 02002025 */        or $a0, $s0, $zero
  /* 11D1FC 8013226C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D200 80132270 012A2821 */      addu $a1, $t1, $t2
  /* 11D204 80132274 944B0024 */       lhu $t3, 0x24($v0)
  /* 11D208 80132278 3C0142C0 */       lui $at, (0x42C00000 >> 16) # 96.0
  /* 11D20C 8013227C 44814000 */      mtc1 $at, $f8 # 96.0 to cop1
  /* 11D210 80132280 3C014214 */       lui $at, (0x42140000 >> 16) # 37.0
  /* 11D214 80132284 44815000 */      mtc1 $at, $f10 # 37.0 to cop1
  /* 11D218 80132288 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 11D21C 8013228C A44D0024 */        sh $t5, 0x24($v0)
  /* 11D220 80132290 35AE0001 */       ori $t6, $t5, 1
  /* 11D224 80132294 240F0008 */     addiu $t7, $zero, 8
  /* 11D228 80132298 24180033 */     addiu $t8, $zero, 0x33
  /* 11D22C 8013229C 24190065 */     addiu $t9, $zero, 0x65
  /* 11D230 801322A0 A44E0024 */        sh $t6, 0x24($v0)
  /* 11D234 801322A4 A04F0028 */        sb $t7, 0x28($v0)
  /* 11D238 801322A8 A0580029 */        sb $t8, 0x29($v0)
  /* 11D23C 801322AC A059002A */        sb $t9, 0x2a($v0)
  /* 11D240 801322B0 3C088013 */       lui $t0, %hi(D_ovl17_80132D6C)
  /* 11D244 801322B4 E4480058 */      swc1 $f8, 0x58($v0)
  /* 11D248 801322B8 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 11D24C 801322BC 8D082D6C */        lw $t0, %lo(D_ovl17_80132D6C)($t0)
  /* 11D250 801322C0 3C090000 */       lui $t1, %hi(D_NF_000040F0)
  /* 11D254 801322C4 252940F0 */     addiu $t1, $t1, %lo(D_NF_000040F0)
  /* 11D258 801322C8 02002025 */        or $a0, $s0, $zero
  /* 11D25C 801322CC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D260 801322D0 01092821 */      addu $a1, $t0, $t1
  /* 11D264 801322D4 944A0024 */       lhu $t2, 0x24($v0)
  /* 11D268 801322D8 3C0141E0 */       lui $at, (0x41E00000 >> 16) # 28.0
  /* 11D26C 801322DC 44818000 */      mtc1 $at, $f16 # 28.0 to cop1
  /* 11D270 801322E0 3C0141D8 */       lui $at, (0x41D80000 >> 16) # 27.0
  /* 11D274 801322E4 44819000 */      mtc1 $at, $f18 # 27.0 to cop1
  /* 11D278 801322E8 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 11D27C 801322EC A44C0024 */        sh $t4, 0x24($v0)
  /* 11D280 801322F0 358D0001 */       ori $t5, $t4, 1
  /* 11D284 801322F4 240E003C */     addiu $t6, $zero, 0x3c
  /* 11D288 801322F8 240F0073 */     addiu $t7, $zero, 0x73
  /* 11D28C 801322FC 241800B4 */     addiu $t8, $zero, 0xb4
  /* 11D290 80132300 A44D0024 */        sh $t5, 0x24($v0)
  /* 11D294 80132304 A0400060 */        sb $zero, 0x60($v0)
  /* 11D298 80132308 A0400061 */        sb $zero, 0x61($v0)
  /* 11D29C 8013230C A0400062 */        sb $zero, 0x62($v0)
  /* 11D2A0 80132310 A04E0028 */        sb $t6, 0x28($v0)
  /* 11D2A4 80132314 A04F0029 */        sb $t7, 0x29($v0)
  /* 11D2A8 80132318 A058002A */        sb $t8, 0x2a($v0)
  /* 11D2AC 8013231C 3C198013 */       lui $t9, %hi(D_ovl17_80132D6C)
  /* 11D2B0 80132320 E4500058 */      swc1 $f16, 0x58($v0)
  /* 11D2B4 80132324 E452005C */      swc1 $f18, 0x5c($v0)
  /* 11D2B8 80132328 8F392D6C */        lw $t9, %lo(D_ovl17_80132D6C)($t9)
  /* 11D2BC 8013232C 3C080000 */       lui $t0, %hi(D_NF_00007AA8)
  /* 11D2C0 80132330 25087AA8 */     addiu $t0, $t0, %lo(D_NF_00007AA8)
  /* 11D2C4 80132334 02002025 */        or $a0, $s0, $zero
  /* 11D2C8 80132338 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11D2CC 8013233C 03282821 */      addu $a1, $t9, $t0
  /* 11D2D0 80132340 94490024 */       lhu $t1, 0x24($v0)
  /* 11D2D4 80132344 3C014362 */       lui $at, (0x43620000 >> 16) # 226.0
  /* 11D2D8 80132348 44812000 */      mtc1 $at, $f4 # 226.0 to cop1
  /* 11D2DC 8013234C 3C014309 */       lui $at, (0x43090000 >> 16) # 137.0
  /* 11D2E0 80132350 44813000 */      mtc1 $at, $f6 # 137.0 to cop1
  /* 11D2E4 80132354 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 11D2E8 80132358 A44B0024 */        sh $t3, 0x24($v0)
  /* 11D2EC 8013235C 356C0001 */       ori $t4, $t3, 1
  /* 11D2F0 80132360 240D0008 */     addiu $t5, $zero, 8
  /* 11D2F4 80132364 240E0033 */     addiu $t6, $zero, 0x33
  /* 11D2F8 80132368 240F0065 */     addiu $t7, $zero, 0x65
  /* 11D2FC 8013236C A44C0024 */        sh $t4, 0x24($v0)
  /* 11D300 80132370 A04D0028 */        sb $t5, 0x28($v0)
  /* 11D304 80132374 A04E0029 */        sb $t6, 0x29($v0)
  /* 11D308 80132378 A04F002A */        sb $t7, 0x2a($v0)
  /* 11D30C 8013237C E4440058 */      swc1 $f4, 0x58($v0)
  /* 11D310 80132380 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11D314 80132384 8FBF0024 */        lw $ra, 0x24($sp)
  /* 11D318 80132388 8FB00020 */        lw $s0, 0x20($sp)
  /* 11D31C 8013238C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11D320 80132390 03E00008 */        jr $ra
  /* 11D324 80132394 00000000 */       nop 

glabel func_ovl17_80132398
  /* 11D328 80132398 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11D32C 8013239C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11D330 801323A0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11D334 801323A4 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11D338 801323A8 240F003C */     addiu $t7, $zero, 0x3c
  /* 11D33C 801323AC 24180000 */     addiu $t8, $zero, 0
  /* 11D340 801323B0 24190002 */     addiu $t9, $zero, 2
  /* 11D344 801323B4 2408FFFF */     addiu $t0, $zero, -1
  /* 11D348 801323B8 24090001 */     addiu $t1, $zero, 1
  /* 11D34C 801323BC 240A0001 */     addiu $t2, $zero, 1
  /* 11D350 801323C0 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11D354 801323C4 AFA90028 */        sw $t1, 0x28($sp)
  /* 11D358 801323C8 AFA80020 */        sw $t0, 0x20($sp)
  /* 11D35C 801323CC AFB9001C */        sw $t9, 0x1c($sp)
  /* 11D360 801323D0 AFB80018 */        sw $t8, 0x18($sp)
  /* 11D364 801323D4 AFAF0014 */        sw $t7, 0x14($sp)
  /* 11D368 801323D8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11D36C 801323DC AFA00024 */        sw $zero, 0x24($sp)
  /* 11D370 801323E0 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11D374 801323E4 AFA00034 */        sw $zero, 0x34($sp)
  /* 11D378 801323E8 24040001 */     addiu $a0, $zero, 1
  /* 11D37C 801323EC 00002825 */        or $a1, $zero, $zero
  /* 11D380 801323F0 24060001 */     addiu $a2, $zero, 1
  /* 11D384 801323F4 0C002E4F */       jal func_8000B93C
  /* 11D388 801323F8 3C078000 */       lui $a3, 0x8000
  /* 11D38C 801323FC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11D390 80132400 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11D394 80132404 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11D398 80132408 8C430074 */        lw $v1, 0x74($v0)
  /* 11D39C 8013240C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11D3A0 80132410 44050000 */      mfc1 $a1, $f0
  /* 11D3A4 80132414 44060000 */      mfc1 $a2, $f0
  /* 11D3A8 80132418 3C07439B */       lui $a3, 0x439b
  /* 11D3AC 8013241C 24640008 */     addiu $a0, $v1, 8
  /* 11D3B0 80132420 0C001C20 */       jal func_80007080
  /* 11D3B4 80132424 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11D3B8 80132428 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11D3BC 8013242C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11D3C0 80132430 03E00008 */        jr $ra
  /* 11D3C4 80132434 00000000 */       nop 

glabel func_ovl17_80132438
  /* 11D3C8 80132438 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 11D3CC 8013243C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 11D3D0 80132440 AFBF003C */        sw $ra, 0x3c($sp)
  /* 11D3D4 80132444 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 11D3D8 80132448 240F0050 */     addiu $t7, $zero, 0x50
  /* 11D3DC 8013244C 24180000 */     addiu $t8, $zero, 0
  /* 11D3E0 80132450 24190001 */     addiu $t9, $zero, 1
  /* 11D3E4 80132454 2408FFFF */     addiu $t0, $zero, -1
  /* 11D3E8 80132458 24090001 */     addiu $t1, $zero, 1
  /* 11D3EC 8013245C 240A0001 */     addiu $t2, $zero, 1
  /* 11D3F0 80132460 AFAA0030 */        sw $t2, 0x30($sp)
  /* 11D3F4 80132464 AFA90028 */        sw $t1, 0x28($sp)
  /* 11D3F8 80132468 AFA80020 */        sw $t0, 0x20($sp)
  /* 11D3FC 8013246C AFB9001C */        sw $t9, 0x1c($sp)
  /* 11D400 80132470 AFB80018 */        sw $t8, 0x18($sp)
  /* 11D404 80132474 AFAF0014 */        sw $t7, 0x14($sp)
  /* 11D408 80132478 AFAE0010 */        sw $t6, 0x10($sp)
  /* 11D40C 8013247C AFA00024 */        sw $zero, 0x24($sp)
  /* 11D410 80132480 AFA0002C */        sw $zero, 0x2c($sp)
  /* 11D414 80132484 AFA00034 */        sw $zero, 0x34($sp)
  /* 11D418 80132488 24040001 */     addiu $a0, $zero, 1
  /* 11D41C 8013248C 00002825 */        or $a1, $zero, $zero
  /* 11D420 80132490 24060001 */     addiu $a2, $zero, 1
  /* 11D424 80132494 0C002E4F */       jal func_8000B93C
  /* 11D428 80132498 3C078000 */       lui $a3, 0x8000
  /* 11D42C 8013249C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 11D430 801324A0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 11D434 801324A4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11D438 801324A8 8C430074 */        lw $v1, 0x74($v0)
  /* 11D43C 801324AC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 11D440 801324B0 44050000 */      mfc1 $a1, $f0
  /* 11D444 801324B4 44060000 */      mfc1 $a2, $f0
  /* 11D448 801324B8 3C07439B */       lui $a3, 0x439b
  /* 11D44C 801324BC 24640008 */     addiu $a0, $v1, 8
  /* 11D450 801324C0 0C001C20 */       jal func_80007080
  /* 11D454 801324C4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 11D458 801324C8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11D45C 801324CC 27BD0040 */     addiu $sp, $sp, 0x40
  /* 11D460 801324D0 03E00008 */        jr $ra
  /* 11D464 801324D4 00000000 */       nop 

glabel func_ovl17_801324D8
  /* 11D468 801324D8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11D46C 801324DC AFBF0014 */        sw $ra, 0x14($sp)
  /* 11D470 801324E0 0C04C6C9 */       jal func_ovl17_80131B24
  /* 11D474 801324E4 00000000 */       nop 
  /* 11D478 801324E8 0C04C711 */       jal func_ovl17_80131C44
  /* 11D47C 801324EC 00000000 */       nop 
  /* 11D480 801324F0 0C04C75A */       jal func_ovl17_80131D68
  /* 11D484 801324F4 00000000 */       nop 
  /* 11D488 801324F8 0C04C7A3 */       jal func_ovl17_80131E8C
  /* 11D48C 801324FC 00000000 */       nop 
  /* 11D490 80132500 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11D494 80132504 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11D498 80132508 03E00008 */        jr $ra
  /* 11D49C 8013250C 00000000 */       nop 

glabel func_ovl17_80132510
  /* 11D4A0 80132510 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11D4A4 80132514 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11D4A8 80132518 3C048013 */       lui $a0, %hi(D_ovl17_80132C8C)
  /* 11D4AC 8013251C 0C0026A1 */       jal omEjectGObjCommon
  /* 11D4B0 80132520 8C842C8C */        lw $a0, %lo(D_ovl17_80132C8C)($a0)
  /* 11D4B4 80132524 3C048013 */       lui $a0, %hi(D_ovl17_80132C90)
  /* 11D4B8 80132528 0C0026A1 */       jal omEjectGObjCommon
  /* 11D4BC 8013252C 8C842C90 */        lw $a0, %lo(D_ovl17_80132C90)($a0)
  /* 11D4C0 80132530 3C048013 */       lui $a0, %hi(D_ovl17_80132C94)
  /* 11D4C4 80132534 0C0026A1 */       jal omEjectGObjCommon
  /* 11D4C8 80132538 8C842C94 */        lw $a0, %lo(D_ovl17_80132C94)($a0)
  /* 11D4CC 8013253C 3C048013 */       lui $a0, %hi(D_ovl17_80132C98)
  /* 11D4D0 80132540 0C0026A1 */       jal omEjectGObjCommon
  /* 11D4D4 80132544 8C842C98 */        lw $a0, %lo(D_ovl17_80132C98)($a0)
  /* 11D4D8 80132548 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11D4DC 8013254C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11D4E0 80132550 03E00008 */        jr $ra
  /* 11D4E4 80132554 00000000 */       nop 

glabel func_ovl17_80132558
  /* 11D4E8 80132558 3C02800A */       lui $v0, %hi((gSceneData + 0x1))
  /* 11D4EC 8013255C 90424AD1 */       lbu $v0, %lo((gSceneData + 0x1))($v0)
  /* 11D4F0 80132560 24010008 */     addiu $at, $zero, 8
  /* 11D4F4 80132564 24084650 */     addiu $t0, $zero, 0x4650
  /* 11D4F8 80132568 1041000C */       beq $v0, $at, .L8013259C
  /* 11D4FC 8013256C 24010009 */     addiu $at, $zero, 9
  /* 11D500 80132570 1041000D */       beq $v0, $at, .L801325A8
  /* 11D504 80132574 240E0001 */     addiu $t6, $zero, 1
  /* 11D508 80132578 24010039 */     addiu $at, $zero, 0x39
  /* 11D50C 8013257C 1041000D */       beq $v0, $at, .L801325B4
  /* 11D510 80132580 240F0002 */     addiu $t7, $zero, 2
  /* 11D514 80132584 2401003A */     addiu $at, $zero, 0x3a
  /* 11D518 80132588 1041000D */       beq $v0, $at, .L801325C0
  /* 11D51C 8013258C 24180003 */     addiu $t8, $zero, 3
  /* 11D520 80132590 3C018013 */       lui $at, %hi(D_ovl17_80132C88)
  /* 11D524 80132594 1000000C */         b .L801325C8
  /* 11D528 80132598 AC202C88 */        sw $zero, %lo(D_ovl17_80132C88)($at)
  .L8013259C:
  /* 11D52C 8013259C 3C018013 */       lui $at, %hi(D_ovl17_80132C88)
  /* 11D530 801325A0 10000009 */         b .L801325C8
  /* 11D534 801325A4 AC202C88 */        sw $zero, %lo(D_ovl17_80132C88)($at)
  .L801325A8:
  /* 11D538 801325A8 3C018013 */       lui $at, %hi(D_ovl17_80132C88)
  /* 11D53C 801325AC 10000006 */         b .L801325C8
  /* 11D540 801325B0 AC2E2C88 */        sw $t6, %lo(D_ovl17_80132C88)($at)
  .L801325B4:
  /* 11D544 801325B4 3C018013 */       lui $at, %hi(D_ovl17_80132C88)
  /* 11D548 801325B8 10000003 */         b .L801325C8
  /* 11D54C 801325BC AC2F2C88 */        sw $t7, %lo(D_ovl17_80132C88)($at)
  .L801325C0:
  /* 11D550 801325C0 3C018013 */       lui $at, %hi(D_ovl17_80132C88)
  /* 11D554 801325C4 AC382C88 */        sw $t8, %lo(D_ovl17_80132C88)($at)
  .L801325C8:
  /* 11D558 801325C8 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D55C 801325CC 3C028013 */       lui $v0, %hi(D_ovl17_80132CA0)
  /* 11D560 801325D0 AC202C9C */        sw $zero, %lo(D_ovl17_80132C9C)($at)
  /* 11D564 801325D4 24422CA0 */     addiu $v0, $v0, %lo(D_ovl17_80132CA0)
  /* 11D568 801325D8 AC400000 */        sw $zero, ($v0) # D_ovl17_80132CA0 + 0
  /* 11D56C 801325DC 3C018013 */       lui $at, %hi(D_ovl17_80132CA4)
  /* 11D570 801325E0 03E00008 */        jr $ra
  /* 11D574 801325E4 AC282CA4 */        sw $t0, %lo(D_ovl17_80132CA4)($at)

glabel func_ovl17_801325E8
  /* 11D578 801325E8 3C038013 */       lui $v1, %hi(D_ovl17_80132CA0)
  /* 11D57C 801325EC 24632CA0 */     addiu $v1, $v1, %lo(D_ovl17_80132CA0)
  /* 11D580 801325F0 8C6E0000 */        lw $t6, ($v1) # D_ovl17_80132CA0 + 0
  /* 11D584 801325F4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11D588 801325F8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11D58C 801325FC 25CF0001 */     addiu $t7, $t6, 1
  /* 11D590 80132600 29E1000A */      slti $at, $t7, 0xa
  /* 11D594 80132604 AFA40028 */        sw $a0, 0x28($sp)
  /* 11D598 80132608 142000FC */      bnez $at, .L801329FC
  /* 11D59C 8013260C AC6F0000 */        sw $t7, ($v1) # D_ovl17_80132CA0 + 0
  /* 11D5A0 80132610 3C188013 */       lui $t8, %hi(D_ovl17_80132CA4)
  /* 11D5A4 80132614 8F182CA4 */        lw $t8, %lo(D_ovl17_80132CA4)($t8)
  /* 11D5A8 80132618 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D5AC 8013261C 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D5B0 80132620 170F0007 */       bne $t8, $t7, .L80132640
  /* 11D5B4 80132624 24080001 */     addiu $t0, $zero, 1
  /* 11D5B8 80132628 90790000 */       lbu $t9, ($v1) # gSceneData + 0
  /* 11D5BC 8013262C A0680000 */        sb $t0, ($v1) # gSceneData + 0
  /* 11D5C0 80132630 0C00171D */       jal func_80005C74
  /* 11D5C4 80132634 A0790001 */        sb $t9, 1($v1) # gSceneData + 1
  /* 11D5C8 80132638 100000F1 */         b .L80132A00
  /* 11D5CC 8013263C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132640:
  /* 11D5D0 80132640 0C0E42DF */       jal func_ovl1_80390B7C
  /* 11D5D4 80132644 00000000 */       nop 
  /* 11D5D8 80132648 3C038013 */       lui $v1, %hi(D_ovl17_80132CA0)
  /* 11D5DC 8013264C 14400005 */      bnez $v0, .L80132664
  /* 11D5E0 80132650 24632CA0 */     addiu $v1, $v1, %lo(D_ovl17_80132CA0)
  /* 11D5E4 80132654 8C690000 */        lw $t1, ($v1) # D_ovl17_80132CA0 + 0
  /* 11D5E8 80132658 3C018013 */       lui $at, %hi(D_ovl17_80132CA4)
  /* 11D5EC 8013265C 252A4650 */     addiu $t2, $t1, 0x4650
  /* 11D5F0 80132660 AC2A2CA4 */        sw $t2, %lo(D_ovl17_80132CA4)($at)
  .L80132664:
  /* 11D5F4 80132664 3C038013 */       lui $v1, %hi(D_ovl17_80132C9C)
  /* 11D5F8 80132668 24632C9C */     addiu $v1, $v1, %lo(D_ovl17_80132C9C)
  /* 11D5FC 8013266C 8C620000 */        lw $v0, ($v1) # D_ovl17_80132C9C + 0
  /* 11D600 80132670 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D604 80132674 10400002 */      beqz $v0, .L80132680
  /* 11D608 80132678 244BFFFF */     addiu $t3, $v0, -1
  /* 11D60C 8013267C AC6B0000 */        sw $t3, ($v1) # D_ovl17_80132C9C + 0
  .L80132680:
  /* 11D610 80132680 0C0E4281 */       jal func_ovl1_80390A04
  /* 11D614 80132684 24050014 */     addiu $a1, $zero, 0x14
  /* 11D618 80132688 1040000E */      beqz $v0, .L801326C4
  /* 11D61C 8013268C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D620 80132690 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 11D624 80132694 24050014 */     addiu $a1, $zero, 0x14
  /* 11D628 80132698 1040000A */      beqz $v0, .L801326C4
  /* 11D62C 8013269C 00000000 */       nop 
  /* 11D630 801326A0 0C0E4201 */       jal func_ovl1_80390804
  /* 11D634 801326A4 24040909 */     addiu $a0, $zero, 0x909
  /* 11D638 801326A8 14400006 */      bnez $v0, .L801326C4
  /* 11D63C 801326AC 00000000 */       nop 
  /* 11D640 801326B0 0C0E4201 */       jal func_ovl1_80390804
  /* 11D644 801326B4 24040606 */     addiu $a0, $zero, 0x606
  /* 11D648 801326B8 14400002 */      bnez $v0, .L801326C4
  /* 11D64C 801326BC 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D650 801326C0 AC202C9C */        sw $zero, %lo(D_ovl17_80132C9C)($at)
  .L801326C4:
  /* 11D654 801326C4 0C0E41DB */       jal func_ovl1_8039076C
  /* 11D658 801326C8 34049000 */       ori $a0, $zero, 0x9000
  /* 11D65C 801326CC 10400039 */      beqz $v0, .L801327B4
  /* 11D660 801326D0 3C028013 */       lui $v0, %hi(D_ovl17_80132C88)
  /* 11D664 801326D4 8C422C88 */        lw $v0, %lo(D_ovl17_80132C88)($v0)
  /* 11D668 801326D8 24010001 */     addiu $at, $zero, 1
  /* 11D66C 801326DC 10400009 */      beqz $v0, .L80132704
  /* 11D670 801326E0 00000000 */       nop 
  /* 11D674 801326E4 10410012 */       beq $v0, $at, .L80132730
  /* 11D678 801326E8 24010002 */     addiu $at, $zero, 2
  /* 11D67C 801326EC 1041001B */       beq $v0, $at, .L8013275C
  /* 11D680 801326F0 24010003 */     addiu $at, $zero, 3
  /* 11D684 801326F4 10410024 */       beq $v0, $at, .L80132788
  /* 11D688 801326F8 00000000 */       nop 
  /* 11D68C 801326FC 100000C0 */         b .L80132A00
  /* 11D690 80132700 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132704:
  /* 11D694 80132704 0C009A70 */       jal func_800269C0
  /* 11D698 80132708 2404009E */     addiu $a0, $zero, 0x9e
  /* 11D69C 8013270C 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D6A0 80132710 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D6A4 80132714 906C0000 */       lbu $t4, ($v1) # gSceneData + 0
  /* 11D6A8 80132718 240D0008 */     addiu $t5, $zero, 8
  /* 11D6AC 8013271C A06D0000 */        sb $t5, ($v1) # gSceneData + 0
  /* 11D6B0 80132720 0C00171D */       jal func_80005C74
  /* 11D6B4 80132724 A06C0001 */        sb $t4, 1($v1) # gSceneData + 1
  /* 11D6B8 80132728 100000B5 */         b .L80132A00
  /* 11D6BC 8013272C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132730:
  /* 11D6C0 80132730 0C009A70 */       jal func_800269C0
  /* 11D6C4 80132734 2404009E */     addiu $a0, $zero, 0x9e
  /* 11D6C8 80132738 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D6CC 8013273C 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D6D0 80132740 906E0000 */       lbu $t6, ($v1) # gSceneData + 0
  /* 11D6D4 80132744 240F0009 */     addiu $t7, $zero, 9
  /* 11D6D8 80132748 A06F0000 */        sb $t7, ($v1) # gSceneData + 0
  /* 11D6DC 8013274C 0C00171D */       jal func_80005C74
  /* 11D6E0 80132750 A06E0001 */        sb $t6, 1($v1) # gSceneData + 1
  /* 11D6E4 80132754 100000AA */         b .L80132A00
  /* 11D6E8 80132758 8FBF0014 */        lw $ra, 0x14($sp)
  .L8013275C:
  /* 11D6EC 8013275C 0C009A70 */       jal func_800269C0
  /* 11D6F0 80132760 2404009E */     addiu $a0, $zero, 0x9e
  /* 11D6F4 80132764 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D6F8 80132768 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D6FC 8013276C 90780000 */       lbu $t8, ($v1) # gSceneData + 0
  /* 11D700 80132770 24190039 */     addiu $t9, $zero, 0x39
  /* 11D704 80132774 A0790000 */        sb $t9, ($v1) # gSceneData + 0
  /* 11D708 80132778 0C00171D */       jal func_80005C74
  /* 11D70C 8013277C A0780001 */        sb $t8, 1($v1) # gSceneData + 1
  /* 11D710 80132780 1000009F */         b .L80132A00
  /* 11D714 80132784 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132788:
  /* 11D718 80132788 0C009A70 */       jal func_800269C0
  /* 11D71C 8013278C 2404009E */     addiu $a0, $zero, 0x9e
  /* 11D720 80132790 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D724 80132794 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D728 80132798 90680000 */       lbu $t0, ($v1) # gSceneData + 0
  /* 11D72C 8013279C 2409003A */     addiu $t1, $zero, 0x3a
  /* 11D730 801327A0 A0690000 */        sb $t1, ($v1) # gSceneData + 0
  /* 11D734 801327A4 0C00171D */       jal func_80005C74
  /* 11D738 801327A8 A0680001 */        sb $t0, 1($v1) # gSceneData + 1
  /* 11D73C 801327AC 10000094 */         b .L80132A00
  /* 11D740 801327B0 8FBF0014 */        lw $ra, 0x14($sp)
  .L801327B4:
  /* 11D744 801327B4 0C0E41DB */       jal func_ovl1_8039076C
  /* 11D748 801327B8 24044000 */     addiu $a0, $zero, 0x4000
  /* 11D74C 801327BC 5040000B */      beql $v0, $zero, .L801327EC
  /* 11D750 801327C0 24040014 */     addiu $a0, $zero, 0x14
  /* 11D754 801327C4 0C00829D */       jal func_80020A74
  /* 11D758 801327C8 00000000 */       nop 
  /* 11D75C 801327CC 3C03800A */       lui $v1, %hi(gSceneData)
  /* 11D760 801327D0 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 11D764 801327D4 906A0000 */       lbu $t2, ($v1) # gSceneData + 0
  /* 11D768 801327D8 240B0001 */     addiu $t3, $zero, 1
  /* 11D76C 801327DC A06B0000 */        sb $t3, ($v1) # gSceneData + 0
  /* 11D770 801327E0 0C00171D */       jal func_80005C74
  /* 11D774 801327E4 A06A0001 */        sb $t2, 1($v1) # gSceneData + 1
  /* 11D778 801327E8 24040014 */     addiu $a0, $zero, 0x14
  .L801327EC:
  /* 11D77C 801327EC 0C0E4254 */       jal func_ovl1_80390950
  /* 11D780 801327F0 24050001 */     addiu $a1, $zero, 1
  /* 11D784 801327F4 18400004 */      blez $v0, .L80132808
  /* 11D788 801327F8 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D78C 801327FC 0C0E4227 */       jal func_ovl1_8039089C
  /* 11D790 80132800 00002825 */        or $a1, $zero, $zero
  /* 11D794 80132804 0440007D */      bltz $v0, .L801329FC
  .L80132808:
  /* 11D798 80132808 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D79C 8013280C 0C0E4254 */       jal func_ovl1_80390950
  /* 11D7A0 80132810 00002825 */        or $a1, $zero, $zero
  /* 11D7A4 80132814 04410004 */      bgez $v0, .L80132828
  /* 11D7A8 80132818 24040014 */     addiu $a0, $zero, 0x14
  /* 11D7AC 8013281C 0C0E4227 */       jal func_ovl1_8039089C
  /* 11D7B0 80132820 24050001 */     addiu $a1, $zero, 1
  /* 11D7B4 80132824 1C400075 */      bgtz $v0, .L801329FC
  .L80132828:
  /* 11D7B8 80132828 3C028013 */       lui $v0, %hi(D_ovl17_80132C9C)
  /* 11D7BC 8013282C 8C422C9C */        lw $v0, %lo(D_ovl17_80132C9C)($v0)
  /* 11D7C0 80132830 14400007 */      bnez $v0, .L80132850
  /* 11D7C4 80132834 00000000 */       nop 
  /* 11D7C8 80132838 0C0E4201 */       jal func_ovl1_80390804
  /* 11D7CC 8013283C 24040909 */     addiu $a0, $zero, 0x909
  /* 11D7D0 80132840 1440000E */      bnez $v0, .L8013287C
  /* 11D7D4 80132844 AFA20018 */        sw $v0, 0x18($sp)
  /* 11D7D8 80132848 3C028013 */       lui $v0, %hi(D_ovl17_80132C9C)
  /* 11D7DC 8013284C 8C422C9C */        lw $v0, %lo(D_ovl17_80132C9C)($v0)
  .L80132850:
  /* 11D7E0 80132850 14400030 */      bnez $v0, .L80132914
  /* 11D7E4 80132854 24040014 */     addiu $a0, $zero, 0x14
  /* 11D7E8 80132858 0C0E4254 */       jal func_ovl1_80390950
  /* 11D7EC 8013285C 24050001 */     addiu $a1, $zero, 1
  /* 11D7F0 80132860 14400006 */      bnez $v0, .L8013287C
  /* 11D7F4 80132864 AFA20020 */        sw $v0, 0x20($sp)
  /* 11D7F8 80132868 24040014 */     addiu $a0, $zero, 0x14
  /* 11D7FC 8013286C 0C0E4227 */       jal func_ovl1_8039089C
  /* 11D800 80132870 24050001 */     addiu $a1, $zero, 1
  /* 11D804 80132874 10400027 */      beqz $v0, .L80132914
  /* 11D808 80132878 AFA20020 */        sw $v0, 0x20($sp)
  .L8013287C:
  /* 11D80C 8013287C 0C009A70 */       jal func_800269C0
  /* 11D810 80132880 240400A4 */     addiu $a0, $zero, 0xa4
  /* 11D814 80132884 8FAC0018 */        lw $t4, 0x18($sp)
  /* 11D818 80132888 3C048013 */       lui $a0, %hi(D_ovl17_80132C9C)
  /* 11D81C 8013288C 24842C9C */     addiu $a0, $a0, %lo(D_ovl17_80132C9C)
  /* 11D820 80132890 11800003 */      beqz $t4, .L801328A0
  /* 11D824 80132894 240D000C */     addiu $t5, $zero, 0xc
  /* 11D828 80132898 1000000B */         b .L801328C8
  /* 11D82C 8013289C AC8D0000 */        sw $t5, ($a0) # D_ovl17_80132C9C + 0
  .L801328A0:
  /* 11D830 801328A0 8FAE0020 */        lw $t6, 0x20($sp)
  /* 11D834 801328A4 240F00A0 */     addiu $t7, $zero, 0xa0
  /* 11D838 801328A8 24010007 */     addiu $at, $zero, 7
  /* 11D83C 801328AC 01EEC023 */      subu $t8, $t7, $t6
  /* 11D840 801328B0 0301001A */       div $zero, $t8, $at
  /* 11D844 801328B4 0000C812 */      mflo $t9
  /* 11D848 801328B8 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D84C 801328BC 3C048013 */       lui $a0, %hi(D_ovl17_80132C9C)
  /* 11D850 801328C0 24842C9C */     addiu $a0, $a0, %lo(D_ovl17_80132C9C)
  /* 11D854 801328C4 AC392C9C */        sw $t9, %lo(D_ovl17_80132C9C)($at)
  .L801328C8:
  /* 11D858 801328C8 3C038013 */       lui $v1, %hi(D_ovl17_80132C88)
  /* 11D85C 801328CC 24632C88 */     addiu $v1, $v1, %lo(D_ovl17_80132C88)
  /* 11D860 801328D0 8C620000 */        lw $v0, ($v1) # D_ovl17_80132C88 + 0
  /* 11D864 801328D4 24080003 */     addiu $t0, $zero, 3
  /* 11D868 801328D8 14400003 */      bnez $v0, .L801328E8
  /* 11D86C 801328DC 2449FFFF */     addiu $t1, $v0, -1
  /* 11D870 801328E0 10000002 */         b .L801328EC
  /* 11D874 801328E4 AC680000 */        sw $t0, ($v1) # D_ovl17_80132C88 + 0
  .L801328E8:
  /* 11D878 801328E8 AC690000 */        sw $t1, ($v1) # D_ovl17_80132C88 + 0
  .L801328EC:
  /* 11D87C 801328EC 8C6A0000 */        lw $t2, ($v1) # D_ovl17_80132C88 + 0
  /* 11D880 801328F0 15400004 */      bnez $t2, .L80132904
  /* 11D884 801328F4 00000000 */       nop 
  /* 11D888 801328F8 8C8B0000 */        lw $t3, ($a0) # D_ovl17_80132C9C + 0
  /* 11D88C 801328FC 256C0008 */     addiu $t4, $t3, 8
  /* 11D890 80132900 AC8C0000 */        sw $t4, ($a0) # D_ovl17_80132C9C + 0
  .L80132904:
  /* 11D894 80132904 0C04C944 */       jal func_ovl17_80132510
  /* 11D898 80132908 00000000 */       nop 
  /* 11D89C 8013290C 0C04C936 */       jal func_ovl17_801324D8
  /* 11D8A0 80132910 00000000 */       nop 
  .L80132914:
  /* 11D8A4 80132914 3C028013 */       lui $v0, %hi(D_ovl17_80132C9C)
  /* 11D8A8 80132918 8C422C9C */        lw $v0, %lo(D_ovl17_80132C9C)($v0)
  /* 11D8AC 8013291C 14400007 */      bnez $v0, .L8013293C
  /* 11D8B0 80132920 00000000 */       nop 
  /* 11D8B4 80132924 0C0E4201 */       jal func_ovl1_80390804
  /* 11D8B8 80132928 24040606 */     addiu $a0, $zero, 0x606
  /* 11D8BC 8013292C 1440000E */      bnez $v0, .L80132968
  /* 11D8C0 80132930 AFA20018 */        sw $v0, 0x18($sp)
  /* 11D8C4 80132934 3C028013 */       lui $v0, %hi(D_ovl17_80132C9C)
  /* 11D8C8 80132938 8C422C9C */        lw $v0, %lo(D_ovl17_80132C9C)($v0)
  .L8013293C:
  /* 11D8CC 8013293C 1440002F */      bnez $v0, .L801329FC
  /* 11D8D0 80132940 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D8D4 80132944 0C0E4254 */       jal func_ovl1_80390950
  /* 11D8D8 80132948 00002825 */        or $a1, $zero, $zero
  /* 11D8DC 8013294C 14400006 */      bnez $v0, .L80132968
  /* 11D8E0 80132950 AFA20020 */        sw $v0, 0x20($sp)
  /* 11D8E4 80132954 2404FFEC */     addiu $a0, $zero, -0x14
  /* 11D8E8 80132958 0C0E4227 */       jal func_ovl1_8039089C
  /* 11D8EC 8013295C 00002825 */        or $a1, $zero, $zero
  /* 11D8F0 80132960 10400026 */      beqz $v0, .L801329FC
  /* 11D8F4 80132964 AFA20020 */        sw $v0, 0x20($sp)
  .L80132968:
  /* 11D8F8 80132968 0C009A70 */       jal func_800269C0
  /* 11D8FC 8013296C 240400A4 */     addiu $a0, $zero, 0xa4
  /* 11D900 80132970 8FAD0018 */        lw $t5, 0x18($sp)
  /* 11D904 80132974 3C038013 */       lui $v1, %hi(D_ovl17_80132C88)
  /* 11D908 80132978 24632C88 */     addiu $v1, $v1, %lo(D_ovl17_80132C88)
  /* 11D90C 8013297C 11A00005 */      beqz $t5, .L80132994
  /* 11D910 80132980 8FAE0020 */        lw $t6, 0x20($sp)
  /* 11D914 80132984 240F000C */     addiu $t7, $zero, 0xc
  /* 11D918 80132988 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D91C 8013298C 10000007 */         b .L801329AC
  /* 11D920 80132990 AC2F2C9C */        sw $t7, %lo(D_ovl17_80132C9C)($at)
  .L80132994:
  /* 11D924 80132994 25D800A0 */     addiu $t8, $t6, 0xa0
  /* 11D928 80132998 24010007 */     addiu $at, $zero, 7
  /* 11D92C 8013299C 0301001A */       div $zero, $t8, $at
  /* 11D930 801329A0 0000C812 */      mflo $t9
  /* 11D934 801329A4 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D938 801329A8 AC392C9C */        sw $t9, %lo(D_ovl17_80132C9C)($at)
  .L801329AC:
  /* 11D93C 801329AC 8C620000 */        lw $v0, ($v1) # D_ovl17_80132C88 + 0
  /* 11D940 801329B0 24010003 */     addiu $at, $zero, 3
  /* 11D944 801329B4 3C0A8013 */       lui $t2, %hi(D_ovl17_80132C9C)
  /* 11D948 801329B8 14410003 */       bne $v0, $at, .L801329C8
  /* 11D94C 801329BC 24480001 */     addiu $t0, $v0, 1
  /* 11D950 801329C0 10000002 */         b .L801329CC
  /* 11D954 801329C4 AC600000 */        sw $zero, ($v1) # D_ovl17_80132C88 + 0
  .L801329C8:
  /* 11D958 801329C8 AC680000 */        sw $t0, ($v1) # D_ovl17_80132C88 + 0
  .L801329CC:
  /* 11D95C 801329CC 8C690000 */        lw $t1, ($v1) # D_ovl17_80132C88 + 0
  /* 11D960 801329D0 24010003 */     addiu $at, $zero, 3
  /* 11D964 801329D4 15210005 */       bne $t1, $at, .L801329EC
  /* 11D968 801329D8 00000000 */       nop 
  /* 11D96C 801329DC 8D4A2C9C */        lw $t2, %lo(D_ovl17_80132C9C)($t2)
  /* 11D970 801329E0 3C018013 */       lui $at, %hi(D_ovl17_80132C9C)
  /* 11D974 801329E4 254B0008 */     addiu $t3, $t2, 8
  /* 11D978 801329E8 AC2B2C9C */        sw $t3, %lo(D_ovl17_80132C9C)($at)
  .L801329EC:
  /* 11D97C 801329EC 0C04C944 */       jal func_ovl17_80132510
  /* 11D980 801329F0 00000000 */       nop 
  /* 11D984 801329F4 0C04C936 */       jal func_ovl17_801324D8
  /* 11D988 801329F8 00000000 */       nop 
  .L801329FC:
  /* 11D98C 801329FC 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132A00:
  /* 11D990 80132A00 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11D994 80132A04 03E00008 */        jr $ra
  /* 11D998 80132A08 00000000 */       nop 

  /* 11D99C 80132A0C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 11D9A0 80132A10 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 11D9A4 80132A14 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 11D9A8 80132A18 3C188013 */       lui $t8, %hi(D_ovl17_80132CA8)
  /* 11D9AC 80132A1C AFBF001C */        sw $ra, 0x1c($sp)
  /* 11D9B0 80132A20 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 11D9B4 80132A24 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 11D9B8 80132A28 27182CA8 */     addiu $t8, $t8, %lo(D_ovl17_80132CA8)
  /* 11D9BC 80132A2C 24190018 */     addiu $t9, $zero, 0x18
  /* 11D9C0 80132A30 AFAE0030 */        sw $t6, 0x30($sp)
  /* 11D9C4 80132A34 AFAF0034 */        sw $t7, 0x34($sp)
  /* 11D9C8 80132A38 AFA00038 */        sw $zero, 0x38($sp)
  /* 11D9CC 80132A3C AFA0003C */        sw $zero, 0x3c($sp)
  /* 11D9D0 80132A40 AFB80040 */        sw $t8, 0x40($sp)
  /* 11D9D4 80132A44 AFB90044 */        sw $t9, 0x44($sp)
  /* 11D9D8 80132A48 AFA00048 */        sw $zero, 0x48($sp)
  /* 11D9DC 80132A4C AFA0004C */        sw $zero, 0x4c($sp)
  /* 11D9E0 80132A50 0C0337DE */       jal rldm_initialize
  /* 11D9E4 80132A54 27A40030 */     addiu $a0, $sp, 0x30
  /* 11D9E8 80132A58 3C048013 */       lui $a0, %hi(D_ovl17_80132B90)
  /* 11D9EC 80132A5C 24842B90 */     addiu $a0, $a0, %lo(D_ovl17_80132B90)
  /* 11D9F0 80132A60 0C0337BB */       jal rldm_bytes_need_to_load
  /* 11D9F4 80132A64 24050002 */     addiu $a1, $zero, 2
  /* 11D9F8 80132A68 00402025 */        or $a0, $v0, $zero
  /* 11D9FC 80132A6C 0C001260 */       jal hal_alloc
  /* 11DA00 80132A70 24050010 */     addiu $a1, $zero, 0x10
  /* 11DA04 80132A74 3C048013 */       lui $a0, %hi(D_ovl17_80132B90)
  /* 11DA08 80132A78 3C068013 */       lui $a2, %hi(D_ovl17_80132D68)
  /* 11DA0C 80132A7C 24C62D68 */     addiu $a2, $a2, %lo(D_ovl17_80132D68)
  /* 11DA10 80132A80 24842B90 */     addiu $a0, $a0, %lo(D_ovl17_80132B90)
  /* 11DA14 80132A84 24050002 */     addiu $a1, $zero, 2
  /* 11DA18 80132A88 0C033781 */       jal rldm_load_files_into
  /* 11DA1C 80132A8C 00403825 */        or $a3, $v0, $zero
  /* 11DA20 80132A90 3C058013 */       lui $a1, %hi(func_ovl17_801325E8)
  /* 11DA24 80132A94 24A525E8 */     addiu $a1, $a1, %lo(func_ovl17_801325E8)
  /* 11DA28 80132A98 00002025 */        or $a0, $zero, $zero
  /* 11DA2C 80132A9C 00003025 */        or $a2, $zero, $zero
  /* 11DA30 80132AA0 0C00265A */       jal omMakeGObjCommon
  /* 11DA34 80132AA4 3C078000 */       lui $a3, 0x8000
  /* 11DA38 80132AA8 00002025 */        or $a0, $zero, $zero
  /* 11DA3C 80132AAC 3C058000 */       lui $a1, 0x8000
  /* 11DA40 80132AB0 24060064 */     addiu $a2, $zero, 0x64
  /* 11DA44 80132AB4 00003825 */        or $a3, $zero, $zero
  /* 11DA48 80132AB8 0C002E7F */       jal func_8000B9FC
  /* 11DA4C 80132ABC AFA00010 */        sw $zero, 0x10($sp)
  /* 11DA50 80132AC0 0C04C956 */       jal func_ovl17_80132558
  /* 11DA54 80132AC4 00000000 */       nop 
  /* 11DA58 80132AC8 0C04C90E */       jal func_ovl17_80132438
  /* 11DA5C 80132ACC 00000000 */       nop 
  /* 11DA60 80132AD0 0C04C8E6 */       jal func_ovl17_80132398
  /* 11DA64 80132AD4 00000000 */       nop 
  /* 11DA68 80132AD8 0C04C85A */       jal func_ovl17_80132168
  /* 11DA6C 80132ADC 00000000 */       nop 
  /* 11DA70 80132AE0 0C04C936 */       jal func_ovl17_801324D8
  /* 11DA74 80132AE4 00000000 */       nop 
  /* 11DA78 80132AE8 0C04C7EC */       jal func_ovl17_80131FB0
  /* 11DA7C 80132AEC 00000000 */       nop 
  /* 11DA80 80132AF0 3C02800A */       lui $v0, %hi((gSceneData + 0x1))
  /* 11DA84 80132AF4 90424AD1 */       lbu $v0, %lo((gSceneData + 0x1))($v0)
  /* 11DA88 80132AF8 24010008 */     addiu $at, $zero, 8
  /* 11DA8C 80132AFC 10410009 */       beq $v0, $at, .L80132B24
  /* 11DA90 80132B00 24010009 */     addiu $at, $zero, 9
  /* 11DA94 80132B04 10410007 */       beq $v0, $at, .L80132B24
  /* 11DA98 80132B08 24010039 */     addiu $at, $zero, 0x39
  /* 11DA9C 80132B0C 10410005 */       beq $v0, $at, .L80132B24
  /* 11DAA0 80132B10 2401003A */     addiu $at, $zero, 0x3a
  /* 11DAA4 80132B14 10410003 */       beq $v0, $at, .L80132B24
  /* 11DAA8 80132B18 00002025 */        or $a0, $zero, $zero
  /* 11DAAC 80132B1C 0C0082AD */       jal func_80020AB4
  /* 11DAB0 80132B20 2405002C */     addiu $a1, $zero, 0x2c
  .L80132B24:
  /* 11DAB4 80132B24 8FBF001C */        lw $ra, 0x1c($sp)
  /* 11DAB8 80132B28 27BD0050 */     addiu $sp, $sp, 0x50
  /* 11DABC 80132B2C 03E00008 */        jr $ra
  /* 11DAC0 80132B30 00000000 */       nop 

glabel menu_main_entry
  /* 11DAC4 80132B34 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 11DAC8 80132B38 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11DACC 80132B3C 3C048013 */       lui $a0, %hi(D_ovl17_80132BD8)
  /* 11DAD0 80132B40 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 11DAD4 80132B44 24842BD8 */     addiu $a0, $a0, %lo(D_ovl17_80132BD8)
  /* 11DAD8 80132B48 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11DADC 80132B4C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 11DAE0 80132B50 0C001C09 */       jal func_80007024
  /* 11DAE4 80132B54 AC8F000C */        sw $t7, 0xc($a0) # D_ovl17_80132BD8 + 12
  /* 11DAE8 80132B58 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 11DAEC 80132B5C 3C198013 */       lui $t9, %hi(D_NF_80132D70)
  /* 11DAF0 80132B60 3C048013 */       lui $a0, %hi(D_ovl17_80132BF4)
  /* 11DAF4 80132B64 27392D70 */     addiu $t9, $t9, %lo(D_NF_80132D70)
  /* 11DAF8 80132B68 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 11DAFC 80132B6C 24842BF4 */     addiu $a0, $a0, %lo(D_ovl17_80132BF4)
  /* 11DB00 80132B70 03194023 */      subu $t0, $t8, $t9
  /* 11DB04 80132B74 0C001A0F */       jal func_8000683C
  /* 11DB08 80132B78 AC880010 */        sw $t0, 0x10($a0) # D_ovl17_80132BF4 + 16
  /* 11DB0C 80132B7C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11DB10 80132B80 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11DB14 80132B84 03E00008 */        jr $ra
  /* 11DB18 80132B88 00000000 */       nop 

  /* 11DB1C 80132B8C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl17_80132B90   # Routine parsed as data
#  /* 11DB20 80132B90 00000000 */       nop 
#  /* 11DB24 80132B94 00000001 */      movf $zero, $zero, $fcc0
#glabel D_ovl17_80132B98   # Routine parsed as data
#  /* 11DB28 80132B98 20202000 */      addi $zero, $at, 0x2000
#  /* 11DB2C 80132B9C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl17_80132BA0   # Routine parsed as data
#  /* 11DB30 80132BA0 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 11DB34 80132BA4 FFFFFF00 */        sd $ra, -0x100($ra)
