.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018D870

glabel func_ovl51_8018D0C0
  /* 174940 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 174944 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 174948 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 17494C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl51_8018DAA8)
  /* 174950 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl51_8018DC28)
  /* 174954 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 174958 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 17495C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 174960 8018D0E0 2718DAA8 */     addiu $t8, $t8, %lo(D_ovl51_8018DAA8)
  /* 174964 8018D0E4 24190030 */     addiu $t9, $zero, 0x30
  /* 174968 8018D0E8 2508DC28 */     addiu $t0, $t0, %lo(D_ovl51_8018DC28)
  /* 17496C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 174970 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 174974 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 174978 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 17497C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 174980 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 174984 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 174988 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 17498C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 174990 8018D110 0C0337DE */       jal rldm_initialize
  /* 174994 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 174998 8018D118 3C048019 */       lui $a0, %hi(D_ovl51_8018D934)
  /* 17499C 8018D11C 2484D934 */     addiu $a0, $a0, %lo(D_ovl51_8018D934)
  /* 1749A0 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 1749A4 8018D124 24050002 */     addiu $a1, $zero, 2
  /* 1749A8 8018D128 00402025 */        or $a0, $v0, $zero
  /* 1749AC 8018D12C 0C001260 */       jal hal_alloc
  /* 1749B0 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 1749B4 8018D134 3C048019 */       lui $a0, %hi(D_ovl51_8018D934)
  /* 1749B8 8018D138 3C068019 */       lui $a2, %hi(D_ovl51_8018DC60)
  /* 1749BC 8018D13C 24C6DC60 */     addiu $a2, $a2, %lo(D_ovl51_8018DC60)
  /* 1749C0 8018D140 2484D934 */     addiu $a0, $a0, %lo(D_ovl51_8018D934)
  /* 1749C4 8018D144 24050002 */     addiu $a1, $zero, 2
  /* 1749C8 8018D148 0C033781 */       jal rldm_load_files_into
  /* 1749CC 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 1749D0 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1749D4 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1749D8 8018D158 03E00008 */        jr $ra
  /* 1749DC 8018D15C 00000000 */       nop 

  /* 1749E0 8018D160 03E00008 */        jr $ra
  /* 1749E4 8018D164 00000000 */       nop 

