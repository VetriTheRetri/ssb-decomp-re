.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E0C0

glabel func_ovl42_8018D0C0
  /* 16CE70 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16CE74 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 16CE78 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16CE7C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl42_8018E288)
  /* 16CE80 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl42_8018E408)
  /* 16CE84 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16CE88 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16CE8C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 16CE90 8018D0E0 2718E288 */     addiu $t8, $t8, %lo(D_ovl42_8018E288)
  /* 16CE94 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 16CE98 8018D0E8 2508E408 */     addiu $t0, $t0, %lo(D_ovl42_8018E408)
  /* 16CE9C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 16CEA0 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 16CEA4 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 16CEA8 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16CEAC 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 16CEB0 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 16CEB4 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 16CEB8 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16CEBC 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 16CEC0 8018D110 0C0337DE */       jal rldm_initialize
  /* 16CEC4 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 16CEC8 8018D118 3C048019 */       lui $a0, %hi(D_ovl42_8018E0FC)
  /* 16CECC 8018D11C 2484E0FC */     addiu $a0, $a0, %lo(D_ovl42_8018E0FC)
  /* 16CED0 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 16CED4 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 16CED8 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16CEDC 8018D12C 0C001260 */       jal hal_alloc
  /* 16CEE0 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 16CEE4 8018D134 3C048019 */       lui $a0, %hi(D_ovl42_8018E0FC)
  /* 16CEE8 8018D138 3C068019 */       lui $a2, %hi(D_ovl42_8018E440)
  /* 16CEEC 8018D13C 24C6E440 */     addiu $a2, $a2, %lo(D_ovl42_8018E440)
  /* 16CEF0 8018D140 2484E0FC */     addiu $a0, $a0, %lo(D_ovl42_8018E0FC)
  /* 16CEF4 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 16CEF8 8018D148 0C033781 */       jal rldm_load_files_into
  /* 16CEFC 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 16CF00 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16CF04 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16CF08 8018D158 03E00008 */        jr $ra
  /* 16CF0C 8018D15C 00000000 */       nop 

glabel func_ovl42_8018D160
  /* 16CF10 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 16CF14 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 16CF18 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 16CF1C 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 16CF20 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 16CF24 8018D174 37190001 */       ori $t9, $t8, 1
  /* 16CF28 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 16CF2C 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 16CF30 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 16CF34 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 16CF38 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 16CF3C 8018D18C 03E00008 */        jr $ra
  /* 16CF40 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl42_8018D194
  /* 16CF44 8018D194 27BDFF60 */     addiu $sp, $sp, -0xa0
  /* 16CF48 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl42_8018E104)
  /* 16CF4C 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 16CF50 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 16CF54 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 16CF58 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 16CF5C 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 16CF60 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 16CF64 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 16CF68 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 16CF6C 8018D1BC 25EFE104 */     addiu $t7, $t7, %lo(D_ovl42_8018E104)
  /* 16CF70 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl42_8018E104 + 0
  /* 16CF74 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl42_8018E104 + 4
  /* 16CF78 8018D1C8 27AE0078 */     addiu $t6, $sp, 0x78
  /* 16CF7C 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 16CF80 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 16CF84 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl42_8018E104 + 12
  /* 16CF88 8018D1D8 8DF90008 */        lw $t9, 8($t7) # D_ovl42_8018E104 + 8
  /* 16CF8C 8018D1DC 3C098019 */       lui $t1, %hi(D_ovl42_8018E124)
  /* 16CF90 8018D1E0 ADD8000C */        sw $t8, 0xc($t6)
  /* 16CF94 8018D1E4 ADD90008 */        sw $t9, 8($t6)
  /* 16CF98 8018D1E8 8DF90010 */        lw $t9, 0x10($t7) # D_ovl42_8018E104 + 16
  /* 16CF9C 8018D1EC 8DF80014 */        lw $t8, 0x14($t7) # D_ovl42_8018E104 + 20
  /* 16CFA0 8018D1F0 2529E124 */     addiu $t1, $t1, %lo(D_ovl42_8018E124)
  /* 16CFA4 8018D1F4 ADD90010 */        sw $t9, 0x10($t6)
  /* 16CFA8 8018D1F8 ADD80014 */        sw $t8, 0x14($t6)
  /* 16CFAC 8018D1FC 8DF8001C */        lw $t8, 0x1c($t7) # D_ovl42_8018E104 + 28
  /* 16CFB0 8018D200 8DF90018 */        lw $t9, 0x18($t7) # D_ovl42_8018E104 + 24
  /* 16CFB4 8018D204 27A8005C */     addiu $t0, $sp, 0x5c
  /* 16CFB8 8018D208 ADD8001C */        sw $t8, 0x1c($t6)
  /* 16CFBC 8018D20C ADD90018 */        sw $t9, 0x18($t6)
  /* 16CFC0 8018D210 8D2B0000 */        lw $t3, ($t1) # D_ovl42_8018E124 + 0
  /* 16CFC4 8018D214 8D2A0004 */        lw $t2, 4($t1) # D_ovl42_8018E124 + 4
  /* 16CFC8 8018D218 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 16CFCC 8018D21C AD0B0000 */        sw $t3, ($t0)
  /* 16CFD0 8018D220 8D2B0008 */        lw $t3, 8($t1) # D_ovl42_8018E124 + 8
  /* 16CFD4 8018D224 AD0A0004 */        sw $t2, 4($t0)
  /* 16CFD8 8018D228 8D2A000C */        lw $t2, 0xc($t1) # D_ovl42_8018E124 + 12
  /* 16CFDC 8018D22C AD0B0008 */        sw $t3, 8($t0)
  /* 16CFE0 8018D230 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl42_8018E124 + 16
  /* 16CFE4 8018D234 AD0A000C */        sw $t2, 0xc($t0)
  /* 16CFE8 8018D238 8D2A0014 */        lw $t2, 0x14($t1) # D_ovl42_8018E124 + 20
  /* 16CFEC 8018D23C AD0B0010 */        sw $t3, 0x10($t0)
  /* 16CFF0 8018D240 8D2B0018 */        lw $t3, 0x18($t1) # D_ovl42_8018E124 + 24
  /* 16CFF4 8018D244 02003825 */        or $a3, $s0, $zero
  /* 16CFF8 8018D248 00002025 */        or $a0, $zero, $zero
  /* 16CFFC 8018D24C 00002825 */        or $a1, $zero, $zero
  /* 16D000 8018D250 24060011 */     addiu $a2, $zero, 0x11
  /* 16D004 8018D254 AD0A0014 */        sw $t2, 0x14($t0)
  /* 16D008 8018D258 0C00265A */       jal omMakeGObjCommon
  /* 16D00C 8018D25C AD0B0018 */        sw $t3, 0x18($t0)
  /* 16D010 8018D260 3C018019 */       lui $at, %hi(D_ovl42_8018E22C)
  /* 16D014 8018D264 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16D018 8018D268 240CFFFF */     addiu $t4, $zero, -1
  /* 16D01C 8018D26C AC22E22C */        sw $v0, %lo(D_ovl42_8018E22C)($at)
  /* 16D020 8018D270 0040A025 */        or $s4, $v0, $zero
  /* 16D024 8018D274 AFAC0010 */        sw $t4, 0x10($sp)
  /* 16D028 8018D278 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16D02C 8018D27C 00402025 */        or $a0, $v0, $zero
  /* 16D030 8018D280 2406001B */     addiu $a2, $zero, 0x1b
  /* 16D034 8018D284 0C00277D */       jal func_80009DF4
  /* 16D038 8018D288 02003825 */        or $a3, $s0, $zero
  /* 16D03C 8018D28C 8FAD0078 */        lw $t5, 0x78($sp)
  /* 16D040 8018D290 27B00078 */     addiu $s0, $sp, 0x78
  /* 16D044 8018D294 27B1005C */     addiu $s1, $sp, 0x5c
  /* 16D048 8018D298 11A0001C */      beqz $t5, .L8018D30C
  /* 16D04C 8018D29C 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 16D050 8018D2A0 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 16D054 8018D2A4 3C014282 */       lui $at, (0x42820000 >> 16) # 65.0
  /* 16D058 8018D2A8 3C128019 */       lui $s2, %hi(D_ovl42_8018E440)
  /* 16D05C 8018D2AC 4481A000 */      mtc1 $at, $f20 # 65.0 to cop1
  /* 16D060 8018D2B0 2652E440 */     addiu $s2, $s2, %lo(D_ovl42_8018E440)
  /* 16D064 8018D2B4 8E020000 */        lw $v0, %lo(D_NF_80000000)($s0)
  /* 16D068 8018D2B8 2413FFDF */     addiu $s3, $zero, -0x21
  /* 16D06C 8018D2BC 8E4F0000 */        lw $t7, ($s2) # D_ovl42_8018E440 + 0
  .L8018D2C0:
  /* 16D070 8018D2C0 02802025 */        or $a0, $s4, $zero
  /* 16D074 8018D2C4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16D078 8018D2C8 004F2821 */      addu $a1, $v0, $t7
  /* 16D07C 8018D2CC 94580024 */       lhu $t8, 0x24($v0)
  /* 16D080 8018D2D0 00402025 */        or $a0, $v0, $zero
  /* 16D084 8018D2D4 03134024 */       and $t0, $t8, $s3
  /* 16D088 8018D2D8 A4480024 */        sh $t0, 0x24($v0)
  /* 16D08C 8018D2DC 35090001 */       ori $t1, $t0, 1
  /* 16D090 8018D2E0 A4490024 */        sh $t1, 0x24($v0)
  /* 16D094 8018D2E4 C6240000 */      lwc1 $f4, ($s1)
  /* 16D098 8018D2E8 E456005C */      swc1 $f22, 0x5c($v0)
  /* 16D09C 8018D2EC 46142180 */     add.s $f6, $f4, $f20
  /* 16D0A0 8018D2F0 0C063458 */       jal func_ovl42_8018D160
  /* 16D0A4 8018D2F4 E4460058 */      swc1 $f6, 0x58($v0)
  /* 16D0A8 8018D2F8 8E020004 */        lw $v0, %lo(D_NF_80000004)($s0)
  /* 16D0AC 8018D2FC 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 16D0B0 8018D300 26310004 */     addiu $s1, $s1, 4
  /* 16D0B4 8018D304 5440FFEE */      bnel $v0, $zero, .L8018D2C0
  /* 16D0B8 8018D308 8E4F0000 */        lw $t7, ($s2) # D_ovl42_8018E440 + 0
  .L8018D30C:
  /* 16D0BC 8018D30C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 16D0C0 8018D310 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 16D0C4 8018D314 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 16D0C8 8018D318 8FB00030 */        lw $s0, 0x30($sp)
  /* 16D0CC 8018D31C 8FB10034 */        lw $s1, 0x34($sp)
  /* 16D0D0 8018D320 8FB20038 */        lw $s2, 0x38($sp)
  /* 16D0D4 8018D324 8FB3003C */        lw $s3, 0x3c($sp)
  /* 16D0D8 8018D328 8FB40040 */        lw $s4, 0x40($sp)
  /* 16D0DC 8018D32C 03E00008 */        jr $ra
  /* 16D0E0 8018D330 27BD00A0 */     addiu $sp, $sp, 0xa0

