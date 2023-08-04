.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018E3D0

glabel func_ovl4_8018D0C0
  /* 109FB0 8018D0C0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 109FB4 8018D0C4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 109FB8 8018D0C8 0C045217 */       jal func_ovl2_8011485C
  /* 109FBC 8018D0CC 00000000 */       nop 
  /* 109FC0 8018D0D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 109FC4 8018D0D4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 109FC8 8018D0D8 03E00008 */        jr $ra
  /* 109FCC 8018D0DC 00000000 */       nop 

glabel func_ovl4_8018D0E0
  /* 109FD0 8018D0E0 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 109FD4 8018D0E4 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 109FD8 8018D0E8 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 109FDC 8018D0EC 3C014780 */       lui $at, (0x47800000 >> 16) # 65536.0
  /* 109FE0 8018D0F0 AFBF0044 */        sw $ra, 0x44($sp)
  /* 109FE4 8018D0F4 AFB20030 */        sw $s2, 0x30($sp)
  /* 109FE8 8018D0F8 4481A000 */      mtc1 $at, $f20 # 65536.0 to cop1
  /* 109FEC 8018D0FC 4480B000 */      mtc1 $zero, $f22
  /* 109FF0 8018D100 00809025 */        or $s2, $a0, $zero
  /* 109FF4 8018D104 AFB60040 */        sw $s6, 0x40($sp)
  /* 109FF8 8018D108 AFB5003C */        sw $s5, 0x3c($sp)
  /* 109FFC 8018D10C AFB40038 */        sw $s4, 0x38($sp)
  /* 10A000 8018D110 AFB30034 */        sw $s3, 0x34($sp)
  /* 10A004 8018D114 AFB1002C */        sw $s1, 0x2c($sp)
  /* 10A008 8018D118 AFB00028 */        sw $s0, 0x28($sp)
  /* 10A00C 8018D11C 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 10A010 8018D120 27A50058 */     addiu $a1, $sp, 0x58
  /* 10A014 8018D124 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 10A018 8018D128 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 10A01C 8018D12C 00008025 */        or $s0, $zero, $zero
  /* 10A020 8018D130 27B60064 */     addiu $s6, $sp, 0x64
  /* 10A024 8018D134 24140002 */     addiu $s4, $zero, 2
  /* 10A028 8018D138 24130004 */     addiu $s3, $zero, 4
  /* 10A02C 8018D13C 24110074 */     addiu $s1, $zero, 0x74
  .L8018D140:
  /* 10A030 8018D140 52120024 */      beql $s0, $s2, .L8018D1D4
  /* 10A034 8018D144 26100001 */     addiu $s0, $s0, 1
  /* 10A038 8018D148 02110019 */     multu $s0, $s1
  /* 10A03C 8018D14C 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 10A040 8018D150 00007012 */      mflo $t6
  /* 10A044 8018D154 004E1821 */      addu $v1, $v0, $t6
  /* 10A048 8018D158 906F0022 */       lbu $t7, 0x22($v1)
  /* 10A04C 8018D15C 528F001D */      beql $s4, $t7, .L8018D1D4
  /* 10A050 8018D160 26100001 */     addiu $s0, $s0, 1
  /* 10A054 8018D164 02510019 */     multu $s2, $s1
  /* 10A058 8018D168 90780025 */       lbu $t8, 0x25($v1)
  /* 10A05C 8018D16C 02002025 */        or $a0, $s0, $zero
  /* 10A060 8018D170 0000C812 */      mflo $t9
  /* 10A064 8018D174 00594021 */      addu $t0, $v0, $t9
  /* 10A068 8018D178 91090025 */       lbu $t1, 0x25($t0)
  /* 10A06C 8018D17C 53090015 */      beql $t8, $t1, .L8018D1D4
  /* 10A070 8018D180 26100001 */     addiu $s0, $s0, 1
  /* 10A074 8018D184 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 10A078 8018D188 02C02825 */        or $a1, $s6, $zero
  /* 10A07C 8018D18C C7AC0064 */      lwc1 $f12, 0x64($sp)
  /* 10A080 8018D190 C7AE0058 */      lwc1 $f14, 0x58($sp)
  /* 10A084 8018D194 460E603C */    c.lt.s $f12, $f14
  /* 10A088 8018D198 00000000 */       nop 
  /* 10A08C 8018D19C 45020005 */     bc1fl .L8018D1B4
  /* 10A090 8018D1A0 460E6001 */     sub.s $f0, $f12, $f14
  /* 10A094 8018D1A4 460E6001 */     sub.s $f0, $f12, $f14
  /* 10A098 8018D1A8 10000003 */         b .L8018D1B8
  /* 10A09C 8018D1AC 46000087 */     neg.s $f2, $f0
  /* 10A0A0 8018D1B0 460E6001 */     sub.s $f0, $f12, $f14
  .L8018D1B4:
  /* 10A0A4 8018D1B4 46000086 */     mov.s $f2, $f0
  .L8018D1B8:
  /* 10A0A8 8018D1B8 4614103C */    c.lt.s $f2, $f20
  /* 10A0AC 8018D1BC 00000000 */       nop 
  /* 10A0B0 8018D1C0 45020004 */     bc1fl .L8018D1D4
  /* 10A0B4 8018D1C4 26100001 */     addiu $s0, $s0, 1
  /* 10A0B8 8018D1C8 46001506 */     mov.s $f20, $f2
  /* 10A0BC 8018D1CC 46000586 */     mov.s $f22, $f0
  /* 10A0C0 8018D1D0 26100001 */     addiu $s0, $s0, 1
  .L8018D1D4:
  /* 10A0C4 8018D1D4 1613FFDA */       bne $s0, $s3, .L8018D140
  /* 10A0C8 8018D1D8 00000000 */       nop 
  /* 10A0CC 8018D1DC 44802000 */      mtc1 $zero, $f4
  /* 10A0D0 8018D1E0 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 10A0D4 8018D1E4 8FB00028 */        lw $s0, 0x28($sp)
  /* 10A0D8 8018D1E8 4616203E */    c.le.s $f4, $f22
  /* 10A0DC 8018D1EC D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 10A0E0 8018D1F0 8FB1002C */        lw $s1, 0x2c($sp)
  /* 10A0E4 8018D1F4 8FB20030 */        lw $s2, 0x30($sp)
  /* 10A0E8 8018D1F8 45000003 */      bc1f .L8018D208
  /* 10A0EC 8018D1FC 8FB30034 */        lw $s3, 0x34($sp)
  /* 10A0F0 8018D200 10000002 */         b .L8018D20C
  /* 10A0F4 8018D204 24030001 */     addiu $v1, $zero, 1
  .L8018D208:
  /* 10A0F8 8018D208 2403FFFF */     addiu $v1, $zero, -1
  .L8018D20C:
  /* 10A0FC 8018D20C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 10A100 8018D210 8FB40038 */        lw $s4, 0x38($sp)
  /* 10A104 8018D214 8FB5003C */        lw $s5, 0x3c($sp)
  /* 10A108 8018D218 8FB60040 */        lw $s6, 0x40($sp)
  /* 10A10C 8018D21C 27BD0080 */     addiu $sp, $sp, 0x80
  /* 10A110 8018D220 03E00008 */        jr $ra
  /* 10A114 8018D224 00601025 */        or $v0, $v1, $zero

