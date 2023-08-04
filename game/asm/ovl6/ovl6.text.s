.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x8018D0C0 -> 0x8018EEC0

  /* 111800 8018D0C0 03E00008 */        jr $ra
  /* 111804 8018D0C4 00000000 */       nop 

  /* 111808 8018D0C8 03E00008 */        jr $ra
  /* 11180C 8018D0CC 00000000 */       nop 

glabel func_ovl6_8018D0D0
  /* 111810 8018D0D0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 111814 8018D0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111818 8018D0D8 0C045217 */       jal func_ovl2_8011485C
  /* 11181C 8018D0DC 00000000 */       nop 
  /* 111820 8018D0E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111824 8018D0E4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 111828 8018D0E8 03E00008 */        jr $ra
  /* 11182C 8018D0EC 00000000 */       nop 

glabel func_ovl6_8018D0F0
  /* 111830 8018D0F0 3C038019 */       lui $v1, %hi(D_ovl6_8018F1B0)
  /* 111834 8018D0F4 3C05800A */       lui $a1, %hi(gSceneData)
  /* 111838 8018D0F8 3C0E800A */       lui $t6, %hi(gDefaultBattleState)
  /* 11183C 8018D0FC 24A54AD0 */     addiu $a1, $a1, %lo(gSceneData)
  /* 111840 8018D100 2463F1B0 */     addiu $v1, $v1, %lo(D_ovl6_8018F1B0)
  /* 111844 8018D104 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 111848 8018D108 25CE3FC8 */     addiu $t6, $t6, %lo(gDefaultBattleState)
  /* 11184C 8018D10C 24C650E8 */     addiu $a2, $a2, %lo(gpBattleState)
  /* 111850 8018D110 24070002 */     addiu $a3, $zero, 2
  /* 111854 8018D114 24080034 */     addiu $t0, $zero, 0x34
  /* 111858 8018D118 A0A00012 */        sb $zero, 0x12($a1) # gSceneData + 18
  /* 11185C 8018D11C 25CA01EC */     addiu $t2, $t6, 0x1ec
  /* 111860 8018D120 0060C825 */        or $t9, $v1, $zero
  .L8018D124:
  /* 111864 8018D124 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 111868 8018D128 25CE000C */     addiu $t6, $t6, 0xc
  /* 11186C 8018D12C 2739000C */     addiu $t9, $t9, 0xc
  /* 111870 8018D130 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 111874 8018D134 8DCFFFF8 */        lw $t7, -8($t6) # gDefaultBattleState + -8
  /* 111878 8018D138 AF2FFFF8 */        sw $t7, -8($t9)
  /* 11187C 8018D13C 8DD8FFFC */        lw $t8, -4($t6) # gDefaultBattleState + -4
  /* 111880 8018D140 15CAFFF8 */       bne $t6, $t2, .L8018D124
  /* 111884 8018D144 AF38FFFC */        sw $t8, -4($t9)
  /* 111888 8018D148 8DD80000 */        lw $t8, ($t6) # gDefaultBattleState + 0
  /* 11188C 8018D14C 240C0005 */     addiu $t4, $zero, 5
  /* 111890 8018D150 00002025 */        or $a0, $zero, $zero
  /* 111894 8018D154 AF380000 */        sw $t8, ($t9)
  /* 111898 8018D158 906A001D */       lbu $t2, 0x1d($v1) # D_ovl6_8018F1B0 + 29
  /* 11189C 8018D15C 90AB0001 */       lbu $t3, 1($a1) # gSceneData + 1
  /* 1118A0 8018D160 24190001 */     addiu $t9, $zero, 1
  /* 1118A4 8018D164 314EFF7F */      andi $t6, $t2, 0xff7f
  /* 1118A8 8018D168 ACC30000 */        sw $v1, ($a2) # gpBattleState + 0
  /* 1118AC 8018D16C A0670000 */        sb $a3, ($v1) # D_ovl6_8018F1B0 + 0
  /* 1118B0 8018D170 A06C0003 */        sb $t4, 3($v1) # D_ovl6_8018F1B0 + 3
  /* 1118B4 8018D174 A06E001D */        sb $t6, 0x1d($v1) # D_ovl6_8018F1B0 + 29
  /* 1118B8 8018D178 A0790004 */        sb $t9, 4($v1) # D_ovl6_8018F1B0 + 4
  /* 1118BC 8018D17C 150B001C */       bne $t0, $t3, .L8018D1F0
  /* 1118C0 8018D180 A0600005 */        sb $zero, 5($v1) # D_ovl6_8018F1B0 + 5
  /* 1118C4 8018D184 90A20014 */       lbu $v0, 0x14($a1) # gSceneData + 20
  /* 1118C8 8018D188 240C0064 */     addiu $t4, $zero, 0x64
  /* 1118CC 8018D18C A06C0006 */        sb $t4, 6($v1) # D_ovl6_8018F1B0 + 6
  /* 1118D0 8018D190 90AA0017 */       lbu $t2, 0x17($a1) # gSceneData + 23
  /* 1118D4 8018D194 24010003 */     addiu $at, $zero, 3
  /* 1118D8 8018D198 5541000C */      bnel $t2, $at, .L8018D1CC
  /* 1118DC 8018D19C 90AB0016 */       lbu $t3, 0x16($a1) # gSceneData + 22
  /* 1118E0 8018D1A0 90AE0016 */       lbu $t6, 0x16($a1) # gSceneData + 22
  /* 1118E4 8018D1A4 24010064 */     addiu $at, $zero, 0x64
  /* 1118E8 8018D1A8 51C10004 */      beql $t6, $at, .L8018D1BC
  /* 1118EC 8018D1AC 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 1118F0 8018D1B0 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  /* 1118F4 8018D1B4 A3270006 */        sb $a3, 6($t9)
  /* 1118F8 8018D1B8 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  .L8018D1BC:
  /* 1118FC 8018D1BC 244F0011 */     addiu $t7, $v0, 0x11
  /* 111900 8018D1C0 1000001A */         b .L8018D22C
  /* 111904 8018D1C4 A30F0001 */        sb $t7, 1($t8)
  /* 111908 8018D1C8 90AB0016 */       lbu $t3, 0x16($a1) # gSceneData + 22
  .L8018D1CC:
  /* 11190C 8018D1CC 24010064 */     addiu $at, $zero, 0x64
  /* 111910 8018D1D0 51610004 */      beql $t3, $at, .L8018D1E4
  /* 111914 8018D1D4 8CCA0000 */        lw $t2, ($a2) # gpBattleState + 0
  /* 111918 8018D1D8 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 11191C 8018D1DC A1870006 */        sb $a3, 6($t4)
  /* 111920 8018D1E0 8CCA0000 */        lw $t2, ($a2) # gpBattleState + 0
  .L8018D1E4:
  /* 111924 8018D1E4 244D001D */     addiu $t5, $v0, 0x1d
  /* 111928 8018D1E8 10000010 */         b .L8018D22C
  /* 11192C 8018D1EC A14D0001 */        sb $t5, 1($t2)
  .L8018D1F0:
  /* 111930 8018D1F0 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  /* 111934 8018D1F4 90A20039 */       lbu $v0, 0x39($a1) # gSceneData + 57
  /* 111938 8018D1F8 240E0064 */     addiu $t6, $zero, 0x64
  /* 11193C 8018D1FC A32E0006 */        sb $t6, 6($t9)
  /* 111940 8018D200 90AF0001 */       lbu $t7, 1($a1) # gSceneData + 1
  /* 111944 8018D204 24010013 */     addiu $at, $zero, 0x13
  /* 111948 8018D208 55E10006 */      bnel $t7, $at, .L8018D224
  /* 11194C 8018D20C 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 111950 8018D210 8CCB0000 */        lw $t3, ($a2) # gpBattleState + 0
  /* 111954 8018D214 24580011 */     addiu $t8, $v0, 0x11
  /* 111958 8018D218 10000004 */         b .L8018D22C
  /* 11195C 8018D21C A1780001 */        sb $t8, 1($t3)
  /* 111960 8018D220 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  .L8018D224:
  /* 111964 8018D224 244C001D */     addiu $t4, $v0, 0x1d
  /* 111968 8018D228 A1AC0001 */        sb $t4, 1($t5)
  .L8018D22C:
  /* 11196C 8018D22C 00001825 */        or $v1, $zero, $zero
  /* 111970 8018D230 24090004 */     addiu $t1, $zero, 4
  .L8018D234:
  /* 111974 8018D234 90AA0013 */       lbu $t2, 0x13($a1) # gSceneData + 19
  /* 111978 8018D238 546A0018 */      bnel $v1, $t2, .L8018D29C
  /* 11197C 8018D23C 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 111980 8018D240 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 111984 8018D244 01C4C821 */      addu $t9, $t6, $a0
  /* 111988 8018D248 A3200022 */        sb $zero, 0x22($t9)
  /* 11198C 8018D24C 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 111990 8018D250 01E4C021 */      addu $t8, $t7, $a0
  /* 111994 8018D254 A3020023 */        sb $v0, 0x23($t8)
  /* 111998 8018D258 90AB0001 */       lbu $t3, 1($a1) # gSceneData + 1
  /* 11199C 8018D25C 550B0007 */      bnel $t0, $t3, .L8018D27C
  /* 1119A0 8018D260 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  /* 1119A4 8018D264 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 1119A8 8018D268 90AC0015 */       lbu $t4, 0x15($a1) # gSceneData + 21
  /* 1119AC 8018D26C 01A45021 */      addu $t2, $t5, $a0
  /* 1119B0 8018D270 10000005 */         b .L8018D288
  /* 1119B4 8018D274 A14C0026 */        sb $t4, 0x26($t2)
  /* 1119B8 8018D278 8CD90000 */        lw $t9, ($a2) # gpBattleState + 0
  .L8018D27C:
  /* 1119BC 8018D27C 90AE003A */       lbu $t6, 0x3a($a1) # gSceneData + 58
  /* 1119C0 8018D280 03247821 */      addu $t7, $t9, $a0
  /* 1119C4 8018D284 A1EE0026 */        sb $t6, 0x26($t7)
  .L8018D288:
  /* 1119C8 8018D288 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 1119CC 8018D28C 03045821 */      addu $t3, $t8, $a0
  /* 1119D0 8018D290 10000004 */         b .L8018D2A4
  /* 1119D4 8018D294 A1630028 */        sb $v1, 0x28($t3)
  /* 1119D8 8018D298 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  .L8018D29C:
  /* 1119DC 8018D29C 01A46021 */      addu $t4, $t5, $a0
  /* 1119E0 8018D2A0 A1870022 */        sb $a3, 0x22($t4)
  .L8018D2A4:
  /* 1119E4 8018D2A4 90B90013 */       lbu $t9, 0x13($a1) # gSceneData + 19
  /* 1119E8 8018D2A8 246A0001 */     addiu $t2, $v1, 1
  /* 1119EC 8018D2AC 55590019 */      bnel $t2, $t9, .L8018D314
  /* 1119F0 8018D2B0 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  /* 1119F4 8018D2B4 8CCE0000 */        lw $t6, ($a2) # gpBattleState + 0
  /* 1119F8 8018D2B8 01C47821 */      addu $t7, $t6, $a0
  /* 1119FC 8018D2BC A1E00096 */        sb $zero, 0x96($t7)
  /* 111A00 8018D2C0 8CD80000 */        lw $t8, ($a2) # gpBattleState + 0
  /* 111A04 8018D2C4 03045821 */      addu $t3, $t8, $a0
  /* 111A08 8018D2C8 A1620097 */        sb $v0, 0x97($t3)
  /* 111A0C 8018D2CC 90AD0001 */       lbu $t5, 1($a1) # gSceneData + 1
  /* 111A10 8018D2D0 550D0007 */      bnel $t0, $t5, .L8018D2F0
  /* 111A14 8018D2D4 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  /* 111A18 8018D2D8 8CCA0000 */        lw $t2, ($a2) # gpBattleState + 0
  /* 111A1C 8018D2DC 90AC0015 */       lbu $t4, 0x15($a1) # gSceneData + 21
  /* 111A20 8018D2E0 0144C821 */      addu $t9, $t2, $a0
  /* 111A24 8018D2E4 10000005 */         b .L8018D2FC
  /* 111A28 8018D2E8 A32C009A */        sb $t4, 0x9a($t9)
  /* 111A2C 8018D2EC 8CCF0000 */        lw $t7, ($a2) # gpBattleState + 0
  .L8018D2F0:
  /* 111A30 8018D2F0 90AE003A */       lbu $t6, 0x3a($a1) # gSceneData + 58
  /* 111A34 8018D2F4 01E4C021 */      addu $t8, $t7, $a0
  /* 111A38 8018D2F8 A30E009A */        sb $t6, 0x9a($t8)
  .L8018D2FC:
  /* 111A3C 8018D2FC 8CCD0000 */        lw $t5, ($a2) # gpBattleState + 0
  /* 111A40 8018D300 246B0001 */     addiu $t3, $v1, 1
  /* 111A44 8018D304 01A45021 */      addu $t2, $t5, $a0
  /* 111A48 8018D308 10000004 */         b .L8018D31C
  /* 111A4C 8018D30C A14B009C */        sb $t3, 0x9c($t2)
  /* 111A50 8018D310 8CCC0000 */        lw $t4, ($a2) # gpBattleState + 0
  .L8018D314:
  /* 111A54 8018D314 0184C821 */      addu $t9, $t4, $a0
  /* 111A58 8018D318 A3270096 */        sb $a3, 0x96($t9)
  .L8018D31C:
  /* 111A5C 8018D31C 24630002 */     addiu $v1, $v1, 2
  /* 111A60 8018D320 1469FFC4 */       bne $v1, $t1, .L8018D234
  /* 111A64 8018D324 248400E8 */     addiu $a0, $a0, 0xe8
  /* 111A68 8018D328 03E00008 */        jr $ra
  /* 111A6C 8018D32C 00000000 */       nop 

glabel func_ovl6_8018D330
  /* 111A70 8018D330 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 111A74 8018D334 3C040000 */       lui $a0, %hi(D_NF_000000FD)
  /* 111A78 8018D338 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111A7C 8018D33C 248400FD */     addiu $a0, $a0, %lo(D_NF_000000FD)
  /* 111A80 8018D340 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 111A84 8018D344 AFA4001C */        sw $a0, 0x1c($sp)
  /* 111A88 8018D348 00402025 */        or $a0, $v0, $zero
  /* 111A8C 8018D34C 0C001260 */       jal hal_alloc
  /* 111A90 8018D350 24050010 */     addiu $a1, $zero, 0x10
  /* 111A94 8018D354 8FA4001C */        lw $a0, 0x1c($sp)
  /* 111A98 8018D358 0C033722 */       jal rldm_get_file_with_external_heap
  /* 111A9C 8018D35C 00402825 */        or $a1, $v0, $zero
  /* 111AA0 8018D360 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111AA4 8018D364 3C018019 */       lui $at, %hi(D_ovl6_8018F1A0)
  /* 111AA8 8018D368 AC22F1A0 */        sw $v0, %lo(D_ovl6_8018F1A0)($at)
  /* 111AAC 8018D36C 03E00008 */        jr $ra
  /* 111AB0 8018D370 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl6_8018D374
  /* 111AB4 8018D374 27BDFFA0 */     addiu $sp, $sp, -0x60
  /* 111AB8 8018D378 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 111ABC 8018D37C 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 111AC0 8018D380 AFBF003C */        sw $ra, 0x3c($sp)
  /* 111AC4 8018D384 AFB50038 */        sw $s5, 0x38($sp)
  /* 111AC8 8018D388 AFB40034 */        sw $s4, 0x34($sp)
  /* 111ACC 8018D38C AFB30030 */        sw $s3, 0x30($sp)
  /* 111AD0 8018D390 AFB2002C */        sw $s2, 0x2c($sp)
  /* 111AD4 8018D394 AFB10028 */        sw $s1, 0x28($sp)
  /* 111AD8 8018D398 AFB00024 */        sw $s0, 0x24($sp)
  /* 111ADC 8018D39C F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 111AE0 8018D3A0 91CF0001 */       lbu $t7, 1($t6)
  /* 111AE4 8018D3A4 4480A000 */      mtc1 $zero, $f20
  /* 111AE8 8018D3A8 3C098013 */       lui $t1, %hi(gpGroundInfo)
  /* 111AEC 8018D3AC 000FC080 */       sll $t8, $t7, 2
  /* 111AF0 8018D3B0 030FC023 */      subu $t8, $t8, $t7
  /* 111AF4 8018D3B4 8D291300 */        lw $t1, %lo(gpGroundInfo)($t1)
  /* 111AF8 8018D3B8 0018C080 */       sll $t8, $t8, 2
  /* 111AFC 8018D3BC 3C088019 */       lui $t0, %hi(D_ovl6_8018EEC4)
  /* 111B00 8018D3C0 2508EEC4 */     addiu $t0, $t0, %lo(D_ovl6_8018EEC4)
  /* 111B04 8018D3C4 2719FF34 */     addiu $t9, $t8, -0xcc
  /* 111B08 8018D3C8 E7B40050 */      swc1 $f20, 0x50($sp)
  /* 111B0C 8018D3CC E7B4004C */      swc1 $f20, 0x4c($sp)
  /* 111B10 8018D3D0 E7B40048 */      swc1 $f20, 0x48($sp)
  /* 111B14 8018D3D4 03281021 */      addu $v0, $t9, $t0
  /* 111B18 8018D3D8 8C4B0000 */        lw $t3, ($v0)
  /* 111B1C 8018D3DC 8D2A0010 */        lw $t2, 0x10($t1)
  /* 111B20 8018D3E0 8C4C0004 */        lw $t4, 4($v0)
  /* 111B24 8018D3E4 3C138013 */       lui $s3, %hi(D_ovl2_801313F0)
  /* 111B28 8018D3E8 8C4D0008 */        lw $t5, 8($v0)
  /* 111B2C 8018D3EC 267313F0 */     addiu $s3, $s3, %lo(D_ovl2_801313F0)
  /* 111B30 8018D3F0 014B1823 */      subu $v1, $t2, $t3
  /* 111B34 8018D3F4 A260000C */        sb $zero, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 111B38 8018D3F8 006C8821 */      addu $s1, $v1, $t4
  /* 111B3C 8018D3FC 8E2E002C */        lw $t6, 0x2c($s1)
  /* 111B40 8018D400 24140012 */     addiu $s4, $zero, 0x12
  /* 111B44 8018D404 006D9021 */      addu $s2, $v1, $t5
  /* 111B48 8018D408 26520004 */     addiu $s2, $s2, 4
  /* 111B4C 8018D40C 128E001A */       beq $s4, $t6, .L8018D478
  /* 111B50 8018D410 2631002C */     addiu $s1, $s1, 0x2c
  /* 111B54 8018D414 27B50048 */     addiu $s5, $sp, 0x48
  /* 111B58 8018D418 240F0001 */     addiu $t7, $zero, 1
  .L8018D41C:
  /* 111B5C 8018D41C AFAF0010 */        sw $t7, 0x10($sp)
  /* 111B60 8018D420 00002025 */        or $a0, $zero, $zero
  /* 111B64 8018D424 24050019 */     addiu $a1, $zero, 0x19
  /* 111B68 8018D428 26260008 */     addiu $a2, $s1, 8
  /* 111B6C 8018D42C 0C05BA9E */       jal itManager_MakeItemSetupCommon
  /* 111B70 8018D430 02A03825 */        or $a3, $s5, $zero
  /* 111B74 8018D434 8E450000 */        lw $a1, ($s2)
  /* 111B78 8018D438 00408025 */        or $s0, $v0, $zero
  /* 111B7C 8018D43C 50A00007 */      beql $a1, $zero, .L8018D45C
  /* 111B80 8018D440 9278000C */       lbu $t8, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 111B84 8018D444 4406A000 */      mfc1 $a2, $f20
  /* 111B88 8018D448 0C002F47 */       jal func_8000BD1C
  /* 111B8C 8018D44C 8C440074 */        lw $a0, 0x74($v0)
  /* 111B90 8018D450 0C0037CD */       jal func_8000DF34
  /* 111B94 8018D454 02002025 */        or $a0, $s0, $zero
  /* 111B98 8018D458 9278000C */       lbu $t8, 0xc($s3) # D_ovl2_801313F0 + 12
  .L8018D45C:
  /* 111B9C 8018D45C 2631002C */     addiu $s1, $s1, 0x2c
  /* 111BA0 8018D460 26520004 */     addiu $s2, $s2, 4
  /* 111BA4 8018D464 27190001 */     addiu $t9, $t8, 1
  /* 111BA8 8018D468 A279000C */        sb $t9, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 111BAC 8018D46C 8E280000 */        lw $t0, ($s1)
  /* 111BB0 8018D470 5688FFEA */      bnel $s4, $t0, .L8018D41C
  /* 111BB4 8018D474 240F0001 */     addiu $t7, $zero, 1
  .L8018D478:
  /* 111BB8 8018D478 9269000C */       lbu $t1, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 111BBC 8018D47C 2401000A */     addiu $at, $zero, 0xa
  /* 111BC0 8018D480 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 111BC4 8018D484 11210007 */       beq $t1, $at, .L8018D4A4
  /* 111BC8 8018D488 8FB00024 */        lw $s0, 0x24($sp)
  /* 111BCC 8018D48C 3C048019 */       lui $a0, %hi(D_ovl6_8018F170)
  /* 111BD0 8018D490 2484F170 */     addiu $a0, $a0, %lo(D_ovl6_8018F170)
  /* 111BD4 8018D494 0C008D89 */       jal fatal_printf
  /* 111BD8 8018D498 2405000A */     addiu $a1, $zero, 0xa
  .L8018D49C:
  /* 111BDC 8018D49C 1000FFFF */         b .L8018D49C
  /* 111BE0 8018D4A0 00000000 */       nop 
  .L8018D4A4:
  /* 111BE4 8018D4A4 8FBF003C */        lw $ra, 0x3c($sp)
  /* 111BE8 8018D4A8 8FB10028 */        lw $s1, 0x28($sp)
  /* 111BEC 8018D4AC 8FB2002C */        lw $s2, 0x2c($sp)
  /* 111BF0 8018D4B0 8FB30030 */        lw $s3, 0x30($sp)
  /* 111BF4 8018D4B4 8FB40034 */        lw $s4, 0x34($sp)
  /* 111BF8 8018D4B8 8FB50038 */        lw $s5, 0x38($sp)
  /* 111BFC 8018D4BC 03E00008 */        jr $ra
  /* 111C00 8018D4C0 27BD0060 */     addiu $sp, $sp, 0x60

