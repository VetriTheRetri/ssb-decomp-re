.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801347B0

glabel mnVSSetupDisplayList
  /* 1224B0 80131B00 8C830000 */        lw $v1, ($a0)
  /* 1224B4 80131B04 3C188013 */       lui $t8, %hi(dMNVSDisplayList)
  /* 1224B8 80131B08 271847D0 */     addiu $t8, $t8, %lo(dMNVSDisplayList)
  /* 1224BC 80131B0C 246E0008 */     addiu $t6, $v1, 8
  /* 1224C0 80131B10 AC8E0000 */        sw $t6, ($a0)
  /* 1224C4 80131B14 3C0FDE00 */       lui $t7, 0xde00
  /* 1224C8 80131B18 AC6F0000 */        sw $t7, ($v1)
  /* 1224CC 80131B1C 03E00008 */        jr $ra
  /* 1224D0 80131B20 AC780004 */        sw $t8, 4($v1)

glabel mnVSPow
  /* 1224D4 80131B24 14A00003 */      bnez $a1, .L80131B34
  /* 1224D8 80131B28 00801825 */        or $v1, $a0, $zero
  /* 1224DC 80131B2C 03E00008 */        jr $ra
  /* 1224E0 80131B30 24020001 */     addiu $v0, $zero, 1

  .L80131B34:
  /* 1224E4 80131B34 28A10002 */      slti $at, $a1, 2
  /* 1224E8 80131B38 1420001F */      bnez $at, .L80131BB8
  /* 1224EC 80131B3C 00A01025 */        or $v0, $a1, $zero
  /* 1224F0 80131B40 24A7FFFF */     addiu $a3, $a1, -1
  /* 1224F4 80131B44 30E70003 */      andi $a3, $a3, 3
  /* 1224F8 80131B48 00073823 */      negu $a3, $a3
  /* 1224FC 80131B4C 10E00008 */      beqz $a3, .L80131B70
  /* 122500 80131B50 00E53021 */      addu $a2, $a3, $a1
  .L80131B54:
  /* 122504 80131B54 00640019 */     multu $v1, $a0
  /* 122508 80131B58 2442FFFF */     addiu $v0, $v0, -1
  /* 12250C 80131B5C 00001812 */      mflo $v1
  /* 122510 80131B60 14C2FFFC */       bne $a2, $v0, .L80131B54
  /* 122514 80131B64 00000000 */       nop
  /* 122518 80131B68 24050001 */     addiu $a1, $zero, 1
  /* 12251C 80131B6C 10450012 */       beq $v0, $a1, .L80131BB8
  .L80131B70:
  /* 122520 80131B70 24050001 */     addiu $a1, $zero, 1
  .L80131B74:
  /* 122524 80131B74 00640019 */     multu $v1, $a0
  /* 122528 80131B78 2442FFFC */     addiu $v0, $v0, -4
  /* 12252C 80131B7C 00001812 */      mflo $v1
  /* 122530 80131B80 00000000 */       nop
  /* 122534 80131B84 00000000 */       nop
  /* 122538 80131B88 00640019 */     multu $v1, $a0
  /* 12253C 80131B8C 00001812 */      mflo $v1
  /* 122540 80131B90 00000000 */       nop
  /* 122544 80131B94 00000000 */       nop
  /* 122548 80131B98 00640019 */     multu $v1, $a0
  /* 12254C 80131B9C 00001812 */      mflo $v1
  /* 122550 80131BA0 00000000 */       nop
  /* 122554 80131BA4 00000000 */       nop
  /* 122558 80131BA8 00640019 */     multu $v1, $a0
  /* 12255C 80131BAC 00001812 */      mflo $v1
  /* 122560 80131BB0 1445FFF0 */       bne $v0, $a1, .L80131B74
  /* 122564 80131BB4 00000000 */       nop
  .L80131BB8:
  /* 122568 80131BB8 00601025 */        or $v0, $v1, $zero
  /* 12256C 80131BBC 03E00008 */        jr $ra
  /* 122570 80131BC0 00000000 */       nop

glabel mnVSSetTextureColors
  /* 122574 80131BC4 948E0024 */       lhu $t6, 0x24($a0)
  /* 122578 80131BC8 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 12257C 80131BCC A4980024 */        sh $t8, 0x24($a0)
  /* 122580 80131BD0 37190001 */       ori $t9, $t8, 1
  /* 122584 80131BD4 A4990024 */        sh $t9, 0x24($a0)
  /* 122588 80131BD8 8CA80000 */        lw $t0, ($a1)
  /* 12258C 80131BDC A0880028 */        sb $t0, 0x28($a0)
  /* 122590 80131BE0 8CA90004 */        lw $t1, 4($a1)
  /* 122594 80131BE4 A0890029 */        sb $t1, 0x29($a0)
  /* 122598 80131BE8 8CAA0008 */        lw $t2, 8($a1)
  /* 12259C 80131BEC 03E00008 */        jr $ra
  /* 1225A0 80131BF0 A08A002A */        sb $t2, 0x2a($a0)

glabel mnVSGetNumberOfDigits
  /* 1225A4 80131BF4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1225A8 80131BF8 AFB20020 */        sw $s2, 0x20($sp)
  /* 1225AC 80131BFC AFB1001C */        sw $s1, 0x1c($sp)
  /* 1225B0 80131C00 00809025 */        or $s2, $a0, $zero
  /* 1225B4 80131C04 AFBF0024 */        sw $ra, 0x24($sp)
  /* 1225B8 80131C08 AFB00018 */        sw $s0, 0x18($sp)
  /* 1225BC 80131C0C 18A0001D */      blez $a1, .L80131C84
  /* 1225C0 80131C10 00A08825 */        or $s1, $a1, $zero
  .L80131C14:
  /* 1225C4 80131C14 2630FFFF */     addiu $s0, $s1, -1
  /* 1225C8 80131C18 02002825 */        or $a1, $s0, $zero
  /* 1225CC 80131C1C 0C04C6C9 */       jal mnVSPow
  /* 1225D0 80131C20 2404000A */     addiu $a0, $zero, 0xa
  /* 1225D4 80131C24 10400011 */      beqz $v0, .L80131C6C
  /* 1225D8 80131C28 00001825 */        or $v1, $zero, $zero
  /* 1225DC 80131C2C 2404000A */     addiu $a0, $zero, 0xa
  /* 1225E0 80131C30 0C04C6C9 */       jal mnVSPow
  /* 1225E4 80131C34 02002825 */        or $a1, $s0, $zero
  /* 1225E8 80131C38 0242001A */       div $zero, $s2, $v0
  /* 1225EC 80131C3C 00001812 */      mflo $v1
  /* 1225F0 80131C40 14400002 */      bnez $v0, .L80131C4C
  /* 1225F4 80131C44 00000000 */       nop
  /* 1225F8 80131C48 0007000D */     break 7
  .L80131C4C:
  /* 1225FC 80131C4C 2401FFFF */     addiu $at, $zero, -1
  /* 122600 80131C50 14410004 */       bne $v0, $at, .L80131C64
  /* 122604 80131C54 3C018000 */       lui $at, 0x8000
  /* 122608 80131C58 16410002 */       bne $s2, $at, .L80131C64
  /* 12260C 80131C5C 00000000 */       nop
  /* 122610 80131C60 0006000D */     break 6
  .L80131C64:
  /* 122614 80131C64 10000001 */         b .L80131C6C
  /* 122618 80131C68 00000000 */       nop
  .L80131C6C:
  /* 12261C 80131C6C 10600003 */      beqz $v1, .L80131C7C
  /* 122620 80131C70 00000000 */       nop
  /* 122624 80131C74 10000004 */         b .L80131C88
  /* 122628 80131C78 02201025 */        or $v0, $s1, $zero
  .L80131C7C:
  /* 12262C 80131C7C 1600FFE5 */      bnez $s0, .L80131C14
  /* 122630 80131C80 02008825 */        or $s1, $s0, $zero
  .L80131C84:
  /* 122634 80131C84 00001025 */        or $v0, $zero, $zero
  .L80131C88:
  /* 122638 80131C88 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12263C 80131C8C 8FB00018 */        lw $s0, 0x18($sp)
  /* 122640 80131C90 8FB1001C */        lw $s1, 0x1c($sp)
  /* 122644 80131C94 8FB20020 */        lw $s2, 0x20($sp)
  /* 122648 80131C98 03E00008 */        jr $ra
  /* 12264C 80131C9C 27BD0028 */     addiu $sp, $sp, 0x28

glabel mnVSCreateNumber
  /* 122650 80131CA0 27BDFF40 */     addiu $sp, $sp, -0xc0
  /* 122654 80131CA4 F7B80028 */      sdc1 $f24, 0x28($sp)
  /* 122658 80131CA8 3C0E8013 */       lui $t6, %hi(dMNVSNumberOffsets)
  /* 12265C 80131CAC AFBE0050 */        sw $fp, 0x50($sp)
  /* 122660 80131CB0 AFB3003C */        sw $s3, 0x3c($sp)
  /* 122664 80131CB4 27A20098 */     addiu $v0, $sp, 0x98
  /* 122668 80131CB8 25CE47F8 */     addiu $t6, $t6, %lo(dMNVSNumberOffsets)
  /* 12266C 80131CBC 4487C000 */      mtc1 $a3, $f24
  /* 122670 80131CC0 00A09825 */        or $s3, $a1, $zero
  /* 122674 80131CC4 0080F025 */        or $fp, $a0, $zero
  /* 122678 80131CC8 AFBF0054 */        sw $ra, 0x54($sp)
  /* 12267C 80131CCC AFB7004C */        sw $s7, 0x4c($sp)
  /* 122680 80131CD0 AFB60048 */        sw $s6, 0x48($sp)
  /* 122684 80131CD4 AFB50044 */        sw $s5, 0x44($sp)
  /* 122688 80131CD8 AFB40040 */        sw $s4, 0x40($sp)
  /* 12268C 80131CDC AFB20038 */        sw $s2, 0x38($sp)
  /* 122690 80131CE0 AFB10034 */        sw $s1, 0x34($sp)
  /* 122694 80131CE4 AFB00030 */        sw $s0, 0x30($sp)
  /* 122698 80131CE8 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 12269C 80131CEC F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 1226A0 80131CF0 AFA600C8 */        sw $a2, 0xc8($sp)
  /* 1226A4 80131CF4 25C80024 */     addiu $t0, $t6, 0x24
  /* 1226A8 80131CF8 0040C825 */        or $t9, $v0, $zero
  .L80131CFC:
  /* 1226AC 80131CFC 8DD80000 */        lw $t8, ($t6) # dMNVSNumberOffsets + 0
  /* 1226B0 80131D00 25CE000C */     addiu $t6, $t6, 0xc
  /* 1226B4 80131D04 2739000C */     addiu $t9, $t9, 0xc
  /* 1226B8 80131D08 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 1226BC 80131D0C 8DCFFFF8 */        lw $t7, -8($t6) # dMNVSNumberOffsets + -8
  /* 1226C0 80131D10 AF2FFFF8 */        sw $t7, -8($t9)
  /* 1226C4 80131D14 8DD8FFFC */        lw $t8, -4($t6) # dMNVSNumberOffsets + -4
  /* 1226C8 80131D18 15C8FFF8 */       bne $t6, $t0, .L80131CFC
  /* 1226CC 80131D1C AF38FFFC */        sw $t8, -4($t9)
  /* 1226D0 80131D20 8DD80000 */        lw $t8, ($t6) # dMNVSNumberOffsets + 0
  /* 1226D4 80131D24 3C0A8013 */       lui $t2, %hi(dMNVSUnusedFloats)
  /* 1226D8 80131D28 254A4820 */     addiu $t2, $t2, %lo(dMNVSUnusedFloats)
  /* 1226DC 80131D2C 254D0024 */     addiu $t5, $t2, 0x24
  /* 1226E0 80131D30 27A90070 */     addiu $t1, $sp, 0x70
  /* 1226E4 80131D34 AF380000 */        sw $t8, ($t9)
  .L80131D38:
  /* 1226E8 80131D38 8D4C0000 */        lw $t4, ($t2) # dMNVSUnusedFloats + 0
  /* 1226EC 80131D3C 254A000C */     addiu $t2, $t2, 0xc
  /* 1226F0 80131D40 2529000C */     addiu $t1, $t1, 0xc
  /* 1226F4 80131D44 AD2CFFF4 */        sw $t4, -0xc($t1)
  /* 1226F8 80131D48 8D4BFFF8 */        lw $t3, -8($t2) # dMNVSUnusedFloats + -8
  /* 1226FC 80131D4C AD2BFFF8 */        sw $t3, -8($t1)
  /* 122700 80131D50 8D4CFFFC */        lw $t4, -4($t2) # dMNVSUnusedFloats + -4
  /* 122704 80131D54 154DFFF8 */       bne $t2, $t5, .L80131D38
  /* 122708 80131D58 AD2CFFFC */        sw $t4, -4($t1)
  /* 12270C 80131D5C 8D4C0000 */        lw $t4, ($t2) # dMNVSUnusedFloats + 0
  /* 122710 80131D60 2416000A */     addiu $s6, $zero, 0xa
  /* 122714 80131D64 3C178013 */       lui $s7, %hi(D_ovl19_80134A48)
  /* 122718 80131D68 AD2C0000 */        sw $t4, ($t1)
  /* 12271C 80131D6C 06610002 */      bgez $s3, .L80131D78
  /* 122720 80131D70 C7B400C8 */      lwc1 $f20, 0xc8($sp)
  /* 122724 80131D74 00009825 */        or $s3, $zero, $zero
  .L80131D78:
  /* 122728 80131D78 0276001A */       div $zero, $s3, $s6
  /* 12272C 80131D7C 00004010 */      mfhi $t0
  /* 122730 80131D80 00087080 */       sll $t6, $t0, 2
  /* 122734 80131D84 26F74A48 */     addiu $s7, $s7, %lo(D_ovl19_80134A48)
  /* 122738 80131D88 004EC821 */      addu $t9, $v0, $t6
  /* 12273C 80131D8C 8F2F0000 */        lw $t7, ($t9)
  /* 122740 80131D90 8EF80000 */        lw $t8, ($s7) # D_ovl19_80134A48 + 0
  /* 122744 80131D94 03C02025 */        or $a0, $fp, $zero
  /* 122748 80131D98 16C00002 */      bnez $s6, .L80131DA4
  /* 12274C 80131D9C 00000000 */       nop
  /* 122750 80131DA0 0007000D */     break 7
  .L80131DA4:
  /* 122754 80131DA4 2401FFFF */     addiu $at, $zero, -1
  /* 122758 80131DA8 16C10004 */       bne $s6, $at, .L80131DBC
  /* 12275C 80131DAC 3C018000 */       lui $at, 0x8000
  /* 122760 80131DB0 16610002 */       bne $s3, $at, .L80131DBC
  /* 122764 80131DB4 00000000 */       nop
  /* 122768 80131DB8 0006000D */     break 6
  .L80131DBC:
  /* 12276C 80131DBC 01F82821 */      addu $a1, $t7, $t8
  /* 122770 80131DC0 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122774 80131DC4 00000000 */       nop
  /* 122778 80131DC8 8FB400D0 */        lw $s4, 0xd0($sp)
  /* 12277C 80131DCC 00408025 */        or $s0, $v0, $zero
  /* 122780 80131DD0 00402025 */        or $a0, $v0, $zero
  /* 122784 80131DD4 0C04C6F1 */       jal mnVSSetTextureColors
  /* 122788 80131DD8 02802825 */        or $a1, $s4, $zero
  /* 12278C 80131DDC 3C014130 */       lui $at, (0x41300000 >> 16) # 11.0
  /* 122790 80131DE0 4481B000 */      mtc1 $at, $f22 # 11.0 to cop1
  /* 122794 80131DE4 C7A400C8 */      lwc1 $f4, 0xc8($sp)
  /* 122798 80131DE8 8FB500D8 */        lw $s5, 0xd8($sp)
  /* 12279C 80131DEC E618005C */      swc1 $f24, 0x5c($s0)
  /* 1227A0 80131DF0 46162501 */     sub.s $f20, $f4, $f22
  /* 1227A4 80131DF4 24110001 */     addiu $s1, $zero, 1
  /* 1227A8 80131DF8 12A00004 */      beqz $s5, .L80131E0C
  /* 1227AC 80131DFC E6140058 */      swc1 $f20, 0x58($s0)
  /* 1227B0 80131E00 8FB200D4 */        lw $s2, 0xd4($sp)
  /* 1227B4 80131E04 10000006 */         b .L80131E20
  /* 1227B8 80131E08 02401825 */        or $v1, $s2, $zero
  .L80131E0C:
  /* 1227BC 80131E0C 8FB200D4 */        lw $s2, 0xd4($sp)
  /* 1227C0 80131E10 02602025 */        or $a0, $s3, $zero
  /* 1227C4 80131E14 0C04C6FD */       jal mnVSGetNumberOfDigits
  /* 1227C8 80131E18 02402825 */        or $a1, $s2, $zero
  /* 1227CC 80131E1C 00401825 */        or $v1, $v0, $zero
  .L80131E20:
  /* 1227D0 80131E20 28610002 */      slti $at, $v1, 2
  /* 1227D4 80131E24 1420003A */      bnez $at, .L80131F10
  /* 1227D8 80131E28 02C02025 */        or $a0, $s6, $zero
  .L80131E2C:
  /* 1227DC 80131E2C 0C04C6C9 */       jal mnVSPow
  /* 1227E0 80131E30 02202825 */        or $a1, $s1, $zero
  /* 1227E4 80131E34 10400011 */      beqz $v0, .L80131E7C
  /* 1227E8 80131E38 00001825 */        or $v1, $zero, $zero
  /* 1227EC 80131E3C 02C02025 */        or $a0, $s6, $zero
  /* 1227F0 80131E40 0C04C6C9 */       jal mnVSPow
  /* 1227F4 80131E44 02202825 */        or $a1, $s1, $zero
  /* 1227F8 80131E48 0262001A */       div $zero, $s3, $v0
  /* 1227FC 80131E4C 00001812 */      mflo $v1
  /* 122800 80131E50 14400002 */      bnez $v0, .L80131E5C
  /* 122804 80131E54 00000000 */       nop
  /* 122808 80131E58 0007000D */     break 7
  .L80131E5C:
  /* 12280C 80131E5C 2401FFFF */     addiu $at, $zero, -1
  /* 122810 80131E60 14410004 */       bne $v0, $at, .L80131E74
  /* 122814 80131E64 3C018000 */       lui $at, 0x8000
  /* 122818 80131E68 16610002 */       bne $s3, $at, .L80131E74
  /* 12281C 80131E6C 00000000 */       nop
  /* 122820 80131E70 0006000D */     break 6
  .L80131E74:
  /* 122824 80131E74 10000001 */         b .L80131E7C
  /* 122828 80131E78 00000000 */       nop
  .L80131E7C:
  /* 12282C 80131E7C 0076001A */       div $zero, $v1, $s6
  /* 122830 80131E80 00006810 */      mfhi $t5
  /* 122834 80131E84 000D5080 */       sll $t2, $t5, 2
  /* 122838 80131E88 03AA4821 */      addu $t1, $sp, $t2
  /* 12283C 80131E8C 8D290098 */        lw $t1, 0x98($t1)
  /* 122840 80131E90 8EEB0000 */        lw $t3, ($s7) # D_ovl19_80134A48 + 0
  /* 122844 80131E94 03C02025 */        or $a0, $fp, $zero
  /* 122848 80131E98 16C00002 */      bnez $s6, .L80131EA4
  /* 12284C 80131E9C 00000000 */       nop
  /* 122850 80131EA0 0007000D */     break 7
  .L80131EA4:
  /* 122854 80131EA4 2401FFFF */     addiu $at, $zero, -1
  /* 122858 80131EA8 16C10004 */       bne $s6, $at, .L80131EBC
  /* 12285C 80131EAC 3C018000 */       lui $at, 0x8000
  /* 122860 80131EB0 14610002 */       bne $v1, $at, .L80131EBC
  /* 122864 80131EB4 00000000 */       nop
  /* 122868 80131EB8 0006000D */     break 6
  .L80131EBC:
  /* 12286C 80131EBC 012B2821 */      addu $a1, $t1, $t3
  /* 122870 80131EC0 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122874 80131EC4 00000000 */       nop
  /* 122878 80131EC8 00408025 */        or $s0, $v0, $zero
  /* 12287C 80131ECC 00402025 */        or $a0, $v0, $zero
  /* 122880 80131ED0 0C04C6F1 */       jal mnVSSetTextureColors
  /* 122884 80131ED4 02802825 */        or $a1, $s4, $zero
  /* 122888 80131ED8 4616A501 */     sub.s $f20, $f20, $f22
  /* 12288C 80131EDC 26310001 */     addiu $s1, $s1, 1
  /* 122890 80131EE0 E618005C */      swc1 $f24, 0x5c($s0)
  /* 122894 80131EE4 12A00003 */      beqz $s5, .L80131EF4
  /* 122898 80131EE8 E6140058 */      swc1 $f20, 0x58($s0)
  /* 12289C 80131EEC 10000005 */         b .L80131F04
  /* 1228A0 80131EF0 02401825 */        or $v1, $s2, $zero
  .L80131EF4:
  /* 1228A4 80131EF4 02602025 */        or $a0, $s3, $zero
  /* 1228A8 80131EF8 0C04C6FD */       jal mnVSGetNumberOfDigits
  /* 1228AC 80131EFC 02402825 */        or $a1, $s2, $zero
  /* 1228B0 80131F00 00401825 */        or $v1, $v0, $zero
  .L80131F04:
  /* 1228B4 80131F04 0223082A */       slt $at, $s1, $v1
  /* 1228B8 80131F08 5420FFC8 */      bnel $at, $zero, .L80131E2C
  /* 1228BC 80131F0C 02C02025 */        or $a0, $s6, $zero
  .L80131F10:
  /* 1228C0 80131F10 8FBF0054 */        lw $ra, 0x54($sp)
  /* 1228C4 80131F14 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 1228C8 80131F18 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 1228CC 80131F1C D7B80028 */      ldc1 $f24, 0x28($sp)
  /* 1228D0 80131F20 8FB00030 */        lw $s0, 0x30($sp)
  /* 1228D4 80131F24 8FB10034 */        lw $s1, 0x34($sp)
  /* 1228D8 80131F28 8FB20038 */        lw $s2, 0x38($sp)
  /* 1228DC 80131F2C 8FB3003C */        lw $s3, 0x3c($sp)
  /* 1228E0 80131F30 8FB40040 */        lw $s4, 0x40($sp)
  /* 1228E4 80131F34 8FB50044 */        lw $s5, 0x44($sp)
  /* 1228E8 80131F38 8FB60048 */        lw $s6, 0x48($sp)
  /* 1228EC 80131F3C 8FB7004C */        lw $s7, 0x4c($sp)
  /* 1228F0 80131F40 8FBE0050 */        lw $fp, 0x50($sp)
  /* 1228F4 80131F44 03E00008 */        jr $ra
  /* 1228F8 80131F48 27BD00C0 */     addiu $sp, $sp, 0xc0

glabel mnVSUpdateButton
  /* 1228FC 80131F4C 3C0E8013 */       lui $t6, %hi(dMNVSButtonColorsSelected)
  /* 122900 80131F50 25CE4848 */     addiu $t6, $t6, %lo(dMNVSButtonColorsSelected)
  /* 122904 80131F54 8DD80000 */        lw $t8, ($t6) # dMNVSButtonColorsSelected + 0
  /* 122908 80131F58 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 12290C 80131F5C 27A30020 */     addiu $v1, $sp, 0x20
  /* 122910 80131F60 AC780000 */        sw $t8, ($v1)
  /* 122914 80131F64 95D80004 */       lhu $t8, 4($t6) # dMNVSButtonColorsSelected + 4
  /* 122918 80131F68 3C198013 */       lui $t9, %hi(dMNVSButtonColorsHighlighted)
  /* 12291C 80131F6C 27394850 */     addiu $t9, $t9, %lo(dMNVSButtonColorsHighlighted)
  /* 122920 80131F70 A4780004 */        sh $t8, 4($v1)
  /* 122924 80131F74 8F290000 */        lw $t1, ($t9) # dMNVSButtonColorsHighlighted + 0
  /* 122928 80131F78 27A60018 */     addiu $a2, $sp, 0x18
  /* 12292C 80131F7C 3C0A8013 */       lui $t2, %hi(dMNVSButtonColorsDefault)
  /* 122930 80131F80 ACC90000 */        sw $t1, ($a2)
  /* 122934 80131F84 97290004 */       lhu $t1, 4($t9) # dMNVSButtonColorsHighlighted + 4
  /* 122938 80131F88 254A4858 */     addiu $t2, $t2, %lo(dMNVSButtonColorsDefault)
  /* 12293C 80131F8C 27A70010 */     addiu $a3, $sp, 0x10
  /* 122940 80131F90 A4C90004 */        sh $t1, 4($a2)
  /* 122944 80131F94 8D4C0000 */        lw $t4, ($t2) # dMNVSButtonColorsDefault + 0
  /* 122948 80131F98 24010001 */     addiu $at, $zero, 1
  /* 12294C 80131F9C ACEC0000 */        sw $t4, ($a3)
  /* 122950 80131FA0 954C0004 */       lhu $t4, 4($t2) # dMNVSButtonColorsDefault + 4
  /* 122954 80131FA4 10A00009 */      beqz $a1, .L80131FCC
  /* 122958 80131FA8 A4EC0004 */        sh $t4, 4($a3)
  /* 12295C 80131FAC 10A10005 */       beq $a1, $at, .L80131FC4
  /* 122960 80131FB0 24010002 */     addiu $at, $zero, 2
  /* 122964 80131FB4 10A10007 */       beq $a1, $at, .L80131FD4
  /* 122968 80131FB8 00601025 */        or $v0, $v1, $zero
  /* 12296C 80131FBC 10000005 */         b .L80131FD4
  /* 122970 80131FC0 8FA2000C */        lw $v0, 0xc($sp)
  .L80131FC4:
  /* 122974 80131FC4 10000003 */         b .L80131FD4
  /* 122978 80131FC8 00C01025 */        or $v0, $a2, $zero
  .L80131FCC:
  /* 12297C 80131FCC 10000001 */         b .L80131FD4
  /* 122980 80131FD0 00E01025 */        or $v0, $a3, $zero
  .L80131FD4:
  /* 122984 80131FD4 8C830074 */        lw $v1, 0x74($a0)
  /* 122988 80131FD8 24040003 */     addiu $a0, $zero, 3
  /* 12298C 80131FDC 00002825 */        or $a1, $zero, $zero
  .L80131FE0:
  /* 122990 80131FE0 904D0000 */       lbu $t5, ($v0)
  /* 122994 80131FE4 24A50001 */     addiu $a1, $a1, 1
  /* 122998 80131FE8 A06D0060 */        sb $t5, 0x60($v1)
  /* 12299C 80131FEC 904E0001 */       lbu $t6, 1($v0)
  /* 1229A0 80131FF0 A06E0061 */        sb $t6, 0x61($v1)
  /* 1229A4 80131FF4 904F0002 */       lbu $t7, 2($v0)
  /* 1229A8 80131FF8 A06F0062 */        sb $t7, 0x62($v1)
  /* 1229AC 80131FFC 90580003 */       lbu $t8, 3($v0)
  /* 1229B0 80132000 A0780028 */        sb $t8, 0x28($v1)
  /* 1229B4 80132004 90590004 */       lbu $t9, 4($v0)
  /* 1229B8 80132008 A0790029 */        sb $t9, 0x29($v1)
  /* 1229BC 8013200C 90480005 */       lbu $t0, 5($v0)
  /* 1229C0 80132010 A068002A */        sb $t0, 0x2a($v1)
  /* 1229C4 80132014 14A4FFF2 */       bne $a1, $a0, .L80131FE0
  /* 1229C8 80132018 8C630008 */        lw $v1, 8($v1)
  /* 1229CC 8013201C 03E00008 */        jr $ra
  /* 1229D0 80132020 27BD0028 */     addiu $sp, $sp, 0x28

