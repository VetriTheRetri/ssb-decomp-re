.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E090

glabel func_ovl36_8018D0C0
  /* 1666F0 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1666F4 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 1666F8 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 1666FC 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl36_8018E268)
  /* 166700 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl36_8018E3E8)
  /* 166704 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 166708 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 16670C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 166710 8018D0E0 2718E268 */     addiu $t8, $t8, %lo(D_ovl36_8018E268)
  /* 166714 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 166718 8018D0E8 2508E3E8 */     addiu $t0, $t0, %lo(D_ovl36_8018E3E8)
  /* 16671C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 166720 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 166724 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 166728 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 16672C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 166730 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 166734 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 166738 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 16673C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 166740 8018D110 0C0337DE */       jal rldm_initialize
  /* 166744 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 166748 8018D118 3C048019 */       lui $a0, %hi(D_ovl36_8018E0E8)
  /* 16674C 8018D11C 2484E0E8 */     addiu $a0, $a0, %lo(D_ovl36_8018E0E8)
  /* 166750 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 166754 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 166758 8018D128 00402025 */        or $a0, $v0, $zero
  /* 16675C 8018D12C 0C001260 */       jal hal_alloc
  /* 166760 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 166764 8018D134 3C048019 */       lui $a0, %hi(D_ovl36_8018E0E8)
  /* 166768 8018D138 3C068019 */       lui $a2, %hi(D_ovl36_8018E420)
  /* 16676C 8018D13C 24C6E420 */     addiu $a2, $a2, %lo(D_ovl36_8018E420)
  /* 166770 8018D140 2484E0E8 */     addiu $a0, $a0, %lo(D_ovl36_8018E0E8)
  /* 166774 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 166778 8018D148 0C033781 */       jal rldm_load_files_into
  /* 16677C 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 166780 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 166784 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 166788 8018D158 03E00008 */        jr $ra
  /* 16678C 8018D15C 00000000 */       nop 

glabel func_ovl36_8018D160
  /* 166790 8018D160 948E0024 */       lhu $t6, 0x24($a0)
  /* 166794 8018D164 240200FF */     addiu $v0, $zero, 0xff
  /* 166798 8018D168 A0820060 */        sb $v0, 0x60($a0)
  /* 16679C 8018D16C 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 1667A0 8018D170 A4980024 */        sh $t8, 0x24($a0)
  /* 1667A4 8018D174 37190001 */       ori $t9, $t8, 1
  /* 1667A8 8018D178 A4990024 */        sh $t9, 0x24($a0)
  /* 1667AC 8018D17C A0820061 */        sb $v0, 0x61($a0)
  /* 1667B0 8018D180 A0820062 */        sb $v0, 0x62($a0)
  /* 1667B4 8018D184 A0820028 */        sb $v0, 0x28($a0)
  /* 1667B8 8018D188 A0820029 */        sb $v0, 0x29($a0)
  /* 1667BC 8018D18C 03E00008 */        jr $ra
  /* 1667C0 8018D190 A082002A */        sb $v0, 0x2a($a0)

glabel func_ovl36_8018D194
  /* 1667C4 8018D194 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 1667C8 8018D198 3C0F8019 */       lui $t7, %hi(D_ovl36_8018E0F0)
  /* 1667CC 8018D19C AFBF0044 */        sw $ra, 0x44($sp)
  /* 1667D0 8018D1A0 AFB40040 */        sw $s4, 0x40($sp)
  /* 1667D4 8018D1A4 AFB3003C */        sw $s3, 0x3c($sp)
  /* 1667D8 8018D1A8 AFB20038 */        sw $s2, 0x38($sp)
  /* 1667DC 8018D1AC AFB10034 */        sw $s1, 0x34($sp)
  /* 1667E0 8018D1B0 AFB00030 */        sw $s0, 0x30($sp)
  /* 1667E4 8018D1B4 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 1667E8 8018D1B8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 1667EC 8018D1BC 25EFE0F0 */     addiu $t7, $t7, %lo(D_ovl36_8018E0F0)
  /* 1667F0 8018D1C0 8DF90000 */        lw $t9, ($t7) # D_ovl36_8018E0F0 + 0
  /* 1667F4 8018D1C4 8DF80004 */        lw $t8, 4($t7) # D_ovl36_8018E0F0 + 4
  /* 1667F8 8018D1C8 27AE0070 */     addiu $t6, $sp, 0x70
  /* 1667FC 8018D1CC ADD90000 */        sw $t9, ($t6)
  /* 166800 8018D1D0 ADD80004 */        sw $t8, 4($t6)
  /* 166804 8018D1D4 8DF8000C */        lw $t8, 0xc($t7) # D_ovl36_8018E0F0 + 12
  /* 166808 8018D1D8 8DF90008 */        lw $t9, 8($t7) # D_ovl36_8018E0F0 + 8
  /* 16680C 8018D1DC 3C098019 */       lui $t1, %hi(D_ovl36_8018E108)
  /* 166810 8018D1E0 ADD8000C */        sw $t8, 0xc($t6)
  /* 166814 8018D1E4 ADD90008 */        sw $t9, 8($t6)
  /* 166818 8018D1E8 8DF90010 */        lw $t9, 0x10($t7) # D_ovl36_8018E0F0 + 16
  /* 16681C 8018D1EC 8DF80014 */        lw $t8, 0x14($t7) # D_ovl36_8018E0F0 + 20
  /* 166820 8018D1F0 2529E108 */     addiu $t1, $t1, %lo(D_ovl36_8018E108)
  /* 166824 8018D1F4 ADD90010 */        sw $t9, 0x10($t6)
  /* 166828 8018D1F8 ADD80014 */        sw $t8, 0x14($t6)
  /* 16682C 8018D1FC 8D2B0000 */        lw $t3, ($t1) # D_ovl36_8018E108 + 0
  /* 166830 8018D200 27A8005C */     addiu $t0, $sp, 0x5c
  /* 166834 8018D204 8D2A0004 */        lw $t2, 4($t1) # D_ovl36_8018E108 + 4
  /* 166838 8018D208 AD0B0000 */        sw $t3, ($t0)
  /* 16683C 8018D20C 8D2B0008 */        lw $t3, 8($t1) # D_ovl36_8018E108 + 8
  /* 166840 8018D210 AD0A0004 */        sw $t2, 4($t0)
  /* 166844 8018D214 8D2A000C */        lw $t2, 0xc($t1) # D_ovl36_8018E108 + 12
  /* 166848 8018D218 AD0B0008 */        sw $t3, 8($t0)
  /* 16684C 8018D21C 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl36_8018E108 + 16
  /* 166850 8018D220 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 166854 8018D224 02003825 */        or $a3, $s0, $zero
  /* 166858 8018D228 00002025 */        or $a0, $zero, $zero
  /* 16685C 8018D22C 00002825 */        or $a1, $zero, $zero
  /* 166860 8018D230 24060011 */     addiu $a2, $zero, 0x11
  /* 166864 8018D234 AD0A000C */        sw $t2, 0xc($t0)
  /* 166868 8018D238 0C00265A */       jal omMakeGObjCommon
  /* 16686C 8018D23C AD0B0010 */        sw $t3, 0x10($t0)
  /* 166870 8018D240 3C018019 */       lui $at, %hi(D_ovl36_8018E20C)
  /* 166874 8018D244 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 166878 8018D248 240CFFFF */     addiu $t4, $zero, -1
  /* 16687C 8018D24C AC22E20C */        sw $v0, %lo(D_ovl36_8018E20C)($at)
  /* 166880 8018D250 0040A025 */        or $s4, $v0, $zero
  /* 166884 8018D254 AFAC0010 */        sw $t4, 0x10($sp)
  /* 166888 8018D258 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 16688C 8018D25C 00402025 */        or $a0, $v0, $zero
  /* 166890 8018D260 2406001B */     addiu $a2, $zero, 0x1b
  /* 166894 8018D264 0C00277D */       jal func_80009DF4
  /* 166898 8018D268 02003825 */        or $a3, $s0, $zero
  /* 16689C 8018D26C 8FAD0070 */        lw $t5, 0x70($sp)
  /* 1668A0 8018D270 27B00070 */     addiu $s0, $sp, 0x70
  /* 1668A4 8018D274 27B1005C */     addiu $s1, $sp, 0x5c
  /* 1668A8 8018D278 11A0001C */      beqz $t5, .L8018D2EC
  /* 1668AC 8018D27C 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 1668B0 8018D280 4481B000 */      mtc1 $at, $f22 # 100.0 to cop1
  /* 1668B4 8018D284 3C0142A0 */       lui $at, (0x42A00000 >> 16) # 80.0
  /* 1668B8 8018D288 3C128019 */       lui $s2, %hi(D_ovl36_8018E420)
  /* 1668BC 8018D28C 4481A000 */      mtc1 $at, $f20 # 80.0 to cop1
  /* 1668C0 8018D290 2652E420 */     addiu $s2, $s2, %lo(D_ovl36_8018E420)
  /* 1668C4 8018D294 8E020000 */        lw $v0, %lo(D_NF_80000000)($s0)
  /* 1668C8 8018D298 2413FFDF */     addiu $s3, $zero, -0x21
  /* 1668CC 8018D29C 8E4F0000 */        lw $t7, ($s2) # D_ovl36_8018E420 + 0
  .L8018D2A0:
  /* 1668D0 8018D2A0 02802025 */        or $a0, $s4, $zero
  /* 1668D4 8018D2A4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 1668D8 8018D2A8 004F2821 */      addu $a1, $v0, $t7
  /* 1668DC 8018D2AC 94580024 */       lhu $t8, 0x24($v0)
  /* 1668E0 8018D2B0 00402025 */        or $a0, $v0, $zero
  /* 1668E4 8018D2B4 03134024 */       and $t0, $t8, $s3
  /* 1668E8 8018D2B8 A4480024 */        sh $t0, 0x24($v0)
  /* 1668EC 8018D2BC 35090001 */       ori $t1, $t0, 1
  /* 1668F0 8018D2C0 A4490024 */        sh $t1, 0x24($v0)
  /* 1668F4 8018D2C4 C6240000 */      lwc1 $f4, ($s1)
  /* 1668F8 8018D2C8 E456005C */      swc1 $f22, 0x5c($v0)
  /* 1668FC 8018D2CC 46142180 */     add.s $f6, $f4, $f20
  /* 166900 8018D2D0 0C063458 */       jal func_ovl36_8018D160
  /* 166904 8018D2D4 E4460058 */      swc1 $f6, 0x58($v0)
  /* 166908 8018D2D8 8E020004 */        lw $v0, %lo(D_NF_80000004)($s0)
  /* 16690C 8018D2DC 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 166910 8018D2E0 26310004 */     addiu $s1, $s1, 4
  /* 166914 8018D2E4 5440FFEE */      bnel $v0, $zero, .L8018D2A0
  /* 166918 8018D2E8 8E4F0000 */        lw $t7, ($s2) # D_ovl36_8018E420 + 0
  .L8018D2EC:
  /* 16691C 8018D2EC 8FBF0044 */        lw $ra, 0x44($sp)
  /* 166920 8018D2F0 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 166924 8018D2F4 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 166928 8018D2F8 8FB00030 */        lw $s0, 0x30($sp)
  /* 16692C 8018D2FC 8FB10034 */        lw $s1, 0x34($sp)
  /* 166930 8018D300 8FB20038 */        lw $s2, 0x38($sp)
  /* 166934 8018D304 8FB3003C */        lw $s3, 0x3c($sp)
  /* 166938 8018D308 8FB40040 */        lw $s4, 0x40($sp)
  /* 16693C 8018D30C 03E00008 */        jr $ra
  /* 166940 8018D310 27BD0090 */     addiu $sp, $sp, 0x90

