.section .text
glabel func_ovl0_800C8DB4
  /* 044794 800C8DB4 27BDFF38 */     addiu $sp, $sp, -0xc8
  /* 044798 800C8DB8 AFB00020 */        sw $s0, 0x20($sp)
  /* 04479C 800C8DBC 8FB000D8 */        lw $s0, 0xd8($sp)
  /* 0447A0 800C8DC0 AFBE0040 */        sw $fp, 0x40($sp)
  /* 0447A4 800C8DC4 AFB7003C */        sw $s7, 0x3c($sp)
  /* 0447A8 800C8DC8 00067100 */       sll $t6, $a2, 4
  /* 0447AC 800C8DCC AFBF0044 */        sw $ra, 0x44($sp)
  /* 0447B0 800C8DD0 AFB60038 */        sw $s6, 0x38($sp)
  /* 0447B4 800C8DD4 AFB50034 */        sw $s5, 0x34($sp)
  /* 0447B8 800C8DD8 AFB40030 */        sw $s4, 0x30($sp)
  /* 0447BC 800C8DDC AFB3002C */        sw $s3, 0x2c($sp)
  /* 0447C0 800C8DE0 AFB20028 */        sw $s2, 0x28($sp)
  /* 0447C4 800C8DE4 AFB10024 */        sw $s1, 0x24($sp)
  /* 0447C8 800C8DE8 AFA400C8 */        sw $a0, 0xc8($sp)
  /* 0447CC 800C8DEC AFAE0054 */        sw $t6, 0x54($sp)
  /* 0447D0 800C8DF0 00AEC021 */      addu $t8, $a1, $t6
  /* 0447D4 800C8DF4 00E0B825 */        or $s7, $a3, $zero
  /* 0447D8 800C8DF8 00A0F025 */        or $fp, $a1, $zero
  /* 0447DC 800C8DFC 8F14FFF0 */        lw $s4, -0x10($t8)
  /* 0447E0 800C8E00 27A2006C */     addiu $v0, $sp, 0x6c
  /* 0447E4 800C8E04 27A300B4 */     addiu $v1, $sp, 0xb4
  /* 0447E8 800C8E08 8E160004 */        lw $s6, 4($s0)
  /* 0447EC 800C8E0C 8E150000 */        lw $s5, ($s0)
  .L800C8E10:
  /* 0447F0 800C8E10 24420004 */     addiu $v0, $v0, 4
  /* 0447F4 800C8E14 0043082B */      sltu $at, $v0, $v1
  /* 0447F8 800C8E18 1420FFFD */      bnez $at, .L800C8E10
  /* 0447FC 800C8E1C AC40FFFC */        sw $zero, -4($v0)
  /* 044800 800C8E20 16A00003 */      bnez $s5, .L800C8E30
  /* 044804 800C8E24 00009825 */        or $s3, $zero, $zero
  /* 044808 800C8E28 52C0007E */      beql $s6, $zero, .L800C9024
  /* 04480C 800C8E2C 8FBF0044 */        lw $ra, 0x44($sp)
  .L800C8E30:
  /* 044810 800C8E30 8E840000 */        lw $a0, ($s4)
  /* 044814 800C8E34 24010012 */     addiu $at, $zero, 0x12
  /* 044818 800C8E38 10810079 */       beq $a0, $at, .L800C9020
  /* 04481C 800C8E3C 2A610020 */      slti $at, $s3, 0x20
  .L800C8E40:
  /* 044820 800C8E40 10200003 */      beqz $at, .L800C8E50
  /* 044824 800C8E44 02C01025 */        or $v0, $s6, $zero
  /* 044828 800C8E48 10000001 */         b .L800C8E50
  /* 04482C 800C8E4C 02A01025 */        or $v0, $s5, $zero
  .L800C8E50:
  /* 044830 800C8E50 0002C800 */       sll $t9, $v0, 0
  /* 044834 800C8E54 07210063 */      bgez $t9, .L800C8FE4
  /* 044838 800C8E58 30860FFF */      andi $a2, $a0, 0xfff
  /* 04483C 800C8E5C 00131880 */       sll $v1, $s3, 2
  /* 044840 800C8E60 8FA80054 */        lw $t0, 0x54($sp)
  /* 044844 800C8E64 00731823 */      subu $v1, $v1, $s3
  /* 044848 800C8E68 00031880 */       sll $v1, $v1, 2
  /* 04484C 800C8E6C 00731823 */      subu $v1, $v1, $s3
  /* 044850 800C8E70 24010010 */     addiu $at, $zero, 0x10
  /* 044854 800C8E74 11010007 */       beq $t0, $at, .L800C8E94
  /* 044858 800C8E78 00031880 */       sll $v1, $v1, 2
  /* 04485C 800C8E7C 8FC90010 */        lw $t1, 0x10($fp)
  /* 044860 800C8E80 24020001 */     addiu $v0, $zero, 1
  /* 044864 800C8E84 01235021 */      addu $t2, $t1, $v1
  /* 044868 800C8E88 8D4B0004 */        lw $t3, 4($t2)
  /* 04486C 800C8E8C 15600003 */      bnez $t3, .L800C8E9C
  /* 044870 800C8E90 00000000 */       nop 
  .L800C8E94:
  /* 044874 800C8E94 10000001 */         b .L800C8E9C
  /* 044878 800C8E98 00001025 */        or $v0, $zero, $zero
  .L800C8E9C:
  /* 04487C 800C8E9C 10C0000D */      beqz $a2, .L800C8ED4
  /* 044880 800C8EA0 00066080 */       sll $t4, $a2, 2
  /* 044884 800C8EA4 00027100 */       sll $t6, $v0, 4
  /* 044888 800C8EA8 03CE9021 */      addu $s2, $fp, $t6
  /* 04488C 800C8EAC 8E4F0000 */        lw $t7, ($s2)
  /* 044890 800C8EB0 27AD006C */     addiu $t5, $sp, 0x6c
  /* 044894 800C8EB4 018D8821 */      addu $s1, $t4, $t5
  /* 044898 800C8EB8 01E3C021 */      addu $t8, $t7, $v1
  /* 04489C 800C8EBC 8F050004 */        lw $a1, 4($t8)
  /* 0448A0 800C8EC0 0C0024FD */       jal omAddChildForDObj
  /* 0448A4 800C8EC4 8E24FFFC */        lw $a0, -4($s1)
  /* 0448A8 800C8EC8 AE220000 */        sw $v0, ($s1)
  /* 0448AC 800C8ECC 1000000A */         b .L800C8EF8
  /* 0448B0 800C8ED0 00408025 */        or $s0, $v0, $zero
  .L800C8ED4:
  /* 0448B4 800C8ED4 0002C900 */       sll $t9, $v0, 4
  /* 0448B8 800C8ED8 03D99021 */      addu $s2, $fp, $t9
  /* 0448BC 800C8EDC 8E480000 */        lw $t0, ($s2)
  /* 0448C0 800C8EE0 8FA400C8 */        lw $a0, 0xc8($sp)
  /* 0448C4 800C8EE4 01034821 */      addu $t1, $t0, $v1
  /* 0448C8 800C8EE8 0C0024FD */       jal omAddChildForDObj
  /* 0448CC 800C8EEC 8D250004 */        lw $a1, 4($t1)
  /* 0448D0 800C8EF0 AFA2006C */        sw $v0, 0x6c($sp)
  /* 0448D4 800C8EF4 00408025 */        or $s0, $v0, $zero
  .L800C8EF8:
  /* 0448D8 800C8EF8 8E8A0000 */        lw $t2, ($s4)
  /* 0448DC 800C8EFC 02002025 */        or $a0, $s0, $zero
  /* 0448E0 800C8F00 93A500DF */       lbu $a1, 0xdf($sp)
  /* 0448E4 800C8F04 314B8000 */      andi $t3, $t2, 0x8000
  /* 0448E8 800C8F08 1160000A */      beqz $t3, .L800C8F34
  /* 0448EC 800C8F0C 93A600E3 */       lbu $a2, 0xe3($sp)
  /* 0448F0 800C8F10 340C8000 */       ori $t4, $zero, 0x8000
  /* 0448F4 800C8F14 AFAC0010 */        sw $t4, 0x10($sp)
  /* 0448F8 800C8F18 02002025 */        or $a0, $s0, $zero
  /* 0448FC 800C8F1C 93A500DF */       lbu $a1, 0xdf($sp)
  /* 044900 800C8F20 93A600E3 */       lbu $a2, 0xe3($sp)
  /* 044904 800C8F24 0C003CD9 */       jal func_8000F364
  /* 044908 800C8F28 93A700E7 */       lbu $a3, 0xe7($sp)
  /* 04490C 800C8F2C 10000006 */         b .L800C8F48
  /* 044910 800C8F30 8E8F0008 */        lw $t7, 8($s4)
  .L800C8F34:
  /* 044914 800C8F34 93AD00EF */       lbu $t5, 0xef($sp)
  /* 044918 800C8F38 93A700E7 */       lbu $a3, 0xe7($sp)
  /* 04491C 800C8F3C 0C032296 */       jal func_ovl0_800C8A58
  /* 044920 800C8F40 AFAD0010 */        sw $t5, 0x10($sp)
  /* 044924 800C8F44 8E8F0008 */        lw $t7, 8($s4)
  .L800C8F48:
  /* 044928 800C8F48 00135080 */       sll $t2, $s3, 2
  /* 04492C 800C8F4C 02002025 */        or $a0, $s0, $zero
  /* 044930 800C8F50 AE0F001C */        sw $t7, 0x1c($s0)
  /* 044934 800C8F54 8E8E000C */        lw $t6, 0xc($s4)
  /* 044938 800C8F58 00002825 */        or $a1, $zero, $zero
  /* 04493C 800C8F5C 00003025 */        or $a2, $zero, $zero
  /* 044940 800C8F60 AE0E0020 */        sw $t6, 0x20($s0)
  /* 044944 800C8F64 8E8F0010 */        lw $t7, 0x10($s4)
  /* 044948 800C8F68 00136080 */       sll $t4, $s3, 2
  /* 04494C 800C8F6C AE0F0024 */        sw $t7, 0x24($s0)
  /* 044950 800C8F70 8E990014 */        lw $t9, 0x14($s4)
  /* 044954 800C8F74 AE190030 */        sw $t9, 0x30($s0)
  /* 044958 800C8F78 8E980018 */        lw $t8, 0x18($s4)
  /* 04495C 800C8F7C AE180034 */        sw $t8, 0x34($s0)
  /* 044960 800C8F80 8E99001C */        lw $t9, 0x1c($s4)
  /* 044964 800C8F84 AE190038 */        sw $t9, 0x38($s0)
  /* 044968 800C8F88 8E890020 */        lw $t1, 0x20($s4)
  /* 04496C 800C8F8C AE090040 */        sw $t1, 0x40($s0)
  /* 044970 800C8F90 8E880024 */        lw $t0, 0x24($s4)
  /* 044974 800C8F94 AE080044 */        sw $t0, 0x44($s0)
  /* 044978 800C8F98 8E890028 */        lw $t1, 0x28($s4)
  /* 04497C 800C8F9C AE090048 */        sw $t1, 0x48($s0)
  /* 044980 800C8FA0 8E420004 */        lw $v0, 4($s2)
  /* 044984 800C8FA4 C7A400E8 */      lwc1 $f4, 0xe8($sp)
  /* 044988 800C8FA8 10400003 */      beqz $v0, .L800C8FB8
  /* 04498C 800C8FAC 004A5821 */      addu $t3, $v0, $t2
  /* 044990 800C8FB0 10000001 */         b .L800C8FB8
  /* 044994 800C8FB4 8D650000 */        lw $a1, ($t3)
  .L800C8FB8:
  /* 044998 800C8FB8 8E420008 */        lw $v0, 8($s2)
  /* 04499C 800C8FBC 00003825 */        or $a3, $zero, $zero
  /* 0449A0 800C8FC0 10400003 */      beqz $v0, .L800C8FD0
  /* 0449A4 800C8FC4 004C6821 */      addu $t5, $v0, $t4
  /* 0449A8 800C8FC8 10000001 */         b .L800C8FD0
  /* 0449AC 800C8FCC 8DA60000 */        lw $a2, ($t5)
  .L800C8FD0:
  /* 0449B0 800C8FD0 0C03232E */       jal func_ovl0_800C8CB8
  /* 0449B4 800C8FD4 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 0449B8 800C8FD8 52E00003 */      beql $s7, $zero, .L800C8FE8
  /* 0449BC 800C8FDC 2A610020 */      slti $at, $s3, 0x20
  /* 0449C0 800C8FE0 AEF00000 */        sw $s0, ($s7)
  .L800C8FE4:
  /* 0449C4 800C8FE4 2A610020 */      slti $at, $s3, 0x20
  .L800C8FE8:
  /* 0449C8 800C8FE8 26F70004 */     addiu $s7, $s7, 4
  /* 0449CC 800C8FEC 10200003 */      beqz $at, .L800C8FFC
  /* 0449D0 800C8FF0 2694002C */     addiu $s4, $s4, 0x2c
  /* 0449D4 800C8FF4 10000002 */         b .L800C9000
  /* 0449D8 800C8FF8 0015A840 */       sll $s5, $s5, 1
  .L800C8FFC:
  /* 0449DC 800C8FFC 0016B040 */       sll $s6, $s6, 1
  .L800C9000:
  /* 0449E0 800C9000 16A00003 */      bnez $s5, .L800C9010
  /* 0449E4 800C9004 26730001 */     addiu $s3, $s3, 1
  /* 0449E8 800C9008 52C00006 */      beql $s6, $zero, .L800C9024
  /* 0449EC 800C900C 8FBF0044 */        lw $ra, 0x44($sp)
  .L800C9010:
  /* 0449F0 800C9010 8E840000 */        lw $a0, ($s4)
  /* 0449F4 800C9014 24010012 */     addiu $at, $zero, 0x12
  /* 0449F8 800C9018 5481FF89 */      bnel $a0, $at, .L800C8E40
  /* 0449FC 800C901C 2A610020 */      slti $at, $s3, 0x20
  .L800C9020:
  /* 044A00 800C9020 8FBF0044 */        lw $ra, 0x44($sp)
  .L800C9024:
  /* 044A04 800C9024 8FB00020 */        lw $s0, 0x20($sp)
  /* 044A08 800C9028 8FB10024 */        lw $s1, 0x24($sp)
  /* 044A0C 800C902C 8FB20028 */        lw $s2, 0x28($sp)
  /* 044A10 800C9030 8FB3002C */        lw $s3, 0x2c($sp)
  /* 044A14 800C9034 8FB40030 */        lw $s4, 0x30($sp)
  /* 044A18 800C9038 8FB50034 */        lw $s5, 0x34($sp)
  /* 044A1C 800C903C 8FB60038 */        lw $s6, 0x38($sp)
  /* 044A20 800C9040 8FB7003C */        lw $s7, 0x3c($sp)
  /* 044A24 800C9044 8FBE0040 */        lw $fp, 0x40($sp)
  /* 044A28 800C9048 03E00008 */        jr $ra
  /* 044A2C 800C904C 27BD00C8 */     addiu $sp, $sp, 0xc8

  /* 044A30 800C9050 27BDFF50 */     addiu $sp, $sp, -0xb0
  /* 044A34 800C9054 AFB50034 */        sw $s5, 0x34($sp)
  /* 044A38 800C9058 AFB40030 */        sw $s4, 0x30($sp)
  /* 044A3C 800C905C AFB3002C */        sw $s3, 0x2c($sp)
  /* 044A40 800C9060 00A09825 */        or $s3, $a1, $zero
  /* 044A44 800C9064 00C0A025 */        or $s4, $a2, $zero
  /* 044A48 800C9068 00E0A825 */        or $s5, $a3, $zero
  /* 044A4C 800C906C AFBF0044 */        sw $ra, 0x44($sp)
  /* 044A50 800C9070 AFBE0040 */        sw $fp, 0x40($sp)
  /* 044A54 800C9074 AFB7003C */        sw $s7, 0x3c($sp)
  /* 044A58 800C9078 AFB60038 */        sw $s6, 0x38($sp)
  /* 044A5C 800C907C AFB20028 */        sw $s2, 0x28($sp)
  /* 044A60 800C9080 AFB10024 */        sw $s1, 0x24($sp)
  /* 044A64 800C9084 AFB00020 */        sw $s0, 0x20($sp)
  /* 044A68 800C9088 AFA400B0 */        sw $a0, 0xb0($sp)
  /* 044A6C 800C908C AFA0005C */        sw $zero, 0x5c($sp)
  /* 044A70 800C9090 AFA00060 */        sw $zero, 0x60($sp)
  /* 044A74 800C9094 27A20064 */     addiu $v0, $sp, 0x64
  /* 044A78 800C9098 27A300A4 */     addiu $v1, $sp, 0xa4
  .L800C909C:
  /* 044A7C 800C909C 24420010 */     addiu $v0, $v0, 0x10
  /* 044A80 800C90A0 AC40FFF4 */        sw $zero, -0xc($v0)
  /* 044A84 800C90A4 AC40FFF8 */        sw $zero, -8($v0)
  /* 044A88 800C90A8 AC40FFFC */        sw $zero, -4($v0)
  /* 044A8C 800C90AC 1443FFFB */       bne $v0, $v1, .L800C909C
  /* 044A90 800C90B0 AC40FFF0 */        sw $zero, -0x10($v0)
  /* 044A94 800C90B4 8E620000 */        lw $v0, ($s3)
  /* 044A98 800C90B8 24010012 */     addiu $at, $zero, 0x12
  /* 044A9C 800C90BC 93BE00CB */       lbu $fp, 0xcb($sp)
  /* 044AA0 800C90C0 1041004D */       beq $v0, $at, .L800C91F8
  /* 044AA4 800C90C4 93B700C7 */       lbu $s7, 0xc7($sp)
  /* 044AA8 800C90C8 93B600C3 */       lbu $s6, 0xc3($sp)
  /* 044AAC 800C90CC 30430FFF */      andi $v1, $v0, 0xfff
  .L800C90D0:
  /* 044AB0 800C90D0 10600009 */      beqz $v1, .L800C90F8
  /* 044AB4 800C90D4 00037080 */       sll $t6, $v1, 2
  /* 044AB8 800C90D8 27AF005C */     addiu $t7, $sp, 0x5c
  /* 044ABC 800C90DC 01CF8021 */      addu $s0, $t6, $t7
  /* 044AC0 800C90E0 8E04FFFC */        lw $a0, -4($s0)
  /* 044AC4 800C90E4 0C0024FD */       jal omAddChildForDObj
  /* 044AC8 800C90E8 8E650004 */        lw $a1, 4($s3)
  /* 044ACC 800C90EC AE020000 */        sw $v0, ($s0)
  /* 044AD0 800C90F0 10000006 */         b .L800C910C
  /* 044AD4 800C90F4 00409025 */        or $s2, $v0, $zero
  .L800C90F8:
  /* 044AD8 800C90F8 8FA400B0 */        lw $a0, 0xb0($sp)
  /* 044ADC 800C90FC 0C0024FD */       jal omAddChildForDObj
  /* 044AE0 800C9100 8E650004 */        lw $a1, 4($s3)
  /* 044AE4 800C9104 AFA2005C */        sw $v0, 0x5c($sp)
  /* 044AE8 800C9108 00409025 */        or $s2, $v0, $zero
  .L800C910C:
  /* 044AEC 800C910C 8E780000 */        lw $t8, ($s3)
  /* 044AF0 800C9110 02402025 */        or $a0, $s2, $zero
  /* 044AF4 800C9114 32C500FF */      andi $a1, $s6, 0xff
  /* 044AF8 800C9118 33198000 */      andi $t9, $t8, 0x8000
  /* 044AFC 800C911C 1320000A */      beqz $t9, .L800C9148
  /* 044B00 800C9120 32E600FF */      andi $a2, $s7, 0xff
  /* 044B04 800C9124 34088000 */       ori $t0, $zero, 0x8000
  /* 044B08 800C9128 AFA80010 */        sw $t0, 0x10($sp)
  /* 044B0C 800C912C 02402025 */        or $a0, $s2, $zero
  /* 044B10 800C9130 32C500FF */      andi $a1, $s6, 0xff
  /* 044B14 800C9134 32E600FF */      andi $a2, $s7, 0xff
  /* 044B18 800C9138 0C003CD9 */       jal func_8000F364
  /* 044B1C 800C913C 33C700FF */      andi $a3, $fp, 0xff
  /* 044B20 800C9140 10000004 */         b .L800C9154
  /* 044B24 800C9144 8E6A0008 */        lw $t2, 8($s3)
  .L800C9148:
  /* 044B28 800C9148 0C003CBF */       jal func_8000F2FC
  /* 044B2C 800C914C 33C700FF */      andi $a3, $fp, 0xff
  /* 044B30 800C9150 8E6A0008 */        lw $t2, 8($s3)
  .L800C9154:
  /* 044B34 800C9154 AE4A001C */        sw $t2, 0x1c($s2)
  /* 044B38 800C9158 8E69000C */        lw $t1, 0xc($s3)
  /* 044B3C 800C915C AE490020 */        sw $t1, 0x20($s2)
  /* 044B40 800C9160 8E6A0010 */        lw $t2, 0x10($s3)
  /* 044B44 800C9164 AE4A0024 */        sw $t2, 0x24($s2)
  /* 044B48 800C9168 8E6C0014 */        lw $t4, 0x14($s3)
  /* 044B4C 800C916C AE4C0030 */        sw $t4, 0x30($s2)
  /* 044B50 800C9170 8E6B0018 */        lw $t3, 0x18($s3)
  /* 044B54 800C9174 AE4B0034 */        sw $t3, 0x34($s2)
  /* 044B58 800C9178 8E6C001C */        lw $t4, 0x1c($s3)
  /* 044B5C 800C917C AE4C0038 */        sw $t4, 0x38($s2)
  /* 044B60 800C9180 8E6E0020 */        lw $t6, 0x20($s3)
  /* 044B64 800C9184 AE4E0040 */        sw $t6, 0x40($s2)
  /* 044B68 800C9188 8E6D0024 */        lw $t5, 0x24($s3)
  /* 044B6C 800C918C AE4D0044 */        sw $t5, 0x44($s2)
  /* 044B70 800C9190 8E6E0028 */        lw $t6, 0x28($s3)
  /* 044B74 800C9194 1280000F */      beqz $s4, .L800C91D4
  /* 044B78 800C9198 AE4E0048 */        sw $t6, 0x48($s2)
  /* 044B7C 800C919C 8E820000 */        lw $v0, ($s4)
  /* 044B80 800C91A0 5040000C */      beql $v0, $zero, .L800C91D4
  /* 044B84 800C91A4 26940004 */     addiu $s4, $s4, 4
  /* 044B88 800C91A8 8C510000 */        lw $s1, ($v0)
  /* 044B8C 800C91AC 00408025 */        or $s0, $v0, $zero
  /* 044B90 800C91B0 12200007 */      beqz $s1, .L800C91D0
  /* 044B94 800C91B4 02402025 */        or $a0, $s2, $zero
  .L800C91B8:
  /* 044B98 800C91B8 0C002437 */       jal omAddMObjForDObj
  /* 044B9C 800C91BC 02202825 */        or $a1, $s1, $zero
  /* 044BA0 800C91C0 8E110004 */        lw $s1, 4($s0)
  /* 044BA4 800C91C4 26100004 */     addiu $s0, $s0, 4
  /* 044BA8 800C91C8 5620FFFB */      bnel $s1, $zero, .L800C91B8
  /* 044BAC 800C91CC 02402025 */        or $a0, $s2, $zero
  .L800C91D0:
  /* 044BB0 800C91D0 26940004 */     addiu $s4, $s4, 4
  .L800C91D4:
  /* 044BB4 800C91D4 52A00004 */      beql $s5, $zero, .L800C91E8
  /* 044BB8 800C91D8 8E62002C */        lw $v0, 0x2c($s3)
  /* 044BBC 800C91DC AEB20000 */        sw $s2, ($s5)
  /* 044BC0 800C91E0 26B50004 */     addiu $s5, $s5, 4
  /* 044BC4 800C91E4 8E62002C */        lw $v0, 0x2c($s3)
  .L800C91E8:
  /* 044BC8 800C91E8 24010012 */     addiu $at, $zero, 0x12
  /* 044BCC 800C91EC 2673002C */     addiu $s3, $s3, 0x2c
  /* 044BD0 800C91F0 5441FFB7 */      bnel $v0, $at, .L800C90D0
  /* 044BD4 800C91F4 30430FFF */      andi $v1, $v0, 0xfff
  .L800C91F8:
  /* 044BD8 800C91F8 8FBF0044 */        lw $ra, 0x44($sp)
  /* 044BDC 800C91FC 8FB00020 */        lw $s0, 0x20($sp)
  /* 044BE0 800C9200 8FB10024 */        lw $s1, 0x24($sp)
  /* 044BE4 800C9204 8FB20028 */        lw $s2, 0x28($sp)
  /* 044BE8 800C9208 8FB3002C */        lw $s3, 0x2c($sp)
  /* 044BEC 800C920C 8FB40030 */        lw $s4, 0x30($sp)
  /* 044BF0 800C9210 8FB50034 */        lw $s5, 0x34($sp)
  /* 044BF4 800C9214 8FB60038 */        lw $s6, 0x38($sp)
  /* 044BF8 800C9218 8FB7003C */        lw $s7, 0x3c($sp)
  /* 044BFC 800C921C 8FBE0040 */        lw $fp, 0x40($sp)
  /* 044C00 800C9220 03E00008 */        jr $ra
  /* 044C04 800C9224 27BD00B0 */     addiu $sp, $sp, 0xb0

