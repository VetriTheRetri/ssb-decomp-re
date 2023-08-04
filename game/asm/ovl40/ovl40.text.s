.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E070

glabel func_ovl40_8018D0C0
  /* 16AC10 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16AC14 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 16AC18 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16AC1C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl40_8018E228)
  /* 16AC20 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl40_8018E3A8)
  /* 16AC24 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16AC28 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16AC2C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 16AC30 8018D0E0 2718E228 */     addiu $t8, $t8, %lo(D_ovl40_8018E228)
  /* 16AC34 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 16AC38 8018D0E8 2508E3A8 */     addiu $t0, $t0, %lo(D_ovl40_8018E3A8)
  /* 16AC3C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 16AC40 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 16AC44 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 16AC48 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16AC4C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 16AC50 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 16AC54 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 16AC58 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16AC5C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 16AC60 8018D110 0C0337DE */       jal rldm_initialize
  /* 16AC64 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 16AC68 8018D118 3C048019 */       lui $a0, %hi(D_ovl40_8018E0B0)
  /* 16AC6C 8018D11C 2484E0B0 */     addiu $a0, $a0, %lo(D_ovl40_8018E0B0)
  /* 16AC70 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 16AC74 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 16AC78 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16AC7C 8018D12C 0C001260 */       jal hal_alloc
  /* 16AC80 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 16AC84 8018D134 3C048019 */       lui $a0, %hi(D_ovl40_8018E0B0)
  /* 16AC88 8018D138 3C068019 */       lui $a2, %hi(D_ovl40_8018E3E0)
  /* 16AC8C 8018D13C 24C6E3E0 */     addiu $a2, $a2, %lo(D_ovl40_8018E3E0)
  /* 16AC90 8018D140 2484E0B0 */     addiu $a0, $a0, %lo(D_ovl40_8018E0B0)
  /* 16AC94 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 16AC98 8018D148 0C033781 */       jal rldm_load_files_into
  /* 16AC9C 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 16ACA0 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16ACA4 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16ACA8 8018D158 03E00008 */        jr $ra
  /* 16ACAC 8018D15C 00000000 */       nop 

glabel func_ovl40_8018D160
  /* 16ACB0 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 16ACB4 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 16ACB8 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 16ACBC 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 16ACC0 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 16ACC4 8018D174 37190001 */       ori $t9, $t8, 1
  /* 16ACC8 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 16ACCC 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 16ACD0 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 16ACD4 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 16ACD8 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 16ACDC 8018D18C 03E00008 */        jr $ra
  /* 16ACE0 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl40_8018D194
  /* 16ACE4 8018D194 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 16ACE8 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl40_8018E0B8)
  /* 16ACEC 8018D19C AFBF003C */        sw $ra, 0x3c($sp)
  /* 16ACF0 8018D1A0 AFB40038 */        sw $s4, 0x38($sp)
  /* 16ACF4 8018D1A4 AFB30034 */        sw $s3, 0x34($sp)
  /* 16ACF8 8018D1A8 AFB20030 */        sw $s2, 0x30($sp)
  /* 16ACFC 8018D1AC AFB1002C */        sw $s1, 0x2c($sp)
  /* 16AD00 8018D1B0 AFB00028 */        sw $s0, 0x28($sp)
  /* 16AD04 8018D1B4 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 16AD08 8018D1B8 25EFE0B8 */     addiu $t7, $t7, %lo(D_ovl40_8018E0B8)
  /* 16AD0C 8018D1BC 8DF90000 */        lw $t9, ($t7) # D_ovl40_8018E0B8 + 0
  /* 16AD10 8018D1C0 27AE0064 */     addiu $t6, $sp, 0x64
  /* 16AD14 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl40_8018E0B8 + 4
  /* 16AD18 8018D1C8 ADD90000 */        sw $t9, ($t6)
  /* 16AD1C 8018D1CC 8DF90008 */        lw $t9, 8($t7) # D_ovl40_8018E0B8 + 8
  /* 16AD20 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 16AD24 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl40_8018E0B8 + 12
  /* 16AD28 8018D1D8 ADD90008 */        sw $t9, 8($t6)
  /* 16AD2C 8018D1DC 8DF90010 */        lw $t9, 0x10($t7) # D_ovl40_8018E0B8 + 16
  /* 16AD30 8018D1E0 3C098019 */       lui $t1, %hi(D_ovl40_8018E0CC)
  /* 16AD34 8018D1E4 2529E0CC */     addiu $t1, $t1, %lo(D_ovl40_8018E0CC)
  /* 16AD38 8018D1E8 ADD8000C */        sw $t8, 0xc($t6)
  /* 16AD3C 8018D1EC ADD90010 */        sw $t9, 0x10($t6)
  /* 16AD40 8018D1F0 8D2A0004 */        lw $t2, 4($t1) # D_ovl40_8018E0CC + 4
  /* 16AD44 8018D1F4 8D2B0000 */        lw $t3, ($t1) # D_ovl40_8018E0CC + 0
  /* 16AD48 8018D1F8 27A80054 */     addiu $t0, $sp, 0x54
  /* 16AD4C 8018D1FC AD0A0004 */        sw $t2, 4($t0)
  /* 16AD50 8018D200 AD0B0000 */        sw $t3, ($t0)
  /* 16AD54 8018D204 8D2B0008 */        lw $t3, 8($t1) # D_ovl40_8018E0CC + 8
  /* 16AD58 8018D208 8D2A000C */        lw $t2, 0xc($t1) # D_ovl40_8018E0CC + 12
  /* 16AD5C 8018D20C 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 16AD60 8018D210 02003825 */        or $a3, $s0, $zero
  /* 16AD64 8018D214 00002025 */        or $a0, $zero, $zero
  /* 16AD68 8018D218 00002825 */        or $a1, $zero, $zero
  /* 16AD6C 8018D21C 24060011 */     addiu $a2, $zero, 0x11
  /* 16AD70 8018D220 AD0B0008 */        sw $t3, 8($t0)
  /* 16AD74 8018D224 0C00265A */       jal omMakeGObjCommon
  /* 16AD78 8018D228 AD0A000C */        sw $t2, 0xc($t0)
  /* 16AD7C 8018D22C 3C018019 */       lui $at, %hi(D_ovl40_8018E1CC)
  /* 16AD80 8018D230 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16AD84 8018D234 240CFFFF */     addiu $t4, $zero, -1
  /* 16AD88 8018D238 AC22E1CC */        sw $v0, %lo(D_ovl40_8018E1CC)($at)
  /* 16AD8C 8018D23C 0040A025 */        or $s4, $v0, $zero
  /* 16AD90 8018D240 AFAC0010 */        sw $t4, 0x10($sp)
  /* 16AD94 8018D244 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16AD98 8018D248 00402025 */        or $a0, $v0, $zero
  /* 16AD9C 8018D24C 2406001B */     addiu $a2, $zero, 0x1b
  /* 16ADA0 8018D250 0C00277D */       jal func_80009DF4
  /* 16ADA4 8018D254 02003825 */        or $a3, $s0, $zero
  /* 16ADA8 8018D258 8FAD0064 */        lw $t5, 0x64($sp)
  /* 16ADAC 8018D25C 27B00064 */     addiu $s0, $sp, 0x64
  /* 16ADB0 8018D260 27B10054 */     addiu $s1, $sp, 0x54
  /* 16ADB4 8018D264 11A0001A */      beqz $t5, .L8018D2D0
  /* 16ADB8 8018D268 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 16ADBC 8018D26C 3C128019 */       lui $s2, %hi(D_ovl40_8018E3E0)
  /* 16ADC0 8018D270 4481A000 */      mtc1 $at, $f20 # 100.0 to cop1
  /* 16ADC4 8018D274 2652E3E0 */     addiu $s2, $s2, %lo(D_ovl40_8018E3E0)
  /* 16ADC8 8018D278 8E020000 */        lw $v0, %lo(D_NF_80000000)($s0)
  /* 16ADCC 8018D27C 2413FFDF */     addiu $s3, $zero, -0x21
  /* 16ADD0 8018D280 8E4F0000 */        lw $t7, ($s2) # D_ovl40_8018E3E0 + 0
  .L8018D284:
  /* 16ADD4 8018D284 02802025 */        or $a0, $s4, $zero
  /* 16ADD8 8018D288 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16ADDC 8018D28C 004F2821 */      addu $a1, $v0, $t7
  /* 16ADE0 8018D290 94580024 */       lhu $t8, 0x24($v0)
  /* 16ADE4 8018D294 00402025 */        or $a0, $v0, $zero
  /* 16ADE8 8018D298 03134024 */       and $t0, $t8, $s3
  /* 16ADEC 8018D29C A4480024 */        sh $t0, 0x24($v0)
  /* 16ADF0 8018D2A0 35090001 */       ori $t1, $t0, 1
  /* 16ADF4 8018D2A4 A4490024 */        sh $t1, 0x24($v0)
  /* 16ADF8 8018D2A8 C6240000 */      lwc1 $f4, ($s1)
  /* 16ADFC 8018D2AC E454005C */      swc1 $f20, 0x5c($v0)
  /* 16AE00 8018D2B0 46142180 */     add.s $f6, $f4, $f20
  /* 16AE04 8018D2B4 0C063458 */       jal func_ovl40_8018D160
  /* 16AE08 8018D2B8 E4460058 */      swc1 $f6, 0x58($v0)
  /* 16AE0C 8018D2BC 8E020004 */        lw $v0, %lo(D_NF_80000004)($s0)
  /* 16AE10 8018D2C0 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 16AE14 8018D2C4 26310004 */     addiu $s1, $s1, 4
  /* 16AE18 8018D2C8 5440FFEE */      bnel $v0, $zero, .L8018D284
  /* 16AE1C 8018D2CC 8E4F0000 */        lw $t7, ($s2) # D_ovl40_8018E3E0 + 0
  .L8018D2D0:
  /* 16AE20 8018D2D0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16AE24 8018D2D4 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 16AE28 8018D2D8 8FB00028 */        lw $s0, 0x28($sp)
  /* 16AE2C 8018D2DC 8FB1002C */        lw $s1, 0x2c($sp)
  /* 16AE30 8018D2E0 8FB20030 */        lw $s2, 0x30($sp)
  /* 16AE34 8018D2E4 8FB30034 */        lw $s3, 0x34($sp)
  /* 16AE38 8018D2E8 8FB40038 */        lw $s4, 0x38($sp)
  /* 16AE3C 8018D2EC 03E00008 */        jr $ra
  /* 16AE40 8018D2F0 27BD0080 */     addiu $sp, $sp, 0x80

