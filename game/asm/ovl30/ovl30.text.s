.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x801344D0

glabel func_ovl30_80131B00
  /* 14D670 80131B00 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14D674 80131B04 AFB20020 */        sw $s2, 0x20($sp)
  /* 14D678 80131B08 AFB00018 */        sw $s0, 0x18($sp)
  /* 14D67C 80131B0C AFB1001C */        sw $s1, 0x1c($sp)
  /* 14D680 80131B10 3C108013 */       lui $s0, %hi(D_ovl30_801344E4)
  /* 14D684 80131B14 3C128013 */       lui $s2, %hi(D_ovl30_8013452C)
  /* 14D688 80131B18 AFBF0024 */        sw $ra, 0x24($sp)
  /* 14D68C 80131B1C 00008825 */        or $s1, $zero, $zero
  /* 14D690 80131B20 2652452C */     addiu $s2, $s2, %lo(D_ovl30_8013452C)
  /* 14D694 80131B24 261044E4 */     addiu $s0, $s0, %lo(D_ovl30_801344E4)
  .L80131B28:
  /* 14D698 80131B28 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 14D69C 80131B2C 8E040000 */        lw $a0, ($s0) # D_ovl30_801344E4 + 0
  /* 14D6A0 80131B30 0222082B */      sltu $at, $s1, $v0
  /* 14D6A4 80131B34 10200002 */      beqz $at, .L80131B40
  /* 14D6A8 80131B38 26100008 */     addiu $s0, $s0, 8
  /* 14D6AC 80131B3C 00408825 */        or $s1, $v0, $zero
  .L80131B40:
  /* 14D6B0 80131B40 1612FFF9 */       bne $s0, $s2, .L80131B28
  /* 14D6B4 80131B44 00000000 */       nop 
  /* 14D6B8 80131B48 02202025 */        or $a0, $s1, $zero
  /* 14D6BC 80131B4C 0C001260 */       jal hal_alloc
  /* 14D6C0 80131B50 24050010 */     addiu $a1, $zero, 0x10
  /* 14D6C4 80131B54 3C018013 */       lui $at, %hi(D_ovl30_80134E24)
  /* 14D6C8 80131B58 AC224E24 */        sw $v0, %lo(D_ovl30_80134E24)($at)
  /* 14D6CC 80131B5C 02202025 */        or $a0, $s1, $zero
  /* 14D6D0 80131B60 0C001260 */       jal hal_alloc
  /* 14D6D4 80131B64 24050010 */     addiu $a1, $zero, 0x10
  /* 14D6D8 80131B68 8FBF0024 */        lw $ra, 0x24($sp)
  /* 14D6DC 80131B6C 3C018013 */       lui $at, %hi(D_ovl30_80134E28)
  /* 14D6E0 80131B70 8FB00018 */        lw $s0, 0x18($sp)
  /* 14D6E4 80131B74 8FB1001C */        lw $s1, 0x1c($sp)
  /* 14D6E8 80131B78 8FB20020 */        lw $s2, 0x20($sp)
  /* 14D6EC 80131B7C AC224E28 */        sw $v0, %lo(D_ovl30_80134E28)($at)
  /* 14D6F0 80131B80 03E00008 */        jr $ra
  /* 14D6F4 80131B84 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl30_80131B88
  /* 14D6F8 80131B88 8C830000 */        lw $v1, ($a0)
  /* 14D6FC 80131B8C 3C188013 */       lui $t8, %hi(D_ovl30_801345A8)
  /* 14D700 80131B90 271845A8 */     addiu $t8, $t8, %lo(D_ovl30_801345A8)
  /* 14D704 80131B94 246E0008 */     addiu $t6, $v1, 8
  /* 14D708 80131B98 AC8E0000 */        sw $t6, ($a0)
  /* 14D70C 80131B9C 3C0FDE00 */       lui $t7, 0xde00
  /* 14D710 80131BA0 AC6F0000 */        sw $t7, ($v1)
  /* 14D714 80131BA4 03E00008 */        jr $ra
  /* 14D718 80131BA8 AC780004 */        sw $t8, 4($v1)

glabel func_ovl30_80131BAC
  /* 14D71C 80131BAC 24010008 */     addiu $at, $zero, 8
  /* 14D720 80131BB0 1481000A */       bne $a0, $at, .L80131BDC
  /* 14D724 80131BB4 00001025 */        or $v0, $zero, $zero
  /* 14D728 80131BB8 3C0E8013 */       lui $t6, %hi(D_ovl30_80134C1C)
  /* 14D72C 80131BBC 91CE4C1C */       lbu $t6, %lo(D_ovl30_80134C1C)($t6)
  /* 14D730 80131BC0 31CF0010 */      andi $t7, $t6, 0x10
  /* 14D734 80131BC4 11E00003 */      beqz $t7, .L80131BD4
  /* 14D738 80131BC8 00000000 */       nop 
  /* 14D73C 80131BCC 03E00008 */        jr $ra
  /* 14D740 80131BD0 00001025 */        or $v0, $zero, $zero

  .L80131BD4:
  /* 14D744 80131BD4 03E00008 */        jr $ra
  /* 14D748 80131BD8 24020001 */     addiu $v0, $zero, 1

  .L80131BDC:
  /* 14D74C 80131BDC 03E00008 */        jr $ra
  /* 14D750 80131BE0 00000000 */       nop 

glabel func_ovl30_80131BE4
  /* 14D754 80131BE4 AFA40000 */        sw $a0, ($sp)
  /* 14D758 80131BE8 308400FF */      andi $a0, $a0, 0xff
  /* 14D75C 80131BEC 24010020 */     addiu $at, $zero, 0x20
  /* 14D760 80131BF0 10810010 */       beq $a0, $at, .L80131C34
  /* 14D764 80131BF4 00801825 */        or $v1, $a0, $zero
  /* 14D768 80131BF8 24010025 */     addiu $at, $zero, 0x25
  /* 14D76C 80131BFC 10810009 */       beq $a0, $at, .L80131C24
  /* 14D770 80131C00 24010027 */     addiu $at, $zero, 0x27
  /* 14D774 80131C04 10810005 */       beq $a0, $at, .L80131C1C
  /* 14D778 80131C08 2401002E */     addiu $at, $zero, 0x2e
  /* 14D77C 80131C0C 10810007 */       beq $a0, $at, .L80131C2C
  /* 14D780 80131C10 00000000 */       nop 
  /* 14D784 80131C14 10000009 */         b .L80131C3C
  /* 14D788 80131C18 28610041 */      slti $at, $v1, 0x41
  .L80131C1C:
  /* 14D78C 80131C1C 03E00008 */        jr $ra
  /* 14D790 80131C20 2402001A */     addiu $v0, $zero, 0x1a

  .L80131C24:
  /* 14D794 80131C24 03E00008 */        jr $ra
  /* 14D798 80131C28 2402001B */     addiu $v0, $zero, 0x1b

  .L80131C2C:
  /* 14D79C 80131C2C 03E00008 */        jr $ra
  /* 14D7A0 80131C30 2402001C */     addiu $v0, $zero, 0x1c

  .L80131C34:
  /* 14D7A4 80131C34 03E00008 */        jr $ra
  /* 14D7A8 80131C38 2402001D */     addiu $v0, $zero, 0x1d

  .L80131C3C:
  /* 14D7AC 80131C3C 14200003 */      bnez $at, .L80131C4C
  /* 14D7B0 80131C40 2861005B */      slti $at, $v1, 0x5b
  /* 14D7B4 80131C44 14200003 */      bnez $at, .L80131C54
  /* 14D7B8 80131C48 2462FFBF */     addiu $v0, $v1, -0x41
  .L80131C4C:
  /* 14D7BC 80131C4C 03E00008 */        jr $ra
  /* 14D7C0 80131C50 2402001D */     addiu $v0, $zero, 0x1d

  .L80131C54:
  /* 14D7C4 80131C54 03E00008 */        jr $ra
  /* 14D7C8 80131C58 00000000 */       nop 

glabel func_ovl30_80131C5C
  /* 14D7CC 80131C5C 00851021 */      addu $v0, $a0, $a1
  /* 14D7D0 80131C60 904E0000 */       lbu $t6, ($v0)
  /* 14D7D4 80131C64 25CFFFD9 */     addiu $t7, $t6, -0x27
  /* 14D7D8 80131C68 2DE10033 */     sltiu $at, $t7, 0x33
  /* 14D7DC 80131C6C 10200038 */      beqz $at, jtgt_ovl30_80131D50
  /* 14D7E0 80131C70 000F7880 */       sll $t7, $t7, 2
  /* 14D7E4 80131C74 3C018013 */       lui $at, %hi(jtbl_ovl30_80134A7C)
  /* 14D7E8 80131C78 002F0821 */      addu $at, $at, $t7
  /* 14D7EC 80131C7C 8C2F4A7C */        lw $t7, %lo(jtbl_ovl30_80134A7C)($at)
  /* 14D7F0 80131C80 01E00008 */        jr $t7
  /* 14D7F4 80131C84 00000000 */       nop 
  glabel jtgt_ovl30_80131C88
  /* 14D7F8 80131C88 90580001 */       lbu $t8, 1($v0)
  /* 14D7FC 80131C8C 2719FFBA */     addiu $t9, $t8, -0x46
  /* 14D800 80131C90 2F210014 */     sltiu $at, $t9, 0x14
  /* 14D804 80131C94 10200009 */      beqz $at, jtgt_ovl30_80131CBC
  /* 14D808 80131C98 0019C880 */       sll $t9, $t9, 2
  /* 14D80C 80131C9C 3C018013 */       lui $at, %hi(D_ovl30_80134B48)
  /* 14D810 80131CA0 00390821 */      addu $at, $at, $t9
  /* 14D814 80131CA4 8C394B48 */        lw $t9, %lo(D_ovl30_80134B48)($at)
  /* 14D818 80131CA8 03200008 */        jr $t9
  /* 14D81C 80131CAC 00000000 */       nop 
  glabel jtgt_ovl30_80131CB0
  /* 14D820 80131CB0 44800000 */      mtc1 $zero, $f0
  /* 14D824 80131CB4 03E00008 */        jr $ra
  /* 14D828 80131CB8 00000000 */       nop 

  glabel jtgt_ovl30_80131CBC
  /* 14D82C 80131CBC 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14D830 80131CC0 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D834 80131CC4 03E00008 */        jr $ra
  /* 14D838 80131CC8 00000000 */       nop 

  glabel jtgt_ovl30_80131CCC
  /* 14D83C 80131CCC 90430001 */       lbu $v1, 1($v0)
  /* 14D840 80131CD0 24010041 */     addiu $at, $zero, 0x41
  /* 14D844 80131CD4 10610003 */       beq $v1, $at, .L80131CE4
  /* 14D848 80131CD8 24010054 */     addiu $at, $zero, 0x54
  /* 14D84C 80131CDC 54610005 */      bnel $v1, $at, .L80131CF4
  /* 14D850 80131CE0 3C013F80 */       lui $at, 0x3f80
  .L80131CE4:
  /* 14D854 80131CE4 44800000 */      mtc1 $zero, $f0
  /* 14D858 80131CE8 03E00008 */        jr $ra
  /* 14D85C 80131CEC 00000000 */       nop 

  /* 14D860 80131CF0 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  .L80131CF4:
  /* 14D864 80131CF4 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D868 80131CF8 03E00008 */        jr $ra
  /* 14D86C 80131CFC 00000000 */       nop 

  glabel jtgt_ovl30_80131D00
  /* 14D870 80131D00 90430001 */       lbu $v1, 1($v0)
  /* 14D874 80131D04 24010027 */     addiu $at, $zero, 0x27
  /* 14D878 80131D08 10610002 */       beq $v1, $at, .L80131D14
  /* 14D87C 80131D0C 2401002E */     addiu $at, $zero, 0x2e
  /* 14D880 80131D10 14610004 */       bne $v1, $at, .L80131D24
  .L80131D14:
  /* 14D884 80131D14 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14D888 80131D18 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D88C 80131D1C 03E00008 */        jr $ra
  /* 14D890 80131D20 00000000 */       nop 

  .L80131D24:
  /* 14D894 80131D24 44800000 */      mtc1 $zero, $f0
  /* 14D898 80131D28 03E00008 */        jr $ra
  /* 14D89C 80131D2C 00000000 */       nop 

  glabel jtgt_ovl30_80131D30
  /* 14D8A0 80131D30 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14D8A4 80131D34 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D8A8 80131D38 03E00008 */        jr $ra
  /* 14D8AC 80131D3C 00000000 */       nop 

  glabel jtgt_ovl30_80131D40
  /* 14D8B0 80131D40 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14D8B4 80131D44 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D8B8 80131D48 03E00008 */        jr $ra
  /* 14D8BC 80131D4C 00000000 */       nop 

  glabel jtgt_ovl30_80131D50
  /* 14D8C0 80131D50 90480001 */       lbu $t0, 1($v0)
  /* 14D8C4 80131D54 24010054 */     addiu $at, $zero, 0x54
  /* 14D8C8 80131D58 55010005 */      bnel $t0, $at, .L80131D70
  /* 14D8CC 80131D5C 3C013F80 */       lui $at, 0x3f80
  /* 14D8D0 80131D60 44800000 */      mtc1 $zero, $f0
  /* 14D8D4 80131D64 03E00008 */        jr $ra
  /* 14D8D8 80131D68 00000000 */       nop 

  /* 14D8DC 80131D6C 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  .L80131D70:
  /* 14D8E0 80131D70 44810000 */      mtc1 $at, $f0 # 1.0 to cop1
  /* 14D8E4 80131D74 00000000 */       nop 
  /* 14D8E8 80131D78 03E00008 */        jr $ra
  /* 14D8EC 80131D7C 00000000 */       nop 

  /* 14D8F0 80131D80 27BDFF08 */     addiu $sp, $sp, -0xf8
  /* 14D8F4 80131D84 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 14D8F8 80131D88 3C0F8013 */       lui $t7, %hi(D_ovl30_801345D0)
  /* 14D8FC 80131D8C AFB5004C */        sw $s5, 0x4c($sp)
  /* 14D900 80131D90 25EF45D0 */     addiu $t7, $t7, %lo(D_ovl30_801345D0)
  /* 14D904 80131D94 4487B000 */      mtc1 $a3, $f22
  /* 14D908 80131D98 44866000 */      mtc1 $a2, $f12
  /* 14D90C 80131D9C 00A0A825 */        or $s5, $a1, $zero
  /* 14D910 80131DA0 AFBF005C */        sw $ra, 0x5c($sp)
  /* 14D914 80131DA4 AFBE0058 */        sw $fp, 0x58($sp)
  /* 14D918 80131DA8 AFB70054 */        sw $s7, 0x54($sp)
  /* 14D91C 80131DAC AFB60050 */        sw $s6, 0x50($sp)
  /* 14D920 80131DB0 AFB40048 */        sw $s4, 0x48($sp)
  /* 14D924 80131DB4 AFB30044 */        sw $s3, 0x44($sp)
  /* 14D928 80131DB8 AFB20040 */        sw $s2, 0x40($sp)
  /* 14D92C 80131DBC AFB1003C */        sw $s1, 0x3c($sp)
  /* 14D930 80131DC0 AFB00038 */        sw $s0, 0x38($sp)
  /* 14D934 80131DC4 F7BA0030 */      sdc1 $f26, 0x30($sp)
  /* 14D938 80131DC8 F7B80028 */      sdc1 $f24, 0x28($sp)
  /* 14D93C 80131DCC F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 14D940 80131DD0 AFA400F8 */        sw $a0, 0xf8($sp)
  /* 14D944 80131DD4 25E8006C */     addiu $t0, $t7, 0x6c
  /* 14D948 80131DD8 27AE0084 */     addiu $t6, $sp, 0x84
  .L80131DDC:
  /* 14D94C 80131DDC 8DF90000 */        lw $t9, ($t7) # D_ovl30_801345D0 + 0
  /* 14D950 80131DE0 25EF000C */     addiu $t7, $t7, 0xc
  /* 14D954 80131DE4 25CE000C */     addiu $t6, $t6, 0xc
  /* 14D958 80131DE8 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 14D95C 80131DEC 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl30_801345D0 + -8
  /* 14D960 80131DF0 ADD8FFF8 */        sw $t8, -8($t6)
  /* 14D964 80131DF4 8DF9FFFC */        lw $t9, -4($t7) # D_ovl30_801345D0 + -4
  /* 14D968 80131DF8 15E8FFF8 */       bne $t7, $t0, .L80131DDC
  /* 14D96C 80131DFC ADD9FFFC */        sw $t9, -4($t6)
  /* 14D970 80131E00 8DF90000 */        lw $t9, ($t7) # D_ovl30_801345D0 + 0
  /* 14D974 80131E04 8DF80004 */        lw $t8, 4($t7) # D_ovl30_801345D0 + 4
  /* 14D978 80131E08 46006506 */     mov.s $f20, $f12
  /* 14D97C 80131E0C ADD90000 */        sw $t9, ($t6)
  /* 14D980 80131E10 ADD80004 */        sw $t8, 4($t6)
  /* 14D984 80131E14 92A90000 */       lbu $t1, ($s5)
  /* 14D988 80131E18 00009825 */        or $s3, $zero, $zero
  /* 14D98C 80131E1C 02A08825 */        or $s1, $s5, $zero
  /* 14D990 80131E20 11200050 */      beqz $t1, .L80131F64
  /* 14D994 80131E24 312400FF */      andi $a0, $t1, 0xff
  /* 14D998 80131E28 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14D99C 80131E2C 4481D000 */      mtc1 $at, $f26 # 1.0 to cop1
  /* 14D9A0 80131E30 3C014080 */       lui $at, (0x40800000 >> 16) # 4.0
  /* 14D9A4 80131E34 3C168013 */       lui $s6, %hi(D_ovl30_80134E10)
  /* 14D9A8 80131E38 4481C000 */      mtc1 $at, $f24 # 4.0 to cop1
  /* 14D9AC 80131E3C 26D64E10 */     addiu $s6, $s6, %lo(D_ovl30_80134E10)
  /* 14D9B0 80131E40 00801825 */        or $v1, $a0, $zero
  /* 14D9B4 80131E44 241E002E */     addiu $fp, $zero, 0x2e
  /* 14D9B8 80131E48 24170027 */     addiu $s7, $zero, 0x27
  /* 14D9BC 80131E4C 24140020 */     addiu $s4, $zero, 0x20
  /* 14D9C0 80131E50 8FB20108 */        lw $s2, 0x108($sp)
  .L80131E54:
  /* 14D9C4 80131E54 28610030 */      slti $at, $v1, 0x30
  /* 14D9C8 80131E58 14200006 */      bnez $at, .L80131E74
  /* 14D9CC 80131E5C 00001025 */        or $v0, $zero, $zero
  /* 14D9D0 80131E60 2861003A */      slti $at, $v1, 0x3a
  /* 14D9D4 80131E64 10200003 */      beqz $at, .L80131E74
  /* 14D9D8 80131E68 00000000 */       nop 
  /* 14D9DC 80131E6C 10000001 */         b .L80131E74
  /* 14D9E0 80131E70 24020001 */     addiu $v0, $zero, 1
  .L80131E74:
  /* 14D9E4 80131E74 14400003 */      bnez $v0, .L80131E84
  /* 14D9E8 80131E78 00000000 */       nop 
  /* 14D9EC 80131E7C 1683000A */       bne $s4, $v1, .L80131EA8
  /* 14D9F0 80131E80 00000000 */       nop 
  .L80131E84:
  /* 14D9F4 80131E84 16830003 */       bne $s4, $v1, .L80131E94
  /* 14D9F8 80131E88 246AFFD0 */     addiu $t2, $v1, -0x30
  /* 14D9FC 80131E8C 10000030 */         b .L80131F50
  /* 14DA00 80131E90 4618A500 */     add.s $f20, $f20, $f24
  .L80131E94:
  /* 14DA04 80131E94 448A2000 */      mtc1 $t2, $f4
  /* 14DA08 80131E98 00000000 */       nop 
  /* 14DA0C 80131E9C 468021A0 */   cvt.s.w $f6, $f4
  /* 14DA10 80131EA0 1000002B */         b .L80131F50
  /* 14DA14 80131EA4 4606A500 */     add.s $f20, $f20, $f6
  .L80131EA8:
  /* 14DA18 80131EA8 0C04C6F9 */       jal func_ovl30_80131BE4
  /* 14DA1C 80131EAC 00000000 */       nop 
  /* 14DA20 80131EB0 00025880 */       sll $t3, $v0, 2
  /* 14DA24 80131EB4 03AB6021 */      addu $t4, $sp, $t3
  /* 14DA28 80131EB8 8D8C0084 */        lw $t4, 0x84($t4)
  /* 14DA2C 80131EBC 8ECD000C */        lw $t5, 0xc($s6) # D_ovl30_80134E10 + 12
  /* 14DA30 80131EC0 8FA400F8 */        lw $a0, 0xf8($sp)
  /* 14DA34 80131EC4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DA38 80131EC8 018D2821 */      addu $a1, $t4, $t5
  /* 14DA3C 80131ECC 00408025 */        or $s0, $v0, $zero
  /* 14DA40 80131ED0 E4540058 */      swc1 $f20, 0x58($v0)
  /* 14DA44 80131ED4 02A02025 */        or $a0, $s5, $zero
  /* 14DA48 80131ED8 0C04C717 */       jal func_ovl30_80131C5C
  /* 14DA4C 80131EDC 02602825 */        or $a1, $s3, $zero
  /* 14DA50 80131EE0 86080014 */        lh $t0, 0x14($s0)
  /* 14DA54 80131EE4 92220000 */       lbu $v0, ($s1)
  /* 14DA58 80131EE8 44884000 */      mtc1 $t0, $f8
  /* 14DA5C 80131EEC 00000000 */       nop 
  /* 14DA60 80131EF0 468042A0 */   cvt.s.w $f10, $f8
  /* 14DA64 80131EF4 46005400 */     add.s $f16, $f10, $f0
  /* 14DA68 80131EF8 10570005 */       beq $v0, $s7, .L80131F10
  /* 14DA6C 80131EFC 4610A500 */     add.s $f20, $f20, $f16
  /* 14DA70 80131F00 505E0007 */      beql $v0, $fp, .L80131F20
  /* 14DA74 80131F04 4618B100 */     add.s $f4, $f22, $f24
  /* 14DA78 80131F08 10000006 */         b .L80131F24
  /* 14DA7C 80131F0C E616005C */      swc1 $f22, 0x5c($s0)
  .L80131F10:
  /* 14DA80 80131F10 461AB481 */     sub.s $f18, $f22, $f26
  /* 14DA84 80131F14 10000003 */         b .L80131F24
  /* 14DA88 80131F18 E612005C */      swc1 $f18, 0x5c($s0)
  /* 14DA8C 80131F1C 4618B100 */     add.s $f4, $f22, $f24
  .L80131F20:
  /* 14DA90 80131F20 E604005C */      swc1 $f4, 0x5c($s0)
  .L80131F24:
  /* 14DA94 80131F24 960F0024 */       lhu $t7, 0x24($s0)
  /* 14DA98 80131F28 31F8FFDF */      andi $t8, $t7, 0xffdf
  /* 14DA9C 80131F2C A6180024 */        sh $t8, 0x24($s0)
  /* 14DAA0 80131F30 37190001 */       ori $t9, $t8, 1
  /* 14DAA4 80131F34 A6190024 */        sh $t9, 0x24($s0)
  /* 14DAA8 80131F38 8E490000 */        lw $t1, ($s2)
  /* 14DAAC 80131F3C A2090028 */        sb $t1, 0x28($s0)
  /* 14DAB0 80131F40 8E4A0004 */        lw $t2, 4($s2)
  /* 14DAB4 80131F44 A20A0029 */        sb $t2, 0x29($s0)
  /* 14DAB8 80131F48 8E4B0008 */        lw $t3, 8($s2)
  /* 14DABC 80131F4C A20B002A */        sb $t3, 0x2a($s0)
  .L80131F50:
  /* 14DAC0 80131F50 92240001 */       lbu $a0, 1($s1)
  /* 14DAC4 80131F54 26730001 */     addiu $s3, $s3, 1
  /* 14DAC8 80131F58 26310001 */     addiu $s1, $s1, 1
  /* 14DACC 80131F5C 1480FFBD */      bnez $a0, .L80131E54
  /* 14DAD0 80131F60 00801825 */        or $v1, $a0, $zero
  .L80131F64:
  /* 14DAD4 80131F64 8FBF005C */        lw $ra, 0x5c($sp)
  /* 14DAD8 80131F68 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 14DADC 80131F6C D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 14DAE0 80131F70 D7B80028 */      ldc1 $f24, 0x28($sp)
  /* 14DAE4 80131F74 D7BA0030 */      ldc1 $f26, 0x30($sp)
  /* 14DAE8 80131F78 8FB00038 */        lw $s0, 0x38($sp)
  /* 14DAEC 80131F7C 8FB1003C */        lw $s1, 0x3c($sp)
  /* 14DAF0 80131F80 8FB20040 */        lw $s2, 0x40($sp)
  /* 14DAF4 80131F84 8FB30044 */        lw $s3, 0x44($sp)
  /* 14DAF8 80131F88 8FB40048 */        lw $s4, 0x48($sp)
  /* 14DAFC 80131F8C 8FB5004C */        lw $s5, 0x4c($sp)
  /* 14DB00 80131F90 8FB60050 */        lw $s6, 0x50($sp)
  /* 14DB04 80131F94 8FB70054 */        lw $s7, 0x54($sp)
  /* 14DB08 80131F98 8FBE0058 */        lw $fp, 0x58($sp)
  /* 14DB0C 80131F9C 03E00008 */        jr $ra
  /* 14DB10 80131FA0 27BD00F8 */     addiu $sp, $sp, 0xf8

glabel func_ovl30_80131FA4
  /* 14DB14 80131FA4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14DB18 80131FA8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14DB1C 80131FAC 00002025 */        or $a0, $zero, $zero
  /* 14DB20 80131FB0 00002825 */        or $a1, $zero, $zero
  /* 14DB24 80131FB4 24060002 */     addiu $a2, $zero, 2
  /* 14DB28 80131FB8 0C00265A */       jal omMakeGObjCommon
  /* 14DB2C 80131FBC 3C078000 */       lui $a3, 0x8000
  /* 14DB30 80131FC0 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 14DB34 80131FC4 240EFFFF */     addiu $t6, $zero, -1
  /* 14DB38 80131FC8 AFA20024 */        sw $v0, 0x24($sp)
  /* 14DB3C 80131FCC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14DB40 80131FD0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 14DB44 80131FD4 00402025 */        or $a0, $v0, $zero
  /* 14DB48 80131FD8 00003025 */        or $a2, $zero, $zero
  /* 14DB4C 80131FDC 0C00277D */       jal func_80009DF4
  /* 14DB50 80131FE0 3C078000 */       lui $a3, 0x8000
  /* 14DB54 80131FE4 3C0F8013 */       lui $t7, %hi(D_ovl30_80134E14)
  /* 14DB58 80131FE8 8DEF4E14 */        lw $t7, %lo(D_ovl30_80134E14)($t7)
  /* 14DB5C 80131FEC 3C180000 */       lui $t8, %hi(D_NF_00000440)
  /* 14DB60 80131FF0 27180440 */     addiu $t8, $t8, %lo(D_NF_00000440)
  /* 14DB64 80131FF4 8FA40024 */        lw $a0, 0x24($sp)
  /* 14DB68 80131FF8 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DB6C 80131FFC 01F82821 */      addu $a1, $t7, $t8
  /* 14DB70 80132000 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14DB74 80132004 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14DB78 80132008 24190006 */     addiu $t9, $zero, 6
  /* 14DB7C 8013200C 24080005 */     addiu $t0, $zero, 5
  /* 14DB80 80132010 2409012C */     addiu $t1, $zero, 0x12c
  /* 14DB84 80132014 240A00DC */     addiu $t2, $zero, 0xdc
  /* 14DB88 80132018 A0400065 */        sb $zero, 0x65($v0)
  /* 14DB8C 8013201C A0400064 */        sb $zero, 0x64($v0)
  /* 14DB90 80132020 A0590067 */        sb $t9, 0x67($v0)
  /* 14DB94 80132024 A0480066 */        sb $t0, 0x66($v0)
  /* 14DB98 80132028 A4490068 */        sh $t1, 0x68($v0)
  /* 14DB9C 8013202C A44A006A */        sh $t2, 0x6a($v0)
  /* 14DBA0 80132030 E4400058 */      swc1 $f0, 0x58($v0)
  /* 14DBA4 80132034 E440005C */      swc1 $f0, 0x5c($v0)
  /* 14DBA8 80132038 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14DBAC 8013203C 27BD0028 */     addiu $sp, $sp, 0x28
  /* 14DBB0 80132040 03E00008 */        jr $ra
  /* 14DBB4 80132044 00000000 */       nop 

