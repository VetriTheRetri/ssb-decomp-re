.section .text
glabel func_ovl0_800D39D4
  /* 04F3B4 800D39D4 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 04F3B8 800D39D8 3C0F800D */       lui $t7, %hi(D_ovl0_800D6358)
  /* 04F3BC 800D39DC AFB60038 */        sw $s6, 0x38($sp)
  /* 04F3C0 800D39E0 25EF6358 */     addiu $t7, $t7, %lo(D_ovl0_800D6358)
  /* 04F3C4 800D39E4 00057080 */       sll $t6, $a1, 2
  /* 04F3C8 800D39E8 AFB00020 */        sw $s0, 0x20($sp)
  /* 04F3CC 800D39EC 01CFB021 */      addu $s6, $t6, $t7
  /* 04F3D0 800D39F0 8ED00000 */        lw $s0, ($s6)
  /* 04F3D4 800D39F4 AFBE0040 */        sw $fp, 0x40($sp)
  /* 04F3D8 800D39F8 AFB10024 */        sw $s1, 0x24($sp)
  /* 04F3DC 800D39FC 309EFFFF */      andi $fp, $a0, 0xffff
  /* 04F3E0 800D3A00 AFBF0044 */        sw $ra, 0x44($sp)
  /* 04F3E4 800D3A04 AFB7003C */        sw $s7, 0x3c($sp)
  /* 04F3E8 800D3A08 AFB50034 */        sw $s5, 0x34($sp)
  /* 04F3EC 800D3A0C AFB40030 */        sw $s4, 0x30($sp)
  /* 04F3F0 800D3A10 AFB3002C */        sw $s3, 0x2c($sp)
  /* 04F3F4 800D3A14 AFB20028 */        sw $s2, 0x28($sp)
  /* 04F3F8 800D3A18 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 04F3FC 800D3A1C AFA40048 */        sw $a0, 0x48($sp)
  /* 04F400 800D3A20 12000033 */      beqz $s0, .L800D3AF0
  /* 04F404 800D3A24 00008825 */        or $s1, $zero, $zero
  /* 04F408 800D3A28 3C14800D */       lui $s4, %hi(D_ovl0_800D6448)
  /* 04F40C 800D3A2C 3C13800D */       lui $s3, %hi(D_ovl0_800D6350)
  /* 04F410 800D3A30 26736350 */     addiu $s3, $s3, %lo(D_ovl0_800D6350)
  /* 04F414 800D3A34 26946448 */     addiu $s4, $s4, %lo(D_ovl0_800D6448)
  /* 04F418 800D3A38 03C0A825 */        or $s5, $fp, $zero
  /* 04F41C 800D3A3C 24170002 */     addiu $s7, $zero, 2
  .L800D3A40:
  /* 04F420 800D3A40 96180004 */       lhu $t8, 4($s0)
  /* 04F424 800D3A44 8E020000 */        lw $v0, ($s0)
  /* 04F428 800D3A48 16B80026 */       bne $s5, $t8, .L800D3AE4
  /* 04F42C 800D3A4C 00409025 */        or $s2, $v0, $zero
  /* 04F430 800D3A50 56200004 */      bnel $s1, $zero, .L800D3A64
  /* 04F434 800D3A54 AE220000 */        sw $v0, ($s1)
  /* 04F438 800D3A58 10000002 */         b .L800D3A64
  /* 04F43C 800D3A5C AEC20000 */        sw $v0, ($s6)
  /* 04F440 800D3A60 AE220000 */        sw $v0, ($s1)
  .L800D3A64:
  /* 04F444 800D3A64 8E020058 */        lw $v0, 0x58($s0)
  /* 04F448 800D3A68 5040000C */      beql $v0, $zero, .L800D3A9C
  /* 04F44C 800D3A6C 8E04005C */        lw $a0, 0x5c($s0)
  /* 04F450 800D3A70 96190006 */       lhu $t9, 6($s0)
  /* 04F454 800D3A74 33280004 */      andi $t0, $t9, 4
  /* 04F458 800D3A78 51000008 */      beql $t0, $zero, .L800D3A9C
  /* 04F45C 800D3A7C 8E04005C */        lw $a0, 0x5c($s0)
  /* 04F460 800D3A80 90490008 */       lbu $t1, 8($v0)
  /* 04F464 800D3A84 56E90005 */      bnel $s7, $t1, .L800D3A9C
  /* 04F468 800D3A88 8E04005C */        lw $a0, 0x5c($s0)
  /* 04F46C 800D3A8C 944A0054 */       lhu $t2, 0x54($v0)
  /* 04F470 800D3A90 254BFFFF */     addiu $t3, $t2, -1
  /* 04F474 800D3A94 A44B0054 */        sh $t3, 0x54($v0)
  /* 04F478 800D3A98 8E04005C */        lw $a0, 0x5c($s0)
  .L800D3A9C:
  /* 04F47C 800D3A9C 5080000B */      beql $a0, $zero, .L800D3ACC
  /* 04F480 800D3AA0 8E6F0000 */        lw $t7, ($s3) # D_ovl0_800D6350 + 0
  /* 04F484 800D3AA4 948C002A */       lhu $t4, 0x2a($a0)
  /* 04F488 800D3AA8 258DFFFF */     addiu $t5, $t4, -1
  /* 04F48C 800D3AAC A48D002A */        sh $t5, 0x2a($a0)
  /* 04F490 800D3AB0 8E04005C */        lw $a0, 0x5c($s0)
  /* 04F494 800D3AB4 948E002A */       lhu $t6, 0x2a($a0)
  /* 04F498 800D3AB8 55C00004 */      bnel $t6, $zero, .L800D3ACC
  /* 04F49C 800D3ABC 8E6F0000 */        lw $t7, ($s3) # D_ovl0_800D6350 + 0
  /* 04F4A0 800D3AC0 0C033862 */       jal func_ovl0_800CE188
  /* 04F4A4 800D3AC4 00000000 */       nop 
  /* 04F4A8 800D3AC8 8E6F0000 */        lw $t7, ($s3) # D_ovl0_800D6350 + 0
  .L800D3ACC:
  /* 04F4AC 800D3ACC AE0F0000 */        sw $t7, ($s0)
  /* 04F4B0 800D3AD0 96980000 */       lhu $t8, ($s4) # D_ovl0_800D6448 + 0
  /* 04F4B4 800D3AD4 AE700000 */        sw $s0, ($s3) # D_ovl0_800D6350 + 0
  /* 04F4B8 800D3AD8 2719FFFF */     addiu $t9, $t8, -1
  /* 04F4BC 800D3ADC 10000002 */         b .L800D3AE8
  /* 04F4C0 800D3AE0 A6990000 */        sh $t9, ($s4) # D_ovl0_800D6448 + 0
  .L800D3AE4:
  /* 04F4C4 800D3AE4 02008825 */        or $s1, $s0, $zero
  .L800D3AE8:
  /* 04F4C8 800D3AE8 1640FFD5 */      bnez $s2, .L800D3A40
  /* 04F4CC 800D3AEC 02408025 */        or $s0, $s2, $zero
  .L800D3AF0:
  /* 04F4D0 800D3AF0 3C16800D */       lui $s6, %hi(D_ovl0_800D639C)
  /* 04F4D4 800D3AF4 26D6639C */     addiu $s6, $s6, %lo(D_ovl0_800D639C)
  /* 04F4D8 800D3AF8 8ED00000 */        lw $s0, ($s6) # D_ovl0_800D639C + 0
  /* 04F4DC 800D3AFC 24170002 */     addiu $s7, $zero, 2
  /* 04F4E0 800D3B00 00008825 */        or $s1, $zero, $zero
  /* 04F4E4 800D3B04 12000030 */      beqz $s0, .L800D3BC8
  /* 04F4E8 800D3B08 03C0A825 */        or $s5, $fp, $zero
  /* 04F4EC 800D3B0C 3C14800D */       lui $s4, %hi(D_ovl0_800D644A)
  /* 04F4F0 800D3B10 3C13800D */       lui $s3, %hi(D_ovl0_800D6398)
  /* 04F4F4 800D3B14 4480A000 */      mtc1 $zero, $f20
  /* 04F4F8 800D3B18 26736398 */     addiu $s3, $s3, %lo(D_ovl0_800D6398)
  /* 04F4FC 800D3B1C 2694644A */     addiu $s4, $s4, %lo(D_ovl0_800D644A)
  /* 04F500 800D3B20 241E0001 */     addiu $fp, $zero, 1
  .L800D3B24:
  /* 04F504 800D3B24 96080004 */       lhu $t0, 4($s0)
  /* 04F508 800D3B28 8E020000 */        lw $v0, ($s0)
  /* 04F50C 800D3B2C 16A80023 */       bne $s5, $t0, .L800D3BBC
  /* 04F510 800D3B30 00409025 */        or $s2, $v0, $zero
  /* 04F514 800D3B34 92090008 */       lbu $t1, 8($s0)
  /* 04F518 800D3B38 16E90008 */       bne $s7, $t1, .L800D3B5C
  /* 04F51C 800D3B3C 00000000 */       nop 
  /* 04F520 800D3B40 960A0054 */       lhu $t2, 0x54($s0)
  /* 04F524 800D3B44 11400005 */      beqz $t2, .L800D3B5C
  /* 04F528 800D3B48 00000000 */       nop 
  /* 04F52C 800D3B4C E6140040 */      swc1 $f20, 0x40($s0)
  /* 04F530 800D3B50 A61E000E */        sh $fp, 0xe($s0)
  /* 04F534 800D3B54 1000001A */         b .L800D3BC0
  /* 04F538 800D3B58 02008825 */        or $s1, $s0, $zero
  .L800D3B5C:
  /* 04F53C 800D3B5C 56200004 */      bnel $s1, $zero, .L800D3B70
  /* 04F540 800D3B60 AE220000 */        sw $v0, ($s1)
  /* 04F544 800D3B64 10000002 */         b .L800D3B70
  /* 04F548 800D3B68 AEC20000 */        sw $v0, ($s6) # D_ovl0_800D639C + 0
  /* 04F54C 800D3B6C AE220000 */        sw $v0, ($s1)
  .L800D3B70:
  /* 04F550 800D3B70 8E04004C */        lw $a0, 0x4c($s0)
  /* 04F554 800D3B74 5080000B */      beql $a0, $zero, .L800D3BA4
  /* 04F558 800D3B78 8E6E0000 */        lw $t6, ($s3) # D_ovl0_800D6398 + 0
  /* 04F55C 800D3B7C 948B002A */       lhu $t3, 0x2a($a0)
  /* 04F560 800D3B80 256CFFFF */     addiu $t4, $t3, -1
  /* 04F564 800D3B84 A48C002A */        sh $t4, 0x2a($a0)
  /* 04F568 800D3B88 8E04004C */        lw $a0, 0x4c($s0)
  /* 04F56C 800D3B8C 948D002A */       lhu $t5, 0x2a($a0)
  /* 04F570 800D3B90 55A00004 */      bnel $t5, $zero, .L800D3BA4
  /* 04F574 800D3B94 8E6E0000 */        lw $t6, ($s3) # D_ovl0_800D6398 + 0
  /* 04F578 800D3B98 0C033862 */       jal func_ovl0_800CE188
  /* 04F57C 800D3B9C 00000000 */       nop 
  /* 04F580 800D3BA0 8E6E0000 */        lw $t6, ($s3) # D_ovl0_800D6398 + 0
  .L800D3BA4:
  /* 04F584 800D3BA4 AE0E0000 */        sw $t6, ($s0)
  /* 04F588 800D3BA8 968F0000 */       lhu $t7, ($s4) # D_ovl0_800D644A + 0
  /* 04F58C 800D3BAC AE700000 */        sw $s0, ($s3) # D_ovl0_800D6398 + 0
  /* 04F590 800D3BB0 25F8FFFF */     addiu $t8, $t7, -1
  /* 04F594 800D3BB4 10000002 */         b .L800D3BC0
  /* 04F598 800D3BB8 A6980000 */        sh $t8, ($s4) # D_ovl0_800D644A + 0
  .L800D3BBC:
  /* 04F59C 800D3BBC 02008825 */        or $s1, $s0, $zero
  .L800D3BC0:
  /* 04F5A0 800D3BC0 1640FFD8 */      bnez $s2, .L800D3B24
  /* 04F5A4 800D3BC4 02408025 */        or $s0, $s2, $zero
  .L800D3BC8:
  /* 04F5A8 800D3BC8 8FBF0044 */        lw $ra, 0x44($sp)
  /* 04F5AC 800D3BCC D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 04F5B0 800D3BD0 8FB00020 */        lw $s0, 0x20($sp)
  /* 04F5B4 800D3BD4 8FB10024 */        lw $s1, 0x24($sp)
  /* 04F5B8 800D3BD8 8FB20028 */        lw $s2, 0x28($sp)
  /* 04F5BC 800D3BDC 8FB3002C */        lw $s3, 0x2c($sp)
  /* 04F5C0 800D3BE0 8FB40030 */        lw $s4, 0x30($sp)
  /* 04F5C4 800D3BE4 8FB50034 */        lw $s5, 0x34($sp)
  /* 04F5C8 800D3BE8 8FB60038 */        lw $s6, 0x38($sp)
  /* 04F5CC 800D3BEC 8FB7003C */        lw $s7, 0x3c($sp)
  /* 04F5D0 800D3BF0 8FBE0040 */        lw $fp, 0x40($sp)
  /* 04F5D4 800D3BF4 03E00008 */        jr $ra
  /* 04F5D8 800D3BF8 27BD0048 */     addiu $sp, $sp, 0x48

