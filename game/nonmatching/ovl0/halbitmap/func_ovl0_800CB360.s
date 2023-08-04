.section .text
glabel func_ovl0_800CB360
  /* 046D40 800CB360 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 046D44 800CB364 AFBF001C */        sw $ra, 0x1c($sp)
  /* 046D48 800CB368 AFB00018 */        sw $s0, 0x18($sp)
  /* 046D4C 800CB36C 908E0054 */       lbu $t6, 0x54($a0)
  /* 046D50 800CB370 00803025 */        or $a2, $a0, $zero
  /* 046D54 800CB374 3C018004 */       lui $at, %hi(D_80046FA4)
  /* 046D58 800CB378 31CF0002 */      andi $t7, $t6, 2
  /* 046D5C 800CB37C 15E0003C */      bnez $t7, .L800CB470
  /* 046D60 800CB380 3C048004 */       lui $a0, %hi(gpDisplayListHead + 4)
  /* 046D64 800CB384 C4246FA4 */      lwc1 $f4, %lo(D_80046FA4)($at)
  /* 046D68 800CB388 248465B4 */     addiu $a0, $a0, %lo(gpDisplayListHead + 4)
  /* 046D6C 800CB38C 00C02825 */        or $a1, $a2, $zero
  /* 046D70 800CB390 AFA60030 */        sw $a2, 0x30($sp)
  /* 046D74 800CB394 0C00435C */       jal func_80010D70
  /* 046D78 800CB398 E7A40024 */      swc1 $f4, 0x24($sp)
  /* 046D7C 800CB39C 8FA60030 */        lw $a2, 0x30($sp)
  /* 046D80 800CB3A0 00408025 */        or $s0, $v0, $zero
  /* 046D84 800CB3A4 8CD80050 */        lw $t8, 0x50($a2)
  /* 046D88 800CB3A8 53000014 */      beql $t8, $zero, .L800CB3FC
  /* 046D8C 800CB3AC 8CC40010 */        lw $a0, 0x10($a2)
  /* 046D90 800CB3B0 90D90054 */       lbu $t9, 0x54($a2)
  /* 046D94 800CB3B4 3C058004 */       lui $a1, %hi(gpDisplayListHead + 4)
  /* 046D98 800CB3B8 24A565B4 */     addiu $a1, $a1, %lo(gpDisplayListHead + 4)
  /* 046D9C 800CB3BC 33280001 */      andi $t0, $t9, 1
  /* 046DA0 800CB3C0 1500000D */      bnez $t0, .L800CB3F8
  /* 046DA4 800CB3C4 00C02025 */        or $a0, $a2, $zero
  /* 046DA8 800CB3C8 0C004B64 */       jal func_80012D90
  /* 046DAC 800CB3CC AFA60030 */        sw $a2, 0x30($sp)
  /* 046DB0 800CB3D0 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 046DB4 800CB3D4 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 046DB8 800CB3D8 8CA30004 */        lw $v1, 4($a1) # gpDisplayListHead + 4
  /* 046DBC 800CB3DC 8FA60030 */        lw $a2, 0x30($sp)
  /* 046DC0 800CB3E0 3C0ADE00 */       lui $t2, 0xde00
  /* 046DC4 800CB3E4 24690008 */     addiu $t1, $v1, 8
  /* 046DC8 800CB3E8 ACA90004 */        sw $t1, 4($a1) # gpDisplayListHead + 4
  /* 046DCC 800CB3EC AC6A0000 */        sw $t2, ($v1)
  /* 046DD0 800CB3F0 8CCB0050 */        lw $t3, 0x50($a2)
  /* 046DD4 800CB3F4 AC6B0004 */        sw $t3, 4($v1)
  .L800CB3F8:
  /* 046DD8 800CB3F8 8CC40010 */        lw $a0, 0x10($a2)
  .L800CB3FC:
  /* 046DDC 800CB3FC 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 046DE0 800CB400 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 046DE4 800CB404 10800006 */      beqz $a0, .L800CB420
  /* 046DE8 800CB408 00000000 */       nop 
  /* 046DEC 800CB40C 0C032CD8 */       jal func_ovl0_800CB360
  /* 046DF0 800CB410 AFA60030 */        sw $a2, 0x30($sp)
  /* 046DF4 800CB414 3C058004 */       lui $a1, %hi(gpDisplayListHead)
  /* 046DF8 800CB418 24A565B0 */     addiu $a1, $a1, %lo(gpDisplayListHead)
  /* 046DFC 800CB41C 8FA60030 */        lw $a2, 0x30($sp)
  .L800CB420:
  /* 046E00 800CB420 52000011 */      beql $s0, $zero, .L800CB468
  /* 046E04 800CB424 C7A60024 */      lwc1 $f6, 0x24($sp)
  /* 046E08 800CB428 8CCC0014 */        lw $t4, 0x14($a2)
  /* 046E0C 800CB42C 24010001 */     addiu $at, $zero, 1
  /* 046E10 800CB430 3C0FD838 */       lui $t7, (0xD8380002 >> 16) # 3627548674
  /* 046E14 800CB434 51810005 */      beql $t4, $at, .L800CB44C
  /* 046E18 800CB438 8CA30004 */        lw $v1, 4($a1) # gpDisplayListHead + 4
  /* 046E1C 800CB43C 8CCD0008 */        lw $t5, 8($a2)
  /* 046E20 800CB440 51A00009 */      beql $t5, $zero, .L800CB468
  /* 046E24 800CB444 C7A60024 */      lwc1 $f6, 0x24($sp)
  /* 046E28 800CB448 8CA30004 */        lw $v1, 4($a1) # gpDisplayListHead + 4
  .L800CB44C:
  /* 046E2C 800CB44C 35EF0002 */       ori $t7, $t7, (0xD8380002 & 0xFFFF) # 3627548674
  /* 046E30 800CB450 24180040 */     addiu $t8, $zero, 0x40
  /* 046E34 800CB454 246E0008 */     addiu $t6, $v1, 8
  /* 046E38 800CB458 ACAE0004 */        sw $t6, 4($a1) # gpDisplayListHead + 4
  /* 046E3C 800CB45C AC780004 */        sw $t8, 4($v1)
  /* 046E40 800CB460 AC6F0000 */        sw $t7, ($v1)
  /* 046E44 800CB464 C7A60024 */      lwc1 $f6, 0x24($sp)
  .L800CB468:
  /* 046E48 800CB468 3C018004 */       lui $at, %hi(D_80046FA4)
  /* 046E4C 800CB46C E4266FA4 */      swc1 $f6, %lo(D_80046FA4)($at)
  .L800CB470:
  /* 046E50 800CB470 8CD9000C */        lw $t9, 0xc($a2)
  /* 046E54 800CB474 5720000A */      bnel $t9, $zero, .L800CB4A0
  /* 046E58 800CB478 8FBF001C */        lw $ra, 0x1c($sp)
  /* 046E5C 800CB47C 8CD00008 */        lw $s0, 8($a2)
  /* 046E60 800CB480 52000007 */      beql $s0, $zero, .L800CB4A0
  /* 046E64 800CB484 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CB488:
  /* 046E68 800CB488 0C032CD8 */       jal func_ovl0_800CB360
  /* 046E6C 800CB48C 02002025 */        or $a0, $s0, $zero
  /* 046E70 800CB490 8E100008 */        lw $s0, 8($s0)
  /* 046E74 800CB494 1600FFFC */      bnez $s0, .L800CB488
  /* 046E78 800CB498 00000000 */       nop 
  /* 046E7C 800CB49C 8FBF001C */        lw $ra, 0x1c($sp)
  .L800CB4A0:
  /* 046E80 800CB4A0 8FB00018 */        lw $s0, 0x18($sp)
  /* 046E84 800CB4A4 27BD0030 */     addiu $sp, $sp, 0x30
  /* 046E88 800CB4A8 03E00008 */        jr $ra
  /* 046E8C 800CB4AC 00000000 */       nop 

