.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E090

glabel func_ovl39_8018D0C0
  /* 169AE0 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 169AE4 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 169AE8 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 169AEC 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl39_8018E258)
  /* 169AF0 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl39_8018E3D8)
  /* 169AF4 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 169AF8 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 169AFC 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 169B00 8018D0E0 2718E258 */     addiu $t8, $t8, %lo(D_ovl39_8018E258)
  /* 169B04 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 169B08 8018D0E8 2508E3D8 */     addiu $t0, $t0, %lo(D_ovl39_8018E3D8)
  /* 169B0C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 169B10 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 169B14 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 169B18 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 169B1C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 169B20 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 169B24 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 169B28 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 169B2C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 169B30 8018D110 0C0337DE */       jal rldm_initialize
  /* 169B34 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 169B38 8018D118 3C048019 */       lui $a0, %hi(D_ovl39_8018E0E0)
  /* 169B3C 8018D11C 2484E0E0 */     addiu $a0, $a0, %lo(D_ovl39_8018E0E0)
  /* 169B40 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 169B44 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 169B48 8018D128 00402025 */        or $a0, $v0, $zero
  /* 169B4C 8018D12C 0C001260 */       jal hal_alloc
  /* 169B50 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 169B54 8018D134 3C048019 */       lui $a0, %hi(D_ovl39_8018E0E0)
  /* 169B58 8018D138 3C068019 */       lui $a2, %hi(D_ovl39_8018E410)
  /* 169B5C 8018D13C 24C6E410 */     addiu $a2, $a2, %lo(D_ovl39_8018E410)
  /* 169B60 8018D140 2484E0E0 */     addiu $a0, $a0, %lo(D_ovl39_8018E0E0)
  /* 169B64 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 169B68 8018D148 0C033781 */       jal rldm_load_files_into
  /* 169B6C 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 169B70 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 169B74 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 169B78 8018D158 03E00008 */        jr $ra
  /* 169B7C 8018D15C 00000000 */       nop 

glabel func_ovl39_8018D160
  /* 169B80 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 169B84 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 169B88 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 169B8C 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 169B90 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 169B94 8018D174 37190001 */       ori $t9, $t8, 1
  /* 169B98 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 169B9C 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 169BA0 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 169BA4 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 169BA8 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 169BAC 8018D18C 03E00008 */        jr $ra
  /* 169BB0 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl39_8018D194
  /* 169BB4 8018D194 27BDFF78 */     addiu $sp, $sp, -0x88
  /* 169BB8 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl39_8018E0E8)
  /* 169BBC 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 169BC0 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 169BC4 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 169BC8 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 169BCC 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 169BD0 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 169BD4 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 169BD8 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 169BDC 8018D1BC 25EFE0E8 */     addiu $t7, $t7, %lo(D_ovl39_8018E0E8)
  /* 169BE0 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl39_8018E0E8 + 0
  /* 169BE4 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl39_8018E0E8 + 4
  /* 169BE8 8018D1C8 27AE0070 */     addiu $t6, $sp, 0x70
  /* 169BEC 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 169BF0 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 169BF4 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl39_8018E0E8 + 12
  /* 169BF8 8018D1D8 8DF90008 */        lw $t9, 8($t7) # D_ovl39_8018E0E8 + 8
  /* 169BFC 8018D1DC 3C098019 */       lui $t1, %hi(D_ovl39_8018E0F8)
  /* 169C00 8018D1E0 2529E0F8 */     addiu $t1, $t1, %lo(D_ovl39_8018E0F8)
  /* 169C04 8018D1E4 ADD8000C */        sw $t8, 0xc($t6)
  /* 169C08 8018D1E8 ADD90008 */        sw $t9, 8($t6)
  /* 169C0C 8018D1EC 8D2A0004 */        lw $t2, 4($t1) # D_ovl39_8018E0F8 + 4
  /* 169C10 8018D1F0 8D2B0000 */        lw $t3, ($t1) # D_ovl39_8018E0F8 + 0
  /* 169C14 8018D1F4 27A80058 */     addiu $t0, $sp, 0x58
  /* 169C18 8018D1F8 AD0A0004 */        sw $t2, 4($t0)
  /* 169C1C 8018D1FC AD0B0000 */        sw $t3, ($t0)
  /* 169C20 8018D200 8D2B0008 */        lw $t3, 8($t1) # D_ovl39_8018E0F8 + 8
  /* 169C24 8018D204 8D2A000C */        lw $t2, 0xc($t1) # D_ovl39_8018E0F8 + 12
  /* 169C28 8018D208 3C108000 */       lui $s0, %hi(D_NF_80000008)
  /* 169C2C 8018D20C AD0B0008 */        sw $t3, 8($t0)
  /* 169C30 8018D210 AD0A000C */        sw $t2, 0xc($t0)
  /* 169C34 8018D214 8D2A0014 */        lw $t2, 0x14($t1) # D_ovl39_8018E0F8 + 20
  /* 169C38 8018D218 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl39_8018E0F8 + 16
  /* 169C3C 8018D21C 02003825 */        or $a3, $s0, $zero
  /* 169C40 8018D220 00002025 */        or $a0, $zero, $zero
  /* 169C44 8018D224 00002825 */        or $a1, $zero, $zero
  /* 169C48 8018D228 24060011 */     addiu $a2, $zero, 0x11
  /* 169C4C 8018D22C AD0A0014 */        sw $t2, 0x14($t0)
  /* 169C50 8018D230 0C00265A */       jal omMakeGObjCommon
  /* 169C54 8018D234 AD0B0010 */        sw $t3, 0x10($t0)
  /* 169C58 8018D238 3C018019 */       lui $at, %hi(D_ovl39_8018E1FC)
  /* 169C5C 8018D23C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 169C60 8018D240 240CFFFF */     addiu $t4, $zero, -1
  /* 169C64 8018D244 AC22E1FC */        sw $v0, %lo(D_ovl39_8018E1FC)($at)
  /* 169C68 8018D248 0040A025 */        or $s4, $v0, $zero
  /* 169C6C 8018D24C AFAC0010 */        sw $t4, 0x10($sp)
  /* 169C70 8018D250 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 169C74 8018D254 00402025 */        or $a0, $v0, $zero
  /* 169C78 8018D258 2406001B */     addiu $a2, $zero, 0x1b
  /* 169C7C 8018D25C 0C00277D */       jal func_80009DF4
  /* 169C80 8018D260 02003825 */        or $a3, $s0, $zero
  /* 169C84 8018D264 8FAD0070 */        lw $t5, 0x70($sp)
  /* 169C88 8018D268 27B10070 */     addiu $s1, $sp, 0x70
  /* 169C8C 8018D26C 27B00058 */     addiu $s0, $sp, 0x58
  /* 169C90 8018D270 11A0001E */      beqz $t5, .L8018D2EC
  /* 169C94 8018D274 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 169C98 8018D278 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 169C9C 8018D27C 3C0142DC */       lui $at, (0x42DC0000 >> 16) # 110.0
  /* 169CA0 8018D280 3C128019 */       lui $s2, %hi(D_ovl39_8018E410)
  /* 169CA4 8018D284 4481A000 */      mtc1 $at, $f20 # 110.0 to cop1
  /* 169CA8 8018D288 2652E410 */     addiu $s2, $s2, %lo(D_ovl39_8018E410)
  /* 169CAC 8018D28C 8E220000 */        lw $v0, ($s1)
  /* 169CB0 8018D290 2413FFDF */     addiu $s3, $zero, -0x21
  /* 169CB4 8018D294 8E4F0000 */        lw $t7, ($s2) # D_ovl39_8018E410 + 0
  .L8018D298:
  /* 169CB8 8018D298 02802025 */        or $a0, $s4, $zero
  /* 169CBC 8018D29C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 169CC0 8018D2A0 004F2821 */      addu $a1, $v0, $t7
  /* 169CC4 8018D2A4 94580024 */       lhu $t8, 0x24($v0)
  /* 169CC8 8018D2A8 00402025 */        or $a0, $v0, $zero
  /* 169CCC 8018D2AC 03134024 */       and $t0, $t8, $s3
  /* 169CD0 8018D2B0 A4480024 */        sh $t0, 0x24($v0)
  /* 169CD4 8018D2B4 35090001 */       ori $t1, $t0, 1
  /* 169CD8 8018D2B8 A4490024 */        sh $t1, 0x24($v0)
  /* 169CDC 8018D2BC C6040000 */      lwc1 $f4, %lo(D_NF_80000000)($s0)
  /* 169CE0 8018D2C0 46142180 */     add.s $f6, $f4, $f20
  /* 169CE4 8018D2C4 E4460058 */      swc1 $f6, 0x58($v0)
  /* 169CE8 8018D2C8 C6080004 */      lwc1 $f8, %lo(D_NF_80000004)($s0)
  /* 169CEC 8018D2CC 46164280 */     add.s $f10, $f8, $f22
  /* 169CF0 8018D2D0 0C063458 */       jal func_ovl39_8018D160
  /* 169CF4 8018D2D4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 169CF8 8018D2D8 8E220004 */        lw $v0, 4($s1)
  /* 169CFC 8018D2DC 26310004 */     addiu $s1, $s1, 4
  /* 169D00 8018D2E0 26100008 */     addiu $s0, $s0, %lo(D_NF_80000008)
  /* 169D04 8018D2E4 5440FFEC */      bnel $v0, $zero, .L8018D298
  /* 169D08 8018D2E8 8E4F0000 */        lw $t7, ($s2) # D_ovl39_8018E410 + 0
  .L8018D2EC:
  /* 169D0C 8018D2EC 8FBF0044 */        lw $ra, 0x44($sp)
  /* 169D10 8018D2F0 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 169D14 8018D2F4 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 169D18 8018D2F8 8FB00030 */        lw $s0, 0x30($sp)
  /* 169D1C 8018D2FC 8FB10034 */        lw $s1, 0x34($sp)
  /* 169D20 8018D300 8FB20038 */        lw $s2, 0x38($sp)
  /* 169D24 8018D304 8FB3003C */        lw $s3, 0x3c($sp)
  /* 169D28 8018D308 8FB40040 */        lw $s4, 0x40($sp)
  /* 169D2C 8018D30C 03E00008 */        jr $ra
  /* 169D30 8018D310 27BD0088 */     addiu $sp, $sp, 0x88