glabel func_ovl36_8018D314
  /* 166944 8018D314 3C0E8019 */       lui $t6, %hi(D_ovl36_8018E208)
  /* 166948 8018D318 8DCEE208 */        lw $t6, %lo(D_ovl36_8018E208)($t6)
  /* 16694C 8018D31C 3C038019 */       lui $v1, %hi(D_ovl36_8018E248)
  /* 166950 8018D320 8C820074 */        lw $v0, 0x74($a0)
  /* 166954 8018D324 29C1000F */      slti $at, $t6, 0xf
  /* 166958 8018D328 14200036 */      bnez $at, .L8018D404
  /* 16695C 8018D32C 2463E248 */     addiu $v1, $v1, %lo(D_ovl36_8018E248)
  /* 166960 8018D330 3C048019 */       lui $a0, %hi(D_ovl36_8018E228)
  /* 166964 8018D334 2484E228 */     addiu $a0, $a0, %lo(D_ovl36_8018E228)
  /* 166968 8018D338 C4860000 */      lwc1 $f6, ($a0) # D_ovl36_8018E228 + 0
  /* 16696C 8018D33C C4640000 */      lwc1 $f4, ($v1) # D_ovl36_8018E248 + 0
  /* 166970 8018D340 3C014234 */       lui $at, (0x42340000 >> 16) # 45.0
  /* 166974 8018D344 44810000 */      mtc1 $at, $f0 # 45.0 to cop1
  /* 166978 8018D348 46062201 */     sub.s $f8, $f4, $f6
  /* 16697C 8018D34C C450003C */      lwc1 $f16, 0x3c($v0)
  /* 166980 8018D350 46004283 */     div.s $f10, $f8, $f0
  /* 166984 8018D354 460A8480 */     add.s $f18, $f16, $f10
  /* 166988 8018D358 C44A0040 */      lwc1 $f10, 0x40($v0)
  /* 16698C 8018D35C E452003C */      swc1 $f18, 0x3c($v0)
  /* 166990 8018D360 C4860004 */      lwc1 $f6, 4($a0) # D_ovl36_8018E228 + 4
  /* 166994 8018D364 C4640004 */      lwc1 $f4, 4($v1) # D_ovl36_8018E248 + 4
  /* 166998 8018D368 46062201 */     sub.s $f8, $f4, $f6
  /* 16699C 8018D36C 46004403 */     div.s $f16, $f8, $f0
  /* 1669A0 8018D370 46105480 */     add.s $f18, $f10, $f16
  /* 1669A4 8018D374 C4500044 */      lwc1 $f16, 0x44($v0)
  /* 1669A8 8018D378 E4520040 */      swc1 $f18, 0x40($v0)
  /* 1669AC 8018D37C C4860008 */      lwc1 $f6, 8($a0) # D_ovl36_8018E228 + 8
  /* 1669B0 8018D380 C4640008 */      lwc1 $f4, 8($v1) # D_ovl36_8018E248 + 8
  /* 1669B4 8018D384 46062201 */     sub.s $f8, $f4, $f6
  /* 1669B8 8018D388 46004283 */     div.s $f10, $f8, $f0
  /* 1669BC 8018D38C 460A8480 */     add.s $f18, $f16, $f10
  /* 1669C0 8018D390 C44A0048 */      lwc1 $f10, 0x48($v0)
  /* 1669C4 8018D394 E4520044 */      swc1 $f18, 0x44($v0)
  /* 1669C8 8018D398 C486000C */      lwc1 $f6, 0xc($a0) # D_ovl36_8018E228 + 12
  /* 1669CC 8018D39C C464000C */      lwc1 $f4, 0xc($v1) # D_ovl36_8018E248 + 12
  /* 1669D0 8018D3A0 46062201 */     sub.s $f8, $f4, $f6
  /* 1669D4 8018D3A4 46004403 */     div.s $f16, $f8, $f0
  /* 1669D8 8018D3A8 46105480 */     add.s $f18, $f10, $f16
  /* 1669DC 8018D3AC C450004C */      lwc1 $f16, 0x4c($v0)
  /* 1669E0 8018D3B0 E4520048 */      swc1 $f18, 0x48($v0)
  /* 1669E4 8018D3B4 C4860010 */      lwc1 $f6, 0x10($a0) # D_ovl36_8018E228 + 16
  /* 1669E8 8018D3B8 C4640010 */      lwc1 $f4, 0x10($v1) # D_ovl36_8018E248 + 16
  /* 1669EC 8018D3BC 46062201 */     sub.s $f8, $f4, $f6
  /* 1669F0 8018D3C0 46004283 */     div.s $f10, $f8, $f0
  /* 1669F4 8018D3C4 460A8480 */     add.s $f18, $f16, $f10
  /* 1669F8 8018D3C8 C44A0050 */      lwc1 $f10, 0x50($v0)
  /* 1669FC 8018D3CC E452004C */      swc1 $f18, 0x4c($v0)
  /* 166A00 8018D3D0 C4860014 */      lwc1 $f6, 0x14($a0) # D_ovl36_8018E228 + 20
  /* 166A04 8018D3D4 C4640014 */      lwc1 $f4, 0x14($v1) # D_ovl36_8018E248 + 20
  /* 166A08 8018D3D8 46062201 */     sub.s $f8, $f4, $f6
  /* 166A0C 8018D3DC 46004403 */     div.s $f16, $f8, $f0
  /* 166A10 8018D3E0 46105480 */     add.s $f18, $f10, $f16
  /* 166A14 8018D3E4 C4500054 */      lwc1 $f16, 0x54($v0)
  /* 166A18 8018D3E8 E4520050 */      swc1 $f18, 0x50($v0)
  /* 166A1C 8018D3EC C4860018 */      lwc1 $f6, 0x18($a0) # D_ovl36_8018E228 + 24
  /* 166A20 8018D3F0 C4640018 */      lwc1 $f4, 0x18($v1) # D_ovl36_8018E248 + 24
  /* 166A24 8018D3F4 46062201 */     sub.s $f8, $f4, $f6
  /* 166A28 8018D3F8 46004283 */     div.s $f10, $f8, $f0
  /* 166A2C 8018D3FC 460A8480 */     add.s $f18, $f16, $f10
  /* 166A30 8018D400 E4520054 */      swc1 $f18, 0x54($v0)
  .L8018D404:
  /* 166A34 8018D404 03E00008 */        jr $ra
  /* 166A38 8018D408 00000000 */       nop 

