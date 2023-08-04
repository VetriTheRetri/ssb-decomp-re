.section .rodata

glabel jtbl_8003DD80
  /* 3D980 03E980 8003DD80 */  .word L8000AE74
  /* 3D984 03E984 8003DD84 */  .word L8000AE58
  /* 3D988 03E988 8003DD88 */  .word L8000AE44
  /* 3D98C 03E98C 8003DD8C */  .word L8000AE30
  /* 3D990 03E990 8003DD90 */  .word L8000AE20
  #.incbin "system.raw.bin", 0x3D994, 0xC
  .byte 0, 0, 0


.section .text
glabel func_8000ADB0
  /* 00B9B0 8000ADB0 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 00B9B4 8000ADB4 AFB40024 */        sw $s4, 0x24($sp)
  /* 00B9B8 8000ADB8 3C148004 */       lui $s4, %hi(D_80046A54)
  /* 00B9BC 8000ADBC 26946A54 */     addiu $s4, $s4, %lo(D_80046A54)
  /* 00B9C0 8000ADC0 AFB00014 */        sw $s0, 0x14($sp)
  /* 00B9C4 8000ADC4 8E900000 */        lw $s0, ($s4) # D_80046A54 + 0
  /* 00B9C8 8000ADC8 AFBF002C */        sw $ra, 0x2c($sp)
  /* 00B9CC 8000ADCC AFB50028 */        sw $s5, 0x28($sp)
  /* 00B9D0 8000ADD0 AFB30020 */        sw $s3, 0x20($sp)
  /* 00B9D4 8000ADD4 AFB2001C */        sw $s2, 0x1c($sp)
  /* 00B9D8 8000ADD8 AFB10018 */        sw $s1, 0x18($sp)
  /* 00B9DC 8000ADDC 8E030070 */        lw $v1, 0x70($s0)
  /* 00B9E0 8000ADE0 00809825 */        or $s3, $a0, $zero
  /* 00B9E4 8000ADE4 00009025 */        or $s2, $zero, $zero
  /* 00B9E8 8000ADE8 18600036 */      blez $v1, .L8000AEC4
  /* 00B9EC 8000ADEC 26100048 */     addiu $s0, $s0, 0x48
  /* 00B9F0 8000ADF0 02008825 */        or $s1, $s0, $zero
  /* 00B9F4 8000ADF4 2415FFFE */     addiu $s5, $zero, -2
  .L8000ADF8:
  /* 00B9F8 8000ADF8 8E2E0004 */        lw $t6, 4($s1)
  /* 00B9FC 8000ADFC 25CF0005 */     addiu $t7, $t6, 5
  /* 00BA00 8000AE00 2DE10005 */     sltiu $at, $t7, 5
  /* 00BA04 8000AE04 10200022 */      beqz $at, .L8000AE90
  /* 00BA08 8000AE08 000F7880 */       sll $t7, $t7, 2
  /* 00BA0C 8000AE0C 3C018004 */       lui $at, %hi(jtbl_8003DD80)
  /* 00BA10 8000AE10 002F0821 */      addu $at, $at, $t7
  /* 00BA14 8000AE14 8C2FDD80 */        lw $t7, %lo(jtbl_8003DD80)($at)
  /* 00BA18 8000AE18 01E00008 */        jr $t7
  /* 00BA1C 8000AE1C 00000000 */       nop 
  glabel L8000AE20 # 4
  /* 00BA20 8000AE20 0C0026A1 */       jal omEjectGObjCommon
  /* 00BA24 8000AE24 00002025 */        or $a0, $zero, $zero
  /* 00BA28 8000AE28 10000028 */         b .L8000AECC
  /* 00BA2C 8000AE2C 24020001 */     addiu $v0, $zero, 1
  glabel L8000AE30 #3
  /* 00BA30 8000AE30 0C002CA1 */       jal func_8000B284
  /* 00BA34 8000AE34 00002025 */        or $a0, $zero, $zero
  /* 00BA38 8000AE38 8E030028 */        lw $v1, 0x28($s0)
  /* 00BA3C 8000AE3C 1000001D */         b .L8000AEB4
  /* 00BA40 8000AE40 000320C0 */       sll $a0, $v1, 3
  glabel L8000AE44 #2
  /* 00BA44 8000AE44 0C002CAE */       jal func_8000B2B8
  /* 00BA48 8000AE48 00002025 */        or $a0, $zero, $zero
  /* 00BA4C 8000AE4C 8E030028 */        lw $v1, 0x28($s0)
  /* 00BA50 8000AE50 10000018 */         b .L8000AEB4
  /* 00BA54 8000AE54 000320C0 */       sll $a0, $v1, 3
  glabel L8000AE58 #1
  /* 00BA58 8000AE58 8E820000 */        lw $v0, ($s4) # D_80046A54 + 0
  /* 00BA5C 8000AE5C 8C58007C */        lw $t8, 0x7c($v0)
  /* 00BA60 8000AE60 37190001 */       ori $t9, $t8, 1
  /* 00BA64 8000AE64 AC59007C */        sw $t9, 0x7c($v0)
  /* 00BA68 8000AE68 8E030028 */        lw $v1, 0x28($s0)
  /* 00BA6C 8000AE6C 10000011 */         b .L8000AEB4
  /* 00BA70 8000AE70 000320C0 */       sll $a0, $v1, 3
  glabel L8000AE74 #0
  /* 00BA74 8000AE74 8E820000 */        lw $v0, ($s4) # D_80046A54 + 0
  /* 00BA78 8000AE78 8C48007C */        lw $t0, 0x7c($v0)
  /* 00BA7C 8000AE7C 01154824 */       and $t1, $t0, $s5
  /* 00BA80 8000AE80 AC49007C */        sw $t1, 0x7c($v0)
  /* 00BA84 8000AE84 8E030028 */        lw $v1, 0x28($s0)
  /* 00BA88 8000AE88 1000000A */         b .L8000AEB4
  /* 00BA8C 8000AE8C 000320C0 */       sll $a0, $v1, 3
  .L8000AE90: # end / default?
  /* 00BA90 8000AE90 52600008 */      beql $s3, $zero, .L8000AEB4
  /* 00BA94 8000AE94 000320C0 */       sll $a0, $v1, 3
  /* 00BA98 8000AE98 8E240000 */        lw $a0, ($s1)
  /* 00BA9C 8000AE9C AFA40000 */        sw $a0, ($sp)
  /* 00BAA0 8000AEA0 8E250004 */        lw $a1, 4($s1)
  /* 00BAA4 8000AEA4 0260F809 */      jalr $s3
  /* 00BAA8 8000AEA8 AFA50004 */        sw $a1, 4($sp)
  /* 00BAAC 8000AEAC 8E030028 */        lw $v1, 0x28($s0)
  /* 00BAB0 8000AEB0 000320C0 */       sll $a0, $v1, 3
  .L8000AEB4:
  /* 00BAB4 8000AEB4 26520008 */     addiu $s2, $s2, 8
  /* 00BAB8 8000AEB8 0244082A */       slt $at, $s2, $a0
  /* 00BABC 8000AEBC 1420FFCE */      bnez $at, .L8000ADF8
  /* 00BAC0 8000AEC0 26310008 */     addiu $s1, $s1, 8
  .L8000AEC4:
  /* 00BAC4 8000AEC4 AE000028 */        sw $zero, 0x28($s0)
  /* 00BAC8 8000AEC8 00001025 */        or $v0, $zero, $zero
  .L8000AECC:
  /* 00BACC 8000AECC 8FBF002C */        lw $ra, 0x2c($sp)
  /* 00BAD0 8000AED0 8FB00014 */        lw $s0, 0x14($sp)
  /* 00BAD4 8000AED4 8FB10018 */        lw $s1, 0x18($sp)
  /* 00BAD8 8000AED8 8FB2001C */        lw $s2, 0x1c($sp)
  /* 00BADC 8000AEDC 8FB30020 */        lw $s3, 0x20($sp)
  /* 00BAE0 8000AEE0 8FB40024 */        lw $s4, 0x24($sp)
  /* 00BAE4 8000AEE4 8FB50028 */        lw $s5, 0x28($sp)
  /* 00BAE8 8000AEE8 03E00008 */        jr $ra
  /* 00BAEC 8000AEEC 27BD0030 */     addiu $sp, $sp, 0x30
