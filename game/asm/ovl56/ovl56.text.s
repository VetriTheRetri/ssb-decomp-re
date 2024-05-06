.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80134EE0

glabel func_ovl56_80131B00
  /* 17AD50 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17AD54 80131B04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17AD58 80131B08 8C830000 */        lw $v1, ($a0)
  /* 17AD5C 80131B0C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 17AD60 80131B10 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 17AD64 80131B14 246E0008 */     addiu $t6, $v1, 8
  /* 17AD68 80131B18 AC8E0000 */        sw $t6, ($a0)
  /* 17AD6C 80131B1C 3C180002 */       lui $t8, 2
  /* 17AD70 80131B20 AC780004 */        sw $t8, 4($v1)
  /* 17AD74 80131B24 AC6F0000 */        sw $t7, ($v1)
  /* 17AD78 80131B28 0C0E4147 */       jal func_ovl1_8039051C
  /* 17AD7C 80131B2C AFA40028 */        sw $a0, 0x28($sp)
  /* 17AD80 80131B30 0C0E414A */       jal func_ovl1_80390528
  /* 17AD84 80131B34 E7A0001C */      swc1 $f0, 0x1c($sp)
  /* 17AD88 80131B38 44060000 */      mfc1 $a2, $f0
  /* 17AD8C 80131B3C 8FA40028 */        lw $a0, 0x28($sp)
  /* 17AD90 80131B40 0C03F2DC */       jal ftRender_Lights_DisplayLightReflect
  /* 17AD94 80131B44 8FA5001C */        lw $a1, 0x1c($sp)
  /* 17AD98 80131B48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17AD9C 80131B4C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17ADA0 80131B50 03E00008 */        jr $ra
  /* 17ADA4 80131B54 00000000 */       nop 

glabel func_ovl56_80131B58
  /* 17ADA8 80131B58 14A00003 */      bnez $a1, .L80131B68
  /* 17ADAC 80131B5C 00801825 */        or $v1, $a0, $zero
  /* 17ADB0 80131B60 03E00008 */        jr $ra
  /* 17ADB4 80131B64 24020001 */     addiu $v0, $zero, 1

  .L80131B68:
  /* 17ADB8 80131B68 28A10002 */      slti $at, $a1, 2
  /* 17ADBC 80131B6C 1420001F */      bnez $at, .L80131BEC
  /* 17ADC0 80131B70 00A01025 */        or $v0, $a1, $zero
  /* 17ADC4 80131B74 24A7FFFF */     addiu $a3, $a1, -1
  /* 17ADC8 80131B78 30E70003 */      andi $a3, $a3, 3
  /* 17ADCC 80131B7C 00073823 */      negu $a3, $a3
  /* 17ADD0 80131B80 10E00008 */      beqz $a3, .L80131BA4
  /* 17ADD4 80131B84 00E53021 */      addu $a2, $a3, $a1
  .L80131B88:
  /* 17ADD8 80131B88 00640019 */     multu $v1, $a0
  /* 17ADDC 80131B8C 2442FFFF */     addiu $v0, $v0, -1
  /* 17ADE0 80131B90 00001812 */      mflo $v1
  /* 17ADE4 80131B94 14C2FFFC */       bne $a2, $v0, .L80131B88
  /* 17ADE8 80131B98 00000000 */       nop 
  /* 17ADEC 80131B9C 24050001 */     addiu $a1, $zero, 1
  /* 17ADF0 80131BA0 10450012 */       beq $v0, $a1, .L80131BEC
  .L80131BA4:
  /* 17ADF4 80131BA4 24050001 */     addiu $a1, $zero, 1
  .L80131BA8:
  /* 17ADF8 80131BA8 00640019 */     multu $v1, $a0
  /* 17ADFC 80131BAC 2442FFFC */     addiu $v0, $v0, -4
  /* 17AE00 80131BB0 00001812 */      mflo $v1
  /* 17AE04 80131BB4 00000000 */       nop 
  /* 17AE08 80131BB8 00000000 */       nop 
  /* 17AE0C 80131BBC 00640019 */     multu $v1, $a0
  /* 17AE10 80131BC0 00001812 */      mflo $v1
  /* 17AE14 80131BC4 00000000 */       nop 
  /* 17AE18 80131BC8 00000000 */       nop 
  /* 17AE1C 80131BCC 00640019 */     multu $v1, $a0
  /* 17AE20 80131BD0 00001812 */      mflo $v1
  /* 17AE24 80131BD4 00000000 */       nop 
  /* 17AE28 80131BD8 00000000 */       nop 
  /* 17AE2C 80131BDC 00640019 */     multu $v1, $a0
  /* 17AE30 80131BE0 00001812 */      mflo $v1
  /* 17AE34 80131BE4 1445FFF0 */       bne $v0, $a1, .L80131BA8
  /* 17AE38 80131BE8 00000000 */       nop 
  .L80131BEC:
  /* 17AE3C 80131BEC 00601025 */        or $v0, $v1, $zero
  /* 17AE40 80131BF0 03E00008 */        jr $ra
  /* 17AE44 80131BF4 00000000 */       nop 

glabel gmStageClearSetDigitSpriteColor
  /* 17AE48 80131BF8 3C0E8013 */       lui $t6, %hi(dGmStageClearDigitSpriteColors)
  /* 17AE4C 80131BFC 25CE5100 */     addiu $t6, $t6, %lo(dGmStageClearDigitSpriteColors)
  /* 17AE50 80131C00 8DD80000 */        lw $t8, ($t6) # dGmStageClearDigitSpriteColors + 0
  /* 17AE54 80131C04 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17AE58 80131C08 27A30004 */     addiu $v1, $sp, 4
  /* 17AE5C 80131C0C AC780000 */        sw $t8, ($v1)
  /* 17AE60 80131C10 8DCF0004 */        lw $t7, 4($t6) # dGmStageClearDigitSpriteColors + 4
  /* 17AE64 80131C14 00055880 */       sll $t3, $a1, 2
  /* 17AE68 80131C18 01655823 */      subu $t3, $t3, $a1
  /* 17AE6C 80131C1C AC6F0004 */        sw $t7, 4($v1)
  /* 17AE70 80131C20 8DD80008 */        lw $t8, 8($t6) # dGmStageClearDigitSpriteColors + 8
  /* 17AE74 80131C24 000B5840 */       sll $t3, $t3, 1
  /* 17AE78 80131C28 006B1021 */      addu $v0, $v1, $t3
  /* 17AE7C 80131C2C AC780008 */        sw $t8, 8($v1)
  /* 17AE80 80131C30 8DCF000C */        lw $t7, 0xc($t6) # dGmStageClearDigitSpriteColors + 12
  /* 17AE84 80131C34 AC6F000C */        sw $t7, 0xc($v1)
  /* 17AE88 80131C38 95D80010 */       lhu $t8, 0x10($t6) # dGmStageClearDigitSpriteColors + 16
  /* 17AE8C 80131C3C A4780010 */        sh $t8, 0x10($v1)
  /* 17AE90 80131C40 94990024 */       lhu $t9, 0x24($a0)
  /* 17AE94 80131C44 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17AE98 80131C48 A4890024 */        sh $t1, 0x24($a0)
  /* 17AE9C 80131C4C 352A0001 */       ori $t2, $t1, 1
  /* 17AEA0 80131C50 14C0000E */      bnez $a2, .L80131C8C
  /* 17AEA4 80131C54 A48A0024 */        sh $t2, 0x24($a0)
  /* 17AEA8 80131C58 904C0000 */       lbu $t4, ($v0)
  /* 17AEAC 80131C5C A08C0060 */        sb $t4, 0x60($a0)
  /* 17AEB0 80131C60 904D0001 */       lbu $t5, 1($v0)
  /* 17AEB4 80131C64 A08D0061 */        sb $t5, 0x61($a0)
  /* 17AEB8 80131C68 904E0002 */       lbu $t6, 2($v0)
  /* 17AEBC 80131C6C A08E0062 */        sb $t6, 0x62($a0)
  /* 17AEC0 80131C70 904F0003 */       lbu $t7, 3($v0)
  /* 17AEC4 80131C74 A08F0028 */        sb $t7, 0x28($a0)
  /* 17AEC8 80131C78 90580004 */       lbu $t8, 4($v0)
  /* 17AECC 80131C7C A0980029 */        sb $t8, 0x29($a0)
  /* 17AED0 80131C80 90590005 */       lbu $t9, 5($v0)
  /* 17AED4 80131C84 1000000D */         b .L80131CBC
  /* 17AED8 80131C88 A099002A */        sb $t9, 0x2a($a0)
  .L80131C8C:
  /* 17AEDC 80131C8C 90C80000 */       lbu $t0, ($a2)
  /* 17AEE0 80131C90 A0880060 */        sb $t0, 0x60($a0)
  /* 17AEE4 80131C94 90C90001 */       lbu $t1, 1($a2)
  /* 17AEE8 80131C98 A0890061 */        sb $t1, 0x61($a0)
  /* 17AEEC 80131C9C 90CA0002 */       lbu $t2, 2($a2)
  /* 17AEF0 80131CA0 A08A0062 */        sb $t2, 0x62($a0)
  /* 17AEF4 80131CA4 90CB0003 */       lbu $t3, 3($a2)
  /* 17AEF8 80131CA8 A08B0028 */        sb $t3, 0x28($a0)
  /* 17AEFC 80131CAC 90CC0004 */       lbu $t4, 4($a2)
  /* 17AF00 80131CB0 A08C0029 */        sb $t4, 0x29($a0)
  /* 17AF04 80131CB4 90CD0005 */       lbu $t5, 5($a2)
  /* 17AF08 80131CB8 A08D002A */        sb $t5, 0x2a($a0)
  .L80131CBC:
  /* 17AF0C 80131CBC 03E00008 */        jr $ra
  /* 17AF10 80131CC0 27BD0018 */     addiu $sp, $sp, 0x18

glabel gmStageClearGetDigitCount
  /* 17AF14 80131CC4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17AF18 80131CC8 AFB20020 */        sw $s2, 0x20($sp)
  /* 17AF1C 80131CCC AFB1001C */        sw $s1, 0x1c($sp)
  /* 17AF20 80131CD0 00809025 */        or $s2, $a0, $zero
  /* 17AF24 80131CD4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17AF28 80131CD8 AFB00018 */        sw $s0, 0x18($sp)
  /* 17AF2C 80131CDC 18A0001D */      blez $a1, .L80131D54
  /* 17AF30 80131CE0 00A08825 */        or $s1, $a1, $zero
  .L80131CE4:
  /* 17AF34 80131CE4 2630FFFF */     addiu $s0, $s1, -1
  /* 17AF38 80131CE8 02002825 */        or $a1, $s0, $zero
  /* 17AF3C 80131CEC 0C04C6D6 */       jal func_ovl56_80131B58
  /* 17AF40 80131CF0 2404000A */     addiu $a0, $zero, 0xa
  /* 17AF44 80131CF4 10400011 */      beqz $v0, .L80131D3C
  /* 17AF48 80131CF8 00001825 */        or $v1, $zero, $zero
  /* 17AF4C 80131CFC 2404000A */     addiu $a0, $zero, 0xa
  /* 17AF50 80131D00 0C04C6D6 */       jal func_ovl56_80131B58
  /* 17AF54 80131D04 02002825 */        or $a1, $s0, $zero
  /* 17AF58 80131D08 0242001A */       div $zero, $s2, $v0
  /* 17AF5C 80131D0C 00001812 */      mflo $v1
  /* 17AF60 80131D10 14400002 */      bnez $v0, .L80131D1C
  /* 17AF64 80131D14 00000000 */       nop 
  /* 17AF68 80131D18 0007000D */     break 7
  .L80131D1C:
  /* 17AF6C 80131D1C 2401FFFF */     addiu $at, $zero, -1
  /* 17AF70 80131D20 14410004 */       bne $v0, $at, .L80131D34
  /* 17AF74 80131D24 3C018000 */       lui $at, 0x8000
  /* 17AF78 80131D28 16410002 */       bne $s2, $at, .L80131D34
  /* 17AF7C 80131D2C 00000000 */       nop 
  /* 17AF80 80131D30 0006000D */     break 6
  .L80131D34:
  /* 17AF84 80131D34 10000001 */         b .L80131D3C
  /* 17AF88 80131D38 00000000 */       nop 
  .L80131D3C:
  /* 17AF8C 80131D3C 10600003 */      beqz $v1, .L80131D4C
  /* 17AF90 80131D40 00000000 */       nop 
  /* 17AF94 80131D44 10000004 */         b .L80131D58
  /* 17AF98 80131D48 02201025 */        or $v0, $s1, $zero
  .L80131D4C:
  /* 17AF9C 80131D4C 1600FFE5 */      bnez $s0, .L80131CE4
  /* 17AFA0 80131D50 02008825 */        or $s1, $s0, $zero
  .L80131D54:
  /* 17AFA4 80131D54 00001025 */        or $v0, $zero, $zero
  .L80131D58:
  /* 17AFA8 80131D58 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17AFAC 80131D5C 8FB00018 */        lw $s0, 0x18($sp)
  /* 17AFB0 80131D60 8FB1001C */        lw $s1, 0x1c($sp)
  /* 17AFB4 80131D64 8FB20020 */        lw $s2, 0x20($sp)
  /* 17AFB8 80131D68 03E00008 */        jr $ra
  /* 17AFBC 80131D6C 27BD0028 */     addiu $sp, $sp, 0x28

glabel gmStageClearGetSprite
  /* 17AFC0 80131D70 3C0E8013 */       lui $t6, %hi(D_ovl56_80135114)
  /* 17AFC4 80131D74 25CE5114 */     addiu $t6, $t6, %lo(D_ovl56_80135114)
  /* 17AFC8 80131D78 8DD80000 */        lw $t8, ($t6) # D_ovl56_80135114 + 0
  /* 17AFCC 80131D7C 27BDFF78 */     addiu $sp, $sp, -0x88
  /* 17AFD0 80131D80 27A6007C */     addiu $a2, $sp, 0x7c
  /* 17AFD4 80131D84 ACD80000 */        sw $t8, ($a2)
  /* 17AFD8 80131D88 8DCF0004 */        lw $t7, 4($t6) # D_ovl56_80135114 + 4
  /* 17AFDC 80131D8C 3C198013 */       lui $t9, %hi(D_ovl56_80135120)
  /* 17AFE0 80131D90 27A70004 */     addiu $a3, $sp, 4
  /* 17AFE4 80131D94 ACCF0004 */        sw $t7, 4($a2)
  /* 17AFE8 80131D98 8DD80008 */        lw $t8, 8($t6) # D_ovl56_80135114 + 8
  /* 17AFEC 80131D9C 27395120 */     addiu $t9, $t9, %lo(D_ovl56_80135120)
  /* 17AFF0 80131DA0 272B0078 */     addiu $t3, $t9, 0x78
  /* 17AFF4 80131DA4 00E05025 */        or $t2, $a3, $zero
  /* 17AFF8 80131DA8 ACD80008 */        sw $t8, 8($a2)
  .L80131DAC:
  /* 17AFFC 80131DAC 8F290000 */        lw $t1, ($t9) # D_ovl56_80135120 + 0
  /* 17B000 80131DB0 2739000C */     addiu $t9, $t9, 0xc
  /* 17B004 80131DB4 254A000C */     addiu $t2, $t2, 0xc
  /* 17B008 80131DB8 AD49FFF4 */        sw $t1, -0xc($t2)
  /* 17B00C 80131DBC 8F28FFF8 */        lw $t0, -8($t9) # D_ovl56_80135120 + -8
  /* 17B010 80131DC0 AD48FFF8 */        sw $t0, -8($t2)
  /* 17B014 80131DC4 8F29FFFC */        lw $t1, -4($t9) # D_ovl56_80135120 + -4
  /* 17B018 80131DC8 172BFFF8 */       bne $t9, $t3, .L80131DAC
  /* 17B01C 80131DCC AD49FFFC */        sw $t1, -4($t2)
  /* 17B020 80131DD0 00041880 */       sll $v1, $a0, 2
  /* 17B024 80131DD4 00C3C021 */      addu $t8, $a2, $v1
  /* 17B028 80131DD8 8F0B0000 */        lw $t3, ($t8)
  /* 17B02C 80131DDC 00056080 */       sll $t4, $a1, 2
  /* 17B030 80131DE0 01856023 */      subu $t4, $t4, $a1
  /* 17B034 80131DE4 000C6080 */       sll $t4, $t4, 2
  /* 17B038 80131DE8 00EC6821 */      addu $t5, $a3, $t4
  /* 17B03C 80131DEC 3C0A8013 */       lui $t2, %hi(sGmStageClearFiles)
  /* 17B040 80131DF0 000BC880 */       sll $t9, $t3, 2
  /* 17B044 80131DF4 01595021 */      addu $t2, $t2, $t9
  /* 17B048 80131DF8 01A37021 */      addu $t6, $t5, $v1
  /* 17B04C 80131DFC 8DCF0000 */        lw $t7, ($t6) # D_ovl56_80135114 + 0
  /* 17B050 80131E00 8D4A5588 */        lw $t2, %lo(sGmStageClearFiles)($t2)
  /* 17B054 80131E04 27BD0088 */     addiu $sp, $sp, 0x88
  /* 17B058 80131E08 03E00008 */        jr $ra
  /* 17B05C 80131E0C 01EA1021 */      addu $v0, $t7, $t2

glabel gmStageClearMakeDigitSObjs
  /* 17B060 80131E10 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 17B064 80131E14 F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 17B068 80131E18 4487B000 */      mtc1 $a3, $f22
  /* 17B06C 80131E1C AFB30030 */        sw $s3, 0x30($sp)
  /* 17B070 80131E20 00A09825 */        or $s3, $a1, $zero
  /* 17B074 80131E24 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17B078 80131E28 AFB50038 */        sw $s5, 0x38($sp)
  /* 17B07C 80131E2C AFB40034 */        sw $s4, 0x34($sp)
  /* 17B080 80131E30 AFB2002C */        sw $s2, 0x2c($sp)
  /* 17B084 80131E34 AFB10028 */        sw $s1, 0x28($sp)
  /* 17B088 80131E38 AFB00024 */        sw $s0, 0x24($sp)
  /* 17B08C 80131E3C F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 17B090 80131E40 AFA40050 */        sw $a0, 0x50($sp)
  /* 17B094 80131E44 AFA60058 */        sw $a2, 0x58($sp)
  /* 17B098 80131E48 04A1000A */      bgez $a1, .L80131E74
  /* 17B09C 80131E4C 00001025 */        or $v0, $zero, $zero
  /* 17B0A0 80131E50 8FB50068 */        lw $s5, 0x68($sp)
  /* 17B0A4 80131E54 24010002 */     addiu $at, $zero, 2
  /* 17B0A8 80131E58 12A10003 */       beq $s5, $at, .L80131E68
  /* 17B0AC 80131E5C 00000000 */       nop 
  /* 17B0B0 80131E60 16A00003 */      bnez $s5, .L80131E70
  /* 17B0B4 80131E64 00139823 */      negu $s3, $s3
  .L80131E68:
  /* 17B0B8 80131E68 10000002 */         b .L80131E74
  /* 17B0BC 80131E6C 00009825 */        or $s3, $zero, $zero
  .L80131E70:
  /* 17B0C0 80131E70 24020001 */     addiu $v0, $zero, 1
  .L80131E74:
  /* 17B0C4 80131E74 2401000A */     addiu $at, $zero, 0xa
  /* 17B0C8 80131E78 0261001A */       div $zero, $s3, $at
  /* 17B0CC 80131E7C 8FB50068 */        lw $s5, 0x68($sp)
  /* 17B0D0 80131E80 00002810 */      mfhi $a1
  /* 17B0D4 80131E84 AFA20040 */        sw $v0, 0x40($sp)
  /* 17B0D8 80131E88 0C04C75C */       jal gmStageClearGetSprite
  /* 17B0DC 80131E8C 02A02025 */        or $a0, $s5, $zero
  /* 17B0E0 80131E90 8FA40050 */        lw $a0, 0x50($sp)
  /* 17B0E4 80131E94 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B0E8 80131E98 00402825 */        or $a1, $v0, $zero
  /* 17B0EC 80131E9C 00408825 */        or $s1, $v0, $zero
  /* 17B0F0 80131EA0 00402025 */        or $a0, $v0, $zero
  /* 17B0F4 80131EA4 02A02825 */        or $a1, $s5, $zero
  /* 17B0F8 80131EA8 0C04C6FE */       jal gmStageClearSetDigitSpriteColor
  /* 17B0FC 80131EAC 8FA60060 */        lw $a2, 0x60($sp)
  /* 17B100 80131EB0 8FB4006C */        lw $s4, 0x6c($sp)
  /* 17B104 80131EB4 8FAF0064 */        lw $t7, 0x64($sp)
  /* 17B108 80131EB8 52800007 */      beql $s4, $zero, .L80131ED8
  /* 17B10C 80131EBC 862E0014 */        lh $t6, 0x14($s1)
  /* 17B110 80131EC0 44943000 */      mtc1 $s4, $f6
  /* 17B114 80131EC4 C7A40058 */      lwc1 $f4, 0x58($sp)
  /* 17B118 80131EC8 46803220 */   cvt.s.w $f8, $f6
  /* 17B11C 80131ECC 10000008 */         b .L80131EF0
  /* 17B120 80131ED0 46082501 */     sub.s $f20, $f4, $f8
  /* 17B124 80131ED4 862E0014 */        lh $t6, 0x14($s1)
  .L80131ED8:
  /* 17B128 80131ED8 C7B20058 */      lwc1 $f18, 0x58($sp)
  /* 17B12C 80131EDC 01CFC021 */      addu $t8, $t6, $t7
  /* 17B130 80131EE0 44985000 */      mtc1 $t8, $f10
  /* 17B134 80131EE4 00000000 */       nop 
  /* 17B138 80131EE8 46805420 */   cvt.s.w $f16, $f10
  /* 17B13C 80131EEC 46109501 */     sub.s $f20, $f18, $f16
  .L80131EF0:
  /* 17B140 80131EF0 E6340058 */      swc1 $f20, 0x58($s1)
  /* 17B144 80131EF4 E636005C */      swc1 $f22, 0x5c($s1)
  /* 17B148 80131EF8 8FB90074 */        lw $t9, 0x74($sp)
  /* 17B14C 80131EFC 8FB20070 */        lw $s2, 0x70($sp)
  /* 17B150 80131F00 24100001 */     addiu $s0, $zero, 1
  /* 17B154 80131F04 13200004 */      beqz $t9, .L80131F18
  /* 17B158 80131F08 02602025 */        or $a0, $s3, $zero
  /* 17B15C 80131F0C 8FB20070 */        lw $s2, 0x70($sp)
  /* 17B160 80131F10 10000004 */         b .L80131F24
  /* 17B164 80131F14 02401825 */        or $v1, $s2, $zero
  .L80131F18:
  /* 17B168 80131F18 0C04C731 */       jal gmStageClearGetDigitCount
  /* 17B16C 80131F1C 02402825 */        or $a1, $s2, $zero
  /* 17B170 80131F20 00401825 */        or $v1, $v0, $zero
  .L80131F24:
  /* 17B174 80131F24 28610002 */      slti $at, $v1, 2
  /* 17B178 80131F28 1420003F */      bnez $at, .L80132028
  /* 17B17C 80131F2C 2404000A */     addiu $a0, $zero, 0xa
  .L80131F30:
  /* 17B180 80131F30 0C04C6D6 */       jal func_ovl56_80131B58
  /* 17B184 80131F34 02002825 */        or $a1, $s0, $zero
  /* 17B188 80131F38 10400011 */      beqz $v0, .L80131F80
  /* 17B18C 80131F3C 00001825 */        or $v1, $zero, $zero
  /* 17B190 80131F40 2404000A */     addiu $a0, $zero, 0xa
  /* 17B194 80131F44 0C04C6D6 */       jal func_ovl56_80131B58
  /* 17B198 80131F48 02002825 */        or $a1, $s0, $zero
  /* 17B19C 80131F4C 0262001A */       div $zero, $s3, $v0
  /* 17B1A0 80131F50 00001812 */      mflo $v1
  /* 17B1A4 80131F54 14400002 */      bnez $v0, .L80131F60
  /* 17B1A8 80131F58 00000000 */       nop 
  /* 17B1AC 80131F5C 0007000D */     break 7
  .L80131F60:
  /* 17B1B0 80131F60 2401FFFF */     addiu $at, $zero, -1
  /* 17B1B4 80131F64 14410004 */       bne $v0, $at, .L80131F78
  /* 17B1B8 80131F68 3C018000 */       lui $at, 0x8000
  /* 17B1BC 80131F6C 16610002 */       bne $s3, $at, .L80131F78
  /* 17B1C0 80131F70 00000000 */       nop 
  /* 17B1C4 80131F74 0006000D */     break 6
  .L80131F78:
  /* 17B1C8 80131F78 10000002 */         b .L80131F84
  /* 17B1CC 80131F7C 2401000A */     addiu $at, $zero, 0xa
  .L80131F80:
  /* 17B1D0 80131F80 2401000A */     addiu $at, $zero, 0xa
  .L80131F84:
  /* 17B1D4 80131F84 0061001A */       div $zero, $v1, $at
  /* 17B1D8 80131F88 00002810 */      mfhi $a1
  /* 17B1DC 80131F8C 02A02025 */        or $a0, $s5, $zero
  /* 17B1E0 80131F90 0C04C75C */       jal gmStageClearGetSprite
  /* 17B1E4 80131F94 00000000 */       nop 
  /* 17B1E8 80131F98 8FA40050 */        lw $a0, 0x50($sp)
  /* 17B1EC 80131F9C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B1F0 80131FA0 00402825 */        or $a1, $v0, $zero
  /* 17B1F4 80131FA4 00408825 */        or $s1, $v0, $zero
  /* 17B1F8 80131FA8 00402025 */        or $a0, $v0, $zero
  /* 17B1FC 80131FAC 02A02825 */        or $a1, $s5, $zero
  /* 17B200 80131FB0 0C04C6FE */       jal gmStageClearSetDigitSpriteColor
  /* 17B204 80131FB4 8FA60060 */        lw $a2, 0x60($sp)
  /* 17B208 80131FB8 12800006 */      beqz $s4, .L80131FD4
  /* 17B20C 80131FBC 8FA90064 */        lw $t1, 0x64($sp)
  /* 17B210 80131FC0 44943000 */      mtc1 $s4, $f6
  /* 17B214 80131FC4 00000000 */       nop 
  /* 17B218 80131FC8 46803120 */   cvt.s.w $f4, $f6
  /* 17B21C 80131FCC 10000007 */         b .L80131FEC
  /* 17B220 80131FD0 4604A501 */     sub.s $f20, $f20, $f4
  .L80131FD4:
  /* 17B224 80131FD4 86280014 */        lh $t0, 0x14($s1)
  /* 17B228 80131FD8 01095021 */      addu $t2, $t0, $t1
  /* 17B22C 80131FDC 448A4000 */      mtc1 $t2, $f8
  /* 17B230 80131FE0 00000000 */       nop 
  /* 17B234 80131FE4 468042A0 */   cvt.s.w $f10, $f8
  /* 17B238 80131FE8 460AA501 */     sub.s $f20, $f20, $f10
  .L80131FEC:
  /* 17B23C 80131FEC E6340058 */      swc1 $f20, 0x58($s1)
  /* 17B240 80131FF0 E636005C */      swc1 $f22, 0x5c($s1)
  /* 17B244 80131FF4 8FAB0074 */        lw $t3, 0x74($sp)
  /* 17B248 80131FF8 26100001 */     addiu $s0, $s0, 1
  /* 17B24C 80131FFC 02602025 */        or $a0, $s3, $zero
  /* 17B250 80132000 11600003 */      beqz $t3, .L80132010
  /* 17B254 80132004 00000000 */       nop 
  /* 17B258 80132008 10000004 */         b .L8013201C
  /* 17B25C 8013200C 02401825 */        or $v1, $s2, $zero
  .L80132010:
  /* 17B260 80132010 0C04C731 */       jal gmStageClearGetDigitCount
  /* 17B264 80132014 02402825 */        or $a1, $s2, $zero
  /* 17B268 80132018 00401825 */        or $v1, $v0, $zero
  .L8013201C:
  /* 17B26C 8013201C 0203082A */       slt $at, $s0, $v1
  /* 17B270 80132020 5420FFC3 */      bnel $at, $zero, .L80131F30
  /* 17B274 80132024 2404000A */     addiu $a0, $zero, 0xa
  .L80132028:
  /* 17B278 80132028 8FAC0040 */        lw $t4, 0x40($sp)
  /* 17B27C 8013202C 24010001 */     addiu $at, $zero, 1
  /* 17B280 80132030 51800021 */      beql $t4, $zero, .L801320B8
  /* 17B284 80132034 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17B288 80132038 16A10008 */       bne $s5, $at, .L8013205C
  /* 17B28C 8013203C 8FA40050 */        lw $a0, 0x50($sp)
  /* 17B290 80132040 3C0D8013 */       lui $t5, %hi(D_ovl56_80135598)
  /* 17B294 80132044 8DAD5598 */        lw $t5, %lo(D_ovl56_80135598)($t5)
  /* 17B298 80132048 3C0E0000 */       lui $t6, %hi(D_NF_00000710)
  /* 17B29C 8013204C 25CE0710 */     addiu $t6, $t6, %lo(D_NF_00000710)
  /* 17B2A0 80132050 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B2A4 80132054 01AE2821 */      addu $a1, $t5, $t6
  /* 17B2A8 80132058 00408825 */        or $s1, $v0, $zero
  .L8013205C:
  /* 17B2AC 8013205C 02202025 */        or $a0, $s1, $zero
  /* 17B2B0 80132060 02A02825 */        or $a1, $s5, $zero
  /* 17B2B4 80132064 0C04C6FE */       jal gmStageClearSetDigitSpriteColor
  /* 17B2B8 80132068 8FA60060 */        lw $a2, 0x60($sp)
  /* 17B2BC 8013206C 12800006 */      beqz $s4, .L80132088
  /* 17B2C0 80132070 3C014040 */       lui $at, (0x40400000 >> 16) # 3.0
  /* 17B2C4 80132074 44949000 */      mtc1 $s4, $f18
  /* 17B2C8 80132078 00000000 */       nop 
  /* 17B2CC 8013207C 46809420 */   cvt.s.w $f16, $f18
  /* 17B2D0 80132080 10000008 */         b .L801320A4
  /* 17B2D4 80132084 4610A501 */     sub.s $f20, $f20, $f16
  .L80132088:
  /* 17B2D8 80132088 862F0014 */        lh $t7, 0x14($s1)
  /* 17B2DC 8013208C 8FB80064 */        lw $t8, 0x64($sp)
  /* 17B2E0 80132090 01F8C821 */      addu $t9, $t7, $t8
  /* 17B2E4 80132094 44993000 */      mtc1 $t9, $f6
  /* 17B2E8 80132098 00000000 */       nop 
  /* 17B2EC 8013209C 46803120 */   cvt.s.w $f4, $f6
  /* 17B2F0 801320A0 4604A501 */     sub.s $f20, $f20, $f4
  .L801320A4:
  /* 17B2F4 801320A4 44814000 */      mtc1 $at, $f8 # 3.0 to cop1
  /* 17B2F8 801320A8 E6340058 */      swc1 $f20, 0x58($s1)
  /* 17B2FC 801320AC 4608B280 */     add.s $f10, $f22, $f8
  /* 17B300 801320B0 E62A005C */      swc1 $f10, 0x5c($s1)
  /* 17B304 801320B4 8FBF003C */        lw $ra, 0x3c($sp)
  .L801320B8:
  /* 17B308 801320B8 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 17B30C 801320BC D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 17B310 801320C0 8FB00024 */        lw $s0, 0x24($sp)
  /* 17B314 801320C4 8FB10028 */        lw $s1, 0x28($sp)
  /* 17B318 801320C8 8FB2002C */        lw $s2, 0x2c($sp)
  /* 17B31C 801320CC 8FB30030 */        lw $s3, 0x30($sp)
  /* 17B320 801320D0 8FB40034 */        lw $s4, 0x34($sp)
  /* 17B324 801320D4 8FB50038 */        lw $s5, 0x38($sp)
  /* 17B328 801320D8 03E00008 */        jr $ra
  /* 17B32C 801320DC 27BD0050 */     addiu $sp, $sp, 0x50

glabel gmStageClearTextProcRender
  /* 17B330 801320E0 3C058004 */       lui $a1, %hi(gDisplayListHead)
  /* 17B334 801320E4 24A565B0 */     addiu $a1, $a1, %lo(gDisplayListHead)
  /* 17B338 801320E8 8CA30000 */        lw $v1, ($a1) # gDisplayListHead + 0
  /* 17B33C 801320EC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17B340 801320F0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17B344 801320F4 246E0008 */     addiu $t6, $v1, 8
  /* 17B348 801320F8 ACAE0000 */        sw $t6, ($a1) # gDisplayListHead + 0
  /* 17B34C 801320FC 3C0FE700 */       lui $t7, 0xe700
  /* 17B350 80132100 AC6F0000 */        sw $t7, ($v1)
  /* 17B354 80132104 0C0333C0 */       jal func_ovl0_800CCF00
  /* 17B358 80132108 AC600004 */        sw $zero, 4($v1)
  /* 17B35C 8013210C 3C058004 */       lui $a1, %hi(gDisplayListHead)
  /* 17B360 80132110 24A565B0 */     addiu $a1, $a1, %lo(gDisplayListHead)
  /* 17B364 80132114 8CA30000 */        lw $v1, ($a1) # gDisplayListHead + 0
  /* 17B368 80132118 3C19E700 */       lui $t9, 0xe700
  /* 17B36C 8013211C 24780008 */     addiu $t8, $v1, 8
  /* 17B370 80132120 ACB80000 */        sw $t8, ($a1) # gDisplayListHead + 0
  /* 17B374 80132124 AC600004 */        sw $zero, 4($v1)
  /* 17B378 80132128 AC790000 */        sw $t9, ($v1)
  /* 17B37C 8013212C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17B380 80132130 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17B384 80132134 03E00008 */        jr $ra
  /* 17B388 80132138 00000000 */       nop 