glabel func_ovl36_8018D40C
  /* 166A3C 8018D40C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 166A40 8018D410 3C0E8019 */       lui $t6, %hi(D_ovl36_8018E090)
  /* 166A44 8018D414 AFBF002C */        sw $ra, 0x2c($sp)
  /* 166A48 8018D418 AFB20028 */        sw $s2, 0x28($sp)
  /* 166A4C 8018D41C AFB10024 */        sw $s1, 0x24($sp)
  /* 166A50 8018D420 AFB00020 */        sw $s0, 0x20($sp)
  /* 166A54 8018D424 AFA40030 */        sw $a0, 0x30($sp)
  /* 166A58 8018D428 AFA50034 */        sw $a1, 0x34($sp)
  /* 166A5C 8018D42C AFA60038 */        sw $a2, 0x38($sp)
  /* 166A60 8018D430 25CEE090 */     addiu $t6, $t6, %lo(D_ovl36_8018E090)
  /* 166A64 8018D434 8DD80000 */        lw $t8, ($t6) # D_ovl36_8018E090 + 0
  /* 166A68 8018D438 3C108019 */       lui $s0, %hi(D_ovl36_8018E228)
  /* 166A6C 8018D43C 2610E228 */     addiu $s0, $s0, %lo(D_ovl36_8018E228)
  /* 166A70 8018D440 AE180000 */        sw $t8, ($s0) # D_ovl36_8018E228 + 0
  /* 166A74 8018D444 8DCF0004 */        lw $t7, 4($t6) # D_ovl36_8018E090 + 4
  /* 166A78 8018D448 3C198019 */       lui $t9, %hi(D_ovl36_8018E0AC)
  /* 166A7C 8018D44C 2739E0AC */     addiu $t9, $t9, %lo(D_ovl36_8018E0AC)
  /* 166A80 8018D450 AE0F0004 */        sw $t7, 4($s0) # D_ovl36_8018E228 + 4
  /* 166A84 8018D454 8DD80008 */        lw $t8, 8($t6) # D_ovl36_8018E090 + 8
  /* 166A88 8018D458 3C118019 */       lui $s1, %hi(D_ovl36_8018E248)
  /* 166A8C 8018D45C 2631E248 */     addiu $s1, $s1, %lo(D_ovl36_8018E248)
  /* 166A90 8018D460 AE180008 */        sw $t8, 8($s0) # D_ovl36_8018E228 + 8
  /* 166A94 8018D464 8DCF000C */        lw $t7, 0xc($t6) # D_ovl36_8018E090 + 12
  /* 166A98 8018D468 00002025 */        or $a0, $zero, $zero
  /* 166A9C 8018D46C AE0F000C */        sw $t7, 0xc($s0) # D_ovl36_8018E228 + 12
  /* 166AA0 8018D470 8DD80010 */        lw $t8, 0x10($t6) # D_ovl36_8018E090 + 16
  /* 166AA4 8018D474 AE180010 */        sw $t8, 0x10($s0) # D_ovl36_8018E228 + 16
  /* 166AA8 8018D478 8DCF0014 */        lw $t7, 0x14($t6) # D_ovl36_8018E090 + 20
  /* 166AAC 8018D47C AE0F0014 */        sw $t7, 0x14($s0) # D_ovl36_8018E228 + 20
  /* 166AB0 8018D480 8DD80018 */        lw $t8, 0x18($t6) # D_ovl36_8018E090 + 24
  /* 166AB4 8018D484 AE180018 */        sw $t8, 0x18($s0) # D_ovl36_8018E228 + 24
  /* 166AB8 8018D488 8F290000 */        lw $t1, ($t9) # D_ovl36_8018E0AC + 0
  /* 166ABC 8018D48C AE290000 */        sw $t1, ($s1) # D_ovl36_8018E248 + 0
  /* 166AC0 8018D490 8F280004 */        lw $t0, 4($t9) # D_ovl36_8018E0AC + 4
  /* 166AC4 8018D494 AE280004 */        sw $t0, 4($s1) # D_ovl36_8018E248 + 4
  /* 166AC8 8018D498 8F290008 */        lw $t1, 8($t9) # D_ovl36_8018E0AC + 8
  /* 166ACC 8018D49C AE290008 */        sw $t1, 8($s1) # D_ovl36_8018E248 + 8
  /* 166AD0 8018D4A0 8F28000C */        lw $t0, 0xc($t9) # D_ovl36_8018E0AC + 12
  /* 166AD4 8018D4A4 AE28000C */        sw $t0, 0xc($s1) # D_ovl36_8018E248 + 12
  /* 166AD8 8018D4A8 8F290010 */        lw $t1, 0x10($t9) # D_ovl36_8018E0AC + 16
  /* 166ADC 8018D4AC AE290010 */        sw $t1, 0x10($s1) # D_ovl36_8018E248 + 16
  /* 166AE0 8018D4B0 8F280014 */        lw $t0, 0x14($t9) # D_ovl36_8018E0AC + 20
  /* 166AE4 8018D4B4 AE280014 */        sw $t0, 0x14($s1) # D_ovl36_8018E248 + 20
  /* 166AE8 8018D4B8 8F290018 */        lw $t1, 0x18($t9) # D_ovl36_8018E0AC + 24
  /* 166AEC 8018D4BC 0C0436CB */       jal func_ovl2_8010DB2C
  /* 166AF0 8018D4C0 AE290018 */        sw $t1, 0x18($s1) # D_ovl36_8018E248 + 24
  /* 166AF4 8018D4C4 3C038019 */       lui $v1, %hi(D_ovl36_8018E218)
  /* 166AF8 8018D4C8 2463E218 */     addiu $v1, $v1, %lo(D_ovl36_8018E218)
  /* 166AFC 8018D4CC AC620000 */        sw $v0, ($v1) # D_ovl36_8018E218 + 0
  /* 166B00 8018D4D0 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 166B04 8018D4D4 8C520074 */        lw $s2, 0x74($v0)
  /* 166B08 8018D4D8 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 166B0C 8018D4DC 3C0542DC */       lui $a1, 0x42dc
  /* 166B10 8018D4E0 3C064120 */       lui $a2, 0x4120
  /* 166B14 8018D4E4 3C07439B */       lui $a3, 0x439b
  /* 166B18 8018D4E8 26440008 */     addiu $a0, $s2, 8
  /* 166B1C 8018D4EC 0C001C20 */       jal func_80007080
  /* 166B20 8018D4F0 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 166B24 8018D4F4 3C018019 */       lui $at, %hi(D_ovl36_8018E1EC)
  /* 166B28 8018D4F8 C426E1EC */      lwc1 $f6, %lo(D_ovl36_8018E1EC)($at)
  /* 166B2C 8018D4FC 3C048019 */       lui $a0, %hi(D_ovl36_8018E218)
  /* 166B30 8018D500 E6460024 */      swc1 $f6, 0x24($s2)
  /* 166B34 8018D504 0C002CE7 */       jal func_8000B39C
  /* 166B38 8018D508 8C84E218 */        lw $a0, %lo(D_ovl36_8018E218)($a0)
  /* 166B3C 8018D50C 3C048019 */       lui $a0, %hi(D_ovl36_8018E218)
  /* 166B40 8018D510 3C058019 */       lui $a1, %hi(func_ovl36_8018D314)
  /* 166B44 8018D514 24A5D314 */     addiu $a1, $a1, %lo(func_ovl36_8018D314)
  /* 166B48 8018D518 8C84E218 */        lw $a0, %lo(D_ovl36_8018E218)($a0)
  /* 166B4C 8018D51C 24060001 */     addiu $a2, $zero, 1
  /* 166B50 8018D520 0C002062 */       jal omAddGObjCommonProc
  /* 166B54 8018D524 24070001 */     addiu $a3, $zero, 1
  /* 166B58 8018D528 C7A00030 */      lwc1 $f0, 0x30($sp)
  /* 166B5C 8018D52C C7A20034 */      lwc1 $f2, 0x34($sp)
  /* 166B60 8018D530 C7AC0038 */      lwc1 $f12, 0x38($sp)
  /* 166B64 8018D534 C6080000 */      lwc1 $f8, ($s0) # D_ovl36_8018E228 + 0
  /* 166B68 8018D538 C6100004 */      lwc1 $f16, 4($s0) # D_ovl36_8018E228 + 4
  /* 166B6C 8018D53C C6040008 */      lwc1 $f4, 8($s0) # D_ovl36_8018E228 + 8
  /* 166B70 8018D540 46004280 */     add.s $f10, $f8, $f0
  /* 166B74 8018D544 C608000C */      lwc1 $f8, 0xc($s0) # D_ovl36_8018E228 + 12
  /* 166B78 8018D548 46028480 */     add.s $f18, $f16, $f2
  /* 166B7C 8018D54C C6100010 */      lwc1 $f16, 0x10($s0) # D_ovl36_8018E228 + 16
  /* 166B80 8018D550 E60A0000 */      swc1 $f10, ($s0) # D_ovl36_8018E228 + 0
  /* 166B84 8018D554 460C2180 */     add.s $f6, $f4, $f12
  /* 166B88 8018D558 C6040014 */      lwc1 $f4, 0x14($s0) # D_ovl36_8018E228 + 20
  /* 166B8C 8018D55C E6120004 */      swc1 $f18, 4($s0) # D_ovl36_8018E228 + 4
  /* 166B90 8018D560 46004280 */     add.s $f10, $f8, $f0
  /* 166B94 8018D564 E6060008 */      swc1 $f6, 8($s0) # D_ovl36_8018E228 + 8
  /* 166B98 8018D568 C6280000 */      lwc1 $f8, ($s1) # D_ovl36_8018E248 + 0
  /* 166B9C 8018D56C 46028480 */     add.s $f18, $f16, $f2
  /* 166BA0 8018D570 C6300004 */      lwc1 $f16, 4($s1) # D_ovl36_8018E248 + 4
  /* 166BA4 8018D574 E60A000C */      swc1 $f10, 0xc($s0) # D_ovl36_8018E228 + 12
  /* 166BA8 8018D578 460C2180 */     add.s $f6, $f4, $f12
  /* 166BAC 8018D57C C6240008 */      lwc1 $f4, 8($s1) # D_ovl36_8018E248 + 8
  /* 166BB0 8018D580 E6120010 */      swc1 $f18, 0x10($s0) # D_ovl36_8018E228 + 16
  /* 166BB4 8018D584 46004280 */     add.s $f10, $f8, $f0
  /* 166BB8 8018D588 E6060014 */      swc1 $f6, 0x14($s0) # D_ovl36_8018E228 + 20
  /* 166BBC 8018D58C C628000C */      lwc1 $f8, 0xc($s1) # D_ovl36_8018E248 + 12
  /* 166BC0 8018D590 46028480 */     add.s $f18, $f16, $f2
  /* 166BC4 8018D594 C6300010 */      lwc1 $f16, 0x10($s1) # D_ovl36_8018E248 + 16
  /* 166BC8 8018D598 E62A0000 */      swc1 $f10, ($s1) # D_ovl36_8018E248 + 0
  /* 166BCC 8018D59C 460C2180 */     add.s $f6, $f4, $f12
  /* 166BD0 8018D5A0 C6240014 */      lwc1 $f4, 0x14($s1) # D_ovl36_8018E248 + 20
  /* 166BD4 8018D5A4 E6320004 */      swc1 $f18, 4($s1) # D_ovl36_8018E248 + 4
  /* 166BD8 8018D5A8 46004280 */     add.s $f10, $f8, $f0
  /* 166BDC 8018D5AC E6260008 */      swc1 $f6, 8($s1) # D_ovl36_8018E248 + 8
  /* 166BE0 8018D5B0 C6080000 */      lwc1 $f8, ($s0) # D_ovl36_8018E228 + 0
  /* 166BE4 8018D5B4 46028480 */     add.s $f18, $f16, $f2
  /* 166BE8 8018D5B8 E62A000C */      swc1 $f10, 0xc($s1) # D_ovl36_8018E248 + 12
  /* 166BEC 8018D5BC 460C2180 */     add.s $f6, $f4, $f12
  /* 166BF0 8018D5C0 E6320010 */      swc1 $f18, 0x10($s1) # D_ovl36_8018E248 + 16
  /* 166BF4 8018D5C4 E6260014 */      swc1 $f6, 0x14($s1) # D_ovl36_8018E248 + 20
  /* 166BF8 8018D5C8 E648003C */      swc1 $f8, 0x3c($s2)
  /* 166BFC 8018D5CC C60A0004 */      lwc1 $f10, 4($s0) # D_ovl36_8018E228 + 4
  /* 166C00 8018D5D0 E64A0040 */      swc1 $f10, 0x40($s2)
  /* 166C04 8018D5D4 C6100008 */      lwc1 $f16, 8($s0) # D_ovl36_8018E228 + 8
  /* 166C08 8018D5D8 E6500044 */      swc1 $f16, 0x44($s2)
  /* 166C0C 8018D5DC C612000C */      lwc1 $f18, 0xc($s0) # D_ovl36_8018E228 + 12
  /* 166C10 8018D5E0 E6520048 */      swc1 $f18, 0x48($s2)
  /* 166C14 8018D5E4 C6040010 */      lwc1 $f4, 0x10($s0) # D_ovl36_8018E228 + 16
  /* 166C18 8018D5E8 E644004C */      swc1 $f4, 0x4c($s2)
  /* 166C1C 8018D5EC C6060014 */      lwc1 $f6, 0x14($s0) # D_ovl36_8018E228 + 20
  /* 166C20 8018D5F0 E6460050 */      swc1 $f6, 0x50($s2)
  /* 166C24 8018D5F4 C6080018 */      lwc1 $f8, 0x18($s0) # D_ovl36_8018E228 + 24
  /* 166C28 8018D5F8 E6480054 */      swc1 $f8, 0x54($s2)
  /* 166C2C 8018D5FC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 166C30 8018D600 8FB20028 */        lw $s2, 0x28($sp)
  /* 166C34 8018D604 8FB10024 */        lw $s1, 0x24($sp)
  /* 166C38 8018D608 8FB00020 */        lw $s0, 0x20($sp)
  /* 166C3C 8018D60C 03E00008 */        jr $ra
  /* 166C40 8018D610 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl36_8018D614
  /* 166C44 8018D614 27BDFF58 */     addiu $sp, $sp, -0xa8
  /* 166C48 8018D618 AFBF003C */        sw $ra, 0x3c($sp)
  /* 166C4C 8018D61C AFBE0038 */        sw $fp, 0x38($sp)
  /* 166C50 8018D620 AFB70034 */        sw $s7, 0x34($sp)
  /* 166C54 8018D624 AFB60030 */        sw $s6, 0x30($sp)
  /* 166C58 8018D628 AFB5002C */        sw $s5, 0x2c($sp)
  /* 166C5C 8018D62C AFB40028 */        sw $s4, 0x28($sp)
  /* 166C60 8018D630 AFB30024 */        sw $s3, 0x24($sp)
  /* 166C64 8018D634 AFB20020 */        sw $s2, 0x20($sp)
  /* 166C68 8018D638 AFB1001C */        sw $s1, 0x1c($sp)
  /* 166C6C 8018D63C 0C0412F7 */       jal grWallpaper_SetGroundWallpaper
  /* 166C70 8018D640 AFB00018 */        sw $s0, 0x18($sp)
  /* 166C74 8018D644 0C041580 */       jal grNodeInit_SetGroundFiles
  /* 166C78 8018D648 00000000 */       nop 
  /* 166C7C 8018D64C 0C03F1E9 */       jal mpCollision_GetGPointCountKind
  /* 166C80 8018D650 24040015 */     addiu $a0, $zero, 0x15
  /* 166C84 8018D654 24010001 */     addiu $at, $zero, 1
  /* 166C88 8018D658 10410009 */       beq $v0, $at, .L8018D680
  /* 166C8C 8018D65C 24040015 */     addiu $a0, $zero, 0x15
  /* 166C90 8018D660 3C108019 */       lui $s0, %hi(D_ovl36_8018E1D0)
  /* 166C94 8018D664 2610E1D0 */     addiu $s0, $s0, %lo(D_ovl36_8018E1D0)
  .L8018D668:
  /* 166C98 8018D668 0C008D89 */       jal fatal_printf
  /* 166C9C 8018D66C 02002025 */        or $a0, $s0, $zero
  /* 166CA0 8018D670 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 166CA4 8018D674 00000000 */       nop 
  /* 166CA8 8018D678 1000FFFB */         b .L8018D668
  /* 166CAC 8018D67C 00000000 */       nop 
  .L8018D680:
  /* 166CB0 8018D680 0C03F205 */       jal mpCollision_GetGPointIDsKind
  /* 166CB4 8018D684 27A50098 */     addiu $a1, $sp, 0x98
  /* 166CB8 8018D688 27B0008C */     addiu $s0, $sp, 0x8c
  /* 166CBC 8018D68C 02002825 */        or $a1, $s0, $zero
  /* 166CC0 8018D690 0C03F225 */       jal mpCollision_GetGPointPositionsID
  /* 166CC4 8018D694 8FA40098 */        lw $a0, 0x98($sp)
  /* 166CC8 8018D698 8E0F0000 */        lw $t7, ($s0) # D_ovl36_8018E1D0 + 0
  /* 166CCC 8018D69C AFAF0000 */        sw $t7, ($sp)
  /* 166CD0 8018D6A0 8E050004 */        lw $a1, 4($s0) # D_ovl36_8018E1D0 + 4
  /* 166CD4 8018D6A4 8FA40000 */        lw $a0, ($sp)
  /* 166CD8 8018D6A8 AFA50004 */        sw $a1, 4($sp)
  /* 166CDC 8018D6AC 8E060008 */        lw $a2, 8($s0) # D_ovl36_8018E1D0 + 8
  /* 166CE0 8018D6B0 0C063503 */       jal func_ovl36_8018D40C
  /* 166CE4 8018D6B4 AFA60008 */        sw $a2, 8($sp)
  /* 166CE8 8018D6B8 0C0455B9 */       jal gmRumble_SetPlayerRumble
  /* 166CEC 8018D6BC 00000000 */       nop 
  /* 166CF0 8018D6C0 0C0594F8 */       jal ftPublicity_SetPlayerPublicReact
  /* 166CF4 8018D6C4 00000000 */       nop 
  /* 166CF8 8018D6C8 3C168011 */       lui $s6, %hi(D_ovl2_80116DD0)
  /* 166CFC 8018D6CC 3C15800A */       lui $s5, %hi(gBattleState)
  /* 166D00 8018D6D0 26B550E8 */     addiu $s5, $s5, %lo(gBattleState)
  /* 166D04 8018D6D4 26D66DD0 */     addiu $s6, $s6, %lo(D_ovl2_80116DD0)
  /* 166D08 8018D6D8 00008825 */        or $s1, $zero, $zero
  /* 166D0C 8018D6DC 00009025 */        or $s2, $zero, $zero
  /* 166D10 8018D6E0 241E0004 */     addiu $fp, $zero, 4
  /* 166D14 8018D6E4 24170002 */     addiu $s7, $zero, 2
  /* 166D18 8018D6E8 27B4004C */     addiu $s4, $sp, 0x4c
  .L8018D6EC:
  /* 166D1C 8018D6EC 02C04025 */        or $t0, $s6, $zero
  /* 166D20 8018D6F0 02804825 */        or $t1, $s4, $zero
  /* 166D24 8018D6F4 26CA003C */     addiu $t2, $s6, 0x3c
  .L8018D6F8:
  /* 166D28 8018D6F8 8D190000 */        lw $t9, ($t0)
  /* 166D2C 8018D6FC 2508000C */     addiu $t0, $t0, 0xc
  /* 166D30 8018D700 2529000C */     addiu $t1, $t1, 0xc
  /* 166D34 8018D704 AD39FFF4 */        sw $t9, -0xc($t1)
  /* 166D38 8018D708 8D18FFF8 */        lw $t8, -8($t0)
  /* 166D3C 8018D70C AD38FFF8 */        sw $t8, -8($t1)
  /* 166D40 8018D710 8D19FFFC */        lw $t9, -4($t0)
  /* 166D44 8018D714 150AFFF8 */       bne $t0, $t2, .L8018D6F8
  /* 166D48 8018D718 AD39FFFC */        sw $t9, -4($t1)
  /* 166D4C 8018D71C 8D190000 */        lw $t9, ($t0)
  /* 166D50 8018D720 00116880 */       sll $t5, $s1, 2
  /* 166D54 8018D724 01B16821 */      addu $t5, $t5, $s1
  /* 166D58 8018D728 AD390000 */        sw $t9, ($t1)
  /* 166D5C 8018D72C 8EAB0000 */        lw $t3, ($s5) # gBattleState + 0
  /* 166D60 8018D730 3C0E8004 */       lui $t6, %hi(gPlayerControllers)
  /* 166D64 8018D734 25CE5228 */     addiu $t6, $t6, %lo(gPlayerControllers)
  /* 166D68 8018D738 01728021 */      addu $s0, $t3, $s2
  /* 166D6C 8018D73C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl36_8018E1D0 + 34
  /* 166D70 8018D740 000D6840 */       sll $t5, $t5, 1
  /* 166D74 8018D744 01AE9821 */      addu $s3, $t5, $t6
  /* 166D78 8018D748 52EC0030 */      beql $s7, $t4, .L8018D80C
  /* 166D7C 8018D74C 26310001 */     addiu $s1, $s1, 1
  /* 166D80 8018D750 0C035E1B */       jal ftManager_SetFileDataKind
  /* 166D84 8018D754 92040023 */       lbu $a0, 0x23($s0) # D_ovl36_8018E1D0 + 35
  /* 166D88 8018D758 8EA20000 */        lw $v0, ($s5) # gBattleState + 0
  /* 166D8C 8018D75C C7A4008C */      lwc1 $f4, 0x8c($sp)
  /* 166D90 8018D760 C7A60090 */      lwc1 $f6, 0x90($sp)
  /* 166D94 8018D764 00528021 */      addu $s0, $v0, $s2
  /* 166D98 8018D768 920F0023 */       lbu $t7, 0x23($s0) # D_ovl36_8018E1D0 + 35
  /* 166D9C 8018D76C C7A80094 */      lwc1 $f8, 0x94($sp)
  /* 166DA0 8018D770 240A0001 */     addiu $t2, $zero, 1
  /* 166DA4 8018D774 AFAA005C */        sw $t2, 0x5c($sp)
  /* 166DA8 8018D778 E7A40050 */      swc1 $f4, 0x50($sp)
  /* 166DAC 8018D77C E7A60054 */      swc1 $f6, 0x54($sp)
  /* 166DB0 8018D780 AFAF004C */        sw $t7, 0x4c($sp)
  /* 166DB4 8018D784 E7A80058 */      swc1 $f8, 0x58($sp)
  /* 166DB8 8018D788 92080024 */       lbu $t0, 0x24($s0) # D_ovl36_8018E1D0 + 36
  /* 166DBC 8018D78C 24090001 */     addiu $t1, $zero, 1
  /* 166DC0 8018D790 A3B10061 */        sb $s1, 0x61($sp)
  /* 166DC4 8018D794 A3A90062 */        sb $t1, 0x62($sp)
  /* 166DC8 8018D798 A3A80060 */        sb $t0, 0x60($sp)
  /* 166DCC 8018D79C 92180026 */       lbu $t8, 0x26($s0) # D_ovl36_8018E1D0 + 38
  /* 166DD0 8018D7A0 A3B80063 */        sb $t8, 0x63($sp)
  /* 166DD4 8018D7A4 92190021 */       lbu $t9, 0x21($s0) # D_ovl36_8018E1D0 + 33
  /* 166DD8 8018D7A8 A3B90065 */        sb $t9, 0x65($sp)
  /* 166DDC 8018D7AC 920B0020 */       lbu $t3, 0x20($s0) # D_ovl36_8018E1D0 + 32
  /* 166DE0 8018D7B0 A3AB0066 */        sb $t3, 0x66($sp)
  /* 166DE4 8018D7B4 904C0007 */       lbu $t4, 7($v0)
  /* 166DE8 8018D7B8 AFA00070 */        sw $zero, 0x70($sp)
  /* 166DEC 8018D7BC A3AC0067 */        sb $t4, 0x67($sp)
  /* 166DF0 8018D7C0 920D0022 */       lbu $t5, 0x22($s0) # D_ovl36_8018E1D0 + 34
  /* 166DF4 8018D7C4 AFB30078 */        sw $s3, 0x78($sp)
  /* 166DF8 8018D7C8 AFAD0074 */        sw $t5, 0x74($sp)
  /* 166DFC 8018D7CC 0C035E2D */       jal ftManager_AllocAnimHeapKind
  /* 166E00 8018D7D0 92040023 */       lbu $a0, 0x23($s0) # D_ovl36_8018E1D0 + 35
  /* 166E04 8018D7D4 AFA20084 */        sw $v0, 0x84($sp)
  /* 166E08 8018D7D8 0C035FCF */       jal ftManager_MakeFighter
  /* 166E0C 8018D7DC 02802025 */        or $a0, $s4, $zero
  /* 166E10 8018D7E0 3C018019 */       lui $at, %hi(D_ovl36_8018E210)
  /* 166E14 8018D7E4 AC22E210 */        sw $v0, %lo(D_ovl36_8018E210)($at)
  /* 166E18 8018D7E8 00408025 */        or $s0, $v0, $zero
  /* 166E1C 8018D7EC 02202025 */        or $a0, $s1, $zero
  /* 166E20 8018D7F0 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 166E24 8018D7F4 00402825 */        or $a1, $v0, $zero
  /* 166E28 8018D7F8 3C058019 */       lui $a1, %hi(D_ovl36_8018E0C8)
  /* 166E2C 8018D7FC 24A5E0C8 */     addiu $a1, $a1, %lo(D_ovl36_8018E0C8)
  /* 166E30 8018D800 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 166E34 8018D804 02002025 */        or $a0, $s0, $zero
  /* 166E38 8018D808 26310001 */     addiu $s1, $s1, 1
  .L8018D80C:
  /* 166E3C 8018D80C 163EFFB7 */       bne $s1, $fp, .L8018D6EC
  /* 166E40 8018D810 26520074 */     addiu $s2, $s2, 0x74
  /* 166E44 8018D814 8FBF003C */        lw $ra, 0x3c($sp)
  /* 166E48 8018D818 8FB00018 */        lw $s0, 0x18($sp)
  /* 166E4C 8018D81C 8FB1001C */        lw $s1, 0x1c($sp)
  /* 166E50 8018D820 8FB20020 */        lw $s2, 0x20($sp)
  /* 166E54 8018D824 8FB30024 */        lw $s3, 0x24($sp)
  /* 166E58 8018D828 8FB40028 */        lw $s4, 0x28($sp)
  /* 166E5C 8018D82C 8FB5002C */        lw $s5, 0x2c($sp)
  /* 166E60 8018D830 8FB60030 */        lw $s6, 0x30($sp)
  /* 166E64 8018D834 8FB70034 */        lw $s7, 0x34($sp)
  /* 166E68 8018D838 8FBE0038 */        lw $fp, 0x38($sp)
  /* 166E6C 8018D83C 03E00008 */        jr $ra
  /* 166E70 8018D840 27BD00A8 */     addiu $sp, $sp, 0xa8