glabel mnVSCreateButton
  /* 1229D4 80132024 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1229D8 80132028 3C0E8013 */       lui $t6, %hi(D_ovl19_80134A48)
  /* 1229DC 8013202C 8DCE4A48 */        lw $t6, %lo(D_ovl19_80134A48)($t6)
  /* 1229E0 80132030 3C0F0000 */       lui $t7, %hi(D_NF_000001E8)
  /* 1229E4 80132034 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1229E8 80132038 AFA5002C */        sw $a1, 0x2c($sp)
  /* 1229EC 8013203C 25EF01E8 */     addiu $t7, $t7, %lo(D_NF_000001E8)
  /* 1229F0 80132040 AFA40028 */        sw $a0, 0x28($sp)
  /* 1229F4 80132044 AFA60030 */        sw $a2, 0x30($sp)
  /* 1229F8 80132048 AFA70034 */        sw $a3, 0x34($sp)
  /* 1229FC 8013204C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122A00 80132050 01CF2821 */      addu $a1, $t6, $t7
  /* 122A04 80132054 94580024 */       lhu $t8, 0x24($v0)
  /* 122A08 80132058 3C0A8013 */       lui $t2, %hi(D_ovl19_80134A48)
  /* 122A0C 8013205C 3C0B0000 */       lui $t3, %hi(D_NF_00000330)
  /* 122A10 80132060 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 122A14 80132064 A4480024 */        sh $t0, 0x24($v0)
  /* 122A18 80132068 35090001 */       ori $t1, $t0, 1
  /* 122A1C 8013206C A4490024 */        sh $t1, 0x24($v0)
  /* 122A20 80132070 C7A4002C */      lwc1 $f4, 0x2c($sp)
  /* 122A24 80132074 256B0330 */     addiu $t3, $t3, %lo(D_NF_00000330)
  /* 122A28 80132078 E4440058 */      swc1 $f4, 0x58($v0)
  /* 122A2C 8013207C C7A60030 */      lwc1 $f6, 0x30($sp)
  /* 122A30 80132080 E446005C */      swc1 $f6, 0x5c($v0)
  /* 122A34 80132084 8D4A4A48 */        lw $t2, %lo(D_ovl19_80134A48)($t2)
  /* 122A38 80132088 8FA40028 */        lw $a0, 0x28($sp)
  /* 122A3C 8013208C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122A40 80132090 014B2821 */      addu $a1, $t2, $t3
  /* 122A44 80132094 944C0024 */       lhu $t4, 0x24($v0)
  /* 122A48 80132098 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 122A4C 8013209C 44815000 */      mtc1 $at, $f10 # 16.0 to cop1
  /* 122A50 801320A0 318EFFDF */      andi $t6, $t4, 0xffdf
  /* 122A54 801320A4 A44E0024 */        sh $t6, 0x24($v0)
  /* 122A58 801320A8 35CF0001 */       ori $t7, $t6, 1
  /* 122A5C 801320AC A44F0024 */        sh $t7, 0x24($v0)
  /* 122A60 801320B0 C7A8002C */      lwc1 $f8, 0x2c($sp)
  /* 122A64 801320B4 24180004 */     addiu $t8, $zero, 4
  /* 122A68 801320B8 2419001D */     addiu $t9, $zero, 0x1d
  /* 122A6C 801320BC 460A4000 */     add.s $f0, $f8, $f10
  /* 122A70 801320C0 3C088013 */       lui $t0, %hi(D_ovl19_80134A48)
  /* 122A74 801320C4 3C090000 */       lui $t1, %hi(D_NF_00000568)
  /* 122A78 801320C8 25290568 */     addiu $t1, $t1, %lo(D_NF_00000568)
  /* 122A7C 801320CC E4400058 */      swc1 $f0, 0x58($v0)
  /* 122A80 801320D0 C7B00030 */      lwc1 $f16, 0x30($sp)
  /* 122A84 801320D4 A0400065 */        sb $zero, 0x65($v0)
  /* 122A88 801320D8 A0400064 */        sb $zero, 0x64($v0)
  /* 122A8C 801320DC A0580067 */        sb $t8, 0x67($v0)
  /* 122A90 801320E0 A0400066 */        sb $zero, 0x66($v0)
  /* 122A94 801320E4 E450005C */      swc1 $f16, 0x5c($v0)
  /* 122A98 801320E8 8FA30034 */        lw $v1, 0x34($sp)
  /* 122A9C 801320EC A459006A */        sh $t9, 0x6a($v0)
  /* 122AA0 801320F0 000318C0 */       sll $v1, $v1, 3
  /* 122AA4 801320F4 A4430068 */        sh $v1, 0x68($v0)
  /* 122AA8 801320F8 8D084A48 */        lw $t0, %lo(D_ovl19_80134A48)($t0)
  /* 122AAC 801320FC E7A00020 */      swc1 $f0, 0x20($sp)
  /* 122AB0 80132100 AFA3001C */        sw $v1, 0x1c($sp)
  /* 122AB4 80132104 8FA40028 */        lw $a0, 0x28($sp)
  /* 122AB8 80132108 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122ABC 8013210C 01092821 */      addu $a1, $t0, $t1
  /* 122AC0 80132110 8FA3001C */        lw $v1, 0x1c($sp)
  /* 122AC4 80132114 C7A00020 */      lwc1 $f0, 0x20($sp)
  /* 122AC8 80132118 944A0024 */       lhu $t2, 0x24($v0)
  /* 122ACC 8013211C 44839000 */      mtc1 $v1, $f18
  /* 122AD0 80132120 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 122AD4 80132124 46809120 */   cvt.s.w $f4, $f18
  /* 122AD8 80132128 A44C0024 */        sh $t4, 0x24($v0)
  /* 122ADC 8013212C 358D0001 */       ori $t5, $t4, 1
  /* 122AE0 80132130 A44D0024 */        sh $t5, 0x24($v0)
  /* 122AE4 80132134 46040180 */     add.s $f6, $f0, $f4
  /* 122AE8 80132138 E4460058 */      swc1 $f6, 0x58($v0)
  /* 122AEC 8013213C C7A80030 */      lwc1 $f8, 0x30($sp)
  /* 122AF0 80132140 E448005C */      swc1 $f8, 0x5c($v0)
  /* 122AF4 80132144 8FBF0014 */        lw $ra, 0x14($sp)
  /* 122AF8 80132148 27BD0028 */     addiu $sp, $sp, 0x28
  /* 122AFC 8013214C 03E00008 */        jr $ra
  /* 122B00 80132150 00000000 */       nop

glabel mnVSCreateVSStartButton
  /* 122B04 80132154 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 122B08 80132158 AFBF001C */        sw $ra, 0x1c($sp)
  /* 122B0C 8013215C 00002025 */        or $a0, $zero, $zero
  /* 122B10 80132160 00002825 */        or $a1, $zero, $zero
  /* 122B14 80132164 24060004 */     addiu $a2, $zero, 4
  /* 122B18 80132168 0C00265A */       jal omMakeGObjSPAfter
  /* 122B1C 8013216C 3C078000 */       lui $a3, 0x8000
  /* 122B20 80132170 3C018013 */       lui $at, %hi(gMNVSButtonGObjVSStart)
  /* 122B24 80132174 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 122B28 80132178 240EFFFF */     addiu $t6, $zero, -1
  /* 122B2C 8013217C AC224930 */        sw $v0, %lo(gMNVSButtonGObjVSStart)($at)
  /* 122B30 80132180 AFA20024 */        sw $v0, 0x24($sp)
  /* 122B34 80132184 AFAE0010 */        sw $t6, 0x10($sp)
  /* 122B38 80132188 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 122B3C 8013218C 00402025 */        or $a0, $v0, $zero
  /* 122B40 80132190 24060002 */     addiu $a2, $zero, 2
  /* 122B44 80132194 0C00277D */       jal omAddGObjRenderProc
  /* 122B48 80132198 3C078000 */       lui $a3, 0x8000
  /* 122B4C 8013219C 8FA40024 */        lw $a0, 0x24($sp)
  /* 122B50 801321A0 3C0542F0 */       lui $a1, 0x42f0
  /* 122B54 801321A4 3C0641F8 */       lui $a2, 0x41f8
  /* 122B58 801321A8 0C04C809 */       jal mnVSCreateButton
  /* 122B5C 801321AC 24070011 */     addiu $a3, $zero, 0x11
  /* 122B60 801321B0 3C0F8013 */       lui $t7, %hi(gMNVSCursorIndex)
  /* 122B64 801321B4 8DEF4948 */        lw $t7, %lo(gMNVSCursorIndex)($t7)
  /* 122B68 801321B8 00002825 */        or $a1, $zero, $zero
  /* 122B6C 801321BC 15E00003 */      bnez $t7, .L801321CC
  /* 122B70 801321C0 00000000 */       nop
  /* 122B74 801321C4 10000001 */         b .L801321CC
  /* 122B78 801321C8 24050001 */     addiu $a1, $zero, 1
  .L801321CC:
  /* 122B7C 801321CC 0C04C7D3 */       jal mnVSUpdateButton
  /* 122B80 801321D0 8FA40024 */        lw $a0, 0x24($sp)
  /* 122B84 801321D4 3C188013 */       lui $t8, %hi(D_ovl19_80134A4C)
  /* 122B88 801321D8 8F184A4C */        lw $t8, %lo(D_ovl19_80134A4C)($t8)
  /* 122B8C 801321DC 3C190000 */       lui $t9, %hi(D_NF_000024C8)
  /* 122B90 801321E0 273924C8 */     addiu $t9, $t9, %lo(D_NF_000024C8)
  /* 122B94 801321E4 8FA40024 */        lw $a0, 0x24($sp)
  /* 122B98 801321E8 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122B9C 801321EC 03192821 */      addu $a1, $t8, $t9
  /* 122BA0 801321F0 94480024 */       lhu $t0, 0x24($v0)
  /* 122BA4 801321F4 3C014319 */       lui $at, (0x43190000 >> 16) # 153.0
  /* 122BA8 801321F8 44812000 */      mtc1 $at, $f4 # 153.0 to cop1
  /* 122BAC 801321FC 3C014210 */       lui $at, (0x42100000 >> 16) # 36.0
  /* 122BB0 80132200 44813000 */      mtc1 $at, $f6 # 36.0 to cop1
  /* 122BB4 80132204 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 122BB8 80132208 A44A0024 */        sh $t2, 0x24($v0)
  /* 122BBC 8013220C 354B0001 */       ori $t3, $t2, 1
  /* 122BC0 80132210 A44B0024 */        sh $t3, 0x24($v0)
  /* 122BC4 80132214 A0400028 */        sb $zero, 0x28($v0)
  /* 122BC8 80132218 A0400029 */        sb $zero, 0x29($v0)
  /* 122BCC 8013221C A040002A */        sb $zero, 0x2a($v0)
  /* 122BD0 80132220 E4440058 */      swc1 $f4, 0x58($v0)
  /* 122BD4 80132224 E446005C */      swc1 $f6, 0x5c($v0)
  /* 122BD8 80132228 8FBF001C */        lw $ra, 0x1c($sp)
  /* 122BDC 8013222C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 122BE0 80132230 03E00008 */        jr $ra
  /* 122BE4 80132234 00000000 */       nop

glabel mnVSCreateRuleValue
  /* 122BE8 80132238 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 122BEC 8013223C 3C0F8013 */       lui $t7, %hi(dMNVSRuleValueColor)
  /* 122BF0 80132240 AFBF0024 */        sw $ra, 0x24($sp)
  /* 122BF4 80132244 AFB00020 */        sw $s0, 0x20($sp)
  /* 122BF8 80132248 25EF4860 */     addiu $t7, $t7, %lo(dMNVSRuleValueColor)
  /* 122BFC 8013224C 99F90002 */       lwr $t9, 2($t7) # dMNVSRuleValueColor + 2
  /* 122C00 80132250 27AE002C */     addiu $t6, $sp, 0x2c
  /* 122C04 80132254 00002025 */        or $a0, $zero, $zero
  /* 122C08 80132258 00002825 */        or $a1, $zero, $zero
  /* 122C0C 8013225C 24060005 */     addiu $a2, $zero, 5
  /* 122C10 80132260 3C078000 */       lui $a3, 0x8000
  /* 122C14 80132264 0C00265A */       jal omMakeGObjSPAfter
  /* 122C18 80132268 B9D90002 */       swr $t9, 2($t6)
  /* 122C1C 8013226C 3C018013 */       lui $at, %hi(gMNVSRuleValueGObj)
  /* 122C20 80132270 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 122C24 80132274 2408FFFF */     addiu $t0, $zero, -1
  /* 122C28 80132278 AC224958 */        sw $v0, %lo(gMNVSRuleValueGObj)($at)
  /* 122C2C 8013227C 00408025 */        or $s0, $v0, $zero
  /* 122C30 80132280 AFA80010 */        sw $t0, 0x10($sp)
  /* 122C34 80132284 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 122C38 80132288 00402025 */        or $a0, $v0, $zero
  /* 122C3C 8013228C 24060003 */     addiu $a2, $zero, 3
  /* 122C40 80132290 0C00277D */       jal omAddGObjRenderProc
  /* 122C44 80132294 3C078000 */       lui $a3, 0x8000
  /* 122C48 80132298 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 122C4C 8013229C 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 122C50 801322A0 02002025 */        or $a0, $s0, $zero
  /* 122C54 801322A4 3C088013 */       lui $t0, 0x8013
  /* 122C58 801322A8 10400024 */      beqz $v0, .L8013233C
  /* 122C5C 801322AC 3C090000 */       lui $t1, 0
  /* 122C60 801322B0 24010001 */     addiu $at, $zero, 1
  /* 122C64 801322B4 10410009 */       beq $v0, $at, .L801322DC
  /* 122C68 801322B8 02002025 */        or $a0, $s0, $zero
  /* 122C6C 801322BC 24010002 */     addiu $at, $zero, 2
  /* 122C70 801322C0 10410064 */       beq $v0, $at, .L80132454
  /* 122C74 801322C4 02002025 */        or $a0, $s0, $zero
  /* 122C78 801322C8 24010003 */     addiu $at, $zero, 3
  /* 122C7C 801322CC 10410031 */       beq $v0, $at, .L80132394
  /* 122C80 801322D0 02002025 */        or $a0, $s0, $zero
  /* 122C84 801322D4 1000008F */         b .L80132514
  /* 122C88 801322D8 8FBF0024 */        lw $ra, 0x24($sp)
  .L801322DC:
  /* 122C8C 801322DC 3C098013 */       lui $t1, %hi(D_ovl19_80134A4C)
  /* 122C90 801322E0 8D294A4C */        lw $t1, %lo(D_ovl19_80134A4C)($t1)
  /* 122C94 801322E4 3C0A0000 */       lui $t2, %hi(D_NF_00002A80)
  /* 122C98 801322E8 254A2A80 */     addiu $t2, $t2, %lo(D_NF_00002A80)
  /* 122C9C 801322EC 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122CA0 801322F0 012A2821 */      addu $a1, $t1, $t2
  /* 122CA4 801322F4 944B0024 */       lhu $t3, 0x24($v0)
  /* 122CA8 801322F8 3C014337 */       lui $at, (0x43370000 >> 16) # 183.0
  /* 122CAC 801322FC 44812000 */      mtc1 $at, $f4 # 183.0 to cop1
  /* 122CB0 80132300 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122CB4 80132304 44813000 */      mtc1 $at, $f6 # 78.0 to cop1
  /* 122CB8 80132308 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 122CBC 8013230C A44D0024 */        sh $t5, 0x24($v0)
  /* 122CC0 80132310 35AE0001 */       ori $t6, $t5, 1
  /* 122CC4 80132314 A44E0024 */        sh $t6, 0x24($v0)
  /* 122CC8 80132318 E4440058 */      swc1 $f4, 0x58($v0)
  /* 122CCC 8013231C E446005C */      swc1 $f6, 0x5c($v0)
  /* 122CD0 80132320 93AF002C */       lbu $t7, 0x2c($sp)
  /* 122CD4 80132324 A04F0028 */        sb $t7, 0x28($v0)
  /* 122CD8 80132328 93B8002D */       lbu $t8, 0x2d($sp)
  /* 122CDC 8013232C A0580029 */        sb $t8, 0x29($v0)
  /* 122CE0 80132330 93B9002E */       lbu $t9, 0x2e($sp)
  /* 122CE4 80132334 10000076 */         b .L80132510
  /* 122CE8 80132338 A059002A */        sb $t9, 0x2a($v0)
  .L8013233C:
  /* 122CEC 8013233C 8D084A4C */        lw $t0, 0x4a4c($t0)
  /* 122CF0 80132340 252928E0 */     addiu $t1, $t1, 0x28e0
  /* 122CF4 80132344 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122CF8 80132348 01092821 */      addu $a1, $t0, $t1
  /* 122CFC 8013234C 944A0024 */       lhu $t2, 0x24($v0)
  /* 122D00 80132350 3C01433B */       lui $at, (0x433B0000 >> 16) # 187.0
  /* 122D04 80132354 44814000 */      mtc1 $at, $f8 # 187.0 to cop1
  /* 122D08 80132358 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122D0C 8013235C 44815000 */      mtc1 $at, $f10 # 78.0 to cop1
  /* 122D10 80132360 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 122D14 80132364 A44C0024 */        sh $t4, 0x24($v0)
  /* 122D18 80132368 358D0001 */       ori $t5, $t4, 1
  /* 122D1C 8013236C A44D0024 */        sh $t5, 0x24($v0)
  /* 122D20 80132370 E4480058 */      swc1 $f8, 0x58($v0)
  /* 122D24 80132374 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 122D28 80132378 93AE002C */       lbu $t6, 0x2c($sp)
  /* 122D2C 8013237C A04E0028 */        sb $t6, 0x28($v0)
  /* 122D30 80132380 93AF002D */       lbu $t7, 0x2d($sp)
  /* 122D34 80132384 A04F0029 */        sb $t7, 0x29($v0)
  /* 122D38 80132388 93B8002E */       lbu $t8, 0x2e($sp)
  /* 122D3C 8013238C 10000060 */         b .L80132510
  /* 122D40 80132390 A058002A */        sb $t8, 0x2a($v0)
  .L80132394:
  /* 122D44 80132394 3C198013 */       lui $t9, %hi(D_ovl19_80134A4C)
  /* 122D48 80132398 8F394A4C */        lw $t9, %lo(D_ovl19_80134A4C)($t9)
  /* 122D4C 8013239C 3C080000 */       lui $t0, %hi(D_NF_00002A80)
  /* 122D50 801323A0 25082A80 */     addiu $t0, $t0, %lo(D_NF_00002A80)
  /* 122D54 801323A4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122D58 801323A8 03282821 */      addu $a1, $t9, $t0
  /* 122D5C 801323AC 94490024 */       lhu $t1, 0x24($v0)
  /* 122D60 801323B0 3C014325 */       lui $at, (0x43250000 >> 16) # 165.0
  /* 122D64 801323B4 44818000 */      mtc1 $at, $f16 # 165.0 to cop1
  /* 122D68 801323B8 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122D6C 801323BC 44819000 */      mtc1 $at, $f18 # 78.0 to cop1
  /* 122D70 801323C0 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 122D74 801323C4 A44B0024 */        sh $t3, 0x24($v0)
  /* 122D78 801323C8 356C0001 */       ori $t4, $t3, 1
  /* 122D7C 801323CC A44C0024 */        sh $t4, 0x24($v0)
  /* 122D80 801323D0 E4500058 */      swc1 $f16, 0x58($v0)
  /* 122D84 801323D4 E452005C */      swc1 $f18, 0x5c($v0)
  /* 122D88 801323D8 93AD002C */       lbu $t5, 0x2c($sp)
  /* 122D8C 801323DC 3C188013 */       lui $t8, %hi(D_ovl19_80134A4C)
  /* 122D90 801323E0 3C190000 */       lui $t9, %hi(D_NF_00002C20)
  /* 122D94 801323E4 A04D0028 */        sb $t5, 0x28($v0)
  /* 122D98 801323E8 93AE002D */       lbu $t6, 0x2d($sp)
  /* 122D9C 801323EC 27392C20 */     addiu $t9, $t9, %lo(D_NF_00002C20)
  /* 122DA0 801323F0 02002025 */        or $a0, $s0, $zero
  /* 122DA4 801323F4 A04E0029 */        sb $t6, 0x29($v0)
  /* 122DA8 801323F8 93AF002E */       lbu $t7, 0x2e($sp)
  /* 122DAC 801323FC A04F002A */        sb $t7, 0x2a($v0)
  /* 122DB0 80132400 8F184A4C */        lw $t8, %lo(D_ovl19_80134A4C)($t8)
  /* 122DB4 80132404 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122DB8 80132408 03192821 */      addu $a1, $t8, $t9
  /* 122DBC 8013240C 94480024 */       lhu $t0, 0x24($v0)
  /* 122DC0 80132410 3C014354 */       lui $at, (0x43540000 >> 16) # 212.0
  /* 122DC4 80132414 44812000 */      mtc1 $at, $f4 # 212.0 to cop1
  /* 122DC8 80132418 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122DCC 8013241C 44813000 */      mtc1 $at, $f6 # 78.0 to cop1
  /* 122DD0 80132420 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 122DD4 80132424 A44A0024 */        sh $t2, 0x24($v0)
  /* 122DD8 80132428 354B0001 */       ori $t3, $t2, 1
  /* 122DDC 8013242C A44B0024 */        sh $t3, 0x24($v0)
  /* 122DE0 80132430 E4440058 */      swc1 $f4, 0x58($v0)
  /* 122DE4 80132434 E446005C */      swc1 $f6, 0x5c($v0)
  /* 122DE8 80132438 93AC002C */       lbu $t4, 0x2c($sp)
  /* 122DEC 8013243C A04C0028 */        sb $t4, 0x28($v0)
  /* 122DF0 80132440 93AD002D */       lbu $t5, 0x2d($sp)
  /* 122DF4 80132444 A04D0029 */        sb $t5, 0x29($v0)
  /* 122DF8 80132448 93AE002E */       lbu $t6, 0x2e($sp)
  /* 122DFC 8013244C 10000030 */         b .L80132510
  /* 122E00 80132450 A04E002A */        sb $t6, 0x2a($v0)
  .L80132454:
  /* 122E04 80132454 3C0F8013 */       lui $t7, %hi(D_ovl19_80134A4C)
  /* 122E08 80132458 8DEF4A4C */        lw $t7, %lo(D_ovl19_80134A4C)($t7)
  /* 122E0C 8013245C 3C180000 */       lui $t8, %hi(D_NF_000028E0)
  /* 122E10 80132460 271828E0 */     addiu $t8, $t8, %lo(D_NF_000028E0)
  /* 122E14 80132464 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122E18 80132468 01F82821 */      addu $a1, $t7, $t8
  /* 122E1C 8013246C 94590024 */       lhu $t9, 0x24($v0)
  /* 122E20 80132470 3C014328 */       lui $at, (0x43280000 >> 16) # 168.0
  /* 122E24 80132474 44814000 */      mtc1 $at, $f8 # 168.0 to cop1
  /* 122E28 80132478 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122E2C 8013247C 44815000 */      mtc1 $at, $f10 # 78.0 to cop1
  /* 122E30 80132480 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 122E34 80132484 A4490024 */        sh $t1, 0x24($v0)
  /* 122E38 80132488 352A0001 */       ori $t2, $t1, 1
  /* 122E3C 8013248C A44A0024 */        sh $t2, 0x24($v0)
  /* 122E40 80132490 E4480058 */      swc1 $f8, 0x58($v0)
  /* 122E44 80132494 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 122E48 80132498 93AB002C */       lbu $t3, 0x2c($sp)
  /* 122E4C 8013249C 3C0E8013 */       lui $t6, %hi(D_ovl19_80134A4C)
  /* 122E50 801324A0 3C0F0000 */       lui $t7, %hi(D_NF_00002C20)
  /* 122E54 801324A4 A04B0028 */        sb $t3, 0x28($v0)
  /* 122E58 801324A8 93AC002D */       lbu $t4, 0x2d($sp)
  /* 122E5C 801324AC 25EF2C20 */     addiu $t7, $t7, %lo(D_NF_00002C20)
  /* 122E60 801324B0 02002025 */        or $a0, $s0, $zero
  /* 122E64 801324B4 A04C0029 */        sb $t4, 0x29($v0)
  /* 122E68 801324B8 93AD002E */       lbu $t5, 0x2e($sp)
  /* 122E6C 801324BC A04D002A */        sb $t5, 0x2a($v0)
  /* 122E70 801324C0 8DCE4A4C */        lw $t6, %lo(D_ovl19_80134A4C)($t6)
  /* 122E74 801324C4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122E78 801324C8 01CF2821 */      addu $a1, $t6, $t7
  /* 122E7C 801324CC 94580024 */       lhu $t8, 0x24($v0)
  /* 122E80 801324D0 3C014354 */       lui $at, (0x43540000 >> 16) # 212.0
  /* 122E84 801324D4 44818000 */      mtc1 $at, $f16 # 212.0 to cop1
  /* 122E88 801324D8 3C01429C */       lui $at, (0x429C0000 >> 16) # 78.0
  /* 122E8C 801324DC 44819000 */      mtc1 $at, $f18 # 78.0 to cop1
  /* 122E90 801324E0 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 122E94 801324E4 A4480024 */        sh $t0, 0x24($v0)
  /* 122E98 801324E8 35090001 */       ori $t1, $t0, 1
  /* 122E9C 801324EC A4490024 */        sh $t1, 0x24($v0)
  /* 122EA0 801324F0 E4500058 */      swc1 $f16, 0x58($v0)
  /* 122EA4 801324F4 E452005C */      swc1 $f18, 0x5c($v0)
  /* 122EA8 801324F8 93AA002C */       lbu $t2, 0x2c($sp)
  /* 122EAC 801324FC A04A0028 */        sb $t2, 0x28($v0)
  /* 122EB0 80132500 93AB002D */       lbu $t3, 0x2d($sp)
  /* 122EB4 80132504 A04B0029 */        sb $t3, 0x29($v0)
  /* 122EB8 80132508 93AC002E */       lbu $t4, 0x2e($sp)
  /* 122EBC 8013250C A04C002A */        sb $t4, 0x2a($v0)
  .L80132510:
  /* 122EC0 80132510 8FBF0024 */        lw $ra, 0x24($sp)
  .L80132514:
  /* 122EC4 80132514 8FB00020 */        lw $s0, 0x20($sp)
  /* 122EC8 80132518 27BD0038 */     addiu $sp, $sp, 0x38
  /* 122ECC 8013251C 03E00008 */        jr $ra
  /* 122ED0 80132520 00000000 */       nop

glabel mnVSGetArrowSObj
  /* 122ED4 80132524 8C830074 */        lw $v1, 0x74($a0)
  /* 122ED8 80132528 00001025 */        or $v0, $zero, $zero
  /* 122EDC 8013252C 1060000E */      beqz $v1, .L80132568
  /* 122EE0 80132530 00000000 */       nop
  /* 122EE4 80132534 8C6E0054 */        lw $t6, 0x54($v1)
  /* 122EE8 80132538 54AE0004 */      bnel $a1, $t6, .L8013254C
  /* 122EEC 8013253C 8C640008 */        lw $a0, 8($v1)
  /* 122EF0 80132540 03E00008 */        jr $ra
  /* 122EF4 80132544 00601025 */        or $v0, $v1, $zero

  /* 122EF8 80132548 8C640008 */        lw $a0, 8($v1)
  .L8013254C:
  /* 122EFC 8013254C 10800006 */      beqz $a0, .L80132568
  /* 122F00 80132550 00000000 */       nop
  /* 122F04 80132554 8C8F0054 */        lw $t7, 0x54($a0)
  /* 122F08 80132558 14AF0003 */       bne $a1, $t7, .L80132568
  /* 122F0C 8013255C 00000000 */       nop
  /* 122F10 80132560 03E00008 */        jr $ra
  /* 122F14 80132564 00801025 */        or $v0, $a0, $zero

  .L80132568:
  /* 122F18 80132568 03E00008 */        jr $ra
  /* 122F1C 8013256C 00000000 */       nop

glabel mnVSCreateLeftArrow
  /* 122F20 80132570 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 122F24 80132574 3C0E8013 */       lui $t6, %hi(D_ovl19_80134A48)
  /* 122F28 80132578 8DCE4A48 */        lw $t6, %lo(D_ovl19_80134A48)($t6)
  /* 122F2C 8013257C 3C0F0001 */       lui $t7, %hi(D_NF_0000DE30)
  /* 122F30 80132580 AFBF0014 */        sw $ra, 0x14($sp)
  /* 122F34 80132584 AFA5001C */        sw $a1, 0x1c($sp)
  /* 122F38 80132588 25EFDE30 */     addiu $t7, $t7, %lo(D_NF_0000DE30)
  /* 122F3C 8013258C AFA60020 */        sw $a2, 0x20($sp)
  /* 122F40 80132590 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122F44 80132594 01CF2821 */      addu $a1, $t6, $t7
  /* 122F48 80132598 94580024 */       lhu $t8, 0x24($v0)
  /* 122F4C 8013259C AC400054 */        sw $zero, 0x54($v0)
  /* 122F50 801325A0 240A00FF */     addiu $t2, $zero, 0xff
  /* 122F54 801325A4 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 122F58 801325A8 A4480024 */        sh $t0, 0x24($v0)
  /* 122F5C 801325AC 35090001 */       ori $t1, $t0, 1
  /* 122F60 801325B0 A4490024 */        sh $t1, 0x24($v0)
  /* 122F64 801325B4 C7A4001C */      lwc1 $f4, 0x1c($sp)
  /* 122F68 801325B8 240B00AE */     addiu $t3, $zero, 0xae
  /* 122F6C 801325BC E4440058 */      swc1 $f4, 0x58($v0)
  /* 122F70 801325C0 C7A60020 */      lwc1 $f6, 0x20($sp)
  /* 122F74 801325C4 A04A0028 */        sb $t2, 0x28($v0)
  /* 122F78 801325C8 A04B0029 */        sb $t3, 0x29($v0)
  /* 122F7C 801325CC A040002A */        sb $zero, 0x2a($v0)
  /* 122F80 801325D0 E446005C */      swc1 $f6, 0x5c($v0)
  /* 122F84 801325D4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 122F88 801325D8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 122F8C 801325DC 03E00008 */        jr $ra
  /* 122F90 801325E0 00000000 */       nop

