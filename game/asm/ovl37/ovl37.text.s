.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E070

glabel func_ovl37_8018D0C0
  /* 167830 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 167834 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 167838 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16783C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl37_8018E228)
  /* 167840 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl37_8018E3A8)
  /* 167844 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 167848 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16784C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 167850 8018D0E0 2718E228 */     addiu $t8, $t8, %lo(D_ovl37_8018E228)
  /* 167854 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 167858 8018D0E8 2508E3A8 */     addiu $t0, $t0, %lo(D_ovl37_8018E3A8)
  /* 16785C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 167860 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 167864 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 167868 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16786C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 167870 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 167874 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 167878 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16787C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 167880 8018D110 0C0337DE */       jal rldm_initialize
  /* 167884 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 167888 8018D118 3C048019 */       lui $a0, %hi(D_ovl37_8018E0BC)
  /* 16788C 8018D11C 2484E0BC */     addiu $a0, $a0, %lo(D_ovl37_8018E0BC)
  /* 167890 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 167894 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 167898 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16789C 8018D12C 0C001260 */       jal hal_alloc
  /* 1678A0 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 1678A4 8018D134 3C048019 */       lui $a0, %hi(D_ovl37_8018E0BC)
  /* 1678A8 8018D138 3C068019 */       lui $a2, %hi(D_ovl37_8018E3E0)
  /* 1678AC 8018D13C 24C6E3E0 */     addiu $a2, $a2, %lo(D_ovl37_8018E3E0)
  /* 1678B0 8018D140 2484E0BC */     addiu $a0, $a0, %lo(D_ovl37_8018E0BC)
  /* 1678B4 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 1678B8 8018D148 0C033781 */       jal rldm_load_files_into
  /* 1678BC 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 1678C0 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1678C4 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1678C8 8018D158 03E00008 */        jr $ra
  /* 1678CC 8018D15C 00000000 */       nop 

glabel func_ovl37_8018D160
  /* 1678D0 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 1678D4 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 1678D8 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 1678DC 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 1678E0 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 1678E4 8018D174 37190001 */       ori $t9, $t8, 1
  /* 1678E8 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 1678EC 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 1678F0 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 1678F4 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 1678F8 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 1678FC 8018D18C 03E00008 */        jr $ra
  /* 167900 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl37_8018D194
  /* 167904 8018D194 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 167908 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl37_8018E0C4)
  /* 16790C 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 167910 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 167914 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 167918 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 16791C 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 167920 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 167924 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 167928 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 16792C 8018D1BC 25EFE0C4 */     addiu $t7, $t7, %lo(D_ovl37_8018E0C4)
  /* 167930 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl37_8018E0C4 + 0
  /* 167934 8018D1C4 27AE006C */     addiu $t6, $sp, 0x6c
  /* 167938 8018D1C8 8DF80004 */        lw $t8, 4($t7) # D_ovl37_8018E0C4 + 4
  /* 16793C 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 167940 8018D1D0 8DF90008 */        lw $t9, 8($t7) # D_ovl37_8018E0C4 + 8
  /* 167944 8018D1D4 3C098019 */       lui $t1, %hi(D_ovl37_8018E0D0)
  /* 167948 8018D1D8 2529E0D0 */     addiu $t1, $t1, %lo(D_ovl37_8018E0D0)
  /* 16794C 8018D1DC ADD80004 */        sw $t8, 4($t6)
  /* 167950 8018D1E0 ADD90008 */        sw $t9, 8($t6)
  /* 167954 8018D1E4 8D2A0004 */        lw $t2, 4($t1) # D_ovl37_8018E0D0 + 4
  /* 167958 8018D1E8 8D2B0000 */        lw $t3, ($t1) # D_ovl37_8018E0D0 + 0
  /* 16795C 8018D1EC 27A8005C */     addiu $t0, $sp, 0x5c
  /* 167960 8018D1F0 AD0A0004 */        sw $t2, 4($t0)
  /* 167964 8018D1F4 AD0B0000 */        sw $t3, ($t0)
  /* 167968 8018D1F8 8D2B0008 */        lw $t3, 8($t1) # D_ovl37_8018E0D0 + 8
  /* 16796C 8018D1FC 8D2A000C */        lw $t2, 0xc($t1) # D_ovl37_8018E0D0 + 12
  /* 167970 8018D200 3C108000 */       lui $s0, %hi(D_NF_80000008)
  /* 167974 8018D204 02003825 */        or $a3, $s0, $zero
  /* 167978 8018D208 00002025 */        or $a0, $zero, $zero
  /* 16797C 8018D20C 00002825 */        or $a1, $zero, $zero
  /* 167980 8018D210 24060011 */     addiu $a2, $zero, 0x11
  /* 167984 8018D214 AD0B0008 */        sw $t3, 8($t0)
  /* 167988 8018D218 0C00265A */       jal omMakeGObjCommon
  /* 16798C 8018D21C AD0A000C */        sw $t2, 0xc($t0)
  /* 167990 8018D220 3C018019 */       lui $at, %hi(D_ovl37_8018E1CC)
  /* 167994 8018D224 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 167998 8018D228 240CFFFF */     addiu $t4, $zero, -1
  /* 16799C 8018D22C AC22E1CC */        sw $v0, %lo(D_ovl37_8018E1CC)($at)
  /* 1679A0 8018D230 0040A025 */        or $s4, $v0, $zero
  /* 1679A4 8018D234 AFAC0010 */        sw $t4, 0x10($sp)
  /* 1679A8 8018D238 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1679AC 8018D23C 00402025 */        or $a0, $v0, $zero
  /* 1679B0 8018D240 2406001B */     addiu $a2, $zero, 0x1b
  /* 1679B4 8018D244 0C00277D */       jal func_80009DF4
  /* 1679B8 8018D248 02003825 */        or $a3, $s0, $zero
  /* 1679BC 8018D24C 8FAD006C */        lw $t5, 0x6c($sp)
  /* 1679C0 8018D250 27B1006C */     addiu $s1, $sp, 0x6c
  /* 1679C4 8018D254 27B0005C */     addiu $s0, $sp, 0x5c
  /* 1679C8 8018D258 11A0001E */      beqz $t5, .L8018D2D4
  /* 1679CC 8018D25C 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 1679D0 8018D260 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 1679D4 8018D264 3C0142F0 */       lui $at, (0x42F00000 >> 16) # 120.0
  /* 1679D8 8018D268 3C128019 */       lui $s2, %hi(D_ovl37_8018E3E0)
  /* 1679DC 8018D26C 4481A000 */      mtc1 $at, $f20 # 120.0 to cop1
  /* 1679E0 8018D270 2652E3E0 */     addiu $s2, $s2, %lo(D_ovl37_8018E3E0)
  /* 1679E4 8018D274 8E220000 */        lw $v0, ($s1)
  /* 1679E8 8018D278 2413FFDF */     addiu $s3, $zero, -0x21
  /* 1679EC 8018D27C 8E4F0000 */        lw $t7, ($s2) # D_ovl37_8018E3E0 + 0
  .L8018D280:
  /* 1679F0 8018D280 02802025 */        or $a0, $s4, $zero
  /* 1679F4 8018D284 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 1679F8 8018D288 004F2821 */      addu $a1, $v0, $t7
  /* 1679FC 8018D28C 94580024 */       lhu $t8, 0x24($v0)
  /* 167A00 8018D290 00402025 */        or $a0, $v0, $zero
  /* 167A04 8018D294 03134024 */       and $t0, $t8, $s3
  /* 167A08 8018D298 A4480024 */        sh $t0, 0x24($v0)
  /* 167A0C 8018D29C 35090001 */       ori $t1, $t0, 1
  /* 167A10 8018D2A0 A4490024 */        sh $t1, 0x24($v0)
  /* 167A14 8018D2A4 C6040000 */      lwc1 $f4, %lo(D_NF_80000000)($s0)
  /* 167A18 8018D2A8 46142180 */     add.s $f6, $f4, $f20
  /* 167A1C 8018D2AC E4460058 */      swc1 $f6, 0x58($v0)
  /* 167A20 8018D2B0 C6080004 */      lwc1 $f8, %lo(D_NF_80000004)($s0)
  /* 167A24 8018D2B4 46164280 */     add.s $f10, $f8, $f22
  /* 167A28 8018D2B8 0C063458 */       jal func_ovl37_8018D160
  /* 167A2C 8018D2BC E44A005C */      swc1 $f10, 0x5c($v0)
  /* 167A30 8018D2C0 8E220004 */        lw $v0, 4($s1)
  /* 167A34 8018D2C4 26310004 */     addiu $s1, $s1, 4
  /* 167A38 8018D2C8 26100008 */     addiu $s0, $s0, %lo(D_NF_80000008)
  /* 167A3C 8018D2CC 5440FFEC */      bnel $v0, $zero, .L8018D280
  /* 167A40 8018D2D0 8E4F0000 */        lw $t7, ($s2) # D_ovl37_8018E3E0 + 0
  .L8018D2D4:
  /* 167A44 8018D2D4 8FBF0044 */        lw $ra, 0x44($sp)
  /* 167A48 8018D2D8 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 167A4C 8018D2DC D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 167A50 8018D2E0 8FB00030 */        lw $s0, 0x30($sp)
  /* 167A54 8018D2E4 8FB10034 */        lw $s1, 0x34($sp)
  /* 167A58 8018D2E8 8FB20038 */        lw $s2, 0x38($sp)
  /* 167A5C 8018D2EC 8FB3003C */        lw $s3, 0x3c($sp)
  /* 167A60 8018D2F0 8FB40040 */        lw $s4, 0x40($sp)
  /* 167A64 8018D2F4 03E00008 */        jr $ra
  /* 167A68 8018D2F8 27BD0080 */     addiu $sp, $sp, 0x80

