.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x80190770

glabel func_ovl7_8018D0C0
  /* 1138E0 8018D0C0 3C028004 */       lui $v0, %hi(gOMObjCommonLinks + (0x0E * 4))
  /* 1138E4 8018D0C4 8C426728 */        lw $v0, %lo(gOMObjCommonLinks + (0x0E * 4))($v0)
  /* 1138E8 8018D0C8 10400005 */      beqz $v0, .L8018D0E0
  /* 1138EC 8018D0CC 00000000 */       nop 
  /* 1138F0 8018D0D0 AC44007C */        sw $a0, 0x7c($v0)
  .L8018D0D4:
  /* 1138F4 8018D0D4 8C420004 */        lw $v0, 4($v0)
  /* 1138F8 8018D0D8 5440FFFE */      bnel $v0, $zero, .L8018D0D4
  /* 1138FC 8018D0DC AC44007C */        sw $a0, 0x7c($v0)
  .L8018D0E0:
  /* 113900 8018D0E0 03E00008 */        jr $ra
  /* 113904 8018D0E4 00000000 */       nop 

glabel func_ovl7_8018D0E8
  /* 113908 8018D0E8 3C04800A */       lui $a0, %hi((gSceneData + 0x13))
  /* 11390C 8018D0EC 90844AE3 */       lbu $a0, %lo((gSceneData + 0x13))($a0)
  /* 113910 8018D0F0 3C0F8004 */       lui $t7, %hi(gContInput + 2)
  /* 113914 8018D0F4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 113918 8018D0F8 00047080 */       sll $t6, $a0, 2
  /* 11391C 8018D0FC 01C47021 */      addu $t6, $t6, $a0
  /* 113920 8018D100 000E7040 */       sll $t6, $t6, 1
  /* 113924 8018D104 01EE7821 */      addu $t7, $t7, $t6
  /* 113928 8018D108 95EF522A */       lhu $t7, %lo(gContInput + 2)($t7)
  /* 11392C 8018D10C 000428C0 */       sll $a1, $a0, 3
  /* 113930 8018D110 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113934 8018D114 31F81000 */      andi $t8, $t7, 0x1000
  /* 113938 8018D118 13000031 */      beqz $t8, .L8018D1E0
  /* 11393C 8018D11C 00A42823 */      subu $a1, $a1, $a0
  /* 113940 8018D120 3C19800A */       lui $t9, %hi(gpBattleState)
  /* 113944 8018D124 8F3950E8 */        lw $t9, %lo(gpBattleState)($t9)
  /* 113948 8018D128 00052880 */       sll $a1, $a1, 2
  /* 11394C 8018D12C 00A42821 */      addu $a1, $a1, $a0
  /* 113950 8018D130 00052880 */       sll $a1, $a1, 2
  /* 113954 8018D134 03254021 */      addu $t0, $t9, $a1
  /* 113958 8018D138 8D020078 */        lw $v0, 0x78($t0)
  /* 11395C 8018D13C 24040001 */     addiu $a0, $zero, 1
  /* 113960 8018D140 8C430084 */        lw $v1, 0x84($v0)
  /* 113964 8018D144 8C690190 */        lw $t1, 0x190($v1)
  /* 113968 8018D148 00095AC0 */       sll $t3, $t1, 0xb
  /* 11396C 8018D14C 05620025 */     bltzl $t3, .L8018D1E4
  /* 113970 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113974 8018D154 0C044FDD */       jal func_ovl2_80113F74
  /* 113978 8018D158 AFA50018 */        sw $a1, 0x18($sp)
  /* 11397C 8018D15C 0C063430 */       jal func_ovl7_8018D0C0
  /* 113980 8018D160 00002025 */        or $a0, $zero, $zero
  /* 113984 8018D164 0C0455FB */       jal func_ovl2_801157EC
  /* 113988 8018D168 00000000 */       nop 
  /* 11398C 8018D16C 3C0C800A */       lui $t4, %hi(gpBattleState)
  /* 113990 8018D170 8D8C50E8 */        lw $t4, %lo(gpBattleState)($t4)
  /* 113994 8018D174 8FAD0018 */        lw $t5, 0x18($sp)
  /* 113998 8018D178 018D7021 */      addu $t6, $t4, $t5
  /* 11399C 8018D17C 0C039FC5 */       jal ftCommon_ResetControllerInputs
  /* 1139A0 8018D180 8DC40078 */        lw $a0, 0x78($t6)
  /* 1139A4 8018D184 3C188019 */       lui $t8, %hi(D_ovl7_80190B78)
  /* 1139A8 8018D188 8F180B78 */        lw $t8, %lo(D_ovl7_80190B78)($t8)
  /* 1139AC 8018D18C 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 1139B0 8018D190 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 1139B4 8018D194 0018C8C0 */       sll $t9, $t8, 3
  /* 1139B8 8018D198 0338C823 */      subu $t9, $t9, $t8
  /* 1139BC 8018D19C 0019C880 */       sll $t9, $t9, 2
  /* 1139C0 8018D1A0 0338C821 */      addu $t9, $t9, $t8
  /* 1139C4 8018D1A4 0019C880 */       sll $t9, $t9, 2
  /* 1139C8 8018D1A8 01F94021 */      addu $t0, $t7, $t9
  /* 1139CC 8018D1AC 0C039FC5 */       jal ftCommon_ResetControllerInputs
  /* 1139D0 8018D1B0 8D040078 */        lw $a0, 0x78($t0)
  /* 1139D4 8018D1B4 3C0A800A */       lui $t2, %hi(gpBattleState)
  /* 1139D8 8018D1B8 8D4A50E8 */        lw $t2, %lo(gpBattleState)($t2)
  /* 1139DC 8018D1BC 24090002 */     addiu $t1, $zero, 2
  /* 1139E0 8018D1C0 24040116 */     addiu $a0, $zero, 0x116
  /* 1139E4 8018D1C4 0C009A70 */       jal func_800269C0
  /* 1139E8 8018D1C8 A1490011 */        sb $t1, 0x11($t2)
  /* 1139EC 8018D1CC 00002025 */        or $a0, $zero, $zero
  /* 1139F0 8018D1D0 0C0082CE */       jal func_80020B38
  /* 1139F4 8018D1D4 24053C00 */     addiu $a1, $zero, 0x3c00
  /* 1139F8 8018D1D8 3C018019 */       lui $at, %hi(D_ovl7_80190C30)
  /* 1139FC 8018D1DC A0200C30 */        sb $zero, %lo(D_ovl7_80190C30)($at)
  .L8018D1E0:
  /* 113A00 8018D1E0 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D1E4:
  /* 113A04 8018D1E4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 113A08 8018D1E8 03E00008 */        jr $ra
  /* 113A0C 8018D1EC 00000000 */       nop 

glabel func_ovl7_8018D1F0
  /* 113A10 8018D1F0 3C02800A */       lui $v0, %hi((gSceneData + 0x13))
  /* 113A14 8018D1F4 90424AE3 */       lbu $v0, %lo((gSceneData + 0x13))($v0)
  /* 113A18 8018D1F8 3C0F8004 */       lui $t7, %hi(gContInput)
  /* 113A1C 8018D1FC 25EF5228 */     addiu $t7, $t7, %lo(gContInput)
  /* 113A20 8018D200 00027080 */       sll $t6, $v0, 2
  /* 113A24 8018D204 01C27021 */      addu $t6, $t6, $v0
  /* 113A28 8018D208 000E7040 */       sll $t6, $t6, 1
  /* 113A2C 8018D20C 01CF1821 */      addu $v1, $t6, $t7
  /* 113A30 8018D210 94780002 */       lhu $t8, 2($v1)
  /* 113A34 8018D214 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 113A38 8018D218 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113A3C 8018D21C 33195000 */      andi $t9, $t8, 0x5000
  /* 113A40 8018D220 1320002F */      beqz $t9, .L8018D2E0
  /* 113A44 8018D224 00002025 */        or $a0, $zero, $zero
  /* 113A48 8018D228 AFA20024 */        sw $v0, 0x24($sp)
  /* 113A4C 8018D22C 0C044FDD */       jal func_ovl2_80113F74
  /* 113A50 8018D230 AFA30018 */        sw $v1, 0x18($sp)
  /* 113A54 8018D234 0C063430 */       jal func_ovl7_8018D0C0
  /* 113A58 8018D238 24040001 */     addiu $a0, $zero, 1
  /* 113A5C 8018D23C 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 113A60 8018D240 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 113A64 8018D244 8C490000 */        lw $t1, ($v0) # gpBattleState + 0
  /* 113A68 8018D248 24080001 */     addiu $t0, $zero, 1
  /* 113A6C 8018D24C 3C0B8019 */       lui $t3, %hi(D_ovl7_80190B78)
  /* 113A70 8018D250 A1280011 */        sb $t0, 0x11($t1)
  /* 113A74 8018D254 8D6B0B78 */        lw $t3, %lo(D_ovl7_80190B78)($t3)
  /* 113A78 8018D258 8C4A0000 */        lw $t2, ($v0) # gpBattleState + 0
  /* 113A7C 8018D25C 000B60C0 */       sll $t4, $t3, 3
  /* 113A80 8018D260 018B6023 */      subu $t4, $t4, $t3
  /* 113A84 8018D264 000C6080 */       sll $t4, $t4, 2
  /* 113A88 8018D268 018B6021 */      addu $t4, $t4, $t3
  /* 113A8C 8018D26C 000C6080 */       sll $t4, $t4, 2
  /* 113A90 8018D270 014C6821 */      addu $t5, $t2, $t4
  /* 113A94 8018D274 0C039FDA */       jal func_ovl2_800E7F68
  /* 113A98 8018D278 8DA40078 */        lw $a0, 0x78($t5)
  /* 113A9C 8018D27C 8FAF0024 */        lw $t7, 0x24($sp)
  /* 113AA0 8018D280 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 113AA4 8018D284 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 113AA8 8018D288 000FC0C0 */       sll $t8, $t7, 3
  /* 113AAC 8018D28C 030FC023 */      subu $t8, $t8, $t7
  /* 113AB0 8018D290 0018C080 */       sll $t8, $t8, 2
  /* 113AB4 8018D294 030FC021 */      addu $t8, $t8, $t7
  /* 113AB8 8018D298 0018C080 */       sll $t8, $t8, 2
  /* 113ABC 8018D29C 01D8C821 */      addu $t9, $t6, $t8
  /* 113AC0 8018D2A0 8F240078 */        lw $a0, 0x78($t9)
  /* 113AC4 8018D2A4 0C039FDA */       jal func_ovl2_800E7F68
  /* 113AC8 8018D2A8 AFA40020 */        sw $a0, 0x20($sp)
  /* 113ACC 8018D2AC 8FA80018 */        lw $t0, 0x18($sp)
  /* 113AD0 8018D2B0 8FA40020 */        lw $a0, 0x20($sp)
  /* 113AD4 8018D2B4 24057800 */     addiu $a1, $zero, 0x7800
  /* 113AD8 8018D2B8 95090002 */       lhu $t1, 2($t0)
  /* 113ADC 8018D2BC 312B4000 */      andi $t3, $t1, 0x4000
  /* 113AE0 8018D2C0 11600005 */      beqz $t3, .L8018D2D8
  /* 113AE4 8018D2C4 00000000 */       nop 
  /* 113AE8 8018D2C8 8C820084 */        lw $v0, 0x84($a0)
  /* 113AEC 8018D2CC 944A01BC */       lhu $t2, 0x1bc($v0)
  /* 113AF0 8018D2D0 354C4000 */       ori $t4, $t2, 0x4000
  /* 113AF4 8018D2D4 A44C01BC */        sh $t4, 0x1bc($v0)
  .L8018D2D8:
  /* 113AF8 8018D2D8 0C0082CE */       jal func_80020B38
  /* 113AFC 8018D2DC 00002025 */        or $a0, $zero, $zero
  .L8018D2E0:
  /* 113B00 8018D2E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113B04 8018D2E4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 113B08 8018D2E8 03E00008 */        jr $ra
  /* 113B0C 8018D2EC 00000000 */       nop 

glabel func_ovl7_8018D2F0
  /* 113B10 8018D2F0 3C03800A */       lui $v1, %hi((gSceneData + 0x13))
  /* 113B14 8018D2F4 90634AE3 */       lbu $v1, %lo((gSceneData + 0x13))($v1)
  /* 113B18 8018D2F8 3C0F8004 */       lui $t7, %hi(gContInput)
  /* 113B1C 8018D2FC 25EF5228 */     addiu $t7, $t7, %lo(gContInput)
  /* 113B20 8018D300 00037080 */       sll $t6, $v1, 2
  /* 113B24 8018D304 01C37021 */      addu $t6, $t6, $v1
  /* 113B28 8018D308 000E7040 */       sll $t6, $t6, 1
  /* 113B2C 8018D30C 01CF2021 */      addu $a0, $t6, $t7
  /* 113B30 8018D310 80850008 */        lb $a1, 8($a0)
  /* 113B34 8018D314 00001025 */        or $v0, $zero, $zero
  /* 113B38 8018D318 28A10029 */      slti $at, $a1, 0x29
  /* 113B3C 8018D31C 54200003 */      bnel $at, $zero, .L8018D32C
  /* 113B40 8018D320 28A1FFD8 */      slti $at, $a1, -0x28
  /* 113B44 8018D324 24020100 */     addiu $v0, $zero, 0x100
  /* 113B48 8018D328 28A1FFD8 */      slti $at, $a1, -0x28
  .L8018D32C:
  /* 113B4C 8018D32C 10200003 */      beqz $at, .L8018D33C
  /* 113B50 8018D330 3C058019 */       lui $a1, %hi(D_ovl7_80190B58)
  /* 113B54 8018D334 34420200 */       ori $v0, $v0, 0x200
  /* 113B58 8018D338 3042FFFF */      andi $v0, $v0, 0xffff
  .L8018D33C:
  /* 113B5C 8018D33C 80830009 */        lb $v1, 9($a0)
  /* 113B60 8018D340 24A50B58 */     addiu $a1, $a1, %lo(D_ovl7_80190B58)
  /* 113B64 8018D344 28610029 */      slti $at, $v1, 0x29
  /* 113B68 8018D348 54200004 */      bnel $at, $zero, .L8018D35C
  /* 113B6C 8018D34C 2861FFD8 */      slti $at, $v1, -0x28
  /* 113B70 8018D350 34420800 */       ori $v0, $v0, 0x800
  /* 113B74 8018D354 3042FFFF */      andi $v0, $v0, 0xffff
  /* 113B78 8018D358 2861FFD8 */      slti $at, $v1, -0x28
  .L8018D35C:
  /* 113B7C 8018D35C 50200004 */      beql $at, $zero, .L8018D370
  /* 113B80 8018D360 90B800D8 */       lbu $t8, 0xd8($a1) # D_ovl7_80190B58 + 216
  /* 113B84 8018D364 34420400 */       ori $v0, $v0, 0x400
  /* 113B88 8018D368 3042FFFF */      andi $v0, $v0, 0xffff
  /* 113B8C 8018D36C 90B800D8 */       lbu $t8, 0xd8($a1) # D_ovl7_80190B58 + 216
  .L8018D370:
  /* 113B90 8018D370 57000006 */      bnel $t8, $zero, .L8018D38C
  /* 113B94 8018D374 94A800C4 */       lhu $t0, 0xc4($a1) # D_ovl7_80190B58 + 196
  /* 113B98 8018D378 14400016 */      bnez $v0, .L8018D3D4
  /* 113B9C 8018D37C 24190001 */     addiu $t9, $zero, 1
  /* 113BA0 8018D380 03E00008 */        jr $ra
  /* 113BA4 8018D384 A0B900D8 */        sb $t9, 0xd8($a1) # D_ovl7_80190B58 + 216

  /* 113BA8 8018D388 94A800C4 */       lhu $t0, 0xc4($a1)
  .L8018D38C:
  /* 113BAC 8018D38C 240B001E */     addiu $t3, $zero, 0x1e
  /* 113BB0 8018D390 00482026 */       xor $a0, $v0, $t0
  /* 113BB4 8018D394 00824824 */       and $t1, $a0, $v0
  /* 113BB8 8018D398 10800004 */      beqz $a0, .L8018D3AC
  /* 113BBC 8018D39C A4A900C6 */        sh $t1, 0xc6($a1)
  /* 113BC0 8018D3A0 A4A900C8 */        sh $t1, 0xc8($a1)
  /* 113BC4 8018D3A4 1000000A */         b .L8018D3D0
  /* 113BC8 8018D3A8 ACAB00CC */        sw $t3, 0xcc($a1)
  .L8018D3AC:
  /* 113BCC 8018D3AC 8CAC00CC */        lw $t4, 0xcc($a1)
  /* 113BD0 8018D3B0 240F0005 */     addiu $t7, $zero, 5
  /* 113BD4 8018D3B4 258DFFFF */     addiu $t5, $t4, -1
  /* 113BD8 8018D3B8 19A00003 */      blez $t5, .L8018D3C8
  /* 113BDC 8018D3BC ACAD00CC */        sw $t5, 0xcc($a1)
  /* 113BE0 8018D3C0 10000003 */         b .L8018D3D0
  /* 113BE4 8018D3C4 A4A000C8 */        sh $zero, 0xc8($a1)
  .L8018D3C8:
  /* 113BE8 8018D3C8 A4A200C8 */        sh $v0, 0xc8($a1)
  /* 113BEC 8018D3CC ACAF00CC */        sw $t7, 0xcc($a1)
  .L8018D3D0:
  /* 113BF0 8018D3D0 A4A200C4 */        sh $v0, 0xc4($a1)
  .L8018D3D4:
  /* 113BF4 8018D3D4 03E00008 */        jr $ra
  /* 113BF8 8018D3D8 00000000 */       nop 

glabel func_ovl7_8018D3DC
  /* 113BFC 8018D3DC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 113C00 8018D3E0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113C04 8018D3E4 0C063D8C */       jal func_ovl7_8018F630
  /* 113C08 8018D3E8 00000000 */       nop 
  /* 113C0C 8018D3EC 0C063F90 */       jal func_ovl7_8018FE40
  /* 113C10 8018D3F0 00000000 */       nop 
  /* 113C14 8018D3F4 0C009A70 */       jal func_800269C0
  /* 113C18 8018D3F8 240400A4 */     addiu $a0, $zero, 0xa4
  /* 113C1C 8018D3FC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113C20 8018D400 27BD0018 */     addiu $sp, $sp, 0x18
  /* 113C24 8018D404 03E00008 */        jr $ra
  /* 113C28 8018D408 00000000 */       nop 

glabel func_ovl7_8018D40C
  /* 113C2C 8018D40C 3C028019 */       lui $v0, %hi(D_ovl7_80190C20)
  /* 113C30 8018D410 94420C20 */       lhu $v0, %lo(D_ovl7_80190C20)($v0)
  /* 113C34 8018D414 304E0300 */      andi $t6, $v0, 0x300
  /* 113C38 8018D418 11C00014 */      beqz $t6, .L8018D46C
  /* 113C3C 8018D41C 304F0200 */      andi $t7, $v0, 0x200
  /* 113C40 8018D420 51E0000B */      beql $t7, $zero, .L8018D450
  /* 113C44 8018D424 8C8A0000 */        lw $t2, ($a0)
  /* 113C48 8018D428 8C980000 */        lw $t8, ($a0)
  /* 113C4C 8018D42C 24C9FFFF */     addiu $t1, $a2, -1
  /* 113C50 8018D430 24020001 */     addiu $v0, $zero, 1
  /* 113C54 8018D434 2719FFFF */     addiu $t9, $t8, -1
  /* 113C58 8018D438 0325082A */       slt $at, $t9, $a1
  /* 113C5C 8018D43C 10200009 */      beqz $at, .L8018D464
  /* 113C60 8018D440 AC990000 */        sw $t9, ($a0)
  /* 113C64 8018D444 03E00008 */        jr $ra
  /* 113C68 8018D448 AC890000 */        sw $t1, ($a0)

  /* 113C6C 8018D44C 8C8A0000 */        lw $t2, ($a0)
  .L8018D450:
  /* 113C70 8018D450 254B0001 */     addiu $t3, $t2, 1
  /* 113C74 8018D454 0166082A */       slt $at, $t3, $a2
  /* 113C78 8018D458 14200002 */      bnez $at, .L8018D464
  /* 113C7C 8018D45C AC8B0000 */        sw $t3, ($a0)
  /* 113C80 8018D460 AC850000 */        sw $a1, ($a0)
  .L8018D464:
  /* 113C84 8018D464 03E00008 */        jr $ra
  /* 113C88 8018D468 24020001 */     addiu $v0, $zero, 1

  .L8018D46C:
  /* 113C8C 8018D46C 00001025 */        or $v0, $zero, $zero
  /* 113C90 8018D470 03E00008 */        jr $ra
  /* 113C94 8018D474 00000000 */       nop 

  glabel jtgt_ovl7_8018D478
  /* 113C98 8018D478 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 113C9C 8018D47C AFBF0014 */        sw $ra, 0x14($sp)
  /* 113CA0 8018D480 3C048019 */       lui $a0, %hi(D_ovl7_80190B6C)
  /* 113CA4 8018D484 24840B6C */     addiu $a0, $a0, %lo(D_ovl7_80190B6C)
  /* 113CA8 8018D488 00002825 */        or $a1, $zero, $zero
  /* 113CAC 8018D48C 0C063503 */       jal func_ovl7_8018D40C
  /* 113CB0 8018D490 24060005 */     addiu $a2, $zero, 5
  /* 113CB4 8018D494 5040000A */      beql $v0, $zero, .L8018D4C0
  /* 113CB8 8018D498 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113CBC 8018D49C 0C06407D */       jal func_ovl7_801901F4
  /* 113CC0 8018D4A0 00000000 */       nop 
  /* 113CC4 8018D4A4 0C063A04 */       jal func_ovl7_8018E810
  /* 113CC8 8018D4A8 00000000 */       nop 
  /* 113CCC 8018D4AC 0C063BBA */       jal func_ovl7_8018EEE8
  /* 113CD0 8018D4B0 00000000 */       nop 
  /* 113CD4 8018D4B4 0C0634F7 */       jal func_ovl7_8018D3DC
  /* 113CD8 8018D4B8 00000000 */       nop 
  /* 113CDC 8018D4BC 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D4C0:
  /* 113CE0 8018D4C0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 113CE4 8018D4C4 00001025 */        or $v0, $zero, $zero
  /* 113CE8 8018D4C8 03E00008 */        jr $ra
  /* 113CEC 8018D4CC 00000000 */       nop 

glabel func_ovl7_8018D4D0
  /* 113CF0 8018D4D0 3C028004 */       lui $v0, %hi(gOMObjCommonLinks + (0x04 * 4))
  /* 113CF4 8018D4D4 8C426700 */        lw $v0, %lo(gOMObjCommonLinks + (0x04 * 4))($v0)
  /* 113CF8 8018D4D8 00001825 */        or $v1, $zero, $zero
  /* 113CFC 8018D4DC 1040000C */      beqz $v0, .L8018D510
  /* 113D00 8018D4E0 00000000 */       nop 
  /* 113D04 8018D4E4 8C4E0084 */        lw $t6, 0x84($v0)
  .L8018D4E8:
  /* 113D08 8018D4E8 8DC4000C */        lw $a0, 0xc($t6)
  /* 113D0C 8018D4EC 28810014 */      slti $at, $a0, 0x14
  /* 113D10 8018D4F0 14200003 */      bnez $at, .L8018D500
  /* 113D14 8018D4F4 28810020 */      slti $at, $a0, 0x20
  /* 113D18 8018D4F8 54200003 */      bnel $at, $zero, .L8018D508
  /* 113D1C 8018D4FC 8C420004 */        lw $v0, 4($v0)
  .L8018D500:
  /* 113D20 8018D500 24630001 */     addiu $v1, $v1, 1
  /* 113D24 8018D504 8C420004 */        lw $v0, 4($v0)
  .L8018D508:
  /* 113D28 8018D508 5440FFF7 */      bnel $v0, $zero, .L8018D4E8
  /* 113D2C 8018D50C 8C4E0084 */        lw $t6, 0x84($v0)
  .L8018D510:
  /* 113D30 8018D510 03E00008 */        jr $ra
  /* 113D34 8018D514 00601025 */        or $v0, $v1, $zero

  glabel jtgt_ovl7_8018D518
  /* 113D38 8018D518 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 113D3C 8018D51C AFBF001C */        sw $ra, 0x1c($sp)
  /* 113D40 8018D520 3C048019 */       lui $a0, %hi(D_ovl7_80190B68)
  /* 113D44 8018D524 24840B68 */     addiu $a0, $a0, %lo(D_ovl7_80190B68)
  /* 113D48 8018D528 00002825 */        or $a1, $zero, $zero
  /* 113D4C 8018D52C 0C063503 */       jal func_ovl7_8018D40C
  /* 113D50 8018D530 24060011 */     addiu $a2, $zero, 0x11
  /* 113D54 8018D534 10400005 */      beqz $v0, .L8018D54C
  /* 113D58 8018D538 00000000 */       nop 
  /* 113D5C 8018D53C 0C063C10 */       jal func_ovl7_8018F040
  /* 113D60 8018D540 00000000 */       nop 
  /* 113D64 8018D544 0C0634F7 */       jal func_ovl7_8018D3DC
  /* 113D68 8018D548 00000000 */       nop 
  .L8018D54C:
  /* 113D6C 8018D54C 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 113D70 8018D550 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 113D74 8018D554 906200D5 */       lbu $v0, 0xd5($v1) # D_ovl7_80190B58 + 213
  /* 113D78 8018D558 3C0E800A */       lui $t6, %hi((gSceneData + 0x13))
  /* 113D7C 8018D55C 14400043 */      bnez $v0, .L8018D66C
  /* 113D80 8018D560 244AFFFF */     addiu $t2, $v0, -1
  /* 113D84 8018D564 91CE4AE3 */       lbu $t6, %lo((gSceneData + 0x13))($t6)
  /* 113D88 8018D568 3C188004 */       lui $t8, %hi(gContInput + 2)
  /* 113D8C 8018D56C 000E7880 */       sll $t7, $t6, 2
  /* 113D90 8018D570 01EE7821 */      addu $t7, $t7, $t6
  /* 113D94 8018D574 000F7840 */       sll $t7, $t7, 1
  /* 113D98 8018D578 030FC021 */      addu $t8, $t8, $t7
  /* 113D9C 8018D57C 9718522A */       lhu $t8, %lo(gContInput + 2)($t8)
  /* 113DA0 8018D580 33198000 */      andi $t9, $t8, 0x8000
  /* 113DA4 8018D584 5320003B */      beql $t9, $zero, .L8018D674
  /* 113DA8 8018D588 8FBF001C */        lw $ra, 0x1c($sp)
  /* 113DAC 8018D58C 8C680010 */        lw $t0, 0x10($v1) # D_ovl7_80190B58 + 16
  /* 113DB0 8018D590 51000038 */      beql $t0, $zero, .L8018D674
  /* 113DB4 8018D594 8FBF001C */        lw $ra, 0x1c($sp)
  /* 113DB8 8018D598 0C063534 */       jal func_ovl7_8018D4D0
  /* 113DBC 8018D59C 00000000 */       nop 
  /* 113DC0 8018D5A0 28410004 */      slti $at, $v0, 4
  /* 113DC4 8018D5A4 1020002D */      beqz $at, .L8018D65C
  /* 113DC8 8018D5A8 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 113DCC 8018D5AC 3C0A800A */       lui $t2, %hi((gSceneData + 0x13))
  /* 113DD0 8018D5B0 914A4AE3 */       lbu $t2, %lo((gSceneData + 0x13))($t2)
  /* 113DD4 8018D5B4 44800000 */      mtc1 $zero, $f0
  /* 113DD8 8018D5B8 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 113DDC 8018D5BC 000A58C0 */       sll $t3, $t2, 3
  /* 113DE0 8018D5C0 016A5823 */      subu $t3, $t3, $t2
  /* 113DE4 8018D5C4 44812000 */      mtc1 $at, $f4 # 30.0 to cop1
  /* 113DE8 8018D5C8 8D2950E8 */        lw $t1, %lo(gpBattleState)($t1)
  /* 113DEC 8018D5CC 000B5880 */       sll $t3, $t3, 2
  /* 113DF0 8018D5D0 016A5821 */      addu $t3, $t3, $t2
  /* 113DF4 8018D5D4 000B5880 */       sll $t3, $t3, 2
  /* 113DF8 8018D5D8 E7A00030 */      swc1 $f0, 0x30($sp)
  /* 113DFC 8018D5DC E7A00028 */      swc1 $f0, 0x28($sp)
  /* 113E00 8018D5E0 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 113E04 8018D5E4 012B6021 */      addu $t4, $t1, $t3
  /* 113E08 8018D5E8 8D8D0078 */        lw $t5, 0x78($t4)
  /* 113E0C 8018D5EC 27A60034 */     addiu $a2, $sp, 0x34
  /* 113E10 8018D5F0 3C014348 */       lui $at, (0x43480000 >> 16) # 200.0
  /* 113E14 8018D5F4 8DAE0074 */        lw $t6, 0x74($t5)
  /* 113E18 8018D5F8 44814000 */      mtc1 $at, $f8 # 200.0 to cop1
  /* 113E1C 8018D5FC 3C058019 */       lui $a1, %hi(D_ovl7_80190B68)
  /* 113E20 8018D600 8DD8001C */        lw $t8, 0x1c($t6)
  /* 113E24 8018D604 24190004 */     addiu $t9, $zero, 4
  /* 113E28 8018D608 00002025 */        or $a0, $zero, $zero
  /* 113E2C 8018D60C ACD80000 */        sw $t8, ($a2)
  /* 113E30 8018D610 8DCF0020 */        lw $t7, 0x20($t6)
  /* 113E34 8018D614 27A70028 */     addiu $a3, $sp, 0x28
  /* 113E38 8018D618 ACCF0004 */        sw $t7, 4($a2)
  /* 113E3C 8018D61C 8DD80024 */        lw $t8, 0x24($t6)
  /* 113E40 8018D620 ACD80008 */        sw $t8, 8($a2)
  /* 113E44 8018D624 C7A60038 */      lwc1 $f6, 0x38($sp)
  /* 113E48 8018D628 8CA50B68 */        lw $a1, %lo(D_ovl7_80190B68)($a1)
  /* 113E4C 8018D62C AFB90010 */        sw $t9, 0x10($sp)
  /* 113E50 8018D630 46083280 */     add.s $f10, $f6, $f8
  /* 113E54 8018D634 E7A0003C */      swc1 $f0, 0x3c($sp)
  /* 113E58 8018D638 24A50003 */     addiu $a1, $a1, 3
  /* 113E5C 8018D63C 0C05BA9E */       jal itManager_MakeItemSetupCommon
  /* 113E60 8018D640 E7AA0038 */      swc1 $f10, 0x38($sp)
  /* 113E64 8018D644 0C009A70 */       jal func_800269C0
  /* 113E68 8018D648 2404009E */     addiu $a0, $zero, 0x9e
  /* 113E6C 8018D64C 24080008 */     addiu $t0, $zero, 8
  /* 113E70 8018D650 3C018019 */       lui $at, %hi(D_ovl7_80190C2D)
  /* 113E74 8018D654 10000006 */         b .L8018D670
  /* 113E78 8018D658 A0280C2D */        sb $t0, %lo(D_ovl7_80190C2D)($at)
  .L8018D65C:
  /* 113E7C 8018D65C 0C009A70 */       jal func_800269C0
  /* 113E80 8018D660 240400A5 */     addiu $a0, $zero, 0xa5
  /* 113E84 8018D664 10000003 */         b .L8018D674
  /* 113E88 8018D668 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D66C:
  /* 113E8C 8018D66C A06A00D5 */        sb $t2, 0xd5($v1)
  .L8018D670:
  /* 113E90 8018D670 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018D674:
  /* 113E94 8018D674 27BD0040 */     addiu $sp, $sp, 0x40
  /* 113E98 8018D678 00001025 */        or $v0, $zero, $zero
  /* 113E9C 8018D67C 03E00008 */        jr $ra
  /* 113EA0 8018D680 00000000 */       nop 

  glabel jtgt_ovl7_8018D684
  /* 113EA4 8018D684 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 113EA8 8018D688 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113EAC 8018D68C 3C048019 */       lui $a0, %hi(D_ovl7_80190B70)
  /* 113EB0 8018D690 24840B70 */     addiu $a0, $a0, %lo(D_ovl7_80190B70)
  /* 113EB4 8018D694 00002825 */        or $a1, $zero, $zero
  /* 113EB8 8018D698 0C063503 */       jal func_ovl7_8018D40C
  /* 113EBC 8018D69C 24060004 */     addiu $a2, $zero, 4
  /* 113EC0 8018D6A0 10400009 */      beqz $v0, .L8018D6C8
  /* 113EC4 8018D6A4 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 113EC8 8018D6A8 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 113ECC 8018D6AC A04000D4 */        sb $zero, 0xd4($v0) # D_ovl7_80190B58 + 212
  /* 113ED0 8018D6B0 0C0639C5 */       jal func_ovl7_8018E714
  /* 113ED4 8018D6B4 A04000D3 */        sb $zero, 0xd3($v0) # D_ovl7_80190B58 + 211
  /* 113ED8 8018D6B8 0C063CB1 */       jal func_ovl7_8018F2C4
  /* 113EDC 8018D6BC 00000000 */       nop 
  /* 113EE0 8018D6C0 0C0634F7 */       jal func_ovl7_8018D3DC
  /* 113EE4 8018D6C4 00000000 */       nop 
  .L8018D6C8:
  /* 113EE8 8018D6C8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113EEC 8018D6CC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 113EF0 8018D6D0 00001025 */        or $v0, $zero, $zero
  /* 113EF4 8018D6D4 03E00008 */        jr $ra
  /* 113EF8 8018D6D8 00000000 */       nop 

  glabel jtgt_ovl7_8018D6DC
  /* 113EFC 8018D6DC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 113F00 8018D6E0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 113F04 8018D6E4 3C048019 */       lui $a0, %hi(D_ovl7_80190B74)
  /* 113F08 8018D6E8 24840B74 */     addiu $a0, $a0, %lo(D_ovl7_80190B74)
  /* 113F0C 8018D6EC 00002825 */        or $a1, $zero, $zero
  /* 113F10 8018D6F0 0C063503 */       jal func_ovl7_8018D40C
  /* 113F14 8018D6F4 24060002 */     addiu $a2, $zero, 2
  /* 113F18 8018D6F8 1040002A */      beqz $v0, .L8018D7A4
  /* 113F1C 8018D6FC 3C0E8019 */       lui $t6, %hi(D_ovl7_80190B74)
  /* 113F20 8018D700 8DCE0B74 */        lw $t6, %lo(D_ovl7_80190B74)($t6)
  /* 113F24 8018D704 24010001 */     addiu $at, $zero, 1
  /* 113F28 8018D708 3C18800A */       lui $t8, 0x800a
  /* 113F2C 8018D70C 15C10007 */       bne $t6, $at, .L8018D72C
  /* 113F30 8018D710 3C19800A */       lui $t9, 0x800a
  /* 113F34 8018D714 0C0433C8 */       jal func_ovl2_8010CF20
  /* 113F38 8018D718 00000000 */       nop 
  /* 113F3C 8018D71C 240F00B4 */     addiu $t7, $zero, 0xb4
  /* 113F40 8018D720 3C018019 */       lui $at, %hi(D_ovl7_80190C2E)
  /* 113F44 8018D724 1000001B */         b .L8018D794
  /* 113F48 8018D728 A42F0C2E */        sh $t7, %lo(D_ovl7_80190C2E)($at)
  .L8018D72C:
  /* 113F4C 8018D72C 93394AE3 */       lbu $t9, 0x4ae3($t9)
  /* 113F50 8018D730 8F1850E8 */        lw $t8, 0x50e8($t8)
  /* 113F54 8018D734 44800000 */      mtc1 $zero, $f0
  /* 113F58 8018D738 001940C0 */       sll $t0, $t9, 3
  /* 113F5C 8018D73C 01194023 */      subu $t0, $t0, $t9
  /* 113F60 8018D740 00084080 */       sll $t0, $t0, 2
  /* 113F64 8018D744 01194021 */      addu $t0, $t0, $t9
  /* 113F68 8018D748 00084080 */       sll $t0, $t0, 2
  /* 113F6C 8018D74C 03084821 */      addu $t1, $t8, $t0
  /* 113F70 8018D750 8D240078 */        lw $a0, 0x78($t1)
  /* 113F74 8018D754 3C018019 */       lui $at, %hi(D_ovl7_80190938)
  /* 113F78 8018D758 C4240938 */      lwc1 $f4, %lo(D_ovl7_80190938)($at)
  /* 113F7C 8018D75C 8C8A0084 */        lw $t2, 0x84($a0)
  /* 113F80 8018D760 3C0141E0 */       lui $at, (0x41E00000 >> 16) # 28.0
  /* 113F84 8018D764 44813000 */      mtc1 $at, $f6 # 28.0 to cop1
  /* 113F88 8018D768 8D4B09C8 */        lw $t3, 0x9c8($t2)
  /* 113F8C 8018D76C 44050000 */      mfc1 $a1, $f0
  /* 113F90 8018D770 44060000 */      mfc1 $a2, $f0
  /* 113F94 8018D774 8D670090 */        lw $a3, 0x90($t3)
  /* 113F98 8018D778 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 113F9C 8018D77C 0C0433D1 */       jal func_ovl2_8010CF44
  /* 113FA0 8018D780 E7A60014 */      swc1 $f6, 0x14($sp)
  /* 113FA4 8018D784 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 113FA8 8018D788 A0201580 */        sb $zero, %lo(D_ovl2_80131580)($at)
  /* 113FAC 8018D78C 3C018019 */       lui $at, %hi(D_ovl7_80190C2E)
  /* 113FB0 8018D790 A4200C2E */        sh $zero, %lo(D_ovl7_80190C2E)($at)
  .L8018D794:
  /* 113FB4 8018D794 0C063D09 */       jal func_ovl7_8018F424
  /* 113FB8 8018D798 00000000 */       nop 
  /* 113FBC 8018D79C 0C0634F7 */       jal func_ovl7_8018D3DC
  /* 113FC0 8018D7A0 00000000 */       nop 
  .L8018D7A4:
  /* 113FC4 8018D7A4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 113FC8 8018D7A8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 113FCC 8018D7AC 00001025 */        or $v0, $zero, $zero
  /* 113FD0 8018D7B0 03E00008 */        jr $ra
  /* 113FD4 8018D7B4 00000000 */       nop 

  glabel jtgt_ovl7_8018D7B8
  /* 113FD8 8018D7B8 3C0E800A */       lui $t6, %hi((gSceneData + 0x13))
  /* 113FDC 8018D7BC 91CE4AE3 */       lbu $t6, %lo((gSceneData + 0x13))($t6)
  /* 113FE0 8018D7C0 3C188004 */       lui $t8, %hi(gContInput + 2)
  /* 113FE4 8018D7C4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 113FE8 8018D7C8 000E7880 */       sll $t7, $t6, 2
  /* 113FEC 8018D7CC 01EE7821 */      addu $t7, $t7, $t6
  /* 113FF0 8018D7D0 000F7840 */       sll $t7, $t7, 1
  /* 113FF4 8018D7D4 030FC021 */      addu $t8, $t8, $t7
  /* 113FF8 8018D7D8 9718522A */       lhu $t8, %lo(gContInput + 2)($t8)
  /* 113FFC 8018D7DC AFBF0014 */        sw $ra, 0x14($sp)
  /* 114000 8018D7E0 24080001 */     addiu $t0, $zero, 1
  /* 114004 8018D7E4 33198000 */      andi $t9, $t8, 0x8000
  /* 114008 8018D7E8 1320000D */      beqz $t9, .L8018D820
  /* 11400C 8018D7EC 00001025 */        or $v0, $zero, $zero
  /* 114010 8018D7F0 3C018019 */       lui $at, %hi(D_ovl7_80190C2A)
  /* 114014 8018D7F4 0C0099A8 */       jal func_800266A0
  /* 114018 8018D7F8 A0280C2A */        sb $t0, %lo(D_ovl7_80190C2A)($at)
  /* 11401C 8018D7FC 0C009A70 */       jal func_800269C0
  /* 114020 8018D800 240400A2 */     addiu $a0, $zero, 0xa2
  /* 114024 8018D804 00002025 */        or $a0, $zero, $zero
  /* 114028 8018D808 0C0082CE */       jal func_80020B38
  /* 11402C 8018D80C 24057800 */     addiu $a1, $zero, 0x7800
  /* 114030 8018D810 0C00171D */       jal func_80005C74
  /* 114034 8018D814 00000000 */       nop 
  /* 114038 8018D818 10000001 */         b .L8018D820
  /* 11403C 8018D81C 24020001 */     addiu $v0, $zero, 1
  .L8018D820:
  /* 114040 8018D820 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114044 8018D824 27BD0018 */     addiu $sp, $sp, 0x18
  /* 114048 8018D828 03E00008 */        jr $ra
  /* 11404C 8018D82C 00000000 */       nop 

  glabel jtgt_ovl7_8018D830
  /* 114050 8018D830 3C0E800A */       lui $t6, %hi((gSceneData + 0x13))
  /* 114054 8018D834 91CE4AE3 */       lbu $t6, %lo((gSceneData + 0x13))($t6)
  /* 114058 8018D838 3C188004 */       lui $t8, %hi(gContInput + 2)
  /* 11405C 8018D83C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 114060 8018D840 000E7880 */       sll $t7, $t6, 2
  /* 114064 8018D844 01EE7821 */      addu $t7, $t7, $t6
  /* 114068 8018D848 000F7840 */       sll $t7, $t7, 1
  /* 11406C 8018D84C 030FC021 */      addu $t8, $t8, $t7
  /* 114070 8018D850 9718522A */       lhu $t8, %lo(gContInput + 2)($t8)
  /* 114074 8018D854 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114078 8018D858 00001025 */        or $v0, $zero, $zero
  /* 11407C 8018D85C 33198000 */      andi $t9, $t8, 0x8000
  /* 114080 8018D860 13200009 */      beqz $t9, .L8018D888
  /* 114084 8018D864 00000000 */       nop 
  /* 114088 8018D868 0C0099A8 */       jal func_800266A0
  /* 11408C 8018D86C 00000000 */       nop 
  /* 114090 8018D870 0C009A70 */       jal func_800269C0
  /* 114094 8018D874 240400A2 */     addiu $a0, $zero, 0xa2
  /* 114098 8018D878 0C00171D */       jal func_80005C74
  /* 11409C 8018D87C 00000000 */       nop 
  /* 1140A0 8018D880 10000001 */         b .L8018D888
  /* 1140A4 8018D884 24020001 */     addiu $v0, $zero, 1
  .L8018D888:
  /* 1140A8 8018D888 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1140AC 8018D88C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1140B0 8018D890 03E00008 */        jr $ra
  /* 1140B4 8018D894 00000000 */       nop 