glabel func_ovl51_8018D168
  /* 1749E8 8018D168 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1749EC 8018D16C 3C0F8019 */       lui $t7, %hi(D_ovl51_8018D870)
  /* 1749F0 8018D170 AFBF0024 */        sw $ra, 0x24($sp)
  /* 1749F4 8018D174 AFB00020 */        sw $s0, 0x20($sp)
  /* 1749F8 8018D178 AFA40028 */        sw $a0, 0x28($sp)
  /* 1749FC 8018D17C AFA5002C */        sw $a1, 0x2c($sp)
  /* 174A00 8018D180 AFA60030 */        sw $a2, 0x30($sp)
  /* 174A04 8018D184 25EFD870 */     addiu $t7, $t7, %lo(D_ovl51_8018D870)
  /* 174A08 8018D188 8DF90000 */        lw $t9, ($t7) # D_ovl51_8018D870 + 0
  /* 174A0C 8018D18C 3C0E8019 */       lui $t6, %hi(D_ovl51_8018DA68)
  /* 174A10 8018D190 25CEDA68 */     addiu $t6, $t6, %lo(D_ovl51_8018DA68)
  /* 174A14 8018D194 ADD90000 */        sw $t9, ($t6) # D_ovl51_8018DA68 + 0
  /* 174A18 8018D198 8DF90008 */        lw $t9, 8($t7) # D_ovl51_8018D870 + 8
  /* 174A1C 8018D19C 8DF80004 */        lw $t8, 4($t7) # D_ovl51_8018D870 + 4
  /* 174A20 8018D1A0 3C098019 */       lui $t1, %hi(D_ovl51_8018D88C)
  /* 174A24 8018D1A4 ADD90008 */        sw $t9, 8($t6) # D_ovl51_8018DA68 + 8
  /* 174A28 8018D1A8 ADD80004 */        sw $t8, 4($t6) # D_ovl51_8018DA68 + 4
  /* 174A2C 8018D1AC 8DF8000C */        lw $t8, 0xc($t7) # D_ovl51_8018D870 + 12
  /* 174A30 8018D1B0 8DF90010 */        lw $t9, 0x10($t7) # D_ovl51_8018D870 + 16
  /* 174A34 8018D1B4 2529D88C */     addiu $t1, $t1, %lo(D_ovl51_8018D88C)
  /* 174A38 8018D1B8 ADD8000C */        sw $t8, 0xc($t6) # D_ovl51_8018DA68 + 12
  /* 174A3C 8018D1BC ADD90010 */        sw $t9, 0x10($t6) # D_ovl51_8018DA68 + 16
  /* 174A40 8018D1C0 8DF90018 */        lw $t9, 0x18($t7) # D_ovl51_8018D870 + 24
  /* 174A44 8018D1C4 8DF80014 */        lw $t8, 0x14($t7) # D_ovl51_8018D870 + 20
  /* 174A48 8018D1C8 3C088019 */       lui $t0, %hi(D_ovl51_8018DA88)
  /* 174A4C 8018D1CC ADD90018 */        sw $t9, 0x18($t6) # D_ovl51_8018DA68 + 24
  /* 174A50 8018D1D0 ADD80014 */        sw $t8, 0x14($t6) # D_ovl51_8018DA68 + 20
  /* 174A54 8018D1D4 8D2B0000 */        lw $t3, ($t1) # D_ovl51_8018D88C + 0
  /* 174A58 8018D1D8 2508DA88 */     addiu $t0, $t0, %lo(D_ovl51_8018DA88)
  /* 174A5C 8018D1DC 8D2A0004 */        lw $t2, 4($t1) # D_ovl51_8018D88C + 4
  /* 174A60 8018D1E0 AD0B0000 */        sw $t3, ($t0) # D_ovl51_8018DA88 + 0
  /* 174A64 8018D1E4 8D2B0008 */        lw $t3, 8($t1) # D_ovl51_8018D88C + 8
  /* 174A68 8018D1E8 AD0A0004 */        sw $t2, 4($t0) # D_ovl51_8018DA88 + 4
  /* 174A6C 8018D1EC 8D2A000C */        lw $t2, 0xc($t1) # D_ovl51_8018D88C + 12
  /* 174A70 8018D1F0 AD0B0008 */        sw $t3, 8($t0) # D_ovl51_8018DA88 + 8
  /* 174A74 8018D1F4 8D2B0010 */        lw $t3, 0x10($t1) # D_ovl51_8018D88C + 16
  /* 174A78 8018D1F8 AD0A000C */        sw $t2, 0xc($t0) # D_ovl51_8018DA88 + 12
  /* 174A7C 8018D1FC 8D2A0014 */        lw $t2, 0x14($t1) # D_ovl51_8018D88C + 20
  /* 174A80 8018D200 AD0B0010 */        sw $t3, 0x10($t0) # D_ovl51_8018DA88 + 16
  /* 174A84 8018D204 8D2B0018 */        lw $t3, 0x18($t1) # D_ovl51_8018D88C + 24
  /* 174A88 8018D208 00002025 */        or $a0, $zero, $zero
  /* 174A8C 8018D20C AD0A0014 */        sw $t2, 0x14($t0) # D_ovl51_8018DA88 + 20
  /* 174A90 8018D210 0C0436CB */       jal func_ovl2_8010DB2C
  /* 174A94 8018D214 AD0B0018 */        sw $t3, 0x18($t0) # D_ovl51_8018DA88 + 24
  /* 174A98 8018D218 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 174A9C 8018D21C 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 174AA0 8018D220 3C038019 */       lui $v1, %hi(D_ovl51_8018DA58)
  /* 174AA4 8018D224 2463DA58 */     addiu $v1, $v1, %lo(D_ovl51_8018DA58)
  /* 174AA8 8018D228 AC620000 */        sw $v0, ($v1) # D_ovl51_8018DA58 + 0
  /* 174AAC 8018D22C 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 174AB0 8018D230 8C500074 */        lw $s0, 0x74($v0)
  /* 174AB4 8018D234 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 174AB8 8018D238 44050000 */      mfc1 $a1, $f0
  /* 174ABC 8018D23C 44060000 */      mfc1 $a2, $f0
  /* 174AC0 8018D240 3C07439B */       lui $a3, 0x439b
  /* 174AC4 8018D244 26040008 */     addiu $a0, $s0, 8
  /* 174AC8 8018D248 0C001C20 */       jal func_80007080
  /* 174ACC 8018D24C E7A40010 */      swc1 $f4, 0x10($sp)
  /* 174AD0 8018D250 3C018019 */       lui $at, %hi(D_ovl51_8018DA28)
  /* 174AD4 8018D254 C426DA28 */      lwc1 $f6, %lo(D_ovl51_8018DA28)($at)
  /* 174AD8 8018D258 3C048019 */       lui $a0, %hi(D_ovl51_8018DA58)
  /* 174ADC 8018D25C E6060024 */      swc1 $f6, 0x24($s0)
  /* 174AE0 8018D260 0C002CE7 */       jal func_8000B39C
  /* 174AE4 8018D264 8C84DA58 */        lw $a0, %lo(D_ovl51_8018DA58)($a0)
  /* 174AE8 8018D268 3C014248 */       lui $at, (0x42480000 >> 16) # 50.0
  /* 174AEC 8018D26C 44814000 */      mtc1 $at, $f8 # 50.0 to cop1
  /* 174AF0 8018D270 3C018019 */       lui $at, %hi(D_ovl51_8018DA2C)
  /* 174AF4 8018D274 3C0D8019 */       lui $t5, %hi(D_ovl51_8018DC64)
  /* 174AF8 8018D278 E6080028 */      swc1 $f8, 0x28($s0)
  /* 174AFC 8018D27C C42ADA2C */      lwc1 $f10, %lo(D_ovl51_8018DA2C)($at)
  /* 174B00 8018D280 3C0E0000 */       lui $t6, %hi(D_NF_00000000)
  /* 174B04 8018D284 25CE0000 */     addiu $t6, $t6, %lo(D_NF_00000000)
  /* 174B08 8018D288 E60A002C */      swc1 $f10, 0x2c($s0)
  /* 174B0C 8018D28C 8DADDC64 */        lw $t5, %lo(D_ovl51_8018DC64)($t5)
  /* 174B10 8018D290 02002025 */        or $a0, $s0, $zero
  /* 174B14 8018D294 24060000 */     addiu $a2, $zero, 0
  /* 174B18 8018D298 0C003E8F */       jal func_8000FA3C
  /* 174B1C 8018D29C 01AE2821 */      addu $a1, $t5, $t6
  /* 174B20 8018D2A0 3C048019 */       lui $a0, %hi(D_ovl51_8018DA58)
  /* 174B24 8018D2A4 3C058001 */       lui $a1, %hi(func_80010580)
  /* 174B28 8018D2A8 24A50580 */     addiu $a1, $a1, %lo(func_80010580)
  /* 174B2C 8018D2AC 8C84DA58 */        lw $a0, %lo(D_ovl51_8018DA58)($a0)
  /* 174B30 8018D2B0 24060001 */     addiu $a2, $zero, 1
  /* 174B34 8018D2B4 0C002062 */       jal omAddGObjCommonProc
  /* 174B38 8018D2B8 24070001 */     addiu $a3, $zero, 1
  /* 174B3C 8018D2BC 3C048019 */       lui $a0, %hi(D_ovl51_8018DA58)
  /* 174B40 8018D2C0 0C004160 */       jal func_80010580
  /* 174B44 8018D2C4 8C84DA58 */        lw $a0, %lo(D_ovl51_8018DA58)($a0)
  /* 174B48 8018D2C8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 174B4C 8018D2CC 8FB00020 */        lw $s0, 0x20($sp)
  /* 174B50 8018D2D0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 174B54 8018D2D4 03E00008 */        jr $ra
  /* 174B58 8018D2D8 00000000 */       nop 

