.section .late_rodata

glabel D_8003DFA8
  .word 0xFEFFFFFF # .float -1.7014117e38

glabel D_8003DFAC
  /* 3DBAC 03EBAC 8003DFAC */
  .word 0x40c90fdb # .float 6.2831855


.section .text
glabel func_8000E8A8
  /* 00F4A8 8000E8A8 27BDFF38 */     addiu $sp, $sp, -0xc8
  /* 00F4AC 8000E8AC F7B60030 */      sdc1 $f22, 0x30($sp)
  /* 00F4B0 8000E8B0 4480B000 */      mtc1 $zero, $f22
  /* 00F4B4 8000E8B4 AFB50060 */        sw $s5, 0x60($sp)
  /* 00F4B8 8000E8B8 AFB20054 */        sw $s2, 0x54($sp)
  /* 00F4BC 8000E8BC 44866000 */      mtc1 $a2, $f12
  /* 00F4C0 8000E8C0 00809025 */        or $s2, $a0, $zero
  /* 00F4C4 8000E8C4 00E0A825 */        or $s5, $a3, $zero
  /* 00F4C8 8000E8C8 AFBF0064 */        sw $ra, 0x64($sp)
  /* 00F4CC 8000E8CC AFB4005C */        sw $s4, 0x5c($sp)
  /* 00F4D0 8000E8D0 AFB30058 */        sw $s3, 0x58($sp)
  /* 00F4D4 8000E8D4 AFB10050 */        sw $s1, 0x50($sp)
  /* 00F4D8 8000E8D8 AFB0004C */        sw $s0, 0x4c($sp)
  /* 00F4DC 8000E8DC F7BA0040 */      sdc1 $f26, 0x40($sp)
  /* 00F4E0 8000E8E0 F7B80038 */      sdc1 $f24, 0x38($sp)
  /* 00F4E4 8000E8E4 F7B40028 */      sdc1 $f20, 0x28($sp)
  /* 00F4E8 8000E8E8 AFA000C0 */        sw $zero, 0xc0($sp)
  /* 00F4EC 8000E8EC AFA0009C */        sw $zero, 0x9c($sp)
  /* 00F4F0 8000E8F0 AFA00098 */        sw $zero, 0x98($sp)
  /* 00F4F4 8000E8F4 10A00004 */      beqz $a1, .L8000E908
  /* 00F4F8 8000E8F8 E7B600A4 */      swc1 $f22, 0xa4($sp)
  /* 00F4FC 8000E8FC 8CAE0000 */        lw $t6, ($a1)
  /* 00F500 8000E900 55C00009 */      bnel $t6, $zero, .L8000E928
  /* 00F504 8000E904 8E4F006C */        lw $t7, 0x6c($s2)
  .L8000E908:
  /* 00F508 8000E908 56A00007 */      bnel $s5, $zero, .L8000E928
  /* 00F50C 8000E90C 8E4F006C */        lw $t7, 0x6c($s2)
  /* 00F510 8000E910 0C0023B9 */       jal func_80008EE4
  /* 00F514 8000E914 02402025 */        or $a0, $s2, $zero
  /* 00F518 8000E918 44800000 */      mtc1 $zero, $f0
  /* 00F51C 8000E91C 100000C5 */         b .L8000EC34
  /* 00F520 8000E920 8FBF0064 */        lw $ra, 0x64($sp)
  /* 00F524 8000E924 8E4F006C */        lw $t7, 0x6c($s2)
  .L8000E928:
  /* 00F528 8000E928 AFAF00C4 */        sw $t7, 0xc4($sp)
  /* 00F52C 8000E92C 10A0000E */      beqz $a1, .L8000E968
  /* 00F530 8000E930 AE40006C */        sw $zero, 0x6c($s2)
  /* 00F534 8000E934 8CA20000 */        lw $v0, ($a1)
  /* 00F538 8000E938 3C018004 */       lui $at, %hi(D_8003DFA8)
  /* 00F53C 8000E93C 02402025 */        or $a0, $s2, $zero
  /* 00F540 8000E940 5040000A */      beql $v0, $zero, .L8000E96C
  /* 00F544 8000E944 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 00F548 8000E948 AE420070 */        sw $v0, 0x70($s2)
  /* 00F54C 8000E94C C424DFA8 */      lwc1 $f4, %lo(D_8003DFA8)($at)
  /* 00F550 8000E950 E64C007C */      swc1 $f12, 0x7c($s2)
  /* 00F554 8000E954 0C002FFA */       jal func_8000BFE8
  /* 00F558 8000E958 E6440074 */      swc1 $f4, 0x74($s2)
  /* 00F55C 8000E95C 8E58006C */        lw $t8, 0x6c($s2)
  /* 00F560 8000E960 AFB800C0 */        sw $t8, 0xc0($sp)
  /* 00F564 8000E964 AE40006C */        sw $zero, 0x6c($s2)
  .L8000E968:
  /* 00F568 8000E968 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  .L8000E96C:
  /* 00F56C 8000E96C 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 00F570 8000E970 3C018004 */       lui $at, %hi(D_8003DFAC)
  /* 00F574 8000E974 C438DFAC */      lwc1 $f24, %lo(D_8003DFAC)($at)
  /* 00F578 8000E978 24100001 */     addiu $s0, $zero, 1
  /* 00F57C 8000E97C C7B400DC */      lwc1 $f20, 0xdc($sp)
  /* 00F580 8000E980 24140001 */     addiu $s4, $zero, 1
  /* 00F584 8000E984 24130002 */     addiu $s3, $zero, 2
  /* 00F588 8000E988 8FB100D8 */        lw $s1, 0xd8($sp)
  /* 00F58C 8000E98C 24010004 */     addiu $at, $zero, 4
  .L8000E990:
  /* 00F590 8000E990 12010092 */       beq $s0, $at, .L8000EBDC
  /* 00F594 8000E994 00002025 */        or $a0, $zero, $zero
  /* 00F598 8000E998 8FB900C0 */        lw $t9, 0xc0($sp)
  /* 00F59C 8000E99C 27A80080 */     addiu $t0, $sp, 0x80
  /* 00F5A0 8000E9A0 27A90098 */     addiu $t1, $sp, 0x98
  /* 00F5A4 8000E9A4 E7B600A8 */      swc1 $f22, 0xa8($sp)
  /* 00F5A8 8000E9A8 E7B600AC */      swc1 $f22, 0xac($sp)
  /* 00F5AC 8000E9AC AFA90024 */        sw $t1, 0x24($sp)
  /* 00F5B0 8000E9B0 AFA80020 */        sw $t0, 0x20($sp)
  /* 00F5B4 8000E9B4 02402825 */        or $a1, $s2, $zero
  /* 00F5B8 8000E9B8 27A600B0 */     addiu $a2, $sp, 0xb0
  /* 00F5BC 8000E9BC 27A700A8 */     addiu $a3, $sp, 0xa8
  /* 00F5C0 8000E9C0 AFB50014 */        sw $s5, 0x14($sp)
  /* 00F5C4 8000E9C4 AFB00018 */        sw $s0, 0x18($sp)
  /* 00F5C8 8000E9C8 AFB1001C */        sw $s1, 0x1c($sp)
  /* 00F5CC 8000E9CC 0C003859 */       jal func_8000E164
  /* 00F5D0 8000E9D0 AFB90010 */        sw $t9, 0x10($sp)
  /* 00F5D4 8000E9D4 14400081 */      bnez $v0, .L8000EBDC
  /* 00F5D8 8000E9D8 02802025 */        or $a0, $s4, $zero
  /* 00F5DC 8000E9DC 8FAA00C4 */        lw $t2, 0xc4($sp)
  /* 00F5E0 8000E9E0 27AB008C */     addiu $t3, $sp, 0x8c
  /* 00F5E4 8000E9E4 27AC009C */     addiu $t4, $sp, 0x9c
  /* 00F5E8 8000E9E8 AFAC0024 */        sw $t4, 0x24($sp)
  /* 00F5EC 8000E9EC AFAB0020 */        sw $t3, 0x20($sp)
  /* 00F5F0 8000E9F0 02402825 */        or $a1, $s2, $zero
  /* 00F5F4 8000E9F4 27A600B4 */     addiu $a2, $sp, 0xb4
  /* 00F5F8 8000E9F8 27A700AC */     addiu $a3, $sp, 0xac
  /* 00F5FC 8000E9FC AFB50014 */        sw $s5, 0x14($sp)
  /* 00F600 8000EA00 AFB00018 */        sw $s0, 0x18($sp)
  /* 00F604 8000EA04 AFB1001C */        sw $s1, 0x1c($sp)
  /* 00F608 8000EA08 0C003859 */       jal func_8000E164
  /* 00F60C 8000EA0C AFAA0010 */        sw $t2, 0x10($sp)
  /* 00F610 8000EA10 C7A200B0 */      lwc1 $f2, 0xb0($sp)
  /* 00F614 8000EA14 C7B200B4 */      lwc1 $f18, 0xb4($sp)
  /* 00F618 8000EA18 C7A600A8 */      lwc1 $f6, 0xa8($sp)
  /* 00F61C 8000EA1C C7A800AC */      lwc1 $f8, 0xac($sp)
  /* 00F620 8000EA20 46121032 */    c.eq.s $f2, $f18
  /* 00F624 8000EA24 02402025 */        or $a0, $s2, $zero
  /* 00F628 8000EA28 45000005 */      bc1f .L8000EA40
  /* 00F62C 8000EA2C 00000000 */       nop 
  /* 00F630 8000EA30 46083032 */    c.eq.s $f6, $f8
  /* 00F634 8000EA34 00000000 */       nop 
  /* 00F638 8000EA38 45030069 */     bc1tl .L8000EBE0
  /* 00F63C 8000EA3C 26100001 */     addiu $s0, $s0, 1
  .L8000EA40:
  /* 00F640 8000EA40 0C00239E */       jal create_aobj_for_dobj
  /* 00F644 8000EA44 320500FF */      andi $a1, $s0, 0xff
  /* 00F648 8000EA48 12140005 */       beq $s0, $s4, .L8000EA60
  /* 00F64C 8000EA4C 00401825 */        or $v1, $v0, $zero
  /* 00F650 8000EA50 12130003 */       beq $s0, $s3, .L8000EA60
  /* 00F654 8000EA54 24010003 */     addiu $at, $zero, 3
  /* 00F658 8000EA58 1601002E */       bne $s0, $at, .L8000EB14
  /* 00F65C 8000EA5C 00000000 */       nop 
  .L8000EA60:
  /* 00F660 8000EA60 C7A200B0 */      lwc1 $f2, 0xb0($sp)
  /* 00F664 8000EA64 C7B200B4 */      lwc1 $f18, 0xb4($sp)
  /* 00F668 8000EA68 4612103C */    c.lt.s $f2, $f18
  /* 00F66C 8000EA6C 46189000 */     add.s $f0, $f18, $f24
  /* 00F670 8000EA70 45020005 */     bc1fl .L8000EA88
  /* 00F674 8000EA74 46121381 */     sub.s $f14, $f2, $f18
  /* 00F678 8000EA78 46121381 */     sub.s $f14, $f2, $f18
  /* 00F67C 8000EA7C 10000003 */         b .L8000EA8C
  /* 00F680 8000EA80 46007407 */     neg.s $f16, $f14
  /* 00F684 8000EA84 46121381 */     sub.s $f14, $f2, $f18
  .L8000EA88:
  /* 00F688 8000EA88 46007406 */     mov.s $f16, $f14
  .L8000EA8C:
  /* 00F68C 8000EA8C 4600103C */    c.lt.s $f2, $f0
  /* 00F690 8000EA90 00000000 */       nop 
  /* 00F694 8000EA94 45020005 */     bc1fl .L8000EAAC
  /* 00F698 8000EA98 46001301 */     sub.s $f12, $f2, $f0
  /* 00F69C 8000EA9C 46001301 */     sub.s $f12, $f2, $f0
  /* 00F6A0 8000EAA0 10000002 */         b .L8000EAAC
  /* 00F6A4 8000EAA4 46006307 */     neg.s $f12, $f12
  /* 00F6A8 8000EAA8 46001301 */     sub.s $f12, $f2, $f0
  .L8000EAAC:
  /* 00F6AC 8000EAAC 4610603C */    c.lt.s $f12, $f16
  /* 00F6B0 8000EAB0 00000000 */       nop 
  /* 00F6B4 8000EAB4 45020004 */     bc1fl .L8000EAC8
  /* 00F6B8 8000EAB8 4612103C */    c.lt.s $f2, $f18
  /* 00F6BC 8000EABC 46000486 */     mov.s $f18, $f0
  /* 00F6C0 8000EAC0 46001381 */     sub.s $f14, $f2, $f0
  /* 00F6C4 8000EAC4 4612103C */    c.lt.s $f2, $f18
  .L8000EAC8:
  /* 00F6C8 8000EAC8 46189001 */     sub.s $f0, $f18, $f24
  /* 00F6CC 8000EACC 45020004 */     bc1fl .L8000EAE0
  /* 00F6D0 8000EAD0 46007406 */     mov.s $f16, $f14
  /* 00F6D4 8000EAD4 10000002 */         b .L8000EAE0
  /* 00F6D8 8000EAD8 46007407 */     neg.s $f16, $f14
  /* 00F6DC 8000EADC 46007406 */     mov.s $f16, $f14
  .L8000EAE0:
  /* 00F6E0 8000EAE0 4600103C */    c.lt.s $f2, $f0
  /* 00F6E4 8000EAE4 E7B200B4 */      swc1 $f18, 0xb4($sp)
  /* 00F6E8 8000EAE8 45020005 */     bc1fl .L8000EB00
  /* 00F6EC 8000EAEC 46001301 */     sub.s $f12, $f2, $f0
  /* 00F6F0 8000EAF0 46001301 */     sub.s $f12, $f2, $f0
  /* 00F6F4 8000EAF4 10000002 */         b .L8000EB00
  /* 00F6F8 8000EAF8 46006307 */     neg.s $f12, $f12
  /* 00F6FC 8000EAFC 46001301 */     sub.s $f12, $f2, $f0
  .L8000EB00:
  /* 00F700 8000EB00 4610603C */    c.lt.s $f12, $f16
  /* 00F704 8000EB04 00000000 */       nop 
  /* 00F708 8000EB08 45000002 */      bc1f .L8000EB14
  /* 00F70C 8000EB0C 00000000 */       nop 
  /* 00F710 8000EB10 E7A000B4 */      swc1 $f0, 0xb4($sp)
  .L8000EB14:
  /* 00F714 8000EB14 52200008 */      beql $s1, $zero, .L8000EB38
  /* 00F718 8000EB18 4614D183 */     div.s $f6, $f26, $f20
  /* 00F71C 8000EB1C 52340018 */      beql $s1, $s4, .L8000EB80
  /* 00F720 8000EB20 4614D203 */     div.s $f8, $f26, $f20
  /* 00F724 8000EB24 52330016 */      beql $s1, $s3, .L8000EB80
  /* 00F728 8000EB28 4614D203 */     div.s $f8, $f26, $f20
  /* 00F72C 8000EB2C 1000002C */         b .L8000EBE0
  /* 00F730 8000EB30 26100001 */     addiu $s0, $s0, 1
  /* 00F734 8000EB34 4614D183 */     div.s $f6, $f26, $f20
  .L8000EB38: #0
  /* 00F738 8000EB38 C7AA00B4 */      lwc1 $f10, 0xb4($sp)
  /* 00F73C 8000EB3C 240D0002 */     addiu $t5, $zero, 2
  /* 00F740 8000EB40 E44A0010 */      swc1 $f10, 0x10($v0)
  /* 00F744 8000EB44 C7A400B0 */      lwc1 $f4, 0xb0($sp)
  /* 00F748 8000EB48 A04D0005 */        sb $t5, 5($v0)
  /* 00F74C 8000EB4C E4440014 */      swc1 $f4, 0x14($v0)
  /* 00F750 8000EB50 C4440014 */      lwc1 $f4, 0x14($v0)
  /* 00F754 8000EB54 E4460008 */      swc1 $f6, 8($v0)
  /* 00F758 8000EB58 C6480078 */      lwc1 $f8, 0x78($s2)
  /* 00F75C 8000EB5C C4460010 */      lwc1 $f6, 0x10($v0)
  /* 00F760 8000EB60 E456001C */      swc1 $f22, 0x1c($v0)
  /* 00F764 8000EB64 46004287 */     neg.s $f10, $f8
  /* 00F768 8000EB68 46062201 */     sub.s $f8, $f4, $f6
  /* 00F76C 8000EB6C E44A000C */      swc1 $f10, 0xc($v0)
  /* 00F770 8000EB70 46144283 */     div.s $f10, $f8, $f20
  /* 00F774 8000EB74 10000019 */         b .L8000EBDC
  /* 00F778 8000EB78 E44A0018 */      swc1 $f10, 0x18($v0)
  /* 00F77C 8000EB7C 4614D203 */     div.s $f8, $f26, $f20
  .L8000EB80: # 1, 2
  /* 00F780 8000EB80 C7A400B4 */      lwc1 $f4, 0xb4($sp)
  /* 00F784 8000EB84 240E0003 */     addiu $t6, $zero, 3
  /* 00F788 8000EB88 02002025 */        or $a0, $s0, $zero
  /* 00F78C 8000EB8C E4440010 */      swc1 $f4, 0x10($v0)
  /* 00F790 8000EB90 C7A600B0 */      lwc1 $f6, 0xb0($sp)
  /* 00F794 8000EB94 A04E0005 */        sb $t6, 5($v0)
  /* 00F798 8000EB98 27AF00A4 */     addiu $t7, $sp, 0xa4
  /* 00F79C 8000EB9C E4460014 */      swc1 $f6, 0x14($v0)
  /* 00F7A0 8000EBA0 E4480008 */      swc1 $f8, 8($v0)
  /* 00F7A4 8000EBA4 C64A0078 */      lwc1 $f10, 0x78($s2)
  /* 00F7A8 8000EBA8 46005107 */     neg.s $f4, $f10
  /* 00F7AC 8000EBAC E444000C */      swc1 $f4, 0xc($v0)
  /* 00F7B0 8000EBB0 C7A600AC */      lwc1 $f6, 0xac($sp)
  /* 00F7B4 8000EBB4 E4460018 */      swc1 $f6, 0x18($v0)
  /* 00F7B8 8000EBB8 C7A800A8 */      lwc1 $f8, 0xa8($sp)
  /* 00F7BC 8000EBBC 16330007 */       bne $s1, $s3, .L8000EBDC
  /* 00F7C0 8000EBC0 E448001C */      swc1 $f8, 0x1c($v0)
  /* 00F7C4 8000EBC4 8FA500E0 */        lw $a1, 0xe0($sp)
  /* 00F7C8 8000EBC8 8FA600E4 */        lw $a2, 0xe4($sp)
  /* 00F7CC 8000EBCC 8FA700E8 */        lw $a3, 0xe8($sp)
  /* 00F7D0 8000EBD0 AFAF0010 */        sw $t7, 0x10($sp)
  /* 00F7D4 8000EBD4 0C00390A */       jal func_8000E428
  /* 00F7D8 8000EBD8 AFA30014 */        sw $v1, 0x14($sp)
  .L8000EBDC:
  /* 00F7DC 8000EBDC 26100001 */     addiu $s0, $s0, 1
  .L8000EBE0: #default, break
  /* 00F7E0 8000EBE0 2401000B */     addiu $at, $zero, 0xb
  /* 00F7E4 8000EBE4 5601FF6A */      bnel $s0, $at, .L8000E990
  /* 00F7E8 8000EBE8 24010004 */     addiu $at, $zero, 4
  
  /* 00F7EC 8000EBEC 8FB800C4 */        lw $t8, 0xc4($sp)
  /* 00F7F0 8000EBF0 8E50006C */        lw $s0, 0x6c($s2)
  /* 00F7F4 8000EBF4 02402025 */        or $a0, $s2, $zero
  /* 00F7F8 8000EBF8 0C0023B9 */       jal func_80008EE4
  /* 00F7FC 8000EBFC AE58006C */        sw $t8, 0x6c($s2)
  /* 00F800 8000EC00 8FB900C0 */        lw $t9, 0xc0($sp)
  /* 00F804 8000EC04 02402025 */        or $a0, $s2, $zero
  /* 00F808 8000EC08 0C0023B9 */       jal func_80008EE4
  /* 00F80C 8000EC0C AE59006C */        sw $t9, 0x6c($s2)
  /* 00F810 8000EC10 C6420078 */      lwc1 $f2, 0x78($s2)
  /* 00F814 8000EC14 AE50006C */        sw $s0, 0x6c($s2)
  /* 00F818 8000EC18 AE400070 */        sw $zero, 0x70($s2)
  /* 00F81C 8000EC1C 46141280 */     add.s $f10, $f2, $f20
  /* 00F820 8000EC20 46001107 */     neg.s $f4, $f2
  /* 00F824 8000EC24 E64A0074 */      swc1 $f10, 0x74($s2)
  /* 00F828 8000EC28 E644007C */      swc1 $f4, 0x7c($s2)
  /* 00F82C 8000EC2C C7A000A4 */      lwc1 $f0, 0xa4($sp)
  /* 00F830 8000EC30 8FBF0064 */        lw $ra, 0x64($sp)
  .L8000EC34:
  /* 00F834 8000EC34 D7B40028 */      ldc1 $f20, 0x28($sp)
  /* 00F838 8000EC38 D7B60030 */      ldc1 $f22, 0x30($sp)
  /* 00F83C 8000EC3C D7B80038 */      ldc1 $f24, 0x38($sp)
  /* 00F840 8000EC40 D7BA0040 */      ldc1 $f26, 0x40($sp)
  /* 00F844 8000EC44 8FB0004C */        lw $s0, 0x4c($sp)
  /* 00F848 8000EC48 8FB10050 */        lw $s1, 0x50($sp)
  /* 00F84C 8000EC4C 8FB20054 */        lw $s2, 0x54($sp)
  /* 00F850 8000EC50 8FB30058 */        lw $s3, 0x58($sp)
  /* 00F854 8000EC54 8FB4005C */        lw $s4, 0x5c($sp)
  /* 00F858 8000EC58 8FB50060 */        lw $s5, 0x60($sp)
  /* 00F85C 8000EC5C 03E00008 */        jr $ra
  /* 00F860 8000EC60 27BD00C8 */     addiu $sp, $sp, 0xc8