glabel func_ovl40_8018D2F4
  /* 16AE44 8018D2F4 3C0E8019 */       lui $t6, %hi(D_ovl40_8018E1C8)
  /* 16AE48 8018D2F8 8DCEE1C8 */        lw $t6, %lo(D_ovl40_8018E1C8)($t6)
  /* 16AE4C 8018D2FC 3C038019 */       lui $v1, %hi(D_ovl40_8018E208)
  /* 16AE50 8018D300 8C820074 */        lw $v0, 0x74($a0)
  /* 16AE54 8018D304 29C1000F */      slti $at, $t6, 0xf
  /* 16AE58 8018D308 14200036 */      bnez $at, .L8018D3E4
  /* 16AE5C 8018D30C 2463E208 */     addiu $v1, $v1, %lo(D_ovl40_8018E208)
  /* 16AE60 8018D310 3C048019 */       lui $a0, %hi(D_ovl40_8018E1E8)
  /* 16AE64 8018D314 2484E1E8 */     addiu $a0, $a0, %lo(D_ovl40_8018E1E8)
  /* 16AE68 8018D318 C4860000 */      lwc1 $f6, ($a0) # D_ovl40_8018E1E8 + 0
  /* 16AE6C 8018D31C C4640000 */      lwc1 $f4, ($v1) # D_ovl40_8018E208 + 0
  /* 16AE70 8018D320 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 16AE74 8018D324 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 16AE78 8018D328 46062201 */     sub.s $f8, $f4, $f6
  /* 16AE7C 8018D32C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 16AE80 8018D330 46004283 */     div.s $f10, $f8, $f0
  /* 16AE84 8018D334 460A8480 */     add.s $f18, $f16, $f10
  /* 16AE88 8018D338 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 16AE8C 8018D33C E452003C */      swc1 $f18, 0x3c($v0)
  /* 16AE90 8018D340 C4860004 */      lwc1 $f6, 4($a0) # D_ovl40_8018E1E8 + 4
  /* 16AE94 8018D344 C4640004 */      lwc1 $f4, 4($v1) # D_ovl40_8018E208 + 4
  /* 16AE98 8018D348 46062201 */     sub.s $f8, $f4, $f6
  /* 16AE9C 8018D34C 46004403 */     div.s $f16, $f8, $f0
  /* 16AEA0 8018D350 46105480 */     add.s $f18, $f10, $f16
  /* 16AEA4 8018D354 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 16AEA8 8018D358 E4520040 */      swc1 $f18, 0x40($v0)
  /* 16AEAC 8018D35C C4860008 */      lwc1 $f6, 8($a0) # D_ovl40_8018E1E8 + 8
  /* 16AEB0 8018D360 C4640008 */      lwc1 $f4, 8($v1) # D_ovl40_8018E208 + 8
  /* 16AEB4 8018D364 46062201 */     sub.s $f8, $f4, $f6
  /* 16AEB8 8018D368 46004283 */     div.s $f10, $f8, $f0
  /* 16AEBC 8018D36C 460A8480 */     add.s $f18, $f16, $f10
  /* 16AEC0 8018D370 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 16AEC4 8018D374 E4520044 */      swc1 $f18, 0x44($v0)
  /* 16AEC8 8018D378 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl40_8018E1E8 + 12
  /* 16AECC 8018D37C C464000C */      lwc1 $f4, 0xc($v1) # D_ovl40_8018E208 + 12
  /* 16AED0 8018D380 46062201 */     sub.s $f8, $f4, $f6
  /* 16AED4 8018D384 46004403 */     div.s $f16, $f8, $f0
  /* 16AED8 8018D388 46105480 */     add.s $f18, $f10, $f16
  /* 16AEDC 8018D38C C450004C */      lwc1 $f16, 0x4c($v0)
  /* 16AEE0 8018D390 E4520048 */      swc1 $f18, 0x48($v0)
  /* 16AEE4 8018D394 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl40_8018E1E8 + 16
  /* 16AEE8 8018D398 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl40_8018E208 + 16
  /* 16AEEC 8018D39C 46062201 */     sub.s $f8, $f4, $f6
  /* 16AEF0 8018D3A0 46004283 */     div.s $f10, $f8, $f0
  /* 16AEF4 8018D3A4 460A8480 */     add.s $f18, $f16, $f10
  /* 16AEF8 8018D3A8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 16AEFC 8018D3AC E452004C */      swc1 $f18, 0x4c($v0)
  /* 16AF00 8018D3B0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl40_8018E1E8 + 20
  /* 16AF04 8018D3B4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl40_8018E208 + 20
  /* 16AF08 8018D3B8 46062201 */     sub.s $f8, $f4, $f6
  /* 16AF0C 8018D3BC 46004403 */     div.s $f16, $f8, $f0
  /* 16AF10 8018D3C0 46105480 */     add.s $f18, $f10, $f16
  /* 16AF14 8018D3C4 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 16AF18 8018D3C8 E4520050 */      swc1 $f18, 0x50($v0)
  /* 16AF1C 8018D3CC C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl40_8018E1E8 + 24
  /* 16AF20 8018D3D0 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl40_8018E208 + 24
  /* 16AF24 8018D3D4 46062201 */     sub.s $f8, $f4, $f6
  /* 16AF28 8018D3D8 46004283 */     div.s $f10, $f8, $f0
  /* 16AF2C 8018D3DC 460A8480 */     add.s $f18, $f16, $f10
  /* 16AF30 8018D3E0 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D3E4:
  /* 16AF34 8018D3E4 03E00008 */        jr $ra
  /* 16AF38 8018D3E8 00000000 */       nop 