glabel func_ovl39_8018D314
  /* 169D34 8018D314 3C0E8019 */       lui $t6, %hi(D_ovl39_8018E1F8)
  /* 169D38 8018D318 8DCEE1F8 */        lw $t6, %lo(D_ovl39_8018E1F8)($t6)
  /* 169D3C 8018D31C 3C038019 */       lui $v1, %hi(D_ovl39_8018E238)
  /* 169D40 8018D320 8C820074 */        lw $v0, 0x74($a0)
  /* 169D44 8018D324 29C1000F */      slti $at, $t6, 0xf
  /* 169D48 8018D328 14200036 */      bnez $at, .L8018D404
  /* 169D4C 8018D32C 2463E238 */     addiu $v1, $v1, %lo(D_ovl39_8018E238)
  /* 169D50 8018D330 3C048019 */       lui $a0, %hi(D_ovl39_8018E218)
  /* 169D54 8018D334 2484E218 */     addiu $a0, $a0, %lo(D_ovl39_8018E218)
  /* 169D58 8018D338 C4860000 */      lwc1 $f6, ($a0) # D_ovl39_8018E218 + 0
  /* 169D5C 8018D33C C4640000 */      lwc1 $f4, ($v1) # D_ovl39_8018E238 + 0
  /* 169D60 8018D340 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 169D64 8018D344 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 169D68 8018D348 46062201 */     sub.s $f8, $f4, $f6
  /* 169D6C 8018D34C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 169D70 8018D350 46004283 */     div.s $f10, $f8, $f0
  /* 169D74 8018D354 460A8480 */     add.s $f18, $f16, $f10
  /* 169D78 8018D358 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 169D7C 8018D35C E452003C */      swc1 $f18, 0x3c($v0)
  /* 169D80 8018D360 C4860004 */      lwc1 $f6, 4($a0) # D_ovl39_8018E218 + 4
  /* 169D84 8018D364 C4640004 */      lwc1 $f4, 4($v1) # D_ovl39_8018E238 + 4
  /* 169D88 8018D368 46062201 */     sub.s $f8, $f4, $f6
  /* 169D8C 8018D36C 46004403 */     div.s $f16, $f8, $f0
  /* 169D90 8018D370 46105480 */     add.s $f18, $f10, $f16
  /* 169D94 8018D374 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 169D98 8018D378 E4520040 */      swc1 $f18, 0x40($v0)
  /* 169D9C 8018D37C C4860008 */      lwc1 $f6, 8($a0) # D_ovl39_8018E218 + 8
  /* 169DA0 8018D380 C4640008 */      lwc1 $f4, 8($v1) # D_ovl39_8018E238 + 8
  /* 169DA4 8018D384 46062201 */     sub.s $f8, $f4, $f6
  /* 169DA8 8018D388 46004283 */     div.s $f10, $f8, $f0
  /* 169DAC 8018D38C 460A8480 */     add.s $f18, $f16, $f10
  /* 169DB0 8018D390 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 169DB4 8018D394 E4520044 */      swc1 $f18, 0x44($v0)
  /* 169DB8 8018D398 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl39_8018E218 + 12
  /* 169DBC 8018D39C C464000C */      lwc1 $f4, 0xc($v1) # D_ovl39_8018E238 + 12
  /* 169DC0 8018D3A0 46062201 */     sub.s $f8, $f4, $f6
  /* 169DC4 8018D3A4 46004403 */     div.s $f16, $f8, $f0
  /* 169DC8 8018D3A8 46105480 */     add.s $f18, $f10, $f16
  /* 169DCC 8018D3AC C450004C */      lwc1 $f16, 0x4c($v0)
  /* 169DD0 8018D3B0 E4520048 */      swc1 $f18, 0x48($v0)
  /* 169DD4 8018D3B4 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl39_8018E218 + 16
  /* 169DD8 8018D3B8 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl39_8018E238 + 16
  /* 169DDC 8018D3BC 46062201 */     sub.s $f8, $f4, $f6
  /* 169DE0 8018D3C0 46004283 */     div.s $f10, $f8, $f0
  /* 169DE4 8018D3C4 460A8480 */     add.s $f18, $f16, $f10
  /* 169DE8 8018D3C8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 169DEC 8018D3CC E452004C */      swc1 $f18, 0x4c($v0)
  /* 169DF0 8018D3D0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl39_8018E218 + 20
  /* 169DF4 8018D3D4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl39_8018E238 + 20
  /* 169DF8 8018D3D8 46062201 */     sub.s $f8, $f4, $f6
  /* 169DFC 8018D3DC 46004403 */     div.s $f16, $f8, $f0
  /* 169E00 8018D3E0 46105480 */     add.s $f18, $f10, $f16
  /* 169E04 8018D3E4 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 169E08 8018D3E8 E4520050 */      swc1 $f18, 0x50($v0)
  /* 169E0C 8018D3EC C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl39_8018E218 + 24
  /* 169E10 8018D3F0 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl39_8018E238 + 24
  /* 169E14 8018D3F4 46062201 */     sub.s $f8, $f4, $f6
  /* 169E18 8018D3F8 46004283 */     div.s $f10, $f8, $f0
  /* 169E1C 8018D3FC 460A8480 */     add.s $f18, $f16, $f10
  /* 169E20 8018D400 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D404:
  /* 169E24 8018D404 03E00008 */        jr $ra
  /* 169E28 8018D408 00000000 */       nop 