glabel gmStageClearMakeTextSObjs
  /* 17B38C 8013213C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17B390 80132140 AFBF002C */        sw $ra, 0x2c($sp)
  /* 17B394 80132144 AFB20028 */        sw $s2, 0x28($sp)
  /* 17B398 80132148 AFB10024 */        sw $s1, 0x24($sp)
  /* 17B39C 8013214C AFB00020 */        sw $s0, 0x20($sp)
  /* 17B3A0 80132150 00002025 */        or $a0, $zero, $zero
  /* 17B3A4 80132154 00002825 */        or $a1, $zero, $zero
  /* 17B3A8 80132158 24060011 */     addiu $a2, $zero, 0x11
  /* 17B3AC 8013215C 0C00265A */       jal omMakeGObjCommon
  /* 17B3B0 80132160 3C078000 */       lui $a3, 0x8000
  /* 17B3B4 80132164 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17B3B8 80132168 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17B3BC 8013216C 240EFFFF */     addiu $t6, $zero, -1
  /* 17B3C0 80132170 00408025 */        or $s0, $v0, $zero
  /* 17B3C4 80132174 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17B3C8 80132178 AFA50034 */        sw $a1, 0x34($sp)
  /* 17B3CC 8013217C 00402025 */        or $a0, $v0, $zero
  /* 17B3D0 80132180 2406001A */     addiu $a2, $zero, 0x1a
  /* 17B3D4 80132184 0C00277D */       jal omAddGObjRenderProc
  /* 17B3D8 80132188 3C078000 */       lui $a3, 0x8000
  /* 17B3DC 8013218C 3C128013 */       lui $s2, %hi(sGmStageClearFiles)
  /* 17B3E0 80132190 26525588 */     addiu $s2, $s2, %lo(sGmStageClearFiles)
  /* 17B3E4 80132194 8E4F0000 */        lw $t7, ($s2) # sGmStageClearFiles + 0
  /* 17B3E8 80132198 3C180001 */       lui $t8, %hi(D_NF_0000D1C8)
  /* 17B3EC 8013219C 2718D1C8 */     addiu $t8, $t8, %lo(D_NF_0000D1C8)
  /* 17B3F0 801321A0 02002025 */        or $a0, $s0, $zero
  /* 17B3F4 801321A4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B3F8 801321A8 01F82821 */      addu $a1, $t7, $t8
  /* 17B3FC 801321AC 94590024 */       lhu $t9, 0x24($v0)
  /* 17B400 801321B0 3C014204 */       lui $at, (0x42040000 >> 16) # 33.0
  /* 17B404 801321B4 44812000 */      mtc1 $at, $f4 # 33.0 to cop1
  /* 17B408 801321B8 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 17B40C 801321BC 44813000 */      mtc1 $at, $f6 # 23.0 to cop1
  /* 17B410 801321C0 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17B414 801321C4 A4490024 */        sh $t1, 0x24($v0)
  /* 17B418 801321C8 352A0001 */       ori $t2, $t1, 1
  /* 17B41C 801321CC A44A0024 */        sh $t2, 0x24($v0)
  /* 17B420 801321D0 A0400028 */        sb $zero, 0x28($v0)
  /* 17B424 801321D4 A0400029 */        sb $zero, 0x29($v0)
  /* 17B428 801321D8 A040002A */        sb $zero, 0x2a($v0)
  /* 17B42C 801321DC 3C0B8013 */       lui $t3, %hi(sGmStageClearKind)
  /* 17B430 801321E0 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17B434 801321E4 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17B438 801321E8 8D6B52D4 */        lw $t3, %lo(sGmStageClearKind)($t3)
  /* 17B43C 801321EC 24010002 */     addiu $at, $zero, 2
  /* 17B440 801321F0 3C0A0000 */       lui $t2, 0
  /* 17B444 801321F4 1561001B */       bne $t3, $at, .L80132264
  /* 17B448 801321F8 02002025 */        or $a0, $s0, $zero
  /* 17B44C 801321FC 8E4C0000 */        lw $t4, ($s2) # sGmStageClearFiles + 0
  /* 17B450 80132200 3C0D0001 */       lui $t5, %hi(D_NF_0000AF98)
  /* 17B454 80132204 25ADAF98 */     addiu $t5, $t5, %lo(D_NF_0000AF98)
  /* 17B458 80132208 02002025 */        or $a0, $s0, $zero
  /* 17B45C 8013220C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B460 80132210 018D2821 */      addu $a1, $t4, $t5
  /* 17B464 80132214 944E0024 */       lhu $t6, 0x24($v0)
  /* 17B468 80132218 3C0142D0 */       lui $at, (0x42D00000 >> 16) # 104.0
  /* 17B46C 8013221C 44814000 */      mtc1 $at, $f8 # 104.0 to cop1
  /* 17B470 80132220 3C0141C0 */       lui $at, (0x41C00000 >> 16) # 24.0
  /* 17B474 80132224 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 17B478 80132228 44815000 */      mtc1 $at, $f10 # 24.0 to cop1
  /* 17B47C 8013222C 241100FF */     addiu $s1, $zero, 0xff
  /* 17B480 80132230 A4580024 */        sh $t8, 0x24($v0)
  /* 17B484 80132234 37190001 */       ori $t9, $t8, 1
  /* 17B488 80132238 240800C8 */     addiu $t0, $zero, 0xc8
  /* 17B48C 8013223C A4590024 */        sh $t9, 0x24($v0)
  /* 17B490 80132240 A0510060 */        sb $s1, 0x60($v0)
  /* 17B494 80132244 A0400061 */        sb $zero, 0x61($v0)
  /* 17B498 80132248 A0400062 */        sb $zero, 0x62($v0)
  /* 17B49C 8013224C A0510028 */        sb $s1, 0x28($v0)
  /* 17B4A0 80132250 A0480029 */        sb $t0, 0x29($v0)
  /* 17B4A4 80132254 A040002A */        sb $zero, 0x2a($v0)
  /* 17B4A8 80132258 E4480058 */      swc1 $f8, 0x58($v0)
  /* 17B4AC 8013225C 1000003B */         b .L8013234C
  /* 17B4B0 80132260 E44A005C */      swc1 $f10, 0x5c($v0)
  .L80132264:
  /* 17B4B4 80132264 8E490000 */        lw $t1, ($s2) # sGmStageClearFiles + 0
  /* 17B4B8 80132268 254A1D58 */     addiu $t2, $t2, 0x1d58
  /* 17B4BC 8013226C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B4C0 80132270 012A2821 */      addu $a1, $t1, $t2
  /* 17B4C4 80132274 944B0024 */       lhu $t3, 0x24($v0)
  /* 17B4C8 80132278 3C014326 */       lui $at, (0x43260000 >> 16) # 166.0
  /* 17B4CC 8013227C 44818000 */      mtc1 $at, $f16 # 166.0 to cop1
  /* 17B4D0 80132280 3C0141C0 */       lui $at, (0x41C00000 >> 16) # 24.0
  /* 17B4D4 80132284 44819000 */      mtc1 $at, $f18 # 24.0 to cop1
  /* 17B4D8 80132288 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 17B4DC 8013228C 241100FF */     addiu $s1, $zero, 0xff
  /* 17B4E0 80132290 A44D0024 */        sh $t5, 0x24($v0)
  /* 17B4E4 80132294 35AE0001 */       ori $t6, $t5, 1
  /* 17B4E8 80132298 240F00C8 */     addiu $t7, $zero, 0xc8
  /* 17B4EC 8013229C A44E0024 */        sh $t6, 0x24($v0)
  /* 17B4F0 801322A0 A0510060 */        sb $s1, 0x60($v0)
  /* 17B4F4 801322A4 A0400061 */        sb $zero, 0x61($v0)
  /* 17B4F8 801322A8 A0400062 */        sb $zero, 0x62($v0)
  /* 17B4FC 801322AC A0510028 */        sb $s1, 0x28($v0)
  /* 17B500 801322B0 A04F0029 */        sb $t7, 0x29($v0)
  /* 17B504 801322B4 A040002A */        sb $zero, 0x2a($v0)
  /* 17B508 801322B8 3C188013 */       lui $t8, %hi(sGmStageClearKind)
  /* 17B50C 801322BC E4500058 */      swc1 $f16, 0x58($v0)
  /* 17B510 801322C0 E452005C */      swc1 $f18, 0x5c($v0)
  /* 17B514 801322C4 8F1852D4 */        lw $t8, %lo(sGmStageClearKind)($t8)
  /* 17B518 801322C8 3C080000 */       lui $t0, %hi(D_NF_000009D8)
  /* 17B51C 801322CC 02002025 */        or $a0, $s0, $zero
  /* 17B520 801322D0 17000008 */      bnez $t8, .L801322F4
  /* 17B524 801322D4 3C0A0000 */       lui $t2, 0
  /* 17B528 801322D8 8E590000 */        lw $t9, ($s2) # sGmStageClearFiles + 0
  /* 17B52C 801322DC 250809D8 */     addiu $t0, $t0, %lo(D_NF_000009D8)
  /* 17B530 801322E0 02002025 */        or $a0, $s0, $zero
  /* 17B534 801322E4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B538 801322E8 03282821 */      addu $a1, $t9, $t0
  /* 17B53C 801322EC 10000006 */         b .L80132308
  /* 17B540 801322F0 944B0024 */       lhu $t3, 0x24($v0)
  .L801322F4:
  /* 17B544 801322F4 8E490000 */        lw $t1, ($s2) # sGmStageClearFiles + 0
  /* 17B548 801322F8 254A1338 */     addiu $t2, $t2, 0x1338
  /* 17B54C 801322FC 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B550 80132300 012A2821 */      addu $a1, $t1, $t2
  /* 17B554 80132304 944B0024 */       lhu $t3, 0x24($v0)
  .L80132308:
  /* 17B558 80132308 3C014254 */       lui $at, (0x42540000 >> 16) # 53.0
  /* 17B55C 8013230C 44812000 */      mtc1 $at, $f4 # 53.0 to cop1
  /* 17B560 80132310 3C0141C0 */       lui $at, (0x41C00000 >> 16) # 24.0
  /* 17B564 80132314 44813000 */      mtc1 $at, $f6 # 24.0 to cop1
  /* 17B568 80132318 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 17B56C 8013231C A44D0024 */        sh $t5, 0x24($v0)
  /* 17B570 80132320 35AE0001 */       ori $t6, $t5, 1
  /* 17B574 80132324 240F00C8 */     addiu $t7, $zero, 0xc8
  /* 17B578 80132328 A44E0024 */        sh $t6, 0x24($v0)
  /* 17B57C 8013232C A0510060 */        sb $s1, 0x60($v0)
  /* 17B580 80132330 A0400061 */        sb $zero, 0x61($v0)
  /* 17B584 80132334 A0400062 */        sb $zero, 0x62($v0)
  /* 17B588 80132338 A0510028 */        sb $s1, 0x28($v0)
  /* 17B58C 8013233C A04F0029 */        sb $t7, 0x29($v0)
  /* 17B590 80132340 A040002A */        sb $zero, 0x2a($v0)
  /* 17B594 80132344 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17B598 80132348 E446005C */      swc1 $f6, 0x5c($v0)
  .L8013234C:
  /* 17B59C 8013234C 00002025 */        or $a0, $zero, $zero
  /* 17B5A0 80132350 00002825 */        or $a1, $zero, $zero
  /* 17B5A4 80132354 24060011 */     addiu $a2, $zero, 0x11
  /* 17B5A8 80132358 0C00265A */       jal omMakeGObjCommon
  /* 17B5AC 8013235C 3C078000 */       lui $a3, 0x8000
  /* 17B5B0 80132360 3C018013 */       lui $at, %hi(sGmStageClearBonusTextGObj)
  /* 17B5B4 80132364 2418FFFF */     addiu $t8, $zero, -1
  /* 17B5B8 80132368 AC225314 */        sw $v0, %lo(sGmStageClearBonusTextGObj)($at)
  /* 17B5BC 8013236C 00408025 */        or $s0, $v0, $zero
  /* 17B5C0 80132370 AFB80010 */        sw $t8, 0x10($sp)
  /* 17B5C4 80132374 00402025 */        or $a0, $v0, $zero
  /* 17B5C8 80132378 8FA50034 */        lw $a1, 0x34($sp)
  /* 17B5CC 8013237C 2406001A */     addiu $a2, $zero, 0x1a
  /* 17B5D0 80132380 0C00277D */       jal omAddGObjRenderProc
  /* 17B5D4 80132384 3C078000 */       lui $a3, 0x8000
  /* 17B5D8 80132388 8E590000 */        lw $t9, ($s2) # sGmStageClearFiles + 0
  /* 17B5DC 8013238C 3C080001 */       lui $t0, %hi(D_NF_0000D340)
  /* 17B5E0 80132390 2508D340 */     addiu $t0, $t0, %lo(D_NF_0000D340)
  /* 17B5E4 80132394 02002025 */        or $a0, $s0, $zero
  /* 17B5E8 80132398 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B5EC 8013239C 03282821 */      addu $a1, $t9, $t0
  /* 17B5F0 801323A0 94490024 */       lhu $t1, 0x24($v0)
  /* 17B5F4 801323A4 3C0142F2 */       lui $at, (0x42F20000 >> 16) # 121.0
  /* 17B5F8 801323A8 44814000 */      mtc1 $at, $f8 # 121.0 to cop1
  /* 17B5FC 801323AC 3C014286 */       lui $at, (0x42860000 >> 16) # 67.0
  /* 17B600 801323B0 44815000 */      mtc1 $at, $f10 # 67.0 to cop1
  /* 17B604 801323B4 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 17B608 801323B8 A44B0024 */        sh $t3, 0x24($v0)
  /* 17B60C 801323BC 356C0001 */       ori $t4, $t3, 1
  /* 17B610 801323C0 240D0028 */     addiu $t5, $zero, 0x28
  /* 17B614 801323C4 240E000A */     addiu $t6, $zero, 0xa
  /* 17B618 801323C8 A44C0024 */        sh $t4, 0x24($v0)
  /* 17B61C 801323CC A0510028 */        sb $s1, 0x28($v0)
  /* 17B620 801323D0 A04D0029 */        sb $t5, 0x29($v0)
  /* 17B624 801323D4 A04E002A */        sb $t6, 0x2a($v0)
  /* 17B628 801323D8 E4480058 */      swc1 $f8, 0x58($v0)
  /* 17B62C 801323DC E44A005C */      swc1 $f10, 0x5c($v0)
  /* 17B630 801323E0 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17B634 801323E4 8FB20028 */        lw $s2, 0x28($sp)
  /* 17B638 801323E8 8FB10024 */        lw $s1, 0x24($sp)
  /* 17B63C 801323EC 8FB00020 */        lw $s0, 0x20($sp)
  /* 17B640 801323F0 03E00008 */        jr $ra
  /* 17B644 801323F4 27BD0040 */     addiu $sp, $sp, 0x40

glabel gmStageClearMakeScoreSObjs
  /* 17B648 801323F8 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 17B64C 801323FC AFBF002C */        sw $ra, 0x2c($sp)
  /* 17B650 80132400 00002025 */        or $a0, $zero, $zero
  /* 17B654 80132404 00002825 */        or $a1, $zero, $zero
  /* 17B658 80132408 24060011 */     addiu $a2, $zero, 0x11
  /* 17B65C 8013240C 0C00265A */       jal omMakeGObjCommon
  /* 17B660 80132410 3C078000 */       lui $a3, 0x8000
  /* 17B664 80132414 3C018013 */       lui $at, %hi(sGmStageClearScoreTextGObj)
  /* 17B668 80132418 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17B66C 8013241C 240EFFFF */     addiu $t6, $zero, -1
  /* 17B670 80132420 AC225310 */        sw $v0, %lo(sGmStageClearScoreTextGObj)($at)
  /* 17B674 80132424 AFA20034 */        sw $v0, 0x34($sp)
  /* 17B678 80132428 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17B67C 8013242C 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17B680 80132430 00402025 */        or $a0, $v0, $zero
  /* 17B684 80132434 2406001A */     addiu $a2, $zero, 0x1a
  /* 17B688 80132438 0C00277D */       jal omAddGObjRenderProc
  /* 17B68C 8013243C 3C078000 */       lui $a3, 0x8000
  /* 17B690 80132440 3C0F8013 */       lui $t7, %hi(D_ovl56_8013558C)
  /* 17B694 80132444 8DEF558C */        lw $t7, %lo(D_ovl56_8013558C)($t7)
  /* 17B698 80132448 3C180000 */       lui $t8, %hi(D_NF_00000408)
  /* 17B69C 8013244C 27180408 */     addiu $t8, $t8, %lo(D_NF_00000408)
  /* 17B6A0 80132450 8FA40034 */        lw $a0, 0x34($sp)
  /* 17B6A4 80132454 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B6A8 80132458 01F82821 */      addu $a1, $t7, $t8
  /* 17B6AC 8013245C 94590024 */       lhu $t9, 0x24($v0)
  /* 17B6B0 80132460 3C0142B4 */       lui $at, (0x42B40000 >> 16) # 90.0
  /* 17B6B4 80132464 44812000 */      mtc1 $at, $f4 # 90.0 to cop1
  /* 17B6B8 80132468 3C014348 */       lui $at, (0x43480000 >> 16) # 200.0
  /* 17B6BC 8013246C 44813000 */      mtc1 $at, $f6 # 200.0 to cop1
  /* 17B6C0 80132470 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17B6C4 80132474 240300FF */     addiu $v1, $zero, 0xff
  /* 17B6C8 80132478 A4490024 */        sh $t1, 0x24($v0)
  /* 17B6CC 8013247C 352A0001 */       ori $t2, $t1, 1
  /* 17B6D0 80132480 240B00C8 */     addiu $t3, $zero, 0xc8
  /* 17B6D4 80132484 A44A0024 */        sh $t2, 0x24($v0)
  /* 17B6D8 80132488 A0430060 */        sb $v1, 0x60($v0)
  /* 17B6DC 8013248C A0400061 */        sb $zero, 0x61($v0)
  /* 17B6E0 80132490 A0400062 */        sb $zero, 0x62($v0)
  /* 17B6E4 80132494 A0430028 */        sb $v1, 0x28($v0)
  /* 17B6E8 80132498 A04B0029 */        sb $t3, 0x29($v0)
  /* 17B6EC 8013249C A040002A */        sb $zero, 0x2a($v0)
  /* 17B6F0 801324A0 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17B6F4 801324A4 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17B6F8 801324A8 3C058013 */       lui $a1, %hi(sGmStageClearScoreTotal)
  /* 17B6FC 801324AC 3C064393 */       lui $a2, (0x43938000 >> 16) # 1133740032
  /* 17B700 801324B0 240C0002 */     addiu $t4, $zero, 2
  /* 17B704 801324B4 240D0010 */     addiu $t5, $zero, 0x10
  /* 17B708 801324B8 240E0008 */     addiu $t6, $zero, 8
  /* 17B70C 801324BC 240F0001 */     addiu $t7, $zero, 1
  /* 17B710 801324C0 AFAF0024 */        sw $t7, 0x24($sp)
  /* 17B714 801324C4 AFAE0020 */        sw $t6, 0x20($sp)
  /* 17B718 801324C8 AFAD001C */        sw $t5, 0x1c($sp)
  /* 17B71C 801324CC AFAC0018 */        sw $t4, 0x18($sp)
  /* 17B720 801324D0 34C68000 */       ori $a2, $a2, (0x43938000 & 0xFFFF) # 1133740032
  /* 17B724 801324D4 8CA552E8 */        lw $a1, %lo(sGmStageClearScoreTotal)($a1)
  /* 17B728 801324D8 AFA00014 */        sw $zero, 0x14($sp)
  /* 17B72C 801324DC AFA00010 */        sw $zero, 0x10($sp)
  /* 17B730 801324E0 8FA40034 */        lw $a0, 0x34($sp)
  /* 17B734 801324E4 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17B738 801324E8 3C074345 */       lui $a3, 0x4345
  /* 17B73C 801324EC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17B740 801324F0 27BD0038 */     addiu $sp, $sp, 0x38
  /* 17B744 801324F4 03E00008 */        jr $ra
  /* 17B748 801324F8 00000000 */       nop 

glabel gmStageClearMakeTimerTextSObjs
  /* 17B74C 801324FC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17B750 80132500 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17B754 80132504 E7AC0028 */      swc1 $f12, 0x28($sp)
  /* 17B758 80132508 00002025 */        or $a0, $zero, $zero
  /* 17B75C 8013250C 00002825 */        or $a1, $zero, $zero
  /* 17B760 80132510 24060011 */     addiu $a2, $zero, 0x11
  /* 17B764 80132514 0C00265A */       jal omMakeGObjCommon
  /* 17B768 80132518 3C078000 */       lui $a3, 0x8000
  /* 17B76C 8013251C 3C018013 */       lui $at, %hi(sGmStageClearTimerTextGObj)
  /* 17B770 80132520 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17B774 80132524 240EFFFF */     addiu $t6, $zero, -1
  /* 17B778 80132528 AC2252F8 */        sw $v0, %lo(sGmStageClearTimerTextGObj)($at)
  /* 17B77C 8013252C AFA20024 */        sw $v0, 0x24($sp)
  /* 17B780 80132530 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17B784 80132534 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17B788 80132538 00402025 */        or $a0, $v0, $zero
  /* 17B78C 8013253C 2406001A */     addiu $a2, $zero, 0x1a
  /* 17B790 80132540 0C00277D */       jal omAddGObjRenderProc
  /* 17B794 80132544 3C078000 */       lui $a3, 0x8000
  /* 17B798 80132548 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17B79C 8013254C 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17B7A0 80132550 3C180000 */       lui $t8, %hi(D_NF_000025E8)
  /* 17B7A4 80132554 271825E8 */     addiu $t8, $t8, %lo(D_NF_000025E8)
  /* 17B7A8 80132558 8FA40024 */        lw $a0, 0x24($sp)
  /* 17B7AC 8013255C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B7B0 80132560 01F82821 */      addu $a1, $t7, $t8
  /* 17B7B4 80132564 94590024 */       lhu $t9, 0x24($v0)
  /* 17B7B8 80132568 3C014228 */       lui $at, (0x42280000 >> 16) # 42.0
  /* 17B7BC 8013256C 44812000 */      mtc1 $at, $f4 # 42.0 to cop1
  /* 17B7C0 80132570 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17B7C4 80132574 A4490024 */        sh $t1, 0x24($v0)
  /* 17B7C8 80132578 352A0001 */       ori $t2, $t1, 1
  /* 17B7CC 8013257C A44A0024 */        sh $t2, 0x24($v0)
  /* 17B7D0 80132580 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17B7D4 80132584 C7A60028 */      lwc1 $f6, 0x28($sp)
  /* 17B7D8 80132588 240B00B7 */     addiu $t3, $zero, 0xb7
  /* 17B7DC 8013258C 240C00E4 */     addiu $t4, $zero, 0xe4
  /* 17B7E0 80132590 240D00FF */     addiu $t5, $zero, 0xff
  /* 17B7E4 80132594 A0400060 */        sb $zero, 0x60($v0)
  /* 17B7E8 80132598 A0400061 */        sb $zero, 0x61($v0)
  /* 17B7EC 8013259C A0400062 */        sb $zero, 0x62($v0)
  /* 17B7F0 801325A0 A04B0028 */        sb $t3, 0x28($v0)
  /* 17B7F4 801325A4 A04C0029 */        sb $t4, 0x29($v0)
  /* 17B7F8 801325A8 A04D002A */        sb $t5, 0x2a($v0)
  /* 17B7FC 801325AC 3C0E8013 */       lui $t6, %hi(sGmStageClearFiles)
  /* 17B800 801325B0 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17B804 801325B4 8DCE5588 */        lw $t6, %lo(sGmStageClearFiles)($t6)
  /* 17B808 801325B8 3C0F0000 */       lui $t7, %hi(D_NF_00002120)
  /* 17B80C 801325BC 25EF2120 */     addiu $t7, $t7, %lo(D_NF_00002120)
  /* 17B810 801325C0 8FA40024 */        lw $a0, 0x24($sp)
  /* 17B814 801325C4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B818 801325C8 01CF2821 */      addu $a1, $t6, $t7
  /* 17B81C 801325CC 94580024 */       lhu $t8, 0x24($v0)
  /* 17B820 801325D0 3C0142EC */       lui $at, (0x42EC0000 >> 16) # 118.0
  /* 17B824 801325D4 44814000 */      mtc1 $at, $f8 # 118.0 to cop1
  /* 17B828 801325D8 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 17B82C 801325DC A4480024 */        sh $t0, 0x24($v0)
  /* 17B830 801325E0 35090001 */       ori $t1, $t0, 1
  /* 17B834 801325E4 A4490024 */        sh $t1, 0x24($v0)
  /* 17B838 801325E8 E4480058 */      swc1 $f8, 0x58($v0)
  /* 17B83C 801325EC C7AA0028 */      lwc1 $f10, 0x28($sp)
  /* 17B840 801325F0 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 17B844 801325F4 44818000 */      mtc1 $at, $f16 # 1.0 to cop1
  /* 17B848 801325F8 240A00B7 */     addiu $t2, $zero, 0xb7
  /* 17B84C 801325FC 240B00E4 */     addiu $t3, $zero, 0xe4
  /* 17B850 80132600 46105480 */     add.s $f18, $f10, $f16
  /* 17B854 80132604 240C00FF */     addiu $t4, $zero, 0xff
  /* 17B858 80132608 A0400060 */        sb $zero, 0x60($v0)
  /* 17B85C 8013260C A0400061 */        sb $zero, 0x61($v0)
  /* 17B860 80132610 E452005C */      swc1 $f18, 0x5c($v0)
  /* 17B864 80132614 A0400062 */        sb $zero, 0x62($v0)
  /* 17B868 80132618 A04A0028 */        sb $t2, 0x28($v0)
  /* 17B86C 8013261C A04B0029 */        sb $t3, 0x29($v0)
  /* 17B870 80132620 A04C002A */        sb $t4, 0x2a($v0)
  /* 17B874 80132624 0C009A70 */       jal func_800269C0
  /* 17B878 80132628 240400AA */     addiu $a0, $zero, 0xaa
  /* 17B87C 8013262C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17B880 80132630 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17B884 80132634 03E00008 */        jr $ra
  /* 17B888 80132638 00000000 */       nop 

glabel gmStageClearMakeTimerDigitSObjs
  /* 17B88C 8013263C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 17B890 80132640 AFBF002C */        sw $ra, 0x2c($sp)
  /* 17B894 80132644 E7AC0050 */      swc1 $f12, 0x50($sp)
  /* 17B898 80132648 00002025 */        or $a0, $zero, $zero
  /* 17B89C 8013264C 00002825 */        or $a1, $zero, $zero
  /* 17B8A0 80132650 24060011 */     addiu $a2, $zero, 0x11
  /* 17B8A4 80132654 0C00265A */       jal omMakeGObjCommon
  /* 17B8A8 80132658 3C078000 */       lui $a3, 0x8000
  /* 17B8AC 8013265C 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17B8B0 80132660 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17B8B4 80132664 240EFFFF */     addiu $t6, $zero, -1
  /* 17B8B8 80132668 AC2252FC */        sw $v0, %lo(sGmStageClearTimerMultiplierGObj)($at)
  /* 17B8BC 8013266C AFA2004C */        sw $v0, 0x4c($sp)
  /* 17B8C0 80132670 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17B8C4 80132674 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17B8C8 80132678 00402025 */        or $a0, $v0, $zero
  /* 17B8CC 8013267C 2406001A */     addiu $a2, $zero, 0x1a
  /* 17B8D0 80132680 0C00277D */       jal omAddGObjRenderProc
  /* 17B8D4 80132684 3C078000 */       lui $a3, 0x8000
  /* 17B8D8 80132688 3C0F8013 */       lui $t7, %hi(D_ovl56_80135594)
  /* 17B8DC 8013268C 8DEF5594 */        lw $t7, %lo(D_ovl56_80135594)($t7)
  /* 17B8E0 80132690 3C180000 */       lui $t8, %hi(D_NF_00001018)
  /* 17B8E4 80132694 27181018 */     addiu $t8, $t8, %lo(D_NF_00001018)
  /* 17B8E8 80132698 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17B8EC 8013269C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17B8F0 801326A0 01F82821 */      addu $a1, $t7, $t8
  /* 17B8F4 801326A4 C7AC0050 */      lwc1 $f12, 0x50($sp)
  /* 17B8F8 801326A8 3C014335 */       lui $at, (0x43350000 >> 16) # 181.0
  /* 17B8FC 801326AC 44812000 */      mtc1 $at, $f4 # 181.0 to cop1
  /* 17B900 801326B0 3C014000 */       lui $at, (0x40000000 >> 16) # 2.0
  /* 17B904 801326B4 44813000 */      mtc1 $at, $f6 # 2.0 to cop1
  /* 17B908 801326B8 94590024 */       lhu $t9, 0x24($v0)
  /* 17B90C 801326BC 240400FF */     addiu $a0, $zero, 0xff
  /* 17B910 801326C0 46066200 */     add.s $f8, $f12, $f6
  /* 17B914 801326C4 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17B918 801326C8 A4490024 */        sh $t1, 0x24($v0)
  /* 17B91C 801326CC 352A0001 */       ori $t2, $t1, 1
  /* 17B920 801326D0 A44A0024 */        sh $t2, 0x24($v0)
  /* 17B924 801326D4 E448005C */      swc1 $f8, 0x5c($v0)
  /* 17B928 801326D8 A0400060 */        sb $zero, 0x60($v0)
  /* 17B92C 801326DC A0400061 */        sb $zero, 0x61($v0)
  /* 17B930 801326E0 A0400062 */        sb $zero, 0x62($v0)
  /* 17B934 801326E4 A0440028 */        sb $a0, 0x28($v0)
  /* 17B938 801326E8 A0440029 */        sb $a0, 0x29($v0)
  /* 17B93C 801326EC A044002A */        sb $a0, 0x2a($v0)
  /* 17B940 801326F0 3C038013 */       lui $v1, %hi(sGmStageClear1PGameStage)
  /* 17B944 801326F4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17B948 801326F8 8C6352EC */        lw $v1, %lo(sGmStageClear1PGameStage)($v1)
  /* 17B94C 801326FC 24010003 */     addiu $at, $zero, 3
  /* 17B950 80132700 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17B954 80132704 10610008 */       beq $v1, $at, .L80132728
  /* 17B958 80132708 240B0001 */     addiu $t3, $zero, 1
  /* 17B95C 8013270C 24010007 */     addiu $at, $zero, 7
  /* 17B960 80132710 10610005 */       beq $v1, $at, .L80132728
  /* 17B964 80132714 2401000B */     addiu $at, $zero, 0xb
  /* 17B968 80132718 50610008 */      beql $v1, $at, .L8013273C
  /* 17B96C 8013271C 3C014376 */       lui $at, 0x4376
  /* 17B970 80132720 10000009 */         b .L80132748
  /* 17B974 80132724 3C014369 */       lui $at, 0x4369
  .L80132728:
  /* 17B978 80132728 3C014376 */       lui $at, (0x43760000 >> 16) # 246.0
  /* 17B97C 8013272C 44810000 */      mtc1 $at, $f0 # 246.0 to cop1
  /* 17B980 80132730 10000007 */         b .L80132750
  /* 17B984 80132734 240500C8 */     addiu $a1, $zero, 0xc8
  /* 17B988 80132738 3C014376 */       lui $at, (0x43760000 >> 16) # 246.0
  .L8013273C:
  /* 17B98C 8013273C 44810000 */      mtc1 $at, $f0 # 246.0 to cop1
  /* 17B990 80132740 10000003 */         b .L80132750
  /* 17B994 80132744 240501F4 */     addiu $a1, $zero, 0x1f4
  .L80132748:
  /* 17B998 80132748 44810000 */      mtc1 $at, $f0 # 246.0 to cop1
  /* 17B99C 8013274C 24050032 */     addiu $a1, $zero, 0x32
  .L80132750:
  /* 17B9A0 80132750 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 17B9A4 80132754 44815000 */      mtc1 $at, $f10 # 1.0 to cop1
  /* 17B9A8 80132758 44060000 */      mfc1 $a2, $f0
  /* 17B9AC 8013275C 240C0004 */     addiu $t4, $zero, 4
  /* 17B9B0 80132760 460A6081 */     sub.s $f2, $f12, $f10
  /* 17B9B4 80132764 AFAC0020 */        sw $t4, 0x20($sp)
  /* 17B9B8 80132768 AFA00010 */        sw $zero, 0x10($sp)
  /* 17B9BC 8013276C AFAB0014 */        sw $t3, 0x14($sp)
  /* 17B9C0 80132770 44071000 */      mfc1 $a3, $f2
  /* 17B9C4 80132774 E7A20034 */      swc1 $f2, 0x34($sp)
  /* 17B9C8 80132778 AFA00018 */        sw $zero, 0x18($sp)
  /* 17B9CC 8013277C AFA0001C */        sw $zero, 0x1c($sp)
  /* 17B9D0 80132780 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17B9D4 80132784 AFA00024 */        sw $zero, 0x24($sp)
  /* 17B9D8 80132788 C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 17B9DC 8013278C 3C058013 */       lui $a1, %hi(sGmStageClearSecondsRemaining)
  /* 17B9E0 80132790 240D0001 */     addiu $t5, $zero, 1
  /* 17B9E4 80132794 240E0003 */     addiu $t6, $zero, 3
  /* 17B9E8 80132798 44071000 */      mfc1 $a3, $f2
  /* 17B9EC 8013279C AFAE0020 */        sw $t6, 0x20($sp)
  /* 17B9F0 801327A0 AFAD0014 */        sw $t5, 0x14($sp)
  /* 17B9F4 801327A4 8CA552DC */        lw $a1, %lo(sGmStageClearSecondsRemaining)($a1)
  /* 17B9F8 801327A8 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17B9FC 801327AC 3C06432B */       lui $a2, 0x432b
  /* 17BA00 801327B0 AFA00010 */        sw $zero, 0x10($sp)
  /* 17BA04 801327B4 AFA00018 */        sw $zero, 0x18($sp)
  /* 17BA08 801327B8 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17BA0C 801327BC 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17BA10 801327C0 AFA00024 */        sw $zero, 0x24($sp)
  /* 17BA14 801327C4 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17BA18 801327C8 27BD0050 */     addiu $sp, $sp, 0x50
  /* 17BA1C 801327CC 03E00008 */        jr $ra
  /* 17BA20 801327D0 00000000 */       nop 