glabel func_ovl40_8018D3EC
  /* 16AF3C 8018D3EC 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 16AF40 8018D3F0 3C0E8019 */       lui $t6, %hi(D_ovl40_8018E070)
  /* 16AF44 8018D3F4 AFBF002C */        sw $ra, 0x2c($sp)
  /* 16AF48 8018D3F8 AFB20028 */        sw $s2, 0x28($sp)
  /* 16AF4C 8018D3FC AFB10024 */        sw $s1, 0x24($sp)
  /* 16AF50 8018D400 AFB00020 */        sw $s0, 0x20($sp)
  /* 16AF54 8018D404 AFA40030 */        sw $a0, 0x30($sp)
  /* 16AF58 8018D408 AFA50034 */        sw $a1, 0x34($sp)
  /* 16AF5C 8018D40C AFA60038 */        sw $a2, 0x38($sp)
  /* 16AF60 8018D410 25CEE070 */     addiu $t6, $t6, %lo(D_ovl40_8018E070)
  /* 16AF64 8018D414 8DD80000 */        lw $t8, ($t6) # D_ovl40_8018E070 + 0
  /* 16AF68 8018D418 3C108019 */       lui $s0, %hi(D_ovl40_8018E1E8)
  /* 16AF6C 8018D41C 2610E1E8 */     addiu $s0, $s0, %lo(D_ovl40_8018E1E8)
  /* 16AF70 8018D420 AE180000 */        sw $t8, ($s0) # D_ovl40_8018E1E8 + 0
  /* 16AF74 8018D424 8DCF0004 */        lw $t7, 4($t6) # D_ovl40_8018E070 + 4
  /* 16AF78 8018D428 3C198019 */       lui $t9, %hi(D_ovl40_8018E08C)
  /* 16AF7C 8018D42C 2739E08C */     addiu $t9, $t9, %lo(D_ovl40_8018E08C)
  /* 16AF80 8018D430 AE0F0004 */        sw $t7, 4($s0) # D_ovl40_8018E1E8 + 4
  /* 16AF84 8018D434 8DD80008 */        lw $t8, 8($t6) # D_ovl40_8018E070 + 8
  /* 16AF88 8018D438 3C118019 */       lui $s1, %hi(D_ovl40_8018E208)
  /* 16AF8C 8018D43C 2631E208 */     addiu $s1, $s1, %lo(D_ovl40_8018E208)
  /* 16AF90 8018D440 AE180008 */        sw $t8, 8($s0) # D_ovl40_8018E1E8 + 8
  /* 16AF94 8018D444 8DCF000C */        lw $t7, 0xc($t6) # D_ovl40_8018E070 + 12
  /* 16AF98 8018D448 00002025 */        or $a0, $zero, $zero
  /* 16AF9C 8018D44C AE0F000C */        sw $t7, 0xc($s0) # D_ovl40_8018E1E8 + 12
  /* 16AFA0 8018D450 8DD80010 */        lw $t8, 0x10($t6) # D_ovl40_8018E070 + 16
  /* 16AFA4 8018D454 AE180010 */        sw $t8, 0x10($s0) # D_ovl40_8018E1E8 + 16
  /* 16AFA8 8018D458 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl40_8018E070 + 20
  /* 16AFAC 8018D45C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl40_8018E1E8 + 20
  /* 16AFB0 8018D460 8DD80018 */        lw $t8, 0x18($t6) # D_ovl40_8018E070 + 24
  /* 16AFB4 8018D464 AE180018 */        sw $t8, 0x18($s0) # D_ovl40_8018E1E8 + 24
  /* 16AFB8 8018D468 8F290000 */        lw $t1, ($t9) # D_ovl40_8018E08C + 0
  /* 16AFBC 8018D46C AE290000 */        sw $t1, ($s1) # D_ovl40_8018E208 + 0
  /* 16AFC0 8018D470 8F280004 */        lw $t0, 4($t9) # D_ovl40_8018E08C + 4
  /* 16AFC4 8018D474 AE280004 */        sw $t0, 4($s1) # D_ovl40_8018E208 + 4
  /* 16AFC8 8018D478 8F290008 */        lw $t1, 8($t9) # D_ovl40_8018E08C + 8
  /* 16AFCC 8018D47C AE290008 */        sw $t1, 8($s1) # D_ovl40_8018E208 + 8
  /* 16AFD0 8018D480 8F28000C */        lw $t0, 0xc($t9) # D_ovl40_8018E08C + 12
  /* 16AFD4 8018D484 AE28000C */        sw $t0, 0xc($s1) # D_ovl40_8018E208 + 12
  /* 16AFD8 8018D488 8F290010 */        lw $t1, 0x10($t9) # D_ovl40_8018E08C + 16
  /* 16AFDC 8018D48C AE290010 */        sw $t1, 0x10($s1) # D_ovl40_8018E208 + 16
  /* 16AFE0 8018D490 8F280014 */        lw $t0, 0x14($t9) # D_ovl40_8018E08C + 20
  /* 16AFE4 8018D494 AE280014 */        sw $t0, 0x14($s1) # D_ovl40_8018E208 + 20
  /* 16AFE8 8018D498 8F290018 */        lw $t1, 0x18($t9) # D_ovl40_8018E08C + 24
  /* 16AFEC 8018D49C 0C0436CB */       jal func_ovl2_8010DB2C
  /* 16AFF0 8018D4A0 AE290018 */        sw $t1, 0x18($s1) # D_ovl40_8018E208 + 24
  /* 16AFF4 8018D4A4 3C038019 */       lui $v1, %hi(D_ovl40_8018E1D8)
  /* 16AFF8 8018D4A8 2463E1D8 */     addiu $v1, $v1, %lo(D_ovl40_8018E1D8)
  /* 16AFFC 8018D4AC AC620000 */        sw $v0, ($v1) # D_ovl40_8018E1D8 + 0
  /* 16B000 8018D4B0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16B004 8018D4B4 8C520074 */        lw $s2, 0x74($v0)
  /* 16B008 8018D4B8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16B00C 8018D4BC 3C054120 */       lui $a1, 0x4120
  /* 16B010 8018D4C0 3C0642B4 */       lui $a2, 0x42b4
  /* 16B014 8018D4C4 3C07439B */       lui $a3, 0x439b
  /* 16B018 8018D4C8 26440008 */     addiu $a0, $s2, 8
  /* 16B01C 8018D4CC 0C001C20 */       jal func_80007080
  /* 16B020 8018D4D0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16B024 8018D4D4 3C018019 */       lui $at, %hi(D_ovl40_8018E1AC)
  /* 16B028 8018D4D8 C426E1AC */      lwc1 $f6, %lo(D_ovl40_8018E1AC)($at)
  /* 16B02C 8018D4DC 3C048019 */       lui $a0, %hi(D_ovl40_8018E1D8)
  /* 16B030 8018D4E0 E6460024 */      swc1 $f6, 0x24($s2)
  /* 16B034 8018D4E4 0C002CE7 */       jal func_8000B39C
  /* 16B038 8018D4E8 8C84E1D8 */        lw $a0, %lo(D_ovl40_8018E1D8)($a0)
  /* 16B03C 8018D4EC 3C048019 */       lui $a0, %hi(D_ovl40_8018E1D8)
  /* 16B040 8018D4F0 3C058019 */       lui $a1, %hi(func_ovl40_8018D2F4)
  /* 16B044 8018D4F4 24A5D2F4 */     addiu $a1, $a1, %lo(func_ovl40_8018D2F4)
  /* 16B048 8018D4F8 8C84E1D8 */        lw $a0, %lo(D_ovl40_8018E1D8)($a0)
  /* 16B04C 8018D4FC 24060001 */     addiu $a2, $zero, 1
  /* 16B050 8018D500 0C002062 */       jal omAddGObjCommonProc
  /* 16B054 8018D504 24070001 */     addiu $a3, $zero, 1
  /* 16B058 8018D508 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 16B05C 8018D50C C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 16B060 8018D510 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 16B064 8018D514 C6080000 */      lwc1 $f8, ($s0) # D_ovl40_8018E1E8 + 0
  /* 16B068 8018D518 C6100004 */      lwc1 $f16, 4($s0) # D_ovl40_8018E1E8 + 4
  /* 16B06C 8018D51C C6040008 */      lwc1 $f4, 8($s0) # D_ovl40_8018E1E8 + 8
  /* 16B070 8018D520 46004280 */     add.s $f10, $f8, $f0
  /* 16B074 8018D524 C608000C */      lwc1 $f8, 0xc($s0) # D_ovl40_8018E1E8 + 12
  /* 16B078 8018D528 46028480 */     add.s $f18, $f16, $f2
  /* 16B07C 8018D52C C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl40_8018E1E8 + 16
  /* 16B080 8018D530 E60A0000 */      swc1 $f10, ($s0) # D_ovl40_8018E1E8 + 0
  /* 16B084 8018D534 460C2180 */     add.s $f6, $f4, $f12
  /* 16B088 8018D538 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl40_8018E1E8 + 20
  /* 16B08C 8018D53C E6120004 */      swc1 $f18, 4($s0) # D_ovl40_8018E1E8 + 4
  /* 16B090 8018D540 46004280 */     add.s $f10, $f8, $f0
  /* 16B094 8018D544 E6060008 */      swc1 $f6, 8($s0) # D_ovl40_8018E1E8 + 8
  /* 16B098 8018D548 C6280000 */      lwc1 $f8, ($s1) # D_ovl40_8018E208 + 0
  /* 16B09C 8018D54C 46028480 */     add.s $f18, $f16, $f2
  /* 16B0A0 8018D550 C6300004 */      lwc1 $f16, 4($s1) # D_ovl40_8018E208 + 4
  /* 16B0A4 8018D554 E60A000C */      swc1 $f10, 0xc($s0) # D_ovl40_8018E1E8 + 12
  /* 16B0A8 8018D558 460C2180 */     add.s $f6, $f4, $f12
  /* 16B0AC 8018D55C C6240008 */      lwc1 $f4, 8($s1) # D_ovl40_8018E208 + 8
  /* 16B0B0 8018D560 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl40_8018E1E8 + 16
  /* 16B0B4 8018D564 46004280 */     add.s $f10, $f8, $f0
  /* 16B0B8 8018D568 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl40_8018E1E8 + 20
  /* 16B0BC 8018D56C C628000C */      lwc1 $f8, 0xc($s1) # D_ovl40_8018E208 + 12
  /* 16B0C0 8018D570 46028480 */     add.s $f18, $f16, $f2
  /* 16B0C4 8018D574 C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl40_8018E208 + 16
  /* 16B0C8 8018D578 E62A0000 */      swc1 $f10, ($s1) # D_ovl40_8018E208 + 0
  /* 16B0CC 8018D57C 460C2180 */     add.s $f6, $f4, $f12
  /* 16B0D0 8018D580 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl40_8018E208 + 20
  /* 16B0D4 8018D584 E6320004 */      swc1 $f18, 4($s1) # D_ovl40_8018E208 + 4
  /* 16B0D8 8018D588 46004280 */     add.s $f10, $f8, $f0
  /* 16B0DC 8018D58C E6260008 */      swc1 $f6, 8($s1) # D_ovl40_8018E208 + 8
  /* 16B0E0 8018D590 C6080000 */      lwc1 $f8, ($s0) # D_ovl40_8018E1E8 + 0
  /* 16B0E4 8018D594 46028480 */     add.s $f18, $f16, $f2
  /* 16B0E8 8018D598 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl40_8018E208 + 12
  /* 16B0EC 8018D59C 460C2180 */     add.s $f6, $f4, $f12
  /* 16B0F0 8018D5A0 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl40_8018E208 + 16
  /* 16B0F4 8018D5A4 E6260014 */      swc1 $f6, 0x14($s1) # D_ovl40_8018E208 + 20
  /* 16B0F8 8018D5A8 E648003C */      swc1 $f8, 0x3c($s2)
  /* 16B0FC 8018D5AC C60A0004 */      lwc1 $f10, 4($s0) # D_ovl40_8018E1E8 + 4
  /* 16B100 8018D5B0 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 16B104 8018D5B4 C6100008 */      lwc1 $f16, 8($s0) # D_ovl40_8018E1E8 + 8
  /* 16B108 8018D5B8 E6500044 */      swc1 $f16, 0x44($s2)
  /* 16B10C 8018D5BC C612000C */      lwc1 $f18, 0xc($s0) # D_ovl40_8018E1E8 + 12
  /* 16B110 8018D5C0 E6520048 */      swc1 $f18, 0x48($s2)
  /* 16B114 8018D5C4 C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl40_8018E1E8 + 16
  /* 16B118 8018D5C8 E644004C */      swc1 $f4, 0x4c($s2)
  /* 16B11C 8018D5CC C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl40_8018E1E8 + 20
  /* 16B120 8018D5D0 E6460050 */      swc1 $f6, 0x50($s2)
  /* 16B124 8018D5D4 C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl40_8018E1E8 + 24
  /* 16B128 8018D5D8 E6480054 */      swc1 $f8, 0x54($s2)
  /* 16B12C 8018D5DC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 16B130 8018D5E0 8FB20028 */        lw $s2, 0x28($sp)
  /* 16B134 8018D5E4 8FB10024 */        lw $s1, 0x24($sp)
  /* 16B138 8018D5E8 8FB00020 */        lw $s0, 0x20($sp)
  /* 16B13C 8018D5EC 03E00008 */        jr $ra
  /* 16B140 8018D5F0 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl40_8018D5F4
  /* 16B144 8018D5F4 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 16B148 8018D5F8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16B14C 8018D5FC AFBE0038 */        sw $fp, 0x38($sp)
  /* 16B150 8018D600 AFB70034 */        sw $s7, 0x34($sp)
  /* 16B154 8018D604 AFB60030 */        sw $s6, 0x30($sp)
  /* 16B158 8018D608 AFB5002C */        sw $s5, 0x2c($sp)
  /* 16B15C 8018D60C AFB40028 */        sw $s4, 0x28($sp)
  /* 16B160 8018D610 AFB30024 */        sw $s3, 0x24($sp)
  /* 16B164 8018D614 AFB20020 */        sw $s2, 0x20($sp)
  /* 16B168 8018D618 AFB1001C */        sw $s1, 0x1c($sp)
  /* 16B16C 8018D61C 0C0412F7 */       jal func_ovl2_80104BDC
  /* 16B170 8018D620 AFB00018 */        sw $s0, 0x18($sp)
  /* 16B174 8018D624 0C041580 */       jal func_ovl2_80105600
  /* 16B178 8018D628 00000000 */       nop 
  /* 16B17C 8018D62C 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 16B180 8018D630 24040015 */     addiu $a0, $zero, 0x15
  /* 16B184 8018D634 24010001 */     addiu $at, $zero, 1
  /* 16B188 8018D638 10410009 */       beq $v0, $at, .L8018D660
  /* 16B18C 8018D63C 24040015 */     addiu $a0, $zero, 0x15
  /* 16B190 8018D640 3C108019 */       lui $s0, %hi(D_ovl40_8018E190)
  /* 16B194 8018D644 2610E190 */     addiu $s0, $s0, %lo(D_ovl40_8018E190)
  .L8018D648:
  /* 16B198 8018D648 0C008D89 */       jal fatal_printf
  /* 16B19C 8018D64C 02002025 */        or $a0, $s0, $zero
  /* 16B1A0 8018D650 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 16B1A4 8018D654 00000000 */       nop 
  /* 16B1A8 8018D658 1000FFFB */         b .L8018D648
  /* 16B1AC 8018D65C 00000000 */       nop 
  .L8018D660:
  /* 16B1B0 8018D660 0C03F205 */       jal func_ovl2_800FC814
  /* 16B1B4 8018D664 27A5009C */     addiu $a1, $sp, 0x9c
  /* 16B1B8 8018D668 27B00090 */     addiu $s0, $sp, 0x90
  /* 16B1BC 8018D66C 02002825 */        or $a1, $s0, $zero
  /* 16B1C0 8018D670 0C03F225 */       jal func_ovl2_800FC894
  /* 16B1C4 8018D674 8FA4009C */        lw $a0, 0x9c($sp)
  /* 16B1C8 8018D678 8E0F0000 */        lw $t7, ($s0) # D_ovl40_8018E190 + 0
  /* 16B1CC 8018D67C AFAF0000 */        sw $t7, ($sp)
  /* 16B1D0 8018D680 8E050004 */        lw $a1, 4($s0) # D_ovl40_8018E190 + 4
  /* 16B1D4 8018D684 8FA40000 */        lw $a0, ($sp)
  /* 16B1D8 8018D688 AFA50004 */        sw $a1, 4($sp)
  /* 16B1DC 8018D68C 8E060008 */        lw $a2, 8($s0) # D_ovl40_8018E190 + 8
  /* 16B1E0 8018D690 0C0634FB */       jal func_ovl40_8018D3EC
  /* 16B1E4 8018D694 AFA60008 */        sw $a2, 8($sp)
  /* 16B1E8 8018D698 0C0455B9 */       jal func_ovl2_801156E4
  /* 16B1EC 8018D69C 00000000 */       nop 
  /* 16B1F0 8018D6A0 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 16B1F4 8018D6A4 00000000 */       nop 
  /* 16B1F8 8018D6A8 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 16B1FC 8018D6AC 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 16B200 8018D6B0 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 16B204 8018D6B4 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 16B208 8018D6B8 00008825 */        or $s1, $zero, $zero
  /* 16B20C 8018D6BC 00009025 */        or $s2, $zero, $zero
  /* 16B210 8018D6C0 241E0004 */     addiu $fp, $zero, 4
  /* 16B214 8018D6C4 24170002 */     addiu $s7, $zero, 2
  /* 16B218 8018D6C8 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D6CC:
  /* 16B21C 8018D6CC 02C04025 */        or $t0, $s6, $zero
  /* 16B220 8018D6D0 02804825 */        or $t1, $s4, $zero
  /* 16B224 8018D6D4 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D6D8:
  /* 16B228 8018D6D8 8D190000 */        lw $t9, ($t0)
  /* 16B22C 8018D6DC 2508000C */     addiu $t0, $t0, 0xc
  /* 16B230 8018D6E0 2529000C */     addiu $t1, $t1, 0xc
  /* 16B234 8018D6E4 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 16B238 8018D6E8 8D18FFF8 */        lw $t8, -8($t0)
  /* 16B23C 8018D6EC AD38FFF8 */        sw $t8, -8($t1)
  /* 16B240 8018D6F0 8D19FFFC */        lw $t9, -4($t0)
  /* 16B244 8018D6F4 150AFFF8 */       bne $t0, $t2, .L8018D6D8
  /* 16B248 8018D6F8 AD39FFFC */        sw $t9, -4($t1)
  /* 16B24C 8018D6FC 8D190000 */        lw $t9, ($t0)
  /* 16B250 8018D700 00116880 */       sll $t5, $s1, 2
  /* 16B254 8018D704 01B16821 */      addu $t5, $t5, $s1
  /* 16B258 8018D708 AD390000 */        sw $t9, ($t1)
  /* 16B25C 8018D70C 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 16B260 8018D710 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 16B264 8018D714 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 16B268 8018D718 01728021 */      addu $s0, $t3, $s2
  /* 16B26C 8018D71C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl40_8018E190 + 34
  /* 16B270 8018D720 000D6840 */       sll $t5, $t5, 1
  /* 16B274 8018D724 01AE9821 */      addu $s3, $t5, $t6
  /* 16B278 8018D728 52EC0030 */      beql $s7, $t4, .L8018D7EC
  /* 16B27C 8018D72C 26310001 */     addiu $s1, $s1, 1
  /* 16B280 8018D730 0C035E1B */       jal func_ovl2_800D786C
  /* 16B284 8018D734 92040023 */       lbu $a0, 0x23($s0) # D_ovl40_8018E190 + 35
  /* 16B288 8018D738 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 16B28C 8018D73C C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 16B290 8018D740 C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 16B294 8018D744 00528021 */      addu $s0, $v0, $s2
  /* 16B298 8018D748 920F0023 */       lbu $t7, 0x23($s0) # D_ovl40_8018E190 + 35
  /* 16B29C 8018D74C C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 16B2A0 8018D750 240A0001 */     addiu $t2, $zero, 1
  /* 16B2A4 8018D754 AFAA0060 */        sw $t2, 0x60($sp)
  /* 16B2A8 8018D758 E7A40054 */      swc1 $f4, 0x54($sp)
  /* 16B2AC 8018D75C E7A60058 */      swc1 $f6, 0x58($sp)
  /* 16B2B0 8018D760 AFAF0050 */        sw $t7, 0x50($sp)
  /* 16B2B4 8018D764 E7A8005C */      swc1 $f8, 0x5c($sp)
  /* 16B2B8 8018D768 92080024 */       lbu $t0, 0x24($s0) # D_ovl40_8018E190 + 36
  /* 16B2BC 8018D76C 24090001 */     addiu $t1, $zero, 1
  /* 16B2C0 8018D770 A3B10065 */        sb $s1, 0x65($sp)
  /* 16B2C4 8018D774 A3A90066 */        sb $t1, 0x66($sp)
  /* 16B2C8 8018D778 A3A80064 */        sb $t0, 0x64($sp)
  /* 16B2CC 8018D77C 92180026 */       lbu $t8, 0x26($s0) # D_ovl40_8018E190 + 38
  /* 16B2D0 8018D780 A3B80067 */        sb $t8, 0x67($sp)
  /* 16B2D4 8018D784 92190021 */       lbu $t9, 0x21($s0) # D_ovl40_8018E190 + 33
  /* 16B2D8 8018D788 A3B90069 */        sb $t9, 0x69($sp)
  /* 16B2DC 8018D78C 920B0020 */       lbu $t3, 0x20($s0) # D_ovl40_8018E190 + 32
  /* 16B2E0 8018D790 A3AB006A */        sb $t3, 0x6a($sp)
  /* 16B2E4 8018D794 904C0007 */       lbu $t4, 7($v0)
  /* 16B2E8 8018D798 AFA00074 */        sw $zero, 0x74($sp)
  /* 16B2EC 8018D79C A3AC006B */        sb $t4, 0x6b($sp)
  /* 16B2F0 8018D7A0 920D0022 */       lbu $t5, 0x22($s0) # D_ovl40_8018E190 + 34
  /* 16B2F4 8018D7A4 AFB3007C */        sw $s3, 0x7c($sp)
  /* 16B2F8 8018D7A8 AFAD0078 */        sw $t5, 0x78($sp)
  /* 16B2FC 8018D7AC 0C035E2D */       jal func_ovl2_800D78B4
  /* 16B300 8018D7B0 92040023 */       lbu $a0, 0x23($s0) # D_ovl40_8018E190 + 35
  /* 16B304 8018D7B4 AFA20088 */        sw $v0, 0x88($sp)
  /* 16B308 8018D7B8 0C035FCF */       jal ftManager_CreateFighter
  /* 16B30C 8018D7BC 02802025 */        or $a0, $s4, $zero
  /* 16B310 8018D7C0 3C018019 */       lui $at, %hi(D_ovl40_8018E1D0)
  /* 16B314 8018D7C4 AC22E1D0 */        sw $v0, %lo(D_ovl40_8018E1D0)($at)
  /* 16B318 8018D7C8 00408025 */        or $s0, $v0, $zero
  /* 16B31C 8018D7CC 02202025 */        or $a0, $s1, $zero
  /* 16B320 8018D7D0 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 16B324 8018D7D4 00402825 */        or $a1, $v0, $zero
  /* 16B328 8018D7D8 3C058019 */       lui $a1, %hi(D_ovl40_8018E0A8)
  /* 16B32C 8018D7DC 24A5E0A8 */     addiu $a1, $a1, %lo(D_ovl40_8018E0A8)
  /* 16B330 8018D7E0 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 16B334 8018D7E4 02002025 */        or $a0, $s0, $zero
  /* 16B338 8018D7E8 26310001 */     addiu $s1, $s1, 1
  .L8018D7EC:
  /* 16B33C 8018D7EC 163EFFB7 */       bne $s1, $fp, .L8018D6CC
  /* 16B340 8018D7F0 26520074 */     addiu $s2, $s2, 0x74
  /* 16B344 8018D7F4 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16B348 8018D7F8 8FB00018 */        lw $s0, 0x18($sp)
  /* 16B34C 8018D7FC 8FB1001C */        lw $s1, 0x1c($sp)
  /* 16B350 8018D800 8FB20020 */        lw $s2, 0x20($sp)
  /* 16B354 8018D804 8FB30024 */        lw $s3, 0x24($sp)
  /* 16B358 8018D808 8FB40028 */        lw $s4, 0x28($sp)
  /* 16B35C 8018D80C 8FB5002C */        lw $s5, 0x2c($sp)
  /* 16B360 8018D810 8FB60030 */        lw $s6, 0x30($sp)
  /* 16B364 8018D814 8FB70034 */        lw $s7, 0x34($sp)
  /* 16B368 8018D818 8FBE0038 */        lw $fp, 0x38($sp)
  /* 16B36C 8018D81C 03E00008 */        jr $ra
  /* 16B370 8018D820 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl40_8018D824
  /* 16B374 8018D824 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 16B378 8018D828 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 16B37C 8018D82C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B380 8018D830 AFA40000 */        sw $a0, ($sp)
  /* 16B384 8018D834 3C0CE700 */       lui $t4, 0xe700
  /* 16B388 8018D838 246E0008 */     addiu $t6, $v1, 8
  /* 16B38C 8018D83C AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 16B390 8018D840 AC600004 */        sw $zero, 4($v1)
  /* 16B394 8018D844 AC6C0000 */        sw $t4, ($v1)
  /* 16B398 8018D848 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B39C 8018D84C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 16B3A0 8018D850 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16B3A4 8018D854 246F0008 */     addiu $t7, $v1, 8
  /* 16B3A8 8018D858 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16B3AC 8018D85C AC600004 */        sw $zero, 4($v1)
  /* 16B3B0 8018D860 AC780000 */        sw $t8, ($v1)
  /* 16B3B4 8018D864 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B3B8 8018D868 3C0F9678 */       lui $t7, (0x9678B4FF >> 16) # 2524493055
  /* 16B3BC 8018D86C 35EFB4FF */       ori $t7, $t7, (0x9678B4FF & 0xFFFF) # 2524493055
  /* 16B3C0 8018D870 24790008 */     addiu $t9, $v1, 8
  /* 16B3C4 8018D874 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16B3C8 8018D878 3C0EFA00 */       lui $t6, 0xfa00
  /* 16B3CC 8018D87C AC6E0000 */        sw $t6, ($v1)
  /* 16B3D0 8018D880 AC6F0004 */        sw $t7, 4($v1)
  /* 16B3D4 8018D884 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B3D8 8018D888 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16B3DC 8018D88C 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 16B3E0 8018D890 24780008 */     addiu $t8, $v1, 8
  /* 16B3E4 8018D894 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16B3E8 8018D898 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16B3EC 8018D89C 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 16B3F0 8018D8A0 AC6E0004 */        sw $t6, 4($v1)
  /* 16B3F4 8018D8A4 AC790000 */        sw $t9, ($v1)
  /* 16B3F8 8018D8A8 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B3FC 8018D8AC 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 16B400 8018D8B0 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 16B404 8018D8B4 246F0008 */     addiu $t7, $v1, 8
  /* 16B408 8018D8B8 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16B40C 8018D8BC 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 16B410 8018D8C0 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 16B414 8018D8C4 AC780004 */        sw $t8, 4($v1)
  /* 16B418 8018D8C8 AC6D0000 */        sw $t5, ($v1)
  /* 16B41C 8018D8CC 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B420 8018D8D0 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 16B424 8018D8D4 3C0EF64D */       lui $t6, (0xF64D8168 >> 16) # 4132274536
  /* 16B428 8018D8D8 24790008 */     addiu $t9, $v1, 8
  /* 16B42C 8018D8DC AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16B430 8018D8E0 35CE8168 */       ori $t6, $t6, (0xF64D8168 & 0xFFFF) # 4132274536
  /* 16B434 8018D8E4 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 16B438 8018D8E8 AC6F0004 */        sw $t7, 4($v1)
  /* 16B43C 8018D8EC AC6E0000 */        sw $t6, ($v1)
  /* 16B440 8018D8F0 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B444 8018D8F4 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 16B448 8018D8F8 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16B44C 8018D8FC 24780008 */     addiu $t8, $v1, 8
  /* 16B450 8018D900 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16B454 8018D904 AC600004 */        sw $zero, 4($v1)
  /* 16B458 8018D908 AC6C0000 */        sw $t4, ($v1)
  /* 16B45C 8018D90C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16B460 8018D910 24790008 */     addiu $t9, $v1, 8
  /* 16B464 8018D914 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16B468 8018D918 AC6E0004 */        sw $t6, 4($v1)
  /* 16B46C 8018D91C 03E00008 */        jr $ra
  /* 16B470 8018D920 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl40_8018D924
  /* 16B474 8018D924 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16B478 8018D928 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16B47C 8018D92C 00002025 */        or $a0, $zero, $zero
  /* 16B480 8018D930 00002825 */        or $a1, $zero, $zero
  /* 16B484 8018D934 24060013 */     addiu $a2, $zero, 0x13
  /* 16B488 8018D938 0C00265A */       jal omMakeGObjCommon
  /* 16B48C 8018D93C 3C078000 */       lui $a3, 0x8000
  /* 16B490 8018D940 3C058019 */       lui $a1, %hi(func_ovl40_8018D824)
  /* 16B494 8018D944 240EFFFF */     addiu $t6, $zero, -1
  /* 16B498 8018D948 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16B49C 8018D94C 24A5D824 */     addiu $a1, $a1, %lo(func_ovl40_8018D824)
  /* 16B4A0 8018D950 00402025 */        or $a0, $v0, $zero
  /* 16B4A4 8018D954 2406001C */     addiu $a2, $zero, 0x1c
  /* 16B4A8 8018D958 0C00277D */       jal func_80009DF4
  /* 16B4AC 8018D95C 3C078000 */       lui $a3, 0x8000
  /* 16B4B0 8018D960 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16B4B4 8018D964 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16B4B8 8018D968 03E00008 */        jr $ra
  /* 16B4BC 8018D96C 00000000 */       nop 