glabel func_ovl7_8018D898
  /* 1140B8 8018D898 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 1140BC 8018D89C 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 1140C0 8018D8A0 944300C8 */       lhu $v1, 0xc8($v0) # D_ovl7_80190B58 + 200
  /* 1140C4 8018D8A4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1140C8 8018D8A8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1140CC 8018D8AC 306E0C00 */      andi $t6, $v1, 0xc00
  /* 1140D0 8018D8B0 11C00016 */      beqz $t6, .L8018D90C
  /* 1140D4 8018D8B4 306F0800 */      andi $t7, $v1, 0x800
  /* 1140D8 8018D8B8 51E00009 */      beql $t7, $zero, .L8018D8E0
  /* 1140DC 8018D8BC 8C4A0000 */        lw $t2, ($v0) # D_ovl7_80190B58 + 0
  /* 1140E0 8018D8C0 8C580000 */        lw $t8, ($v0) # D_ovl7_80190B58 + 0
  /* 1140E4 8018D8C4 24090005 */     addiu $t1, $zero, 5
  /* 1140E8 8018D8C8 2719FFFF */     addiu $t9, $t8, -1
  /* 1140EC 8018D8CC 07210009 */      bgez $t9, .L8018D8F4
  /* 1140F0 8018D8D0 AC590000 */        sw $t9, ($v0) # D_ovl7_80190B58 + 0
  /* 1140F4 8018D8D4 10000007 */         b .L8018D8F4
  /* 1140F8 8018D8D8 AC490000 */        sw $t1, ($v0) # D_ovl7_80190B58 + 0
  /* 1140FC 8018D8DC 8C4A0000 */        lw $t2, ($v0) # D_ovl7_80190B58 + 0
  .L8018D8E0:
  /* 114100 8018D8E0 254B0001 */     addiu $t3, $t2, 1
  /* 114104 8018D8E4 29610006 */      slti $at, $t3, 6
  /* 114108 8018D8E8 14200002 */      bnez $at, .L8018D8F4
  /* 11410C 8018D8EC AC4B0000 */        sw $t3, ($v0) # D_ovl7_80190B58 + 0
  /* 114110 8018D8F0 AC400000 */        sw $zero, ($v0) # D_ovl7_80190B58 + 0
  .L8018D8F4:
  /* 114114 8018D8F4 0C063EEC */       jal func_ovl7_8018FBB0
  /* 114118 8018D8F8 00000000 */       nop 
  /* 11411C 8018D8FC 0C0634F7 */       jal func_ovl7_8018D3DC
  /* 114120 8018D900 00000000 */       nop 
  /* 114124 8018D904 0C009A70 */       jal func_800269C0
  /* 114128 8018D908 240400A4 */     addiu $a0, $zero, 0xa4
  .L8018D90C:
  /* 11412C 8018D90C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114130 8018D910 27BD0018 */     addiu $sp, $sp, 0x18
  /* 114134 8018D914 03E00008 */        jr $ra
  /* 114138 8018D918 00000000 */       nop 

glabel func_ovl7_8018D91C
  /* 11413C 8018D91C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 114140 8018D920 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114144 8018D924 0C0634BC */       jal func_ovl7_8018D2F0
  /* 114148 8018D928 00000000 */       nop 
  /* 11414C 8018D92C 3C0E8019 */       lui $t6, %hi(D_ovl7_80190B58)
  /* 114150 8018D930 8DCE0B58 */        lw $t6, %lo(D_ovl7_80190B58)($t6)
  /* 114154 8018D934 3C198019 */       lui $t9, %hi(jtbl_ovl7_801907F0)
  /* 114158 8018D938 000E7880 */       sll $t7, $t6, 2
  /* 11415C 8018D93C 032FC821 */      addu $t9, $t9, $t7
  /* 114160 8018D940 8F3907F0 */        lw $t9, %lo(jtbl_ovl7_801907F0)($t9)
  /* 114164 8018D944 0320F809 */      jalr $t9
  /* 114168 8018D948 00000000 */       nop 
  /* 11416C 8018D94C 54400006 */      bnel $v0, $zero, .L8018D968
  /* 114170 8018D950 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114174 8018D954 0C063626 */       jal func_ovl7_8018D898
  /* 114178 8018D958 00000000 */       nop 
  /* 11417C 8018D95C 0C06347C */       jal func_ovl7_8018D1F0
  /* 114180 8018D960 00000000 */       nop 
  /* 114184 8018D964 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D968:
  /* 114188 8018D968 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11418C 8018D96C 03E00008 */        jr $ra
  /* 114190 8018D970 00000000 */       nop 

glabel func_ovl7_8018D974
  /* 114194 8018D974 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 114198 8018D978 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 11419C 8018D97C 908200D3 */       lbu $v0, 0xd3($a0) # D_ovl7_80190B58 + 211
  /* 1141A0 8018D980 1440000E */      bnez $v0, .L8018D9BC
  /* 1141A4 8018D984 2448FFFF */     addiu $t0, $v0, -1
  /* 1141A8 8018D988 908300D4 */       lbu $v1, 0xd4($a0) # D_ovl7_80190B58 + 212
  /* 1141AC 8018D98C 24020001 */     addiu $v0, $zero, 1
  /* 1141B0 8018D990 14600008 */      bnez $v1, .L8018D9B4
  /* 1141B4 8018D994 2479FFFF */     addiu $t9, $v1, -1
  /* 1141B8 8018D998 8C8E0018 */        lw $t6, 0x18($a0) # D_ovl7_80190B58 + 24
  /* 1141BC 8018D99C 3C188019 */       lui $t8, %hi(D_ovl7_8019081C)
  /* 1141C0 8018D9A0 000E7840 */       sll $t7, $t6, 1
  /* 1141C4 8018D9A4 030FC021 */      addu $t8, $t8, $t7
  /* 1141C8 8018D9A8 9318081C */       lbu $t8, %lo(D_ovl7_8019081C)($t8)
  /* 1141CC 8018D9AC 10000004 */         b .L8018D9C0
  /* 1141D0 8018D9B0 A09800D3 */        sb $t8, 0xd3($a0) # D_ovl7_80190B58 + 211
  .L8018D9B4:
  /* 1141D4 8018D9B4 03E00008 */        jr $ra
  /* 1141D8 8018D9B8 A09900D4 */        sb $t9, 0xd4($a0) # D_ovl7_80190B58 + 212

  .L8018D9BC:
  /* 1141DC 8018D9BC A08800D3 */        sb $t0, 0xd3($a0)
  .L8018D9C0:
  /* 1141E0 8018D9C0 908900D3 */       lbu $t1, 0xd3($a0)
  /* 1141E4 8018D9C4 00001025 */        or $v0, $zero, $zero
  /* 1141E8 8018D9C8 15200007 */      bnez $t1, .L8018D9E8
  /* 1141EC 8018D9CC 00000000 */       nop 
  /* 1141F0 8018D9D0 8C8A0018 */        lw $t2, 0x18($a0)
  /* 1141F4 8018D9D4 3C0C8019 */       lui $t4, %hi(D_ovl7_8019081D)
  /* 1141F8 8018D9D8 000A5840 */       sll $t3, $t2, 1
  /* 1141FC 8018D9DC 018B6021 */      addu $t4, $t4, $t3
  /* 114200 8018D9E0 918C081D */       lbu $t4, %lo(D_ovl7_8019081D)($t4)
  /* 114204 8018D9E4 A08C00D4 */        sb $t4, 0xd4($a0)
  .L8018D9E8:
  /* 114208 8018D9E8 03E00008 */        jr $ra
  /* 11420C 8018D9EC 00000000 */       nop 

glabel func_ovl7_8018D9F0
  /* 114210 8018D9F0 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 114214 8018D9F4 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 114218 8018D9F8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11421C 8018D9FC AFBF0014 */        sw $ra, 0x14($sp)
  /* 114220 8018DA00 91C20011 */       lbu $v0, 0x11($t6)
  /* 114224 8018DA04 24010001 */     addiu $at, $zero, 1
  /* 114228 8018DA08 10410005 */       beq $v0, $at, .L8018DA20
  /* 11422C 8018DA0C 24010002 */     addiu $at, $zero, 2
  /* 114230 8018DA10 10410007 */       beq $v0, $at, .L8018DA30
  /* 114234 8018DA14 00000000 */       nop 
  /* 114238 8018DA18 10000007 */         b .L8018DA38
  /* 11423C 8018DA1C 00000000 */       nop 
  .L8018DA20:
  /* 114240 8018DA20 0C06343A */       jal func_ovl7_8018D0E8
  /* 114244 8018DA24 00000000 */       nop 
  /* 114248 8018DA28 10000003 */         b .L8018DA38
  /* 11424C 8018DA2C 00000000 */       nop 
  .L8018DA30:
  /* 114250 8018DA30 0C063647 */       jal func_ovl7_8018D91C
  /* 114254 8018DA34 00000000 */       nop 
  .L8018DA38:
  /* 114258 8018DA38 0C06365D */       jal func_ovl7_8018D974
  /* 11425C 8018DA3C 00000000 */       nop 
  /* 114260 8018DA40 14400005 */      bnez $v0, .L8018DA58
  /* 114264 8018DA44 3C048013 */       lui $a0, 0x8013
  /* 114268 8018DA48 0C002979 */       jal func_8000A5E4
  /* 11426C 8018DA4C 00000000 */       nop 
  /* 114270 8018DA50 10000003 */         b .L8018DA60
  /* 114274 8018DA54 00000000 */       nop 
  .L8018DA58:
  /* 114278 8018DA58 0C0433B3 */       jal func_ovl2_8010CECC
  /* 11427C 8018DA5C 8C841460 */        lw $a0, 0x1460($a0)
  .L8018DA60:
  /* 114280 8018DA60 0C045200 */       jal func_ovl2_80114800
  /* 114284 8018DA64 00000000 */       nop 
  /* 114288 8018DA68 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11428C 8018DA6C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 114290 8018DA70 03E00008 */        jr $ra
  /* 114294 8018DA74 00000000 */       nop 

glabel func_ovl7_8018DA78
  /* 114298 8018DA78 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11429C 8018DA7C AFBF0014 */        sw $ra, 0x14($sp)
  /* 1142A0 8018DA80 0C06367C */       jal func_ovl7_8018D9F0
  /* 1142A4 8018DA84 00000000 */       nop 
  /* 1142A8 8018DA88 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1142AC 8018DA8C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1142B0 8018DA90 03E00008 */        jr $ra
  /* 1142B4 8018DA94 00000000 */       nop 

glabel func_ovl7_8018DA98
  /* 1142B8 8018DA98 3C058019 */       lui $a1, %hi(D_ovl7_80190968)
  /* 1142BC 8018DA9C 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 1142C0 8018DAA0 24A50968 */     addiu $a1, $a1, %lo(D_ovl7_80190968)
  /* 1142C4 8018DAA4 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 1142C8 8018DAA8 3C07800A */       lui $a3, %hi(gSceneData)
  /* 1142CC 8018DAAC 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 1142D0 8018DAB0 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 1142D4 8018DAB4 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 1142D8 8018DAB8 25C901EC */     addiu $t1, $t6, 0x1ec
  /* 1142DC 8018DABC 00A0C825 */        or $t9, $a1, $zero
  .L8018DAC0:
  /* 1142E0 8018DAC0 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 1142E4 8018DAC4 25CE000C */     addiu $t6, $t6, 0xc
  /* 1142E8 8018DAC8 2739000C */     addiu $t9, $t9, 0xc
  /* 1142EC 8018DACC AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1142F0 8018DAD0 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 1142F4 8018DAD4 AF2FFFF8 */        sw $t7, -8($t9)
  /* 1142F8 8018DAD8 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 1142FC 8018DADC 15C9FFF8 */       bne $t6, $t1, .L8018DAC0
  /* 114300 8018DAE0 AF38FFFC */        sw $t8, -4($t9)
  /* 114304 8018DAE4 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 114308 8018DAE8 240A0007 */     addiu $t2, $zero, 7
  /* 11430C 8018DAEC 24090064 */     addiu $t1, $zero, 0x64
  /* 114310 8018DAF0 AF380000 */        sw $t8, ($t9)
  /* 114314 8018DAF4 90B9001D */       lbu $t9, 0x1d($a1) # D_ovl7_80190968 + 29
  /* 114318 8018DAF8 90EC000F */       lbu $t4, 0xf($a3) # gSceneData + 15
  /* 11431C 8018DAFC ACC50000 */        sw $a1, ($a2) # gpBattleState + 0
  /* 114320 8018DB00 332FFF7F */      andi $t7, $t9, 0xff7f
  /* 114324 8018DB04 A0AA0000 */        sb $t2, ($a1) # D_ovl7_80190968 + 0
  /* 114328 8018DB08 A0A90006 */        sb $t1, 6($a1) # D_ovl7_80190968 + 6
  /* 11432C 8018DB0C A0AF001D */        sb $t7, 0x1d($a1) # D_ovl7_80190968 + 29
  /* 114330 8018DB10 ACA0000C */        sw $zero, 0xc($a1) # D_ovl7_80190968 + 12
  /* 114334 8018DB14 A0AC0001 */        sb $t4, 1($a1) # D_ovl7_80190968 + 1
  /* 114338 8018DB18 24050004 */     addiu $a1, $zero, 4
  /* 11433C 8018DB1C 00001825 */        or $v1, $zero, $zero
  /* 114340 8018DB20 00002025 */        or $a0, $zero, $zero
  /* 114344 8018DB24 24020002 */     addiu $v0, $zero, 2
  .L8018DB28:
  /* 114348 8018DB28 90EA0013 */       lbu $t2, 0x13($a3) # gSceneData + 19
  /* 11434C 8018DB2C 546A0014 */      bnel $v1, $t2, .L8018DB80
  /* 114350 8018DB30 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 114354 8018DB34 8CCB0000 */        lw $t3, ($a2) # gpBattleState + 0
  /* 114358 8018DB38 01646021 */      addu $t4, $t3, $a0
  /* 11435C 8018DB3C A1800022 */        sb $zero, 0x22($t4)
  /* 114360 8018DB40 8CC90000 */        lw $t1, ($a2) # gpBattleState + 0
  /* 114364 8018DB44 90ED003B */       lbu $t5, 0x3b($a3) # gSceneData + 59
  /* 114368 8018DB48 01247021 */      addu $t6, $t1, $a0
  /* 11436C 8018DB4C A1CD0023 */        sb $t5, 0x23($t6) # gDefaultBattleState + 35
  /* 114370 8018DB50 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 114374 8018DB54 90F9003C */       lbu $t9, 0x3c($a3) # gSceneData + 60
  /* 114378 8018DB58 01E4C021 */      addu $t8, $t7, $a0
  /* 11437C 8018DB5C A3190026 */        sb $t9, 0x26($t8)
  /* 114380 8018DB60 8CCA0000 */        lw $t2, ($a2) # gpBattleState + 0
  /* 114384 8018DB64 01445821 */      addu $t3, $t2, $a0
  /* 114388 8018DB68 A1600024 */        sb $zero, 0x24($t3)
  /* 11438C 8018DB6C 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 114390 8018DB70 01844821 */      addu $t1, $t4, $a0
  /* 114394 8018DB74 10000004 */         b .L8018DB88
  /* 114398 8018DB78 A1230028 */        sb $v1, 0x28($t1)
  /* 11439C 8018DB7C 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  .L8018DB80:
  /* 1143A0 8018DB80 01A47021 */      addu $t6, $t5, $a0
  /* 1143A4 8018DB84 A1C20022 */        sb $v0, 0x22($t6) # gDefaultBattleState + 34
  .L8018DB88:
  /* 1143A8 8018DB88 90F90013 */       lbu $t9, 0x13($a3) # gSceneData + 19
  /* 1143AC 8018DB8C 246F0001 */     addiu $t7, $v1, 1
  /* 1143B0 8018DB90 55F90015 */      bnel $t7, $t9, .L8018DBE8
  /* 1143B4 8018DB94 8CC90000 */        lw $t1, ($a2) # gpBattleState + 0
  /* 1143B8 8018DB98 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 1143BC 8018DB9C 03045021 */      addu $t2, $t8, $a0
  /* 1143C0 8018DBA0 A1400096 */        sb $zero, 0x96($t2)
  /* 1143C4 8018DBA4 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 1143C8 8018DBA8 90EB003B */       lbu $t3, 0x3b($a3) # gSceneData + 59
  /* 1143CC 8018DBAC 246A0001 */     addiu $t2, $v1, 1
  /* 1143D0 8018DBB0 01844821 */      addu $t1, $t4, $a0
  /* 1143D4 8018DBB4 A12B0097 */        sb $t3, 0x97($t1)
  /* 1143D8 8018DBB8 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 1143DC 8018DBBC 90ED003C */       lbu $t5, 0x3c($a3) # gSceneData + 60
  /* 1143E0 8018DBC0 01C47821 */      addu $t7, $t6, $a0
  /* 1143E4 8018DBC4 A1ED009A */        sb $t5, 0x9a($t7)
  /* 1143E8 8018DBC8 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  /* 1143EC 8018DBCC 0324C021 */      addu $t8, $t9, $a0
  /* 1143F0 8018DBD0 A3000098 */        sb $zero, 0x98($t8)
  /* 1143F4 8018DBD4 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 1143F8 8018DBD8 01845821 */      addu $t3, $t4, $a0
  /* 1143FC 8018DBDC 10000004 */         b .L8018DBF0
  /* 114400 8018DBE0 A16A009C */        sb $t2, 0x9c($t3)
  /* 114404 8018DBE4 8CC90000 */        lw $t1, ($a2) # gpBattleState + 0
  .L8018DBE8:
  /* 114408 8018DBE8 01247021 */      addu $t6, $t1, $a0
  /* 11440C 8018DBEC A1C20096 */        sb $v0, 0x96($t6)
  .L8018DBF0:
  /* 114410 8018DBF0 24630002 */     addiu $v1, $v1, 2
  /* 114414 8018DBF4 1465FFCC */       bne $v1, $a1, .L8018DB28
  /* 114418 8018DBF8 248400E8 */     addiu $a0, $a0, 0xe8
  /* 11441C 8018DBFC 90ED0013 */       lbu $t5, 0x13($a3) # gSceneData + 19
  /* 114420 8018DC00 24040001 */     addiu $a0, $zero, 1
  /* 114424 8018DC04 00001025 */        or $v0, $zero, $zero
  /* 114428 8018DC08 15A00003 */      bnez $t5, .L8018DC18
  /* 11442C 8018DC0C 00000000 */       nop 
  /* 114430 8018DC10 10000001 */         b .L8018DC18
  /* 114434 8018DC14 24020001 */     addiu $v0, $zero, 1
  .L8018DC18:
  /* 114438 8018DC18 000218C0 */       sll $v1, $v0, 3
  /* 11443C 8018DC1C 00621823 */      subu $v1, $v1, $v0
  /* 114440 8018DC20 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 114444 8018DC24 00031880 */       sll $v1, $v1, 2
  /* 114448 8018DC28 00621821 */      addu $v1, $v1, $v0
  /* 11444C 8018DC2C 00031880 */       sll $v1, $v1, 2
  /* 114450 8018DC30 01E3C821 */      addu $t9, $t7, $v1
  /* 114454 8018DC34 A3240022 */        sb $a0, 0x22($t9)
  /* 114458 8018DC38 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 11445C 8018DC3C 24050004 */     addiu $a1, $zero, 4
  /* 114460 8018DC40 24190003 */     addiu $t9, $zero, 3
  /* 114464 8018DC44 03036021 */      addu $t4, $t8, $v1
  /* 114468 8018DC48 A185002A */        sb $a1, 0x2a($t4)
  /* 11446C 8018DC4C 8CCB0000 */        lw $t3, ($a2) # gpBattleState + 0
  /* 114470 8018DC50 90EA003D */       lbu $t2, 0x3d($a3) # gSceneData + 61
  /* 114474 8018DC54 3C088019 */       lui $t0, %hi(D_ovl7_80190B58)
  /* 114478 8018DC58 01634821 */      addu $t1, $t3, $v1
  /* 11447C 8018DC5C A12A0023 */        sb $t2, 0x23($t1)
  /* 114480 8018DC60 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 114484 8018DC64 90EE003E */       lbu $t6, 0x3e($a3) # gSceneData + 62
  /* 114488 8018DC68 25080B58 */     addiu $t0, $t0, %lo(D_ovl7_80190B58)
  /* 11448C 8018DC6C 01A37821 */      addu $t7, $t5, $v1
  /* 114490 8018DC70 A1EE0026 */        sb $t6, 0x26($t7)
  /* 114494 8018DC74 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 114498 8018DC78 03036021 */      addu $t4, $t8, $v1
  /* 11449C 8018DC7C A1990020 */        sb $t9, 0x20($t4)
  /* 1144A0 8018DC80 8CCB0000 */        lw $t3, ($a2) # gpBattleState + 0
  /* 1144A4 8018DC84 2418FFFF */     addiu $t8, $zero, -1
  /* 1144A8 8018DC88 24190001 */     addiu $t9, $zero, 1
  /* 1144AC 8018DC8C 01635021 */      addu $t2, $t3, $v1
  /* 1144B0 8018DC90 A1440024 */        sb $a0, 0x24($t2)
  /* 1144B4 8018DC94 8CC90000 */        lw $t1, ($a2) # gpBattleState + 0
  /* 1144B8 8018DC98 240A001E */     addiu $t2, $zero, 0x1e
  /* 1144BC 8018DC9C 01236821 */      addu $t5, $t1, $v1
  /* 1144C0 8018DCA0 A1A50028 */        sb $a1, 0x28($t5)
  /* 1144C4 8018DCA4 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 1144C8 8018DCA8 A1C40004 */        sb $a0, 4($t6)
  /* 1144CC 8018DCAC 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 1144D0 8018DCB0 A1E40005 */        sb $a0, 5($t7)
  /* 1144D4 8018DCB4 AD000000 */        sw $zero, ($t0) # D_ovl7_80190B58 + 0
  /* 1144D8 8018DCB8 AD000004 */        sw $zero, 4($t0) # D_ovl7_80190B58 + 4
  /* 1144DC 8018DCBC AD000008 */        sw $zero, 8($t0) # D_ovl7_80190B58 + 8
  /* 1144E0 8018DCC0 AD18000C */        sw $t8, 0xc($t0) # D_ovl7_80190B58 + 12
  /* 1144E4 8018DCC4 AD000014 */        sw $zero, 0x14($t0) # D_ovl7_80190B58 + 20
  /* 1144E8 8018DCC8 AD000018 */        sw $zero, 0x18($t0) # D_ovl7_80190B58 + 24
  /* 1144EC 8018DCCC AD19001C */        sw $t9, 0x1c($t0) # D_ovl7_80190B58 + 28
  /* 1144F0 8018DCD0 A10000D3 */        sb $zero, 0xd3($t0) # D_ovl7_80190B58 + 211
  /* 1144F4 8018DCD4 A10000D4 */        sb $zero, 0xd4($t0) # D_ovl7_80190B58 + 212
  /* 1144F8 8018DCD8 A10000D5 */        sb $zero, 0xd5($t0) # D_ovl7_80190B58 + 213
  /* 1144FC 8018DCDC AD000010 */        sw $zero, 0x10($t0) # D_ovl7_80190B58 + 16
  /* 114500 8018DCE0 AD020020 */        sw $v0, 0x20($t0) # D_ovl7_80190B58 + 32
  /* 114504 8018DCE4 A50000C4 */        sh $zero, 0xc4($t0) # D_ovl7_80190B58 + 196
  /* 114508 8018DCE8 A50000C6 */        sh $zero, 0xc6($t0) # D_ovl7_80190B58 + 198
  /* 11450C 8018DCEC A50000C8 */        sh $zero, 0xc8($t0) # D_ovl7_80190B58 + 200
  /* 114510 8018DCF0 AD0A00CC */        sw $t2, 0xcc($t0) # D_ovl7_80190B58 + 204
  /* 114514 8018DCF4 A10000D0 */        sb $zero, 0xd0($t0) # D_ovl7_80190B58 + 208
  /* 114518 8018DCF8 A10000D1 */        sb $zero, 0xd1($t0) # D_ovl7_80190B58 + 209
  /* 11451C 8018DCFC A10000D2 */        sb $zero, 0xd2($t0) # D_ovl7_80190B58 + 210
  /* 114520 8018DD00 A50000D6 */        sh $zero, 0xd6($t0) # D_ovl7_80190B58 + 214
  /* 114524 8018DD04 03E00008 */        jr $ra
  /* 114528 8018DD08 A10000D8 */        sb $zero, 0xd8($t0) # D_ovl7_80190B58 + 216

glabel func_ovl7_8018DD0C
  /* 11452C 8018DD0C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 114530 8018DD10 3C040000 */       lui $a0, %hi(D_NF_000000FE)
  /* 114534 8018DD14 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114538 8018DD18 248400FE */     addiu $a0, $a0, %lo(D_NF_000000FE)
  /* 11453C 8018DD1C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 114540 8018DD20 AFA40018 */        sw $a0, 0x18($sp)
  /* 114544 8018DD24 00402025 */        or $a0, $v0, $zero
  /* 114548 8018DD28 0C001260 */       jal hal_alloc
  /* 11454C 8018DD2C 24050010 */     addiu $a1, $zero, 0x10
  /* 114550 8018DD30 8FA40018 */        lw $a0, 0x18($sp)
  /* 114554 8018DD34 0C033722 */       jal rldm_get_file_with_external_heap
  /* 114558 8018DD38 00402825 */        or $a1, $v0, $zero
  /* 11455C 8018DD3C 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 114560 8018DD40 3C0E0000 */       lui $t6, %hi(D_NF_00000000)
  /* 114564 8018DD44 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 114568 8018DD48 25CE0000 */     addiu $t6, $t6, %lo(D_NF_00000000)
  /* 11456C 8018DD4C 004E7821 */      addu $t7, $v0, $t6
  /* 114570 8018DD50 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114574 8018DD54 3C180000 */       lui $t8, %hi(D_NF_00000020)
  /* 114578 8018DD58 3C080000 */       lui $t0, %hi(D_NF_000000BC)
  /* 11457C 8018DD5C 3C0A0000 */       lui $t2, %hi(D_NF_0000013C)
  /* 114580 8018DD60 3C0C0000 */       lui $t4, %hi(D_NF_0000010C)
  /* 114584 8018DD64 3C0E0000 */       lui $t6, %hi(D_NF_000001B8)
  /* 114588 8018DD68 AC6F0024 */        sw $t7, 0x24($v1) # D_ovl7_80190B58 + 36
  /* 11458C 8018DD6C 27180020 */     addiu $t8, $t8, %lo(D_NF_00000020)
  /* 114590 8018DD70 250800BC */     addiu $t0, $t0, %lo(D_NF_000000BC)
  /* 114594 8018DD74 254A013C */     addiu $t2, $t2, %lo(D_NF_0000013C)
  /* 114598 8018DD78 258C010C */     addiu $t4, $t4, %lo(D_NF_0000010C)
  /* 11459C 8018DD7C 25CE01B8 */     addiu $t6, $t6, %lo(D_NF_000001B8)
  /* 1145A0 8018DD80 0058C821 */      addu $t9, $v0, $t8
  /* 1145A4 8018DD84 00484821 */      addu $t1, $v0, $t0
  /* 1145A8 8018DD88 004A5821 */      addu $t3, $v0, $t2
  /* 1145AC 8018DD8C 004C6821 */      addu $t5, $v0, $t4
  /* 1145B0 8018DD90 004E7821 */      addu $t7, $v0, $t6
  /* 1145B4 8018DD94 AC790028 */        sw $t9, 0x28($v1) # D_ovl7_80190B58 + 40
  /* 1145B8 8018DD98 AC69002C */        sw $t1, 0x2c($v1) # D_ovl7_80190B58 + 44
  /* 1145BC 8018DD9C AC6B0030 */        sw $t3, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 1145C0 8018DDA0 AC6D0034 */        sw $t5, 0x34($v1) # D_ovl7_80190B58 + 52
  /* 1145C4 8018DDA4 AC6F0038 */        sw $t7, 0x38($v1) # D_ovl7_80190B58 + 56
  /* 1145C8 8018DDA8 03E00008 */        jr $ra
  /* 1145CC 8018DDAC 27BD0028 */     addiu $sp, $sp, 0x28

  /* 1145D0 8018DDB0 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 1145D4 8018DDB4 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 1145D8 8018DDB8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1145DC 8018DDBC AFBF0014 */        sw $ra, 0x14($sp)
  /* 1145E0 8018DDC0 91C20001 */       lbu $v0, 1($t6)
  /* 1145E4 8018DDC4 3C0F8019 */       lui $t7, %hi(D_ovl7_80190848)
  /* 1145E8 8018DDC8 3C198013 */       lui $t9, %hi(gpGroundInfo)
  /* 1145EC 8018DDCC 00021080 */       sll $v0, $v0, 2
  /* 1145F0 8018DDD0 01E27821 */      addu $t7, $t7, $v0
  /* 1145F4 8018DDD4 8DEF0848 */        lw $t7, %lo(D_ovl7_80190848)($t7)
  /* 1145F8 8018DDD8 8F391300 */        lw $t9, %lo(gpGroundInfo)($t9)
  /* 1145FC 8018DDDC 3C098019 */       lui $t1, %hi(D_ovl7_801907B8)
  /* 114600 8018DDE0 000FC080 */       sll $t8, $t7, 2
  /* 114604 8018DDE4 01224821 */      addu $t1, $t1, $v0
  /* 114608 8018DDE8 030FC023 */      subu $t8, $t8, $t7
  /* 11460C 8018DDEC 8D2907B8 */        lw $t1, %lo(D_ovl7_801907B8)($t1)
  /* 114610 8018DDF0 8F280048 */        lw $t0, 0x48($t9)
  /* 114614 8018DDF4 0018C080 */       sll $t8, $t8, 2
  /* 114618 8018DDF8 3C048019 */       lui $a0, %hi(D_ovl7_80190824)
  /* 11461C 8018DDFC 00982021 */      addu $a0, $a0, $t8
  /* 114620 8018DE00 8C840824 */        lw $a0, %lo(D_ovl7_80190824)($a0)
  /* 114624 8018DE04 0C033776 */       jal rldm_get_file_external_force
  /* 114628 8018DE08 01092823 */      subu $a1, $t0, $t1
  /* 11462C 8018DE0C 3C0A800A */       lui $t2, %hi(gpBattleState)
  /* 114630 8018DE10 8D4A50E8 */        lw $t2, %lo(gpBattleState)($t2)
  /* 114634 8018DE14 3C0D8019 */       lui $t5, %hi(D_ovl7_80190848)
  /* 114638 8018DE18 3C0F8019 */       lui $t7, %hi(D_ovl7_80190828)
  /* 11463C 8018DE1C 914B0001 */       lbu $t3, 1($t2)
  /* 114640 8018DE20 3C198013 */       lui $t9, %hi(gpGroundInfo)
  /* 114644 8018DE24 8F391300 */        lw $t9, %lo(gpGroundInfo)($t9)
  /* 114648 8018DE28 000B6080 */       sll $t4, $t3, 2
  /* 11464C 8018DE2C 01AC6821 */      addu $t5, $t5, $t4
  /* 114650 8018DE30 8DAD0848 */        lw $t5, %lo(D_ovl7_80190848)($t5)
  /* 114654 8018DE34 000D7080 */       sll $t6, $t5, 2
  /* 114658 8018DE38 01CD7023 */      subu $t6, $t6, $t5
  /* 11465C 8018DE3C 000E7080 */       sll $t6, $t6, 2
  /* 114660 8018DE40 01EE7821 */      addu $t7, $t7, $t6
  /* 114664 8018DE44 8DEF0828 */        lw $t7, %lo(D_ovl7_80190828)($t7)
  /* 114668 8018DE48 01E2C021 */      addu $t8, $t7, $v0
  /* 11466C 8018DE4C AF380048 */        sw $t8, 0x48($t9)
  /* 114670 8018DE50 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114674 8018DE54 27BD0018 */     addiu $sp, $sp, 0x18
  /* 114678 8018DE58 03E00008 */        jr $ra
  /* 11467C 8018DE5C 00000000 */       nop 