glabel gmStageClearGetAppendTotalTimeScore
  /* 17BA24 801327D4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17BA28 801327D8 AFBF002C */        sw $ra, 0x2c($sp)
  /* 17BA2C 801327DC E7AC0040 */      swc1 $f12, 0x40($sp)
  /* 17BA30 801327E0 00002025 */        or $a0, $zero, $zero
  /* 17BA34 801327E4 00002825 */        or $a1, $zero, $zero
  /* 17BA38 801327E8 24060011 */     addiu $a2, $zero, 0x11
  /* 17BA3C 801327EC 0C00265A */       jal omMakeGObjCommon
  /* 17BA40 801327F0 3C078000 */       lui $a3, 0x8000
  /* 17BA44 801327F4 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17BA48 801327F8 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17BA4C 801327FC 240EFFFF */     addiu $t6, $zero, -1
  /* 17BA50 80132800 AC2252FC */        sw $v0, %lo(sGmStageClearTimerMultiplierGObj)($at)
  /* 17BA54 80132804 AFA2003C */        sw $v0, 0x3c($sp)
  /* 17BA58 80132808 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17BA5C 8013280C 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17BA60 80132810 00402025 */        or $a0, $v0, $zero
  /* 17BA64 80132814 2406001A */     addiu $a2, $zero, 0x1a
  /* 17BA68 80132818 0C00277D */       jal omAddGObjRenderProc
  /* 17BA6C 8013281C 3C078000 */       lui $a3, 0x8000
  /* 17BA70 80132820 3C028013 */       lui $v0, %hi(sGmStageClear1PGameStage)
  /* 17BA74 80132824 8C4252EC */        lw $v0, %lo(sGmStageClear1PGameStage)($v0)
  /* 17BA78 80132828 24010003 */     addiu $at, $zero, 3
  /* 17BA7C 8013282C 3C0F8013 */       lui $t7, %hi(sGmStageClearSecondsRemaining)
  /* 17BA80 80132830 10410008 */       beq $v0, $at, .L80132854
  /* 17BA84 80132834 8FA4003C */        lw $a0, 0x3c($sp)
  /* 17BA88 80132838 24010007 */     addiu $at, $zero, 7
  /* 17BA8C 8013283C 10410005 */       beq $v0, $at, .L80132854
  /* 17BA90 80132840 2401000B */     addiu $at, $zero, 0xb
  /* 17BA94 80132844 10410005 */       beq $v0, $at, .L8013285C
  /* 17BA98 80132848 00000000 */       nop 
  /* 17BA9C 8013284C 10000005 */         b .L80132864
  /* 17BAA0 80132850 24020032 */     addiu $v0, $zero, 0x32
  .L80132854:
  /* 17BAA4 80132854 10000003 */         b .L80132864
  /* 17BAA8 80132858 240200C8 */     addiu $v0, $zero, 0xc8
  .L8013285C:
  /* 17BAAC 8013285C 10000001 */         b .L80132864
  /* 17BAB0 80132860 240201F4 */     addiu $v0, $zero, 0x1f4
  .L80132864:
  /* 17BAB4 80132864 8DEF52DC */        lw $t7, %lo(sGmStageClearSecondsRemaining)($t7)
  /* 17BAB8 80132868 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 17BABC 8013286C 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 17BAC0 80132870 01E20019 */     multu $t7, $v0
  /* 17BAC4 80132874 C7A40040 */      lwc1 $f4, 0x40($sp)
  /* 17BAC8 80132878 24180001 */     addiu $t8, $zero, 1
  /* 17BACC 8013287C 24190005 */     addiu $t9, $zero, 5
  /* 17BAD0 80132880 46062201 */     sub.s $f8, $f4, $f6
  /* 17BAD4 80132884 AFB90020 */        sw $t9, 0x20($sp)
  /* 17BAD8 80132888 AFB80014 */        sw $t8, 0x14($sp)
  /* 17BADC 8013288C 3C064348 */       lui $a2, 0x4348
  /* 17BAE0 80132890 44074000 */      mfc1 $a3, $f8
  /* 17BAE4 80132894 AFA00010 */        sw $zero, 0x10($sp)
  /* 17BAE8 80132898 00002812 */      mflo $a1
  /* 17BAEC 8013289C AFA50034 */        sw $a1, 0x34($sp)
  /* 17BAF0 801328A0 AFA00018 */        sw $zero, 0x18($sp)
  /* 17BAF4 801328A4 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17BAF8 801328A8 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17BAFC 801328AC AFA00024 */        sw $zero, 0x24($sp)
  /* 17BB00 801328B0 0C009A70 */       jal func_800269C0
  /* 17BB04 801328B4 240400A9 */     addiu $a0, $zero, 0xa9
  /* 17BB08 801328B8 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17BB0C 801328BC 8FA20034 */        lw $v0, 0x34($sp)
  /* 17BB10 801328C0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 17BB14 801328C4 03E00008 */        jr $ra
  /* 17BB18 801328C8 00000000 */       nop 

glabel gmStageClearMakeDamageTextSObjs
  /* 17BB1C 801328CC 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17BB20 801328D0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17BB24 801328D4 E7AC0030 */      swc1 $f12, 0x30($sp)
  /* 17BB28 801328D8 00002025 */        or $a0, $zero, $zero
  /* 17BB2C 801328DC 00002825 */        or $a1, $zero, $zero
  /* 17BB30 801328E0 24060011 */     addiu $a2, $zero, 0x11
  /* 17BB34 801328E4 0C00265A */       jal omMakeGObjCommon
  /* 17BB38 801328E8 3C078000 */       lui $a3, 0x8000
  /* 17BB3C 801328EC 3C018013 */       lui $at, %hi(sGmStageClearDamageTextGObj)
  /* 17BB40 801328F0 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17BB44 801328F4 240EFFFF */     addiu $t6, $zero, -1
  /* 17BB48 801328F8 AC225300 */        sw $v0, %lo(sGmStageClearDamageTextGObj)($at)
  /* 17BB4C 801328FC AFA2002C */        sw $v0, 0x2c($sp)
  /* 17BB50 80132900 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17BB54 80132904 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17BB58 80132908 00402025 */        or $a0, $v0, $zero
  /* 17BB5C 8013290C 2406001A */     addiu $a2, $zero, 0x1a
  /* 17BB60 80132910 0C00277D */       jal omAddGObjRenderProc
  /* 17BB64 80132914 3C078000 */       lui $a3, 0x8000
  /* 17BB68 80132918 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17BB6C 8013291C 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17BB70 80132920 3C180000 */       lui $t8, %hi(lGmStageClearSpriteTextDamage)
  /* 17BB74 80132924 27182B48 */     addiu $t8, $t8, %lo(lGmStageClearSpriteTextDamage)
  /* 17BB78 80132928 8FA4002C */        lw $a0, 0x2c($sp)
  /* 17BB7C 8013292C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17BB80 80132930 01F82821 */      addu $a1, $t7, $t8
  /* 17BB84 80132934 94590024 */       lhu $t9, 0x24($v0)
  /* 17BB88 80132938 3C014228 */       lui $at, (0x42280000 >> 16) # 42.0
  /* 17BB8C 8013293C 44812000 */      mtc1 $at, $f4 # 42.0 to cop1
  /* 17BB90 80132940 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17BB94 80132944 A4490024 */        sh $t1, 0x24($v0)
  /* 17BB98 80132948 352A0001 */       ori $t2, $t1, 1
  /* 17BB9C 8013294C A44A0024 */        sh $t2, 0x24($v0)
  /* 17BBA0 80132950 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17BBA4 80132954 C7A60030 */      lwc1 $f6, 0x30($sp)
  /* 17BBA8 80132958 240C00B7 */     addiu $t4, $zero, 0xb7
  /* 17BBAC 8013295C 240D00E4 */     addiu $t5, $zero, 0xe4
  /* 17BBB0 80132960 4600320D */ trunc.w.s $f8, $f6
  /* 17BBB4 80132964 240E00FF */     addiu $t6, $zero, 0xff
  /* 17BBB8 80132968 A0400060 */        sb $zero, 0x60($v0)
  /* 17BBBC 8013296C A0400061 */        sb $zero, 0x61($v0)
  /* 17BBC0 80132970 44034000 */      mfc1 $v1, $f8
  /* 17BBC4 80132974 A0400062 */        sb $zero, 0x62($v0)
  /* 17BBC8 80132978 A04C0028 */        sb $t4, 0x28($v0)
  /* 17BBCC 8013297C 44835000 */      mtc1 $v1, $f10
  /* 17BBD0 80132980 A04D0029 */        sb $t5, 0x29($v0)
  /* 17BBD4 80132984 A04E002A */        sb $t6, 0x2a($v0)
  /* 17BBD8 80132988 46805420 */   cvt.s.w $f16, $f10
  /* 17BBDC 8013298C 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17BBE0 80132990 3C180000 */       lui $t8, %hi(D_NF_00002120)
  /* 17BBE4 80132994 27182120 */     addiu $t8, $t8, %lo(D_NF_00002120)
  /* 17BBE8 80132998 E450005C */      swc1 $f16, 0x5c($v0)
  /* 17BBEC 8013299C 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17BBF0 801329A0 8FA4002C */        lw $a0, 0x2c($sp)
  /* 17BBF4 801329A4 AFA30020 */        sw $v1, 0x20($sp)
  /* 17BBF8 801329A8 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17BBFC 801329AC 01F82821 */      addu $a1, $t7, $t8
  /* 17BC00 801329B0 8FA30020 */        lw $v1, 0x20($sp)
  /* 17BC04 801329B4 94590024 */       lhu $t9, 0x24($v0)
  /* 17BC08 801329B8 3C0142EC */       lui $at, (0x42EC0000 >> 16) # 118.0
  /* 17BC0C 801329BC 246B0002 */     addiu $t3, $v1, 2
  /* 17BC10 801329C0 448B2000 */      mtc1 $t3, $f4
  /* 17BC14 801329C4 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17BC18 801329C8 44819000 */      mtc1 $at, $f18 # 118.0 to cop1
  /* 17BC1C 801329CC 468021A0 */   cvt.s.w $f6, $f4
  /* 17BC20 801329D0 A4490024 */        sh $t1, 0x24($v0)
  /* 17BC24 801329D4 352A0001 */       ori $t2, $t1, 1
  /* 17BC28 801329D8 240C00B7 */     addiu $t4, $zero, 0xb7
  /* 17BC2C 801329DC 240D00E4 */     addiu $t5, $zero, 0xe4
  /* 17BC30 801329E0 240E00FF */     addiu $t6, $zero, 0xff
  /* 17BC34 801329E4 A44A0024 */        sh $t2, 0x24($v0)
  /* 17BC38 801329E8 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17BC3C 801329EC A0400060 */        sb $zero, 0x60($v0)
  /* 17BC40 801329F0 A0400061 */        sb $zero, 0x61($v0)
  /* 17BC44 801329F4 A0400062 */        sb $zero, 0x62($v0)
  /* 17BC48 801329F8 A04C0028 */        sb $t4, 0x28($v0)
  /* 17BC4C 801329FC A04D0029 */        sb $t5, 0x29($v0)
  /* 17BC50 80132A00 A04E002A */        sb $t6, 0x2a($v0)
  /* 17BC54 80132A04 240400AA */     addiu $a0, $zero, 0xaa
  /* 17BC58 80132A08 0C009A70 */       jal func_800269C0
  /* 17BC5C 80132A0C E4520058 */      swc1 $f18, 0x58($v0)
  /* 17BC60 80132A10 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17BC64 80132A14 27BD0030 */     addiu $sp, $sp, 0x30
  /* 17BC68 80132A18 03E00008 */        jr $ra
  /* 17BC6C 80132A1C 00000000 */       nop 

glabel gmStageClearMakeDamageDigitSObjs
  /* 17BC70 80132A20 3C0E8013 */       lui $t6, %hi(sGmStageClearDamageDealt)
  /* 17BC74 80132A24 8DCE52E0 */        lw $t6, %lo(sGmStageClearDamageDealt)($t6)
  /* 17BC78 80132A28 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 17BC7C 80132A2C AFBF0034 */        sw $ra, 0x34($sp)
  /* 17BC80 80132A30 29C103E9 */      slti $at, $t6, 0x3e9
  /* 17BC84 80132A34 AFB00030 */        sw $s0, 0x30($sp)
  /* 17BC88 80132A38 14200003 */      bnez $at, .L80132A48
  /* 17BC8C 80132A3C E7AC0050 */      swc1 $f12, 0x50($sp)
  /* 17BC90 80132A40 10000002 */         b .L80132A4C
  /* 17BC94 80132A44 241000B8 */     addiu $s0, $zero, 0xb8
  .L80132A48:
  /* 17BC98 80132A48 241000AB */     addiu $s0, $zero, 0xab
  .L80132A4C:
  /* 17BC9C 80132A4C 00002025 */        or $a0, $zero, $zero
  /* 17BCA0 80132A50 00002825 */        or $a1, $zero, $zero
  /* 17BCA4 80132A54 24060011 */     addiu $a2, $zero, 0x11
  /* 17BCA8 80132A58 0C00265A */       jal omMakeGObjCommon
  /* 17BCAC 80132A5C 3C078000 */       lui $a3, 0x8000
  /* 17BCB0 80132A60 3C018013 */       lui $at, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17BCB4 80132A64 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17BCB8 80132A68 240FFFFF */     addiu $t7, $zero, -1
  /* 17BCBC 80132A6C AC225304 */        sw $v0, %lo(sGmStageClearDamageMultiplierGObj)($at)
  /* 17BCC0 80132A70 AFA2004C */        sw $v0, 0x4c($sp)
  /* 17BCC4 80132A74 AFAF0010 */        sw $t7, 0x10($sp)
  /* 17BCC8 80132A78 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17BCCC 80132A7C 00402025 */        or $a0, $v0, $zero
  /* 17BCD0 80132A80 2406001A */     addiu $a2, $zero, 0x1a
  /* 17BCD4 80132A84 0C00277D */       jal omAddGObjRenderProc
  /* 17BCD8 80132A88 3C078000 */       lui $a3, 0x8000
  /* 17BCDC 80132A8C C7A60050 */      lwc1 $f6, 0x50($sp)
  /* 17BCE0 80132A90 44902000 */      mtc1 $s0, $f4
  /* 17BCE4 80132A94 3C058013 */       lui $a1, %hi(sGmStageClearDamageDealt)
  /* 17BCE8 80132A98 4600320D */ trunc.w.s $f8, $f6
  /* 17BCEC 80132A9C 24080001 */     addiu $t0, $zero, 1
  /* 17BCF0 80132AA0 24090004 */     addiu $t1, $zero, 4
  /* 17BCF4 80132AA4 46802120 */   cvt.s.w $f4, $f4
  /* 17BCF8 80132AA8 44024000 */      mfc1 $v0, $f8
  /* 17BCFC 80132AAC AFA90020 */        sw $t1, 0x20($sp)
  /* 17BD00 80132AB0 AFA80014 */        sw $t0, 0x14($sp)
  /* 17BD04 80132AB4 2459FFFF */     addiu $t9, $v0, -1
  /* 17BD08 80132AB8 44995000 */      mtc1 $t9, $f10
  /* 17BD0C 80132ABC 44062000 */      mfc1 $a2, $f4
  /* 17BD10 80132AC0 8CA552E0 */        lw $a1, %lo(sGmStageClearDamageDealt)($a1)
  /* 17BD14 80132AC4 46805020 */   cvt.s.w $f0, $f10
  /* 17BD18 80132AC8 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17BD1C 80132ACC AFA00010 */        sw $zero, 0x10($sp)
  /* 17BD20 80132AD0 AFA00018 */        sw $zero, 0x18($sp)
  /* 17BD24 80132AD4 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17BD28 80132AD8 AFA00024 */        sw $zero, 0x24($sp)
  /* 17BD2C 80132ADC 44070000 */      mfc1 $a3, $f0
  /* 17BD30 80132AE0 E7A00038 */      swc1 $f0, 0x38($sp)
  /* 17BD34 80132AE4 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17BD38 80132AE8 AFA2003C */        sw $v0, 0x3c($sp)
  /* 17BD3C 80132AEC 3C0A8013 */       lui $t2, %hi(D_ovl56_80135594)
  /* 17BD40 80132AF0 8D4A5594 */        lw $t2, %lo(D_ovl56_80135594)($t2)
  /* 17BD44 80132AF4 3C0B0000 */       lui $t3, %hi(D_NF_00001018)
  /* 17BD48 80132AF8 256B1018 */     addiu $t3, $t3, %lo(D_NF_00001018)
  /* 17BD4C 80132AFC 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17BD50 80132B00 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17BD54 80132B04 014B2821 */      addu $a1, $t2, $t3
  /* 17BD58 80132B08 2618000A */     addiu $t8, $s0, 0xa
  /* 17BD5C 80132B0C 44988000 */      mtc1 $t8, $f16
  /* 17BD60 80132B10 944C0024 */       lhu $t4, 0x24($v0)
  /* 17BD64 80132B14 26090037 */     addiu $t1, $s0, 0x37
  /* 17BD68 80132B18 468084A0 */   cvt.s.w $f18, $f16
  /* 17BD6C 80132B1C 318EFFDF */      andi $t6, $t4, 0xffdf
  /* 17BD70 80132B20 A44E0024 */        sh $t6, 0x24($v0)
  /* 17BD74 80132B24 35CF0001 */       ori $t7, $t6, 1
  /* 17BD78 80132B28 A44F0024 */        sh $t7, 0x24($v0)
  /* 17BD7C 80132B2C 44894000 */      mtc1 $t1, $f8
  /* 17BD80 80132B30 E4520058 */      swc1 $f18, 0x58($v0)
  /* 17BD84 80132B34 8FB9003C */        lw $t9, 0x3c($sp)
  /* 17BD88 80132B38 240300FF */     addiu $v1, $zero, 0xff
  /* 17BD8C 80132B3C 46804220 */   cvt.s.w $f8, $f8
  /* 17BD90 80132B40 27280002 */     addiu $t0, $t9, 2
  /* 17BD94 80132B44 44882000 */      mtc1 $t0, $f4
  /* 17BD98 80132B48 A0400060 */        sb $zero, 0x60($v0)
  /* 17BD9C 80132B4C A0400061 */        sb $zero, 0x61($v0)
  /* 17BDA0 80132B50 468021A0 */   cvt.s.w $f6, $f4
  /* 17BDA4 80132B54 A0400062 */        sb $zero, 0x62($v0)
  /* 17BDA8 80132B58 A0430028 */        sb $v1, 0x28($v0)
  /* 17BDAC 80132B5C A0430029 */        sb $v1, 0x29($v0)
  /* 17BDB0 80132B60 A043002A */        sb $v1, 0x2a($v0)
  /* 17BDB4 80132B64 44064000 */      mfc1 $a2, $f8
  /* 17BDB8 80132B68 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17BDBC 80132B6C 240C0001 */     addiu $t4, $zero, 1
  /* 17BDC0 80132B70 240A0001 */     addiu $t2, $zero, 1
  /* 17BDC4 80132B74 240B0002 */     addiu $t3, $zero, 2
  /* 17BDC8 80132B78 AFAB0020 */        sw $t3, 0x20($sp)
  /* 17BDCC 80132B7C AFAA0014 */        sw $t2, 0x14($sp)
  /* 17BDD0 80132B80 AFAC0024 */        sw $t4, 0x24($sp)
  /* 17BDD4 80132B84 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17BDD8 80132B88 AFA00018 */        sw $zero, 0x18($sp)
  /* 17BDDC 80132B8C AFA00010 */        sw $zero, 0x10($sp)
  /* 17BDE0 80132B90 8FA70038 */        lw $a3, 0x38($sp)
  /* 17BDE4 80132B94 8FA4004C */        lw $a0, 0x4c($sp)
  /* 17BDE8 80132B98 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17BDEC 80132B9C 2405000A */     addiu $a1, $zero, 0xa
  /* 17BDF0 80132BA0 8FBF0034 */        lw $ra, 0x34($sp)
  /* 17BDF4 80132BA4 8FB00030 */        lw $s0, 0x30($sp)
  /* 17BDF8 80132BA8 27BD0050 */     addiu $sp, $sp, 0x50
  /* 17BDFC 80132BAC 03E00008 */        jr $ra
  /* 17BE00 80132BB0 00000000 */       nop 

glabel gmStageClearGetAppendTotalDamageScore
  /* 17BE04 80132BB4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17BE08 80132BB8 AFBF002C */        sw $ra, 0x2c($sp)
  /* 17BE0C 80132BBC E7AC0040 */      swc1 $f12, 0x40($sp)
  /* 17BE10 80132BC0 00002025 */        or $a0, $zero, $zero
  /* 17BE14 80132BC4 00002825 */        or $a1, $zero, $zero
  /* 17BE18 80132BC8 24060011 */     addiu $a2, $zero, 0x11
  /* 17BE1C 80132BCC 0C00265A */       jal omMakeGObjCommon
  /* 17BE20 80132BD0 3C078000 */       lui $a3, 0x8000
  /* 17BE24 80132BD4 3C018013 */       lui $at, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17BE28 80132BD8 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17BE2C 80132BDC 240EFFFF */     addiu $t6, $zero, -1
  /* 17BE30 80132BE0 AC225304 */        sw $v0, %lo(sGmStageClearDamageMultiplierGObj)($at)
  /* 17BE34 80132BE4 AFA2003C */        sw $v0, 0x3c($sp)
  /* 17BE38 80132BE8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17BE3C 80132BEC 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17BE40 80132BF0 00402025 */        or $a0, $v0, $zero
  /* 17BE44 80132BF4 2406001A */     addiu $a2, $zero, 0x1a
  /* 17BE48 80132BF8 0C00277D */       jal omAddGObjRenderProc
  /* 17BE4C 80132BFC 3C078000 */       lui $a3, 0x8000
  /* 17BE50 80132C00 C7A40040 */      lwc1 $f4, 0x40($sp)
  /* 17BE54 80132C04 3C058013 */       lui $a1, %hi(sGmStageClearDamageDealt)
  /* 17BE58 80132C08 8CA552E0 */        lw $a1, %lo(sGmStageClearDamageDealt)($a1)
  /* 17BE5C 80132C0C 4600218D */ trunc.w.s $f6, $f4
  /* 17BE60 80132C10 24080001 */     addiu $t0, $zero, 1
  /* 17BE64 80132C14 00A00821 */      addu $at, $a1, $zero
  /* 17BE68 80132C18 00052880 */       sll $a1, $a1, 2
  /* 17BE6C 80132C1C 44183000 */      mfc1 $t8, $f6
  /* 17BE70 80132C20 00A12821 */      addu $a1, $a1, $at
  /* 17BE74 80132C24 00052840 */       sll $a1, $a1, 1
  /* 17BE78 80132C28 2719FFFF */     addiu $t9, $t8, -1
  /* 17BE7C 80132C2C 44994000 */      mtc1 $t9, $f8
  /* 17BE80 80132C30 24090005 */     addiu $t1, $zero, 5
  /* 17BE84 80132C34 AFA90020 */        sw $t1, 0x20($sp)
  /* 17BE88 80132C38 46804220 */   cvt.s.w $f8, $f8
  /* 17BE8C 80132C3C AFA50034 */        sw $a1, 0x34($sp)
  /* 17BE90 80132C40 AFA80014 */        sw $t0, 0x14($sp)
  /* 17BE94 80132C44 8FA4003C */        lw $a0, 0x3c($sp)
  /* 17BE98 80132C48 3C064348 */       lui $a2, 0x4348
  /* 17BE9C 80132C4C AFA00010 */        sw $zero, 0x10($sp)
  /* 17BEA0 80132C50 44074000 */      mfc1 $a3, $f8
  /* 17BEA4 80132C54 AFA00018 */        sw $zero, 0x18($sp)
  /* 17BEA8 80132C58 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17BEAC 80132C5C 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17BEB0 80132C60 AFA00024 */        sw $zero, 0x24($sp)
  /* 17BEB4 80132C64 0C009A70 */       jal func_800269C0
  /* 17BEB8 80132C68 240400A9 */     addiu $a0, $zero, 0xa9
  /* 17BEBC 80132C6C 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17BEC0 80132C70 8FA20034 */        lw $v0, 0x34($sp)
  /* 17BEC4 80132C74 27BD0040 */     addiu $sp, $sp, 0x40
  /* 17BEC8 80132C78 03E00008 */        jr $ra
  /* 17BECC 80132C7C 00000000 */       nop 

glabel gmStageClearMakeTargetTextSObjs
  /* 17BED0 80132C80 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17BED4 80132C84 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17BED8 80132C88 00002025 */        or $a0, $zero, $zero
  /* 17BEDC 80132C8C 00002825 */        or $a1, $zero, $zero
  /* 17BEE0 80132C90 24060011 */     addiu $a2, $zero, 0x11
  /* 17BEE4 80132C94 0C00265A */       jal omMakeGObjCommon
  /* 17BEE8 80132C98 3C078000 */       lui $a3, 0x8000
  /* 17BEEC 80132C9C 3C018013 */       lui $at, %hi(sGmStageClearTargetGObj)
  /* 17BEF0 80132CA0 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17BEF4 80132CA4 240EFFFF */     addiu $t6, $zero, -1
  /* 17BEF8 80132CA8 AC225318 */        sw $v0, %lo(sGmStageClearTargetGObj)($at)
  /* 17BEFC 80132CAC AFA20024 */        sw $v0, 0x24($sp)
  /* 17BF00 80132CB0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17BF04 80132CB4 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17BF08 80132CB8 00402025 */        or $a0, $v0, $zero
  /* 17BF0C 80132CBC 2406001A */     addiu $a2, $zero, 0x1a
  /* 17BF10 80132CC0 0C00277D */       jal omAddGObjRenderProc
  /* 17BF14 80132CC4 3C078000 */       lui $a3, 0x8000
  /* 17BF18 80132CC8 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17BF1C 80132CCC 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17BF20 80132CD0 3C180001 */       lui $t8, %hi(D_NF_0000B4F8)
  /* 17BF24 80132CD4 2718B4F8 */     addiu $t8, $t8, %lo(D_NF_0000B4F8)
  /* 17BF28 80132CD8 8FA40024 */        lw $a0, 0x24($sp)
  /* 17BF2C 80132CDC 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17BF30 80132CE0 01F82821 */      addu $a1, $t7, $t8
  /* 17BF34 80132CE4 240B005E */     addiu $t3, $zero, 0x5e
  /* 17BF38 80132CE8 448B3000 */      mtc1 $t3, $f6
  /* 17BF3C 80132CEC 94590024 */       lhu $t9, 0x24($v0)
  /* 17BF40 80132CF0 3C014228 */       lui $at, (0x42280000 >> 16) # 42.0
  /* 17BF44 80132CF4 46803220 */   cvt.s.w $f8, $f6
  /* 17BF48 80132CF8 44812000 */      mtc1 $at, $f4 # 42.0 to cop1
  /* 17BF4C 80132CFC 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17BF50 80132D00 A4490024 */        sh $t1, 0x24($v0)
  /* 17BF54 80132D04 352A0001 */       ori $t2, $t1, 1
  /* 17BF58 80132D08 240C00B7 */     addiu $t4, $zero, 0xb7
  /* 17BF5C 80132D0C 240D00E4 */     addiu $t5, $zero, 0xe4
  /* 17BF60 80132D10 240E00FF */     addiu $t6, $zero, 0xff
  /* 17BF64 80132D14 A44A0024 */        sh $t2, 0x24($v0)
  /* 17BF68 80132D18 E448005C */      swc1 $f8, 0x5c($v0)
  /* 17BF6C 80132D1C A0400060 */        sb $zero, 0x60($v0)
  /* 17BF70 80132D20 A0400061 */        sb $zero, 0x61($v0)
  /* 17BF74 80132D24 A0400062 */        sb $zero, 0x62($v0)
  /* 17BF78 80132D28 A04C0028 */        sb $t4, 0x28($v0)
  /* 17BF7C 80132D2C A04D0029 */        sb $t5, 0x29($v0)
  /* 17BF80 80132D30 A04E002A */        sb $t6, 0x2a($v0)
  /* 17BF84 80132D34 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17BF88 80132D38 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17BF8C 80132D3C 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17BF90 80132D40 3C180000 */       lui $t8, %hi(D_NF_00002120)
  /* 17BF94 80132D44 27182120 */     addiu $t8, $t8, %lo(D_NF_00002120)
  /* 17BF98 80132D48 8FA40024 */        lw $a0, 0x24($sp)
  /* 17BF9C 80132D4C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17BFA0 80132D50 01F82821 */      addu $a1, $t7, $t8
  /* 17BFA4 80132D54 240B0060 */     addiu $t3, $zero, 0x60
  /* 17BFA8 80132D58 448B8000 */      mtc1 $t3, $f16
  /* 17BFAC 80132D5C 94590024 */       lhu $t9, 0x24($v0)
  /* 17BFB0 80132D60 3C0142EC */       lui $at, (0x42EC0000 >> 16) # 118.0
  /* 17BFB4 80132D64 468084A0 */   cvt.s.w $f18, $f16
  /* 17BFB8 80132D68 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17BFBC 80132D6C 44815000 */      mtc1 $at, $f10 # 118.0 to cop1
  /* 17BFC0 80132D70 A4490024 */        sh $t1, 0x24($v0)
  /* 17BFC4 80132D74 352A0001 */       ori $t2, $t1, 1
  /* 17BFC8 80132D78 240C00B7 */     addiu $t4, $zero, 0xb7
  /* 17BFCC 80132D7C 240D00E4 */     addiu $t5, $zero, 0xe4
  /* 17BFD0 80132D80 240E00FF */     addiu $t6, $zero, 0xff
  /* 17BFD4 80132D84 A44A0024 */        sh $t2, 0x24($v0)
  /* 17BFD8 80132D88 E452005C */      swc1 $f18, 0x5c($v0)
  /* 17BFDC 80132D8C A0400060 */        sb $zero, 0x60($v0)
  /* 17BFE0 80132D90 A0400061 */        sb $zero, 0x61($v0)
  /* 17BFE4 80132D94 A0400062 */        sb $zero, 0x62($v0)
  /* 17BFE8 80132D98 A04C0028 */        sb $t4, 0x28($v0)
  /* 17BFEC 80132D9C A04D0029 */        sb $t5, 0x29($v0)
  /* 17BFF0 80132DA0 A04E002A */        sb $t6, 0x2a($v0)
  /* 17BFF4 80132DA4 240400AA */     addiu $a0, $zero, 0xaa
  /* 17BFF8 80132DA8 0C009A70 */       jal func_800269C0
  /* 17BFFC 80132DAC E44A0058 */      swc1 $f10, 0x58($v0)
  /* 17C000 80132DB0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17C004 80132DB4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17C008 80132DB8 03E00008 */        jr $ra
  /* 17C00C 80132DBC 00000000 */       nop 

glabel func_ovl56_80132DC0
  /* 17C010 80132DC0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17C014 80132DC4 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17C018 80132DC8 244252CC */     addiu $v0, $v0, %lo(D_ovl56_801352CC)
  /* 17C01C 80132DCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 17C020 80132DD0 8C8E0084 */        lw $t6, 0x84($a0)
  /* 17C024 80132DD4 8C4F0000 */        lw $t7, ($v0) # D_ovl56_801352CC + 0
  /* 17C028 80132DD8 24180001 */     addiu $t8, $zero, 1
  /* 17C02C 80132DDC 01CF082B */      sltu $at, $t6, $t7
  /* 17C030 80132DE0 50200004 */      beql $at, $zero, .L80132DF4
  /* 17C034 80132DE4 AC98007C */        sw $t8, 0x7c($a0)
  /* 17C038 80132DE8 10000002 */         b .L80132DF4
  /* 17C03C 80132DEC AC80007C */        sw $zero, 0x7c($a0)
  /* 17C040 80132DF0 AC98007C */        sw $t8, 0x7c($a0)
  .L80132DF4:
  /* 17C044 80132DF4 8C590000 */        lw $t9, ($v0) # D_ovl56_801352CC + 0
  /* 17C048 80132DF8 8C880084 */        lw $t0, 0x84($a0)
  /* 17C04C 80132DFC 5728000D */      bnel $t9, $t0, .L80132E34
  /* 17C050 80132E00 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17C054 80132E04 0C009A70 */       jal func_800269C0
  /* 17C058 80132E08 240400A9 */     addiu $a0, $zero, 0xa9
  /* 17C05C 80132E0C 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17C060 80132E10 0C0026A1 */       jal omEjectGObjCommon
  /* 17C064 80132E14 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17C068 80132E18 3C028013 */       lui $v0, %hi(sGmStageClearScoreTotal)
  /* 17C06C 80132E1C 244252E8 */     addiu $v0, $v0, %lo(sGmStageClearScoreTotal)
  /* 17C070 80132E20 8C490000 */        lw $t1, ($v0) # sGmStageClearScoreTotal + 0
  /* 17C074 80132E24 252A03E8 */     addiu $t2, $t1, 0x3e8
  /* 17C078 80132E28 0C04C8FE */       jal gmStageClearMakeScoreSObjs
  /* 17C07C 80132E2C AC4A0000 */        sw $t2, ($v0) # sGmStageClearScoreTotal + 0
  /* 17C080 80132E30 8FBF0014 */        lw $ra, 0x14($sp)
  .L80132E34:
  /* 17C084 80132E34 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17C088 80132E38 03E00008 */        jr $ra
  /* 17C08C 80132E3C 00000000 */       nop 