glabel func_ovl42_8018D334
  /* 16D0E4 8018D334 3C0E8019 */       lui $t6, %hi(D_ovl42_8018E228)
  /* 16D0E8 8018D338 8DCEE228 */        lw $t6, %lo(D_ovl42_8018E228)($t6)
  /* 16D0EC 8018D33C 3C038019 */       lui $v1, %hi(D_ovl42_8018E268)
  /* 16D0F0 8018D340 8C820074 */        lw $v0, 0x74($a0)
  /* 16D0F4 8018D344 29C1000F */      slti $at, $t6, 0xf
  /* 16D0F8 8018D348 14200036 */      bnez $at, .L8018D424
  /* 16D0FC 8018D34C 2463E268 */     addiu $v1, $v1, %lo(D_ovl42_8018E268)
  /* 16D100 8018D350 3C048019 */       lui $a0, %hi(D_ovl42_8018E248)
  /* 16D104 8018D354 2484E248 */     addiu $a0, $a0, %lo(D_ovl42_8018E248)
  /* 16D108 8018D358 C4860000 */      lwc1 $f6, ($a0) # D_ovl42_8018E248 + 0
  /* 16D10C 8018D35C C4640000 */      lwc1 $f4, ($v1) # D_ovl42_8018E268 + 0
  /* 16D110 8018D360 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 16D114 8018D364 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 16D118 8018D368 46062201 */     sub.s $f8, $f4, $f6
  /* 16D11C 8018D36C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 16D120 8018D370 46004283 */     div.s $f10, $f8, $f0
  /* 16D124 8018D374 460A8480 */     add.s $f18, $f16, $f10
  /* 16D128 8018D378 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 16D12C 8018D37C E452003C */      swc1 $f18, 0x3c($v0)
  /* 16D130 8018D380 C4860004 */      lwc1 $f6, 4($a0) # D_ovl42_8018E248 + 4
  /* 16D134 8018D384 C4640004 */      lwc1 $f4, 4($v1) # D_ovl42_8018E268 + 4
  /* 16D138 8018D388 46062201 */     sub.s $f8, $f4, $f6
  /* 16D13C 8018D38C 46004403 */     div.s $f16, $f8, $f0
  /* 16D140 8018D390 46105480 */     add.s $f18, $f10, $f16
  /* 16D144 8018D394 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 16D148 8018D398 E4520040 */      swc1 $f18, 0x40($v0)
  /* 16D14C 8018D39C C4860008 */      lwc1 $f6, 8($a0) # D_ovl42_8018E248 + 8
  /* 16D150 8018D3A0 C4640008 */      lwc1 $f4, 8($v1) # D_ovl42_8018E268 + 8
  /* 16D154 8018D3A4 46062201 */     sub.s $f8, $f4, $f6
  /* 16D158 8018D3A8 46004283 */     div.s $f10, $f8, $f0
  /* 16D15C 8018D3AC 460A8480 */     add.s $f18, $f16, $f10
  /* 16D160 8018D3B0 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 16D164 8018D3B4 E4520044 */      swc1 $f18, 0x44($v0)
  /* 16D168 8018D3B8 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl42_8018E248 + 12
  /* 16D16C 8018D3BC C464000C */      lwc1 $f4, 0xc($v1) # D_ovl42_8018E268 + 12
  /* 16D170 8018D3C0 46062201 */     sub.s $f8, $f4, $f6
  /* 16D174 8018D3C4 46004403 */     div.s $f16, $f8, $f0
  /* 16D178 8018D3C8 46105480 */     add.s $f18, $f10, $f16
  /* 16D17C 8018D3CC C450004C */      lwc1 $f16, 0x4c($v0)
  /* 16D180 8018D3D0 E4520048 */      swc1 $f18, 0x48($v0)
  /* 16D184 8018D3D4 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl42_8018E248 + 16
  /* 16D188 8018D3D8 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl42_8018E268 + 16
  /* 16D18C 8018D3DC 46062201 */     sub.s $f8, $f4, $f6
  /* 16D190 8018D3E0 46004283 */     div.s $f10, $f8, $f0
  /* 16D194 8018D3E4 460A8480 */     add.s $f18, $f16, $f10
  /* 16D198 8018D3E8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 16D19C 8018D3EC E452004C */      swc1 $f18, 0x4c($v0)
  /* 16D1A0 8018D3F0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl42_8018E248 + 20
  /* 16D1A4 8018D3F4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl42_8018E268 + 20
  /* 16D1A8 8018D3F8 46062201 */     sub.s $f8, $f4, $f6
  /* 16D1AC 8018D3FC 46004403 */     div.s $f16, $f8, $f0
  /* 16D1B0 8018D400 46105480 */     add.s $f18, $f10, $f16
  /* 16D1B4 8018D404 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 16D1B8 8018D408 E4520050 */      swc1 $f18, 0x50($v0)
  /* 16D1BC 8018D40C C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl42_8018E248 + 24
  /* 16D1C0 8018D410 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl42_8018E268 + 24
  /* 16D1C4 8018D414 46062201 */     sub.s $f8, $f4, $f6
  /* 16D1C8 8018D418 46004283 */     div.s $f10, $f8, $f0
  /* 16D1CC 8018D41C 460A8480 */     add.s $f18, $f16, $f10
  /* 16D1D0 8018D420 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D424:
  /* 16D1D4 8018D424 03E00008 */        jr $ra
  /* 16D1D8 8018D428 00000000 */       nop 

