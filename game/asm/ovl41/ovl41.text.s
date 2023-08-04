.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E0C0

glabel func_ovl41_8018D0C0
  /* 16BD10 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16BD14 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 16BD18 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 16BD1C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl41_8018E288)
  /* 16BD20 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl41_8018E408)
  /* 16BD24 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16BD28 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16BD2C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 16BD30 8018D0E0 2718E288 */     addiu $t8, $t8, %lo(D_ovl41_8018E288)
  /* 16BD34 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 16BD38 8018D0E8 2508E408 */     addiu $t0, $t0, %lo(D_ovl41_8018E408)
  /* 16BD3C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 16BD40 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 16BD44 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 16BD48 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16BD4C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 16BD50 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 16BD54 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 16BD58 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16BD5C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 16BD60 8018D110 0C0337DE */       jal rldm_initialize
  /* 16BD64 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 16BD68 8018D118 3C048019 */       lui $a0, %hi(D_ovl41_8018E108)
  /* 16BD6C 8018D11C 2484E108 */     addiu $a0, $a0, %lo(D_ovl41_8018E108)
  /* 16BD70 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 16BD74 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 16BD78 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16BD7C 8018D12C 0C001260 */       jal hal_alloc
  /* 16BD80 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 16BD84 8018D134 3C048019 */       lui $a0, %hi(D_ovl41_8018E108)
  /* 16BD88 8018D138 3C068019 */       lui $a2, %hi(D_ovl41_8018E440)
  /* 16BD8C 8018D13C 24C6E440 */     addiu $a2, $a2, %lo(D_ovl41_8018E440)
  /* 16BD90 8018D140 2484E108 */     addiu $a0, $a0, %lo(D_ovl41_8018E108)
  /* 16BD94 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 16BD98 8018D148 0C033781 */       jal rldm_load_files_into
  /* 16BD9C 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 16BDA0 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16BDA4 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16BDA8 8018D158 03E00008 */        jr $ra
  /* 16BDAC 8018D15C 00000000 */       nop 

glabel func_ovl41_8018D160
  /* 16BDB0 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 16BDB4 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 16BDB8 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 16BDBC 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 16BDC0 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 16BDC4 8018D174 37190001 */       ori $t9, $t8, 1
  /* 16BDC8 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 16BDCC 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 16BDD0 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 16BDD4 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 16BDD8 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 16BDDC 8018D18C 03E00008 */        jr $ra
  /* 16BDE0 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl41_8018D194
  /* 16BDE4 8018D194 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 16BDE8 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl41_8018E110)
  /* 16BDEC 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 16BDF0 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 16BDF4 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 16BDF8 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 16BDFC 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 16BE00 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 16BE04 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 16BE08 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 16BE0C 8018D1BC 25EFE110 */     addiu $t7, $t7, %lo(D_ovl41_8018E110)
  /* 16BE10 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl41_8018E110 + 0
  /* 16BE14 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl41_8018E110 + 4
  /* 16BE18 8018D1C8 27AE0070 */     addiu $t6, $sp, 0x70
  /* 16BE1C 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 16BE20 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 16BE24 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl41_8018E110 + 12
  /* 16BE28 8018D1D8 8DF90008 */        lw $t9, 8($t7) # D_ovl41_8018E110 + 8
  /* 16BE2C 8018D1DC 3C098019 */       lui $t1, %hi(D_ovl41_8018E128)
  /* 16BE30 8018D1E0 ADD8000C */        sw $t8, 0xc($t6)
  /* 16BE34 8018D1E4 ADD90008 */        sw $t9, 8($t6)
  /* 16BE38 8018D1E8 8DF90010 */        lw $t9, 0x10($t7) # D_ovl41_8018E110 + 16
  /* 16BE3C 8018D1EC 8DF80014 */        lw $t8, 0x14($t7) # D_ovl41_8018E110 + 20
  /* 16BE40 8018D1F0 2529E128 */     addiu $t1, $t1, %lo(D_ovl41_8018E128)
  /* 16BE44 8018D1F4 ADD90010 */        sw $t9, 0x10($t6)
  /* 16BE48 8018D1F8 ADD80014 */        sw $t8, 0x14($t6)
  /* 16BE4C 8018D1FC 8D2B0000 */        lw $t3, ($t1) # D_ovl41_8018E128 + 0
  /* 16BE50 8018D200 27A8005C */     addiu $t0, $sp, 0x5c
  /* 16BE54 8018D204 8D2A0004 */        lw $t2, 4($t1) # D_ovl41_8018E128 + 4
  /* 16BE58 8018D208 AD0B0000 */        sw $t3, ($t0)
  /* 16BE5C 8018D20C 8D2B0008 */        lw $t3, 8($t1) # D_ovl41_8018E128 + 8
  /* 16BE60 8018D210 AD0A0004 */        sw $t2, 4($t0)
  /* 16BE64 8018D214 8D2A000C */        lw $t2, 0xc($t1) # D_ovl41_8018E128 + 12
  /* 16BE68 8018D218 AD0B0008 */        sw $t3, 8($t0)
  /* 16BE6C 8018D21C 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl41_8018E128 + 16
  /* 16BE70 8018D220 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 16BE74 8018D224 02003825 */        or $a3, $s0, $zero
  /* 16BE78 8018D228 00002025 */        or $a0, $zero, $zero
  /* 16BE7C 8018D22C 00002825 */        or $a1, $zero, $zero
  /* 16BE80 8018D230 24060011 */     addiu $a2, $zero, 0x11
  /* 16BE84 8018D234 AD0A000C */        sw $t2, 0xc($t0)
  /* 16BE88 8018D238 0C00265A */       jal omMakeGObjCommon
  /* 16BE8C 8018D23C AD0B0010 */        sw $t3, 0x10($t0)
  /* 16BE90 8018D240 3C018019 */       lui $at, %hi(D_ovl41_8018E22C)
  /* 16BE94 8018D244 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 16BE98 8018D248 240CFFFF */     addiu $t4, $zero, -1
  /* 16BE9C 8018D24C AC22E22C */        sw $v0, %lo(D_ovl41_8018E22C)($at)
  /* 16BEA0 8018D250 0040A025 */        or $s4, $v0, $zero
  /* 16BEA4 8018D254 AFAC0010 */        sw $t4, 0x10($sp)
  /* 16BEA8 8018D258 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16BEAC 8018D25C 00402025 */        or $a0, $v0, $zero
  /* 16BEB0 8018D260 2406001B */     addiu $a2, $zero, 0x1b
  /* 16BEB4 8018D264 0C00277D */       jal func_80009DF4
  /* 16BEB8 8018D268 02003825 */        or $a3, $s0, $zero
  /* 16BEBC 8018D26C 8FAD0070 */        lw $t5, 0x70($sp)
  /* 16BEC0 8018D270 27B00070 */     addiu $s0, $sp, 0x70
  /* 16BEC4 8018D274 27B1005C */     addiu $s1, $sp, 0x5c
  /* 16BEC8 8018D278 11A0001C */      beqz $t5, .L8018D2EC
  /* 16BECC 8018D27C 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 16BED0 8018D280 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 16BED4 8018D284 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 16BED8 8018D288 3C128019 */       lui $s2, %hi(D_ovl41_8018E440)
  /* 16BEDC 8018D28C 4481A000 */      mtc1 $at, $f20 # 80.0 to cop1
  /* 16BEE0 8018D290 2652E440 */     addiu $s2, $s2, %lo(D_ovl41_8018E440)
  /* 16BEE4 8018D294 8E020000 */        lw $v0, %lo(D_NF_80000000)($s0)
  /* 16BEE8 8018D298 2413FFDF */     addiu $s3, $zero, -0x21
  /* 16BEEC 8018D29C 8E4F0000 */        lw $t7, ($s2) # D_ovl41_8018E440 + 0
  .L8018D2A0:
  /* 16BEF0 8018D2A0 02802025 */        or $a0, $s4, $zero
  /* 16BEF4 8018D2A4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 16BEF8 8018D2A8 004F2821 */      addu $a1, $v0, $t7
  /* 16BEFC 8018D2AC 94580024 */       lhu $t8, 0x24($v0)
  /* 16BF00 8018D2B0 00402025 */        or $a0, $v0, $zero
  /* 16BF04 8018D2B4 03134024 */       and $t0, $t8, $s3
  /* 16BF08 8018D2B8 A4480024 */        sh $t0, 0x24($v0)
  /* 16BF0C 8018D2BC 35090001 */       ori $t1, $t0, 1
  /* 16BF10 8018D2C0 A4490024 */        sh $t1, 0x24($v0)
  /* 16BF14 8018D2C4 C6240000 */      lwc1 $f4, ($s1)
  /* 16BF18 8018D2C8 E456005C */      swc1 $f22, 0x5c($v0)
  /* 16BF1C 8018D2CC 46142180 */     add.s $f6, $f4, $f20
  /* 16BF20 8018D2D0 0C063458 */       jal func_ovl41_8018D160
  /* 16BF24 8018D2D4 E4460058 */      swc1 $f6, 0x58($v0)
  /* 16BF28 8018D2D8 8E020004 */        lw $v0, %lo(D_NF_80000004)($s0)
  /* 16BF2C 8018D2DC 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 16BF30 8018D2E0 26310004 */     addiu $s1, $s1, 4
  /* 16BF34 8018D2E4 5440FFEE */      bnel $v0, $zero, .L8018D2A0
  /* 16BF38 8018D2E8 8E4F0000 */        lw $t7, ($s2) # D_ovl41_8018E440 + 0
  .L8018D2EC:
  /* 16BF3C 8018D2EC 8FBF0044 */        lw $ra, 0x44($sp)
  /* 16BF40 8018D2F0 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 16BF44 8018D2F4 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 16BF48 8018D2F8 8FB00030 */        lw $s0, 0x30($sp)
  /* 16BF4C 8018D2FC 8FB10034 */        lw $s1, 0x34($sp)
  /* 16BF50 8018D300 8FB20038 */        lw $s2, 0x38($sp)
  /* 16BF54 8018D304 8FB3003C */        lw $s3, 0x3c($sp)
  /* 16BF58 8018D308 8FB40040 */        lw $s4, 0x40($sp)
  /* 16BF5C 8018D30C 03E00008 */        jr $ra
  /* 16BF60 8018D310 27BD0090 */     addiu $sp, $sp, 0x90