glabel func_ovl56_80132E40
  /* 17C090 80132E40 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17C094 80132E44 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17C098 80132E48 AFA60038 */        sw $a2, 0x38($sp)
  /* 17C09C 80132E4C AFB00020 */        sw $s0, 0x20($sp)
  /* 17C0A0 80132E50 E7AC0030 */      swc1 $f12, 0x30($sp)
  /* 17C0A4 80132E54 E7AE0034 */      swc1 $f14, 0x34($sp)
  /* 17C0A8 80132E58 24060011 */     addiu $a2, $zero, 0x11
  /* 17C0AC 80132E5C 00002025 */        or $a0, $zero, $zero
  /* 17C0B0 80132E60 00002825 */        or $a1, $zero, $zero
  /* 17C0B4 80132E64 0C00265A */       jal omMakeGObjCommon
  /* 17C0B8 80132E68 3C078000 */       lui $a3, 0x8000
  /* 17C0BC 80132E6C 8FAE0038 */        lw $t6, 0x38($sp)
  /* 17C0C0 80132E70 3C018013 */       lui $at, %hi(sGmStageClearBonusObjectiveGObj)
  /* 17C0C4 80132E74 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17C0C8 80132E78 000E7880 */       sll $t7, $t6, 2
  /* 17C0CC 80132E7C 002F0821 */      addu $at, $at, $t7
  /* 17C0D0 80132E80 2418FFFF */     addiu $t8, $zero, -1
  /* 17C0D4 80132E84 AC225378 */        sw $v0, %lo(sGmStageClearBonusObjectiveGObj)($at)
  /* 17C0D8 80132E88 00408025 */        or $s0, $v0, $zero
  /* 17C0DC 80132E8C AFB80010 */        sw $t8, 0x10($sp)
  /* 17C0E0 80132E90 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17C0E4 80132E94 00402025 */        or $a0, $v0, $zero
  /* 17C0E8 80132E98 2406001A */     addiu $a2, $zero, 0x1a
  /* 17C0EC 80132E9C 0C00277D */       jal omAddGObjRenderProc
  /* 17C0F0 80132EA0 3C078000 */       lui $a3, 0x8000
  /* 17C0F4 80132EA4 3C058013 */       lui $a1, %hi(func_ovl56_80132DC0)
  /* 17C0F8 80132EA8 24A52DC0 */     addiu $a1, $a1, %lo(func_ovl56_80132DC0)
  /* 17C0FC 80132EAC 02002025 */        or $a0, $s0, $zero
  /* 17C100 80132EB0 24060001 */     addiu $a2, $zero, 1
  /* 17C104 80132EB4 0C002062 */       jal omAddGObjCommonProc
  /* 17C108 80132EB8 24070001 */     addiu $a3, $zero, 1
  /* 17C10C 80132EBC 8FB90038 */        lw $t9, 0x38($sp)
  /* 17C110 80132EC0 3C098013 */       lui $t1, %hi(D_ovl56_801352CC)
  /* 17C114 80132EC4 8D2952CC */        lw $t1, %lo(D_ovl56_801352CC)($t1)
  /* 17C118 80132EC8 00194080 */       sll $t0, $t9, 2
  /* 17C11C 80132ECC 01194021 */      addu $t0, $t0, $t9
  /* 17C120 80132ED0 00084040 */       sll $t0, $t0, 1
  /* 17C124 80132ED4 01095021 */      addu $t2, $t0, $t1
  /* 17C128 80132ED8 AE0A0084 */        sw $t2, 0x84($s0)
  /* 17C12C 80132EDC 3C038013 */       lui $v1, %hi(sGmStageClear1PGameStage)
  /* 17C130 80132EE0 8C6352EC */        lw $v1, %lo(sGmStageClear1PGameStage)($v1)
  /* 17C134 80132EE4 24010003 */     addiu $at, $zero, 3
  /* 17C138 80132EE8 02002025 */        or $a0, $s0, $zero
  /* 17C13C 80132EEC 10610006 */       beq $v1, $at, .L80132F08
  /* 17C140 80132EF0 3C0B8013 */       lui $t3, %hi(D_ovl56_8013559C)
  /* 17C144 80132EF4 24010007 */     addiu $at, $zero, 7
  /* 17C148 80132EF8 1061000A */       beq $v1, $at, .L80132F24
  /* 17C14C 80132EFC 02002025 */        or $a0, $s0, $zero
  /* 17C150 80132F00 1000000F */         b .L80132F40
  /* 17C154 80132F04 8FA30028 */        lw $v1, 0x28($sp)
  .L80132F08:
  /* 17C158 80132F08 8D6B559C */        lw $t3, %lo(D_ovl56_8013559C)($t3)
  /* 17C15C 80132F0C 3C0C0000 */       lui $t4, %hi(D_NF_000001D0)
  /* 17C160 80132F10 258C01D0 */     addiu $t4, $t4, %lo(D_NF_000001D0)
  /* 17C164 80132F14 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C168 80132F18 016C2821 */      addu $a1, $t3, $t4
  /* 17C16C 80132F1C 10000008 */         b .L80132F40
  /* 17C170 80132F20 00401825 */        or $v1, $v0, $zero
  .L80132F24:
  /* 17C174 80132F24 3C0D8013 */       lui $t5, %hi(D_ovl56_8013559C)
  /* 17C178 80132F28 8DAD559C */        lw $t5, %lo(D_ovl56_8013559C)($t5)
  /* 17C17C 80132F2C 3C0E0000 */       lui $t6, %hi(D_NF_000000C0)
  /* 17C180 80132F30 25CE00C0 */     addiu $t6, $t6, %lo(D_NF_000000C0)
  /* 17C184 80132F34 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C188 80132F38 01AE2821 */      addu $a1, $t5, $t6
  /* 17C18C 80132F3C 00401825 */        or $v1, $v0, $zero
  .L80132F40:
  /* 17C190 80132F40 946F0024 */       lhu $t7, 0x24($v1)
  /* 17C194 80132F44 31F9FFDF */      andi $t9, $t7, 0xffdf
  /* 17C198 80132F48 A4790024 */        sh $t9, 0x24($v1)
  /* 17C19C 80132F4C 37280001 */       ori $t0, $t9, 1
  /* 17C1A0 80132F50 A4680024 */        sh $t0, 0x24($v1)
  /* 17C1A4 80132F54 C7A40030 */      lwc1 $f4, 0x30($sp)
  /* 17C1A8 80132F58 E4640058 */      swc1 $f4, 0x58($v1)
  /* 17C1AC 80132F5C C7A60034 */      lwc1 $f6, 0x34($sp)
  /* 17C1B0 80132F60 E466005C */      swc1 $f6, 0x5c($v1)
  /* 17C1B4 80132F64 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17C1B8 80132F68 8FB00020 */        lw $s0, 0x20($sp)
  /* 17C1BC 80132F6C 27BD0030 */     addiu $sp, $sp, 0x30
  /* 17C1C0 80132F70 03E00008 */        jr $ra
  /* 17C1C4 80132F74 00000000 */       nop 

glabel func_ovl56_80132F78
  /* 17C1C8 80132F78 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17C1CC 80132F7C AFB20028 */        sw $s2, 0x28($sp)
  /* 17C1D0 80132F80 3C128013 */       lui $s2, %hi(sGmStageClearBonusObjectivesCleared)
  /* 17C1D4 80132F84 265253A4 */     addiu $s2, $s2, %lo(sGmStageClearBonusObjectivesCleared)
  /* 17C1D8 80132F88 8E4E0000 */        lw $t6, ($s2) # sGmStageClearBonusObjectivesCleared + 0
  /* 17C1DC 80132F8C AFB00020 */        sw $s0, 0x20($sp)
  /* 17C1E0 80132F90 AFBF002C */        sw $ra, 0x2c($sp)
  /* 17C1E4 80132F94 AFB10024 */        sw $s1, 0x24($sp)
  /* 17C1E8 80132F98 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 17C1EC 80132F9C 19C0000F */      blez $t6, .L80132FDC
  /* 17C1F0 80132FA0 00008025 */        or $s0, $zero, $zero
  /* 17C1F4 80132FA4 3C0142BA */       lui $at, (0x42BA0000 >> 16) # 93.0
  /* 17C1F8 80132FA8 4481A000 */      mtc1 $at, $f20 # 93.0 to cop1
  /* 17C1FC 80132FAC 24110082 */     addiu $s1, $zero, 0x82
  /* 17C200 80132FB0 44912000 */      mtc1 $s1, $f4
  .L80132FB4:
  /* 17C204 80132FB4 4600A386 */     mov.s $f14, $f20
  /* 17C208 80132FB8 02003025 */        or $a2, $s0, $zero
  /* 17C20C 80132FBC 0C04CB90 */       jal func_ovl56_80132E40
  /* 17C210 80132FC0 46802320 */   cvt.s.w $f12, $f4
  /* 17C214 80132FC4 8E4F0000 */        lw $t7, ($s2) # sGmStageClearBonusObjectivesCleared + 0
  /* 17C218 80132FC8 26100001 */     addiu $s0, $s0, 1
  /* 17C21C 80132FCC 26310010 */     addiu $s1, $s1, 0x10
  /* 17C220 80132FD0 020F082A */       slt $at, $s0, $t7
  /* 17C224 80132FD4 5420FFF7 */      bnel $at, $zero, .L80132FB4
  /* 17C228 80132FD8 44912000 */      mtc1 $s1, $f4
  .L80132FDC:
  /* 17C22C 80132FDC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17C230 80132FE0 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 17C234 80132FE4 8FB00020 */        lw $s0, 0x20($sp)
  /* 17C238 80132FE8 8FB10024 */        lw $s1, 0x24($sp)
  /* 17C23C 80132FEC 8FB20028 */        lw $s2, 0x28($sp)
  /* 17C240 80132FF0 03E00008 */        jr $ra
  /* 17C244 80132FF4 27BD0030 */     addiu $sp, $sp, 0x30

glabel gmStageClearSetupBonusStats
  /* 17C248 80132FF8 28A10020 */      slti $at, $a1, 0x20
  /* 17C24C 80132FFC 10200004 */      beqz $at, .L80133010
  /* 17C250 80133000 27BDFFF8 */     addiu $sp, $sp, -8
  /* 17C254 80133004 AFA00000 */        sw $zero, ($sp)
  /* 17C258 80133008 1000000C */         b .L8013303C
  /* 17C25C 8013300C AFA50004 */        sw $a1, 4($sp)
  .L80133010:
  /* 17C260 80133010 28A10040 */      slti $at, $a1, 0x40
  /* 17C264 80133014 10200006 */      beqz $at, .L80133030
  /* 17C268 80133018 24180002 */     addiu $t8, $zero, 2
  /* 17C26C 8013301C 240E0001 */     addiu $t6, $zero, 1
  /* 17C270 80133020 24AFFFE0 */     addiu $t7, $a1, -0x20
  /* 17C274 80133024 AFAE0000 */        sw $t6, ($sp)
  /* 17C278 80133028 10000004 */         b .L8013303C
  /* 17C27C 8013302C AFAF0004 */        sw $t7, 4($sp)
  .L80133030:
  /* 17C280 80133030 24B9FFC0 */     addiu $t9, $a1, -0x40
  /* 17C284 80133034 AFB80000 */        sw $t8, ($sp)
  /* 17C288 80133038 AFB90004 */        sw $t9, 4($sp)
  .L8013303C:
  /* 17C28C 8013303C 27A80000 */     addiu $t0, $sp, 0
  /* 17C290 80133040 8D0A0000 */        lw $t2, ($t0)
  /* 17C294 80133044 00801025 */        or $v0, $a0, $zero
  /* 17C298 80133048 AC8A0000 */        sw $t2, ($a0)
  /* 17C29C 8013304C 8D090004 */        lw $t1, 4($t0)
  /* 17C2A0 80133050 27BD0008 */     addiu $sp, $sp, 8
  /* 17C2A4 80133054 03E00008 */        jr $ra
  /* 17C2A8 80133058 AC890004 */        sw $t1, 4($a0)

glabel gmStageClearCheckHaveBonusStats
  /* 17C2AC 8013305C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17C2B0 80133060 AFB2001C */        sw $s2, 0x1c($sp)
  /* 17C2B4 80133064 AFB30020 */        sw $s3, 0x20($sp)
  /* 17C2B8 80133068 AFB10018 */        sw $s1, 0x18($sp)
  /* 17C2BC 8013306C AFB00014 */        sw $s0, 0x14($sp)
  /* 17C2C0 80133070 3C128013 */       lui $s2, %hi(sGmStageClearBonusMasks)
  /* 17C2C4 80133074 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17C2C8 80133078 26525320 */     addiu $s2, $s2, %lo(sGmStageClearBonusMasks)
  /* 17C2CC 8013307C 00008025 */        or $s0, $zero, $zero
  /* 17C2D0 80133080 27B1002C */     addiu $s1, $sp, 0x2c
  /* 17C2D4 80133084 24130060 */     addiu $s3, $zero, 0x60
  /* 17C2D8 80133088 02202025 */        or $a0, $s1, $zero
  .L8013308C:
  /* 17C2DC 8013308C 0C04CBFE */       jal gmStageClearSetupBonusStats
  /* 17C2E0 80133090 02002825 */        or $a1, $s0, $zero
  /* 17C2E4 80133094 8FAE002C */        lw $t6, 0x2c($sp)
  /* 17C2E8 80133098 8FA80030 */        lw $t0, 0x30($sp)
  /* 17C2EC 8013309C 24090001 */     addiu $t1, $zero, 1
  /* 17C2F0 801330A0 000E7880 */       sll $t7, $t6, 2
  /* 17C2F4 801330A4 024FC021 */      addu $t8, $s2, $t7
  /* 17C2F8 801330A8 8F190000 */        lw $t9, ($t8)
  /* 17C2FC 801330AC 01095004 */      sllv $t2, $t1, $t0
  /* 17C300 801330B0 26100001 */     addiu $s0, $s0, 1
  /* 17C304 801330B4 032A5824 */       and $t3, $t9, $t2
  /* 17C308 801330B8 11600003 */      beqz $t3, .L801330C8
  /* 17C30C 801330BC 00000000 */       nop 
  /* 17C310 801330C0 10000004 */         b .L801330D4
  /* 17C314 801330C4 24020001 */     addiu $v0, $zero, 1
  .L801330C8:
  /* 17C318 801330C8 5613FFF0 */      bnel $s0, $s3, .L8013308C
  /* 17C31C 801330CC 02202025 */        or $a0, $s1, $zero
  /* 17C320 801330D0 00001025 */        or $v0, $zero, $zero
  .L801330D4:
  /* 17C324 801330D4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17C328 801330D8 8FB00014 */        lw $s0, 0x14($sp)
  /* 17C32C 801330DC 8FB10018 */        lw $s1, 0x18($sp)
  /* 17C330 801330E0 8FB2001C */        lw $s2, 0x1c($sp)
  /* 17C334 801330E4 8FB30020 */        lw $s3, 0x20($sp)
  /* 17C338 801330E8 03E00008 */        jr $ra
  /* 17C33C 801330EC 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl56_801330F0
  /* 17C340 801330F0 248EFFEA */     addiu $t6, $a0, -0x16
  /* 17C344 801330F4 2DC10005 */     sltiu $at, $t6, 5
  /* 17C348 801330F8 10200009 */      beqz $at, .L80133120
  /* 17C34C 801330FC 00001025 */        or $v0, $zero, $zero
  /* 17C350 80133100 000E7080 */       sll $t6, $t6, 2
  /* 17C354 80133104 3C018013 */       lui $at, %hi(jtbl_ovl56_801352A0)
  /* 17C358 80133108 002E0821 */      addu $at, $at, $t6
  /* 17C35C 8013310C 8C2E52A0 */        lw $t6, %lo(jtbl_ovl56_801352A0)($at)
  /* 17C360 80133110 01C00008 */        jr $t6
  /* 17C364 80133114 00000000 */       nop 
  glabel jtgt_ovl56_80133118
  /* 17C368 80133118 03E00008 */        jr $ra
  /* 17C36C 8013311C 24020001 */     addiu $v0, $zero, 1

  .L80133120:
  /* 17C370 80133120 03E00008 */        jr $ra
  /* 17C374 80133124 00000000 */       nop 

glabel func_ovl56_80133128
  /* 17C378 80133128 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 17C37C 8013312C 3C0E8013 */       lui $t6, %hi(D_ovl56_80135198)
  /* 17C380 80133130 27A30000 */     addiu $v1, $sp, 0
  /* 17C384 80133134 25CE5198 */     addiu $t6, $t6, %lo(D_ovl56_80135198)
  /* 17C388 80133138 25C80030 */     addiu $t0, $t6, 0x30
  /* 17C38C 8013313C 0060C825 */        or $t9, $v1, $zero
  .L80133140:
  /* 17C390 80133140 8DD80000 */        lw $t8, ($t6) # D_ovl56_80135198 + 0
  /* 17C394 80133144 25CE000C */     addiu $t6, $t6, 0xc
  /* 17C398 80133148 2739000C */     addiu $t9, $t9, 0xc
  /* 17C39C 8013314C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 17C3A0 80133150 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl56_80135198 + -8
  /* 17C3A4 80133154 AF2FFFF8 */        sw $t7, -8($t9)
  /* 17C3A8 80133158 8DD8FFFC */        lw $t8, -4($t6) # D_ovl56_80135198 + -4
  /* 17C3AC 8013315C 15C8FFF8 */       bne $t6, $t0, .L80133140
  /* 17C3B0 80133160 AF38FFFC */        sw $t8, -4($t9)
  /* 17C3B4 80133164 8DD80000 */        lw $t8, ($t6) # D_ovl56_80135198 + 0
  /* 17C3B8 80133168 00044880 */       sll $t1, $a0, 2
  /* 17C3BC 8013316C 00695021 */      addu $t2, $v1, $t1
  /* 17C3C0 80133170 AF380000 */        sw $t8, ($t9)
  /* 17C3C4 80133174 8DCF0004 */        lw $t7, 4($t6) # D_ovl56_80135198 + 4
  /* 17C3C8 80133178 AF2F0004 */        sw $t7, 4($t9)
  /* 17C3CC 8013317C 8D420000 */        lw $v0, ($t2)
  /* 17C3D0 80133180 03E00008 */        jr $ra
  /* 17C3D4 80133184 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl56_80133188
  /* 17C3D8 80133188 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17C3DC 8013318C AFBF0014 */        sw $ra, 0x14($sp)
  /* 17C3E0 80133190 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17C3E4 80133194 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17C3E8 80133198 8C830084 */        lw $v1, 0x84($a0)
  /* 17C3EC 8013319C 00802825 */        or $a1, $a0, $zero
  /* 17C3F0 801331A0 240400AA */     addiu $a0, $zero, 0xaa
  /* 17C3F4 801331A4 54430008 */      bnel $v0, $v1, .L801331C8
  /* 17C3F8 801331A8 0062082B */      sltu $at, $v1, $v0
  /* 17C3FC 801331AC 0C009A70 */       jal func_800269C0
  /* 17C400 801331B0 AFA50018 */        sw $a1, 0x18($sp)
  /* 17C404 801331B4 8FA50018 */        lw $a1, 0x18($sp)
  /* 17C408 801331B8 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17C40C 801331BC 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17C410 801331C0 8CA30084 */        lw $v1, 0x84($a1)
  /* 17C414 801331C4 0062082B */      sltu $at, $v1, $v0
  .L801331C8:
  /* 17C418 801331C8 10200003 */      beqz $at, .L801331D8
  /* 17C41C 801331CC 240E0001 */     addiu $t6, $zero, 1
  /* 17C420 801331D0 10000002 */         b .L801331DC
  /* 17C424 801331D4 ACA0007C */        sw $zero, 0x7c($a1)
  .L801331D8:
  /* 17C428 801331D8 ACAE007C */        sw $t6, 0x7c($a1)
  .L801331DC:
  /* 17C42C 801331DC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17C430 801331E0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17C434 801331E4 03E00008 */        jr $ra
  /* 17C438 801331E8 00000000 */       nop 

glabel func_ovl56_801331EC
  /* 17C43C 801331EC 27BDFF90 */     addiu $sp, $sp, -0x70
  /* 17C440 801331F0 3C0F8013 */       lui $t7, %hi(D_ovl56_801351D0)
  /* 17C444 801331F4 AFBF0034 */        sw $ra, 0x34($sp)
  /* 17C448 801331F8 AFB10030 */        sw $s1, 0x30($sp)
  /* 17C44C 801331FC AFB0002C */        sw $s0, 0x2c($sp)
  /* 17C450 80133200 AFA50074 */        sw $a1, 0x74($sp)
  /* 17C454 80133204 AFA60078 */        sw $a2, 0x78($sp)
  /* 17C458 80133208 AFA7007C */        sw $a3, 0x7c($sp)
  /* 17C45C 8013320C 25EF51D0 */     addiu $t7, $t7, %lo(D_ovl56_801351D0)
  /* 17C460 80133210 8DF90000 */        lw $t9, ($t7) # D_ovl56_801351D0 + 0
  /* 17C464 80133214 27AE0050 */     addiu $t6, $sp, 0x50
  /* 17C468 80133218 8DF80004 */        lw $t8, 4($t7) # D_ovl56_801351D0 + 4
  /* 17C46C 8013321C ADD90000 */        sw $t9, ($t6)
  /* 17C470 80133220 8DF90008 */        lw $t9, 8($t7) # D_ovl56_801351D0 + 8
  /* 17C474 80133224 ADD80004 */        sw $t8, 4($t6)
  /* 17C478 80133228 8DF8000C */        lw $t8, 0xc($t7) # D_ovl56_801351D0 + 12
  /* 17C47C 8013322C ADD90008 */        sw $t9, 8($t6)
  /* 17C480 80133230 8DF90010 */        lw $t9, 0x10($t7) # D_ovl56_801351D0 + 16
  /* 17C484 80133234 3C098013 */       lui $t1, %hi(D_ovl56_801351E4)
  /* 17C488 80133238 252951E4 */     addiu $t1, $t1, %lo(D_ovl56_801351E4)
  /* 17C48C 8013323C ADD8000C */        sw $t8, 0xc($t6)
  /* 17C490 80133240 ADD90010 */        sw $t9, 0x10($t6)
  /* 17C494 80133244 8D2B0000 */        lw $t3, ($t1) # D_ovl56_801351E4 + 0
  /* 17C498 80133248 27A80048 */     addiu $t0, $sp, 0x48
  /* 17C49C 8013324C 00808825 */        or $s1, $a0, $zero
  /* 17C4A0 80133250 AD0B0000 */        sw $t3, ($t0)
  /* 17C4A4 80133254 952B0004 */       lhu $t3, 4($t1) # D_ovl56_801351E4 + 4
  /* 17C4A8 80133258 00002025 */        or $a0, $zero, $zero
  /* 17C4AC 8013325C 3C078000 */       lui $a3, 0x8000
  /* 17C4B0 80133260 24060011 */     addiu $a2, $zero, 0x11
  /* 17C4B4 80133264 00002825 */        or $a1, $zero, $zero
  /* 17C4B8 80133268 0C00265A */       jal omMakeGObjCommon
  /* 17C4BC 8013326C A50B0004 */        sh $t3, 4($t0)
  /* 17C4C0 80133270 8FAC0074 */        lw $t4, 0x74($sp)
  /* 17C4C4 80133274 3C018013 */       lui $at, %hi(D_ovl56_80135350)
  /* 17C4C8 80133278 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17C4CC 8013327C 000C6880 */       sll $t5, $t4, 2
  /* 17C4D0 80133280 002D0821 */      addu $at, $at, $t5
  /* 17C4D4 80133284 240EFFFF */     addiu $t6, $zero, -1
  /* 17C4D8 80133288 AC225350 */        sw $v0, %lo(D_ovl56_80135350)($at)
  /* 17C4DC 8013328C 00408025 */        or $s0, $v0, $zero
  /* 17C4E0 80133290 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17C4E4 80133294 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17C4E8 80133298 00402025 */        or $a0, $v0, $zero
  /* 17C4EC 8013329C 2406001A */     addiu $a2, $zero, 0x1a
  /* 17C4F0 801332A0 0C00277D */       jal omAddGObjRenderProc
  /* 17C4F4 801332A4 3C078000 */       lui $a3, 0x8000
  /* 17C4F8 801332A8 3C058013 */       lui $a1, %hi(func_ovl56_80133188)
  /* 17C4FC 801332AC 24A53188 */     addiu $a1, $a1, %lo(func_ovl56_80133188)
  /* 17C500 801332B0 02002025 */        or $a0, $s0, $zero
  /* 17C504 801332B4 24060001 */     addiu $a2, $zero, 1
  /* 17C508 801332B8 0C002062 */       jal omAddGObjCommonProc
  /* 17C50C 801332BC 24070001 */     addiu $a3, $zero, 1
  /* 17C510 801332C0 8FAF0074 */        lw $t7, 0x74($sp)
  /* 17C514 801332C4 3C198013 */       lui $t9, %hi(D_ovl56_801352CC)
  /* 17C518 801332C8 8F3952CC */        lw $t9, %lo(D_ovl56_801352CC)($t9)
  /* 17C51C 801332CC 000FC080 */       sll $t8, $t7, 2
  /* 17C520 801332D0 030FC021 */      addu $t8, $t8, $t7
  /* 17C524 801332D4 0018C040 */       sll $t8, $t8, 1
  /* 17C528 801332D8 24010016 */     addiu $at, $zero, 0x16
  /* 17C52C 801332DC 03194021 */      addu $t0, $t8, $t9
  /* 17C530 801332E0 16210012 */       bne $s1, $at, .L8013332C
  /* 17C534 801332E4 AE080084 */        sw $t0, 0x84($s0)
  /* 17C538 801332E8 3C098013 */       lui $t1, %hi(D_ovl56_801352E4)
  /* 17C53C 801332EC 8D2952E4 */        lw $t1, %lo(D_ovl56_801352E4)($t1)
  /* 17C540 801332F0 3C0C8013 */       lui $t4, %hi(sGmStageClearFiles)
  /* 17C544 801332F4 8D8C5588 */        lw $t4, %lo(sGmStageClearFiles)($t4)
  /* 17C548 801332F8 00095080 */       sll $t2, $t1, 2
  /* 17C54C 801332FC 03AA5821 */      addu $t3, $sp, $t2
  /* 17C550 80133300 8D6B0050 */        lw $t3, 0x50($t3)
  /* 17C554 80133304 02002025 */        or $a0, $s0, $zero
  /* 17C558 80133308 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C55C 8013330C 016C2821 */      addu $a1, $t3, $t4
  /* 17C560 80133310 3C0E8013 */       lui $t6, %hi(D_ovl56_80134EFC)
  /* 17C564 80133314 25CE4EFC */     addiu $t6, $t6, %lo(D_ovl56_80134EFC)
  /* 17C568 80133318 001168C0 */       sll $t5, $s1, 3
  /* 17C56C 8013331C 01AE7821 */      addu $t7, $t5, $t6
  /* 17C570 80133320 AFAF0040 */        sw $t7, 0x40($sp)
  /* 17C574 80133324 1000000D */         b .L8013335C
  /* 17C578 80133328 00401825 */        or $v1, $v0, $zero
  .L8013332C:
  /* 17C57C 8013332C 3C198013 */       lui $t9, %hi(D_ovl56_80134EFC)
  /* 17C580 80133330 27394EFC */     addiu $t9, $t9, %lo(D_ovl56_80134EFC)
  /* 17C584 80133334 0011C0C0 */       sll $t8, $s1, 3
  /* 17C588 80133338 03191021 */      addu $v0, $t8, $t9
  /* 17C58C 8013333C 3C098013 */       lui $t1, %hi(sGmStageClearFiles)
  /* 17C590 80133340 8D295588 */        lw $t1, %lo(sGmStageClearFiles)($t1)
  /* 17C594 80133344 8C480000 */        lw $t0, ($v0)
  /* 17C598 80133348 AFA20040 */        sw $v0, 0x40($sp)
  /* 17C59C 8013334C 02002025 */        or $a0, $s0, $zero
  /* 17C5A0 80133350 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C5A4 80133354 01092821 */      addu $a1, $t0, $t1
  /* 17C5A8 80133358 00401825 */        or $v1, $v0, $zero
  .L8013335C:
  /* 17C5AC 8013335C 946A0024 */       lhu $t2, 0x24($v1)
  /* 17C5B0 80133360 02202025 */        or $a0, $s1, $zero
  /* 17C5B4 80133364 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 17C5B8 80133368 A46C0024 */        sh $t4, 0x24($v1)
  /* 17C5BC 8013336C 358D0001 */       ori $t5, $t4, 1
  /* 17C5C0 80133370 A46D0024 */        sh $t5, 0x24($v1)
  /* 17C5C4 80133374 C7A40078 */      lwc1 $f4, 0x78($sp)
  /* 17C5C8 80133378 E4640058 */      swc1 $f4, 0x58($v1)
  /* 17C5CC 8013337C C7A6007C */      lwc1 $f6, 0x7c($sp)
  /* 17C5D0 80133380 E466005C */      swc1 $f6, 0x5c($v1)
  /* 17C5D4 80133384 0C04CC3C */       jal func_ovl56_801330F0
  /* 17C5D8 80133388 AFA30068 */        sw $v1, 0x68($sp)
  /* 17C5DC 8013338C 10400006 */      beqz $v0, .L801333A8
  /* 17C5E0 80133390 8FA30068 */        lw $v1, 0x68($sp)
  /* 17C5E4 80133394 240E00FF */     addiu $t6, $zero, 0xff
  /* 17C5E8 80133398 A06E0028 */        sb $t6, 0x28($v1)
  /* 17C5EC 8013339C A0600029 */        sb $zero, 0x29($v1)
  /* 17C5F0 801333A0 10000006 */         b .L801333BC
  /* 17C5F4 801333A4 A060002A */        sb $zero, 0x2a($v1)
  .L801333A8:
  /* 17C5F8 801333A8 240F00FF */     addiu $t7, $zero, 0xff
  /* 17C5FC 801333AC 241800FF */     addiu $t8, $zero, 0xff
  /* 17C600 801333B0 A06F0028 */        sb $t7, 0x28($v1)
  /* 17C604 801333B4 A0780029 */        sb $t8, 0x29($v1)
  /* 17C608 801333B8 A060002A */        sb $zero, 0x2a($v1)
  .L801333BC:
  /* 17C60C 801333BC 24010013 */     addiu $at, $zero, 0x13
  /* 17C610 801333C0 16210031 */       bne $s1, $at, .L80133488
  /* 17C614 801333C4 02002025 */        or $a0, $s0, $zero
  /* 17C618 801333C8 3C198013 */       lui $t9, %hi(D_ovl56_80135598)
  /* 17C61C 801333CC 8F395598 */        lw $t9, %lo(D_ovl56_80135598)($t9)
  /* 17C620 801333D0 3C080000 */       lui $t0, %hi(D_NF_00000828)
  /* 17C624 801333D4 25080828 */     addiu $t0, $t0, %lo(D_NF_00000828)
  /* 17C628 801333D8 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C62C 801333DC 03282821 */      addu $a1, $t9, $t0
  /* 17C630 801333E0 94490024 */       lhu $t1, 0x24($v0)
  /* 17C634 801333E4 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 17C638 801333E8 44815000 */      mtc1 $at, $f10 # 40.0 to cop1
  /* 17C63C 801333EC 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 17C640 801333F0 A44B0024 */        sh $t3, 0x24($v0)
  /* 17C644 801333F4 356C0001 */       ori $t4, $t3, 1
  /* 17C648 801333F8 A44C0024 */        sh $t4, 0x24($v0)
  /* 17C64C 801333FC C7A80078 */      lwc1 $f8, 0x78($sp)
  /* 17C650 80133400 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 17C654 80133404 44819000 */      mtc1 $at, $f18 # 1.0 to cop1
  /* 17C658 80133408 460A4000 */     add.s $f0, $f8, $f10
  /* 17C65C 8013340C 240300FF */     addiu $v1, $zero, 0xff
  /* 17C660 80133410 3C048013 */       lui $a0, %hi(sGmStageClear1PGameStage)
  /* 17C664 80133414 E4400058 */      swc1 $f0, 0x58($v0)
  /* 17C668 80133418 C7B0007C */      lwc1 $f16, 0x7c($sp)
  /* 17C66C 8013341C A0430028 */        sb $v1, 0x28($v0)
  /* 17C670 80133420 A0430029 */        sb $v1, 0x29($v0)
  /* 17C674 80133424 46128081 */     sub.s $f2, $f16, $f18
  /* 17C678 80133428 A040002A */        sb $zero, 0x2a($v0)
  /* 17C67C 8013342C E442005C */      swc1 $f2, 0x5c($v0)
  /* 17C680 80133430 E7A20038 */      swc1 $f2, 0x38($sp)
  /* 17C684 80133434 E7A0003C */      swc1 $f0, 0x3c($sp)
  /* 17C688 80133438 0C04CC4A */       jal func_ovl56_80133128
  /* 17C68C 8013343C 8C8452EC */        lw $a0, %lo(sGmStageClear1PGameStage)($a0)
  /* 17C690 80133440 3C0141D0 */       lui $at, (0x41D00000 >> 16) # 26.0
  /* 17C694 80133444 44812000 */      mtc1 $at, $f4 # 26.0 to cop1
  /* 17C698 80133448 C7A0003C */      lwc1 $f0, 0x3c($sp)
  /* 17C69C 8013344C 27AD0048 */     addiu $t5, $sp, 0x48
  /* 17C6A0 80133450 240E0001 */     addiu $t6, $zero, 1
  /* 17C6A4 80133454 46040180 */     add.s $f6, $f0, $f4
  /* 17C6A8 80133458 240F0002 */     addiu $t7, $zero, 2
  /* 17C6AC 8013345C AFAF0020 */        sw $t7, 0x20($sp)
  /* 17C6B0 80133460 AFAE0018 */        sw $t6, 0x18($sp)
  /* 17C6B4 80133464 44063000 */      mfc1 $a2, $f6
  /* 17C6B8 80133468 AFAD0010 */        sw $t5, 0x10($sp)
  /* 17C6BC 8013346C 02002025 */        or $a0, $s0, $zero
  /* 17C6C0 80133470 00402825 */        or $a1, $v0, $zero
  /* 17C6C4 80133474 8FA70038 */        lw $a3, 0x38($sp)
  /* 17C6C8 80133478 AFA00014 */        sw $zero, 0x14($sp)
  /* 17C6CC 8013347C AFA0001C */        sw $zero, 0x1c($sp)
  /* 17C6D0 80133480 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17C6D4 80133484 AFA00024 */        sw $zero, 0x24($sp)
  .L80133488:
  /* 17C6D8 80133488 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 17C6DC 8013348C 44815000 */      mtc1 $at, $f10 # 1.0 to cop1
  /* 17C6E0 80133490 C7A8007C */      lwc1 $f8, 0x7c($sp)
  /* 17C6E4 80133494 3C188013 */       lui $t8, %hi(D_ovl56_80135598)
  /* 17C6E8 80133498 8F185598 */        lw $t8, %lo(D_ovl56_80135598)($t8)
  /* 17C6EC 8013349C 460A4401 */     sub.s $f16, $f8, $f10
  /* 17C6F0 801334A0 3C190000 */       lui $t9, %hi(D_NF_000008D8)
  /* 17C6F4 801334A4 273908D8 */     addiu $t9, $t9, %lo(D_NF_000008D8)
  /* 17C6F8 801334A8 02002025 */        or $a0, $s0, $zero
  /* 17C6FC 801334AC E7B00038 */      swc1 $f16, 0x38($sp)
  /* 17C700 801334B0 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C704 801334B4 03192821 */      addu $a1, $t8, $t9
  /* 17C708 801334B8 94480024 */       lhu $t0, 0x24($v0)
  /* 17C70C 801334BC 3C014337 */       lui $at, (0x43370000 >> 16) # 183.0
  /* 17C710 801334C0 44819000 */      mtc1 $at, $f18 # 183.0 to cop1
  /* 17C714 801334C4 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 17C718 801334C8 A44A0024 */        sh $t2, 0x24($v0)
  /* 17C71C 801334CC 354B0001 */       ori $t3, $t2, 1
  /* 17C720 801334D0 A44B0024 */        sh $t3, 0x24($v0)
  /* 17C724 801334D4 E4520058 */      swc1 $f18, 0x58($v0)
  /* 17C728 801334D8 C7A4007C */      lwc1 $f4, 0x7c($sp)
  /* 17C72C 801334DC 240300FF */     addiu $v1, $zero, 0xff
  /* 17C730 801334E0 24010013 */     addiu $at, $zero, 0x13
  /* 17C734 801334E4 A0430028 */        sb $v1, 0x28($v0)
  /* 17C738 801334E8 A0430029 */        sb $v1, 0x29($v0)
  /* 17C73C 801334EC A040002A */        sb $zero, 0x2a($v0)
  /* 17C740 801334F0 12210006 */       beq $s1, $at, .L8013350C
  /* 17C744 801334F4 E444005C */      swc1 $f4, 0x5c($v0)
  /* 17C748 801334F8 24010016 */     addiu $at, $zero, 0x16
  /* 17C74C 801334FC 1221000C */       beq $s1, $at, .L80133530
  /* 17C750 80133500 8FAE0040 */        lw $t6, 0x40($sp)
  /* 17C754 80133504 10000012 */         b .L80133550
  /* 17C758 80133508 8FA80040 */        lw $t0, 0x40($sp)
  .L8013350C:
  /* 17C75C 8013350C 3C048013 */       lui $a0, %hi(sGmStageClear1PGameStage)
  /* 17C760 80133510 0C04CC4A */       jal func_ovl56_80133128
  /* 17C764 80133514 8C8452EC */        lw $a0, %lo(sGmStageClear1PGameStage)($a0)
  /* 17C768 80133518 8FAC0040 */        lw $t4, 0x40($sp)
  /* 17C76C 8013351C 8D8D0004 */        lw $t5, 4($t4)
  /* 17C770 80133520 004D0019 */     multu $v0, $t5
  /* 17C774 80133524 00002812 */      mflo $a1
  /* 17C778 80133528 1000000B */         b .L80133558
  /* 17C77C 8013352C 24090001 */     addiu $t1, $zero, 1
  .L80133530:
  /* 17C780 80133530 3C188013 */       lui $t8, %hi(D_ovl56_801352E4)
  /* 17C784 80133534 8F1852E4 */        lw $t8, %lo(D_ovl56_801352E4)($t8)
  /* 17C788 80133538 8DCF0004 */        lw $t7, 4($t6)
  /* 17C78C 8013353C 27190001 */     addiu $t9, $t8, 1
  /* 17C790 80133540 01F90019 */     multu $t7, $t9
  /* 17C794 80133544 00002812 */      mflo $a1
  /* 17C798 80133548 10000003 */         b .L80133558
  /* 17C79C 8013354C 24090001 */     addiu $t1, $zero, 1
  .L80133550:
  /* 17C7A0 80133550 8D050004 */        lw $a1, 4($t0)
  /* 17C7A4 80133554 24090001 */     addiu $t1, $zero, 1
  .L80133558:
  /* 17C7A8 80133558 240A0006 */     addiu $t2, $zero, 6
  /* 17C7AC 8013355C AFAA0020 */        sw $t2, 0x20($sp)
  /* 17C7B0 80133560 AFA90018 */        sw $t1, 0x18($sp)
  /* 17C7B4 80133564 02002025 */        or $a0, $s0, $zero
  /* 17C7B8 80133568 3C064371 */       lui $a2, 0x4371
  /* 17C7BC 8013356C 8FA70038 */        lw $a3, 0x38($sp)
  /* 17C7C0 80133570 AFA00010 */        sw $zero, 0x10($sp)
  /* 17C7C4 80133574 AFA00014 */        sw $zero, 0x14($sp)
  /* 17C7C8 80133578 AFA0001C */        sw $zero, 0x1c($sp)
  /* 17C7CC 8013357C AFA00024 */        sw $zero, 0x24($sp)
  /* 17C7D0 80133580 0C04C784 */       jal gmStageClearMakeDigitSObjs
  /* 17C7D4 80133584 AFA50064 */        sw $a1, 0x64($sp)
  /* 17C7D8 80133588 8FBF0034 */        lw $ra, 0x34($sp)
  /* 17C7DC 8013358C 8FA20064 */        lw $v0, 0x64($sp)
  /* 17C7E0 80133590 8FB0002C */        lw $s0, 0x2c($sp)
  /* 17C7E4 80133594 8FB10030 */        lw $s1, 0x30($sp)
  /* 17C7E8 80133598 03E00008 */        jr $ra
  /* 17C7EC 8013359C 27BD0070 */     addiu $sp, $sp, 0x70