glabel func_ovl42_8018D42C
  /* 16D1DC 8018D42C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 16D1E0 8018D430 3C0E8019 */       lui $t6, %hi(D_ovl42_8018E0C0)
  /* 16D1E4 8018D434 AFBF002C */        sw $ra, 0x2c($sp)
  /* 16D1E8 8018D438 AFB20028 */        sw $s2, 0x28($sp)
  /* 16D1EC 8018D43C AFB10024 */        sw $s1, 0x24($sp)
  /* 16D1F0 8018D440 AFB00020 */        sw $s0, 0x20($sp)
  /* 16D1F4 8018D444 AFA40030 */        sw $a0, 0x30($sp)
  /* 16D1F8 8018D448 AFA50034 */        sw $a1, 0x34($sp)
  /* 16D1FC 8018D44C AFA60038 */        sw $a2, 0x38($sp)
  /* 16D200 8018D450 25CEE0C0 */     addiu $t6, $t6, %lo(D_ovl42_8018E0C0)
  /* 16D204 8018D454 8DD80000 */        lw $t8, ($t6) # D_ovl42_8018E0C0 + 0
  /* 16D208 8018D458 3C108019 */       lui $s0, %hi(D_ovl42_8018E248)
  /* 16D20C 8018D45C 2610E248 */     addiu $s0, $s0, %lo(D_ovl42_8018E248)
  /* 16D210 8018D460 AE180000 */        sw $t8, ($s0) # D_ovl42_8018E248 + 0
  /* 16D214 8018D464 8DCF0004 */        lw $t7, 4($t6) # D_ovl42_8018E0C0 + 4
  /* 16D218 8018D468 3C198019 */       lui $t9, %hi(D_ovl42_8018E0DC)
  /* 16D21C 8018D46C 2739E0DC */     addiu $t9, $t9, %lo(D_ovl42_8018E0DC)
  /* 16D220 8018D470 AE0F0004 */        sw $t7, 4($s0) # D_ovl42_8018E248 + 4
  /* 16D224 8018D474 8DD80008 */        lw $t8, 8($t6) # D_ovl42_8018E0C0 + 8
  /* 16D228 8018D478 3C118019 */       lui $s1, %hi(D_ovl42_8018E268)
  /* 16D22C 8018D47C 2631E268 */     addiu $s1, $s1, %lo(D_ovl42_8018E268)
  /* 16D230 8018D480 AE180008 */        sw $t8, 8($s0) # D_ovl42_8018E248 + 8
  /* 16D234 8018D484 8DCF000C */        lw $t7, 0xc($t6) # D_ovl42_8018E0C0 + 12
  /* 16D238 8018D488 00002025 */        or $a0, $zero, $zero
  /* 16D23C 8018D48C AE0F000C */        sw $t7, 0xc($s0) # D_ovl42_8018E248 + 12
  /* 16D240 8018D490 8DD80010 */        lw $t8, 0x10($t6) # D_ovl42_8018E0C0 + 16
  /* 16D244 8018D494 AE180010 */        sw $t8, 0x10($s0) # D_ovl42_8018E248 + 16
  /* 16D248 8018D498 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl42_8018E0C0 + 20
  /* 16D24C 8018D49C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl42_8018E248 + 20
  /* 16D250 8018D4A0 8DD80018 */        lw $t8, 0x18($t6) # D_ovl42_8018E0C0 + 24
  /* 16D254 8018D4A4 AE180018 */        sw $t8, 0x18($s0) # D_ovl42_8018E248 + 24
  /* 16D258 8018D4A8 8F290000 */        lw $t1, ($t9) # D_ovl42_8018E0DC + 0
  /* 16D25C 8018D4AC AE290000 */        sw $t1, ($s1) # D_ovl42_8018E268 + 0
  /* 16D260 8018D4B0 8F280004 */        lw $t0, 4($t9) # D_ovl42_8018E0DC + 4
  /* 16D264 8018D4B4 AE280004 */        sw $t0, 4($s1) # D_ovl42_8018E268 + 4
  /* 16D268 8018D4B8 8F290008 */        lw $t1, 8($t9) # D_ovl42_8018E0DC + 8
  /* 16D26C 8018D4BC AE290008 */        sw $t1, 8($s1) # D_ovl42_8018E268 + 8
  /* 16D270 8018D4C0 8F28000C */        lw $t0, 0xc($t9) # D_ovl42_8018E0DC + 12
  /* 16D274 8018D4C4 AE28000C */        sw $t0, 0xc($s1) # D_ovl42_8018E268 + 12
  /* 16D278 8018D4C8 8F290010 */        lw $t1, 0x10($t9) # D_ovl42_8018E0DC + 16
  /* 16D27C 8018D4CC AE290010 */        sw $t1, 0x10($s1) # D_ovl42_8018E268 + 16
  /* 16D280 8018D4D0 8F280014 */        lw $t0, 0x14($t9) # D_ovl42_8018E0DC + 20
  /* 16D284 8018D4D4 AE280014 */        sw $t0, 0x14($s1) # D_ovl42_8018E268 + 20
  /* 16D288 8018D4D8 8F290018 */        lw $t1, 0x18($t9) # D_ovl42_8018E0DC + 24
  /* 16D28C 8018D4DC 0C0436CB */       jal func_ovl2_8010DB2C
  /* 16D290 8018D4E0 AE290018 */        sw $t1, 0x18($s1) # D_ovl42_8018E268 + 24
  /* 16D294 8018D4E4 3C038019 */       lui $v1, %hi(D_ovl42_8018E238)
  /* 16D298 8018D4E8 2463E238 */     addiu $v1, $v1, %lo(D_ovl42_8018E238)
  /* 16D29C 8018D4EC AC620000 */        sw $v0, ($v1) # D_ovl42_8018E238 + 0
  /* 16D2A0 8018D4F0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16D2A4 8018D4F4 8C520074 */        lw $s2, 0x74($v0)
  /* 16D2A8 8018D4F8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16D2AC 8018D4FC 3C0542DC */       lui $a1, 0x42dc
  /* 16D2B0 8018D500 3C064120 */       lui $a2, 0x4120
  /* 16D2B4 8018D504 3C07439B */       lui $a3, 0x439b
  /* 16D2B8 8018D508 26440008 */     addiu $a0, $s2, 8
  /* 16D2BC 8018D50C 0C001C20 */       jal func_80007080
  /* 16D2C0 8018D510 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16D2C4 8018D514 3C018019 */       lui $at, %hi(D_ovl42_8018E20C)
  /* 16D2C8 8018D518 C426E20C */      lwc1 $f6, %lo(D_ovl42_8018E20C)($at)
  /* 16D2CC 8018D51C 3C048019 */       lui $a0, %hi(D_ovl42_8018E238)
  /* 16D2D0 8018D520 E6460024 */      swc1 $f6, 0x24($s2)
  /* 16D2D4 8018D524 0C002CE7 */       jal func_8000B39C
  /* 16D2D8 8018D528 8C84E238 */        lw $a0, %lo(D_ovl42_8018E238)($a0)
  /* 16D2DC 8018D52C 3C048019 */       lui $a0, %hi(D_ovl42_8018E238)
  /* 16D2E0 8018D530 3C058019 */       lui $a1, %hi(func_ovl42_8018D334)
  /* 16D2E4 8018D534 24A5D334 */     addiu $a1, $a1, %lo(func_ovl42_8018D334)
  /* 16D2E8 8018D538 8C84E238 */        lw $a0, %lo(D_ovl42_8018E238)($a0)
  /* 16D2EC 8018D53C 24060001 */     addiu $a2, $zero, 1
  /* 16D2F0 8018D540 0C002062 */       jal omAddGObjCommonProc
  /* 16D2F4 8018D544 24070001 */     addiu $a3, $zero, 1
  /* 16D2F8 8018D548 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 16D2FC 8018D54C C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 16D300 8018D550 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 16D304 8018D554 C6080000 */      lwc1 $f8, ($s0) # D_ovl42_8018E248 + 0
  /* 16D308 8018D558 C6100004 */      lwc1 $f16, 4($s0) # D_ovl42_8018E248 + 4
  /* 16D30C 8018D55C C6040008 */      lwc1 $f4, 8($s0) # D_ovl42_8018E248 + 8
  /* 16D310 8018D560 46004280 */     add.s $f10, $f8, $f0
  /* 16D314 8018D564 C608000C */      lwc1 $f8, 0xc($s0) # D_ovl42_8018E248 + 12
  /* 16D318 8018D568 46028480 */     add.s $f18, $f16, $f2
  /* 16D31C 8018D56C C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl42_8018E248 + 16
  /* 16D320 8018D570 E60A0000 */      swc1 $f10, ($s0) # D_ovl42_8018E248 + 0
  /* 16D324 8018D574 460C2180 */     add.s $f6, $f4, $f12
  /* 16D328 8018D578 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl42_8018E248 + 20
  /* 16D32C 8018D57C E6120004 */      swc1 $f18, 4($s0) # D_ovl42_8018E248 + 4
  /* 16D330 8018D580 46004280 */     add.s $f10, $f8, $f0
  /* 16D334 8018D584 E6060008 */      swc1 $f6, 8($s0) # D_ovl42_8018E248 + 8
  /* 16D338 8018D588 C6280000 */      lwc1 $f8, ($s1) # D_ovl42_8018E268 + 0
  /* 16D33C 8018D58C 46028480 */     add.s $f18, $f16, $f2
  /* 16D340 8018D590 C6300004 */      lwc1 $f16, 4($s1) # D_ovl42_8018E268 + 4
  /* 16D344 8018D594 E60A000C */      swc1 $f10, 0xc($s0) # D_ovl42_8018E248 + 12
  /* 16D348 8018D598 460C2180 */     add.s $f6, $f4, $f12
  /* 16D34C 8018D59C C6240008 */      lwc1 $f4, 8($s1) # D_ovl42_8018E268 + 8
  /* 16D350 8018D5A0 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl42_8018E248 + 16
  /* 16D354 8018D5A4 46004280 */     add.s $f10, $f8, $f0
  /* 16D358 8018D5A8 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl42_8018E248 + 20
  /* 16D35C 8018D5AC C628000C */      lwc1 $f8, 0xc($s1) # D_ovl42_8018E268 + 12
  /* 16D360 8018D5B0 46028480 */     add.s $f18, $f16, $f2
  /* 16D364 8018D5B4 C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl42_8018E268 + 16
  /* 16D368 8018D5B8 E62A0000 */      swc1 $f10, ($s1) # D_ovl42_8018E268 + 0
  /* 16D36C 8018D5BC 460C2180 */     add.s $f6, $f4, $f12
  /* 16D370 8018D5C0 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl42_8018E268 + 20
  /* 16D374 8018D5C4 E6320004 */      swc1 $f18, 4($s1) # D_ovl42_8018E268 + 4
  /* 16D378 8018D5C8 46004280 */     add.s $f10, $f8, $f0
  /* 16D37C 8018D5CC E6260008 */      swc1 $f6, 8($s1) # D_ovl42_8018E268 + 8
  /* 16D380 8018D5D0 C6080000 */      lwc1 $f8, ($s0) # D_ovl42_8018E248 + 0
  /* 16D384 8018D5D4 46028480 */     add.s $f18, $f16, $f2
  /* 16D388 8018D5D8 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl42_8018E268 + 12
  /* 16D38C 8018D5DC 460C2180 */     add.s $f6, $f4, $f12
  /* 16D390 8018D5E0 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl42_8018E268 + 16
  /* 16D394 8018D5E4 E6260014 */      swc1 $f6, 0x14($s1) # D_ovl42_8018E268 + 20
  /* 16D398 8018D5E8 E648003C */      swc1 $f8, 0x3c($s2)
  /* 16D39C 8018D5EC C60A0004 */      lwc1 $f10, 4($s0) # D_ovl42_8018E248 + 4
  /* 16D3A0 8018D5F0 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 16D3A4 8018D5F4 C6100008 */      lwc1 $f16, 8($s0) # D_ovl42_8018E248 + 8
  /* 16D3A8 8018D5F8 E6500044 */      swc1 $f16, 0x44($s2)
  /* 16D3AC 8018D5FC C612000C */      lwc1 $f18, 0xc($s0) # D_ovl42_8018E248 + 12
  /* 16D3B0 8018D600 E6520048 */      swc1 $f18, 0x48($s2)
  /* 16D3B4 8018D604 C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl42_8018E248 + 16
  /* 16D3B8 8018D608 E644004C */      swc1 $f4, 0x4c($s2)
  /* 16D3BC 8018D60C C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl42_8018E248 + 20
  /* 16D3C0 8018D610 E6460050 */      swc1 $f6, 0x50($s2)
  /* 16D3C4 8018D614 C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl42_8018E248 + 24
  /* 16D3C8 8018D618 E6480054 */      swc1 $f8, 0x54($s2)
  /* 16D3CC 8018D61C 8FBF002C */        lw $ra, 0x2c($sp)
  /* 16D3D0 8018D620 8FB20028 */        lw $s2, 0x28($sp)
  /* 16D3D4 8018D624 8FB10024 */        lw $s1, 0x24($sp)
  /* 16D3D8 8018D628 8FB00020 */        lw $s0, 0x20($sp)
  /* 16D3DC 8018D62C 03E00008 */        jr $ra
  /* 16D3E0 8018D630 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl42_8018D634
  /* 16D3E4 8018D634 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 16D3E8 8018D638 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16D3EC 8018D63C AFBE0038 */        sw $fp, 0x38($sp)
  /* 16D3F0 8018D640 AFB70034 */        sw $s7, 0x34($sp)
  /* 16D3F4 8018D644 AFB60030 */        sw $s6, 0x30($sp)
  /* 16D3F8 8018D648 AFB5002C */        sw $s5, 0x2c($sp)
  /* 16D3FC 8018D64C AFB40028 */        sw $s4, 0x28($sp)
  /* 16D400 8018D650 AFB30024 */        sw $s3, 0x24($sp)
  /* 16D404 8018D654 AFB20020 */        sw $s2, 0x20($sp)
  /* 16D408 8018D658 AFB1001C */        sw $s1, 0x1c($sp)
  /* 16D40C 8018D65C 0C0412F7 */       jal func_ovl2_80104BDC
  /* 16D410 8018D660 AFB00018 */        sw $s0, 0x18($sp)
  /* 16D414 8018D664 0C041580 */       jal func_ovl2_80105600
  /* 16D418 8018D668 00000000 */       nop 
  /* 16D41C 8018D66C 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 16D420 8018D670 24040015 */     addiu $a0, $zero, 0x15
  /* 16D424 8018D674 24010001 */     addiu $at, $zero, 1
  /* 16D428 8018D678 10410009 */       beq $v0, $at, .L8018D6A0
  /* 16D42C 8018D67C 24040015 */     addiu $a0, $zero, 0x15
  /* 16D430 8018D680 3C108019 */       lui $s0, %hi(D_ovl42_8018E1F0)
  /* 16D434 8018D684 2610E1F0 */     addiu $s0, $s0, %lo(D_ovl42_8018E1F0)
  .L8018D688:
  /* 16D438 8018D688 0C008D89 */       jal fatal_printf
  /* 16D43C 8018D68C 02002025 */        or $a0, $s0, $zero
  /* 16D440 8018D690 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 16D444 8018D694 00000000 */       nop 
  /* 16D448 8018D698 1000FFFB */         b .L8018D688
  /* 16D44C 8018D69C 00000000 */       nop 
  .L8018D6A0:
  /* 16D450 8018D6A0 0C03F205 */       jal func_ovl2_800FC814
  /* 16D454 8018D6A4 27A5009C */     addiu $a1, $sp, 0x9c
  /* 16D458 8018D6A8 27B00090 */     addiu $s0, $sp, 0x90
  /* 16D45C 8018D6AC 02002825 */        or $a1, $s0, $zero
  /* 16D460 8018D6B0 0C03F225 */       jal func_ovl2_800FC894
  /* 16D464 8018D6B4 8FA4009C */        lw $a0, 0x9c($sp)
  /* 16D468 8018D6B8 8E0F0000 */        lw $t7, ($s0) # D_ovl42_8018E1F0 + 0
  /* 16D46C 8018D6BC AFAF0000 */        sw $t7, ($sp)
  /* 16D470 8018D6C0 8E050004 */        lw $a1, 4($s0) # D_ovl42_8018E1F0 + 4
  /* 16D474 8018D6C4 8FA40000 */        lw $a0, ($sp)
  /* 16D478 8018D6C8 AFA50004 */        sw $a1, 4($sp)
  /* 16D47C 8018D6CC 8E060008 */        lw $a2, 8($s0) # D_ovl42_8018E1F0 + 8
  /* 16D480 8018D6D0 0C06350B */       jal func_ovl42_8018D42C
  /* 16D484 8018D6D4 AFA60008 */        sw $a2, 8($sp)
  /* 16D488 8018D6D8 0C0455B9 */       jal func_ovl2_801156E4
  /* 16D48C 8018D6DC 00000000 */       nop 
  /* 16D490 8018D6E0 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 16D494 8018D6E4 00000000 */       nop 
  /* 16D498 8018D6E8 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 16D49C 8018D6EC 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 16D4A0 8018D6F0 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 16D4A4 8018D6F4 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 16D4A8 8018D6F8 00008825 */        or $s1, $zero, $zero
  /* 16D4AC 8018D6FC 00009025 */        or $s2, $zero, $zero
  /* 16D4B0 8018D700 241E0004 */     addiu $fp, $zero, 4
  /* 16D4B4 8018D704 24170002 */     addiu $s7, $zero, 2
  /* 16D4B8 8018D708 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D70C:
  /* 16D4BC 8018D70C 02C04025 */        or $t0, $s6, $zero
  /* 16D4C0 8018D710 02804825 */        or $t1, $s4, $zero
  /* 16D4C4 8018D714 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D718:
  /* 16D4C8 8018D718 8D190000 */        lw $t9, ($t0)
  /* 16D4CC 8018D71C 2508000C */     addiu $t0, $t0, 0xc
  /* 16D4D0 8018D720 2529000C */     addiu $t1, $t1, 0xc
  /* 16D4D4 8018D724 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 16D4D8 8018D728 8D18FFF8 */        lw $t8, -8($t0)
  /* 16D4DC 8018D72C AD38FFF8 */        sw $t8, -8($t1)
  /* 16D4E0 8018D730 8D19FFFC */        lw $t9, -4($t0)
  /* 16D4E4 8018D734 150AFFF8 */       bne $t0, $t2, .L8018D718
  /* 16D4E8 8018D738 AD39FFFC */        sw $t9, -4($t1)
  /* 16D4EC 8018D73C 8D190000 */        lw $t9, ($t0)
  /* 16D4F0 8018D740 00116880 */       sll $t5, $s1, 2
  /* 16D4F4 8018D744 01B16821 */      addu $t5, $t5, $s1
  /* 16D4F8 8018D748 AD390000 */        sw $t9, ($t1)
  /* 16D4FC 8018D74C 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 16D500 8018D750 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 16D504 8018D754 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 16D508 8018D758 01728021 */      addu $s0, $t3, $s2
  /* 16D50C 8018D75C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl42_8018E1F0 + 34
  /* 16D510 8018D760 000D6840 */       sll $t5, $t5, 1
  /* 16D514 8018D764 01AE9821 */      addu $s3, $t5, $t6
  /* 16D518 8018D768 52EC0030 */      beql $s7, $t4, .L8018D82C
  /* 16D51C 8018D76C 26310001 */     addiu $s1, $s1, 1
  /* 16D520 8018D770 0C035E1B */       jal func_ovl2_800D786C
  /* 16D524 8018D774 92040023 */       lbu $a0, 0x23($s0) # D_ovl42_8018E1F0 + 35
  /* 16D528 8018D778 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 16D52C 8018D77C C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 16D530 8018D780 C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 16D534 8018D784 00528021 */      addu $s0, $v0, $s2
  /* 16D538 8018D788 920F0023 */       lbu $t7, 0x23($s0) # D_ovl42_8018E1F0 + 35
  /* 16D53C 8018D78C C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 16D540 8018D790 240A0001 */     addiu $t2, $zero, 1
  /* 16D544 8018D794 AFAA0060 */        sw $t2, 0x60($sp)
  /* 16D548 8018D798 E7A40054 */      swc1 $f4, 0x54($sp)
  /* 16D54C 8018D79C E7A60058 */      swc1 $f6, 0x58($sp)
  /* 16D550 8018D7A0 AFAF0050 */        sw $t7, 0x50($sp)
  /* 16D554 8018D7A4 E7A8005C */      swc1 $f8, 0x5c($sp)
  /* 16D558 8018D7A8 92080024 */       lbu $t0, 0x24($s0) # D_ovl42_8018E1F0 + 36
  /* 16D55C 8018D7AC 24090001 */     addiu $t1, $zero, 1
  /* 16D560 8018D7B0 A3B10065 */        sb $s1, 0x65($sp)
  /* 16D564 8018D7B4 A3A90066 */        sb $t1, 0x66($sp)
  /* 16D568 8018D7B8 A3A80064 */        sb $t0, 0x64($sp)
  /* 16D56C 8018D7BC 92180026 */       lbu $t8, 0x26($s0) # D_ovl42_8018E1F0 + 38
  /* 16D570 8018D7C0 A3B80067 */        sb $t8, 0x67($sp)
  /* 16D574 8018D7C4 92190021 */       lbu $t9, 0x21($s0) # D_ovl42_8018E1F0 + 33
  /* 16D578 8018D7C8 A3B90069 */        sb $t9, 0x69($sp)
  /* 16D57C 8018D7CC 920B0020 */       lbu $t3, 0x20($s0) # D_ovl42_8018E1F0 + 32
  /* 16D580 8018D7D0 A3AB006A */        sb $t3, 0x6a($sp)
  /* 16D584 8018D7D4 904C0007 */       lbu $t4, 7($v0)
  /* 16D588 8018D7D8 AFA00074 */        sw $zero, 0x74($sp)
  /* 16D58C 8018D7DC A3AC006B */        sb $t4, 0x6b($sp)
  /* 16D590 8018D7E0 920D0022 */       lbu $t5, 0x22($s0) # D_ovl42_8018E1F0 + 34
  /* 16D594 8018D7E4 AFB3007C */        sw $s3, 0x7c($sp)
  /* 16D598 8018D7E8 AFAD0078 */        sw $t5, 0x78($sp)
  /* 16D59C 8018D7EC 0C035E2D */       jal func_ovl2_800D78B4
  /* 16D5A0 8018D7F0 92040023 */       lbu $a0, 0x23($s0) # D_ovl42_8018E1F0 + 35
  /* 16D5A4 8018D7F4 AFA20088 */        sw $v0, 0x88($sp)
  /* 16D5A8 8018D7F8 0C035FCF */       jal ftManager_CreateFighter
  /* 16D5AC 8018D7FC 02802025 */        or $a0, $s4, $zero
  /* 16D5B0 8018D800 3C018019 */       lui $at, %hi(D_ovl42_8018E230)
  /* 16D5B4 8018D804 AC22E230 */        sw $v0, %lo(D_ovl42_8018E230)($at)
  /* 16D5B8 8018D808 00408025 */        or $s0, $v0, $zero
  /* 16D5BC 8018D80C 02202025 */        or $a0, $s1, $zero
  /* 16D5C0 8018D810 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 16D5C4 8018D814 00402825 */        or $a1, $v0, $zero
  /* 16D5C8 8018D818 3C058019 */       lui $a1, %hi(D_ovl42_8018E0F8)
  /* 16D5CC 8018D81C 24A5E0F8 */     addiu $a1, $a1, %lo(D_ovl42_8018E0F8)
  /* 16D5D0 8018D820 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 16D5D4 8018D824 02002025 */        or $a0, $s0, $zero
  /* 16D5D8 8018D828 26310001 */     addiu $s1, $s1, 1
  .L8018D82C:
  /* 16D5DC 8018D82C 163EFFB7 */       bne $s1, $fp, .L8018D70C
  /* 16D5E0 8018D830 26520074 */     addiu $s2, $s2, 0x74
  /* 16D5E4 8018D834 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16D5E8 8018D838 8FB00018 */        lw $s0, 0x18($sp)
  /* 16D5EC 8018D83C 8FB1001C */        lw $s1, 0x1c($sp)
  /* 16D5F0 8018D840 8FB20020 */        lw $s2, 0x20($sp)
  /* 16D5F4 8018D844 8FB30024 */        lw $s3, 0x24($sp)
  /* 16D5F8 8018D848 8FB40028 */        lw $s4, 0x28($sp)
  /* 16D5FC 8018D84C 8FB5002C */        lw $s5, 0x2c($sp)
  /* 16D600 8018D850 8FB60030 */        lw $s6, 0x30($sp)
  /* 16D604 8018D854 8FB70034 */        lw $s7, 0x34($sp)
  /* 16D608 8018D858 8FBE0038 */        lw $fp, 0x38($sp)
  /* 16D60C 8018D85C 03E00008 */        jr $ra
  /* 16D610 8018D860 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl42_8018D864
  /* 16D614 8018D864 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 16D618 8018D868 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 16D61C 8018D86C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D620 8018D870 AFA40000 */        sw $a0, ($sp)
  /* 16D624 8018D874 3C0CE700 */       lui $t4, 0xe700
  /* 16D628 8018D878 246E0008 */     addiu $t6, $v1, 8
  /* 16D62C 8018D87C AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 16D630 8018D880 AC600004 */        sw $zero, 4($v1)
  /* 16D634 8018D884 AC6C0000 */        sw $t4, ($v1)
  /* 16D638 8018D888 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D63C 8018D88C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 16D640 8018D890 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16D644 8018D894 246F0008 */     addiu $t7, $v1, 8
  /* 16D648 8018D898 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16D64C 8018D89C AC600004 */        sw $zero, 4($v1)
  /* 16D650 8018D8A0 AC780000 */        sw $t8, ($v1)
  /* 16D654 8018D8A4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D658 8018D8A8 3C0F6EAA */       lui $t7, (0x6EAA6EFF >> 16) # 1856663295
  /* 16D65C 8018D8AC 35EF6EFF */       ori $t7, $t7, (0x6EAA6EFF & 0xFFFF) # 1856663295
  /* 16D660 8018D8B0 24790008 */     addiu $t9, $v1, 8
  /* 16D664 8018D8B4 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16D668 8018D8B8 3C0EFA00 */       lui $t6, 0xfa00
  /* 16D66C 8018D8BC AC6E0000 */        sw $t6, ($v1)
  /* 16D670 8018D8C0 AC6F0004 */        sw $t7, 4($v1)
  /* 16D674 8018D8C4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D678 8018D8C8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16D67C 8018D8CC 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 16D680 8018D8D0 24780008 */     addiu $t8, $v1, 8
  /* 16D684 8018D8D4 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16D688 8018D8D8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16D68C 8018D8DC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 16D690 8018D8E0 AC6E0004 */        sw $t6, 4($v1)
  /* 16D694 8018D8E4 AC790000 */        sw $t9, ($v1)
  /* 16D698 8018D8E8 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D69C 8018D8EC 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 16D6A0 8018D8F0 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 16D6A4 8018D8F4 246F0008 */     addiu $t7, $v1, 8
  /* 16D6A8 8018D8F8 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16D6AC 8018D8FC 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 16D6B0 8018D900 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 16D6B4 8018D904 AC780004 */        sw $t8, 4($v1)
  /* 16D6B8 8018D908 AC6D0000 */        sw $t5, ($v1)
  /* 16D6BC 8018D90C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D6C0 8018D910 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 16D6C4 8018D914 3C0EF61B */       lui $t6, (0xF61B8398 >> 16) # 4128998296
  /* 16D6C8 8018D918 24790008 */     addiu $t9, $v1, 8
  /* 16D6CC 8018D91C AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16D6D0 8018D920 35CE8398 */       ori $t6, $t6, (0xF61B8398 & 0xFFFF) # 4128998296
  /* 16D6D4 8018D924 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 16D6D8 8018D928 AC6F0004 */        sw $t7, 4($v1)
  /* 16D6DC 8018D92C AC6E0000 */        sw $t6, ($v1)
  /* 16D6E0 8018D930 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D6E4 8018D934 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 16D6E8 8018D938 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16D6EC 8018D93C 24780008 */     addiu $t8, $v1, 8
  /* 16D6F0 8018D940 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16D6F4 8018D944 AC600004 */        sw $zero, 4($v1)
  /* 16D6F8 8018D948 AC6C0000 */        sw $t4, ($v1)
  /* 16D6FC 8018D94C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16D700 8018D950 24790008 */     addiu $t9, $v1, 8
  /* 16D704 8018D954 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16D708 8018D958 AC6E0004 */        sw $t6, 4($v1)
  /* 16D70C 8018D95C 03E00008 */        jr $ra
  /* 16D710 8018D960 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl42_8018D964
  /* 16D714 8018D964 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16D718 8018D968 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16D71C 8018D96C 00002025 */        or $a0, $zero, $zero
  /* 16D720 8018D970 00002825 */        or $a1, $zero, $zero
  /* 16D724 8018D974 24060013 */     addiu $a2, $zero, 0x13
  /* 16D728 8018D978 0C00265A */       jal omMakeGObjCommon
  /* 16D72C 8018D97C 3C078000 */       lui $a3, 0x8000
  /* 16D730 8018D980 3C058019 */       lui $a1, %hi(func_ovl42_8018D864)
  /* 16D734 8018D984 240EFFFF */     addiu $t6, $zero, -1
  /* 16D738 8018D988 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16D73C 8018D98C 24A5D864 */     addiu $a1, $a1, %lo(func_ovl42_8018D864)
  /* 16D740 8018D990 00402025 */        or $a0, $v0, $zero
  /* 16D744 8018D994 2406001C */     addiu $a2, $zero, 0x1c
  /* 16D748 8018D998 0C00277D */       jal func_80009DF4
  /* 16D74C 8018D99C 3C078000 */       lui $a3, 0x8000
  /* 16D750 8018D9A0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16D754 8018D9A4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16D758 8018D9A8 03E00008 */        jr $ra
  /* 16D75C 8018D9AC 00000000 */       nop 