glabel func_ovl37_8018D2FC
  /* 167A6C 8018D2FC 3C0E8019 */       lui $t6, %hi(D_ovl37_8018E1C8)
  /* 167A70 8018D300 8DCEE1C8 */        lw $t6, %lo(D_ovl37_8018E1C8)($t6)
  /* 167A74 8018D304 3C038019 */       lui $v1, %hi(D_ovl37_8018E208)
  /* 167A78 8018D308 8C820074 */        lw $v0, 0x74($a0)
  /* 167A7C 8018D30C 29C1000F */      slti $at, $t6, 0xf
  /* 167A80 8018D310 14200036 */      bnez $at, .L8018D3EC
  /* 167A84 8018D314 2463E208 */     addiu $v1, $v1, %lo(D_ovl37_8018E208)
  /* 167A88 8018D318 3C048019 */       lui $a0, %hi(D_ovl37_8018E1E8)
  /* 167A8C 8018D31C 2484E1E8 */     addiu $a0, $a0, %lo(D_ovl37_8018E1E8)
  /* 167A90 8018D320 C4860000 */      lwc1 $f6, ($a0) # D_ovl37_8018E1E8 + 0
  /* 167A94 8018D324 C4640000 */      lwc1 $f4, ($v1) # D_ovl37_8018E208 + 0
  /* 167A98 8018D328 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 167A9C 8018D32C 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 167AA0 8018D330 46062201 */     sub.s $f8, $f4, $f6
  /* 167AA4 8018D334 C450003C */      lwc1 $f16, 0x3c($v0)
  /* 167AA8 8018D338 46004283 */     div.s $f10, $f8, $f0
  /* 167AAC 8018D33C 460A8480 */     add.s $f18, $f16, $f10
  /* 167AB0 8018D340 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 167AB4 8018D344 E452003C */      swc1 $f18, 0x3c($v0)
  /* 167AB8 8018D348 C4860004 */      lwc1 $f6, 4($a0) # D_ovl37_8018E1E8 + 4
  /* 167ABC 8018D34C C4640004 */      lwc1 $f4, 4($v1) # D_ovl37_8018E208 + 4
  /* 167AC0 8018D350 46062201 */     sub.s $f8, $f4, $f6
  /* 167AC4 8018D354 46004403 */     div.s $f16, $f8, $f0
  /* 167AC8 8018D358 46105480 */     add.s $f18, $f10, $f16
  /* 167ACC 8018D35C C4500044 */      lwc1 $f16, 0x44($v0)
  /* 167AD0 8018D360 E4520040 */      swc1 $f18, 0x40($v0)
  /* 167AD4 8018D364 C4860008 */      lwc1 $f6, 8($a0) # D_ovl37_8018E1E8 + 8
  /* 167AD8 8018D368 C4640008 */      lwc1 $f4, 8($v1) # D_ovl37_8018E208 + 8
  /* 167ADC 8018D36C 46062201 */     sub.s $f8, $f4, $f6
  /* 167AE0 8018D370 46004283 */     div.s $f10, $f8, $f0
  /* 167AE4 8018D374 460A8480 */     add.s $f18, $f16, $f10
  /* 167AE8 8018D378 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 167AEC 8018D37C E4520044 */      swc1 $f18, 0x44($v0)
  /* 167AF0 8018D380 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl37_8018E1E8 + 12
  /* 167AF4 8018D384 C464000C */      lwc1 $f4, 0xc($v1) # D_ovl37_8018E208 + 12
  /* 167AF8 8018D388 46062201 */     sub.s $f8, $f4, $f6
  /* 167AFC 8018D38C 46004403 */     div.s $f16, $f8, $f0
  /* 167B00 8018D390 46105480 */     add.s $f18, $f10, $f16
  /* 167B04 8018D394 C450004C */      lwc1 $f16, 0x4c($v0)
  /* 167B08 8018D398 E4520048 */      swc1 $f18, 0x48($v0)
  /* 167B0C 8018D39C C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl37_8018E1E8 + 16
  /* 167B10 8018D3A0 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl37_8018E208 + 16
  /* 167B14 8018D3A4 46062201 */     sub.s $f8, $f4, $f6
  /* 167B18 8018D3A8 46004283 */     div.s $f10, $f8, $f0
  /* 167B1C 8018D3AC 460A8480 */     add.s $f18, $f16, $f10
  /* 167B20 8018D3B0 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 167B24 8018D3B4 E452004C */      swc1 $f18, 0x4c($v0)
  /* 167B28 8018D3B8 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl37_8018E1E8 + 20
  /* 167B2C 8018D3BC C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl37_8018E208 + 20
  /* 167B30 8018D3C0 46062201 */     sub.s $f8, $f4, $f6
  /* 167B34 8018D3C4 46004403 */     div.s $f16, $f8, $f0
  /* 167B38 8018D3C8 46105480 */     add.s $f18, $f10, $f16
  /* 167B3C 8018D3CC C4500054 */      lwc1 $f16, 0x54($v0)
  /* 167B40 8018D3D0 E4520050 */      swc1 $f18, 0x50($v0)
  /* 167B44 8018D3D4 C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl37_8018E1E8 + 24
  /* 167B48 8018D3D8 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl37_8018E208 + 24
  /* 167B4C 8018D3DC 46062201 */     sub.s $f8, $f4, $f6
  /* 167B50 8018D3E0 46004283 */     div.s $f10, $f8, $f0
  /* 167B54 8018D3E4 460A8480 */     add.s $f18, $f16, $f10
  /* 167B58 8018D3E8 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D3EC:
  /* 167B5C 8018D3EC 03E00008 */        jr $ra
  /* 167B60 8018D3F0 00000000 */       nop 

