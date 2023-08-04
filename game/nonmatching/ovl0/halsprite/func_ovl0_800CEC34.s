.section .late_rodata
glabel D_ovl0_800D5FC0
  /* E780 0519A0 800D5FC0 */
  .word 0x40c90fdb # .float 6.2831855

.section .text
glabel func_ovl0_800CEC34
  /* 04A614 800CEC34 27BDFF90 */     addiu $sp, $sp, -0x70
  /* 04A618 800CEC38 AFBF003C */        sw $ra, 0x3c($sp)
  /* 04A61C 800CEC3C AFB00038 */        sw $s0, 0x38($sp)
  /* 04A620 800CEC40 F7BA0030 */      sdc1 $f26, 0x30($sp)
  /* 04A624 800CEC44 F7B80028 */      sdc1 $f24, 0x28($sp)
  /* 04A628 800CEC48 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 04A62C 800CEC4C F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 04A630 800CEC50 AFA50074 */        sw $a1, 0x74($sp)
  /* 04A634 800CEC54 C4940030 */      lwc1 $f20, 0x30($a0)
  /* 04A638 800CEC58 C4980034 */      lwc1 $f24, 0x34($a0)
  /* 04A63C 800CEC5C 00808025 */        or $s0, $a0, $zero
  /* 04A640 800CEC60 C496002C */      lwc1 $f22, 0x2c($a0)
  /* 04A644 800CEC64 4600A306 */     mov.s $f12, $f20
  /* 04A648 800CEC68 0C00618F */       jal atan2f
  /* 04A64C 800CEC6C 4600C386 */     mov.s $f14, $f24
  /* 04A650 800CEC70 E7A00058 */      swc1 $f0, 0x58($sp)
  /* 04A654 800CEC74 0C00C0FC */       jal __sinf
  /* 04A658 800CEC78 46000306 */     mov.s $f12, $f0
  /* 04A65C 800CEC7C 46000686 */     mov.s $f26, $f0
  /* 04A660 800CEC80 0C00D734 */       jal cosf
  /* 04A664 800CEC84 C7AC0058 */      lwc1 $f12, 0x58($sp)
  /* 04A668 800CEC88 461AA102 */     mul.s $f4, $f20, $f26
  /* 04A66C 800CEC8C E7A0004C */      swc1 $f0, 0x4c($sp)
  /* 04A670 800CEC90 4600B306 */     mov.s $f12, $f22
  /* 04A674 800CEC94 4600C182 */     mul.s $f6, $f24, $f0
  /* 04A678 800CEC98 0C00618F */       jal atan2f
  /* 04A67C 800CEC9C 46062380 */     add.s $f14, $f4, $f6
  /* 04A680 800CECA0 E7A00054 */      swc1 $f0, 0x54($sp)
  /* 04A684 800CECA4 0C00C0FC */       jal __sinf
  /* 04A688 800CECA8 46000306 */     mov.s $f12, $f0
  /* 04A68C 800CECAC E7A00048 */      swc1 $f0, 0x48($sp)
  /* 04A690 800CECB0 0C00D734 */       jal cosf
  /* 04A694 800CECB4 C7AC0054 */      lwc1 $f12, 0x54($sp)
  /* 04A698 800CECB8 4616B202 */     mul.s $f8, $f22, $f22
  /* 04A69C 800CECBC E7A00044 */      swc1 $f0, 0x44($sp)
  /* 04A6A0 800CECC0 4614A282 */     mul.s $f10, $f20, $f20
  /* 04A6A4 800CECC4 460A4100 */     add.s $f4, $f8, $f10
  /* 04A6A8 800CECC8 4618C182 */     mul.s $f6, $f24, $f24
  /* 04A6AC 800CECCC 0C00CD44 */       jal sqrtf
  /* 04A6B0 800CECD0 46062300 */     add.s $f12, $f4, $f6
  /* 04A6B4 800CECD4 0C006252 */       jal lbRandom_GetFloat
  /* 04A6B8 800CECD8 E7A0005C */      swc1 $f0, 0x5c($sp)
  /* 04A6BC 800CECDC 3C01800D */       lui $at, %hi(D_ovl0_800D5FC0)
  /* 04A6C0 800CECE0 C4285FC0 */      lwc1 $f8, %lo(D_ovl0_800D5FC0)($at)
  /* 04A6C4 800CECE4 C7AC0074 */      lwc1 $f12, 0x74($sp)
  /* 04A6C8 800CECE8 46080502 */     mul.s $f20, $f0, $f8
  /* 04A6CC 800CECEC 0C00C0FC */       jal __sinf
  /* 04A6D0 800CECF0 00000000 */       nop 
  /* 04A6D4 800CECF4 C7AA005C */      lwc1 $f10, 0x5c($sp)
  /* 04A6D8 800CECF8 4600A306 */     mov.s $f12, $f20
  /* 04A6DC 800CECFC 460A0602 */     mul.s $f24, $f0, $f10
  /* 04A6E0 800CED00 0C00D734 */       jal cosf
  /* 04A6E4 800CED04 00000000 */       nop 
  /* 04A6E8 800CED08 46180582 */     mul.s $f22, $f0, $f24
  /* 04A6EC 800CED0C 0C00C0FC */       jal __sinf
  /* 04A6F0 800CED10 4600A306 */     mov.s $f12, $f20
  /* 04A6F4 800CED14 46180502 */     mul.s $f20, $f0, $f24
  /* 04A6F8 800CED18 0C00D734 */       jal cosf
  /* 04A6FC 800CED1C C7AC0074 */      lwc1 $f12, 0x74($sp)
  /* 04A700 800CED20 C7A4005C */      lwc1 $f4, 0x5c($sp)
  /* 04A704 800CED24 C7B00044 */      lwc1 $f16, 0x44($sp)
  /* 04A708 800CED28 C7AE0048 */      lwc1 $f14, 0x48($sp)
  /* 04A70C 800CED2C 46040082 */     mul.s $f2, $f0, $f4
  /* 04A710 800CED30 4600B307 */     neg.s $f12, $f22
  /* 04A714 800CED34 C7B2004C */      lwc1 $f18, 0x4c($sp)
  /* 04A718 800CED38 4610B182 */     mul.s $f6, $f22, $f16
  /* 04A71C 800CED3C 00000000 */       nop 
  /* 04A720 800CED40 460E1202 */     mul.s $f8, $f2, $f14
  /* 04A724 800CED44 00000000 */       nop 
  /* 04A728 800CED48 461A6102 */     mul.s $f4, $f12, $f26
  /* 04A72C 800CED4C 46083280 */     add.s $f10, $f6, $f8
  /* 04A730 800CED50 460E2182 */     mul.s $f6, $f4, $f14
  /* 04A734 800CED54 E60A002C */      swc1 $f10, 0x2c($s0)
  /* 04A738 800CED58 4612A202 */     mul.s $f8, $f20, $f18
  /* 04A73C 800CED5C 00000000 */       nop 
  /* 04A740 800CED60 461A1102 */     mul.s $f4, $f2, $f26
  /* 04A744 800CED64 46083280 */     add.s $f10, $f6, $f8
  /* 04A748 800CED68 46102182 */     mul.s $f6, $f4, $f16
  /* 04A74C 800CED6C 00000000 */       nop 
  /* 04A750 800CED70 46126102 */     mul.s $f4, $f12, $f18
  /* 04A754 800CED74 46065200 */     add.s $f8, $f10, $f6
  /* 04A758 800CED78 460E2282 */     mul.s $f10, $f4, $f14
  /* 04A75C 800CED7C E6080030 */      swc1 $f8, 0x30($s0)
  /* 04A760 800CED80 461AA182 */     mul.s $f6, $f20, $f26
  /* 04A764 800CED84 00000000 */       nop 
  /* 04A768 800CED88 46121102 */     mul.s $f4, $f2, $f18
  /* 04A76C 800CED8C 46065201 */     sub.s $f8, $f10, $f6
  /* 04A770 800CED90 46102282 */     mul.s $f10, $f4, $f16
  /* 04A774 800CED94 460A4180 */     add.s $f6, $f8, $f10
  /* 04A778 800CED98 E6060034 */      swc1 $f6, 0x34($s0)
  /* 04A77C 800CED9C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 04A780 800CEDA0 8FB00038 */        lw $s0, 0x38($sp)
  /* 04A784 800CEDA4 D7BA0030 */      ldc1 $f26, 0x30($sp)
  /* 04A788 800CEDA8 D7B80028 */      ldc1 $f24, 0x28($sp)
  /* 04A78C 800CEDAC D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 04A790 800CEDB0 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 04A794 800CEDB4 03E00008 */        jr $ra
  /* 04A798 800CEDB8 27BD0070 */     addiu $sp, $sp, 0x70

