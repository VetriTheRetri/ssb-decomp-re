.section .late_rodata

glabel D_ovl0_800D5E88
  /* E648 051868 800D5E88 */
  .word 0xff7fffff # .float -3.4028235e38

glabel D_ovl0_800D5E8C
  /* E64C 05186C 800D5E8C */
  .word 0xfeaaaaaa # .float -1.1342745e38

glabel jtbl_ovl0_800D5E90
  /* E650 051870 800D5E90 */  .word jtgt_ovl0_800C9560
  /* E654 051874 800D5E94 */  .word jtgt_ovl0_800C9570
  /* E658 051878 800D5E98 */  .word jtgt_ovl0_800C9580
  /* E65C 05187C 800D5E9C */  .word jtgt_ovl0_800C9590
  /* E660 051880 800D5EA0 */  .word jtgt_ovl0_800C960C
  /* E664 051884 800D5EA4 */  .word jtgt_ovl0_800C9624
  /* E668 051888 800D5EA8 */  .word jtgt_ovl0_800C963C
  /* E66C 05188C 800D5EAC */  .word jtgt_ovl0_800C9654
  /* E670 051890 800D5EB0 */  .word jtgt_ovl0_800C9664
  /* E674 051894 800D5EB4 */  .word jtgt_ovl0_800C9674

glabel D_ovl0_800D5EB8
  /* E678 051898 800D5EB8 */
  .word 0xfeaaaaaa # .float -1.1342745e38

glabel D_ovl0_800D5EBC
  /* E67C 05189C 800D5EBC */
  .word 0xff7fffff # .float -3.4028235e38