glabel func_ovl39_8018D40C
  /* 169E2C 8018D40C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 169E30 8018D410 3C0E8019 */       lui $t6, %hi(D_ovl39_8018E090)
  /* 169E34 8018D414 AFBF002C */        sw $ra, 0x2c($sp)
  /* 169E38 8018D418 AFB20028 */        sw $s2, 0x28($sp)
  /* 169E3C 8018D41C AFB10024 */        sw $s1, 0x24($sp)
  /* 169E40 8018D420 AFB00020 */        sw $s0, 0x20($sp)
  /* 169E44 8018D424 AFA40030 */        sw $a0, 0x30($sp)
  /* 169E48 8018D428 AFA50034 */        sw $a1, 0x34($sp)
  /* 169E4C 8018D42C AFA60038 */        sw $a2, 0x38($sp)
  /* 169E50 8018D430 25CEE090 */     addiu $t6, $t6, %lo(D_ovl39_8018E090)
  /* 169E54 8018D434 8DD80000 */        lw $t8, ($t6) # D_ovl39_8018E090 + 0
  /* 169E58 8018D438 3C108019 */       lui $s0, %hi(D_ovl39_8018E218)
  /* 169E5C 8018D43C 2610E218 */     addiu $s0, $s0, %lo(D_ovl39_8018E218)
  /* 169E60 8018D440 AE180000 */        sw $t8, ($s0) # D_ovl39_8018E218 + 0
  /* 169E64 8018D444 8DCF0004 */        lw $t7, 4($t6) # D_ovl39_8018E090 + 4
  /* 169E68 8018D448 3C198019 */       lui $t9, %hi(D_ovl39_8018E0AC)
  /* 169E6C 8018D44C 2739E0AC */     addiu $t9, $t9, %lo(D_ovl39_8018E0AC)
  /* 169E70 8018D450 AE0F0004 */        sw $t7, 4($s0) # D_ovl39_8018E218 + 4
  /* 169E74 8018D454 8DD80008 */        lw $t8, 8($t6) # D_ovl39_8018E090 + 8
  /* 169E78 8018D458 3C118019 */       lui $s1, %hi(D_ovl39_8018E238)
  /* 169E7C 8018D45C 2631E238 */     addiu $s1, $s1, %lo(D_ovl39_8018E238)
  /* 169E80 8018D460 AE180008 */        sw $t8, 8($s0) # D_ovl39_8018E218 + 8
  /* 169E84 8018D464 8DCF000C */        lw $t7, 0xc($t6) # D_ovl39_8018E090 + 12
  /* 169E88 8018D468 00002025 */        or $a0, $zero, $zero
  /* 169E8C 8018D46C AE0F000C */        sw $t7, 0xc($s0) # D_ovl39_8018E218 + 12
  /* 169E90 8018D470 8DD80010 */        lw $t8, 0x10($t6) # D_ovl39_8018E090 + 16
  /* 169E94 8018D474 AE180010 */        sw $t8, 0x10($s0) # D_ovl39_8018E218 + 16
  /* 169E98 8018D478 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl39_8018E090 + 20
  /* 169E9C 8018D47C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl39_8018E218 + 20
  /* 169EA0 8018D480 8DD80018 */        lw $t8, 0x18($t6) # D_ovl39_8018E090 + 24
  /* 169EA4 8018D484 AE180018 */        sw $t8, 0x18($s0) # D_ovl39_8018E218 + 24
  /* 169EA8 8018D488 8F290000 */        lw $t1, ($t9) # D_ovl39_8018E0AC + 0
  /* 169EAC 8018D48C AE290000 */        sw $t1, ($s1) # D_ovl39_8018E238 + 0
  /* 169EB0 8018D490 8F280004 */        lw $t0, 4($t9) # D_ovl39_8018E0AC + 4
  /* 169EB4 8018D494 AE280004 */        sw $t0, 4($s1) # D_ovl39_8018E238 + 4
  /* 169EB8 8018D498 8F290008 */        lw $t1, 8($t9) # D_ovl39_8018E0AC + 8
  /* 169EBC 8018D49C AE290008 */        sw $t1, 8($s1) # D_ovl39_8018E238 + 8
  /* 169EC0 8018D4A0 8F28000C */        lw $t0, 0xc($t9) # D_ovl39_8018E0AC + 12
  /* 169EC4 8018D4A4 AE28000C */        sw $t0, 0xc($s1) # D_ovl39_8018E238 + 12
  /* 169EC8 8018D4A8 8F290010 */        lw $t1, 0x10($t9) # D_ovl39_8018E0AC + 16
  /* 169ECC 8018D4AC AE290010 */        sw $t1, 0x10($s1) # D_ovl39_8018E238 + 16
  /* 169ED0 8018D4B0 8F280014 */        lw $t0, 0x14($t9) # D_ovl39_8018E0AC + 20
  /* 169ED4 8018D4B4 AE280014 */        sw $t0, 0x14($s1) # D_ovl39_8018E238 + 20
  /* 169ED8 8018D4B8 8F290018 */        lw $t1, 0x18($t9) # D_ovl39_8018E0AC + 24
  /* 169EDC 8018D4BC 0C0436CB */       jal func_ovl2_8010DB2C
  /* 169EE0 8018D4C0 AE290018 */        sw $t1, 0x18($s1) # D_ovl39_8018E238 + 24
  /* 169EE4 8018D4C4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 169EE8 8018D4C8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 169EEC 8018D4CC 3C038019 */       lui $v1, %hi(D_ovl39_8018E208)
  /* 169EF0 8018D4D0 2463E208 */     addiu $v1, $v1, %lo(D_ovl39_8018E208)
  /* 169EF4 8018D4D4 AC620000 */        sw $v0, ($v1) # D_ovl39_8018E208 + 0
  /* 169EF8 8018D4D8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 169EFC 8018D4DC 8C520074 */        lw $s2, 0x74($v0)
  /* 169F00 8018D4E0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 169F04 8018D4E4 44050000 */      mfc1 $a1, $f0
  /* 169F08 8018D4E8 44060000 */      mfc1 $a2, $f0
  /* 169F0C 8018D4EC 3C074352 */       lui $a3, 0x4352
  /* 169F10 8018D4F0 26440008 */     addiu $a0, $s2, 8
  /* 169F14 8018D4F4 0C001C20 */       jal func_80007080
  /* 169F18 8018D4F8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 169F1C 8018D4FC 3C018019 */       lui $at, %hi(D_ovl39_8018E1DC)
  /* 169F20 8018D500 C426E1DC */      lwc1 $f6, %lo(D_ovl39_8018E1DC)($at)
  /* 169F24 8018D504 3C048019 */       lui $a0, %hi(D_ovl39_8018E208)
  /* 169F28 8018D508 E6460024 */      swc1 $f6, 0x24($s2)
  /* 169F2C 8018D50C 0C002CE7 */       jal func_8000B39C
  /* 169F30 8018D510 8C84E208 */        lw $a0, %lo(D_ovl39_8018E208)($a0)
  /* 169F34 8018D514 3C048019 */       lui $a0, %hi(D_ovl39_8018E208)
  /* 169F38 8018D518 3C058019 */       lui $a1, %hi(func_ovl39_8018D314)
  /* 169F3C 8018D51C 24A5D314 */     addiu $a1, $a1, %lo(func_ovl39_8018D314)
  /* 169F40 8018D520 8C84E208 */        lw $a0, %lo(D_ovl39_8018E208)($a0)
  /* 169F44 8018D524 24060001 */     addiu $a2, $zero, 1
  /* 169F48 8018D528 0C002062 */       jal omAddGObjCommonProc
  /* 169F4C 8018D52C 24070001 */     addiu $a3, $zero, 1
  /* 169F50 8018D530 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 169F54 8018D534 C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 169F58 8018D538 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 169F5C 8018D53C C6080000 */      lwc1 $f8, ($s0) # D_ovl39_8018E218 + 0
  /* 169F60 8018D540 C6100004 */      lwc1 $f16, 4($s0) # D_ovl39_8018E218 + 4
  /* 169F64 8018D544 C6040008 */      lwc1 $f4, 8($s0) # D_ovl39_8018E218 + 8
  /* 169F68 8018D548 46004280 */     add.s $f10, $f8, $f0
  /* 169F6C 8018D54C C608000C */      lwc1 $f8, 0xc($s0) # D_ovl39_8018E218 + 12
  /* 169F70 8018D550 46028480 */     add.s $f18, $f16, $f2
  /* 169F74 8018D554 C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl39_8018E218 + 16
  /* 169F78 8018D558 E60A0000 */      swc1 $f10, ($s0) # D_ovl39_8018E218 + 0
  /* 169F7C 8018D55C 460C2180 */     add.s $f6, $f4, $f12
  /* 169F80 8018D560 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl39_8018E218 + 20
  /* 169F84 8018D564 E6120004 */      swc1 $f18, 4($s0) # D_ovl39_8018E218 + 4
  /* 169F88 8018D568 46004280 */     add.s $f10, $f8, $f0
  /* 169F8C 8018D56C E6060008 */      swc1 $f6, 8($s0) # D_ovl39_8018E218 + 8
  /* 169F90 8018D570 C6280000 */      lwc1 $f8, ($s1) # D_ovl39_8018E238 + 0
  /* 169F94 8018D574 46028480 */     add.s $f18, $f16, $f2
  /* 169F98 8018D578 C6300004 */      lwc1 $f16, 4($s1) # D_ovl39_8018E238 + 4
  /* 169F9C 8018D57C E60A000C */      swc1 $f10, 0xc($s0) # D_ovl39_8018E218 + 12
  /* 169FA0 8018D580 460C2180 */     add.s $f6, $f4, $f12
  /* 169FA4 8018D584 C6240008 */      lwc1 $f4, 8($s1) # D_ovl39_8018E238 + 8
  /* 169FA8 8018D588 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl39_8018E218 + 16
  /* 169FAC 8018D58C 46004280 */     add.s $f10, $f8, $f0
  /* 169FB0 8018D590 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl39_8018E218 + 20
  /* 169FB4 8018D594 C628000C */      lwc1 $f8, 0xc($s1) # D_ovl39_8018E238 + 12
  /* 169FB8 8018D598 46028480 */     add.s $f18, $f16, $f2
  /* 169FBC 8018D59C C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl39_8018E238 + 16
  /* 169FC0 8018D5A0 E62A0000 */      swc1 $f10, ($s1) # D_ovl39_8018E238 + 0
  /* 169FC4 8018D5A4 460C2180 */     add.s $f6, $f4, $f12
  /* 169FC8 8018D5A8 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl39_8018E238 + 20
  /* 169FCC 8018D5AC E6320004 */      swc1 $f18, 4($s1) # D_ovl39_8018E238 + 4
  /* 169FD0 8018D5B0 46004280 */     add.s $f10, $f8, $f0
  /* 169FD4 8018D5B4 E6260008 */      swc1 $f6, 8($s1) # D_ovl39_8018E238 + 8
  /* 169FD8 8018D5B8 C6080000 */      lwc1 $f8, ($s0) # D_ovl39_8018E218 + 0
  /* 169FDC 8018D5BC 46028480 */     add.s $f18, $f16, $f2
  /* 169FE0 8018D5C0 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl39_8018E238 + 12
  /* 169FE4 8018D5C4 460C2180 */     add.s $f6, $f4, $f12
  /* 169FE8 8018D5C8 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl39_8018E238 + 16
  /* 169FEC 8018D5CC E6260014 */      swc1 $f6, 0x14($s1) # D_ovl39_8018E238 + 20
  /* 169FF0 8018D5D0 E648003C */      swc1 $f8, 0x3c($s2)
  /* 169FF4 8018D5D4 C60A0004 */      lwc1 $f10, 4($s0) # D_ovl39_8018E218 + 4
  /* 169FF8 8018D5D8 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 169FFC 8018D5DC C6100008 */      lwc1 $f16, 8($s0) # D_ovl39_8018E218 + 8
  /* 16A000 8018D5E0 E6500044 */      swc1 $f16, 0x44($s2)
  /* 16A004 8018D5E4 C612000C */      lwc1 $f18, 0xc($s0) # D_ovl39_8018E218 + 12
  /* 16A008 8018D5E8 E6520048 */      swc1 $f18, 0x48($s2)
  /* 16A00C 8018D5EC C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl39_8018E218 + 16
  /* 16A010 8018D5F0 E644004C */      swc1 $f4, 0x4c($s2)
  /* 16A014 8018D5F4 C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl39_8018E218 + 20
  /* 16A018 8018D5F8 E6460050 */      swc1 $f6, 0x50($s2)
  /* 16A01C 8018D5FC C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl39_8018E218 + 24
  /* 16A020 8018D600 E6480054 */      swc1 $f8, 0x54($s2)
  /* 16A024 8018D604 8FBF002C */        lw $ra, 0x2c($sp)
  /* 16A028 8018D608 8FB20028 */        lw $s2, 0x28($sp)
  /* 16A02C 8018D60C 8FB10024 */        lw $s1, 0x24($sp)
  /* 16A030 8018D610 8FB00020 */        lw $s0, 0x20($sp)
  /* 16A034 8018D614 03E00008 */        jr $ra
  /* 16A038 8018D618 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl39_8018D61C
  /* 16A03C 8018D61C 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 16A040 8018D620 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16A044 8018D624 AFBE0038 */        sw $fp, 0x38($sp)
  /* 16A048 8018D628 AFB70034 */        sw $s7, 0x34($sp)
  /* 16A04C 8018D62C AFB60030 */        sw $s6, 0x30($sp)
  /* 16A050 8018D630 AFB5002C */        sw $s5, 0x2c($sp)
  /* 16A054 8018D634 AFB40028 */        sw $s4, 0x28($sp)
  /* 16A058 8018D638 AFB30024 */        sw $s3, 0x24($sp)
  /* 16A05C 8018D63C AFB20020 */        sw $s2, 0x20($sp)
  /* 16A060 8018D640 AFB1001C */        sw $s1, 0x1c($sp)
  /* 16A064 8018D644 0C0412F7 */       jal func_ovl2_80104BDC
  /* 16A068 8018D648 AFB00018 */        sw $s0, 0x18($sp)
  /* 16A06C 8018D64C 0C041580 */       jal func_ovl2_80105600
  /* 16A070 8018D650 00000000 */       nop 
  /* 16A074 8018D654 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 16A078 8018D658 24040015 */     addiu $a0, $zero, 0x15
  /* 16A07C 8018D65C 24010001 */     addiu $at, $zero, 1
  /* 16A080 8018D660 10410009 */       beq $v0, $at, .L8018D688
  /* 16A084 8018D664 24040015 */     addiu $a0, $zero, 0x15
  /* 16A088 8018D668 3C108019 */       lui $s0, %hi(D_ovl39_8018E1C0)
  /* 16A08C 8018D66C 2610E1C0 */     addiu $s0, $s0, %lo(D_ovl39_8018E1C0)
  .L8018D670:
  /* 16A090 8018D670 0C008D89 */       jal fatal_printf
  /* 16A094 8018D674 02002025 */        or $a0, $s0, $zero
  /* 16A098 8018D678 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 16A09C 8018D67C 00000000 */       nop 
  /* 16A0A0 8018D680 1000FFFB */         b .L8018D670
  /* 16A0A4 8018D684 00000000 */       nop 
  .L8018D688:
  /* 16A0A8 8018D688 0C03F205 */       jal func_ovl2_800FC814
  /* 16A0AC 8018D68C 27A5009C */     addiu $a1, $sp, 0x9c
  /* 16A0B0 8018D690 27B00090 */     addiu $s0, $sp, 0x90
  /* 16A0B4 8018D694 02002825 */        or $a1, $s0, $zero
  /* 16A0B8 8018D698 0C03F225 */       jal func_ovl2_800FC894
  /* 16A0BC 8018D69C 8FA4009C */        lw $a0, 0x9c($sp)
  /* 16A0C0 8018D6A0 8E0F0000 */        lw $t7, ($s0) # D_ovl39_8018E1C0 + 0
  /* 16A0C4 8018D6A4 AFAF0000 */        sw $t7, ($sp)
  /* 16A0C8 8018D6A8 8E050004 */        lw $a1, 4($s0) # D_ovl39_8018E1C0 + 4
  /* 16A0CC 8018D6AC 8FA40000 */        lw $a0, ($sp)
  /* 16A0D0 8018D6B0 AFA50004 */        sw $a1, 4($sp)
  /* 16A0D4 8018D6B4 8E060008 */        lw $a2, 8($s0) # D_ovl39_8018E1C0 + 8
  /* 16A0D8 8018D6B8 0C063503 */       jal func_ovl39_8018D40C
  /* 16A0DC 8018D6BC AFA60008 */        sw $a2, 8($sp)
  /* 16A0E0 8018D6C0 0C0455B9 */       jal func_ovl2_801156E4
  /* 16A0E4 8018D6C4 00000000 */       nop 
  /* 16A0E8 8018D6C8 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 16A0EC 8018D6CC 00000000 */       nop 
  /* 16A0F0 8018D6D0 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 16A0F4 8018D6D4 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 16A0F8 8018D6D8 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 16A0FC 8018D6DC 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 16A100 8018D6E0 00008825 */        or $s1, $zero, $zero
  /* 16A104 8018D6E4 00009025 */        or $s2, $zero, $zero
  /* 16A108 8018D6E8 241E0004 */     addiu $fp, $zero, 4
  /* 16A10C 8018D6EC 24170002 */     addiu $s7, $zero, 2
  /* 16A110 8018D6F0 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D6F4:
  /* 16A114 8018D6F4 02C04025 */        or $t0, $s6, $zero
  /* 16A118 8018D6F8 02804825 */        or $t1, $s4, $zero
  /* 16A11C 8018D6FC 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D700:
  /* 16A120 8018D700 8D190000 */        lw $t9, ($t0)
  /* 16A124 8018D704 2508000C */     addiu $t0, $t0, 0xc
  /* 16A128 8018D708 2529000C */     addiu $t1, $t1, 0xc
  /* 16A12C 8018D70C AD39FFF4 */        sw $t9, -0xc($t1)
  /* 16A130 8018D710 8D18FFF8 */        lw $t8, -8($t0)
  /* 16A134 8018D714 AD38FFF8 */        sw $t8, -8($t1)
  /* 16A138 8018D718 8D19FFFC */        lw $t9, -4($t0)
  /* 16A13C 8018D71C 150AFFF8 */       bne $t0, $t2, .L8018D700
  /* 16A140 8018D720 AD39FFFC */        sw $t9, -4($t1)
  /* 16A144 8018D724 8D190000 */        lw $t9, ($t0)
  /* 16A148 8018D728 00116880 */       sll $t5, $s1, 2
  /* 16A14C 8018D72C 01B16821 */      addu $t5, $t5, $s1
  /* 16A150 8018D730 AD390000 */        sw $t9, ($t1)
  /* 16A154 8018D734 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 16A158 8018D738 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 16A15C 8018D73C 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 16A160 8018D740 01728021 */      addu $s0, $t3, $s2
  /* 16A164 8018D744 920C0022 */       lbu $t4, 0x22($s0) # D_ovl39_8018E1C0 + 34
  /* 16A168 8018D748 000D6840 */       sll $t5, $t5, 1
  /* 16A16C 8018D74C 01AE9821 */      addu $s3, $t5, $t6
  /* 16A170 8018D750 52EC0030 */      beql $s7, $t4, .L8018D814
  /* 16A174 8018D754 26310001 */     addiu $s1, $s1, 1
  /* 16A178 8018D758 0C035E1B */       jal func_ovl2_800D786C
  /* 16A17C 8018D75C 92040023 */       lbu $a0, 0x23($s0) # D_ovl39_8018E1C0 + 35
  /* 16A180 8018D760 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 16A184 8018D764 C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 16A188 8018D768 C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 16A18C 8018D76C 00528021 */      addu $s0, $v0, $s2
  /* 16A190 8018D770 920F0023 */       lbu $t7, 0x23($s0) # D_ovl39_8018E1C0 + 35
  /* 16A194 8018D774 C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 16A198 8018D778 240AFFFF */     addiu $t2, $zero, -1
  /* 16A19C 8018D77C AFAA0060 */        sw $t2, 0x60($sp)
  /* 16A1A0 8018D780 E7A40054 */      swc1 $f4, 0x54($sp)
  /* 16A1A4 8018D784 E7A60058 */      swc1 $f6, 0x58($sp)
  /* 16A1A8 8018D788 AFAF0050 */        sw $t7, 0x50($sp)
  /* 16A1AC 8018D78C E7A8005C */      swc1 $f8, 0x5c($sp)
  /* 16A1B0 8018D790 92080024 */       lbu $t0, 0x24($s0) # D_ovl39_8018E1C0 + 36
  /* 16A1B4 8018D794 24090001 */     addiu $t1, $zero, 1
  /* 16A1B8 8018D798 A3B10065 */        sb $s1, 0x65($sp)
  /* 16A1BC 8018D79C A3A90066 */        sb $t1, 0x66($sp)
  /* 16A1C0 8018D7A0 A3A80064 */        sb $t0, 0x64($sp)
  /* 16A1C4 8018D7A4 92180026 */       lbu $t8, 0x26($s0) # D_ovl39_8018E1C0 + 38
  /* 16A1C8 8018D7A8 A3B80067 */        sb $t8, 0x67($sp)
  /* 16A1CC 8018D7AC 92190021 */       lbu $t9, 0x21($s0) # D_ovl39_8018E1C0 + 33
  /* 16A1D0 8018D7B0 A3B90069 */        sb $t9, 0x69($sp)
  /* 16A1D4 8018D7B4 920B0020 */       lbu $t3, 0x20($s0) # D_ovl39_8018E1C0 + 32
  /* 16A1D8 8018D7B8 A3AB006A */        sb $t3, 0x6a($sp)
  /* 16A1DC 8018D7BC 904C0007 */       lbu $t4, 7($v0)
  /* 16A1E0 8018D7C0 AFA00074 */        sw $zero, 0x74($sp)
  /* 16A1E4 8018D7C4 A3AC006B */        sb $t4, 0x6b($sp)
  /* 16A1E8 8018D7C8 920D0022 */       lbu $t5, 0x22($s0) # D_ovl39_8018E1C0 + 34
  /* 16A1EC 8018D7CC AFB3007C */        sw $s3, 0x7c($sp)
  /* 16A1F0 8018D7D0 AFAD0078 */        sw $t5, 0x78($sp)
  /* 16A1F4 8018D7D4 0C035E2D */       jal func_ovl2_800D78B4
  /* 16A1F8 8018D7D8 92040023 */       lbu $a0, 0x23($s0) # D_ovl39_8018E1C0 + 35
  /* 16A1FC 8018D7DC AFA20088 */        sw $v0, 0x88($sp)
  /* 16A200 8018D7E0 0C035FCF */       jal ftManager_CreateFighter
  /* 16A204 8018D7E4 02802025 */        or $a0, $s4, $zero
  /* 16A208 8018D7E8 3C018019 */       lui $at, %hi(D_ovl39_8018E200)
  /* 16A20C 8018D7EC AC22E200 */        sw $v0, %lo(D_ovl39_8018E200)($at)
  /* 16A210 8018D7F0 00408025 */        or $s0, $v0, $zero
  /* 16A214 8018D7F4 02202025 */        or $a0, $s1, $zero
  /* 16A218 8018D7F8 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 16A21C 8018D7FC 00402825 */        or $a1, $v0, $zero
  /* 16A220 8018D800 3C058019 */       lui $a1, %hi(D_ovl39_8018E0C8)
  /* 16A224 8018D804 24A5E0C8 */     addiu $a1, $a1, %lo(D_ovl39_8018E0C8)
  /* 16A228 8018D808 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 16A22C 8018D80C 02002025 */        or $a0, $s0, $zero
  /* 16A230 8018D810 26310001 */     addiu $s1, $s1, 1
  .L8018D814:
  /* 16A234 8018D814 163EFFB7 */       bne $s1, $fp, .L8018D6F4
  /* 16A238 8018D818 26520074 */     addiu $s2, $s2, 0x74
  /* 16A23C 8018D81C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16A240 8018D820 8FB00018 */        lw $s0, 0x18($sp)
  /* 16A244 8018D824 8FB1001C */        lw $s1, 0x1c($sp)
  /* 16A248 8018D828 8FB20020 */        lw $s2, 0x20($sp)
  /* 16A24C 8018D82C 8FB30024 */        lw $s3, 0x24($sp)
  /* 16A250 8018D830 8FB40028 */        lw $s4, 0x28($sp)
  /* 16A254 8018D834 8FB5002C */        lw $s5, 0x2c($sp)
  /* 16A258 8018D838 8FB60030 */        lw $s6, 0x30($sp)
  /* 16A25C 8018D83C 8FB70034 */        lw $s7, 0x34($sp)
  /* 16A260 8018D840 8FBE0038 */        lw $fp, 0x38($sp)
  /* 16A264 8018D844 03E00008 */        jr $ra
  /* 16A268 8018D848 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl39_8018D84C
  /* 16A26C 8018D84C 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 16A270 8018D850 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 16A274 8018D854 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A278 8018D858 AFA40000 */        sw $a0, ($sp)
  /* 16A27C 8018D85C 3C0CE700 */       lui $t4, 0xe700
  /* 16A280 8018D860 246E0008 */     addiu $t6, $v1, 8
  /* 16A284 8018D864 AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 16A288 8018D868 AC600004 */        sw $zero, 4($v1)
  /* 16A28C 8018D86C AC6C0000 */        sw $t4, ($v1)
  /* 16A290 8018D870 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A294 8018D874 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 16A298 8018D878 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16A29C 8018D87C 246F0008 */     addiu $t7, $v1, 8
  /* 16A2A0 8018D880 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16A2A4 8018D884 AC600004 */        sw $zero, 4($v1)
  /* 16A2A8 8018D888 AC780000 */        sw $t8, ($v1)
  /* 16A2AC 8018D88C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A2B0 8018D890 3C0F003C */       lui $t7, (0x3C28FF >> 16) # 3942655
  /* 16A2B4 8018D894 35EF28FF */       ori $t7, $t7, (0x3C28FF & 0xFFFF) # 3942655
  /* 16A2B8 8018D898 24790008 */     addiu $t9, $v1, 8
  /* 16A2BC 8018D89C AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16A2C0 8018D8A0 3C0EFA00 */       lui $t6, 0xfa00
  /* 16A2C4 8018D8A4 AC6E0000 */        sw $t6, ($v1)
  /* 16A2C8 8018D8A8 AC6F0004 */        sw $t7, 4($v1)
  /* 16A2CC 8018D8AC 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A2D0 8018D8B0 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16A2D4 8018D8B4 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 16A2D8 8018D8B8 24780008 */     addiu $t8, $v1, 8
  /* 16A2DC 8018D8BC AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16A2E0 8018D8C0 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16A2E4 8018D8C4 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 16A2E8 8018D8C8 AC6E0004 */        sw $t6, 4($v1)
  /* 16A2EC 8018D8CC AC790000 */        sw $t9, ($v1)
  /* 16A2F0 8018D8D0 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A2F4 8018D8D4 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 16A2F8 8018D8D8 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 16A2FC 8018D8DC 246F0008 */     addiu $t7, $v1, 8
  /* 16A300 8018D8E0 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16A304 8018D8E4 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 16A308 8018D8E8 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 16A30C 8018D8EC AC780004 */        sw $t8, 4($v1)
  /* 16A310 8018D8F0 AC6D0000 */        sw $t5, ($v1)
  /* 16A314 8018D8F4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A318 8018D8F8 3C0F0034 */       lui $t7, (0x348028 >> 16) # 3440680
  /* 16A31C 8018D8FC 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 16A320 8018D900 24790008 */     addiu $t9, $v1, 8
  /* 16A324 8018D904 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16A328 8018D908 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 16A32C 8018D90C 35EF8028 */       ori $t7, $t7, (0x348028 & 0xFFFF) # 3440680
  /* 16A330 8018D910 AC6F0004 */        sw $t7, 4($v1)
  /* 16A334 8018D914 AC6E0000 */        sw $t6, ($v1)
  /* 16A338 8018D918 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A33C 8018D91C 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 16A340 8018D920 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16A344 8018D924 24780008 */     addiu $t8, $v1, 8
  /* 16A348 8018D928 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16A34C 8018D92C AC600004 */        sw $zero, 4($v1)
  /* 16A350 8018D930 AC6C0000 */        sw $t4, ($v1)
  /* 16A354 8018D934 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16A358 8018D938 24790008 */     addiu $t9, $v1, 8
  /* 16A35C 8018D93C AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16A360 8018D940 AC6E0004 */        sw $t6, 4($v1)
  /* 16A364 8018D944 03E00008 */        jr $ra
  /* 16A368 8018D948 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl39_8018D94C
  /* 16A36C 8018D94C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16A370 8018D950 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16A374 8018D954 00002025 */        or $a0, $zero, $zero
  /* 16A378 8018D958 00002825 */        or $a1, $zero, $zero
  /* 16A37C 8018D95C 24060013 */     addiu $a2, $zero, 0x13
  /* 16A380 8018D960 0C00265A */       jal omMakeGObjCommon
  /* 16A384 8018D964 3C078000 */       lui $a3, 0x8000
  /* 16A388 8018D968 3C058019 */       lui $a1, %hi(func_ovl39_8018D84C)
  /* 16A38C 8018D96C 240EFFFF */     addiu $t6, $zero, -1
  /* 16A390 8018D970 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16A394 8018D974 24A5D84C */     addiu $a1, $a1, %lo(func_ovl39_8018D84C)
  /* 16A398 8018D978 00402025 */        or $a0, $v0, $zero
  /* 16A39C 8018D97C 2406001C */     addiu $a2, $zero, 0x1c
  /* 16A3A0 8018D980 0C00277D */       jal func_80009DF4
  /* 16A3A4 8018D984 3C078000 */       lui $a3, 0x8000
  /* 16A3A8 8018D988 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16A3AC 8018D98C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16A3B0 8018D990 03E00008 */        jr $ra
  /* 16A3B4 8018D994 00000000 */       nop 

