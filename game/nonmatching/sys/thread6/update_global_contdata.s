.section .text
glabel update_global_contdata
  /* 004B98 80003F98 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 004B9C 80003F9C 3C038004 */       lui $v1, %hi(sContInfo)
  /* 004BA0 80003FA0 3C078004 */       lui $a3, %hi(gContInput)
  /* 004BA4 80003FA4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 004BA8 80003FA8 24E75228 */     addiu $a3, $a3, %lo(gContInput)
  /* 004BAC 80003FAC 246351A8 */     addiu $v1, $v1, %lo(sContInfo)
  /* 004BB0 80003FB0 00002825 */        or $a1, $zero, $zero
  /* 004BB4 80003FB4 2408000A */     addiu $t0, $zero, 0xa
  /* 004BB8 80003FB8 24060004 */     addiu $a2, $zero, 4
  .L80003FBC:
  /* 004BBC 80003FBC 906E001C */       lbu $t6, 0x1c($v1) # sContInfo + 28
  /* 004BC0 80003FC0 55C00014 */      bnel $t6, $zero, .L80004014
  /* 004BC4 80003FC4 24A50001 */     addiu $a1, $a1, 1

  /* 004BC8 80003FC8 00A80019 */     multu $a1, $t0
  /* 004BCC 80003FCC 94780000 */       lhu $t8, ($v1) # sContInfo + 0
  /* 004BD0 80003FD0 94790004 */       lhu $t9, 4($v1) # sContInfo + 4
  /* 004BD4 80003FD4 9469000C */       lhu $t1, 0xc($v1) # sContInfo + 12
  /* 004BD8 80003FD8 946A0008 */       lhu $t2, 8($v1) # sContInfo + 8
  /* 004BDC 80003FDC 806B000E */        lb $t3, 0xe($v1) # sContInfo + 14
  /* 004BE0 80003FE0 806C000F */        lb $t4, 0xf($v1) # sContInfo + 15
  /* 004BE4 80003FE4 A4600008 */        sh $zero, 8($v1) # sContInfo + 8
  /* 004BE8 80003FE8 A460000C */        sh $zero, 0xc($v1) # sContInfo + 12
  /* 004BEC 80003FEC A4600004 */        sh $zero, 4($v1) # sContInfo + 4
  /* 004BF0 80003FF0 00007812 */      mflo $t7
  /* 004BF4 80003FF4 00EF1021 */      addu $v0, $a3, $t7
  /* 004BF8 80003FF8 A4580000 */        sh $t8, ($v0)
  /* 004BFC 80003FFC A4590002 */        sh $t9, 2($v0)
  /* 004C00 80004000 A4490006 */        sh $t1, 6($v0)
  /* 004C04 80004004 A44A0004 */        sh $t2, 4($v0)
  /* 004C08 80004008 A04B0008 */        sb $t3, 8($v0)
  /* 004C0C 8000400C A04C0009 */        sb $t4, 9($v0)
  /* 004C10 80004010 24A50001 */     addiu $a1, $a1, 1
  .L80004014:
  /* 004C14 80004014 14A6FFE9 */       bne $a1, $a2, .L80003FBC
  /* 004C18 80004018 24630020 */     addiu $v1, $v1, 0x20

  /* 004C1C 8000401C 0C000F00 */       jal func_80003C00
  /* 004C20 80004020 00000000 */       nop 
  /* 004C24 80004024 3C0D8004 */       lui $t5, %hi(D_800451A4)
  /* 004C28 80004028 81AD51A4 */        lb $t5, %lo(D_800451A4)($t5)
  /* 004C2C 8000402C 2408000A */     addiu $t0, $zero, 0xa
  /* 004C30 80004030 3C078004 */       lui $a3, %hi(gContInput)
  /* 004C34 80004034 01A80019 */     multu $t5, $t0
  /* 004C38 80004038 24E75228 */     addiu $a3, $a3, %lo(gContInput)
  /* 004C3C 8000403C 3C018004 */       lui $at, %hi(D_80045470 + 2)
  /* 004C40 80004040 8FBF0014 */        lw $ra, 0x14($sp)
  /* 004C44 80004044 00007012 */      mflo $t6
  /* 004C48 80004048 00EE1021 */      addu $v0, $a3, $t6
  /* 004C4C 8000404C 944F0002 */       lhu $t7, 2($v0)
  /* 004C50 80004050 A42F5472 */        sh $t7, %lo(D_80045470 + 2)($at)
  /* 004C54 80004054 94580000 */       lhu $t8, ($v0)
  /* 004C58 80004058 3C018004 */       lui $at, %hi(D_80045470)
  /* 004C5C 8000405C A4385470 */        sh $t8, %lo(D_80045470)($at)
  /* 004C60 80004060 94590004 */       lhu $t9, 4($v0)
  /* 004C64 80004064 3C018004 */       lui $at, %hi(D_80045470 + 4)
  /* 004C68 80004068 A4395474 */        sh $t9, %lo(D_80045470 + 4)($at)
  /* 004C6C 8000406C 94490006 */       lhu $t1, 6($v0)
  /* 004C70 80004070 3C018004 */       lui $at, %hi(D_80045470 + 6)
  /* 004C74 80004074 A4295476 */        sh $t1, %lo(D_80045470 + 6)($at)
  /* 004C78 80004078 804A0008 */        lb $t2, 8($v0)
  /* 004C7C 8000407C 3C018004 */       lui $at, %hi(D_80045470 + 8)
  /* 004C80 80004080 A02A5478 */        sb $t2, %lo(D_80045470 + 8)($at)
  /* 004C84 80004084 804B0009 */        lb $t3, 9($v0)
  /* 004C88 80004088 3C018004 */       lui $at, %hi(D_80045470 + 9)
  /* 004C8C 8000408C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 004C90 80004090 A02B5479 */        sb $t3, %lo(D_80045470 + 9)($at)
  /* 004C94 80004094 3C018004 */       lui $at, %hi(gUpdateContData)
  /* 004C98 80004098 03E00008 */        jr $ra
  /* 004C9C 8000409C AC205250 */        sw $zero, %lo(gUpdateContData)($at)
