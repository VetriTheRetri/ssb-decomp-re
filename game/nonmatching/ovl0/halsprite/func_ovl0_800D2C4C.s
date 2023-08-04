.section .late_rodata

glabel D_ovl0_800D6264
  /* EA24 051C44 800D6264 */
  .word 0x40c90fdb # .float 6.2831855

glabel D_ovl0_800D6268
  /* EA28 051C48 800D6268 */
  .word 0x40c90fdb # .float 6.2831855

glabel jtbl_ovl0_800D626C
  /* EA2C 051C4C 800D626C */  .word jtgt_ovl0_800D2E9C
  /* EA30 051C50 800D6270 */  .word jtgt_ovl0_800D31E0
  /* EA34 051C54 800D6274 */  .word jtgt_ovl0_800D3294
  /* EA38 051C58 800D6278 */  .word jtgt_ovl0_800D2E9C
  /* EA3C 051C5C 800D627C */  .word jtgt_ovl0_800D2E9C

glabel D_ovl0_800D6280
  /* EA40 051C60 800D6280 */
  .word 0x40c90fdb # .float 6.2831855

.section .text
glabel func_ovl0_800D2C4C
  /* 04E62C 800D2C4C 27BDFEC0 */     addiu $sp, $sp, -0x140
  /* 04E630 800D2C50 AFB00078 */        sw $s0, 0x78($sp)
  /* 04E634 800D2C54 3C10800D */       lui $s0, %hi(D_ovl0_800D639C)
  /* 04E638 800D2C58 8E10639C */        lw $s0, %lo(D_ovl0_800D639C)($s0)
  /* 04E63C 800D2C5C AFB40088 */        sw $s4, 0x88($sp)
  /* 04E640 800D2C60 3C14800D */       lui $s4, %hi(D_ovl0_800D6458)
  /* 04E644 800D2C64 26946458 */     addiu $s4, $s4, %lo(D_ovl0_800D6458)
  /* 04E648 800D2C68 AFBF008C */        sw $ra, 0x8c($sp)
  /* 04E64C 800D2C6C AFB30084 */        sw $s3, 0x84($sp)
  /* 04E650 800D2C70 AFB20080 */        sw $s2, 0x80($sp)
  /* 04E654 800D2C74 AFB1007C */        sw $s1, 0x7c($sp)
  /* 04E658 800D2C78 F7BE0070 */      sdc1 $f30, 0x70($sp)
  /* 04E65C 800D2C7C F7BC0068 */      sdc1 $f28, 0x68($sp)
  /* 04E660 800D2C80 F7BA0060 */      sdc1 $f26, 0x60($sp)
  /* 04E664 800D2C84 F7B80058 */      sdc1 $f24, 0x58($sp)
  /* 04E668 800D2C88 F7B60050 */      sdc1 $f22, 0x50($sp)
  /* 04E66C 800D2C8C F7B40048 */      sdc1 $f20, 0x48($sp)
  /* 04E670 800D2C90 AFA40140 */        sw $a0, 0x140($sp)
  /* 04E674 800D2C94 1200021B */      beqz $s0, .L800D3504
  /* 04E678 800D2C98 AE800000 */        sw $zero, ($s4) # D_ovl0_800D6458 + 0
  /* 04E67C 800D2C9C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04E680 800D2CA0 3C13800D */       lui $s3, %hi(D_ovl0_800D6440)
  /* 04E684 800D2CA4 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04E688 800D2CA8 26736440 */     addiu $s3, $s3, %lo(D_ovl0_800D6440)
  /* 04E68C 800D2CAC 24120003 */     addiu $s2, $zero, 3
  /* 04E690 800D2CB0 27B1011C */     addiu $s1, $sp, 0x11c
  /* 04E694 800D2CB4 8FAF0140 */        lw $t7, 0x140($sp)
  .L800D2CB8:
  /* 04E698 800D2CB8 920B0009 */       lbu $t3, 9($s0)
  /* 04E69C 800D2CBC 240E0001 */     addiu $t6, $zero, 1
  /* 04E6A0 800D2CC0 8DEA007C */        lw $t2, 0x7c($t7)
  /* 04E6A4 800D2CC4 000B60C3 */       sra $t4, $t3, 3
  /* 04E6A8 800D2CC8 258D0010 */     addiu $t5, $t4, 0x10
  /* 04E6AC 800D2CCC 01AEC004 */      sllv $t8, $t6, $t5
  /* 04E6B0 800D2CD0 0158C824 */       and $t9, $t2, $t8
  /* 04E6B4 800D2CD4 53200005 */      beql $t9, $zero, .L800D2CEC
  /* 04E6B8 800D2CD8 96090006 */       lhu $t1, 6($s0)
  /* 04E6BC 800D2CDC AE900000 */        sw $s0, ($s4) # D_ovl0_800D6458 + 0
  /* 04E6C0 800D2CE0 10000206 */         b .L800D34FC
  /* 04E6C4 800D2CE4 8E100000 */        lw $s0, ($s0)
  /* 04E6C8 800D2CE8 96090006 */       lhu $t1, 6($s0)
  .L800D2CEC:
  /* 04E6CC 800D2CEC 31280800 */      andi $t0, $t1, 0x800
  /* 04E6D0 800D2CF0 51000005 */      beql $t0, $zero, .L800D2D08
  /* 04E6D4 800D2CF4 C6000040 */      lwc1 $f0, 0x40($s0)
  /* 04E6D8 800D2CF8 AE900000 */        sw $s0, ($s4) # D_ovl0_800D6458 + 0
  /* 04E6DC 800D2CFC 100001FF */         b .L800D34FC
  /* 04E6E0 800D2D00 8E100000 */        lw $s0, ($s0)
  /* 04E6E4 800D2D04 C6000040 */      lwc1 $f0, 0x40($s0)
  .L800D2D08:
  /* 04E6E8 800D2D08 44805000 */      mtc1 $zero, $f10
  /* 04E6EC 800D2D0C 00000000 */       nop 
  /* 04E6F0 800D2D10 460A003C */    c.lt.s $f0, $f10
  /* 04E6F4 800D2D14 00000000 */       nop 
  /* 04E6F8 800D2D18 45000005 */      bc1f .L800D2D30
  /* 04E6FC 800D2D1C 00000000 */       nop 
  /* 04E700 800D2D20 C6080044 */      lwc1 $f8, 0x44($s0)
  /* 04E704 800D2D24 46004101 */     sub.s $f4, $f8, $f0
  /* 04E708 800D2D28 1000000A */         b .L800D2D54
  /* 04E70C 800D2D2C E6040044 */      swc1 $f4, 0x44($s0)
  .L800D2D30:
  /* 04E710 800D2D30 0C006252 */       jal lbRandom_GetFloat
  /* 04E714 800D2D34 00000000 */       nop 
  /* 04E718 800D2D38 C60A0040 */      lwc1 $f10, 0x40($s0)
  /* 04E71C 800D2D3C C6060044 */      lwc1 $f6, 0x44($s0)
  /* 04E720 800D2D40 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04E724 800D2D44 460A0202 */     mul.s $f8, $f0, $f10
  /* 04E728 800D2D48 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04E72C 800D2D4C 46083100 */     add.s $f4, $f6, $f8
  /* 04E730 800D2D50 E6040044 */      swc1 $f4, 0x44($s0)
  .L800D2D54:
  /* 04E734 800D2D54 C6020044 */      lwc1 $f2, 0x44($s0)
  /* 04E738 800D2D58 4602D03E */    c.le.s $f26, $f2
  /* 04E73C 800D2D5C 00000000 */       nop 
  /* 04E740 800D2D60 45020042 */     bc1fl .L800D2E6C
  /* 04E744 800D2D64 4602D03E */    c.le.s $f26, $f2
  /* 04E748 800D2D68 C60A0020 */      lwc1 $f10, 0x20($s0)
  /* 04E74C 800D2D6C 27A40128 */     addiu $a0, $sp, 0x128
  /* 04E750 800D2D70 E7AA011C */      swc1 $f10, 0x11c($sp)
  /* 04E754 800D2D74 C6060024 */      lwc1 $f6, 0x24($s0)
  /* 04E758 800D2D78 E7A60120 */      swc1 $f6, 0x120($sp)
  /* 04E75C 800D2D7C C6080028 */      lwc1 $f8, 0x28($s0)
  /* 04E760 800D2D80 E7A80124 */      swc1 $f8, 0x124($sp)
  /* 04E764 800D2D84 8E060048 */        lw $a2, 0x48($s0)
  /* 04E768 800D2D88 50C0000A */      beql $a2, $zero, .L800D2DB4
  /* 04E76C 800D2D8C 92020008 */       lbu $v0, 8($s0)
  /* 04E770 800D2D90 0C0349FE */       jal func_ovl0_800D27F8
  /* 04E774 800D2D94 02202825 */        or $a1, $s1, $zero
  /* 04E778 800D2D98 C7A40128 */      lwc1 $f4, 0x128($sp)
  /* 04E77C 800D2D9C E6040014 */      swc1 $f4, 0x14($s0)
  /* 04E780 800D2DA0 C7AA012C */      lwc1 $f10, 0x12c($sp)
  /* 04E784 800D2DA4 E60A0018 */      swc1 $f10, 0x18($s0)
  /* 04E788 800D2DA8 C7A60130 */      lwc1 $f6, 0x130($sp)
  /* 04E78C 800D2DAC E606001C */      swc1 $f6, 0x1c($s0)
  /* 04E790 800D2DB0 92020008 */       lbu $v0, 8($s0)
  .L800D2DB4:
  /* 04E794 800D2DB4 10400005 */      beqz $v0, .L800D2DCC
  /* 04E798 800D2DB8 00000000 */       nop 
  /* 04E79C 800D2DBC 10520003 */       beq $v0, $s2, .L800D2DCC
  /* 04E7A0 800D2DC0 24010004 */     addiu $at, $zero, 4
  /* 04E7A4 800D2DC4 14410015 */       bne $v0, $at, .L800D2E1C
  /* 04E7A8 800D2DC8 00000000 */       nop 
  .L800D2DCC:
  /* 04E7AC 800D2DCC 0C006252 */       jal lbRandom_GetFloat
  /* 04E7B0 800D2DD0 00000000 */       nop 
  /* 04E7B4 800D2DD4 C60C0050 */      lwc1 $f12, 0x50($s0)
  /* 04E7B8 800D2DD8 C6080054 */      lwc1 $f8, 0x54($s0)
  /* 04E7BC 800D2DDC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04E7C0 800D2DE0 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04E7C4 800D2DE4 460C4381 */     sub.s $f14, $f8, $f12
  /* 04E7C8 800D2DE8 460E0102 */     mul.s $f4, $f0, $f14
  /* 04E7CC 800D2DEC 460C2280 */     add.s $f10, $f4, $f12
  /* 04E7D0 800D2DF0 E7AA00DC */      swc1 $f10, 0xdc($sp)
  /* 04E7D4 800D2DF4 C6020044 */      lwc1 $f2, 0x44($s0)
  /* 04E7D8 800D2DF8 4600118D */ trunc.w.s $f6, $f2
  /* 04E7DC 800D2DFC 440B3000 */      mfc1 $t3, $f6
  /* 04E7E0 800D2E00 00000000 */       nop 
  /* 04E7E4 800D2E04 448B4000 */      mtc1 $t3, $f8
  /* 04E7E8 800D2E08 00000000 */       nop 
  /* 04E7EC 800D2E0C 46804120 */   cvt.s.w $f4, $f8
  /* 04E7F0 800D2E10 46047283 */     div.s $f10, $f14, $f4
  /* 04E7F4 800D2E14 10000014 */         b .L800D2E68
  /* 04E7F8 800D2E18 E7AA00B8 */      swc1 $f10, 0xb8($sp)
  .L800D2E1C:
  /* 04E7FC 800D2E1C 0C006252 */       jal lbRandom_GetFloat
  /* 04E800 800D2E20 00000000 */       nop 
  /* 04E804 800D2E24 3C01800D */       lui $at, %hi(D_ovl0_800D6264)
  /* 04E808 800D2E28 C4266264 */      lwc1 $f6, %lo(D_ovl0_800D6264)($at)
  /* 04E80C 800D2E2C 3C01800D */       lui $at, %hi(D_ovl0_800D6268)
  /* 04E810 800D2E30 C4246268 */      lwc1 $f4, %lo(D_ovl0_800D6268)($at)
  /* 04E814 800D2E34 46060202 */     mul.s $f8, $f0, $f6
  /* 04E818 800D2E38 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04E81C 800D2E3C 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04E820 800D2E40 E7A800DC */      swc1 $f8, 0xdc($sp)
  /* 04E824 800D2E44 C6020044 */      lwc1 $f2, 0x44($s0)
  /* 04E828 800D2E48 4600128D */ trunc.w.s $f10, $f2
  /* 04E82C 800D2E4C 440E5000 */      mfc1 $t6, $f10
  /* 04E830 800D2E50 00000000 */       nop 
  /* 04E834 800D2E54 448E3000 */      mtc1 $t6, $f6
  /* 04E838 800D2E58 00000000 */       nop 
  /* 04E83C 800D2E5C 46803220 */   cvt.s.w $f8, $f6
  /* 04E840 800D2E60 46082283 */     div.s $f10, $f4, $f8
  /* 04E844 800D2E64 E7AA00B8 */      swc1 $f10, 0xb8($sp)
  .L800D2E68:
  /* 04E848 800D2E68 4602D03E */    c.le.s $f26, $f2
  .L800D2E6C:
  /* 04E84C 800D2E6C 00000000 */       nop 
  /* 04E850 800D2E70 4502016C */     bc1fl .L800D3424
  /* 04E854 800D2E74 9602000E */       lhu $v0, 0xe($s0)
  /* 04E858 800D2E78 920D0008 */       lbu $t5, 8($s0)
  .L800D2E7C:
  /* 04E85C 800D2E7C 2DA10005 */     sltiu $at, $t5, 5
  /* 04E860 800D2E80 10200159 */      beqz $at, .L800D33E8
  /* 04E864 800D2E84 000D6880 */       sll $t5, $t5, 2
  /* 04E868 800D2E88 3C01800D */       lui $at, %hi(jtbl_ovl0_800D626C)
  /* 04E86C 800D2E8C 002D0821 */      addu $at, $at, $t5
  /* 04E870 800D2E90 8C2D626C */        lw $t5, %lo(jtbl_ovl0_800D626C)($at)
  /* 04E874 800D2E94 01A00008 */        jr $t5
  /* 04E878 800D2E98 00000000 */       nop 
  glabel jtgt_ovl0_800D2E9C # 0, 3, 4
  /* 04E87C 800D2E9C C7AC0120 */      lwc1 $f12, 0x120($sp)  # sp11C.y
  /* 04E880 800D2EA0 C7AE0124 */      lwc1 $f14, 0x124($sp)  # sp11C.z
  /* 04E884 800D2EA4 C7B4011C */      lwc1 $f20, 0x11c($sp)  # sp11C.x
  /* 04E888 800D2EA8 46006586 */     mov.s $f22, $f12   # sp11C.y
  /* 04E88C 800D2EAC 0C00618F */       jal atan2f
  /* 04E890 800D2EB0 46007606 */     mov.s $f24, $f14   # sp11C.z
  /* 04E894 800D2EB4 46000686 */     mov.s $f26, $f0
  /* 04E898 800D2EB8 0C00C0FC */       jal __sinf
  /* 04E89C 800D2EBC 46000306 */     mov.s $f12, $f0
  /* 04E8A0 800D2EC0 46000786 */     mov.s $f30, $f0       # f30 = sinf(atan2f(sp11C.y, sp11C.z))
  /* 04E8A4 800D2EC4 0C00D734 */       jal cosf
  /* 04E8A8 800D2EC8 4600D306 */     mov.s $f12, $f26
  /* 04E8AC 800D2ECC 461EB182 */     mul.s $f6, $f22, $f30 # sp11C.y * sinf(atan2f(sp11C.y, sp11C.z))
  /* 04E8B0 800D2ED0 E7A000F8 */      swc1 $f0, 0xf8($sp)  # spF8 = cosf(atan2f(sp11C.y, sp11C.z))
  /* 04E8B4 800D2ED4 4600A306 */     mov.s $f12, $f20
  /* 04E8B8 800D2ED8 4600C102 */     mul.s $f4, $f24, $f0  # sp11C.z * spF8;
  /* 04E8BC 800D2EDC 0C00618F */       jal atan2f
  /* 04E8C0 800D2EE0 46043380 */     add.s $f14, $f6, $f4  # (sp11C.y * sinf(atan2f(sp11C.y, sp11C.z))) + (sp11C.z * spF8)
  /* 04E8C4 800D2EE4 46000706 */     mov.s $f28, $f0       # f28 = atan2f(sp11C.x, (sp11C.y * sinf(atan2f(sp11C.y, sp11C.z))) + (sp11C.z * spF8))
  /* 04E8C8 800D2EE8 0C00C0FC */       jal __sinf
  /* 04E8CC 800D2EEC 46000306 */     mov.s $f12, $f0
  /* 04E8D0 800D2EF0 E7A000F4 */      swc1 $f0, 0xf4($sp)  # spF4 = sinf(f28)
  /* 04E8D4 800D2EF4 0C00D734 */       jal cosf
  /* 04E8D8 800D2EF8 4600E306 */     mov.s $f12, $f28
  /* 04E8DC 800D2EFC 4614A202 */     mul.s $f8, $f20, $f20
  /* 04E8E0 800D2F00 E7A000F0 */      swc1 $f0, 0xf0($sp)  # spF0 = cosf(f28)
  /* 04E8E4 800D2F04 E7BE00FC */      swc1 $f30, 0xfc($sp)
  /* 04E8E8 800D2F08 4616B282 */     mul.s $f10, $f22, $f22
  /* 04E8EC 800D2F0C 460A4180 */     add.s $f6, $f8, $f10
  /* 04E8F0 800D2F10 4618C102 */     mul.s $f4, $f24, $f24
  /* 04E8F4 800D2F14 0C00CD44 */       jal sqrtf
  /* 04E8F8 800D2F18 46043300 */     add.s $f12, $f6, $f4
  /* 04E8FC 800D2F1C E7A00108 */      swc1 $f0, 0x108($sp)
  /* 04E900 800D2F20 4480D000 */      mtc1 $zero, $f26
  /* 04E904 800D2F24 C6020038 */      lwc1 $f2, 0x38($s0)
  /* 04E908 800D2F28 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04E90C 800D2F2C 461A103C */    c.lt.s $f2, $f26
  /* 04E910 800D2F30 00000000 */       nop 
  /* 04E914 800D2F34 45000006 */      bc1f .L800D2F50
  /* 04E918 800D2F38 00000000 */       nop 
  /* 04E91C 800D2F3C 44814000 */      mtc1 $at, $f8 # 1.0 to cop1
  /* 04E920 800D2F40 4481C000 */      mtc1 $at, $f24 # 1.0 to cop1
  /* 04E924 800D2F44 46001507 */     neg.s $f20, $f2
  /* 04E928 800D2F48 1000000F */         b .L800D2F88
  /* 04E92C 800D2F4C E7A800B4 */      swc1 $f8, 0xb4($sp)
  .L800D2F50:
  /* 04E930 800D2F50 0C006252 */       jal lbRandom_GetFloat
  /* 04E934 800D2F54 00000000 */       nop 
  /* 04E938 800D2F58 E7A000B4 */      swc1 $f0, 0xb4($sp)
  /* 04E93C 800D2F5C 920A0008 */       lbu $t2, 8($s0)
  /* 04E940 800D2F60 46000606 */     mov.s $f24, $f0
  /* 04E944 800D2F64 51400006 */      beql $t2, $zero, .L800D2F80
  /* 04E948 800D2F68 C60A0038 */      lwc1 $f10, 0x38($s0)
  /* 04E94C 800D2F6C 0C00CD44 */       jal sqrtf
  /* 04E950 800D2F70 4600C306 */     mov.s $f12, $f24
  /* 04E954 800D2F74 46000606 */     mov.s $f24, $f0
  /* 04E958 800D2F78 E7A000B4 */      swc1 $f0, 0xb4($sp)
  /* 04E95C 800D2F7C C60A0038 */      lwc1 $f10, 0x38($s0)
  .L800D2F80:
  /* 04E960 800D2F80 46005502 */     mul.s $f20, $f10, $f0
  /* 04E964 800D2F84 00000000 */       nop 
  .L800D2F88:
  /* 04E968 800D2F88 C600003C */      lwc1 $f0, 0x3c($s0)
  /* 04E96C 800D2F8C C7A600DC */      lwc1 $f6, 0xdc($sp)
  /* 04E970 800D2F90 C7A400B8 */      lwc1 $f4, 0xb8($sp)
  /* 04E974 800D2F94 461A003C */    c.lt.s $f0, $f26
  /* 04E978 800D2F98 00000000 */       nop 
  /* 04E97C 800D2F9C 45000005 */      bc1f .L800D2FB4
  /* 04E980 800D2FA0 00000000 */       nop 
  /* 04E984 800D2FA4 46043580 */     add.s $f22, $f6, $f4
  /* 04E988 800D2FA8 46000607 */     neg.s $f24, $f0
  /* 04E98C 800D2FAC 1000000B */         b .L800D2FDC
  /* 04E990 800D2FB0 E7B600DC */      swc1 $f22, 0xdc($sp)
  .L800D2FB4:
  /* 04E994 800D2FB4 0C006252 */       jal lbRandom_GetFloat
  /* 04E998 800D2FB8 00000000 */       nop 
  /* 04E99C 800D2FBC C60C0050 */      lwc1 $f12, 0x50($s0)
  /* 04E9A0 800D2FC0 C60A0054 */      lwc1 $f10, 0x54($s0)
  /* 04E9A4 800D2FC4 C608003C */      lwc1 $f8, 0x3c($s0)
  /* 04E9A8 800D2FC8 460C5181 */     sub.s $f6, $f10, $f12
  /* 04E9AC 800D2FCC 46060102 */     mul.s $f4, $f0, $f6
  /* 04E9B0 800D2FD0 460C2580 */     add.s $f22, $f4, $f12
  /* 04E9B4 800D2FD4 4608C602 */     mul.s $f24, $f24, $f8
  /* 04E9B8 800D2FD8 00000000 */       nop 
  .L800D2FDC:
  /* 04E9BC 800D2FDC 0C00D734 */       jal cosf
  /* 04E9C0 800D2FE0 4600B306 */     mov.s $f12, $f22
  /* 04E9C4 800D2FE4 46140282 */     mul.s $f10, $f0, $f20
  /* 04E9C8 800D2FE8 4600B306 */     mov.s $f12, $f22
  /* 04E9CC 800D2FEC 0C00C0FC */       jal __sinf
  /* 04E9D0 800D2FF0 E7AA00EC */      swc1 $f10, 0xec($sp)
  /* 04E9D4 800D2FF4 46140682 */     mul.s $f26, $f0, $f20
  /* 04E9D8 800D2FF8 0C00C0FC */       jal __sinf
  /* 04E9DC 800D2FFC 4600C306 */     mov.s $f12, $f24
  /* 04E9E0 800D3000 C7A60108 */      lwc1 $f6, 0x108($sp)
  /* 04E9E4 800D3004 4600B306 */     mov.s $f12, $f22
  /* 04E9E8 800D3008 E7B600DC */      swc1 $f22, 0xdc($sp)
  /* 04E9EC 800D300C 46060702 */     mul.s $f28, $f0, $f6
  /* 04E9F0 800D3010 0C00D734 */       jal cosf
  /* 04E9F4 800D3014 00000000 */       nop 
  /* 04E9F8 800D3018 461C0502 */     mul.s $f20, $f0, $f28
  /* 04E9FC 800D301C 0C00C0FC */       jal __sinf
  /* 04EA00 800D3020 C7AC00DC */      lwc1 $f12, 0xdc($sp)
  /* 04EA04 800D3024 461C0582 */     mul.s $f22, $f0, $f28
  /* 04EA08 800D3028 0C00D734 */       jal cosf
  /* 04EA0C 800D302C 4600C306 */     mov.s $f12, $f24
  /* 04EA10 800D3030 C7B800EC */      lwc1 $f24, 0xec($sp)
  /* 04EA14 800D3034 C7A600F0 */      lwc1 $f6, 0xf0($sp)
  /* 04EA18 800D3038 44806000 */      mtc1 $zero, $f12
  /* 04EA1C 800D303C C7AE00F4 */      lwc1 $f14, 0xf4($sp)
  /* 04EA20 800D3040 4606C102 */     mul.s $f4, $f24, $f6
  /* 04EA24 800D3044 C7B000F8 */      lwc1 $f16, 0xf8($sp)
  /* 04EA28 800D3048 E7AE0090 */      swc1 $f14, 0x90($sp)
  /* 04EA2C 800D304C C7AA00FC */      lwc1 $f10, 0xfc($sp)
  /* 04EA30 800D3050 E7B00094 */      swc1 $f16, 0x94($sp)
  /* 04EA34 800D3054 C6080014 */      lwc1 $f8, 0x14($s0)
  /* 04EA38 800D3058 4600C087 */     neg.s $f2, $f24
  /* 04EA3C 800D305C 460C2100 */     add.s $f4, $f4, $f12
  /* 04EA40 800D3060 46082780 */     add.s $f30, $f4, $f8
  /* 04EA44 800D3064 460A1102 */     mul.s $f4, $f2, $f10
  /* 04EA48 800D3068 00000000 */       nop 
  /* 04EA4C 800D306C 460E2202 */     mul.s $f8, $f4, $f14
  /* 04EA50 800D3070 00000000 */       nop 
  /* 04EA54 800D3074 4610D102 */     mul.s $f4, $f26, $f16
  /* 04EA58 800D3078 46044200 */     add.s $f8, $f8, $f4
  /* 04EA5C 800D307C 460C4100 */     add.s $f4, $f8, $f12
  /* 04EA60 800D3080 C6080018 */      lwc1 $f8, 0x18($s0)
  /* 04EA64 800D3084 46082100 */     add.s $f4, $f4, $f8
  /* 04EA68 800D3088 46101202 */     mul.s $f8, $f2, $f16
  /* 04EA6C 800D308C E7A400CC */      swc1 $f4, 0xcc($sp)
  /* 04EA70 800D3090 460E4102 */     mul.s $f4, $f8, $f14
  /* 04EA74 800D3094 00000000 */       nop 
  /* 04EA78 800D3098 460AD202 */     mul.s $f8, $f26, $f10
  /* 04EA7C 800D309C 46082101 */     sub.s $f4, $f4, $f8
  /* 04EA80 800D30A0 460C2200 */     add.s $f8, $f4, $f12
  /* 04EA84 800D30A4 C604001C */      lwc1 $f4, 0x1c($s0)
  /* 04EA88 800D30A8 4600A307 */     neg.s $f12, $f20
  /* 04EA8C 800D30AC 46044200 */     add.s $f8, $f8, $f4
  /* 04EA90 800D30B0 C7A40108 */      lwc1 $f4, 0x108($sp)
  /* 04EA94 800D30B4 46040082 */     mul.s $f2, $f0, $f4
  /* 04EA98 800D30B8 E7A800C8 */      swc1 $f8, 0xc8($sp)
  /* 04EA9C 800D30BC C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 04EAA0 800D30C0 4606A202 */     mul.s $f8, $f20, $f6
  /* 04EAA4 800D30C4 E7AA0090 */      swc1 $f10, 0x90($sp)
  /* 04EAA8 800D30C8 C7A000B4 */      lwc1 $f0, 0xb4($sp)
  /* 04EAAC 800D30CC 46041282 */     mul.s $f10, $f2, $f4
  /* 04EAB0 800D30D0 460A4600 */     add.s $f24, $f8, $f10
  /* 04EAB4 800D30D4 C7A80090 */      lwc1 $f8, 0x90($sp)
  /* 04EAB8 800D30D8 E7A60090 */      swc1 $f6, 0x90($sp)
  /* 04EABC 800D30DC C7A60094 */      lwc1 $f6, 0x94($sp)
  /* 04EAC0 800D30E0 46086282 */     mul.s $f10, $f12, $f8
  /* 04EAC4 800D30E4 E7A80094 */      swc1 $f8, 0x94($sp)
  /* 04EAC8 800D30E8 E7A60098 */      swc1 $f6, 0x98($sp)
  /* 04EACC 800D30EC 4600C386 */     mov.s $f14, $f24
  /* 04EAD0 800D30F0 46045282 */     mul.s $f10, $f10, $f4
  /* 04EAD4 800D30F4 00000000 */       nop 
  /* 04EAD8 800D30F8 4606B202 */     mul.s $f8, $f22, $f6
  /* 04EADC 800D30FC C7A60090 */      lwc1 $f6, 0x90($sp)
  /* 04EAE0 800D3100 46085280 */     add.s $f10, $f10, $f8
  /* 04EAE4 800D3104 C7A80094 */      lwc1 $f8, 0x94($sp)
  /* 04EAE8 800D3108 E7A40094 */      swc1 $f4, 0x94($sp)
  /* 04EAEC 800D310C 46081102 */     mul.s $f4, $f2, $f8
  /* 04EAF0 800D3110 00000000 */       nop 
  /* 04EAF4 800D3114 46062102 */     mul.s $f4, $f4, $f6
  /* 04EAF8 800D3118 46045680 */     add.s $f26, $f10, $f4
  /* 04EAFC 800D311C C7AA0098 */      lwc1 $f10, 0x98($sp)
  /* 04EB00 800D3120 E7A80098 */      swc1 $f8, 0x98($sp)
  /* 04EB04 800D3124 C7A80094 */      lwc1 $f8, 0x94($sp)
  /* 04EB08 800D3128 460A6102 */     mul.s $f4, $f12, $f10
  /* 04EB0C 800D312C 92180008 */       lbu $t8, 8($s0)
  /* 04EB10 800D3130 4600D406 */     mov.s $f16, $f26
  /* 04EB14 800D3134 46082102 */     mul.s $f4, $f4, $f8
  /* 04EB18 800D3138 C7A80098 */      lwc1 $f8, 0x98($sp)
  /* 04EB1C 800D313C 4608B202 */     mul.s $f8, $f22, $f8
  /* 04EB20 800D3140 46082101 */     sub.s $f4, $f4, $f8
  /* 04EB24 800D3144 460A1202 */     mul.s $f8, $f2, $f10
  /* 04EB28 800D3148 00000000 */       nop 
  /* 04EB2C 800D314C 46064282 */     mul.s $f10, $f8, $f6
  /* 04EB30 800D3150 460A2700 */     add.s $f28, $f4, $f10
  /* 04EB34 800D3154 16580007 */       bne $s2, $t8, .L800D3174
  /* 04EB38 800D3158 4600E486 */     mov.s $f18, $f28
  /* 04EB3C 800D315C 4600C382 */     mul.s $f14, $f24, $f0
  /* 04EB40 800D3160 00000000 */       nop 
  /* 04EB44 800D3164 4600D402 */     mul.s $f16, $f26, $f0
  /* 04EB48 800D3168 00000000 */       nop 
  /* 04EB4C 800D316C 4600E482 */     mul.s $f18, $f28, $f0
  /* 04EB50 800D3170 00000000 */       nop 
  .L800D3174:
  /* 04EB54 800D3174 9619000C */       lhu $t9, 0xc($s0)
  /* 04EB58 800D3178 92040009 */       lbu $a0, 9($s0)
  /* 04EB5C 800D317C 96050006 */       lhu $a1, 6($s0)
  /* 04EB60 800D3180 9606000A */       lhu $a2, 0xa($s0)
  /* 04EB64 800D3184 8E070010 */        lw $a3, 0x10($s0)
  /* 04EB68 800D3188 C7A800CC */      lwc1 $f8, 0xcc($sp)
  /* 04EB6C 800D318C C7A600C8 */      lwc1 $f6, 0xc8($sp)
  /* 04EB70 800D3190 E7B20028 */      swc1 $f18, 0x28($sp)
  /* 04EB74 800D3194 E7B00024 */      swc1 $f16, 0x24($sp)
  /* 04EB78 800D3198 E7AE0020 */      swc1 $f14, 0x20($sp)
  /* 04EB7C 800D319C E7BE0014 */      swc1 $f30, 0x14($sp)
  /* 04EB80 800D31A0 AFB90010 */        sw $t9, 0x10($sp)
  /* 04EB84 800D31A4 E7A80018 */      swc1 $f8, 0x18($sp)
  /* 04EB88 800D31A8 E7A6001C */      swc1 $f6, 0x1c($sp)
  /* 04EB8C 800D31AC C6040034 */      lwc1 $f4, 0x34($s0)
  /* 04EB90 800D31B0 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 04EB94 800D31B4 C60A002C */      lwc1 $f10, 0x2c($s0)
  /* 04EB98 800D31B8 E7AA0030 */      swc1 $f10, 0x30($sp)
  /* 04EB9C 800D31BC C6080030 */      lwc1 $f8, 0x30($s0)
  /* 04EBA0 800D31C0 AFB0003C */        sw $s0, 0x3c($sp)
  /* 04EBA4 800D31C4 AFA00038 */        sw $zero, 0x38($sp)
  /* 04EBA8 800D31C8 0C0339EA */       jal func_ovl0_800CE7A8
  /* 04EBAC 800D31CC E7A80034 */      swc1 $f8, 0x34($sp)
  /* 04EBB0 800D31D0 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04EBB4 800D31D4 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04EBB8 800D31D8 1000008A */         b .L800D3404
  /* 04EBBC 800D31DC C6020044 */      lwc1 $f2, 0x44($s0)
  glabel jtgt_ovl0_800D31E0
  /* 04EBC0 800D31E0 0C006252 */       jal lbRandom_GetFloat
  /* 04EBC4 800D31E4 00000000 */       nop 
  /* 04EBC8 800D31E8 C6020014 */      lwc1 $f2, 0x14($s0)
  /* 04EBCC 800D31EC C6060050 */      lwc1 $f6, 0x50($s0)
  /* 04EBD0 800D31F0 C60C0018 */      lwc1 $f12, 0x18($s0)
  /* 04EBD4 800D31F4 C6080054 */      lwc1 $f8, 0x54($s0)
  /* 04EBD8 800D31F8 46023101 */     sub.s $f4, $f6, $f2
  /* 04EBDC 800D31FC C60E001C */      lwc1 $f14, 0x1c($s0)
  /* 04EBE0 800D3200 9609000C */       lhu $t1, 0xc($s0)
  /* 04EBE4 800D3204 460C4181 */     sub.s $f6, $f8, $f12
  /* 04EBE8 800D3208 46040282 */     mul.s $f10, $f0, $f4
  /* 04EBEC 800D320C 92040009 */       lbu $a0, 9($s0)
  /* 04EBF0 800D3210 96050006 */       lhu $a1, 6($s0)
  /* 04EBF4 800D3214 46060102 */     mul.s $f4, $f0, $f6
  /* 04EBF8 800D3218 9606000A */       lhu $a2, 0xa($s0)
  /* 04EBFC 800D321C 8E070010 */        lw $a3, 0x10($s0)
  /* 04EC00 800D3220 460A1780 */     add.s $f30, $f2, $f10
  /* 04EC04 800D3224 C60A0058 */      lwc1 $f10, 0x58($s0)
  /* 04EC08 800D3228 AFA90010 */        sw $t1, 0x10($sp)
  /* 04EC0C 800D322C 46046480 */     add.s $f18, $f12, $f4
  /* 04EC10 800D3230 C7A4011C */      lwc1 $f4, 0x11c($sp)
  /* 04EC14 800D3234 E7BE0014 */      swc1 $f30, 0x14($sp)
  /* 04EC18 800D3238 460E5201 */     sub.s $f8, $f10, $f14
  /* 04EC1C 800D323C C7AA0120 */      lwc1 $f10, 0x120($sp)
  /* 04EC20 800D3240 E7B20018 */      swc1 $f18, 0x18($sp)
  /* 04EC24 800D3244 E7A40020 */      swc1 $f4, 0x20($sp)
  /* 04EC28 800D3248 46080182 */     mul.s $f6, $f0, $f8
  /* 04EC2C 800D324C C7A80124 */      lwc1 $f8, 0x124($sp)
  /* 04EC30 800D3250 E7AA0024 */      swc1 $f10, 0x24($sp)
  /* 04EC34 800D3254 E7A80028 */      swc1 $f8, 0x28($sp)
  /* 04EC38 800D3258 46067400 */     add.s $f16, $f14, $f6
  /* 04EC3C 800D325C E7B0001C */      swc1 $f16, 0x1c($sp)
  /* 04EC40 800D3260 C6060034 */      lwc1 $f6, 0x34($s0)
  /* 04EC44 800D3264 E7A6002C */      swc1 $f6, 0x2c($sp)
  /* 04EC48 800D3268 C604002C */      lwc1 $f4, 0x2c($s0)
  /* 04EC4C 800D326C E7A40030 */      swc1 $f4, 0x30($sp)
  /* 04EC50 800D3270 C60A0030 */      lwc1 $f10, 0x30($s0)
  /* 04EC54 800D3274 AFB0003C */        sw $s0, 0x3c($sp)
  /* 04EC58 800D3278 AFA00038 */        sw $zero, 0x38($sp)
  /* 04EC5C 800D327C 0C0339EA */       jal func_ovl0_800CE7A8
  /* 04EC60 800D3280 E7AA0034 */      swc1 $f10, 0x34($sp)
  /* 04EC64 800D3284 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04EC68 800D3288 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04EC6C 800D328C 1000005D */         b .L800D3404
  /* 04EC70 800D3290 C6020044 */      lwc1 $f2, 0x44($s0)
  glabel jtgt_ovl0_800D3294
  /* 04EC74 800D3294 C7AC0120 */      lwc1 $f12, 0x120($sp)
  /* 04EC78 800D3298 C7AE0124 */      lwc1 $f14, 0x124($sp)
  /* 04EC7C 800D329C C7B4011C */      lwc1 $f20, 0x11c($sp)
  /* 04EC80 800D32A0 46006586 */     mov.s $f22, $f12
  /* 04EC84 800D32A4 0C00618F */       jal atan2f
  /* 04EC88 800D32A8 46007606 */     mov.s $f24, $f14
  /* 04EC8C 800D32AC 46000686 */     mov.s $f26, $f0
  /* 04EC90 800D32B0 0C00C0FC */       jal __sinf
  /* 04EC94 800D32B4 46000306 */     mov.s $f12, $f0
  /* 04EC98 800D32B8 46000706 */     mov.s $f28, $f0
  /* 04EC9C 800D32BC 0C00D734 */       jal cosf
  /* 04ECA0 800D32C0 4600D306 */     mov.s $f12, $f26
  /* 04ECA4 800D32C4 461CB202 */     mul.s $f8, $f22, $f28
  /* 04ECA8 800D32C8 4600A306 */     mov.s $f12, $f20
  /* 04ECAC 800D32CC 4600C182 */     mul.s $f6, $f24, $f0
  /* 04ECB0 800D32D0 0C00618F */       jal atan2f
  /* 04ECB4 800D32D4 46064380 */     add.s $f14, $f8, $f6
  /* 04ECB8 800D32D8 4614A102 */     mul.s $f4, $f20, $f20
  /* 04ECBC 800D32DC 46000706 */     mov.s $f28, $f0
  /* 04ECC0 800D32E0 4616B282 */     mul.s $f10, $f22, $f22
  /* 04ECC4 800D32E4 460A2200 */     add.s $f8, $f4, $f10
  /* 04ECC8 800D32E8 4618C182 */     mul.s $f6, $f24, $f24
  /* 04ECCC 800D32EC 0C00CD44 */       jal sqrtf
  /* 04ECD0 800D32F0 46064300 */     add.s $f12, $f8, $f6
  /* 04ECD4 800D32F4 4480F000 */      mtc1 $zero, $f30
  /* 04ECD8 800D32F8 C6040038 */      lwc1 $f4, 0x38($s0)
  /* 04ECDC 800D32FC 46000586 */     mov.s $f22, $f0
  /* 04ECE0 800D3300 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04ECE4 800D3304 461E203C */    c.lt.s $f4, $f30
  /* 04ECE8 800D3308 00000000 */       nop 
  /* 04ECEC 800D330C 45000004 */      bc1f .L800D3320
  /* 04ECF0 800D3310 00000000 */       nop 
  /* 04ECF4 800D3314 4481C000 */      mtc1 $at, $f24 # 1.0 to cop1
  /* 04ECF8 800D3318 10000005 */         b .L800D3330
  /* 04ECFC 800D331C C60A003C */      lwc1 $f10, 0x3c($s0)
  .L800D3320:
  /* 04ED00 800D3320 0C006252 */       jal lbRandom_GetFloat
  /* 04ED04 800D3324 00000000 */       nop 
  /* 04ED08 800D3328 46000606 */     mov.s $f24, $f0
  /* 04ED0C 800D332C C60A003C */      lwc1 $f10, 0x3c($s0)
  .L800D3330:
  /* 04ED10 800D3330 C7A800DC */      lwc1 $f8, 0xdc($sp)
  /* 04ED14 800D3334 C7A600B8 */      lwc1 $f6, 0xb8($sp)
  /* 04ED18 800D3338 461E503C */    c.lt.s $f10, $f30
  /* 04ED1C 800D333C 00000000 */       nop 
  /* 04ED20 800D3340 45000004 */      bc1f .L800D3354
  /* 04ED24 800D3344 00000000 */       nop 
  /* 04ED28 800D3348 46064100 */     add.s $f4, $f8, $f6
  /* 04ED2C 800D334C 10000007 */         b .L800D336C
  /* 04ED30 800D3350 E7A400DC */      swc1 $f4, 0xdc($sp)
  .L800D3354:
  /* 04ED34 800D3354 0C006252 */       jal lbRandom_GetFloat
  /* 04ED38 800D3358 00000000 */       nop 
  /* 04ED3C 800D335C 3C01800D */       lui $at, %hi(D_ovl0_800D6280)
  /* 04ED40 800D3360 C42A6280 */      lwc1 $f10, %lo(D_ovl0_800D6280)($at)
  /* 04ED44 800D3364 460A0202 */     mul.s $f8, $f0, $f10
  /* 04ED48 800D3368 E7A800DC */      swc1 $f8, 0xdc($sp)
  .L800D336C:
  /* 04ED4C 800D336C E6160050 */      swc1 $f22, 0x50($s0)
  /* 04ED50 800D3370 96050006 */       lhu $a1, 6($s0)
  /* 04ED54 800D3374 9608000C */       lhu $t0, 0xc($s0)
  /* 04ED58 800D3378 92040009 */       lbu $a0, 9($s0)
  /* 04ED5C 800D337C 9606000A */       lhu $a2, 0xa($s0)
  /* 04ED60 800D3380 8E070010 */        lw $a3, 0x10($s0)
  /* 04ED64 800D3384 4480A000 */      mtc1 $zero, $f20
  /* 04ED68 800D3388 C7A600DC */      lwc1 $f6, 0xdc($sp)
  /* 04ED6C 800D338C E7B80024 */      swc1 $f24, 0x24($sp)
  /* 04ED70 800D3390 AFA80010 */        sw $t0, 0x10($sp)
  /* 04ED74 800D3394 E7A60020 */      swc1 $f6, 0x20($sp)
  /* 04ED78 800D3398 E7B40014 */      swc1 $f20, 0x14($sp)
  /* 04ED7C 800D339C E7B40018 */      swc1 $f20, 0x18($sp)
  /* 04ED80 800D33A0 E7B4001C */      swc1 $f20, 0x1c($sp)
  /* 04ED84 800D33A4 E7B40028 */      swc1 $f20, 0x28($sp)
  /* 04ED88 800D33A8 C6040034 */      lwc1 $f4, 0x34($s0)
  /* 04ED8C 800D33AC AFB0003C */        sw $s0, 0x3c($sp)
  /* 04ED90 800D33B0 AFA00038 */        sw $zero, 0x38($sp)
  /* 04ED94 800D33B4 E7BC0034 */      swc1 $f28, 0x34($sp)
  /* 04ED98 800D33B8 E7BA0030 */      swc1 $f26, 0x30($sp)
  /* 04ED9C 800D33BC 34A50004 */       ori $a1, $a1, 4
  /* 04EDA0 800D33C0 0C0339EA */       jal func_ovl0_800CE7A8
  /* 04EDA4 800D33C4 E7A4002C */      swc1 $f4, 0x2c($sp)
  /* 04EDA8 800D33C8 10400004 */      beqz $v0, .L800D33DC
  /* 04EDAC 800D33CC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 04EDB0 800D33D0 960F0054 */       lhu $t7, 0x54($s0)
  /* 04EDB4 800D33D4 25EB0001 */     addiu $t3, $t7, 1
  /* 04EDB8 800D33D8 A60B0054 */        sh $t3, 0x54($s0)
  .L800D33DC:
  /* 04EDBC 800D33DC 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 04EDC0 800D33E0 10000008 */         b .L800D3404
  /* 04EDC4 800D33E4 C6020044 */      lwc1 $f2, 0x44($s0)
  .L800D33E8:
  /* 04EDC8 800D33E8 8E620000 */        lw $v0, ($s3) # D_ovl0_800D6440 + 0
  /* 04EDCC 800D33EC 02202825 */        or $a1, $s1, $zero
  /* 04EDD0 800D33F0 50400005 */      beql $v0, $zero, .L800D3408
  /* 04EDD4 800D33F4 461A1281 */     sub.s $f10, $f2, $f26
  /* 04EDD8 800D33F8 0040F809 */      jalr $v0
  /* 04EDDC 800D33FC 02002025 */        or $a0, $s0, $zero
  /* 04EDE0 800D3400 C6020044 */      lwc1 $f2, 0x44($s0)
  .L800D3404:
  /* 04EDE4 800D3404 461A1281 */     sub.s $f10, $f2, $f26
  .L800D3408:
  /* 04EDE8 800D3408 E60A0044 */      swc1 $f10, 0x44($s0)
  /* 04EDEC 800D340C C6020044 */      lwc1 $f2, 0x44($s0)
  /* 04EDF0 800D3410 4602D03E */    c.le.s $f26, $f2
  /* 04EDF4 800D3414 00000000 */       nop 
  /* 04EDF8 800D3418 4503FE98 */     bc1tl .L800D2E7C
  /* 04EDFC 800D341C 920D0008 */       lbu $t5, 8($s0)
  /* 04EE00 800D3420 9602000E */       lhu $v0, 0xe($s0)
  .L800D3424:
  /* 04EE04 800D3424 10400033 */      beqz $v0, .L800D34F4
  /* 04EE08 800D3428 244CFFFF */     addiu $t4, $v0, -1
  /* 04EE0C 800D342C 318EFFFF */      andi $t6, $t4, 0xffff
  /* 04EE10 800D3430 15C00030 */      bnez $t6, .L800D34F4
  /* 04EE14 800D3434 A60C000E */        sh $t4, 0xe($s0)
  /* 04EE18 800D3438 920D0008 */       lbu $t5, 8($s0)
  /* 04EE1C 800D343C 24010002 */     addiu $at, $zero, 2
  /* 04EE20 800D3440 55A1000A */      bnel $t5, $at, .L800D346C
  /* 04EE24 800D3444 8E820000 */        lw $v0, ($s4) # D_ovl0_800D6458 + 0
  /* 04EE28 800D3448 960A0054 */       lhu $t2, 0x54($s0)
  /* 04EE2C 800D344C 24180001 */     addiu $t8, $zero, 1
  /* 04EE30 800D3450 51400006 */      beql $t2, $zero, .L800D346C
  /* 04EE34 800D3454 8E820000 */        lw $v0, ($s4) # D_ovl0_800D6458 + 0
  /* 04EE38 800D3458 44804000 */      mtc1 $zero, $f8
  /* 04EE3C 800D345C A618000E */        sh $t8, 0xe($s0)
  /* 04EE40 800D3460 10000024 */         b .L800D34F4
  /* 04EE44 800D3464 E6080040 */      swc1 $f8, 0x40($s0)
  /* 04EE48 800D3468 8E820000 */        lw $v0, ($s4) # D_ovl0_800D6458 + 0
  .L800D346C:
  /* 04EE4C 800D346C 54400006 */      bnel $v0, $zero, .L800D3488
  /* 04EE50 800D3470 8E090000 */        lw $t1, ($s0)
  /* 04EE54 800D3474 8E190000 */        lw $t9, ($s0)
  /* 04EE58 800D3478 3C01800D */       lui $at, %hi(D_ovl0_800D639C)
  /* 04EE5C 800D347C 10000003 */         b .L800D348C
  /* 04EE60 800D3480 AC39639C */        sw $t9, %lo(D_ovl0_800D639C)($at)
  /* 04EE64 800D3484 8E090000 */        lw $t1, ($s0)
  .L800D3488:
  /* 04EE68 800D3488 AC490000 */        sw $t1, ($v0)
  .L800D348C:
  /* 04EE6C 800D348C 8E04004C */        lw $a0, 0x4c($s0)
  /* 04EE70 800D3490 8E020000 */        lw $v0, ($s0)
  /* 04EE74 800D3494 1080000B */      beqz $a0, .L800D34C4
  /* 04EE78 800D3498 00000000 */       nop 
  /* 04EE7C 800D349C 9488002A */       lhu $t0, 0x2a($a0)
  /* 04EE80 800D34A0 250FFFFF */     addiu $t7, $t0, -1
  /* 04EE84 800D34A4 A48F002A */        sh $t7, 0x2a($a0)
  /* 04EE88 800D34A8 8E04004C */        lw $a0, 0x4c($s0)
  /* 04EE8C 800D34AC 948B002A */       lhu $t3, 0x2a($a0)
  /* 04EE90 800D34B0 15600004 */      bnez $t3, .L800D34C4
  /* 04EE94 800D34B4 00000000 */       nop 
  /* 04EE98 800D34B8 0C033862 */       jal func_ovl0_800CE188
  /* 04EE9C 800D34BC AFA20138 */        sw $v0, 0x138($sp)
  /* 04EEA0 800D34C0 8FA20138 */        lw $v0, 0x138($sp)
  .L800D34C4:
  /* 04EEA4 800D34C4 3C0C800D */       lui $t4, %hi(D_ovl0_800D6398)
  /* 04EEA8 800D34C8 8D8C6398 */        lw $t4, %lo(D_ovl0_800D6398)($t4)
  /* 04EEAC 800D34CC 3C0E800D */       lui $t6, %hi(D_ovl0_800D644A)
  /* 04EEB0 800D34D0 3C01800D */       lui $at, %hi(D_ovl0_800D6398)
  /* 04EEB4 800D34D4 AE0C0000 */        sw $t4, ($s0)
  /* 04EEB8 800D34D8 95CE644A */       lhu $t6, %lo(D_ovl0_800D644A)($t6)
  /* 04EEBC 800D34DC AC306398 */        sw $s0, %lo(D_ovl0_800D6398)($at)
  /* 04EEC0 800D34E0 3C01800D */       lui $at, %hi(D_ovl0_800D644A)
  /* 04EEC4 800D34E4 25CDFFFF */     addiu $t5, $t6, -1
  /* 04EEC8 800D34E8 00408025 */        or $s0, $v0, $zero
  /* 04EECC 800D34EC 10000003 */         b .L800D34FC
  /* 04EED0 800D34F0 A42D644A */        sh $t5, %lo(D_ovl0_800D644A)($at)
  .L800D34F4:
  /* 04EED4 800D34F4 AE900000 */        sw $s0, ($s4) # D_ovl0_800D6458 + 0
  /* 04EED8 800D34F8 8E100000 */        lw $s0, ($s0)
  .L800D34FC:
  /* 04EEDC 800D34FC 5600FDEE */      bnel $s0, $zero, .L800D2CB8
  /* 04EEE0 800D3500 8FAF0140 */        lw $t7, 0x140($sp)
  .L800D3504:
  /* 04EEE4 800D3504 8FBF008C */        lw $ra, 0x8c($sp)
  /* 04EEE8 800D3508 D7B40048 */      ldc1 $f20, 0x48($sp)
  /* 04EEEC 800D350C D7B60050 */      ldc1 $f22, 0x50($sp)
  /* 04EEF0 800D3510 D7B80058 */      ldc1 $f24, 0x58($sp)
  /* 04EEF4 800D3514 D7BA0060 */      ldc1 $f26, 0x60($sp)
  /* 04EEF8 800D3518 D7BC0068 */      ldc1 $f28, 0x68($sp)
  /* 04EEFC 800D351C D7BE0070 */      ldc1 $f30, 0x70($sp)
  /* 04EF00 800D3520 8FB00078 */        lw $s0, 0x78($sp)
  /* 04EF04 800D3524 8FB1007C */        lw $s1, 0x7c($sp)
  /* 04EF08 800D3528 8FB20080 */        lw $s2, 0x80($sp)
  /* 04EF0C 800D352C 8FB30084 */        lw $s3, 0x84($sp)
  /* 04EF10 800D3530 8FB40088 */        lw $s4, 0x88($sp)
  /* 04EF14 800D3534 03E00008 */        jr $ra
  /* 04EF18 800D3538 27BD0140 */     addiu $sp, $sp, 0x140

