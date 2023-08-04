.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E0B0

glabel func_ovl43_8018D0C0
  /* 16DFD0 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16DFD4 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 16DFD8 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16DFDC 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl43_8018E288)
  /* 16DFE0 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl43_8018E408)
  /* 16DFE4 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16DFE8 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16DFEC 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 16DFF0 8018D0E0 2718E288 */     addiu $t8, $t8, %lo(D_ovl43_8018E288)
  /* 16DFF4 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 16DFF8 8018D0E8 2508E408 */     addiu $t0, $t0, %lo(D_ovl43_8018E408)
  /* 16DFFC 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 16E000 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 16E004 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 16E008 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16E00C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 16E010 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 16E014 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 16E018 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16E01C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 16E020 8018D110 0C0337DE */       jal rldm_initialize
  /* 16E024 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 16E028 8018D118 3C048019 */       lui $a0, %hi(D_ovl43_8018E0F4)
  /* 16E02C 8018D11C 2484E0F4 */     addiu $a0, $a0, %lo(D_ovl43_8018E0F4)
  /* 16E030 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 16E034 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 16E038 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16E03C 8018D12C 0C001260 */       jal hal_alloc
  /* 16E040 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 16E044 8018D134 3C048019 */       lui $a0, %hi(D_ovl43_8018E0F4)
  /* 16E048 8018D138 3C068019 */       lui $a2, %hi(D_ovl43_8018E440)
  /* 16E04C 8018D13C 24C6E440 */     addiu $a2, $a2, %lo(D_ovl43_8018E440)
  /* 16E050 8018D140 2484E0F4 */     addiu $a0, $a0, %lo(D_ovl43_8018E0F4)
  /* 16E054 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 16E058 8018D148 0C033781 */       jal rldm_load_files_into
  /* 16E05C 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 16E060 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16E064 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16E068 8018D158 03E00008 */        jr $ra
  /* 16E06C 8018D15C 00000000 */       nop 

glabel func_ovl43_8018D160
  /* 16E070 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 16E074 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 16E078 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 16E07C 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 16E080 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 16E084 8018D174 37190001 */       ori $t9, $t8, 1
  /* 16E088 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 16E08C 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 16E090 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 16E094 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 16E098 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 16E09C 8018D18C 03E00008 */        jr $ra
  /* 16E0A0 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl43_8018D194
  /* 16E0A4 8018D194 27BDFF60 */     addiu $sp, $sp, -0xa0
  /* 16E0A8 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl43_8018E0FC)
  /* 16E0AC 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 16E0B0 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 16E0B4 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 16E0B8 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 16E0BC 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 16E0C0 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 16E0C4 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 16E0C8 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 16E0CC 8018D1BC 25EFE0FC */     addiu $t7, $t7, %lo(D_ovl43_8018E0FC)
  /* 16E0D0 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl43_8018E0FC + 0
  /* 16E0D4 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl43_8018E0FC + 4
  /* 16E0D8 8018D1C8 27AE0080 */     addiu $t6, $sp, 0x80
  /* 16E0DC 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 16E0E0 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 16E0E4 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl43_8018E0FC + 12
  /* 16E0E8 8018D1D8 8DF90008 */        lw $t9, 8($t7) # D_ovl43_8018E0FC + 8
  /* 16E0EC 8018D1DC 3C098019 */       lui $t1, %hi(D_ovl43_8018E114)
  /* 16E0F0 8018D1E0 ADD8000C */        sw $t8, 0xc($t6)
  /* 16E0F4 8018D1E4 ADD90008 */        sw $t9, 8($t6)
  /* 16E0F8 8018D1E8 8DF90010 */        lw $t9, 0x10($t7) # D_ovl43_8018E0FC + 16
  /* 16E0FC 8018D1EC 8DF80014 */        lw $t8, 0x14($t7) # D_ovl43_8018E0FC + 20
  /* 16E100 8018D1F0 2529E114 */     addiu $t1, $t1, %lo(D_ovl43_8018E114)
  /* 16E104 8018D1F4 3C108000 */       lui $s0, %hi(D_NF_80000008)
  /* 16E108 8018D1F8 252C0024 */     addiu $t4, $t1, 0x24
  /* 16E10C 8018D1FC 27A80058 */     addiu $t0, $sp, 0x58
  /* 16E110 8018D200 ADD90010 */        sw $t9, 0x10($t6)
  /* 16E114 8018D204 ADD80014 */        sw $t8, 0x14($t6)
  .L8018D208:
  /* 16E118 8018D208 8D2B0000 */        lw $t3, ($t1) # D_ovl43_8018E114 + 0
  /* 16E11C 8018D20C 2529000C */     addiu $t1, $t1, 0xc
  /* 16E120 8018D210 2508000C */     addiu $t0, $t0, 0xc
  /* 16E124 8018D214 AD0BFFF4 */        sw $t3, -0xc($t0)
  /* 16E128 8018D218 8D2AFFF8 */        lw $t2, -8($t1) # D_ovl43_8018E114 + -8
  /* 16E12C 8018D21C AD0AFFF8 */        sw $t2, -8($t0)
  /* 16E130 8018D220 8D2BFFFC */        lw $t3, -4($t1) # D_ovl43_8018E114 + -4
  /* 16E134 8018D224 152CFFF8 */       bne $t1, $t4, .L8018D208
  /* 16E138 8018D228 AD0BFFFC */        sw $t3, -4($t0)
  /* 16E13C 8018D22C 8D2B0000 */        lw $t3, ($t1) # D_ovl43_8018E114 + 0
  /* 16E140 8018D230 00002025 */        or $a0, $zero, $zero
  /* 16E144 8018D234 00002825 */        or $a1, $zero, $zero
  /* 16E148 8018D238 24060011 */     addiu $a2, $zero, 0x11
  /* 16E14C 8018D23C 02003825 */        or $a3, $s0, $zero
  /* 16E150 8018D240 0C00265A */       jal omMakeGObjCommon
  /* 16E154 8018D244 AD0B0000 */        sw $t3, ($t0)
  /* 16E158 8018D248 3C018019 */       lui $at, %hi(D_ovl43_8018E22C)
  /* 16E15C 8018D24C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16E160 8018D250 240DFFFF */     addiu $t5, $zero, -1
  /* 16E164 8018D254 AC22E22C */        sw $v0, %lo(D_ovl43_8018E22C)($at)
  /* 16E168 8018D258 0040A025 */        or $s4, $v0, $zero
  /* 16E16C 8018D25C AFAD0010 */        sw $t5, 0x10($sp)
  /* 16E170 8018D260 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16E174 8018D264 00402025 */        or $a0, $v0, $zero
  /* 16E178 8018D268 2406001B */     addiu $a2, $zero, 0x1b
  /* 16E17C 8018D26C 0C00277D */       jal func_80009DF4
  /* 16E180 8018D270 02003825 */        or $a3, $s0, $zero
  /* 16E184 8018D274 8FAE0080 */        lw $t6, 0x80($sp)
  /* 16E188 8018D278 27B10080 */     addiu $s1, $sp, 0x80
  /* 16E18C 8018D27C 27B00058 */     addiu $s0, $sp, 0x58
  /* 16E190 8018D280 11C0001E */      beqz $t6, .L8018D2FC
  /* 16E194 8018D284 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 16E198 8018D288 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 16E19C 8018D28C 3C0142B4 */       lui $at, (0x42B40000 >> 16) # 90.0
  /* 16E1A0 8018D290 3C128019 */       lui $s2, %hi(D_ovl43_8018E440)
  /* 16E1A4 8018D294 4481A000 */      mtc1 $at, $f20 # 90.0 to cop1
  /* 16E1A8 8018D298 2652E440 */     addiu $s2, $s2, %lo(D_ovl43_8018E440)
  /* 16E1AC 8018D29C 8E220000 */        lw $v0, ($s1)
  /* 16E1B0 8018D2A0 2413FFDF */     addiu $s3, $zero, -0x21
  /* 16E1B4 8018D2A4 8E580000 */        lw $t8, ($s2) # D_ovl43_8018E440 + 0
  .L8018D2A8:
  /* 16E1B8 8018D2A8 02802025 */        or $a0, $s4, $zero
  /* 16E1BC 8018D2AC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16E1C0 8018D2B0 00582821 */      addu $a1, $v0, $t8
  /* 16E1C4 8018D2B4 94590024 */       lhu $t9, 0x24($v0)
  /* 16E1C8 8018D2B8 00402025 */        or $a0, $v0, $zero
  /* 16E1CC 8018D2BC 03334824 */       and $t1, $t9, $s3
  /* 16E1D0 8018D2C0 A4490024 */        sh $t1, 0x24($v0)
  /* 16E1D4 8018D2C4 35280001 */       ori $t0, $t1, 1
  /* 16E1D8 8018D2C8 A4480024 */        sh $t0, 0x24($v0)
  /* 16E1DC 8018D2CC C6040000 */      lwc1 $f4, %lo(D_NF_80000000)($s0)
  /* 16E1E0 8018D2D0 46142180 */     add.s $f6, $f4, $f20
  /* 16E1E4 8018D2D4 E4460058 */      swc1 $f6, 0x58($v0)
  /* 16E1E8 8018D2D8 C6080004 */      lwc1 $f8, %lo(D_NF_80000004)($s0)
  /* 16E1EC 8018D2DC 46164280 */     add.s $f10, $f8, $f22
  /* 16E1F0 8018D2E0 0C063458 */       jal func_ovl43_8018D160
  /* 16E1F4 8018D2E4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 16E1F8 8018D2E8 8E220004 */        lw $v0, 4($s1)
  /* 16E1FC 8018D2EC 26310004 */     addiu $s1, $s1, 4
  /* 16E200 8018D2F0 26100008 */     addiu $s0, $s0, %lo(D_NF_80000008)
  /* 16E204 8018D2F4 5440FFEC */      bnel $v0, $zero, .L8018D2A8
  /* 16E208 8018D2F8 8E580000 */        lw $t8, ($s2) # D_ovl43_8018E440 + 0
  .L8018D2FC:
  /* 16E20C 8018D2FC 8FBF0044 */        lw $ra, 0x44($sp)
  /* 16E210 8018D300 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 16E214 8018D304 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 16E218 8018D308 8FB00030 */        lw $s0, 0x30($sp)
  /* 16E21C 8018D30C 8FB10034 */        lw $s1, 0x34($sp)
  /* 16E220 8018D310 8FB20038 */        lw $s2, 0x38($sp)
  /* 16E224 8018D314 8FB3003C */        lw $s3, 0x3c($sp)
  /* 16E228 8018D318 8FB40040 */        lw $s4, 0x40($sp)
  /* 16E22C 8018D31C 03E00008 */        jr $ra
  /* 16E230 8018D320 27BD00A0 */     addiu $sp, $sp, 0xa0