glabel func_ovl37_8018D3F4
  /* 167B64 8018D3F4 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 167B68 8018D3F8 3C0E8019 */       lui $t6, %hi(D_ovl37_8018E070)
  /* 167B6C 8018D3FC AFBF002C */        sw $ra, 0x2c($sp)
  /* 167B70 8018D400 AFB20028 */        sw $s2, 0x28($sp)
  /* 167B74 8018D404 AFB10024 */        sw $s1, 0x24($sp)
  /* 167B78 8018D408 AFB00020 */        sw $s0, 0x20($sp)
  /* 167B7C 8018D40C AFA40030 */        sw $a0, 0x30($sp)
  /* 167B80 8018D410 AFA50034 */        sw $a1, 0x34($sp)
  /* 167B84 8018D414 AFA60038 */        sw $a2, 0x38($sp)
  /* 167B88 8018D418 25CEE070 */     addiu $t6, $t6, %lo(D_ovl37_8018E070)
  /* 167B8C 8018D41C 8DD80000 */        lw $t8, ($t6) # D_ovl37_8018E070 + 0
  /* 167B90 8018D420 3C108019 */       lui $s0, %hi(D_ovl37_8018E1E8)
  /* 167B94 8018D424 2610E1E8 */     addiu $s0, $s0, %lo(D_ovl37_8018E1E8)
  /* 167B98 8018D428 AE180000 */        sw $t8, ($s0) # D_ovl37_8018E1E8 + 0
  /* 167B9C 8018D42C 8DCF0004 */        lw $t7, 4($t6) # D_ovl37_8018E070 + 4
  /* 167BA0 8018D430 3C198019 */       lui $t9, %hi(D_ovl37_8018E08C)
  /* 167BA4 8018D434 2739E08C */     addiu $t9, $t9, %lo(D_ovl37_8018E08C)
  /* 167BA8 8018D438 AE0F0004 */        sw $t7, 4($s0) # D_ovl37_8018E1E8 + 4
  /* 167BAC 8018D43C 8DD80008 */        lw $t8, 8($t6) # D_ovl37_8018E070 + 8
  /* 167BB0 8018D440 3C118019 */       lui $s1, %hi(D_ovl37_8018E208)
  /* 167BB4 8018D444 2631E208 */     addiu $s1, $s1, %lo(D_ovl37_8018E208)
  /* 167BB8 8018D448 AE180008 */        sw $t8, 8($s0) # D_ovl37_8018E1E8 + 8
  /* 167BBC 8018D44C 8DCF000C */        lw $t7, 0xc($t6) # D_ovl37_8018E070 + 12
  /* 167BC0 8018D450 00002025 */        or $a0, $zero, $zero
  /* 167BC4 8018D454 AE0F000C */        sw $t7, 0xc($s0) # D_ovl37_8018E1E8 + 12
  /* 167BC8 8018D458 8DD80010 */        lw $t8, 0x10($t6) # D_ovl37_8018E070 + 16
  /* 167BCC 8018D45C AE180010 */        sw $t8, 0x10($s0) # D_ovl37_8018E1E8 + 16
  /* 167BD0 8018D460 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl37_8018E070 + 20
  /* 167BD4 8018D464 AE0F0014 */        sw $t7, 0x14($s0) # D_ovl37_8018E1E8 + 20
  /* 167BD8 8018D468 8DD80018 */        lw $t8, 0x18($t6) # D_ovl37_8018E070 + 24
  /* 167BDC 8018D46C AE180018 */        sw $t8, 0x18($s0) # D_ovl37_8018E1E8 + 24
  /* 167BE0 8018D470 8F290000 */        lw $t1, ($t9) # D_ovl37_8018E08C + 0
  /* 167BE4 8018D474 AE290000 */        sw $t1, ($s1) # D_ovl37_8018E208 + 0
  /* 167BE8 8018D478 8F280004 */        lw $t0, 4($t9) # D_ovl37_8018E08C + 4
  /* 167BEC 8018D47C AE280004 */        sw $t0, 4($s1) # D_ovl37_8018E208 + 4
  /* 167BF0 8018D480 8F290008 */        lw $t1, 8($t9) # D_ovl37_8018E08C + 8
  /* 167BF4 8018D484 AE290008 */        sw $t1, 8($s1) # D_ovl37_8018E208 + 8
  /* 167BF8 8018D488 8F28000C */        lw $t0, 0xc($t9) # D_ovl37_8018E08C + 12
  /* 167BFC 8018D48C AE28000C */        sw $t0, 0xc($s1) # D_ovl37_8018E208 + 12
  /* 167C00 8018D490 8F290010 */        lw $t1, 0x10($t9) # D_ovl37_8018E08C + 16
  /* 167C04 8018D494 AE290010 */        sw $t1, 0x10($s1) # D_ovl37_8018E208 + 16
  /* 167C08 8018D498 8F280014 */        lw $t0, 0x14($t9) # D_ovl37_8018E08C + 20
  /* 167C0C 8018D49C AE280014 */        sw $t0, 0x14($s1) # D_ovl37_8018E208 + 20
  /* 167C10 8018D4A0 8F290018 */        lw $t1, 0x18($t9) # D_ovl37_8018E08C + 24
  /* 167C14 8018D4A4 0C0436CB */       jal func_ovl2_8010DB2C
  /* 167C18 8018D4A8 AE290018 */        sw $t1, 0x18($s1) # D_ovl37_8018E208 + 24
  /* 167C1C 8018D4AC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 167C20 8018D4B0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 167C24 8018D4B4 3C038019 */       lui $v1, %hi(D_ovl37_8018E1D8)
  /* 167C28 8018D4B8 2463E1D8 */     addiu $v1, $v1, %lo(D_ovl37_8018E1D8)
  /* 167C2C 8018D4BC AC620000 */        sw $v0, ($v1) # D_ovl37_8018E1D8 + 0
  /* 167C30 8018D4C0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 167C34 8018D4C4 8C520074 */        lw $s2, 0x74($v0)
  /* 167C38 8018D4C8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 167C3C 8018D4CC 44050000 */      mfc1 $a1, $f0
  /* 167C40 8018D4D0 44060000 */      mfc1 $a2, $f0
  /* 167C44 8018D4D4 3C074352 */       lui $a3, 0x4352
  /* 167C48 8018D4D8 26440008 */     addiu $a0, $s2, 8
  /* 167C4C 8018D4DC 0C001C20 */       jal func_80007080
  /* 167C50 8018D4E0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 167C54 8018D4E4 3C018019 */       lui $at, %hi(D_ovl37_8018E1AC)
  /* 167C58 8018D4E8 C426E1AC */      lwc1 $f6, %lo(D_ovl37_8018E1AC)($at)
  /* 167C5C 8018D4EC 3C048019 */       lui $a0, %hi(D_ovl37_8018E1D8)
  /* 167C60 8018D4F0 E6460024 */      swc1 $f6, 0x24($s2)
  /* 167C64 8018D4F4 0C002CE7 */       jal func_8000B39C
  /* 167C68 8018D4F8 8C84E1D8 */        lw $a0, %lo(D_ovl37_8018E1D8)($a0)
  /* 167C6C 8018D4FC 3C048019 */       lui $a0, %hi(D_ovl37_8018E1D8)
  /* 167C70 8018D500 3C058019 */       lui $a1, %hi(func_ovl37_8018D2FC)
  /* 167C74 8018D504 24A5D2FC */     addiu $a1, $a1, %lo(func_ovl37_8018D2FC)
  /* 167C78 8018D508 8C84E1D8 */        lw $a0, %lo(D_ovl37_8018E1D8)($a0)
  /* 167C7C 8018D50C 24060001 */     addiu $a2, $zero, 1
  /* 167C80 8018D510 0C002062 */       jal omAddGObjCommonProc
  /* 167C84 8018D514 24070001 */     addiu $a3, $zero, 1
  /* 167C88 8018D518 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 167C8C 8018D51C C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 167C90 8018D520 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 167C94 8018D524 C6080000 */      lwc1 $f8, ($s0) # D_ovl37_8018E1E8 + 0
  /* 167C98 8018D528 C6100004 */      lwc1 $f16, 4($s0) # D_ovl37_8018E1E8 + 4
  /* 167C9C 8018D52C C6040008 */      lwc1 $f4, 8($s0) # D_ovl37_8018E1E8 + 8
  /* 167CA0 8018D530 46004280 */     add.s $f10, $f8, $f0
  /* 167CA4 8018D534 C608000C */      lwc1 $f8, 0xc($s0) # D_ovl37_8018E1E8 + 12
  /* 167CA8 8018D538 46028480 */     add.s $f18, $f16, $f2
  /* 167CAC 8018D53C C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl37_8018E1E8 + 16
  /* 167CB0 8018D540 E60A0000 */      swc1 $f10, ($s0) # D_ovl37_8018E1E8 + 0
  /* 167CB4 8018D544 460C2180 */     add.s $f6, $f4, $f12
  /* 167CB8 8018D548 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl37_8018E1E8 + 20
  /* 167CBC 8018D54C E6120004 */      swc1 $f18, 4($s0) # D_ovl37_8018E1E8 + 4
  /* 167CC0 8018D550 46004280 */     add.s $f10, $f8, $f0
  /* 167CC4 8018D554 E6060008 */      swc1 $f6, 8($s0) # D_ovl37_8018E1E8 + 8
  /* 167CC8 8018D558 C6280000 */      lwc1 $f8, ($s1) # D_ovl37_8018E208 + 0
  /* 167CCC 8018D55C 46028480 */     add.s $f18, $f16, $f2
  /* 167CD0 8018D560 C6300004 */      lwc1 $f16, 4($s1) # D_ovl37_8018E208 + 4
  /* 167CD4 8018D564 E60A000C */      swc1 $f10, 0xc($s0) # D_ovl37_8018E1E8 + 12
  /* 167CD8 8018D568 460C2180 */     add.s $f6, $f4, $f12
  /* 167CDC 8018D56C C6240008 */      lwc1 $f4, 8($s1) # D_ovl37_8018E208 + 8
  /* 167CE0 8018D570 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl37_8018E1E8 + 16
  /* 167CE4 8018D574 46004280 */     add.s $f10, $f8, $f0
  /* 167CE8 8018D578 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl37_8018E1E8 + 20
  /* 167CEC 8018D57C C628000C */      lwc1 $f8, 0xc($s1) # D_ovl37_8018E208 + 12
  /* 167CF0 8018D580 46028480 */     add.s $f18, $f16, $f2
  /* 167CF4 8018D584 C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl37_8018E208 + 16
  /* 167CF8 8018D588 E62A0000 */      swc1 $f10, ($s1) # D_ovl37_8018E208 + 0
  /* 167CFC 8018D58C 460C2180 */     add.s $f6, $f4, $f12
  /* 167D00 8018D590 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl37_8018E208 + 20
  /* 167D04 8018D594 E6320004 */      swc1 $f18, 4($s1) # D_ovl37_8018E208 + 4
  /* 167D08 8018D598 46004280 */     add.s $f10, $f8, $f0
  /* 167D0C 8018D59C E6260008 */      swc1 $f6, 8($s1) # D_ovl37_8018E208 + 8
  /* 167D10 8018D5A0 C6080000 */      lwc1 $f8, ($s0) # D_ovl37_8018E1E8 + 0
  /* 167D14 8018D5A4 46028480 */     add.s $f18, $f16, $f2
  /* 167D18 8018D5A8 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl37_8018E208 + 12
  /* 167D1C 8018D5AC 460C2180 */     add.s $f6, $f4, $f12
  /* 167D20 8018D5B0 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl37_8018E208 + 16
  /* 167D24 8018D5B4 E6260014 */      swc1 $f6, 0x14($s1) # D_ovl37_8018E208 + 20
  /* 167D28 8018D5B8 E648003C */      swc1 $f8, 0x3c($s2)
  /* 167D2C 8018D5BC C60A0004 */      lwc1 $f10, 4($s0) # D_ovl37_8018E1E8 + 4
  /* 167D30 8018D5C0 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 167D34 8018D5C4 C6100008 */      lwc1 $f16, 8($s0) # D_ovl37_8018E1E8 + 8
  /* 167D38 8018D5C8 E6500044 */      swc1 $f16, 0x44($s2)
  /* 167D3C 8018D5CC C612000C */      lwc1 $f18, 0xc($s0) # D_ovl37_8018E1E8 + 12
  /* 167D40 8018D5D0 E6520048 */      swc1 $f18, 0x48($s2)
  /* 167D44 8018D5D4 C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl37_8018E1E8 + 16
  /* 167D48 8018D5D8 E644004C */      swc1 $f4, 0x4c($s2)
  /* 167D4C 8018D5DC C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl37_8018E1E8 + 20
  /* 167D50 8018D5E0 E6460050 */      swc1 $f6, 0x50($s2)
  /* 167D54 8018D5E4 C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl37_8018E1E8 + 24
  /* 167D58 8018D5E8 E6480054 */      swc1 $f8, 0x54($s2)
  /* 167D5C 8018D5EC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 167D60 8018D5F0 8FB20028 */        lw $s2, 0x28($sp)
  /* 167D64 8018D5F4 8FB10024 */        lw $s1, 0x24($sp)
  /* 167D68 8018D5F8 8FB00020 */        lw $s0, 0x20($sp)
  /* 167D6C 8018D5FC 03E00008 */        jr $ra
  /* 167D70 8018D600 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl37_8018D604
  /* 167D74 8018D604 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 167D78 8018D608 AFBF003C */        sw $ra, 0x3c($sp)
  /* 167D7C 8018D60C AFBE0038 */        sw $fp, 0x38($sp)
  /* 167D80 8018D610 AFB70034 */        sw $s7, 0x34($sp)
  /* 167D84 8018D614 AFB60030 */        sw $s6, 0x30($sp)
  /* 167D88 8018D618 AFB5002C */        sw $s5, 0x2c($sp)
  /* 167D8C 8018D61C AFB40028 */        sw $s4, 0x28($sp)
  /* 167D90 8018D620 AFB30024 */        sw $s3, 0x24($sp)
  /* 167D94 8018D624 AFB20020 */        sw $s2, 0x20($sp)
  /* 167D98 8018D628 AFB1001C */        sw $s1, 0x1c($sp)
  /* 167D9C 8018D62C 0C0412F7 */       jal func_ovl2_80104BDC
  /* 167DA0 8018D630 AFB00018 */        sw $s0, 0x18($sp)
  /* 167DA4 8018D634 0C041580 */       jal func_ovl2_80105600
  /* 167DA8 8018D638 00000000 */       nop 
  /* 167DAC 8018D63C 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 167DB0 8018D640 24040015 */     addiu $a0, $zero, 0x15
  /* 167DB4 8018D644 24010001 */     addiu $at, $zero, 1
  /* 167DB8 8018D648 10410009 */       beq $v0, $at, .L8018D670
  /* 167DBC 8018D64C 24040015 */     addiu $a0, $zero, 0x15
  /* 167DC0 8018D650 3C108019 */       lui $s0, %hi(D_ovl37_8018E190)
  /* 167DC4 8018D654 2610E190 */     addiu $s0, $s0, %lo(D_ovl37_8018E190)
  .L8018D658:
  /* 167DC8 8018D658 0C008D89 */       jal fatal_printf
  /* 167DCC 8018D65C 02002025 */        or $a0, $s0, $zero
  /* 167DD0 8018D660 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 167DD4 8018D664 00000000 */       nop 
  /* 167DD8 8018D668 1000FFFB */         b .L8018D658
  /* 167DDC 8018D66C 00000000 */       nop 
  .L8018D670:
  /* 167DE0 8018D670 0C03F205 */       jal func_ovl2_800FC814
  /* 167DE4 8018D674 27A5009C */     addiu $a1, $sp, 0x9c
  /* 167DE8 8018D678 27B00090 */     addiu $s0, $sp, 0x90
  /* 167DEC 8018D67C 02002825 */        or $a1, $s0, $zero
  /* 167DF0 8018D680 0C03F225 */       jal func_ovl2_800FC894
  /* 167DF4 8018D684 8FA4009C */        lw $a0, 0x9c($sp)
  /* 167DF8 8018D688 8E0F0000 */        lw $t7, ($s0) # D_ovl37_8018E190 + 0
  /* 167DFC 8018D68C AFAF0000 */        sw $t7, ($sp)
  /* 167E00 8018D690 8E050004 */        lw $a1, 4($s0) # D_ovl37_8018E190 + 4
  /* 167E04 8018D694 8FA40000 */        lw $a0, ($sp)
  /* 167E08 8018D698 AFA50004 */        sw $a1, 4($sp)
  /* 167E0C 8018D69C 8E060008 */        lw $a2, 8($s0) # D_ovl37_8018E190 + 8
  /* 167E10 8018D6A0 0C0634FD */       jal func_ovl37_8018D3F4
  /* 167E14 8018D6A4 AFA60008 */        sw $a2, 8($sp)
  /* 167E18 8018D6A8 0C0455B9 */       jal func_ovl2_801156E4
  /* 167E1C 8018D6AC 00000000 */       nop 
  /* 167E20 8018D6B0 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 167E24 8018D6B4 00000000 */       nop 
  /* 167E28 8018D6B8 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 167E2C 8018D6BC 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 167E30 8018D6C0 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 167E34 8018D6C4 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 167E38 8018D6C8 00008825 */        or $s1, $zero, $zero
  /* 167E3C 8018D6CC 00009025 */        or $s2, $zero, $zero
  /* 167E40 8018D6D0 241E0004 */     addiu $fp, $zero, 4
  /* 167E44 8018D6D4 24170002 */     addiu $s7, $zero, 2
  /* 167E48 8018D6D8 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D6DC:
  /* 167E4C 8018D6DC 02C04025 */        or $t0, $s6, $zero
  /* 167E50 8018D6E0 02804825 */        or $t1, $s4, $zero
  /* 167E54 8018D6E4 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D6E8:
  /* 167E58 8018D6E8 8D190000 */        lw $t9, ($t0)
  /* 167E5C 8018D6EC 2508000C */     addiu $t0, $t0, 0xc
  /* 167E60 8018D6F0 2529000C */     addiu $t1, $t1, 0xc
  /* 167E64 8018D6F4 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 167E68 8018D6F8 8D18FFF8 */        lw $t8, -8($t0)
  /* 167E6C 8018D6FC AD38FFF8 */        sw $t8, -8($t1)
  /* 167E70 8018D700 8D19FFFC */        lw $t9, -4($t0)
  /* 167E74 8018D704 150AFFF8 */       bne $t0, $t2, .L8018D6E8
  /* 167E78 8018D708 AD39FFFC */        sw $t9, -4($t1)
  /* 167E7C 8018D70C 8D190000 */        lw $t9, ($t0)
  /* 167E80 8018D710 00116880 */       sll $t5, $s1, 2
  /* 167E84 8018D714 01B16821 */      addu $t5, $t5, $s1
  /* 167E88 8018D718 AD390000 */        sw $t9, ($t1)
  /* 167E8C 8018D71C 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 167E90 8018D720 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 167E94 8018D724 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 167E98 8018D728 01728021 */      addu $s0, $t3, $s2
  /* 167E9C 8018D72C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl37_8018E190 + 34
  /* 167EA0 8018D730 000D6840 */       sll $t5, $t5, 1
  /* 167EA4 8018D734 01AE9821 */      addu $s3, $t5, $t6
  /* 167EA8 8018D738 52EC0030 */      beql $s7, $t4, .L8018D7FC
  /* 167EAC 8018D73C 26310001 */     addiu $s1, $s1, 1
  /* 167EB0 8018D740 0C035E1B */       jal func_ovl2_800D786C
  /* 167EB4 8018D744 92040023 */       lbu $a0, 0x23($s0) # D_ovl37_8018E190 + 35
  /* 167EB8 8018D748 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 167EBC 8018D74C C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 167EC0 8018D750 C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 167EC4 8018D754 00528021 */      addu $s0, $v0, $s2
  /* 167EC8 8018D758 920F0023 */       lbu $t7, 0x23($s0) # D_ovl37_8018E190 + 35
  /* 167ECC 8018D75C C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 167ED0 8018D760 240AFFFF */     addiu $t2, $zero, -1
  /* 167ED4 8018D764 AFAA0060 */        sw $t2, 0x60($sp)
  /* 167ED8 8018D768 E7A40054 */      swc1 $f4, 0x54($sp)
  /* 167EDC 8018D76C E7A60058 */      swc1 $f6, 0x58($sp)
  /* 167EE0 8018D770 AFAF0050 */        sw $t7, 0x50($sp)
  /* 167EE4 8018D774 E7A8005C */      swc1 $f8, 0x5c($sp)
  /* 167EE8 8018D778 92080024 */       lbu $t0, 0x24($s0) # D_ovl37_8018E190 + 36
  /* 167EEC 8018D77C 24090001 */     addiu $t1, $zero, 1
  /* 167EF0 8018D780 A3B10065 */        sb $s1, 0x65($sp)
  /* 167EF4 8018D784 A3A90066 */        sb $t1, 0x66($sp)
  /* 167EF8 8018D788 A3A80064 */        sb $t0, 0x64($sp)
  /* 167EFC 8018D78C 92180026 */       lbu $t8, 0x26($s0) # D_ovl37_8018E190 + 38
  /* 167F00 8018D790 A3B80067 */        sb $t8, 0x67($sp)
  /* 167F04 8018D794 92190021 */       lbu $t9, 0x21($s0) # D_ovl37_8018E190 + 33
  /* 167F08 8018D798 A3B90069 */        sb $t9, 0x69($sp)
  /* 167F0C 8018D79C 920B0020 */       lbu $t3, 0x20($s0) # D_ovl37_8018E190 + 32
  /* 167F10 8018D7A0 A3AB006A */        sb $t3, 0x6a($sp)
  /* 167F14 8018D7A4 904C0007 */       lbu $t4, 7($v0)
  /* 167F18 8018D7A8 AFA00074 */        sw $zero, 0x74($sp)
  /* 167F1C 8018D7AC A3AC006B */        sb $t4, 0x6b($sp)
  /* 167F20 8018D7B0 920D0022 */       lbu $t5, 0x22($s0) # D_ovl37_8018E190 + 34
  /* 167F24 8018D7B4 AFB3007C */        sw $s3, 0x7c($sp)
  /* 167F28 8018D7B8 AFAD0078 */        sw $t5, 0x78($sp)
  /* 167F2C 8018D7BC 0C035E2D */       jal func_ovl2_800D78B4
  /* 167F30 8018D7C0 92040023 */       lbu $a0, 0x23($s0) # D_ovl37_8018E190 + 35
  /* 167F34 8018D7C4 AFA20088 */        sw $v0, 0x88($sp)
  /* 167F38 8018D7C8 0C035FCF */       jal ftManager_CreateFighter
  /* 167F3C 8018D7CC 02802025 */        or $a0, $s4, $zero
  /* 167F40 8018D7D0 3C018019 */       lui $at, %hi(D_ovl37_8018E1D0)
  /* 167F44 8018D7D4 AC22E1D0 */        sw $v0, %lo(D_ovl37_8018E1D0)($at)
  /* 167F48 8018D7D8 00408025 */        or $s0, $v0, $zero
  /* 167F4C 8018D7DC 02202025 */        or $a0, $s1, $zero
  /* 167F50 8018D7E0 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 167F54 8018D7E4 00402825 */        or $a1, $v0, $zero
  /* 167F58 8018D7E8 3C058019 */       lui $a1, %hi(D_ovl37_8018E0A8)
  /* 167F5C 8018D7EC 24A5E0A8 */     addiu $a1, $a1, %lo(D_ovl37_8018E0A8)
  /* 167F60 8018D7F0 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 167F64 8018D7F4 02002025 */        or $a0, $s0, $zero
  /* 167F68 8018D7F8 26310001 */     addiu $s1, $s1, 1
  .L8018D7FC:
  /* 167F6C 8018D7FC 163EFFB7 */       bne $s1, $fp, .L8018D6DC
  /* 167F70 8018D800 26520074 */     addiu $s2, $s2, 0x74
  /* 167F74 8018D804 8FBF003C */        lw $ra, 0x3c($sp)
  /* 167F78 8018D808 8FB00018 */        lw $s0, 0x18($sp)
  /* 167F7C 8018D80C 8FB1001C */        lw $s1, 0x1c($sp)
  /* 167F80 8018D810 8FB20020 */        lw $s2, 0x20($sp)
  /* 167F84 8018D814 8FB30024 */        lw $s3, 0x24($sp)
  /* 167F88 8018D818 8FB40028 */        lw $s4, 0x28($sp)
  /* 167F8C 8018D81C 8FB5002C */        lw $s5, 0x2c($sp)
  /* 167F90 8018D820 8FB60030 */        lw $s6, 0x30($sp)
  /* 167F94 8018D824 8FB70034 */        lw $s7, 0x34($sp)
  /* 167F98 8018D828 8FBE0038 */        lw $fp, 0x38($sp)
  /* 167F9C 8018D82C 03E00008 */        jr $ra
  /* 167FA0 8018D830 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl37_8018D834
  /* 167FA4 8018D834 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 167FA8 8018D838 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 167FAC 8018D83C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 167FB0 8018D840 AFA40000 */        sw $a0, ($sp)
  /* 167FB4 8018D844 3C0CE700 */       lui $t4, 0xe700
  /* 167FB8 8018D848 246E0008 */     addiu $t6, $v1, 8
  /* 167FBC 8018D84C AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 167FC0 8018D850 AC600004 */        sw $zero, 4($v1)
  /* 167FC4 8018D854 AC6C0000 */        sw $t4, ($v1)
  /* 167FC8 8018D858 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 167FCC 8018D85C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 167FD0 8018D860 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 167FD4 8018D864 246F0008 */     addiu $t7, $v1, 8
  /* 167FD8 8018D868 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 167FDC 8018D86C AC600004 */        sw $zero, 4($v1)
  /* 167FE0 8018D870 AC780000 */        sw $t8, ($v1)
  /* 167FE4 8018D874 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 167FE8 8018D878 3C0F465A */       lui $t7, (0x465A00FF >> 16) # 1180303615
  /* 167FEC 8018D87C 35EF00FF */       ori $t7, $t7, (0x465A00FF & 0xFFFF) # 1180303615
  /* 167FF0 8018D880 24790008 */     addiu $t9, $v1, 8
  /* 167FF4 8018D884 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 167FF8 8018D888 3C0EFA00 */       lui $t6, 0xfa00
  /* 167FFC 8018D88C AC6E0000 */        sw $t6, ($v1)
  /* 168000 8018D890 AC6F0004 */        sw $t7, 4($v1)
  /* 168004 8018D894 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 168008 8018D898 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16800C 8018D89C 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 168010 8018D8A0 24780008 */     addiu $t8, $v1, 8
  /* 168014 8018D8A4 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 168018 8018D8A8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16801C 8018D8AC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 168020 8018D8B0 AC6E0004 */        sw $t6, 4($v1)
  /* 168024 8018D8B4 AC790000 */        sw $t9, ($v1)
  /* 168028 8018D8B8 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16802C 8018D8BC 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 168030 8018D8C0 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 168034 8018D8C4 246F0008 */     addiu $t7, $v1, 8
  /* 168038 8018D8C8 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16803C 8018D8CC 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 168040 8018D8D0 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 168044 8018D8D4 AC780004 */        sw $t8, 4($v1)
  /* 168048 8018D8D8 AC6D0000 */        sw $t5, ($v1)
  /* 16804C 8018D8DC 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 168050 8018D8E0 3C0F0034 */       lui $t7, (0x348028 >> 16) # 3440680
  /* 168054 8018D8E4 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 168058 8018D8E8 24790008 */     addiu $t9, $v1, 8
  /* 16805C 8018D8EC AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 168060 8018D8F0 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 168064 8018D8F4 35EF8028 */       ori $t7, $t7, (0x348028 & 0xFFFF) # 3440680
  /* 168068 8018D8F8 AC6F0004 */        sw $t7, 4($v1)
  /* 16806C 8018D8FC AC6E0000 */        sw $t6, ($v1)
  /* 168070 8018D900 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 168074 8018D904 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 168078 8018D908 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16807C 8018D90C 24780008 */     addiu $t8, $v1, 8
  /* 168080 8018D910 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 168084 8018D914 AC600004 */        sw $zero, 4($v1)
  /* 168088 8018D918 AC6C0000 */        sw $t4, ($v1)
  /* 16808C 8018D91C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 168090 8018D920 24790008 */     addiu $t9, $v1, 8
  /* 168094 8018D924 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 168098 8018D928 AC6E0004 */        sw $t6, 4($v1)
  /* 16809C 8018D92C 03E00008 */        jr $ra
  /* 1680A0 8018D930 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl37_8018D934
  /* 1680A4 8018D934 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1680A8 8018D938 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1680AC 8018D93C 00002025 */        or $a0, $zero, $zero
  /* 1680B0 8018D940 00002825 */        or $a1, $zero, $zero
  /* 1680B4 8018D944 24060013 */     addiu $a2, $zero, 0x13
  /* 1680B8 8018D948 0C00265A */       jal omMakeGObjCommon
  /* 1680BC 8018D94C 3C078000 */       lui $a3, 0x8000
  /* 1680C0 8018D950 3C058019 */       lui $a1, %hi(func_ovl37_8018D834)
  /* 1680C4 8018D954 240EFFFF */     addiu $t6, $zero, -1
  /* 1680C8 8018D958 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1680CC 8018D95C 24A5D834 */     addiu $a1, $a1, %lo(func_ovl37_8018D834)
  /* 1680D0 8018D960 00402025 */        or $a0, $v0, $zero
  /* 1680D4 8018D964 2406001C */     addiu $a2, $zero, 0x1c
  /* 1680D8 8018D968 0C00277D */       jal func_80009DF4
  /* 1680DC 8018D96C 3C078000 */       lui $a3, 0x8000
  /* 1680E0 8018D970 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1680E4 8018D974 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1680E8 8018D978 03E00008 */        jr $ra
  /* 1680EC 8018D97C 00000000 */       nop 

