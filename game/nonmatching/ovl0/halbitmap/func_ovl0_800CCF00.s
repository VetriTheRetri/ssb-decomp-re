.section .text
glabel func_ovl0_800CCF00
  /* 0488E0 800CCF00 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 0488E4 800CCF04 AFBF001C */        sw $ra, 0x1c($sp)
  /* 0488E8 800CCF08 AFB10018 */        sw $s1, 0x18($sp)
  /* 0488EC 800CCF0C AFB00014 */        sw $s0, 0x14($sp)
  /* 0488F0 800CCF10 8C900074 */        lw $s0, 0x74($a0)
  /* 0488F4 800CCF14 3C118004 */       lui $s1, %hi(gpDisplayListHead)
  /* 0488F8 800CCF18 263165B0 */     addiu $s1, $s1, %lo(gpDisplayListHead)
  /* 0488FC 800CCF1C 52000011 */      beql $s0, $zero, .L800CCF64
  /* 048900 800CCF20 8FBF001C */        lw $ra, 0x1c($sp)
  /* 048904 800CCF24 960E0024 */       lhu $t6, 0x24($s0)
  .L800CCF28:
  /* 048908 800CCF28 02202025 */        or $a0, $s1, $zero
  /* 04890C 800CCF2C 31CF0004 */      andi $t7, $t6, 4
  /* 048910 800CCF30 55E00009 */      bnel $t7, $zero, .L800CCF58
  /* 048914 800CCF34 8E100008 */        lw $s0, 8($s0)
  /* 048918 800CCF38 0C033046 */       jal func_ovl0_800CC118
  /* 04891C 800CCF3C 02002825 */        or $a1, $s0, $zero
  /* 048920 800CCF40 02202025 */        or $a0, $s1, $zero
  /* 048924 800CCF44 0C033206 */       jal func_ovl0_800CC818
  /* 048928 800CCF48 02002825 */        or $a1, $s0, $zero
  /* 04892C 800CCF4C 0C0333B6 */       jal func_ovl0_800CCED8
  /* 048930 800CCF50 26040010 */     addiu $a0, $s0, 0x10
  /* 048934 800CCF54 8E100008 */        lw $s0, 8($s0)
  .L800CCF58:
  /* 048938 800CCF58 5600FFF3 */      bnel $s0, $zero, .L800CCF28
  /* 04893C 800CCF5C 960E0024 */       lhu $t6, 0x24($s0)
  /* 048940 800CCF60 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CCF64:
  /* 048944 800CCF64 8FB00014 */        lw $s0, 0x14($sp)
  /* 048948 800CCF68 8FB10018 */        lw $s1, 0x18($sp)
  /* 04894C 800CCF6C 03E00008 */        jr $ra
  /* 048950 800CCF70 27BD0020 */     addiu $sp, $sp, 0x20

