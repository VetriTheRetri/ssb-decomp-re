.section .text
glabel func_ovl0_800C9314
  /* 044CF4 800C9314 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 044CF8 800C9318 AFB30020 */        sw $s3, 0x20($sp)
  /* 044CFC 800C931C AFB10018 */        sw $s1, 0x18($sp)
  /* 044D00 800C9320 AFB00014 */        sw $s0, 0x14($sp)
  /* 044D04 800C9324 00A08025 */        or $s0, $a1, $zero
  /* 044D08 800C9328 00809825 */        or $s3, $a0, $zero
  /* 044D0C 800C932C AFBF0024 */        sw $ra, 0x24($sp)
  /* 044D10 800C9330 AFB2001C */        sw $s2, 0x1c($sp)
  /* 044D14 800C9334 10800020 */      beqz $a0, .L800C93B8
  /* 044D18 800C9338 00808825 */        or $s1, $a0, $zero
  /* 044D1C 800C933C 8CAE0000 */        lw $t6, ($a1)
  /* 044D20 800C9340 24120012 */     addiu $s2, $zero, 0x12
  /* 044D24 800C9344 524E001D */      beql $s2, $t6, .L800C93BC
  /* 044D28 800C9348 8FBF0024 */        lw $ra, 0x24($sp)
  /* 044D2C 800C934C 8E180008 */        lw $t8, 8($s0)
  .L800C9350:
  /* 044D30 800C9350 2610002C */     addiu $s0, $s0, 0x2c
  /* 044D34 800C9354 02202025 */        or $a0, $s1, $zero
  /* 044D38 800C9358 AE38001C */        sw $t8, 0x1c($s1)
  /* 044D3C 800C935C 8E0FFFE0 */        lw $t7, -0x20($s0)
  /* 044D40 800C9360 02602825 */        or $a1, $s3, $zero
  /* 044D44 800C9364 AE2F0020 */        sw $t7, 0x20($s1)
  /* 044D48 800C9368 8E18FFE4 */        lw $t8, -0x1c($s0)
  /* 044D4C 800C936C AE380024 */        sw $t8, 0x24($s1)
  /* 044D50 800C9370 8E08FFE8 */        lw $t0, -0x18($s0)
  /* 044D54 800C9374 AE280030 */        sw $t0, 0x30($s1)
  /* 044D58 800C9378 8E19FFEC */        lw $t9, -0x14($s0)
  /* 044D5C 800C937C AE390034 */        sw $t9, 0x34($s1)
  /* 044D60 800C9380 8E08FFF0 */        lw $t0, -0x10($s0)
  /* 044D64 800C9384 AE280038 */        sw $t0, 0x38($s1)
  /* 044D68 800C9388 8E0AFFF4 */        lw $t2, -0xc($s0)
  /* 044D6C 800C938C AE2A0040 */        sw $t2, 0x40($s1)
  /* 044D70 800C9390 8E09FFF8 */        lw $t1, -8($s0)
  /* 044D74 800C9394 AE290044 */        sw $t1, 0x44($s1)
  /* 044D78 800C9398 8E0AFFFC */        lw $t2, -4($s0)
  /* 044D7C 800C939C 0C0321BA */       jal func_ovl0_800C86E8
  /* 044D80 800C93A0 AE2A0048 */        sw $t2, 0x48($s1)
  /* 044D84 800C93A4 10400004 */      beqz $v0, .L800C93B8
  /* 044D88 800C93A8 00408825 */        or $s1, $v0, $zero
  /* 044D8C 800C93AC 8E0B0000 */        lw $t3, ($s0)
  /* 044D90 800C93B0 564BFFE7 */      bnel $s2, $t3, .L800C9350
  /* 044D94 800C93B4 8E180008 */        lw $t8, 8($s0)
  .L800C93B8:
  /* 044D98 800C93B8 8FBF0024 */        lw $ra, 0x24($sp)
  .L800C93BC:
  /* 044D9C 800C93BC 8FB00014 */        lw $s0, 0x14($sp)
  /* 044DA0 800C93C0 8FB10018 */        lw $s1, 0x18($sp)
  /* 044DA4 800C93C4 8FB2001C */        lw $s2, 0x1c($sp)
  /* 044DA8 800C93C8 8FB30020 */        lw $s3, 0x20($sp)
  /* 044DAC 800C93CC 03E00008 */        jr $ra
  /* 044DB0 800C93D0 27BD0028 */     addiu $sp, $sp, 0x28

  /* 044DB4 800C93D4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 044DB8 800C93D8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 044DBC 800C93DC 00803025 */        or $a2, $a0, $zero
  /* 044DC0 800C93E0 8C840004 */        lw $a0, 4($a0)
  /* 044DC4 800C93E4 0C0024B4 */       jal omAddDObjForGObj
  /* 044DC8 800C93E8 AFA60018 */        sw $a2, 0x18($sp)
  /* 044DCC 800C93EC 8C4E000C */        lw $t6, 0xc($v0)
  /* 044DD0 800C93F0 8FA60018 */        lw $a2, 0x18($sp)
  /* 044DD4 800C93F4 ADC00008 */        sw $zero, 8($t6)
  /* 044DD8 800C93F8 AC40000C */        sw $zero, 0xc($v0)
  /* 044DDC 800C93FC 8CCF0010 */        lw $t7, 0x10($a2)
  /* 044DE0 800C9400 ADE20014 */        sw $v0, 0x14($t7)
  /* 044DE4 800C9404 8CD80010 */        lw $t8, 0x10($a2)
  /* 044DE8 800C9408 AC580010 */        sw $t8, 0x10($v0)
  /* 044DEC 800C940C ACC20010 */        sw $v0, 0x10($a2)
  /* 044DF0 800C9410 AC460014 */        sw $a2, 0x14($v0)
  /* 044DF4 800C9414 8FBF0014 */        lw $ra, 0x14($sp)
  /* 044DF8 800C9418 27BD0018 */     addiu $sp, $sp, 0x18
  /* 044DFC 800C941C 03E00008 */        jr $ra
  /* 044E00 800C9420 00000000 */       nop 