glabel mnVSCreateRightArrow
  /* 122F94 801325E4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 122F98 801325E8 3C0E8013 */       lui $t6, %hi(D_ovl19_80134A48)
  /* 122F9C 801325EC 8DCE4A48 */        lw $t6, %lo(D_ovl19_80134A48)($t6)
  /* 122FA0 801325F0 3C0F0001 */       lui $t7, %hi(D_NF_0000DD90)
  /* 122FA4 801325F4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 122FA8 801325F8 AFA5001C */        sw $a1, 0x1c($sp)
  /* 122FAC 801325FC 25EFDD90 */     addiu $t7, $t7, %lo(D_NF_0000DD90)
  /* 122FB0 80132600 AFA60020 */        sw $a2, 0x20($sp)
  /* 122FB4 80132604 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 122FB8 80132608 01CF2821 */      addu $a1, $t6, $t7
  /* 122FBC 8013260C 94590024 */       lhu $t9, 0x24($v0)
  /* 122FC0 80132610 24180001 */     addiu $t8, $zero, 1
  /* 122FC4 80132614 AC580054 */        sw $t8, 0x54($v0)
  /* 122FC8 80132618 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 122FCC 8013261C A4490024 */        sh $t1, 0x24($v0)
  /* 122FD0 80132620 352A0001 */       ori $t2, $t1, 1
  /* 122FD4 80132624 A44A0024 */        sh $t2, 0x24($v0)
  /* 122FD8 80132628 C7A4001C */      lwc1 $f4, 0x1c($sp)
  /* 122FDC 8013262C 240B00FF */     addiu $t3, $zero, 0xff
  /* 122FE0 80132630 240C00AE */     addiu $t4, $zero, 0xae
  /* 122FE4 80132634 E4440058 */      swc1 $f4, 0x58($v0)
  /* 122FE8 80132638 C7A60020 */      lwc1 $f6, 0x20($sp)
  /* 122FEC 8013263C A04B0028 */        sb $t3, 0x28($v0)
  /* 122FF0 80132640 A04C0029 */        sb $t4, 0x29($v0)
  /* 122FF4 80132644 A040002A */        sb $zero, 0x2a($v0)
  /* 122FF8 80132648 E446005C */      swc1 $f6, 0x5c($v0)
  /* 122FFC 8013264C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 123000 80132650 27BD0018 */     addiu $sp, $sp, 0x18
  /* 123004 80132654 03E00008 */        jr $ra
  /* 123008 80132658 00000000 */       nop

glabel mnVSAnimateRuleArrows
  /* 12300C 8013265C 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 123010 80132660 F7B80020 */      sdc1 $f24, 0x20($sp)
  /* 123014 80132664 3C014325 */       lui $at, (0x43250000 >> 16) # 165.0
  /* 123018 80132668 4481C000 */      mtc1 $at, $f24 # 165.0 to cop1
  /* 12301C 8013266C F7B60018 */      sdc1 $f22, 0x18($sp)
  /* 123020 80132670 3C01437A */       lui $at, (0x437A0000 >> 16) # 250.0
  /* 123024 80132674 4481B000 */      mtc1 $at, $f22 # 250.0 to cop1
  /* 123028 80132678 AFB50040 */        sw $s5, 0x40($sp)
  /* 12302C 8013267C AFB30038 */        sw $s3, 0x38($sp)
  /* 123030 80132680 AFB10030 */        sw $s1, 0x30($sp)
  /* 123034 80132684 F7B40010 */      sdc1 $f20, 0x10($sp)
  /* 123038 80132688 3C01428C */       lui $at, (0x428C0000 >> 16) # 70.0
  /* 12303C 8013268C AFB70048 */        sw $s7, 0x48($sp)
  /* 123040 80132690 AFB60044 */        sw $s6, 0x44($sp)
  /* 123044 80132694 AFB4003C */        sw $s4, 0x3c($sp)
  /* 123048 80132698 AFB20034 */        sw $s2, 0x34($sp)
  /* 12304C 8013269C AFB0002C */        sw $s0, 0x2c($sp)
  /* 123050 801326A0 3C118013 */       lui $s1, %hi(gMNVSRuleArrowBlinkTimer)
  /* 123054 801326A4 3C138013 */       lui $s3, %hi(gMNVSRule)
  /* 123058 801326A8 3C158013 */       lui $s5, %hi(gMNVSCursorIndex)
  /* 12305C 801326AC 4481A000 */      mtc1 $at, $f20 # 70.0 to cop1
  /* 123060 801326B0 00808025 */        or $s0, $a0, $zero
  /* 123064 801326B4 AFBF004C */        sw $ra, 0x4c($sp)
  /* 123068 801326B8 26B54948 */     addiu $s5, $s5, %lo(gMNVSCursorIndex)
  /* 12306C 801326BC 2673494C */     addiu $s3, $s3, %lo(gMNVSRule)
  /* 123070 801326C0 26314970 */     addiu $s1, $s1, %lo(gMNVSRuleArrowBlinkTimer)
  /* 123074 801326C4 24120001 */     addiu $s2, $zero, 1
  /* 123078 801326C8 24140001 */     addiu $s4, $zero, 1
  /* 12307C 801326CC 2416001E */     addiu $s6, $zero, 0x1e
  /* 123080 801326D0 24170003 */     addiu $s7, $zero, 3
  /* 123084 801326D4 8EAE0000 */        lw $t6, ($s5) # gMNVSCursorIndex + 0
  .L801326D8:
  /* 123088 801326D8 568E0039 */      bnel $s4, $t6, .L801327C0
  /* 12308C 801326DC AE12007C */        sw $s2, 0x7c($s0)
  /* 123090 801326E0 8E2F0000 */        lw $t7, ($s1) # gMNVSRuleArrowBlinkTimer + 0
  /* 123094 801326E4 00002825 */        or $a1, $zero, $zero
  /* 123098 801326E8 02002025 */        or $a0, $s0, $zero
  /* 12309C 801326EC 25F8FFFF */     addiu $t8, $t7, -1
  /* 1230A0 801326F0 17000008 */      bnez $t8, .L80132714
  /* 1230A4 801326F4 AE380000 */        sw $t8, ($s1) # gMNVSRuleArrowBlinkTimer + 0
  /* 1230A8 801326F8 8E08007C */        lw $t0, 0x7c($s0)
  /* 1230AC 801326FC 56480004 */      bnel $s2, $t0, .L80132710
  /* 1230B0 80132700 AE12007C */        sw $s2, 0x7c($s0)
  /* 1230B4 80132704 10000002 */         b .L80132710
  /* 1230B8 80132708 AE00007C */        sw $zero, 0x7c($s0)
  /* 1230BC 8013270C AE12007C */        sw $s2, 0x7c($s0)
  .L80132710:
  /* 1230C0 80132710 AE360000 */        sw $s6, ($s1) # gMNVSRuleArrowBlinkTimer + 0
  .L80132714:
  /* 1230C4 80132714 8E690000 */        lw $t1, ($s3) # gMNVSRule + 0
  /* 1230C8 80132718 15200009 */      bnez $t1, .L80132740
  /* 1230CC 8013271C 00000000 */       nop
  /* 1230D0 80132720 0C04C949 */       jal mnVSGetArrowSObj
  /* 1230D4 80132724 02002025 */        or $a0, $s0, $zero
  /* 1230D8 80132728 1040000D */      beqz $v0, .L80132760
  /* 1230DC 8013272C 00402025 */        or $a0, $v0, $zero
  /* 1230E0 80132730 0C0025BB */       jal omEjectSObj
  /* 1230E4 80132734 00000000 */       nop
  /* 1230E8 80132738 1000000A */         b .L80132764
  /* 1230EC 8013273C 8E6A0000 */        lw $t2, ($s3) # gMNVSRule + 0
  .L80132740:
  /* 1230F0 80132740 0C04C949 */       jal mnVSGetArrowSObj
  /* 1230F4 80132744 00002825 */        or $a1, $zero, $zero
  /* 1230F8 80132748 54400006 */      bnel $v0, $zero, .L80132764
  /* 1230FC 8013274C 8E6A0000 */        lw $t2, ($s3) # gMNVSRule + 0
  /* 123100 80132750 4405C000 */      mfc1 $a1, $f24
  /* 123104 80132754 4406A000 */      mfc1 $a2, $f20
  /* 123108 80132758 0C04C95C */       jal mnVSCreateLeftArrow
  /* 12310C 8013275C 02002025 */        or $a0, $s0, $zero
  .L80132760:
  /* 123110 80132760 8E6A0000 */        lw $t2, ($s3) # gMNVSRule + 0
  .L80132764:
  /* 123114 80132764 02802825 */        or $a1, $s4, $zero
  /* 123118 80132768 02002025 */        or $a0, $s0, $zero
  /* 12311C 8013276C 16EA0009 */       bne $s7, $t2, .L80132794
  /* 123120 80132770 00000000 */       nop
  /* 123124 80132774 0C04C949 */       jal mnVSGetArrowSObj
  /* 123128 80132778 02002025 */        or $a0, $s0, $zero
  /* 12312C 8013277C 10400010 */      beqz $v0, .L801327C0
  /* 123130 80132780 00402025 */        or $a0, $v0, $zero
  /* 123134 80132784 0C0025BB */       jal omEjectSObj
  /* 123138 80132788 00000000 */       nop
  /* 12313C 8013278C 1000000C */         b .L801327C0
  /* 123140 80132790 00000000 */       nop
  .L80132794:
  /* 123144 80132794 0C04C949 */       jal mnVSGetArrowSObj
  /* 123148 80132798 02802825 */        or $a1, $s4, $zero
  /* 12314C 8013279C 14400008 */      bnez $v0, .L801327C0
  /* 123150 801327A0 00000000 */       nop
  /* 123154 801327A4 4405B000 */      mfc1 $a1, $f22
  /* 123158 801327A8 4406A000 */      mfc1 $a2, $f20
  /* 12315C 801327AC 0C04C979 */       jal mnVSCreateRightArrow
  /* 123160 801327B0 02002025 */        or $a0, $s0, $zero
  /* 123164 801327B4 10000002 */         b .L801327C0
  /* 123168 801327B8 00000000 */       nop
  /* 12316C 801327BC AE12007C */        sw $s2, 0x7c($s0)
  .L801327C0:
  /* 123170 801327C0 0C002C7A */       jal gsStopCurrentProcess
  /* 123174 801327C4 02802025 */        or $a0, $s4, $zero
  /* 123178 801327C8 1000FFC3 */         b .L801326D8
  /* 12317C 801327CC 8EAE0000 */        lw $t6, ($s5) # gMNVSCursorIndex + 0
  /* 123180 801327D0 00000000 */       nop
  /* 123184 801327D4 00000000 */       nop
  /* 123188 801327D8 00000000 */       nop
  /* 12318C 801327DC 00000000 */       nop
# Maybe start of new file
  /* 123190 801327E0 8FBF004C */        lw $ra, 0x4c($sp)
  /* 123194 801327E4 D7B40010 */      ldc1 $f20, 0x10($sp)
  /* 123198 801327E8 D7B60018 */      ldc1 $f22, 0x18($sp)
  /* 12319C 801327EC D7B80020 */      ldc1 $f24, 0x20($sp)
  /* 1231A0 801327F0 8FB0002C */        lw $s0, 0x2c($sp)
  /* 1231A4 801327F4 8FB10030 */        lw $s1, 0x30($sp)
  /* 1231A8 801327F8 8FB20034 */        lw $s2, 0x34($sp)
  /* 1231AC 801327FC 8FB30038 */        lw $s3, 0x38($sp)
  /* 1231B0 80132800 8FB4003C */        lw $s4, 0x3c($sp)
  /* 1231B4 80132804 8FB50040 */        lw $s5, 0x40($sp)
  /* 1231B8 80132808 8FB60044 */        lw $s6, 0x44($sp)
  /* 1231BC 8013280C 8FB70048 */        lw $s7, 0x48($sp)
  /* 1231C0 80132810 03E00008 */        jr $ra
  /* 1231C4 80132814 27BD0050 */     addiu $sp, $sp, 0x50

glabel mnVSCreateRuleArrows
  /* 1231C8 80132818 3C048013 */       lui $a0, %hi(gMNVSRuleArrowsGObj)
  /* 1231CC 8013281C 8C844964 */        lw $a0, %lo(gMNVSRuleArrowsGObj)($a0)
  /* 1231D0 80132820 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1231D4 80132824 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1231D8 80132828 50800006 */      beql $a0, $zero, .L80132844
  /* 1231DC 8013282C 00002025 */        or $a0, $zero, $zero
  /* 1231E0 80132830 0C0026A1 */       jal omEjectGObj
  /* 1231E4 80132834 00000000 */       nop
  /* 1231E8 80132838 3C018013 */       lui $at, %hi(gMNVSRuleArrowsGObj)
  /* 1231EC 8013283C AC204964 */        sw $zero, %lo(gMNVSRuleArrowsGObj)($at)
  /* 1231F0 80132840 00002025 */        or $a0, $zero, $zero
  .L80132844:
  /* 1231F4 80132844 00002825 */        or $a1, $zero, $zero
  /* 1231F8 80132848 24060004 */     addiu $a2, $zero, 4
  /* 1231FC 8013284C 0C00265A */       jal omMakeGObjSPAfter
  /* 123200 80132850 3C078000 */       lui $a3, 0x8000
  /* 123204 80132854 3C018013 */       lui $at, %hi(gMNVSRuleArrowsGObj)
  /* 123208 80132858 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 12320C 8013285C 240EFFFF */     addiu $t6, $zero, -1
  /* 123210 80132860 AC224964 */        sw $v0, %lo(gMNVSRuleArrowsGObj)($at)
  /* 123214 80132864 AFA20024 */        sw $v0, 0x24($sp)
  /* 123218 80132868 AFAE0010 */        sw $t6, 0x10($sp)
  /* 12321C 8013286C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 123220 80132870 00402025 */        or $a0, $v0, $zero
  /* 123224 80132874 24060002 */     addiu $a2, $zero, 2
  /* 123228 80132878 0C00277D */       jal omAddGObjRenderProc
  /* 12322C 8013287C 3C078000 */       lui $a3, 0x8000
  /* 123230 80132880 3C058013 */       lui $a1, %hi(mnVSAnimateRuleArrows)
  /* 123234 80132884 24A5265C */     addiu $a1, $a1, %lo(mnVSAnimateRuleArrows)
  /* 123238 80132888 8FA40024 */        lw $a0, 0x24($sp)
  /* 12323C 8013288C 00003025 */        or $a2, $zero, $zero
  /* 123240 80132890 0C002062 */       jal omAddGObjCommonProc
  /* 123244 80132894 24070001 */     addiu $a3, $zero, 1
  /* 123248 80132898 8FBF001C */        lw $ra, 0x1c($sp)
  /* 12324C 8013289C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 123250 801328A0 03E00008 */        jr $ra
  /* 123254 801328A4 00000000 */       nop

glabel mnVSAnimateTimeStockArrows
  /* 123258 801328A8 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 12325C 801328AC AFB40024 */        sw $s4, 0x24($sp)
  /* 123260 801328B0 AFB10018 */        sw $s1, 0x18($sp)
  /* 123264 801328B4 AFB50028 */        sw $s5, 0x28($sp)
  /* 123268 801328B8 AFB30020 */        sw $s3, 0x20($sp)
  /* 12326C 801328BC AFB2001C */        sw $s2, 0x1c($sp)
  /* 123270 801328C0 AFB00014 */        sw $s0, 0x14($sp)
  /* 123274 801328C4 3C118013 */       lui $s1, %hi(gMNVSTimeStockArrowBlinkTimer)
  /* 123278 801328C8 3C148013 */       lui $s4, %hi(gMNVSCursorIndex)
  /* 12327C 801328CC 00808025 */        or $s0, $a0, $zero
  /* 123280 801328D0 AFBF002C */        sw $ra, 0x2c($sp)
  /* 123284 801328D4 26944948 */     addiu $s4, $s4, %lo(gMNVSCursorIndex)
  /* 123288 801328D8 2631496C */     addiu $s1, $s1, %lo(gMNVSTimeStockArrowBlinkTimer)
  /* 12328C 801328DC 24120001 */     addiu $s2, $zero, 1
  /* 123290 801328E0 24130002 */     addiu $s3, $zero, 2
  /* 123294 801328E4 2415001E */     addiu $s5, $zero, 0x1e
  /* 123298 801328E8 8E8E0000 */        lw $t6, ($s4) # gMNVSCursorIndex + 0
  .L801328EC:
  /* 12329C 801328EC 566E000E */      bnel $s3, $t6, .L80132928
  /* 1232A0 801328F0 AE12007C */        sw $s2, 0x7c($s0)
  /* 1232A4 801328F4 8E2F0000 */        lw $t7, ($s1) # gMNVSTimeStockArrowBlinkTimer + 0
  /* 1232A8 801328F8 25F8FFFF */     addiu $t8, $t7, -1
  /* 1232AC 801328FC 1700000A */      bnez $t8, .L80132928
  /* 1232B0 80132900 AE380000 */        sw $t8, ($s1) # gMNVSTimeStockArrowBlinkTimer + 0
  /* 1232B4 80132904 8E08007C */        lw $t0, 0x7c($s0)
  /* 1232B8 80132908 56480004 */      bnel $s2, $t0, .L8013291C
  /* 1232BC 8013290C AE12007C */        sw $s2, 0x7c($s0)
  /* 1232C0 80132910 10000002 */         b .L8013291C
  /* 1232C4 80132914 AE00007C */        sw $zero, 0x7c($s0)
  /* 1232C8 80132918 AE12007C */        sw $s2, 0x7c($s0)
  .L8013291C:
  /* 1232CC 8013291C 10000002 */         b .L80132928
  /* 1232D0 80132920 AE350000 */        sw $s5, ($s1) # gMNVSTimeStockArrowBlinkTimer + 0
  /* 1232D4 80132924 AE12007C */        sw $s2, 0x7c($s0)
  .L80132928:
  /* 1232D8 80132928 0C002C7A */       jal gsStopCurrentProcess
  /* 1232DC 8013292C 24040001 */     addiu $a0, $zero, 1
  /* 1232E0 80132930 1000FFEE */         b .L801328EC
  /* 1232E4 80132934 8E8E0000 */        lw $t6, ($s4) # gMNVSCursorIndex + 0
  /* 1232E8 80132938 00000000 */       nop
  /* 1232EC 8013293C 00000000 */       nop
# Maybe start of new file
  /* 1232F0 80132940 8FBF002C */        lw $ra, 0x2c($sp)
  /* 1232F4 80132944 8FB00014 */        lw $s0, 0x14($sp)
  /* 1232F8 80132948 8FB10018 */        lw $s1, 0x18($sp)
  /* 1232FC 8013294C 8FB2001C */        lw $s2, 0x1c($sp)
  /* 123300 80132950 8FB30020 */        lw $s3, 0x20($sp)
  /* 123304 80132954 8FB40024 */        lw $s4, 0x24($sp)
  /* 123308 80132958 8FB50028 */        lw $s5, 0x28($sp)
  /* 12330C 8013295C 03E00008 */        jr $ra
  /* 123310 80132960 27BD0030 */     addiu $sp, $sp, 0x30

glabel mnVSCreateTimeStockArrows
  /* 123314 80132964 3C048013 */       lui $a0, %hi(gMNVSTimeStockArrowsGObj)
  /* 123318 80132968 8C844968 */        lw $a0, %lo(gMNVSTimeStockArrowsGObj)($a0)
  /* 12331C 8013296C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 123320 80132970 AFBF0024 */        sw $ra, 0x24($sp)
  /* 123324 80132974 10800005 */      beqz $a0, .L8013298C
  /* 123328 80132978 AFB00020 */        sw $s0, 0x20($sp)
  /* 12332C 8013297C 0C0026A1 */       jal omEjectGObj
  /* 123330 80132980 00000000 */       nop
  /* 123334 80132984 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowsGObj)
  /* 123338 80132988 AC204968 */        sw $zero, %lo(gMNVSTimeStockArrowsGObj)($at)
  .L8013298C:
  /* 12333C 8013298C 00002025 */        or $a0, $zero, $zero
  /* 123340 80132990 00002825 */        or $a1, $zero, $zero
  /* 123344 80132994 24060004 */     addiu $a2, $zero, 4
  /* 123348 80132998 0C00265A */       jal omMakeGObjSPAfter
  /* 12334C 8013299C 3C078000 */       lui $a3, 0x8000
  /* 123350 801329A0 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowsGObj)
  /* 123354 801329A4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 123358 801329A8 240EFFFF */     addiu $t6, $zero, -1
  /* 12335C 801329AC AC224968 */        sw $v0, %lo(gMNVSTimeStockArrowsGObj)($at)
  /* 123360 801329B0 00408025 */        or $s0, $v0, $zero
  /* 123364 801329B4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 123368 801329B8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 12336C 801329BC 00402025 */        or $a0, $v0, $zero
  /* 123370 801329C0 24060002 */     addiu $a2, $zero, 2
  /* 123374 801329C4 0C00277D */       jal omAddGObjRenderProc
  /* 123378 801329C8 3C078000 */       lui $a3, 0x8000
  /* 12337C 801329CC 3C058013 */       lui $a1, %hi(mnVSAnimateTimeStockArrows)
  /* 123380 801329D0 24A528A8 */     addiu $a1, $a1, %lo(mnVSAnimateTimeStockArrows)
  /* 123384 801329D4 02002025 */        or $a0, $s0, $zero
  /* 123388 801329D8 00003025 */        or $a2, $zero, $zero
  /* 12338C 801329DC 0C002062 */       jal omAddGObjCommonProc
  /* 123390 801329E0 24070001 */     addiu $a3, $zero, 1
  /* 123394 801329E4 0C04CACE */       jal mnVSIsTime
  /* 123398 801329E8 00000000 */       nop
  /* 12339C 801329EC 1040000B */      beqz $v0, .L80132A1C
  /* 1233A0 801329F0 02002025 */        or $a0, $s0, $zero
  /* 1233A4 801329F4 02002025 */        or $a0, $s0, $zero
  /* 1233A8 801329F8 3C05431B */       lui $a1, 0x431b
  /* 1233AC 801329FC 0C04C95C */       jal mnVSCreateLeftArrow
  /* 1233B0 80132A00 3C0642DA */       lui $a2, 0x42da
  /* 1233B4 80132A04 02002025 */        or $a0, $s0, $zero
  /* 1233B8 80132A08 3C054366 */       lui $a1, 0x4366
  /* 1233BC 80132A0C 0C04C979 */       jal mnVSCreateRightArrow
  /* 1233C0 80132A10 3C0642DA */       lui $a2, 0x42da
  /* 1233C4 80132A14 10000009 */         b .L80132A3C
  /* 1233C8 80132A18 8FBF0024 */        lw $ra, 0x24($sp)
  .L80132A1C:
  /* 1233CC 80132A1C 3C054325 */       lui $a1, 0x4325
  /* 1233D0 80132A20 0C04C95C */       jal mnVSCreateLeftArrow
  /* 1233D4 80132A24 3C0642DA */       lui $a2, 0x42da
  /* 1233D8 80132A28 02002025 */        or $a0, $s0, $zero
  /* 1233DC 80132A2C 3C054366 */       lui $a1, 0x4366
  /* 1233E0 80132A30 0C04C979 */       jal mnVSCreateRightArrow
  /* 1233E4 80132A34 3C0642DA */       lui $a2, 0x42da
  /* 1233E8 80132A38 8FBF0024 */        lw $ra, 0x24($sp)
  .L80132A3C:
  /* 1233EC 80132A3C 8FB00020 */        lw $s0, 0x20($sp)
  /* 1233F0 80132A40 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1233F4 80132A44 03E00008 */        jr $ra
  /* 1233F8 80132A48 00000000 */       nop

glabel mnVSCreateRuleButton
  /* 1233FC 80132A4C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 123400 80132A50 AFBF001C */        sw $ra, 0x1c($sp)
  /* 123404 80132A54 00002025 */        or $a0, $zero, $zero
  /* 123408 80132A58 00002825 */        or $a1, $zero, $zero
  /* 12340C 80132A5C 24060004 */     addiu $a2, $zero, 4
  /* 123410 80132A60 0C00265A */       jal omMakeGObjSPAfter
  /* 123414 80132A64 3C078000 */       lui $a3, 0x8000
  /* 123418 80132A68 3C018013 */       lui $at, %hi(gMNVSButtonGObjRule)
  /* 12341C 80132A6C 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 123420 80132A70 240EFFFF */     addiu $t6, $zero, -1
  /* 123424 80132A74 AC224934 */        sw $v0, %lo(gMNVSButtonGObjRule)($at)
  /* 123428 80132A78 AFA20024 */        sw $v0, 0x24($sp)
  /* 12342C 80132A7C AFAE0010 */        sw $t6, 0x10($sp)
  /* 123430 80132A80 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 123434 80132A84 00402025 */        or $a0, $v0, $zero
  /* 123438 80132A88 24060002 */     addiu $a2, $zero, 2
  /* 12343C 80132A8C 0C00277D */       jal omAddGObjRenderProc
  /* 123440 80132A90 3C078000 */       lui $a3, 0x8000
  /* 123444 80132A94 8FA40024 */        lw $a0, 0x24($sp)
  /* 123448 80132A98 3C0542C2 */       lui $a1, 0x42c2
  /* 12344C 80132A9C 3C06428C */       lui $a2, 0x428c
  /* 123450 80132AA0 0C04C809 */       jal mnVSCreateButton
  /* 123454 80132AA4 24070011 */     addiu $a3, $zero, 0x11
  /* 123458 80132AA8 3C0F8013 */       lui $t7, %hi(gMNVSCursorIndex)
  /* 12345C 80132AAC 8DEF4948 */        lw $t7, %lo(gMNVSCursorIndex)($t7)
  /* 123460 80132AB0 24010001 */     addiu $at, $zero, 1
  /* 123464 80132AB4 00002825 */        or $a1, $zero, $zero
  /* 123468 80132AB8 15E10003 */       bne $t7, $at, .L80132AC8
  /* 12346C 80132ABC 00000000 */       nop
  /* 123470 80132AC0 10000001 */         b .L80132AC8
  /* 123474 80132AC4 24050001 */     addiu $a1, $zero, 1
  .L80132AC8:
  /* 123478 80132AC8 0C04C7D3 */       jal mnVSUpdateButton
  /* 12347C 80132ACC 8FA40024 */        lw $a0, 0x24($sp)
  /* 123480 80132AD0 3C188013 */       lui $t8, %hi(D_ovl19_80134A4C)
  /* 123484 80132AD4 8F184A4C */        lw $t8, %lo(D_ovl19_80134A4C)($t8)
  /* 123488 80132AD8 3C190000 */       lui $t9, %hi(D_NF_00002748)
  /* 12348C 80132ADC 27392748 */     addiu $t9, $t9, %lo(D_NF_00002748)
  /* 123490 80132AE0 8FA40024 */        lw $a0, 0x24($sp)
  /* 123494 80132AE4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123498 80132AE8 03192821 */      addu $a1, $t8, $t9
  /* 12349C 80132AEC 94480024 */       lhu $t0, 0x24($v0)
  /* 1234A0 80132AF0 3C0142D8 */       lui $at, (0x42D80000 >> 16) # 108.0
  /* 1234A4 80132AF4 44812000 */      mtc1 $at, $f4 # 108.0 to cop1
  /* 1234A8 80132AF8 3C014296 */       lui $at, (0x42960000 >> 16) # 75.0
  /* 1234AC 80132AFC 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 1234B0 80132B00 44813000 */      mtc1 $at, $f6 # 75.0 to cop1
  /* 1234B4 80132B04 A44A0024 */        sh $t2, 0x24($v0)
  /* 1234B8 80132B08 354B0001 */       ori $t3, $t2, 1
  /* 1234BC 80132B0C A44B0024 */        sh $t3, 0x24($v0)
  /* 1234C0 80132B10 A0400028 */        sb $zero, 0x28($v0)
  /* 1234C4 80132B14 A0400029 */        sb $zero, 0x29($v0)
  /* 1234C8 80132B18 A040002A */        sb $zero, 0x2a($v0)
  /* 1234CC 80132B1C E4440058 */      swc1 $f4, 0x58($v0)
  /* 1234D0 80132B20 0C04CA06 */       jal mnVSCreateRuleArrows
  /* 1234D4 80132B24 E446005C */      swc1 $f6, 0x5c($v0)
  /* 1234D8 80132B28 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1234DC 80132B2C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 1234E0 80132B30 03E00008 */        jr $ra
  /* 1234E4 80132B34 00000000 */       nop

glabel mnVSIsTime
  /* 1234E8 80132B38 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 1234EC 80132B3C 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 1234F0 80132B40 24010002 */     addiu $at, $zero, 2
  /* 1234F4 80132B44 10400003 */      beqz $v0, .L80132B54
  /* 1234F8 80132B48 00000000 */       nop
  /* 1234FC 80132B4C 54410004 */      bnel $v0, $at, .L80132B60
  /* 123500 80132B50 00001025 */        or $v0, $zero, $zero
  .L80132B54:
  /* 123504 80132B54 03E00008 */        jr $ra
  /* 123508 80132B58 24020001 */     addiu $v0, $zero, 1

  /* 12350C 80132B5C 00001025 */        or $v0, $zero, $zero
  .L80132B60:
  /* 123510 80132B60 03E00008 */        jr $ra
  /* 123514 80132B64 00000000 */       nop

glabel mnVSGetTimeStockValue
  /* 123518 80132B68 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12351C 80132B6C AFBF0014 */        sw $ra, 0x14($sp)
  /* 123520 80132B70 0C04CACE */       jal mnVSIsTime
  /* 123524 80132B74 00000000 */       nop
  /* 123528 80132B78 10400004 */      beqz $v0, .L80132B8C
  /* 12352C 80132B7C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 123530 80132B80 3C028013 */       lui $v0, %hi(gMNVSTime)
  /* 123534 80132B84 10000004 */         b .L80132B98
  /* 123538 80132B88 8C424950 */        lw $v0, %lo(gMNVSTime)($v0)
  .L80132B8C:
  /* 12353C 80132B8C 3C028013 */       lui $v0, %hi(gMNVSStock)
  /* 123540 80132B90 8C424954 */        lw $v0, %lo(gMNVSStock)($v0)
  /* 123544 80132B94 24420001 */     addiu $v0, $v0, 1
  .L80132B98:
  /* 123548 80132B98 03E00008 */        jr $ra
  /* 12354C 80132B9C 27BD0018 */     addiu $sp, $sp, 0x18

