.section .late_rodata

glabel D_ovl0_800D5E70
  /* E630 051850 800D5E70 */
  .word 0x3fc90fdb # .float 1.5707964

.section .text
glabel func_ovl0_800C7C98
  /* 043678 800C7C98 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 04367C 800C7C9C AFB00018 */        sw $s0, 0x18($sp)
  /* 043680 800C7CA0 00808025 */        or $s0, $a0, $zero
  /* 043684 800C7CA4 AFA60030 */        sw $a2, 0x30($sp)
  /* 043688 800C7CA8 00A03025 */        or $a2, $a1, $zero
  /* 04368C 800C7CAC AFBF001C */        sw $ra, 0x1c($sp)
  /* 043690 800C7CB0 AFA5002C */        sw $a1, 0x2c($sp)
  /* 043694 800C7CB4 00A02025 */        or $a0, $a1, $zero
  /* 043698 800C7CB8 02002825 */        or $a1, $s0, $zero
  /* 04369C 800C7CBC 0C031F03 */       jal func_ovl0_800C7C0C
  /* 0436A0 800C7CC0 AFA6002C */        sw $a2, 0x2c($sp)
  /* 0436A4 800C7CC4 44802000 */      mtc1 $zero, $f4
  /* 0436A8 800C7CC8 8FA6002C */        lw $a2, 0x2c($sp)
  /* 0436AC 800C7CCC 46000086 */     mov.s $f2, $f0
  /* 0436B0 800C7CD0 4604003E */    c.le.s $f0, $f4
  /* 0436B4 800C7CD4 C7A60030 */      lwc1 $f6, 0x30($sp)
  /* 0436B8 800C7CD8 3C01800D */       lui $at, %hi(D_ovl0_800D5E70)
  /* 0436BC 800C7CDC 45020030 */     bc1fl .L800C7DA0
  /* 0436C0 800C7CE0 00001025 */        or $v0, $zero, $zero
  /* 0436C4 800C7CE4 C4285E70 */      lwc1 $f8, %lo(D_ovl0_800D5E70)($at)
  /* 0436C8 800C7CE8 AFA6002C */        sw $a2, 0x2c($sp)
  /* 0436CC 800C7CEC E7A20024 */      swc1 $f2, 0x24($sp)
  /* 0436D0 800C7CF0 0C00D734 */       jal cosf
  /* 0436D4 800C7CF4 46083300 */     add.s $f12, $f6, $f8
  /* 0436D8 800C7CF8 C7A20024 */      lwc1 $f2, 0x24($sp)
  /* 0436DC 800C7CFC 8FA6002C */        lw $a2, 0x2c($sp)
  /* 0436E0 800C7D00 02002025 */        or $a0, $s0, $zero
  /* 0436E4 800C7D04 4602003E */    c.le.s $f0, $f2
  /* 0436E8 800C7D08 00000000 */       nop 
  /* 0436EC 800C7D0C 45020024 */     bc1fl .L800C7DA0
  /* 0436F0 800C7D10 00001025 */        or $v0, $zero, $zero
  /* 0436F4 800C7D14 C4CA0000 */      lwc1 $f10, ($a2)
  /* 0436F8 800C7D18 C6100004 */      lwc1 $f16, 4($s0)
  /* 0436FC 800C7D1C C4C40004 */      lwc1 $f4, 4($a2)
  /* 043700 800C7D20 C6060000 */      lwc1 $f6, ($s0)
  /* 043704 800C7D24 46105482 */     mul.s $f18, $f10, $f16
  /* 043708 800C7D28 44805000 */      mtc1 $zero, $f10
  /* 04370C 800C7D2C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 043710 800C7D30 46062202 */     mul.s $f8, $f4, $f6
  /* 043714 800C7D34 46089301 */     sub.s $f12, $f18, $f8
  /* 043718 800C7D38 460A603C */    c.lt.s $f12, $f10
  /* 04371C 800C7D3C 00000000 */       nop 
  /* 043720 800C7D40 45020006 */     bc1fl .L800C7D5C
  /* 043724 800C7D44 44816000 */      mtc1 $at, $f12 # 1.0 to cop1
  /* 043728 800C7D48 3C01BF80 */       lui $at, (0xBF800000 >> 16) # -1.0
  /* 04372C 800C7D4C 44816000 */      mtc1 $at, $f12 # -1.0 to cop1
  /* 043730 800C7D50 10000004 */         b .L800C7D64
  /* 043734 800C7D54 AFA6002C */        sw $a2, 0x2c($sp)
  /* 043738 800C7D58 44816000 */      mtc1 $at, $f12 # -1.0 to cop1
  .L800C7D5C:
  /* 04373C 800C7D5C 00000000 */       nop 
  /* 043740 800C7D60 AFA6002C */        sw $a2, 0x2c($sp)
  .L800C7D64:
  /* 043744 800C7D64 0C031EA1 */       jal func_ovl0_800C7A84
  /* 043748 800C7D68 E7AC0020 */      swc1 $f12, 0x20($sp)
  /* 04374C 800C7D6C C7AC0020 */      lwc1 $f12, 0x20($sp)
  /* 043750 800C7D70 8FA6002C */        lw $a2, 0x2c($sp)
  /* 043754 800C7D74 24020001 */     addiu $v0, $zero, 1
  /* 043758 800C7D78 460C0082 */     mul.s $f2, $f0, $f12
  /* 04375C 800C7D7C C4D00004 */      lwc1 $f16, 4($a2)
  /* 043760 800C7D80 46008107 */     neg.s $f4, $f16
  /* 043764 800C7D84 46022182 */     mul.s $f6, $f4, $f2
  /* 043768 800C7D88 E6060000 */      swc1 $f6, ($s0)
  /* 04376C 800C7D8C C4D20000 */      lwc1 $f18, ($a2)
  /* 043770 800C7D90 46029202 */     mul.s $f8, $f18, $f2
  /* 043774 800C7D94 10000002 */         b .L800C7DA0
  /* 043778 800C7D98 E6080004 */      swc1 $f8, 4($s0)
  /* 04377C 800C7D9C 00001025 */        or $v0, $zero, $zero
  .L800C7DA0:
  /* 043780 800C7DA0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 043784 800C7DA4 8FB00018 */        lw $s0, 0x18($sp)
  /* 043788 800C7DA8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 04378C 800C7DAC 03E00008 */        jr $ra
  /* 043790 800C7DB0 00000000 */       nop 

