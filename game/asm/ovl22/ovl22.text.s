.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132500

glabel func_ovl22_80131B00
  /* 129970 80131B00 8C830000 */        lw $v1, ($a0)
  /* 129974 80131B04 3C188013 */       lui $t8, %hi(D_ovl22_80132520)
  /* 129978 80131B08 27182520 */     addiu $t8, $t8, %lo(D_ovl22_80132520)
  /* 12997C 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 129980 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 129984 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 129988 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 12998C 80131B1C 03E00008 */        jr $ra
  /* 129990 80131B20 AC780004 */        sw $t8, 4($v1)

glabel func_ovl22_80131B24
  /* 129994 80131B24 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 129998 80131B28 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12999C 80131B2C 00002025 */        or $a0, $zero, $zero
  /* 1299A0 80131B30 00002825 */        or $a1, $zero, $zero
  /* 1299A4 80131B34 24060002 */     addiu $a2, $zero, 2
  /* 1299A8 80131B38 0C00265A */       jal omMakeGObjCommon
  /* 1299AC 80131B3C 3C078000 */       lui $a3, 0x8000
  /* 1299B0 80131B40 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1299B4 80131B44 240EFFFF */     addiu $t6, $zero, -1
  /* 1299B8 80131B48 AFA20024 */        sw $v0, 0x24($sp)
  /* 1299BC 80131B4C AFAE0010 */        sw $t6, 0x10($sp)
  /* 1299C0 80131B50 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1299C4 80131B54 00402025 */        or $a0, $v0, $zero
  /* 1299C8 80131B58 00003025 */        or $a2, $zero, $zero
  /* 1299CC 80131B5C 0C00277D */       jal func_80009DF4
  /* 1299D0 80131B60 3C078000 */       lui $a3, 0x8000
  /* 1299D4 80131B64 3C0F8013 */       lui $t7, %hi(D_ovl22_80132988)
  /* 1299D8 80131B68 8DEF2988 */        lw $t7, %lo(D_ovl22_80132988)($t7)
  /* 1299DC 80131B6C 3C180002 */       lui $t8, %hi(D_NF_00018000)
  /* 1299E0 80131B70 27188000 */     addiu $t8, $t8, %lo(D_NF_00018000)
  /* 1299E4 80131B74 8FA40024 */        lw $a0, 0x24($sp)
  /* 1299E8 80131B78 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 1299EC 80131B7C 01F82821 */      addu $a1, $t7, $t8
  /* 1299F0 80131B80 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1299F4 80131B84 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1299F8 80131B88 00000000 */       nop 
  /* 1299FC 80131B8C E4400058 */      swc1 $f0, 0x58($v0)
  /* 129A00 80131B90 E440005C */      swc1 $f0, 0x5c($v0)
  /* 129A04 80131B94 8FBF001C */        lw $ra, 0x1c($sp)
  /* 129A08 80131B98 27BD0028 */     addiu $sp, $sp, 0x28
  /* 129A0C 80131B9C 03E00008 */        jr $ra
  /* 129A10 80131BA0 00000000 */       nop 

glabel func_ovl22_80131BA4
  /* 129A14 80131BA4 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 129A18 80131BA8 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 129A1C 80131BAC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129A20 80131BB0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 129A24 80131BB4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 129A28 80131BB8 244E0008 */     addiu $t6, $v0, 8
  /* 129A2C 80131BBC AFA40018 */        sw $a0, 0x18($sp)
  /* 129A30 80131BC0 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 129A34 80131BC4 3C0CE700 */       lui $t4, 0xe700
  /* 129A38 80131BC8 AC4C0000 */        sw $t4, ($v0)
  /* 129A3C 80131BCC AC400004 */        sw $zero, 4($v0)
  /* 129A40 80131BD0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129A44 80131BD4 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 129A48 80131BD8 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 129A4C 80131BDC 244F0008 */     addiu $t7, $v0, 8
  /* 129A50 80131BE0 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 129A54 80131BE4 AC400004 */        sw $zero, 4($v0)
  /* 129A58 80131BE8 AC580000 */        sw $t8, ($v0)
  /* 129A5C 80131BEC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129A60 80131BF0 340FFF3F */       ori $t7, $zero, 0xff3f
  /* 129A64 80131BF4 3C0EFA00 */       lui $t6, 0xfa00
  /* 129A68 80131BF8 24590008 */     addiu $t9, $v0, 8
  /* 129A6C 80131BFC AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 129A70 80131C00 AC4F0004 */        sw $t7, 4($v0)
  /* 129A74 80131C04 AC4E0000 */        sw $t6, ($v0)
  /* 129A78 80131C08 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129A7C 80131C0C 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 129A80 80131C10 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 129A84 80131C14 24580008 */     addiu $t8, $v0, 8
  /* 129A88 80131C18 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 129A8C 80131C1C 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 129A90 80131C20 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 129A94 80131C24 AC4E0004 */        sw $t6, 4($v0)
  /* 129A98 80131C28 AC590000 */        sw $t9, ($v0)
  /* 129A9C 80131C2C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129AA0 80131C30 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 129AA4 80131C34 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 129AA8 80131C38 244F0008 */     addiu $t7, $v0, 8
  /* 129AAC 80131C3C AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 129AB0 80131C40 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 129AB4 80131C44 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 129AB8 80131C48 AC580004 */        sw $t8, 4($v0)
  /* 129ABC 80131C4C AC4D0000 */        sw $t5, ($v0)
  /* 129AC0 80131C50 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129AC4 80131C54 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 129AC8 80131C58 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 129ACC 80131C5C 24590008 */     addiu $t9, $v0, 8
  /* 129AD0 80131C60 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 129AD4 80131C64 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 129AD8 80131C68 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 129ADC 80131C6C AC4F0004 */        sw $t7, 4($v0)
  /* 129AE0 80131C70 AC4E0000 */        sw $t6, ($v0)
  /* 129AE4 80131C74 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129AE8 80131C78 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 129AEC 80131C7C 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 129AF0 80131C80 24580008 */     addiu $t8, $v0, 8
  /* 129AF4 80131C84 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 129AF8 80131C88 AC400004 */        sw $zero, 4($v0)
  /* 129AFC 80131C8C AC4C0000 */        sw $t4, ($v0)
  /* 129B00 80131C90 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 129B04 80131C94 24590008 */     addiu $t9, $v0, 8
  /* 129B08 80131C98 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 129B0C 80131C9C AC4E0004 */        sw $t6, 4($v0)
  /* 129B10 80131CA0 0C0333AB */       jal func_ovl0_800CCEAC
  /* 129B14 80131CA4 AC4D0000 */        sw $t5, ($v0)
  /* 129B18 80131CA8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 129B1C 80131CAC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 129B20 80131CB0 03E00008 */        jr $ra
  /* 129B24 80131CB4 00000000 */       nop 

