.section .late_rodata

glabel D_8003DEDC
  /* 3DADC 03EADC 8003DEDC */
  .word 0xff7fffff # .float -3.4028235e38

glabel D_8003DEE0
  /* 3DAE0 03EAE0 8003DEE0 */
  .word 0xfeaaaaaa # .float -1.1342745e38

glabel jtbl_8003DEE4
  /* 3DAE4 03EAE4 8003DEE4 */  .word L8000DBEC
  /* 3DAE8 03EAE8 8003DEE8 */  .word L8000DC74
  /* 3DAEC 03EAEC 8003DEEC */  .word L8000DC7C
  /* 3DAF0 03EAF0 8003DEF0 */  .word L8000DC84
  /* 3DAF4 03EAF4 8003DEF4 */  .word L8000DC8C
  /* 3DAF8 03EAF8 8003DEF8 */  .word L8000DC94
  /* 3DAFC 03EAFC 8003DEFC */  .word L8000DD1C
  /* 3DB00 03EB00 8003DF00 */  .word L8000DD24
  /* 3DB04 03EB04 8003DF04 */  .word L8000DD2C
  /* 3DB08 03EB08 8003DF08 */  .word L8000DD34

glabel jtbl_8003DF0C
  /* 3DB0C 03EB0C 8003DF0C */  .word L8000DEAC
  /* 3DB10 03EB10 8003DF10 */  .word L8000DEB8
  /* 3DB14 03EB14 8003DF14 */  .word L8000DEC4
  /* 3DB18 03EB18 8003DF18 */  .word L8000DED0
  /* 3DB1C 03EB1C 8003DF1C */  .word L8000DEDC

glabel D_8003DF20
  /* 3DB20 03EB20 8003DF20 */
  .word 0xfeaaaaaa # .float -1.1342745e38

glabel D_8003DF24
  /* 3DB24 03EB24 8003DF24 */
  .word 0xff7fffff # .float -3.4028235e38

