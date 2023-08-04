.section .text
glabel unref_8000EC64
  /* 00F864 8000EC64 27BDFF88 */     addiu $sp, $sp, -0x78
  /* 00F868 8000EC68 AFB30060 */        sw $s3, 0x60($sp)
  /* 00F86C 8000EC6C 8FB30088 */        lw $s3, 0x88($sp)
  /* 00F870 8000EC70 F7BC0048 */      sdc1 $f28, 0x48($sp)
  /* 00F874 8000EC74 4486E000 */      mtc1 $a2, $f28
  /* 00F878 8000EC78 AFB10058 */        sw $s1, 0x58($sp)
  /* 00F87C 8000EC7C AFB00054 */        sw $s0, 0x54($sp)
  /* 00F880 8000EC80 AFBF0064 */        sw $ra, 0x64($sp)
  /* 00F884 8000EC84 AFB2005C */        sw $s2, 0x5c($sp)
  /* 00F888 8000EC88 F7BA0040 */      sdc1 $f26, 0x40($sp)
  /* 00F88C 8000EC8C F7B80038 */      sdc1 $f24, 0x38($sp)
  /* 00F890 8000EC90 F7B60030 */      sdc1 $f22, 0x30($sp)
  /* 00F894 8000EC94 F7B40028 */      sdc1 $f20, 0x28($sp)
  /* 00F898 8000EC98 AFA40078 */        sw $a0, 0x78($sp)
  /* 00F89C 8000EC9C 24010002 */     addiu $at, $zero, 2
  /* 00F8A0 8000ECA0 00A08025 */        or $s0, $a1, $zero
  /* 00F8A4 8000ECA4 00E08825 */        or $s1, $a3, $zero
  /* 00F8A8 8000ECA8 8C920074 */        lw $s2, 0x74($a0)
  /* 00F8AC 8000ECAC 1661003B */       bne $s3, $at, .L8000ED9C
  /* 00F8B0 8000ECB0 E49C0078 */      swc1 $f28, 0x78($a0)
  /* 00F8B4 8000ECB4 C7B4008C */      lwc1 $f20, 0x8c($sp)
  /* 00F8B8 8000ECB8 C7BA009C */      lwc1 $f26, 0x9c($sp)
  /* 00F8BC 8000ECBC C7B80098 */      lwc1 $f24, 0x98($sp)
  /* 00F8C0 8000ECC0 E7B40068 */      swc1 $f20, 0x68($sp)
  /* 00F8C4 8000ECC4 4480A000 */      mtc1 $zero, $f20
  /* 00F8C8 8000ECC8 1240001C */      beqz $s2, .L8000ED3C
  /* 00F8CC 8000ECCC C7B60094 */      lwc1 $f22, 0x94($sp)
  .L8000ECD0:
  /* 00F8D0 8000ECD0 4406E000 */      mfc1 $a2, $f28
  /* 00F8D4 8000ECD4 02402025 */        or $a0, $s2, $zero
  /* 00F8D8 8000ECD8 02002825 */        or $a1, $s0, $zero
  /* 00F8DC 8000ECDC 02203825 */        or $a3, $s1, $zero
  /* 00F8E0 8000ECE0 AFB30010 */        sw $s3, 0x10($sp)
  /* 00F8E4 8000ECE4 E7B40014 */      swc1 $f20, 0x14($sp)
  /* 00F8E8 8000ECE8 E7B60018 */      swc1 $f22, 0x18($sp)
  /* 00F8EC 8000ECEC E7B8001C */      swc1 $f24, 0x1c($sp)
  /* 00F8F0 8000ECF0 0C003A2A */       jal func_8000E8A8
  /* 00F8F4 8000ECF4 E7BA0020 */      swc1 $f26, 0x20($sp)
  /* 00F8F8 8000ECF8 4600A03C */    c.lt.s $f20, $f0
  /* 00F8FC 8000ECFC 00000000 */       nop 
  /* 00F900 8000ED00 45000002 */      bc1f .L8000ED0C
  /* 00F904 8000ED04 00000000 */       nop 
  /* 00F908 8000ED08 46000506 */     mov.s $f20, $f0
  .L8000ED0C:
  /* 00F90C 8000ED0C 12000002 */      beqz $s0, .L8000ED18
  /* 00F910 8000ED10 00000000 */       nop 
  /* 00F914 8000ED14 26100004 */     addiu $s0, $s0, 4
  .L8000ED18:
  /* 00F918 8000ED18 12200002 */      beqz $s1, .L8000ED24
  /* 00F91C 8000ED1C 00000000 */       nop 
  /* 00F920 8000ED20 2631002C */     addiu $s1, $s1, 0x2c
  .L8000ED24:
  /* 00F924 8000ED24 0C002EA8 */       jal func_8000BAA0
  /* 00F928 8000ED28 02402025 */        or $a0, $s2, $zero
  /* 00F92C 8000ED2C 1440FFE8 */      bnez $v0, .L8000ECD0
  /* 00F930 8000ED30 00409025 */        or $s2, $v0, $zero
  /* 00F934 8000ED34 8FAF0078 */        lw $t7, 0x78($sp)
  /* 00F938 8000ED38 8DF20074 */        lw $s2, 0x74($t7)
  .L8000ED3C:
  /* 00F93C 8000ED3C C7A40068 */      lwc1 $f4, 0x68($sp)
  /* 00F940 8000ED40 C7A00090 */      lwc1 $f0, 0x90($sp)
  /* 00F944 8000ED44 4604A03C */    c.lt.s $f20, $f4
  /* 00F948 8000ED48 00000000 */       nop 
  /* 00F94C 8000ED4C 45020004 */     bc1fl .L8000ED60
  /* 00F950 8000ED50 4614003C */    c.lt.s $f0, $f20
  /* 00F954 8000ED54 10000006 */         b .L8000ED70
  /* 00F958 8000ED58 46002506 */     mov.s $f20, $f4
  /* 00F95C 8000ED5C 4614003C */    c.lt.s $f0, $f20
  .L8000ED60:
  /* 00F960 8000ED60 00000000 */       nop 
  /* 00F964 8000ED64 45000002 */      bc1f .L8000ED70
  /* 00F968 8000ED68 00000000 */       nop 
  /* 00F96C 8000ED6C 46000506 */     mov.s $f20, $f0
  .L8000ED70:
  /* 00F970 8000ED70 12400008 */      beqz $s2, .L8000ED94
  /* 00F974 8000ED74 00000000 */       nop 
  .L8000ED78:
  /* 00F978 8000ED78 4405A000 */      mfc1 $a1, $f20
  /* 00F97C 8000ED7C 0C003811 */       jal func_8000E044
  /* 00F980 8000ED80 02402025 */        or $a0, $s2, $zero
  /* 00F984 8000ED84 0C002EA8 */       jal func_8000BAA0
  /* 00F988 8000ED88 02402025 */        or $a0, $s2, $zero
  /* 00F98C 8000ED8C 1440FFFA */      bnez $v0, .L8000ED78
  /* 00F990 8000ED90 00409025 */        or $s2, $v0, $zero
  .L8000ED94:
  /* 00F994 8000ED94 1000001A */         b .L8000EE00
  /* 00F998 8000ED98 E7B4008C */      swc1 $f20, 0x8c($sp)
  .L8000ED9C:
  /* 00F99C 8000ED9C 12400018 */      beqz $s2, .L8000EE00
  /* 00F9A0 8000EDA0 C7BA009C */      lwc1 $f26, 0x9c($sp)
  /* 00F9A4 8000EDA4 C7B80098 */      lwc1 $f24, 0x98($sp)
  /* 00F9A8 8000EDA8 C7B60094 */      lwc1 $f22, 0x94($sp)
  /* 00F9AC 8000EDAC C7B4008C */      lwc1 $f20, 0x8c($sp)
  .L8000EDB0:
  /* 00F9B0 8000EDB0 4406E000 */      mfc1 $a2, $f28
  /* 00F9B4 8000EDB4 02402025 */        or $a0, $s2, $zero
  /* 00F9B8 8000EDB8 02002825 */        or $a1, $s0, $zero
  /* 00F9BC 8000EDBC 02203825 */        or $a3, $s1, $zero
  /* 00F9C0 8000EDC0 AFB30010 */        sw $s3, 0x10($sp)
  /* 00F9C4 8000EDC4 E7B40014 */      swc1 $f20, 0x14($sp)
  /* 00F9C8 8000EDC8 E7B60018 */      swc1 $f22, 0x18($sp)
  /* 00F9CC 8000EDCC E7B8001C */      swc1 $f24, 0x1c($sp)
  /* 00F9D0 8000EDD0 0C003A2A */       jal func_8000E8A8
  /* 00F9D4 8000EDD4 E7BA0020 */      swc1 $f26, 0x20($sp)
  /* 00F9D8 8000EDD8 12000002 */      beqz $s0, .L8000EDE4
  /* 00F9DC 8000EDDC 00000000 */       nop 
  /* 00F9E0 8000EDE0 26100004 */     addiu $s0, $s0, 4
  .L8000EDE4:
  /* 00F9E4 8000EDE4 12200002 */      beqz $s1, .L8000EDF0
  /* 00F9E8 8000EDE8 00000000 */       nop 
  /* 00F9EC 8000EDEC 2631002C */     addiu $s1, $s1, 0x2c
  .L8000EDF0:
  /* 00F9F0 8000EDF0 0C002EA8 */       jal func_8000BAA0
  /* 00F9F4 8000EDF4 02402025 */        or $a0, $s2, $zero
  /* 00F9F8 8000EDF8 1440FFED */      bnez $v0, .L8000EDB0
  /* 00F9FC 8000EDFC 00409025 */        or $s2, $v0, $zero
  .L8000EE00:
  /* 00FA00 8000EE00 44803000 */      mtc1 $zero, $f6
  /* 00FA04 8000EE04 8FB80078 */        lw $t8, 0x78($sp)
  /* 00FA08 8000EE08 C7A0008C */      lwc1 $f0, 0x8c($sp)
  /* 00FA0C 8000EE0C E7060078 */      swc1 $f6, 0x78($t8)
  /* 00FA10 8000EE10 8FBF0064 */        lw $ra, 0x64($sp)
  /* 00FA14 8000EE14 8FB30060 */        lw $s3, 0x60($sp)
  /* 00FA18 8000EE18 8FB2005C */        lw $s2, 0x5c($sp)
  /* 00FA1C 8000EE1C 8FB10058 */        lw $s1, 0x58($sp)
  /* 00FA20 8000EE20 8FB00054 */        lw $s0, 0x54($sp)
  /* 00FA24 8000EE24 D7BC0048 */      ldc1 $f28, 0x48($sp)
  /* 00FA28 8000EE28 D7BA0040 */      ldc1 $f26, 0x40($sp)
  /* 00FA2C 8000EE2C D7B80038 */      ldc1 $f24, 0x38($sp)
  /* 00FA30 8000EE30 D7B60030 */      ldc1 $f22, 0x30($sp)
  /* 00FA34 8000EE34 D7B40028 */      ldc1 $f20, 0x28($sp)
  /* 00FA38 8000EE38 03E00008 */        jr $ra
  /* 00FA3C 8000EE3C 27BD0078 */     addiu $sp, $sp, 0x78