glabel func_ovl43_8018D324
  /* 16E234 8018D324 3C0E8019 */       lui $t6, %hi(D_ovl43_8018E228)
  /* 16E238 8018D328 8DCEE228 */        lw $t6, %lo(D_ovl43_8018E228)($t6)
  /* 16E23C 8018D32C 3C038019 */       lui $v1, %hi(D_ovl43_8018E268)
  /* 16E240 8018D330 8C820074 */        lw $v0, 0x74($a0)
  /* 16E244 8018D334 29C1000F */      slti $at, $t6, 0xf
  /* 16E248 8018D338 14200036 */      bnez $at, .L8018D414
  /* 16E24C 8018D33C 2463E268 */     addiu $v1, $v1, %lo(D_ovl43_8018E268)
  /* 16E250 8018D340 3C048019 */       lui $a0, %hi(D_ovl43_8018E248)
  /* 16E254 8018D344 2484E248 */     addiu $a0, $a0, %lo(D_ovl43_8018E248)
  /* 16E258 8018D348 C4860000 */      lwc1 $f6, ($a0) # D_ovl43_8018E248 + 0
  /* 16E25C 8018D34C C4640000 */      lwc1 $f4, ($v1) # D_ovl43_8018E268 + 0
  /* 16E260 8018D350 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 16E264 8018D354 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 16E268 8018D358 46062201 */     sub.s $f8, $f4, $f6
  /* 16E26C 8018D35C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 16E270 8018D360 46004283 */     div.s $f10, $f8, $f0
  /* 16E274 8018D364 460A8480 */     add.s $f18, $f16, $f10
  /* 16E278 8018D368 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 16E27C 8018D36C E452003C */      swc1 $f18, 0x3c($v0)
  /* 16E280 8018D370 C4860004 */      lwc1 $f6, 4($a0) # D_ovl43_8018E248 + 4
  /* 16E284 8018D374 C4640004 */      lwc1 $f4, 4($v1) # D_ovl43_8018E268 + 4
  /* 16E288 8018D378 46062201 */     sub.s $f8, $f4, $f6
  /* 16E28C 8018D37C 46004403 */     div.s $f16, $f8, $f0
  /* 16E290 8018D380 46105480 */     add.s $f18, $f10, $f16
  /* 16E294 8018D384 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 16E298 8018D388 E4520040 */      swc1 $f18, 0x40($v0)
  /* 16E29C 8018D38C C4860008 */      lwc1 $f6, 8($a0) # D_ovl43_8018E248 + 8
  /* 16E2A0 8018D390 C4640008 */      lwc1 $f4, 8($v1) # D_ovl43_8018E268 + 8
  /* 16E2A4 8018D394 46062201 */     sub.s $f8, $f4, $f6
  /* 16E2A8 8018D398 46004283 */     div.s $f10, $f8, $f0
  /* 16E2AC 8018D39C 460A8480 */     add.s $f18, $f16, $f10
  /* 16E2B0 8018D3A0 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 16E2B4 8018D3A4 E4520044 */      swc1 $f18, 0x44($v0)
  /* 16E2B8 8018D3A8 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl43_8018E248 + 12
  /* 16E2BC 8018D3AC C464000C */      lwc1 $f4, 0xc($v1) # D_ovl43_8018E268 + 12
  /* 16E2C0 8018D3B0 46062201 */     sub.s $f8, $f4, $f6
  /* 16E2C4 8018D3B4 46004403 */     div.s $f16, $f8, $f0
  /* 16E2C8 8018D3B8 46105480 */     add.s $f18, $f10, $f16
  /* 16E2CC 8018D3BC C450004C */      lwc1 $f16, 0x4c($v0)
  /* 16E2D0 8018D3C0 E4520048 */      swc1 $f18, 0x48($v0)
  /* 16E2D4 8018D3C4 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl43_8018E248 + 16
  /* 16E2D8 8018D3C8 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl43_8018E268 + 16
  /* 16E2DC 8018D3CC 46062201 */     sub.s $f8, $f4, $f6
  /* 16E2E0 8018D3D0 46004283 */     div.s $f10, $f8, $f0
  /* 16E2E4 8018D3D4 460A8480 */     add.s $f18, $f16, $f10
  /* 16E2E8 8018D3D8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 16E2EC 8018D3DC E452004C */      swc1 $f18, 0x4c($v0)
  /* 16E2F0 8018D3E0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl43_8018E248 + 20
  /* 16E2F4 8018D3E4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl43_8018E268 + 20
  /* 16E2F8 8018D3E8 46062201 */     sub.s $f8, $f4, $f6
  /* 16E2FC 8018D3EC 46004403 */     div.s $f16, $f8, $f0
  /* 16E300 8018D3F0 46105480 */     add.s $f18, $f10, $f16
  /* 16E304 8018D3F4 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 16E308 8018D3F8 E4520050 */      swc1 $f18, 0x50($v0)
  /* 16E30C 8018D3FC C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl43_8018E248 + 24
  /* 16E310 8018D400 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl43_8018E268 + 24
  /* 16E314 8018D404 46062201 */     sub.s $f8, $f4, $f6
  /* 16E318 8018D408 46004283 */     div.s $f10, $f8, $f0
  /* 16E31C 8018D40C 460A8480 */     add.s $f18, $f16, $f10
  /* 16E320 8018D410 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D414:
  /* 16E324 8018D414 03E00008 */        jr $ra
  /* 16E328 8018D418 00000000 */       nop 

