.section .text
glabel func_ovl0_800CD440
  /* 048E20 800CD440 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 048E24 800CD444 AFBF0014 */        sw $ra, 0x14($sp)
  /* 048E28 800CD448 AFA5001C */        sw $a1, 0x1c($sp)
  /* 048E2C 800CD44C AFA60020 */        sw $a2, 0x20($sp)
  /* 048E30 800CD450 30C600FF */      andi $a2, $a2, 0xff
  /* 048E34 800CD454 30A500FF */      andi $a1, $a1, 0xff
  /* 048E38 800CD458 0C00233C */       jal func_80008CF0
  /* 048E3C 800CD45C AFA40018 */        sw $a0, 0x18($sp)
  /* 048E40 800CD460 3C0E8004 */       lui $t6, %hi(D_8003B894)
  /* 048E44 800CD464 25CEB894 */     addiu $t6, $t6, %lo(D_8003B894)
  /* 048E48 800CD468 8FA40018 */        lw $a0, 0x18($sp)
  /* 048E4C 800CD46C 8DD80000 */        lw $t8, ($t6) # D_8003B894 + 0
  /* 048E50 800CD470 AC980018 */        sw $t8, 0x18($a0)
  /* 048E54 800CD474 8DCF0004 */        lw $t7, 4($t6) # D_8003B894 + 4
  /* 048E58 800CD478 AC8F001C */        sw $t7, 0x1c($a0)
  /* 048E5C 800CD47C 8DD80008 */        lw $t8, 8($t6) # D_8003B894 + 8
  /* 048E60 800CD480 AC980020 */        sw $t8, 0x20($a0)
  /* 048E64 800CD484 8DCF000C */        lw $t7, 0xc($t6) # D_8003B894 + 12
  /* 048E68 800CD488 AC8F0024 */        sw $t7, 0x24($a0)
  /* 048E6C 800CD48C 8DD80010 */        lw $t8, 0x10($t6) # D_8003B894 + 16
  /* 048E70 800CD490 AC980028 */        sw $t8, 0x28($a0)
  /* 048E74 800CD494 8DCF0014 */        lw $t7, 0x14($t6) # D_8003B894 + 20
  /* 048E78 800CD498 AC8F002C */        sw $t7, 0x2c($a0)
  /* 048E7C 800CD49C 8DD80018 */        lw $t8, 0x18($t6) # D_8003B894 + 24
  /* 048E80 800CD4A0 AC980030 */        sw $t8, 0x30($a0)
  /* 048E84 800CD4A4 8DCF001C */        lw $t7, 0x1c($t6) # D_8003B894 + 28
  /* 048E88 800CD4A8 AC820018 */        sw $v0, 0x18($a0)
  /* 048E8C 800CD4AC AC8F0034 */        sw $t7, 0x34($a0)
  /* 048E90 800CD4B0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048E94 800CD4B4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 048E98 800CD4B8 03E00008 */        jr $ra
  /* 048E9C 800CD4BC 00000000 */       nop 

  /* 048EA0 800CD4C0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 048EA4 800CD4C4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 048EA8 800CD4C8 AFA5001C */        sw $a1, 0x1c($sp)
  /* 048EAC 800CD4CC AFA60020 */        sw $a2, 0x20($sp)
  /* 048EB0 800CD4D0 30C600FF */      andi $a2, $a2, 0xff
  /* 048EB4 800CD4D4 30A500FF */      andi $a1, $a1, 0xff
  /* 048EB8 800CD4D8 0C00233C */       jal func_80008CF0
  /* 048EBC 800CD4DC AFA40018 */        sw $a0, 0x18($sp)
  /* 048EC0 800CD4E0 3C0E8004 */       lui $t6, %hi(D_8003B878)
  /* 048EC4 800CD4E4 25CEB878 */     addiu $t6, $t6, %lo(D_8003B878)
  /* 048EC8 800CD4E8 8FA40018 */        lw $a0, 0x18($sp)
  /* 048ECC 800CD4EC 8DD80000 */        lw $t8, ($t6) # D_8003B878 + 0
  /* 048ED0 800CD4F0 AC980018 */        sw $t8, 0x18($a0)
  /* 048ED4 800CD4F4 8DCF0004 */        lw $t7, 4($t6) # D_8003B878 + 4
  /* 048ED8 800CD4F8 AC8F001C */        sw $t7, 0x1c($a0)
  /* 048EDC 800CD4FC 8DD80008 */        lw $t8, 8($t6) # D_8003B878 + 8
  /* 048EE0 800CD500 AC980020 */        sw $t8, 0x20($a0)
  /* 048EE4 800CD504 8DCF000C */        lw $t7, 0xc($t6) # D_8003B878 + 12
  /* 048EE8 800CD508 AC8F0024 */        sw $t7, 0x24($a0)
  /* 048EEC 800CD50C 8DD80010 */        lw $t8, 0x10($t6) # D_8003B878 + 16
  /* 048EF0 800CD510 AC980028 */        sw $t8, 0x28($a0)
  /* 048EF4 800CD514 8DCF0014 */        lw $t7, 0x14($t6) # D_8003B878 + 20
  /* 048EF8 800CD518 AC8F002C */        sw $t7, 0x2c($a0)
  /* 048EFC 800CD51C 8DD80018 */        lw $t8, 0x18($t6) # D_8003B878 + 24
  /* 048F00 800CD520 AC820018 */        sw $v0, 0x18($a0)
  /* 048F04 800CD524 AC980030 */        sw $t8, 0x30($a0)
  /* 048F08 800CD528 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048F0C 800CD52C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 048F10 800CD530 03E00008 */        jr $ra
  /* 048F14 800CD534 00000000 */       nop 