glabel func_ovl36_8018D844
  /* 166E74 8018D844 3C0B8004 */       lui $t3, %hi(gDisplayListHead)
  /* 166E78 8018D848 256B65B0 */     addiu $t3, $t3, %lo(gDisplayListHead)
  /* 166E7C 8018D84C 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166E80 8018D850 AFA40000 */        sw $a0, ($sp)
  /* 166E84 8018D854 3C0CE700 */       lui $t4, 0xe700
  /* 166E88 8018D858 246E0008 */     addiu $t6, $v1, 8
  /* 166E8C 8018D85C AD6E0000 */        sw $t6, ($t3) # gDisplayListHead + 0
  /* 166E90 8018D860 AC600004 */        sw $zero, 4($v1)
  /* 166E94 8018D864 AC6C0000 */        sw $t4, ($v1)
  /* 166E98 8018D868 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166E9C 8018D86C 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 166EA0 8018D870 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 166EA4 8018D874 246F0008 */     addiu $t7, $v1, 8
  /* 166EA8 8018D878 AD6F0000 */        sw $t7, ($t3) # gDisplayListHead + 0
  /* 166EAC 8018D87C AC600004 */        sw $zero, 4($v1)
  /* 166EB0 8018D880 AC780000 */        sw $t8, ($v1)
  /* 166EB4 8018D884 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166EB8 8018D888 3C0FA0AA */       lui $t7, (0xA0AAFFFF >> 16) # 2695561215
  /* 166EBC 8018D88C 35EFFFFF */       ori $t7, $t7, (0xA0AAFFFF & 0xFFFF) # 2695561215
  /* 166EC0 8018D890 24790008 */     addiu $t9, $v1, 8
  /* 166EC4 8018D894 AD790000 */        sw $t9, ($t3) # gDisplayListHead + 0
  /* 166EC8 8018D898 3C0EFA00 */       lui $t6, 0xfa00
  /* 166ECC 8018D89C AC6E0000 */        sw $t6, ($v1)
  /* 166ED0 8018D8A0 AC6F0004 */        sw $t7, 4($v1)
  /* 166ED4 8018D8A4 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166ED8 8018D8A8 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 166EDC 8018D8AC 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 166EE0 8018D8B0 24780008 */     addiu $t8, $v1, 8
  /* 166EE4 8018D8B4 AD780000 */        sw $t8, ($t3) # gDisplayListHead + 0
  /* 166EE8 8018D8B8 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 166EEC 8018D8BC 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 166EF0 8018D8C0 AC6E0004 */        sw $t6, 4($v1)
  /* 166EF4 8018D8C4 AC790000 */        sw $t9, ($v1)
  /* 166EF8 8018D8C8 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166EFC 8018D8CC 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 166F00 8018D8D0 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 166F04 8018D8D4 246F0008 */     addiu $t7, $v1, 8
  /* 166F08 8018D8D8 AD6F0000 */        sw $t7, ($t3) # gDisplayListHead + 0
  /* 166F0C 8018D8DC 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 166F10 8018D8E0 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 166F14 8018D8E4 AC780004 */        sw $t8, 4($v1)
  /* 166F18 8018D8E8 AC6D0000 */        sw $t5, ($v1)
  /* 166F1C 8018D8EC 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166F20 8018D8F0 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 166F24 8018D8F4 3C0EF61B */       lui $t6, (0xF61B8398 >> 16) # 4128998296
  /* 166F28 8018D8F8 24790008 */     addiu $t9, $v1, 8
  /* 166F2C 8018D8FC AD790000 */        sw $t9, ($t3) # gDisplayListHead + 0
  /* 166F30 8018D900 35CE8398 */       ori $t6, $t6, (0xF61B8398 & 0xFFFF) # 4128998296
  /* 166F34 8018D904 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 166F38 8018D908 AC6F0004 */        sw $t7, 4($v1)
  /* 166F3C 8018D90C AC6E0000 */        sw $t6, ($v1)
  /* 166F40 8018D910 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166F44 8018D914 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 166F48 8018D918 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 166F4C 8018D91C 24780008 */     addiu $t8, $v1, 8
  /* 166F50 8018D920 AD780000 */        sw $t8, ($t3) # gDisplayListHead + 0
  /* 166F54 8018D924 AC600004 */        sw $zero, 4($v1)
  /* 166F58 8018D928 AC6C0000 */        sw $t4, ($v1)
  /* 166F5C 8018D92C 8D630000 */        lw $v1, ($t3) # gDisplayListHead + 0
  /* 166F60 8018D930 24790008 */     addiu $t9, $v1, 8
  /* 166F64 8018D934 AD790000 */        sw $t9, ($t3) # gDisplayListHead + 0
  /* 166F68 8018D938 AC6E0004 */        sw $t6, 4($v1)
  /* 166F6C 8018D93C 03E00008 */        jr $ra
  /* 166F70 8018D940 AC6D0000 */        sw $t5, ($v1)