glabel func_ovl39_8018D998
  /* 16A3B8 8018D998 3C038019 */       lui $v1, %hi(D_ovl39_8018E1F8)
  /* 16A3BC 8018D99C 8C63E1F8 */        lw $v1, %lo(D_ovl39_8018E1F8)($v1)
  /* 16A3C0 8018D9A0 2401000F */     addiu $at, $zero, 0xf
  /* 16A3C4 8018D9A4 3C058019 */       lui $a1, 0x8019
  /* 16A3C8 8018D9A8 10610009 */       beq $v1, $at, .L8018D9D0
  /* 16A3CC 8018D9AC 00601025 */        or $v0, $v1, $zero
  /* 16A3D0 8018D9B0 2401002D */     addiu $at, $zero, 0x2d
  /* 16A3D4 8018D9B4 1041000B */       beq $v0, $at, .L8018D9E4
  /* 16A3D8 8018D9B8 3C058019 */       lui $a1, 0x8019
  /* 16A3DC 8018D9BC 2401003C */     addiu $at, $zero, 0x3c
  /* 16A3E0 8018D9C0 1041000D */       beq $v0, $at, .L8018D9F8
  /* 16A3E4 8018D9C4 3C058019 */       lui $a1, %hi(D_ovl39_8018E210)
  /* 16A3E8 8018D9C8 1000000F */         b .L8018DA08
  /* 16A3EC 8018D9CC 24A5E210 */     addiu $a1, $a1, %lo(D_ovl39_8018E210)
  .L8018D9D0:
  /* 16A3F0 8018D9D0 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16A3F4 8018D9D4 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 16A3F8 8018D9D8 24A5E210 */     addiu $a1, $a1, -0x1df0
  /* 16A3FC 8018D9DC 1000000A */         b .L8018DA08
  /* 16A400 8018D9E0 E4A40000 */      swc1 $f4, ($a1) # D_ovl39_8018E210 + 0
  .L8018D9E4:
  /* 16A404 8018D9E4 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 16A408 8018D9E8 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 16A40C 8018D9EC 24A5E210 */     addiu $a1, $a1, -0x1df0
  /* 16A410 8018D9F0 10000005 */         b .L8018DA08
  /* 16A414 8018D9F4 E4A60000 */      swc1 $f6, ($a1) # D_ovl39_8018E210 + 0
  .L8018D9F8:
  /* 16A418 8018D9F8 44804000 */      mtc1 $zero, $f8
  /* 16A41C 8018D9FC 3C058019 */       lui $a1, %hi(D_ovl39_8018E210)
  /* 16A420 8018DA00 24A5E210 */     addiu $a1, $a1, %lo(D_ovl39_8018E210)
  /* 16A424 8018DA04 E4A80000 */      swc1 $f8, ($a1) # D_ovl39_8018E210 + 0
  .L8018DA08:
  /* 16A428 8018DA08 28610010 */      slti $at, $v1, 0x10
  /* 16A42C 8018DA0C 14200007 */      bnez $at, .L8018DA2C
  /* 16A430 8018DA10 2861002D */      slti $at, $v1, 0x2d
  /* 16A434 8018DA14 10200005 */      beqz $at, .L8018DA2C
  /* 16A438 8018DA18 3C018019 */       lui $at, %hi(D_ovl39_8018E1E0)
  /* 16A43C 8018DA1C C430E1E0 */      lwc1 $f16, %lo(D_ovl39_8018E1E0)($at)
  /* 16A440 8018DA20 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl39_8018E210 + 0
  /* 16A444 8018DA24 46105480 */     add.s $f18, $f10, $f16
  /* 16A448 8018DA28 E4B20000 */      swc1 $f18, ($a1) # D_ovl39_8018E210 + 0
  .L8018DA2C:
  /* 16A44C 8018DA2C 2861002E */      slti $at, $v1, 0x2e
  /* 16A450 8018DA30 14200007 */      bnez $at, .L8018DA50
  /* 16A454 8018DA34 2861003C */      slti $at, $v1, 0x3c
  /* 16A458 8018DA38 10200005 */      beqz $at, .L8018DA50
  /* 16A45C 8018DA3C 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 16A460 8018DA40 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16A464 8018DA44 C4A40000 */      lwc1 $f4, ($a1) # D_ovl39_8018E210 + 0
  /* 16A468 8018DA48 46062200 */     add.s $f8, $f4, $f6
  /* 16A46C 8018DA4C E4A80000 */      swc1 $f8, ($a1) # D_ovl39_8018E210 + 0
  .L8018DA50:
  /* 16A470 8018DA50 8C820074 */        lw $v0, 0x74($a0)
  /* 16A474 8018DA54 C4B00000 */      lwc1 $f16, ($a1) # D_ovl39_8018E210 + 0
  /* 16A478 8018DA58 C44A0020 */      lwc1 $f10, 0x20($v0)
  /* 16A47C 8018DA5C 46105481 */     sub.s $f18, $f10, $f16
  /* 16A480 8018DA60 03E00008 */        jr $ra
  /* 16A484 8018DA64 E4520020 */      swc1 $f18, 0x20($v0)