glabel func_ovl7_8018DE60
  /* 114680 8018DE60 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 114684 8018DE64 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 114688 8018DE68 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11468C 8018DE6C AFBF0014 */        sw $ra, 0x14($sp)
  /* 114690 8018DE70 91F80001 */       lbu $t8, 1($t7)
  /* 114694 8018DE74 3C088019 */       lui $t0, %hi(D_ovl7_80190848)
  /* 114698 8018DE78 3C0B8019 */       lui $t3, %hi(D_ovl7_80190824)
  /* 11469C 8018DE7C 0018C880 */       sll $t9, $t8, 2
  /* 1146A0 8018DE80 01194021 */      addu $t0, $t0, $t9
  /* 1146A4 8018DE84 8D080848 */        lw $t0, %lo(D_ovl7_80190848)($t0)
  /* 1146A8 8018DE88 256B0824 */     addiu $t3, $t3, %lo(D_ovl7_80190824)
  /* 1146AC 8018DE8C 3C0E8013 */       lui $t6, %hi(gpGroundInfo)
  /* 1146B0 8018DE90 00084880 */       sll $t1, $t0, 2
  /* 1146B4 8018DE94 01284823 */      subu $t1, $t1, $t0
  /* 1146B8 8018DE98 00094880 */       sll $t1, $t1, 2
  /* 1146BC 8018DE9C 252A0008 */     addiu $t2, $t1, 8
  /* 1146C0 8018DEA0 014B6021 */      addu $t4, $t2, $t3
  /* 1146C4 8018DEA4 918F0000 */       lbu $t7, ($t4)
  /* 1146C8 8018DEA8 8DCE1300 */        lw $t6, %lo(gpGroundInfo)($t6)
  /* 1146CC 8018DEAC A1CF004C */        sb $t7, 0x4c($t6)
  /* 1146D0 8018DEB0 918D0001 */       lbu $t5, 1($t4)
  /* 1146D4 8018DEB4 A1CD004D */        sb $t5, 0x4d($t6)
  /* 1146D8 8018DEB8 918F0002 */       lbu $t7, 2($t4)
  /* 1146DC 8018DEBC 0C044510 */       jal func_ovl2_80111440
  /* 1146E0 8018DEC0 A1CF004E */        sb $t7, 0x4e($t6)
  /* 1146E4 8018DEC4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1146E8 8018DEC8 24180001 */     addiu $t8, $zero, 1
  /* 1146EC 8018DECC 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 1146F0 8018DED0 A0381580 */        sb $t8, %lo(D_ovl2_80131580)($at)
  /* 1146F4 8018DED4 03E00008 */        jr $ra
  /* 1146F8 8018DED8 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl7_8018DEDC
  /* 1146FC 8018DEDC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 114700 8018DEE0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114704 8018DEE4 00A03025 */        or $a2, $a1, $zero
  /* 114708 8018DEE8 8CA50004 */        lw $a1, 4($a1)
  /* 11470C 8018DEEC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 114710 8018DEF0 AFA6001C */        sw $a2, 0x1c($sp)
  /* 114714 8018DEF4 8FA6001C */        lw $a2, 0x1c($sp)
  /* 114718 8018DEF8 84CE0000 */        lh $t6, ($a2)
  /* 11471C 8018DEFC 448E2000 */      mtc1 $t6, $f4
  /* 114720 8018DF00 00000000 */       nop 
  /* 114724 8018DF04 468021A0 */   cvt.s.w $f6, $f4
  /* 114728 8018DF08 E4460058 */      swc1 $f6, 0x58($v0)
  /* 11472C 8018DF0C 84CF0002 */        lh $t7, 2($a2)
  /* 114730 8018DF10 448F4000 */      mtc1 $t7, $f8
  /* 114734 8018DF14 00000000 */       nop 
  /* 114738 8018DF18 468042A0 */   cvt.s.w $f10, $f8
  /* 11473C 8018DF1C E44A005C */      swc1 $f10, 0x5c($v0)
  /* 114740 8018DF20 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114744 8018DF24 27BD0018 */     addiu $sp, $sp, 0x18
  /* 114748 8018DF28 03E00008 */        jr $ra
  /* 11474C 8018DF2C 00000000 */       nop 

glabel func_ovl7_8018DF30
  /* 114750 8018DF30 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 114754 8018DF34 AFB0001C */        sw $s0, 0x1c($sp)
  /* 114758 8018DF38 3C108000 */       lui $s0, %hi(D_NF_80000008)
  /* 11475C 8018DF3C AFBF003C */        sw $ra, 0x3c($sp)
  /* 114760 8018DF40 AFB70038 */        sw $s7, 0x38($sp)
  /* 114764 8018DF44 AFB60034 */        sw $s6, 0x34($sp)
  /* 114768 8018DF48 AFB50030 */        sw $s5, 0x30($sp)
  /* 11476C 8018DF4C AFB4002C */        sw $s4, 0x2c($sp)
  /* 114770 8018DF50 AFB30028 */        sw $s3, 0x28($sp)
  /* 114774 8018DF54 AFB20024 */        sw $s2, 0x24($sp)
  /* 114778 8018DF58 AFB10020 */        sw $s1, 0x20($sp)
  /* 11477C 8018DF5C 02003825 */        or $a3, $s0, $zero
  /* 114780 8018DF60 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 114784 8018DF64 00002825 */        or $a1, $zero, $zero
  /* 114788 8018DF68 0C00265A */       jal omMakeGObjCommon
  /* 11478C 8018DF6C 2406000B */     addiu $a2, $zero, 0xb
  /* 114790 8018DF70 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 114794 8018DF74 240EFFFF */     addiu $t6, $zero, -1
  /* 114798 8018DF78 00408825 */        or $s1, $v0, $zero
  /* 11479C 8018DF7C AFAE0010 */        sw $t6, 0x10($sp)
  /* 1147A0 8018DF80 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1147A4 8018DF84 00402025 */        or $a0, $v0, $zero
  /* 1147A8 8018DF88 24060017 */     addiu $a2, $zero, 0x17
  /* 1147AC 8018DF8C 0C00277D */       jal func_80009DF4
  /* 1147B0 8018DF90 02003825 */        or $a3, $s0, $zero
  /* 1147B4 8018DF94 3C128019 */       lui $s2, %hi(D_ovl7_80190B58)
  /* 1147B8 8018DF98 26520B58 */     addiu $s2, $s2, %lo(D_ovl7_80190B58)
  /* 1147BC 8018DF9C 00008025 */        or $s0, $zero, $zero
  /* 1147C0 8018DFA0 24170020 */     addiu $s7, $zero, 0x20
  /* 1147C4 8018DFA4 24160201 */     addiu $s6, $zero, 0x201
  /* 1147C8 8018DFA8 241500DD */     addiu $s5, $zero, 0xdd
  /* 1147CC 8018DFAC 241400AE */     addiu $s4, $zero, 0xae
  /* 1147D0 8018DFB0 241300AF */     addiu $s3, $zero, 0xaf
  .L8018DFB4:
  /* 1147D4 8018DFB4 8E4F0024 */        lw $t7, 0x24($s2) # D_ovl7_80190B58 + 36
  /* 1147D8 8018DFB8 02202025 */        or $a0, $s1, $zero
  /* 1147DC 8018DFBC 0C0637B7 */       jal func_ovl7_8018DEDC
  /* 1147E0 8018DFC0 020F2821 */      addu $a1, $s0, $t7
  /* 1147E4 8018DFC4 26100008 */     addiu $s0, $s0, %lo(D_NF_80000008)
  /* 1147E8 8018DFC8 A0530028 */        sb $s3, 0x28($v0)
  /* 1147EC 8018DFCC A0540029 */        sb $s4, 0x29($v0)
  /* 1147F0 8018DFD0 A055002A */        sb $s5, 0x2a($v0)
  /* 1147F4 8018DFD4 A0400060 */        sb $zero, 0x60($v0)
  /* 1147F8 8018DFD8 A0400061 */        sb $zero, 0x61($v0)
  /* 1147FC 8018DFDC A0400062 */        sb $zero, 0x62($v0)
  /* 114800 8018DFE0 1617FFF4 */       bne $s0, $s7, .L8018DFB4
  /* 114804 8018DFE4 A4560024 */        sh $s6, 0x24($v0)
  /* 114808 8018DFE8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11480C 8018DFEC 8FB0001C */        lw $s0, 0x1c($sp)
  /* 114810 8018DFF0 8FB10020 */        lw $s1, 0x20($sp)
  /* 114814 8018DFF4 8FB20024 */        lw $s2, 0x24($sp)
  /* 114818 8018DFF8 8FB30028 */        lw $s3, 0x28($sp)
  /* 11481C 8018DFFC 8FB4002C */        lw $s4, 0x2c($sp)
  /* 114820 8018E000 8FB50030 */        lw $s5, 0x30($sp)
  /* 114824 8018E004 8FB60034 */        lw $s6, 0x34($sp)
  /* 114828 8018E008 8FB70038 */        lw $s7, 0x38($sp)
  /* 11482C 8018E00C 03E00008 */        jr $ra
  /* 114830 8018E010 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl7_8018E014
  /* 114834 8018E014 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 114838 8018E018 3C068019 */       lui $a2, %hi(D_ovl7_801907E4)
  /* 11483C 8018E01C 3C078019 */       lui $a3, %hi(D_ovl7_801907DC)
  /* 114840 8018E020 3C098019 */       lui $t1, %hi(D_ovl7_801907E2)
  /* 114844 8018E024 3C088019 */       lui $t0, %hi(D_ovl7_80190B58)
  /* 114848 8018E028 44810000 */      mtc1 $at, $f0 # 0.5 to cop1
  /* 11484C 8018E02C 8C820074 */        lw $v0, 0x74($a0)
  /* 114850 8018E030 25080B58 */     addiu $t0, $t0, %lo(D_ovl7_80190B58)
  /* 114854 8018E034 252907E2 */     addiu $t1, $t1, %lo(D_ovl7_801907E2)
  /* 114858 8018E038 24E707DC */     addiu $a3, $a3, %lo(D_ovl7_801907DC)
  /* 11485C 8018E03C 24C607E4 */     addiu $a2, $a2, %lo(D_ovl7_801907E4)
  /* 114860 8018E040 00001825 */        or $v1, $zero, $zero
  .L8018E044:
  /* 114864 8018E044 90C40000 */       lbu $a0, ($a2) # D_ovl7_801907E4 + 0
  /* 114868 8018E048 8D0F0028 */        lw $t7, 0x28($t0) # D_ovl7_80190B58 + 40
  /* 11486C 8018E04C 00406825 */        or $t5, $v0, $zero
  /* 114870 8018E050 00A4001A */       div $zero, $a1, $a0
  /* 114874 8018E054 00001812 */      mflo $v1
  /* 114878 8018E058 0003C080 */       sll $t8, $v1, 2
  /* 11487C 8018E05C 01F8C821 */      addu $t9, $t7, $t8
  /* 114880 8018E060 00640019 */     multu $v1, $a0
  /* 114884 8018E064 8F2A0000 */        lw $t2, ($t9)
  /* 114888 8018E068 14800002 */      bnez $a0, .L8018E074
  /* 11488C 8018E06C 00000000 */       nop 
  /* 114890 8018E070 0007000D */     break 7
  .L8018E074:
  /* 114894 8018E074 2401FFFF */     addiu $at, $zero, -1
  /* 114898 8018E078 14810004 */       bne $a0, $at, .L8018E08C
  /* 11489C 8018E07C 3C018000 */       lui $at, 0x8000
  /* 1148A0 8018E080 14A10002 */       bne $a1, $at, .L8018E08C
  /* 1148A4 8018E084 00000000 */       nop 
  /* 1148A8 8018E088 0006000D */     break 6
  .L8018E08C:
  /* 1148AC 8018E08C 00007012 */      mflo $t6
  /* 1148B0 8018E090 00AE2823 */      subu $a1, $a1, $t6
  /* 1148B4 8018E094 254E003C */     addiu $t6, $t2, 0x3c
  .L8018E098:
  /* 1148B8 8018E098 8D4C0000 */        lw $t4, ($t2)
  /* 1148BC 8018E09C 254A000C */     addiu $t2, $t2, 0xc
  /* 1148C0 8018E0A0 25AD000C */     addiu $t5, $t5, 0xc
  /* 1148C4 8018E0A4 ADAC0004 */        sw $t4, 4($t5)
  /* 1148C8 8018E0A8 8D4BFFF8 */        lw $t3, -8($t2)
  /* 1148CC 8018E0AC ADAB0008 */        sw $t3, 8($t5)
  /* 1148D0 8018E0B0 8D4CFFFC */        lw $t4, -4($t2)
  /* 1148D4 8018E0B4 154EFFF8 */       bne $t2, $t6, .L8018E098
  /* 1148D8 8018E0B8 ADAC000C */        sw $t4, 0xc($t5)
  /* 1148DC 8018E0BC 8D4C0000 */        lw $t4, ($t2)
  /* 1148E0 8018E0C0 ADAC0010 */        sw $t4, 0x10($t5)
  /* 1148E4 8018E0C4 8D4B0004 */        lw $t3, 4($t2)
  /* 1148E8 8018E0C8 ADAB0014 */        sw $t3, 0x14($t5)
  /* 1148EC 8018E0CC 94EF0000 */       lhu $t7, ($a3) # D_ovl7_801907DC + 0
  /* 1148F0 8018E0D0 448F2000 */      mtc1 $t7, $f4
  /* 1148F4 8018E0D4 05E10005 */      bgez $t7, .L8018E0EC
  /* 1148F8 8018E0D8 468021A0 */   cvt.s.w $f6, $f4
  /* 1148FC 8018E0DC 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 114900 8018E0E0 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 114904 8018E0E4 00000000 */       nop 
  /* 114908 8018E0E8 46083180 */     add.s $f6, $f6, $f8
  .L8018E0EC:
  /* 11490C 8018E0EC 84580014 */        lh $t8, 0x14($v0)
  /* 114910 8018E0F0 24E70002 */     addiu $a3, $a3, 2
  /* 114914 8018E0F4 24C60001 */     addiu $a2, $a2, 1
  /* 114918 8018E0F8 44985000 */      mtc1 $t8, $f10
  /* 11491C 8018E0FC 00000000 */       nop 
  /* 114920 8018E100 46805420 */   cvt.s.w $f16, $f10
  /* 114924 8018E104 46008482 */     mul.s $f18, $f16, $f0
  /* 114928 8018E108 46123101 */     sub.s $f4, $f6, $f18
  /* 11492C 8018E10C 4600220D */ trunc.w.s $f8, $f4
  /* 114930 8018E110 440E4000 */      mfc1 $t6, $f8
  /* 114934 8018E114 00000000 */       nop 
  /* 114938 8018E118 448E5000 */      mtc1 $t6, $f10
  /* 11493C 8018E11C 00000000 */       nop 
  /* 114940 8018E120 46805420 */   cvt.s.w $f16, $f10
  /* 114944 8018E124 E4500058 */      swc1 $f16, 0x58($v0)
  /* 114948 8018E128 14E9FFC6 */       bne $a3, $t1, .L8018E044
  /* 11494C 8018E12C 8C420008 */        lw $v0, 8($v0)
  /* 114950 8018E130 03E00008 */        jr $ra
  /* 114954 8018E134 00000000 */       nop 

glabel func_ovl7_8018E138
  /* 114958 8018E138 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 11495C 8018E13C 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 114960 8018E140 8C4F0020 */        lw $t7, 0x20($v0) # D_ovl7_80190B58 + 32
  /* 114964 8018E144 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 114968 8018E148 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 11496C 8018E14C 000FC0C0 */       sll $t8, $t7, 3
  /* 114970 8018E150 030FC023 */      subu $t8, $t8, $t7
  /* 114974 8018E154 0018C080 */       sll $t8, $t8, 2
  /* 114978 8018E158 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 11497C 8018E15C 030FC021 */      addu $t8, $t8, $t7
  /* 114980 8018E160 0018C080 */       sll $t8, $t8, 2
  /* 114984 8018E164 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114988 8018E168 AFA40020 */        sw $a0, 0x20($sp)
  /* 11498C 8018E16C 01D8C821 */      addu $t9, $t6, $t8
  /* 114990 8018E170 8F250070 */        lw $a1, 0x70($t9)
  /* 114994 8018E174 28A103E8 */      slti $at, $a1, 0x3e8
  /* 114998 8018E178 14200002 */      bnez $at, .L8018E184
  /* 11499C 8018E17C 00000000 */       nop 
  /* 1149A0 8018E180 240503E7 */     addiu $a1, $zero, 0x3e7
  .L8018E184:
  /* 1149A4 8018E184 54A0000D */      bnel $a1, $zero, .L8018E1BC
  /* 1149A8 8018E188 8C4C0004 */        lw $t4, 4($v0) # D_ovl7_80190B58 + 4
  /* 1149AC 8018E18C 8C480004 */        lw $t0, 4($v0) # D_ovl7_80190B58 + 4
  /* 1149B0 8018E190 2409005A */     addiu $t1, $zero, 0x5a
  /* 1149B4 8018E194 240B0001 */     addiu $t3, $zero, 1
  /* 1149B8 8018E198 51000004 */      beql $t0, $zero, .L8018E1AC
  /* 1149BC 8018E19C 904A00D0 */       lbu $t2, 0xd0($v0) # D_ovl7_80190B58 + 208
  /* 1149C0 8018E1A0 A04900D0 */        sb $t1, 0xd0($v0) # D_ovl7_80190B58 + 208
  /* 1149C4 8018E1A4 AC400004 */        sw $zero, 4($v0) # D_ovl7_80190B58 + 4
  /* 1149C8 8018E1A8 904A00D0 */       lbu $t2, 0xd0($v0) # D_ovl7_80190B58 + 208
  .L8018E1AC:
  /* 1149CC 8018E1AC 55400003 */      bnel $t2, $zero, .L8018E1BC
  /* 1149D0 8018E1B0 8C4C0004 */        lw $t4, 4($v0) # D_ovl7_80190B58 + 4
  /* 1149D4 8018E1B4 AC4B0004 */        sw $t3, 4($v0) # D_ovl7_80190B58 + 4
  /* 1149D8 8018E1B8 8C4C0004 */        lw $t4, 4($v0) # D_ovl7_80190B58 + 4
  .L8018E1BC:
  /* 1149DC 8018E1BC 8FA40020 */        lw $a0, 0x20($sp)
  /* 1149E0 8018E1C0 10AC0007 */       beq $a1, $t4, .L8018E1E0
  /* 1149E4 8018E1C4 00000000 */       nop 
  /* 1149E8 8018E1C8 0C063805 */       jal func_ovl7_8018E014
  /* 1149EC 8018E1CC AFA5001C */        sw $a1, 0x1c($sp)
  /* 1149F0 8018E1D0 8FA5001C */        lw $a1, 0x1c($sp)
  /* 1149F4 8018E1D4 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 1149F8 8018E1D8 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 1149FC 8018E1DC AC450004 */        sw $a1, 4($v0) # D_ovl7_80190B58 + 4
  .L8018E1E0:
  /* 114A00 8018E1E0 0C0333C0 */       jal func_ovl0_800CCF00
  /* 114A04 8018E1E4 8FA40020 */        lw $a0, 0x20($sp)
  /* 114A08 8018E1E8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114A0C 8018E1EC 27BD0020 */     addiu $sp, $sp, 0x20
  /* 114A10 8018E1F0 03E00008 */        jr $ra
  /* 114A14 8018E1F4 00000000 */       nop 

glabel func_ovl7_8018E1F8
  /* 114A18 8018E1F8 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 114A1C 8018E1FC 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 114A20 8018E200 906200D0 */       lbu $v0, 0xd0($v1) # D_ovl7_80190B58 + 208
  /* 114A24 8018E204 AFA40000 */        sw $a0, ($sp)
  /* 114A28 8018E208 10400002 */      beqz $v0, .L8018E214
  /* 114A2C 8018E20C 244EFFFF */     addiu $t6, $v0, -1
  /* 114A30 8018E210 A06E00D0 */        sb $t6, 0xd0($v1) # D_ovl7_80190B58 + 208
  .L8018E214:
  /* 114A34 8018E214 03E00008 */        jr $ra
  /* 114A38 8018E218 00000000 */       nop 

glabel func_ovl7_8018E21C
  /* 114A3C 8018E21C 3C058019 */       lui $a1, %hi(D_ovl7_80190B58)
  /* 114A40 8018E220 24A50B58 */     addiu $a1, $a1, %lo(D_ovl7_80190B58)
  /* 114A44 8018E224 8CAE0028 */        lw $t6, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114A48 8018E228 2406006C */     addiu $a2, $zero, 0x6c
  /* 114A4C 8018E22C 240700FF */     addiu $a3, $zero, 0xff
  /* 114A50 8018E230 8DC30000 */        lw $v1, ($t6)
  /* 114A54 8018E234 24080201 */     addiu $t0, $zero, 0x201
  /* 114A58 8018E238 2404000C */     addiu $a0, $zero, 0xc
  /* 114A5C 8018E23C A4680014 */        sh $t0, 0x14($v1)
  /* 114A60 8018E240 A0660018 */        sb $a2, 0x18($v1)
  /* 114A64 8018E244 A0670019 */        sb $a3, 0x19($v1)
  /* 114A68 8018E248 A066001A */        sb $a2, 0x1a($v1)
  /* 114A6C 8018E24C 8CAF0028 */        lw $t7, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114A70 8018E250 2402009C */     addiu $v0, $zero, 0x9c
  /* 114A74 8018E254 8DE30004 */        lw $v1, 4($t7)
  /* 114A78 8018E258 A0660018 */        sb $a2, 0x18($v1)
  /* 114A7C 8018E25C A0670019 */        sb $a3, 0x19($v1)
  /* 114A80 8018E260 A066001A */        sb $a2, 0x1a($v1)
  /* 114A84 8018E264 A4680014 */        sh $t0, 0x14($v1)
  /* 114A88 8018E268 8CB80028 */        lw $t8, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114A8C 8018E26C 8F030008 */        lw $v1, 8($t8)
  /* 114A90 8018E270 A0660018 */        sb $a2, 0x18($v1)
  /* 114A94 8018E274 A0670019 */        sb $a3, 0x19($v1)
  /* 114A98 8018E278 A066001A */        sb $a2, 0x1a($v1)
  /* 114A9C 8018E27C A4680014 */        sh $t0, 0x14($v1)
  .L8018E280:
  /* 114AA0 8018E280 8CB90028 */        lw $t9, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114AA4 8018E284 03244821 */      addu $t1, $t9, $a0
  /* 114AA8 8018E288 8D230000 */        lw $v1, ($t1)
  /* 114AAC 8018E28C A0660018 */        sb $a2, 0x18($v1)
  /* 114AB0 8018E290 A0670019 */        sb $a3, 0x19($v1)
  /* 114AB4 8018E294 A066001A */        sb $a2, 0x1a($v1)
  /* 114AB8 8018E298 A4680014 */        sh $t0, 0x14($v1)
  /* 114ABC 8018E29C 8CAA0028 */        lw $t2, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114AC0 8018E2A0 01445821 */      addu $t3, $t2, $a0
  /* 114AC4 8018E2A4 8D630004 */        lw $v1, 4($t3)
  /* 114AC8 8018E2A8 A0660018 */        sb $a2, 0x18($v1)
  /* 114ACC 8018E2AC A0670019 */        sb $a3, 0x19($v1)
  /* 114AD0 8018E2B0 A066001A */        sb $a2, 0x1a($v1)
  /* 114AD4 8018E2B4 A4680014 */        sh $t0, 0x14($v1)
  /* 114AD8 8018E2B8 8CAC0028 */        lw $t4, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114ADC 8018E2BC 01846821 */      addu $t5, $t4, $a0
  /* 114AE0 8018E2C0 8DA30008 */        lw $v1, 8($t5)
  /* 114AE4 8018E2C4 A0660018 */        sb $a2, 0x18($v1)
  /* 114AE8 8018E2C8 A0670019 */        sb $a3, 0x19($v1)
  /* 114AEC 8018E2CC A066001A */        sb $a2, 0x1a($v1)
  /* 114AF0 8018E2D0 A4680014 */        sh $t0, 0x14($v1)
  /* 114AF4 8018E2D4 8CAE0028 */        lw $t6, 0x28($a1) # D_ovl7_80190B58 + 40
  /* 114AF8 8018E2D8 01C47821 */      addu $t7, $t6, $a0
  /* 114AFC 8018E2DC 8DE3000C */        lw $v1, 0xc($t7)
  /* 114B00 8018E2E0 24840010 */     addiu $a0, $a0, 0x10
  /* 114B04 8018E2E4 A0660018 */        sb $a2, 0x18($v1)
  /* 114B08 8018E2E8 A0670019 */        sb $a3, 0x19($v1)
  /* 114B0C 8018E2EC A066001A */        sb $a2, 0x1a($v1)
  /* 114B10 8018E2F0 1482FFE3 */       bne $a0, $v0, .L8018E280
  /* 114B14 8018E2F4 A4680014 */        sh $t0, 0x14($v1)
  /* 114B18 8018E2F8 03E00008 */        jr $ra
  /* 114B1C 8018E2FC 00000000 */       nop 

glabel func_ovl7_8018E300
  /* 114B20 8018E300 A0800060 */        sb $zero, 0x60($a0)
  /* 114B24 8018E304 A0800061 */        sb $zero, 0x61($a0)
  /* 114B28 8018E308 03E00008 */        jr $ra
  /* 114B2C 8018E30C A0800062 */        sb $zero, 0x62($a0)

glabel func_ovl7_8018E310
  /* 114B30 8018E310 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 114B34 8018E314 AFB00028 */        sw $s0, 0x28($sp)
  /* 114B38 8018E318 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 114B3C 8018E31C AFBF003C */        sw $ra, 0x3c($sp)
  /* 114B40 8018E320 AFB40038 */        sw $s4, 0x38($sp)
  /* 114B44 8018E324 AFB30034 */        sw $s3, 0x34($sp)
  /* 114B48 8018E328 AFB20030 */        sw $s2, 0x30($sp)
  /* 114B4C 8018E32C AFB1002C */        sw $s1, 0x2c($sp)
  /* 114B50 8018E330 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 114B54 8018E334 02003825 */        or $a3, $s0, $zero
  /* 114B58 8018E338 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 114B5C 8018E33C 00002825 */        or $a1, $zero, $zero
  /* 114B60 8018E340 0C00265A */       jal omMakeGObjCommon
  /* 114B64 8018E344 2406000B */     addiu $a2, $zero, 0xb
  /* 114B68 8018E348 3C148019 */       lui $s4, %hi(D_ovl7_80190B58)
  /* 114B6C 8018E34C 26940B58 */     addiu $s4, $s4, %lo(D_ovl7_80190B58)
  /* 114B70 8018E350 3C058019 */       lui $a1, %hi(func_ovl7_8018E138)
  /* 114B74 8018E354 240EFFFF */     addiu $t6, $zero, -1
  /* 114B78 8018E358 AE82003C */        sw $v0, 0x3c($s4) # D_ovl7_80190B58 + 60
  /* 114B7C 8018E35C 00409825 */        or $s3, $v0, $zero
  /* 114B80 8018E360 AFAE0010 */        sw $t6, 0x10($sp)
  /* 114B84 8018E364 24A5E138 */     addiu $a1, $a1, %lo(func_ovl7_8018E138)
  /* 114B88 8018E368 00402025 */        or $a0, $v0, $zero
  /* 114B8C 8018E36C 24060017 */     addiu $a2, $zero, 0x17
  /* 114B90 8018E370 0C00277D */       jal func_80009DF4
  /* 114B94 8018E374 02003825 */        or $a3, $s0, $zero
  /* 114B98 8018E378 3C058019 */       lui $a1, %hi(func_ovl7_8018E1F8)
  /* 114B9C 8018E37C 24A5E1F8 */     addiu $a1, $a1, %lo(func_ovl7_8018E1F8)
  /* 114BA0 8018E380 02602025 */        or $a0, $s3, $zero
  /* 114BA4 8018E384 24060001 */     addiu $a2, $zero, 1
  /* 114BA8 8018E388 0C002062 */       jal omAddGObjCommonProc
  /* 114BAC 8018E38C 24070004 */     addiu $a3, $zero, 4
  /* 114BB0 8018E390 3C0141A0 */       lui $at, (0x41A00000 >> 16) # 20.0
  /* 114BB4 8018E394 4481A000 */      mtc1 $at, $f20 # 20.0 to cop1
  /* 114BB8 8018E398 00008025 */        or $s0, $zero, $zero
  /* 114BBC 8018E39C 24120003 */     addiu $s2, $zero, 3
  .L8018E3A0:
  /* 114BC0 8018E3A0 8E8F0028 */        lw $t7, 0x28($s4) # D_ovl7_80190B58 + 40
  /* 114BC4 8018E3A4 02602025 */        or $a0, $s3, $zero
  /* 114BC8 8018E3A8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 114BCC 8018E3AC 8DE50000 */        lw $a1, ($t7)
  /* 114BD0 8018E3B0 00408825 */        or $s1, $v0, $zero
  /* 114BD4 8018E3B4 0C0638C0 */       jal func_ovl7_8018E300
  /* 114BD8 8018E3B8 00402025 */        or $a0, $v0, $zero
  /* 114BDC 8018E3BC 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 114BE0 8018E3C0 1612FFF7 */       bne $s0, $s2, .L8018E3A0
  /* 114BE4 8018E3C4 E634005C */      swc1 $f20, 0x5c($s1)
  /* 114BE8 8018E3C8 02602025 */        or $a0, $s3, $zero
  /* 114BEC 8018E3CC 0C063805 */       jal func_ovl7_8018E014
  /* 114BF0 8018E3D0 00002825 */        or $a1, $zero, $zero
  /* 114BF4 8018E3D4 8E980028 */        lw $t8, 0x28($s4) # D_ovl7_80190B58 + 40
  /* 114BF8 8018E3D8 02602025 */        or $a0, $s3, $zero
  /* 114BFC 8018E3DC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 114C00 8018E3E0 8F050098 */        lw $a1, 0x98($t8)
  /* 114C04 8018E3E4 00408825 */        or $s1, $v0, $zero
  /* 114C08 8018E3E8 0C0638C0 */       jal func_ovl7_8018E300
  /* 114C0C 8018E3EC 00402025 */        or $a0, $v0, $zero
  /* 114C10 8018E3F0 3C0142C8 */       lui $at, (0x42C80000 >> 16) # 100.0
  /* 114C14 8018E3F4 44812000 */      mtc1 $at, $f4 # 100.0 to cop1
  /* 114C18 8018E3F8 E634005C */      swc1 $f20, 0x5c($s1)
  /* 114C1C 8018E3FC E6240058 */      swc1 $f4, 0x58($s1)
  /* 114C20 8018E400 8FBF003C */        lw $ra, 0x3c($sp)
  /* 114C24 8018E404 8FB40038 */        lw $s4, 0x38($sp)
  /* 114C28 8018E408 8FB30034 */        lw $s3, 0x34($sp)
  /* 114C2C 8018E40C 8FB20030 */        lw $s2, 0x30($sp)
  /* 114C30 8018E410 8FB1002C */        lw $s1, 0x2c($sp)
  /* 114C34 8018E414 8FB00028 */        lw $s0, 0x28($sp)
  /* 114C38 8018E418 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 114C3C 8018E41C 03E00008 */        jr $ra
  /* 114C40 8018E420 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl7_8018E424
  /* 114C44 8018E424 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 114C48 8018E428 3C068019 */       lui $a2, %hi(D_ovl7_801907EC)
  /* 114C4C 8018E42C 3C078019 */       lui $a3, %hi(D_ovl7_801907E8)
  /* 114C50 8018E430 3C098019 */       lui $t1, %hi(D_ovl7_801907EC)
  /* 114C54 8018E434 3C088019 */       lui $t0, %hi(D_ovl7_80190B58)
  /* 114C58 8018E438 44810000 */      mtc1 $at, $f0 # 0.5 to cop1
  /* 114C5C 8018E43C 8C820074 */        lw $v0, 0x74($a0)
  /* 114C60 8018E440 25080B58 */     addiu $t0, $t0, %lo(D_ovl7_80190B58)
  /* 114C64 8018E444 252907EC */     addiu $t1, $t1, %lo(D_ovl7_801907EC)
  /* 114C68 8018E448 24E707E8 */     addiu $a3, $a3, %lo(D_ovl7_801907E8)
  /* 114C6C 8018E44C 24C607EC */     addiu $a2, $a2, %lo(D_ovl7_801907EC)
  /* 114C70 8018E450 00001825 */        or $v1, $zero, $zero
  .L8018E454:
  /* 114C74 8018E454 90C40000 */       lbu $a0, ($a2) # D_ovl7_801907EC + 0
  /* 114C78 8018E458 8D0F0028 */        lw $t7, 0x28($t0) # D_ovl7_80190B58 + 40
  /* 114C7C 8018E45C 00406825 */        or $t5, $v0, $zero
  /* 114C80 8018E460 00A4001A */       div $zero, $a1, $a0
  /* 114C84 8018E464 00001812 */      mflo $v1
  /* 114C88 8018E468 0003C080 */       sll $t8, $v1, 2
  /* 114C8C 8018E46C 01F8C821 */      addu $t9, $t7, $t8
  /* 114C90 8018E470 00640019 */     multu $v1, $a0
  /* 114C94 8018E474 8F2A0000 */        lw $t2, ($t9)
  /* 114C98 8018E478 14800002 */      bnez $a0, .L8018E484
  /* 114C9C 8018E47C 00000000 */       nop 
  /* 114CA0 8018E480 0007000D */     break 7
  .L8018E484:
  /* 114CA4 8018E484 2401FFFF */     addiu $at, $zero, -1
  /* 114CA8 8018E488 14810004 */       bne $a0, $at, .L8018E49C
  /* 114CAC 8018E48C 3C018000 */       lui $at, 0x8000
  /* 114CB0 8018E490 14A10002 */       bne $a1, $at, .L8018E49C
  /* 114CB4 8018E494 00000000 */       nop 
  /* 114CB8 8018E498 0006000D */     break 6
  .L8018E49C:
  /* 114CBC 8018E49C 00007012 */      mflo $t6
  /* 114CC0 8018E4A0 00AE2823 */      subu $a1, $a1, $t6
  /* 114CC4 8018E4A4 254E003C */     addiu $t6, $t2, 0x3c
  .L8018E4A8:
  /* 114CC8 8018E4A8 8D4C0000 */        lw $t4, ($t2)
  /* 114CCC 8018E4AC 254A000C */     addiu $t2, $t2, 0xc
  /* 114CD0 8018E4B0 25AD000C */     addiu $t5, $t5, 0xc
  /* 114CD4 8018E4B4 ADAC0004 */        sw $t4, 4($t5)
  /* 114CD8 8018E4B8 8D4BFFF8 */        lw $t3, -8($t2)
  /* 114CDC 8018E4BC ADAB0008 */        sw $t3, 8($t5)
  /* 114CE0 8018E4C0 8D4CFFFC */        lw $t4, -4($t2)
  /* 114CE4 8018E4C4 154EFFF8 */       bne $t2, $t6, .L8018E4A8
  /* 114CE8 8018E4C8 ADAC000C */        sw $t4, 0xc($t5)
  /* 114CEC 8018E4CC 8D4C0000 */        lw $t4, ($t2)
  /* 114CF0 8018E4D0 ADAC0010 */        sw $t4, 0x10($t5)
  /* 114CF4 8018E4D4 8D4B0004 */        lw $t3, 4($t2)
  /* 114CF8 8018E4D8 ADAB0014 */        sw $t3, 0x14($t5)
  /* 114CFC 8018E4DC 94EF0000 */       lhu $t7, ($a3) # D_ovl7_801907E8 + 0
  /* 114D00 8018E4E0 448F2000 */      mtc1 $t7, $f4
  /* 114D04 8018E4E4 05E10005 */      bgez $t7, .L8018E4FC
  /* 114D08 8018E4E8 468021A0 */   cvt.s.w $f6, $f4
  /* 114D0C 8018E4EC 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 114D10 8018E4F0 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 114D14 8018E4F4 00000000 */       nop 
  /* 114D18 8018E4F8 46083180 */     add.s $f6, $f6, $f8
  .L8018E4FC:
  /* 114D1C 8018E4FC 84580014 */        lh $t8, 0x14($v0)
  /* 114D20 8018E500 24E70002 */     addiu $a3, $a3, 2
  /* 114D24 8018E504 24C60001 */     addiu $a2, $a2, 1
  /* 114D28 8018E508 44985000 */      mtc1 $t8, $f10
  /* 114D2C 8018E50C 00000000 */       nop 
  /* 114D30 8018E510 46805420 */   cvt.s.w $f16, $f10
  /* 114D34 8018E514 46008482 */     mul.s $f18, $f16, $f0
  /* 114D38 8018E518 46123101 */     sub.s $f4, $f6, $f18
  /* 114D3C 8018E51C 4600220D */ trunc.w.s $f8, $f4
  /* 114D40 8018E520 440E4000 */      mfc1 $t6, $f8
  /* 114D44 8018E524 00000000 */       nop 
  /* 114D48 8018E528 448E5000 */      mtc1 $t6, $f10
  /* 114D4C 8018E52C 00000000 */       nop 
  /* 114D50 8018E530 46805420 */   cvt.s.w $f16, $f10
  /* 114D54 8018E534 E4500058 */      swc1 $f16, 0x58($v0)
  /* 114D58 8018E538 14E9FFC6 */       bne $a3, $t1, .L8018E454
  /* 114D5C 8018E53C 8C420008 */        lw $v0, 8($v0)
  /* 114D60 8018E540 03E00008 */        jr $ra
  /* 114D64 8018E544 00000000 */       nop 