glabel mnVSCreateTimeStockValue
  /* 123550 80132BA0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 123554 80132BA4 3C0F8013 */       lui $t7, %hi(dMNVSTimeStockValueColor)
  /* 123558 80132BA8 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12355C 80132BAC 25EF4864 */     addiu $t7, $t7, %lo(dMNVSTimeStockValueColor)
  /* 123560 80132BB0 8DF90000 */        lw $t9, ($t7) # dMNVSTimeStockValueColor + 0
  /* 123564 80132BB4 27AE0028 */     addiu $t6, $sp, 0x28
  /* 123568 80132BB8 8DF80004 */        lw $t8, 4($t7) # dMNVSTimeStockValueColor + 4
  /* 12356C 80132BBC ADD90000 */        sw $t9, ($t6)
  /* 123570 80132BC0 8DF90008 */        lw $t9, 8($t7) # dMNVSTimeStockValueColor + 8
  /* 123574 80132BC4 00002025 */        or $a0, $zero, $zero
  /* 123578 80132BC8 00002825 */        or $a1, $zero, $zero
  /* 12357C 80132BCC 24060005 */     addiu $a2, $zero, 5
  /* 123580 80132BD0 3C078000 */       lui $a3, 0x8000
  /* 123584 80132BD4 ADD80004 */        sw $t8, 4($t6)
  /* 123588 80132BD8 0C00265A */       jal omMakeGObjSPAfter
  /* 12358C 80132BDC ADD90008 */        sw $t9, 8($t6)
  /* 123590 80132BE0 3C018013 */       lui $at, %hi(gMNVSTimeStockValueGObj)
  /* 123594 80132BE4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 123598 80132BE8 2408FFFF */     addiu $t0, $zero, -1
  /* 12359C 80132BEC AC22495C */        sw $v0, %lo(gMNVSTimeStockValueGObj)($at)
  /* 1235A0 80132BF0 AFA20044 */        sw $v0, 0x44($sp)
  /* 1235A4 80132BF4 AFA80010 */        sw $t0, 0x10($sp)
  /* 1235A8 80132BF8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1235AC 80132BFC 00402025 */        or $a0, $v0, $zero
  /* 1235B0 80132C00 24060003 */     addiu $a2, $zero, 3
  /* 1235B4 80132C04 0C00277D */       jal omAddGObjRenderProc
  /* 1235B8 80132C08 3C078000 */       lui $a3, 0x8000
  /* 1235BC 80132C0C 0C04CADA */       jal mnVSGetTimeStockValue
  /* 1235C0 80132C10 00000000 */       nop
  /* 1235C4 80132C14 24010064 */     addiu $at, $zero, 0x64
  /* 1235C8 80132C18 1441001A */       bne $v0, $at, .L80132C84
  /* 1235CC 80132C1C 00402825 */        or $a1, $v0, $zero
  /* 1235D0 80132C20 3C098013 */       lui $t1, %hi(D_ovl19_80134A48)
  /* 1235D4 80132C24 8D294A48 */        lw $t1, %lo(D_ovl19_80134A48)($t1)
  /* 1235D8 80132C28 3C0A0001 */       lui $t2, %hi(D_NF_0000DC48)
  /* 1235DC 80132C2C 254ADC48 */     addiu $t2, $t2, %lo(D_NF_0000DC48)
  /* 1235E0 80132C30 8FA40044 */        lw $a0, 0x44($sp)
  /* 1235E4 80132C34 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 1235E8 80132C38 012A2821 */      addu $a1, $t1, $t2
  /* 1235EC 80132C3C 944B0024 */       lhu $t3, 0x24($v0)
  /* 1235F0 80132C40 3C014322 */       lui $at, (0x43220000 >> 16) # 162.0
  /* 1235F4 80132C44 44812000 */      mtc1 $at, $f4 # 162.0 to cop1
  /* 1235F8 80132C48 3C0142EC */       lui $at, (0x42EC0000 >> 16) # 118.0
  /* 1235FC 80132C4C 44813000 */      mtc1 $at, $f6 # 118.0 to cop1
  /* 123600 80132C50 316DFFDF */      andi $t5, $t3, 0xffdf
  /* 123604 80132C54 A44D0024 */        sh $t5, 0x24($v0)
  /* 123608 80132C58 35AE0001 */       ori $t6, $t5, 1
  /* 12360C 80132C5C A44E0024 */        sh $t6, 0x24($v0)
  /* 123610 80132C60 E4440058 */      swc1 $f4, 0x58($v0)
  /* 123614 80132C64 E446005C */      swc1 $f6, 0x5c($v0)
  /* 123618 80132C68 8FAF0028 */        lw $t7, 0x28($sp)
  /* 12361C 80132C6C A04F0028 */        sb $t7, 0x28($v0)
  /* 123620 80132C70 8FB8002C */        lw $t8, 0x2c($sp)
  /* 123624 80132C74 A0580029 */        sb $t8, 0x29($v0)
  /* 123628 80132C78 8FB90030 */        lw $t9, 0x30($sp)
  /* 12362C 80132C7C 1000001D */         b .L80132CF4
  /* 123630 80132C80 A059002A */        sb $t9, 0x2a($v0)
  .L80132C84:
  /* 123634 80132C84 0C04CACE */       jal mnVSIsTime
  /* 123638 80132C88 AFA5003C */        sw $a1, 0x3c($sp)
  /* 12363C 80132C8C 10400008 */      beqz $v0, .L80132CB0
  /* 123640 80132C90 8FA5003C */        lw $a1, 0x3c($sp)
  /* 123644 80132C94 28A1000A */      slti $at, $a1, 0xa
  /* 123648 80132C98 10200003 */      beqz $at, .L80132CA8
  /* 12364C 80132C9C 00000000 */       nop
  /* 123650 80132CA0 10000008 */         b .L80132CC4
  /* 123654 80132CA4 240200B9 */     addiu $v0, $zero, 0xb9
  .L80132CA8:
  /* 123658 80132CA8 10000006 */         b .L80132CC4
  /* 12365C 80132CAC 240200BE */     addiu $v0, $zero, 0xbe
  .L80132CB0:
  /* 123660 80132CB0 28A1000A */      slti $at, $a1, 0xa
  /* 123664 80132CB4 10200003 */      beqz $at, .L80132CC4
  /* 123668 80132CB8 240200D7 */     addiu $v0, $zero, 0xd7
  /* 12366C 80132CBC 10000001 */         b .L80132CC4
  /* 123670 80132CC0 240200D2 */     addiu $v0, $zero, 0xd2
  .L80132CC4:
  /* 123674 80132CC4 44824000 */      mtc1 $v0, $f8
  /* 123678 80132CC8 27A80028 */     addiu $t0, $sp, 0x28
  /* 12367C 80132CCC 24090002 */     addiu $t1, $zero, 2
  /* 123680 80132CD0 46804220 */   cvt.s.w $f8, $f8
  /* 123684 80132CD4 AFA90014 */        sw $t1, 0x14($sp)
  /* 123688 80132CD8 AFA80010 */        sw $t0, 0x10($sp)
  /* 12368C 80132CDC 8FA40044 */        lw $a0, 0x44($sp)
  /* 123690 80132CE0 3C0742E8 */       lui $a3, 0x42e8
  /* 123694 80132CE4 AFA00018 */        sw $zero, 0x18($sp)
  /* 123698 80132CE8 44064000 */      mfc1 $a2, $f8
  /* 12369C 80132CEC 0C04C728 */       jal mnVSCreateNumber
  /* 1236A0 80132CF0 00000000 */       nop
  .L80132CF4:
  /* 1236A4 80132CF4 8FBF0024 */        lw $ra, 0x24($sp)
  /* 1236A8 80132CF8 27BD0048 */     addiu $sp, $sp, 0x48
  /* 1236AC 80132CFC 03E00008 */        jr $ra
  /* 1236B0 80132D00 00000000 */       nop

glabel mnVSCreateTimeStockButton
  /* 1236B4 80132D04 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 1236B8 80132D08 AFBF0024 */        sw $ra, 0x24($sp)
  /* 1236BC 80132D0C AFB00020 */        sw $s0, 0x20($sp)
  /* 1236C0 80132D10 00002025 */        or $a0, $zero, $zero
  /* 1236C4 80132D14 00002825 */        or $a1, $zero, $zero
  /* 1236C8 80132D18 24060004 */     addiu $a2, $zero, 4
  /* 1236CC 80132D1C 0C00265A */       jal omMakeGObjSPAfter
  /* 1236D0 80132D20 3C078000 */       lui $a3, 0x8000
  /* 1236D4 80132D24 3C018013 */       lui $at, %hi(gMNVSButtonGObjTimeStock)
  /* 1236D8 80132D28 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 1236DC 80132D2C 240EFFFF */     addiu $t6, $zero, -1
  /* 1236E0 80132D30 AC224938 */        sw $v0, %lo(gMNVSButtonGObjTimeStock)($at)
  /* 1236E4 80132D34 00408025 */        or $s0, $v0, $zero
  /* 1236E8 80132D38 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1236EC 80132D3C 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1236F0 80132D40 00402025 */        or $a0, $v0, $zero
  /* 1236F4 80132D44 24060002 */     addiu $a2, $zero, 2
  /* 1236F8 80132D48 0C00277D */       jal omAddGObjRenderProc
  /* 1236FC 80132D4C 3C078000 */       lui $a3, 0x8000
  /* 123700 80132D50 02002025 */        or $a0, $s0, $zero
  /* 123704 80132D54 3C054294 */       lui $a1, 0x4294
  /* 123708 80132D58 3C0642DA */       lui $a2, 0x42da
  /* 12370C 80132D5C 0C04C809 */       jal mnVSCreateButton
  /* 123710 80132D60 24070011 */     addiu $a3, $zero, 0x11
  /* 123714 80132D64 3C0F8013 */       lui $t7, %hi(gMNVSCursorIndex)
  /* 123718 80132D68 8DEF4948 */        lw $t7, %lo(gMNVSCursorIndex)($t7)
  /* 12371C 80132D6C 24010002 */     addiu $at, $zero, 2
  /* 123720 80132D70 00002825 */        or $a1, $zero, $zero
  /* 123724 80132D74 15E10003 */       bne $t7, $at, .L80132D84
  /* 123728 80132D78 00000000 */       nop
  /* 12372C 80132D7C 10000001 */         b .L80132D84
  /* 123730 80132D80 24050001 */     addiu $a1, $zero, 1
  .L80132D84:
  /* 123734 80132D84 0C04C7D3 */       jal mnVSUpdateButton
  /* 123738 80132D88 02002025 */        or $a0, $s0, $zero
  /* 12373C 80132D8C 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 123740 80132D90 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 123744 80132D94 24010002 */     addiu $at, $zero, 2
  /* 123748 80132D98 02002025 */        or $a0, $s0, $zero
  /* 12374C 80132D9C 10400003 */      beqz $v0, .L80132DAC
  /* 123750 80132DA0 3C188013 */       lui $t8, %hi(D_ovl19_80134A4C)
  /* 123754 80132DA4 1441002A */       bne $v0, $at, .L80132E50
  /* 123758 80132DA8 3C088013 */       lui $t0, 0x8013
  .L80132DAC:
  /* 12375C 80132DAC 8F184A4C */        lw $t8, %lo(D_ovl19_80134A4C)($t8)
  /* 123760 80132DB0 3C190000 */       lui $t9, %hi(D_NF_00002EC8)
  /* 123764 80132DB4 27392EC8 */     addiu $t9, $t9, %lo(D_NF_00002EC8)
  /* 123768 80132DB8 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 12376C 80132DBC 03192821 */      addu $a1, $t8, $t9
  /* 123770 80132DC0 94480024 */       lhu $t0, 0x24($v0)
  /* 123774 80132DC4 3C0142C2 */       lui $at, (0x42C20000 >> 16) # 97.0
  /* 123778 80132DC8 44812000 */      mtc1 $at, $f4 # 97.0 to cop1
  /* 12377C 80132DCC 3C0142E2 */       lui $at, (0x42E20000 >> 16) # 113.0
  /* 123780 80132DD0 44813000 */      mtc1 $at, $f6 # 113.0 to cop1
  /* 123784 80132DD4 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 123788 80132DD8 A44A0024 */        sh $t2, 0x24($v0)
  /* 12378C 80132DDC 354B0001 */       ori $t3, $t2, 1
  /* 123790 80132DE0 A44B0024 */        sh $t3, 0x24($v0)
  /* 123794 80132DE4 A0400028 */        sb $zero, 0x28($v0)
  /* 123798 80132DE8 A0400029 */        sb $zero, 0x29($v0)
  /* 12379C 80132DEC A040002A */        sb $zero, 0x2a($v0)
  /* 1237A0 80132DF0 3C0C8013 */       lui $t4, %hi(D_ovl19_80134A4C)
  /* 1237A4 80132DF4 E4440058 */      swc1 $f4, 0x58($v0)
  /* 1237A8 80132DF8 E446005C */      swc1 $f6, 0x5c($v0)
  /* 1237AC 80132DFC 8D8C4A4C */        lw $t4, %lo(D_ovl19_80134A4C)($t4)
  /* 1237B0 80132E00 3C0D0000 */       lui $t5, %hi(D_NF_00002FC8)
  /* 1237B4 80132E04 25AD2FC8 */     addiu $t5, $t5, %lo(D_NF_00002FC8)
  /* 1237B8 80132E08 02002025 */        or $a0, $s0, $zero
  /* 1237BC 80132E0C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 1237C0 80132E10 018D2821 */      addu $a1, $t4, $t5
  /* 1237C4 80132E14 944E0024 */       lhu $t6, 0x24($v0)
  /* 1237C8 80132E18 3C014345 */       lui $at, (0x43450000 >> 16) # 197.0
  /* 1237CC 80132E1C 44814000 */      mtc1 $at, $f8 # 197.0 to cop1
  /* 1237D0 80132E20 3C0142F0 */       lui $at, (0x42F00000 >> 16) # 120.0
  /* 1237D4 80132E24 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 1237D8 80132E28 44815000 */      mtc1 $at, $f10 # 120.0 to cop1
  /* 1237DC 80132E2C A4580024 */        sh $t8, 0x24($v0)
  /* 1237E0 80132E30 37190001 */       ori $t9, $t8, 1
  /* 1237E4 80132E34 A4590024 */        sh $t9, 0x24($v0)
  /* 1237E8 80132E38 A0400028 */        sb $zero, 0x28($v0)
  /* 1237EC 80132E3C A0400029 */        sb $zero, 0x29($v0)
  /* 1237F0 80132E40 A040002A */        sb $zero, 0x2a($v0)
  /* 1237F4 80132E44 E4480058 */      swc1 $f8, 0x58($v0)
  /* 1237F8 80132E48 10000015 */         b .L80132EA0
  /* 1237FC 80132E4C E44A005C */      swc1 $f10, 0x5c($v0)
  .L80132E50:
  /* 123800 80132E50 8D084A4C */        lw $t0, 0x4a4c($t0)
  /* 123804 80132E54 3C090000 */       lui $t1, %hi(D_NF_00003248)
  /* 123808 80132E58 25293248 */     addiu $t1, $t1, %lo(D_NF_00003248)
  /* 12380C 80132E5C 02002025 */        or $a0, $s0, $zero
  /* 123810 80132E60 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123814 80132E64 01092821 */      addu $a1, $t0, $t1
  /* 123818 80132E68 944A0024 */       lhu $t2, 0x24($v0)
  /* 12381C 80132E6C 3C0142D4 */       lui $at, (0x42D40000 >> 16) # 106.0
  /* 123820 80132E70 44818000 */      mtc1 $at, $f16 # 106.0 to cop1
  /* 123824 80132E74 3C0142E4 */       lui $at, (0x42E40000 >> 16) # 114.0
  /* 123828 80132E78 44819000 */      mtc1 $at, $f18 # 114.0 to cop1
  /* 12382C 80132E7C 314CFFDF */      andi $t4, $t2, 0xffdf
  /* 123830 80132E80 A44C0024 */        sh $t4, 0x24($v0)
  /* 123834 80132E84 358D0001 */       ori $t5, $t4, 1
  /* 123838 80132E88 A44D0024 */        sh $t5, 0x24($v0)
  /* 12383C 80132E8C A0400028 */        sb $zero, 0x28($v0)
  /* 123840 80132E90 A0400029 */        sb $zero, 0x29($v0)
  /* 123844 80132E94 A040002A */        sb $zero, 0x2a($v0)
  /* 123848 80132E98 E4500058 */      swc1 $f16, 0x58($v0)
  /* 12384C 80132E9C E452005C */      swc1 $f18, 0x5c($v0)
  .L80132EA0:
  /* 123850 80132EA0 0C04CA59 */       jal mnVSCreateTimeStockArrows
  /* 123854 80132EA4 00000000 */       nop
  /* 123858 80132EA8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 12385C 80132EAC 8FB00020 */        lw $s0, 0x20($sp)
  /* 123860 80132EB0 27BD0028 */     addiu $sp, $sp, 0x28
  /* 123864 80132EB4 03E00008 */        jr $ra
  /* 123868 80132EB8 00000000 */       nop

glabel mnVSCreateVSOptionsButton
  /* 12386C 80132EBC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 123870 80132EC0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 123874 80132EC4 00002025 */        or $a0, $zero, $zero
  /* 123878 80132EC8 00002825 */        or $a1, $zero, $zero
  /* 12387C 80132ECC 24060004 */     addiu $a2, $zero, 4
  /* 123880 80132ED0 0C00265A */       jal omMakeGObjSPAfter
  /* 123884 80132ED4 3C078000 */       lui $a3, 0x8000
  /* 123888 80132ED8 3C018013 */       lui $at, %hi(gMNVSButtonGObjVSOptions)
  /* 12388C 80132EDC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 123890 80132EE0 240EFFFF */     addiu $t6, $zero, -1
  /* 123894 80132EE4 AC22493C */        sw $v0, %lo(gMNVSButtonGObjVSOptions)($at)
  /* 123898 80132EE8 AFA20024 */        sw $v0, 0x24($sp)
  /* 12389C 80132EEC AFAE0010 */        sw $t6, 0x10($sp)
  /* 1238A0 80132EF0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 1238A4 80132EF4 00402025 */        or $a0, $v0, $zero
  /* 1238A8 80132EF8 24060002 */     addiu $a2, $zero, 2
  /* 1238AC 80132EFC 0C00277D */       jal omAddGObjRenderProc
  /* 1238B0 80132F00 3C078000 */       lui $a3, 0x8000
  /* 1238B4 80132F04 8FA40024 */        lw $a0, 0x24($sp)
  /* 1238B8 80132F08 3C05424C */       lui $a1, 0x424c
  /* 1238BC 80132F0C 3C064314 */       lui $a2, 0x4314
  /* 1238C0 80132F10 0C04C809 */       jal mnVSCreateButton
  /* 1238C4 80132F14 24070011 */     addiu $a3, $zero, 0x11
  /* 1238C8 80132F18 3C0F8013 */       lui $t7, %hi(gMNVSCursorIndex)
  /* 1238CC 80132F1C 8DEF4948 */        lw $t7, %lo(gMNVSCursorIndex)($t7)
  /* 1238D0 80132F20 24010003 */     addiu $at, $zero, 3
  /* 1238D4 80132F24 00002825 */        or $a1, $zero, $zero
  /* 1238D8 80132F28 15E10003 */       bne $t7, $at, .L80132F38
  /* 1238DC 80132F2C 00000000 */       nop
  /* 1238E0 80132F30 10000001 */         b .L80132F38
  /* 1238E4 80132F34 24050001 */     addiu $a1, $zero, 1
  .L80132F38:
  /* 1238E8 80132F38 0C04C7D3 */       jal mnVSUpdateButton
  /* 1238EC 80132F3C 8FA40024 */        lw $a0, 0x24($sp)
  /* 1238F0 80132F40 3C188013 */       lui $t8, %hi(D_ovl19_80134A4C)
  /* 1238F4 80132F44 8F184A4C */        lw $t8, %lo(D_ovl19_80134A4C)($t8)
  /* 1238F8 80132F48 3C190000 */       lui $t9, %hi(D_NF_00003828)
  /* 1238FC 80132F4C 27393828 */     addiu $t9, $t9, %lo(D_NF_00003828)
  /* 123900 80132F50 8FA40024 */        lw $a0, 0x24($sp)
  /* 123904 80132F54 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123908 80132F58 03192821 */      addu $a1, $t8, $t9
  /* 12390C 80132F5C 94480024 */       lhu $t0, 0x24($v0)
  /* 123910 80132F60 3C01428E */       lui $at, (0x428E0000 >> 16) # 71.0
  /* 123914 80132F64 44812000 */      mtc1 $at, $f4 # 71.0 to cop1
  /* 123918 80132F68 3C014317 */       lui $at, (0x43170000 >> 16) # 151.0
  /* 12391C 80132F6C 44813000 */      mtc1 $at, $f6 # 151.0 to cop1
  /* 123920 80132F70 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 123924 80132F74 A44A0024 */        sh $t2, 0x24($v0)
  /* 123928 80132F78 354B0001 */       ori $t3, $t2, 1
  /* 12392C 80132F7C A44B0024 */        sh $t3, 0x24($v0)
  /* 123930 80132F80 A0400028 */        sb $zero, 0x28($v0)
  /* 123934 80132F84 A0400029 */        sb $zero, 0x29($v0)
  /* 123938 80132F88 A040002A */        sb $zero, 0x2a($v0)
  /* 12393C 80132F8C E4440058 */      swc1 $f4, 0x58($v0)
  /* 123940 80132F90 E446005C */      swc1 $f6, 0x5c($v0)
  /* 123944 80132F94 8FBF001C */        lw $ra, 0x1c($sp)
  /* 123948 80132F98 27BD0028 */     addiu $sp, $sp, 0x28
  /* 12394C 80132F9C 03E00008 */        jr $ra
  /* 123950 80132FA0 00000000 */       nop

glabel mnVSSetColorsUnused
  /* 123954 80132FA4 948E0024 */       lhu $t6, 0x24($a0)
  /* 123958 80132FA8 240200FF */     addiu $v0, $zero, 0xff
  /* 12395C 80132FAC A0800060 */        sb $zero, 0x60($a0)
  /* 123960 80132FB0 31D8FFDF */      andi $t8, $t6, 0xffdf
  /* 123964 80132FB4 A4980024 */        sh $t8, 0x24($a0)
  /* 123968 80132FB8 37190001 */       ori $t9, $t8, 1
  /* 12396C 80132FBC A4990024 */        sh $t9, 0x24($a0)
  /* 123970 80132FC0 A0800061 */        sb $zero, 0x61($a0)
  /* 123974 80132FC4 A0800062 */        sb $zero, 0x62($a0)
  /* 123978 80132FC8 A0820028 */        sb $v0, 0x28($a0)
  /* 12397C 80132FCC A0820029 */        sb $v0, 0x29($a0)
  /* 123980 80132FD0 03E00008 */        jr $ra
  /* 123984 80132FD4 A082002A */        sb $v0, 0x2a($a0)

glabel mnVSCreateUnusedGObj
  /* 123988 80132FD8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 12398C 80132FDC AFBF0014 */        sw $ra, 0x14($sp)
  /* 123990 80132FE0 00002025 */        or $a0, $zero, $zero
  /* 123994 80132FE4 00002825 */        or $a1, $zero, $zero
  /* 123998 80132FE8 24060005 */     addiu $a2, $zero, 5
  /* 12399C 80132FEC 0C00265A */       jal omMakeGObjSPAfter
  /* 1239A0 80132FF0 3C078000 */       lui $a3, 0x8000
  /* 1239A4 80132FF4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 1239A8 80132FF8 3C018013 */       lui $at, %hi(gMNVSUnusedGObj)
  /* 1239AC 80132FFC AC224960 */        sw $v0, %lo(gMNVSUnusedGObj)($at)
  /* 1239B0 80133000 03E00008 */        jr $ra
  /* 1239B4 80133004 27BD0018 */     addiu $sp, $sp, 0x18

glabel mnVSRenderMenuName
  /* 1239B8 80133008 3C038004 */       lui $v1, %hi(gDisplayListHead)
  /* 1239BC 8013300C 246365B0 */     addiu $v1, $v1, %lo(gDisplayListHead)
  /* 1239C0 80133010 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 1239C4 80133014 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 1239C8 80133018 AFBF0014 */        sw $ra, 0x14($sp)
  /* 1239CC 8013301C 244E0008 */     addiu $t6, $v0, 8
  /* 1239D0 80133020 AFA40018 */        sw $a0, 0x18($sp)
  /* 1239D4 80133024 AC6E0000 */        sw $t6, ($v1) # gDisplayListHead + 0
  /* 1239D8 80133028 3C1FE700 */       lui $ra, 0xe700
  /* 1239DC 8013302C AC5F0000 */        sw $ra, ($v0)
  /* 1239E0 80133030 AC400004 */        sw $zero, 4($v0)
  /* 1239E4 80133034 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 1239E8 80133038 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 1239EC 8013303C 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 1239F0 80133040 244F0008 */     addiu $t7, $v0, 8
  /* 1239F4 80133044 AC6F0000 */        sw $t7, ($v1) # gDisplayListHead + 0
  /* 1239F8 80133048 AC400004 */        sw $zero, 4($v0)
  /* 1239FC 8013304C AC580000 */        sw $t8, ($v0)
  /* 123A00 80133050 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123A04 80133054 3C0FA078 */       lui $t7, (0xA07814E6 >> 16) # 2692224230
  /* 123A08 80133058 35EF14E6 */       ori $t7, $t7, (0xA07814E6 & 0xFFFF) # 2692224230
  /* 123A0C 8013305C 24590008 */     addiu $t9, $v0, 8
  /* 123A10 80133060 AC790000 */        sw $t9, ($v1) # gDisplayListHead + 0
  /* 123A14 80133064 3C0EFA00 */       lui $t6, 0xfa00
  /* 123A18 80133068 AC4E0000 */        sw $t6, ($v0)
  /* 123A1C 8013306C AC4F0004 */        sw $t7, 4($v0)
  /* 123A20 80133070 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123A24 80133074 3C0EFFFD */       lui $t6, (0xFFFDF6FB >> 16) # 4294833915
  /* 123A28 80133078 3C19FCFF */       lui $t9, (0xFCFFFFFF >> 16) # 4244635647
  /* 123A2C 8013307C 24580008 */     addiu $t8, $v0, 8
  /* 123A30 80133080 AC780000 */        sw $t8, ($v1) # gDisplayListHead + 0
  /* 123A34 80133084 3739FFFF */       ori $t9, $t9, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 123A38 80133088 35CEF6FB */       ori $t6, $t6, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 123A3C 8013308C AC4E0004 */        sw $t6, 4($v0)
  /* 123A40 80133090 AC590000 */        sw $t9, ($v0)
  /* 123A44 80133094 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123A48 80133098 3C190050 */       lui $t9, (0x5041C8 >> 16) # 5259720
  /* 123A4C 8013309C 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 123A50 801330A0 244F0008 */     addiu $t7, $v0, 8
  /* 123A54 801330A4 AC6F0000 */        sw $t7, ($v1) # gDisplayListHead + 0
  /* 123A58 801330A8 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 123A5C 801330AC 373941C8 */       ori $t9, $t9, (0x5041C8 & 0xFFFF) # 5259720
  /* 123A60 801330B0 AC590004 */        sw $t9, 4($v0)
  /* 123A64 801330B4 AC580000 */        sw $t8, ($v0)
  /* 123A68 801330B8 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123A6C 801330BC 3C180038 */       lui $t8, (0x38423C >> 16) # 3686972
  /* 123A70 801330C0 3C0FF64D */       lui $t7, (0xF64D8398 >> 16) # 4132275096
  /* 123A74 801330C4 244E0008 */     addiu $t6, $v0, 8
  /* 123A78 801330C8 AC6E0000 */        sw $t6, ($v1) # gDisplayListHead + 0
  /* 123A7C 801330CC 35EF8398 */       ori $t7, $t7, (0xF64D8398 & 0xFFFF) # 4132275096
  /* 123A80 801330D0 3718423C */       ori $t8, $t8, (0x38423C & 0xFFFF) # 3686972
  /* 123A84 801330D4 AC580004 */        sw $t8, 4($v0)
  /* 123A88 801330D8 AC4F0000 */        sw $t7, ($v0)
  /* 123A8C 801330DC 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123A90 801330E0 3C0FE200 */       lui $t7, (0xE200001C >> 16) # 3791650844
  /* 123A94 801330E4 3C180055 */       lui $t8, (0x552078 >> 16) # 5578872
  /* 123A98 801330E8 24590008 */     addiu $t9, $v0, 8
  /* 123A9C 801330EC AC790000 */        sw $t9, ($v1) # gDisplayListHead + 0
  /* 123AA0 801330F0 AC400004 */        sw $zero, 4($v0)
  /* 123AA4 801330F4 AC5F0000 */        sw $ra, ($v0)
  /* 123AA8 801330F8 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123AAC 801330FC 37182078 */       ori $t8, $t8, (0x552078 & 0xFFFF) # 5578872
  /* 123AB0 80133100 35EF001C */       ori $t7, $t7, (0xE200001C & 0xFFFF) # 3791650844
  /* 123AB4 80133104 244E0008 */     addiu $t6, $v0, 8
  /* 123AB8 80133108 AC6E0000 */        sw $t6, ($v1) # gDisplayListHead + 0
  /* 123ABC 8013310C AC580004 */        sw $t8, 4($v0)
  /* 123AC0 80133110 AC4F0000 */        sw $t7, ($v0)
  /* 123AC4 80133114 8C620000 */        lw $v0, ($v1) # gDisplayListHead + 0
  /* 123AC8 80133118 3C0EE300 */       lui $t6, (0xE3000A01 >> 16) # 3808430593
  /* 123ACC 8013311C 35CE0A01 */       ori $t6, $t6, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 123AD0 80133120 24590008 */     addiu $t9, $v0, 8
  /* 123AD4 80133124 AC790000 */        sw $t9, ($v1) # gDisplayListHead + 0
  /* 123AD8 80133128 AC400004 */        sw $zero, 4($v0)
  /* 123ADC 8013312C 0C0333AB */       jal func_ovl0_800CCEAC
  /* 123AE0 80133130 AC4E0000 */        sw $t6, ($v0)
  /* 123AE4 80133134 0C0333C0 */       jal func_ovl0_800CCF00
  /* 123AE8 80133138 8FA40018 */        lw $a0, 0x18($sp)
  /* 123AEC 8013313C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 123AF0 80133140 27BD0018 */     addiu $sp, $sp, 0x18
  /* 123AF4 80133144 03E00008 */        jr $ra
  /* 123AF8 80133148 00000000 */       nop