glabel func_ovl22_80131CB8
  /* 129B28 80131CB8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 129B2C 80131CBC AFBF001C */        sw $ra, 0x1c($sp)
  /* 129B30 80131CC0 00002025 */        or $a0, $zero, $zero
  /* 129B34 80131CC4 00002825 */        or $a1, $zero, $zero
  /* 129B38 80131CC8 24060004 */     addiu $a2, $zero, 4
  /* 129B3C 80131CCC 0C00265A */       jal omMakeGObjCommon
  /* 129B40 80131CD0 3C078000 */       lui $a3, 0x8000
  /* 129B44 80131CD4 3C058013 */       lui $a1, %hi(func_ovl22_80131BA4)
  /* 129B48 80131CD8 240EFFFF */     addiu $t6, $zero, -1
  /* 129B4C 80131CDC AFAE0010 */        sw $t6, 0x10($sp)
  /* 129B50 80131CE0 24A51BA4 */     addiu $a1, $a1, %lo(func_ovl22_80131BA4)
  /* 129B54 80131CE4 00402025 */        or $a0, $v0, $zero
  /* 129B58 80131CE8 24060002 */     addiu $a2, $zero, 2
  /* 129B5C 80131CEC 0C00277D */       jal func_80009DF4
  /* 129B60 80131CF0 3C078000 */       lui $a3, 0x8000
  /* 129B64 80131CF4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 129B68 80131CF8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 129B6C 80131CFC 03E00008 */        jr $ra
  /* 129B70 80131D00 00000000 */       nop 

glabel func_ovl22_80131D04
  /* 129B74 80131D04 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 129B78 80131D08 AFBF001C */        sw $ra, 0x1c($sp)
  /* 129B7C 80131D0C 00002025 */        or $a0, $zero, $zero
  /* 129B80 80131D10 00002825 */        or $a1, $zero, $zero
  /* 129B84 80131D14 24060005 */     addiu $a2, $zero, 5
  /* 129B88 80131D18 0C00265A */       jal omMakeGObjCommon
  /* 129B8C 80131D1C 3C078000 */       lui $a3, 0x8000
  /* 129B90 80131D20 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 129B94 80131D24 240EFFFF */     addiu $t6, $zero, -1
  /* 129B98 80131D28 AFA20024 */        sw $v0, 0x24($sp)
  /* 129B9C 80131D2C AFAE0010 */        sw $t6, 0x10($sp)
  /* 129BA0 80131D30 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 129BA4 80131D34 00402025 */        or $a0, $v0, $zero
  /* 129BA8 80131D38 24060003 */     addiu $a2, $zero, 3
  /* 129BAC 80131D3C 0C00277D */       jal func_80009DF4
  /* 129BB0 80131D40 3C078000 */       lui $a3, 0x8000
  /* 129BB4 80131D44 3C0F8013 */       lui $t7, %hi(D_ovl22_8013298C)
  /* 129BB8 80131D48 8DEF298C */        lw $t7, %lo(D_ovl22_8013298C)($t7)
  /* 129BBC 80131D4C 3C180000 */       lui $t8, %hi(D_NF_00005300)
  /* 129BC0 80131D50 27185300 */     addiu $t8, $t8, %lo(D_NF_00005300)
  /* 129BC4 80131D54 8FA40024 */        lw $a0, 0x24($sp)
  /* 129BC8 80131D58 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 129BCC 80131D5C 01F82821 */      addu $a1, $t7, $t8
  /* 129BD0 80131D60 94590024 */       lhu $t9, 0x24($v0)
  /* 129BD4 80131D64 3C01430C */       lui $at, (0x430C0000 >> 16) # 140.0
  /* 129BD8 80131D68 44812000 */      mtc1 $at, $f4 # 140.0 to cop1
  /* 129BDC 80131D6C 3C014278 */       lui $at, (0x42780000 >> 16) # 62.0
  /* 129BE0 80131D70 44813000 */      mtc1 $at, $f6 # 62.0 to cop1
  /* 129BE4 80131D74 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 129BE8 80131D78 A4490024 */        sh $t1, 0x24($v0)
  /* 129BEC 80131D7C 352A0001 */       ori $t2, $t1, 1
  /* 129BF0 80131D80 A44A0024 */        sh $t2, 0x24($v0)
  /* 129BF4 80131D84 E4440058 */      swc1 $f4, 0x58($v0)
  /* 129BF8 80131D88 E446005C */      swc1 $f6, 0x5c($v0)
  /* 129BFC 80131D8C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 129C00 80131D90 27BD0028 */     addiu $sp, $sp, 0x28
  /* 129C04 80131D94 03E00008 */        jr $ra
  /* 129C08 80131D98 00000000 */       nop 