glabel func_ovl7_8018E548
  /* 114D68 8018E548 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 114D6C 8018E54C 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 114D70 8018E550 906200D1 */       lbu $v0, 0xd1($v1) # D_ovl7_80190B58 + 209
  /* 114D74 8018E554 AFA40000 */        sw $a0, ($sp)
  /* 114D78 8018E558 10400002 */      beqz $v0, .L8018E564
  /* 114D7C 8018E55C 244EFFFF */     addiu $t6, $v0, -1
  /* 114D80 8018E560 A06E00D1 */        sb $t6, 0xd1($v1) # D_ovl7_80190B58 + 209
  .L8018E564:
  /* 114D84 8018E564 03E00008 */        jr $ra
  /* 114D88 8018E568 00000000 */       nop 

glabel func_ovl7_8018E56C
  /* 114D8C 8018E56C 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 114D90 8018E570 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 114D94 8018E574 8C4F0020 */        lw $t7, 0x20($v0) # D_ovl7_80190B58 + 32
  /* 114D98 8018E578 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 114D9C 8018E57C 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 114DA0 8018E580 000FC0C0 */       sll $t8, $t7, 3
  /* 114DA4 8018E584 030FC023 */      subu $t8, $t8, $t7
  /* 114DA8 8018E588 0018C080 */       sll $t8, $t8, 2
  /* 114DAC 8018E58C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 114DB0 8018E590 030FC021 */      addu $t8, $t8, $t7
  /* 114DB4 8018E594 0018C080 */       sll $t8, $t8, 2
  /* 114DB8 8018E598 AFBF0014 */        sw $ra, 0x14($sp)
  /* 114DBC 8018E59C AFA40020 */        sw $a0, 0x20($sp)
  /* 114DC0 8018E5A0 01D8C821 */      addu $t9, $t6, $t8
  /* 114DC4 8018E5A4 8F250074 */        lw $a1, 0x74($t9)
  /* 114DC8 8018E5A8 28A10064 */      slti $at, $a1, 0x64
  /* 114DCC 8018E5AC 14200002 */      bnez $at, .L8018E5B8
  /* 114DD0 8018E5B0 00000000 */       nop 
  /* 114DD4 8018E5B4 24050063 */     addiu $a1, $zero, 0x63
  .L8018E5B8:
  /* 114DD8 8018E5B8 54A0000D */      bnel $a1, $zero, .L8018E5F0
  /* 114DDC 8018E5BC 8C4C0008 */        lw $t4, 8($v0) # D_ovl7_80190B58 + 8
  /* 114DE0 8018E5C0 8C480008 */        lw $t0, 8($v0) # D_ovl7_80190B58 + 8
  /* 114DE4 8018E5C4 2409005A */     addiu $t1, $zero, 0x5a
  /* 114DE8 8018E5C8 240B0001 */     addiu $t3, $zero, 1
  /* 114DEC 8018E5CC 51000004 */      beql $t0, $zero, .L8018E5E0
  /* 114DF0 8018E5D0 904A00D1 */       lbu $t2, 0xd1($v0) # D_ovl7_80190B58 + 209
  /* 114DF4 8018E5D4 A04900D1 */        sb $t1, 0xd1($v0) # D_ovl7_80190B58 + 209
  /* 114DF8 8018E5D8 AC400008 */        sw $zero, 8($v0) # D_ovl7_80190B58 + 8
  /* 114DFC 8018E5DC 904A00D1 */       lbu $t2, 0xd1($v0) # D_ovl7_80190B58 + 209
  .L8018E5E0:
  /* 114E00 8018E5E0 55400003 */      bnel $t2, $zero, .L8018E5F0
  /* 114E04 8018E5E4 8C4C0008 */        lw $t4, 8($v0) # D_ovl7_80190B58 + 8
  /* 114E08 8018E5E8 AC4B0008 */        sw $t3, 8($v0) # D_ovl7_80190B58 + 8
  /* 114E0C 8018E5EC 8C4C0008 */        lw $t4, 8($v0) # D_ovl7_80190B58 + 8
  .L8018E5F0:
  /* 114E10 8018E5F0 8FA40020 */        lw $a0, 0x20($sp)
  /* 114E14 8018E5F4 10AC0007 */       beq $a1, $t4, .L8018E614
  /* 114E18 8018E5F8 00000000 */       nop 
  /* 114E1C 8018E5FC 0C063909 */       jal func_ovl7_8018E424
  /* 114E20 8018E600 AFA5001C */        sw $a1, 0x1c($sp)
  /* 114E24 8018E604 8FA5001C */        lw $a1, 0x1c($sp)
  /* 114E28 8018E608 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 114E2C 8018E60C 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 114E30 8018E610 AC450008 */        sw $a1, 8($v0) # D_ovl7_80190B58 + 8
  .L8018E614:
  /* 114E34 8018E614 0C0333C0 */       jal func_ovl0_800CCF00
  /* 114E38 8018E618 8FA40020 */        lw $a0, 0x20($sp)
  /* 114E3C 8018E61C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 114E40 8018E620 27BD0020 */     addiu $sp, $sp, 0x20
  /* 114E44 8018E624 03E00008 */        jr $ra
  /* 114E48 8018E628 00000000 */       nop 

glabel func_ovl7_8018E62C
  /* 114E4C 8018E62C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 114E50 8018E630 AFB00028 */        sw $s0, 0x28($sp)
  /* 114E54 8018E634 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 114E58 8018E638 AFBF003C */        sw $ra, 0x3c($sp)
  /* 114E5C 8018E63C AFB40038 */        sw $s4, 0x38($sp)
  /* 114E60 8018E640 AFB30034 */        sw $s3, 0x34($sp)
  /* 114E64 8018E644 AFB20030 */        sw $s2, 0x30($sp)
  /* 114E68 8018E648 AFB1002C */        sw $s1, 0x2c($sp)
  /* 114E6C 8018E64C F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 114E70 8018E650 02003825 */        or $a3, $s0, $zero
  /* 114E74 8018E654 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 114E78 8018E658 00002825 */        or $a1, $zero, $zero
  /* 114E7C 8018E65C 0C00265A */       jal omMakeGObjCommon
  /* 114E80 8018E660 2406000B */     addiu $a2, $zero, 0xb
  /* 114E84 8018E664 3C148019 */       lui $s4, %hi(D_ovl7_80190B58)
  /* 114E88 8018E668 26940B58 */     addiu $s4, $s4, %lo(D_ovl7_80190B58)
  /* 114E8C 8018E66C 3C058019 */       lui $a1, %hi(func_ovl7_8018E56C)
  /* 114E90 8018E670 240EFFFF */     addiu $t6, $zero, -1
  /* 114E94 8018E674 AE820040 */        sw $v0, 0x40($s4) # D_ovl7_80190B58 + 64
  /* 114E98 8018E678 00409825 */        or $s3, $v0, $zero
  /* 114E9C 8018E67C AFAE0010 */        sw $t6, 0x10($sp)
  /* 114EA0 8018E680 24A5E56C */     addiu $a1, $a1, %lo(func_ovl7_8018E56C)
  /* 114EA4 8018E684 00402025 */        or $a0, $v0, $zero
  /* 114EA8 8018E688 24060017 */     addiu $a2, $zero, 0x17
  /* 114EAC 8018E68C 0C00277D */       jal func_80009DF4
  /* 114EB0 8018E690 02003825 */        or $a3, $s0, $zero
  /* 114EB4 8018E694 3C058019 */       lui $a1, %hi(func_ovl7_8018E548)
  /* 114EB8 8018E698 24A5E548 */     addiu $a1, $a1, %lo(func_ovl7_8018E548)
  /* 114EBC 8018E69C 02602025 */        or $a0, $s3, $zero
  /* 114EC0 8018E6A0 24060001 */     addiu $a2, $zero, 1
  /* 114EC4 8018E6A4 0C002062 */       jal omAddGObjCommonProc
  /* 114EC8 8018E6A8 24070004 */     addiu $a3, $zero, 4
  /* 114ECC 8018E6AC 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 114ED0 8018E6B0 4481A000 */      mtc1 $at, $f20 # 36.0 to cop1
  /* 114ED4 8018E6B4 00008025 */        or $s0, $zero, $zero
  /* 114ED8 8018E6B8 24120002 */     addiu $s2, $zero, 2
  .L8018E6BC:
  /* 114EDC 8018E6BC 8E8F0028 */        lw $t7, 0x28($s4) # D_ovl7_80190B58 + 40
  /* 114EE0 8018E6C0 02602025 */        or $a0, $s3, $zero
  /* 114EE4 8018E6C4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 114EE8 8018E6C8 8DE50000 */        lw $a1, ($t7)
  /* 114EEC 8018E6CC 00408825 */        or $s1, $v0, $zero
  /* 114EF0 8018E6D0 0C0638C0 */       jal func_ovl7_8018E300
  /* 114EF4 8018E6D4 00402025 */        or $a0, $v0, $zero
  /* 114EF8 8018E6D8 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 114EFC 8018E6DC 1612FFF7 */       bne $s0, $s2, .L8018E6BC
  /* 114F00 8018E6E0 E634005C */      swc1 $f20, 0x5c($s1)
  /* 114F04 8018E6E4 02602025 */        or $a0, $s3, $zero
  /* 114F08 8018E6E8 0C063909 */       jal func_ovl7_8018E424
  /* 114F0C 8018E6EC 00002825 */        or $a1, $zero, $zero
  /* 114F10 8018E6F0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 114F14 8018E6F4 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 114F18 8018E6F8 8FB00028 */        lw $s0, 0x28($sp)
  /* 114F1C 8018E6FC 8FB1002C */        lw $s1, 0x2c($sp)
  /* 114F20 8018E700 8FB20030 */        lw $s2, 0x30($sp)
  /* 114F24 8018E704 8FB30034 */        lw $s3, 0x34($sp)
  /* 114F28 8018E708 8FB40038 */        lw $s4, 0x38($sp)
  /* 114F2C 8018E70C 03E00008 */        jr $ra
  /* 114F30 8018E710 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl7_8018E714
  /* 114F34 8018E714 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 114F38 8018E718 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 114F3C 8018E71C 8C780018 */        lw $t8, 0x18($v1) # D_ovl7_80190B58 + 24
  /* 114F40 8018E720 8C6F0028 */        lw $t7, 0x28($v1) # D_ovl7_80190B58 + 40
  /* 114F44 8018E724 8C6E0048 */        lw $t6, 0x48($v1) # D_ovl7_80190B58 + 72
  /* 114F48 8018E728 0018C880 */       sll $t9, $t8, 2
  /* 114F4C 8018E72C 01F94021 */      addu $t0, $t7, $t9
  /* 114F50 8018E730 8D09006C */        lw $t1, 0x6c($t0)
  /* 114F54 8018E734 8DCC0074 */        lw $t4, 0x74($t6)
  /* 114F58 8018E738 252D003C */     addiu $t5, $t1, 0x3c
  .L8018E73C:
  /* 114F5C 8018E73C 8D2B0000 */        lw $t3, ($t1)
  /* 114F60 8018E740 2529000C */     addiu $t1, $t1, 0xc
  /* 114F64 8018E744 258C000C */     addiu $t4, $t4, 0xc
  /* 114F68 8018E748 AD8B0004 */        sw $t3, 4($t4)
  /* 114F6C 8018E74C 8D2AFFF8 */        lw $t2, -8($t1)
  /* 114F70 8018E750 AD8A0008 */        sw $t2, 8($t4)
  /* 114F74 8018E754 8D2BFFFC */        lw $t3, -4($t1)
  /* 114F78 8018E758 152DFFF8 */       bne $t1, $t5, .L8018E73C
  /* 114F7C 8018E75C AD8B000C */        sw $t3, 0xc($t4)
  /* 114F80 8018E760 8D2B0000 */        lw $t3, ($t1)
  /* 114F84 8018E764 AD8B0010 */        sw $t3, 0x10($t4)
  /* 114F88 8018E768 8D2A0004 */        lw $t2, 4($t1)
  /* 114F8C 8018E76C 03E00008 */        jr $ra
  /* 114F90 8018E770 AD8A0014 */        sw $t2, 0x14($t4)

glabel func_ovl7_8018E774
  /* 114F94 8018E774 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 114F98 8018E778 AFBF001C */        sw $ra, 0x1c($sp)
  /* 114F9C 8018E77C 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 114FA0 8018E780 00002825 */        or $a1, $zero, $zero
  /* 114FA4 8018E784 2406000B */     addiu $a2, $zero, 0xb
  /* 114FA8 8018E788 0C00265A */       jal omMakeGObjCommon
  /* 114FAC 8018E78C 3C078000 */       lui $a3, 0x8000
  /* 114FB0 8018E790 3C018019 */       lui $at, %hi(D_ovl7_80190BA0)
  /* 114FB4 8018E794 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 114FB8 8018E798 240EFFFF */     addiu $t6, $zero, -1
  /* 114FBC 8018E79C AC220BA0 */        sw $v0, %lo(D_ovl7_80190BA0)($at)
  /* 114FC0 8018E7A0 AFA20024 */        sw $v0, 0x24($sp)
  /* 114FC4 8018E7A4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 114FC8 8018E7A8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 114FCC 8018E7AC 00402025 */        or $a0, $v0, $zero
  /* 114FD0 8018E7B0 24060017 */     addiu $a2, $zero, 0x17
  /* 114FD4 8018E7B4 0C00277D */       jal func_80009DF4
  /* 114FD8 8018E7B8 3C078000 */       lui $a3, 0x8000
  /* 114FDC 8018E7BC 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 114FE0 8018E7C0 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 114FE4 8018E7C4 8C580018 */        lw $t8, 0x18($v0) # D_ovl7_80190B58 + 24
  /* 114FE8 8018E7C8 8C4F0028 */        lw $t7, 0x28($v0) # D_ovl7_80190B58 + 40
  /* 114FEC 8018E7CC 8FA40024 */        lw $a0, 0x24($sp)
  /* 114FF0 8018E7D0 0018C880 */       sll $t9, $t8, 2
  /* 114FF4 8018E7D4 01F94021 */      addu $t0, $t7, $t9
  /* 114FF8 8018E7D8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 114FFC 8018E7DC 8D05006C */        lw $a1, 0x6c($t0)
  /* 115000 8018E7E0 3C01438A */       lui $at, (0x438A0000 >> 16) # 276.0
  /* 115004 8018E7E4 44812000 */      mtc1 $at, $f4 # 276.0 to cop1
  /* 115008 8018E7E8 3C0141A0 */       lui $at, (0x41A00000 >> 16) # 20.0
  /* 11500C 8018E7EC 44813000 */      mtc1 $at, $f6 # 20.0 to cop1
  /* 115010 8018E7F0 00402025 */        or $a0, $v0, $zero
  /* 115014 8018E7F4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 115018 8018E7F8 0C0638C0 */       jal func_ovl7_8018E300
  /* 11501C 8018E7FC E446005C */      swc1 $f6, 0x5c($v0)
  /* 115020 8018E800 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115024 8018E804 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115028 8018E808 03E00008 */        jr $ra
  /* 11502C 8018E80C 00000000 */       nop 

glabel func_ovl7_8018E810
  /* 115030 8018E810 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115034 8018E814 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115038 8018E818 8C780014 */        lw $t8, 0x14($v1) # D_ovl7_80190B58 + 20
  /* 11503C 8018E81C 8C6F0028 */        lw $t7, 0x28($v1) # D_ovl7_80190B58 + 40
  /* 115040 8018E820 8C6E0044 */        lw $t6, 0x44($v1) # D_ovl7_80190B58 + 68
  /* 115044 8018E824 0018C880 */       sll $t9, $t8, 2
  /* 115048 8018E828 01F94021 */      addu $t0, $t7, $t9
  /* 11504C 8018E82C 8D09007C */        lw $t1, 0x7c($t0)
  /* 115050 8018E830 8DCC0074 */        lw $t4, 0x74($t6)
  /* 115054 8018E834 252D003C */     addiu $t5, $t1, 0x3c
  .L8018E838:
  /* 115058 8018E838 8D2B0000 */        lw $t3, ($t1)
  /* 11505C 8018E83C 2529000C */     addiu $t1, $t1, 0xc
  /* 115060 8018E840 258C000C */     addiu $t4, $t4, 0xc
  /* 115064 8018E844 AD8B0004 */        sw $t3, 4($t4)
  /* 115068 8018E848 8D2AFFF8 */        lw $t2, -8($t1)
  /* 11506C 8018E84C AD8A0008 */        sw $t2, 8($t4)
  /* 115070 8018E850 8D2BFFFC */        lw $t3, -4($t1)
  /* 115074 8018E854 152DFFF8 */       bne $t1, $t5, .L8018E838
  /* 115078 8018E858 AD8B000C */        sw $t3, 0xc($t4)
  /* 11507C 8018E85C 8D2B0000 */        lw $t3, ($t1)
  /* 115080 8018E860 AD8B0010 */        sw $t3, 0x10($t4)
  /* 115084 8018E864 8D2A0004 */        lw $t2, 4($t1)
  /* 115088 8018E868 03E00008 */        jr $ra
  /* 11508C 8018E86C AD8A0014 */        sw $t2, 0x14($t4)

glabel func_ovl7_8018E870
  /* 115090 8018E870 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 115094 8018E874 AFBF001C */        sw $ra, 0x1c($sp)
  /* 115098 8018E878 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 11509C 8018E87C 00002825 */        or $a1, $zero, $zero
  /* 1150A0 8018E880 2406000B */     addiu $a2, $zero, 0xb
  /* 1150A4 8018E884 0C00265A */       jal omMakeGObjCommon
  /* 1150A8 8018E888 3C078000 */       lui $a3, 0x8000
  /* 1150AC 8018E88C 3C018019 */       lui $at, %hi(D_ovl7_80190B9C)
  /* 1150B0 8018E890 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1150B4 8018E894 240EFFFF */     addiu $t6, $zero, -1
  /* 1150B8 8018E898 AC220B9C */        sw $v0, %lo(D_ovl7_80190B9C)($at)
  /* 1150BC 8018E89C AFA20024 */        sw $v0, 0x24($sp)
  /* 1150C0 8018E8A0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1150C4 8018E8A4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1150C8 8018E8A8 00402025 */        or $a0, $v0, $zero
  /* 1150CC 8018E8AC 24060017 */     addiu $a2, $zero, 0x17
  /* 1150D0 8018E8B0 0C00277D */       jal func_80009DF4
  /* 1150D4 8018E8B4 3C078000 */       lui $a3, 0x8000
  /* 1150D8 8018E8B8 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 1150DC 8018E8BC 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 1150E0 8018E8C0 8C580014 */        lw $t8, 0x14($v0) # D_ovl7_80190B58 + 20
  /* 1150E4 8018E8C4 8C4F0028 */        lw $t7, 0x28($v0) # D_ovl7_80190B58 + 40
  /* 1150E8 8018E8C8 8FA40024 */        lw $a0, 0x24($sp)
  /* 1150EC 8018E8CC 0018C880 */       sll $t9, $t8, 2
  /* 1150F0 8018E8D0 01F94021 */      addu $t0, $t7, $t9
  /* 1150F4 8018E8D4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 1150F8 8018E8D8 8D05007C */        lw $a1, 0x7c($t0)
  /* 1150FC 8018E8DC 3C01433F */       lui $at, (0x433F0000 >> 16) # 191.0
  /* 115100 8018E8E0 44812000 */      mtc1 $at, $f4 # 191.0 to cop1
  /* 115104 8018E8E4 3C0141A0 */       lui $at, (0x41A00000 >> 16) # 20.0
  /* 115108 8018E8E8 44813000 */      mtc1 $at, $f6 # 20.0 to cop1
  /* 11510C 8018E8EC 00402025 */        or $a0, $v0, $zero
  /* 115110 8018E8F0 E4440058 */      swc1 $f4, 0x58($v0)
  /* 115114 8018E8F4 0C0638C0 */       jal func_ovl7_8018E300
  /* 115118 8018E8F8 E446005C */      swc1 $f6, 0x5c($v0)
  /* 11511C 8018E8FC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115120 8018E900 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115124 8018E904 03E00008 */        jr $ra
  /* 115128 8018E908 00000000 */       nop 

glabel func_ovl7_8018E90C
  /* 11512C 8018E90C 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 115130 8018E910 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 115134 8018E914 8C8E004C */        lw $t6, 0x4c($a0) # D_ovl7_80190B58 + 76
  /* 115138 8018E918 8C99000C */        lw $t9, 0xc($a0) # D_ovl7_80190B58 + 12
  /* 11513C 8018E91C 8C980028 */        lw $t8, 0x28($a0) # D_ovl7_80190B58 + 40
  /* 115140 8018E920 8DCF0074 */        lw $t7, 0x74($t6)
  /* 115144 8018E924 00194080 */       sll $t0, $t9, 2
  /* 115148 8018E928 03084821 */      addu $t1, $t8, $t0
  /* 11514C 8018E92C 8DE20008 */        lw $v0, 8($t7)
  /* 115150 8018E930 8D2A0028 */        lw $t2, 0x28($t1)
  /* 115154 8018E934 8C430008 */        lw $v1, 8($v0)
  /* 115158 8018E938 00406825 */        or $t5, $v0, $zero
  /* 11515C 8018E93C 254E003C */     addiu $t6, $t2, 0x3c
  .L8018E940:
  /* 115160 8018E940 8D4C0000 */        lw $t4, ($t2)
  /* 115164 8018E944 254A000C */     addiu $t2, $t2, 0xc
  /* 115168 8018E948 25AD000C */     addiu $t5, $t5, 0xc
  /* 11516C 8018E94C ADAC0004 */        sw $t4, 4($t5)
  /* 115170 8018E950 8D4BFFF8 */        lw $t3, -8($t2)
  /* 115174 8018E954 ADAB0008 */        sw $t3, 8($t5)
  /* 115178 8018E958 8D4CFFFC */        lw $t4, -4($t2)
  /* 11517C 8018E95C 154EFFF8 */       bne $t2, $t6, .L8018E940
  /* 115180 8018E960 ADAC000C */        sw $t4, 0xc($t5)
  /* 115184 8018E964 8D4C0000 */        lw $t4, ($t2)
  /* 115188 8018E968 24190124 */     addiu $t9, $zero, 0x124
  /* 11518C 8018E96C ADAC0010 */        sw $t4, 0x10($t5)
  /* 115190 8018E970 8D4B0004 */        lw $t3, 4($t2)
  /* 115194 8018E974 ADAB0014 */        sw $t3, 0x14($t5)
  /* 115198 8018E978 844F0014 */        lh $t7, 0x14($v0)
  /* 11519C 8018E97C 032FC023 */      subu $t8, $t9, $t7
  /* 1151A0 8018E980 44982000 */      mtc1 $t8, $f4
  /* 1151A4 8018E984 00000000 */       nop 
  /* 1151A8 8018E988 46802020 */   cvt.s.w $f0, $f4
  /* 1151AC 8018E98C E4400058 */      swc1 $f0, 0x58($v0)
  /* 1151B0 8018E990 84680014 */        lh $t0, 0x14($v1)
  /* 1151B4 8018E994 44883000 */      mtc1 $t0, $f6
  /* 1151B8 8018E998 00000000 */       nop 
  /* 1151BC 8018E99C 46803220 */   cvt.s.w $f8, $f6
  /* 1151C0 8018E9A0 46080281 */     sub.s $f10, $f0, $f8
  /* 1151C4 8018E9A4 03E00008 */        jr $ra
  /* 1151C8 8018E9A8 E46A0058 */      swc1 $f10, 0x58($v1)

glabel func_ovl7_8018E9AC
  /* 1151CC 8018E9AC 3C0F800A */       lui $t7, %hi((gSceneData + 0x13))
  /* 1151D0 8018E9B0 91EF4AE3 */       lbu $t7, %lo((gSceneData + 0x13))($t7)
  /* 1151D4 8018E9B4 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 1151D8 8018E9B8 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 1151DC 8018E9BC 000FC0C0 */       sll $t8, $t7, 3
  /* 1151E0 8018E9C0 030FC023 */      subu $t8, $t8, $t7
  /* 1151E4 8018E9C4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1151E8 8018E9C8 0018C080 */       sll $t8, $t8, 2
  /* 1151EC 8018E9CC 030FC021 */      addu $t8, $t8, $t7
  /* 1151F0 8018E9D0 0018C080 */       sll $t8, $t8, 2
  /* 1151F4 8018E9D4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1151F8 8018E9D8 AFB10018 */        sw $s1, 0x18($sp)
  /* 1151FC 8018E9DC AFB00014 */        sw $s0, 0x14($sp)
  /* 115200 8018E9E0 01D8C821 */      addu $t9, $t6, $t8
  /* 115204 8018E9E4 8F280078 */        lw $t0, 0x78($t9)
  /* 115208 8018E9E8 00808825 */        or $s1, $a0, $zero
  /* 11520C 8018E9EC 8D020084 */        lw $v0, 0x84($t0)
  /* 115210 8018E9F0 8C43084C */        lw $v1, 0x84c($v0)
  /* 115214 8018E9F4 00001025 */        or $v0, $zero, $zero
  /* 115218 8018E9F8 10600015 */      beqz $v1, .L8018EA50
  /* 11521C 8018E9FC 00000000 */       nop 
  /* 115220 8018EA00 8C700084 */        lw $s0, 0x84($v1)
  /* 115224 8018EA04 8E05000C */        lw $a1, 0xc($s0)
  /* 115228 8018EA08 28A10004 */      slti $at, $a1, 4
  /* 11522C 8018EA0C 5020000A */      beql $at, $zero, .L8018EA38
  /* 115230 8018EA10 28A10014 */      slti $at, $a1, 0x14
  /* 115234 8018EA14 3C118019 */       lui $s1, %hi(D_ovl7_80190920)
  /* 115238 8018EA18 26310920 */     addiu $s1, $s1, %lo(D_ovl7_80190920)
  .L8018EA1C:
  /* 11523C 8018EA1C 0C008D89 */       jal fatal_printf
  /* 115240 8018EA20 02202025 */        or $a0, $s1, $zero
  /* 115244 8018EA24 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 115248 8018EA28 00000000 */       nop 
  /* 11524C 8018EA2C 1000FFFB */         b .L8018EA1C
  /* 115250 8018EA30 8E05000C */        lw $a1, 0xc($s0)
  /* 115254 8018EA34 28A10014 */      slti $at, $a1, 0x14
  .L8018EA38:
  /* 115258 8018EA38 10200003 */      beqz $at, .L8018EA48
  /* 11525C 8018EA3C 00000000 */       nop 
  /* 115260 8018EA40 10000003 */         b .L8018EA50
  /* 115264 8018EA44 24A2FFFD */     addiu $v0, $a1, -3
  .L8018EA48:
  /* 115268 8018EA48 10000001 */         b .L8018EA50
  /* 11526C 8018EA4C 00001025 */        or $v0, $zero, $zero
  .L8018EA50:
  /* 115270 8018EA50 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115274 8018EA54 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115278 8018EA58 8C69000C */        lw $t1, 0xc($v1) # D_ovl7_80190B58 + 12
  /* 11527C 8018EA5C 10490003 */       beq $v0, $t1, .L8018EA6C
  /* 115280 8018EA60 00000000 */       nop 
  /* 115284 8018EA64 0C063A43 */       jal func_ovl7_8018E90C
  /* 115288 8018EA68 AC62000C */        sw $v0, 0xc($v1) # D_ovl7_80190B58 + 12
  .L8018EA6C:
  /* 11528C 8018EA6C 0C0333C0 */       jal func_ovl0_800CCF00
  /* 115290 8018EA70 02202025 */        or $a0, $s1, $zero
  /* 115294 8018EA74 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115298 8018EA78 8FB00014 */        lw $s0, 0x14($sp)
  /* 11529C 8018EA7C 8FB10018 */        lw $s1, 0x18($sp)
  /* 1152A0 8018EA80 03E00008 */        jr $ra
  /* 1152A4 8018EA84 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl7_8018EA88
  /* 1152A8 8018EA88 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1152AC 8018EA8C AFBF001C */        sw $ra, 0x1c($sp)
  /* 1152B0 8018EA90 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 1152B4 8018EA94 00002825 */        or $a1, $zero, $zero
  /* 1152B8 8018EA98 2406000B */     addiu $a2, $zero, 0xb
  /* 1152BC 8018EA9C 0C00265A */       jal omMakeGObjCommon
  /* 1152C0 8018EAA0 3C078000 */       lui $a3, 0x8000
  /* 1152C4 8018EAA4 3C018019 */       lui $at, %hi(D_ovl7_80190BA4)
  /* 1152C8 8018EAA8 3C058019 */       lui $a1, %hi(func_ovl7_8018E9AC)
  /* 1152CC 8018EAAC 240EFFFF */     addiu $t6, $zero, -1
  /* 1152D0 8018EAB0 AC220BA4 */        sw $v0, %lo(D_ovl7_80190BA4)($at)
  /* 1152D4 8018EAB4 AFA20024 */        sw $v0, 0x24($sp)
  /* 1152D8 8018EAB8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1152DC 8018EABC 24A5E9AC */     addiu $a1, $a1, %lo(func_ovl7_8018E9AC)
  /* 1152E0 8018EAC0 00402025 */        or $a0, $v0, $zero
  /* 1152E4 8018EAC4 24060017 */     addiu $a2, $zero, 0x17
  /* 1152E8 8018EAC8 0C00277D */       jal func_80009DF4
  /* 1152EC 8018EACC 3C078000 */       lui $a3, 0x8000
  /* 1152F0 8018EAD0 3C0F8019 */       lui $t7, %hi(D_ovl7_80190B80)
  /* 1152F4 8018EAD4 8DEF0B80 */        lw $t7, %lo(D_ovl7_80190B80)($t7)
  /* 1152F8 8018EAD8 8FA40024 */        lw $a0, 0x24($sp)
  /* 1152FC 8018EADC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115300 8018EAE0 8DE50094 */        lw $a1, 0x94($t7)
  /* 115304 8018EAE4 3C014392 */       lui $at, (0x43920000 >> 16) # 292.0
  /* 115308 8018EAE8 44812000 */      mtc1 $at, $f4 # 292.0 to cop1
  /* 11530C 8018EAEC 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 115310 8018EAF0 44813000 */      mtc1 $at, $f6 # 36.0 to cop1
  /* 115314 8018EAF4 00402025 */        or $a0, $v0, $zero
  /* 115318 8018EAF8 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11531C 8018EAFC 0C0638C0 */       jal func_ovl7_8018E300
  /* 115320 8018EB00 E446005C */      swc1 $f6, 0x5c($v0)
  /* 115324 8018EB04 3C188019 */       lui $t8, %hi(D_ovl7_80190B80)
  /* 115328 8018EB08 8F180B80 */        lw $t8, %lo(D_ovl7_80190B80)($t8)
  /* 11532C 8018EB0C 8FA40024 */        lw $a0, 0x24($sp)
  /* 115330 8018EB10 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115334 8018EB14 8F050000 */        lw $a1, ($t8)
  /* 115338 8018EB18 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 11533C 8018EB1C 44814000 */      mtc1 $at, $f8 # 36.0 to cop1
  /* 115340 8018EB20 00402025 */        or $a0, $v0, $zero
  /* 115344 8018EB24 0C0638C0 */       jal func_ovl7_8018E300
  /* 115348 8018EB28 E448005C */      swc1 $f8, 0x5c($v0)
  /* 11534C 8018EB2C 3C198019 */       lui $t9, %hi(D_ovl7_80190B80)
  /* 115350 8018EB30 8F390B80 */        lw $t9, %lo(D_ovl7_80190B80)($t9)
  /* 115354 8018EB34 8FA40024 */        lw $a0, 0x24($sp)
  /* 115358 8018EB38 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 11535C 8018EB3C 8F250090 */        lw $a1, 0x90($t9)
  /* 115360 8018EB40 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 115364 8018EB44 44815000 */      mtc1 $at, $f10 # 36.0 to cop1
  /* 115368 8018EB48 00402025 */        or $a0, $v0, $zero
  /* 11536C 8018EB4C 0C0638C0 */       jal func_ovl7_8018E300
  /* 115370 8018EB50 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 115374 8018EB54 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115378 8018EB58 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11537C 8018EB5C 03E00008 */        jr $ra
  /* 115380 8018EB60 00000000 */       nop 

glabel func_ovl7_8018EB64
  /* 115384 8018EB64 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 115388 8018EB68 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11538C 8018EB6C 0C0637CC */       jal func_ovl7_8018DF30
  /* 115390 8018EB70 00000000 */       nop 
  /* 115394 8018EB74 0C063887 */       jal func_ovl7_8018E21C
  /* 115398 8018EB78 00000000 */       nop 
  /* 11539C 8018EB7C 0C0638C4 */       jal func_ovl7_8018E310
  /* 1153A0 8018EB80 00000000 */       nop 
  /* 1153A4 8018EB84 0C06398B */       jal func_ovl7_8018E62C
  /* 1153A8 8018EB88 00000000 */       nop 
  /* 1153AC 8018EB8C 0C0639DD */       jal func_ovl7_8018E774
  /* 1153B0 8018EB90 00000000 */       nop 
  /* 1153B4 8018EB94 0C063A1C */       jal func_ovl7_8018E870
  /* 1153B8 8018EB98 00000000 */       nop 
  /* 1153BC 8018EB9C 0C063AA2 */       jal func_ovl7_8018EA88
  /* 1153C0 8018EBA0 00000000 */       nop 
  /* 1153C4 8018EBA4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1153C8 8018EBA8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1153CC 8018EBAC 03E00008 */        jr $ra
  /* 1153D0 8018EBB0 00000000 */       nop 

