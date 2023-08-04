.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018D580

glabel func_ovl5_8018D0C0
  /* 10B370 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 10B374 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 10B378 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 10B37C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl5_8018D678)
  /* 10B380 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl5_8018D718)
  /* 10B384 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B388 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 10B38C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 10B390 8018D0E0 2718D678 */     addiu $t8, $t8, %lo(D_ovl5_8018D678)
  /* 10B394 8018D0E4 24190014 */     addiu $t9, $zero, 0x14
  /* 10B398 8018D0E8 2508D718 */     addiu $t0, $t0, %lo(D_ovl5_8018D718)
  /* 10B39C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 10B3A0 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 10B3A4 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 10B3A8 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 10B3AC 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 10B3B0 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 10B3B4 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 10B3B8 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 10B3BC 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 10B3C0 8018D110 0C0337DE */       jal rldm_initialize
  /* 10B3C4 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 10B3C8 8018D118 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B3CC 8018D11C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B3D0 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 10B3D4 8018D124 24050008 */     addiu $a1, $zero, 8
  /* 10B3D8 8018D128 00402025 */        or $a0, $v0, $zero
  /* 10B3DC 8018D12C 0C001260 */       jal hal_alloc
  /* 10B3E0 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 10B3E4 8018D134 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B3E8 8018D138 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 10B3EC 8018D13C 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 10B3F0 8018D140 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B3F4 8018D144 24050008 */     addiu $a1, $zero, 8
  /* 10B3F8 8018D148 0C033781 */       jal rldm_load_files_into
  /* 10B3FC 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 10B400 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B404 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 10B408 8018D158 03E00008 */        jr $ra
  /* 10B40C 8018D15C 00000000 */       nop 

glabel func_ovl5_8018D160
  /* 10B410 8018D160 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B414 8018D164 AFA40018 */        sw $a0, 0x18($sp)
  /* 10B418 8018D168 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B41C 8018D16C 3C048019 */       lui $a0, %hi(D_ovl5_8018D750)
  /* 10B420 8018D170 0C03A6D0 */       jal ftCommon_CheckHowToPlayInputSeq
  /* 10B424 8018D174 8C84D750 */        lw $a0, %lo(D_ovl5_8018D750)($a0)
  /* 10B428 8018D178 54400006 */      bnel $v0, $zero, .L8018D194
  /* 10B42C 8018D17C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B430 8018D180 0C009A70 */       jal func_800269C0
  /* 10B434 8018D184 2404009D */     addiu $a0, $zero, 0x9d
  /* 10B438 8018D188 0C00171D */       jal func_80005C74
  /* 10B43C 8018D18C 00000000 */       nop 
  /* 10B440 8018D190 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D194:
  /* 10B444 8018D194 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10B448 8018D198 03E00008 */        jr $ra
  /* 10B44C 8018D19C 00000000 */       nop 

