.section .late_rodata

glabel D_8003DFB0
  /* 3DBB0 03EBB0 8003DFB0 */
  .word 0xff7fffff # .float -3.4028235e38

glabel jtbl_8003DFB4
  /* 3DBB4 03EBB4 8003DFB4 */  .word L8000EF34
  /* 3DBB8 03EBB8 8003DFB8 */  .word L8000EF40
  /* 3DBBC 03EBBC 8003DFBC */  .word L8000EF4C
  /* 3DBC0 03EBC0 8003DFC0 */  .word L8000EF9C
  /* 3DBC4 03EBC4 8003DFC4 */  .word L8000EF58
  /* 3DBC8 03EBC8 8003DFC8 */  .word L8000EF64
  /* 3DBCC 03EBCC 8003DFCC */  .word L8000EF70
  /* 3DBD0 03EBD0 8003DFD0 */  .word L8000EF7C
  /* 3DBD4 03EBD4 8003DFD4 */  .word L8000EF88
  /* 3DBD8 03EBD8 8003DFD8 */  .word L8000EF94

.section .text
glabel unref_8000EE40
  /* 00FA40 8000EE40 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 00FA44 8000EE44 AFBF0064 */        sw $ra, 0x64($sp)
  /* 00FA48 8000EE48 AFBE0060 */        sw $fp, 0x60($sp)
  /* 00FA4C 8000EE4C AFB7005C */        sw $s7, 0x5c($sp)
  /* 00FA50 8000EE50 AFB60058 */        sw $s6, 0x58($sp)
  /* 00FA54 8000EE54 AFB50054 */        sw $s5, 0x54($sp)
  /* 00FA58 8000EE58 AFB40050 */        sw $s4, 0x50($sp)
  /* 00FA5C 8000EE5C AFB3004C */        sw $s3, 0x4c($sp)
  /* 00FA60 8000EE60 AFB20048 */        sw $s2, 0x48($sp)
  /* 00FA64 8000EE64 AFB10044 */        sw $s1, 0x44($sp)
  /* 00FA68 8000EE68 AFB00040 */        sw $s0, 0x40($sp)
  /* 00FA6C 8000EE6C F7B60038 */      sdc1 $f22, 0x38($sp)
  /* 00FA70 8000EE70 F7B40030 */      sdc1 $f20, 0x30($sp)
  /* 00FA74 8000EE74 8C900074 */        lw $s0, 0x74($a0)
  /* 00FA78 8000EE78 4486B000 */      mtc1 $a2, $f22
  /* 00FA7C 8000EE7C 240E0001 */     addiu $t6, $zero, 1
  /* 00FA80 8000EE80 AFA0007C */        sw $zero, 0x7c($sp)
  /* 00FA84 8000EE84 AFAE006C */        sw $t6, 0x6c($sp)
  /* 00FA88 8000EE88 00E09025 */        or $s2, $a3, $zero
  /* 00FA8C 8000EE8C 00A0F025 */        or $fp, $a1, $zero
  /* 00FA90 8000EE90 12000063 */      beqz $s0, .L8000F020
  /* 00FA94 8000EE94 E4960078 */      swc1 $f22, 0x78($a0)
  /* 00FA98 8000EE98 3C018004 */       lui $at, %hi(D_8003DFB0)
  /* 00FA9C 8000EE9C C434DFB0 */      lwc1 $f20, %lo(D_8003DFB0)($at)
  /* 00FAA0 8000EEA0 2417000B */     addiu $s7, $zero, 0xb
  /* 00FAA4 8000EEA4 27B6007C */     addiu $s6, $sp, 0x7c
  /* 00FAA8 8000EEA8 27B50070 */     addiu $s5, $sp, 0x70
  /* 00FAAC 8000EEAC 27B40084 */     addiu $s4, $sp, 0x84
  /* 00FAB0 8000EEB0 24130004 */     addiu $s3, $zero, 4
  .L8000EEB4:
  /* 00FAB4 8000EEB4 8FC50000 */        lw $a1, ($fp)
  /* 00FAB8 8000EEB8 50A0003E */      beql $a1, $zero, .L8000EFB4
  /* 00FABC 8000EEBC E6140074 */      swc1 $f20, 0x74($s0)
  /* 00FAC0 8000EEC0 4406B000 */      mfc1 $a2, $f22
  /* 00FAC4 8000EEC4 0C002F47 */       jal func_8000BD1C
  /* 00FAC8 8000EEC8 02002025 */        or $a0, $s0, $zero
  /* 00FACC 8000EECC 8FAF006C */        lw $t7, 0x6c($sp)
  /* 00FAD0 8000EED0 24110001 */     addiu $s1, $zero, 1
  /* 00FAD4 8000EED4 A20F0055 */        sb $t7, 0x55($s0)
  /* 00FAD8 8000EED8 AFA0006C */        sw $zero, 0x6c($sp)
  .L8000EEDC:
  /* 00FADC 8000EEDC 1233002F */       beq $s1, $s3, L8000EF9C
  /* 00FAE0 8000EEE0 00002025 */        or $a0, $zero, $zero
  /* 00FAE4 8000EEE4 8E18006C */        lw $t8, 0x6c($s0)
  /* 00FAE8 8000EEE8 AFB60024 */        sw $s6, 0x24($sp)
  /* 00FAEC 8000EEEC AFB50020 */        sw $s5, 0x20($sp)
  /* 00FAF0 8000EEF0 AFA0001C */        sw $zero, 0x1c($sp)
  /* 00FAF4 8000EEF4 AFB10018 */        sw $s1, 0x18($sp)
  /* 00FAF8 8000EEF8 AFB20014 */        sw $s2, 0x14($sp)
  /* 00FAFC 8000EEFC 02002825 */        or $a1, $s0, $zero
  /* 00FB00 8000EF00 02803025 */        or $a2, $s4, $zero
  /* 00FB04 8000EF04 00003825 */        or $a3, $zero, $zero
  /* 00FB08 8000EF08 0C003859 */       jal func_8000E164
  /* 00FB0C 8000EF0C AFB80010 */        sw $t8, 0x10($sp)
  /* 00FB10 8000EF10 2639FFFF */     addiu $t9, $s1, -1
  /* 00FB14 8000EF14 2F21000A */     sltiu $at, $t9, 0xa
  /* 00FB18 8000EF18 10200020 */      beqz $at, L8000EF9C
  /* 00FB1C 8000EF1C 0019C880 */       sll $t9, $t9, 2
  /* 00FB20 8000EF20 3C018004 */       lui $at, %hi(jtbl_8003DFB4)
  /* 00FB24 8000EF24 00390821 */      addu $at, $at, $t9
  /* 00FB28 8000EF28 8C39DFB4 */        lw $t9, %lo(jtbl_8003DFB4)($at)
  /* 00FB2C 8000EF2C 03200008 */        jr $t9
  /* 00FB30 8000EF30 00000000 */       nop 
  glabel L8000EF34
  /* 00FB34 8000EF34 C7A40084 */      lwc1 $f4, 0x84($sp)
  /* 00FB38 8000EF38 10000018 */         b L8000EF9C
  /* 00FB3C 8000EF3C E6040030 */      swc1 $f4, 0x30($s0)
  glabel L8000EF40
  /* 00FB40 8000EF40 C7A60084 */      lwc1 $f6, 0x84($sp)
  /* 00FB44 8000EF44 10000015 */         b L8000EF9C
  /* 00FB48 8000EF48 E6060034 */      swc1 $f6, 0x34($s0)
  glabel L8000EF4C
  /* 00FB4C 8000EF4C C7A80084 */      lwc1 $f8, 0x84($sp)
  /* 00FB50 8000EF50 10000012 */         b L8000EF9C
  /* 00FB54 8000EF54 E6080038 */      swc1 $f8, 0x38($s0)
  glabel L8000EF58
  /* 00FB58 8000EF58 C7AA0084 */      lwc1 $f10, 0x84($sp)
  /* 00FB5C 8000EF5C 1000000F */         b L8000EF9C
  /* 00FB60 8000EF60 E60A001C */      swc1 $f10, 0x1c($s0)
  glabel L8000EF64
  /* 00FB64 8000EF64 C7B00084 */      lwc1 $f16, 0x84($sp)
  /* 00FB68 8000EF68 1000000C */         b L8000EF9C
  /* 00FB6C 8000EF6C E6100020 */      swc1 $f16, 0x20($s0)
  glabel L8000EF70
  /* 00FB70 8000EF70 C7B20084 */      lwc1 $f18, 0x84($sp)
  /* 00FB74 8000EF74 10000009 */         b L8000EF9C
  /* 00FB78 8000EF78 E6120024 */      swc1 $f18, 0x24($s0)
  glabel L8000EF7C
  /* 00FB7C 8000EF7C C7A40084 */      lwc1 $f4, 0x84($sp)
  /* 00FB80 8000EF80 10000006 */         b L8000EF9C
  /* 00FB84 8000EF84 E6040040 */      swc1 $f4, 0x40($s0)
  glabel L8000EF88
  /* 00FB88 8000EF88 C7A60084 */      lwc1 $f6, 0x84($sp)
  /* 00FB8C 8000EF8C 10000003 */         b L8000EF9C
  /* 00FB90 8000EF90 E6060044 */      swc1 $f6, 0x44($s0)
  glabel L8000EF94
  /* 00FB94 8000EF94 C7A80084 */      lwc1 $f8, 0x84($sp)
  /* 00FB98 8000EF98 E6080048 */      swc1 $f8, 0x48($s0)
  glabel L8000EF9C
  /* 00FB9C 8000EF9C 26310001 */     addiu $s1, $s1, 1
  /* 00FBA0 8000EFA0 1637FFCE */       bne $s1, $s7, .L8000EEDC
  /* 00FBA4 8000EFA4 00000000 */       nop 
  /* 00FBA8 8000EFA8 10000016 */         b .L8000F004
  /* 00FBAC 8000EFAC 00000000 */       nop 
  /* 00FBB0 8000EFB0 E6140074 */      swc1 $f20, 0x74($s0)
  .L8000EFB4:
  /* 00FBB4 8000EFB4 12400013 */      beqz $s2, .L8000F004
  /* 00FBB8 8000EFB8 A2000055 */        sb $zero, 0x55($s0)
  /* 00FBBC 8000EFBC 8E490008 */        lw $t1, 8($s2)
  /* 00FBC0 8000EFC0 AE09001C */        sw $t1, 0x1c($s0)
  /* 00FBC4 8000EFC4 8E48000C */        lw $t0, 0xc($s2)
  /* 00FBC8 8000EFC8 AE080020 */        sw $t0, 0x20($s0)
  /* 00FBCC 8000EFCC 8E490010 */        lw $t1, 0x10($s2)
  /* 00FBD0 8000EFD0 AE090024 */        sw $t1, 0x24($s0)
  /* 00FBD4 8000EFD4 8E4B0014 */        lw $t3, 0x14($s2)
  /* 00FBD8 8000EFD8 AE0B0030 */        sw $t3, 0x30($s0)
  /* 00FBDC 8000EFDC 8E4A0018 */        lw $t2, 0x18($s2)
  /* 00FBE0 8000EFE0 AE0A0034 */        sw $t2, 0x34($s0)
  /* 00FBE4 8000EFE4 8E4B001C */        lw $t3, 0x1c($s2)
  /* 00FBE8 8000EFE8 AE0B0038 */        sw $t3, 0x38($s0)
  /* 00FBEC 8000EFEC 8E4D0020 */        lw $t5, 0x20($s2)
  /* 00FBF0 8000EFF0 AE0D0040 */        sw $t5, 0x40($s0)
  /* 00FBF4 8000EFF4 8E4C0024 */        lw $t4, 0x24($s2)
  /* 00FBF8 8000EFF8 AE0C0044 */        sw $t4, 0x44($s0)
  /* 00FBFC 8000EFFC 8E4D0028 */        lw $t5, 0x28($s2)
  /* 00FC00 8000F000 AE0D0048 */        sw $t5, 0x48($s0)
  .L8000F004:
  /* 00FC04 8000F004 12400002 */      beqz $s2, .L8000F010
  /* 00FC08 8000F008 27DE0004 */     addiu $fp, $fp, 4
  /* 00FC0C 8000F00C 2652002C */     addiu $s2, $s2, 0x2c
  .L8000F010:
  /* 00FC10 8000F010 0C002EA8 */       jal func_8000BAA0
  /* 00FC14 8000F014 02002025 */        or $a0, $s0, $zero
  /* 00FC18 8000F018 1440FFA6 */      bnez $v0, .L8000EEB4
  /* 00FC1C 8000F01C 00408025 */        or $s0, $v0, $zero
  .L8000F020:
  /* 00FC20 8000F020 8FBF0064 */        lw $ra, 0x64($sp)
  /* 00FC24 8000F024 D7B40030 */      ldc1 $f20, 0x30($sp)
  /* 00FC28 8000F028 D7B60038 */      ldc1 $f22, 0x38($sp)
  /* 00FC2C 8000F02C 8FB00040 */        lw $s0, 0x40($sp)
  /* 00FC30 8000F030 8FB10044 */        lw $s1, 0x44($sp)
  /* 00FC34 8000F034 8FB20048 */        lw $s2, 0x48($sp)
  /* 00FC38 8000F038 8FB3004C */        lw $s3, 0x4c($sp)
  /* 00FC3C 8000F03C 8FB40050 */        lw $s4, 0x50($sp)
  /* 00FC40 8000F040 8FB50054 */        lw $s5, 0x54($sp)
  /* 00FC44 8000F044 8FB60058 */        lw $s6, 0x58($sp)
  /* 00FC48 8000F048 8FB7005C */        lw $s7, 0x5c($sp)
  /* 00FC4C 8000F04C 8FBE0060 */        lw $fp, 0x60($sp)
  /* 00FC50 8000F050 03E00008 */        jr $ra
  /* 00FC54 8000F054 27BD0090 */     addiu $sp, $sp, 0x90