glabel func_ovl7_8018EBB4
  /* 1153D4 8018EBB4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1153D8 8018EBB8 AFB0001C */        sw $s0, 0x1c($sp)
  /* 1153DC 8018EBBC 3C108000 */       lui $s0, %hi(D_NF_80000008)
  /* 1153E0 8018EBC0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 1153E4 8018EBC4 AFB70038 */        sw $s7, 0x38($sp)
  /* 1153E8 8018EBC8 AFB60034 */        sw $s6, 0x34($sp)
  /* 1153EC 8018EBCC AFB50030 */        sw $s5, 0x30($sp)
  /* 1153F0 8018EBD0 AFB4002C */        sw $s4, 0x2c($sp)
  /* 1153F4 8018EBD4 AFB30028 */        sw $s3, 0x28($sp)
  /* 1153F8 8018EBD8 AFB20024 */        sw $s2, 0x24($sp)
  /* 1153FC 8018EBDC AFB10020 */        sw $s1, 0x20($sp)
  /* 115400 8018EBE0 02003825 */        or $a3, $s0, $zero
  /* 115404 8018EBE4 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 115408 8018EBE8 00002825 */        or $a1, $zero, $zero
  /* 11540C 8018EBEC 0C00265A */       jal omMakeGObjCommon
  /* 115410 8018EBF0 2406000E */     addiu $a2, $zero, 0xe
  /* 115414 8018EBF4 3C178019 */       lui $s7, %hi(D_ovl7_80190B58)
  /* 115418 8018EBF8 26F70B58 */     addiu $s7, $s7, %lo(D_ovl7_80190B58)
  /* 11541C 8018EBFC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 115420 8018EC00 240EFFFF */     addiu $t6, $zero, -1
  /* 115424 8018EC04 AEE20050 */        sw $v0, 0x50($s7) # D_ovl7_80190B58 + 80
  /* 115428 8018EC08 0040B025 */        or $s6, $v0, $zero
  /* 11542C 8018EC0C AFAE0010 */        sw $t6, 0x10($sp)
  /* 115430 8018EC10 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 115434 8018EC14 00402025 */        or $a0, $v0, $zero
  /* 115438 8018EC18 24060017 */     addiu $a2, $zero, 0x17
  /* 11543C 8018EC1C 0C00277D */       jal func_80009DF4
  /* 115440 8018EC20 02003825 */        or $a3, $s0, $zero
  /* 115444 8018EC24 00008025 */        or $s0, $zero, $zero
  /* 115448 8018EC28 24150050 */     addiu $s5, $zero, 0x50
  /* 11544C 8018EC2C 24140201 */     addiu $s4, $zero, 0x201
  /* 115450 8018EC30 2413006A */     addiu $s3, $zero, 0x6a
  /* 115454 8018EC34 241200A7 */     addiu $s2, $zero, 0xa7
  /* 115458 8018EC38 241100F3 */     addiu $s1, $zero, 0xf3
  .L8018EC3C:
  /* 11545C 8018EC3C 8EEF002C */        lw $t7, 0x2c($s7) # D_ovl7_80190B58 + 44
  /* 115460 8018EC40 02C02025 */        or $a0, $s6, $zero
  /* 115464 8018EC44 0C0637B7 */       jal func_ovl7_8018DEDC
  /* 115468 8018EC48 020F2821 */      addu $a1, $s0, $t7
  /* 11546C 8018EC4C 2A010030 */      slti $at, $s0, 0x30
  /* 115470 8018EC50 10200007 */      beqz $at, .L8018EC70
  /* 115474 8018EC54 26100008 */     addiu $s0, $s0, %lo(D_NF_80000008)
  /* 115478 8018EC58 A0510028 */        sb $s1, 0x28($v0)
  /* 11547C 8018EC5C A0520029 */        sb $s2, 0x29($v0)
  /* 115480 8018EC60 A053002A */        sb $s3, 0x2a($v0)
  /* 115484 8018EC64 A0400060 */        sb $zero, 0x60($v0)
  /* 115488 8018EC68 A0400061 */        sb $zero, 0x61($v0)
  /* 11548C 8018EC6C A0400062 */        sb $zero, 0x62($v0)
  .L8018EC70:
  /* 115490 8018EC70 1615FFF2 */       bne $s0, $s5, .L8018EC3C
  /* 115494 8018EC74 A4540024 */        sh $s4, 0x24($v0)
  /* 115498 8018EC78 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11549C 8018EC7C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 1154A0 8018EC80 8FB10020 */        lw $s1, 0x20($sp)
  /* 1154A4 8018EC84 8FB20024 */        lw $s2, 0x24($sp)
  /* 1154A8 8018EC88 8FB30028 */        lw $s3, 0x28($sp)
  /* 1154AC 8018EC8C 8FB4002C */        lw $s4, 0x2c($sp)
  /* 1154B0 8018EC90 8FB50030 */        lw $s5, 0x30($sp)
  /* 1154B4 8018EC94 8FB60034 */        lw $s6, 0x34($sp)
  /* 1154B8 8018EC98 8FB70038 */        lw $s7, 0x38($sp)
  /* 1154BC 8018EC9C 03E00008 */        jr $ra
  /* 1154C0 8018ECA0 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl7_8018ECA4
  /* 1154C4 8018ECA4 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 1154C8 8018ECA8 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 1154CC 8018ECAC 8C8E0030 */        lw $t6, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 1154D0 8018ECB0 24050201 */     addiu $a1, $zero, 0x201
  /* 1154D4 8018ECB4 2403000C */     addiu $v1, $zero, 0xc
  /* 1154D8 8018ECB8 8DCF0000 */        lw $t7, ($t6)
  /* 1154DC 8018ECBC 2402007C */     addiu $v0, $zero, 0x7c
  /* 1154E0 8018ECC0 A5E50014 */        sh $a1, 0x14($t7)
  /* 1154E4 8018ECC4 8C980030 */        lw $t8, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 1154E8 8018ECC8 8F190004 */        lw $t9, 4($t8)
  /* 1154EC 8018ECCC A7250014 */        sh $a1, 0x14($t9)
  /* 1154F0 8018ECD0 8C880030 */        lw $t0, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 1154F4 8018ECD4 8D090008 */        lw $t1, 8($t0)
  /* 1154F8 8018ECD8 A5250014 */        sh $a1, 0x14($t1)
  .L8018ECDC:
  /* 1154FC 8018ECDC 8C8A0030 */        lw $t2, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 115500 8018ECE0 01435821 */      addu $t3, $t2, $v1
  /* 115504 8018ECE4 8D6C0000 */        lw $t4, ($t3)
  /* 115508 8018ECE8 A5850014 */        sh $a1, 0x14($t4)
  /* 11550C 8018ECEC 8C8D0030 */        lw $t5, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 115510 8018ECF0 01A37021 */      addu $t6, $t5, $v1
  /* 115514 8018ECF4 8DCF0004 */        lw $t7, 4($t6)
  /* 115518 8018ECF8 A5E50014 */        sh $a1, 0x14($t7)
  /* 11551C 8018ECFC 8C980030 */        lw $t8, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 115520 8018ED00 0303C821 */      addu $t9, $t8, $v1
  /* 115524 8018ED04 8F280008 */        lw $t0, 8($t9)
  /* 115528 8018ED08 A5050014 */        sh $a1, 0x14($t0)
  /* 11552C 8018ED0C 8C890030 */        lw $t1, 0x30($a0) # D_ovl7_80190B58 + 48
  /* 115530 8018ED10 01235021 */      addu $t2, $t1, $v1
  /* 115534 8018ED14 8D4B000C */        lw $t3, 0xc($t2)
  /* 115538 8018ED18 24630010 */     addiu $v1, $v1, 0x10
  /* 11553C 8018ED1C 1462FFEF */       bne $v1, $v0, .L8018ECDC
  /* 115540 8018ED20 A5650014 */        sh $a1, 0x14($t3)
  /* 115544 8018ED24 03E00008 */        jr $ra
  /* 115548 8018ED28 00000000 */       nop 

glabel func_ovl7_8018ED2C
  /* 11554C 8018ED2C 3C0A8004 */       lui $t2, %hi(gpDisplayListHead)
  /* 115550 8018ED30 254A65B0 */     addiu $t2, $t2, %lo(gpDisplayListHead)
  /* 115554 8018ED34 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 115558 8018ED38 AFA40000 */        sw $a0, ($sp)
  /* 11555C 8018ED3C 3C0BE700 */       lui $t3, 0xe700
  /* 115560 8018ED40 246E0008 */     addiu $t6, $v1, 8
  /* 115564 8018ED44 AD4E0000 */        sw $t6, ($t2) # gpDisplayListHead + 0
  /* 115568 8018ED48 AC600004 */        sw $zero, 4($v1)
  /* 11556C 8018ED4C AC6B0000 */        sw $t3, ($v1)
  /* 115570 8018ED50 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 115574 8018ED54 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 115578 8018ED58 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11557C 8018ED5C 246F0008 */     addiu $t7, $v1, 8
  /* 115580 8018ED60 AD4F0000 */        sw $t7, ($t2) # gpDisplayListHead + 0
  /* 115584 8018ED64 AC600004 */        sw $zero, 4($v1)
  /* 115588 8018ED68 AC780000 */        sw $t8, ($v1)
  /* 11558C 8018ED6C 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 115590 8018ED70 3C0CFCFF */       lui $t4, (0xFCFFFFFF >> 16) # 4244635647
  /* 115594 8018ED74 3C0DFFFD */       lui $t5, (0xFFFDF6FB >> 16) # 4294833915
  /* 115598 8018ED78 24790008 */     addiu $t9, $v1, 8
  /* 11559C 8018ED7C AD590000 */        sw $t9, ($t2) # gpDisplayListHead + 0
  /* 1155A0 8018ED80 35ADF6FB */       ori $t5, $t5, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 1155A4 8018ED84 358CFFFF */       ori $t4, $t4, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 1155A8 8018ED88 AC6C0000 */        sw $t4, ($v1)
  /* 1155AC 8018ED8C AC6D0004 */        sw $t5, 4($v1)
  /* 1155B0 8018ED90 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 1155B4 8018ED94 3C180050 */       lui $t8, (0x504340 >> 16) # 5260096
  /* 1155B8 8018ED98 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1155BC 8018ED9C 246E0008 */     addiu $t6, $v1, 8
  /* 1155C0 8018EDA0 AD4E0000 */        sw $t6, ($t2) # gpDisplayListHead + 0
  /* 1155C4 8018EDA4 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 1155C8 8018EDA8 37184340 */       ori $t8, $t8, (0x504340 & 0xFFFF) # 5260096
  /* 1155CC 8018EDAC AC780004 */        sw $t8, 4($v1)
  /* 1155D0 8018EDB0 AC6F0000 */        sw $t7, ($v1)
  /* 1155D4 8018EDB4 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 1155D8 8018EDB8 3C0D0064 */       lui $t5, (0x64FF64 >> 16) # 6618980
  /* 1155DC 8018EDBC 35ADFF64 */       ori $t5, $t5, (0x64FF64 & 0xFFFF) # 6618980
  /* 1155E0 8018EDC0 24790008 */     addiu $t9, $v1, 8
  /* 1155E4 8018EDC4 AD590000 */        sw $t9, ($t2) # gpDisplayListHead + 0
  /* 1155E8 8018EDC8 3C0CFA00 */       lui $t4, 0xfa00
  /* 1155EC 8018EDCC AC6C0000 */        sw $t4, ($v1)
  /* 1155F0 8018EDD0 AC6D0004 */        sw $t5, 4($v1)
  /* 1155F4 8018EDD4 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 1155F8 8018EDD8 3C0FF63F */       lui $t7, (0xF63F4318 >> 16) # 4131341080
  /* 1155FC 8018EDDC 3C180011 */       lui $t8, (0x1100BC >> 16) # 1114300
  /* 115600 8018EDE0 246E0008 */     addiu $t6, $v1, 8
  /* 115604 8018EDE4 AD4E0000 */        sw $t6, ($t2) # gpDisplayListHead + 0
  /* 115608 8018EDE8 371800BC */       ori $t8, $t8, (0x1100BC & 0xFFFF) # 1114300
  /* 11560C 8018EDEC 35EF4318 */       ori $t7, $t7, (0xF63F4318 & 0xFFFF) # 4131341080
  /* 115610 8018EDF0 AC6F0000 */        sw $t7, ($v1)
  /* 115614 8018EDF4 AC780004 */        sw $t8, 4($v1)
  /* 115618 8018EDF8 8D430000 */        lw $v1, ($t2) # gpDisplayListHead + 0
  /* 11561C 8018EDFC 24790008 */     addiu $t9, $v1, 8
  /* 115620 8018EE00 AD590000 */        sw $t9, ($t2) # gpDisplayListHead + 0
  /* 115624 8018EE04 AC600004 */        sw $zero, 4($v1)
  /* 115628 8018EE08 03E00008 */        jr $ra
  /* 11562C 8018EE0C AC6B0000 */        sw $t3, ($v1)

glabel func_ovl7_8018EE10
  /* 115630 8018EE10 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 115634 8018EE14 AFBF001C */        sw $ra, 0x1c($sp)
  /* 115638 8018EE18 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 11563C 8018EE1C 00002825 */        or $a1, $zero, $zero
  /* 115640 8018EE20 2406000E */     addiu $a2, $zero, 0xe
  /* 115644 8018EE24 0C00265A */       jal omMakeGObjCommon
  /* 115648 8018EE28 3C078000 */       lui $a3, 0x8000
  /* 11564C 8018EE2C 3C058019 */       lui $a1, %hi(func_ovl7_8018ED2C)
  /* 115650 8018EE30 240EFFFF */     addiu $t6, $zero, -1
  /* 115654 8018EE34 AFAE0010 */        sw $t6, 0x10($sp)
  /* 115658 8018EE38 24A5ED2C */     addiu $a1, $a1, %lo(func_ovl7_8018ED2C)
  /* 11565C 8018EE3C 00402025 */        or $a0, $v0, $zero
  /* 115660 8018EE40 24060016 */     addiu $a2, $zero, 0x16
  /* 115664 8018EE44 0C00277D */       jal func_80009DF4
  /* 115668 8018EE48 3C078000 */       lui $a3, 0x8000
  /* 11566C 8018EE4C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115670 8018EE50 27BD0020 */     addiu $sp, $sp, 0x20
  /* 115674 8018EE54 03E00008 */        jr $ra
  /* 115678 8018EE58 00000000 */       nop 

glabel func_ovl7_8018EE5C
  /* 11567C 8018EE5C 3C058019 */       lui $a1, %hi(D_ovl7_80190B58)
  /* 115680 8018EE60 24A50B58 */     addiu $a1, $a1, %lo(D_ovl7_80190B58)
  /* 115684 8018EE64 8CAE0030 */        lw $t6, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115688 8018EE68 240600FF */     addiu $a2, $zero, 0xff
  /* 11568C 8018EE6C 24020016 */     addiu $v0, $zero, 0x16
  /* 115690 8018EE70 8DC30054 */        lw $v1, 0x54($t6)
  /* 115694 8018EE74 00022080 */       sll $a0, $v0, 2
  /* 115698 8018EE78 A0660018 */        sb $a2, 0x18($v1)
  /* 11569C 8018EE7C A0660019 */        sb $a2, 0x19($v1)
  /* 1156A0 8018EE80 A066001A */        sb $a2, 0x1a($v1)
  /* 1156A4 8018EE84 8CAF0030 */        lw $t7, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 1156A8 8018EE88 01E4C021 */      addu $t8, $t7, $a0
  /* 1156AC 8018EE8C 8F030000 */        lw $v1, ($t8)
  /* 1156B0 8018EE90 A0660018 */        sb $a2, 0x18($v1)
  /* 1156B4 8018EE94 A0660019 */        sb $a2, 0x19($v1)
  /* 1156B8 8018EE98 A066001A */        sb $a2, 0x1a($v1)
  /* 1156BC 8018EE9C 8CB90030 */        lw $t9, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 1156C0 8018EEA0 03244021 */      addu $t0, $t9, $a0
  /* 1156C4 8018EEA4 8D030004 */        lw $v1, 4($t0)
  /* 1156C8 8018EEA8 A0660018 */        sb $a2, 0x18($v1)
  /* 1156CC 8018EEAC A0660019 */        sb $a2, 0x19($v1)
  /* 1156D0 8018EEB0 A066001A */        sb $a2, 0x1a($v1)
  /* 1156D4 8018EEB4 8CA90030 */        lw $t1, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 1156D8 8018EEB8 01245021 */      addu $t2, $t1, $a0
  /* 1156DC 8018EEBC 8D430008 */        lw $v1, 8($t2)
  /* 1156E0 8018EEC0 A0660018 */        sb $a2, 0x18($v1)
  /* 1156E4 8018EEC4 A0660019 */        sb $a2, 0x19($v1)
  /* 1156E8 8018EEC8 A066001A */        sb $a2, 0x1a($v1)
  /* 1156EC 8018EECC 8CAB0030 */        lw $t3, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 1156F0 8018EED0 01646021 */      addu $t4, $t3, $a0
  /* 1156F4 8018EED4 8D83000C */        lw $v1, 0xc($t4)
  /* 1156F8 8018EED8 A0660018 */        sb $a2, 0x18($v1)
  /* 1156FC 8018EEDC A0660019 */        sb $a2, 0x19($v1)
  /* 115700 8018EEE0 03E00008 */        jr $ra
  /* 115704 8018EEE4 A066001A */        sb $a2, 0x1a($v1)

glabel func_ovl7_8018EEE8
  /* 115708 8018EEE8 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 11570C 8018EEEC 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115710 8018EEF0 8C780014 */        lw $t8, 0x14($v1) # D_ovl7_80190B58 + 20
  /* 115714 8018EEF4 8C6F0030 */        lw $t7, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115718 8018EEF8 8C6E0058 */        lw $t6, 0x58($v1) # D_ovl7_80190B58 + 88
  /* 11571C 8018EEFC 0018C880 */       sll $t9, $t8, 2
  /* 115720 8018EF00 01F94021 */      addu $t0, $t7, $t9
  /* 115724 8018EF04 8D090054 */        lw $t1, 0x54($t0)
  /* 115728 8018EF08 8DC20074 */        lw $v0, 0x74($t6)
  /* 11572C 8018EF0C 252D003C */     addiu $t5, $t1, 0x3c
  /* 115730 8018EF10 00406025 */        or $t4, $v0, $zero
  .L8018EF14:
  /* 115734 8018EF14 8D2B0000 */        lw $t3, ($t1)
  /* 115738 8018EF18 2529000C */     addiu $t1, $t1, 0xc
  /* 11573C 8018EF1C 258C000C */     addiu $t4, $t4, 0xc
  /* 115740 8018EF20 AD8B0004 */        sw $t3, 4($t4)
  /* 115744 8018EF24 8D2AFFF8 */        lw $t2, -8($t1)
  /* 115748 8018EF28 AD8A0008 */        sw $t2, 8($t4)
  /* 11574C 8018EF2C 8D2BFFFC */        lw $t3, -4($t1)
  /* 115750 8018EF30 152DFFF8 */       bne $t1, $t5, .L8018EF14
  /* 115754 8018EF34 AD8B000C */        sw $t3, 0xc($t4)
  /* 115758 8018EF38 8D2B0000 */        lw $t3, ($t1)
  /* 11575C 8018EF3C 240F00BF */     addiu $t7, $zero, 0xbf
  /* 115760 8018EF40 AD8B0010 */        sw $t3, 0x10($t4)
  /* 115764 8018EF44 8D2A0004 */        lw $t2, 4($t1)
  /* 115768 8018EF48 AD8A0014 */        sw $t2, 0x14($t4)
  /* 11576C 8018EF4C 844E0014 */        lh $t6, 0x14($v0)
  /* 115770 8018EF50 05C10003 */      bgez $t6, .L8018EF60
  /* 115774 8018EF54 000EC043 */       sra $t8, $t6, 1
  /* 115778 8018EF58 25C10001 */     addiu $at, $t6, 1
  /* 11577C 8018EF5C 0001C043 */       sra $t8, $at, 1
  .L8018EF60:
  /* 115780 8018EF60 01F8C823 */      subu $t9, $t7, $t8
  /* 115784 8018EF64 44992000 */      mtc1 $t9, $f4
  /* 115788 8018EF68 00000000 */       nop 
  /* 11578C 8018EF6C 468021A0 */   cvt.s.w $f6, $f4
  /* 115790 8018EF70 03E00008 */        jr $ra
  /* 115794 8018EF74 E4460058 */      swc1 $f6, 0x58($v0)

glabel func_ovl7_8018EF78
  /* 115798 8018EF78 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 11579C 8018EF7C AFBF001C */        sw $ra, 0x1c($sp)
  /* 1157A0 8018EF80 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 1157A4 8018EF84 00002825 */        or $a1, $zero, $zero
  /* 1157A8 8018EF88 2406000E */     addiu $a2, $zero, 0xe
  /* 1157AC 8018EF8C 0C00265A */       jal omMakeGObjCommon
  /* 1157B0 8018EF90 3C078000 */       lui $a3, 0x8000
  /* 1157B4 8018EF94 3C018019 */       lui $at, %hi(D_ovl7_80190BB0)
  /* 1157B8 8018EF98 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1157BC 8018EF9C 240EFFFF */     addiu $t6, $zero, -1
  /* 1157C0 8018EFA0 AC220BB0 */        sw $v0, %lo(D_ovl7_80190BB0)($at)
  /* 1157C4 8018EFA4 AFA20024 */        sw $v0, 0x24($sp)
  /* 1157C8 8018EFA8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1157CC 8018EFAC 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1157D0 8018EFB0 00402025 */        or $a0, $v0, $zero
  /* 1157D4 8018EFB4 24060017 */     addiu $a2, $zero, 0x17
  /* 1157D8 8018EFB8 0C00277D */       jal func_80009DF4
  /* 1157DC 8018EFBC 3C078000 */       lui $a3, 0x8000
  /* 1157E0 8018EFC0 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 1157E4 8018EFC4 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 1157E8 8018EFC8 8C580014 */        lw $t8, 0x14($v0) # D_ovl7_80190B58 + 20
  /* 1157EC 8018EFCC 8C4F0030 */        lw $t7, 0x30($v0) # D_ovl7_80190B58 + 48
  /* 1157F0 8018EFD0 8FA40024 */        lw $a0, 0x24($sp)
  /* 1157F4 8018EFD4 0018C880 */       sll $t9, $t8, 2
  /* 1157F8 8018EFD8 01F94021 */      addu $t0, $t7, $t9
  /* 1157FC 8018EFDC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115800 8018EFE0 8D050054 */        lw $a1, 0x54($t0)
  /* 115804 8018EFE4 84490014 */        lh $t1, 0x14($v0)
  /* 115808 8018EFE8 240B00BF */     addiu $t3, $zero, 0xbf
  /* 11580C 8018EFEC 240D004A */     addiu $t5, $zero, 0x4a
  /* 115810 8018EFF0 05210003 */      bgez $t1, .L8018F000
  /* 115814 8018EFF4 00095043 */       sra $t2, $t1, 1
  /* 115818 8018EFF8 25210001 */     addiu $at, $t1, 1
  /* 11581C 8018EFFC 00015043 */       sra $t2, $at, 1
  .L8018F000:
  /* 115820 8018F000 016A6023 */      subu $t4, $t3, $t2
  /* 115824 8018F004 448C2000 */      mtc1 $t4, $f4
  /* 115828 8018F008 3C014282 */       lui $at, (0x42820000 >> 16) # 65.0
  /* 11582C 8018F00C 44814000 */      mtc1 $at, $f8 # 65.0 to cop1
  /* 115830 8018F010 468021A0 */   cvt.s.w $f6, $f4
  /* 115834 8018F014 240E002E */     addiu $t6, $zero, 0x2e
  /* 115838 8018F018 24180060 */     addiu $t8, $zero, 0x60
  /* 11583C 8018F01C A04D0060 */        sb $t5, 0x60($v0)
  /* 115840 8018F020 A04E0061 */        sb $t6, 0x61($v0)
  /* 115844 8018F024 A0580062 */        sb $t8, 0x62($v0)
  /* 115848 8018F028 E4460058 */      swc1 $f6, 0x58($v0)
  /* 11584C 8018F02C E448005C */      swc1 $f8, 0x5c($v0)
  /* 115850 8018F030 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115854 8018F034 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115858 8018F038 03E00008 */        jr $ra
  /* 11585C 8018F03C 00000000 */       nop 

glabel func_ovl7_8018F040
  /* 115860 8018F040 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115864 8018F044 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115868 8018F048 8C780010 */        lw $t8, 0x10($v1) # D_ovl7_80190B58 + 16
  /* 11586C 8018F04C 8C6F0030 */        lw $t7, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115870 8018F050 8C6E005C */        lw $t6, 0x5c($v1) # D_ovl7_80190B58 + 92
  /* 115874 8018F054 0018C880 */       sll $t9, $t8, 2
  /* 115878 8018F058 01F94021 */      addu $t0, $t7, $t9
  /* 11587C 8018F05C 8D090000 */        lw $t1, ($t0)
  /* 115880 8018F060 8DC20074 */        lw $v0, 0x74($t6)
  /* 115884 8018F064 252D003C */     addiu $t5, $t1, 0x3c
  /* 115888 8018F068 00406025 */        or $t4, $v0, $zero
  .L8018F06C:
  /* 11588C 8018F06C 8D2B0000 */        lw $t3, ($t1)
  /* 115890 8018F070 2529000C */     addiu $t1, $t1, 0xc
  /* 115894 8018F074 258C000C */     addiu $t4, $t4, 0xc
  /* 115898 8018F078 AD8B0004 */        sw $t3, 4($t4)
  /* 11589C 8018F07C 8D2AFFF8 */        lw $t2, -8($t1)
  /* 1158A0 8018F080 AD8A0008 */        sw $t2, 8($t4)
  /* 1158A4 8018F084 8D2BFFFC */        lw $t3, -4($t1)
  /* 1158A8 8018F088 152DFFF8 */       bne $t1, $t5, .L8018F06C
  /* 1158AC 8018F08C AD8B000C */        sw $t3, 0xc($t4)
  /* 1158B0 8018F090 8D2B0000 */        lw $t3, ($t1)
  /* 1158B4 8018F094 240F00BF */     addiu $t7, $zero, 0xbf
  /* 1158B8 8018F098 AD8B0010 */        sw $t3, 0x10($t4)
  /* 1158BC 8018F09C 8D2A0004 */        lw $t2, 4($t1)
  /* 1158C0 8018F0A0 AD8A0014 */        sw $t2, 0x14($t4)
  /* 1158C4 8018F0A4 844E0014 */        lh $t6, 0x14($v0)
  /* 1158C8 8018F0A8 05C10003 */      bgez $t6, .L8018F0B8
  /* 1158CC 8018F0AC 000EC043 */       sra $t8, $t6, 1
  /* 1158D0 8018F0B0 25C10001 */     addiu $at, $t6, 1
  /* 1158D4 8018F0B4 0001C043 */       sra $t8, $at, 1
  .L8018F0B8:
  /* 1158D8 8018F0B8 01F8C823 */      subu $t9, $t7, $t8
  /* 1158DC 8018F0BC 44992000 */      mtc1 $t9, $f4
  /* 1158E0 8018F0C0 2401000B */     addiu $at, $zero, 0xb
  /* 1158E4 8018F0C4 468021A0 */   cvt.s.w $f6, $f4
  /* 1158E8 8018F0C8 E4460058 */      swc1 $f6, 0x58($v0)
  /* 1158EC 8018F0CC 8C680010 */        lw $t0, 0x10($v1) # D_ovl7_80190B58 + 16
  /* 1158F0 8018F0D0 15010004 */       bne $t0, $at, .L8018F0E4
  /* 1158F4 8018F0D4 3C0142A6 */       lui $at, (0x42A60000 >> 16) # 83.0
  /* 1158F8 8018F0D8 44814000 */      mtc1 $at, $f8 # 83.0 to cop1
  /* 1158FC 8018F0DC 03E00008 */        jr $ra
  /* 115900 8018F0E0 E448005C */      swc1 $f8, 0x5c($v0)

  .L8018F0E4:
  /* 115904 8018F0E4 3C0142AA */       lui $at, (0x42AA0000 >> 16) # 85.0
  /* 115908 8018F0E8 44815000 */      mtc1 $at, $f10 # 85.0 to cop1
  /* 11590C 8018F0EC 00000000 */       nop 
  /* 115910 8018F0F0 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 115914 8018F0F4 03E00008 */        jr $ra
  /* 115918 8018F0F8 00000000 */       nop 

glabel func_ovl7_8018F0FC
  /* 11591C 8018F0FC 3C058019 */       lui $a1, %hi(D_ovl7_80190B58)
  /* 115920 8018F100 24A50B58 */     addiu $a1, $a1, %lo(D_ovl7_80190B58)
  /* 115924 8018F104 8CAE0030 */        lw $t6, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115928 8018F108 240600FF */     addiu $a2, $zero, 0xff
  /* 11592C 8018F10C 24040004 */     addiu $a0, $zero, 4
  /* 115930 8018F110 8DC30000 */        lw $v1, ($t6)
  /* 115934 8018F114 24020044 */     addiu $v0, $zero, 0x44
  /* 115938 8018F118 A0660018 */        sb $a2, 0x18($v1)
  /* 11593C 8018F11C A0660019 */        sb $a2, 0x19($v1)
  /* 115940 8018F120 A066001A */        sb $a2, 0x1a($v1)
  .L8018F124:
  /* 115944 8018F124 8CAF0030 */        lw $t7, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115948 8018F128 01E4C021 */      addu $t8, $t7, $a0
  /* 11594C 8018F12C 8F030000 */        lw $v1, ($t8)
  /* 115950 8018F130 A0660018 */        sb $a2, 0x18($v1)
  /* 115954 8018F134 A0660019 */        sb $a2, 0x19($v1)
  /* 115958 8018F138 A066001A */        sb $a2, 0x1a($v1)
  /* 11595C 8018F13C 8CB90030 */        lw $t9, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115960 8018F140 03244021 */      addu $t0, $t9, $a0
  /* 115964 8018F144 8D030004 */        lw $v1, 4($t0)
  /* 115968 8018F148 A0660018 */        sb $a2, 0x18($v1)
  /* 11596C 8018F14C A0660019 */        sb $a2, 0x19($v1)
  /* 115970 8018F150 A066001A */        sb $a2, 0x1a($v1)
  /* 115974 8018F154 8CA90030 */        lw $t1, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115978 8018F158 01245021 */      addu $t2, $t1, $a0
  /* 11597C 8018F15C 8D430008 */        lw $v1, 8($t2)
  /* 115980 8018F160 A0660018 */        sb $a2, 0x18($v1)
  /* 115984 8018F164 A0660019 */        sb $a2, 0x19($v1)
  /* 115988 8018F168 A066001A */        sb $a2, 0x1a($v1)
  /* 11598C 8018F16C 8CAB0030 */        lw $t3, 0x30($a1) # D_ovl7_80190B58 + 48
  /* 115990 8018F170 01646021 */      addu $t4, $t3, $a0
  /* 115994 8018F174 8D83000C */        lw $v1, 0xc($t4)
  /* 115998 8018F178 24840010 */     addiu $a0, $a0, 0x10
  /* 11599C 8018F17C A0660018 */        sb $a2, 0x18($v1)
  /* 1159A0 8018F180 A0660019 */        sb $a2, 0x19($v1)
  /* 1159A4 8018F184 1482FFE7 */       bne $a0, $v0, .L8018F124
  /* 1159A8 8018F188 A066001A */        sb $a2, 0x1a($v1)
  /* 1159AC 8018F18C 03E00008 */        jr $ra
  /* 1159B0 8018F190 00000000 */       nop 

glabel func_ovl7_8018F194
  /* 1159B4 8018F194 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1159B8 8018F198 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1159BC 8018F19C 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 1159C0 8018F1A0 00002825 */        or $a1, $zero, $zero
  /* 1159C4 8018F1A4 2406000E */     addiu $a2, $zero, 0xe
  /* 1159C8 8018F1A8 0C00265A */       jal omMakeGObjCommon
  /* 1159CC 8018F1AC 3C078000 */       lui $a3, 0x8000
  /* 1159D0 8018F1B0 3C018019 */       lui $at, %hi(D_ovl7_80190BB4)
  /* 1159D4 8018F1B4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1159D8 8018F1B8 240EFFFF */     addiu $t6, $zero, -1
  /* 1159DC 8018F1BC AC220BB4 */        sw $v0, %lo(D_ovl7_80190BB4)($at)
  /* 1159E0 8018F1C0 AFA20024 */        sw $v0, 0x24($sp)
  /* 1159E4 8018F1C4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1159E8 8018F1C8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1159EC 8018F1CC 00402025 */        or $a0, $v0, $zero
  /* 1159F0 8018F1D0 24060017 */     addiu $a2, $zero, 0x17
  /* 1159F4 8018F1D4 0C00277D */       jal func_80009DF4
  /* 1159F8 8018F1D8 3C078000 */       lui $a3, 0x8000
  /* 1159FC 8018F1DC 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 115A00 8018F1E0 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 115A04 8018F1E4 8C580010 */        lw $t8, 0x10($v0) # D_ovl7_80190B58 + 16
  /* 115A08 8018F1E8 8C4F0030 */        lw $t7, 0x30($v0) # D_ovl7_80190B58 + 48
  /* 115A0C 8018F1EC 8FA40024 */        lw $a0, 0x24($sp)
  /* 115A10 8018F1F0 0018C880 */       sll $t9, $t8, 2
  /* 115A14 8018F1F4 01F94021 */      addu $t0, $t7, $t9
  /* 115A18 8018F1F8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115A1C 8018F1FC 8D050000 */        lw $a1, ($t0)
  /* 115A20 8018F200 84490014 */        lh $t1, 0x14($v0)
  /* 115A24 8018F204 240B00BF */     addiu $t3, $zero, 0xbf
  /* 115A28 8018F208 00401825 */        or $v1, $v0, $zero
  /* 115A2C 8018F20C 05210003 */      bgez $t1, .L8018F21C
  /* 115A30 8018F210 00095043 */       sra $t2, $t1, 1
  /* 115A34 8018F214 25210001 */     addiu $at, $t1, 1
  /* 115A38 8018F218 00015043 */       sra $t2, $at, 1
  .L8018F21C:
  /* 115A3C 8018F21C 016A6023 */      subu $t4, $t3, $t2
  /* 115A40 8018F220 448C2000 */      mtc1 $t4, $f4
  /* 115A44 8018F224 00000000 */       nop 
  /* 115A48 8018F228 468021A0 */   cvt.s.w $f6, $f4
  /* 115A4C 8018F22C E4460058 */      swc1 $f6, 0x58($v0)
  /* 115A50 8018F230 0C063C10 */       jal func_ovl7_8018F040
  /* 115A54 8018F234 AFA30020 */        sw $v1, 0x20($sp)
  /* 115A58 8018F238 8FA30020 */        lw $v1, 0x20($sp)
  /* 115A5C 8018F23C 240D004A */     addiu $t5, $zero, 0x4a
  /* 115A60 8018F240 240E002E */     addiu $t6, $zero, 0x2e
  /* 115A64 8018F244 24180060 */     addiu $t8, $zero, 0x60
  /* 115A68 8018F248 A06D0060 */        sb $t5, 0x60($v1)
  /* 115A6C 8018F24C A06E0061 */        sb $t6, 0x61($v1)
  /* 115A70 8018F250 A0780062 */        sb $t8, 0x62($v1)
  /* 115A74 8018F254 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115A78 8018F258 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115A7C 8018F25C 03E00008 */        jr $ra
  /* 115A80 8018F260 00000000 */       nop 

glabel func_ovl7_8018F264
  /* 115A84 8018F264 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115A88 8018F268 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115A8C 8018F26C 8C6E0030 */        lw $t6, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115A90 8018F270 240400FF */     addiu $a0, $zero, 0xff
  /* 115A94 8018F274 8DC20044 */        lw $v0, 0x44($t6)
  /* 115A98 8018F278 A0440018 */        sb $a0, 0x18($v0)
  /* 115A9C 8018F27C A0440019 */        sb $a0, 0x19($v0)
  /* 115AA0 8018F280 A044001A */        sb $a0, 0x1a($v0)
  /* 115AA4 8018F284 8C6F0030 */        lw $t7, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115AA8 8018F288 8DE20048 */        lw $v0, 0x48($t7)
  /* 115AAC 8018F28C A0440018 */        sb $a0, 0x18($v0)
  /* 115AB0 8018F290 A0440019 */        sb $a0, 0x19($v0)
  /* 115AB4 8018F294 A044001A */        sb $a0, 0x1a($v0)
  /* 115AB8 8018F298 8C780030 */        lw $t8, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115ABC 8018F29C 8F02004C */        lw $v0, 0x4c($t8)
  /* 115AC0 8018F2A0 A0440018 */        sb $a0, 0x18($v0)
  /* 115AC4 8018F2A4 A0440019 */        sb $a0, 0x19($v0)
  /* 115AC8 8018F2A8 A044001A */        sb $a0, 0x1a($v0)
  /* 115ACC 8018F2AC 8C790030 */        lw $t9, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115AD0 8018F2B0 8F220050 */        lw $v0, 0x50($t9)
  /* 115AD4 8018F2B4 A0440018 */        sb $a0, 0x18($v0)
  /* 115AD8 8018F2B8 A0440019 */        sb $a0, 0x19($v0)
  /* 115ADC 8018F2BC 03E00008 */        jr $ra
  /* 115AE0 8018F2C0 A044001A */        sb $a0, 0x1a($v0)