glabel func_ovl37_8018D980
  /* 1680F0 8018D980 3C038019 */       lui $v1, %hi(D_ovl37_8018E1C8)
  /* 1680F4 8018D984 8C63E1C8 */        lw $v1, %lo(D_ovl37_8018E1C8)($v1)
  /* 1680F8 8018D988 2401000F */     addiu $at, $zero, 0xf
  /* 1680FC 8018D98C 3C058019 */       lui $a1, 0x8019
  /* 168100 8018D990 10610009 */       beq $v1, $at, .L8018D9B8
  /* 168104 8018D994 00601025 */        or $v0, $v1, $zero
  /* 168108 8018D998 2401002D */     addiu $at, $zero, 0x2d
  /* 16810C 8018D99C 1041000B */       beq $v0, $at, .L8018D9CC
  /* 168110 8018D9A0 3C058019 */       lui $a1, 0x8019
  /* 168114 8018D9A4 2401003C */     addiu $at, $zero, 0x3c
  /* 168118 8018D9A8 1041000D */       beq $v0, $at, .L8018D9E0
  /* 16811C 8018D9AC 3C058019 */       lui $a1, %hi(D_ovl37_8018E1E0)
  /* 168120 8018D9B0 1000000F */         b .L8018D9F0
  /* 168124 8018D9B4 24A5E1E0 */     addiu $a1, $a1, %lo(D_ovl37_8018E1E0)
  .L8018D9B8:
  /* 168128 8018D9B8 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16812C 8018D9BC 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 168130 8018D9C0 24A5E1E0 */     addiu $a1, $a1, -0x1e20
  /* 168134 8018D9C4 1000000A */         b .L8018D9F0
  /* 168138 8018D9C8 E4A40000 */      swc1 $f4, ($a1) # D_ovl37_8018E1E0 + 0
  .L8018D9CC:
  /* 16813C 8018D9CC 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 168140 8018D9D0 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 168144 8018D9D4 24A5E1E0 */     addiu $a1, $a1, -0x1e20
  /* 168148 8018D9D8 10000005 */         b .L8018D9F0
  /* 16814C 8018D9DC E4A60000 */      swc1 $f6, ($a1) # D_ovl37_8018E1E0 + 0
  .L8018D9E0:
  /* 168150 8018D9E0 44804000 */      mtc1 $zero, $f8
  /* 168154 8018D9E4 3C058019 */       lui $a1, %hi(D_ovl37_8018E1E0)
  /* 168158 8018D9E8 24A5E1E0 */     addiu $a1, $a1, %lo(D_ovl37_8018E1E0)
  /* 16815C 8018D9EC E4A80000 */      swc1 $f8, ($a1) # D_ovl37_8018E1E0 + 0
  .L8018D9F0:
  /* 168160 8018D9F0 28610010 */      slti $at, $v1, 0x10
  /* 168164 8018D9F4 14200007 */      bnez $at, .L8018DA14
  /* 168168 8018D9F8 2861002D */      slti $at, $v1, 0x2d
  /* 16816C 8018D9FC 10200005 */      beqz $at, .L8018DA14
  /* 168170 8018DA00 3C018019 */       lui $at, %hi(D_ovl37_8018E1B0)
  /* 168174 8018DA04 C430E1B0 */      lwc1 $f16, %lo(D_ovl37_8018E1B0)($at)
  /* 168178 8018DA08 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl37_8018E1E0 + 0
  /* 16817C 8018DA0C 46105480 */     add.s $f18, $f10, $f16
  /* 168180 8018DA10 E4B20000 */      swc1 $f18, ($a1) # D_ovl37_8018E1E0 + 0
  .L8018DA14:
  /* 168184 8018DA14 2861002E */      slti $at, $v1, 0x2e
  /* 168188 8018DA18 14200007 */      bnez $at, .L8018DA38
  /* 16818C 8018DA1C 2861003C */      slti $at, $v1, 0x3c
  /* 168190 8018DA20 10200005 */      beqz $at, .L8018DA38
  /* 168194 8018DA24 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 168198 8018DA28 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16819C 8018DA2C C4A40000 */      lwc1 $f4, ($a1) # D_ovl37_8018E1E0 + 0
  /* 1681A0 8018DA30 46062200 */     add.s $f8, $f4, $f6
  /* 1681A4 8018DA34 E4A80000 */      swc1 $f8, ($a1) # D_ovl37_8018E1E0 + 0
  .L8018DA38:
  /* 1681A8 8018DA38 8C820074 */        lw $v0, 0x74($a0)
  /* 1681AC 8018DA3C C4B00000 */      lwc1 $f16, ($a1) # D_ovl37_8018E1E0 + 0
  /* 1681B0 8018DA40 C44A0020 */      lwc1 $f10, 0x20($v0)
  /* 1681B4 8018DA44 46105480 */     add.s $f18, $f10, $f16
  /* 1681B8 8018DA48 03E00008 */        jr $ra
  /* 1681BC 8018DA4C E4520020 */      swc1 $f18, 0x20($v0)