glabel func_ovl51_8018D2DC
  /* 174B5C 8018D2DC 27BDFF40 */     addiu $sp, $sp, -0xc0
  /* 174B60 8018D2E0 AFBF0034 */        sw $ra, 0x34($sp)
  /* 174B64 8018D2E4 AFB60030 */        sw $s6, 0x30($sp)
  /* 174B68 8018D2E8 AFB5002C */        sw $s5, 0x2c($sp)
  /* 174B6C 8018D2EC AFB40028 */        sw $s4, 0x28($sp)
  /* 174B70 8018D2F0 AFB30024 */        sw $s3, 0x24($sp)
  /* 174B74 8018D2F4 AFB20020 */        sw $s2, 0x20($sp)
  /* 174B78 8018D2F8 AFB1001C */        sw $s1, 0x1c($sp)
  /* 174B7C 8018D2FC 0C0412F7 */       jal func_ovl2_80104BDC
  /* 174B80 8018D300 AFB00018 */        sw $s0, 0x18($sp)
  /* 174B84 8018D304 0C041580 */       jal func_ovl2_80105600
  /* 174B88 8018D308 00000000 */       nop 
  /* 174B8C 8018D30C 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 174B90 8018D310 24040016 */     addiu $a0, $zero, 0x16
  /* 174B94 8018D314 24100001 */     addiu $s0, $zero, 1
  /* 174B98 8018D318 10500009 */       beq $v0, $s0, .L8018D340
  /* 174B9C 8018D31C 24040016 */     addiu $a0, $zero, 0x16
  /* 174BA0 8018D320 3C108019 */       lui $s0, %hi(D_ovl51_8018D9F0)
  /* 174BA4 8018D324 2610D9F0 */     addiu $s0, $s0, %lo(D_ovl51_8018D9F0)
  .L8018D328:
  /* 174BA8 8018D328 0C008D89 */       jal fatal_printf
  /* 174BAC 8018D32C 02002025 */        or $a0, $s0, $zero
  /* 174BB0 8018D330 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 174BB4 8018D334 00000000 */       nop 
  /* 174BB8 8018D338 1000FFFB */         b .L8018D328
  /* 174BBC 8018D33C 00000000 */       nop 
  .L8018D340:
  /* 174BC0 8018D340 0C03F205 */       jal func_ovl2_800FC814
  /* 174BC4 8018D344 27A500AC */     addiu $a1, $sp, 0xac
  /* 174BC8 8018D348 27B1009C */     addiu $s1, $sp, 0x9c
  /* 174BCC 8018D34C 02202825 */        or $a1, $s1, $zero
  /* 174BD0 8018D350 0C03F225 */       jal func_ovl2_800FC894
  /* 174BD4 8018D354 8FA400AC */        lw $a0, 0xac($sp)
  /* 174BD8 8018D358 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 174BDC 8018D35C 24040017 */     addiu $a0, $zero, 0x17
  /* 174BE0 8018D360 10500009 */       beq $v0, $s0, .L8018D388
  /* 174BE4 8018D364 24040017 */     addiu $a0, $zero, 0x17
  /* 174BE8 8018D368 3C108019 */       lui $s0, %hi(D_ovl51_8018DA0C)
  /* 174BEC 8018D36C 2610DA0C */     addiu $s0, $s0, %lo(D_ovl51_8018DA0C)
  .L8018D370:
  /* 174BF0 8018D370 0C008D89 */       jal fatal_printf
  /* 174BF4 8018D374 02002025 */        or $a0, $s0, $zero
  /* 174BF8 8018D378 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 174BFC 8018D37C 00000000 */       nop 
  /* 174C00 8018D380 1000FFFB */         b .L8018D370
  /* 174C04 8018D384 00000000 */       nop 
  .L8018D388:
  /* 174C08 8018D388 0C03F205 */       jal func_ovl2_800FC814
  /* 174C0C 8018D38C 27A500A8 */     addiu $a1, $sp, 0xa8
  /* 174C10 8018D390 8FA400A8 */        lw $a0, 0xa8($sp)
  /* 174C14 8018D394 0C03F225 */       jal func_ovl2_800FC894
  /* 174C18 8018D398 27A50090 */     addiu $a1, $sp, 0x90
  /* 174C1C 8018D39C 3C018019 */       lui $at, %hi(D_ovl51_8018DA30)
  /* 174C20 8018D3A0 C426DA30 */      lwc1 $f6, %lo(D_ovl51_8018DA30)($at)
  /* 174C24 8018D3A4 C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 174C28 8018D3A8 46062200 */     add.s $f8, $f4, $f6
  /* 174C2C 8018D3AC E7A80090 */      swc1 $f8, 0x90($sp)
  /* 174C30 8018D3B0 8E2F0000 */        lw $t7, ($s1)
  /* 174C34 8018D3B4 AFAF0000 */        sw $t7, ($sp)
  /* 174C38 8018D3B8 8E250004 */        lw $a1, 4($s1)
  /* 174C3C 8018D3BC 8FA40000 */        lw $a0, ($sp)
  /* 174C40 8018D3C0 AFA50004 */        sw $a1, 4($sp)
  /* 174C44 8018D3C4 8E260008 */        lw $a2, 8($s1)
  /* 174C48 8018D3C8 0C06345A */       jal func_ovl51_8018D168
  /* 174C4C 8018D3CC AFA60008 */        sw $a2, 8($sp)
  /* 174C50 8018D3D0 0C0455B9 */       jal func_ovl2_801156E4
  /* 174C54 8018D3D4 00000000 */       nop 
  /* 174C58 8018D3D8 0C0594F8 */       jal func_ovl3_801653E0
  /* 174C5C 8018D3DC 00000000 */       nop 
  /* 174C60 8018D3E0 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 174C64 8018D3E4 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 174C68 8018D3E8 00008825 */        or $s1, $zero, $zero
  /* 174C6C 8018D3EC 00009025 */        or $s2, $zero, $zero
  /* 174C70 8018D3F0 27B6004C */     addiu $s6, $sp, 0x4c
  /* 174C74 8018D3F4 24140002 */     addiu $s4, $zero, 2
  .L8018D3F8:
  /* 174C78 8018D3F8 3C188011 */       lui $t8, %hi(D_ovl2_80116DD0)
  /* 174C7C 8018D3FC 27186DD0 */     addiu $t8, $t8, %lo(D_ovl2_80116DD0)
  /* 174C80 8018D400 270A003C */     addiu $t2, $t8, 0x3c
  /* 174C84 8018D404 02C04825 */        or $t1, $s6, $zero
  .L8018D408:
  /* 174C88 8018D408 8F080000 */        lw $t0, ($t8) # D_ovl2_80116DD0 + 0
  /* 174C8C 8018D40C 2718000C */     addiu $t8, $t8, 0xc
  /* 174C90 8018D410 2529000C */     addiu $t1, $t1, 0xc
  /* 174C94 8018D414 AD28FFF4 */        sw $t0, -0xc($t1)
  /* 174C98 8018D418 8F19FFF8 */        lw $t9, -8($t8) # D_ovl2_80116DD0 + -8
  /* 174C9C 8018D41C AD39FFF8 */        sw $t9, -8($t1)
  /* 174CA0 8018D420 8F08FFFC */        lw $t0, -4($t8) # D_ovl2_80116DD0 + -4
  /* 174CA4 8018D424 170AFFF8 */       bne $t8, $t2, .L8018D408
  /* 174CA8 8018D428 AD28FFFC */        sw $t0, -4($t1)
  /* 174CAC 8018D42C 8F080000 */        lw $t0, ($t8) # D_ovl2_80116DD0 + 0
  /* 174CB0 8018D430 00116880 */       sll $t5, $s1, 2
  /* 174CB4 8018D434 01B16821 */      addu $t5, $t5, $s1
  /* 174CB8 8018D438 AD280000 */        sw $t0, ($t1)
  /* 174CBC 8018D43C 8EAB0000 */        lw $t3, ($s5) # gpBattleState + 0
  /* 174CC0 8018D440 3C0E8004 */       lui $t6, %hi(gContInput)
  /* 174CC4 8018D444 25CE5228 */     addiu $t6, $t6, %lo(gContInput)
  /* 174CC8 8018D448 01728021 */      addu $s0, $t3, $s2
  /* 174CCC 8018D44C 920C0022 */       lbu $t4, 0x22($s0) # D_ovl51_8018DA0C + 34
  /* 174CD0 8018D450 000D6840 */       sll $t5, $t5, 1
  /* 174CD4 8018D454 01AE9821 */      addu $s3, $t5, $t6
  /* 174CD8 8018D458 528C0055 */      beql $s4, $t4, .L8018D5B0
  /* 174CDC 8018D45C 26310001 */     addiu $s1, $s1, 1
  /* 174CE0 8018D460 0C035E1B */       jal func_ovl2_800D786C
  /* 174CE4 8018D464 92040023 */       lbu $a0, 0x23($s0) # D_ovl51_8018DA0C + 35
  /* 174CE8 8018D468 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 174CEC 8018D46C C7AA009C */      lwc1 $f10, 0x9c($sp)
  /* 174CF0 8018D470 24180001 */     addiu $t8, $zero, 1
  /* 174CF4 8018D474 00528021 */      addu $s0, $v0, $s2
  /* 174CF8 8018D478 920F0023 */       lbu $t7, 0x23($s0) # D_ovl51_8018DA0C + 35
  /* 174CFC 8018D47C 240900C8 */     addiu $t1, $zero, 0xc8
  /* 174D00 8018D480 C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 174D04 8018D484 AFAF004C */        sw $t7, 0x4c($sp)
  /* 174D08 8018D488 920A0023 */       lbu $t2, 0x23($s0) # D_ovl51_8018DA0C + 35
  /* 174D0C 8018D48C 2419FFFF */     addiu $t9, $zero, -1
  /* 174D10 8018D490 24080028 */     addiu $t0, $zero, 0x28
  /* 174D14 8018D494 168A0009 */       bne $s4, $t2, .L8018D4BC
  /* 174D18 8018D498 240C0001 */     addiu $t4, $zero, 1
  /* 174D1C 8018D49C C7B000A0 */      lwc1 $f16, 0xa0($sp)
  /* 174D20 8018D4A0 C7B200A4 */      lwc1 $f18, 0xa4($sp)
  /* 174D24 8018D4A4 E7AA0050 */      swc1 $f10, 0x50($sp)
  /* 174D28 8018D4A8 AFB8005C */        sw $t8, 0x5c($sp)
  /* 174D2C 8018D4AC AFA90070 */        sw $t1, 0x70($sp)
  /* 174D30 8018D4B0 E7B00054 */      swc1 $f16, 0x54($sp)
  /* 174D34 8018D4B4 10000008 */         b .L8018D4D8
  /* 174D38 8018D4B8 E7B20058 */      swc1 $f18, 0x58($sp)
  .L8018D4BC:
  /* 174D3C 8018D4BC C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 174D40 8018D4C0 C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 174D44 8018D4C4 E7A40050 */      swc1 $f4, 0x50($sp)
  /* 174D48 8018D4C8 AFB9005C */        sw $t9, 0x5c($sp)
  /* 174D4C 8018D4CC AFA80070 */        sw $t0, 0x70($sp)
  /* 174D50 8018D4D0 E7A60054 */      swc1 $f6, 0x54($sp)
  /* 174D54 8018D4D4 E7A80058 */      swc1 $f8, 0x58($sp)
  .L8018D4D8:
  /* 174D58 8018D4D8 920B0024 */       lbu $t3, 0x24($s0) # D_ovl51_8018DA0C + 36
  /* 174D5C 8018D4DC A3B10061 */        sb $s1, 0x61($sp)
  /* 174D60 8018D4E0 A3AC0062 */        sb $t4, 0x62($sp)
  /* 174D64 8018D4E4 A3AB0060 */        sb $t3, 0x60($sp)
  /* 174D68 8018D4E8 920D0026 */       lbu $t5, 0x26($s0) # D_ovl51_8018DA0C + 38
  /* 174D6C 8018D4EC A3AD0063 */        sb $t5, 0x63($sp)
  /* 174D70 8018D4F0 920E0021 */       lbu $t6, 0x21($s0) # D_ovl51_8018DA0C + 33
  /* 174D74 8018D4F4 A3AE0065 */        sb $t6, 0x65($sp)
  /* 174D78 8018D4F8 920F0020 */       lbu $t7, 0x20($s0) # D_ovl51_8018DA0C + 32
  /* 174D7C 8018D4FC A3AF0066 */        sb $t7, 0x66($sp)
  /* 174D80 8018D500 904A0007 */       lbu $t2, 7($v0)
  /* 174D84 8018D504 A3AA0067 */        sb $t2, 0x67($sp)
  /* 174D88 8018D508 92180022 */       lbu $t8, 0x22($s0) # D_ovl51_8018DA0C + 34
  /* 174D8C 8018D50C AFB30078 */        sw $s3, 0x78($sp)
  /* 174D90 8018D510 AFB80074 */        sw $t8, 0x74($sp)
  /* 174D94 8018D514 0C035E2D */       jal func_ovl2_800D78B4
  /* 174D98 8018D518 92040023 */       lbu $a0, 0x23($s0) # D_ovl51_8018DA0C + 35
  /* 174D9C 8018D51C AFA20084 */        sw $v0, 0x84($sp)
  /* 174DA0 8018D520 0C035FCF */       jal ftManager_CreateFighter
  /* 174DA4 8018D524 02C02025 */        or $a0, $s6, $zero
  /* 174DA8 8018D528 3C018019 */       lui $at, %hi(D_ovl51_8018DA50)
  /* 174DAC 8018D52C AC22DA50 */        sw $v0, %lo(D_ovl51_8018DA50)($at)
  /* 174DB0 8018D530 8EA90000 */        lw $t1, ($s5) # gpBattleState + 0
  /* 174DB4 8018D534 00408025 */        or $s0, $v0, $zero
  /* 174DB8 8018D538 02202025 */        or $a0, $s1, $zero
  /* 174DBC 8018D53C 0132C821 */      addu $t9, $t1, $s2
  /* 174DC0 8018D540 93280023 */       lbu $t0, 0x23($t9)
  /* 174DC4 8018D544 56880006 */      bnel $s4, $t0, .L8018D560
  /* 174DC8 8018D548 8C430084 */        lw $v1, 0x84($v0)
  /* 174DCC 8018D54C 8C430084 */        lw $v1, 0x84($v0)
  /* 174DD0 8018D550 240B0009 */     addiu $t3, $zero, 9
  /* 174DD4 8018D554 10000004 */         b .L8018D568
  /* 174DD8 8018D558 AC6B0ADC */        sw $t3, 0xadc($v1)
  /* 174DDC 8018D55C 8C430084 */        lw $v1, 0x84($v0)
  .L8018D560:
  /* 174DE0 8018D560 240C0006 */     addiu $t4, $zero, 6
  /* 174DE4 8018D564 AC6C0ADC */        sw $t4, 0xadc($v1)
  .L8018D568:
  /* 174DE8 8018D568 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 174DEC 8018D56C 02002825 */        or $a1, $s0, $zero
  /* 174DF0 8018D570 8EAD0000 */        lw $t5, ($s5) # gpBattleState + 0
  /* 174DF4 8018D574 02002025 */        or $a0, $s0, $zero
  /* 174DF8 8018D578 3C058019 */       lui $a1, 0x8019
  /* 174DFC 8018D57C 01B27021 */      addu $t6, $t5, $s2
  /* 174E00 8018D580 91CF0023 */       lbu $t7, 0x23($t6)
  /* 174E04 8018D584 168F0007 */       bne $s4, $t7, .L8018D5A4
  /* 174E08 8018D588 00000000 */       nop 
  /* 174E0C 8018D58C 3C058019 */       lui $a1, %hi(D_ovl51_8018D8A8)
  /* 174E10 8018D590 24A5D8A8 */     addiu $a1, $a1, %lo(D_ovl51_8018D8A8)
  /* 174E14 8018D594 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 174E18 8018D598 02002025 */        or $a0, $s0, $zero
  /* 174E1C 8018D59C 10000004 */         b .L8018D5B0
  /* 174E20 8018D5A0 26310001 */     addiu $s1, $s1, 1
  .L8018D5A4:
  /* 174E24 8018D5A4 0C03A6CC */       jal ftCommon_SetHowToPlayInputSeq
  /* 174E28 8018D5A8 24A5D8F0 */     addiu $a1, $a1, -0x2710
  /* 174E2C 8018D5AC 26310001 */     addiu $s1, $s1, 1
  .L8018D5B0:
  /* 174E30 8018D5B0 24010004 */     addiu $at, $zero, 4
  /* 174E34 8018D5B4 1621FF90 */       bne $s1, $at, .L8018D3F8
  /* 174E38 8018D5B8 26520074 */     addiu $s2, $s2, 0x74
  /* 174E3C 8018D5BC 8FBF0034 */        lw $ra, 0x34($sp)
  /* 174E40 8018D5C0 8FB00018 */        lw $s0, 0x18($sp)
  /* 174E44 8018D5C4 8FB1001C */        lw $s1, 0x1c($sp)
  /* 174E48 8018D5C8 8FB20020 */        lw $s2, 0x20($sp)
  /* 174E4C 8018D5CC 8FB30024 */        lw $s3, 0x24($sp)
  /* 174E50 8018D5D0 8FB40028 */        lw $s4, 0x28($sp)
  /* 174E54 8018D5D4 8FB5002C */        lw $s5, 0x2c($sp)
  /* 174E58 8018D5D8 8FB60030 */        lw $s6, 0x30($sp)
  /* 174E5C 8018D5DC 03E00008 */        jr $ra
  /* 174E60 8018D5E0 27BD00C0 */     addiu $sp, $sp, 0xc0