glabel func_ovl43_8018D41C
  /* 16E32C 8018D41C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 16E330 8018D420 3C0E8019 */       lui $t6, %hi(D_ovl43_8018E0B0)
  /* 16E334 8018D424 AFBF002C */        sw $ra, 0x2c($sp)
  /* 16E338 8018D428 AFB20028 */        sw $s2, 0x28($sp)
  /* 16E33C 8018D42C AFB10024 */        sw $s1, 0x24($sp)
  /* 16E340 8018D430 AFB00020 */        sw $s0, 0x20($sp)
  /* 16E344 8018D434 AFA40030 */        sw $a0, 0x30($sp)
  /* 16E348 8018D438 AFA50034 */        sw $a1, 0x34($sp)
  /* 16E34C 8018D43C AFA60038 */        sw $a2, 0x38($sp)
  /* 16E350 8018D440 25CEE0B0 */     addiu $t6, $t6, %lo(D_ovl43_8018E0B0)
  /* 16E354 8018D444 8DD80000 */        lw $t8, ($t6) # D_ovl43_8018E0B0 + 0
  /* 16E358 8018D448 3C108019 */       lui $s0, %hi(D_ovl43_8018E248)
  /* 16E35C 8018D44C 2610E248 */     addiu $s0, $s0, %lo(D_ovl43_8018E248)
  /* 16E360 8018D450 AE180000 */        sw $t8, ($s0) # D_ovl43_8018E248 + 0
  /* 16E364 8018D454 8DCF0004 */        lw $t7, 4($t6) # D_ovl43_8018E0B0 + 4
  /* 16E368 8018D458 3C198019 */       lui $t9, %hi(D_ovl43_8018E0CC)
  /* 16E36C 8018D45C 2739E0CC */     addiu $t9, $t9, %lo(D_ovl43_8018E0CC)
  /* 16E370 8018D460 AE0F0004 */        sw $t7, 4($s0) # D_ovl43_8018E248 + 4
  /* 16E374 8018D464 8DD80008 */        lw $t8, 8($t6) # D_ovl43_8018E0B0 + 8
  /* 16E378 8018D468 3C118019 */       lui $s1, %hi(D_ovl43_8018E268)
  /* 16E37C 8018D46C 2631E268 */     addiu $s1, $s1, %lo(D_ovl43_8018E268)
  /* 16E380 8018D470 AE180008 */        sw $t8, 8($s0) # D_ovl43_8018E248 + 8
  /* 16E384 8018D474 8DCF000C */        lw $t7, 0xc($t6) # D_ovl43_8018E0B0 + 12
  /* 16E388 8018D478 00002025 */        or $a0, $zero, $zero
  /* 16E38C 8018D47C AE0F000C */        sw $t7, 0xc($s0) # D_ovl43_8018E248 + 12
  /* 16E390 8018D480 8DD80010 */        lw $t8, 0x10($t6) # D_ovl43_8018E0B0 + 16
  /* 16E394 8018D484 AE180010 */        sw $t8, 0x10($s0) # D_ovl43_8018E248 + 16
  /* 16E398 8018D488 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl43_8018E0B0 + 20
  /* 16E39C 8018D48C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl43_8018E248 + 20
  /* 16E3A0 8018D490 8DD80018 */        lw $t8, 0x18($t6) # D_ovl43_8018E0B0 + 24
  /* 16E3A4 8018D494 AE180018 */        sw $t8, 0x18($s0) # D_ovl43_8018E248 + 24
  /* 16E3A8 8018D498 8F290000 */        lw $t1, ($t9) # D_ovl43_8018E0CC + 0
  /* 16E3AC 8018D49C AE290000 */        sw $t1, ($s1) # D_ovl43_8018E268 + 0
  /* 16E3B0 8018D4A0 8F280004 */        lw $t0, 4($t9) # D_ovl43_8018E0CC + 4
  /* 16E3B4 8018D4A4 AE280004 */        sw $t0, 4($s1) # D_ovl43_8018E268 + 4
  /* 16E3B8 8018D4A8 8F290008 */        lw $t1, 8($t9) # D_ovl43_8018E0CC + 8
  /* 16E3BC 8018D4AC AE290008 */        sw $t1, 8($s1) # D_ovl43_8018E268 + 8
  /* 16E3C0 8018D4B0 8F28000C */        lw $t0, 0xc($t9) # D_ovl43_8018E0CC + 12
  /* 16E3C4 8018D4B4 AE28000C */        sw $t0, 0xc($s1) # D_ovl43_8018E268 + 12
  /* 16E3C8 8018D4B8 8F290010 */        lw $t1, 0x10($t9) # D_ovl43_8018E0CC + 16
  /* 16E3CC 8018D4BC AE290010 */        sw $t1, 0x10($s1) # D_ovl43_8018E268 + 16
  /* 16E3D0 8018D4C0 8F280014 */        lw $t0, 0x14($t9) # D_ovl43_8018E0CC + 20
  /* 16E3D4 8018D4C4 AE280014 */        sw $t0, 0x14($s1) # D_ovl43_8018E268 + 20
  /* 16E3D8 8018D4C8 8F290018 */        lw $t1, 0x18($t9) # D_ovl43_8018E0CC + 24
  /* 16E3DC 8018D4CC 0C0436CB */       jal func_ovl2_8010DB2C
  /* 16E3E0 8018D4D0 AE290018 */        sw $t1, 0x18($s1) # D_ovl43_8018E268 + 24
  /* 16E3E4 8018D4D4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16E3E8 8018D4D8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16E3EC 8018D4DC 3C038019 */       lui $v1, %hi(D_ovl43_8018E238)
  /* 16E3F0 8018D4E0 2463E238 */     addiu $v1, $v1, %lo(D_ovl43_8018E238)
  /* 16E3F4 8018D4E4 AC620000 */        sw $v0, ($v1) # D_ovl43_8018E238 + 0
  /* 16E3F8 8018D4E8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16E3FC 8018D4EC 8C520074 */        lw $s2, 0x74($v0)
  /* 16E400 8018D4F0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16E404 8018D4F4 44050000 */      mfc1 $a1, $f0
  /* 16E408 8018D4F8 44060000 */      mfc1 $a2, $f0
  /* 16E40C 8018D4FC 3C074352 */       lui $a3, 0x4352
  /* 16E410 8018D500 26440008 */     addiu $a0, $s2, 8
  /* 16E414 8018D504 0C001C20 */       jal func_80007080
  /* 16E418 8018D508 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16E41C 8018D50C 3C018019 */       lui $at, %hi(D_ovl43_8018E20C)
  /* 16E420 8018D510 C426E20C */      lwc1 $f6, %lo(D_ovl43_8018E20C)($at)
  /* 16E424 8018D514 3C048019 */       lui $a0, %hi(D_ovl43_8018E238)
  /* 16E428 8018D518 E6460024 */      swc1 $f6, 0x24($s2)
  /* 16E42C 8018D51C 0C002CE7 */       jal func_8000B39C
  /* 16E430 8018D520 8C84E238 */        lw $a0, %lo(D_ovl43_8018E238)($a0)
  /* 16E434 8018D524 3C048019 */       lui $a0, %hi(D_ovl43_8018E238)
  /* 16E438 8018D528 3C058019 */       lui $a1, %hi(func_ovl43_8018D324)
  /* 16E43C 8018D52C 24A5D324 */     addiu $a1, $a1, %lo(func_ovl43_8018D324)
  /* 16E440 8018D530 8C84E238 */        lw $a0, %lo(D_ovl43_8018E238)($a0)
  /* 16E444 8018D534 24060001 */     addiu $a2, $zero, 1
  /* 16E448 8018D538 0C002062 */       jal omAddGObjCommonProc
  /* 16E44C 8018D53C 24070001 */     addiu $a3, $zero, 1
  /* 16E450 8018D540 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 16E454 8018D544 C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 16E458 8018D548 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 16E45C 8018D54C C6080000 */      lwc1 $f8, ($s0) # D_ovl43_8018E248 + 0
  /* 16E460 8018D550 C6100004 */      lwc1 $f16, 4($s0) # D_ovl43_8018E248 + 4
  /* 16E464 8018D554 C6040008 */      lwc1 $f4, 8($s0) # D_ovl43_8018E248 + 8
  /* 16E468 8018D558 46004280 */     add.s $f10, $f8, $f0
  /* 16E46C 8018D55C C608000C */      lwc1 $f8, 0xc($s0) # D_ovl43_8018E248 + 12
  /* 16E470 8018D560 46028480 */     add.s $f18, $f16, $f2
  /* 16E474 8018D564 C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl43_8018E248 + 16
  /* 16E478 8018D568 E60A0000 */      swc1 $f10, ($s0) # D_ovl43_8018E248 + 0
  /* 16E47C 8018D56C 460C2180 */     add.s $f6, $f4, $f12
  /* 16E480 8018D570 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl43_8018E248 + 20
  /* 16E484 8018D574 E6120004 */      swc1 $f18, 4($s0) # D_ovl43_8018E248 + 4
  /* 16E488 8018D578 46004280 */     add.s $f10, $f8, $f0
  /* 16E48C 8018D57C E6060008 */      swc1 $f6, 8($s0) # D_ovl43_8018E248 + 8
  /* 16E490 8018D580 C6280000 */      lwc1 $f8, ($s1) # D_ovl43_8018E268 + 0
  /* 16E494 8018D584 46028480 */     add.s $f18, $f16, $f2
  /* 16E498 8018D588 C6300004 */      lwc1 $f16, 4($s1) # D_ovl43_8018E268 + 4
  /* 16E49C 8018D58C E60A000C */      swc1 $f10, 0xc($s0) # D_ovl43_8018E248 + 12
  /* 16E4A0 8018D590 460C2180 */     add.s $f6, $f4, $f12
  /* 16E4A4 8018D594 C6240008 */      lwc1 $f4, 8($s1) # D_ovl43_8018E268 + 8
  /* 16E4A8 8018D598 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl43_8018E248 + 16
  /* 16E4AC 8018D59C 46004280 */     add.s $f10, $f8, $f0
  /* 16E4B0 8018D5A0 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl43_8018E248 + 20
  /* 16E4B4 8018D5A4 C628000C */      lwc1 $f8, 0xc($s1) # D_ovl43_8018E268 + 12
  /* 16E4B8 8018D5A8 46028480 */     add.s $f18, $f16, $f2
  /* 16E4BC 8018D5AC C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl43_8018E268 + 16
  /* 16E4C0 8018D5B0 E62A0000 */      swc1 $f10, ($s1) # D_ovl43_8018E268 + 0
  /* 16E4C4 8018D5B4 460C2180 */     add.s $f6, $f4, $f12
  /* 16E4C8 8018D5B8 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl43_8018E268 + 20
  /* 16E4CC 8018D5BC E6320004 */      swc1 $f18, 4($s1) # D_ovl43_8018E268 + 4
  /* 16E4D0 8018D5C0 46004280 */     add.s $f10, $f8, $f0
  /* 16E4D4 8018D5C4 E6260008 */      swc1 $f6, 8($s1) # D_ovl43_8018E268 + 8
  /* 16E4D8 8018D5C8 C6080000 */      lwc1 $f8, ($s0) # D_ovl43_8018E248 + 0
  /* 16E4DC 8018D5CC 46028480 */     add.s $f18, $f16, $f2
  /* 16E4E0 8018D5D0 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl43_8018E268 + 12
  /* 16E4E4 8018D5D4 460C2180 */     add.s $f6, $f4, $f12
  /* 16E4E8 8018D5D8 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl43_8018E268 + 16
  /* 16E4EC 8018D5DC E6260014 */      swc1 $f6, 0x14($s1) # D_ovl43_8018E268 + 20
  /* 16E4F0 8018D5E0 E648003C */      swc1 $f8, 0x3c($s2)
  /* 16E4F4 8018D5E4 C60A0004 */      lwc1 $f10, 4($s0) # D_ovl43_8018E248 + 4
  /* 16E4F8 8018D5E8 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 16E4FC 8018D5EC C6100008 */      lwc1 $f16, 8($s0) # D_ovl43_8018E248 + 8
  /* 16E500 8018D5F0 E6500044 */      swc1 $f16, 0x44($s2)
  /* 16E504 8018D5F4 C612000C */      lwc1 $f18, 0xc($s0) # D_ovl43_8018E248 + 12
  /* 16E508 8018D5F8 E6520048 */      swc1 $f18, 0x48($s2)
  /* 16E50C 8018D5FC C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl43_8018E248 + 16
  /* 16E510 8018D600 E644004C */      swc1 $f4, 0x4c($s2)
  /* 16E514 8018D604 C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl43_8018E248 + 20
  /* 16E518 8018D608 E6460050 */      swc1 $f6, 0x50($s2)
  /* 16E51C 8018D60C C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl43_8018E248 + 24
  /* 16E520 8018D610 E6480054 */      swc1 $f8, 0x54($s2)
  /* 16E524 8018D614 8FBF002C */        lw $ra, 0x2c($sp)
  /* 16E528 8018D618 8FB20028 */        lw $s2, 0x28($sp)
  /* 16E52C 8018D61C 8FB10024 */        lw $s1, 0x24($sp)
  /* 16E530 8018D620 8FB00020 */        lw $s0, 0x20($sp)
  /* 16E534 8018D624 03E00008 */        jr $ra
  /* 16E538 8018D628 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl43_8018D62C
  /* 16E53C 8018D62C 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 16E540 8018D630 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16E544 8018D634 AFBE0038 */        sw $fp, 0x38($sp)
  /* 16E548 8018D638 AFB70034 */        sw $s7, 0x34($sp)
  /* 16E54C 8018D63C AFB60030 */        sw $s6, 0x30($sp)
  /* 16E550 8018D640 AFB5002C */        sw $s5, 0x2c($sp)
  /* 16E554 8018D644 AFB40028 */        sw $s4, 0x28($sp)
  /* 16E558 8018D648 AFB30024 */        sw $s3, 0x24($sp)
  /* 16E55C 8018D64C AFB20020 */        sw $s2, 0x20($sp)
  /* 16E560 8018D650 AFB1001C */        sw $s1, 0x1c($sp)
  /* 16E564 8018D654 0C0412F7 */       jal func_ovl2_80104BDC
  /* 16E568 8018D658 AFB00018 */        sw $s0, 0x18($sp)
  /* 16E56C 8018D65C 0C041580 */       jal func_ovl2_80105600
  /* 16E570 8018D660 00000000 */       nop 
  /* 16E574 8018D664 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 16E578 8018D668 24040015 */     addiu $a0, $zero, 0x15
  /* 16E57C 8018D66C 24010001 */     addiu $at, $zero, 1
  /* 16E580 8018D670 10410009 */       beq $v0, $at, .L8018D698
  /* 16E584 8018D674 24040015 */     addiu $a0, $zero, 0x15
  /* 16E588 8018D678 3C108019 */       lui $s0, %hi(D_ovl43_8018E1F0)
  /* 16E58C 8018D67C 2610E1F0 */     addiu $s0, $s0, %lo(D_ovl43_8018E1F0)
  .L8018D680:
  /* 16E590 8018D680 0C008D89 */       jal fatal_printf
  /* 16E594 8018D684 02002025 */        or $a0, $s0, $zero
  /* 16E598 8018D688 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 16E59C 8018D68C 00000000 */       nop 
  /* 16E5A0 8018D690 1000FFFB */         b .L8018D680
  /* 16E5A4 8018D694 00000000 */       nop 
  .L8018D698:
  /* 16E5A8 8018D698 0C03F205 */       jal func_ovl2_800FC814
  /* 16E5AC 8018D69C 27A5009C */     addiu $a1, $sp, 0x9c
  /* 16E5B0 8018D6A0 27B00090 */     addiu $s0, $sp, 0x90
  /* 16E5B4 8018D6A4 02002825 */        or $a1, $s0, $zero
  /* 16E5B8 8018D6A8 0C03F225 */       jal func_ovl2_800FC894
  /* 16E5BC 8018D6AC 8FA4009C */        lw $a0, 0x9c($sp)
  /* 16E5C0 8018D6B0 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 16E5C4 8018D6B4 44813000 */      mtc1 $at, $f6 # 30.0 to cop1
  /* 16E5C8 8018D6B8 C7A40094 */      lwc1 $f4, 0x94($sp)
  /* 16E5CC 8018D6BC 46062200 */     add.s $f8, $f4, $f6
  /* 16E5D0 8018D6C0 E7A80094 */      swc1 $f8, 0x94($sp)
  /* 16E5D4 8018D6C4 8E0F0000 */        lw $t7, ($s0) # D_ovl43_8018E1F0 + 0
  /* 16E5D8 8018D6C8 AFAF0000 */        sw $t7, ($sp)
  /* 16E5DC 8018D6CC 8E050004 */        lw $a1, 4($s0) # D_ovl43_8018E1F0 + 4
  /* 16E5E0 8018D6D0 8FA40000 */        lw $a0, ($sp)
  /* 16E5E4 8018D6D4 AFA50004 */        sw $a1, 4($sp)
  /* 16E5E8 8018D6D8 8E060008 */        lw $a2, 8($s0) # D_ovl43_8018E1F0 + 8
  /* 16E5EC 8018D6DC 0C063507 */       jal func_ovl43_8018D41C
  /* 16E5F0 8018D6E0 AFA60008 */        sw $a2, 8($sp)
  /* 16E5F4 8018D6E4 0C0455B9 */       jal func_ovl2_801156E4
  /* 16E5F8 8018D6E8 00000000 */       nop 
  /* 16E5FC 8018D6EC 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 16E600 8018D6F0 00000000 */       nop 
  /* 16E604 8018D6F4 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 16E608 8018D6F8 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 16E60C 8018D6FC 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 16E610 8018D700 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 16E614 8018D704 00008825 */        or $s1, $zero, $zero
  /* 16E618 8018D708 00009025 */        or $s2, $zero, $zero
  /* 16E61C 8018D70C 241E0004 */     addiu $fp, $zero, 4
  /* 16E620 8018D710 24170002 */     addiu $s7, $zero, 2
  /* 16E624 8018D714 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D718:
  /* 16E628 8018D718 02C04025 */        or $t0, $s6, $zero
  /* 16E62C 8018D71C 02804825 */        or $t1, $s4, $zero
  /* 16E630 8018D720 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D724:
  /* 16E634 8018D724 8D190000 */        lw $t9, ($t0)
  /* 16E638 8018D728 2508000C */     addiu $t0, $t0, 0xc
  /* 16E63C 8018D72C 2529000C */     addiu $t1, $t1, 0xc
  /* 16E640 8018D730 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 16E644 8018D734 8D18FFF8 */        lw $t8, -8($t0)
  /* 16E648 8018D738 AD38FFF8 */        sw $t8, -8($t1)
  /* 16E64C 8018D73C 8D19FFFC */        lw $t9, -4($t0)
  /* 16E650 8018D740 150AFFF8 */       bne $t0, $t2, .L8018D724
  /* 16E654 8018D744 AD39FFFC */        sw $t9, -4($t1)
  /* 16E658 8018D748 8D190000 */        lw $t9, ($t0)
  /* 16E65C 8018D74C 00116880 */       sll $t5, $s1, 2
  /* 16E660 8018D750 01B16821 */      addu $t5, $t5, $s1
  /* 16E664 8018D754 AD390000 */        sw $t9, ($t1)
  /* 16E668 8018D758 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 16E66C 8018D75C 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 16E670 8018D760 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 16E674 8018D764 01728021 */      addu $s0, $t3, $s2
  /* 16E678 8018D768 920C0022 */       lbu $t4, 0x22($s0) # D_ovl43_8018E1F0 + 34
  /* 16E67C 8018D76C 000D6840 */       sll $t5, $t5, 1
  /* 16E680 8018D770 01AE9821 */      addu $s3, $t5, $t6
  /* 16E684 8018D774 52EC0030 */      beql $s7, $t4, .L8018D838
  /* 16E688 8018D778 26310001 */     addiu $s1, $s1, 1
  /* 16E68C 8018D77C 0C035E1B */       jal func_ovl2_800D786C
  /* 16E690 8018D780 92040023 */       lbu $a0, 0x23($s0) # D_ovl43_8018E1F0 + 35
  /* 16E694 8018D784 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 16E698 8018D788 C7AA0090 */      lwc1 $f10, 0x90($sp)
  /* 16E69C 8018D78C C7B00094 */      lwc1 $f16, 0x94($sp)
  /* 16E6A0 8018D790 00528021 */      addu $s0, $v0, $s2
  /* 16E6A4 8018D794 920F0023 */       lbu $t7, 0x23($s0) # D_ovl43_8018E1F0 + 35
  /* 16E6A8 8018D798 C7B20098 */      lwc1 $f18, 0x98($sp)
  /* 16E6AC 8018D79C 240A0001 */     addiu $t2, $zero, 1
  /* 16E6B0 8018D7A0 AFAA0060 */        sw $t2, 0x60($sp)
  /* 16E6B4 8018D7A4 E7AA0054 */      swc1 $f10, 0x54($sp)
  /* 16E6B8 8018D7A8 E7B00058 */      swc1 $f16, 0x58($sp)
  /* 16E6BC 8018D7AC AFAF0050 */        sw $t7, 0x50($sp)
  /* 16E6C0 8018D7B0 E7B2005C */      swc1 $f18, 0x5c($sp)
  /* 16E6C4 8018D7B4 92080024 */       lbu $t0, 0x24($s0) # D_ovl43_8018E1F0 + 36
  /* 16E6C8 8018D7B8 24090001 */     addiu $t1, $zero, 1
  /* 16E6CC 8018D7BC A3B10065 */        sb $s1, 0x65($sp)
  /* 16E6D0 8018D7C0 A3A90066 */        sb $t1, 0x66($sp)
  /* 16E6D4 8018D7C4 A3A80064 */        sb $t0, 0x64($sp)
  /* 16E6D8 8018D7C8 92180026 */       lbu $t8, 0x26($s0) # D_ovl43_8018E1F0 + 38
  /* 16E6DC 8018D7CC A3B80067 */        sb $t8, 0x67($sp)
  /* 16E6E0 8018D7D0 92190021 */       lbu $t9, 0x21($s0) # D_ovl43_8018E1F0 + 33
  /* 16E6E4 8018D7D4 A3B90069 */        sb $t9, 0x69($sp)
  /* 16E6E8 8018D7D8 920B0020 */       lbu $t3, 0x20($s0) # D_ovl43_8018E1F0 + 32
  /* 16E6EC 8018D7DC A3AB006A */        sb $t3, 0x6a($sp)
  /* 16E6F0 8018D7E0 904C0007 */       lbu $t4, 7($v0)
  /* 16E6F4 8018D7E4 AFA00074 */        sw $zero, 0x74($sp)
  /* 16E6F8 8018D7E8 A3AC006B */        sb $t4, 0x6b($sp)
  /* 16E6FC 8018D7EC 920D0022 */       lbu $t5, 0x22($s0) # D_ovl43_8018E1F0 + 34
  /* 16E700 8018D7F0 AFB3007C */        sw $s3, 0x7c($sp)
  /* 16E704 8018D7F4 AFAD0078 */        sw $t5, 0x78($sp)
  /* 16E708 8018D7F8 0C035E2D */       jal func_ovl2_800D78B4
  /* 16E70C 8018D7FC 92040023 */       lbu $a0, 0x23($s0) # D_ovl43_8018E1F0 + 35
  /* 16E710 8018D800 AFA20088 */        sw $v0, 0x88($sp)
  /* 16E714 8018D804 0C035FCF */       jal ftManager_CreateFighter
  /* 16E718 8018D808 02802025 */        or $a0, $s4, $zero
  /* 16E71C 8018D80C 3C018019 */       lui $at, %hi(D_ovl43_8018E230)
  /* 16E720 8018D810 AC22E230 */        sw $v0, %lo(D_ovl43_8018E230)($at)
  /* 16E724 8018D814 00408025 */        or $s0, $v0, $zero
  /* 16E728 8018D818 02202025 */        or $a0, $s1, $zero
  /* 16E72C 8018D81C 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 16E730 8018D820 00402825 */        or $a1, $v0, $zero
  /* 16E734 8018D824 3C058019 */       lui $a1, %hi(D_ovl43_8018E0E8)
  /* 16E738 8018D828 24A5E0E8 */     addiu $a1, $a1, %lo(D_ovl43_8018E0E8)
  /* 16E73C 8018D82C 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 16E740 8018D830 02002025 */        or $a0, $s0, $zero
  /* 16E744 8018D834 26310001 */     addiu $s1, $s1, 1
  .L8018D838:
  /* 16E748 8018D838 163EFFB7 */       bne $s1, $fp, .L8018D718
  /* 16E74C 8018D83C 26520074 */     addiu $s2, $s2, 0x74
  /* 16E750 8018D840 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16E754 8018D844 8FB00018 */        lw $s0, 0x18($sp)
  /* 16E758 8018D848 8FB1001C */        lw $s1, 0x1c($sp)
  /* 16E75C 8018D84C 8FB20020 */        lw $s2, 0x20($sp)
  /* 16E760 8018D850 8FB30024 */        lw $s3, 0x24($sp)
  /* 16E764 8018D854 8FB40028 */        lw $s4, 0x28($sp)
  /* 16E768 8018D858 8FB5002C */        lw $s5, 0x2c($sp)
  /* 16E76C 8018D85C 8FB60030 */        lw $s6, 0x30($sp)
  /* 16E770 8018D860 8FB70034 */        lw $s7, 0x34($sp)
  /* 16E774 8018D864 8FBE0038 */        lw $fp, 0x38($sp)
  /* 16E778 8018D868 03E00008 */        jr $ra
  /* 16E77C 8018D86C 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl43_8018D870
  /* 16E780 8018D870 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 16E784 8018D874 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 16E788 8018D878 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E78C 8018D87C AFA40000 */        sw $a0, ($sp)
  /* 16E790 8018D880 3C0CE700 */       lui $t4, 0xe700
  /* 16E794 8018D884 246E0008 */     addiu $t6, $v1, 8
  /* 16E798 8018D888 AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 16E79C 8018D88C AC600004 */        sw $zero, 4($v1)
  /* 16E7A0 8018D890 AC6C0000 */        sw $t4, ($v1)
  /* 16E7A4 8018D894 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E7A8 8018D898 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 16E7AC 8018D89C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16E7B0 8018D8A0 246F0008 */     addiu $t7, $v1, 8
  /* 16E7B4 8018D8A4 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16E7B8 8018D8A8 AC600004 */        sw $zero, 4($v1)
  /* 16E7BC 8018D8AC AC780000 */        sw $t8, ($v1)
  /* 16E7C0 8018D8B0 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E7C4 8018D8B4 3C0F50AA */       lui $t7, (0x50AAFFFF >> 16) # 1353383935
  /* 16E7C8 8018D8B8 35EFFFFF */       ori $t7, $t7, (0x50AAFFFF & 0xFFFF) # 1353383935
  /* 16E7CC 8018D8BC 24790008 */     addiu $t9, $v1, 8
  /* 16E7D0 8018D8C0 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16E7D4 8018D8C4 3C0EFA00 */       lui $t6, 0xfa00
  /* 16E7D8 8018D8C8 AC6E0000 */        sw $t6, ($v1)
  /* 16E7DC 8018D8CC AC6F0004 */        sw $t7, 4($v1)
  /* 16E7E0 8018D8D0 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E7E4 8018D8D4 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16E7E8 8018D8D8 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 16E7EC 8018D8DC 24780008 */     addiu $t8, $v1, 8
  /* 16E7F0 8018D8E0 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16E7F4 8018D8E4 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16E7F8 8018D8E8 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 16E7FC 8018D8EC AC6E0004 */        sw $t6, 4($v1)
  /* 16E800 8018D8F0 AC790000 */        sw $t9, ($v1)
  /* 16E804 8018D8F4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E808 8018D8F8 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 16E80C 8018D8FC 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 16E810 8018D900 246F0008 */     addiu $t7, $v1, 8
  /* 16E814 8018D904 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16E818 8018D908 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 16E81C 8018D90C 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 16E820 8018D910 AC780004 */        sw $t8, 4($v1)
  /* 16E824 8018D914 AC6D0000 */        sw $t5, ($v1)
  /* 16E828 8018D918 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E82C 8018D91C 3C0F0034 */       lui $t7, (0x348028 >> 16) # 3440680
  /* 16E830 8018D920 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 16E834 8018D924 24790008 */     addiu $t9, $v1, 8
  /* 16E838 8018D928 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16E83C 8018D92C 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 16E840 8018D930 35EF8028 */       ori $t7, $t7, (0x348028 & 0xFFFF) # 3440680
  /* 16E844 8018D934 AC6F0004 */        sw $t7, 4($v1)
  /* 16E848 8018D938 AC6E0000 */        sw $t6, ($v1)
  /* 16E84C 8018D93C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E850 8018D940 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 16E854 8018D944 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16E858 8018D948 24780008 */     addiu $t8, $v1, 8
  /* 16E85C 8018D94C AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16E860 8018D950 AC600004 */        sw $zero, 4($v1)
  /* 16E864 8018D954 AC6C0000 */        sw $t4, ($v1)
  /* 16E868 8018D958 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16E86C 8018D95C 24790008 */     addiu $t9, $v1, 8
  /* 16E870 8018D960 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16E874 8018D964 AC6E0004 */        sw $t6, 4($v1)
  /* 16E878 8018D968 03E00008 */        jr $ra
  /* 16E87C 8018D96C AC6D0000 */        sw $t5, ($v1)