glabel func_ovl39_8018DA68
  /* 16A488 8018DA68 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 16A48C 8018DA6C AFB00018 */        sw $s0, 0x18($sp)
  /* 16A490 8018DA70 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16A494 8018DA74 27B00024 */     addiu $s0, $sp, 0x24
  /* 16A498 8018DA78 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 16A49C 8018DA7C AFBF001C */        sw $ra, 0x1c($sp)
  /* 16A4A0 8018DA80 25C8003C */     addiu $t0, $t6, 0x3c
  /* 16A4A4 8018DA84 0200C825 */        or $t9, $s0, $zero
  .L8018DA88:
  /* 16A4A8 8018DA88 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16A4AC 8018DA8C 25CE000C */     addiu $t6, $t6, 0xc
  /* 16A4B0 8018DA90 2739000C */     addiu $t9, $t9, 0xc
  /* 16A4B4 8018DA94 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16A4B8 8018DA98 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 16A4BC 8018DA9C AF2FFFF8 */        sw $t7, -8($t9)
  /* 16A4C0 8018DAA0 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 16A4C4 8018DAA4 15C8FFF8 */       bne $t6, $t0, .L8018DA88
  /* 16A4C8 8018DAA8 AF38FFFC */        sw $t8, -4($t9)
  /* 16A4CC 8018DAAC 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16A4D0 8018DAB0 24090001 */     addiu $t1, $zero, 1
  /* 16A4D4 8018DAB4 24040001 */     addiu $a0, $zero, 1
  /* 16A4D8 8018DAB8 AF380000 */        sw $t8, ($t9)
  /* 16A4DC 8018DABC AFA90024 */        sw $t1, 0x24($sp)
  /* 16A4E0 8018DAC0 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16A4E4 8018DAC4 00002825 */        or $a1, $zero, $zero
  /* 16A4E8 8018DAC8 44800000 */      mtc1 $zero, $f0
  /* 16A4EC 8018DACC 3C0A8019 */       lui $t2, %hi(D_ovl39_8018E20C)
  /* 16A4F0 8018DAD0 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 16A4F4 8018DAD4 8D4AE20C */        lw $t2, %lo(D_ovl39_8018E20C)($t2)
  /* 16A4F8 8018DAD8 44812000 */      mtc1 $at, $f4 # 600.0 to cop1
  /* 16A4FC 8018DADC A3A2003B */        sb $v0, 0x3b($sp)
  /* 16A500 8018DAE0 02002025 */        or $a0, $s0, $zero
  /* 16A504 8018DAE4 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 16A508 8018DAE8 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 16A50C 8018DAEC AFAA005C */        sw $t2, 0x5c($sp)
  /* 16A510 8018DAF0 0C035FCF */       jal ftManager_CreateFighter
  /* 16A514 8018DAF4 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 16A518 8018DAF8 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 16A51C 8018DAFC 00408025 */        or $s0, $v0, $zero
  /* 16A520 8018DB00 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16A524 8018DB04 0C0E4173 */       jal func_ovl1_803905CC
  /* 16A528 8018DB08 00402025 */        or $a0, $v0, $zero
  /* 16A52C 8018DB0C 02002025 */        or $a0, $s0, $zero
  /* 16A530 8018DB10 2405001A */     addiu $a1, $zero, 0x1a
  /* 16A534 8018DB14 0C002834 */       jal om_g_move_obj_dl
  /* 16A538 8018DB18 2406FFFF */     addiu $a2, $zero, -1
  /* 16A53C 8018DB1C 3C058019 */       lui $a1, %hi(func_ovl39_8018D998)
  /* 16A540 8018DB20 24A5D998 */     addiu $a1, $a1, %lo(func_ovl39_8018D998)
  /* 16A544 8018DB24 02002025 */        or $a0, $s0, $zero
  /* 16A548 8018DB28 24060001 */     addiu $a2, $zero, 1
  /* 16A54C 8018DB2C 0C002062 */       jal omAddGObjCommonProc
  /* 16A550 8018DB30 24070001 */     addiu $a3, $zero, 1
  /* 16A554 8018DB34 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16A558 8018DB38 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 16A55C 8018DB3C 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16A560 8018DB40 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16A564 8018DB44 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16A568 8018DB48 E5800044 */      swc1 $f0, 0x44($t4)
  /* 16A56C 8018DB4C 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16A570 8018DB50 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16A574 8018DB54 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16A578 8018DB58 8FB00018 */        lw $s0, 0x18($sp)
  /* 16A57C 8018DB5C 27BD0068 */     addiu $sp, $sp, 0x68
  /* 16A580 8018DB60 03E00008 */        jr $ra
  /* 16A584 8018DB64 00000000 */       nop 