glabel func_ovl40_8018D970
  /* 16B4C0 8018D970 3C038019 */       lui $v1, %hi(D_ovl40_8018E1C8)
  /* 16B4C4 8018D974 8C63E1C8 */        lw $v1, %lo(D_ovl40_8018E1C8)($v1)
  /* 16B4C8 8018D978 2401000F */     addiu $at, $zero, 0xf
  /* 16B4CC 8018D97C 3C058019 */       lui $a1, 0x8019
  /* 16B4D0 8018D980 10610009 */       beq $v1, $at, .L8018D9A8
  /* 16B4D4 8018D984 00601025 */        or $v0, $v1, $zero
  /* 16B4D8 8018D988 2401002D */     addiu $at, $zero, 0x2d
  /* 16B4DC 8018D98C 1041000B */       beq $v0, $at, .L8018D9BC
  /* 16B4E0 8018D990 3C058019 */       lui $a1, 0x8019
  /* 16B4E4 8018D994 2401003C */     addiu $at, $zero, 0x3c
  /* 16B4E8 8018D998 1041000D */       beq $v0, $at, .L8018D9D0
  /* 16B4EC 8018D99C 3C058019 */       lui $a1, %hi(D_ovl40_8018E1E0)
  /* 16B4F0 8018D9A0 1000000F */         b .L8018D9E0
  /* 16B4F4 8018D9A4 24A5E1E0 */     addiu $a1, $a1, %lo(D_ovl40_8018E1E0)
  .L8018D9A8:
  /* 16B4F8 8018D9A8 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16B4FC 8018D9AC 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 16B500 8018D9B0 24A5E1E0 */     addiu $a1, $a1, -0x1e20
  /* 16B504 8018D9B4 1000000A */         b .L8018D9E0
  /* 16B508 8018D9B8 E4A40000 */      swc1 $f4, ($a1) # D_ovl40_8018E1E0 + 0
  .L8018D9BC:
  /* 16B50C 8018D9BC 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 16B510 8018D9C0 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 16B514 8018D9C4 24A5E1E0 */     addiu $a1, $a1, -0x1e20
  /* 16B518 8018D9C8 10000005 */         b .L8018D9E0
  /* 16B51C 8018D9CC E4A60000 */      swc1 $f6, ($a1) # D_ovl40_8018E1E0 + 0
  .L8018D9D0:
  /* 16B520 8018D9D0 44804000 */      mtc1 $zero, $f8
  /* 16B524 8018D9D4 3C058019 */       lui $a1, %hi(D_ovl40_8018E1E0)
  /* 16B528 8018D9D8 24A5E1E0 */     addiu $a1, $a1, %lo(D_ovl40_8018E1E0)
  /* 16B52C 8018D9DC E4A80000 */      swc1 $f8, ($a1) # D_ovl40_8018E1E0 + 0
  .L8018D9E0:
  /* 16B530 8018D9E0 28610010 */      slti $at, $v1, 0x10
  /* 16B534 8018D9E4 14200007 */      bnez $at, .L8018DA04
  /* 16B538 8018D9E8 2861002D */      slti $at, $v1, 0x2d
  /* 16B53C 8018D9EC 10200005 */      beqz $at, .L8018DA04
  /* 16B540 8018D9F0 3C018019 */       lui $at, %hi(D_ovl40_8018E1B0)
  /* 16B544 8018D9F4 C430E1B0 */      lwc1 $f16, %lo(D_ovl40_8018E1B0)($at)
  /* 16B548 8018D9F8 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl40_8018E1E0 + 0
  /* 16B54C 8018D9FC 46105480 */     add.s $f18, $f10, $f16
  /* 16B550 8018DA00 E4B20000 */      swc1 $f18, ($a1) # D_ovl40_8018E1E0 + 0
  .L8018DA04:
  /* 16B554 8018DA04 2861002E */      slti $at, $v1, 0x2e
  /* 16B558 8018DA08 14200007 */      bnez $at, .L8018DA28
  /* 16B55C 8018DA0C 2861003C */      slti $at, $v1, 0x3c
  /* 16B560 8018DA10 10200005 */      beqz $at, .L8018DA28
  /* 16B564 8018DA14 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 16B568 8018DA18 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16B56C 8018DA1C C4A40000 */      lwc1 $f4, ($a1) # D_ovl40_8018E1E0 + 0
  /* 16B570 8018DA20 46062200 */     add.s $f8, $f4, $f6
  /* 16B574 8018DA24 E4A80000 */      swc1 $f8, ($a1) # D_ovl40_8018E1E0 + 0
  .L8018DA28:
  /* 16B578 8018DA28 8C820074 */        lw $v0, 0x74($a0)
  /* 16B57C 8018DA2C C4B00000 */      lwc1 $f16, ($a1) # D_ovl40_8018E1E0 + 0
  /* 16B580 8018DA30 C44A001C */      lwc1 $f10, 0x1c($v0)
  /* 16B584 8018DA34 46105481 */     sub.s $f18, $f10, $f16
  /* 16B588 8018DA38 03E00008 */        jr $ra
  /* 16B58C 8018DA3C E452001C */      swc1 $f18, 0x1c($v0)