.section .text
glabel func_ovl0_800C9488
  /* 044E68 800C9488 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 044E6C 800C948C AFBF003C */        sw $ra, 0x3c($sp)
  /* 044E70 800C9490 AFB30038 */        sw $s3, 0x38($sp)
  /* 044E74 800C9494 AFB20034 */        sw $s2, 0x34($sp)
  /* 044E78 800C9498 AFB10030 */        sw $s1, 0x30($sp)
  /* 044E7C 800C949C AFB0002C */        sw $s0, 0x2c($sp)
  /* 044E80 800C94A0 F7B80020 */      sdc1 $f24, 0x20($sp)
  /* 044E84 800C94A4 F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 044E88 800C94A8 F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 044E8C 800C94AC 3C01800D */       lui $at, %hi(D_ovl0_800D5E88)
  /* 044E90 800C94B0 C4245E88 */      lwc1 $f4, %lo(D_ovl0_800D5E88)($at)
  /* 044E94 800C94B4 C4800074 */      lwc1 $f0, 0x74($a0)
  /* 044E98 800C94B8 00808825 */        or $s1, $a0, $zero
  /* 044E9C 800C94BC 00A09825 */        or $s3, $a1, $zero
  /* 044EA0 800C94C0 46002032 */    c.eq.s $f4, $f0
  /* 044EA4 800C94C4 00000000 */       nop 
  /* 044EA8 800C94C8 4503007B */     bc1tl .L800C96B8
  /* 044EAC 800C94CC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 044EB0 800C94D0 8C90006C */        lw $s0, 0x6c($a0)
  /* 044EB4 800C94D4 3C01800D */       lui $at, %hi(D_ovl0_800D5E8C)
  /* 044EB8 800C94D8 1200006D */      beqz $s0, .L800C9690
  /* 044EBC 800C94DC 00000000 */       nop 
  /* 044EC0 800C94E0 C4385E8C */      lwc1 $f24, %lo(D_ovl0_800D5E8C)($at)
  /* 044EC4 800C94E4 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 044EC8 800C94E8 4481B000 */      mtc1 $at, $f22 # 1.0 to cop1
  /* 044ECC 800C94EC 4480A000 */      mtc1 $zero, $f20
  /* 044ED0 800C94F0 00000000 */       nop 
  /* 044ED4 800C94F4 920E0005 */       lbu $t6, 5($s0)
  .L800C94F8:
  /* 044ED8 800C94F8 51C00062 */      beql $t6, $zero, .L800C9684
  /* 044EDC 800C94FC 8E100000 */        lw $s0, ($s0)
  /* 044EE0 800C9500 C6260074 */      lwc1 $f6, 0x74($s1)
  /* 044EE4 800C9504 4606C032 */    c.eq.s $f24, $f6
  /* 044EE8 800C9508 00000000 */       nop 
  /* 044EEC 800C950C 45030006 */     bc1tl .L800C9528
  /* 044EF0 800C9510 8E2F0004 */        lw $t7, 4($s1)
  /* 044EF4 800C9514 C608000C */      lwc1 $f8, 0xc($s0)
  /* 044EF8 800C9518 C62A0078 */      lwc1 $f10, 0x78($s1)
  /* 044EFC 800C951C 460A4400 */     add.s $f16, $f8, $f10
  /* 044F00 800C9520 E610000C */      swc1 $f16, 0xc($s0)
  /* 044F04 800C9524 8E2F0004 */        lw $t7, 4($s1)
  .L800C9528:
  /* 044F08 800C9528 8DF8007C */        lw $t8, 0x7c($t7)
  /* 044F0C 800C952C 33190002 */      andi $t9, $t8, 2
  /* 044F10 800C9530 57200054 */      bnel $t9, $zero, .L800C9684
  /* 044F14 800C9534 8E100000 */        lw $s0, ($s0)
  /* 044F18 800C9538 92080004 */       lbu $t0, 4($s0)
  /* 044F1C 800C953C 2509FFFF */     addiu $t1, $t0, -1
  /* 044F20 800C9540 2D21000A */     sltiu $at, $t1, 0xa
  /* 044F24 800C9544 1020004E */      beqz $at, .L800C9680
  /* 044F28 800C9548 00094880 */       sll $t1, $t1, 2
  /* 044F2C 800C954C 3C01800D */       lui $at, %hi(jtbl_ovl0_800D5E90)
  /* 044F30 800C9550 00290821 */      addu $at, $at, $t1
  /* 044F34 800C9554 8C295E90 */        lw $t1, %lo(jtbl_ovl0_800D5E90)($at)
  /* 044F38 800C9558 01200008 */        jr $t1
  /* 044F3C 800C955C 00000000 */       nop 
  glabel jtgt_ovl0_800C9560
  /* 044F40 800C9560 0C0032E5 */       jal func_8000CB94
  /* 044F44 800C9564 02002025 */        or $a0, $s0, $zero
  /* 044F48 800C9568 10000045 */         b .L800C9680
  /* 044F4C 800C956C E6200030 */      swc1 $f0, 0x30($s1)
  glabel jtgt_ovl0_800C9570
  /* 044F50 800C9570 0C0032E5 */       jal func_8000CB94
  /* 044F54 800C9574 02002025 */        or $a0, $s0, $zero
  /* 044F58 800C9578 10000041 */         b .L800C9680
  /* 044F5C 800C957C E6200034 */      swc1 $f0, 0x34($s1)
  glabel jtgt_ovl0_800C9580
  /* 044F60 800C9580 0C0032E5 */       jal func_8000CB94
  /* 044F64 800C9584 02002025 */        or $a0, $s0, $zero
  /* 044F68 800C9588 1000003D */         b .L800C9680
  /* 044F6C 800C958C E6200038 */      swc1 $f0, 0x38($s1)
  glabel jtgt_ovl0_800C9590
  /* 044F70 800C9590 02002025 */        or $a0, $s0, $zero
  /* 044F74 800C9594 0C0032E5 */       jal func_8000CB94
  /* 044F78 800C9598 2632001C */     addiu $s2, $s1, 0x1c
  /* 044F7C 800C959C 4614003C */    c.lt.s $f0, $f20
  /* 044F80 800C95A0 46000086 */     mov.s $f2, $f0
  /* 044F84 800C95A4 02402025 */        or $a0, $s2, $zero
  /* 044F88 800C95A8 45020004 */     bc1fl .L800C95BC
  /* 044F8C 800C95AC 4600B03C */    c.lt.s $f22, $f0
  /* 044F90 800C95B0 10000006 */         b .L800C95CC
  /* 044F94 800C95B4 4600A086 */     mov.s $f2, $f20
  /* 044F98 800C95B8 4600B03C */    c.lt.s $f22, $f0
  .L800C95BC:
  /* 044F9C 800C95BC 00000000 */       nop 
  /* 044FA0 800C95C0 45020003 */     bc1fl .L800C95D0
  /* 044FA4 800C95C4 44061000 */      mfc1 $a2, $f2
  /* 044FA8 800C95C8 4600B086 */     mov.s $f2, $f22
  .L800C95CC:
  /* 044FAC 800C95CC 44061000 */      mfc1 $a2, $f2
  .L800C95D0:
  /* 044FB0 800C95D0 0C00794C */       jal hal_interpolation_cubic
  /* 044FB4 800C95D4 8E050020 */        lw $a1, 0x20($s0)
  /* 044FB8 800C95D8 C632001C */      lwc1 $f18, 0x1c($s1)
  /* 044FBC 800C95DC C6640000 */      lwc1 $f4, ($s3)
  /* 044FC0 800C95E0 C6280020 */      lwc1 $f8, 0x20($s1)
  /* 044FC4 800C95E4 46049182 */     mul.s $f6, $f18, $f4
  /* 044FC8 800C95E8 C6320024 */      lwc1 $f18, 0x24($s1)
  /* 044FCC 800C95EC E626001C */      swc1 $f6, 0x1c($s1)
  /* 044FD0 800C95F0 C66A0004 */      lwc1 $f10, 4($s3)
  /* 044FD4 800C95F4 460A4402 */     mul.s $f16, $f8, $f10
  /* 044FD8 800C95F8 E6300020 */      swc1 $f16, 0x20($s1)
  /* 044FDC 800C95FC C6640008 */      lwc1 $f4, 8($s3)
  /* 044FE0 800C9600 46049182 */     mul.s $f6, $f18, $f4
  /* 044FE4 800C9604 1000001E */         b .L800C9680
  /* 044FE8 800C9608 E6260024 */      swc1 $f6, 0x24($s1)
  glabel jtgt_ovl0_800C960C
  /* 044FEC 800C960C 0C0032E5 */       jal func_8000CB94
  /* 044FF0 800C9610 02002025 */        or $a0, $s0, $zero
  /* 044FF4 800C9614 C6680000 */      lwc1 $f8, ($s3)
  /* 044FF8 800C9618 46080282 */     mul.s $f10, $f0, $f8
  /* 044FFC 800C961C 10000018 */         b .L800C9680
  /* 045000 800C9620 E62A001C */      swc1 $f10, 0x1c($s1)
  glabel jtgt_ovl0_800C9624
  /* 045004 800C9624 0C0032E5 */       jal func_8000CB94
  /* 045008 800C9628 02002025 */        or $a0, $s0, $zero
  /* 04500C 800C962C C6700004 */      lwc1 $f16, 4($s3)
  /* 045010 800C9630 46100482 */     mul.s $f18, $f0, $f16
  /* 045014 800C9634 10000012 */         b .L800C9680
  /* 045018 800C9638 E6320020 */      swc1 $f18, 0x20($s1)
  glabel jtgt_ovl0_800C963C
  /* 04501C 800C963C 0C0032E5 */       jal func_8000CB94
  /* 045020 800C9640 02002025 */        or $a0, $s0, $zero
  /* 045024 800C9644 C6640008 */      lwc1 $f4, 8($s3)
  /* 045028 800C9648 46040182 */     mul.s $f6, $f0, $f4
  /* 04502C 800C964C 1000000C */         b .L800C9680
  /* 045030 800C9650 E6260024 */      swc1 $f6, 0x24($s1)
  glabel jtgt_ovl0_800C9654
  /* 045034 800C9654 0C0032E5 */       jal func_8000CB94
  /* 045038 800C9658 02002025 */        or $a0, $s0, $zero
  /* 04503C 800C965C 10000008 */         b .L800C9680
  /* 045040 800C9660 E6200040 */      swc1 $f0, 0x40($s1)
  glabel jtgt_ovl0_800C9664
  /* 045044 800C9664 0C0032E5 */       jal func_8000CB94
  /* 045048 800C9668 02002025 */        or $a0, $s0, $zero
  /* 04504C 800C966C 10000004 */         b .L800C9680
  /* 045050 800C9670 E6200044 */      swc1 $f0, 0x44($s1)
  glabel jtgt_ovl0_800C9674
  /* 045054 800C9674 0C0032E5 */       jal func_8000CB94
  /* 045058 800C9678 02002025 */        or $a0, $s0, $zero
  /* 04505C 800C967C E6200048 */      swc1 $f0, 0x48($s1)
  .L800C9680:
  /* 045060 800C9680 8E100000 */        lw $s0, ($s0)
  .L800C9684:
  /* 045064 800C9684 5600FF9C */      bnel $s0, $zero, .L800C94F8
  /* 045068 800C9688 920E0005 */       lbu $t6, 5($s0)
  /* 04506C 800C968C C6200074 */      lwc1 $f0, 0x74($s1)
  .L800C9690:
  /* 045070 800C9690 3C01800D */       lui $at, %hi(D_ovl0_800D5EB8)
  /* 045074 800C9694 C4385EB8 */      lwc1 $f24, %lo(D_ovl0_800D5EB8)($at)
  /* 045078 800C9698 3C01800D */       lui $at, %hi(D_ovl0_800D5EBC)
  /* 04507C 800C969C 4600C032 */    c.eq.s $f24, $f0
  /* 045080 800C96A0 00000000 */       nop 
  /* 045084 800C96A4 45020004 */     bc1fl .L800C96B8
  /* 045088 800C96A8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 04508C 800C96AC C4285EBC */      lwc1 $f8, %lo(D_ovl0_800D5EBC)($at)
  /* 045090 800C96B0 E6280074 */      swc1 $f8, 0x74($s1)
  /* 045094 800C96B4 8FBF003C */        lw $ra, 0x3c($sp)
  .L800C96B8:
  /* 045098 800C96B8 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 04509C 800C96BC D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 0450A0 800C96C0 D7B80020 */      ldc1 $f24, 0x20($sp)
  /* 0450A4 800C96C4 8FB0002C */        lw $s0, 0x2c($sp)
  /* 0450A8 800C96C8 8FB10030 */        lw $s1, 0x30($sp)
  /* 0450AC 800C96CC 8FB20034 */        lw $s2, 0x34($sp)
  /* 0450B0 800C96D0 8FB30038 */        lw $s3, 0x38($sp)
  /* 0450B4 800C96D4 03E00008 */        jr $ra
  /* 0450B8 800C96D8 27BD0040 */     addiu $sp, $sp, 0x40