glabel func_ovl37_8018DA50
  /* 1681C0 8018DA50 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 1681C4 8018DA54 AFB00018 */        sw $s0, 0x18($sp)
  /* 1681C8 8018DA58 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 1681CC 8018DA5C 27B00024 */     addiu $s0, $sp, 0x24
  /* 1681D0 8018DA60 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 1681D4 8018DA64 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1681D8 8018DA68 25C8003C */     addiu $t0, $t6, 0x3c
  /* 1681DC 8018DA6C 0200C825 */        or $t9, $s0, $zero
  .L8018DA70:
  /* 1681E0 8018DA70 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 1681E4 8018DA74 25CE000C */     addiu $t6, $t6, 0xc
  /* 1681E8 8018DA78 2739000C */     addiu $t9, $t9, 0xc
  /* 1681EC 8018DA7C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1681F0 8018DA80 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 1681F4 8018DA84 AF2FFFF8 */        sw $t7, -8($t9)
  /* 1681F8 8018DA88 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 1681FC 8018DA8C 15C8FFF8 */       bne $t6, $t0, .L8018DA70
  /* 168200 8018DA90 AF38FFFC */        sw $t8, -4($t9)
  /* 168204 8018DA94 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 168208 8018DA98 24090002 */     addiu $t1, $zero, 2
  /* 16820C 8018DA9C 24040002 */     addiu $a0, $zero, 2
  /* 168210 8018DAA0 AF380000 */        sw $t8, ($t9)
  /* 168214 8018DAA4 AFA90024 */        sw $t1, 0x24($sp)
  /* 168218 8018DAA8 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16821C 8018DAAC 00002825 */        or $a1, $zero, $zero
  /* 168220 8018DAB0 44800000 */      mtc1 $zero, $f0
  /* 168224 8018DAB4 3C0A8019 */       lui $t2, %hi(D_ovl37_8018E1DC)
  /* 168228 8018DAB8 3C01C416 */       lui $at, (0xC4160000 >> 16) # -600.0
  /* 16822C 8018DABC 8D4AE1DC */        lw $t2, %lo(D_ovl37_8018E1DC)($t2)
  /* 168230 8018DAC0 44812000 */      mtc1 $at, $f4 # -600.0 to cop1
  /* 168234 8018DAC4 A3A2003B */        sb $v0, 0x3b($sp)
  /* 168238 8018DAC8 02002025 */        or $a0, $s0, $zero
  /* 16823C 8018DACC E7A00028 */      swc1 $f0, 0x28($sp)
  /* 168240 8018DAD0 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 168244 8018DAD4 AFAA005C */        sw $t2, 0x5c($sp)
  /* 168248 8018DAD8 0C035FCF */       jal ftManager_CreateFighter
  /* 16824C 8018DADC E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 168250 8018DAE0 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 168254 8018DAE4 00408025 */        or $s0, $v0, $zero
  /* 168258 8018DAE8 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16825C 8018DAEC 0C0E4173 */       jal func_ovl1_803905CC
  /* 168260 8018DAF0 00402025 */        or $a0, $v0, $zero
  /* 168264 8018DAF4 02002025 */        or $a0, $s0, $zero
  /* 168268 8018DAF8 2405001A */     addiu $a1, $zero, 0x1a
  /* 16826C 8018DAFC 0C002834 */       jal om_g_move_obj_dl
  /* 168270 8018DB00 2406FFFF */     addiu $a2, $zero, -1
  /* 168274 8018DB04 3C058019 */       lui $a1, %hi(func_ovl37_8018D980)
  /* 168278 8018DB08 24A5D980 */     addiu $a1, $a1, %lo(func_ovl37_8018D980)
  /* 16827C 8018DB0C 02002025 */        or $a0, $s0, $zero
  /* 168280 8018DB10 24060001 */     addiu $a2, $zero, 1
  /* 168284 8018DB14 0C002062 */       jal omAddGObjCommonProc
  /* 168288 8018DB18 24070001 */     addiu $a3, $zero, 1
  /* 16828C 8018DB1C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 168290 8018DB20 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 168294 8018DB24 8E0B0074 */        lw $t3, 0x74($s0)
  /* 168298 8018DB28 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16829C 8018DB2C 8E0C0074 */        lw $t4, 0x74($s0)
  /* 1682A0 8018DB30 E5800044 */      swc1 $f0, 0x44($t4)
  /* 1682A4 8018DB34 8E0D0074 */        lw $t5, 0x74($s0)
  /* 1682A8 8018DB38 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 1682AC 8018DB3C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1682B0 8018DB40 8FB00018 */        lw $s0, 0x18($sp)
  /* 1682B4 8018DB44 27BD0068 */     addiu $sp, $sp, 0x68
  /* 1682B8 8018DB48 03E00008 */        jr $ra
  /* 1682BC 8018DB4C 00000000 */       nop 