glabel func_ovl40_8018DA40
  /* 16B590 8018DA40 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 16B594 8018DA44 AFB00018 */        sw $s0, 0x18($sp)
  /* 16B598 8018DA48 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16B59C 8018DA4C 27B00024 */     addiu $s0, $sp, 0x24
  /* 16B5A0 8018DA50 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 16B5A4 8018DA54 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16B5A8 8018DA58 25C8003C */     addiu $t0, $t6, 0x3c
  /* 16B5AC 8018DA5C 0200C825 */        or $t9, $s0, $zero
  .L8018DA60:
  /* 16B5B0 8018DA60 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16B5B4 8018DA64 25CE000C */     addiu $t6, $t6, 0xc
  /* 16B5B8 8018DA68 2739000C */     addiu $t9, $t9, 0xc
  /* 16B5BC 8018DA6C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16B5C0 8018DA70 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 16B5C4 8018DA74 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16B5C8 8018DA78 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 16B5CC 8018DA7C 15C8FFF8 */       bne $t6, $t0, .L8018DA60
  /* 16B5D0 8018DA80 AF38FFFC */        sw $t8, -4($t9)
  /* 16B5D4 8018DA84 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16B5D8 8018DA88 24090005 */     addiu $t1, $zero, 5
  /* 16B5DC 8018DA8C 24040005 */     addiu $a0, $zero, 5
  /* 16B5E0 8018DA90 AF380000 */        sw $t8, ($t9)
  /* 16B5E4 8018DA94 AFA90024 */        sw $t1, 0x24($sp)
  /* 16B5E8 8018DA98 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16B5EC 8018DA9C 00002825 */        or $a1, $zero, $zero
  /* 16B5F0 8018DAA0 44800000 */      mtc1 $zero, $f0
  /* 16B5F4 8018DAA4 3C0A8019 */       lui $t2, %hi(D_ovl40_8018E1DC)
  /* 16B5F8 8018DAA8 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 16B5FC 8018DAAC 8D4AE1DC */        lw $t2, %lo(D_ovl40_8018E1DC)($t2)
  /* 16B600 8018DAB0 44812000 */      mtc1 $at, $f4 # 600.0 to cop1
  /* 16B604 8018DAB4 A3A2003B */        sb $v0, 0x3b($sp)
  /* 16B608 8018DAB8 02002025 */        or $a0, $s0, $zero
  /* 16B60C 8018DABC E7A0002C */      swc1 $f0, 0x2c($sp)
  /* 16B610 8018DAC0 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 16B614 8018DAC4 AFAA005C */        sw $t2, 0x5c($sp)
  /* 16B618 8018DAC8 0C035FCF */       jal ftManager_CreateFighter
  /* 16B61C 8018DACC E7A40028 */      swc1 $f4, 0x28($sp)
  /* 16B620 8018DAD0 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 16B624 8018DAD4 00408025 */        or $s0, $v0, $zero
  /* 16B628 8018DAD8 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16B62C 8018DADC 0C0E4173 */       jal func_ovl1_803905CC
  /* 16B630 8018DAE0 00402025 */        or $a0, $v0, $zero
  /* 16B634 8018DAE4 02002025 */        or $a0, $s0, $zero
  /* 16B638 8018DAE8 2405001A */     addiu $a1, $zero, 0x1a
  /* 16B63C 8018DAEC 0C002834 */       jal om_g_move_obj_dl
  /* 16B640 8018DAF0 2406FFFF */     addiu $a2, $zero, -1
  /* 16B644 8018DAF4 3C058019 */       lui $a1, %hi(func_ovl40_8018D970)
  /* 16B648 8018DAF8 24A5D970 */     addiu $a1, $a1, %lo(func_ovl40_8018D970)
  /* 16B64C 8018DAFC 02002025 */        or $a0, $s0, $zero
  /* 16B650 8018DB00 24060001 */     addiu $a2, $zero, 1
  /* 16B654 8018DB04 0C002062 */       jal omAddGObjCommonProc
  /* 16B658 8018DB08 24070001 */     addiu $a3, $zero, 1
  /* 16B65C 8018DB0C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16B660 8018DB10 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 16B664 8018DB14 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16B668 8018DB18 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16B66C 8018DB1C 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16B670 8018DB20 E5800044 */      swc1 $f0, 0x44($t4)
  /* 16B674 8018DB24 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16B678 8018DB28 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16B67C 8018DB2C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16B680 8018DB30 8FB00018 */        lw $s0, 0x18($sp)
  /* 16B684 8018DB34 27BD0068 */     addiu $sp, $sp, 0x68
  /* 16B688 8018DB38 03E00008 */        jr $ra
  /* 16B68C 8018DB3C 00000000 */       nop 