glabel mnVSCreateMenuName
  /* 123AFC 8013314C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 123B00 80133150 AFBF001C */        sw $ra, 0x1c($sp)
  /* 123B04 80133154 00002025 */        or $a0, $zero, $zero
  /* 123B08 80133158 00002825 */        or $a1, $zero, $zero
  /* 123B0C 8013315C 24060003 */     addiu $a2, $zero, 3
  /* 123B10 80133160 0C00265A */       jal omMakeGObjSPAfter
  /* 123B14 80133164 3C078000 */       lui $a3, 0x8000
  /* 123B18 80133168 3C058013 */       lui $a1, %hi(mnVSRenderMenuName)
  /* 123B1C 8013316C 240EFFFF */     addiu $t6, $zero, -1
  /* 123B20 80133170 AFA20024 */        sw $v0, 0x24($sp)
  /* 123B24 80133174 AFAE0010 */        sw $t6, 0x10($sp)
  /* 123B28 80133178 24A53008 */     addiu $a1, $a1, %lo(mnVSRenderMenuName)
  /* 123B2C 8013317C 00402025 */        or $a0, $v0, $zero
  /* 123B30 80133180 24060001 */     addiu $a2, $zero, 1
  /* 123B34 80133184 0C00277D */       jal omAddGObjRenderProc
  /* 123B38 80133188 3C078000 */       lui $a3, 0x8000
  /* 123B3C 8013318C 3C0F8013 */       lui $t7, %hi(D_ovl19_80134A48)
  /* 123B40 80133190 8DEF4A48 */        lw $t7, %lo(D_ovl19_80134A48)($t7)
  /* 123B44 80133194 3C180000 */       lui $t8, %hi(D_NF_000031F8)
  /* 123B48 80133198 271831F8 */     addiu $t8, $t8, %lo(D_NF_000031F8)
  /* 123B4C 8013319C 8FA40024 */        lw $a0, 0x24($sp)
  /* 123B50 801331A0 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123B54 801331A4 01F82821 */      addu $a1, $t7, $t8
  /* 123B58 801331A8 94590024 */       lhu $t9, 0x24($v0)
  /* 123B5C 801331AC 3C01436B */       lui $at, (0x436B0000 >> 16) # 235.0
  /* 123B60 801331B0 44812000 */      mtc1 $at, $f4 # 235.0 to cop1
  /* 123B64 801331B4 3C01431E */       lui $at, (0x431E0000 >> 16) # 158.0
  /* 123B68 801331B8 44813000 */      mtc1 $at, $f6 # 158.0 to cop1
  /* 123B6C 801331BC 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 123B70 801331C0 A4490024 */        sh $t1, 0x24($v0)
  /* 123B74 801331C4 352A0001 */       ori $t2, $t1, 1
  /* 123B78 801331C8 A44A0024 */        sh $t2, 0x24($v0)
  /* 123B7C 801331CC A0400028 */        sb $zero, 0x28($v0)
  /* 123B80 801331D0 A0400029 */        sb $zero, 0x29($v0)
  /* 123B84 801331D4 A040002A */        sb $zero, 0x2a($v0)
  /* 123B88 801331D8 3C0B8013 */       lui $t3, %hi(D_ovl19_80134A4C)
  /* 123B8C 801331DC E4440058 */      swc1 $f4, 0x58($v0)
  /* 123B90 801331E0 E446005C */      swc1 $f6, 0x5c($v0)
  /* 123B94 801331E4 8D6B4A4C */        lw $t3, %lo(D_ovl19_80134A4C)($t3)
  /* 123B98 801331E8 3C0C0000 */       lui $t4, %hi(D_NF_00006118)
  /* 123B9C 801331EC 258C6118 */     addiu $t4, $t4, %lo(D_NF_00006118)
  /* 123BA0 801331F0 8FA40024 */        lw $a0, 0x24($sp)
  /* 123BA4 801331F4 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123BA8 801331F8 016C2821 */      addu $a1, $t3, $t4
  /* 123BAC 801331FC 944D0024 */       lhu $t5, 0x24($v0)
  /* 123BB0 80133200 3C01431E */       lui $at, (0x431E0000 >> 16) # 158.0
  /* 123BB4 80133204 44814000 */      mtc1 $at, $f8 # 158.0 to cop1
  /* 123BB8 80133208 3C014340 */       lui $at, (0x43400000 >> 16) # 192.0
  /* 123BBC 8013320C 44815000 */      mtc1 $at, $f10 # 192.0 to cop1
  /* 123BC0 80133210 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 123BC4 80133214 A44F0024 */        sh $t7, 0x24($v0)
  /* 123BC8 80133218 35F80001 */       ori $t8, $t7, 1
  /* 123BCC 8013321C A4580024 */        sh $t8, 0x24($v0)
  /* 123BD0 80133220 A0400028 */        sb $zero, 0x28($v0)
  /* 123BD4 80133224 A0400029 */        sb $zero, 0x29($v0)
  /* 123BD8 80133228 A040002A */        sb $zero, 0x2a($v0)
  /* 123BDC 8013322C 3C198013 */       lui $t9, %hi(D_ovl19_80134A48)
  /* 123BE0 80133230 E4480058 */      swc1 $f8, 0x58($v0)
  /* 123BE4 80133234 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 123BE8 80133238 8F394A48 */        lw $t9, %lo(D_ovl19_80134A48)($t9)
  /* 123BEC 8013323C 3C080001 */       lui $t0, %hi(D_NF_0000D240)
  /* 123BF0 80133240 2508D240 */     addiu $t0, $t0, %lo(D_NF_0000D240)
  /* 123BF4 80133244 8FA40024 */        lw $a0, 0x24($sp)
  /* 123BF8 80133248 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123BFC 8013324C 03282821 */      addu $a1, $t9, $t0
  /* 123C00 80133250 94490024 */       lhu $t1, 0x24($v0)
  /* 123C04 80133254 3C01433D */       lui $at, (0x433D0000 >> 16) # 189.0
  /* 123C08 80133258 44818000 */      mtc1 $at, $f16 # 189.0 to cop1
  /* 123C0C 8013325C 3C0142AE */       lui $at, (0x42AE0000 >> 16) # 87.0
  /* 123C10 80133260 44819000 */      mtc1 $at, $f18 # 87.0 to cop1
  /* 123C14 80133264 312BFFDF */      andi $t3, $t1, 0xffdf
  /* 123C18 80133268 A44B0024 */        sh $t3, 0x24($v0)
  /* 123C1C 8013326C 356C0001 */       ori $t4, $t3, 1
  /* 123C20 80133270 A44C0024 */        sh $t4, 0x24($v0)
  /* 123C24 80133274 A0400028 */        sb $zero, 0x28($v0)
  /* 123C28 80133278 A0400029 */        sb $zero, 0x29($v0)
  /* 123C2C 8013327C A040002A */        sb $zero, 0x2a($v0)
  /* 123C30 80133280 E4500058 */      swc1 $f16, 0x58($v0)
  /* 123C34 80133284 E452005C */      swc1 $f18, 0x5c($v0)
  /* 123C38 80133288 8FBF001C */        lw $ra, 0x1c($sp)
  /* 123C3C 8013328C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 123C40 80133290 03E00008 */        jr $ra
  /* 123C44 80133294 00000000 */       nop

glabel mnVSCreateBackground
  /* 123C48 80133298 27BDFFC8 */     addiu $sp, $sp, -0x38
  /* 123C4C 8013329C AFBF0024 */        sw $ra, 0x24($sp)
  /* 123C50 801332A0 AFB00020 */        sw $s0, 0x20($sp)
  /* 123C54 801332A4 00002025 */        or $a0, $zero, $zero
  /* 123C58 801332A8 00002825 */        or $a1, $zero, $zero
  /* 123C5C 801332AC 24060002 */     addiu $a2, $zero, 2
  /* 123C60 801332B0 0C00265A */       jal omMakeGObjSPAfter
  /* 123C64 801332B4 3C078000 */       lui $a3, 0x8000
  /* 123C68 801332B8 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 123C6C 801332BC 240EFFFF */     addiu $t6, $zero, -1
  /* 123C70 801332C0 00408025 */        or $s0, $v0, $zero
  /* 123C74 801332C4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 123C78 801332C8 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 123C7C 801332CC 00402025 */        or $a0, $v0, $zero
  /* 123C80 801332D0 00003025 */        or $a2, $zero, $zero
  /* 123C84 801332D4 0C00277D */       jal omAddGObjRenderProc
  /* 123C88 801332D8 3C078000 */       lui $a3, 0x8000
  /* 123C8C 801332DC 3C0F8013 */       lui $t7, %hi(D_ovl19_80134A48)
  /* 123C90 801332E0 8DEF4A48 */        lw $t7, %lo(D_ovl19_80134A48)($t7)
  /* 123C94 801332E4 3C180002 */       lui $t8, %hi(D_NF_00018000)
  /* 123C98 801332E8 27188000 */     addiu $t8, $t8, %lo(D_NF_00018000)
  /* 123C9C 801332EC 02002025 */        or $a0, $s0, $zero
  /* 123CA0 801332F0 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123CA4 801332F4 01F82821 */      addu $a1, $t7, $t8
  /* 123CA8 801332F8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 123CAC 801332FC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 123CB0 80133300 3C198013 */       lui $t9, %hi(D_ovl19_80134A48)
  /* 123CB4 80133304 3C030000 */       lui $v1, %hi(D_NF_00002A30)
  /* 123CB8 80133308 E4400058 */      swc1 $f0, 0x58($v0)
  /* 123CBC 8013330C E440005C */      swc1 $f0, 0x5c($v0)
  /* 123CC0 80133310 8F394A48 */        lw $t9, %lo(D_ovl19_80134A48)($t9)
  /* 123CC4 80133314 24632A30 */     addiu $v1, $v1, %lo(D_NF_00002A30)
  /* 123CC8 80133318 AFA3002C */        sw $v1, 0x2c($sp)
  /* 123CCC 8013331C 02002025 */        or $a0, $s0, $zero
  /* 123CD0 80133320 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123CD4 80133324 03232821 */      addu $a1, $t9, $v1
  /* 123CD8 80133328 8FA3002C */        lw $v1, 0x2c($sp)
  /* 123CDC 8013332C 94480024 */       lhu $t0, 0x24($v0)
  /* 123CE0 80133330 3C01430C */       lui $at, (0x430C0000 >> 16) # 140.0
  /* 123CE4 80133334 44812000 */      mtc1 $at, $f4 # 140.0 to cop1
  /* 123CE8 80133338 3C01430F */       lui $at, (0x430F0000 >> 16) # 143.0
  /* 123CEC 8013333C 44813000 */      mtc1 $at, $f6 # 143.0 to cop1
  /* 123CF0 80133340 310AFFDF */      andi $t2, $t0, 0xffdf
  /* 123CF4 80133344 A44A0024 */        sh $t2, 0x24($v0)
  /* 123CF8 80133348 354B0001 */       ori $t3, $t2, 1
  /* 123CFC 8013334C 240C00A0 */     addiu $t4, $zero, 0xa0
  /* 123D00 80133350 240D0078 */     addiu $t5, $zero, 0x78
  /* 123D04 80133354 240E0014 */     addiu $t6, $zero, 0x14
  /* 123D08 80133358 A44B0024 */        sh $t3, 0x24($v0)
  /* 123D0C 8013335C A04C0028 */        sb $t4, 0x28($v0)
  /* 123D10 80133360 A04D0029 */        sb $t5, 0x29($v0)
  /* 123D14 80133364 A04E002A */        sb $t6, 0x2a($v0)
  /* 123D18 80133368 3C0F8013 */       lui $t7, %hi(D_ovl19_80134A48)
  /* 123D1C 8013336C E4440058 */      swc1 $f4, 0x58($v0)
  /* 123D20 80133370 E446005C */      swc1 $f6, 0x5c($v0)
  /* 123D24 80133374 8DEF4A48 */        lw $t7, %lo(D_ovl19_80134A48)($t7)
  /* 123D28 80133378 02002025 */        or $a0, $s0, $zero
  /* 123D2C 8013337C 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123D30 80133380 01E32821 */      addu $a1, $t7, $v1
  /* 123D34 80133384 94580024 */       lhu $t8, 0x24($v0)
  /* 123D38 80133388 3C014361 */       lui $at, (0x43610000 >> 16) # 225.0
  /* 123D3C 8013338C 44814000 */      mtc1 $at, $f8 # 225.0 to cop1
  /* 123D40 80133390 3C014260 */       lui $at, (0x42600000 >> 16) # 56.0
  /* 123D44 80133394 44815000 */      mtc1 $at, $f10 # 56.0 to cop1
  /* 123D48 80133398 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 123D4C 8013339C A4480024 */        sh $t0, 0x24($v0)
  /* 123D50 801333A0 35090001 */       ori $t1, $t0, 1
  /* 123D54 801333A4 240A00A0 */     addiu $t2, $zero, 0xa0
  /* 123D58 801333A8 240B0078 */     addiu $t3, $zero, 0x78
  /* 123D5C 801333AC 240C0014 */     addiu $t4, $zero, 0x14
  /* 123D60 801333B0 A4490024 */        sh $t1, 0x24($v0)
  /* 123D64 801333B4 A04A0028 */        sb $t2, 0x28($v0)
  /* 123D68 801333B8 A04B0029 */        sb $t3, 0x29($v0)
  /* 123D6C 801333BC A04C002A */        sb $t4, 0x2a($v0)
  /* 123D70 801333C0 3C0D8013 */       lui $t5, %hi(D_ovl19_80134A4C)
  /* 123D74 801333C4 E4480058 */      swc1 $f8, 0x58($v0)
  /* 123D78 801333C8 E44A005C */      swc1 $f10, 0x5c($v0)
  /* 123D7C 801333CC 8DAD4A4C */        lw $t5, %lo(D_ovl19_80134A4C)($t5)
  /* 123D80 801333D0 3C0E0000 */       lui $t6, %hi(D_NF_00005EB0)
  /* 123D84 801333D4 25CE5EB0 */     addiu $t6, $t6, %lo(D_NF_00005EB0)
  /* 123D88 801333D8 02002025 */        or $a0, $s0, $zero
  /* 123D8C 801333DC 0C0333F7 */       jal gcAppendSObjWithSprite
  /* 123D90 801333E0 01AE2821 */      addu $a1, $t5, $t6
  /* 123D94 801333E4 944F0024 */       lhu $t7, 0x24($v0)
  /* 123D98 801333E8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 123D9C 801333EC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 123DA0 801333F0 24030099 */     addiu $v1, $zero, 0x99
  /* 123DA4 801333F4 31F9FFDF */      andi $t9, $t7, 0xffdf
  /* 123DA8 801333F8 A4590024 */        sh $t9, 0x24($v0)
  /* 123DAC 801333FC 37280001 */       ori $t0, $t9, 1
  /* 123DB0 80133400 A4480024 */        sh $t0, 0x24($v0)
  /* 123DB4 80133404 A0430028 */        sb $v1, 0x28($v0)
  /* 123DB8 80133408 A0430029 */        sb $v1, 0x29($v0)
  /* 123DBC 8013340C A043002A */        sb $v1, 0x2a($v0)
  /* 123DC0 80133410 E4400058 */      swc1 $f0, 0x58($v0)
  /* 123DC4 80133414 E440005C */      swc1 $f0, 0x5c($v0)
  /* 123DC8 80133418 8FBF0024 */        lw $ra, 0x24($sp)
  /* 123DCC 8013341C 8FB00020 */        lw $s0, 0x20($sp)
  /* 123DD0 80133420 27BD0038 */     addiu $sp, $sp, 0x38
  /* 123DD4 80133424 03E00008 */        jr $ra
  /* 123DD8 80133428 00000000 */       nop

glabel mnVSCreateButtonValuesViewport
  /* 123DDC 8013342C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 123DE0 80133430 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 123DE4 80133434 AFBF003C */        sw $ra, 0x3c($sp)
  /* 123DE8 80133438 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 123DEC 8013343C 240F0014 */     addiu $t7, $zero, 0x14
  /* 123DF0 80133440 24180000 */     addiu $t8, $zero, 0
  /* 123DF4 80133444 24190008 */     addiu $t9, $zero, 8
  /* 123DF8 80133448 2408FFFF */     addiu $t0, $zero, -1
  /* 123DFC 8013344C 24090001 */     addiu $t1, $zero, 1
  /* 123E00 80133450 240A0001 */     addiu $t2, $zero, 1
  /* 123E04 80133454 AFAA0030 */        sw $t2, 0x30($sp)
  /* 123E08 80133458 AFA90028 */        sw $t1, 0x28($sp)
  /* 123E0C 8013345C AFA80020 */        sw $t0, 0x20($sp)
  /* 123E10 80133460 AFB9001C */        sw $t9, 0x1c($sp)
  /* 123E14 80133464 AFB80018 */        sw $t8, 0x18($sp)
  /* 123E18 80133468 AFAF0014 */        sw $t7, 0x14($sp)
  /* 123E1C 8013346C AFAE0010 */        sw $t6, 0x10($sp)
  /* 123E20 80133470 AFA00024 */        sw $zero, 0x24($sp)
  /* 123E24 80133474 AFA0002C */        sw $zero, 0x2c($sp)
  /* 123E28 80133478 AFA00034 */        sw $zero, 0x34($sp)
  /* 123E2C 8013347C 24040001 */     addiu $a0, $zero, 1
  /* 123E30 80133480 00002825 */        or $a1, $zero, $zero
  /* 123E34 80133484 24060001 */     addiu $a2, $zero, 1
  /* 123E38 80133488 0C002E4F */       jal func_8000B93C
  /* 123E3C 8013348C 3C078000 */       lui $a3, 0x8000
  /* 123E40 80133490 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 123E44 80133494 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 123E48 80133498 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 123E4C 8013349C 8C430074 */        lw $v1, 0x74($v0)
  /* 123E50 801334A0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 123E54 801334A4 44050000 */      mfc1 $a1, $f0
  /* 123E58 801334A8 44060000 */      mfc1 $a2, $f0
  /* 123E5C 801334AC 3C07439B */       lui $a3, 0x439b
  /* 123E60 801334B0 24640008 */     addiu $a0, $v1, 8
  /* 123E64 801334B4 0C001C20 */       jal func_80007080
  /* 123E68 801334B8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 123E6C 801334BC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 123E70 801334C0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 123E74 801334C4 03E00008 */        jr $ra
  /* 123E78 801334C8 00000000 */       nop

glabel mnVSCreateButtonViewport
  /* 123E7C 801334CC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 123E80 801334D0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 123E84 801334D4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 123E88 801334D8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 123E8C 801334DC 240F0028 */     addiu $t7, $zero, 0x28
  /* 123E90 801334E0 24180000 */     addiu $t8, $zero, 0
  /* 123E94 801334E4 24190004 */     addiu $t9, $zero, 4
  /* 123E98 801334E8 2408FFFF */     addiu $t0, $zero, -1
  /* 123E9C 801334EC 24090001 */     addiu $t1, $zero, 1
  /* 123EA0 801334F0 240A0001 */     addiu $t2, $zero, 1
  /* 123EA4 801334F4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 123EA8 801334F8 AFA90028 */        sw $t1, 0x28($sp)
  /* 123EAC 801334FC AFA80020 */        sw $t0, 0x20($sp)
  /* 123EB0 80133500 AFB9001C */        sw $t9, 0x1c($sp)
  /* 123EB4 80133504 AFB80018 */        sw $t8, 0x18($sp)
  /* 123EB8 80133508 AFAF0014 */        sw $t7, 0x14($sp)
  /* 123EBC 8013350C AFAE0010 */        sw $t6, 0x10($sp)
  /* 123EC0 80133510 AFA00024 */        sw $zero, 0x24($sp)
  /* 123EC4 80133514 AFA0002C */        sw $zero, 0x2c($sp)
  /* 123EC8 80133518 AFA00034 */        sw $zero, 0x34($sp)
  /* 123ECC 8013351C 24040001 */     addiu $a0, $zero, 1
  /* 123ED0 80133520 00002825 */        or $a1, $zero, $zero
  /* 123ED4 80133524 24060001 */     addiu $a2, $zero, 1
  /* 123ED8 80133528 0C002E4F */       jal func_8000B93C
  /* 123EDC 8013352C 3C078000 */       lui $a3, 0x8000
  /* 123EE0 80133530 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 123EE4 80133534 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 123EE8 80133538 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 123EEC 8013353C 8C430074 */        lw $v1, 0x74($v0)
  /* 123EF0 80133540 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 123EF4 80133544 44050000 */      mfc1 $a1, $f0
  /* 123EF8 80133548 44060000 */      mfc1 $a2, $f0
  /* 123EFC 8013354C 3C07439B */       lui $a3, 0x439b
  /* 123F00 80133550 24640008 */     addiu $a0, $v1, 8
  /* 123F04 80133554 0C001C20 */       jal func_80007080
  /* 123F08 80133558 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 123F0C 8013355C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 123F10 80133560 27BD0040 */     addiu $sp, $sp, 0x40
  /* 123F14 80133564 03E00008 */        jr $ra
  /* 123F18 80133568 00000000 */       nop

glabel mnVSCreateMenuNameViewport
  /* 123F1C 8013356C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 123F20 80133570 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 123F24 80133574 AFBF003C */        sw $ra, 0x3c($sp)
  /* 123F28 80133578 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 123F2C 8013357C 240F003C */     addiu $t7, $zero, 0x3c
  /* 123F30 80133580 24180000 */     addiu $t8, $zero, 0
  /* 123F34 80133584 24190002 */     addiu $t9, $zero, 2
  /* 123F38 80133588 2408FFFF */     addiu $t0, $zero, -1
  /* 123F3C 8013358C 24090001 */     addiu $t1, $zero, 1
  /* 123F40 80133590 240A0001 */     addiu $t2, $zero, 1
  /* 123F44 80133594 AFAA0030 */        sw $t2, 0x30($sp)
  /* 123F48 80133598 AFA90028 */        sw $t1, 0x28($sp)
  /* 123F4C 8013359C AFA80020 */        sw $t0, 0x20($sp)
  /* 123F50 801335A0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 123F54 801335A4 AFB80018 */        sw $t8, 0x18($sp)
  /* 123F58 801335A8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 123F5C 801335AC AFAE0010 */        sw $t6, 0x10($sp)
  /* 123F60 801335B0 AFA00024 */        sw $zero, 0x24($sp)
  /* 123F64 801335B4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 123F68 801335B8 AFA00034 */        sw $zero, 0x34($sp)
  /* 123F6C 801335BC 24040001 */     addiu $a0, $zero, 1
  /* 123F70 801335C0 00002825 */        or $a1, $zero, $zero
  /* 123F74 801335C4 24060001 */     addiu $a2, $zero, 1
  /* 123F78 801335C8 0C002E4F */       jal func_8000B93C
  /* 123F7C 801335CC 3C078000 */       lui $a3, 0x8000
  /* 123F80 801335D0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 123F84 801335D4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 123F88 801335D8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 123F8C 801335DC 8C430074 */        lw $v1, 0x74($v0)
  /* 123F90 801335E0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 123F94 801335E4 44050000 */      mfc1 $a1, $f0
  /* 123F98 801335E8 44060000 */      mfc1 $a2, $f0
  /* 123F9C 801335EC 3C07439B */       lui $a3, 0x439b
  /* 123FA0 801335F0 24640008 */     addiu $a0, $v1, 8
  /* 123FA4 801335F4 0C001C20 */       jal func_80007080
  /* 123FA8 801335F8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 123FAC 801335FC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 123FB0 80133600 27BD0040 */     addiu $sp, $sp, 0x40
  /* 123FB4 80133604 03E00008 */        jr $ra
  /* 123FB8 80133608 00000000 */       nop

glabel mnVSCreateBackgroundViewport
  /* 123FBC 8013360C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 123FC0 80133610 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 123FC4 80133614 AFBF003C */        sw $ra, 0x3c($sp)
  /* 123FC8 80133618 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 123FCC 8013361C 240F0050 */     addiu $t7, $zero, 0x50
  /* 123FD0 80133620 24180000 */     addiu $t8, $zero, 0
  /* 123FD4 80133624 24190001 */     addiu $t9, $zero, 1
  /* 123FD8 80133628 2408FFFF */     addiu $t0, $zero, -1
  /* 123FDC 8013362C 24090001 */     addiu $t1, $zero, 1
  /* 123FE0 80133630 240A0001 */     addiu $t2, $zero, 1
  /* 123FE4 80133634 AFAA0030 */        sw $t2, 0x30($sp)
  /* 123FE8 80133638 AFA90028 */        sw $t1, 0x28($sp)
  /* 123FEC 8013363C AFA80020 */        sw $t0, 0x20($sp)
  /* 123FF0 80133640 AFB9001C */        sw $t9, 0x1c($sp)
  /* 123FF4 80133644 AFB80018 */        sw $t8, 0x18($sp)
  /* 123FF8 80133648 AFAF0014 */        sw $t7, 0x14($sp)
  /* 123FFC 8013364C AFAE0010 */        sw $t6, 0x10($sp)
  /* 124000 80133650 AFA00024 */        sw $zero, 0x24($sp)
  /* 124004 80133654 AFA0002C */        sw $zero, 0x2c($sp)
  /* 124008 80133658 AFA00034 */        sw $zero, 0x34($sp)
  /* 12400C 8013365C 24040001 */     addiu $a0, $zero, 1
  /* 124010 80133660 00002825 */        or $a1, $zero, $zero
  /* 124014 80133664 24060001 */     addiu $a2, $zero, 1
  /* 124018 80133668 0C002E4F */       jal func_8000B93C
  /* 12401C 8013366C 3C078000 */       lui $a3, 0x8000
  /* 124020 80133670 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 124024 80133674 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 124028 80133678 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 12402C 8013367C 8C430074 */        lw $v1, 0x74($v0)
  /* 124030 80133680 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 124034 80133684 44050000 */      mfc1 $a1, $f0
  /* 124038 80133688 44060000 */      mfc1 $a2, $f0
  /* 12403C 8013368C 3C07439B */       lui $a3, 0x439b
  /* 124040 80133690 24640008 */     addiu $a0, $v1, 8
  /* 124044 80133694 0C001C20 */       jal func_80007080
  /* 124048 80133698 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 12404C 8013369C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 124050 801336A0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 124054 801336A4 03E00008 */        jr $ra
  /* 124058 801336A8 00000000 */       nop

