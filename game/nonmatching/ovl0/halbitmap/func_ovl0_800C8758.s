.section .late_rodata

glabel D_ovl0_800D5E7C
  /* E63C 05185C 800D5E7C */
  .word 0xff7fffff # .float -3.4028235e38


.section .text
glabel func_ovl0_800C8758
  /* 044138 800C8758 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 04413C 800C875C F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 044140 800C8760 AFBF0034 */        sw $ra, 0x34($sp)
  /* 044144 800C8764 AFB20030 */        sw $s2, 0x30($sp)
  /* 044148 800C8768 AFB1002C */        sw $s1, 0x2c($sp)
  /* 04414C 800C876C AFB00028 */        sw $s0, 0x28($sp)
  /* 044150 800C8770 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 044154 800C8774 4486A000 */      mtc1 $a2, $f20
  /* 044158 800C8778 8C8E0004 */        lw $t6, 4($a0)
  /* 04415C 800C877C 00A08825 */        or $s1, $a1, $zero
  /* 044160 800C8780 00809025 */        or $s2, $a0, $zero
  /* 044164 800C8784 00808025 */        or $s0, $a0, $zero
  /* 044168 800C8788 10800012 */      beqz $a0, .L800C87D4
  /* 04416C 800C878C E5D40078 */      swc1 $f20, 0x78($t6)
  /* 044170 800C8790 3C01800D */       lui $at, %hi(D_ovl0_800D5E7C)
  /* 044174 800C8794 C4365E7C */      lwc1 $f22, %lo(D_ovl0_800D5E7C)($at)
  .L800C8798:
  /* 044178 800C8798 8E250000 */        lw $a1, ($s1)
  /* 04417C 800C879C 50A00007 */      beql $a1, $zero, .L800C87BC
  /* 044180 800C87A0 E6160074 */      swc1 $f22, 0x74($s0)
  /* 044184 800C87A4 4406A000 */      mfc1 $a2, $f20
  /* 044188 800C87A8 0C002F47 */       jal omAddDObjAnimAll
  /* 04418C 800C87AC 02002025 */        or $a0, $s0, $zero
  /* 044190 800C87B0 10000003 */         b .L800C87C0
  /* 044194 800C87B4 26310004 */     addiu $s1, $s1, 4
  /* 044198 800C87B8 E6160074 */      swc1 $f22, 0x74($s0)
  .L800C87BC:
  /* 04419C 800C87BC 26310004 */     addiu $s1, $s1, 4
  .L800C87C0:
  /* 0441A0 800C87C0 02002025 */        or $a0, $s0, $zero
  /* 0441A4 800C87C4 0C0321BA */       jal func_ovl0_800C86E8
  /* 0441A8 800C87C8 02402825 */        or $a1, $s2, $zero
  /* 0441AC 800C87CC 1440FFF2 */      bnez $v0, .L800C8798
  /* 0441B0 800C87D0 00408025 */        or $s0, $v0, $zero
  .L800C87D4:
  /* 0441B4 800C87D4 8FBF0034 */        lw $ra, 0x34($sp)
  /* 0441B8 800C87D8 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 0441BC 800C87DC D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 0441C0 800C87E0 8FB00028 */        lw $s0, 0x28($sp)
  /* 0441C4 800C87E4 8FB1002C */        lw $s1, 0x2c($sp)
  /* 0441C8 800C87E8 8FB20030 */        lw $s2, 0x30($sp)
  /* 0441CC 800C87EC 03E00008 */        jr $ra
  /* 0441D0 800C87F0 27BD0038 */     addiu $sp, $sp, 0x38