glabel func_ovl7_8018F2C4
  /* 115AE4 8018F2C4 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115AE8 8018F2C8 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115AEC 8018F2CC 8C780018 */        lw $t8, 0x18($v1) # D_ovl7_80190B58 + 24
  /* 115AF0 8018F2D0 8C6F0030 */        lw $t7, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115AF4 8018F2D4 8C6E0060 */        lw $t6, 0x60($v1) # D_ovl7_80190B58 + 96
  /* 115AF8 8018F2D8 0018C880 */       sll $t9, $t8, 2
  /* 115AFC 8018F2DC 01F94021 */      addu $t0, $t7, $t9
  /* 115B00 8018F2E0 8D090044 */        lw $t1, 0x44($t0)
  /* 115B04 8018F2E4 8DC20074 */        lw $v0, 0x74($t6)
  /* 115B08 8018F2E8 252D003C */     addiu $t5, $t1, 0x3c
  /* 115B0C 8018F2EC 00406025 */        or $t4, $v0, $zero
  .L8018F2F0:
  /* 115B10 8018F2F0 8D2B0000 */        lw $t3, ($t1)
  /* 115B14 8018F2F4 2529000C */     addiu $t1, $t1, 0xc
  /* 115B18 8018F2F8 258C000C */     addiu $t4, $t4, 0xc
  /* 115B1C 8018F2FC AD8B0004 */        sw $t3, 4($t4)
  /* 115B20 8018F300 8D2AFFF8 */        lw $t2, -8($t1)
  /* 115B24 8018F304 AD8A0008 */        sw $t2, 8($t4)
  /* 115B28 8018F308 8D2BFFFC */        lw $t3, -4($t1)
  /* 115B2C 8018F30C 152DFFF8 */       bne $t1, $t5, .L8018F2F0
  /* 115B30 8018F310 AD8B000C */        sw $t3, 0xc($t4)
  /* 115B34 8018F314 8D2B0000 */        lw $t3, ($t1)
  /* 115B38 8018F318 240F00BF */     addiu $t7, $zero, 0xbf
  /* 115B3C 8018F31C AD8B0010 */        sw $t3, 0x10($t4)
  /* 115B40 8018F320 8D2A0004 */        lw $t2, 4($t1)
  /* 115B44 8018F324 AD8A0014 */        sw $t2, 0x14($t4)
  /* 115B48 8018F328 844E0014 */        lh $t6, 0x14($v0)
  /* 115B4C 8018F32C 05C10003 */      bgez $t6, .L8018F33C
  /* 115B50 8018F330 000EC043 */       sra $t8, $t6, 1
  /* 115B54 8018F334 25C10001 */     addiu $at, $t6, 1
  /* 115B58 8018F338 0001C043 */       sra $t8, $at, 1
  .L8018F33C:
  /* 115B5C 8018F33C 01F8C823 */      subu $t9, $t7, $t8
  /* 115B60 8018F340 44992000 */      mtc1 $t9, $f4
  /* 115B64 8018F344 00000000 */       nop 
  /* 115B68 8018F348 468021A0 */   cvt.s.w $f6, $f4
  /* 115B6C 8018F34C 03E00008 */        jr $ra
  /* 115B70 8018F350 E4460058 */      swc1 $f6, 0x58($v0)

glabel func_ovl7_8018F354
  /* 115B74 8018F354 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 115B78 8018F358 AFBF001C */        sw $ra, 0x1c($sp)
  /* 115B7C 8018F35C 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 115B80 8018F360 00002825 */        or $a1, $zero, $zero
  /* 115B84 8018F364 2406000E */     addiu $a2, $zero, 0xe
  /* 115B88 8018F368 0C00265A */       jal omMakeGObjCommon
  /* 115B8C 8018F36C 3C078000 */       lui $a3, 0x8000
  /* 115B90 8018F370 3C018019 */       lui $at, %hi(D_ovl7_80190BB8)
  /* 115B94 8018F374 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 115B98 8018F378 240EFFFF */     addiu $t6, $zero, -1
  /* 115B9C 8018F37C AC220BB8 */        sw $v0, %lo(D_ovl7_80190BB8)($at)
  /* 115BA0 8018F380 AFA20024 */        sw $v0, 0x24($sp)
  /* 115BA4 8018F384 AFAE0010 */        sw $t6, 0x10($sp)
  /* 115BA8 8018F388 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 115BAC 8018F38C 00402025 */        or $a0, $v0, $zero
  /* 115BB0 8018F390 24060017 */     addiu $a2, $zero, 0x17
  /* 115BB4 8018F394 0C00277D */       jal func_80009DF4
  /* 115BB8 8018F398 3C078000 */       lui $a3, 0x8000
  /* 115BBC 8018F39C 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 115BC0 8018F3A0 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 115BC4 8018F3A4 8C580018 */        lw $t8, 0x18($v0) # D_ovl7_80190B58 + 24
  /* 115BC8 8018F3A8 8C4F0030 */        lw $t7, 0x30($v0) # D_ovl7_80190B58 + 48
  /* 115BCC 8018F3AC 8FA40024 */        lw $a0, 0x24($sp)
  /* 115BD0 8018F3B0 0018C880 */       sll $t9, $t8, 2
  /* 115BD4 8018F3B4 01F94021 */      addu $t0, $t7, $t9
  /* 115BD8 8018F3B8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115BDC 8018F3BC 8D050044 */        lw $a1, 0x44($t0)
  /* 115BE0 8018F3C0 84490014 */        lh $t1, 0x14($v0)
  /* 115BE4 8018F3C4 240B00BF */     addiu $t3, $zero, 0xbf
  /* 115BE8 8018F3C8 240D004A */     addiu $t5, $zero, 0x4a
  /* 115BEC 8018F3CC 05210003 */      bgez $t1, .L8018F3DC
  /* 115BF0 8018F3D0 00095043 */       sra $t2, $t1, 1
  /* 115BF4 8018F3D4 25210001 */     addiu $at, $t1, 1
  /* 115BF8 8018F3D8 00015043 */       sra $t2, $at, 1
  .L8018F3DC:
  /* 115BFC 8018F3DC 016A6023 */      subu $t4, $t3, $t2
  /* 115C00 8018F3E0 448C2000 */      mtc1 $t4, $f4
  /* 115C04 8018F3E4 3C0142D2 */       lui $at, (0x42D20000 >> 16) # 105.0
  /* 115C08 8018F3E8 44814000 */      mtc1 $at, $f8 # 105.0 to cop1
  /* 115C0C 8018F3EC 468021A0 */   cvt.s.w $f6, $f4
  /* 115C10 8018F3F0 240E002E */     addiu $t6, $zero, 0x2e
  /* 115C14 8018F3F4 24180060 */     addiu $t8, $zero, 0x60
  /* 115C18 8018F3F8 A04D0060 */        sb $t5, 0x60($v0)
  /* 115C1C 8018F3FC A04E0061 */        sb $t6, 0x61($v0)
  /* 115C20 8018F400 A0580062 */        sb $t8, 0x62($v0)
  /* 115C24 8018F404 E4460058 */      swc1 $f6, 0x58($v0)
  /* 115C28 8018F408 E448005C */      swc1 $f8, 0x5c($v0)
  /* 115C2C 8018F40C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115C30 8018F410 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115C34 8018F414 03E00008 */        jr $ra
  /* 115C38 8018F418 00000000 */       nop 

glabel func_ovl7_8018F41C
  /* 115C3C 8018F41C 03E00008 */        jr $ra
  /* 115C40 8018F420 00000000 */       nop 

glabel func_ovl7_8018F424
  /* 115C44 8018F424 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115C48 8018F428 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115C4C 8018F42C 8C78001C */        lw $t8, 0x1c($v1) # D_ovl7_80190B58 + 28
  /* 115C50 8018F430 8C6F0030 */        lw $t7, 0x30($v1) # D_ovl7_80190B58 + 48
  /* 115C54 8018F434 8C6E0064 */        lw $t6, 0x64($v1) # D_ovl7_80190B58 + 100
  /* 115C58 8018F438 0018C880 */       sll $t9, $t8, 2
  /* 115C5C 8018F43C 01F94021 */      addu $t0, $t7, $t9
  /* 115C60 8018F440 8D090068 */        lw $t1, 0x68($t0)
  /* 115C64 8018F444 8DC20074 */        lw $v0, 0x74($t6)
  /* 115C68 8018F448 252D003C */     addiu $t5, $t1, 0x3c
  /* 115C6C 8018F44C 00406025 */        or $t4, $v0, $zero
  .L8018F450:
  /* 115C70 8018F450 8D2B0000 */        lw $t3, ($t1)
  /* 115C74 8018F454 2529000C */     addiu $t1, $t1, 0xc
  /* 115C78 8018F458 258C000C */     addiu $t4, $t4, 0xc
  /* 115C7C 8018F45C AD8B0004 */        sw $t3, 4($t4)
  /* 115C80 8018F460 8D2AFFF8 */        lw $t2, -8($t1)
  /* 115C84 8018F464 AD8A0008 */        sw $t2, 8($t4)
  /* 115C88 8018F468 8D2BFFFC */        lw $t3, -4($t1)
  /* 115C8C 8018F46C 152DFFF8 */       bne $t1, $t5, .L8018F450
  /* 115C90 8018F470 AD8B000C */        sw $t3, 0xc($t4)
  /* 115C94 8018F474 8D2B0000 */        lw $t3, ($t1)
  /* 115C98 8018F478 240F00BF */     addiu $t7, $zero, 0xbf
  /* 115C9C 8018F47C AD8B0010 */        sw $t3, 0x10($t4)
  /* 115CA0 8018F480 8D2A0004 */        lw $t2, 4($t1)
  /* 115CA4 8018F484 AD8A0014 */        sw $t2, 0x14($t4)
  /* 115CA8 8018F488 844E0014 */        lh $t6, 0x14($v0)
  /* 115CAC 8018F48C 05C10003 */      bgez $t6, .L8018F49C
  /* 115CB0 8018F490 000EC043 */       sra $t8, $t6, 1
  /* 115CB4 8018F494 25C10001 */     addiu $at, $t6, 1
  /* 115CB8 8018F498 0001C043 */       sra $t8, $at, 1
  .L8018F49C:
  /* 115CBC 8018F49C 01F8C823 */      subu $t9, $t7, $t8
  /* 115CC0 8018F4A0 44992000 */      mtc1 $t9, $f4
  /* 115CC4 8018F4A4 00000000 */       nop 
  /* 115CC8 8018F4A8 468021A0 */   cvt.s.w $f6, $f4
  /* 115CCC 8018F4AC 03E00008 */        jr $ra
  /* 115CD0 8018F4B0 E4460058 */      swc1 $f6, 0x58($v0)

glabel func_ovl7_8018F4B4
  /* 115CD4 8018F4B4 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 115CD8 8018F4B8 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 115CDC 8018F4BC 946200D6 */       lhu $v0, 0xd6($v1) # D_ovl7_80190B58 + 214
  /* 115CE0 8018F4C0 AFA40000 */        sw $a0, ($sp)
  /* 115CE4 8018F4C4 10400007 */      beqz $v0, .L8018F4E4
  /* 115CE8 8018F4C8 244EFFFF */     addiu $t6, $v0, -1
  /* 115CEC 8018F4CC 31CFFFFF */      andi $t7, $t6, 0xffff
  /* 115CF0 8018F4D0 15E00004 */      bnez $t7, .L8018F4E4
  /* 115CF4 8018F4D4 A46E00D6 */        sh $t6, 0xd6($v1) # D_ovl7_80190B58 + 214
  /* 115CF8 8018F4D8 24180001 */     addiu $t8, $zero, 1
  /* 115CFC 8018F4DC 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 115D00 8018F4E0 A0381580 */        sb $t8, %lo(D_ovl2_80131580)($at)
  .L8018F4E4:
  /* 115D04 8018F4E4 03E00008 */        jr $ra
  /* 115D08 8018F4E8 00000000 */       nop 

glabel func_ovl7_8018F4EC
  /* 115D0C 8018F4EC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 115D10 8018F4F0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 115D14 8018F4F4 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 115D18 8018F4F8 00002825 */        or $a1, $zero, $zero
  /* 115D1C 8018F4FC 2406000E */     addiu $a2, $zero, 0xe
  /* 115D20 8018F500 0C00265A */       jal omMakeGObjCommon
  /* 115D24 8018F504 3C078000 */       lui $a3, 0x8000
  /* 115D28 8018F508 3C018019 */       lui $at, %hi(D_ovl7_80190BBC)
  /* 115D2C 8018F50C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 115D30 8018F510 240EFFFF */     addiu $t6, $zero, -1
  /* 115D34 8018F514 AC220BBC */        sw $v0, %lo(D_ovl7_80190BBC)($at)
  /* 115D38 8018F518 AFA20024 */        sw $v0, 0x24($sp)
  /* 115D3C 8018F51C AFAE0010 */        sw $t6, 0x10($sp)
  /* 115D40 8018F520 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 115D44 8018F524 00402025 */        or $a0, $v0, $zero
  /* 115D48 8018F528 24060017 */     addiu $a2, $zero, 0x17
  /* 115D4C 8018F52C 0C00277D */       jal func_80009DF4
  /* 115D50 8018F530 3C078000 */       lui $a3, 0x8000
  /* 115D54 8018F534 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 115D58 8018F538 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 115D5C 8018F53C 8C58001C */        lw $t8, 0x1c($v0) # D_ovl7_80190B58 + 28
  /* 115D60 8018F540 8C4F0030 */        lw $t7, 0x30($v0) # D_ovl7_80190B58 + 48
  /* 115D64 8018F544 8FA40024 */        lw $a0, 0x24($sp)
  /* 115D68 8018F548 0018C880 */       sll $t9, $t8, 2
  /* 115D6C 8018F54C 01F94021 */      addu $t0, $t7, $t9
  /* 115D70 8018F550 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115D74 8018F554 8D050068 */        lw $a1, 0x68($t0)
  /* 115D78 8018F558 84490014 */        lh $t1, 0x14($v0)
  /* 115D7C 8018F55C 240B00BF */     addiu $t3, $zero, 0xbf
  /* 115D80 8018F560 240D004A */     addiu $t5, $zero, 0x4a
  /* 115D84 8018F564 05210003 */      bgez $t1, .L8018F574
  /* 115D88 8018F568 00095043 */       sra $t2, $t1, 1
  /* 115D8C 8018F56C 25210001 */     addiu $at, $t1, 1
  /* 115D90 8018F570 00015043 */       sra $t2, $at, 1
  .L8018F574:
  /* 115D94 8018F574 016A6023 */      subu $t4, $t3, $t2
  /* 115D98 8018F578 448C2000 */      mtc1 $t4, $f4
  /* 115D9C 8018F57C 3C0142FA */       lui $at, (0x42FA0000 >> 16) # 125.0
  /* 115DA0 8018F580 44814000 */      mtc1 $at, $f8 # 125.0 to cop1
  /* 115DA4 8018F584 468021A0 */   cvt.s.w $f6, $f4
  /* 115DA8 8018F588 240E002E */     addiu $t6, $zero, 0x2e
  /* 115DAC 8018F58C 24180060 */     addiu $t8, $zero, 0x60
  /* 115DB0 8018F590 A04D0060 */        sb $t5, 0x60($v0)
  /* 115DB4 8018F594 A04E0061 */        sb $t6, 0x61($v0)
  /* 115DB8 8018F598 A0580062 */        sb $t8, 0x62($v0)
  /* 115DBC 8018F59C E4460058 */      swc1 $f6, 0x58($v0)
  /* 115DC0 8018F5A0 3C058019 */       lui $a1, %hi(func_ovl7_8018F4B4)
  /* 115DC4 8018F5A4 E448005C */      swc1 $f8, 0x5c($v0)
  /* 115DC8 8018F5A8 8FA40024 */        lw $a0, 0x24($sp)
  /* 115DCC 8018F5AC 24A5F4B4 */     addiu $a1, $a1, %lo(func_ovl7_8018F4B4)
  /* 115DD0 8018F5B0 24060001 */     addiu $a2, $zero, 1
  /* 115DD4 8018F5B4 0C002062 */       jal omAddGObjCommonProc
  /* 115DD8 8018F5B8 24070004 */     addiu $a3, $zero, 4
  /* 115DDC 8018F5BC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115DE0 8018F5C0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115DE4 8018F5C4 03E00008 */        jr $ra
  /* 115DE8 8018F5C8 00000000 */       nop 

glabel func_ovl7_8018F5CC
  /* 115DEC 8018F5CC 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 115DF0 8018F5D0 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 115DF4 8018F5D4 8C4E0058 */        lw $t6, 0x58($v0) # D_ovl7_80190B58 + 88
  /* 115DF8 8018F5D8 8C58005C */        lw $t8, 0x5c($v0) # D_ovl7_80190B58 + 92
  /* 115DFC 8018F5DC 8C480060 */        lw $t0, 0x60($v0) # D_ovl7_80190B58 + 96
  /* 115E00 8018F5E0 8DCF0074 */        lw $t7, 0x74($t6)
  /* 115E04 8018F5E4 8C4A0064 */        lw $t2, 0x64($v0) # D_ovl7_80190B58 + 100
  /* 115E08 8018F5E8 AC4F006C */        sw $t7, 0x6c($v0) # D_ovl7_80190B58 + 108
  /* 115E0C 8018F5EC 8F190074 */        lw $t9, 0x74($t8)
  /* 115E10 8018F5F0 AC590070 */        sw $t9, 0x70($v0) # D_ovl7_80190B58 + 112
  /* 115E14 8018F5F4 8D090074 */        lw $t1, 0x74($t0)
  /* 115E18 8018F5F8 AC490074 */        sw $t1, 0x74($v0) # D_ovl7_80190B58 + 116
  /* 115E1C 8018F5FC 8D4B0074 */        lw $t3, 0x74($t2)
  /* 115E20 8018F600 03E00008 */        jr $ra
  /* 115E24 8018F604 AC4B0078 */        sw $t3, 0x78($v0) # D_ovl7_80190B58 + 120

glabel func_ovl7_8018F608
  /* 115E28 8018F608 240E00F3 */     addiu $t6, $zero, 0xf3
  /* 115E2C 8018F60C 240F0010 */     addiu $t7, $zero, 0x10
  /* 115E30 8018F610 2418000E */     addiu $t8, $zero, 0xe
  /* 115E34 8018F614 A08E0028 */        sb $t6, 0x28($a0)
  /* 115E38 8018F618 A08F0029 */        sb $t7, 0x29($a0)
  /* 115E3C 8018F61C A098002A */        sb $t8, 0x2a($a0)
  /* 115E40 8018F620 A0800060 */        sb $zero, 0x60($a0)
  /* 115E44 8018F624 A0800061 */        sb $zero, 0x61($a0)
  /* 115E48 8018F628 03E00008 */        jr $ra
  /* 115E4C 8018F62C A0800062 */        sb $zero, 0x62($a0)

glabel func_ovl7_8018F630
  /* 115E50 8018F630 3C068019 */       lui $a2, %hi(D_ovl7_80190B58)
  /* 115E54 8018F634 24C60B58 */     addiu $a2, $a2, %lo(D_ovl7_80190B58)
  /* 115E58 8018F638 8CCE0068 */        lw $t6, 0x68($a2) # D_ovl7_80190B58 + 104
  /* 115E5C 8018F63C 8CC40000 */        lw $a0, ($a2) # D_ovl7_80190B58 + 0
  /* 115E60 8018F640 8DC20074 */        lw $v0, 0x74($t6)
  /* 115E64 8018F644 28810004 */      slti $at, $a0, 4
  /* 115E68 8018F648 10200031 */      beqz $at, .L8018F710
  /* 115E6C 8018F64C 8C430008 */        lw $v1, 8($v0)
  /* 115E70 8018F650 3C014309 */       lui $at, (0x43090000 >> 16) # 137.0
  /* 115E74 8018F654 44812000 */      mtc1 $at, $f4 # 137.0 to cop1
  /* 115E78 8018F658 00047880 */       sll $t7, $a0, 2
  /* 115E7C 8018F65C 3C01436D */       lui $at, (0x436D0000 >> 16) # 237.0
  /* 115E80 8018F660 44813000 */      mtc1 $at, $f6 # 237.0 to cop1
  /* 115E84 8018F664 00CFC021 */      addu $t8, $a2, $t7
  /* 115E88 8018F668 8F05006C */        lw $a1, 0x6c($t8)
  /* 115E8C 8018F66C E4440058 */      swc1 $f4, 0x58($v0)
  /* 115E90 8018F670 E4660058 */      swc1 $f6, 0x58($v1)
  /* 115E94 8018F674 8CD90000 */        lw $t9, ($a2) # D_ovl7_80190B58 + 0
  /* 115E98 8018F678 24010001 */     addiu $at, $zero, 1
  /* 115E9C 8018F67C 57210012 */      bnel $t9, $at, .L8018F6C8
  /* 115EA0 8018F680 3C014040 */       lui $at, 0x4040
  /* 115EA4 8018F684 8CC80010 */        lw $t0, 0x10($a2) # D_ovl7_80190B58 + 16
  /* 115EA8 8018F688 2401000B */     addiu $at, $zero, 0xb
  /* 115EAC 8018F68C 1501000D */       bne $t0, $at, .L8018F6C4
  /* 115EB0 8018F690 3C0140A0 */       lui $at, (0x40A00000 >> 16) # 5.0
  /* 115EB4 8018F694 44815000 */      mtc1 $at, $f10 # 5.0 to cop1
  /* 115EB8 8018F698 C4A8005C */      lwc1 $f8, 0x5c($a1)
  /* 115EBC 8018F69C 460A4400 */     add.s $f16, $f8, $f10
  /* 115EC0 8018F6A0 4600848D */ trunc.w.s $f18, $f16
  /* 115EC4 8018F6A4 440A9000 */      mfc1 $t2, $f18
  /* 115EC8 8018F6A8 00000000 */       nop 
  /* 115ECC 8018F6AC 448A2000 */      mtc1 $t2, $f4
  /* 115ED0 8018F6B0 00000000 */       nop 
  /* 115ED4 8018F6B4 46802020 */   cvt.s.w $f0, $f4
  /* 115ED8 8018F6B8 E460005C */      swc1 $f0, 0x5c($v1)
  /* 115EDC 8018F6BC 1000000D */         b .L8018F6F4
  /* 115EE0 8018F6C0 E440005C */      swc1 $f0, 0x5c($v0)
  .L8018F6C4:
  /* 115EE4 8018F6C4 3C014040 */       lui $at, (0x40400000 >> 16) # 3.0
  .L8018F6C8:
  /* 115EE8 8018F6C8 44814000 */      mtc1 $at, $f8 # 3.0 to cop1
  /* 115EEC 8018F6CC C4A6005C */      lwc1 $f6, 0x5c($a1)
  /* 115EF0 8018F6D0 46083280 */     add.s $f10, $f6, $f8
  /* 115EF4 8018F6D4 4600540D */ trunc.w.s $f16, $f10
  /* 115EF8 8018F6D8 440C8000 */      mfc1 $t4, $f16
  /* 115EFC 8018F6DC 00000000 */       nop 
  /* 115F00 8018F6E0 448C9000 */      mtc1 $t4, $f18
  /* 115F04 8018F6E4 00000000 */       nop 
  /* 115F08 8018F6E8 46809020 */   cvt.s.w $f0, $f18
  /* 115F0C 8018F6EC E460005C */      swc1 $f0, 0x5c($v1)
  /* 115F10 8018F6F0 E440005C */      swc1 $f0, 0x5c($v0)
  .L8018F6F4:
  /* 115F14 8018F6F4 944D0024 */       lhu $t5, 0x24($v0)
  /* 115F18 8018F6F8 31AEFFFB */      andi $t6, $t5, 0xfffb
  /* 115F1C 8018F6FC A44E0024 */        sh $t6, 0x24($v0)
  /* 115F20 8018F700 946F0024 */       lhu $t7, 0x24($v1)
  /* 115F24 8018F704 31F8FFFB */      andi $t8, $t7, 0xfffb
  /* 115F28 8018F708 03E00008 */        jr $ra
  /* 115F2C 8018F70C A4780024 */        sh $t8, 0x24($v1)

  .L8018F710:
  /* 115F30 8018F710 94590024 */       lhu $t9, 0x24($v0)
  /* 115F34 8018F714 37280004 */       ori $t0, $t9, 4
  /* 115F38 8018F718 A4480024 */        sh $t0, 0x24($v0)
  /* 115F3C 8018F71C 94690024 */       lhu $t1, 0x24($v1)
  /* 115F40 8018F720 352A0004 */       ori $t2, $t1, 4
  /* 115F44 8018F724 A46A0024 */        sh $t2, 0x24($v1)
  /* 115F48 8018F728 03E00008 */        jr $ra
  /* 115F4C 8018F72C 00000000 */       nop 

glabel func_ovl7_8018F730
  /* 115F50 8018F730 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 115F54 8018F734 AFBF001C */        sw $ra, 0x1c($sp)
  /* 115F58 8018F738 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 115F5C 8018F73C 00002825 */        or $a1, $zero, $zero
  /* 115F60 8018F740 2406000E */     addiu $a2, $zero, 0xe
  /* 115F64 8018F744 0C00265A */       jal omMakeGObjCommon
  /* 115F68 8018F748 3C078000 */       lui $a3, 0x8000
  /* 115F6C 8018F74C 3C018019 */       lui $at, %hi(D_ovl7_80190BC0)
  /* 115F70 8018F750 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 115F74 8018F754 240EFFFF */     addiu $t6, $zero, -1
  /* 115F78 8018F758 AC220BC0 */        sw $v0, %lo(D_ovl7_80190BC0)($at)
  /* 115F7C 8018F75C AFA20024 */        sw $v0, 0x24($sp)
  /* 115F80 8018F760 AFAE0010 */        sw $t6, 0x10($sp)
  /* 115F84 8018F764 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 115F88 8018F768 00402025 */        or $a0, $v0, $zero
  /* 115F8C 8018F76C 24060017 */     addiu $a2, $zero, 0x17
  /* 115F90 8018F770 0C00277D */       jal func_80009DF4
  /* 115F94 8018F774 3C078000 */       lui $a3, 0x8000
  /* 115F98 8018F778 3C0F8019 */       lui $t7, %hi(D_ovl7_80190B88)
  /* 115F9C 8018F77C 8DEF0B88 */        lw $t7, %lo(D_ovl7_80190B88)($t7)
  /* 115FA0 8018F780 8FA40024 */        lw $a0, 0x24($sp)
  /* 115FA4 8018F784 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115FA8 8018F788 8DE50070 */        lw $a1, 0x70($t7)
  /* 115FAC 8018F78C 0C063D82 */       jal func_ovl7_8018F608
  /* 115FB0 8018F790 00402025 */        or $a0, $v0, $zero
  /* 115FB4 8018F794 3C188019 */       lui $t8, %hi(D_ovl7_80190B88)
  /* 115FB8 8018F798 8F180B88 */        lw $t8, %lo(D_ovl7_80190B88)($t8)
  /* 115FBC 8018F79C 8FA40024 */        lw $a0, 0x24($sp)
  /* 115FC0 8018F7A0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115FC4 8018F7A4 8F050074 */        lw $a1, 0x74($t8)
  /* 115FC8 8018F7A8 0C063D82 */       jal func_ovl7_8018F608
  /* 115FCC 8018F7AC 00402025 */        or $a0, $v0, $zero
  /* 115FD0 8018F7B0 0C063D8C */       jal func_ovl7_8018F630
  /* 115FD4 8018F7B4 00000000 */       nop 
  /* 115FD8 8018F7B8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 115FDC 8018F7BC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 115FE0 8018F7C0 03E00008 */        jr $ra
  /* 115FE4 8018F7C4 00000000 */       nop 

glabel func_ovl7_8018F7C8
  /* 115FE8 8018F7C8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 115FEC 8018F7CC AFBF0014 */        sw $ra, 0x14($sp)
  /* 115FF0 8018F7D0 AFA5001C */        sw $a1, 0x1c($sp)
  /* 115FF4 8018F7D4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 115FF8 8018F7D8 8CA50004 */        lw $a1, 4($a1)
  /* 115FFC 8018F7DC 8FAF001C */        lw $t7, 0x1c($sp)
  /* 116000 8018F7E0 85F80000 */        lh $t8, ($t7)
  /* 116004 8018F7E4 44982000 */      mtc1 $t8, $f4
  /* 116008 8018F7E8 00000000 */       nop 
  /* 11600C 8018F7EC 468021A0 */   cvt.s.w $f6, $f4
  /* 116010 8018F7F0 E4460058 */      swc1 $f6, 0x58($v0)
  /* 116014 8018F7F4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116018 8018F7F8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11601C 8018F7FC 03E00008 */        jr $ra
  /* 116020 8018F800 00000000 */       nop 

  /* 116024 8018F804 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 116028 8018F808 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 11602C 8018F80C 8C8E0034 */        lw $t6, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116030 8018F810 24050201 */     addiu $a1, $zero, 0x201
  /* 116034 8018F814 24020002 */     addiu $v0, $zero, 2
  /* 116038 8018F818 8DCF0004 */        lw $t7, 4($t6)
  /* 11603C 8018F81C 000218C0 */       sll $v1, $v0, 3
  /* 116040 8018F820 A5E50014 */        sh $a1, 0x14($t7)
  /* 116044 8018F824 8C980034 */        lw $t8, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116048 8018F828 8F19000C */        lw $t9, 0xc($t8)
  /* 11604C 8018F82C A7250014 */        sh $a1, 0x14($t9)
  /* 116050 8018F830 8C880034 */        lw $t0, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116054 8018F834 01034821 */      addu $t1, $t0, $v1
  /* 116058 8018F838 8D2A0004 */        lw $t2, 4($t1)
  /* 11605C 8018F83C A5450014 */        sh $a1, 0x14($t2)
  /* 116060 8018F840 8C8B0034 */        lw $t3, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116064 8018F844 01636021 */      addu $t4, $t3, $v1
  /* 116068 8018F848 8D8D000C */        lw $t5, 0xc($t4)
  /* 11606C 8018F84C A5A50014 */        sh $a1, 0x14($t5)
  /* 116070 8018F850 8C8E0034 */        lw $t6, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116074 8018F854 01C37821 */      addu $t7, $t6, $v1
  /* 116078 8018F858 8DF80014 */        lw $t8, 0x14($t7)
  /* 11607C 8018F85C A7050014 */        sh $a1, 0x14($t8)
  /* 116080 8018F860 8C990034 */        lw $t9, 0x34($a0) # D_ovl7_80190B58 + 52
  /* 116084 8018F864 03234021 */      addu $t0, $t9, $v1
  /* 116088 8018F868 8D09001C */        lw $t1, 0x1c($t0)
  /* 11608C 8018F86C 03E00008 */        jr $ra
  /* 116090 8018F870 A5250014 */        sh $a1, 0x14($t1)

  /* 116094 8018F874 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 116098 8018F878 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 11609C 8018F87C 8C780000 */        lw $t8, ($v1) # D_ovl7_80190B58 + 0
  /* 1160A0 8018F880 8C6F0034 */        lw $t7, 0x34($v1) # D_ovl7_80190B58 + 52
  /* 1160A4 8018F884 8C6E007C */        lw $t6, 0x7c($v1) # D_ovl7_80190B58 + 124
  /* 1160A8 8018F888 0018C8C0 */       sll $t9, $t8, 3
  /* 1160AC 8018F88C 01F94021 */      addu $t0, $t7, $t9
  /* 1160B0 8018F890 8D090004 */        lw $t1, 4($t0)
  /* 1160B4 8018F894 8DC20074 */        lw $v0, 0x74($t6)
  /* 1160B8 8018F898 252D003C */     addiu $t5, $t1, 0x3c
  /* 1160BC 8018F89C 00406025 */        or $t4, $v0, $zero
  .L8018F8A0:
  /* 1160C0 8018F8A0 8D2B0000 */        lw $t3, ($t1)
  /* 1160C4 8018F8A4 2529000C */     addiu $t1, $t1, 0xc
  /* 1160C8 8018F8A8 258C000C */     addiu $t4, $t4, 0xc
  /* 1160CC 8018F8AC AD8B0004 */        sw $t3, 4($t4)
  /* 1160D0 8018F8B0 8D2AFFF8 */        lw $t2, -8($t1)
  /* 1160D4 8018F8B4 AD8A0008 */        sw $t2, 8($t4)
  /* 1160D8 8018F8B8 8D2BFFFC */        lw $t3, -4($t1)
  /* 1160DC 8018F8BC 152DFFF8 */       bne $t1, $t5, .L8018F8A0
  /* 1160E0 8018F8C0 AD8B000C */        sw $t3, 0xc($t4)
  /* 1160E4 8018F8C4 8D2B0000 */        lw $t3, ($t1)
  /* 1160E8 8018F8C8 AD8B0010 */        sw $t3, 0x10($t4)
  /* 1160EC 8018F8CC 8D2A0004 */        lw $t2, 4($t1)
  /* 1160F0 8018F8D0 AD8A0014 */        sw $t2, 0x14($t4)
  /* 1160F4 8018F8D4 8C780000 */        lw $t8, ($v1) # D_ovl7_80190B58 + 0
  /* 1160F8 8018F8D8 8C6E0034 */        lw $t6, 0x34($v1) # D_ovl7_80190B58 + 52
  /* 1160FC 8018F8DC 001878C0 */       sll $t7, $t8, 3
  /* 116100 8018F8E0 01CFC821 */      addu $t9, $t6, $t7
  /* 116104 8018F8E4 87280000 */        lh $t0, ($t9)
  /* 116108 8018F8E8 44882000 */      mtc1 $t0, $f4
  /* 11610C 8018F8EC 00000000 */       nop 
  /* 116110 8018F8F0 468021A0 */   cvt.s.w $f6, $f4
  /* 116114 8018F8F4 03E00008 */        jr $ra
  /* 116118 8018F8F8 E4460058 */      swc1 $f6, 0x58($v0)

  /* 11611C 8018F8FC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 116120 8018F900 AFBF001C */        sw $ra, 0x1c($sp)
  /* 116124 8018F904 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 116128 8018F908 00002825 */        or $a1, $zero, $zero
  /* 11612C 8018F90C 2406000E */     addiu $a2, $zero, 0xe
  /* 116130 8018F910 0C00265A */       jal omMakeGObjCommon
  /* 116134 8018F914 3C078000 */       lui $a3, 0x8000
  /* 116138 8018F918 3C018019 */       lui $at, %hi(D_ovl7_80190BD4)
  /* 11613C 8018F91C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 116140 8018F920 240EFFFF */     addiu $t6, $zero, -1
  /* 116144 8018F924 AC220BD4 */        sw $v0, %lo(D_ovl7_80190BD4)($at)
  /* 116148 8018F928 AFA20024 */        sw $v0, 0x24($sp)
  /* 11614C 8018F92C AFAE0010 */        sw $t6, 0x10($sp)
  /* 116150 8018F930 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 116154 8018F934 00402025 */        or $a0, $v0, $zero
  /* 116158 8018F938 24060017 */     addiu $a2, $zero, 0x17
  /* 11615C 8018F93C 0C00277D */       jal func_80009DF4
  /* 116160 8018F940 3C078000 */       lui $a3, 0x8000
  /* 116164 8018F944 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 116168 8018F948 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 11616C 8018F94C 8C4F0000 */        lw $t7, ($v0) # D_ovl7_80190B58 + 0
  /* 116170 8018F950 8C590034 */        lw $t9, 0x34($v0) # D_ovl7_80190B58 + 52
  /* 116174 8018F954 8FA40024 */        lw $a0, 0x24($sp)
  /* 116178 8018F958 000FC0C0 */       sll $t8, $t7, 3
  /* 11617C 8018F95C 0C063DF2 */       jal func_ovl7_8018F7C8
  /* 116180 8018F960 03192821 */      addu $a1, $t8, $t9
  /* 116184 8018F964 3C014336 */       lui $at, (0x43360000 >> 16) # 182.0
  /* 116188 8018F968 44812000 */      mtc1 $at, $f4 # 182.0 to cop1
  /* 11618C 8018F96C 00000000 */       nop 
  /* 116190 8018F970 E444005C */      swc1 $f4, 0x5c($v0)
  /* 116194 8018F974 8FBF001C */        lw $ra, 0x1c($sp)
  /* 116198 8018F978 27BD0028 */     addiu $sp, $sp, 0x28
  /* 11619C 8018F97C 03E00008 */        jr $ra
  /* 1161A0 8018F980 00000000 */       nop 

  /* 1161A4 8018F984 3C028019 */       lui $v0, %hi(D_ovl7_80190B58)
  /* 1161A8 8018F988 24420B58 */     addiu $v0, $v0, %lo(D_ovl7_80190B58)
  /* 1161AC 8018F98C 00001825 */        or $v1, $zero, $zero
  /* 1161B0 8018F990 240500E0 */     addiu $a1, $zero, 0xe0
  /* 1161B4 8018F994 24040201 */     addiu $a0, $zero, 0x201
  .L8018F998:
  /* 1161B8 8018F998 8C4E0038 */        lw $t6, 0x38($v0) # D_ovl7_80190B58 + 56
  /* 1161BC 8018F99C 01C37821 */      addu $t7, $t6, $v1
  /* 1161C0 8018F9A0 8DF80004 */        lw $t8, 4($t7)
  /* 1161C4 8018F9A4 A7040014 */        sh $a0, 0x14($t8)
  /* 1161C8 8018F9A8 8C590038 */        lw $t9, 0x38($v0) # D_ovl7_80190B58 + 56
  /* 1161CC 8018F9AC 03234021 */      addu $t0, $t9, $v1
  /* 1161D0 8018F9B0 8D09000C */        lw $t1, 0xc($t0)
  /* 1161D4 8018F9B4 A5240014 */        sh $a0, 0x14($t1)
  /* 1161D8 8018F9B8 8C4A0038 */        lw $t2, 0x38($v0) # D_ovl7_80190B58 + 56
  /* 1161DC 8018F9BC 01435821 */      addu $t3, $t2, $v1
  /* 1161E0 8018F9C0 8D6C0014 */        lw $t4, 0x14($t3)
  /* 1161E4 8018F9C4 A5840014 */        sh $a0, 0x14($t4)
  /* 1161E8 8018F9C8 8C4D0038 */        lw $t5, 0x38($v0) # D_ovl7_80190B58 + 56
  /* 1161EC 8018F9CC 01A37021 */      addu $t6, $t5, $v1
  /* 1161F0 8018F9D0 8DCF001C */        lw $t7, 0x1c($t6)
  /* 1161F4 8018F9D4 24630020 */     addiu $v1, $v1, 0x20
  /* 1161F8 8018F9D8 1465FFEF */       bne $v1, $a1, .L8018F998
  /* 1161FC 8018F9DC A5E40014 */        sh $a0, 0x14($t7)
  /* 116200 8018F9E0 03E00008 */        jr $ra
  /* 116204 8018F9E4 00000000 */       nop 