glabel func_ovl56_801335A0
  /* 17C7F0 801335A0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17C7F4 801335A4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17C7F8 801335A8 00002025 */        or $a0, $zero, $zero
  /* 17C7FC 801335AC 00002825 */        or $a1, $zero, $zero
  /* 17C800 801335B0 24060011 */     addiu $a2, $zero, 0x11
  /* 17C804 801335B4 0C00265A */       jal omMakeGObjCommon
  /* 17C808 801335B8 3C078000 */       lui $a3, 0x8000
  /* 17C80C 801335BC 3C018013 */       lui $at, %hi(D_ovl56_80135374)
  /* 17C810 801335C0 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17C814 801335C4 240EFFFF */     addiu $t6, $zero, -1
  /* 17C818 801335C8 AC225374 */        sw $v0, %lo(D_ovl56_80135374)($at)
  /* 17C81C 801335CC AFA20024 */        sw $v0, 0x24($sp)
  /* 17C820 801335D0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17C824 801335D4 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17C828 801335D8 00402025 */        or $a0, $v0, $zero
  /* 17C82C 801335DC 2406001A */     addiu $a2, $zero, 0x1a
  /* 17C830 801335E0 0C00277D */       jal omAddGObjRenderProc
  /* 17C834 801335E4 3C078000 */       lui $a3, 0x8000
  /* 17C838 801335E8 3C058013 */       lui $a1, %hi(func_ovl56_80133188)
  /* 17C83C 801335EC 24A53188 */     addiu $a1, $a1, %lo(func_ovl56_80133188)
  /* 17C840 801335F0 8FA40024 */        lw $a0, 0x24($sp)
  /* 17C844 801335F4 24060001 */     addiu $a2, $zero, 1
  /* 17C848 801335F8 0C002062 */       jal omAddGObjCommonProc
  /* 17C84C 801335FC 24070001 */     addiu $a3, $zero, 1
  /* 17C850 80133600 3C0F8013 */       lui $t7, %hi(D_ovl56_801352CC)
  /* 17C854 80133604 8DEF52CC */        lw $t7, %lo(D_ovl56_801352CC)($t7)
  /* 17C858 80133608 8FA40024 */        lw $a0, 0x24($sp)
  /* 17C85C 8013360C 3C198013 */       lui $t9, %hi(sGmStageClearFiles)
  /* 17C860 80133610 25F8005A */     addiu $t8, $t7, 0x5a
  /* 17C864 80133614 AC980084 */        sw $t8, 0x84($a0)
  /* 17C868 80133618 8F395588 */        lw $t9, %lo(sGmStageClearFiles)($t9)
  /* 17C86C 8013361C 3C080001 */       lui $t0, %hi(D_NF_0000B6A8)
  /* 17C870 80133620 2508B6A8 */     addiu $t0, $t0, %lo(D_NF_0000B6A8)
  /* 17C874 80133624 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17C878 80133628 03282821 */      addu $a1, $t9, $t0
  /* 17C87C 8013362C 94490024 */       lhu $t1, 0x24($v0)
  /* 17C880 80133630 3C014379 */       lui $at, (0x43790000 >> 16) # 249.0
  /* 17C884 80133634 44812000 */      mtc1 $at, $f4 # 249.0 to cop1
  /* 17C888 80133638 3C014330 */       lui $at, (0x43300000 >> 16) # 176.0
  /* 17C88C 8013363C 44813000 */      mtc1 $at, $f6 # 176.0 to cop1
  /* 17C890 80133640 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 17C894 80133644 A44B0024 */        sh $t3, 0x24($v0)
  /* 17C898 80133648 356C0001 */       ori $t4, $t3, 1
  /* 17C89C 8013364C A44C0024 */        sh $t4, 0x24($v0)
  /* 17C8A0 80133650 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17C8A4 80133654 E446005C */      swc1 $f6, 0x5c($v0)
  /* 17C8A8 80133658 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17C8AC 8013365C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17C8B0 80133660 03E00008 */        jr $ra
  /* 17C8B4 80133664 00000000 */       nop 

glabel func_ovl56_80133668
  /* 17C8B8 80133668 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17C8BC 8013366C AFB00018 */        sw $s0, 0x18($sp)
  /* 17C8C0 80133670 28810060 */      slti $at, $a0, 0x60
  /* 17C8C4 80133674 00808025 */        or $s0, $a0, $zero
  /* 17C8C8 80133678 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17C8CC 8013367C AFB20020 */        sw $s2, 0x20($sp)
  /* 17C8D0 80133680 10200016 */      beqz $at, .L801336DC
  /* 17C8D4 80133684 AFB1001C */        sw $s1, 0x1c($sp)
  /* 17C8D8 80133688 3C128013 */       lui $s2, %hi(sGmStageClearBonusMasks)
  /* 17C8DC 8013368C 26525320 */     addiu $s2, $s2, %lo(sGmStageClearBonusMasks)
  /* 17C8E0 80133690 27B10028 */     addiu $s1, $sp, 0x28
  /* 17C8E4 80133694 02202025 */        or $a0, $s1, $zero
  .L80133698:
  /* 17C8E8 80133698 0C04CBFE */       jal gmStageClearSetupBonusStats
  /* 17C8EC 8013369C 02002825 */        or $a1, $s0, $zero
  /* 17C8F0 801336A0 8FAE0028 */        lw $t6, 0x28($sp)
  /* 17C8F4 801336A4 8FA8002C */        lw $t0, 0x2c($sp)
  /* 17C8F8 801336A8 24090001 */     addiu $t1, $zero, 1
  /* 17C8FC 801336AC 000E7880 */       sll $t7, $t6, 2
  /* 17C900 801336B0 024FC021 */      addu $t8, $s2, $t7
  /* 17C904 801336B4 8F190000 */        lw $t9, ($t8)
  /* 17C908 801336B8 01095004 */      sllv $t2, $t1, $t0
  /* 17C90C 801336BC 26100001 */     addiu $s0, $s0, 1
  /* 17C910 801336C0 032A5824 */       and $t3, $t9, $t2
  /* 17C914 801336C4 11600003 */      beqz $t3, .L801336D4
  /* 17C918 801336C8 2A010060 */      slti $at, $s0, 0x60
  /* 17C91C 801336CC 10000004 */         b .L801336E0
  /* 17C920 801336D0 24020001 */     addiu $v0, $zero, 1
  .L801336D4:
  /* 17C924 801336D4 5420FFF0 */      bnel $at, $zero, .L80133698
  /* 17C928 801336D8 02202025 */        or $a0, $s1, $zero
  .L801336DC:
  /* 17C92C 801336DC 00001025 */        or $v0, $zero, $zero
  .L801336E0:
  /* 17C930 801336E0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17C934 801336E4 8FB00018 */        lw $s0, 0x18($sp)
  /* 17C938 801336E8 8FB1001C */        lw $s1, 0x1c($sp)
  /* 17C93C 801336EC 8FB20020 */        lw $s2, 0x20($sp)
  /* 17C940 801336F0 03E00008 */        jr $ra
  /* 17C944 801336F4 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl56_801336F8
  /* 17C948 801336F8 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 17C94C 801336FC 3C018013 */       lui $at, %hi(D_ovl56_80135354)
  /* 17C950 80133700 AFB20024 */        sw $s2, 0x24($sp)
  /* 17C954 80133704 3C028013 */       lui $v0, %hi(D_ovl56_80135358)
  /* 17C958 80133708 3C038013 */       lui $v1, %hi(sGmStageClearBonusObjectiveGObj)
  /* 17C95C 8013370C AFBF003C */        sw $ra, 0x3c($sp)
  /* 17C960 80133710 AFB70038 */        sw $s7, 0x38($sp)
  /* 17C964 80133714 AFB60034 */        sw $s6, 0x34($sp)
  /* 17C968 80133718 AFB50030 */        sw $s5, 0x30($sp)
  /* 17C96C 8013371C AFB4002C */        sw $s4, 0x2c($sp)
  /* 17C970 80133720 AFB30028 */        sw $s3, 0x28($sp)
  /* 17C974 80133724 AFB10020 */        sw $s1, 0x20($sp)
  /* 17C978 80133728 AFB0001C */        sw $s0, 0x1c($sp)
  /* 17C97C 8013372C F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 17C980 80133730 00009025 */        or $s2, $zero, $zero
  /* 17C984 80133734 24635378 */     addiu $v1, $v1, %lo(sGmStageClearBonusObjectiveGObj)
  /* 17C988 80133738 24425358 */     addiu $v0, $v0, %lo(D_ovl56_80135358)
  /* 17C98C 8013373C AC205350 */        sw $zero, %lo(D_ovl56_80135350)($at)
  /* 17C990 80133740 AC205354 */        sw $zero, %lo(D_ovl56_80135354)($at)
  .L80133744:
  /* 17C994 80133744 24420010 */     addiu $v0, $v0, 0x10
  /* 17C998 80133748 AC40FFF4 */        sw $zero, -0xc($v0) # D_ovl56_80135358 + -12
  /* 17C99C 8013374C AC40FFF8 */        sw $zero, -8($v0) # D_ovl56_80135358 + -8
  /* 17C9A0 80133750 AC40FFFC */        sw $zero, -4($v0) # D_ovl56_80135358 + -4
  /* 17C9A4 80133754 1443FFFB */       bne $v0, $v1, .L80133744
  /* 17C9A8 80133758 AC40FFF0 */        sw $zero, -0x10($v0) # D_ovl56_80135358 + -16
  /* 17C9AC 8013375C 3C018013 */       lui $at, %hi(D_ovl56_80135334)
  /* 17C9B0 80133760 AC205334 */        sw $zero, %lo(D_ovl56_80135334)($at)
  /* 17C9B4 80133764 3C108013 */       lui $s0, %hi(D_ovl56_80135330)
  /* 17C9B8 80133768 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 17C9BC 8013376C 26105330 */     addiu $s0, $s0, %lo(D_ovl56_80135330)
  /* 17C9C0 80133770 3C168013 */       lui $s6, %hi(sGmStageClearBonusMasks)
  /* 17C9C4 80133774 3C118013 */       lui $s1, %hi(D_ovl56_8013532C)
  /* 17C9C8 80133778 4481A000 */      mtc1 $at, $f20 # 80.0 to cop1
  /* 17C9CC 8013377C AE000000 */        sw $zero, ($s0) # D_ovl56_80135330 + 0
  /* 17C9D0 80133780 2631532C */     addiu $s1, $s1, %lo(D_ovl56_8013532C)
  /* 17C9D4 80133784 26D65320 */     addiu $s6, $s6, %lo(sGmStageClearBonusMasks)
  /* 17C9D8 80133788 2417000B */     addiu $s7, $zero, 0xb
  /* 17C9DC 8013378C 27B50048 */     addiu $s5, $sp, 0x48
  /* 17C9E0 80133790 24140009 */     addiu $s4, $zero, 9
  /* 17C9E4 80133794 24130060 */     addiu $s3, $zero, 0x60
  .L80133798:
  /* 17C9E8 80133798 8E250000 */        lw $a1, ($s1) # D_ovl56_8013532C + 0
  /* 17C9EC 8013379C 16650005 */       bne $s3, $a1, .L801337B4
  /* 17C9F0 801337A0 240E0001 */     addiu $t6, $zero, 1
  /* 17C9F4 801337A4 3C018013 */       lui $at, %hi(D_ovl56_80135338)
  /* 17C9F8 801337A8 AC2E5338 */        sw $t6, %lo(D_ovl56_80135338)($at)
  /* 17C9FC 801337AC 10000030 */         b .L80133870
  /* 17CA00 801337B0 02401025 */        or $v0, $s2, $zero
  .L801337B4:
  /* 17CA04 801337B4 8E0F0000 */        lw $t7, ($s0) # D_ovl56_80135330 + 0
  /* 17CA08 801337B8 168F000D */       bne $s4, $t7, .L801337F0
  /* 17CA0C 801337BC 00000000 */       nop 
  /* 17CA10 801337C0 0C04CD9A */       jal func_ovl56_80133668
  /* 17CA14 801337C4 00A02025 */        or $a0, $a1, $zero
  /* 17CA18 801337C8 14400005 */      bnez $v0, .L801337E0
  /* 17CA1C 801337CC 24180001 */     addiu $t8, $zero, 1
  /* 17CA20 801337D0 3C018013 */       lui $at, %hi(D_ovl56_80135338)
  /* 17CA24 801337D4 AC385338 */        sw $t8, %lo(D_ovl56_80135338)($at)
  /* 17CA28 801337D8 10000025 */         b .L80133870
  /* 17CA2C 801337DC 02401025 */        or $v0, $s2, $zero
  .L801337E0:
  /* 17CA30 801337E0 0C04CD68 */       jal func_ovl56_801335A0
  /* 17CA34 801337E4 00000000 */       nop 
  /* 17CA38 801337E8 10000021 */         b .L80133870
  /* 17CA3C 801337EC 02401025 */        or $v0, $s2, $zero
  .L801337F0:
  /* 17CA40 801337F0 0C04CBFE */       jal gmStageClearSetupBonusStats
  /* 17CA44 801337F4 02A02025 */        or $a0, $s5, $zero
  /* 17CA48 801337F8 8FB90048 */        lw $t9, 0x48($sp)
  /* 17CA4C 801337FC 8FAB004C */        lw $t3, 0x4c($sp)
  /* 17CA50 80133800 240C0001 */     addiu $t4, $zero, 1
  /* 17CA54 80133804 00194080 */       sll $t0, $t9, 2
  /* 17CA58 80133808 02C84821 */      addu $t1, $s6, $t0
  /* 17CA5C 8013380C 8D2A0000 */        lw $t2, ($t1)
  /* 17CA60 80133810 016C6804 */      sllv $t5, $t4, $t3
  /* 17CA64 80133814 014D7024 */       and $t6, $t2, $t5
  /* 17CA68 80133818 51C00012 */      beql $t6, $zero, .L80133864
  /* 17CA6C 8013381C 8E290000 */        lw $t1, ($s1) # D_ovl56_8013532C + 0
  /* 17CA70 80133820 8E050000 */        lw $a1, ($s0) # D_ovl56_80135330 + 0
  /* 17CA74 80133824 4406A000 */      mfc1 $a2, $f20
  /* 17CA78 80133828 8E240000 */        lw $a0, ($s1) # D_ovl56_8013532C + 0
  /* 17CA7C 8013382C 00B70019 */     multu $a1, $s7
  /* 17CA80 80133830 00007812 */      mflo $t7
  /* 17CA84 80133834 25F80056 */     addiu $t8, $t7, 0x56
  /* 17CA88 80133838 44982000 */      mtc1 $t8, $f4
  /* 17CA8C 8013383C 00000000 */       nop 
  /* 17CA90 80133840 46802120 */   cvt.s.w $f4, $f4
  /* 17CA94 80133844 44072000 */      mfc1 $a3, $f4
  /* 17CA98 80133848 0C04CC7B */       jal func_ovl56_801331EC
  /* 17CA9C 8013384C 00000000 */       nop 
  /* 17CAA0 80133850 8E190000 */        lw $t9, ($s0) # D_ovl56_80135330 + 0
  /* 17CAA4 80133854 02429021 */      addu $s2, $s2, $v0
  /* 17CAA8 80133858 27280001 */     addiu $t0, $t9, 1
  /* 17CAAC 8013385C AE080000 */        sw $t0, ($s0) # D_ovl56_80135330 + 0
  /* 17CAB0 80133860 8E290000 */        lw $t1, ($s1) # D_ovl56_8013532C + 0
  .L80133864:
  /* 17CAB4 80133864 252C0001 */     addiu $t4, $t1, 1
  /* 17CAB8 80133868 1000FFCB */         b .L80133798
  /* 17CABC 8013386C AE2C0000 */        sw $t4, ($s1) # D_ovl56_8013532C + 0
  .L80133870:
  /* 17CAC0 80133870 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17CAC4 80133874 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 17CAC8 80133878 8FB0001C */        lw $s0, 0x1c($sp)
  /* 17CACC 8013387C 8FB10020 */        lw $s1, 0x20($sp)
  /* 17CAD0 80133880 8FB20024 */        lw $s2, 0x24($sp)
  /* 17CAD4 80133884 8FB30028 */        lw $s3, 0x28($sp)
  /* 17CAD8 80133888 8FB4002C */        lw $s4, 0x2c($sp)
  /* 17CADC 8013388C 8FB50030 */        lw $s5, 0x30($sp)
  /* 17CAE0 80133890 8FB60034 */        lw $s6, 0x34($sp)
  /* 17CAE4 80133894 8FB70038 */        lw $s7, 0x38($sp)
  /* 17CAE8 80133898 03E00008 */        jr $ra
  /* 17CAEC 8013389C 27BD0060 */     addiu $sp, $sp, 0x60

glabel func_ovl56_801338A0
  /* 17CAF0 801338A0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17CAF4 801338A4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17CAF8 801338A8 00002025 */        or $a0, $zero, $zero
  /* 17CAFC 801338AC 00002825 */        or $a1, $zero, $zero
  /* 17CB00 801338B0 24060011 */     addiu $a2, $zero, 0x11
  /* 17CB04 801338B4 0C00265A */       jal omMakeGObjCommon
  /* 17CB08 801338B8 3C078000 */       lui $a3, 0x8000
  /* 17CB0C 801338BC 3C058013 */       lui $a1, %hi(gmStageClearTextProcRender)
  /* 17CB10 801338C0 240EFFFF */     addiu $t6, $zero, -1
  /* 17CB14 801338C4 AFA20024 */        sw $v0, 0x24($sp)
  /* 17CB18 801338C8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17CB1C 801338CC 24A520E0 */     addiu $a1, $a1, %lo(gmStageClearTextProcRender)
  /* 17CB20 801338D0 00402025 */        or $a0, $v0, $zero
  /* 17CB24 801338D4 2406001A */     addiu $a2, $zero, 0x1a
  /* 17CB28 801338D8 0C00277D */       jal omAddGObjRenderProc
  /* 17CB2C 801338DC 3C078000 */       lui $a3, 0x8000
  /* 17CB30 801338E0 3C0F8013 */       lui $t7, %hi(sGmStageClearFiles)
  /* 17CB34 801338E4 8DEF5588 */        lw $t7, %lo(sGmStageClearFiles)($t7)
  /* 17CB38 801338E8 3C180001 */       lui $t8, %hi(D_NF_0000A4B8)
  /* 17CB3C 801338EC 2718A4B8 */     addiu $t8, $t8, %lo(D_NF_0000A4B8)
  /* 17CB40 801338F0 8FA40024 */        lw $a0, 0x24($sp)
  /* 17CB44 801338F4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17CB48 801338F8 01F82821 */      addu $a1, $t7, $t8
  /* 17CB4C 801338FC 94590024 */       lhu $t9, 0x24($v0)
  /* 17CB50 80133900 3C014250 */       lui $at, (0x42500000 >> 16) # 52.0
  /* 17CB54 80133904 44812000 */      mtc1 $at, $f4 # 52.0 to cop1
  /* 17CB58 80133908 3C014278 */       lui $at, (0x42780000 >> 16) # 62.0
  /* 17CB5C 8013390C 44813000 */      mtc1 $at, $f6 # 62.0 to cop1
  /* 17CB60 80133910 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 17CB64 80133914 A4490024 */        sh $t1, 0x24($v0)
  /* 17CB68 80133918 352A0001 */       ori $t2, $t1, 1
  /* 17CB6C 8013391C 240B00FA */     addiu $t3, $zero, 0xfa
  /* 17CB70 80133920 240C00E2 */     addiu $t4, $zero, 0xe2
  /* 17CB74 80133924 240D00B5 */     addiu $t5, $zero, 0xb5
  /* 17CB78 80133928 A44A0024 */        sh $t2, 0x24($v0)
  /* 17CB7C 8013392C A0400060 */        sb $zero, 0x60($v0)
  /* 17CB80 80133930 A0400061 */        sb $zero, 0x61($v0)
  /* 17CB84 80133934 A0400062 */        sb $zero, 0x62($v0)
  /* 17CB88 80133938 A04B0028 */        sb $t3, 0x28($v0)
  /* 17CB8C 8013393C A04C0029 */        sb $t4, 0x29($v0)
  /* 17CB90 80133940 A04D002A */        sb $t5, 0x2a($v0)
  /* 17CB94 80133944 3C0E8013 */       lui $t6, %hi(sGmStageClearFiles)
  /* 17CB98 80133948 E4440058 */      swc1 $f4, 0x58($v0)
  /* 17CB9C 8013394C E446005C */      swc1 $f6, 0x5c($v0)
  /* 17CBA0 80133950 8DCE5588 */        lw $t6, %lo(sGmStageClearFiles)($t6)
  /* 17CBA4 80133954 3C0F0000 */       lui $t7, %hi(D_NF_00002060)
  /* 17CBA8 80133958 25EF2060 */     addiu $t7, $t7, %lo(D_NF_00002060)
  /* 17CBAC 8013395C 8FA40024 */        lw $a0, 0x24($sp)
  /* 17CBB0 80133960 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17CBB4 80133964 01CF2821 */      addu $a1, $t6, $t7
  /* 17CBB8 80133968 94580024 */       lhu $t8, 0x24($v0)
  /* 17CBBC 8013396C 3C0142B6 */       lui $at, (0x42B60000 >> 16) # 91.0
  /* 17CBC0 80133970 44814000 */      mtc1 $at, $f8 # 91.0 to cop1
  /* 17CBC4 80133974 240300FF */     addiu $v1, $zero, 0xff
  /* 17CBC8 80133978 3C014290 */       lui $at, (0x42900000 >> 16) # 72.0
  /* 17CBCC 8013397C 44815000 */      mtc1 $at, $f10 # 72.0 to cop1
  /* 17CBD0 80133980 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 17CBD4 80133984 A4480024 */        sh $t0, 0x24($v0)
  /* 17CBD8 80133988 35090001 */       ori $t1, $t0, 1
  /* 17CBDC 8013398C A4490024 */        sh $t1, 0x24($v0)
  /* 17CBE0 80133990 A0430060 */        sb $v1, 0x60($v0)
  /* 17CBE4 80133994 A0430061 */        sb $v1, 0x61($v0)
  /* 17CBE8 80133998 A0400062 */        sb $zero, 0x62($v0)
  /* 17CBEC 8013399C A0430028 */        sb $v1, 0x28($v0)
  /* 17CBF0 801339A0 A0430029 */        sb $v1, 0x29($v0)
  /* 17CBF4 801339A4 A043002A */        sb $v1, 0x2a($v0)
  /* 17CBF8 801339A8 E4480058 */      swc1 $f8, 0x58($v0)
  /* 17CBFC 801339AC E44A005C */      swc1 $f10, 0x5c($v0)
  /* 17CC00 801339B0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17CC04 801339B4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17CC08 801339B8 03E00008 */        jr $ra
  /* 17CC0C 801339BC 00000000 */       nop 

glabel func_ovl56_801339C0
  /* 17CC10 801339C0 3C038004 */       lui $v1, %hi(gDisplayListHead)
  /* 17CC14 801339C4 246365B0 */     addiu $v1, $v1, %lo(gDisplayListHead)
  /* 17CC18 801339C8 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CC1C 801339CC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17CC20 801339D0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17CC24 801339D4 244E0008 */     addiu $t6, $v0, 8
  /* 17CC28 801339D8 AC6E0000 */        sw $t6, ($v1) # gDisplayListHead + 0
  /* 17CC2C 801339DC 3C0FE700 */       lui $t7, 0xe700
  /* 17CC30 801339E0 AC4F0000 */        sw $t7, ($v0)
  /* 17CC34 801339E4 AC400004 */        sw $zero, 4($v0)
  /* 17CC38 801339E8 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CC3C 801339EC 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 17CC40 801339F0 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 17CC44 801339F4 24580008 */     addiu $t8, $v0, 8
  /* 17CC48 801339F8 AC780000 */        sw $t8, ($v1) # gDisplayListHead + 0
  /* 17CC4C 801339FC AC400004 */        sw $zero, 4($v0)
  /* 17CC50 80133A00 AC590000 */        sw $t9, ($v0)
  /* 17CC54 80133A04 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CC58 80133A08 3C0C8080 */       lui $t4, (0x808080FF >> 16) # 2155905279
  /* 17CC5C 80133A0C 358C80FF */       ori $t4, $t4, (0x808080FF & 0xFFFF) # 2155905279
  /* 17CC60 80133A10 244A0008 */     addiu $t2, $v0, 8
  /* 17CC64 80133A14 AC6A0000 */        sw $t2, ($v1) # gDisplayListHead + 0
  /* 17CC68 80133A18 3C0BFA00 */       lui $t3, 0xfa00
  /* 17CC6C 80133A1C AC4B0000 */        sw $t3, ($v0)
  /* 17CC70 80133A20 AC4C0004 */        sw $t4, 4($v0)
  /* 17CC74 80133A24 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CC78 80133A28 3C0EFC11 */       lui $t6, (0xFC11FE23 >> 16) # 4229037603
  /* 17CC7C 80133A2C 35CEFE23 */       ori $t6, $t6, (0xFC11FE23 & 0xFFFF) # 4229037603
  /* 17CC80 80133A30 244D0008 */     addiu $t5, $v0, 8
  /* 17CC84 80133A34 AC6D0000 */        sw $t5, ($v1) # gDisplayListHead + 0
  /* 17CC88 80133A38 240FF7FB */     addiu $t7, $zero, -0x805
  /* 17CC8C 80133A3C AC4F0004 */        sw $t7, 4($v0)
  /* 17CC90 80133A40 AC4E0000 */        sw $t6, ($v0)
  /* 17CC94 80133A44 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CC98 80133A48 3C0A0F0A */       lui $t2, (0xF0A4000 >> 16) # 252329984
  /* 17CC9C 80133A4C 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 17CCA0 80133A50 24580008 */     addiu $t8, $v0, 8
  /* 17CCA4 80133A54 AC780000 */        sw $t8, ($v1) # gDisplayListHead + 0
  /* 17CCA8 80133A58 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 17CCAC 80133A5C 354A4000 */       ori $t2, $t2, (0xF0A4000 & 0xFFFF) # 252329984
  /* 17CCB0 80133A60 AC4A0004 */        sw $t2, 4($v0)
  /* 17CCB4 80133A64 0C0333DD */       jal func_ovl0_800CCF74
  /* 17CCB8 80133A68 AC590000 */        sw $t9, ($v0)
  /* 17CCBC 80133A6C 3C038004 */       lui $v1, %hi(gDisplayListHead)
  /* 17CCC0 80133A70 246365B0 */     addiu $v1, $v1, %lo(gDisplayListHead)
  /* 17CCC4 80133A74 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CCC8 80133A78 3C0CE700 */       lui $t4, 0xe700
  /* 17CCCC 80133A7C 3C0EE200 */       lui $t6, (0xE200001C >> 16) # 3791650844
  /* 17CCD0 80133A80 244B0008 */     addiu $t3, $v0, 8
  /* 17CCD4 80133A84 AC6B0000 */        sw $t3, ($v1) # gDisplayListHead + 0
  /* 17CCD8 80133A88 AC400004 */        sw $zero, 4($v0)
  /* 17CCDC 80133A8C AC4C0000 */        sw $t4, ($v0)
  /* 17CCE0 80133A90 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 17CCE4 80133A94 3C0F0055 */       lui $t7, (0x552078 >> 16) # 5578872
  /* 17CCE8 80133A98 35EF2078 */       ori $t7, $t7, (0x552078 & 0xFFFF) # 5578872
  /* 17CCEC 80133A9C 244D0008 */     addiu $t5, $v0, 8
  /* 17CCF0 80133AA0 AC6D0000 */        sw $t5, ($v1) # gDisplayListHead + 0
  /* 17CCF4 80133AA4 35CE001C */       ori $t6, $t6, (0xE200001C & 0xFFFF) # 3791650844
  /* 17CCF8 80133AA8 AC4E0000 */        sw $t6, ($v0)
  /* 17CCFC 80133AAC AC4F0004 */        sw $t7, 4($v0)
  /* 17CD00 80133AB0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17CD04 80133AB4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17CD08 80133AB8 03E00008 */        jr $ra
  /* 17CD0C 80133ABC 00000000 */       nop 

glabel func_ovl56_80133AC0
  /* 17CD10 80133AC0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17CD14 80133AC4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17CD18 80133AC8 00002025 */        or $a0, $zero, $zero
  /* 17CD1C 80133ACC 00002825 */        or $a1, $zero, $zero
  /* 17CD20 80133AD0 24060012 */     addiu $a2, $zero, 0x12
  /* 17CD24 80133AD4 0C00265A */       jal omMakeGObjCommon
  /* 17CD28 80133AD8 3C078000 */       lui $a3, 0x8000
  /* 17CD2C 80133ADC 3C058013 */       lui $a1, %hi(func_ovl56_801339C0)
  /* 17CD30 80133AE0 240EFFFF */     addiu $t6, $zero, -1
  /* 17CD34 80133AE4 AFA20024 */        sw $v0, 0x24($sp)
  /* 17CD38 80133AE8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17CD3C 80133AEC 24A539C0 */     addiu $a1, $a1, %lo(func_ovl56_801339C0)
  /* 17CD40 80133AF0 00402025 */        or $a0, $v0, $zero
  /* 17CD44 80133AF4 2406001B */     addiu $a2, $zero, 0x1b
  /* 17CD48 80133AF8 0C00277D */       jal omAddGObjRenderProc
  /* 17CD4C 80133AFC 3C078000 */       lui $a3, 0x8000
  /* 17CD50 80133B00 3C0F8013 */       lui $t7, %hi(D_ovl56_801355A0)
  /* 17CD54 80133B04 8DEF55A0 */        lw $t7, %lo(D_ovl56_801355A0)($t7)
  /* 17CD58 80133B08 3C180002 */       lui $t8, %hi(D_NF_00020718)
  /* 17CD5C 80133B0C 27180718 */     addiu $t8, $t8, %lo(D_NF_00020718)
  /* 17CD60 80133B10 8FA40024 */        lw $a0, 0x24($sp)
  /* 17CD64 80133B14 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 17CD68 80133B18 01F82821 */      addu $a1, $t7, $t8
  /* 17CD6C 80133B1C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17CD70 80133B20 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17CD74 80133B24 94590024 */       lhu $t9, 0x24($v0)
  /* 17CD78 80133B28 E4400058 */      swc1 $f0, 0x58($v0)
  /* 17CD7C 80133B2C 3328FFDF */      andi $t0, $t9, 0xffdf
  /* 17CD80 80133B30 A4480024 */        sh $t0, 0x24($v0)
  /* 17CD84 80133B34 E440005C */      swc1 $f0, 0x5c($v0)
  /* 17CD88 80133B38 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17CD8C 80133B3C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17CD90 80133B40 03E00008 */        jr $ra
  /* 17CD94 80133B44 00000000 */       nop 

glabel func_ovl56_80133B48
  /* 17CD98 80133B48 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17CD9C 80133B4C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 17CDA0 80133B50 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17CDA4 80133B54 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 17CDA8 80133B58 240F0050 */     addiu $t7, $zero, 0x50
  /* 17CDAC 80133B5C 24180000 */     addiu $t8, $zero, 0
  /* 17CDB0 80133B60 3C190400 */       lui $t9, 0x400
  /* 17CDB4 80133B64 2408FFFF */     addiu $t0, $zero, -1
  /* 17CDB8 80133B68 24090001 */     addiu $t1, $zero, 1
  /* 17CDBC 80133B6C 240A0001 */     addiu $t2, $zero, 1
  /* 17CDC0 80133B70 AFAA0030 */        sw $t2, 0x30($sp)
  /* 17CDC4 80133B74 AFA90028 */        sw $t1, 0x28($sp)
  /* 17CDC8 80133B78 AFA80020 */        sw $t0, 0x20($sp)
  /* 17CDCC 80133B7C AFB9001C */        sw $t9, 0x1c($sp)
  /* 17CDD0 80133B80 AFB80018 */        sw $t8, 0x18($sp)
  /* 17CDD4 80133B84 AFAF0014 */        sw $t7, 0x14($sp)
  /* 17CDD8 80133B88 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17CDDC 80133B8C AFA00024 */        sw $zero, 0x24($sp)
  /* 17CDE0 80133B90 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17CDE4 80133B94 AFA00034 */        sw $zero, 0x34($sp)
  /* 17CDE8 80133B98 24040401 */     addiu $a0, $zero, 0x401
  /* 17CDEC 80133B9C 00002825 */        or $a1, $zero, $zero
  /* 17CDF0 80133BA0 24060010 */     addiu $a2, $zero, 0x10
  /* 17CDF4 80133BA4 0C002E4F */       jal func_8000B93C
  /* 17CDF8 80133BA8 3C078000 */       lui $a3, 0x8000
  /* 17CDFC 80133BAC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17CE00 80133BB0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17CE04 80133BB4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 17CE08 80133BB8 8C430074 */        lw $v1, 0x74($v0)
  /* 17CE0C 80133BBC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 17CE10 80133BC0 44050000 */      mfc1 $a1, $f0
  /* 17CE14 80133BC4 44060000 */      mfc1 $a2, $f0
  /* 17CE18 80133BC8 3C07439B */       lui $a3, 0x439b
  /* 17CE1C 80133BCC 24640008 */     addiu $a0, $v1, 8
  /* 17CE20 80133BD0 0C001C20 */       jal func_80007080
  /* 17CE24 80133BD4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 17CE28 80133BD8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17CE2C 80133BDC 27BD0040 */     addiu $sp, $sp, 0x40
  /* 17CE30 80133BE0 03E00008 */        jr $ra
  /* 17CE34 80133BE4 00000000 */       nop 