glabel func_ovl43_8018D970
  /* 16E880 8018D970 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16E884 8018D974 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16E888 8018D978 00002025 */        or $a0, $zero, $zero
  /* 16E88C 8018D97C 00002825 */        or $a1, $zero, $zero
  /* 16E890 8018D980 24060013 */     addiu $a2, $zero, 0x13
  /* 16E894 8018D984 0C00265A */       jal omMakeGObjCommon
  /* 16E898 8018D988 3C078000 */       lui $a3, 0x8000
  /* 16E89C 8018D98C 3C058019 */       lui $a1, %hi(func_ovl43_8018D870)
  /* 16E8A0 8018D990 240EFFFF */     addiu $t6, $zero, -1
  /* 16E8A4 8018D994 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16E8A8 8018D998 24A5D870 */     addiu $a1, $a1, %lo(func_ovl43_8018D870)
  /* 16E8AC 8018D99C 00402025 */        or $a0, $v0, $zero
  /* 16E8B0 8018D9A0 2406001C */     addiu $a2, $zero, 0x1c
  /* 16E8B4 8018D9A4 0C00277D */       jal func_80009DF4
  /* 16E8B8 8018D9A8 3C078000 */       lui $a3, 0x8000
  /* 16E8BC 8018D9AC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16E8C0 8018D9B0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16E8C4 8018D9B4 03E00008 */        jr $ra
  /* 16E8C8 8018D9B8 00000000 */       nop 