glabel func_ovl30_80132048
  /* 14DBB8 80132048 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14DBBC 8013204C AFBF001C */        sw $ra, 0x1c($sp)
  /* 14DBC0 80132050 00002025 */        or $a0, $zero, $zero
  /* 14DBC4 80132054 00002825 */        or $a1, $zero, $zero
  /* 14DBC8 80132058 24060008 */     addiu $a2, $zero, 8
  /* 14DBCC 8013205C 0C00265A */       jal omMakeGObjCommon
  /* 14DBD0 80132060 3C078000 */       lui $a3, 0x8000
  /* 14DBD4 80132064 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 14DBD8 80132068 240EFFFF */     addiu $t6, $zero, -1
  /* 14DBDC 8013206C AFA20024 */        sw $v0, 0x24($sp)
  /* 14DBE0 80132070 AFAE0010 */        sw $t6, 0x10($sp)
  /* 14DBE4 80132074 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 14DBE8 80132078 00402025 */        or $a0, $v0, $zero
  /* 14DBEC 8013207C 24060006 */     addiu $a2, $zero, 6
  /* 14DBF0 80132080 0C00277D */       jal func_80009DF4
  /* 14DBF4 80132084 3C078000 */       lui $a3, 0x8000
  /* 14DBF8 80132088 3C0F8013 */       lui $t7, %hi(D_ovl30_80134E18)
  /* 14DBFC 8013208C 8DEF4E18 */        lw $t7, %lo(D_ovl30_80134E18)($t7)
  /* 14DC00 80132090 3C180000 */       lui $t8, %hi(D_NF_00003840)
  /* 14DC04 80132094 27183840 */     addiu $t8, $t8, %lo(D_NF_00003840)
  /* 14DC08 80132098 8FA40024 */        lw $a0, 0x24($sp)
  /* 14DC0C 8013209C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DC10 801320A0 01F82821 */      addu $a1, $t7, $t8
  /* 14DC14 801320A4 94590024 */       lhu $t9, 0x24($v0)
  /* 14DC18 801320A8 3C01433D */       lui $at, (0x433D0000 >> 16) # 189.0
  /* 14DC1C 801320AC 44812000 */      mtc1 $at, $f4 # 189.0 to cop1
  /* 14DC20 801320B0 3C0142F8 */       lui $at, (0x42F80000 >> 16) # 124.0
  /* 14DC24 801320B4 44813000 */      mtc1 $at, $f6 # 124.0 to cop1
  /* 14DC28 801320B8 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 14DC2C 801320BC A4490024 */        sh $t1, 0x24($v0)
  /* 14DC30 801320C0 352A0001 */       ori $t2, $t1, 1
  /* 14DC34 801320C4 A44A0024 */        sh $t2, 0x24($v0)
  /* 14DC38 801320C8 E4440058 */      swc1 $f4, 0x58($v0)
  /* 14DC3C 801320CC E446005C */      swc1 $f6, 0x5c($v0)
  /* 14DC40 801320D0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14DC44 801320D4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 14DC48 801320D8 03E00008 */        jr $ra
  /* 14DC4C 801320DC 00000000 */       nop 

glabel func_ovl30_801320E0
  /* 14DC50 801320E0 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 14DC54 801320E4 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 14DC58 801320E8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DC5C 801320EC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14DC60 801320F0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14DC64 801320F4 244E0008 */     addiu $t6, $v0, 8
  /* 14DC68 801320F8 AFA40018 */        sw $a0, 0x18($sp)
  /* 14DC6C 801320FC AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14DC70 80132100 3C0FE700 */       lui $t7, 0xe700
  /* 14DC74 80132104 AC4F0000 */        sw $t7, ($v0)
  /* 14DC78 80132108 AC400004 */        sw $zero, 4($v0)
  /* 14DC7C 8013210C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DC80 80132110 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 14DC84 80132114 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 14DC88 80132118 24580008 */     addiu $t8, $v0, 8
  /* 14DC8C 8013211C AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14DC90 80132120 AC400004 */        sw $zero, 4($v0)
  /* 14DC94 80132124 AC590000 */        sw $t9, ($v0)
  /* 14DC98 80132128 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DC9C 8013212C 3C185760 */       lui $t8, (0x576088FF >> 16) # 1465944319
  /* 14DCA0 80132130 371888FF */       ori $t8, $t8, (0x576088FF & 0xFFFF) # 1465944319
  /* 14DCA4 80132134 244E0008 */     addiu $t6, $v0, 8
  /* 14DCA8 80132138 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14DCAC 8013213C 3C0FFA00 */       lui $t7, 0xfa00
  /* 14DCB0 80132140 AC4F0000 */        sw $t7, ($v0)
  /* 14DCB4 80132144 AC580004 */        sw $t8, 4($v0)
  /* 14DCB8 80132148 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DCBC 8013214C 3C0FFFFD */       lui $t7, (0xFFFDF6FB >> 16) # 4294833915
  /* 14DCC0 80132150 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 14DCC4 80132154 24590008 */     addiu $t9, $v0, 8
  /* 14DCC8 80132158 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 14DCCC 8013215C 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 14DCD0 80132160 35EFF6FB */       ori $t7, $t7, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 14DCD4 80132164 AC4F0004 */        sw $t7, 4($v0)
  /* 14DCD8 80132168 AC4E0000 */        sw $t6, ($v0)
  /* 14DCDC 8013216C 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DCE0 80132170 3C0E0050 */       lui $t6, (0x5041C8 >> 16) # 5259720
  /* 14DCE4 80132174 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 14DCE8 80132178 24580008 */     addiu $t8, $v0, 8
  /* 14DCEC 8013217C AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14DCF0 80132180 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 14DCF4 80132184 35CE41C8 */       ori $t6, $t6, (0x5041C8 & 0xFFFF) # 5259720
  /* 14DCF8 80132188 AC4E0004 */        sw $t6, 4($v0)
  /* 14DCFC 8013218C AC590000 */        sw $t9, ($v0)
  /* 14DD00 80132190 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DD04 80132194 3C195760 */       lui $t9, (0x576088FF >> 16) # 1465944319
  /* 14DD08 80132198 373988FF */       ori $t9, $t9, (0x576088FF & 0xFFFF) # 1465944319
  /* 14DD0C 8013219C 244F0008 */     addiu $t7, $v0, 8
  /* 14DD10 801321A0 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 14DD14 801321A4 3C18FA00 */       lui $t8, 0xfa00
  /* 14DD18 801321A8 AC580000 */        sw $t8, ($v0)
  /* 14DD1C 801321AC AC590004 */        sw $t9, 4($v0)
  /* 14DD20 801321B0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DD24 801321B4 3C180028 */       lui $t8, (0x280200 >> 16) # 2621952
  /* 14DD28 801321B8 3C0FF650 */       lui $t7, (0xF6500218 >> 16) # 4132438552
  /* 14DD2C 801321BC 244E0008 */     addiu $t6, $v0, 8
  /* 14DD30 801321C0 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14DD34 801321C4 35EF0218 */       ori $t7, $t7, (0xF6500218 & 0xFFFF) # 4132438552
  /* 14DD38 801321C8 37180200 */       ori $t8, $t8, (0x280200 & 0xFFFF) # 2621952
  /* 14DD3C 801321CC AC580004 */        sw $t8, 4($v0)
  /* 14DD40 801321D0 AC4F0000 */        sw $t7, ($v0)
  /* 14DD44 801321D4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DD48 801321D8 240F0033 */     addiu $t7, $zero, 0x33
  /* 14DD4C 801321DC 3C0EFA00 */       lui $t6, 0xfa00
  /* 14DD50 801321E0 24590008 */     addiu $t9, $v0, 8
  /* 14DD54 801321E4 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 14DD58 801321E8 AC4F0004 */        sw $t7, 4($v0)
  /* 14DD5C 801321EC AC4E0000 */        sw $t6, ($v0)
  /* 14DD60 801321F0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DD64 801321F4 3C0E0030 */       lui $t6, (0x3082F4 >> 16) # 3179252
  /* 14DD68 801321F8 3C19F643 */       lui $t9, (0xF6430304 >> 16) # 4131586820
  /* 14DD6C 801321FC 24580008 */     addiu $t8, $v0, 8
  /* 14DD70 80132200 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14DD74 80132204 37390304 */       ori $t9, $t9, (0xF6430304 & 0xFFFF) # 4131586820
  /* 14DD78 80132208 35CE82F4 */       ori $t6, $t6, (0x3082F4 & 0xFFFF) # 3179252
  /* 14DD7C 8013220C AC4E0004 */        sw $t6, 4($v0)
  /* 14DD80 80132210 AC590000 */        sw $t9, ($v0)
  /* 14DD84 80132214 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DD88 80132218 3C18E700 */       lui $t8, 0xe700
  /* 14DD8C 8013221C 3C0EE200 */       lui $t6, (0xE200001C >> 16) # 3791650844
  /* 14DD90 80132220 244F0008 */     addiu $t7, $v0, 8
  /* 14DD94 80132224 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 14DD98 80132228 AC400004 */        sw $zero, 4($v0)
  /* 14DD9C 8013222C AC580000 */        sw $t8, ($v0)
  /* 14DDA0 80132230 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DDA4 80132234 3C0F0055 */       lui $t7, (0x552078 >> 16) # 5578872
  /* 14DDA8 80132238 35EF2078 */       ori $t7, $t7, (0x552078 & 0xFFFF) # 5578872
  /* 14DDAC 8013223C 24590008 */     addiu $t9, $v0, 8
  /* 14DDB0 80132240 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 14DDB4 80132244 35CE001C */       ori $t6, $t6, (0xE200001C & 0xFFFF) # 3791650844
  /* 14DDB8 80132248 AC4E0000 */        sw $t6, ($v0)
  /* 14DDBC 8013224C AC4F0004 */        sw $t7, 4($v0)
  /* 14DDC0 80132250 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14DDC4 80132254 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 14DDC8 80132258 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 14DDCC 8013225C 24580008 */     addiu $t8, $v0, 8
  /* 14DDD0 80132260 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14DDD4 80132264 AC400004 */        sw $zero, 4($v0)
  /* 14DDD8 80132268 0C0333AB */       jal func_ovl0_800CCEAC
  /* 14DDDC 8013226C AC590000 */        sw $t9, ($v0)
  /* 14DDE0 80132270 0C0333C0 */       jal func_ovl0_800CCF00
  /* 14DDE4 80132274 8FA40018 */        lw $a0, 0x18($sp)
  /* 14DDE8 80132278 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14DDEC 8013227C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 14DDF0 80132280 03E00008 */        jr $ra
  /* 14DDF4 80132284 00000000 */       nop 

glabel func_ovl30_80132288
  /* 14DDF8 80132288 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14DDFC 8013228C AFB00028 */        sw $s0, 0x28($sp)
  /* 14DE00 80132290 3C108000 */       lui $s0, %hi(D_NF_80000004)
  /* 14DE04 80132294 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14DE08 80132298 AFB40038 */        sw $s4, 0x38($sp)
  /* 14DE0C 8013229C AFB30034 */        sw $s3, 0x34($sp)
  /* 14DE10 801322A0 AFB20030 */        sw $s2, 0x30($sp)
  /* 14DE14 801322A4 AFB1002C */        sw $s1, 0x2c($sp)
  /* 14DE18 801322A8 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 14DE1C 801322AC 02003825 */        or $a3, $s0, $zero
  /* 14DE20 801322B0 00002025 */        or $a0, $zero, $zero
  /* 14DE24 801322B4 00002825 */        or $a1, $zero, $zero
  /* 14DE28 801322B8 0C00265A */       jal omMakeGObjCommon
  /* 14DE2C 801322BC 24060006 */     addiu $a2, $zero, 6
  /* 14DE30 801322C0 3C058013 */       lui $a1, %hi(func_ovl30_801320E0)
  /* 14DE34 801322C4 240EFFFF */     addiu $t6, $zero, -1
  /* 14DE38 801322C8 00409825 */        or $s3, $v0, $zero
  /* 14DE3C 801322CC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14DE40 801322D0 24A520E0 */     addiu $a1, $a1, %lo(func_ovl30_801320E0)
  /* 14DE44 801322D4 00402025 */        or $a0, $v0, $zero
  /* 14DE48 801322D8 24060004 */     addiu $a2, $zero, 4
  /* 14DE4C 801322DC 0C00277D */       jal func_80009DF4
  /* 14DE50 801322E0 02003825 */        or $a3, $s0, $zero
  /* 14DE54 801322E4 3C148013 */       lui $s4, %hi(D_ovl30_80134E10)
  /* 14DE58 801322E8 26944E10 */     addiu $s4, $s4, %lo(D_ovl30_80134E10)
  /* 14DE5C 801322EC 8E8F0008 */        lw $t7, 8($s4) # D_ovl30_80134E10 + 8
  /* 14DE60 801322F0 3C180000 */       lui $t8, %hi(D_NF_000026A0)
  /* 14DE64 801322F4 271826A0 */     addiu $t8, $t8, %lo(D_NF_000026A0)
  /* 14DE68 801322F8 02602025 */        or $a0, $s3, $zero
  /* 14DE6C 801322FC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DE70 80132300 01F82821 */      addu $a1, $t7, $t8
  /* 14DE74 80132304 94590024 */       lhu $t9, 0x24($v0)
  /* 14DE78 80132308 3C01432C */       lui $at, (0x432C0000 >> 16) # 172.0
  /* 14DE7C 8013230C 44812000 */      mtc1 $at, $f4 # 172.0 to cop1
  /* 14DE80 80132310 3C0142F4 */       lui $at, (0x42F40000 >> 16) # 122.0
  /* 14DE84 80132314 44813000 */      mtc1 $at, $f6 # 122.0 to cop1
  /* 14DE88 80132318 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 14DE8C 8013231C A4490024 */        sh $t1, 0x24($v0)
  /* 14DE90 80132320 352A0001 */       ori $t2, $t1, 1
  /* 14DE94 80132324 240B00AF */     addiu $t3, $zero, 0xaf
  /* 14DE98 80132328 240C00B1 */     addiu $t4, $zero, 0xb1
  /* 14DE9C 8013232C 240D00CC */     addiu $t5, $zero, 0xcc
  /* 14DEA0 80132330 A44A0024 */        sh $t2, 0x24($v0)
  /* 14DEA4 80132334 A0400060 */        sb $zero, 0x60($v0)
  /* 14DEA8 80132338 A0400061 */        sb $zero, 0x61($v0)
  /* 14DEAC 8013233C A0400062 */        sb $zero, 0x62($v0)
  /* 14DEB0 80132340 A04B0028 */        sb $t3, 0x28($v0)
  /* 14DEB4 80132344 A04C0029 */        sb $t4, 0x29($v0)
  /* 14DEB8 80132348 A04D002A */        sb $t5, 0x2a($v0)
  /* 14DEBC 8013234C E4440058 */      swc1 $f4, 0x58($v0)
  /* 14DEC0 80132350 E446005C */      swc1 $f6, 0x5c($v0)
  /* 14DEC4 80132354 8E8E0008 */        lw $t6, 8($s4) # D_ovl30_80134E10 + 8
  /* 14DEC8 80132358 3C0F0000 */       lui $t7, %hi(D_NF_00003FA8)
  /* 14DECC 8013235C 25EF3FA8 */     addiu $t7, $t7, %lo(D_NF_00003FA8)
  /* 14DED0 80132360 02602025 */        or $a0, $s3, $zero
  /* 14DED4 80132364 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DED8 80132368 01CF2821 */      addu $a1, $t6, $t7
  /* 14DEDC 8013236C 94580024 */       lhu $t8, 0x24($v0)
  /* 14DEE0 80132370 3C01433F */       lui $at, (0x433F0000 >> 16) # 191.0
  /* 14DEE4 80132374 4481A000 */      mtc1 $at, $f20 # 191.0 to cop1
  /* 14DEE8 80132378 3C01432E */       lui $at, (0x432E0000 >> 16) # 174.0
  /* 14DEEC 8013237C 44814000 */      mtc1 $at, $f8 # 174.0 to cop1
  /* 14DEF0 80132380 3308FFDF */      andi $t0, $t8, 0xffdf
  /* 14DEF4 80132384 A4480024 */        sh $t0, 0x24($v0)
  /* 14DEF8 80132388 35090001 */       ori $t1, $t0, 1
  /* 14DEFC 8013238C 3C110000 */       lui $s1, %hi(D_NF_00003D68)
  /* 14DF00 80132390 A4490024 */        sh $t1, 0x24($v0)
  /* 14DF04 80132394 26313D68 */     addiu $s1, $s1, %lo(D_NF_00003D68)
  /* 14DF08 80132398 241000BA */     addiu $s0, $zero, 0xba
  /* 14DF0C 8013239C 24120106 */     addiu $s2, $zero, 0x106
  /* 14DF10 801323A0 E454005C */      swc1 $f20, 0x5c($v0)
  /* 14DF14 801323A4 E4480058 */      swc1 $f8, 0x58($v0)
  .L801323A8:
  /* 14DF18 801323A8 8E8A0008 */        lw $t2, 8($s4) # D_ovl30_80134E10 + 8
  /* 14DF1C 801323AC 02602025 */        or $a0, $s3, $zero
  /* 14DF20 801323B0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DF24 801323B4 01512821 */      addu $a1, $t2, $s1
  /* 14DF28 801323B8 44905000 */      mtc1 $s0, $f10 # -0.0 to cop1
  /* 14DF2C 801323BC 26100004 */     addiu $s0, $s0, %lo(D_NF_80000004)
  /* 14DF30 801323C0 E454005C */      swc1 $f20, 0x5c($v0)
  /* 14DF34 801323C4 46805420 */   cvt.s.w $f16, $f10
  /* 14DF38 801323C8 1612FFF7 */       bne $s0, $s2, .L801323A8
  /* 14DF3C 801323CC E4500058 */      swc1 $f16, 0x58($v0)
  /* 14DF40 801323D0 8E8B0008 */        lw $t3, 8($s4) # D_ovl30_80134E10 + 8
  /* 14DF44 801323D4 3C0C0000 */       lui $t4, %hi(D_NF_00003C68)
  /* 14DF48 801323D8 258C3C68 */     addiu $t4, $t4, %lo(D_NF_00003C68)
  /* 14DF4C 801323DC 02602025 */        or $a0, $s3, $zero
  /* 14DF50 801323E0 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14DF54 801323E4 016C2821 */      addu $a1, $t3, $t4
  /* 14DF58 801323E8 944D0024 */       lhu $t5, 0x24($v0)
  /* 14DF5C 801323EC 3C014383 */       lui $at, (0x43830000 >> 16) # 262.0
  /* 14DF60 801323F0 44819000 */      mtc1 $at, $f18 # 262.0 to cop1
  /* 14DF64 801323F4 31AFFFDF */      andi $t7, $t5, 0xffdf
  /* 14DF68 801323F8 A44F0024 */        sh $t7, 0x24($v0)
  /* 14DF6C 801323FC 35F80001 */       ori $t8, $t7, 1
  /* 14DF70 80132400 A4580024 */        sh $t8, 0x24($v0)
  /* 14DF74 80132404 E454005C */      swc1 $f20, 0x5c($v0)
  /* 14DF78 80132408 E4520058 */      swc1 $f18, 0x58($v0)
  /* 14DF7C 8013240C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14DF80 80132410 8FB40038 */        lw $s4, 0x38($sp)
  /* 14DF84 80132414 8FB30034 */        lw $s3, 0x34($sp)
  /* 14DF88 80132418 8FB20030 */        lw $s2, 0x30($sp)
  /* 14DF8C 8013241C 8FB1002C */        lw $s1, 0x2c($sp)
  /* 14DF90 80132420 8FB00028 */        lw $s0, 0x28($sp)
  /* 14DF94 80132424 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 14DF98 80132428 03E00008 */        jr $ra
  /* 14DF9C 8013242C 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl30_80132430
  /* 14DFA0 80132430 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14DFA4 80132434 3C0E8013 */       lui $t6, %hi(D_ovl30_80134644)
  /* 14DFA8 80132438 27A30000 */     addiu $v1, $sp, 0
  /* 14DFAC 8013243C 25CE4644 */     addiu $t6, $t6, %lo(D_ovl30_80134644)
  /* 14DFB0 80132440 25C80024 */     addiu $t0, $t6, 0x24
  /* 14DFB4 80132444 0060C825 */        or $t9, $v1, $zero
  .L80132448:
  /* 14DFB8 80132448 8DD80000 */        lw $t8, ($t6) # D_ovl30_80134644 + 0
  /* 14DFBC 8013244C 25CE000C */     addiu $t6, $t6, 0xc
  /* 14DFC0 80132450 2739000C */     addiu $t9, $t9, 0xc
  /* 14DFC4 80132454 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14DFC8 80132458 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_80134644 + -8
  /* 14DFCC 8013245C AF2FFFF8 */        sw $t7, -8($t9)
  /* 14DFD0 80132460 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_80134644 + -4
  /* 14DFD4 80132464 15C8FFF8 */       bne $t6, $t0, .L80132448
  /* 14DFD8 80132468 AF38FFFC */        sw $t8, -4($t9)
  /* 14DFDC 8013246C 8DD80000 */        lw $t8, ($t6) # D_ovl30_80134644 + 0
  /* 14DFE0 80132470 24010009 */     addiu $at, $zero, 9
  /* 14DFE4 80132474 14810003 */       bne $a0, $at, .L80132484
  /* 14DFE8 80132478 AF380000 */        sw $t8, ($t9)
  /* 14DFEC 8013247C 10000004 */         b .L80132490
  /* 14DFF0 80132480 240200DE */     addiu $v0, $zero, 0xde
  .L80132484:
  /* 14DFF4 80132484 00044880 */       sll $t1, $a0, 2
  /* 14DFF8 80132488 00695021 */      addu $t2, $v1, $t1
  /* 14DFFC 8013248C 8D420000 */        lw $v0, ($t2)
  .L80132490:
  /* 14E000 80132490 03E00008 */        jr $ra
  /* 14E004 80132494 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_ovl30_80132498
  /* 14E008 80132498 28810009 */      slti $at, $a0, 9
  /* 14E00C 8013249C 14200005 */      bnez $at, .L801324B4
  /* 14E010 801324A0 240100DE */     addiu $at, $zero, 0xde
  /* 14E014 801324A4 5081001E */      beql $a0, $at, .L80132520
  /* 14E018 801324A8 24020009 */     addiu $v0, $zero, 9
  /* 14E01C 801324AC 03E00008 */        jr $ra
  /* 14E020 801324B0 00000000 */       nop 

  .L801324B4:
  /* 14E024 801324B4 2C810009 */     sltiu $at, $a0, 9
  /* 14E028 801324B8 10200019 */      beqz $at, .L80132520
  /* 14E02C 801324BC 00047080 */       sll $t6, $a0, 2
  /* 14E030 801324C0 3C018013 */       lui $at, %hi(D_ovl30_80134B98)
  /* 14E034 801324C4 002E0821 */      addu $at, $at, $t6
  /* 14E038 801324C8 8C2E4B98 */        lw $t6, %lo(D_ovl30_80134B98)($at)
  /* 14E03C 801324CC 01C00008 */        jr $t6
  /* 14E040 801324D0 00000000 */       nop 
  glabel jtgt_ovl30_801324D4
  /* 14E044 801324D4 03E00008 */        jr $ra
  /* 14E048 801324D8 00001025 */        or $v0, $zero, $zero

  glabel jtgt_ovl30_801324DC
  /* 14E04C 801324DC 03E00008 */        jr $ra
  /* 14E050 801324E0 24020001 */     addiu $v0, $zero, 1

  glabel jtgt_ovl30_801324E4
  /* 14E054 801324E4 03E00008 */        jr $ra
  /* 14E058 801324E8 24020002 */     addiu $v0, $zero, 2

  glabel jtgt_ovl30_801324EC
  /* 14E05C 801324EC 03E00008 */        jr $ra
  /* 14E060 801324F0 24020003 */     addiu $v0, $zero, 3

  glabel jtgt_ovl30_801324F4
  /* 14E064 801324F4 03E00008 */        jr $ra
  /* 14E068 801324F8 24020004 */     addiu $v0, $zero, 4

  glabel jtgt_ovl30_801324FC
  /* 14E06C 801324FC 03E00008 */        jr $ra
  /* 14E070 80132500 24020005 */     addiu $v0, $zero, 5

  glabel jtgt_ovl30_80132504
  /* 14E074 80132504 03E00008 */        jr $ra
  /* 14E078 80132508 24020006 */     addiu $v0, $zero, 6

  glabel jtgt_ovl30_8013250C
  /* 14E07C 8013250C 03E00008 */        jr $ra
  /* 14E080 80132510 24020007 */     addiu $v0, $zero, 7

  glabel jtgt_ovl30_80132514
  /* 14E084 80132514 03E00008 */        jr $ra
  /* 14E088 80132518 24020008 */     addiu $v0, $zero, 8

  /* 14E08C 8013251C 24020009 */     addiu $v0, $zero, 9
  .L80132520:
  /* 14E090 80132520 03E00008 */        jr $ra
  /* 14E094 80132524 00000000 */       nop 