glabel func_ovl56_80133BE8
  /* 17CE38 80133BE8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 17CE3C 80133BEC 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 17CE40 80133BF0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17CE44 80133BF4 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 17CE48 80133BF8 240F005A */     addiu $t7, $zero, 0x5a
  /* 17CE4C 80133BFC 24180000 */     addiu $t8, $zero, 0
  /* 17CE50 80133C00 3C190800 */       lui $t9, 0x800
  /* 17CE54 80133C04 2408FFFF */     addiu $t0, $zero, -1
  /* 17CE58 80133C08 24090001 */     addiu $t1, $zero, 1
  /* 17CE5C 80133C0C 240A0001 */     addiu $t2, $zero, 1
  /* 17CE60 80133C10 AFAA0030 */        sw $t2, 0x30($sp)
  /* 17CE64 80133C14 AFA90028 */        sw $t1, 0x28($sp)
  /* 17CE68 80133C18 AFA80020 */        sw $t0, 0x20($sp)
  /* 17CE6C 80133C1C AFB9001C */        sw $t9, 0x1c($sp)
  /* 17CE70 80133C20 AFB80018 */        sw $t8, 0x18($sp)
  /* 17CE74 80133C24 AFAF0014 */        sw $t7, 0x14($sp)
  /* 17CE78 80133C28 AFAE0010 */        sw $t6, 0x10($sp)
  /* 17CE7C 80133C2C AFA00024 */        sw $zero, 0x24($sp)
  /* 17CE80 80133C30 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17CE84 80133C34 AFA00034 */        sw $zero, 0x34($sp)
  /* 17CE88 80133C38 24040401 */     addiu $a0, $zero, 0x401
  /* 17CE8C 80133C3C 00002825 */        or $a1, $zero, $zero
  /* 17CE90 80133C40 24060010 */     addiu $a2, $zero, 0x10
  /* 17CE94 80133C44 0C002E4F */       jal func_8000B93C
  /* 17CE98 80133C48 3C078000 */       lui $a3, 0x8000
  /* 17CE9C 80133C4C 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17CEA0 80133C50 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17CEA4 80133C54 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 17CEA8 80133C58 8C430074 */        lw $v1, 0x74($v0)
  /* 17CEAC 80133C5C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 17CEB0 80133C60 44050000 */      mfc1 $a1, $f0
  /* 17CEB4 80133C64 44060000 */      mfc1 $a2, $f0
  /* 17CEB8 80133C68 3C07439B */       lui $a3, 0x439b
  /* 17CEBC 80133C6C 24640008 */     addiu $a0, $v1, 8
  /* 17CEC0 80133C70 0C001C20 */       jal func_80007080
  /* 17CEC4 80133C74 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 17CEC8 80133C78 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17CECC 80133C7C 27BD0040 */     addiu $sp, $sp, 0x40
  /* 17CED0 80133C80 03E00008 */        jr $ra
  /* 17CED4 80133C84 00000000 */       nop 

glabel func_ovl56_80133C88
  /* 17CED8 80133C88 3C018013 */       lui $at, %hi(D_ovl56_801352CC)
  /* 17CEDC 80133C8C AC2052CC */        sw $zero, %lo(D_ovl56_801352CC)($at)
  /* 17CEE0 80133C90 3C03800A */       lui $v1, %hi(gSceneData)
  /* 17CEE4 80133C94 3C018013 */       lui $at, %hi(D_ovl56_801352D0)
  /* 17CEE8 80133C98 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 17CEEC 80133C9C AC2052D0 */        sw $zero, %lo(D_ovl56_801352D0)($at)
  /* 17CEF0 80133CA0 906E0017 */       lbu $t6, 0x17($v1) # gSceneData + 23
  /* 17CEF4 80133CA4 3C048013 */       lui $a0, %hi(sGmStageClear1PGameStage)
  /* 17CEF8 80133CA8 248452EC */     addiu $a0, $a0, %lo(sGmStageClear1PGameStage)
  /* 17CEFC 80133CAC 3C0F800A */       lui $t7, %hi((gSaveData + 0x45A))
  /* 17CF00 80133CB0 AC8E0000 */        sw $t6, ($a0) # sGmStageClear1PGameStage + 0
  /* 17CF04 80133CB4 91EF493A */       lbu $t7, %lo((gSaveData + 0x45A))($t7)
  /* 17CF08 80133CB8 3C018013 */       lui $at, %hi(D_ovl56_801352E4)
  /* 17CF0C 80133CBC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17CF10 80133CC0 AC2F52E4 */        sw $t7, %lo(D_ovl56_801352E4)($at)
  /* 17CF14 80133CC4 8C820000 */        lw $v0, ($a0) # sGmStageClear1PGameStage + 0
  /* 17CF18 80133CC8 24010003 */     addiu $at, $zero, 3
  /* 17CF1C 80133CCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 17CF20 80133CD0 1041000B */       beq $v0, $at, .L80133D00
  /* 17CF24 80133CD4 24180002 */     addiu $t8, $zero, 2
  /* 17CF28 80133CD8 24010007 */     addiu $at, $zero, 7
  /* 17CF2C 80133CDC 10410008 */       beq $v0, $at, .L80133D00
  /* 17CF30 80133CE0 2401000B */     addiu $at, $zero, 0xb
  /* 17CF34 80133CE4 10410006 */       beq $v0, $at, .L80133D00
  /* 17CF38 80133CE8 2401000D */     addiu $at, $zero, 0xd
  /* 17CF3C 80133CEC 1041000A */       beq $v0, $at, .L80133D18
  /* 17CF40 80133CF0 24080001 */     addiu $t0, $zero, 1
  /* 17CF44 80133CF4 3C018013 */       lui $at, %hi(sGmStageClearKind)
  /* 17CF48 80133CF8 10000009 */         b .L80133D20
  /* 17CF4C 80133CFC AC2052D4 */        sw $zero, %lo(sGmStageClearKind)($at)
  .L80133D00:
  /* 17CF50 80133D00 3C018013 */       lui $at, %hi(sGmStageClearKind)
  /* 17CF54 80133D04 AC3852D4 */        sw $t8, %lo(sGmStageClearKind)($at)
  /* 17CF58 80133D08 90790038 */       lbu $t9, 0x38($v1) # gSceneData + 56
  /* 17CF5C 80133D0C 3C018013 */       lui $at, %hi(sGmStageClearBonusObjectivesCleared)
  /* 17CF60 80133D10 10000003 */         b .L80133D20
  /* 17CF64 80133D14 AC3953A4 */        sw $t9, %lo(sGmStageClearBonusObjectivesCleared)($at)
  .L80133D18:
  /* 17CF68 80133D18 3C018013 */       lui $at, %hi(sGmStageClearKind)
  /* 17CF6C 80133D1C AC2852D4 */        sw $t0, %lo(sGmStageClearKind)($at)
  .L80133D20:
  /* 17CF70 80133D20 8C69001C */        lw $t1, 0x1c($v1) # gSceneData + 28
  /* 17CF74 80133D24 3C018013 */       lui $at, %hi(sGmStageClearSecondsRemaining)
  /* 17CF78 80133D28 3C0C800A */       lui $t4, %hi((D_800A4B18 + 0x54))
  /* 17CF7C 80133D2C AC2952DC */        sw $t1, %lo(sGmStageClearSecondsRemaining)($at)
  /* 17CF80 80133D30 906A0013 */       lbu $t2, 0x13($v1) # gSceneData + 19
  /* 17CF84 80133D34 3C018013 */       lui $at, %hi(sGmStageClearDamageDealt)
  /* 17CF88 80133D38 3C028013 */       lui $v0, %hi(sGmStageClearBonusMasks)
  /* 17CF8C 80133D3C 000A58C0 */       sll $t3, $t2, 3
  /* 17CF90 80133D40 016A5823 */      subu $t3, $t3, $t2
  /* 17CF94 80133D44 000B5880 */       sll $t3, $t3, 2
  /* 17CF98 80133D48 016A5821 */      addu $t3, $t3, $t2
  /* 17CF9C 80133D4C 000B5880 */       sll $t3, $t3, 2
  /* 17CFA0 80133D50 018B6021 */      addu $t4, $t4, $t3
  /* 17CFA4 80133D54 8D8C4B6C */        lw $t4, %lo((D_800A4B18 + 0x54))($t4)
  /* 17CFA8 80133D58 24425320 */     addiu $v0, $v0, %lo(sGmStageClearBonusMasks)
  /* 17CFAC 80133D5C AC2C52E0 */        sw $t4, %lo(sGmStageClearDamageDealt)($at)
  /* 17CFB0 80133D60 8C6D0020 */        lw $t5, 0x20($v1) # gSceneData + 32
  /* 17CFB4 80133D64 3C018013 */       lui $at, %hi(sGmStageClearScoreTotal)
  /* 17CFB8 80133D68 AC2D52E8 */        sw $t5, %lo(sGmStageClearScoreTotal)($at)
  /* 17CFBC 80133D6C 8C6E002C */        lw $t6, 0x2c($v1) # gSceneData + 44
  /* 17CFC0 80133D70 8C6F0030 */        lw $t7, 0x30($v1) # gSceneData + 48
  /* 17CFC4 80133D74 8C780034 */        lw $t8, 0x34($v1) # gSceneData + 52
  /* 17CFC8 80133D78 AC4E0000 */        sw $t6, ($v0) # sGmStageClearBonusMasks + 0
  /* 17CFCC 80133D7C AC4F0004 */        sw $t7, 4($v0) # sGmStageClearBonusMasks + 4
  /* 17CFD0 80133D80 0C04CC17 */       jal gmStageClearCheckHaveBonusStats
  /* 17CFD4 80133D84 AC580008 */        sw $t8, 8($v0) # sGmStageClearBonusMasks + 8
  /* 17CFD8 80133D88 3C018013 */       lui $at, %hi(D_ovl56_801352D8)
  /* 17CFDC 80133D8C AC2252D8 */        sw $v0, %lo(D_ovl56_801352D8)($at)
  /* 17CFE0 80133D90 3C018013 */       lui $at, %hi(D_ovl56_8013532C)
  /* 17CFE4 80133D94 AC20532C */        sw $zero, %lo(D_ovl56_8013532C)($at)
  /* 17CFE8 80133D98 3C018013 */       lui $at, %hi(D_ovl56_801353A0)
  /* 17CFEC 80133D9C 3C028013 */       lui $v0, %hi(sGmStageClearBonusObjectiveGObj)
  /* 17CFF0 80133DA0 3C038013 */       lui $v1, %hi(D_ovl56_80135350)
  /* 17CFF4 80133DA4 AC2053A0 */        sw $zero, %lo(D_ovl56_801353A0)($at)
  /* 17CFF8 80133DA8 24635350 */     addiu $v1, $v1, %lo(D_ovl56_80135350)
  /* 17CFFC 80133DAC 24425378 */     addiu $v0, $v0, %lo(sGmStageClearBonusObjectiveGObj)
  .L80133DB0:
  /* 17D000 80133DB0 24630004 */     addiu $v1, $v1, 4
  /* 17D004 80133DB4 0062082B */      sltu $at, $v1, $v0
  /* 17D008 80133DB8 1420FFFD */      bnez $at, .L80133DB0
  /* 17D00C 80133DBC AC60FFFC */        sw $zero, -4($v1) # D_ovl56_80135350 + -4
  /* 17D010 80133DC0 3C018013 */       lui $at, %hi(D_ovl56_8013537C)
  /* 17D014 80133DC4 3C028013 */       lui $v0, %hi(D_ovl56_80135380)
  /* 17D018 80133DC8 3C038013 */       lui $v1, %hi(D_ovl56_801353A0)
  /* 17D01C 80133DCC 246353A0 */     addiu $v1, $v1, %lo(D_ovl56_801353A0)
  /* 17D020 80133DD0 24425380 */     addiu $v0, $v0, %lo(D_ovl56_80135380)
  /* 17D024 80133DD4 AC205378 */        sw $zero, %lo(sGmStageClearBonusObjectiveGObj)($at)
  /* 17D028 80133DD8 AC20537C */        sw $zero, %lo(D_ovl56_8013537C)($at)
  .L80133DDC:
  /* 17D02C 80133DDC 24420010 */     addiu $v0, $v0, 0x10
  /* 17D030 80133DE0 AC40FFF4 */        sw $zero, -0xc($v0) # D_ovl56_80135380 + -12
  /* 17D034 80133DE4 AC40FFF8 */        sw $zero, -8($v0) # D_ovl56_80135380 + -8
  /* 17D038 80133DE8 AC40FFFC */        sw $zero, -4($v0) # D_ovl56_80135380 + -4
  /* 17D03C 80133DEC 1443FFFB */       bne $v0, $v1, .L80133DDC
  /* 17D040 80133DF0 AC40FFF0 */        sw $zero, -0x10($v0) # D_ovl56_80135380 + -16
  /* 17D044 80133DF4 3C018013 */       lui $at, %hi(sGmStageClearTimerTextGObj)
  /* 17D048 80133DF8 AC2052F8 */        sw $zero, %lo(sGmStageClearTimerTextGObj)($at)
  /* 17D04C 80133DFC 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D050 80133E00 AC2052FC */        sw $zero, %lo(sGmStageClearTimerMultiplierGObj)($at)
  /* 17D054 80133E04 3C018013 */       lui $at, %hi(sGmStageClearTargetGObj)
  /* 17D058 80133E08 AC205318 */        sw $zero, %lo(sGmStageClearTargetGObj)($at)
  /* 17D05C 80133E0C 3C018013 */       lui $at, %hi(D_ovl56_80135334)
  /* 17D060 80133E10 AC205334 */        sw $zero, %lo(D_ovl56_80135334)($at)
  /* 17D064 80133E14 3C028013 */       lui $v0, %hi(sGmStageClearKind)
  /* 17D068 80133E18 8C4252D4 */        lw $v0, %lo(sGmStageClearKind)($v0)
  /* 17D06C 80133E1C 3C018013 */       lui $at, %hi(D_ovl56_80135338)
  /* 17D070 80133E20 AC205338 */        sw $zero, %lo(D_ovl56_80135338)($at)
  /* 17D074 80133E24 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17D078 80133E28 10400004 */      beqz $v0, .L80133E3C
  /* 17D07C 80133E2C AC20533C */        sw $zero, %lo(D_ovl56_8013533C)($at)
  /* 17D080 80133E30 24010001 */     addiu $at, $zero, 1
  /* 17D084 80133E34 5441002A */      bnel $v0, $at, .L80133EE0
  /* 17D088 80133E38 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133E3C:
  /* 17D08C 80133E3C 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D090 80133E40 00000000 */       nop 
  /* 17D094 80133E44 1040000E */      beqz $v0, .L80133E80
  /* 17D098 80133E48 240B000A */     addiu $t3, $zero, 0xa
  /* 17D09C 80133E4C 2419000A */     addiu $t9, $zero, 0xa
  /* 17D0A0 80133E50 3C018013 */       lui $at, %hi(D_ovl56_801353B8)
  /* 17D0A4 80133E54 AC3953B8 */        sw $t9, %lo(D_ovl56_801353B8)($at)
  /* 17D0A8 80133E58 3C018013 */       lui $at, %hi(D_ovl56_801353BC)
  /* 17D0AC 80133E5C 24080014 */     addiu $t0, $zero, 0x14
  /* 17D0B0 80133E60 AC2853BC */        sw $t0, %lo(D_ovl56_801353BC)($at)
  /* 17D0B4 80133E64 3C018013 */       lui $at, %hi(D_ovl56_801353C0)
  /* 17D0B8 80133E68 24090028 */     addiu $t1, $zero, 0x28
  /* 17D0BC 80133E6C AC2953C0 */        sw $t1, %lo(D_ovl56_801353C0)($at)
  /* 17D0C0 80133E70 3C018013 */       lui $at, %hi(D_ovl56_801353C4)
  /* 17D0C4 80133E74 240A003C */     addiu $t2, $zero, 0x3c
  /* 17D0C8 80133E78 10000018 */         b .L80133EDC
  /* 17D0CC 80133E7C AC2A53C4 */        sw $t2, %lo(D_ovl56_801353C4)($at)
  .L80133E80:
  /* 17D0D0 80133E80 3C018013 */       lui $at, %hi(D_ovl56_801353A8)
  /* 17D0D4 80133E84 AC2B53A8 */        sw $t3, %lo(D_ovl56_801353A8)($at)
  /* 17D0D8 80133E88 3C018013 */       lui $at, %hi(D_ovl56_801353AC)
  /* 17D0DC 80133E8C 240C0014 */     addiu $t4, $zero, 0x14
  /* 17D0E0 80133E90 AC2C53AC */        sw $t4, %lo(D_ovl56_801353AC)($at)
  /* 17D0E4 80133E94 3C018013 */       lui $at, %hi(D_ovl56_801353B0)
  /* 17D0E8 80133E98 240D003C */     addiu $t5, $zero, 0x3c
  /* 17D0EC 80133E9C AC2D53B0 */        sw $t5, %lo(D_ovl56_801353B0)($at)
  /* 17D0F0 80133EA0 3C018013 */       lui $at, %hi(D_ovl56_801353B4)
  /* 17D0F4 80133EA4 240E0050 */     addiu $t6, $zero, 0x50
  /* 17D0F8 80133EA8 AC2E53B4 */        sw $t6, %lo(D_ovl56_801353B4)($at)
  /* 17D0FC 80133EAC 3C018013 */       lui $at, %hi(D_ovl56_801353B8)
  /* 17D100 80133EB0 240F001E */     addiu $t7, $zero, 0x1e
  /* 17D104 80133EB4 AC2F53B8 */        sw $t7, %lo(D_ovl56_801353B8)($at)
  /* 17D108 80133EB8 3C018013 */       lui $at, %hi(D_ovl56_801353BC)
  /* 17D10C 80133EBC 24180028 */     addiu $t8, $zero, 0x28
  /* 17D110 80133EC0 AC3853BC */        sw $t8, %lo(D_ovl56_801353BC)($at)
  /* 17D114 80133EC4 3C018013 */       lui $at, %hi(D_ovl56_801353C0)
  /* 17D118 80133EC8 24190064 */     addiu $t9, $zero, 0x64
  /* 17D11C 80133ECC AC3953C0 */        sw $t9, %lo(D_ovl56_801353C0)($at)
  /* 17D120 80133ED0 3C018013 */       lui $at, %hi(D_ovl56_801353C4)
  /* 17D124 80133ED4 24080078 */     addiu $t0, $zero, 0x78
  /* 17D128 80133ED8 AC2853C4 */        sw $t0, %lo(D_ovl56_801353C4)($at)
  .L80133EDC:
  /* 17D12C 80133EDC 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133EE0:
  /* 17D130 80133EE0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17D134 80133EE4 03E00008 */        jr $ra
  /* 17D138 80133EE8 00000000 */       nop 

glabel func_ovl56_80133EEC
  /* 17D13C 80133EEC 3C0E8013 */       lui $t6, %hi(sGmStageClearScoreTotal)
  /* 17D140 80133EF0 8DCE52E8 */        lw $t6, %lo(sGmStageClearScoreTotal)($t6)
  /* 17D144 80133EF4 3C01800A */       lui $at, %hi((gSceneData + 0x20))
  /* 17D148 80133EF8 03E00008 */        jr $ra
  /* 17D14C 80133EFC AC2E4AF0 */        sw $t6, %lo((gSceneData + 0x20))($at)

glabel func_ovl56_80133F00
  /* 17D150 80133F00 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17D154 80133F04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17D158 80133F08 0C04C8FE */       jal gmStageClearMakeScoreSObjs
  /* 17D15C 80133F0C 00000000 */       nop 
  /* 17D160 80133F10 0C009A70 */       jal func_800269C0
  /* 17D164 80133F14 240400A8 */     addiu $a0, $zero, 0xa8
  /* 17D168 80133F18 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17D16C 80133F1C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17D170 80133F20 03E00008 */        jr $ra
  /* 17D174 80133F24 00000000 */       nop 

glabel func_ovl56_80133F28
  /* 17D178 80133F28 3C0E800A */       lui $t6, %hi((gSceneData + 0x16))
  /* 17D17C 80133F2C 91CE4AE6 */       lbu $t6, %lo((gSceneData + 0x16))($t6)
  /* 17D180 80133F30 24010064 */     addiu $at, $zero, 0x64
  /* 17D184 80133F34 00001025 */        or $v0, $zero, $zero
  /* 17D188 80133F38 15C10003 */       bne $t6, $at, .L80133F48
  /* 17D18C 80133F3C 00000000 */       nop 
  /* 17D190 80133F40 03E00008 */        jr $ra
  /* 17D194 80133F44 24020001 */     addiu $v0, $zero, 1

  .L80133F48:
  /* 17D198 80133F48 03E00008 */        jr $ra
  /* 17D19C 80133F4C 00000000 */       nop 

glabel func_ovl56_80133F50
  /* 17D1A0 80133F50 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17D1A4 80133F54 3C0E8013 */       lui $t6, %hi(D_ovl56_80135340)
  /* 17D1A8 80133F58 8DCE5340 */        lw $t6, %lo(D_ovl56_80135340)($t6)
  /* 17D1AC 80133F5C 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17D1B0 80133F60 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 17D1B4 80133F64 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17D1B8 80133F68 AFB10018 */        sw $s1, 0x18($sp)
  /* 17D1BC 80133F6C 144E0022 */       bne $v0, $t6, .L80133FF8
  /* 17D1C0 80133F70 AFB00014 */        sw $s0, 0x14($sp)
  /* 17D1C4 80133F74 3C108013 */       lui $s0, %hi(D_ovl56_80135350)
  /* 17D1C8 80133F78 3C118013 */       lui $s1, %hi(sGmStageClearBonusObjectiveGObj)
  /* 17D1CC 80133F7C 26315378 */     addiu $s1, $s1, %lo(sGmStageClearBonusObjectiveGObj)
  /* 17D1D0 80133F80 26105350 */     addiu $s0, $s0, %lo(D_ovl56_80135350)
  /* 17D1D4 80133F84 8E040000 */        lw $a0, ($s0) # D_ovl56_80135350 + 0
  .L80133F88:
  /* 17D1D8 80133F88 50800004 */      beql $a0, $zero, .L80133F9C
  /* 17D1DC 80133F8C 26100004 */     addiu $s0, $s0, 4
  /* 17D1E0 80133F90 0C0026A1 */       jal omEjectGObjCommon
  /* 17D1E4 80133F94 00000000 */       nop 
  /* 17D1E8 80133F98 26100004 */     addiu $s0, $s0, 4
  .L80133F9C:
  /* 17D1EC 80133F9C 5611FFFA */      bnel $s0, $s1, .L80133F88
  /* 17D1F0 80133FA0 8E040000 */        lw $a0, ($s0) # D_ovl56_80135350 + 0
  /* 17D1F4 80133FA4 0C04CDBE */       jal func_ovl56_801336F8
  /* 17D1F8 80133FA8 00000000 */       nop 
  /* 17D1FC 80133FAC 3C038013 */       lui $v1, %hi(sGmStageClearScoreTotal)
  /* 17D200 80133FB0 246352E8 */     addiu $v1, $v1, %lo(sGmStageClearScoreTotal)
  /* 17D204 80133FB4 8C6F0000 */        lw $t7, ($v1) # sGmStageClearScoreTotal + 0
  /* 17D208 80133FB8 3C088013 */       lui $t0, %hi(D_ovl56_80135330)
  /* 17D20C 80133FBC 3C0A8013 */       lui $t2, %hi(D_ovl56_801352CC)
  /* 17D210 80133FC0 01E2C021 */      addu $t8, $t7, $v0
  /* 17D214 80133FC4 07010002 */      bgez $t8, .L80133FD0
  /* 17D218 80133FC8 AC780000 */        sw $t8, ($v1) # sGmStageClearScoreTotal + 0
  /* 17D21C 80133FCC AC600000 */        sw $zero, ($v1) # sGmStageClearScoreTotal + 0
  .L80133FD0:
  /* 17D220 80133FD0 8D085330 */        lw $t0, %lo(D_ovl56_80135330)($t0)
  /* 17D224 80133FD4 8D4A52CC */        lw $t2, %lo(D_ovl56_801352CC)($t2)
  /* 17D228 80133FD8 3C018013 */       lui $at, %hi(D_ovl56_80135344)
  /* 17D22C 80133FDC 00084880 */       sll $t1, $t0, 2
  /* 17D230 80133FE0 01284821 */      addu $t1, $t1, $t0
  /* 17D234 80133FE4 00094840 */       sll $t1, $t1, 1
  /* 17D238 80133FE8 012A5821 */      addu $t3, $t1, $t2
  /* 17D23C 80133FEC 256C0014 */     addiu $t4, $t3, 0x14
  /* 17D240 80133FF0 1000001D */         b .L80134068
  /* 17D244 80133FF4 AC2C5344 */        sw $t4, %lo(D_ovl56_80135344)($at)
  .L80133FF8:
  /* 17D248 80133FF8 3C0D8013 */       lui $t5, %hi(D_ovl56_80135344)
  /* 17D24C 80133FFC 8DAD5344 */        lw $t5, %lo(D_ovl56_80135344)($t5)
  /* 17D250 80134000 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17D254 80134004 3C088013 */       lui $t0, 0x8013
  /* 17D258 80134008 144D0011 */       bne $v0, $t5, .L80134050
  /* 17D25C 8013400C 00000000 */       nop 
  /* 17D260 80134010 0C0026A1 */       jal omEjectGObjCommon
  /* 17D264 80134014 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17D268 80134018 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17D26C 8013401C 00000000 */       nop 
  /* 17D270 80134020 3C0F8013 */       lui $t7, %hi(D_ovl56_80135338)
  /* 17D274 80134024 8DEF5338 */        lw $t7, %lo(D_ovl56_80135338)($t7)
  /* 17D278 80134028 240E0001 */     addiu $t6, $zero, 1
  /* 17D27C 8013402C 3C018013 */       lui $at, %hi(D_ovl56_80135334)
  /* 17D280 80134030 11E0000D */      beqz $t7, .L80134068
  /* 17D284 80134034 AC2E5334 */        sw $t6, %lo(D_ovl56_80135334)($at)
  /* 17D288 80134038 3C188013 */       lui $t8, %hi(D_ovl56_801352CC)
  /* 17D28C 8013403C 8F1852CC */        lw $t8, %lo(D_ovl56_801352CC)($t8)
  /* 17D290 80134040 3C018013 */       lui $at, %hi(D_ovl56_80135348)
  /* 17D294 80134044 27190014 */     addiu $t9, $t8, 0x14
  /* 17D298 80134048 10000007 */         b .L80134068
  /* 17D29C 8013404C AC395348 */        sw $t9, %lo(D_ovl56_80135348)($at)
  .L80134050:
  /* 17D2A0 80134050 8D085348 */        lw $t0, 0x5348($t0)
  /* 17D2A4 80134054 24090001 */     addiu $t1, $zero, 1
  /* 17D2A8 80134058 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17D2AC 8013405C 54480003 */      bnel $v0, $t0, .L8013406C
  /* 17D2B0 80134060 8FBF001C */        lw $ra, 0x1c($sp)
  /* 17D2B4 80134064 AC29533C */        sw $t1, %lo(D_ovl56_8013533C)($at)
  .L80134068:
  /* 17D2B8 80134068 8FBF001C */        lw $ra, 0x1c($sp)
  .L8013406C:
  /* 17D2BC 8013406C 8FB00014 */        lw $s0, 0x14($sp)
  /* 17D2C0 80134070 8FB10018 */        lw $s1, 0x18($sp)
  /* 17D2C4 80134074 03E00008 */        jr $ra
  /* 17D2C8 80134078 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl56_8013407C
  /* 17D2CC 8013407C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 17D2D0 80134080 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17D2D4 80134084 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D2D8 80134088 00000000 */       nop 
  /* 17D2DC 8013408C 14400031 */      bnez $v0, .L80134154
  /* 17D2E0 80134090 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D2E4 80134094 3C0E8013 */       lui $t6, %hi(D_ovl56_801353A8)
  /* 17D2E8 80134098 8DCE53A8 */        lw $t6, %lo(D_ovl56_801353A8)($t6)
  /* 17D2EC 8013409C 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  /* 17D2F0 801340A0 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D2F4 801340A4 146E0006 */       bne $v1, $t6, .L801340C0
  /* 17D2F8 801340A8 00000000 */       nop 
  /* 17D2FC 801340AC 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D300 801340B0 0C04C93F */       jal gmStageClearMakeTimerTextSObjs
  /* 17D304 801340B4 00000000 */       nop 
  /* 17D308 801340B8 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D30C 801340BC 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801340C0:
  /* 17D310 801340C0 3C0F8013 */       lui $t7, %hi(D_ovl56_801353AC)
  /* 17D314 801340C4 8DEF53AC */        lw $t7, %lo(D_ovl56_801353AC)($t7)
  /* 17D318 801340C8 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D31C 801340CC 146F0006 */       bne $v1, $t7, .L801340E8
  /* 17D320 801340D0 00000000 */       nop 
  /* 17D324 801340D4 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D328 801340D8 0C04C98F */       jal gmStageClearMakeTimerDigitSObjs
  /* 17D32C 801340DC 00000000 */       nop 
  /* 17D330 801340E0 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D334 801340E4 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801340E8:
  /* 17D338 801340E8 3C188013 */       lui $t8, %hi(D_ovl56_801353B0)
  /* 17D33C 801340EC 8F1853B0 */        lw $t8, %lo(D_ovl56_801353B0)($t8)
  /* 17D340 801340F0 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D344 801340F4 1478000E */       bne $v1, $t8, .L80134130
  /* 17D348 801340F8 00000000 */       nop 
  /* 17D34C 801340FC 0C0026A1 */       jal omEjectGObjCommon
  /* 17D350 80134100 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17D354 80134104 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D358 80134108 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D35C 8013410C 0C04C9F5 */       jal gmStageClearGetAppendTotalTimeScore
  /* 17D360 80134110 00000000 */       nop 
  /* 17D364 80134114 3C198013 */       lui $t9, %hi(sGmStageClearScoreTotal)
  /* 17D368 80134118 8F3952E8 */        lw $t9, %lo(sGmStageClearScoreTotal)($t9)
  /* 17D36C 8013411C 3C018013 */       lui $at, %hi(sGmStageClearScoreTotal)
  /* 17D370 80134120 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D374 80134124 03224021 */      addu $t0, $t9, $v0
  /* 17D378 80134128 AC2852E8 */        sw $t0, %lo(sGmStageClearScoreTotal)($at)
  /* 17D37C 8013412C 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L80134130:
  /* 17D380 80134130 3C098013 */       lui $t1, %hi(D_ovl56_801353B4)
  /* 17D384 80134134 8D2953B4 */        lw $t1, %lo(D_ovl56_801353B4)($t1)
  /* 17D388 80134138 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17D38C 8013413C 14690005 */       bne $v1, $t1, .L80134154
  /* 17D390 80134140 00000000 */       nop 
  /* 17D394 80134144 0C0026A1 */       jal omEjectGObjCommon
  /* 17D398 80134148 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17D39C 8013414C 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17D3A0 80134150 00000000 */       nop 
  .L80134154:
  /* 17D3A4 80134154 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D3A8 80134158 00000000 */       nop 
  /* 17D3AC 8013415C 14400005 */      bnez $v0, .L80134174
  /* 17D3B0 80134160 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D3B4 80134164 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 17D3B8 80134168 44812000 */      mtc1 $at, $f4 # 126.0 to cop1
  /* 17D3BC 8013416C 10000005 */         b .L80134184
  /* 17D3C0 80134170 E7A40018 */      swc1 $f4, 0x18($sp)
  .L80134174:
  /* 17D3C4 80134174 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D3C8 80134178 44813000 */      mtc1 $at, $f6 # 94.0 to cop1
  /* 17D3CC 8013417C 00000000 */       nop 
  /* 17D3D0 80134180 E7A60018 */      swc1 $f6, 0x18($sp)
  .L80134184:
  /* 17D3D4 80134184 3C0A8013 */       lui $t2, %hi(D_ovl56_801353B8)
  /* 17D3D8 80134188 8D4A53B8 */        lw $t2, %lo(D_ovl56_801353B8)($t2)
  /* 17D3DC 8013418C 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  /* 17D3E0 80134190 146A0005 */       bne $v1, $t2, .L801341A8
  /* 17D3E4 80134194 00000000 */       nop 
  /* 17D3E8 80134198 0C04CA33 */       jal gmStageClearMakeDamageTextSObjs
  /* 17D3EC 8013419C C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D3F0 801341A0 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D3F4 801341A4 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801341A8:
  /* 17D3F8 801341A8 3C0B8013 */       lui $t3, %hi(D_ovl56_801353BC)
  /* 17D3FC 801341AC 8D6B53BC */        lw $t3, %lo(D_ovl56_801353BC)($t3)
  /* 17D400 801341B0 146B0005 */       bne $v1, $t3, .L801341C8
  /* 17D404 801341B4 00000000 */       nop 
  /* 17D408 801341B8 0C04CA88 */       jal gmStageClearMakeDamageDigitSObjs
  /* 17D40C 801341BC C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D410 801341C0 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D414 801341C4 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801341C8:
  /* 17D418 801341C8 3C0C8013 */       lui $t4, %hi(D_ovl56_801353C0)
  /* 17D41C 801341CC 8D8C53C0 */        lw $t4, %lo(D_ovl56_801353C0)($t4)
  /* 17D420 801341D0 3C048013 */       lui $a0, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D424 801341D4 146C000C */       bne $v1, $t4, .L80134208
  /* 17D428 801341D8 00000000 */       nop 
  /* 17D42C 801341DC 0C0026A1 */       jal omEjectGObjCommon
  /* 17D430 801341E0 8C845304 */        lw $a0, %lo(sGmStageClearDamageMultiplierGObj)($a0)
  /* 17D434 801341E4 0C04CAED */       jal gmStageClearGetAppendTotalDamageScore
  /* 17D438 801341E8 C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D43C 801341EC 3C0D8013 */       lui $t5, %hi(sGmStageClearScoreTotal)
  /* 17D440 801341F0 8DAD52E8 */        lw $t5, %lo(sGmStageClearScoreTotal)($t5)
  /* 17D444 801341F4 3C018013 */       lui $at, %hi(sGmStageClearScoreTotal)
  /* 17D448 801341F8 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D44C 801341FC 01A27021 */      addu $t6, $t5, $v0
  /* 17D450 80134200 AC2E52E8 */        sw $t6, %lo(sGmStageClearScoreTotal)($at)
  /* 17D454 80134204 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L80134208:
  /* 17D458 80134208 3C0F8013 */       lui $t7, %hi(D_ovl56_801353C4)
  /* 17D45C 8013420C 8DEF53C4 */        lw $t7, %lo(D_ovl56_801353C4)($t7)
  /* 17D460 80134210 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17D464 80134214 146F0017 */       bne $v1, $t7, .L80134274
  /* 17D468 80134218 00000000 */       nop 
  /* 17D46C 8013421C 0C0026A1 */       jal omEjectGObjCommon
  /* 17D470 80134220 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17D474 80134224 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17D478 80134228 00000000 */       nop 
  /* 17D47C 8013422C 3C188013 */       lui $t8, %hi(D_ovl56_801352D8)
  /* 17D480 80134230 8F1852D8 */        lw $t8, %lo(D_ovl56_801352D8)($t8)
  /* 17D484 80134234 3C028013 */       lui $v0, %hi(D_ovl56_80135348)
  /* 17D488 80134238 24425348 */     addiu $v0, $v0, %lo(D_ovl56_80135348)
  /* 17D48C 8013423C 1300000A */      beqz $t8, .L80134268
  /* 17D490 80134240 3C038013 */       lui $v1, %hi(D_ovl56_80135344)
  /* 17D494 80134244 3C198013 */       lui $t9, %hi(D_ovl56_801352CC)
  /* 17D498 80134248 8F3952CC */        lw $t9, %lo(D_ovl56_801352CC)($t9)
  /* 17D49C 8013424C 24635344 */     addiu $v1, $v1, %lo(D_ovl56_80135344)
  /* 17D4A0 80134250 3C018013 */       lui $at, %hi(D_ovl56_80135340)
  /* 17D4A4 80134254 2728000A */     addiu $t0, $t9, 0xa
  /* 17D4A8 80134258 AC480000 */        sw $t0, ($v0) # D_ovl56_80135348 + 0
  /* 17D4AC 8013425C AC680000 */        sw $t0, ($v1) # D_ovl56_80135344 + 0
  /* 17D4B0 80134260 10000004 */         b .L80134274
  /* 17D4B4 80134264 AC285340 */        sw $t0, %lo(D_ovl56_80135340)($at)
  .L80134268:
  /* 17D4B8 80134268 240B0001 */     addiu $t3, $zero, 1
  /* 17D4BC 8013426C 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17D4C0 80134270 AC2B533C */        sw $t3, %lo(D_ovl56_8013533C)($at)
  .L80134274:
  /* 17D4C4 80134274 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17D4C8 80134278 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  /* 17D4CC 8013427C 10400028 */      beqz $v0, .L80134320
  /* 17D4D0 80134280 3C048013 */       lui $a0, %hi(sGmStageClearBonusTextGObj)
  /* 17D4D4 80134284 8C845314 */        lw $a0, %lo(sGmStageClearBonusTextGObj)($a0)
  /* 17D4D8 80134288 3C0C8013 */       lui $t4, %hi(D_ovl56_801352CC)
  /* 17D4DC 8013428C 3C0D8013 */       lui $t5, %hi(D_ovl56_80135340)
  /* 17D4E0 80134290 10800023 */      beqz $a0, .L80134320
  /* 17D4E4 80134294 00000000 */       nop 
  /* 17D4E8 80134298 8D8C52CC */        lw $t4, %lo(D_ovl56_801352CC)($t4)
  /* 17D4EC 8013429C 8DAD5340 */        lw $t5, %lo(D_ovl56_80135340)($t5)
  /* 17D4F0 801342A0 158D001F */       bne $t4, $t5, .L80134320
  /* 17D4F4 801342A4 00000000 */       nop 
  /* 17D4F8 801342A8 0C0026A1 */       jal omEjectGObjCommon
  /* 17D4FC 801342AC 00000000 */       nop 
  /* 17D500 801342B0 3C048013 */       lui $a0, %hi(sGmStageClearTimerTextGObj)
  /* 17D504 801342B4 8C8452F8 */        lw $a0, %lo(sGmStageClearTimerTextGObj)($a0)
  /* 17D508 801342B8 3C018013 */       lui $at, %hi(sGmStageClearBonusTextGObj)
  /* 17D50C 801342BC AC205314 */        sw $zero, %lo(sGmStageClearBonusTextGObj)($at)
  /* 17D510 801342C0 1080000A */      beqz $a0, .L801342EC
  /* 17D514 801342C4 00000000 */       nop 
  /* 17D518 801342C8 0C0026A1 */       jal omEjectGObjCommon
  /* 17D51C 801342CC 00000000 */       nop 
  /* 17D520 801342D0 3C018013 */       lui $at, %hi(sGmStageClearTimerTextGObj)
  /* 17D524 801342D4 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D528 801342D8 AC2052F8 */        sw $zero, %lo(sGmStageClearTimerTextGObj)($at)
  /* 17D52C 801342DC 0C0026A1 */       jal omEjectGObjCommon
  /* 17D530 801342E0 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17D534 801342E4 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D538 801342E8 AC2052FC */        sw $zero, %lo(sGmStageClearTimerMultiplierGObj)($at)
  .L801342EC:
  /* 17D53C 801342EC 3C048013 */       lui $a0, %hi(sGmStageClearDamageTextGObj)
  /* 17D540 801342F0 0C0026A1 */       jal omEjectGObjCommon
  /* 17D544 801342F4 8C845300 */        lw $a0, %lo(sGmStageClearDamageTextGObj)($a0)
  /* 17D548 801342F8 3C018013 */       lui $at, %hi(sGmStageClearDamageTextGObj)
  /* 17D54C 801342FC 3C048013 */       lui $a0, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D550 80134300 AC205300 */        sw $zero, %lo(sGmStageClearDamageTextGObj)($at)
  /* 17D554 80134304 0C0026A1 */       jal omEjectGObjCommon
  /* 17D558 80134308 8C845304 */        lw $a0, %lo(sGmStageClearDamageMultiplierGObj)($a0)
  /* 17D55C 8013430C 3C018013 */       lui $at, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D560 80134310 0C04CE28 */       jal func_ovl56_801338A0
  /* 17D564 80134314 AC205304 */        sw $zero, %lo(sGmStageClearDamageMultiplierGObj)($at)
  /* 17D568 80134318 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17D56C 8013431C 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  .L80134320:
  /* 17D570 80134320 50400004 */      beql $v0, $zero, .L80134334
  /* 17D574 80134324 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17D578 80134328 0C04CFD4 */       jal func_ovl56_80133F50
  /* 17D57C 8013432C 00000000 */       nop 
  /* 17D580 80134330 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134334:
  /* 17D584 80134334 27BD0020 */     addiu $sp, $sp, 0x20
  /* 17D588 80134338 03E00008 */        jr $ra
  /* 17D58C 8013433C 00000000 */       nop 