glabel func_ovl4_8018D228
  /* 10A118 8018D228 27BDFF48 */     addiu $sp, $sp, -0xb8
  /* 10A11C 8018D22C 3C02800A */       lui $v0, %hi(gSceneData)
  /* 10A120 8018D230 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 10A124 8018D234 AFBF003C */        sw $ra, 0x3c($sp)
  /* 10A128 8018D238 AFB40038 */        sw $s4, 0x38($sp)
  /* 10A12C 8018D23C AFB30034 */        sw $s3, 0x34($sp)
  /* 10A130 8018D240 AFB20030 */        sw $s2, 0x30($sp)
  /* 10A134 8018D244 AFB1002C */        sw $s1, 0x2c($sp)
  /* 10A138 8018D248 AFB00028 */        sw $s0, 0x28($sp)
  /* 10A13C 8018D24C A0400012 */        sb $zero, 0x12($v0) # gSceneData + 18
  /* 10A140 8018D250 0C0638CC */       jal func_ovl4_8018E330
  /* 10A144 8018D254 A0400010 */        sb $zero, 0x10($v0) # gSceneData + 16
  /* 10A148 8018D258 3C13800A */       lui $s3, %hi(gSaveData)
  /* 10A14C 8018D25C 267344E0 */     addiu $s3, $s3, %lo(gSaveData)
  /* 10A150 8018D260 926E05E2 */       lbu $t6, 0x5e2($s3) # gSaveData + 1506
  /* 10A154 8018D264 31CF0004 */      andi $t7, $t6, 4
  /* 10A158 8018D268 55E00025 */      bnel $t7, $zero, .L8018D300
  /* 10A15C 8018D26C 240C00FF */     addiu $t4, $zero, 0xff
  /* 10A160 8018D270 927805E3 */       lbu $t8, 0x5e3($s3) # gSaveData + 1507
  /* 10A164 8018D274 3C100000 */       lui $s0, %hi(D_NF_000000C7)
  /* 10A168 8018D278 261000C7 */     addiu $s0, $s0, %lo(D_NF_000000C7)
  /* 10A16C 8018D27C 2B010045 */      slti $at, $t8, 0x45
  /* 10A170 8018D280 5420001F */      bnel $at, $zero, .L8018D300
  /* 10A174 8018D284 240C00FF */     addiu $t4, $zero, 0xff
  /* 10A178 8018D288 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 10A17C 8018D28C 02002025 */        or $a0, $s0, $zero
  /* 10A180 8018D290 00402025 */        or $a0, $v0, $zero
  /* 10A184 8018D294 0C001260 */       jal hal_alloc
  /* 10A188 8018D298 24050010 */     addiu $a1, $zero, 0x10
  /* 10A18C 8018D29C 02002025 */        or $a0, $s0, $zero
  /* 10A190 8018D2A0 0C033722 */       jal rldm_get_file_with_external_heap
  /* 10A194 8018D2A4 00402825 */        or $a1, $v0, $zero
  /* 10A198 8018D2A8 3C190000 */       lui $t9, %hi(D_NF_00000000)
  /* 10A19C 8018D2AC 3C110000 */       lui $s1, %hi(D_NF_00000030)
  /* 10A1A0 8018D2B0 27390000 */     addiu $t9, $t9, %lo(D_NF_00000000)
  /* 10A1A4 8018D2B4 26310030 */     addiu $s1, $s1, %lo(D_NF_00000030)
  /* 10A1A8 8018D2B8 00592021 */      addu $a0, $v0, $t9
  /* 10A1AC 8018D2BC 00514021 */      addu $t0, $v0, $s1
  /* 10A1B0 8018D2C0 00409025 */        or $s2, $v0, $zero
  /* 10A1B4 8018D2C4 00808025 */        or $s0, $a0, $zero
  /* 10A1B8 8018D2C8 0C00C874 */       jal osWritebackDCache
  /* 10A1BC 8018D2CC 8D050000 */        lw $a1, ($t0)
  /* 10A1C0 8018D2D0 02514821 */      addu $t1, $s2, $s1
  /* 10A1C4 8018D2D4 8D250000 */        lw $a1, ($t1)
  /* 10A1C8 8018D2D8 0C00D12C */       jal osInvalICache
  /* 10A1CC 8018D2DC 02002025 */        or $a0, $s0, $zero
  /* 10A1D0 8018D2E0 0200F809 */      jalr $s0
  /* 10A1D4 8018D2E4 00000000 */       nop 
  /* 10A1D8 8018D2E8 54400005 */      bnel $v0, $zero, .L8018D300
  /* 10A1DC 8018D2EC 240C00FF */     addiu $t4, $zero, 0xff
  /* 10A1E0 8018D2F0 926A05E2 */       lbu $t2, 0x5e2($s3) # gSaveData + 1506
  /* 10A1E4 8018D2F4 354B0004 */       ori $t3, $t2, 4
  /* 10A1E8 8018D2F8 A26B05E2 */        sb $t3, 0x5e2($s3) # gSaveData + 1506
  /* 10A1EC 8018D2FC 240C00FF */     addiu $t4, $zero, 0xff
  .L8018D300:
  /* 10A1F0 8018D300 AFAC0010 */        sw $t4, 0x10($sp)
  /* 10A1F4 8018D304 24040009 */     addiu $a0, $zero, 9
  /* 10A1F8 8018D308 3C058000 */       lui $a1, 0x8000
  /* 10A1FC 8018D30C 24060064 */     addiu $a2, $zero, 0x64
  /* 10A200 8018D310 0C002E7F */       jal func_8000B9FC
  /* 10A204 8018D314 24070001 */     addiu $a3, $zero, 1
  /* 10A208 8018D318 0C045624 */       jal func_ovl2_80115890
  /* 10A20C 8018D31C 00000000 */       nop 
  /* 10A210 8018D320 0C03B04C */       jal func_ovl2_800EC130
  /* 10A214 8018D324 00000000 */       nop 
  /* 10A218 8018D328 0C03F0A1 */       jal func_ovl2_800FC284
  /* 10A21C 8018D32C 00000000 */       nop 
  /* 10A220 8018D330 2404000A */     addiu $a0, $zero, 0xa
  /* 10A224 8018D334 2405000A */     addiu $a1, $zero, 0xa
  /* 10A228 8018D338 24060136 */     addiu $a2, $zero, 0x136
  /* 10A22C 8018D33C 0C043966 */       jal func_ovl2_8010E598
  /* 10A230 8018D340 240700E6 */     addiu $a3, $zero, 0xe6
  /* 10A234 8018D344 0C0436D5 */       jal func_ovl2_8010DB54
  /* 10A238 8018D348 00000000 */       nop 
  /* 10A23C 8018D34C 0C0412F7 */       jal func_ovl2_80104BDC
  /* 10A240 8018D350 00000000 */       nop 
  /* 10A244 8018D354 0C0436C0 */       jal func_ovl2_8010DB00
  /* 10A248 8018D358 00000000 */       nop 
  /* 10A24C 8018D35C 0C05B7A8 */       jal itManager_AllocUserData
  /* 10A250 8018D360 00000000 */       nop 
  /* 10A254 8018D364 0C041580 */       jal func_ovl2_80105600
  /* 10A258 8018D368 00000000 */       nop 
  /* 10A25C 8018D36C 24040002 */     addiu $a0, $zero, 2
  /* 10A260 8018D370 0C035C65 */       jal func_ovl2_800D7194
  /* 10A264 8018D374 24050004 */     addiu $a1, $zero, 4
  /* 10A268 8018D378 0C05952C */       jal wpManager_AllocUserData
  /* 10A26C 8018D37C 00000000 */       nop 
  /* 10A270 8018D380 0C03F4C0 */       jal efManager_AllocUserData
  /* 10A274 8018D384 00000000 */       nop 
  /* 10A278 8018D388 0C04577A */       jal func_ovl2_80115DE8
  /* 10A27C 8018D38C 240400FF */     addiu $a0, $zero, 0xff
  /* 10A280 8018D390 0C0455B9 */       jal func_ovl2_801156E4
  /* 10A284 8018D394 00000000 */       nop 
  /* 10A288 8018D398 0C0594F8 */       jal func_ovl3_801653E0
  /* 10A28C 8018D39C 00000000 */       nop 
  /* 10A290 8018D3A0 3C12800A */       lui $s2, %hi(gpBattleState)
  /* 10A294 8018D3A4 265250E8 */     addiu $s2, $s2, %lo(gpBattleState)
  /* 10A298 8018D3A8 00008025 */        or $s0, $zero, $zero
  /* 10A29C 8018D3AC 00008825 */        or $s1, $zero, $zero
  /* 10A2A0 8018D3B0 27B4005C */     addiu $s4, $sp, 0x5c
  .L8018D3B4:
  /* 10A2A4 8018D3B4 3C0D8011 */       lui $t5, %hi(D_ovl2_80116DD0)
  /* 10A2A8 8018D3B8 25AD6DD0 */     addiu $t5, $t5, %lo(D_ovl2_80116DD0)
  /* 10A2AC 8018D3BC 25B9003C */     addiu $t9, $t5, 0x3c
  /* 10A2B0 8018D3C0 0280C025 */        or $t8, $s4, $zero
  .L8018D3C4:
  /* 10A2B4 8018D3C4 8DAF0000 */        lw $t7, ($t5) # D_ovl2_80116DD0 + 0
  /* 10A2B8 8018D3C8 25AD000C */     addiu $t5, $t5, 0xc
  /* 10A2BC 8018D3CC 2718000C */     addiu $t8, $t8, 0xc
  /* 10A2C0 8018D3D0 AF0FFFF4 */        sw $t7, -0xc($t8)
  /* 10A2C4 8018D3D4 8DAEFFF8 */        lw $t6, -8($t5) # D_ovl2_80116DD0 + -8
  /* 10A2C8 8018D3D8 AF0EFFF8 */        sw $t6, -8($t8)
  /* 10A2CC 8018D3DC 8DAFFFFC */        lw $t7, -4($t5) # D_ovl2_80116DD0 + -4
  /* 10A2D0 8018D3E0 15B9FFF8 */       bne $t5, $t9, .L8018D3C4
  /* 10A2D4 8018D3E4 AF0FFFFC */        sw $t7, -4($t8)
  /* 10A2D8 8018D3E8 8DAF0000 */        lw $t7, ($t5) # D_ovl2_80116DD0 + 0
  /* 10A2DC 8018D3EC 00105080 */       sll $t2, $s0, 2
  /* 10A2E0 8018D3F0 01505021 */      addu $t2, $t2, $s0
  /* 10A2E4 8018D3F4 AF0F0000 */        sw $t7, ($t8)
  /* 10A2E8 8018D3F8 8E480000 */        lw $t0, ($s2) # gpBattleState + 0
  /* 10A2EC 8018D3FC 3C0B8004 */       lui $t3, %hi(gContInput)
  /* 10A2F0 8018D400 24010002 */     addiu $at, $zero, 2
  /* 10A2F4 8018D404 01111821 */      addu $v1, $t0, $s1
  /* 10A2F8 8018D408 90690022 */       lbu $t1, 0x22($v1)
  /* 10A2FC 8018D40C 256B5228 */     addiu $t3, $t3, %lo(gContInput)
  /* 10A300 8018D410 000A5040 */       sll $t2, $t2, 1
  /* 10A304 8018D414 11210033 */       beq $t1, $at, .L8018D4E4
  /* 10A308 8018D418 014B9821 */      addu $s3, $t2, $t3
  /* 10A30C 8018D41C 0C035E1B */       jal func_ovl2_800D786C
  /* 10A310 8018D420 90640023 */       lbu $a0, 0x23($v1)
  /* 10A314 8018D424 8E4C0000 */        lw $t4, ($s2) # gpBattleState + 0
  /* 10A318 8018D428 02002025 */        or $a0, $s0, $zero
  /* 10A31C 8018D42C 27A50060 */     addiu $a1, $sp, 0x60
  /* 10A320 8018D430 0191C821 */      addu $t9, $t4, $s1
  /* 10A324 8018D434 932D0023 */       lbu $t5, 0x23($t9)
  /* 10A328 8018D438 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 10A32C 8018D43C AFAD005C */        sw $t5, 0x5c($sp)
  /* 10A330 8018D440 0C063438 */       jal func_ovl4_8018D0E0
  /* 10A334 8018D444 02002025 */        or $a0, $s0, $zero
  /* 10A338 8018D448 8E450000 */        lw $a1, ($s2) # gpBattleState + 0
  /* 10A33C 8018D44C AFA2006C */        sw $v0, 0x6c($sp)
  /* 10A340 8018D450 240A0002 */     addiu $t2, $zero, 2
  /* 10A344 8018D454 00B11821 */      addu $v1, $a1, $s1
  /* 10A348 8018D458 90780025 */       lbu $t8, 0x25($v1)
  /* 10A34C 8018D45C A3B00071 */        sb $s0, 0x71($sp)
  /* 10A350 8018D460 24090001 */     addiu $t1, $zero, 1
  /* 10A354 8018D464 A3B80070 */        sb $t8, 0x70($sp)
  /* 10A358 8018D468 90AF0005 */       lbu $t7, 5($a1)
  /* 10A35C 8018D46C 90AE0004 */       lbu $t6, 4($a1)
  /* 10A360 8018D470 01CF4021 */      addu $t0, $t6, $t7
  /* 10A364 8018D474 29010003 */      slti $at, $t0, 3
  /* 10A368 8018D478 50200004 */      beql $at, $zero, .L8018D48C
  /* 10A36C 8018D47C A3AA0072 */        sb $t2, 0x72($sp)
  /* 10A370 8018D480 10000002 */         b .L8018D48C
  /* 10A374 8018D484 A3A90072 */        sb $t1, 0x72($sp)
  /* 10A378 8018D488 A3AA0072 */        sb $t2, 0x72($sp)
  .L8018D48C:
  /* 10A37C 8018D48C 906B0026 */       lbu $t3, 0x26($v1)
  /* 10A380 8018D490 A3AB0073 */        sb $t3, 0x73($sp)
  /* 10A384 8018D494 906C0027 */       lbu $t4, 0x27($v1)
  /* 10A388 8018D498 A3AC0074 */        sb $t4, 0x74($sp)
  /* 10A38C 8018D49C 90790021 */       lbu $t9, 0x21($v1)
  /* 10A390 8018D4A0 A3B90075 */        sb $t9, 0x75($sp)
  /* 10A394 8018D4A4 906D0020 */       lbu $t5, 0x20($v1)
  /* 10A398 8018D4A8 A3AD0076 */        sb $t5, 0x76($sp)
  /* 10A39C 8018D4AC 90B80007 */       lbu $t8, 7($a1)
  /* 10A3A0 8018D4B0 AFA00080 */        sw $zero, 0x80($sp)
  /* 10A3A4 8018D4B4 A3B80077 */        sb $t8, 0x77($sp)
  /* 10A3A8 8018D4B8 906E0022 */       lbu $t6, 0x22($v1)
  /* 10A3AC 8018D4BC AFB30088 */        sw $s3, 0x88($sp)
  /* 10A3B0 8018D4C0 AFAE0084 */        sw $t6, 0x84($sp)
  /* 10A3B4 8018D4C4 0C035E2D */       jal func_ovl2_800D78B4
  /* 10A3B8 8018D4C8 90640023 */       lbu $a0, 0x23($v1)
  /* 10A3BC 8018D4CC AFA20094 */        sw $v0, 0x94($sp)
  /* 10A3C0 8018D4D0 0C035FCF */       jal ftManager_CreateFighter
  /* 10A3C4 8018D4D4 02802025 */        or $a0, $s4, $zero
  /* 10A3C8 8018D4D8 02002025 */        or $a0, $s0, $zero
  /* 10A3CC 8018D4DC 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 10A3D0 8018D4E0 00402825 */        or $a1, $v0, $zero
  .L8018D4E4:
  /* 10A3D4 8018D4E4 26100001 */     addiu $s0, $s0, 1
  /* 10A3D8 8018D4E8 24010004 */     addiu $at, $zero, 4
  /* 10A3DC 8018D4EC 1601FFB1 */       bne $s0, $at, .L8018D3B4
  /* 10A3E0 8018D4F0 26310074 */     addiu $s1, $s1, 0x74
  /* 10A3E4 8018D4F4 0C035E0B */       jal func_ovl2_800D782C
  /* 10A3E8 8018D4F8 00000000 */       nop 
  /* 10A3EC 8018D4FC 0C045256 */       jal func_ovl2_80114958
  /* 10A3F0 8018D500 00000000 */       nop 
  /* 10A3F4 8018D504 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 10A3F8 8018D508 00000000 */       nop 
  /* 10A3FC 8018D50C 0C044639 */       jal func_ovl2_801118E4
  /* 10A400 8018D510 00000000 */       nop 
  /* 10A404 8018D514 0C043869 */       jal func_ovl2_8010E1A4
  /* 10A408 8018D518 00000000 */       nop 
  /* 10A40C 8018D51C 0C044510 */       jal func_ovl2_80111440
  /* 10A410 8018D520 00000000 */       nop 
  /* 10A414 8018D524 0C043771 */       jal func_ovl2_8010DDC4
  /* 10A418 8018D528 00000000 */       nop 
  /* 10A41C 8018D52C 0C0438DD */       jal func_ovl2_8010E374
  /* 10A420 8018D530 00000000 */       nop 
  /* 10A424 8018D534 0C043926 */       jal func_ovl2_8010E498
  /* 10A428 8018D538 00000000 */       nop 
  /* 10A42C 8018D53C 0C0446F9 */       jal func_ovl2_80111BE4
  /* 10A430 8018D540 00000000 */       nop 
  /* 10A434 8018D544 0C043CE8 */       jal func_ovl2_8010F3A0
  /* 10A438 8018D548 00000000 */       nop 
  /* 10A43C 8018D54C 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 10A440 8018D550 00000000 */       nop 
  /* 10A444 8018D554 0C044145 */       jal func_ovl2_80110514
  /* 10A448 8018D558 00000000 */       nop 
  /* 10A44C 8018D55C 0C044AA0 */       jal func_ovl2_80112A80
  /* 10A450 8018D560 00000000 */       nop 
  /* 10A454 8018D564 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 10A458 8018D568 00000000 */       nop 
  /* 10A45C 8018D56C 0C009A70 */       jal func_800269C0
  /* 10A460 8018D570 24040272 */     addiu $a0, $zero, 0x272
  /* 10A464 8018D574 3C048011 */       lui $a0, %hi(func_ovl2_80114D98)
  /* 10A468 8018D578 0C044CE6 */       jal func_ovl2_80113398
  /* 10A46C 8018D57C 24844D98 */     addiu $a0, $a0, %lo(func_ovl2_80114D98)
  /* 10A470 8018D580 0C044BDA */       jal func_ovl2_80112F68
  /* 10A474 8018D584 00000000 */       nop 
  /* 10A478 8018D588 3C0F8019 */       lui $t7, %hi(D_ovl4_8018E3D0)
  /* 10A47C 8018D58C 25EFE3D0 */     addiu $t7, $t7, %lo(D_ovl4_8018E3D0)
  /* 10A480 8018D590 8DE90000 */        lw $t1, ($t7) # D_ovl4_8018E3D0 + 0
  /* 10A484 8018D594 27A70058 */     addiu $a3, $sp, 0x58
  /* 10A488 8018D598 240A000C */     addiu $t2, $zero, 0xc
  /* 10A48C 8018D59C ACE90000 */        sw $t1, ($a3)
  /* 10A490 8018D5A0 240B0001 */     addiu $t3, $zero, 1
  /* 10A494 8018D5A4 AFAB0014 */        sw $t3, 0x14($sp)
  /* 10A498 8018D5A8 AFA00018 */        sw $zero, 0x18($sp)
  /* 10A49C 8018D5AC AFAA0010 */        sw $t2, 0x10($sp)
  /* 10A4A0 8018D5B0 240403FD */     addiu $a0, $zero, 0x3fd
  /* 10A4A4 8018D5B4 2405000D */     addiu $a1, $zero, 0xd
  /* 10A4A8 8018D5B8 0C035018 */       jal func_ovl0_800D4060
  /* 10A4AC 8018D5BC 2406000A */     addiu $a2, $zero, 0xa
  /* 10A4B0 8018D5C0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 10A4B4 8018D5C4 8FB00028 */        lw $s0, 0x28($sp)
  /* 10A4B8 8018D5C8 8FB1002C */        lw $s1, 0x2c($sp)
  /* 10A4BC 8018D5CC 8FB20030 */        lw $s2, 0x30($sp)
  /* 10A4C0 8018D5D0 8FB30034 */        lw $s3, 0x34($sp)
  /* 10A4C4 8018D5D4 8FB40038 */        lw $s4, 0x38($sp)
  /* 10A4C8 8018D5D8 03E00008 */        jr $ra
  /* 10A4CC 8018D5DC 27BD00B8 */     addiu $sp, $sp, 0xb8