glabel func_ovl30_80132528
  /* 14E098 80132528 27BDFF70 */     addiu $sp, $sp, -0x90
  /* 14E09C 8013252C AFB70048 */        sw $s7, 0x48($sp)
  /* 14E0A0 80132530 3C0E8013 */       lui $t6, %hi(D_ovl30_8013466C)
  /* 14E0A4 80132534 27B70060 */     addiu $s7, $sp, 0x60
  /* 14E0A8 80132538 AFB0002C */        sw $s0, 0x2c($sp)
  /* 14E0AC 8013253C 25CE466C */     addiu $t6, $t6, %lo(D_ovl30_8013466C)
  /* 14E0B0 80132540 3C108000 */       lui $s0, %hi(D_NF_80000001)
  /* 14E0B4 80132544 AFBF004C */        sw $ra, 0x4c($sp)
  /* 14E0B8 80132548 AFB60044 */        sw $s6, 0x44($sp)
  /* 14E0BC 8013254C AFB50040 */        sw $s5, 0x40($sp)
  /* 14E0C0 80132550 AFB4003C */        sw $s4, 0x3c($sp)
  /* 14E0C4 80132554 AFB30038 */        sw $s3, 0x38($sp)
  /* 14E0C8 80132558 AFB20034 */        sw $s2, 0x34($sp)
  /* 14E0CC 8013255C AFB10030 */        sw $s1, 0x30($sp)
  /* 14E0D0 80132560 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 14E0D4 80132564 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 14E0D8 80132568 25C80024 */     addiu $t0, $t6, 0x24
  /* 14E0DC 8013256C 02E0C825 */        or $t9, $s7, $zero
  .L80132570:
  /* 14E0E0 80132570 8DD80000 */        lw $t8, ($t6) # D_ovl30_8013466C + 0
  /* 14E0E4 80132574 25CE000C */     addiu $t6, $t6, 0xc
  /* 14E0E8 80132578 2739000C */     addiu $t9, $t9, 0xc
  /* 14E0EC 8013257C AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14E0F0 80132580 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_8013466C + -8
  /* 14E0F4 80132584 AF2FFFF8 */        sw $t7, -8($t9)
  /* 14E0F8 80132588 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_8013466C + -4
  /* 14E0FC 8013258C 15C8FFF8 */       bne $t6, $t0, .L80132570
  /* 14E100 80132590 AF38FFFC */        sw $t8, -4($t9)
  /* 14E104 80132594 8DD80000 */        lw $t8, ($t6) # D_ovl30_8013466C + 0
  /* 14E108 80132598 00002025 */        or $a0, $zero, $zero
  /* 14E10C 8013259C 00002825 */        or $a1, $zero, $zero
  /* 14E110 801325A0 24060003 */     addiu $a2, $zero, 3
  /* 14E114 801325A4 02003825 */        or $a3, $s0, $zero
  /* 14E118 801325A8 0C00265A */       jal omMakeGObjCommon
  /* 14E11C 801325AC AF380000 */        sw $t8, ($t9)
  /* 14E120 801325B0 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 14E124 801325B4 2409FFFF */     addiu $t1, $zero, -1
  /* 14E128 801325B8 00409825 */        or $s3, $v0, $zero
  /* 14E12C 801325BC AFA90010 */        sw $t1, 0x10($sp)
  /* 14E130 801325C0 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 14E134 801325C4 00402025 */        or $a0, $v0, $zero
  /* 14E138 801325C8 24060001 */     addiu $a2, $zero, 1
  /* 14E13C 801325CC 0C00277D */       jal func_80009DF4
  /* 14E140 801325D0 02003825 */        or $a3, $s0, $zero
  /* 14E144 801325D4 3C014288 */       lui $at, (0x42880000 >> 16) # 68.0
  /* 14E148 801325D8 4481B000 */      mtc1 $at, $f22 # 68.0 to cop1
  /* 14E14C 801325DC 3C0141F0 */       lui $at, (0x41F00000 >> 16) # 30.0
  /* 14E150 801325E0 3C150001 */       lui $s5, %hi(D_NF_0000CB10)
  /* 14E154 801325E4 3C128013 */       lui $s2, %hi(D_ovl30_80134E10)
  /* 14E158 801325E8 4481A000 */      mtc1 $at, $f20 # 30.0 to cop1
  /* 14E15C 801325EC 26524E10 */     addiu $s2, $s2, %lo(D_ovl30_80134E10)
  /* 14E160 801325F0 26B5CB10 */     addiu $s5, $s5, %lo(D_NF_0000CB10)
  /* 14E164 801325F4 00008025 */        or $s0, $zero, $zero
  /* 14E168 801325F8 2416000A */     addiu $s6, $zero, 0xa
  /* 14E16C 801325FC 24140009 */     addiu $s4, $zero, 9
  .L80132600:
  /* 14E170 80132600 0C04C90C */       jal func_ovl30_80132430
  /* 14E174 80132604 02002025 */        or $a0, $s0, $zero
  /* 14E178 80132608 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14E17C 8013260C 00402025 */        or $a0, $v0, $zero
  /* 14E180 80132610 14400022 */      bnez $v0, .L8013269C
  /* 14E184 80132614 00108880 */       sll $s1, $s0, 2
  /* 14E188 80132618 02308823 */      subu $s1, $s1, $s0
  /* 14E18C 8013261C 001188C0 */       sll $s1, $s1, 3
  /* 14E190 80132620 02308821 */      addu $s1, $s1, $s0
  /* 14E194 80132624 16140007 */       bne $s0, $s4, .L80132644
  /* 14E198 80132628 00118840 */       sll $s1, $s1, 1
  /* 14E19C 8013262C 8E4A0008 */        lw $t2, 8($s2) # D_ovl30_80134E10 + 8
  /* 14E1A0 80132630 02602025 */        or $a0, $s3, $zero
  /* 14E1A4 80132634 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E1A8 80132638 01552821 */      addu $a1, $t2, $s5
  /* 14E1AC 8013263C 1000000B */         b .L8013266C
  /* 14E1B0 80132640 2A010005 */      slti $at, $s0, 5
  .L80132644:
  /* 14E1B4 80132644 0C04C90C */       jal func_ovl30_80132430
  /* 14E1B8 80132648 02002025 */        or $a0, $s0, $zero
  /* 14E1BC 8013264C 00025880 */       sll $t3, $v0, 2
  /* 14E1C0 80132650 02EB6021 */      addu $t4, $s7, $t3
  /* 14E1C4 80132654 8D8D0000 */        lw $t5, ($t4)
  /* 14E1C8 80132658 8E480008 */        lw $t0, 8($s2) # D_ovl30_80134E10 + 8
  /* 14E1CC 8013265C 02602025 */        or $a0, $s3, $zero
  /* 14E1D0 80132660 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E1D4 80132664 01A82821 */      addu $a1, $t5, $t0
  /* 14E1D8 80132668 2A010005 */      slti $at, $s0, 5
  .L8013266C:
  /* 14E1DC 8013266C 10200007 */      beqz $at, .L8013268C
  /* 14E1E0 80132670 2639FF24 */     addiu $t9, $s1, -0xdc
  /* 14E1E4 80132674 262E001E */     addiu $t6, $s1, 0x1e
  /* 14E1E8 80132678 448E2000 */      mtc1 $t6, $f4
  /* 14E1EC 8013267C E454005C */      swc1 $f20, 0x5c($v0)
  /* 14E1F0 80132680 468021A0 */   cvt.s.w $f6, $f4
  /* 14E1F4 80132684 10000005 */         b .L8013269C
  /* 14E1F8 80132688 E4460058 */      swc1 $f6, 0x58($v0)
  .L8013268C:
  /* 14E1FC 8013268C 44994000 */      mtc1 $t9, $f8
  /* 14E200 80132690 E456005C */      swc1 $f22, 0x5c($v0)
  /* 14E204 80132694 468042A0 */   cvt.s.w $f10, $f8
  /* 14E208 80132698 E44A0058 */      swc1 $f10, 0x58($v0)
  .L8013269C:
  /* 14E20C 8013269C 26100001 */     addiu $s0, $s0, %lo(D_NF_80000001)
  /* 14E210 801326A0 1616FFD7 */       bne $s0, $s6, .L80132600
  /* 14E214 801326A4 00000000 */       nop 
  /* 14E218 801326A8 8FBF004C */        lw $ra, 0x4c($sp)
  /* 14E21C 801326AC D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 14E220 801326B0 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 14E224 801326B4 8FB0002C */        lw $s0, 0x2c($sp)
  /* 14E228 801326B8 8FB10030 */        lw $s1, 0x30($sp)
  /* 14E22C 801326BC 8FB20034 */        lw $s2, 0x34($sp)
  /* 14E230 801326C0 8FB30038 */        lw $s3, 0x38($sp)
  /* 14E234 801326C4 8FB4003C */        lw $s4, 0x3c($sp)
  /* 14E238 801326C8 8FB50040 */        lw $s5, 0x40($sp)
  /* 14E23C 801326CC 8FB60044 */        lw $s6, 0x44($sp)
  /* 14E240 801326D0 8FB70048 */        lw $s7, 0x48($sp)
  /* 14E244 801326D4 03E00008 */        jr $ra
  /* 14E248 801326D8 27BD0090 */     addiu $sp, $sp, 0x90

glabel func_ovl30_801326DC
  /* 14E24C 801326DC 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 14E250 801326E0 3C0F8013 */       lui $t7, %hi(D_ovl30_80134694)
  /* 14E254 801326E4 25EF4694 */     addiu $t7, $t7, %lo(D_ovl30_80134694)
  /* 14E258 801326E8 AFA5004C */        sw $a1, 0x4c($sp)
  /* 14E25C 801326EC 25E80048 */     addiu $t0, $t7, 0x48
  /* 14E260 801326F0 27AE0000 */     addiu $t6, $sp, 0
  .L801326F4:
  /* 14E264 801326F4 8DF90000 */        lw $t9, ($t7) # D_ovl30_80134694 + 0
  /* 14E268 801326F8 25EF000C */     addiu $t7, $t7, 0xc
  /* 14E26C 801326FC 25CE000C */     addiu $t6, $t6, 0xc
  /* 14E270 80132700 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 14E274 80132704 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl30_80134694 + -8
  /* 14E278 80132708 ADD8FFF8 */        sw $t8, -8($t6)
  /* 14E27C 8013270C 8DF9FFFC */        lw $t9, -4($t7) # D_ovl30_80134694 + -4
  /* 14E280 80132710 15E8FFF8 */       bne $t7, $t0, .L801326F4
  /* 14E284 80132714 ADD9FFFC */        sw $t9, -4($t6)
  /* 14E288 80132718 3C014337 */       lui $at, (0x43370000 >> 16) # 183.0
  /* 14E28C 8013271C 44812000 */      mtc1 $at, $f4 # 183.0 to cop1
  /* 14E290 80132720 3C014344 */       lui $at, (0x43440000 >> 16) # 196.0
  /* 14E294 80132724 44813000 */      mtc1 $at, $f6 # 196.0 to cop1
  /* 14E298 80132728 27BD0048 */     addiu $sp, $sp, 0x48
  /* 14E29C 8013272C E4840058 */      swc1 $f4, 0x58($a0)
  /* 14E2A0 80132730 03E00008 */        jr $ra
  /* 14E2A4 80132734 E486005C */      swc1 $f6, 0x5c($a0)

glabel func_ovl30_80132738
  /* 14E2A8 80132738 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14E2AC 8013273C 3C0E8013 */       lui $t6, %hi(D_ovl30_801346DC)
  /* 14E2B0 80132740 27A20018 */     addiu $v0, $sp, 0x18
  /* 14E2B4 80132744 25CE46DC */     addiu $t6, $t6, %lo(D_ovl30_801346DC)
  /* 14E2B8 80132748 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14E2BC 8013274C AFA50044 */        sw $a1, 0x44($sp)
  /* 14E2C0 80132750 25C80024 */     addiu $t0, $t6, 0x24
  /* 14E2C4 80132754 0040C825 */        or $t9, $v0, $zero
  .L80132758:
  /* 14E2C8 80132758 8DD80000 */        lw $t8, ($t6) # D_ovl30_801346DC + 0
  /* 14E2CC 8013275C 25CE000C */     addiu $t6, $t6, 0xc
  /* 14E2D0 80132760 2739000C */     addiu $t9, $t9, 0xc
  /* 14E2D4 80132764 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14E2D8 80132768 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_801346DC + -8
  /* 14E2DC 8013276C AF2FFFF8 */        sw $t7, -8($t9)
  /* 14E2E0 80132770 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_801346DC + -4
  /* 14E2E4 80132774 15C8FFF8 */       bne $t6, $t0, .L80132758
  /* 14E2E8 80132778 AF38FFFC */        sw $t8, -4($t9)
  /* 14E2EC 8013277C 8FA90044 */        lw $t1, 0x44($sp)
  /* 14E2F0 80132780 3C0D8013 */       lui $t5, %hi(D_ovl30_80134E18)
  /* 14E2F4 80132784 8DAD4E18 */        lw $t5, %lo(D_ovl30_80134E18)($t5)
  /* 14E2F8 80132788 00095080 */       sll $t2, $t1, 2
  /* 14E2FC 8013278C 004A5821 */      addu $t3, $v0, $t2
  /* 14E300 80132790 8D6C0000 */        lw $t4, ($t3)
  /* 14E304 80132794 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E308 80132798 018D2821 */      addu $a1, $t4, $t5
  /* 14E30C 8013279C 00402025 */        or $a0, $v0, $zero
  /* 14E310 801327A0 8FA50044 */        lw $a1, 0x44($sp)
  /* 14E314 801327A4 0C04C9B7 */       jal func_ovl30_801326DC
  /* 14E318 801327A8 AFA2003C */        sw $v0, 0x3c($sp)
  /* 14E31C 801327AC 8FA3003C */        lw $v1, 0x3c($sp)
  /* 14E320 801327B0 94680024 */       lhu $t0, 0x24($v1)
  /* 14E324 801327B4 A0600028 */        sb $zero, 0x28($v1)
  /* 14E328 801327B8 A0600029 */        sb $zero, 0x29($v1)
  /* 14E32C 801327BC 3119FFDF */      andi $t9, $t0, 0xffdf
  /* 14E330 801327C0 372F0001 */       ori $t7, $t9, 1
  /* 14E334 801327C4 A4790024 */        sh $t9, 0x24($v1)
  /* 14E338 801327C8 A46F0024 */        sh $t7, 0x24($v1)
  /* 14E33C 801327CC A060002A */        sb $zero, 0x2a($v1)
  /* 14E340 801327D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14E344 801327D4 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14E348 801327D8 03E00008 */        jr $ra
  /* 14E34C 801327DC 00000000 */       nop 

  /* 14E350 801327E0 03E00008 */        jr $ra
  /* 14E354 801327E4 00000000 */       nop 

  /* 14E358 801327E8 03E00008 */        jr $ra
  /* 14E35C 801327EC 00000000 */       nop 

glabel func_ovl30_801327F0
  /* 14E360 801327F0 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 14E364 801327F4 3C0E8013 */       lui $t6, %hi(D_ovl30_801347E4)
  /* 14E368 801327F8 27A30000 */     addiu $v1, $sp, 0
  /* 14E36C 801327FC 25CE47E4 */     addiu $t6, $t6, %lo(D_ovl30_801347E4)
  /* 14E370 80132800 25C80048 */     addiu $t0, $t6, 0x48
  /* 14E374 80132804 0060C825 */        or $t9, $v1, $zero
  .L80132808:
  /* 14E378 80132808 8DD80000 */        lw $t8, ($t6) # D_ovl30_801347E4 + 0
  /* 14E37C 8013280C 25CE000C */     addiu $t6, $t6, 0xc
  /* 14E380 80132810 2739000C */     addiu $t9, $t9, 0xc
  /* 14E384 80132814 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14E388 80132818 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_801347E4 + -8
  /* 14E38C 8013281C AF2FFFF8 */        sw $t7, -8($t9)
  /* 14E390 80132820 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_801347E4 + -4
  /* 14E394 80132824 15C8FFF8 */       bne $t6, $t0, .L80132808
  /* 14E398 80132828 AF38FFFC */        sw $t8, -4($t9)
  /* 14E39C 8013282C 8DD80000 */        lw $t8, ($t6) # D_ovl30_801347E4 + 0
  /* 14E3A0 80132830 240100DE */     addiu $at, $zero, 0xde
  /* 14E3A4 80132834 000558C0 */       sll $t3, $a1, 3
  /* 14E3A8 80132838 AF380000 */        sw $t8, ($t9)
  /* 14E3AC 8013283C 8DCF0004 */        lw $t7, 4($t6) # D_ovl30_801347E4 + 4
  /* 14E3B0 80132840 006B1021 */      addu $v0, $v1, $t3
  /* 14E3B4 80132844 14A1000A */       bne $a1, $at, .L80132870
  /* 14E3B8 80132848 AF2F0004 */        sw $t7, 4($t9)
  /* 14E3BC 8013284C 3C01435F */       lui $at, (0x435F0000 >> 16) # 223.0
  /* 14E3C0 80132850 44812000 */      mtc1 $at, $f4 # 223.0 to cop1
  /* 14E3C4 80132854 8C890074 */        lw $t1, 0x74($a0)
  /* 14E3C8 80132858 3C014310 */       lui $at, (0x43100000 >> 16) # 144.0
  /* 14E3CC 8013285C 44813000 */      mtc1 $at, $f6 # 144.0 to cop1
  /* 14E3D0 80132860 E5240058 */      swc1 $f4, 0x58($t1)
  /* 14E3D4 80132864 8C8A0074 */        lw $t2, 0x74($a0)
  /* 14E3D8 80132868 1000000D */         b .L801328A0
  /* 14E3DC 8013286C E546005C */      swc1 $f6, 0x5c($t2)
  .L80132870:
  /* 14E3E0 80132870 3C01433D */       lui $at, (0x433D0000 >> 16) # 189.0
  /* 14E3E4 80132874 44815000 */      mtc1 $at, $f10 # 189.0 to cop1
  /* 14E3E8 80132878 C4480000 */      lwc1 $f8, ($v0)
  /* 14E3EC 8013287C 8C8C0074 */        lw $t4, 0x74($a0)
  /* 14E3F0 80132880 3C0142F8 */       lui $at, (0x42F80000 >> 16) # 124.0
  /* 14E3F4 80132884 460A4400 */     add.s $f16, $f8, $f10
  /* 14E3F8 80132888 44812000 */      mtc1 $at, $f4 # 124.0 to cop1
  /* 14E3FC 8013288C E5900058 */      swc1 $f16, 0x58($t4)
  /* 14E400 80132890 C4520004 */      lwc1 $f18, 4($v0)
  /* 14E404 80132894 8C8D0074 */        lw $t5, 0x74($a0)
  /* 14E408 80132898 46049180 */     add.s $f6, $f18, $f4
  /* 14E40C 8013289C E5A6005C */      swc1 $f6, 0x5c($t5)
  .L801328A0:
  /* 14E410 801328A0 03E00008 */        jr $ra
  /* 14E414 801328A4 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl30_801328A8
  /* 14E418 801328A8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14E41C 801328AC 3C0E8013 */       lui $t6, %hi(D_ovl30_80134834)
  /* 14E420 801328B0 27A20018 */     addiu $v0, $sp, 0x18
  /* 14E424 801328B4 25CE4834 */     addiu $t6, $t6, %lo(D_ovl30_80134834)
  /* 14E428 801328B8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14E42C 801328BC AFA40040 */        sw $a0, 0x40($sp)
  /* 14E430 801328C0 AFA50044 */        sw $a1, 0x44($sp)
  /* 14E434 801328C4 25C80024 */     addiu $t0, $t6, 0x24
  /* 14E438 801328C8 0040C825 */        or $t9, $v0, $zero
  .L801328CC:
  /* 14E43C 801328CC 8DD80000 */        lw $t8, ($t6) # D_ovl30_80134834 + 0
  /* 14E440 801328D0 25CE000C */     addiu $t6, $t6, 0xc
  /* 14E444 801328D4 2739000C */     addiu $t9, $t9, 0xc
  /* 14E448 801328D8 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14E44C 801328DC 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_80134834 + -8
  /* 14E450 801328E0 AF2FFFF8 */        sw $t7, -8($t9)
  /* 14E454 801328E4 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_80134834 + -4
  /* 14E458 801328E8 15C8FFF8 */       bne $t6, $t0, .L801328CC
  /* 14E45C 801328EC AF38FFFC */        sw $t8, -4($t9)
  /* 14E460 801328F0 8FA90044 */        lw $t1, 0x44($sp)
  /* 14E464 801328F4 240100DE */     addiu $at, $zero, 0xde
  /* 14E468 801328F8 8FB80044 */        lw $t8, 0x44($sp)
  /* 14E46C 801328FC 15210013 */       bne $t1, $at, .L8013294C
  /* 14E470 80132900 3C0C8013 */       lui $t4, 0x8013
  /* 14E474 80132904 3C0A8013 */       lui $t2, %hi(D_ovl30_80134E18)
  /* 14E478 80132908 8D4A4E18 */        lw $t2, %lo(D_ovl30_80134E18)($t2)
  /* 14E47C 8013290C 3C0B0000 */       lui $t3, %hi(D_NF_00001DD8)
  /* 14E480 80132910 256B1DD8 */     addiu $t3, $t3, %lo(D_NF_00001DD8)
  /* 14E484 80132914 8FA40040 */        lw $a0, 0x40($sp)
  /* 14E488 80132918 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E48C 8013291C 014B2821 */      addu $a1, $t2, $t3
  /* 14E490 80132920 944C0024 */       lhu $t4, 0x24($v0)
  /* 14E494 80132924 2419005C */     addiu $t9, $zero, 0x5c
  /* 14E498 80132928 240F0022 */     addiu $t7, $zero, 0x22
  /* 14E49C 8013292C 3188FFDF */      andi $t0, $t4, 0xffdf
  /* 14E4A0 80132930 A4480024 */        sh $t0, 0x24($v0)
  /* 14E4A4 80132934 350E0001 */       ori $t6, $t0, 1
  /* 14E4A8 80132938 A44E0024 */        sh $t6, 0x24($v0)
  /* 14E4AC 8013293C A0590028 */        sb $t9, 0x28($v0)
  /* 14E4B0 80132940 A04F0029 */        sb $t7, 0x29($v0)
  /* 14E4B4 80132944 10000012 */         b .L80132990
  /* 14E4B8 80132948 A040002A */        sb $zero, 0x2a($v0)
  .L8013294C:
  /* 14E4BC 8013294C 00184880 */       sll $t1, $t8, 2
  /* 14E4C0 80132950 00495021 */      addu $t2, $v0, $t1
  /* 14E4C4 80132954 8D4B0000 */        lw $t3, ($t2)
  /* 14E4C8 80132958 8D8C4E10 */        lw $t4, 0x4e10($t4)
  /* 14E4CC 8013295C 8FA40040 */        lw $a0, 0x40($sp)
  /* 14E4D0 80132960 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E4D4 80132964 016C2821 */      addu $a1, $t3, $t4
  /* 14E4D8 80132968 944D0024 */       lhu $t5, 0x24($v0)
  /* 14E4DC 8013296C 240F005C */     addiu $t7, $zero, 0x5c
  /* 14E4E0 80132970 24180022 */     addiu $t8, $zero, 0x22
  /* 14E4E4 80132974 31AEFFDF */      andi $t6, $t5, 0xffdf
  /* 14E4E8 80132978 A44E0024 */        sh $t6, 0x24($v0)
  /* 14E4EC 8013297C 35D90001 */       ori $t9, $t6, 1
  /* 14E4F0 80132980 A4590024 */        sh $t9, 0x24($v0)
  /* 14E4F4 80132984 A04F0028 */        sb $t7, 0x28($v0)
  /* 14E4F8 80132988 A0580029 */        sb $t8, 0x29($v0)
  /* 14E4FC 8013298C A040002A */        sb $zero, 0x2a($v0)
  .L80132990:
  /* 14E500 80132990 8FA40040 */        lw $a0, 0x40($sp)
  /* 14E504 80132994 0C04C9FC */       jal func_ovl30_801327F0
  /* 14E508 80132998 8FA50044 */        lw $a1, 0x44($sp)
  /* 14E50C 8013299C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14E510 801329A0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14E514 801329A4 03E00008 */        jr $ra
  /* 14E518 801329A8 00000000 */       nop 

glabel func_ovl30_801329AC
  /* 14E51C 801329AC 3C058013 */       lui $a1, %hi(D_ovl30_80134BE0)
  /* 14E520 801329B0 8CA54BE0 */        lw $a1, %lo(D_ovl30_80134BE0)($a1)
  /* 14E524 801329B4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 14E528 801329B8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14E52C 801329BC 10A00003 */      beqz $a1, .L801329CC
  /* 14E530 801329C0 AFA40020 */        sw $a0, 0x20($sp)
  /* 14E534 801329C4 0C0026A1 */       jal omEjectGObjCommon
  /* 14E538 801329C8 00A02025 */        or $a0, $a1, $zero
  .L801329CC:
  /* 14E53C 801329CC 00002025 */        or $a0, $zero, $zero
  /* 14E540 801329D0 00002825 */        or $a1, $zero, $zero
  /* 14E544 801329D4 24060004 */     addiu $a2, $zero, 4
  /* 14E548 801329D8 0C00265A */       jal omMakeGObjCommon
  /* 14E54C 801329DC 3C078000 */       lui $a3, 0x8000
  /* 14E550 801329E0 3C018013 */       lui $at, %hi(D_ovl30_80134BE0)
  /* 14E554 801329E4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 14E558 801329E8 240EFFFF */     addiu $t6, $zero, -1
  /* 14E55C 801329EC AC224BE0 */        sw $v0, %lo(D_ovl30_80134BE0)($at)
  /* 14E560 801329F0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 14E564 801329F4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 14E568 801329F8 00402025 */        or $a0, $v0, $zero
  /* 14E56C 801329FC 24060002 */     addiu $a2, $zero, 2
  /* 14E570 80132A00 0C00277D */       jal func_80009DF4
  /* 14E574 80132A04 3C078000 */       lui $a3, 0x8000
  /* 14E578 80132A08 0C04C90C */       jal func_ovl30_80132430
  /* 14E57C 80132A0C 8FA40020 */        lw $a0, 0x20($sp)
  /* 14E580 80132A10 3C048013 */       lui $a0, %hi(D_ovl30_80134BE0)
  /* 14E584 80132A14 8C844BE0 */        lw $a0, %lo(D_ovl30_80134BE0)($a0)
  /* 14E588 80132A18 0C04CA2A */       jal func_ovl30_801328A8
  /* 14E58C 80132A1C 00402825 */        or $a1, $v0, $zero
  /* 14E590 80132A20 8FAF0020 */        lw $t7, 0x20($sp)
  /* 14E594 80132A24 24010009 */     addiu $at, $zero, 9
  /* 14E598 80132A28 51E10008 */      beql $t7, $at, .L80132A4C
  /* 14E59C 80132A2C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14E5A0 80132A30 0C04C90C */       jal func_ovl30_80132430
  /* 14E5A4 80132A34 01E02025 */        or $a0, $t7, $zero
  /* 14E5A8 80132A38 3C048013 */       lui $a0, %hi(D_ovl30_80134BE0)
  /* 14E5AC 80132A3C 8C844BE0 */        lw $a0, %lo(D_ovl30_80134BE0)($a0)
  /* 14E5B0 80132A40 0C04C9CE */       jal func_ovl30_80132738
  /* 14E5B4 80132A44 00402825 */        or $a1, $v0, $zero
  /* 14E5B8 80132A48 8FBF001C */        lw $ra, 0x1c($sp)
  .L80132A4C:
  /* 14E5BC 80132A4C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 14E5C0 80132A50 03E00008 */        jr $ra
  /* 14E5C4 80132A54 00000000 */       nop 