glabel func_ovl6_8018D4C4
  /* 111C04 8018D4C4 3C058013 */       lui $a1, %hi(D_ovl2_801313F0)
  /* 111C08 8018D4C8 24A513F0 */     addiu $a1, $a1, %lo(D_ovl2_801313F0)
  /* 111C0C 8018D4CC 90A3000C */       lbu $v1, 0xc($a1) # D_ovl2_801313F0 + 12
  /* 111C10 8018D4D0 8CAE0004 */        lw $t6, 4($a1) # D_ovl2_801313F0 + 4
  /* 111C14 8018D4D4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 111C18 8018D4D8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111C1C 8018D4DC 00001025 */        or $v0, $zero, $zero
  /* 111C20 8018D4E0 18600005 */      blez $v1, .L8018D4F8
  /* 111C24 8018D4E4 8DC40074 */        lw $a0, 0x74($t6)
  .L8018D4E8:
  /* 111C28 8018D4E8 24420001 */     addiu $v0, $v0, 1
  /* 111C2C 8018D4EC 0043082A */       slt $at, $v0, $v1
  /* 111C30 8018D4F0 1420FFFD */      bnez $at, .L8018D4E8
  /* 111C34 8018D4F4 8C840008 */        lw $a0, 8($a0)
  .L8018D4F8:
  /* 111C38 8018D4F8 0C0025BB */       jal func_800096EC
  /* 111C3C 8018D4FC 00000000 */       nop 
  /* 111C40 8018D500 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111C44 8018D504 27BD0018 */     addiu $sp, $sp, 0x18
  /* 111C48 8018D508 03E00008 */        jr $ra
  /* 111C4C 8018D50C 00000000 */       nop 

glabel func_ovl6_8018D510
  /* 111C50 8018D510 3C028013 */       lui $v0, %hi(D_ovl2_801313F0)
  /* 111C54 8018D514 244213F0 */     addiu $v0, $v0, %lo(D_ovl2_801313F0)
  /* 111C58 8018D518 904E000C */       lbu $t6, 0xc($v0) # D_ovl2_801313F0 + 12
  /* 111C5C 8018D51C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 111C60 8018D520 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111C64 8018D524 25CFFFFF */     addiu $t7, $t6, -1
  /* 111C68 8018D528 0C063531 */       jal func_ovl6_8018D4C4
  /* 111C6C 8018D52C A04F000C */        sb $t7, 0xc($v0) # D_ovl2_801313F0 + 12
  /* 111C70 8018D530 3C188013 */       lui $t8, %hi(D_ovl2_801313FC)
  /* 111C74 8018D534 931813FC */       lbu $t8, %lo(D_ovl2_801313FC)($t8)
  /* 111C78 8018D538 3C03800A */       lui $v1, %hi(gSceneData)
  /* 111C7C 8018D53C 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 111C80 8018D540 5700001E */      bnel $t8, $zero, .L8018D5BC
  /* 111C84 8018D544 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111C88 8018D548 90790001 */       lbu $t9, 1($v1) # gSceneData + 1
  /* 111C8C 8018D54C 24010034 */     addiu $at, $zero, 0x34
  /* 111C90 8018D550 13210015 */       beq $t9, $at, .L8018D5A8
  /* 111C94 8018D554 00000000 */       nop 
  /* 111C98 8018D558 90680039 */       lbu $t0, 0x39($v1) # gSceneData + 57
  /* 111C9C 8018D55C 3C0A800A */       lui $t2, %hi(gSaveData)
  /* 111CA0 8018D560 254A44E0 */     addiu $t2, $t2, %lo(gSaveData)
  /* 111CA4 8018D564 00084940 */       sll $t1, $t0, 5
  /* 111CA8 8018D568 012A1021 */      addu $v0, $t1, $t2
  /* 111CAC 8018D56C 904B0470 */       lbu $t3, 0x470($v0)
  /* 111CB0 8018D570 2401000A */     addiu $at, $zero, 0xa
  /* 111CB4 8018D574 3C0C800A */       lui $t4, %hi(gpBattleState)
  /* 111CB8 8018D578 1561000B */       bne $t3, $at, .L8018D5A8
  /* 111CBC 8018D57C 00000000 */       nop 
  /* 111CC0 8018D580 8D8C50E8 */        lw $t4, %lo(gpBattleState)($t4)
  /* 111CC4 8018D584 8C4E046C */        lw $t6, 0x46c($v0)
  /* 111CC8 8018D588 8D8D0018 */        lw $t5, 0x18($t4)
  /* 111CCC 8018D58C 01AE082B */      sltu $at, $t5, $t6
  /* 111CD0 8018D590 10200005 */      beqz $at, .L8018D5A8
  /* 111CD4 8018D594 00000000 */       nop 
  /* 111CD8 8018D598 0C045356 */       jal func_ovl2_80114D58
  /* 111CDC 8018D59C 240401D0 */     addiu $a0, $zero, 0x1d0
  /* 111CE0 8018D5A0 10000003 */         b .L8018D5B0
  /* 111CE4 8018D5A4 00000000 */       nop 
  .L8018D5A8:
  /* 111CE8 8018D5A8 0C045356 */       jal func_ovl2_80114D58
  /* 111CEC 8018D5AC 240401CB */     addiu $a0, $zero, 0x1cb
  .L8018D5B0:
  /* 111CF0 8018D5B0 0C044E01 */       jal func_ovl2_80113804
  /* 111CF4 8018D5B4 24040118 */     addiu $a0, $zero, 0x118
  /* 111CF8 8018D5B8 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018D5BC:
  /* 111CFC 8018D5BC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 111D00 8018D5C0 03E00008 */        jr $ra
  /* 111D04 8018D5C4 00000000 */       nop 

  /* 111D08 8018D5C8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 111D0C 8018D5CC AFBF0014 */        sw $ra, 0x14($sp)
  /* 111D10 8018D5D0 0C0634DD */       jal func_ovl6_8018D374
  /* 111D14 8018D5D4 00000000 */       nop 
  /* 111D18 8018D5D8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111D1C 8018D5DC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 111D20 8018D5E0 03E00008 */        jr $ra
  /* 111D24 8018D5E4 00000000 */       nop 

glabel func_ovl6_8018D5E8
  /* 111D28 8018D5E8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 111D2C 8018D5EC 3C040000 */       lui $a0, %hi(D_NF_00000088)
  /* 111D30 8018D5F0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111D34 8018D5F4 24840088 */     addiu $a0, $a0, %lo(D_NF_00000088)
  /* 111D38 8018D5F8 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 111D3C 8018D5FC AFA4001C */        sw $a0, 0x1c($sp)
  /* 111D40 8018D600 00402025 */        or $a0, $v0, $zero
  /* 111D44 8018D604 0C001260 */       jal hal_alloc
  /* 111D48 8018D608 24050010 */     addiu $a1, $zero, 0x10
  /* 111D4C 8018D60C 8FA4001C */        lw $a0, 0x1c($sp)
  /* 111D50 8018D610 0C033722 */       jal rldm_get_file_with_external_heap
  /* 111D54 8018D614 00402825 */        or $a1, $v0, $zero
  /* 111D58 8018D618 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111D5C 8018D61C 3C018013 */       lui $at, %hi(D_ovl2_801313F4)
  /* 111D60 8018D620 AC2213F4 */        sw $v0, %lo(D_ovl2_801313F4)($at)
  /* 111D64 8018D624 03E00008 */        jr $ra
  /* 111D68 8018D628 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl6_8018D62C
  /* 111D6C 8018D62C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 111D70 8018D630 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111D74 8018D634 AFA40038 */        sw $a0, 0x38($sp)
  /* 111D78 8018D638 0C03D10A */       jal mpCollision_GetLREdgeLeft
  /* 111D7C 8018D63C 27A5002C */     addiu $a1, $sp, 0x2c
  /* 111D80 8018D640 8FA40038 */        lw $a0, 0x38($sp)
  /* 111D84 8018D644 0C03D102 */       jal mpCollision_GetLREdgeRight
  /* 111D88 8018D648 27A50020 */     addiu $a1, $sp, 0x20
  /* 111D8C 8018D64C C7A40020 */      lwc1 $f4, 0x20($sp)
  /* 111D90 8018D650 C7A6002C */      lwc1 $f6, 0x2c($sp)
  /* 111D94 8018D654 3C018019 */       lui $at, %hi(D_ovl6_8018F18C)
  /* 111D98 8018D658 C428F18C */      lwc1 $f8, %lo(D_ovl6_8018F18C)($at)
  /* 111D9C 8018D65C 46062001 */     sub.s $f0, $f4, $f6
  /* 111DA0 8018D660 3C018019 */       lui $at, %hi(D_ovl6_8018F190)
  /* 111DA4 8018D664 8FBF0014 */        lw $ra, 0x14($sp)
  /* 111DA8 8018D668 4608003E */    c.le.s $f0, $f8
  /* 111DAC 8018D66C 00000000 */       nop 
  /* 111DB0 8018D670 45000003 */      bc1f .L8018D680
  /* 111DB4 8018D674 00000000 */       nop 
  /* 111DB8 8018D678 10000009 */         b .L8018D6A0
  /* 111DBC 8018D67C 00001025 */        or $v0, $zero, $zero
  .L8018D680:
  /* 111DC0 8018D680 C42AF190 */      lwc1 $f10, %lo(D_ovl6_8018F190)($at)
  /* 111DC4 8018D684 24020002 */     addiu $v0, $zero, 2
  /* 111DC8 8018D688 460A003E */    c.le.s $f0, $f10
  /* 111DCC 8018D68C 00000000 */       nop 
  /* 111DD0 8018D690 45000003 */      bc1f .L8018D6A0
  /* 111DD4 8018D694 00000000 */       nop 
  /* 111DD8 8018D698 10000001 */         b .L8018D6A0
  /* 111DDC 8018D69C 24020001 */     addiu $v0, $zero, 1
  .L8018D6A0:
  /* 111DE0 8018D6A0 03E00008 */        jr $ra
  /* 111DE4 8018D6A4 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl6_8018D6A8
  /* 111DE8 8018D6A8 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 111DEC 8018D6AC AFBF0024 */        sw $ra, 0x24($sp)
  /* 111DF0 8018D6B0 AFB00020 */        sw $s0, 0x20($sp)
  /* 111DF4 8018D6B4 0C03F1CB */       jal func_ovl2_800FC72C
  /* 111DF8 8018D6B8 AFA40038 */        sw $a0, 0x38($sp)
  /* 111DFC 8018D6BC 3C0E8013 */       lui $t6, %hi(gpMapRooms)
  /* 111E00 8018D6C0 8DCE1304 */        lw $t6, %lo(gpMapRooms)($t6)
  /* 111E04 8018D6C4 00027880 */       sll $t7, $v0, 2
  /* 111E08 8018D6C8 8FA40038 */        lw $a0, 0x38($sp)
  /* 111E0C 8018D6CC 01CFC021 */      addu $t8, $t6, $t7
  /* 111E10 8018D6D0 0C06358B */       jal func_ovl6_8018D62C
  /* 111E14 8018D6D4 8F100000 */        lw $s0, ($t8)
  /* 111E18 8018D6D8 0002C900 */       sll $t9, $v0, 4
  /* 111E1C 8018D6DC 3C088019 */       lui $t0, %hi(D_ovl6_8018EFB4)
  /* 111E20 8018D6E0 01194021 */      addu $t0, $t0, $t9
  /* 111E24 8018D6E4 3C098013 */       lui $t1, %hi(D_ovl2_801313F4)
  /* 111E28 8018D6E8 8D2913F4 */        lw $t1, %lo(D_ovl2_801313F4)($t1)
  /* 111E2C 8018D6EC 8D08EFB4 */        lw $t0, %lo(D_ovl6_8018EFB4)($t0)
  /* 111E30 8018D6F0 AFA20030 */        sw $v0, 0x30($sp)
  /* 111E34 8018D6F4 02002025 */        or $a0, $s0, $zero
  /* 111E38 8018D6F8 00003025 */        or $a2, $zero, $zero
  /* 111E3C 8018D6FC 24070044 */     addiu $a3, $zero, 0x44
  /* 111E40 8018D700 AFA00010 */        sw $zero, 0x10($sp)
  /* 111E44 8018D704 AFA00014 */        sw $zero, 0x14($sp)
  /* 111E48 8018D708 0C0322CA */       jal func_ovl0_800C8B28
  /* 111E4C 8018D70C 01092821 */      addu $a1, $t0, $t1
  /* 111E50 8018D710 8FAA0030 */        lw $t2, 0x30($sp)
  /* 111E54 8018D714 3C0C8019 */       lui $t4, %hi(D_ovl6_8018EFB4)
  /* 111E58 8018D718 258CEFB4 */     addiu $t4, $t4, %lo(D_ovl6_8018EFB4)
  /* 111E5C 8018D71C 000A5900 */       sll $t3, $t2, 4
  /* 111E60 8018D720 016C1821 */      addu $v1, $t3, $t4
  /* 111E64 8018D724 3C0E8013 */       lui $t6, %hi(D_ovl2_801313F4)
  /* 111E68 8018D728 8DCE13F4 */        lw $t6, %lo(D_ovl2_801313F4)($t6)
  /* 111E6C 8018D72C 8C6D0008 */        lw $t5, 8($v1)
  /* 111E70 8018D730 8E040010 */        lw $a0, 0x10($s0)
  /* 111E74 8018D734 AFA3002C */        sw $v1, 0x2c($sp)
  /* 111E78 8018D738 0C03248A */       jal func_ovl0_800C9228
  /* 111E7C 8018D73C 01AE2821 */      addu $a1, $t5, $t6
  /* 111E80 8018D740 8FA3002C */        lw $v1, 0x2c($sp)
  /* 111E84 8018D744 3C028013 */       lui $v0, %hi(D_ovl2_801313F4)
  /* 111E88 8018D748 8C4213F4 */        lw $v0, %lo(D_ovl2_801313F4)($v0)
  /* 111E8C 8018D74C 8C6F0004 */        lw $t7, 4($v1)
  /* 111E90 8018D750 8C78000C */        lw $t8, 0xc($v1)
  /* 111E94 8018D754 8E040010 */        lw $a0, 0x10($s0)
  /* 111E98 8018D758 24070000 */     addiu $a3, $zero, 0
  /* 111E9C 8018D75C 01E22821 */      addu $a1, $t7, $v0
  /* 111EA0 8018D760 0C03222B */       jal func_ovl0_800C88AC
  /* 111EA4 8018D764 03023021 */      addu $a2, $t8, $v0
  /* 111EA8 8018D768 0C0324B2 */       jal func_ovl0_800C92C8
  /* 111EAC 8018D76C 8E040010 */        lw $a0, 0x10($s0)
  /* 111EB0 8018D770 8FB90030 */        lw $t9, 0x30($sp)
  /* 111EB4 8018D774 8E090010 */        lw $t1, 0x10($s0)
  /* 111EB8 8018D778 37288000 */       ori $t0, $t9, 0x8000
  /* 111EBC 8018D77C AD280084 */        sw $t0, 0x84($t1)
  /* 111EC0 8018D780 8FBF0024 */        lw $ra, 0x24($sp)
  /* 111EC4 8018D784 8FB00020 */        lw $s0, 0x20($sp)
  /* 111EC8 8018D788 27BD0038 */     addiu $sp, $sp, 0x38
  /* 111ECC 8018D78C 03E00008 */        jr $ra
  /* 111ED0 8018D790 00000000 */       nop 

glabel func_ovl6_8018D794
  /* 111ED4 8018D794 27BDFE20 */     addiu $sp, $sp, -0x1e0
  /* 111ED8 8018D798 AFBF0034 */        sw $ra, 0x34($sp)
  /* 111EDC 8018D79C AFB60030 */        sw $s6, 0x30($sp)
  /* 111EE0 8018D7A0 AFB5002C */        sw $s5, 0x2c($sp)
  /* 111EE4 8018D7A4 AFB40028 */        sw $s4, 0x28($sp)
  /* 111EE8 8018D7A8 AFB30024 */        sw $s3, 0x24($sp)
  /* 111EEC 8018D7AC AFB20020 */        sw $s2, 0x20($sp)
  /* 111EF0 8018D7B0 AFB1001C */        sw $s1, 0x1c($sp)
  /* 111EF4 8018D7B4 AFB00018 */        sw $s0, 0x18($sp)
  /* 111EF8 8018D7B8 0C03F23B */       jal func_ovl2_800FC8EC
  /* 111EFC 8018D7BC 00002025 */        or $a0, $zero, $zero
  /* 111F00 8018D7C0 3C118013 */       lui $s1, %hi(D_ovl2_801313F0)
  /* 111F04 8018D7C4 263113F0 */     addiu $s1, $s1, %lo(D_ovl2_801313F0)
  /* 111F08 8018D7C8 0040A825 */        or $s5, $v0, $zero
  /* 111F0C 8018D7CC A2200010 */        sb $zero, 0x10($s1) # D_ovl2_801313F0 + 16
  /* 111F10 8018D7D0 00002025 */        or $a0, $zero, $zero
  /* 111F14 8018D7D4 00402825 */        or $a1, $v0, $zero
  /* 111F18 8018D7D8 0C03F240 */       jal func_ovl2_800FC900
  /* 111F1C 8018D7DC 27A6004C */     addiu $a2, $sp, 0x4c
  /* 111F20 8018D7E0 1AA00021 */      blez $s5, .L8018D868
  /* 111F24 8018D7E4 27B0004C */     addiu $s0, $sp, 0x4c
  /* 111F28 8018D7E8 00157880 */       sll $t7, $s5, 2
  /* 111F2C 8018D7EC 3C148013 */       lui $s4, %hi(gpMapRooms)
  /* 111F30 8018D7F0 3C13FFFF */       lui $s3, (0xFFFF00FF >> 16) # 4294902015
  /* 111F34 8018D7F4 367300FF */       ori $s3, $s3, (0xFFFF00FF & 0xFFFF) # 4294902015
  /* 111F38 8018D7F8 26941304 */     addiu $s4, $s4, %lo(gpMapRooms)
  /* 111F3C 8018D7FC 01F0B021 */      addu $s6, $t7, $s0
  /* 111F40 8018D800 2412000E */     addiu $s2, $zero, 0xe
  .L8018D804:
  /* 111F44 8018D804 0C03F2B2 */       jal func_ovl2_800FCAC8
  /* 111F48 8018D808 8E040000 */        lw $a0, ($s0)
  /* 111F4C 8018D80C 0053C024 */       and $t8, $v0, $s3
  /* 111F50 8018D810 56580013 */      bnel $s2, $t8, .L8018D860
  /* 111F54 8018D814 26100004 */     addiu $s0, $s0, 4
  /* 111F58 8018D818 0C03F1CB */       jal func_ovl2_800FC72C
  /* 111F5C 8018D81C 8E040000 */        lw $a0, ($s0)
  /* 111F60 8018D820 8E990000 */        lw $t9, ($s4) # gpMapRooms + 0
  /* 111F64 8018D824 00024080 */       sll $t0, $v0, 2
  /* 111F68 8018D828 00402025 */        or $a0, $v0, $zero
  /* 111F6C 8018D82C 03284821 */      addu $t1, $t9, $t0
  /* 111F70 8018D830 8D2A0000 */        lw $t2, ($t1)
  /* 111F74 8018D834 8D4B0070 */        lw $t3, 0x70($t2)
  /* 111F78 8018D838 15600003 */      bnez $t3, .L8018D848
  /* 111F7C 8018D83C 00000000 */       nop 
  /* 111F80 8018D840 0C03F163 */       jal func_ovl2_800FC58C
  /* 111F84 8018D844 00000000 */       nop 
  .L8018D848:
  /* 111F88 8018D848 0C0635AA */       jal func_ovl6_8018D6A8
  /* 111F8C 8018D84C 8E040000 */        lw $a0, ($s0)
  /* 111F90 8018D850 922C0010 */       lbu $t4, 0x10($s1) # D_ovl2_801313F0 + 16
  /* 111F94 8018D854 258D0001 */     addiu $t5, $t4, 1
  /* 111F98 8018D858 A22D0010 */        sb $t5, 0x10($s1) # D_ovl2_801313F0 + 16
  /* 111F9C 8018D85C 26100004 */     addiu $s0, $s0, 4
  .L8018D860:
  /* 111FA0 8018D860 1616FFE8 */       bne $s0, $s6, .L8018D804
  /* 111FA4 8018D864 00000000 */       nop 
  .L8018D868:
  /* 111FA8 8018D868 8FBF0034 */        lw $ra, 0x34($sp)
  /* 111FAC 8018D86C 8FB00018 */        lw $s0, 0x18($sp)
  /* 111FB0 8018D870 8FB1001C */        lw $s1, 0x1c($sp)
  /* 111FB4 8018D874 8FB20020 */        lw $s2, 0x20($sp)
  /* 111FB8 8018D878 8FB30024 */        lw $s3, 0x24($sp)
  /* 111FBC 8018D87C 8FB40028 */        lw $s4, 0x28($sp)
  /* 111FC0 8018D880 8FB5002C */        lw $s5, 0x2c($sp)
  /* 111FC4 8018D884 8FB60030 */        lw $s6, 0x30($sp)
  /* 111FC8 8018D888 03E00008 */        jr $ra
  /* 111FCC 8018D88C 27BD01E0 */     addiu $sp, $sp, 0x1e0