glabel func_ovl4_8018D5E0
  /* 10A4D0 8018D5E0 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 10A4D4 8018D5E4 3C0D800A */       lui $t5, %hi(gpBattleState)
  /* 10A4D8 8018D5E8 8DAD50E8 */        lw $t5, %lo(gpBattleState)($t5)
  /* 10A4DC 8018D5EC AFB30014 */        sw $s3, 0x14($sp)
  /* 10A4E0 8018D5F0 AFB20010 */        sw $s2, 0x10($sp)
  /* 10A4E4 8018D5F4 AFB1000C */        sw $s1, 0xc($sp)
  /* 10A4E8 8018D5F8 AFB00008 */        sw $s0, 8($sp)
  /* 10A4EC 8018D5FC 91AE0003 */       lbu $t6, 3($t5)
  /* 10A4F0 8018D600 3C04800A */       lui $a0, %hi(D_800A4EF8)
  /* 10A4F4 8018D604 24844EF8 */     addiu $a0, $a0, %lo(D_800A4EF8)
  /* 10A4F8 8018D608 31CF0001 */      andi $t7, $t6, 1
  /* 10A4FC 8018D60C 15E00003 */      bnez $t7, .L8018D61C
  /* 10A500 8018D610 3C18800A */       lui $t8, %hi(D_800A4D08)
  /* 10A504 8018D614 100001FC */         b .L8018DE08
  /* 10A508 8018D618 00001025 */        or $v0, $zero, $zero
  .L8018D61C:
  /* 10A50C 8018D61C 27184D08 */     addiu $t8, $t8, %lo(D_800A4D08)
  /* 10A510 8018D620 270101EC */     addiu $at, $t8, 0x1ec
  /* 10A514 8018D624 00807825 */        or $t7, $a0, $zero
  .L8018D628:
  /* 10A518 8018D628 8F0E0000 */        lw $t6, ($t8) # D_800A4D08 + 0
  /* 10A51C 8018D62C 2718000C */     addiu $t8, $t8, 0xc
  /* 10A520 8018D630 25EF000C */     addiu $t7, $t7, 0xc
  /* 10A524 8018D634 ADEEFFF4 */        sw $t6, -0xc($t7)
  /* 10A528 8018D638 8F19FFF8 */        lw $t9, -8($t8) # D_800A4D08 + -8
  /* 10A52C 8018D63C ADF9FFF8 */        sw $t9, -8($t7)
  /* 10A530 8018D640 8F0EFFFC */        lw $t6, -4($t8) # D_800A4D08 + -4
  /* 10A534 8018D644 1701FFF8 */       bne $t8, $at, .L8018D628
  /* 10A538 8018D648 ADEEFFFC */        sw $t6, -4($t7)
  /* 10A53C 8018D64C 8F0E0000 */        lw $t6, ($t8) # D_800A4D08 + 0
  /* 10A540 8018D650 3C02800A */       lui $v0, %hi(D_800A4EF8)
  /* 10A544 8018D654 3C05800A */       lui $a1, %hi((D_800A4EF8 + 0x1d0))
  /* 10A548 8018D658 ADEE0000 */        sw $t6, ($t7)
  /* 10A54C 8018D65C A0800004 */        sb $zero, 4($a0) # D_800A4EF8 + 4
  /* 10A550 8018D660 A0800005 */        sb $zero, 5($a0) # D_800A4EF8 + 5
  /* 10A554 8018D664 24A550C8 */     addiu $a1, $a1, %lo((D_800A4EF8 + 0x1d0))
  /* 10A558 8018D668 24424EF8 */     addiu $v0, $v0, %lo(D_800A4EF8)
  /* 10A55C 8018D66C 24030002 */     addiu $v1, $zero, 2
  .L8018D670:
  /* 10A560 8018D670 24420074 */     addiu $v0, $v0, 0x74
  /* 10A564 8018D674 0045082B */      sltu $at, $v0, $a1
  /* 10A568 8018D678 1420FFFD */      bnez $at, .L8018D670
  /* 10A56C 8018D67C A043FFAE */        sb $v1, -0x52($v0) # D_800A4EF8 + -82
  /* 10A570 8018D680 91A20002 */       lbu $v0, 2($t5)
  /* 10A574 8018D684 00002825 */        or $a1, $zero, $zero
  /* 10A578 8018D688 00003025 */        or $a2, $zero, $zero
  /* 10A57C 8018D68C 10400006 */      beqz $v0, .L8018D6A8
  /* 10A580 8018D690 01A08025 */        or $s0, $t5, $zero
  /* 10A584 8018D694 240B0001 */     addiu $t3, $zero, 1
  /* 10A588 8018D698 104B00E6 */       beq $v0, $t3, .L8018DA34
  /* 10A58C 8018D69C 00003025 */        or $a2, $zero, $zero
  /* 10A590 8018D6A0 100001D2 */         b .L8018DDEC
  /* 10A594 8018D6A4 240C0001 */     addiu $t4, $zero, 1
  .L8018D6A8:
  /* 10A598 8018D6A8 240C0001 */     addiu $t4, $zero, 1
  /* 10A59C 8018D6AC 2409000C */     addiu $t1, $zero, 0xc
  /* 10A5A0 8018D6B0 27A80044 */     addiu $t0, $sp, 0x44
  /* 10A5A4 8018D6B4 24070002 */     addiu $a3, $zero, 2
  .L8018D6B8:
  /* 10A5A8 8018D6B8 920F0022 */       lbu $t7, 0x22($s0)
  /* 10A5AC 8018D6BC 50EF0014 */      beql $a3, $t7, .L8018D710
  /* 10A5B0 8018D6C0 24A50001 */     addiu $a1, $a1, 1
  /* 10A5B4 8018D6C4 00C90019 */     multu $a2, $t1
  /* 10A5B8 8018D6C8 8E0E0034 */        lw $t6, 0x34($s0)
  /* 10A5BC 8018D6CC 8E180030 */        lw $t8, 0x30($s0)
  /* 10A5C0 8018D6D0 24C60001 */     addiu $a2, $a2, 1
  /* 10A5C4 8018D6D4 01D87823 */      subu $t7, $t6, $t8
  /* 10A5C8 8018D6D8 0000C812 */      mflo $t9
  /* 10A5CC 8018D6DC 01191021 */      addu $v0, $t0, $t9
  /* 10A5D0 8018D6E0 AC4F0000 */        sw $t7, ($v0)
  /* 10A5D4 8018D6E4 8E190034 */        lw $t9, 0x34($s0)
  /* 10A5D8 8018D6E8 A0450008 */        sb $a1, 8($v0)
  /* 10A5DC 8018D6EC A0400009 */        sb $zero, 9($v0)
  /* 10A5E0 8018D6F0 AC590004 */        sw $t9, 4($v0)
  /* 10A5E4 8018D6F4 920E0022 */       lbu $t6, 0x22($s0)
  /* 10A5E8 8018D6F8 55C00004 */      bnel $t6, $zero, .L8018D70C
  /* 10A5EC 8018D6FC A040000A */        sb $zero, 0xa($v0)
  /* 10A5F0 8018D700 10000002 */         b .L8018D70C
  /* 10A5F4 8018D704 A04C000A */        sb $t4, 0xa($v0)
  /* 10A5F8 8018D708 A040000A */        sb $zero, 0xa($v0)
  .L8018D70C:
  /* 10A5FC 8018D70C 24A50001 */     addiu $a1, $a1, 1
  .L8018D710:
  /* 10A600 8018D710 28A10004 */      slti $at, $a1, 4
  /* 10A604 8018D714 1420FFE8 */      bnez $at, .L8018D6B8
  /* 10A608 8018D718 26100074 */     addiu $s0, $s0, 0x74
  /* 10A60C 8018D71C 18C0002E */      blez $a2, .L8018D7D8
  /* 10A610 8018D720 00002825 */        or $a1, $zero, $zero
  /* 10A614 8018D724 27B20074 */     addiu $s2, $sp, 0x74
  .L8018D728:
  /* 10A618 8018D728 24AA0001 */     addiu $t2, $a1, 1
  /* 10A61C 8018D72C 0146082A */       slt $at, $t2, $a2
  /* 10A620 8018D730 10200026 */      beqz $at, .L8018D7CC
  /* 10A624 8018D734 01401025 */        or $v0, $t2, $zero
  /* 10A628 8018D738 0005C080 */       sll $t8, $a1, 2
  /* 10A62C 8018D73C 27AF0044 */     addiu $t7, $sp, 0x44
  /* 10A630 8018D740 0002C880 */       sll $t9, $v0, 2
  /* 10A634 8018D744 00067080 */       sll $t6, $a2, 2
  /* 10A638 8018D748 01C67023 */      subu $t6, $t6, $a2
  /* 10A63C 8018D74C 0322C823 */      subu $t9, $t9, $v0
  /* 10A640 8018D750 0305C023 */      subu $t8, $t8, $a1
  /* 10A644 8018D754 0018C080 */       sll $t8, $t8, 2
  /* 10A648 8018D758 0019C880 */       sll $t9, $t9, 2
  /* 10A64C 8018D75C 000E7080 */       sll $t6, $t6, 2
  /* 10A650 8018D760 01CF3821 */      addu $a3, $t6, $t7
  /* 10A654 8018D764 032F8821 */      addu $s1, $t9, $t7
  /* 10A658 8018D768 030F1821 */      addu $v1, $t8, $t7
  /* 10A65C 8018D76C 8C780000 */        lw $t8, ($v1)
  .L8018D770:
  /* 10A660 8018D770 8E390000 */        lw $t9, ($s1)
  /* 10A664 8018D774 0319082A */       slt $at, $t8, $t9
  /* 10A668 8018D778 50200012 */      beql $at, $zero, .L8018D7C4
  /* 10A66C 8018D77C 2631000C */     addiu $s1, $s1, 0xc
  /* 10A670 8018D780 8E390000 */        lw $t9, ($s1)
  /* 10A674 8018D784 AE580000 */        sw $t8, ($s2)
  /* 10A678 8018D788 8C6F0008 */        lw $t7, 8($v1)
  /* 10A67C 8018D78C AC790000 */        sw $t9, ($v1)
  /* 10A680 8018D790 8E380004 */        lw $t8, 4($s1)
  /* 10A684 8018D794 8C6E0004 */        lw $t6, 4($v1)
  /* 10A688 8018D798 AE4F0008 */        sw $t7, 8($s2)
  /* 10A68C 8018D79C AC780004 */        sw $t8, 4($v1)
  /* 10A690 8018D7A0 8E390008 */        lw $t9, 8($s1)
  /* 10A694 8018D7A4 8E4F0000 */        lw $t7, ($s2)
  /* 10A698 8018D7A8 AE4E0004 */        sw $t6, 4($s2)
  /* 10A69C 8018D7AC AC790008 */        sw $t9, 8($v1)
  /* 10A6A0 8018D7B0 AE2F0000 */        sw $t7, ($s1)
  /* 10A6A4 8018D7B4 8E4F0008 */        lw $t7, 8($s2)
  /* 10A6A8 8018D7B8 AE2E0004 */        sw $t6, 4($s1)
  /* 10A6AC 8018D7BC AE2F0008 */        sw $t7, 8($s1)
  /* 10A6B0 8018D7C0 2631000C */     addiu $s1, $s1, 0xc
  .L8018D7C4:
  /* 10A6B4 8018D7C4 5627FFEA */      bnel $s1, $a3, .L8018D770
  /* 10A6B8 8018D7C8 8C780000 */        lw $t8, ($v1)
  .L8018D7CC:
  /* 10A6BC 8018D7CC 1546FFD6 */       bne $t2, $a2, .L8018D728
  /* 10A6C0 8018D7D0 01402825 */        or $a1, $t2, $zero
  /* 10A6C4 8018D7D4 24030002 */     addiu $v1, $zero, 2
  .L8018D7D8:
  /* 10A6C8 8018D7D8 28C10002 */      slti $at, $a2, 2
  /* 10A6CC 8018D7DC A3AC004D */        sb $t4, 0x4d($sp)
  /* 10A6D0 8018D7E0 240A0001 */     addiu $t2, $zero, 1
  /* 10A6D4 8018D7E4 14200039 */      bnez $at, .L8018D8CC
  /* 10A6D8 8018D7E8 24050001 */     addiu $a1, $zero, 1
  /* 10A6DC 8018D7EC 24D0FFFF */     addiu $s0, $a2, -1
  /* 10A6E0 8018D7F0 32100003 */      andi $s0, $s0, 3
  /* 10A6E4 8018D7F4 12000010 */      beqz $s0, .L8018D838
  /* 10A6E8 8018D7F8 26020001 */     addiu $v0, $s0, 1
  /* 10A6EC 8018D7FC 0005C080 */       sll $t8, $a1, 2
  /* 10A6F0 8018D800 0305C023 */      subu $t8, $t8, $a1
  /* 10A6F4 8018D804 0018C080 */       sll $t8, $t8, 2
  /* 10A6F8 8018D808 27B90044 */     addiu $t9, $sp, 0x44
  /* 10A6FC 8018D80C 03191821 */      addu $v1, $t8, $t9
  .L8018D810:
  /* 10A700 8018D810 8FAE0044 */        lw $t6, 0x44($sp)
  /* 10A704 8018D814 8C6F0000 */        lw $t7, ($v1)
  /* 10A708 8018D818 24A50001 */     addiu $a1, $a1, 1
  /* 10A70C 8018D81C 15CF0003 */       bne $t6, $t7, .L8018D82C
  /* 10A710 8018D820 00000000 */       nop 
  /* 10A714 8018D824 A06C0009 */        sb $t4, 9($v1)
  /* 10A718 8018D828 254A0001 */     addiu $t2, $t2, 1
  .L8018D82C:
  /* 10A71C 8018D82C 1445FFF8 */       bne $v0, $a1, .L8018D810
  /* 10A720 8018D830 2463000C */     addiu $v1, $v1, 0xc
  /* 10A724 8018D834 10A60024 */       beq $a1, $a2, .L8018D8C8
  .L8018D838:
  /* 10A728 8018D838 0005C080 */       sll $t8, $a1, 2
  /* 10A72C 8018D83C 00067080 */       sll $t6, $a2, 2
  /* 10A730 8018D840 01C67023 */      subu $t6, $t6, $a2
  /* 10A734 8018D844 0305C023 */      subu $t8, $t8, $a1
  /* 10A738 8018D848 27B90044 */     addiu $t9, $sp, 0x44
  /* 10A73C 8018D84C 0018C080 */       sll $t8, $t8, 2
  /* 10A740 8018D850 000E7080 */       sll $t6, $t6, 2
  /* 10A744 8018D854 01D91021 */      addu $v0, $t6, $t9
  /* 10A748 8018D858 03191821 */      addu $v1, $t8, $t9
  /* 10A74C 8018D85C 8FAF0044 */        lw $t7, 0x44($sp)
  .L8018D860:
  /* 10A750 8018D860 8C780000 */        lw $t8, ($v1)
  /* 10A754 8018D864 55F80004 */      bnel $t7, $t8, .L8018D878
  /* 10A758 8018D868 8FAE0044 */        lw $t6, 0x44($sp)
  /* 10A75C 8018D86C A06C0009 */        sb $t4, 9($v1)
  /* 10A760 8018D870 254A0001 */     addiu $t2, $t2, 1
  /* 10A764 8018D874 8FAE0044 */        lw $t6, 0x44($sp)
  .L8018D878:
  /* 10A768 8018D878 8C79000C */        lw $t9, 0xc($v1)
  /* 10A76C 8018D87C 55D90004 */      bnel $t6, $t9, .L8018D890
  /* 10A770 8018D880 8FAF0044 */        lw $t7, 0x44($sp)
  /* 10A774 8018D884 A06C0015 */        sb $t4, 0x15($v1)
  /* 10A778 8018D888 254A0001 */     addiu $t2, $t2, 1
  /* 10A77C 8018D88C 8FAF0044 */        lw $t7, 0x44($sp)
  .L8018D890:
  /* 10A780 8018D890 8C780018 */        lw $t8, 0x18($v1)
  /* 10A784 8018D894 55F80004 */      bnel $t7, $t8, .L8018D8A8
  /* 10A788 8018D898 8FAE0044 */        lw $t6, 0x44($sp)
  /* 10A78C 8018D89C A06C0021 */        sb $t4, 0x21($v1)
  /* 10A790 8018D8A0 254A0001 */     addiu $t2, $t2, 1
  /* 10A794 8018D8A4 8FAE0044 */        lw $t6, 0x44($sp)
  .L8018D8A8:
  /* 10A798 8018D8A8 8C790024 */        lw $t9, 0x24($v1)
  /* 10A79C 8018D8AC 55D90004 */      bnel $t6, $t9, .L8018D8C0
  /* 10A7A0 8018D8B0 24630030 */     addiu $v1, $v1, 0x30
  /* 10A7A4 8018D8B4 A06C002D */        sb $t4, 0x2d($v1)
  /* 10A7A8 8018D8B8 254A0001 */     addiu $t2, $t2, 1
  /* 10A7AC 8018D8BC 24630030 */     addiu $v1, $v1, 0x30
  .L8018D8C0:
  /* 10A7B0 8018D8C0 5462FFE7 */      bnel $v1, $v0, .L8018D860
  /* 10A7B4 8018D8C4 8FAF0044 */        lw $t7, 0x44($sp)
  .L8018D8C8:
  /* 10A7B8 8018D8C8 24030002 */     addiu $v1, $zero, 2
  .L8018D8CC:
  /* 10A7BC 8018D8CC 29410002 */      slti $at, $t2, 2
  /* 10A7C0 8018D8D0 10200003 */      beqz $at, .L8018D8E0
  /* 10A7C4 8018D8D4 00000000 */       nop 
  /* 10A7C8 8018D8D8 1000014B */         b .L8018DE08
  /* 10A7CC 8018D8DC 00001025 */        or $v0, $zero, $zero
  .L8018D8E0:
  /* 10A7D0 8018D8E0 19400142 */      blez $t2, .L8018DDEC
  /* 10A7D4 8018D8E4 00002825 */        or $a1, $zero, $zero
  /* 10A7D8 8018D8E8 31420001 */      andi $v0, $t2, 1
  /* 10A7DC 8018D8EC 10400019 */      beqz $v0, .L8018D954
  /* 10A7E0 8018D8F0 93AF004C */       lbu $t7, 0x4c($sp)
  /* 10A7E4 8018D8F4 24090074 */     addiu $t1, $zero, 0x74
  /* 10A7E8 8018D8F8 01E90019 */     multu $t7, $t1
  /* 10A7EC 8018D8FC 240B0001 */     addiu $t3, $zero, 1
  /* 10A7F0 8018D900 00001812 */      mflo $v1
  /* 10A7F4 8018D904 01A3C021 */      addu $t8, $t5, $v1
  /* 10A7F8 8018D908 930E0022 */       lbu $t6, 0x22($t8)
  /* 10A7FC 8018D90C 00832821 */      addu $a1, $a0, $v1
  /* 10A800 8018D910 31C600FF */      andi $a2, $t6, 0xff
  /* 10A804 8018D914 10C00005 */      beqz $a2, .L8018D92C
  /* 10A808 8018D918 A0AE0022 */        sb $t6, 0x22($a1) # (D_800A4EF8 + 0x1d0) + 34
  /* 10A80C 8018D91C 50CB0009 */      beql $a2, $t3, .L8018D944
  /* 10A810 8018D920 90980005 */       lbu $t8, 5($a0) # D_800A4EF8 + 5
  /* 10A814 8018D924 10000009 */         b .L8018D94C
  /* 10A818 8018D928 00000000 */       nop 
  .L8018D92C:
  /* 10A81C 8018D92C 90990004 */       lbu $t9, 4($a0) # D_800A4EF8 + 4
  /* 10A820 8018D930 240B0001 */     addiu $t3, $zero, 1
  /* 10A824 8018D934 272F0001 */     addiu $t7, $t9, 1
  /* 10A828 8018D938 10000004 */         b .L8018D94C
  /* 10A82C 8018D93C A08F0004 */        sb $t7, 4($a0) # D_800A4EF8 + 4
  /* 10A830 8018D940 90980005 */       lbu $t8, 5($a0) # D_800A4EF8 + 5
  .L8018D944:
  /* 10A834 8018D944 270E0001 */     addiu $t6, $t8, 1
  /* 10A838 8018D948 A08E0005 */        sb $t6, 5($a0) # D_800A4EF8 + 5
  .L8018D94C:
  /* 10A83C 8018D94C 116A0037 */       beq $t3, $t2, .L8018DA2C
  /* 10A840 8018D950 01602825 */        or $a1, $t3, $zero
  .L8018D954:
  /* 10A844 8018D954 0005C880 */       sll $t9, $a1, 2
  /* 10A848 8018D958 000AC080 */       sll $t8, $t2, 2
  /* 10A84C 8018D95C 030AC023 */      subu $t8, $t8, $t2
  /* 10A850 8018D960 0325C823 */      subu $t9, $t9, $a1
  /* 10A854 8018D964 27AF0044 */     addiu $t7, $sp, 0x44
  /* 10A858 8018D968 0019C880 */       sll $t9, $t9, 2
  /* 10A85C 8018D96C 0018C080 */       sll $t8, $t8, 2
  /* 10A860 8018D970 030F4021 */      addu $t0, $t8, $t7
  /* 10A864 8018D974 032F1821 */      addu $v1, $t9, $t7
  /* 10A868 8018D978 24090074 */     addiu $t1, $zero, 0x74
  /* 10A86C 8018D97C 240B0001 */     addiu $t3, $zero, 1
  /* 10A870 8018D980 906E0008 */       lbu $t6, 8($v1)
  .L8018D984:
  /* 10A874 8018D984 01C90019 */     multu $t6, $t1
  /* 10A878 8018D988 00002812 */      mflo $a1
  /* 10A87C 8018D98C 01A5C821 */      addu $t9, $t5, $a1
  /* 10A880 8018D990 93380022 */       lbu $t8, 0x22($t9)
  /* 10A884 8018D994 00853021 */      addu $a2, $a0, $a1
  /* 10A888 8018D998 330700FF */      andi $a3, $t8, 0xff
  /* 10A88C 8018D99C 10E00005 */      beqz $a3, .L8018D9B4
  /* 10A890 8018D9A0 A0D80022 */        sb $t8, 0x22($a2)
  /* 10A894 8018D9A4 50EB0008 */      beql $a3, $t3, .L8018D9C8
  /* 10A898 8018D9A8 90990005 */       lbu $t9, 5($a0) # D_800A4EF8 + 5
  /* 10A89C 8018D9AC 10000009 */         b .L8018D9D4
  /* 10A8A0 8018D9B0 906F0014 */       lbu $t7, 0x14($v1)
  .L8018D9B4:
  /* 10A8A4 8018D9B4 908F0004 */       lbu $t7, 4($a0) # D_800A4EF8 + 4
  /* 10A8A8 8018D9B8 25EE0001 */     addiu $t6, $t7, 1
  /* 10A8AC 8018D9BC 10000004 */         b .L8018D9D0
  /* 10A8B0 8018D9C0 A08E0004 */        sb $t6, 4($a0) # D_800A4EF8 + 4
  /* 10A8B4 8018D9C4 90990005 */       lbu $t9, 5($a0) # D_800A4EF8 + 5
  .L8018D9C8:
  /* 10A8B8 8018D9C8 27380001 */     addiu $t8, $t9, 1
  /* 10A8BC 8018D9CC A0980005 */        sb $t8, 5($a0) # D_800A4EF8 + 5
  .L8018D9D0:
  /* 10A8C0 8018D9D0 906F0014 */       lbu $t7, 0x14($v1)
  .L8018D9D4:
  /* 10A8C4 8018D9D4 24630018 */     addiu $v1, $v1, 0x18
  /* 10A8C8 8018D9D8 01E90019 */     multu $t7, $t1
  /* 10A8CC 8018D9DC 00002812 */      mflo $a1
  /* 10A8D0 8018D9E0 01A57021 */      addu $t6, $t5, $a1
  /* 10A8D4 8018D9E4 91D90022 */       lbu $t9, 0x22($t6)
  /* 10A8D8 8018D9E8 00853021 */      addu $a2, $a0, $a1
  /* 10A8DC 8018D9EC 332200FF */      andi $v0, $t9, 0xff
  /* 10A8E0 8018D9F0 10400005 */      beqz $v0, .L8018DA08
  /* 10A8E4 8018D9F4 A0D90022 */        sb $t9, 0x22($a2)
  /* 10A8E8 8018D9F8 504B0008 */      beql $v0, $t3, .L8018DA1C
  /* 10A8EC 8018D9FC 908E0005 */       lbu $t6, 5($a0) # D_800A4EF8 + 5
  /* 10A8F0 8018DA00 10000008 */         b .L8018DA24
  /* 10A8F4 8018DA04 00000000 */       nop 
  .L8018DA08:
  /* 10A8F8 8018DA08 90980004 */       lbu $t8, 4($a0) # D_800A4EF8 + 4
  /* 10A8FC 8018DA0C 270F0001 */     addiu $t7, $t8, 1
  /* 10A900 8018DA10 10000004 */         b .L8018DA24
  /* 10A904 8018DA14 A08F0004 */        sb $t7, 4($a0) # D_800A4EF8 + 4
  /* 10A908 8018DA18 908E0005 */       lbu $t6, 5($a0) # D_800A4EF8 + 5
  .L8018DA1C:
  /* 10A90C 8018DA1C 25D90001 */     addiu $t9, $t6, 1
  /* 10A910 8018DA20 A0990005 */        sb $t9, 5($a0) # D_800A4EF8 + 5
  .L8018DA24:
  /* 10A914 8018DA24 5468FFD7 */      bnel $v1, $t0, .L8018D984
  /* 10A918 8018DA28 906E0008 */       lbu $t6, 8($v1)
  .L8018DA2C:
  /* 10A91C 8018DA2C 100000EF */         b .L8018DDEC
  /* 10A920 8018DA30 24030002 */     addiu $v1, $zero, 2
  .L8018DA34:
  /* 10A924 8018DA34 00005025 */        or $t2, $zero, $zero
  /* 10A928 8018DA38 01A08025 */        or $s0, $t5, $zero
  /* 10A92C 8018DA3C 240C0001 */     addiu $t4, $zero, 1
  /* 10A930 8018DA40 2409000C */     addiu $t1, $zero, 0xc
  /* 10A934 8018DA44 27A80044 */     addiu $t0, $sp, 0x44
  /* 10A938 8018DA48 24070002 */     addiu $a3, $zero, 2
  .L8018DA4C:
  /* 10A93C 8018DA4C 92180022 */       lbu $t8, 0x22($s0)
  /* 10A940 8018DA50 254A0074 */     addiu $t2, $t2, 0x74
  /* 10A944 8018DA54 294101D0 */      slti $at, $t2, 0x1d0
  /* 10A948 8018DA58 10F80033 */       beq $a3, $t8, .L8018DB28
  /* 10A94C 8018DA5C 00000000 */       nop 
  /* 10A950 8018DA60 18C0001C */      blez $a2, .L8018DAD4
  /* 10A954 8018DA64 00001025 */        or $v0, $zero, $zero
  /* 10A958 8018DA68 27B10044 */     addiu $s1, $sp, 0x44
  /* 10A95C 8018DA6C 92050024 */       lbu $a1, 0x24($s0)
  .L8018DA70:
  /* 10A960 8018DA70 922F0008 */       lbu $t7, 8($s1)
  /* 10A964 8018DA74 24420001 */     addiu $v0, $v0, 1
  /* 10A968 8018DA78 14AF0014 */       bne $a1, $t7, .L8018DACC
  /* 10A96C 8018DA7C 00000000 */       nop 
  /* 10A970 8018DA80 8E2E0000 */        lw $t6, ($s1)
  /* 10A974 8018DA84 8E190034 */        lw $t9, 0x34($s0)
  /* 10A978 8018DA88 8E0F0030 */        lw $t7, 0x30($s0)
  /* 10A97C 8018DA8C 01D9C021 */      addu $t8, $t6, $t9
  /* 10A980 8018DA90 030F7023 */      subu $t6, $t8, $t7
  /* 10A984 8018DA94 AE2E0000 */        sw $t6, ($s1)
  /* 10A988 8018DA98 8E180034 */        lw $t8, 0x34($s0)
  /* 10A98C 8018DA9C 8E390004 */        lw $t9, 4($s1)
  /* 10A990 8018DAA0 922E000A */       lbu $t6, 0xa($s1)
  /* 10A994 8018DAA4 03387821 */      addu $t7, $t9, $t8
  /* 10A998 8018DAA8 15C00004 */      bnez $t6, .L8018DABC
  /* 10A99C 8018DAAC AE2F0004 */        sw $t7, 4($s1)
  /* 10A9A0 8018DAB0 92190022 */       lbu $t9, 0x22($s0)
  /* 10A9A4 8018DAB4 17200003 */      bnez $t9, .L8018DAC4
  /* 10A9A8 8018DAB8 00000000 */       nop 
  .L8018DABC:
  /* 10A9AC 8018DABC 1000001A */         b .L8018DB28
  /* 10A9B0 8018DAC0 A22C000A */        sb $t4, 0xa($s1)
  .L8018DAC4:
  /* 10A9B4 8018DAC4 10000018 */         b .L8018DB28
  /* 10A9B8 8018DAC8 A220000A */        sb $zero, 0xa($s1)
  .L8018DACC:
  /* 10A9BC 8018DACC 1446FFE8 */       bne $v0, $a2, .L8018DA70
  /* 10A9C0 8018DAD0 2631000C */     addiu $s1, $s1, 0xc
  .L8018DAD4:
  /* 10A9C4 8018DAD4 00C90019 */     multu $a2, $t1
  /* 10A9C8 8018DAD8 8E0F0034 */        lw $t7, 0x34($s0)
  /* 10A9CC 8018DADC 8E0E0030 */        lw $t6, 0x30($s0)
  /* 10A9D0 8018DAE0 24C60001 */     addiu $a2, $a2, 1
  /* 10A9D4 8018DAE4 01EEC823 */      subu $t9, $t7, $t6
  /* 10A9D8 8018DAE8 0000C012 */      mflo $t8
  /* 10A9DC 8018DAEC 01181021 */      addu $v0, $t0, $t8
  /* 10A9E0 8018DAF0 AC590000 */        sw $t9, ($v0)
  /* 10A9E4 8018DAF4 8E180034 */        lw $t8, 0x34($s0)
  /* 10A9E8 8018DAF8 904E000A */       lbu $t6, 0xa($v0)
  /* 10A9EC 8018DAFC AC580004 */        sw $t8, 4($v0)
  /* 10A9F0 8018DB00 920F0024 */       lbu $t7, 0x24($s0)
  /* 10A9F4 8018DB04 A0400009 */        sb $zero, 9($v0)
  /* 10A9F8 8018DB08 15C00004 */      bnez $t6, .L8018DB1C
  /* 10A9FC 8018DB0C A04F0008 */        sb $t7, 8($v0)
  /* 10AA00 8018DB10 92190022 */       lbu $t9, 0x22($s0)
  /* 10AA04 8018DB14 57200004 */      bnel $t9, $zero, .L8018DB28
  /* 10AA08 8018DB18 A040000A */        sb $zero, 0xa($v0)
  .L8018DB1C:
  /* 10AA0C 8018DB1C 10000002 */         b .L8018DB28
  /* 10AA10 8018DB20 A04C000A */        sb $t4, 0xa($v0)
  /* 10AA14 8018DB24 A040000A */        sb $zero, 0xa($v0)
  .L8018DB28:
  /* 10AA18 8018DB28 1420FFC8 */      bnez $at, .L8018DA4C
  /* 10AA1C 8018DB2C 26100074 */     addiu $s0, $s0, 0x74
  /* 10AA20 8018DB30 18C0002F */      blez $a2, .L8018DBF0
  /* 10AA24 8018DB34 00002825 */        or $a1, $zero, $zero
  /* 10AA28 8018DB38 27B20074 */     addiu $s2, $sp, 0x74
  .L8018DB3C:
  /* 10AA2C 8018DB3C 24AA0001 */     addiu $t2, $a1, 1
  /* 10AA30 8018DB40 0146082A */       slt $at, $t2, $a2
  /* 10AA34 8018DB44 10200027 */      beqz $at, .L8018DBE4
  /* 10AA38 8018DB48 01401025 */        or $v0, $t2, $zero
  /* 10AA3C 8018DB4C 0005C080 */       sll $t8, $a1, 2
  /* 10AA40 8018DB50 00027880 */       sll $t7, $v0, 2
  /* 10AA44 8018DB54 00067080 */       sll $t6, $a2, 2
  /* 10AA48 8018DB58 01C67023 */      subu $t6, $t6, $a2
  /* 10AA4C 8018DB5C 01E27823 */      subu $t7, $t7, $v0
  /* 10AA50 8018DB60 0305C023 */      subu $t8, $t8, $a1
  /* 10AA54 8018DB64 0018C080 */       sll $t8, $t8, 2
  /* 10AA58 8018DB68 000F7880 */       sll $t7, $t7, 2
  /* 10AA5C 8018DB6C 000E7080 */       sll $t6, $t6, 2
  /* 10AA60 8018DB70 27B90044 */     addiu $t9, $sp, 0x44
  /* 10AA64 8018DB74 01D98021 */      addu $s0, $t6, $t9
  /* 10AA68 8018DB78 010F8821 */      addu $s1, $t0, $t7
  /* 10AA6C 8018DB7C 01181821 */      addu $v1, $t0, $t8
  /* 10AA70 8018DB80 8C780000 */        lw $t8, ($v1)
  .L8018DB84:
  /* 10AA74 8018DB84 8E2F0000 */        lw $t7, ($s1)
  /* 10AA78 8018DB88 030F082A */       slt $at, $t8, $t7
  /* 10AA7C 8018DB8C 50200013 */      beql $at, $zero, .L8018DBDC
  /* 10AA80 8018DB90 2631000C */     addiu $s1, $s1, 0xc
  /* 10AA84 8018DB94 8E2F0000 */        lw $t7, ($s1)
  /* 10AA88 8018DB98 8C790000 */        lw $t9, ($v1)
  /* 10AA8C 8018DB9C 8C6E0004 */        lw $t6, 4($v1)
  /* 10AA90 8018DBA0 AC6F0000 */        sw $t7, ($v1)
  /* 10AA94 8018DBA4 8E380004 */        lw $t8, 4($s1)
  /* 10AA98 8018DBA8 AE590000 */        sw $t9, ($s2)
  /* 10AA9C 8018DBAC 8C790008 */        lw $t9, 8($v1)
  /* 10AAA0 8018DBB0 AC780004 */        sw $t8, 4($v1)
  /* 10AAA4 8018DBB4 8E2F0008 */        lw $t7, 8($s1)
  /* 10AAA8 8018DBB8 AE590008 */        sw $t9, 8($s2)
  /* 10AAAC 8018DBBC 8E590000 */        lw $t9, ($s2)
  /* 10AAB0 8018DBC0 AC6F0008 */        sw $t7, 8($v1)
  /* 10AAB4 8018DBC4 AE4E0004 */        sw $t6, 4($s2)
  /* 10AAB8 8018DBC8 AE390000 */        sw $t9, ($s1)
  /* 10AABC 8018DBCC 8E590008 */        lw $t9, 8($s2)
  /* 10AAC0 8018DBD0 AE2E0004 */        sw $t6, 4($s1)
  /* 10AAC4 8018DBD4 AE390008 */        sw $t9, 8($s1)
  /* 10AAC8 8018DBD8 2631000C */     addiu $s1, $s1, 0xc
  .L8018DBDC:
  /* 10AACC 8018DBDC 5630FFE9 */      bnel $s1, $s0, .L8018DB84
  /* 10AAD0 8018DBE0 8C780000 */        lw $t8, ($v1)
  .L8018DBE4:
  /* 10AAD4 8018DBE4 1546FFD5 */       bne $t2, $a2, .L8018DB3C
  /* 10AAD8 8018DBE8 01402825 */        or $a1, $t2, $zero
  /* 10AADC 8018DBEC 24030002 */     addiu $v1, $zero, 2
  .L8018DBF0:
  /* 10AAE0 8018DBF0 28C10002 */      slti $at, $a2, 2
  /* 10AAE4 8018DBF4 A3AC004D */        sb $t4, 0x4d($sp)
  /* 10AAE8 8018DBF8 01605025 */        or $t2, $t3, $zero
  /* 10AAEC 8018DBFC 14200038 */      bnez $at, .L8018DCE0
  /* 10AAF0 8018DC00 01602825 */        or $a1, $t3, $zero
  /* 10AAF4 8018DC04 24D0FFFF */     addiu $s0, $a2, -1
  /* 10AAF8 8018DC08 32100003 */      andi $s0, $s0, 3
  /* 10AAFC 8018DC0C 1200000F */      beqz $s0, .L8018DC4C
  /* 10AB00 8018DC10 26020001 */     addiu $v0, $s0, 1
  /* 10AB04 8018DC14 0005C080 */       sll $t8, $a1, 2
  /* 10AB08 8018DC18 0305C023 */      subu $t8, $t8, $a1
  /* 10AB0C 8018DC1C 0018C080 */       sll $t8, $t8, 2
  /* 10AB10 8018DC20 01181821 */      addu $v1, $t0, $t8
  .L8018DC24:
  /* 10AB14 8018DC24 8FAF0044 */        lw $t7, 0x44($sp)
  /* 10AB18 8018DC28 8C6E0000 */        lw $t6, ($v1)
  /* 10AB1C 8018DC2C 24A50001 */     addiu $a1, $a1, 1
  /* 10AB20 8018DC30 15EE0003 */       bne $t7, $t6, .L8018DC40
  /* 10AB24 8018DC34 00000000 */       nop 
  /* 10AB28 8018DC38 A06C0009 */        sb $t4, 9($v1)
  /* 10AB2C 8018DC3C 254A0001 */     addiu $t2, $t2, 1
  .L8018DC40:
  /* 10AB30 8018DC40 1445FFF8 */       bne $v0, $a1, .L8018DC24
  /* 10AB34 8018DC44 2463000C */     addiu $v1, $v1, 0xc
  /* 10AB38 8018DC48 10A60024 */       beq $a1, $a2, .L8018DCDC
  .L8018DC4C:
  /* 10AB3C 8018DC4C 0005C880 */       sll $t9, $a1, 2
  /* 10AB40 8018DC50 0006C080 */       sll $t8, $a2, 2
  /* 10AB44 8018DC54 0306C023 */      subu $t8, $t8, $a2
  /* 10AB48 8018DC58 0325C823 */      subu $t9, $t9, $a1
  /* 10AB4C 8018DC5C 0019C880 */       sll $t9, $t9, 2
  /* 10AB50 8018DC60 0018C080 */       sll $t8, $t8, 2
  /* 10AB54 8018DC64 27AF0044 */     addiu $t7, $sp, 0x44
  /* 10AB58 8018DC68 030F1021 */      addu $v0, $t8, $t7
  /* 10AB5C 8018DC6C 01191821 */      addu $v1, $t0, $t9
  /* 10AB60 8018DC70 8FAE0044 */        lw $t6, 0x44($sp)
  .L8018DC74:
  /* 10AB64 8018DC74 8C790000 */        lw $t9, ($v1)
  /* 10AB68 8018DC78 55D90004 */      bnel $t6, $t9, .L8018DC8C
  /* 10AB6C 8018DC7C 8FB80044 */        lw $t8, 0x44($sp)
  /* 10AB70 8018DC80 A06C0009 */        sb $t4, 9($v1)
  /* 10AB74 8018DC84 254A0001 */     addiu $t2, $t2, 1
  /* 10AB78 8018DC88 8FB80044 */        lw $t8, 0x44($sp)
  .L8018DC8C:
  /* 10AB7C 8018DC8C 8C6F000C */        lw $t7, 0xc($v1)
  /* 10AB80 8018DC90 570F0004 */      bnel $t8, $t7, .L8018DCA4
  /* 10AB84 8018DC94 8FAE0044 */        lw $t6, 0x44($sp)
  /* 10AB88 8018DC98 A06C0015 */        sb $t4, 0x15($v1)
  /* 10AB8C 8018DC9C 254A0001 */     addiu $t2, $t2, 1
  /* 10AB90 8018DCA0 8FAE0044 */        lw $t6, 0x44($sp)
  .L8018DCA4:
  /* 10AB94 8018DCA4 8C790018 */        lw $t9, 0x18($v1)
  /* 10AB98 8018DCA8 55D90004 */      bnel $t6, $t9, .L8018DCBC
  /* 10AB9C 8018DCAC 8FB80044 */        lw $t8, 0x44($sp)
  /* 10ABA0 8018DCB0 A06C0021 */        sb $t4, 0x21($v1)
  /* 10ABA4 8018DCB4 254A0001 */     addiu $t2, $t2, 1
  /* 10ABA8 8018DCB8 8FB80044 */        lw $t8, 0x44($sp)
  .L8018DCBC:
  /* 10ABAC 8018DCBC 8C6F0024 */        lw $t7, 0x24($v1)
  /* 10ABB0 8018DCC0 570F0004 */      bnel $t8, $t7, .L8018DCD4
  /* 10ABB4 8018DCC4 24630030 */     addiu $v1, $v1, 0x30
  /* 10ABB8 8018DCC8 A06C002D */        sb $t4, 0x2d($v1)
  /* 10ABBC 8018DCCC 254A0001 */     addiu $t2, $t2, 1
  /* 10ABC0 8018DCD0 24630030 */     addiu $v1, $v1, 0x30
  .L8018DCD4:
  /* 10ABC4 8018DCD4 5462FFE7 */      bnel $v1, $v0, .L8018DC74
  /* 10ABC8 8018DCD8 8FAE0044 */        lw $t6, 0x44($sp)
  .L8018DCDC:
  /* 10ABCC 8018DCDC 24030002 */     addiu $v1, $zero, 2
  .L8018DCE0:
  /* 10ABD0 8018DCE0 29410002 */      slti $at, $t2, 2
  /* 10ABD4 8018DCE4 10200003 */      beqz $at, .L8018DCF4
  /* 10ABD8 8018DCE8 00000000 */       nop 
  /* 10ABDC 8018DCEC 10000046 */         b .L8018DE08
  /* 10ABE0 8018DCF0 00001025 */        or $v0, $zero, $zero
  .L8018DCF4:
  /* 10ABE4 8018DCF4 1940003D */      blez $t2, .L8018DDEC
  /* 10ABE8 8018DCF8 00002825 */        or $a1, $zero, $zero
  /* 10ABEC 8018DCFC 241301D0 */     addiu $s3, $zero, 0x1d0
  /* 10ABF0 8018DD00 00001825 */        or $v1, $zero, $zero
  .L8018DD04:
  /* 10ABF4 8018DD04 01A03025 */        or $a2, $t5, $zero
  .L8018DD08:
  /* 10ABF8 8018DD08 90D00022 */       lbu $s0, 0x22($a2)
  /* 10ABFC 8018DD0C 50F00018 */      beql $a3, $s0, .L8018DD70
  /* 10AC00 8018DD10 90D00096 */       lbu $s0, 0x96($a2)
  /* 10AC04 8018DD14 00A90019 */     multu $a1, $t1
  /* 10AC08 8018DD18 90CE0024 */       lbu $t6, 0x24($a2)
  /* 10AC0C 8018DD1C 00838821 */      addu $s1, $a0, $v1
  /* 10AC10 8018DD20 321200FF */      andi $s2, $s0, 0xff
  /* 10AC14 8018DD24 0000C812 */      mflo $t9
  /* 10AC18 8018DD28 0119C021 */      addu $t8, $t0, $t9
  /* 10AC1C 8018DD2C 930F0008 */       lbu $t7, 8($t8)
  /* 10AC20 8018DD30 55CF000F */      bnel $t6, $t7, .L8018DD70
  /* 10AC24 8018DD34 90D00096 */       lbu $s0, 0x96($a2)
  /* 10AC28 8018DD38 12400005 */      beqz $s2, .L8018DD50
  /* 10AC2C 8018DD3C A2300022 */        sb $s0, 0x22($s1)
  /* 10AC30 8018DD40 524B0008 */      beql $s2, $t3, .L8018DD64
  /* 10AC34 8018DD44 908E0005 */       lbu $t6, 5($a0) # D_800A4EF8 + 5
  /* 10AC38 8018DD48 10000009 */         b .L8018DD70
  /* 10AC3C 8018DD4C 90D00096 */       lbu $s0, 0x96($a2)
  .L8018DD50:
  /* 10AC40 8018DD50 90990004 */       lbu $t9, 4($a0) # D_800A4EF8 + 4
  /* 10AC44 8018DD54 27380001 */     addiu $t8, $t9, 1
  /* 10AC48 8018DD58 10000004 */         b .L8018DD6C
  /* 10AC4C 8018DD5C A0980004 */        sb $t8, 4($a0) # D_800A4EF8 + 4
  /* 10AC50 8018DD60 908E0005 */       lbu $t6, 5($a0) # D_800A4EF8 + 5
  .L8018DD64:
  /* 10AC54 8018DD64 25CF0001 */     addiu $t7, $t6, 1
  /* 10AC58 8018DD68 A08F0005 */        sb $t7, 5($a0) # D_800A4EF8 + 5
  .L8018DD6C:
  /* 10AC5C 8018DD6C 90D00096 */       lbu $s0, 0x96($a2)
  .L8018DD70:
  /* 10AC60 8018DD70 50F00018 */      beql $a3, $s0, .L8018DDD4
  /* 10AC64 8018DD74 246300E8 */     addiu $v1, $v1, 0xe8
  /* 10AC68 8018DD78 00A90019 */     multu $a1, $t1
  /* 10AC6C 8018DD7C 90D90098 */       lbu $t9, 0x98($a2)
  /* 10AC70 8018DD80 00838821 */      addu $s1, $a0, $v1
  /* 10AC74 8018DD84 320200FF */      andi $v0, $s0, 0xff
  /* 10AC78 8018DD88 0000C012 */      mflo $t8
  /* 10AC7C 8018DD8C 01187021 */      addu $t6, $t0, $t8
  /* 10AC80 8018DD90 91CF0008 */       lbu $t7, 8($t6)
  /* 10AC84 8018DD94 572F000F */      bnel $t9, $t7, .L8018DDD4
  /* 10AC88 8018DD98 246300E8 */     addiu $v1, $v1, 0xe8
  /* 10AC8C 8018DD9C 10400005 */      beqz $v0, .L8018DDB4
  /* 10AC90 8018DDA0 A2300096 */        sb $s0, 0x96($s1)
  /* 10AC94 8018DDA4 504B0008 */      beql $v0, $t3, .L8018DDC8
  /* 10AC98 8018DDA8 90990005 */       lbu $t9, 5($a0) # D_800A4EF8 + 5
  /* 10AC9C 8018DDAC 10000009 */         b .L8018DDD4
  /* 10ACA0 8018DDB0 246300E8 */     addiu $v1, $v1, 0xe8
  .L8018DDB4:
  /* 10ACA4 8018DDB4 90980004 */       lbu $t8, 4($a0) # D_800A4EF8 + 4
  /* 10ACA8 8018DDB8 270E0001 */     addiu $t6, $t8, 1
  /* 10ACAC 8018DDBC 10000004 */         b .L8018DDD0
  /* 10ACB0 8018DDC0 A08E0004 */        sb $t6, 4($a0) # D_800A4EF8 + 4
  /* 10ACB4 8018DDC4 90990005 */       lbu $t9, 5($a0) # D_800A4EF8 + 5
  .L8018DDC8:
  /* 10ACB8 8018DDC8 272F0001 */     addiu $t7, $t9, 1
  /* 10ACBC 8018DDCC A08F0005 */        sb $t7, 5($a0) # D_800A4EF8 + 5
  .L8018DDD0:
  /* 10ACC0 8018DDD0 246300E8 */     addiu $v1, $v1, 0xe8
  .L8018DDD4:
  /* 10ACC4 8018DDD4 1473FFCC */       bne $v1, $s3, .L8018DD08
  /* 10ACC8 8018DDD8 24C600E8 */     addiu $a2, $a2, 0xe8
  /* 10ACCC 8018DDDC 24A50001 */     addiu $a1, $a1, 1
  /* 10ACD0 8018DDE0 54AAFFC8 */      bnel $a1, $t2, .L8018DD04
  /* 10ACD4 8018DDE4 00001825 */        or $v1, $zero, $zero
  /* 10ACD8 8018DDE8 24030002 */     addiu $v1, $zero, 2
  .L8018DDEC:
  /* 10ACDC 8018DDEC 9098001D */       lbu $t8, 0x1d($a0) # D_800A4EF8 + 29
  /* 10ACE0 8018DDF0 A0830003 */        sb $v1, 3($a0) # D_800A4EF8 + 3
  /* 10ACE4 8018DDF4 3C01800A */       lui $at, %hi((gSceneData + 0x10))
  /* 10ACE8 8018DDF8 330EFF7F */      andi $t6, $t8, 0xff7f
  /* 10ACEC 8018DDFC A08E001D */        sb $t6, 0x1d($a0) # D_800A4EF8 + 29
  /* 10ACF0 8018DE00 A02C4AE0 */        sb $t4, %lo((gSceneData + 0x10))($at)
  /* 10ACF4 8018DE04 24020001 */     addiu $v0, $zero, 1
  .L8018DE08:
  /* 10ACF8 8018DE08 8FB00008 */        lw $s0, 8($sp)
  /* 10ACFC 8018DE0C 8FB1000C */        lw $s1, 0xc($sp)
  /* 10AD00 8018DE10 8FB20010 */        lw $s2, 0x10($sp)
  /* 10AD04 8018DE14 8FB30014 */        lw $s3, 0x14($sp)
  /* 10AD08 8018DE18 03E00008 */        jr $ra
  /* 10AD0C 8018DE1C 27BD0090 */     addiu $sp, $sp, 0x90

