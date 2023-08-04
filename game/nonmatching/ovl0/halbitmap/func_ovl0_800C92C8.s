.section .text
glabel func_ovl0_800C92C8
  /* 044CA8 800C92C8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 044CAC 800C92CC AFB10018 */        sw $s1, 0x18($sp)
  /* 044CB0 800C92D0 AFB00014 */        sw $s0, 0x14($sp)
  /* 044CB4 800C92D4 00808825 */        or $s1, $a0, $zero
  /* 044CB8 800C92D8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 044CBC 800C92DC 10800008 */      beqz $a0, .L800C9300
  /* 044CC0 800C92E0 00808025 */        or $s0, $a0, $zero
  .L800C92E4:
  /* 044CC4 800C92E4 0C00332F */       jal func_8000CCBC
  /* 044CC8 800C92E8 02002025 */        or $a0, $s0, $zero
  /* 044CCC 800C92EC 02002025 */        or $a0, $s0, $zero
  /* 044CD0 800C92F0 0C0321BA */       jal func_ovl0_800C86E8
  /* 044CD4 800C92F4 02202825 */        or $a1, $s1, $zero
  /* 044CD8 800C92F8 1440FFFA */      bnez $v0, .L800C92E4
  /* 044CDC 800C92FC 00408025 */        or $s0, $v0, $zero
  .L800C9300:
  /* 044CE0 800C9300 8FBF001C */        lw $ra, 0x1c($sp)
  /* 044CE4 800C9304 8FB00014 */        lw $s0, 0x14($sp)
  /* 044CE8 800C9308 8FB10018 */        lw $s1, 0x18($sp)
  /* 044CEC 800C930C 03E00008 */        jr $ra
  /* 044CF0 800C9310 27BD0020 */     addiu $sp, $sp, 0x20