.section .text
glabel func_8000DA40
  /* 00E640 8000DA40 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 00E644 8000DA44 F7BA0020 */      sdc1 $f26, 0x20($sp)
  /* 00E648 8000DA48 F7B80018 */      sdc1 $f24, 0x18($sp)
  /* 00E64C 8000DA4C F7B60010 */      sdc1 $f22, 0x10($sp)
  /* 00E650 8000DA50 F7B40008 */      sdc1 $f20, 8($sp)
  /* 00E654 8000DA54 3C018004 */       lui $at, %hi(D_8003DEDC)
  /* 00E658 8000DA58 C424DEDC */      lwc1 $f4, %lo(D_8003DEDC)($at)
  /* 00E65C 8000DA5C C4800098 */      lwc1 $f0, 0x98($a0)
  /* 00E660 8000DA60 46002032 */    c.eq.s $f4, $f0
  /* 00E664 8000DA64 00000000 */       nop 
  /* 00E668 8000DA68 4503012D */     bc1tl .L8000DF20
  /* 00E66C 8000DA6C D7B40008 */      ldc1 $f20, 8($sp)
  /* 00E670 8000DA70 8C820090 */        lw $v0, 0x90($a0)
  /* 00E674 8000DA74 C7BA0064 */      lwc1 $f26, 0x64($sp)
  /* 00E678 8000DA78 240B0100 */     addiu $t3, $zero, 0x100
  /* 00E67C 8000DA7C 1040011E */      beqz $v0, .L8000DEF8
  /* 00E680 8000DA80 27AA0044 */     addiu $t2, $sp, 0x44
  /* 00E684 8000DA84 24090003 */     addiu $t1, $zero, 3
  /* 00E688 8000DA88 24080002 */     addiu $t0, $zero, 2
  /* 00E68C 8000DA8C 24070001 */     addiu $a3, $zero, 1
  /* 00E690 8000DA90 90430005 */       lbu $v1, 5($v0)
  .L8000DA94:
  /* 00E694 8000DA94 3C018004 */       lui $at, %hi(D_8003DEE0)
  /* 00E698 8000DA98 50600113 */      beql $v1, $zero, .L8000DEE8
  /* 00E69C 8000DA9C 8C420000 */        lw $v0, ($v0)
  /* 00E6A0 8000DAA0 C426DEE0 */      lwc1 $f6, %lo(D_8003DEE0)($at)
  /* 00E6A4 8000DAA4 C4880098 */      lwc1 $f8, 0x98($a0)
  /* 00E6A8 8000DAA8 46083032 */    c.eq.s $f6, $f8
  /* 00E6AC 8000DAAC 00000000 */       nop 
  /* 00E6B0 8000DAB0 45030007 */     bc1tl .L8000DAD0
  /* 00E6B4 8000DAB4 90450004 */       lbu $a1, 4($v0)
  /* 00E6B8 8000DAB8 C44A000C */      lwc1 $f10, 0xc($v0)
  /* 00E6BC 8000DABC C484009C */      lwc1 $f4, 0x9c($a0)
  /* 00E6C0 8000DAC0 90430005 */       lbu $v1, 5($v0)
  /* 00E6C4 8000DAC4 46045180 */     add.s $f6, $f10, $f4
  /* 00E6C8 8000DAC8 E446000C */      swc1 $f6, 0xc($v0)
  /* 00E6CC 8000DACC 90450004 */       lbu $a1, 4($v0)
  .L8000DAD0:
  /* 00E6D0 8000DAD0 28A10024 */      slti $at, $a1, 0x24
  /* 00E6D4 8000DAD4 10200099 */      beqz $at, .L8000DD3C
  /* 00E6D8 8000DAD8 24AEFFF3 */     addiu $t6, $a1, -0xd
  /* 00E6DC 8000DADC 50670033 */      beql $v1, $a3, .L8000DBAC
  /* 00E6E0 8000DAE0 C448000C */      lwc1 $f8, 0xc($v0)
  /* 00E6E4 8000DAE4 50680006 */      beql $v1, $t0, .L8000DB00
  /* 00E6E8 8000DAE8 C448000C */      lwc1 $f8, 0xc($v0)
  /* 00E6EC 8000DAEC 5069000A */      beql $v1, $t1, .L8000DB18
  /* 00E6F0 8000DAF0 C4420008 */      lwc1 $f2, 8($v0)
  /* 00E6F4 8000DAF4 10000036 */         b .L8000DBD0
  /* 00E6F8 8000DAF8 2DC1000A */     sltiu $at, $t6, 0xa
  /* 00E6FC 8000DAFC C448000C */      lwc1 $f8, 0xc($v0)
  .L8000DB00: #2
  /* 00E700 8000DB00 C44A0018 */      lwc1 $f10, 0x18($v0)
  /* 00E704 8000DB04 C4460010 */      lwc1 $f6, 0x10($v0)
  /* 00E708 8000DB08 460A4102 */     mul.s $f4, $f8, $f10
  /* 00E70C 8000DB0C 1000002F */         b .L8000DBCC
  /* 00E710 8000DB10 46043680 */     add.s $f26, $f6, $f4
  /* 00E714 8000DB14 C4420008 */      lwc1 $f2, 8($v0)
  .L8000DB18: # 3
  /* 00E718 8000DB18 C440000C */      lwc1 $f0, 0xc($v0)
  /* 00E71C 8000DB1C 3C014040 */       lui $at, (0x40400000 >> 16) # 3.0
  /* 00E720 8000DB20 46021402 */     mul.s $f16, $f2, $f2
  /* 00E724 8000DB24 44813000 */      mtc1 $at, $f6 # 3.0 to cop1
  /* 00E728 8000DB28 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 00E72C 8000DB2C 46000302 */     mul.s $f12, $f0, $f0
  /* 00E730 8000DB30 00000000 */       nop 
  /* 00E734 8000DB34 460C1482 */     mul.s $f18, $f2, $f12
  /* 00E738 8000DB38 00000000 */       nop 
  /* 00E73C 8000DB3C 460C0202 */     mul.s $f8, $f0, $f12
  /* 00E740 8000DB40 00000000 */       nop 
  /* 00E744 8000DB44 46104382 */     mul.s $f14, $f8, $f16
  /* 00E748 8000DB48 460E7280 */     add.s $f10, $f14, $f14
  /* 00E74C 8000DB4C 46127601 */     sub.s $f24, $f14, $f18
  /* 00E750 8000DB50 46025502 */     mul.s $f20, $f10, $f2
  /* 00E754 8000DB54 44815000 */      mtc1 $at, $f10 # 1.0 to cop1
  /* 00E758 8000DB58 460C3102 */     mul.s $f4, $f6, $f12
  /* 00E75C 8000DB5C 00000000 */       nop 
  /* 00E760 8000DB60 46102582 */     mul.s $f22, $f4, $f16
  /* 00E764 8000DB64 C4440010 */      lwc1 $f4, 0x10($v0)
  /* 00E768 8000DB68 4616A201 */     sub.s $f8, $f20, $f22
  /* 00E76C 8000DB6C 460A4180 */     add.s $f6, $f8, $f10
  /* 00E770 8000DB70 C44A0014 */      lwc1 $f10, 0x14($v0)
  /* 00E774 8000DB74 46062202 */     mul.s $f8, $f4, $f6
  /* 00E778 8000DB78 4614B101 */     sub.s $f4, $f22, $f20
  /* 00E77C 8000DB7C 46045182 */     mul.s $f6, $f10, $f4
  /* 00E780 8000DB80 C4440018 */      lwc1 $f4, 0x18($v0)
  /* 00E784 8000DB84 46064280 */     add.s $f10, $f8, $f6
  /* 00E788 8000DB88 4612C201 */     sub.s $f8, $f24, $f18
  /* 00E78C 8000DB8C 46004180 */     add.s $f6, $f8, $f0
  /* 00E790 8000DB90 46062202 */     mul.s $f8, $f4, $f6
  /* 00E794 8000DB94 C446001C */      lwc1 $f6, 0x1c($v0)
  /* 00E798 8000DB98 46085100 */     add.s $f4, $f10, $f8
  /* 00E79C 8000DB9C 46183282 */     mul.s $f10, $f6, $f24
  /* 00E7A0 8000DBA0 1000000A */         b .L8000DBCC
  /* 00E7A4 8000DBA4 460A2680 */     add.s $f26, $f4, $f10
  /* 00E7A8 8000DBA8 C448000C */      lwc1 $f8, 0xc($v0)
  .L8000DBAC: #1
  /* 00E7AC 8000DBAC C4460008 */      lwc1 $f6, 8($v0)
  /* 00E7B0 8000DBB0 4608303E */    c.le.s $f6, $f8
  /* 00E7B4 8000DBB4 00000000 */       nop 
  /* 00E7B8 8000DBB8 45020004 */     bc1fl .L8000DBCC
  /* 00E7BC 8000DBBC C45A0010 */      lwc1 $f26, 0x10($v0)
  /* 00E7C0 8000DBC0 10000002 */         b .L8000DBCC
  /* 00E7C4 8000DBC4 C45A0014 */      lwc1 $f26, 0x14($v0)
  /* 00E7C8 8000DBC8 C45A0010 */      lwc1 $f26, 0x10($v0)
  .L8000DBCC:
  /* 00E7CC 8000DBCC 2DC1000A */     sltiu $at, $t6, 0xa
  .L8000DBD0: # default
  /* 00E7D0 8000DBD0 102000C4 */      beqz $at, .L8000DEE4
  /* 00E7D4 8000DBD4 000E7080 */       sll $t6, $t6, 2
  /* 00E7D8 8000DBD8 3C018004 */       lui $at, %hi(jtbl_8003DEE4)
  /* 00E7DC 8000DBDC 002E0821 */      addu $at, $at, $t6
  /* 00E7E0 8000DBE0 8C2EDEE4 */        lw $t6, %lo(jtbl_8003DEE4)($at)
  /* 00E7E4 8000DBE4 01C00008 */        jr $t6
  /* 00E7E8 8000DBE8 00000000 */       nop 
  glabel L8000DBEC # 13
  /* 00E7EC 8000DBEC 444FF800 */      cfc1 $t7, $31
  /* 00E7F0 8000DBF0 24180001 */     addiu $t8, $zero, 1
  /* 00E7F4 8000DBF4 44D8F800 */      ctc1 $t8, $31
  /* 00E7F8 8000DBF8 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 00E7FC 8000DBFC 4600D124 */   cvt.w.s $f4, $f26
  /* 00E800 8000DC00 4458F800 */      cfc1 $t8, $31
  /* 00E804 8000DC04 00000000 */       nop 
  /* 00E808 8000DC08 33180078 */      andi $t8, $t8, 0x78
  /* 00E80C 8000DC0C 53000013 */      beql $t8, $zero, .L8000DC5C
  /* 00E810 8000DC10 44182000 */      mfc1 $t8, $f4
  /* 00E814 8000DC14 44812000 */      mtc1 $at, $f4 # 2147483600.0 to cop1
  /* 00E818 8000DC18 24180001 */     addiu $t8, $zero, 1
  /* 00E81C 8000DC1C 4604D101 */     sub.s $f4, $f26, $f4
  /* 00E820 8000DC20 44D8F800 */      ctc1 $t8, $31
  /* 00E824 8000DC24 00000000 */       nop 
  /* 00E828 8000DC28 46002124 */   cvt.w.s $f4, $f4
  /* 00E82C 8000DC2C 4458F800 */      cfc1 $t8, $31
  /* 00E830 8000DC30 00000000 */       nop 
  /* 00E834 8000DC34 33180078 */      andi $t8, $t8, 0x78
  /* 00E838 8000DC38 17000005 */      bnez $t8, .L8000DC50
  /* 00E83C 8000DC3C 00000000 */       nop 
  /* 00E840 8000DC40 44182000 */      mfc1 $t8, $f4
  /* 00E844 8000DC44 3C018000 */       lui $at, 0x8000
  /* 00E848 8000DC48 10000007 */         b .L8000DC68
  /* 00E84C 8000DC4C 0301C025 */        or $t8, $t8, $at
  .L8000DC50:
  /* 00E850 8000DC50 10000005 */         b .L8000DC68
  /* 00E854 8000DC54 2418FFFF */     addiu $t8, $zero, -1
  /* 00E858 8000DC58 44182000 */      mfc1 $t8, $f4
  .L8000DC5C:
  /* 00E85C 8000DC5C 00000000 */       nop 
  /* 00E860 8000DC60 0700FFFB */      bltz $t8, .L8000DC50
  /* 00E864 8000DC64 00000000 */       nop 
  .L8000DC68:
  /* 00E868 8000DC68 44CFF800 */      ctc1 $t7, $31
  /* 00E86C 8000DC6C 1000009D */         b .L8000DEE4
  /* 00E870 8000DC70 A4980080 */        sh $t8, 0x80($a0)
  glabel L8000DC74 #14
  /* 00E874 8000DC74 1000009B */         b .L8000DEE4
  /* 00E878 8000DC78 E49A001C */      swc1 $f26, 0x1c($a0)
  glabel L8000DC7C #15
  /* 00E87C 8000DC7C 10000099 */         b .L8000DEE4
  /* 00E880 8000DC80 E49A0020 */      swc1 $f26, 0x20($a0)
  glabel L8000DC84 #16
  /* 00E884 8000DC84 10000097 */         b .L8000DEE4
  /* 00E888 8000DC88 E49A0024 */      swc1 $f26, 0x24($a0)
  glabel L8000DC8C #17
  /* 00E88C 8000DC8C 10000095 */         b .L8000DEE4
  /* 00E890 8000DC90 E49A0028 */      swc1 $f26, 0x28($a0)
  glabel L8000DC94 #18
  /* 00E894 8000DC94 4459F800 */      cfc1 $t9, $31
  /* 00E898 8000DC98 240C0001 */     addiu $t4, $zero, 1
  /* 00E89C 8000DC9C 44CCF800 */      ctc1 $t4, $31
  /* 00E8A0 8000DCA0 3C014F00 */       lui $at, (0x4F000000 >> 16) # 2147483600.0
  /* 00E8A4 8000DCA4 4600D2A4 */   cvt.w.s $f10, $f26
  /* 00E8A8 8000DCA8 444CF800 */      cfc1 $t4, $31
  /* 00E8AC 8000DCAC 00000000 */       nop 
  /* 00E8B0 8000DCB0 318C0078 */      andi $t4, $t4, 0x78
  /* 00E8B4 8000DCB4 51800013 */      beql $t4, $zero, .L8000DD04
  /* 00E8B8 8000DCB8 440C5000 */      mfc1 $t4, $f10
  /* 00E8BC 8000DCBC 44815000 */      mtc1 $at, $f10 # 2147483600.0 to cop1
  /* 00E8C0 8000DCC0 240C0001 */     addiu $t4, $zero, 1
  /* 00E8C4 8000DCC4 460AD281 */     sub.s $f10, $f26, $f10
  /* 00E8C8 8000DCC8 44CCF800 */      ctc1 $t4, $31
  /* 00E8CC 8000DCCC 00000000 */       nop 
  /* 00E8D0 8000DCD0 460052A4 */   cvt.w.s $f10, $f10
  /* 00E8D4 8000DCD4 444CF800 */      cfc1 $t4, $31
  /* 00E8D8 8000DCD8 00000000 */       nop 
  /* 00E8DC 8000DCDC 318C0078 */      andi $t4, $t4, 0x78
  /* 00E8E0 8000DCE0 15800005 */      bnez $t4, .L8000DCF8
  /* 00E8E4 8000DCE4 00000000 */       nop 
  /* 00E8E8 8000DCE8 440C5000 */      mfc1 $t4, $f10
  /* 00E8EC 8000DCEC 3C018000 */       lui $at, 0x8000
  /* 00E8F0 8000DCF0 10000007 */         b .L8000DD10
  /* 00E8F4 8000DCF4 01816025 */        or $t4, $t4, $at
  .L8000DCF8:
  /* 00E8F8 8000DCF8 10000005 */         b .L8000DD10
  /* 00E8FC 8000DCFC 240CFFFF */     addiu $t4, $zero, -1
  /* 00E900 8000DD00 440C5000 */      mfc1 $t4, $f10
  .L8000DD04:
  /* 00E904 8000DD04 00000000 */       nop 
  /* 00E908 8000DD08 0580FFFB */      bltz $t4, .L8000DCF8
  /* 00E90C 8000DD0C 00000000 */       nop 
  .L8000DD10:
  /* 00E910 8000DD10 44D9F800 */      ctc1 $t9, $31
  /* 00E914 8000DD14 10000073 */         b .L8000DEE4
  /* 00E918 8000DD18 A48C0082 */        sh $t4, 0x82($a0)
  glabel L8000DD1C #19
  /* 00E91C 8000DD1C 10000071 */         b .L8000DEE4
  /* 00E920 8000DD20 E49A0044 */      swc1 $f26, 0x44($a0)
  glabel L8000DD24 #20
  /* 00E924 8000DD24 1000006F */         b .L8000DEE4
  /* 00E928 8000DD28 E49A0048 */      swc1 $f26, 0x48($a0)
  glabel L8000DD2C #21
  /* 00E92C 8000DD2C 1000006D */         b .L8000DEE4
  /* 00E930 8000DD30 E49A0084 */      swc1 $f26, 0x84($a0)
  glabel L8000DD34 #22
  /* 00E934 8000DD34 1000006B */         b .L8000DEE4
  /* 00E938 8000DD38 E49A0088 */      swc1 $f26, 0x88($a0)
  .L8000DD3C:
  /* 00E93C 8000DD3C 50670047 */      beql $v1, $a3, .L8000DE5C
  /* 00E940 8000DD40 C444000C */      lwc1 $f4, 0xc($v0)
  /* 00E944 8000DD44 54680051 */      bnel $v1, $t0, .L8000DE8C
  /* 00E948 8000DD48 24ADFFDB */     addiu $t5, $a1, -0x25
  /* 00E94C 8000DD4C C448000C */      lwc1 $f8, 0xc($v0)
  /* 00E950 8000DD50 C4460008 */      lwc1 $f6, 8($v0)
  /* 00E954 8000DD54 3C014380 */       lui $at, (0x43800000 >> 16) # 256.0
  /* 00E958 8000DD58 44815000 */      mtc1 $at, $f10 # 256.0 to cop1
  /* 00E95C 8000DD5C 46064102 */     mul.s $f4, $f8, $f6
  /* 00E960 8000DD60 00000000 */       nop 
  /* 00E964 8000DD64 460A2202 */     mul.s $f8, $f4, $f10
  /* 00E968 8000DD68 4600418D */ trunc.w.s $f6, $f8
  /* 00E96C 8000DD6C 44033000 */      mfc1 $v1, $f6
  /* 00E970 8000DD70 00000000 */       nop 
  /* 00E974 8000DD74 04610002 */      bgez $v1, .L8000DD80
  /* 00E978 8000DD78 00000000 */       nop 
  /* 00E97C 8000DD7C 00001825 */        or $v1, $zero, $zero
  .L8000DD80:
  /* 00E980 8000DD80 28610101 */      slti $at, $v1, 0x101
  /* 00E984 8000DD84 54200003 */      bnel $at, $zero, .L8000DD94
  /* 00E988 8000DD88 AFA00034 */        sw $zero, 0x34($sp)
  /* 00E98C 8000DD8C 01601825 */        or $v1, $t3, $zero
  /* 00E990 8000DD90 AFA00034 */        sw $zero, 0x34($sp)
  .L8000DD94:
  /* 00E994 8000DD94 AFA00038 */        sw $zero, 0x38($sp)
  /* 00E998 8000DD98 904E0010 */       lbu $t6, 0x10($v0)
  /* 00E99C 8000DD9C 01633023 */      subu $a2, $t3, $v1
  /* 00E9A0 8000DDA0 A3AE0039 */        sb $t6, 0x39($sp)
  /* 00E9A4 8000DDA4 904F0011 */       lbu $t7, 0x11($v0)
  /* 00E9A8 8000DDA8 A3AF003B */        sb $t7, 0x3b($sp)
  /* 00E9AC 8000DDAC 8FAC0038 */        lw $t4, 0x38($sp)
  /* 00E9B0 8000DDB0 90580014 */       lbu $t8, 0x14($v0)
  /* 00E9B4 8000DDB4 00CC0019 */     multu $a2, $t4
  /* 00E9B8 8000DDB8 A3B80035 */        sb $t8, 0x35($sp)
  /* 00E9BC 8000DDBC 90590015 */       lbu $t9, 0x15($v0)
  /* 00E9C0 8000DDC0 A3B90037 */        sb $t9, 0x37($sp)
  /* 00E9C4 8000DDC4 8FAE0034 */        lw $t6, 0x34($sp)
  /* 00E9C8 8000DDC8 00006812 */      mflo $t5
  /* 00E9CC 8000DDCC 00000000 */       nop 
  /* 00E9D0 8000DDD0 00000000 */       nop 
  /* 00E9D4 8000DDD4 01C30019 */     multu $t6, $v1
  /* 00E9D8 8000DDD8 00007812 */      mflo $t7
  /* 00E9DC 8000DDDC 01AFC021 */      addu $t8, $t5, $t7
  /* 00E9E0 8000DDE0 AFB80038 */        sw $t8, 0x38($sp)
  /* 00E9E4 8000DDE4 93B90038 */       lbu $t9, 0x38($sp)
  /* 00E9E8 8000DDE8 93AC003A */       lbu $t4, 0x3a($sp)
  /* 00E9EC 8000DDEC AFA00038 */        sw $zero, 0x38($sp)
  /* 00E9F0 8000DDF0 A3B90044 */        sb $t9, 0x44($sp)
  /* 00E9F4 8000DDF4 A3AC0045 */        sb $t4, 0x45($sp)
  /* 00E9F8 8000DDF8 904E0012 */       lbu $t6, 0x12($v0)
  /* 00E9FC 8000DDFC A3AE0039 */        sb $t6, 0x39($sp)
  /* 00EA00 8000DE00 904D0013 */       lbu $t5, 0x13($v0)
  /* 00EA04 8000DE04 A3AD003B */        sb $t5, 0x3b($sp)
  /* 00EA08 8000DE08 8FB90038 */        lw $t9, 0x38($sp)
  /* 00EA0C 8000DE0C 904F0016 */       lbu $t7, 0x16($v0)
  /* 00EA10 8000DE10 00D90019 */     multu $a2, $t9
  /* 00EA14 8000DE14 A3AF0035 */        sb $t7, 0x35($sp)
  /* 00EA18 8000DE18 90580017 */       lbu $t8, 0x17($v0)
  /* 00EA1C 8000DE1C A3B80037 */        sb $t8, 0x37($sp)
  /* 00EA20 8000DE20 8FAE0034 */        lw $t6, 0x34($sp)
  /* 00EA24 8000DE24 00006012 */      mflo $t4
  /* 00EA28 8000DE28 00000000 */       nop 
  /* 00EA2C 8000DE2C 00000000 */       nop 
