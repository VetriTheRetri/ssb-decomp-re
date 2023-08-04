.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x80192800

glabel func_ovl65_8018D0C0
  /* 10B920 8018D0C0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 10B924 8018D0C4 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 10B928 8018D0C8 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 10B92C 8018D0CC 3C188019 */       lui $t8, %hi(D_ovl65_80193068)
  /* 10B930 8018D0D0 3C088019 */       lui $t0, %hi(D_ovl65_80193388)
  /* 10B934 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B938 8018D0D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 10B93C 8018D0DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 10B940 8018D0E0 27183068 */     addiu $t8, $t8, %lo(D_ovl65_80193068)
  /* 10B944 8018D0E4 24190064 */     addiu $t9, $zero, 0x64
  /* 10B948 8018D0E8 25083388 */     addiu $t0, $t0, %lo(D_ovl65_80193388)
  /* 10B94C 8018D0EC 24090007 */     addiu $t1, $zero, 7
  /* 10B950 8018D0F0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 10B954 8018D0F4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 10B958 8018D0F8 AFA00028 */        sw $zero, 0x28($sp)
  /* 10B95C 8018D0FC AFA0002C */        sw $zero, 0x2c($sp)
  /* 10B960 8018D100 AFB80030 */        sw $t8, 0x30($sp)
  /* 10B964 8018D104 AFB90034 */        sw $t9, 0x34($sp)
  /* 10B968 8018D108 AFA80038 */        sw $t0, 0x38($sp)
  /* 10B96C 8018D10C AFA9003C */        sw $t1, 0x3c($sp)
  /* 10B970 8018D110 0C0337DE */       jal rldm_initialize
  /* 10B974 8018D114 27A40020 */     addiu $a0, $sp, 0x20
  /* 10B978 8018D118 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B97C 8018D11C 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B980 8018D120 0C0337BB */       jal rldm_bytes_need_to_load
  /* 10B984 8018D124 24050008 */     addiu $a1, $zero, 8
  /* 10B988 8018D128 00402025 */        or $a0, $v0, $zero
  /* 10B98C 8018D12C 0C001260 */       jal hal_alloc
  /* 10B990 8018D130 24050010 */     addiu $a1, $zero, 0x10
  /* 10B994 8018D134 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 10B998 8018D138 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 10B99C 8018D13C 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 10B9A0 8018D140 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 10B9A4 8018D144 24050008 */     addiu $a1, $zero, 8
  /* 10B9A8 8018D148 0C033781 */       jal rldm_load_files_into
  /* 10B9AC 8018D14C 00403825 */        or $a3, $v0, $zero
  /* 10B9B0 8018D150 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10B9B4 8018D154 27BD0040 */     addiu $sp, $sp, 0x40
  /* 10B9B8 8018D158 03E00008 */        jr $ra
  /* 10B9BC 8018D15C 00000000 */       nop 

glabel func_ovl65_8018D160
  /* 10B9C0 8018D160 3C02800A */       lui $v0, %hi((gSceneData + 0x17))
  /* 10B9C4 8018D164 90424AE7 */       lbu $v0, %lo((gSceneData + 0x17))($v0)
  /* 10B9C8 8018D168 240E0001 */     addiu $t6, $zero, 1
  /* 10B9CC 8018D16C 3C018019 */       lui $at, %hi(D_ovl65_801933C4)
  /* 10B9D0 8018D170 AC2E33C4 */        sw $t6, %lo(D_ovl65_801933C4)($at)
  /* 10B9D4 8018D174 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10B9D8 8018D178 2401000A */     addiu $at, $zero, 0xa
  /* 10B9DC 8018D17C 10410004 */       beq $v0, $at, .L8018D190
  /* 10B9E0 8018D180 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10B9E4 8018D184 2401000C */     addiu $at, $zero, 0xc
  /* 10B9E8 8018D188 54410004 */      bnel $v0, $at, .L8018D19C
  /* 10B9EC 8018D18C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D190:
  /* 10B9F0 8018D190 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 10B9F4 8018D194 00000000 */       nop 
  /* 10B9F8 8018D198 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D19C:
  /* 10B9FC 8018D19C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10BA00 8018D1A0 03E00008 */        jr $ra
  /* 10BA04 8018D1A4 00000000 */       nop 

glabel func_ovl65_8018D1A8
  /* 10BA08 8018D1A8 3C18800A */       lui $t8, %hi((gSceneData + 0x13))
  /* 10BA0C 8018D1AC 93184AE3 */       lbu $t8, %lo((gSceneData + 0x13))($t8)
  /* 10BA10 8018D1B0 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 10BA14 8018D1B4 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 10BA18 8018D1B8 0018C8C0 */       sll $t9, $t8, 3
  /* 10BA1C 8018D1BC 0338C823 */      subu $t9, $t9, $t8
  /* 10BA20 8018D1C0 0019C880 */       sll $t9, $t9, 2
  /* 10BA24 8018D1C4 0338C821 */      addu $t9, $t9, $t8
  /* 10BA28 8018D1C8 240E0001 */     addiu $t6, $zero, 1
  /* 10BA2C 8018D1CC 3C018019 */       lui $at, %hi(D_ovl65_801933C0)
  /* 10BA30 8018D1D0 0019C880 */       sll $t9, $t9, 2
  /* 10BA34 8018D1D4 AC2E33C0 */        sw $t6, %lo(D_ovl65_801933C0)($at)
  /* 10BA38 8018D1D8 01F94021 */      addu $t0, $t7, $t9
  /* 10BA3C 8018D1DC 8D020078 */        lw $v0, 0x78($t0)
  /* 10BA40 8018D1E0 3C018019 */       lui $at, %hi(D_ovl65_801933C8)
  /* 10BA44 8018D1E4 8C430084 */        lw $v1, 0x84($v0)
  /* 10BA48 8018D1E8 8C690024 */        lw $t1, 0x24($v1)
  /* 10BA4C 8018D1EC AC2933C8 */        sw $t1, %lo(D_ovl65_801933C8)($at)
  /* 10BA50 8018D1F0 8C6A05B0 */        lw $t2, 0x5b0($v1)
  /* 10BA54 8018D1F4 3C018019 */       lui $at, %hi(D_ovl65_801933CC)
  /* 10BA58 8018D1F8 03E00008 */        jr $ra
  /* 10BA5C 8018D1FC AC2A33CC */        sw $t2, %lo(D_ovl65_801933CC)($at)

glabel func_ovl65_8018D200
  /* 10BA60 8018D200 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10BA64 8018D204 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10BA68 8018D208 0C045217 */       jal func_ovl2_8011485C
  /* 10BA6C 8018D20C 00000000 */       nop 
  /* 10BA70 8018D210 3C0E8019 */       lui $t6, %hi(D_ovl65_801933C4)
  /* 10BA74 8018D214 8DCE33C4 */        lw $t6, %lo(D_ovl65_801933C4)($t6)
  /* 10BA78 8018D218 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 10BA7C 8018D21C 15C00008 */      bnez $t6, .L8018D240
  /* 10BA80 8018D220 00000000 */       nop 
  /* 10BA84 8018D224 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 10BA88 8018D228 24010001 */     addiu $at, $zero, 1
  /* 10BA8C 8018D22C 91F80011 */       lbu $t8, 0x11($t7)
  /* 10BA90 8018D230 17010003 */       bne $t8, $at, .L8018D240
  /* 10BA94 8018D234 00000000 */       nop 
  /* 10BA98 8018D238 0C063458 */       jal func_ovl65_8018D160
  /* 10BA9C 8018D23C 00000000 */       nop 
  .L8018D240:
  /* 10BAA0 8018D240 3C198019 */       lui $t9, %hi(D_ovl65_801933C0)
  /* 10BAA4 8018D244 8F3933C0 */        lw $t9, %lo(D_ovl65_801933C0)($t9)
  /* 10BAA8 8018D248 3C08800A */       lui $t0, %hi(gpBattleState)
  /* 10BAAC 8018D24C 57200009 */      bnel $t9, $zero, .L8018D274
  /* 10BAB0 8018D250 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10BAB4 8018D254 8D0850E8 */        lw $t0, %lo(gpBattleState)($t0)
  /* 10BAB8 8018D258 24010007 */     addiu $at, $zero, 7
  /* 10BABC 8018D25C 91090011 */       lbu $t1, 0x11($t0)
  /* 10BAC0 8018D260 55210004 */      bnel $t1, $at, .L8018D274
  /* 10BAC4 8018D264 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10BAC8 8018D268 0C06346A */       jal func_ovl65_8018D1A8
  /* 10BACC 8018D26C 00000000 */       nop 
  /* 10BAD0 8018D270 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D274:
  /* 10BAD4 8018D274 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10BAD8 8018D278 03E00008 */        jr $ra
  /* 10BADC 8018D27C 00000000 */       nop 

glabel func_ovl65_8018D280
  /* 10BAE0 8018D280 24010003 */     addiu $at, $zero, 3
  /* 10BAE4 8018D284 14810003 */       bne $a0, $at, .L8018D294
  /* 10BAE8 8018D288 24830001 */     addiu $v1, $a0, 1
  /* 10BAEC 8018D28C 03E00008 */        jr $ra
  /* 10BAF0 8018D290 00001025 */        or $v0, $zero, $zero

  .L8018D294:
  /* 10BAF4 8018D294 03E00008 */        jr $ra
  /* 10BAF8 8018D298 00601025 */        or $v0, $v1, $zero

glabel func_ovl65_8018D29C
  /* 10BAFC 8018D29C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 10BB00 8018D2A0 AFB40024 */        sw $s4, 0x24($sp)
  /* 10BB04 8018D2A4 24140074 */     addiu $s4, $zero, 0x74
  /* 10BB08 8018D2A8 00940019 */     multu $a0, $s4
  /* 10BB0C 8018D2AC AFB30020 */        sw $s3, 0x20($sp)
  /* 10BB10 8018D2B0 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 10BB14 8018D2B4 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  /* 10BB18 8018D2B8 8E6E0000 */        lw $t6, ($s3) # gpBattleState + 0
  /* 10BB1C 8018D2BC AFB70030 */        sw $s7, 0x30($sp)
  /* 10BB20 8018D2C0 AFB6002C */        sw $s6, 0x2c($sp)
  /* 10BB24 8018D2C4 AFB50028 */        sw $s5, 0x28($sp)
  /* 10BB28 8018D2C8 AFB2001C */        sw $s2, 0x1c($sp)
  /* 10BB2C 8018D2CC AFB00014 */        sw $s0, 0x14($sp)
  /* 10BB30 8018D2D0 00007812 */      mflo $t7
  /* 10BB34 8018D2D4 AFBF0034 */        sw $ra, 0x34($sp)
  /* 10BB38 8018D2D8 AFB10018 */        sw $s1, 0x18($sp)
  /* 10BB3C 8018D2DC 01CFC021 */      addu $t8, $t6, $t7
  /* 10BB40 8018D2E0 00809025 */        or $s2, $a0, $zero
  /* 10BB44 8018D2E4 93110023 */       lbu $s1, 0x23($t8)
  /* 10BB48 8018D2E8 00008025 */        or $s0, $zero, $zero
  /* 10BB4C 8018D2EC 24150004 */     addiu $s5, $zero, 4
  /* 10BB50 8018D2F0 24160002 */     addiu $s6, $zero, 2
  /* 10BB54 8018D2F4 0000B825 */        or $s7, $zero, $zero
  .L8018D2F8:
  /* 10BB58 8018D2F8 02202025 */        or $a0, $s1, $zero
  /* 10BB5C 8018D2FC 0C03B03B */       jal func_ovl2_800EC0EC
  /* 10BB60 8018D300 02E02825 */        or $a1, $s7, $zero
  /* 10BB64 8018D304 00402025 */        or $a0, $v0, $zero
  .L8018D308:
  /* 10BB68 8018D308 52120012 */      beql $s0, $s2, .L8018D354
  /* 10BB6C 8018D30C 26100001 */     addiu $s0, $s0, 1
  /* 10BB70 8018D310 02140019 */     multu $s0, $s4
  /* 10BB74 8018D314 8E790000 */        lw $t9, ($s3) # gpBattleState + 0
  /* 10BB78 8018D318 00004012 */      mflo $t0
  /* 10BB7C 8018D31C 03281821 */      addu $v1, $t9, $t0
  /* 10BB80 8018D320 90690022 */       lbu $t1, 0x22($v1)
  /* 10BB84 8018D324 52C9000B */      beql $s6, $t1, .L8018D354
  /* 10BB88 8018D328 26100001 */     addiu $s0, $s0, 1
  /* 10BB8C 8018D32C 906A0023 */       lbu $t2, 0x23($v1)
  /* 10BB90 8018D330 562A0008 */      bnel $s1, $t2, .L8018D354
  /* 10BB94 8018D334 26100001 */     addiu $s0, $s0, 1
  /* 10BB98 8018D338 906B0026 */       lbu $t3, 0x26($v1)
  /* 10BB9C 8018D33C 544B0005 */      bnel $v0, $t3, .L8018D354
  /* 10BBA0 8018D340 26100001 */     addiu $s0, $s0, 1
  /* 10BBA4 8018D344 26F70001 */     addiu $s7, $s7, 1
  /* 10BBA8 8018D348 1000FFEB */         b .L8018D2F8
  /* 10BBAC 8018D34C 00008025 */        or $s0, $zero, $zero
  /* 10BBB0 8018D350 26100001 */     addiu $s0, $s0, 1
  .L8018D354:
  /* 10BBB4 8018D354 1615FFEC */       bne $s0, $s5, .L8018D308
  /* 10BBB8 8018D358 00000000 */       nop 
  /* 10BBBC 8018D35C 8FBF0034 */        lw $ra, 0x34($sp)
  /* 10BBC0 8018D360 8FB00014 */        lw $s0, 0x14($sp)
  /* 10BBC4 8018D364 8FB10018 */        lw $s1, 0x18($sp)
  /* 10BBC8 8018D368 8FB2001C */        lw $s2, 0x1c($sp)
  /* 10BBCC 8018D36C 8FB30020 */        lw $s3, 0x20($sp)
  /* 10BBD0 8018D370 8FB40024 */        lw $s4, 0x24($sp)
  /* 10BBD4 8018D374 8FB50028 */        lw $s5, 0x28($sp)
  /* 10BBD8 8018D378 8FB6002C */        lw $s6, 0x2c($sp)
  /* 10BBDC 8018D37C 8FB70030 */        lw $s7, 0x30($sp)
  /* 10BBE0 8018D380 27BD0038 */     addiu $sp, $sp, 0x38
  /* 10BBE4 8018D384 03E00008 */        jr $ra
  /* 10BBE8 8018D388 00801025 */        or $v0, $a0, $zero

  /* 10BBEC 8018D38C 03E00008 */        jr $ra
  /* 10BBF0 8018D390 00000000 */       nop 

glabel func_ovl65_8018D394
  /* 10BBF4 8018D394 AFA40000 */        sw $a0, ($sp)
  /* 10BBF8 8018D398 3082FFFF */      andi $v0, $a0, 0xffff
  /* 10BBFC 8018D39C 2403FFFF */     addiu $v1, $zero, -1
  /* 10BC00 8018D3A0 24A50001 */     addiu $a1, $a1, 1
  /* 10BC04 8018D3A4 24630001 */     addiu $v1, $v1, 1
  .L8018D3A8:
  /* 10BC08 8018D3A8 240E0001 */     addiu $t6, $zero, 1
  /* 10BC0C 8018D3AC 006E7804 */      sllv $t7, $t6, $v1
  /* 10BC10 8018D3B0 004FC024 */       and $t8, $v0, $t7
  /* 10BC14 8018D3B4 17000002 */      bnez $t8, .L8018D3C0
  /* 10BC18 8018D3B8 00000000 */       nop 
  /* 10BC1C 8018D3BC 24A5FFFF */     addiu $a1, $a1, -1
  .L8018D3C0:
  /* 10BC20 8018D3C0 54A0FFF9 */      bnel $a1, $zero, .L8018D3A8
  /* 10BC24 8018D3C4 24630001 */     addiu $v1, $v1, 1
  /* 10BC28 8018D3C8 03E00008 */        jr $ra
  /* 10BC2C 8018D3CC 00601025 */        or $v0, $v1, $zero

  /* 10BC30 8018D3D0 03E00008 */        jr $ra
  /* 10BC34 8018D3D4 00000000 */       nop 

glabel func_ovl65_8018D3D8
  /* 10BC38 8018D3D8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 10BC3C 8018D3DC AFB10018 */        sw $s1, 0x18($sp)
  /* 10BC40 8018D3E0 00808825 */        or $s1, $a0, $zero
  /* 10BC44 8018D3E4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 10BC48 8018D3E8 AFB00014 */        sw $s0, 0x14($sp)
  /* 10BC4C 8018D3EC 00A08025 */        or $s0, $a1, $zero
  /* 10BC50 8018D3F0 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 10BC54 8018D3F4 00A02025 */        or $a0, $a1, $zero
  /* 10BC58 8018D3F8 24010001 */     addiu $at, $zero, 1
  /* 10BC5C 8018D3FC 1041000D */       beq $v0, $at, .L8018D434
  /* 10BC60 8018D400 02002025 */        or $a0, $s0, $zero
  /* 10BC64 8018D404 3C118019 */       lui $s1, %hi(D_ovl65_80192E10)
  /* 10BC68 8018D408 26312E10 */     addiu $s1, $s1, %lo(D_ovl65_80192E10)
  .L8018D40C:
  /* 10BC6C 8018D40C 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 10BC70 8018D410 02002025 */        or $a0, $s0, $zero
  /* 10BC74 8018D414 02202025 */        or $a0, $s1, $zero
  /* 10BC78 8018D418 02002825 */        or $a1, $s0, $zero
  /* 10BC7C 8018D41C 0C008D89 */       jal fatal_printf
  /* 10BC80 8018D420 00403025 */        or $a2, $v0, $zero
  /* 10BC84 8018D424 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 10BC88 8018D428 00000000 */       nop 
  /* 10BC8C 8018D42C 1000FFF7 */         b .L8018D40C
  /* 10BC90 8018D430 00000000 */       nop 
  .L8018D434:
  /* 10BC94 8018D434 0C03F205 */       jal func_ovl2_800FC814
  /* 10BC98 8018D438 27A50024 */     addiu $a1, $sp, 0x24
  /* 10BC9C 8018D43C 8FA40024 */        lw $a0, 0x24($sp)
  /* 10BCA0 8018D440 0C03F225 */       jal func_ovl2_800FC894
  /* 10BCA4 8018D444 02202825 */        or $a1, $s1, $zero
  /* 10BCA8 8018D448 8FBF001C */        lw $ra, 0x1c($sp)
  /* 10BCAC 8018D44C 8FB00014 */        lw $s0, 0x14($sp)
  /* 10BCB0 8018D450 8FB10018 */        lw $s1, 0x18($sp)
  /* 10BCB4 8018D454 03E00008 */        jr $ra
  /* 10BCB8 8018D458 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl65_8018D45C
  /* 10BCBC 8018D45C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 10BCC0 8018D460 AFBF001C */        sw $ra, 0x1c($sp)
  /* 10BCC4 8018D464 AFB10018 */        sw $s1, 0x18($sp)
  /* 10BCC8 8018D468 AFA40050 */        sw $a0, 0x50($sp)
  /* 10BCCC 8018D46C 00A08825 */        or $s1, $a1, $zero
  /* 10BCD0 8018D470 AFB00014 */        sw $s0, 0x14($sp)
  /* 10BCD4 8018D474 0C03F1E9 */       jal func_ovl2_800FC7A4
  /* 10BCD8 8018D478 00A02025 */        or $a0, $a1, $zero
  /* 10BCDC 8018D47C 10400004 */      beqz $v0, .L8018D490
  /* 10BCE0 8018D480 00408025 */        or $s0, $v0, $zero
  /* 10BCE4 8018D484 2841000B */      slti $at, $v0, 0xb
  /* 10BCE8 8018D488 1420000A */      bnez $at, .L8018D4B4
  /* 10BCEC 8018D48C 02202025 */        or $a0, $s1, $zero
  .L8018D490:
  /* 10BCF0 8018D490 3C108019 */       lui $s0, %hi(D_ovl65_80192E38)
  /* 10BCF4 8018D494 26102E38 */     addiu $s0, $s0, %lo(D_ovl65_80192E38)
  /* 10BCF8 8018D498 02002025 */        or $a0, $s0, $zero
  .L8018D49C:
  /* 10BCFC 8018D49C 0C008D89 */       jal fatal_printf
  /* 10BD00 8018D4A0 02202825 */        or $a1, $s1, $zero
  /* 10BD04 8018D4A4 0C028C10 */       jal scnmgr_crash_print_gobj_state
  /* 10BD08 8018D4A8 00000000 */       nop 
  /* 10BD0C 8018D4AC 1000FFFB */         b .L8018D49C
  /* 10BD10 8018D4B0 02002025 */        or $a0, $s0, $zero
  .L8018D4B4:
  /* 10BD14 8018D4B4 0C03F205 */       jal func_ovl2_800FC814
  /* 10BD18 8018D4B8 27A50024 */     addiu $a1, $sp, 0x24
  /* 10BD1C 8018D4BC 0C006265 */       jal lbRandom_GetIntRange
  /* 10BD20 8018D4C0 02002025 */        or $a0, $s0, $zero
  /* 10BD24 8018D4C4 00027080 */       sll $t6, $v0, 2
  /* 10BD28 8018D4C8 03AE2021 */      addu $a0, $sp, $t6
  /* 10BD2C 8018D4CC 8C840024 */        lw $a0, 0x24($a0)
  /* 10BD30 8018D4D0 0C03F225 */       jal func_ovl2_800FC894
  /* 10BD34 8018D4D4 8FA50050 */        lw $a1, 0x50($sp)
  /* 10BD38 8018D4D8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 10BD3C 8018D4DC 8FB00014 */        lw $s0, 0x14($sp)
  /* 10BD40 8018D4E0 8FB10018 */        lw $s1, 0x18($sp)
  /* 10BD44 8018D4E4 03E00008 */        jr $ra
  /* 10BD48 8018D4E8 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl65_8018D4EC
  /* 10BD4C 8018D4EC 3C08800A */       lui $t0, %hi(gSaveData)
  /* 10BD50 8018D4F0 250844E0 */     addiu $t0, $t0, %lo(gSaveData)
  /* 10BD54 8018D4F4 910E045A */       lbu $t6, 0x45a($t0) # gSaveData + 1114
  /* 10BD58 8018D4F8 3C188013 */       lui $t8, %hi(D_ovl2_80130D70)
  /* 10BD5C 8018D4FC 8F180D70 */        lw $t8, %lo(D_ovl2_80130D70)($t8)
  /* 10BD60 8018D500 00AE7821 */      addu $t7, $a1, $t6
  /* 10BD64 8018D504 91E20002 */       lbu $v0, 2($t7)
  /* 10BD68 8018D508 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 10BD6C 8018D50C 252950E8 */     addiu $t1, $t1, %lo(gpBattleState)
  /* 10BD70 8018D510 00581023 */      subu $v0, $v0, $t8
  /* 10BD74 8018D514 1C400002 */      bgtz $v0, .L8018D520
  /* 10BD78 8018D518 000618C0 */       sll $v1, $a2, 3
  /* 10BD7C 8018D51C 24020001 */     addiu $v0, $zero, 1
  .L8018D520:
  /* 10BD80 8018D520 00661823 */      subu $v1, $v1, $a2
  /* 10BD84 8018D524 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10BD88 8018D528 00031880 */       sll $v1, $v1, 2
  /* 10BD8C 8018D52C 00661821 */      addu $v1, $v1, $a2
  /* 10BD90 8018D530 00031880 */       sll $v1, $v1, 2
  /* 10BD94 8018D534 03236821 */      addu $t5, $t9, $v1
  /* 10BD98 8018D538 A1A20020 */        sb $v0, 0x20($t5)
  /* 10BD9C 8018D53C 910E045A */       lbu $t6, 0x45a($t0) # gSaveData + 1114
  /* 10BDA0 8018D540 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10BDA4 8018D544 240A0004 */     addiu $t2, $zero, 4
  /* 10BDA8 8018D548 00AE7821 */      addu $t7, $a1, $t6
  /* 10BDAC 8018D54C 91F80007 */       lbu $t8, 7($t7)
  /* 10BDB0 8018D550 03236821 */      addu $t5, $t9, $v1
  /* 10BDB4 8018D554 00877021 */      addu $t6, $a0, $a3
  /* 10BDB8 8018D558 A1B80021 */        sb $t8, 0x21($t5)
  /* 10BDBC 8018D55C 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10BDC0 8018D560 91CF0009 */       lbu $t7, 9($t6)
  /* 10BDC4 8018D564 240D0003 */     addiu $t5, $zero, 3
  /* 10BDC8 8018D568 0323C021 */      addu $t8, $t9, $v1
  /* 10BDCC 8018D56C A30F0023 */        sb $t7, 0x23($t8)
  /* 10BDD0 8018D570 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10BDD4 8018D574 240B0001 */     addiu $t3, $zero, 1
  /* 10BDD8 8018D578 3C018019 */       lui $at, %hi(D_ovl65_80192FF8)
  /* 10BDDC 8018D57C 01C3C821 */      addu $t9, $t6, $v1
  /* 10BDE0 8018D580 A32D0024 */        sb $t5, 0x24($t9)
  /* 10BDE4 8018D584 8D2F0000 */        lw $t7, ($t1) # gpBattleState + 0
  /* 10BDE8 8018D588 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FA8)
  /* 10BDEC 8018D58C 258C2FA8 */     addiu $t4, $t4, %lo(D_ovl65_80192FA8)
  /* 10BDF0 8018D590 01E3C021 */      addu $t8, $t7, $v1
  /* 10BDF4 8018D594 A3000026 */        sb $zero, 0x26($t8)
  /* 10BDF8 8018D598 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10BDFC 8018D59C 01C36821 */      addu $t5, $t6, $v1
  /* 10BE00 8018D5A0 A1A00027 */        sb $zero, 0x27($t5)
  /* 10BE04 8018D5A4 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10BE08 8018D5A8 03237821 */      addu $t7, $t9, $v1
  /* 10BE0C 8018D5AC A1EA0028 */        sb $t2, 0x28($t7)
  /* 10BE10 8018D5B0 8D380000 */        lw $t8, ($t1) # gpBattleState + 0
  /* 10BE14 8018D5B4 03037021 */      addu $t6, $t8, $v1
  /* 10BE18 8018D5B8 A1CA002A */        sb $t2, 0x2a($t6)
  /* 10BE1C 8018D5BC 8D2D0000 */        lw $t5, ($t1) # gpBattleState + 0
  /* 10BE20 8018D5C0 01A3C821 */      addu $t9, $t5, $v1
  /* 10BE24 8018D5C4 A32B0029 */        sb $t3, 0x29($t9)
  /* 10BE28 8018D5C8 8D2F0000 */        lw $t7, ($t1) # gpBattleState + 0
  /* 10BE2C 8018D5CC 01E3C021 */      addu $t8, $t7, $v1
  /* 10BE30 8018D5D0 A300002B */        sb $zero, 0x2b($t8)
  /* 10BE34 8018D5D4 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10BE38 8018D5D8 01C36821 */      addu $t5, $t6, $v1
  /* 10BE3C 8018D5DC A1AB002C */        sb $t3, 0x2c($t5)
  /* 10BE40 8018D5E0 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10BE44 8018D5E4 00067140 */       sll $t6, $a2, 5
  /* 10BE48 8018D5E8 002E0821 */      addu $at, $at, $t6
  /* 10BE4C 8018D5EC 03237821 */      addu $t7, $t9, $v1
  /* 10BE50 8018D5F0 A1EB0022 */        sb $t3, 0x22($t7)
  /* 10BE54 8018D5F4 9098000B */       lbu $t8, 0xb($a0)
  /* 10BE58 8018D5F8 A0382FF8 */        sb $t8, %lo(D_ovl65_80192FF8)($at)
  /* 10BE5C 8018D5FC 918D0000 */       lbu $t5, ($t4) # D_ovl65_80192FA8 + 0
  /* 10BE60 8018D600 25B9FFFF */     addiu $t9, $t5, -1
  /* 10BE64 8018D604 03E00008 */        jr $ra
  /* 10BE68 8018D608 A1990000 */        sb $t9, ($t4) # D_ovl65_80192FA8 + 0

glabel func_ovl65_8018D60C
  /* 10BE6C 8018D60C 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 10BE70 8018D610 AFBE0038 */        sw $fp, 0x38($sp)
  /* 10BE74 8018D614 3C1E800A */       lui $fp, %hi(gSceneData)
  /* 10BE78 8018D618 27DE4AD0 */     addiu $fp, $fp, %lo(gSceneData)
  /* 10BE7C 8018D61C 93C20017 */       lbu $v0, 0x17($fp) # gSceneData + 23
  /* 10BE80 8018D620 AFB60030 */        sw $s6, 0x30($sp)
  /* 10BE84 8018D624 3C0F8019 */       lui $t7, %hi(D_ovl65_801929BC)
  /* 10BE88 8018D628 3C16800A */       lui $s6, %hi(gpBattleState)
  /* 10BE8C 8018D62C AFB70034 */        sw $s7, 0x34($sp)
  /* 10BE90 8018D630 25EF29BC */     addiu $t7, $t7, %lo(D_ovl65_801929BC)
  /* 10BE94 8018D634 00027100 */       sll $t6, $v0, 4
  /* 10BE98 8018D638 26D650E8 */     addiu $s6, $s6, %lo(gpBattleState)
  /* 10BE9C 8018D63C AFBF003C */        sw $ra, 0x3c($sp)
  /* 10BEA0 8018D640 AFB5002C */        sw $s5, 0x2c($sp)
  /* 10BEA4 8018D644 AFB40028 */        sw $s4, 0x28($sp)
  /* 10BEA8 8018D648 AFB30024 */        sw $s3, 0x24($sp)
  /* 10BEAC 8018D64C AFB20020 */        sw $s2, 0x20($sp)
  /* 10BEB0 8018D650 AFB1001C */        sw $s1, 0x1c($sp)
  /* 10BEB4 8018D654 AFB00018 */        sw $s0, 0x18($sp)
  /* 10BEB8 8018D658 01CFB821 */      addu $s7, $t6, $t7
  /* 10BEBC 8018D65C A3C00012 */        sb $zero, 0x12($fp) # gSceneData + 18
  /* 10BEC0 8018D660 0002C080 */       sll $t8, $v0, 2
  /* 10BEC4 8018D664 92EC0001 */       lbu $t4, 1($s7)
  /* 10BEC8 8018D668 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10BECC 8018D66C 0302C023 */      subu $t8, $t8, $v0
  /* 10BED0 8018D670 0018C080 */       sll $t8, $t8, 2
  /* 10BED4 8018D674 3C198019 */       lui $t9, %hi(D_ovl65_80192830)
  /* 10BED8 8018D678 0302C023 */      subu $t8, $t8, $v0
  /* 10BEDC 8018D67C 0018C040 */       sll $t8, $t8, 1
  /* 10BEE0 8018D680 27392830 */     addiu $t9, $t9, %lo(D_ovl65_80192830)
  /* 10BEE4 8018D684 A1AC0001 */        sb $t4, 1($t5)
  /* 10BEE8 8018D688 03195821 */      addu $t3, $t8, $t9
  /* 10BEEC 8018D68C 916E0000 */       lbu $t6, ($t3)
  /* 10BEF0 8018D690 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10BEF4 8018D694 A1EE0009 */        sb $t6, 9($t7)
  /* 10BEF8 8018D698 93D80017 */       lbu $t8, 0x17($fp) # gSceneData + 23
  /* 10BEFC 8018D69C 2719FFF5 */     addiu $t9, $t8, -0xb
  /* 10BF00 8018D6A0 2F210007 */     sltiu $at, $t9, 7
  /* 10BF04 8018D6A4 1020000E */      beqz $at, jtgt_ovl65_8018D6E0
  /* 10BF08 8018D6A8 0019C880 */       sll $t9, $t9, 2
  /* 10BF0C 8018D6AC 3C018019 */       lui $at, %hi(jtbl_ovl65_80192E68)
  /* 10BF10 8018D6B0 00390821 */      addu $at, $at, $t9
  /* 10BF14 8018D6B4 8C392E68 */        lw $t9, %lo(jtbl_ovl65_80192E68)($at)
  /* 10BF18 8018D6B8 03200008 */        jr $t9
  /* 10BF1C 8018D6BC 00000000 */       nop 
  glabel jtgt_ovl65_8018D6C0
  /* 10BF20 8018D6C0 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10BF24 8018D6C4 240C0001 */     addiu $t4, $zero, 1
  /* 10BF28 8018D6C8 10000008 */         b .L8018D6EC
  /* 10BF2C 8018D6CC A1AC0006 */        sb $t4, 6($t5)
  glabel jtgt_ovl65_8018D6D0
  /* 10BF30 8018D6D0 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10BF34 8018D6D4 240E0064 */     addiu $t6, $zero, 0x64
  /* 10BF38 8018D6D8 10000004 */         b .L8018D6EC
  /* 10BF3C 8018D6DC A1EE0006 */        sb $t6, 6($t7)
  glabel jtgt_ovl65_8018D6E0
  /* 10BF40 8018D6E0 93D80016 */       lbu $t8, 0x16($fp) # gSceneData + 22
  /* 10BF44 8018D6E4 8ED90000 */        lw $t9, ($s6) # gpBattleState + 0
  /* 10BF48 8018D6E8 A3380006 */        sb $t8, 6($t9)
  .L8018D6EC:
  /* 10BF4C 8018D6EC 8EEC0004 */        lw $t4, 4($s7)
  /* 10BF50 8018D6F0 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10BF54 8018D6F4 3C048019 */       lui $a0, %hi(D_ovl65_80192FA8)
  /* 10BF58 8018D6F8 3C058019 */       lui $a1, %hi(D_ovl65_80192FA1)
  /* 10BF5C 8018D6FC ADAC000C */        sw $t4, 0xc($t5)
  /* 10BF60 8018D700 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10BF64 8018D704 916E0001 */       lbu $t6, 1($t3)
  /* 10BF68 8018D708 24A52FA1 */     addiu $a1, $a1, %lo(D_ovl65_80192FA1)
  /* 10BF6C 8018D70C 24842FA8 */     addiu $a0, $a0, %lo(D_ovl65_80192FA8)
  /* 10BF70 8018D710 A1EE001C */        sb $t6, 0x1c($t7)
  /* 10BF74 8018D714 92EC0008 */       lbu $t4, 8($s7)
  /* 10BF78 8018D718 3C018019 */       lui $at, %hi(D_ovl65_80192FA0)
  /* 10BF7C 8018D71C 3C028019 */       lui $v0, %hi(D_ovl65_80192FE0)
  /* 10BF80 8018D720 A08C0000 */        sb $t4, ($a0) # D_ovl65_80192FA8 + 0
  /* 10BF84 8018D724 A0AC0000 */        sb $t4, ($a1) # D_ovl65_80192FA1 + 0
  /* 10BF88 8018D728 A02C2FA0 */        sb $t4, %lo(D_ovl65_80192FA0)($at)
  /* 10BF8C 8018D72C 3C018019 */       lui $at, %hi(D_ovl65_80192FA4)
  /* 10BF90 8018D730 AC202FA4 */        sw $zero, %lo(D_ovl65_80192FA4)($at)
  /* 10BF94 8018D734 93C30013 */       lbu $v1, 0x13($fp) # gSceneData + 19
  /* 10BF98 8018D738 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 10BF9C 8018D73C 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 10BFA0 8018D740 24040002 */     addiu $a0, $zero, 2
  /* 10BFA4 8018D744 24422FE0 */     addiu $v0, $v0, %lo(D_ovl65_80192FE0)
  /* 10BFA8 8018D748 00009825 */        or $s3, $zero, $zero
  /* 10BFAC 8018D74C 240A0074 */     addiu $t2, $zero, 0x74
  /* 10BFB0 8018D750 24090008 */     addiu $t1, $zero, 8
  /* 10BFB4 8018D754 00604025 */        or $t0, $v1, $zero
  .L8018D758:
  /* 10BFB8 8018D758 AC400004 */        sw $zero, 4($v0) # D_ovl65_80192FE0 + 4
  /* 10BFBC 8018D75C AC490008 */        sw $t1, 8($v0) # D_ovl65_80192FE0 + 8
  /* 10BFC0 8018D760 AC40000C */        sw $zero, 0xc($v0) # D_ovl65_80192FE0 + 12
  /* 10BFC4 8018D764 AC400010 */        sw $zero, 0x10($v0) # D_ovl65_80192FE0 + 16
  /* 10BFC8 8018D768 AC400014 */        sw $zero, 0x14($v0) # D_ovl65_80192FE0 + 20
  /* 10BFCC 8018D76C A0400018 */        sb $zero, 0x18($v0) # D_ovl65_80192FE0 + 24
  /* 10BFD0 8018D770 12680008 */       beq $s3, $t0, .L8018D794
  /* 10BFD4 8018D774 E440001C */      swc1 $f0, 0x1c($v0) # D_ovl65_80192FE0 + 28
  /* 10BFD8 8018D778 026A0019 */     multu $s3, $t2
  /* 10BFDC 8018D77C 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10BFE0 8018D780 00007012 */      mflo $t6
  /* 10BFE4 8018D784 01AE7821 */      addu $t7, $t5, $t6
  /* 10BFE8 8018D788 A1E40022 */        sb $a0, 0x22($t7)
  /* 10BFEC 8018D78C 93C30013 */       lbu $v1, 0x13($fp) # gSceneData + 19
  /* 10BFF0 8018D790 00604025 */        or $t0, $v1, $zero
  .L8018D794:
  /* 10BFF4 8018D794 26730001 */     addiu $s3, $s3, 1
  /* 10BFF8 8018D798 2A610004 */      slti $at, $s3, 4
  /* 10BFFC 8018D79C 1420FFEE */      bnez $at, .L8018D758
  /* 10C000 8018D7A0 24420020 */     addiu $v0, $v0, 0x20
  /* 10C004 8018D7A4 93C70017 */       lbu $a3, 0x17($fp) # gSceneData + 23
  /* 10C008 8018D7A8 24060074 */     addiu $a2, $zero, 0x74
  /* 10C00C 8018D7AC 2411000D */     addiu $s1, $zero, 0xd
  /* 10C010 8018D7B0 28E1000E */      slti $at, $a3, 0xe
  /* 10C014 8018D7B4 1020000E */      beqz $at, .L8018D7F0
  /* 10C018 8018D7B8 00000000 */       nop 
  /* 10C01C 8018D7BC 24060074 */     addiu $a2, $zero, 0x74
  /* 10C020 8018D7C0 00660019 */     multu $v1, $a2
  /* 10C024 8018D7C4 3C01800A */       lui $at, %hi((D_800A4B18 + 0x29))
  /* 10C028 8018D7C8 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FE0)
  /* 10C02C 8018D7CC 258C2FE0 */     addiu $t4, $t4, %lo(D_ovl65_80192FE0)
  /* 10C030 8018D7D0 0003C940 */       sll $t9, $v1, 5
  /* 10C034 8018D7D4 032C1021 */      addu $v0, $t9, $t4
  /* 10C038 8018D7D8 240D0021 */     addiu $t5, $zero, 0x21
  /* 10C03C 8018D7DC 0000C012 */      mflo $t8
  /* 10C040 8018D7E0 00380821 */      addu $at, $at, $t8
  /* 10C044 8018D7E4 A0204B41 */        sb $zero, %lo((D_800A4B18 + 0x29))($at)
  /* 10C048 8018D7E8 1000000D */         b .L8018D820
  /* 10C04C 8018D7EC AC4D0000 */        sw $t5, ($v0) # D_ovl65_80192FE0 + 0
  .L8018D7F0:
  /* 10C050 8018D7F0 00660019 */     multu $v1, $a2
  /* 10C054 8018D7F4 3C01800A */       lui $at, %hi((D_800A4B18 + 0x29))
  /* 10C058 8018D7F8 3C198019 */       lui $t9, %hi(D_ovl65_80192FE0)
  /* 10C05C 8018D7FC 240E0001 */     addiu $t6, $zero, 1
  /* 10C060 8018D800 27392FE0 */     addiu $t9, $t9, %lo(D_ovl65_80192FE0)
  /* 10C064 8018D804 0003C140 */       sll $t8, $v1, 5
  /* 10C068 8018D808 03191021 */      addu $v0, $t8, $t9
  /* 10C06C 8018D80C 240C002C */     addiu $t4, $zero, 0x2c
  /* 10C070 8018D810 00007812 */      mflo $t7
  /* 10C074 8018D814 002F0821 */      addu $at, $at, $t7
  /* 10C078 8018D818 A02E4B41 */        sb $t6, %lo((D_800A4B18 + 0x29))($at)
  /* 10C07C 8018D81C AC4C0000 */        sw $t4, ($v0) # D_ovl65_80192FE0 + 0
  .L8018D820:
  /* 10C080 8018D820 2401000B */     addiu $at, $zero, 0xb
  /* 10C084 8018D824 10E10006 */       beq $a3, $at, .L8018D840
  /* 10C088 8018D828 00E02825 */        or $a1, $a3, $zero
  /* 10C08C 8018D82C 50B10005 */      beql $a1, $s1, .L8018D844
  /* 10C090 8018D830 240D0001 */     addiu $t5, $zero, 1
  /* 10C094 8018D834 AC400010 */        sw $zero, 0x10($v0) # D_ovl65_80192FE0 + 16
  /* 10C098 8018D838 10000005 */         b .L8018D850
  /* 10C09C 8018D83C AFAB0040 */        sw $t3, 0x40($sp)
  .L8018D840:
  /* 10C0A0 8018D840 240D0001 */     addiu $t5, $zero, 1
  .L8018D844:
  /* 10C0A4 8018D844 2411000D */     addiu $s1, $zero, 0xd
  /* 10C0A8 8018D848 AC4D0010 */        sw $t5, 0x10($v0) # D_ovl65_80192FE0 + 16
  /* 10C0AC 8018D84C AFAB0040 */        sw $t3, 0x40($sp)
  .L8018D850:
  /* 10C0B0 8018D850 2CE10012 */     sltiu $at, $a3, 0x12
  /* 10C0B4 8018D854 102001E6 */      beqz $at, jtgt_ovl65_8018DFF0
  /* 10C0B8 8018D858 0100A025 */        or $s4, $t0, $zero
  /* 10C0BC 8018D85C 00077080 */       sll $t6, $a3, 2
  /* 10C0C0 8018D860 3C018019 */       lui $at, %hi(D_ovl65_80192E84)
  /* 10C0C4 8018D864 002E0821 */      addu $at, $at, $t6
  /* 10C0C8 8018D868 8C2E2E84 */        lw $t6, %lo(D_ovl65_80192E84)($at)
  /* 10C0CC 8018D86C 01C00008 */        jr $t6
  /* 10C0D0 8018D870 00000000 */       nop 
  glabel jtgt_ovl65_8018D874
  /* 10C0D4 8018D874 92EF000C */       lbu $t7, 0xc($s7)
  /* 10C0D8 8018D878 3C02800A */       lui $v0, %hi(gSceneData)
  /* 10C0DC 8018D87C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 10C0E0 8018D880 19E00053 */      blez $t7, .L8018D9D0
  /* 10C0E4 8018D884 00009825 */        or $s3, $zero, $zero
  /* 10C0E8 8018D888 3C088019 */       lui $t0, %hi(D_ovl65_80192FE0)
  /* 10C0EC 8018D88C 3C05800A */       lui $a1, %hi(gSaveData)
  /* 10C0F0 8018D890 24A544E0 */     addiu $a1, $a1, %lo(gSaveData)
  /* 10C0F4 8018D894 25082FE0 */     addiu $t0, $t0, %lo(D_ovl65_80192FE0)
  /* 10C0F8 8018D898 240A0001 */     addiu $t2, $zero, 1
  /* 10C0FC 8018D89C 8FA90040 */        lw $t1, 0x40($sp)
  /* 10C100 8018D8A0 24070005 */     addiu $a3, $zero, 5
  /* 10C104 8018D8A4 904E0018 */       lbu $t6, 0x18($v0) # gSceneData + 24
  .L8018D8A8:
  /* 10C108 8018D8A8 90B8045A */       lbu $t8, 0x45a($a1) # gSaveData + 1114
  /* 10C10C 8018D8AC 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10C110 8018D8B0 01C60019 */     multu $t6, $a2
  /* 10C114 8018D8B4 0138C821 */      addu $t9, $t1, $t8
  /* 10C118 8018D8B8 932C000C */       lbu $t4, 0xc($t9) # D_ovl65_80192FE0 + 12
  /* 10C11C 8018D8BC 24420001 */     addiu $v0, $v0, 1
  /* 10C120 8018D8C0 00007812 */      mflo $t7
  /* 10C124 8018D8C4 01AFC021 */      addu $t8, $t5, $t7
  /* 10C128 8018D8C8 A30C0020 */        sb $t4, 0x20($t8)
  /* 10C12C 8018D8CC 904C0017 */       lbu $t4, 0x17($v0) # gSceneData + 23
  /* 10C130 8018D8D0 90B9045A */       lbu $t9, 0x45a($a1) # gSaveData + 1114
  /* 10C134 8018D8D4 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10C138 8018D8D8 01860019 */     multu $t4, $a2
  /* 10C13C 8018D8DC 01397021 */      addu $t6, $t1, $t9
  /* 10C140 8018D8E0 91CD0011 */       lbu $t5, 0x11($t6)
  /* 10C144 8018D8E4 0000C012 */      mflo $t8
  /* 10C148 8018D8E8 01F8C821 */      addu $t9, $t7, $t8
  /* 10C14C 8018D8EC A32D0021 */        sb $t5, 0x21($t9)
  /* 10C150 8018D8F0 904C0017 */       lbu $t4, 0x17($v0) # gSceneData + 23
  /* 10C154 8018D8F4 8ECE0000 */        lw $t6, ($s6) # gpBattleState + 0
  /* 10C158 8018D8F8 01860019 */     multu $t4, $a2
  /* 10C15C 8018D8FC 00007812 */      mflo $t7
  /* 10C160 8018D900 01CFC021 */      addu $t8, $t6, $t7
  /* 10C164 8018D904 A3000024 */        sb $zero, 0x24($t8)
  /* 10C168 8018D908 904C0017 */       lbu $t4, 0x17($v0) # gSceneData + 23
  /* 10C16C 8018D90C 8ED90000 */        lw $t9, ($s6) # gpBattleState + 0
  /* 10C170 8018D910 93CD0013 */       lbu $t5, 0x13($fp) # gSceneData + 19
  /* 10C174 8018D914 01860019 */     multu $t4, $a2
  /* 10C178 8018D918 00007012 */      mflo $t6
  /* 10C17C 8018D91C 032E7821 */      addu $t7, $t9, $t6
  /* 10C180 8018D920 A1ED0028 */        sb $t5, 0x28($t7)
  /* 10C184 8018D924 904C0017 */       lbu $t4, 0x17($v0) # gSceneData + 23
  /* 10C188 8018D928 8ED80000 */        lw $t8, ($s6) # gpBattleState + 0
  /* 10C18C 8018D92C 01860019 */     multu $t4, $a2
  /* 10C190 8018D930 0000C812 */      mflo $t9
  /* 10C194 8018D934 03197021 */      addu $t6, $t8, $t9
  /* 10C198 8018D938 A1C7002A */        sb $a3, 0x2a($t6)
  /* 10C19C 8018D93C 904F0017 */       lbu $t7, 0x17($v0) # gSceneData + 23
  /* 10C1A0 8018D940 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10C1A4 8018D944 01E60019 */     multu $t7, $a2
  /* 10C1A8 8018D948 00006012 */      mflo $t4
  /* 10C1AC 8018D94C 01ACC021 */      addu $t8, $t5, $t4
  /* 10C1B0 8018D950 A30A0029 */        sb $t2, 0x29($t8)
  /* 10C1B4 8018D954 904E0017 */       lbu $t6, 0x17($v0) # gSceneData + 23
  /* 10C1B8 8018D958 8ED90000 */        lw $t9, ($s6) # gpBattleState + 0
  /* 10C1BC 8018D95C 01C60019 */     multu $t6, $a2
  /* 10C1C0 8018D960 00007812 */      mflo $t7
  /* 10C1C4 8018D964 032F6821 */      addu $t5, $t9, $t7
  /* 10C1C8 8018D968 A1A0002B */        sb $zero, 0x2b($t5)
  /* 10C1CC 8018D96C 90580017 */       lbu $t8, 0x17($v0) # gSceneData + 23
  /* 10C1D0 8018D970 8ECC0000 */        lw $t4, ($s6) # gpBattleState + 0
  /* 10C1D4 8018D974 03060019 */     multu $t8, $a2
  /* 10C1D8 8018D978 00007012 */      mflo $t6
  /* 10C1DC 8018D97C 018EC821 */      addu $t9, $t4, $t6
  /* 10C1E0 8018D980 A320002C */        sb $zero, 0x2c($t9)
  /* 10C1E4 8018D984 904D0017 */       lbu $t5, 0x17($v0) # gSceneData + 23
  /* 10C1E8 8018D988 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10C1EC 8018D98C 26790022 */     addiu $t9, $s3, 0x22
  /* 10C1F0 8018D990 01A60019 */     multu $t5, $a2
  /* 10C1F4 8018D994 26730001 */     addiu $s3, $s3, 1
  /* 10C1F8 8018D998 0000C012 */      mflo $t8
  /* 10C1FC 8018D99C 01F86021 */      addu $t4, $t7, $t8
  /* 10C200 8018D9A0 A18A0022 */        sb $t2, 0x22($t4)
  /* 10C204 8018D9A4 90540017 */       lbu $s4, 0x17($v0) # gSceneData + 23
  /* 10C208 8018D9A8 00147140 */       sll $t6, $s4, 5
  /* 10C20C 8018D9AC 010E2021 */      addu $a0, $t0, $t6
  /* 10C210 8018D9B0 AC990000 */        sw $t9, ($a0) # D_ovl65_80192FA8 + 0
  /* 10C214 8018D9B4 92ED000D */       lbu $t5, 0xd($s7)
  /* 10C218 8018D9B8 A08D0018 */        sb $t5, 0x18($a0) # D_ovl65_80192FA8 + 24
  /* 10C21C 8018D9BC 92EF000C */       lbu $t7, 0xc($s7)
  /* 10C220 8018D9C0 026F082A */       slt $at, $s3, $t7
  /* 10C224 8018D9C4 5420FFB8 */      bnel $at, $zero, .L8018D8A8
  /* 10C228 8018D9C8 904E0018 */       lbu $t6, 0x18($v0) # gSceneData + 24
  /* 10C22C 8018D9CC 00009825 */        or $s3, $zero, $zero
  .L8018D9D0:
  /* 10C230 8018D9D0 92F80008 */       lbu $t8, 8($s7)
  /* 10C234 8018D9D4 5B000187 */     blezl $t8, .L8018DFF4
  /* 10C238 8018D9D8 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  .L8018D9DC:
  /* 10C23C 8018D9DC 0C0634A0 */       jal func_ovl65_8018D280
  /* 10C240 8018D9E0 02802025 */        or $a0, $s4, $zero
  /* 10C244 8018D9E4 0040A025 */        or $s4, $v0, $zero
  /* 10C248 8018D9E8 02E02025 */        or $a0, $s7, $zero
  /* 10C24C 8018D9EC 8FA50040 */        lw $a1, 0x40($sp)
  /* 10C250 8018D9F0 00403025 */        or $a2, $v0, $zero
  /* 10C254 8018D9F4 0C06353B */       jal func_ovl65_8018D4EC
  /* 10C258 8018D9F8 02603825 */        or $a3, $s3, $zero
  /* 10C25C 8018D9FC 0C0634A7 */       jal func_ovl65_8018D29C
  /* 10C260 8018DA00 02802025 */        or $a0, $s4, $zero
  /* 10C264 8018DA04 001480C0 */       sll $s0, $s4, 3
  /* 10C268 8018DA08 02148023 */      subu $s0, $s0, $s4
  /* 10C26C 8018DA0C 8ECC0000 */        lw $t4, ($s6) # gpBattleState + 0
  /* 10C270 8018DA10 00108080 */       sll $s0, $s0, 2
  /* 10C274 8018DA14 02148021 */      addu $s0, $s0, $s4
  /* 10C278 8018DA18 00108080 */       sll $s0, $s0, 2
  /* 10C27C 8018DA1C 01907021 */      addu $t6, $t4, $s0
  /* 10C280 8018DA20 A1C20026 */        sb $v0, 0x26($t6)
  /* 10C284 8018DA24 93C70017 */       lbu $a3, 0x17($fp) # gSceneData + 23
  /* 10C288 8018DA28 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FE0)
  /* 10C28C 8018DA2C 258C2FE0 */     addiu $t4, $t4, %lo(D_ovl65_80192FE0)
  /* 10C290 8018DA30 28E1000E */      slti $at, $a3, 0xe
  /* 10C294 8018DA34 10200008 */      beqz $at, .L8018DA58
  /* 10C298 8018DA38 0014C140 */       sll $t8, $s4, 5
  /* 10C29C 8018DA3C 3C0D8019 */       lui $t5, %hi(D_ovl65_80192FE0)
  /* 10C2A0 8018DA40 25AD2FE0 */     addiu $t5, $t5, %lo(D_ovl65_80192FE0)
  /* 10C2A4 8018DA44 0014C940 */       sll $t9, $s4, 5
  /* 10C2A8 8018DA48 032D1021 */      addu $v0, $t9, $t5
  /* 10C2AC 8018DA4C 266F0025 */     addiu $t7, $s3, 0x25
  /* 10C2B0 8018DA50 10000011 */         b .L8018DA98
  /* 10C2B4 8018DA54 AC4F0000 */        sw $t7, ($v0)
  .L8018DA58:
  /* 10C2B8 8018DA58 8ED90000 */        lw $t9, ($s6) # gpBattleState + 0
  /* 10C2BC 8018DA5C 030C1021 */      addu $v0, $t8, $t4
  /* 10C2C0 8018DA60 266E002D */     addiu $t6, $s3, 0x2d
  /* 10C2C4 8018DA64 AC4E0000 */        sw $t6, ($v0)
  /* 10C2C8 8018DA68 03302021 */      addu $a0, $t9, $s0
  /* 10C2CC 8018DA6C 908D0020 */       lbu $t5, 0x20($a0)
  /* 10C2D0 8018DA70 93CF0043 */       lbu $t7, 0x43($fp) # gSceneData + 67
  /* 10C2D4 8018DA74 24180001 */     addiu $t8, $zero, 1
  /* 10C2D8 8018DA78 01AF1823 */      subu $v1, $t5, $t7
  /* 10C2DC 8018DA7C 5C600005 */     bgtzl $v1, .L8018DA94
  /* 10C2E0 8018DA80 A0830020 */        sb $v1, 0x20($a0)
  /* 10C2E4 8018DA84 A0980020 */        sb $t8, 0x20($a0)
  /* 10C2E8 8018DA88 10000003 */         b .L8018DA98
  /* 10C2EC 8018DA8C 93C70017 */       lbu $a3, 0x17($fp) # gSceneData + 23
  /* 10C2F0 8018DA90 A0830020 */        sb $v1, 0x20($a0)
  .L8018DA94:
  /* 10C2F4 8018DA94 93C70017 */       lbu $a3, 0x17($fp) # gSceneData + 23
  .L8018DA98:
  /* 10C2F8 8018DA98 16270002 */       bne $s1, $a3, .L8018DAA4
  /* 10C2FC 8018DA9C 240C0001 */     addiu $t4, $zero, 1
  /* 10C300 8018DAA0 AC4C0014 */        sw $t4, 0x14($v0)
  .L8018DAA4:
  /* 10C304 8018DAA4 92EE0008 */       lbu $t6, 8($s7)
  /* 10C308 8018DAA8 26730001 */     addiu $s3, $s3, 1
  /* 10C30C 8018DAAC 026E082A */       slt $at, $s3, $t6
  /* 10C310 8018DAB0 1420FFCA */      bnez $at, .L8018D9DC
  /* 10C314 8018DAB4 00000000 */       nop 
  /* 10C318 8018DAB8 1000014E */         b .L8018DFF4
  /* 10C31C 8018DABC 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  glabel jtgt_ovl65_8018DAC0
  /* 10C320 8018DAC0 3C108019 */       lui $s0, %hi(D_ovl65_80192FB0)
  /* 10C324 8018DAC4 3C138019 */       lui $s3, %hi(D_ovl65_80192FB6)
  /* 10C328 8018DAC8 24110006 */     addiu $s1, $zero, 6
  /* 10C32C 8018DACC 00009025 */        or $s2, $zero, $zero
  /* 10C330 8018DAD0 26732FB6 */     addiu $s3, $s3, %lo(D_ovl65_80192FB6)
  /* 10C334 8018DAD4 26102FB0 */     addiu $s0, $s0, %lo(D_ovl65_80192FB0)
  .L8018DAD8:
  /* 10C338 8018DAD8 0C006265 */       jal lbRandom_GetIntRange
  /* 10C33C 8018DADC 02202025 */        or $a0, $s1, $zero
  /* 10C340 8018DAE0 3244FFFF */      andi $a0, $s2, 0xffff
  /* 10C344 8018DAE4 0C0634E5 */       jal func_ovl65_8018D394
  /* 10C348 8018DAE8 00402825 */        or $a1, $v0, $zero
  /* 10C34C 8018DAEC 305900FF */      andi $t9, $v0, 0xff
  /* 10C350 8018DAF0 240D0001 */     addiu $t5, $zero, 1
  /* 10C354 8018DAF4 26100001 */     addiu $s0, $s0, 1
  /* 10C358 8018DAF8 032D7804 */      sllv $t7, $t5, $t9
  /* 10C35C 8018DAFC 0213082B */      sltu $at, $s0, $s3
  /* 10C360 8018DB00 024F9025 */        or $s2, $s2, $t7
  /* 10C364 8018DB04 A202FFFF */        sb $v0, -1($s0) # D_ovl65_80192FB0 + -1
  /* 10C368 8018DB08 3252FFFF */      andi $s2, $s2, 0xffff
  /* 10C36C 8018DB0C 1420FFF2 */      bnez $at, .L8018DAD8
  /* 10C370 8018DB10 2631FFFF */     addiu $s1, $s1, -1
  /* 10C374 8018DB14 92F80008 */       lbu $t8, 8($s7)
  /* 10C378 8018DB18 00001025 */        or $v0, $zero, $zero
  /* 10C37C 8018DB1C 24130006 */     addiu $s3, $zero, 6
  /* 10C380 8018DB20 2B010007 */      slti $at, $t8, 7
  /* 10C384 8018DB24 14200013 */      bnez $at, .L8018DB74
  /* 10C388 8018DB28 3C118019 */       lui $s1, %hi(D_ovl65_80192FA9)
  /* 10C38C 8018DB2C 3C108019 */       lui $s0, %hi(D_ovl65_80192FB6)
  /* 10C390 8018DB30 3C158019 */       lui $s5, %hi(D_ovl65_80192FB0)
  /* 10C394 8018DB34 26B52FB0 */     addiu $s5, $s5, %lo(D_ovl65_80192FB0)
  /* 10C398 8018DB38 26102FB6 */     addiu $s0, $s0, %lo(D_ovl65_80192FB6)
  /* 10C39C 8018DB3C 24030005 */     addiu $v1, $zero, 5
  /* 10C3A0 8018DB40 02A26021 */      addu $t4, $s5, $v0
  .L8018DB44:
  /* 10C3A4 8018DB44 918E0000 */       lbu $t6, ($t4)
  /* 10C3A8 8018DB48 14430003 */       bne $v0, $v1, .L8018DB58
  /* 10C3AC 8018DB4C A20E0000 */        sb $t6, ($s0) # D_ovl65_80192FB6 + 0
  /* 10C3B0 8018DB50 10000002 */         b .L8018DB5C
  /* 10C3B4 8018DB54 00001025 */        or $v0, $zero, $zero
  .L8018DB58:
  /* 10C3B8 8018DB58 24420001 */     addiu $v0, $v0, 1
  .L8018DB5C:
  /* 10C3BC 8018DB5C 92ED0008 */       lbu $t5, 8($s7)
  /* 10C3C0 8018DB60 26730001 */     addiu $s3, $s3, 1
  /* 10C3C4 8018DB64 26100001 */     addiu $s0, $s0, 1
  /* 10C3C8 8018DB68 026D082A */       slt $at, $s3, $t5
  /* 10C3CC 8018DB6C 5420FFF5 */      bnel $at, $zero, .L8018DB44
  /* 10C3D0 8018DB70 02A26021 */      addu $t4, $s5, $v0
  .L8018DB74:
  /* 10C3D4 8018DB74 26312FA9 */     addiu $s1, $s1, %lo(D_ovl65_80192FA9)
  /* 10C3D8 8018DB78 3C158019 */       lui $s5, %hi(D_ovl65_80192FB0)
  /* 10C3DC 8018DB7C 26B52FB0 */     addiu $s5, $s5, %lo(D_ovl65_80192FB0)
  /* 10C3E0 8018DB80 A2200000 */        sb $zero, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C3E4 8018DB84 00009825 */        or $s3, $zero, $zero
  /* 10C3E8 8018DB88 24120003 */     addiu $s2, $zero, 3
  .L8018DB8C:
  /* 10C3EC 8018DB8C 0C0634A0 */       jal func_ovl65_8018D280
  /* 10C3F0 8018DB90 02802025 */        or $a0, $s4, $zero
  /* 10C3F4 8018DB94 0040A025 */        or $s4, $v0, $zero
  /* 10C3F8 8018DB98 02E02025 */        or $a0, $s7, $zero
  /* 10C3FC 8018DB9C 8FA50040 */        lw $a1, 0x40($sp)
  /* 10C400 8018DBA0 00403025 */        or $a2, $v0, $zero
  /* 10C404 8018DBA4 0C06353B */       jal func_ovl65_8018D4EC
  /* 10C408 8018DBA8 00003825 */        or $a3, $zero, $zero
  /* 10C40C 8018DBAC 92390000 */       lbu $t9, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C410 8018DBB0 001480C0 */       sll $s0, $s4, 3
  /* 10C414 8018DBB4 02148023 */      subu $s0, $s0, $s4
  /* 10C418 8018DBB8 8ECC0000 */        lw $t4, ($s6) # gpBattleState + 0
  /* 10C41C 8018DBBC 00108080 */       sll $s0, $s0, 2
  /* 10C420 8018DBC0 02B97821 */      addu $t7, $s5, $t9
  /* 10C424 8018DBC4 91F80000 */       lbu $t8, ($t7)
  /* 10C428 8018DBC8 02148021 */      addu $s0, $s0, $s4
  /* 10C42C 8018DBCC 00108080 */       sll $s0, $s0, 2
  /* 10C430 8018DBD0 01907021 */      addu $t6, $t4, $s0
  /* 10C434 8018DBD4 A1D80026 */        sb $t8, 0x26($t6)
  /* 10C438 8018DBD8 93CD0014 */       lbu $t5, 0x14($fp) # gSceneData + 20
  /* 10C43C 8018DBDC 24010006 */     addiu $at, $zero, 6
  /* 10C440 8018DBE0 55A1000B */      bnel $t5, $at, .L8018DC10
  /* 10C444 8018DBE4 8ECE0000 */        lw $t6, ($s6) # gpBattleState + 0
  /* 10C448 8018DBE8 8ED90000 */        lw $t9, ($s6) # gpBattleState + 0
  /* 10C44C 8018DBEC 93CF0015 */       lbu $t7, 0x15($fp) # gSceneData + 21
  /* 10C450 8018DBF0 24180001 */     addiu $t8, $zero, 1
  /* 10C454 8018DBF4 03302021 */      addu $a0, $t9, $s0
  /* 10C458 8018DBF8 908C0026 */       lbu $t4, 0x26($a0)
  /* 10C45C 8018DBFC 55EC0004 */      bnel $t7, $t4, .L8018DC10
  /* 10C460 8018DC00 8ECE0000 */        lw $t6, ($s6) # gpBattleState + 0
  /* 10C464 8018DC04 10000004 */         b .L8018DC18
  /* 10C468 8018DC08 A0980027 */        sb $t8, 0x27($a0)
  /* 10C46C 8018DC0C 8ECE0000 */        lw $t6, ($s6) # gpBattleState + 0
  .L8018DC10:
  /* 10C470 8018DC10 01D06821 */      addu $t5, $t6, $s0
  /* 10C474 8018DC14 A1A00027 */        sb $zero, 0x27($t5)
  .L8018DC18:
  /* 10C478 8018DC18 3C0F8019 */       lui $t7, %hi(D_ovl65_80192FE0)
  /* 10C47C 8018DC1C 92230000 */       lbu $v1, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C480 8018DC20 25EF2FE0 */     addiu $t7, $t7, %lo(D_ovl65_80192FE0)
  /* 10C484 8018DC24 0014C940 */       sll $t9, $s4, 5
  /* 10C488 8018DC28 032F1021 */      addu $v0, $t9, $t7
  /* 10C48C 8018DC2C 266C0025 */     addiu $t4, $s3, 0x25
  /* 10C490 8018DC30 AC4C0000 */        sw $t4, ($v0)
  /* 10C494 8018DC34 3C018019 */       lui $at, %hi(D_ovl65_80192ECC)
  /* 10C498 8018DC38 AC43000C */        sw $v1, 0xc($v0)
  /* 10C49C 8018DC3C C4242ECC */      lwc1 $f4, %lo(D_ovl65_80192ECC)($at)
  /* 10C4A0 8018DC40 26730001 */     addiu $s3, $s3, 1
  /* 10C4A4 8018DC44 24180001 */     addiu $t8, $zero, 1
  /* 10C4A8 8018DC48 246E0001 */     addiu $t6, $v1, 1
  /* 10C4AC 8018DC4C AC580014 */        sw $t8, 0x14($v0)
  /* 10C4B0 8018DC50 A22E0000 */        sb $t6, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C4B4 8018DC54 1672FFCD */       bne $s3, $s2, .L8018DB8C
  /* 10C4B8 8018DC58 E444001C */      swc1 $f4, 0x1c($v0)
  /* 10C4BC 8018DC5C 100000E5 */         b .L8018DFF4
  /* 10C4C0 8018DC60 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  glabel jtgt_ovl65_8018DC64
  /* 10C4C4 8018DC64 3C108019 */       lui $s0, %hi(D_ovl65_80192FB0)
  /* 10C4C8 8018DC68 3C138019 */       lui $s3, %hi(D_ovl65_80192FBC)
  /* 10C4CC 8018DC6C 241E000B */     addiu $fp, $zero, 0xb
  /* 10C4D0 8018DC70 2411000C */     addiu $s1, $zero, 0xc
  /* 10C4D4 8018DC74 00009025 */        or $s2, $zero, $zero
  /* 10C4D8 8018DC78 26732FBC */     addiu $s3, $s3, %lo(D_ovl65_80192FBC)
  /* 10C4DC 8018DC7C 26102FB0 */     addiu $s0, $s0, %lo(D_ovl65_80192FB0)
  .L8018DC80:
  /* 10C4E0 8018DC80 0C006265 */       jal lbRandom_GetIntRange
  /* 10C4E4 8018DC84 02202025 */        or $a0, $s1, $zero
  /* 10C4E8 8018DC88 3244FFFF */      andi $a0, $s2, 0xffff
  /* 10C4EC 8018DC8C 0C0634E5 */       jal func_ovl65_8018D394
  /* 10C4F0 8018DC90 00402825 */        or $a1, $v0, $zero
  /* 10C4F4 8018DC94 304300FF */      andi $v1, $v0, 0xff
  /* 10C4F8 8018DC98 240D0001 */     addiu $t5, $zero, 1
  /* 10C4FC 8018DC9C 26100001 */     addiu $s0, $s0, 1
  /* 10C500 8018DCA0 006DC804 */      sllv $t9, $t5, $v1
  /* 10C504 8018DCA4 0213082B */      sltu $at, $s0, $s3
  /* 10C508 8018DCA8 A202FFFF */        sb $v0, -1($s0) # D_ovl65_80192FB0 + -1
  /* 10C50C 8018DCAC 02599025 */        or $s2, $s2, $t9
  /* 10C510 8018DCB0 246F000E */     addiu $t7, $v1, 0xe
  /* 10C514 8018DCB4 3252FFFF */      andi $s2, $s2, 0xffff
  /* 10C518 8018DCB8 A20FFFFF */        sb $t7, -1($s0) # D_ovl65_80192FB0 + -1
  /* 10C51C 8018DCBC 1420FFF0 */      bnez $at, .L8018DC80
  /* 10C520 8018DCC0 2631FFFF */     addiu $s1, $s1, -1
  /* 10C524 8018DCC4 92EC0008 */       lbu $t4, 8($s7)
  /* 10C528 8018DCC8 00001025 */        or $v0, $zero, $zero
  /* 10C52C 8018DCCC 2413000C */     addiu $s3, $zero, 0xc
  /* 10C530 8018DCD0 2981000D */      slti $at, $t4, 0xd
  /* 10C534 8018DCD4 14200012 */      bnez $at, .L8018DD20
  /* 10C538 8018DCD8 3C118019 */       lui $s1, %hi(D_ovl65_80192FA9)
  /* 10C53C 8018DCDC 3C108019 */       lui $s0, %hi(D_ovl65_80192FBC)
  /* 10C540 8018DCE0 3C158019 */       lui $s5, %hi(D_ovl65_80192FB0)
  /* 10C544 8018DCE4 26B52FB0 */     addiu $s5, $s5, %lo(D_ovl65_80192FB0)
  /* 10C548 8018DCE8 26102FBC */     addiu $s0, $s0, %lo(D_ovl65_80192FBC)
  /* 10C54C 8018DCEC 02A2C021 */      addu $t8, $s5, $v0
  .L8018DCF0:
  /* 10C550 8018DCF0 930E0000 */       lbu $t6, ($t8)
  /* 10C554 8018DCF4 145E0003 */       bne $v0, $fp, .L8018DD04
  /* 10C558 8018DCF8 A20E0000 */        sb $t6, ($s0) # D_ovl65_80192FBC + 0
  /* 10C55C 8018DCFC 10000002 */         b .L8018DD08
  /* 10C560 8018DD00 00001025 */        or $v0, $zero, $zero
  .L8018DD04:
  /* 10C564 8018DD04 24420001 */     addiu $v0, $v0, 1
  .L8018DD08:
  /* 10C568 8018DD08 92ED0008 */       lbu $t5, 8($s7)
  /* 10C56C 8018DD0C 26730001 */     addiu $s3, $s3, 1
  /* 10C570 8018DD10 26100001 */     addiu $s0, $s0, 1
  /* 10C574 8018DD14 026D082A */       slt $at, $s3, $t5
  /* 10C578 8018DD18 5420FFF5 */      bnel $at, $zero, .L8018DCF0
  /* 10C57C 8018DD1C 02A2C021 */      addu $t8, $s5, $v0
  .L8018DD20:
  /* 10C580 8018DD20 26312FA9 */     addiu $s1, $s1, %lo(D_ovl65_80192FA9)
  /* 10C584 8018DD24 3C158019 */       lui $s5, %hi(D_ovl65_80192FB0)
  /* 10C588 8018DD28 26B52FB0 */     addiu $s5, $s5, %lo(D_ovl65_80192FB0)
  /* 10C58C 8018DD2C A2200000 */        sb $zero, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C590 8018DD30 00009825 */        or $s3, $zero, $zero
  /* 10C594 8018DD34 24120003 */     addiu $s2, $zero, 3
  .L8018DD38:
  /* 10C598 8018DD38 0C0634A0 */       jal func_ovl65_8018D280
  /* 10C59C 8018DD3C 02802025 */        or $a0, $s4, $zero
  /* 10C5A0 8018DD40 0040A025 */        or $s4, $v0, $zero
  /* 10C5A4 8018DD44 02E02025 */        or $a0, $s7, $zero
  /* 10C5A8 8018DD48 8FA50040 */        lw $a1, 0x40($sp)
  /* 10C5AC 8018DD4C 00403025 */        or $a2, $v0, $zero
  /* 10C5B0 8018DD50 0C06353B */       jal func_ovl65_8018D4EC
  /* 10C5B4 8018DD54 00003825 */        or $a3, $zero, $zero
  /* 10C5B8 8018DD58 92390000 */       lbu $t9, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C5BC 8018DD5C 001470C0 */       sll $t6, $s4, 3
  /* 10C5C0 8018DD60 01D47023 */      subu $t6, $t6, $s4
  /* 10C5C4 8018DD64 8ED80000 */        lw $t8, ($s6) # gpBattleState + 0
  /* 10C5C8 8018DD68 000E7080 */       sll $t6, $t6, 2
  /* 10C5CC 8018DD6C 02B97821 */      addu $t7, $s5, $t9
  /* 10C5D0 8018DD70 91EC0000 */       lbu $t4, ($t7)
  /* 10C5D4 8018DD74 01D47021 */      addu $t6, $t6, $s4
  /* 10C5D8 8018DD78 000E7080 */       sll $t6, $t6, 2
  /* 10C5DC 8018DD7C 030E6821 */      addu $t5, $t8, $t6
  /* 10C5E0 8018DD80 3C0F8019 */       lui $t7, %hi(D_ovl65_80192FE0)
  /* 10C5E4 8018DD84 A1AC0023 */        sb $t4, 0x23($t5)
  /* 10C5E8 8018DD88 92230000 */       lbu $v1, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C5EC 8018DD8C 25EF2FE0 */     addiu $t7, $t7, %lo(D_ovl65_80192FE0)
  /* 10C5F0 8018DD90 0014C940 */       sll $t9, $s4, 5
  /* 10C5F4 8018DD94 032F1021 */      addu $v0, $t9, $t7
  /* 10C5F8 8018DD98 26780025 */     addiu $t8, $s3, 0x25
  /* 10C5FC 8018DD9C AC580000 */        sw $t8, ($v0)
  /* 10C600 8018DDA0 3C018019 */       lui $at, %hi(D_ovl65_80192ED0)
  /* 10C604 8018DDA4 AC43000C */        sw $v1, 0xc($v0)
  /* 10C608 8018DDA8 C4262ED0 */      lwc1 $f6, %lo(D_ovl65_80192ED0)($at)
  /* 10C60C 8018DDAC 26730001 */     addiu $s3, $s3, 1
  /* 10C610 8018DDB0 240E0001 */     addiu $t6, $zero, 1
  /* 10C614 8018DDB4 246C0001 */     addiu $t4, $v1, 1
  /* 10C618 8018DDB8 AC4E0014 */        sw $t6, 0x14($v0)
  /* 10C61C 8018DDBC A22C0000 */        sb $t4, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C620 8018DDC0 1672FFDD */       bne $s3, $s2, .L8018DD38
  /* 10C624 8018DDC4 E446001C */      swc1 $f6, 0x1c($v0)
  /* 10C628 8018DDC8 1000008A */         b .L8018DFF4
  /* 10C62C 8018DDCC 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  glabel jtgt_ovl65_8018DDD0
  /* 10C630 8018DDD0 3C118019 */       lui $s1, %hi(D_ovl65_80192FA9)
  /* 10C634 8018DDD4 26312FA9 */     addiu $s1, $s1, %lo(D_ovl65_80192FA9)
  /* 10C638 8018DDD8 3C158019 */       lui $s5, %hi(D_ovl65_80192800)
  /* 10C63C 8018DDDC 3C128019 */       lui $s2, %hi(D_ovl65_80193060)
  /* 10C640 8018DDE0 A2200000 */        sb $zero, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C644 8018DDE4 26523060 */     addiu $s2, $s2, %lo(D_ovl65_80193060)
  /* 10C648 8018DDE8 26B52800 */     addiu $s5, $s5, %lo(D_ovl65_80192800)
  /* 10C64C 8018DDEC 00009825 */        or $s3, $zero, $zero
  .L8018DDF0:
  /* 10C650 8018DDF0 0C0634A0 */       jal func_ovl65_8018D280
  /* 10C654 8018DDF4 02802025 */        or $a0, $s4, $zero
  /* 10C658 8018DDF8 0040A025 */        or $s4, $v0, $zero
  /* 10C65C 8018DDFC 02E02025 */        or $a0, $s7, $zero
  /* 10C660 8018DE00 8FA50040 */        lw $a1, 0x40($sp)
  /* 10C664 8018DE04 00403025 */        or $a2, $v0, $zero
  /* 10C668 8018DE08 0C06353B */       jal func_ovl65_8018D4EC
  /* 10C66C 8018DE0C 00003825 */        or $a3, $zero, $zero
  /* 10C670 8018DE10 93CD0014 */       lbu $t5, 0x14($fp) # gSceneData + 20
  /* 10C674 8018DE14 24010008 */     addiu $at, $zero, 8
  /* 10C678 8018DE18 001480C0 */       sll $s0, $s4, 3
  /* 10C67C 8018DE1C 15A10011 */       bne $t5, $at, .L8018DE64
  /* 10C680 8018DE20 02148023 */      subu $s0, $s0, $s4
  /* 10C684 8018DE24 8ECF0000 */        lw $t7, ($s6) # gpBattleState + 0
  /* 10C688 8018DE28 00108080 */       sll $s0, $s0, 2
  /* 10C68C 8018DE2C 02148021 */      addu $s0, $s0, $s4
  /* 10C690 8018DE30 00108080 */       sll $s0, $s0, 2
  /* 10C694 8018DE34 01F0C021 */      addu $t8, $t7, $s0
  /* 10C698 8018DE38 930E0026 */       lbu $t6, 0x26($t8)
  /* 10C69C 8018DE3C 93D90015 */       lbu $t9, 0x15($fp) # gSceneData + 21
  /* 10C6A0 8018DE40 24040008 */     addiu $a0, $zero, 8
  /* 10C6A4 8018DE44 572E0008 */      bnel $t9, $t6, .L8018DE68
  /* 10C6A8 8018DE48 001478C0 */       sll $t7, $s4, 3
  /* 10C6AC 8018DE4C 0C03B03B */       jal func_ovl2_800EC0EC
  /* 10C6B0 8018DE50 24050001 */     addiu $a1, $zero, 1
  /* 10C6B4 8018DE54 8ECC0000 */        lw $t4, ($s6) # gpBattleState + 0
  /* 10C6B8 8018DE58 00402825 */        or $a1, $v0, $zero
  /* 10C6BC 8018DE5C 10000009 */         b .L8018DE84
  /* 10C6C0 8018DE60 01902021 */      addu $a0, $t4, $s0
  .L8018DE64:
  /* 10C6C4 8018DE64 001478C0 */       sll $t7, $s4, 3
  .L8018DE68:
  /* 10C6C8 8018DE68 01F47823 */      subu $t7, $t7, $s4
  /* 10C6CC 8018DE6C 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  /* 10C6D0 8018DE70 000F7880 */       sll $t7, $t7, 2
  /* 10C6D4 8018DE74 01F47821 */      addu $t7, $t7, $s4
  /* 10C6D8 8018DE78 000F7880 */       sll $t7, $t7, 2
  /* 10C6DC 8018DE7C 00002825 */        or $a1, $zero, $zero
  /* 10C6E0 8018DE80 01AF2021 */      addu $a0, $t5, $t7
  .L8018DE84:
  /* 10C6E4 8018DE84 A0850026 */        sb $a1, 0x26($a0)
  /* 10C6E8 8018DE88 92230000 */       lbu $v1, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C6EC 8018DE8C 3C0E8019 */       lui $t6, %hi(D_ovl65_80192FE0)
  /* 10C6F0 8018DE90 25CE2FE0 */     addiu $t6, $t6, %lo(D_ovl65_80192FE0)
  /* 10C6F4 8018DE94 0014C940 */       sll $t9, $s4, 5
  /* 10C6F8 8018DE98 02A36021 */      addu $t4, $s5, $v1
  /* 10C6FC 8018DE9C 918D0000 */       lbu $t5, ($t4)
  /* 10C700 8018DEA0 032E1021 */      addu $v0, $t9, $t6
  /* 10C704 8018DEA4 30B800FF */      andi $t8, $a1, 0xff
  /* 10C708 8018DEA8 266F0025 */     addiu $t7, $s3, 0x25
  /* 10C70C 8018DEAC AE580000 */        sw $t8, ($s2) # D_ovl65_80193060 + 0
  /* 10C710 8018DEB0 AC4F0000 */        sw $t7, ($v0)
  /* 10C714 8018DEB4 3C018019 */       lui $at, %hi(D_ovl65_80192ED4)
  /* 10C718 8018DEB8 AC43000C */        sw $v1, 0xc($v0)
  /* 10C71C 8018DEBC AC4D0008 */        sw $t5, 8($v0)
  /* 10C720 8018DEC0 C4282ED4 */      lwc1 $f8, %lo(D_ovl65_80192ED4)($at)
  /* 10C724 8018DEC4 24010002 */     addiu $at, $zero, 2
  /* 10C728 8018DEC8 26730001 */     addiu $s3, $s3, 1
  /* 10C72C 8018DECC 24180001 */     addiu $t8, $zero, 1
  /* 10C730 8018DED0 24790001 */     addiu $t9, $v1, 1
  /* 10C734 8018DED4 AC580014 */        sw $t8, 0x14($v0)
  /* 10C738 8018DED8 A2390000 */        sb $t9, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C73C 8018DEDC 1661FFC4 */       bne $s3, $at, .L8018DDF0
  /* 10C740 8018DEE0 E448001C */      swc1 $f8, 0x1c($v0)
  /* 10C744 8018DEE4 10000043 */         b .L8018DFF4
  /* 10C748 8018DEE8 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  glabel jtgt_ovl65_8018DEEC
  /* 10C74C 8018DEEC 3C108019 */       lui $s0, %hi(D_ovl65_80192FB0)
  /* 10C750 8018DEF0 3C138019 */       lui $s3, %hi(D_ovl65_80192FB3)
  /* 10C754 8018DEF4 2411000C */     addiu $s1, $zero, 0xc
  /* 10C758 8018DEF8 00009025 */        or $s2, $zero, $zero
  /* 10C75C 8018DEFC 26732FB3 */     addiu $s3, $s3, %lo(D_ovl65_80192FB3)
  /* 10C760 8018DF00 26102FB0 */     addiu $s0, $s0, %lo(D_ovl65_80192FB0)
  .L8018DF04:
  /* 10C764 8018DF04 0C006265 */       jal lbRandom_GetIntRange
  /* 10C768 8018DF08 02202025 */        or $a0, $s1, $zero
  /* 10C76C 8018DF0C 3244FFFF */      andi $a0, $s2, 0xffff
  /* 10C770 8018DF10 0C0634E5 */       jal func_ovl65_8018D394
  /* 10C774 8018DF14 00402825 */        or $a1, $v0, $zero
  /* 10C778 8018DF18 304300FF */      andi $v1, $v0, 0xff
  /* 10C77C 8018DF1C 240E0001 */     addiu $t6, $zero, 1
  /* 10C780 8018DF20 26100001 */     addiu $s0, $s0, 1
  /* 10C784 8018DF24 006E6004 */      sllv $t4, $t6, $v1
  /* 10C788 8018DF28 0213082B */      sltu $at, $s0, $s3
  /* 10C78C 8018DF2C A202FFFF */        sb $v0, -1($s0) # D_ovl65_80192FB0 + -1
  /* 10C790 8018DF30 024C9025 */        or $s2, $s2, $t4
  /* 10C794 8018DF34 246D000E */     addiu $t5, $v1, 0xe
  /* 10C798 8018DF38 3252FFFF */      andi $s2, $s2, 0xffff
  /* 10C79C 8018DF3C A20DFFFF */        sb $t5, -1($s0) # D_ovl65_80192FB0 + -1
  /* 10C7A0 8018DF40 1420FFF0 */      bnez $at, .L8018DF04
  /* 10C7A4 8018DF44 2631FFFF */     addiu $s1, $s1, -1
  /* 10C7A8 8018DF48 3C118019 */       lui $s1, %hi(D_ovl65_80192FA9)
  /* 10C7AC 8018DF4C 26312FA9 */     addiu $s1, $s1, %lo(D_ovl65_80192FA9)
  /* 10C7B0 8018DF50 3C158019 */       lui $s5, %hi(D_ovl65_80192FB0)
  /* 10C7B4 8018DF54 A2200000 */        sb $zero, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C7B8 8018DF58 26B52FB0 */     addiu $s5, $s5, %lo(D_ovl65_80192FB0)
  /* 10C7BC 8018DF5C 00009825 */        or $s3, $zero, $zero
  /* 10C7C0 8018DF60 24120003 */     addiu $s2, $zero, 3
  .L8018DF64:
  /* 10C7C4 8018DF64 0C0634A0 */       jal func_ovl65_8018D280
  /* 10C7C8 8018DF68 02802025 */        or $a0, $s4, $zero
  /* 10C7CC 8018DF6C 0040A025 */        or $s4, $v0, $zero
  /* 10C7D0 8018DF70 02E02025 */        or $a0, $s7, $zero
  /* 10C7D4 8018DF74 8FA50040 */        lw $a1, 0x40($sp)
  /* 10C7D8 8018DF78 00403025 */        or $a2, $v0, $zero
  /* 10C7DC 8018DF7C 0C06353B */       jal func_ovl65_8018D4EC
  /* 10C7E0 8018DF80 00003825 */        or $a3, $zero, $zero
  /* 10C7E4 8018DF84 922F0000 */       lbu $t7, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C7E8 8018DF88 001460C0 */       sll $t4, $s4, 3
  /* 10C7EC 8018DF8C 01946023 */      subu $t4, $t4, $s4
  /* 10C7F0 8018DF90 8ECE0000 */        lw $t6, ($s6) # gpBattleState + 0
  /* 10C7F4 8018DF94 000C6080 */       sll $t4, $t4, 2
  /* 10C7F8 8018DF98 02AFC021 */      addu $t8, $s5, $t7
  /* 10C7FC 8018DF9C 93190000 */       lbu $t9, ($t8)
  /* 10C800 8018DFA0 01946021 */      addu $t4, $t4, $s4
  /* 10C804 8018DFA4 000C6080 */       sll $t4, $t4, 2
  /* 10C808 8018DFA8 01CC6821 */      addu $t5, $t6, $t4
  /* 10C80C 8018DFAC A1B90023 */        sb $t9, 0x23($t5)
  /* 10C810 8018DFB0 922C0000 */       lbu $t4, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C814 8018DFB4 3C188019 */       lui $t8, %hi(D_ovl65_80192FE0)
  /* 10C818 8018DFB8 27182FE0 */     addiu $t8, $t8, %lo(D_ovl65_80192FE0)
  /* 10C81C 8018DFBC 00147940 */       sll $t7, $s4, 5
  /* 10C820 8018DFC0 01F81021 */      addu $v0, $t7, $t8
  /* 10C824 8018DFC4 266E0025 */     addiu $t6, $s3, 0x25
  /* 10C828 8018DFC8 26730001 */     addiu $s3, $s3, 1
  /* 10C82C 8018DFCC 24030001 */     addiu $v1, $zero, 1
  /* 10C830 8018DFD0 25990001 */     addiu $t9, $t4, 1
  /* 10C834 8018DFD4 AC4E0000 */        sw $t6, ($v0)
  /* 10C838 8018DFD8 AC430010 */        sw $v1, 0x10($v0)
  /* 10C83C 8018DFDC AC430014 */        sw $v1, 0x14($v0)
  /* 10C840 8018DFE0 1672FFE0 */       bne $s3, $s2, .L8018DF64
  /* 10C844 8018DFE4 A2390000 */        sb $t9, ($s1) # D_ovl65_80192FA9 + 0
  /* 10C848 8018DFE8 10000002 */         b .L8018DFF4
  /* 10C84C 8018DFEC 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  glabel jtgt_ovl65_8018DFF0
  /* 10C850 8018DFF0 8ECD0000 */        lw $t5, ($s6) # gpBattleState + 0
  .L8018DFF4:
  /* 10C854 8018DFF4 3C048019 */       lui $a0, %hi(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10C858 8018DFF8 3C068019 */       lui $a2, %hi(gmBonusStat_Attacker_GroundOrAirAttack_Count)
  /* 10C85C 8018DFFC A1A00005 */        sb $zero, 5($t5)
  /* 10C860 8018E000 8EC20000 */        lw $v0, ($s6) # gpBattleState + 0
  /* 10C864 8018E004 00001825 */        or $v1, $zero, $zero
  /* 10C868 8018E008 24843798 */     addiu $a0, $a0, %lo(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10C86C 8018E00C 904F0005 */       lbu $t7, 5($v0)
  /* 10C870 8018E010 24C637A0 */     addiu $a2, $a2, %lo(gmBonusStat_Attacker_GroundOrAirAttack_Count)
  /* 10C874 8018E014 3C078019 */       lui $a3, %hi(gmBonusStat_Defender_IsSpecialAttack_Count)
  /* 10C878 8018E018 A04F0004 */        sb $t7, 4($v0)
  /* 10C87C 8018E01C 8EC20000 */        lw $v0, ($s6) # gpBattleState + 0
  .L8018E020:
  /* 10C880 8018E020 24010001 */     addiu $at, $zero, 1
  /* 10C884 8018E024 0043C021 */      addu $t8, $v0, $v1
  /* 10C888 8018E028 93050022 */       lbu $a1, 0x22($t8) # D_ovl65_80192FE0 + 34
  /* 10C88C 8018E02C 24630074 */     addiu $v1, $v1, 0x74
  /* 10C890 8018E030 50A00006 */      beql $a1, $zero, .L8018E04C
  /* 10C894 8018E034 904E0004 */       lbu $t6, 4($v0)
  /* 10C898 8018E038 50A10008 */      beql $a1, $at, .L8018E05C
  /* 10C89C 8018E03C 90590005 */       lbu $t9, 5($v0)
  /* 10C8A0 8018E040 10000009 */         b .L8018E068
  /* 10C8A4 8018E044 286101D0 */      slti $at, $v1, 0x1d0
  /* 10C8A8 8018E048 904E0004 */       lbu $t6, 4($v0)
  .L8018E04C:
  /* 10C8AC 8018E04C 25CC0001 */     addiu $t4, $t6, 1
  /* 10C8B0 8018E050 10000004 */         b .L8018E064
  /* 10C8B4 8018E054 A04C0004 */        sb $t4, 4($v0)
  /* 10C8B8 8018E058 90590005 */       lbu $t9, 5($v0)
  .L8018E05C:
  /* 10C8BC 8018E05C 272D0001 */     addiu $t5, $t9, 1
  /* 10C8C0 8018E060 A04D0005 */        sb $t5, 5($v0)
  .L8018E064:
  /* 10C8C4 8018E064 286101D0 */      slti $at, $v1, 0x1d0
  .L8018E068:
  /* 10C8C8 8018E068 5420FFED */      bnel $at, $zero, .L8018E020
  /* 10C8CC 8018E06C 8EC20000 */        lw $v0, ($s6) # gpBattleState + 0
  /* 10C8D0 8018E070 3C018019 */       lui $at, %hi(gmBonusStat_TomatoPickupCount)
  /* 10C8D4 8018E074 A02036A8 */        sb $zero, %lo(gmBonusStat_TomatoPickupCount)($at)
  /* 10C8D8 8018E078 3C018019 */       lui $at, %hi(gmBonusStat_HeartPickupCount)
  /* 10C8DC 8018E07C A02036A9 */        sb $zero, %lo(gmBonusStat_HeartPickupCount)($at)
  /* 10C8E0 8018E080 3C018019 */       lui $at, %hi(D_ovl65_801936AA)
  /* 10C8E4 8018E084 A02036AA */        sb $zero, %lo(D_ovl65_801936AA)($at)
  /* 10C8E8 8018E088 3C018019 */       lui $at, %hi(gmBonusStat_ShieldBreaker)
  /* 10C8EC 8018E08C A02036AB */        sb $zero, %lo(gmBonusStat_ShieldBreaker)($at)
  /* 10C8F0 8018E090 3C018019 */       lui $at, %hi(D_ovl65_801936AC)
  /* 10C8F4 8018E094 A02036AC */        sb $zero, %lo(D_ovl65_801936AC)($at)
  /* 10C8F8 8018E098 3C018019 */       lui $at, %hi(gmBonusStat_MewCatcher)
  /* 10C8FC 8018E09C A02036AD */        sb $zero, %lo(gmBonusStat_MewCatcher)($at)
  /* 10C900 8018E0A0 3C018019 */       lui $at, %hi(D_ovl65_801933C4)
  /* 10C904 8018E0A4 AC2033C4 */        sw $zero, %lo(D_ovl65_801933C4)($at)
  /* 10C908 8018E0A8 3C018019 */       lui $at, %hi(D_ovl65_801933C0)
  /* 10C90C 8018E0AC AC2033C0 */        sw $zero, %lo(D_ovl65_801933C0)($at)
  /* 10C910 8018E0B0 3C018019 */       lui $at, %hi(D_ovl65_801936A0)
  /* 10C914 8018E0B4 AC2036A0 */        sw $zero, %lo(D_ovl65_801936A0)($at)
  /* 10C918 8018E0B8 3C018019 */       lui $at, %hi(D_ovl65_801933C8)
  /* 10C91C 8018E0BC 240FFFFF */     addiu $t7, $zero, -1
  /* 10C920 8018E0C0 AC2F33C8 */        sw $t7, %lo(D_ovl65_801933C8)($at)
  /* 10C924 8018E0C4 3C018019 */       lui $at, %hi(D_ovl65_801933CC)
  /* 10C928 8018E0C8 AC2033CC */        sw $zero, %lo(D_ovl65_801933CC)($at)
  /* 10C92C 8018E0CC 3C018019 */       lui $at, %hi(D_ovl65_801936A4)
  /* 10C930 8018E0D0 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10C934 8018E0D4 3C028019 */       lui $v0, %hi(gmBonusStat_Attacker_AttackGroupIndex_Count)
  /* 10C938 8018E0D8 AC2036A4 */        sw $zero, %lo(D_ovl65_801936A4)($at)
  /* 10C93C 8018E0DC 244236B0 */     addiu $v0, $v0, %lo(gmBonusStat_Attacker_AttackGroupIndex_Count)
  /* 10C940 8018E0E0 246337B0 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_AttackGroupIndex_Count)
  .L8018E0E4:
  /* 10C944 8018E0E4 24420004 */     addiu $v0, $v0, 4
  /* 10C948 8018E0E8 0044082B */      sltu $at, $v0, $a0
  /* 10C94C 8018E0EC 24630004 */     addiu $v1, $v1, 4
  /* 10C950 8018E0F0 AC60FFFC */        sw $zero, -4($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + -4
  /* 10C954 8018E0F4 1420FFFB */      bnez $at, .L8018E0E4
  /* 10C958 8018E0F8 AC40FFFC */        sw $zero, -4($v0) # gmBonusStat_Attacker_AttackGroupIndex_Count + -4
  /* 10C95C 8018E0FC 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10C960 8018E100 3C048019 */       lui $a0, %hi(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10C964 8018E104 3C058019 */       lui $a1, %hi(gmBonusStat_Defender_GroundOrAirAttack_Count)
  /* 10C968 8018E108 3C028019 */       lui $v0, %hi(gmBonusStat_Attacker_IsSpecialAttack_Count)
  /* 10C96C 8018E10C 3C088019 */       lui $t0, %hi(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10C970 8018E110 250837B0 */     addiu $t0, $t0, %lo(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10C974 8018E114 244237A8 */     addiu $v0, $v0, %lo(gmBonusStat_Attacker_IsSpecialAttack_Count)
  /* 10C978 8018E118 24A538A0 */     addiu $a1, $a1, %lo(gmBonusStat_Defender_GroundOrAirAttack_Count)
  /* 10C97C 8018E11C 24843798 */     addiu $a0, $a0, %lo(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10C980 8018E120 24633898 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10C984 8018E124 24E738A8 */     addiu $a3, $a3, %lo(gmBonusStat_Defender_IsSpecialAttack_Count)
  .L8018E128:
  /* 10C988 8018E128 24420004 */     addiu $v0, $v0, 4
  /* 10C98C 8018E12C 24630004 */     addiu $v1, $v1, 4
  /* 10C990 8018E130 24840004 */     addiu $a0, $a0, 4
  /* 10C994 8018E134 24A50004 */     addiu $a1, $a1, 4
  /* 10C998 8018E138 24C60004 */     addiu $a2, $a2, 4
  /* 10C99C 8018E13C 24E70004 */     addiu $a3, $a3, 4
  /* 10C9A0 8018E140 AC60FFFC */        sw $zero, -4($v1) # gmBonusStat_Defender_IsSmashAttack_Count + -4
  /* 10C9A4 8018E144 AC80FFFC */        sw $zero, -4($a0) # gmBonusStat_Attacker_IsSmashAttack_Count + -4
  /* 10C9A8 8018E148 ACA0FFFC */        sw $zero, -4($a1) # gmBonusStat_Defender_GroundOrAirAttack_Count + -4
  /* 10C9AC 8018E14C ACC0FFFC */        sw $zero, -4($a2) # gmBonusStat_Attacker_GroundOrAirAttack_Count + -4
  /* 10C9B0 8018E150 ACE0FFFC */        sw $zero, -4($a3) # gmBonusStat_Defender_IsSpecialAttack_Count + -4
  /* 10C9B4 8018E154 1448FFF4 */       bne $v0, $t0, .L8018E128
  /* 10C9B8 8018E158 AC40FFFC */        sw $zero, -4($v0) # gmBonusStat_Attacker_IsSpecialAttack_Count + -4
  /* 10C9BC 8018E15C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 10C9C0 8018E160 8FB00018 */        lw $s0, 0x18($sp)
  /* 10C9C4 8018E164 8FB1001C */        lw $s1, 0x1c($sp)
  /* 10C9C8 8018E168 8FB20020 */        lw $s2, 0x20($sp)
  /* 10C9CC 8018E16C 8FB30024 */        lw $s3, 0x24($sp)
  /* 10C9D0 8018E170 8FB40028 */        lw $s4, 0x28($sp)
  /* 10C9D4 8018E174 8FB5002C */        lw $s5, 0x2c($sp)
  /* 10C9D8 8018E178 8FB60030 */        lw $s6, 0x30($sp)
  /* 10C9DC 8018E17C 8FB70034 */        lw $s7, 0x34($sp)
  /* 10C9E0 8018E180 8FBE0038 */        lw $fp, 0x38($sp)
  /* 10C9E4 8018E184 03E00008 */        jr $ra
  /* 10C9E8 8018E188 27BD0048 */     addiu $sp, $sp, 0x48

  /* 10C9EC 8018E18C 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 10C9F0 8018E190 AFBF001C */        sw $ra, 0x1c($sp)
  /* 10C9F4 8018E194 AFB00018 */        sw $s0, 0x18($sp)
  /* 10C9F8 8018E198 8C860084 */        lw $a2, 0x84($a0)
  /* 10C9FC 8018E19C 3C038019 */       lui $v1, %hi(D_ovl65_80192FA8)
  /* 10CA00 8018E1A0 24632FA8 */     addiu $v1, $v1, %lo(D_ovl65_80192FA8)
  /* 10CA04 8018E1A4 90620000 */       lbu $v0, ($v1) # D_ovl65_80192FA8 + 0
  /* 10CA08 8018E1A8 8CCE09D0 */        lw $t6, 0x9d0($a2)
  /* 10CA0C 8018E1AC 8CC709C8 */        lw $a3, 0x9c8($a2)
  /* 10CA10 8018E1B0 90D0000D */       lbu $s0, 0xd($a2)
  /* 10CA14 8018E1B4 14400005 */      bnez $v0, .L8018E1CC
  /* 10CA18 8018E1B8 AFAE0040 */        sw $t6, 0x40($sp)
  /* 10CA1C 8018E1BC 0C04F62C */       jal ftCommon_Sleep_SetStatus
  /* 10CA20 8018E1C0 00000000 */       nop 
  /* 10CA24 8018E1C4 100000F0 */         b .L8018E588
  /* 10CA28 8018E1C8 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E1CC:
  /* 10CA2C 8018E1CC 244FFFFF */     addiu $t7, $v0, -1
  /* 10CA30 8018E1D0 A06F0000 */        sb $t7, ($v1)
  /* 10CA34 8018E1D4 0C035E3A */       jal func_ovl2_800D78E8
  /* 10CA38 8018E1D8 AFA70088 */        sw $a3, 0x88($sp)
  /* 10CA3C 8018E1DC 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 10CA40 8018E1E0 001040C0 */       sll $t0, $s0, 3
  /* 10CA44 8018E1E4 252950E8 */     addiu $t1, $t1, %lo(gpBattleState)
  /* 10CA48 8018E1E8 01104023 */      subu $t0, $t0, $s0
  /* 10CA4C 8018E1EC 8D380000 */        lw $t8, ($t1) # gpBattleState + 0
  /* 10CA50 8018E1F0 00084080 */       sll $t0, $t0, 2
  /* 10CA54 8018E1F4 01104021 */      addu $t0, $t0, $s0
  /* 10CA58 8018E1F8 00084080 */       sll $t0, $t0, 2
  /* 10CA5C 8018E1FC 3C04800A */       lui $a0, %hi(gSceneData)
  /* 10CA60 8018E200 8FA70088 */        lw $a3, 0x88($sp)
  /* 10CA64 8018E204 0308C821 */      addu $t9, $t8, $t0
  /* 10CA68 8018E208 24844AD0 */     addiu $a0, $a0, %lo(gSceneData)
  /* 10CA6C 8018E20C A320002B */        sb $zero, 0x2b($t9)
  /* 10CA70 8018E210 90820017 */       lbu $v0, 0x17($a0) # gSceneData + 23
  /* 10CA74 8018E214 24010001 */     addiu $at, $zero, 1
  /* 10CA78 8018E218 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FA9)
  /* 10CA7C 8018E21C 1041000D */       beq $v0, $at, .L8018E254
  /* 10CA80 8018E220 24010008 */     addiu $at, $zero, 8
  /* 10CA84 8018E224 10410043 */       beq $v0, $at, .L8018E334
  /* 10CA88 8018E228 2401000C */     addiu $at, $zero, 0xc
  /* 10CA8C 8018E22C 10410032 */       beq $v0, $at, .L8018E2F8
  /* 10CA90 8018E230 3C0B8019 */       lui $t3, 0x8019
  /* 10CA94 8018E234 3C028019 */       lui $v0, %hi(D_ovl65_80192FA9)
  /* 10CA98 8018E238 90422FA9 */       lbu $v0, %lo(D_ovl65_80192FA9)($v0)
  /* 10CA9C 8018E23C 3C0B8019 */       lui $t3, %hi(D_ovl65_80192FE0)
  /* 10CAA0 8018E240 256B2FE0 */     addiu $t3, $t3, %lo(D_ovl65_80192FE0)
  /* 10CAA4 8018E244 00105140 */       sll $t2, $s0, 5
  /* 10CAA8 8018E248 014B3821 */      addu $a3, $t2, $t3
  /* 10CAAC 8018E24C 1000004E */         b .L8018E388
  /* 10CAB0 8018E250 00401825 */        or $v1, $v0, $zero
  .L8018E254:
  /* 10CAB4 8018E254 918C2FA9 */       lbu $t4, %lo(D_ovl65_80192FA9)($t4)
  /* 10CAB8 8018E258 3C0D8019 */       lui $t5, %hi(D_ovl65_80192FB0)
  /* 10CABC 8018E25C 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10CAC0 8018E260 01AC6821 */      addu $t5, $t5, $t4
  /* 10CAC4 8018E264 91AD2FB0 */       lbu $t5, %lo(D_ovl65_80192FB0)($t5)
  /* 10CAC8 8018E268 01C87821 */      addu $t7, $t6, $t0
  /* 10CACC 8018E26C 24010006 */     addiu $at, $zero, 6
  /* 10CAD0 8018E270 A1ED0026 */        sb $t5, 0x26($t7)
  /* 10CAD4 8018E274 90980014 */       lbu $t8, 0x14($a0) # gSceneData + 20
  /* 10CAD8 8018E278 5701000B */      bnel $t8, $at, .L8018E2A8
  /* 10CADC 8018E27C 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10CAE0 8018E280 8D390000 */        lw $t9, ($t1) # gpBattleState + 0
  /* 10CAE4 8018E284 908A0015 */       lbu $t2, 0x15($a0) # gSceneData + 21
  /* 10CAE8 8018E288 240C0001 */     addiu $t4, $zero, 1
  /* 10CAEC 8018E28C 03281821 */      addu $v1, $t9, $t0
  /* 10CAF0 8018E290 906B0026 */       lbu $t3, 0x26($v1)
  /* 10CAF4 8018E294 554B0004 */      bnel $t2, $t3, .L8018E2A8
  /* 10CAF8 8018E298 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10CAFC 8018E29C 10000004 */         b .L8018E2B0
  /* 10CB00 8018E2A0 A06C0027 */        sb $t4, 0x27($v1)
  /* 10CB04 8018E2A4 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  .L8018E2A8:
  /* 10CB08 8018E2A8 01C86821 */      addu $t5, $t6, $t0
  /* 10CB0C 8018E2AC A1A00027 */        sb $zero, 0x27($t5)
  .L8018E2B0:
  /* 10CB10 8018E2B0 8D2F0000 */        lw $t7, ($t1) # gpBattleState + 0
  /* 10CB14 8018E2B4 02002025 */        or $a0, $s0, $zero
  /* 10CB18 8018E2B8 00E03025 */        or $a2, $a3, $zero
  /* 10CB1C 8018E2BC 01E8C021 */      addu $t8, $t7, $t0
  /* 10CB20 8018E2C0 93050026 */       lbu $a1, 0x26($t8)
  /* 10CB24 8018E2C4 0C043FDE */       jal func_ovl2_8010FF78
  /* 10CB28 8018E2C8 AFA8002C */        sw $t0, 0x2c($sp)
  /* 10CB2C 8018E2CC 3C028019 */       lui $v0, %hi(D_ovl65_80192FA9)
  /* 10CB30 8018E2D0 90422FA9 */       lbu $v0, %lo(D_ovl65_80192FA9)($v0)
  /* 10CB34 8018E2D4 3C0A8019 */       lui $t2, %hi(D_ovl65_80192FE0)
  /* 10CB38 8018E2D8 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 10CB3C 8018E2DC 254A2FE0 */     addiu $t2, $t2, %lo(D_ovl65_80192FE0)
  /* 10CB40 8018E2E0 0010C940 */       sll $t9, $s0, 5
  /* 10CB44 8018E2E4 252950E8 */     addiu $t1, $t1, %lo(gpBattleState)
  /* 10CB48 8018E2E8 8FA8002C */        lw $t0, 0x2c($sp)
  /* 10CB4C 8018E2EC 032A3821 */      addu $a3, $t9, $t2
  /* 10CB50 8018E2F0 10000025 */         b .L8018E388
  /* 10CB54 8018E2F4 00401825 */        or $v1, $v0, $zero
  .L8018E2F8:
  /* 10CB58 8018E2F8 916B2FA9 */       lbu $t3, 0x2fa9($t3)
  /* 10CB5C 8018E2FC 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FB0)
  /* 10CB60 8018E300 8D2E0000 */        lw $t6, ($t1) # gpBattleState + 0
  /* 10CB64 8018E304 018B6021 */      addu $t4, $t4, $t3
  /* 10CB68 8018E308 918C2FB0 */       lbu $t4, %lo(D_ovl65_80192FB0)($t4)
  /* 10CB6C 8018E30C 01C86821 */      addu $t5, $t6, $t0
  /* 10CB70 8018E310 3C028019 */       lui $v0, %hi(D_ovl65_80192FA9)
  /* 10CB74 8018E314 A1AC0023 */        sb $t4, 0x23($t5)
  /* 10CB78 8018E318 90422FA9 */       lbu $v0, %lo(D_ovl65_80192FA9)($v0)
  /* 10CB7C 8018E31C 3C188019 */       lui $t8, %hi(D_ovl65_80192FE0)
  /* 10CB80 8018E320 27182FE0 */     addiu $t8, $t8, %lo(D_ovl65_80192FE0)
  /* 10CB84 8018E324 00107940 */       sll $t7, $s0, 5
  /* 10CB88 8018E328 01F83821 */      addu $a3, $t7, $t8
  /* 10CB8C 8018E32C 10000016 */         b .L8018E388
  /* 10CB90 8018E330 00401825 */        or $v1, $v0, $zero
  .L8018E334:
  /* 10CB94 8018E334 3C028019 */       lui $v0, %hi(D_ovl65_80192FA9)
  /* 10CB98 8018E338 90422FA9 */       lbu $v0, %lo(D_ovl65_80192FA9)($v0)
  /* 10CB9C 8018E33C 24010007 */     addiu $at, $zero, 7
  /* 10CBA0 8018E340 00107140 */       sll $t6, $s0, 5
  /* 10CBA4 8018E344 14410009 */       bne $v0, $at, .L8018E36C
  /* 10CBA8 8018E348 00401825 */        or $v1, $v0, $zero
  /* 10CBAC 8018E34C 3C0A8019 */       lui $t2, %hi(D_ovl65_80192FE0)
  /* 10CBB0 8018E350 3C0B8013 */       lui $t3, %hi(D_ovl2_80130D75)
  /* 10CBB4 8018E354 916B0D75 */       lbu $t3, %lo(D_ovl2_80130D75)($t3)
  /* 10CBB8 8018E358 254A2FE0 */     addiu $t2, $t2, %lo(D_ovl65_80192FE0)
  /* 10CBBC 8018E35C 0010C940 */       sll $t9, $s0, 5
  /* 10CBC0 8018E360 032A3821 */      addu $a3, $t9, $t2
  /* 10CBC4 8018E364 10000008 */         b .L8018E388
  /* 10CBC8 8018E368 ACEB0008 */        sw $t3, 8($a3)
  .L8018E36C:
  /* 10CBCC 8018E36C 3C0D8019 */       lui $t5, %hi(D_ovl65_80192800)
  /* 10CBD0 8018E370 01A26821 */      addu $t5, $t5, $v0
  /* 10CBD4 8018E374 91AD2800 */       lbu $t5, %lo(D_ovl65_80192800)($t5)
  /* 10CBD8 8018E378 3C0C8019 */       lui $t4, %hi(D_ovl65_80192FE0)
  /* 10CBDC 8018E37C 258C2FE0 */     addiu $t4, $t4, %lo(D_ovl65_80192FE0)
  /* 10CBE0 8018E380 01CC3821 */      addu $a3, $t6, $t4
  /* 10CBE4 8018E384 ACED0008 */        sw $t5, 8($a3)
  .L8018E388:
  /* 10CBE8 8018E388 3C198011 */       lui $t9, %hi(D_ovl2_80116DD0)
  /* 10CBEC 8018E38C ACE3000C */        sw $v1, 0xc($a3)
  /* 10CBF0 8018E390 244F0001 */     addiu $t7, $v0, 1
  /* 10CBF4 8018E394 3C018019 */       lui $at, %hi(D_ovl65_80192FA9)
  /* 10CBF8 8018E398 27396DD0 */     addiu $t9, $t9, %lo(D_ovl2_80116DD0)
  /* 10CBFC 8018E39C A02F2FA9 */        sb $t7, %lo(D_ovl65_80192FA9)($at)
  /* 10CC00 8018E3A0 272E003C */     addiu $t6, $t9, 0x3c
  /* 10CC04 8018E3A4 27B80044 */     addiu $t8, $sp, 0x44
  .L8018E3A8:
  /* 10CC08 8018E3A8 8F2B0000 */        lw $t3, ($t9) # D_ovl2_80116DD0 + 0
  /* 10CC0C 8018E3AC 2739000C */     addiu $t9, $t9, 0xc
  /* 10CC10 8018E3B0 2718000C */     addiu $t8, $t8, 0xc
  /* 10CC14 8018E3B4 AF0BFFF4 */        sw $t3, -0xc($t8) # D_ovl65_80192FE0 + -12
  /* 10CC18 8018E3B8 8F2AFFF8 */        lw $t2, -8($t9) # D_ovl2_80116DD0 + -8
  /* 10CC1C 8018E3BC AF0AFFF8 */        sw $t2, -8($t8) # D_ovl65_80192FE0 + -8
  /* 10CC20 8018E3C0 8F2BFFFC */        lw $t3, -4($t9) # D_ovl2_80116DD0 + -4
  /* 10CC24 8018E3C4 172EFFF8 */       bne $t9, $t6, .L8018E3A8
  /* 10CC28 8018E3C8 AF0BFFFC */        sw $t3, -4($t8) # D_ovl65_80192FE0 + -4
  /* 10CC2C 8018E3CC 8F2B0000 */        lw $t3, ($t9) # D_ovl2_80116DD0 + 0
  /* 10CC30 8018E3D0 27A40048 */     addiu $a0, $sp, 0x48
  /* 10CC34 8018E3D4 2405002B */     addiu $a1, $zero, 0x2b
  /* 10CC38 8018E3D8 AF0B0000 */        sw $t3, ($t8) # D_ovl65_80192FE0 + 0
  /* 10CC3C 8018E3DC 8D2C0000 */        lw $t4, ($t1) # gpBattleState + 0
  /* 10CC40 8018E3E0 01886821 */      addu $t5, $t4, $t0
  /* 10CC44 8018E3E4 91AF0023 */       lbu $t7, 0x23($t5)
  /* 10CC48 8018E3E8 AFA8002C */        sw $t0, 0x2c($sp)
  /* 10CC4C 8018E3EC AFA70020 */        sw $a3, 0x20($sp)
  /* 10CC50 8018E3F0 0C063517 */       jal func_ovl65_8018D45C
  /* 10CC54 8018E3F4 AFAF0044 */        sw $t7, 0x44($sp)
  /* 10CC58 8018E3F8 3C028013 */       lui $v0, %hi(gpGroundInfo)
  /* 10CC5C 8018E3FC 8C421300 */        lw $v0, %lo(gpGroundInfo)($v0)
  /* 10CC60 8018E400 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 10CC64 8018E404 44814000 */      mtc1 $at, $f8 # 0.5 to cop1
  /* 10CC68 8018E408 844E006C */        lh $t6, 0x6c($v0)
  /* 10CC6C 8018E40C 84590074 */        lh $t9, 0x74($v0)
  /* 10CC70 8018E410 C7B00048 */      lwc1 $f16, 0x48($sp)
  /* 10CC74 8018E414 44809000 */      mtc1 $zero, $f18
  /* 10CC78 8018E418 01D9C021 */      addu $t8, $t6, $t9
  /* 10CC7C 8018E41C 44982000 */      mtc1 $t8, $f4
  /* 10CC80 8018E420 4610903E */    c.le.s $f18, $f16
  /* 10CC84 8018E424 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 10CC88 8018E428 468021A0 */   cvt.s.w $f6, $f4
  /* 10CC8C 8018E42C 252950E8 */     addiu $t1, $t1, %lo(gpBattleState)
  /* 10CC90 8018E430 8FA70020 */        lw $a3, 0x20($sp)
  /* 10CC94 8018E434 8FA8002C */        lw $t0, 0x2c($sp)
  /* 10CC98 8018E438 240B0001 */     addiu $t3, $zero, 1
  /* 10CC9C 8018E43C 240AFFFF */     addiu $t2, $zero, -1
  /* 10CCA0 8018E440 46083282 */     mul.s $f10, $f6, $f8
  /* 10CCA4 8018E444 24180002 */     addiu $t8, $zero, 2
  /* 10CCA8 8018E448 24190001 */     addiu $t9, $zero, 1
  /* 10CCAC 8018E44C 27A40044 */     addiu $a0, $sp, 0x44
  /* 10CCB0 8018E450 45000003 */      bc1f .L8018E460
  /* 10CCB4 8018E454 E7AA004C */      swc1 $f10, 0x4c($sp)
  /* 10CCB8 8018E458 10000002 */         b .L8018E464
  /* 10CCBC 8018E45C AFAA0054 */        sw $t2, 0x54($sp)
  .L8018E460:
  /* 10CCC0 8018E460 AFAB0054 */        sw $t3, 0x54($sp)
  .L8018E464:
  /* 10CCC4 8018E464 8D220000 */        lw $v0, ($t1) # gpBattleState + 0
  /* 10CCC8 8018E468 00481821 */      addu $v1, $v0, $t0
  /* 10CCCC 8018E46C 906C0024 */       lbu $t4, 0x24($v1)
  /* 10CCD0 8018E470 A3B00059 */        sb $s0, 0x59($sp)
  /* 10CCD4 8018E474 A3AC0058 */        sb $t4, 0x58($sp)
  /* 10CCD8 8018E478 904F0005 */       lbu $t7, 5($v0)
  /* 10CCDC 8018E47C 904D0004 */       lbu $t5, 4($v0)
  /* 10CCE0 8018E480 01AF7021 */      addu $t6, $t5, $t7
  /* 10CCE4 8018E484 29C10003 */      slti $at, $t6, 3
  /* 10CCE8 8018E488 50200004 */      beql $at, $zero, .L8018E49C
  /* 10CCEC 8018E48C A3B8005A */        sb $t8, 0x5a($sp)
  /* 10CCF0 8018E490 10000002 */         b .L8018E49C
  /* 10CCF4 8018E494 A3B9005A */        sb $t9, 0x5a($sp)
  /* 10CCF8 8018E498 A3B8005A */        sb $t8, 0x5a($sp)
  .L8018E49C:
  /* 10CCFC 8018E49C 906A0026 */       lbu $t2, 0x26($v1)
  /* 10CD00 8018E4A0 0010C880 */       sll $t9, $s0, 2
  /* 10CD04 8018E4A4 0330C821 */      addu $t9, $t9, $s0
  /* 10CD08 8018E4A8 A3AA005B */        sb $t2, 0x5b($sp)
  /* 10CD0C 8018E4AC 906B0027 */       lbu $t3, 0x27($v1)
  /* 10CD10 8018E4B0 3C188004 */       lui $t8, %hi(gContInput)
  /* 10CD14 8018E4B4 27185228 */     addiu $t8, $t8, %lo(gContInput)
  /* 10CD18 8018E4B8 A3AB005C */        sb $t3, 0x5c($sp)
  /* 10CD1C 8018E4BC 906C0021 */       lbu $t4, 0x21($v1)
  /* 10CD20 8018E4C0 0019C840 */       sll $t9, $t9, 1
  /* 10CD24 8018E4C4 03385021 */      addu $t2, $t9, $t8
  /* 10CD28 8018E4C8 A3AC005D */        sb $t4, 0x5d($sp)
  /* 10CD2C 8018E4CC 906D0020 */       lbu $t5, 0x20($v1)
  /* 10CD30 8018E4D0 8FAB0040 */        lw $t3, 0x40($sp)
  /* 10CD34 8018E4D4 8CEC0008 */        lw $t4, 8($a3)
  /* 10CD38 8018E4D8 A3AD005E */        sb $t5, 0x5e($sp)
  /* 10CD3C 8018E4DC 806F002B */        lb $t7, 0x2b($v1)
  /* 10CD40 8018E4E0 AFA00068 */        sw $zero, 0x68($sp)
  /* 10CD44 8018E4E4 8CED000C */        lw $t5, 0xc($a3)
  /* 10CD48 8018E4E8 A3AF005F */        sb $t7, 0x5f($sp)
  /* 10CD4C 8018E4EC 906E0022 */       lbu $t6, 0x22($v1)
  /* 10CD50 8018E4F0 AFAA0070 */        sw $t2, 0x70($sp)
  /* 10CD54 8018E4F4 8CEA0014 */        lw $t2, 0x14($a3)
  /* 10CD58 8018E4F8 AFAE006C */        sw $t6, 0x6c($sp)
  /* 10CD5C 8018E4FC 93AE0063 */       lbu $t6, 0x63($sp)
  /* 10CD60 8018E500 AFAB007C */        sw $t3, 0x7c($sp)
  /* 10CD64 8018E504 A3AD0062 */        sb $t5, 0x62($sp)
  /* 10CD68 8018E508 AFAC0064 */        sw $t4, 0x64($sp)
  /* 10CD6C 8018E50C 000A5940 */       sll $t3, $t2, 5
  /* 10CD70 8018E510 35CD0080 */       ori $t5, $t6, 0x80
  /* 10CD74 8018E514 31AF00DF */      andi $t7, $t5, 0xdf
  /* 10CD78 8018E518 316C0020 */      andi $t4, $t3, 0x20
  /* 10CD7C 8018E51C 018F5025 */        or $t2, $t4, $t7
  /* 10CD80 8018E520 A3AD0063 */        sb $t5, 0x63($sp)
  /* 10CD84 8018E524 A3AA0063 */        sb $t2, 0x63($sp)
  /* 10CD88 8018E528 354B0040 */       ori $t3, $t2, 0x40
  /* 10CD8C 8018E52C A3AB0063 */        sb $t3, 0x63($sp)
  /* 10CD90 8018E530 0C035FCF */       jal ftManager_CreateFighter
  /* 10CD94 8018E534 AFA70020 */        sw $a3, 0x20($sp)
  /* 10CD98 8018E538 AFA2003C */        sw $v0, 0x3c($sp)
  /* 10CD9C 8018E53C 8C460084 */        lw $a2, 0x84($v0)
  /* 10CDA0 8018E540 02002025 */        or $a0, $s0, $zero
  /* 10CDA4 8018E544 00402825 */        or $a1, $v0, $zero
  /* 10CDA8 8018E548 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 10CDAC 8018E54C AFA6008C */        sw $a2, 0x8c($sp)
  /* 10CDB0 8018E550 0C039FDA */       jal func_ovl2_800E7F68
  /* 10CDB4 8018E554 8FA4003C */        lw $a0, 0x3c($sp)
  /* 10CDB8 8018E558 8FA70020 */        lw $a3, 0x20($sp)
  /* 10CDBC 8018E55C 8FA4008C */        lw $a0, 0x8c($sp)
  /* 10CDC0 8018E560 90F90018 */       lbu $t9, 0x18($a3)
  /* 10CDC4 8018E564 0C043E10 */       jal func_ovl2_8010F840
  /* 10CDC8 8018E568 A09901D1 */        sb $t9, 0x1d1($a0)
  /* 10CDCC 8018E56C 8FA6008C */        lw $a2, 0x8c($sp)
  /* 10CDD0 8018E570 8FA70020 */        lw $a3, 0x20($sp)
  /* 10CDD4 8018E574 C4C40860 */      lwc1 $f4, 0x860($a2)
  /* 10CDD8 8018E578 C4E6001C */      lwc1 $f6, 0x1c($a3)
  /* 10CDDC 8018E57C 46062202 */     mul.s $f8, $f4, $f6
  /* 10CDE0 8018E580 E4C80860 */      swc1 $f8, 0x860($a2)
  /* 10CDE4 8018E584 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018E588:
  /* 10CDE8 8018E588 8FB00018 */        lw $s0, 0x18($sp)
  /* 10CDEC 8018E58C 27BD0090 */     addiu $sp, $sp, 0x90
  /* 10CDF0 8018E590 03E00008 */        jr $ra
  /* 10CDF4 8018E594 00000000 */       nop 

glabel func_ovl65_8018E598
  /* 10CDF8 8018E598 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 10CDFC 8018E59C AFB30024 */        sw $s3, 0x24($sp)
  /* 10CE00 8018E5A0 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 10CE04 8018E5A4 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  /* 10CE08 8018E5A8 8E630000 */        lw $v1, ($s3) # gpBattleState + 0
  /* 10CE0C 8018E5AC AFBF002C */        sw $ra, 0x2c($sp)
  /* 10CE10 8018E5B0 AFB40028 */        sw $s4, 0x28($sp)
  /* 10CE14 8018E5B4 AFB20020 */        sw $s2, 0x20($sp)
  /* 10CE18 8018E5B8 AFB1001C */        sw $s1, 0x1c($sp)
  /* 10CE1C 8018E5BC AFB00018 */        sw $s0, 0x18($sp)
  /* 10CE20 8018E5C0 906F0005 */       lbu $t7, 5($v1)
  /* 10CE24 8018E5C4 906E0004 */       lbu $t6, 4($v1)
  /* 10CE28 8018E5C8 3C108019 */       lui $s0, %hi(D_ovl65_80192AF8)
  /* 10CE2C 8018E5CC 3C11800A */       lui $s1, %hi((gSceneData + 0x13))
  /* 10CE30 8018E5D0 01CF1021 */      addu $v0, $t6, $t7
  /* 10CE34 8018E5D4 0002C080 */       sll $t8, $v0, 2
  /* 10CE38 8018E5D8 02188021 */      addu $s0, $s0, $t8
  /* 10CE3C 8018E5DC 8E102AF8 */        lw $s0, %lo(D_ovl65_80192AF8)($s0)
  /* 10CE40 8018E5E0 92314AE3 */       lbu $s1, %lo((gSceneData + 0x13))($s1)
  /* 10CE44 8018E5E4 18400013 */      blez $v0, .L8018E634
  /* 10CE48 8018E5E8 00009025 */        or $s2, $zero, $zero
  /* 10CE4C 8018E5EC 3C148019 */       lui $s4, %hi(D_ovl65_801938B8)
  /* 10CE50 8018E5F0 269438B8 */     addiu $s4, $s4, %lo(D_ovl65_801938B8)
  /* 10CE54 8018E5F4 8E190000 */        lw $t9, ($s0)
  .L8018E5F8:
  /* 10CE58 8018E5F8 00114080 */       sll $t0, $s1, 2
  /* 10CE5C 8018E5FC 02884821 */      addu $t1, $s4, $t0
  /* 10CE60 8018E600 02202025 */        or $a0, $s1, $zero
  /* 10CE64 8018E604 0C0634A0 */       jal func_ovl65_8018D280
  /* 10CE68 8018E608 AD390000 */        sw $t9, ($t1)
  /* 10CE6C 8018E60C 8E630000 */        lw $v1, ($s3) # gpBattleState + 0
  /* 10CE70 8018E610 26520001 */     addiu $s2, $s2, 1
  /* 10CE74 8018E614 00408825 */        or $s1, $v0, $zero
  /* 10CE78 8018E618 906A0004 */       lbu $t2, 4($v1)
  /* 10CE7C 8018E61C 906B0005 */       lbu $t3, 5($v1)
  /* 10CE80 8018E620 26100004 */     addiu $s0, $s0, 4
  /* 10CE84 8018E624 014B6021 */      addu $t4, $t2, $t3
  /* 10CE88 8018E628 024C082A */       slt $at, $s2, $t4
  /* 10CE8C 8018E62C 5420FFF2 */      bnel $at, $zero, .L8018E5F8
  /* 10CE90 8018E630 8E190000 */        lw $t9, ($s0)
  .L8018E634:
  /* 10CE94 8018E634 3C028013 */       lui $v0, %hi(D_ovl2_80131580)
  /* 10CE98 8018E638 3C148019 */       lui $s4, %hi(D_ovl65_801938B8)
  /* 10CE9C 8018E63C 8FBF002C */        lw $ra, 0x2c($sp)
  /* 10CEA0 8018E640 269438B8 */     addiu $s4, $s4, %lo(D_ovl65_801938B8)
  /* 10CEA4 8018E644 24421580 */     addiu $v0, $v0, %lo(D_ovl2_80131580)
  /* 10CEA8 8018E648 AC540008 */        sw $s4, 8($v0) # D_ovl2_80131580 + 8
  /* 10CEAC 8018E64C 240D00D2 */     addiu $t5, $zero, 0xd2
  /* 10CEB0 8018E650 8FB40028 */        lw $s4, 0x28($sp)
  /* 10CEB4 8018E654 8FB00018 */        lw $s0, 0x18($sp)
  /* 10CEB8 8018E658 8FB1001C */        lw $s1, 0x1c($sp)
  /* 10CEBC 8018E65C 8FB20020 */        lw $s2, 0x20($sp)
  /* 10CEC0 8018E660 8FB30024 */        lw $s3, 0x24($sp)
  /* 10CEC4 8018E664 A44D000C */        sh $t5, 0xc($v0) # D_ovl2_80131580 + 12
  /* 10CEC8 8018E668 03E00008 */        jr $ra
  /* 10CECC 8018E66C 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl65_8018E670
  /* 10CED0 8018E670 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 10CED4 8018E674 AFBF005C */        sw $ra, 0x5c($sp)
  /* 10CED8 8018E678 AFBE0058 */        sw $fp, 0x58($sp)
  /* 10CEDC 8018E67C AFB70054 */        sw $s7, 0x54($sp)
  /* 10CEE0 8018E680 AFB60050 */        sw $s6, 0x50($sp)
  /* 10CEE4 8018E684 AFB5004C */        sw $s5, 0x4c($sp)
  /* 10CEE8 8018E688 AFB40048 */        sw $s4, 0x48($sp)
  /* 10CEEC 8018E68C AFB30044 */        sw $s3, 0x44($sp)
  /* 10CEF0 8018E690 AFB20040 */        sw $s2, 0x40($sp)
  /* 10CEF4 8018E694 AFB1003C */        sw $s1, 0x3c($sp)
  /* 10CEF8 8018E698 AFB00038 */        sw $s0, 0x38($sp)
  /* 10CEFC 8018E69C F7B80030 */      sdc1 $f24, 0x30($sp)
  /* 10CF00 8018E6A0 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 10CF04 8018E6A4 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 10CF08 8018E6A8 0C006265 */       jal lbRandom_GetIntRange
  /* 10CF0C 8018E6AC 24040003 */     addiu $a0, $zero, 3
  /* 10CF10 8018E6B0 00408025 */        or $s0, $v0, $zero
  /* 10CF14 8018E6B4 0C002C7A */       jal stop_current_process
  /* 10CF18 8018E6B8 2404005A */     addiu $a0, $zero, 0x5a
  /* 10CF1C 8018E6BC 0C04499A */       jal func_ovl2_80112668
  /* 10CF20 8018E6C0 00000000 */       nop 
  /* 10CF24 8018E6C4 3C0F8019 */       lui $t7, %hi(D_ovl65_80192B0C)
  /* 10CF28 8018E6C8 25EF2B0C */     addiu $t7, $t7, %lo(D_ovl65_80192B0C)
  /* 10CF2C 8018E6CC 00107040 */       sll $t6, $s0, 1
  /* 10CF30 8018E6D0 01CFF021 */      addu $fp, $t6, $t7
  /* 10CF34 8018E6D4 24010001 */     addiu $at, $zero, 1
  /* 10CF38 8018E6D8 16010003 */       bne $s0, $at, .L8018E6E8
  /* 10CF3C 8018E6DC 97D40000 */       lhu $s4, ($fp)
  /* 10CF40 8018E6E0 0C002C7A */       jal stop_current_process
  /* 10CF44 8018E6E4 2404005A */     addiu $a0, $zero, 0x5a
  .L8018E6E8:
  /* 10CF48 8018E6E8 3C03800A */       lui $v1, %hi(gpBattleState)
  /* 10CF4C 8018E6EC 246350E8 */     addiu $v1, $v1, %lo(gpBattleState)
  /* 10CF50 8018E6F0 8C620000 */        lw $v0, ($v1) # gpBattleState + 0
  /* 10CF54 8018E6F4 90580004 */       lbu $t8, 4($v0)
  /* 10CF58 8018E6F8 90590005 */       lbu $t9, 5($v0)
  /* 10CF5C 8018E6FC 0319A821 */      addu $s5, $t8, $t9
  /* 10CF60 8018E700 2AA10003 */      slti $at, $s5, 3
  /* 10CF64 8018E704 10200003 */      beqz $at, .L8018E714
  /* 10CF68 8018E708 00000000 */       nop 
  /* 10CF6C 8018E70C 0C002C7A */       jal stop_current_process
  /* 10CF70 8018E710 02802025 */        or $a0, $s4, $zero
  .L8018E714:
  /* 10CF74 8018E714 3C12800A */       lui $s2, %hi((gSceneData + 0x13))
  /* 10CF78 8018E718 92524AE3 */       lbu $s2, %lo((gSceneData + 0x13))($s2)
  /* 10CF7C 8018E71C 1AA0002A */      blez $s5, .L8018E7C8
  /* 10CF80 8018E720 00009825 */        or $s3, $zero, $zero
  /* 10CF84 8018E724 3C0141E0 */       lui $at, (0x41E00000 >> 16) # 28.0
  /* 10CF88 8018E728 4481C000 */      mtc1 $at, $f24 # 28.0 to cop1
  /* 10CF8C 8018E72C 3C018019 */       lui $at, %hi(D_ovl65_80192ED8)
  /* 10CF90 8018E730 3C178019 */       lui $s7, %hi(D_ovl65_80192B10)
  /* 10CF94 8018E734 4480A000 */      mtc1 $zero, $f20
  /* 10CF98 8018E738 26F72B10 */     addiu $s7, $s7, %lo(D_ovl65_80192B10)
  /* 10CF9C 8018E73C C4362ED8 */      lwc1 $f22, %lo(D_ovl65_80192ED8)($at)
  /* 10CFA0 8018E740 24160074 */     addiu $s6, $zero, 0x74
  .L8018E744:
  /* 10CFA4 8018E744 02560019 */     multu $s2, $s6
  /* 10CFA8 8018E748 3C03800A */       lui $v1, %hi(gpBattleState)
  /* 10CFAC 8018E74C 246350E8 */     addiu $v1, $v1, %lo(gpBattleState)
  /* 10CFB0 8018E750 8C680000 */        lw $t0, ($v1) # gpBattleState + 0
  /* 10CFB4 8018E754 00004812 */      mflo $t1
  /* 10CFB8 8018E758 01095021 */      addu $t2, $t0, $t1
  /* 10CFBC 8018E75C 8D500078 */        lw $s0, 0x78($t2)
  /* 10CFC0 8018E760 0C04F6F8 */       jal ftCommon_Appear_SetStatus
  /* 10CFC4 8018E764 02002025 */        or $a0, $s0, $zero
  /* 10CFC8 8018E768 17D70010 */       bne $fp, $s7, .L8018E7AC
  /* 10CFCC 8018E76C 2404001E */     addiu $a0, $zero, 0x1e
  /* 10CFD0 8018E770 0C002C7A */       jal stop_current_process
  /* 10CFD4 8018E774 2691FFE2 */     addiu $s1, $s4, -0x1e
  /* 10CFD8 8018E778 8E0B0084 */        lw $t3, 0x84($s0)
  /* 10CFDC 8018E77C 4405A000 */      mfc1 $a1, $f20
  /* 10CFE0 8018E780 4406A000 */      mfc1 $a2, $f20
  /* 10CFE4 8018E784 8D6C09C8 */        lw $t4, 0x9c8($t3)
  /* 10CFE8 8018E788 02002025 */        or $a0, $s0, $zero
  /* 10CFEC 8018E78C 8D870090 */        lw $a3, 0x90($t4)
  /* 10CFF0 8018E790 E7B80014 */      swc1 $f24, 0x14($sp)
  /* 10CFF4 8018E794 0C0433D1 */       jal func_ovl2_8010CF44
  /* 10CFF8 8018E798 E7B60010 */      swc1 $f22, 0x10($sp)
  /* 10CFFC 8018E79C 0C002C7A */       jal stop_current_process
  /* 10D000 8018E7A0 02202025 */        or $a0, $s1, $zero
  /* 10D004 8018E7A4 10000003 */         b .L8018E7B4
  /* 10D008 8018E7A8 00000000 */       nop 
  .L8018E7AC:
  /* 10D00C 8018E7AC 0C002C7A */       jal stop_current_process
  /* 10D010 8018E7B0 02802025 */        or $a0, $s4, $zero
  .L8018E7B4:
  /* 10D014 8018E7B4 0C0634A0 */       jal func_ovl65_8018D280
  /* 10D018 8018E7B8 02402025 */        or $a0, $s2, $zero
  /* 10D01C 8018E7BC 26730001 */     addiu $s3, $s3, 1
  /* 10D020 8018E7C0 1675FFE0 */       bne $s3, $s5, .L8018E744
  /* 10D024 8018E7C4 00409025 */        or $s2, $v0, $zero
  .L8018E7C8:
  /* 10D028 8018E7C8 3C0D8019 */       lui $t5, %hi(D_ovl65_80192B10)
  /* 10D02C 8018E7CC 25AD2B10 */     addiu $t5, $t5, %lo(D_ovl65_80192B10)
  /* 10D030 8018E7D0 57CD0006 */      bnel $fp, $t5, .L8018E7EC
  /* 10D034 8018E7D4 8FBF005C */        lw $ra, 0x5c($sp)
  /* 10D038 8018E7D8 0C002C7A */       jal stop_current_process
  /* 10D03C 8018E7DC 2404001E */     addiu $a0, $zero, 0x1e
  /* 10D040 8018E7E0 0C0433C8 */       jal func_ovl2_8010CF20
  /* 10D044 8018E7E4 00000000 */       nop 
  /* 10D048 8018E7E8 8FBF005C */        lw $ra, 0x5c($sp)
  .L8018E7EC:
  /* 10D04C 8018E7EC D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 10D050 8018E7F0 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 10D054 8018E7F4 D7B80030 */      ldc1 $f24, 0x30($sp)
  /* 10D058 8018E7F8 8FB00038 */        lw $s0, 0x38($sp)
  /* 10D05C 8018E7FC 8FB1003C */        lw $s1, 0x3c($sp)
  /* 10D060 8018E800 8FB20040 */        lw $s2, 0x40($sp)
  /* 10D064 8018E804 8FB30044 */        lw $s3, 0x44($sp)
  /* 10D068 8018E808 8FB40048 */        lw $s4, 0x48($sp)
  /* 10D06C 8018E80C 8FB5004C */        lw $s5, 0x4c($sp)
  /* 10D070 8018E810 8FB60050 */        lw $s6, 0x50($sp)
  /* 10D074 8018E814 8FB70054 */        lw $s7, 0x54($sp)
  /* 10D078 8018E818 8FBE0058 */        lw $fp, 0x58($sp)
  /* 10D07C 8018E81C 03E00008 */        jr $ra
  /* 10D080 8018E820 27BD0060 */     addiu $sp, $sp, 0x60

glabel func_ovl65_8018E824
  /* 10D084 8018E824 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 10D088 8018E828 AFBF002C */        sw $ra, 0x2c($sp)
  /* 10D08C 8018E82C AFB50028 */        sw $s5, 0x28($sp)
  /* 10D090 8018E830 AFB40024 */        sw $s4, 0x24($sp)
  /* 10D094 8018E834 AFB30020 */        sw $s3, 0x20($sp)
  /* 10D098 8018E838 AFB2001C */        sw $s2, 0x1c($sp)
  /* 10D09C 8018E83C AFB10018 */        sw $s1, 0x18($sp)
  /* 10D0A0 8018E840 AFB00014 */        sw $s0, 0x14($sp)
  /* 10D0A4 8018E844 0C002C7A */       jal stop_current_process
  /* 10D0A8 8018E848 2404005A */     addiu $a0, $zero, 0x5a
  /* 10D0AC 8018E84C 0C04499A */       jal func_ovl2_80112668
  /* 10D0B0 8018E850 00000000 */       nop 
  /* 10D0B4 8018E854 3C14800A */       lui $s4, %hi(gpBattleState)
  /* 10D0B8 8018E858 269450E8 */     addiu $s4, $s4, %lo(gpBattleState)
  /* 10D0BC 8018E85C 8E830000 */        lw $v1, ($s4) # gpBattleState + 0
  /* 10D0C0 8018E860 3C15800A */       lui $s5, %hi(gSceneData)
  /* 10D0C4 8018E864 26B54AD0 */     addiu $s5, $s5, %lo(gSceneData)
  /* 10D0C8 8018E868 906E0004 */       lbu $t6, 4($v1)
  /* 10D0CC 8018E86C 906F0005 */       lbu $t7, 5($v1)
  /* 10D0D0 8018E870 92B00013 */       lbu $s0, 0x13($s5) # gSceneData + 19
  /* 10D0D4 8018E874 00008825 */        or $s1, $zero, $zero
  /* 10D0D8 8018E878 01CF9821 */      addu $s3, $t6, $t7
  /* 10D0DC 8018E87C 1A600015 */      blez $s3, .L8018E8D4
  /* 10D0E0 8018E880 24120074 */     addiu $s2, $zero, 0x74
  .L8018E884:
  /* 10D0E4 8018E884 02120019 */     multu $s0, $s2
  /* 10D0E8 8018E888 8E980000 */        lw $t8, ($s4) # gpBattleState + 0
  /* 10D0EC 8018E88C 92A90013 */       lbu $t1, 0x13($s5) # gSceneData + 19
  /* 10D0F0 8018E890 0000C812 */      mflo $t9
  /* 10D0F4 8018E894 03194021 */      addu $t0, $t8, $t9
  /* 10D0F8 8018E898 16090005 */       bne $s0, $t1, .L8018E8B0
  /* 10D0FC 8018E89C 8D040078 */        lw $a0, 0x78($t0)
  /* 10D100 8018E8A0 0C04F6F8 */       jal ftCommon_Appear_SetStatus
  /* 10D104 8018E8A4 00000000 */       nop 
  /* 10D108 8018E8A8 10000003 */         b .L8018E8B8
  /* 10D10C 8018E8AC 00000000 */       nop 
  .L8018E8B0:
  /* 10D110 8018E8B0 0C04F778 */       jal ftCommon_Appear_SetPosition
  /* 10D114 8018E8B4 00000000 */       nop 
  .L8018E8B8:
  /* 10D118 8018E8B8 0C002C7A */       jal stop_current_process
  /* 10D11C 8018E8BC 2404003C */     addiu $a0, $zero, 0x3c
  /* 10D120 8018E8C0 0C0634A0 */       jal func_ovl65_8018D280
  /* 10D124 8018E8C4 02002025 */        or $a0, $s0, $zero
  /* 10D128 8018E8C8 26310001 */     addiu $s1, $s1, 1
  /* 10D12C 8018E8CC 1633FFED */       bne $s1, $s3, .L8018E884
  /* 10D130 8018E8D0 00408025 */        or $s0, $v0, $zero
  .L8018E8D4:
  /* 10D134 8018E8D4 8FBF002C */        lw $ra, 0x2c($sp)
  /* 10D138 8018E8D8 8FB00014 */        lw $s0, 0x14($sp)
  /* 10D13C 8018E8DC 8FB10018 */        lw $s1, 0x18($sp)
  /* 10D140 8018E8E0 8FB2001C */        lw $s2, 0x1c($sp)
  /* 10D144 8018E8E4 8FB30020 */        lw $s3, 0x20($sp)
  /* 10D148 8018E8E8 8FB40024 */        lw $s4, 0x24($sp)
  /* 10D14C 8018E8EC 8FB50028 */        lw $s5, 0x28($sp)
  /* 10D150 8018E8F0 03E00008 */        jr $ra
  /* 10D154 8018E8F4 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl65_8018E8F8
  /* 10D158 8018E8F8 3C0F800A */       lui $t7, %hi((gSceneData + 0x13))
  /* 10D15C 8018E8FC 91EF4AE3 */       lbu $t7, %lo((gSceneData + 0x13))($t7)
  /* 10D160 8018E900 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 10D164 8018E904 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 10D168 8018E908 000FC0C0 */       sll $t8, $t7, 3
  /* 10D16C 8018E90C 030FC023 */      subu $t8, $t8, $t7
  /* 10D170 8018E910 0018C080 */       sll $t8, $t8, 2
  /* 10D174 8018E914 3C018019 */       lui $at, %hi(D_ovl65_80192EDC)
  /* 10D178 8018E918 C4242EDC */      lwc1 $f4, %lo(D_ovl65_80192EDC)($at)
  /* 10D17C 8018E91C 030FC021 */      addu $t8, $t8, $t7
  /* 10D180 8018E920 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 10D184 8018E924 0018C080 */       sll $t8, $t8, 2
  /* 10D188 8018E928 3C0141FC */       lui $at, (0x41FC0000 >> 16) # 31.5
  /* 10D18C 8018E92C 44813000 */      mtc1 $at, $f6 # 31.5 to cop1
  /* 10D190 8018E930 AFBF001C */        sw $ra, 0x1c($sp)
  /* 10D194 8018E934 01D8C821 */      addu $t9, $t6, $t8
  /* 10D198 8018E938 8F240078 */        lw $a0, 0x78($t9)
  /* 10D19C 8018E93C 3C06BE86 */       lui $a2, (0xBE860A92 >> 16) # 3196455570
  /* 10D1A0 8018E940 3C0745DA */       lui $a3, (0x45DAC000 >> 16) # 1171963904
  /* 10D1A4 8018E944 34E7C000 */       ori $a3, $a3, (0x45DAC000 & 0xFFFF) # 1171963904
  /* 10D1A8 8018E948 34C60A92 */       ori $a2, $a2, (0xBE860A92 & 0xFFFF) # 3196455570
  /* 10D1AC 8018E94C 24050000 */     addiu $a1, $zero, 0
  /* 10D1B0 8018E950 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 10D1B4 8018E954 0C0433EA */       jal func_ovl2_8010CFA8
  /* 10D1B8 8018E958 E7A60014 */      swc1 $f6, 0x14($sp)
  /* 10D1BC 8018E95C 0C002C7A */       jal stop_current_process
  /* 10D1C0 8018E960 2404003C */     addiu $a0, $zero, 0x3c
  /* 10D1C4 8018E964 0C044835 */       jal func_ovl2_801120D4
  /* 10D1C8 8018E968 00000000 */       nop 
  /* 10D1CC 8018E96C 0C0439A4 */       jal func_ovl2_8010E690
  /* 10D1D0 8018E970 00000000 */       nop 
  /* 10D1D4 8018E974 0C009A70 */       jal func_800269C0
  /* 10D1D8 8018E978 240401EA */     addiu $a0, $zero, 0x1ea
  /* 10D1DC 8018E97C 0C044871 */       jal func_ovl2_801121C4
  /* 10D1E0 8018E980 00000000 */       nop 
  /* 10D1E4 8018E984 0C0026A1 */       jal omEjectGObjCommon
  /* 10D1E8 8018E988 00002025 */        or $a0, $zero, $zero
  /* 10D1EC 8018E98C 0C002C7A */       jal stop_current_process
  /* 10D1F0 8018E990 24040001 */     addiu $a0, $zero, 1
  /* 10D1F4 8018E994 8FBF001C */        lw $ra, 0x1c($sp)
  /* 10D1F8 8018E998 27BD0020 */     addiu $sp, $sp, 0x20
  /* 10D1FC 8018E99C 03E00008 */        jr $ra
  /* 10D200 8018E9A0 00000000 */       nop 

glabel func_ovl65_8018E9A4
  /* 10D204 8018E9A4 3C0F800A */       lui $t7, %hi((gSceneData + 0x13))
  /* 10D208 8018E9A8 91EF4AE3 */       lbu $t7, %lo((gSceneData + 0x13))($t7)
  /* 10D20C 8018E9AC 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 10D210 8018E9B0 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 10D214 8018E9B4 000FC0C0 */       sll $t8, $t7, 3
  /* 10D218 8018E9B8 030FC023 */      subu $t8, $t8, $t7
  /* 10D21C 8018E9BC 0018C080 */       sll $t8, $t8, 2
  /* 10D220 8018E9C0 030FC021 */      addu $t8, $t8, $t7
  /* 10D224 8018E9C4 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 10D228 8018E9C8 0018C080 */       sll $t8, $t8, 2
  /* 10D22C 8018E9CC AFBF0014 */        sw $ra, 0x14($sp)
  /* 10D230 8018E9D0 01D8C821 */      addu $t9, $t6, $t8
  /* 10D234 8018E9D4 8F220078 */        lw $v0, 0x78($t9)
  /* 10D238 8018E9D8 44800000 */      mtc1 $zero, $f0
  /* 10D23C 8018E9DC 3C098013 */       lui $t1, %hi(gpGroundInfo)
  /* 10D240 8018E9E0 8C480084 */        lw $t0, 0x84($v0)
  /* 10D244 8018E9E4 8D291300 */        lw $t1, %lo(gpGroundInfo)($t1)
  /* 10D248 8018E9E8 E7A00020 */      swc1 $f0, 0x20($sp)
  /* 10D24C 8018E9EC E7A00024 */      swc1 $f0, 0x24($sp)
  /* 10D250 8018E9F0 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 10D254 8018E9F4 AFA80038 */        sw $t0, 0x38($sp)
  /* 10D258 8018E9F8 8D2A0010 */        lw $t2, 0x10($t1)
  /* 10D25C 8018E9FC 3C0B0000 */       lui $t3, %hi(D_NF_00004D48)
  /* 10D260 8018EA00 256B4D48 */     addiu $t3, $t3, %lo(D_NF_00004D48)
  /* 10D264 8018EA04 3C0D0000 */       lui $t5, %hi(D_NF_00006010)
  /* 10D268 8018EA08 25AD6010 */     addiu $t5, $t5, %lo(D_NF_00006010)
  /* 10D26C 8018EA0C 44050000 */      mfc1 $a1, $f0
  /* 10D270 8018EA10 014B6023 */      subu $t4, $t2, $t3
  /* 10D274 8018EA14 018D2021 */      addu $a0, $t4, $t5
  /* 10D278 8018EA18 27A60020 */     addiu $a2, $sp, 0x20
  /* 10D27C 8018EA1C 0C04340C */       jal func_ovl2_8010D030
  /* 10D280 8018EA20 AFA2003C */        sw $v0, 0x3c($sp)
  /* 10D284 8018EA24 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10D288 8018EA28 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 10D28C 8018EA2C 24030002 */     addiu $v1, $zero, 2
  .L8018EA30:
  /* 10D290 8018EA30 904F0022 */       lbu $t7, 0x22($v0)
  /* 10D294 8018EA34 106F0006 */       beq $v1, $t7, .L8018EA50
  /* 10D298 8018EA38 00000000 */       nop 
  /* 10D29C 8018EA3C 904E002C */       lbu $t6, 0x2c($v0)
  /* 10D2A0 8018EA40 11C00003 */      beqz $t6, .L8018EA50
  /* 10D2A4 8018EA44 00000000 */       nop 
  /* 10D2A8 8018EA48 10000003 */         b .L8018EA58
  /* 10D2AC 8018EA4C 8C440078 */        lw $a0, 0x78($v0)
  .L8018EA50:
  /* 10D2B0 8018EA50 1000FFF7 */         b .L8018EA30
  /* 10D2B4 8018EA54 24420074 */     addiu $v0, $v0, 0x74
  .L8018EA58:
  /* 10D2B8 8018EA58 8C980084 */        lw $t8, 0x84($a0)
  /* 10D2BC 8018EA5C AFA40030 */        sw $a0, 0x30($sp)
  /* 10D2C0 8018EA60 0C04F6F8 */       jal ftCommon_Appear_SetStatus
  /* 10D2C4 8018EA64 AFB80034 */        sw $t8, 0x34($sp)
  /* 10D2C8 8018EA68 0C002C7A */       jal stop_current_process
  /* 10D2CC 8018EA6C 24040258 */     addiu $a0, $zero, 0x258
  /* 10D2D0 8018EA70 0C039FDA */       jal func_ovl2_800E7F68
  /* 10D2D4 8018EA74 8FA4003C */        lw $a0, 0x3c($sp)
  /* 10D2D8 8018EA78 0C039FDA */       jal func_ovl2_800E7F68
  /* 10D2DC 8018EA7C 8FA40030 */        lw $a0, 0x30($sp)
  /* 10D2E0 8018EA80 8FA40038 */        lw $a0, 0x38($sp)
  /* 10D2E4 8018EA84 8FA30034 */        lw $v1, 0x34($sp)
  /* 10D2E8 8018EA88 3C0B800A */       lui $t3, %hi(gpBattleState)
  /* 10D2EC 8018EA8C 90990191 */       lbu $t9, 0x191($a0)
  /* 10D2F0 8018EA90 24020001 */     addiu $v0, $zero, 1
  /* 10D2F4 8018EA94 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 10D2F8 8018EA98 3328FFF0 */      andi $t0, $t9, 0xfff0
  /* 10D2FC 8018EA9C A0880191 */        sb $t0, 0x191($a0)
  /* 10D300 8018EAA0 90690191 */       lbu $t1, 0x191($v1)
  /* 10D304 8018EAA4 312AFFF0 */      andi $t2, $t1, 0xfff0
  /* 10D308 8018EAA8 A06A0191 */        sb $t2, 0x191($v1)
  /* 10D30C 8018EAAC 8D6B50E8 */        lw $t3, %lo(gpBattleState)($t3)
  /* 10D310 8018EAB0 A1620011 */        sb $v0, 0x11($t3)
  /* 10D314 8018EAB4 0C0439A4 */       jal func_ovl2_8010E690
  /* 10D318 8018EAB8 A0221580 */        sb $v0, %lo(D_ovl2_80131580)($at)
  /* 10D31C 8018EABC 240C0019 */     addiu $t4, $zero, 0x19
  /* 10D320 8018EAC0 3C018013 */       lui $at, %hi(gMusicIndexDefault)
  /* 10D324 8018EAC4 0C039ED5 */       jal ftSpecialItem_BGMCheckFighters
  /* 10D328 8018EAC8 AC2C13A0 */        sw $t4, %lo(gMusicIndexDefault)($at)
  /* 10D32C 8018EACC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10D330 8018EAD0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 10D334 8018EAD4 03E00008 */        jr $ra
  /* 10D338 8018EAD8 00000000 */       nop 

glabel func_ovl65_8018EADC
  /* 10D33C 8018EADC 3C0E800A */       lui $t6, %hi((gSceneData + 0x17))
  /* 10D340 8018EAE0 91CE4AE7 */       lbu $t6, %lo((gSceneData + 0x17))($t6)
  /* 10D344 8018EAE4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10D348 8018EAE8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10D34C 8018EAEC 2DC10012 */     sltiu $at, $t6, 0x12
  /* 10D350 8018EAF0 10200015 */      beqz $at, jtgt_ovl65_8018EB48
  /* 10D354 8018EAF4 AFA40018 */        sw $a0, 0x18($sp)
  /* 10D358 8018EAF8 000E7080 */       sll $t6, $t6, 2
  /* 10D35C 8018EAFC 3C018019 */       lui $at, %hi(jtbl_ovl65_80192EE0)
  /* 10D360 8018EB00 002E0821 */      addu $at, $at, $t6
  /* 10D364 8018EB04 8C2E2EE0 */        lw $t6, %lo(jtbl_ovl65_80192EE0)($at)
  /* 10D368 8018EB08 01C00008 */        jr $t6
  /* 10D36C 8018EB0C 00000000 */       nop 
  glabel jtgt_ovl65_8018EB10
  /* 10D370 8018EB10 0C06399C */       jal func_ovl65_8018E670
  /* 10D374 8018EB14 00000000 */       nop 
  /* 10D378 8018EB18 1000000B */         b jtgt_ovl65_8018EB48
  /* 10D37C 8018EB1C 00000000 */       nop 
  glabel jtgt_ovl65_8018EB20
  /* 10D380 8018EB20 0C063A09 */       jal func_ovl65_8018E824
  /* 10D384 8018EB24 00000000 */       nop 
  /* 10D388 8018EB28 10000007 */         b jtgt_ovl65_8018EB48
  /* 10D38C 8018EB2C 00000000 */       nop 
  glabel jtgt_ovl65_8018EB30
  /* 10D390 8018EB30 0C063A3E */       jal func_ovl65_8018E8F8
  /* 10D394 8018EB34 00000000 */       nop 
  /* 10D398 8018EB38 10000003 */         b jtgt_ovl65_8018EB48
  /* 10D39C 8018EB3C 00000000 */       nop 
  glabel jtgt_ovl65_8018EB40
  /* 10D3A0 8018EB40 0C063A69 */       jal func_ovl65_8018E9A4
  /* 10D3A4 8018EB44 00000000 */       nop 
  glabel jtgt_ovl65_8018EB48
  /* 10D3A8 8018EB48 0C0026A1 */       jal omEjectGObjCommon
  /* 10D3AC 8018EB4C 00002025 */        or $a0, $zero, $zero
  /* 10D3B0 8018EB50 0C002C7A */       jal stop_current_process
  /* 10D3B4 8018EB54 24040001 */     addiu $a0, $zero, 1
  /* 10D3B8 8018EB58 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10D3BC 8018EB5C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10D3C0 8018EB60 03E00008 */        jr $ra
  /* 10D3C4 8018EB64 00000000 */       nop 

glabel func_ovl65_8018EB68
  /* 10D3C8 8018EB68 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10D3CC 8018EB6C AFBF0014 */        sw $ra, 0x14($sp)
  /* 10D3D0 8018EB70 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 10D3D4 8018EB74 00002825 */        or $a1, $zero, $zero
  /* 10D3D8 8018EB78 2406000A */     addiu $a2, $zero, 0xa
  /* 10D3DC 8018EB7C 0C00265A */       jal omMakeGObjCommon
  /* 10D3E0 8018EB80 3C078000 */       lui $a3, 0x8000
  /* 10D3E4 8018EB84 3C058019 */       lui $a1, %hi(func_ovl65_8018EADC)
  /* 10D3E8 8018EB88 24A5EADC */     addiu $a1, $a1, %lo(func_ovl65_8018EADC)
  /* 10D3EC 8018EB8C 00402025 */        or $a0, $v0, $zero
  /* 10D3F0 8018EB90 00003025 */        or $a2, $zero, $zero
  /* 10D3F4 8018EB94 0C002062 */       jal omAddGObjCommonProc
  /* 10D3F8 8018EB98 24070005 */     addiu $a3, $zero, 5
  /* 10D3FC 8018EB9C 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 10D400 8018EBA0 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 10D404 8018EBA4 A1C00011 */        sb $zero, 0x11($t6)
  /* 10D408 8018EBA8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10D40C 8018EBAC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10D410 8018EBB0 03E00008 */        jr $ra
  /* 10D414 8018EBB4 00000000 */       nop 

glabel func_ovl65_8018EBB8
  /* 10D418 8018EBB8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 10D41C 8018EBBC 3C038019 */       lui $v1, %hi(D_ovl65_80192FA1)
  /* 10D420 8018EBC0 90632FA1 */       lbu $v1, %lo(D_ovl65_80192FA1)($v1)
  /* 10D424 8018EBC4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 10D428 8018EBC8 AFB30020 */        sw $s3, 0x20($sp)
  /* 10D42C 8018EBCC AFB2001C */        sw $s2, 0x1c($sp)
  /* 10D430 8018EBD0 AFB10018 */        sw $s1, 0x18($sp)
  /* 10D434 8018EBD4 AFB00014 */        sw $s0, 0x14($sp)
  /* 10D438 8018EBD8 10600093 */      beqz $v1, .L8018EE28
  /* 10D43C 8018EBDC AFA40028 */        sw $a0, 0x28($sp)
  /* 10D440 8018EBE0 3C058019 */       lui $a1, %hi(D_ovl65_801938C8)
  /* 10D444 8018EBE4 24A538C8 */     addiu $a1, $a1, %lo(D_ovl65_801938C8)
  /* 10D448 8018EBE8 90AE0000 */       lbu $t6, ($a1) # D_ovl65_801938C8 + 0
  /* 10D44C 8018EBEC 3C068019 */       lui $a2, %hi(D_ovl65_80192FA0)
  /* 10D450 8018EBF0 00003825 */        or $a3, $zero, $zero
  /* 10D454 8018EBF4 11C3008A */       beq $t6, $v1, .L8018EE20
  /* 10D458 8018EBF8 00000000 */       nop 
  /* 10D45C 8018EBFC A0A30000 */        sb $v1, ($a1) # D_ovl65_801938C8 + 0
  /* 10D460 8018EC00 8C820074 */        lw $v0, 0x74($a0)
  /* 10D464 8018EC04 90C62FA0 */       lbu $a2, %lo(D_ovl65_80192FA0)($a2)
  /* 10D468 8018EC08 00002025 */        or $a0, $zero, $zero
  /* 10D46C 8018EC0C 10400084 */      beqz $v0, .L8018EE20
  /* 10D470 8018EC10 24C6FFFF */     addiu $a2, $a2, -1
  /* 10D474 8018EC14 3C138019 */       lui $s3, %hi(D_ovl65_80192FB0)
  /* 10D478 8018EC18 3C128019 */       lui $s2, %hi(D_ovl65_80193060)
  /* 10D47C 8018EC1C 3C110000 */       lui $s1, %hi(D_NF_00000080)
  /* 10D480 8018EC20 3C108019 */       lui $s0, %hi(D_ovl65_80193064)
  /* 10D484 8018EC24 3C0A800A */       lui $t2, %hi(gSceneData)
  /* 10D488 8018EC28 3C098019 */       lui $t1, %hi(D_ovl65_80192FA4)
  /* 10D48C 8018EC2C 3C058019 */       lui $a1, %hi(D_ovl65_801938CC)
  /* 10D490 8018EC30 24A538CC */     addiu $a1, $a1, %lo(D_ovl65_801938CC)
  /* 10D494 8018EC34 25292FA4 */     addiu $t1, $t1, %lo(D_ovl65_80192FA4)
  /* 10D498 8018EC38 254A4AD0 */     addiu $t2, $t2, %lo(gSceneData)
  /* 10D49C 8018EC3C 26103064 */     addiu $s0, $s0, %lo(D_ovl65_80193064)
  /* 10D4A0 8018EC40 26310080 */     addiu $s1, $s1, %lo(D_NF_00000080)
  /* 10D4A4 8018EC44 26523060 */     addiu $s2, $s2, %lo(D_ovl65_80193060)
  /* 10D4A8 8018EC48 26732FB0 */     addiu $s3, $s3, %lo(D_ovl65_80192FB0)
  /* 10D4AC 8018EC4C 241FFFFB */     addiu $ra, $zero, -5
  /* 10D4B0 8018EC50 240D000C */     addiu $t5, $zero, 0xc
  /* 10D4B4 8018EC54 240C0008 */     addiu $t4, $zero, 8
  /* 10D4B8 8018EC58 240B0001 */     addiu $t3, $zero, 1
  /* 10D4BC 8018EC5C 2408000A */     addiu $t0, $zero, 0xa
  /* 10D4C0 8018EC60 8D2E0000 */        lw $t6, ($t1) # D_ovl65_80192FA4 + 0
  .L8018EC64:
  /* 10D4C4 8018EC64 24180001 */     addiu $t8, $zero, 1
  /* 10D4C8 8018EC68 00D8C804 */      sllv $t9, $t8, $a2
  /* 10D4CC 8018EC6C 032E7824 */       and $t7, $t9, $t6
  /* 10D4D0 8018EC70 11E00005 */      beqz $t7, .L8018EC88
  /* 10D4D4 8018EC74 00000000 */       nop 
  /* 10D4D8 8018EC78 94580024 */       lhu $t8, 0x24($v0)
  /* 10D4DC 8018EC7C 37190004 */       ori $t9, $t8, 4
  /* 10D4E0 8018EC80 10000063 */         b .L8018EE10
  /* 10D4E4 8018EC84 A4590024 */        sh $t9, 0x24($v0)
  .L8018EC88:
  /* 10D4E8 8018EC88 00880019 */     multu $a0, $t0
  /* 10D4EC 8018EC8C 24840001 */     addiu $a0, $a0, 1
  /* 10D4F0 8018EC90 2881000A */      slti $at, $a0, 0xa
  /* 10D4F4 8018EC94 00007012 */      mflo $t6
  /* 10D4F8 8018EC98 25CF0014 */     addiu $t7, $t6, 0x14
  /* 10D4FC 8018EC9C 448F2000 */      mtc1 $t7, $f4
  /* 10D500 8018ECA0 00E80019 */     multu $a3, $t0
  /* 10D504 8018ECA4 468021A0 */   cvt.s.w $f6, $f4
  /* 10D508 8018ECA8 E4460058 */      swc1 $f6, 0x58($v0)
  /* 10D50C 8018ECAC 0000C012 */      mflo $t8
  /* 10D510 8018ECB0 27190014 */     addiu $t9, $t8, 0x14
  /* 10D514 8018ECB4 44994000 */      mtc1 $t9, $f8
  /* 10D518 8018ECB8 00000000 */       nop 
  /* 10D51C 8018ECBC 468042A0 */   cvt.s.w $f10, $f8
  /* 10D520 8018ECC0 14200003 */      bnez $at, .L8018ECD0
  /* 10D524 8018ECC4 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 10D528 8018ECC8 00002025 */        or $a0, $zero, $zero
  /* 10D52C 8018ECCC 24E70001 */     addiu $a3, $a3, 1
  .L8018ECD0:
  /* 10D530 8018ECD0 91430017 */       lbu $v1, 0x17($t2) # gSceneData + 23
  /* 10D534 8018ECD4 506B0008 */      beql $v1, $t3, .L8018ECF8
  /* 10D538 8018ECD8 8CAE0000 */        lw $t6, ($a1) # D_ovl65_801938CC + 0
  /* 10D53C 8018ECDC 506C0020 */      beql $v1, $t4, .L8018ED60
  /* 10D540 8018ECE0 8CAE0000 */        lw $t6, ($a1) # D_ovl65_801938CC + 0
  /* 10D544 8018ECE4 506D0037 */      beql $v1, $t5, .L8018EDC4
  /* 10D548 8018ECE8 8E0E0000 */        lw $t6, ($s0) # D_ovl65_80193064 + 0
  /* 10D54C 8018ECEC 10000046 */         b .L8018EE08
  /* 10D550 8018ECF0 94590024 */       lhu $t9, 0x24($v0)
  /* 10D554 8018ECF4 8CAE0000 */        lw $t6, ($a1) # D_ovl65_801938CC + 0
  .L8018ECF8:
  /* 10D558 8018ECF8 8DCF0000 */        lw $t7, ($t6)
  /* 10D55C 8018ECFC 00407025 */        or $t6, $v0, $zero
  /* 10D560 8018ED00 25E1003C */     addiu $at, $t7, 0x3c
  .L8018ED04:
  /* 10D564 8018ED04 8DF90000 */        lw $t9, ($t7)
  /* 10D568 8018ED08 25EF000C */     addiu $t7, $t7, 0xc
  /* 10D56C 8018ED0C 25CE000C */     addiu $t6, $t6, 0xc
  /* 10D570 8018ED10 ADD90004 */        sw $t9, 4($t6)
  /* 10D574 8018ED14 8DF8FFF8 */        lw $t8, -8($t7)
  /* 10D578 8018ED18 ADD80008 */        sw $t8, 8($t6)
  /* 10D57C 8018ED1C 8DF9FFFC */        lw $t9, -4($t7)
  /* 10D580 8018ED20 15E1FFF8 */       bne $t7, $at, .L8018ED04
  /* 10D584 8018ED24 ADD9000C */        sw $t9, 0xc($t6)
  /* 10D588 8018ED28 8DF90000 */        lw $t9, ($t7)
  /* 10D58C 8018ED2C ADD90010 */        sw $t9, 0x10($t6)
  /* 10D590 8018ED30 8DF80004 */        lw $t8, 4($t7)
  /* 10D594 8018ED34 ADD80014 */        sw $t8, 0x14($t6)
  /* 10D598 8018ED38 8CAF0000 */        lw $t7, ($a1) # D_ovl65_801938CC + 0
  /* 10D59C 8018ED3C 0266C021 */      addu $t8, $s3, $a2
  /* 10D5A0 8018ED40 93190000 */       lbu $t9, ($t8)
  /* 10D5A4 8018ED44 8DEE0004 */        lw $t6, 4($t7)
  /* 10D5A8 8018ED48 00197880 */       sll $t7, $t9, 2
  /* 10D5AC 8018ED4C 01CFC021 */      addu $t8, $t6, $t7
  /* 10D5B0 8018ED50 8F190000 */        lw $t9, ($t8)
  /* 10D5B4 8018ED54 1000002B */         b .L8018EE04
  /* 10D5B8 8018ED58 AC590030 */        sw $t9, 0x30($v0)
  /* 10D5BC 8018ED5C 8CAE0000 */        lw $t6, ($a1) # D_ovl65_801938CC + 0
  .L8018ED60:
  /* 10D5C0 8018ED60 8DCF0000 */        lw $t7, ($t6)
  /* 10D5C4 8018ED64 00407025 */        or $t6, $v0, $zero
  /* 10D5C8 8018ED68 25E1003C */     addiu $at, $t7, 0x3c
  .L8018ED6C:
  /* 10D5CC 8018ED6C 8DF90000 */        lw $t9, ($t7)
  /* 10D5D0 8018ED70 25EF000C */     addiu $t7, $t7, 0xc
  /* 10D5D4 8018ED74 25CE000C */     addiu $t6, $t6, 0xc
  /* 10D5D8 8018ED78 ADD90004 */        sw $t9, 4($t6)
  /* 10D5DC 8018ED7C 8DF8FFF8 */        lw $t8, -8($t7)
  /* 10D5E0 8018ED80 ADD80008 */        sw $t8, 8($t6)
  /* 10D5E4 8018ED84 8DF9FFFC */        lw $t9, -4($t7)
  /* 10D5E8 8018ED88 15E1FFF8 */       bne $t7, $at, .L8018ED6C
  /* 10D5EC 8018ED8C ADD9000C */        sw $t9, 0xc($t6)
  /* 10D5F0 8018ED90 8DF90000 */        lw $t9, ($t7)
  /* 10D5F4 8018ED94 ADD90010 */        sw $t9, 0x10($t6)
  /* 10D5F8 8018ED98 8DF80004 */        lw $t8, 4($t7)
  /* 10D5FC 8018ED9C ADD80014 */        sw $t8, 0x14($t6)
  /* 10D600 8018EDA0 8CAF0000 */        lw $t7, ($a1) # D_ovl65_801938CC + 0
  /* 10D604 8018EDA4 8E580000 */        lw $t8, ($s2) # D_ovl65_80193060 + 0
  /* 10D608 8018EDA8 8DEE0004 */        lw $t6, 4($t7)
  /* 10D60C 8018EDAC 0018C880 */       sll $t9, $t8, 2
  /* 10D610 8018EDB0 01D97821 */      addu $t7, $t6, $t9
  /* 10D614 8018EDB4 8DF80000 */        lw $t8, ($t7)
  /* 10D618 8018EDB8 10000012 */         b .L8018EE04
  /* 10D61C 8018EDBC AC580030 */        sw $t8, 0x30($v0)
  /* 10D620 8018EDC0 8E0E0000 */        lw $t6, ($s0) # D_ovl65_80193064 + 0
  .L8018EDC4:
  /* 10D624 8018EDC4 01D1C821 */      addu $t9, $t6, $s1
  /* 10D628 8018EDC8 2721003C */     addiu $at, $t9, 0x3c
  /* 10D62C 8018EDCC 00407025 */        or $t6, $v0, $zero
  .L8018EDD0:
  /* 10D630 8018EDD0 8F380000 */        lw $t8, ($t9)
  /* 10D634 8018EDD4 2739000C */     addiu $t9, $t9, 0xc
  /* 10D638 8018EDD8 25CE000C */     addiu $t6, $t6, 0xc
  /* 10D63C 8018EDDC ADD80004 */        sw $t8, 4($t6)
  /* 10D640 8018EDE0 8F2FFFF8 */        lw $t7, -8($t9)
  /* 10D644 8018EDE4 ADCF0008 */        sw $t7, 8($t6)
  /* 10D648 8018EDE8 8F38FFFC */        lw $t8, -4($t9)
  /* 10D64C 8018EDEC 1721FFF8 */       bne $t9, $at, .L8018EDD0
  /* 10D650 8018EDF0 ADD8000C */        sw $t8, 0xc($t6)
  /* 10D654 8018EDF4 8F380000 */        lw $t8, ($t9)
  /* 10D658 8018EDF8 ADD80010 */        sw $t8, 0x10($t6)
  /* 10D65C 8018EDFC 8F2F0004 */        lw $t7, 4($t9)
  /* 10D660 8018EE00 ADCF0014 */        sw $t7, 0x14($t6)
  .L8018EE04:
  /* 10D664 8018EE04 94590024 */       lhu $t9, 0x24($v0)
  .L8018EE08:
  /* 10D668 8018EE08 033F7024 */       and $t6, $t9, $ra
  /* 10D66C 8018EE0C A44E0024 */        sh $t6, 0x24($v0)
  .L8018EE10:
  /* 10D670 8018EE10 8C420008 */        lw $v0, 8($v0)
  /* 10D674 8018EE14 24C6FFFF */     addiu $a2, $a2, -1
  /* 10D678 8018EE18 5440FF92 */      bnel $v0, $zero, .L8018EC64
  /* 10D67C 8018EE1C 8D2E0000 */        lw $t6, ($t1) # D_ovl65_80192FA4 + 0
  .L8018EE20:
  /* 10D680 8018EE20 0C0333C0 */       jal func_ovl0_800CCF00
  /* 10D684 8018EE24 8FA40028 */        lw $a0, 0x28($sp)
  .L8018EE28:
  /* 10D688 8018EE28 8FBF0024 */        lw $ra, 0x24($sp)
  /* 10D68C 8018EE2C 8FB00014 */        lw $s0, 0x14($sp)
  /* 10D690 8018EE30 8FB10018 */        lw $s1, 0x18($sp)
  /* 10D694 8018EE34 8FB2001C */        lw $s2, 0x1c($sp)
  /* 10D698 8018EE38 8FB30020 */        lw $s3, 0x20($sp)
  /* 10D69C 8018EE3C 03E00008 */        jr $ra
  /* 10D6A0 8018EE40 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl65_8018EE44
  /* 10D6A4 8018EE44 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 10D6A8 8018EE48 3C02800A */       lui $v0, %hi((gSceneData + 0x17))
  /* 10D6AC 8018EE4C 90424AE7 */       lbu $v0, %lo((gSceneData + 0x17))($v0)
  /* 10D6B0 8018EE50 24010001 */     addiu $at, $zero, 1
  /* 10D6B4 8018EE54 AFBF0034 */        sw $ra, 0x34($sp)
  /* 10D6B8 8018EE58 AFB40030 */        sw $s4, 0x30($sp)
  /* 10D6BC 8018EE5C AFB3002C */        sw $s3, 0x2c($sp)
  /* 10D6C0 8018EE60 AFB20028 */        sw $s2, 0x28($sp)
  /* 10D6C4 8018EE64 AFB10024 */        sw $s1, 0x24($sp)
  /* 10D6C8 8018EE68 10410008 */       beq $v0, $at, .L8018EE8C
  /* 10D6CC 8018EE6C AFB00020 */        sw $s0, 0x20($sp)
  /* 10D6D0 8018EE70 24010008 */     addiu $at, $zero, 8
  /* 10D6D4 8018EE74 10410005 */       beq $v0, $at, .L8018EE8C
  /* 10D6D8 8018EE78 2401000C */     addiu $at, $zero, 0xc
  /* 10D6DC 8018EE7C 10410021 */       beq $v0, $at, .L8018EF04
  /* 10D6E0 8018EE80 00000000 */       nop 
  /* 10D6E4 8018EE84 10000056 */         b .L8018EFE0
  /* 10D6E8 8018EE88 8FBF0034 */        lw $ra, 0x34($sp)
  .L8018EE8C:
  /* 10D6EC 8018EE8C 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10D6F0 8018EE90 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 10D6F4 8018EE94 00008025 */        or $s0, $zero, $zero
  /* 10D6F8 8018EE98 24040004 */     addiu $a0, $zero, 4
  /* 10D6FC 8018EE9C 24030002 */     addiu $v1, $zero, 2
  .L8018EEA0:
  /* 10D700 8018EEA0 904E0022 */       lbu $t6, 0x22($v0)
  /* 10D704 8018EEA4 26100001 */     addiu $s0, $s0, 1
  /* 10D708 8018EEA8 106E0009 */       beq $v1, $t6, .L8018EED0
  /* 10D70C 8018EEAC 00000000 */       nop 
  /* 10D710 8018EEB0 904F002C */       lbu $t7, 0x2c($v0)
  /* 10D714 8018EEB4 11E00006 */      beqz $t7, .L8018EED0
  /* 10D718 8018EEB8 00000000 */       nop 
  /* 10D71C 8018EEBC 8C580078 */        lw $t8, 0x78($v0)
  /* 10D720 8018EEC0 00008025 */        or $s0, $zero, $zero
  /* 10D724 8018EEC4 8F190084 */        lw $t9, 0x84($t8)
  /* 10D728 8018EEC8 10000004 */         b .L8018EEDC
  /* 10D72C 8018EECC AFB90038 */        sw $t9, 0x38($sp)
  .L8018EED0:
  /* 10D730 8018EED0 1604FFF3 */       bne $s0, $a0, .L8018EEA0
  /* 10D734 8018EED4 24420074 */     addiu $v0, $v0, 0x74
  /* 10D738 8018EED8 00008025 */        or $s0, $zero, $zero
  .L8018EEDC:
  /* 10D73C 8018EEDC 8FA80038 */        lw $t0, 0x38($sp)
  /* 10D740 8018EEE0 3C028019 */       lui $v0, %hi(D_ovl65_801938CC)
  /* 10D744 8018EEE4 244238CC */     addiu $v0, $v0, %lo(D_ovl65_801938CC)
  /* 10D748 8018EEE8 8D0909C8 */        lw $t1, 0x9c8($t0)
  /* 10D74C 8018EEEC 240C0201 */     addiu $t4, $zero, 0x201
  /* 10D750 8018EEF0 8D2A0340 */        lw $t2, 0x340($t1)
  /* 10D754 8018EEF4 AC4A0000 */        sw $t2, ($v0) # D_ovl65_801938CC + 0
  /* 10D758 8018EEF8 8D430000 */        lw $v1, ($t2)
  /* 10D75C 8018EEFC 10000014 */         b .L8018EF50
  /* 10D760 8018EF00 A46C0014 */        sh $t4, 0x14($v1)
  .L8018EF04:
  /* 10D764 8018EF04 3C100000 */       lui $s0, %hi(D_NF_00000019)
  /* 10D768 8018EF08 26100019 */     addiu $s0, $s0, %lo(D_NF_00000019)
  /* 10D76C 8018EF0C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 10D770 8018EF10 02002025 */        or $a0, $s0, $zero
  /* 10D774 8018EF14 00402025 */        or $a0, $v0, $zero
  /* 10D778 8018EF18 0C001260 */       jal hal_alloc
  /* 10D77C 8018EF1C 24050010 */     addiu $a1, $zero, 0x10
  /* 10D780 8018EF20 02002025 */        or $a0, $s0, $zero
  /* 10D784 8018EF24 0C033722 */       jal rldm_get_file_with_external_heap
  /* 10D788 8018EF28 00402825 */        or $a1, $v0, $zero
  /* 10D78C 8018EF2C 3C048019 */       lui $a0, %hi(D_ovl65_80193064)
  /* 10D790 8018EF30 3C0E0000 */       lui $t6, %hi(D_NF_00000080)
  /* 10D794 8018EF34 24843064 */     addiu $a0, $a0, %lo(D_ovl65_80193064)
  /* 10D798 8018EF38 25CE0080 */     addiu $t6, $t6, %lo(D_NF_00000080)
  /* 10D79C 8018EF3C AC820000 */        sw $v0, ($a0) # D_ovl65_80193064 + 0
  /* 10D7A0 8018EF40 004E1821 */      addu $v1, $v0, $t6
  /* 10D7A4 8018EF44 240F0201 */     addiu $t7, $zero, 0x201
  /* 10D7A8 8018EF48 A46F0014 */        sh $t7, 0x14($v1)
  /* 10D7AC 8018EF4C 00008025 */        or $s0, $zero, $zero
  .L8018EF50:
  /* 10D7B0 8018EF50 3C128000 */       lui $s2, 0x8000
  /* 10D7B4 8018EF54 02403825 */        or $a3, $s2, $zero
  /* 10D7B8 8018EF58 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 10D7BC 8018EF5C 00002825 */        or $a1, $zero, $zero
  /* 10D7C0 8018EF60 0C00265A */       jal omMakeGObjCommon
  /* 10D7C4 8018EF64 2406000B */     addiu $a2, $zero, 0xb
  /* 10D7C8 8018EF68 3C058019 */       lui $a1, %hi(func_ovl65_8018EBB8)
  /* 10D7CC 8018EF6C 2418FFFF */     addiu $t8, $zero, -1
  /* 10D7D0 8018EF70 00408825 */        or $s1, $v0, $zero
  /* 10D7D4 8018EF74 AFB80010 */        sw $t8, 0x10($sp)
  /* 10D7D8 8018EF78 24A5EBB8 */     addiu $a1, $a1, %lo(func_ovl65_8018EBB8)
  /* 10D7DC 8018EF7C 00402025 */        or $a0, $v0, $zero
  /* 10D7E0 8018EF80 24060017 */     addiu $a2, $zero, 0x17
  /* 10D7E4 8018EF84 0C00277D */       jal func_80009DF4
  /* 10D7E8 8018EF88 02403825 */        or $a3, $s2, $zero
  /* 10D7EC 8018EF8C 3C138019 */       lui $s3, %hi(D_ovl65_80192FA1)
  /* 10D7F0 8018EF90 26732FA1 */     addiu $s3, $s3, %lo(D_ovl65_80192FA1)
  /* 10D7F4 8018EF94 92630000 */       lbu $v1, ($s3) # D_ovl65_80192FA1 + 0
  /* 10D7F8 8018EF98 3C120000 */       lui $s2, %hi(D_NF_00000068)
  /* 10D7FC 8018EF9C 26520068 */     addiu $s2, $s2, %lo(D_NF_00000068)
  /* 10D800 8018EFA0 1860000B */      blez $v1, .L8018EFD0
  /* 10D804 8018EFA4 3C148013 */       lui $s4, %hi(D_ovl2_80130D40)
  /* 10D808 8018EFA8 26940D40 */     addiu $s4, $s4, %lo(D_ovl2_80130D40)
  /* 10D80C 8018EFAC 8E990010 */        lw $t9, 0x10($s4) # D_ovl2_80130D40 + 16
  .L8018EFB0:
  /* 10D810 8018EFB0 02202025 */        or $a0, $s1, $zero
  /* 10D814 8018EFB4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 10D818 8018EFB8 03322821 */      addu $a1, $t9, $s2
  /* 10D81C 8018EFBC 92630000 */       lbu $v1, ($s3) # D_ovl65_80192FA1 + 0
  /* 10D820 8018EFC0 26100001 */     addiu $s0, $s0, 1
  /* 10D824 8018EFC4 0203082A */       slt $at, $s0, $v1
  /* 10D828 8018EFC8 5420FFF9 */      bnel $at, $zero, .L8018EFB0
  /* 10D82C 8018EFCC 8E990010 */        lw $t9, 0x10($s4) # D_ovl2_80130D40 + 16
  .L8018EFD0:
  /* 10D830 8018EFD0 24680001 */     addiu $t0, $v1, 1
  /* 10D834 8018EFD4 3C018019 */       lui $at, %hi(D_ovl65_801938C8)
  /* 10D838 8018EFD8 A02838C8 */        sb $t0, %lo(D_ovl65_801938C8)($at)
  /* 10D83C 8018EFDC 8FBF0034 */        lw $ra, 0x34($sp)
  .L8018EFE0:
  /* 10D840 8018EFE0 8FB00020 */        lw $s0, 0x20($sp)
  /* 10D844 8018EFE4 8FB10024 */        lw $s1, 0x24($sp)
  /* 10D848 8018EFE8 8FB20028 */        lw $s2, 0x28($sp)
  /* 10D84C 8018EFEC 8FB3002C */        lw $s3, 0x2c($sp)
  /* 10D850 8018EFF0 8FB40030 */        lw $s4, 0x30($sp)
  /* 10D854 8018EFF4 03E00008 */        jr $ra
  /* 10D858 8018EFF8 27BD0040 */     addiu $sp, $sp, 0x40

  /* 10D85C 8018EFFC 3C09800A */       lui $t1, %hi(gpBattleState)
  /* 10D860 8018F000 000470C0 */       sll $t6, $a0, 3
  /* 10D864 8018F004 252950E8 */     addiu $t1, $t1, %lo(gpBattleState)
  /* 10D868 8018F008 01C47023 */      subu $t6, $t6, $a0
  /* 10D86C 8018F00C 8D270000 */        lw $a3, ($t1) # gpBattleState + 0
  /* 10D870 8018F010 000E7080 */       sll $t6, $t6, 2
  /* 10D874 8018F014 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10D878 8018F018 3C08800A */       lui $t0, %hi(gSceneData)
  /* 10D87C 8018F01C 01C47021 */      addu $t6, $t6, $a0
  /* 10D880 8018F020 25084AD0 */     addiu $t0, $t0, %lo(gSceneData)
  /* 10D884 8018F024 000E7080 */       sll $t6, $t6, 2
  /* 10D888 8018F028 910F0013 */       lbu $t7, 0x13($t0) # gSceneData + 19
  /* 10D88C 8018F02C AFBF0014 */        sw $ra, 0x14($sp)
  /* 10D890 8018F030 AFA5001C */        sw $a1, 0x1c($sp)
  /* 10D894 8018F034 00EE3021 */      addu $a2, $a3, $t6
  /* 10D898 8018F038 8CC20078 */        lw $v0, 0x78($a2)
  /* 10D89C 8018F03C 148F000D */       bne $a0, $t7, .L8018F074
  /* 10D8A0 8018F040 8C430084 */        lw $v1, 0x84($v0)
  /* 10D8A4 8018F044 80D8002B */        lb $t8, 0x2b($a2)
  /* 10D8A8 8018F048 2401FFFF */     addiu $at, $zero, -1
  /* 10D8AC 8018F04C 5701000A */      bnel $t8, $at, .L8018F078
  /* 10D8B0 8018F050 90CA002C */       lbu $t2, 0x2c($a2)
  /* 10D8B4 8018F054 90F90011 */       lbu $t9, 0x11($a3)
  /* 10D8B8 8018F058 24010005 */     addiu $at, $zero, 5
  /* 10D8BC 8018F05C 53210006 */      beql $t9, $at, .L8018F078
  /* 10D8C0 8018F060 90CA002C */       lbu $t2, 0x2c($a2)
  /* 10D8C4 8018F064 0C045320 */       jal ifDisplayBonusFailure
  /* 10D8C8 8018F068 00000000 */       nop 
  /* 10D8CC 8018F06C 10000051 */         b .L8018F1B4
  /* 10D8D0 8018F070 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018F074:
  /* 10D8D4 8018F074 90CA002C */       lbu $t2, 0x2c($a2)
  .L8018F078:
  /* 10D8D8 8018F078 3C048019 */       lui $a0, %hi(D_ovl65_801936A0)
  /* 10D8DC 8018F07C 248436A0 */     addiu $a0, $a0, %lo(D_ovl65_801936A0)
  /* 10D8E0 8018F080 1140004B */      beqz $t2, .L8018F1B0
  /* 10D8E4 8018F084 3C058019 */       lui $a1, %hi(D_ovl65_80192FA4)
  /* 10D8E8 8018F088 3C068019 */       lui $a2, %hi(D_ovl65_80192FA1)
  /* 10D8EC 8018F08C 24C62FA1 */     addiu $a2, $a2, %lo(D_ovl65_80192FA1)
  /* 10D8F0 8018F090 90CB0000 */       lbu $t3, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D8F4 8018F094 8FAE001C */        lw $t6, 0x1c($sp)
  /* 10D8F8 8018F098 24A52FA4 */     addiu $a1, $a1, %lo(D_ovl65_80192FA4)
  /* 10D8FC 8018F09C 8CAD0000 */        lw $t5, ($a1) # D_ovl65_80192FA4 + 0
  /* 10D900 8018F0A0 8C8A0000 */        lw $t2, ($a0) # D_ovl65_801936A0 + 0
  /* 10D904 8018F0A4 240F0001 */     addiu $t7, $zero, 1
  /* 10D908 8018F0A8 256CFFFF */     addiu $t4, $t3, -1
  /* 10D90C 8018F0AC 01CFC004 */      sllv $t8, $t7, $t6
  /* 10D910 8018F0B0 A0CC0000 */        sb $t4, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D914 8018F0B4 01B8C825 */        or $t9, $t5, $t8
  /* 10D918 8018F0B8 ACB90000 */        sw $t9, ($a1) # D_ovl65_80192FA4 + 0
  /* 10D91C 8018F0BC 000A5880 */       sll $t3, $t2, 2
  /* 10D920 8018F0C0 906F0015 */       lbu $t7, 0x15($v1)
  /* 10D924 8018F0C4 3C0C8019 */       lui $t4, %hi(D_ovl65_801933D0)
  /* 10D928 8018F0C8 016A5823 */      subu $t3, $t3, $t2
  /* 10D92C 8018F0CC 000B58C0 */       sll $t3, $t3, 3
  /* 10D930 8018F0D0 258C33D0 */     addiu $t4, $t4, %lo(D_ovl65_801933D0)
  /* 10D934 8018F0D4 016C1021 */      addu $v0, $t3, $t4
  /* 10D938 8018F0D8 AC4F0000 */        sw $t7, ($v0)
  /* 10D93C 8018F0DC 8C6E0024 */        lw $t6, 0x24($v1)
  /* 10D940 8018F0E0 24070004 */     addiu $a3, $zero, 4
  /* 10D944 8018F0E4 AC4E0004 */        sw $t6, 4($v0)
  /* 10D948 8018F0E8 8C6D080C */        lw $t5, 0x80c($v1)
  /* 10D94C 8018F0EC AC4D0008 */        sw $t5, 8($v0)
  /* 10D950 8018F0F0 8C780820 */        lw $t8, 0x820($v1)
  /* 10D954 8018F0F4 AC58000C */        sw $t8, 0xc($v0)
  /* 10D958 8018F0F8 8C790824 */        lw $t9, 0x824($v1)
  /* 10D95C 8018F0FC AC590010 */        sw $t9, 0x10($v0)
  /* 10D960 8018F100 946B0828 */       lhu $t3, 0x828($v1)
  /* 10D964 8018F104 A44B0014 */        sh $t3, 0x14($v0)
  /* 10D968 8018F108 946C082A */       lhu $t4, 0x82a($v1)
  /* 10D96C 8018F10C A44C0016 */        sh $t4, 0x16($v0)
  /* 10D970 8018F110 8C8F0000 */        lw $t7, ($a0) # D_ovl65_801936A0 + 0
  /* 10D974 8018F114 910D0017 */       lbu $t5, 0x17($t0)
  /* 10D978 8018F118 25EE0001 */     addiu $t6, $t7, 1
  /* 10D97C 8018F11C 14ED001F */       bne $a3, $t5, .L8018F19C
  /* 10D980 8018F120 AC8E0000 */        sw $t6, ($a0) # D_ovl65_801936A0 + 0
  /* 10D984 8018F124 8C780008 */        lw $t8, 8($v1)
  /* 10D988 8018F128 54F8001D */      bnel $a3, $t8, .L8018F1A0
  /* 10D98C 8018F12C 90CA0000 */       lbu $t2, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D990 8018F130 90D90000 */       lbu $t9, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D994 8018F134 5320001A */      beql $t9, $zero, .L8018F1A0
  /* 10D998 8018F138 90CA0000 */       lbu $t2, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D99C 8018F13C 91020013 */       lbu $v0, 0x13($t0)
  /* 10D9A0 8018F140 8C6A080C */        lw $t2, 0x80c($v1)
  /* 10D9A4 8018F144 00027080 */       sll $t6, $v0, 2
  /* 10D9A8 8018F148 544A0015 */      bnel $v0, $t2, .L8018F1A0
  /* 10D9AC 8018F14C 90CA0000 */       lbu $t2, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D9B0 8018F150 9064000D */       lbu $a0, 0xd($v1)
  /* 10D9B4 8018F154 24190001 */     addiu $t9, $zero, 1
  /* 10D9B8 8018F158 3C018019 */       lui $at, %hi(D_ovl65_801936A4)
  /* 10D9BC 8018F15C 14800003 */      bnez $a0, .L8018F16C
  /* 10D9C0 8018F160 2483FFFF */     addiu $v1, $a0, -1
  /* 10D9C4 8018F164 10000001 */         b .L8018F16C
  /* 10D9C8 8018F168 24030003 */     addiu $v1, $zero, 3
  .L8018F16C:
  /* 10D9CC 8018F16C 000360C0 */       sll $t4, $v1, 3
  /* 10D9D0 8018F170 01836023 */      subu $t4, $t4, $v1
  /* 10D9D4 8018F174 8D2B0000 */        lw $t3, ($t1)
  /* 10D9D8 8018F178 000C6080 */       sll $t4, $t4, 2
  /* 10D9DC 8018F17C 01836021 */      addu $t4, $t4, $v1
  /* 10D9E0 8018F180 000C6080 */       sll $t4, $t4, 2
  /* 10D9E4 8018F184 016C7821 */      addu $t7, $t3, $t4
  /* 10D9E8 8018F188 01EE6821 */      addu $t5, $t7, $t6
  /* 10D9EC 8018F18C 8DB8005C */        lw $t8, 0x5c($t5)
  /* 10D9F0 8018F190 57000003 */      bnel $t8, $zero, .L8018F1A0
  /* 10D9F4 8018F194 90CA0000 */       lbu $t2, ($a2) # D_ovl65_80192FA1 + 0
  /* 10D9F8 8018F198 AC3936A4 */        sw $t9, %lo(D_ovl65_801936A4)($at)
  .L8018F19C:
  /* 10D9FC 8018F19C 90CA0000 */       lbu $t2, ($a2) # D_ovl65_80192FA1 + 0
  .L8018F1A0:
  /* 10DA00 8018F1A0 55400004 */      bnel $t2, $zero, .L8018F1B4
  /* 10DA04 8018F1A4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DA08 8018F1A8 0C045320 */       jal ifDisplayBonusFailure
  /* 10DA0C 8018F1AC 00000000 */       nop 
  .L8018F1B0:
  /* 10DA10 8018F1B0 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018F1B4:
  /* 10DA14 8018F1B4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DA18 8018F1B8 03E00008 */        jr $ra
  /* 10DA1C 8018F1BC 00000000 */       nop 

glabel func_ovl65_8018F1C0
  /* 10DA20 8018F1C0 3C0E800A */       lui $t6, %hi((gSceneData + 0x17))
  /* 10DA24 8018F1C4 91CE4AE7 */       lbu $t6, %lo((gSceneData + 0x17))($t6)
  /* 10DA28 8018F1C8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10DA2C 8018F1CC 2401000B */     addiu $at, $zero, 0xb
  /* 10DA30 8018F1D0 11C10005 */       beq $t6, $at, .L8018F1E8
  /* 10DA34 8018F1D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DA38 8018F1D8 0C0438B5 */       jal func_ovl2_8010E2D4
  /* 10DA3C 8018F1DC 00000000 */       nop 
  /* 10DA40 8018F1E0 0C044639 */       jal func_ovl2_801118E4
  /* 10DA44 8018F1E4 00000000 */       nop 
  .L8018F1E8:
  /* 10DA48 8018F1E8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DA4C 8018F1EC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DA50 8018F1F0 03E00008 */        jr $ra
  /* 10DA54 8018F1F4 00000000 */       nop 

glabel func_ovl65_8018F1F8
  /* 10DA58 8018F1F8 3C0E800A */       lui $t6, %hi((gSceneData + 0x17))
  /* 10DA5C 8018F1FC 91CE4AE7 */       lbu $t6, %lo((gSceneData + 0x17))($t6)
  /* 10DA60 8018F200 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10DA64 8018F204 2401000B */     addiu $at, $zero, 0xb
  /* 10DA68 8018F208 11C10006 */       beq $t6, $at, .L8018F224
  /* 10DA6C 8018F20C AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DA70 8018F210 3C048011 */       lui $a0, %hi(func_ovl2_80114D98)
  /* 10DA74 8018F214 0C044CE6 */       jal func_ovl2_80113398
  /* 10DA78 8018F218 24844D98 */     addiu $a0, $a0, %lo(func_ovl2_80114D98)
  /* 10DA7C 8018F21C 10000005 */         b .L8018F234
  /* 10DA80 8018F220 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018F224:
  /* 10DA84 8018F224 3C048011 */       lui $a0, %hi(func_ovl2_80114DD4)
  /* 10DA88 8018F228 0C044CE6 */       jal func_ovl2_80113398
  /* 10DA8C 8018F22C 24844DD4 */     addiu $a0, $a0, %lo(func_ovl2_80114DD4)
  /* 10DA90 8018F230 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018F234:
  /* 10DA94 8018F234 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DA98 8018F238 03E00008 */        jr $ra
  /* 10DA9C 8018F23C 00000000 */       nop 

glabel func_ovl65_8018F240
  /* 10DAA0 8018F240 27BDFF80 */     addiu $sp, $sp, -0x80
  /* 10DAA4 8018F244 AFB70040 */        sw $s7, 0x40($sp)
  /* 10DAA8 8018F248 AFB2002C */        sw $s2, 0x2c($sp)
  /* 10DAAC 8018F24C 00809025 */        or $s2, $a0, $zero
  /* 10DAB0 8018F250 3C178019 */       lui $s7, %hi(D_ovl65_80192FE0)
  /* 10DAB4 8018F254 26F72FE0 */     addiu $s7, $s7, %lo(D_ovl65_80192FE0)
  /* 10DAB8 8018F258 F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 10DABC 8018F25C F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 10DAC0 8018F260 3C014780 */       lui $at, (0x47800000 >> 16) # 65536.0
  /* 10DAC4 8018F264 00127140 */       sll $t6, $s2, 5
  /* 10DAC8 8018F268 AFBF0044 */        sw $ra, 0x44($sp)
  /* 10DACC 8018F26C 4481A000 */      mtc1 $at, $f20 # 65536.0 to cop1
  /* 10DAD0 8018F270 4480B000 */      mtc1 $zero, $f22
  /* 10DAD4 8018F274 02EE7821 */      addu $t7, $s7, $t6
  /* 10DAD8 8018F278 AFB6003C */        sw $s6, 0x3c($sp)
  /* 10DADC 8018F27C AFB50038 */        sw $s5, 0x38($sp)
  /* 10DAE0 8018F280 AFB40034 */        sw $s4, 0x34($sp)
  /* 10DAE4 8018F284 AFB30030 */        sw $s3, 0x30($sp)
  /* 10DAE8 8018F288 AFB10028 */        sw $s1, 0x28($sp)
  /* 10DAEC 8018F28C AFB00024 */        sw $s0, 0x24($sp)
  /* 10DAF0 8018F290 8DE50000 */        lw $a1, ($t7)
  /* 10DAF4 8018F294 0C0634F6 */       jal func_ovl65_8018D3D8
  /* 10DAF8 8018F298 27A40058 */     addiu $a0, $sp, 0x58
  /* 10DAFC 8018F29C 3C15800A */       lui $s5, %hi(gpBattleState)
  /* 10DB00 8018F2A0 26B550E8 */     addiu $s5, $s5, %lo(gpBattleState)
  /* 10DB04 8018F2A4 00008025 */        or $s0, $zero, $zero
  /* 10DB08 8018F2A8 27B60064 */     addiu $s6, $sp, 0x64
  /* 10DB0C 8018F2AC 24140002 */     addiu $s4, $zero, 2
  /* 10DB10 8018F2B0 24130004 */     addiu $s3, $zero, 4
  /* 10DB14 8018F2B4 24110074 */     addiu $s1, $zero, 0x74
  .L8018F2B8:
  /* 10DB18 8018F2B8 52120026 */      beql $s0, $s2, .L8018F354
  /* 10DB1C 8018F2BC 26100001 */     addiu $s0, $s0, 1
  /* 10DB20 8018F2C0 02110019 */     multu $s0, $s1
  /* 10DB24 8018F2C4 8EA20000 */        lw $v0, ($s5) # gpBattleState + 0
  /* 10DB28 8018F2C8 0000C012 */      mflo $t8
  /* 10DB2C 8018F2CC 00581821 */      addu $v1, $v0, $t8
  /* 10DB30 8018F2D0 90790022 */       lbu $t9, 0x22($v1)
  /* 10DB34 8018F2D4 5299001F */      beql $s4, $t9, .L8018F354
  /* 10DB38 8018F2D8 26100001 */     addiu $s0, $s0, 1
  /* 10DB3C 8018F2DC 02510019 */     multu $s2, $s1
  /* 10DB40 8018F2E0 90680024 */       lbu $t0, 0x24($v1)
  /* 10DB44 8018F2E4 00106140 */       sll $t4, $s0, 5
  /* 10DB48 8018F2E8 02EC6821 */      addu $t5, $s7, $t4
  /* 10DB4C 8018F2EC 02C02025 */        or $a0, $s6, $zero
  /* 10DB50 8018F2F0 00004812 */      mflo $t1
  /* 10DB54 8018F2F4 00495021 */      addu $t2, $v0, $t1
  /* 10DB58 8018F2F8 914B0024 */       lbu $t3, 0x24($t2)
  /* 10DB5C 8018F2FC 510B0015 */      beql $t0, $t3, .L8018F354
  /* 10DB60 8018F300 26100001 */     addiu $s0, $s0, 1
  /* 10DB64 8018F304 0C0634F6 */       jal func_ovl65_8018D3D8
  /* 10DB68 8018F308 8DA50000 */        lw $a1, ($t5)
  /* 10DB6C 8018F30C C7AC0064 */      lwc1 $f12, 0x64($sp)
  /* 10DB70 8018F310 C7AE0058 */      lwc1 $f14, 0x58($sp)
  /* 10DB74 8018F314 460E603C */    c.lt.s $f12, $f14
  /* 10DB78 8018F318 00000000 */       nop 
  /* 10DB7C 8018F31C 45020005 */     bc1fl .L8018F334
  /* 10DB80 8018F320 460E6001 */     sub.s $f0, $f12, $f14
  /* 10DB84 8018F324 460E6001 */     sub.s $f0, $f12, $f14
  /* 10DB88 8018F328 10000003 */         b .L8018F338
  /* 10DB8C 8018F32C 46000087 */     neg.s $f2, $f0
  /* 10DB90 8018F330 460E6001 */     sub.s $f0, $f12, $f14
  .L8018F334:
  /* 10DB94 8018F334 46000086 */     mov.s $f2, $f0
  .L8018F338:
  /* 10DB98 8018F338 4614103C */    c.lt.s $f2, $f20
  /* 10DB9C 8018F33C 00000000 */       nop 
  /* 10DBA0 8018F340 45020004 */     bc1fl .L8018F354
  /* 10DBA4 8018F344 26100001 */     addiu $s0, $s0, 1
  /* 10DBA8 8018F348 46001506 */     mov.s $f20, $f2
  /* 10DBAC 8018F34C 46000586 */     mov.s $f22, $f0
  /* 10DBB0 8018F350 26100001 */     addiu $s0, $s0, 1
  .L8018F354:
  /* 10DBB4 8018F354 1613FFD8 */       bne $s0, $s3, .L8018F2B8
  /* 10DBB8 8018F358 00000000 */       nop 
  /* 10DBBC 8018F35C 44802000 */      mtc1 $zero, $f4
  /* 10DBC0 8018F360 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 10DBC4 8018F364 8FB00024 */        lw $s0, 0x24($sp)
  /* 10DBC8 8018F368 4616203E */    c.le.s $f4, $f22
  /* 10DBCC 8018F36C D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 10DBD0 8018F370 8FB10028 */        lw $s1, 0x28($sp)
  /* 10DBD4 8018F374 8FB2002C */        lw $s2, 0x2c($sp)
  /* 10DBD8 8018F378 45000003 */      bc1f .L8018F388
  /* 10DBDC 8018F37C 8FB30030 */        lw $s3, 0x30($sp)
  /* 10DBE0 8018F380 10000002 */         b .L8018F38C
  /* 10DBE4 8018F384 24030001 */     addiu $v1, $zero, 1
  .L8018F388:
  /* 10DBE8 8018F388 2403FFFF */     addiu $v1, $zero, -1
  .L8018F38C:
  /* 10DBEC 8018F38C 8FBF0044 */        lw $ra, 0x44($sp)
  /* 10DBF0 8018F390 8FB40034 */        lw $s4, 0x34($sp)
  /* 10DBF4 8018F394 8FB50038 */        lw $s5, 0x38($sp)
  /* 10DBF8 8018F398 8FB6003C */        lw $s6, 0x3c($sp)
  /* 10DBFC 8018F39C 8FB70040 */        lw $s7, 0x40($sp)
  /* 10DC00 8018F3A0 27BD0080 */     addiu $sp, $sp, 0x80
  /* 10DC04 8018F3A4 03E00008 */        jr $ra
  /* 10DC08 8018F3A8 00601025 */        or $v0, $v1, $zero

  /* 10DC0C 8018F3AC 3C0F800A */       lui $t7, %hi((gSceneData + 0x13))
  /* 10DC10 8018F3B0 91EF4AE3 */       lbu $t7, %lo((gSceneData + 0x13))($t7)
  /* 10DC14 8018F3B4 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 10DC18 8018F3B8 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 10DC1C 8018F3BC 000FC0C0 */       sll $t8, $t7, 3
  /* 10DC20 8018F3C0 030FC023 */      subu $t8, $t8, $t7
  /* 10DC24 8018F3C4 0018C080 */       sll $t8, $t8, 2
  /* 10DC28 8018F3C8 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 10DC2C 8018F3CC 030FC021 */      addu $t8, $t8, $t7
  /* 10DC30 8018F3D0 0018C080 */       sll $t8, $t8, 2
  /* 10DC34 8018F3D4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 10DC38 8018F3D8 AFB00020 */        sw $s0, 0x20($sp)
  /* 10DC3C 8018F3DC 01D8C821 */      addu $t9, $t6, $t8
  /* 10DC40 8018F3E0 8F300078 */        lw $s0, 0x78($t9)
  /* 10DC44 8018F3E4 24040006 */     addiu $a0, $zero, 6
  /* 10DC48 8018F3E8 8E080084 */        lw $t0, 0x84($s0)
  /* 10DC4C 8018F3EC 0C006265 */       jal lbRandom_GetIntRange
  /* 10DC50 8018F3F0 AFA80030 */        sw $t0, 0x30($sp)
  /* 10DC54 8018F3F4 AFA20028 */        sw $v0, 0x28($sp)
  /* 10DC58 8018F3F8 0C006265 */       jal lbRandom_GetIntRange
  /* 10DC5C 8018F3FC 24040004 */     addiu $a0, $zero, 4
  /* 10DC60 8018F400 3C018019 */       lui $at, %hi(D_ovl65_80192F28)
  /* 10DC64 8018F404 C4202F28 */      lwc1 $f0, %lo(D_ovl65_80192F28)($at)
  /* 10DC68 8018F408 8FA90028 */        lw $t1, 0x28($sp)
  /* 10DC6C 8018F40C 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 10DC70 8018F410 44811000 */      mtc1 $at, $f2 # 180.0 to cop1
  /* 10DC74 8018F414 3C018019 */       lui $at, %hi(D_ovl65_80192808)
  /* 10DC78 8018F418 00095080 */       sll $t2, $t1, 2
  /* 10DC7C 8018F41C 002A0821 */      addu $at, $at, $t2
  /* 10DC80 8018F420 C4242808 */      lwc1 $f4, %lo(D_ovl65_80192808)($at)
  /* 10DC84 8018F424 8FAB0030 */        lw $t3, 0x30($sp)
  /* 10DC88 8018F428 3C018019 */       lui $at, %hi(D_ovl65_80192820)
  /* 10DC8C 8018F42C 46002182 */     mul.s $f6, $f4, $f0
  /* 10DC90 8018F430 8D6C0044 */        lw $t4, 0x44($t3)
  /* 10DC94 8018F434 00026880 */       sll $t5, $v0, 2
  /* 10DC98 8018F438 002D0821 */      addu $at, $at, $t5
  /* 10DC9C 8018F43C 448C5000 */      mtc1 $t4, $f10
  /* 10DCA0 8018F440 C4242820 */      lwc1 $f4, %lo(D_ovl65_80192820)($at)
  /* 10DCA4 8018F444 8E0F0084 */        lw $t7, 0x84($s0)
  /* 10DCA8 8018F448 46023203 */     div.s $f8, $f6, $f2
  /* 10DCAC 8018F44C 3C018019 */       lui $at, %hi(D_ovl65_80192F2C)
  /* 10DCB0 8018F450 8DEE09C8 */        lw $t6, 0x9c8($t7)
  /* 10DCB4 8018F454 02002025 */        or $a0, $s0, $zero
  /* 10DCB8 8018F458 46805420 */   cvt.s.w $f16, $f10
  /* 10DCBC 8018F45C 8DC70090 */        lw $a3, 0x90($t6)
  /* 10DCC0 8018F460 46104482 */     mul.s $f18, $f8, $f16
  /* 10DCC4 8018F464 C4282F2C */      lwc1 $f8, %lo(D_ovl65_80192F2C)($at)
  /* 10DCC8 8018F468 3C0141E0 */       lui $at, (0x41E00000 >> 16) # 28.0
  /* 10DCCC 8018F46C 46002182 */     mul.s $f6, $f4, $f0
  /* 10DCD0 8018F470 44818000 */      mtc1 $at, $f16 # 28.0 to cop1
  /* 10DCD4 8018F474 E7A80010 */      swc1 $f8, 0x10($sp)
  /* 10DCD8 8018F478 44059000 */      mfc1 $a1, $f18
  /* 10DCDC 8018F47C E7B00014 */      swc1 $f16, 0x14($sp)
  /* 10DCE0 8018F480 46023283 */     div.s $f10, $f6, $f2
  /* 10DCE4 8018F484 44065000 */      mfc1 $a2, $f10
  /* 10DCE8 8018F488 0C0433D1 */       jal func_ovl2_8010CF44
  /* 10DCEC 8018F48C 00000000 */       nop 
  /* 10DCF0 8018F490 02002025 */        or $a0, $s0, $zero
  /* 10DCF4 8018F494 0C03A466 */       jal ftCommon_SetModelPartLevelDetailAll
  /* 10DCF8 8018F498 24050001 */     addiu $a1, $zero, 1
  /* 10DCFC 8018F49C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 10DD00 8018F4A0 8FB00020 */        lw $s0, 0x20($sp)
  /* 10DD04 8018F4A4 27BD0038 */     addiu $sp, $sp, 0x38
  /* 10DD08 8018F4A8 03E00008 */        jr $ra
  /* 10DD0C 8018F4AC 00000000 */       nop 

glabel func_ovl65_8018F4B0
  /* 10DD10 8018F4B0 44800000 */      mtc1 $zero, $f0
  /* 10DD14 8018F4B4 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 10DD18 8018F4B8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DD1C 8018F4BC E7A0002C */      swc1 $f0, 0x2c($sp)
  /* 10DD20 8018F4C0 E7A00028 */      swc1 $f0, 0x28($sp)
  /* 10DD24 8018F4C4 E7A00024 */      swc1 $f0, 0x24($sp)
  /* 10DD28 8018F4C8 8C8E0804 */        lw $t6, 0x804($a0)
  /* 10DD2C 8018F4CC 27A50024 */     addiu $a1, $sp, 0x24
  /* 10DD30 8018F4D0 000E7880 */       sll $t7, $t6, 2
  /* 10DD34 8018F4D4 008FC021 */      addu $t8, $a0, $t7
  /* 10DD38 8018F4D8 0C03B7C9 */       jal func_ovl2_800EDF24
  /* 10DD3C 8018F4DC 8F0408E8 */        lw $a0, 0x8e8($t8)
  /* 10DD40 8018F4E0 27A40024 */     addiu $a0, $sp, 0x24
  /* 10DD44 8018F4E4 8C890000 */        lw $t1, ($a0)
  /* 10DD48 8018F4E8 3C198019 */       lui $t9, %hi(D_ovl65_80192FD0)
  /* 10DD4C 8018F4EC 27392FD0 */     addiu $t9, $t9, %lo(D_ovl65_80192FD0)
  /* 10DD50 8018F4F0 AF290000 */        sw $t1, ($t9) # D_ovl65_80192FD0 + 0
  /* 10DD54 8018F4F4 8C880004 */        lw $t0, 4($a0)
  /* 10DD58 8018F4F8 3C018019 */       lui $at, %hi(D_ovl65_80192F30)
  /* 10DD5C 8018F4FC 27A50018 */     addiu $a1, $sp, 0x18
  /* 10DD60 8018F500 AF280004 */        sw $t0, 4($t9) # D_ovl65_80192FD0 + 4
  /* 10DD64 8018F504 8C890008 */        lw $t1, 8($a0)
  /* 10DD68 8018F508 AF290008 */        sw $t1, 8($t9) # D_ovl65_80192FD0 + 8
  /* 10DD6C 8018F50C C42A2F30 */      lwc1 $f10, %lo(D_ovl65_80192F30)($at)
  /* 10DD70 8018F510 C7A8002C */      lwc1 $f8, 0x2c($sp)
  /* 10DD74 8018F514 C7A40024 */      lwc1 $f4, 0x24($sp)
  /* 10DD78 8018F518 C7A60028 */      lwc1 $f6, 0x28($sp)
  /* 10DD7C 8018F51C 460A4400 */     add.s $f16, $f8, $f10
  /* 10DD80 8018F520 E7A40018 */      swc1 $f4, 0x18($sp)
  /* 10DD84 8018F524 E7A6001C */      swc1 $f6, 0x1c($sp)
  /* 10DD88 8018F528 0C043429 */       jal func_ovl2_8010D0A4
  /* 10DD8C 8018F52C E7B00020 */      swc1 $f16, 0x20($sp)
  /* 10DD90 8018F530 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DD94 8018F534 27BD0030 */     addiu $sp, $sp, 0x30
  /* 10DD98 8018F538 03E00008 */        jr $ra
  /* 10DD9C 8018F53C 00000000 */       nop 

glabel func_ovl65_8018F540
  /* 10DDA0 8018F540 3C028004 */       lui $v0, %hi(gOMObjCommonLinks + (0x03 * 4))
  /* 10DDA4 8018F544 8C4266FC */        lw $v0, %lo(gOMObjCommonLinks + (0x03 * 4))($v0)
  /* 10DDA8 8018F548 10400008 */      beqz $v0, .L8018F56C
  /* 10DDAC 8018F54C 00000000 */       nop 
  /* 10DDB0 8018F550 8C430084 */        lw $v1, 0x84($v0)
  .L8018F554:
  /* 10DDB4 8018F554 906F018E */       lbu $t7, 0x18e($v1)
  /* 10DDB8 8018F558 35F80008 */       ori $t8, $t7, 8
  /* 10DDBC 8018F55C A078018E */        sb $t8, 0x18e($v1)
  /* 10DDC0 8018F560 8C420004 */        lw $v0, 4($v0)
  /* 10DDC4 8018F564 5440FFFB */      bnel $v0, $zero, .L8018F554
  /* 10DDC8 8018F568 8C430084 */        lw $v1, 0x84($v0)
  .L8018F56C:
  /* 10DDCC 8018F56C 03E00008 */        jr $ra
  /* 10DDD0 8018F570 00000000 */       nop 

glabel func_ovl65_8018F574
  /* 10DDD4 8018F574 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10DDD8 8018F578 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DDDC 8018F57C AFA5001C */        sw $a1, 0x1c($sp)
  /* 10DDE0 8018F580 8C850084 */        lw $a1, 0x84($a0)
  /* 10DDE4 8018F584 2401000C */     addiu $at, $zero, 0xc
  /* 10DDE8 8018F588 8CAE0008 */        lw $t6, 8($a1)
  /* 10DDEC 8018F58C 55C10004 */      bnel $t6, $at, .L8018F5A0
  /* 10DDF0 8018F590 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DDF4 8018F594 0C04525A */       jal func_ovl2_80114968
  /* 10DDF8 8018F598 00A02025 */        or $a0, $a1, $zero
  /* 10DDFC 8018F59C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018F5A0:
  /* 10DE00 8018F5A0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DE04 8018F5A4 03E00008 */        jr $ra
  /* 10DE08 8018F5A8 00000000 */       nop 

glabel func_ovl65_8018F5AC
  /* 10DE0C 8018F5AC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10DE10 8018F5B0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DE14 8018F5B4 0C039FC5 */       jal ftCommon_ResetControllerInputs
  /* 10DE18 8018F5B8 AFA5001C */        sw $a1, 0x1c($sp)
  /* 10DE1C 8018F5BC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DE20 8018F5C0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DE24 8018F5C4 03E00008 */        jr $ra
  /* 10DE28 8018F5C8 00000000 */       nop 

glabel func_ovl65_8018F5CC
  /* 10DE2C 8018F5CC AFA50004 */        sw $a1, 4($sp)
  /* 10DE30 8018F5D0 8C820084 */        lw $v0, 0x84($a0)
  /* 10DE34 8018F5D4 904F018D */       lbu $t7, 0x18d($v0)
  /* 10DE38 8018F5D8 35F80002 */       ori $t8, $t7, 2
  /* 10DE3C 8018F5DC 03E00008 */        jr $ra
  /* 10DE40 8018F5E0 A058018D */        sb $t8, 0x18d($v0)

  /* 10DE44 8018F5E4 03E00008 */        jr $ra
  /* 10DE48 8018F5E8 00000000 */       nop 

glabel func_ovl65_8018F5EC
  /* 10DE4C 8018F5EC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 10DE50 8018F5F0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DE54 8018F5F4 3C058019 */       lui $a1, %hi(func_ovl65_8018F574)
  /* 10DE58 8018F5F8 24A5F574 */     addiu $a1, $a1, %lo(func_ovl65_8018F574)
  /* 10DE5C 8018F5FC 24040003 */     addiu $a0, $zero, 3
  /* 10DE60 8018F600 0C002BBC */       jal func_8000AEF0
  /* 10DE64 8018F604 00003025 */        or $a2, $zero, $zero
  /* 10DE68 8018F608 3C058019 */       lui $a1, %hi(func_ovl65_8018F5AC)
  /* 10DE6C 8018F60C 24A5F5AC */     addiu $a1, $a1, %lo(func_ovl65_8018F5AC)
  /* 10DE70 8018F610 24040003 */     addiu $a0, $zero, 3
  /* 10DE74 8018F614 0C002BBC */       jal func_8000AEF0
  /* 10DE78 8018F618 00003025 */        or $a2, $zero, $zero
  /* 10DE7C 8018F61C 3C058019 */       lui $a1, %hi(func_ovl65_8018F5CC)
  /* 10DE80 8018F620 24A5F5CC */     addiu $a1, $a1, %lo(func_ovl65_8018F5CC)
  /* 10DE84 8018F624 24040003 */     addiu $a0, $zero, 3
  /* 10DE88 8018F628 0C002BBC */       jal func_8000AEF0
  /* 10DE8C 8018F62C 00003025 */        or $a2, $zero, $zero
  /* 10DE90 8018F630 3C048011 */       lui $a0, %hi(func_ovl2_80113638)
  /* 10DE94 8018F634 24843638 */     addiu $a0, $a0, %lo(func_ovl2_80113638)
  /* 10DE98 8018F638 0C002BD6 */       jal func_8000AF58
  /* 10DE9C 8018F63C 00002825 */        or $a1, $zero, $zero
  /* 10DEA0 8018F640 3C058011 */       lui $a1, %hi(func_ovl2_8011366C)
  /* 10DEA4 8018F644 24A5366C */     addiu $a1, $a1, %lo(func_ovl2_8011366C)
  /* 10DEA8 8018F648 AFA5001C */        sw $a1, 0x1c($sp)
  /* 10DEAC 8018F64C 24040009 */     addiu $a0, $zero, 9
  /* 10DEB0 8018F650 0C002BBC */       jal func_8000AEF0
  /* 10DEB4 8018F654 00003025 */        or $a2, $zero, $zero
  /* 10DEB8 8018F658 0C04560D */       jal func_ovl2_80115834
  /* 10DEBC 8018F65C 00000000 */       nop 
  /* 10DEC0 8018F660 2404000B */     addiu $a0, $zero, 0xb
  /* 10DEC4 8018F664 8FA5001C */        lw $a1, 0x1c($sp)
  /* 10DEC8 8018F668 0C002BBC */       jal func_8000AEF0
  /* 10DECC 8018F66C 00003025 */        or $a2, $zero, $zero
  /* 10DED0 8018F670 24040006 */     addiu $a0, $zero, 6
  /* 10DED4 8018F674 8FA5001C */        lw $a1, 0x1c($sp)
  /* 10DED8 8018F678 0C002BBC */       jal func_8000AEF0
  /* 10DEDC 8018F67C 00003025 */        or $a2, $zero, $zero
  /* 10DEE0 8018F680 0C06442C */       jal func_ovl65_801910B0
  /* 10DEE4 8018F684 00000000 */       nop 
  /* 10DEE8 8018F688 0C0099A8 */       jal func_800266A0
  /* 10DEEC 8018F68C 00000000 */       nop 
  /* 10DEF0 8018F690 0C00829D */       jal func_80020A74
  /* 10DEF4 8018F694 00000000 */       nop 
  /* 10DEF8 8018F698 0C044DE7 */       jal func_ovl2_8011379C
  /* 10DEFC 8018F69C 00000000 */       nop 
  /* 10DF00 8018F6A0 0C009A70 */       jal func_800269C0
  /* 10DF04 8018F6A4 24040001 */     addiu $a0, $zero, 1
  /* 10DF08 8018F6A8 0C009A70 */       jal func_800269C0
  /* 10DF0C 8018F6AC 240401EC */     addiu $a0, $zero, 0x1ec
  /* 10DF10 8018F6B0 0C009A70 */       jal func_800269C0
  /* 10DF14 8018F6B4 240400AC */     addiu $a0, $zero, 0xac
  /* 10DF18 8018F6B8 3C02800A */       lui $v0, %hi(D_8009EDD0)
  /* 10DF1C 8018F6BC 2442EDD0 */     addiu $v0, $v0, %lo(D_8009EDD0)
  /* 10DF20 8018F6C0 944E0028 */       lhu $t6, 0x28($v0) # D_8009EDD0 + 40
  /* 10DF24 8018F6C4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DF28 8018F6C8 3C018019 */       lui $at, %hi(D_ovl65_80192FDC)
  /* 10DF2C 8018F6CC A42E2FDC */        sh $t6, %lo(D_ovl65_80192FDC)($at)
  /* 10DF30 8018F6D0 A4400028 */        sh $zero, 0x28($v0) # D_8009EDD0 + 40
  /* 10DF34 8018F6D4 03E00008 */        jr $ra
  /* 10DF38 8018F6D8 27BD0020 */     addiu $sp, $sp, 0x20

  /* 10DF3C 8018F6DC 3C0E8019 */       lui $t6, %hi(D_ovl65_80192FDC)
  /* 10DF40 8018F6E0 95CE2FDC */       lhu $t6, %lo(D_ovl65_80192FDC)($t6)
  /* 10DF44 8018F6E4 3C01800A */       lui $at, %hi(D_8009EDF8)
  /* 10DF48 8018F6E8 03E00008 */        jr $ra
  /* 10DF4C 8018F6EC A42EEDF8 */        sh $t6, %lo(D_8009EDF8)($at)

glabel func_ovl65_8018F6F0
  /* 10DF50 8018F6F0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10DF54 8018F6F4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DF58 8018F6F8 3C048011 */       lui $a0, %hi(func_ovl2_8011366C)
  /* 10DF5C 8018F6FC 2484366C */     addiu $a0, $a0, %lo(func_ovl2_8011366C)
  /* 10DF60 8018F700 0C002BD6 */       jal func_8000AF58
  /* 10DF64 8018F704 00002825 */        or $a1, $zero, $zero
  /* 10DF68 8018F708 0C064445 */       jal func_ovl65_80191114
  /* 10DF6C 8018F70C 00000000 */       nop 
  /* 10DF70 8018F710 3C0E8013 */       lui $t6, %hi(gpGroundInfo)
  /* 10DF74 8018F714 8DCE1300 */        lw $t6, %lo(gpGroundInfo)($t6)
  /* 10DF78 8018F718 3C180000 */       lui $t8, %hi(D_NF_00004D48)
  /* 10DF7C 8018F71C 27184D48 */     addiu $t8, $t8, %lo(D_NF_00004D48)
  /* 10DF80 8018F720 8DCF0010 */        lw $t7, 0x10($t6)
  /* 10DF84 8018F724 3C080000 */       lui $t0, %hi(D_NF_00006450)
  /* 10DF88 8018F728 25086450 */     addiu $t0, $t0, %lo(D_NF_00006450)
  /* 10DF8C 8018F72C 3C068019 */       lui $a2, %hi(D_ovl65_80192FD0)
  /* 10DF90 8018F730 01F8C823 */      subu $t9, $t7, $t8
  /* 10DF94 8018F734 03282021 */      addu $a0, $t9, $t0
  /* 10DF98 8018F738 24C62FD0 */     addiu $a2, $a2, %lo(D_ovl65_80192FD0)
  /* 10DF9C 8018F73C 0C04340C */       jal func_ovl2_8010D030
  /* 10DFA0 8018F740 24050000 */     addiu $a1, $zero, 0
  /* 10DFA4 8018F744 0C0452F9 */       jal func_ovl2_80114BE4
  /* 10DFA8 8018F748 00000000 */       nop 
  /* 10DFAC 8018F74C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10DFB0 8018F750 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10DFB4 8018F754 03E00008 */        jr $ra
  /* 10DFB8 8018F758 00000000 */       nop 

  /* 10DFBC 8018F75C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 10DFC0 8018F760 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10DFC4 8018F764 8C8E0084 */        lw $t6, 0x84($a0)
  /* 10DFC8 8018F768 3C018013 */       lui $at, %hi(D_ovl2_80131580)
  /* 10DFCC 8018F76C A0201580 */        sb $zero, %lo(D_ovl2_80131580)($at)
  /* 10DFD0 8018F770 0C063D50 */       jal func_ovl65_8018F540
  /* 10DFD4 8018F774 AFAE001C */        sw $t6, 0x1c($sp)
  /* 10DFD8 8018F778 0C043DDB */       jal func_ovl2_8010F76C
  /* 10DFDC 8018F77C 8FA4001C */        lw $a0, 0x1c($sp)
  /* 10DFE0 8018F780 0C063D2C */       jal func_ovl65_8018F4B0
  /* 10DFE4 8018F784 8FA4001C */        lw $a0, 0x1c($sp)
  /* 10DFE8 8018F788 3C048019 */       lui $a0, %hi(func_ovl65_8018F5EC)
  /* 10DFEC 8018F78C 3C058019 */       lui $a1, %hi(func_ovl65_8018F6F0)
  /* 10DFF0 8018F790 24A5F6F0 */     addiu $a1, $a1, %lo(func_ovl65_8018F6F0)
  /* 10DFF4 8018F794 2484F5EC */     addiu $a0, $a0, %lo(func_ovl65_8018F5EC)
  /* 10DFF8 8018F798 240602B7 */     addiu $a2, $zero, 0x2b7
  /* 10DFFC 8018F79C 0C0452E0 */       jal func_ovl2_80114B80
  /* 10E000 8018F7A0 2407005A */     addiu $a3, $zero, 0x5a
  /* 10E004 8018F7A4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10E008 8018F7A8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 10E00C 8018F7AC 03E00008 */        jr $ra
  /* 10E010 8018F7B0 00000000 */       nop 

glabel func_ovl65_8018F7B4
  /* 10E014 8018F7B4 27BDFF38 */     addiu $sp, $sp, -0xc8
  /* 10E018 8018F7B8 AFBF0034 */        sw $ra, 0x34($sp)
  /* 10E01C 8018F7BC AFB30030 */        sw $s3, 0x30($sp)
  /* 10E020 8018F7C0 AFB2002C */        sw $s2, 0x2c($sp)
  /* 10E024 8018F7C4 AFB10028 */        sw $s1, 0x28($sp)
  /* 10E028 8018F7C8 0C063583 */       jal func_ovl65_8018D60C
  /* 10E02C 8018F7CC AFB00024 */        sw $s0, 0x24($sp)
  /* 10E030 8018F7D0 0C063430 */       jal func_ovl65_8018D0C0
  /* 10E034 8018F7D4 00000000 */       nop 
  /* 10E038 8018F7D8 3C13800A */       lui $s3, %hi(gSaveData)
  /* 10E03C 8018F7DC 267344E0 */     addiu $s3, $s3, %lo(gSaveData)
  /* 10E040 8018F7E0 926E05E2 */       lbu $t6, 0x5e2($s3) # gSaveData + 1506
  /* 10E044 8018F7E4 31CF0008 */      andi $t7, $t6, 8
  /* 10E048 8018F7E8 55E00029 */      bnel $t7, $zero, .L8018F890
  /* 10E04C 8018F7EC 240C00FF */     addiu $t4, $zero, 0xff
  /* 10E050 8018F7F0 927805E3 */       lbu $t8, 0x5e3($s3) # gSaveData + 1507
  /* 10E054 8018F7F4 24040F10 */     addiu $a0, $zero, 0xf10
  /* 10E058 8018F7F8 27A500A0 */     addiu $a1, $sp, 0xa0
  /* 10E05C 8018F7FC 2B01005D */      slti $at, $t8, 0x5d
  /* 10E060 8018F800 54200023 */      bnel $at, $zero, .L8018F890
  /* 10E064 8018F804 240C00FF */     addiu $t4, $zero, 0xff
  /* 10E068 8018F808 0C000B28 */       jal dma_rom_read
  /* 10E06C 8018F80C 24060010 */     addiu $a2, $zero, 0x10
  /* 10E070 8018F810 3C100000 */       lui $s0, %hi(D_NF_000000C8)
  /* 10E074 8018F814 261000C8 */     addiu $s0, $s0, %lo(D_NF_000000C8)
  /* 10E078 8018F818 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 10E07C 8018F81C 02002025 */        or $a0, $s0, $zero
  /* 10E080 8018F820 00402025 */        or $a0, $v0, $zero
  /* 10E084 8018F824 0C001260 */       jal hal_alloc
  /* 10E088 8018F828 24050010 */     addiu $a1, $zero, 0x10
  /* 10E08C 8018F82C 02002025 */        or $a0, $s0, $zero
  /* 10E090 8018F830 0C033722 */       jal rldm_get_file_with_external_heap
  /* 10E094 8018F834 00402825 */        or $a1, $v0, $zero
  /* 10E098 8018F838 3C190000 */       lui $t9, %hi(D_NF_00000000)
  /* 10E09C 8018F83C 3C110000 */       lui $s1, %hi(D_NF_00000040)
  /* 10E0A0 8018F840 27390000 */     addiu $t9, $t9, %lo(D_NF_00000000)
  /* 10E0A4 8018F844 26310040 */     addiu $s1, $s1, %lo(D_NF_00000040)
  /* 10E0A8 8018F848 00592021 */      addu $a0, $v0, $t9
  /* 10E0AC 8018F84C 00514021 */      addu $t0, $v0, $s1
  /* 10E0B0 8018F850 00409025 */        or $s2, $v0, $zero
  /* 10E0B4 8018F854 00808025 */        or $s0, $a0, $zero
  /* 10E0B8 8018F858 0C00C874 */       jal osWritebackDCache
  /* 10E0BC 8018F85C 8D050000 */        lw $a1, ($t0)
  /* 10E0C0 8018F860 02514821 */      addu $t1, $s2, $s1
  /* 10E0C4 8018F864 8D250000 */        lw $a1, ($t1)
  /* 10E0C8 8018F868 0C00D12C */       jal osInvalICache
  /* 10E0CC 8018F86C 02002025 */        or $a0, $s0, $zero
  /* 10E0D0 8018F870 0200F809 */      jalr $s0
  /* 10E0D4 8018F874 27A400A0 */     addiu $a0, $sp, 0xa0
  /* 10E0D8 8018F878 54400005 */      bnel $v0, $zero, .L8018F890
  /* 10E0DC 8018F87C 240C00FF */     addiu $t4, $zero, 0xff
  /* 10E0E0 8018F880 926A05E2 */       lbu $t2, 0x5e2($s3) # gSaveData + 1506
  /* 10E0E4 8018F884 354B0008 */       ori $t3, $t2, 8
  /* 10E0E8 8018F888 A26B05E2 */        sb $t3, 0x5e2($s3) # gSaveData + 1506
  /* 10E0EC 8018F88C 240C00FF */     addiu $t4, $zero, 0xff
  .L8018F890:
  /* 10E0F0 8018F890 AFAC0010 */        sw $t4, 0x10($sp)
  /* 10E0F4 8018F894 24040009 */     addiu $a0, $zero, 9
  /* 10E0F8 8018F898 3C058000 */       lui $a1, 0x8000
  /* 10E0FC 8018F89C 24060064 */     addiu $a2, $zero, 0x64
  /* 10E100 8018F8A0 0C002E7F */       jal func_8000B9FC
  /* 10E104 8018F8A4 24070001 */     addiu $a3, $zero, 1
  /* 10E108 8018F8A8 0C045624 */       jal func_ovl2_80115890
  /* 10E10C 8018F8AC 00000000 */       nop 
  /* 10E110 8018F8B0 0C03B04C */       jal func_ovl2_800EC130
  /* 10E114 8018F8B4 00000000 */       nop 
  /* 10E118 8018F8B8 0C03F0A1 */       jal func_ovl2_800FC284
  /* 10E11C 8018F8BC 00000000 */       nop 
  /* 10E120 8018F8C0 2404000A */     addiu $a0, $zero, 0xa
  /* 10E124 8018F8C4 2405000A */     addiu $a1, $zero, 0xa
  /* 10E128 8018F8C8 24060136 */     addiu $a2, $zero, 0x136
  /* 10E12C 8018F8CC 0C043966 */       jal func_ovl2_8010E598
  /* 10E130 8018F8D0 240700E6 */     addiu $a3, $zero, 0xe6
  /* 10E134 8018F8D4 0C0436D5 */       jal func_ovl2_8010DB54
  /* 10E138 8018F8D8 00000000 */       nop 
  /* 10E13C 8018F8DC 0C0412F7 */       jal func_ovl2_80104BDC
  /* 10E140 8018F8E0 00000000 */       nop 
  /* 10E144 8018F8E4 0C0436C0 */       jal func_ovl2_8010DB00
  /* 10E148 8018F8E8 00000000 */       nop 
  /* 10E14C 8018F8EC 0C05B7A8 */       jal itManager_AllocUserData
  /* 10E150 8018F8F0 00000000 */       nop 
  /* 10E154 8018F8F4 0C041580 */       jal func_ovl2_80105600
  /* 10E158 8018F8F8 00000000 */       nop 
  /* 10E15C 8018F8FC 24040002 */     addiu $a0, $zero, 2
  /* 10E160 8018F900 0C035C65 */       jal func_ovl2_800D7194
  /* 10E164 8018F904 24050004 */     addiu $a1, $zero, 4
  /* 10E168 8018F908 0C05952C */       jal wpManager_AllocUserData
  /* 10E16C 8018F90C 00000000 */       nop 
  /* 10E170 8018F910 0C03F4C0 */       jal efManager_AllocUserData
  /* 10E174 8018F914 00000000 */       nop 
  /* 10E178 8018F918 3C0D800A */       lui $t5, %hi((gSceneData + 0x17))
  /* 10E17C 8018F91C 91AD4AE7 */       lbu $t5, %lo((gSceneData + 0x17))($t5)
  /* 10E180 8018F920 3C048019 */       lui $a0, %hi(D_ovl65_801929BC)
  /* 10E184 8018F924 000D7100 */       sll $t6, $t5, 4
  /* 10E188 8018F928 008E2021 */      addu $a0, $a0, $t6
  /* 10E18C 8018F92C 0C04577A */       jal func_ovl2_80115DE8
  /* 10E190 8018F930 908429BC */       lbu $a0, %lo(D_ovl65_801929BC)($a0)
  /* 10E194 8018F934 0C0455B9 */       jal func_ovl2_801156E4
  /* 10E198 8018F938 00000000 */       nop 
  /* 10E19C 8018F93C 0C0594F8 */       jal func_ovl3_801653E0
  /* 10E1A0 8018F940 00000000 */       nop 
  /* 10E1A4 8018F944 3C02800A */       lui $v0, %hi((gSceneData + 0x17))
  /* 10E1A8 8018F948 90424AE7 */       lbu $v0, %lo((gSceneData + 0x17))($v0)
  /* 10E1AC 8018F94C 24010008 */     addiu $at, $zero, 8
  /* 10E1B0 8018F950 10410006 */       beq $v0, $at, .L8018F96C
  /* 10E1B4 8018F954 2401000C */     addiu $at, $zero, 0xc
  /* 10E1B8 8018F958 10410018 */       beq $v0, $at, .L8018F9BC
  /* 10E1BC 8018F95C 2411000E */     addiu $s1, $zero, 0xe
  /* 10E1C0 8018F960 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 10E1C4 8018F964 10000043 */         b .L8018FA74
  /* 10E1C8 8018F968 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  .L8018F96C:
  /* 10E1CC 8018F96C 3C110000 */       lui $s1, %hi(D_NF_000000E6)
  /* 10E1D0 8018F970 3C108011 */       lui $s0, %hi(D_ovl2_80116E3C)
  /* 10E1D4 8018F974 263100E6 */     addiu $s1, $s1, %lo(D_NF_000000E6)
  /* 10E1D8 8018F978 8E106E3C */        lw $s0, %lo(D_ovl2_80116E3C)($s0)
  /* 10E1DC 8018F97C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 10E1E0 8018F980 02202025 */        or $a0, $s1, $zero
  /* 10E1E4 8018F984 00402025 */        or $a0, $v0, $zero
  /* 10E1E8 8018F988 0C001260 */       jal hal_alloc
  /* 10E1EC 8018F98C 24050010 */     addiu $a1, $zero, 0x10
  /* 10E1F0 8018F990 02202025 */        or $a0, $s1, $zero
  /* 10E1F4 8018F994 0C033722 */       jal rldm_get_file_with_external_heap
  /* 10E1F8 8018F998 00402825 */        or $a1, $v0, $zero
  /* 10E1FC 8018F99C 8E040050 */        lw $a0, 0x50($s0)
  /* 10E200 8018F9A0 8E050054 */        lw $a1, 0x54($s0)
  /* 10E204 8018F9A4 8E060058 */        lw $a2, 0x58($s0)
  /* 10E208 8018F9A8 0C04567E */       jal func_ovl2_801159F8
  /* 10E20C 8018F9AC 8E07005C */        lw $a3, 0x5c($s0)
  /* 10E210 8018F9B0 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 10E214 8018F9B4 1000002F */         b .L8018FA74
  /* 10E218 8018F9B8 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  .L8018F9BC:
  /* 10E21C 8018F9BC 0C035E1B */       jal func_ovl2_800D786C
  /* 10E220 8018F9C0 02202025 */        or $a0, $s1, $zero
  /* 10E224 8018F9C4 26310001 */     addiu $s1, $s1, 1
  /* 10E228 8018F9C8 2A21001A */      slti $at, $s1, 0x1a
  /* 10E22C 8018F9CC 1420FFFB */      bnez $at, .L8018F9BC
  /* 10E230 8018F9D0 00000000 */       nop 
  /* 10E234 8018F9D4 3C028011 */       lui $v0, %hi(D_ovl2_80116E48)
  /* 10E238 8018F9D8 3C058011 */       lui $a1, %hi(D_ovl2_80116E78)
  /* 10E23C 8018F9DC 00002025 */        or $a0, $zero, $zero
  /* 10E240 8018F9E0 24A56E78 */     addiu $a1, $a1, %lo(D_ovl2_80116E78)
  /* 10E244 8018F9E4 24426E48 */     addiu $v0, $v0, %lo(D_ovl2_80116E48)
  /* 10E248 8018F9E8 8C4F0000 */        lw $t7, ($v0) # D_ovl2_80116E48 + 0
  .L8018F9EC:
  /* 10E24C 8018F9EC 24420004 */     addiu $v0, $v0, 4
  /* 10E250 8018F9F0 8DE30074 */        lw $v1, 0x74($t7)
  /* 10E254 8018F9F4 0083082B */      sltu $at, $a0, $v1
  /* 10E258 8018F9F8 50200003 */      beql $at, $zero, .L8018FA08
  /* 10E25C 8018F9FC 0045082B */      sltu $at, $v0, $a1
  /* 10E260 8018FA00 00602025 */        or $a0, $v1, $zero
  /* 10E264 8018FA04 0045082B */      sltu $at, $v0, $a1
  .L8018FA08:
  /* 10E268 8018FA08 5420FFF8 */      bnel $at, $zero, .L8018F9EC
  /* 10E26C 8018FA0C 8C4F0000 */        lw $t7, ($v0) # D_ovl2_80116E48 + 0
  /* 10E270 8018FA10 3C13800A */       lui $s3, %hi(gpBattleState)
  /* 10E274 8018FA14 267350E8 */     addiu $s3, $s3, %lo(gpBattleState)
  /* 10E278 8018FA18 00008825 */        or $s1, $zero, $zero
  /* 10E27C 8018FA1C 00009025 */        or $s2, $zero, $zero
  .L8018FA20:
  /* 10E280 8018FA20 8E780000 */        lw $t8, ($s3) # gpBattleState + 0
  /* 10E284 8018FA24 24010002 */     addiu $at, $zero, 2
  /* 10E288 8018FA28 03121821 */      addu $v1, $t8, $s2
  /* 10E28C 8018FA2C 90790022 */       lbu $t9, 0x22($v1)
  /* 10E290 8018FA30 5321000D */      beql $t9, $at, .L8018FA68
  /* 10E294 8018FA34 26310001 */     addiu $s1, $s1, 1
  /* 10E298 8018FA38 9068002C */       lbu $t0, 0x2c($v1)
  /* 10E29C 8018FA3C 24050010 */     addiu $a1, $zero, 0x10
  /* 10E2A0 8018FA40 00114940 */       sll $t1, $s1, 5
  /* 10E2A4 8018FA44 11000007 */      beqz $t0, .L8018FA64
  /* 10E2A8 8018FA48 3C0A8019 */       lui $t2, %hi(D_ovl65_80192FE0)
  /* 10E2AC 8018FA4C 254A2FE0 */     addiu $t2, $t2, %lo(D_ovl65_80192FE0)
  /* 10E2B0 8018FA50 012A8021 */      addu $s0, $t1, $t2
  /* 10E2B4 8018FA54 0C001260 */       jal hal_alloc
  /* 10E2B8 8018FA58 AFA400BC */        sw $a0, 0xbc($sp)
  /* 10E2BC 8018FA5C 8FA400BC */        lw $a0, 0xbc($sp)
  /* 10E2C0 8018FA60 AE020004 */        sw $v0, 4($s0)
  .L8018FA64:
  /* 10E2C4 8018FA64 26310001 */     addiu $s1, $s1, 1
  .L8018FA68:
  /* 10E2C8 8018FA68 24010004 */     addiu $at, $zero, 4
  /* 10E2CC 8018FA6C 1621FFEC */       bne $s1, $at, .L8018FA20
  /* 10E2D0 8018FA70 26520074 */     addiu $s2, $s2, 0x74
  .L8018FA74:
  /* 10E2D4 8018FA74 00008825 */        or $s1, $zero, $zero
  /* 10E2D8 8018FA78 00009025 */        or $s2, $zero, $zero
  .L8018FA7C:
  /* 10E2DC 8018FA7C 3C0C8011 */       lui $t4, %hi(D_ovl2_80116DD0)
  /* 10E2E0 8018FA80 258C6DD0 */     addiu $t4, $t4, %lo(D_ovl2_80116DD0)
  /* 10E2E4 8018FA84 258F003C */     addiu $t7, $t4, 0x3c
  /* 10E2E8 8018FA88 27AB005C */     addiu $t3, $sp, 0x5c
  .L8018FA8C:
  /* 10E2EC 8018FA8C 8D8E0000 */        lw $t6, ($t4) # D_ovl2_80116DD0 + 0
  /* 10E2F0 8018FA90 258C000C */     addiu $t4, $t4, 0xc
  /* 10E2F4 8018FA94 256B000C */     addiu $t3, $t3, 0xc
  /* 10E2F8 8018FA98 AD6EFFF4 */        sw $t6, -0xc($t3)
  /* 10E2FC 8018FA9C 8D8DFFF8 */        lw $t5, -8($t4) # D_ovl2_80116DD0 + -8
  /* 10E300 8018FAA0 AD6DFFF8 */        sw $t5, -8($t3)
  /* 10E304 8018FAA4 8D8EFFFC */        lw $t6, -4($t4) # D_ovl2_80116DD0 + -4
  /* 10E308 8018FAA8 158FFFF8 */       bne $t4, $t7, .L8018FA8C
  /* 10E30C 8018FAAC AD6EFFFC */        sw $t6, -4($t3)
  /* 10E310 8018FAB0 8D8E0000 */        lw $t6, ($t4) # D_ovl2_80116DD0 + 0
  /* 10E314 8018FAB4 3C098019 */       lui $t1, %hi(D_ovl65_80192FE0)
  /* 10E318 8018FAB8 24010002 */     addiu $at, $zero, 2
  /* 10E31C 8018FABC AD6E0000 */        sw $t6, ($t3)
  /* 10E320 8018FAC0 8E780000 */        lw $t8, ($s3) # gpBattleState + 0
  /* 10E324 8018FAC4 25292FE0 */     addiu $t1, $t1, %lo(D_ovl65_80192FE0)
  /* 10E328 8018FAC8 00114140 */       sll $t0, $s1, 5
  /* 10E32C 8018FACC 03121821 */      addu $v1, $t8, $s2
  /* 10E330 8018FAD0 90790022 */       lbu $t9, 0x22($v1)
  /* 10E334 8018FAD4 00115080 */       sll $t2, $s1, 2
  /* 10E338 8018FAD8 01515021 */      addu $t2, $t2, $s1
  /* 10E33C 8018FADC 13210055 */       beq $t9, $at, .L8018FC34
  /* 10E340 8018FAE0 01098021 */      addu $s0, $t0, $t1
  /* 10E344 8018FAE4 3C0F8004 */       lui $t7, %hi(gContInput)
  /* 10E348 8018FAE8 25EF5228 */     addiu $t7, $t7, %lo(gContInput)
  /* 10E34C 8018FAEC 000A5040 */       sll $t2, $t2, 1
  /* 10E350 8018FAF0 014F6021 */      addu $t4, $t2, $t7
  /* 10E354 8018FAF4 90640023 */       lbu $a0, 0x23($v1)
  /* 10E358 8018FAF8 0C035E1B */       jal func_ovl2_800D786C
  /* 10E35C 8018FAFC AFAC0040 */        sw $t4, 0x40($sp)
  /* 10E360 8018FB00 8E6B0000 */        lw $t3, ($s3) # gpBattleState + 0
  /* 10E364 8018FB04 27A40060 */     addiu $a0, $sp, 0x60
  /* 10E368 8018FB08 8E050000 */        lw $a1, ($s0)
  /* 10E36C 8018FB0C 01726821 */      addu $t5, $t3, $s2
  /* 10E370 8018FB10 91AE0023 */       lbu $t6, 0x23($t5)
  /* 10E374 8018FB14 0C0634F6 */       jal func_ovl65_8018D3D8
  /* 10E378 8018FB18 AFAE005C */        sw $t6, 0x5c($sp)
  /* 10E37C 8018FB1C 0C063C90 */       jal func_ovl65_8018F240
  /* 10E380 8018FB20 02202025 */        or $a0, $s1, $zero
  /* 10E384 8018FB24 8E640000 */        lw $a0, ($s3) # gpBattleState + 0
  /* 10E388 8018FB28 AFA2006C */        sw $v0, 0x6c($sp)
  /* 10E38C 8018FB2C 240F0002 */     addiu $t7, $zero, 2
  /* 10E390 8018FB30 00921821 */      addu $v1, $a0, $s2
  /* 10E394 8018FB34 90780024 */       lbu $t8, 0x24($v1)
  /* 10E398 8018FB38 A3B10071 */        sb $s1, 0x71($sp)
  /* 10E39C 8018FB3C 240A0001 */     addiu $t2, $zero, 1
  /* 10E3A0 8018FB40 A3B80070 */        sb $t8, 0x70($sp)
  /* 10E3A4 8018FB44 90880005 */       lbu $t0, 5($a0)
  /* 10E3A8 8018FB48 90990004 */       lbu $t9, 4($a0)
  /* 10E3AC 8018FB4C 03284821 */      addu $t1, $t9, $t0
  /* 10E3B0 8018FB50 29210003 */      slti $at, $t1, 3
  /* 10E3B4 8018FB54 50200004 */      beql $at, $zero, .L8018FB68
  /* 10E3B8 8018FB58 A3AF0072 */        sb $t7, 0x72($sp)
  /* 10E3BC 8018FB5C 10000002 */         b .L8018FB68
  /* 10E3C0 8018FB60 A3AA0072 */        sb $t2, 0x72($sp)
  /* 10E3C4 8018FB64 A3AF0072 */        sb $t7, 0x72($sp)
  .L8018FB68:
  /* 10E3C8 8018FB68 906C0026 */       lbu $t4, 0x26($v1)
  /* 10E3CC 8018FB6C 8E020004 */        lw $v0, 4($s0)
  /* 10E3D0 8018FB70 8FA80040 */        lw $t0, 0x40($sp)
  /* 10E3D4 8018FB74 A3AC0073 */        sb $t4, 0x73($sp)
  /* 10E3D8 8018FB78 906B0027 */       lbu $t3, 0x27($v1)
  /* 10E3DC 8018FB7C A3AB0074 */        sb $t3, 0x74($sp)
  /* 10E3E0 8018FB80 906D0021 */       lbu $t5, 0x21($v1)
  /* 10E3E4 8018FB84 A3AD0075 */        sb $t5, 0x75($sp)
  /* 10E3E8 8018FB88 906E0020 */       lbu $t6, 0x20($v1)
  /* 10E3EC 8018FB8C A3AE0076 */        sb $t6, 0x76($sp)
  /* 10E3F0 8018FB90 8078002B */        lb $t8, 0x2b($v1)
  /* 10E3F4 8018FB94 AFA00080 */        sw $zero, 0x80($sp)
  /* 10E3F8 8018FB98 A3B80077 */        sb $t8, 0x77($sp)
  /* 10E3FC 8018FB9C 90790022 */       lbu $t9, 0x22($v1)
  /* 10E400 8018FBA0 AFA80088 */        sw $t0, 0x88($sp)
  /* 10E404 8018FBA4 10400003 */      beqz $v0, .L8018FBB4
  /* 10E408 8018FBA8 AFB90084 */        sw $t9, 0x84($sp)
  /* 10E40C 8018FBAC 10000004 */         b .L8018FBC0
  /* 10E410 8018FBB0 AFA20094 */        sw $v0, 0x94($sp)
  .L8018FBB4:
  /* 10E414 8018FBB4 0C035E2D */       jal func_ovl2_800D78B4
  /* 10E418 8018FBB8 90640023 */       lbu $a0, 0x23($v1)
  /* 10E41C 8018FBBC AFA20094 */        sw $v0, 0x94($sp)
  .L8018FBC0:
  /* 10E420 8018FBC0 93A2007B */       lbu $v0, 0x7b($sp)
  /* 10E424 8018FBC4 8E0C0010 */        lw $t4, 0x10($s0)
  /* 10E428 8018FBC8 8E090008 */        lw $t1, 8($s0)
  /* 10E42C 8018FBCC 8E0A000C */        lw $t2, 0xc($s0)
  /* 10E430 8018FBD0 8E190014 */        lw $t9, 0x14($s0)
  /* 10E434 8018FBD4 304EFF7F */      andi $t6, $v0, 0xff7f
  /* 10E438 8018FBD8 000C69C0 */       sll $t5, $t4, 7
  /* 10E43C 8018FBDC 01AE1025 */        or $v0, $t5, $t6
  /* 10E440 8018FBE0 AFA9007C */        sw $t1, 0x7c($sp)
  /* 10E444 8018FBE4 A3AA007A */        sb $t2, 0x7a($sp)
  /* 10E448 8018FBE8 00194140 */       sll $t0, $t9, 5
  /* 10E44C 8018FBEC 31090020 */      andi $t1, $t0, 0x20
  /* 10E450 8018FBF0 304AFFDF */      andi $t2, $v0, 0xffdf
  /* 10E454 8018FBF4 012A1025 */        or $v0, $t1, $t2
  /* 10E458 8018FBF8 A3A2007B */        sb $v0, 0x7b($sp)
  /* 10E45C 8018FBFC 0C035FCF */       jal ftManager_CreateFighter
  /* 10E460 8018FC00 27A4005C */     addiu $a0, $sp, 0x5c
  /* 10E464 8018FC04 8C430084 */        lw $v1, 0x84($v0)
  /* 10E468 8018FC08 02202025 */        or $a0, $s1, $zero
  /* 10E46C 8018FC0C 00402825 */        or $a1, $v0, $zero
  /* 10E470 8018FC10 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 10E474 8018FC14 AFA300B8 */        sw $v1, 0xb8($sp)
  /* 10E478 8018FC18 8FA300B8 */        lw $v1, 0xb8($sp)
  /* 10E47C 8018FC1C 920F0018 */       lbu $t7, 0x18($s0)
  /* 10E480 8018FC20 C4640860 */      lwc1 $f4, 0x860($v1)
  /* 10E484 8018FC24 A06F01D1 */        sb $t7, 0x1d1($v1)
  /* 10E488 8018FC28 C606001C */      lwc1 $f6, 0x1c($s0)
  /* 10E48C 8018FC2C 46062202 */     mul.s $f8, $f4, $f6
  /* 10E490 8018FC30 E4680860 */      swc1 $f8, 0x860($v1)
  .L8018FC34:
  /* 10E494 8018FC34 26310001 */     addiu $s1, $s1, 1
  /* 10E498 8018FC38 24010004 */     addiu $at, $zero, 4
  /* 10E49C 8018FC3C 1621FF8F */       bne $s1, $at, .L8018FA7C
  /* 10E4A0 8018FC40 26520074 */     addiu $s2, $s2, 0x74
  /* 10E4A4 8018FC44 0C035E0B */       jal func_ovl2_800D782C
  /* 10E4A8 8018FC48 00000000 */       nop 
  /* 10E4AC 8018FC4C 0C045256 */       jal func_ovl2_80114958
  /* 10E4B0 8018FC50 00000000 */       nop 
  /* 10E4B4 8018FC54 0C063C70 */       jal func_ovl65_8018F1C0
  /* 10E4B8 8018FC58 00000000 */       nop 
  /* 10E4BC 8018FC5C 0C043869 */       jal func_ovl2_8010E1A4
  /* 10E4C0 8018FC60 00000000 */       nop 
  /* 10E4C4 8018FC64 0C044510 */       jal func_ovl2_80111440
  /* 10E4C8 8018FC68 00000000 */       nop 
  /* 10E4CC 8018FC6C 0C043771 */       jal func_ovl2_8010DDC4
  /* 10E4D0 8018FC70 00000000 */       nop 
  /* 10E4D4 8018FC74 0C0438DD */       jal func_ovl2_8010E374
  /* 10E4D8 8018FC78 00000000 */       nop 
  /* 10E4DC 8018FC7C 0C043926 */       jal func_ovl2_8010E498
  /* 10E4E0 8018FC80 00000000 */       nop 
  /* 10E4E4 8018FC84 0C0446F9 */       jal func_ovl2_80111BE4
  /* 10E4E8 8018FC88 00000000 */       nop 
  /* 10E4EC 8018FC8C 0C063966 */       jal func_ovl65_8018E598
  /* 10E4F0 8018FC90 00000000 */       nop 
  /* 10E4F4 8018FC94 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 10E4F8 8018FC98 00000000 */       nop 
  /* 10E4FC 8018FC9C 0C044145 */       jal func_ovl2_80110514
  /* 10E500 8018FCA0 00000000 */       nop 
  /* 10E504 8018FCA4 0C063B91 */       jal func_ovl65_8018EE44
  /* 10E508 8018FCA8 00000000 */       nop 
  /* 10E50C 8018FCAC 0C063ADA */       jal func_ovl65_8018EB68
  /* 10E510 8018FCB0 00000000 */       nop 
  /* 10E514 8018FCB4 3C02800A */       lui $v0, %hi((gSceneData + 0x17))
  /* 10E518 8018FCB8 90424AE7 */       lbu $v0, %lo((gSceneData + 0x17))($v0)
  /* 10E51C 8018FCBC 2401000A */     addiu $at, $zero, 0xa
  /* 10E520 8018FCC0 10410003 */       beq $v0, $at, .L8018FCD0
  /* 10E524 8018FCC4 2401000C */     addiu $at, $zero, 0xc
  /* 10E528 8018FCC8 14410007 */       bne $v0, $at, .L8018FCE8
  /* 10E52C 8018FCCC 00000000 */       nop 
  .L8018FCD0:
  /* 10E530 8018FCD0 0C03F10B */       jal func_ovl2_800FC42C
  /* 10E534 8018FCD4 00000000 */       nop 
  /* 10E538 8018FCD8 0C009A70 */       jal func_800269C0
  /* 10E53C 8018FCDC 24040096 */     addiu $a0, $zero, 0x96
  /* 10E540 8018FCE0 10000005 */         b .L8018FCF8
  /* 10E544 8018FCE4 00000000 */       nop 
  .L8018FCE8:
  /* 10E548 8018FCE8 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 10E54C 8018FCEC 00000000 */       nop 
  /* 10E550 8018FCF0 0C009A70 */       jal func_800269C0
  /* 10E554 8018FCF4 24040272 */     addiu $a0, $zero, 0x272
  .L8018FCF8:
  /* 10E558 8018FCF8 0C063C7E */       jal func_ovl65_8018F1F8
  /* 10E55C 8018FCFC 00000000 */       nop 
  /* 10E560 8018FD00 0C044BDA */       jal func_ovl2_80112F68
  /* 10E564 8018FD04 00000000 */       nop 
  /* 10E568 8018FD08 3C0C8019 */       lui $t4, %hi(D_ovl65_80192B14)
  /* 10E56C 8018FD0C 258C2B14 */     addiu $t4, $t4, %lo(D_ovl65_80192B14)
  /* 10E570 8018FD10 8D8D0000 */        lw $t5, ($t4) # D_ovl65_80192B14 + 0
  /* 10E574 8018FD14 27A70058 */     addiu $a3, $sp, 0x58
  /* 10E578 8018FD18 240E000C */     addiu $t6, $zero, 0xc
  /* 10E57C 8018FD1C ACED0000 */        sw $t5, ($a3)
  /* 10E580 8018FD20 24180001 */     addiu $t8, $zero, 1
  /* 10E584 8018FD24 AFB80014 */        sw $t8, 0x14($sp)
  /* 10E588 8018FD28 AFA00018 */        sw $zero, 0x18($sp)
  /* 10E58C 8018FD2C AFAE0010 */        sw $t6, 0x10($sp)
  /* 10E590 8018FD30 240403FD */     addiu $a0, $zero, 0x3fd
  /* 10E594 8018FD34 2405000D */     addiu $a1, $zero, 0xd
  /* 10E598 8018FD38 0C035018 */       jal func_ovl0_800D4060
  /* 10E59C 8018FD3C 2406000A */     addiu $a2, $zero, 0xa
  /* 10E5A0 8018FD40 8FBF0034 */        lw $ra, 0x34($sp)
  /* 10E5A4 8018FD44 8FB00024 */        lw $s0, 0x24($sp)
  /* 10E5A8 8018FD48 8FB10028 */        lw $s1, 0x28($sp)
  /* 10E5AC 8018FD4C 8FB2002C */        lw $s2, 0x2c($sp)
  /* 10E5B0 8018FD50 8FB30030 */        lw $s3, 0x30($sp)
  /* 10E5B4 8018FD54 03E00008 */        jr $ra
  /* 10E5B8 8018FD58 27BD00C8 */     addiu $sp, $sp, 0xc8

glabel func_ovl65_8018FD5C
  /* 10E5BC 8018FD5C 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 10E5C0 8018FD60 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 10E5C4 8018FD64 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 10E5C8 8018FD68 2402003C */     addiu $v0, $zero, 0x3c
  /* 10E5CC 8018FD6C AFAE0018 */        sw $t6, 0x18($sp)
  /* 10E5D0 8018FD70 8DCF0018 */        lw $t7, 0x18($t6)
  /* 10E5D4 8018FD74 3C0D8019 */       lui $t5, %hi(D_ovl65_801938B0)
  /* 10E5D8 8018FD78 25AD38B0 */     addiu $t5, $t5, %lo(D_ovl65_801938B0)
  /* 10E5DC 8018FD7C 01E2001B */      divu $zero, $t7, $v0
  /* 10E5E0 8018FD80 0000C012 */      mflo $t8
  /* 10E5E4 8018FD84 ADB80000 */        sw $t8, ($t5) # D_ovl65_801938B0 + 0
  /* 10E5E8 8018FD88 3C198013 */       lui $t9, %hi(g1PGameTimeTotal)
  /* 10E5EC 8018FD8C 8F390D64 */        lw $t9, %lo(g1PGameTimeTotal)($t9)
  /* 10E5F0 8018FD90 3C088019 */       lui $t0, %hi(D_ovl65_801936A0)
  /* 10E5F4 8018FD94 8D0836A0 */        lw $t0, %lo(D_ovl65_801936A0)($t0)
  /* 10E5F8 8018FD98 0322001B */      divu $zero, $t9, $v0
  /* 10E5FC 8018FD9C 14400002 */      bnez $v0, .L8018FDA8
  /* 10E600 8018FDA0 00000000 */       nop 
  /* 10E604 8018FDA4 0007000D */     break 7
  .L8018FDA8:
  /* 10E608 8018FDA8 00007012 */      mflo $t6
  /* 10E60C 8018FDAC 3C018019 */       lui $at, %hi(D_ovl65_801938B4)
  /* 10E610 8018FDB0 14400002 */      bnez $v0, .L8018FDBC
  /* 10E614 8018FDB4 00000000 */       nop 
  /* 10E618 8018FDB8 0007000D */     break 7
  .L8018FDBC:
  /* 10E61C 8018FDBC AC2E38B4 */        sw $t6, %lo(D_ovl65_801938B4)($at)
  /* 10E620 8018FDC0 11000028 */      beqz $t0, .L8018FE64
  /* 10E624 8018FDC4 3C0B8019 */       lui $t3, %hi(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10E628 8018FDC8 19000015 */      blez $t0, .L8018FE20
  /* 10E62C 8018FDCC 00003025 */        or $a2, $zero, $zero
  /* 10E630 8018FDD0 3C03800A */       lui $v1, %hi((gSceneData + 0x13))
  /* 10E634 8018FDD4 3C028019 */       lui $v0, %hi(D_ovl65_801933D0)
  /* 10E638 8018FDD8 244233D0 */     addiu $v0, $v0, %lo(D_ovl65_801933D0)
  /* 10E63C 8018FDDC 90634AE3 */       lbu $v1, %lo((gSceneData + 0x13))($v1)
  /* 10E640 8018FDE0 24090002 */     addiu $t1, $zero, 2
  /* 10E644 8018FDE4 24070003 */     addiu $a3, $zero, 3
  .L8018FDE8:
  /* 10E648 8018FDE8 8C4F0008 */        lw $t7, 8($v0) # D_ovl65_801933D0 + 8
  /* 10E64C 8018FDEC 24C60001 */     addiu $a2, $a2, 1
  /* 10E650 8018FDF0 00C8082A */       slt $at, $a2, $t0
  /* 10E654 8018FDF4 146F0005 */       bne $v1, $t7, .L8018FE0C
  /* 10E658 8018FDF8 00000000 */       nop 
  /* 10E65C 8018FDFC 8C440004 */        lw $a0, 4($v0) # D_ovl65_801933D0 + 4
  /* 10E660 8018FE00 11240005 */       beq $t1, $a0, .L8018FE18
  /* 10E664 8018FE04 00000000 */       nop 
  /* 10E668 8018FE08 10E40003 */       beq $a3, $a0, .L8018FE18
  .L8018FE0C:
  /* 10E66C 8018FE0C 3C0A800A */       lui $t2, %hi(gSceneData)
  /* 10E670 8018FE10 10000018 */         b .L8018FE74
  /* 10E674 8018FE14 254A4AD0 */     addiu $t2, $t2, %lo(gSceneData)
  .L8018FE18:
  /* 10E678 8018FE18 1420FFF3 */      bnez $at, .L8018FDE8
  /* 10E67C 8018FE1C 24420018 */     addiu $v0, $v0, 0x18
  .L8018FE20:
  /* 10E680 8018FE20 3C0A800A */       lui $t2, %hi(gSceneData)
  /* 10E684 8018FE24 254A4AD0 */     addiu $t2, $t2, %lo(gSceneData)
  /* 10E688 8018FE28 91420017 */       lbu $v0, 0x17($t2) # gSceneData + 23
  /* 10E68C 8018FE2C 24010001 */     addiu $at, $zero, 1
  /* 10E690 8018FE30 10410009 */       beq $v0, $at, .L8018FE58
  /* 10E694 8018FE34 24010008 */     addiu $at, $zero, 8
  /* 10E698 8018FE38 10410007 */       beq $v0, $at, .L8018FE58
  /* 10E69C 8018FE3C 2401000C */     addiu $at, $zero, 0xc
  /* 10E6A0 8018FE40 50410006 */      beql $v0, $at, .L8018FE5C
  /* 10E6A4 8018FE44 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10E6A8 8018FE48 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10E6AC 8018FE4C 37190002 */       ori $t9, $t8, 2
  /* 10E6B0 8018FE50 10000004 */         b .L8018FE64
  /* 10E6B4 8018FE54 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  .L8018FE58:
  /* 10E6B8 8018FE58 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  .L8018FE5C:
  /* 10E6BC 8018FE5C 35CF0800 */       ori $t7, $t6, 0x800
  /* 10E6C0 8018FE60 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  .L8018FE64:
  /* 10E6C4 8018FE64 3C0A800A */       lui $t2, %hi(gSceneData)
  /* 10E6C8 8018FE68 254A4AD0 */     addiu $t2, $t2, %lo(gSceneData)
  /* 10E6CC 8018FE6C 24070003 */     addiu $a3, $zero, 3
  /* 10E6D0 8018FE70 24090002 */     addiu $t1, $zero, 2
  .L8018FE74:
  /* 10E6D4 8018FE74 3C188019 */       lui $t8, 0x8019
  /* 10E6D8 8018FE78 27053894 */     addiu $a1, $t8, 0x3894
  /* 10E6DC 8018FE7C 3C028019 */       lui $v0, %hi(D_ovl65_801937B4)
  /* 10E6E0 8018FE80 3C048019 */       lui $a0, %hi(D_ovl65_80193844)
  /* 10E6E4 8018FE84 00001825 */        or $v1, $zero, $zero
  /* 10E6E8 8018FE88 24843844 */     addiu $a0, $a0, %lo(D_ovl65_80193844)
  /* 10E6EC 8018FE8C 244237B4 */     addiu $v0, $v0, %lo(D_ovl65_801937B4)
  /* 10E6F0 8018FE90 00A03025 */        or $a2, $a1, $zero
  /* 10E6F4 8018FE94 256B3898 */     addiu $t3, $t3, %lo(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10E6F8 8018FE98 8C590000 */        lw $t9, ($v0) # D_ovl65_801937B4 + 0
  .L8018FE9C:
  /* 10E6FC 8018FE9C 0044082B */      sltu $at, $v0, $a0
  /* 10E700 8018FEA0 53200009 */      beql $t9, $zero, .L8018FEC8
  /* 10E704 8018FEA4 24420004 */     addiu $v0, $v0, 4
  /* 10E708 8018FEA8 14200004 */      bnez $at, .L8018FEBC
  /* 10E70C 8018FEAC 24030001 */     addiu $v1, $zero, 1
  /* 10E710 8018FEB0 0045082B */      sltu $at, $v0, $a1
  /* 10E714 8018FEB4 14200003 */      bnez $at, .L8018FEC4
  /* 10E718 8018FEB8 00000000 */       nop 
  .L8018FEBC:
  /* 10E71C 8018FEBC 5446000B */      bnel $v0, $a2, .L8018FEEC
  /* 10E720 8018FEC0 8D42002C */        lw $v0, 0x2c($t2) # gSceneData + 44
  .L8018FEC4:
  /* 10E724 8018FEC4 24420004 */     addiu $v0, $v0, 4
  .L8018FEC8:
  /* 10E728 8018FEC8 004B082B */      sltu $at, $v0, $t3
  /* 10E72C 8018FECC 5420FFF3 */      bnel $at, $zero, .L8018FE9C
  /* 10E730 8018FED0 8C590000 */        lw $t9, ($v0)
  /* 10E734 8018FED4 50600005 */      beql $v1, $zero, .L8018FEEC
  /* 10E738 8018FED8 8D42002C */        lw $v0, 0x2c($t2) # gSceneData + 44
  /* 10E73C 8018FEDC 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10E740 8018FEE0 35CF0200 */       ori $t7, $t6, 0x200
  /* 10E744 8018FEE4 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10E748 8018FEE8 8D42002C */        lw $v0, 0x2c($t2) # gSceneData + 44
  .L8018FEEC:
  /* 10E74C 8018FEEC 8FB90018 */        lw $t9, 0x18($sp)
  /* 10E750 8018FEF0 30580200 */      andi $t8, $v0, 0x200
  /* 10E754 8018FEF4 17000026 */      bnez $t8, .L8018FF90
  /* 10E758 8018FEF8 00000000 */       nop 
  /* 10E75C 8018FEFC 932E001C */       lbu $t6, 0x1c($t9)
  /* 10E760 8018FF00 3C0B8019 */       lui $t3, %hi(gmBonusStat_TomatoPickupCount)
  /* 10E764 8018FF04 11C00022 */      beqz $t6, .L8018FF90
  /* 10E768 8018FF08 00000000 */       nop 
  /* 10E76C 8018FF0C 916B36A8 */       lbu $t3, %lo(gmBonusStat_TomatoPickupCount)($t3)
  /* 10E770 8018FF10 3C0C8019 */       lui $t4, %hi(gmBonusStat_HeartPickupCount)
  /* 10E774 8018FF14 1560001E */      bnez $t3, .L8018FF90
  /* 10E778 8018FF18 00000000 */       nop 
  /* 10E77C 8018FF1C 918C36A9 */       lbu $t4, %lo(gmBonusStat_HeartPickupCount)($t4)
  /* 10E780 8018FF20 3C0F8019 */       lui $t7, %hi(D_ovl65_801936AA)
  /* 10E784 8018FF24 1580001A */      bnez $t4, .L8018FF90
  /* 10E788 8018FF28 00000000 */       nop 
  /* 10E78C 8018FF2C 91EF36AA */       lbu $t7, %lo(D_ovl65_801936AA)($t7)
  /* 10E790 8018FF30 3C038019 */       lui $v1, %hi(D_ovl65_80193744)
  /* 10E794 8018FF34 24633744 */     addiu $v1, $v1, %lo(D_ovl65_80193744)
  /* 10E798 8018FF38 15E00015 */      bnez $t7, .L8018FF90
  /* 10E79C 8018FF3C 3C048019 */       lui $a0, %hi(D_ovl65_80193794)
  /* 10E7A0 8018FF40 24843794 */     addiu $a0, $a0, %lo(D_ovl65_80193794)
  /* 10E7A4 8018FF44 8C780000 */        lw $t8, ($v1) # D_ovl65_80193744 + 0
  .L8018FF48:
  /* 10E7A8 8018FF48 24630004 */     addiu $v1, $v1, 4
  /* 10E7AC 8018FF4C 13000005 */      beqz $t8, .L8018FF64
  /* 10E7B0 8018FF50 00000000 */       nop 
  /* 10E7B4 8018FF54 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E7B8 8018FF58 246337B0 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E7BC 8018FF5C 10000013 */         b .L8018FFAC
  /* 10E7C0 8018FF60 24060001 */     addiu $a2, $zero, 1
  .L8018FF64:
  /* 10E7C4 8018FF64 5464FFF8 */      bnel $v1, $a0, .L8018FF48
  /* 10E7C8 8018FF68 8C780000 */        lw $t8, ($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 0
  /* 10E7CC 8018FF6C 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E7D0 8018FF70 246337B0 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E7D4 8018FF74 8C7900E4 */        lw $t9, 0xe4($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 228
  /* 10E7D8 8018FF78 344E0004 */       ori $t6, $v0, 4
  /* 10E7DC 8018FF7C 53200004 */      beql $t9, $zero, .L8018FF90
  /* 10E7E0 8018FF80 AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  /* 10E7E4 8018FF84 10000009 */         b .L8018FFAC
  /* 10E7E8 8018FF88 24060001 */     addiu $a2, $zero, 1
  /* 10E7EC 8018FF8C AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  .L8018FF90:
  /* 10E7F0 8018FF90 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E7F4 8018FF94 3C0B8019 */       lui $t3, %hi(gmBonusStat_TomatoPickupCount)
  /* 10E7F8 8018FF98 3C0C8019 */       lui $t4, %hi(gmBonusStat_HeartPickupCount)
  /* 10E7FC 8018FF9C 246337B0 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_AttackGroupIndex_Count)
  /* 10E800 8018FFA0 918C36A9 */       lbu $t4, %lo(gmBonusStat_HeartPickupCount)($t4)
  /* 10E804 8018FFA4 916B36A8 */       lbu $t3, %lo(gmBonusStat_TomatoPickupCount)($t3)
  /* 10E808 8018FFA8 24060001 */     addiu $a2, $zero, 1
  .L8018FFAC:
  /* 10E80C 8018FFAC 3C0F8019 */       lui $t7, %hi(gmBonusStat_ShieldBreaker)
  /* 10E810 8018FFB0 91EF36AB */       lbu $t7, %lo(gmBonusStat_ShieldBreaker)($t7)
  /* 10E814 8018FFB4 51E00005 */      beql $t7, $zero, .L8018FFCC
  /* 10E818 8018FFB8 8C6E008C */        lw $t6, 0x8c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 140
  /* 10E81C 8018FFBC 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10E820 8018FFC0 37190008 */       ori $t9, $t8, 8
  /* 10E824 8018FFC4 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E828 8018FFC8 8C6E008C */        lw $t6, 0x8c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 140
  .L8018FFCC:
  /* 10E82C 8018FFCC 24050024 */     addiu $a1, $zero, 0x24
  /* 10E830 8018FFD0 24040023 */     addiu $a0, $zero, 0x23
  /* 10E834 8018FFD4 15C00004 */      bnez $t6, .L8018FFE8
  /* 10E838 8018FFD8 2402003A */     addiu $v0, $zero, 0x3a
  /* 10E83C 8018FFDC 8C6F0090 */        lw $t7, 0x90($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 144
  /* 10E840 8018FFE0 51E00012 */      beql $t7, $zero, .L8019002C
  /* 10E844 8018FFE4 24040023 */     addiu $a0, $zero, 0x23
  .L8018FFE8:
  /* 10E848 8018FFE8 50C4000A */      beql $a2, $a0, .L80190014
  /* 10E84C 8018FFEC 24C60001 */     addiu $a2, $a2, 1
  /* 10E850 8018FFF0 10C50007 */       beq $a2, $a1, .L80190010
  /* 10E854 8018FFF4 0006C080 */       sll $t8, $a2, 2
  /* 10E858 8018FFF8 0078C821 */      addu $t9, $v1, $t8
  /* 10E85C 8018FFFC 8F2E0000 */        lw $t6, ($t9)
  /* 10E860 80190000 51C00004 */      beql $t6, $zero, .L80190014
  /* 10E864 80190004 24C60001 */     addiu $a2, $a2, 1
  /* 10E868 80190008 10000009 */         b .L80190030
  /* 10E86C 8019000C 00000000 */       nop 
  .L80190010:
  /* 10E870 80190010 24C60001 */     addiu $a2, $a2, 1
  .L80190014:
  /* 10E874 80190014 14C2FFF4 */       bne $a2, $v0, .L8018FFE8
  /* 10E878 80190018 00000000 */       nop 
  /* 10E87C 8019001C 8D42002C */        lw $v0, 0x2c($t2) # gSceneData + 44
  /* 10E880 80190020 344F0010 */       ori $t7, $v0, 0x10
  /* 10E884 80190024 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10E888 80190028 24040023 */     addiu $a0, $zero, 0x23
  .L8019002C:
  /* 10E88C 8019002C 24050024 */     addiu $a1, $zero, 0x24
  .L80190030:
  /* 10E890 80190030 3C028019 */       lui $v0, %hi(gmBonusStat_Defender_GroundOrAirAttack_Count)
  /* 10E894 80190034 244238A0 */     addiu $v0, $v0, %lo(gmBonusStat_Defender_GroundOrAirAttack_Count)
  /* 10E898 80190038 8C580004 */        lw $t8, 4($v0) # gmBonusStat_Defender_GroundOrAirAttack_Count + 4
  /* 10E89C 8019003C 3C068019 */       lui $a2, %hi(D_ovl65_801937E8)
  /* 10E8A0 80190040 24C637E8 */     addiu $a2, $a2, %lo(D_ovl65_801937E8)
  /* 10E8A4 80190044 13000007 */      beqz $t8, .L80190064
  /* 10E8A8 80190048 00000000 */       nop 
  /* 10E8AC 8019004C 8C590000 */        lw $t9, ($v0) # gmBonusStat_Defender_GroundOrAirAttack_Count + 0
  /* 10E8B0 80190050 17200004 */      bnez $t9, .L80190064
  /* 10E8B4 80190054 00000000 */       nop 
  /* 10E8B8 80190058 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10E8BC 8019005C 35CF0020 */       ori $t7, $t6, 0x20
  /* 10E8C0 80190060 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  .L80190064:
  /* 10E8C4 80190064 3C028019 */       lui $v0, %hi(gmBonusStat_Defender_IsSpecialAttack_Count)
  /* 10E8C8 80190068 244238A8 */     addiu $v0, $v0, %lo(gmBonusStat_Defender_IsSpecialAttack_Count)
  /* 10E8CC 8019006C 8C580004 */        lw $t8, 4($v0) # gmBonusStat_Defender_IsSpecialAttack_Count + 4
  /* 10E8D0 80190070 13000007 */      beqz $t8, .L80190090
  /* 10E8D4 80190074 00000000 */       nop 
  /* 10E8D8 80190078 8C590000 */        lw $t9, ($v0) # gmBonusStat_Defender_IsSpecialAttack_Count + 0
  /* 10E8DC 8019007C 17200004 */      bnez $t9, .L80190090
  /* 10E8E0 80190080 00000000 */       nop 
  /* 10E8E4 80190084 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10E8E8 80190088 35CF0040 */       ori $t7, $t6, 0x40
  /* 10E8EC 8019008C AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  .L80190090:
  /* 10E8F0 80190090 3C028019 */       lui $v0, %hi(D_ovl65_801937B4)
  /* 10E8F4 80190094 244237B4 */     addiu $v0, $v0, %lo(D_ovl65_801937B4)
  /* 10E8F8 80190098 8C580000 */        lw $t8, ($v0) # D_ovl65_801937B4 + 0
  .L8019009C:
  /* 10E8FC 8019009C 24420004 */     addiu $v0, $v0, 4
  /* 10E900 801900A0 0046082B */      sltu $at, $v0, $a2
  /* 10E904 801900A4 17000003 */      bnez $t8, .L801900B4
  /* 10E908 801900A8 00000000 */       nop 
  /* 10E90C 801900AC 1000006E */         b .L80190268
  /* 10E910 801900B0 00000000 */       nop 
  .L801900B4:
  /* 10E914 801900B4 5420FFF9 */      bnel $at, $zero, .L8019009C
  /* 10E918 801900B8 8C580000 */        lw $t8, ($v0) # D_ovl65_801937B4 + 0
  /* 10E91C 801900BC 91590014 */       lbu $t9, 0x14($t2) # gSceneData + 20
  /* 10E920 801900C0 2F21000C */     sltiu $at, $t9, 0xc
  /* 10E924 801900C4 10200065 */      beqz $at, jtgt_ovl65_8019025C
  /* 10E928 801900C8 0019C880 */       sll $t9, $t9, 2
  /* 10E92C 801900CC 3C018019 */       lui $at, %hi(jtbl_ovl65_80192F34)
  /* 10E930 801900D0 00390821 */      addu $at, $at, $t9
  /* 10E934 801900D4 8C392F34 */        lw $t9, %lo(jtbl_ovl65_80192F34)($at)
  /* 10E938 801900D8 03200008 */        jr $t9
  /* 10E93C 801900DC 00000000 */       nop 
  glabel jtgt_ovl65_801900E0
  /* 10E940 801900E0 8C6E0038 */        lw $t6, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E944 801900E4 55C00004 */      bnel $t6, $zero, .L801900F8
  /* 10E948 801900E8 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  /* 10E94C 801900EC 1000005E */         b .L80190268
  /* 10E950 801900F0 00000000 */       nop 
  /* 10E954 801900F4 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  .L801900F8:
  /* 10E958 801900F8 55E00059 */      bnel $t7, $zero, .L80190260
  /* 10E95C 801900FC 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E960 80190100 10000059 */         b .L80190268
  /* 10E964 80190104 00000000 */       nop 
  glabel jtgt_ovl65_80190108
  /* 10E968 80190108 8C780038 */        lw $t8, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E96C 8019010C 57000004 */      bnel $t8, $zero, .L80190120
  /* 10E970 80190110 8C790040 */        lw $t9, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  /* 10E974 80190114 10000054 */         b .L80190268
  /* 10E978 80190118 00000000 */       nop 
  /* 10E97C 8019011C 8C790040 */        lw $t9, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  .L80190120:
  /* 10E980 80190120 5720004F */      bnel $t9, $zero, .L80190260
  /* 10E984 80190124 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E988 80190128 1000004F */         b .L80190268
  /* 10E98C 8019012C 00000000 */       nop 
  glabel jtgt_ovl65_80190130
  /* 10E990 80190130 8C6E0038 */        lw $t6, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E994 80190134 55C0004A */      bnel $t6, $zero, .L80190260
  /* 10E998 80190138 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E99C 8019013C 1000004A */         b .L80190268
  /* 10E9A0 80190140 00000000 */       nop 
  glabel jtgt_ovl65_80190144
  /* 10E9A4 80190144 8C6F0038 */        lw $t7, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E9A8 80190148 55E00045 */      bnel $t7, $zero, .L80190260
  /* 10E9AC 8019014C 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E9B0 80190150 10000045 */         b .L80190268
  /* 10E9B4 80190154 00000000 */       nop 
  glabel jtgt_ovl65_80190158
  /* 10E9B8 80190158 8C780038 */        lw $t8, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E9BC 8019015C 57000004 */      bnel $t8, $zero, .L80190170
  /* 10E9C0 80190160 8C79003C */        lw $t9, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  /* 10E9C4 80190164 10000040 */         b .L80190268
  /* 10E9C8 80190168 00000000 */       nop 
  /* 10E9CC 8019016C 8C79003C */        lw $t9, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  .L80190170:
  /* 10E9D0 80190170 5720003B */      bnel $t9, $zero, .L80190260
  /* 10E9D4 80190174 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10E9D8 80190178 1000003B */         b .L80190268
  /* 10E9DC 8019017C 00000000 */       nop 
  glabel jtgt_ovl65_80190180
  /* 10E9E0 80190180 8C6E0038 */        lw $t6, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10E9E4 80190184 55C00004 */      bnel $t6, $zero, .L80190198
  /* 10E9E8 80190188 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  /* 10E9EC 8019018C 10000036 */         b .L80190268
  /* 10E9F0 80190190 00000000 */       nop 
  /* 10E9F4 80190194 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  .L80190198:
  /* 10E9F8 80190198 55E00004 */      bnel $t7, $zero, .L801901AC
  /* 10E9FC 8019019C 8C780040 */        lw $t8, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  /* 10EA00 801901A0 10000031 */         b .L80190268
  /* 10EA04 801901A4 00000000 */       nop 
  /* 10EA08 801901A8 8C780040 */        lw $t8, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  .L801901AC:
  /* 10EA0C 801901AC 5700002C */      bnel $t8, $zero, .L80190260
  /* 10EA10 801901B0 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EA14 801901B4 1000002C */         b .L80190268
  /* 10EA18 801901B8 00000000 */       nop 
  glabel jtgt_ovl65_801901BC
  /* 10EA1C 801901BC 8C790038 */        lw $t9, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10EA20 801901C0 57200027 */      bnel $t9, $zero, .L80190260
  /* 10EA24 801901C4 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EA28 801901C8 10000027 */         b .L80190268
  /* 10EA2C 801901CC 00000000 */       nop 
  glabel jtgt_ovl65_801901D0
  /* 10EA30 801901D0 8C6E0038 */        lw $t6, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10EA34 801901D4 55C00004 */      bnel $t6, $zero, .L801901E8
  /* 10EA38 801901D8 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  /* 10EA3C 801901DC 10000022 */         b .L80190268
  /* 10EA40 801901E0 00000000 */       nop 
  /* 10EA44 801901E4 8C6F003C */        lw $t7, 0x3c($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 60
  .L801901E8:
  /* 10EA48 801901E8 55E00004 */      bnel $t7, $zero, .L801901FC
  /* 10EA4C 801901EC 8C780040 */        lw $t8, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  /* 10EA50 801901F0 1000001D */         b .L80190268
  /* 10EA54 801901F4 00000000 */       nop 
  /* 10EA58 801901F8 8C780040 */        lw $t8, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  .L801901FC:
  /* 10EA5C 801901FC 57000018 */      bnel $t8, $zero, .L80190260
  /* 10EA60 80190200 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EA64 80190204 10000018 */         b .L80190268
  /* 10EA68 80190208 00000000 */       nop 
  glabel jtgt_ovl65_8019020C
  /* 10EA6C 8019020C 8C790038 */        lw $t9, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10EA70 80190210 57200004 */      bnel $t9, $zero, .L80190224
  /* 10EA74 80190214 8C6E0040 */        lw $t6, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  /* 10EA78 80190218 10000013 */         b .L80190268
  /* 10EA7C 8019021C 00000000 */       nop 
  /* 10EA80 80190220 8C6E0040 */        lw $t6, 0x40($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 64
  .L80190224:
  /* 10EA84 80190224 55C0000E */      bnel $t6, $zero, .L80190260
  /* 10EA88 80190228 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EA8C 8019022C 1000000E */         b .L80190268
  /* 10EA90 80190230 00000000 */       nop 
  glabel jtgt_ovl65_80190234
  /* 10EA94 80190234 8C6F0038 */        lw $t7, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10EA98 80190238 55E00009 */      bnel $t7, $zero, .L80190260
  /* 10EA9C 8019023C 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EAA0 80190240 10000009 */         b .L80190268
  /* 10EAA4 80190244 00000000 */       nop 
  glabel jtgt_ovl65_80190248
  /* 10EAA8 80190248 8C780038 */        lw $t8, 0x38($v1) # gmBonusStat_Defender_AttackGroupIndex_Count + 56
  /* 10EAAC 8019024C 57000004 */      bnel $t8, $zero, .L80190260
  /* 10EAB0 80190250 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EAB4 80190254 10000004 */         b .L80190268
  /* 10EAB8 80190258 00000000 */       nop 
  glabel jtgt_ovl65_8019025C
  /* 10EABC 8019025C 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  .L80190260:
  /* 10EAC0 80190260 372E0100 */       ori $t6, $t9, 0x100
  /* 10EAC4 80190264 AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  .L80190268:
  /* 10EAC8 80190268 3C028019 */       lui $v0, %hi(D_ovl65_801937B4)
  /* 10EACC 8019026C 3C068019 */       lui $a2, %hi(D_ovl65_80193890)
  /* 10EAD0 80190270 00001825 */        or $v1, $zero, $zero
  /* 10EAD4 80190274 24C63890 */     addiu $a2, $a2, %lo(D_ovl65_80193890)
  /* 10EAD8 80190278 244237B4 */     addiu $v0, $v0, %lo(D_ovl65_801937B4)
  /* 10EADC 8019027C 8C4F0000 */        lw $t7, ($v0) # D_ovl65_801937B4 + 0
  .L80190280:
  /* 10EAE0 80190280 3C188019 */       lui $t8, %hi(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EAE4 80190284 27183898 */     addiu $t8, $t8, %lo(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EAE8 80190288 51E00008 */      beql $t7, $zero, .L801902AC
  /* 10EAEC 8019028C 24420004 */     addiu $v0, $v0, 4
  /* 10EAF0 80190290 14460003 */       bne $v0, $a2, .L801902A0
  /* 10EAF4 80190294 00000000 */       nop 
  /* 10EAF8 80190298 10000003 */         b .L801902A8
  /* 10EAFC 8019029C 24030001 */     addiu $v1, $zero, 1
  .L801902A0:
  /* 10EB00 801902A0 1000000A */         b .L801902CC
  /* 10EB04 801902A4 00000000 */       nop 
  .L801902A8:
  /* 10EB08 801902A8 24420004 */     addiu $v0, $v0, 4
  .L801902AC:
  /* 10EB0C 801902AC 0058082B */      sltu $at, $v0, $t8
  /* 10EB10 801902B0 5420FFF3 */      bnel $at, $zero, .L80190280
  /* 10EB14 801902B4 8C4F0000 */        lw $t7, ($v0) # D_ovl65_801937B4 + 0
  /* 10EB18 801902B8 10600004 */      beqz $v1, .L801902CC
  /* 10EB1C 801902BC 00000000 */       nop 
  /* 10EB20 801902C0 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10EB24 801902C4 372E4000 */       ori $t6, $t9, 0x4000
  /* 10EB28 801902C8 AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  .L801902CC:
  /* 10EB2C 801902CC 3C038019 */       lui $v1, %hi(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EB30 801902D0 24633898 */     addiu $v1, $v1, %lo(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EB34 801902D4 8C620004 */        lw $v0, 4($v1) # gmBonusStat_Defender_IsSmashAttack_Count + 4
  /* 10EB38 801902D8 3C068019 */       lui $a2, %hi(D_ovl65_801937F4)
  /* 10EB3C 801902DC 24C637F4 */     addiu $a2, $a2, %lo(D_ovl65_801937F4)
  /* 10EB40 801902E0 10400007 */      beqz $v0, .L80190300
  /* 10EB44 801902E4 00000000 */       nop 
  /* 10EB48 801902E8 8C6F0000 */        lw $t7, ($v1) # gmBonusStat_Defender_IsSmashAttack_Count + 0
  /* 10EB4C 801902EC 15E00004 */      bnez $t7, .L80190300
  /* 10EB50 801902F0 00000000 */       nop 
  /* 10EB54 801902F4 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10EB58 801902F8 37190001 */       ori $t9, $t8, 1
  /* 10EB5C 801902FC AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190300:
  /* 10EB60 80190300 14400007 */      bnez $v0, .L80190320
  /* 10EB64 80190304 00000000 */       nop 
  /* 10EB68 80190308 8C6E0000 */        lw $t6, ($v1) # gmBonusStat_Defender_IsSmashAttack_Count + 0
  /* 10EB6C 8019030C 11C00004 */      beqz $t6, .L80190320
  /* 10EB70 80190310 00000000 */       nop 
  /* 10EB74 80190314 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10EB78 80190318 35F80002 */       ori $t8, $t7, 2
  /* 10EB7C 8019031C AD580030 */        sw $t8, 0x30($t2) # gSceneData + 48
  .L80190320:
  /* 10EB80 80190320 3C028019 */       lui $v0, %hi(D_ovl65_801937B4)
  /* 10EB84 80190324 00001825 */        or $v1, $zero, $zero
  /* 10EB88 80190328 244237B4 */     addiu $v0, $v0, %lo(D_ovl65_801937B4)
  /* 10EB8C 8019032C 8C590000 */        lw $t9, ($v0) # D_ovl65_801937B4 + 0
  .L80190330:
  /* 10EB90 80190330 3C0F8019 */       lui $t7, %hi(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EB94 80190334 25EF3898 */     addiu $t7, $t7, %lo(gmBonusStat_Defender_IsSmashAttack_Count)
  /* 10EB98 80190338 1320000B */      beqz $t9, .L80190368
  /* 10EB9C 8019033C 0046082B */      sltu $at, $v0, $a2
  /* 10EBA0 80190340 14200007 */      bnez $at, .L80190360
  /* 10EBA4 80190344 3C0E8019 */       lui $t6, %hi(D_ovl65_8019382C)
  /* 10EBA8 80190348 25CE382C */     addiu $t6, $t6, %lo(D_ovl65_8019382C)
  /* 10EBAC 8019034C 004E082B */      sltu $at, $v0, $t6
  /* 10EBB0 80190350 10200003 */      beqz $at, .L80190360
  /* 10EBB4 80190354 00000000 */       nop 
  /* 10EBB8 80190358 10000003 */         b .L80190368
  /* 10EBBC 8019035C 24630001 */     addiu $v1, $v1, 1
  .L80190360:
  /* 10EBC0 80190360 10000011 */         b .L801903A8
  /* 10EBC4 80190364 91460013 */       lbu $a2, 0x13($t2) # gSceneData + 19
  .L80190368:
  /* 10EBC8 80190368 24420004 */     addiu $v0, $v0, 4
  /* 10EBCC 8019036C 004F082B */      sltu $at, $v0, $t7
  /* 10EBD0 80190370 5420FFEF */      bnel $at, $zero, .L80190330
  /* 10EBD4 80190374 8C590000 */        lw $t9, ($v0) # D_ovl65_801937B4 + 0
  /* 10EBD8 80190378 1060000A */      beqz $v1, .L801903A4
  /* 10EBDC 8019037C 24010001 */     addiu $at, $zero, 1
  /* 10EBE0 80190380 54610006 */      bnel $v1, $at, .L8019039C
  /* 10EBE4 80190384 8D4E0030 */        lw $t6, 0x30($t2) # gSceneData + 48
  /* 10EBE8 80190388 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10EBEC 8019038C 37190008 */       ori $t9, $t8, 8
  /* 10EBF0 80190390 10000004 */         b .L801903A4
  /* 10EBF4 80190394 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  /* 10EBF8 80190398 8D4E0030 */        lw $t6, 0x30($t2) # gSceneData + 48
  .L8019039C:
  /* 10EBFC 8019039C 35CF0004 */       ori $t7, $t6, 4
  /* 10EC00 801903A0 AD4F0030 */        sw $t7, 0x30($t2) # gSceneData + 48
  .L801903A4:
  /* 10EC04 801903A4 91460013 */       lbu $a2, 0x13($t2) # gSceneData + 19
  .L801903A8:
  /* 10EC08 801903A8 24020074 */     addiu $v0, $zero, 0x74
  /* 10EC0C 801903AC 00C20019 */     multu $a2, $v0
  /* 10EC10 801903B0 8FA30018 */        lw $v1, 0x18($sp)
  /* 10EC14 801903B4 3C068013 */       lui $a2, %hi(D_ovl2_80130D68)
  /* 10EC18 801903B8 0000C012 */      mflo $t8
  /* 10EC1C 801903BC 0078C821 */      addu $t9, $v1, $t8
  /* 10EC20 801903C0 8F2E006C */        lw $t6, 0x6c($t9)
  /* 10EC24 801903C4 29C100C8 */      slti $at, $t6, 0xc8
  /* 10EC28 801903C8 54200005 */      bnel $at, $zero, .L801903E0
  /* 10EC2C 801903CC 8DB90000 */        lw $t9, ($t5) # D_ovl65_801938B0 + 0
  /* 10EC30 801903D0 8D4F002C */        lw $t7, 0x2c($t2) # gSceneData + 44
  /* 10EC34 801903D4 35F80080 */       ori $t8, $t7, 0x80
  /* 10EC38 801903D8 AD58002C */        sw $t8, 0x2c($t2) # gSceneData + 44
  /* 10EC3C 801903DC 8DB90000 */        lw $t9, ($t5) # D_ovl65_801938B0 + 0
  .L801903E0:
  /* 10EC40 801903E0 2F21001F */     sltiu $at, $t9, 0x1f
  /* 10EC44 801903E4 50200005 */      beql $at, $zero, .L801903FC
  /* 10EC48 801903E8 91580013 */       lbu $t8, 0x13($t2) # gSceneData + 19
  /* 10EC4C 801903EC 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10EC50 801903F0 35CF2000 */       ori $t7, $t6, 0x2000
  /* 10EC54 801903F4 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10EC58 801903F8 91580013 */       lbu $t8, 0x13($t2) # gSceneData + 19
  .L801903FC:
  /* 10EC5C 801903FC 03020019 */     multu $t8, $v0
  /* 10EC60 80190400 0000C812 */      mflo $t9
  /* 10EC64 80190404 00797021 */      addu $t6, $v1, $t9
  /* 10EC68 80190408 8DCF0054 */        lw $t7, 0x54($t6)
  /* 10EC6C 8019040C 15E00005 */      bnez $t7, .L80190424
  /* 10EC70 80190410 00000000 */       nop 
  /* 10EC74 80190414 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10EC78 80190418 3C010002 */       lui $at, 2
  /* 10EC7C 8019041C 0301C825 */        or $t9, $t8, $at
  /* 10EC80 80190420 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  .L80190424:
  /* 10EC84 80190424 8CC60D68 */        lw $a2, %lo(D_ovl2_80130D68)($a2)
  /* 10EC88 80190428 54C00006 */      bnel $a2, $zero, .L80190444
  /* 10EC8C 8019042C 91580013 */       lbu $t8, 0x13($t2) # gSceneData + 19
  /* 10EC90 80190430 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10EC94 80190434 3C010008 */       lui $at, 8
  /* 10EC98 80190438 01C17825 */        or $t7, $t6, $at
  /* 10EC9C 8019043C AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10ECA0 80190440 91580013 */       lbu $t8, 0x13($t2) # gSceneData + 19
  .L80190444:
  /* 10ECA4 80190444 03020019 */     multu $t8, $v0
  /* 10ECA8 80190448 0000C812 */      mflo $t9
  /* 10ECAC 8019044C 00796821 */      addu $t5, $v1, $t9
  /* 10ECB0 80190450 8DAE0030 */        lw $t6, 0x30($t5) # D_ovl65_801938B0 + 48
  /* 10ECB4 80190454 55C00010 */      bnel $t6, $zero, .L80190498
  /* 10ECB8 80190458 8DB8006C */        lw $t8, 0x6c($t5) # D_ovl65_801938B0 + 108
  /* 10ECBC 8019045C 8DAF0058 */        lw $t7, 0x58($t5) # D_ovl65_801938B0 + 88
  /* 10ECC0 80190460 55E0000D */      bnel $t7, $zero, .L80190498
  /* 10ECC4 80190464 8DB8006C */        lw $t8, 0x6c($t5) # D_ovl65_801938B0 + 108
  /* 10ECC8 80190468 914E0013 */       lbu $t6, 0x13($t2) # gSceneData + 19
  /* 10ECCC 8019046C 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10ECD0 80190470 3C010010 */       lui $at, 0x10
  /* 10ECD4 80190474 000E78C0 */       sll $t7, $t6, 3
  /* 10ECD8 80190478 01EE7823 */      subu $t7, $t7, $t6
  /* 10ECDC 8019047C 000F7880 */       sll $t7, $t7, 2
  /* 10ECE0 80190480 01EE7821 */      addu $t7, $t7, $t6
  /* 10ECE4 80190484 000F7880 */       sll $t7, $t7, 2
  /* 10ECE8 80190488 0301C825 */        or $t9, $t8, $at
  /* 10ECEC 8019048C AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  /* 10ECF0 80190490 006F6821 */      addu $t5, $v1, $t7
  /* 10ECF4 80190494 8DB8006C */        lw $t8, 0x6c($t5) # D_ovl65_801938B0 + 108
  .L80190498:
  /* 10ECF8 80190498 3C0F8019 */       lui $t7, %hi(D_ovl65_801933CC)
  /* 10ECFC 8019049C 17000005 */      bnez $t8, .L801904B4
  /* 10ED00 801904A0 00000000 */       nop 
  /* 10ED04 801904A4 8D59002C */        lw $t9, 0x2c($t2) # gSceneData + 44
  /* 10ED08 801904A8 3C010020 */       lui $at, 0x20
  /* 10ED0C 801904AC 03217025 */        or $t6, $t9, $at
  /* 10ED10 801904B0 AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  .L801904B4:
  /* 10ED14 801904B4 8DEF33CC */        lw $t7, %lo(D_ovl65_801933CC)($t7)
  /* 10ED18 801904B8 51E00006 */      beql $t7, $zero, .L801904D4
  /* 10ED1C 801904BC 29610003 */      slti $at, $t3, 3
  /* 10ED20 801904C0 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10ED24 801904C4 3C011000 */       lui $at, 0x1000
  /* 10ED28 801904C8 0301C825 */        or $t9, $t8, $at
  /* 10ED2C 801904CC AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  /* 10ED30 801904D0 29610003 */      slti $at, $t3, 3
  .L801904D4:
  /* 10ED34 801904D4 54200006 */      bnel $at, $zero, .L801904F0
  /* 10ED38 801904D8 29810003 */      slti $at, $t4, 3
  /* 10ED3C 801904DC 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10ED40 801904E0 3C012000 */       lui $at, 0x2000
  /* 10ED44 801904E4 01C17825 */        or $t7, $t6, $at
  /* 10ED48 801904E8 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10ED4C 801904EC 29810003 */      slti $at, $t4, 3
  .L801904F0:
  /* 10ED50 801904F0 14200005 */      bnez $at, .L80190508
  /* 10ED54 801904F4 3C0E8019 */       lui $t6, %hi(gmBonusStat_MewCatcher)
  /* 10ED58 801904F8 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10ED5C 801904FC 3C014000 */       lui $at, 0x4000
  /* 10ED60 80190500 0301C825 */        or $t9, $t8, $at
  /* 10ED64 80190504 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  .L80190508:
  /* 10ED68 80190508 91CE36AD */       lbu $t6, %lo(gmBonusStat_MewCatcher)($t6)
  /* 10ED6C 8019050C 11C00005 */      beqz $t6, .L80190524
  /* 10ED70 80190510 00000000 */       nop 
  /* 10ED74 80190514 8D4F002C */        lw $t7, 0x2c($t2) # gSceneData + 44
  /* 10ED78 80190518 3C010800 */       lui $at, 0x800
  /* 10ED7C 8019051C 01E1C025 */        or $t8, $t7, $at
  /* 10ED80 80190520 AD58002C */        sw $t8, 0x2c($t2) # gSceneData + 44
  .L80190524:
  /* 10ED84 80190524 1100001F */      beqz $t0, .L801905A4
  /* 10ED88 80190528 AFA60004 */        sw $a2, 4($sp)
  /* 10ED8C 8019052C 240D0018 */     addiu $t5, $zero, 0x18
  /* 10ED90 80190530 010D0019 */     multu $t0, $t5
  /* 10ED94 80190534 3C0C8019 */       lui $t4, %hi(D_ovl65_801933D0)
  /* 10ED98 80190538 258C33D0 */     addiu $t4, $t4, %lo(D_ovl65_801933D0)
  /* 10ED9C 8019053C 914E0013 */       lbu $t6, 0x13($t2) # gSceneData + 19
  /* 10EDA0 80190540 0000C812 */      mflo $t9
  /* 10EDA4 80190544 01991821 */      addu $v1, $t4, $t9
  /* 10EDA8 80190548 8C6FFFF0 */        lw $t7, -0x10($v1)
  /* 10EDAC 8019054C 55CF0016 */      bnel $t6, $t7, .L801905A8
  /* 10EDB0 80190550 00087080 */       sll $t6, $t0, 2
  /* 10EDB4 80190554 8C66FFF4 */        lw $a2, -0xc($v1)
  /* 10EDB8 80190558 14E60007 */       bne $a3, $a2, .L80190578
  /* 10EDBC 8019055C 00000000 */       nop 
  /* 10EDC0 80190560 8C62FFF8 */        lw $v0, -8($v1)
  /* 10EDC4 80190564 28410020 */      slti $at, $v0, 0x20
  /* 10EDC8 80190568 14200003 */      bnez $at, .L80190578
  /* 10EDCC 8019056C 2841002D */      slti $at, $v0, 0x2d
  /* 10EDD0 80190570 5420000A */      bnel $at, $zero, .L8019059C
  /* 10EDD4 80190574 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  .L80190578:
  /* 10EDD8 80190578 5526000B */      bnel $t1, $a2, .L801905A8
  /* 10EDDC 8019057C 00087080 */       sll $t6, $t0, 2
  /* 10EDE0 80190580 8C62FFF8 */        lw $v0, -8($v1)
  /* 10EDE4 80190584 28410017 */      slti $at, $v0, 0x17
  /* 10EDE8 80190588 14200006 */      bnez $at, .L801905A4
  /* 10EDEC 8019058C 28410020 */      slti $at, $v0, 0x20
  /* 10EDF0 80190590 50200005 */      beql $at, $zero, .L801905A8
  /* 10EDF4 80190594 00087080 */       sll $t6, $t0, 2
  /* 10EDF8 80190598 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  .L8019059C:
  /* 10EDFC 8019059C 37190010 */       ori $t9, $t8, 0x10
  /* 10EE00 801905A0 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L801905A4:
  /* 10EE04 801905A4 00087080 */       sll $t6, $t0, 2
  .L801905A8:
  /* 10EE08 801905A8 3C0C8019 */       lui $t4, %hi(D_ovl65_801933D0)
  /* 10EE0C 801905AC 01C87023 */      subu $t6, $t6, $t0
  /* 10EE10 801905B0 258C33D0 */     addiu $t4, $t4, %lo(D_ovl65_801933D0)
  /* 10EE14 801905B4 000E70C0 */       sll $t6, $t6, 3
  /* 10EE18 801905B8 018E1821 */      addu $v1, $t4, $t6
  /* 10EE1C 801905BC 240D0018 */     addiu $t5, $zero, 0x18
  /* 10EE20 801905C0 11000013 */      beqz $t0, .L80190610
  /* 10EE24 801905C4 8C62FFF0 */        lw $v0, -0x10($v1)
  /* 10EE28 801905C8 914F0013 */       lbu $t7, 0x13($t2) # gSceneData + 19
  /* 10EE2C 801905CC 15E20010 */       bne $t7, $v0, .L80190610
  /* 10EE30 801905D0 00000000 */       nop 
  /* 10EE34 801905D4 8C78FFF4 */        lw $t8, -0xc($v1)
  /* 10EE38 801905D8 14F8000D */       bne $a3, $t8, .L80190610
  /* 10EE3C 801905DC 00000000 */       nop 
  /* 10EE40 801905E0 8C79FFF8 */        lw $t9, -8($v1)
  /* 10EE44 801905E4 2401000E */     addiu $at, $zero, 0xe
  /* 10EE48 801905E8 17210009 */       bne $t9, $at, .L80190610
  /* 10EE4C 801905EC 00000000 */       nop 
  /* 10EE50 801905F0 946EFFFC */       lhu $t6, -4($v1)
  /* 10EE54 801905F4 24010039 */     addiu $at, $zero, 0x39
  /* 10EE58 801905F8 31CF03FF */      andi $t7, $t6, 0x3ff
  /* 10EE5C 801905FC 15E10004 */       bne $t7, $at, .L80190610
  /* 10EE60 80190600 00000000 */       nop 
  /* 10EE64 80190604 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10EE68 80190608 37190020 */       ori $t9, $t8, 0x20
  /* 10EE6C 8019060C AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190610:
  /* 10EE70 80190610 1100000E */      beqz $t0, .L8019064C
  /* 10EE74 80190614 00000000 */       nop 
  /* 10EE78 80190618 914E0013 */       lbu $t6, 0x13($t2) # gSceneData + 19
  /* 10EE7C 8019061C 15C2000B */       bne $t6, $v0, .L8019064C
  /* 10EE80 80190620 00000000 */       nop 
  /* 10EE84 80190624 9466FFFC */       lhu $a2, -4($v1)
  /* 10EE88 80190628 30C603FF */      andi $a2, $a2, 0x3ff
  /* 10EE8C 8019062C 50860004 */      beql $a0, $a2, .L80190640
  /* 10EE90 80190630 8D4F002C */        lw $t7, 0x2c($t2) # gSceneData + 44
  /* 10EE94 80190634 14A60005 */       bne $a1, $a2, .L8019064C
  /* 10EE98 80190638 00000000 */       nop 
  /* 10EE9C 8019063C 8D4F002C */        lw $t7, 0x2c($t2) # gSceneData + 44
  .L80190640:
  /* 10EEA0 80190640 3C018000 */       lui $at, 0x8000
  /* 10EEA4 80190644 01E1C025 */        or $t8, $t7, $at
  /* 10EEA8 80190648 AD58002C */        sw $t8, 0x2c($t2) # gSceneData + 44
  .L8019064C:
  /* 10EEAC 8019064C 3C048019 */       lui $a0, %hi(D_ovl65_801933C8)
  /* 10EEB0 80190650 8C8433C8 */        lw $a0, %lo(D_ovl65_801933C8)($a0)
  /* 10EEB4 80190654 240100BD */     addiu $at, $zero, 0xbd
  /* 10EEB8 80190658 14810004 */       bne $a0, $at, .L8019066C
  /* 10EEBC 8019065C 00000000 */       nop 
  /* 10EEC0 80190660 8D590030 */        lw $t9, 0x30($t2) # gSceneData + 48
  /* 10EEC4 80190664 372E0040 */       ori $t6, $t9, 0x40
  /* 10EEC8 80190668 AD4E0030 */        sw $t6, 0x30($t2) # gSceneData + 48
  .L8019066C:
  /* 10EECC 8019066C 50800005 */      beql $a0, $zero, .L80190684
  /* 10EED0 80190670 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10EED4 80190674 24010001 */     addiu $at, $zero, 1
  /* 10EED8 80190678 14810004 */       bne $a0, $at, .L8019068C
  /* 10EEDC 8019067C 00000000 */       nop 
  /* 10EEE0 80190680 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  .L80190684:
  /* 10EEE4 80190684 35F80080 */       ori $t8, $t7, 0x80
  /* 10EEE8 80190688 AD580030 */        sw $t8, 0x30($t2) # gSceneData + 48
  .L8019068C:
  /* 10EEEC 8019068C 15240004 */       bne $t1, $a0, .L801906A0
  /* 10EEF0 80190690 00000000 */       nop 
  /* 10EEF4 80190694 8D590030 */        lw $t9, 0x30($t2) # gSceneData + 48
  /* 10EEF8 80190698 372E0100 */       ori $t6, $t9, 0x100
  /* 10EEFC 8019069C AD4E0030 */        sw $t6, 0x30($t2) # gSceneData + 48
  .L801906A0:
  /* 10EF00 801906A0 1100000D */      beqz $t0, .L801906D8
  /* 10EF04 801906A4 2404FFFF */     addiu $a0, $zero, -1
  /* 10EF08 801906A8 1082000B */       beq $a0, $v0, .L801906D8
  /* 10EF0C 801906AC 00000000 */       nop 
  /* 10EF10 801906B0 8C6FFFF4 */        lw $t7, -0xc($v1)
  /* 10EF14 801906B4 24010004 */     addiu $at, $zero, 4
  /* 10EF18 801906B8 15E10007 */       bne $t7, $at, .L801906D8
  /* 10EF1C 801906BC 00000000 */       nop 
  /* 10EF20 801906C0 8C78FFF8 */        lw $t8, -8($v1)
  /* 10EF24 801906C4 17000004 */      bnez $t8, .L801906D8
  /* 10EF28 801906C8 00000000 */       nop 
  /* 10EF2C 801906CC 8D590030 */        lw $t9, 0x30($t2) # gSceneData + 48
  /* 10EF30 801906D0 372E0200 */       ori $t6, $t9, 0x200
  /* 10EF34 801906D4 AD4E0030 */        sw $t6, 0x30($t2) # gSceneData + 48
  .L801906D8:
  /* 10EF38 801906D8 1100000A */      beqz $t0, .L80190704
  /* 10EF3C 801906DC 2404FFFF */     addiu $a0, $zero, -1
  /* 10EF40 801906E0 50820009 */      beql $a0, $v0, .L80190708
  /* 10EF44 801906E4 91590013 */       lbu $t9, 0x13($t2) # gSceneData + 19
  /* 10EF48 801906E8 8C6FFFF4 */        lw $t7, -0xc($v1)
  /* 10EF4C 801906EC 54EF0006 */      bnel $a3, $t7, .L80190708
  /* 10EF50 801906F0 91590013 */       lbu $t9, 0x13($t2) # gSceneData + 19
  /* 10EF54 801906F4 8C78FFF8 */        lw $t8, -8($v1)
  /* 10EF58 801906F8 24010017 */     addiu $at, $zero, 0x17
  /* 10EF5C 801906FC 5301000C */      beql $t8, $at, .L80190730
  /* 10EF60 80190700 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  .L80190704:
  /* 10EF64 80190704 91590013 */       lbu $t9, 0x13($t2) # gSceneData + 19
  .L80190708:
  /* 10EF68 80190708 1722000B */       bne $t9, $v0, .L80190738
  /* 10EF6C 8019070C 00000000 */       nop 
  /* 10EF70 80190710 8C6EFFF4 */        lw $t6, -0xc($v1)
  /* 10EF74 80190714 14EE0008 */       bne $a3, $t6, .L80190738
  /* 10EF78 80190718 00000000 */       nop 
  /* 10EF7C 8019071C 8C6FFFF8 */        lw $t7, -8($v1)
  /* 10EF80 80190720 24010010 */     addiu $at, $zero, 0x10
  /* 10EF84 80190724 15E10004 */       bne $t7, $at, .L80190738
  /* 10EF88 80190728 00000000 */       nop 
  /* 10EF8C 8019072C 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  .L80190730:
  /* 10EF90 80190730 37190400 */       ori $t9, $t8, 0x400
  /* 10EF94 80190734 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190738:
  /* 10EF98 80190738 1100000D */      beqz $t0, .L80190770
  /* 10EF9C 8019073C 00000000 */       nop 
  /* 10EFA0 80190740 1082000B */       beq $a0, $v0, .L80190770
  /* 10EFA4 80190744 00000000 */       nop 
  /* 10EFA8 80190748 8C6EFFF4 */        lw $t6, -0xc($v1)
  /* 10EFAC 8019074C 24010004 */     addiu $at, $zero, 4
  /* 10EFB0 80190750 15C10007 */       bne $t6, $at, .L80190770
  /* 10EFB4 80190754 00000000 */       nop 
  /* 10EFB8 80190758 8C6FFFF8 */        lw $t7, -8($v1)
  /* 10EFBC 8019075C 152F0004 */       bne $t1, $t7, .L80190770
  /* 10EFC0 80190760 00000000 */       nop 
  /* 10EFC4 80190764 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10EFC8 80190768 37190800 */       ori $t9, $t8, 0x800
  /* 10EFCC 8019076C AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190770:
  /* 10EFD0 80190770 51000011 */      beql $t0, $zero, .L801907B8
  /* 10EFD4 80190774 8FA30018 */        lw $v1, 0x18($sp)
  /* 10EFD8 80190778 5082000F */      beql $a0, $v0, .L801907B8
  /* 10EFDC 8019077C 8FA30018 */        lw $v1, 0x18($sp)
  /* 10EFE0 80190780 8C6EFFF4 */        lw $t6, -0xc($v1)
  /* 10EFE4 80190784 552E000C */      bnel $t1, $t6, .L801907B8
  /* 10EFE8 80190788 8FA30018 */        lw $v1, 0x18($sp)
  /* 10EFEC 8019078C 8C62FFF8 */        lw $v0, -8($v1)
  /* 10EFF0 80190790 24010012 */     addiu $at, $zero, 0x12
  /* 10EFF4 80190794 50410005 */      beql $v0, $at, .L801907AC
  /* 10EFF8 80190798 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10EFFC 8019079C 24010013 */     addiu $at, $zero, 0x13
  /* 10F000 801907A0 54410005 */      bnel $v0, $at, .L801907B8
  /* 10F004 801907A4 8FA30018 */        lw $v1, 0x18($sp)
  /* 10F008 801907A8 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  .L801907AC:
  /* 10F00C 801907AC 35F81000 */       ori $t8, $t7, 0x1000
  /* 10F010 801907B0 AD580030 */        sw $t8, 0x30($t2) # gSceneData + 48
  /* 10F014 801907B4 8FA30018 */        lw $v1, 0x18($sp)
  .L801907B8:
  /* 10F018 801907B8 24020064 */     addiu $v0, $zero, 0x64
  /* 10F01C 801907BC 90640006 */       lbu $a0, 6($v1)
  /* 10F020 801907C0 1044000A */       beq $v0, $a0, .L801907EC
  /* 10F024 801907C4 00000000 */       nop 
  /* 10F028 801907C8 8D59001C */        lw $t9, 0x1c($t2) # gSceneData + 28
  /* 10F02C 801907CC 24010001 */     addiu $at, $zero, 1
  /* 10F030 801907D0 17210006 */       bne $t9, $at, .L801907EC
  /* 10F034 801907D4 00000000 */       nop 
  /* 10F038 801907D8 8D4E0030 */        lw $t6, 0x30($t2) # gSceneData + 48
  /* 10F03C 801907DC 3C010001 */       lui $at, 1
  /* 10F040 801907E0 01C17825 */        or $t7, $t6, $at
  /* 10F044 801907E4 AD4F0030 */        sw $t7, 0x30($t2) # gSceneData + 48
  /* 10F048 801907E8 90640006 */       lbu $a0, 6($v1)
  .L801907EC:
  /* 10F04C 801907EC 5044000A */      beql $v0, $a0, .L80190818
  /* 10F050 801907F0 914F0013 */       lbu $t7, 0x13($t2) # gSceneData + 19
  /* 10F054 801907F4 8D58001C */        lw $t8, 0x1c($t2) # gSceneData + 28
  /* 10F058 801907F8 240100D5 */     addiu $at, $zero, 0xd5
  /* 10F05C 801907FC 57010006 */      bnel $t8, $at, .L80190818
  /* 10F060 80190800 914F0013 */       lbu $t7, 0x13($t2) # gSceneData + 19
  /* 10F064 80190804 8D590030 */        lw $t9, 0x30($t2) # gSceneData + 48
  /* 10F068 80190808 3C010002 */       lui $at, 2
  /* 10F06C 8019080C 03217025 */        or $t6, $t9, $at
  /* 10F070 80190810 AD4E0030 */        sw $t6, 0x30($t2) # gSceneData + 48
  /* 10F074 80190814 914F0013 */       lbu $t7, 0x13($t2) # gSceneData + 19
  .L80190818:
  /* 10F078 80190818 00002825 */        or $a1, $zero, $zero
  /* 10F07C 8019081C 000FC0C0 */       sll $t8, $t7, 3
  /* 10F080 80190820 030FC023 */      subu $t8, $t8, $t7
  /* 10F084 80190824 0018C080 */       sll $t8, $t8, 2
  /* 10F088 80190828 030FC021 */      addu $t8, $t8, $t7
  /* 10F08C 8019082C 0018C080 */       sll $t8, $t8, 2
  /* 10F090 80190830 0078C821 */      addu $t9, $v1, $t8
  /* 10F094 80190834 8F24006C */        lw $a0, 0x6c($t9)
  /* 10F098 80190838 0082001A */       div $zero, $a0, $v0
  /* 10F09C 8019083C 00003812 */      mflo $a3
  /* 10F0A0 80190840 00E03025 */        or $a2, $a3, $zero
  /* 10F0A4 80190844 14400002 */      bnez $v0, .L80190850
  /* 10F0A8 80190848 00000000 */       nop 
  /* 10F0AC 8019084C 0007000D */     break 7
  .L80190850:
  /* 10F0B0 80190850 2401FFFF */     addiu $at, $zero, -1
  /* 10F0B4 80190854 14410004 */       bne $v0, $at, .L80190868
  /* 10F0B8 80190858 3C018000 */       lui $at, 0x8000
  /* 10F0BC 8019085C 14810002 */       bne $a0, $at, .L80190868
  /* 10F0C0 80190860 00000000 */       nop 
  /* 10F0C4 80190864 0006000D */     break 6
  .L80190868:
  /* 10F0C8 80190868 00E20019 */     multu $a3, $v0
  /* 10F0CC 8019086C 00007012 */      mflo $t6
  /* 10F0D0 80190870 008E2023 */      subu $a0, $a0, $t6
  /* 10F0D4 80190874 10E00015 */      beqz $a3, .L801908CC
  /* 10F0D8 80190878 2407000A */     addiu $a3, $zero, 0xa
  /* 10F0DC 8019087C 0087001A */       div $zero, $a0, $a3
  /* 10F0E0 80190880 00001012 */      mflo $v0
  /* 10F0E4 80190884 14E00002 */      bnez $a3, .L80190890
  /* 10F0E8 80190888 00000000 */       nop 
  /* 10F0EC 8019088C 0007000D */     break 7
  .L80190890:
  /* 10F0F0 80190890 2401FFFF */     addiu $at, $zero, -1
  /* 10F0F4 80190894 14E10004 */       bne $a3, $at, .L801908A8
  /* 10F0F8 80190898 3C018000 */       lui $at, 0x8000
  /* 10F0FC 8019089C 14810002 */       bne $a0, $at, .L801908A8
  /* 10F100 801908A0 00000000 */       nop 
  /* 10F104 801908A4 0006000D */     break 6
  .L801908A8:
  /* 10F108 801908A8 14C2001C */       bne $a2, $v0, .L8019091C
  /* 10F10C 801908AC 00000000 */       nop 
  /* 10F110 801908B0 00470019 */     multu $v0, $a3
  /* 10F114 801908B4 00007812 */      mflo $t7
  /* 10F118 801908B8 008FC023 */      subu $t8, $a0, $t7
  /* 10F11C 801908BC 14580017 */       bne $v0, $t8, .L8019091C
  /* 10F120 801908C0 00000000 */       nop 
  /* 10F124 801908C4 10000015 */         b .L8019091C
  /* 10F128 801908C8 24050001 */     addiu $a1, $zero, 1
  .L801908CC:
  /* 10F12C 801908CC 2407000A */     addiu $a3, $zero, 0xa
  /* 10F130 801908D0 0087001A */       div $zero, $a0, $a3
  /* 10F134 801908D4 00001012 */      mflo $v0
  /* 10F138 801908D8 14E00002 */      bnez $a3, .L801908E4
  /* 10F13C 801908DC 00000000 */       nop 
  /* 10F140 801908E0 0007000D */     break 7
  .L801908E4:
  /* 10F144 801908E4 2401FFFF */     addiu $at, $zero, -1
  /* 10F148 801908E8 14E10004 */       bne $a3, $at, .L801908FC
  /* 10F14C 801908EC 3C018000 */       lui $at, 0x8000
  /* 10F150 801908F0 14810002 */       bne $a0, $at, .L801908FC
  /* 10F154 801908F4 00000000 */       nop 
  /* 10F158 801908F8 0006000D */     break 6
  .L801908FC:
  /* 10F15C 801908FC 10400007 */      beqz $v0, .L8019091C
  /* 10F160 80190900 00000000 */       nop 
  /* 10F164 80190904 00470019 */     multu $v0, $a3
  /* 10F168 80190908 0000C812 */      mflo $t9
  /* 10F16C 8019090C 00997023 */      subu $t6, $a0, $t9
  /* 10F170 80190910 144E0002 */       bne $v0, $t6, .L8019091C
  /* 10F174 80190914 00000000 */       nop 
  /* 10F178 80190918 24050001 */     addiu $a1, $zero, 1
  .L8019091C:
  /* 10F17C 8019091C 50A00006 */      beql $a1, $zero, .L80190938
  /* 10F180 80190920 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F184 80190924 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10F188 80190928 3C010004 */       lui $at, 4
  /* 10F18C 8019092C 01E1C025 */        or $t8, $t7, $at
  /* 10F190 80190930 AD580030 */        sw $t8, 0x30($t2) # gSceneData + 48
  /* 10F194 80190934 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  .L80190938:
  /* 10F198 80190938 24010001 */     addiu $at, $zero, 1
  /* 10F19C 8019093C 15610047 */       bne $t3, $at, .L80190A5C
  /* 10F1A0 80190940 3C198019 */       lui $t9, %hi(D_ovl65_80192FA1)
  /* 10F1A4 80190944 93392FA1 */       lbu $t9, %lo(D_ovl65_80192FA1)($t9)
  /* 10F1A8 80190948 3C058019 */       lui $a1, %hi(D_ovl65_80192FB0)
  /* 10F1AC 8019094C 24070001 */     addiu $a3, $zero, 1
  /* 10F1B0 80190950 17200042 */      bnez $t9, .L80190A5C
  /* 10F1B4 80190954 24A52FB0 */     addiu $a1, $a1, %lo(D_ovl65_80192FB0)
  /* 10F1B8 80190958 24060002 */     addiu $a2, $zero, 2
  /* 10F1BC 8019095C 00CD0019 */     multu $a2, $t5
  /* 10F1C0 80190960 3C0E8019 */       lui $t6, %hi(D_ovl65_801933D0)
  /* 10F1C4 80190964 8DCE33D0 */        lw $t6, %lo(D_ovl65_801933D0)($t6)
  /* 10F1C8 80190968 3C198019 */       lui $t9, %hi(D_ovl65_801933E8)
  /* 10F1CC 8019096C 8F3933E8 */        lw $t9, %lo(D_ovl65_801933E8)($t9)
  /* 10F1D0 80190970 00AE7821 */      addu $t7, $a1, $t6
  /* 10F1D4 80190974 91F80000 */       lbu $t8, ($t7)
  /* 10F1D8 80190978 00B97021 */      addu $t6, $a1, $t9
  /* 10F1DC 8019097C 91CF0000 */       lbu $t7, ($t6)
  /* 10F1E0 80190980 A3B80024 */        sb $t8, 0x24($sp)
  /* 10F1E4 80190984 0000C012 */      mflo $t8
  /* 10F1E8 80190988 01981021 */      addu $v0, $t4, $t8
  /* 10F1EC 8019098C 8C590000 */        lw $t9, ($v0)
  /* 10F1F0 80190990 8C580018 */        lw $t8, 0x18($v0)
  /* 10F1F4 80190994 A3AF0025 */        sb $t7, 0x25($sp)
  /* 10F1F8 80190998 00B97021 */      addu $t6, $a1, $t9
  /* 10F1FC 8019099C 91CF0000 */       lbu $t7, ($t6)
  /* 10F200 801909A0 27A90024 */     addiu $t1, $sp, 0x24
  /* 10F204 801909A4 00B8C821 */      addu $t9, $a1, $t8
  /* 10F208 801909A8 932E0000 */       lbu $t6, ($t9)
  /* 10F20C 801909AC 01261821 */      addu $v1, $t1, $a2
  /* 10F210 801909B0 A06F0000 */        sb $t7, ($v1)
  /* 10F214 801909B4 8C4F0030 */        lw $t7, 0x30($v0)
  /* 10F218 801909B8 A06E0001 */        sb $t6, 1($v1)
  /* 10F21C 801909BC 8C4E0048 */        lw $t6, 0x48($v0)
  /* 10F220 801909C0 00AFC021 */      addu $t8, $a1, $t7
  /* 10F224 801909C4 93190000 */       lbu $t9, ($t8)
  /* 10F228 801909C8 00AE7821 */      addu $t7, $a1, $t6
  /* 10F22C 801909CC 91F80000 */       lbu $t8, ($t7)
  /* 10F230 801909D0 24C60004 */     addiu $a2, $a2, 4
  /* 10F234 801909D4 00C8082A */       slt $at, $a2, $t0
  /* 10F238 801909D8 24630004 */     addiu $v1, $v1, 4
  /* 10F23C 801909DC 24420060 */     addiu $v0, $v0, 0x60
  /* 10F240 801909E0 00002025 */        or $a0, $zero, $zero
  /* 10F244 801909E4 A079FFFE */        sb $t9, -2($v1)
  /* 10F248 801909E8 10200015 */      beqz $at, .L80190A40
  /* 10F24C 801909EC A078FFFF */        sb $t8, -1($v1)
  /* 10F250 801909F0 27B90024 */     addiu $t9, $sp, 0x24
  /* 10F254 801909F4 01193021 */      addu $a2, $t0, $t9
  /* 10F258 801909F8 24080005 */     addiu $t0, $zero, 5
  /* 10F25C 801909FC 8C4E0000 */        lw $t6, ($v0)
  .L80190A00:
  /* 10F260 80190A00 0124C821 */      addu $t9, $t1, $a0
  /* 10F264 80190A04 24420018 */     addiu $v0, $v0, 0x18
  /* 10F268 80190A08 00AE7821 */      addu $t7, $a1, $t6
  /* 10F26C 80190A0C 91F80000 */       lbu $t8, ($t7)
  /* 10F270 80190A10 932E0000 */       lbu $t6, ($t9)
  /* 10F274 80190A14 130E0002 */       beq $t8, $t6, .L80190A20
  /* 10F278 80190A18 00000000 */       nop 
  /* 10F27C 80190A1C 00003825 */        or $a3, $zero, $zero
  .L80190A20:
  /* 10F280 80190A20 14880003 */       bne $a0, $t0, .L80190A30
  /* 10F284 80190A24 24630001 */     addiu $v1, $v1, 1
  /* 10F288 80190A28 10000002 */         b .L80190A34
  /* 10F28C 80190A2C 00002025 */        or $a0, $zero, $zero
  .L80190A30:
  /* 10F290 80190A30 24840001 */     addiu $a0, $a0, 1
  .L80190A34:
  /* 10F294 80190A34 0066082B */      sltu $at, $v1, $a2
  /* 10F298 80190A38 5420FFF1 */      bnel $at, $zero, .L80190A00
  /* 10F29C 80190A3C 8C4E0000 */        lw $t6, ($v0)
  .L80190A40:
  /* 10F2A0 80190A40 50E00007 */      beql $a3, $zero, .L80190A60
  /* 10F2A4 80190A44 24010008 */     addiu $at, $zero, 8
  /* 10F2A8 80190A48 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10F2AC 80190A4C 3C010008 */       lui $at, 8
  /* 10F2B0 80190A50 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F2B4 80190A54 01E1C825 */        or $t9, $t7, $at
  /* 10F2B8 80190A58 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190A5C:
  /* 10F2BC 80190A5C 24010008 */     addiu $at, $zero, 8
  .L80190A60:
  /* 10F2C0 80190A60 15610048 */       bne $t3, $at, .L80190B84
  /* 10F2C4 80190A64 3C188019 */       lui $t8, %hi(D_ovl65_80192FA1)
  /* 10F2C8 80190A68 93182FA1 */       lbu $t8, %lo(D_ovl65_80192FA1)($t8)
  /* 10F2CC 80190A6C 3C038019 */       lui $v1, %hi(D_ovl65_80192800)
  /* 10F2D0 80190A70 24632800 */     addiu $v1, $v1, %lo(D_ovl65_80192800)
  /* 10F2D4 80190A74 17000043 */      bnez $t8, .L80190B84
  /* 10F2D8 80190A78 3C0E8019 */       lui $t6, %hi(D_ovl65_801933D0)
  /* 10F2DC 80190A7C 8DCE33D0 */        lw $t6, %lo(D_ovl65_801933D0)($t6)
  /* 10F2E0 80190A80 3C188019 */       lui $t8, %hi(D_ovl65_80192800)
  /* 10F2E4 80190A84 93182800 */       lbu $t8, %lo(D_ovl65_80192800)($t8)
  /* 10F2E8 80190A88 006E7821 */      addu $t7, $v1, $t6
  /* 10F2EC 80190A8C 91F90000 */       lbu $t9, ($t7)
  /* 10F2F0 80190A90 24070001 */     addiu $a3, $zero, 1
  /* 10F2F4 80190A94 3C0E8019 */       lui $t6, %hi(D_ovl65_801933E8)
  /* 10F2F8 80190A98 13380002 */       beq $t9, $t8, .L80190AA4
  /* 10F2FC 80190A9C 24060003 */     addiu $a2, $zero, 3
  /* 10F300 80190AA0 00003825 */        or $a3, $zero, $zero
  .L80190AA4:
  /* 10F304 80190AA4 8DCE33E8 */        lw $t6, %lo(D_ovl65_801933E8)($t6)
  /* 10F308 80190AA8 3C188019 */       lui $t8, %hi(D_ovl65_80192801)
  /* 10F30C 80190AAC 93182801 */       lbu $t8, %lo(D_ovl65_80192801)($t8)
  /* 10F310 80190AB0 006E7821 */      addu $t7, $v1, $t6
  /* 10F314 80190AB4 91F90000 */       lbu $t9, ($t7)
  /* 10F318 80190AB8 3C0E8019 */       lui $t6, %hi(D_ovl65_80193400)
  /* 10F31C 80190ABC 13380002 */       beq $t9, $t8, .L80190AC8
  /* 10F320 80190AC0 00000000 */       nop 
  /* 10F324 80190AC4 00003825 */        or $a3, $zero, $zero
  .L80190AC8:
  /* 10F328 80190AC8 8DCE3400 */        lw $t6, %lo(D_ovl65_80193400)($t6)
  /* 10F32C 80190ACC 3C188019 */       lui $t8, %hi(D_ovl65_80192802)
  /* 10F330 80190AD0 93182802 */       lbu $t8, %lo(D_ovl65_80192802)($t8)
  /* 10F334 80190AD4 006E7821 */      addu $t7, $v1, $t6
  /* 10F338 80190AD8 91F90000 */       lbu $t9, ($t7)
  /* 10F33C 80190ADC 13380002 */       beq $t9, $t8, .L80190AE8
  /* 10F340 80190AE0 00000000 */       nop 
  /* 10F344 80190AE4 00003825 */        or $a3, $zero, $zero
  .L80190AE8:
  /* 10F348 80190AE8 00CD0019 */     multu $a2, $t5
  /* 10F34C 80190AEC 00662021 */      addu $a0, $v1, $a2
  /* 10F350 80190AF0 00007012 */      mflo $t6
  /* 10F354 80190AF4 018E1021 */      addu $v0, $t4, $t6
  /* 10F358 80190AF8 8C4F0000 */        lw $t7, ($v0)
  /* 10F35C 80190AFC 908E0000 */       lbu $t6, ($a0)
  /* 10F360 80190B00 006FC821 */      addu $t9, $v1, $t7
  /* 10F364 80190B04 93380000 */       lbu $t8, ($t9)
  /* 10F368 80190B08 530E0003 */      beql $t8, $t6, .L80190B18
  /* 10F36C 80190B0C 8C4F0018 */        lw $t7, 0x18($v0)
  /* 10F370 80190B10 00003825 */        or $a3, $zero, $zero
  /* 10F374 80190B14 8C4F0018 */        lw $t7, 0x18($v0)
  .L80190B18:
  /* 10F378 80190B18 908E0001 */       lbu $t6, 1($a0)
  /* 10F37C 80190B1C 006FC821 */      addu $t9, $v1, $t7
  /* 10F380 80190B20 93380000 */       lbu $t8, ($t9)
  /* 10F384 80190B24 530E0003 */      beql $t8, $t6, .L80190B34
  /* 10F388 80190B28 8C4F0030 */        lw $t7, 0x30($v0)
  /* 10F38C 80190B2C 00003825 */        or $a3, $zero, $zero
  /* 10F390 80190B30 8C4F0030 */        lw $t7, 0x30($v0)
  .L80190B34:
  /* 10F394 80190B34 908E0002 */       lbu $t6, 2($a0)
  /* 10F398 80190B38 006FC821 */      addu $t9, $v1, $t7
  /* 10F39C 80190B3C 93380000 */       lbu $t8, ($t9)
  /* 10F3A0 80190B40 530E0003 */      beql $t8, $t6, .L80190B50
  /* 10F3A4 80190B44 8C4F0048 */        lw $t7, 0x48($v0)
  /* 10F3A8 80190B48 00003825 */        or $a3, $zero, $zero
  /* 10F3AC 80190B4C 8C4F0048 */        lw $t7, 0x48($v0)
  .L80190B50:
  /* 10F3B0 80190B50 908E0003 */       lbu $t6, 3($a0)
  /* 10F3B4 80190B54 006FC821 */      addu $t9, $v1, $t7
  /* 10F3B8 80190B58 93380000 */       lbu $t8, ($t9)
  /* 10F3BC 80190B5C 130E0002 */       beq $t8, $t6, .L80190B68
  /* 10F3C0 80190B60 00000000 */       nop 
  /* 10F3C4 80190B64 00003825 */        or $a3, $zero, $zero
  .L80190B68:
  /* 10F3C8 80190B68 50E00007 */      beql $a3, $zero, .L80190B88
  /* 10F3CC 80190B6C 24010004 */     addiu $at, $zero, 4
  /* 10F3D0 80190B70 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10F3D4 80190B74 3C010010 */       lui $at, 0x10
  /* 10F3D8 80190B78 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F3DC 80190B7C 01E1C825 */        or $t9, $t7, $at
  /* 10F3E0 80190B80 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190B84:
  /* 10F3E4 80190B84 24010004 */     addiu $at, $zero, 4
  .L80190B88:
  /* 10F3E8 80190B88 1561001F */       bne $t3, $at, .L80190C08
  /* 10F3EC 80190B8C 8FA30018 */        lw $v1, 0x18($sp)
  /* 10F3F0 80190B90 91580018 */       lbu $t8, 0x18($t2) # gSceneData + 24
  /* 10F3F4 80190B94 001870C0 */       sll $t6, $t8, 3
  /* 10F3F8 80190B98 01D87023 */      subu $t6, $t6, $t8
  /* 10F3FC 80190B9C 000E7080 */       sll $t6, $t6, 2
  /* 10F400 80190BA0 01D87021 */      addu $t6, $t6, $t8
  /* 10F404 80190BA4 000E7080 */       sll $t6, $t6, 2
  /* 10F408 80190BA8 006E1021 */      addu $v0, $v1, $t6
  /* 10F40C 80190BAC 8C4F0030 */        lw $t7, 0x30($v0)
  /* 10F410 80190BB0 15E0000D */      bnez $t7, .L80190BE8
  /* 10F414 80190BB4 00000000 */       nop 
  /* 10F418 80190BB8 8C590058 */        lw $t9, 0x58($v0)
  /* 10F41C 80190BBC 57200007 */      bnel $t9, $zero, .L80190BDC
  /* 10F420 80190BC0 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  /* 10F424 80190BC4 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10F428 80190BC8 3C010200 */       lui $at, 0x200
  /* 10F42C 80190BCC 03017025 */        or $t6, $t8, $at
  /* 10F430 80190BD0 10000005 */         b .L80190BE8
  /* 10F434 80190BD4 AD4E0030 */        sw $t6, 0x30($t2) # gSceneData + 48
  /* 10F438 80190BD8 8D4F0030 */        lw $t7, 0x30($t2) # gSceneData + 48
  .L80190BDC:
  /* 10F43C 80190BDC 3C010100 */       lui $at, 0x100
  /* 10F440 80190BE0 01E1C825 */        or $t9, $t7, $at
  /* 10F444 80190BE4 AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190BE8:
  /* 10F448 80190BE8 3C188019 */       lui $t8, %hi(D_ovl65_801936A4)
  /* 10F44C 80190BEC 8F1836A4 */        lw $t8, %lo(D_ovl65_801936A4)($t8)
  /* 10F450 80190BF0 53000006 */      beql $t8, $zero, .L80190C0C
  /* 10F454 80190BF4 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F458 80190BF8 8D4E0030 */        lw $t6, 0x30($t2) # gSceneData + 48
  /* 10F45C 80190BFC 3C010020 */       lui $at, 0x20
  /* 10F460 80190C00 01C17825 */        or $t7, $t6, $at
  /* 10F464 80190C04 AD4F0030 */        sw $t7, 0x30($t2) # gSceneData + 48
  .L80190C08:
  /* 10F468 80190C08 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  .L80190C0C:
  /* 10F46C 80190C0C 24010006 */     addiu $at, $zero, 6
  /* 10F470 80190C10 55610028 */      bnel $t3, $at, .L80190CB4
  /* 10F474 80190C14 2401000D */     addiu $at, $zero, 0xd
  /* 10F478 80190C18 91580018 */       lbu $t8, 0x18($t2) # gSceneData + 24
  /* 10F47C 80190C1C 8FB90018 */        lw $t9, 0x18($sp)
  /* 10F480 80190C20 001870C0 */       sll $t6, $t8, 3
  /* 10F484 80190C24 01D87023 */      subu $t6, $t6, $t8
  /* 10F488 80190C28 000E7080 */       sll $t6, $t6, 2
  /* 10F48C 80190C2C 01D87021 */      addu $t6, $t6, $t8
  /* 10F490 80190C30 000E7080 */       sll $t6, $t6, 2
  /* 10F494 80190C34 032E1021 */      addu $v0, $t9, $t6
  /* 10F498 80190C38 8C4F0030 */        lw $t7, 0x30($v0)
  /* 10F49C 80190C3C 55E0001D */      bnel $t7, $zero, .L80190CB4
  /* 10F4A0 80190C40 2401000D */     addiu $at, $zero, 0xd
  /* 10F4A4 80190C44 91580019 */       lbu $t8, 0x19($t2) # gSceneData + 25
  /* 10F4A8 80190C48 001870C0 */       sll $t6, $t8, 3
  /* 10F4AC 80190C4C 01D87023 */      subu $t6, $t6, $t8
  /* 10F4B0 80190C50 000E7080 */       sll $t6, $t6, 2
  /* 10F4B4 80190C54 01D87021 */      addu $t6, $t6, $t8
  /* 10F4B8 80190C58 000E7080 */       sll $t6, $t6, 2
  /* 10F4BC 80190C5C 032E1821 */      addu $v1, $t9, $t6
  /* 10F4C0 80190C60 8C6F0030 */        lw $t7, 0x30($v1)
  /* 10F4C4 80190C64 55E00013 */      bnel $t7, $zero, .L80190CB4
  /* 10F4C8 80190C68 2401000D */     addiu $at, $zero, 0xd
  /* 10F4CC 80190C6C 8C580058 */        lw $t8, 0x58($v0)
  /* 10F4D0 80190C70 5700000B */      bnel $t8, $zero, .L80190CA0
  /* 10F4D4 80190C74 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10F4D8 80190C78 8C790058 */        lw $t9, 0x58($v1)
  /* 10F4DC 80190C7C 57200008 */      bnel $t9, $zero, .L80190CA0
  /* 10F4E0 80190C80 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  /* 10F4E4 80190C84 8D4E0030 */        lw $t6, 0x30($t2) # gSceneData + 48
  /* 10F4E8 80190C88 3C010080 */       lui $at, 0x80
  /* 10F4EC 80190C8C 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F4F0 80190C90 01C17825 */        or $t7, $t6, $at
  /* 10F4F4 80190C94 10000006 */         b .L80190CB0
  /* 10F4F8 80190C98 AD4F0030 */        sw $t7, 0x30($t2) # gSceneData + 48
  /* 10F4FC 80190C9C 8D580030 */        lw $t8, 0x30($t2) # gSceneData + 48
  .L80190CA0:
  /* 10F500 80190CA0 3C010040 */       lui $at, 0x40
  /* 10F504 80190CA4 914B0017 */       lbu $t3, 0x17($t2) # gSceneData + 23
  /* 10F508 80190CA8 0301C825 */        or $t9, $t8, $at
  /* 10F50C 80190CAC AD590030 */        sw $t9, 0x30($t2) # gSceneData + 48
  .L80190CB0:
  /* 10F510 80190CB0 2401000D */     addiu $at, $zero, 0xd
  .L80190CB4:
  /* 10F514 80190CB4 55610024 */      bnel $t3, $at, .L80190D48
  /* 10F518 80190CB8 8D430030 */        lw $v1, 0x30($t2) # gSceneData + 48
  /* 10F51C 80190CBC 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10F520 80190CC0 8FB80004 */        lw $t8, 4($sp)
  /* 10F524 80190CC4 3C010040 */       lui $at, 0x40
  /* 10F528 80190CC8 01C17825 */        or $t7, $t6, $at
  /* 10F52C 80190CCC 17000004 */      bnez $t8, .L80190CE0
  /* 10F530 80190CD0 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10F534 80190CD4 3C010080 */       lui $at, 0x80
  /* 10F538 80190CD8 01E17025 */        or $t6, $t7, $at
  /* 10F53C 80190CDC AD4E002C */        sw $t6, 0x2c($t2) # gSceneData + 44
  .L80190CE0:
  /* 10F540 80190CE0 3C0F8013 */       lui $t7, %hi(D_ovl2_80130D6C)
  /* 10F544 80190CE4 8DEF0D6C */        lw $t7, %lo(D_ovl2_80130D6C)($t7)
  /* 10F548 80190CE8 3C028019 */       lui $v0, %hi(D_ovl65_801938B4)
  /* 10F54C 80190CEC 15E00005 */      bnez $t7, .L80190D04
  /* 10F550 80190CF0 00000000 */       nop 
  /* 10F554 80190CF4 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10F558 80190CF8 3C010100 */       lui $at, 0x100
  /* 10F55C 80190CFC 0301C825 */        or $t9, $t8, $at
  /* 10F560 80190D00 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  .L80190D04:
  /* 10F564 80190D04 8C4238B4 */        lw $v0, %lo(D_ovl65_801938B4)($v0)
  /* 10F568 80190D08 2C4101E1 */     sltiu $at, $v0, 0x1e1
  /* 10F56C 80190D0C 50200007 */      beql $at, $zero, .L80190D2C
  /* 10F570 80190D10 2C4102D1 */     sltiu $at, $v0, 0x2d1
  /* 10F574 80190D14 8D4E002C */        lw $t6, 0x2c($t2) # gSceneData + 44
  /* 10F578 80190D18 3C010400 */       lui $at, 0x400
  /* 10F57C 80190D1C 01C17825 */        or $t7, $t6, $at
  /* 10F580 80190D20 10000008 */         b .L80190D44
  /* 10F584 80190D24 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  /* 10F588 80190D28 2C4102D1 */     sltiu $at, $v0, 0x2d1
  .L80190D2C:
  /* 10F58C 80190D2C 50200006 */      beql $at, $zero, .L80190D48
  /* 10F590 80190D30 8D430030 */        lw $v1, 0x30($t2) # gSceneData + 48
  /* 10F594 80190D34 8D58002C */        lw $t8, 0x2c($t2) # gSceneData + 44
  /* 10F598 80190D38 3C010200 */       lui $at, 0x200
  /* 10F59C 80190D3C 0301C825 */        or $t9, $t8, $at
  /* 10F5A0 80190D40 AD59002C */        sw $t9, 0x2c($t2) # gSceneData + 44
  .L80190D44:
  /* 10F5A4 80190D44 8D430030 */        lw $v1, 0x30($t2) # gSceneData + 48
  .L80190D48:
  /* 10F5A8 80190D48 306E0008 */      andi $t6, $v1, 8
  /* 10F5AC 80190D4C 15C00040 */      bnez $t6, .L80190E50
  /* 10F5B0 80190D50 306F0004 */      andi $t7, $v1, 4
  /* 10F5B4 80190D54 15E0003E */      bnez $t7, .L80190E50
  /* 10F5B8 80190D58 00000000 */       nop 
  /* 10F5BC 80190D5C 8D42002C */        lw $v0, 0x2c($t2) # gSceneData + 44
  /* 10F5C0 80190D60 30580020 */      andi $t8, $v0, 0x20
  /* 10F5C4 80190D64 1700003A */      bnez $t8, .L80190E50
  /* 10F5C8 80190D68 30590010 */      andi $t9, $v0, 0x10
  /* 10F5CC 80190D6C 17200038 */      bnez $t9, .L80190E50
  /* 10F5D0 80190D70 304E0040 */      andi $t6, $v0, 0x40
  /* 10F5D4 80190D74 15C00036 */      bnez $t6, .L80190E50
  /* 10F5D8 80190D78 304F0100 */      andi $t7, $v0, 0x100
  /* 10F5DC 80190D7C 15E00034 */      bnez $t7, .L80190E50
  /* 10F5E0 80190D80 30580200 */      andi $t8, $v0, 0x200
  /* 10F5E4 80190D84 17000032 */      bnez $t8, .L80190E50
  /* 10F5E8 80190D88 30590800 */      andi $t9, $v0, 0x800
  /* 10F5EC 80190D8C 17200030 */      bnez $t9, .L80190E50
  /* 10F5F0 80190D90 304E4000 */      andi $t6, $v0, 0x4000
  /* 10F5F4 80190D94 15C0002E */      bnez $t6, .L80190E50
  /* 10F5F8 80190D98 00027B80 */       sll $t7, $v0, 0xe
  /* 10F5FC 80190D9C 05E0002C */      bltz $t7, .L80190E50
  /* 10F600 80190DA0 30780001 */      andi $t8, $v1, 1
  /* 10F604 80190DA4 1700002A */      bnez $t8, .L80190E50
  /* 10F608 80190DA8 00002025 */        or $a0, $zero, $zero
  /* 10F60C 80190DAC 3C038019 */       lui $v1, %hi(D_ovl65_801936B4)
  /* 10F610 80190DB0 3C058019 */       lui $a1, %hi(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10F614 80190DB4 24A53798 */     addiu $a1, $a1, %lo(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10F618 80190DB8 246336B4 */     addiu $v1, $v1, %lo(D_ovl65_801936B4)
  .L80190DBC:
  /* 10F61C 80190DBC 8C790000 */        lw $t9, ($v1) # D_ovl65_801936B4 + 0
  /* 10F620 80190DC0 24630004 */     addiu $v1, $v1, 4
  /* 10F624 80190DC4 0065082B */      sltu $at, $v1, $a1
  /* 10F628 80190DC8 1420FFFC */      bnez $at, .L80190DBC
  /* 10F62C 80190DCC 00992021 */      addu $a0, $a0, $t9
  /* 10F630 80190DD0 1080001F */      beqz $a0, .L80190E50
  /* 10F634 80190DD4 3C038019 */       lui $v1, %hi(D_ovl65_801936B4)
  /* 10F638 80190DD8 44842000 */      mtc1 $a0, $f4
  /* 10F63C 80190DDC 246336B4 */     addiu $v1, $v1, %lo(D_ovl65_801936B4)
  /* 10F640 80190DE0 04810005 */      bgez $a0, .L80190DF8
  /* 10F644 80190DE4 46802020 */   cvt.s.w $f0, $f4
  /* 10F648 80190DE8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 10F64C 80190DEC 44813000 */      mtc1 $at, $f6 # 4294967300.0 to cop1
  /* 10F650 80190DF0 00000000 */       nop 
  /* 10F654 80190DF4 46060000 */     add.s $f0, $f0, $f6
  .L80190DF8:
  /* 10F658 80190DF8 3C018019 */       lui $at, %hi(D_ovl65_80192F64)
  /* 10F65C 80190DFC 3C048019 */       lui $a0, %hi(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10F660 80190E00 24843798 */     addiu $a0, $a0, %lo(gmBonusStat_Attacker_IsSmashAttack_Count)
  /* 10F664 80190E04 C4222F64 */      lwc1 $f2, %lo(D_ovl65_80192F64)($at)
  /* 10F668 80190E08 8C6E0000 */        lw $t6, ($v1) # D_ovl65_801936B4 + 0
  .L80190E0C:
  /* 10F66C 80190E0C 24630004 */     addiu $v1, $v1, 4
  /* 10F670 80190E10 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 10F674 80190E14 448E4000 */      mtc1 $t6, $f8
  /* 10F678 80190E18 05C10004 */      bgez $t6, .L80190E2C
  /* 10F67C 80190E1C 468042A0 */   cvt.s.w $f10, $f8
  /* 10F680 80190E20 44818000 */      mtc1 $at, $f16 # 4294967300.0 to cop1
  /* 10F684 80190E24 00000000 */       nop 
  /* 10F688 80190E28 46105280 */     add.s $f10, $f10, $f16
  .L80190E2C:
  /* 10F68C 80190E2C 46005483 */     div.s $f18, $f10, $f0
  /* 10F690 80190E30 4612103E */    c.le.s $f2, $f18
  /* 10F694 80190E34 00000000 */       nop 
  /* 10F698 80190E38 45000003 */      bc1f .L80190E48
  /* 10F69C 80190E3C 344F0001 */       ori $t7, $v0, 1
  /* 10F6A0 80190E40 10000003 */         b .L80190E50
  /* 10F6A4 80190E44 AD4F002C */        sw $t7, 0x2c($t2) # gSceneData + 44
  .L80190E48:
  /* 10F6A8 80190E48 5464FFF0 */      bnel $v1, $a0, .L80190E0C
  /* 10F6AC 80190E4C 8C6E0000 */        lw $t6, ($v1) # D_ovl65_801936B4 + 0
  .L80190E50:
  /* 10F6B0 80190E50 03E00008 */        jr $ra
  /* 10F6B4 80190E54 27BD0058 */     addiu $sp, $sp, 0x58

glabel func_ovl65_80190E58
  /* 10F6B8 80190E58 3C03800A */       lui $v1, %hi(gSceneData)
  /* 10F6BC 80190E5C 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 10F6C0 80190E60 AC600034 */        sw $zero, 0x34($v1) # gSceneData + 52
  /* 10F6C4 80190E64 AC600030 */        sw $zero, 0x30($v1) # gSceneData + 48
  /* 10F6C8 80190E68 AC60002C */        sw $zero, 0x2c($v1) # gSceneData + 44
  /* 10F6CC 80190E6C 3C04800A */       lui $a0, %hi(gpBattleState)
  /* 10F6D0 80190E70 8C8450E8 */        lw $a0, %lo(gpBattleState)($a0)
  /* 10F6D4 80190E74 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10F6D8 80190E78 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10F6DC 80190E7C 908E0006 */       lbu $t6, 6($a0)
  /* 10F6E0 80190E80 24010064 */     addiu $at, $zero, 0x64
  /* 10F6E4 80190E84 3C058013 */       lui $a1, %hi(g1PGameTimeTotal)
  /* 10F6E8 80190E88 15C10003 */       bne $t6, $at, .L80190E98
  /* 10F6EC 80190E8C 24A50D64 */     addiu $a1, $a1, %lo(g1PGameTimeTotal)
  /* 10F6F0 80190E90 10000008 */         b .L80190EB4
  /* 10F6F4 80190E94 AC60001C */        sw $zero, 0x1c($v1) # gSceneData + 28
  .L80190E98:
  /* 10F6F8 80190E98 8C8F0014 */        lw $t7, 0x14($a0)
  /* 10F6FC 80190E9C 2401003C */     addiu $at, $zero, 0x3c
  /* 10F700 80190EA0 25F8003B */     addiu $t8, $t7, 0x3b
  /* 10F704 80190EA4 0301001B */      divu $zero, $t8, $at
  /* 10F708 80190EA8 0000C812 */      mflo $t9
  /* 10F70C 80190EAC AC79001C */        sw $t9, 0x1c($v1) # gSceneData + 28
  /* 10F710 80190EB0 00000000 */       nop 
  .L80190EB4:
  /* 10F714 80190EB4 906B0013 */       lbu $t3, 0x13($v1) # gSceneData + 19
  /* 10F718 80190EB8 8CA80000 */        lw $t0, ($a1) # g1PGameTimeTotal + 0
  /* 10F71C 80190EBC 8C890018 */        lw $t1, 0x18($a0)
  /* 10F720 80190EC0 000B60C0 */       sll $t4, $t3, 3
  /* 10F724 80190EC4 018B6023 */      subu $t4, $t4, $t3
  /* 10F728 80190EC8 000C6080 */       sll $t4, $t4, 2
  /* 10F72C 80190ECC 018B6021 */      addu $t4, $t4, $t3
  /* 10F730 80190ED0 3C068013 */       lui $a2, %hi(D_ovl2_80130D68)
  /* 10F734 80190ED4 000C6080 */       sll $t4, $t4, 2
  /* 10F738 80190ED8 01095021 */      addu $t2, $t0, $t1
  /* 10F73C 80190EDC 24C60D68 */     addiu $a2, $a2, %lo(D_ovl2_80130D68)
  /* 10F740 80190EE0 ACAA0000 */        sw $t2, ($a1) # g1PGameTimeTotal + 0
  /* 10F744 80190EE4 008C1021 */      addu $v0, $a0, $t4
  /* 10F748 80190EE8 8C4E0030 */        lw $t6, 0x30($v0)
  /* 10F74C 80190EEC 8CCD0000 */        lw $t5, ($a2) # D_ovl2_80130D68 + 0
  /* 10F750 80190EF0 3C078013 */       lui $a3, %hi(D_ovl2_80130D6C)
  /* 10F754 80190EF4 24E70D6C */     addiu $a3, $a3, %lo(D_ovl2_80130D6C)
  /* 10F758 80190EF8 01AE7821 */      addu $t7, $t5, $t6
  /* 10F75C 80190EFC ACCF0000 */        sw $t7, ($a2) # D_ovl2_80130D68 + 0
  /* 10F760 80190F00 8C590058 */        lw $t9, 0x58($v0)
  /* 10F764 80190F04 8CF80000 */        lw $t8, ($a3) # D_ovl2_80130D6C + 0
  /* 10F768 80190F08 90690017 */       lbu $t1, 0x17($v1) # gSceneData + 23
  /* 10F76C 80190F0C 2401000B */     addiu $at, $zero, 0xb
  /* 10F770 80190F10 03194021 */      addu $t0, $t8, $t9
  /* 10F774 80190F14 1521000F */       bne $t1, $at, .L80190F54
  /* 10F778 80190F18 ACE80000 */        sw $t0, ($a3) # D_ovl2_80130D6C + 0
  /* 10F77C 80190F1C 8C4A0030 */        lw $t2, 0x30($v0)
  /* 10F780 80190F20 55400017 */      bnel $t2, $zero, .L80190F80
  /* 10F784 80190F24 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10F788 80190F28 8C6B001C */        lw $t3, 0x1c($v1) # gSceneData + 28
  /* 10F78C 80190F2C 51600014 */      beql $t3, $zero, .L80190F80
  /* 10F790 80190F30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10F794 80190F34 8C4C0058 */        lw $t4, 0x58($v0)
  /* 10F798 80190F38 55800011 */      bnel $t4, $zero, .L80190F80
  /* 10F79C 80190F3C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10F7A0 80190F40 8C6D002C */        lw $t5, 0x2c($v1) # gSceneData + 44
  /* 10F7A4 80190F44 3C010010 */       lui $at, 0x10
  /* 10F7A8 80190F48 01A17025 */        or $t6, $t5, $at
  /* 10F7AC 80190F4C 1000000B */         b .L80190F7C
  /* 10F7B0 80190F50 AC6E002C */        sw $t6, 0x2c($v1) # gSceneData + 44
  .L80190F54:
  /* 10F7B4 80190F54 8C580034 */        lw $t8, 0x34($v0)
  /* 10F7B8 80190F58 8C6F0020 */        lw $t7, 0x20($v1) # gSceneData + 32
  /* 10F7BC 80190F5C 0018C940 */       sll $t9, $t8, 5
  /* 10F7C0 80190F60 0338C823 */      subu $t9, $t9, $t8
  /* 10F7C4 80190F64 0019C880 */       sll $t9, $t9, 2
  /* 10F7C8 80190F68 0338C821 */      addu $t9, $t9, $t8
  /* 10F7CC 80190F6C 0019C8C0 */       sll $t9, $t9, 3
  /* 10F7D0 80190F70 01F94021 */      addu $t0, $t7, $t9
  /* 10F7D4 80190F74 0C063F57 */       jal func_ovl65_8018FD5C
  /* 10F7D8 80190F78 AC680020 */        sw $t0, 0x20($v1) # gSceneData + 32
  .L80190F7C:
  /* 10F7DC 80190F7C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80190F80:
  /* 10F7E0 80190F80 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10F7E4 80190F84 03E00008 */        jr $ra
  /* 10F7E8 80190F88 00000000 */       nop 

glabel func_ovl65_80190F8C
  /* 10F7EC 80190F8C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10F7F0 80190F90 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10F7F4 80190F94 8C830000 */        lw $v1, ($a0)
  /* 10F7F8 80190F98 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 10F7FC 80190F9C 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
glabel func_ovl65_80190FA0
  /* 10F800 80190FA0 246E0008 */     addiu $t6, $v1, 8
  /* 10F804 80190FA4 AC8E0000 */        sw $t6, ($a0)
  /* 10F808 80190FA8 3C180002 */       lui $t8, 2
  /* 10F80C 80190FAC 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 10F810 80190FB0 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 10F814 80190FB4 AC780004 */        sw $t8, 4($v1)
  /* 10F818 80190FB8 AC6F0000 */        sw $t7, ($v1)
  /* 10F81C 80190FBC 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 10F820 80190FC0 0C03F2DC */       jal func_ovl2_800FCB70
  /* 10F824 80190FC4 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 10F828 80190FC8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10F82C 80190FCC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10F830 80190FD0 03E00008 */        jr $ra
  /* 10F834 80190FD4 00000000 */       nop 

glabel overlay_set62_entry
  /* 10F838 80190FD8 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 10F83C 80190FDC 3C0E800A */       lui $t6, %hi(D_800A4B18)
  /* 10F840 80190FE0 244250E8 */     addiu $v0, $v0, %lo(gpBattleState)
  /* 10F844 80190FE4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10F848 80190FE8 25CE4B18 */     addiu $t6, $t6, %lo(D_800A4B18)
  /* 10F84C 80190FEC 3C19800A */       lui $t9, %hi(D_NF_800A5240)
  /* 10F850 80190FF0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10F854 80190FF4 3C048019 */       lui $a0, %hi(D_ovl65_80192B18)
  /* 10F858 80190FF8 AC4E0000 */        sw $t6, ($v0) # gpBattleState + 0
  /* 10F85C 80190FFC 240F0005 */     addiu $t7, $zero, 5
  /* 10F860 80191000 27395240 */     addiu $t9, $t9, %lo(D_NF_800A5240)
  /* 10F864 80191004 24842B18 */     addiu $a0, $a0, %lo(D_ovl65_80192B18)
  /* 10F868 80191008 A1CF0000 */        sb $t7, ($t6) # D_800A4B18 + 0
  /* 10F86C 8019100C 2728E700 */     addiu $t0, $t9, -0x1900
  /* 10F870 80191010 0C001C09 */       jal func_80007024
  /* 10F874 80191014 AC88000C */        sw $t0, 0xc($a0) # D_ovl65_80192B18 + 12
  /* 10F878 80191018 3C098039 */       lui $t1, %hi(D_NF_80392A00)
  /* 10F87C 8019101C 3C0A8019 */       lui $t2, %hi(D_NF_80193900)
  /* 10F880 80191020 3C048019 */       lui $a0, %hi(D_ovl65_80192B34)
  /* 10F884 80191024 254A3900 */     addiu $t2, $t2, %lo(D_NF_80193900)
  /* 10F888 80191028 25292A00 */     addiu $t1, $t1, %lo(D_NF_80392A00)
  /* 10F88C 8019102C 3C0C8019 */       lui $t4, %hi(func_ovl65_8018F7B4)
  /* 10F890 80191030 24842B34 */     addiu $a0, $a0, %lo(D_ovl65_80192B34)
  /* 10F894 80191034 012A5823 */      subu $t3, $t1, $t2
  /* 10F898 80191038 258CF7B4 */     addiu $t4, $t4, %lo(func_ovl65_8018F7B4)
  /* 10F89C 8019103C AC8B0010 */        sw $t3, 0x10($a0) # D_ovl65_80192B34 + 16
  /* 10F8A0 80191040 0C0289A6 */       jal func_800A2698
  /* 10F8A4 80191044 AC8C0088 */        sw $t4, 0x88($a0) # D_ovl65_80192B34 + 136
  /* 10F8A8 80191048 0C064396 */       jal func_ovl65_80190E58
  /* 10F8AC 8019104C 00000000 */       nop 
  /* 10F8B0 80191050 0C00829D */       jal func_80020A74
  /* 10F8B4 80191054 00000000 */       nop 
  /* 10F8B8 80191058 0C008356 */       jal func_80020D58
  /* 10F8BC 8019105C 00002025 */        or $a0, $zero, $zero
  /* 10F8C0 80191060 50400006 */      beql $v0, $zero, .L8019107C
  /* 10F8C4 80191064 00002025 */        or $a0, $zero, $zero
  .L80191068:
  /* 10F8C8 80191068 0C008356 */       jal func_80020D58
  /* 10F8CC 8019106C 00002025 */        or $a0, $zero, $zero
  /* 10F8D0 80191070 1440FFFD */      bnez $v0, .L80191068
  /* 10F8D4 80191074 00000000 */       nop 
  /* 10F8D8 80191078 00002025 */        or $a0, $zero, $zero
  .L8019107C:
  /* 10F8DC 8019107C 0C0082CE */       jal func_80020B38
  /* 10F8E0 80191080 24057800 */     addiu $a1, $zero, 0x7800
  /* 10F8E4 80191084 0C0099A8 */       jal func_800266A0
  /* 10F8E8 80191088 00000000 */       nop 
  /* 10F8EC 8019108C 0C0455FB */       jal func_ovl2_801157EC
  /* 10F8F0 80191090 00000000 */       nop 
  /* 10F8F4 80191094 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10F8F8 80191098 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10F8FC 8019109C 03E00008 */        jr $ra
  /* 10F900 801910A0 00000000 */       nop 

  /* 10F904 801910A4 00000000 */       nop 
  /* 10F908 801910A8 00000000 */       nop 
  /* 10F90C 801910AC 00000000 */       nop 

# Likely start of new file
glabel func_ovl65_801910B0
  /* 10F910 801910B0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 10F914 801910B4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 10F918 801910B8 3C048019 */       lui $a0, %hi(D_ovl65_801938D0)
  /* 10F91C 801910BC AFB10018 */        sw $s1, 0x18($sp)
  /* 10F920 801910C0 AFB00014 */        sw $s0, 0x14($sp)
  /* 10F924 801910C4 0C002CAE */       jal func_8000B2B8
  /* 10F928 801910C8 8C8438D0 */        lw $a0, %lo(D_ovl65_801938D0)($a0)
  /* 10F92C 801910CC 3C108004 */       lui $s0, %hi(gOMObjCommonLinks + (0x0D * 4))
  /* 10F930 801910D0 8E106724 */        lw $s0, %lo(gOMObjCommonLinks + (0x0D * 4))($s0)
  /* 10F934 801910D4 241103FF */     addiu $s1, $zero, 0x3ff
  /* 10F938 801910D8 5200000A */      beql $s0, $zero, .L80191104
  /* 10F93C 801910DC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 10F940 801910E0 8E0E0000 */        lw $t6, ($s0)
  .L801910E4:
  /* 10F944 801910E4 562E0004 */      bnel $s1, $t6, .L801910F8
  /* 10F948 801910E8 8E100004 */        lw $s0, 4($s0)
  /* 10F94C 801910EC 0C002CAE */       jal func_8000B2B8
  /* 10F950 801910F0 02002025 */        or $a0, $s0, $zero
  /* 10F954 801910F4 8E100004 */        lw $s0, 4($s0)
  .L801910F8:
  /* 10F958 801910F8 5600FFFA */      bnel $s0, $zero, .L801910E4
  /* 10F95C 801910FC 8E0E0000 */        lw $t6, ($s0)
  /* 10F960 80191100 8FBF001C */        lw $ra, 0x1c($sp)
  .L80191104:
  /* 10F964 80191104 8FB00014 */        lw $s0, 0x14($sp)
  /* 10F968 80191108 8FB10018 */        lw $s1, 0x18($sp)
  /* 10F96C 8019110C 03E00008 */        jr $ra
  /* 10F970 80191110 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl65_80191114
  /* 10F974 80191114 3C018019 */       lui $at, %hi(D_ovl65_801938D8)
  /* 10F978 80191118 03E00008 */        jr $ra
  /* 10F97C 8019111C AC2038D8 */        sw $zero, %lo(D_ovl65_801938D8)($at)

glabel func_ovl65_80191120
  /* 10F980 80191120 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 10F984 80191124 3C028001 */       lui $v0, %hi(func_80017EC0)
  /* 10F988 80191128 AFBF0044 */        sw $ra, 0x44($sp)
  /* 10F98C 8019112C 24427EC0 */     addiu $v0, $v0, %lo(func_80017EC0)
  /* 10F990 80191130 240E0028 */     addiu $t6, $zero, 0x28
  /* 10F994 80191134 24180000 */     addiu $t8, $zero, 0
  /* 10F998 80191138 24190020 */     addiu $t9, $zero, 0x20
  /* 10F99C 8019113C 240F0001 */     addiu $t7, $zero, 1
  /* 10F9A0 80191140 24080001 */     addiu $t0, $zero, 1
  /* 10F9A4 80191144 24090001 */     addiu $t1, $zero, 1
  /* 10F9A8 80191148 240A0001 */     addiu $t2, $zero, 1
  /* 10F9AC 8019114C AFB10040 */        sw $s1, 0x40($sp)
  /* 10F9B0 80191150 AFB0003C */        sw $s0, 0x3c($sp)
  /* 10F9B4 80191154 AFAA0030 */        sw $t2, 0x30($sp)
  /* 10F9B8 80191158 AFA90028 */        sw $t1, 0x28($sp)
  /* 10F9BC 8019115C AFA80024 */        sw $t0, 0x24($sp)
  /* 10F9C0 80191160 AFAF0020 */        sw $t7, 0x20($sp)
  /* 10F9C4 80191164 AFB9001C */        sw $t9, 0x1c($sp)
  /* 10F9C8 80191168 AFB80018 */        sw $t8, 0x18($sp)
  /* 10F9CC 8019116C AFAE0014 */        sw $t6, 0x14($sp)
  /* 10F9D0 80191170 AFA20010 */        sw $v0, 0x10($sp)
  /* 10F9D4 80191174 AFA2004C */        sw $v0, 0x4c($sp)
  /* 10F9D8 80191178 AFA0002C */        sw $zero, 0x2c($sp)
  /* 10F9DC 8019117C AFA00034 */        sw $zero, 0x34($sp)
  /* 10F9E0 80191180 240403EF */     addiu $a0, $zero, 0x3ef
  /* 10F9E4 80191184 00002825 */        or $a1, $zero, $zero
  /* 10F9E8 80191188 24060009 */     addiu $a2, $zero, 9
  /* 10F9EC 8019118C 0C002E4F */       jal func_8000B93C
  /* 10F9F0 80191190 3C078000 */       lui $a3, 0x8000
  /* 10F9F4 80191194 3C118013 */       lui $s1, %hi(D_ovl2_801314B0)
  /* 10F9F8 80191198 263114B0 */     addiu $s1, $s1, %lo(D_ovl2_801314B0)
  /* 10F9FC 8019119C 8E2B0020 */        lw $t3, 0x20($s1) # D_ovl2_801314B0 + 32
  /* 10FA00 801911A0 8E2C0024 */        lw $t4, 0x24($s1) # D_ovl2_801314B0 + 36
  /* 10FA04 801911A4 8E2D0028 */        lw $t5, 0x28($s1) # D_ovl2_801314B0 + 40
  /* 10FA08 801911A8 8E2E002C */        lw $t6, 0x2c($s1) # D_ovl2_801314B0 + 44
  /* 10FA0C 801911AC 448B2000 */      mtc1 $t3, $f4
  /* 10FA10 801911B0 448C3000 */      mtc1 $t4, $f6
  /* 10FA14 801911B4 448D4000 */      mtc1 $t5, $f8
  /* 10FA18 801911B8 448E5000 */      mtc1 $t6, $f10
  /* 10FA1C 801911BC 46802120 */   cvt.s.w $f4, $f4
  /* 10FA20 801911C0 8C500074 */        lw $s0, 0x74($v0)
  /* 10FA24 801911C4 26040008 */     addiu $a0, $s0, 8
  /* 10FA28 801911C8 468031A0 */   cvt.s.w $f6, $f6
  /* 10FA2C 801911CC 44052000 */      mfc1 $a1, $f4
  /* 10FA30 801911D0 46804220 */   cvt.s.w $f8, $f8
  /* 10FA34 801911D4 44063000 */      mfc1 $a2, $f6
  /* 10FA38 801911D8 46805420 */   cvt.s.w $f16, $f10
  /* 10FA3C 801911DC 44074000 */      mfc1 $a3, $f8
  /* 10FA40 801911E0 0C001C20 */       jal func_80007080
  /* 10FA44 801911E4 E7B00010 */      swc1 $f16, 0x10($sp)
  /* 10FA48 801911E8 8E380028 */        lw $t8, 0x28($s1) # D_ovl2_801314B0 + 40
  /* 10FA4C 801911EC 8E390020 */        lw $t9, 0x20($s1) # D_ovl2_801314B0 + 32
  /* 10FA50 801911F0 8E28002C */        lw $t0, 0x2c($s1) # D_ovl2_801314B0 + 44
  /* 10FA54 801911F4 8E290024 */        lw $t1, 0x24($s1) # D_ovl2_801314B0 + 36
  /* 10FA58 801911F8 03197823 */      subu $t7, $t8, $t9
  /* 10FA5C 801911FC 448F9000 */      mtc1 $t7, $f18
  /* 10FA60 80191200 01095023 */      subu $t2, $t0, $t1
  /* 10FA64 80191204 448A3000 */      mtc1 $t2, $f6
  /* 10FA68 80191208 46809120 */   cvt.s.w $f4, $f18
  /* 10FA6C 8019120C 44800000 */      mtc1 $zero, $f0
  /* 10FA70 80191210 8E0B0080 */        lw $t3, 0x80($s0)
  /* 10FA74 80191214 3C0144FA */       lui $at, (0x44FA0000 >> 16) # 2000.0
  /* 10FA78 80191218 44818000 */      mtc1 $at, $f16 # 2000.0 to cop1
  /* 10FA7C 8019121C 46803220 */   cvt.s.w $f8, $f6
  /* 10FA80 80191220 356C0004 */       ori $t4, $t3, 4
  /* 10FA84 80191224 AE0C0080 */        sw $t4, 0x80($s0)
  /* 10FA88 80191228 E6000050 */      swc1 $f0, 0x50($s0)
  /* 10FA8C 8019122C E600004C */      swc1 $f0, 0x4c($s0)
  /* 10FA90 80191230 E6000048 */      swc1 $f0, 0x48($s0)
  /* 10FA94 80191234 46082283 */     div.s $f10, $f4, $f8
  /* 10FA98 80191238 E6000040 */      swc1 $f0, 0x40($s0)
  /* 10FA9C 8019123C E600003C */      swc1 $f0, 0x3c($s0)
  /* 10FAA0 80191240 E6100044 */      swc1 $f16, 0x44($s0)
  /* 10FAA4 80191244 240A0001 */     addiu $t2, $zero, 1
  /* 10FAA8 80191248 24090001 */     addiu $t1, $zero, 1
  /* 10FAAC 8019124C 24080001 */     addiu $t0, $zero, 1
  /* 10FAB0 80191250 240F0002 */     addiu $t7, $zero, 2
  /* 10FAB4 80191254 24190020 */     addiu $t9, $zero, 0x20
  /* 10FAB8 80191258 24180000 */     addiu $t8, $zero, 0
  /* 10FABC 8019125C 240E003C */     addiu $t6, $zero, 0x3c
  /* 10FAC0 80191260 240403EF */     addiu $a0, $zero, 0x3ef
  /* 10FAC4 80191264 00002825 */        or $a1, $zero, $zero
  /* 10FAC8 80191268 24060009 */     addiu $a2, $zero, 9
  /* 10FACC 8019126C 3C078000 */       lui $a3, 0x8000
  /* 10FAD0 80191270 E60A0024 */      swc1 $f10, 0x24($s0)
  /* 10FAD4 80191274 8FAD004C */        lw $t5, 0x4c($sp)
  /* 10FAD8 80191278 AFA00034 */        sw $zero, 0x34($sp)
  /* 10FADC 8019127C AFAA0030 */        sw $t2, 0x30($sp)
  /* 10FAE0 80191280 AFA0002C */        sw $zero, 0x2c($sp)
  /* 10FAE4 80191284 AFA90028 */        sw $t1, 0x28($sp)
  /* 10FAE8 80191288 AFA80024 */        sw $t0, 0x24($sp)
  /* 10FAEC 8019128C AFAF0020 */        sw $t7, 0x20($sp)
  /* 10FAF0 80191290 AFB9001C */        sw $t9, 0x1c($sp)
  /* 10FAF4 80191294 AFB80018 */        sw $t8, 0x18($sp)
  /* 10FAF8 80191298 AFAE0014 */        sw $t6, 0x14($sp)
  /* 10FAFC 8019129C 0C002E4F */       jal func_8000B93C
  /* 10FB00 801912A0 AFAD0010 */        sw $t5, 0x10($sp)
  /* 10FB04 801912A4 8E2B0020 */        lw $t3, 0x20($s1) # D_ovl2_801314B0 + 32
  /* 10FB08 801912A8 8E2C0024 */        lw $t4, 0x24($s1) # D_ovl2_801314B0 + 36
  /* 10FB0C 801912AC 8E2D0028 */        lw $t5, 0x28($s1) # D_ovl2_801314B0 + 40
  /* 10FB10 801912B0 8E2E002C */        lw $t6, 0x2c($s1) # D_ovl2_801314B0 + 44
  /* 10FB14 801912B4 448B9000 */      mtc1 $t3, $f18
  /* 10FB18 801912B8 448C3000 */      mtc1 $t4, $f6
  /* 10FB1C 801912BC 448D2000 */      mtc1 $t5, $f4
  /* 10FB20 801912C0 448E4000 */      mtc1 $t6, $f8
  /* 10FB24 801912C4 468094A0 */   cvt.s.w $f18, $f18
  /* 10FB28 801912C8 8C500074 */        lw $s0, 0x74($v0)
  /* 10FB2C 801912CC 26040008 */     addiu $a0, $s0, 8
  /* 10FB30 801912D0 468031A0 */   cvt.s.w $f6, $f6
  /* 10FB34 801912D4 44059000 */      mfc1 $a1, $f18
  /* 10FB38 801912D8 46802120 */   cvt.s.w $f4, $f4
  /* 10FB3C 801912DC 44063000 */      mfc1 $a2, $f6
  /* 10FB40 801912E0 468042A0 */   cvt.s.w $f10, $f8
  /* 10FB44 801912E4 44072000 */      mfc1 $a3, $f4
  /* 10FB48 801912E8 0C001C20 */       jal func_80007080
  /* 10FB4C 801912EC E7AA0010 */      swc1 $f10, 0x10($sp)
  /* 10FB50 801912F0 8E380028 */        lw $t8, 0x28($s1) # D_ovl2_801314B0 + 40
  /* 10FB54 801912F4 8E390020 */        lw $t9, 0x20($s1) # D_ovl2_801314B0 + 32
  /* 10FB58 801912F8 8E28002C */        lw $t0, 0x2c($s1) # D_ovl2_801314B0 + 44
  /* 10FB5C 801912FC 8E290024 */        lw $t1, 0x24($s1) # D_ovl2_801314B0 + 36
  /* 10FB60 80191300 03197823 */      subu $t7, $t8, $t9
  /* 10FB64 80191304 448F8000 */      mtc1 $t7, $f16
  /* 10FB68 80191308 01095023 */      subu $t2, $t0, $t1
  /* 10FB6C 8019130C 448A3000 */      mtc1 $t2, $f6
  /* 10FB70 80191310 468084A0 */   cvt.s.w $f18, $f16
  /* 10FB74 80191314 44800000 */      mtc1 $zero, $f0
  /* 10FB78 80191318 8E0B0080 */        lw $t3, 0x80($s0)
  /* 10FB7C 8019131C 3C0144FA */       lui $at, (0x44FA0000 >> 16) # 2000.0
  /* 10FB80 80191320 44815000 */      mtc1 $at, $f10 # 2000.0 to cop1
  /* 10FB84 80191324 46803120 */   cvt.s.w $f4, $f6
  /* 10FB88 80191328 356C0004 */       ori $t4, $t3, 4
  /* 10FB8C 8019132C AE0C0080 */        sw $t4, 0x80($s0)
  /* 10FB90 80191330 E6000050 */      swc1 $f0, 0x50($s0)
  /* 10FB94 80191334 E600004C */      swc1 $f0, 0x4c($s0)
  /* 10FB98 80191338 E6000048 */      swc1 $f0, 0x48($s0)
  /* 10FB9C 8019133C 46049203 */     div.s $f8, $f18, $f4
  /* 10FBA0 80191340 E6000040 */      swc1 $f0, 0x40($s0)
  /* 10FBA4 80191344 E600003C */      swc1 $f0, 0x3c($s0)
  /* 10FBA8 80191348 E60A0044 */      swc1 $f10, 0x44($s0)
  /* 10FBAC 8019134C E6080024 */      swc1 $f8, 0x24($s0)
  /* 10FBB0 80191350 8FBF0044 */        lw $ra, 0x44($sp)
  /* 10FBB4 80191354 8FB10040 */        lw $s1, 0x40($sp)
  /* 10FBB8 80191358 8FB0003C */        lw $s0, 0x3c($sp)
  /* 10FBBC 8019135C 03E00008 */        jr $ra
  /* 10FBC0 80191360 27BD0058 */     addiu $sp, $sp, 0x58

  glabel jtgt_ovl65_80191364
  /* 10FBC4 80191364 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10FBC8 80191368 AFBF0014 */        sw $ra, 0x14($sp)
  /* 10FBCC 8019136C 8C8E0074 */        lw $t6, 0x74($a0)
  /* 10FBD0 80191370 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FBD4 80191374 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FBD8 80191378 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FBDC 8019137C 8DCF0010 */        lw $t7, 0x10($t6)
  /* 10FBE0 80191380 8C8B0084 */        lw $t3, 0x84($a0)
  /* 10FBE4 80191384 24580008 */     addiu $t8, $v0, 8
  /* 10FBE8 80191388 8DE50084 */        lw $a1, 0x84($t7)
  /* 10FBEC 8019138C AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 10FBF0 80191390 3C19E700 */       lui $t9, 0xe700
  /* 10FBF4 80191394 AC590000 */        sw $t9, ($v0)
  /* 10FBF8 80191398 AC400004 */        sw $zero, 4($v0)
  /* 10FBFC 8019139C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FC00 801913A0 3C0E0050 */       lui $t6, (0x5041C8 >> 16) # 5259720
  /* 10FC04 801913A4 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 10FC08 801913A8 244C0008 */     addiu $t4, $v0, 8
  /* 10FC0C 801913AC AC6C0004 */        sw $t4, 4($v1) # gpDisplayListHead + 4
  /* 10FC10 801913B0 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FC14 801913B4 35CE41C8 */       ori $t6, $t6, (0x5041C8 & 0xFFFF) # 5259720
  /* 10FC18 801913B8 AC4E0004 */        sw $t6, 4($v0)
  /* 10FC1C 801913BC AC4D0000 */        sw $t5, ($v0)
  /* 10FC20 801913C0 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FC24 801913C4 2401FF00 */     addiu $at, $zero, -0x100
  /* 10FC28 801913C8 316900FF */      andi $t1, $t3, 0xff
  /* 10FC2C 801913CC 244F0008 */     addiu $t7, $v0, 8
  /* 10FC30 801913D0 AC6F0004 */        sw $t7, 4($v1) # gpDisplayListHead + 4
  /* 10FC34 801913D4 0121C825 */        or $t9, $t1, $at
  /* 10FC38 801913D8 3C18FA00 */       lui $t8, 0xfa00
  /* 10FC3C 801913DC AC580000 */        sw $t8, ($v0)
  /* 10FC40 801913E0 AC590004 */        sw $t9, 4($v0)
  /* 10FC44 801913E4 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FC48 801913E8 3C0DFB00 */       lui $t5, 0xfb00
  /* 10FC4C 801913EC 3C0E8019 */       lui $t6, %hi(D_ovl65_80192BD0)
  /* 10FC50 801913F0 244C0008 */     addiu $t4, $v0, 8
  /* 10FC54 801913F4 AC6C0004 */        sw $t4, 4($v1) # gpDisplayListHead + 4
  /* 10FC58 801913F8 01C57021 */      addu $t6, $t6, $a1
  /* 10FC5C 801913FC AC4D0000 */        sw $t5, ($v0)
  /* 10FC60 80191400 91CE2BD0 */       lbu $t6, %lo(D_ovl65_80192BD0)($t6)
  /* 10FC64 80191404 3C198019 */       lui $t9, %hi(D_ovl65_80192BC0)
  /* 10FC68 80191408 0325C821 */      addu $t9, $t9, $a1
  /* 10FC6C 8019140C 31CF00FF */      andi $t7, $t6, 0xff
  /* 10FC70 80191410 000FC200 */       sll $t8, $t7, 8
  /* 10FC74 80191414 3C0F8019 */       lui $t7, %hi(D_ovl65_80192BC8)
  /* 10FC78 80191418 932C2BC0 */       lbu $t4, %lo(D_ovl65_80192BC0)($t9)
  /* 10FC7C 8019141C 01E57821 */      addu $t7, $t7, $a1
  /* 10FC80 80191420 91EF2BC8 */       lbu $t7, %lo(D_ovl65_80192BC8)($t7)
  /* 10FC84 80191424 000C6E00 */       sll $t5, $t4, 0x18
  /* 10FC88 80191428 030D7025 */        or $t6, $t8, $t5
  /* 10FC8C 8019142C 31F900FF */      andi $t9, $t7, 0xff
  /* 10FC90 80191430 00196400 */       sll $t4, $t9, 0x10
  /* 10FC94 80191434 01CCC025 */        or $t8, $t6, $t4
  /* 10FC98 80191438 03096825 */        or $t5, $t8, $t1
  /* 10FC9C 8019143C 0C0051DA */       jal func_80014768
  /* 10FCA0 80191440 AC4D0004 */        sw $t5, 4($v0)
  /* 10FCA4 80191444 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FCA8 80191448 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FCAC 8019144C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FCB0 80191450 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 10FCB4 80191454 3C0E0050 */       lui $t6, (0x5049D8 >> 16) # 5261784
  /* 10FCB8 80191458 244F0008 */     addiu $t7, $v0, 8
  /* 10FCBC 8019145C AC6F0004 */        sw $t7, 4($v1) # gpDisplayListHead + 4
  /* 10FCC0 80191460 35CE49D8 */       ori $t6, $t6, (0x5049D8 & 0xFFFF) # 5261784
  /* 10FCC4 80191464 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FCC8 80191468 AC590000 */        sw $t9, ($v0)
  /* 10FCCC 8019146C AC4E0004 */        sw $t6, 4($v0)
  /* 10FCD0 80191470 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FCD4 80191474 3C18E700 */       lui $t8, 0xe700
  /* 10FCD8 80191478 244C0008 */     addiu $t4, $v0, 8
  /* 10FCDC 8019147C AC6C0004 */        sw $t4, 4($v1) # gpDisplayListHead + 4
  /* 10FCE0 80191480 AC400004 */        sw $zero, 4($v0)
  /* 10FCE4 80191484 AC580000 */        sw $t8, ($v0)
  /* 10FCE8 80191488 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10FCEC 8019148C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10FCF0 80191490 03E00008 */        jr $ra
  /* 10FCF4 80191494 00000000 */       nop 

  glabel jtgt_ovl65_80191498
  /* 10FCF8 80191498 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10FCFC 8019149C AFBF0014 */        sw $ra, 0x14($sp)
  /* 10FD00 801914A0 8C820074 */        lw $v0, 0x74($a0)
  /* 10FD04 801914A4 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FD08 801914A8 8C850084 */        lw $a1, 0x84($a0)
  /* 10FD0C 801914AC 8C420010 */        lw $v0, 0x10($v0)
  /* 10FD10 801914B0 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FD14 801914B4 3C18E700 */       lui $t8, 0xe700
  /* 10FD18 801914B8 10400006 */      beqz $v0, .L801914D4
  /* 10FD1C 801914BC 3C0AE300 */       lui $t2, (0xE3000A01 >> 16) # 3808430593
  /* 10FD20 801914C0 8C4E0080 */        lw $t6, 0x80($v0)
  .L801914C4:
  /* 10FD24 801914C4 A1C5005B */        sb $a1, 0x5b($t6)
  /* 10FD28 801914C8 8C420010 */        lw $v0, 0x10($v0)
  /* 10FD2C 801914CC 5440FFFD */      bnel $v0, $zero, .L801914C4
  /* 10FD30 801914D0 8C4E0080 */        lw $t6, 0x80($v0)
  .L801914D4:
  /* 10FD34 801914D4 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FD38 801914D8 354A0A01 */       ori $t2, $t2, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 10FD3C 801914DC 3C0B0010 */       lui $t3, 0x10
  /* 10FD40 801914E0 244F0008 */     addiu $t7, $v0, 8
  /* 10FD44 801914E4 AC6F0004 */        sw $t7, 4($v1) # gpDisplayListHead + 4
  /* 10FD48 801914E8 AC400004 */        sw $zero, 4($v0)
  /* 10FD4C 801914EC AC580000 */        sw $t8, ($v0)
  /* 10FD50 801914F0 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FD54 801914F4 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 10FD58 801914F8 3C0E0C18 */       lui $t6, (0xC1841C8 >> 16) # 202916296
  /* 10FD5C 801914FC 24590008 */     addiu $t9, $v0, 8
  /* 10FD60 80191500 AC790004 */        sw $t9, 4($v1) # gpDisplayListHead + 4
  /* 10FD64 80191504 AC4B0004 */        sw $t3, 4($v0)
  /* 10FD68 80191508 AC4A0000 */        sw $t2, ($v0)
  /* 10FD6C 8019150C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FD70 80191510 35CE41C8 */       ori $t6, $t6, (0xC1841C8 & 0xFFFF) # 202916296
  /* 10FD74 80191514 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FD78 80191518 244C0008 */     addiu $t4, $v0, 8
  /* 10FD7C 8019151C AC6C0004 */        sw $t4, 4($v1) # gpDisplayListHead + 4
  /* 10FD80 80191520 AC4E0004 */        sw $t6, 4($v0)
  /* 10FD84 80191524 AC4D0000 */        sw $t5, ($v0)
  /* 10FD88 80191528 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FD8C 8019152C 30B900FF */      andi $t9, $a1, 0xff
  /* 10FD90 80191530 3C18FA00 */       lui $t8, 0xfa00
  /* 10FD94 80191534 244F0008 */     addiu $t7, $v0, 8
  /* 10FD98 80191538 AC6F0004 */        sw $t7, 4($v1) # gpDisplayListHead + 4
  /* 10FD9C 8019153C AC590004 */        sw $t9, 4($v0)
  /* 10FDA0 80191540 0C0051DA */       jal func_80014768
  /* 10FDA4 80191544 AC580000 */        sw $t8, ($v0)
  /* 10FDA8 80191548 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FDAC 8019154C 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FDB0 80191550 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FDB4 80191554 3C0BE300 */       lui $t3, (0xE3000A01 >> 16) # 3808430593
  /* 10FDB8 80191558 356B0A01 */       ori $t3, $t3, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 10FDBC 8019155C 244A0008 */     addiu $t2, $v0, 8
  /* 10FDC0 80191560 AC6A0004 */        sw $t2, 4($v1) # gpDisplayListHead + 4
  /* 10FDC4 80191564 AC400004 */        sw $zero, 4($v0)
  /* 10FDC8 80191568 AC4B0000 */        sw $t3, ($v0)
  /* 10FDCC 8019156C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FDD0 80191570 3C0DE200 */       lui $t5, (0xE200001C >> 16) # 3791650844
  /* 10FDD4 80191574 3C0E0050 */       lui $t6, (0x5049D8 >> 16) # 5261784
  /* 10FDD8 80191578 244C0008 */     addiu $t4, $v0, 8
  /* 10FDDC 8019157C AC6C0004 */        sw $t4, 4($v1) # gpDisplayListHead + 4
  /* 10FDE0 80191580 35CE49D8 */       ori $t6, $t6, (0x5049D8 & 0xFFFF) # 5261784
  /* 10FDE4 80191584 35AD001C */       ori $t5, $t5, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FDE8 80191588 AC4D0000 */        sw $t5, ($v0)
  /* 10FDEC 8019158C AC4E0004 */        sw $t6, 4($v0)
  /* 10FDF0 80191590 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FDF4 80191594 3C18E700 */       lui $t8, 0xe700
  /* 10FDF8 80191598 244F0008 */     addiu $t7, $v0, 8
  /* 10FDFC 8019159C AC6F0004 */        sw $t7, 4($v1) # gpDisplayListHead + 4
  /* 10FE00 801915A0 AC400004 */        sw $zero, 4($v0)
  /* 10FE04 801915A4 AC580000 */        sw $t8, ($v0)
  /* 10FE08 801915A8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10FE0C 801915AC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10FE10 801915B0 03E00008 */        jr $ra
  /* 10FE14 801915B4 00000000 */       nop 

  glabel jtgt_ovl65_801915B8
  /* 10FE18 801915B8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10FE1C 801915BC AFBF0014 */        sw $ra, 0x14($sp)
  /* 10FE20 801915C0 8C820074 */        lw $v0, 0x74($a0)
  /* 10FE24 801915C4 8C850084 */        lw $a1, 0x84($a0)
  /* 10FE28 801915C8 3C0FE700 */       lui $t7, 0xe700
  /* 10FE2C 801915CC 10400008 */      beqz $v0, .L801915F0
  /* 10FE30 801915D0 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 10FE34 801915D4 8C430080 */        lw $v1, 0x80($v0)
  .L801915D8:
  /* 10FE38 801915D8 50600003 */      beql $v1, $zero, .L801915E8
  /* 10FE3C 801915DC 8C420010 */        lw $v0, 0x10($v0)
  /* 10FE40 801915E0 A065005B */        sb $a1, 0x5b($v1)
  /* 10FE44 801915E4 8C420010 */        lw $v0, 0x10($v0)
  .L801915E8:
  /* 10FE48 801915E8 5440FFFB */      bnel $v0, $zero, .L801915D8
  /* 10FE4C 801915EC 8C430080 */        lw $v1, 0x80($v0)
  .L801915F0:
  /* 10FE50 801915F0 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FE54 801915F4 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FE58 801915F8 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FE5C 801915FC 3C090050 */       lui $t1, (0x5041C8 >> 16) # 5259720
  /* 10FE60 80191600 352941C8 */       ori $t1, $t1, (0x5041C8 & 0xFFFF) # 5259720
  /* 10FE64 80191604 244E0008 */     addiu $t6, $v0, 8
  /* 10FE68 80191608 AC6E0004 */        sw $t6, 4($v1) # gpDisplayListHead + 4
  /* 10FE6C 8019160C AC400004 */        sw $zero, 4($v0)
  /* 10FE70 80191610 AC4F0000 */        sw $t7, ($v0)
  /* 10FE74 80191614 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FE78 80191618 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FE7C 8019161C 30AC00FF */      andi $t4, $a1, 0xff
  /* 10FE80 80191620 24580008 */     addiu $t8, $v0, 8
  /* 10FE84 80191624 AC780004 */        sw $t8, 4($v1) # gpDisplayListHead + 4
  /* 10FE88 80191628 AC490004 */        sw $t1, 4($v0)
  /* 10FE8C 8019162C AC590000 */        sw $t9, ($v0)
  /* 10FE90 80191630 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FE94 80191634 2401FF00 */     addiu $at, $zero, -0x100
  /* 10FE98 80191638 01816825 */        or $t5, $t4, $at
  /* 10FE9C 8019163C 244A0008 */     addiu $t2, $v0, 8
  /* 10FEA0 80191640 AC6A0004 */        sw $t2, 4($v1) # gpDisplayListHead + 4
  /* 10FEA4 80191644 3C0BFA00 */       lui $t3, 0xfa00
  /* 10FEA8 80191648 AC4B0000 */        sw $t3, ($v0)
  /* 10FEAC 8019164C 0C0051DA */       jal func_80014768
  /* 10FEB0 80191650 AC4D0004 */        sw $t5, 4($v0)
  /* 10FEB4 80191654 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FEB8 80191658 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FEBC 8019165C 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FEC0 80191660 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 10FEC4 80191664 3C180050 */       lui $t8, (0x5049D8 >> 16) # 5261784
  /* 10FEC8 80191668 244E0008 */     addiu $t6, $v0, 8
  /* 10FECC 8019166C AC6E0004 */        sw $t6, 4($v1) # gpDisplayListHead + 4
  /* 10FED0 80191670 371849D8 */       ori $t8, $t8, (0x5049D8 & 0xFFFF) # 5261784
  /* 10FED4 80191674 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FED8 80191678 AC4F0000 */        sw $t7, ($v0)
  /* 10FEDC 8019167C AC580004 */        sw $t8, 4($v0)
  /* 10FEE0 80191680 8C620004 */        lw $v0, 4($v1) # gpDisplayListHead + 4
  /* 10FEE4 80191684 3C09E700 */       lui $t1, 0xe700
  /* 10FEE8 80191688 24590008 */     addiu $t9, $v0, 8
  /* 10FEEC 8019168C AC790004 */        sw $t9, 4($v1) # gpDisplayListHead + 4
  /* 10FEF0 80191690 AC400004 */        sw $zero, 4($v0)
  /* 10FEF4 80191694 AC490000 */        sw $t1, ($v0)
  /* 10FEF8 80191698 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10FEFC 8019169C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10FF00 801916A0 03E00008 */        jr $ra
  /* 10FF04 801916A4 00000000 */       nop 

  glabel jtgt_ovl65_801916A8
  /* 10FF08 801916A8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 10FF0C 801916AC AFBF0014 */        sw $ra, 0x14($sp)
  /* 10FF10 801916B0 8C820074 */        lw $v0, 0x74($a0)
  /* 10FF14 801916B4 8C850084 */        lw $a1, 0x84($a0)
  /* 10FF18 801916B8 3C0FE700 */       lui $t7, 0xe700
  /* 10FF1C 801916BC 10400008 */      beqz $v0, .L801916E0
  /* 10FF20 801916C0 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 10FF24 801916C4 8C430080 */        lw $v1, 0x80($v0)
  .L801916C8:
  /* 10FF28 801916C8 50600003 */      beql $v1, $zero, .L801916D8
  /* 10FF2C 801916CC 8C420010 */        lw $v0, 0x10($v0)
  /* 10FF30 801916D0 A065005B */        sb $a1, 0x5b($v1)
  /* 10FF34 801916D4 8C420010 */        lw $v0, 0x10($v0)
  .L801916D8:
  /* 10FF38 801916D8 5440FFFB */      bnel $v0, $zero, .L801916C8
  /* 10FF3C 801916DC 8C430080 */        lw $v1, 0x80($v0)
  .L801916E0:
  /* 10FF40 801916E0 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FF44 801916E4 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FF48 801916E8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 10FF4C 801916EC 3C090050 */       lui $t1, (0x5041C8 >> 16) # 5259720
  /* 10FF50 801916F0 352941C8 */       ori $t1, $t1, (0x5041C8 & 0xFFFF) # 5259720
  /* 10FF54 801916F4 244E0008 */     addiu $t6, $v0, 8
  /* 10FF58 801916F8 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 10FF5C 801916FC AC400004 */        sw $zero, 4($v0)
  /* 10FF60 80191700 AC4F0000 */        sw $t7, ($v0)
  /* 10FF64 80191704 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 10FF68 80191708 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FF6C 8019170C 30AC00FF */      andi $t4, $a1, 0xff
  /* 10FF70 80191710 24580008 */     addiu $t8, $v0, 8
  /* 10FF74 80191714 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 10FF78 80191718 AC490004 */        sw $t1, 4($v0)
  /* 10FF7C 8019171C AC590000 */        sw $t9, ($v0)
  /* 10FF80 80191720 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 10FF84 80191724 2401FF00 */     addiu $at, $zero, -0x100
  /* 10FF88 80191728 01816825 */        or $t5, $t4, $at
  /* 10FF8C 8019172C 244A0008 */     addiu $t2, $v0, 8
  /* 10FF90 80191730 AC6A0000 */        sw $t2, ($v1) # gpDisplayListHead + 0
  /* 10FF94 80191734 3C0BFA00 */       lui $t3, 0xfa00
  /* 10FF98 80191738 AC4B0000 */        sw $t3, ($v0)
  /* 10FF9C 8019173C 0C00500E */       jal func_80014038
  /* 10FFA0 80191740 AC4D0004 */        sw $t5, 4($v0)
  /* 10FFA4 80191744 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 10FFA8 80191748 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 10FFAC 8019174C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 10FFB0 80191750 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 10FFB4 80191754 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 10FFB8 80191758 244E0008 */     addiu $t6, $v0, 8
  /* 10FFBC 8019175C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 10FFC0 80191760 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 10FFC4 80191764 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 10FFC8 80191768 AC4F0000 */        sw $t7, ($v0)
  /* 10FFCC 8019176C AC580004 */        sw $t8, 4($v0)
  /* 10FFD0 80191770 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 10FFD4 80191774 3C09E700 */       lui $t1, 0xe700
  /* 10FFD8 80191778 24590008 */     addiu $t9, $v0, 8
  /* 10FFDC 8019177C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 10FFE0 80191780 AC400004 */        sw $zero, 4($v0)
  /* 10FFE4 80191784 AC490000 */        sw $t1, ($v0)
  /* 10FFE8 80191788 8FBF0014 */        lw $ra, 0x14($sp)
  /* 10FFEC 8019178C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 10FFF0 80191790 03E00008 */        jr $ra
  /* 10FFF4 80191794 00000000 */       nop 

glabel func_ovl65_80191798
  /* 10FFF8 80191798 3C01437F */       lui $at, (0x437F0000 >> 16) # 255.0
  /* 10FFFC 8019179C 44811000 */      mtc1 $at, $f2 # 255.0 to cop1
  /* 110000 801917A0 3C028019 */       lui $v0, %hi(D_ovl65_801938F0)
  /* 110004 801917A4 244238F0 */     addiu $v0, $v0, %lo(D_ovl65_801938F0)
  /* 110008 801917A8 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 11000C 801917AC 44813000 */      mtc1 $at, $f6 # 1.0 to cop1
  /* 110010 801917B0 C4440000 */      lwc1 $f4, ($v0) # D_ovl65_801938F0 + 0
  /* 110014 801917B4 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 110018 801917B8 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 11001C 801917BC 46062200 */     add.s $f8, $f4, $f6
  /* 110020 801917C0 AFA40000 */        sw $a0, ($sp)
  /* 110024 801917C4 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 110028 801917C8 3C18E700 */       lui $t8, 0xe700
  /* 11002C 801917CC E4480000 */      swc1 $f8, ($v0) # D_ovl65_801938F0 + 0
  /* 110030 801917D0 C4400000 */      lwc1 $f0, ($v0) # D_ovl65_801938F0 + 0
  /* 110034 801917D4 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 110038 801917D8 4600103C */    c.lt.s $f2, $f0
  /* 11003C 801917DC 00000000 */       nop 
  /* 110040 801917E0 45020004 */     bc1fl .L801917F4
  /* 110044 801917E4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110048 801917E8 E4420000 */      swc1 $f2, ($v0)
  /* 11004C 801917EC C4400000 */      lwc1 $f0, ($v0)
  /* 110050 801917F0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  .L801917F4:
  /* 110054 801917F4 4600028D */ trunc.w.s $f10, $f0
  /* 110058 801917F8 2401FF00 */     addiu $at, $zero, -0x100
  /* 11005C 801917FC 244F0008 */     addiu $t7, $v0, 8
  /* 110060 80191800 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 110064 80191804 AC400004 */        sw $zero, 4($v0)
  /* 110068 80191808 AC580000 */        sw $t8, ($v0)
  /* 11006C 8019180C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110070 80191810 3C18FCFF */       lui $t8, (0xFCFFFFFF >> 16) # 4244635647
  /* 110074 80191814 3718FFFF */       ori $t8, $t8, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 110078 80191818 24590008 */     addiu $t9, $v0, 8
  /* 11007C 8019181C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 110080 80191820 AC400004 */        sw $zero, 4($v0)
  /* 110084 80191824 AC4E0000 */        sw $t6, ($v0)
  /* 110088 80191828 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11008C 8019182C 3C19FFFD */       lui $t9, (0xFFFDF6FB >> 16) # 4294833915
  /* 110090 80191830 3739F6FB */       ori $t9, $t9, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 110094 80191834 244F0008 */     addiu $t7, $v0, 8
  /* 110098 80191838 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 11009C 8019183C AC590004 */        sw $t9, 4($v0)
  /* 1100A0 80191840 AC580000 */        sw $t8, ($v0)
  /* 1100A4 80191844 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1100A8 80191848 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 1100AC 8019184C 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 1100B0 80191850 244E0008 */     addiu $t6, $v0, 8
  /* 1100B4 80191854 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1100B8 80191858 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 1100BC 8019185C 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 1100C0 80191860 AC580004 */        sw $t8, 4($v0)
  /* 1100C4 80191864 AC4F0000 */        sw $t7, ($v0)
  /* 1100C8 80191868 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1100CC 8019186C 440D5000 */      mfc1 $t5, $f10
  /* 1100D0 80191870 3C0EFA00 */       lui $t6, 0xfa00
  /* 1100D4 80191874 24590008 */     addiu $t9, $v0, 8
  /* 1100D8 80191878 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 1100DC 8019187C 31AF00FF */      andi $t7, $t5, 0xff
  /* 1100E0 80191880 01E1C025 */        or $t8, $t7, $at
  /* 1100E4 80191884 AC580004 */        sw $t8, 4($v0)
  /* 1100E8 80191888 AC4E0000 */        sw $t6, ($v0)
  /* 1100EC 8019188C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1100F0 80191890 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 1100F4 80191894 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 1100F8 80191898 24590008 */     addiu $t9, $v0, 8
  /* 1100FC 8019189C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 110100 801918A0 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 110104 801918A4 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 110108 801918A8 AC4E0000 */        sw $t6, ($v0)
  /* 11010C 801918AC AC4F0004 */        sw $t7, 4($v0)
  /* 110110 801918B0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110114 801918B4 3C19E700 */       lui $t9, 0xe700
  /* 110118 801918B8 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11011C 801918BC 24580008 */     addiu $t8, $v0, 8
  /* 110120 801918C0 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 110124 801918C4 AC400004 */        sw $zero, 4($v0)
  /* 110128 801918C8 AC590000 */        sw $t9, ($v0)
  /* 11012C 801918CC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110130 801918D0 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 110134 801918D4 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 110138 801918D8 244E0008 */     addiu $t6, $v0, 8
  /* 11013C 801918DC AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 110140 801918E0 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 110144 801918E4 AC4F0000 */        sw $t7, ($v0)
  /* 110148 801918E8 AC580004 */        sw $t8, 4($v0)
  /* 11014C 801918EC 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110150 801918F0 3C0EE700 */       lui $t6, 0xe700
  /* 110154 801918F4 24590008 */     addiu $t9, $v0, 8
  /* 110158 801918F8 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11015C 801918FC AC400004 */        sw $zero, 4($v0)
  /* 110160 80191900 03E00008 */        jr $ra
  /* 110164 80191904 AC4E0000 */        sw $t6, ($v0)

glabel func_ovl65_80191908
  /* 110168 80191908 3C028019 */       lui $v0, %hi(D_ovl65_801938F0)
  /* 11016C 8019190C 244238F0 */     addiu $v0, $v0, %lo(D_ovl65_801938F0)
  /* 110170 80191910 3C018019 */       lui $at, %hi(D_ovl65_80192F70)
  /* 110174 80191914 C4262F70 */      lwc1 $f6, %lo(D_ovl65_80192F70)($at)
  /* 110178 80191918 C4440000 */      lwc1 $f4, ($v0) # D_ovl65_801938F0 + 0
  /* 11017C 8019191C 44801000 */      mtc1 $zero, $f2
  /* 110180 80191920 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 110184 80191924 46062201 */     sub.s $f8, $f4, $f6
  /* 110188 80191928 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 11018C 8019192C AFA40030 */        sw $a0, 0x30($sp)
  /* 110190 80191930 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 110194 80191934 E4480000 */      swc1 $f8, ($v0) # D_ovl65_801938F0 + 0
  /* 110198 80191938 C4400000 */      lwc1 $f0, ($v0) # D_ovl65_801938F0 + 0
  /* 11019C 8019193C 3C18E700 */       lui $t8, 0xe700
  /* 1101A0 80191940 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 1101A4 80191944 4602003C */    c.lt.s $f0, $f2
  /* 1101A8 80191948 00000000 */       nop 
  /* 1101AC 8019194C 45020004 */     bc1fl .L80191960
  /* 1101B0 80191950 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1101B4 80191954 E4420000 */      swc1 $f2, ($v0)
  /* 1101B8 80191958 C4400000 */      lwc1 $f0, ($v0)
  /* 1101BC 8019195C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  .L80191960:
  /* 1101C0 80191960 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 1101C4 80191964 4600028D */ trunc.w.s $f10, $f0
  /* 1101C8 80191968 244F0008 */     addiu $t7, $v0, 8
  /* 1101CC 8019196C AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 1101D0 80191970 AC580000 */        sw $t8, ($v0)
  /* 1101D4 80191974 AC400004 */        sw $zero, 4($v0)
  /* 1101D8 80191978 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1101DC 8019197C 3C18FCFF */       lui $t8, (0xFCFFFFFF >> 16) # 4244635647
  /* 1101E0 80191980 3718FFFF */       ori $t8, $t8, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 1101E4 80191984 24590008 */     addiu $t9, $v0, 8
  /* 1101E8 80191988 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 1101EC 8019198C AC4E0000 */        sw $t6, ($v0)
  /* 1101F0 80191990 AC400004 */        sw $zero, 4($v0)
  /* 1101F4 80191994 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1101F8 80191998 3C19FFFD */       lui $t9, (0xFFFDF6FB >> 16) # 4294833915
  /* 1101FC 8019199C 3739F6FB */       ori $t9, $t9, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 110200 801919A0 244F0008 */     addiu $t7, $v0, 8
  /* 110204 801919A4 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 110208 801919A8 AC580000 */        sw $t8, ($v0)
  /* 11020C 801919AC AC590004 */        sw $t9, 4($v0)
  /* 110210 801919B0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110214 801919B4 3C180050 */       lui $t8, (0x5041C8 >> 16) # 5259720
  /* 110218 801919B8 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11021C 801919BC 244E0008 */     addiu $t6, $v0, 8
  /* 110220 801919C0 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 110224 801919C4 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 110228 801919C8 371841C8 */       ori $t8, $t8, (0x5041C8 & 0xFFFF) # 5259720
  /* 11022C 801919CC AC580004 */        sw $t8, 4($v0)
  /* 110230 801919D0 AC4F0000 */        sw $t7, ($v0)
  /* 110234 801919D4 440D5000 */      mfc1 $t5, $f10
  /* 110238 801919D8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 11023C 801919DC 3C0EFA00 */       lui $t6, 0xfa00
  /* 110240 801919E0 31A400FF */      andi $a0, $t5, 0xff
  /* 110244 801919E4 24590008 */     addiu $t9, $v0, 8
  /* 110248 801919E8 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 11024C 801919EC 00047E00 */       sll $t7, $a0, 0x18
  /* 110250 801919F0 0004C400 */       sll $t8, $a0, 0x10
  /* 110254 801919F4 AC4E0000 */        sw $t6, ($v0)
  /* 110258 801919F8 00047200 */       sll $t6, $a0, 8
  /* 11025C 801919FC 01F8C825 */        or $t9, $t7, $t8
  /* 110260 80191A00 032E7825 */        or $t7, $t9, $t6
  /* 110264 80191A04 35F800FF */       ori $t8, $t7, 0xff
  /* 110268 80191A08 AC580004 */        sw $t8, 4($v0)
  /* 11026C 80191A0C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110270 80191A10 3C0F0002 */       lui $t7, (0x28028 >> 16) # 163880
  /* 110274 80191A14 3C0EF64D */       lui $t6, (0xF64D8398 >> 16) # 4132275096
  /* 110278 80191A18 24590008 */     addiu $t9, $v0, 8
  /* 11027C 80191A1C AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 110280 80191A20 35CE8398 */       ori $t6, $t6, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 110284 80191A24 35EF8028 */       ori $t7, $t7, (0x28028 & 0xFFFF) # 163880
  /* 110288 80191A28 AC4F0004 */        sw $t7, 4($v0)
  /* 11028C 80191A2C AC4E0000 */        sw $t6, ($v0)
  /* 110290 80191A30 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 110294 80191A34 3C19E700 */       lui $t9, 0xe700
  /* 110298 80191A38 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 11029C 80191A3C 24580008 */     addiu $t8, $v0, 8
  /* 1102A0 80191A40 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 1102A4 80191A44 AC590000 */        sw $t9, ($v0)
  /* 1102A8 80191A48 AC400004 */        sw $zero, 4($v0)
  /* 1102AC 80191A4C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1102B0 80191A50 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 1102B4 80191A54 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 1102B8 80191A58 244E0008 */     addiu $t6, $v0, 8
  /* 1102BC 80191A5C AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 1102C0 80191A60 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 1102C4 80191A64 AC4F0000 */        sw $t7, ($v0)
  /* 1102C8 80191A68 AC580004 */        sw $t8, 4($v0)
  /* 1102CC 80191A6C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 1102D0 80191A70 3C0EE700 */       lui $t6, 0xe700
  /* 1102D4 80191A74 24590008 */     addiu $t9, $v0, 8
  /* 1102D8 80191A78 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 1102DC 80191A7C AFA20004 */        sw $v0, 4($sp)
  /* 1102E0 80191A80 AC4E0000 */        sw $t6, ($v0)
  /* 1102E4 80191A84 8FB80004 */        lw $t8, 4($sp)
  /* 1102E8 80191A88 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1102EC 80191A8C 03E00008 */        jr $ra
  /* 1102F0 80191A90 AF000004 */        sw $zero, 4($t8)

glabel func_ovl65_80191A94
  /* 1102F4 80191A94 3C028004 */       lui $v0, %hi(gOMObjCommonLinks + (0x0D * 4))
  /* 1102F8 80191A98 8C426724 */        lw $v0, %lo(gOMObjCommonLinks + (0x0D * 4))($v0)
  /* 1102FC 80191A9C 3C058019 */       lui $a1, %hi(D_ovl65_801938D8)
  /* 110300 80191AA0 24A538D8 */     addiu $a1, $a1, %lo(D_ovl65_801938D8)
  /* 110304 80191AA4 1040000F */      beqz $v0, .L80191AE4
  /* 110308 80191AA8 2406FFFF */     addiu $a2, $zero, -1
  /* 11030C 80191AAC 240403FF */     addiu $a0, $zero, 0x3ff
  /* 110310 80191AB0 8C4E0000 */        lw $t6, ($v0)
  .L80191AB4:
  /* 110314 80191AB4 548E0009 */      bnel $a0, $t6, .L80191ADC
  /* 110318 80191AB8 8C420004 */        lw $v0, 4($v0)
  /* 11031C 80191ABC 8CAF0010 */        lw $t7, 0x10($a1) # D_ovl65_801938D8 + 16
  /* 110320 80191AC0 8C590074 */        lw $t9, 0x74($v0)
  /* 110324 80191AC4 8DE30014 */        lw $v1, 0x14($t7)
  /* 110328 80191AC8 00660019 */     multu $v1, $a2
  /* 11032C 80191ACC 0000C012 */      mflo $t8
  /* 110330 80191AD0 AF380084 */        sw $t8, 0x84($t9)
  /* 110334 80191AD4 00000000 */       nop 
  /* 110338 80191AD8 8C420004 */        lw $v0, 4($v0)
  .L80191ADC:
  /* 11033C 80191ADC 5440FFF5 */      bnel $v0, $zero, .L80191AB4
  /* 110340 80191AE0 8C4E0000 */        lw $t6, ($v0)
  .L80191AE4:
  /* 110344 80191AE4 03E00008 */        jr $ra
  /* 110348 80191AE8 00000000 */       nop 

glabel func_ovl65_80191AEC
  /* 11034C 80191AEC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 110350 80191AF0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 110354 80191AF4 8C820074 */        lw $v0, 0x74($a0)
  /* 110358 80191AF8 8C8E0084 */        lw $t6, 0x84($a0)
  /* 11035C 80191AFC 8C4F0084 */        lw $t7, 0x84($v0)
  /* 110360 80191B00 01CF1821 */      addu $v1, $t6, $t7
  /* 110364 80191B04 04610005 */      bgez $v1, .L80191B1C
  /* 110368 80191B08 AC830084 */        sw $v1, 0x84($a0)
  /* 11036C 80191B0C 0C0026A1 */       jal omEjectGObjCommon
  /* 110370 80191B10 00000000 */       nop 
  /* 110374 80191B14 10000008 */         b .L80191B38
  /* 110378 80191B18 8FBF0014 */        lw $ra, 0x14($sp)
  .L80191B1C:
  /* 11037C 80191B1C 28610100 */      slti $at, $v1, 0x100
  /* 110380 80191B20 14200002 */      bnez $at, .L80191B2C
  /* 110384 80191B24 241900FF */     addiu $t9, $zero, 0xff
  /* 110388 80191B28 AC990084 */        sw $t9, 0x84($a0)
  .L80191B2C:
  /* 11038C 80191B2C 0C0037CD */       jal func_8000DF34
  /* 110390 80191B30 00000000 */       nop 
  /* 110394 80191B34 8FBF0014 */        lw $ra, 0x14($sp)
  .L80191B38:
  /* 110398 80191B38 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11039C 80191B3C 03E00008 */        jr $ra
  /* 1103A0 80191B40 00000000 */       nop 

glabel func_ovl65_80191B44
  /* 1103A4 80191B44 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 1103A8 80191B48 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1103AC 80191B4C 8C860074 */        lw $a2, 0x74($a0)
  /* 1103B0 80191B50 AFA00024 */        sw $zero, 0x24($sp)
  /* 1103B4 80191B54 24040002 */     addiu $a0, $zero, 2
  /* 1103B8 80191B58 0C006265 */       jal lbRandom_GetIntRange
  /* 1103BC 80191B5C AFA60034 */        sw $a2, 0x34($sp)
  /* 1103C0 80191B60 3C058013 */       lui $a1, %hi(gMapEdgeBounds)
  /* 1103C4 80191B64 24A51308 */     addiu $a1, $a1, %lo(gMapEdgeBounds)
  /* 1103C8 80191B68 3C0144FA */       lui $at, (0x44FA0000 >> 16) # 2000.0
  /* 1103CC 80191B6C 44816000 */      mtc1 $at, $f12 # 2000.0 to cop1
  /* 1103D0 80191B70 C4A0002C */      lwc1 $f0, 0x2c($a1) # gMapEdgeBounds + 44
  /* 1103D4 80191B74 00022100 */       sll $a0, $v0, 4
  /* 1103D8 80191B78 00822023 */      subu $a0, $a0, $v0
  /* 1103DC 80191B7C 460C003C */    c.lt.s $f0, $f12
  /* 1103E0 80191B80 00042040 */       sll $a0, $a0, 1
  /* 1103E4 80191B84 2484001E */     addiu $a0, $a0, 0x1e
  /* 1103E8 80191B88 8FA30024 */        lw $v1, 0x24($sp)
  /* 1103EC 80191B8C 45000004 */      bc1f .L80191BA0
  /* 1103F0 80191B90 8FA60034 */        lw $a2, 0x34($sp)
  /* 1103F4 80191B94 460C0381 */     sub.s $f14, $f0, $f12
  /* 1103F8 80191B98 10000002 */         b .L80191BA4
  /* 1103FC 80191B9C 46007387 */     neg.s $f14, $f14
  .L80191BA0:
  /* 110400 80191BA0 460C0381 */     sub.s $f14, $f0, $f12
  .L80191BA4:
  /* 110404 80191BA4 C4A40028 */      lwc1 $f4, 0x28($a1) # gMapEdgeBounds + 40
  /* 110408 80191BA8 44809000 */      mtc1 $zero, $f18
  /* 11040C 80191BAC 3C028013 */       lui $v0, %hi(gpGroundInfo)
  /* 110410 80191BB0 460C2000 */     add.s $f0, $f4, $f12
  /* 110414 80191BB4 4612003C */    c.lt.s $f0, $f18
  /* 110418 80191BB8 00000000 */       nop 
  /* 11041C 80191BBC 45020004 */     bc1fl .L80191BD0
  /* 110420 80191BC0 46000086 */     mov.s $f2, $f0
  /* 110424 80191BC4 10000002 */         b .L80191BD0
  /* 110428 80191BC8 46000087 */     neg.s $f2, $f0
  /* 11042C 80191BCC 46000086 */     mov.s $f2, $f0
  .L80191BD0:
  /* 110430 80191BD0 8C421300 */        lw $v0, %lo(gpGroundInfo)($v0)
  /* 110434 80191BD4 460E1400 */     add.s $f16, $f2, $f14
  /* 110438 80191BD8 844E0074 */        lh $t6, 0x74($v0)
  /* 11043C 80191BDC 448E3000 */      mtc1 $t6, $f6
  /* 110440 80191BE0 00000000 */       nop 
  /* 110444 80191BE4 46803020 */   cvt.s.w $f0, $f6
  /* 110448 80191BE8 460C003C */    c.lt.s $f0, $f12
  /* 11044C 80191BEC 00000000 */       nop 
  /* 110450 80191BF0 45020005 */     bc1fl .L80191C08
  /* 110454 80191BF4 460C0381 */     sub.s $f14, $f0, $f12
  /* 110458 80191BF8 460C0381 */     sub.s $f14, $f0, $f12
  /* 11045C 80191BFC 10000002 */         b .L80191C08
  /* 110460 80191C00 46007387 */     neg.s $f14, $f14
  /* 110464 80191C04 460C0381 */     sub.s $f14, $f0, $f12
  .L80191C08:
  /* 110468 80191C08 844F0076 */        lh $t7, 0x76($v0)
  /* 11046C 80191C0C 448F4000 */      mtc1 $t7, $f8
  /* 110470 80191C10 00000000 */       nop 
  /* 110474 80191C14 468042A0 */   cvt.s.w $f10, $f8
  /* 110478 80191C18 460C5000 */     add.s $f0, $f10, $f12
  /* 11047C 80191C1C 4612003C */    c.lt.s $f0, $f18
  /* 110480 80191C20 00000000 */       nop 
  /* 110484 80191C24 45020004 */     bc1fl .L80191C38
  /* 110488 80191C28 46000086 */     mov.s $f2, $f0
  /* 11048C 80191C2C 10000002 */         b .L80191C38
  /* 110490 80191C30 46000087 */     neg.s $f2, $f0
  /* 110494 80191C34 46000086 */     mov.s $f2, $f0
  .L80191C38:
  /* 110498 80191C38 AFA30024 */        sw $v1, 0x24($sp)
  /* 11049C 80191C3C AFA40028 */        sw $a0, 0x28($sp)
  /* 1104A0 80191C40 AFA60034 */        sw $a2, 0x34($sp)
  /* 1104A4 80191C44 E7A20020 */      swc1 $f2, 0x20($sp)
  /* 1104A8 80191C48 E7AE001C */      swc1 $f14, 0x1c($sp)
  /* 1104AC 80191C4C 0C006252 */       jal lbRandom_GetFloat
  /* 1104B0 80191C50 E7B00030 */      swc1 $f16, 0x30($sp)
  /* 1104B4 80191C54 C7B00030 */      lwc1 $f16, 0x30($sp)
  /* 1104B8 80191C58 3C058013 */       lui $a1, %hi(gMapEdgeBounds)
  /* 1104BC 80191C5C 24A51308 */     addiu $a1, $a1, %lo(gMapEdgeBounds)
  /* 1104C0 80191C60 3C0144FA */       lui $at, (0x44FA0000 >> 16) # 2000.0
  /* 1104C4 80191C64 46100102 */     mul.s $f4, $f0, $f16
  /* 1104C8 80191C68 44816000 */      mtc1 $at, $f12 # 2000.0 to cop1
  /* 1104CC 80191C6C C4A6002C */      lwc1 $f6, 0x2c($a1) # gMapEdgeBounds + 44
  /* 1104D0 80191C70 8FA60034 */        lw $a2, 0x34($sp)
  /* 1104D4 80191C74 460C3201 */     sub.s $f8, $f6, $f12
  /* 1104D8 80191C78 46082280 */     add.s $f10, $f4, $f8
  /* 1104DC 80191C7C 0C006252 */       jal lbRandom_GetFloat
  /* 1104E0 80191C80 E4CA001C */      swc1 $f10, 0x1c($a2)
  /* 1104E4 80191C84 3C188013 */       lui $t8, %hi(gpGroundInfo)
  /* 1104E8 80191C88 8F181300 */        lw $t8, %lo(gpGroundInfo)($t8)
  /* 1104EC 80191C8C C7A20020 */      lwc1 $f2, 0x20($sp)
  /* 1104F0 80191C90 C7AE001C */      lwc1 $f14, 0x1c($sp)
  /* 1104F4 80191C94 87190076 */        lh $t9, 0x76($t8)
  /* 1104F8 80191C98 3C0144FA */       lui $at, (0x44FA0000 >> 16) # 2000.0
  /* 1104FC 80191C9C 460E1180 */     add.s $f6, $f2, $f14
  /* 110500 80191CA0 44994000 */      mtc1 $t9, $f8
  /* 110504 80191CA4 44816000 */      mtc1 $at, $f12 # 2000.0 to cop1
  /* 110508 80191CA8 8FA60034 */        lw $a2, 0x34($sp)
  /* 11050C 80191CAC 468042A0 */   cvt.s.w $f10, $f8
  /* 110510 80191CB0 46060102 */     mul.s $f4, $f0, $f6
  /* 110514 80191CB4 44808000 */      mtc1 $zero, $f16
  /* 110518 80191CB8 8FA30024 */        lw $v1, 0x24($sp)
  /* 11051C 80191CBC 8FA40028 */        lw $a0, 0x28($sp)
  /* 110520 80191CC0 24010001 */     addiu $at, $zero, 1
  /* 110524 80191CC4 460C5180 */     add.s $f6, $f10, $f12
  /* 110528 80191CC8 C4CA001C */      lwc1 $f10, 0x1c($a2)
  /* 11052C 80191CCC 4610503C */    c.lt.s $f10, $f16
  /* 110530 80191CD0 46062200 */     add.s $f8, $f4, $f6
  /* 110534 80191CD4 45000002 */      bc1f .L80191CE0
  /* 110538 80191CD8 E4C80020 */      swc1 $f8, 0x20($a2)
  /* 11053C 80191CDC 24030002 */     addiu $v1, $zero, 2
  .L80191CE0:
  /* 110540 80191CE0 C4C40020 */      lwc1 $f4, 0x20($a2)
  /* 110544 80191CE4 4610203C */    c.lt.s $f4, $f16
  /* 110548 80191CE8 00000000 */       nop 
  /* 11054C 80191CEC 45000002 */      bc1f .L80191CF8
  /* 110550 80191CF0 00000000 */       nop 
  /* 110554 80191CF4 24630001 */     addiu $v1, $v1, 1
  .L80191CF8:
  /* 110558 80191CF8 5060000C */      beql $v1, $zero, .L80191D2C
  /* 11055C 80191CFC 2484010E */     addiu $a0, $a0, 0x10e
  /* 110560 80191D00 10610005 */       beq $v1, $at, .L80191D18
  /* 110564 80191D04 24010003 */     addiu $at, $zero, 3
  /* 110568 80191D08 10610005 */       beq $v1, $at, .L80191D20
  /* 11056C 80191D0C 00000000 */       nop 
  /* 110570 80191D10 10000007 */         b .L80191D30
  /* 110574 80191D14 44843000 */      mtc1 $a0, $f6
  .L80191D18:
  /* 110578 80191D18 10000004 */         b .L80191D2C
  /* 11057C 80191D1C 248400B4 */     addiu $a0, $a0, 0xb4
  .L80191D20:
  /* 110580 80191D20 10000002 */         b .L80191D2C
  /* 110584 80191D24 2484005A */     addiu $a0, $a0, 0x5a
  /* 110588 80191D28 2484010E */     addiu $a0, $a0, 0x10e
  .L80191D2C:
  /* 11058C 80191D2C 44843000 */      mtc1 $a0, $f6
  .L80191D30:
  /* 110590 80191D30 3C018019 */       lui $at, %hi(D_ovl65_80192F74)
  /* 110594 80191D34 C42A2F74 */      lwc1 $f10, %lo(D_ovl65_80192F74)($at)
  /* 110598 80191D38 46803220 */   cvt.s.w $f8, $f6
  /* 11059C 80191D3C 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 1105A0 80191D40 44813000 */      mtc1 $at, $f6 # 180.0 to cop1
  /* 1105A4 80191D44 460A4102 */     mul.s $f4, $f8, $f10
  /* 1105A8 80191D48 46062203 */     div.s $f8, $f4, $f6
  /* 1105AC 80191D4C E4C80038 */      swc1 $f8, 0x38($a2)
  /* 1105B0 80191D50 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1105B4 80191D54 27BD0038 */     addiu $sp, $sp, 0x38
  /* 1105B8 80191D58 03E00008 */        jr $ra
  /* 1105BC 80191D5C 00000000 */       nop 

  glabel jtgt_ovl65_80191D60
  /* 1105C0 80191D60 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1105C4 80191D64 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1105C8 80191D68 0C0646BB */       jal func_ovl65_80191AEC
  /* 1105CC 80191D6C AFA40018 */        sw $a0, 0x18($sp)
  /* 1105D0 80191D70 8FA40018 */        lw $a0, 0x18($sp)
  /* 1105D4 80191D74 44802000 */      mtc1 $zero, $f4
  /* 1105D8 80191D78 C4860078 */      lwc1 $f6, 0x78($a0)
  /* 1105DC 80191D7C 4604303E */    c.le.s $f6, $f4
  /* 1105E0 80191D80 00000000 */       nop 
  /* 1105E4 80191D84 45020004 */     bc1fl .L80191D98
  /* 1105E8 80191D88 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1105EC 80191D8C 0C0646D1 */       jal func_ovl65_80191B44
  /* 1105F0 80191D90 00000000 */       nop 
  /* 1105F4 80191D94 8FBF0014 */        lw $ra, 0x14($sp)
  .L80191D98:
  /* 1105F8 80191D98 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1105FC 80191D9C 03E00008 */        jr $ra
  /* 110600 80191DA0 00000000 */       nop 

  glabel jtgt_ovl65_80191DA4
  /* 110604 80191DA4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 110608 80191DA8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11060C 80191DAC 8C820074 */        lw $v0, 0x74($a0)
  /* 110610 80191DB0 2401FFFF */     addiu $at, $zero, -1
  /* 110614 80191DB4 8C4E0084 */        lw $t6, 0x84($v0)
  /* 110618 80191DB8 55C1000E */      bnel $t6, $at, .L80191DF4
  /* 11061C 80191DBC 8C8F0084 */        lw $t7, 0x84($a0)
  /* 110620 80191DC0 C4440078 */      lwc1 $f4, 0x78($v0)
  /* 110624 80191DC4 3C018019 */       lui $at, %hi(D_ovl65_80192F78)
  /* 110628 80191DC8 D4282F78 */      ldc1 $f8, %lo(D_ovl65_80192F78)($at)
  /* 11062C 80191DCC 460021A1 */   cvt.d.s $f6, $f4
  /* 110630 80191DD0 46283280 */     add.d $f10, $f6, $f8
  /* 110634 80191DD4 46205420 */   cvt.s.d $f16, $f10
  /* 110638 80191DD8 E4500078 */      swc1 $f16, 0x78($v0)
  /* 11063C 80191DDC 8C450078 */        lw $a1, 0x78($v0)
  /* 110640 80191DE0 0C002ED3 */       jal func_8000BB4C
  /* 110644 80191DE4 AFA40018 */        sw $a0, 0x18($sp)
  /* 110648 80191DE8 10000009 */         b .L80191E10
  /* 11064C 80191DEC 8FA40018 */        lw $a0, 0x18($sp)
  /* 110650 80191DF0 8C8F0084 */        lw $t7, 0x84($a0)
  .L80191DF4:
  /* 110654 80191DF4 29E100FF */      slti $at, $t7, 0xff
  /* 110658 80191DF8 10200005 */      beqz $at, .L80191E10
  /* 11065C 80191DFC 3C018019 */       lui $at, %hi(D_ovl65_80192F80)
  /* 110660 80191E00 C4242F80 */      lwc1 $f4, %lo(D_ovl65_80192F80)($at)
  /* 110664 80191E04 C4520020 */      lwc1 $f18, 0x20($v0)
  /* 110668 80191E08 46049180 */     add.s $f6, $f18, $f4
  /* 11066C 80191E0C E4460020 */      swc1 $f6, 0x20($v0)
  .L80191E10:
  /* 110670 80191E10 0C0646BB */       jal func_ovl65_80191AEC
  /* 110674 80191E14 00000000 */       nop 
  /* 110678 80191E18 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11067C 80191E1C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 110680 80191E20 03E00008 */        jr $ra
  /* 110684 80191E24 00000000 */       nop 

  glabel jtgt_ovl65_80191E28
  /* 110688 80191E28 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11068C 80191E2C AFBF0014 */        sw $ra, 0x14($sp)
  /* 110690 80191E30 8C8E0084 */        lw $t6, 0x84($a0)
  /* 110694 80191E34 8C820074 */        lw $v0, 0x74($a0)
  /* 110698 80191E38 3C188019 */       lui $t8, %hi(D_ovl65_801938EC)
  /* 11069C 80191E3C 15C00006 */      bnez $t6, .L80191E58
  /* 1106A0 80191E40 00000000 */       nop 
  /* 1106A4 80191E44 44800000 */      mtc1 $zero, $f0
  /* 1106A8 80191E48 00000000 */       nop 
  /* 1106AC 80191E4C E4400048 */      swc1 $f0, 0x48($v0)
  /* 1106B0 80191E50 E4400044 */      swc1 $f0, 0x44($v0)
  /* 1106B4 80191E54 E4400040 */      swc1 $f0, 0x40($v0)
  .L80191E58:
  /* 1106B8 80191E58 8F1838EC */        lw $t8, %lo(D_ovl65_801938EC)($t8)
  /* 1106BC 80191E5C 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 1106C0 80191E60 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 1106C4 80191E64 0018C8C0 */       sll $t9, $t8, 3
  /* 1106C8 80191E68 0338C823 */      subu $t9, $t9, $t8
  /* 1106CC 80191E6C 0019C880 */       sll $t9, $t9, 2
  /* 1106D0 80191E70 0338C821 */      addu $t9, $t9, $t8
  /* 1106D4 80191E74 0019C880 */       sll $t9, $t9, 2
  /* 1106D8 80191E78 01F94021 */      addu $t0, $t7, $t9
  /* 1106DC 80191E7C 8D09006C */        lw $t1, 0x6c($t0)
  /* 1106E0 80191E80 2921010F */      slti $at, $t1, 0x10f
  /* 1106E4 80191E84 5420000E */      bnel $at, $zero, .L80191EC0
  /* 1106E8 80191E88 8C8A0084 */        lw $t2, 0x84($a0)
  /* 1106EC 80191E8C C4440078 */      lwc1 $f4, 0x78($v0)
  /* 1106F0 80191E90 3C018019 */       lui $at, %hi(D_ovl65_80192F88)
  /* 1106F4 80191E94 D4282F88 */      ldc1 $f8, %lo(D_ovl65_80192F88)($at)
  /* 1106F8 80191E98 460021A1 */   cvt.d.s $f6, $f4
  /* 1106FC 80191E9C 46283280 */     add.d $f10, $f6, $f8
  /* 110700 80191EA0 46205420 */   cvt.s.d $f16, $f10
  /* 110704 80191EA4 E4500078 */      swc1 $f16, 0x78($v0)
  /* 110708 80191EA8 8C450078 */        lw $a1, 0x78($v0)
  /* 11070C 80191EAC 0C002ED3 */       jal func_8000BB4C
  /* 110710 80191EB0 AFA40018 */        sw $a0, 0x18($sp)
  /* 110714 80191EB4 10000016 */         b .L80191F10
  /* 110718 80191EB8 8FA40018 */        lw $a0, 0x18($sp)
  /* 11071C 80191EBC 8C8A0084 */        lw $t2, 0x84($a0)
  .L80191EC0:
  /* 110720 80191EC0 294100FF */      slti $at, $t2, 0xff
  /* 110724 80191EC4 10200012 */      beqz $at, .L80191F10
  /* 110728 80191EC8 00000000 */       nop 
  /* 11072C 80191ECC C4520040 */      lwc1 $f18, 0x40($v0)
  /* 110730 80191ED0 3C018019 */       lui $at, %hi(D_ovl65_80192F90)
  /* 110734 80191ED4 D4202F90 */      ldc1 $f0, %lo(D_ovl65_80192F90)($at)
  /* 110738 80191ED8 46009121 */   cvt.d.s $f4, $f18
  /* 11073C 80191EDC C44A0044 */      lwc1 $f10, 0x44($v0)
  /* 110740 80191EE0 46202180 */     add.d $f6, $f4, $f0
  /* 110744 80191EE4 46005421 */   cvt.d.s $f16, $f10
  /* 110748 80191EE8 46203220 */   cvt.s.d $f8, $f6
  /* 11074C 80191EEC C4460048 */      lwc1 $f6, 0x48($v0)
  /* 110750 80191EF0 46208480 */     add.d $f18, $f16, $f0
  /* 110754 80191EF4 E4480040 */      swc1 $f8, 0x40($v0)
  /* 110758 80191EF8 46003221 */   cvt.d.s $f8, $f6
  /* 11075C 80191EFC 46209120 */   cvt.s.d $f4, $f18
  /* 110760 80191F00 46204280 */     add.d $f10, $f8, $f0
  /* 110764 80191F04 E4440044 */      swc1 $f4, 0x44($v0)
  /* 110768 80191F08 46205420 */   cvt.s.d $f16, $f10
  /* 11076C 80191F0C E4500048 */      swc1 $f16, 0x48($v0)
  .L80191F10:
  /* 110770 80191F10 0C0646BB */       jal func_ovl65_80191AEC
  /* 110774 80191F14 00000000 */       nop 
  /* 110778 80191F18 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11077C 80191F1C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 110780 80191F20 03E00008 */        jr $ra
  /* 110784 80191F24 00000000 */       nop 

  glabel jtgt_ovl65_80191F28
  /* 110788 80191F28 3C0F8019 */       lui $t7, %hi(D_ovl65_801938EC)
  /* 11078C 80191F2C 8DEF38EC */        lw $t7, %lo(D_ovl65_801938EC)($t7)
  /* 110790 80191F30 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 110794 80191F34 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 110798 80191F38 000FC0C0 */       sll $t8, $t7, 3
  /* 11079C 80191F3C 030FC023 */      subu $t8, $t8, $t7
  /* 1107A0 80191F40 0018C080 */       sll $t8, $t8, 2
  /* 1107A4 80191F44 030FC021 */      addu $t8, $t8, $t7
  /* 1107A8 80191F48 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1107AC 80191F4C 0018C080 */       sll $t8, $t8, 2
  /* 1107B0 80191F50 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1107B4 80191F54 01D8C821 */      addu $t9, $t6, $t8
  /* 1107B8 80191F58 8F28006C */        lw $t0, 0x6c($t9)
  /* 1107BC 80191F5C 24090001 */     addiu $t1, $zero, 1
  /* 1107C0 80191F60 2901010F */      slti $at, $t0, 0x10f
  /* 1107C4 80191F64 54200006 */      bnel $at, $zero, .L80191F80
  /* 1107C8 80191F68 AC89007C */        sw $t1, 0x7c($a0)
  /* 1107CC 80191F6C 0C0646BB */       jal func_ovl65_80191AEC
  /* 1107D0 80191F70 AC80007C */        sw $zero, 0x7c($a0)
  /* 1107D4 80191F74 10000003 */         b .L80191F84
  /* 1107D8 80191F78 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1107DC 80191F7C AC89007C */        sw $t1, 0x7c($a0)
  .L80191F80:
  /* 1107E0 80191F80 8FBF0014 */        lw $ra, 0x14($sp)
  .L80191F84:
  /* 1107E4 80191F84 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1107E8 80191F88 03E00008 */        jr $ra
  /* 1107EC 80191F8C 00000000 */       nop 

  glabel jtgt_ovl65_80191F90
  /* 1107F0 80191F90 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1107F4 80191F94 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1107F8 80191F98 8C8E0074 */        lw $t6, 0x74($a0)
  /* 1107FC 80191F9C 3C018019 */       lui $at, %hi(D_ovl65_80192F98)
  /* 110800 80191FA0 C4242F98 */      lwc1 $f4, %lo(D_ovl65_80192F98)($at)
  /* 110804 80191FA4 8DC30010 */        lw $v1, 0x10($t6)
  /* 110808 80191FA8 C4660074 */      lwc1 $f6, 0x74($v1)
  /* 11080C 80191FAC 46062032 */    c.eq.s $f4, $f6
  /* 110810 80191FB0 00000000 */       nop 
  /* 110814 80191FB4 4500002A */      bc1f .L80192060
  /* 110818 80191FB8 00000000 */       nop 
  /* 11081C 80191FBC 8C82002C */        lw $v0, 0x2c($a0)
  /* 110820 80191FC0 3C058019 */       lui $a1, %hi(func_ovl65_80191798)
  /* 110824 80191FC4 24A51798 */     addiu $a1, $a1, %lo(func_ovl65_80191798)
  /* 110828 80191FC8 10A2000B */       beq $a1, $v0, .L80191FF8
  /* 11082C 80191FCC 3C0F8019 */       lui $t7, %hi(func_ovl65_80191908)
  /* 110830 80191FD0 25EF1908 */     addiu $t7, $t7, %lo(func_ovl65_80191908)
  /* 110834 80191FD4 11E20008 */       beq $t7, $v0, .L80191FF8
  /* 110838 80191FD8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 11083C 80191FDC 44814000 */      mtc1 $at, $f8 # 230.0 to cop1
  /* 110840 80191FE0 3C018019 */       lui $at, %hi(D_ovl65_801938F0)
  /* 110844 80191FE4 24180064 */     addiu $t8, $zero, 0x64
  /* 110848 80191FE8 E42838F0 */      swc1 $f8, %lo(D_ovl65_801938F0)($at)
  /* 11084C 80191FEC AC780084 */        sw $t8, 0x84($v1)
  /* 110850 80191FF0 1000001D */         b .L80192068
  /* 110854 80191FF4 AC85002C */        sw $a1, 0x2c($a0)
  .L80191FF8:
  /* 110858 80191FF8 8C790084 */        lw $t9, 0x84($v1)
  /* 11085C 80191FFC 2728FFFF */     addiu $t0, $t9, -1
  /* 110860 80192000 15000019 */      bnez $t0, .L80192068
  /* 110864 80192004 AC680084 */        sw $t0, 0x84($v1)
  /* 110868 80192008 8C82002C */        lw $v0, 0x2c($a0)
  /* 11086C 8019200C 3C068019 */       lui $a2, %hi(func_ovl65_80191908)
  /* 110870 80192010 24C61908 */     addiu $a2, $a2, %lo(func_ovl65_80191908)
  /* 110874 80192014 14A20008 */       bne $a1, $v0, .L80192038
  /* 110878 80192018 3C01437F */       lui $at, (0x437F0000 >> 16) # 255.0
  /* 11087C 8019201C 44815000 */      mtc1 $at, $f10 # 255.0 to cop1
  /* 110880 80192020 3C018019 */       lui $at, %hi(D_ovl65_801938F0)
  /* 110884 80192024 240A0064 */     addiu $t2, $zero, 0x64
  /* 110888 80192028 E42A38F0 */      swc1 $f10, %lo(D_ovl65_801938F0)($at)
  /* 11088C 8019202C AC6A0084 */        sw $t2, 0x84($v1)
  /* 110890 80192030 1000000D */         b .L80192068
  /* 110894 80192034 AC86002C */        sw $a2, 0x2c($a0)
  .L80192038:
  /* 110898 80192038 54C2000C */      bnel $a2, $v0, .L8019206C
  /* 11089C 8019203C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1108A0 80192040 0C044E15 */       jal func_ovl2_80113854
  /* 1108A4 80192044 00000000 */       nop 
  /* 1108A8 80192048 3C048011 */       lui $a0, %hi(func_ovl2_80113638)
  /* 1108AC 8019204C 24843638 */     addiu $a0, $a0, %lo(func_ovl2_80113638)
  /* 1108B0 80192050 0C002BD6 */       jal func_8000AF58
  /* 1108B4 80192054 00002825 */        or $a1, $zero, $zero
  /* 1108B8 80192058 10000004 */         b .L8019206C
  /* 1108BC 8019205C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80192060:
  /* 1108C0 80192060 0C0646BB */       jal func_ovl65_80191AEC
  /* 1108C4 80192064 00000000 */       nop 
  .L80192068:
  /* 1108C8 80192068 8FBF0014 */        lw $ra, 0x14($sp)
  .L8019206C:
  /* 1108CC 8019206C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1108D0 80192070 03E00008 */        jr $ra
  /* 1108D4 80192074 00000000 */       nop 

glabel func_ovl65_80192078
  /* 1108D8 80192078 27BDFF58 */     addiu $sp, $sp, -0xa8
  /* 1108DC 8019207C AFBE0038 */        sw $fp, 0x38($sp)
  /* 1108E0 80192080 AFB70034 */        sw $s7, 0x34($sp)
  /* 1108E4 80192084 AFB40028 */        sw $s4, 0x28($sp)
  /* 1108E8 80192088 AFB30024 */        sw $s3, 0x24($sp)
  /* 1108EC 8019208C 00A09825 */        or $s3, $a1, $zero
  /* 1108F0 80192090 00C0A025 */        or $s4, $a2, $zero
  /* 1108F4 80192094 0080B825 */        or $s7, $a0, $zero
  /* 1108F8 80192098 30FE00FF */      andi $fp, $a3, 0xff
  /* 1108FC 8019209C AFBF003C */        sw $ra, 0x3c($sp)
  /* 110900 801920A0 AFB60030 */        sw $s6, 0x30($sp)
  /* 110904 801920A4 AFB5002C */        sw $s5, 0x2c($sp)
  /* 110908 801920A8 AFB20020 */        sw $s2, 0x20($sp)
  /* 11090C 801920AC AFB1001C */        sw $s1, 0x1c($sp)
  /* 110910 801920B0 AFB00018 */        sw $s0, 0x18($sp)
  /* 110914 801920B4 AFA700B4 */        sw $a3, 0xb4($sp)
  /* 110918 801920B8 AFA00050 */        sw $zero, 0x50($sp)
  /* 11091C 801920BC AFA00054 */        sw $zero, 0x54($sp)
  /* 110920 801920C0 27A20058 */     addiu $v0, $sp, 0x58
  /* 110924 801920C4 27A30098 */     addiu $v1, $sp, 0x98
  .L801920C8:
  /* 110928 801920C8 24420010 */     addiu $v0, $v0, 0x10
  /* 11092C 801920CC AC40FFF4 */        sw $zero, -0xc($v0)
  /* 110930 801920D0 AC40FFF8 */        sw $zero, -8($v0)
  /* 110934 801920D4 AC40FFFC */        sw $zero, -4($v0)
  /* 110938 801920D8 1443FFFB */       bne $v0, $v1, .L801920C8
  /* 11093C 801920DC AC40FFF0 */        sw $zero, -0x10($v0)
  /* 110940 801920E0 8E620000 */        lw $v0, ($s3)
  /* 110944 801920E4 24160012 */     addiu $s6, $zero, 0x12
  /* 110948 801920E8 27B50050 */     addiu $s5, $sp, 0x50
  /* 11094C 801920EC 30420FFF */      andi $v0, $v0, 0xfff
  /* 110950 801920F0 52C20047 */      beql $s6, $v0, .L80192210
  /* 110954 801920F4 8FBF003C */        lw $ra, 0x3c($sp)
  .L801920F8:
  /* 110958 801920F8 10400008 */      beqz $v0, .L8019211C
  /* 11095C 801920FC 00027080 */       sll $t6, $v0, 2
  /* 110960 80192100 02AE8021 */      addu $s0, $s5, $t6
  /* 110964 80192104 8E04FFFC */        lw $a0, -4($s0)
  /* 110968 80192108 0C0024FD */       jal func_800093F4
  /* 11096C 8019210C 8E650004 */        lw $a1, 4($s3)
  /* 110970 80192110 AE020000 */        sw $v0, ($s0)
  /* 110974 80192114 10000006 */         b .L80192130
  /* 110978 80192118 00409025 */        or $s2, $v0, $zero
  .L8019211C:
  /* 11097C 8019211C 02E02025 */        or $a0, $s7, $zero
  /* 110980 80192120 0C0024B4 */       jal func_800092D0
  /* 110984 80192124 8E650004 */        lw $a1, 4($s3)
  /* 110988 80192128 AFA20050 */        sw $v0, 0x50($sp)
  /* 11098C 8019212C 00409025 */        or $s2, $v0, $zero
  .L80192130:
  /* 110990 80192130 8E620000 */        lw $v0, ($s3)
  /* 110994 80192134 00003025 */        or $a2, $zero, $zero
  /* 110998 80192138 02402025 */        or $a0, $s2, $zero
  /* 11099C 8019213C 3042F000 */      andi $v0, $v0, 0xf000
  /* 1109A0 80192140 1040000A */      beqz $v0, .L8019216C
  /* 1109A4 80192144 33C500FF */      andi $a1, $fp, 0xff
  /* 1109A8 80192148 02402025 */        or $a0, $s2, $zero
  /* 1109AC 8019214C 0C002330 */       jal func_80008CC0
  /* 1109B0 80192150 2405001B */     addiu $a1, $zero, 0x1b
  /* 1109B4 80192154 02402025 */        or $a0, $s2, $zero
  /* 1109B8 80192158 2405002E */     addiu $a1, $zero, 0x2e
  /* 1109BC 8019215C 0C002330 */       jal func_80008CC0
  /* 1109C0 80192160 00003025 */        or $a2, $zero, $zero
  /* 1109C4 80192164 10000004 */         b .L80192178
  /* 1109C8 80192168 8E780008 */        lw $t8, 8($s3)
  .L8019216C:
  /* 1109CC 8019216C 0C002330 */       jal func_80008CC0
  /* 1109D0 80192170 00003025 */        or $a2, $zero, $zero
  /* 1109D4 80192174 8E780008 */        lw $t8, 8($s3)
  .L80192178:
  /* 1109D8 80192178 AE58001C */        sw $t8, 0x1c($s2)
  /* 1109DC 8019217C 8E6F000C */        lw $t7, 0xc($s3)
  /* 1109E0 80192180 AE4F0020 */        sw $t7, 0x20($s2)
  /* 1109E4 80192184 8E780010 */        lw $t8, 0x10($s3)
  /* 1109E8 80192188 AE580024 */        sw $t8, 0x24($s2)
  /* 1109EC 8019218C 8E680014 */        lw $t0, 0x14($s3)
  /* 1109F0 80192190 AE480030 */        sw $t0, 0x30($s2)
  /* 1109F4 80192194 8E790018 */        lw $t9, 0x18($s3)
  /* 1109F8 80192198 AE590034 */        sw $t9, 0x34($s2)
  /* 1109FC 8019219C 8E68001C */        lw $t0, 0x1c($s3)
  /* 110A00 801921A0 AE480038 */        sw $t0, 0x38($s2)
  /* 110A04 801921A4 8E6A0020 */        lw $t2, 0x20($s3)
  /* 110A08 801921A8 AE4A0040 */        sw $t2, 0x40($s2)
  /* 110A0C 801921AC 8E690024 */        lw $t1, 0x24($s3)
  /* 110A10 801921B0 AE490044 */        sw $t1, 0x44($s2)
  /* 110A14 801921B4 8E6A0028 */        lw $t2, 0x28($s3)
  /* 110A18 801921B8 1280000F */      beqz $s4, .L801921F8
  /* 110A1C 801921BC AE4A0048 */        sw $t2, 0x48($s2)
  /* 110A20 801921C0 8E820000 */        lw $v0, ($s4)
  /* 110A24 801921C4 5040000C */      beql $v0, $zero, .L801921F8
  /* 110A28 801921C8 26940004 */     addiu $s4, $s4, 4
  /* 110A2C 801921CC 8C510000 */        lw $s1, ($v0)
  /* 110A30 801921D0 00408025 */        or $s0, $v0, $zero
  /* 110A34 801921D4 12200007 */      beqz $s1, .L801921F4
  /* 110A38 801921D8 02402025 */        or $a0, $s2, $zero
  .L801921DC:
  /* 110A3C 801921DC 0C002437 */       jal func_800090DC
  /* 110A40 801921E0 02202825 */        or $a1, $s1, $zero
  /* 110A44 801921E4 8E110004 */        lw $s1, 4($s0)
  /* 110A48 801921E8 26100004 */     addiu $s0, $s0, 4
  /* 110A4C 801921EC 5620FFFB */      bnel $s1, $zero, .L801921DC
  /* 110A50 801921F0 02402025 */        or $a0, $s2, $zero
  .L801921F4:
  /* 110A54 801921F4 26940004 */     addiu $s4, $s4, 4
  .L801921F8:
  /* 110A58 801921F8 8E62002C */        lw $v0, 0x2c($s3)
  /* 110A5C 801921FC 2673002C */     addiu $s3, $s3, 0x2c
  /* 110A60 80192200 30420FFF */      andi $v0, $v0, 0xfff
  /* 110A64 80192204 16C2FFBC */       bne $s6, $v0, .L801920F8
  /* 110A68 80192208 00000000 */       nop 
  /* 110A6C 8019220C 8FBF003C */        lw $ra, 0x3c($sp)
  .L80192210:
  /* 110A70 80192210 8FB00018 */        lw $s0, 0x18($sp)
  /* 110A74 80192214 8FB1001C */        lw $s1, 0x1c($sp)
  /* 110A78 80192218 8FB20020 */        lw $s2, 0x20($sp)
  /* 110A7C 8019221C 8FB30024 */        lw $s3, 0x24($sp)
  /* 110A80 80192220 8FB40028 */        lw $s4, 0x28($sp)
  /* 110A84 80192224 8FB5002C */        lw $s5, 0x2c($sp)
  /* 110A88 80192228 8FB60030 */        lw $s6, 0x30($sp)
  /* 110A8C 8019222C 8FB70034 */        lw $s7, 0x34($sp)
  /* 110A90 80192230 8FBE0038 */        lw $fp, 0x38($sp)
  /* 110A94 80192234 03E00008 */        jr $ra
  /* 110A98 80192238 27BD00A8 */     addiu $sp, $sp, 0xa8

glabel func_ovl65_8019223C
  /* 110A9C 8019223C 3C038019 */       lui $v1, %hi(D_ovl65_801938E8)
  /* 110AA0 80192240 8C6338E8 */        lw $v1, %lo(D_ovl65_801938E8)($v1)
  /* 110AA4 80192244 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 110AA8 80192248 AFBF0014 */        sw $ra, 0x14($sp)
  /* 110AAC 8019224C 8C6E0020 */        lw $t6, 0x20($v1)
  /* 110AB0 80192250 24010001 */     addiu $at, $zero, 1
  /* 110AB4 80192254 8C820074 */        lw $v0, 0x74($a0)
  /* 110AB8 80192258 15C10010 */       bne $t6, $at, .L8019229C
  /* 110ABC 8019225C 00055080 */       sll $t2, $a1, 2
  /* 110AC0 80192260 AFA2001C */        sw $v0, 0x1c($sp)
  /* 110AC4 80192264 0C0646D1 */       jal func_ovl65_80191B44
  /* 110AC8 80192268 AFA50024 */        sw $a1, 0x24($sp)
  /* 110ACC 8019226C 3C0F8019 */       lui $t7, %hi(D_ovl65_801938E8)
  /* 110AD0 80192270 8FA50024 */        lw $a1, 0x24($sp)
  /* 110AD4 80192274 8DEF38E8 */        lw $t7, %lo(D_ovl65_801938E8)($t7)
  /* 110AD8 80192278 8FA2001C */        lw $v0, 0x1c($sp)
  /* 110ADC 8019227C 0005C880 */       sll $t9, $a1, 2
  /* 110AE0 80192280 8DF8002C */        lw $t8, 0x2c($t7)
  /* 110AE4 80192284 0325C823 */      subu $t9, $t9, $a1
  /* 110AE8 80192288 0019C8C0 */       sll $t9, $t9, 3
  /* 110AEC 8019228C 03194021 */      addu $t0, $t8, $t9
  /* 110AF0 80192290 C5040014 */      lwc1 $f4, 0x14($t0)
  /* 110AF4 80192294 1000000B */         b .L801922C4
  /* 110AF8 80192298 E4440024 */      swc1 $f4, 0x24($v0)
  .L8019229C:
  /* 110AFC 8019229C 8C69002C */        lw $t1, 0x2c($v1)
  /* 110B00 801922A0 01455023 */      subu $t2, $t2, $a1
  /* 110B04 801922A4 000A50C0 */       sll $t2, $t2, 3
  /* 110B08 801922A8 012A5821 */      addu $t3, $t1, $t2
  /* 110B0C 801922AC 8D6D000C */        lw $t5, 0xc($t3)
  /* 110B10 801922B0 AC4D001C */        sw $t5, 0x1c($v0)
  /* 110B14 801922B4 8D6C0010 */        lw $t4, 0x10($t3)
  /* 110B18 801922B8 AC4C0020 */        sw $t4, 0x20($v0)
  /* 110B1C 801922BC 8D6D0014 */        lw $t5, 0x14($t3)
  /* 110B20 801922C0 AC4D0024 */        sw $t5, 0x24($v0)
  .L801922C4:
  /* 110B24 801922C4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 110B28 801922C8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 110B2C 801922CC 03E00008 */        jr $ra
  /* 110B30 801922D0 00000000 */       nop 

glabel func_ovl65_801922D4
  /* 110B34 801922D4 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 110B38 801922D8 3C0E8019 */       lui $t6, %hi(D_ovl65_801938E8)
  /* 110B3C 801922DC 8DCE38E8 */        lw $t6, %lo(D_ovl65_801938E8)($t6)
  /* 110B40 801922E0 AFBF0024 */        sw $ra, 0x24($sp)
  /* 110B44 801922E4 AFB00020 */        sw $s0, 0x20($sp)
  /* 110B48 801922E8 AFA40058 */        sw $a0, 0x58($sp)
  /* 110B4C 801922EC AFA5005C */        sw $a1, 0x5c($sp)
  /* 110B50 801922F0 AFA60060 */        sw $a2, 0x60($sp)
  /* 110B54 801922F4 8DCF0010 */        lw $t7, 0x10($t6)
  /* 110B58 801922F8 AFA00040 */        sw $zero, 0x40($sp)
  /* 110B5C 801922FC 2406000D */     addiu $a2, $zero, 0xd
  /* 110B60 80192300 00002825 */        or $a1, $zero, $zero
  /* 110B64 80192304 240403FF */     addiu $a0, $zero, 0x3ff
  /* 110B68 80192308 3C078000 */       lui $a3, 0x8000
  /* 110B6C 8019230C 0C00265A */       jal omMakeGObjCommon
  /* 110B70 80192310 AFAF003C */        sw $t7, 0x3c($sp)
  /* 110B74 80192314 14400003 */      bnez $v0, .L80192324
  /* 110B78 80192318 00408025 */        or $s0, $v0, $zero
  /* 110B7C 8019231C 1000006B */         b .L801924CC
  /* 110B80 80192320 00001025 */        or $v0, $zero, $zero
  .L80192324:
  /* 110B84 80192324 3C0A8019 */       lui $t2, %hi(D_ovl65_801938D8)
  /* 110B88 80192328 254A38D8 */     addiu $t2, $t2, %lo(D_ovl65_801938D8)
  /* 110B8C 8019232C 8D58000C */        lw $t8, 0xc($t2) # D_ovl65_801938D8 + 12
  /* 110B90 80192330 8D420010 */        lw $v0, 0x10($t2) # D_ovl65_801938D8 + 16
  /* 110B94 80192334 8FA90058 */        lw $t1, 0x58($sp)
  /* 110B98 80192338 AFB8004C */        sw $t8, 0x4c($sp)
  /* 110B9C 8019233C 8C590024 */        lw $t9, 0x24($v0)
  /* 110BA0 80192340 00094900 */       sll $t1, $t1, 4
  /* 110BA4 80192344 8FAD0060 */        lw $t5, 0x60($sp)
  /* 110BA8 80192348 03291821 */      addu $v1, $t9, $t1
  /* 110BAC 8019234C 8C6B000C */        lw $t3, 0xc($v1)
  /* 110BB0 80192350 000D7080 */       sll $t6, $t5, 2
  /* 110BB4 80192354 01CD7023 */      subu $t6, $t6, $t5
  /* 110BB8 80192358 AFAB0048 */        sw $t3, 0x48($sp)
  /* 110BBC 8019235C 8C4C002C */        lw $t4, 0x2c($v0)
  /* 110BC0 80192360 000E70C0 */       sll $t6, $t6, 3
  /* 110BC4 80192364 8C650004 */        lw $a1, 4($v1)
  /* 110BC8 80192368 018E4021 */      addu $t0, $t4, $t6
  /* 110BCC 8019236C 8D0F0008 */        lw $t7, 8($t0)
  /* 110BD0 80192370 91060004 */       lbu $a2, 4($t0)
  /* 110BD4 80192374 AFA90030 */        sw $t1, 0x30($sp)
  /* 110BD8 80192378 02002025 */        or $a0, $s0, $zero
  /* 110BDC 8019237C 3C078000 */       lui $a3, 0x8000
  /* 110BE0 80192380 0C00277D */       jal func_80009DF4
  /* 110BE4 80192384 AFAF0010 */        sw $t7, 0x10($sp)
  /* 110BE8 80192388 8FA20048 */        lw $v0, 0x48($sp)
  /* 110BEC 8019238C 3C198019 */       lui $t9, %hi(D_ovl65_801938E8)
  /* 110BF0 80192390 00003025 */        or $a2, $zero, $zero
  /* 110BF4 80192394 10400003 */      beqz $v0, .L801923A4
  /* 110BF8 80192398 8FB8004C */        lw $t8, 0x4c($sp)
  /* 110BFC 8019239C 10000001 */         b .L801923A4
  /* 110C00 801923A0 03023021 */      addu $a2, $t8, $v0
  .L801923A4:
  /* 110C04 801923A4 8F3938E8 */        lw $t9, %lo(D_ovl65_801938E8)($t9)
  /* 110C08 801923A8 8FAD0030 */        lw $t5, 0x30($sp)
  /* 110C0C 801923AC 8FAF004C */        lw $t7, 0x4c($sp)
  /* 110C10 801923B0 8F2B0024 */        lw $t3, 0x24($t9)
  /* 110C14 801923B4 02002025 */        or $a0, $s0, $zero
  /* 110C18 801923B8 2407001C */     addiu $a3, $zero, 0x1c
  /* 110C1C 801923BC 016D6021 */      addu $t4, $t3, $t5
  /* 110C20 801923C0 8D8E0008 */        lw $t6, 8($t4)
  /* 110C24 801923C4 0C06481E */       jal func_ovl65_80192078
  /* 110C28 801923C8 01CF2821 */      addu $a1, $t6, $t7
  /* 110C2C 801923CC 8FA2005C */        lw $v0, 0x5c($sp)
  /* 110C30 801923D0 3C188019 */       lui $t8, %hi(D_ovl65_801938E8)
  /* 110C34 801923D4 8F1838E8 */        lw $t8, %lo(D_ovl65_801938E8)($t8)
  /* 110C38 801923D8 00400821 */      addu $at, $v0, $zero
  /* 110C3C 801923DC 00021080 */       sll $v0, $v0, 2
  /* 110C40 801923E0 8F190028 */        lw $t9, 0x28($t8)
  /* 110C44 801923E4 00411023 */      subu $v0, $v0, $at
  /* 110C48 801923E8 00021080 */       sll $v0, $v0, 2
  /* 110C4C 801923EC 03225821 */      addu $t3, $t9, $v0
  /* 110C50 801923F0 8D650008 */        lw $a1, 8($t3)
  /* 110C54 801923F4 AFA2002C */        sw $v0, 0x2c($sp)
  /* 110C58 801923F8 0C002ED3 */       jal func_8000BB4C
  /* 110C5C 801923FC 02002025 */        or $a0, $s0, $zero
  /* 110C60 80192400 3C0D8019 */       lui $t5, %hi(D_ovl65_801938E8)
  /* 110C64 80192404 8DAD38E8 */        lw $t5, %lo(D_ovl65_801938E8)($t5)
  /* 110C68 80192408 8FAE0030 */        lw $t6, 0x30($sp)
  /* 110C6C 8019240C 02002025 */        or $a0, $s0, $zero
  /* 110C70 80192410 8DAC0024 */        lw $t4, 0x24($t5)
  /* 110C74 80192414 24060001 */     addiu $a2, $zero, 1
  /* 110C78 80192418 24070001 */     addiu $a3, $zero, 1
  /* 110C7C 8019241C 018E7821 */      addu $t7, $t4, $t6
  /* 110C80 80192420 0C002062 */       jal omAddGObjCommonProc
  /* 110C84 80192424 8DE50000 */        lw $a1, ($t7)
  /* 110C88 80192428 8E180074 */        lw $t8, 0x74($s0)
  /* 110C8C 8019242C 3C198019 */       lui $t9, %hi(D_ovl65_801938E8)
  /* 110C90 80192430 8F3938E8 */        lw $t9, %lo(D_ovl65_801938E8)($t9)
  /* 110C94 80192434 AFB80050 */        sw $t8, 0x50($sp)
  /* 110C98 80192438 8FAD002C */        lw $t5, 0x2c($sp)
  /* 110C9C 8019243C 8F2B0028 */        lw $t3, 0x28($t9)
  /* 110CA0 80192440 8FAC0048 */        lw $t4, 0x48($sp)
  /* 110CA4 80192444 24070000 */     addiu $a3, $zero, 0
  /* 110CA8 80192448 016D1821 */      addu $v1, $t3, $t5
  /* 110CAC 8019244C 11800003 */      beqz $t4, .L8019245C
  /* 110CB0 80192450 8C640000 */        lw $a0, ($v1)
  /* 110CB4 80192454 8C620004 */        lw $v0, 4($v1)
  /* 110CB8 80192458 AFA20040 */        sw $v0, 0x40($sp)
  .L8019245C:
  /* 110CBC 8019245C 14800003 */      bnez $a0, .L8019246C
  /* 110CC0 80192460 8FA20040 */        lw $v0, 0x40($sp)
  /* 110CC4 80192464 1040000F */      beqz $v0, .L801924A4
  /* 110CC8 80192468 00000000 */       nop 
  .L8019246C:
  /* 110CCC 8019246C 10800004 */      beqz $a0, .L80192480
  /* 110CD0 80192470 00002825 */        or $a1, $zero, $zero
  /* 110CD4 80192474 8FAE004C */        lw $t6, 0x4c($sp)
  /* 110CD8 80192478 10000001 */         b .L80192480
  /* 110CDC 8019247C 01C42821 */      addu $a1, $t6, $a0
  .L80192480:
  /* 110CE0 80192480 10400004 */      beqz $v0, .L80192494
  /* 110CE4 80192484 00003025 */        or $a2, $zero, $zero
  /* 110CE8 80192488 8FAF004C */        lw $t7, 0x4c($sp)
  /* 110CEC 8019248C 10000001 */         b .L80192494
  /* 110CF0 80192490 01E23021 */      addu $a2, $t7, $v0
  .L80192494:
  /* 110CF4 80192494 0C03222B */       jal func_ovl0_800C88AC
  /* 110CF8 80192498 8FA40050 */        lw $a0, 0x50($sp)
  /* 110CFC 8019249C 0C0037CD */       jal func_8000DF34
  /* 110D00 801924A0 02002025 */        or $a0, $s0, $zero
  .L801924A4:
  /* 110D04 801924A4 0C006265 */       jal lbRandom_GetIntRange
  /* 110D08 801924A8 24040007 */     addiu $a0, $zero, 7
  /* 110D0C 801924AC 8E180074 */        lw $t8, 0x74($s0)
  /* 110D10 801924B0 8F190010 */        lw $t9, 0x10($t8)
  /* 110D14 801924B4 AF220084 */        sw $v0, 0x84($t9)
  /* 110D18 801924B8 8E0D0074 */        lw $t5, 0x74($s0)
  /* 110D1C 801924BC 8FAB003C */        lw $t3, 0x3c($sp)
  /* 110D20 801924C0 02001025 */        or $v0, $s0, $zero
  /* 110D24 801924C4 ADAB0084 */        sw $t3, 0x84($t5)
  /* 110D28 801924C8 AE000084 */        sw $zero, 0x84($s0)
  .L801924CC:
  /* 110D2C 801924CC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 110D30 801924D0 8FB00020 */        lw $s0, 0x20($sp)
  /* 110D34 801924D4 27BD0058 */     addiu $sp, $sp, 0x58
  /* 110D38 801924D8 03E00008 */        jr $ra
  /* 110D3C 801924DC 00000000 */       nop 

glabel func_ovl65_801924E0
  /* 110D40 801924E0 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 110D44 801924E4 AFB5002C */        sw $s5, 0x2c($sp)
  /* 110D48 801924E8 3C158019 */       lui $s5, %hi(D_ovl65_801938D8)
  /* 110D4C 801924EC 26B538D8 */     addiu $s5, $s5, %lo(D_ovl65_801938D8)
  /* 110D50 801924F0 8EA20010 */        lw $v0, 0x10($s5) # D_ovl65_801938D8 + 16
  /* 110D54 801924F4 AFBF0034 */        sw $ra, 0x34($sp)
  /* 110D58 801924F8 AFB60030 */        sw $s6, 0x30($sp)
  /* 110D5C 801924FC AFB40028 */        sw $s4, 0x28($sp)
  /* 110D60 80192500 AFB30024 */        sw $s3, 0x24($sp)
  /* 110D64 80192504 AFB20020 */        sw $s2, 0x20($sp)
  /* 110D68 80192508 AFB1001C */        sw $s1, 0x1c($sp)
  /* 110D6C 8019250C AFB00018 */        sw $s0, 0x18($sp)
  /* 110D70 80192510 8C4E0000 */        lw $t6, ($v0)
  /* 110D74 80192514 00008025 */        or $s0, $zero, $zero
  /* 110D78 80192518 00008825 */        or $s1, $zero, $zero
  /* 110D7C 8019251C 19C0002F */      blez $t6, .L801925DC
  /* 110D80 80192520 00009825 */        or $s3, $zero, $zero
  /* 110D84 80192524 00009025 */        or $s2, $zero, $zero
  /* 110D88 80192528 24160001 */     addiu $s6, $zero, 1
  /* 110D8C 8019252C 8C4F0020 */        lw $t7, 0x20($v0)
  .L80192530:
  /* 110D90 80192530 56CF0013 */      bnel $s6, $t7, .L80192580
  /* 110D94 80192534 8C4B002C */        lw $t3, 0x2c($v0)
  /* 110D98 80192538 0C006265 */       jal lbRandom_GetIntRange
  /* 110D9C 8019253C 8C440004 */        lw $a0, 4($v0)
  /* 110DA0 80192540 8EB80010 */        lw $t8, 0x10($s5) # D_ovl65_801938D8 + 16
  /* 110DA4 80192544 0040A025 */        or $s4, $v0, $zero
  /* 110DA8 80192548 0C006265 */       jal lbRandom_GetIntRange
  /* 110DAC 8019254C 8F040008 */        lw $a0, 8($t8)
  /* 110DB0 80192550 8EB90010 */        lw $t9, 0x10($s5) # D_ovl65_801938D8 + 16
  /* 110DB4 80192554 00402825 */        or $a1, $v0, $zero
  /* 110DB8 80192558 8F28002C */        lw $t0, 0x2c($t9)
  /* 110DBC 8019255C 01124821 */      addu $t1, $t0, $s2
  /* 110DC0 80192560 8D2A0000 */        lw $t2, ($t1)
  /* 110DC4 80192564 562A0010 */      bnel $s1, $t2, .L801925A8
  /* 110DC8 80192568 02802025 */        or $a0, $s4, $zero
  /* 110DCC 8019256C 26100001 */     addiu $s0, $s0, 1
  /* 110DD0 80192570 26520018 */     addiu $s2, $s2, 0x18
  /* 110DD4 80192574 1000000B */         b .L801925A4
  /* 110DD8 80192578 00008825 */        or $s1, $zero, $zero
  /* 110DDC 8019257C 8C4B002C */        lw $t3, 0x2c($v0)
  .L80192580:
  /* 110DE0 80192580 02602825 */        or $a1, $s3, $zero
  /* 110DE4 80192584 0260A025 */        or $s4, $s3, $zero
  /* 110DE8 80192588 01726021 */      addu $t4, $t3, $s2
  /* 110DEC 8019258C 8D8D0000 */        lw $t5, ($t4)
  /* 110DF0 80192590 562D0005 */      bnel $s1, $t5, .L801925A8
  /* 110DF4 80192594 02802025 */        or $a0, $s4, $zero
  /* 110DF8 80192598 26100001 */     addiu $s0, $s0, 1
  /* 110DFC 8019259C 26520018 */     addiu $s2, $s2, 0x18
  /* 110E00 801925A0 00008825 */        or $s1, $zero, $zero
  .L801925A4:
  /* 110E04 801925A4 02802025 */        or $a0, $s4, $zero
  .L801925A8:
  /* 110E08 801925A8 0C0648B5 */       jal func_ovl65_801922D4
  /* 110E0C 801925AC 02003025 */        or $a2, $s0, $zero
  /* 110E10 801925B0 10400003 */      beqz $v0, .L801925C0
  /* 110E14 801925B4 00402025 */        or $a0, $v0, $zero
  /* 110E18 801925B8 0C06488F */       jal func_ovl65_8019223C
  /* 110E1C 801925BC 02002825 */        or $a1, $s0, $zero
  .L801925C0:
  /* 110E20 801925C0 8EA20010 */        lw $v0, 0x10($s5) # D_ovl65_801938D8 + 16
  /* 110E24 801925C4 26730001 */     addiu $s3, $s3, 1
  /* 110E28 801925C8 26310001 */     addiu $s1, $s1, 1
  /* 110E2C 801925CC 8C4E0000 */        lw $t6, ($v0)
  /* 110E30 801925D0 026E082A */       slt $at, $s3, $t6
  /* 110E34 801925D4 5420FFD6 */      bnel $at, $zero, .L80192530
  /* 110E38 801925D8 8C4F0020 */        lw $t7, 0x20($v0)
  .L801925DC:
  /* 110E3C 801925DC 8EAF0004 */        lw $t7, 4($s5) # D_ovl65_801938D8 + 4
  /* 110E40 801925E0 24160001 */     addiu $s6, $zero, 1
  /* 110E44 801925E4 AEB60000 */        sw $s6, ($s5) # D_ovl65_801938D8 + 0
  /* 110E48 801925E8 25F80001 */     addiu $t8, $t7, 1
  /* 110E4C 801925EC AEB80004 */        sw $t8, 4($s5) # D_ovl65_801938D8 + 4
  /* 110E50 801925F0 8C590018 */        lw $t9, 0x18($v0)
  /* 110E54 801925F4 8FBF0034 */        lw $ra, 0x34($sp)
  /* 110E58 801925F8 8FB60030 */        lw $s6, 0x30($sp)
  /* 110E5C 801925FC AEB90008 */        sw $t9, 8($s5) # D_ovl65_801938D8 + 8
  /* 110E60 80192600 8FB5002C */        lw $s5, 0x2c($sp)
  /* 110E64 80192604 8FB00018 */        lw $s0, 0x18($sp)
  /* 110E68 80192608 8FB1001C */        lw $s1, 0x1c($sp)
  /* 110E6C 8019260C 8FB20020 */        lw $s2, 0x20($sp)
  /* 110E70 80192610 8FB30024 */        lw $s3, 0x24($sp)
  /* 110E74 80192614 8FB40028 */        lw $s4, 0x28($sp)
  /* 110E78 80192618 03E00008 */        jr $ra
  /* 110E7C 8019261C 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl65_80192620
  /* 110E80 80192620 3C028019 */       lui $v0, %hi(D_ovl65_801938D8)
  /* 110E84 80192624 244238D8 */     addiu $v0, $v0, %lo(D_ovl65_801938D8)
  /* 110E88 80192628 8C4E0000 */        lw $t6, ($v0) # D_ovl65_801938D8 + 0
  /* 110E8C 8019262C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 110E90 80192630 AFBF0014 */        sw $ra, 0x14($sp)
  /* 110E94 80192634 15C00010 */      bnez $t6, .L80192678
  /* 110E98 80192638 AFA40018 */        sw $a0, 0x18($sp)
  /* 110E9C 8019263C 0C0646A5 */       jal func_ovl65_80191A94
  /* 110EA0 80192640 00000000 */       nop 
  /* 110EA4 80192644 3C028019 */       lui $v0, %hi(D_ovl65_801938D8)
  /* 110EA8 80192648 244238D8 */     addiu $v0, $v0, %lo(D_ovl65_801938D8)
  /* 110EAC 8019264C 8C4F0004 */        lw $t7, 4($v0) # D_ovl65_801938D8 + 4
  /* 110EB0 80192650 3C198019 */       lui $t9, %hi(D_ovl65_80192D4C)
  /* 110EB4 80192654 27392D4C */     addiu $t9, $t9, %lo(D_ovl65_80192D4C)
  /* 110EB8 80192658 000FC080 */       sll $t8, $t7, 2
  /* 110EBC 8019265C 030FC023 */      subu $t8, $t8, $t7
  /* 110EC0 80192660 0018C100 */       sll $t8, $t8, 4
  /* 110EC4 80192664 03194021 */      addu $t0, $t8, $t9
  /* 110EC8 80192668 0C064938 */       jal func_ovl65_801924E0
  /* 110ECC 8019266C AC480010 */        sw $t0, 0x10($v0) # D_ovl65_801938D8 + 16
  /* 110ED0 80192670 3C028019 */       lui $v0, %hi(D_ovl65_801938D8)
  /* 110ED4 80192674 244238D8 */     addiu $v0, $v0, %lo(D_ovl65_801938D8)
  .L80192678:
  /* 110ED8 80192678 8C430008 */        lw $v1, 8($v0) # D_ovl65_801938D8 + 8
  /* 110EDC 8019267C 2404FFFF */     addiu $a0, $zero, -1
  /* 110EE0 80192680 10830002 */       beq $a0, $v1, .L8019268C
  /* 110EE4 80192684 2469FFFF */     addiu $t1, $v1, -1
  /* 110EE8 80192688 AC490008 */        sw $t1, 8($v0) # D_ovl65_801938D8 + 8
  .L8019268C:
  /* 110EEC 8019268C 8C4A0010 */        lw $t2, 0x10($v0) # D_ovl65_801938D8 + 16
  /* 110EF0 80192690 8D43001C */        lw $v1, 0x1c($t2)
  /* 110EF4 80192694 50830011 */      beql $a0, $v1, .L801926DC
  /* 110EF8 80192698 8C580008 */        lw $t8, 8($v0) # D_ovl65_801938D8 + 8
  /* 110EFC 8019269C 8C4C0014 */        lw $t4, 0x14($v0) # D_ovl65_801938D8 + 20
  /* 110F00 801926A0 3C0B800A */       lui $t3, %hi(gpBattleState)
  /* 110F04 801926A4 8D6B50E8 */        lw $t3, %lo(gpBattleState)($t3)
  /* 110F08 801926A8 000C68C0 */       sll $t5, $t4, 3
  /* 110F0C 801926AC 01AC6823 */      subu $t5, $t5, $t4
  /* 110F10 801926B0 000D6880 */       sll $t5, $t5, 2
  /* 110F14 801926B4 01AC6821 */      addu $t5, $t5, $t4
  /* 110F18 801926B8 000D6880 */       sll $t5, $t5, 2
  /* 110F1C 801926BC 016D7021 */      addu $t6, $t3, $t5
  /* 110F20 801926C0 8DCF006C */        lw $t7, 0x6c($t6)
  /* 110F24 801926C4 006F082A */       slt $at, $v1, $t7
  /* 110F28 801926C8 50200008 */      beql $at, $zero, .L801926EC
  /* 110F2C 801926CC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 110F30 801926D0 10000005 */         b .L801926E8
  /* 110F34 801926D4 AC400000 */        sw $zero, ($v0) # D_ovl65_801938D8 + 0
  /* 110F38 801926D8 8C580008 */        lw $t8, 8($v0) # D_ovl65_801938D8 + 8
  .L801926DC:
  /* 110F3C 801926DC 57000003 */      bnel $t8, $zero, .L801926EC
  /* 110F40 801926E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 110F44 801926E4 AC400000 */        sw $zero, ($v0) # D_ovl65_801938D8 + 0
  .L801926E8:
  /* 110F48 801926E8 8FBF0014 */        lw $ra, 0x14($sp)
  .L801926EC:
  /* 110F4C 801926EC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 110F50 801926F0 03E00008 */        jr $ra
  /* 110F54 801926F4 00000000 */       nop 

glabel func_ovl65_801926F8
  /* 110F58 801926F8 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 110F5C 801926FC 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 110F60 80192700 2403000C */     addiu $v1, $zero, 0xc
  /* 110F64 80192704 24180001 */     addiu $t8, $zero, 1
  /* 110F68 80192708 904E0023 */       lbu $t6, 0x23($v0)
  /* 110F6C 8019270C 24080002 */     addiu $t0, $zero, 2
  /* 110F70 80192710 240A0003 */     addiu $t2, $zero, 3
  /* 110F74 80192714 146E0002 */       bne $v1, $t6, .L80192720
  /* 110F78 80192718 3C018019 */       lui $at, %hi(D_ovl65_801938EC)
  /* 110F7C 8019271C AC2038EC */        sw $zero, %lo(D_ovl65_801938EC)($at)
  .L80192720:
  /* 110F80 80192720 904F0097 */       lbu $t7, 0x97($v0)
  /* 110F84 80192724 3C018019 */       lui $at, %hi(D_ovl65_801938EC)
  /* 110F88 80192728 546F0003 */      bnel $v1, $t7, .L80192738
  /* 110F8C 8019272C 9059010B */       lbu $t9, 0x10b($v0)
  /* 110F90 80192730 AC3838EC */        sw $t8, %lo(D_ovl65_801938EC)($at)
  /* 110F94 80192734 9059010B */       lbu $t9, 0x10b($v0)
  .L80192738:
  /* 110F98 80192738 3C018019 */       lui $at, %hi(D_ovl65_801938EC)
  /* 110F9C 8019273C 54790003 */      bnel $v1, $t9, .L8019274C
  /* 110FA0 80192740 9049017F */       lbu $t1, 0x17f($v0)
  /* 110FA4 80192744 AC2838EC */        sw $t0, %lo(D_ovl65_801938EC)($at)
  /* 110FA8 80192748 9049017F */       lbu $t1, 0x17f($v0)
  .L8019274C:
  /* 110FAC 8019274C 3C018019 */       lui $at, %hi(D_ovl65_801938EC)
  /* 110FB0 80192750 14690002 */       bne $v1, $t1, .L8019275C
  /* 110FB4 80192754 00000000 */       nop 
  /* 110FB8 80192758 AC2A38EC */        sw $t2, %lo(D_ovl65_801938EC)($at)
  .L8019275C:
  /* 110FBC 8019275C 03E00008 */        jr $ra
  /* 110FC0 80192760 00000000 */       nop 

glabel func_ovl65_80192764
  /* 110FC4 80192764 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 110FC8 80192768 AFBF0014 */        sw $ra, 0x14($sp)
  /* 110FCC 8019276C 240403F0 */     addiu $a0, $zero, 0x3f0
  /* 110FD0 80192770 00002825 */        or $a1, $zero, $zero
  /* 110FD4 80192774 2406000D */     addiu $a2, $zero, 0xd
  /* 110FD8 80192778 0C00265A */       jal omMakeGObjCommon
  /* 110FDC 8019277C 3C078000 */       lui $a3, 0x8000
  /* 110FE0 80192780 3C018019 */       lui $at, %hi(D_ovl65_801938D0)
  /* 110FE4 80192784 AC2238D0 */        sw $v0, %lo(D_ovl65_801938D0)($at)
  /* 110FE8 80192788 10400019 */      beqz $v0, .L801927F0
  /* 110FEC 8019278C 00402025 */        or $a0, $v0, $zero
  /* 110FF0 80192790 3C058019 */       lui $a1, %hi(func_ovl65_80192620)
  /* 110FF4 80192794 24A52620 */     addiu $a1, $a1, %lo(func_ovl65_80192620)
  /* 110FF8 80192798 24060001 */     addiu $a2, $zero, 1
  /* 110FFC 8019279C 0C002062 */       jal omAddGObjCommonProc
  /* 111000 801927A0 24070003 */     addiu $a3, $zero, 3
  /* 111004 801927A4 0C064448 */       jal func_ovl65_80191120
  /* 111008 801927A8 00000000 */       nop 
  /* 11100C 801927AC 0C0649BE */       jal func_ovl65_801926F8
  /* 111010 801927B0 00000000 */       nop 
  /* 111014 801927B4 3C028019 */       lui $v0, %hi(D_ovl65_801938D8)
  /* 111018 801927B8 244238D8 */     addiu $v0, $v0, %lo(D_ovl65_801938D8)
  /* 11101C 801927BC AC400000 */        sw $zero, ($v0) # D_ovl65_801938D8 + 0
  /* 111020 801927C0 AC400004 */        sw $zero, 4($v0) # D_ovl65_801938D8 + 4
  /* 111024 801927C4 3C0E8013 */       lui $t6, %hi(gpGroundInfo)
  /* 111028 801927C8 8DCE1300 */        lw $t6, %lo(gpGroundInfo)($t6)
  /* 11102C 801927CC 3C180000 */       lui $t8, %hi(D_NF_00004D48)
  /* 111030 801927D0 44802000 */      mtc1 $zero, $f4
  /* 111034 801927D4 8DCF0010 */        lw $t7, 0x10($t6)
  /* 111038 801927D8 27184D48 */     addiu $t8, $t8, %lo(D_NF_00004D48)
  /* 11103C 801927DC AC400008 */        sw $zero, 8($v0) # D_ovl65_801938D8 + 8
  /* 111040 801927E0 01F8C823 */      subu $t9, $t7, $t8
  /* 111044 801927E4 AC59000C */        sw $t9, 0xc($v0) # D_ovl65_801938D8 + 12
  /* 111048 801927E8 3C018019 */       lui $at, %hi(D_ovl65_801938F0)
  /* 11104C 801927EC E42438F0 */      swc1 $f4, %lo(D_ovl65_801938F0)($at)
  .L801927F0:
  /* 111050 801927F0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111054 801927F4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 111058 801927F8 03E00008 */        jr $ra
  /* 11105C 801927FC 00000000 */       nop 
#
#glabel D_ovl65_80192800   # Routine parsed as data
#  /* 111060 80192800 00020503 */       sra $zero, $v0, 0x14
#  /* 111064 80192804 06010900 */      bgez $s0, 0x80194c08 # branch target not found
#glabel D_ovl65_80192808   # Routine parsed as data
#  /* 111068 80192808 C1700000 */        ll $s0, ($t3)
#  /* 11106C 8019280C 00000000 */       nop 