glabel func_ovl41_8018D314
  /* 16BF64 8018D314 3C0E8019 */       lui $t6, %hi(D_ovl41_8018E228)
  /* 16BF68 8018D318 8DCEE228 */        lw $t6, %lo(D_ovl41_8018E228)($t6)
  /* 16BF6C 8018D31C 3C038019 */       lui $v1, %hi(D_ovl41_8018E268)
  /* 16BF70 8018D320 8C820074 */        lw $v0, 0x74($a0)
  /* 16BF74 8018D324 29C1000F */      slti $at, $t6, 0xf
  /* 16BF78 8018D328 14200036 */      bnez $at, .L8018D404
  /* 16BF7C 8018D32C 2463E268 */     addiu $v1, $v1, %lo(D_ovl41_8018E268)
  /* 16BF80 8018D330 3C048019 */       lui $a0, %hi(D_ovl41_8018E248)
  /* 16BF84 8018D334 2484E248 */     addiu $a0, $a0, %lo(D_ovl41_8018E248)
  /* 16BF88 8018D338 C4860000 */      lwc1 $f6, ($a0) # D_ovl41_8018E248 + 0
  /* 16BF8C 8018D33C C4640000 */      lwc1 $f4, ($v1) # D_ovl41_8018E268 + 0
  /* 16BF90 8018D340 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 16BF94 8018D344 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 16BF98 8018D348 46062201 */     sub.s $f8, $f4, $f6
  /* 16BF9C 8018D34C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 16BFA0 8018D350 46004283 */     div.s $f10, $f8, $f0
  /* 16BFA4 8018D354 460A8480 */     add.s $f18, $f16, $f10
  /* 16BFA8 8018D358 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 16BFAC 8018D35C E452003C */      swc1 $f18, 0x3c($v0)
  /* 16BFB0 8018D360 C4860004 */      lwc1 $f6, 4($a0) # D_ovl41_8018E248 + 4
  /* 16BFB4 8018D364 C4640004 */      lwc1 $f4, 4($v1) # D_ovl41_8018E268 + 4
  /* 16BFB8 8018D368 46062201 */     sub.s $f8, $f4, $f6
  /* 16BFBC 8018D36C 46004403 */     div.s $f16, $f8, $f0
  /* 16BFC0 8018D370 46105480 */     add.s $f18, $f10, $f16
  /* 16BFC4 8018D374 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 16BFC8 8018D378 E4520040 */      swc1 $f18, 0x40($v0)
  /* 16BFCC 8018D37C C4860008 */      lwc1 $f6, 8($a0) # D_ovl41_8018E248 + 8
  /* 16BFD0 8018D380 C4640008 */      lwc1 $f4, 8($v1) # D_ovl41_8018E268 + 8
  /* 16BFD4 8018D384 46062201 */     sub.s $f8, $f4, $f6
  /* 16BFD8 8018D388 46004283 */     div.s $f10, $f8, $f0
  /* 16BFDC 8018D38C 460A8480 */     add.s $f18, $f16, $f10
  /* 16BFE0 8018D390 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 16BFE4 8018D394 E4520044 */      swc1 $f18, 0x44($v0)
  /* 16BFE8 8018D398 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl41_8018E248 + 12
  /* 16BFEC 8018D39C C464000C */      lwc1 $f4, 0xc($v1) # D_ovl41_8018E268 + 12
  /* 16BFF0 8018D3A0 46062201 */     sub.s $f8, $f4, $f6
  /* 16BFF4 8018D3A4 46004403 */     div.s $f16, $f8, $f0
  /* 16BFF8 8018D3A8 46105480 */     add.s $f18, $f10, $f16
  /* 16BFFC 8018D3AC C450004C */      lwc1 $f16, 0x4c($v0)
  /* 16C000 8018D3B0 E4520048 */      swc1 $f18, 0x48($v0)
  /* 16C004 8018D3B4 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl41_8018E248 + 16
  /* 16C008 8018D3B8 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl41_8018E268 + 16
  /* 16C00C 8018D3BC 46062201 */     sub.s $f8, $f4, $f6
  /* 16C010 8018D3C0 46004283 */     div.s $f10, $f8, $f0
  /* 16C014 8018D3C4 460A8480 */     add.s $f18, $f16, $f10
  /* 16C018 8018D3C8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 16C01C 8018D3CC E452004C */      swc1 $f18, 0x4c($v0)
  /* 16C020 8018D3D0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl41_8018E248 + 20
  /* 16C024 8018D3D4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl41_8018E268 + 20
  /* 16C028 8018D3D8 46062201 */     sub.s $f8, $f4, $f6
  /* 16C02C 8018D3DC 46004403 */     div.s $f16, $f8, $f0
  /* 16C030 8018D3E0 46105480 */     add.s $f18, $f10, $f16
  /* 16C034 8018D3E4 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 16C038 8018D3E8 E4520050 */      swc1 $f18, 0x50($v0)
  /* 16C03C 8018D3EC C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl41_8018E248 + 24
  /* 16C040 8018D3F0 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl41_8018E268 + 24
  /* 16C044 8018D3F4 46062201 */     sub.s $f8, $f4, $f6
  /* 16C048 8018D3F8 46004283 */     div.s $f10, $f8, $f0
  /* 16C04C 8018D3FC 460A8480 */     add.s $f18, $f16, $f10
  /* 16C050 8018D400 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D404:
  /* 16C054 8018D404 03E00008 */        jr $ra
  /* 16C058 8018D408 00000000 */       nop 

