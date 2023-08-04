.section .text
glabel func_ovl0_800CD5AC
  /* 048F8C 800CD5AC C4840004 */      lwc1 $f4, 4($a0)
  /* 048F90 800CD5B0 C4A60008 */      lwc1 $f6, 8($a1)
  /* 048F94 800CD5B4 C48A0008 */      lwc1 $f10, 8($a0)
  /* 048F98 800CD5B8 C4B00004 */      lwc1 $f16, 4($a1)
  /* 048F9C 800CD5BC 46062202 */     mul.s $f8, $f4, $f6
  /* 048FA0 800CD5C0 00000000 */       nop 
  /* 048FA4 800CD5C4 46105482 */     mul.s $f18, $f10, $f16
  /* 048FA8 800CD5C8 46124101 */     sub.s $f4, $f8, $f18
  /* 048FAC 800CD5CC E4C40000 */      swc1 $f4, ($a2)
  /* 048FB0 800CD5D0 C4AA0000 */      lwc1 $f10, ($a1)
  /* 048FB4 800CD5D4 C4860008 */      lwc1 $f6, 8($a0)
  /* 048FB8 800CD5D8 C4880000 */      lwc1 $f8, ($a0)
  /* 048FBC 800CD5DC C4B20008 */      lwc1 $f18, 8($a1)
  /* 048FC0 800CD5E0 460A3402 */     mul.s $f16, $f6, $f10
  /* 048FC4 800CD5E4 00000000 */       nop 
  /* 048FC8 800CD5E8 46124102 */     mul.s $f4, $f8, $f18
  /* 048FCC 800CD5EC 46048181 */     sub.s $f6, $f16, $f4
  /* 048FD0 800CD5F0 E4C60004 */      swc1 $f6, 4($a2)
  /* 048FD4 800CD5F4 C4A80004 */      lwc1 $f8, 4($a1)
  /* 048FD8 800CD5F8 C48A0000 */      lwc1 $f10, ($a0)
  /* 048FDC 800CD5FC C4A40000 */      lwc1 $f4, ($a1)
  /* 048FE0 800CD600 C4900004 */      lwc1 $f16, 4($a0)
  /* 048FE4 800CD604 46085482 */     mul.s $f18, $f10, $f8
  /* 048FE8 800CD608 00000000 */       nop 
  /* 048FEC 800CD60C 46048182 */     mul.s $f6, $f16, $f4
  /* 048FF0 800CD610 46069281 */     sub.s $f10, $f18, $f6
  /* 048FF4 800CD614 03E00008 */        jr $ra
  /* 048FF8 800CD618 E4CA0008 */      swc1 $f10, 8($a2)

  /* 048FFC 800CD61C 00000000 */       nop 
