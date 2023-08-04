.section .text
glabel hal_translate
  /* 01C5C4 8001B9C4 3C014780 */       lui $at, (0x47800000 >> 16) # 65536.0
  /* 01C5C8 8001B9C8 44810000 */      mtc1 $at, $f0 # 65536.0 to cop1
  /* 01C5CC 8001B9CC 44857000 */      mtc1 $a1, $f14
  /* 01C5D0 8001B9D0 44866000 */      mtc1 $a2, $f12
  /* 01C5D4 8001B9D4 AFA7000C */        sw $a3, 0xc($sp)
  /* 01C5D8 8001B9D8 46007102 */     mul.s $f4, $f14, $f0
  /* 01C5DC 8001B9DC 3C07FFFF */       lui $a3, 0xffff
  /* 01C5E0 8001B9E0 3C060001 */       lui $a2, 1
  /* 01C5E4 8001B9E4 46006202 */     mul.s $f8, $f12, $f0
  /* 01C5E8 8001B9E8 240E0001 */     addiu $t6, $zero, 1
  /* 01C5EC 8001B9EC AC860000 */        sw $a2, ($a0)
  /* 01C5F0 8001B9F0 AC800020 */        sw $zero, 0x20($a0)
  /* 01C5F4 8001B9F4 AC800004 */        sw $zero, 4($a0)
  /* 01C5F8 8001B9F8 AC800024 */        sw $zero, 0x24($a0)
  /* 01C5FC 8001B9FC 4600218D */ trunc.w.s $f6, $f4
  /* 01C600 8001BA00 AC8E0008 */        sw $t6, 8($a0)
  /* 01C604 8001BA04 AC800028 */        sw $zero, 0x28($a0)
  /* 01C608 8001BA08 4600428D */ trunc.w.s $f10, $f8
  /* 01C60C 8001BA0C 44033000 */      mfc1 $v1, $f6
  /* 01C610 8001BA10 AC80000C */        sw $zero, 0xc($a0)
  /* 01C614 8001BA14 AC80002C */        sw $zero, 0x2c($a0)
  /* 01C618 8001BA18 44025000 */      mfc1 $v0, $f10
  /* 01C61C 8001BA1C 0067C824 */       and $t9, $v1, $a3
  /* 01C620 8001BA20 00035400 */       sll $t2, $v1, 0x10
  /* 01C624 8001BA24 00024402 */       srl $t0, $v0, 0x10
  /* 01C628 8001BA28 304BFFFF */      andi $t3, $v0, 0xffff
  /* 01C62C 8001BA2C 03284825 */        or $t1, $t9, $t0
  /* 01C630 8001BA30 014B6025 */        or $t4, $t2, $t3
  /* 01C634 8001BA34 AC800010 */        sw $zero, 0x10($a0)
  /* 01C638 8001BA38 AC800030 */        sw $zero, 0x30($a0)
  /* 01C63C 8001BA3C AC860014 */        sw $a2, 0x14($a0)
  /* 01C640 8001BA40 AC800034 */        sw $zero, 0x34($a0)
  /* 01C644 8001BA44 AC890018 */        sw $t1, 0x18($a0)
  /* 01C648 8001BA48 AC8C0038 */        sw $t4, 0x38($a0)
  /* 01C64C 8001BA4C C7B0000C */      lwc1 $f16, 0xc($sp)
  /* 01C650 8001BA50 46008482 */     mul.s $f18, $f16, $f0
  /* 01C654 8001BA54 4600910D */ trunc.w.s $f4, $f18
  /* 01C658 8001BA58 44052000 */      mfc1 $a1, $f4
  /* 01C65C 8001BA5C 00000000 */       nop 
  /* 01C660 8001BA60 00A77024 */       and $t6, $a1, $a3
  /* 01C664 8001BA64 35CF0001 */       ori $t7, $t6, 1
  /* 01C668 8001BA68 0005C400 */       sll $t8, $a1, 0x10
  /* 01C66C 8001BA6C AC8F001C */        sw $t7, 0x1c($a0)
  /* 01C670 8001BA70 03E00008 */        jr $ra
  /* 01C674 8001BA74 AC98003C */        sw $t8, 0x3c($a0)