glabel func_ovl41_8018D40C
  /* 16C05C 8018D40C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 16C060 8018D410 3C0E8019 */       lui $t6, %hi(D_ovl41_8018E0C0)
  /* 16C064 8018D414 AFBF002C */        sw $ra, 0x2c($sp)
  /* 16C068 8018D418 AFB20028 */        sw $s2, 0x28($sp)
  /* 16C06C 8018D41C AFB10024 */        sw $s1, 0x24($sp)
  /* 16C070 8018D420 AFB00020 */        sw $s0, 0x20($sp)
  /* 16C074 8018D424 AFA40030 */        sw $a0, 0x30($sp)
  /* 16C078 8018D428 AFA50034 */        sw $a1, 0x34($sp)
  /* 16C07C 8018D42C AFA60038 */        sw $a2, 0x38($sp)
  /* 16C080 8018D430 25CEE0C0 */     addiu $t6, $t6, %lo(D_ovl41_8018E0C0)
  /* 16C084 8018D434 8DD80000 */        lw $t8, ($t6) # D_ovl41_8018E0C0 + 0
  /* 16C088 8018D438 3C108019 */       lui $s0, %hi(D_ovl41_8018E248)
  /* 16C08C 8018D43C 2610E248 */     addiu $s0, $s0, %lo(D_ovl41_8018E248)
  /* 16C090 8018D440 AE180000 */        sw $t8, ($s0) # D_ovl41_8018E248 + 0
  /* 16C094 8018D444 8DCF0004 */        lw $t7, 4($t6) # D_ovl41_8018E0C0 + 4
  /* 16C098 8018D448 3C198019 */       lui $t9, %hi(D_ovl41_8018E0DC)
  /* 16C09C 8018D44C 2739E0DC */     addiu $t9, $t9, %lo(D_ovl41_8018E0DC)
  /* 16C0A0 8018D450 AE0F0004 */        sw $t7, 4($s0) # D_ovl41_8018E248 + 4
  /* 16C0A4 8018D454 8DD80008 */        lw $t8, 8($t6) # D_ovl41_8018E0C0 + 8
  /* 16C0A8 8018D458 3C118019 */       lui $s1, %hi(D_ovl41_8018E268)
  /* 16C0AC 8018D45C 2631E268 */     addiu $s1, $s1, %lo(D_ovl41_8018E268)
  /* 16C0B0 8018D460 AE180008 */        sw $t8, 8($s0) # D_ovl41_8018E248 + 8
  /* 16C0B4 8018D464 8DCF000C */        lw $t7, 0xc($t6) # D_ovl41_8018E0C0 + 12
  /* 16C0B8 8018D468 00002025 */        or $a0, $zero, $zero
  /* 16C0BC 8018D46C AE0F000C */        sw $t7, 0xc($s0) # D_ovl41_8018E248 + 12
  /* 16C0C0 8018D470 8DD80010 */        lw $t8, 0x10($t6) # D_ovl41_8018E0C0 + 16
  /* 16C0C4 8018D474 AE180010 */        sw $t8, 0x10($s0) # D_ovl41_8018E248 + 16
  /* 16C0C8 8018D478 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl41_8018E0C0 + 20
  /* 16C0CC 8018D47C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl41_8018E248 + 20
  /* 16C0D0 8018D480 8DD80018 */        lw $t8, 0x18($t6) # D_ovl41_8018E0C0 + 24
  /* 16C0D4 8018D484 AE180018 */        sw $t8, 0x18($s0) # D_ovl41_8018E248 + 24
  /* 16C0D8 8018D488 8F290000 */        lw $t1, ($t9) # D_ovl41_8018E0DC + 0
  /* 16C0DC 8018D48C AE290000 */        sw $t1, ($s1) # D_ovl41_8018E268 + 0
  /* 16C0E0 8018D490 8F280004 */        lw $t0, 4($t9) # D_ovl41_8018E0DC + 4
  /* 16C0E4 8018D494 AE280004 */        sw $t0, 4($s1) # D_ovl41_8018E268 + 4
  /* 16C0E8 8018D498 8F290008 */        lw $t1, 8($t9) # D_ovl41_8018E0DC + 8
  /* 16C0EC 8018D49C AE290008 */        sw $t1, 8($s1) # D_ovl41_8018E268 + 8
  /* 16C0F0 8018D4A0 8F28000C */        lw $t0, 0xc($t9) # D_ovl41_8018E0DC + 12
  /* 16C0F4 8018D4A4 AE28000C */        sw $t0, 0xc($s1) # D_ovl41_8018E268 + 12
  /* 16C0F8 8018D4A8 8F290010 */        lw $t1, 0x10($t9) # D_ovl41_8018E0DC + 16
  /* 16C0FC 8018D4AC AE290010 */        sw $t1, 0x10($s1) # D_ovl41_8018E268 + 16
  /* 16C100 8018D4B0 8F280014 */        lw $t0, 0x14($t9) # D_ovl41_8018E0DC + 20
  /* 16C104 8018D4B4 AE280014 */        sw $t0, 0x14($s1) # D_ovl41_8018E268 + 20
  /* 16C108 8018D4B8 8F290018 */        lw $t1, 0x18($t9) # D_ovl41_8018E0DC + 24
  /* 16C10C 8018D4BC 0C0436CB */       jal func_ovl2_8010DB2C
  /* 16C110 8018D4C0 AE290018 */        sw $t1, 0x18($s1) # D_ovl41_8018E268 + 24
  /* 16C114 8018D4C4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16C118 8018D4C8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16C11C 8018D4CC 3C038019 */       lui $v1, %hi(D_ovl41_8018E238)
  /* 16C120 8018D4D0 2463E238 */     addiu $v1, $v1, %lo(D_ovl41_8018E238)
  /* 16C124 8018D4D4 AC620000 */        sw $v0, ($v1) # D_ovl41_8018E238 + 0
  /* 16C128 8018D4D8 3C014316 */       lui $at, (0x43160000 >> 16) # 150.0
  /* 16C12C 8018D4DC 8C520074 */        lw $s2, 0x74($v0)
  /* 16C130 8018D4E0 44812000 */      mtc1 $at, $f4 # 150.0 to cop1
  /* 16C134 8018D4E4 44050000 */      mfc1 $a1, $f0
  /* 16C138 8018D4E8 44060000 */      mfc1 $a2, $f0
  /* 16C13C 8018D4EC 3C07439B */       lui $a3, 0x439b
  /* 16C140 8018D4F0 26440008 */     addiu $a0, $s2, 8
  /* 16C144 8018D4F4 0C001C20 */       jal func_80007080
  /* 16C148 8018D4F8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16C14C 8018D4FC 3C018019 */       lui $at, %hi(D_ovl41_8018E20C)
  /* 16C150 8018D500 C426E20C */      lwc1 $f6, %lo(D_ovl41_8018E20C)($at)
  /* 16C154 8018D504 3C048019 */       lui $a0, %hi(D_ovl41_8018E238)
  /* 16C158 8018D508 E6460024 */      swc1 $f6, 0x24($s2)
  /* 16C15C 8018D50C 0C002CE7 */       jal func_8000B39C
  /* 16C160 8018D510 8C84E238 */        lw $a0, %lo(D_ovl41_8018E238)($a0)
  /* 16C164 8018D514 3C048019 */       lui $a0, %hi(D_ovl41_8018E238)
  /* 16C168 8018D518 3C058019 */       lui $a1, %hi(func_ovl41_8018D314)
  /* 16C16C 8018D51C 24A5D314 */     addiu $a1, $a1, %lo(func_ovl41_8018D314)
  /* 16C170 8018D520 8C84E238 */        lw $a0, %lo(D_ovl41_8018E238)($a0)
  /* 16C174 8018D524 24060001 */     addiu $a2, $zero, 1
  /* 16C178 8018D528 0C002062 */       jal omAddGObjCommonProc
  /* 16C17C 8018D52C 24070001 */     addiu $a3, $zero, 1
  /* 16C180 8018D530 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 16C184 8018D534 C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 16C188 8018D538 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 16C18C 8018D53C C6080000 */      lwc1 $f8, ($s0) # D_ovl41_8018E248 + 0
  /* 16C190 8018D540 C6100004 */      lwc1 $f16, 4($s0) # D_ovl41_8018E248 + 4
  /* 16C194 8018D544 C6040008 */      lwc1 $f4, 8($s0) # D_ovl41_8018E248 + 8
  /* 16C198 8018D548 46004280 */     add.s $f10, $f8, $f0
  /* 16C19C 8018D54C C608000C */      lwc1 $f8, 0xc($s0) # D_ovl41_8018E248 + 12
  /* 16C1A0 8018D550 46028480 */     add.s $f18, $f16, $f2
  /* 16C1A4 8018D554 C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl41_8018E248 + 16
  /* 16C1A8 8018D558 E60A0000 */      swc1 $f10, ($s0) # D_ovl41_8018E248 + 0
  /* 16C1AC 8018D55C 460C2180 */     add.s $f6, $f4, $f12
  /* 16C1B0 8018D560 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl41_8018E248 + 20
  /* 16C1B4 8018D564 E6120004 */      swc1 $f18, 4($s0) # D_ovl41_8018E248 + 4
  /* 16C1B8 8018D568 46004280 */     add.s $f10, $f8, $f0
  /* 16C1BC 8018D56C E6060008 */      swc1 $f6, 8($s0) # D_ovl41_8018E248 + 8
  /* 16C1C0 8018D570 C6280000 */      lwc1 $f8, ($s1) # D_ovl41_8018E268 + 0
  /* 16C1C4 8018D574 46028480 */     add.s $f18, $f16, $f2
  /* 16C1C8 8018D578 C6300004 */      lwc1 $f16, 4($s1) # D_ovl41_8018E268 + 4
  /* 16C1CC 8018D57C E60A000C */      swc1 $f10, 0xc($s0) # D_ovl41_8018E248 + 12
  /* 16C1D0 8018D580 460C2180 */     add.s $f6, $f4, $f12
  /* 16C1D4 8018D584 C6240008 */      lwc1 $f4, 8($s1) # D_ovl41_8018E268 + 8
  /* 16C1D8 8018D588 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl41_8018E248 + 16
  /* 16C1DC 8018D58C 46004280 */     add.s $f10, $f8, $f0
  /* 16C1E0 8018D590 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl41_8018E248 + 20
  /* 16C1E4 8018D594 C628000C */      lwc1 $f8, 0xc($s1) # D_ovl41_8018E268 + 12
  /* 16C1E8 8018D598 46028480 */     add.s $f18, $f16, $f2
  /* 16C1EC 8018D59C C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl41_8018E268 + 16
  /* 16C1F0 8018D5A0 E62A0000 */      swc1 $f10, ($s1) # D_ovl41_8018E268 + 0
  /* 16C1F4 8018D5A4 460C2180 */     add.s $f6, $f4, $f12
  /* 16C1F8 8018D5A8 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl41_8018E268 + 20
  /* 16C1FC 8018D5AC E6320004 */      swc1 $f18, 4($s1) # D_ovl41_8018E268 + 4
  /* 16C200 8018D5B0 46004280 */     add.s $f10, $f8, $f0
  /* 16C204 8018D5B4 E6260008 */      swc1 $f6, 8($s1) # D_ovl41_8018E268 + 8
  /* 16C208 8018D5B8 C6080000 */      lwc1 $f8, ($s0) # D_ovl41_8018E248 + 0
  /* 16C20C 8018D5BC 46028480 */     add.s $f18, $f16, $f2
  /* 16C210 8018D5C0 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl41_8018E268 + 12
  /* 16C214 8018D5C4 460C2180 */     add.s $f6, $f4, $f12
  /* 16C218 8018D5C8 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl41_8018E268 + 16
  /* 16C21C 8018D5CC E6260014 */      swc1 $f6, 0x14($s1) # D_ovl41_8018E268 + 20
  /* 16C220 8018D5D0 E648003C */      swc1 $f8, 0x3c($s2)
  /* 16C224 8018D5D4 C60A0004 */      lwc1 $f10, 4($s0) # D_ovl41_8018E248 + 4
  /* 16C228 8018D5D8 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 16C22C 8018D5DC C6100008 */      lwc1 $f16, 8($s0) # D_ovl41_8018E248 + 8
  /* 16C230 8018D5E0 E6500044 */      swc1 $f16, 0x44($s2)
  /* 16C234 8018D5E4 C612000C */      lwc1 $f18, 0xc($s0) # D_ovl41_8018E248 + 12
  /* 16C238 8018D5E8 E6520048 */      swc1 $f18, 0x48($s2)
  /* 16C23C 8018D5EC C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl41_8018E248 + 16
  /* 16C240 8018D5F0 E644004C */      swc1 $f4, 0x4c($s2)
  /* 16C244 8018D5F4 C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl41_8018E248 + 20
  /* 16C248 8018D5F8 E6460050 */      swc1 $f6, 0x50($s2)
  /* 16C24C 8018D5FC C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl41_8018E248 + 24
  /* 16C250 8018D600 E6480054 */      swc1 $f8, 0x54($s2)
  /* 16C254 8018D604 8FBF002C */        lw $ra, 0x2c($sp)
  /* 16C258 8018D608 8FB20028 */        lw $s2, 0x28($sp)
  /* 16C25C 8018D60C 8FB10024 */        lw $s1, 0x24($sp)
  /* 16C260 8018D610 8FB00020 */        lw $s0, 0x20($sp)
  /* 16C264 8018D614 03E00008 */        jr $ra
  /* 16C268 8018D618 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl41_8018D61C
  /* 16C26C 8018D61C 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 16C270 8018D620 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16C274 8018D624 AFBE0038 */        sw $fp, 0x38($sp)
  /* 16C278 8018D628 AFB70034 */        sw $s7, 0x34($sp)
  /* 16C27C 8018D62C AFB60030 */        sw $s6, 0x30($sp)
  /* 16C280 8018D630 AFB5002C */        sw $s5, 0x2c($sp)
  /* 16C284 8018D634 AFB40028 */        sw $s4, 0x28($sp)
  /* 16C288 8018D638 AFB30024 */        sw $s3, 0x24($sp)
  /* 16C28C 8018D63C AFB20020 */        sw $s2, 0x20($sp)
  /* 16C290 8018D640 AFB1001C */        sw $s1, 0x1c($sp)
  /* 16C294 8018D644 0C0412F7 */       jal func_ovl2_80104BDC
  /* 16C298 8018D648 AFB00018 */        sw $s0, 0x18($sp)
  /* 16C29C 8018D64C 0C041580 */       jal func_ovl2_80105600
  /* 16C2A0 8018D650 00000000 */       nop 
  /* 16C2A4 8018D654 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 16C2A8 8018D658 24040015 */     addiu $a0, $zero, 0x15
  /* 16C2AC 8018D65C 24010001 */     addiu $at, $zero, 1
  /* 16C2B0 8018D660 10410009 */       beq $v0, $at, .L8018D688
  /* 16C2B4 8018D664 24040015 */     addiu $a0, $zero, 0x15
  /* 16C2B8 8018D668 3C108019 */       lui $s0, %hi(D_ovl41_8018E1F0)
  /* 16C2BC 8018D66C 2610E1F0 */     addiu $s0, $s0, %lo(D_ovl41_8018E1F0)
  .L8018D670:
  /* 16C2C0 8018D670 0C008D89 */       jal fatal_printf
  /* 16C2C4 8018D674 02002025 */        or $a0, $s0, $zero
  /* 16C2C8 8018D678 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 16C2CC 8018D67C 00000000 */       nop 
  /* 16C2D0 8018D680 1000FFFB */         b .L8018D670
  /* 16C2D4 8018D684 00000000 */       nop 
  .L8018D688:
  /* 16C2D8 8018D688 0C03F205 */       jal func_ovl2_800FC814
  /* 16C2DC 8018D68C 27A5009C */     addiu $a1, $sp, 0x9c
  /* 16C2E0 8018D690 27B00090 */     addiu $s0, $sp, 0x90
  /* 16C2E4 8018D694 02002825 */        or $a1, $s0, $zero
  /* 16C2E8 8018D698 0C03F225 */       jal func_ovl2_800FC894
  /* 16C2EC 8018D69C 8FA4009C */        lw $a0, 0x9c($sp)
  /* 16C2F0 8018D6A0 3C01C47A */       lui $at, (0xC47A0000 >> 16) # -1000.0
  /* 16C2F4 8018D6A4 44813000 */      mtc1 $at, $f6 # -1000.0 to cop1
  /* 16C2F8 8018D6A8 3C01428C */       lui $at, (0x428C0000 >> 16) # 70.0
  /* 16C2FC 8018D6AC C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 16C300 8018D6B0 44818000 */      mtc1 $at, $f16 # 70.0 to cop1
  /* 16C304 8018D6B4 C7AA0094 */      lwc1 $f10, 0x94($sp)
  /* 16C308 8018D6B8 46062200 */     add.s $f8, $f4, $f6
  /* 16C30C 8018D6BC 46105480 */     add.s $f18, $f10, $f16
  /* 16C310 8018D6C0 E7A80090 */      swc1 $f8, 0x90($sp)
  /* 16C314 8018D6C4 E7B20094 */      swc1 $f18, 0x94($sp)
  /* 16C318 8018D6C8 8E0F0000 */        lw $t7, ($s0) # D_ovl41_8018E1F0 + 0
  /* 16C31C 8018D6CC AFAF0000 */        sw $t7, ($sp)
  /* 16C320 8018D6D0 8E050004 */        lw $a1, 4($s0) # D_ovl41_8018E1F0 + 4
  /* 16C324 8018D6D4 8FA40000 */        lw $a0, ($sp)
  /* 16C328 8018D6D8 AFA50004 */        sw $a1, 4($sp)
  /* 16C32C 8018D6DC 8E060008 */        lw $a2, 8($s0) # D_ovl41_8018E1F0 + 8
  /* 16C330 8018D6E0 0C063503 */       jal func_ovl41_8018D40C
  /* 16C334 8018D6E4 AFA60008 */        sw $a2, 8($sp)
  /* 16C338 8018D6E8 0C0455B9 */       jal func_ovl2_801156E4
  /* 16C33C 8018D6EC 00000000 */       nop 
  /* 16C340 8018D6F0 0C0594F8 */       jal func_NF_801653E0 # couldn't be resolved
  /* 16C344 8018D6F4 00000000 */       nop 
  /* 16C348 8018D6F8 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 16C34C 8018D6FC 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 16C350 8018D700 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 16C354 8018D704 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 16C358 8018D708 00008825 */        or $s1, $zero, $zero
  /* 16C35C 8018D70C 00009025 */        or $s2, $zero, $zero
  /* 16C360 8018D710 241E0004 */     addiu $fp, $zero, 4
  /* 16C364 8018D714 24170002 */     addiu $s7, $zero, 2
  /* 16C368 8018D718 27B40050 */     addiu $s4, $sp, 0x50
  .L8018D71C:
  /* 16C36C 8018D71C 02C04025 */        or $t0, $s6, $zero
  /* 16C370 8018D720 02804825 */        or $t1, $s4, $zero
  /* 16C374 8018D724 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D728:
  /* 16C378 8018D728 8D190000 */        lw $t9, ($t0)
  /* 16C37C 8018D72C 2508000C */     addiu $t0, $t0, 0xc
  /* 16C380 8018D730 2529000C */     addiu $t1, $t1, 0xc
  /* 16C384 8018D734 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 16C388 8018D738 8D18FFF8 */        lw $t8, -8($t0)
  /* 16C38C 8018D73C AD38FFF8 */        sw $t8, -8($t1)
  /* 16C390 8018D740 8D19FFFC */        lw $t9, -4($t0)
  /* 16C394 8018D744 150AFFF8 */       bne $t0, $t2, .L8018D728
  /* 16C398 8018D748 AD39FFFC */        sw $t9, -4($t1)
  /* 16C39C 8018D74C 8D190000 */        lw $t9, ($t0)
  /* 16C3A0 8018D750 00116880 */       sll $t5, $s1, 2
  /* 16C3A4 8018D754 01B16821 */      addu $t5, $t5, $s1
  /* 16C3A8 8018D758 AD390000 */        sw $t9, ($t1)
  /* 16C3AC 8018D75C 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 16C3B0 8018D760 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 16C3B4 8018D764 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 16C3B8 8018D768 01728021 */      addu $s0, $t3, $s2
  /* 16C3BC 8018D76C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl41_8018E1F0 + 34
  /* 16C3C0 8018D770 000D6840 */       sll $t5, $t5, 1
  /* 16C3C4 8018D774 01AE9821 */      addu $s3, $t5, $t6
  /* 16C3C8 8018D778 52EC0030 */      beql $s7, $t4, .L8018D83C
  /* 16C3CC 8018D77C 26310001 */     addiu $s1, $s1, 1
  /* 16C3D0 8018D780 0C035E1B */       jal func_ovl2_800D786C
  /* 16C3D4 8018D784 92040023 */       lbu $a0, 0x23($s0) # D_ovl41_8018E1F0 + 35
  /* 16C3D8 8018D788 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 16C3DC 8018D78C C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 16C3E0 8018D790 C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 16C3E4 8018D794 00528021 */      addu $s0, $v0, $s2
  /* 16C3E8 8018D798 920F0023 */       lbu $t7, 0x23($s0) # D_ovl41_8018E1F0 + 35
  /* 16C3EC 8018D79C C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 16C3F0 8018D7A0 240A0001 */     addiu $t2, $zero, 1
  /* 16C3F4 8018D7A4 AFAA0060 */        sw $t2, 0x60($sp)
  /* 16C3F8 8018D7A8 E7A40054 */      swc1 $f4, 0x54($sp)
  /* 16C3FC 8018D7AC E7A60058 */      swc1 $f6, 0x58($sp)
  /* 16C400 8018D7B0 AFAF0050 */        sw $t7, 0x50($sp)
  /* 16C404 8018D7B4 E7A8005C */      swc1 $f8, 0x5c($sp)
  /* 16C408 8018D7B8 92080024 */       lbu $t0, 0x24($s0) # D_ovl41_8018E1F0 + 36
  /* 16C40C 8018D7BC 24090001 */     addiu $t1, $zero, 1
  /* 16C410 8018D7C0 A3B10065 */        sb $s1, 0x65($sp)
  /* 16C414 8018D7C4 A3A90066 */        sb $t1, 0x66($sp)
  /* 16C418 8018D7C8 A3A80064 */        sb $t0, 0x64($sp)
  /* 16C41C 8018D7CC 92180026 */       lbu $t8, 0x26($s0) # D_ovl41_8018E1F0 + 38
  /* 16C420 8018D7D0 A3B80067 */        sb $t8, 0x67($sp)
  /* 16C424 8018D7D4 92190021 */       lbu $t9, 0x21($s0) # D_ovl41_8018E1F0 + 33
  /* 16C428 8018D7D8 A3B90069 */        sb $t9, 0x69($sp)
  /* 16C42C 8018D7DC 920B0020 */       lbu $t3, 0x20($s0) # D_ovl41_8018E1F0 + 32
  /* 16C430 8018D7E0 A3AB006A */        sb $t3, 0x6a($sp)
  /* 16C434 8018D7E4 904C0007 */       lbu $t4, 7($v0)
  /* 16C438 8018D7E8 AFA00074 */        sw $zero, 0x74($sp)
  /* 16C43C 8018D7EC A3AC006B */        sb $t4, 0x6b($sp)
  /* 16C440 8018D7F0 920D0022 */       lbu $t5, 0x22($s0) # D_ovl41_8018E1F0 + 34
  /* 16C444 8018D7F4 AFB3007C */        sw $s3, 0x7c($sp)
  /* 16C448 8018D7F8 AFAD0078 */        sw $t5, 0x78($sp)
  /* 16C44C 8018D7FC 0C035E2D */       jal func_ovl2_800D78B4
  /* 16C450 8018D800 92040023 */       lbu $a0, 0x23($s0) # D_ovl41_8018E1F0 + 35
  /* 16C454 8018D804 AFA20088 */        sw $v0, 0x88($sp)
  /* 16C458 8018D808 0C035FCF */       jal ftManager_CreateFighter
  /* 16C45C 8018D80C 02802025 */        or $a0, $s4, $zero
  /* 16C460 8018D810 3C018019 */       lui $at, %hi(D_ovl41_8018E230)
  /* 16C464 8018D814 AC22E230 */        sw $v0, %lo(D_ovl41_8018E230)($at)
  /* 16C468 8018D818 00408025 */        or $s0, $v0, $zero
  /* 16C46C 8018D81C 02202025 */        or $a0, $s1, $zero
  /* 16C470 8018D820 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 16C474 8018D824 00402825 */        or $a1, $v0, $zero
  /* 16C478 8018D828 3C058019 */       lui $a1, %hi(D_ovl41_8018E0F8)
  /* 16C47C 8018D82C 24A5E0F8 */     addiu $a1, $a1, %lo(D_ovl41_8018E0F8)
  /* 16C480 8018D830 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 16C484 8018D834 02002025 */        or $a0, $s0, $zero
  /* 16C488 8018D838 26310001 */     addiu $s1, $s1, 1
  .L8018D83C:
  /* 16C48C 8018D83C 163EFFB7 */       bne $s1, $fp, .L8018D71C
  /* 16C490 8018D840 26520074 */     addiu $s2, $s2, 0x74
  /* 16C494 8018D844 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16C498 8018D848 8FB00018 */        lw $s0, 0x18($sp)
  /* 16C49C 8018D84C 8FB1001C */        lw $s1, 0x1c($sp)
  /* 16C4A0 8018D850 8FB20020 */        lw $s2, 0x20($sp)
  /* 16C4A4 8018D854 8FB30024 */        lw $s3, 0x24($sp)
  /* 16C4A8 8018D858 8FB40028 */        lw $s4, 0x28($sp)
  /* 16C4AC 8018D85C 8FB5002C */        lw $s5, 0x2c($sp)
  /* 16C4B0 8018D860 8FB60030 */        lw $s6, 0x30($sp)
  /* 16C4B4 8018D864 8FB70034 */        lw $s7, 0x34($sp)
  /* 16C4B8 8018D868 8FBE0038 */        lw $fp, 0x38($sp)
  /* 16C4BC 8018D86C 03E00008 */        jr $ra
  /* 16C4C0 8018D870 27BD00B0 */     addiu $sp, $sp, 0xb0