glabel func_ovl22_80131D9C
  /* 129C0C 80131D9C 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 129C10 80131DA0 3C0F8013 */       lui $t7, %hi(D_ovl22_80132548)
  /* 129C14 80131DA4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 129C18 80131DA8 AFA40080 */        sw $a0, 0x80($sp)
  /* 129C1C 80131DAC 25EF2548 */     addiu $t7, $t7, %lo(D_ovl22_80132548)
  /* 129C20 80131DB0 8DF90000 */        lw $t9, ($t7) # D_ovl22_80132548 + 0
  /* 129C24 80131DB4 27AE005C */     addiu $t6, $sp, 0x5c
  /* 129C28 80131DB8 8DF80004 */        lw $t8, 4($t7) # D_ovl22_80132548 + 4
  /* 129C2C 80131DBC ADD90000 */        sw $t9, ($t6)
  /* 129C30 80131DC0 8DF90008 */        lw $t9, 8($t7) # D_ovl22_80132548 + 8
  /* 129C34 80131DC4 ADD80004 */        sw $t8, 4($t6)
  /* 129C38 80131DC8 8DF8000C */        lw $t8, 0xc($t7) # D_ovl22_80132548 + 12
  /* 129C3C 80131DCC ADD90008 */        sw $t9, 8($t6)
  /* 129C40 80131DD0 8DF90010 */        lw $t9, 0x10($t7) # D_ovl22_80132548 + 16
  /* 129C44 80131DD4 ADD8000C */        sw $t8, 0xc($t6)
  /* 129C48 80131DD8 8DF80014 */        lw $t8, 0x14($t7) # D_ovl22_80132548 + 20
  /* 129C4C 80131DDC ADD90010 */        sw $t9, 0x10($t6)
  /* 129C50 80131DE0 8DF90018 */        lw $t9, 0x18($t7) # D_ovl22_80132548 + 24
  /* 129C54 80131DE4 3C098013 */       lui $t1, %hi(D_ovl22_80132564)
  /* 129C58 80131DE8 25292564 */     addiu $t1, $t1, %lo(D_ovl22_80132564)
  /* 129C5C 80131DEC 252C0030 */     addiu $t4, $t1, 0x30
  /* 129C60 80131DF0 27A80024 */     addiu $t0, $sp, 0x24
  /* 129C64 80131DF4 ADD80014 */        sw $t8, 0x14($t6)
  /* 129C68 80131DF8 ADD90018 */        sw $t9, 0x18($t6)
  .L80131DFC:
  /* 129C6C 80131DFC 8D2B0000 */        lw $t3, ($t1) # D_ovl22_80132564 + 0
  /* 129C70 80131E00 2529000C */     addiu $t1, $t1, 0xc
  /* 129C74 80131E04 2508000C */     addiu $t0, $t0, 0xc
  /* 129C78 80131E08 AD0BFFF4 */        sw $t3, -0xc($t0)
  /* 129C7C 80131E0C 8D2AFFF8 */        lw $t2, -8($t1) # D_ovl22_80132564 + -8
  /* 129C80 80131E10 AD0AFFF8 */        sw $t2, -8($t0)
  /* 129C84 80131E14 8D2BFFFC */        lw $t3, -4($t1) # D_ovl22_80132564 + -4
  /* 129C88 80131E18 152CFFF8 */       bne $t1, $t4, .L80131DFC
  /* 129C8C 80131E1C AD0BFFFC */        sw $t3, -4($t0)
  /* 129C90 80131E20 8D2B0000 */        lw $t3, ($t1) # D_ovl22_80132564 + 0
  /* 129C94 80131E24 8D2A0004 */        lw $t2, 4($t1) # D_ovl22_80132564 + 4
  /* 129C98 80131E28 00002025 */        or $a0, $zero, $zero
  /* 129C9C 80131E2C 00002825 */        or $a1, $zero, $zero
  /* 129CA0 80131E30 24060003 */     addiu $a2, $zero, 3
  /* 129CA4 80131E34 3C078000 */       lui $a3, 0x8000
  /* 129CA8 80131E38 AD0B0000 */        sw $t3, ($t0)
  /* 129CAC 80131E3C 0C00265A */       jal omMakeGObjCommon
  /* 129CB0 80131E40 AD0A0004 */        sw $t2, 4($t0)
  /* 129CB4 80131E44 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 129CB8 80131E48 240DFFFF */     addiu $t5, $zero, -1
  /* 129CBC 80131E4C AFA2007C */        sw $v0, 0x7c($sp)
  /* 129CC0 80131E50 AFAD0010 */        sw $t5, 0x10($sp)
  /* 129CC4 80131E54 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 129CC8 80131E58 00402025 */        or $a0, $v0, $zero
  /* 129CCC 80131E5C 24060001 */     addiu $a2, $zero, 1
  /* 129CD0 80131E60 0C00277D */       jal func_80009DF4
  /* 129CD4 80131E64 3C078000 */       lui $a3, 0x8000
  /* 129CD8 80131E68 8FAE0080 */        lw $t6, 0x80($sp)
  /* 129CDC 80131E6C 3C198013 */       lui $t9, %hi(D_ovl22_8013298C)
  /* 129CE0 80131E70 8F39298C */        lw $t9, %lo(D_ovl22_8013298C)($t9)
  /* 129CE4 80131E74 000E7880 */       sll $t7, $t6, 2
  /* 129CE8 80131E78 03AFC021 */      addu $t8, $sp, $t7
  /* 129CEC 80131E7C 8F18005C */        lw $t8, 0x5c($t8)
  /* 129CF0 80131E80 8FA4007C */        lw $a0, 0x7c($sp)
  /* 129CF4 80131E84 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 129CF8 80131E88 03192821 */      addu $a1, $t8, $t9
  /* 129CFC 80131E8C 944C0024 */       lhu $t4, 0x24($v0)
  /* 129D00 80131E90 27AE0024 */     addiu $t6, $sp, 0x24
  /* 129D04 80131E94 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 129D08 80131E98 A4480024 */        sh $t0, 0x24($v0)
  /* 129D0C 80131E9C 350A0001 */       ori $t2, $t0, 1
  /* 129D10 80131EA0 A44A0024 */        sh $t2, 0x24($v0)
  /* 129D14 80131EA4 8FAB0080 */        lw $t3, 0x80($sp)
  /* 129D18 80131EA8 000B68C0 */       sll $t5, $t3, 3
  /* 129D1C 80131EAC 01AE1821 */      addu $v1, $t5, $t6
  /* 129D20 80131EB0 8C6F0000 */        lw $t7, ($v1)
  /* 129D24 80131EB4 448F2000 */      mtc1 $t7, $f4
  /* 129D28 80131EB8 00000000 */       nop 
  /* 129D2C 80131EBC 468021A0 */   cvt.s.w $f6, $f4
  /* 129D30 80131EC0 E4460058 */      swc1 $f6, 0x58($v0)
  /* 129D34 80131EC4 8C780004 */        lw $t8, 4($v1)
  /* 129D38 80131EC8 44984000 */      mtc1 $t8, $f8
  /* 129D3C 80131ECC 00000000 */       nop 
  /* 129D40 80131ED0 468042A0 */   cvt.s.w $f10, $f8
  /* 129D44 80131ED4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 129D48 80131ED8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 129D4C 80131EDC 27BD0080 */     addiu $sp, $sp, 0x80
  /* 129D50 80131EE0 03E00008 */        jr $ra
  /* 129D54 80131EE4 00000000 */       nop 