# Maybe start of new file
  /* 00EA30 8000DE30 01C30019 */     multu $t6, $v1
  /* 00EA34 8000DE34 00006812 */      mflo $t5
  /* 00EA38 8000DE38 018D7821 */      addu $t7, $t4, $t5
  /* 00EA3C 8000DE3C AFAF0038 */        sw $t7, 0x38($sp)
  /* 00EA40 8000DE40 93B80038 */       lbu $t8, 0x38($sp)
  /* 00EA44 8000DE44 93B9003A */       lbu $t9, 0x3a($sp)
  /* 00EA48 8000DE48 A3B80046 */        sb $t8, 0x46($sp)
  /* 00EA4C 8000DE4C A3B90047 */        sb $t9, 0x47($sp)
  /* 00EA50 8000DE50 1000000D */         b .L8000DE88
  /* 00EA54 8000DE54 90450004 */       lbu $a1, 4($v0)
  /* 00EA58 8000DE58 C444000C */      lwc1 $f4, 0xc($v0)
  .L8000DE5C: #1
  /* 00EA5C 8000DE5C C44A0008 */      lwc1 $f10, 8($v0)
  /* 00EA60 8000DE60 24460010 */     addiu $a2, $v0, 0x10
  /* 00EA64 8000DE64 4604503E */    c.le.s $f10, $f4
  /* 00EA68 8000DE68 00000000 */       nop 
  /* 00EA6C 8000DE6C 45000003 */      bc1f .L8000DE7C
  /* 00EA70 8000DE70 00000000 */       nop 
  /* 00EA74 8000DE74 10000001 */         b .L8000DE7C
  /* 00EA78 8000DE78 24460014 */     addiu $a2, $v0, 0x14
  .L8000DE7C:
  /* 00EA7C 8000DE7C 8CCC0000 */        lw $t4, ($a2)
  /* 00EA80 8000DE80 AD4C0000 */        sw $t4, ($t2)
  /* 00EA84 8000DE84 90450004 */       lbu $a1, 4($v0)
  .L8000DE88:
  /* 00EA88 8000DE88 24ADFFDB */     addiu $t5, $a1, -0x25
  .L8000DE8C: #2
  /* 00EA8C 8000DE8C 2DA10005 */     sltiu $at, $t5, 5
  /* 00EA90 8000DE90 10200014 */      beqz $at, .L8000DEE4
  /* 00EA94 8000DE94 000D6880 */       sll $t5, $t5, 2
  /* 00EA98 8000DE98 3C018004 */       lui $at, %hi(jtbl_8003DF0C)
  /* 00EA9C 8000DE9C 002D0821 */      addu $at, $at, $t5
  /* 00EAA0 8000DEA0 8C2DDF0C */        lw $t5, %lo(jtbl_8003DF0C)($at)
  /* 00EAA4 8000DEA4 01A00008 */        jr $t5
  /* 00EAA8 8000DEA8 00000000 */       nop 
  glabel L8000DEAC
  /* 00EAAC 8000DEAC 8D580000 */        lw $t8, ($t2)
  /* 00EAB0 8000DEB0 1000000C */         b .L8000DEE4
  /* 00EAB4 8000DEB4 AC980058 */        sw $t8, 0x58($a0)
  glabel L8000DEB8
  /* 00EAB8 8000DEB8 8D4E0000 */        lw $t6, ($t2)
  /* 00EABC 8000DEBC 10000009 */         b .L8000DEE4
  /* 00EAC0 8000DEC0 AC8E0060 */        sw $t6, 0x60($a0)
  glabel L8000DEC4
  /* 00EAC4 8000DEC4 8D4D0000 */        lw $t5, ($t2)
  /* 00EAC8 8000DEC8 10000006 */         b .L8000DEE4
  /* 00EACC 8000DECC AC8D0064 */        sw $t5, 0x64($a0)
  glabel L8000DED0
  /* 00EAD0 8000DED0 8D580000 */        lw $t8, ($t2)
  /* 00EAD4 8000DED4 10000003 */         b .L8000DEE4
  /* 00EAD8 8000DED8 AC980068 */        sw $t8, 0x68($a0)
  glabel L8000DEDC
  /* 00EADC 8000DEDC 8D4E0000 */        lw $t6, ($t2)
  /* 00EAE0 8000DEE0 AC8E006C */        sw $t6, 0x6c($a0)
  .L8000DEE4:
  /* 00EAE4 8000DEE4 8C420000 */        lw $v0, ($v0)
  .L8000DEE8:
  /* 00EAE8 8000DEE8 5440FEEA */      bnel $v0, $zero, .L8000DA94
  /* 00EAEC 8000DEEC 90430005 */       lbu $v1, 5($v0)
  /* 00EAF0 8000DEF0 E7BA0064 */      swc1 $f26, 0x64($sp)
  /* 00EAF4 8000DEF4 C4800098 */      lwc1 $f0, 0x98($a0)
  .L8000DEF8:
  /* 00EAF8 8000DEF8 3C018004 */       lui $at, %hi(D_8003DF20)
  /* 00EAFC 8000DEFC C428DF20 */      lwc1 $f8, %lo(D_8003DF20)($at)
  /* 00EB00 8000DF00 3C018004 */       lui $at, %hi(D_8003DF24)
  /* 00EB04 8000DF04 46004032 */    c.eq.s $f8, $f0
  /* 00EB08 8000DF08 00000000 */       nop 
  /* 00EB0C 8000DF0C 45020004 */     bc1fl .L8000DF20
  /* 00EB10 8000DF10 D7B40008 */      ldc1 $f20, 8($sp)
  /* 00EB14 8000DF14 C426DF24 */      lwc1 $f6, %lo(D_8003DF24)($at)
  /* 00EB18 8000DF18 E4860098 */      swc1 $f6, 0x98($a0)
  /* 00EB1C 8000DF1C D7B40008 */      ldc1 $f20, 8($sp)
  .L8000DF20:
  /* 00EB20 8000DF20 D7B60010 */      ldc1 $f22, 0x10($sp)
  /* 00EB24 8000DF24 D7B80018 */      ldc1 $f24, 0x18($sp)
  /* 00EB28 8000DF28 D7BA0020 */      ldc1 $f26, 0x20($sp)
  /* 00EB2C 8000DF2C 03E00008 */        jr $ra
  /* 00EB30 8000DF30 27BD0068 */     addiu $sp, $sp, 0x68