glabel func_ovl6_8018D890
  /* 111FD0 8018D890 3C058013 */       lui $a1, %hi(D_ovl2_801313F0)
  /* 111FD4 8018D894 24A513F0 */     addiu $a1, $a1, %lo(D_ovl2_801313F0)
  /* 111FD8 8018D898 90A30010 */       lbu $v1, 0x10($a1) # D_ovl2_801313F0 + 16
  /* 111FDC 8018D89C 8CAE000C */        lw $t6, 0xc($a1) # D_ovl2_801313F0 + 12
  /* 111FE0 8018D8A0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 111FE4 8018D8A4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 111FE8 8018D8A8 00001025 */        or $v0, $zero, $zero
  /* 111FEC 8018D8AC 18600005 */      blez $v1, .L8018D8C4
  /* 111FF0 8018D8B0 8DC40074 */        lw $a0, 0x74($t6)
  .L8018D8B4:
  /* 111FF4 8018D8B4 24420001 */     addiu $v0, $v0, 1
  /* 111FF8 8018D8B8 0043082A */       slt $at, $v0, $v1
  /* 111FFC 8018D8BC 1420FFFD */      bnez $at, .L8018D8B4
  /* 112000 8018D8C0 8C840008 */        lw $a0, 8($a0)
  .L8018D8C4:
  /* 112004 8018D8C4 0C0025BB */       jal func_800096EC
  /* 112008 8018D8C8 00000000 */       nop 
  /* 11200C 8018D8CC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112010 8018D8D0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 112014 8018D8D4 03E00008 */        jr $ra
  /* 112018 8018D8D8 00000000 */       nop 

glabel func_ovl6_8018D8DC
  /* 11201C 8018D8DC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 112020 8018D8E0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 112024 8018D8E4 AFA40028 */        sw $a0, 0x28($sp)
  /* 112028 8018D8E8 8C840010 */        lw $a0, 0x10($a0)
  /* 11202C 8018D8EC 3C01FFFF */       lui $at, (0xFFFF7FFF >> 16) # 4294934527
  /* 112030 8018D8F0 34217FFF */       ori $at, $at, (0xFFFF7FFF & 0xFFFF) # 4294934527
  /* 112034 8018D8F4 8C8F0084 */        lw $t7, 0x84($a0)
  /* 112038 8018D8F8 01E1C024 */       and $t8, $t7, $at
  /* 11203C 8018D8FC 0C002523 */       jal func_8000948C
  /* 112040 8018D900 AFB80024 */        sw $t8, 0x24($sp)
  /* 112044 8018D904 8FB90024 */        lw $t9, 0x24($sp)
  /* 112048 8018D908 3C098019 */       lui $t1, %hi(D_ovl6_8018EFE4)
  /* 11204C 8018D90C 2529EFE4 */     addiu $t1, $t1, %lo(D_ovl6_8018EFE4)
  /* 112050 8018D910 001940C0 */       sll $t0, $t9, 3
  /* 112054 8018D914 01091021 */      addu $v0, $t0, $t1
  /* 112058 8018D918 3C0B8013 */       lui $t3, %hi(D_ovl2_801313F4)
  /* 11205C 8018D91C 8D6B13F4 */        lw $t3, %lo(D_ovl2_801313F4)($t3)
  /* 112060 8018D920 8C4A0000 */        lw $t2, ($v0)
  /* 112064 8018D924 AFA20020 */        sw $v0, 0x20($sp)
  /* 112068 8018D928 8FA40028 */        lw $a0, 0x28($sp)
  /* 11206C 8018D92C 00003025 */        or $a2, $zero, $zero
  /* 112070 8018D930 24070044 */     addiu $a3, $zero, 0x44
  /* 112074 8018D934 AFA00010 */        sw $zero, 0x10($sp)
  /* 112078 8018D938 AFA00014 */        sw $zero, 0x14($sp)
  /* 11207C 8018D93C 0C0322CA */       jal func_ovl0_800C8B28
  /* 112080 8018D940 014B2821 */      addu $a1, $t2, $t3
  /* 112084 8018D944 8FA20020 */        lw $v0, 0x20($sp)
  /* 112088 8018D948 3C0E8013 */       lui $t6, %hi(D_ovl2_801313F4)
  /* 11208C 8018D94C 8DCE13F4 */        lw $t6, %lo(D_ovl2_801313F4)($t6)
  /* 112090 8018D950 8FAC0028 */        lw $t4, 0x28($sp)
  /* 112094 8018D954 8C4D0004 */        lw $t5, 4($v0)
  /* 112098 8018D958 24060000 */     addiu $a2, $zero, 0
  /* 11209C 8018D95C 8D840010 */        lw $a0, 0x10($t4)
  /* 1120A0 8018D960 0C0321D6 */       jal func_ovl0_800C8758
  /* 1120A4 8018D964 01AE2821 */      addu $a1, $t5, $t6
  /* 1120A8 8018D968 8FAF0028 */        lw $t7, 0x28($sp)
  /* 1120AC 8018D96C 0C0324B2 */       jal func_ovl0_800C92C8
  /* 1120B0 8018D970 8DE40010 */        lw $a0, 0x10($t7)
  /* 1120B4 8018D974 3C028013 */       lui $v0, %hi(D_ovl2_801313F0)
  /* 1120B8 8018D978 244213F0 */     addiu $v0, $v0, %lo(D_ovl2_801313F0)
  /* 1120BC 8018D97C 90580010 */       lbu $t8, 0x10($v0) # D_ovl2_801313F0 + 16
  /* 1120C0 8018D980 2719FFFF */     addiu $t9, $t8, -1
  /* 1120C4 8018D984 0C063624 */       jal func_ovl6_8018D890
  /* 1120C8 8018D988 A0590010 */        sb $t9, 0x10($v0) # D_ovl2_801313F0 + 16
  /* 1120CC 8018D98C 0C009A70 */       jal func_800269C0
  /* 1120D0 8018D990 24040115 */     addiu $a0, $zero, 0x115
  /* 1120D4 8018D994 3C088013 */       lui $t0, %hi(D_ovl2_80131400)
  /* 1120D8 8018D998 91081400 */       lbu $t0, %lo(D_ovl2_80131400)($t0)
  /* 1120DC 8018D99C 3C03800A */       lui $v1, %hi(gSceneData)
  /* 1120E0 8018D9A0 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 1120E4 8018D9A4 5500001E */      bnel $t0, $zero, .L8018DA20
  /* 1120E8 8018D9A8 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1120EC 8018D9AC 90690001 */       lbu $t1, 1($v1) # gSceneData + 1
  /* 1120F0 8018D9B0 24010034 */     addiu $at, $zero, 0x34
  /* 1120F4 8018D9B4 11210015 */       beq $t1, $at, .L8018DA0C
  /* 1120F8 8018D9B8 00000000 */       nop 
  /* 1120FC 8018D9BC 906A0039 */       lbu $t2, 0x39($v1) # gSceneData + 57
  /* 112100 8018D9C0 3C0C800A */       lui $t4, %hi(gSaveData)
  /* 112104 8018D9C4 258C44E0 */     addiu $t4, $t4, %lo(gSaveData)
  /* 112108 8018D9C8 000A5940 */       sll $t3, $t2, 5
  /* 11210C 8018D9CC 016C1021 */      addu $v0, $t3, $t4
  /* 112110 8018D9D0 904D0478 */       lbu $t5, 0x478($v0)
  /* 112114 8018D9D4 2401000A */     addiu $at, $zero, 0xa
  /* 112118 8018D9D8 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 11211C 8018D9DC 15A1000B */       bne $t5, $at, .L8018DA0C
  /* 112120 8018D9E0 00000000 */       nop 
  /* 112124 8018D9E4 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 112128 8018D9E8 8C580474 */        lw $t8, 0x474($v0)
  /* 11212C 8018D9EC 8DCF0018 */        lw $t7, 0x18($t6)
  /* 112130 8018D9F0 01F8082B */      sltu $at, $t7, $t8
  /* 112134 8018D9F4 10200005 */      beqz $at, .L8018DA0C
  /* 112138 8018D9F8 00000000 */       nop 
  /* 11213C 8018D9FC 0C045356 */       jal func_ovl2_80114D58
  /* 112140 8018DA00 240401D0 */     addiu $a0, $zero, 0x1d0
  /* 112144 8018DA04 10000003 */         b .L8018DA14
  /* 112148 8018DA08 00000000 */       nop 
  .L8018DA0C:
  /* 11214C 8018DA0C 0C045356 */       jal func_ovl2_80114D58
  /* 112150 8018DA10 240401CB */     addiu $a0, $zero, 0x1cb
  .L8018DA14:
  /* 112154 8018DA14 0C044E01 */       jal func_ovl2_80113804
  /* 112158 8018DA18 24040115 */     addiu $a0, $zero, 0x115
  /* 11215C 8018DA1C 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DA20:
  /* 112160 8018DA20 27BD0028 */     addiu $sp, $sp, 0x28
  /* 112164 8018DA24 03E00008 */        jr $ra
  /* 112168 8018DA28 00000000 */       nop 

glabel func_ovl6_8018DA2C
  /* 11216C 8018DA2C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 112170 8018DA30 AFB00014 */        sw $s0, 0x14($sp)
  /* 112174 8018DA34 3C108004 */       lui $s0, %hi(gOMObjCommonLinks + (0x03 * 4))
  /* 112178 8018DA38 8E1066FC */        lw $s0, %lo(gOMObjCommonLinks + (0x03 * 4))($s0)
  /* 11217C 8018DA3C AFBF0024 */        sw $ra, 0x24($sp)
  /* 112180 8018DA40 AFB30020 */        sw $s3, 0x20($sp)
  /* 112184 8018DA44 AFB2001C */        sw $s2, 0x1c($sp)
  /* 112188 8018DA48 AFB10018 */        sw $s1, 0x18($sp)
  /* 11218C 8018DA4C 1200001D */      beqz $s0, .L8018DAC4
  /* 112190 8018DA50 AFA40028 */        sw $a0, 0x28($sp)
  /* 112194 8018DA54 3C138013 */       lui $s3, %hi(gpMapRooms)
  /* 112198 8018DA58 3C12FFFF */       lui $s2, (0xFFFF00FF >> 16) # 4294902015
  /* 11219C 8018DA5C 365200FF */       ori $s2, $s2, (0xFFFF00FF & 0xFFFF) # 4294902015
  /* 1121A0 8018DA60 26731304 */     addiu $s3, $s3, %lo(gpMapRooms)
  /* 1121A4 8018DA64 2411000E */     addiu $s1, $zero, 0xe
  /* 1121A8 8018DA68 8E020084 */        lw $v0, 0x84($s0)
  .L8018DA6C:
  /* 1121AC 8018DA6C 8C4E014C */        lw $t6, 0x14c($v0)
  /* 1121B0 8018DA70 55C00012 */      bnel $t6, $zero, .L8018DABC
  /* 1121B4 8018DA74 8E100004 */        lw $s0, 4($s0)
  /* 1121B8 8018DA78 8C4F00F4 */        lw $t7, 0xf4($v0)
  /* 1121BC 8018DA7C 01F2C024 */       and $t8, $t7, $s2
  /* 1121C0 8018DA80 5638000E */      bnel $s1, $t8, .L8018DABC
  /* 1121C4 8018DA84 8E100004 */        lw $s0, 4($s0)
  /* 1121C8 8018DA88 0C03F1CB */       jal func_ovl2_800FC72C
  /* 1121CC 8018DA8C 8C4400EC */        lw $a0, 0xec($v0)
  /* 1121D0 8018DA90 8E790000 */        lw $t9, ($s3) # gpMapRooms + 0
  /* 1121D4 8018DA94 00024080 */       sll $t0, $v0, 2
  /* 1121D8 8018DA98 03284821 */      addu $t1, $t9, $t0
  /* 1121DC 8018DA9C 8D240000 */        lw $a0, ($t1)
  /* 1121E0 8018DAA0 8C8A0010 */        lw $t2, 0x10($a0)
  /* 1121E4 8018DAA4 8D4B0084 */        lw $t3, 0x84($t2)
  /* 1121E8 8018DAA8 51600004 */      beql $t3, $zero, .L8018DABC
  /* 1121EC 8018DAAC 8E100004 */        lw $s0, 4($s0)
  /* 1121F0 8018DAB0 0C063637 */       jal func_ovl6_8018D8DC
  /* 1121F4 8018DAB4 00000000 */       nop 
  /* 1121F8 8018DAB8 8E100004 */        lw $s0, 4($s0)
  .L8018DABC:
  /* 1121FC 8018DABC 5600FFEB */      bnel $s0, $zero, .L8018DA6C
  /* 112200 8018DAC0 8E020084 */        lw $v0, 0x84($s0)
  .L8018DAC4:
  /* 112204 8018DAC4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 112208 8018DAC8 8FB00014 */        lw $s0, 0x14($sp)
  /* 11220C 8018DACC 8FB10018 */        lw $s1, 0x18($sp)
  /* 112210 8018DAD0 8FB2001C */        lw $s2, 0x1c($sp)
  /* 112214 8018DAD4 8FB30020 */        lw $s3, 0x20($sp)
  /* 112218 8018DAD8 03E00008 */        jr $ra
  /* 11221C 8018DADC 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl6_8018DAE0
  /* 112220 8018DAE0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 112224 8018DAE4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 112228 8018DAE8 240403F2 */     addiu $a0, $zero, 0x3f2
  /* 11222C 8018DAEC 00002825 */        or $a1, $zero, $zero
  /* 112230 8018DAF0 24060001 */     addiu $a2, $zero, 1
  /* 112234 8018DAF4 0C00265A */       jal omMakeGObjCommon
  /* 112238 8018DAF8 3C078000 */       lui $a3, 0x8000
  /* 11223C 8018DAFC 3C058019 */       lui $a1, %hi(func_ovl6_8018DA2C)
  /* 112240 8018DB00 24A5DA2C */     addiu $a1, $a1, %lo(func_ovl6_8018DA2C)
  /* 112244 8018DB04 00402025 */        or $a0, $v0, $zero
  /* 112248 8018DB08 24060001 */     addiu $a2, $zero, 1
  /* 11224C 8018DB0C 0C002062 */       jal omAddGObjCommonProc
  /* 112250 8018DB10 24070004 */     addiu $a3, $zero, 4
  /* 112254 8018DB14 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112258 8018DB18 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11225C 8018DB1C 03E00008 */        jr $ra
  /* 112260 8018DB20 00000000 */       nop 

glabel func_ovl6_8018DB24
  /* 112264 8018DB24 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 112268 8018DB28 3C0E8013 */       lui $t6, %hi(gpGroundInfo)
  /* 11226C 8018DB2C 8DCE1300 */        lw $t6, %lo(gpGroundInfo)($t6)
  /* 112270 8018DB30 AFBF003C */        sw $ra, 0x3c($sp)
  /* 112274 8018DB34 AFB40038 */        sw $s4, 0x38($sp)
  /* 112278 8018DB38 AFB30034 */        sw $s3, 0x34($sp)
  /* 11227C 8018DB3C AFB20030 */        sw $s2, 0x30($sp)
  /* 112280 8018DB40 AFB1002C */        sw $s1, 0x2c($sp)
  /* 112284 8018DB44 AFB00028 */        sw $s0, 0x28($sp)
  /* 112288 8018DB48 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 11228C 8018DB4C 8DC50080 */        lw $a1, 0x80($t6)
  /* 112290 8018DB50 3C03800A */       lui $v1, %hi(gpBattleState)
  /* 112294 8018DB54 50A00030 */      beql $a1, $zero, .L8018DC18
  /* 112298 8018DB58 8FBF003C */        lw $ra, 0x3c($sp)
  /* 11229C 8018DB5C 8C6350E8 */        lw $v1, %lo(gpBattleState)($v1)
  /* 1122A0 8018DB60 3C068019 */       lui $a2, %hi(D_ovl6_8018EF54)
  /* 1122A4 8018DB64 4480A000 */      mtc1 $zero, $f20
  /* 1122A8 8018DB68 906F0001 */       lbu $t7, 1($v1)
  /* 1122AC 8018DB6C 24C6EF54 */     addiu $a2, $a2, %lo(D_ovl6_8018EF54)
  /* 1122B0 8018DB70 24130012 */     addiu $s3, $zero, 0x12
  /* 1122B4 8018DB74 000FC0C0 */       sll $t8, $t7, 3
  /* 1122B8 8018DB78 00D8C821 */      addu $t9, $a2, $t8
  /* 1122BC 8018DB7C 8F28FF18 */        lw $t0, -0xe8($t9)
  /* 1122C0 8018DB80 E7B40050 */      swc1 $f20, 0x50($sp)
  /* 1122C4 8018DB84 E7B40054 */      swc1 $f20, 0x54($sp)
  /* 1122C8 8018DB88 E7B40058 */      swc1 $f20, 0x58($sp)
  /* 1122CC 8018DB8C 90690001 */       lbu $t1, 1($v1)
  /* 1122D0 8018DB90 00A81023 */      subu $v0, $a1, $t0
  /* 1122D4 8018DB94 27B40050 */     addiu $s4, $sp, 0x50
  /* 1122D8 8018DB98 000950C0 */       sll $t2, $t1, 3
  /* 1122DC 8018DB9C 00CA2021 */      addu $a0, $a2, $t2
  /* 1122E0 8018DBA0 8C8BFF18 */        lw $t3, -0xe8($a0)
  /* 1122E4 8018DBA4 8C8CFF1C */        lw $t4, -0xe4($a0)
  /* 1122E8 8018DBA8 01628821 */      addu $s1, $t3, $v0
  /* 1122EC 8018DBAC 8E2D002C */        lw $t5, 0x2c($s1)
  /* 1122F0 8018DBB0 01829021 */      addu $s2, $t4, $v0
  /* 1122F4 8018DBB4 26520004 */     addiu $s2, $s2, 4
  /* 1122F8 8018DBB8 126D0016 */       beq $s3, $t5, .L8018DC14
  /* 1122FC 8018DBBC 2631002C */     addiu $s1, $s1, 0x2c
  /* 112300 8018DBC0 240E0001 */     addiu $t6, $zero, 1
  .L8018DBC4:
  /* 112304 8018DBC4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 112308 8018DBC8 00002025 */        or $a0, $zero, $zero
  /* 11230C 8018DBCC 24050017 */     addiu $a1, $zero, 0x17
  /* 112310 8018DBD0 26260008 */     addiu $a2, $s1, 8
  /* 112314 8018DBD4 0C05BA9E */       jal itManager_MakeItemSetupCommon
  /* 112318 8018DBD8 02803825 */        or $a3, $s4, $zero
  /* 11231C 8018DBDC 8E450000 */        lw $a1, ($s2)
  /* 112320 8018DBE0 00408025 */        or $s0, $v0, $zero
  /* 112324 8018DBE4 50A00007 */      beql $a1, $zero, .L8018DC04
  /* 112328 8018DBE8 8E2F002C */        lw $t7, 0x2c($s1)
  /* 11232C 8018DBEC 4406A000 */      mfc1 $a2, $f20
  /* 112330 8018DBF0 0C002F47 */       jal func_8000BD1C
  /* 112334 8018DBF4 8C440074 */        lw $a0, 0x74($v0)
  /* 112338 8018DBF8 0C0037CD */       jal func_8000DF34
  /* 11233C 8018DBFC 02002025 */        or $a0, $s0, $zero
  /* 112340 8018DC00 8E2F002C */        lw $t7, 0x2c($s1)
  .L8018DC04:
  /* 112344 8018DC04 2631002C */     addiu $s1, $s1, 0x2c
  /* 112348 8018DC08 26520004 */     addiu $s2, $s2, 4
  /* 11234C 8018DC0C 566FFFED */      bnel $s3, $t7, .L8018DBC4
  /* 112350 8018DC10 240E0001 */     addiu $t6, $zero, 1
  .L8018DC14:
  /* 112354 8018DC14 8FBF003C */        lw $ra, 0x3c($sp)
  .L8018DC18:
  /* 112358 8018DC18 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 11235C 8018DC1C 8FB00028 */        lw $s0, 0x28($sp)
  /* 112360 8018DC20 8FB1002C */        lw $s1, 0x2c($sp)
  /* 112364 8018DC24 8FB20030 */        lw $s2, 0x30($sp)
  /* 112368 8018DC28 8FB30034 */        lw $s3, 0x34($sp)
  /* 11236C 8018DC2C 8FB40038 */        lw $s4, 0x38($sp)
  /* 112370 8018DC30 03E00008 */        jr $ra
  /* 112374 8018DC34 27BD0068 */     addiu $sp, $sp, 0x68

  /* 112378 8018DC38 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 11237C 8018DC3C AFBF0014 */        sw $ra, 0x14($sp)
  /* 112380 8018DC40 0C0636C9 */       jal func_ovl6_8018DB24
  /* 112384 8018DC44 00000000 */       nop 
  /* 112388 8018DC48 0C06357A */       jal func_ovl6_8018D5E8
  /* 11238C 8018DC4C 00000000 */       nop 
  /* 112390 8018DC50 0C0635E5 */       jal func_ovl6_8018D794
  /* 112394 8018DC54 00000000 */       nop 
  /* 112398 8018DC58 0C0636B8 */       jal func_ovl6_8018DAE0
  /* 11239C 8018DC5C 00000000 */       nop 
  /* 1123A0 8018DC60 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1123A4 8018DC64 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1123A8 8018DC68 03E00008 */        jr $ra
  /* 1123AC 8018DC6C 00000000 */       nop 