glabel mnVSInitVars
  /* 12405C 801336AC 3C0E800A */       lui $t6, %hi((gSceneData + 0x1))
  /* 124060 801336B0 91CE4AD1 */       lbu $t6, %lo((gSceneData + 0x1))($t6)
  /* 124064 801336B4 2401000A */     addiu $at, $zero, 0xa
  /* 124068 801336B8 3C03800A */       lui $v1, %hi(gTransferBattleState)
  /* 12406C 801336BC 15C10005 */       bne $t6, $at, .L801336D4
  /* 124070 801336C0 24634D08 */     addiu $v1, $v1, %lo(gTransferBattleState)
  /* 124074 801336C4 240F0003 */     addiu $t7, $zero, 3
  /* 124078 801336C8 3C018013 */       lui $at, %hi(gMNVSCursorIndex)
  /* 12407C 801336CC 10000003 */         b .L801336DC
  /* 124080 801336D0 AC2F4948 */        sw $t7, %lo(gMNVSCursorIndex)($at)
  .L801336D4:
  /* 124084 801336D4 3C018013 */       lui $at, %hi(gMNVSCursorIndex)
  /* 124088 801336D8 AC204948 */        sw $zero, %lo(gMNVSCursorIndex)($at)
  .L801336DC:
  /* 12408C 801336DC 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124090 801336E0 AC20497C */        sw $zero, %lo(gMNVSChangeWait)($at)
  /* 124094 801336E4 90620002 */       lbu $v0, 2($v1) # gTransferBattleState + 2
  /* 124098 801336E8 24040001 */     addiu $a0, $zero, 1
  /* 12409C 801336EC 50400006 */      beql $v0, $zero, .L80133708
  /* 1240A0 801336F0 90780003 */       lbu $t8, 3($v1) # gTransferBattleState + 3
  /* 1240A4 801336F4 5044000E */      beql $v0, $a0, .L80133730
  /* 1240A8 801336F8 90790003 */       lbu $t9, 3($v1) # gTransferBattleState + 3
  /* 1240AC 801336FC 10000015 */         b .L80133754
  /* 1240B0 80133700 906A0006 */       lbu $t2, 6($v1) # gTransferBattleState + 6
  /* 1240B4 80133704 90780003 */       lbu $t8, 3($v1) # gTransferBattleState + 3
  .L80133708:
  /* 1240B8 80133708 24040001 */     addiu $a0, $zero, 1
  /* 1240BC 8013370C 3C018013 */       lui $at, 0x8013
  /* 1240C0 80133710 14980004 */       bne $a0, $t8, .L80133724
  /* 1240C4 80133714 00000000 */       nop
  /* 1240C8 80133718 3C018013 */       lui $at, %hi(gMNVSRule)
  /* 1240CC 8013371C 1000000C */         b .L80133750
  /* 1240D0 80133720 AC20494C */        sw $zero, %lo(gMNVSRule)($at)
  .L80133724:
  /* 1240D4 80133724 1000000A */         b .L80133750
  /* 1240D8 80133728 AC24494C */        sw $a0, %lo(gMNVSRule)($at)
  /* 1240DC 8013372C 90790003 */       lbu $t9, 3($v1) # gTransferBattleState + 3
  .L80133730:
  /* 1240E0 80133730 24080002 */     addiu $t0, $zero, 2
  /* 1240E4 80133734 24090003 */     addiu $t1, $zero, 3
  /* 1240E8 80133738 14990004 */       bne $a0, $t9, .L8013374C
  /* 1240EC 8013373C 3C018013 */       lui $at, 0x8013
  /* 1240F0 80133740 3C018013 */       lui $at, %hi(gMNVSRule)
  /* 1240F4 80133744 10000002 */         b .L80133750
  /* 1240F8 80133748 AC28494C */        sw $t0, %lo(gMNVSRule)($at)
  .L8013374C:
  /* 1240FC 8013374C AC29494C */        sw $t1, %lo(gMNVSRule)($at)
  .L80133750:
  /* 124100 80133750 906A0006 */       lbu $t2, 6($v1) # gTransferBattleState + 6
  .L80133754:
  /* 124104 80133754 3C018013 */       lui $at, %hi(gMNVSTime)
  /* 124108 80133758 3C028013 */       lui $v0, %hi(gMNVSFramesElapsed)
  /* 12410C 8013375C AC2A4950 */        sw $t2, %lo(gMNVSTime)($at)
  /* 124110 80133760 906B0007 */       lbu $t3, 7($v1) # gTransferBattleState + 7
  /* 124114 80133764 3C018013 */       lui $at, %hi(gMNVSStock)
  /* 124118 80133768 24424980 */     addiu $v0, $v0, %lo(gMNVSFramesElapsed)
  /* 12411C 8013376C AC2B4954 */        sw $t3, %lo(gMNVSStock)($at)
  /* 124120 80133770 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowsGObj)
  /* 124124 80133774 AC204968 */        sw $zero, %lo(gMNVSTimeStockArrowsGObj)($at)
  /* 124128 80133778 3C018013 */       lui $at, %hi(gMNVSRuleArrowsGObj)
  /* 12412C 8013377C AC204964 */        sw $zero, %lo(gMNVSRuleArrowsGObj)($at)
  /* 124130 80133780 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124134 80133784 AC204978 */        sw $zero, %lo(gMNVSInputDirection)($at)
  /* 124138 80133788 AC400000 */        sw $zero, ($v0) # gMNVSFramesElapsed + 0
  /* 12413C 8013378C 3C018013 */       lui $at, %hi(gMNVSExitInterrupt)
  /* 124140 80133790 AC204974 */        sw $zero, %lo(gMNVSExitInterrupt)($at)
  /* 124144 80133794 8C4C0000 */        lw $t4, ($v0) # gMNVSFramesElapsed + 0
  /* 124148 80133798 3C018013 */       lui $at, %hi(gMNVSMaxFramesElapsed)
  /* 12414C 8013379C 258D4650 */     addiu $t5, $t4, 0x4650
  /* 124150 801337A0 AC2D4984 */        sw $t5, %lo(gMNVSMaxFramesElapsed)($at)
  /* 124154 801337A4 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowBlinkTimer)
  /* 124158 801337A8 AC20496C */        sw $zero, %lo(gMNVSTimeStockArrowBlinkTimer)($at)
  /* 12415C 801337AC 3C018013 */       lui $at, %hi(gMNVSRuleArrowBlinkTimer)
  /* 124160 801337B0 03E00008 */        jr $ra
  /* 124164 801337B4 AC204970 */        sw $zero, %lo(gMNVSRuleArrowBlinkTimer)($at)

glabel mnVSSaveSettings
  /* 124168 801337B8 3C0E8013 */       lui $t6, %hi(gMNVSTime)
  /* 12416C 801337BC 8DCE4950 */        lw $t6, %lo(gMNVSTime)($t6)
  /* 124170 801337C0 3C03800A */       lui $v1, %hi(gTransferBattleState)
  /* 124174 801337C4 24634D08 */     addiu $v1, $v1, %lo(gTransferBattleState)
  /* 124178 801337C8 3C0F8013 */       lui $t7, %hi(gMNVSStock)
  /* 12417C 801337CC A06E0006 */        sb $t6, 6($v1) # gTransferBattleState + 6
  /* 124180 801337D0 8DEF4954 */        lw $t7, %lo(gMNVSStock)($t7)
  /* 124184 801337D4 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 124188 801337D8 24010001 */     addiu $at, $zero, 1
  /* 12418C 801337DC A06F0007 */        sb $t7, 7($v1) # gTransferBattleState + 7
  /* 124190 801337E0 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 124194 801337E4 5040000E */      beql $v0, $zero, .L80133820
  /* 124198 801337E8 24020001 */     addiu $v0, $zero, 1
  /* 12419C 801337EC 10410008 */       beq $v0, $at, .L80133810
  /* 1241A0 801337F0 24180002 */     addiu $t8, $zero, 2
  /* 1241A4 801337F4 24010002 */     addiu $at, $zero, 2
  /* 1241A8 801337F8 10410010 */       beq $v0, $at, .L8013383C
  /* 1241AC 801337FC 24010003 */     addiu $at, $zero, 3
  /* 1241B0 80133800 1041000A */       beq $v0, $at, .L8013382C
  /* 1241B4 80133804 24190002 */     addiu $t9, $zero, 2
  /* 1241B8 80133808 03E00008 */        jr $ra
  /* 1241BC 8013380C 00000000 */       nop

  .L80133810:
  /* 1241C0 80133810 A0600002 */        sb $zero, 2($v1)
  /* 1241C4 80133814 03E00008 */        jr $ra
  /* 1241C8 80133818 A0780003 */        sb $t8, 3($v1)

  /* 1241CC 8013381C 24020001 */     addiu $v0, $zero, 1
  .L80133820:
  /* 1241D0 80133820 A0600002 */        sb $zero, 2($v1)
  /* 1241D4 80133824 03E00008 */        jr $ra
  /* 1241D8 80133828 A0620003 */        sb $v0, 3($v1)

  .L8013382C:
  /* 1241DC 8013382C 24020001 */     addiu $v0, $zero, 1
  /* 1241E0 80133830 A0620002 */        sb $v0, 2($v1)
  /* 1241E4 80133834 03E00008 */        jr $ra
  /* 1241E8 80133838 A0790003 */        sb $t9, 3($v1)

  .L8013383C:
  /* 1241EC 8013383C 24020001 */     addiu $v0, $zero, 1
  /* 1241F0 80133840 A0620002 */        sb $v0, 2($v1)
  /* 1241F4 80133844 A0620003 */        sb $v0, 3($v1)
  /* 1241F8 80133848 03E00008 */        jr $ra
  /* 1241FC 8013384C 00000000 */       nop

glabel mnVSGetShade
  /* 124200 80133850 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 124204 80133854 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 124208 80133858 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 12420C 8013385C 24060001 */     addiu $a2, $zero, 1
  /* 124210 80133860 10400003 */      beqz $v0, .L80133870
  /* 124214 80133864 00000000 */       nop
  /* 124218 80133868 14C20003 */       bne $a2, $v0, .L80133878
  /* 12421C 8013386C 27A30010 */     addiu $v1, $sp, 0x10
  .L80133870:
  /* 124220 80133870 10000034 */         b .L80133944
  /* 124224 80133874 00001025 */        or $v0, $zero, $zero
  .L80133878:
  /* 124228 80133878 27A20020 */     addiu $v0, $sp, 0x20
  .L8013387C:
  /* 12422C 8013387C 24630004 */     addiu $v1, $v1, 4
  /* 124230 80133880 0062082B */      sltu $at, $v1, $v0
  /* 124234 80133884 1420FFFD */      bnez $at, .L8013387C
  /* 124238 80133888 AC60FFFC */        sw $zero, -4($v1)
  /* 12423C 8013388C 3C07800A */       lui $a3, %hi(gTransferBattleState)
  /* 124240 80133890 24E74D08 */     addiu $a3, $a3, %lo(gTransferBattleState)
  /* 124244 80133894 00001025 */        or $v0, $zero, $zero
  /* 124248 80133898 27A90010 */     addiu $t1, $sp, 0x10
  /* 12424C 8013389C 24080074 */     addiu $t0, $zero, 0x74
  .L801338A0:
  /* 124250 801338A0 50820014 */      beql $a0, $v0, .L801338F4
  /* 124254 801338A4 24420001 */     addiu $v0, $v0, 1
  /* 124258 801338A8 00880019 */     multu $a0, $t0
  /* 12425C 801338AC 00007012 */      mflo $t6
  /* 124260 801338B0 00EE1821 */      addu $v1, $a3, $t6
  /* 124264 801338B4 90780023 */       lbu $t8, 0x23($v1)
  /* 124268 801338B8 00480019 */     multu $v0, $t0
  /* 12426C 801338BC 00007812 */      mflo $t7
  /* 124270 801338C0 00EF2821 */      addu $a1, $a3, $t7
  /* 124274 801338C4 90B90023 */       lbu $t9, 0x23($a1)
  /* 124278 801338C8 5719000A */      bnel $t8, $t9, .L801338F4
  /* 12427C 801338CC 24420001 */     addiu $v0, $v0, 1
  /* 124280 801338D0 906A0024 */       lbu $t2, 0x24($v1)
  /* 124284 801338D4 90AB0024 */       lbu $t3, 0x24($a1)
  /* 124288 801338D8 554B0006 */      bnel $t2, $t3, .L801338F4
  /* 12428C 801338DC 24420001 */     addiu $v0, $v0, 1
  /* 124290 801338E0 90AC0027 */       lbu $t4, 0x27($a1)
  /* 124294 801338E4 000C6880 */       sll $t5, $t4, 2
  /* 124298 801338E8 012D7021 */      addu $t6, $t1, $t5
  /* 12429C 801338EC ADC60000 */        sw $a2, ($t6)
  /* 1242A0 801338F0 24420001 */     addiu $v0, $v0, 1
  .L801338F4:
  /* 1242A4 801338F4 28410004 */      slti $at, $v0, 4
  /* 1242A8 801338F8 1420FFE9 */      bnez $at, .L801338A0
  /* 1242AC 801338FC 00000000 */       nop
  /* 1242B0 80133900 8FAF0010 */        lw $t7, 0x10($sp)
  /* 1242B4 80133904 8FB80014 */        lw $t8, 0x14($sp)
  /* 1242B8 80133908 15E00003 */      bnez $t7, .L80133918
  /* 1242BC 8013390C 00000000 */       nop
  /* 1242C0 80133910 1000000C */         b .L80133944
  /* 1242C4 80133914 00001025 */        or $v0, $zero, $zero
  .L80133918:
  /* 1242C8 80133918 17000003 */      bnez $t8, .L80133928
  /* 1242CC 8013391C 8FB90018 */        lw $t9, 0x18($sp)
  /* 1242D0 80133920 10000008 */         b .L80133944
  /* 1242D4 80133924 24020001 */     addiu $v0, $zero, 1
  .L80133928:
  /* 1242D8 80133928 17200003 */      bnez $t9, .L80133938
  /* 1242DC 8013392C 8FAA001C */        lw $t2, 0x1c($sp)
  /* 1242E0 80133930 10000004 */         b .L80133944
  /* 1242E4 80133934 24020002 */     addiu $v0, $zero, 2
  .L80133938:
  /* 1242E8 80133938 15400002 */      bnez $t2, .L80133944
  /* 1242EC 8013393C 00000000 */       nop
  /* 1242F0 80133940 24020003 */     addiu $v0, $zero, 3
  .L80133944:
  /* 1242F4 80133944 03E00008 */        jr $ra
  /* 1242F8 80133948 27BD0020 */     addiu $sp, $sp, 0x20

glabel mnVSGetCostume
  /* 1242FC 8013394C 27BDFF98 */     addiu $sp, $sp, -0x68
  /* 124300 80133950 AFB5002C */        sw $s5, 0x2c($sp)
  /* 124304 80133954 0080A825 */        or $s5, $a0, $zero
  /* 124308 80133958 AFBF003C */        sw $ra, 0x3c($sp)
  /* 12430C 8013395C AFBE0038 */        sw $fp, 0x38($sp)
  /* 124310 80133960 AFB70034 */        sw $s7, 0x34($sp)
  /* 124314 80133964 AFB60030 */        sw $s6, 0x30($sp)
  /* 124318 80133968 AFB40028 */        sw $s4, 0x28($sp)
  /* 12431C 8013396C AFB30024 */        sw $s3, 0x24($sp)
  /* 124320 80133970 AFB20020 */        sw $s2, 0x20($sp)
  /* 124324 80133974 AFB1001C */        sw $s1, 0x1c($sp)
  /* 124328 80133978 AFB00018 */        sw $s0, 0x18($sp)
  /* 12432C 8013397C AFA5006C */        sw $a1, 0x6c($sp)
  /* 124330 80133980 27A20048 */     addiu $v0, $sp, 0x48
  /* 124334 80133984 27A30058 */     addiu $v1, $sp, 0x58
  .L80133988:
  /* 124338 80133988 24420004 */     addiu $v0, $v0, 4
  /* 12433C 8013398C 0043082B */      sltu $at, $v0, $v1
  /* 124340 80133990 1420FFFD */      bnez $at, .L80133988
  /* 124344 80133994 AC40FFFC */        sw $zero, -4($v0)
  /* 124348 80133998 3C17800A */       lui $s7, %hi(gTransferBattleState)
  /* 12434C 8013399C 26F74D08 */     addiu $s7, $s7, %lo(gTransferBattleState)
  /* 124350 801339A0 0000B025 */        or $s6, $zero, $zero
  /* 124354 801339A4 241E0074 */     addiu $fp, $zero, 0x74
  /* 124358 801339A8 24140004 */     addiu $s4, $zero, 4
  /* 12435C 801339AC 24130001 */     addiu $s3, $zero, 1
  /* 124360 801339B0 27B20048 */     addiu $s2, $sp, 0x48
  /* 124364 801339B4 8FAE006C */        lw $t6, 0x6c($sp)
  .L801339B8:
  /* 124368 801339B8 52CE0014 */      beql $s6, $t6, .L80133A0C
  /* 12436C 801339BC 26D60001 */     addiu $s6, $s6, 1
  /* 124370 801339C0 02DE0019 */     multu $s6, $fp
  /* 124374 801339C4 00008025 */        or $s0, $zero, $zero
  /* 124378 801339C8 00007812 */      mflo $t7
  /* 12437C 801339CC 02EF8821 */      addu $s1, $s7, $t7
  /* 124380 801339D0 92380023 */       lbu $t8, 0x23($s1)
  /* 124384 801339D4 16B8000C */       bne $s5, $t8, .L80133A08
  /* 124388 801339D8 02A02025 */        or $a0, $s5, $zero
  .L801339DC:
  /* 12438C 801339DC 0C03B03B */       jal ftCostume_GetIndexFFA
  /* 124390 801339E0 02002825 */        or $a1, $s0, $zero
  /* 124394 801339E4 92390026 */       lbu $t9, 0x26($s1)
  /* 124398 801339E8 00104080 */       sll $t0, $s0, 2
  /* 12439C 801339EC 02484821 */      addu $t1, $s2, $t0
  /* 1243A0 801339F0 54590003 */      bnel $v0, $t9, .L80133A00
  /* 1243A4 801339F4 26100001 */     addiu $s0, $s0, 1
  /* 1243A8 801339F8 AD330000 */        sw $s3, ($t1)
  /* 1243AC 801339FC 26100001 */     addiu $s0, $s0, 1
  .L80133A00:
  /* 1243B0 80133A00 5614FFF6 */      bnel $s0, $s4, .L801339DC
  /* 1243B4 80133A04 02A02025 */        or $a0, $s5, $zero
  .L80133A08:
  /* 1243B8 80133A08 26D60001 */     addiu $s6, $s6, 1
  .L80133A0C:
  /* 1243BC 80133A0C 2AC10004 */      slti $at, $s6, 4
  /* 1243C0 80133A10 5420FFE9 */      bnel $at, $zero, .L801339B8
  /* 1243C4 80133A14 8FAE006C */        lw $t6, 0x6c($sp)
  /* 1243C8 80133A18 8FAA0048 */        lw $t2, 0x48($sp)
  /* 1243CC 80133A1C 8FB00018 */        lw $s0, 0x18($sp)
  /* 1243D0 80133A20 8FB1001C */        lw $s1, 0x1c($sp)
  /* 1243D4 80133A24 15400003 */      bnez $t2, .L80133A34
  /* 1243D8 80133A28 8FB20020 */        lw $s2, 0x20($sp)
  /* 1243DC 80133A2C 1000000E */         b .L80133A68
  /* 1243E0 80133A30 00001025 */        or $v0, $zero, $zero
  .L80133A34:
  /* 1243E4 80133A34 8FAB004C */        lw $t3, 0x4c($sp)
  /* 1243E8 80133A38 8FAC0050 */        lw $t4, 0x50($sp)
  /* 1243EC 80133A3C 15600003 */      bnez $t3, .L80133A4C
  /* 1243F0 80133A40 00000000 */       nop
  /* 1243F4 80133A44 10000008 */         b .L80133A68
  /* 1243F8 80133A48 24020001 */     addiu $v0, $zero, 1
  .L80133A4C:
  /* 1243FC 80133A4C 15800003 */      bnez $t4, .L80133A5C
  /* 124400 80133A50 8FAD0054 */        lw $t5, 0x54($sp)
  /* 124404 80133A54 10000004 */         b .L80133A68
  /* 124408 80133A58 24020002 */     addiu $v0, $zero, 2
  .L80133A5C:
  /* 12440C 80133A5C 55A00003 */      bnel $t5, $zero, .L80133A6C
  /* 124410 80133A60 8FBF003C */        lw $ra, 0x3c($sp)
  /* 124414 80133A64 24020003 */     addiu $v0, $zero, 3
  .L80133A68:
  /* 124418 80133A68 8FBF003C */        lw $ra, 0x3c($sp)
  .L80133A6C:
  /* 12441C 80133A6C 8FB30024 */        lw $s3, 0x24($sp)
  /* 124420 80133A70 8FB40028 */        lw $s4, 0x28($sp)
  /* 124424 80133A74 8FB5002C */        lw $s5, 0x2c($sp)
  /* 124428 80133A78 8FB60030 */        lw $s6, 0x30($sp)
  /* 12442C 80133A7C 8FB70034 */        lw $s7, 0x34($sp)
  /* 124430 80133A80 8FBE0038 */        lw $fp, 0x38($sp)
  /* 124434 80133A84 03E00008 */        jr $ra
  /* 124438 80133A88 27BD0068 */     addiu $sp, $sp, 0x68

glabel mnVSSetCostumesAndShades
  /* 12443C 80133A8C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 124440 80133A90 3C028013 */       lui $v0, %hi(gMNVSRule)
  /* 124444 80133A94 8C42494C */        lw $v0, %lo(gMNVSRule)($v0)
  /* 124448 80133A98 AFBF0024 */        sw $ra, 0x24($sp)
  /* 12444C 80133A9C AFB30020 */        sw $s3, 0x20($sp)
  /* 124450 80133AA0 AFB2001C */        sw $s2, 0x1c($sp)
  /* 124454 80133AA4 AFB10018 */        sw $s1, 0x18($sp)
  /* 124458 80133AA8 1040000B */      beqz $v0, .L80133AD8
  /* 12445C 80133AAC AFB00014 */        sw $s0, 0x14($sp)
  /* 124460 80133AB0 24010001 */     addiu $at, $zero, 1
  /* 124464 80133AB4 10410008 */       beq $v0, $at, .L80133AD8
  /* 124468 80133AB8 24010002 */     addiu $at, $zero, 2
  /* 12446C 80133ABC 1041001C */       beq $v0, $at, .L80133B30
  /* 124470 80133AC0 00008825 */        or $s1, $zero, $zero
  /* 124474 80133AC4 24010003 */     addiu $at, $zero, 3
  /* 124478 80133AC8 10410019 */       beq $v0, $at, .L80133B30
  /* 12447C 80133ACC 00000000 */       nop
  /* 124480 80133AD0 10000028 */         b .L80133B74
  /* 124484 80133AD4 8FBF0024 */        lw $ra, 0x24($sp)
  .L80133AD8:
  /* 124488 80133AD8 3C10800A */       lui $s0, %hi(gTransferBattleState)
  /* 12448C 80133ADC 26104D08 */     addiu $s0, $s0, %lo(gTransferBattleState)
  /* 124490 80133AE0 00008825 */        or $s1, $zero, $zero
  /* 124494 80133AE4 24130004 */     addiu $s3, $zero, 4
  /* 124498 80133AE8 2412001C */     addiu $s2, $zero, 0x1c
  .L80133AEC:
  /* 12449C 80133AEC 92040023 */       lbu $a0, 0x23($s0) # gTransferBattleState + 35
  /* 1244A0 80133AF0 5244000B */      beql $s2, $a0, .L80133B20
  /* 1244A4 80133AF4 26310001 */     addiu $s1, $s1, 1
  /* 1244A8 80133AF8 0C04CE53 */       jal mnVSGetCostume
  /* 1244AC 80133AFC 02202825 */        or $a1, $s1, $zero
  /* 1244B0 80133B00 92040023 */       lbu $a0, 0x23($s0) # gTransferBattleState + 35
  /* 1244B4 80133B04 0C03B03B */       jal ftCostume_GetIndexFFA
  /* 1244B8 80133B08 00402825 */        or $a1, $v0, $zero
  /* 1244BC 80133B0C A2020026 */        sb $v0, 0x26($s0) # gTransferBattleState + 38
  /* 1244C0 80133B10 0C04CE14 */       jal mnVSGetShade
  /* 1244C4 80133B14 02202025 */        or $a0, $s1, $zero
  /* 1244C8 80133B18 A2020027 */        sb $v0, 0x27($s0) # gTransferBattleState + 39
  /* 1244CC 80133B1C 26310001 */     addiu $s1, $s1, 1
  .L80133B20:
  /* 1244D0 80133B20 1633FFF2 */       bne $s1, $s3, .L80133AEC
  /* 1244D4 80133B24 26100074 */     addiu $s0, $s0, 0x74
  /* 1244D8 80133B28 10000012 */         b .L80133B74
  /* 1244DC 80133B2C 8FBF0024 */        lw $ra, 0x24($sp)
  .L80133B30:
  /* 1244E0 80133B30 3C10800A */       lui $s0, %hi(gTransferBattleState)
  /* 1244E4 80133B34 26104D08 */     addiu $s0, $s0, %lo(gTransferBattleState)
  /* 1244E8 80133B38 24130004 */     addiu $s3, $zero, 4
  /* 1244EC 80133B3C 2412001C */     addiu $s2, $zero, 0x1c
  .L80133B40:
  /* 1244F0 80133B40 92040023 */       lbu $a0, 0x23($s0) # gTransferBattleState + 35
  /* 1244F4 80133B44 52440008 */      beql $s2, $a0, .L80133B68
  /* 1244F8 80133B48 26310001 */     addiu $s1, $s1, 1
  /* 1244FC 80133B4C 0C03B041 */       jal ftCostume_GetIndexTeam
  /* 124500 80133B50 92050024 */       lbu $a1, 0x24($s0) # gTransferBattleState + 36
  /* 124504 80133B54 A2020026 */        sb $v0, 0x26($s0) # gTransferBattleState + 38
  /* 124508 80133B58 0C04CE14 */       jal mnVSGetShade
  /* 12450C 80133B5C 02202025 */        or $a0, $s1, $zero
  /* 124510 80133B60 A2020027 */        sb $v0, 0x27($s0) # gTransferBattleState + 39
  /* 124514 80133B64 26310001 */     addiu $s1, $s1, 1
  .L80133B68:
  /* 124518 80133B68 1633FFF5 */       bne $s1, $s3, .L80133B40
  /* 12451C 80133B6C 26100074 */     addiu $s0, $s0, 0x74
  /* 124520 80133B70 8FBF0024 */        lw $ra, 0x24($sp)
  .L80133B74:
  /* 124524 80133B74 8FB00014 */        lw $s0, 0x14($sp)
  /* 124528 80133B78 8FB10018 */        lw $s1, 0x18($sp)
  /* 12452C 80133B7C 8FB2001C */        lw $s2, 0x1c($sp)
  /* 124530 80133B80 8FB30020 */        lw $s3, 0x20($sp)
  /* 124534 80133B84 03E00008 */        jr $ra
  /* 124538 80133B88 27BD0028 */     addiu $sp, $sp, 0x28