glabel func_ovl22_80131EE8
  /* 129D58 80131EE8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 129D5C 80131EEC 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 129D60 80131EF0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 129D64 80131EF4 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 129D68 80131EF8 240F0046 */     addiu $t7, $zero, 0x46
  /* 129D6C 80131EFC 24180000 */     addiu $t8, $zero, 0
  /* 129D70 80131F00 24190004 */     addiu $t9, $zero, 4
  /* 129D74 80131F04 2408FFFF */     addiu $t0, $zero, -1
  /* 129D78 80131F08 24090001 */     addiu $t1, $zero, 1
  /* 129D7C 80131F0C 240A0001 */     addiu $t2, $zero, 1
  /* 129D80 80131F10 AFAA0030 */        sw $t2, 0x30($sp)
  /* 129D84 80131F14 AFA90028 */        sw $t1, 0x28($sp)
  /* 129D88 80131F18 AFA80020 */        sw $t0, 0x20($sp)
  /* 129D8C 80131F1C AFB9001C */        sw $t9, 0x1c($sp)
  /* 129D90 80131F20 AFB80018 */        sw $t8, 0x18($sp)
  /* 129D94 80131F24 AFAF0014 */        sw $t7, 0x14($sp)
  /* 129D98 80131F28 AFAE0010 */        sw $t6, 0x10($sp)
  /* 129D9C 80131F2C AFA00024 */        sw $zero, 0x24($sp)
  /* 129DA0 80131F30 AFA0002C */        sw $zero, 0x2c($sp)
  /* 129DA4 80131F34 AFA00034 */        sw $zero, 0x34($sp)
  /* 129DA8 80131F38 24040001 */     addiu $a0, $zero, 1
  /* 129DAC 80131F3C 00002825 */        or $a1, $zero, $zero
  /* 129DB0 80131F40 24060001 */     addiu $a2, $zero, 1
  /* 129DB4 80131F44 0C002E4F */       jal func_8000B93C
  /* 129DB8 80131F48 3C078000 */       lui $a3, 0x8000
  /* 129DBC 80131F4C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 129DC0 80131F50 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 129DC4 80131F54 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 129DC8 80131F58 8C430074 */        lw $v1, 0x74($v0)
  /* 129DCC 80131F5C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 129DD0 80131F60 44050000 */      mfc1 $a1, $f0
  /* 129DD4 80131F64 44060000 */      mfc1 $a2, $f0
  /* 129DD8 80131F68 3C07439B */       lui $a3, 0x439b
  /* 129DDC 80131F6C 24640008 */     addiu $a0, $v1, 8
  /* 129DE0 80131F70 0C001C20 */       jal func_80007080
  /* 129DE4 80131F74 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 129DE8 80131F78 8FBF003C */        lw $ra, 0x3c($sp)
  /* 129DEC 80131F7C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 129DF0 80131F80 03E00008 */        jr $ra
  /* 129DF4 80131F84 00000000 */       nop 

glabel func_ovl22_80131F88
  /* 129DF8 80131F88 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 129DFC 80131F8C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 129E00 80131F90 AFBF003C */        sw $ra, 0x3c($sp)
  /* 129E04 80131F94 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 129E08 80131F98 240F0028 */     addiu $t7, $zero, 0x28
  /* 129E0C 80131F9C 24180000 */     addiu $t8, $zero, 0
  /* 129E10 80131FA0 24190002 */     addiu $t9, $zero, 2
  /* 129E14 80131FA4 2408FFFF */     addiu $t0, $zero, -1
  /* 129E18 80131FA8 24090001 */     addiu $t1, $zero, 1
  /* 129E1C 80131FAC 240A0001 */     addiu $t2, $zero, 1
  /* 129E20 80131FB0 AFAA0030 */        sw $t2, 0x30($sp)
  /* 129E24 80131FB4 AFA90028 */        sw $t1, 0x28($sp)
  /* 129E28 80131FB8 AFA80020 */        sw $t0, 0x20($sp)
  /* 129E2C 80131FBC AFB9001C */        sw $t9, 0x1c($sp)
  /* 129E30 80131FC0 AFB80018 */        sw $t8, 0x18($sp)
  /* 129E34 80131FC4 AFAF0014 */        sw $t7, 0x14($sp)
  /* 129E38 80131FC8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 129E3C 80131FCC AFA00024 */        sw $zero, 0x24($sp)
  /* 129E40 80131FD0 AFA0002C */        sw $zero, 0x2c($sp)
  /* 129E44 80131FD4 AFA00034 */        sw $zero, 0x34($sp)
  /* 129E48 80131FD8 24040001 */     addiu $a0, $zero, 1
  /* 129E4C 80131FDC 00002825 */        or $a1, $zero, $zero
  /* 129E50 80131FE0 24060001 */     addiu $a2, $zero, 1
  /* 129E54 80131FE4 0C002E4F */       jal func_8000B93C
  /* 129E58 80131FE8 3C078000 */       lui $a3, 0x8000
  /* 129E5C 80131FEC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 129E60 80131FF0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 129E64 80131FF4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 129E68 80131FF8 8C430074 */        lw $v1, 0x74($v0)
  /* 129E6C 80131FFC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 129E70 80132000 44050000 */      mfc1 $a1, $f0
  /* 129E74 80132004 44060000 */      mfc1 $a2, $f0
  /* 129E78 80132008 3C07439B */       lui $a3, 0x439b
  /* 129E7C 8013200C 24640008 */     addiu $a0, $v1, 8
  /* 129E80 80132010 0C001C20 */       jal func_80007080
  /* 129E84 80132014 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 129E88 80132018 8FBF003C */        lw $ra, 0x3c($sp)
  /* 129E8C 8013201C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 129E90 80132020 03E00008 */        jr $ra
  /* 129E94 80132024 00000000 */       nop 