glabel func_ovl43_8018D9BC
  /* 16E8CC 8018D9BC 3C038019 */       lui $v1, %hi(D_ovl43_8018E228)
  /* 16E8D0 8018D9C0 8C63E228 */        lw $v1, %lo(D_ovl43_8018E228)($v1)
  /* 16E8D4 8018D9C4 2401000F */     addiu $at, $zero, 0xf
  /* 16E8D8 8018D9C8 3C058019 */       lui $a1, 0x8019
  /* 16E8DC 8018D9CC 10610009 */       beq $v1, $at, .L8018D9F4
  /* 16E8E0 8018D9D0 00601025 */        or $v0, $v1, $zero
  /* 16E8E4 8018D9D4 2401002D */     addiu $at, $zero, 0x2d
  /* 16E8E8 8018D9D8 1041000B */       beq $v0, $at, .L8018DA08
  /* 16E8EC 8018D9DC 3C058019 */       lui $a1, 0x8019
  /* 16E8F0 8018D9E0 2401003C */     addiu $at, $zero, 0x3c
  /* 16E8F4 8018D9E4 1041000D */       beq $v0, $at, .L8018DA1C
  /* 16E8F8 8018D9E8 3C058019 */       lui $a1, %hi(D_ovl43_8018E240)
  /* 16E8FC 8018D9EC 1000000F */         b .L8018DA2C
  /* 16E900 8018D9F0 24A5E240 */     addiu $a1, $a1, %lo(D_ovl43_8018E240)
  .L8018D9F4:
  /* 16E904 8018D9F4 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16E908 8018D9F8 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 16E90C 8018D9FC 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16E910 8018DA00 1000000A */         b .L8018DA2C
  /* 16E914 8018DA04 E4A40000 */      swc1 $f4, ($a1) # D_ovl43_8018E240 + 0
  .L8018DA08:
  /* 16E918 8018DA08 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 16E91C 8018DA0C 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 16E920 8018DA10 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16E924 8018DA14 10000005 */         b .L8018DA2C
  /* 16E928 8018DA18 E4A60000 */      swc1 $f6, ($a1) # D_ovl43_8018E240 + 0
  .L8018DA1C:
  /* 16E92C 8018DA1C 44804000 */      mtc1 $zero, $f8
  /* 16E930 8018DA20 3C058019 */       lui $a1, %hi(D_ovl43_8018E240)
  /* 16E934 8018DA24 24A5E240 */     addiu $a1, $a1, %lo(D_ovl43_8018E240)
  /* 16E938 8018DA28 E4A80000 */      swc1 $f8, ($a1) # D_ovl43_8018E240 + 0
  .L8018DA2C:
  /* 16E93C 8018DA2C 28610010 */      slti $at, $v1, 0x10
  /* 16E940 8018DA30 14200007 */      bnez $at, .L8018DA50
  /* 16E944 8018DA34 2861002D */      slti $at, $v1, 0x2d
  /* 16E948 8018DA38 10200005 */      beqz $at, .L8018DA50
  /* 16E94C 8018DA3C 3C018019 */       lui $at, %hi(D_ovl43_8018E210)
  /* 16E950 8018DA40 C430E210 */      lwc1 $f16, %lo(D_ovl43_8018E210)($at)
  /* 16E954 8018DA44 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl43_8018E240 + 0
  /* 16E958 8018DA48 46105480 */     add.s $f18, $f10, $f16
  /* 16E95C 8018DA4C E4B20000 */      swc1 $f18, ($a1) # D_ovl43_8018E240 + 0
  .L8018DA50:
  /* 16E960 8018DA50 2861002E */      slti $at, $v1, 0x2e
  /* 16E964 8018DA54 14200007 */      bnez $at, .L8018DA74
  /* 16E968 8018DA58 2861003C */      slti $at, $v1, 0x3c
  /* 16E96C 8018DA5C 10200005 */      beqz $at, .L8018DA74
  /* 16E970 8018DA60 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 16E974 8018DA64 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16E978 8018DA68 C4A40000 */      lwc1 $f4, ($a1) # D_ovl43_8018E240 + 0
  /* 16E97C 8018DA6C 46062200 */     add.s $f8, $f4, $f6
  /* 16E980 8018DA70 E4A80000 */      swc1 $f8, ($a1) # D_ovl43_8018E240 + 0
  .L8018DA74:
  /* 16E984 8018DA74 8C820074 */        lw $v0, 0x74($a0)
  /* 16E988 8018DA78 C4B00000 */      lwc1 $f16, ($a1) # D_ovl43_8018E240 + 0
  /* 16E98C 8018DA7C C44A0020 */      lwc1 $f10, 0x20($v0)
  /* 16E990 8018DA80 46105481 */     sub.s $f18, $f10, $f16
  /* 16E994 8018DA84 03E00008 */        jr $ra
  /* 16E998 8018DA88 E4520020 */      swc1 $f18, 0x20($v0)