glabel func_ovl56_80134340
  /* 17D590 80134340 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 17D594 80134344 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17D598 80134348 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D59C 8013434C 00000000 */       nop 
  /* 17D5A0 80134350 14400031 */      bnez $v0, .L80134418
  /* 17D5A4 80134354 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D5A8 80134358 3C0E8013 */       lui $t6, %hi(D_ovl56_801353A8)
  /* 17D5AC 8013435C 8DCE53A8 */        lw $t6, %lo(D_ovl56_801353A8)($t6)
  /* 17D5B0 80134360 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  /* 17D5B4 80134364 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D5B8 80134368 146E0006 */       bne $v1, $t6, .L80134384
  /* 17D5BC 8013436C 00000000 */       nop 
  /* 17D5C0 80134370 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D5C4 80134374 0C04C93F */       jal gmStageClearMakeTimerTextSObjs
  /* 17D5C8 80134378 00000000 */       nop 
  /* 17D5CC 8013437C 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D5D0 80134380 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L80134384:
  /* 17D5D4 80134384 3C0F8013 */       lui $t7, %hi(D_ovl56_801353AC)
  /* 17D5D8 80134388 8DEF53AC */        lw $t7, %lo(D_ovl56_801353AC)($t7)
  /* 17D5DC 8013438C 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D5E0 80134390 146F0006 */       bne $v1, $t7, .L801343AC
  /* 17D5E4 80134394 00000000 */       nop 
  /* 17D5E8 80134398 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D5EC 8013439C 0C04C98F */       jal gmStageClearMakeTimerDigitSObjs
  /* 17D5F0 801343A0 00000000 */       nop 
  /* 17D5F4 801343A4 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D5F8 801343A8 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801343AC:
  /* 17D5FC 801343AC 3C188013 */       lui $t8, %hi(D_ovl56_801353B0)
  /* 17D600 801343B0 8F1853B0 */        lw $t8, %lo(D_ovl56_801353B0)($t8)
  /* 17D604 801343B4 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D608 801343B8 1478000E */       bne $v1, $t8, .L801343F4
  /* 17D60C 801343BC 00000000 */       nop 
  /* 17D610 801343C0 0C0026A1 */       jal omEjectGObjCommon
  /* 17D614 801343C4 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17D618 801343C8 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D61C 801343CC 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D620 801343D0 0C04C9F5 */       jal gmStageClearGetAppendTotalTimeScore
  /* 17D624 801343D4 00000000 */       nop 
  /* 17D628 801343D8 3C198013 */       lui $t9, %hi(sGmStageClearScoreTotal)
  /* 17D62C 801343DC 8F3952E8 */        lw $t9, %lo(sGmStageClearScoreTotal)($t9)
  /* 17D630 801343E0 3C018013 */       lui $at, %hi(sGmStageClearScoreTotal)
  /* 17D634 801343E4 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D638 801343E8 03224021 */      addu $t0, $t9, $v0
  /* 17D63C 801343EC AC2852E8 */        sw $t0, %lo(sGmStageClearScoreTotal)($at)
  /* 17D640 801343F0 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801343F4:
  /* 17D644 801343F4 3C098013 */       lui $t1, %hi(D_ovl56_801353B4)
  /* 17D648 801343F8 8D2953B4 */        lw $t1, %lo(D_ovl56_801353B4)($t1)
  /* 17D64C 801343FC 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17D650 80134400 14690005 */       bne $v1, $t1, .L80134418
  /* 17D654 80134404 00000000 */       nop 
  /* 17D658 80134408 0C0026A1 */       jal omEjectGObjCommon
  /* 17D65C 8013440C 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17D660 80134410 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17D664 80134414 00000000 */       nop 
  .L80134418:
  /* 17D668 80134418 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D66C 8013441C 00000000 */       nop 
  /* 17D670 80134420 14400005 */      bnez $v0, .L80134438
  /* 17D674 80134424 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D678 80134428 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 17D67C 8013442C 44812000 */      mtc1 $at, $f4 # 126.0 to cop1
  /* 17D680 80134430 10000005 */         b .L80134448
  /* 17D684 80134434 E7A40018 */      swc1 $f4, 0x18($sp)
  .L80134438:
  /* 17D688 80134438 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D68C 8013443C 44813000 */      mtc1 $at, $f6 # 94.0 to cop1
  /* 17D690 80134440 00000000 */       nop 
  /* 17D694 80134444 E7A60018 */      swc1 $f6, 0x18($sp)
  .L80134448:
  /* 17D698 80134448 3C0A8013 */       lui $t2, %hi(D_ovl56_801353B8)
  /* 17D69C 8013444C 8D4A53B8 */        lw $t2, %lo(D_ovl56_801353B8)($t2)
  /* 17D6A0 80134450 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  /* 17D6A4 80134454 146A0005 */       bne $v1, $t2, .L8013446C
  /* 17D6A8 80134458 00000000 */       nop 
  /* 17D6AC 8013445C 0C04CA33 */       jal gmStageClearMakeDamageTextSObjs
  /* 17D6B0 80134460 C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D6B4 80134464 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D6B8 80134468 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L8013446C:
  /* 17D6BC 8013446C 3C0B8013 */       lui $t3, %hi(D_ovl56_801353BC)
  /* 17D6C0 80134470 8D6B53BC */        lw $t3, %lo(D_ovl56_801353BC)($t3)
  /* 17D6C4 80134474 146B0005 */       bne $v1, $t3, .L8013448C
  /* 17D6C8 80134478 00000000 */       nop 
  /* 17D6CC 8013447C 0C04CA88 */       jal gmStageClearMakeDamageDigitSObjs
  /* 17D6D0 80134480 C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D6D4 80134484 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D6D8 80134488 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L8013448C:
  /* 17D6DC 8013448C 3C0C8013 */       lui $t4, %hi(D_ovl56_801353C0)
  /* 17D6E0 80134490 8D8C53C0 */        lw $t4, %lo(D_ovl56_801353C0)($t4)
  /* 17D6E4 80134494 3C048013 */       lui $a0, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D6E8 80134498 146C000C */       bne $v1, $t4, .L801344CC
  /* 17D6EC 8013449C 00000000 */       nop 
  /* 17D6F0 801344A0 0C0026A1 */       jal omEjectGObjCommon
  /* 17D6F4 801344A4 8C845304 */        lw $a0, %lo(sGmStageClearDamageMultiplierGObj)($a0)
  /* 17D6F8 801344A8 0C04CAED */       jal gmStageClearGetAppendTotalDamageScore
  /* 17D6FC 801344AC C7AC0018 */      lwc1 $f12, 0x18($sp)
  /* 17D700 801344B0 3C0D8013 */       lui $t5, %hi(sGmStageClearScoreTotal)
  /* 17D704 801344B4 8DAD52E8 */        lw $t5, %lo(sGmStageClearScoreTotal)($t5)
  /* 17D708 801344B8 3C018013 */       lui $at, %hi(sGmStageClearScoreTotal)
  /* 17D70C 801344BC 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17D710 801344C0 01A27021 */      addu $t6, $t5, $v0
  /* 17D714 801344C4 AC2E52E8 */        sw $t6, %lo(sGmStageClearScoreTotal)($at)
  /* 17D718 801344C8 8C6352CC */        lw $v1, %lo(D_ovl56_801352CC)($v1)
  .L801344CC:
  /* 17D71C 801344CC 3C0F8013 */       lui $t7, %hi(D_ovl56_801353C4)
  /* 17D720 801344D0 8DEF53C4 */        lw $t7, %lo(D_ovl56_801353C4)($t7)
  /* 17D724 801344D4 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17D728 801344D8 146F0017 */       bne $v1, $t7, .L80134538
  /* 17D72C 801344DC 00000000 */       nop 
  /* 17D730 801344E0 0C0026A1 */       jal omEjectGObjCommon
  /* 17D734 801344E4 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17D738 801344E8 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17D73C 801344EC 00000000 */       nop 
  /* 17D740 801344F0 3C188013 */       lui $t8, %hi(D_ovl56_801352D8)
  /* 17D744 801344F4 8F1852D8 */        lw $t8, %lo(D_ovl56_801352D8)($t8)
  /* 17D748 801344F8 3C028013 */       lui $v0, %hi(D_ovl56_80135348)
  /* 17D74C 801344FC 24425348 */     addiu $v0, $v0, %lo(D_ovl56_80135348)
  /* 17D750 80134500 1300000A */      beqz $t8, .L8013452C
  /* 17D754 80134504 3C038013 */       lui $v1, %hi(D_ovl56_80135344)
  /* 17D758 80134508 3C198013 */       lui $t9, %hi(D_ovl56_801352CC)
  /* 17D75C 8013450C 8F3952CC */        lw $t9, %lo(D_ovl56_801352CC)($t9)
  /* 17D760 80134510 24635344 */     addiu $v1, $v1, %lo(D_ovl56_80135344)
  /* 17D764 80134514 3C018013 */       lui $at, %hi(D_ovl56_80135340)
  /* 17D768 80134518 2728000A */     addiu $t0, $t9, 0xa
  /* 17D76C 8013451C AC480000 */        sw $t0, ($v0) # D_ovl56_80135348 + 0
  /* 17D770 80134520 AC680000 */        sw $t0, ($v1) # D_ovl56_80135344 + 0
  /* 17D774 80134524 10000004 */         b .L80134538
  /* 17D778 80134528 AC285340 */        sw $t0, %lo(D_ovl56_80135340)($at)
  .L8013452C:
  /* 17D77C 8013452C 240B0001 */     addiu $t3, $zero, 1
  /* 17D780 80134530 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17D784 80134534 AC2B533C */        sw $t3, %lo(D_ovl56_8013533C)($at)
  .L80134538:
  /* 17D788 80134538 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17D78C 8013453C 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  /* 17D790 80134540 10400028 */      beqz $v0, .L801345E4
  /* 17D794 80134544 3C048013 */       lui $a0, %hi(sGmStageClearBonusTextGObj)
  /* 17D798 80134548 8C845314 */        lw $a0, %lo(sGmStageClearBonusTextGObj)($a0)
  /* 17D79C 8013454C 3C0C8013 */       lui $t4, %hi(D_ovl56_801352CC)
  /* 17D7A0 80134550 3C0D8013 */       lui $t5, %hi(D_ovl56_80135340)
  /* 17D7A4 80134554 10800023 */      beqz $a0, .L801345E4
  /* 17D7A8 80134558 00000000 */       nop 
  /* 17D7AC 8013455C 8D8C52CC */        lw $t4, %lo(D_ovl56_801352CC)($t4)
  /* 17D7B0 80134560 8DAD5340 */        lw $t5, %lo(D_ovl56_80135340)($t5)
  /* 17D7B4 80134564 158D001F */       bne $t4, $t5, .L801345E4
  /* 17D7B8 80134568 00000000 */       nop 
  /* 17D7BC 8013456C 0C0026A1 */       jal omEjectGObjCommon
  /* 17D7C0 80134570 00000000 */       nop 
  /* 17D7C4 80134574 3C048013 */       lui $a0, %hi(sGmStageClearTimerTextGObj)
  /* 17D7C8 80134578 8C8452F8 */        lw $a0, %lo(sGmStageClearTimerTextGObj)($a0)
  /* 17D7CC 8013457C 3C018013 */       lui $at, %hi(sGmStageClearBonusTextGObj)
  /* 17D7D0 80134580 AC205314 */        sw $zero, %lo(sGmStageClearBonusTextGObj)($at)
  /* 17D7D4 80134584 1080000A */      beqz $a0, .L801345B0
  /* 17D7D8 80134588 00000000 */       nop 
  /* 17D7DC 8013458C 0C0026A1 */       jal omEjectGObjCommon
  /* 17D7E0 80134590 00000000 */       nop 
  /* 17D7E4 80134594 3C018013 */       lui $at, %hi(sGmStageClearTimerTextGObj)
  /* 17D7E8 80134598 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D7EC 8013459C AC2052F8 */        sw $zero, %lo(sGmStageClearTimerTextGObj)($at)
  /* 17D7F0 801345A0 0C0026A1 */       jal omEjectGObjCommon
  /* 17D7F4 801345A4 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17D7F8 801345A8 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17D7FC 801345AC AC2052FC */        sw $zero, %lo(sGmStageClearTimerMultiplierGObj)($at)
  .L801345B0:
  /* 17D800 801345B0 3C048013 */       lui $a0, %hi(sGmStageClearDamageTextGObj)
  /* 17D804 801345B4 0C0026A1 */       jal omEjectGObjCommon
  /* 17D808 801345B8 8C845300 */        lw $a0, %lo(sGmStageClearDamageTextGObj)($a0)
  /* 17D80C 801345BC 3C018013 */       lui $at, %hi(sGmStageClearDamageTextGObj)
  /* 17D810 801345C0 3C048013 */       lui $a0, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D814 801345C4 AC205300 */        sw $zero, %lo(sGmStageClearDamageTextGObj)($at)
  /* 17D818 801345C8 0C0026A1 */       jal omEjectGObjCommon
  /* 17D81C 801345CC 8C845304 */        lw $a0, %lo(sGmStageClearDamageMultiplierGObj)($a0)
  /* 17D820 801345D0 3C018013 */       lui $at, %hi(sGmStageClearDamageMultiplierGObj)
  /* 17D824 801345D4 0C04CE28 */       jal func_ovl56_801338A0
  /* 17D828 801345D8 AC205304 */        sw $zero, %lo(sGmStageClearDamageMultiplierGObj)($at)
  /* 17D82C 801345DC 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17D830 801345E0 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  .L801345E4:
  /* 17D834 801345E4 50400004 */      beql $v0, $zero, .L801345F8
  /* 17D838 801345E8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17D83C 801345EC 0C04CFD4 */       jal func_ovl56_80133F50
  /* 17D840 801345F0 00000000 */       nop 
  /* 17D844 801345F4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801345F8:
  /* 17D848 801345F8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 17D84C 801345FC 03E00008 */        jr $ra
  /* 17D850 80134600 00000000 */       nop 

glabel func_ovl56_80134604
  /* 17D854 80134604 3C058013 */       lui $a1, %hi(sGmStageClear1PGameStage)
  /* 17D858 80134608 24A552EC */     addiu $a1, $a1, %lo(sGmStageClear1PGameStage)
  /* 17D85C 8013460C 8CAE0000 */        lw $t6, ($a1) # sGmStageClear1PGameStage + 0
  /* 17D860 80134610 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 17D864 80134614 2404000B */     addiu $a0, $zero, 0xb
  /* 17D868 80134618 108E001C */       beq $a0, $t6, .L8013468C
  /* 17D86C 8013461C AFBF0014 */        sw $ra, 0x14($sp)
  /* 17D870 80134620 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17D874 80134624 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17D878 80134628 2401000A */     addiu $at, $zero, 0xa
  /* 17D87C 8013462C 54410006 */      bnel $v0, $at, .L80134648
  /* 17D880 80134630 24010014 */     addiu $at, $zero, 0x14
  /* 17D884 80134634 0C04CB20 */       jal gmStageClearMakeTargetTextSObjs
  /* 17D888 80134638 00000000 */       nop 
  /* 17D88C 8013463C 10000019 */         b .L801346A4
  /* 17D890 80134640 00000000 */       nop 
  /* 17D894 80134644 24010014 */     addiu $at, $zero, 0x14
  .L80134648:
  /* 17D898 80134648 1441000E */       bne $v0, $at, .L80134684
  /* 17D89C 8013464C 00000000 */       nop 
  /* 17D8A0 80134650 0C04CBDE */       jal func_ovl56_80132F78
  /* 17D8A4 80134654 00000000 */       nop 
  /* 17D8A8 80134658 3C078013 */       lui $a3, %hi(sGmStageClearBonusObjectivesCleared)
  /* 17D8AC 8013465C 24E753A4 */     addiu $a3, $a3, %lo(sGmStageClearBonusObjectivesCleared)
  /* 17D8B0 80134660 8CEF0000 */        lw $t7, ($a3) # sGmStageClearBonusObjectivesCleared + 0
  /* 17D8B4 80134664 2406000A */     addiu $a2, $zero, 0xa
  /* 17D8B8 80134668 3C198013 */       lui $t9, %hi(D_ovl56_801352CC)
  /* 17D8BC 8013466C 01E60019 */     multu $t7, $a2
  /* 17D8C0 80134670 8F3952CC */        lw $t9, %lo(D_ovl56_801352CC)($t9)
  /* 17D8C4 80134674 3C018013 */       lui $at, %hi(D_ovl56_801353A0)
  /* 17D8C8 80134678 0000C012 */      mflo $t8
  /* 17D8CC 8013467C 03194021 */      addu $t0, $t8, $t9
  /* 17D8D0 80134680 AC2853A0 */        sw $t0, %lo(D_ovl56_801353A0)($at)
  .L80134684:
  /* 17D8D4 80134684 10000007 */         b .L801346A4
  /* 17D8D8 80134688 00000000 */       nop 
  .L8013468C:
  /* 17D8DC 8013468C 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17D8E0 80134690 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17D8E4 80134694 2401000A */     addiu $at, $zero, 0xa
  /* 17D8E8 80134698 14410002 */       bne $v0, $at, .L801346A4
  /* 17D8EC 8013469C 3C018013 */       lui $at, %hi(D_ovl56_801353A0)
  /* 17D8F0 801346A0 AC2253A0 */        sw $v0, %lo(D_ovl56_801353A0)($at)
  .L801346A4:
  /* 17D8F4 801346A4 3C098013 */       lui $t1, %hi(D_ovl56_801353A0)
  /* 17D8F8 801346A8 8D2953A0 */        lw $t1, %lo(D_ovl56_801353A0)($t1)
  /* 17D8FC 801346AC 11200090 */      beqz $t1, .L801348F0
  /* 17D900 801346B0 00000000 */       nop 
  /* 17D904 801346B4 0C04CFCA */       jal func_ovl56_80133F28
  /* 17D908 801346B8 00000000 */       nop 
  /* 17D90C 801346BC 3C058013 */       lui $a1, %hi(sGmStageClear1PGameStage)
  /* 17D910 801346C0 3C078013 */       lui $a3, %hi(sGmStageClearBonusObjectivesCleared)
  /* 17D914 801346C4 24E753A4 */     addiu $a3, $a3, %lo(sGmStageClearBonusObjectivesCleared)
  /* 17D918 801346C8 24A552EC */     addiu $a1, $a1, %lo(sGmStageClear1PGameStage)
  /* 17D91C 801346CC 2404000B */     addiu $a0, $zero, 0xb
  /* 17D920 801346D0 1040001B */      beqz $v0, .L80134740
  /* 17D924 801346D4 2406000A */     addiu $a2, $zero, 0xa
  /* 17D928 801346D8 8CAA0000 */        lw $t2, ($a1) # sGmStageClear1PGameStage + 0
  /* 17D92C 801346DC 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17D930 801346E0 3C0B8013 */       lui $t3, %hi(D_ovl56_801353A0)
  /* 17D934 801346E4 108A0016 */       beq $a0, $t2, .L80134740
  /* 17D938 801346E8 00000000 */       nop 
  /* 17D93C 801346EC 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17D940 801346F0 8D6B53A0 */        lw $t3, %lo(D_ovl56_801353A0)($t3)
  /* 17D944 801346F4 3C0C8013 */       lui $t4, %hi(D_ovl56_801352D8)
  /* 17D948 801346F8 144B007D */       bne $v0, $t3, .L801348F0
  /* 17D94C 801346FC 00000000 */       nop 
  /* 17D950 80134700 8D8C52D8 */        lw $t4, %lo(D_ovl56_801352D8)($t4)
  /* 17D954 80134704 3C038013 */       lui $v1, %hi(D_ovl56_80135348)
  /* 17D958 80134708 24635348 */     addiu $v1, $v1, %lo(D_ovl56_80135348)
  /* 17D95C 8013470C 11800008 */      beqz $t4, .L80134730
  /* 17D960 80134710 3C048013 */       lui $a0, %hi(D_ovl56_80135344)
  /* 17D964 80134714 244D000A */     addiu $t5, $v0, 0xa
  /* 17D968 80134718 24845344 */     addiu $a0, $a0, %lo(D_ovl56_80135344)
  /* 17D96C 8013471C AC8D0000 */        sw $t5, ($a0) # D_ovl56_80135344 + 0
  /* 17D970 80134720 AC6D0000 */        sw $t5, ($v1) # D_ovl56_80135348 + 0
  /* 17D974 80134724 3C018013 */       lui $at, %hi(D_ovl56_80135340)
  /* 17D978 80134728 10000071 */         b .L801348F0
  /* 17D97C 8013472C AC2D5340 */        sw $t5, %lo(D_ovl56_80135340)($at)
  .L80134730:
  /* 17D980 80134730 24180001 */     addiu $t8, $zero, 1
  /* 17D984 80134734 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17D988 80134738 1000006D */         b .L801348F0
  /* 17D98C 8013473C AC38533C */        sw $t8, %lo(D_ovl56_8013533C)($at)
  .L80134740:
  /* 17D990 80134740 3C038013 */       lui $v1, %hi(D_ovl56_801353A0)
  /* 17D994 80134744 8C6353A0 */        lw $v1, %lo(D_ovl56_801353A0)($v1)
  /* 17D998 80134748 3C028013 */       lui $v0, %hi(D_ovl56_801352CC)
  /* 17D99C 8013474C 8C4252CC */        lw $v0, %lo(D_ovl56_801352CC)($v0)
  /* 17D9A0 80134750 2479000A */     addiu $t9, $v1, 0xa
  /* 17D9A4 80134754 246A001E */     addiu $t2, $v1, 0x1e
  /* 17D9A8 80134758 14590013 */       bne $v0, $t9, .L801347A8
  /* 17D9AC 8013475C 00000000 */       nop 
  /* 17D9B0 80134760 8CA80000 */        lw $t0, ($a1) # sGmStageClear1PGameStage + 0
  /* 17D9B4 80134764 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17D9B8 80134768 54880007 */      bnel $a0, $t0, .L80134788
  /* 17D9BC 8013476C 8CE90000 */        lw $t1, ($a3) # sGmStageClearBonusObjectivesCleared + 0
  /* 17D9C0 80134770 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17D9C4 80134774 0C04C93F */       jal gmStageClearMakeTimerTextSObjs
  /* 17D9C8 80134778 00000000 */       nop 
  /* 17D9CC 8013477C 1000005C */         b .L801348F0
  /* 17D9D0 80134780 00000000 */       nop 
  /* 17D9D4 80134784 8CE90000 */        lw $t1, ($a3)
  .L80134788:
  /* 17D9D8 80134788 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 17D9DC 8013478C 14C90058 */       bne $a2, $t1, .L801348F0
  /* 17D9E0 80134790 00000000 */       nop 
  /* 17D9E4 80134794 44816000 */      mtc1 $at, $f12 # 126.0 to cop1
  /* 17D9E8 80134798 0C04C93F */       jal gmStageClearMakeTimerTextSObjs
  /* 17D9EC 8013479C 00000000 */       nop 
  /* 17D9F0 801347A0 10000053 */         b .L801348F0
  /* 17D9F4 801347A4 00000000 */       nop 
  .L801347A8:
  /* 17D9F8 801347A8 144A0013 */       bne $v0, $t2, .L801347F8
  /* 17D9FC 801347AC 246D0032 */     addiu $t5, $v1, 0x32
  /* 17DA00 801347B0 8CAB0000 */        lw $t3, ($a1)
  /* 17DA04 801347B4 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17DA08 801347B8 548B0007 */      bnel $a0, $t3, .L801347D8
  /* 17DA0C 801347BC 8CEC0000 */        lw $t4, ($a3)
  /* 17DA10 801347C0 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17DA14 801347C4 0C04C98F */       jal gmStageClearMakeTimerDigitSObjs
  /* 17DA18 801347C8 00000000 */       nop 
  /* 17DA1C 801347CC 10000048 */         b .L801348F0
  /* 17DA20 801347D0 00000000 */       nop 
  /* 17DA24 801347D4 8CEC0000 */        lw $t4, ($a3)
  .L801347D8:
  /* 17DA28 801347D8 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 17DA2C 801347DC 14CC0044 */       bne $a2, $t4, .L801348F0
  /* 17DA30 801347E0 00000000 */       nop 
  /* 17DA34 801347E4 44816000 */      mtc1 $at, $f12 # 126.0 to cop1
  /* 17DA38 801347E8 0C04C98F */       jal gmStageClearMakeTimerDigitSObjs
  /* 17DA3C 801347EC 00000000 */       nop 
  /* 17DA40 801347F0 1000003F */         b .L801348F0
  /* 17DA44 801347F4 00000000 */       nop 
  .L801347F8:
  /* 17DA48 801347F8 144D001F */       bne $v0, $t5, .L80134878
  /* 17DA4C 801347FC 246A0046 */     addiu $t2, $v1, 0x46
  /* 17DA50 80134800 8CAE0000 */        lw $t6, ($a1)
  /* 17DA54 80134804 148E000D */       bne $a0, $t6, .L8013483C
  /* 17DA58 80134808 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17DA5C 8013480C 0C0026A1 */       jal omEjectGObjCommon
  /* 17DA60 80134810 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17DA64 80134814 3C0142BC */       lui $at, (0x42BC0000 >> 16) # 94.0
  /* 17DA68 80134818 44816000 */      mtc1 $at, $f12 # 94.0 to cop1
  /* 17DA6C 8013481C 0C04C9F5 */       jal gmStageClearGetAppendTotalTimeScore
  /* 17DA70 80134820 00000000 */       nop 
  /* 17DA74 80134824 3C038013 */       lui $v1, %hi(sGmStageClearScoreTotal)
  /* 17DA78 80134828 246352E8 */     addiu $v1, $v1, %lo(sGmStageClearScoreTotal)
  /* 17DA7C 8013482C 8C6F0000 */        lw $t7, ($v1) # sGmStageClearScoreTotal + 0
  /* 17DA80 80134830 01E2C021 */      addu $t8, $t7, $v0
  /* 17DA84 80134834 1000002E */         b .L801348F0
  /* 17DA88 80134838 AC780000 */        sw $t8, ($v1) # sGmStageClearScoreTotal + 0
  .L8013483C:
  /* 17DA8C 8013483C 8CF90000 */        lw $t9, ($a3)
  /* 17DA90 80134840 14D9002B */       bne $a2, $t9, .L801348F0
  /* 17DA94 80134844 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17DA98 80134848 0C0026A1 */       jal omEjectGObjCommon
  /* 17DA9C 8013484C 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17DAA0 80134850 3C0142FC */       lui $at, (0x42FC0000 >> 16) # 126.0
  /* 17DAA4 80134854 44816000 */      mtc1 $at, $f12 # 126.0 to cop1
  /* 17DAA8 80134858 0C04C9F5 */       jal gmStageClearGetAppendTotalTimeScore
  /* 17DAAC 8013485C 00000000 */       nop 
  /* 17DAB0 80134860 3C038013 */       lui $v1, %hi(sGmStageClearScoreTotal)
  /* 17DAB4 80134864 246352E8 */     addiu $v1, $v1, %lo(sGmStageClearScoreTotal)
  /* 17DAB8 80134868 8C680000 */        lw $t0, ($v1) # sGmStageClearScoreTotal + 0
  /* 17DABC 8013486C 01024821 */      addu $t1, $t0, $v0
  /* 17DAC0 80134870 1000001F */         b .L801348F0
  /* 17DAC4 80134874 AC690000 */        sw $t1, ($v1) # sGmStageClearScoreTotal + 0
  .L80134878:
  /* 17DAC8 80134878 144A001D */       bne $v0, $t2, .L801348F0
  /* 17DACC 8013487C 00000000 */       nop 
  /* 17DAD0 80134880 8CEB0000 */        lw $t3, ($a3)
  /* 17DAD4 80134884 10CB0003 */       beq $a2, $t3, .L80134894
  /* 17DAD8 80134888 00000000 */       nop 
  /* 17DADC 8013488C 8CAC0000 */        lw $t4, ($a1)
  /* 17DAE0 80134890 148C0005 */       bne $a0, $t4, .L801348A8
  .L80134894:
  /* 17DAE4 80134894 3C048013 */       lui $a0, %hi(sGmStageClearScoreTextGObj)
  /* 17DAE8 80134898 0C0026A1 */       jal omEjectGObjCommon
  /* 17DAEC 8013489C 8C845310 */        lw $a0, %lo(sGmStageClearScoreTextGObj)($a0)
  /* 17DAF0 801348A0 0C04CFC0 */       jal func_ovl56_80133F00
  /* 17DAF4 801348A4 00000000 */       nop 
  .L801348A8:
  /* 17DAF8 801348A8 3C0D8013 */       lui $t5, %hi(D_ovl56_801352D8)
  /* 17DAFC 801348AC 8DAD52D8 */        lw $t5, %lo(D_ovl56_801352D8)($t5)
  /* 17DB00 801348B0 3C038013 */       lui $v1, %hi(D_ovl56_80135348)
  /* 17DB04 801348B4 24635348 */     addiu $v1, $v1, %lo(D_ovl56_80135348)
  /* 17DB08 801348B8 11A0000A */      beqz $t5, .L801348E4
  /* 17DB0C 801348BC 3C048013 */       lui $a0, %hi(D_ovl56_80135344)
  /* 17DB10 801348C0 3C0E8013 */       lui $t6, %hi(D_ovl56_801352CC)
  /* 17DB14 801348C4 8DCE52CC */        lw $t6, %lo(D_ovl56_801352CC)($t6)
  /* 17DB18 801348C8 24845344 */     addiu $a0, $a0, %lo(D_ovl56_80135344)
  /* 17DB1C 801348CC 3C018013 */       lui $at, %hi(D_ovl56_80135340)
  /* 17DB20 801348D0 25CF000A */     addiu $t7, $t6, 0xa
  /* 17DB24 801348D4 AC6F0000 */        sw $t7, ($v1) # D_ovl56_80135348 + 0
  /* 17DB28 801348D8 AC8F0000 */        sw $t7, ($a0) # D_ovl56_80135344 + 0
  /* 17DB2C 801348DC 10000004 */         b .L801348F0
  /* 17DB30 801348E0 AC2F5340 */        sw $t7, %lo(D_ovl56_80135340)($at)
  .L801348E4:
  /* 17DB34 801348E4 24080001 */     addiu $t0, $zero, 1
  /* 17DB38 801348E8 3C018013 */       lui $at, %hi(D_ovl56_8013533C)
  /* 17DB3C 801348EC AC28533C */        sw $t0, %lo(D_ovl56_8013533C)($at)
  .L801348F0:
  /* 17DB40 801348F0 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17DB44 801348F4 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  /* 17DB48 801348F8 10400035 */      beqz $v0, .L801349D0
  /* 17DB4C 801348FC 3C048013 */       lui $a0, %hi(sGmStageClearBonusTextGObj)
  /* 17DB50 80134900 8C845314 */        lw $a0, %lo(sGmStageClearBonusTextGObj)($a0)
  /* 17DB54 80134904 3C098013 */       lui $t1, %hi(D_ovl56_801352CC)
  /* 17DB58 80134908 3C0A8013 */       lui $t2, %hi(D_ovl56_80135340)
  /* 17DB5C 8013490C 10800030 */      beqz $a0, .L801349D0
  /* 17DB60 80134910 00000000 */       nop 
  /* 17DB64 80134914 8D2952CC */        lw $t1, %lo(D_ovl56_801352CC)($t1)
  /* 17DB68 80134918 8D4A5340 */        lw $t2, %lo(D_ovl56_80135340)($t2)
  /* 17DB6C 8013491C 152A002C */       bne $t1, $t2, .L801349D0
  /* 17DB70 80134920 00000000 */       nop 
  /* 17DB74 80134924 0C0026A1 */       jal omEjectGObjCommon
  /* 17DB78 80134928 00000000 */       nop 
  /* 17DB7C 8013492C 3C048013 */       lui $a0, %hi(sGmStageClearTargetGObj)
  /* 17DB80 80134930 8C845318 */        lw $a0, %lo(sGmStageClearTargetGObj)($a0)
  /* 17DB84 80134934 3C018013 */       lui $at, %hi(sGmStageClearBonusTextGObj)
  /* 17DB88 80134938 AC205314 */        sw $zero, %lo(sGmStageClearBonusTextGObj)($at)
  /* 17DB8C 8013493C 10800013 */      beqz $a0, .L8013498C
  /* 17DB90 80134940 00000000 */       nop 
  /* 17DB94 80134944 0C0026A1 */       jal omEjectGObjCommon
  /* 17DB98 80134948 00000000 */       nop 
  /* 17DB9C 8013494C 3C018013 */       lui $at, %hi(sGmStageClearTargetGObj)
  /* 17DBA0 80134950 3C028013 */       lui $v0, %hi(sGmStageClearBonusObjectiveGObj)
  /* 17DBA4 80134954 AC205318 */        sw $zero, %lo(sGmStageClearTargetGObj)($at)
  /* 17DBA8 80134958 24425378 */     addiu $v0, $v0, %lo(sGmStageClearBonusObjectiveGObj)
  /* 17DBAC 8013495C 8C440000 */        lw $a0, ($v0) # sGmStageClearBonusObjectiveGObj + 0
  .L80134960:
  /* 17DBB0 80134960 10800005 */      beqz $a0, .L80134978
  /* 17DBB4 80134964 00000000 */       nop 
  /* 17DBB8 80134968 0C0026A1 */       jal omEjectGObjCommon
  /* 17DBBC 8013496C AFA2001C */        sw $v0, 0x1c($sp)
  /* 17DBC0 80134970 8FA2001C */        lw $v0, 0x1c($sp)
  /* 17DBC4 80134974 AC400000 */        sw $zero, ($v0)
  .L80134978:
  /* 17DBC8 80134978 3C0B8013 */       lui $t3, %hi(D_ovl56_801353A0)
  /* 17DBCC 8013497C 256B53A0 */     addiu $t3, $t3, %lo(D_ovl56_801353A0)
  /* 17DBD0 80134980 24420004 */     addiu $v0, $v0, 4
  /* 17DBD4 80134984 544BFFF6 */      bnel $v0, $t3, .L80134960
  /* 17DBD8 80134988 8C440000 */        lw $a0, ($v0)
  .L8013498C:
  /* 17DBDC 8013498C 3C048013 */       lui $a0, %hi(sGmStageClearTimerTextGObj)
  /* 17DBE0 80134990 8C8452F8 */        lw $a0, %lo(sGmStageClearTimerTextGObj)($a0)
  /* 17DBE4 80134994 1080000A */      beqz $a0, .L801349C0
  /* 17DBE8 80134998 00000000 */       nop 
  /* 17DBEC 8013499C 0C0026A1 */       jal omEjectGObjCommon
  /* 17DBF0 801349A0 00000000 */       nop 
  /* 17DBF4 801349A4 3C018013 */       lui $at, %hi(sGmStageClearTimerTextGObj)
  /* 17DBF8 801349A8 3C048013 */       lui $a0, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17DBFC 801349AC AC2052F8 */        sw $zero, %lo(sGmStageClearTimerTextGObj)($at)
  /* 17DC00 801349B0 0C0026A1 */       jal omEjectGObjCommon
  /* 17DC04 801349B4 8C8452FC */        lw $a0, %lo(sGmStageClearTimerMultiplierGObj)($a0)
  /* 17DC08 801349B8 3C018013 */       lui $at, %hi(sGmStageClearTimerMultiplierGObj)
  /* 17DC0C 801349BC AC2052FC */        sw $zero, %lo(sGmStageClearTimerMultiplierGObj)($at)
  .L801349C0:
  /* 17DC10 801349C0 0C04CE28 */       jal func_ovl56_801338A0
  /* 17DC14 801349C4 00000000 */       nop 
  /* 17DC18 801349C8 3C028013 */       lui $v0, %hi(D_ovl56_801352D8)
  /* 17DC1C 801349CC 8C4252D8 */        lw $v0, %lo(D_ovl56_801352D8)($v0)
  .L801349D0:
  /* 17DC20 801349D0 50400004 */      beql $v0, $zero, .L801349E4
  /* 17DC24 801349D4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17DC28 801349D8 0C04CFD4 */       jal func_ovl56_80133F50
  /* 17DC2C 801349DC 00000000 */       nop 
  /* 17DC30 801349E0 8FBF0014 */        lw $ra, 0x14($sp)
  .L801349E4:
  /* 17DC34 801349E4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 17DC38 801349E8 03E00008 */        jr $ra
  /* 17DC3C 801349EC 00000000 */       nop 