glabel func_ovl42_8018D9B0
  /* 16D760 8018D9B0 3C038019 */       lui $v1, %hi(D_ovl42_8018E228)
  /* 16D764 8018D9B4 8C63E228 */        lw $v1, %lo(D_ovl42_8018E228)($v1)
  /* 16D768 8018D9B8 2401000F */     addiu $at, $zero, 0xf
  /* 16D76C 8018D9BC 3C058019 */       lui $a1, 0x8019
  /* 16D770 8018D9C0 10610009 */       beq $v1, $at, .L8018D9E8
  /* 16D774 8018D9C4 00601025 */        or $v0, $v1, $zero
  /* 16D778 8018D9C8 2401002D */     addiu $at, $zero, 0x2d
  /* 16D77C 8018D9CC 1041000B */       beq $v0, $at, .L8018D9FC
  /* 16D780 8018D9D0 3C058019 */       lui $a1, 0x8019
  /* 16D784 8018D9D4 2401003C */     addiu $at, $zero, 0x3c
  /* 16D788 8018D9D8 1041000D */       beq $v0, $at, .L8018DA10
  /* 16D78C 8018D9DC 3C058019 */       lui $a1, %hi(D_ovl42_8018E240)
  /* 16D790 8018D9E0 1000000F */         b .L8018DA20
  /* 16D794 8018D9E4 24A5E240 */     addiu $a1, $a1, %lo(D_ovl42_8018E240)
  .L8018D9E8:
  /* 16D798 8018D9E8 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16D79C 8018D9EC 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 16D7A0 8018D9F0 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16D7A4 8018D9F4 1000000A */         b .L8018DA20
  /* 16D7A8 8018D9F8 E4A40000 */      swc1 $f4, ($a1) # D_ovl42_8018E240 + 0
  .L8018D9FC:
  /* 16D7AC 8018D9FC 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 16D7B0 8018DA00 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 16D7B4 8018DA04 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16D7B8 8018DA08 10000005 */         b .L8018DA20
  /* 16D7BC 8018DA0C E4A60000 */      swc1 $f6, ($a1) # D_ovl42_8018E240 + 0
  .L8018DA10:
  /* 16D7C0 8018DA10 44804000 */      mtc1 $zero, $f8
  /* 16D7C4 8018DA14 3C058019 */       lui $a1, %hi(D_ovl42_8018E240)
  /* 16D7C8 8018DA18 24A5E240 */     addiu $a1, $a1, %lo(D_ovl42_8018E240)
  /* 16D7CC 8018DA1C E4A80000 */      swc1 $f8, ($a1) # D_ovl42_8018E240 + 0
  .L8018DA20:
  /* 16D7D0 8018DA20 28610010 */      slti $at, $v1, 0x10
  /* 16D7D4 8018DA24 14200007 */      bnez $at, .L8018DA44
  /* 16D7D8 8018DA28 2861002D */      slti $at, $v1, 0x2d
  /* 16D7DC 8018DA2C 10200005 */      beqz $at, .L8018DA44
  /* 16D7E0 8018DA30 3C018019 */       lui $at, %hi(D_ovl42_8018E210)
  /* 16D7E4 8018DA34 C430E210 */      lwc1 $f16, %lo(D_ovl42_8018E210)($at)
  /* 16D7E8 8018DA38 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl42_8018E240 + 0
  /* 16D7EC 8018DA3C 46105480 */     add.s $f18, $f10, $f16
  /* 16D7F0 8018DA40 E4B20000 */      swc1 $f18, ($a1) # D_ovl42_8018E240 + 0
  .L8018DA44:
  /* 16D7F4 8018DA44 2861002E */      slti $at, $v1, 0x2e
  /* 16D7F8 8018DA48 14200007 */      bnez $at, .L8018DA68
  /* 16D7FC 8018DA4C 2861003C */      slti $at, $v1, 0x3c
  /* 16D800 8018DA50 10200005 */      beqz $at, .L8018DA68
  /* 16D804 8018DA54 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 16D808 8018DA58 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16D80C 8018DA5C C4A40000 */      lwc1 $f4, ($a1) # D_ovl42_8018E240 + 0
  /* 16D810 8018DA60 46062200 */     add.s $f8, $f4, $f6
  /* 16D814 8018DA64 E4A80000 */      swc1 $f8, ($a1) # D_ovl42_8018E240 + 0
  .L8018DA68:
  /* 16D818 8018DA68 8C820074 */        lw $v0, 0x74($a0)
  /* 16D81C 8018DA6C C4B00000 */      lwc1 $f16, ($a1) # D_ovl42_8018E240 + 0
  /* 16D820 8018DA70 C44A0020 */      lwc1 $f10, 0x20($v0)
  /* 16D824 8018DA74 46105480 */     add.s $f18, $f10, $f16
  /* 16D828 8018DA78 03E00008 */        jr $ra
  /* 16D82C 8018DA7C E4520020 */      swc1 $f18, 0x20($v0)