glabel func_ovl7_8018F9E8
  /* 116208 8018F9E8 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 11620C 8018F9EC 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 116210 8018F9F0 8C6E0000 */        lw $t6, ($v1) # D_ovl7_80190B58 + 0
  /* 116214 8018F9F4 2DC10006 */     sltiu $at, $t6, 6
  /* 116218 8018F9F8 10200014 */      beqz $at, .L8018FA4C
  /* 11621C 8018F9FC 000E7080 */       sll $t6, $t6, 2
  /* 116220 8018FA00 3C018019 */       lui $at, %hi(jtbl_ovl7_8019093C)
  /* 116224 8018FA04 002E0821 */      addu $at, $at, $t6
  /* 116228 8018FA08 8C2E093C */        lw $t6, %lo(jtbl_ovl7_8019093C)($at)
  /* 11622C 8018FA0C 01C00008 */        jr $t6
  /* 116230 8018FA10 00000000 */       nop 
  glabel jtgt_ovl7_8018FA14
  /* 116234 8018FA14 8C620014 */        lw $v0, 0x14($v1) # D_ovl7_80190B58 + 20
  /* 116238 8018FA18 03E00008 */        jr $ra
  /* 11623C 8018FA1C 24420015 */     addiu $v0, $v0, 0x15

  glabel jtgt_ovl7_8018FA20
  /* 116240 8018FA20 03E00008 */        jr $ra
  /* 116244 8018FA24 8C620010 */        lw $v0, 0x10($v1)

  glabel jtgt_ovl7_8018FA28
  /* 116248 8018FA28 8C620018 */        lw $v0, 0x18($v1)
  /* 11624C 8018FA2C 03E00008 */        jr $ra
  /* 116250 8018FA30 24420011 */     addiu $v0, $v0, 0x11

  glabel jtgt_ovl7_8018FA34
  /* 116254 8018FA34 8C62001C */        lw $v0, 0x1c($v1)
  /* 116258 8018FA38 03E00008 */        jr $ra
  /* 11625C 8018FA3C 2442001A */     addiu $v0, $v0, 0x1a

  glabel jtgt_ovl7_8018FA40
  /* 116260 8018FA40 03E00008 */        jr $ra
  /* 116264 8018FA44 2402001F */     addiu $v0, $zero, 0x1f

  glabel jtgt_ovl7_8018FA48
  /* 116268 8018FA48 2402001F */     addiu $v0, $zero, 0x1f
  .L8018FA4C:
  /* 11626C 8018FA4C 03E00008 */        jr $ra
  /* 116270 8018FA50 00000000 */       nop 

glabel func_ovl7_8018FA54
  /* 116274 8018FA54 3C0E8019 */       lui $t6, %hi(D_ovl7_80190BD8)
  /* 116278 8018FA58 8DCE0BD8 */        lw $t6, %lo(D_ovl7_80190BD8)($t6)
  /* 11627C 8018FA5C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 116280 8018FA60 AFBF0014 */        sw $ra, 0x14($sp)
  /* 116284 8018FA64 8DC30074 */        lw $v1, 0x74($t6)
  /* 116288 8018FA68 0C063E7A */       jal func_ovl7_8018F9E8
  /* 11628C 8018FA6C AFA3001C */        sw $v1, 0x1c($sp)
  /* 116290 8018FA70 3C058019 */       lui $a1, %hi(D_ovl7_80190B58)
  /* 116294 8018FA74 2401001F */     addiu $at, $zero, 0x1f
  /* 116298 8018FA78 24A50B58 */     addiu $a1, $a1, %lo(D_ovl7_80190B58)
  /* 11629C 8018FA7C 14410005 */       bne $v0, $at, .L8018FA94
  /* 1162A0 8018FA80 8FA3001C */        lw $v1, 0x1c($sp)
  /* 1162A4 8018FA84 946F0024 */       lhu $t7, 0x24($v1)
  /* 1162A8 8018FA88 35F80004 */       ori $t8, $t7, 4
  /* 1162AC 8018FA8C 10000028 */         b .L8018FB30
  /* 1162B0 8018FA90 A4780024 */        sh $t8, 0x24($v1)
  .L8018FA94:
  /* 1162B4 8018FA94 8CB90038 */        lw $t9, 0x38($a1) # D_ovl7_80190B58 + 56
  /* 1162B8 8018FA98 000220C0 */       sll $a0, $v0, 3
  /* 1162BC 8018FA9C 00606025 */        or $t4, $v1, $zero
  /* 1162C0 8018FAA0 03244021 */      addu $t0, $t9, $a0
  /* 1162C4 8018FAA4 8D090004 */        lw $t1, 4($t0)
  /* 1162C8 8018FAA8 252D003C */     addiu $t5, $t1, 0x3c
  .L8018FAAC:
  /* 1162CC 8018FAAC 8D2B0000 */        lw $t3, ($t1)
  /* 1162D0 8018FAB0 2529000C */     addiu $t1, $t1, 0xc
  /* 1162D4 8018FAB4 258C000C */     addiu $t4, $t4, 0xc
  /* 1162D8 8018FAB8 AD8B0004 */        sw $t3, 4($t4)
  /* 1162DC 8018FABC 8D2AFFF8 */        lw $t2, -8($t1)
  /* 1162E0 8018FAC0 AD8A0008 */        sw $t2, 8($t4)
  /* 1162E4 8018FAC4 8D2BFFFC */        lw $t3, -4($t1)
  /* 1162E8 8018FAC8 152DFFF8 */       bne $t1, $t5, .L8018FAAC
  /* 1162EC 8018FACC AD8B000C */        sw $t3, 0xc($t4)
  /* 1162F0 8018FAD0 8D2B0000 */        lw $t3, ($t1)
  /* 1162F4 8018FAD4 2401000B */     addiu $at, $zero, 0xb
  /* 1162F8 8018FAD8 AD8B0010 */        sw $t3, 0x10($t4)
  /* 1162FC 8018FADC 8D2A0004 */        lw $t2, 4($t1)
  /* 116300 8018FAE0 AD8A0014 */        sw $t2, 0x14($t4)
  /* 116304 8018FAE4 8CAE0038 */        lw $t6, 0x38($a1) # D_ovl7_80190B58 + 56
  /* 116308 8018FAE8 01C47821 */      addu $t7, $t6, $a0
  /* 11630C 8018FAEC 85F80000 */        lh $t8, ($t7)
  /* 116310 8018FAF0 44982000 */      mtc1 $t8, $f4
  /* 116314 8018FAF4 00000000 */       nop 
  /* 116318 8018FAF8 468021A0 */   cvt.s.w $f6, $f4
  /* 11631C 8018FAFC 14410005 */       bne $v0, $at, .L8018FB14
  /* 116320 8018FB00 E4660058 */      swc1 $f6, 0x58($v1)
  /* 116324 8018FB04 3C014332 */       lui $at, (0x43320000 >> 16) # 178.0
  /* 116328 8018FB08 44814000 */      mtc1 $at, $f8 # 178.0 to cop1
  /* 11632C 8018FB0C 10000005 */         b .L8018FB24
  /* 116330 8018FB10 E468005C */      swc1 $f8, 0x5c($v1)
  .L8018FB14:
  /* 116334 8018FB14 3C014336 */       lui $at, (0x43360000 >> 16) # 182.0
  /* 116338 8018FB18 44815000 */      mtc1 $at, $f10 # 182.0 to cop1
  /* 11633C 8018FB1C 00000000 */       nop 
  /* 116340 8018FB20 E46A005C */      swc1 $f10, 0x5c($v1)
  .L8018FB24:
  /* 116344 8018FB24 94790024 */       lhu $t9, 0x24($v1)
  /* 116348 8018FB28 3328FFFB */      andi $t0, $t9, 0xfffb
  /* 11634C 8018FB2C A4680024 */        sh $t0, 0x24($v1)
  .L8018FB30:
  /* 116350 8018FB30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116354 8018FB34 27BD0020 */     addiu $sp, $sp, 0x20
  /* 116358 8018FB38 03E00008 */        jr $ra
  /* 11635C 8018FB3C 00000000 */       nop 

  /* 116360 8018FB40 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 116364 8018FB44 AFBF001C */        sw $ra, 0x1c($sp)
  /* 116368 8018FB48 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 11636C 8018FB4C 00002825 */        or $a1, $zero, $zero
  /* 116370 8018FB50 2406000E */     addiu $a2, $zero, 0xe
  /* 116374 8018FB54 0C00265A */       jal omMakeGObjCommon
  /* 116378 8018FB58 3C078000 */       lui $a3, 0x8000
  /* 11637C 8018FB5C 3C018019 */       lui $at, %hi(D_ovl7_80190BD8)
  /* 116380 8018FB60 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 116384 8018FB64 240EFFFF */     addiu $t6, $zero, -1
  /* 116388 8018FB68 AC220BD8 */        sw $v0, %lo(D_ovl7_80190BD8)($at)
  /* 11638C 8018FB6C AFA20024 */        sw $v0, 0x24($sp)
  /* 116390 8018FB70 AFAE0010 */        sw $t6, 0x10($sp)
  /* 116394 8018FB74 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 116398 8018FB78 00402025 */        or $a0, $v0, $zero
  /* 11639C 8018FB7C 24060017 */     addiu $a2, $zero, 0x17
  /* 1163A0 8018FB80 0C00277D */       jal func_80009DF4
  /* 1163A4 8018FB84 3C078000 */       lui $a3, 0x8000
  /* 1163A8 8018FB88 3C058019 */       lui $a1, %hi(D_ovl7_80190B90)
  /* 1163AC 8018FB8C 8CA50B90 */        lw $a1, %lo(D_ovl7_80190B90)($a1)
  /* 1163B0 8018FB90 0C063DF2 */       jal func_ovl7_8018F7C8
  /* 1163B4 8018FB94 8FA40024 */        lw $a0, 0x24($sp)
  /* 1163B8 8018FB98 0C063E95 */       jal func_ovl7_8018FA54
  /* 1163BC 8018FB9C 00000000 */       nop 
  /* 1163C0 8018FBA0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1163C4 8018FBA4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1163C8 8018FBA8 03E00008 */        jr $ra
  /* 1163CC 8018FBAC 00000000 */       nop 

glabel func_ovl7_8018FBB0
  /* 1163D0 8018FBB0 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 1163D4 8018FBB4 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 1163D8 8018FBB8 8C8F0000 */        lw $t7, ($a0) # D_ovl7_80190B58 + 0
  /* 1163DC 8018FBBC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 1163E0 8018FBC0 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 1163E4 8018FBC4 000FC0C0 */       sll $t8, $t7, 3
  /* 1163E8 8018FBC8 0098C821 */      addu $t9, $a0, $t8
  /* 1163EC 8018FBCC 8F230084 */        lw $v1, 0x84($t9)
  /* 1163F0 8018FBD0 8C8E0054 */        lw $t6, 0x54($a0) # D_ovl7_80190B58 + 84
  /* 1163F4 8018FBD4 C464005C */      lwc1 $f4, 0x5c($v1)
  /* 1163F8 8018FBD8 8DC20074 */        lw $v0, 0x74($t6)
  /* 1163FC 8018FBDC 46062201 */     sub.s $f8, $f4, $f6
  /* 116400 8018FBE0 4600428D */ trunc.w.s $f10, $f8
  /* 116404 8018FBE4 44095000 */      mfc1 $t1, $f10
  /* 116408 8018FBE8 00000000 */       nop 
  /* 11640C 8018FBEC 44898000 */      mtc1 $t1, $f16
  /* 116410 8018FBF0 00000000 */       nop 
  /* 116414 8018FBF4 468084A0 */   cvt.s.w $f18, $f16
  /* 116418 8018FBF8 03E00008 */        jr $ra
  /* 11641C 8018FBFC E452005C */      swc1 $f18, 0x5c($v0)

glabel func_ovl7_8018FC00
  /* 116420 8018FC00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 116424 8018FC04 AFBF001C */        sw $ra, 0x1c($sp)
  /* 116428 8018FC08 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 11642C 8018FC0C 00002825 */        or $a1, $zero, $zero
  /* 116430 8018FC10 2406000E */     addiu $a2, $zero, 0xe
  /* 116434 8018FC14 0C00265A */       jal omMakeGObjCommon
  /* 116438 8018FC18 3C078000 */       lui $a3, 0x8000
  /* 11643C 8018FC1C 3C018019 */       lui $at, %hi(D_ovl7_80190BAC)
  /* 116440 8018FC20 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 116444 8018FC24 240EFFFF */     addiu $t6, $zero, -1
  /* 116448 8018FC28 AC220BAC */        sw $v0, %lo(D_ovl7_80190BAC)($at)
  /* 11644C 8018FC2C AFA20024 */        sw $v0, 0x24($sp)
  /* 116450 8018FC30 AFAE0010 */        sw $t6, 0x10($sp)
  /* 116454 8018FC34 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 116458 8018FC38 00402025 */        or $a0, $v0, $zero
  /* 11645C 8018FC3C 24060017 */     addiu $a2, $zero, 0x17
  /* 116460 8018FC40 0C00277D */       jal func_80009DF4
  /* 116464 8018FC44 3C078000 */       lui $a3, 0x8000
  /* 116468 8018FC48 3C0F8019 */       lui $t7, %hi(D_ovl7_80190B88)
  /* 11646C 8018FC4C 8DEF0B88 */        lw $t7, %lo(D_ovl7_80190B88)($t7)
  /* 116470 8018FC50 8FA40024 */        lw $a0, 0x24($sp)
  /* 116474 8018FC54 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 116478 8018FC58 8DE50078 */        lw $a1, 0x78($t7)
  /* 11647C 8018FC5C 3C01428E */       lui $at, (0x428E0000 >> 16) # 71.0
  /* 116480 8018FC60 44812000 */      mtc1 $at, $f4 # 71.0 to cop1
  /* 116484 8018FC64 0C063EEC */       jal func_ovl7_8018FBB0
  /* 116488 8018FC68 E4440058 */      swc1 $f4, 0x58($v0)
  /* 11648C 8018FC6C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 116490 8018FC70 27BD0028 */     addiu $sp, $sp, 0x28
  /* 116494 8018FC74 03E00008 */        jr $ra
  /* 116498 8018FC78 00000000 */       nop 

glabel func_ovl7_8018FC7C
  /* 11649C 8018FC7C 3C048019 */       lui $a0, %hi(D_ovl7_80190B58)
  /* 1164A0 8018FC80 24840B58 */     addiu $a0, $a0, %lo(D_ovl7_80190B58)
  /* 1164A4 8018FC84 8C8E0068 */        lw $t6, 0x68($a0) # D_ovl7_80190B58 + 104
  /* 1164A8 8018FC88 8C980050 */        lw $t8, 0x50($a0) # D_ovl7_80190B58 + 80
  /* 1164AC 8018FC8C 8DCF0074 */        lw $t7, 0x74($t6)
  /* 1164B0 8018FC90 8F190074 */        lw $t9, 0x74($t8)
  /* 1164B4 8018FC94 8DE20008 */        lw $v0, 8($t7)
  /* 1164B8 8018FC98 AC990084 */        sw $t9, 0x84($a0) # D_ovl7_80190B58 + 132
  /* 1164BC 8018FC9C AC820088 */        sw $v0, 0x88($a0) # D_ovl7_80190B58 + 136
  /* 1164C0 8018FCA0 8F290008 */        lw $t1, 8($t9)
  /* 1164C4 8018FCA4 AC820090 */        sw $v0, 0x90($a0) # D_ovl7_80190B58 + 144
  /* 1164C8 8018FCA8 AC89008C */        sw $t1, 0x8c($a0) # D_ovl7_80190B58 + 140
  /* 1164CC 8018FCAC 8D2B0008 */        lw $t3, 8($t1)
  /* 1164D0 8018FCB0 AC820098 */        sw $v0, 0x98($a0) # D_ovl7_80190B58 + 152
  /* 1164D4 8018FCB4 AC8B0094 */        sw $t3, 0x94($a0) # D_ovl7_80190B58 + 148
  /* 1164D8 8018FCB8 8D6D0008 */        lw $t5, 8($t3)
  /* 1164DC 8018FCBC AC8200A0 */        sw $v0, 0xa0($a0) # D_ovl7_80190B58 + 160
  /* 1164E0 8018FCC0 AC8D009C */        sw $t5, 0x9c($a0) # D_ovl7_80190B58 + 156
  /* 1164E4 8018FCC4 8DA30008 */        lw $v1, 8($t5)
  /* 1164E8 8018FCC8 AC8300A8 */        sw $v1, 0xa8($a0) # D_ovl7_80190B58 + 168
  /* 1164EC 8018FCCC AC8300A4 */        sw $v1, 0xa4($a0) # D_ovl7_80190B58 + 164
  /* 1164F0 8018FCD0 8C630008 */        lw $v1, 8($v1)
  /* 1164F4 8018FCD4 AC8300B0 */        sw $v1, 0xb0($a0) # D_ovl7_80190B58 + 176
  /* 1164F8 8018FCD8 03E00008 */        jr $ra
  /* 1164FC 8018FCDC AC8300AC */        sw $v1, 0xac($a0) # D_ovl7_80190B58 + 172

glabel func_ovl7_8018FCE0
  /* 116500 8018FCE0 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 116504 8018FCE4 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 116508 8018FCE8 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 11650C 8018FCEC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 116510 8018FCF0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 116514 8018FCF4 246E0008 */     addiu $t6, $v1, 8
  /* 116518 8018FCF8 AFA40028 */        sw $a0, 0x28($sp)
  /* 11651C 8018FCFC ACAE0000 */        sw $t6, ($a1) # gpDisplayListHead + 0
  /* 116520 8018FD00 3C0FE700 */       lui $t7, 0xe700
  /* 116524 8018FD04 AC6F0000 */        sw $t7, ($v1)
  /* 116528 8018FD08 AC600004 */        sw $zero, 4($v1)
  /* 11652C 8018FD0C 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 116530 8018FD10 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 116534 8018FD14 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 116538 8018FD18 24780008 */     addiu $t8, $v1, 8
  /* 11653C 8018FD1C ACB80000 */        sw $t8, ($a1) # gpDisplayListHead + 0
  /* 116540 8018FD20 3C0B0030 */       lui $t3, 0x30
  /* 116544 8018FD24 AC6B0004 */        sw $t3, 4($v1)
  /* 116548 8018FD28 AC790000 */        sw $t9, ($v1)
  /* 11654C 8018FD2C 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 116550 8018FD30 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 116554 8018FD34 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 116558 8018FD38 246C0008 */     addiu $t4, $v1, 8
  /* 11655C 8018FD3C ACAC0000 */        sw $t4, ($a1) # gpDisplayListHead + 0
  /* 116560 8018FD40 AC6D0000 */        sw $t5, ($v1)
  /* 116564 8018FD44 AC600004 */        sw $zero, 4($v1)
  /* 116568 8018FD48 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 11656C 8018FD4C 3C0FF700 */       lui $t7, 0xf700
  /* 116570 8018FD50 3C04FF00 */       lui $a0, (0xFF0000FF >> 16) # 4278190335
  /* 116574 8018FD54 246E0008 */     addiu $t6, $v1, 8
  /* 116578 8018FD58 ACAE0000 */        sw $t6, ($a1) # gpDisplayListHead + 0
  /* 11657C 8018FD5C AC6F0000 */        sw $t7, ($v1)
  /* 116580 8018FD60 348400FF */       ori $a0, $a0, (0xFF0000FF & 0xFFFF) # 4278190335
  /* 116584 8018FD64 0C001B5C */       jal rgba32_to_fill_color
  /* 116588 8018FD68 AFA30018 */        sw $v1, 0x18($sp)
  /* 11658C 8018FD6C 8FAA0018 */        lw $t2, 0x18($sp)
  /* 116590 8018FD70 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 116594 8018FD74 3C098019 */       lui $t1, %hi(D_ovl7_80190B58)
  /* 116598 8018FD78 AD420004 */        sw $v0, 4($t2)
  /* 11659C 8018FD7C 25290B58 */     addiu $t1, $t1, %lo(D_ovl7_80190B58)
  /* 1165A0 8018FD80 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 1165A4 8018FD84 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 1165A8 8018FD88 8D3900BC */        lw $t9, 0xbc($t1) # D_ovl7_80190B58 + 188
  /* 1165AC 8018FD8C 8D2E00C0 */        lw $t6, 0xc0($t1) # D_ovl7_80190B58 + 192
  /* 1165B0 8018FD90 24780008 */     addiu $t8, $v1, 8
  /* 1165B4 8018FD94 332B03FF */      andi $t3, $t9, 0x3ff
  /* 1165B8 8018FD98 000B6380 */       sll $t4, $t3, 0xe
  /* 1165BC 8018FD9C ACB80000 */        sw $t8, ($a1) # gpDisplayListHead + 0
  /* 1165C0 8018FDA0 3C01F600 */       lui $at, 0xf600
  /* 1165C4 8018FDA4 31CF03FF */      andi $t7, $t6, 0x3ff
  /* 1165C8 8018FDA8 000FC080 */       sll $t8, $t7, 2
  /* 1165CC 8018FDAC 01816825 */        or $t5, $t4, $at
  /* 1165D0 8018FDB0 01B8C825 */        or $t9, $t5, $t8
  /* 1165D4 8018FDB4 AC790000 */        sw $t9, ($v1)
  /* 1165D8 8018FDB8 8D2F00B8 */        lw $t7, 0xb8($t1) # D_ovl7_80190B58 + 184
  /* 1165DC 8018FDBC 8D2B00B4 */        lw $t3, 0xb4($t1) # D_ovl7_80190B58 + 180
  /* 1165E0 8018FDC0 31ED03FF */      andi $t5, $t7, 0x3ff
  /* 1165E4 8018FDC4 316C03FF */      andi $t4, $t3, 0x3ff
  /* 1165E8 8018FDC8 000C7380 */       sll $t6, $t4, 0xe
  /* 1165EC 8018FDCC 000DC080 */       sll $t8, $t5, 2
  /* 1165F0 8018FDD0 01D8C825 */        or $t9, $t6, $t8
  /* 1165F4 8018FDD4 AC790004 */        sw $t9, 4($v1)
  /* 1165F8 8018FDD8 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 1165FC 8018FDDC 3C0CE700 */       lui $t4, 0xe700
  /* 116600 8018FDE0 3C0DE300 */       lui $t5, (0xE3000A01 >> 16) # 3808430593
  /* 116604 8018FDE4 246B0008 */     addiu $t3, $v1, 8
  /* 116608 8018FDE8 ACAB0000 */        sw $t3, ($a1) # gpDisplayListHead + 0
  /* 11660C 8018FDEC AC600004 */        sw $zero, 4($v1)
  /* 116610 8018FDF0 AC6C0000 */        sw $t4, ($v1)
  /* 116614 8018FDF4 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 116618 8018FDF8 35AD0A01 */       ori $t5, $t5, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 11661C 8018FDFC 3C190055 */       lui $t9, (0x552078 >> 16) # 5578872
  /* 116620 8018FE00 246F0008 */     addiu $t7, $v1, 8
  /* 116624 8018FE04 ACAF0000 */        sw $t7, ($a1) # gpDisplayListHead + 0
  /* 116628 8018FE08 AC600004 */        sw $zero, 4($v1)
  /* 11662C 8018FE0C AC6D0000 */        sw $t5, ($v1)
  /* 116630 8018FE10 8CA30000 */        lw $v1, ($a1) # gpDisplayListHead + 0
  /* 116634 8018FE14 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 116638 8018FE18 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 11663C 8018FE1C 246E0008 */     addiu $t6, $v1, 8
  /* 116640 8018FE20 ACAE0000 */        sw $t6, ($a1) # gpDisplayListHead + 0
  /* 116644 8018FE24 37392078 */       ori $t9, $t9, (0x552078 & 0xFFFF) # 5578872
  /* 116648 8018FE28 AC790004 */        sw $t9, 4($v1)
  /* 11664C 8018FE2C AC780000 */        sw $t8, ($v1)
  /* 116650 8018FE30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116654 8018FE34 27BD0028 */     addiu $sp, $sp, 0x28
  /* 116658 8018FE38 03E00008 */        jr $ra
  /* 11665C 8018FE3C 00000000 */       nop 

glabel func_ovl7_8018FE40
  /* 116660 8018FE40 3C068019 */       lui $a2, %hi(D_ovl7_80190B58)
  /* 116664 8018FE44 24C60B58 */     addiu $a2, $a2, %lo(D_ovl7_80190B58)
  /* 116668 8018FE48 8CC30000 */        lw $v1, ($a2) # D_ovl7_80190B58 + 0
  /* 11666C 8018FE4C 3C014150 */       lui $at, (0x41500000 >> 16) # 13.0
  /* 116670 8018FE50 44813000 */      mtc1 $at, $f6 # 13.0 to cop1
  /* 116674 8018FE54 000370C0 */       sll $t6, $v1, 3
  /* 116678 8018FE58 00CE2021 */      addu $a0, $a2, $t6
  /* 11667C 8018FE5C 8C820084 */        lw $v0, 0x84($a0)
  /* 116680 8018FE60 24180001 */     addiu $t8, $zero, 1
  /* 116684 8018FE64 8C850088 */        lw $a1, 0x88($a0)
  /* 116688 8018FE68 C4440058 */      lwc1 $f4, 0x58($v0)
  /* 11668C 8018FE6C 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 116690 8018FE70 46062201 */     sub.s $f8, $f4, $f6
  /* 116694 8018FE74 444FF800 */      cfc1 $t7, $31
  /* 116698 8018FE78 44D8F800 */      ctc1 $t8, $31
  /* 11669C 8018FE7C 00000000 */       nop 
  /* 1166A0 8018FE80 460042A4 */   cvt.w.s $f10, $f8
  /* 1166A4 8018FE84 4458F800 */      cfc1 $t8, $31
  /* 1166A8 8018FE88 00000000 */       nop 
  /* 1166AC 8018FE8C 33180078 */      andi $t8, $t8, 0x78
  /* 1166B0 8018FE90 53000013 */      beql $t8, $zero, .L8018FEE0
  /* 1166B4 8018FE94 44185000 */      mfc1 $t8, $f10
  /* 1166B8 8018FE98 44815000 */      mtc1 $at, $f10 # 2147483600.0 to cop1
  /* 1166BC 8018FE9C 24180001 */     addiu $t8, $zero, 1
  /* 1166C0 8018FEA0 460A4281 */     sub.s $f10, $f8, $f10
  /* 1166C4 8018FEA4 44D8F800 */      ctc1 $t8, $31
  /* 1166C8 8018FEA8 00000000 */       nop 
  /* 1166CC 8018FEAC 460052A4 */   cvt.w.s $f10, $f10
  /* 1166D0 8018FEB0 4458F800 */      cfc1 $t8, $31
  /* 1166D4 8018FEB4 00000000 */       nop 
  /* 1166D8 8018FEB8 33180078 */      andi $t8, $t8, 0x78
  /* 1166DC 8018FEBC 17000005 */      bnez $t8, .L8018FED4
  /* 1166E0 8018FEC0 00000000 */       nop 
  /* 1166E4 8018FEC4 44185000 */      mfc1 $t8, $f10
  /* 1166E8 8018FEC8 3C018000 */       lui $at, 0x8000
  /* 1166EC 8018FECC 10000007 */         b .L8018FEEC
  /* 1166F0 8018FED0 0301C025 */        or $t8, $t8, $at
  .L8018FED4:
  /* 1166F4 8018FED4 10000005 */         b .L8018FEEC
  /* 1166F8 8018FED8 2418FFFF */     addiu $t8, $zero, -1
  /* 1166FC 8018FEDC 44185000 */      mfc1 $t8, $f10
  .L8018FEE0:
  /* 116700 8018FEE0 00000000 */       nop 
  /* 116704 8018FEE4 0700FFFB */      bltz $t8, .L8018FED4
  /* 116708 8018FEE8 00000000 */       nop 
  .L8018FEEC:
  /* 11670C 8018FEEC 44CFF800 */      ctc1 $t7, $31
  /* 116710 8018FEF0 24010004 */     addiu $at, $zero, 4
  /* 116714 8018FEF4 10610004 */       beq $v1, $at, .L8018FF08
  /* 116718 8018FEF8 ACD800B4 */        sw $t8, 0xb4($a2) # D_ovl7_80190B58 + 180
  /* 11671C 8018FEFC 24010005 */     addiu $at, $zero, 5
  /* 116720 8018FF00 54610004 */      bnel $v1, $at, .L8018FF14
  /* 116724 8018FF04 2403FFFE */     addiu $v1, $zero, -2
  .L8018FF08:
  /* 116728 8018FF08 10000002 */         b .L8018FF14
  /* 11672C 8018FF0C 24030002 */     addiu $v1, $zero, 2
  /* 116730 8018FF10 2403FFFE */     addiu $v1, $zero, -2
  .L8018FF14:
  /* 116734 8018FF14 84B90014 */        lh $t9, 0x14($a1)
  /* 116738 8018FF18 44834000 */      mtc1 $v1, $f8
  /* 11673C 8018FF1C C4B00058 */      lwc1 $f16, 0x58($a1)
  /* 116740 8018FF20 44999000 */      mtc1 $t9, $f18
  /* 116744 8018FF24 468042A0 */   cvt.s.w $f10, $f8
  /* 116748 8018FF28 24090001 */     addiu $t1, $zero, 1
  /* 11674C 8018FF2C 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 116750 8018FF30 46809120 */   cvt.s.w $f4, $f18
  /* 116754 8018FF34 46048180 */     add.s $f6, $f16, $f4
  /* 116758 8018FF38 46065480 */     add.s $f18, $f10, $f6
  /* 11675C 8018FF3C 4448F800 */      cfc1 $t0, $31
  /* 116760 8018FF40 44C9F800 */      ctc1 $t1, $31
  /* 116764 8018FF44 00000000 */       nop 
  /* 116768 8018FF48 46009424 */   cvt.w.s $f16, $f18
  /* 11676C 8018FF4C 4449F800 */      cfc1 $t1, $31
  /* 116770 8018FF50 00000000 */       nop 
  /* 116774 8018FF54 31290078 */      andi $t1, $t1, 0x78
  /* 116778 8018FF58 51200013 */      beql $t1, $zero, .L8018FFA8
  /* 11677C 8018FF5C 44098000 */      mfc1 $t1, $f16
  /* 116780 8018FF60 44818000 */      mtc1 $at, $f16 # 2147483600.0 to cop1
  /* 116784 8018FF64 24090001 */     addiu $t1, $zero, 1
  /* 116788 8018FF68 46109401 */     sub.s $f16, $f18, $f16
  /* 11678C 8018FF6C 44C9F800 */      ctc1 $t1, $31
  /* 116790 8018FF70 00000000 */       nop 
  /* 116794 8018FF74 46008424 */   cvt.w.s $f16, $f16
  /* 116798 8018FF78 4449F800 */      cfc1 $t1, $31
  /* 11679C 8018FF7C 00000000 */       nop 
  /* 1167A0 8018FF80 31290078 */      andi $t1, $t1, 0x78
  /* 1167A4 8018FF84 15200005 */      bnez $t1, .L8018FF9C
  /* 1167A8 8018FF88 00000000 */       nop 
  /* 1167AC 8018FF8C 44098000 */      mfc1 $t1, $f16
  /* 1167B0 8018FF90 3C018000 */       lui $at, 0x8000
  /* 1167B4 8018FF94 10000007 */         b .L8018FFB4
  /* 1167B8 8018FF98 01214825 */        or $t1, $t1, $at
  .L8018FF9C:
  /* 1167BC 8018FF9C 10000005 */         b .L8018FFB4
  /* 1167C0 8018FFA0 2409FFFF */     addiu $t1, $zero, -1
  /* 1167C4 8018FFA4 44098000 */      mfc1 $t1, $f16
  .L8018FFA8:
  /* 1167C8 8018FFA8 00000000 */       nop 
  /* 1167CC 8018FFAC 0520FFFB */      bltz $t1, .L8018FF9C
  /* 1167D0 8018FFB0 00000000 */       nop 
  .L8018FFB4:
  /* 1167D4 8018FFB4 ACC900BC */        sw $t1, 0xbc($a2) # D_ovl7_80190B58 + 188
  /* 1167D8 8018FFB8 844A0016 */        lh $t2, 0x16($v0)
  /* 1167DC 8018FFBC 44C8F800 */      ctc1 $t0, $31
  /* 1167E0 8018FFC0 C444005C */      lwc1 $f4, 0x5c($v0)
  /* 1167E4 8018FFC4 448A4000 */      mtc1 $t2, $f8
  /* 1167E8 8018FFC8 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 1167EC 8018FFCC 44819000 */      mtc1 $at, $f18 # -1.0 to cop1
  /* 1167F0 8018FFD0 468042A0 */   cvt.s.w $f10, $f8
  /* 1167F4 8018FFD4 240C0001 */     addiu $t4, $zero, 1
  /* 1167F8 8018FFD8 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 1167FC 8018FFDC 460A2180 */     add.s $f6, $f4, $f10
  /* 116800 8018FFE0 46123400 */     add.s $f16, $f6, $f18
  /* 116804 8018FFE4 444BF800 */      cfc1 $t3, $31
  /* 116808 8018FFE8 44CCF800 */      ctc1 $t4, $31
  /* 11680C 8018FFEC 00000000 */       nop 
  /* 116810 8018FFF0 46008224 */   cvt.w.s $f8, $f16
  /* 116814 8018FFF4 444CF800 */      cfc1 $t4, $31
  /* 116818 8018FFF8 00000000 */       nop 
  /* 11681C 8018FFFC 318C0078 */      andi $t4, $t4, 0x78
  /* 116820 80190000 51800013 */      beql $t4, $zero, .L80190050
  /* 116824 80190004 440C4000 */      mfc1 $t4, $f8
  /* 116828 80190008 44814000 */      mtc1 $at, $f8 # 2147483600.0 to cop1
  /* 11682C 8019000C 240C0001 */     addiu $t4, $zero, 1
  /* 116830 80190010 46088201 */     sub.s $f8, $f16, $f8
  /* 116834 80190014 44CCF800 */      ctc1 $t4, $31
  /* 116838 80190018 00000000 */       nop 
  /* 11683C 8019001C 46004224 */   cvt.w.s $f8, $f8
  /* 116840 80190020 444CF800 */      cfc1 $t4, $31
  /* 116844 80190024 00000000 */       nop 
  /* 116848 80190028 318C0078 */      andi $t4, $t4, 0x78
  /* 11684C 8019002C 15800005 */      bnez $t4, .L80190044
  /* 116850 80190030 00000000 */       nop 
  /* 116854 80190034 440C4000 */      mfc1 $t4, $f8
  /* 116858 80190038 3C018000 */       lui $at, 0x8000
  /* 11685C 8019003C 10000007 */         b .L8019005C
  /* 116860 80190040 01816025 */        or $t4, $t4, $at
  .L80190044:
  /* 116864 80190044 10000005 */         b .L8019005C
  /* 116868 80190048 240CFFFF */     addiu $t4, $zero, -1
  /* 11686C 8019004C 440C4000 */      mfc1 $t4, $f8
  .L80190050:
  /* 116870 80190050 00000000 */       nop 
  /* 116874 80190054 0580FFFB */      bltz $t4, .L80190044
  /* 116878 80190058 00000000 */       nop 
  .L8019005C:
  /* 11687C 8019005C 44CBF800 */      ctc1 $t3, $31
  /* 116880 80190060 258E0001 */     addiu $t6, $t4, 1
  /* 116884 80190064 ACCC00B8 */        sw $t4, 0xb8($a2) # D_ovl7_80190B58 + 184
  /* 116888 80190068 03E00008 */        jr $ra
  /* 11688C 8019006C ACCE00C0 */        sw $t6, 0xc0($a2) # D_ovl7_80190B58 + 192