glabel mnVSMain
  /* 12453C 80133B8C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 124540 80133B90 3C0F8013 */       lui $t7, %hi(gMNVSButtons)
  /* 124544 80133B94 AFBF0014 */        sw $ra, 0x14($sp)
  /* 124548 80133B98 AFA40040 */        sw $a0, 0x40($sp)
  /* 12454C 80133B9C 25EF4870 */     addiu $t7, $t7, %lo(gMNVSButtons)
  /* 124550 80133BA0 8DF90000 */        lw $t9, ($t7) # gMNVSButtons + 0
  /* 124554 80133BA4 8DF80004 */        lw $t8, 4($t7) # gMNVSButtons + 4
  /* 124558 80133BA8 27AE002C */     addiu $t6, $sp, 0x2c
  /* 12455C 80133BAC ADD90000 */        sw $t9, ($t6)
  /* 124560 80133BB0 ADD80004 */        sw $t8, 4($t6)
  /* 124564 80133BB4 8DF8000C */        lw $t8, 0xc($t7) # gMNVSButtons + 12
  /* 124568 80133BB8 8DF90008 */        lw $t9, 8($t7) # gMNVSButtons + 8
  /* 12456C 80133BBC 3C038013 */       lui $v1, %hi(gMNVSFramesElapsed)
  /* 124570 80133BC0 24634980 */     addiu $v1, $v1, %lo(gMNVSFramesElapsed)
  /* 124574 80133BC4 ADD8000C */        sw $t8, 0xc($t6)
  /* 124578 80133BC8 ADD90008 */        sw $t9, 8($t6)
  /* 12457C 80133BCC 8C680000 */        lw $t0, ($v1) # gMNVSFramesElapsed + 0
  /* 124580 80133BD0 3C0A8013 */       lui $t2, %hi(gMNVSMaxFramesElapsed)
  /* 124584 80133BD4 25090001 */     addiu $t1, $t0, 1
  /* 124588 80133BD8 2921000A */      slti $at, $t1, 0xa
  /* 12458C 80133BDC 14200275 */      bnez $at, .L801345B4
  /* 124590 80133BE0 AC690000 */        sw $t1, ($v1) # gMNVSFramesElapsed + 0
  /* 124594 80133BE4 8D4A4984 */        lw $t2, %lo(gMNVSMaxFramesElapsed)($t2)
  /* 124598 80133BE8 3C02800A */       lui $v0, %hi(gSceneData)
  /* 12459C 80133BEC 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1245A0 80133BF0 15490009 */       bne $t2, $t1, .L80133C18
  /* 1245A4 80133BF4 240C0001 */     addiu $t4, $zero, 1
  /* 1245A8 80133BF8 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 1245AC 80133BFC A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 1245B0 80133C00 0C04CDEE */       jal mnVSSaveSettings
  /* 1245B4 80133C04 A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  /* 1245B8 80133C08 0C00171D */       jal func_80005C74
  /* 1245BC 80133C0C 00000000 */       nop
  /* 1245C0 80133C10 10000269 */         b .L801345B8
  /* 1245C4 80133C14 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133C18:
  /* 1245C8 80133C18 0C0E42DF */       jal func_ovl1_80390B7C
  /* 1245CC 80133C1C 00000000 */       nop
  /* 1245D0 80133C20 3C038013 */       lui $v1, %hi(gMNVSFramesElapsed)
  /* 1245D4 80133C24 14400005 */      bnez $v0, .L80133C3C
  /* 1245D8 80133C28 24634980 */     addiu $v1, $v1, %lo(gMNVSFramesElapsed)
  /* 1245DC 80133C2C 8C6D0000 */        lw $t5, ($v1) # gMNVSFramesElapsed + 0
  /* 1245E0 80133C30 3C018013 */       lui $at, %hi(gMNVSMaxFramesElapsed)
  /* 1245E4 80133C34 25AE4650 */     addiu $t6, $t5, 0x4650
  /* 1245E8 80133C38 AC2E4984 */        sw $t6, %lo(gMNVSMaxFramesElapsed)($at)
  .L80133C3C:
  /* 1245EC 80133C3C 3C0F8013 */       lui $t7, %hi(gMNVSExitInterrupt)
  /* 1245F0 80133C40 8DEF4974 */        lw $t7, %lo(gMNVSExitInterrupt)($t7)
  /* 1245F4 80133C44 11E00003 */      beqz $t7, .L80133C54
  /* 1245F8 80133C48 00000000 */       nop
  /* 1245FC 80133C4C 0C00171D */       jal func_80005C74
  /* 124600 80133C50 00000000 */       nop
  .L80133C54:
  /* 124604 80133C54 3C038013 */       lui $v1, %hi(gMNVSChangeWait)
  /* 124608 80133C58 2463497C */     addiu $v1, $v1, %lo(gMNVSChangeWait)
  /* 12460C 80133C5C 8C620000 */        lw $v0, ($v1) # gMNVSChangeWait + 0
  /* 124610 80133C60 2404FFEC */     addiu $a0, $zero, -0x14
  /* 124614 80133C64 10400002 */      beqz $v0, .L80133C70
  /* 124618 80133C68 2458FFFF */     addiu $t8, $v0, -1
  /* 12461C 80133C6C AC780000 */        sw $t8, ($v1) # gMNVSChangeWait + 0
  .L80133C70:
  /* 124620 80133C70 0C0E4281 */       jal func_ovl1_80390A04
  /* 124624 80133C74 24050014 */     addiu $a1, $zero, 0x14
  /* 124628 80133C78 10400010 */      beqz $v0, .L80133CBC
  /* 12462C 80133C7C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 124630 80133C80 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 124634 80133C84 24050014 */     addiu $a1, $zero, 0x14
  /* 124638 80133C88 1040000C */      beqz $v0, .L80133CBC
  /* 12463C 80133C8C 00000000 */       nop
  /* 124640 80133C90 0C0E4201 */       jal func_ovl1_80390804
  /* 124644 80133C94 24040919 */     addiu $a0, $zero, 0x919
  /* 124648 80133C98 14400008 */      bnez $v0, .L80133CBC
  /* 12464C 80133C9C 00000000 */       nop
  /* 124650 80133CA0 0C0E4201 */       jal func_ovl1_80390804
  /* 124654 80133CA4 24040626 */     addiu $a0, $zero, 0x626
  /* 124658 80133CA8 14400004 */      bnez $v0, .L80133CBC
  /* 12465C 80133CAC 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124660 80133CB0 AC20497C */        sw $zero, %lo(gMNVSChangeWait)($at)
  /* 124664 80133CB4 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124668 80133CB8 AC204978 */        sw $zero, %lo(gMNVSInputDirection)($at)
  .L80133CBC:
  /* 12466C 80133CBC 0C0E41DB */       jal func_ovl1_8039076C
  /* 124670 80133CC0 34049000 */       ori $a0, $zero, 0x9000
  /* 124674 80133CC4 1040002D */      beqz $v0, .L80133D7C
  /* 124678 80133CC8 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 12467C 80133CCC 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 124680 80133CD0 24010003 */     addiu $at, $zero, 3
  /* 124684 80133CD4 10400005 */      beqz $v0, .L80133CEC
  /* 124688 80133CD8 00000000 */       nop
  /* 12468C 80133CDC 10410015 */       beq $v0, $at, .L80133D34
  /* 124690 80133CE0 00000000 */       nop
  /* 124694 80133CE4 10000025 */         b .L80133D7C
  /* 124698 80133CE8 00000000 */       nop
  .L80133CEC:
  /* 12469C 80133CEC 0C009A70 */       jal func_800269C0
  /* 1246A0 80133CF0 2404009E */     addiu $a0, $zero, 0x9e
  /* 1246A4 80133CF4 3C048013 */       lui $a0, %hi(gMNVSButtonGObjVSStart)
  /* 1246A8 80133CF8 8C844930 */        lw $a0, %lo(gMNVSButtonGObjVSStart)($a0)
  /* 1246AC 80133CFC 0C04C7D3 */       jal mnVSUpdateButton
  /* 1246B0 80133D00 24050002 */     addiu $a1, $zero, 2
  /* 1246B4 80133D04 0C04CDEE */       jal mnVSSaveSettings
  /* 1246B8 80133D08 00000000 */       nop
  /* 1246BC 80133D0C 3C02800A */       lui $v0, %hi(gSceneData)
  /* 1246C0 80133D10 24190001 */     addiu $t9, $zero, 1
  /* 1246C4 80133D14 3C018013 */       lui $at, %hi(gMNVSExitInterrupt)
  /* 1246C8 80133D18 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1246CC 80133D1C AC394974 */        sw $t9, %lo(gMNVSExitInterrupt)($at)
  /* 1246D0 80133D20 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 1246D4 80133D24 24090010 */     addiu $t1, $zero, 0x10
  /* 1246D8 80133D28 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 1246DC 80133D2C 10000221 */         b .L801345B4
  /* 1246E0 80133D30 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L80133D34:
  /* 1246E4 80133D34 0C009A70 */       jal func_800269C0
  /* 1246E8 80133D38 2404009E */     addiu $a0, $zero, 0x9e
  /* 1246EC 80133D3C 3C048013 */       lui $a0, %hi(gMNVSButtonGObjVSOptions)
  /* 1246F0 80133D40 8C84493C */        lw $a0, %lo(gMNVSButtonGObjVSOptions)($a0)
  /* 1246F4 80133D44 0C04C7D3 */       jal mnVSUpdateButton
  /* 1246F8 80133D48 24050002 */     addiu $a1, $zero, 2
  /* 1246FC 80133D4C 0C04CDEE */       jal mnVSSaveSettings
  /* 124700 80133D50 00000000 */       nop
  /* 124704 80133D54 3C02800A */       lui $v0, %hi(gSceneData)
  /* 124708 80133D58 240A0001 */     addiu $t2, $zero, 1
  /* 12470C 80133D5C 3C018013 */       lui $at, %hi(gMNVSExitInterrupt)
  /* 124710 80133D60 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 124714 80133D64 AC2A4974 */        sw $t2, %lo(gMNVSExitInterrupt)($at)
  /* 124718 80133D68 904B0000 */       lbu $t3, ($v0) # gSceneData + 0
  /* 12471C 80133D6C 240C000A */     addiu $t4, $zero, 0xa
  /* 124720 80133D70 A04C0000 */        sb $t4, ($v0) # gSceneData + 0
  /* 124724 80133D74 1000020F */         b .L801345B4
  /* 124728 80133D78 A04B0001 */        sb $t3, 1($v0) # gSceneData + 1
  .L80133D7C:
  /* 12472C 80133D7C 0C0E41DB */       jal func_ovl1_8039076C
  /* 124730 80133D80 24044000 */     addiu $a0, $zero, 0x4000
  /* 124734 80133D84 1040000A */      beqz $v0, .L80133DB0
  /* 124738 80133D88 00000000 */       nop
  /* 12473C 80133D8C 0C04CDEE */       jal mnVSSaveSettings
  /* 124740 80133D90 00000000 */       nop
  /* 124744 80133D94 3C02800A */       lui $v0, %hi(gSceneData)
  /* 124748 80133D98 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 12474C 80133D9C 904D0000 */       lbu $t5, ($v0) # gSceneData + 0
  /* 124750 80133DA0 240E0007 */     addiu $t6, $zero, 7
  /* 124754 80133DA4 A04E0000 */        sb $t6, ($v0) # gSceneData + 0
  /* 124758 80133DA8 0C00171D */       jal func_80005C74
  /* 12475C 80133DAC A04D0001 */        sb $t5, 1($v0) # gSceneData + 1
  .L80133DB0:
  /* 124760 80133DB0 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124764 80133DB4 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 124768 80133DB8 14400007 */      bnez $v0, .L80133DD8
  /* 12476C 80133DBC 00000000 */       nop
  /* 124770 80133DC0 0C0E4201 */       jal func_ovl1_80390804
  /* 124774 80133DC4 24040808 */     addiu $a0, $zero, 0x808
  /* 124778 80133DC8 14400009 */      bnez $v0, .L80133DF0
  /* 12477C 80133DCC AFA20024 */        sw $v0, 0x24($sp)
  /* 124780 80133DD0 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124784 80133DD4 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L80133DD8:
  /* 124788 80133DD8 14400051 */      bnez $v0, .L80133F20
  /* 12478C 80133DDC 24040014 */     addiu $a0, $zero, 0x14
  /* 124790 80133DE0 0C0E4254 */       jal func_ovl1_80390950
  /* 124794 80133DE4 24050001 */     addiu $a1, $zero, 1
  /* 124798 80133DE8 1040004D */      beqz $v0, .L80133F20
  /* 12479C 80133DEC AFA20028 */        sw $v0, 0x28($sp)
  .L80133DF0:
  /* 1247A0 80133DF0 0C009A70 */       jal func_800269C0
  /* 1247A4 80133DF4 240400A4 */     addiu $a0, $zero, 0xa4
  /* 1247A8 80133DF8 8FAF0024 */        lw $t7, 0x24($sp)
  /* 1247AC 80133DFC 3C038013 */       lui $v1, %hi(gMNVSChangeWait)
  /* 1247B0 80133E00 2463497C */     addiu $v1, $v1, %lo(gMNVSChangeWait)
  /* 1247B4 80133E04 11E00003 */      beqz $t7, .L80133E14
  /* 1247B8 80133E08 2418000C */     addiu $t8, $zero, 0xc
  /* 1247BC 80133E0C 1000000B */         b .L80133E3C
  /* 1247C0 80133E10 AC780000 */        sw $t8, ($v1) # gMNVSChangeWait + 0
  .L80133E14:
  /* 1247C4 80133E14 8FB90028 */        lw $t9, 0x28($sp)
  /* 1247C8 80133E18 240800A0 */     addiu $t0, $zero, 0xa0
  /* 1247CC 80133E1C 24010007 */     addiu $at, $zero, 7
  /* 1247D0 80133E20 01194823 */      subu $t1, $t0, $t9
  /* 1247D4 80133E24 0121001A */       div $zero, $t1, $at
  /* 1247D8 80133E28 00005012 */      mflo $t2
  /* 1247DC 80133E2C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 1247E0 80133E30 3C038013 */       lui $v1, %hi(gMNVSChangeWait)
  /* 1247E4 80133E34 2463497C */     addiu $v1, $v1, %lo(gMNVSChangeWait)
  /* 1247E8 80133E38 AC2A497C */        sw $t2, %lo(gMNVSChangeWait)($at)
  .L80133E3C:
  /* 1247EC 80133E3C 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 1247F0 80133E40 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 1247F4 80133E44 24010001 */     addiu $at, $zero, 1
  /* 1247F8 80133E48 14410004 */       bne $v0, $at, .L80133E5C
  /* 1247FC 80133E4C 00026880 */       sll $t5, $v0, 2
  /* 124800 80133E50 8C6B0000 */        lw $t3, ($v1) # gMNVSChangeWait + 0
  /* 124804 80133E54 256C0008 */     addiu $t4, $t3, 8
  /* 124808 80133E58 AC6C0000 */        sw $t4, ($v1) # gMNVSChangeWait + 0
  .L80133E5C:
  /* 12480C 80133E5C 03AD7021 */      addu $t6, $sp, $t5
  /* 124810 80133E60 8DCE002C */        lw $t6, 0x2c($t6)
  /* 124814 80133E64 00002825 */        or $a1, $zero, $zero
  /* 124818 80133E68 0C04C7D3 */       jal mnVSUpdateButton
  /* 12481C 80133E6C 8DC40000 */        lw $a0, ($t6)
  /* 124820 80133E70 3C038013 */       lui $v1, %hi(gMNVSCursorIndex)
  /* 124824 80133E74 24634948 */     addiu $v1, $v1, %lo(gMNVSCursorIndex)
  /* 124828 80133E78 8C620000 */        lw $v0, ($v1) # gMNVSCursorIndex + 0
  /* 12482C 80133E7C 240F0003 */     addiu $t7, $zero, 3
  /* 124830 80133E80 14400003 */      bnez $v0, .L80133E90
  /* 124834 80133E84 2458FFFF */     addiu $t8, $v0, -1
  /* 124838 80133E88 10000002 */         b .L80133E94
  /* 12483C 80133E8C AC6F0000 */        sw $t7, ($v1) # gMNVSCursorIndex + 0
  .L80133E90:
  /* 124840 80133E90 AC780000 */        sw $t8, ($v1) # gMNVSCursorIndex + 0
  .L80133E94:
  /* 124844 80133E94 8C680000 */        lw $t0, ($v1) # gMNVSCursorIndex + 0
  /* 124848 80133E98 24050001 */     addiu $a1, $zero, 1
  /* 12484C 80133E9C 0008C880 */       sll $t9, $t0, 2
  /* 124850 80133EA0 03B94821 */      addu $t1, $sp, $t9
  /* 124854 80133EA4 8D29002C */        lw $t1, 0x2c($t1)
  /* 124858 80133EA8 0C04C7D3 */       jal mnVSUpdateButton
  /* 12485C 80133EAC 8D240000 */        lw $a0, ($t1)
  /* 124860 80133EB0 3C048013 */       lui $a0, %hi(gMNVSUnusedGObj)
  /* 124864 80133EB4 0C0026A1 */       jal omEjectGObj
  /* 124868 80133EB8 8C844960 */        lw $a0, %lo(gMNVSUnusedGObj)($a0)
  /* 12486C 80133EBC 0C04CBF6 */       jal mnVSCreateUnusedGObj
  /* 124870 80133EC0 00000000 */       nop
  /* 124874 80133EC4 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 124878 80133EC8 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 12487C 80133ECC 240A0001 */     addiu $t2, $zero, 1
  /* 124880 80133ED0 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124884 80133ED4 AC2A4978 */        sw $t2, %lo(gMNVSInputDirection)($at)
  /* 124888 80133ED8 24010001 */     addiu $at, $zero, 1
  /* 12488C 80133EDC 14410008 */       bne $v0, $at, .L80133F00
  /* 124890 80133EE0 3C0B8013 */       lui $t3, %hi(gMNVSRuleArrowsGObj)
  /* 124894 80133EE4 8D6B4964 */        lw $t3, %lo(gMNVSRuleArrowsGObj)($t3)
  /* 124898 80133EE8 240C001E */     addiu $t4, $zero, 0x1e
  /* 12489C 80133EEC 3C018013 */       lui $at, %hi(gMNVSRuleArrowBlinkTimer)
  /* 1248A0 80133EF0 AD60007C */        sw $zero, 0x7c($t3)
  /* 1248A4 80133EF4 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 1248A8 80133EF8 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 1248AC 80133EFC AC2C4970 */        sw $t4, %lo(gMNVSRuleArrowBlinkTimer)($at)
  .L80133F00:
  /* 1248B0 80133F00 24010002 */     addiu $at, $zero, 2
  /* 1248B4 80133F04 14410006 */       bne $v0, $at, .L80133F20
  /* 1248B8 80133F08 3C0D8013 */       lui $t5, %hi(gMNVSTimeStockArrowsGObj)
  /* 1248BC 80133F0C 8DAD4968 */        lw $t5, %lo(gMNVSTimeStockArrowsGObj)($t5)
  /* 1248C0 80133F10 240E001E */     addiu $t6, $zero, 0x1e
  /* 1248C4 80133F14 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowBlinkTimer)
  /* 1248C8 80133F18 ADA0007C */        sw $zero, 0x7c($t5)
  /* 1248CC 80133F1C AC2E496C */        sw $t6, %lo(gMNVSTimeStockArrowBlinkTimer)($at)
  .L80133F20:
  /* 1248D0 80133F20 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 1248D4 80133F24 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 1248D8 80133F28 14400007 */      bnez $v0, .L80133F48
  /* 1248DC 80133F2C 00000000 */       nop
  /* 1248E0 80133F30 0C0E4201 */       jal func_ovl1_80390804
  /* 1248E4 80133F34 24040404 */     addiu $a0, $zero, 0x404
  /* 1248E8 80133F38 14400009 */      bnez $v0, .L80133F60
  /* 1248EC 80133F3C AFA20024 */        sw $v0, 0x24($sp)
  /* 1248F0 80133F40 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 1248F4 80133F44 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L80133F48:
  /* 1248F8 80133F48 14400052 */      bnez $v0, .L80134094
  /* 1248FC 80133F4C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 124900 80133F50 0C0E4254 */       jal func_ovl1_80390950
  /* 124904 80133F54 00002825 */        or $a1, $zero, $zero
  /* 124908 80133F58 1040004E */      beqz $v0, .L80134094
  /* 12490C 80133F5C AFA20028 */        sw $v0, 0x28($sp)
  .L80133F60:
  /* 124910 80133F60 0C009A70 */       jal func_800269C0
  /* 124914 80133F64 240400A4 */     addiu $a0, $zero, 0xa4
  /* 124918 80133F68 8FAF0024 */        lw $t7, 0x24($sp)
  /* 12491C 80133F6C 3C038013 */       lui $v1, %hi(gMNVSChangeWait)
  /* 124920 80133F70 2463497C */     addiu $v1, $v1, %lo(gMNVSChangeWait)
  /* 124924 80133F74 11E00003 */      beqz $t7, .L80133F84
  /* 124928 80133F78 2418000C */     addiu $t8, $zero, 0xc
  /* 12492C 80133F7C 1000000A */         b .L80133FA8
  /* 124930 80133F80 AC780000 */        sw $t8, ($v1) # gMNVSChangeWait + 0
  .L80133F84:
  /* 124934 80133F84 8FA80028 */        lw $t0, 0x28($sp)
  /* 124938 80133F88 24010007 */     addiu $at, $zero, 7
  /* 12493C 80133F8C 3C038013 */       lui $v1, %hi(gMNVSChangeWait)
  /* 124940 80133F90 251900A0 */     addiu $t9, $t0, 0xa0
  /* 124944 80133F94 0321001A */       div $zero, $t9, $at
  /* 124948 80133F98 00004812 */      mflo $t1
  /* 12494C 80133F9C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124950 80133FA0 AC29497C */        sw $t1, %lo(gMNVSChangeWait)($at)
  /* 124954 80133FA4 2463497C */     addiu $v1, $v1, %lo(gMNVSChangeWait)
  .L80133FA8:
  /* 124958 80133FA8 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 12495C 80133FAC 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 124960 80133FB0 24010002 */     addiu $at, $zero, 2
  /* 124964 80133FB4 14410004 */       bne $v0, $at, .L80133FC8
  /* 124968 80133FB8 00026080 */       sll $t4, $v0, 2
  /* 12496C 80133FBC 8C6A0000 */        lw $t2, ($v1) # gMNVSChangeWait + 0
  /* 124970 80133FC0 254B0008 */     addiu $t3, $t2, 8
  /* 124974 80133FC4 AC6B0000 */        sw $t3, ($v1) # gMNVSChangeWait + 0
  .L80133FC8:
  /* 124978 80133FC8 03AC6821 */      addu $t5, $sp, $t4
  /* 12497C 80133FCC 8DAD002C */        lw $t5, 0x2c($t5)
  /* 124980 80133FD0 00002825 */        or $a1, $zero, $zero
  /* 124984 80133FD4 0C04C7D3 */       jal mnVSUpdateButton
  /* 124988 80133FD8 8DA40000 */        lw $a0, ($t5)
  /* 12498C 80133FDC 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 124990 80133FE0 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 124994 80133FE4 24010003 */     addiu $at, $zero, 3
  /* 124998 80133FE8 3C0F8013 */       lui $t7, %hi(gMNVSCursorIndex)
  /* 12499C 80133FEC 14410004 */       bne $v0, $at, .L80134000
  /* 1249A0 80133FF0 244E0001 */     addiu $t6, $v0, 1
  /* 1249A4 80133FF4 3C018013 */       lui $at, %hi(gMNVSCursorIndex)
  /* 1249A8 80133FF8 10000003 */         b .L80134008
  /* 1249AC 80133FFC AC204948 */        sw $zero, %lo(gMNVSCursorIndex)($at)
  .L80134000:
  /* 1249B0 80134000 3C018013 */       lui $at, %hi(gMNVSCursorIndex)
  /* 1249B4 80134004 AC2E4948 */        sw $t6, %lo(gMNVSCursorIndex)($at)
  .L80134008:
  /* 1249B8 80134008 8DEF4948 */        lw $t7, %lo(gMNVSCursorIndex)($t7)
  /* 1249BC 8013400C 24050001 */     addiu $a1, $zero, 1
  /* 1249C0 80134010 000FC080 */       sll $t8, $t7, 2
  /* 1249C4 80134014 03B84021 */      addu $t0, $sp, $t8
  /* 1249C8 80134018 8D08002C */        lw $t0, 0x2c($t0)
  /* 1249CC 8013401C 0C04C7D3 */       jal mnVSUpdateButton
  /* 1249D0 80134020 8D040000 */        lw $a0, ($t0)
  /* 1249D4 80134024 3C048013 */       lui $a0, %hi(gMNVSUnusedGObj)
  /* 1249D8 80134028 0C0026A1 */       jal omEjectGObj
  /* 1249DC 8013402C 8C844960 */        lw $a0, %lo(gMNVSUnusedGObj)($a0)
  /* 1249E0 80134030 0C04CBF6 */       jal mnVSCreateUnusedGObj
  /* 1249E4 80134034 00000000 */       nop
  /* 1249E8 80134038 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 1249EC 8013403C 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 1249F0 80134040 24190002 */     addiu $t9, $zero, 2
  /* 1249F4 80134044 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 1249F8 80134048 AC394978 */        sw $t9, %lo(gMNVSInputDirection)($at)
  /* 1249FC 8013404C 24010001 */     addiu $at, $zero, 1
  /* 124A00 80134050 14410008 */       bne $v0, $at, .L80134074
  /* 124A04 80134054 3C098013 */       lui $t1, %hi(gMNVSRuleArrowsGObj)
  /* 124A08 80134058 8D294964 */        lw $t1, %lo(gMNVSRuleArrowsGObj)($t1)
  /* 124A0C 8013405C 240A001E */     addiu $t2, $zero, 0x1e
  /* 124A10 80134060 3C018013 */       lui $at, %hi(gMNVSRuleArrowBlinkTimer)
  /* 124A14 80134064 AD20007C */        sw $zero, 0x7c($t1)
  /* 124A18 80134068 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 124A1C 8013406C 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 124A20 80134070 AC2A4970 */        sw $t2, %lo(gMNVSRuleArrowBlinkTimer)($at)
  .L80134074:
  /* 124A24 80134074 24010002 */     addiu $at, $zero, 2
  /* 124A28 80134078 14410006 */       bne $v0, $at, .L80134094
  /* 124A2C 8013407C 3C0B8013 */       lui $t3, %hi(gMNVSTimeStockArrowsGObj)
  /* 124A30 80134080 8D6B4968 */        lw $t3, %lo(gMNVSTimeStockArrowsGObj)($t3)
  /* 124A34 80134084 240C001E */     addiu $t4, $zero, 0x1e
  /* 124A38 80134088 3C018013 */       lui $at, %hi(gMNVSTimeStockArrowBlinkTimer)
  /* 124A3C 8013408C AD60007C */        sw $zero, 0x7c($t3)
  /* 124A40 80134090 AC2C496C */        sw $t4, %lo(gMNVSTimeStockArrowBlinkTimer)($at)
  .L80134094:
  /* 124A44 80134094 3C028013 */       lui $v0, %hi(gMNVSCursorIndex)
  /* 124A48 80134098 8C424948 */        lw $v0, %lo(gMNVSCursorIndex)($v0)
  /* 124A4C 8013409C 24010001 */     addiu $at, $zero, 1
  /* 124A50 801340A0 10410005 */       beq $v0, $at, .L801340B8
  /* 124A54 801340A4 24010002 */     addiu $at, $zero, 2
  /* 124A58 801340A8 1041008D */       beq $v0, $at, .L801342E0
  /* 124A5C 801340AC 00000000 */       nop
  /* 124A60 801340B0 10000141 */         b .L801345B8
  /* 124A64 801340B4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801340B8:
  /* 124A68 801340B8 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124A6C 801340BC 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 124A70 801340C0 14400007 */      bnez $v0, .L801340E0
  /* 124A74 801340C4 00000000 */       nop
  /* 124A78 801340C8 0C0E4201 */       jal func_ovl1_80390804
  /* 124A7C 801340CC 24040222 */     addiu $a0, $zero, 0x222
  /* 124A80 801340D0 14400009 */      bnez $v0, .L801340F8
  /* 124A84 801340D4 AFA20024 */        sw $v0, 0x24($sp)
  /* 124A88 801340D8 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124A8C 801340DC 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L801340E0:
  /* 124A90 801340E0 14400038 */      bnez $v0, .L801341C4
  /* 124A94 801340E4 2404FFEC */     addiu $a0, $zero, -0x14
  /* 124A98 801340E8 0C0E4227 */       jal func_ovl1_8039089C
  /* 124A9C 801340EC 00002825 */        or $a1, $zero, $zero
  /* 124AA0 801340F0 10400034 */      beqz $v0, .L801341C4
  /* 124AA4 801340F4 AFA20028 */        sw $v0, 0x28($sp)
  .L801340F8:
  /* 124AA8 801340F8 3C0D8013 */       lui $t5, %hi(gMNVSRule)
  /* 124AAC 801340FC 8DAD494C */        lw $t5, %lo(gMNVSRule)($t5)
  /* 124AB0 80134100 19A00030 */      blez $t5, .L801341C4
  /* 124AB4 80134104 00000000 */       nop
  /* 124AB8 80134108 0C009A70 */       jal func_800269C0
  /* 124ABC 8013410C 240400A3 */     addiu $a0, $zero, 0xa3
  /* 124AC0 80134110 3C038013 */       lui $v1, %hi(gMNVSRule)
  /* 124AC4 80134114 2463494C */     addiu $v1, $v1, %lo(gMNVSRule)
  /* 124AC8 80134118 8C6E0000 */        lw $t6, ($v1) # gMNVSRule + 0
  /* 124ACC 8013411C 24010001 */     addiu $at, $zero, 1
  /* 124AD0 80134120 25CFFFFF */     addiu $t7, $t6, -1
  /* 124AD4 80134124 15E10003 */       bne $t7, $at, .L80134134
  /* 124AD8 80134128 AC6F0000 */        sw $t7, ($v1) # gMNVSRule + 0
  /* 124ADC 8013412C 0C04CEA3 */       jal mnVSSetCostumesAndShades
  /* 124AE0 80134130 00000000 */       nop
  .L80134134:
  /* 124AE4 80134134 3C048013 */       lui $a0, %hi(gMNVSButtonGObjTimeStock)
  /* 124AE8 80134138 0C0026A1 */       jal omEjectGObj
  /* 124AEC 8013413C 8C844938 */        lw $a0, %lo(gMNVSButtonGObjTimeStock)($a0)
  /* 124AF0 80134140 0C04CB41 */       jal mnVSCreateTimeStockButton
  /* 124AF4 80134144 00000000 */       nop
  /* 124AF8 80134148 3C048013 */       lui $a0, %hi(gMNVSRuleValueGObj)
  /* 124AFC 8013414C 0C0026A1 */       jal omEjectGObj
  /* 124B00 80134150 8C844958 */        lw $a0, %lo(gMNVSRuleValueGObj)($a0)
  /* 124B04 80134154 0C04C88E */       jal mnVSCreateRuleValue
  /* 124B08 80134158 00000000 */       nop
  /* 124B0C 8013415C 3C048013 */       lui $a0, %hi(gMNVSTimeStockValueGObj)
  /* 124B10 80134160 0C0026A1 */       jal omEjectGObj
  /* 124B14 80134164 8C84495C */        lw $a0, %lo(gMNVSTimeStockValueGObj)($a0)
  /* 124B18 80134168 0C04CAE8 */       jal mnVSCreateTimeStockValue
  /* 124B1C 8013416C 00000000 */       nop
  /* 124B20 80134170 8FA80024 */        lw $t0, 0x24($sp)
  /* 124B24 80134174 8FA90028 */        lw $t1, 0x28($sp)
  /* 124B28 80134178 3C048013 */       lui $a0, %hi(gMNVSUnusedGObj)
  /* 124B2C 8013417C 11000005 */      beqz $t0, .L80134194
  /* 124B30 80134180 252A00A0 */     addiu $t2, $t1, 0xa0
  /* 124B34 80134184 2419000C */     addiu $t9, $zero, 0xc
  /* 124B38 80134188 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124B3C 8013418C 10000006 */         b .L801341A8
  /* 124B40 80134190 AC39497C */        sw $t9, %lo(gMNVSChangeWait)($at)
  .L80134194:
  /* 124B44 80134194 24010007 */     addiu $at, $zero, 7
  /* 124B48 80134198 0141001A */       div $zero, $t2, $at
  /* 124B4C 8013419C 00005812 */      mflo $t3
  /* 124B50 801341A0 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124B54 801341A4 AC2B497C */        sw $t3, %lo(gMNVSChangeWait)($at)
  .L801341A8:
  /* 124B58 801341A8 0C0026A1 */       jal omEjectGObj
  /* 124B5C 801341AC 8C844960 */        lw $a0, %lo(gMNVSUnusedGObj)($a0)
  /* 124B60 801341B0 0C04CBF6 */       jal mnVSCreateUnusedGObj
  /* 124B64 801341B4 00000000 */       nop
  /* 124B68 801341B8 240C0003 */     addiu $t4, $zero, 3
  /* 124B6C 801341BC 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124B70 801341C0 AC2C4978 */        sw $t4, %lo(gMNVSInputDirection)($at)
  .L801341C4:
  /* 124B74 801341C4 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124B78 801341C8 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 124B7C 801341CC 14400007 */      bnez $v0, .L801341EC
  /* 124B80 801341D0 00000000 */       nop
  /* 124B84 801341D4 0C0E4201 */       jal func_ovl1_80390804
  /* 124B88 801341D8 24040111 */     addiu $a0, $zero, 0x111
  /* 124B8C 801341DC 14400009 */      bnez $v0, .L80134204
  /* 124B90 801341E0 AFA20024 */        sw $v0, 0x24($sp)
  /* 124B94 801341E4 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124B98 801341E8 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L801341EC:
  /* 124B9C 801341EC 144000F1 */      bnez $v0, .L801345B4
  /* 124BA0 801341F0 24040014 */     addiu $a0, $zero, 0x14
  /* 124BA4 801341F4 0C0E4227 */       jal func_ovl1_8039089C
  /* 124BA8 801341F8 24050001 */     addiu $a1, $zero, 1
  /* 124BAC 801341FC 104000ED */      beqz $v0, .L801345B4
  /* 124BB0 80134200 AFA20028 */        sw $v0, 0x28($sp)
  .L80134204:
  /* 124BB4 80134204 3C0D8013 */       lui $t5, %hi(gMNVSRule)
  /* 124BB8 80134208 8DAD494C */        lw $t5, %lo(gMNVSRule)($t5)
  /* 124BBC 8013420C 29A10003 */      slti $at, $t5, 3
  /* 124BC0 80134210 502000E9 */      beql $at, $zero, .L801345B8
  /* 124BC4 80134214 8FBF0014 */        lw $ra, 0x14($sp)
  /* 124BC8 80134218 0C009A70 */       jal func_800269C0
  /* 124BCC 8013421C 240400A3 */     addiu $a0, $zero, 0xa3
  /* 124BD0 80134220 3C0E8013 */       lui $t6, %hi(gMNVSRule)
  /* 124BD4 80134224 8DCE494C */        lw $t6, %lo(gMNVSRule)($t6)
  /* 124BD8 80134228 3C018013 */       lui $at, %hi(gMNVSRule)
  /* 124BDC 8013422C 25CF0001 */     addiu $t7, $t6, 1
  /* 124BE0 80134230 AC2F494C */        sw $t7, %lo(gMNVSRule)($at)
  /* 124BE4 80134234 24010002 */     addiu $at, $zero, 2
  /* 124BE8 80134238 15E10003 */       bne $t7, $at, .L80134248
  /* 124BEC 8013423C 00000000 */       nop
  /* 124BF0 80134240 0C04CEA3 */       jal mnVSSetCostumesAndShades
  /* 124BF4 80134244 00000000 */       nop
  .L80134248:
  /* 124BF8 80134248 3C048013 */       lui $a0, %hi(gMNVSButtonGObjTimeStock)
  /* 124BFC 8013424C 0C0026A1 */       jal omEjectGObj
  /* 124C00 80134250 8C844938 */        lw $a0, %lo(gMNVSButtonGObjTimeStock)($a0)
  /* 124C04 80134254 0C04CB41 */       jal mnVSCreateTimeStockButton
  /* 124C08 80134258 00000000 */       nop
  /* 124C0C 8013425C 3C048013 */       lui $a0, %hi(gMNVSRuleValueGObj)
  /* 124C10 80134260 0C0026A1 */       jal omEjectGObj
  /* 124C14 80134264 8C844958 */        lw $a0, %lo(gMNVSRuleValueGObj)($a0)
  /* 124C18 80134268 0C04C88E */       jal mnVSCreateRuleValue
  /* 124C1C 8013426C 00000000 */       nop
  /* 124C20 80134270 3C048013 */       lui $a0, %hi(gMNVSTimeStockValueGObj)
  /* 124C24 80134274 0C0026A1 */       jal omEjectGObj
  /* 124C28 80134278 8C84495C */        lw $a0, %lo(gMNVSTimeStockValueGObj)($a0)
  /* 124C2C 8013427C 0C04CAE8 */       jal mnVSCreateTimeStockValue
  /* 124C30 80134280 00000000 */       nop
  /* 124C34 80134284 8FB80024 */        lw $t8, 0x24($sp)
  /* 124C38 80134288 8FB90028 */        lw $t9, 0x28($sp)
  /* 124C3C 8013428C 240900A0 */     addiu $t1, $zero, 0xa0
  /* 124C40 80134290 13000005 */      beqz $t8, .L801342A8
  /* 124C44 80134294 3C048013 */       lui $a0, %hi(gMNVSUnusedGObj)
  /* 124C48 80134298 2408000C */     addiu $t0, $zero, 0xc
  /* 124C4C 8013429C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124C50 801342A0 10000007 */         b .L801342C0
  /* 124C54 801342A4 AC28497C */        sw $t0, %lo(gMNVSChangeWait)($at)
  .L801342A8:
  /* 124C58 801342A8 01395023 */      subu $t2, $t1, $t9
  /* 124C5C 801342AC 24010007 */     addiu $at, $zero, 7
  /* 124C60 801342B0 0141001A */       div $zero, $t2, $at
  /* 124C64 801342B4 00005812 */      mflo $t3
  /* 124C68 801342B8 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124C6C 801342BC AC2B497C */        sw $t3, %lo(gMNVSChangeWait)($at)
  .L801342C0:
  /* 124C70 801342C0 0C0026A1 */       jal omEjectGObj
  /* 124C74 801342C4 8C844960 */        lw $a0, %lo(gMNVSUnusedGObj)($a0)
  /* 124C78 801342C8 0C04CBF6 */       jal mnVSCreateUnusedGObj
  /* 124C7C 801342CC 00000000 */       nop
  /* 124C80 801342D0 240C0004 */     addiu $t4, $zero, 4
  /* 124C84 801342D4 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124C88 801342D8 100000B6 */         b .L801345B4
  /* 124C8C 801342DC AC2C4978 */        sw $t4, %lo(gMNVSInputDirection)($at)
  .L801342E0:
  /* 124C90 801342E0 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124C94 801342E4 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 124C98 801342E8 14400007 */      bnez $v0, .L80134308
  /* 124C9C 801342EC 00000000 */       nop
  /* 124CA0 801342F0 0C0E4201 */       jal func_ovl1_80390804
  /* 124CA4 801342F4 24040222 */     addiu $a0, $zero, 0x222
  /* 124CA8 801342F8 14400009 */      bnez $v0, .L80134320
  /* 124CAC 801342FC AFA20024 */        sw $v0, 0x24($sp)
  /* 124CB0 80134300 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124CB4 80134304 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L80134308:
  /* 124CB8 80134308 1440004F */      bnez $v0, .L80134448
  /* 124CBC 8013430C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 124CC0 80134310 0C0E4227 */       jal func_ovl1_8039089C
  /* 124CC4 80134314 00002825 */        or $a1, $zero, $zero
  /* 124CC8 80134318 1040004B */      beqz $v0, .L80134448
  /* 124CCC 8013431C AFA20028 */        sw $v0, 0x28($sp)
  .L80134320:
  /* 124CD0 80134320 0C009A70 */       jal func_800269C0
  /* 124CD4 80134324 240400A3 */     addiu $a0, $zero, 0xa3
  /* 124CD8 80134328 8FAD0024 */        lw $t5, 0x24($sp)
  /* 124CDC 8013432C 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124CE0 80134330 2442497C */     addiu $v0, $v0, %lo(gMNVSChangeWait)
  /* 124CE4 80134334 11A00003 */      beqz $t5, .L80134344
  /* 124CE8 80134338 240E000C */     addiu $t6, $zero, 0xc
  /* 124CEC 8013433C 1000000A */         b .L80134368
  /* 124CF0 80134340 AC4E0000 */        sw $t6, ($v0) # gMNVSChangeWait + 0
  .L80134344:
  /* 124CF4 80134344 8FAF0028 */        lw $t7, 0x28($sp)
  /* 124CF8 80134348 2401000E */     addiu $at, $zero, 0xe
  /* 124CFC 8013434C 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124D00 80134350 25F800A0 */     addiu $t8, $t7, 0xa0
  /* 124D04 80134354 0301001A */       div $zero, $t8, $at
  /* 124D08 80134358 00004012 */      mflo $t0
  /* 124D0C 8013435C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124D10 80134360 AC28497C */        sw $t0, %lo(gMNVSChangeWait)($at)
  /* 124D14 80134364 2442497C */     addiu $v0, $v0, %lo(gMNVSChangeWait)
  .L80134368:
  /* 124D18 80134368 3C098013 */       lui $t1, %hi(gMNVSInputDirection)
  /* 124D1C 8013436C 8D294978 */        lw $t1, %lo(gMNVSInputDirection)($t1)
  /* 124D20 80134370 24010003 */     addiu $at, $zero, 3
  /* 124D24 80134374 11210004 */       beq $t1, $at, .L80134388
  /* 124D28 80134378 00000000 */       nop
  /* 124D2C 8013437C 8C590000 */        lw $t9, ($v0) # gMNVSChangeWait + 0
  /* 124D30 80134380 00195040 */       sll $t2, $t9, 1
  /* 124D34 80134384 AC4A0000 */        sw $t2, ($v0) # gMNVSChangeWait + 0
  .L80134388:
  /* 124D38 80134388 0C04CACE */       jal mnVSIsTime
  /* 124D3C 8013438C 00000000 */       nop
  /* 124D40 80134390 10400015 */      beqz $v0, .L801343E8
  /* 124D44 80134394 3C038013 */       lui $v1, %hi(gMNVSTime)
  /* 124D48 80134398 24634950 */     addiu $v1, $v1, %lo(gMNVSTime)
  /* 124D4C 8013439C 8C620000 */        lw $v0, ($v1) # gMNVSTime + 0
  /* 124D50 801343A0 24010001 */     addiu $at, $zero, 1
  /* 124D54 801343A4 240B0064 */     addiu $t3, $zero, 0x64
  /* 124D58 801343A8 14410003 */       bne $v0, $at, .L801343B8
  /* 124D5C 801343AC 244CFFFF */     addiu $t4, $v0, -1
  /* 124D60 801343B0 10000002 */         b .L801343BC
  /* 124D64 801343B4 AC6B0000 */        sw $t3, ($v1) # gMNVSTime + 0
  .L801343B8:
  /* 124D68 801343B8 AC6C0000 */        sw $t4, ($v1) # gMNVSTime + 0
  .L801343BC:
  /* 124D6C 801343BC 8C6D0000 */        lw $t5, ($v1) # gMNVSTime + 0
  /* 124D70 801343C0 24010001 */     addiu $at, $zero, 1
  /* 124D74 801343C4 3C0E8013 */       lui $t6, %hi(gMNVSChangeWait)
  /* 124D78 801343C8 15A10005 */       bne $t5, $at, .L801343E0
  /* 124D7C 801343CC 00000000 */       nop
  /* 124D80 801343D0 8DCE497C */        lw $t6, %lo(gMNVSChangeWait)($t6)
  /* 124D84 801343D4 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124D88 801343D8 25CF0008 */     addiu $t7, $t6, 8
  /* 124D8C 801343DC AC2F497C */        sw $t7, %lo(gMNVSChangeWait)($at)
  .L801343E0:
  /* 124D90 801343E0 10000011 */         b .L80134428
  /* 124D94 801343E4 00000000 */       nop
  .L801343E8:
  /* 124D98 801343E8 3C058013 */       lui $a1, %hi(gMNVSStock)
  /* 124D9C 801343EC 24A54954 */     addiu $a1, $a1, %lo(gMNVSStock)
  /* 124DA0 801343F0 8CA20000 */        lw $v0, ($a1) # gMNVSStock + 0
  /* 124DA4 801343F4 14400003 */      bnez $v0, .L80134404
  /* 124DA8 801343F8 24180062 */     addiu $t8, $zero, 0x62
  /* 124DAC 801343FC 10000003 */         b .L8013440C
  /* 124DB0 80134400 ACB80000 */        sw $t8, ($a1) # gMNVSStock + 0
  .L80134404:
  /* 124DB4 80134404 2448FFFF */     addiu $t0, $v0, -1
  /* 124DB8 80134408 ACA80000 */        sw $t0, ($a1) # gMNVSStock + 0
  .L8013440C:
  /* 124DBC 8013440C 8CA90000 */        lw $t1, ($a1) # gMNVSStock + 0
  /* 124DC0 80134410 15200005 */      bnez $t1, .L80134428
  /* 124DC4 80134414 3C198013 */       lui $t9, %hi(gMNVSChangeWait)
  /* 124DC8 80134418 8F39497C */        lw $t9, %lo(gMNVSChangeWait)($t9)
  /* 124DCC 8013441C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124DD0 80134420 272A0008 */     addiu $t2, $t9, 8
  /* 124DD4 80134424 AC2A497C */        sw $t2, %lo(gMNVSChangeWait)($at)
  .L80134428:
  /* 124DD8 80134428 3C048013 */       lui $a0, %hi(gMNVSTimeStockValueGObj)
  /* 124DDC 8013442C 0C0026A1 */       jal omEjectGObj
  /* 124DE0 80134430 8C84495C */        lw $a0, %lo(gMNVSTimeStockValueGObj)($a0)
  /* 124DE4 80134434 0C04CAE8 */       jal mnVSCreateTimeStockValue
  /* 124DE8 80134438 00000000 */       nop
  /* 124DEC 8013443C 240B0003 */     addiu $t3, $zero, 3
  /* 124DF0 80134440 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124DF4 80134444 AC2B4978 */        sw $t3, %lo(gMNVSInputDirection)($at)
  .L80134448:
  /* 124DF8 80134448 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124DFC 8013444C 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  /* 124E00 80134450 14400007 */      bnez $v0, .L80134470
  /* 124E04 80134454 00000000 */       nop
  /* 124E08 80134458 0C0E4201 */       jal func_ovl1_80390804
  /* 124E0C 8013445C 24040111 */     addiu $a0, $zero, 0x111
  /* 124E10 80134460 14400009 */      bnez $v0, .L80134488
  /* 124E14 80134464 AFA20024 */        sw $v0, 0x24($sp)
  /* 124E18 80134468 3C028013 */       lui $v0, %hi(gMNVSChangeWait)
  /* 124E1C 8013446C 8C42497C */        lw $v0, %lo(gMNVSChangeWait)($v0)
  .L80134470:
  /* 124E20 80134470 14400050 */      bnez $v0, .L801345B4
  /* 124E24 80134474 24040014 */     addiu $a0, $zero, 0x14
  /* 124E28 80134478 0C0E4227 */       jal func_ovl1_8039089C
  /* 124E2C 8013447C 24050001 */     addiu $a1, $zero, 1
  /* 124E30 80134480 1040004C */      beqz $v0, .L801345B4
  /* 124E34 80134484 AFA20028 */        sw $v0, 0x28($sp)
  .L80134488:
  /* 124E38 80134488 0C009A70 */       jal func_800269C0
  /* 124E3C 8013448C 240400A3 */     addiu $a0, $zero, 0xa3
  /* 124E40 80134490 8FAC0024 */        lw $t4, 0x24($sp)
  /* 124E44 80134494 8FAE0028 */        lw $t6, 0x28($sp)
  /* 124E48 80134498 240F00A0 */     addiu $t7, $zero, 0xa0
  /* 124E4C 8013449C 11800005 */      beqz $t4, .L801344B4
  /* 124E50 801344A0 3C098013 */       lui $t1, %hi(gMNVSInputDirection)
  /* 124E54 801344A4 240D000C */     addiu $t5, $zero, 0xc
  /* 124E58 801344A8 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124E5C 801344AC 10000007 */         b .L801344CC
  /* 124E60 801344B0 AC2D497C */        sw $t5, %lo(gMNVSChangeWait)($at)
  .L801344B4:
  /* 124E64 801344B4 01EEC023 */      subu $t8, $t7, $t6
  /* 124E68 801344B8 2401000E */     addiu $at, $zero, 0xe
  /* 124E6C 801344BC 0301001A */       div $zero, $t8, $at
  /* 124E70 801344C0 00004012 */      mflo $t0
  /* 124E74 801344C4 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124E78 801344C8 AC28497C */        sw $t0, %lo(gMNVSChangeWait)($at)
  .L801344CC:
  /* 124E7C 801344CC 8D294978 */        lw $t1, %lo(gMNVSInputDirection)($t1)
  /* 124E80 801344D0 24010004 */     addiu $at, $zero, 4
  /* 124E84 801344D4 3C198013 */       lui $t9, %hi(gMNVSChangeWait)
  /* 124E88 801344D8 11210005 */       beq $t1, $at, .L801344F0
  /* 124E8C 801344DC 00000000 */       nop
  /* 124E90 801344E0 8F39497C */        lw $t9, %lo(gMNVSChangeWait)($t9)
  /* 124E94 801344E4 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124E98 801344E8 00195040 */       sll $t2, $t9, 1
  /* 124E9C 801344EC AC2A497C */        sw $t2, %lo(gMNVSChangeWait)($at)
  .L801344F0:
  /* 124EA0 801344F0 0C04CACE */       jal mnVSIsTime
  /* 124EA4 801344F4 00000000 */       nop
  /* 124EA8 801344F8 10400015 */      beqz $v0, .L80134550
  /* 124EAC 801344FC 3C048013 */       lui $a0, %hi(gMNVSTimeStockValueGObj)
  /* 124EB0 80134500 3C038013 */       lui $v1, %hi(gMNVSTime)
  /* 124EB4 80134504 24634950 */     addiu $v1, $v1, %lo(gMNVSTime)
  /* 124EB8 80134508 8C620000 */        lw $v0, ($v1) # gMNVSTime + 0
  /* 124EBC 8013450C 24010064 */     addiu $at, $zero, 0x64
  /* 124EC0 80134510 240B0001 */     addiu $t3, $zero, 1
  /* 124EC4 80134514 14410003 */       bne $v0, $at, .L80134524
  /* 124EC8 80134518 244C0001 */     addiu $t4, $v0, 1
  /* 124ECC 8013451C 10000002 */         b .L80134528
  /* 124ED0 80134520 AC6B0000 */        sw $t3, ($v1) # gMNVSTime + 0
  .L80134524:
  /* 124ED4 80134524 AC6C0000 */        sw $t4, ($v1) # gMNVSTime + 0
  .L80134528:
  /* 124ED8 80134528 8C6D0000 */        lw $t5, ($v1) # gMNVSTime + 0
  /* 124EDC 8013452C 24010064 */     addiu $at, $zero, 0x64
  /* 124EE0 80134530 3C0F8013 */       lui $t7, %hi(gMNVSChangeWait)
  /* 124EE4 80134534 15A10018 */       bne $t5, $at, .L80134598
  /* 124EE8 80134538 00000000 */       nop
  /* 124EEC 8013453C 8DEF497C */        lw $t7, %lo(gMNVSChangeWait)($t7)
  /* 124EF0 80134540 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124EF4 80134544 25EE0008 */     addiu $t6, $t7, 8
  /* 124EF8 80134548 10000013 */         b .L80134598
  /* 124EFC 8013454C AC2E497C */        sw $t6, %lo(gMNVSChangeWait)($at)
  .L80134550:
  /* 124F00 80134550 3C038013 */       lui $v1, %hi(gMNVSStock)
  /* 124F04 80134554 24634954 */     addiu $v1, $v1, %lo(gMNVSStock)
  /* 124F08 80134558 8C620000 */        lw $v0, ($v1) # gMNVSStock + 0
  /* 124F0C 8013455C 24010062 */     addiu $at, $zero, 0x62
  /* 124F10 80134560 3C098013 */       lui $t1, %hi(gMNVSChangeWait)
  /* 124F14 80134564 14410003 */       bne $v0, $at, .L80134574
  /* 124F18 80134568 24580001 */     addiu $t8, $v0, 1
  /* 124F1C 8013456C 10000002 */         b .L80134578
  /* 124F20 80134570 AC600000 */        sw $zero, ($v1) # gMNVSStock + 0
  .L80134574:
  /* 124F24 80134574 AC780000 */        sw $t8, ($v1) # gMNVSStock + 0
  .L80134578:
  /* 124F28 80134578 8C680000 */        lw $t0, ($v1) # gMNVSStock + 0
  /* 124F2C 8013457C 24010062 */     addiu $at, $zero, 0x62
  /* 124F30 80134580 15010005 */       bne $t0, $at, .L80134598
  /* 124F34 80134584 00000000 */       nop
  /* 124F38 80134588 8D29497C */        lw $t1, %lo(gMNVSChangeWait)($t1)
  /* 124F3C 8013458C 3C018013 */       lui $at, %hi(gMNVSChangeWait)
  /* 124F40 80134590 25390008 */     addiu $t9, $t1, 8
  /* 124F44 80134594 AC39497C */        sw $t9, %lo(gMNVSChangeWait)($at)
  .L80134598:
  /* 124F48 80134598 0C0026A1 */       jal omEjectGObj
  /* 124F4C 8013459C 8C84495C */        lw $a0, %lo(gMNVSTimeStockValueGObj)($a0)
  /* 124F50 801345A0 0C04CAE8 */       jal mnVSCreateTimeStockValue
  /* 124F54 801345A4 00000000 */       nop
  /* 124F58 801345A8 240A0004 */     addiu $t2, $zero, 4
  /* 124F5C 801345AC 3C018013 */       lui $at, %hi(gMNVSInputDirection)
  /* 124F60 801345B0 AC2A4978 */        sw $t2, %lo(gMNVSInputDirection)($at)
  .L801345B4:
  /* 124F64 801345B4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801345B8:
  /* 124F68 801345B8 27BD0040 */     addiu $sp, $sp, 0x40
  /* 124F6C 801345BC 03E00008 */        jr $ra
  /* 124F70 801345C0 00000000 */       nop