glabel func_ovl6_8018DC70
  /* 1123B0 8018DC70 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1123B4 8018DC74 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1123B8 8018DC78 AFA40018 */        sw $a0, 0x18($sp)
  /* 1123BC 8018DC7C 0C002C7A */       jal stop_current_process
  /* 1123C0 8018DC80 2404003C */     addiu $a0, $zero, 0x3c
  /* 1123C4 8018DC84 0C044835 */       jal func_ovl2_801120D4
  /* 1123C8 8018DC88 00000000 */       nop 
  /* 1123CC 8018DC8C 0C0439A4 */       jal func_ovl2_8010E690
  /* 1123D0 8018DC90 00000000 */       nop 
  /* 1123D4 8018DC94 0C009A70 */       jal func_800269C0
  /* 1123D8 8018DC98 240401EA */     addiu $a0, $zero, 0x1ea
  /* 1123DC 8018DC9C 0C044871 */       jal func_ovl2_801121C4
  /* 1123E0 8018DCA0 00000000 */       nop 
  /* 1123E4 8018DCA4 0C0026A1 */       jal omEjectGObjCommon
  /* 1123E8 8018DCA8 00002025 */        or $a0, $zero, $zero
  /* 1123EC 8018DCAC 0C002C7A */       jal stop_current_process
  /* 1123F0 8018DCB0 24040001 */     addiu $a0, $zero, 1
  /* 1123F4 8018DCB4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1123F8 8018DCB8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1123FC 8018DCBC 03E00008 */        jr $ra
  /* 112400 8018DCC0 00000000 */       nop 

glabel func_ovl6_8018DCC4
  /* 112404 8018DCC4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 112408 8018DCC8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 11240C 8018DCCC 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 112410 8018DCD0 00002825 */        or $a1, $zero, $zero
  /* 112414 8018DCD4 2406000A */     addiu $a2, $zero, 0xa
  /* 112418 8018DCD8 0C00265A */       jal omMakeGObjCommon
  /* 11241C 8018DCDC 3C078000 */       lui $a3, 0x8000
  /* 112420 8018DCE0 3C058019 */       lui $a1, %hi(func_ovl6_8018DC70)
  /* 112424 8018DCE4 24A5DC70 */     addiu $a1, $a1, %lo(func_ovl6_8018DC70)
  /* 112428 8018DCE8 00402025 */        or $a0, $v0, $zero
  /* 11242C 8018DCEC 00003025 */        or $a2, $zero, $zero
  /* 112430 8018DCF0 0C002062 */       jal omAddGObjCommonProc
  /* 112434 8018DCF4 24070005 */     addiu $a3, $zero, 5
  /* 112438 8018DCF8 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 11243C 8018DCFC 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 112440 8018DD00 A1C00011 */        sb $zero, 0x11($t6)
  /* 112444 8018DD04 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112448 8018DD08 27BD0018 */     addiu $sp, $sp, 0x18
  /* 11244C 8018DD0C 03E00008 */        jr $ra
  /* 112450 8018DD10 00000000 */       nop 

glabel func_ovl6_8018DD14
  /* 112454 8018DD14 3C06800A */       lui $a2, %hi(gpBattleState)
  /* 112458 8018DD18 8CC650E8 */        lw $a2, %lo(gpBattleState)($a2)
  /* 11245C 8018DD1C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 112460 8018DD20 AFBF001C */        sw $ra, 0x1c($sp)
  /* 112464 8018DD24 00001025 */        or $v0, $zero, $zero
  /* 112468 8018DD28 240501D0 */     addiu $a1, $zero, 0x1d0
  /* 11246C 8018DD2C 24040002 */     addiu $a0, $zero, 2
  /* 112470 8018DD30 00C01825 */        or $v1, $a2, $zero
  .L8018DD34:
  /* 112474 8018DD34 906E0022 */       lbu $t6, 0x22($v1)
  /* 112478 8018DD38 24420074 */     addiu $v0, $v0, 0x74
  /* 11247C 8018DD3C 108E0022 */       beq $a0, $t6, .L8018DDC8
  /* 112480 8018DD40 00000000 */       nop 
  /* 112484 8018DD44 90CF0001 */       lbu $t7, 1($a2)
  /* 112488 8018DD48 3C06BE20 */       lui $a2, (0xBE20D97C >> 16) # 3189823868
  /* 11248C 8018DD4C 34C6D97C */       ori $a2, $a2, (0xBE20D97C & 0xFFFF) # 3189823868
  /* 112490 8018DD50 29E1001D */      slti $at, $t7, 0x1d
  /* 112494 8018DD54 14200010 */      bnez $at, .L8018DD98
  /* 112498 8018DD58 24050000 */     addiu $a1, $zero, 0
  /* 11249C 8018DD5C 3C018019 */       lui $at, %hi(D_ovl6_8018F194)
  /* 1124A0 8018DD60 C424F194 */      lwc1 $f4, %lo(D_ovl6_8018F194)($at)
  /* 1124A4 8018DD64 3C0141FC */       lui $at, (0x41FC0000 >> 16) # 31.5
  /* 1124A8 8018DD68 44813000 */      mtc1 $at, $f6 # 31.5 to cop1
  /* 1124AC 8018DD6C 8C640078 */        lw $a0, 0x78($v1)
  /* 1124B0 8018DD70 3C06BE86 */       lui $a2, (0xBE860A92 >> 16) # 3196455570
  /* 1124B4 8018DD74 3C07460C */       lui $a3, (0x460CA000 >> 16) # 1175232512
  /* 1124B8 8018DD78 34E7A000 */       ori $a3, $a3, (0x460CA000 & 0xFFFF) # 1175232512
  /* 1124BC 8018DD7C 34C60A92 */       ori $a2, $a2, (0xBE860A92 & 0xFFFF) # 3196455570
  /* 1124C0 8018DD80 24050000 */     addiu $a1, $zero, 0
  /* 1124C4 8018DD84 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 1124C8 8018DD88 0C0433EA */       jal func_ovl2_8010CFA8
  /* 1124CC 8018DD8C E7A60014 */      swc1 $f6, 0x14($sp)
  /* 1124D0 8018DD90 10000010 */         b .L8018DDD4
  /* 1124D4 8018DD94 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DD98:
  /* 1124D8 8018DD98 3C018019 */       lui $at, %hi(D_ovl6_8018F198)
  /* 1124DC 8018DD9C C428F198 */      lwc1 $f8, %lo(D_ovl6_8018F198)($at)
  /* 1124E0 8018DDA0 3C0141FC */       lui $at, (0x41FC0000 >> 16) # 31.5
  /* 1124E4 8018DDA4 44815000 */      mtc1 $at, $f10 # 31.5 to cop1
  /* 1124E8 8018DDA8 8C640078 */        lw $a0, 0x78($v1)
  /* 1124EC 8018DDAC 3C07460C */       lui $a3, (0x460CA000 >> 16) # 1175232512
  /* 1124F0 8018DDB0 34E7A000 */       ori $a3, $a3, (0x460CA000 & 0xFFFF) # 1175232512
  /* 1124F4 8018DDB4 E7A80010 */      swc1 $f8, 0x10($sp)
  /* 1124F8 8018DDB8 0C0433EA */       jal func_ovl2_8010CFA8
  /* 1124FC 8018DDBC E7AA0014 */      swc1 $f10, 0x14($sp)
  /* 112500 8018DDC0 10000004 */         b .L8018DDD4
  /* 112504 8018DDC4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DDC8:
  /* 112508 8018DDC8 1445FFDA */       bne $v0, $a1, .L8018DD34
  /* 11250C 8018DDCC 24630074 */     addiu $v1, $v1, 0x74
  /* 112510 8018DDD0 8FBF001C */        lw $ra, 0x1c($sp)
  .L8018DDD4:
  /* 112514 8018DDD4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 112518 8018DDD8 03E00008 */        jr $ra
  /* 11251C 8018DDDC 00000000 */       nop 

glabel func_ovl6_8018DDE0
  /* 112520 8018DDE0 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 112524 8018DDE4 AFB0001C */        sw $s0, 0x1c($sp)
  /* 112528 8018DDE8 3C100000 */       lui $s0, %hi(D_NF_00000097)
  /* 11252C 8018DDEC AFBF0034 */        sw $ra, 0x34($sp)
  /* 112530 8018DDF0 26100097 */     addiu $s0, $s0, %lo(D_NF_00000097)
  /* 112534 8018DDF4 AFB50030 */        sw $s5, 0x30($sp)
  /* 112538 8018DDF8 AFB4002C */        sw $s4, 0x2c($sp)
  /* 11253C 8018DDFC AFB30028 */        sw $s3, 0x28($sp)
  /* 112540 8018DE00 AFB20024 */        sw $s2, 0x24($sp)
  /* 112544 8018DE04 AFB10020 */        sw $s1, 0x20($sp)
  /* 112548 8018DE08 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 11254C 8018DE0C 02002025 */        or $a0, $s0, $zero
  /* 112550 8018DE10 00402025 */        or $a0, $v0, $zero
  /* 112554 8018DE14 0C001260 */       jal hal_alloc
  /* 112558 8018DE18 24050010 */     addiu $a1, $zero, 0x10
  /* 11255C 8018DE1C 02002025 */        or $a0, $s0, $zero
  /* 112560 8018DE20 0C033722 */       jal rldm_get_file_with_external_heap
  /* 112564 8018DE24 00402825 */        or $a1, $v0, $zero
  /* 112568 8018DE28 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 11256C 8018DE2C 0040A025 */        or $s4, $v0, $zero
  /* 112570 8018DE30 02003825 */        or $a3, $s0, $zero
  /* 112574 8018DE34 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 112578 8018DE38 00002825 */        or $a1, $zero, $zero
  /* 11257C 8018DE3C 0C00265A */       jal omMakeGObjCommon
  /* 112580 8018DE40 2406000B */     addiu $a2, $zero, 0xb
  /* 112584 8018DE44 3C138013 */       lui $s3, %hi(D_ovl2_801313F0)
  /* 112588 8018DE48 267313F0 */     addiu $s3, $s3, %lo(D_ovl2_801313F0)
  /* 11258C 8018DE4C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 112590 8018DE50 240EFFFF */     addiu $t6, $zero, -1
  /* 112594 8018DE54 AE620004 */        sw $v0, 4($s3) # D_ovl2_801313F0 + 4
  /* 112598 8018DE58 00408825 */        or $s1, $v0, $zero
  /* 11259C 8018DE5C AFAE0010 */        sw $t6, 0x10($sp)
  /* 1125A0 8018DE60 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1125A4 8018DE64 00402025 */        or $a0, $v0, $zero
  /* 1125A8 8018DE68 24060017 */     addiu $a2, $zero, 0x17
  /* 1125AC 8018DE6C 0C00277D */       jal func_80009DF4
  /* 1125B0 8018DE70 02003825 */        or $a3, $s0, $zero
  /* 1125B4 8018DE74 926F000C */       lbu $t7, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 1125B8 8018DE78 3C180000 */       lui $t8, %hi(D_NF_000001D0)
  /* 1125BC 8018DE7C 271801D0 */     addiu $t8, $t8, %lo(D_NF_000001D0)
  /* 1125C0 8018DE80 19E00025 */      blez $t7, .L8018DF18
  /* 1125C4 8018DE84 00008025 */        or $s0, $zero, $zero
  /* 1125C8 8018DE88 02989021 */      addu $s2, $s4, $t8
  /* 1125CC 8018DE8C 24140201 */     addiu $s4, $zero, 0x201
  /* 1125D0 8018DE90 2415001E */     addiu $s5, $zero, 0x1e
  /* 1125D4 8018DE94 02202025 */        or $a0, $s1, $zero
  .L8018DE98:
  /* 1125D8 8018DE98 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 1125DC 8018DE9C 02402825 */        or $a1, $s2, $zero
  /* 1125E0 8018DEA0 84430014 */        lh $v1, 0x14($v0)
  /* 1125E4 8018DEA4 844C0016 */        lh $t4, 0x16($v0)
  /* 1125E8 8018DEA8 A4540024 */        sh $s4, 0x24($v0)
  /* 1125EC 8018DEAC 24790003 */     addiu $t9, $v1, 3
  /* 1125F0 8018DEB0 03300019 */     multu $t9, $s0
  /* 1125F4 8018DEB4 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 1125F8 8018DEB8 00004012 */      mflo $t0
  /* 1125FC 8018DEBC 04610003 */      bgez $v1, .L8018DECC
  /* 112600 8018DEC0 00034843 */       sra $t1, $v1, 1
  /* 112604 8018DEC4 24610001 */     addiu $at, $v1, 1
  /* 112608 8018DEC8 00014843 */       sra $t1, $at, 1
  .L8018DECC:
  /* 11260C 8018DECC 01095023 */      subu $t2, $t0, $t1
  /* 112610 8018DED0 254B001E */     addiu $t3, $t2, 0x1e
  /* 112614 8018DED4 448B2000 */      mtc1 $t3, $f4
  /* 112618 8018DED8 00000000 */       nop 
  /* 11261C 8018DEDC 468021A0 */   cvt.s.w $f6, $f4
  /* 112620 8018DEE0 E4460058 */      swc1 $f6, 0x58($v0)
  /* 112624 8018DEE4 05810003 */      bgez $t4, .L8018DEF4
  /* 112628 8018DEE8 000C6843 */       sra $t5, $t4, 1
  /* 11262C 8018DEEC 25810001 */     addiu $at, $t4, 1
  /* 112630 8018DEF0 00016843 */       sra $t5, $at, 1
  .L8018DEF4:
  /* 112634 8018DEF4 02AD7023 */      subu $t6, $s5, $t5
  /* 112638 8018DEF8 448E4000 */      mtc1 $t6, $f8
  /* 11263C 8018DEFC 00000000 */       nop 
  /* 112640 8018DF00 468042A0 */   cvt.s.w $f10, $f8
  /* 112644 8018DF04 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 112648 8018DF08 926F000C */       lbu $t7, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 11264C 8018DF0C 020F082A */       slt $at, $s0, $t7
  /* 112650 8018DF10 5420FFE1 */      bnel $at, $zero, .L8018DE98
  /* 112654 8018DF14 02202025 */        or $a0, $s1, $zero
  .L8018DF18:
  /* 112658 8018DF18 8FBF0034 */        lw $ra, 0x34($sp)
  /* 11265C 8018DF1C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 112660 8018DF20 8FB10020 */        lw $s1, 0x20($sp)
  /* 112664 8018DF24 8FB20024 */        lw $s2, 0x24($sp)
  /* 112668 8018DF28 8FB30028 */        lw $s3, 0x28($sp)
  /* 11266C 8018DF2C 8FB4002C */        lw $s4, 0x2c($sp)
  /* 112670 8018DF30 8FB50030 */        lw $s5, 0x30($sp)
  /* 112674 8018DF34 03E00008 */        jr $ra
  /* 112678 8018DF38 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl6_8018DF3C
  /* 11267C 8018DF3C 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 112680 8018DF40 AFB0001C */        sw $s0, 0x1c($sp)
  /* 112684 8018DF44 3C100000 */       lui $s0, %hi(D_NF_00000097)
  /* 112688 8018DF48 AFBF0034 */        sw $ra, 0x34($sp)
  /* 11268C 8018DF4C 26100097 */     addiu $s0, $s0, %lo(D_NF_00000097)
  /* 112690 8018DF50 AFB50030 */        sw $s5, 0x30($sp)
  /* 112694 8018DF54 AFB4002C */        sw $s4, 0x2c($sp)
  /* 112698 8018DF58 AFB30028 */        sw $s3, 0x28($sp)
  /* 11269C 8018DF5C AFB20024 */        sw $s2, 0x24($sp)
  /* 1126A0 8018DF60 AFB10020 */        sw $s1, 0x20($sp)
  /* 1126A4 8018DF64 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 1126A8 8018DF68 02002025 */        or $a0, $s0, $zero
  /* 1126AC 8018DF6C 00402025 */        or $a0, $v0, $zero
  /* 1126B0 8018DF70 0C001260 */       jal hal_alloc
  /* 1126B4 8018DF74 24050010 */     addiu $a1, $zero, 0x10
  /* 1126B8 8018DF78 02002025 */        or $a0, $s0, $zero
  /* 1126BC 8018DF7C 0C033722 */       jal rldm_get_file_with_external_heap
  /* 1126C0 8018DF80 00402825 */        or $a1, $v0, $zero
  /* 1126C4 8018DF84 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 1126C8 8018DF88 0040A025 */        or $s4, $v0, $zero
  /* 1126CC 8018DF8C 02003825 */        or $a3, $s0, $zero
  /* 1126D0 8018DF90 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 1126D4 8018DF94 00002825 */        or $a1, $zero, $zero
  /* 1126D8 8018DF98 0C00265A */       jal omMakeGObjCommon
  /* 1126DC 8018DF9C 2406000B */     addiu $a2, $zero, 0xb
  /* 1126E0 8018DFA0 3C138013 */       lui $s3, %hi(D_ovl2_801313F0)
  /* 1126E4 8018DFA4 267313F0 */     addiu $s3, $s3, %lo(D_ovl2_801313F0)
  /* 1126E8 8018DFA8 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1126EC 8018DFAC 240EFFFF */     addiu $t6, $zero, -1
  /* 1126F0 8018DFB0 AE62000C */        sw $v0, 0xc($s3) # D_ovl2_801313F0 + 12
  /* 1126F4 8018DFB4 00408825 */        or $s1, $v0, $zero
  /* 1126F8 8018DFB8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1126FC 8018DFBC 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 112700 8018DFC0 00402025 */        or $a0, $v0, $zero
  /* 112704 8018DFC4 24060017 */     addiu $a2, $zero, 0x17
  /* 112708 8018DFC8 0C00277D */       jal func_80009DF4
  /* 11270C 8018DFCC 02003825 */        or $a3, $s0, $zero
  /* 112710 8018DFD0 926F0010 */       lbu $t7, 0x10($s3) # D_ovl2_801313F0 + 16
  /* 112714 8018DFD4 3C180000 */       lui $t8, %hi(D_NF_000000C0)
  /* 112718 8018DFD8 271800C0 */     addiu $t8, $t8, %lo(D_NF_000000C0)
  /* 11271C 8018DFDC 19E00025 */      blez $t7, .L8018E074
  /* 112720 8018DFE0 00008025 */        or $s0, $zero, $zero
  /* 112724 8018DFE4 02989021 */      addu $s2, $s4, $t8
  /* 112728 8018DFE8 24140201 */     addiu $s4, $zero, 0x201
  /* 11272C 8018DFEC 2415001E */     addiu $s5, $zero, 0x1e
  /* 112730 8018DFF0 02202025 */        or $a0, $s1, $zero
  .L8018DFF4:
  /* 112734 8018DFF4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 112738 8018DFF8 02402825 */        or $a1, $s2, $zero
  /* 11273C 8018DFFC 84430014 */        lh $v1, 0x14($v0)
  /* 112740 8018E000 844C0016 */        lh $t4, 0x16($v0)
  /* 112744 8018E004 A4540024 */        sh $s4, 0x24($v0)
  /* 112748 8018E008 24790003 */     addiu $t9, $v1, 3
  /* 11274C 8018E00C 03300019 */     multu $t9, $s0
  /* 112750 8018E010 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 112754 8018E014 00004012 */      mflo $t0
  /* 112758 8018E018 04610003 */      bgez $v1, .L8018E028
  /* 11275C 8018E01C 00034843 */       sra $t1, $v1, 1
  /* 112760 8018E020 24610001 */     addiu $at, $v1, 1
  /* 112764 8018E024 00014843 */       sra $t1, $at, 1
  .L8018E028:
  /* 112768 8018E028 01095023 */      subu $t2, $t0, $t1
  /* 11276C 8018E02C 254B001E */     addiu $t3, $t2, 0x1e
  /* 112770 8018E030 448B2000 */      mtc1 $t3, $f4
  /* 112774 8018E034 00000000 */       nop 
  /* 112778 8018E038 468021A0 */   cvt.s.w $f6, $f4
  /* 11277C 8018E03C E4460058 */      swc1 $f6, 0x58($v0)
  /* 112780 8018E040 05810003 */      bgez $t4, .L8018E050
  /* 112784 8018E044 000C6843 */       sra $t5, $t4, 1
  /* 112788 8018E048 25810001 */     addiu $at, $t4, 1
  /* 11278C 8018E04C 00016843 */       sra $t5, $at, 1
  .L8018E050:
  /* 112790 8018E050 02AD7023 */      subu $t6, $s5, $t5
  /* 112794 8018E054 448E4000 */      mtc1 $t6, $f8
  /* 112798 8018E058 00000000 */       nop 
  /* 11279C 8018E05C 468042A0 */   cvt.s.w $f10, $f8
  /* 1127A0 8018E060 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 1127A4 8018E064 926F0010 */       lbu $t7, 0x10($s3) # D_ovl2_801313F0 + 16
  /* 1127A8 8018E068 020F082A */       slt $at, $s0, $t7
  /* 1127AC 8018E06C 5420FFE1 */      bnel $at, $zero, .L8018DFF4
  /* 1127B0 8018E070 02202025 */        or $a0, $s1, $zero
  .L8018E074:
  /* 1127B4 8018E074 8FBF0034 */        lw $ra, 0x34($sp)
  /* 1127B8 8018E078 8FB0001C */        lw $s0, 0x1c($sp)
  /* 1127BC 8018E07C 8FB10020 */        lw $s1, 0x20($sp)
  /* 1127C0 8018E080 8FB20024 */        lw $s2, 0x24($sp)
  /* 1127C4 8018E084 8FB30028 */        lw $s3, 0x28($sp)
  /* 1127C8 8018E088 8FB4002C */        lw $s4, 0x2c($sp)
  /* 1127CC 8018E08C 8FB50030 */        lw $s5, 0x30($sp)
  /* 1127D0 8018E090 03E00008 */        jr $ra
  /* 1127D4 8018E094 27BD0038 */     addiu $sp, $sp, 0x38