glabel func_ovl42_8018DA80
  /* 16D830 8018DA80 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 16D834 8018DA84 AFB00018 */        sw $s0, 0x18($sp)
  /* 16D838 8018DA88 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16D83C 8018DA8C 27B00024 */     addiu $s0, $sp, 0x24
  /* 16D840 8018DA90 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 16D844 8018DA94 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16D848 8018DA98 25C8003C */     addiu $t0, $t6, 0x3c
  /* 16D84C 8018DA9C 0200C825 */        or $t9, $s0, $zero
  .L8018DAA0:
  /* 16D850 8018DAA0 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16D854 8018DAA4 25CE000C */     addiu $t6, $t6, 0xc
  /* 16D858 8018DAA8 2739000C */     addiu $t9, $t9, 0xc
  /* 16D85C 8018DAAC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16D860 8018DAB0 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 16D864 8018DAB4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16D868 8018DAB8 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 16D86C 8018DABC 15C8FFF8 */       bne $t6, $t0, .L8018DAA0
  /* 16D870 8018DAC0 AF38FFFC */        sw $t8, -4($t9)
  /* 16D874 8018DAC4 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16D878 8018DAC8 24090009 */     addiu $t1, $zero, 9
  /* 16D87C 8018DACC 24040009 */     addiu $a0, $zero, 9
  /* 16D880 8018DAD0 AF380000 */        sw $t8, ($t9)
  /* 16D884 8018DAD4 AFA90024 */        sw $t1, 0x24($sp)
  /* 16D888 8018DAD8 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16D88C 8018DADC 00002825 */        or $a1, $zero, $zero
  /* 16D890 8018DAE0 44800000 */      mtc1 $zero, $f0
  /* 16D894 8018DAE4 3C0A8019 */       lui $t2, %hi(D_ovl42_8018E23C)
  /* 16D898 8018DAE8 3C01C416 */       lui $at, (0xC4160000 >> 16) # -600.0
  /* 16D89C 8018DAEC 8D4AE23C */        lw $t2, %lo(D_ovl42_8018E23C)($t2)
  /* 16D8A0 8018DAF0 44812000 */      mtc1 $at, $f4 # -600.0 to cop1
  /* 16D8A4 8018DAF4 A3A2003B */        sb $v0, 0x3b($sp)
  /* 16D8A8 8018DAF8 02002025 */        or $a0, $s0, $zero
  /* 16D8AC 8018DAFC E7A00028 */      swc1 $f0, 0x28($sp)
  /* 16D8B0 8018DB00 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 16D8B4 8018DB04 AFAA005C */        sw $t2, 0x5c($sp)
  /* 16D8B8 8018DB08 0C035FCF */       jal ftManager_CreateFighter
  /* 16D8BC 8018DB0C E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 16D8C0 8018DB10 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 16D8C4 8018DB14 00408025 */        or $s0, $v0, $zero
  /* 16D8C8 8018DB18 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16D8CC 8018DB1C 0C0E4173 */       jal func_ovl1_803905CC
  /* 16D8D0 8018DB20 00402025 */        or $a0, $v0, $zero
  /* 16D8D4 8018DB24 02002025 */        or $a0, $s0, $zero
  /* 16D8D8 8018DB28 2405001A */     addiu $a1, $zero, 0x1a
  /* 16D8DC 8018DB2C 0C002834 */       jal om_g_move_obj_dl
  /* 16D8E0 8018DB30 2406FFFF */     addiu $a2, $zero, -1
  /* 16D8E4 8018DB34 3C058019 */       lui $a1, %hi(func_ovl42_8018D9B0)
  /* 16D8E8 8018DB38 24A5D9B0 */     addiu $a1, $a1, %lo(func_ovl42_8018D9B0)
  /* 16D8EC 8018DB3C 02002025 */        or $a0, $s0, $zero
  /* 16D8F0 8018DB40 24060001 */     addiu $a2, $zero, 1
  /* 16D8F4 8018DB44 0C002062 */       jal omAddGObjCommonProc
  /* 16D8F8 8018DB48 24070001 */     addiu $a3, $zero, 1
  /* 16D8FC 8018DB4C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16D900 8018DB50 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 16D904 8018DB54 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16D908 8018DB58 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16D90C 8018DB5C 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16D910 8018DB60 E5800044 */      swc1 $f0, 0x44($t4)
  /* 16D914 8018DB64 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16D918 8018DB68 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16D91C 8018DB6C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16D920 8018DB70 8FB00018 */        lw $s0, 0x18($sp)
  /* 16D924 8018DB74 27BD0068 */     addiu $sp, $sp, 0x68
  /* 16D928 8018DB78 03E00008 */        jr $ra
  /* 16D92C 8018DB7C 00000000 */       nop 