glabel func_ovl41_8018D874
  /* 16C4C4 8018D874 3C0B8004 */       lui $t3, %hi(gpDisplayListHead)
  /* 16C4C8 8018D878 256B65B0 */     addiu $t3, $t3, %lo(gpDisplayListHead)
  /* 16C4CC 8018D87C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C4D0 8018D880 AFA40000 */        sw $a0, ($sp)
  /* 16C4D4 8018D884 3C0CE700 */       lui $t4, 0xe700
  /* 16C4D8 8018D888 246E0008 */     addiu $t6, $v1, 8
  /* 16C4DC 8018D88C AD6E0000 */        sw $t6, ($t3) # gpDisplayListHead + 0
  /* 16C4E0 8018D890 AC600004 */        sw $zero, 4($v1)
  /* 16C4E4 8018D894 AC6C0000 */        sw $t4, ($v1)
  /* 16C4E8 8018D898 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C4EC 8018D89C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 16C4F0 8018D8A0 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 16C4F4 8018D8A4 246F0008 */     addiu $t7, $v1, 8
  /* 16C4F8 8018D8A8 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16C4FC 8018D8AC AC600004 */        sw $zero, 4($v1)
  /* 16C500 8018D8B0 AC780000 */        sw $t8, ($v1)
  /* 16C504 8018D8B4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C508 8018D8B8 3C0FFFBE */       lui $t7, (0xFFBE5AFF >> 16) # 4290665215
  /* 16C50C 8018D8BC 35EF5AFF */       ori $t7, $t7, (0xFFBE5AFF & 0xFFFF) # 4290665215
  /* 16C510 8018D8C0 24790008 */     addiu $t9, $v1, 8
  /* 16C514 8018D8C4 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16C518 8018D8C8 3C0EFA00 */       lui $t6, 0xfa00
  /* 16C51C 8018D8CC AC6E0000 */        sw $t6, ($v1)
  /* 16C520 8018D8D0 AC6F0004 */        sw $t7, 4($v1)
  /* 16C524 8018D8D4 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C528 8018D8D8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 16C52C 8018D8DC 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 16C530 8018D8E0 24780008 */     addiu $t8, $v1, 8
  /* 16C534 8018D8E4 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16C538 8018D8E8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 16C53C 8018D8EC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 16C540 8018D8F0 AC6E0004 */        sw $t6, 4($v1)
  /* 16C544 8018D8F4 AC790000 */        sw $t9, ($v1)
  /* 16C548 8018D8F8 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C54C 8018D8FC 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 16C550 8018D900 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 16C554 8018D904 246F0008 */     addiu $t7, $v1, 8
  /* 16C558 8018D908 AD6F0000 */        sw $t7, ($t3) # gpDisplayListHead + 0
  /* 16C55C 8018D90C 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 16C560 8018D910 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 16C564 8018D914 AC780004 */        sw $t8, 4($v1)
  /* 16C568 8018D918 AC6D0000 */        sw $t5, ($v1)
  /* 16C56C 8018D91C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C570 8018D920 3C0F0002 */       lui $t7, (0x28258 >> 16) # 164440
  /* 16C574 8018D924 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 16C578 8018D928 24790008 */     addiu $t9, $v1, 8
  /* 16C57C 8018D92C AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16C580 8018D930 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 16C584 8018D934 35EF8258 */       ori $t7, $t7, (0x28258 & 0xFFFF) # 164440
  /* 16C588 8018D938 AC6F0004 */        sw $t7, 4($v1)
  /* 16C58C 8018D93C AC6E0000 */        sw $t6, ($v1)
  /* 16C590 8018D940 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C594 8018D944 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 16C598 8018D948 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 16C59C 8018D94C 24780008 */     addiu $t8, $v1, 8
  /* 16C5A0 8018D950 AD780000 */        sw $t8, ($t3) # gpDisplayListHead + 0
  /* 16C5A4 8018D954 AC600004 */        sw $zero, 4($v1)
  /* 16C5A8 8018D958 AC6C0000 */        sw $t4, ($v1)
  /* 16C5AC 8018D95C 8D630000 */        lw $v1, ($t3) # gpDisplayListHead + 0
  /* 16C5B0 8018D960 24790008 */     addiu $t9, $v1, 8
  /* 16C5B4 8018D964 AD790000 */        sw $t9, ($t3) # gpDisplayListHead + 0
  /* 16C5B8 8018D968 AC6E0004 */        sw $t6, 4($v1)
  /* 16C5BC 8018D96C 03E00008 */        jr $ra
  /* 16C5C0 8018D970 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl41_8018D974
  /* 16C5C4 8018D974 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16C5C8 8018D978 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16C5CC 8018D97C 00002025 */        or $a0, $zero, $zero
  /* 16C5D0 8018D980 00002825 */        or $a1, $zero, $zero
  /* 16C5D4 8018D984 24060013 */     addiu $a2, $zero, 0x13
  /* 16C5D8 8018D988 0C00265A */       jal omMakeGObjCommon
  /* 16C5DC 8018D98C 3C078000 */       lui $a3, 0x8000
  /* 16C5E0 8018D990 3C058019 */       lui $a1, %hi(func_ovl41_8018D874)
  /* 16C5E4 8018D994 240EFFFF */     addiu $t6, $zero, -1
  /* 16C5E8 8018D998 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16C5EC 8018D99C 24A5D874 */     addiu $a1, $a1, %lo(func_ovl41_8018D874)
  /* 16C5F0 8018D9A0 00402025 */        or $a0, $v0, $zero
  /* 16C5F4 8018D9A4 2406001C */     addiu $a2, $zero, 0x1c
  /* 16C5F8 8018D9A8 0C00277D */       jal func_80009DF4
  /* 16C5FC 8018D9AC 3C078000 */       lui $a3, 0x8000
  /* 16C600 8018D9B0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16C604 8018D9B4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16C608 8018D9B8 03E00008 */        jr $ra
  /* 16C60C 8018D9BC 00000000 */       nop 