glabel mnVSInit
  /* 124F74 801345C4 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 124F78 801345C8 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 124F7C 801345CC 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 124F80 801345D0 3C188013 */       lui $t8, %hi(D_ovl19_80134988)
  /* 124F84 801345D4 AFBF001C */        sw $ra, 0x1c($sp)
  /* 124F88 801345D8 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 124F8C 801345DC 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 124F90 801345E0 27184988 */     addiu $t8, $t8, %lo(D_ovl19_80134988)
  /* 124F94 801345E4 24190018 */     addiu $t9, $zero, 0x18
  /* 124F98 801345E8 AFAE0030 */        sw $t6, 0x30($sp)
  /* 124F9C 801345EC AFAF0034 */        sw $t7, 0x34($sp)
  /* 124FA0 801345F0 AFA00038 */        sw $zero, 0x38($sp)
  /* 124FA4 801345F4 AFA0003C */        sw $zero, 0x3c($sp)
  /* 124FA8 801345F8 AFB80040 */        sw $t8, 0x40($sp)
  /* 124FAC 801345FC AFB90044 */        sw $t9, 0x44($sp)
  /* 124FB0 80134600 AFA00048 */        sw $zero, 0x48($sp)
  /* 124FB4 80134604 AFA0004C */        sw $zero, 0x4c($sp)
  /* 124FB8 80134608 0C0337DE */       jal rdManagerInitSetup
  /* 124FBC 8013460C 27A40030 */     addiu $a0, $sp, 0x30
  /* 124FC0 80134610 3C03800A */       lui $v1, %hi(gSaveData)
  /* 124FC4 80134614 246344E0 */     addiu $v1, $v1, %lo(gSaveData)
  /* 124FC8 80134618 906205E2 */       lbu $v0, 0x5e2($v1) # gSaveData + 1506
  /* 124FCC 8013461C 3C048013 */       lui $a0, %hi(D_ovl19_801347B0)
  /* 124FD0 80134620 248447B0 */     addiu $a0, $a0, %lo(D_ovl19_801347B0)
  /* 124FD4 80134624 30480001 */      andi $t0, $v0, 1
  /* 124FD8 80134628 1500000B */      bnez $t0, .L80134658
  /* 124FDC 8013462C 00000000 */       nop
  /* 124FE0 80134630 906905E3 */       lbu $t1, 0x5e3($v1) # gSaveData + 1507
  /* 124FE4 80134634 3C0A8004 */       lui $t2, %hi(gSPImemOkay)
  /* 124FE8 80134638 29210016 */      slti $at, $t1, 0x16
  /* 124FEC 8013463C 14200006 */      bnez $at, .L80134658
  /* 124FF0 80134640 00000000 */       nop
  /* 124FF4 80134644 914A4D40 */       lbu $t2, %lo(gSPImemOkay)($t2)
  /* 124FF8 80134648 344B0001 */       ori $t3, $v0, 1
  /* 124FFC 8013464C 15400002 */      bnez $t2, .L80134658
  /* 125000 80134650 00000000 */       nop
  /* 125004 80134654 A06B05E2 */        sb $t3, 0x5e2($v1) # gSaveData + 1506
  .L80134658:
  /* 125008 80134658 0C0337BB */       jal rdManagerGetAllocSize
  /* 12500C 8013465C 24050002 */     addiu $a1, $zero, 2
  /* 125010 80134660 00402025 */        or $a0, $v0, $zero
  /* 125014 80134664 0C001260 */       jal gsMemoryAlloc
  /* 125018 80134668 24050010 */     addiu $a1, $zero, 0x10
  /* 12501C 8013466C 3C048013 */       lui $a0, %hi(D_ovl19_801347B0)
  /* 125020 80134670 3C068013 */       lui $a2, %hi(D_ovl19_80134A48)
  /* 125024 80134674 24C64A48 */     addiu $a2, $a2, %lo(D_ovl19_80134A48)
  /* 125028 80134678 248447B0 */     addiu $a0, $a0, %lo(D_ovl19_801347B0)
  /* 12502C 8013467C 24050002 */     addiu $a1, $zero, 2
  /* 125030 80134680 0C033781 */       jal rdManagerLoadFiles
  /* 125034 80134684 00403825 */        or $a3, $v0, $zero
  /* 125038 80134688 3C058013 */       lui $a1, %hi(mnVSMain)
  /* 12503C 8013468C 24A53B8C */     addiu $a1, $a1, %lo(mnVSMain)
  /* 125040 80134690 00002025 */        or $a0, $zero, $zero
  /* 125044 80134694 00003025 */        or $a2, $zero, $zero
  /* 125048 80134698 0C00265A */       jal omMakeGObjSPAfter
  /* 12504C 8013469C 3C078000 */       lui $a3, 0x8000
  /* 125050 801346A0 00002025 */        or $a0, $zero, $zero
  /* 125054 801346A4 3C058000 */       lui $a1, 0x8000
  /* 125058 801346A8 24060064 */     addiu $a2, $zero, 0x64
  /* 12505C 801346AC 00003825 */        or $a3, $zero, $zero
  /* 125060 801346B0 0C002E7F */       jal func_8000B9FC
  /* 125064 801346B4 AFA00010 */        sw $zero, 0x10($sp)
  /* 125068 801346B8 0C04CDAB */       jal mnVSInitVars
  /* 12506C 801346BC 00000000 */       nop
  /* 125070 801346C0 0C04CD83 */       jal mnVSCreateBackgroundViewport
  /* 125074 801346C4 00000000 */       nop
  /* 125078 801346C8 0C04CD5B */       jal mnVSCreateMenuNameViewport
  /* 12507C 801346CC 00000000 */       nop
  /* 125080 801346D0 0C04CD33 */       jal mnVSCreateButtonViewport
  /* 125084 801346D4 00000000 */       nop
  /* 125088 801346D8 0C04CD0B */       jal mnVSCreateButtonValuesViewport
  /* 12508C 801346DC 00000000 */       nop
  /* 125090 801346E0 0C04CCA6 */       jal mnVSCreateBackground
  /* 125094 801346E4 00000000 */       nop
  /* 125098 801346E8 0C04CC53 */       jal mnVSCreateMenuName
  /* 12509C 801346EC 00000000 */       nop
  /* 1250A0 801346F0 0C04C855 */       jal mnVSCreateVSStartButton
  /* 1250A4 801346F4 00000000 */       nop
  /* 1250A8 801346F8 0C04CA93 */       jal mnVSCreateRuleButton
  /* 1250AC 801346FC 00000000 */       nop
  /* 1250B0 80134700 0C04C88E */       jal mnVSCreateRuleValue
  /* 1250B4 80134704 00000000 */       nop
  /* 1250B8 80134708 0C04CB41 */       jal mnVSCreateTimeStockButton
  /* 1250BC 8013470C 00000000 */       nop
  /* 1250C0 80134710 0C04CAE8 */       jal mnVSCreateTimeStockValue
  /* 1250C4 80134714 00000000 */       nop
  /* 1250C8 80134718 0C04CBAF */       jal mnVSCreateVSOptionsButton
  /* 1250CC 8013471C 00000000 */       nop
  /* 1250D0 80134720 0C04CBF6 */       jal mnVSCreateUnusedGObj
  /* 1250D4 80134724 00000000 */       nop
  /* 1250D8 80134728 3C0C800A */       lui $t4, %hi((gSceneData + 0x1))
  /* 1250DC 8013472C 918C4AD1 */       lbu $t4, %lo((gSceneData + 0x1))($t4)
  /* 1250E0 80134730 24010010 */     addiu $at, $zero, 0x10
  /* 1250E4 80134734 00002025 */        or $a0, $zero, $zero
  /* 1250E8 80134738 55810004 */      bnel $t4, $at, .L8013474C
  /* 1250EC 8013473C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1250F0 80134740 0C0082AD */       jal func_80020AB4
  /* 1250F4 80134744 2405002C */     addiu $a1, $zero, 0x2c
  /* 1250F8 80134748 8FBF001C */        lw $ra, 0x1c($sp)
  .L8013474C:
  /* 1250FC 8013474C 27BD0050 */     addiu $sp, $sp, 0x50
  /* 125100 80134750 03E00008 */        jr $ra
  /* 125104 80134754 00000000 */       nop

glabel mnVSStartScene
  /* 125108 80134758 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 12510C 8013475C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 125110 80134760 3C048013 */       lui $a0, %hi(D_ovl19_80134880)
  /* 125114 80134764 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 125118 80134768 24844880 */     addiu $a0, $a0, %lo(D_ovl19_80134880)
  /* 12511C 8013476C AFBF0014 */        sw $ra, 0x14($sp)
  /* 125120 80134770 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 125124 80134774 0C001C09 */       jal func_80007024
  /* 125128 80134778 AC8F000C */        sw $t7, 0xc($a0) # D_ovl19_80134880 + 12
  /* 12512C 8013477C 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 125130 80134780 3C198013 */       lui $t9, %hi(D_NF_80134A50)
  /* 125134 80134784 3C048013 */       lui $a0, %hi(D_ovl19_8013489C)
  /* 125138 80134788 27394A50 */     addiu $t9, $t9, %lo(D_NF_80134A50)
  /* 12513C 8013478C 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 125140 80134790 2484489C */     addiu $a0, $a0, %lo(D_ovl19_8013489C)
  /* 125144 80134794 03194023 */      subu $t0, $t8, $t9
  /* 125148 80134798 0C001A0F */       jal gsGTLSceneInit
  /* 12514C 8013479C AC880010 */        sw $t0, 0x10($a0) # D_ovl19_8013489C + 16
  /* 125150 801347A0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 125154 801347A4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 125158 801347A8 03E00008 */        jr $ra
  /* 12515C 801347AC 00000000 */       nop
#
#glabel D_ovl19_801347B0   # Routine parsed as data
#  /* 125160 801347B0 00000000 */       nop
#  /* 125164 801347B4 00000006 */      srlv $zero, $zero, $zero
#glabel D_ovl19_801347B8   # Routine parsed as data
#  /* 125168 801347B8 20202000 */      addi $zero, $at, 0x2000
#  /* 12516C 801347BC 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl19_801347C0   # Routine parsed as data
#  /* 125170 801347C0 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 125174 801347C4 FFFFFF00 */        sd $ra, -0x100($ra)