glabel func_ovl30_80132A58
  /* 14E5C8 80132A58 28A10005 */      slti $at, $a1, 5
  /* 14E5CC 80132A5C 10200010 */      beqz $at, .L80132AA0
  /* 14E5D0 80132A60 00054080 */       sll $t0, $a1, 2
  /* 14E5D4 80132A64 00057080 */       sll $t6, $a1, 2
  /* 14E5D8 80132A68 01C57023 */      subu $t6, $t6, $a1
  /* 14E5DC 80132A6C 000E70C0 */       sll $t6, $t6, 3
  /* 14E5E0 80132A70 01C57021 */      addu $t6, $t6, $a1
  /* 14E5E4 80132A74 000E7040 */       sll $t6, $t6, 1
  /* 14E5E8 80132A78 25CF0017 */     addiu $t7, $t6, 0x17
  /* 14E5EC 80132A7C 448F2000 */      mtc1 $t7, $f4
  /* 14E5F0 80132A80 8C980074 */        lw $t8, 0x74($a0)
  /* 14E5F4 80132A84 3C0141B8 */       lui $at, (0x41B80000 >> 16) # 23.0
  /* 14E5F8 80132A88 468021A0 */   cvt.s.w $f6, $f4
  /* 14E5FC 80132A8C 44814000 */      mtc1 $at, $f8 # 23.0 to cop1
  /* 14E600 80132A90 E7060058 */      swc1 $f6, 0x58($t8)
  /* 14E604 80132A94 8C990074 */        lw $t9, 0x74($a0)
  /* 14E608 80132A98 03E00008 */        jr $ra
  /* 14E60C 80132A9C E728005C */      swc1 $f8, 0x5c($t9)

  .L80132AA0:
  /* 14E610 80132AA0 01054023 */      subu $t0, $t0, $a1
  /* 14E614 80132AA4 000840C0 */       sll $t0, $t0, 3
  /* 14E618 80132AA8 01054021 */      addu $t0, $t0, $a1
  /* 14E61C 80132AAC 00084040 */       sll $t0, $t0, 1
  /* 14E620 80132AB0 2509FF1D */     addiu $t1, $t0, -0xe3
  /* 14E624 80132AB4 44895000 */      mtc1 $t1, $f10
  /* 14E628 80132AB8 8C8A0074 */        lw $t2, 0x74($a0)
  /* 14E62C 80132ABC 3C014274 */       lui $at, (0x42740000 >> 16) # 61.0
  /* 14E630 80132AC0 46805420 */   cvt.s.w $f16, $f10
  /* 14E634 80132AC4 44819000 */      mtc1 $at, $f18 # 61.0 to cop1
  /* 14E638 80132AC8 E5500058 */      swc1 $f16, 0x58($t2)
  /* 14E63C 80132ACC 8C8B0074 */        lw $t3, 0x74($a0)
  /* 14E640 80132AD0 E572005C */      swc1 $f18, 0x5c($t3)
  /* 14E644 80132AD4 03E00008 */        jr $ra
  /* 14E648 80132AD8 00000000 */       nop 

glabel func_ovl30_80132ADC
  /* 14E64C 80132ADC 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14E650 80132AE0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14E654 80132AE4 00002025 */        or $a0, $zero, $zero
  /* 14E658 80132AE8 00002825 */        or $a1, $zero, $zero
  /* 14E65C 80132AEC 24060007 */     addiu $a2, $zero, 7
  /* 14E660 80132AF0 0C00265A */       jal omMakeGObjCommon
  /* 14E664 80132AF4 3C078000 */       lui $a3, 0x8000
  /* 14E668 80132AF8 3C018013 */       lui $at, %hi(D_ovl30_80134BDC)
  /* 14E66C 80132AFC 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 14E670 80132B00 240EFFFF */     addiu $t6, $zero, -1
  /* 14E674 80132B04 AC224BDC */        sw $v0, %lo(D_ovl30_80134BDC)($at)
  /* 14E678 80132B08 AFA20024 */        sw $v0, 0x24($sp)
  /* 14E67C 80132B0C AFAE0010 */        sw $t6, 0x10($sp)
  /* 14E680 80132B10 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 14E684 80132B14 00402025 */        or $a0, $v0, $zero
  /* 14E688 80132B18 24060005 */     addiu $a2, $zero, 5
  /* 14E68C 80132B1C 0C00277D */       jal func_80009DF4
  /* 14E690 80132B20 3C078000 */       lui $a3, 0x8000
  /* 14E694 80132B24 3C0F8013 */       lui $t7, %hi(D_ovl30_80134E18)
  /* 14E698 80132B28 8DEF4E18 */        lw $t7, %lo(D_ovl30_80134E18)($t7)
  /* 14E69C 80132B2C 3C180000 */       lui $t8, %hi(D_NF_00001AB8)
  /* 14E6A0 80132B30 27181AB8 */     addiu $t8, $t8, %lo(D_NF_00001AB8)
  /* 14E6A4 80132B34 8FA40024 */        lw $a0, 0x24($sp)
  /* 14E6A8 80132B38 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E6AC 80132B3C 01F82821 */      addu $a1, $t7, $t8
  /* 14E6B0 80132B40 94590024 */       lhu $t9, 0x24($v0)
  /* 14E6B4 80132B44 240B00FF */     addiu $t3, $zero, 0xff
  /* 14E6B8 80132B48 A04B0028 */        sb $t3, 0x28($v0)
  /* 14E6BC 80132B4C 3329FFDF */      andi $t1, $t9, 0xffdf
  /* 14E6C0 80132B50 A4490024 */        sh $t1, 0x24($v0)
  /* 14E6C4 80132B54 352A0001 */       ori $t2, $t1, 1
  /* 14E6C8 80132B58 A44A0024 */        sh $t2, 0x24($v0)
  /* 14E6CC 80132B5C A0400029 */        sb $zero, 0x29($v0)
  /* 14E6D0 80132B60 A040002A */        sb $zero, 0x2a($v0)
  /* 14E6D4 80132B64 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14E6D8 80132B68 8CA54BD8 */        lw $a1, %lo(D_ovl30_80134BD8)($a1)
  /* 14E6DC 80132B6C 0C04CA96 */       jal func_ovl30_80132A58
  /* 14E6E0 80132B70 8FA40024 */        lw $a0, 0x24($sp)
  /* 14E6E4 80132B74 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14E6E8 80132B78 27BD0028 */     addiu $sp, $sp, 0x28
  /* 14E6EC 80132B7C 03E00008 */        jr $ra
  /* 14E6F0 80132B80 00000000 */       nop 

glabel func_ovl30_80132B84
  /* 14E6F4 80132B84 3C0F8013 */       lui $t7, %hi(D_ovl30_801344E4)
  /* 14E6F8 80132B88 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 14E6FC 80132B8C 25EF44E4 */     addiu $t7, $t7, %lo(D_ovl30_801344E4)
  /* 14E700 80132B90 000470C0 */       sll $t6, $a0, 3
  /* 14E704 80132B94 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14E708 80132B98 01CF1821 */      addu $v1, $t6, $t7
  /* 14E70C 80132B9C 8C640000 */        lw $a0, ($v1)
  /* 14E710 80132BA0 0C033776 */       jal rldm_get_file_external_force
  /* 14E714 80132BA4 AFA30018 */        sw $v1, 0x18($sp)
  /* 14E718 80132BA8 8FA30018 */        lw $v1, 0x18($sp)
  /* 14E71C 80132BAC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14E720 80132BB0 3C018013 */       lui $at, %hi(D_ovl30_80134C10)
  /* 14E724 80132BB4 8C780004 */        lw $t8, 4($v1)
  /* 14E728 80132BB8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 14E72C 80132BBC 0302C821 */      addu $t9, $t8, $v0
  /* 14E730 80132BC0 03E00008 */        jr $ra
  /* 14E734 80132BC4 AC394C10 */        sw $t9, %lo(D_ovl30_80134C10)($at)

glabel func_ovl30_80132BC8
  /* 14E738 80132BC8 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 14E73C 80132BCC 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 14E740 80132BD0 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E744 80132BD4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14E748 80132BD8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14E74C 80132BDC 244E0008 */     addiu $t6, $v0, 8
  /* 14E750 80132BE0 AFA40018 */        sw $a0, 0x18($sp)
  /* 14E754 80132BE4 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14E758 80132BE8 3C0FE700 */       lui $t7, 0xe700
  /* 14E75C 80132BEC AC4F0000 */        sw $t7, ($v0)
  /* 14E760 80132BF0 AC400004 */        sw $zero, 4($v0)
  /* 14E764 80132BF4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E768 80132BF8 3C19E300 */       lui $t9, (0xE3000A01 >> 16) # 3808430593
  /* 14E76C 80132BFC 37390A01 */       ori $t9, $t9, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 14E770 80132C00 24580008 */     addiu $t8, $v0, 8
  /* 14E774 80132C04 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14E778 80132C08 AC400004 */        sw $zero, 4($v0)
  /* 14E77C 80132C0C AC590000 */        sw $t9, ($v0)
  /* 14E780 80132C10 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E784 80132C14 3C185760 */       lui $t8, (0x576088FF >> 16) # 1465944319
  /* 14E788 80132C18 371888FF */       ori $t8, $t8, (0x576088FF & 0xFFFF) # 1465944319
  /* 14E78C 80132C1C 244E0008 */     addiu $t6, $v0, 8
  /* 14E790 80132C20 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14E794 80132C24 3C0FFA00 */       lui $t7, 0xfa00
  /* 14E798 80132C28 AC4F0000 */        sw $t7, ($v0)
  /* 14E79C 80132C2C AC580004 */        sw $t8, 4($v0)
  /* 14E7A0 80132C30 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E7A4 80132C34 3C0FFFFD */       lui $t7, (0xFFFDF6FB >> 16) # 4294833915
  /* 14E7A8 80132C38 3C0EFCFF */       lui $t6, (0xFCFFFFFF >> 16) # 4244635647
  /* 14E7AC 80132C3C 24590008 */     addiu $t9, $v0, 8
  /* 14E7B0 80132C40 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 14E7B4 80132C44 35CEFFFF */       ori $t6, $t6, (0xFCFFFFFF & 0xFFFF) # 4244635647
  /* 14E7B8 80132C48 35EFF6FB */       ori $t7, $t7, (0xFFFDF6FB & 0xFFFF) # 4294833915
  /* 14E7BC 80132C4C AC4F0004 */        sw $t7, 4($v0)
  /* 14E7C0 80132C50 AC4E0000 */        sw $t6, ($v0)
  /* 14E7C4 80132C54 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E7C8 80132C58 3C0E0050 */       lui $t6, (0x5041C8 >> 16) # 5259720
  /* 14E7CC 80132C5C 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 14E7D0 80132C60 24580008 */     addiu $t8, $v0, 8
  /* 14E7D4 80132C64 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14E7D8 80132C68 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 14E7DC 80132C6C 35CE41C8 */       ori $t6, $t6, (0x5041C8 & 0xFFFF) # 5259720
  /* 14E7E0 80132C70 AC4E0004 */        sw $t6, 4($v0)
  /* 14E7E4 80132C74 AC590000 */        sw $t9, ($v0)
  /* 14E7E8 80132C78 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E7EC 80132C7C 24190073 */     addiu $t9, $zero, 0x73
  /* 14E7F0 80132C80 3C18FA00 */       lui $t8, 0xfa00
  /* 14E7F4 80132C84 244F0008 */     addiu $t7, $v0, 8
  /* 14E7F8 80132C88 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 14E7FC 80132C8C AC590004 */        sw $t9, 4($v0)
  /* 14E800 80132C90 AC580000 */        sw $t8, ($v0)
  /* 14E804 80132C94 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E808 80132C98 3C18000A */       lui $t8, (0xAC208 >> 16) # 705032
  /* 14E80C 80132C9C 3C0FF626 */       lui $t7, (0xF626034C >> 16) # 4129686348
  /* 14E810 80132CA0 244E0008 */     addiu $t6, $v0, 8
  /* 14E814 80132CA4 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14E818 80132CA8 35EF034C */       ori $t7, $t7, (0xF626034C & 0xFFFF) # 4129686348
  /* 14E81C 80132CAC 3718C208 */       ori $t8, $t8, (0xAC208 & 0xFFFF) # 705032
  /* 14E820 80132CB0 AC580004 */        sw $t8, 4($v0)
  /* 14E824 80132CB4 AC4F0000 */        sw $t7, ($v0)
  /* 14E828 80132CB8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E82C 80132CBC 3C0EE700 */       lui $t6, 0xe700
  /* 14E830 80132CC0 3C18E200 */       lui $t8, (0xE200001C >> 16) # 3791650844
  /* 14E834 80132CC4 24590008 */     addiu $t9, $v0, 8
  /* 14E838 80132CC8 AC790000 */        sw $t9, ($v1) # gpDisplayListHead + 0
  /* 14E83C 80132CCC AC400004 */        sw $zero, 4($v0)
  /* 14E840 80132CD0 AC4E0000 */        sw $t6, ($v0)
  /* 14E844 80132CD4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E848 80132CD8 3C190055 */       lui $t9, (0x552078 >> 16) # 5578872
  /* 14E84C 80132CDC 37392078 */       ori $t9, $t9, (0x552078 & 0xFFFF) # 5578872
  /* 14E850 80132CE0 244F0008 */     addiu $t7, $v0, 8
  /* 14E854 80132CE4 AC6F0000 */        sw $t7, ($v1) # gpDisplayListHead + 0
  /* 14E858 80132CE8 3718001C */       ori $t8, $t8, (0xE200001C & 0xFFFF) # 3791650844
  /* 14E85C 80132CEC AC580000 */        sw $t8, ($v0)
  /* 14E860 80132CF0 AC590004 */        sw $t9, 4($v0)
  /* 14E864 80132CF4 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14E868 80132CF8 3C0FE300 */       lui $t7, (0xE3000A01 >> 16) # 3808430593
  /* 14E86C 80132CFC 35EF0A01 */       ori $t7, $t7, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 14E870 80132D00 244E0008 */     addiu $t6, $v0, 8
  /* 14E874 80132D04 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14E878 80132D08 AC400004 */        sw $zero, 4($v0)
  /* 14E87C 80132D0C 0C0333AB */       jal func_ovl0_800CCEAC
  /* 14E880 80132D10 AC4F0000 */        sw $t7, ($v0)
  /* 14E884 80132D14 0C0333C0 */       jal func_ovl0_800CCF00
  /* 14E888 80132D18 8FA40018 */        lw $a0, 0x18($sp)
  /* 14E88C 80132D1C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14E890 80132D20 27BD0018 */     addiu $sp, $sp, 0x18
  /* 14E894 80132D24 03E00008 */        jr $ra
  /* 14E898 80132D28 00000000 */       nop 

glabel func_ovl30_80132D2C
  /* 14E89C 80132D2C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14E8A0 80132D30 AFB00028 */        sw $s0, 0x28($sp)
  /* 14E8A4 80132D34 3C108000 */       lui $s0, %hi(D_NF_80000010)
  /* 14E8A8 80132D38 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14E8AC 80132D3C AFA40040 */        sw $a0, 0x40($sp)
  /* 14E8B0 80132D40 AFB40038 */        sw $s4, 0x38($sp)
  /* 14E8B4 80132D44 AFB30034 */        sw $s3, 0x34($sp)
  /* 14E8B8 80132D48 AFB20030 */        sw $s2, 0x30($sp)
  /* 14E8BC 80132D4C AFB1002C */        sw $s1, 0x2c($sp)
  /* 14E8C0 80132D50 F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 14E8C4 80132D54 00002025 */        or $a0, $zero, $zero
  /* 14E8C8 80132D58 02003825 */        or $a3, $s0, $zero
  /* 14E8CC 80132D5C 00002825 */        or $a1, $zero, $zero
  /* 14E8D0 80132D60 0C00265A */       jal omMakeGObjCommon
  /* 14E8D4 80132D64 24060009 */     addiu $a2, $zero, 9
  /* 14E8D8 80132D68 3C058013 */       lui $a1, %hi(func_ovl30_80132BC8)
  /* 14E8DC 80132D6C 240EFFFF */     addiu $t6, $zero, -1
  /* 14E8E0 80132D70 0040A025 */        or $s4, $v0, $zero
  /* 14E8E4 80132D74 AFAE0010 */        sw $t6, 0x10($sp)
  /* 14E8E8 80132D78 24A52BC8 */     addiu $a1, $a1, %lo(func_ovl30_80132BC8)
  /* 14E8EC 80132D7C 00402025 */        or $a0, $v0, $zero
  /* 14E8F0 80132D80 24060007 */     addiu $a2, $zero, 7
  /* 14E8F4 80132D84 0C00277D */       jal func_80009DF4
  /* 14E8F8 80132D88 02003825 */        or $a3, $s0, $zero
  /* 14E8FC 80132D8C 3C014302 */       lui $at, (0x43020000 >> 16) # 130.0
  /* 14E900 80132D90 3C110001 */       lui $s1, %hi(D_NF_0000C728)
  /* 14E904 80132D94 3C138013 */       lui $s3, %hi(D_ovl30_80134E10)
  /* 14E908 80132D98 4481A000 */      mtc1 $at, $f20 # 130.0 to cop1
  /* 14E90C 80132D9C 26734E10 */     addiu $s3, $s3, %lo(D_ovl30_80134E10)
  /* 14E910 80132DA0 2631C728 */     addiu $s1, $s1, %lo(D_NF_0000C728)
  /* 14E914 80132DA4 2410002B */     addiu $s0, $zero, 0x2b
  /* 14E918 80132DA8 2412009B */     addiu $s2, $zero, 0x9b
  .L80132DAC:
  /* 14E91C 80132DAC 8E6F0008 */        lw $t7, 8($s3) # D_ovl30_80134E10 + 8
  /* 14E920 80132DB0 02802025 */        or $a0, $s4, $zero
  /* 14E924 80132DB4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E928 80132DB8 01F12821 */      addu $a1, $t7, $s1
  /* 14E92C 80132DBC 44902000 */      mtc1 $s0, $f4 # -0.0 to cop1
  /* 14E930 80132DC0 26100010 */     addiu $s0, $s0, %lo(D_NF_80000010)
  /* 14E934 80132DC4 E454005C */      swc1 $f20, 0x5c($v0)
  /* 14E938 80132DC8 468021A0 */   cvt.s.w $f6, $f4
  /* 14E93C 80132DCC 1612FFF7 */       bne $s0, $s2, .L80132DAC
  /* 14E940 80132DD0 E4460058 */      swc1 $f6, 0x58($v0)
  /* 14E944 80132DD4 8FA30040 */        lw $v1, 0x40($sp)
  /* 14E948 80132DD8 240100DE */     addiu $at, $zero, 0xde
  /* 14E94C 80132DDC 02802025 */        or $a0, $s4, $zero
  /* 14E950 80132DE0 1461000D */       bne $v1, $at, .L80132E18
  /* 14E954 80132DE4 3C088013 */       lui $t0, 0x8013
  /* 14E958 80132DE8 8E780008 */        lw $t8, 8($s3) # D_ovl30_80134E10 + 8
  /* 14E95C 80132DEC 3C190001 */       lui $t9, %hi(D_NF_0000DE30)
  /* 14E960 80132DF0 2739DE30 */     addiu $t9, $t9, %lo(D_NF_0000DE30)
  /* 14E964 80132DF4 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E968 80132DF8 03192821 */      addu $a1, $t8, $t9
  /* 14E96C 80132DFC 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 14E970 80132E00 44814000 */      mtc1 $at, $f8 # 40.0 to cop1
  /* 14E974 80132E04 3C0142FE */       lui $at, (0x42FE0000 >> 16) # 127.0
  /* 14E978 80132E08 44815000 */      mtc1 $at, $f10 # 127.0 to cop1
  /* 14E97C 80132E0C E4480058 */      swc1 $f8, 0x58($v0)
  /* 14E980 80132E10 1000002D */         b .L80132EC8
  /* 14E984 80132E14 E44A005C */      swc1 $f10, 0x5c($v0)
  .L80132E18:
  /* 14E988 80132E18 8D084C18 */        lw $t0, 0x4c18($t0)
  /* 14E98C 80132E1C 24010001 */     addiu $at, $zero, 1
  /* 14E990 80132E20 00031080 */       sll $v0, $v1, 2
  /* 14E994 80132E24 15010017 */       bne $t0, $at, .L80132E84
  /* 14E998 80132E28 3C0F8013 */       lui $t7, 0x8013
  /* 14E99C 80132E2C 3C098013 */       lui $t1, %hi(D_ovl30_80134568)
  /* 14E9A0 80132E30 01224821 */      addu $t1, $t1, $v0
  /* 14E9A4 80132E34 3C0B8013 */       lui $t3, %hi(D_ovl30_80134C10)
  /* 14E9A8 80132E38 8D6B4C10 */        lw $t3, %lo(D_ovl30_80134C10)($t3)
  /* 14E9AC 80132E3C 8D294568 */        lw $t1, %lo(D_ovl30_80134568)($t1)
  /* 14E9B0 80132E40 3C0D8013 */       lui $t5, %hi(D_ovl30_8013452C)
  /* 14E9B4 80132E44 01A26821 */      addu $t5, $t5, $v0
  /* 14E9B8 80132E48 8DAD452C */        lw $t5, %lo(D_ovl30_8013452C)($t5)
  /* 14E9BC 80132E4C 8D6C0048 */        lw $t4, 0x48($t3)
  /* 14E9C0 80132E50 3C048013 */       lui $a0, %hi(D_ovl30_80134550)
  /* 14E9C4 80132E54 000950C0 */       sll $t2, $t1, 3
  /* 14E9C8 80132E58 008A2021 */      addu $a0, $a0, $t2
  /* 14E9CC 80132E5C 8C844550 */        lw $a0, %lo(D_ovl30_80134550)($a0)
  /* 14E9D0 80132E60 0C033776 */       jal rldm_get_file_external_force
  /* 14E9D4 80132E64 018D2823 */      subu $a1, $t4, $t5
  /* 14E9D8 80132E68 3C0E0002 */       lui $t6, %hi(D_NF_00020718)
  /* 14E9DC 80132E6C 25CE0718 */     addiu $t6, $t6, %lo(D_NF_00020718)
  /* 14E9E0 80132E70 004E2821 */      addu $a1, $v0, $t6
  /* 14E9E4 80132E74 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14E9E8 80132E78 02802025 */        or $a0, $s4, $zero
  /* 14E9EC 80132E7C 10000005 */         b .L80132E94
  /* 14E9F0 80132E80 00000000 */       nop 
  .L80132E84:
  /* 14E9F4 80132E84 8DEF4C10 */        lw $t7, 0x4c10($t7)
  /* 14E9F8 80132E88 02802025 */        or $a0, $s4, $zero
  /* 14E9FC 80132E8C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 14EA00 80132E90 8DE50048 */        lw $a1, 0x48($t7)
  .L80132E94:
  /* 14EA04 80132E94 3C018013 */       lui $at, %hi(D_ovl30_80134BBC)
  /* 14EA08 80132E98 C4204BBC */      lwc1 $f0, %lo(D_ovl30_80134BBC)($at)
  /* 14EA0C 80132E9C 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 14EA10 80132EA0 44818000 */      mtc1 $at, $f16 # 40.0 to cop1
  /* 14EA14 80132EA4 94580024 */       lhu $t8, 0x24($v0)
  /* 14EA18 80132EA8 3C0142FE */       lui $at, (0x42FE0000 >> 16) # 127.0
  /* 14EA1C 80132EAC 44819000 */      mtc1 $at, $f18 # 127.0 to cop1
  /* 14EA20 80132EB0 3319FFDF */      andi $t9, $t8, 0xffdf
  /* 14EA24 80132EB4 A4590024 */        sh $t9, 0x24($v0)
  /* 14EA28 80132EB8 E4400018 */      swc1 $f0, 0x18($v0)
  /* 14EA2C 80132EBC E440001C */      swc1 $f0, 0x1c($v0)
  /* 14EA30 80132EC0 E4500058 */      swc1 $f16, 0x58($v0)
  /* 14EA34 80132EC4 E452005C */      swc1 $f18, 0x5c($v0)
  .L80132EC8:
  /* 14EA38 80132EC8 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14EA3C 80132ECC 02801025 */        or $v0, $s4, $zero
  /* 14EA40 80132ED0 8FB40038 */        lw $s4, 0x38($sp)
  /* 14EA44 80132ED4 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 14EA48 80132ED8 8FB00028 */        lw $s0, 0x28($sp)
  /* 14EA4C 80132EDC 8FB1002C */        lw $s1, 0x2c($sp)
  /* 14EA50 80132EE0 8FB20030 */        lw $s2, 0x30($sp)
  /* 14EA54 80132EE4 8FB30034 */        lw $s3, 0x34($sp)
  /* 14EA58 80132EE8 03E00008 */        jr $ra
  /* 14EA5C 80132EEC 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_ovl30_80132EF0
  /* 14EA60 80132EF0 3C038004 */       lui $v1, %hi(gpDisplayListHead)
  /* 14EA64 80132EF4 246365B0 */     addiu $v1, $v1, %lo(gpDisplayListHead)
  /* 14EA68 80132EF8 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14EA6C 80132EFC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14EA70 80132F00 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14EA74 80132F04 244E0008 */     addiu $t6, $v0, 8
  /* 14EA78 80132F08 AC6E0000 */        sw $t6, ($v1) # gpDisplayListHead + 0
  /* 14EA7C 80132F0C 3C0FE700 */       lui $t7, 0xe700
  /* 14EA80 80132F10 AC4F0000 */        sw $t7, ($v0)
  /* 14EA84 80132F14 AC400004 */        sw $zero, 4($v0)
  /* 14EA88 80132F18 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14EA8C 80132F1C 3C19D9FF */       lui $t9, (0xD9FFFFFF >> 16) # 3657433087
  /* 14EA90 80132F20 3739FFFF */       ori $t9, $t9, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 14EA94 80132F24 24580008 */     addiu $t8, $v0, 8
  /* 14EA98 80132F28 AC780000 */        sw $t8, ($v1) # gpDisplayListHead + 0
  /* 14EA9C 80132F2C 24080001 */     addiu $t0, $zero, 1
  /* 14EAA0 80132F30 AC480004 */        sw $t0, 4($v0)
  /* 14EAA4 80132F34 AC590000 */        sw $t9, ($v0)
  /* 14EAA8 80132F38 8C620000 */        lw $v0, ($v1) # gpDisplayListHead + 0
  /* 14EAAC 80132F3C 3C0AE200 */       lui $t2, (0xE200001C >> 16) # 3791650844
  /* 14EAB0 80132F40 3C0B0055 */       lui $t3, (0x552078 >> 16) # 5578872
  /* 14EAB4 80132F44 24490008 */     addiu $t1, $v0, 8
  /* 14EAB8 80132F48 AC690000 */        sw $t1, ($v1) # gpDisplayListHead + 0
  /* 14EABC 80132F4C 356B2078 */       ori $t3, $t3, (0x552078 & 0xFFFF) # 5578872
  /* 14EAC0 80132F50 354A001C */       ori $t2, $t2, (0xE200001C & 0xFFFF) # 3791650844
  /* 14EAC4 80132F54 AC4A0000 */        sw $t2, ($v0)
  /* 14EAC8 80132F58 0C00500E */       jal func_80014038
  /* 14EACC 80132F5C AC4B0004 */        sw $t3, 4($v0)
  /* 14EAD0 80132F60 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14EAD4 80132F64 27BD0018 */     addiu $sp, $sp, 0x18
  /* 14EAD8 80132F68 03E00008 */        jr $ra
  /* 14EADC 80132F6C 00000000 */       nop 

