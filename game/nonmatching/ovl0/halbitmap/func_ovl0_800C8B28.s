.section .text
glabel func_ovl0_800C8B28
  /* 044508 800C8B28 27BDFF58 */     addiu $sp, $sp, -0xa8
  /* 04450C 800C8B2C AFB60038 */        sw $s6, 0x38($sp)
  /* 044510 800C8B30 AFB3002C */        sw $s3, 0x2c($sp)
  /* 044514 800C8B34 AFB10024 */        sw $s1, 0x24($sp)
  /* 044518 800C8B38 00A08825 */        or $s1, $a1, $zero
  /* 04451C 800C8B3C 00C09825 */        or $s3, $a2, $zero
  /* 044520 800C8B40 30F600FF */      andi $s6, $a3, 0xff
  /* 044524 800C8B44 AFBF0044 */        sw $ra, 0x44($sp)
  /* 044528 800C8B48 AFBE0040 */        sw $fp, 0x40($sp)
  /* 04452C 800C8B4C AFB7003C */        sw $s7, 0x3c($sp)
  /* 044530 800C8B50 AFB50034 */        sw $s5, 0x34($sp)
  /* 044534 800C8B54 AFB40030 */        sw $s4, 0x30($sp)
  /* 044538 800C8B58 AFB20028 */        sw $s2, 0x28($sp)
  /* 04453C 800C8B5C AFB00020 */        sw $s0, 0x20($sp)
  /* 044540 800C8B60 AFA400A8 */        sw $a0, 0xa8($sp)
  /* 044544 800C8B64 AFA700B4 */        sw $a3, 0xb4($sp)
  /* 044548 800C8B68 AFA00050 */        sw $zero, 0x50($sp)
  /* 04454C 800C8B6C AFA00054 */        sw $zero, 0x54($sp)
  /* 044550 800C8B70 27A20058 */     addiu $v0, $sp, 0x58
  /* 044554 800C8B74 27A30098 */     addiu $v1, $sp, 0x98
  .L800C8B78:
  /* 044558 800C8B78 24420010 */     addiu $v0, $v0, 0x10
  /* 04455C 800C8B7C AC40FFF4 */        sw $zero, -0xc($v0)
  /* 044560 800C8B80 AC40FFF8 */        sw $zero, -8($v0)
  /* 044564 800C8B84 AC40FFFC */        sw $zero, -4($v0)
  /* 044568 800C8B88 1443FFFB */       bne $v0, $v1, .L800C8B78
  /* 04456C 800C8B8C AC40FFF0 */        sw $zero, -0x10($v0)
  /* 044570 800C8B90 8E220000 */        lw $v0, ($s1)
  /* 044574 800C8B94 241E0012 */     addiu $fp, $zero, 0x12
  /* 044578 800C8B98 27B70050 */     addiu $s7, $sp, 0x50
  /* 04457C 800C8B9C 13C2003A */       beq $fp, $v0, .L800C8C88
  /* 044580 800C8BA0 93B500BF */       lbu $s5, 0xbf($sp)
  /* 044584 800C8BA4 93B400BB */       lbu $s4, 0xbb($sp)
  /* 044588 800C8BA8 30430FFF */      andi $v1, $v0, 0xfff
  .L800C8BAC:
  /* 04458C 800C8BAC 10600008 */      beqz $v1, .L800C8BD0
  /* 044590 800C8BB0 00037080 */       sll $t6, $v1, 2
  /* 044594 800C8BB4 02EE9021 */      addu $s2, $s7, $t6
  /* 044598 800C8BB8 8E44FFFC */        lw $a0, -4($s2)
  /* 04459C 800C8BBC 0C0024FD */       jal func_800093F4
  /* 0445A0 800C8BC0 8E250004 */        lw $a1, 4($s1)
  /* 0445A4 800C8BC4 AE420000 */        sw $v0, ($s2)
  /* 0445A8 800C8BC8 10000006 */         b .L800C8BE4
  /* 0445AC 800C8BCC 00408025 */        or $s0, $v0, $zero
  .L800C8BD0:
  /* 0445B0 800C8BD0 8FA400A8 */        lw $a0, 0xa8($sp)
  /* 0445B4 800C8BD4 0C0024FD */       jal func_800093F4
  /* 0445B8 800C8BD8 8E250004 */        lw $a1, 4($s1)
  /* 0445BC 800C8BDC AFA20050 */        sw $v0, 0x50($sp)
  /* 0445C0 800C8BE0 00408025 */        or $s0, $v0, $zero
  .L800C8BE4:
  /* 0445C4 800C8BE4 8E220000 */        lw $v0, ($s1)
  /* 0445C8 800C8BE8 02002025 */        or $a0, $s0, $zero
  /* 0445CC 800C8BEC 32C500FF */      andi $a1, $s6, 0xff
  /* 0445D0 800C8BF0 3042F000 */      andi $v0, $v0, 0xf000
  /* 0445D4 800C8BF4 10400009 */      beqz $v0, .L800C8C1C
  /* 0445D8 800C8BF8 328600FF */      andi $a2, $s4, 0xff
  /* 0445DC 800C8BFC 02002025 */        or $a0, $s0, $zero
  /* 0445E0 800C8C00 32C500FF */      andi $a1, $s6, 0xff
  /* 0445E4 800C8C04 328600FF */      andi $a2, $s4, 0xff
  /* 0445E8 800C8C08 32A700FF */      andi $a3, $s5, 0xff
  /* 0445EC 800C8C0C 0C003CD9 */       jal func_8000F364
  /* 0445F0 800C8C10 AFA20010 */        sw $v0, 0x10($sp)
  /* 0445F4 800C8C14 10000004 */         b .L800C8C28
  /* 0445F8 800C8C18 8E380008 */        lw $t8, 8($s1)
  .L800C8C1C:
  /* 0445FC 800C8C1C 0C003CBF */       jal func_8000F2FC
  /* 044600 800C8C20 32A700FF */      andi $a3, $s5, 0xff
  /* 044604 800C8C24 8E380008 */        lw $t8, 8($s1)
  .L800C8C28:
  /* 044608 800C8C28 AE18001C */        sw $t8, 0x1c($s0)
  /* 04460C 800C8C2C 8E2F000C */        lw $t7, 0xc($s1)
  /* 044610 800C8C30 AE0F0020 */        sw $t7, 0x20($s0)
  /* 044614 800C8C34 8E380010 */        lw $t8, 0x10($s1)
  /* 044618 800C8C38 AE180024 */        sw $t8, 0x24($s0)
  /* 04461C 800C8C3C 8E280014 */        lw $t0, 0x14($s1)
  /* 044620 800C8C40 AE080030 */        sw $t0, 0x30($s0)
  /* 044624 800C8C44 8E390018 */        lw $t9, 0x18($s1)
  /* 044628 800C8C48 AE190034 */        sw $t9, 0x34($s0)
  /* 04462C 800C8C4C 8E28001C */        lw $t0, 0x1c($s1)
  /* 044630 800C8C50 AE080038 */        sw $t0, 0x38($s0)
  /* 044634 800C8C54 8E2A0020 */        lw $t2, 0x20($s1)
  /* 044638 800C8C58 AE0A0040 */        sw $t2, 0x40($s0)
  /* 04463C 800C8C5C 8E290024 */        lw $t1, 0x24($s1)
  /* 044640 800C8C60 AE090044 */        sw $t1, 0x44($s0)
  /* 044644 800C8C64 8E2A0028 */        lw $t2, 0x28($s1)
  /* 044648 800C8C68 12600003 */      beqz $s3, .L800C8C78
  /* 04464C 800C8C6C AE0A0048 */        sw $t2, 0x48($s0)
  /* 044650 800C8C70 AE700000 */        sw $s0, ($s3)
  /* 044654 800C8C74 26730004 */     addiu $s3, $s3, 4
  .L800C8C78:
  /* 044658 800C8C78 8E22002C */        lw $v0, 0x2c($s1)
  /* 04465C 800C8C7C 2631002C */     addiu $s1, $s1, 0x2c
  /* 044660 800C8C80 57C2FFCA */      bnel $fp, $v0, .L800C8BAC
  /* 044664 800C8C84 30430FFF */      andi $v1, $v0, 0xfff
  .L800C8C88:
  /* 044668 800C8C88 8FBF0044 */        lw $ra, 0x44($sp)
  /* 04466C 800C8C8C 8FB00020 */        lw $s0, 0x20($sp)
  /* 044670 800C8C90 8FB10024 */        lw $s1, 0x24($sp)
  /* 044674 800C8C94 8FB20028 */        lw $s2, 0x28($sp)
  /* 044678 800C8C98 8FB3002C */        lw $s3, 0x2c($sp)
  /* 04467C 800C8C9C 8FB40030 */        lw $s4, 0x30($sp)
  /* 044680 800C8CA0 8FB50034 */        lw $s5, 0x34($sp)
  /* 044684 800C8CA4 8FB60038 */        lw $s6, 0x38($sp)
  /* 044688 800C8CA8 8FB7003C */        lw $s7, 0x3c($sp)
  /* 04468C 800C8CAC 8FBE0040 */        lw $fp, 0x40($sp)
  /* 044690 800C8CB0 03E00008 */        jr $ra
  /* 044694 800C8CB4 27BD00A8 */     addiu $sp, $sp, 0xa8