glabel func_ovl43_8018DA8C
  /* 16E99C 8018DA8C 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 16E9A0 8018DA90 AFB00018 */        sw $s0, 0x18($sp)
  /* 16E9A4 8018DA94 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16E9A8 8018DA98 27B00024 */     addiu $s0, $sp, 0x24
  /* 16E9AC 8018DA9C 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 16E9B0 8018DAA0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16E9B4 8018DAA4 25C8003C */     addiu $t0, $t6, 0x3c
  /* 16E9B8 8018DAA8 0200C825 */        or $t9, $s0, $zero
  .L8018DAAC:
  /* 16E9BC 8018DAAC 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16E9C0 8018DAB0 25CE000C */     addiu $t6, $t6, 0xc
  /* 16E9C4 8018DAB4 2739000C */     addiu $t9, $t9, 0xc
  /* 16E9C8 8018DAB8 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16E9CC 8018DABC 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 16E9D0 8018DAC0 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16E9D4 8018DAC4 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 16E9D8 8018DAC8 15C8FFF8 */       bne $t6, $t0, .L8018DAAC
  /* 16E9DC 8018DACC AF38FFFC */        sw $t8, -4($t9)
  /* 16E9E0 8018DAD0 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16E9E4 8018DAD4 24090008 */     addiu $t1, $zero, 8
  /* 16E9E8 8018DAD8 24040008 */     addiu $a0, $zero, 8
  /* 16E9EC 8018DADC AF380000 */        sw $t8, ($t9)
  /* 16E9F0 8018DAE0 AFA90024 */        sw $t1, 0x24($sp)
  /* 16E9F4 8018DAE4 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16E9F8 8018DAE8 00002825 */        or $a1, $zero, $zero
  /* 16E9FC 8018DAEC 44800000 */      mtc1 $zero, $f0
  /* 16EA00 8018DAF0 3C0A8019 */       lui $t2, %hi(D_ovl43_8018E23C)
  /* 16EA04 8018DAF4 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 16EA08 8018DAF8 8D4AE23C */        lw $t2, %lo(D_ovl43_8018E23C)($t2)
  /* 16EA0C 8018DAFC 44812000 */      mtc1 $at, $f4 # 600.0 to cop1
  /* 16EA10 8018DB00 A3A2003B */        sb $v0, 0x3b($sp)
  /* 16EA14 8018DB04 02002025 */        or $a0, $s0, $zero
  /* 16EA18 8018DB08 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 16EA1C 8018DB0C E7A00030 */      swc1 $f0, 0x30($sp)
  /* 16EA20 8018DB10 AFAA005C */        sw $t2, 0x5c($sp)
  /* 16EA24 8018DB14 0C035FCF */       jal ftManager_CreateFighter
  /* 16EA28 8018DB18 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 16EA2C 8018DB1C 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 16EA30 8018DB20 00408025 */        or $s0, $v0, $zero
  /* 16EA34 8018DB24 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16EA38 8018DB28 0C0E4173 */       jal func_ovl1_803905CC
  /* 16EA3C 8018DB2C 00402025 */        or $a0, $v0, $zero
  /* 16EA40 8018DB30 02002025 */        or $a0, $s0, $zero
  /* 16EA44 8018DB34 2405001A */     addiu $a1, $zero, 0x1a
  /* 16EA48 8018DB38 0C002834 */       jal om_g_move_obj_dl
  /* 16EA4C 8018DB3C 2406FFFF */     addiu $a2, $zero, -1
  /* 16EA50 8018DB40 3C058019 */       lui $a1, %hi(func_ovl43_8018D9BC)
  /* 16EA54 8018DB44 24A5D9BC */     addiu $a1, $a1, %lo(func_ovl43_8018D9BC)
  /* 16EA58 8018DB48 02002025 */        or $a0, $s0, $zero
  /* 16EA5C 8018DB4C 24060001 */     addiu $a2, $zero, 1
  /* 16EA60 8018DB50 0C002062 */       jal omAddGObjCommonProc
  /* 16EA64 8018DB54 24070001 */     addiu $a3, $zero, 1
  /* 16EA68 8018DB58 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16EA6C 8018DB5C 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 16EA70 8018DB60 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16EA74 8018DB64 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16EA78 8018DB68 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16EA7C 8018DB6C E5800044 */      swc1 $f0, 0x44($t4)
  /* 16EA80 8018DB70 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16EA84 8018DB74 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16EA88 8018DB78 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16EA8C 8018DB7C 8FB00018 */        lw $s0, 0x18($sp)
  /* 16EA90 8018DB80 27BD0068 */     addiu $sp, $sp, 0x68
  /* 16EA94 8018DB84 03E00008 */        jr $ra
  /* 16EA98 8018DB88 00000000 */       nop 

glabel func_ovl43_8018DB8C
  /* 16EA9C 8018DB8C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16EAA0 8018DB90 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16EAA4 8018DB94 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16EAA8 8018DB98 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16EAAC 8018DB9C 240F0050 */     addiu $t7, $zero, 0x50
  /* 16EAB0 8018DBA0 24180000 */     addiu $t8, $zero, 0
  /* 16EAB4 8018DBA4 3C190800 */       lui $t9, 0x800
  /* 16EAB8 8018DBA8 2408FFFF */     addiu $t0, $zero, -1
  /* 16EABC 8018DBAC 24090001 */     addiu $t1, $zero, 1
  /* 16EAC0 8018DBB0 240A0001 */     addiu $t2, $zero, 1
  /* 16EAC4 8018DBB4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16EAC8 8018DBB8 AFA90028 */        sw $t1, 0x28($sp)
  /* 16EACC 8018DBBC AFA80020 */        sw $t0, 0x20($sp)
  /* 16EAD0 8018DBC0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16EAD4 8018DBC4 AFB80018 */        sw $t8, 0x18($sp)
  /* 16EAD8 8018DBC8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16EADC 8018DBCC AFAE0010 */        sw $t6, 0x10($sp)
  /* 16EAE0 8018DBD0 AFA00024 */        sw $zero, 0x24($sp)
  /* 16EAE4 8018DBD4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16EAE8 8018DBD8 AFA00034 */        sw $zero, 0x34($sp)
  /* 16EAEC 8018DBDC 24040401 */     addiu $a0, $zero, 0x401
  /* 16EAF0 8018DBE0 00002825 */        or $a1, $zero, $zero
  /* 16EAF4 8018DBE4 24060010 */     addiu $a2, $zero, 0x10
  /* 16EAF8 8018DBE8 0C002E4F */       jal func_8000B93C
  /* 16EAFC 8018DBEC 3C078000 */       lui $a3, 0x8000
  /* 16EB00 8018DBF0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16EB04 8018DBF4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16EB08 8018DBF8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16EB0C 8018DBFC 8C430074 */        lw $v1, 0x74($v0)
  /* 16EB10 8018DC00 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16EB14 8018DC04 44050000 */      mfc1 $a1, $f0
  /* 16EB18 8018DC08 44060000 */      mfc1 $a2, $f0
  /* 16EB1C 8018DC0C 3C07439B */       lui $a3, 0x439b
  /* 16EB20 8018DC10 24640008 */     addiu $a0, $v1, 8
  /* 16EB24 8018DC14 0C001C20 */       jal func_80007080
  /* 16EB28 8018DC18 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16EB2C 8018DC1C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16EB30 8018DC20 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16EB34 8018DC24 03E00008 */        jr $ra
  /* 16EB38 8018DC28 00000000 */       nop 