glabel func_ovl37_8018DB50
  /* 1682C0 8018DB50 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1682C4 8018DB54 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 1682C8 8018DB58 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1682CC 8018DB5C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 1682D0 8018DB60 240F0050 */     addiu $t7, $zero, 0x50
  /* 1682D4 8018DB64 24180000 */     addiu $t8, $zero, 0
  /* 1682D8 8018DB68 3C190800 */       lui $t9, 0x800
  /* 1682DC 8018DB6C 2408FFFF */     addiu $t0, $zero, -1
  /* 1682E0 8018DB70 24090001 */     addiu $t1, $zero, 1
  /* 1682E4 8018DB74 240A0001 */     addiu $t2, $zero, 1
  /* 1682E8 8018DB78 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1682EC 8018DB7C AFA90028 */        sw $t1, 0x28($sp)
  /* 1682F0 8018DB80 AFA80020 */        sw $t0, 0x20($sp)
  /* 1682F4 8018DB84 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1682F8 8018DB88 AFB80018 */        sw $t8, 0x18($sp)
  /* 1682FC 8018DB8C AFAF0014 */        sw $t7, 0x14($sp)
  /* 168300 8018DB90 AFAE0010 */        sw $t6, 0x10($sp)
  /* 168304 8018DB94 AFA00024 */        sw $zero, 0x24($sp)
  /* 168308 8018DB98 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16830C 8018DB9C AFA00034 */        sw $zero, 0x34($sp)
  /* 168310 8018DBA0 24040401 */     addiu $a0, $zero, 0x401
  /* 168314 8018DBA4 00002825 */        or $a1, $zero, $zero
  /* 168318 8018DBA8 24060010 */     addiu $a2, $zero, 0x10
  /* 16831C 8018DBAC 0C002E4F */       jal func_8000B93C
  /* 168320 8018DBB0 3C078000 */       lui $a3, 0x8000
  /* 168324 8018DBB4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 168328 8018DBB8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16832C 8018DBBC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 168330 8018DBC0 8C430074 */        lw $v1, 0x74($v0)
  /* 168334 8018DBC4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 168338 8018DBC8 44050000 */      mfc1 $a1, $f0
  /* 16833C 8018DBCC 44060000 */      mfc1 $a2, $f0
  /* 168340 8018DBD0 3C07439B */       lui $a3, 0x439b
  /* 168344 8018DBD4 24640008 */     addiu $a0, $v1, 8
  /* 168348 8018DBD8 0C001C20 */       jal func_80007080
  /* 16834C 8018DBDC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 168350 8018DBE0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 168354 8018DBE4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 168358 8018DBE8 03E00008 */        jr $ra
  /* 16835C 8018DBEC 00000000 */       nop 

