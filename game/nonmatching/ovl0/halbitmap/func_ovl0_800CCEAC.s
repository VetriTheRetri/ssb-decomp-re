.section .text
glabel func_ovl0_800CCEAC
  /* 04888C 800CCEAC 240E0800 */     addiu $t6, $zero, 0x800
  /* 048890 800CCEB0 3C01800D */       lui $at, %hi(D_ovl0_800D62B0)
  /* 048894 800CCEB4 A42E62B0 */        sh $t6, %lo(D_ovl0_800D62B0)($at)
  /* 048898 800CCEB8 3C01800D */       lui $at, %hi(D_ovl0_800D62B2)
  /* 04889C 800CCEBC 340FFFFF */       ori $t7, $zero, 0xffff
  /* 0488A0 800CCEC0 A42F62B2 */        sh $t7, %lo(D_ovl0_800D62B2)($at)
  /* 0488A4 800CCEC4 3C01800D */       lui $at, %hi(D_ovl0_800D62B4)
  /* 0488A8 800CCEC8 AC2062B4 */        sw $zero, %lo(D_ovl0_800D62B4)($at)
  /* 0488AC 800CCECC 3C01800D */       lui $at, %hi(D_ovl0_800D62B8)
  /* 0488B0 800CCED0 03E00008 */        jr $ra
  /* 0488B4 800CCED4 AC2062B8 */        sw $zero, %lo(D_ovl0_800D62B8)($at)