glabel func_ovl7_80190070
  /* 116890 80190070 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 116894 80190074 AFBF001C */        sw $ra, 0x1c($sp)
  /* 116898 80190078 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 11689C 8019007C 00002825 */        or $a1, $zero, $zero
  /* 1168A0 80190080 2406000E */     addiu $a2, $zero, 0xe
  /* 1168A4 80190084 0C00265A */       jal omMakeGObjCommon
  /* 1168A8 80190088 3C078000 */       lui $a3, 0x8000
  /* 1168AC 8019008C 3C058019 */       lui $a1, %hi(func_ovl7_8018FCE0)
  /* 1168B0 80190090 240EFFFF */     addiu $t6, $zero, -1
  /* 1168B4 80190094 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1168B8 80190098 24A5FCE0 */     addiu $a1, $a1, %lo(func_ovl7_8018FCE0)
  /* 1168BC 8019009C 00402025 */        or $a0, $v0, $zero
  /* 1168C0 801900A0 24060016 */     addiu $a2, $zero, 0x16
  /* 1168C4 801900A4 0C00277D */       jal func_80009DF4
  /* 1168C8 801900A8 3C078000 */       lui $a3, 0x8000
  /* 1168CC 801900AC 0C063F90 */       jal func_ovl7_8018FE40
  /* 1168D0 801900B0 00000000 */       nop 
  /* 1168D4 801900B4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1168D8 801900B8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1168DC 801900BC 03E00008 */        jr $ra
  /* 1168E0 801900C0 00000000 */       nop 

glabel func_ovl7_801900C4
  /* 1168E4 801900C4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1168E8 801900C8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1168EC 801900CC 0C063AED */       jal func_ovl7_8018EBB4
  /* 1168F0 801900D0 00000000 */       nop 
  /* 1168F4 801900D4 0C063B29 */       jal func_ovl7_8018ECA4
  /* 1168F8 801900D8 00000000 */       nop 
  /* 1168FC 801900DC 0C063B84 */       jal func_ovl7_8018EE10
  /* 116900 801900E0 00000000 */       nop 
  /* 116904 801900E4 0C063B97 */       jal func_ovl7_8018EE5C
  /* 116908 801900E8 00000000 */       nop 
  /* 11690C 801900EC 0C063BDE */       jal func_ovl7_8018EF78
  /* 116910 801900F0 00000000 */       nop 
  /* 116914 801900F4 0C063C3F */       jal func_ovl7_8018F0FC
  /* 116918 801900F8 00000000 */       nop 
  /* 11691C 801900FC 0C063C65 */       jal func_ovl7_8018F194
  /* 116920 80190100 00000000 */       nop 
  /* 116924 80190104 0C063C99 */       jal func_ovl7_8018F264
  /* 116928 80190108 00000000 */       nop 
  /* 11692C 8019010C 0C063CD5 */       jal func_ovl7_8018F354
  /* 116930 80190110 00000000 */       nop 
  /* 116934 80190114 0C063D07 */       jal func_ovl7_8018F41C
  /* 116938 80190118 00000000 */       nop 
  /* 11693C 8019011C 0C063D3B */       jal func_ovl7_8018F4EC
  /* 116940 80190120 00000000 */       nop 
  /* 116944 80190124 0C063D73 */       jal func_ovl7_8018F5CC
  /* 116948 80190128 00000000 */       nop 
  /* 11694C 8019012C 0C063DCC */       jal func_ovl7_8018F730
  /* 116950 80190130 00000000 */       nop 
  /* 116954 80190134 0C063F1F */       jal func_ovl7_8018FC7C
  /* 116958 80190138 00000000 */       nop 
  /* 11695C 8019013C 0C063F00 */       jal func_ovl7_8018FC00
  /* 116960 80190140 00000000 */       nop 
  /* 116964 80190144 0C06401C */       jal func_ovl7_80190070
  /* 116968 80190148 00000000 */       nop 
  /* 11696C 8019014C 0C063430 */       jal func_ovl7_8018D0C0
  /* 116970 80190150 24040001 */     addiu $a0, $zero, 1
  /* 116974 80190154 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116978 80190158 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11697C 8019015C 03E00008 */        jr $ra
  /* 116980 80190160 00000000 */       nop 

glabel func_ovl7_80190164
  /* 116984 80190164 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 116988 80190168 3C028013 */       lui $v0, %hi(gMusicIndexDefault)
  /* 11698C 8019016C 244213A0 */     addiu $v0, $v0, %lo(gMusicIndexDefault)
  /* 116990 80190170 AFBF0014 */        sw $ra, 0x14($sp)
  /* 116994 80190174 2405002A */     addiu $a1, $zero, 0x2a
  /* 116998 80190178 AC450000 */        sw $a1, ($v0) # gMusicIndexDefault + 0
  /* 11699C 8019017C 0C0082AD */       jal func_80020AB4
  /* 1169A0 80190180 00002025 */        or $a0, $zero, $zero
  /* 1169A4 80190184 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1169A8 80190188 3C0F8013 */       lui $t7, %hi(gMusicIndexDefault)
  /* 1169AC 8019018C 8DEF13A0 */        lw $t7, %lo(gMusicIndexDefault)($t7)
  /* 1169B0 80190190 3C018013 */       lui $at, %hi(gMusicIndexCurrent)
  /* 1169B4 80190194 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1169B8 80190198 03E00008 */        jr $ra
  /* 1169BC 8019019C AC2F139C */        sw $t7, %lo(gMusicIndexCurrent)($at)

glabel func_ovl7_801901A0
  /* 1169C0 801901A0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1169C4 801901A4 AFB00018 */        sw $s0, 0x18($sp)
  /* 1169C8 801901A8 3C108004 */       lui $s0, %hi(gOMObjCommonLinks + (0x03 * 4))
  /* 1169CC 801901AC 8E1066FC */        lw $s0, %lo(gOMObjCommonLinks + (0x03 * 4))($s0)
  /* 1169D0 801901B0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1169D4 801901B4 12000006 */      beqz $s0, .L801901D0
  /* 1169D8 801901B8 00000000 */       nop 
  .L801901BC:
  /* 1169DC 801901BC 0C039FDA */       jal func_ovl2_800E7F68
  /* 1169E0 801901C0 02002025 */        or $a0, $s0, $zero
  /* 1169E4 801901C4 8E100004 */        lw $s0, 4($s0)
  /* 1169E8 801901C8 1600FFFC */      bnez $s0, .L801901BC
  /* 1169EC 801901CC 00000000 */       nop 
  .L801901D0:
  /* 1169F0 801901D0 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 1169F4 801901D4 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 1169F8 801901D8 240E0001 */     addiu $t6, $zero, 1
  /* 1169FC 801901DC A1EE0011 */        sb $t6, 0x11($t7)
  /* 116A00 801901E0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 116A04 801901E4 8FB00018 */        lw $s0, 0x18($sp)
  /* 116A08 801901E8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 116A0C 801901EC 03E00008 */        jr $ra
  /* 116A10 801901F0 00000000 */       nop 

glabel func_ovl7_801901F4
  /* 116A14 801901F4 3C038019 */       lui $v1, %hi(D_ovl7_80190B58)
  /* 116A18 801901F8 24630B58 */     addiu $v1, $v1, %lo(D_ovl7_80190B58)
  /* 116A1C 801901FC 8C6F0020 */        lw $t7, 0x20($v1) # D_ovl7_80190B58 + 32
  /* 116A20 80190200 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 116A24 80190204 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 116A28 80190208 000FC0C0 */       sll $t8, $t7, 3
  /* 116A2C 8019020C 030FC023 */      subu $t8, $t8, $t7
  /* 116A30 80190210 0018C080 */       sll $t8, $t8, 2
  /* 116A34 80190214 030FC021 */      addu $t8, $t8, $t7
  /* 116A38 80190218 0018C080 */       sll $t8, $t8, 2
  /* 116A3C 8019021C 01D8C821 */      addu $t9, $t6, $t8
  /* 116A40 80190220 8F280078 */        lw $t0, 0x78($t9)
  /* 116A44 80190224 24010001 */     addiu $at, $zero, 1
  /* 116A48 80190228 8D020084 */        lw $v0, 0x84($t0)
  /* 116A4C 8019022C 8C490020 */        lw $t1, 0x20($v0)
  /* 116A50 80190230 15210009 */       bne $t1, $at, .L80190258
  /* 116A54 80190234 00000000 */       nop 
  /* 116A58 80190238 8C6A0014 */        lw $t2, 0x14($v1) # D_ovl7_80190B58 + 20
  /* 116A5C 8019023C 3C0C8019 */       lui $t4, %hi(D_ovl7_80190808)
  /* 116A60 80190240 240D000A */     addiu $t5, $zero, 0xa
  /* 116A64 80190244 000A5880 */       sll $t3, $t2, 2
  /* 116A68 80190248 018B6021 */      addu $t4, $t4, $t3
  /* 116A6C 8019024C 8D8C0808 */        lw $t4, %lo(D_ovl7_80190808)($t4)
  /* 116A70 80190250 A04D01D1 */        sb $t5, 0x1d1($v0)
  /* 116A74 80190254 A04C01CF */        sb $t4, 0x1cf($v0)
  .L80190258:
  /* 116A78 80190258 03E00008 */        jr $ra
  /* 116A7C 8019025C 00000000 */       nop 

glabel func_ovl7_80190260
  /* 116A80 80190260 27BDFF60 */     addiu $sp, $sp, -0xa0
  /* 116A84 80190264 AFBF003C */        sw $ra, 0x3c($sp)
  /* 116A88 80190268 AFB40038 */        sw $s4, 0x38($sp)
  /* 116A8C 8019026C AFB30034 */        sw $s3, 0x34($sp)
  /* 116A90 80190270 AFB20030 */        sw $s2, 0x30($sp)
  /* 116A94 80190274 AFB1002C */        sw $s1, 0x2c($sp)
  /* 116A98 80190278 0C0636A6 */       jal func_ovl7_8018DA98
  /* 116A9C 8019027C AFB00028 */        sw $s0, 0x28($sp)
  /* 116AA0 80190280 0C0641B4 */       jal func_ovl7_801906D0
  /* 116AA4 80190284 00000000 */       nop 
  /* 116AA8 80190288 0C063743 */       jal func_ovl7_8018DD0C
  /* 116AAC 8019028C 00000000 */       nop 
  /* 116AB0 80190290 240E00FF */     addiu $t6, $zero, 0xff
  /* 116AB4 80190294 AFAE0010 */        sw $t6, 0x10($sp)
  /* 116AB8 80190298 24040009 */     addiu $a0, $zero, 9
  /* 116ABC 8019029C 3C058000 */       lui $a1, 0x8000
  /* 116AC0 801902A0 24060064 */     addiu $a2, $zero, 0x64
  /* 116AC4 801902A4 0C002E7F */       jal func_8000B9FC
  /* 116AC8 801902A8 24070001 */     addiu $a3, $zero, 1
  /* 116ACC 801902AC 0C045624 */       jal func_ovl2_80115890
  /* 116AD0 801902B0 00000000 */       nop 
  /* 116AD4 801902B4 0C03B04C */       jal func_ovl2_800EC130
  /* 116AD8 801902B8 00000000 */       nop 
  /* 116ADC 801902BC 0C03F0A1 */       jal func_ovl2_800FC284
  /* 116AE0 801902C0 00000000 */       nop 
  /* 116AE4 801902C4 2404000A */     addiu $a0, $zero, 0xa
  /* 116AE8 801902C8 2405000A */     addiu $a1, $zero, 0xa
  /* 116AEC 801902CC 24060136 */     addiu $a2, $zero, 0x136
  /* 116AF0 801902D0 0C043966 */       jal func_ovl2_8010E598
  /* 116AF4 801902D4 240700E6 */     addiu $a3, $zero, 0xe6
  /* 116AF8 801902D8 0C0436D5 */       jal func_ovl2_8010DB54
  /* 116AFC 801902DC 00000000 */       nop 
  /* 116B00 801902E0 0C0412F7 */       jal func_ovl2_80104BDC
  /* 116B04 801902E4 00000000 */       nop 
  /* 116B08 801902E8 0C0436C0 */       jal func_ovl2_8010DB00
  /* 116B0C 801902EC 00000000 */       nop 
  /* 116B10 801902F0 0C05B7A8 */       jal itManager_AllocUserData
  /* 116B14 801902F4 00000000 */       nop 
  /* 116B18 801902F8 0C041580 */       jal func_ovl2_80105600
  /* 116B1C 801902FC 00000000 */       nop 
  /* 116B20 80190300 24040002 */     addiu $a0, $zero, 2
  /* 116B24 80190304 0C035C65 */       jal func_ovl2_800D7194
  /* 116B28 80190308 24050004 */     addiu $a1, $zero, 4
  /* 116B2C 8019030C 0C05952C */       jal wpManager_AllocUserData
  /* 116B30 80190310 00000000 */       nop 
  /* 116B34 80190314 0C03F4C0 */       jal efManager_AllocUserData
  /* 116B38 80190318 00000000 */       nop 
  /* 116B3C 8019031C 0C04577A */       jal func_ovl2_80115DE8
  /* 116B40 80190320 240400FF */     addiu $a0, $zero, 0xff
  /* 116B44 80190324 0C0455B9 */       jal func_ovl2_801156E4
  /* 116B48 80190328 00000000 */       nop 
  /* 116B4C 8019032C 0C0594F8 */       jal func_ovl3_801653E0
  /* 116B50 80190330 00000000 */       nop 
  /* 116B54 80190334 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 116B58 80190338 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  /* 116B5C 8019033C 00008025 */        or $s0, $zero, $zero
  /* 116B60 80190340 00008825 */        or $s1, $zero, $zero
  /* 116B64 80190344 27B4005C */     addiu $s4, $sp, 0x5c
  .L80190348:
  /* 116B68 80190348 3C0F8011 */       lui $t7, %hi(D_ovl2_80116DD0)
  /* 116B6C 8019034C 25EF6DD0 */     addiu $t7, $t7, %lo(D_ovl2_80116DD0)
  /* 116B70 80190350 25E9003C */     addiu $t1, $t7, 0x3c
  /* 116B74 80190354 02804025 */        or $t0, $s4, $zero
  .L80190358:
  /* 116B78 80190358 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 116B7C 8019035C 25EF000C */     addiu $t7, $t7, 0xc
  /* 116B80 80190360 2508000C */     addiu $t0, $t0, 0xc
  /* 116B84 80190364 AD19FFF4 */        sw $t9, -0xc($t0)
  /* 116B88 80190368 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl2_80116DD0 + -8
  /* 116B8C 8019036C AD18FFF8 */        sw $t8, -8($t0)
  /* 116B90 80190370 8DF9FFFC */        lw $t9, -4($t7) # D_ovl2_80116DD0 + -4
  /* 116B94 80190374 15E9FFF8 */       bne $t7, $t1, .L80190358
  /* 116B98 80190378 AD19FFFC */        sw $t9, -4($t0)
  /* 116B9C 8019037C 8DF90000 */        lw $t9, ($t7) # D_ovl2_80116DD0 + 0
  /* 116BA0 80190380 00106080 */       sll $t4, $s0, 2
  /* 116BA4 80190384 01906021 */      addu $t4, $t4, $s0
  /* 116BA8 80190388 AD190000 */        sw $t9, ($t0)
  /* 116BAC 8019038C 8E6A0000 */        lw $t2, ($s3) # gpBattleState + 0
  /* 116BB0 80190390 3C0D8004 */       lui $t5, %hi(gContInput)
  /* 116BB4 80190394 24010002 */     addiu $at, $zero, 2
  /* 116BB8 80190398 01511021 */      addu $v0, $t2, $s1
  /* 116BBC 8019039C 904B0022 */       lbu $t3, 0x22($v0)
  /* 116BC0 801903A0 25AD5228 */     addiu $t5, $t5, %lo(gContInput)
  /* 116BC4 801903A4 000C6040 */       sll $t4, $t4, 1
  /* 116BC8 801903A8 1161003D */       beq $t3, $at, .L801904A0
  /* 116BCC 801903AC 018D9021 */      addu $s2, $t4, $t5
  /* 116BD0 801903B0 0C035E1B */       jal func_ovl2_800D786C
  /* 116BD4 801903B4 90440023 */       lbu $a0, 0x23($v0)
  /* 116BD8 801903B8 8E6E0000 */        lw $t6, ($s3) # gpBattleState + 0
  /* 116BDC 801903BC 02002025 */        or $a0, $s0, $zero
  /* 116BE0 801903C0 27A50060 */     addiu $a1, $sp, 0x60
  /* 116BE4 801903C4 01D14821 */      addu $t1, $t6, $s1
  /* 116BE8 801903C8 912F0023 */       lbu $t7, 0x23($t1)
  /* 116BEC 801903CC 0C03EBD9 */       jal func_ovl2_800FAF64
  /* 116BF0 801903D0 AFAF005C */        sw $t7, 0x5c($sp)
  /* 116BF4 801903D4 C7A40060 */      lwc1 $f4, 0x60($sp)
  /* 116BF8 801903D8 44803000 */      mtc1 $zero, $f6
  /* 116BFC 801903DC 24180001 */     addiu $t8, $zero, 1
  /* 116C00 801903E0 2408FFFF */     addiu $t0, $zero, -1
  /* 116C04 801903E4 4604303E */    c.le.s $f6, $f4
  /* 116C08 801903E8 240E0002 */     addiu $t6, $zero, 2
  /* 116C0C 801903EC 240D0001 */     addiu $t5, $zero, 1
  /* 116C10 801903F0 45020004 */     bc1fl .L80190404
  /* 116C14 801903F4 AFB8006C */        sw $t8, 0x6c($sp)
  /* 116C18 801903F8 10000002 */         b .L80190404
  /* 116C1C 801903FC AFA8006C */        sw $t0, 0x6c($sp)
  /* 116C20 80190400 AFB8006C */        sw $t8, 0x6c($sp)
  .L80190404:
  /* 116C24 80190404 8E630000 */        lw $v1, ($s3) # gpBattleState + 0
  /* 116C28 80190408 00711021 */      addu $v0, $v1, $s1
  /* 116C2C 8019040C 90590024 */       lbu $t9, 0x24($v0)
  /* 116C30 80190410 A3B00071 */        sb $s0, 0x71($sp)
  /* 116C34 80190414 A3B90070 */        sb $t9, 0x70($sp)
  /* 116C38 80190418 906B0005 */       lbu $t3, 5($v1)
  /* 116C3C 8019041C 906A0004 */       lbu $t2, 4($v1)
  /* 116C40 80190420 014B6021 */      addu $t4, $t2, $t3
  /* 116C44 80190424 29810003 */      slti $at, $t4, 3
  /* 116C48 80190428 50200004 */      beql $at, $zero, .L8019043C
  /* 116C4C 8019042C A3AE0072 */        sb $t6, 0x72($sp)
  /* 116C50 80190430 10000002 */         b .L8019043C
  /* 116C54 80190434 A3AD0072 */        sb $t5, 0x72($sp)
  /* 116C58 80190438 A3AE0072 */        sb $t6, 0x72($sp)
  .L8019043C:
  /* 116C5C 8019043C 90490026 */       lbu $t1, 0x26($v0)
  /* 116C60 80190440 A3A90073 */        sb $t1, 0x73($sp)
  /* 116C64 80190444 904F0027 */       lbu $t7, 0x27($v0)
  /* 116C68 80190448 A3AF0074 */        sb $t7, 0x74($sp)
  /* 116C6C 8019044C 90480021 */       lbu $t0, 0x21($v0)
  /* 116C70 80190450 A3A80075 */        sb $t0, 0x75($sp)
  /* 116C74 80190454 90580020 */       lbu $t8, 0x20($v0)
  /* 116C78 80190458 A3B80076 */        sb $t8, 0x76($sp)
  /* 116C7C 8019045C 90790007 */       lbu $t9, 7($v1)
  /* 116C80 80190460 AFA00080 */        sw $zero, 0x80($sp)
  /* 116C84 80190464 A3B90077 */        sb $t9, 0x77($sp)
  /* 116C88 80190468 904A0022 */       lbu $t2, 0x22($v0)
  /* 116C8C 8019046C AFB20088 */        sw $s2, 0x88($sp)
  /* 116C90 80190470 AFAA0084 */        sw $t2, 0x84($sp)
  /* 116C94 80190474 0C035E2D */       jal func_ovl2_800D78B4
  /* 116C98 80190478 90440023 */       lbu $a0, 0x23($v0)
  /* 116C9C 8019047C 93AC007B */       lbu $t4, 0x7b($sp)
  /* 116CA0 80190480 AFA20094 */        sw $v0, 0x94($sp)
  /* 116CA4 80190484 02802025 */        or $a0, $s4, $zero
  /* 116CA8 80190488 358D0080 */       ori $t5, $t4, 0x80
  /* 116CAC 8019048C 0C035FCF */       jal ftManager_CreateFighter
  /* 116CB0 80190490 A3AD007B */        sb $t5, 0x7b($sp)
  /* 116CB4 80190494 02002025 */        or $a0, $s0, $zero
  /* 116CB8 80190498 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 116CBC 8019049C 00402825 */        or $a1, $v0, $zero
  .L801904A0:
  /* 116CC0 801904A0 26100001 */     addiu $s0, $s0, 1
  /* 116CC4 801904A4 24010004 */     addiu $at, $zero, 4
  /* 116CC8 801904A8 1601FFA7 */       bne $s0, $at, .L80190348
  /* 116CCC 801904AC 26310074 */     addiu $s1, $s1, 0x74
  /* 116CD0 801904B0 0C06407D */       jal func_ovl7_801901F4
  /* 116CD4 801904B4 00000000 */       nop 
  /* 116CD8 801904B8 0C035E0B */       jal func_ovl2_800D782C
  /* 116CDC 801904BC 00000000 */       nop 
  /* 116CE0 801904C0 0C064068 */       jal func_ovl7_801901A0
  /* 116CE4 801904C4 00000000 */       nop 
  /* 116CE8 801904C8 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 116CEC 801904CC 00000000 */       nop 
  /* 116CF0 801904D0 0C044639 */       jal func_ovl2_801118E4
  /* 116CF4 801904D4 00000000 */       nop 
  /* 116CF8 801904D8 0C043869 */       jal func_ovl2_8010E1A4
  /* 116CFC 801904DC 00000000 */       nop 
  /* 116D00 801904E0 0C063798 */       jal func_ovl7_8018DE60
  /* 116D04 801904E4 00000000 */       nop 
  /* 116D08 801904E8 0C043771 */       jal func_ovl2_8010DDC4
  /* 116D0C 801904EC 00000000 */       nop 
  /* 116D10 801904F0 0C0438DD */       jal func_ovl2_8010E374
  /* 116D14 801904F4 00000000 */       nop 
  /* 116D18 801904F8 0C043926 */       jal func_ovl2_8010E498
  /* 116D1C 801904FC 00000000 */       nop 
  /* 116D20 80190500 0C0446F9 */       jal func_ovl2_80111BE4
  /* 116D24 80190504 00000000 */       nop 
  /* 116D28 80190508 0C043CE8 */       jal func_ovl2_8010F3A0
  /* 116D2C 8019050C 00000000 */       nop 
  /* 116D30 80190510 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 116D34 80190514 00000000 */       nop 
  /* 116D38 80190518 0C0439A4 */       jal func_ovl2_8010E690
  /* 116D3C 8019051C 00000000 */       nop 
  /* 116D40 80190520 0C044145 */       jal func_ovl2_80110514
  /* 116D44 80190524 00000000 */       nop 
  /* 116D48 80190528 0C063AD9 */       jal func_ovl7_8018EB64
  /* 116D4C 8019052C 00000000 */       nop 
  /* 116D50 80190530 0C064031 */       jal func_ovl7_801900C4
  /* 116D54 80190534 00000000 */       nop 
  /* 116D58 80190538 0C064059 */       jal func_ovl7_80190164
  /* 116D5C 8019053C 00000000 */       nop 
  /* 116D60 80190540 0C0099A8 */       jal func_800266A0
  /* 116D64 80190544 00000000 */       nop 
  /* 116D68 80190548 0C009A70 */       jal func_800269C0
  /* 116D6C 8019054C 24040272 */     addiu $a0, $zero, 0x272
  /* 116D70 80190550 3C0E8019 */       lui $t6, %hi(D_ovl7_8019086C)
  /* 116D74 80190554 25CE086C */     addiu $t6, $t6, %lo(D_ovl7_8019086C)
  /* 116D78 80190558 8DCF0000 */        lw $t7, ($t6) # D_ovl7_8019086C + 0
  /* 116D7C 8019055C 27A70054 */     addiu $a3, $sp, 0x54
  /* 116D80 80190560 2408000C */     addiu $t0, $zero, 0xc
  /* 116D84 80190564 ACEF0000 */        sw $t7, ($a3)
  /* 116D88 80190568 24180001 */     addiu $t8, $zero, 1
  /* 116D8C 8019056C AFB80014 */        sw $t8, 0x14($sp)
  /* 116D90 80190570 AFA00018 */        sw $zero, 0x18($sp)
  /* 116D94 80190574 AFA80010 */        sw $t0, 0x10($sp)
  /* 116D98 80190578 240403FD */     addiu $a0, $zero, 0x3fd
  /* 116D9C 8019057C 2405000D */     addiu $a1, $zero, 0xd
  /* 116DA0 80190580 0C035018 */       jal func_ovl0_800D4060
  /* 116DA4 80190584 2406000A */     addiu $a2, $zero, 0xa
  /* 116DA8 80190588 8FBF003C */        lw $ra, 0x3c($sp)
  /* 116DAC 8019058C 8FB00028 */        lw $s0, 0x28($sp)
  /* 116DB0 80190590 8FB1002C */        lw $s1, 0x2c($sp)
  /* 116DB4 80190594 8FB20030 */        lw $s2, 0x30($sp)
  /* 116DB8 80190598 8FB30034 */        lw $s3, 0x34($sp)
  /* 116DBC 8019059C 8FB40038 */        lw $s4, 0x38($sp)
  /* 116DC0 801905A0 03E00008 */        jr $ra
  /* 116DC4 801905A4 27BD00A0 */     addiu $sp, $sp, 0xa0

glabel func_ovl7_801905A8
  /* 116DC8 801905A8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 116DCC 801905AC AFBF0014 */        sw $ra, 0x14($sp)
  /* 116DD0 801905B0 8C830000 */        lw $v1, ($a0)
  /* 116DD4 801905B4 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 116DD8 801905B8 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 116DDC 801905BC 246E0008 */     addiu $t6, $v1, 8
  /* 116DE0 801905C0 AC8E0000 */        sw $t6, ($a0)
  /* 116DE4 801905C4 3C180002 */       lui $t8, 2
  /* 116DE8 801905C8 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 116DEC 801905CC 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 116DF0 801905D0 AC780004 */        sw $t8, 4($v1)
  /* 116DF4 801905D4 AC6F0000 */        sw $t7, ($v1)
  /* 116DF8 801905D8 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 116DFC 801905DC 0C03F2DC */       jal func_ovl2_800FCB70
  /* 116E00 801905E0 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 116E04 801905E4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116E08 801905E8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 116E0C 801905EC 03E00008 */        jr $ra
  /* 116E10 801905F0 00000000 */       nop 

glabel training_mode_battle_entry
  /* 116E14 801905F4 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 116E18 801905F8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 116E1C 801905FC 3C048019 */       lui $a0, %hi(D_ovl7_80190870)
  /* 116E20 80190600 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 116E24 80190604 24840870 */     addiu $a0, $a0, %lo(D_ovl7_80190870)
  /* 116E28 80190608 AFBF001C */        sw $ra, 0x1c($sp)
  /* 116E2C 8019060C 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 116E30 80190610 AFB10018 */        sw $s1, 0x18($sp)
  /* 116E34 80190614 AFB00014 */        sw $s0, 0x14($sp)
  /* 116E38 80190618 0C001C09 */       jal func_80007024
  /* 116E3C 8019061C AC8F000C */        sw $t7, 0xc($a0) # D_ovl7_80190870 + 12
  /* 116E40 80190620 3C108019 */       lui $s0, %hi(D_ovl7_8019088C)
  /* 116E44 80190624 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 116E48 80190628 3C198019 */       lui $t9, %hi(D_NF_80190FA0)
  /* 116E4C 8019062C 2610088C */     addiu $s0, $s0, %lo(D_ovl7_8019088C)
  /* 116E50 80190630 27390FA0 */     addiu $t9, $t9, %lo(D_NF_80190FA0)
  /* 116E54 80190634 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 116E58 80190638 3C098019 */       lui $t1, %hi(func_ovl7_80190260)
  /* 116E5C 8019063C 03194023 */      subu $t0, $t8, $t9
  /* 116E60 80190640 25290260 */     addiu $t1, $t1, %lo(func_ovl7_80190260)
  /* 116E64 80190644 3C118019 */       lui $s1, %hi(D_ovl7_80190B58)
  /* 116E68 80190648 AE080010 */        sw $t0, 0x10($s0) # D_ovl7_8019088C + 16
  /* 116E6C 8019064C AE090088 */        sw $t1, 0x88($s0) # D_ovl7_8019088C + 136
  /* 116E70 80190650 26310B58 */     addiu $s1, $s1, %lo(D_ovl7_80190B58)
  .L80190654:
  /* 116E74 80190654 0C0289A6 */       jal func_800A2698
  /* 116E78 80190658 02002025 */        or $a0, $s0, $zero
  /* 116E7C 8019065C 0C0455FB */       jal func_ovl2_801157EC
  /* 116E80 80190660 00000000 */       nop 
  /* 116E84 80190664 922A00D2 */       lbu $t2, 0xd2($s1) # D_ovl7_80190B58 + 210
  /* 116E88 80190668 1540FFFA */      bnez $t2, .L80190654
  /* 116E8C 8019066C 00000000 */       nop 
  /* 116E90 80190670 0C00829D */       jal func_80020A74
  /* 116E94 80190674 00000000 */       nop 
  /* 116E98 80190678 0C008356 */       jal func_80020D58
  /* 116E9C 8019067C 00002025 */        or $a0, $zero, $zero
  /* 116EA0 80190680 50400006 */      beql $v0, $zero, .L8019069C
  /* 116EA4 80190684 00002025 */        or $a0, $zero, $zero
  .L80190688:
  /* 116EA8 80190688 0C008356 */       jal func_80020D58
  /* 116EAC 8019068C 00002025 */        or $a0, $zero, $zero
  /* 116EB0 80190690 1440FFFD */      bnez $v0, .L80190688
  /* 116EB4 80190694 00000000 */       nop 
  /* 116EB8 80190698 00002025 */        or $a0, $zero, $zero
  .L8019069C:
  /* 116EBC 8019069C 0C0082CE */       jal func_80020B38
  /* 116EC0 801906A0 24057800 */     addiu $a1, $zero, 0x7800
  /* 116EC4 801906A4 3C02800A */       lui $v0, %hi(gSceneData)
  /* 116EC8 801906A8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 116ECC 801906AC 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 116ED0 801906B0 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 116ED4 801906B4 240C0012 */     addiu $t4, $zero, 0x12
  /* 116ED8 801906B8 8FB00014 */        lw $s0, 0x14($sp)
  /* 116EDC 801906BC 8FB10018 */        lw $s1, 0x18($sp)
  /* 116EE0 801906C0 A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 116EE4 801906C4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 116EE8 801906C8 03E00008 */        jr $ra
  /* 116EEC 801906CC A04B0001 */        sb $t3, 1($v0) # gSceneData + 1

glabel func_ovl7_801906D0
  /* 116EF0 801906D0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 116EF4 801906D4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 116EF8 801906D8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 116EFC 801906DC 3C188019 */       lui $t8, %hi(D_ovl7_80190C40)
  /* 116F00 801906E0 3C088019 */       lui $t0, %hi(D_ovl7_80190F60)
  /* 116F04 801906E4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 116F08 801906E8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 116F0C 801906EC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 116F10 801906F0 27180C40 */     addiu $t8, $t8, %lo(D_ovl7_80190C40)
  /* 116F14 801906F4 24190064 */     addiu $t9, $zero, 0x64
  /* 116F18 801906F8 25080F60 */     addiu $t0, $t0, %lo(D_ovl7_80190F60)
  /* 116F1C 801906FC 24090007 */     addiu $t1, $zero, 7
  /* 116F20 80190700 AFAE0020 */        sw $t6, 0x20($sp)
  /* 116F24 80190704 AFAF0024 */        sw $t7, 0x24($sp)
  /* 116F28 80190708 AFA00028 */        sw $zero, 0x28($sp)
  /* 116F2C 8019070C AFA0002C */        sw $zero, 0x2c($sp)
  /* 116F30 80190710 AFB80030 */        sw $t8, 0x30($sp)
  /* 116F34 80190714 AFB90034 */        sw $t9, 0x34($sp)
  /* 116F38 80190718 AFA80038 */        sw $t0, 0x38($sp)
  /* 116F3C 8019071C AFA9003C */        sw $t1, 0x3c($sp)
  /* 116F40 80190720 0C0337DE */       jal rldm_initialize
  /* 116F44 80190724 27A40020 */     addiu $a0, $sp, 0x20
  /* 116F48 80190728 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 116F4C 8019072C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 116F50 80190730 0C0337BB */       jal rldm_bytes_need_to_load
  /* 116F54 80190734 24050008 */     addiu $a1, $zero, 8
  /* 116F58 80190738 00402025 */        or $a0, $v0, $zero
  /* 116F5C 8019073C 0C001260 */       jal hal_alloc
  /* 116F60 80190740 24050010 */     addiu $a1, $zero, 0x10
  /* 116F64 80190744 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 116F68 80190748 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 116F6C 8019074C 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 116F70 80190750 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 116F74 80190754 24050008 */     addiu $a1, $zero, 8
  /* 116F78 80190758 0C033781 */       jal rldm_load_files_into
  /* 116F7C 8019075C 00403825 */        or $a3, $v0, $zero
  /* 116F80 80190760 8FBF0014 */        lw $ra, 0x14($sp)
  /* 116F84 80190764 27BD0040 */     addiu $sp, $sp, 0x40
  /* 116F88 80190768 03E00008 */        jr $ra
  /* 116F8C 8019076C 00000000 */       nop 
#
#  /* 116F90 80190770 00000000 */       nop 
#  /* 116F94 80190774 00000000 */       nop 
#  /* 116F98 80190778 00000004 */      sllv $zero, $zero, $zero
#  /* 116F9C 8019077C 00000005 */       lsa $zero, $zero, $zero, 1
#  /* 116FA0 80190780 00000006 */      srlv $zero, $zero, $zero
#  /* 116FA4 80190784 00000007 */      srav $zero, $zero, $zero
#  /* 116FA8 80190788 00000008 */        jr $zero
#  /* 116FAC 8019078C 00000009 */        jr $zero
#  /* 116FB0 80190790 0000000A */      movz $zero, $zero, $zero
#  /* 116FB4 80190794 0000000B */      movn $zero, $zero, $zero
#  /* 116FB8 80190798 0000000C */   syscall 
#  /* 116FBC 8019079C 0000000D */     break 