glabel func_ovl41_8018D9C0
  /* 16C610 8018D9C0 3C038019 */       lui $v1, %hi(D_ovl41_8018E228)
  /* 16C614 8018D9C4 8C63E228 */        lw $v1, %lo(D_ovl41_8018E228)($v1)
  /* 16C618 8018D9C8 2401000F */     addiu $at, $zero, 0xf
  /* 16C61C 8018D9CC 3C058019 */       lui $a1, 0x8019
  /* 16C620 8018D9D0 10610009 */       beq $v1, $at, .L8018D9F8
  /* 16C624 8018D9D4 00601025 */        or $v0, $v1, $zero
  /* 16C628 8018D9D8 2401002D */     addiu $at, $zero, 0x2d
  /* 16C62C 8018D9DC 1041000B */       beq $v0, $at, .L8018DA0C
  /* 16C630 8018D9E0 3C058019 */       lui $a1, 0x8019
  /* 16C634 8018D9E4 2401003C */     addiu $at, $zero, 0x3c
  /* 16C638 8018D9E8 1041000D */       beq $v0, $at, .L8018DA20
  /* 16C63C 8018D9EC 3C058019 */       lui $a1, %hi(D_ovl41_8018E240)
  /* 16C640 8018D9F0 1000000F */         b .L8018DA30
  /* 16C644 8018D9F4 24A5E240 */     addiu $a1, $a1, %lo(D_ovl41_8018E240)
  .L8018D9F8:
  /* 16C648 8018D9F8 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 16C64C 8018D9FC 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 16C650 8018DA00 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16C654 8018DA04 1000000A */         b .L8018DA30
  /* 16C658 8018DA08 E4A40000 */      swc1 $f4, ($a1) # D_ovl41_8018E240 + 0
  .L8018DA0C:
  /* 16C65C 8018DA0C 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 16C660 8018DA10 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 16C664 8018DA14 24A5E240 */     addiu $a1, $a1, -0x1dc0
  /* 16C668 8018DA18 10000005 */         b .L8018DA30
  /* 16C66C 8018DA1C E4A60000 */      swc1 $f6, ($a1) # D_ovl41_8018E240 + 0
  .L8018DA20:
  /* 16C670 8018DA20 44804000 */      mtc1 $zero, $f8
  /* 16C674 8018DA24 3C058019 */       lui $a1, %hi(D_ovl41_8018E240)
  /* 16C678 8018DA28 24A5E240 */     addiu $a1, $a1, %lo(D_ovl41_8018E240)
  /* 16C67C 8018DA2C E4A80000 */      swc1 $f8, ($a1) # D_ovl41_8018E240 + 0
  .L8018DA30:
  /* 16C680 8018DA30 28610010 */      slti $at, $v1, 0x10
  /* 16C684 8018DA34 14200007 */      bnez $at, .L8018DA54
  /* 16C688 8018DA38 2861002D */      slti $at, $v1, 0x2d
  /* 16C68C 8018DA3C 10200005 */      beqz $at, .L8018DA54
  /* 16C690 8018DA40 3C018019 */       lui $at, %hi(D_ovl41_8018E210)
  /* 16C694 8018DA44 C430E210 */      lwc1 $f16, %lo(D_ovl41_8018E210)($at)
  /* 16C698 8018DA48 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl41_8018E240 + 0
  /* 16C69C 8018DA4C 46105480 */     add.s $f18, $f10, $f16
  /* 16C6A0 8018DA50 E4B20000 */      swc1 $f18, ($a1) # D_ovl41_8018E240 + 0
  .L8018DA54:
  /* 16C6A4 8018DA54 2861002E */      slti $at, $v1, 0x2e
  /* 16C6A8 8018DA58 14200007 */      bnez $at, .L8018DA78
  /* 16C6AC 8018DA5C 2861003C */      slti $at, $v1, 0x3c
  /* 16C6B0 8018DA60 10200005 */      beqz $at, .L8018DA78
  /* 16C6B4 8018DA64 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 16C6B8 8018DA68 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16C6BC 8018DA6C C4A40000 */      lwc1 $f4, ($a1) # D_ovl41_8018E240 + 0
  /* 16C6C0 8018DA70 46062200 */     add.s $f8, $f4, $f6
  /* 16C6C4 8018DA74 E4A80000 */      swc1 $f8, ($a1) # D_ovl41_8018E240 + 0
  .L8018DA78:
  /* 16C6C8 8018DA78 8C820074 */        lw $v0, 0x74($a0)
  /* 16C6CC 8018DA7C C4B00000 */      lwc1 $f16, ($a1) # D_ovl41_8018E240 + 0
  /* 16C6D0 8018DA80 C44A001C */      lwc1 $f10, 0x1c($v0)
  /* 16C6D4 8018DA84 46105480 */     add.s $f18, $f10, $f16
  /* 16C6D8 8018DA88 03E00008 */        jr $ra
  /* 16C6DC 8018DA8C E452001C */      swc1 $f18, 0x1c($v0)