glabel func_ovl51_8018D5E4
  /* 174E64 8018D5E4 3C028019 */       lui $v0, %hi(D_ovl51_8018DA48)
  /* 174E68 8018D5E8 2442DA48 */     addiu $v0, $v0, %lo(D_ovl51_8018DA48)
  /* 174E6C 8018D5EC 8C4E0000 */        lw $t6, ($v0) # D_ovl51_8018DA48 + 0
  /* 174E70 8018D5F0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 174E74 8018D5F4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 174E78 8018D5F8 AFA40018 */        sw $a0, 0x18($sp)
  /* 174E7C 8018D5FC 25CF0001 */     addiu $t7, $t6, 1
  /* 174E80 8018D600 AC4F0000 */        sw $t7, ($v0) # D_ovl51_8018DA48 + 0
  /* 174E84 8018D604 0C0E41DB */       jal func_ovl1_8039076C
  /* 174E88 8018D608 3404D000 */       ori $a0, $zero, 0xd000
  /* 174E8C 8018D60C 10400007 */      beqz $v0, .L8018D62C
  /* 174E90 8018D610 24190001 */     addiu $t9, $zero, 1
  /* 174E94 8018D614 3C02800A */       lui $v0, %hi(gSceneData)
  /* 174E98 8018D618 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 174E9C 8018D61C 90580000 */       lbu $t8, ($v0) # gSceneData + 0
  /* 174EA0 8018D620 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  /* 174EA4 8018D624 0C00171D */       jal func_80005C74
  /* 174EA8 8018D628 A0580001 */        sb $t8, 1($v0) # gSceneData + 1
  .L8018D62C:
  /* 174EAC 8018D62C 3C088019 */       lui $t0, %hi(D_ovl51_8018DA48)
  /* 174EB0 8018D630 8D08DA48 */        lw $t0, %lo(D_ovl51_8018DA48)($t0)
  /* 174EB4 8018D634 3C02800A */       lui $v0, %hi(gSceneData)
  /* 174EB8 8018D638 24010140 */     addiu $at, $zero, 0x140
  /* 174EBC 8018D63C 15010006 */       bne $t0, $at, .L8018D658
  /* 174EC0 8018D640 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 174EC4 8018D644 90490000 */       lbu $t1, ($v0) # gSceneData + 0
  /* 174EC8 8018D648 240A0027 */     addiu $t2, $zero, 0x27
  /* 174ECC 8018D64C A04A0000 */        sb $t2, ($v0) # gSceneData + 0
  /* 174ED0 8018D650 0C00171D */       jal func_80005C74
  /* 174ED4 8018D654 A0490001 */        sb $t1, 1($v0) # gSceneData + 1
  .L8018D658:
  /* 174ED8 8018D658 8FBF0014 */        lw $ra, 0x14($sp)
  /* 174EDC 8018D65C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 174EE0 8018D660 03E00008 */        jr $ra
  /* 174EE4 8018D664 00000000 */       nop 

  /* 174EE8 8018D668 03E00008 */        jr $ra
  /* 174EEC 8018D66C 00000000 */       nop 