glabel func_ovl39_8018DB68
  /* 16A588 8018DB68 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16A58C 8018DB6C 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16A590 8018DB70 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16A594 8018DB74 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16A598 8018DB78 240F0050 */     addiu $t7, $zero, 0x50
  /* 16A59C 8018DB7C 24180000 */     addiu $t8, $zero, 0
  /* 16A5A0 8018DB80 3C190800 */       lui $t9, 0x800
  /* 16A5A4 8018DB84 2408FFFF */     addiu $t0, $zero, -1
  /* 16A5A8 8018DB88 24090001 */     addiu $t1, $zero, 1
  /* 16A5AC 8018DB8C 240A0001 */     addiu $t2, $zero, 1
  /* 16A5B0 8018DB90 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16A5B4 8018DB94 AFA90028 */        sw $t1, 0x28($sp)
  /* 16A5B8 8018DB98 AFA80020 */        sw $t0, 0x20($sp)
  /* 16A5BC 8018DB9C AFB9001C */        sw $t9, 0x1c($sp)
  /* 16A5C0 8018DBA0 AFB80018 */        sw $t8, 0x18($sp)
  /* 16A5C4 8018DBA4 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16A5C8 8018DBA8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16A5CC 8018DBAC AFA00024 */        sw $zero, 0x24($sp)
  /* 16A5D0 8018DBB0 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16A5D4 8018DBB4 AFA00034 */        sw $zero, 0x34($sp)
  /* 16A5D8 8018DBB8 24040401 */     addiu $a0, $zero, 0x401
  /* 16A5DC 8018DBBC 00002825 */        or $a1, $zero, $zero
  /* 16A5E0 8018DBC0 24060010 */     addiu $a2, $zero, 0x10
  /* 16A5E4 8018DBC4 0C002E4F */       jal func_8000B93C
  /* 16A5E8 8018DBC8 3C078000 */       lui $a3, 0x8000
  /* 16A5EC 8018DBCC 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16A5F0 8018DBD0 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16A5F4 8018DBD4 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16A5F8 8018DBD8 8C430074 */        lw $v1, 0x74($v0)
  /* 16A5FC 8018DBDC 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16A600 8018DBE0 44050000 */      mfc1 $a1, $f0
  /* 16A604 8018DBE4 44060000 */      mfc1 $a2, $f0
  /* 16A608 8018DBE8 3C07439B */       lui $a3, 0x439b
  /* 16A60C 8018DBEC 24640008 */     addiu $a0, $v1, 8
  /* 16A610 8018DBF0 0C001C20 */       jal func_80007080
  /* 16A614 8018DBF4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16A618 8018DBF8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16A61C 8018DBFC 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16A620 8018DC00 03E00008 */        jr $ra
  /* 16A624 8018DC04 00000000 */       nop 