glabel func_ovl41_8018DA90
  /* 16C6E0 8018DA90 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 16C6E4 8018DA94 AFB00018 */        sw $s0, 0x18($sp)
  /* 16C6E8 8018DA98 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16C6EC 8018DA9C 27B00024 */     addiu $s0, $sp, 0x24
  /* 16C6F0 8018DAA0 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 16C6F4 8018DAA4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16C6F8 8018DAA8 25C8003C */     addiu $t0, $t6, 0x3c
  /* 16C6FC 8018DAAC 0200C825 */        or $t9, $s0, $zero
  .L8018DAB0:
  /* 16C700 8018DAB0 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16C704 8018DAB4 25CE000C */     addiu $t6, $t6, 0xc
  /* 16C708 8018DAB8 2739000C */     addiu $t9, $t9, 0xc
  /* 16C70C 8018DABC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16C710 8018DAC0 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 16C714 8018DAC4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16C718 8018DAC8 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 16C71C 8018DACC 15C8FFF8 */       bne $t6, $t0, .L8018DAB0
  /* 16C720 8018DAD0 AF38FFFC */        sw $t8, -4($t9)
  /* 16C724 8018DAD4 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 16C728 8018DAD8 24090006 */     addiu $t1, $zero, 6
  /* 16C72C 8018DADC 24040006 */     addiu $a0, $zero, 6
  /* 16C730 8018DAE0 AF380000 */        sw $t8, ($t9)
  /* 16C734 8018DAE4 AFA90024 */        sw $t1, 0x24($sp)
  /* 16C738 8018DAE8 0C03B03B */       jal func_ovl2_800EC0EC
  /* 16C73C 8018DAEC 00002825 */        or $a1, $zero, $zero
  /* 16C740 8018DAF0 44800000 */      mtc1 $zero, $f0
  /* 16C744 8018DAF4 3C0A8019 */       lui $t2, %hi(D_ovl41_8018E23C)
  /* 16C748 8018DAF8 3C01C416 */       lui $at, (0xC4160000 >> 16) # -600.0
  /* 16C74C 8018DAFC 8D4AE23C */        lw $t2, %lo(D_ovl41_8018E23C)($t2)
  /* 16C750 8018DB00 44812000 */      mtc1 $at, $f4 # -600.0 to cop1
  /* 16C754 8018DB04 A3A2003B */        sb $v0, 0x3b($sp)
  /* 16C758 8018DB08 02002025 */        or $a0, $s0, $zero
  /* 16C75C 8018DB0C E7A0002C */      swc1 $f0, 0x2c($sp)
  /* 16C760 8018DB10 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 16C764 8018DB14 AFAA005C */        sw $t2, 0x5c($sp)
  /* 16C768 8018DB18 0C035FCF */       jal ftManager_CreateFighter
  /* 16C76C 8018DB1C E7A40028 */      swc1 $f4, 0x28($sp)
  /* 16C770 8018DB20 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 16C774 8018DB24 00408025 */        or $s0, $v0, $zero
  /* 16C778 8018DB28 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 16C77C 8018DB2C 0C0E4173 */       jal func_ovl1_803905CC
  /* 16C780 8018DB30 00402025 */        or $a0, $v0, $zero
  /* 16C784 8018DB34 02002025 */        or $a0, $s0, $zero
  /* 16C788 8018DB38 2405001A */     addiu $a1, $zero, 0x1a
  /* 16C78C 8018DB3C 0C002834 */       jal om_g_move_obj_dl
  /* 16C790 8018DB40 2406FFFF */     addiu $a2, $zero, -1
  /* 16C794 8018DB44 3C058019 */       lui $a1, %hi(func_ovl41_8018D9C0)
  /* 16C798 8018DB48 24A5D9C0 */     addiu $a1, $a1, %lo(func_ovl41_8018D9C0)
  /* 16C79C 8018DB4C 02002025 */        or $a0, $s0, $zero
  /* 16C7A0 8018DB50 24060001 */     addiu $a2, $zero, 1
  /* 16C7A4 8018DB54 0C002062 */       jal omAddGObjCommonProc
  /* 16C7A8 8018DB58 24070001 */     addiu $a3, $zero, 1
  /* 16C7AC 8018DB5C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16C7B0 8018DB60 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 16C7B4 8018DB64 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16C7B8 8018DB68 E5600040 */      swc1 $f0, 0x40($t3)
  /* 16C7BC 8018DB6C 8E0C0074 */        lw $t4, 0x74($s0)
  /* 16C7C0 8018DB70 E5800044 */      swc1 $f0, 0x44($t4)
  /* 16C7C4 8018DB74 8E0D0074 */        lw $t5, 0x74($s0)
  /* 16C7C8 8018DB78 E5A00048 */      swc1 $f0, 0x48($t5)
  /* 16C7CC 8018DB7C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16C7D0 8018DB80 8FB00018 */        lw $s0, 0x18($sp)
  /* 16C7D4 8018DB84 27BD0068 */     addiu $sp, $sp, 0x68
  /* 16C7D8 8018DB88 03E00008 */        jr $ra
  /* 16C7DC 8018DB8C 00000000 */       nop 

glabel func_ovl41_8018DB90
  /* 16C7E0 8018DB90 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 16C7E4 8018DB94 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 16C7E8 8018DB98 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16C7EC 8018DB9C 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16C7F0 8018DBA0 240F0050 */     addiu $t7, $zero, 0x50
  /* 16C7F4 8018DBA4 24180000 */     addiu $t8, $zero, 0
  /* 16C7F8 8018DBA8 3C190800 */       lui $t9, 0x800
  /* 16C7FC 8018DBAC 2408FFFF */     addiu $t0, $zero, -1
  /* 16C800 8018DBB0 24090001 */     addiu $t1, $zero, 1
  /* 16C804 8018DBB4 240A0001 */     addiu $t2, $zero, 1
  /* 16C808 8018DBB8 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16C80C 8018DBBC AFA90028 */        sw $t1, 0x28($sp)
  /* 16C810 8018DBC0 AFA80020 */        sw $t0, 0x20($sp)
  /* 16C814 8018DBC4 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16C818 8018DBC8 AFB80018 */        sw $t8, 0x18($sp)
  /* 16C81C 8018DBCC AFAF0014 */        sw $t7, 0x14($sp)
  /* 16C820 8018DBD0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16C824 8018DBD4 AFA00024 */        sw $zero, 0x24($sp)
  /* 16C828 8018DBD8 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16C82C 8018DBDC AFA00034 */        sw $zero, 0x34($sp)
  /* 16C830 8018DBE0 24040401 */     addiu $a0, $zero, 0x401
  /* 16C834 8018DBE4 00002825 */        or $a1, $zero, $zero
  /* 16C838 8018DBE8 24060010 */     addiu $a2, $zero, 0x10
  /* 16C83C 8018DBEC 0C002E4F */       jal func_8000B93C
  /* 16C840 8018DBF0 3C078000 */       lui $a3, 0x8000
  /* 16C844 8018DBF4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 16C848 8018DBF8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16C84C 8018DBFC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16C850 8018DC00 8C430074 */        lw $v1, 0x74($v0)
  /* 16C854 8018DC04 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16C858 8018DC08 44050000 */      mfc1 $a1, $f0
  /* 16C85C 8018DC0C 44060000 */      mfc1 $a2, $f0
  /* 16C860 8018DC10 3C07439B */       lui $a3, 0x439b
  /* 16C864 8018DC14 24640008 */     addiu $a0, $v1, 8
  /* 16C868 8018DC18 0C001C20 */       jal func_80007080
  /* 16C86C 8018DC1C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16C870 8018DC20 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16C874 8018DC24 27BD0040 */     addiu $sp, $sp, 0x40
  /* 16C878 8018DC28 03E00008 */        jr $ra
  /* 16C87C 8018DC2C 00000000 */       nop 