glabel func_ovl40_8018DB40
  /* 16B690 8018DB40 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16B694 8018DB44 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16B698 8018DB48 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16B69C 8018DB4C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16B6A0 8018DB50 240F0050 */     addiu $t7, $zero, 0x50
  /* 16B6A4 8018DB54 24180000 */     addiu $t8, $zero, 0
  /* 16B6A8 8018DB58 3C190800 */       lui $t9, 0x800
  /* 16B6AC 8018DB5C 2408FFFF */     addiu $t0, $zero, -1
  /* 16B6B0 8018DB60 24090001 */     addiu $t1, $zero, 1
  /* 16B6B4 8018DB64 240A0001 */     addiu $t2, $zero, 1
  /* 16B6B8 8018DB68 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16B6BC 8018DB6C AFA90028 */        sw $t1, 0x28($sp)
  /* 16B6C0 8018DB70 AFA80020 */        sw $t0, 0x20($sp)
  /* 16B6C4 8018DB74 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16B6C8 8018DB78 AFB80018 */        sw $t8, 0x18($sp)
  /* 16B6CC 8018DB7C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16B6D0 8018DB80 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16B6D4 8018DB84 AFA00024 */        sw $zero, 0x24($sp)
  /* 16B6D8 8018DB88 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16B6DC 8018DB8C AFA00034 */        sw $zero, 0x34($sp)
  /* 16B6E0 8018DB90 24040401 */     addiu $a0, $zero, 0x401
  /* 16B6E4 8018DB94 00002825 */        or $a1, $zero, $zero
  /* 16B6E8 8018DB98 24060010 */     addiu $a2, $zero, 0x10
  /* 16B6EC 8018DB9C 0C002E4F */       jal func_8000B93C
  /* 16B6F0 8018DBA0 3C078000 */       lui $a3, 0x8000
  /* 16B6F4 8018DBA4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16B6F8 8018DBA8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16B6FC 8018DBAC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16B700 8018DBB0 8C430074 */        lw $v1, 0x74($v0)
  /* 16B704 8018DBB4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16B708 8018DBB8 44050000 */      mfc1 $a1, $f0
  /* 16B70C 8018DBBC 44060000 */      mfc1 $a2, $f0
  /* 16B710 8018DBC0 3C07439B */       lui $a3, 0x439b
  /* 16B714 8018DBC4 24640008 */     addiu $a0, $v1, 8
  /* 16B718 8018DBC8 0C001C20 */       jal func_80007080
  /* 16B71C 8018DBCC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16B720 8018DBD0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16B724 8018DBD4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16B728 8018DBD8 03E00008 */        jr $ra
  /* 16B72C 8018DBDC 00000000 */       nop 