glabel func_ovl22_80132028
  /* 129E98 80132028 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 129E9C 8013202C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 129EA0 80132030 AFBF003C */        sw $ra, 0x3c($sp)
  /* 129EA4 80132034 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 129EA8 80132038 240F0050 */     addiu $t7, $zero, 0x50
  /* 129EAC 8013203C 24180000 */     addiu $t8, $zero, 0
  /* 129EB0 80132040 24190001 */     addiu $t9, $zero, 1
  /* 129EB4 80132044 2408FFFF */     addiu $t0, $zero, -1
  /* 129EB8 80132048 24090001 */     addiu $t1, $zero, 1
  /* 129EBC 8013204C 240A0001 */     addiu $t2, $zero, 1
  /* 129EC0 80132050 AFAA0030 */        sw $t2, 0x30($sp)
  /* 129EC4 80132054 AFA90028 */        sw $t1, 0x28($sp)
  /* 129EC8 80132058 AFA80020 */        sw $t0, 0x20($sp)
  /* 129ECC 8013205C AFB9001C */        sw $t9, 0x1c($sp)
  /* 129ED0 80132060 AFB80018 */        sw $t8, 0x18($sp)
  /* 129ED4 80132064 AFAF0014 */        sw $t7, 0x14($sp)
  /* 129ED8 80132068 AFAE0010 */        sw $t6, 0x10($sp)
  /* 129EDC 8013206C AFA00024 */        sw $zero, 0x24($sp)
  /* 129EE0 80132070 AFA0002C */        sw $zero, 0x2c($sp)
  /* 129EE4 80132074 AFA00034 */        sw $zero, 0x34($sp)
  /* 129EE8 80132078 24040001 */     addiu $a0, $zero, 1
  /* 129EEC 8013207C 00002825 */        or $a1, $zero, $zero
  /* 129EF0 80132080 24060001 */     addiu $a2, $zero, 1
  /* 129EF4 80132084 0C002E4F */       jal func_8000B93C
  /* 129EF8 80132088 3C078000 */       lui $a3, 0x8000
  /* 129EFC 8013208C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 129F00 80132090 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 129F04 80132094 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 129F08 80132098 8C430074 */        lw $v1, 0x74($v0)
  /* 129F0C 8013209C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 129F10 801320A0 44050000 */      mfc1 $a1, $f0
  /* 129F14 801320A4 44060000 */      mfc1 $a2, $f0
  /* 129F18 801320A8 3C07439B */       lui $a3, 0x439b
  /* 129F1C 801320AC 24640008 */     addiu $a0, $v1, 8
  /* 129F20 801320B0 0C001C20 */       jal func_80007080
  /* 129F24 801320B4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 129F28 801320B8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 129F2C 801320BC 27BD0040 */     addiu $sp, $sp, 0x40
  /* 129F30 801320C0 03E00008 */        jr $ra
  /* 129F34 801320C4 00000000 */       nop 

glabel func_ovl22_801320C8
  /* 129F38 801320C8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 129F3C 801320CC 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 129F40 801320D0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 129F44 801320D4 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 129F48 801320D8 240F003C */     addiu $t7, $zero, 0x3c
  /* 129F4C 801320DC 24180000 */     addiu $t8, $zero, 0
  /* 129F50 801320E0 24190008 */     addiu $t9, $zero, 8
  /* 129F54 801320E4 2408FFFF */     addiu $t0, $zero, -1
  /* 129F58 801320E8 24090001 */     addiu $t1, $zero, 1
  /* 129F5C 801320EC 240A0001 */     addiu $t2, $zero, 1
  /* 129F60 801320F0 AFAA0030 */        sw $t2, 0x30($sp)
  /* 129F64 801320F4 AFA90028 */        sw $t1, 0x28($sp)
  /* 129F68 801320F8 AFA80020 */        sw $t0, 0x20($sp)
  /* 129F6C 801320FC AFB9001C */        sw $t9, 0x1c($sp)
  /* 129F70 80132100 AFB80018 */        sw $t8, 0x18($sp)
  /* 129F74 80132104 AFAF0014 */        sw $t7, 0x14($sp)
  /* 129F78 80132108 AFAE0010 */        sw $t6, 0x10($sp)
  /* 129F7C 8013210C AFA00024 */        sw $zero, 0x24($sp)
  /* 129F80 80132110 AFA0002C */        sw $zero, 0x2c($sp)
  /* 129F84 80132114 AFA00034 */        sw $zero, 0x34($sp)
  /* 129F88 80132118 24040001 */     addiu $a0, $zero, 1
  /* 129F8C 8013211C 00002825 */        or $a1, $zero, $zero
  /* 129F90 80132120 24060001 */     addiu $a2, $zero, 1
  /* 129F94 80132124 0C002E4F */       jal func_8000B93C
  /* 129F98 80132128 3C078000 */       lui $a3, 0x8000
  /* 129F9C 8013212C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 129FA0 80132130 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 129FA4 80132134 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 129FA8 80132138 8C430074 */        lw $v1, 0x74($v0)
  /* 129FAC 8013213C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 129FB0 80132140 44050000 */      mfc1 $a1, $f0
  /* 129FB4 80132144 44060000 */      mfc1 $a2, $f0
  /* 129FB8 80132148 3C07439B */       lui $a3, 0x439b
  /* 129FBC 8013214C 24640008 */     addiu $a0, $v1, 8
  /* 129FC0 80132150 0C001C20 */       jal func_80007080
  /* 129FC4 80132154 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 129FC8 80132158 8FBF003C */        lw $ra, 0x3c($sp)
  /* 129FCC 8013215C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 129FD0 80132160 03E00008 */        jr $ra
  /* 129FD4 80132164 00000000 */       nop 

glabel func_ovl22_80132168
  /* 129FD8 80132168 3C0E8013 */       lui $t6, %hi(D_ovl22_8013265C)
  /* 129FDC 8013216C 8DCE265C */        lw $t6, %lo(D_ovl22_8013265C)($t6)
  /* 129FE0 80132170 3C0F800A */       lui $t7, %hi(gSceneData)
  /* 129FE4 80132174 25EF4AD0 */     addiu $t7, $t7, %lo(gSceneData)
  /* 129FE8 80132178 01CF1021 */      addu $v0, $t6, $t7
  /* 129FEC 8013217C 90580002 */       lbu $t8, 2($v0)
  /* 129FF0 80132180 3C018013 */       lui $at, %hi(D_ovl22_80132658)
  /* 129FF4 80132184 24190007 */     addiu $t9, $zero, 7
  /* 129FF8 80132188 AC382658 */        sw $t8, %lo(D_ovl22_80132658)($at)
  /* 129FFC 8013218C A0590002 */        sb $t9, 2($v0)
  /* 12A000 80132190 3C018013 */       lui $at, %hi(D_ovl22_80132660)
  /* 12A004 80132194 AC202660 */        sw $zero, %lo(D_ovl22_80132660)($at)
  /* 12A008 80132198 3C018013 */       lui $at, %hi(D_ovl22_80132664)
  /* 12A00C 8013219C 03E00008 */        jr $ra
  /* 12A010 801321A0 AC202664 */        sw $zero, %lo(D_ovl22_80132664)($at)