glabel func_ovl37_8018DBF0
  /* 168360 8018DBF0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 168364 8018DBF4 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 168368 8018DBF8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16836C 8018DBFC 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 168370 8018DC00 240F000A */     addiu $t7, $zero, 0xa
  /* 168374 8018DC04 24180000 */     addiu $t8, $zero, 0
  /* 168378 8018DC08 3C190400 */       lui $t9, 0x400
  /* 16837C 8018DC0C 2408FFFF */     addiu $t0, $zero, -1
  /* 168380 8018DC10 24090001 */     addiu $t1, $zero, 1
  /* 168384 8018DC14 240A0001 */     addiu $t2, $zero, 1
  /* 168388 8018DC18 240B0001 */     addiu $t3, $zero, 1
  /* 16838C 8018DC1C AFAB0030 */        sw $t3, 0x30($sp)
  /* 168390 8018DC20 AFAA0028 */        sw $t2, 0x28($sp)
  /* 168394 8018DC24 AFA90024 */        sw $t1, 0x24($sp)
  /* 168398 8018DC28 AFA80020 */        sw $t0, 0x20($sp)
  /* 16839C 8018DC2C AFB9001C */        sw $t9, 0x1c($sp)
  /* 1683A0 8018DC30 AFB80018 */        sw $t8, 0x18($sp)
  /* 1683A4 8018DC34 AFAF0014 */        sw $t7, 0x14($sp)
  /* 1683A8 8018DC38 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1683AC 8018DC3C AFA0002C */        sw $zero, 0x2c($sp)
  /* 1683B0 8018DC40 AFA00034 */        sw $zero, 0x34($sp)
  /* 1683B4 8018DC44 24040401 */     addiu $a0, $zero, 0x401
  /* 1683B8 8018DC48 00002825 */        or $a1, $zero, $zero
  /* 1683BC 8018DC4C 24060010 */     addiu $a2, $zero, 0x10
  /* 1683C0 8018DC50 0C002E4F */       jal func_8000B93C
  /* 1683C4 8018DC54 3C078000 */       lui $a3, 0x8000
  /* 1683C8 8018DC58 AFA20044 */        sw $v0, 0x44($sp)
  /* 1683CC 8018DC5C 8C430074 */        lw $v1, 0x74($v0)
  /* 1683D0 8018DC60 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1683D4 8018DC64 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1683D8 8018DC68 3C054352 */       lui $a1, 0x4352
  /* 1683DC 8018DC6C 3C064120 */       lui $a2, 0x4120
  /* 1683E0 8018DC70 3C07439B */       lui $a3, 0x439b
  /* 1683E4 8018DC74 24640008 */     addiu $a0, $v1, 8
  /* 1683E8 8018DC78 AFA30040 */        sw $v1, 0x40($sp)
  /* 1683EC 8018DC7C 0C001C20 */       jal func_80007080
  /* 1683F0 8018DC80 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1683F4 8018DC84 3C018019 */       lui $at, %hi(D_ovl37_8018E1B4)
  /* 1683F8 8018DC88 8FA40040 */        lw $a0, 0x40($sp)
  /* 1683FC 8018DC8C C426E1B4 */      lwc1 $f6, %lo(D_ovl37_8018E1B4)($at)
  /* 168400 8018DC90 3C0C8019 */       lui $t4, %hi(D_ovl37_8018E3E4)
  /* 168404 8018DC94 3C0D0000 */       lui $t5, %hi(D_NF_00000030)
  /* 168408 8018DC98 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16840C 8018DC9C 8D8CE3E4 */        lw $t4, %lo(D_ovl37_8018E3E4)($t4)
  /* 168410 8018DCA0 25AD0030 */     addiu $t5, $t5, %lo(D_NF_00000030)
  /* 168414 8018DCA4 24060000 */     addiu $a2, $zero, 0
  /* 168418 8018DCA8 0C003E8F */       jal func_8000FA3C
  /* 16841C 8018DCAC 018D2821 */      addu $a1, $t4, $t5
  /* 168420 8018DCB0 3C058001 */       lui $a1, %hi(func_80010580)
  /* 168424 8018DCB4 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 168428 8018DCB8 8FA40044 */        lw $a0, 0x44($sp)
  /* 16842C 8018DCBC 24060001 */     addiu $a2, $zero, 1
  /* 168430 8018DCC0 0C002062 */       jal omAddGObjCommonProc
  /* 168434 8018DCC4 24070001 */     addiu $a3, $zero, 1
  /* 168438 8018DCC8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16843C 8018DCCC 27BD0048 */     addiu $sp, $sp, 0x48
  /* 168440 8018DCD0 03E00008 */        jr $ra
  /* 168444 8018DCD4 00000000 */       nop 

glabel func_ovl37_8018DCD8
  /* 168448 8018DCD8 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16844C 8018DCDC 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 168450 8018DCE0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 168454 8018DCE4 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 168458 8018DCE8 240F0014 */     addiu $t7, $zero, 0x14
  /* 16845C 8018DCEC 24180000 */     addiu $t8, $zero, 0
  /* 168460 8018DCF0 3C191000 */       lui $t9, 0x1000
  /* 168464 8018DCF4 2408FFFF */     addiu $t0, $zero, -1
  /* 168468 8018DCF8 24090001 */     addiu $t1, $zero, 1
  /* 16846C 8018DCFC 240A0001 */     addiu $t2, $zero, 1
  /* 168470 8018DD00 AFAA0030 */        sw $t2, 0x30($sp)
  /* 168474 8018DD04 AFA90028 */        sw $t1, 0x28($sp)
  /* 168478 8018DD08 AFA80020 */        sw $t0, 0x20($sp)
  /* 16847C 8018DD0C AFB9001C */        sw $t9, 0x1c($sp)
  /* 168480 8018DD10 AFB80018 */        sw $t8, 0x18($sp)
  /* 168484 8018DD14 AFAF0014 */        sw $t7, 0x14($sp)
  /* 168488 8018DD18 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16848C 8018DD1C AFA00024 */        sw $zero, 0x24($sp)
  /* 168490 8018DD20 AFA0002C */        sw $zero, 0x2c($sp)
  /* 168494 8018DD24 AFA00034 */        sw $zero, 0x34($sp)
  /* 168498 8018DD28 24040401 */     addiu $a0, $zero, 0x401
  /* 16849C 8018DD2C 00002825 */        or $a1, $zero, $zero
  /* 1684A0 8018DD30 24060010 */     addiu $a2, $zero, 0x10
  /* 1684A4 8018DD34 0C002E4F */       jal func_8000B93C
  /* 1684A8 8018DD38 3C078000 */       lui $a3, 0x8000
  /* 1684AC 8018DD3C 8C430074 */        lw $v1, 0x74($v0)
  /* 1684B0 8018DD40 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1684B4 8018DD44 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1684B8 8018DD48 3C054352 */       lui $a1, 0x4352
  /* 1684BC 8018DD4C 3C064120 */       lui $a2, 0x4120
  /* 1684C0 8018DD50 3C07439B */       lui $a3, 0x439b
  /* 1684C4 8018DD54 24640008 */     addiu $a0, $v1, 8
  /* 1684C8 8018DD58 AFA30044 */        sw $v1, 0x44($sp)
  /* 1684CC 8018DD5C 0C001C20 */       jal func_80007080
  /* 1684D0 8018DD60 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1684D4 8018DD64 8FA30044 */        lw $v1, 0x44($sp)
  /* 1684D8 8018DD68 240B0005 */     addiu $t3, $zero, 5
  /* 1684DC 8018DD6C AC6B0080 */        sw $t3, 0x80($v1)
  /* 1684E0 8018DD70 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1684E4 8018DD74 27BD0048 */     addiu $sp, $sp, 0x48
  /* 1684E8 8018DD78 03E00008 */        jr $ra
  /* 1684EC 8018DD7C 00000000 */       nop 

glabel func_ovl37_8018DD80
  /* 1684F0 8018DD80 3C028019 */       lui $v0, %hi(D_ovl37_8018E1C8)
  /* 1684F4 8018DD84 2442E1C8 */     addiu $v0, $v0, %lo(D_ovl37_8018E1C8)
  /* 1684F8 8018DD88 8C4E0000 */        lw $t6, ($v0) # D_ovl37_8018E1C8 + 0
  /* 1684FC 8018DD8C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 168500 8018DD90 AFBF0014 */        sw $ra, 0x14($sp)
  /* 168504 8018DD94 AFA40018 */        sw $a0, 0x18($sp)
  /* 168508 8018DD98 25CF0001 */     addiu $t7, $t6, 1
  /* 16850C 8018DD9C AC4F0000 */        sw $t7, ($v0) # D_ovl37_8018E1C8 + 0
  /* 168510 8018DDA0 0C0E41DB */       jal func_ovl1_8039076C
  /* 168514 8018DDA4 3404D000 */       ori $a0, $zero, 0xd000
  /* 168518 8018DDA8 10400007 */      beqz $v0, .L8018DDC8
  /* 16851C 8018DDAC 24190001 */     addiu $t9, $zero, 1
  /* 168520 8018DDB0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 168524 8018DDB4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 168528 8018DDB8 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16852C 8018DDBC A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 168530 8018DDC0 0C00171D */       jal func_80005C74
  /* 168534 8018DDC4 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DDC8:
  /* 168538 8018DDC8 3C028019 */       lui $v0, %hi(D_ovl37_8018E1C8)
  /* 16853C 8018DDCC 8C42E1C8 */        lw $v0, %lo(D_ovl37_8018E1C8)($v0)
  /* 168540 8018DDD0 2401000F */     addiu $at, $zero, 0xf
  /* 168544 8018DDD4 3C048019 */       lui $a0, %hi(D_ovl37_8018E1CC)
  /* 168548 8018DDD8 5441000C */      bnel $v0, $at, .L8018DE0C
  /* 16854C 8018DDDC 2401003C */     addiu $at, $zero, 0x3c
  /* 168550 8018DDE0 0C0026A1 */       jal omEjectGObjCommon
  /* 168554 8018DDE4 8C84E1CC */        lw $a0, %lo(D_ovl37_8018E1CC)($a0)
  /* 168558 8018DDE8 0C063581 */       jal func_ovl37_8018D604
  /* 16855C 8018DDEC 00000000 */       nop 
  /* 168560 8018DDF0 0C06364D */       jal func_ovl37_8018D934
  /* 168564 8018DDF4 00000000 */       nop 
  /* 168568 8018DDF8 0C063694 */       jal func_ovl37_8018DA50
  /* 16856C 8018DDFC 00000000 */       nop 
  /* 168570 8018DE00 3C028019 */       lui $v0, %hi(D_ovl37_8018E1C8)
  /* 168574 8018DE04 8C42E1C8 */        lw $v0, %lo(D_ovl37_8018E1C8)($v0)
  /* 168578 8018DE08 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE0C:
  /* 16857C 8018DE0C 14410007 */       bne $v0, $at, .L8018DE2C
  /* 168580 8018DE10 24090022 */     addiu $t1, $zero, 0x22
  /* 168584 8018DE14 3C02800A */       lui $v0, %hi(gSceneData)
  /* 168588 8018DE18 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16858C 8018DE1C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 168590 8018DE20 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 168594 8018DE24 0C00171D */       jal func_80005C74
  /* 168598 8018DE28 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE2C:
  /* 16859C 8018DE2C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1685A0 8018DE30 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1685A4 8018DE34 03E00008 */        jr $ra
  /* 1685A8 8018DE38 00000000 */       nop 

glabel func_ovl37_8018DE3C
  /* 1685AC 8018DE3C 3C018019 */       lui $at, %hi(D_ovl37_8018E1C8)
  /* 1685B0 8018DE40 03E00008 */        jr $ra
  /* 1685B4 8018DE44 AC20E1C8 */        sw $zero, %lo(D_ovl37_8018E1C8)($at)