glabel func_ovl40_8018DBE0
  /* 16B730 8018DBE0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16B734 8018DBE4 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16B738 8018DBE8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16B73C 8018DBEC 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16B740 8018DBF0 240F000A */     addiu $t7, $zero, 0xa
  /* 16B744 8018DBF4 24180000 */     addiu $t8, $zero, 0
  /* 16B748 8018DBF8 3C190400 */       lui $t9, 0x400
  /* 16B74C 8018DBFC 2408FFFF */     addiu $t0, $zero, -1
  /* 16B750 8018DC00 24090001 */     addiu $t1, $zero, 1
  /* 16B754 8018DC04 240A0001 */     addiu $t2, $zero, 1
  /* 16B758 8018DC08 240B0001 */     addiu $t3, $zero, 1
  /* 16B75C 8018DC0C AFAB0030 */        sw $t3, 0x30($sp)
  /* 16B760 8018DC10 AFAA0028 */        sw $t2, 0x28($sp)
  /* 16B764 8018DC14 AFA90024 */        sw $t1, 0x24($sp)
  /* 16B768 8018DC18 AFA80020 */        sw $t0, 0x20($sp)
  /* 16B76C 8018DC1C AFB9001C */        sw $t9, 0x1c($sp)
  /* 16B770 8018DC20 AFB80018 */        sw $t8, 0x18($sp)
  /* 16B774 8018DC24 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16B778 8018DC28 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16B77C 8018DC2C AFA0002C */        sw $zero, 0x2c($sp)
  /* 16B780 8018DC30 AFA00034 */        sw $zero, 0x34($sp)
  /* 16B784 8018DC34 24040401 */     addiu $a0, $zero, 0x401
  /* 16B788 8018DC38 00002825 */        or $a1, $zero, $zero
  /* 16B78C 8018DC3C 24060010 */     addiu $a2, $zero, 0x10
  /* 16B790 8018DC40 0C002E4F */       jal func_8000B93C
  /* 16B794 8018DC44 3C078000 */       lui $a3, 0x8000
  /* 16B798 8018DC48 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16B79C 8018DC4C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16B7A0 8018DC50 AFA20044 */        sw $v0, 0x44($sp)
  /* 16B7A4 8018DC54 8C430074 */        lw $v1, 0x74($v0)
  /* 16B7A8 8018DC58 3C0142B4 */       lui $at, (0x42B40000 >> 16) # 90.0
  /* 16B7AC 8018DC5C 44812000 */      mtc1 $at, $f4 # 90.0 to cop1
  /* 16B7B0 8018DC60 44050000 */      mfc1 $a1, $f0
  /* 16B7B4 8018DC64 44060000 */      mfc1 $a2, $f0
  /* 16B7B8 8018DC68 3C07439B */       lui $a3, 0x439b
  /* 16B7BC 8018DC6C 24640008 */     addiu $a0, $v1, 8
  /* 16B7C0 8018DC70 AFA30040 */        sw $v1, 0x40($sp)
  /* 16B7C4 8018DC74 0C001C20 */       jal func_80007080
  /* 16B7C8 8018DC78 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16B7CC 8018DC7C 3C014070 */       lui $at, (0x40700000 >> 16) # 3.75
  /* 16B7D0 8018DC80 8FA40040 */        lw $a0, 0x40($sp)
  /* 16B7D4 8018DC84 44813000 */      mtc1 $at, $f6 # 3.75 to cop1
  /* 16B7D8 8018DC88 3C0C8019 */       lui $t4, %hi(D_ovl40_8018E3E4)
  /* 16B7DC 8018DC8C 3C0D0000 */       lui $t5, %hi(D_NF_000000C0)
  /* 16B7E0 8018DC90 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16B7E4 8018DC94 8D8CE3E4 */        lw $t4, %lo(D_ovl40_8018E3E4)($t4)
  /* 16B7E8 8018DC98 25AD00C0 */     addiu $t5, $t5, %lo(D_NF_000000C0)
  /* 16B7EC 8018DC9C 24060000 */     addiu $a2, $zero, 0
  /* 16B7F0 8018DCA0 0C003E8F */       jal func_8000FA3C
  /* 16B7F4 8018DCA4 018D2821 */      addu $a1, $t4, $t5
  /* 16B7F8 8018DCA8 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16B7FC 8018DCAC 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16B800 8018DCB0 8FA40044 */        lw $a0, 0x44($sp)
  /* 16B804 8018DCB4 24060001 */     addiu $a2, $zero, 1
  /* 16B808 8018DCB8 0C002062 */       jal omAddGObjCommonProc
  /* 16B80C 8018DCBC 24070001 */     addiu $a3, $zero, 1
  /* 16B810 8018DCC0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16B814 8018DCC4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16B818 8018DCC8 03E00008 */        jr $ra
  /* 16B81C 8018DCCC 00000000 */       nop 

glabel func_ovl40_8018DCD0
  /* 16B820 8018DCD0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16B824 8018DCD4 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16B828 8018DCD8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16B82C 8018DCDC 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16B830 8018DCE0 240F0014 */     addiu $t7, $zero, 0x14
  /* 16B834 8018DCE4 24180000 */     addiu $t8, $zero, 0
  /* 16B838 8018DCE8 3C191000 */       lui $t9, 0x1000
  /* 16B83C 8018DCEC 2408FFFF */     addiu $t0, $zero, -1
  /* 16B840 8018DCF0 24090001 */     addiu $t1, $zero, 1
  /* 16B844 8018DCF4 240A0001 */     addiu $t2, $zero, 1
  /* 16B848 8018DCF8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16B84C 8018DCFC AFA90028 */        sw $t1, 0x28($sp)
  /* 16B850 8018DD00 AFA80020 */        sw $t0, 0x20($sp)
  /* 16B854 8018DD04 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16B858 8018DD08 AFB80018 */        sw $t8, 0x18($sp)
  /* 16B85C 8018DD0C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16B860 8018DD10 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16B864 8018DD14 AFA00024 */        sw $zero, 0x24($sp)
  /* 16B868 8018DD18 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16B86C 8018DD1C AFA00034 */        sw $zero, 0x34($sp)
  /* 16B870 8018DD20 24040401 */     addiu $a0, $zero, 0x401
  /* 16B874 8018DD24 00002825 */        or $a1, $zero, $zero
  /* 16B878 8018DD28 24060010 */     addiu $a2, $zero, 0x10
  /* 16B87C 8018DD2C 0C002E4F */       jal func_8000B93C
  /* 16B880 8018DD30 3C078000 */       lui $a3, 0x8000
  /* 16B884 8018DD34 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16B888 8018DD38 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16B88C 8018DD3C 8C430074 */        lw $v1, 0x74($v0)
  /* 16B890 8018DD40 3C0142B4 */       lui $at, (0x42B40000 >> 16) # 90.0
  /* 16B894 8018DD44 44812000 */      mtc1 $at, $f4 # 90.0 to cop1
  /* 16B898 8018DD48 44050000 */      mfc1 $a1, $f0
  /* 16B89C 8018DD4C 44060000 */      mfc1 $a2, $f0
  /* 16B8A0 8018DD50 3C07439B */       lui $a3, 0x439b
  /* 16B8A4 8018DD54 24640008 */     addiu $a0, $v1, 8
  /* 16B8A8 8018DD58 AFA30044 */        sw $v1, 0x44($sp)
  /* 16B8AC 8018DD5C 0C001C20 */       jal func_80007080
  /* 16B8B0 8018DD60 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16B8B4 8018DD64 8FA30044 */        lw $v1, 0x44($sp)
  /* 16B8B8 8018DD68 240B0005 */     addiu $t3, $zero, 5
  /* 16B8BC 8018DD6C AC6B0080 */        sw $t3, 0x80($v1)
  /* 16B8C0 8018DD70 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16B8C4 8018DD74 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16B8C8 8018DD78 03E00008 */        jr $ra
  /* 16B8CC 8018DD7C 00000000 */       nop 

glabel func_ovl40_8018DD80
  /* 16B8D0 8018DD80 3C028019 */       lui $v0, %hi(D_ovl40_8018E1C8)
  /* 16B8D4 8018DD84 2442E1C8 */     addiu $v0, $v0, %lo(D_ovl40_8018E1C8)
  /* 16B8D8 8018DD88 8C4E0000 */        lw $t6, ($v0) # D_ovl40_8018E1C8 + 0
  /* 16B8DC 8018DD8C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16B8E0 8018DD90 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16B8E4 8018DD94 AFA40018 */        sw $a0, 0x18($sp)
  /* 16B8E8 8018DD98 25CF0001 */     addiu $t7, $t6, 1
  /* 16B8EC 8018DD9C AC4F0000 */        sw $t7, ($v0) # D_ovl40_8018E1C8 + 0
  /* 16B8F0 8018DDA0 0C0E41DB */       jal func_ovl1_8039076C
  /* 16B8F4 8018DDA4 3404D000 */       ori $a0, $zero, 0xd000
  /* 16B8F8 8018DDA8 10400007 */      beqz $v0, .L8018DDC8
  /* 16B8FC 8018DDAC 24190001 */     addiu $t9, $zero, 1
  /* 16B900 8018DDB0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16B904 8018DDB4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16B908 8018DDB8 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16B90C 8018DDBC A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16B910 8018DDC0 0C00171D */       jal func_80005C74
  /* 16B914 8018DDC4 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DDC8:
  /* 16B918 8018DDC8 3C028019 */       lui $v0, %hi(D_ovl40_8018E1C8)
  /* 16B91C 8018DDCC 8C42E1C8 */        lw $v0, %lo(D_ovl40_8018E1C8)($v0)
  /* 16B920 8018DDD0 2401000F */     addiu $at, $zero, 0xf
  /* 16B924 8018DDD4 3C048019 */       lui $a0, %hi(D_ovl40_8018E1CC)
  /* 16B928 8018DDD8 5441000C */      bnel $v0, $at, .L8018DE0C
  /* 16B92C 8018DDDC 2401003C */     addiu $at, $zero, 0x3c
  /* 16B930 8018DDE0 0C0026A1 */       jal omEjectGObjCommon
  /* 16B934 8018DDE4 8C84E1CC */        lw $a0, %lo(D_ovl40_8018E1CC)($a0)
  /* 16B938 8018DDE8 0C06357D */       jal func_ovl40_8018D5F4
  /* 16B93C 8018DDEC 00000000 */       nop 
  /* 16B940 8018DDF0 0C063649 */       jal func_ovl40_8018D924
  /* 16B944 8018DDF4 00000000 */       nop 
  /* 16B948 8018DDF8 0C063690 */       jal func_ovl40_8018DA40
  /* 16B94C 8018DDFC 00000000 */       nop 
  /* 16B950 8018DE00 3C028019 */       lui $v0, %hi(D_ovl40_8018E1C8)
  /* 16B954 8018DE04 8C42E1C8 */        lw $v0, %lo(D_ovl40_8018E1C8)($v0)
  /* 16B958 8018DE08 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE0C:
  /* 16B95C 8018DE0C 14410007 */       bne $v0, $at, .L8018DE2C
  /* 16B960 8018DE10 24090020 */     addiu $t1, $zero, 0x20
  /* 16B964 8018DE14 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16B968 8018DE18 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16B96C 8018DE1C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16B970 8018DE20 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16B974 8018DE24 0C00171D */       jal func_80005C74
  /* 16B978 8018DE28 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE2C:
  /* 16B97C 8018DE2C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16B980 8018DE30 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16B984 8018DE34 03E00008 */        jr $ra
  /* 16B988 8018DE38 00000000 */       nop 

glabel func_ovl40_8018DE3C
  /* 16B98C 8018DE3C 3C018019 */       lui $at, %hi(D_ovl40_8018E1C8)
  /* 16B990 8018DE40 03E00008 */        jr $ra
  /* 16B994 8018DE44 AC20E1C8 */        sw $zero, %lo(D_ovl40_8018E1C8)($at)

