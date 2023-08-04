.section .text
glabel func_ovl0_800CB4B0
  /* 046E90 800CB4B0 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 046E94 800CB4B4 44812000 */      mtc1 $at, $f4 # 1.0 to cop1
  /* 046E98 800CB4B8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 046E9C 800CB4BC 3C018004 */       lui $at, %hi(D_80046FA4)
  /* 046EA0 800CB4C0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 046EA4 800CB4C4 E4246FA4 */      swc1 $f4, %lo(D_80046FA4)($at)
  /* 046EA8 800CB4C8 0C032CD8 */       jal func_ovl0_800CB360
  /* 046EAC 800CB4CC 8C840074 */        lw $a0, 0x74($a0)
  /* 046EB0 800CB4D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 046EB4 800CB4D4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 046EB8 800CB4D8 03E00008 */        jr $ra
  /* 046EBC 800CB4DC 00000000 */       nop 