glabel func_ovl30_80132F70
  /* 14EAE0 80132F70 3C028004 */       lui $v0, %hi(gpDisplayListHead)
  /* 14EAE4 80132F74 244265B0 */     addiu $v0, $v0, %lo(gpDisplayListHead)
  /* 14EAE8 80132F78 8C430000 */        lw $v1, ($v0) # gpDisplayListHead + 0
  /* 14EAEC 80132F7C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14EAF0 80132F80 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14EAF4 80132F84 246E0008 */     addiu $t6, $v1, 8
  /* 14EAF8 80132F88 AC4E0000 */        sw $t6, ($v0) # gpDisplayListHead + 0
  /* 14EAFC 80132F8C 3C0CE700 */       lui $t4, 0xe700
  /* 14EB00 80132F90 AC6C0000 */        sw $t4, ($v1)
  /* 14EB04 80132F94 AC600004 */        sw $zero, 4($v1)
  /* 14EB08 80132F98 8C430000 */        lw $v1, ($v0) # gpDisplayListHead + 0
  /* 14EB0C 80132F9C 3C0DD9FF */       lui $t5, (0xD9FFFFFF >> 16) # 3657433087
  /* 14EB10 80132FA0 35ADFFFF */       ori $t5, $t5, (0xD9FFFFFF & 0xFFFF) # 3657433087
  /* 14EB14 80132FA4 246F0008 */     addiu $t7, $v1, 8
  /* 14EB18 80132FA8 AC4F0000 */        sw $t7, ($v0) # gpDisplayListHead + 0
  /* 14EB1C 80132FAC 241F0001 */     addiu $ra, $zero, 1
  /* 14EB20 80132FB0 AC7F0004 */        sw $ra, 4($v1)
  /* 14EB24 80132FB4 AC6D0000 */        sw $t5, ($v1)
  /* 14EB28 80132FB8 8C430000 */        lw $v1, ($v0) # gpDisplayListHead + 0
  /* 14EB2C 80132FBC 3C0E0055 */       lui $t6, (0x552078 >> 16) # 5578872
  /* 14EB30 80132FC0 3C19E200 */       lui $t9, (0xE200001C >> 16) # 3791650844
  /* 14EB34 80132FC4 24780008 */     addiu $t8, $v1, 8
  /* 14EB38 80132FC8 AC580000 */        sw $t8, ($v0) # gpDisplayListHead + 0
  /* 14EB3C 80132FCC 3739001C */       ori $t9, $t9, (0xE200001C & 0xFFFF) # 3791650844
  /* 14EB40 80132FD0 35CE2078 */       ori $t6, $t6, (0x552078 & 0xFFFF) # 5578872
  /* 14EB44 80132FD4 AC6E0004 */        sw $t6, 4($v1)
  /* 14EB48 80132FD8 AC790000 */        sw $t9, ($v1)
  /* 14EB4C 80132FDC 8C450004 */        lw $a1, 4($v0) # gpDisplayListHead + 4
  /* 14EB50 80132FE0 3C0EE200 */       lui $t6, (0xE200001C >> 16) # 3791650844
  /* 14EB54 80132FE4 35CE001C */       ori $t6, $t6, (0xE200001C & 0xFFFF) # 3791650844
  /* 14EB58 80132FE8 24AF0008 */     addiu $t7, $a1, 8
  /* 14EB5C 80132FEC AC4F0004 */        sw $t7, 4($v0) # gpDisplayListHead + 4
  /* 14EB60 80132FF0 ACA00004 */        sw $zero, 4($a1)
  /* 14EB64 80132FF4 ACAC0000 */        sw $t4, ($a1)
  /* 14EB68 80132FF8 8C450004 */        lw $a1, 4($v0) # gpDisplayListHead + 4
  /* 14EB6C 80132FFC 3C0F0050 */       lui $t7, (0x5049D8 >> 16) # 5261784
  /* 14EB70 80133000 35EF49D8 */       ori $t7, $t7, (0x5049D8 & 0xFFFF) # 5261784
  /* 14EB74 80133004 24B80008 */     addiu $t8, $a1, 8
  /* 14EB78 80133008 AC580004 */        sw $t8, 4($v0) # gpDisplayListHead + 4
  /* 14EB7C 8013300C ACBF0004 */        sw $ra, 4($a1)
  /* 14EB80 80133010 ACAD0000 */        sw $t5, ($a1)
  /* 14EB84 80133014 8C450004 */        lw $a1, 4($v0) # gpDisplayListHead + 4
  /* 14EB88 80133018 24B90008 */     addiu $t9, $a1, 8
  /* 14EB8C 8013301C AC590004 */        sw $t9, 4($v0) # gpDisplayListHead + 4
  /* 14EB90 80133020 ACAF0004 */        sw $t7, 4($a1)
  /* 14EB94 80133024 0C0051DA */       jal func_80014768
  /* 14EB98 80133028 ACAE0000 */        sw $t6, ($a1)
  /* 14EB9C 8013302C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14EBA0 80133030 27BD0018 */     addiu $sp, $sp, 0x18
  /* 14EBA4 80133034 03E00008 */        jr $ra
  /* 14EBA8 80133038 00000000 */       nop 

glabel func_ovl30_8013303C
  /* 14EBAC 8013303C 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 14EBB0 80133040 3C0F8013 */       lui $t7, %hi(D_ovl30_80134858)
  /* 14EBB4 80133044 AFB10020 */        sw $s1, 0x20($sp)
  /* 14EBB8 80133048 25EF4858 */     addiu $t7, $t7, %lo(D_ovl30_80134858)
  /* 14EBBC 8013304C 00C08825 */        or $s1, $a2, $zero
  /* 14EBC0 80133050 AFBF0024 */        sw $ra, 0x24($sp)
  /* 14EBC4 80133054 AFB0001C */        sw $s0, 0x1c($sp)
  /* 14EBC8 80133058 AFA40058 */        sw $a0, 0x58($sp)
  /* 14EBCC 8013305C AFA5005C */        sw $a1, 0x5c($sp)
  /* 14EBD0 80133060 AFA70064 */        sw $a3, 0x64($sp)
  /* 14EBD4 80133064 25E80024 */     addiu $t0, $t7, 0x24
  /* 14EBD8 80133068 27AE0030 */     addiu $t6, $sp, 0x30
  .L8013306C:
  /* 14EBDC 8013306C 8DF90000 */        lw $t9, ($t7) # D_ovl30_80134858 + 0
  /* 14EBE0 80133070 25EF000C */     addiu $t7, $t7, 0xc
  /* 14EBE4 80133074 25CE000C */     addiu $t6, $t6, 0xc
  /* 14EBE8 80133078 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 14EBEC 8013307C 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl30_80134858 + -8
  /* 14EBF0 80133080 ADD8FFF8 */        sw $t8, -8($t6)
  /* 14EBF4 80133084 8DF9FFFC */        lw $t9, -4($t7) # D_ovl30_80134858 + -4
  /* 14EBF8 80133088 15E8FFF8 */       bne $t7, $t0, .L8013306C
  /* 14EBFC 8013308C ADD9FFFC */        sw $t9, -4($t6)
  /* 14EC00 80133090 8E290000 */        lw $t1, ($s1)
  /* 14EC04 80133094 00002025 */        or $a0, $zero, $zero
  /* 14EC08 80133098 00002825 */        or $a1, $zero, $zero
  /* 14EC0C 8013309C 15200003 */      bnez $t1, .L801330AC
  /* 14EC10 801330A0 24060005 */     addiu $a2, $zero, 5
  /* 14EC14 801330A4 1000003C */         b .L80133198
  /* 14EC18 801330A8 00001025 */        or $v0, $zero, $zero
  .L801330AC:
  /* 14EC1C 801330AC 0C00265A */       jal omMakeGObjCommon
  /* 14EC20 801330B0 3C078000 */       lui $a3, 0x8000
  /* 14EC24 801330B4 8FAA005C */        lw $t2, 0x5c($sp)
  /* 14EC28 801330B8 8FAC0064 */        lw $t4, 0x64($sp)
  /* 14EC2C 801330BC 240D0001 */     addiu $t5, $zero, 1
  /* 14EC30 801330C0 914B0044 */       lbu $t3, 0x44($t2)
  /* 14EC34 801330C4 018D4004 */      sllv $t0, $t5, $t4
  /* 14EC38 801330C8 00408025 */        or $s0, $v0, $zero
  /* 14EC3C 801330CC 01687824 */       and $t7, $t3, $t0
  /* 14EC40 801330D0 11E00004 */      beqz $t7, .L801330E4
  /* 14EC44 801330D4 02002025 */        or $a0, $s0, $zero
  /* 14EC48 801330D8 3C058013 */       lui $a1, %hi(func_ovl30_80132F70)
  /* 14EC4C 801330DC 10000003 */         b .L801330EC
  /* 14EC50 801330E0 24A52F70 */     addiu $a1, $a1, %lo(func_ovl30_80132F70)
  .L801330E4:
  /* 14EC54 801330E4 3C058013 */       lui $a1, %hi(func_ovl30_80132EF0)
  /* 14EC58 801330E8 24A52EF0 */     addiu $a1, $a1, %lo(func_ovl30_80132EF0)
  .L801330EC:
  /* 14EC5C 801330EC 240EFFFF */     addiu $t6, $zero, -1
  /* 14EC60 801330F0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 14EC64 801330F4 24060003 */     addiu $a2, $zero, 3
  /* 14EC68 801330F8 0C00277D */       jal func_80009DF4
  /* 14EC6C 801330FC 3C078000 */       lui $a3, 0x8000
  /* 14EC70 80133100 8E250000 */        lw $a1, ($s1)
  /* 14EC74 80133104 AFA00014 */        sw $zero, 0x14($sp)
  /* 14EC78 80133108 AFA00010 */        sw $zero, 0x10($sp)
  /* 14EC7C 8013310C 02002025 */        or $a0, $s0, $zero
  /* 14EC80 80133110 00003025 */        or $a2, $zero, $zero
  /* 14EC84 80133114 0C003D64 */       jal func_8000F590
  /* 14EC88 80133118 2407001C */     addiu $a3, $zero, 0x1c
  /* 14EC8C 8013311C 8E250008 */        lw $a1, 8($s1)
  /* 14EC90 80133120 50A00004 */      beql $a1, $zero, .L80133134
  /* 14EC94 80133124 8E250004 */        lw $a1, 4($s1)
  /* 14EC98 80133128 0C003E3D */       jal func_8000F8F4
  /* 14EC9C 8013312C 02002025 */        or $a0, $s0, $zero
  /* 14ECA0 80133130 8E250004 */        lw $a1, 4($s1)
  .L80133134:
  /* 14ECA4 80133134 02002025 */        or $a0, $s0, $zero
  /* 14ECA8 80133138 24070000 */     addiu $a3, $zero, 0
  /* 14ECAC 8013313C 14A00004 */      bnez $a1, .L80133150
  /* 14ECB0 80133140 00000000 */       nop 
  /* 14ECB4 80133144 8E38000C */        lw $t8, 0xc($s1)
  /* 14ECB8 80133148 53000006 */      beql $t8, $zero, .L80133164
  /* 14ECBC 8013314C 8FB90058 */        lw $t9, 0x58($sp)
  .L80133150:
  /* 14ECC0 80133150 0C002FB6 */       jal func_8000BED8
  /* 14ECC4 80133154 8E26000C */        lw $a2, 0xc($s1)
  /* 14ECC8 80133158 0C0037CD */       jal func_8000DF34
  /* 14ECCC 8013315C 02002025 */        or $a0, $s0, $zero
  /* 14ECD0 80133160 8FB90058 */        lw $t9, 0x58($sp)
  .L80133164:
  /* 14ECD4 80133164 27AA0030 */     addiu $t2, $sp, 0x30
  /* 14ECD8 80133168 8E0D0074 */        lw $t5, 0x74($s0)
  /* 14ECDC 8013316C 00194880 */       sll $t1, $t9, 2
  /* 14ECE0 80133170 012A1821 */      addu $v1, $t1, $t2
  /* 14ECE4 80133174 C4640000 */      lwc1 $f4, ($v1)
  /* 14ECE8 80133178 02001025 */        or $v0, $s0, $zero
  /* 14ECEC 8013317C E5A40040 */      swc1 $f4, 0x40($t5)
  /* 14ECF0 80133180 8E0C0074 */        lw $t4, 0x74($s0)
  /* 14ECF4 80133184 C4660000 */      lwc1 $f6, ($v1)
  /* 14ECF8 80133188 E5860044 */      swc1 $f6, 0x44($t4)
  /* 14ECFC 8013318C 8E0B0074 */        lw $t3, 0x74($s0)
  /* 14ED00 80133190 C4680000 */      lwc1 $f8, ($v1)
  /* 14ED04 80133194 E5680048 */      swc1 $f8, 0x48($t3)
  .L80133198:
  /* 14ED08 80133198 8FBF0024 */        lw $ra, 0x24($sp)
  /* 14ED0C 8013319C 8FB0001C */        lw $s0, 0x1c($sp)
  /* 14ED10 801331A0 8FB10020 */        lw $s1, 0x20($sp)
  /* 14ED14 801331A4 03E00008 */        jr $ra
  /* 14ED18 801331A8 27BD0058 */     addiu $sp, $sp, 0x58

glabel func_ovl30_801331AC
  /* 14ED1C 801331AC 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 14ED20 801331B0 AFB10018 */        sw $s1, 0x18($sp)
  /* 14ED24 801331B4 AFB00014 */        sw $s0, 0x14($sp)
  /* 14ED28 801331B8 00A08025 */        or $s0, $a1, $zero
  /* 14ED2C 801331BC 00808825 */        or $s1, $a0, $zero
  /* 14ED30 801331C0 AFBF002C */        sw $ra, 0x2c($sp)
  /* 14ED34 801331C4 AFB50028 */        sw $s5, 0x28($sp)
  /* 14ED38 801331C8 AFB40024 */        sw $s4, 0x24($sp)
  /* 14ED3C 801331CC AFB30020 */        sw $s3, 0x20($sp)
  /* 14ED40 801331D0 14C00004 */      bnez $a2, .L801331E4
  /* 14ED44 801331D4 AFB2001C */        sw $s2, 0x1c($sp)
  /* 14ED48 801331D8 3C138013 */       lui $s3, %hi(D_ovl30_80134C00)
  /* 14ED4C 801331DC 10000003 */         b .L801331EC
  /* 14ED50 801331E0 26734C00 */     addiu $s3, $s3, %lo(D_ovl30_80134C00)
  .L801331E4:
  /* 14ED54 801331E4 3C138013 */       lui $s3, %hi(D_ovl30_80134BF0)
  /* 14ED58 801331E8 26734BF0 */     addiu $s3, $s3, %lo(D_ovl30_80134BF0)
  .L801331EC:
  /* 14ED5C 801331EC 02202025 */        or $a0, $s1, $zero
  /* 14ED60 801331F0 02002825 */        or $a1, $s0, $zero
  /* 14ED64 801331F4 02003025 */        or $a2, $s0, $zero
  /* 14ED68 801331F8 0C04CC0F */       jal func_ovl30_8013303C
  /* 14ED6C 801331FC 00003825 */        or $a3, $zero, $zero
  /* 14ED70 80133200 AE620000 */        sw $v0, ($s3) # D_ovl30_80134BF0 + 0
  /* 14ED74 80133204 02202025 */        or $a0, $s1, $zero
  /* 14ED78 80133208 02002825 */        or $a1, $s0, $zero
  /* 14ED7C 8013320C 26060010 */     addiu $a2, $s0, 0x10
  /* 14ED80 80133210 0C04CC0F */       jal func_ovl30_8013303C
  /* 14ED84 80133214 24070001 */     addiu $a3, $zero, 1
  /* 14ED88 80133218 AE620004 */        sw $v0, 4($s3) # D_ovl30_80134BF0 + 4
  /* 14ED8C 8013321C 02202025 */        or $a0, $s1, $zero
  /* 14ED90 80133220 02002825 */        or $a1, $s0, $zero
  /* 14ED94 80133224 26060020 */     addiu $a2, $s0, 0x20
  /* 14ED98 80133228 0C04CC0F */       jal func_ovl30_8013303C
  /* 14ED9C 8013322C 24070002 */     addiu $a3, $zero, 2
  /* 14EDA0 80133230 AE620008 */        sw $v0, 8($s3) # D_ovl30_80134BF0 + 8
  /* 14EDA4 80133234 02202025 */        or $a0, $s1, $zero
  /* 14EDA8 80133238 02002825 */        or $a1, $s0, $zero
  /* 14EDAC 8013323C 26060030 */     addiu $a2, $s0, 0x30
  /* 14EDB0 80133240 0C04CC0F */       jal func_ovl30_8013303C
  /* 14EDB4 80133244 24070003 */     addiu $a3, $zero, 3
  /* 14EDB8 80133248 24010007 */     addiu $at, $zero, 7
  /* 14EDBC 8013324C 16210006 */       bne $s1, $at, .L80133268
  /* 14EDC0 80133250 AE62000C */        sw $v0, 0xc($s3) # D_ovl30_80134BF0 + 12
  /* 14EDC4 80133254 8C4F0074 */        lw $t7, 0x74($v0)
  /* 14EDC8 80133258 24150002 */     addiu $s5, $zero, 2
  /* 14EDCC 8013325C 8DF80010 */        lw $t8, 0x10($t7)
  /* 14EDD0 80133260 8F190010 */        lw $t9, 0x10($t8)
  /* 14EDD4 80133264 A3350054 */        sb $s5, 0x54($t9)
  .L80133268:
  /* 14EDD8 80133268 24010005 */     addiu $at, $zero, 5
  /* 14EDDC 8013326C 16210012 */       bne $s1, $at, .L801332B8
  /* 14EDE0 80133270 24150002 */     addiu $s5, $zero, 2
  /* 14EDE4 80133274 8E680000 */        lw $t0, ($s3) # D_ovl30_80134BF0 + 0
  /* 14EDE8 80133278 2413000F */     addiu $s3, $zero, 0xf
  /* 14EDEC 8013327C 24100001 */     addiu $s0, $zero, 1
  /* 14EDF0 80133280 8D120074 */        lw $s2, 0x74($t0)
  /* 14EDF4 80133284 24140011 */     addiu $s4, $zero, 0x11
  /* 14EDF8 80133288 1240000B */      beqz $s2, .L801332B8
  /* 14EDFC 8013328C 02408825 */        or $s1, $s2, $zero
  .L80133290:
  /* 14EE00 80133290 12130003 */       beq $s0, $s3, .L801332A0
  /* 14EE04 80133294 02202025 */        or $a0, $s1, $zero
  /* 14EE08 80133298 16140002 */       bne $s0, $s4, .L801332A4
  /* 14EE0C 8013329C 00000000 */       nop 
  .L801332A0:
  /* 14EE10 801332A0 A2350054 */        sb $s5, 0x54($s1)
  .L801332A4:
  /* 14EE14 801332A4 0C0321BA */       jal func_ovl0_800C86E8
  /* 14EE18 801332A8 02402825 */        or $a1, $s2, $zero
  /* 14EE1C 801332AC 00408825 */        or $s1, $v0, $zero
  /* 14EE20 801332B0 1440FFF7 */      bnez $v0, .L80133290
  /* 14EE24 801332B4 26100001 */     addiu $s0, $s0, 1
  .L801332B8:
  /* 14EE28 801332B8 8FBF002C */        lw $ra, 0x2c($sp)
  /* 14EE2C 801332BC 8FB00014 */        lw $s0, 0x14($sp)
  /* 14EE30 801332C0 8FB10018 */        lw $s1, 0x18($sp)
  /* 14EE34 801332C4 8FB2001C */        lw $s2, 0x1c($sp)
  /* 14EE38 801332C8 8FB30020 */        lw $s3, 0x20($sp)
  /* 14EE3C 801332CC 8FB40024 */        lw $s4, 0x24($sp)
  /* 14EE40 801332D0 8FB50028 */        lw $s5, 0x28($sp)
  /* 14EE44 801332D4 03E00008 */        jr $ra
  /* 14EE48 801332D8 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl30_801332DC
  /* 14EE4C 801332DC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 14EE50 801332E0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14EE54 801332E4 AFB10018 */        sw $s1, 0x18($sp)
  /* 14EE58 801332E8 14800018 */      bnez $a0, .L8013334C
  /* 14EE5C 801332EC AFB00014 */        sw $s0, 0x14($sp)
  /* 14EE60 801332F0 3C108013 */       lui $s0, %hi(D_ovl30_80134BE4)
  /* 14EE64 801332F4 26104BE4 */     addiu $s0, $s0, %lo(D_ovl30_80134BE4)
  /* 14EE68 801332F8 8E040000 */        lw $a0, ($s0) # D_ovl30_80134BE4 + 0
  /* 14EE6C 801332FC 10800004 */      beqz $a0, .L80133310
  /* 14EE70 80133300 00000000 */       nop 
  /* 14EE74 80133304 0C0026A1 */       jal omEjectGObjCommon
  /* 14EE78 80133308 00000000 */       nop 
  /* 14EE7C 8013330C AE000000 */        sw $zero, ($s0) # D_ovl30_80134BE4 + 0
  .L80133310:
  /* 14EE80 80133310 3C108013 */       lui $s0, %hi(D_ovl30_80134BF0)
  /* 14EE84 80133314 3C118013 */       lui $s1, %hi(D_ovl30_80134C00)
  /* 14EE88 80133318 26314C00 */     addiu $s1, $s1, %lo(D_ovl30_80134C00)
  /* 14EE8C 8013331C 26104BF0 */     addiu $s0, $s0, %lo(D_ovl30_80134BF0)
  /* 14EE90 80133320 8E040000 */        lw $a0, ($s0) # D_ovl30_80134BF0 + 0
  .L80133324:
  /* 14EE94 80133324 50800005 */      beql $a0, $zero, .L8013333C
  /* 14EE98 80133328 26100004 */     addiu $s0, $s0, 4
  /* 14EE9C 8013332C 0C0026A1 */       jal omEjectGObjCommon
  /* 14EEA0 80133330 00000000 */       nop 
  /* 14EEA4 80133334 AE000000 */        sw $zero, ($s0) # D_ovl30_80134BF0 + 0
  /* 14EEA8 80133338 26100004 */     addiu $s0, $s0, 4
  .L8013333C:
  /* 14EEAC 8013333C 5611FFF9 */      bnel $s0, $s1, .L80133324
  /* 14EEB0 80133340 8E040000 */        lw $a0, ($s0) # D_ovl30_80134BF0 + 0
  /* 14EEB4 80133344 10000017 */         b .L801333A4
  /* 14EEB8 80133348 8FBF001C */        lw $ra, 0x1c($sp)
  .L8013334C:
  /* 14EEBC 8013334C 3C108013 */       lui $s0, %hi(D_ovl30_80134BE8)
  /* 14EEC0 80133350 26104BE8 */     addiu $s0, $s0, %lo(D_ovl30_80134BE8)
  /* 14EEC4 80133354 8E040000 */        lw $a0, ($s0) # D_ovl30_80134BE8 + 0
  /* 14EEC8 80133358 10800004 */      beqz $a0, .L8013336C
  /* 14EECC 8013335C 00000000 */       nop 
  /* 14EED0 80133360 0C0026A1 */       jal omEjectGObjCommon
  /* 14EED4 80133364 00000000 */       nop 
  /* 14EED8 80133368 AE000000 */        sw $zero, ($s0) # D_ovl30_80134BE8 + 0
  .L8013336C:
  /* 14EEDC 8013336C 3C108013 */       lui $s0, %hi(D_ovl30_80134C00)
  /* 14EEE0 80133370 3C118013 */       lui $s1, %hi(D_ovl30_80134C10)
  /* 14EEE4 80133374 26314C10 */     addiu $s1, $s1, %lo(D_ovl30_80134C10)
  /* 14EEE8 80133378 26104C00 */     addiu $s0, $s0, %lo(D_ovl30_80134C00)
  /* 14EEEC 8013337C 8E040000 */        lw $a0, ($s0) # D_ovl30_80134C00 + 0
  .L80133380:
  /* 14EEF0 80133380 50800005 */      beql $a0, $zero, .L80133398
  /* 14EEF4 80133384 26100004 */     addiu $s0, $s0, 4
  /* 14EEF8 80133388 0C0026A1 */       jal omEjectGObjCommon
  /* 14EEFC 8013338C 00000000 */       nop 
  /* 14EF00 80133390 AE000000 */        sw $zero, ($s0) # D_ovl30_80134C00 + 0
  /* 14EF04 80133394 26100004 */     addiu $s0, $s0, 4
  .L80133398:
  /* 14EF08 80133398 5611FFF9 */      bnel $s0, $s1, .L80133380
  /* 14EF0C 8013339C 8E040000 */        lw $a0, ($s0) # D_ovl30_80134C00 + 0
  /* 14EF10 801333A0 8FBF001C */        lw $ra, 0x1c($sp)
  .L801333A4:
  /* 14EF14 801333A4 8FB00014 */        lw $s0, 0x14($sp)
  /* 14EF18 801333A8 8FB10018 */        lw $s1, 0x18($sp)
  /* 14EF1C 801333AC 03E00008 */        jr $ra
  /* 14EF20 801333B0 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_ovl30_801333B4
  /* 14EF24 801333B4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 14EF28 801333B8 AFB00018 */        sw $s0, 0x18($sp)
  /* 14EF2C 801333BC 240100DE */     addiu $at, $zero, 0xde
  /* 14EF30 801333C0 00808025 */        or $s0, $a0, $zero
  /* 14EF34 801333C4 1081000E */       beq $a0, $at, .L80133400
  /* 14EF38 801333C8 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14EF3C 801333CC 3C0E8013 */       lui $t6, %hi(D_ovl30_80134C20)
  /* 14EF40 801333D0 8DCE4C20 */        lw $t6, %lo(D_ovl30_80134C20)($t6)
  /* 14EF44 801333D4 3C058013 */       lui $a1, 0x8013
  /* 14EF48 801333D8 55C00007 */      bnel $t6, $zero, .L801333F8
  /* 14EF4C 801333DC 02002025 */        or $a0, $s0, $zero
  /* 14EF50 801333E0 3C058013 */       lui $a1, %hi(D_ovl30_80134E28)
  /* 14EF54 801333E4 0C04CAE1 */       jal func_ovl30_80132B84
  /* 14EF58 801333E8 8CA54E28 */        lw $a1, %lo(D_ovl30_80134E28)($a1)
  /* 14EF5C 801333EC 10000004 */         b .L80133400
  /* 14EF60 801333F0 00000000 */       nop 
  /* 14EF64 801333F4 02002025 */        or $a0, $s0, $zero
  .L801333F8:
  /* 14EF68 801333F8 0C04CAE1 */       jal func_ovl30_80132B84
  /* 14EF6C 801333FC 8CA54E24 */        lw $a1, 0x4e24($a1)
  .L80133400:
  /* 14EF70 80133400 3C0F8013 */       lui $t7, %hi(D_ovl30_80134C20)
  /* 14EF74 80133404 8DEF4C20 */        lw $t7, %lo(D_ovl30_80134C20)($t7)
  /* 14EF78 80133408 15E00006 */      bnez $t7, .L80133424
  /* 14EF7C 8013340C 00000000 */       nop 
  /* 14EF80 80133410 0C04CB4B */       jal func_ovl30_80132D2C
  /* 14EF84 80133414 02002025 */        or $a0, $s0, $zero
  /* 14EF88 80133418 3C018013 */       lui $at, %hi(D_ovl30_80134BE8)
  /* 14EF8C 8013341C 10000005 */         b .L80133434
  /* 14EF90 80133420 AC224BE8 */        sw $v0, %lo(D_ovl30_80134BE8)($at)
  .L80133424:
  /* 14EF94 80133424 0C04CB4B */       jal func_ovl30_80132D2C
  /* 14EF98 80133428 02002025 */        or $a0, $s0, $zero
  /* 14EF9C 8013342C 3C018013 */       lui $at, %hi(D_ovl30_80134BE4)
  /* 14EFA0 80133430 AC224BE4 */        sw $v0, %lo(D_ovl30_80134BE4)($at)
  .L80133434:
  /* 14EFA4 80133434 240100DE */     addiu $at, $zero, 0xde
  /* 14EFA8 80133438 1201000A */       beq $s0, $at, .L80133464
  /* 14EFAC 8013343C 02002025 */        or $a0, $s0, $zero
  /* 14EFB0 80133440 3C058013 */       lui $a1, %hi(D_ovl30_80134C10)
  /* 14EFB4 80133444 3C068013 */       lui $a2, %hi(D_ovl30_80134C20)
  /* 14EFB8 80133448 8CC64C20 */        lw $a2, %lo(D_ovl30_80134C20)($a2)
  /* 14EFBC 8013344C 0C04CC6B */       jal func_ovl30_801331AC
  /* 14EFC0 80133450 8CA54C10 */        lw $a1, %lo(D_ovl30_80134C10)($a1)
  /* 14EFC4 80133454 3C048013 */       lui $a0, %hi(D_ovl30_80134C14)
  /* 14EFC8 80133458 8C844C14 */        lw $a0, %lo(D_ovl30_80134C14)($a0)
  /* 14EFCC 8013345C 0C04CE43 */       jal func_ovl30_8013390C
  /* 14EFD0 80133460 02002825 */        or $a1, $s0, $zero
  .L80133464:
  /* 14EFD4 80133464 3C048013 */       lui $a0, %hi(D_ovl30_80134C20)
  /* 14EFD8 80133468 0C04CCB7 */       jal func_ovl30_801332DC
  /* 14EFDC 8013346C 8C844C20 */        lw $a0, %lo(D_ovl30_80134C20)($a0)
  /* 14EFE0 80133470 3C188013 */       lui $t8, %hi(D_ovl30_80134C20)
  /* 14EFE4 80133474 8F184C20 */        lw $t8, %lo(D_ovl30_80134C20)($t8)
  /* 14EFE8 80133478 3C018013 */       lui $at, 0x8013
  /* 14EFEC 8013347C 24190001 */     addiu $t9, $zero, 1
  /* 14EFF0 80133480 17000004 */      bnez $t8, .L80133494
  /* 14EFF4 80133484 00000000 */       nop 
  /* 14EFF8 80133488 3C018013 */       lui $at, %hi(D_ovl30_80134C20)
  /* 14EFFC 8013348C 10000002 */         b .L80133498
  /* 14F000 80133490 AC394C20 */        sw $t9, %lo(D_ovl30_80134C20)($at)
  .L80133494:
  /* 14F004 80133494 AC204C20 */        sw $zero, %lo(D_ovl30_80134C20)($at)
  .L80133498:
  /* 14F008 80133498 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14F00C 8013349C 8FB00018 */        lw $s0, 0x18($sp)
  /* 14F010 801334A0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 14F014 801334A4 03E00008 */        jr $ra
  /* 14F018 801334A8 00000000 */       nop 