glabel func_ovl22_801321A4
  /* 12A014 801321A4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12A018 801321A8 3C0E8013 */       lui $t6, %hi(D_ovl22_8013259C)
  /* 12A01C 801321AC AFBF0014 */        sw $ra, 0x14($sp)
  /* 12A020 801321B0 25CE259C */     addiu $t6, $t6, %lo(D_ovl22_8013259C)
  /* 12A024 801321B4 8DD80000 */        lw $t8, ($t6) # D_ovl22_8013259C + 0
  /* 12A028 801321B8 27A50024 */     addiu $a1, $sp, 0x24
  /* 12A02C 801321BC 3C04800A */       lui $a0, %hi(gSaveData)
  /* 12A030 801321C0 3C038013 */       lui $v1, %hi(D_ovl22_80132658)
  /* 12A034 801321C4 ACB80000 */        sw $t8, ($a1)
  /* 12A038 801321C8 8C632658 */        lw $v1, %lo(D_ovl22_80132658)($v1)
  /* 12A03C 801321CC 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 12A040 801321D0 90990457 */       lbu $t9, 0x457($a0) # gSaveData + 1111
  /* 12A044 801321D4 24080001 */     addiu $t0, $zero, 1
  /* 12A048 801321D8 00684804 */      sllv $t1, $t0, $v1
  /* 12A04C 801321DC 03295025 */        or $t2, $t9, $t1
  /* 12A050 801321E0 A08A0457 */        sb $t2, 0x457($a0) # gSaveData + 1111
  /* 12A054 801321E4 10600007 */      beqz $v1, .L80132204
  /* 12A058 801321E8 00601025 */        or $v0, $v1, $zero
  /* 12A05C 801321EC 24010001 */     addiu $at, $zero, 1
  /* 12A060 801321F0 10410004 */       beq $v0, $at, .L80132204
  /* 12A064 801321F4 24010002 */     addiu $at, $zero, 2
  /* 12A068 801321F8 10410002 */       beq $v0, $at, .L80132204
  /* 12A06C 801321FC 24010003 */     addiu $at, $zero, 3
  /* 12A070 80132200 14410008 */       bne $v0, $at, .L80132224
  .L80132204:
  /* 12A074 80132204 00A35821 */      addu $t3, $a1, $v1
  /* 12A078 80132208 91620000 */       lbu $v0, ($t3)
  /* 12A07C 8013220C 948C0458 */       lhu $t4, 0x458($a0) # gSaveData + 1112
  /* 12A080 80132210 240D0001 */     addiu $t5, $zero, 1
  /* 12A084 80132214 004D7004 */      sllv $t6, $t5, $v0
  /* 12A088 80132218 018E7825 */        or $t7, $t4, $t6
  /* 12A08C 8013221C A48F0458 */        sh $t7, 0x458($a0) # gSaveData + 1112
  /* 12A090 80132220 A0820456 */        sb $v0, 0x456($a0) # gSaveData + 1110
  .L80132224:
  /* 12A094 80132224 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 12A098 80132228 00000000 */       nop 
  /* 12A09C 8013222C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12A0A0 80132230 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12A0A4 80132234 03E00008 */        jr $ra
  /* 12A0A8 80132238 00000000 */       nop 

glabel func_ovl22_8013223C
  /* 12A0AC 8013223C 3C028013 */       lui $v0, %hi(D_ovl22_80132664)
  /* 12A0B0 80132240 24422664 */     addiu $v0, $v0, %lo(D_ovl22_80132664)
  /* 12A0B4 80132244 8C4E0000 */        lw $t6, ($v0) # D_ovl22_80132664 + 0
  /* 12A0B8 80132248 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12A0BC 8013224C AFBF0014 */        sw $ra, 0x14($sp)
  /* 12A0C0 80132250 25CF0001 */     addiu $t7, $t6, 1
  /* 12A0C4 80132254 29E10078 */      slti $at, $t7, 0x78
  /* 12A0C8 80132258 AFA40018 */        sw $a0, 0x18($sp)
  /* 12A0CC 8013225C 14200019 */      bnez $at, .L801322C4
  /* 12A0D0 80132260 AC4F0000 */        sw $t7, ($v0) # D_ovl22_80132664 + 0
  /* 12A0D4 80132264 3C038013 */       lui $v1, %hi(D_ovl22_80132660)
  /* 12A0D8 80132268 24632660 */     addiu $v1, $v1, %lo(D_ovl22_80132660)
  /* 12A0DC 8013226C 8C620000 */        lw $v0, ($v1) # D_ovl22_80132660 + 0
  /* 12A0E0 80132270 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12A0E4 80132274 10400002 */      beqz $v0, .L80132280
  /* 12A0E8 80132278 2459FFFF */     addiu $t9, $v0, -1
  /* 12A0EC 8013227C AC790000 */        sw $t9, ($v1) # D_ovl22_80132660 + 0
  .L80132280:
  /* 12A0F0 80132280 0C0E4281 */       jal func_ovl1_80390A04
  /* 12A0F4 80132284 2405001E */     addiu $a1, $zero, 0x1e
  /* 12A0F8 80132288 10400006 */      beqz $v0, .L801322A4
  /* 12A0FC 8013228C 2404FFE2 */     addiu $a0, $zero, -0x1e
  /* 12A100 80132290 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 12A104 80132294 2405001E */     addiu $a1, $zero, 0x1e
  /* 12A108 80132298 10400002 */      beqz $v0, .L801322A4
  /* 12A10C 8013229C 3C018013 */       lui $at, %hi(D_ovl22_80132660)
  /* 12A110 801322A0 AC202660 */        sw $zero, %lo(D_ovl22_80132660)($at)
  .L801322A4:
  /* 12A114 801322A4 0C0E41DB */       jal func_ovl1_8039076C
  /* 12A118 801322A8 3404D000 */       ori $a0, $zero, 0xd000
  /* 12A11C 801322AC 50400006 */      beql $v0, $zero, .L801322C8
  /* 12A120 801322B0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 12A124 801322B4 0C04C869 */       jal func_ovl22_801321A4
  /* 12A128 801322B8 00000000 */       nop 
  /* 12A12C 801322BC 0C00171D */       jal func_80005C74
  /* 12A130 801322C0 00000000 */       nop 
  .L801322C4:
  /* 12A134 801322C4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801322C8:
  /* 12A138 801322C8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 12A13C 801322CC 03E00008 */        jr $ra
  /* 12A140 801322D0 00000000 */       nop 