glabel func_ovl5_8018D1A0
  /* 10B450 8018D1A0 27BDFF38 */     addiu $sp, $sp, -0xc8
  /* 10B454 8018D1A4 3C038019 */       lui $v1, %hi(D_ovl5_8018D758)
  /* 10B458 8018D1A8 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 10B45C 8018D1AC 2463D758 */     addiu $v1, $v1, %lo(D_ovl5_8018D758)
  /* 10B460 8018D1B0 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10B464 8018D1B4 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 10B468 8018D1B8 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 10B46C 8018D1BC AFBF005C */        sw $ra, 0x5c($sp)
  /* 10B470 8018D1C0 AFBE0058 */        sw $fp, 0x58($sp)
  /* 10B474 8018D1C4 AFB70054 */        sw $s7, 0x54($sp)
  /* 10B478 8018D1C8 AFB60050 */        sw $s6, 0x50($sp)
  /* 10B47C 8018D1CC AFB5004C */        sw $s5, 0x4c($sp)
  /* 10B480 8018D1D0 AFB40048 */        sw $s4, 0x48($sp)
  /* 10B484 8018D1D4 AFB30044 */        sw $s3, 0x44($sp)
  /* 10B488 8018D1D8 AFB20040 */        sw $s2, 0x40($sp)
  /* 10B48C 8018D1DC AFB1003C */        sw $s1, 0x3c($sp)
  /* 10B490 8018D1E0 AFB00038 */        sw $s0, 0x38($sp)
  /* 10B494 8018D1E4 F7B60030 */      sdc1 $f22, 0x30($sp)
  /* 10B498 8018D1E8 F7B40028 */      sdc1 $f20, 0x28($sp)
  /* 10B49C 8018D1EC 24040006 */     addiu $a0, $zero, 6
  /* 10B4A0 8018D1F0 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 10B4A4 8018D1F4 0060C825 */        or $t9, $v1, $zero
  .L8018D1F8:
  /* 10B4A8 8018D1F8 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 10B4AC 8018D1FC 25CE000C */     addiu $t6, $t6, 0xc
  /* 10B4B0 8018D200 2739000C */     addiu $t9, $t9, 0xc
  /* 10B4B4 8018D204 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 10B4B8 8018D208 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 10B4BC 8018D20C AF2FFFF8 */        sw $t7, -8($t9)
  /* 10B4C0 8018D210 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 10B4C4 8018D214 15C8FFF8 */       bne $t6, $t0, .L8018D1F8
  /* 10B4C8 8018D218 AF38FFFC */        sw $t8, -4($t9)
  /* 10B4CC 8018D21C 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 10B4D0 8018D220 240B0001 */     addiu $t3, $zero, 1
  /* 10B4D4 8018D224 24080004 */     addiu $t0, $zero, 4
  /* 10B4D8 8018D228 AF380000 */        sw $t8, ($t9)
  /* 10B4DC 8018D22C AC430000 */        sw $v1, ($v0) # gpBattleState + 0
  /* 10B4E0 8018D230 A0640000 */        sb $a0, ($v1) # D_ovl5_8018D758 + 0
  /* 10B4E4 8018D234 A0640001 */        sb $a0, 1($v1) # D_ovl5_8018D758 + 1
  /* 10B4E8 8018D238 A06B0004 */        sb $t3, 4($v1) # D_ovl5_8018D758 + 4
  /* 10B4EC 8018D23C A0600023 */        sb $zero, 0x23($v1) # D_ovl5_8018D758 + 35
  /* 10B4F0 8018D240 0C063430 */       jal func_ovl5_8018D0C0
  /* 10B4F4 8018D244 A0680022 */        sb $t0, 0x22($v1) # D_ovl5_8018D758 + 34
  /* 10B4F8 8018D248 3C108000 */       lui $s0, %hi(D_NF_80000023)
  /* 10B4FC 8018D24C 3C058019 */       lui $a1, %hi(func_ovl5_8018D160)
  /* 10B500 8018D250 24A5D160 */     addiu $a1, $a1, %lo(func_ovl5_8018D160)
  /* 10B504 8018D254 02003825 */        or $a3, $s0, $zero
  /* 10B508 8018D258 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 10B50C 8018D25C 0C00265A */       jal omMakeGObjCommon
  /* 10B510 8018D260 2406000D */     addiu $a2, $zero, 0xd
  /* 10B514 8018D264 241900FF */     addiu $t9, $zero, 0xff
  /* 10B518 8018D268 AFB90010 */        sw $t9, 0x10($sp)
  /* 10B51C 8018D26C 24040009 */     addiu $a0, $zero, 9
  /* 10B520 8018D270 02002825 */        or $a1, $s0, $zero
  /* 10B524 8018D274 24060064 */     addiu $a2, $zero, 0x64
  /* 10B528 8018D278 0C002E7F */       jal func_8000B9FC
  /* 10B52C 8018D27C 24070001 */     addiu $a3, $zero, 1
  /* 10B530 8018D280 0C045624 */       jal func_ovl2_80115890
  /* 10B534 8018D284 00000000 */       nop 
  /* 10B538 8018D288 0C03B04C */       jal func_ovl2_800EC130
  /* 10B53C 8018D28C 00000000 */       nop 
  /* 10B540 8018D290 0C03F0A1 */       jal func_ovl2_800FC284
  /* 10B544 8018D294 00000000 */       nop 
  /* 10B548 8018D298 2404000A */     addiu $a0, $zero, 0xa
  /* 10B54C 8018D29C 2405000A */     addiu $a1, $zero, 0xa
  /* 10B550 8018D2A0 24060136 */     addiu $a2, $zero, 0x136
  /* 10B554 8018D2A4 0C043966 */       jal func_ovl2_8010E598
  /* 10B558 8018D2A8 240700E6 */     addiu $a3, $zero, 0xe6
  /* 10B55C 8018D2AC 0C0436D5 */       jal func_ovl2_8010DB54
  /* 10B560 8018D2B0 00000000 */       nop 
  /* 10B564 8018D2B4 0C0412F7 */       jal func_ovl2_80104BDC
  /* 10B568 8018D2B8 00000000 */       nop 
  /* 10B56C 8018D2BC 0C0436C0 */       jal func_ovl2_8010DB00
  /* 10B570 8018D2C0 00000000 */       nop 
  /* 10B574 8018D2C4 0C041580 */       jal func_ovl2_80105600
  /* 10B578 8018D2C8 00000000 */       nop 
  /* 10B57C 8018D2CC 24040003 */     addiu $a0, $zero, 3
  /* 10B580 8018D2D0 0C035C65 */       jal func_ovl2_800D7194
  /* 10B584 8018D2D4 24050001 */     addiu $a1, $zero, 1
  /* 10B588 8018D2D8 0C05952C */       jal wpManager_AllocUserData
  /* 10B58C 8018D2DC 00000000 */       nop 
  /* 10B590 8018D2E0 0C05B7A8 */       jal itManager_AllocUserData
  /* 10B594 8018D2E4 00000000 */       nop 
  /* 10B598 8018D2E8 0C03F4C0 */       jal efManager_AllocUserData
  /* 10B59C 8018D2EC 00000000 */       nop 
  /* 10B5A0 8018D2F0 0C0455B9 */       jal func_ovl2_801156E4
  /* 10B5A4 8018D2F4 00000000 */       nop 
  /* 10B5A8 8018D2F8 0C0594F8 */       jal func_ovl3_801653E0
  /* 10B5AC 8018D2FC 00000000 */       nop 
  /* 10B5B0 8018D300 3C014316 */       lui $at, (0x43160000 >> 16) # 150.0
  /* 10B5B4 8018D304 3C1E8019 */       lui $fp, %hi(D_ovl5_8018D750)
  /* 10B5B8 8018D308 3C158011 */       lui $s5, %hi(D_ovl2_80116DD0)
  /* 10B5BC 8018D30C 4481B000 */      mtc1 $at, $f22 # 150.0 to cop1
  /* 10B5C0 8018D310 4480A000 */      mtc1 $zero, $f20
  /* 10B5C4 8018D314 26B56DD0 */     addiu $s5, $s5, %lo(D_ovl2_80116DD0)
  /* 10B5C8 8018D318 27DED750 */     addiu $fp, $fp, %lo(D_ovl5_8018D750)
  /* 10B5CC 8018D31C 00008825 */        or $s1, $zero, $zero
  /* 10B5D0 8018D320 00009025 */        or $s2, $zero, $zero
  /* 10B5D4 8018D324 24170004 */     addiu $s7, $zero, 4
  /* 10B5D8 8018D328 24160002 */     addiu $s6, $zero, 2
  /* 10B5DC 8018D32C 27B40074 */     addiu $s4, $sp, 0x74
  .L8018D330:
  /* 10B5E0 8018D330 02A04825 */        or $t1, $s5, $zero
  /* 10B5E4 8018D334 02805025 */        or $t2, $s4, $zero
  /* 10B5E8 8018D338 26AB003C */     addiu $t3, $s5, 0x3c
  .L8018D33C:
  /* 10B5EC 8018D33C 8D380000 */        lw $t8, ($t1)
  /* 10B5F0 8018D340 2529000C */     addiu $t1, $t1, 0xc
  /* 10B5F4 8018D344 254A000C */     addiu $t2, $t2, 0xc
  /* 10B5F8 8018D348 AD58FFF4 */        sw $t8, -0xc($t2)
  /* 10B5FC 8018D34C 8D2FFFF8 */        lw $t7, -8($t1)
  /* 10B600 8018D350 AD4FFFF8 */        sw $t7, -8($t2)
  /* 10B604 8018D354 8D38FFFC */        lw $t8, -4($t1)
  /* 10B608 8018D358 152BFFF8 */       bne $t1, $t3, .L8018D33C
  /* 10B60C 8018D35C AD58FFFC */        sw $t8, -4($t2)
  /* 10B610 8018D360 8D380000 */        lw $t8, ($t1)
  /* 10B614 8018D364 3C0C800A */       lui $t4, %hi(gpBattleState)
  /* 10B618 8018D368 00114080 */       sll $t0, $s1, 2
  /* 10B61C 8018D36C AD580000 */        sw $t8, ($t2)
  /* 10B620 8018D370 8D8C50E8 */        lw $t4, %lo(gpBattleState)($t4)
  /* 10B624 8018D374 01114021 */      addu $t0, $t0, $s1
  /* 10B628 8018D378 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 10B62C 8018D37C 01928021 */      addu $s0, $t4, $s2
  /* 10B630 8018D380 920D0022 */       lbu $t5, %lo(D_NF_80000022)($s0)
  /* 10B634 8018D384 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 10B638 8018D388 00084040 */       sll $t0, $t0, 1
  /* 10B63C 8018D38C 12CD002C */       beq $s6, $t5, .L8018D440
  /* 10B640 8018D390 010E9821 */      addu $s3, $t0, $t6
  /* 10B644 8018D394 0C035E1B */       jal func_ovl2_800D786C
  /* 10B648 8018D398 92040023 */       lbu $a0, %lo(D_NF_80000023)($s0)
  /* 10B64C 8018D39C 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10B650 8018D3A0 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 10B654 8018D3A4 240B0001 */     addiu $t3, $zero, 1
  /* 10B658 8018D3A8 240A0001 */     addiu $t2, $zero, 1
  /* 10B65C 8018D3AC 00528021 */      addu $s0, $v0, $s2
  /* 10B660 8018D3B0 92190023 */       lbu $t9, %lo(D_NF_80000023)($s0)
  /* 10B664 8018D3B4 E7B40078 */      swc1 $f20, 0x78($sp)
  /* 10B668 8018D3B8 E7B6007C */      swc1 $f22, 0x7c($sp)
  /* 10B66C 8018D3BC E7B40080 */      swc1 $f20, 0x80($sp)
  /* 10B670 8018D3C0 AFAB0084 */        sw $t3, 0x84($sp)
  /* 10B674 8018D3C4 AFB90074 */        sw $t9, 0x74($sp)
  /* 10B678 8018D3C8 92090024 */       lbu $t1, %lo(D_NF_80000024)($s0)
  /* 10B67C 8018D3CC A3B10089 */        sb $s1, 0x89($sp)
  /* 10B680 8018D3D0 A3AA008A */        sb $t2, 0x8a($sp)
  /* 10B684 8018D3D4 A3A90088 */        sb $t1, 0x88($sp)
  /* 10B688 8018D3D8 920F0026 */       lbu $t7, %lo(D_NF_80000026)($s0)
  /* 10B68C 8018D3DC A3AF008B */        sb $t7, 0x8b($sp)
  /* 10B690 8018D3E0 92180021 */       lbu $t8, %lo(D_NF_80000021)($s0)
  /* 10B694 8018D3E4 A3B8008D */        sb $t8, 0x8d($sp)
  /* 10B698 8018D3E8 920C0020 */       lbu $t4, %lo(D_NF_80000020)($s0)
  /* 10B69C 8018D3EC A3AC008E */        sb $t4, 0x8e($sp)
  /* 10B6A0 8018D3F0 904D0007 */       lbu $t5, 7($v0)
  /* 10B6A4 8018D3F4 AFA00098 */        sw $zero, 0x98($sp)
  /* 10B6A8 8018D3F8 A3AD008F */        sb $t5, 0x8f($sp)
  /* 10B6AC 8018D3FC 92080022 */       lbu $t0, %lo(D_NF_80000022)($s0)
  /* 10B6B0 8018D400 AFB300A0 */        sw $s3, 0xa0($sp)
  /* 10B6B4 8018D404 AFA8009C */        sw $t0, 0x9c($sp)
  /* 10B6B8 8018D408 0C035E2D */       jal func_ovl2_800D78B4
  /* 10B6BC 8018D40C 92040023 */       lbu $a0, %lo(D_NF_80000023)($s0)
  /* 10B6C0 8018D410 AFA200AC */        sw $v0, 0xac($sp)
  /* 10B6C4 8018D414 0C035FCF */       jal ftManager_CreateFighter
  /* 10B6C8 8018D418 02802025 */        or $a0, $s4, $zero
  /* 10B6CC 8018D41C 00408025 */        or $s0, $v0, $zero
  /* 10B6D0 8018D420 AFC20000 */        sw $v0, ($fp) # D_ovl5_8018D750 + 0
  /* 10B6D4 8018D424 02202025 */        or $a0, $s1, $zero
  /* 10B6D8 8018D428 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 10B6DC 8018D42C 00402825 */        or $a1, $v0, $zero
  /* 10B6E0 8018D430 3C058019 */       lui $a1, %hi(D_ovl5_8018D580)
  /* 10B6E4 8018D434 24A5D580 */     addiu $a1, $a1, %lo(D_ovl5_8018D580)
  /* 10B6E8 8018D438 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 10B6EC 8018D43C 02002025 */        or $a0, $s0, $zero
  .L8018D440:
  /* 10B6F0 8018D440 26310001 */     addiu $s1, $s1, 1
  /* 10B6F4 8018D444 1637FFBA */       bne $s1, $s7, .L8018D330
  /* 10B6F8 8018D448 26520074 */     addiu $s2, $s2, 0x74
  /* 10B6FC 8018D44C 3C0E8019 */       lui $t6, %hi(D_ovl5_8018D5B8)
  /* 10B700 8018D450 25CED5B8 */     addiu $t6, $t6, %lo(D_ovl5_8018D5B8)
  /* 10B704 8018D454 8DCB0000 */        lw $t3, ($t6) # D_ovl5_8018D5B8 + 0
  /* 10B708 8018D458 27A70070 */     addiu $a3, $sp, 0x70
  /* 10B70C 8018D45C 2409000C */     addiu $t1, $zero, 0xc
  /* 10B710 8018D460 ACEB0000 */        sw $t3, ($a3)
  /* 10B714 8018D464 240A0001 */     addiu $t2, $zero, 1
  /* 10B718 8018D468 AFAA0014 */        sw $t2, 0x14($sp)
  /* 10B71C 8018D46C AFA00018 */        sw $zero, 0x18($sp)
  /* 10B720 8018D470 AFA90010 */        sw $t1, 0x10($sp)
  /* 10B724 8018D474 240403FD */     addiu $a0, $zero, 0x3fd
  /* 10B728 8018D478 2405000D */     addiu $a1, $zero, 0xd
  /* 10B72C 8018D47C 0C035018 */       jal func_ovl0_800D4060
  /* 10B730 8018D480 2406000A */     addiu $a2, $zero, 0xa
  /* 10B734 8018D484 8FBF005C */        lw $ra, 0x5c($sp)
  /* 10B738 8018D488 D7B40028 */      ldc1 $f20, 0x28($sp)
  /* 10B73C 8018D48C D7B60030 */      ldc1 $f22, 0x30($sp)
  /* 10B740 8018D490 8FB00038 */        lw $s0, 0x38($sp)
  /* 10B744 8018D494 8FB1003C */        lw $s1, 0x3c($sp)
  /* 10B748 8018D498 8FB20040 */        lw $s2, 0x40($sp)
  /* 10B74C 8018D49C 8FB30044 */        lw $s3, 0x44($sp)
  /* 10B750 8018D4A0 8FB40048 */        lw $s4, 0x48($sp)
  /* 10B754 8018D4A4 8FB5004C */        lw $s5, 0x4c($sp)
  /* 10B758 8018D4A8 8FB60050 */        lw $s6, 0x50($sp)
  /* 10B75C 8018D4AC 8FB70054 */        lw $s7, 0x54($sp)
  /* 10B760 8018D4B0 8FBE0058 */        lw $fp, 0x58($sp)
  /* 10B764 8018D4B4 03E00008 */        jr $ra
  /* 10B768 8018D4B8 27BD00C8 */     addiu $sp, $sp, 0xc8