glabel func_ovl30_801334AC
  /* 14F01C 801334AC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F020 801334B0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F024 801334B4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F028 801334B8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F02C 801334BC 240F0050 */     addiu $t7, $zero, 0x50
  /* 14F030 801334C0 24180000 */     addiu $t8, $zero, 0
  /* 14F034 801334C4 24190001 */     addiu $t9, $zero, 1
  /* 14F038 801334C8 2408FFFF */     addiu $t0, $zero, -1
  /* 14F03C 801334CC 24090001 */     addiu $t1, $zero, 1
  /* 14F040 801334D0 240A0001 */     addiu $t2, $zero, 1
  /* 14F044 801334D4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F048 801334D8 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F04C 801334DC AFA80020 */        sw $t0, 0x20($sp)
  /* 14F050 801334E0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F054 801334E4 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F058 801334E8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F05C 801334EC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F060 801334F0 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F064 801334F4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F068 801334F8 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F06C 801334FC 24040001 */     addiu $a0, $zero, 1
  /* 14F070 80133500 00002825 */        or $a1, $zero, $zero
  /* 14F074 80133504 24060001 */     addiu $a2, $zero, 1
  /* 14F078 80133508 0C002E4F */       jal func_8000B93C
  /* 14F07C 8013350C 3C078000 */       lui $a3, 0x8000
  /* 14F080 80133510 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F084 80133514 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F088 80133518 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F08C 8013351C 8C430074 */        lw $v1, 0x74($v0)
  /* 14F090 80133520 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F094 80133524 44050000 */      mfc1 $a1, $f0
  /* 14F098 80133528 44060000 */      mfc1 $a2, $f0
  /* 14F09C 8013352C 3C07439B */       lui $a3, 0x439b
  /* 14F0A0 80133530 24640008 */     addiu $a0, $v1, 8
  /* 14F0A4 80133534 0C001C20 */       jal func_80007080
  /* 14F0A8 80133538 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F0AC 8013353C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F0B0 80133540 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F0B4 80133544 03E00008 */        jr $ra
  /* 14F0B8 80133548 00000000 */       nop 

glabel func_ovl30_8013354C
  /* 14F0BC 8013354C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F0C0 80133550 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F0C4 80133554 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F0C8 80133558 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F0CC 8013355C 240F0028 */     addiu $t7, $zero, 0x28
  /* 14F0D0 80133560 24180000 */     addiu $t8, $zero, 0
  /* 14F0D4 80133564 24190040 */     addiu $t9, $zero, 0x40
  /* 14F0D8 80133568 2408FFFF */     addiu $t0, $zero, -1
  /* 14F0DC 8013356C 24090001 */     addiu $t1, $zero, 1
  /* 14F0E0 80133570 240A0001 */     addiu $t2, $zero, 1
  /* 14F0E4 80133574 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F0E8 80133578 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F0EC 8013357C AFA80020 */        sw $t0, 0x20($sp)
  /* 14F0F0 80133580 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F0F4 80133584 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F0F8 80133588 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F0FC 8013358C AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F100 80133590 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F104 80133594 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F108 80133598 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F10C 8013359C 24040001 */     addiu $a0, $zero, 1
  /* 14F110 801335A0 00002825 */        or $a1, $zero, $zero
  /* 14F114 801335A4 24060001 */     addiu $a2, $zero, 1
  /* 14F118 801335A8 0C002E4F */       jal func_8000B93C
  /* 14F11C 801335AC 3C078000 */       lui $a3, 0x8000
  /* 14F120 801335B0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F124 801335B4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F128 801335B8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F12C 801335BC 8C430074 */        lw $v1, 0x74($v0)
  /* 14F130 801335C0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F134 801335C4 44050000 */      mfc1 $a1, $f0
  /* 14F138 801335C8 44060000 */      mfc1 $a2, $f0
  /* 14F13C 801335CC 3C07439B */       lui $a3, 0x439b
  /* 14F140 801335D0 24640008 */     addiu $a0, $v1, 8
  /* 14F144 801335D4 0C001C20 */       jal func_80007080
  /* 14F148 801335D8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F14C 801335DC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F150 801335E0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F154 801335E4 03E00008 */        jr $ra
  /* 14F158 801335E8 00000000 */       nop 

glabel func_ovl30_801335EC
  /* 14F15C 801335EC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F160 801335F0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F164 801335F4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F168 801335F8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F16C 801335FC 240F0046 */     addiu $t7, $zero, 0x46
  /* 14F170 80133600 24180000 */     addiu $t8, $zero, 0
  /* 14F174 80133604 24190080 */     addiu $t9, $zero, 0x80
  /* 14F178 80133608 2408FFFF */     addiu $t0, $zero, -1
  /* 14F17C 8013360C 24090001 */     addiu $t1, $zero, 1
  /* 14F180 80133610 240A0001 */     addiu $t2, $zero, 1
  /* 14F184 80133614 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F188 80133618 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F18C 8013361C AFA80020 */        sw $t0, 0x20($sp)
  /* 14F190 80133620 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F194 80133624 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F198 80133628 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F19C 8013362C AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F1A0 80133630 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F1A4 80133634 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F1A8 80133638 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F1AC 8013363C 24040001 */     addiu $a0, $zero, 1
  /* 14F1B0 80133640 00002825 */        or $a1, $zero, $zero
  /* 14F1B4 80133644 24060001 */     addiu $a2, $zero, 1
  /* 14F1B8 80133648 0C002E4F */       jal func_8000B93C
  /* 14F1BC 8013364C 3C078000 */       lui $a3, 0x8000
  /* 14F1C0 80133650 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F1C4 80133654 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F1C8 80133658 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F1CC 8013365C 8C430074 */        lw $v1, 0x74($v0)
  /* 14F1D0 80133660 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F1D4 80133664 44050000 */      mfc1 $a1, $f0
  /* 14F1D8 80133668 44060000 */      mfc1 $a2, $f0
  /* 14F1DC 8013366C 3C07439B */       lui $a3, 0x439b
  /* 14F1E0 80133670 24640008 */     addiu $a0, $v1, 8
  /* 14F1E4 80133674 0C001C20 */       jal func_80007080
  /* 14F1E8 80133678 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F1EC 8013367C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F1F0 80133680 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F1F4 80133684 03E00008 */        jr $ra
  /* 14F1F8 80133688 00000000 */       nop 

glabel func_ovl30_8013368C
  /* 14F1FC 8013368C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F200 80133690 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F204 80133694 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F208 80133698 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F20C 8013369C 240F001E */     addiu $t7, $zero, 0x1e
  /* 14F210 801336A0 24180000 */     addiu $t8, $zero, 0
  /* 14F214 801336A4 24190010 */     addiu $t9, $zero, 0x10
  /* 14F218 801336A8 2408FFFF */     addiu $t0, $zero, -1
  /* 14F21C 801336AC 24090001 */     addiu $t1, $zero, 1
  /* 14F220 801336B0 240A0001 */     addiu $t2, $zero, 1
  /* 14F224 801336B4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F228 801336B8 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F22C 801336BC AFA80020 */        sw $t0, 0x20($sp)
  /* 14F230 801336C0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F234 801336C4 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F238 801336C8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F23C 801336CC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F240 801336D0 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F244 801336D4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F248 801336D8 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F24C 801336DC 24040001 */     addiu $a0, $zero, 1
  /* 14F250 801336E0 00002825 */        or $a1, $zero, $zero
  /* 14F254 801336E4 24060001 */     addiu $a2, $zero, 1
  /* 14F258 801336E8 0C002E4F */       jal func_8000B93C
  /* 14F25C 801336EC 3C078000 */       lui $a3, 0x8000
  /* 14F260 801336F0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F264 801336F4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F268 801336F8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F26C 801336FC 8C430074 */        lw $v1, 0x74($v0)
  /* 14F270 80133700 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F274 80133704 44050000 */      mfc1 $a1, $f0
  /* 14F278 80133708 44060000 */      mfc1 $a2, $f0
  /* 14F27C 8013370C 3C07439B */       lui $a3, 0x439b
  /* 14F280 80133710 24640008 */     addiu $a0, $v1, 8
  /* 14F284 80133714 0C001C20 */       jal func_80007080
  /* 14F288 80133718 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F28C 8013371C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F290 80133720 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F294 80133724 03E00008 */        jr $ra
  /* 14F298 80133728 00000000 */       nop 

glabel func_ovl30_8013372C
  /* 14F29C 8013372C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F2A0 80133730 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F2A4 80133734 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F2A8 80133738 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F2AC 8013373C 240F003C */     addiu $t7, $zero, 0x3c
  /* 14F2B0 80133740 24180000 */     addiu $t8, $zero, 0
  /* 14F2B4 80133744 24190002 */     addiu $t9, $zero, 2
  /* 14F2B8 80133748 2408FFFF */     addiu $t0, $zero, -1
  /* 14F2BC 8013374C 24090001 */     addiu $t1, $zero, 1
  /* 14F2C0 80133750 240A0001 */     addiu $t2, $zero, 1
  /* 14F2C4 80133754 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F2C8 80133758 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F2CC 8013375C AFA80020 */        sw $t0, 0x20($sp)
  /* 14F2D0 80133760 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F2D4 80133764 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F2D8 80133768 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F2DC 8013376C AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F2E0 80133770 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F2E4 80133774 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F2E8 80133778 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F2EC 8013377C 24040001 */     addiu $a0, $zero, 1
  /* 14F2F0 80133780 00002825 */        or $a1, $zero, $zero
  /* 14F2F4 80133784 24060001 */     addiu $a2, $zero, 1
  /* 14F2F8 80133788 0C002E4F */       jal func_8000B93C
  /* 14F2FC 8013378C 3C078000 */       lui $a3, 0x8000
  /* 14F300 80133790 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F304 80133794 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F308 80133798 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F30C 8013379C 8C430074 */        lw $v1, 0x74($v0)
  /* 14F310 801337A0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F314 801337A4 44050000 */      mfc1 $a1, $f0
  /* 14F318 801337A8 44060000 */      mfc1 $a2, $f0
  /* 14F31C 801337AC 3C07439B */       lui $a3, 0x439b
  /* 14F320 801337B0 24640008 */     addiu $a0, $v1, 8
  /* 14F324 801337B4 0C001C20 */       jal func_80007080
  /* 14F328 801337B8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F32C 801337BC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F330 801337C0 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F334 801337C4 03E00008 */        jr $ra
  /* 14F338 801337C8 00000000 */       nop 

glabel func_ovl30_801337CC
  /* 14F33C 801337CC 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F340 801337D0 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F344 801337D4 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F348 801337D8 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F34C 801337DC 240F0014 */     addiu $t7, $zero, 0x14
  /* 14F350 801337E0 24180000 */     addiu $t8, $zero, 0
  /* 14F354 801337E4 24190004 */     addiu $t9, $zero, 4
  /* 14F358 801337E8 2408FFFF */     addiu $t0, $zero, -1
  /* 14F35C 801337EC 24090001 */     addiu $t1, $zero, 1
  /* 14F360 801337F0 240A0001 */     addiu $t2, $zero, 1
  /* 14F364 801337F4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F368 801337F8 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F36C 801337FC AFA80020 */        sw $t0, 0x20($sp)
  /* 14F370 80133800 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F374 80133804 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F378 80133808 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F37C 8013380C AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F380 80133810 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F384 80133814 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F388 80133818 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F38C 8013381C 24040001 */     addiu $a0, $zero, 1
  /* 14F390 80133820 00002825 */        or $a1, $zero, $zero
  /* 14F394 80133824 24060001 */     addiu $a2, $zero, 1
  /* 14F398 80133828 0C002E4F */       jal func_8000B93C
  /* 14F39C 8013382C 3C078000 */       lui $a3, 0x8000
  /* 14F3A0 80133830 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F3A4 80133834 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F3A8 80133838 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F3AC 8013383C 8C430074 */        lw $v1, 0x74($v0)
  /* 14F3B0 80133840 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F3B4 80133844 44050000 */      mfc1 $a1, $f0
  /* 14F3B8 80133848 44060000 */      mfc1 $a2, $f0
  /* 14F3BC 8013384C 3C07439B */       lui $a3, 0x439b
  /* 14F3C0 80133850 24640008 */     addiu $a0, $v1, 8
  /* 14F3C4 80133854 0C001C20 */       jal func_80007080
  /* 14F3C8 80133858 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F3CC 8013385C 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F3D0 80133860 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F3D4 80133864 03E00008 */        jr $ra
  /* 14F3D8 80133868 00000000 */       nop 

glabel func_ovl30_8013386C
  /* 14F3DC 8013386C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 14F3E0 80133870 3C0E800D */       lui $t6, %hi(func_ovl0_800CD2CC)
  /* 14F3E4 80133874 AFBF003C */        sw $ra, 0x3c($sp)
  /* 14F3E8 80133878 25CED2CC */     addiu $t6, $t6, %lo(func_ovl0_800CD2CC)
  /* 14F3EC 8013387C 240F0032 */     addiu $t7, $zero, 0x32
  /* 14F3F0 80133880 24180000 */     addiu $t8, $zero, 0
  /* 14F3F4 80133884 24190020 */     addiu $t9, $zero, 0x20
  /* 14F3F8 80133888 2408FFFF */     addiu $t0, $zero, -1
  /* 14F3FC 8013388C 24090001 */     addiu $t1, $zero, 1
  /* 14F400 80133890 240A0001 */     addiu $t2, $zero, 1
  /* 14F404 80133894 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F408 80133898 AFA90028 */        sw $t1, 0x28($sp)
  /* 14F40C 8013389C AFA80020 */        sw $t0, 0x20($sp)
  /* 14F410 801338A0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F414 801338A4 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F418 801338A8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F41C 801338AC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F420 801338B0 AFA00024 */        sw $zero, 0x24($sp)
  /* 14F424 801338B4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F428 801338B8 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F42C 801338BC 24040001 */     addiu $a0, $zero, 1
  /* 14F430 801338C0 00002825 */        or $a1, $zero, $zero
  /* 14F434 801338C4 24060001 */     addiu $a2, $zero, 1
  /* 14F438 801338C8 0C002E4F */       jal func_8000B93C
  /* 14F43C 801338CC 3C078000 */       lui $a3, 0x8000
  /* 14F440 801338D0 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F444 801338D4 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F448 801338D8 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F44C 801338DC 8C430074 */        lw $v1, 0x74($v0)
  /* 14F450 801338E0 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F454 801338E4 44050000 */      mfc1 $a1, $f0
  /* 14F458 801338E8 44060000 */      mfc1 $a2, $f0
  /* 14F45C 801338EC 3C07439B */       lui $a3, 0x439b
  /* 14F460 801338F0 24640008 */     addiu $a0, $v1, 8
  /* 14F464 801338F4 0C001C20 */       jal func_80007080
  /* 14F468 801338F8 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F46C 801338FC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 14F470 80133900 27BD0040 */     addiu $sp, $sp, 0x40
  /* 14F474 80133904 03E00008 */        jr $ra
  /* 14F478 80133908 00000000 */       nop 

glabel func_ovl30_8013390C
  /* 14F47C 8013390C 27BDFF90 */     addiu $sp, $sp, -0x70
  /* 14F480 80133910 3C0E8013 */       lui $t6, %hi(D_ovl30_8013487C)
  /* 14F484 80133914 27A30004 */     addiu $v1, $sp, 4
  /* 14F488 80133918 25CE487C */     addiu $t6, $t6, %lo(D_ovl30_8013487C)
  /* 14F48C 8013391C 25C8006C */     addiu $t0, $t6, 0x6c
  /* 14F490 80133920 0060C825 */        or $t9, $v1, $zero
  .L80133924:
  /* 14F494 80133924 8DD80000 */        lw $t8, ($t6) # D_ovl30_8013487C + 0
  /* 14F498 80133928 25CE000C */     addiu $t6, $t6, 0xc
  /* 14F49C 8013392C 2739000C */     addiu $t9, $t9, 0xc
  /* 14F4A0 80133930 AF38FFF4 */        sw $t8, -0xc($t9)
  /* 14F4A4 80133934 8DCFFFF8 */        lw $t7, -8($t6) # D_ovl30_8013487C + -8
  /* 14F4A8 80133938 AF2FFFF8 */        sw $t7, -8($t9)
  /* 14F4AC 8013393C 8DD8FFFC */        lw $t8, -4($t6) # D_ovl30_8013487C + -4
  /* 14F4B0 80133940 15C8FFF8 */       bne $t6, $t0, .L80133924
  /* 14F4B4 80133944 AF38FFFC */        sw $t8, -4($t9)
  /* 14F4B8 80133948 240100DE */     addiu $at, $zero, 0xde
  /* 14F4BC 8013394C 14A10002 */       bne $a1, $at, .L80133958
  /* 14F4C0 80133950 00000000 */       nop 
  /* 14F4C4 80133954 00002825 */        or $a1, $zero, $zero
  .L80133958:
  /* 14F4C8 80133958 3C018013 */       lui $at, %hi(D_ovl30_80134BC0)
  /* 14F4CC 8013395C C4244BC0 */      lwc1 $f4, %lo(D_ovl30_80134BC0)($at)
  /* 14F4D0 80133960 3C018013 */       lui $at, %hi(D_ovl30_80134BC4)
  /* 14F4D4 80133964 44800000 */      mtc1 $zero, $f0
  /* 14F4D8 80133968 E484003C */      swc1 $f4, 0x3c($a0)
  /* 14F4DC 8013396C C4264BC4 */      lwc1 $f6, %lo(D_ovl30_80134BC4)($at)
  /* 14F4E0 80133970 3C018013 */       lui $at, %hi(D_ovl30_80134BC8)
  /* 14F4E4 80133974 00054880 */       sll $t1, $a1, 2
  /* 14F4E8 80133978 E4860040 */      swc1 $f6, 0x40($a0)
  /* 14F4EC 8013397C C4284BC8 */      lwc1 $f8, %lo(D_ovl30_80134BC8)($at)
  /* 14F4F0 80133980 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 14F4F4 80133984 44815000 */      mtc1 $at, $f10 # 1.0 to cop1
  /* 14F4F8 80133988 01254823 */      subu $t1, $t1, $a1
  /* 14F4FC 8013398C 00094880 */       sll $t1, $t1, 2
  /* 14F500 80133990 00691021 */      addu $v0, $v1, $t1
  /* 14F504 80133994 E4800054 */      swc1 $f0, 0x54($a0)
  /* 14F508 80133998 E480005C */      swc1 $f0, 0x5c($a0)
  /* 14F50C 8013399C E4880044 */      swc1 $f8, 0x44($a0)
  /* 14F510 801339A0 E48A0058 */      swc1 $f10, 0x58($a0)
  /* 14F514 801339A4 C4500000 */      lwc1 $f16, ($v0)
  /* 14F518 801339A8 E4900048 */      swc1 $f16, 0x48($a0)
  /* 14F51C 801339AC C4520004 */      lwc1 $f18, 4($v0)
  /* 14F520 801339B0 E492004C */      swc1 $f18, 0x4c($a0)
  /* 14F524 801339B4 C4440008 */      lwc1 $f4, 8($v0)
  /* 14F528 801339B8 27BD0070 */     addiu $sp, $sp, 0x70
  /* 14F52C 801339BC 03E00008 */        jr $ra
  /* 14F530 801339C0 E4840050 */      swc1 $f4, 0x50($a0)

glabel func_ovl30_801339C4
  /* 14F534 801339C4 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 14F538 801339C8 F7BE0040 */      sdc1 $f30, 0x40($sp)
  /* 14F53C 801339CC 3C014220 */       lui $at, (0x42200000 >> 16) # 40.0
  /* 14F540 801339D0 4481F000 */      mtc1 $at, $f30 # 40.0 to cop1
  /* 14F544 801339D4 F7BC0038 */      sdc1 $f28, 0x38($sp)
  /* 14F548 801339D8 3C014334 */       lui $at, (0x43340000 >> 16) # 180.0
  /* 14F54C 801339DC F7BA0030 */      sdc1 $f26, 0x30($sp)
  /* 14F550 801339E0 4481E000 */      mtc1 $at, $f28 # 180.0 to cop1
  /* 14F554 801339E4 AFBF004C */        sw $ra, 0x4c($sp)
  /* 14F558 801339E8 AFB00048 */        sw $s0, 0x48($sp)
  /* 14F55C 801339EC F7B80028 */      sdc1 $f24, 0x28($sp)
  /* 14F560 801339F0 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 14F564 801339F4 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 14F568 801339F8 3C018013 */       lui $at, %hi(D_ovl30_80134BCC)
  /* 14F56C 801339FC 8C900074 */        lw $s0, 0x74($a0)
  /* 14F570 80133A00 C43A4BCC */      lwc1 $f26, %lo(D_ovl30_80134BCC)($at)
  /* 14F574 80133A04 3C0143B4 */       lui $at, (0x43B40000 >> 16) # 360.0
  /* 14F578 80133A08 4480A000 */      mtc1 $zero, $f20
  /* 14F57C 80133A0C 4481B000 */      mtc1 $at, $f22 # 360.0 to cop1
  /* 14F580 80133A10 C618004C */      lwc1 $f24, 0x4c($s0)
  .L80133A14:
  /* 14F584 80133A14 461AA102 */     mul.s $f4, $f20, $f26
  /* 14F588 80133A18 0C00C0FC */       jal __sinf
  /* 14F58C 80133A1C 461C2303 */     div.s $f12, $f4, $f28
  /* 14F590 80133A20 3C014000 */       lui $at, (0x40000000 >> 16) # 2.0
  /* 14F594 80133A24 44815000 */      mtc1 $at, $f10 # 2.0 to cop1
  /* 14F598 80133A28 461E0182 */     mul.s $f6, $f0, $f30
  /* 14F59C 80133A2C 460AA080 */     add.s $f2, $f20, $f10
  /* 14F5A0 80133A30 4602B03C */    c.lt.s $f22, $f2
  /* 14F5A4 80133A34 46183200 */     add.s $f8, $f6, $f24
  /* 14F5A8 80133A38 45000003 */      bc1f .L80133A48
  /* 14F5AC 80133A3C E608004C */      swc1 $f8, 0x4c($s0)
  /* 14F5B0 80133A40 10000002 */         b .L80133A4C
  /* 14F5B4 80133A44 46161501 */     sub.s $f20, $f2, $f22
  .L80133A48:
  /* 14F5B8 80133A48 46001506 */     mov.s $f20, $f2
  .L80133A4C:
  /* 14F5BC 80133A4C 0C002C7A */       jal stop_current_process
  /* 14F5C0 80133A50 24040001 */     addiu $a0, $zero, 1
  /* 14F5C4 80133A54 1000FFEF */         b .L80133A14
  /* 14F5C8 80133A58 00000000 */       nop 
  /* 14F5CC 80133A5C 00000000 */       nop 
# Maybe start of new file
  /* 14F5D0 80133A60 8FBF004C */        lw $ra, 0x4c($sp)
  /* 14F5D4 80133A64 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 14F5D8 80133A68 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 14F5DC 80133A6C D7B80028 */      ldc1 $f24, 0x28($sp)
  /* 14F5E0 80133A70 D7BA0030 */      ldc1 $f26, 0x30($sp)
  /* 14F5E4 80133A74 D7BC0038 */      ldc1 $f28, 0x38($sp)
  /* 14F5E8 80133A78 D7BE0040 */      ldc1 $f30, 0x40($sp)
  /* 14F5EC 80133A7C 8FB00048 */        lw $s0, 0x48($sp)
  /* 14F5F0 80133A80 03E00008 */        jr $ra
  /* 14F5F4 80133A84 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl30_80133A88
  /* 14F5F8 80133A88 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 14F5FC 80133A8C 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 14F600 80133A90 AFBF0044 */        sw $ra, 0x44($sp)
  /* 14F604 80133A94 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 14F608 80133A98 240F0041 */     addiu $t7, $zero, 0x41
  /* 14F60C 80133A9C 24180000 */     addiu $t8, $zero, 0
  /* 14F610 80133AA0 24190008 */     addiu $t9, $zero, 8
  /* 14F614 80133AA4 2408FFFF */     addiu $t0, $zero, -1
  /* 14F618 80133AA8 24090001 */     addiu $t1, $zero, 1
  /* 14F61C 80133AAC 240A0001 */     addiu $t2, $zero, 1
  /* 14F620 80133AB0 AFB00040 */        sw $s0, 0x40($sp)
  /* 14F624 80133AB4 AFAA0030 */        sw $t2, 0x30($sp)
  /* 14F628 80133AB8 AFA90024 */        sw $t1, 0x24($sp)
  /* 14F62C 80133ABC AFA80020 */        sw $t0, 0x20($sp)
  /* 14F630 80133AC0 AFB9001C */        sw $t9, 0x1c($sp)
  /* 14F634 80133AC4 AFB80018 */        sw $t8, 0x18($sp)
  /* 14F638 80133AC8 AFAF0014 */        sw $t7, 0x14($sp)
  /* 14F63C 80133ACC AFAE0010 */        sw $t6, 0x10($sp)
  /* 14F640 80133AD0 AFA00028 */        sw $zero, 0x28($sp)
  /* 14F644 80133AD4 AFA0002C */        sw $zero, 0x2c($sp)
  /* 14F648 80133AD8 AFA00034 */        sw $zero, 0x34($sp)
  /* 14F64C 80133ADC 24040001 */     addiu $a0, $zero, 1
  /* 14F650 80133AE0 00002825 */        or $a1, $zero, $zero
  /* 14F654 80133AE4 24060001 */     addiu $a2, $zero, 1
  /* 14F658 80133AE8 0C002E4F */       jal func_8000B93C
  /* 14F65C 80133AEC 3C078000 */       lui $a3, 0x8000
  /* 14F660 80133AF0 AFA20048 */        sw $v0, 0x48($sp)
  /* 14F664 80133AF4 8C500074 */        lw $s0, 0x74($v0)
  /* 14F668 80133AF8 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 14F66C 80133AFC 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 14F670 80133B00 3C018013 */       lui $at, %hi(D_ovl30_80134C14)
  /* 14F674 80133B04 AC304C14 */        sw $s0, %lo(D_ovl30_80134C14)($at)
  /* 14F678 80133B08 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 14F67C 80133B0C 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 14F680 80133B10 44050000 */      mfc1 $a1, $f0
  /* 14F684 80133B14 44060000 */      mfc1 $a2, $f0
  /* 14F688 80133B18 3C07439B */       lui $a3, 0x439b
  /* 14F68C 80133B1C 26040008 */     addiu $a0, $s0, 8
  /* 14F690 80133B20 0C001C20 */       jal func_80007080
  /* 14F694 80133B24 E7A40010 */      swc1 $f4, 0x10($sp)
  /* 14F698 80133B28 3C014680 */       lui $at, (0x46800000 >> 16) # 16384.0
  /* 14F69C 80133B2C 44813000 */      mtc1 $at, $f6 # 16384.0 to cop1
  /* 14F6A0 80133B30 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14F6A4 80133B34 E606002C */      swc1 $f6, 0x2c($s0)
  /* 14F6A8 80133B38 0C04C90C */       jal func_ovl30_80132430
  /* 14F6AC 80133B3C 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14F6B0 80133B40 02002025 */        or $a0, $s0, $zero
  /* 14F6B4 80133B44 0C04CE43 */       jal func_ovl30_8013390C
  /* 14F6B8 80133B48 00402825 */        or $a1, $v0, $zero
  /* 14F6BC 80133B4C 3C058013 */       lui $a1, %hi(func_ovl30_801339C4)
  /* 14F6C0 80133B50 24A539C4 */     addiu $a1, $a1, %lo(func_ovl30_801339C4)
  /* 14F6C4 80133B54 8FA40048 */        lw $a0, 0x48($sp)
  /* 14F6C8 80133B58 00003025 */        or $a2, $zero, $zero
  /* 14F6CC 80133B5C 0C002062 */       jal omAddGObjCommonProc
  /* 14F6D0 80133B60 24070001 */     addiu $a3, $zero, 1
  /* 14F6D4 80133B64 8FBF0044 */        lw $ra, 0x44($sp)
  /* 14F6D8 80133B68 8FB00040 */        lw $s0, 0x40($sp)
  /* 14F6DC 80133B6C 27BD0050 */     addiu $sp, $sp, 0x50
  /* 14F6E0 80133B70 03E00008 */        jr $ra
  /* 14F6E4 80133B74 00000000 */       nop 

