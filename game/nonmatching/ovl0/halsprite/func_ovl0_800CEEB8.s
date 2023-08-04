.section .text
glabel func_ovl0_800CEEB8
  /* 04A898 800CEEB8 10A00022 */      beqz $a1, .L800CEF44
  /* 04A89C 800CEEBC AFA60008 */        sw $a2, 8($sp)
  /* 04A8A0 800CEEC0 C4A4001C */      lwc1 $f4, 0x1c($a1)
  /* 04A8A4 800CEEC4 C4860020 */      lwc1 $f6, 0x20($a0)
  /* 04A8A8 800CEEC8 C4A80020 */      lwc1 $f8, 0x20($a1)
  /* 04A8AC 800CEECC C48A0024 */      lwc1 $f10, 0x24($a0)
  /* 04A8B0 800CEED0 46062001 */     sub.s $f0, $f4, $f6
  /* 04A8B4 800CEED4 C4840028 */      lwc1 $f4, 0x28($a0)
  /* 04A8B8 800CEED8 C4B20024 */      lwc1 $f18, 0x24($a1)
  /* 04A8BC 800CEEDC 460A4081 */     sub.s $f2, $f8, $f10
  /* 04A8C0 800CEEE0 46000182 */     mul.s $f6, $f0, $f0
  /* 04A8C4 800CEEE4 46049301 */     sub.s $f12, $f18, $f4
  /* 04A8C8 800CEEE8 46021202 */     mul.s $f8, $f2, $f2
  /* 04A8CC 800CEEEC 44802000 */      mtc1 $zero, $f4
  /* 04A8D0 800CEEF0 460C6482 */     mul.s $f18, $f12, $f12
  /* 04A8D4 800CEEF4 46083280 */     add.s $f10, $f6, $f8
  /* 04A8D8 800CEEF8 C7A60008 */      lwc1 $f6, 8($sp)
  /* 04A8DC 800CEEFC 46125400 */     add.s $f16, $f10, $f18
  /* 04A8E0 800CEF00 46102032 */    c.eq.s $f4, $f16
  /* 04A8E4 800CEF04 00000000 */       nop 
  /* 04A8E8 800CEF08 4501000E */      bc1t .L800CEF44
  /* 04A8EC 800CEF0C 00000000 */       nop 
  /* 04A8F0 800CEF10 46103383 */     div.s $f14, $f6, $f16
  /* 04A8F4 800CEF14 C488002C */      lwc1 $f8, 0x2c($a0)
  /* 04A8F8 800CEF18 C4840030 */      lwc1 $f4, 0x30($a0)
  /* 04A8FC 800CEF1C 46007282 */     mul.s $f10, $f14, $f0
  /* 04A900 800CEF20 460A4480 */     add.s $f18, $f8, $f10
  /* 04A904 800CEF24 46027182 */     mul.s $f6, $f14, $f2
  /* 04A908 800CEF28 C48A0034 */      lwc1 $f10, 0x34($a0)
  /* 04A90C 800CEF2C E492002C */      swc1 $f18, 0x2c($a0)
  /* 04A910 800CEF30 460C7482 */     mul.s $f18, $f14, $f12
  /* 04A914 800CEF34 46062200 */     add.s $f8, $f4, $f6
  /* 04A918 800CEF38 46125100 */     add.s $f4, $f10, $f18
  /* 04A91C 800CEF3C E4880030 */      swc1 $f8, 0x30($a0)
  /* 04A920 800CEF40 E4840034 */      swc1 $f4, 0x34($a0)
  .L800CEF44:
  /* 04A924 800CEF44 03E00008 */        jr $ra
  /* 04A928 800CEF48 00000000 */       nop 