glabel func_ovl41_8018DC30
  /* 16C880 8018DC30 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16C884 8018DC34 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16C888 8018DC38 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16C88C 8018DC3C 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16C890 8018DC40 240F000A */     addiu $t7, $zero, 0xa
  /* 16C894 8018DC44 24180000 */     addiu $t8, $zero, 0
  /* 16C898 8018DC48 3C190400 */       lui $t9, 0x400
  /* 16C89C 8018DC4C 2408FFFF */     addiu $t0, $zero, -1
  /* 16C8A0 8018DC50 24090001 */     addiu $t1, $zero, 1
  /* 16C8A4 8018DC54 240A0001 */     addiu $t2, $zero, 1
  /* 16C8A8 8018DC58 240B0001 */     addiu $t3, $zero, 1
  /* 16C8AC 8018DC5C AFAB0030 */        sw $t3, 0x30($sp)
  /* 16C8B0 8018DC60 AFAA0028 */        sw $t2, 0x28($sp)
  /* 16C8B4 8018DC64 AFA90024 */        sw $t1, 0x24($sp)
  /* 16C8B8 8018DC68 AFA80020 */        sw $t0, 0x20($sp)
  /* 16C8BC 8018DC6C AFB9001C */        sw $t9, 0x1c($sp)
  /* 16C8C0 8018DC70 AFB80018 */        sw $t8, 0x18($sp)
  /* 16C8C4 8018DC74 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16C8C8 8018DC78 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16C8CC 8018DC7C AFA0002C */        sw $zero, 0x2c($sp)
  /* 16C8D0 8018DC80 AFA00034 */        sw $zero, 0x34($sp)
  /* 16C8D4 8018DC84 24040401 */     addiu $a0, $zero, 0x401
  /* 16C8D8 8018DC88 00002825 */        or $a1, $zero, $zero
  /* 16C8DC 8018DC8C 24060010 */     addiu $a2, $zero, 0x10
  /* 16C8E0 8018DC90 0C002E4F */       jal func_8000B93C
  /* 16C8E4 8018DC94 3C078000 */       lui $a3, 0x8000
  /* 16C8E8 8018DC98 AFA20044 */        sw $v0, 0x44($sp)
  /* 16C8EC 8018DC9C 8C430074 */        lw $v1, 0x74($v0)
  /* 16C8F0 8018DCA0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16C8F4 8018DCA4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16C8F8 8018DCA8 3C054120 */       lui $a1, 0x4120
  /* 16C8FC 8018DCAC 3C064316 */       lui $a2, 0x4316
  /* 16C900 8018DCB0 3C07439B */       lui $a3, 0x439b
  /* 16C904 8018DCB4 24640008 */     addiu $a0, $v1, 8
  /* 16C908 8018DCB8 AFA30040 */        sw $v1, 0x40($sp)
  /* 16C90C 8018DCBC 0C001C20 */       jal func_80007080
  /* 16C910 8018DCC0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16C914 8018DCC4 3C014070 */       lui $at, (0x40700000 >> 16) # 3.75
  /* 16C918 8018DCC8 8FA40040 */        lw $a0, 0x40($sp)
  /* 16C91C 8018DCCC 44813000 */      mtc1 $at, $f6 # 3.75 to cop1
  /* 16C920 8018DCD0 3C0C8019 */       lui $t4, %hi(D_ovl41_8018E444)
  /* 16C924 8018DCD4 3C0D0000 */       lui $t5, %hi(D_NF_000000F0)
  /* 16C928 8018DCD8 E4860024 */      swc1 $f6, 0x24($a0)
  /* 16C92C 8018DCDC 8D8CE444 */        lw $t4, %lo(D_ovl41_8018E444)($t4)
  /* 16C930 8018DCE0 25AD00F0 */     addiu $t5, $t5, %lo(D_NF_000000F0)
  /* 16C934 8018DCE4 24060000 */     addiu $a2, $zero, 0
  /* 16C938 8018DCE8 0C003E8F */       jal func_8000FA3C
  /* 16C93C 8018DCEC 018D2821 */      addu $a1, $t4, $t5
  /* 16C940 8018DCF0 3C058001 */       lui $a1, %hi(func_80010580)
  /* 16C944 8018DCF4 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 16C948 8018DCF8 8FA40044 */        lw $a0, 0x44($sp)
  /* 16C94C 8018DCFC 24060001 */     addiu $a2, $zero, 1
  /* 16C950 8018DD00 0C002062 */       jal omAddGObjCommonProc
  /* 16C954 8018DD04 24070001 */     addiu $a3, $zero, 1
  /* 16C958 8018DD08 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16C95C 8018DD0C 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16C960 8018DD10 03E00008 */        jr $ra
  /* 16C964 8018DD14 00000000 */       nop 

glabel func_ovl41_8018DD18
  /* 16C968 8018DD18 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 16C96C 8018DD1C 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 16C970 8018DD20 AFBF003C */        sw $ra, 0x3c($sp)
  /* 16C974 8018DD24 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16C978 8018DD28 240F0014 */     addiu $t7, $zero, 0x14
  /* 16C97C 8018DD2C 24180000 */     addiu $t8, $zero, 0
  /* 16C980 8018DD30 3C191000 */       lui $t9, 0x1000
  /* 16C984 8018DD34 2408FFFF */     addiu $t0, $zero, -1
  /* 16C988 8018DD38 24090001 */     addiu $t1, $zero, 1
  /* 16C98C 8018DD3C 240A0001 */     addiu $t2, $zero, 1
  /* 16C990 8018DD40 AFAA0030 */        sw $t2, 0x30($sp)
  /* 16C994 8018DD44 AFA90028 */        sw $t1, 0x28($sp)
  /* 16C998 8018DD48 AFA80020 */        sw $t0, 0x20($sp)
  /* 16C99C 8018DD4C AFB9001C */        sw $t9, 0x1c($sp)
  /* 16C9A0 8018DD50 AFB80018 */        sw $t8, 0x18($sp)
  /* 16C9A4 8018DD54 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16C9A8 8018DD58 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16C9AC 8018DD5C AFA00024 */        sw $zero, 0x24($sp)
  /* 16C9B0 8018DD60 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16C9B4 8018DD64 AFA00034 */        sw $zero, 0x34($sp)
  /* 16C9B8 8018DD68 24040401 */     addiu $a0, $zero, 0x401
  /* 16C9BC 8018DD6C 00002825 */        or $a1, $zero, $zero
  /* 16C9C0 8018DD70 24060010 */     addiu $a2, $zero, 0x10
  /* 16C9C4 8018DD74 0C002E4F */       jal func_8000B93C
  /* 16C9C8 8018DD78 3C078000 */       lui $a3, 0x8000
  /* 16C9CC 8018DD7C 8C430074 */        lw $v1, 0x74($v0)
  /* 16C9D0 8018DD80 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 16C9D4 8018DD84 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 16C9D8 8018DD88 3C054120 */       lui $a1, 0x4120
  /* 16C9DC 8018DD8C 3C064316 */       lui $a2, 0x4316
  /* 16C9E0 8018DD90 3C07439B */       lui $a3, 0x439b
  /* 16C9E4 8018DD94 24640008 */     addiu $a0, $v1, 8
  /* 16C9E8 8018DD98 AFA30044 */        sw $v1, 0x44($sp)
  /* 16C9EC 8018DD9C 0C001C20 */       jal func_80007080
  /* 16C9F0 8018DDA0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16C9F4 8018DDA4 8FA30044 */        lw $v1, 0x44($sp)
  /* 16C9F8 8018DDA8 240B0005 */     addiu $t3, $zero, 5
  /* 16C9FC 8018DDAC AC6B0080 */        sw $t3, 0x80($v1)
  /* 16CA00 8018DDB0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 16CA04 8018DDB4 27BD0048 */     addiu $sp, $sp, 0x48
  /* 16CA08 8018DDB8 03E00008 */        jr $ra
  /* 16CA0C 8018DDBC 00000000 */       nop 

glabel func_ovl41_8018DDC0
  /* 16CA10 8018DDC0 3C028019 */       lui $v0, %hi(D_ovl41_8018E228)
  /* 16CA14 8018DDC4 2442E228 */     addiu $v0, $v0, %lo(D_ovl41_8018E228)
  /* 16CA18 8018DDC8 8C4E0000 */        lw $t6, ($v0) # D_ovl41_8018E228 + 0
  /* 16CA1C 8018DDCC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16CA20 8018DDD0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16CA24 8018DDD4 AFA40018 */        sw $a0, 0x18($sp)
  /* 16CA28 8018DDD8 25CF0001 */     addiu $t7, $t6, 1
  /* 16CA2C 8018DDDC AC4F0000 */        sw $t7, ($v0) # D_ovl41_8018E228 + 0
  /* 16CA30 8018DDE0 0C0E41DB */       jal func_ovl1_8039076C
  /* 16CA34 8018DDE4 3404D000 */       ori $a0, $zero, 0xd000
  /* 16CA38 8018DDE8 10400007 */      beqz $v0, .L8018DE08
  /* 16CA3C 8018DDEC 24190001 */     addiu $t9, $zero, 1
  /* 16CA40 8018DDF0 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16CA44 8018DDF4 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16CA48 8018DDF8 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 16CA4C 8018DDFC A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16CA50 8018DE00 0C00171D */       jal func_80005C74
  /* 16CA54 8018DE04 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DE08:
  /* 16CA58 8018DE08 3C028019 */       lui $v0, %hi(D_ovl41_8018E228)
  /* 16CA5C 8018DE0C 8C42E228 */        lw $v0, %lo(D_ovl41_8018E228)($v0)
  /* 16CA60 8018DE10 2401000F */     addiu $at, $zero, 0xf
  /* 16CA64 8018DE14 3C048019 */       lui $a0, %hi(D_ovl41_8018E22C)
  /* 16CA68 8018DE18 5441000C */      bnel $v0, $at, .L8018DE4C
  /* 16CA6C 8018DE1C 2401003C */     addiu $at, $zero, 0x3c
  /* 16CA70 8018DE20 0C0026A1 */       jal omEjectGObjCommon
  /* 16CA74 8018DE24 8C84E22C */        lw $a0, %lo(D_ovl41_8018E22C)($a0)
  /* 16CA78 8018DE28 0C063587 */       jal func_ovl41_8018D61C
  /* 16CA7C 8018DE2C 00000000 */       nop 
  /* 16CA80 8018DE30 0C06365D */       jal func_ovl41_8018D974
  /* 16CA84 8018DE34 00000000 */       nop 
  /* 16CA88 8018DE38 0C0636A4 */       jal func_ovl41_8018DA90
  /* 16CA8C 8018DE3C 00000000 */       nop 
  /* 16CA90 8018DE40 3C028019 */       lui $v0, %hi(D_ovl41_8018E228)
  /* 16CA94 8018DE44 8C42E228 */        lw $v0, %lo(D_ovl41_8018E228)($v0)
  /* 16CA98 8018DE48 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE4C:
  /* 16CA9C 8018DE4C 14410007 */       bne $v0, $at, .L8018DE6C
  /* 16CAA0 8018DE50 24090025 */     addiu $t1, $zero, 0x25
  /* 16CAA4 8018DE54 3C02800A */       lui $v0, %hi(gSceneData)
  /* 16CAA8 8018DE58 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 16CAAC 8018DE5C 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16CAB0 8018DE60 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 16CAB4 8018DE64 0C00171D */       jal func_80005C74
  /* 16CAB8 8018DE68 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE6C:
  /* 16CABC 8018DE6C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16CAC0 8018DE70 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16CAC4 8018DE74 03E00008 */        jr $ra
  /* 16CAC8 8018DE78 00000000 */       nop 

glabel func_ovl41_8018DE7C
  /* 16CACC 8018DE7C 3C018019 */       lui $at, %hi(D_ovl41_8018E228)
  /* 16CAD0 8018DE80 03E00008 */        jr $ra
  /* 16CAD4 8018DE84 AC20E228 */        sw $zero, %lo(D_ovl41_8018E228)($at)