glabel func_ovl4_8018DE20
  /* 10AD10 8018DE20 27BDFF58 */     addiu $sp, $sp, -0xa8
  /* 10AD14 8018DE24 AFBF003C */        sw $ra, 0x3c($sp)
  /* 10AD18 8018DE28 3C01800A */       lui $at, %hi((gSceneData + 0x12))
  /* 10AD1C 8018DE2C AFB40038 */        sw $s4, 0x38($sp)
  /* 10AD20 8018DE30 AFB30034 */        sw $s3, 0x34($sp)
  /* 10AD24 8018DE34 AFB20030 */        sw $s2, 0x30($sp)
  /* 10AD28 8018DE38 AFB1002C */        sw $s1, 0x2c($sp)
  /* 10AD2C 8018DE3C AFB00028 */        sw $s0, 0x28($sp)
  /* 10AD30 8018DE40 0C0638CC */       jal func_ovl4_8018E330
  /* 10AD34 8018DE44 A0204AE2 */        sb $zero, %lo((gSceneData + 0x12))($at)
  /* 10AD38 8018DE48 240E00FF */     addiu $t6, $zero, 0xff
  /* 10AD3C 8018DE4C AFAE0010 */        sw $t6, 0x10($sp)
  /* 10AD40 8018DE50 24040009 */     addiu $a0, $zero, 9
  /* 10AD44 8018DE54 3C058000 */       lui $a1, 0x8000
  /* 10AD48 8018DE58 24060064 */     addiu $a2, $zero, 0x64
  /* 10AD4C 8018DE5C 0C002E7F */       jal func_8000B9FC
  /* 10AD50 8018DE60 24070001 */     addiu $a3, $zero, 1
  /* 10AD54 8018DE64 0C045624 */       jal func_ovl2_80115890
  /* 10AD58 8018DE68 00000000 */       nop 
  /* 10AD5C 8018DE6C 0C03B04C */       jal func_ovl2_800EC130
  /* 10AD60 8018DE70 00000000 */       nop 
  /* 10AD64 8018DE74 0C03F0A1 */       jal func_ovl2_800FC284
  /* 10AD68 8018DE78 00000000 */       nop 
  /* 10AD6C 8018DE7C 2404000A */     addiu $a0, $zero, 0xa
  /* 10AD70 8018DE80 2405000A */     addiu $a1, $zero, 0xa
  /* 10AD74 8018DE84 24060136 */     addiu $a2, $zero, 0x136
  /* 10AD78 8018DE88 0C043966 */       jal func_ovl2_8010E598
  /* 10AD7C 8018DE8C 240700E6 */     addiu $a3, $zero, 0xe6
  /* 10AD80 8018DE90 0C0436D5 */       jal func_ovl2_8010DB54
  /* 10AD84 8018DE94 00000000 */       nop 
  /* 10AD88 8018DE98 0C0412F7 */       jal func_ovl2_80104BDC
  /* 10AD8C 8018DE9C 00000000 */       nop 
  /* 10AD90 8018DEA0 0C0436C0 */       jal func_ovl2_8010DB00
  /* 10AD94 8018DEA4 00000000 */       nop 
  /* 10AD98 8018DEA8 0C05B7A8 */       jal itManager_AllocUserData
  /* 10AD9C 8018DEAC 00000000 */       nop 
  /* 10ADA0 8018DEB0 0C041580 */       jal func_ovl2_80105600
  /* 10ADA4 8018DEB4 00000000 */       nop 
  /* 10ADA8 8018DEB8 24040002 */     addiu $a0, $zero, 2
  /* 10ADAC 8018DEBC 0C035C65 */       jal func_ovl2_800D7194
  /* 10ADB0 8018DEC0 24050004 */     addiu $a1, $zero, 4
  /* 10ADB4 8018DEC4 0C05952C */       jal wpManager_AllocUserData
  /* 10ADB8 8018DEC8 00000000 */       nop 
  /* 10ADBC 8018DECC 0C03F4C0 */       jal efManager_AllocUserData
  /* 10ADC0 8018DED0 00000000 */       nop 
  /* 10ADC4 8018DED4 0C04577A */       jal func_ovl2_80115DE8
  /* 10ADC8 8018DED8 240400FF */     addiu $a0, $zero, 0xff
  /* 10ADCC 8018DEDC 0C0455B9 */       jal func_ovl2_801156E4
  /* 10ADD0 8018DEE0 00000000 */       nop 
  /* 10ADD4 8018DEE4 0C0594F8 */       jal func_ovl3_801653E0
  /* 10ADD8 8018DEE8 00000000 */       nop 
  /* 10ADDC 8018DEEC 3C12800A */       lui $s2, %hi(gpBattleState)
  /* 10ADE0 8018DEF0 265250E8 */     addiu $s2, $s2, %lo(gpBattleState)
  /* 10ADE4 8018DEF4 00008025 */        or $s0, $zero, $zero
  /* 10ADE8 8018DEF8 00008825 */        or $s1, $zero, $zero
  /* 10ADEC 8018DEFC 27B40054 */     addiu $s4, $sp, 0x54
  .L8018DF00:
  /* 10ADF0 8018DF00 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 10ADF4 8018DF04 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 10ADF8 8018DF08 25E9003C */     addiu $t1, $t7, 0x3c
  /* 10ADFC 8018DF0C 02804025 */        or $t0, $s4, $zero
  .L8018DF10:
  /* 10AE00 8018DF10 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 10AE04 8018DF14 25EF000C */     addiu $t7, $t7, 0xc
  /* 10AE08 8018DF18 2508000C */     addiu $t0, $t0, 0xc
  /* 10AE0C 8018DF1C AD19FFF4 */        sw $t9, -0xc($t0)
  /* 10AE10 8018DF20 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 10AE14 8018DF24 AD18FFF8 */        sw $t8, -8($t0)
  /* 10AE18 8018DF28 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 10AE1C 8018DF2C 15E9FFF8 */       bne $t7, $t1, .L8018DF10
  /* 10AE20 8018DF30 AD19FFFC */        sw $t9, -4($t0)
  /* 10AE24 8018DF34 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 10AE28 8018DF38 00106080 */       sll $t4, $s0, 2
  /* 10AE2C 8018DF3C 01906021 */      addu $t4, $t4, $s0
  /* 10AE30 8018DF40 AD190000 */        sw $t9, ($t0)
  /* 10AE34 8018DF44 8E4A0000 */        lw $t2, ($s2) # gpBattleState + 0
  /* 10AE38 8018DF48 3C0D8004 */       lui $t5, %hi(gContInput)
  /* 10AE3C 8018DF4C 24010002 */     addiu $at, $zero, 2
  /* 10AE40 8018DF50 01512821 */      addu $a1, $t2, $s1
  /* 10AE44 8018DF54 90AB0022 */       lbu $t3, 0x22($a1)
  /* 10AE48 8018DF58 25AD5228 */     addiu $t5, $t5, %lo(gContInput)
  /* 10AE4C 8018DF5C 000C6040 */       sll $t4, $t4, 1
  /* 10AE50 8018DF60 11610039 */       beq $t3, $at, .L8018E048
  /* 10AE54 8018DF64 018D9821 */      addu $s3, $t4, $t5
  /* 10AE58 8018DF68 0C035E1B */       jal func_ovl2_800D786C
  /* 10AE5C 8018DF6C 90A40023 */       lbu $a0, 0x23($a1)
  /* 10AE60 8018DF70 8E4E0000 */        lw $t6, ($s2) # gpBattleState + 0
  /* 10AE64 8018DF74 02002025 */        or $a0, $s0, $zero
  /* 10AE68 8018DF78 27A50058 */     addiu $a1, $sp, 0x58
  /* 10AE6C 8018DF7C 01D14821 */      addu $t1, $t6, $s1
  /* 10AE70 8018DF80 912F0023 */       lbu $t7, 0x23($t1)
  /* 10AE74 8018DF84 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 10AE78 8018DF88 AFAF0054 */        sw $t7, 0x54($sp)
  /* 10AE7C 8018DF8C 0C063438 */       jal func_ovl4_8018D0E0
  /* 10AE80 8018DF90 02002025 */        or $a0, $s0, $zero
  /* 10AE84 8018DF94 8E430000 */        lw $v1, ($s2) # gpBattleState + 0
  /* 10AE88 8018DF98 AFA20064 */        sw $v0, 0x64($sp)
  /* 10AE8C 8018DF9C 240C0002 */     addiu $t4, $zero, 2
  /* 10AE90 8018DFA0 00712821 */      addu $a1, $v1, $s1
  /* 10AE94 8018DFA4 90A80025 */       lbu $t0, 0x25($a1)
  /* 10AE98 8018DFA8 A3B00069 */        sb $s0, 0x69($sp)
  /* 10AE9C 8018DFAC 240B0001 */     addiu $t3, $zero, 1
  /* 10AEA0 8018DFB0 A3A80068 */        sb $t0, 0x68($sp)
  /* 10AEA4 8018DFB4 90790005 */       lbu $t9, 5($v1)
  /* 10AEA8 8018DFB8 90780004 */       lbu $t8, 4($v1)
  /* 10AEAC 8018DFBC 03195021 */      addu $t2, $t8, $t9
  /* 10AEB0 8018DFC0 29410003 */      slti $at, $t2, 3
  /* 10AEB4 8018DFC4 50200004 */      beql $at, $zero, .L8018DFD8
  /* 10AEB8 8018DFC8 A3AC006A */        sb $t4, 0x6a($sp)
  /* 10AEBC 8018DFCC 10000002 */         b .L8018DFD8
  /* 10AEC0 8018DFD0 A3AB006A */        sb $t3, 0x6a($sp)
  /* 10AEC4 8018DFD4 A3AC006A */        sb $t4, 0x6a($sp)
  .L8018DFD8:
  /* 10AEC8 8018DFD8 90AD0026 */       lbu $t5, 0x26($a1)
  /* 10AECC 8018DFDC 93B90073 */       lbu $t9, 0x73($sp)
  /* 10AED0 8018DFE0 2408012C */     addiu $t0, $zero, 0x12c
  /* 10AED4 8018DFE4 A3AD006B */        sb $t5, 0x6b($sp)
  /* 10AED8 8018DFE8 90AE0027 */       lbu $t6, 0x27($a1)
  /* 10AEDC 8018DFEC 372A0080 */       ori $t2, $t9, 0x80
  /* 10AEE0 8018DFF0 A3AE006C */        sb $t6, 0x6c($sp)
  /* 10AEE4 8018DFF4 90A90021 */       lbu $t1, 0x21($a1)
  /* 10AEE8 8018DFF8 A3A9006D */        sb $t1, 0x6d($sp)
  /* 10AEEC 8018DFFC 90AF0020 */       lbu $t7, 0x20($a1)
  /* 10AEF0 8018E000 A3A0006F */        sb $zero, 0x6f($sp)
  /* 10AEF4 8018E004 AFA80078 */        sw $t0, 0x78($sp)
  /* 10AEF8 8018E008 A3AA0073 */        sb $t2, 0x73($sp)
  /* 10AEFC 8018E00C A3AF006E */        sb $t7, 0x6e($sp)
  /* 10AF00 8018E010 90AB0022 */       lbu $t3, 0x22($a1)
  /* 10AF04 8018E014 AFB30080 */        sw $s3, 0x80($sp)
  /* 10AF08 8018E018 AFAB007C */        sw $t3, 0x7c($sp)
  /* 10AF0C 8018E01C 0C035E2D */       jal func_ovl2_800D78B4
  /* 10AF10 8018E020 90A40023 */       lbu $a0, 0x23($a1)
  /* 10AF14 8018E024 AFA2008C */        sw $v0, 0x8c($sp)
  /* 10AF18 8018E028 0C035FCF */       jal ftManager_CreateFighter
  /* 10AF1C 8018E02C 02802025 */        or $a0, $s4, $zero
  /* 10AF20 8018E030 02002025 */        or $a0, $s0, $zero
  /* 10AF24 8018E034 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 10AF28 8018E038 00402825 */        or $a1, $v0, $zero
  /* 10AF2C 8018E03C 8E4C0000 */        lw $t4, ($s2) # gpBattleState + 0
  /* 10AF30 8018E040 01916821 */      addu $t5, $t4, $s1
  /* 10AF34 8018E044 A1A00029 */        sb $zero, 0x29($t5)
  .L8018E048:
  /* 10AF38 8018E048 26100001 */     addiu $s0, $s0, 1
  /* 10AF3C 8018E04C 24010004 */     addiu $at, $zero, 4
  /* 10AF40 8018E050 1601FFAB */       bne $s0, $at, .L8018DF00
  /* 10AF44 8018E054 26310074 */     addiu $s1, $s1, 0x74
  /* 10AF48 8018E058 0C035E0B */       jal func_ovl2_800D782C
  /* 10AF4C 8018E05C 00000000 */       nop 
  /* 10AF50 8018E060 0C045256 */       jal func_ovl2_80114958
  /* 10AF54 8018E064 00000000 */       nop 
  /* 10AF58 8018E068 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 10AF5C 8018E06C 00000000 */       nop 
  /* 10AF60 8018E070 0C044639 */       jal func_ovl2_801118E4
  /* 10AF64 8018E074 00000000 */       nop 
  /* 10AF68 8018E078 0C043869 */       jal func_ovl2_8010E1A4
  /* 10AF6C 8018E07C 00000000 */       nop 
  /* 10AF70 8018E080 0C044510 */       jal func_ovl2_80111440
  /* 10AF74 8018E084 00000000 */       nop 
  /* 10AF78 8018E088 0C043771 */       jal func_ovl2_8010DDC4
  /* 10AF7C 8018E08C 00000000 */       nop 
  /* 10AF80 8018E090 0C0438DD */       jal func_ovl2_8010E374
  /* 10AF84 8018E094 00000000 */       nop 
  /* 10AF88 8018E098 0C043926 */       jal func_ovl2_8010E498
  /* 10AF8C 8018E09C 00000000 */       nop 
  /* 10AF90 8018E0A0 0C0446F9 */       jal func_ovl2_80111BE4
  /* 10AF94 8018E0A4 00000000 */       nop 
  /* 10AF98 8018E0A8 0C043CE8 */       jal func_ovl2_8010F3A0
  /* 10AF9C 8018E0AC 00000000 */       nop 
  /* 10AFA0 8018E0B0 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 10AFA4 8018E0B4 00000000 */       nop 
  /* 10AFA8 8018E0B8 0C044145 */       jal func_ovl2_80110514
  /* 10AFAC 8018E0BC 00000000 */       nop 
  /* 10AFB0 8018E0C0 0C044ADD */       jal func_ovl2_80112B74
  /* 10AFB4 8018E0C4 00000000 */       nop 
  /* 10AFB8 8018E0C8 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 10AFBC 8018E0CC 00000000 */       nop 
  /* 10AFC0 8018E0D0 0C009A70 */       jal func_800269C0
  /* 10AFC4 8018E0D4 24040272 */     addiu $a0, $zero, 0x272
  /* 10AFC8 8018E0D8 3C048011 */       lui $a0, %hi(func_ovl2_80114D98)
  /* 10AFCC 8018E0DC 0C044CE6 */       jal func_ovl2_80113398
  /* 10AFD0 8018E0E0 24844D98 */     addiu $a0, $a0, %lo(func_ovl2_80114D98)
  /* 10AFD4 8018E0E4 0C044BDA */       jal func_ovl2_80112F68
  /* 10AFD8 8018E0E8 00000000 */       nop 
  /* 10AFDC 8018E0EC 3C0E8019 */       lui $t6, %hi(D_ovl4_8018E3D4)
  /* 10AFE0 8018E0F0 25CEE3D4 */     addiu $t6, $t6, %lo(D_ovl4_8018E3D4)
  /* 10AFE4 8018E0F4 8DCF0000 */        lw $t7, ($t6) # D_ovl4_8018E3D4 + 0
  /* 10AFE8 8018E0F8 27A70050 */     addiu $a3, $sp, 0x50
  /* 10AFEC 8018E0FC 2408000C */     addiu $t0, $zero, 0xc
  /* 10AFF0 8018E100 ACEF0000 */        sw $t7, ($a3)
  /* 10AFF4 8018E104 24180001 */     addiu $t8, $zero, 1
  /* 10AFF8 8018E108 AFB80014 */        sw $t8, 0x14($sp)
  /* 10AFFC 8018E10C AFA00018 */        sw $zero, 0x18($sp)
  /* 10B000 8018E110 AFA80010 */        sw $t0, 0x10($sp)
  /* 10B004 8018E114 240403FD */     addiu $a0, $zero, 0x3fd
  /* 10B008 8018E118 2405000D */     addiu $a1, $zero, 0xd
  /* 10B00C 8018E11C 0C035018 */       jal func_ovl0_800D4060
  /* 10B010 8018E120 2406000A */     addiu $a2, $zero, 0xa
  /* 10B014 8018E124 8FBF003C */        lw $ra, 0x3c($sp)
  /* 10B018 8018E128 8FB00028 */        lw $s0, 0x28($sp)
  /* 10B01C 8018E12C 8FB1002C */        lw $s1, 0x2c($sp)
  /* 10B020 8018E130 8FB20030 */        lw $s2, 0x30($sp)
  /* 10B024 8018E134 8FB30034 */        lw $s3, 0x34($sp)
  /* 10B028 8018E138 8FB40038 */        lw $s4, 0x38($sp)
  /* 10B02C 8018E13C 03E00008 */        jr $ra
  /* 10B030 8018E140 27BD00A8 */     addiu $sp, $sp, 0xa8

