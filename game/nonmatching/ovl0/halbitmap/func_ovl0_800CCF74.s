.section .text
glabel func_ovl0_800CCF74
  /* 048954 800CCF74 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 048958 800CCF78 AFBF001C */        sw $ra, 0x1c($sp)
  /* 04895C 800CCF7C AFB10018 */        sw $s1, 0x18($sp)
  /* 048960 800CCF80 AFB00014 */        sw $s0, 0x14($sp)
  /* 048964 800CCF84 8C900074 */        lw $s0, 0x74($a0)
  /* 048968 800CCF88 3C118004 */       lui $s1, %hi(gpDisplayListHead)
  /* 04896C 800CCF8C 263165B0 */     addiu $s1, $s1, %lo(gpDisplayListHead)
  /* 048970 800CCF90 5200000E */      beql $s0, $zero, .L800CCFCC
  /* 048974 800CCF94 8FBF001C */        lw $ra, 0x1c($sp)
  /* 048978 800CCF98 960E0024 */       lhu $t6, 0x24($s0)
  .L800CCF9C:
  /* 04897C 800CCF9C 02202025 */        or $a0, $s1, $zero
  /* 048980 800CCFA0 31CF0004 */      andi $t7, $t6, 4
  /* 048984 800CCFA4 55E00006 */      bnel $t7, $zero, .L800CCFC0
  /* 048988 800CCFA8 8E100008 */        lw $s0, 8($s0)
  /* 04898C 800CCFAC 0C033206 */       jal func_ovl0_800CC818
  /* 048990 800CCFB0 02002825 */        or $a1, $s0, $zero
  /* 048994 800CCFB4 0C0333AB */       jal func_ovl0_800CCEAC
  /* 048998 800CCFB8 00000000 */       nop 
  /* 04899C 800CCFBC 8E100008 */        lw $s0, 8($s0)
  .L800CCFC0:
  /* 0489A0 800CCFC0 5600FFF6 */      bnel $s0, $zero, .L800CCF9C
  /* 0489A4 800CCFC4 960E0024 */       lhu $t6, 0x24($s0)
  /* 0489A8 800CCFC8 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CCFCC:
  /* 0489AC 800CCFCC 8FB00014 */        lw $s0, 0x14($sp)
  /* 0489B0 800CCFD0 8FB10018 */        lw $s1, 0x18($sp)
  /* 0489B4 800CCFD4 03E00008 */        jr $ra
  /* 0489B8 800CCFD8 27BD0020 */     addiu $sp, $sp, 0x20

# draw 2d data image?