glabel func_ovl41_8018DE88
  /* 16CAD8 8018DE88 3C038019 */       lui $v1, %hi(D_ovl41_8018E448)
  /* 16CADC 8018DE8C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16CAE0 8018DE90 2463E448 */     addiu $v1, $v1, %lo(D_ovl41_8018E448)
  /* 16CAE4 8018DE94 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 16CAE8 8018DE98 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 16CAEC 8018DE9C 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 16CAF0 8018DEA0 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 16CAF4 8018DEA4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 16CAF8 8018DEA8 24040004 */     addiu $a0, $zero, 4
  /* 16CAFC 8018DEAC 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 16CB00 8018DEB0 0060C825 */        or $t9, $v1, $zero
  .L8018DEB4:
  /* 16CB04 8018DEB4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16CB08 8018DEB8 25CE000C */     addiu $t6, $t6, 0xc
  /* 16CB0C 8018DEBC 2739000C */     addiu $t9, $t9, 0xc
  /* 16CB10 8018DEC0 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 16CB14 8018DEC4 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 16CB18 8018DEC8 AF2FFFF8 */        sw $t7, -8($t9)
  /* 16CB1C 8018DECC 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 16CB20 8018DED0 15C8FFF8 */       bne $t6, $t0, .L8018DEB4
  /* 16CB24 8018DED4 AF38FFFC */        sw $t8, -4($t9)
  /* 16CB28 8018DED8 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 16CB2C 8018DEDC 240A0005 */     addiu $t2, $zero, 5
  /* 16CB30 8018DEE0 240C0001 */     addiu $t4, $zero, 1
  /* 16CB34 8018DEE4 AF380000 */        sw $t8, ($t9)
  /* 16CB38 8018DEE8 24080006 */     addiu $t0, $zero, 6
  /* 16CB3C 8018DEEC AC430000 */        sw $v1, ($v0) # gpBattleState + 0
  /* 16CB40 8018DEF0 A0640000 */        sb $a0, ($v1) # D_ovl41_8018E448 + 0
  /* 16CB44 8018DEF4 A06A0001 */        sb $t2, 1($v1) # D_ovl41_8018E448 + 1
  /* 16CB48 8018DEF8 A06C0004 */        sb $t4, 4($v1) # D_ovl41_8018E448 + 4
  /* 16CB4C 8018DEFC A0680023 */        sb $t0, 0x23($v1) # D_ovl41_8018E448 + 35
  /* 16CB50 8018DF00 0C063430 */       jal func_ovl41_8018D0C0
  /* 16CB54 8018DF04 A0640022 */        sb $a0, 0x22($v1) # D_ovl41_8018E448 + 34
  /* 16CB58 8018DF08 3C058019 */       lui $a1, %hi(func_ovl41_8018DDC0)
  /* 16CB5C 8018DF0C 24A5DDC0 */     addiu $a1, $a1, %lo(func_ovl41_8018DDC0)
  /* 16CB60 8018DF10 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 16CB64 8018DF14 2406000D */     addiu $a2, $zero, 0xd
  /* 16CB68 8018DF18 0C00265A */       jal omMakeGObjCommon
  /* 16CB6C 8018DF1C 3C078000 */       lui $a3, 0x8000
  /* 16CB70 8018DF20 240F00FF */     addiu $t7, $zero, 0xff
  /* 16CB74 8018DF24 AFAF0010 */        sw $t7, 0x10($sp)
  /* 16CB78 8018DF28 24040009 */     addiu $a0, $zero, 9
  /* 16CB7C 8018DF2C 3C058000 */       lui $a1, 0x8000
  /* 16CB80 8018DF30 24060064 */     addiu $a2, $zero, 0x64
  /* 16CB84 8018DF34 0C002E7F */       jal func_8000B9FC
  /* 16CB88 8018DF38 24070003 */     addiu $a3, $zero, 3
  /* 16CB8C 8018DF3C 0C06379F */       jal func_ovl41_8018DE7C
  /* 16CB90 8018DF40 00000000 */       nop 
  /* 16CB94 8018DF44 0C045624 */       jal func_ovl2_80115890
  /* 16CB98 8018DF48 00000000 */       nop 
  /* 16CB9C 8018DF4C 0C03B04C */       jal func_ovl2_800EC130
  /* 16CBA0 8018DF50 00000000 */       nop 
  /* 16CBA4 8018DF54 0C03F0A1 */       jal func_ovl2_800FC284
  /* 16CBA8 8018DF58 00000000 */       nop 
  /* 16CBAC 8018DF5C 2404000A */     addiu $a0, $zero, 0xa
  /* 16CBB0 8018DF60 2405000A */     addiu $a1, $zero, 0xa
  /* 16CBB4 8018DF64 24060136 */     addiu $a2, $zero, 0x136
  /* 16CBB8 8018DF68 0C043966 */       jal func_ovl2_8010E598
  /* 16CBBC 8018DF6C 240700E6 */     addiu $a3, $zero, 0xe6
  /* 16CBC0 8018DF70 0C0436D5 */       jal func_ovl2_8010DB54
  /* 16CBC4 8018DF74 00000000 */       nop 
  /* 16CBC8 8018DF78 24040003 */     addiu $a0, $zero, 3
  /* 16CBCC 8018DF7C 0C035C65 */       jal func_ovl2_800D7194
  /* 16CBD0 8018DF80 24050002 */     addiu $a1, $zero, 2
  /* 16CBD4 8018DF84 0C05952C */       jal func_NF_801654B0 # couldn't be resolved
  /* 16CBD8 8018DF88 00000000 */       nop 
  /* 16CBDC 8018DF8C 0C05B7A8 */       jal func_NF_8016DEA0 # couldn't be resolved
  /* 16CBE0 8018DF90 00000000 */       nop 
  /* 16CBE4 8018DF94 0C03F4C0 */       jal efManager_AllocUserData
  /* 16CBE8 8018DF98 00000000 */       nop 
  /* 16CBEC 8018DF9C 0C035E1B */       jal func_ovl2_800D786C
  /* 16CBF0 8018DFA0 24040006 */     addiu $a0, $zero, 6
  /* 16CBF4 8018DFA4 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 16CBF8 8018DFA8 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 16CBFC 8018DFAC 0C001260 */       jal hal_alloc
  /* 16CC00 8018DFB0 24050010 */     addiu $a1, $zero, 0x10
  /* 16CC04 8018DFB4 3C018019 */       lui $at, %hi(D_ovl41_8018E23C)
  /* 16CC08 8018DFB8 0C0636E4 */       jal func_ovl41_8018DB90
  /* 16CC0C 8018DFBC AC22E23C */        sw $v0, %lo(D_ovl41_8018E23C)($at)
  /* 16CC10 8018DFC0 0C063746 */       jal func_ovl41_8018DD18
  /* 16CC14 8018DFC4 00000000 */       nop 
  /* 16CC18 8018DFC8 0C06370C */       jal func_ovl41_8018DC30
  /* 16CC1C 8018DFCC 00000000 */       nop 
  /* 16CC20 8018DFD0 0C063465 */       jal func_ovl41_8018D194
  /* 16CC24 8018DFD4 00000000 */       nop 
  /* 16CC28 8018DFD8 0C00024B */       jal func_8000092C
  /* 16CC2C 8018DFDC 00000000 */       nop 
  /* 16CC30 8018DFE0 2C410753 */     sltiu $at, $v0, 0x753
  /* 16CC34 8018DFE4 50200007 */      beql $at, $zero, .L8018E004
  /* 16CC38 8018DFE8 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFEC:
  /* 16CC3C 8018DFEC 0C00024B */       jal func_8000092C
  /* 16CC40 8018DFF0 00000000 */       nop 
  /* 16CC44 8018DFF4 2C410753 */     sltiu $at, $v0, 0x753
  /* 16CC48 8018DFF8 1420FFFC */      bnez $at, .L8018DFEC
  /* 16CC4C 8018DFFC 00000000 */       nop 
  /* 16CC50 8018E000 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E004:
  /* 16CC54 8018E004 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16CC58 8018E008 03E00008 */        jr $ra
  /* 16CC5C 8018E00C 00000000 */       nop 

glabel func_ovl41_8018E010
  /* 16CC60 8018E010 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16CC64 8018E014 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16CC68 8018E018 8C830000 */        lw $v1, ($a0)
  /* 16CC6C 8018E01C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 16CC70 8018E020 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 16CC74 8018E024 246E0008 */     addiu $t6, $v1, 8
  /* 16CC78 8018E028 AC8E0000 */        sw $t6, ($a0)
  /* 16CC7C 8018E02C 3C180002 */       lui $t8, 2
  /* 16CC80 8018E030 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 16CC84 8018E034 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16CC88 8018E038 AC780004 */        sw $t8, 4($v1)
  /* 16CC8C 8018E03C AC6F0000 */        sw $t7, ($v1)
  /* 16CC90 8018E040 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 16CC94 8018E044 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16CC98 8018E048 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 16CC9C 8018E04C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16CCA0 8018E050 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16CCA4 8018E054 03E00008 */        jr $ra
  /* 16CCA8 8018E058 00000000 */       nop 

glabel intro_focus_yoshi_entry
  /* 16CCAC 8018E05C 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 16CCB0 8018E060 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 16CCB4 8018E064 3C048019 */       lui $a0, %hi(D_ovl41_8018E13C)
  /* 16CCB8 8018E068 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 16CCBC 8018E06C 2484E13C */     addiu $a0, $a0, %lo(D_ovl41_8018E13C)
  /* 16CCC0 8018E070 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16CCC4 8018E074 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16CCC8 8018E078 0C001C09 */       jal func_80007024
  /* 16CCCC 8018E07C AC8F000C */        sw $t7, 0xc($a0) # D_ovl41_8018E13C + 12
  /* 16CCD0 8018E080 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 16CCD4 8018E084 3C198019 */       lui $t9, %hi(D_NF_8018E640)
  /* 16CCD8 8018E088 3C048019 */       lui $a0, %hi(D_ovl41_8018E158)
  /* 16CCDC 8018E08C 2739E640 */     addiu $t9, $t9, %lo(D_NF_8018E640)
  /* 16CCE0 8018E090 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 16CCE4 8018E094 2484E158 */     addiu $a0, $a0, %lo(D_ovl41_8018E158)
  /* 16CCE8 8018E098 03194023 */      subu $t0, $t8, $t9
  /* 16CCEC 8018E09C 0C001A0F */       jal func_8000683C
  /* 16CCF0 8018E0A0 AC880010 */        sw $t0, 0x10($a0) # D_ovl41_8018E158 + 16
  /* 16CCF4 8018E0A4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16CCF8 8018E0A8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 16CCFC 8018E0AC 03E00008 */        jr $ra
  /* 16CD00 8018E0B0 00000000 */       nop 

  /* 16CD04 8018E0B4 00000000 */       nop 
  /* 16CD08 8018E0B8 00000000 */       nop 
  /* 16CD0C 8018E0BC 00000000 */       nop 

# Likely start of new file
#glabel D_ovl41_8018E0C0   # Routine parsed as data
#  /* 16CD10 8018E0C0 44960000 */      mtc1 $s6, $f0