glabel func_ovl36_8018D944
  /* 166F74 8018D944 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 166F78 8018D948 AFBF001C */        sw $ra, 0x1c($sp)
  /* 166F7C 8018D94C 00002025 */        or $a0, $zero, $zero
  /* 166F80 8018D950 00002825 */        or $a1, $zero, $zero
  /* 166F84 8018D954 24060013 */     addiu $a2, $zero, 0x13
  /* 166F88 8018D958 0C00265A */       jal omMakeGObjCommon
  /* 166F8C 8018D95C 3C078000 */       lui $a3, 0x8000
  /* 166F90 8018D960 3C058019 */       lui $a1, %hi(func_ovl36_8018D844)
  /* 166F94 8018D964 240EFFFF */     addiu $t6, $zero, -1
  /* 166F98 8018D968 AFAE0010 */        sw $t6, 0x10($sp)
  /* 166F9C 8018D96C 24A5D844 */     addiu $a1, $a1, %lo(func_ovl36_8018D844)
  /* 166FA0 8018D970 00402025 */        or $a0, $v0, $zero
  /* 166FA4 8018D974 2406001C */     addiu $a2, $zero, 0x1c
  /* 166FA8 8018D978 0C00277D */       jal func_80009DF4
  /* 166FAC 8018D97C 3C078000 */       lui $a3, 0x8000
  /* 166FB0 8018D980 8FBF001C */        lw $ra, 0x1c($sp)
  /* 166FB4 8018D984 27BD0020 */     addiu $sp, $sp, 0x20
  /* 166FB8 8018D988 03E00008 */        jr $ra
  /* 166FBC 8018D98C 00000000 */       nop 

glabel func_ovl36_8018D990
  /* 166FC0 8018D990 3C038019 */       lui $v1, %hi(D_ovl36_8018E208)
  /* 166FC4 8018D994 8C63E208 */        lw $v1, %lo(D_ovl36_8018E208)($v1)
  /* 166FC8 8018D998 2401000F */     addiu $at, $zero, 0xf
  /* 166FCC 8018D99C 3C058019 */       lui $a1, 0x8019
  /* 166FD0 8018D9A0 10610009 */       beq $v1, $at, .L8018D9C8
  /* 166FD4 8018D9A4 00601025 */        or $v0, $v1, $zero
  /* 166FD8 8018D9A8 2401002D */     addiu $at, $zero, 0x2d
  /* 166FDC 8018D9AC 1041000B */       beq $v0, $at, .L8018D9DC
  /* 166FE0 8018D9B0 3C058019 */       lui $a1, 0x8019
  /* 166FE4 8018D9B4 2401003C */     addiu $at, $zero, 0x3c
  /* 166FE8 8018D9B8 1041000D */       beq $v0, $at, .L8018D9F0
  /* 166FEC 8018D9BC 3C058019 */       lui $a1, %hi(D_ovl36_8018E220)
  /* 166FF0 8018D9C0 1000000F */         b .L8018DA00
  /* 166FF4 8018D9C4 24A5E220 */     addiu $a1, $a1, %lo(D_ovl36_8018E220)
  .L8018D9C8:
  /* 166FF8 8018D9C8 3C014188 */       lui $at, (0x41880000 >> 16) # 17.0
  /* 166FFC 8018D9CC 44812000 */      mtc1 $at, $f4 # 17.0 to cop1
  /* 167000 8018D9D0 24A5E220 */     addiu $a1, $a1, -0x1de0
  /* 167004 8018D9D4 1000000A */         b .L8018DA00
  /* 167008 8018D9D8 E4A40000 */      swc1 $f4, ($a1) # D_ovl36_8018E220 + 0
  .L8018D9DC:
  /* 16700C 8018D9DC 3C014170 */       lui $at, (0x41700000 >> 16) # 15.0
  /* 167010 8018D9E0 44813000 */      mtc1 $at, $f6 # 15.0 to cop1
  /* 167014 8018D9E4 24A5E220 */     addiu $a1, $a1, -0x1de0
  /* 167018 8018D9E8 10000005 */         b .L8018DA00
  /* 16701C 8018D9EC E4A60000 */      swc1 $f6, ($a1) # D_ovl36_8018E220 + 0
  .L8018D9F0:
  /* 167020 8018D9F0 44804000 */      mtc1 $zero, $f8
  /* 167024 8018D9F4 3C058019 */       lui $a1, %hi(D_ovl36_8018E220)
  /* 167028 8018D9F8 24A5E220 */     addiu $a1, $a1, %lo(D_ovl36_8018E220)
  /* 16702C 8018D9FC E4A80000 */      swc1 $f8, ($a1) # D_ovl36_8018E220 + 0
  .L8018DA00:
  /* 167030 8018DA00 28610010 */      slti $at, $v1, 0x10
  /* 167034 8018DA04 14200007 */      bnez $at, .L8018DA24
  /* 167038 8018DA08 2861002D */      slti $at, $v1, 0x2d
  /* 16703C 8018DA0C 10200005 */      beqz $at, .L8018DA24
  /* 167040 8018DA10 3C018019 */       lui $at, %hi(D_ovl36_8018E1F0)
  /* 167044 8018DA14 C430E1F0 */      lwc1 $f16, %lo(D_ovl36_8018E1F0)($at)
  /* 167048 8018DA18 C4AA0000 */      lwc1 $f10, ($a1) # D_ovl36_8018E220 + 0
  /* 16704C 8018DA1C 46105480 */     add.s $f18, $f10, $f16
  /* 167050 8018DA20 E4B20000 */      swc1 $f18, ($a1) # D_ovl36_8018E220 + 0
  .L8018DA24:
  /* 167054 8018DA24 2861002E */      slti $at, $v1, 0x2e
  /* 167058 8018DA28 14200007 */      bnez $at, .L8018DA48
  /* 16705C 8018DA2C 2861003C */      slti $at, $v1, 0x3c
  /* 167060 8018DA30 10200005 */      beqz $at, .L8018DA48
  /* 167064 8018DA34 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 167068 8018DA38 44813000 */      mtc1 $at, $f6 # -1.0 to cop1
  /* 16706C 8018DA3C C4A40000 */      lwc1 $f4, ($a1) # D_ovl36_8018E220 + 0
  /* 167070 8018DA40 46062200 */     add.s $f8, $f4, $f6
  /* 167074 8018DA44 E4A80000 */      swc1 $f8, ($a1) # D_ovl36_8018E220 + 0
  .L8018DA48:
  /* 167078 8018DA48 8C820074 */        lw $v0, 0x74($a0)
  /* 16707C 8018DA4C C4B00000 */      lwc1 $f16, ($a1) # D_ovl36_8018E220 + 0
  /* 167080 8018DA50 C44A0020 */      lwc1 $f10, 0x20($v0)
  /* 167084 8018DA54 46105481 */     sub.s $f18, $f10, $f16
  /* 167088 8018DA58 03E00008 */        jr $ra
  /* 16708C 8018DA5C E4520020 */      swc1 $f18, 0x20($v0)