glabel func_ovl42_8018DB80
  /* 16D930 8018DB80 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16D934 8018DB84 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16D938 8018DB88 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16D93C 8018DB8C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16D940 8018DB90 240F0050 */     addiu $t7, $zero, 0x50
  /* 16D944 8018DB94 24180000 */     addiu $t8, $zero, 0
  /* 16D948 8018DB98 3C190800 */       lui $t9, 0x800
  /* 16D94C 8018DB9C 2408FFFF */     addiu $t0, $zero, -1
  /* 16D950 8018DBA0 24090001 */     addiu $t1, $zero, 1
  /* 16D954 8018DBA4 240A0001 */     addiu $t2, $zero, 1
  /* 16D958 8018DBA8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16D95C 8018DBAC AFA90028 */        sw $t1, 0x28($sp)
  /* 16D960 8018DBB0 AFA80020 */        sw $t0, 0x20($sp)
  /* 16D964 8018DBB4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16D968 8018DBB8 AFB80018 */        sw $t8, 0x18($sp)
  /* 16D96C 8018DBBC AFAF0014 */        sw $t7, 0x14($sp)
  /* 16D970 8018DBC0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16D974 8018DBC4 AFA00024 */        sw $zero, 0x24($sp)
  /* 16D978 8018DBC8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16D97C 8018DBCC AFA00034 */        sw $zero, 0x34($sp)
  /* 16D980 8018DBD0 24040401 */     addiu $a0, $zero, 0x401
  /* 16D984 8018DBD4 00002825 */        or $a1, $zero, $zero
  /* 16D988 8018DBD8 24060010 */     addiu $a2, $zero, 0x10
  /* 16D98C 8018DBDC 0C002E4F */       jal func_8000B93C
  /* 16D990 8018DBE0 3C078000 */       lui $a3, 0x8000
  /* 16D994 8018DBE4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16D998 8018DBE8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16D99C 8018DBEC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16D9A0 8018DBF0 8C430074 */        lw $v1, 0x74($v0)
  /* 16D9A4 8018DBF4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16D9A8 8018DBF8 44050000 */      mfc1 $a1, $f0
  /* 16D9AC 8018DBFC 44060000 */      mfc1 $a2, $f0
  /* 16D9B0 8018DC00 3C07439B */       lui $a3, 0x439b
  /* 16D9B4 8018DC04 24640008 */     addiu $a0, $v1, 8
  /* 16D9B8 8018DC08 0C001C20 */       jal func_80007080
  /* 16D9BC 8018DC0C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16D9C0 8018DC10 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16D9C4 8018DC14 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16D9C8 8018DC18 03E00008 */        jr $ra
  /* 16D9CC 8018DC1C 00000000 */       nop 