glabel func_ovl22_801322D4
  /* 12A144 801322D4 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 12A148 801322D8 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 12A14C 801322DC 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 12A150 801322E0 3C188013 */       lui $t8, %hi(D_ovl22_80132668)
  /* 12A154 801322E4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 12A158 801322E8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 12A15C 801322EC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 12A160 801322F0 27182668 */     addiu $t8, $t8, %lo(D_ovl22_80132668)
  /* 12A164 801322F4 24190064 */     addiu $t9, $zero, 0x64
  /* 12A168 801322F8 AFAE0028 */        sw $t6, 0x28($sp)
  /* 12A16C 801322FC AFAF002C */        sw $t7, 0x2c($sp)
  /* 12A170 80132300 AFA00030 */        sw $zero, 0x30($sp)
  /* 12A174 80132304 AFA00034 */        sw $zero, 0x34($sp)
  /* 12A178 80132308 AFB80038 */        sw $t8, 0x38($sp)
  /* 12A17C 8013230C AFB9003C */        sw $t9, 0x3c($sp)
  /* 12A180 80132310 AFA00040 */        sw $zero, 0x40($sp)
  /* 12A184 80132314 AFA00044 */        sw $zero, 0x44($sp)
  /* 12A188 80132318 0C0337DE */       jal rldm_initialize
  /* 12A18C 8013231C 27A40028 */     addiu $a0, $sp, 0x28
  /* 12A190 80132320 3C048013 */       lui $a0, %hi(D_ovl22_80132500)
  /* 12A194 80132324 24842500 */     addiu $a0, $a0, %lo(D_ovl22_80132500)
  /* 12A198 80132328 0C0337BB */       jal rldm_bytes_need_to_load
  /* 12A19C 8013232C 24050002 */     addiu $a1, $zero, 2
  /* 12A1A0 80132330 00402025 */        or $a0, $v0, $zero
  /* 12A1A4 80132334 0C001260 */       jal hal_alloc
  /* 12A1A8 80132338 24050010 */     addiu $a1, $zero, 0x10
  /* 12A1AC 8013233C 3C048013 */       lui $a0, %hi(D_ovl22_80132500)
  /* 12A1B0 80132340 3C068013 */       lui $a2, %hi(D_ovl22_80132988)
  /* 12A1B4 80132344 24C62988 */     addiu $a2, $a2, %lo(D_ovl22_80132988)
  /* 12A1B8 80132348 24842500 */     addiu $a0, $a0, %lo(D_ovl22_80132500)
  /* 12A1BC 8013234C 24050002 */     addiu $a1, $zero, 2
  /* 12A1C0 80132350 0C033781 */       jal rldm_load_files_into
  /* 12A1C4 80132354 00403825 */        or $a3, $v0, $zero
  /* 12A1C8 80132358 3C058013 */       lui $a1, %hi(func_ovl22_8013223C)
  /* 12A1CC 8013235C 24A5223C */     addiu $a1, $a1, %lo(func_ovl22_8013223C)
  /* 12A1D0 80132360 00002025 */        or $a0, $zero, $zero
  /* 12A1D4 80132364 00003025 */        or $a2, $zero, $zero
  /* 12A1D8 80132368 0C00265A */       jal omMakeGObjCommon
  /* 12A1DC 8013236C 3C078000 */       lui $a3, 0x8000
  /* 12A1E0 80132370 00002025 */        or $a0, $zero, $zero
  /* 12A1E4 80132374 3C058000 */       lui $a1, 0x8000
  /* 12A1E8 80132378 24060064 */     addiu $a2, $zero, 0x64
  /* 12A1EC 8013237C 00003825 */        or $a3, $zero, $zero
  /* 12A1F0 80132380 0C002E7F */       jal func_8000B9FC
  /* 12A1F4 80132384 AFA00010 */        sw $zero, 0x10($sp)
  /* 12A1F8 80132388 0C04C85A */       jal func_ovl22_80132168
  /* 12A1FC 8013238C 00000000 */       nop 
  /* 12A200 80132390 0C04C80A */       jal func_ovl22_80132028
  /* 12A204 80132394 00000000 */       nop 
  /* 12A208 80132398 0C04C7E2 */       jal func_ovl22_80131F88
  /* 12A20C 8013239C 00000000 */       nop 
  /* 12A210 801323A0 0C04C7BA */       jal func_ovl22_80131EE8
  /* 12A214 801323A4 00000000 */       nop 
  /* 12A218 801323A8 0C04C832 */       jal func_ovl22_801320C8
  /* 12A21C 801323AC 00000000 */       nop 
  /* 12A220 801323B0 0C04C6C9 */       jal func_ovl22_80131B24
  /* 12A224 801323B4 00000000 */       nop 
  /* 12A228 801323B8 0C04C72E */       jal func_ovl22_80131CB8
  /* 12A22C 801323BC 00000000 */       nop 
  /* 12A230 801323C0 0C04C741 */       jal func_ovl22_80131D04
  /* 12A234 801323C4 00000000 */       nop 
  /* 12A238 801323C8 3C048013 */       lui $a0, %hi(D_ovl22_80132658)
  /* 12A23C 801323CC 0C04C767 */       jal func_ovl22_80131D9C
  /* 12A240 801323D0 8C842658 */        lw $a0, %lo(D_ovl22_80132658)($a0)
  /* 12A244 801323D4 00002025 */        or $a0, $zero, $zero
  /* 12A248 801323D8 0C0082AD */       jal func_80020AB4
  /* 12A24C 801323DC 24050028 */     addiu $a1, $zero, 0x28
  /* 12A250 801323E0 0C009A70 */       jal func_800269C0
  /* 12A254 801323E4 2404000C */     addiu $a0, $zero, 0xc
  /* 12A258 801323E8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12A25C 801323EC 27BD0048 */     addiu $sp, $sp, 0x48
  /* 12A260 801323F0 03E00008 */        jr $ra
  /* 12A264 801323F4 00000000 */       nop 