glabel func_ovl40_8018DE48
  /* 16B998 8018DE48 3C048019 */       lui $a0, %hi(D_ovl40_8018E3E8)
  /* 16B99C 8018DE4C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16B9A0 8018DE50 2484E3E8 */     addiu $a0, $a0, %lo(D_ovl40_8018E3E8)
  /* 16B9A4 8018DE54 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16B9A8 8018DE58 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 16B9AC 8018DE5C 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 16B9B0 8018DE60 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 16B9B4 8018DE64 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16B9B8 8018DE68 24030004 */     addiu $v1, $zero, 4
  /* 16B9BC 8018DE6C 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 16B9C0 8018DE70 0080C825 */        or $t9, $a0, $zero
  .L8018DE74:
  /* 16B9C4 8018DE74 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16B9C8 8018DE78 25CE000C */     addiu $t6, $t6, 0xc
  /* 16B9CC 8018DE7C 2739000C */     addiu $t9, $t9, 0xc
  /* 16B9D0 8018DE80 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16B9D4 8018DE84 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 16B9D8 8018DE88 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16B9DC 8018DE8C 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 16B9E0 8018DE90 15C8FFF8 */       bne $t6, $t0, .L8018DE74
  /* 16B9E4 8018DE94 AF38FFFC */        sw $t8, -4($t9)
  /* 16B9E8 8018DE98 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16B9EC 8018DE9C 240B0001 */     addiu $t3, $zero, 1
  /* 16B9F0 8018DEA0 240D0005 */     addiu $t5, $zero, 5
  /* 16B9F4 8018DEA4 AF380000 */        sw $t8, ($t9)
  /* 16B9F8 8018DEA8 AC440000 */        sw $a0, ($v0) # gpBattleState + 0
  /* 16B9FC 8018DEAC A0830000 */        sb $v1, ($a0) # D_ovl40_8018E3E8 + 0
  /* 16BA00 8018DEB0 A0830001 */        sb $v1, 1($a0) # D_ovl40_8018E3E8 + 1
  /* 16BA04 8018DEB4 A08B0004 */        sb $t3, 4($a0) # D_ovl40_8018E3E8 + 4
  /* 16BA08 8018DEB8 A08D0023 */        sb $t5, 0x23($a0) # D_ovl40_8018E3E8 + 35
  /* 16BA0C 8018DEBC 0C063430 */       jal func_ovl40_8018D0C0
  /* 16BA10 8018DEC0 A0830022 */        sb $v1, 0x22($a0) # D_ovl40_8018E3E8 + 34
  /* 16BA14 8018DEC4 3C058019 */       lui $a1, %hi(func_ovl40_8018DD80)
  /* 16BA18 8018DEC8 24A5DD80 */     addiu $a1, $a1, %lo(func_ovl40_8018DD80)
  /* 16BA1C 8018DECC 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 16BA20 8018DED0 2406000D */     addiu $a2, $zero, 0xd
  /* 16BA24 8018DED4 0C00265A */       jal omMakeGObjCommon
  /* 16BA28 8018DED8 3C078000 */       lui $a3, 0x8000
  /* 16BA2C 8018DEDC 241900FF */     addiu $t9, $zero, 0xff
  /* 16BA30 8018DEE0 AFB90010 */        sw $t9, 0x10($sp)
  /* 16BA34 8018DEE4 24040009 */     addiu $a0, $zero, 9
  /* 16BA38 8018DEE8 3C058000 */       lui $a1, 0x8000
  /* 16BA3C 8018DEEC 24060064 */     addiu $a2, $zero, 0x64
  /* 16BA40 8018DEF0 0C002E7F */       jal func_8000B9FC
  /* 16BA44 8018DEF4 24070003 */     addiu $a3, $zero, 3
  /* 16BA48 8018DEF8 0C06378F */       jal func_ovl40_8018DE3C
  /* 16BA4C 8018DEFC 00000000 */       nop 
  /* 16BA50 8018DF00 0C045624 */       jal func_ovl2_80115890
  /* 16BA54 8018DF04 00000000 */       nop 
  /* 16BA58 8018DF08 0C03B04C */       jal func_ovl2_800EC130
  /* 16BA5C 8018DF0C 00000000 */       nop 
  /* 16BA60 8018DF10 0C03F0A1 */       jal func_ovl2_800FC284
  /* 16BA64 8018DF14 00000000 */       nop 
  /* 16BA68 8018DF18 2404000A */     addiu $a0, $zero, 0xa
  /* 16BA6C 8018DF1C 2405000A */     addiu $a1, $zero, 0xa
  /* 16BA70 8018DF20 24060136 */     addiu $a2, $zero, 0x136
  /* 16BA74 8018DF24 0C043966 */       jal func_ovl2_8010E598
  /* 16BA78 8018DF28 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16BA7C 8018DF2C 0C0436D5 */       jal func_ovl2_8010DB54
  /* 16BA80 8018DF30 00000000 */       nop 
  /* 16BA84 8018DF34 24040003 */     addiu $a0, $zero, 3
  /* 16BA88 8018DF38 0C035C65 */       jal func_ovl2_800D7194
  /* 16BA8C 8018DF3C 24050002 */     addiu $a1, $zero, 2
  /* 16BA90 8018DF40 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 16BA94 8018DF44 00000000 */       nop 
  /* 16BA98 8018DF48 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 16BA9C 8018DF4C 00000000 */       nop 
  /* 16BAA0 8018DF50 0C03F4C0 */       jal efManager_AllocUserData
  /* 16BAA4 8018DF54 00000000 */       nop 
  /* 16BAA8 8018DF58 0C035E1B */       jal func_ovl2_800D786C
  /* 16BAAC 8018DF5C 24040005 */     addiu $a0, $zero, 5
  /* 16BAB0 8018DF60 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 16BAB4 8018DF64 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 16BAB8 8018DF68 0C001260 */       jal hal_alloc
  /* 16BABC 8018DF6C 24050010 */     addiu $a1, $zero, 0x10
  /* 16BAC0 8018DF70 3C018019 */       lui $at, %hi(D_ovl40_8018E1DC)
  /* 16BAC4 8018DF74 0C0636D0 */       jal func_ovl40_8018DB40
  /* 16BAC8 8018DF78 AC22E1DC */        sw $v0, %lo(D_ovl40_8018E1DC)($at)
  /* 16BACC 8018DF7C 0C063734 */       jal func_ovl40_8018DCD0
  /* 16BAD0 8018DF80 00000000 */       nop 
  /* 16BAD4 8018DF84 0C0636F8 */       jal func_ovl40_8018DBE0
  /* 16BAD8 8018DF88 00000000 */       nop 
  /* 16BADC 8018DF8C 0C063465 */       jal func_ovl40_8018D194
  /* 16BAE0 8018DF90 00000000 */       nop 
  /* 16BAE4 8018DF94 0C00024B */       jal func_8000092C
  /* 16BAE8 8018DF98 00000000 */       nop 
  /* 16BAEC 8018DF9C 2C41069F */     sltiu $at, $v0, 0x69f
  /* 16BAF0 8018DFA0 50200007 */      beql $at, $zero, .L8018DFC0
  /* 16BAF4 8018DFA4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFA8:
  /* 16BAF8 8018DFA8 0C00024B */       jal func_8000092C
  /* 16BAFC 8018DFAC 00000000 */       nop 
  /* 16BB00 8018DFB0 2C41069F */     sltiu $at, $v0, 0x69f
  /* 16BB04 8018DFB4 1420FFFC */      bnez $at, .L8018DFA8
  /* 16BB08 8018DFB8 00000000 */       nop 
  /* 16BB0C 8018DFBC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFC0:
  /* 16BB10 8018DFC0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16BB14 8018DFC4 03E00008 */        jr $ra
  /* 16BB18 8018DFC8 00000000 */       nop 

glabel func_ovl40_8018DFCC
  /* 16BB1C 8018DFCC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16BB20 8018DFD0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16BB24 8018DFD4 8C830000 */        lw $v1, ($a0)
  /* 16BB28 8018DFD8 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16BB2C 8018DFDC 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16BB30 8018DFE0 246E0008 */     addiu $t6, $v1, 8
  /* 16BB34 8018DFE4 AC8E0000 */        sw $t6, ($a0)
  /* 16BB38 8018DFE8 3C180002 */       lui $t8, 2
  /* 16BB3C 8018DFEC 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 16BB40 8018DFF0 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16BB44 8018DFF4 AC780004 */        sw $t8, 4($v1)
  /* 16BB48 8018DFF8 AC6F0000 */        sw $t7, ($v1)
  /* 16BB4C 8018DFFC 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 16BB50 8018E000 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16BB54 8018E004 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 16BB58 8018E008 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16BB5C 8018E00C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16BB60 8018E010 03E00008 */        jr $ra
  /* 16BB64 8018E014 00000000 */       nop 

glabel intro_focus_link_entry
  /* 16BB68 8018E018 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16BB6C 8018E01C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16BB70 8018E020 3C048019 */       lui $a0, %hi(D_ovl40_8018E0DC)
  /* 16BB74 8018E024 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16BB78 8018E028 2484E0DC */     addiu $a0, $a0, %lo(D_ovl40_8018E0DC)
  /* 16BB7C 8018E02C AFBF0014 */        sw $ra, 0x14($sp)
  /* 16BB80 8018E030 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16BB84 8018E034 0C001C09 */       jal func_80007024
  /* 16BB88 8018E038 AC8F000C */        sw $t7, 0xc($a0) # D_ovl40_8018E0DC + 12
  /* 16BB8C 8018E03C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16BB90 8018E040 3C198019 */       lui $t9, %hi(D_NF_8018E5E0)
  /* 16BB94 8018E044 3C048019 */       lui $a0, %hi(D_ovl40_8018E0F8)
  /* 16BB98 8018E048 2739E5E0 */     addiu $t9, $t9, %lo(D_NF_8018E5E0)
  /* 16BB9C 8018E04C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16BBA0 8018E050 2484E0F8 */     addiu $a0, $a0, %lo(D_ovl40_8018E0F8)
  /* 16BBA4 8018E054 03194023 */      subu $t0, $t8, $t9
  /* 16BBA8 8018E058 0C001A0F */       jal func_8000683C
  /* 16BBAC 8018E05C AC880010 */        sw $t0, 0x10($a0) # D_ovl40_8018E0F8 + 16
  /* 16BBB0 8018E060 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16BBB4 8018E064 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16BBB8 8018E068 03E00008 */        jr $ra
  /* 16BBBC 8018E06C 00000000 */       nop 
#
#glabel D_ovl40_8018E070   # Routine parsed as data
#  /* 16BBC0 8018E070 C4480000 */      lwc1 $f8, ($v0)