glabel func_ovl42_8018DC20
  /* 16D9D0 8018DC20 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16D9D4 8018DC24 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16D9D8 8018DC28 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16D9DC 8018DC2C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16D9E0 8018DC30 240F000A */     addiu $t7, $zero, 0xa
  /* 16D9E4 8018DC34 24180000 */     addiu $t8, $zero, 0
  /* 16D9E8 8018DC38 3C190400 */       lui $t9, 0x400
  /* 16D9EC 8018DC3C 2408FFFF */     addiu $t0, $zero, -1
  /* 16D9F0 8018DC40 24090001 */     addiu $t1, $zero, 1
  /* 16D9F4 8018DC44 240A0001 */     addiu $t2, $zero, 1
  /* 16D9F8 8018DC48 240B0001 */     addiu $t3, $zero, 1
  /* 16D9FC 8018DC4C AFAB0030 */        sw $t3, 0x30($sp)
  /* 16DA00 8018DC50 AFAA0028 */        sw $t2, 0x28($sp)
  /* 16DA04 8018DC54 AFA90024 */        sw $t1, 0x24($sp)
  /* 16DA08 8018DC58 AFA80020 */        sw $t0, 0x20($sp)
  /* 16DA0C 8018DC5C AFB9001C */        sw $t9, 0x1c($sp)
  /* 16DA10 8018DC60 AFB80018 */        sw $t8, 0x18($sp)
  /* 16DA14 8018DC64 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16DA18 8018DC68 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16DA1C 8018DC6C AFA0002C */        sw $zero, 0x2c($sp)
  /* 16DA20 8018DC70 AFA00034 */        sw $zero, 0x34($sp)
  /* 16DA24 8018DC74 24040401 */     addiu $a0, $zero, 0x401
  /* 16DA28 8018DC78 00002825 */        or $a1, $zero, $zero
  /* 16DA2C 8018DC7C 24060010 */     addiu $a2, $zero, 0x10
  /* 16DA30 8018DC80 0C002E4F */       jal func_8000B93C
  /* 16DA34 8018DC84 3C078000 */       lui $a3, 0x8000
  /* 16DA38 8018DC88 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16DA3C 8018DC8C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16DA40 8018DC90 AFA20044 */        sw $v0, 0x44($sp)
  /* 16DA44 8018DC94 8C430074 */        lw $v1, 0x74($v0)
  /* 16DA48 8018DC98 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16DA4C 8018DC9C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16DA50 8018DCA0 44050000 */      mfc1 $a1, $f0
  /* 16DA54 8018DCA4 44060000 */      mfc1 $a2, $f0
  /* 16DA58 8018DCA8 3C0742DC */       lui $a3, 0x42dc
  /* 16DA5C 8018DCAC 24640008 */     addiu $a0, $v1, 8
  /* 16DA60 8018DCB0 AFA30040 */        sw $v1, 0x40($sp)
  /* 16DA64 8018DCB4 0C001C20 */       jal func_80007080
  /* 16DA68 8018DCB8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16DA6C 8018DCBC 3C018019 */       lui $at, %hi(D_ovl42_8018E214)
  /* 16DA70 8018DCC0 8FA40040 */        lw $a0, 0x40($sp)
  /* 16DA74 8018DCC4 C426E214 */      lwc1 $f6, %lo(D_ovl42_8018E214)($at)
  /* 16DA78 8018DCC8 3C0C8019 */       lui $t4, %hi(D_ovl42_8018E444)
  /* 16DA7C 8018DCCC 3C0D0000 */       lui $t5, %hi(D_NF_00000120)
  /* 16DA80 8018DCD0 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16DA84 8018DCD4 8D8CE444 */        lw $t4, %lo(D_ovl42_8018E444)($t4)
  /* 16DA88 8018DCD8 25AD0120 */     addiu $t5, $t5, %lo(D_NF_00000120)
  /* 16DA8C 8018DCDC 24060000 */     addiu $a2, $zero, 0
  /* 16DA90 8018DCE0 0C003E8F */       jal func_8000FA3C
  /* 16DA94 8018DCE4 018D2821 */      addu $a1, $t4, $t5
  /* 16DA98 8018DCE8 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16DA9C 8018DCEC 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16DAA0 8018DCF0 8FA40044 */        lw $a0, 0x44($sp)
  /* 16DAA4 8018DCF4 24060001 */     addiu $a2, $zero, 1
  /* 16DAA8 8018DCF8 0C002062 */       jal omAddGObjCommonProc
  /* 16DAAC 8018DCFC 24070001 */     addiu $a3, $zero, 1
  /* 16DAB0 8018DD00 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16DAB4 8018DD04 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16DAB8 8018DD08 03E00008 */        jr $ra
  /* 16DABC 8018DD0C 00000000 */       nop 

glabel func_ovl42_8018DD10
  /* 16DAC0 8018DD10 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16DAC4 8018DD14 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16DAC8 8018DD18 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16DACC 8018DD1C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16DAD0 8018DD20 240F0014 */     addiu $t7, $zero, 0x14
  /* 16DAD4 8018DD24 24180000 */     addiu $t8, $zero, 0
  /* 16DAD8 8018DD28 3C191000 */       lui $t9, 0x1000
  /* 16DADC 8018DD2C 2408FFFF */     addiu $t0, $zero, -1
  /* 16DAE0 8018DD30 24090001 */     addiu $t1, $zero, 1
  /* 16DAE4 8018DD34 240A0001 */     addiu $t2, $zero, 1
  /* 16DAE8 8018DD38 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16DAEC 8018DD3C AFA90028 */        sw $t1, 0x28($sp)
  /* 16DAF0 8018DD40 AFA80020 */        sw $t0, 0x20($sp)
  /* 16DAF4 8018DD44 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16DAF8 8018DD48 AFB80018 */        sw $t8, 0x18($sp)
  /* 16DAFC 8018DD4C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16DB00 8018DD50 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16DB04 8018DD54 AFA00024 */        sw $zero, 0x24($sp)
  /* 16DB08 8018DD58 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16DB0C 8018DD5C AFA00034 */        sw $zero, 0x34($sp)
  /* 16DB10 8018DD60 24040401 */     addiu $a0, $zero, 0x401
  /* 16DB14 8018DD64 00002825 */        or $a1, $zero, $zero
  /* 16DB18 8018DD68 24060010 */     addiu $a2, $zero, 0x10
  /* 16DB1C 8018DD6C 0C002E4F */       jal func_8000B93C
  /* 16DB20 8018DD70 3C078000 */       lui $a3, 0x8000
  /* 16DB24 8018DD74 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16DB28 8018DD78 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16DB2C 8018DD7C 8C430074 */        lw $v1, 0x74($v0)
  /* 16DB30 8018DD80 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16DB34 8018DD84 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16DB38 8018DD88 44050000 */      mfc1 $a1, $f0
  /* 16DB3C 8018DD8C 44060000 */      mfc1 $a2, $f0
  /* 16DB40 8018DD90 3C0742DC */       lui $a3, 0x42dc
  /* 16DB44 8018DD94 24640008 */     addiu $a0, $v1, 8
  /* 16DB48 8018DD98 AFA30044 */        sw $v1, 0x44($sp)
  /* 16DB4C 8018DD9C 0C001C20 */       jal func_80007080
  /* 16DB50 8018DDA0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16DB54 8018DDA4 8FA30044 */        lw $v1, 0x44($sp)
  /* 16DB58 8018DDA8 240B0005 */     addiu $t3, $zero, 5
  /* 16DB5C 8018DDAC AC6B0080 */        sw $t3, 0x80($v1)
  /* 16DB60 8018DDB0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16DB64 8018DDB4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16DB68 8018DDB8 03E00008 */        jr $ra
  /* 16DB6C 8018DDBC 00000000 */       nop 

glabel func_ovl42_8018DDC0
  /* 16DB70 8018DDC0 3C028019 */       lui $v0, %hi(D_ovl42_8018E228)
  /* 16DB74 8018DDC4 2442E228 */     addiu $v0, $v0, %lo(D_ovl42_8018E228)
  /* 16DB78 8018DDC8 8C4E0000 */        lw $t6, ($v0) # D_ovl42_8018E228 + 0
  /* 16DB7C 8018DDCC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16DB80 8018DDD0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16DB84 8018DDD4 AFA40018 */        sw $a0, 0x18($sp)
  /* 16DB88 8018DDD8 25CF0001 */     addiu $t7, $t6, 1
  /* 16DB8C 8018DDDC AC4F0000 */        sw $t7, ($v0) # D_ovl42_8018E228 + 0
  /* 16DB90 8018DDE0 0C0E41DB */       jal func_ovl1_8039076C
  /* 16DB94 8018DDE4 3404D000 */       ori $a0, $zero, 0xd000
  /* 16DB98 8018DDE8 10400007 */      beqz $v0, .L8018DE08
  /* 16DB9C 8018DDEC 24190001 */     addiu $t9, $zero, 1
  /* 16DBA0 8018DDF0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16DBA4 8018DDF4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16DBA8 8018DDF8 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16DBAC 8018DDFC A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16DBB0 8018DE00 0C00171D */       jal func_80005C74
  /* 16DBB4 8018DE04 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DE08:
  /* 16DBB8 8018DE08 3C028019 */       lui $v0, %hi(D_ovl42_8018E228)
  /* 16DBBC 8018DE0C 8C42E228 */        lw $v0, %lo(D_ovl42_8018E228)($v0)
  /* 16DBC0 8018DE10 2401000F */     addiu $at, $zero, 0xf
  /* 16DBC4 8018DE14 3C048019 */       lui $a0, %hi(D_ovl42_8018E22C)
  /* 16DBC8 8018DE18 5441000C */      bnel $v0, $at, .L8018DE4C
  /* 16DBCC 8018DE1C 2401003C */     addiu $at, $zero, 0x3c
  /* 16DBD0 8018DE20 0C0026A1 */       jal omEjectGObjCommon
  /* 16DBD4 8018DE24 8C84E22C */        lw $a0, %lo(D_ovl42_8018E22C)($a0)
  /* 16DBD8 8018DE28 0C06358D */       jal func_ovl42_8018D634
  /* 16DBDC 8018DE2C 00000000 */       nop 
  /* 16DBE0 8018DE30 0C063659 */       jal func_ovl42_8018D964
  /* 16DBE4 8018DE34 00000000 */       nop 
  /* 16DBE8 8018DE38 0C0636A0 */       jal func_ovl42_8018DA80
  /* 16DBEC 8018DE3C 00000000 */       nop 
  /* 16DBF0 8018DE40 3C028019 */       lui $v0, %hi(D_ovl42_8018E228)
  /* 16DBF4 8018DE44 8C42E228 */        lw $v0, %lo(D_ovl42_8018E228)($v0)
  /* 16DBF8 8018DE48 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE4C:
  /* 16DBFC 8018DE4C 14410007 */       bne $v0, $at, .L8018DE6C
  /* 16DC00 8018DE50 24090026 */     addiu $t1, $zero, 0x26
  /* 16DC04 8018DE54 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16DC08 8018DE58 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16DC0C 8018DE5C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16DC10 8018DE60 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16DC14 8018DE64 0C00171D */       jal func_80005C74
  /* 16DC18 8018DE68 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE6C:
  /* 16DC1C 8018DE6C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16DC20 8018DE70 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16DC24 8018DE74 03E00008 */        jr $ra
  /* 16DC28 8018DE78 00000000 */       nop 

glabel func_ovl42_8018DE7C
  /* 16DC2C 8018DE7C 3C018019 */       lui $at, %hi(D_ovl42_8018E228)
  /* 16DC30 8018DE80 03E00008 */        jr $ra
  /* 16DC34 8018DE84 AC20E228 */        sw $zero, %lo(D_ovl42_8018E228)($at)