glabel func_ovl43_8018DC2C
  /* 16EB3C 8018DC2C 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16EB40 8018DC30 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16EB44 8018DC34 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16EB48 8018DC38 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16EB4C 8018DC3C 240F000A */     addiu $t7, $zero, 0xa
  /* 16EB50 8018DC40 24180000 */     addiu $t8, $zero, 0
  /* 16EB54 8018DC44 3C190400 */       lui $t9, 0x400
  /* 16EB58 8018DC48 2408FFFF */     addiu $t0, $zero, -1
  /* 16EB5C 8018DC4C 24090001 */     addiu $t1, $zero, 1
  /* 16EB60 8018DC50 240A0001 */     addiu $t2, $zero, 1
  /* 16EB64 8018DC54 240B0001 */     addiu $t3, $zero, 1
  /* 16EB68 8018DC58 AFAB0030 */        sw $t3, 0x30($sp)
  /* 16EB6C 8018DC5C AFAA0028 */        sw $t2, 0x28($sp)
  /* 16EB70 8018DC60 AFA90024 */        sw $t1, 0x24($sp)
  /* 16EB74 8018DC64 AFA80020 */        sw $t0, 0x20($sp)
  /* 16EB78 8018DC68 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16EB7C 8018DC6C AFB80018 */        sw $t8, 0x18($sp)
  /* 16EB80 8018DC70 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16EB84 8018DC74 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16EB88 8018DC78 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16EB8C 8018DC7C AFA00034 */        sw $zero, 0x34($sp)
  /* 16EB90 8018DC80 24040401 */     addiu $a0, $zero, 0x401
  /* 16EB94 8018DC84 00002825 */        or $a1, $zero, $zero
  /* 16EB98 8018DC88 24060010 */     addiu $a2, $zero, 0x10
  /* 16EB9C 8018DC8C 0C002E4F */       jal func_8000B93C
  /* 16EBA0 8018DC90 3C078000 */       lui $a3, 0x8000
  /* 16EBA4 8018DC94 AFA20044 */        sw $v0, 0x44($sp)
  /* 16EBA8 8018DC98 8C430074 */        lw $v1, 0x74($v0)
  /* 16EBAC 8018DC9C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16EBB0 8018DCA0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16EBB4 8018DCA4 3C054352 */       lui $a1, 0x4352
  /* 16EBB8 8018DCA8 3C064120 */       lui $a2, 0x4120
  /* 16EBBC 8018DCAC 3C07439B */       lui $a3, 0x439b
  /* 16EBC0 8018DCB0 24640008 */     addiu $a0, $v1, 8
  /* 16EBC4 8018DCB4 AFA30040 */        sw $v1, 0x40($sp)
  /* 16EBC8 8018DCB8 0C001C20 */       jal func_80007080
  /* 16EBCC 8018DCBC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16EBD0 8018DCC0 3C018019 */       lui $at, %hi(D_ovl43_8018E214)
  /* 16EBD4 8018DCC4 8FA40040 */        lw $a0, 0x40($sp)
  /* 16EBD8 8018DCC8 C426E214 */      lwc1 $f6, %lo(D_ovl43_8018E214)($at)
  /* 16EBDC 8018DCCC 3C0C8019 */       lui $t4, %hi(D_ovl43_8018E444)
  /* 16EBE0 8018DCD0 3C0D0000 */       lui $t5, %hi(D_NF_00000150)
  /* 16EBE4 8018DCD4 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16EBE8 8018DCD8 8D8CE444 */        lw $t4, %lo(D_ovl43_8018E444)($t4)
  /* 16EBEC 8018DCDC 25AD0150 */     addiu $t5, $t5, %lo(D_NF_00000150)
  /* 16EBF0 8018DCE0 24060000 */     addiu $a2, $zero, 0
  /* 16EBF4 8018DCE4 0C003E8F */       jal func_8000FA3C
  /* 16EBF8 8018DCE8 018D2821 */      addu $a1, $t4, $t5
  /* 16EBFC 8018DCEC 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16EC00 8018DCF0 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16EC04 8018DCF4 8FA40044 */        lw $a0, 0x44($sp)
  /* 16EC08 8018DCF8 24060001 */     addiu $a2, $zero, 1
  /* 16EC0C 8018DCFC 0C002062 */       jal omAddGObjCommonProc
  /* 16EC10 8018DD00 24070001 */     addiu $a3, $zero, 1
  /* 16EC14 8018DD04 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16EC18 8018DD08 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16EC1C 8018DD0C 03E00008 */        jr $ra
  /* 16EC20 8018DD10 00000000 */       nop 

glabel func_ovl43_8018DD14
  /* 16EC24 8018DD14 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16EC28 8018DD18 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16EC2C 8018DD1C AFBF003C */        sw $ra, 0x3c($sp)
  /* 16EC30 8018DD20 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16EC34 8018DD24 240F0014 */     addiu $t7, $zero, 0x14
  /* 16EC38 8018DD28 24180000 */     addiu $t8, $zero, 0
  /* 16EC3C 8018DD2C 3C191000 */       lui $t9, 0x1000
  /* 16EC40 8018DD30 2408FFFF */     addiu $t0, $zero, -1
  /* 16EC44 8018DD34 24090001 */     addiu $t1, $zero, 1
  /* 16EC48 8018DD38 240A0001 */     addiu $t2, $zero, 1
  /* 16EC4C 8018DD3C AFAA0030 */        sw $t2, 0x30($sp)
  /* 16EC50 8018DD40 AFA90028 */        sw $t1, 0x28($sp)
  /* 16EC54 8018DD44 AFA80020 */        sw $t0, 0x20($sp)
  /* 16EC58 8018DD48 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16EC5C 8018DD4C AFB80018 */        sw $t8, 0x18($sp)
  /* 16EC60 8018DD50 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16EC64 8018DD54 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16EC68 8018DD58 AFA00024 */        sw $zero, 0x24($sp)
  /* 16EC6C 8018DD5C AFA0002C */        sw $zero, 0x2c($sp)
  /* 16EC70 8018DD60 AFA00034 */        sw $zero, 0x34($sp)
  /* 16EC74 8018DD64 24040401 */     addiu $a0, $zero, 0x401
  /* 16EC78 8018DD68 00002825 */        or $a1, $zero, $zero
  /* 16EC7C 8018DD6C 24060010 */     addiu $a2, $zero, 0x10
  /* 16EC80 8018DD70 0C002E4F */       jal func_8000B93C
  /* 16EC84 8018DD74 3C078000 */       lui $a3, 0x8000
  /* 16EC88 8018DD78 8C430074 */        lw $v1, 0x74($v0)
  /* 16EC8C 8018DD7C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16EC90 8018DD80 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16EC94 8018DD84 3C054352 */       lui $a1, 0x4352
  /* 16EC98 8018DD88 3C064120 */       lui $a2, 0x4120
  /* 16EC9C 8018DD8C 3C07439B */       lui $a3, 0x439b
  /* 16ECA0 8018DD90 24640008 */     addiu $a0, $v1, 8
  /* 16ECA4 8018DD94 AFA30044 */        sw $v1, 0x44($sp)
  /* 16ECA8 8018DD98 0C001C20 */       jal func_80007080
  /* 16ECAC 8018DD9C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16ECB0 8018DDA0 8FA30044 */        lw $v1, 0x44($sp)
  /* 16ECB4 8018DDA4 240B0005 */     addiu $t3, $zero, 5
  /* 16ECB8 8018DDA8 AC6B0080 */        sw $t3, 0x80($v1)
  /* 16ECBC 8018DDAC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16ECC0 8018DDB0 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16ECC4 8018DDB4 03E00008 */        jr $ra
  /* 16ECC8 8018DDB8 00000000 */       nop 

glabel func_ovl43_8018DDBC
  /* 16ECCC 8018DDBC 3C028019 */       lui $v0, %hi(D_ovl43_8018E228)
  /* 16ECD0 8018DDC0 2442E228 */     addiu $v0, $v0, %lo(D_ovl43_8018E228)
  /* 16ECD4 8018DDC4 8C4E0000 */        lw $t6, ($v0) # D_ovl43_8018E228 + 0
  /* 16ECD8 8018DDC8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16ECDC 8018DDCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 16ECE0 8018DDD0 AFA40018 */        sw $a0, 0x18($sp)
  /* 16ECE4 8018DDD4 25CF0001 */     addiu $t7, $t6, 1
  /* 16ECE8 8018DDD8 AC4F0000 */        sw $t7, ($v0) # D_ovl43_8018E228 + 0
  /* 16ECEC 8018DDDC 0C0E41DB */       jal func_ovl1_8039076C
  /* 16ECF0 8018DDE0 3404D000 */       ori $a0, $zero, 0xd000
  /* 16ECF4 8018DDE4 10400007 */      beqz $v0, .L8018DE04
  /* 16ECF8 8018DDE8 24190001 */     addiu $t9, $zero, 1
  /* 16ECFC 8018DDEC 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16ED00 8018DDF0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16ED04 8018DDF4 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16ED08 8018DDF8 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16ED0C 8018DDFC 0C00171D */       jal func_80005C74
  /* 16ED10 8018DE00 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DE04:
  /* 16ED14 8018DE04 3C028019 */       lui $v0, %hi(D_ovl43_8018E228)
  /* 16ED18 8018DE08 8C42E228 */        lw $v0, %lo(D_ovl43_8018E228)($v0)
  /* 16ED1C 8018DE0C 2401000F */     addiu $at, $zero, 0xf
  /* 16ED20 8018DE10 3C048019 */       lui $a0, %hi(D_ovl43_8018E22C)
  /* 16ED24 8018DE14 5441000C */      bnel $v0, $at, .L8018DE48
  /* 16ED28 8018DE18 2401003C */     addiu $at, $zero, 0x3c
  /* 16ED2C 8018DE1C 0C0026A1 */       jal omEjectGObjCommon
  /* 16ED30 8018DE20 8C84E22C */        lw $a0, %lo(D_ovl43_8018E22C)($a0)
  /* 16ED34 8018DE24 0C06358B */       jal func_ovl43_8018D62C
  /* 16ED38 8018DE28 00000000 */       nop 
  /* 16ED3C 8018DE2C 0C06365C */       jal func_ovl43_8018D970
  /* 16ED40 8018DE30 00000000 */       nop 
  /* 16ED44 8018DE34 0C0636A3 */       jal func_ovl43_8018DA8C
  /* 16ED48 8018DE38 00000000 */       nop 
  /* 16ED4C 8018DE3C 3C028019 */       lui $v0, %hi(D_ovl43_8018E228)
  /* 16ED50 8018DE40 8C42E228 */        lw $v0, %lo(D_ovl43_8018E228)($v0)
  /* 16ED54 8018DE44 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE48:
  /* 16ED58 8018DE48 14410007 */       bne $v0, $at, .L8018DE68
  /* 16ED5C 8018DE4C 24090021 */     addiu $t1, $zero, 0x21
  /* 16ED60 8018DE50 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16ED64 8018DE54 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16ED68 8018DE58 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16ED6C 8018DE5C A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16ED70 8018DE60 0C00171D */       jal func_80005C74
  /* 16ED74 8018DE64 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE68:
  /* 16ED78 8018DE68 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16ED7C 8018DE6C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16ED80 8018DE70 03E00008 */        jr $ra
  /* 16ED84 8018DE74 00000000 */       nop 

glabel func_ovl43_8018DE78
  /* 16ED88 8018DE78 3C018019 */       lui $at, %hi(D_ovl43_8018E228)
  /* 16ED8C 8018DE7C 03E00008 */        jr $ra
  /* 16ED90 8018DE80 AC20E228 */        sw $zero, %lo(D_ovl43_8018E228)($at)