glabel func_ovl36_8018DA60
  /* 167090 8018DA60 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 167094 8018DA64 AFB00018 */        sw $s0, 0x18($sp)
  /* 167098 8018DA68 3C0E8011 */       lui $t6, %hi(D_ovl2_80116DD0)
  /* 16709C 8018DA6C 27B00024 */     addiu $s0, $sp, 0x24
  /* 1670A0 8018DA70 25CE6DD0 */     addiu $t6, $t6, %lo(D_ovl2_80116DD0)
  /* 1670A4 8018DA74 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1670A8 8018DA78 25C8003C */     addiu $t0, $t6, 0x3c
  /* 1670AC 8018DA7C 0200C825 */        or $t9, $s0, $zero
  .L8018DA80:
  /* 1670B0 8018DA80 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 1670B4 8018DA84 25CE000C */     addiu $t6, $t6, 0xc
  /* 1670B8 8018DA88 2739000C */     addiu $t9, $t9, 0xc
  /* 1670BC 8018DA8C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1670C0 8018DA90 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl2_80116DD0 + -8
  /* 1670C4 8018DA94 AF2FFFF8 */        sw $t7, -8($t9)
  /* 1670C8 8018DA98 8DD8FFFC */        lw $t8, -4($t6) # D_ovl2_80116DD0 + -4
  /* 1670CC 8018DA9C 15C8FFF8 */       bne $t6, $t0, .L8018DA80
  /* 1670D0 8018DAA0 AF38FFFC */        sw $t8, -4($t9)
  /* 1670D4 8018DAA4 8DD80000 */        lw $t8, ($t6) # D_ovl2_80116DD0 + 0
  /* 1670D8 8018DAA8 00002025 */        or $a0, $zero, $zero
  /* 1670DC 8018DAAC 00002825 */        or $a1, $zero, $zero
  /* 1670E0 8018DAB0 AF380000 */        sw $t8, ($t9)
  /* 1670E4 8018DAB4 0C03B03B */       jal ftCostume_GetIndexFFA
  /* 1670E8 8018DAB8 AFA00024 */        sw $zero, 0x24($sp)
  /* 1670EC 8018DABC 44800000 */      mtc1 $zero, $f0
  /* 1670F0 8018DAC0 3C098019 */       lui $t1, %hi(D_ovl36_8018E21C)
  /* 1670F4 8018DAC4 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 1670F8 8018DAC8 8D29E21C */        lw $t1, %lo(D_ovl36_8018E21C)($t1)
  /* 1670FC 8018DACC 44812000 */      mtc1 $at, $f4 # 600.0 to cop1
  /* 167100 8018DAD0 A3A2003B */        sb $v0, 0x3b($sp)
  /* 167104 8018DAD4 02002025 */        or $a0, $s0, $zero
  /* 167108 8018DAD8 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 16710C 8018DADC E7A00030 */      swc1 $f0, 0x30($sp)
  /* 167110 8018DAE0 AFA9005C */        sw $t1, 0x5c($sp)
  /* 167114 8018DAE4 0C035FCF */       jal ftManager_MakeFighter
  /* 167118 8018DAE8 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 16711C 8018DAEC 3C050001 */       lui $a1, (0x1000C >> 16) # 65548
  /* 167120 8018DAF0 00408025 */        or $s0, $v0, $zero
  /* 167124 8018DAF4 34A5000C */       ori $a1, $a1, (0x1000C & 0xFFFF) # 65548
  /* 167128 8018DAF8 0C0E4173 */       jal func_ovl1_803905CC
  /* 16712C 8018DAFC 00402025 */        or $a0, $v0, $zero
  /* 167130 8018DB00 02002025 */        or $a0, $s0, $zero
  /* 167134 8018DB04 2405001A */     addiu $a1, $zero, 0x1a
  /* 167138 8018DB08 0C002834 */       jal om_g_move_obj_dl
  /* 16713C 8018DB0C 2406FFFF */     addiu $a2, $zero, -1
  /* 167140 8018DB10 3C058019 */       lui $a1, %hi(func_ovl36_8018D990)
  /* 167144 8018DB14 24A5D990 */     addiu $a1, $a1, %lo(func_ovl36_8018D990)
  /* 167148 8018DB18 02002025 */        or $a0, $s0, $zero
  /* 16714C 8018DB1C 24060001 */     addiu $a2, $zero, 1
  /* 167150 8018DB20 0C002062 */       jal omAddGObjCommonProc
  /* 167154 8018DB24 24070001 */     addiu $a3, $zero, 1
  /* 167158 8018DB28 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 16715C 8018DB2C 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 167160 8018DB30 8E0A0074 */        lw $t2, 0x74($s0)
  /* 167164 8018DB34 E5400040 */      swc1 $f0, 0x40($t2)
  /* 167168 8018DB38 8E0B0074 */        lw $t3, 0x74($s0)
  /* 16716C 8018DB3C E5600044 */      swc1 $f0, 0x44($t3)
  /* 167170 8018DB40 8E0C0074 */        lw $t4, 0x74($s0)
  /* 167174 8018DB44 E5800048 */      swc1 $f0, 0x48($t4)
  /* 167178 8018DB48 8FBF001C */        lw $ra, 0x1c($sp)
  /* 16717C 8018DB4C 8FB00018 */        lw $s0, 0x18($sp)
  /* 167180 8018DB50 27BD0068 */     addiu $sp, $sp, 0x68
  /* 167184 8018DB54 03E00008 */        jr $ra
  /* 167188 8018DB58 00000000 */       nop 

glabel func_ovl36_8018DB5C
  /* 16718C 8018DB5C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 167190 8018DB60 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 167194 8018DB64 AFBF003C */        sw $ra, 0x3c($sp)
  /* 167198 8018DB68 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 16719C 8018DB6C 240F0050 */     addiu $t7, $zero, 0x50
  /* 1671A0 8018DB70 24180000 */     addiu $t8, $zero, 0
  /* 1671A4 8018DB74 3C190800 */       lui $t9, 0x800
  /* 1671A8 8018DB78 2408FFFF */     addiu $t0, $zero, -1
  /* 1671AC 8018DB7C 24090001 */     addiu $t1, $zero, 1
  /* 1671B0 8018DB80 240A0001 */     addiu $t2, $zero, 1
  /* 1671B4 8018DB84 AFAA0030 */        sw $t2, 0x30($sp)
  /* 1671B8 8018DB88 AFA90028 */        sw $t1, 0x28($sp)
  /* 1671BC 8018DB8C AFA80020 */        sw $t0, 0x20($sp)
  /* 1671C0 8018DB90 AFB9001C */        sw $t9, 0x1c($sp)
  /* 1671C4 8018DB94 AFB80018 */        sw $t8, 0x18($sp)
  /* 1671C8 8018DB98 AFAF0014 */        sw $t7, 0x14($sp)
  /* 1671CC 8018DB9C AFAE0010 */        sw $t6, 0x10($sp)
  /* 1671D0 8018DBA0 AFA00024 */        sw $zero, 0x24($sp)
  /* 1671D4 8018DBA4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 1671D8 8018DBA8 AFA00034 */        sw $zero, 0x34($sp)
  /* 1671DC 8018DBAC 24040401 */     addiu $a0, $zero, 0x401
  /* 1671E0 8018DBB0 00002825 */        or $a1, $zero, $zero
  /* 1671E4 8018DBB4 24060010 */     addiu $a2, $zero, 0x10
  /* 1671E8 8018DBB8 0C002E4F */       jal func_8000B93C
  /* 1671EC 8018DBBC 3C078000 */       lui $a3, 0x8000
  /* 1671F0 8018DBC0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 1671F4 8018DBC4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 1671F8 8018DBC8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1671FC 8018DBCC 8C430074 */        lw $v1, 0x74($v0)
  /* 167200 8018DBD0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 167204 8018DBD4 44050000 */      mfc1 $a1, $f0
  /* 167208 8018DBD8 44060000 */      mfc1 $a2, $f0
  /* 16720C 8018DBDC 3C07439B */       lui $a3, 0x439b
  /* 167210 8018DBE0 24640008 */     addiu $a0, $v1, 8
  /* 167214 8018DBE4 0C001C20 */       jal func_80007080
  /* 167218 8018DBE8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 16721C 8018DBEC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 167220 8018DBF0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 167224 8018DBF4 03E00008 */        jr $ra
  /* 167228 8018DBF8 00000000 */       nop 

