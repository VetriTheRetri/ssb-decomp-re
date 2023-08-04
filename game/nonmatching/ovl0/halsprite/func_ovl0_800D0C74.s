.section .text
glabel func_ovl0_800D0C74
  /* 04C654 800D0C74 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 04C658 800D0C78 AFB60030 */        sw $s6, 0x30($sp)
  /* 04C65C 800D0C7C AFB5002C */        sw $s5, 0x2c($sp)
  /* 04C660 800D0C80 AFB40028 */        sw $s4, 0x28($sp)
  /* 04C664 800D0C84 AFB20020 */        sw $s2, 0x20($sp)
  /* 04C668 800D0C88 AFBF0034 */        sw $ra, 0x34($sp)
  /* 04C66C 800D0C8C AFB30024 */        sw $s3, 0x24($sp)
  /* 04C670 800D0C90 AFB1001C */        sw $s1, 0x1c($sp)
  /* 04C674 800D0C94 AFB00018 */        sw $s0, 0x18($sp)
  /* 04C678 800D0C98 3C16800D */       lui $s6, %hi(D_ovl0_800D6358)
  /* 04C67C 800D0C9C 8C93007C */        lw $s3, 0x7c($a0)
  /* 04C680 800D0CA0 26D66358 */     addiu $s6, $s6, %lo(D_ovl0_800D6358)
  /* 04C684 800D0CA4 00009025 */        or $s2, $zero, $zero
  /* 04C688 800D0CA8 3C140001 */       lui $s4, 1
  /* 04C68C 800D0CAC 24150010 */     addiu $s5, $zero, 0x10
  .L800D0CB0:
  /* 04C690 800D0CB0 02747024 */       and $t6, $s3, $s4
  /* 04C694 800D0CB4 15C00012 */      bnez $t6, .L800D0D00
  /* 04C698 800D0CB8 00127880 */       sll $t7, $s2, 2
  /* 04C69C 800D0CBC 02CFC021 */      addu $t8, $s6, $t7
  /* 04C6A0 800D0CC0 8F100000 */        lw $s0, ($t8)
  /* 04C6A4 800D0CC4 00008825 */        or $s1, $zero, $zero
  /* 04C6A8 800D0CC8 1200000D */      beqz $s0, .L800D0D00
  /* 04C6AC 800D0CCC 02002025 */        or $a0, $s0, $zero
  .L800D0CD0:
  /* 04C6B0 800D0CD0 02202825 */        or $a1, $s1, $zero
  /* 04C6B4 800D0CD4 0C033BD3 */       jal func_ovl0_800CEF4C
  /* 04C6B8 800D0CD8 02403025 */        or $a2, $s2, $zero
  /* 04C6BC 800D0CDC 8E190000 */        lw $t9, ($s0)
  /* 04C6C0 800D0CE0 54590005 */      bnel $v0, $t9, .L800D0CF8
  /* 04C6C4 800D0CE4 00408025 */        or $s0, $v0, $zero
  /* 04C6C8 800D0CE8 02008825 */        or $s1, $s0, $zero
  /* 04C6CC 800D0CEC 10000002 */         b .L800D0CF8
  /* 04C6D0 800D0CF0 00408025 */        or $s0, $v0, $zero
  /* 04C6D4 800D0CF4 00408025 */        or $s0, $v0, $zero
  .L800D0CF8:
  /* 04C6D8 800D0CF8 5600FFF5 */      bnel $s0, $zero, .L800D0CD0
  /* 04C6DC 800D0CFC 02002025 */        or $a0, $s0, $zero
  .L800D0D00:
  /* 04C6E0 800D0D00 26520001 */     addiu $s2, $s2, 1
  /* 04C6E4 800D0D04 1655FFEA */       bne $s2, $s5, .L800D0CB0
  /* 04C6E8 800D0D08 00139842 */       srl $s3, $s3, 1
  /* 04C6EC 800D0D0C 8FBF0034 */        lw $ra, 0x34($sp)
  /* 04C6F0 800D0D10 8FB00018 */        lw $s0, 0x18($sp)
  /* 04C6F4 800D0D14 8FB1001C */        lw $s1, 0x1c($sp)
  /* 04C6F8 800D0D18 8FB20020 */        lw $s2, 0x20($sp)
  /* 04C6FC 800D0D1C 8FB30024 */        lw $s3, 0x24($sp)
  /* 04C700 800D0D20 8FB40028 */        lw $s4, 0x28($sp)
  /* 04C704 800D0D24 8FB5002C */        lw $s5, 0x2c($sp)
  /* 04C708 800D0D28 8FB60030 */        lw $s6, 0x30($sp)
  /* 04C70C 800D0D2C 03E00008 */        jr $ra
  /* 04C710 800D0D30 27BD0038 */     addiu $sp, $sp, 0x38

