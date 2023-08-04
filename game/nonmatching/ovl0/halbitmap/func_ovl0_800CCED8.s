.section .text
glabel func_ovl0_800CCED8
  /* 0488B8 800CCED8 948E0014 */       lhu $t6, 0x14($a0)
  /* 0488BC 800CCEDC 3C01800D */       lui $at, %hi(D_ovl0_800D62B0)
  /* 0488C0 800CCEE0 A42E62B0 */        sh $t6, %lo(D_ovl0_800D62B0)($at)
  /* 0488C4 800CCEE4 908F0030 */       lbu $t7, 0x30($a0)
  /* 0488C8 800CCEE8 3C01800D */       lui $at, %hi(D_ovl0_800D62B2)
  /* 0488CC 800CCEEC A42F62B2 */        sh $t7, %lo(D_ovl0_800D62B2)($at)
  /* 0488D0 800CCEF0 8C980020 */        lw $t8, 0x20($a0)
  /* 0488D4 800CCEF4 3C01800D */       lui $at, %hi(D_ovl0_800D62B8)
  /* 0488D8 800CCEF8 03E00008 */        jr $ra
  /* 0488DC 800CCEFC AC3862B8 */        sw $t8, %lo(D_ovl0_800D62B8)($at)

