.section .text
glabel func_ovl0_800CB4E0
  /* 046EC0 800CB4E0 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 046EC4 800CB4E4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 046EC8 800CB4E8 AFB00018 */        sw $s0, 0x18($sp)
  /* 046ECC 800CB4EC 908E0054 */       lbu $t6, 0x54($a0)
  /* 046ED0 800CB4F0 3C108004 */       lui $s0, %hi(gpDisplayListHead)
  /* 046ED4 800CB4F4 00803025 */        or $a2, $a0, $zero
  /* 046ED8 800CB4F8 31CF0002 */      andi $t7, $t6, 2
  /* 046EDC 800CB4FC 15E00032 */      bnez $t7, .L800CB5C8
  /* 046EE0 800CB500 261065B0 */     addiu $s0, $s0, %lo(gpDisplayListHead)
  /* 046EE4 800CB504 02002025 */        or $a0, $s0, $zero
  /* 046EE8 800CB508 00C02825 */        or $a1, $a2, $zero
  /* 046EEC 800CB50C 0C00435C */       jal func_80010D70
  /* 046EF0 800CB510 AFA60028 */        sw $a2, 0x28($sp)
  /* 046EF4 800CB514 8FA60028 */        lw $a2, 0x28($sp)
  /* 046EF8 800CB518 AFA20024 */        sw $v0, 0x24($sp)
  /* 046EFC 800CB51C 8CD80050 */        lw $t8, 0x50($a2)
  /* 046F00 800CB520 53000012 */      beql $t8, $zero, .L800CB56C
  /* 046F04 800CB524 8CC40010 */        lw $a0, 0x10($a2)
  /* 046F08 800CB528 90D90054 */       lbu $t9, 0x54($a2)
  /* 046F0C 800CB52C 00C02025 */        or $a0, $a2, $zero
  /* 046F10 800CB530 02002825 */        or $a1, $s0, $zero
  /* 046F14 800CB534 33280001 */      andi $t0, $t9, 1
  /* 046F18 800CB538 5500000C */      bnel $t0, $zero, .L800CB56C
  /* 046F1C 800CB53C 8CC40010 */        lw $a0, 0x10($a2)
  /* 046F20 800CB540 0C004B64 */       jal func_80012D90
  /* 046F24 800CB544 AFA60028 */        sw $a2, 0x28($sp)
  /* 046F28 800CB548 8E030000 */        lw $v1, ($s0) # gpDisplayListHead + 0
  /* 046F2C 800CB54C 8FA60028 */        lw $a2, 0x28($sp)
  /* 046F30 800CB550 3C0ADE00 */       lui $t2, 0xde00
  /* 046F34 800CB554 24690008 */     addiu $t1, $v1, 8
  /* 046F38 800CB558 AE090000 */        sw $t1, ($s0) # gpDisplayListHead + 0
  /* 046F3C 800CB55C AC6A0000 */        sw $t2, ($v1)
  /* 046F40 800CB560 8CCB0050 */        lw $t3, 0x50($a2)
  /* 046F44 800CB564 AC6B0004 */        sw $t3, 4($v1)
  /* 046F48 800CB568 8CC40010 */        lw $a0, 0x10($a2)
  .L800CB56C:
  /* 046F4C 800CB56C 50800005 */      beql $a0, $zero, .L800CB584
  /* 046F50 800CB570 8FAC0024 */        lw $t4, 0x24($sp)
  /* 046F54 800CB574 0C032D38 */       jal func_ovl0_800CB4E0
  /* 046F58 800CB578 AFA60028 */        sw $a2, 0x28($sp)
  /* 046F5C 800CB57C 8FA60028 */        lw $a2, 0x28($sp)
  /* 046F60 800CB580 8FAC0024 */        lw $t4, 0x24($sp)
  .L800CB584:
  /* 046F64 800CB584 51800011 */      beql $t4, $zero, .L800CB5CC
  /* 046F68 800CB588 8CC8000C */        lw $t0, 0xc($a2)
  /* 046F6C 800CB58C 8CCD0014 */        lw $t5, 0x14($a2)
  /* 046F70 800CB590 24010001 */     addiu $at, $zero, 1
  /* 046F74 800CB594 3C18D838 */       lui $t8, (0xD8380002 >> 16) # 3627548674
  /* 046F78 800CB598 51A10005 */      beql $t5, $at, .L800CB5B0
  /* 046F7C 800CB59C 8E030000 */        lw $v1, ($s0) # gpDisplayListHead + 0
  /* 046F80 800CB5A0 8CCE0008 */        lw $t6, 8($a2)
  /* 046F84 800CB5A4 51C00009 */      beql $t6, $zero, .L800CB5CC
  /* 046F88 800CB5A8 8CC8000C */        lw $t0, 0xc($a2)
  /* 046F8C 800CB5AC 8E030000 */        lw $v1, ($s0) # gpDisplayListHead + 0
  .L800CB5B0:
  /* 046F90 800CB5B0 37180002 */       ori $t8, $t8, (0xD8380002 & 0xFFFF) # 3627548674
  /* 046F94 800CB5B4 24190040 */     addiu $t9, $zero, 0x40
  /* 046F98 800CB5B8 246F0008 */     addiu $t7, $v1, 8
  /* 046F9C 800CB5BC AE0F0000 */        sw $t7, ($s0) # gpDisplayListHead + 0
  /* 046FA0 800CB5C0 AC790004 */        sw $t9, 4($v1)
  /* 046FA4 800CB5C4 AC780000 */        sw $t8, ($v1)
  .L800CB5C8:
  /* 046FA8 800CB5C8 8CC8000C */        lw $t0, 0xc($a2)
  .L800CB5CC:
  /* 046FAC 800CB5CC 5500000A */      bnel $t0, $zero, .L800CB5F8
  /* 046FB0 800CB5D0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 046FB4 800CB5D4 8CD00008 */        lw $s0, 8($a2)
  /* 046FB8 800CB5D8 52000007 */      beql $s0, $zero, .L800CB5F8
  /* 046FBC 800CB5DC 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CB5E0:
  /* 046FC0 800CB5E0 0C032D38 */       jal func_ovl0_800CB4E0
  /* 046FC4 800CB5E4 02002025 */        or $a0, $s0, $zero
  /* 046FC8 800CB5E8 8E100008 */        lw $s0, 8($s0)
  /* 046FCC 800CB5EC 1600FFFC */      bnez $s0, .L800CB5E0
  /* 046FD0 800CB5F0 00000000 */       nop 
  /* 046FD4 800CB5F4 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CB5F8:
  /* 046FD8 800CB5F8 8FB00018 */        lw $s0, 0x18($sp)
  /* 046FDC 800CB5FC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 046FE0 800CB600 03E00008 */        jr $ra
  /* 046FE4 800CB604 00000000 */       nop 