glabel func_ovl43_8018DE84
  /* 16ED94 8018DE84 3C038019 */       lui $v1, %hi(D_ovl43_8018E448)
  /* 16ED98 8018DE88 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16ED9C 8018DE8C 2463E448 */     addiu $v1, $v1, %lo(D_ovl43_8018E448)
  /* 16EDA0 8018DE90 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16EDA4 8018DE94 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 16EDA8 8018DE98 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 16EDAC 8018DE9C 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 16EDB0 8018DEA0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16EDB4 8018DEA4 24040004 */     addiu $a0, $zero, 4
  /* 16EDB8 8018DEA8 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 16EDBC 8018DEAC 0060C825 */        or $t9, $v1, $zero
  .L8018DEB0:
  /* 16EDC0 8018DEB0 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16EDC4 8018DEB4 25CE000C */     addiu $t6, $t6, 0xc
  /* 16EDC8 8018DEB8 2739000C */     addiu $t9, $t9, 0xc
  /* 16EDCC 8018DEBC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16EDD0 8018DEC0 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 16EDD4 8018DEC4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16EDD8 8018DEC8 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 16EDDC 8018DECC 15C8FFF8 */       bne $t6, $t0, .L8018DEB0
  /* 16EDE0 8018DED0 AF38FFFC */        sw $t8, -4($t9)
  /* 16EDE4 8018DED4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16EDE8 8018DED8 240A0006 */     addiu $t2, $zero, 6
  /* 16EDEC 8018DEDC 240C0001 */     addiu $t4, $zero, 1
  /* 16EDF0 8018DEE0 AF380000 */        sw $t8, ($t9)
  /* 16EDF4 8018DEE4 24080008 */     addiu $t0, $zero, 8
  /* 16EDF8 8018DEE8 AC430000 */        sw $v1, ($v0) # gpBattleState + 0
  /* 16EDFC 8018DEEC A0640000 */        sb $a0, ($v1) # D_ovl43_8018E448 + 0
  /* 16EE00 8018DEF0 A06A0001 */        sb $t2, 1($v1) # D_ovl43_8018E448 + 1
  /* 16EE04 8018DEF4 A06C0004 */        sb $t4, 4($v1) # D_ovl43_8018E448 + 4
  /* 16EE08 8018DEF8 A0680023 */        sb $t0, 0x23($v1) # D_ovl43_8018E448 + 35
  /* 16EE0C 8018DEFC 0C063430 */       jal func_ovl43_8018D0C0
  /* 16EE10 8018DF00 A0640022 */        sb $a0, 0x22($v1) # D_ovl43_8018E448 + 34
  /* 16EE14 8018DF04 3C058019 */       lui $a1, %hi(func_ovl43_8018DDBC)
  /* 16EE18 8018DF08 24A5DDBC */     addiu $a1, $a1, %lo(func_ovl43_8018DDBC)
  /* 16EE1C 8018DF0C 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 16EE20 8018DF10 2406000D */     addiu $a2, $zero, 0xd
  /* 16EE24 8018DF14 0C00265A */       jal omMakeGObjCommon
  /* 16EE28 8018DF18 3C078000 */       lui $a3, 0x8000
  /* 16EE2C 8018DF1C 240F00FF */     addiu $t7, $zero, 0xff
  /* 16EE30 8018DF20 AFAF0010 */        sw $t7, 0x10($sp)
  /* 16EE34 8018DF24 24040009 */     addiu $a0, $zero, 9
  /* 16EE38 8018DF28 3C058000 */       lui $a1, 0x8000
  /* 16EE3C 8018DF2C 24060064 */     addiu $a2, $zero, 0x64
  /* 16EE40 8018DF30 0C002E7F */       jal func_8000B9FC
  /* 16EE44 8018DF34 24070003 */     addiu $a3, $zero, 3
  /* 16EE48 8018DF38 0C06379E */       jal func_ovl43_8018DE78
  /* 16EE4C 8018DF3C 00000000 */       nop 
  /* 16EE50 8018DF40 0C045624 */       jal func_ovl2_80115890
  /* 16EE54 8018DF44 00000000 */       nop 
  /* 16EE58 8018DF48 0C03B04C */       jal func_ovl2_800EC130
  /* 16EE5C 8018DF4C 00000000 */       nop 
  /* 16EE60 8018DF50 0C03F0A1 */       jal func_ovl2_800FC284
  /* 16EE64 8018DF54 00000000 */       nop 
  /* 16EE68 8018DF58 2404000A */     addiu $a0, $zero, 0xa
  /* 16EE6C 8018DF5C 2405000A */     addiu $a1, $zero, 0xa
  /* 16EE70 8018DF60 24060136 */     addiu $a2, $zero, 0x136
  /* 16EE74 8018DF64 0C043966 */       jal func_ovl2_8010E598
  /* 16EE78 8018DF68 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16EE7C 8018DF6C 0C0436D5 */       jal func_ovl2_8010DB54
  /* 16EE80 8018DF70 00000000 */       nop 
  /* 16EE84 8018DF74 24040003 */     addiu $a0, $zero, 3
  /* 16EE88 8018DF78 0C035C65 */       jal func_ovl2_800D7194
  /* 16EE8C 8018DF7C 24050002 */     addiu $a1, $zero, 2
  /* 16EE90 8018DF80 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 16EE94 8018DF84 00000000 */       nop 
  /* 16EE98 8018DF88 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 16EE9C 8018DF8C 00000000 */       nop 
  /* 16EEA0 8018DF90 0C03F4C0 */       jal efManager_AllocUserData
  /* 16EEA4 8018DF94 00000000 */       nop 
  /* 16EEA8 8018DF98 0C035E1B */       jal func_ovl2_800D786C
  /* 16EEAC 8018DF9C 24040008 */     addiu $a0, $zero, 8
  /* 16EEB0 8018DFA0 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 16EEB4 8018DFA4 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 16EEB8 8018DFA8 0C001260 */       jal hal_alloc
  /* 16EEBC 8018DFAC 24050010 */     addiu $a1, $zero, 0x10
  /* 16EEC0 8018DFB0 3C018019 */       lui $at, %hi(D_ovl43_8018E23C)
  /* 16EEC4 8018DFB4 0C0636E3 */       jal func_ovl43_8018DB8C
  /* 16EEC8 8018DFB8 AC22E23C */        sw $v0, %lo(D_ovl43_8018E23C)($at)
  /* 16EECC 8018DFBC 0C063745 */       jal func_ovl43_8018DD14
  /* 16EED0 8018DFC0 00000000 */       nop 
  /* 16EED4 8018DFC4 0C06370B */       jal func_ovl43_8018DC2C
  /* 16EED8 8018DFC8 00000000 */       nop 
  /* 16EEDC 8018DFCC 0C063465 */       jal func_ovl43_8018D194
  /* 16EEE0 8018DFD0 00000000 */       nop 
  /* 16EEE4 8018DFD4 0C00024B */       jal func_8000092C
  /* 16EEE8 8018DFD8 00000000 */       nop 
  /* 16EEEC 8018DFDC 2C4107AD */     sltiu $at, $v0, 0x7ad
  /* 16EEF0 8018DFE0 50200007 */      beql $at, $zero, .L8018E000
  /* 16EEF4 8018DFE4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFE8:
  /* 16EEF8 8018DFE8 0C00024B */       jal func_8000092C
  /* 16EEFC 8018DFEC 00000000 */       nop 
  /* 16EF00 8018DFF0 2C4107AD */     sltiu $at, $v0, 0x7ad
  /* 16EF04 8018DFF4 1420FFFC */      bnez $at, .L8018DFE8
  /* 16EF08 8018DFF8 00000000 */       nop 
  /* 16EF0C 8018DFFC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E000:
  /* 16EF10 8018E000 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16EF14 8018E004 03E00008 */        jr $ra
  /* 16EF18 8018E008 00000000 */       nop 

glabel func_ovl43_8018E00C
  /* 16EF1C 8018E00C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16EF20 8018E010 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16EF24 8018E014 8C830000 */        lw $v1, ($a0)
  /* 16EF28 8018E018 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16EF2C 8018E01C 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16EF30 8018E020 246E0008 */     addiu $t6, $v1, 8
  /* 16EF34 8018E024 AC8E0000 */        sw $t6, ($a0)
  /* 16EF38 8018E028 3C180002 */       lui $t8, 2
  /* 16EF3C 8018E02C 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 16EF40 8018E030 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16EF44 8018E034 AC780004 */        sw $t8, 4($v1)
  /* 16EF48 8018E038 AC6F0000 */        sw $t7, ($v1)
  /* 16EF4C 8018E03C 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 16EF50 8018E040 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16EF54 8018E044 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 16EF58 8018E048 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16EF5C 8018E04C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16EF60 8018E050 03E00008 */        jr $ra
  /* 16EF64 8018E054 00000000 */       nop 

glabel intro_focus_kirby_entry
  /* 16EF68 8018E058 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16EF6C 8018E05C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16EF70 8018E060 3C048019 */       lui $a0, %hi(D_ovl43_8018E13C)
  /* 16EF74 8018E064 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16EF78 8018E068 2484E13C */     addiu $a0, $a0, %lo(D_ovl43_8018E13C)
  /* 16EF7C 8018E06C AFBF0014 */        sw $ra, 0x14($sp)
  /* 16EF80 8018E070 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16EF84 8018E074 0C001C09 */       jal func_80007024
  /* 16EF88 8018E078 AC8F000C */        sw $t7, 0xc($a0) # D_ovl43_8018E13C + 12
  /* 16EF8C 8018E07C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16EF90 8018E080 3C198019 */       lui $t9, %hi(D_NF_8018E640)
  /* 16EF94 8018E084 3C048019 */       lui $a0, %hi(D_ovl43_8018E158)
  /* 16EF98 8018E088 2739E640 */     addiu $t9, $t9, %lo(D_NF_8018E640)
  /* 16EF9C 8018E08C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16EFA0 8018E090 2484E158 */     addiu $a0, $a0, %lo(D_ovl43_8018E158)
  /* 16EFA4 8018E094 03194023 */      subu $t0, $t8, $t9
  /* 16EFA8 8018E098 0C001A0F */       jal func_8000683C
  /* 16EFAC 8018E09C AC880010 */        sw $t0, 0x10($a0) # D_ovl43_8018E158 + 16
  /* 16EFB0 8018E0A0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16EFB4 8018E0A4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16EFB8 8018E0A8 03E00008 */        jr $ra
  /* 16EFBC 8018E0AC 00000000 */       nop 
#
#glabel D_ovl43_8018E0B0   # Routine parsed as data
#  /* 16EFC0 8018E0B0 00000000 */       nop 
