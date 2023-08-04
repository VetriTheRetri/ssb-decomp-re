.section .text
glabel func_ovl0_800CB608
  /* 046FE8 800CB608 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 046FEC 800CB60C AFBF0014 */        sw $ra, 0x14($sp)
  /* 046FF0 800CB610 8C850004 */        lw $a1, 4($a0)
  /* 046FF4 800CB614 00803025 */        or $a2, $a0, $zero
  /* 046FF8 800CB618 10A00004 */      beqz $a1, .L800CB62C
  /* 046FFC 800CB61C 00A02025 */        or $a0, $a1, $zero
  /* 047000 800CB620 0C032D82 */       jal func_ovl0_800CB608
  /* 047004 800CB624 AFA60018 */        sw $a2, 0x18($sp)
  /* 047008 800CB628 8FA60018 */        lw $a2, 0x18($sp)
  .L800CB62C:
  /* 04700C 800CB62C 0C0026A1 */       jal omEjectGObjCommon
  /* 047010 800CB630 00C02025 */        or $a0, $a2, $zero
  /* 047014 800CB634 8FBF0014 */        lw $ra, 0x14($sp)
  /* 047018 800CB638 27BD0018 */     addiu $sp, $sp, 0x18
  /* 04701C 800CB63C 03E00008 */        jr $ra
  /* 047020 800CB640 00000000 */       nop 