glabel func_ovl6_8018E098
  /* 1127D8 8018E098 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 1127DC 8018E09C 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 1127E0 8018E0A0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1127E4 8018E0A4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1127E8 8018E0A8 91CF0001 */       lbu $t7, 1($t6)
  /* 1127EC 8018E0AC 29E1001D */      slti $at, $t7, 0x1d
  /* 1127F0 8018E0B0 14200005 */      bnez $at, .L8018E0C8
  /* 1127F4 8018E0B4 00000000 */       nop 
  /* 1127F8 8018E0B8 0C0637CF */       jal func_ovl6_8018DF3C
  /* 1127FC 8018E0BC 00000000 */       nop 
  /* 112800 8018E0C0 10000004 */         b .L8018E0D4
  /* 112804 8018E0C4 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018E0C8:
  /* 112808 8018E0C8 0C063778 */       jal func_ovl6_8018DDE0
  /* 11280C 8018E0CC 00000000 */       nop 
  /* 112810 8018E0D0 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018E0D4:
  /* 112814 8018E0D4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 112818 8018E0D8 03E00008 */        jr $ra
  /* 11281C 8018E0DC 00000000 */       nop 

glabel func_ovl6_8018E0E0
  /* 112820 8018E0E0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 112824 8018E0E4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 112828 8018E0E8 AFA40020 */        sw $a0, 0x20($sp)
  /* 11282C 8018E0EC 24040021 */     addiu $a0, $zero, 0x21
  /* 112830 8018E0F0 0C03F205 */       jal func_ovl2_800FC814
  /* 112834 8018E0F4 27A5001C */     addiu $a1, $sp, 0x1c
  /* 112838 8018E0F8 8FA4001C */        lw $a0, 0x1c($sp)
  /* 11283C 8018E0FC 0C03F225 */       jal func_ovl2_800FC894
  /* 112840 8018E100 8FA50020 */        lw $a1, 0x20($sp)
  /* 112844 8018E104 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112848 8018E108 27BD0020 */     addiu $sp, $sp, 0x20
  /* 11284C 8018E10C 03E00008 */        jr $ra
  /* 112850 8018E110 00000000 */       nop 

glabel func_ovl6_8018E114
  /* 112854 8018E114 3C0E800A */       lui $t6, %hi(gpBattleState)
  /* 112858 8018E118 8DCE50E8 */        lw $t6, %lo(gpBattleState)($t6)
  /* 11285C 8018E11C 3C010003 */       lui $at, (0x34BC0 >> 16) # 216000
  /* 112860 8018E120 34214BC0 */       ori $at, $at, (0x34BC0 & 0xFFFF) # 216000
  /* 112864 8018E124 8DC20018 */        lw $v0, 0x18($t6)
  /* 112868 8018E128 8C830074 */        lw $v1, 0x74($a0)
  /* 11286C 8018E12C 00002825 */        or $a1, $zero, $zero
  /* 112870 8018E130 0041082B */      sltu $at, $v0, $at
  /* 112874 8018E134 14200003 */      bnez $at, .L8018E144
  /* 112878 8018E138 3C068019 */       lui $a2, %hi(D_ovl6_8018EFFC)
  /* 11287C 8018E13C 3C020003 */       lui $v0, (0x34BBF >> 16) # 215999
  /* 112880 8018E140 34424BBF */       ori $v0, $v0, (0x34BBF & 0xFFFF) # 215999
  .L8018E144:
  /* 112884 8018E144 44822000 */      mtc1 $v0, $f4 # 3.02679e-40 to cop1
  /* 112888 8018E148 24C6EFFC */     addiu $a2, $a2, %lo(D_ovl6_8018EFFC)
  /* 11288C 8018E14C 04410005 */      bgez $v0, .L8018E164
  /* 112890 8018E150 46802020 */   cvt.s.w $f0, $f4
  /* 112894 8018E154 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 112898 8018E158 44813000 */      mtc1 $at, $f6 # 4294967300.0 to cop1
  /* 11289C 8018E15C 00000000 */       nop 
  /* 1128A0 8018E160 46060000 */     add.s $f0, $f0, $f6
  .L8018E164:
  /* 1128A4 8018E164 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 1128A8 8018E168 44817000 */      mtc1 $at, $f14 # 30.0 to cop1
  /* 1128AC 8018E16C 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 1128B0 8018E170 3C078019 */       lui $a3, %hi(D_ovl6_8018F3A0)
  /* 1128B4 8018E174 3C0C8019 */       lui $t4, %hi(D_ovl6_8018F3A6)
  /* 1128B8 8018E178 3C0A8019 */       lui $t2, %hi(D_ovl6_8018F3A0)
  /* 1128BC 8018E17C 3C098019 */       lui $t1, %hi(D_ovl6_8018F014)
  /* 1128C0 8018E180 3C088013 */       lui $t0, %hi(D_ovl2_80130D40)
  /* 1128C4 8018E184 3C048013 */       lui $a0, %hi(D_ovl2_8012EE94)
  /* 1128C8 8018E188 44816000 */      mtc1 $at, $f12 # 0.5 to cop1
  /* 1128CC 8018E18C 2484EE94 */     addiu $a0, $a0, %lo(D_ovl2_8012EE94)
  /* 1128D0 8018E190 25080D40 */     addiu $t0, $t0, %lo(D_ovl2_80130D40)
  /* 1128D4 8018E194 2529F014 */     addiu $t1, $t1, %lo(D_ovl6_8018F014)
  /* 1128D8 8018E198 254AF3A0 */     addiu $t2, $t2, %lo(D_ovl6_8018F3A0)
  /* 1128DC 8018E19C 258CF3A6 */     addiu $t4, $t4, %lo(D_ovl6_8018F3A6)
  /* 1128E0 8018E1A0 24E7F3A0 */     addiu $a3, $a3, %lo(D_ovl6_8018F3A0)
  /* 1128E4 8018E1A4 240BFFFB */     addiu $t3, $zero, -5
  .L8018E1A8:
  /* 1128E8 8018E1A8 C4C20000 */      lwc1 $f2, ($a2) # D_ovl6_8018EFFC + 0
  /* 1128EC 8018E1AC 90F80000 */       lbu $t8, ($a3) # D_ovl6_8018F3A0 + 0
  /* 1128F0 8018E1B0 24C60004 */     addiu $a2, $a2, 4
  /* 1128F4 8018E1B4 46020203 */     div.s $f8, $f0, $f2
  /* 1128F8 8018E1B8 4600428D */ trunc.w.s $f10, $f8
  /* 1128FC 8018E1BC 44025000 */      mfc1 $v0, $f10
  /* 112900 8018E1C0 00000000 */       nop 
  /* 112904 8018E1C4 44828000 */      mtc1 $v0, $f16 # 3.02679e-40 to cop1
  /* 112908 8018E1C8 0002C880 */       sll $t9, $v0, 2
  /* 11290C 8018E1CC 00996821 */      addu $t5, $a0, $t9
  /* 112910 8018E1D0 468084A0 */   cvt.s.w $f18, $f16
  /* 112914 8018E1D4 46029102 */     mul.s $f4, $f18, $f2
  /* 112918 8018E1D8 10580029 */       beq $v0, $t8, .L8018E280
  /* 11291C 8018E1DC 46040001 */     sub.s $f0, $f0, $f4
  /* 112920 8018E1E0 8DAE0000 */        lw $t6, ($t5)
  /* 112924 8018E1E4 8D0F000C */        lw $t7, 0xc($t0) # D_ovl2_80130D40 + 12
  /* 112928 8018E1E8 01CFC021 */      addu $t8, $t6, $t7
  /* 11292C 8018E1EC 270F003C */     addiu $t7, $t8, 0x3c
  /* 112930 8018E1F0 00607025 */        or $t6, $v1, $zero
  .L8018E1F4:
  /* 112934 8018E1F4 8F0D0000 */        lw $t5, ($t8)
  /* 112938 8018E1F8 2718000C */     addiu $t8, $t8, 0xc
  /* 11293C 8018E1FC 25CE000C */     addiu $t6, $t6, 0xc
  /* 112940 8018E200 ADCD0004 */        sw $t5, 4($t6)
  /* 112944 8018E204 8F19FFF8 */        lw $t9, -8($t8)
  /* 112948 8018E208 ADD90008 */        sw $t9, 8($t6)
  /* 11294C 8018E20C 8F0DFFFC */        lw $t5, -4($t8)
  /* 112950 8018E210 170FFFF8 */       bne $t8, $t7, .L8018E1F4
  /* 112954 8018E214 ADCD000C */        sw $t5, 0xc($t6)
  /* 112958 8018E218 8F0D0000 */        lw $t5, ($t8)
  /* 11295C 8018E21C 01257821 */      addu $t7, $t1, $a1
  /* 112960 8018E220 ADCD0010 */        sw $t5, 0x10($t6)
  /* 112964 8018E224 8F190004 */        lw $t9, 4($t8)
  /* 112968 8018E228 ADD90014 */        sw $t9, 0x14($t6)
  /* 11296C 8018E22C 8DF80000 */        lw $t8, ($t7)
  /* 112970 8018E230 846E0014 */        lh $t6, 0x14($v1)
  /* 112974 8018E234 84790016 */        lh $t9, 0x16($v1)
  /* 112978 8018E238 44983000 */      mtc1 $t8, $f6
  /* 11297C 8018E23C 448E5000 */      mtc1 $t6, $f10
  /* 112980 8018E240 46803220 */   cvt.s.w $f8, $f6
  /* 112984 8018E244 44993000 */      mtc1 $t9, $f6
  /* 112988 8018E248 46805420 */   cvt.s.w $f16, $f10
  /* 11298C 8018E24C 468032A0 */   cvt.s.w $f10, $f6
  /* 112990 8018E250 460C8482 */     mul.s $f18, $f16, $f12
  /* 112994 8018E254 00000000 */       nop 
  /* 112998 8018E258 460C5402 */     mul.s $f16, $f10, $f12
  /* 11299C 8018E25C 46124101 */     sub.s $f4, $f8, $f18
  /* 1129A0 8018E260 E4640058 */      swc1 $f4, 0x58($v1)
  /* 1129A4 8018E264 46107201 */     sub.s $f8, $f14, $f16
  /* 1129A8 8018E268 E468005C */      swc1 $f8, 0x5c($v1)
  /* 1129AC 8018E26C 14EA0004 */       bne $a3, $t2, .L8018E280
  /* 1129B0 8018E270 A0E20000 */        sb $v0, ($a3) # D_ovl6_8018F3A0 + 0
  /* 1129B4 8018E274 946D0024 */       lhu $t5, 0x24($v1)
  /* 1129B8 8018E278 01AB7824 */       and $t7, $t5, $t3
  /* 1129BC 8018E27C A46F0024 */        sh $t7, 0x24($v1)
  .L8018E280:
  /* 1129C0 8018E280 24E70001 */     addiu $a3, $a3, 1
  /* 1129C4 8018E284 24A50004 */     addiu $a1, $a1, 4
  /* 1129C8 8018E288 14ECFFC7 */       bne $a3, $t4, .L8018E1A8
  /* 1129CC 8018E28C 8C630008 */        lw $v1, 8($v1)
  /* 1129D0 8018E290 03E00008 */        jr $ra
  /* 1129D4 8018E294 00000000 */       nop 

glabel func_ovl6_8018E298
  /* 1129D8 8018E298 240E0001 */     addiu $t6, $zero, 1
  /* 1129DC 8018E29C 3C018019 */       lui $at, %hi(D_ovl6_8018F3A8)
  /* 1129E0 8018E2A0 03E00008 */        jr $ra
  /* 1129E4 8018E2A4 AC2EF3A8 */        sw $t6, %lo(D_ovl6_8018F3A8)($at)

glabel func_ovl6_8018E2A8
  /* 1129E8 8018E2A8 3C0E8019 */       lui $t6, %hi(D_ovl6_8018F3A8)
  /* 1129EC 8018E2AC 8DCEF3A8 */        lw $t6, %lo(D_ovl6_8018F3A8)($t6)
  /* 1129F0 8018E2B0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1129F4 8018E2B4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1129F8 8018E2B8 11C00007 */      beqz $t6, .L8018E2D8
  /* 1129FC 8018E2BC AFA40018 */        sw $a0, 0x18($sp)
  /* 112A00 8018E2C0 0C045375 */       jal func_ovl2_80114DD4
  /* 112A04 8018E2C4 00000000 */       nop 
  /* 112A08 8018E2C8 3C018019 */       lui $at, %hi(D_ovl6_8018F3A8)
  /* 112A0C 8018E2CC AC20F3A8 */        sw $zero, %lo(D_ovl6_8018F3A8)($at)
  /* 112A10 8018E2D0 0C0026A1 */       jal omEjectGObjCommon
  /* 112A14 8018E2D4 8FA40018 */        lw $a0, 0x18($sp)
  .L8018E2D8:
  /* 112A18 8018E2D8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112A1C 8018E2DC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 112A20 8018E2E0 03E00008 */        jr $ra
  /* 112A24 8018E2E4 00000000 */       nop 

glabel func_ovl6_8018E2E8
  /* 112A28 8018E2E8 3C0E800A */       lui $t6, %hi((gSceneData + 0x1))
  /* 112A2C 8018E2EC 91CE4AD1 */       lbu $t6, %lo((gSceneData + 0x1))($t6)
  /* 112A30 8018E2F0 3C018019 */       lui $at, %hi(D_ovl6_8018F3A8)
  /* 112A34 8018E2F4 AC20F3A8 */        sw $zero, %lo(D_ovl6_8018F3A8)($at)
  /* 112A38 8018E2F8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 112A3C 8018E2FC 24010034 */     addiu $at, $zero, 0x34
  /* 112A40 8018E300 15C1000C */       bne $t6, $at, .L8018E334
  /* 112A44 8018E304 AFBF0014 */        sw $ra, 0x14($sp)
  /* 112A48 8018E308 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 112A4C 8018E30C 00002825 */        or $a1, $zero, $zero
  /* 112A50 8018E310 2406000B */     addiu $a2, $zero, 0xb
  /* 112A54 8018E314 0C00265A */       jal omMakeGObjCommon
  /* 112A58 8018E318 3C078000 */       lui $a3, 0x8000
  /* 112A5C 8018E31C 3C058019 */       lui $a1, %hi(func_ovl6_8018E2A8)
  /* 112A60 8018E320 24A5E2A8 */     addiu $a1, $a1, %lo(func_ovl6_8018E2A8)
  /* 112A64 8018E324 00402025 */        or $a0, $v0, $zero
  /* 112A68 8018E328 24060001 */     addiu $a2, $zero, 1
  /* 112A6C 8018E32C 0C002062 */       jal omAddGObjCommonProc
  /* 112A70 8018E330 00003825 */        or $a3, $zero, $zero
  .L8018E334:
  /* 112A74 8018E334 8FBF0014 */        lw $ra, 0x14($sp)
  /* 112A78 8018E338 27BD0018 */     addiu $sp, $sp, 0x18
  /* 112A7C 8018E33C 03E00008 */        jr $ra
  /* 112A80 8018E340 00000000 */       nop 