glabel func_ovl51_8018D670
  /* 174EF0 8018D670 3C048019 */       lui $a0, %hi(D_ovl51_8018DC68)
  /* 174EF4 8018D674 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 174EF8 8018D678 2484DC68 */     addiu $a0, $a0, %lo(D_ovl51_8018DC68)
  /* 174EFC 8018D67C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 174F00 8018D680 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 174F04 8018D684 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 174F08 8018D688 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 174F0C 8018D68C AFBF001C */        sw $ra, 0x1c($sp)
  /* 174F10 8018D690 24030004 */     addiu $v1, $zero, 4
  /* 174F14 8018D694 24050002 */     addiu $a1, $zero, 2
  /* 174F18 8018D698 25C801EC */     addiu $t0, $t6, 0x1ec
  /* 174F1C 8018D69C 0080C825 */        or $t9, $a0, $zero
  .L8018D6A0:
  /* 174F20 8018D6A0 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 174F24 8018D6A4 25CE000C */     addiu $t6, $t6, 0xc
  /* 174F28 8018D6A8 2739000C */     addiu $t9, $t9, 0xc
  /* 174F2C 8018D6AC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 174F30 8018D6B0 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 174F34 8018D6B4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 174F38 8018D6B8 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 174F3C 8018D6BC 15C8FFF8 */       bne $t6, $t0, .L8018D6A0
  /* 174F40 8018D6C0 AF38FFFC */        sw $t8, -4($t9)
  /* 174F44 8018D6C4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 174F48 8018D6C8 240B0001 */     addiu $t3, $zero, 1
  /* 174F4C 8018D6CC 240E0003 */     addiu $t6, $zero, 3
  /* 174F50 8018D6D0 AF380000 */        sw $t8, ($t9)
  /* 174F54 8018D6D4 AC440000 */        sw $a0, ($v0) # gpBattleState + 0
  /* 174F58 8018D6D8 A0830000 */        sb $v1, ($a0) # D_ovl51_8018DC68 + 0
  /* 174F5C 8018D6DC A0850001 */        sb $a1, 1($a0) # D_ovl51_8018DC68 + 1
  /* 174F60 8018D6E0 A08B0004 */        sb $t3, 4($a0) # D_ovl51_8018DC68 + 4
  /* 174F64 8018D6E4 A0850023 */        sb $a1, 0x23($a0) # D_ovl51_8018DC68 + 35
  /* 174F68 8018D6E8 A0830022 */        sb $v1, 0x22($a0) # D_ovl51_8018DC68 + 34
  /* 174F6C 8018D6EC A08E0097 */        sb $t6, 0x97($a0) # D_ovl51_8018DC68 + 151
  /* 174F70 8018D6F0 0C063430 */       jal func_ovl51_8018D0C0
  /* 174F74 8018D6F4 A0830096 */        sb $v1, 0x96($a0) # D_ovl51_8018DC68 + 150
  /* 174F78 8018D6F8 3C058019 */       lui $a1, %hi(func_ovl51_8018D5E4)
  /* 174F7C 8018D6FC 24A5D5E4 */     addiu $a1, $a1, %lo(func_ovl51_8018D5E4)
  /* 174F80 8018D700 240403F7 */     addiu $a0, $zero, 0x3f7
  /* 174F84 8018D704 2406000D */     addiu $a2, $zero, 0xd
  /* 174F88 8018D708 0C00265A */       jal omMakeGObjCommon
  /* 174F8C 8018D70C 3C078000 */       lui $a3, 0x8000
  /* 174F90 8018D710 241800FF */     addiu $t8, $zero, 0xff
  /* 174F94 8018D714 AFB80010 */        sw $t8, 0x10($sp)
  /* 174F98 8018D718 24040009 */     addiu $a0, $zero, 9
  /* 174F9C 8018D71C 3C058000 */       lui $a1, 0x8000
  /* 174FA0 8018D720 24060064 */     addiu $a2, $zero, 0x64
  /* 174FA4 8018D724 0C002E7F */       jal func_8000B9FC
  /* 174FA8 8018D728 24070003 */     addiu $a3, $zero, 3
  /* 174FAC 8018D72C 0C045624 */       jal func_ovl2_80115890
  /* 174FB0 8018D730 00000000 */       nop 
  /* 174FB4 8018D734 0C03B04C */       jal func_ovl2_800EC130
  /* 174FB8 8018D738 00000000 */       nop 
  /* 174FBC 8018D73C 0C03F0A1 */       jal func_ovl2_800FC284
  /* 174FC0 8018D740 00000000 */       nop 
  /* 174FC4 8018D744 2404000A */     addiu $a0, $zero, 0xa
  /* 174FC8 8018D748 2405000A */     addiu $a1, $zero, 0xa
  /* 174FCC 8018D74C 24060136 */     addiu $a2, $zero, 0x136
  /* 174FD0 8018D750 0C043966 */       jal func_ovl2_8010E598
  /* 174FD4 8018D754 240700E6 */     addiu $a3, $zero, 0xe6
  /* 174FD8 8018D758 0C0436D5 */       jal func_ovl2_8010DB54
  /* 174FDC 8018D75C 00000000 */       nop 
  /* 174FE0 8018D760 24040002 */     addiu $a0, $zero, 2
  /* 174FE4 8018D764 0C035C65 */       jal func_ovl2_800D7194
  /* 174FE8 8018D768 24050002 */     addiu $a1, $zero, 2
  /* 174FEC 8018D76C 0C05952C */       jal wpManager_AllocUserData
  /* 174FF0 8018D770 00000000 */       nop 
  /* 174FF4 8018D774 0C05B7A8 */       jal itManager_AllocUserData
  /* 174FF8 8018D778 00000000 */       nop 
  /* 174FFC 8018D77C 0C03F4C0 */       jal efManager_AllocUserData
  /* 175000 8018D780 00000000 */       nop 
  /* 175004 8018D784 0C04577A */       jal func_ovl2_80115DE8
  /* 175008 8018D788 240400FF */     addiu $a0, $zero, 0xff
  /* 17500C 8018D78C 0C0634B7 */       jal func_ovl51_8018D2DC
  /* 175010 8018D790 00000000 */       nop 
  /* 175014 8018D794 0C00024B */       jal func_8000092C
  /* 175018 8018D798 00000000 */       nop 
  /* 17501C 8018D79C 2C410B40 */     sltiu $at, $v0, 0xb40
  /* 175020 8018D7A0 50200007 */      beql $at, $zero, .L8018D7C0
  /* 175024 8018D7A4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D7A8:
  /* 175028 8018D7A8 0C00024B */       jal func_8000092C
  /* 17502C 8018D7AC 00000000 */       nop 
  /* 175030 8018D7B0 2C410B40 */     sltiu $at, $v0, 0xb40
  /* 175034 8018D7B4 1420FFFC */      bnez $at, .L8018D7A8
  /* 175038 8018D7B8 00000000 */       nop 
  /* 17503C 8018D7BC 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D7C0:
  /* 175040 8018D7C0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 175044 8018D7C4 03E00008 */        jr $ra
  /* 175048 8018D7C8 00000000 */       nop 