glabel func_ovl5_8018D4BC
  /* 10B76C 8018D4BC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B770 8018D4C0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B774 8018D4C4 8C830000 */        lw $v1, ($a0)
  /* 10B778 8018D4C8 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 10B77C 8018D4CC 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 10B780 8018D4D0 246E0008 */     addiu $t6, $v1, 8
  /* 10B784 8018D4D4 AC8E0000 */        sw $t6, ($a0)
  /* 10B788 8018D4D8 3C180002 */       lui $t8, 2
  /* 10B78C 8018D4DC 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 10B790 8018D4E0 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 10B794 8018D4E4 AC780004 */        sw $t8, 4($v1)
  /* 10B798 8018D4E8 AC6F0000 */        sw $t7, ($v1)
  /* 10B79C 8018D4EC 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 10B7A0 8018D4F0 0C03F2DC */       jal func_ovl2_800FCB70
  /* 10B7A4 8018D4F4 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 10B7A8 8018D4F8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B7AC 8018D4FC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10B7B0 8018D500 03E00008 */        jr $ra
  /* 10B7B4 8018D504 00000000 */       nop 

glabel overlay_set23_entry
  /* 10B7B8 8018D508 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 10B7BC 8018D50C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B7C0 8018D510 3C048019 */       lui $a0, %hi(D_ovl5_8018D5BC)
  /* 10B7C4 8018D514 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 10B7C8 8018D518 2484D5BC */     addiu $a0, $a0, %lo(D_ovl5_8018D5BC)
  /* 10B7CC 8018D51C AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B7D0 8018D520 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 10B7D4 8018D524 0C001C09 */       jal func_80007024
  /* 10B7D8 8018D528 AC8F000C */        sw $t7, 0xc($a0) # D_ovl5_8018D5BC + 12
  /* 10B7DC 8018D52C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 10B7E0 8018D530 3C198019 */       lui $t9, %hi(D_NF_8018D950)
  /* 10B7E4 8018D534 3C048019 */       lui $a0, %hi(D_ovl5_8018D5D8)
  /* 10B7E8 8018D538 2739D950 */     addiu $t9, $t9, %lo(D_NF_8018D950)
  /* 10B7EC 8018D53C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 10B7F0 8018D540 2484D5D8 */     addiu $a0, $a0, %lo(D_ovl5_8018D5D8)
  /* 10B7F4 8018D544 03194023 */      subu $t0, $t8, $t9
  /* 10B7F8 8018D548 0C0289A6 */       jal func_800A2698
  /* 10B7FC 8018D54C AC880010 */        sw $t0, 0x10($a0) # D_ovl5_8018D5D8 + 16
  /* 10B800 8018D550 0C00829D */       jal func_80020A74
  /* 10B804 8018D554 00000000 */       nop 
  /* 10B808 8018D558 3C02800A */       lui $v0, %hi(gSceneData)
  /* 10B80C 8018D55C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B810 8018D560 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 10B814 8018D564 90490000 */       lbu $t1, ($v0) # gSceneData + 0
  /* 10B818 8018D568 240A0001 */     addiu $t2, $zero, 1
  /* 10B81C 8018D56C A04A0000 */        sb $t2, ($v0) # gSceneData + 0
  /* 10B820 8018D570 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10B824 8018D574 03E00008 */        jr $ra
  /* 10B828 8018D578 A0490001 */        sb $t1, 1($v0) # gSceneData + 1

  /* 10B82C 8018D57C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl5_8018D580   # Routine parsed as data
#  /* 10B830 8018D580 10B40000 */       beq $a1, $s4, D_ovl5_8018D584
#glabel D_ovl5_8018D584   # Routine parsed as data
#  /* 10B834 8018D584 203C1E00 */      addi $gp, $at, 0x1e00
#  /* 10B838 8018D588 20000000 */      addi $zero, $zero, 0
#  /* 10B83C 8018D58C 10018000 */       beq $zero, $at, 0x8016d590 # branch target not found
#  /* 10B840 8018D590 100C0000 */       beq $zero, $t4, D_ovl5_8018D594
#glabel D_ovl5_8018D594   # Routine parsed as data
#  /* 10B844 8018D594 10018000 */       beq $zero, $at, 0x8016d598 # branch target not found
#  /* 10B848 8018D598 100C0000 */       beq $zero, $t4, D_ovl5_8018D59C
#glabel D_ovl5_8018D59C   # Routine parsed as data
#  /* 10B84C 8018D59C 10018000 */       beq $zero, $at, 0x8016d5a0 # branch target not found
#  /* 10B850 8018D5A0 101E0000 */       beq $zero, $fp, D_ovl5_8018D5A4
#glabel D_ovl5_8018D5A4   # Routine parsed as data
#  /* 10B854 8018D5A4 20000050 */      addi $zero, $zero, 0x50
#  /* 10B858 8018D5A8 10014000 */       beq $zero, $at, 0x8019d5ac # branch target not found
#  /* 10B85C 8018D5AC 20000000 */      addi $zero, $zero, 0
#  /* 10B860 8018D5B0 10B40000 */       beq $a1, $s4, D_ovl5_8018D5B4
#glabel D_ovl5_8018D5B4   # Routine parsed as data
#  /* 10B864 8018D5B4 00000000 */       nop 
#glabel D_ovl5_8018D5B8   # Routine parsed as data
#  /* 10B868 8018D5B8 00000000 */       nop 
#glabel D_ovl5_8018D5BC   # Routine parsed as data
#  /* 10B86C 8018D5BC 80392A00 */        lb $t9, 0x2a00($at)
#  /* 10B870 8018D5C0 803B6900 */        lb $k1, 0x6900($at)
#  /* 10B874 8018D5C4 803DA800 */        lb $sp, -0x5800($at)
#  /* 10B878 8018D5C8 00000000 */       nop 
#  /* 10B87C 8018D5CC 00000140 */     pause 
#  /* 10B880 8018D5D0 000000F0 */       tge $zero, $zero, 3