glabel func_ovl36_8018DBFC
  /* 16722C 8018DBFC 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 167230 8018DC00 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 167234 8018DC04 AFBF003C */        sw $ra, 0x3c($sp)
  /* 167238 8018DC08 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16723C 8018DC0C 240F000A */     addiu $t7, $zero, 0xa
  /* 167240 8018DC10 24180000 */     addiu $t8, $zero, 0
  /* 167244 8018DC14 3C190400 */       lui $t9, 0x400
  /* 167248 8018DC18 2408FFFF */     addiu $t0, $zero, -1
  /* 16724C 8018DC1C 24090001 */     addiu $t1, $zero, 1
  /* 167250 8018DC20 240A0001 */     addiu $t2, $zero, 1
  /* 167254 8018DC24 240B0001 */     addiu $t3, $zero, 1
  /* 167258 8018DC28 AFAB0030 */        sw $t3, 0x30($sp)
  /* 16725C 8018DC2C AFAA0028 */        sw $t2, 0x28($sp)
  /* 167260 8018DC30 AFA90024 */        sw $t1, 0x24($sp)
  /* 167264 8018DC34 AFA80020 */        sw $t0, 0x20($sp)
  /* 167268 8018DC38 AFB9001C */        sw $t9, 0x1c($sp)
  /* 16726C 8018DC3C AFB80018 */        sw $t8, 0x18($sp)
  /* 167270 8018DC40 AFAF0014 */        sw $t7, 0x14($sp)
  /* 167274 8018DC44 AFAE0010 */        sw $t6, 0x10($sp)
  /* 167278 8018DC48 AFA0002C */        sw $zero, 0x2c($sp)
  /* 16727C 8018DC4C AFA00034 */        sw $zero, 0x34($sp)
  /* 167280 8018DC50 24040401 */     addiu $a0, $zero, 0x401
  /* 167284 8018DC54 00002825 */        or $a1, $zero, $zero
  /* 167288 8018DC58 24060010 */     addiu $a2, $zero, 0x10
  /* 16728C 8018DC5C 0C002E4F */       jal func_8000B93C
  /* 167290 8018DC60 3C078000 */       lui $a3, 0x8000
  /* 167294 8018DC64 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 167298 8018DC68 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 16729C 8018DC6C AFA20044 */        sw $v0, 0x44($sp)
  /* 1672A0 8018DC70 8C430074 */        lw $v1, 0x74($v0)
  /* 1672A4 8018DC74 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 1672A8 8018DC78 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 1672AC 8018DC7C 44050000 */      mfc1 $a1, $f0
  /* 1672B0 8018DC80 44060000 */      mfc1 $a2, $f0
  /* 1672B4 8018DC84 3C0742DC */       lui $a3, 0x42dc
  /* 1672B8 8018DC88 24640008 */     addiu $a0, $v1, 8
  /* 1672BC 8018DC8C AFA30040 */        sw $v1, 0x40($sp)
  /* 1672C0 8018DC90 0C001C20 */       jal func_80007080
  /* 1672C4 8018DC94 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1672C8 8018DC98 3C018019 */       lui $at, %hi(D_ovl36_8018E1F4)
  /* 1672CC 8018DC9C 8FA40040 */        lw $a0, 0x40($sp)
  /* 1672D0 8018DCA0 C426E1F4 */      lwc1 $f6, %lo(D_ovl36_8018E1F4)($at)
  /* 1672D4 8018DCA4 3C0C8019 */       lui $t4, %hi(D_ovl36_8018E424)
  /* 1672D8 8018DCA8 3C0D0000 */       lui $t5, %hi(D_NF_00000000)
  /* 1672DC 8018DCAC E4860024 */      swc1 $f6, 0x24($a0)
  /* 1672E0 8018DCB0 8D8CE424 */        lw $t4, %lo(D_ovl36_8018E424)($t4)
  /* 1672E4 8018DCB4 25AD0000 */     addiu $t5, $t5, %lo(D_NF_00000000)
  /* 1672E8 8018DCB8 24060000 */     addiu $a2, $zero, 0
  /* 1672EC 8018DCBC 0C003E8F */       jal func_8000FA3C
  /* 1672F0 8018DCC0 018D2821 */      addu $a1, $t4, $t5
  /* 1672F4 8018DCC4 3C058001 */       lui $a1, %hi(func_80010580)
  /* 1672F8 8018DCC8 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 1672FC 8018DCCC 8FA40044 */        lw $a0, 0x44($sp)
  /* 167300 8018DCD0 24060001 */     addiu $a2, $zero, 1
  /* 167304 8018DCD4 0C002062 */       jal omAddGObjCommonProc
  /* 167308 8018DCD8 24070001 */     addiu $a3, $zero, 1
  /* 16730C 8018DCDC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 167310 8018DCE0 27BD0048 */     addiu $sp, $sp, 0x48
  /* 167314 8018DCE4 03E00008 */        jr $ra
  /* 167318 8018DCE8 00000000 */       nop 

glabel func_ovl36_8018DCEC
  /* 16731C 8018DCEC 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 167320 8018DCF0 3C0E8001 */       lui $t6, %hi(func_80017EC0)
  /* 167324 8018DCF4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 167328 8018DCF8 25CE7EC0 */     addiu $t6, $t6, %lo(func_80017EC0)
  /* 16732C 8018DCFC 240F0014 */     addiu $t7, $zero, 0x14
  /* 167330 8018DD00 24180000 */     addiu $t8, $zero, 0
  /* 167334 8018DD04 3C191000 */       lui $t9, 0x1000
  /* 167338 8018DD08 2408FFFF */     addiu $t0, $zero, -1
  /* 16733C 8018DD0C 24090001 */     addiu $t1, $zero, 1
  /* 167340 8018DD10 240A0001 */     addiu $t2, $zero, 1
  /* 167344 8018DD14 AFAA0030 */        sw $t2, 0x30($sp)
  /* 167348 8018DD18 AFA90028 */        sw $t1, 0x28($sp)
  /* 16734C 8018DD1C AFA80020 */        sw $t0, 0x20($sp)
  /* 167350 8018DD20 AFB9001C */        sw $t9, 0x1c($sp)
  /* 167354 8018DD24 AFB80018 */        sw $t8, 0x18($sp)
  /* 167358 8018DD28 AFAF0014 */        sw $t7, 0x14($sp)
  /* 16735C 8018DD2C AFAE0010 */        sw $t6, 0x10($sp)
  /* 167360 8018DD30 AFA00024 */        sw $zero, 0x24($sp)
  /* 167364 8018DD34 AFA0002C */        sw $zero, 0x2c($sp)
  /* 167368 8018DD38 AFA00034 */        sw $zero, 0x34($sp)
  /* 16736C 8018DD3C 24040401 */     addiu $a0, $zero, 0x401
  /* 167370 8018DD40 00002825 */        or $a1, $zero, $zero
  /* 167374 8018DD44 24060010 */     addiu $a2, $zero, 0x10
  /* 167378 8018DD48 0C002E4F */       jal func_8000B93C
  /* 16737C 8018DD4C 3C078000 */       lui $a3, 0x8000
  /* 167380 8018DD50 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 167384 8018DD54 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 167388 8018DD58 8C430074 */        lw $v1, 0x74($v0)
  /* 16738C 8018DD5C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 167390 8018DD60 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 167394 8018DD64 44050000 */      mfc1 $a1, $f0
  /* 167398 8018DD68 44060000 */      mfc1 $a2, $f0
  /* 16739C 8018DD6C 3C0742DC */       lui $a3, 0x42dc
  /* 1673A0 8018DD70 24640008 */     addiu $a0, $v1, 8
  /* 1673A4 8018DD74 AFA30044 */        sw $v1, 0x44($sp)
  /* 1673A8 8018DD78 0C001C20 */       jal func_80007080
  /* 1673AC 8018DD7C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1673B0 8018DD80 8FA30044 */        lw $v1, 0x44($sp)
  /* 1673B4 8018DD84 240B0005 */     addiu $t3, $zero, 5
  /* 1673B8 8018DD88 AC6B0080 */        sw $t3, 0x80($v1)
  /* 1673BC 8018DD8C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1673C0 8018DD90 27BD0048 */     addiu $sp, $sp, 0x48
  /* 1673C4 8018DD94 03E00008 */        jr $ra
  /* 1673C8 8018DD98 00000000 */       nop 

glabel func_ovl36_8018DD9C
  /* 1673CC 8018DD9C 3C028019 */       lui $v0, %hi(D_ovl36_8018E208)
  /* 1673D0 8018DDA0 2442E208 */     addiu $v0, $v0, %lo(D_ovl36_8018E208)
  /* 1673D4 8018DDA4 8C4E0000 */        lw $t6, ($v0) # D_ovl36_8018E208 + 0
  /* 1673D8 8018DDA8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1673DC 8018DDAC AFBF0014 */        sw $ra, 0x14($sp)
  /* 1673E0 8018DDB0 AFA40018 */        sw $a0, 0x18($sp)
  /* 1673E4 8018DDB4 25CF0001 */     addiu $t7, $t6, 1
  /* 1673E8 8018DDB8 AC4F0000 */        sw $t7, ($v0) # D_ovl36_8018E208 + 0
  /* 1673EC 8018DDBC 0C0E41DB */       jal func_ovl1_8039076C
  /* 1673F0 8018DDC0 3404D000 */       ori $a0, $zero, 0xd000
  /* 1673F4 8018DDC4 10400007 */      beqz $v0, .L8018DDE4
  /* 1673F8 8018DDC8 24190001 */     addiu $t9, $zero, 1
  /* 1673FC 8018DDCC 3C02800A */       lui $v0, %hi(gSceneData)
  /* 167400 8018DDD0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 167404 8018DDD4 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 167408 8018DDD8 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 16740C 8018DDDC 0C00171D */       jal func_80005C74
  /* 167410 8018DDE0 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018DDE4:
  /* 167414 8018DDE4 3C028019 */       lui $v0, %hi(D_ovl36_8018E208)
  /* 167418 8018DDE8 8C42E208 */        lw $v0, %lo(D_ovl36_8018E208)($v0)
  /* 16741C 8018DDEC 2401000F */     addiu $at, $zero, 0xf
  /* 167420 8018DDF0 3C048019 */       lui $a0, %hi(D_ovl36_8018E20C)
  /* 167424 8018DDF4 5441000C */      bnel $v0, $at, .L8018DE28
  /* 167428 8018DDF8 2401003C */     addiu $at, $zero, 0x3c
  /* 16742C 8018DDFC 0C0026A1 */       jal omEjectGObjCommon
  /* 167430 8018DE00 8C84E20C */        lw $a0, %lo(D_ovl36_8018E20C)($a0)
  /* 167434 8018DE04 0C063585 */       jal func_ovl36_8018D614
  /* 167438 8018DE08 00000000 */       nop 
  /* 16743C 8018DE0C 0C063651 */       jal func_ovl36_8018D944
  /* 167440 8018DE10 00000000 */       nop 
  /* 167444 8018DE14 0C063698 */       jal func_ovl36_8018DA60
  /* 167448 8018DE18 00000000 */       nop 
  /* 16744C 8018DE1C 3C028019 */       lui $v0, %hi(D_ovl36_8018E208)
  /* 167450 8018DE20 8C42E208 */        lw $v0, %lo(D_ovl36_8018E208)($v0)
  /* 167454 8018DE24 2401003C */     addiu $at, $zero, 0x3c
  .L8018DE28:
  /* 167458 8018DE28 14410007 */       bne $v0, $at, .L8018DE48
  /* 16745C 8018DE2C 2409001F */     addiu $t1, $zero, 0x1f
  /* 167460 8018DE30 3C02800A */       lui $v0, %hi(gSceneData)
  /* 167464 8018DE34 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 167468 8018DE38 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 16746C 8018DE3C A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 167470 8018DE40 0C00171D */       jal func_80005C74
  /* 167474 8018DE44 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L8018DE48:
  /* 167478 8018DE48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 16747C 8018DE4C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 167480 8018DE50 03E00008 */        jr $ra
  /* 167484 8018DE54 00000000 */       nop 