glabel func_ovl6_8018E344
  /* 112A84 8018E344 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 112A88 8018E348 3C0E800A */       lui $t6, %hi((gSceneData + 0x1))
  /* 112A8C 8018E34C 91CE4AD1 */       lbu $t6, %lo((gSceneData + 0x1))($t6)
  /* 112A90 8018E350 24010034 */     addiu $at, $zero, 0x34
  /* 112A94 8018E354 AFBF0044 */        sw $ra, 0x44($sp)
  /* 112A98 8018E358 AFB50040 */        sw $s5, 0x40($sp)
  /* 112A9C 8018E35C AFB4003C */        sw $s4, 0x3c($sp)
  /* 112AA0 8018E360 AFB30038 */        sw $s3, 0x38($sp)
  /* 112AA4 8018E364 AFB20034 */        sw $s2, 0x34($sp)
  /* 112AA8 8018E368 AFB10030 */        sw $s1, 0x30($sp)
  /* 112AAC 8018E36C AFB0002C */        sw $s0, 0x2c($sp)
  /* 112AB0 8018E370 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 112AB4 8018E374 11C10088 */       beq $t6, $at, .L8018E598
  /* 112AB8 8018E378 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 112ABC 8018E37C 0C044CE6 */       jal func_ovl2_80113398
  /* 112AC0 8018E380 00002025 */        or $a0, $zero, $zero
  /* 112AC4 8018E384 0C044BAF */       jal func_ovl2_80112EBC
  /* 112AC8 8018E388 00000000 */       nop 
  /* 112ACC 8018E38C 3C108000 */       lui $s0, 0x8000
  /* 112AD0 8018E390 02003825 */        or $a3, $s0, $zero
  /* 112AD4 8018E394 240403F8 */     addiu $a0, $zero, 0x3f8
  /* 112AD8 8018E398 00002825 */        or $a1, $zero, $zero
  /* 112ADC 8018E39C 0C00265A */       jal omMakeGObjCommon
  /* 112AE0 8018E3A0 2406000B */     addiu $a2, $zero, 0xb
  /* 112AE4 8018E3A4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 112AE8 8018E3A8 240FFFFF */     addiu $t7, $zero, -1
  /* 112AEC 8018E3AC 0040A025 */        or $s4, $v0, $zero
  /* 112AF0 8018E3B0 AFAF0010 */        sw $t7, 0x10($sp)
  /* 112AF4 8018E3B4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 112AF8 8018E3B8 00402025 */        or $a0, $v0, $zero
  /* 112AFC 8018E3BC 24060017 */     addiu $a2, $zero, 0x17
  /* 112B00 8018E3C0 0C00277D */       jal func_80009DF4
  /* 112B04 8018E3C4 02003825 */        or $a3, $s0, $zero
  /* 112B08 8018E3C8 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 112B0C 8018E3CC 4481B000 */      mtc1 $at, $f22 # 30.0 to cop1
  /* 112B10 8018E3D0 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 112B14 8018E3D4 3C130000 */       lui $s3, %hi(D_NF_00000138)
  /* 112B18 8018E3D8 3C118019 */       lui $s1, %hi(D_ovl6_8018F014)
  /* 112B1C 8018E3DC 3C108019 */       lui $s0, %hi(D_ovl6_8018F3A0)
  /* 112B20 8018E3E0 3C158019 */       lui $s5, %hi(D_ovl6_8018F3A6)
  /* 112B24 8018E3E4 3C128013 */       lui $s2, %hi(D_ovl2_80130D40)
  /* 112B28 8018E3E8 4481A000 */      mtc1 $at, $f20 # 0.5 to cop1
  /* 112B2C 8018E3EC 26520D40 */     addiu $s2, $s2, %lo(D_ovl2_80130D40)
  /* 112B30 8018E3F0 26B5F3A6 */     addiu $s5, $s5, %lo(D_ovl6_8018F3A6)
  /* 112B34 8018E3F4 2610F3A0 */     addiu $s0, $s0, %lo(D_ovl6_8018F3A0)
  /* 112B38 8018E3F8 2631F014 */     addiu $s1, $s1, %lo(D_ovl6_8018F014)
  /* 112B3C 8018E3FC 26730138 */     addiu $s3, $s3, %lo(D_NF_00000138)
  .L8018E400:
  /* 112B40 8018E400 8E58000C */        lw $t8, 0xc($s2) # D_ovl2_80130D40 + 12
  /* 112B44 8018E404 02802025 */        or $a0, $s4, $zero
  /* 112B48 8018E408 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 112B4C 8018E40C 03132821 */      addu $a1, $t8, $s3
  /* 112B50 8018E410 8E390000 */        lw $t9, ($s1) # D_ovl6_8018F014 + 0
  /* 112B54 8018E414 84480014 */        lh $t0, 0x14($v0)
  /* 112B58 8018E418 84490016 */        lh $t1, 0x16($v0)
  /* 112B5C 8018E41C 44992000 */      mtc1 $t9, $f4
  /* 112B60 8018E420 44884000 */      mtc1 $t0, $f8
  /* 112B64 8018E424 26100001 */     addiu $s0, $s0, 1
  /* 112B68 8018E428 468021A0 */   cvt.s.w $f6, $f4
  /* 112B6C 8018E42C 44892000 */      mtc1 $t1, $f4
  /* 112B70 8018E430 26310004 */     addiu $s1, $s1, 4
  /* 112B74 8018E434 468042A0 */   cvt.s.w $f10, $f8
  /* 112B78 8018E438 46802220 */   cvt.s.w $f8, $f4
  /* 112B7C 8018E43C 46145402 */     mul.s $f16, $f10, $f20
  /* 112B80 8018E440 00000000 */       nop 
  /* 112B84 8018E444 46144282 */     mul.s $f10, $f8, $f20
  /* 112B88 8018E448 46103481 */     sub.s $f18, $f6, $f16
  /* 112B8C 8018E44C E4520058 */      swc1 $f18, 0x58($v0)
  /* 112B90 8018E450 460AB181 */     sub.s $f6, $f22, $f10
  /* 112B94 8018E454 E446005C */      swc1 $f6, 0x5c($v0)
  /* 112B98 8018E458 1615FFE9 */       bne $s0, $s5, .L8018E400
  /* 112B9C 8018E45C A200FFFF */        sb $zero, -1($s0) # D_ovl6_8018F3A0 + -1
  /* 112BA0 8018E460 8E820074 */        lw $v0, 0x74($s4)
  /* 112BA4 8018E464 3C0D0000 */       lui $t5, %hi(D_NF_00001140)
  /* 112BA8 8018E468 25AD1140 */     addiu $t5, $t5, %lo(D_NF_00001140)
  /* 112BAC 8018E46C 944A0024 */       lhu $t2, 0x24($v0)
  /* 112BB0 8018E470 02802025 */        or $a0, $s4, $zero
  /* 112BB4 8018E474 354B0004 */       ori $t3, $t2, 4
  /* 112BB8 8018E478 A44B0024 */        sh $t3, 0x24($v0)
  /* 112BBC 8018E47C 8E4C000C */        lw $t4, 0xc($s2) # D_ovl2_80130D40 + 12
  /* 112BC0 8018E480 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 112BC4 8018E484 018D2821 */      addu $a1, $t4, $t5
  /* 112BC8 8018E488 844E0014 */        lh $t6, 0x14($v0)
  /* 112BCC 8018E48C 3C0141A0 */       lui $at, (0x41A00000 >> 16) # 20.0
  /* 112BD0 8018E490 4481B000 */      mtc1 $at, $f22 # 20.0 to cop1
  /* 112BD4 8018E494 448E9000 */      mtc1 $t6, $f18
  /* 112BD8 8018E498 3C014367 */       lui $at, (0x43670000 >> 16) # 231.0
  /* 112BDC 8018E49C 44818000 */      mtc1 $at, $f16 # 231.0 to cop1
  /* 112BE0 8018E4A0 46809120 */   cvt.s.w $f4, $f18
  /* 112BE4 8018E4A4 84590016 */        lh $t9, 0x16($v0)
  /* 112BE8 8018E4A8 3C0B0000 */       lui $t3, %hi(D_NF_00001238)
  /* 112BEC 8018E4AC 256B1238 */     addiu $t3, $t3, %lo(D_NF_00001238)
  /* 112BF0 8018E4B0 02802025 */        or $a0, $s4, $zero
  /* 112BF4 8018E4B4 46142202 */     mul.s $f8, $f4, $f20
  /* 112BF8 8018E4B8 46088281 */     sub.s $f10, $f16, $f8
  /* 112BFC 8018E4BC 44998000 */      mtc1 $t9, $f16
  /* 112C00 8018E4C0 00000000 */       nop 
  /* 112C04 8018E4C4 46808220 */   cvt.s.w $f8, $f16
  /* 112C08 8018E4C8 4600518D */ trunc.w.s $f6, $f10
  /* 112C0C 8018E4CC 46144282 */     mul.s $f10, $f8, $f20
  /* 112C10 8018E4D0 44183000 */      mfc1 $t8, $f6
  /* 112C14 8018E4D4 00000000 */       nop 
  /* 112C18 8018E4D8 44989000 */      mtc1 $t8, $f18
  /* 112C1C 8018E4DC 460AB181 */     sub.s $f6, $f22, $f10
  /* 112C20 8018E4E0 46809120 */   cvt.s.w $f4, $f18
  /* 112C24 8018E4E4 4600348D */ trunc.w.s $f18, $f6
  /* 112C28 8018E4E8 E4440058 */      swc1 $f4, 0x58($v0)
  /* 112C2C 8018E4EC 44099000 */      mfc1 $t1, $f18
  /* 112C30 8018E4F0 00000000 */       nop 
  /* 112C34 8018E4F4 44892000 */      mtc1 $t1, $f4
  /* 112C38 8018E4F8 00000000 */       nop 
  /* 112C3C 8018E4FC 46802420 */   cvt.s.w $f16, $f4
  /* 112C40 8018E500 E450005C */      swc1 $f16, 0x5c($v0)
  /* 112C44 8018E504 8E4A000C */        lw $t2, 0xc($s2) # D_ovl2_80130D40 + 12
  /* 112C48 8018E508 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 112C4C 8018E50C 014B2821 */      addu $a1, $t2, $t3
  /* 112C50 8018E510 844C0014 */        lh $t4, 0x14($v0)
  /* 112C54 8018E514 3C014384 */       lui $at, (0x43840000 >> 16) # 264.0
  /* 112C58 8018E518 44814000 */      mtc1 $at, $f8 # 264.0 to cop1
  /* 112C5C 8018E51C 448C5000 */      mtc1 $t4, $f10
  /* 112C60 8018E520 844F0016 */        lh $t7, 0x16($v0)
  /* 112C64 8018E524 3C058019 */       lui $a1, %hi(func_ovl6_8018E114)
  /* 112C68 8018E528 468051A0 */   cvt.s.w $f6, $f10
  /* 112C6C 8018E52C 24A5E114 */     addiu $a1, $a1, %lo(func_ovl6_8018E114)
  /* 112C70 8018E530 02802025 */        or $a0, $s4, $zero
  /* 112C74 8018E534 24060001 */     addiu $a2, $zero, 1
  /* 112C78 8018E538 24070005 */     addiu $a3, $zero, 5
  /* 112C7C 8018E53C 46143482 */     mul.s $f18, $f6, $f20
  /* 112C80 8018E540 46124101 */     sub.s $f4, $f8, $f18
  /* 112C84 8018E544 448F4000 */      mtc1 $t7, $f8
  /* 112C88 8018E548 00000000 */       nop 
  /* 112C8C 8018E54C 468044A0 */   cvt.s.w $f18, $f8
  /* 112C90 8018E550 4600240D */ trunc.w.s $f16, $f4
  /* 112C94 8018E554 46149102 */     mul.s $f4, $f18, $f20
  /* 112C98 8018E558 440E8000 */      mfc1 $t6, $f16
  /* 112C9C 8018E55C 00000000 */       nop 
  /* 112CA0 8018E560 448E5000 */      mtc1 $t6, $f10
  /* 112CA4 8018E564 4604B401 */     sub.s $f16, $f22, $f4
  /* 112CA8 8018E568 468051A0 */   cvt.s.w $f6, $f10
  /* 112CAC 8018E56C 4600828D */ trunc.w.s $f10, $f16
  /* 112CB0 8018E570 E4460058 */      swc1 $f6, 0x58($v0)
  /* 112CB4 8018E574 44195000 */      mfc1 $t9, $f10
  /* 112CB8 8018E578 00000000 */       nop 
  /* 112CBC 8018E57C 44993000 */      mtc1 $t9, $f6
  /* 112CC0 8018E580 00000000 */       nop 
  /* 112CC4 8018E584 46803220 */   cvt.s.w $f8, $f6
  /* 112CC8 8018E588 0C002062 */       jal omAddGObjCommonProc
  /* 112CCC 8018E58C E448005C */      swc1 $f8, 0x5c($v0)
  /* 112CD0 8018E590 10000007 */         b .L8018E5B0
  /* 112CD4 8018E594 8FBF0044 */        lw $ra, 0x44($sp)
  .L8018E598:
  /* 112CD8 8018E598 3C048019 */       lui $a0, %hi(func_ovl6_8018E298)
  /* 112CDC 8018E59C 0C044CE6 */       jal func_ovl2_80113398
  /* 112CE0 8018E5A0 2484E298 */     addiu $a0, $a0, %lo(func_ovl6_8018E298)
  /* 112CE4 8018E5A4 0C044BDA */       jal func_ovl2_80112F68
  /* 112CE8 8018E5A8 00000000 */       nop 
  /* 112CEC 8018E5AC 8FBF0044 */        lw $ra, 0x44($sp)
  .L8018E5B0:
  /* 112CF0 8018E5B0 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 112CF4 8018E5B4 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 112CF8 8018E5B8 8FB0002C */        lw $s0, 0x2c($sp)
  /* 112CFC 8018E5BC 8FB10030 */        lw $s1, 0x30($sp)
  /* 112D00 8018E5C0 8FB20034 */        lw $s2, 0x34($sp)
  /* 112D04 8018E5C4 8FB30038 */        lw $s3, 0x38($sp)
  /* 112D08 8018E5C8 8FB4003C */        lw $s4, 0x3c($sp)
  /* 112D0C 8018E5CC 8FB50040 */        lw $s5, 0x40($sp)
  /* 112D10 8018E5D0 03E00008 */        jr $ra
  /* 112D14 8018E5D4 27BD0048 */     addiu $sp, $sp, 0x48

glabel func_ovl6_8018E5D8
  /* 112D18 8018E5D8 3C028013 */       lui $v0, %hi(D_ovl2_80131580)
  /* 112D1C 8018E5DC 3C0E8019 */       lui $t6, %hi(D_ovl6_8018F02C)
  /* 112D20 8018E5E0 24421580 */     addiu $v0, $v0, %lo(D_ovl2_80131580)
  /* 112D24 8018E5E4 25CEF02C */     addiu $t6, $t6, %lo(D_ovl6_8018F02C)
  /* 112D28 8018E5E8 240F00D2 */     addiu $t7, $zero, 0xd2
  /* 112D2C 8018E5EC AC4E0008 */        sw $t6, 8($v0) # D_ovl2_80131580 + 8
  /* 112D30 8018E5F0 03E00008 */        jr $ra
  /* 112D34 8018E5F4 A44F000C */        sh $t7, 0xc($v0) # D_ovl2_80131580 + 12