glabel func_ovl51_8018D7CC
  /* 17504C 8018D7CC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 175050 8018D7D0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 175054 8018D7D4 8C830000 */        lw $v1, ($a0)
  /* 175058 8018D7D8 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 17505C 8018D7DC 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 175060 8018D7E0 246E0008 */     addiu $t6, $v1, 8
  /* 175064 8018D7E4 AC8E0000 */        sw $t6, ($a0)
  /* 175068 8018D7E8 3C180002 */       lui $t8, 2
  /* 17506C 8018D7EC 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 175070 8018D7F0 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 175074 8018D7F4 AC780004 */        sw $t8, 4($v1)
  /* 175078 8018D7F8 AC6F0000 */        sw $t7, ($v1)
  /* 17507C 8018D7FC 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 175080 8018D800 0C03F2DC */       jal func_ovl2_800FCB70
  /* 175084 8018D804 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 175088 8018D808 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17508C 8018D80C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 175090 8018D810 03E00008 */        jr $ra
  /* 175094 8018D814 00000000 */       nop 

glabel intro_dk_vs_samus_entry
  /* 175098 8018D818 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 17509C 8018D81C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1750A0 8018D820 3C048019 */       lui $a0, %hi(D_ovl51_8018D93C)
  /* 1750A4 8018D824 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 1750A8 8018D828 2484D93C */     addiu $a0, $a0, %lo(D_ovl51_8018D93C)
  /* 1750AC 8018D82C AFBF0014 */        sw $ra, 0x14($sp)
  /* 1750B0 8018D830 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 1750B4 8018D834 0C001C09 */       jal func_80007024
  /* 1750B8 8018D838 AC8F000C */        sw $t7, 0xc($a0) # D_ovl51_8018D93C + 12
  /* 1750BC 8018D83C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 1750C0 8018D840 3C198019 */       lui $t9, %hi(D_NF_8018DE60)
  /* 1750C4 8018D844 3C048019 */       lui $a0, %hi(D_ovl51_8018D958)
  /* 1750C8 8018D848 2739DE60 */     addiu $t9, $t9, %lo(D_NF_8018DE60)
  /* 1750CC 8018D84C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 1750D0 8018D850 2484D958 */     addiu $a0, $a0, %lo(D_ovl51_8018D958)
  /* 1750D4 8018D854 03194023 */      subu $t0, $t8, $t9
  /* 1750D8 8018D858 0C001A0F */       jal func_8000683C
  /* 1750DC 8018D85C AC880010 */        sw $t0, 0x10($a0) # D_ovl51_8018D958 + 16
  /* 1750E0 8018D860 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1750E4 8018D864 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1750E8 8018D868 03E00008 */        jr $ra
  /* 1750EC 8018D86C 00000000 */       nop 