glabel func_ovl36_8018DE58
  /* 167488 8018DE58 3C018019 */       lui $at, %hi(D_ovl36_8018E208)
  /* 16748C 8018DE5C 03E00008 */        jr $ra
  /* 167490 8018DE60 AC20E208 */        sw $zero, %lo(D_ovl36_8018E208)($at)

glabel func_ovl36_8018DE64
  /* 167494 8018DE64 3C038019 */       lui $v1, %hi(D_ovl36_8018E428)
  /* 167498 8018DE68 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 16749C 8018DE6C 2463E428 */     addiu $v1, $v1, %lo(D_ovl36_8018E428)
  /* 1674A0 8018DE70 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1674A4 8018DE74 3C02800A */       lui $v0, %hi(gBattleState)
  /* 1674A8 8018DE78 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 1674AC 8018DE7C 244250E8 */     addiu $v0, $v0, %lo(gBattleState)
  /* 1674B0 8018DE80 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1674B4 8018DE84 24040004 */     addiu $a0, $zero, 4
  /* 1674B8 8018DE88 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 1674BC 8018DE8C 0060C825 */        or $t9, $v1, $zero
  .L8018DE90:
  /* 1674C0 8018DE90 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 1674C4 8018DE94 25CE000C */     addiu $t6, $t6, 0xc
  /* 1674C8 8018DE98 2739000C */     addiu $t9, $t9, 0xc
  /* 1674CC 8018DE9C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1674D0 8018DEA0 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 1674D4 8018DEA4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 1674D8 8018DEA8 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 1674DC 8018DEAC 15C8FFF8 */       bne $t6, $t0, .L8018DE90
  /* 1674E0 8018DEB0 AF38FFFC */        sw $t8, -4($t9)
  /* 1674E4 8018DEB4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 1674E8 8018DEB8 240B0001 */     addiu $t3, $zero, 1
  /* 1674EC 8018DEBC AF380000 */        sw $t8, ($t9)
  /* 1674F0 8018DEC0 AC430000 */        sw $v1, ($v0) # gBattleState + 0
  /* 1674F4 8018DEC4 A0640000 */        sb $a0, ($v1) # D_ovl36_8018E428 + 0
  /* 1674F8 8018DEC8 A0600001 */        sb $zero, 1($v1) # D_ovl36_8018E428 + 1
  /* 1674FC 8018DECC A06B0004 */        sb $t3, 4($v1) # D_ovl36_8018E428 + 4
  /* 167500 8018DED0 A0600023 */        sb $zero, 0x23($v1) # D_ovl36_8018E428 + 35
  /* 167504 8018DED4 0C063430 */       jal func_ovl36_8018D0C0
  /* 167508 8018DED8 A0640022 */        sb $a0, 0x22($v1) # D_ovl36_8018E428 + 34
  /* 16750C 8018DEDC 3C058019 */       lui $a1, %hi(func_ovl36_8018DD9C)
  /* 167510 8018DEE0 24A5DD9C */     addiu $a1, $a1, %lo(func_ovl36_8018DD9C)
  /* 167514 8018DEE4 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 167518 8018DEE8 2406000D */     addiu $a2, $zero, 0xd
  /* 16751C 8018DEEC 0C00265A */       jal omMakeGObjCommon
  /* 167520 8018DEF0 3C078000 */       lui $a3, 0x8000
  /* 167524 8018DEF4 240E00FF */     addiu $t6, $zero, 0xff
  /* 167528 8018DEF8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 16752C 8018DEFC 24040009 */     addiu $a0, $zero, 9
  /* 167530 8018DF00 3C058000 */       lui $a1, 0x8000
  /* 167534 8018DF04 24060064 */     addiu $a2, $zero, 0x64
  /* 167538 8018DF08 0C002E7F */       jal func_8000B9FC
  /* 16753C 8018DF0C 24070003 */     addiu $a3, $zero, 3
  /* 167540 8018DF10 0C063796 */       jal func_ovl36_8018DE58
  /* 167544 8018DF14 00000000 */       nop 
  /* 167548 8018DF18 0C045624 */       jal func_ovl2_80115890
  /* 16754C 8018DF1C 00000000 */       nop 
  /* 167550 8018DF20 0C03B04C */       jal func_ovl2_800EC130
  /* 167554 8018DF24 00000000 */       nop 
  /* 167558 8018DF28 0C03F0A1 */       jal mpData_SetMapCollisionData
  /* 16755C 8018DF2C 00000000 */       nop 
  /* 167560 8018DF30 2404000A */     addiu $a0, $zero, 0xa
  /* 167564 8018DF34 2405000A */     addiu $a1, $zero, 0xa
  /* 167568 8018DF38 24060136 */     addiu $a2, $zero, 0x136
  /* 16756C 8018DF3C 0C043966 */       jal cmManager_SetViewportCoordinates
  /* 167570 8018DF40 240700E6 */     addiu $a3, $zero, 0xe6
  /* 167574 8018DF44 0C0436D5 */       jal cmManager_MakeWallpaperCamera
  /* 167578 8018DF48 00000000 */       nop 
  /* 16757C 8018DF4C 24040003 */     addiu $a0, $zero, 3
  /* 167580 8018DF50 0C035C65 */       jal ftManager_AllocFighterData
  /* 167584 8018DF54 24050002 */     addiu $a1, $zero, 2
  /* 167588 8018DF58 0C05952C */       jal wpManager_AllocUserData
  /* 16758C 8018DF5C 00000000 */       nop 
  /* 167590 8018DF60 0C05B7A8 */       jal itManager_AllocUserData
  /* 167594 8018DF64 00000000 */       nop 
  /* 167598 8018DF68 0C03F4C0 */       jal efManager_AllocUserData
  /* 16759C 8018DF6C 00000000 */       nop 
  /* 1675A0 8018DF70 0C035E1B */       jal ftManager_SetFileDataKind
  /* 1675A4 8018DF74 00002025 */        or $a0, $zero, $zero
  /* 1675A8 8018DF78 3C048013 */       lui $a0, %hi(D_ovl2_80130D9C)
  /* 1675AC 8018DF7C 8C840D9C */        lw $a0, %lo(D_ovl2_80130D9C)($a0)
  /* 1675B0 8018DF80 0C001260 */       jal hal_alloc
  /* 1675B4 8018DF84 24050010 */     addiu $a1, $zero, 0x10
  /* 1675B8 8018DF88 3C018019 */       lui $at, %hi(D_ovl36_8018E21C)
  /* 1675BC 8018DF8C 0C0636D7 */       jal func_ovl36_8018DB5C
  /* 1675C0 8018DF90 AC22E21C */        sw $v0, %lo(D_ovl36_8018E21C)($at)
  /* 1675C4 8018DF94 0C06373B */       jal func_ovl36_8018DCEC
  /* 1675C8 8018DF98 00000000 */       nop 
  /* 1675CC 8018DF9C 0C0636FF */       jal func_ovl36_8018DBFC
  /* 1675D0 8018DFA0 00000000 */       nop 
  /* 1675D4 8018DFA4 0C063465 */       jal func_ovl36_8018D194
  /* 1675D8 8018DFA8 00000000 */       nop 
  /* 1675DC 8018DFAC 0C00024B */       jal func_8000092C
  /* 1675E0 8018DFB0 00000000 */       nop 
  /* 1675E4 8018DFB4 2C4105EB */     sltiu $at, $v0, 0x5eb
  /* 1675E8 8018DFB8 50200007 */      beql $at, $zero, .L8018DFD8
  /* 1675EC 8018DFBC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFC0:
  /* 1675F0 8018DFC0 0C00024B */       jal func_8000092C
  /* 1675F4 8018DFC4 00000000 */       nop 
  /* 1675F8 8018DFC8 2C4105EB */     sltiu $at, $v0, 0x5eb
  /* 1675FC 8018DFCC 1420FFFC */      bnez $at, .L8018DFC0
  /* 167600 8018DFD0 00000000 */       nop 
  /* 167604 8018DFD4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DFD8:
  /* 167608 8018DFD8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 16760C 8018DFDC 03E00008 */        jr $ra
  /* 167610 8018DFE0 00000000 */       nop 

glabel func_ovl36_8018DFE4
  /* 167614 8018DFE4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 167618 8018DFE8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 16761C 8018DFEC 8C830000 */        lw $v1, ($a0)
  /* 167620 8018DFF0 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 167624 8018DFF4 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 167628 8018DFF8 246E0008 */     addiu $t6, $v1, 8
  /* 16762C 8018DFFC AC8E0000 */        sw $t6, ($a0)
  /* 167630 8018E000 3C180002 */       lui $t8, 2
  /* 167634 8018E004 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 167638 8018E008 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 16763C 8018E00C AC780004 */        sw $t8, 4($v1)
  /* 167640 8018E010 AC6F0000 */        sw $t7, ($v1)
  /* 167644 8018E014 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 167648 8018E018 0C03F2DC */       jal func_ovl2_800FCB70
  /* 16764C 8018E01C 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 167650 8018E020 8FBF0014 */        lw $ra, 0x14($sp)
  /* 167654 8018E024 27BD0018 */     addiu $sp, $sp, 0x18
  /* 167658 8018E028 03E00008 */        jr $ra
  /* 16765C 8018E02C 00000000 */       nop 

glabel intro_focus_mario_entry
  /* 167660 8018E030 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 167664 8018E034 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 167668 8018E038 3C048019 */       lui $a0, %hi(D_ovl36_8018E11C)
  /* 16766C 8018E03C 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 167670 8018E040 2484E11C */     addiu $a0, $a0, %lo(D_ovl36_8018E11C)
  /* 167674 8018E044 AFBF0014 */        sw $ra, 0x14($sp)
  /* 167678 8018E048 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 16767C 8018E04C 0C001C09 */       jal func_80007024
  /* 167680 8018E050 AC8F000C */        sw $t7, 0xc($a0) # D_ovl36_8018E11C + 12
  /* 167684 8018E054 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 167688 8018E058 3C198019 */       lui $t9, %hi(D_NF_8018E620)
  /* 16768C 8018E05C 3C048019 */       lui $a0, %hi(D_ovl36_8018E138)
  /* 167690 8018E060 2739E620 */     addiu $t9, $t9, %lo(D_NF_8018E620)
  /* 167694 8018E064 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 167698 8018E068 2484E138 */     addiu $a0, $a0, %lo(D_ovl36_8018E138)
  /* 16769C 8018E06C 03194023 */      subu $t0, $t8, $t9
  /* 1676A0 8018E070 0C001A0F */       jal func_8000683C
  /* 1676A4 8018E074 AC880010 */        sw $t0, 0x10($a0) # D_ovl36_8018E138 + 16
  /* 1676A8 8018E078 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1676AC 8018E07C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1676B0 8018E080 03E00008 */        jr $ra
  /* 1676B4 8018E084 00000000 */       nop 

  /* 1676B8 8018E088 00000000 */       nop 
  /* 1676BC 8018E08C 00000000 */       nop 