glabel func_ovl6_8018E5F8
  /* 112D38 8018E5F8 27BDFF78 */     addiu $sp, $sp, -0x88
  /* 112D3C 8018E5FC AFBF0024 */        sw $ra, 0x24($sp)
  /* 112D40 8018E600 0C06343C */       jal func_ovl6_8018D0F0
  /* 112D44 8018E604 00000000 */       nop 
  /* 112D48 8018E608 0C063B5C */       jal func_ovl6_8018ED70
  /* 112D4C 8018E60C 00000000 */       nop 
  /* 112D50 8018E610 0C0634CC */       jal func_ovl6_8018D330
  /* 112D54 8018E614 00000000 */       nop 
  /* 112D58 8018E618 240E00FF */     addiu $t6, $zero, 0xff
  /* 112D5C 8018E61C AFAE0010 */        sw $t6, 0x10($sp)
  /* 112D60 8018E620 24040009 */     addiu $a0, $zero, 9
  /* 112D64 8018E624 3C058000 */       lui $a1, 0x8000
  /* 112D68 8018E628 24060064 */     addiu $a2, $zero, 0x64
  /* 112D6C 8018E62C 0C002E7F */       jal func_8000B9FC
  /* 112D70 8018E630 24070001 */     addiu $a3, $zero, 1
  /* 112D74 8018E634 0C045624 */       jal func_ovl2_80115890
  /* 112D78 8018E638 00000000 */       nop 
  /* 112D7C 8018E63C 0C03B04C */       jal func_ovl2_800EC130
  /* 112D80 8018E640 00000000 */       nop 
  /* 112D84 8018E644 0C03F0A1 */       jal func_ovl2_800FC284
  /* 112D88 8018E648 00000000 */       nop 
  /* 112D8C 8018E64C 2404000A */     addiu $a0, $zero, 0xa
  /* 112D90 8018E650 2405000A */     addiu $a1, $zero, 0xa
  /* 112D94 8018E654 24060136 */     addiu $a2, $zero, 0x136
  /* 112D98 8018E658 0C043966 */       jal func_ovl2_8010E598
  /* 112D9C 8018E65C 240700E6 */     addiu $a3, $zero, 0xe6
  /* 112DA0 8018E660 0C0436D5 */       jal func_ovl2_8010DB54
  /* 112DA4 8018E664 00000000 */       nop 
  /* 112DA8 8018E668 0C0412F7 */       jal func_ovl2_80104BDC
  /* 112DAC 8018E66C 00000000 */       nop 
  /* 112DB0 8018E670 0C0436C0 */       jal func_ovl2_8010DB00
  /* 112DB4 8018E674 00000000 */       nop 
  /* 112DB8 8018E678 0C05B7A8 */       jal itManager_AllocUserData
  /* 112DBC 8018E67C 00000000 */       nop 
  /* 112DC0 8018E680 0C041580 */       jal func_ovl2_80105600
  /* 112DC4 8018E684 00000000 */       nop 
  /* 112DC8 8018E688 24040002 */     addiu $a0, $zero, 2
  /* 112DCC 8018E68C 0C035C65 */       jal func_ovl2_800D7194
  /* 112DD0 8018E690 24050004 */     addiu $a1, $zero, 4
  /* 112DD4 8018E694 0C05952C */       jal wpManager_AllocUserData
  /* 112DD8 8018E698 00000000 */       nop 
  /* 112DDC 8018E69C 0C03F4C0 */       jal efManager_AllocUserData
  /* 112DE0 8018E6A0 00000000 */       nop 
  /* 112DE4 8018E6A4 0C04577A */       jal func_ovl2_80115DE8
  /* 112DE8 8018E6A8 240400FF */     addiu $a0, $zero, 0xff
  /* 112DEC 8018E6AC 0C0455B9 */       jal func_ovl2_801156E4
  /* 112DF0 8018E6B0 00000000 */       nop 
  /* 112DF4 8018E6B4 0C0594F8 */       jal func_ovl3_801653E0
  /* 112DF8 8018E6B8 00000000 */       nop 
  /* 112DFC 8018E6BC 3C188011 */       lui $t8, %hi(D_ovl2_80116DD0)
  /* 112E00 8018E6C0 27186DD0 */     addiu $t8, $t8, %lo(D_ovl2_80116DD0)
  /* 112E04 8018E6C4 2709003C */     addiu $t1, $t8, 0x3c
  /* 112E08 8018E6C8 00003025 */        or $a2, $zero, $zero
  /* 112E0C 8018E6CC 27AF0034 */     addiu $t7, $sp, 0x34
  .L8018E6D0:
  /* 112E10 8018E6D0 8F080000 */        lw $t0, ($t8) # D_ovl2_80116DD0 + 0
  /* 112E14 8018E6D4 2718000C */     addiu $t8, $t8, 0xc
  /* 112E18 8018E6D8 25EF000C */     addiu $t7, $t7, 0xc
  /* 112E1C 8018E6DC ADE8FFF4 */        sw $t0, -0xc($t7)
  /* 112E20 8018E6E0 8F19FFF8 */        lw $t9, -8($t8) # D_ovl2_80116DD0 + -8
  /* 112E24 8018E6E4 ADF9FFF8 */        sw $t9, -8($t7)
  /* 112E28 8018E6E8 8F08FFFC */        lw $t0, -4($t8) # D_ovl2_80116DD0 + -4
  /* 112E2C 8018E6EC 1709FFF8 */       bne $t8, $t1, .L8018E6D0
  /* 112E30 8018E6F0 ADE8FFFC */        sw $t0, -4($t7)
  /* 112E34 8018E6F4 8F080000 */        lw $t0, ($t8) # D_ovl2_80116DD0 + 0
  /* 112E38 8018E6F8 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 112E3C 8018E6FC 00001825 */        or $v1, $zero, $zero
  /* 112E40 8018E700 ADE80000 */        sw $t0, ($t7)
  /* 112E44 8018E704 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 112E48 8018E708 24050004 */     addiu $a1, $zero, 4
  /* 112E4C 8018E70C 24040002 */     addiu $a0, $zero, 2
  .L8018E710:
  /* 112E50 8018E710 904A0022 */       lbu $t2, 0x22($v0)
  /* 112E54 8018E714 508A0039 */      beql $a0, $t2, .L8018E7FC
  /* 112E58 8018E718 24C60001 */     addiu $a2, $a2, 1
  /* 112E5C 8018E71C 90440023 */       lbu $a0, 0x23($v0)
  /* 112E60 8018E720 AFA60078 */        sw $a2, 0x78($sp)
  /* 112E64 8018E724 0C035E1B */       jal func_ovl2_800D786C
  /* 112E68 8018E728 AFA3002C */        sw $v1, 0x2c($sp)
  /* 112E6C 8018E72C 3C0B800A */       lui $t3, %hi(gpBattleState)
  /* 112E70 8018E730 8FA3002C */        lw $v1, 0x2c($sp)
  /* 112E74 8018E734 8D6B50E8 */        lw $t3, %lo(gpBattleState)($t3)
  /* 112E78 8018E738 27A40038 */     addiu $a0, $sp, 0x38
  /* 112E7C 8018E73C 01636021 */      addu $t4, $t3, $v1
  /* 112E80 8018E740 918D0023 */       lbu $t5, 0x23($t4)
  /* 112E84 8018E744 0C063838 */       jal func_ovl6_8018E0E0
  /* 112E88 8018E748 AFAD0034 */        sw $t5, 0x34($sp)
  /* 112E8C 8018E74C C7A40038 */      lwc1 $f4, 0x38($sp)
  /* 112E90 8018E750 44803000 */      mtc1 $zero, $f6
  /* 112E94 8018E754 8FA60078 */        lw $a2, 0x78($sp)
  /* 112E98 8018E758 8FA3002C */        lw $v1, 0x2c($sp)
  /* 112E9C 8018E75C 4604303E */    c.le.s $f6, $f4
  /* 112EA0 8018E760 00065080 */       sll $t2, $a2, 2
  /* 112EA4 8018E764 24180001 */     addiu $t8, $zero, 1
  /* 112EA8 8018E768 3C0F800A */       lui $t7, %hi(gpBattleState)
  /* 112EAC 8018E76C 45000004 */      bc1f .L8018E780
  /* 112EB0 8018E770 01465021 */      addu $t2, $t2, $a2
  /* 112EB4 8018E774 240EFFFF */     addiu $t6, $zero, -1
  /* 112EB8 8018E778 10000003 */         b .L8018E788
  /* 112EBC 8018E77C AFAE0044 */        sw $t6, 0x44($sp)
  .L8018E780:
  /* 112EC0 8018E780 24090001 */     addiu $t1, $zero, 1
  /* 112EC4 8018E784 AFA90044 */        sw $t1, 0x44($sp)
  .L8018E788:
  /* 112EC8 8018E788 8DEF50E8 */        lw $t7, %lo(gpBattleState)($t7)
  /* 112ECC 8018E78C A3A00048 */        sb $zero, 0x48($sp)
  /* 112ED0 8018E790 A3A60049 */        sb $a2, 0x49($sp)
  /* 112ED4 8018E794 A3B8004A */        sb $t8, 0x4a($sp)
  /* 112ED8 8018E798 01E31021 */      addu $v0, $t7, $v1
  /* 112EDC 8018E79C 90590026 */       lbu $t9, 0x26($v0)
  /* 112EE0 8018E7A0 3C0B8004 */       lui $t3, %hi(gContInput)
  /* 112EE4 8018E7A4 256B5228 */     addiu $t3, $t3, %lo(gContInput)
  /* 112EE8 8018E7A8 A3B9004B */        sb $t9, 0x4b($sp)
  /* 112EEC 8018E7AC 90480022 */       lbu $t0, 0x22($v0)
  /* 112EF0 8018E7B0 000A5040 */       sll $t2, $t2, 1
  /* 112EF4 8018E7B4 014B6021 */      addu $t4, $t2, $t3
  /* 112EF8 8018E7B8 AFAC0060 */        sw $t4, 0x60($sp)
  /* 112EFC 8018E7BC AFA8005C */        sw $t0, 0x5c($sp)
  /* 112F00 8018E7C0 90440023 */       lbu $a0, 0x23($v0)
  /* 112F04 8018E7C4 0C035E2D */       jal func_ovl2_800D78B4
  /* 112F08 8018E7C8 AFA60078 */        sw $a2, 0x78($sp)
  /* 112F0C 8018E7CC 93AE0053 */       lbu $t6, 0x53($sp)
  /* 112F10 8018E7D0 AFA2006C */        sw $v0, 0x6c($sp)
  /* 112F14 8018E7D4 27A40034 */     addiu $a0, $sp, 0x34
  /* 112F18 8018E7D8 35C90080 */       ori $t1, $t6, 0x80
  /* 112F1C 8018E7DC 0C035FCF */       jal ftManager_CreateFighter
  /* 112F20 8018E7E0 A3A90053 */        sb $t1, 0x53($sp)
  /* 112F24 8018E7E4 8FA40078 */        lw $a0, 0x78($sp)
  /* 112F28 8018E7E8 0C039F13 */       jal ftCommon_ClearPlayerMatchStats
  /* 112F2C 8018E7EC 00402825 */        or $a1, $v0, $zero
  /* 112F30 8018E7F0 10000005 */         b .L8018E808
  /* 112F34 8018E7F4 00000000 */       nop 
  /* 112F38 8018E7F8 24C60001 */     addiu $a2, $a2, 1
  .L8018E7FC:
  /* 112F3C 8018E7FC 24630074 */     addiu $v1, $v1, 0x74
  /* 112F40 8018E800 14C5FFC3 */       bne $a2, $a1, .L8018E710
  /* 112F44 8018E804 24420074 */     addiu $v0, $v0, 0x74
  .L8018E808:
  /* 112F48 8018E808 0C035E0B */       jal func_ovl2_800D782C
  /* 112F4C 8018E80C 00000000 */       nop 
  /* 112F50 8018E810 0C045256 */       jal func_ovl2_80114958
  /* 112F54 8018E814 00000000 */       nop 
  /* 112F58 8018E818 0C043771 */       jal func_ovl2_8010DDC4
  /* 112F5C 8018E81C 00000000 */       nop 
  /* 112F60 8018E820 0C0438DD */       jal func_ovl2_8010E374
  /* 112F64 8018E824 00000000 */       nop 
  /* 112F68 8018E828 0C043926 */       jal func_ovl2_8010E498
  /* 112F6C 8018E82C 00000000 */       nop 
  /* 112F70 8018E830 0C0446F9 */       jal func_ovl2_80111BE4
  /* 112F74 8018E834 00000000 */       nop 
  /* 112F78 8018E838 0C063976 */       jal func_ovl6_8018E5D8
  /* 112F7C 8018E83C 00000000 */       nop 
  /* 112F80 8018E840 0C043CF0 */       jal func_ovl2_8010F3C0
  /* 112F84 8018E844 00000000 */       nop 
  /* 112F88 8018E848 0C044145 */       jal func_ovl2_80110514
  /* 112F8C 8018E84C 00000000 */       nop 
  /* 112F90 8018E850 0C063826 */       jal func_ovl6_8018E098
  /* 112F94 8018E854 00000000 */       nop 
  /* 112F98 8018E858 0C063731 */       jal func_ovl6_8018DCC4
  /* 112F9C 8018E85C 00000000 */       nop 
  /* 112FA0 8018E860 0C03F0FA */       jal func_ovl2_800FC3E8
  /* 112FA4 8018E864 00000000 */       nop 
  /* 112FA8 8018E868 0C009A70 */       jal func_800269C0
  /* 112FAC 8018E86C 24040272 */     addiu $a0, $zero, 0x272
  /* 112FB0 8018E870 0C0638D1 */       jal func_ovl6_8018E344
  /* 112FB4 8018E874 00000000 */       nop 
  /* 112FB8 8018E878 0C063745 */       jal func_ovl6_8018DD14
  /* 112FBC 8018E87C 00000000 */       nop 
  /* 112FC0 8018E880 3C188019 */       lui $t8, %hi(D_ovl6_8018F03C)
  /* 112FC4 8018E884 2718F03C */     addiu $t8, $t8, %lo(D_ovl6_8018F03C)
  /* 112FC8 8018E888 8F190000 */        lw $t9, ($t8) # D_ovl6_8018F03C + 0
  /* 112FCC 8018E88C 27A70030 */     addiu $a3, $sp, 0x30
  /* 112FD0 8018E890 2408000C */     addiu $t0, $zero, 0xc
  /* 112FD4 8018E894 ACF90000 */        sw $t9, ($a3)
  /* 112FD8 8018E898 240A0001 */     addiu $t2, $zero, 1
  /* 112FDC 8018E89C AFAA0014 */        sw $t2, 0x14($sp)
  /* 112FE0 8018E8A0 AFA00018 */        sw $zero, 0x18($sp)
  /* 112FE4 8018E8A4 AFA80010 */        sw $t0, 0x10($sp)
  /* 112FE8 8018E8A8 240403FD */     addiu $a0, $zero, 0x3fd
  /* 112FEC 8018E8AC 2405000D */     addiu $a1, $zero, 0xd
  /* 112FF0 8018E8B0 0C035018 */       jal func_ovl0_800D4060
  /* 112FF4 8018E8B4 2406000A */     addiu $a2, $zero, 0xa
  /* 112FF8 8018E8B8 0C0638BA */       jal func_ovl6_8018E2E8
  /* 112FFC 8018E8BC 00000000 */       nop 
  /* 113000 8018E8C0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 113004 8018E8C4 27BD0088 */     addiu $sp, $sp, 0x88
  /* 113008 8018E8C8 03E00008 */        jr $ra
  /* 11300C 8018E8CC 00000000 */       nop 

glabel func_ovl6_8018E8D0
  /* 113010 8018E8D0 3C05800A */       lui $a1, %hi(gSceneData)
  /* 113014 8018E8D4 24A54AD0 */     addiu $a1, $a1, %lo(gSceneData)
  /* 113018 8018E8D8 90AF0013 */       lbu $t7, 0x13($a1) # gSceneData + 19
  /* 11301C 8018E8DC 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 113020 8018E8E0 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 113024 8018E8E4 000FC0C0 */       sll $t8, $t7, 3
  /* 113028 8018E8E8 030FC023 */      subu $t8, $t8, $t7
  /* 11302C 8018E8EC 0018C080 */       sll $t8, $t8, 2
  /* 113030 8018E8F0 030FC021 */      addu $t8, $t8, $t7
  /* 113034 8018E8F4 3C038013 */       lui $v1, %hi(D_ovl2_80130D6C)
  /* 113038 8018E8F8 0018C080 */       sll $t8, $t8, 2
  /* 11303C 8018E8FC 24630D6C */     addiu $v1, $v1, %lo(D_ovl2_80130D6C)
  /* 113040 8018E900 0058C821 */      addu $t9, $v0, $t8
  /* 113044 8018E904 8F280058 */        lw $t0, 0x58($t9)
  /* 113048 8018E908 8C6E0000 */        lw $t6, ($v1) # D_ovl2_80130D6C + 0
  /* 11304C 8018E90C 2401003C */     addiu $at, $zero, 0x3c
  /* 113050 8018E910 3C0D0004 */       lui $t5, 4
  /* 113054 8018E914 01C84821 */      addu $t1, $t6, $t0
  /* 113058 8018E918 10800006 */      beqz $a0, .L8018E934
  /* 11305C 8018E91C AC690000 */        sw $t1, ($v1) # D_ovl2_80130D6C + 0
  /* 113060 8018E920 ACA0001C */        sw $zero, 0x1c($a1) # gSceneData + 28
  /* 113064 8018E924 ACA0002C */        sw $zero, 0x2c($a1) # gSceneData + 44
  /* 113068 8018E928 ACA00030 */        sw $zero, 0x30($a1) # gSceneData + 48
  /* 11306C 8018E92C 03E00008 */        jr $ra
  /* 113070 8018E930 ACA00034 */        sw $zero, 0x34($a1) # gSceneData + 52

  .L8018E934:
  /* 113074 8018E934 8C4A0014 */        lw $t2, 0x14($v0)
  /* 113078 8018E938 ACAD002C */        sw $t5, 0x2c($a1)
  /* 11307C 8018E93C ACA00030 */        sw $zero, 0x30($a1)
  /* 113080 8018E940 254B003B */     addiu $t3, $t2, 0x3b
  /* 113084 8018E944 0161001B */      divu $zero, $t3, $at
  /* 113088 8018E948 00006012 */      mflo $t4
  /* 11308C 8018E94C ACAC001C */        sw $t4, 0x1c($a1)
  /* 113090 8018E950 ACA00034 */        sw $zero, 0x34($a1)
  /* 113094 8018E954 03E00008 */        jr $ra
  /* 113098 8018E958 00000000 */       nop 

glabel func_ovl6_8018E95C
  /* 11309C 8018E95C 3C07800A */       lui $a3, %hi(gSceneData)
  /* 1130A0 8018E960 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 1130A4 8018E964 90EE0012 */       lbu $t6, 0x12($a3) # gSceneData + 18
  /* 1130A8 8018E968 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1130AC 8018E96C AFBF0014 */        sw $ra, 0x14($sp)
  /* 1130B0 8018E970 15C0003F */      bnez $t6, .L8018EA70
  /* 1130B4 8018E974 00803025 */        or $a2, $a0, $zero
  /* 1130B8 8018E978 3C04800A */       lui $a0, %hi(gpBattleState)
  /* 1130BC 8018E97C 8C8450E8 */        lw $a0, %lo(gpBattleState)($a0)
  /* 1130C0 8018E980 908F0001 */       lbu $t7, 1($a0)
  /* 1130C4 8018E984 29E1001D */      slti $at, $t7, 0x1d
  /* 1130C8 8018E988 1020001E */      beqz $at, .L8018EA04
  /* 1130CC 8018E98C 00000000 */       nop 
  /* 1130D0 8018E990 10C0000E */      beqz $a2, .L8018E9CC
  /* 1130D4 8018E994 00054940 */       sll $t1, $a1, 5
  /* 1130D8 8018E998 3C19800A */       lui $t9, %hi(gSaveData)
  /* 1130DC 8018E99C 273944E0 */     addiu $t9, $t9, %lo(gSaveData)
  /* 1130E0 8018E9A0 0005C140 */       sll $t8, $a1, 5
  /* 1130E4 8018E9A4 03191021 */      addu $v0, $t8, $t9
  /* 1130E8 8018E9A8 90480470 */       lbu $t0, 0x470($v0)
  /* 1130EC 8018E9AC 90E30038 */       lbu $v1, 0x38($a3) # gSceneData + 56
  /* 1130F0 8018E9B0 0103082A */       slt $at, $t0, $v1
  /* 1130F4 8018E9B4 5020002F */      beql $at, $zero, .L8018EA74
  /* 1130F8 8018E9B8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1130FC 8018E9BC 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 113100 8018E9C0 A0430470 */        sb $v1, 0x470($v0)
  /* 113104 8018E9C4 1000002B */         b .L8018EA74
  /* 113108 8018E9C8 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018E9CC:
  /* 11310C 8018E9CC 3C0A800A */       lui $t2, %hi(gSaveData)
  /* 113110 8018E9D0 254A44E0 */     addiu $t2, $t2, %lo(gSaveData)
  /* 113114 8018E9D4 012A1021 */      addu $v0, $t1, $t2
  /* 113118 8018E9D8 240B000A */     addiu $t3, $zero, 0xa
  /* 11311C 8018E9DC A04B0470 */        sb $t3, 0x470($v0)
  /* 113120 8018E9E0 8C830018 */        lw $v1, 0x18($a0)
  /* 113124 8018E9E4 8C4C046C */        lw $t4, 0x46c($v0)
  /* 113128 8018E9E8 006C082B */      sltu $at, $v1, $t4
  /* 11312C 8018E9EC 50200021 */      beql $at, $zero, .L8018EA74
  /* 113130 8018E9F0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113134 8018E9F4 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 113138 8018E9F8 AC43046C */        sw $v1, 0x46c($v0)
  /* 11313C 8018E9FC 1000001D */         b .L8018EA74
  /* 113140 8018EA00 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018EA04:
  /* 113144 8018EA04 10C0000E */      beqz $a2, .L8018EA40
  /* 113148 8018EA08 0005C140 */       sll $t8, $a1, 5
  /* 11314C 8018EA0C 3C0E800A */       lui $t6, %hi(gSaveData)
  /* 113150 8018EA10 25CE44E0 */     addiu $t6, $t6, %lo(gSaveData)
  /* 113154 8018EA14 00056940 */       sll $t5, $a1, 5
  /* 113158 8018EA18 01AE1021 */      addu $v0, $t5, $t6
  /* 11315C 8018EA1C 904F0478 */       lbu $t7, 0x478($v0)
  /* 113160 8018EA20 90E30038 */       lbu $v1, 0x38($a3)
  /* 113164 8018EA24 01E3082A */       slt $at, $t7, $v1
  /* 113168 8018EA28 50200012 */      beql $at, $zero, .L8018EA74
  /* 11316C 8018EA2C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113170 8018EA30 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 113174 8018EA34 A0430478 */        sb $v1, 0x478($v0)
  /* 113178 8018EA38 1000000E */         b .L8018EA74
  /* 11317C 8018EA3C 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018EA40:
  /* 113180 8018EA40 3C19800A */       lui $t9, %hi(gSaveData)
  /* 113184 8018EA44 273944E0 */     addiu $t9, $t9, %lo(gSaveData)
  /* 113188 8018EA48 03191021 */      addu $v0, $t8, $t9
  /* 11318C 8018EA4C 2408000A */     addiu $t0, $zero, 0xa
  /* 113190 8018EA50 A0480478 */        sb $t0, 0x478($v0)
  /* 113194 8018EA54 8C830018 */        lw $v1, 0x18($a0)
  /* 113198 8018EA58 8C490474 */        lw $t1, 0x474($v0)
  /* 11319C 8018EA5C 0069082B */      sltu $at, $v1, $t1
  /* 1131A0 8018EA60 50200004 */      beql $at, $zero, .L8018EA74
  /* 1131A4 8018EA64 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1131A8 8018EA68 0C03517D */       jal lbMemory_SaveData_WriteSRAM
  /* 1131AC 8018EA6C AC430474 */        sw $v1, 0x474($v0)
  .L8018EA70:
  /* 1131B0 8018EA70 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018EA74:
  /* 1131B4 8018EA74 27BD0018 */     addiu $sp, $sp, 0x18
  /* 1131B8 8018EA78 03E00008 */        jr $ra
  /* 1131BC 8018EA7C 00000000 */       nop 

glabel func_ovl6_8018EA80
  /* 1131C0 8018EA80 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1131C4 8018EA84 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1131C8 8018EA88 8C830000 */        lw $v1, ($a0)
  /* 1131CC 8018EA8C 3C0FD9FF */       lui $t7, (0xD9FFFFFF >> 16) # 3657433087
  /* 1131D0 8018EA90 35EFFFFF */       ori $t7, $t7, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 1131D4 8018EA94 246E0008 */     addiu $t6, $v1, 8
  /* 1131D8 8018EA98 AC8E0000 */        sw $t6, ($a0)
  /* 1131DC 8018EA9C 3C180002 */       lui $t8, 2
  /* 1131E0 8018EAA0 3C058013 */       lui $a1, %hi(gMapLightAngleX)
  /* 1131E4 8018EAA4 3C068013 */       lui $a2, %hi(gMapLightAngleY)
  /* 1131E8 8018EAA8 AC780004 */        sw $t8, 4($v1)
  /* 1131EC 8018EAAC AC6F0000 */        sw $t7, ($v1)
  /* 1131F0 8018EAB0 8CC61394 */        lw $a2, %lo(gMapLightAngleY)($a2)
  /* 1131F4 8018EAB4 0C03F2DC */       jal func_ovl2_800FCB70
  /* 1131F8 8018EAB8 8CA51390 */        lw $a1, %lo(gMapLightAngleX)($a1)
  /* 1131FC 8018EABC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113200 8018EAC0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 113204 8018EAC4 03E00008 */        jr $ra
  /* 113208 8018EAC8 00000000 */       nop 