glabel func_ovl39_8018DC08
  /* 16A628 8018DC08 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16A62C 8018DC0C 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16A630 8018DC10 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16A634 8018DC14 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16A638 8018DC18 240F000A */     addiu $t7, $zero, 0xa
  /* 16A63C 8018DC1C 24180000 */     addiu $t8, $zero, 0
  /* 16A640 8018DC20 3C190400 */       lui $t9, 0x400
  /* 16A644 8018DC24 2408FFFF */     addiu $t0, $zero, -1
  /* 16A648 8018DC28 24090001 */     addiu $t1, $zero, 1
  /* 16A64C 8018DC2C 240A0001 */     addiu $t2, $zero, 1
  /* 16A650 8018DC30 240B0001 */     addiu $t3, $zero, 1
  /* 16A654 8018DC34 AFAB0030 */        sw $t3, 0x30($sp)
  /* 16A658 8018DC38 AFAA0028 */        sw $t2, 0x28($sp)
  /* 16A65C 8018DC3C AFA90024 */        sw $t1, 0x24($sp)
  /* 16A660 8018DC40 AFA80020 */        sw $t0, 0x20($sp)
  /* 16A664 8018DC44 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16A668 8018DC48 AFB80018 */        sw $t8, 0x18($sp)
  /* 16A66C 8018DC4C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16A670 8018DC50 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16A674 8018DC54 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16A678 8018DC58 AFA00034 */        sw $zero, 0x34($sp)
  /* 16A67C 8018DC5C 24040401 */     addiu $a0, $zero, 0x401
  /* 16A680 8018DC60 00002825 */        or $a1, $zero, $zero
  /* 16A684 8018DC64 24060010 */     addiu $a2, $zero, 0x10
  /* 16A688 8018DC68 0C002E4F */       jal func_8000B93C
  /* 16A68C 8018DC6C 3C078000 */       lui $a3, 0x8000
  /* 16A690 8018DC70 AFA20044 */        sw $v0, 0x44($sp)
  /* 16A694 8018DC74 8C430074 */        lw $v1, 0x74($v0)
  /* 16A698 8018DC78 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16A69C 8018DC7C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16A6A0 8018DC80 3C054352 */       lui $a1, 0x4352
  /* 16A6A4 8018DC84 3C064120 */       lui $a2, 0x4120
  /* 16A6A8 8018DC88 3C07439B */       lui $a3, 0x439b
  /* 16A6AC 8018DC8C 24640008 */     addiu $a0, $v1, 8
  /* 16A6B0 8018DC90 AFA30040 */        sw $v1, 0x40($sp)
  /* 16A6B4 8018DC94 0C001C20 */       jal func_80007080
  /* 16A6B8 8018DC98 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16A6BC 8018DC9C 3C018019 */       lui $at, %hi(D_ovl39_8018E1E4)
  /* 16A6C0 8018DCA0 8FA40040 */        lw $a0, 0x40($sp)
  /* 16A6C4 8018DCA4 C426E1E4 */      lwc1 $f6, %lo(D_ovl39_8018E1E4)($at)
  /* 16A6C8 8018DCA8 3C0C8019 */       lui $t4, %hi(D_ovl39_8018E414)
  /* 16A6CC 8018DCAC 3C0D0000 */       lui $t5, %hi(D_NF_00000090)
  /* 16A6D0 8018DCB0 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16A6D4 8018DCB4 8D8CE414 */        lw $t4, %lo(D_ovl39_8018E414)($t4)
  /* 16A6D8 8018DCB8 25AD0090 */     addiu $t5, $t5, %lo(D_NF_00000090)
  /* 16A6DC 8018DCBC 24060000 */     addiu $a2, $zero, 0
  /* 16A6E0 8018DCC0 0C003E8F */       jal func_8000FA3C
  /* 16A6E4 8018DCC4 018D2821 */      addu $a1, $t4, $t5
  /* 16A6E8 8018DCC8 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16A6EC 8018DCCC 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16A6F0 8018DCD0 8FA40044 */        lw $a0, 0x44($sp)
  /* 16A6F4 8018DCD4 24060001 */     addiu $a2, $zero, 1
  /* 16A6F8 8018DCD8 0C002062 */       jal omAddGObjCommonProc
  /* 16A6FC 8018DCDC 24070001 */     addiu $a3, $zero, 1
  /* 16A700 8018DCE0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16A704 8018DCE4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16A708 8018DCE8 03E00008 */        jr $ra
  /* 16A70C 8018DCEC 00000000 */       nop 

glabel func_ovl39_8018DCF0
  /* 16A710 8018DCF0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16A714 8018DCF4 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16A718 8018DCF8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16A71C 8018DCFC 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16A720 8018DD00 240F0014 */     addiu $t7, $zero, 0x14
  /* 16A724 8018DD04 24180000 */     addiu $t8, $zero, 0
  /* 16A728 8018DD08 3C191000 */       lui $t9, 0x1000
  /* 16A72C 8018DD0C 2408FFFF */     addiu $t0, $zero, -1
  /* 16A730 8018DD10 24090001 */     addiu $t1, $zero, 1
  /* 16A734 8018DD14 240A0001 */     addiu $t2, $zero, 1
  /* 16A738 8018DD18 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16A73C 8018DD1C AFA90028 */        sw $t1, 0x28($sp)
  /* 16A740 8018DD20 AFA80020 */        sw $t0, 0x20($sp)
  /* 16A744 8018DD24 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16A748 8018DD28 AFB80018 */        sw $t8, 0x18($sp)
  /* 16A74C 8018DD2C AFAF0014 */        sw $t7, 0x14($sp)
  /* 16A750 8018DD30 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16A754 8018DD34 AFA00024 */        sw $zero, 0x24($sp)
  /* 16A758 8018DD38 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16A75C 8018DD3C AFA00034 */        sw $zero, 0x34($sp)
  /* 16A760 8018DD40 24040401 */     addiu $a0, $zero, 0x401
  /* 16A764 8018DD44 00002825 */        or $a1, $zero, $zero
  /* 16A768 8018DD48 24060010 */     addiu $a2, $zero, 0x10
  /* 16A76C 8018DD4C 0C002E4F */       jal func_8000B93C
  /* 16A770 8018DD50 3C078000 */       lui $a3, 0x8000
  /* 16A774 8018DD54 8C430074 */        lw $v1, 0x74($v0)
  /* 16A778 8018DD58 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16A77C 8018DD5C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16A780 8018DD60 3C054352 */       lui $a1, 0x4352
  /* 16A784 8018DD64 3C064120 */       lui $a2, 0x4120
  /* 16A788 8018DD68 3C07439B */       lui $a3, 0x439b
  /* 16A78C 8018DD6C 24640008 */     addiu $a0, $v1, 8
  /* 16A790 8018DD70 AFA30044 */        sw $v1, 0x44($sp)
  /* 16A794 8018DD74 0C001C20 */       jal func_80007080
  /* 16A798 8018DD78 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16A79C 8018DD7C 8FA30044 */        lw $v1, 0x44($sp)
  /* 16A7A0 8018DD80 240B0005 */     addiu $t3, $zero, 5
  /* 16A7A4 8018DD84 AC6B0080 */        sw $t3, 0x80($v1)
  /* 16A7A8 8018DD88 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16A7AC 8018DD8C 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16A7B0 8018DD90 03E00008 */        jr $ra
  /* 16A7B4 8018DD94 00000000 */       nop 

glabel func_ovl39_8018DD98
  /* 16A7B8 8018DD98 3C028019 */       lui $v0, %hi(D_ovl39_8018E1F8)
  /* 16A7BC 8018DD9C 2442E1F8 */     addiu $v0, $v0, %lo(D_ovl39_8018E1F8)
  /* 16A7C0 8018DDA0 8C4E0000 */        lw $t6, ($v0) # D_ovl39_8018E1F8 + 0
  /* 16A7C4 8018DDA4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16A7C8 8018DDA8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16A7CC 8018DDAC AFA40018 */        sw $a0, 0x18($sp)
  /* 16A7D0 8018DDB0 25CF0001 */     addiu $t7, $t6, 1
  /* 16A7D4 8018DDB4 AC4F0000 */        sw $t7, ($v0) # D_ovl39_8018E1F8 + 0
  /* 16A7D8 8018DDB8 0C0E41DB */       jal func_ovl1_8039076C
  /* 16A7DC 8018DDBC 3404D000 */       ori $a0, $zero, 0xd000
  /* 16A7E0 8018DDC0 10400007 */      beqz $v0, .L8018DDE0
  /* 16A7E4 8018DDC4 24190001 */     addiu $t9, $zero, 1
  /* 16A7E8 8018DDC8 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16A7EC 8018DDCC 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16A7F0 8018DDD0 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16A7F4 8018DDD4 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16A7F8 8018DDD8 0C00171D */       jal func_80005C74
  /* 16A7FC 8018DDDC A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DDE0:
  /* 16A800 8018DDE0 3C028019 */       lui $v0, %hi(D_ovl39_8018E1F8)
  /* 16A804 8018DDE4 8C42E1F8 */        lw $v0, %lo(D_ovl39_8018E1F8)($v0)
  /* 16A808 8018DDE8 2401000F */     addiu $at, $zero, 0xf
  /* 16A80C 8018DDEC 3C048019 */       lui $a0, %hi(D_ovl39_8018E1FC)
  /* 16A810 8018DDF0 5441000C */      bnel $v0, $at, .L8018DE24
  /* 16A814 8018DDF4 2401003C */     addiu $at, $zero, 0x3c
  /* 16A818 8018DDF8 0C0026A1 */       jal omEjectGObjCommon
  /* 16A81C 8018DDFC 8C84E1FC */        lw $a0, %lo(D_ovl39_8018E1FC)($a0)
  /* 16A820 8018DE00 0C063587 */       jal func_ovl39_8018D61C
  /* 16A824 8018DE04 00000000 */       nop 
  /* 16A828 8018DE08 0C063653 */       jal func_ovl39_8018D94C
  /* 16A82C 8018DE0C 00000000 */       nop 
  /* 16A830 8018DE10 0C06369A */       jal func_ovl39_8018DA68
  /* 16A834 8018DE14 00000000 */       nop 
  /* 16A838 8018DE18 3C028019 */       lui $v0, %hi(D_ovl39_8018E1F8)
  /* 16A83C 8018DE1C 8C42E1F8 */        lw $v0, %lo(D_ovl39_8018E1F8)($v0)
  /* 16A840 8018DE20 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE24:
  /* 16A844 8018DE24 14410007 */       bne $v0, $at, .L8018DE44
  /* 16A848 8018DE28 24090024 */     addiu $t1, $zero, 0x24
  /* 16A84C 8018DE2C 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16A850 8018DE30 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16A854 8018DE34 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16A858 8018DE38 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16A85C 8018DE3C 0C00171D */       jal func_80005C74
  /* 16A860 8018DE40 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE44:
  /* 16A864 8018DE44 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16A868 8018DE48 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16A86C 8018DE4C 03E00008 */        jr $ra
  /* 16A870 8018DE50 00000000 */       nop 

glabel func_ovl39_8018DE54
  /* 16A874 8018DE54 3C018019 */       lui $at, %hi(D_ovl39_8018E1F8)
  /* 16A878 8018DE58 03E00008 */        jr $ra
  /* 16A87C 8018DE5C AC20E1F8 */        sw $zero, %lo(D_ovl39_8018E1F8)($at)