glabel func_ovl42_8018DE88
  /* 16DC38 8018DE88 3C038019 */       lui $v1, %hi(D_ovl42_8018E448)
  /* 16DC3C 8018DE8C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16DC40 8018DE90 2463E448 */     addiu $v1, $v1, %lo(D_ovl42_8018E448)
  /* 16DC44 8018DE94 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16DC48 8018DE98 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 16DC4C 8018DE9C 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 16DC50 8018DEA0 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 16DC54 8018DEA4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16DC58 8018DEA8 24040004 */     addiu $a0, $zero, 4
  /* 16DC5C 8018DEAC 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 16DC60 8018DEB0 0060C825 */        or $t9, $v1, $zero
  .L8018DEB4:
  /* 16DC64 8018DEB4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16DC68 8018DEB8 25CE000C */     addiu $t6, $t6, 0xc
  /* 16DC6C 8018DEBC 2739000C */     addiu $t9, $t9, 0xc
  /* 16DC70 8018DEC0 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16DC74 8018DEC4 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 16DC78 8018DEC8 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16DC7C 8018DECC 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 16DC80 8018DED0 15C8FFF8 */       bne $t6, $t0, .L8018DEB4
  /* 16DC84 8018DED4 AF38FFFC */        sw $t8, -4($t9)
  /* 16DC88 8018DED8 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16DC8C 8018DEDC 240A0007 */     addiu $t2, $zero, 7
  /* 16DC90 8018DEE0 240C0001 */     addiu $t4, $zero, 1
  /* 16DC94 8018DEE4 AF380000 */        sw $t8, ($t9)
  /* 16DC98 8018DEE8 24080009 */     addiu $t0, $zero, 9
  /* 16DC9C 8018DEEC AC430000 */        sw $v1, ($v0) # gpBattleState + 0
  /* 16DCA0 8018DEF0 A0640000 */        sb $a0, ($v1) # D_ovl42_8018E448 + 0
  /* 16DCA4 8018DEF4 A06A0001 */        sb $t2, 1($v1) # D_ovl42_8018E448 + 1
  /* 16DCA8 8018DEF8 A06C0004 */        sb $t4, 4($v1) # D_ovl42_8018E448 + 4
  /* 16DCAC 8018DEFC A0680023 */        sb $t0, 0x23($v1) # D_ovl42_8018E448 + 35
  /* 16DCB0 8018DF00 0C063430 */       jal func_ovl42_8018D0C0
  /* 16DCB4 8018DF04 A0640022 */        sb $a0, 0x22($v1) # D_ovl42_8018E448 + 34
  /* 16DCB8 8018DF08 3C058019 */       lui $a1, %hi(func_ovl42_8018DDC0)
  /* 16DCBC 8018DF0C 24A5DDC0 */     addiu $a1, $a1, %lo(func_ovl42_8018DDC0)
  /* 16DCC0 8018DF10 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 16DCC4 8018DF14 2406000D */     addiu $a2, $zero, 0xd
  /* 16DCC8 8018DF18 0C00265A */       jal omMakeGObjCommon
  /* 16DCCC 8018DF1C 3C078000 */       lui $a3, 0x8000
  /* 16DCD0 8018DF20 240F00FF */     addiu $t7, $zero, 0xff
  /* 16DCD4 8018DF24 AFAF0010 */        sw $t7, 0x10($sp)
  /* 16DCD8 8018DF28 24040009 */     addiu $a0, $zero, 9
  /* 16DCDC 8018DF2C 3C058000 */       lui $a1, 0x8000
  /* 16DCE0 8018DF30 24060064 */     addiu $a2, $zero, 0x64
  /* 16DCE4 8018DF34 0C002E7F */       jal func_8000B9FC
  /* 16DCE8 8018DF38 24070003 */     addiu $a3, $zero, 3
  /* 16DCEC 8018DF3C 0C06379F */       jal func_ovl42_8018DE7C
  /* 16DCF0 8018DF40 00000000 */       nop 
  /* 16DCF4 8018DF44 0C045624 */       jal func_ovl2_80115890
  /* 16DCF8 8018DF48 00000000 */       nop 
  /* 16DCFC 8018DF4C 0C03B04C */       jal func_ovl2_800EC130
  /* 16DD00 8018DF50 00000000 */       nop 
  /* 16DD04 8018DF54 0C03F0A1 */       jal func_ovl2_800FC284
  /* 16DD08 8018DF58 00000000 */       nop 
  /* 16DD0C 8018DF5C 2404000A */     addiu $a0, $zero, 0xa
  /* 16DD10 8018DF60 2405000A */     addiu $a1, $zero, 0xa
  /* 16DD14 8018DF64 24060136 */     addiu $a2, $zero, 0x136
  /* 16DD18 8018DF68 0C043966 */       jal func_ovl2_8010E598
  /* 16DD1C 8018DF6C 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16DD20 8018DF70 0C0436D5 */       jal func_ovl2_8010DB54
  /* 16DD24 8018DF74 00000000 */       nop 
  /* 16DD28 8018DF78 24040003 */     addiu $a0, $zero, 3
  /* 16DD2C 8018DF7C 0C035C65 */       jal func_ovl2_800D7194
  /* 16DD30 8018DF80 24050002 */     addiu $a1, $zero, 2
  /* 16DD34 8018DF84 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 16DD38 8018DF88 00000000 */       nop 
  /* 16DD3C 8018DF8C 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 16DD40 8018DF90 00000000 */       nop 
  /* 16DD44 8018DF94 0C03F4C0 */       jal efManager_AllocUserData
  /* 16DD48 8018DF98 00000000 */       nop 
  /* 16DD4C 8018DF9C 0C035E1B */       jal func_ovl2_800D786C
  /* 16DD50 8018DFA0 24040009 */     addiu $a0, $zero, 9
  /* 16DD54 8018DFA4 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 16DD58 8018DFA8 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 16DD5C 8018DFAC 0C001260 */       jal hal_alloc
  /* 16DD60 8018DFB0 24050010 */     addiu $a1, $zero, 0x10
  /* 16DD64 8018DFB4 3C018019 */       lui $at, %hi(D_ovl42_8018E23C)
  /* 16DD68 8018DFB8 0C0636E0 */       jal func_ovl42_8018DB80
  /* 16DD6C 8018DFBC AC22E23C */        sw $v0, %lo(D_ovl42_8018E23C)($at)
  /* 16DD70 8018DFC0 0C063744 */       jal func_ovl42_8018DD10
  /* 16DD74 8018DFC4 00000000 */       nop 
  /* 16DD78 8018DFC8 0C063708 */       jal func_ovl42_8018DC20
  /* 16DD7C 8018DFCC 00000000 */       nop 
  /* 16DD80 8018DFD0 0C063465 */       jal func_ovl42_8018D194
  /* 16DD84 8018DFD4 00000000 */       nop 
  /* 16DD88 8018DFD8 0C00024B */       jal func_8000092C
  /* 16DD8C 8018DFDC 00000000 */       nop 
  /* 16DD90 8018DFE0 2C410861 */     sltiu $at, $v0, 0x861
  /* 16DD94 8018DFE4 50200007 */      beql $at, $zero, .L8018E004
  /* 16DD98 8018DFE8 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFEC:
  /* 16DD9C 8018DFEC 0C00024B */       jal func_8000092C
  /* 16DDA0 8018DFF0 00000000 */       nop 
  /* 16DDA4 8018DFF4 2C410861 */     sltiu $at, $v0, 0x861
  /* 16DDA8 8018DFF8 1420FFFC */      bnez $at, .L8018DFEC
  /* 16DDAC 8018DFFC 00000000 */       nop 
  /* 16DDB0 8018E000 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E004:
  /* 16DDB4 8018E004 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16DDB8 8018E008 03E00008 */        jr $ra
  /* 16DDBC 8018E00C 00000000 */       nop 

glabel func_ovl42_8018E010
  /* 16DDC0 8018E010 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16DDC4 8018E014 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16DDC8 8018E018 8C830000 */        lw $v1, ($a0)
  /* 16DDCC 8018E01C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16DDD0 8018E020 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16DDD4 8018E024 246E0008 */     addiu $t6, $v1, 8
  /* 16DDD8 8018E028 AC8E0000 */        sw $t6, ($a0)
  /* 16DDDC 8018E02C 3C180002 */       lui $t8, 2
  /* 16DDE0 8018E030 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 16DDE4 8018E034 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16DDE8 8018E038 AC780004 */        sw $t8, 4($v1)
  /* 16DDEC 8018E03C AC6F0000 */        sw $t7, ($v1)
  /* 16DDF0 8018E040 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 16DDF4 8018E044 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16DDF8 8018E048 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 16DDFC 8018E04C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16DE00 8018E050 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16DE04 8018E054 03E00008 */        jr $ra
  /* 16DE08 8018E058 00000000 */       nop 

glabel intro_focus_pikachu_entry
  /* 16DE0C 8018E05C 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16DE10 8018E060 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16DE14 8018E064 3C048019 */       lui $a0, %hi(D_ovl42_8018E140)
  /* 16DE18 8018E068 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16DE1C 8018E06C 2484E140 */     addiu $a0, $a0, %lo(D_ovl42_8018E140)
  /* 16DE20 8018E070 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16DE24 8018E074 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16DE28 8018E078 0C001C09 */       jal func_80007024
  /* 16DE2C 8018E07C AC8F000C */        sw $t7, 0xc($a0) # D_ovl42_8018E140 + 12
  /* 16DE30 8018E080 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16DE34 8018E084 3C198019 */       lui $t9, %hi(D_NF_8018E640)
  /* 16DE38 8018E088 3C048019 */       lui $a0, %hi(D_ovl42_8018E15C)
  /* 16DE3C 8018E08C 2739E640 */     addiu $t9, $t9, %lo(D_NF_8018E640)
  /* 16DE40 8018E090 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16DE44 8018E094 2484E15C */     addiu $a0, $a0, %lo(D_ovl42_8018E15C)
  /* 16DE48 8018E098 03194023 */      subu $t0, $t8, $t9
  /* 16DE4C 8018E09C 0C001A0F */       jal func_8000683C
  /* 16DE50 8018E0A0 AC880010 */        sw $t0, 0x10($a0) # D_ovl42_8018E15C + 16
  /* 16DE54 8018E0A4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16DE58 8018E0A8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16DE5C 8018E0AC 03E00008 */        jr $ra
  /* 16DE60 8018E0B0 00000000 */       nop 

  /* 16DE64 8018E0B4 00000000 */       nop 
  /* 16DE68 8018E0B8 00000000 */       nop 
  /* 16DE6C 8018E0BC 00000000 */       nop 

# Likely start of new file
#glabel D_ovl42_8018E0C0   # Routine parsed as data
#  /* 16DE70 8018E0C0 00000000 */       nop 
#  /* 16DE74 8018E0C4 00000000 */       nop 