glabel bonus_game_play_entry
  /* 11320C 8018EACC 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 113210 8018EAD0 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 113214 8018EAD4 3C048019 */       lui $a0, %hi(D_ovl6_8018F080)
  /* 113218 8018EAD8 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 11321C 8018EADC 2484F080 */     addiu $a0, $a0, %lo(D_ovl6_8018F080)
  /* 113220 8018EAE0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113224 8018EAE4 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 113228 8018EAE8 0C001C09 */       jal func_80007024
  /* 11322C 8018EAEC AC8F000C */        sw $t7, 0xc($a0) # D_ovl6_8018F080 + 12
  /* 113230 8018EAF0 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 113234 8018EAF4 3C198019 */       lui $t9, %hi(D_NF_8018F710)
  /* 113238 8018EAF8 3C048019 */       lui $a0, %hi(D_ovl6_8018F09C)
  /* 11323C 8018EAFC 2739F710 */     addiu $t9, $t9, %lo(D_NF_8018F710)
  /* 113240 8018EB00 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 113244 8018EB04 3C098019 */       lui $t1, %hi(func_ovl6_8018E5F8)
  /* 113248 8018EB08 2484F09C */     addiu $a0, $a0, %lo(D_ovl6_8018F09C)
  /* 11324C 8018EB0C 03194023 */      subu $t0, $t8, $t9
  /* 113250 8018EB10 2529E5F8 */     addiu $t1, $t1, %lo(func_ovl6_8018E5F8)
  /* 113254 8018EB14 AC880010 */        sw $t0, 0x10($a0) # D_ovl6_8018F09C + 16
  /* 113258 8018EB18 0C001A0F */       jal func_8000683C
  /* 11325C 8018EB1C AC890088 */        sw $t1, 0x88($a0) # D_ovl6_8018F09C + 136
  /* 113260 8018EB20 0C00829D */       jal func_80020A74
  /* 113264 8018EB24 00000000 */       nop 
  /* 113268 8018EB28 0C008356 */       jal func_80020D58
  /* 11326C 8018EB2C 00002025 */        or $a0, $zero, $zero
  /* 113270 8018EB30 50400006 */      beql $v0, $zero, .L8018EB4C
  /* 113274 8018EB34 00002025 */        or $a0, $zero, $zero
  .L8018EB38:
  /* 113278 8018EB38 0C008356 */       jal func_80020D58
  /* 11327C 8018EB3C 00002025 */        or $a0, $zero, $zero
  /* 113280 8018EB40 1440FFFD */      bnez $v0, .L8018EB38
  /* 113284 8018EB44 00000000 */       nop 
  /* 113288 8018EB48 00002025 */        or $a0, $zero, $zero
  .L8018EB4C:
  /* 11328C 8018EB4C 0C0082CE */       jal func_80020B38
  /* 113290 8018EB50 24057800 */     addiu $a1, $zero, 0x7800
  /* 113294 8018EB54 0C0099A8 */       jal func_800266A0
  /* 113298 8018EB58 00000000 */       nop 
  /* 11329C 8018EB5C 0C0455FB */       jal func_ovl2_801157EC
  /* 1132A0 8018EB60 00000000 */       nop 
  /* 1132A4 8018EB64 3C02800A */       lui $v0, %hi(gpBattleState)
  /* 1132A8 8018EB68 8C4250E8 */        lw $v0, %lo(gpBattleState)($v0)
  /* 1132AC 8018EB6C 24010002 */     addiu $at, $zero, 2
  /* 1132B0 8018EB70 3C07800A */       lui $a3, %hi(gSceneData)
  /* 1132B4 8018EB74 904A0011 */       lbu $t2, 0x11($v0)
  /* 1132B8 8018EB78 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 1132BC 8018EB7C 2406000A */     addiu $a2, $zero, 0xa
  /* 1132C0 8018EB80 51410076 */      beql $t2, $at, .L8018ED5C
  /* 1132C4 8018EB84 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1132C8 8018EB88 904B0001 */       lbu $t3, 1($v0)
  /* 1132CC 8018EB8C 3C048013 */       lui $a0, 0x8013
  /* 1132D0 8018EB90 2961001D */      slti $at, $t3, 0x1d
  /* 1132D4 8018EB94 10200004 */      beqz $at, .L8018EBA8
  /* 1132D8 8018EB98 00000000 */       nop 
  /* 1132DC 8018EB9C 3C048013 */       lui $a0, %hi(D_ovl2_801313FC)
  /* 1132E0 8018EBA0 10000002 */         b .L8018EBAC
  /* 1132E4 8018EBA4 908413FC */       lbu $a0, %lo(D_ovl2_801313FC)($a0)
  .L8018EBA8:
  /* 1132E8 8018EBA8 90841400 */       lbu $a0, 0x1400($a0)
  .L8018EBAC:
  /* 1132EC 8018EBAC 00C41023 */      subu $v0, $a2, $a0
  /* 1132F0 8018EBB0 3C01800A */       lui $at, %hi((gSceneData + 0x38))
  /* 1132F4 8018EBB4 A0224B08 */        sb $v0, %lo((gSceneData + 0x38))($at)
  /* 1132F8 8018EBB8 90EC0001 */       lbu $t4, 1($a3) # gSceneData + 1
  /* 1132FC 8018EBBC 24010034 */     addiu $at, $zero, 0x34
  /* 113300 8018EBC0 5581000C */      bnel $t4, $at, .L8018EBF4
  /* 113304 8018EBC4 90E50039 */       lbu $a1, 0x39($a3) # gSceneData + 57
  /* 113308 8018EBC8 0C063A34 */       jal func_ovl6_8018E8D0
  /* 11330C 8018EBCC AFA40028 */        sw $a0, 0x28($sp)
  /* 113310 8018EBD0 3C07800A */       lui $a3, %hi(gSceneData)
  /* 113314 8018EBD4 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 113318 8018EBD8 8FA40028 */        lw $a0, 0x28($sp)
  /* 11331C 8018EBDC 0C063A57 */       jal func_ovl6_8018E95C
  /* 113320 8018EBE0 90E50014 */       lbu $a1, 0x14($a3) # gSceneData + 20
  /* 113324 8018EBE4 3C07800A */       lui $a3, %hi(gSceneData)
  /* 113328 8018EBE8 10000059 */         b .L8018ED50
  /* 11332C 8018EBEC 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 113330 8018EBF0 90E50039 */       lbu $a1, 0x39($a3) # gSceneData + 57
  .L8018EBF4:
  /* 113334 8018EBF4 0C063A57 */       jal func_ovl6_8018E95C
  /* 113338 8018EBF8 AFA2001C */        sw $v0, 0x1c($sp)
  /* 11333C 8018EBFC 3C07800A */       lui $a3, %hi(gSceneData)
  /* 113340 8018EC00 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 113344 8018EC04 90ED0001 */       lbu $t5, 1($a3) # gSceneData + 1
  /* 113348 8018EC08 24010013 */     addiu $at, $zero, 0x13
  /* 11334C 8018EC0C 8FA2001C */        lw $v0, 0x1c($sp)
  /* 113350 8018EC10 15A10042 */       bne $t5, $at, .L8018ED1C
  /* 113354 8018EC14 2406000A */     addiu $a2, $zero, 0xa
  /* 113358 8018EC18 240E0013 */     addiu $t6, $zero, 0x13
  /* 11335C 8018EC1C 2401000A */     addiu $at, $zero, 0xa
  /* 113360 8018EC20 1441004B */       bne $v0, $at, .L8018ED50
  /* 113364 8018EC24 A0EE0000 */        sb $t6, ($a3) # gSceneData + 0
  /* 113368 8018EC28 3C0F800A */       lui $t7, %hi((gSaveData + 0x457))
  /* 11336C 8018EC2C 91EF4937 */       lbu $t7, %lo((gSaveData + 0x457))($t7)
  /* 113370 8018EC30 00001825 */        or $v1, $zero, $zero
  /* 113374 8018EC34 00001025 */        or $v0, $zero, $zero
  /* 113378 8018EC38 31F80001 */      andi $t8, $t7, 1
  /* 11337C 8018EC3C 1700002D */      bnez $t8, .L8018ECF4
  /* 113380 8018EC40 3C04800A */       lui $a0, %hi(gSaveData)
  /* 113384 8018EC44 248444E0 */     addiu $a0, $a0, %lo(gSaveData)
  /* 113388 8018EC48 2405000C */     addiu $a1, $zero, 0xc
  .L8018EC4C:
  /* 11338C 8018EC4C 90990470 */       lbu $t9, 0x470($a0) # gSaveData + 1136
  /* 113390 8018EC50 24080001 */     addiu $t0, $zero, 1
  /* 113394 8018EC54 246B0001 */     addiu $t3, $v1, 1
  /* 113398 8018EC58 14D90003 */       bne $a2, $t9, .L8018EC68
  /* 11339C 8018EC5C 00684804 */      sllv $t1, $t0, $v1
  /* 1133A0 8018EC60 00491025 */        or $v0, $v0, $t1
  /* 1133A4 8018EC64 3042FFFF */      andi $v0, $v0, 0xffff
  .L8018EC68:
  /* 1133A8 8018EC68 908A0490 */       lbu $t2, 0x490($a0) # gSaveData + 1168
  /* 1133AC 8018EC6C 240C0001 */     addiu $t4, $zero, 1
  /* 1133B0 8018EC70 016C6804 */      sllv $t5, $t4, $t3
  /* 1133B4 8018EC74 14CA0003 */       bne $a2, $t2, .L8018EC84
  /* 1133B8 8018EC78 246F0002 */     addiu $t7, $v1, 2
  /* 1133BC 8018EC7C 004D1025 */        or $v0, $v0, $t5
  /* 1133C0 8018EC80 3042FFFF */      andi $v0, $v0, 0xffff
  .L8018EC84:
  /* 1133C4 8018EC84 908E04B0 */       lbu $t6, 0x4b0($a0) # gSaveData + 1200
  /* 1133C8 8018EC88 24180001 */     addiu $t8, $zero, 1
  /* 1133CC 8018EC8C 01F8C804 */      sllv $t9, $t8, $t7
  /* 1133D0 8018EC90 14CE0003 */       bne $a2, $t6, .L8018ECA0
  /* 1133D4 8018EC94 24690003 */     addiu $t1, $v1, 3
  /* 1133D8 8018EC98 00591025 */        or $v0, $v0, $t9
  /* 1133DC 8018EC9C 3042FFFF */      andi $v0, $v0, 0xffff
  .L8018ECA0:
  /* 1133E0 8018ECA0 908804D0 */       lbu $t0, 0x4d0($a0) # gSaveData + 1232
  /* 1133E4 8018ECA4 240A0001 */     addiu $t2, $zero, 1
  /* 1133E8 8018ECA8 012A6004 */      sllv $t4, $t2, $t1
  /* 1133EC 8018ECAC 14C80003 */       bne $a2, $t0, .L8018ECBC
  /* 1133F0 8018ECB0 24630004 */     addiu $v1, $v1, 4
  /* 1133F4 8018ECB4 004C1025 */        or $v0, $v0, $t4
  /* 1133F8 8018ECB8 3042FFFF */      andi $v0, $v0, 0xffff
  .L8018ECBC:
  /* 1133FC 8018ECBC 1465FFE3 */       bne $v1, $a1, .L8018EC4C
  /* 113400 8018ECC0 24840080 */     addiu $a0, $a0, 0x80
  /* 113404 8018ECC4 304B036F */      andi $t3, $v0, 0x36f
  /* 113408 8018ECC8 2401036F */     addiu $at, $zero, 0x36f
  /* 11340C 8018ECCC 15610009 */       bne $t3, $at, .L8018ECF4
  /* 113410 8018ECD0 2418000E */     addiu $t8, $zero, 0xe
  /* 113414 8018ECD4 90ED0039 */       lbu $t5, 0x39($a3) # gSceneData + 57
  /* 113418 8018ECD8 90EE003A */       lbu $t6, 0x3a($a3) # gSceneData + 58
  /* 11341C 8018ECDC 240F0034 */     addiu $t7, $zero, 0x34
  /* 113420 8018ECE0 A0F80017 */        sb $t8, 0x17($a3) # gSceneData + 23
  /* 113424 8018ECE4 A0EF0000 */        sb $t7, ($a3) # gSceneData + 0
  /* 113428 8018ECE8 A0ED0014 */        sb $t5, 0x14($a3) # gSceneData + 20
  /* 11342C 8018ECEC 10000018 */         b .L8018ED50
  /* 113430 8018ECF0 A0EE0015 */        sb $t6, 0x15($a3) # gSceneData + 21
  .L8018ECF4:
  /* 113434 8018ECF4 0C03598C */       jal func_ovl2_800D6630
  /* 113438 8018ECF8 00000000 */       nop 
  /* 11343C 8018ECFC 3C07800A */       lui $a3, %hi(gSceneData)
  /* 113440 8018ED00 10400013 */      beqz $v0, .L8018ED50
  /* 113444 8018ED04 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 113448 8018ED08 24190005 */     addiu $t9, $zero, 5
  /* 11344C 8018ED0C 2408000C */     addiu $t0, $zero, 0xc
  /* 113450 8018ED10 A0F90002 */        sb $t9, 2($a3) # gSceneData + 2
  /* 113454 8018ED14 1000000E */         b .L8018ED50
  /* 113458 8018ED18 A0E80000 */        sb $t0, ($a3) # gSceneData + 0
  .L8018ED1C:
  /* 11345C 8018ED1C 240A0014 */     addiu $t2, $zero, 0x14
  /* 113460 8018ED20 2401000A */     addiu $at, $zero, 0xa
  /* 113464 8018ED24 1441000A */       bne $v0, $at, .L8018ED50
  /* 113468 8018ED28 A0EA0000 */        sb $t2, ($a3) # gSceneData + 0
  /* 11346C 8018ED2C 0C03598C */       jal func_ovl2_800D6630
  /* 113470 8018ED30 00000000 */       nop 
  /* 113474 8018ED34 3C07800A */       lui $a3, %hi(gSceneData)
  /* 113478 8018ED38 10400005 */      beqz $v0, .L8018ED50
  /* 11347C 8018ED3C 24E74AD0 */     addiu $a3, $a3, %lo(gSceneData)
  /* 113480 8018ED40 24090005 */     addiu $t1, $zero, 5
  /* 113484 8018ED44 240C000C */     addiu $t4, $zero, 0xc
  /* 113488 8018ED48 A0E90002 */        sb $t1, 2($a3) # gSceneData + 2
  /* 11348C 8018ED4C A0EC0000 */        sb $t4, ($a3) # gSceneData + 0
  .L8018ED50:
  /* 113490 8018ED50 240B0035 */     addiu $t3, $zero, 0x35
  /* 113494 8018ED54 A0EB0001 */        sb $t3, 1($a3) # gSceneData + 1
  /* 113498 8018ED58 8FBF0014 */        lw $ra, 0x14($sp)
  .L8018ED5C:
  /* 11349C 8018ED5C 27BD0030 */     addiu $sp, $sp, 0x30
  /* 1134A0 8018ED60 03E00008 */        jr $ra
  /* 1134A4 8018ED64 00000000 */       nop 

  /* 1134A8 8018ED68 00000000 */       nop 
  /* 1134AC 8018ED6C 00000000 */       nop 

# Likely start of new file
glabel func_ovl6_8018ED70
  /* 1134B0 8018ED70 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1134B4 8018ED74 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 1134B8 8018ED78 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 1134BC 8018ED7C 3C188019 */       lui $t8, %hi(D_ovl6_8018F3B0)
  /* 1134C0 8018ED80 3C088019 */       lui $t0, %hi(D_ovl6_8018F6D0)
  /* 1134C4 8018ED84 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1134C8 8018ED88 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 1134CC 8018ED8C 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 1134D0 8018ED90 2718F3B0 */     addiu $t8, $t8, %lo(D_ovl6_8018F3B0)
  /* 1134D4 8018ED94 24190064 */     addiu $t9, $zero, 0x64
  /* 1134D8 8018ED98 2508F6D0 */     addiu $t0, $t0, %lo(D_ovl6_8018F6D0)
  /* 1134DC 8018ED9C 24090007 */     addiu $t1, $zero, 7
  /* 1134E0 8018EDA0 AFAE0020 */        sw $t6, 0x20($sp)
  /* 1134E4 8018EDA4 AFAF0024 */        sw $t7, 0x24($sp)
  /* 1134E8 8018EDA8 AFA00028 */        sw $zero, 0x28($sp)
  /* 1134EC 8018EDAC AFA0002C */        sw $zero, 0x2c($sp)
  /* 1134F0 8018EDB0 AFB80030 */        sw $t8, 0x30($sp)
  /* 1134F4 8018EDB4 AFB90034 */        sw $t9, 0x34($sp)
  /* 1134F8 8018EDB8 AFA80038 */        sw $t0, 0x38($sp)
  /* 1134FC 8018EDBC AFA9003C */        sw $t1, 0x3c($sp)
  /* 113500 8018EDC0 0C0337DE */       jal rldm_initialize
  /* 113504 8018EDC4 27A40020 */     addiu $a0, $sp, 0x20
  /* 113508 8018EDC8 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 11350C 8018EDCC 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 113510 8018EDD0 0C0337BB */       jal rldm_bytes_need_to_load
  /* 113514 8018EDD4 24050008 */     addiu $a1, $zero, 8
  /* 113518 8018EDD8 00402025 */        or $a0, $v0, $zero
  /* 11351C 8018EDDC 0C001260 */       jal hal_alloc
  /* 113520 8018EDE0 24050010 */     addiu $a1, $zero, 0x10
  /* 113524 8018EDE4 3C048011 */       lui $a0, %hi(D_ovl2_80116BD0)
  /* 113528 8018EDE8 3C068013 */       lui $a2, %hi(D_ovl2_80130D40)
  /* 11352C 8018EDEC 24C60D40 */     addiu $a2, $a2, %lo(D_ovl2_80130D40)
  /* 113530 8018EDF0 24846BD0 */     addiu $a0, $a0, %lo(D_ovl2_80116BD0)
  /* 113534 8018EDF4 24050008 */     addiu $a1, $zero, 8
  /* 113538 8018EDF8 0C033781 */       jal rldm_load_files_into
  /* 11353C 8018EDFC 00403825 */        or $a3, $v0, $zero
  /* 113540 8018EE00 8FBF0014 */        lw $ra, 0x14($sp)
  /* 113544 8018EE04 27BD0040 */     addiu $sp, $sp, 0x40
  /* 113548 8018EE08 03E00008 */        jr $ra
  /* 11354C 8018EE0C 00000000 */       nop 

glabel func_ovl6_8018EE10
  /* 113550 8018EE10 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 113554 8018EE14 AFBF0014 */        sw $ra, 0x14($sp)
  /* 113558 8018EE18 AFA40018 */        sw $a0, 0x18($sp)
  /* 11355C 8018EE1C 8C840074 */        lw $a0, 0x74($a0)
  /* 113560 8018EE20 0C0405E4 */       jal efParticle_ShieldBreak_MakeEffect
  /* 113564 8018EE24 2484001C */     addiu $a0, $a0, 0x1c
  /* 113568 8018EE28 8FAF0018 */        lw $t7, 0x18($sp)
  /* 11356C 8018EE2C 8DE40074 */        lw $a0, 0x74($t7)
  /* 113570 8018EE30 0C040B7B */       jal func_ovl2_80102DEC
  /* 113574 8018EE34 2484001C */     addiu $a0, $a0, 0x1c
  /* 113578 8018EE38 0C009A70 */       jal func_800269C0
  /* 11357C 8018EE3C 24040118 */     addiu $a0, $zero, 0x118
  /* 113580 8018EE40 0C063544 */       jal func_ovl6_8018D510
  /* 113584 8018EE44 00000000 */       nop 
  /* 113588 8018EE48 8FBF0014 */        lw $ra, 0x14($sp)
  /* 11358C 8018EE4C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 113590 8018EE50 24020001 */     addiu $v0, $zero, 1
  /* 113594 8018EE54 03E00008 */        jr $ra
  /* 113598 8018EE58 00000000 */       nop 

  /* 11359C 8018EE5C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1135A0 8018EE60 AFA60028 */        sw $a2, 0x28($sp)
  /* 1135A4 8018EE64 AFA7002C */        sw $a3, 0x2c($sp)
  /* 1135A8 8018EE68 8FAE002C */        lw $t6, 0x2c($sp)
  /* 1135AC 8018EE6C 00A03025 */        or $a2, $a1, $zero
  /* 1135B0 8018EE70 AFA50024 */        sw $a1, 0x24($sp)
  /* 1135B4 8018EE74 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1135B8 8018EE78 3C058019 */       lui $a1, %hi(D_ovl6_8018F130)
  /* 1135BC 8018EE7C 8FA70028 */        lw $a3, 0x28($sp)
  /* 1135C0 8018EE80 24A5F130 */     addiu $a1, $a1, %lo(D_ovl6_8018F130)
  /* 1135C4 8018EE84 0C05B85D */       jal itManager_MakeItem
  /* 1135C8 8018EE88 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1135CC 8018EE8C 10400005 */      beqz $v0, .L8018EEA4
  /* 1135D0 8018EE90 00402025 */        or $a0, $v0, $zero
  /* 1135D4 8018EE94 8C430084 */        lw $v1, 0x84($v0)
  /* 1135D8 8018EE98 240FFFFF */     addiu $t7, $zero, -1
  /* 1135DC 8018EE9C AC600108 */        sw $zero, 0x108($v1)
  /* 1135E0 8018EEA0 AC6F00AC */        sw $t7, 0xac($v1)
  .L8018EEA4:
  /* 1135E4 8018EEA4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1135E8 8018EEA8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1135EC 8018EEAC 00801025 */        or $v0, $a0, $zero
  /* 1135F0 8018EEB0 03E00008 */        jr $ra
  /* 1135F4 8018EEB4 00000000 */       nop 

  /* 1135F8 8018EEB8 00000000 */       nop 
  /* 1135FC 8018EEBC 00000000 */       nop 

# Likely start of new file
#  /* 113600 8018EEC0 00000000 */       nop 
#glabel D_ovl6_8018EEC4   # Routine parsed as data
#  /* 113604 8018EEC4 00001EB0 */       tge $zero, $zero, 0x7a
