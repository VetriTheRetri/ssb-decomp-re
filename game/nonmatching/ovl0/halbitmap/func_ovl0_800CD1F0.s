.section .text
glabel func_ovl0_800CD1F0
  /* 048BD0 800CD1F0 3C01800D */       lui $at, %hi(D_ovl0_800D62C4)
  /* 048BD4 800CD1F4 AC2462C4 */        sw $a0, %lo(D_ovl0_800D62C4)($at)
  /* 048BD8 800CD1F8 3C01800D */       lui $at, %hi(D_ovl0_800D62C8)
  /* 048BDC 800CD1FC AC2662C8 */        sw $a2, %lo(D_ovl0_800D62C8)($at)
  /* 048BE0 800CD200 3C01800D */       lui $at, %hi(D_ovl0_800D62BC)
  /* 048BE4 800CD204 AC2562BC */        sw $a1, %lo(D_ovl0_800D62BC)($at)
  /* 048BE8 800CD208 3C01800D */       lui $at, %hi(D_ovl0_800D62C0)
  /* 048BEC 800CD20C 03E00008 */        jr $ra
  /* 048BF0 800CD210 AC2762C0 */        sw $a3, %lo(D_ovl0_800D62C0)($at)