glabel func_ovl56_801349F0
  /* 17DC40 801349F0 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17DC44 801349F4 246352CC */     addiu $v1, $v1, %lo(D_ovl56_801352CC)
  /* 17DC48 801349F8 8C6E0000 */        lw $t6, ($v1) # D_ovl56_801352CC + 0
  /* 17DC4C 801349FC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17DC50 80134A00 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17DC54 80134A04 25CF0001 */     addiu $t7, $t6, 1
  /* 17DC58 80134A08 2DE1000A */     sltiu $at, $t7, 0xa
  /* 17DC5C 80134A0C AFA40018 */        sw $a0, 0x18($sp)
  /* 17DC60 80134A10 14200034 */      bnez $at, .L80134AE4
  /* 17DC64 80134A14 AC6F0000 */        sw $t7, ($v1) # D_ovl56_801352CC + 0
  /* 17DC68 80134A18 0C0E41DB */       jal func_ovl1_8039076C
  /* 17DC6C 80134A1C 3404D000 */       ori $a0, $zero, 0xd000
  /* 17DC70 80134A20 3C038013 */       lui $v1, %hi(D_ovl56_801352CC)
  /* 17DC74 80134A24 1040001A */      beqz $v0, .L80134A90
  /* 17DC78 80134A28 246352CC */     addiu $v1, $v1, %lo(D_ovl56_801352CC)
  /* 17DC7C 80134A2C 3C198013 */       lui $t9, %hi(D_ovl56_8013533C)
  /* 17DC80 80134A30 8F39533C */        lw $t9, %lo(D_ovl56_8013533C)($t9)
  /* 17DC84 80134A34 3C02800A */       lui $v0, %hi(gSceneData)
  /* 17DC88 80134A38 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17DC8C 80134A3C 1320000A */      beqz $t9, .L80134A68
  /* 17DC90 80134A40 3C0A8013 */       lui $t2, 0x8013
  /* 17DC94 80134A44 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 17DC98 80134A48 24090001 */     addiu $t1, $zero, 1
  /* 17DC9C 80134A4C A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 17DCA0 80134A50 0C04CFBB */       jal func_ovl56_80133EEC
  /* 17DCA4 80134A54 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  /* 17DCA8 80134A58 0C00171D */       jal func_80005C74
  /* 17DCAC 80134A5C 00000000 */       nop 
  /* 17DCB0 80134A60 1000000B */         b .L80134A90
  /* 17DCB4 80134A64 00000000 */       nop 
  .L80134A68:
  /* 17DCB8 80134A68 8D4A5334 */        lw $t2, 0x5334($t2)
  /* 17DCBC 80134A6C 3C0B8013 */       lui $t3, %hi(D_ovl56_80135338)
  /* 17DCC0 80134A70 11400007 */      beqz $t2, .L80134A90
  /* 17DCC4 80134A74 00000000 */       nop 
  /* 17DCC8 80134A78 8D6B5338 */        lw $t3, %lo(D_ovl56_80135338)($t3)
  /* 17DCCC 80134A7C 15600004 */      bnez $t3, .L80134A90
  /* 17DCD0 80134A80 00000000 */       nop 
  /* 17DCD4 80134A84 8C6C0000 */        lw $t4, ($v1)
  /* 17DCD8 80134A88 3C018013 */       lui $at, %hi(D_ovl56_80135340)
  /* 17DCDC 80134A8C AC2C5340 */        sw $t4, %lo(D_ovl56_80135340)($at)
  .L80134A90:
  /* 17DCE0 80134A90 3C028013 */       lui $v0, %hi(sGmStageClearKind)
  /* 17DCE4 80134A94 8C4252D4 */        lw $v0, %lo(sGmStageClearKind)($v0)
  /* 17DCE8 80134A98 24010001 */     addiu $at, $zero, 1
  /* 17DCEC 80134A9C 1040000B */      beqz $v0, .L80134ACC
  /* 17DCF0 80134AA0 00000000 */       nop 
  /* 17DCF4 80134AA4 10410005 */       beq $v0, $at, .L80134ABC
  /* 17DCF8 80134AA8 24010002 */     addiu $at, $zero, 2
  /* 17DCFC 80134AAC 1041000B */       beq $v0, $at, .L80134ADC
  /* 17DD00 80134AB0 00000000 */       nop 
  /* 17DD04 80134AB4 1000000C */         b .L80134AE8
  /* 17DD08 80134AB8 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134ABC:
  /* 17DD0C 80134ABC 0C04D01F */       jal func_ovl56_8013407C
  /* 17DD10 80134AC0 00000000 */       nop 
  /* 17DD14 80134AC4 10000008 */         b .L80134AE8
  /* 17DD18 80134AC8 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134ACC:
  /* 17DD1C 80134ACC 0C04D0D0 */       jal func_ovl56_80134340
  /* 17DD20 80134AD0 00000000 */       nop 
  /* 17DD24 80134AD4 10000004 */         b .L80134AE8
  /* 17DD28 80134AD8 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134ADC:
  /* 17DD2C 80134ADC 0C04D181 */       jal func_ovl56_80134604
  /* 17DD30 80134AE0 00000000 */       nop 
  .L80134AE4:
  /* 17DD34 80134AE4 8FBF0014 */        lw $ra, 0x14($sp)
  .L80134AE8:
  /* 17DD38 80134AE8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17DD3C 80134AEC 03E00008 */        jr $ra
  /* 17DD40 80134AF0 00000000 */       nop 

glabel func_ovl56_80134AF4
  /* 17DD44 80134AF4 3C0E8013 */       lui $t6, %hi(D_ovl56_801355A0)
  /* 17DD48 80134AF8 8DCE55A0 */        lw $t6, %lo(D_ovl56_801355A0)($t6)
  /* 17DD4C 80134AFC 3C0F0002 */       lui $t7, %hi(D_NF_0002074C)
  /* 17DD50 80134B00 3C028004 */       lui $v0, %hi(D_80044FA8)
  /* 17DD54 80134B04 01EE7821 */      addu $t7, $t7, $t6
  /* 17DD58 80134B08 8C424FA8 */        lw $v0, %lo(D_80044FA8)($v0)
  /* 17DD5C 80134B0C 8DEF074C */        lw $t7, %lo(D_NF_0002074C)($t7)
  /* 17DD60 80134B10 00002025 */        or $a0, $zero, $zero
  /* 17DD64 80134B14 240C00DC */     addiu $t4, $zero, 0xdc
  /* 17DD68 80134B18 240B0006 */     addiu $t3, $zero, 6
  /* 17DD6C 80134B1C 240A004B */     addiu $t2, $zero, 0x4b
  /* 17DD70 80134B20 24421914 */     addiu $v0, $v0, 0x1914
  /* 17DD74 80134B24 8DE30008 */        lw $v1, 8($t7)
  .L80134B28:
  /* 17DD78 80134B28 00402825 */        or $a1, $v0, $zero
  /* 17DD7C 80134B2C 30890001 */      andi $t1, $a0, 1
  /* 17DD80 80134B30 24420008 */     addiu $v0, $v0, 8
  /* 17DD84 80134B34 8C47FFF8 */        lw $a3, -8($v0)
  /* 17DD88 80134B38 11200005 */      beqz $t1, .L80134B50
  /* 17DD8C 80134B3C 8C48FFFC */        lw $t0, -4($v0)
  /* 17DD90 80134B40 AC680000 */        sw $t0, ($v1)
  /* 17DD94 80134B44 AC670004 */        sw $a3, 4($v1)
  /* 17DD98 80134B48 10000004 */         b .L80134B5C
  /* 17DD9C 80134B4C 24630008 */     addiu $v1, $v1, 8
  .L80134B50:
  /* 17DDA0 80134B50 AC670000 */        sw $a3, ($v1)
  /* 17DDA4 80134B54 AC680004 */        sw $t0, 4($v1)
  /* 17DDA8 80134B58 24630008 */     addiu $v1, $v1, 8
  .L80134B5C:
  /* 17DDAC 80134B5C 8C470000 */        lw $a3, ($v0)
  /* 17DDB0 80134B60 8C480004 */        lw $t0, 4($v0)
  /* 17DDB4 80134B64 11200005 */      beqz $t1, .L80134B7C
  /* 17DDB8 80134B68 24420008 */     addiu $v0, $v0, 8
  /* 17DDBC 80134B6C AC680000 */        sw $t0, ($v1)
  /* 17DDC0 80134B70 AC670004 */        sw $a3, 4($v1)
  /* 17DDC4 80134B74 10000004 */         b .L80134B88
  /* 17DDC8 80134B78 24630008 */     addiu $v1, $v1, 8
  .L80134B7C:
  /* 17DDCC 80134B7C AC670000 */        sw $a3, ($v1)
  /* 17DDD0 80134B80 AC680004 */        sw $t0, 4($v1)
  /* 17DDD4 80134B84 24630008 */     addiu $v1, $v1, 8
  .L80134B88:
  /* 17DDD8 80134B88 8C470000 */        lw $a3, ($v0)
  /* 17DDDC 80134B8C 8C480004 */        lw $t0, 4($v0)
  /* 17DDE0 80134B90 11200005 */      beqz $t1, .L80134BA8
  /* 17DDE4 80134B94 24420008 */     addiu $v0, $v0, 8
  /* 17DDE8 80134B98 AC680000 */        sw $t0, ($v1)
  /* 17DDEC 80134B9C AC670004 */        sw $a3, 4($v1)
  /* 17DDF0 80134BA0 10000004 */         b .L80134BB4
  /* 17DDF4 80134BA4 24630008 */     addiu $v1, $v1, 8
  .L80134BA8:
  /* 17DDF8 80134BA8 AC670000 */        sw $a3, ($v1)
  /* 17DDFC 80134BAC AC680004 */        sw $t0, 4($v1)
  /* 17DE00 80134BB0 24630008 */     addiu $v1, $v1, 8
  .L80134BB4:
  /* 17DE04 80134BB4 24060003 */     addiu $a2, $zero, 3
  /* 17DE08 80134BB8 8C470000 */        lw $a3, ($v0)
  .L80134BBC:
  /* 17DE0C 80134BBC 8C480004 */        lw $t0, 4($v0)
  /* 17DE10 80134BC0 11200005 */      beqz $t1, .L80134BD8
  /* 17DE14 80134BC4 24420008 */     addiu $v0, $v0, 8
  /* 17DE18 80134BC8 AC680000 */        sw $t0, ($v1)
  /* 17DE1C 80134BCC AC670004 */        sw $a3, 4($v1)
  /* 17DE20 80134BD0 10000004 */         b .L80134BE4
  /* 17DE24 80134BD4 24630008 */     addiu $v1, $v1, 8
  .L80134BD8:
  /* 17DE28 80134BD8 AC670000 */        sw $a3, ($v1)
  /* 17DE2C 80134BDC AC680004 */        sw $t0, 4($v1)
  /* 17DE30 80134BE0 24630008 */     addiu $v1, $v1, 8
  .L80134BE4:
  /* 17DE34 80134BE4 8C470000 */        lw $a3, ($v0)
  /* 17DE38 80134BE8 8C480004 */        lw $t0, 4($v0)
  /* 17DE3C 80134BEC 11200005 */      beqz $t1, .L80134C04
  /* 17DE40 80134BF0 24420008 */     addiu $v0, $v0, 8
  /* 17DE44 80134BF4 AC680000 */        sw $t0, ($v1)
  /* 17DE48 80134BF8 AC670004 */        sw $a3, 4($v1)
  /* 17DE4C 80134BFC 10000004 */         b .L80134C10
  /* 17DE50 80134C00 24630008 */     addiu $v1, $v1, 8
  .L80134C04:
  /* 17DE54 80134C04 AC670000 */        sw $a3, ($v1)
  /* 17DE58 80134C08 AC680004 */        sw $t0, 4($v1)
  /* 17DE5C 80134C0C 24630008 */     addiu $v1, $v1, 8
  .L80134C10:
  /* 17DE60 80134C10 8C470000 */        lw $a3, ($v0)
  /* 17DE64 80134C14 8C480004 */        lw $t0, 4($v0)
  /* 17DE68 80134C18 11200005 */      beqz $t1, .L80134C30
  /* 17DE6C 80134C1C 24420008 */     addiu $v0, $v0, 8
  /* 17DE70 80134C20 AC680000 */        sw $t0, ($v1)
  /* 17DE74 80134C24 AC670004 */        sw $a3, 4($v1)
  /* 17DE78 80134C28 10000004 */         b .L80134C3C
  /* 17DE7C 80134C2C 24630008 */     addiu $v1, $v1, 8
  .L80134C30:
  /* 17DE80 80134C30 AC670000 */        sw $a3, ($v1)
  /* 17DE84 80134C34 AC680004 */        sw $t0, 4($v1)
  /* 17DE88 80134C38 24630008 */     addiu $v1, $v1, 8
  .L80134C3C:
  /* 17DE8C 80134C3C 8C470000 */        lw $a3, ($v0)
  /* 17DE90 80134C40 8C480004 */        lw $t0, 4($v0)
  /* 17DE94 80134C44 11200005 */      beqz $t1, .L80134C5C
  /* 17DE98 80134C48 24420008 */     addiu $v0, $v0, 8
  /* 17DE9C 80134C4C AC680000 */        sw $t0, ($v1)
  /* 17DEA0 80134C50 AC670004 */        sw $a3, 4($v1)
  /* 17DEA4 80134C54 10000004 */         b .L80134C68
  /* 17DEA8 80134C58 24630008 */     addiu $v1, $v1, 8
  .L80134C5C:
  /* 17DEAC 80134C5C AC670000 */        sw $a3, ($v1)
  /* 17DEB0 80134C60 AC680004 */        sw $t0, 4($v1)
  /* 17DEB4 80134C64 24630008 */     addiu $v1, $v1, 8
  .L80134C68:
  /* 17DEB8 80134C68 24C60004 */     addiu $a2, $a2, 4
  /* 17DEBC 80134C6C 54CAFFD3 */      bnel $a2, $t2, .L80134BBC
  /* 17DEC0 80134C70 8C470000 */        lw $a3, ($v0)
  /* 17DEC4 80134C74 24860001 */     addiu $a2, $a0, 1
  /* 17DEC8 80134C78 00CB001A */       div $zero, $a2, $t3
  /* 17DECC 80134C7C 0000C010 */      mfhi $t8
  /* 17DED0 80134C80 24A20280 */     addiu $v0, $a1, 0x280
  /* 17DED4 80134C84 15600002 */      bnez $t3, .L80134C90
  /* 17DED8 80134C88 00000000 */       nop 
  /* 17DEDC 80134C8C 0007000D */     break 7
  .L80134C90:
  /* 17DEE0 80134C90 2401FFFF */     addiu $at, $zero, -1
  /* 17DEE4 80134C94 15610004 */       bne $t3, $at, .L80134CA8
  /* 17DEE8 80134C98 3C018000 */       lui $at, 0x8000
  /* 17DEEC 80134C9C 14C10002 */       bne $a2, $at, .L80134CA8
  /* 17DEF0 80134CA0 00000000 */       nop 
  /* 17DEF4 80134CA4 0006000D */     break 6
  .L80134CA8:
  /* 17DEF8 80134CA8 17000002 */      bnez $t8, .L80134CB4
  /* 17DEFC 80134CAC 00000000 */       nop 
  /* 17DF00 80134CB0 24630008 */     addiu $v1, $v1, 8
  .L80134CB4:
  /* 17DF04 80134CB4 14CCFF9C */       bne $a2, $t4, .L80134B28
  /* 17DF08 80134CB8 00C02025 */        or $a0, $a2, $zero
  /* 17DF0C 80134CBC 03E00008 */        jr $ra
  /* 17DF10 80134CC0 00000000 */       nop 

glabel func_ovl56_80134CC4
  /* 17DF14 80134CC4 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 17DF18 80134CC8 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 17DF1C 80134CCC 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 17DF20 80134CD0 3C188013 */       lui $t8, %hi(D_ovl56_801353D0)
  /* 17DF24 80134CD4 3C088013 */       lui $t0, %hi(D_ovl56_80135550)
  /* 17DF28 80134CD8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 17DF2C 80134CDC 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 17DF30 80134CE0 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 17DF34 80134CE4 271853D0 */     addiu $t8, $t8, %lo(D_ovl56_801353D0)
  /* 17DF38 80134CE8 24190030 */     addiu $t9, $zero, 0x30
  /* 17DF3C 80134CEC 25085550 */     addiu $t0, $t0, %lo(D_ovl56_80135550)
  /* 17DF40 80134CF0 24090007 */     addiu $t1, $zero, 7
  /* 17DF44 80134CF4 AFAE002C */        sw $t6, 0x2c($sp)
  /* 17DF48 80134CF8 AFAF0030 */        sw $t7, 0x30($sp)
  /* 17DF4C 80134CFC AFA00034 */        sw $zero, 0x34($sp)
  /* 17DF50 80134D00 AFA00038 */        sw $zero, 0x38($sp)
  /* 17DF54 80134D04 AFB8003C */        sw $t8, 0x3c($sp)
  /* 17DF58 80134D08 AFB90040 */        sw $t9, 0x40($sp)
  /* 17DF5C 80134D0C AFA80044 */        sw $t0, 0x44($sp)
  /* 17DF60 80134D10 AFA90048 */        sw $t1, 0x48($sp)
  /* 17DF64 80134D14 0C0337DE */       jal rdManagerInitSetup
  /* 17DF68 80134D18 27A4002C */     addiu $a0, $sp, 0x2c
  /* 17DF6C 80134D1C 3C048013 */       lui $a0, %hi(D_ovl56_80134EE0)
  /* 17DF70 80134D20 24844EE0 */     addiu $a0, $a0, %lo(D_ovl56_80134EE0)
  /* 17DF74 80134D24 0C0337BB */       jal rdManagerGetAllocSize
  /* 17DF78 80134D28 24050007 */     addiu $a1, $zero, 7
  /* 17DF7C 80134D2C 00402025 */        or $a0, $v0, $zero
  /* 17DF80 80134D30 0C001260 */       jal gsMemoryAlloc
  /* 17DF84 80134D34 24050010 */     addiu $a1, $zero, 0x10
  /* 17DF88 80134D38 3C048013 */       lui $a0, %hi(D_ovl56_80134EE0)
  /* 17DF8C 80134D3C 3C068013 */       lui $a2, %hi(sGmStageClearFiles)
  /* 17DF90 80134D40 24C65588 */     addiu $a2, $a2, %lo(sGmStageClearFiles)
  /* 17DF94 80134D44 24844EE0 */     addiu $a0, $a0, %lo(D_ovl56_80134EE0)
  /* 17DF98 80134D48 24050007 */     addiu $a1, $zero, 7
  /* 17DF9C 80134D4C 0C033781 */       jal rdManagerLoadFiles
  /* 17DFA0 80134D50 00403825 */        or $a3, $v0, $zero
  /* 17DFA4 80134D54 3C058013 */       lui $a1, %hi(func_ovl56_801349F0)
  /* 17DFA8 80134D58 24A549F0 */     addiu $a1, $a1, %lo(func_ovl56_801349F0)
  /* 17DFAC 80134D5C 00002025 */        or $a0, $zero, $zero
  /* 17DFB0 80134D60 00003025 */        or $a2, $zero, $zero
  /* 17DFB4 80134D64 0C00265A */       jal omMakeGObjCommon
  /* 17DFB8 80134D68 3C078000 */       lui $a3, 0x8000
  /* 17DFBC 80134D6C 0C04D2BD */       jal func_ovl56_80134AF4
  /* 17DFC0 80134D70 00000000 */       nop 
  /* 17DFC4 80134D74 00002025 */        or $a0, $zero, $zero
  /* 17DFC8 80134D78 3C058000 */       lui $a1, 0x8000
  /* 17DFCC 80134D7C 24060064 */     addiu $a2, $zero, 0x64
  /* 17DFD0 80134D80 00003825 */        or $a3, $zero, $zero
  /* 17DFD4 80134D84 0C002E7F */       jal func_8000B9FC
  /* 17DFD8 80134D88 AFA00010 */        sw $zero, 0x10($sp)
  /* 17DFDC 80134D8C 0C04CF22 */       jal func_ovl56_80133C88
  /* 17DFE0 80134D90 00000000 */       nop 
  /* 17DFE4 80134D94 0C04CED2 */       jal func_ovl56_80133B48
  /* 17DFE8 80134D98 00000000 */       nop 
  /* 17DFEC 80134D9C 0C04CEFA */       jal func_ovl56_80133BE8
  /* 17DFF0 80134DA0 00000000 */       nop 
  /* 17DFF4 80134DA4 0C04CEB0 */       jal func_ovl56_80133AC0
  /* 17DFF8 80134DA8 00000000 */       nop 
  /* 17DFFC 80134DAC 0C04C84F */       jal gmStageClearMakeTextSObjs
  /* 17E000 80134DB0 00000000 */       nop 
  /* 17E004 80134DB4 0C04C8FE */       jal gmStageClearMakeScoreSObjs
  /* 17E008 80134DB8 00000000 */       nop 
  /* 17E00C 80134DBC 3C028013 */       lui $v0, %hi(sGmStageClear1PGameStage)
  /* 17E010 80134DC0 8C4252EC */        lw $v0, %lo(sGmStageClear1PGameStage)($v0)
  /* 17E014 80134DC4 24010003 */     addiu $at, $zero, 3
  /* 17E018 80134DC8 3C0A800A */       lui $t2, 0x800a
  /* 17E01C 80134DCC 1041000D */       beq $v0, $at, .L80134E04
  /* 17E020 80134DD0 24010007 */     addiu $at, $zero, 7
  /* 17E024 80134DD4 1041000B */       beq $v0, $at, .L80134E04
  /* 17E028 80134DD8 2401000B */     addiu $at, $zero, 0xb
  /* 17E02C 80134DDC 10410016 */       beq $v0, $at, .L80134E38
  /* 17E030 80134DE0 3C0B800A */       lui $t3, 0x800a
  /* 17E034 80134DE4 2401000D */     addiu $at, $zero, 0xd
  /* 17E038 80134DE8 14410020 */       bne $v0, $at, .L80134E6C
  /* 17E03C 80134DEC 00002025 */        or $a0, $zero, $zero
  /* 17E040 80134DF0 00002025 */        or $a0, $zero, $zero
  /* 17E044 80134DF4 0C0082AD */       jal func_80020AB4
  /* 17E048 80134DF8 2405001D */     addiu $a1, $zero, 0x1d
  /* 17E04C 80134DFC 1000001E */         b .L80134E78
  /* 17E050 80134E00 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E04:
  /* 17E054 80134E04 914A4B08 */       lbu $t2, 0x4b08($t2)
  /* 17E058 80134E08 2401000A */     addiu $at, $zero, 0xa
  /* 17E05C 80134E0C 2405001C */     addiu $a1, $zero, 0x1c
  /* 17E060 80134E10 15410005 */       bne $t2, $at, .L80134E28
  /* 17E064 80134E14 00002025 */        or $a0, $zero, $zero
  /* 17E068 80134E18 0C0082AD */       jal func_80020AB4
  /* 17E06C 80134E1C 00002025 */        or $a0, $zero, $zero
  /* 17E070 80134E20 10000015 */         b .L80134E78
  /* 17E074 80134E24 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E28:
  /* 17E078 80134E28 0C0082AD */       jal func_80020AB4
  /* 17E07C 80134E2C 2405001E */     addiu $a1, $zero, 0x1e
  /* 17E080 80134E30 10000011 */         b .L80134E78
  /* 17E084 80134E34 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E38:
  /* 17E088 80134E38 8D6B4AEC */        lw $t3, 0x4aec($t3)
  /* 17E08C 80134E3C 2405001C */     addiu $a1, $zero, 0x1c
  /* 17E090 80134E40 00002025 */        or $a0, $zero, $zero
  /* 17E094 80134E44 11600005 */      beqz $t3, .L80134E5C
  /* 17E098 80134E48 00000000 */       nop 
  /* 17E09C 80134E4C 0C0082AD */       jal func_80020AB4
  /* 17E0A0 80134E50 00002025 */        or $a0, $zero, $zero
  /* 17E0A4 80134E54 10000008 */         b .L80134E78
  /* 17E0A8 80134E58 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E5C:
  /* 17E0AC 80134E5C 0C0082AD */       jal func_80020AB4
  /* 17E0B0 80134E60 2405001E */     addiu $a1, $zero, 0x1e
  /* 17E0B4 80134E64 10000004 */         b .L80134E78
  /* 17E0B8 80134E68 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E6C:
  /* 17E0BC 80134E6C 0C0082AD */       jal func_80020AB4
  /* 17E0C0 80134E70 2405001B */     addiu $a1, $zero, 0x1b
  /* 17E0C4 80134E74 8FBF001C */        lw $ra, 0x1c($sp)
  .L80134E78:
  /* 17E0C8 80134E78 27BD0050 */     addiu $sp, $sp, 0x50
  /* 17E0CC 80134E7C 03E00008 */        jr $ra
  /* 17E0D0 80134E80 00000000 */       nop 

glabel overlay_set50_51_entry
  /* 17E0D4 80134E84 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 17E0D8 80134E88 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17E0DC 80134E8C 3C048013 */       lui $a0, %hi(D_ovl56_801351EC)
  /* 17E0E0 80134E90 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 17E0E4 80134E94 248451EC */     addiu $a0, $a0, %lo(D_ovl56_801351EC)
  /* 17E0E8 80134E98 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17E0EC 80134E9C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 17E0F0 80134EA0 0C001C09 */       jal func_80007024
  /* 17E0F4 80134EA4 AC8F000C */        sw $t7, 0xc($a0) # D_ovl56_801351EC + 12
  /* 17E0F8 80134EA8 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 17E0FC 80134EAC 3C198013 */       lui $t9, %hi(D_NF_801355B0)
  /* 17E100 80134EB0 3C048013 */       lui $a0, %hi(D_ovl56_80135208)
  /* 17E104 80134EB4 273955B0 */     addiu $t9, $t9, %lo(D_NF_801355B0)
  /* 17E108 80134EB8 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 17E10C 80134EBC 24845208 */     addiu $a0, $a0, %lo(D_ovl56_80135208)
  /* 17E110 80134EC0 03194023 */      subu $t0, $t8, $t9
  /* 17E114 80134EC4 0C001A0F */       jal func_8000683C
  /* 17E118 80134EC8 AC880010 */        sw $t0, 0x10($a0) # D_ovl56_80135208 + 16
  /* 17E11C 80134ECC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17E120 80134ED0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17E124 80134ED4 03E00008 */        jr $ra
  /* 17E128 80134ED8 00000000 */       nop 

  /* 17E12C 80134EDC 00000000 */       nop 
