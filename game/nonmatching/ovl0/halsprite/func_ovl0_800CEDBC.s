.section .text
glabel func_ovl0_800CEDBC
  /* 04A79C 800CEDBC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 04A7A0 800CEDC0 10A00039 */      beqz $a1, .L800CEEA8
  /* 04A7A4 800CEDC4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 04A7A8 800CEDC8 C4A4001C */      lwc1 $f4, 0x1c($a1)
  /* 04A7AC 800CEDCC C4860020 */      lwc1 $f6, 0x20($a0)
  /* 04A7B0 800CEDD0 C4A80020 */      lwc1 $f8, 0x20($a1)
  /* 04A7B4 800CEDD4 C48A0024 */      lwc1 $f10, 0x24($a0)
  /* 04A7B8 800CEDD8 46062401 */     sub.s $f16, $f4, $f6
  /* 04A7BC 800CEDDC C4860028 */      lwc1 $f6, 0x28($a0)
  /* 04A7C0 800CEDE0 C4A40024 */      lwc1 $f4, 0x24($a1)
  /* 04A7C4 800CEDE4 460A4481 */     sub.s $f18, $f8, $f10
  /* 04A7C8 800CEDE8 46062201 */     sub.s $f8, $f4, $f6
  /* 04A7CC 800CEDEC E7A8001C */      swc1 $f8, 0x1c($sp)
  /* 04A7D0 800CEDF0 C480002C */      lwc1 $f0, 0x2c($a0)
  /* 04A7D4 800CEDF4 C4820030 */      lwc1 $f2, 0x30($a0)
  /* 04A7D8 800CEDF8 C48E0034 */      lwc1 $f14, 0x34($a0)
  /* 04A7DC 800CEDFC 46000282 */     mul.s $f10, $f0, $f0
  /* 04A7E0 800CEE00 E7B20020 */      swc1 $f18, 0x20($sp)
  /* 04A7E4 800CEE04 E7B00024 */      swc1 $f16, 0x24($sp)
  /* 04A7E8 800CEE08 46021102 */     mul.s $f4, $f2, $f2
  /* 04A7EC 800CEE0C AFA40028 */        sw $a0, 0x28($sp)
  /* 04A7F0 800CEE10 460E7202 */     mul.s $f8, $f14, $f14
  /* 04A7F4 800CEE14 46045180 */     add.s $f6, $f10, $f4
  /* 04A7F8 800CEE18 0C00CD44 */       jal sqrtf
  /* 04A7FC 800CEE1C 46083300 */     add.s $f12, $f6, $f8
  /* 04A800 800CEE20 C7B00024 */      lwc1 $f16, 0x24($sp)
  /* 04A804 800CEE24 C7B20020 */      lwc1 $f18, 0x20($sp)
  /* 04A808 800CEE28 C7AE001C */      lwc1 $f14, 0x1c($sp)
  /* 04A80C 800CEE2C 46108282 */     mul.s $f10, $f16, $f16
  /* 04A810 800CEE30 8FA40028 */        lw $a0, 0x28($sp)
  /* 04A814 800CEE34 46000086 */     mov.s $f2, $f0
  /* 04A818 800CEE38 46129102 */     mul.s $f4, $f18, $f18
  /* 04A81C 800CEE3C 46045180 */     add.s $f6, $f10, $f4
  /* 04A820 800CEE40 460E7202 */     mul.s $f8, $f14, $f14
  /* 04A824 800CEE44 44805000 */      mtc1 $zero, $f10
  /* 04A828 800CEE48 46083300 */     add.s $f12, $f6, $f8
  /* 04A82C 800CEE4C 460C5032 */    c.eq.s $f10, $f12
  /* 04A830 800CEE50 00000000 */       nop 
  /* 04A834 800CEE54 45030015 */     bc1tl .L800CEEAC
  /* 04A838 800CEE58 8FBF0014 */        lw $ra, 0x14($sp)
  /* 04A83C 800CEE5C AFA40028 */        sw $a0, 0x28($sp)
  /* 04A840 800CEE60 E7A20018 */      swc1 $f2, 0x18($sp)
  /* 04A844 800CEE64 E7B00024 */      swc1 $f16, 0x24($sp)
  /* 04A848 800CEE68 0C00CD44 */       jal sqrtf
  /* 04A84C 800CEE6C E7B20020 */      swc1 $f18, 0x20($sp)
  /* 04A850 800CEE70 C7A20018 */      lwc1 $f2, 0x18($sp)
  /* 04A854 800CEE74 C7B00024 */      lwc1 $f16, 0x24($sp)
  /* 04A858 800CEE78 C7B20020 */      lwc1 $f18, 0x20($sp)
  /* 04A85C 800CEE7C 46001083 */     div.s $f2, $f2, $f0
  /* 04A860 800CEE80 C7AE001C */      lwc1 $f14, 0x1c($sp)
  /* 04A864 800CEE84 8FA40028 */        lw $a0, 0x28($sp)
  /* 04A868 800CEE88 46028102 */     mul.s $f4, $f16, $f2
  /* 04A86C 800CEE8C 00000000 */       nop 
  /* 04A870 800CEE90 46029182 */     mul.s $f6, $f18, $f2
  /* 04A874 800CEE94 00000000 */       nop 
  /* 04A878 800CEE98 46027202 */     mul.s $f8, $f14, $f2
  /* 04A87C 800CEE9C E484002C */      swc1 $f4, 0x2c($a0)
  /* 04A880 800CEEA0 E4860030 */      swc1 $f6, 0x30($a0)
  /* 04A884 800CEEA4 E4880034 */      swc1 $f8, 0x34($a0)
  .L800CEEA8:
  /* 04A888 800CEEA8 8FBF0014 */        lw $ra, 0x14($sp)
  .L800CEEAC:
  /* 04A88C 800CEEAC 27BD0028 */     addiu $sp, $sp, 0x28
  /* 04A890 800CEEB0 03E00008 */        jr $ra
  /* 04A894 800CEEB4 00000000 */       nop 