glabel func_ovl39_8018DE60
  /* 16A880 8018DE60 3C048019 */       lui $a0, %hi(D_ovl39_8018E418)
  /* 16A884 8018DE64 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16A888 8018DE68 2484E418 */     addiu $a0, $a0, %lo(D_ovl39_8018E418)
  /* 16A88C 8018DE6C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16A890 8018DE70 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 16A894 8018DE74 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 16A898 8018DE78 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 16A89C 8018DE7C AFBF001C */        sw $ra, 0x1c($sp)
  /* 16A8A0 8018DE80 24030001 */     addiu $v1, $zero, 1
  /* 16A8A4 8018DE84 24050004 */     addiu $a1, $zero, 4
  /* 16A8A8 8018DE88 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 16A8AC 8018DE8C 0080C825 */        or $t9, $a0, $zero
  .L8018DE90:
  /* 16A8B0 8018DE90 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16A8B4 8018DE94 25CE000C */     addiu $t6, $t6, 0xc
  /* 16A8B8 8018DE98 2739000C */     addiu $t9, $t9, 0xc
  /* 16A8BC 8018DE9C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16A8C0 8018DEA0 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 16A8C4 8018DEA4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16A8C8 8018DEA8 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 16A8CC 8018DEAC 15C8FFF8 */       bne $t6, $t0, .L8018DE90
  /* 16A8D0 8018DEB0 AF38FFFC */        sw $t8, -4($t9)
  /* 16A8D4 8018DEB4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16A8D8 8018DEB8 AF380000 */        sw $t8, ($t9)
  /* 16A8DC 8018DEBC AC440000 */        sw $a0, ($v0) # gpBattleState + 0
  /* 16A8E0 8018DEC0 A0850000 */        sb $a1, ($a0) # D_ovl39_8018E418 + 0
  /* 16A8E4 8018DEC4 A0830001 */        sb $v1, 1($a0) # D_ovl39_8018E418 + 1
  /* 16A8E8 8018DEC8 A0830004 */        sb $v1, 4($a0) # D_ovl39_8018E418 + 4
  /* 16A8EC 8018DECC A0830023 */        sb $v1, 0x23($a0) # D_ovl39_8018E418 + 35
  /* 16A8F0 8018DED0 0C063430 */       jal func_ovl39_8018D0C0
  /* 16A8F4 8018DED4 A0850022 */        sb $a1, 0x22($a0) # D_ovl39_8018E418 + 34
  /* 16A8F8 8018DED8 3C058019 */       lui $a1, %hi(func_ovl39_8018DD98)
  /* 16A8FC 8018DEDC 24A5DD98 */     addiu $a1, $a1, %lo(func_ovl39_8018DD98)
  /* 16A900 8018DEE0 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 16A904 8018DEE4 2406000D */     addiu $a2, $zero, 0xd
  /* 16A908 8018DEE8 0C00265A */       jal omMakeGObjCommon
  /* 16A90C 8018DEEC 3C078000 */       lui $a3, 0x8000
  /* 16A910 8018DEF0 240800FF */     addiu $t0, $zero, 0xff
  /* 16A914 8018DEF4 AFA80010 */        sw $t0, 0x10($sp)
  /* 16A918 8018DEF8 24040009 */     addiu $a0, $zero, 9
  /* 16A91C 8018DEFC 3C058000 */       lui $a1, 0x8000
  /* 16A920 8018DF00 24060064 */     addiu $a2, $zero, 0x64
  /* 16A924 8018DF04 0C002E7F */       jal func_8000B9FC
  /* 16A928 8018DF08 24070003 */     addiu $a3, $zero, 3
  /* 16A92C 8018DF0C 0C063795 */       jal func_ovl39_8018DE54
  /* 16A930 8018DF10 00000000 */       nop 
  /* 16A934 8018DF14 0C045624 */       jal func_ovl2_80115890
  /* 16A938 8018DF18 00000000 */       nop 
  /* 16A93C 8018DF1C 0C03B04C */       jal func_ovl2_800EC130
  /* 16A940 8018DF20 00000000 */       nop 
  /* 16A944 8018DF24 0C03F0A1 */       jal func_ovl2_800FC284
  /* 16A948 8018DF28 00000000 */       nop 
  /* 16A94C 8018DF2C 2404000A */     addiu $a0, $zero, 0xa
  /* 16A950 8018DF30 2405000A */     addiu $a1, $zero, 0xa
  /* 16A954 8018DF34 24060136 */     addiu $a2, $zero, 0x136
  /* 16A958 8018DF38 0C043966 */       jal func_ovl2_8010E598
  /* 16A95C 8018DF3C 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16A960 8018DF40 0C0436D5 */       jal func_ovl2_8010DB54
  /* 16A964 8018DF44 00000000 */       nop 
  /* 16A968 8018DF48 24040003 */     addiu $a0, $zero, 3
  /* 16A96C 8018DF4C 0C035C65 */       jal func_ovl2_800D7194
  /* 16A970 8018DF50 24050002 */     addiu $a1, $zero, 2
  /* 16A974 8018DF54 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 16A978 8018DF58 00000000 */       nop 
  /* 16A97C 8018DF5C 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 16A980 8018DF60 00000000 */       nop 
  /* 16A984 8018DF64 0C03F4C0 */       jal efManager_AllocUserData
  /* 16A988 8018DF68 00000000 */       nop 
  /* 16A98C 8018DF6C 0C035E1B */       jal func_ovl2_800D786C
  /* 16A990 8018DF70 24040001 */     addiu $a0, $zero, 1
  /* 16A994 8018DF74 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 16A998 8018DF78 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 16A99C 8018DF7C 0C001260 */       jal hal_alloc
  /* 16A9A0 8018DF80 24050010 */     addiu $a1, $zero, 0x10
  /* 16A9A4 8018DF84 3C018019 */       lui $at, %hi(D_ovl39_8018E20C)
  /* 16A9A8 8018DF88 0C0636DA */       jal func_ovl39_8018DB68
  /* 16A9AC 8018DF8C AC22E20C */        sw $v0, %lo(D_ovl39_8018E20C)($at)
  /* 16A9B0 8018DF90 0C06373C */       jal func_ovl39_8018DCF0
  /* 16A9B4 8018DF94 00000000 */       nop 
  /* 16A9B8 8018DF98 0C063702 */       jal func_ovl39_8018DC08
  /* 16A9BC 8018DF9C 00000000 */       nop 
  /* 16A9C0 8018DFA0 0C063465 */       jal func_ovl39_8018D194
  /* 16A9C4 8018DFA4 00000000 */       nop 
  /* 16A9C8 8018DFA8 0C00024B */       jal func_8000092C
  /* 16A9CC 8018DFAC 00000000 */       nop 
  /* 16A9D0 8018DFB0 2C410807 */     sltiu $at, $v0, 0x807
  /* 16A9D4 8018DFB4 50200007 */      beql $at, $zero, .L8018DFD4
  /* 16A9D8 8018DFB8 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFBC:
  /* 16A9DC 8018DFBC 0C00024B */       jal func_8000092C
  /* 16A9E0 8018DFC0 00000000 */       nop 
  /* 16A9E4 8018DFC4 2C410807 */     sltiu $at, $v0, 0x807
  /* 16A9E8 8018DFC8 1420FFFC */      bnez $at, .L8018DFBC
  /* 16A9EC 8018DFCC 00000000 */       nop 
  /* 16A9F0 8018DFD0 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFD4:
  /* 16A9F4 8018DFD4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16A9F8 8018DFD8 03E00008 */        jr $ra
  /* 16A9FC 8018DFDC 00000000 */       nop 

glabel func_ovl39_8018DFE0
  /* 16AA00 8018DFE0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16AA04 8018DFE4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16AA08 8018DFE8 8C830000 */        lw $v1, ($a0)
  /* 16AA0C 8018DFEC 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16AA10 8018DFF0 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16AA14 8018DFF4 246E0008 */     addiu $t6, $v1, 8
  /* 16AA18 8018DFF8 AC8E0000 */        sw $t6, ($a0)
  /* 16AA1C 8018DFFC 3C180002 */       lui $t8, 2
  /* 16AA20 8018E000 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 16AA24 8018E004 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16AA28 8018E008 AC780004 */        sw $t8, 4($v1)
  /* 16AA2C 8018E00C AC6F0000 */        sw $t7, ($v1)
  /* 16AA30 8018E010 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 16AA34 8018E014 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16AA38 8018E018 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 16AA3C 8018E01C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16AA40 8018E020 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16AA44 8018E024 03E00008 */        jr $ra
  /* 16AA48 8018E028 00000000 */       nop 

glabel intro_focus_fox_entry
  /* 16AA4C 8018E02C 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16AA50 8018E030 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16AA54 8018E034 3C048019 */       lui $a0, %hi(D_ovl39_8018E110)
  /* 16AA58 8018E038 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16AA5C 8018E03C 2484E110 */     addiu $a0, $a0, %lo(D_ovl39_8018E110)
  /* 16AA60 8018E040 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16AA64 8018E044 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16AA68 8018E048 0C001C09 */       jal func_80007024
  /* 16AA6C 8018E04C AC8F000C */        sw $t7, 0xc($a0) # D_ovl39_8018E110 + 12
  /* 16AA70 8018E050 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16AA74 8018E054 3C198019 */       lui $t9, %hi(D_NF_8018E610)
  /* 16AA78 8018E058 3C048019 */       lui $a0, %hi(D_ovl39_8018E12C)
  /* 16AA7C 8018E05C 2739E610 */     addiu $t9, $t9, %lo(D_NF_8018E610)
  /* 16AA80 8018E060 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16AA84 8018E064 2484E12C */     addiu $a0, $a0, %lo(D_ovl39_8018E12C)
  /* 16AA88 8018E068 03194023 */      subu $t0, $t8, $t9
  /* 16AA8C 8018E06C 0C001A0F */       jal func_8000683C
  /* 16AA90 8018E070 AC880010 */        sw $t0, 0x10($a0) # D_ovl39_8018E12C + 16
  /* 16AA94 8018E074 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16AA98 8018E078 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16AA9C 8018E07C 03E00008 */        jr $ra
  /* 16AAA0 8018E080 00000000 */       nop 

  /* 16AAA4 8018E084 00000000 */       nop 
  /* 16AAA8 8018E088 00000000 */       nop 
  /* 16AAAC 8018E08C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl39_8018E090   # Routine parsed as data
#  /* 16AAB0 8018E090 C3C80000 */        ll $t0, ($fp)
