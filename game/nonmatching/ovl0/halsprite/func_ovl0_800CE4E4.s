.section .text
glabel func_ovl0_800CE4E4
# render sprite bank sprite?
  /* 049EC4 800CE4E4 3C08800D */       lui $t0, %hi(D_ovl0_800D6350)
  /* 049EC8 800CE4E8 25086350 */     addiu $t0, $t0, %lo(D_ovl0_800D6350)
  /* 049ECC 800CE4EC 8D030000 */        lw $v1, ($t0) # D_ovl0_800D6350 + 0
  /* 049ED0 800CE4F0 AFA7000C */        sw $a3, 0xc($sp)
  /* 049ED4 800CE4F4 30E7FFFF */      andi $a3, $a3, 0xffff
  /* 049ED8 800CE4F8 14600003 */      bnez $v1, .L800CE508
  /* 049EDC 800CE4FC AFA40000 */        sw $a0, ($sp)
  /* 049EE0 800CE500 03E00008 */        jr $ra
  /* 049EE4 800CE504 00001025 */        or $v0, $zero, $zero

  .L800CE508:
  /* 049EE8 800CE508 3C04800D */       lui $a0, %hi(D_ovl0_800D6448)
  /* 049EEC 800CE50C 24846448 */     addiu $a0, $a0, %lo(D_ovl0_800D6448)
  /* 049EF0 800CE510 948E0000 */       lhu $t6, ($a0) # D_ovl0_800D6448 + 0
  /* 049EF4 800CE514 3C09800D */       lui $t1, %hi(D_ovl0_800D644E)
  /* 049EF8 800CE518 2529644E */     addiu $t1, $t1, %lo(D_ovl0_800D644E)
  /* 049EFC 800CE51C 95380000 */       lhu $t8, ($t1) # D_ovl0_800D644E + 0
  /* 049F00 800CE520 25CF0001 */     addiu $t7, $t6, 1
  /* 049F04 800CE524 31E2FFFF */      andi $v0, $t7, 0xffff
  /* 049F08 800CE528 0302082A */       slt $at, $t8, $v0
  /* 049F0C 800CE52C 10200002 */      beqz $at, .L800CE538
  /* 049F10 800CE530 A48F0000 */        sh $t7, ($a0) # D_ovl0_800D6448 + 0
  /* 049F14 800CE534 A5220000 */        sh $v0, ($t1) # D_ovl0_800D644E + 0
  .L800CE538:
  /* 049F18 800CE538 8FA40040 */        lw $a0, 0x40($sp)
  /* 049F1C 800CE53C 3C02800D */       lui $v0, %hi(D_ovl0_800D5D58)
  /* 049F20 800CE540 24425D58 */     addiu $v0, $v0, %lo(D_ovl0_800D5D58)
  /* 049F24 800CE544 50800005 */      beql $a0, $zero, .L800CE55C
  /* 049F28 800CE548 944A0000 */       lhu $t2, ($v0) # D_ovl0_800D5D58 + 0
  /* 049F2C 800CE54C 94990004 */       lhu $t9, 4($a0)
  /* 049F30 800CE550 10000005 */         b .L800CE568
  /* 049F34 800CE554 A4790004 */        sh $t9, 4($v1)
  /* 049F38 800CE558 944A0000 */       lhu $t2, ($v0) # D_ovl0_800D5D58 + 0
  .L800CE55C:
  /* 049F3C 800CE55C 254C0001 */     addiu $t4, $t2, 1
  /* 049F40 800CE560 A44C0000 */        sh $t4, ($v0) # D_ovl0_800D5D58 + 0
  /* 049F44 800CE564 A46C0004 */        sh $t4, 4($v1)
  .L800CE568:
  /* 049F48 800CE568 10800008 */      beqz $a0, .L800CE58C
  /* 049F4C 800CE56C 000550C3 */       sra $t2, $a1, 3
  /* 049F50 800CE570 8C8D004C */        lw $t5, 0x4c($a0)
  /* 049F54 800CE574 11A00006 */      beqz $t5, .L800CE590
  /* 049F58 800CE578 AC6D005C */        sw $t5, 0x5c($v1)
  /* 049F5C 800CE57C 95AE002A */       lhu $t6, 0x2a($t5)
  /* 049F60 800CE580 25CF0001 */     addiu $t7, $t6, 1
  /* 049F64 800CE584 10000002 */         b .L800CE590
  /* 049F68 800CE588 A5AF002A */        sh $t7, 0x2a($t5)
  .L800CE58C:
  /* 049F6C 800CE58C AC60005C */        sw $zero, 0x5c($v1)
  .L800CE590:
  /* 049F70 800CE590 8FB90000 */        lw $t9, ($sp)
  /* 049F74 800CE594 8C780000 */        lw $t8, ($v1)
  /* 049F78 800CE598 000A5880 */       sll $t3, $t2, 2
  /* 049F7C 800CE59C 17200008 */      bnez $t9, .L800CE5C0
  /* 049F80 800CE5A0 AD180000 */        sw $t8, ($t0)
  /* 049F84 800CE5A4 3C0C800D */       lui $t4, %hi(D_ovl0_800D6358)
  /* 049F88 800CE5A8 258C6358 */     addiu $t4, $t4, %lo(D_ovl0_800D6358)
  /* 049F8C 800CE5AC 016C1021 */      addu $v0, $t3, $t4
  /* 049F90 800CE5B0 8C4D0000 */        lw $t5, ($v0) # D_ovl0_800D5D58 + 0
  /* 049F94 800CE5B4 AC6D0000 */        sw $t5, ($v1)
  /* 049F98 800CE5B8 10000006 */         b .L800CE5D4
  /* 049F9C 800CE5BC AC430000 */        sw $v1, ($v0) # D_ovl0_800D5D58 + 0
  .L800CE5C0:
  /* 049FA0 800CE5C0 8FAE0000 */        lw $t6, ($sp)
  /* 049FA4 800CE5C4 8DCF0000 */        lw $t7, ($t6)
  /* 049FA8 800CE5C8 AC6F0000 */        sw $t7, ($v1)
  /* 049FAC 800CE5CC 8FB80000 */        lw $t8, ($sp)
  /* 049FB0 800CE5D0 AF030000 */        sw $v1, ($t8)
  .L800CE5D4:
  /* 049FB4 800CE5D4 A0650008 */        sb $a1, 8($v1)
  /* 049FB8 800CE5D8 A4660006 */        sh $a2, 6($v1)
  /* 049FBC 800CE5DC A067000A */        sb $a3, 0xa($v1)
  /* 049FC0 800CE5E0 C7A40018 */      lwc1 $f4, 0x18($sp)
  /* 049FC4 800CE5E4 34CE0010 */       ori $t6, $a2, 0x10
  /* 049FC8 800CE5E8 240F0001 */     addiu $t7, $zero, 1
  /* 049FCC 800CE5EC E4640020 */      swc1 $f4, 0x20($v1)
  /* 049FD0 800CE5F0 C7A6001C */      lwc1 $f6, 0x1c($sp)
  /* 049FD4 800CE5F4 E4660024 */      swc1 $f6, 0x24($v1)
  /* 049FD8 800CE5F8 C7A80020 */      lwc1 $f8, 0x20($sp)
  /* 049FDC 800CE5FC E4680028 */      swc1 $f8, 0x28($v1)
  /* 049FE0 800CE600 C7AA0024 */      lwc1 $f10, 0x24($sp)
  /* 049FE4 800CE604 E46A002C */      swc1 $f10, 0x2c($v1)
  /* 049FE8 800CE608 C7B00028 */      lwc1 $f16, 0x28($sp)
  /* 049FEC 800CE60C E4700030 */      swc1 $f16, 0x30($v1)
  /* 049FF0 800CE610 C7B2002C */      lwc1 $f18, 0x2c($sp)
  /* 049FF4 800CE614 E4720034 */      swc1 $f18, 0x34($v1)
  /* 049FF8 800CE618 C7A40030 */      lwc1 $f4, 0x30($sp)
  /* 049FFC 800CE61C E4640040 */      swc1 $f4, 0x40($v1)
  /* 04A000 800CE620 C7A60034 */      lwc1 $f6, 0x34($sp)
  /* 04A004 800CE624 8FA20010 */        lw $v0, 0x10($sp)
  /* 04A008 800CE628 E4660038 */      swc1 $f6, 0x38($v1)
  /* 04A00C 800CE62C C7A80038 */      lwc1 $f8, 0x38($sp)
  /* 04A010 800CE630 E468003C */      swc1 $f8, 0x3c($v1)
  /* 04A014 800CE634 8FB90014 */        lw $t9, 0x14($sp)
  /* 04A018 800CE638 A4600018 */        sh $zero, 0x18($v1)
  /* 04A01C 800CE63C A460001A */        sh $zero, 0x1a($v1)
  /* 04A020 800CE640 272A0001 */     addiu $t2, $t9, 1
  /* 04A024 800CE644 A46A001E */        sh $t2, 0x1e($v1)
  /* 04A028 800CE648 AC620014 */        sw $v0, 0x14($v1)
  /* 04A02C 800CE64C 8FAC003C */        lw $t4, 0x3c($sp)
  /* 04A030 800CE650 11800002 */      beqz $t4, .L800CE65C
  /* 04A034 800CE654 00000000 */       nop 
  /* 04A038 800CE658 A46E0006 */        sh $t6, 6($v1)
  .L800CE65C:
  /* 04A03C 800CE65C 50400004 */      beql $v0, $zero, .L800CE670
  /* 04A040 800CE660 A460000C */        sh $zero, 0xc($v1)
  /* 04A044 800CE664 10000002 */         b .L800CE670
  /* 04A048 800CE668 A46F000C */        sh $t7, 0xc($v1)
  /* 04A04C 800CE66C A460000C */        sh $zero, 0xc($v1)
  .L800CE670:
  /* 04A050 800CE670 240200FF */     addiu $v0, $zero, 0xff
  /* 04A054 800CE674 A062004B */        sb $v0, 0x4b($v1)
  /* 04A058 800CE678 A062004A */        sb $v0, 0x4a($v1)
  /* 04A05C 800CE67C A0620049 */        sb $v0, 0x49($v1)
  /* 04A060 800CE680 A0620048 */        sb $v0, 0x48($v1)
  /* 04A064 800CE684 00001025 */        or $v0, $zero, $zero
  /* 04A068 800CE688 A0620052 */        sb $v0, 0x52($v1)
  /* 04A06C 800CE68C A0620051 */        sb $v0, 0x51($v1)
  /* 04A070 800CE690 A0620050 */        sb $v0, 0x50($v1)
  /* 04A074 800CE694 A060000B */        sb $zero, 0xb($v1)
  /* 04A078 800CE698 A0600053 */        sb $zero, 0x53($v1)
  /* 04A07C 800CE69C A4600012 */        sh $zero, 0x12($v1)
  /* 04A080 800CE6A0 A4600010 */        sh $zero, 0x10($v1)
  /* 04A084 800CE6A4 A460000E */        sh $zero, 0xe($v1)
  /* 04A088 800CE6A8 AC640058 */        sw $a0, 0x58($v1)
  /* 04A08C 800CE6AC 00601025 */        or $v0, $v1, $zero
  /* 04A090 800CE6B0 03E00008 */        jr $ra
  /* 04A094 800CE6B4 00000000 */       nop 