glabel overlay_set12_entry
  /* 12A268 801323F8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12A26C 801323FC 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 12A270 80132400 3C048013 */       lui $a0, %hi(D_ovl22_801325A0)
  /* 12A274 80132404 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 12A278 80132408 248425A0 */     addiu $a0, $a0, %lo(D_ovl22_801325A0)
  /* 12A27C 8013240C AFBF0024 */        sw $ra, 0x24($sp)
  /* 12A280 80132410 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 12A284 80132414 AFB30020 */        sw $s3, 0x20($sp)
  /* 12A288 80132418 AFB2001C */        sw $s2, 0x1c($sp)
  /* 12A28C 8013241C AFB10018 */        sw $s1, 0x18($sp)
  /* 12A290 80132420 AFB00014 */        sw $s0, 0x14($sp)
  /* 12A294 80132424 0C001C09 */       jal func_80007024
  /* 12A298 80132428 AC8F000C */        sw $t7, 0xc($a0) # D_ovl22_801325A0 + 12
  /* 12A29C 8013242C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 12A2A0 80132430 3C198013 */       lui $t9, %hi(D_NF_80132990)
  /* 12A2A4 80132434 3C108013 */       lui $s0, %hi(D_ovl22_8013265C)
  /* 12A2A8 80132438 3C138013 */       lui $s3, %hi(D_ovl22_801325BC)
  /* 12A2AC 8013243C 27392990 */     addiu $t9, $t9, %lo(D_NF_80132990)
  /* 12A2B0 80132440 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 12A2B4 80132444 267325BC */     addiu $s3, $s3, %lo(D_ovl22_801325BC)
  /* 12A2B8 80132448 2610265C */     addiu $s0, $s0, %lo(D_ovl22_8013265C)
  /* 12A2BC 8013244C 03194023 */      subu $t0, $t8, $t9
  /* 12A2C0 80132450 28010007 */      slti $at, $zero, 7
  /* 12A2C4 80132454 AE680010 */        sw $t0, 0x10($s3) # D_ovl22_801325BC + 16
  /* 12A2C8 80132458 10200012 */      beqz $at, .L801324A4
  /* 12A2CC 8013245C AE000000 */        sw $zero, ($s0) # D_ovl22_8013265C + 0
  /* 12A2D0 80132460 3C11800A */       lui $s1, %hi(gSceneData)
  /* 12A2D4 80132464 26314AD0 */     addiu $s1, $s1, %lo(gSceneData)
  /* 12A2D8 80132468 922A0002 */       lbu $t2, 2($s1) # gSceneData + 2
  /* 12A2DC 8013246C 24120007 */     addiu $s2, $zero, 7
  /* 12A2E0 80132470 124A000C */       beq $s2, $t2, .L801324A4
  /* 12A2E4 80132474 00000000 */       nop 
  .L80132478:
  /* 12A2E8 80132478 0C001A0F */       jal func_8000683C
  /* 12A2EC 8013247C 02602025 */        or $a0, $s3, $zero
  /* 12A2F0 80132480 8E0B0000 */        lw $t3, ($s0) # D_ovl22_8013265C + 0
  /* 12A2F4 80132484 256C0001 */     addiu $t4, $t3, 1
  /* 12A2F8 80132488 29810007 */      slti $at, $t4, 7
  /* 12A2FC 8013248C 10200005 */      beqz $at, .L801324A4
  /* 12A300 80132490 AE0C0000 */        sw $t4, ($s0) # D_ovl22_8013265C + 0
  /* 12A304 80132494 022C6821 */      addu $t5, $s1, $t4
  /* 12A308 80132498 91AE0002 */       lbu $t6, 2($t5)
  /* 12A30C 8013249C 164EFFF6 */       bne $s2, $t6, .L80132478
  /* 12A310 801324A0 00000000 */       nop 
  .L801324A4:
  /* 12A314 801324A4 3C11800A */       lui $s1, %hi(gSceneData)
  /* 12A318 801324A8 26314AD0 */     addiu $s1, $s1, %lo(gSceneData)
  /* 12A31C 801324AC 922F0001 */       lbu $t7, 1($s1) # gSceneData + 1
  /* 12A320 801324B0 24010018 */     addiu $at, $zero, 0x18
  /* 12A324 801324B4 24190010 */     addiu $t9, $zero, 0x10
  /* 12A328 801324B8 55E10006 */      bnel $t7, $at, .L801324D4
  /* 12A32C 801324BC 92280000 */       lbu $t0, ($s1) # gSceneData + 0
  /* 12A330 801324C0 92380000 */       lbu $t8, ($s1) # gSceneData + 0
  /* 12A334 801324C4 A2390000 */        sb $t9, ($s1) # gSceneData + 0
  /* 12A338 801324C8 10000005 */         b .L801324E0
  /* 12A33C 801324CC A2380001 */        sb $t8, 1($s1) # gSceneData + 1
  /* 12A340 801324D0 92280000 */       lbu $t0, ($s1) # gSceneData + 0
  .L801324D4:
  /* 12A344 801324D4 2409001B */     addiu $t1, $zero, 0x1b
  /* 12A348 801324D8 A2290000 */        sb $t1, ($s1) # gSceneData + 0
  /* 12A34C 801324DC A2280001 */        sb $t0, 1($s1) # gSceneData + 1
  .L801324E0:
  /* 12A350 801324E0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12A354 801324E4 8FB00014 */        lw $s0, 0x14($sp)
  /* 12A358 801324E8 8FB10018 */        lw $s1, 0x18($sp)
  /* 12A35C 801324EC 8FB2001C */        lw $s2, 0x1c($sp)
  /* 12A360 801324F0 8FB30020 */        lw $s3, 0x20($sp)
  /* 12A364 801324F4 03E00008 */        jr $ra
  /* 12A368 801324F8 27BD0028 */     addiu $sp, $sp, 0x28

  /* 12A36C 801324FC 00000000 */       nop 

# Likely start of new file
#glabel D_ovl22_80132500   # Routine parsed as data
#  /* 12A370 80132500 00000000 */       nop 
#  /* 12A374 80132504 00000009 */        jr $zero
#glabel D_ovl22_80132508   # Routine parsed as data
#  /* 12A378 80132508 20202000 */      addi $zero, $at, 0x2000
#  /* 12A37C 8013250C 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl22_80132510   # Routine parsed as data
#  /* 12A380 80132510 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 12A384 80132514 FFFFFF00 */        sd $ra, -0x100($ra)