glabel func_ovl37_8018DE48
  /* 1685B8 8018DE48 3C038019 */       lui $v1, %hi(D_ovl37_8018E3E8)
  /* 1685BC 8018DE4C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 1685C0 8018DE50 2463E3E8 */     addiu $v1, $v1, %lo(D_ovl37_8018E3E8)
  /* 1685C4 8018DE54 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1685C8 8018DE58 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 1685CC 8018DE5C 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 1685D0 8018DE60 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 1685D4 8018DE64 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1685D8 8018DE68 24040004 */     addiu $a0, $zero, 4
  /* 1685DC 8018DE6C 24050002 */     addiu $a1, $zero, 2
  /* 1685E0 8018DE70 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 1685E4 8018DE74 0060C825 */        or $t9, $v1, $zero
  .L8018DE78:
  /* 1685E8 8018DE78 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 1685EC 8018DE7C 25CE000C */     addiu $t6, $t6, 0xc
  /* 1685F0 8018DE80 2739000C */     addiu $t9, $t9, 0xc
  /* 1685F4 8018DE84 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1685F8 8018DE88 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 1685FC 8018DE8C AF2FFFF8 */        sw $t7, -8($t9)
  /* 168600 8018DE90 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 168604 8018DE94 15C8FFF8 */       bne $t6, $t0, .L8018DE78
  /* 168608 8018DE98 AF38FFFC */        sw $t8, -4($t9)
  /* 16860C 8018DE9C 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 168610 8018DEA0 240B0001 */     addiu $t3, $zero, 1
  /* 168614 8018DEA4 AF380000 */        sw $t8, ($t9)
  /* 168618 8018DEA8 AC430000 */        sw $v1, ($v0) # gpBattleState + 0
  /* 16861C 8018DEAC A0640000 */        sb $a0, ($v1) # D_ovl37_8018E3E8 + 0
  /* 168620 8018DEB0 A0650001 */        sb $a1, 1($v1) # D_ovl37_8018E3E8 + 1
  /* 168624 8018DEB4 A06B0004 */        sb $t3, 4($v1) # D_ovl37_8018E3E8 + 4
  /* 168628 8018DEB8 A0650023 */        sb $a1, 0x23($v1) # D_ovl37_8018E3E8 + 35
  /* 16862C 8018DEBC 0C063430 */       jal func_ovl37_8018D0C0
  /* 168630 8018DEC0 A0640022 */        sb $a0, 0x22($v1) # D_ovl37_8018E3E8 + 34
  /* 168634 8018DEC4 3C058019 */       lui $a1, %hi(func_ovl37_8018DD80)
  /* 168638 8018DEC8 24A5DD80 */     addiu $a1, $a1, %lo(func_ovl37_8018DD80)
  /* 16863C 8018DECC 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 168640 8018DED0 2406000D */     addiu $a2, $zero, 0xd
  /* 168644 8018DED4 0C00265A */       jal omMakeGObjCommon
  /* 168648 8018DED8 3C078000 */       lui $a3, 0x8000
  /* 16864C 8018DEDC 240E00FF */     addiu $t6, $zero, 0xff
  /* 168650 8018DEE0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 168654 8018DEE4 24040009 */     addiu $a0, $zero, 9
  /* 168658 8018DEE8 3C058000 */       lui $a1, 0x8000
  /* 16865C 8018DEEC 24060064 */     addiu $a2, $zero, 0x64
  /* 168660 8018DEF0 0C002E7F */       jal func_8000B9FC
  /* 168664 8018DEF4 24070003 */     addiu $a3, $zero, 3
  /* 168668 8018DEF8 0C06378F */       jal func_ovl37_8018DE3C
  /* 16866C 8018DEFC 00000000 */       nop 
  /* 168670 8018DF00 0C045624 */       jal func_ovl2_80115890
  /* 168674 8018DF04 00000000 */       nop 
  /* 168678 8018DF08 0C03B04C */       jal func_ovl2_800EC130
  /* 16867C 8018DF0C 00000000 */       nop 
  /* 168680 8018DF10 0C03F0A1 */       jal func_ovl2_800FC284
  /* 168684 8018DF14 00000000 */       nop 
  /* 168688 8018DF18 2404000A */     addiu $a0, $zero, 0xa
  /* 16868C 8018DF1C 2405000A */     addiu $a1, $zero, 0xa
  /* 168690 8018DF20 24060136 */     addiu $a2, $zero, 0x136
  /* 168694 8018DF24 0C043966 */       jal func_ovl2_8010E598
  /* 168698 8018DF28 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16869C 8018DF2C 0C0436D5 */       jal func_ovl2_8010DB54
  /* 1686A0 8018DF30 00000000 */       nop 
  /* 1686A4 8018DF34 24040003 */     addiu $a0, $zero, 3
  /* 1686A8 8018DF38 0C035C65 */       jal func_ovl2_800D7194
  /* 1686AC 8018DF3C 24050002 */     addiu $a1, $zero, 2
  /* 1686B0 8018DF40 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 1686B4 8018DF44 00000000 */       nop 
  /* 1686B8 8018DF48 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 1686BC 8018DF4C 00000000 */       nop 
  /* 1686C0 8018DF50 0C03F4C0 */       jal efManager_AllocUserData
  /* 1686C4 8018DF54 00000000 */       nop 
  /* 1686C8 8018DF58 0C035E1B */       jal func_ovl2_800D786C
  /* 1686CC 8018DF5C 24040002 */     addiu $a0, $zero, 2
  /* 1686D0 8018DF60 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 1686D4 8018DF64 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 1686D8 8018DF68 0C001260 */       jal hal_alloc
  /* 1686DC 8018DF6C 24050010 */     addiu $a1, $zero, 0x10
  /* 1686E0 8018DF70 3C018019 */       lui $at, %hi(D_ovl37_8018E1DC)
  /* 1686E4 8018DF74 0C0636D4 */       jal func_ovl37_8018DB50
  /* 1686E8 8018DF78 AC22E1DC */        sw $v0, %lo(D_ovl37_8018E1DC)($at)
  /* 1686EC 8018DF7C 0C063736 */       jal func_ovl37_8018DCD8
  /* 1686F0 8018DF80 00000000 */       nop 
  /* 1686F4 8018DF84 0C0636FC */       jal func_ovl37_8018DBF0
  /* 1686F8 8018DF88 00000000 */       nop 
  /* 1686FC 8018DF8C 0C063465 */       jal func_ovl37_8018D194
  /* 168700 8018DF90 00000000 */       nop 
  /* 168704 8018DF94 0C00024B */       jal func_8000092C
  /* 168708 8018DF98 00000000 */       nop 
  /* 16870C 8018DF9C 2C410645 */     sltiu $at, $v0, 0x645
  /* 168710 8018DFA0 50200007 */      beql $at, $zero, .L8018DFC0
  /* 168714 8018DFA4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFA8:
  /* 168718 8018DFA8 0C00024B */       jal func_8000092C
  /* 16871C 8018DFAC 00000000 */       nop 
  /* 168720 8018DFB0 2C410645 */     sltiu $at, $v0, 0x645
  /* 168724 8018DFB4 1420FFFC */      bnez $at, .L8018DFA8
  /* 168728 8018DFB8 00000000 */       nop 
  /* 16872C 8018DFBC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFC0:
  /* 168730 8018DFC0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 168734 8018DFC4 03E00008 */        jr $ra
  /* 168738 8018DFC8 00000000 */       nop 

glabel func_ovl37_8018DFCC
  /* 16873C 8018DFCC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 168740 8018DFD0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 168744 8018DFD4 8C830000 */        lw $v1, ($a0)
  /* 168748 8018DFD8 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16874C 8018DFDC 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 168750 8018DFE0 246E0008 */     addiu $t6, $v1, 8
  /* 168754 8018DFE4 AC8E0000 */        sw $t6, ($a0)
  /* 168758 8018DFE8 3C180002 */       lui $t8, 2
  /* 16875C 8018DFEC 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 168760 8018DFF0 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 168764 8018DFF4 AC780004 */        sw $t8, 4($v1)
  /* 168768 8018DFF8 AC6F0000 */        sw $t7, ($v1)
  /* 16876C 8018DFFC 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 168770 8018E000 0C03F2DC */       jal func_ovl2_800FCB70
  /* 168774 8018E004 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 168778 8018E008 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16877C 8018E00C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 168780 8018E010 03E00008 */        jr $ra
  /* 168784 8018E014 00000000 */       nop 

glabel intro_focus_dk_entry
  /* 168788 8018E018 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16878C 8018E01C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 168790 8018E020 3C048019 */       lui $a0, %hi(D_ovl37_8018E0E0)
  /* 168794 8018E024 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 168798 8018E028 2484E0E0 */     addiu $a0, $a0, %lo(D_ovl37_8018E0E0)
  /* 16879C 8018E02C AFBF0014 */        sw $ra, 0x14($sp)
  /* 1687A0 8018E030 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 1687A4 8018E034 0C001C09 */       jal func_80007024
  /* 1687A8 8018E038 AC8F000C */        sw $t7, 0xc($a0) # D_ovl37_8018E0E0 + 12
  /* 1687AC 8018E03C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 1687B0 8018E040 3C198019 */       lui $t9, %hi(D_NF_8018E5E0)
  /* 1687B4 8018E044 3C048019 */       lui $a0, %hi(D_ovl37_8018E0FC)
  /* 1687B8 8018E048 2739E5E0 */     addiu $t9, $t9, %lo(D_NF_8018E5E0)
  /* 1687BC 8018E04C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 1687C0 8018E050 2484E0FC */     addiu $a0, $a0, %lo(D_ovl37_8018E0FC)
  /* 1687C4 8018E054 03194023 */      subu $t0, $t8, $t9
  /* 1687C8 8018E058 0C001A0F */       jal func_8000683C
  /* 1687CC 8018E05C AC880010 */        sw $t0, 0x10($a0) # D_ovl37_8018E0FC + 16
  /* 1687D0 8018E060 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1687D4 8018E064 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1687D8 8018E068 03E00008 */        jr $ra
  /* 1687DC 8018E06C 00000000 */       nop 
#
#glabel D_ovl37_8018E070   # Routine parsed as data
#  /* 1687E0 8018E070 C4898000 */      lwc1 $f9, -0x8000($a0)
