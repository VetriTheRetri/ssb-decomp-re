.section .late_rodata

glabel D_ovl0_800D5E84
  /* E644 051864 800D5E84 */
  .word 0xff7fffff # .float -3.4028235e38

.section .text
glabel func_ovl0_800C88AC
  /* 04428C 800C88AC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 044290 800C88B0 F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 044294 800C88B4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 044298 800C88B8 AFB50038 */        sw $s5, 0x38($sp)
  /* 04429C 800C88BC AFB40034 */        sw $s4, 0x34($sp)
  /* 0442A0 800C88C0 AFB30030 */        sw $s3, 0x30($sp)
  /* 0442A4 800C88C4 AFB2002C */        sw $s2, 0x2c($sp)
  /* 0442A8 800C88C8 AFB10028 */        sw $s1, 0x28($sp)
  /* 0442AC 800C88CC AFB00024 */        sw $s0, 0x24($sp)
  /* 0442B0 800C88D0 F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 0442B4 800C88D4 4487A000 */      mtc1 $a3, $f20
  /* 0442B8 800C88D8 8C8E0004 */        lw $t6, 4($a0)
  /* 0442BC 800C88DC 00A09825 */        or $s3, $a1, $zero
  /* 0442C0 800C88E0 00C0A025 */        or $s4, $a2, $zero
  /* 0442C4 800C88E4 0080A825 */        or $s5, $a0, $zero
  /* 0442C8 800C88E8 00809025 */        or $s2, $a0, $zero
  /* 0442CC 800C88EC 10800028 */      beqz $a0, .L800C8990
  /* 0442D0 800C88F0 E5D40078 */      swc1 $f20, 0x78($t6)
  /* 0442D4 800C88F4 3C01800D */       lui $at, %hi(D_ovl0_800D5E84)
  /* 0442D8 800C88F8 C4365E84 */      lwc1 $f22, %lo(D_ovl0_800D5E84)($at)
  .L800C88FC:
  /* 0442DC 800C88FC 1260000B */      beqz $s3, .L800C892C
  /* 0442E0 800C8900 00000000 */       nop 
  /* 0442E4 800C8904 8E650000 */        lw $a1, ($s3)
  /* 0442E8 800C8908 50A00007 */      beql $a1, $zero, .L800C8928
  /* 0442EC 800C890C E6560074 */      swc1 $f22, 0x74($s2)
  /* 0442F0 800C8910 4406A000 */      mfc1 $a2, $f20
  /* 0442F4 800C8914 0C002F47 */       jal omAddDObjAnimAll
  /* 0442F8 800C8918 02402025 */        or $a0, $s2, $zero
  /* 0442FC 800C891C 10000003 */         b .L800C892C
  /* 044300 800C8920 26730004 */     addiu $s3, $s3, 4
  /* 044304 800C8924 E6560074 */      swc1 $f22, 0x74($s2)
  .L800C8928:
  /* 044308 800C8928 26730004 */     addiu $s3, $s3, 4
  .L800C892C:
  /* 04430C 800C892C 52800014 */      beql $s4, $zero, .L800C8980
  /* 044310 800C8930 02402025 */        or $a0, $s2, $zero
  /* 044314 800C8934 8E820000 */        lw $v0, ($s4)
  /* 044318 800C8938 50400010 */      beql $v0, $zero, .L800C897C
  /* 04431C 800C893C 26940004 */     addiu $s4, $s4, 4
  /* 044320 800C8940 8E500080 */        lw $s0, 0x80($s2)
  /* 044324 800C8944 00408825 */        or $s1, $v0, $zero
  /* 044328 800C8948 5200000C */      beql $s0, $zero, .L800C897C
  /* 04432C 800C894C 26940004 */     addiu $s4, $s4, 4
  /* 044330 800C8950 8E250000 */        lw $a1, ($s1)
  .L800C8954:
  /* 044334 800C8954 50A00005 */      beql $a1, $zero, .L800C896C
  /* 044338 800C8958 8E100000 */        lw $s0, ($s0)
  /* 04433C 800C895C 4406A000 */      mfc1 $a2, $f20
  /* 044340 800C8960 0C002F55 */       jal omAddMObjAnimAll
  /* 044344 800C8964 02002025 */        or $a0, $s0, $zero
  /* 044348 800C8968 8E100000 */        lw $s0, ($s0)
  .L800C896C:
  /* 04434C 800C896C 26310004 */     addiu $s1, $s1, 4
  /* 044350 800C8970 5600FFF8 */      bnel $s0, $zero, .L800C8954
  /* 044354 800C8974 8E250000 */        lw $a1, ($s1)
  /* 044358 800C8978 26940004 */     addiu $s4, $s4, 4
  .L800C897C:
  /* 04435C 800C897C 02402025 */        or $a0, $s2, $zero
  .L800C8980:
  /* 044360 800C8980 0C0321BA */       jal func_ovl0_800C86E8
  /* 044364 800C8984 02A02825 */        or $a1, $s5, $zero
  /* 044368 800C8988 1440FFDC */      bnez $v0, .L800C88FC
  /* 04436C 800C898C 00409025 */        or $s2, $v0, $zero
  .L800C8990:
  /* 044370 800C8990 8FBF003C */        lw $ra, 0x3c($sp)
  /* 044374 800C8994 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 044378 800C8998 D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 04437C 800C899C 8FB00024 */        lw $s0, 0x24($sp)
  /* 044380 800C89A0 8FB10028 */        lw $s1, 0x28($sp)
  /* 044384 800C89A4 8FB2002C */        lw $s2, 0x2c($sp)
  /* 044388 800C89A8 8FB30030 */        lw $s3, 0x30($sp)
  /* 04438C 800C89AC 8FB40034 */        lw $s4, 0x34($sp)
  /* 044390 800C89B0 8FB50038 */        lw $s5, 0x38($sp)
  /* 044394 800C89B4 03E00008 */        jr $ra
  /* 044398 800C89B8 27BD0040 */     addiu $sp, $sp, 0x40