glabel func_ovl30_80133B78
  /* 14F6E8 80133B78 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 14F6EC 80133B7C 3C0F8013 */       lui $t7, %hi(D_ovl30_801348E8)
  /* 14F6F0 80133B80 25EF48E8 */     addiu $t7, $t7, %lo(D_ovl30_801348E8)
  /* 14F6F4 80133B84 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14F6F8 80133B88 AFB10018 */        sw $s1, 0x18($sp)
  /* 14F6FC 80133B8C AFB00014 */        sw $s0, 0x14($sp)
  /* 14F700 80133B90 25E80024 */     addiu $t0, $t7, 0x24
  /* 14F704 80133B94 27AE002C */     addiu $t6, $sp, 0x2c
  .L80133B98:
  /* 14F708 80133B98 8DF90000 */        lw $t9, ($t7) # D_ovl30_801348E8 + 0
  /* 14F70C 80133B9C 25EF000C */     addiu $t7, $t7, 0xc
  /* 14F710 80133BA0 25CE000C */     addiu $t6, $t6, 0xc
  /* 14F714 80133BA4 ADD9FFF4 */        sw $t9, -0xc($t6)
  /* 14F718 80133BA8 8DF8FFF8 */        lw $t8, -8($t7) # D_ovl30_801348E8 + -8
  /* 14F71C 80133BAC ADD8FFF8 */        sw $t8, -8($t6)
  /* 14F720 80133BB0 8DF9FFFC */        lw $t9, -4($t7) # D_ovl30_801348E8 + -4
  /* 14F724 80133BB4 15E8FFF8 */       bne $t7, $t0, .L80133B98
  /* 14F728 80133BB8 ADD9FFFC */        sw $t9, -4($t6)
  /* 14F72C 80133BBC 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14F730 80133BC0 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14F734 80133BC4 24010009 */     addiu $at, $zero, 9
  /* 14F738 80133BC8 3C11800A */       lui $s1, %hi(gSceneData)
  /* 14F73C 80133BCC 1481000D */       bne $a0, $at, .L80133C04
  /* 14F740 80133BD0 26314AD0 */     addiu $s1, $s1, %lo(gSceneData)
  .L80133BD4:
  /* 14F744 80133BD4 0C00628C */       jal lbRandom_GetTimeByteRange
  /* 14F748 80133BD8 24040009 */     addiu $a0, $zero, 9
  /* 14F74C 80133BDC 00408025 */        or $s0, $v0, $zero
  /* 14F750 80133BE0 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14F754 80133BE4 00402025 */        or $a0, $v0, $zero
  /* 14F758 80133BE8 1440FFFA */      bnez $v0, .L80133BD4
  /* 14F75C 80133BEC 00000000 */       nop 
  /* 14F760 80133BF0 9229000F */       lbu $t1, 0xf($s1) # gSceneData + 15
  /* 14F764 80133BF4 1209FFF7 */       beq $s0, $t1, .L80133BD4
  /* 14F768 80133BF8 00000000 */       nop 
  /* 14F76C 80133BFC 10000006 */         b .L80133C18
  /* 14F770 80133C00 A230000F */        sb $s0, 0xf($s1) # gSceneData + 15
  .L80133C04:
  /* 14F774 80133C04 0C04C90C */       jal func_ovl30_80132430
  /* 14F778 80133C08 00000000 */       nop 
  /* 14F77C 80133C0C 3C11800A */       lui $s1, %hi(gSceneData)
  /* 14F780 80133C10 26314AD0 */     addiu $s1, $s1, %lo(gSceneData)
  /* 14F784 80133C14 A222000F */        sb $v0, 0xf($s1) # gSceneData + 15
  .L80133C18:
  /* 14F788 80133C18 3C038013 */       lui $v1, %hi(D_ovl30_80134C18)
  /* 14F78C 80133C1C 8C634C18 */        lw $v1, %lo(D_ovl30_80134C18)($v1)
  /* 14F790 80133C20 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14F794 80133C24 54600007 */      bnel $v1, $zero, .L80133C44
  /* 14F798 80133C28 24010001 */     addiu $at, $zero, 1
  /* 14F79C 80133C2C 0C04C90C */       jal func_ovl30_80132430
  /* 14F7A0 80133C30 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14F7A4 80133C34 A2220041 */        sb $v0, 0x41($s1) # gSceneData + 65
  /* 14F7A8 80133C38 3C038013 */       lui $v1, %hi(D_ovl30_80134C18)
  /* 14F7AC 80133C3C 8C634C18 */        lw $v1, %lo(D_ovl30_80134C18)($v1)
  /* 14F7B0 80133C40 24010001 */     addiu $at, $zero, 1
  .L80133C44:
  /* 14F7B4 80133C44 14610004 */       bne $v1, $at, .L80133C58
  /* 14F7B8 80133C48 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14F7BC 80133C4C 0C04C90C */       jal func_ovl30_80132430
  /* 14F7C0 80133C50 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14F7C4 80133C54 A2220042 */        sb $v0, 0x42($s1) # gSceneData + 66
  .L80133C58:
  /* 14F7C8 80133C58 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14F7CC 80133C5C 8FB00014 */        lw $s0, 0x14($sp)
  /* 14F7D0 80133C60 8FB10018 */        lw $s1, 0x18($sp)
  /* 14F7D4 80133C64 03E00008 */        jr $ra
  /* 14F7D8 80133C68 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_ovl30_80133C6C
  /* 14F7DC 80133C6C 3C018013 */       lui $at, %hi(D_ovl30_80134BE0)
  /* 14F7E0 80133C70 AC204BE0 */        sw $zero, %lo(D_ovl30_80134BE0)($at)
  /* 14F7E4 80133C74 3C018013 */       lui $at, %hi(D_ovl30_80134BE4)
  /* 14F7E8 80133C78 AC204BE4 */        sw $zero, %lo(D_ovl30_80134BE4)($at)
  /* 14F7EC 80133C7C 3C018013 */       lui $at, %hi(D_ovl30_80134BE8)
  /* 14F7F0 80133C80 AC204BE8 */        sw $zero, %lo(D_ovl30_80134BE8)($at)
  /* 14F7F4 80133C84 3C018013 */       lui $at, %hi(D_ovl30_80134BF0)
  /* 14F7F8 80133C88 AC204BF0 */        sw $zero, %lo(D_ovl30_80134BF0)($at)
  /* 14F7FC 80133C8C 3C018013 */       lui $at, %hi(D_ovl30_80134C00)
  /* 14F800 80133C90 AC204C00 */        sw $zero, %lo(D_ovl30_80134C00)($at)
  /* 14F804 80133C94 3C018013 */       lui $at, %hi(D_ovl30_80134BF4)
  /* 14F808 80133C98 AC204BF4 */        sw $zero, %lo(D_ovl30_80134BF4)($at)
  /* 14F80C 80133C9C 3C018013 */       lui $at, %hi(D_ovl30_80134C04)
  /* 14F810 80133CA0 AC204C04 */        sw $zero, %lo(D_ovl30_80134C04)($at)
  /* 14F814 80133CA4 3C018013 */       lui $at, %hi(D_ovl30_80134BF8)
  /* 14F818 80133CA8 AC204BF8 */        sw $zero, %lo(D_ovl30_80134BF8)($at)
  /* 14F81C 80133CAC 3C018013 */       lui $at, %hi(D_ovl30_80134C08)
  /* 14F820 80133CB0 AC204C08 */        sw $zero, %lo(D_ovl30_80134C08)($at)
  /* 14F824 80133CB4 3C018013 */       lui $at, %hi(D_ovl30_80134BFC)
  /* 14F828 80133CB8 AC204BFC */        sw $zero, %lo(D_ovl30_80134BFC)($at)
  /* 14F82C 80133CBC 3C018013 */       lui $at, %hi(D_ovl30_80134C0C)
  /* 14F830 80133CC0 3C03800A */       lui $v1, %hi(gSceneData)
  /* 14F834 80133CC4 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 14F838 80133CC8 AC204C0C */        sw $zero, %lo(D_ovl30_80134C0C)($at)
  /* 14F83C 80133CCC 90620001 */       lbu $v0, 1($v1) # gSceneData + 1
  /* 14F840 80133CD0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14F844 80133CD4 24010010 */     addiu $at, $zero, 0x10
  /* 14F848 80133CD8 1041000B */       beq $v0, $at, .L80133D08
  /* 14F84C 80133CDC AFBF0014 */        sw $ra, 0x14($sp)
  /* 14F850 80133CE0 24010012 */     addiu $at, $zero, 0x12
  /* 14F854 80133CE4 1441000E */       bne $v0, $at, .L80133D20
  /* 14F858 80133CE8 240E0001 */     addiu $t6, $zero, 1
  /* 14F85C 80133CEC 3C018013 */       lui $at, %hi(D_ovl30_80134C18)
  /* 14F860 80133CF0 AC2E4C18 */        sw $t6, %lo(D_ovl30_80134C18)($at)
  /* 14F864 80133CF4 0C04C926 */       jal func_ovl30_80132498
  /* 14F868 80133CF8 90640042 */       lbu $a0, 0x42($v1) # gSceneData + 66
  /* 14F86C 80133CFC 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14F870 80133D00 10000007 */         b .L80133D20
  /* 14F874 80133D04 AC224BD8 */        sw $v0, %lo(D_ovl30_80134BD8)($at)
  .L80133D08:
  /* 14F878 80133D08 3C018013 */       lui $at, %hi(D_ovl30_80134C18)
  /* 14F87C 80133D0C AC204C18 */        sw $zero, %lo(D_ovl30_80134C18)($at)
  /* 14F880 80133D10 0C04C926 */       jal func_ovl30_80132498
  /* 14F884 80133D14 90640041 */       lbu $a0, 0x41($v1)
  /* 14F888 80133D18 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14F88C 80133D1C AC224BD8 */        sw $v0, %lo(D_ovl30_80134BD8)($at)
  .L80133D20:
  /* 14F890 80133D20 3C0F800A */       lui $t7, %hi((gSaveData + 0x457))
  /* 14F894 80133D24 91EF4937 */       lbu $t7, %lo((gSaveData + 0x457))($t7)
  /* 14F898 80133D28 3C018013 */       lui $at, %hi(D_ovl30_80134C1C)
  /* 14F89C 80133D2C 24180001 */     addiu $t8, $zero, 1
  /* 14F8A0 80133D30 A02F4C1C */        sb $t7, %lo(D_ovl30_80134C1C)($at)
  /* 14F8A4 80133D34 3C018013 */       lui $at, %hi(D_ovl30_80134C20)
  /* 14F8A8 80133D38 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14F8AC 80133D3C 3C028013 */       lui $v0, %hi(D_ovl30_80134C24)
  /* 14F8B0 80133D40 AC384C20 */        sw $t8, %lo(D_ovl30_80134C20)($at)
  /* 14F8B4 80133D44 24424C24 */     addiu $v0, $v0, %lo(D_ovl30_80134C24)
  /* 14F8B8 80133D48 AC400000 */        sw $zero, ($v0) # D_ovl30_80134C24 + 0
  /* 14F8BC 80133D4C 3C018013 */       lui $at, %hi(D_ovl30_80134C2C)
  /* 14F8C0 80133D50 24084650 */     addiu $t0, $zero, 0x4650
  /* 14F8C4 80133D54 AC284C2C */        sw $t0, %lo(D_ovl30_80134C2C)($at)
  /* 14F8C8 80133D58 03E00008 */        jr $ra
  /* 14F8CC 80133D5C 27BD0018 */     addiu $sp, $sp, 0x18

glabel func_ovl30_80133D60
  /* 14F8D0 80133D60 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14F8D4 80133D64 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14F8D8 80133D68 0C04CEDE */       jal func_ovl30_80133B78
  /* 14F8DC 80133D6C 00000000 */       nop 
  /* 14F8E0 80133D70 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14F8E4 80133D74 27BD0018 */     addiu $sp, $sp, 0x18
  /* 14F8E8 80133D78 03E00008 */        jr $ra
  /* 14F8EC 80133D7C 00000000 */       nop 

