.section .text
glabel func_ovl0_800C8CB8
  /* 044698 800C8CB8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 04469C 800C8CBC AFB40038 */        sw $s4, 0x38($sp)
  /* 0446A0 800C8CC0 AFB30034 */        sw $s3, 0x34($sp)
  /* 0446A4 800C8CC4 AFB20030 */        sw $s2, 0x30($sp)
  /* 0446A8 800C8CC8 AFB1002C */        sw $s1, 0x2c($sp)
  /* 0446AC 800C8CCC 00C08825 */        or $s1, $a2, $zero
  /* 0446B0 800C8CD0 00E09025 */        or $s2, $a3, $zero
  /* 0446B4 800C8CD4 00A09825 */        or $s3, $a1, $zero
  /* 0446B8 800C8CD8 0080A025 */        or $s4, $a0, $zero
  /* 0446BC 800C8CDC AFBF003C */        sw $ra, 0x3c($sp)
  /* 0446C0 800C8CE0 AFB00028 */        sw $s0, 0x28($sp)
  /* 0446C4 800C8CE4 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 0446C8 800C8CE8 10A00028 */      beqz $a1, .L800C8D8C
  /* 0446CC 800C8CEC F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 0446D0 800C8CF0 8CA50000 */        lw $a1, ($a1)
  /* 0446D4 800C8CF4 50A00026 */      beql $a1, $zero, .L800C8D90
  /* 0446D8 800C8CF8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 0446DC 800C8CFC 4480B000 */      mtc1 $zero, $f22
  /* 0446E0 800C8D00 C7B40050 */      lwc1 $f20, 0x50($sp)
  .L800C8D04:
  /* 0446E4 800C8D04 0C002437 */       jal func_800090DC
  /* 0446E8 800C8D08 02802025 */        or $a0, $s4, $zero
  /* 0446EC 800C8D0C 1220000E */      beqz $s1, .L800C8D48
  /* 0446F0 800C8D10 00408025 */        or $s0, $v0, $zero
  /* 0446F4 800C8D14 8E250000 */        lw $a1, ($s1)
  /* 0446F8 800C8D18 50A0000B */      beql $a1, $zero, .L800C8D48
  /* 0446FC 800C8D1C 26310004 */     addiu $s1, $s1, 4
  /* 044700 800C8D20 4406A000 */      mfc1 $a2, $f20
  /* 044704 800C8D24 0C002F55 */       jal func_8000BD54
  /* 044708 800C8D28 00402025 */        or $a0, $v0, $zero
  /* 04470C 800C8D2C 0C0033DB */       jal func_8000CF6C
  /* 044710 800C8D30 02002025 */        or $a0, $s0, $zero
  /* 044714 800C8D34 0C003690 */       jal func_8000DA40
  /* 044718 800C8D38 02002025 */        or $a0, $s0, $zero
  /* 04471C 800C8D3C 0C0023EC */       jal func_80008FB0
  /* 044720 800C8D40 02002025 */        or $a0, $s0, $zero
  /* 044724 800C8D44 26310004 */     addiu $s1, $s1, 4
  .L800C8D48:
  /* 044728 800C8D48 5240000D */      beql $s2, $zero, .L800C8D80
  /* 04472C 800C8D4C 8E650004 */        lw $a1, 4($s3)
  /* 044730 800C8D50 8E450000 */        lw $a1, ($s2)
  /* 044734 800C8D54 50A00009 */      beql $a1, $zero, .L800C8D7C
  /* 044738 800C8D58 26520004 */     addiu $s2, $s2, 4
  /* 04473C 800C8D5C 4406B000 */      mfc1 $a2, $f22
  /* 044740 800C8D60 0C002F55 */       jal func_8000BD54
  /* 044744 800C8D64 02002025 */        or $a0, $s0, $zero
  /* 044748 800C8D68 0C0033DB */       jal func_8000CF6C
  /* 04474C 800C8D6C 02002025 */        or $a0, $s0, $zero
  /* 044750 800C8D70 0C003690 */       jal func_8000DA40
  /* 044754 800C8D74 02002025 */        or $a0, $s0, $zero
  /* 044758 800C8D78 26520004 */     addiu $s2, $s2, 4
  .L800C8D7C:
  /* 04475C 800C8D7C 8E650004 */        lw $a1, 4($s3)
  .L800C8D80:
  /* 044760 800C8D80 26730004 */     addiu $s3, $s3, 4
  /* 044764 800C8D84 14A0FFDF */      bnez $a1, .L800C8D04
  /* 044768 800C8D88 00000000 */       nop 
  .L800C8D8C:
  /* 04476C 800C8D8C 8FBF003C */        lw $ra, 0x3c($sp)
  .L800C8D90:
  /* 044770 800C8D90 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 044774 800C8D94 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 044778 800C8D98 8FB00028 */        lw $s0, 0x28($sp)
  /* 04477C 800C8D9C 8FB1002C */        lw $s1, 0x2c($sp)
  /* 044780 800C8DA0 8FB20030 */        lw $s2, 0x30($sp)
  /* 044784 800C8DA4 8FB30034 */        lw $s3, 0x34($sp)
  /* 044788 800C8DA8 8FB40038 */        lw $s4, 0x38($sp)
  /* 04478C 800C8DAC 03E00008 */        jr $ra
  /* 044790 800C8DB0 27BD0040 */     addiu $sp, $sp, 0x40

