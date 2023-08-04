.section .text
glabel func_ovl0_800CE254
  /* 049C34 800CE254 28810008 */      slti $at, $a0, 8
  /* 049C38 800CE258 1020006D */      beqz $at, .L800CE410
  /* 049C3C 800CE25C 00C03825 */        or $a3, $a2, $zero
  /* 049C40 800CE260 8CAF0000 */        lw $t7, ($a1)
  /* 049C44 800CE264 3C0E800D */       lui $t6, %hi(D_ovl0_800D63C0)
  /* 049C48 800CE268 25CE63C0 */     addiu $t6, $t6, %lo(D_ovl0_800D63C0)
  /* 049C4C 800CE26C 00041080 */       sll $v0, $a0, 2  ## v0 is arg0 * 4
  /* 049C50 800CE270 004E1821 */      addu $v1, $v0, $t6 ## &D_ovl0_800D63C0[arg0]
  /* 049C54 800CE274 AC6F0000 */        sw $t7, ($v1)
  /* 049C58 800CE278 8CF90000 */        lw $t9, ($a3)
  /* 049C5C 800CE27C 3C18800D */       lui $t8, %hi(D_ovl0_800D63E0)
  /* 049C60 800CE280 271863E0 */     addiu $t8, $t8, %lo(D_ovl0_800D63E0)
  /* 049C64 800CE284 00583021 */      addu $a2, $v0, $t8 ## a2 = D_ovl0_800D63E0[arg0]
  /* 049C68 800CE288 3C01800D */       lui $at, %hi(D_ovl0_800D6400)
  /* 049C6C 800CE28C 00220821 */      addu $at, $at, $v0
  /* 049C70 800CE290 24AD0004 */     addiu $t5, $a1, 4
  /* 049C74 800CE294 ACD90000 */        sw $t9, ($a2)
  /* 049C78 800CE298 AC2D6400 */        sw $t5, %lo(D_ovl0_800D6400)($at)
  /* 049C7C 800CE29C 8C780000 */        lw $t8, ($v1) ## D_ovl0_800D63C0[arg0]
  /* 049C80 800CE2A0 3C0E800D */       lui $t6, %hi(D_ovl0_800D6420)
  /* 049C84 800CE2A4 25CE6420 */     addiu $t6, $t6, %lo(D_ovl0_800D6420)
  /* 049C88 800CE2A8 004E4021 */      addu $t0, $v0, $t6  ## to is &D_ovl0_800D6420[arg0]
  /* 049C8C 800CE2AC 24EF0004 */     addiu $t7, $a3, 4
  /* 049C90 800CE2B0 AD0F0000 */        sw $t7, ($t0)
  /* 049C94 800CE2B4 1B00000C */      blez $t8, .L800CE2E8
  /* 049C98 800CE2B8 24090001 */     addiu $t1, $zero, 1
  /* 049C9C 800CE2BC 24A20004 */     addiu $v0, $a1, 4
  /* 049CA0 800CE2C0 8C590000 */        lw $t9, ($v0) ## arg1[i]?
  .L800CE2C4:
  /* 049CA4 800CE2C4 25290001 */     addiu $t1, $t1, 1
  /* 049CA8 800CE2C8 24420004 */     addiu $v0, $v0, 4
  /* 049CAC 800CE2CC 03256821 */      addu $t5, $t9, $a1 ## arg1[i] + (uintptr_t)arg1?
  /* 049CB0 800CE2D0 AC4DFFFC */        sw $t5, -4($v0) ## arg1[i] += (uintptr_t)arg1?
  /* 049CB4 800CE2D4 8C6E0000 */        lw $t6, ($v1) ## D_ovl0_800D63C0[arg0]
  /* 049CB8 800CE2D8 01C9082A */       slt $at, $t6, $t1
  /* 049CBC 800CE2DC 5020FFF9 */      beql $at, $zero, .L800CE2C4
  /* 049CC0 800CE2E0 8C590000 */        lw $t9, ($v0)
  /* 049CC4 800CE2E4 24090001 */     addiu $t1, $zero, 1
  .L800CE2E8:
  /* 049CC8 800CE2E8 8CC20000 */        lw $v0, ($a2)
  /* 049CCC 800CE2EC 24E30004 */     addiu $v1, $a3, 4
  /* 049CD0 800CE2F0 240C0002 */     addiu $t4, $zero, 2
  /* 049CD4 800CE2F4 1840000A */      blez $v0, .L800CE320
  /* 049CD8 800CE2F8 00000000 */       nop 
  /* 049CDC 800CE2FC 8C6F0000 */        lw $t7, ($v1)
  .L800CE300:
  /* 049CE0 800CE300 25290001 */     addiu $t1, $t1, 1
  /* 049CE4 800CE304 24630004 */     addiu $v1, $v1, 4
  /* 049CE8 800CE308 01E7C021 */      addu $t8, $t7, $a3
  /* 049CEC 800CE30C AC78FFFC */        sw $t8, -4($v1)
  /* 049CF0 800CE310 8CC20000 */        lw $v0, ($a2)
  /* 049CF4 800CE314 0049082A */       slt $at, $v0, $t1
  /* 049CF8 800CE318 5020FFF9 */      beql $at, $zero, .L800CE300
  /* 049CFC 800CE31C 8C6F0000 */        lw $t7, ($v1)
  .L800CE320:
  /* 049D00 800CE320 1840003B */      blez $v0, .L800CE410
  /* 049D04 800CE324 00004825 */        or $t1, $zero, $zero
  /* 049D08 800CE328 00001025 */        or $v0, $zero, $zero ## v0 is i * 4
  /* 049D0C 800CE32C 8D190000 */        lw $t9, ($t0) # D_ovl0_800D6420[arg0]
  .L800CE330:
  /* 049D10 800CE330 00001825 */        or $v1, $zero, $zero
  /* 049D14 800CE334 00005025 */        or $t2, $zero, $zero
  /* 049D18 800CE338 03226821 */      addu $t5, $t9, $v0 # D_ovl0_800D6420[arg0] + i
  /* 049D1C 800CE33C 8DA40000 */        lw $a0, ($t5) # D_ovl0_800D6420[arg0][i]
  /* 049D20 800CE340 8C850000 */        lw $a1, ($a0) # D_ovl0_800D6420[arg0][i]->count
  /* 049D24 800CE344 10A0000D */      beqz $a1, .L800CE37C
  /* 049D28 800CE348 008A5821 */      addu $t3, $a0, $t2
  .L800CE34C:
  /* 049D2C 800CE34C 8D6E0018 */        lw $t6, 0x18($t3)
  /* 049D30 800CE350 24630001 */     addiu $v1, $v1, 1
  /* 049D34 800CE354 254A0004 */     addiu $t2, $t2, 4
  /* 049D38 800CE358 01C77821 */      addu $t7, $t6, $a3
  /* 049D3C 800CE35C AD6F0018 */        sw $t7, 0x18($t3)
  /* 049D40 800CE360 8D180000 */        lw $t8, ($t0)
  /* 049D44 800CE364 0302C821 */      addu $t9, $t8, $v0
  /* 049D48 800CE368 8F240000 */        lw $a0, ($t9) ## struct entry *a0
  /* 049D4C 800CE36C 8C850000 */        lw $a1, ($a0) ## entry->count
  /* 049D50 800CE370 0065082B */      sltu $at, $v1, $a1
  /* 049D54 800CE374 5420FFF5 */      bnel $at, $zero, .L800CE34C
  /* 049D58 800CE378 008A5821 */      addu $t3, $a0, $t2
  .L800CE37C:
  /* 049D5C 800CE37C 8C8D0004 */        lw $t5, 4($a0)
  /* 049D60 800CE380 558D001E */      bnel $t4, $t5, .L800CE3FC
  /* 049D64 800CE384 8CD80000 */        lw $t8, ($a2)
  /* 049D68 800CE388 8C8E0014 */        lw $t6, 0x14($a0)
  /* 049D6C 800CE38C 0005C080 */       sll $t8, $a1, 2
  /* 049D70 800CE390 00985821 */      addu $t3, $a0, $t8
  /* 049D74 800CE394 31CF0001 */      andi $t7, $t6, 1
  /* 049D78 800CE398 11E00005 */      beqz $t7, .L800CE3B0
  /* 049D7C 800CE39C 00057040 */       sll $t6, $a1, 1
  /* 049D80 800CE3A0 8D790018 */        lw $t9, 0x18($t3)
  /* 049D84 800CE3A4 03276821 */      addu $t5, $t9, $a3
  /* 049D88 800CE3A8 10000013 */         b .L800CE3F8
  /* 049D8C 800CE3AC AD6D0018 */        sw $t5, 0x18($t3)
  .L800CE3B0:
  /* 049D90 800CE3B0 00AE082B */      sltu $at, $a1, $t6
  /* 049D94 800CE3B4 10200010 */      beqz $at, .L800CE3F8
  /* 049D98 800CE3B8 00A01825 */        or $v1, $a1, $zero
  /* 049D9C 800CE3BC 00055080 */       sll $t2, $a1, 2
  /* 049DA0 800CE3C0 008A5821 */      addu $t3, $a0, $t2
  .L800CE3C4:
  /* 049DA4 800CE3C4 8D6F0018 */        lw $t7, 0x18($t3)
  /* 049DA8 800CE3C8 24630001 */     addiu $v1, $v1, 1
  /* 049DAC 800CE3CC 254A0004 */     addiu $t2, $t2, 4
  /* 049DB0 800CE3D0 01E7C021 */      addu $t8, $t7, $a3
  /* 049DB4 800CE3D4 AD780018 */        sw $t8, 0x18($t3)
  /* 049DB8 800CE3D8 8D190000 */        lw $t9, ($t0)
  /* 049DBC 800CE3DC 03226821 */      addu $t5, $t9, $v0
  /* 049DC0 800CE3E0 8DA40000 */        lw $a0, ($t5)
  /* 049DC4 800CE3E4 8C8E0000 */        lw $t6, ($a0)
  /* 049DC8 800CE3E8 000E7840 */       sll $t7, $t6, 1
  /* 049DCC 800CE3EC 006F082B */      sltu $at, $v1, $t7
  /* 049DD0 800CE3F0 5420FFF4 */      bnel $at, $zero, .L800CE3C4
  /* 049DD4 800CE3F4 008A5821 */      addu $t3, $a0, $t2
  .L800CE3F8:
  /* 049DD8 800CE3F8 8CD80000 */        lw $t8, ($a2)
  .L800CE3FC:
  /* 049DDC 800CE3FC 25290001 */     addiu $t1, $t1, 1
  /* 049DE0 800CE400 24420004 */     addiu $v0, $v0, 4
  /* 049DE4 800CE404 0138082A */       slt $at, $t1, $t8
  /* 049DE8 800CE408 5420FFC9 */      bnel $at, $zero, .L800CE330
  /* 049DEC 800CE40C 8D190000 */        lw $t9, ($t0)
  .L800CE410:
  /* 049DF0 800CE410 03E00008 */        jr $ra
  /* 049DF4 800CE414 00000000 */       nop 