glabel func_ovl30_80133D80
  /* 14F8F0 80133D80 3C038013 */       lui $v1, %hi(D_ovl30_80134C24)
  /* 14F8F4 80133D84 24634C24 */     addiu $v1, $v1, %lo(D_ovl30_80134C24)
  /* 14F8F8 80133D88 8C6E0000 */        lw $t6, ($v1) # D_ovl30_80134C24 + 0
  /* 14F8FC 80133D8C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 14F900 80133D90 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14F904 80133D94 25CF0001 */     addiu $t7, $t6, 1
  /* 14F908 80133D98 29E1000A */      slti $at, $t7, 0xa
  /* 14F90C 80133D9C AFA40028 */        sw $a0, 0x28($sp)
  /* 14F910 80133DA0 14200154 */      bnez $at, .L801342F4
  /* 14F914 80133DA4 AC6F0000 */        sw $t7, ($v1) # D_ovl30_80134C24 + 0
  /* 14F918 80133DA8 3C188013 */       lui $t8, %hi(D_ovl30_80134C2C)
  /* 14F91C 80133DAC 8F184C2C */        lw $t8, %lo(D_ovl30_80134C2C)($t8)
  /* 14F920 80133DB0 3C03800A */       lui $v1, %hi(gSceneData)
  /* 14F924 80133DB4 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 14F928 80133DB8 170F0009 */       bne $t8, $t7, .L80133DE0
  /* 14F92C 80133DBC 24080001 */     addiu $t0, $zero, 1
  /* 14F930 80133DC0 90790000 */       lbu $t9, ($v1) # gSceneData + 0
  /* 14F934 80133DC4 A0680000 */        sb $t0, ($v1) # gSceneData + 0
  /* 14F938 80133DC8 0C04CF58 */       jal func_ovl30_80133D60
  /* 14F93C 80133DCC A0790001 */        sb $t9, 1($v1) # gSceneData + 1
  /* 14F940 80133DD0 0C00171D */       jal func_80005C74
  /* 14F944 80133DD4 00000000 */       nop 
  /* 14F948 80133DD8 10000147 */         b .L801342F8
  /* 14F94C 80133DDC 8FBF0014 */        lw $ra, 0x14($sp)
  .L80133DE0:
  /* 14F950 80133DE0 0C0E42DF */       jal func_ovl1_80390B7C
  /* 14F954 80133DE4 00000000 */       nop 
  /* 14F958 80133DE8 3C038013 */       lui $v1, %hi(D_ovl30_80134C24)
  /* 14F95C 80133DEC 14400005 */      bnez $v0, .L80133E04
  /* 14F960 80133DF0 24634C24 */     addiu $v1, $v1, %lo(D_ovl30_80134C24)
  /* 14F964 80133DF4 8C690000 */        lw $t1, ($v1) # D_ovl30_80134C24 + 0
  /* 14F968 80133DF8 3C018013 */       lui $at, %hi(D_ovl30_80134C2C)
  /* 14F96C 80133DFC 252A4650 */     addiu $t2, $t1, 0x4650
  /* 14F970 80133E00 AC2A4C2C */        sw $t2, %lo(D_ovl30_80134C2C)($at)
  .L80133E04:
  /* 14F974 80133E04 3C038013 */       lui $v1, %hi(D_ovl30_80134C28)
  /* 14F978 80133E08 24634C28 */     addiu $v1, $v1, %lo(D_ovl30_80134C28)
  /* 14F97C 80133E0C 8C620000 */        lw $v0, ($v1) # D_ovl30_80134C28 + 0
  /* 14F980 80133E10 2404FFEC */     addiu $a0, $zero, -0x14
  /* 14F984 80133E14 10400002 */      beqz $v0, .L80133E20
  /* 14F988 80133E18 244BFFFF */     addiu $t3, $v0, -1
  /* 14F98C 80133E1C AC6B0000 */        sw $t3, ($v1) # D_ovl30_80134C28 + 0
  .L80133E20:
  /* 14F990 80133E20 0C0E4281 */       jal func_ovl1_80390A04
  /* 14F994 80133E24 24050014 */     addiu $a1, $zero, 0x14
  /* 14F998 80133E28 1040000E */      beqz $v0, .L80133E64
  /* 14F99C 80133E2C 2404FFEC */     addiu $a0, $zero, -0x14
  /* 14F9A0 80133E30 0C0E42B0 */       jal func_ovl1_80390AC0
  /* 14F9A4 80133E34 24050014 */     addiu $a1, $zero, 0x14
  /* 14F9A8 80133E38 1040000A */      beqz $v0, .L80133E64
  /* 14F9AC 80133E3C 00000000 */       nop 
  /* 14F9B0 80133E40 0C0E4201 */       jal func_ovl1_80390804
  /* 14F9B4 80133E44 24040919 */     addiu $a0, $zero, 0x919
  /* 14F9B8 80133E48 14400006 */      bnez $v0, .L80133E64
  /* 14F9BC 80133E4C 00000000 */       nop 
  /* 14F9C0 80133E50 0C0E4201 */       jal func_ovl1_80390804
  /* 14F9C4 80133E54 24040626 */     addiu $a0, $zero, 0x626
  /* 14F9C8 80133E58 14400002 */      bnez $v0, .L80133E64
  /* 14F9CC 80133E5C 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14F9D0 80133E60 AC204C28 */        sw $zero, %lo(D_ovl30_80134C28)($at)
  .L80133E64:
  /* 14F9D4 80133E64 0C0E41DB */       jal func_ovl1_8039076C
  /* 14F9D8 80133E68 34049000 */       ori $a0, $zero, 0x9000
  /* 14F9DC 80133E6C 10400018 */      beqz $v0, .L80133ED0
  /* 14F9E0 80133E70 00000000 */       nop 
  /* 14F9E4 80133E74 0C04CF58 */       jal func_ovl30_80133D60
  /* 14F9E8 80133E78 00000000 */       nop 
  /* 14F9EC 80133E7C 0C009A70 */       jal func_800269C0
  /* 14F9F0 80133E80 2404009F */     addiu $a0, $zero, 0x9f
  /* 14F9F4 80133E84 3C0C8013 */       lui $t4, %hi(D_ovl30_80134C18)
  /* 14F9F8 80133E88 8D8C4C18 */        lw $t4, %lo(D_ovl30_80134C18)($t4)
  /* 14F9FC 80133E8C 24010001 */     addiu $at, $zero, 1
  /* 14FA00 80133E90 3C03800A */       lui $v1, %hi(gSceneData)
  /* 14FA04 80133E94 15810008 */       bne $t4, $at, .L80133EB8
  /* 14FA08 80133E98 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 14FA0C 80133E9C 3C03800A */       lui $v1, %hi(gSceneData)
  /* 14FA10 80133EA0 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 14FA14 80133EA4 906D0000 */       lbu $t5, ($v1) # gSceneData + 0
  /* 14FA18 80133EA8 240E0036 */     addiu $t6, $zero, 0x36
  /* 14FA1C 80133EAC A06E0000 */        sb $t6, ($v1) # gSceneData + 0
  /* 14FA20 80133EB0 10000005 */         b .L80133EC8
  /* 14FA24 80133EB4 A06D0001 */        sb $t5, 1($v1) # gSceneData + 1
  .L80133EB8:
  /* 14FA28 80133EB8 906F0000 */       lbu $t7, ($v1) # gSceneData + 0
  /* 14FA2C 80133EBC 24180016 */     addiu $t8, $zero, 0x16
  /* 14FA30 80133EC0 A0780000 */        sb $t8, ($v1) # gSceneData + 0
  /* 14FA34 80133EC4 A06F0001 */        sb $t7, 1($v1) # gSceneData + 1
  .L80133EC8:
  /* 14FA38 80133EC8 0C00171D */       jal func_80005C74
  /* 14FA3C 80133ECC 00000000 */       nop 
  .L80133ED0:
  /* 14FA40 80133ED0 0C0E41DB */       jal func_ovl1_8039076C
  /* 14FA44 80133ED4 24044000 */     addiu $a0, $zero, 0x4000
  /* 14FA48 80133ED8 10400014 */      beqz $v0, .L80133F2C
  /* 14FA4C 80133EDC 00000000 */       nop 
  /* 14FA50 80133EE0 0C04CF58 */       jal func_ovl30_80133D60
  /* 14FA54 80133EE4 00000000 */       nop 
  /* 14FA58 80133EE8 3C198013 */       lui $t9, %hi(D_ovl30_80134C18)
  /* 14FA5C 80133EEC 8F394C18 */        lw $t9, %lo(D_ovl30_80134C18)($t9)
  /* 14FA60 80133EF0 3C03800A */       lui $v1, %hi(gSceneData)
  /* 14FA64 80133EF4 24010001 */     addiu $at, $zero, 1
  /* 14FA68 80133EF8 17210006 */       bne $t9, $at, .L80133F14
  /* 14FA6C 80133EFC 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 14FA70 80133F00 90680000 */       lbu $t0, ($v1) # gSceneData + 0
  /* 14FA74 80133F04 24090012 */     addiu $t1, $zero, 0x12
  /* 14FA78 80133F08 A0690000 */        sb $t1, ($v1) # gSceneData + 0
  /* 14FA7C 80133F0C 10000005 */         b .L80133F24
  /* 14FA80 80133F10 A0680001 */        sb $t0, 1($v1) # gSceneData + 1
  .L80133F14:
  /* 14FA84 80133F14 906A0000 */       lbu $t2, ($v1) # gSceneData + 0
  /* 14FA88 80133F18 240B0010 */     addiu $t3, $zero, 0x10
  /* 14FA8C 80133F1C A06B0000 */        sb $t3, ($v1) # gSceneData + 0
  /* 14FA90 80133F20 A06A0001 */        sb $t2, 1($v1) # gSceneData + 1
  .L80133F24:
  /* 14FA94 80133F24 0C00171D */       jal func_80005C74
  /* 14FA98 80133F28 00000000 */       nop 
  .L80133F2C:
  /* 14FA9C 80133F2C 3C0C8013 */       lui $t4, %hi(D_ovl30_80134C28)
  /* 14FAA0 80133F30 8D8C4C28 */        lw $t4, %lo(D_ovl30_80134C28)($t4)
  /* 14FAA4 80133F34 558000F0 */      bnel $t4, $zero, .L801342F8
  /* 14FAA8 80133F38 8FBF0014 */        lw $ra, 0x14($sp)
  /* 14FAAC 80133F3C 0C0E4201 */       jal func_ovl1_80390804
  /* 14FAB0 80133F40 24040808 */     addiu $a0, $zero, 0x808
  /* 14FAB4 80133F44 14400006 */      bnez $v0, .L80133F60
  /* 14FAB8 80133F48 AFA2001C */        sw $v0, 0x1c($sp)
  /* 14FABC 80133F4C 24040014 */     addiu $a0, $zero, 0x14
  /* 14FAC0 80133F50 0C0E4254 */       jal func_ovl1_80390950
  /* 14FAC4 80133F54 24050001 */     addiu $a1, $zero, 1
  /* 14FAC8 80133F58 1040002D */      beqz $v0, .L80134010
  /* 14FACC 80133F5C AFA20020 */        sw $v0, 0x20($sp)
  .L80133F60:
  /* 14FAD0 80133F60 3C038013 */       lui $v1, %hi(D_ovl30_80134BD8)
  /* 14FAD4 80133F64 8C634BD8 */        lw $v1, %lo(D_ovl30_80134BD8)($v1)
  /* 14FAD8 80133F68 28610005 */      slti $at, $v1, 5
  /* 14FADC 80133F6C 5420001A */      bnel $at, $zero, .L80133FD8
  /* 14FAE0 80133F70 8FAF001C */        lw $t7, 0x1c($sp)
  /* 14FAE4 80133F74 0C04C90C */       jal func_ovl30_80132430
  /* 14FAE8 80133F78 2464FFFB */     addiu $a0, $v1, -5
  /* 14FAEC 80133F7C 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14FAF0 80133F80 00402025 */        or $a0, $v0, $zero
  /* 14FAF4 80133F84 54400014 */      bnel $v0, $zero, .L80133FD8
  /* 14FAF8 80133F88 8FAF001C */        lw $t7, 0x1c($sp)
  /* 14FAFC 80133F8C 0C009A70 */       jal func_800269C0
  /* 14FB00 80133F90 240400A4 */     addiu $a0, $zero, 0xa4
  /* 14FB04 80133F94 3C038013 */       lui $v1, %hi(D_ovl30_80134BD8)
  /* 14FB08 80133F98 24634BD8 */     addiu $v1, $v1, %lo(D_ovl30_80134BD8)
  /* 14FB0C 80133F9C 8C6D0000 */        lw $t5, ($v1) # D_ovl30_80134BD8 + 0
  /* 14FB10 80133FA0 25A4FFFB */     addiu $a0, $t5, -5
  /* 14FB14 80133FA4 0C04CA6B */       jal func_ovl30_801329AC
  /* 14FB18 80133FA8 AC640000 */        sw $a0, ($v1) # D_ovl30_80134BD8 + 0
  /* 14FB1C 80133FAC 3C048013 */       lui $a0, %hi(D_ovl30_80134BDC)
  /* 14FB20 80133FB0 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FB24 80133FB4 8CA54BD8 */        lw $a1, %lo(D_ovl30_80134BD8)($a1)
  /* 14FB28 80133FB8 0C04CA96 */       jal func_ovl30_80132A58
  /* 14FB2C 80133FBC 8C844BDC */        lw $a0, %lo(D_ovl30_80134BDC)($a0)
  /* 14FB30 80133FC0 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FB34 80133FC4 0C04C90C */       jal func_ovl30_80132430
  /* 14FB38 80133FC8 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FB3C 80133FCC 0C04CCED */       jal func_ovl30_801333B4
  /* 14FB40 80133FD0 00402025 */        or $a0, $v0, $zero
  /* 14FB44 80133FD4 8FAF001C */        lw $t7, 0x1c($sp)
  .L80133FD8:
  /* 14FB48 80133FD8 8FB90020 */        lw $t9, 0x20($sp)
  /* 14FB4C 80133FDC 240800A0 */     addiu $t0, $zero, 0xa0
  /* 14FB50 80133FE0 11E00005 */      beqz $t7, .L80133FF8
  /* 14FB54 80133FE4 01194823 */      subu $t1, $t0, $t9
  /* 14FB58 80133FE8 2418000C */     addiu $t8, $zero, 0xc
  /* 14FB5C 80133FEC 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FB60 80133FF0 100000C0 */         b .L801342F4
  /* 14FB64 80133FF4 AC384C28 */        sw $t8, %lo(D_ovl30_80134C28)($at)
  .L80133FF8:
  /* 14FB68 80133FF8 24010007 */     addiu $at, $zero, 7
  /* 14FB6C 80133FFC 0121001A */       div $zero, $t1, $at
  /* 14FB70 80134000 00005012 */      mflo $t2
  /* 14FB74 80134004 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FB78 80134008 100000BA */         b .L801342F4
  /* 14FB7C 8013400C AC2A4C28 */        sw $t2, %lo(D_ovl30_80134C28)($at)
  .L80134010:
  /* 14FB80 80134010 0C0E4201 */       jal func_ovl1_80390804
  /* 14FB84 80134014 24040404 */     addiu $a0, $zero, 0x404
  /* 14FB88 80134018 14400006 */      bnez $v0, .L80134034
  /* 14FB8C 8013401C AFA2001C */        sw $v0, 0x1c($sp)
  /* 14FB90 80134020 2404FFEC */     addiu $a0, $zero, -0x14
  /* 14FB94 80134024 0C0E4254 */       jal func_ovl1_80390950
  /* 14FB98 80134028 00002825 */        or $a1, $zero, $zero
  /* 14FB9C 8013402C 1040002C */      beqz $v0, .L801340E0
  /* 14FBA0 80134030 AFA20020 */        sw $v0, 0x20($sp)
  .L80134034:
  /* 14FBA4 80134034 3C038013 */       lui $v1, %hi(D_ovl30_80134BD8)
  /* 14FBA8 80134038 8C634BD8 */        lw $v1, %lo(D_ovl30_80134BD8)($v1)
  /* 14FBAC 8013403C 28610005 */      slti $at, $v1, 5
  /* 14FBB0 80134040 5020001A */      beql $at, $zero, .L801340AC
  /* 14FBB4 80134044 8FAD001C */        lw $t5, 0x1c($sp)
  /* 14FBB8 80134048 0C04C90C */       jal func_ovl30_80132430
  /* 14FBBC 8013404C 24640005 */     addiu $a0, $v1, 5
  /* 14FBC0 80134050 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14FBC4 80134054 00402025 */        or $a0, $v0, $zero
  /* 14FBC8 80134058 54400014 */      bnel $v0, $zero, .L801340AC
  /* 14FBCC 8013405C 8FAD001C */        lw $t5, 0x1c($sp)
  /* 14FBD0 80134060 0C009A70 */       jal func_800269C0
  /* 14FBD4 80134064 240400A4 */     addiu $a0, $zero, 0xa4
  /* 14FBD8 80134068 3C038013 */       lui $v1, %hi(D_ovl30_80134BD8)
  /* 14FBDC 8013406C 24634BD8 */     addiu $v1, $v1, %lo(D_ovl30_80134BD8)
  /* 14FBE0 80134070 8C6B0000 */        lw $t3, ($v1) # D_ovl30_80134BD8 + 0
  /* 14FBE4 80134074 25640005 */     addiu $a0, $t3, 5
  /* 14FBE8 80134078 0C04CA6B */       jal func_ovl30_801329AC
  /* 14FBEC 8013407C AC640000 */        sw $a0, ($v1) # D_ovl30_80134BD8 + 0
  /* 14FBF0 80134080 3C048013 */       lui $a0, %hi(D_ovl30_80134BDC)
  /* 14FBF4 80134084 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FBF8 80134088 8CA54BD8 */        lw $a1, %lo(D_ovl30_80134BD8)($a1)
  /* 14FBFC 8013408C 0C04CA96 */       jal func_ovl30_80132A58
  /* 14FC00 80134090 8C844BDC */        lw $a0, %lo(D_ovl30_80134BDC)($a0)
  /* 14FC04 80134094 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FC08 80134098 0C04C90C */       jal func_ovl30_80132430
  /* 14FC0C 8013409C 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FC10 801340A0 0C04CCED */       jal func_ovl30_801333B4
  /* 14FC14 801340A4 00402025 */        or $a0, $v0, $zero
  /* 14FC18 801340A8 8FAD001C */        lw $t5, 0x1c($sp)
  .L801340AC:
  /* 14FC1C 801340AC 8FAF0020 */        lw $t7, 0x20($sp)
  /* 14FC20 801340B0 24010007 */     addiu $at, $zero, 7
  /* 14FC24 801340B4 11A00005 */      beqz $t5, .L801340CC
  /* 14FC28 801340B8 25F800A0 */     addiu $t8, $t7, 0xa0
  /* 14FC2C 801340BC 240E000C */     addiu $t6, $zero, 0xc
  /* 14FC30 801340C0 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FC34 801340C4 1000008B */         b .L801342F4
  /* 14FC38 801340C8 AC2E4C28 */        sw $t6, %lo(D_ovl30_80134C28)($at)
  .L801340CC:
  /* 14FC3C 801340CC 0301001A */       div $zero, $t8, $at
  /* 14FC40 801340D0 00004012 */      mflo $t0
  /* 14FC44 801340D4 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FC48 801340D8 10000086 */         b .L801342F4
  /* 14FC4C 801340DC AC284C28 */        sw $t0, %lo(D_ovl30_80134C28)($at)
  .L801340E0:
  /* 14FC50 801340E0 0C0E4201 */       jal func_ovl1_80390804
  /* 14FC54 801340E4 24040222 */     addiu $a0, $zero, 0x222
  /* 14FC58 801340E8 14400006 */      bnez $v0, .L80134104
  /* 14FC5C 801340EC AFA2001C */        sw $v0, 0x1c($sp)
  /* 14FC60 801340F0 2404FFEC */     addiu $a0, $zero, -0x14
  /* 14FC64 801340F4 0C0E4227 */       jal func_ovl1_8039089C
  /* 14FC68 801340F8 00002825 */        or $a1, $zero, $zero
  /* 14FC6C 801340FC 10400039 */      beqz $v0, .L801341E4
  /* 14FC70 80134100 AFA20020 */        sw $v0, 0x20($sp)
  .L80134104:
  /* 14FC74 80134104 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FC78 80134108 24A54BD8 */     addiu $a1, $a1, %lo(D_ovl30_80134BD8)
  /* 14FC7C 8013410C 8CA30000 */        lw $v1, ($a1) # D_ovl30_80134BD8 + 0
  /* 14FC80 80134110 24010005 */     addiu $at, $zero, 5
  /* 14FC84 80134114 10600005 */      beqz $v1, .L8013412C
  /* 14FC88 80134118 00000000 */       nop 
  /* 14FC8C 8013411C 10610011 */       beq $v1, $at, .L80134164
  /* 14FC90 80134120 240A0009 */     addiu $t2, $zero, 9
  /* 14FC94 80134124 10000011 */         b .L8013416C
  /* 14FC98 80134128 246BFFFF */     addiu $t3, $v1, -1
  .L8013412C:
  /* 14FC9C 8013412C 0C04C90C */       jal func_ovl30_80132430
  /* 14FCA0 80134130 24040004 */     addiu $a0, $zero, 4
  /* 14FCA4 80134134 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14FCA8 80134138 00402025 */        or $a0, $v0, $zero
  /* 14FCAC 8013413C 10400005 */      beqz $v0, .L80134154
  /* 14FCB0 80134140 24090004 */     addiu $t1, $zero, 4
  /* 14FCB4 80134144 24190003 */     addiu $t9, $zero, 3
  /* 14FCB8 80134148 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14FCBC 8013414C 10000008 */         b .L80134170
  /* 14FCC0 80134150 AC394BD8 */        sw $t9, %lo(D_ovl30_80134BD8)($at)
  .L80134154:
  /* 14FCC4 80134154 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14FCC8 80134158 AC294BD8 */        sw $t1, %lo(D_ovl30_80134BD8)($at)
  /* 14FCCC 8013415C 10000004 */         b .L80134170
  /* 14FCD0 80134160 00000000 */       nop 
  .L80134164:
  /* 14FCD4 80134164 10000002 */         b .L80134170
  /* 14FCD8 80134168 ACAA0000 */        sw $t2, ($a1)
  .L8013416C:
  /* 14FCDC 8013416C ACAB0000 */        sw $t3, ($a1)
  .L80134170:
  /* 14FCE0 80134170 0C009A70 */       jal func_800269C0
  /* 14FCE4 80134174 240400A4 */     addiu $a0, $zero, 0xa4
  /* 14FCE8 80134178 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FCEC 8013417C 0C04CA6B */       jal func_ovl30_801329AC
  /* 14FCF0 80134180 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FCF4 80134184 3C048013 */       lui $a0, %hi(D_ovl30_80134BDC)
  /* 14FCF8 80134188 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FCFC 8013418C 8CA54BD8 */        lw $a1, %lo(D_ovl30_80134BD8)($a1)
  /* 14FD00 80134190 0C04CA96 */       jal func_ovl30_80132A58
  /* 14FD04 80134194 8C844BDC */        lw $a0, %lo(D_ovl30_80134BDC)($a0)
  /* 14FD08 80134198 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FD0C 8013419C 0C04C90C */       jal func_ovl30_80132430
  /* 14FD10 801341A0 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FD14 801341A4 0C04CCED */       jal func_ovl30_801333B4
  /* 14FD18 801341A8 00402025 */        or $a0, $v0, $zero
  /* 14FD1C 801341AC 8FAC001C */        lw $t4, 0x1c($sp)
  /* 14FD20 801341B0 8FAE0020 */        lw $t6, 0x20($sp)
  /* 14FD24 801341B4 24010007 */     addiu $at, $zero, 7
  /* 14FD28 801341B8 11800005 */      beqz $t4, .L801341D0
  /* 14FD2C 801341BC 25CF00A0 */     addiu $t7, $t6, 0xa0
  /* 14FD30 801341C0 240D000C */     addiu $t5, $zero, 0xc
  /* 14FD34 801341C4 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FD38 801341C8 1000004A */         b .L801342F4
  /* 14FD3C 801341CC AC2D4C28 */        sw $t5, %lo(D_ovl30_80134C28)($at)
  .L801341D0:
  /* 14FD40 801341D0 01E1001A */       div $zero, $t7, $at
  /* 14FD44 801341D4 0000C012 */      mflo $t8
  /* 14FD48 801341D8 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FD4C 801341DC 10000045 */         b .L801342F4
  /* 14FD50 801341E0 AC384C28 */        sw $t8, %lo(D_ovl30_80134C28)($at)
  .L801341E4:
  /* 14FD54 801341E4 0C0E4201 */       jal func_ovl1_80390804
  /* 14FD58 801341E8 24040111 */     addiu $a0, $zero, 0x111
  /* 14FD5C 801341EC 14400006 */      bnez $v0, .L80134208
  /* 14FD60 801341F0 AFA2001C */        sw $v0, 0x1c($sp)
  /* 14FD64 801341F4 24040014 */     addiu $a0, $zero, 0x14
  /* 14FD68 801341F8 0C0E4227 */       jal func_ovl1_8039089C
  /* 14FD6C 801341FC 24050001 */     addiu $a1, $zero, 1
  /* 14FD70 80134200 1040003C */      beqz $v0, .L801342F4
  /* 14FD74 80134204 AFA20020 */        sw $v0, 0x20($sp)
  .L80134208:
  /* 14FD78 80134208 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FD7C 8013420C 24A54BD8 */     addiu $a1, $a1, %lo(D_ovl30_80134BD8)
  /* 14FD80 80134210 8CA30000 */        lw $v1, ($a1) # D_ovl30_80134BD8 + 0
  /* 14FD84 80134214 24010003 */     addiu $at, $zero, 3
  /* 14FD88 80134218 10610007 */       beq $v1, $at, .L80134238
  /* 14FD8C 8013421C 24010004 */     addiu $at, $zero, 4
  /* 14FD90 80134220 10610012 */       beq $v1, $at, .L8013426C
  /* 14FD94 80134224 24010009 */     addiu $at, $zero, 9
  /* 14FD98 80134228 10610012 */       beq $v1, $at, .L80134274
  /* 14FD9C 8013422C 24190005 */     addiu $t9, $zero, 5
  /* 14FDA0 80134230 10000012 */         b .L8013427C
  /* 14FDA4 80134234 24690001 */     addiu $t1, $v1, 1
  .L80134238:
  /* 14FDA8 80134238 0C04C90C */       jal func_ovl30_80132430
  /* 14FDAC 8013423C 24040004 */     addiu $a0, $zero, 4
  /* 14FDB0 80134240 0C04C6EB */       jal func_ovl30_80131BAC
  /* 14FDB4 80134244 00402025 */        or $a0, $v0, $zero
  /* 14FDB8 80134248 10400004 */      beqz $v0, .L8013425C
  /* 14FDBC 8013424C 24080004 */     addiu $t0, $zero, 4
  /* 14FDC0 80134250 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14FDC4 80134254 1000000A */         b .L80134280
  /* 14FDC8 80134258 AC204BD8 */        sw $zero, %lo(D_ovl30_80134BD8)($at)
  .L8013425C:
  /* 14FDCC 8013425C 3C018013 */       lui $at, %hi(D_ovl30_80134BD8)
  /* 14FDD0 80134260 AC284BD8 */        sw $t0, %lo(D_ovl30_80134BD8)($at)
  /* 14FDD4 80134264 10000006 */         b .L80134280
  /* 14FDD8 80134268 00000000 */       nop 
  .L8013426C:
  /* 14FDDC 8013426C 10000004 */         b .L80134280
  /* 14FDE0 80134270 ACA00000 */        sw $zero, ($a1)
  .L80134274:
  /* 14FDE4 80134274 10000002 */         b .L80134280
  /* 14FDE8 80134278 ACB90000 */        sw $t9, ($a1)
  .L8013427C:
  /* 14FDEC 8013427C ACA90000 */        sw $t1, ($a1)
  .L80134280:
  /* 14FDF0 80134280 0C009A70 */       jal func_800269C0
  /* 14FDF4 80134284 240400A4 */     addiu $a0, $zero, 0xa4
  /* 14FDF8 80134288 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FDFC 8013428C 0C04CA6B */       jal func_ovl30_801329AC
  /* 14FE00 80134290 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FE04 80134294 3C048013 */       lui $a0, %hi(D_ovl30_80134BDC)
  /* 14FE08 80134298 3C058013 */       lui $a1, %hi(D_ovl30_80134BD8)
  /* 14FE0C 8013429C 8CA54BD8 */        lw $a1, %lo(D_ovl30_80134BD8)($a1)
  /* 14FE10 801342A0 0C04CA96 */       jal func_ovl30_80132A58
  /* 14FE14 801342A4 8C844BDC */        lw $a0, %lo(D_ovl30_80134BDC)($a0)
  /* 14FE18 801342A8 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FE1C 801342AC 0C04C90C */       jal func_ovl30_80132430
  /* 14FE20 801342B0 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FE24 801342B4 0C04CCED */       jal func_ovl30_801333B4
  /* 14FE28 801342B8 00402025 */        or $a0, $v0, $zero
  /* 14FE2C 801342BC 8FAA001C */        lw $t2, 0x1c($sp)
  /* 14FE30 801342C0 8FAC0020 */        lw $t4, 0x20($sp)
  /* 14FE34 801342C4 240D00A0 */     addiu $t5, $zero, 0xa0
  /* 14FE38 801342C8 11400005 */      beqz $t2, .L801342E0
  /* 14FE3C 801342CC 01AC7023 */      subu $t6, $t5, $t4
  /* 14FE40 801342D0 240B000C */     addiu $t3, $zero, 0xc
  /* 14FE44 801342D4 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FE48 801342D8 10000006 */         b .L801342F4
  /* 14FE4C 801342DC AC2B4C28 */        sw $t3, %lo(D_ovl30_80134C28)($at)
  .L801342E0:
  /* 14FE50 801342E0 24010007 */     addiu $at, $zero, 7
  /* 14FE54 801342E4 01C1001A */       div $zero, $t6, $at
  /* 14FE58 801342E8 00007812 */      mflo $t7
  /* 14FE5C 801342EC 3C018013 */       lui $at, %hi(D_ovl30_80134C28)
  /* 14FE60 801342F0 AC2F4C28 */        sw $t7, %lo(D_ovl30_80134C28)($at)
  .L801342F4:
  /* 14FE64 801342F4 8FBF0014 */        lw $ra, 0x14($sp)
  .L801342F8:
  /* 14FE68 801342F8 27BD0028 */     addiu $sp, $sp, 0x28
  /* 14FE6C 801342FC 03E00008 */        jr $ra
  /* 14FE70 80134300 00000000 */       nop 

glabel func_ovl30_80134304
  /* 14FE74 80134304 27BDFFA8 */     addiu $sp, $sp, -0x58
  /* 14FE78 80134308 3C0E001B */       lui $t6, %hi(D_NF_001AC870)
  /* 14FE7C 8013430C 3C0F0000 */       lui $t7, %hi(D_NF_00000854)
  /* 14FE80 80134310 3C188013 */       lui $t8, %hi(D_ovl30_80134C30)
  /* 14FE84 80134314 3C088013 */       lui $t0, %hi(D_ovl30_80134D20)
  /* 14FE88 80134318 AFBF001C */        sw $ra, 0x1c($sp)
  /* 14FE8C 8013431C 25CEC870 */     addiu $t6, $t6, %lo(D_NF_001AC870)
  /* 14FE90 80134320 25EF0854 */     addiu $t7, $t7, %lo(D_NF_00000854)
  /* 14FE94 80134324 27184C30 */     addiu $t8, $t8, %lo(D_ovl30_80134C30)
  /* 14FE98 80134328 2419001E */     addiu $t9, $zero, 0x1e
  /* 14FE9C 8013432C 25084D20 */     addiu $t0, $t0, %lo(D_ovl30_80134D20)
  /* 14FEA0 80134330 2409001E */     addiu $t1, $zero, 0x1e
  /* 14FEA4 80134334 AFAE0030 */        sw $t6, 0x30($sp)
  /* 14FEA8 80134338 AFAF0034 */        sw $t7, 0x34($sp)
  /* 14FEAC 8013433C AFA00038 */        sw $zero, 0x38($sp)
  /* 14FEB0 80134340 AFA0003C */        sw $zero, 0x3c($sp)
  /* 14FEB4 80134344 AFB80040 */        sw $t8, 0x40($sp)
  /* 14FEB8 80134348 AFB90044 */        sw $t9, 0x44($sp)
  /* 14FEBC 8013434C AFA80048 */        sw $t0, 0x48($sp)
  /* 14FEC0 80134350 AFA9004C */        sw $t1, 0x4c($sp)
  /* 14FEC4 80134354 0C0337DE */       jal rldm_initialize
  /* 14FEC8 80134358 27A40030 */     addiu $a0, $sp, 0x30
  /* 14FECC 8013435C 3C048013 */       lui $a0, %hi(D_ovl30_801344D0)
  /* 14FED0 80134360 248444D0 */     addiu $a0, $a0, %lo(D_ovl30_801344D0)
  /* 14FED4 80134364 0C0337BB */       jal rldm_bytes_need_to_load
  /* 14FED8 80134368 24050005 */     addiu $a1, $zero, 5
  /* 14FEDC 8013436C 00402025 */        or $a0, $v0, $zero
  /* 14FEE0 80134370 0C001260 */       jal hal_alloc
  /* 14FEE4 80134374 24050010 */     addiu $a1, $zero, 0x10
  /* 14FEE8 80134378 3C048013 */       lui $a0, %hi(D_ovl30_801344D0)
  /* 14FEEC 8013437C 3C068013 */       lui $a2, %hi(D_ovl30_80134E10)
  /* 14FEF0 80134380 24C64E10 */     addiu $a2, $a2, %lo(D_ovl30_80134E10)
  /* 14FEF4 80134384 248444D0 */     addiu $a0, $a0, %lo(D_ovl30_801344D0)
  /* 14FEF8 80134388 24050005 */     addiu $a1, $zero, 5
  /* 14FEFC 8013438C 0C033781 */       jal rldm_load_files_into
  /* 14FF00 80134390 00403825 */        or $a3, $v0, $zero
  /* 14FF04 80134394 0C04C6C0 */       jal func_ovl30_80131B00
  /* 14FF08 80134398 00000000 */       nop 
  /* 14FF0C 8013439C 3C058013 */       lui $a1, %hi(func_ovl30_80133D80)
  /* 14FF10 801343A0 24A53D80 */     addiu $a1, $a1, %lo(func_ovl30_80133D80)
  /* 14FF14 801343A4 00002025 */        or $a0, $zero, $zero
  /* 14FF18 801343A8 00003025 */        or $a2, $zero, $zero
  /* 14FF1C 801343AC 0C00265A */       jal omMakeGObjCommon
  /* 14FF20 801343B0 3C078000 */       lui $a3, 0x8000
  /* 14FF24 801343B4 24040001 */     addiu $a0, $zero, 1
  /* 14FF28 801343B8 3C058000 */       lui $a1, 0x8000
  /* 14FF2C 801343BC 24060064 */     addiu $a2, $zero, 0x64
  /* 14FF30 801343C0 24070001 */     addiu $a3, $zero, 1
  /* 14FF34 801343C4 0C002E7F */       jal func_8000B9FC
  /* 14FF38 801343C8 AFA00010 */        sw $zero, 0x10($sp)
  /* 14FF3C 801343CC 0C04CF1B */       jal func_ovl30_80133C6C
  /* 14FF40 801343D0 00000000 */       nop 
  /* 14FF44 801343D4 0C04CD2B */       jal func_ovl30_801334AC
  /* 14FF48 801343D8 00000000 */       nop 
  /* 14FF4C 801343DC 0C04CDA3 */       jal func_ovl30_8013368C
  /* 14FF50 801343E0 00000000 */       nop 
  /* 14FF54 801343E4 0C04CDCB */       jal func_ovl30_8013372C
  /* 14FF58 801343E8 00000000 */       nop 
  /* 14FF5C 801343EC 0C04CDF3 */       jal func_ovl30_801337CC
  /* 14FF60 801343F0 00000000 */       nop 
  /* 14FF64 801343F4 0C04CE1B */       jal func_ovl30_8013386C
  /* 14FF68 801343F8 00000000 */       nop 
  /* 14FF6C 801343FC 0C04CEA2 */       jal func_ovl30_80133A88
  /* 14FF70 80134400 00000000 */       nop 
  /* 14FF74 80134404 0C04CD53 */       jal func_ovl30_8013354C
  /* 14FF78 80134408 00000000 */       nop 
  /* 14FF7C 8013440C 0C04CD7B */       jal func_ovl30_801335EC
  /* 14FF80 80134410 00000000 */       nop 
  /* 14FF84 80134414 0C04C7E9 */       jal func_ovl30_80131FA4
  /* 14FF88 80134418 00000000 */       nop 
  /* 14FF8C 8013441C 0C04C812 */       jal func_ovl30_80132048
  /* 14FF90 80134420 00000000 */       nop 
  /* 14FF94 80134424 0C04C8A2 */       jal func_ovl30_80132288
  /* 14FF98 80134428 00000000 */       nop 
  /* 14FF9C 8013442C 0C04C94A */       jal func_ovl30_80132528
  /* 14FFA0 80134430 00000000 */       nop 
  /* 14FFA4 80134434 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FFA8 80134438 0C04CA6B */       jal func_ovl30_801329AC
  /* 14FFAC 8013443C 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FFB0 80134440 0C04CAB7 */       jal func_ovl30_80132ADC
  /* 14FFB4 80134444 00000000 */       nop 
  /* 14FFB8 80134448 3C048013 */       lui $a0, %hi(D_ovl30_80134BD8)
  /* 14FFBC 8013444C 0C04C90C */       jal func_ovl30_80132430
  /* 14FFC0 80134450 8C844BD8 */        lw $a0, %lo(D_ovl30_80134BD8)($a0)
  /* 14FFC4 80134454 0C04CCED */       jal func_ovl30_801333B4
  /* 14FFC8 80134458 00402025 */        or $a0, $v0, $zero
  /* 14FFCC 8013445C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 14FFD0 80134460 27BD0058 */     addiu $sp, $sp, 0x58
  /* 14FFD4 80134464 03E00008 */        jr $ra
  /* 14FFD8 80134468 00000000 */       nop 

glabel stage_select_entry
  /* 14FFDC 8013446C 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 14FFE0 80134470 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 14FFE4 80134474 3C048013 */       lui $a0, %hi(D_ovl30_8013490C)
  /* 14FFE8 80134478 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 14FFEC 8013447C 2484490C */     addiu $a0, $a0, %lo(D_ovl30_8013490C)
  /* 14FFF0 80134480 AFBF0014 */        sw $ra, 0x14($sp)
  /* 14FFF4 80134484 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 14FFF8 80134488 0C001C09 */       jal func_80007024
  /* 14FFFC 8013448C AC8F000C */        sw $t7, 0xc($a0) # D_ovl30_8013490C + 12
  /* 150000 80134490 3C188039 */       lui $t8, %hi(func_ovl1_803903E0)
  /* 150004 80134494 3C198013 */       lui $t9, %hi(D_NF_80134E30)
  /* 150008 80134498 3C048013 */       lui $a0, %hi(D_ovl30_80134928)
  /* 15000C 8013449C 27394E30 */     addiu $t9, $t9, %lo(D_NF_80134E30)
  /* 150010 801344A0 271803E0 */     addiu $t8, $t8, %lo(func_ovl1_803903E0)
  /* 150014 801344A4 24844928 */     addiu $a0, $a0, %lo(D_ovl30_80134928)
  /* 150018 801344A8 03194023 */      subu $t0, $t8, $t9
  /* 15001C 801344AC 0C0289A6 */       jal func_800A2698
  /* 150020 801344B0 AC880010 */        sw $t0, 0x10($a0) # D_ovl30_80134928 + 16
  /* 150024 801344B4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 150028 801344B8 27BD0018 */     addiu $sp, $sp, 0x18
  /* 15002C 801344BC 03E00008 */        jr $ra
  /* 150030 801344C0 00000000 */       nop 

  /* 150034 801344C4 00000000 */       nop 
  /* 150038 801344C8 00000000 */       nop 
  /* 15003C 801344CC 00000000 */       nop 

# Likely start of new file
#glabel D_ovl30_801344D0   # Routine parsed as data
#  /* 150040 801344D0 00000014 */     dsllv $zero, $zero, $zero
#  /* 150044 801344D4 00000015 */      dlsa $zero, $zero, $zero, 1
#  /* 150048 801344D8 0000001E */      ddiv $zero, $zero, $zero
#  /* 15004C 801344DC 00000021 */      addu $zero, $zero, $zero
#  /* 150050 801344E0 0000001A */       div $zero, $zero, $zero
#glabel D_ovl30_801344E4   # Routine parsed as data
#  /* 150054 801344E4 00000103 */       sra $zero, $zero, 4
#  /* 150058 801344E8 00000014 */     dsllv $zero, $zero, $zero