#
#glabel D_ovl51_8018D870   # Routine parsed as data
#  /* 1750F0 8018D870 447A0000 */     mfhc1 $k0, $f0
#  /* 1750F4 8018D874 44610000 */     mfhc1 $at, $f0
#  /* 1750F8 8018D878 45610000 */      bz.v $w1, D_ovl51_8018D87C
#glabel D_ovl51_8018D87C   # Routine parsed as data
#  /* 1750FC 8018D87C 44160000 */      mfc1 $s6, $f0
#  /* 175100 8018D880 44480000 */      cfc1 $t0, $0
#  /* 175104 8018D884 00000000 */       nop 
#  /* 175108 8018D888 00000000 */       nop 
#glabel D_ovl51_8018D88C   # Routine parsed as data
#  /* 17510C 8018D88C C4E10000 */      lwc1 $f1, ($a3)
#  /* 175110 8018D890 44480000 */      cfc1 $t0, $0
#  /* 175114 8018D894 44BB8000 */     dmtc1 $k1, $f16
#  /* 175118 8018D898 447A0000 */     mfhc1 $k0, $f0
#  /* 17511C 8018D89C 442F0000 */     dmfc1 $t7, $f0
#  /* 175120 8018D8A0 00000000 */       nop 
#  /* 175124 8018D8A4 00000000 */       nop 
#glabel D_ovl51_8018D8A8   # Routine parsed as data
#  /* 175128 8018D8A8 200000B0 */      addi $zero, $zero, 0xb0
#  /* 17512C 8018D8AC 10014000 */       beq $zero, $at, 0x8019d8b0 # branch target not found
#  /* 175130 8018D8B0 10010000 */       beq $zero, $at, D_ovl51_8018D8B4
#glabel D_ovl51_8018D8B4   # Routine parsed as data
#  /* 175134 8018D8B4 20320000 */      addi $s2, $at, 0
#  /* 175138 8018D8B8 201E0F50 */      addi $fp, $zero, 0xf50
#  /* 17513C 8018D8BC 200A5000 */      addi $t2, $zero, 0x5000
#  /* 175140 8018D8C0 10018000 */       beq $zero, $at, 0x8016d8c4 # branch target not found
#  /* 175144 8018D8C4 10010000 */       beq $zero, $at, D_ovl51_8018D8C8
#glabel D_ovl51_8018D8C8   # Routine parsed as data
#  /* 175148 8018D8C8 203C5000 */      addi $gp, $at, 0x5000
#  /* 17514C 8018D8CC 2003E200 */      addi $v1, $zero, -0x1e00
#  /* 175150 8018D8D0 200A0000 */      addi $t2, $zero, 0
#  /* 175154 8018D8D4 2001B000 */      addi $at, $zero, -0x5000
#  /* 175158 8018D8D8 10014000 */       beq $zero, $at, 0x8019d8dc # branch target not found
#  /* 17515C 8018D8DC 10010000 */       beq $zero, $at, D_ovl51_8018D8E0
#glabel D_ovl51_8018D8E0   # Routine parsed as data
#  /* 175160 8018D8E0 10014000 */       beq $zero, $at, 0x8019d8e4 # branch target not found
#  /* 175164 8018D8E4 10010000 */       beq $zero, $at, D_ovl51_8018D8E8
#glabel D_ovl51_8018D8E8   # Routine parsed as data
#  /* 175168 8018D8E8 20010000 */      addi $at, $zero, 0
#  /* 17516C 8018D8EC 00000000 */       nop 
#  /* 175170 8018D8F0 2014B000 */      addi $s4, $zero, -0x5000
#  /* 175174 8018D8F4 204B0000 */      addi $t3, $v0, 0
#  /* 175178 8018D8F8 10012000 */       beq $zero, $at, 0x801958fc # branch target not found
#  /* 17517C 8018D8FC 203CB000 */      addi $gp, $at, -0x5000
#  /* 175180 8018D900 20010000 */      addi $at, $zero, 0
#  /* 175184 8018D904 2005B000 */      addi $a1, $zero, -0x5000
#  /* 175188 8018D908 20010000 */      addi $at, $zero, 0
#  /* 17518C 8018D90C 20170000 */      addi $s7, $zero, 0
#  /* 175190 8018D910 2005B000 */      addi $a1, $zero, -0x5000
#  /* 175194 8018D914 10010000 */       beq $zero, $at, D_ovl51_8018D918
#glabel D_ovl51_8018D918   # Routine parsed as data
#  /* 175198 8018D918 20280000 */      addi $t0, $at, 0
#  /* 17519C 8018D91C 20031E00 */      addi $v1, $zero, 0x1e00
#  /* 1751A0 8018D920 20010000 */      addi $at, $zero, 0
#  /* 1751A4 8018D924 10014000 */       beq $zero, $at, 0x8019d928 # branch target not found
#  /* 1751A8 8018D928 10010000 */       beq $zero, $at, D_ovl51_8018D92C
#glabel D_ovl51_8018D92C   # Routine parsed as data
#  /* 1751AC 8018D92C 10014000 */       beq $zero, $at, 0x8019d930 # branch target not found
#  /* 1751B0 8018D930 00000000 */       nop 
#glabel D_ovl51_8018D934   # Routine parsed as data
#  /* 1751B4 8018D934 00000025 */        or $zero, $zero, $zero
#  /* 1751B8 8018D938 00000040 */     ssnop 
#glabel D_ovl51_8018D93C   # Routine parsed as data
#  /* 1751BC 8018D93C 80392A00 */        lb $t9, 0x2a00($at)
#  /* 1751C0 8018D940 803B6900 */        lb $k1, 0x6900($at)
#  /* 1751C4 8018D944 803DA800 */        lb $sp, -0x5800($at)
#  /* 1751C8 8018D948 00000000 */       nop 
#  /* 1751CC 8018D94C 00000140 */     pause 
#  /* 1751D0 8018D950 000000F0 */       tge $zero, $zero, 3