glabel func_ovl4_8018E144
  /* 10B034 8018E144 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B038 8018E148 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B03C 8018E14C 8C830000 */        lw $v1, ($a0)
  /* 10B040 8018E150 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 10B044 8018E154 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 10B048 8018E158 246E0008 */     addiu $t6, $v1, 8
  /* 10B04C 8018E15C AC8E0000 */        sw $t6, ($a0)
  /* 10B050 8018E160 3C180002 */       lui $t8, 2
  /* 10B054 8018E164 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 10B058 8018E168 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 10B05C 8018E16C AC780004 */        sw $t8, 4($v1)
  /* 10B060 8018E170 AC6F0000 */        sw $t7, ($v1)
  /* 10B064 8018E174 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 10B068 8018E178 0C03F2DC */       jal func_ovl2_800FCB70
  /* 10B06C 8018E17C 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 10B070 8018E180 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B074 8018E184 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10B078 8018E188 03E00008 */        jr $ra
  /* 10B07C 8018E18C 00000000 */       nop 

glabel vs_battle_entry
  /* 10B080 8018E190 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10B084 8018E194 3C0E800A */       lui $t6, %hi(D_800A4D08)
  /* 10B088 8018E198 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 10B08C 8018E19C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B090 8018E1A0 25CE4D08 */     addiu $t6, $t6, %lo(D_800A4D08)
  /* 10B094 8018E1A4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B098 8018E1A8 AC4E0000 */        sw $t6, ($v0) # gpBattleState + 0
  /* 10B09C 8018E1AC 240F0001 */     addiu $t7, $zero, 1
  /* 10B0A0 8018E1B0 A1CF0000 */        sb $t7, ($t6) # D_800A4D08 + 0
  /* 10B0A4 8018E1B4 3C19800A */       lui $t9, %hi((gSceneData + 0xF))
  /* 10B0A8 8018E1B8 93394ADF */       lbu $t9, %lo((gSceneData + 0xF))($t9)
  /* 10B0AC 8018E1BC 8C480000 */        lw $t0, ($v0) # gpBattleState + 0
  /* 10B0B0 8018E1C0 3C09800A */       lui $t1, %hi((gSaveData + 0x5e2))
  /* 10B0B4 8018E1C4 3C048019 */       lui $a0, %hi(D_ovl4_8018E3D8)
  /* 10B0B8 8018E1C8 A1190001 */        sb $t9, 1($t0)
  /* 10B0BC 8018E1CC 91294AC2 */       lbu $t1, %lo((gSaveData + 0x5e2))($t1)
  /* 10B0C0 8018E1D0 3C0C800A */       lui $t4, %hi(D_NF_800A5240)
  /* 10B0C4 8018E1D4 2484E3D8 */     addiu $a0, $a0, %lo(D_ovl4_8018E3D8)
  /* 10B0C8 8018E1D8 312A0008 */      andi $t2, $t1, 8
  /* 10B0CC 8018E1DC 11400003 */      beqz $t2, .L8018E1EC
  /* 10B0D0 8018E1E0 258C5240 */     addiu $t4, $t4, %lo(D_NF_800A5240)
  /* 10B0D4 8018E1E4 8C4B0000 */        lw $t3, ($v0) # gpBattleState + 0
  /* 10B0D8 8018E1E8 A1600001 */        sb $zero, 1($t3)
  .L8018E1EC:
  /* 10B0DC 8018E1EC 258DE700 */     addiu $t5, $t4, -0x1900
  /* 10B0E0 8018E1F0 0C001C09 */       jal func_80007024
  /* 10B0E4 8018E1F4 AC8D000C */        sw $t5, 0xc($a0) # D_ovl4_8018E3D8 + 12
  /* 10B0E8 8018E1F8 3C0E8039 */       lui $t6, %hi(D_NF_80392A00)
  /* 10B0EC 8018E1FC 3C0F8019 */       lui $t7, %hi(D_NF_8018E7E0)
  /* 10B0F0 8018E200 3C048019 */       lui $a0, %hi(D_ovl4_8018E3F4)
  /* 10B0F4 8018E204 25EFE7E0 */     addiu $t7, $t7, %lo(D_NF_8018E7E0)
  /* 10B0F8 8018E208 25CE2A00 */     addiu $t6, $t6, %lo(D_NF_80392A00)
  /* 10B0FC 8018E20C 3C198019 */       lui $t9, %hi(func_ovl4_8018D228)
  /* 10B100 8018E210 2484E3F4 */     addiu $a0, $a0, %lo(D_ovl4_8018E3F4)
  /* 10B104 8018E214 01CFC023 */      subu $t8, $t6, $t7
  /* 10B108 8018E218 2739D228 */     addiu $t9, $t9, %lo(func_ovl4_8018D228)
  /* 10B10C 8018E21C AC980010 */        sw $t8, 0x10($a0) # D_ovl4_8018E3F4 + 16
  /* 10B110 8018E220 0C0289A6 */       jal func_800A2698
  /* 10B114 8018E224 AC990088 */        sw $t9, 0x88($a0) # D_ovl4_8018E3F4 + 136
  /* 10B118 8018E228 0C00829D */       jal func_80020A74
  /* 10B11C 8018E22C 00000000 */       nop 
  /* 10B120 8018E230 0C008356 */       jal func_80020D58
  /* 10B124 8018E234 00002025 */        or $a0, $zero, $zero
  /* 10B128 8018E238 50400006 */      beql $v0, $zero, .L8018E254
  /* 10B12C 8018E23C 00002025 */        or $a0, $zero, $zero
  .L8018E240:
  /* 10B130 8018E240 0C008356 */       jal func_80020D58
  /* 10B134 8018E244 00002025 */        or $a0, $zero, $zero
  /* 10B138 8018E248 1440FFFD */      bnez $v0, .L8018E240
  /* 10B13C 8018E24C 00000000 */       nop 
  /* 10B140 8018E250 00002025 */        or $a0, $zero, $zero
  .L8018E254:
  /* 10B144 8018E254 0C0082CE */       jal func_80020B38
  /* 10B148 8018E258 24057800 */     addiu $a1, $zero, 0x7800
  /* 10B14C 8018E25C 0C0099A8 */       jal func_800266A0
  /* 10B150 8018E260 00000000 */       nop 
  /* 10B154 8018E264 0C0455FB */       jal func_ovl2_801157EC
  /* 10B158 8018E268 00000000 */       nop 
  /* 10B15C 8018E26C 3C02800A */       lui $v0, %hi(gSceneData)
  /* 10B160 8018E270 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 10B164 8018E274 90480012 */       lbu $t0, 0x12($v0) # gSceneData + 18
  /* 10B168 8018E278 15000022 */      bnez $t0, .L8018E304
  /* 10B16C 8018E27C 00000000 */       nop 
  /* 10B170 8018E280 0C063578 */       jal func_ovl4_8018D5E0
  /* 10B174 8018E284 00000000 */       nop 
  /* 10B178 8018E288 1040001E */      beqz $v0, .L8018E304
  /* 10B17C 8018E28C 3C048019 */       lui $a0, %hi(D_ovl4_8018E3F4)
  /* 10B180 8018E290 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10B184 8018E294 3C09800A */       lui $t1, %hi(D_800A4EF8)
  /* 10B188 8018E298 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 10B18C 8018E29C 25294EF8 */     addiu $t1, $t1, %lo(D_800A4EF8)
  /* 10B190 8018E2A0 AC490000 */        sw $t1, ($v0) # gpBattleState + 0
  /* 10B194 8018E2A4 240A0001 */     addiu $t2, $zero, 1
  /* 10B198 8018E2A8 3C0C8019 */       lui $t4, %hi(func_ovl4_8018DE20)
  /* 10B19C 8018E2AC 2484E3F4 */     addiu $a0, $a0, %lo(D_ovl4_8018E3F4)
  /* 10B1A0 8018E2B0 A12A0000 */        sb $t2, ($t1) # D_800A4EF8 + 0
  /* 10B1A4 8018E2B4 258CDE20 */     addiu $t4, $t4, %lo(func_ovl4_8018DE20)
  /* 10B1A8 8018E2B8 0C0289A6 */       jal func_800A2698
  /* 10B1AC 8018E2BC AC8C0088 */        sw $t4, 0x88($a0) # D_ovl4_8018E3F4 + 136
  /* 10B1B0 8018E2C0 0C00829D */       jal func_80020A74
  /* 10B1B4 8018E2C4 00000000 */       nop 
  /* 10B1B8 8018E2C8 0C008356 */       jal func_80020D58
  /* 10B1BC 8018E2CC 00002025 */        or $a0, $zero, $zero
  /* 10B1C0 8018E2D0 50400006 */      beql $v0, $zero, .L8018E2EC
  /* 10B1C4 8018E2D4 00002025 */        or $a0, $zero, $zero
  .L8018E2D8:
  /* 10B1C8 8018E2D8 0C008356 */       jal func_80020D58
  /* 10B1CC 8018E2DC 00002025 */        or $a0, $zero, $zero
  /* 10B1D0 8018E2E0 1440FFFD */      bnez $v0, .L8018E2D8
  /* 10B1D4 8018E2E4 00000000 */       nop 
  /* 10B1D8 8018E2E8 00002025 */        or $a0, $zero, $zero
  .L8018E2EC:
  /* 10B1DC 8018E2EC 0C0082CE */       jal func_80020B38
  /* 10B1E0 8018E2F0 24057800 */     addiu $a1, $zero, 0x7800
  /* 10B1E4 8018E2F4 0C0099A8 */       jal func_800266A0
  /* 10B1E8 8018E2F8 00000000 */       nop 
  /* 10B1EC 8018E2FC 0C0455FB */       jal func_ovl2_801157EC
  /* 10B1F0 8018E300 00000000 */       nop 
  .L8018E304:
  /* 10B1F4 8018E304 3C02800A */       lui $v0, %hi(gSceneData)
  /* 10B1F8 8018E308 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B1FC 8018E30C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 10B200 8018E310 904D0000 */       lbu $t5, ($v0) # gSceneData + 0
  /* 10B204 8018E314 240E0018 */     addiu $t6, $zero, 0x18
  /* 10B208 8018E318 A04E0000 */        sb $t6, ($v0) # gSceneData + 0
  /* 10B20C 8018E31C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10B210 8018E320 03E00008 */        jr $ra
  /* 10B214 8018E324 A04D0001 */        sb $t5, 1($v0) # gSceneData + 1

  /* 10B218 8018E328 00000000 */       nop 
  /* 10B21C 8018E32C 00000000 */       nop 

