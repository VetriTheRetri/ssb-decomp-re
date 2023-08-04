.section .text
glabel func_8000F120
  /* 00FD20 8000F120 27BDFF68 */     addiu $sp, $sp, -0x98
  /* 00FD24 8000F124 AFB60030 */        sw $s6, 0x30($sp)
  /* 00FD28 8000F128 AFB30024 */        sw $s3, 0x24($sp)
  /* 00FD2C 8000F12C AFB20020 */        sw $s2, 0x20($sp)
  /* 00FD30 8000F130 00A09025 */        or $s2, $a1, $zero
  /* 00FD34 8000F134 00C09825 */        or $s3, $a2, $zero
  /* 00FD38 8000F138 0080B025 */        or $s6, $a0, $zero
  /* 00FD3C 8000F13C AFBF0034 */        sw $ra, 0x34($sp)
  /* 00FD40 8000F140 AFB5002C */        sw $s5, 0x2c($sp)
  /* 00FD44 8000F144 AFB40028 */        sw $s4, 0x28($sp)
  /* 00FD48 8000F148 AFB1001C */        sw $s1, 0x1c($sp)
  /* 00FD4C 8000F14C AFB00018 */        sw $s0, 0x18($sp)
  /* 00FD50 8000F150 AFA00044 */        sw $zero, 0x44($sp)
  /* 00FD54 8000F154 AFA00048 */        sw $zero, 0x48($sp)
  /* 00FD58 8000F158 27A2004C */     addiu $v0, $sp, 0x4c
  /* 00FD5C 8000F15C 27A3008C */     addiu $v1, $sp, 0x8c
  .L8000F160:
  /* 00FD60 8000F160 24420010 */     addiu $v0, $v0, 0x10
  /* 00FD64 8000F164 AC40FFF4 */        sw $zero, -0xc($v0)
  /* 00FD68 8000F168 AC40FFF8 */        sw $zero, -8($v0)
  /* 00FD6C 8000F16C AC40FFFC */        sw $zero, -4($v0)
  /* 00FD70 8000F170 1443FFFB */       bne $v0, $v1, .L8000F160
  /* 00FD74 8000F174 AC40FFF0 */        sw $zero, -0x10($v0)
  
  /* 00FD78 8000F178 8E430000 */        lw $v1, ($s2)
  /* 00FD7C 8000F17C 24150012 */     addiu $s5, $zero, 0x12
  /* 00FD80 8000F180 27B40044 */     addiu $s4, $sp, 0x44
  /* 00FD84 8000F184 12A30053 */       beq $s5, $v1, .L8000F2D4
  /* 00FD88 8000F188 30620FFF */      andi $v0, $v1, 0xfff
  .L8000F18C:
  /* 00FD8C 8000F18C 10400008 */      beqz $v0, .L8000F1B0
  /* 00FD90 8000F190 00027080 */       sll $t6, $v0, 2
  /* 00FD94 8000F194 028E8821 */      addu $s1, $s4, $t6
  /* 00FD98 8000F198 8E24FFFC */        lw $a0, -4($s1)
  /* 00FD9C 8000F19C 0C0024FD */       jal func_800093F4
  /* 00FDA0 8000F1A0 8E450004 */        lw $a1, 4($s2)
  /* 00FDA4 8000F1A4 AE220000 */        sw $v0, ($s1)
  /* 00FDA8 8000F1A8 10000006 */         b .L8000F1C4
  /* 00FDAC 8000F1AC 00408025 */        or $s0, $v0, $zero
  .L8000F1B0:
  /* 00FDB0 8000F1B0 02C02025 */        or $a0, $s6, $zero
  /* 00FDB4 8000F1B4 0C0024B4 */       jal func_800092D0
  /* 00FDB8 8000F1B8 8E450004 */        lw $a1, 4($s2)
  /* 00FDBC 8000F1BC AFA20044 */        sw $v0, 0x44($sp)
  /* 00FDC0 8000F1C0 00408025 */        or $s0, $v0, $zero
  .L8000F1C4:
  /* 00FDC4 8000F1C4 8E430000 */        lw $v1, ($s2)
  /* 00FDC8 8000F1C8 02002025 */        or $a0, $s0, $zero
  /* 00FDCC 8000F1CC 24050012 */     addiu $a1, $zero, 0x12
  /* 00FDD0 8000F1D0 306FF000 */      andi $t7, $v1, 0xf000
  /* 00FDD4 8000F1D4 51E00005 */      beql $t7, $zero, .L8000F1EC
  /* 00FDD8 8000F1D8 30788000 */      andi $t8, $v1, 0x8000
  /* 00FDDC 8000F1DC 0C002330 */       jal func_80008CC0
  /* 00FDE0 8000F1E0 00003025 */        or $a2, $zero, $zero
  /* 00FDE4 8000F1E4 8E430000 */        lw $v1, ($s2)
  /* 00FDE8 8000F1E8 30788000 */      andi $t8, $v1, 0x8000
  .L8000F1EC:
  /* 00FDEC 8000F1EC 13000007 */      beqz $t8, .L8000F20C
  /* 00FDF0 8000F1F0 30794000 */      andi $t9, $v1, 0x4000
  /* 00FDF4 8000F1F4 02002025 */        or $a0, $s0, $zero
  /* 00FDF8 8000F1F8 2405002C */     addiu $a1, $zero, 0x2c
  /* 00FDFC 8000F1FC 0C002330 */       jal func_80008CC0
  /* 00FE00 8000F200 00003025 */        or $a2, $zero, $zero
  /* 00FE04 8000F204 1000001B */         b .L8000F274
  /* 00FE08 8000F208 8E4B0008 */        lw $t3, 8($s2)
  .L8000F20C:
  /* 00FE0C 8000F20C 13200007 */      beqz $t9, .L8000F22C
  /* 00FE10 8000F210 30682000 */      andi $t0, $v1, 0x2000
  /* 00FE14 8000F214 02002025 */        or $a0, $s0, $zero
  /* 00FE18 8000F218 2405002E */     addiu $a1, $zero, 0x2e
  /* 00FE1C 8000F21C 0C002330 */       jal func_80008CC0
  /* 00FE20 8000F220 00003025 */        or $a2, $zero, $zero
  /* 00FE24 8000F224 10000013 */         b .L8000F274
  /* 00FE28 8000F228 8E4B0008 */        lw $t3, 8($s2)
  .L8000F22C:
  /* 00FE2C 8000F22C 11000007 */      beqz $t0, .L8000F24C
  /* 00FE30 8000F230 30691000 */      andi $t1, $v1, 0x1000
  /* 00FE34 8000F234 02002025 */        or $a0, $s0, $zero
  /* 00FE38 8000F238 24050030 */     addiu $a1, $zero, 0x30
  /* 00FE3C 8000F23C 0C002330 */       jal func_80008CC0
  /* 00FE40 8000F240 00003025 */        or $a2, $zero, $zero
  /* 00FE44 8000F244 1000000B */         b .L8000F274
  /* 00FE48 8000F248 8E4B0008 */        lw $t3, 8($s2)
  .L8000F24C:
  /* 00FE4C 8000F24C 11200006 */      beqz $t1, .L8000F268
  /* 00FE50 8000F250 02002025 */        or $a0, $s0, $zero
  /* 00FE54 8000F254 24050032 */     addiu $a1, $zero, 0x32
  /* 00FE58 8000F258 0C002330 */       jal func_80008CC0
  /* 00FE5C 8000F25C 00003025 */        or $a2, $zero, $zero
  /* 00FE60 8000F260 10000004 */         b .L8000F274
  /* 00FE64 8000F264 8E4B0008 */        lw $t3, 8($s2)
  .L8000F268:
  /* 00FE68 8000F268 0C003C16 */       jal func_8000F058
  /* 00FE6C 8000F26C 02002025 */        or $a0, $s0, $zero
  /* 00FE70 8000F270 8E4B0008 */        lw $t3, 8($s2)
  .L8000F274:
  /* 00FE74 8000F274 AE0B001C */        sw $t3, 0x1c($s0)
  /* 00FE78 8000F278 8E4A000C */        lw $t2, 0xc($s2)
  /* 00FE7C 8000F27C AE0A0020 */        sw $t2, 0x20($s0)
  /* 00FE80 8000F280 8E4B0010 */        lw $t3, 0x10($s2)
  /* 00FE84 8000F284 AE0B0024 */        sw $t3, 0x24($s0)
  /* 00FE88 8000F288 8E4D0014 */        lw $t5, 0x14($s2)
  /* 00FE8C 8000F28C AE0D0030 */        sw $t5, 0x30($s0)
  /* 00FE90 8000F290 8E4C0018 */        lw $t4, 0x18($s2)
  /* 00FE94 8000F294 AE0C0034 */        sw $t4, 0x34($s0)
  /* 00FE98 8000F298 8E4D001C */        lw $t5, 0x1c($s2)
  /* 00FE9C 8000F29C AE0D0038 */        sw $t5, 0x38($s0)
  /* 00FEA0 8000F2A0 8E4F0020 */        lw $t7, 0x20($s2)
  /* 00FEA4 8000F2A4 AE0F0040 */        sw $t7, 0x40($s0)
  /* 00FEA8 8000F2A8 8E4E0024 */        lw $t6, 0x24($s2)
  /* 00FEAC 8000F2AC AE0E0044 */        sw $t6, 0x44($s0)
  /* 00FEB0 8000F2B0 8E4F0028 */        lw $t7, 0x28($s2)
  /* 00FEB4 8000F2B4 12600003 */      beqz $s3, .L8000F2C4
  /* 00FEB8 8000F2B8 AE0F0048 */        sw $t7, 0x48($s0)
  /* 00FEBC 8000F2BC AE700000 */        sw $s0, ($s3)
  /* 00FEC0 8000F2C0 26730004 */     addiu $s3, $s3, 4
  .L8000F2C4:
  /* 00FEC4 8000F2C4 8E43002C */        lw $v1, 0x2c($s2)
  /* 00FEC8 8000F2C8 2652002C */     addiu $s2, $s2, 0x2c
  /* 00FECC 8000F2CC 56A3FFAF */      bnel $s5, $v1, .L8000F18C
  /* 00FED0 8000F2D0 30620FFF */      andi $v0, $v1, 0xfff
  .L8000F2D4:
  /* 00FED4 8000F2D4 8FBF0034 */        lw $ra, 0x34($sp)
  /* 00FED8 8000F2D8 8FB00018 */        lw $s0, 0x18($sp)
  /* 00FEDC 8000F2DC 8FB1001C */        lw $s1, 0x1c($sp)
  /* 00FEE0 8000F2E0 8FB20020 */        lw $s2, 0x20($sp)
  /* 00FEE4 8000F2E4 8FB30024 */        lw $s3, 0x24($sp)
  /* 00FEE8 8000F2E8 8FB40028 */        lw $s4, 0x28($sp)
  /* 00FEEC 8000F2EC 8FB5002C */        lw $s5, 0x2c($sp)
  /* 00FEF0 8000F2F0 8FB60030 */        lw $s6, 0x30($sp)
  /* 00FEF4 8000F2F4 03E00008 */        jr $ra
  /* 00FEF8 8000F2F8 27BD0098 */     addiu $sp, $sp, 0x98