# Likely start of new file
glabel func_ovl4_8018E330
  /* 10B220 8018E330 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 10B224 8018E334 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 10B228 8018E338 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 10B22C 8018E33C 3C188019 */       lui $t8, %hi(D_ovl4_8018E480)
  /* 10B230 8018E340 3C088019 */       lui $t0, %hi(D_ovl4_8018E7A0)
  /* 10B234 8018E344 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B238 8018E348 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 10B23C 8018E34C 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 10B240 8018E350 2718E480 */     addiu $t8, $t8, %lo(D_ovl4_8018E480)
  /* 10B244 8018E354 24190064 */     addiu $t9, $zero, 0x64
  /* 10B248 8018E358 2508E7A0 */     addiu $t0, $t0, %lo(D_ovl4_8018E7A0)
  /* 10B24C 8018E35C 24090007 */     addiu $t1, $zero, 7
  /* 10B250 8018E360 AFAE0020 */        sw $t6, 0x20($sp)
  /* 10B254 8018E364 AFAF0024 */        sw $t7, 0x24($sp)
  /* 10B258 8018E368 AFA00028 */        sw $zero, 0x28($sp)
  /* 10B25C 8018E36C AFA0002C */        sw $zero, 0x2c($sp)
  /* 10B260 8018E370 AFB80030 */        sw $t8, 0x30($sp)
  /* 10B264 8018E374 AFB90034 */        sw $t9, 0x34($sp)
  /* 10B268 8018E378 AFA80038 */        sw $t0, 0x38($sp)
  /* 10B26C 8018E37C AFA9003C */        sw $t1, 0x3c($sp)
  /* 10B270 8018E380 0C0337DE */       jal rldm_initialize
  /* 10B274 8018E384 27A40020 */     addiu $a0, $sp, 0x20
  /* 10B278 8018E388 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B27C 8018E38C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B280 8018E390 0C0337BB */       jal rldm_bytes_need_to_load
  /* 10B284 8018E394 24050008 */     addiu $a1, $zero, 8
  /* 10B288 8018E398 00402025 */        or $a0, $v0, $zero
  /* 10B28C 8018E39C 0C001260 */       jal hal_alloc
  /* 10B290 8018E3A0 24050010 */     addiu $a1, $zero, 0x10
  /* 10B294 8018E3A4 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B298 8018E3A8 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 10B29C 8018E3AC 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 10B2A0 8018E3B0 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B2A4 8018E3B4 24050008 */     addiu $a1, $zero, 8
  /* 10B2A8 8018E3B8 0C033781 */       jal rldm_load_files_into
  /* 10B2AC 8018E3BC 00403825 */        or $a3, $v0, $zero
  /* 10B2B0 8018E3C0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B2B4 8018E3C4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 10B2B8 8018E3C8 03E00008 */        jr $ra
  /* 10B2BC 8018E3CC 00000000 */       nop 
#
#glabel D_ovl4_8018E3D0   # Routine parsed as data
#  /* 10B2C0 8018E3D0 00000000 */       nop 
#glabel D_ovl4_8018E3D4   # Routine parsed as data
#  /* 10B2C4 8018E3D4 00000000 */       nop 
#glabel D_ovl4_8018E3D8   # Routine parsed as data
#  /* 10B2C8 8018E3D8 80392A00 */        lb $t9, 0x2a00($at)
#  /* 10B2CC 8018E3DC 803B6900 */        lb $k1, 0x6900($at)
#  /* 10B2D0 8018E3E0 803DA800 */        lb $sp, -0x5800($at)
#  /* 10B2D4 8018E3E4 00000000 */       nop 
#  /* 10B2D8 8018E3E8 00000140 */     pause 
#  /* 10B2DC 8018E3EC 000000F0 */       tge $zero, $zero, 3
