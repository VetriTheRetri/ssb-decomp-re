.section .rodata

glabel D_8003DAAC
  /* 3D6AC 03E6AC 8003DAAC */
  .asciz "om : couldn\'t add OMMtx for DObj\n"
  .balign 4

.section .late_rodata

glabel jtbl_8003DC24
  /* 3D824 03E824 8003DC24 */  .word L80008CA0
  /* 3D828 03E828 8003DC28 */  .word L80008CA0
  /* 3D82C 03E82C 8003DC2C */  .word L80008CA0
  /* 3D830 03E830 8003DC30 */  .word L80008CA0
  /* 3D834 03E834 8003DC34 */  .word L80008CA0
  /* 3D838 03E838 8003DC38 */  .word L80008CA0
  /* 3D83C 03E83C 8003DC3C */  .word L80008CA0
  /* 3D840 03E840 8003DC40 */  .word L80008CA0
  /* 3D844 03E844 8003DC44 */  .word L80008CA0
  /* 3D848 03E848 8003DC48 */  .word L80008CA0
  /* 3D84C 03E84C 8003DC4C */  .word L80008CA0
  /* 3D850 03E850 8003DC50 */  .word L80008CA0
  /* 3D854 03E854 8003DC54 */  .word L80008CA0
  /* 3D858 03E858 8003DC58 */  .word L80008CA0
  /* 3D85C 03E85C 8003DC5C */  .word L80008CA0
  /* 3D860 03E860 8003DC60 */  .word L80008CA0
  /* 3D864 03E864 8003DC64 */  .word L80008CA0
  /* 3D868 03E868 8003DC68 */  .word L800086D0
  /* 3D86C 03E86C 8003DC6C */  .word L80008700
  /* 3D870 03E870 8003DC70 */  .word L80008738
  /* 3D874 03E874 8003DC74 */  .word L8000879C
  /* 3D878 03E878 8003DC78 */  .word L800087D4
  /* 3D87C 03E87C 8003DC7C */  .word L80008700
  /* 3D880 03E880 8003DC80 */  .word L80008738
  /* 3D884 03E884 8003DC84 */  .word L80008838
  /* 3D888 03E888 8003DC88 */  .word L8000879C
  /* 3D88C 03E88C 8003DC8C */  .word L800087D4
  /* 3D890 03E890 8003DC90 */  .word L800088C8
  /* 3D894 03E894 8003DC94 */  .word L8000879C
  /* 3D898 03E898 8003DC98 */  .word L800087D4
  /* 3D89C 03E89C 8003DC9C */  .word L800088C8
  /* 3D8A0 03E8A0 8003DCA0 */  .word L80008958
  /* 3D8A4 03E8A4 8003DCA4 */  .word L80008CA0
  /* 3D8A8 03E8A8 8003DCA8 */  .word L800086D0
  /* 3D8AC 03E8AC 8003DCAC */  .word L80008CA0
  /* 3D8B0 03E8B0 8003DCB0 */  .word L800086D0
  /* 3D8B4 03E8B4 8003DCB4 */  .word L80008CA0
  /* 3D8B8 03E8B8 8003DCB8 */  .word L800086D0
  /* 3D8BC 03E8BC 8003DCBC */  .word L80008CA0
  /* 3D8C0 03E8C0 8003DCC0 */  .word L800086D0
  /* 3D8C4 03E8C4 8003DCC4 */  .word L80008CA0
  /* 3D8C8 03E8C8 8003DCC8 */  .word L80008CA0
  /* 3D8CC 03E8CC 8003DCCC */  .word L80008958
  /* 3D8D0 03E8D0 8003DCD0 */  .word L80008958
  /* 3D8D4 03E8D4 8003DCD4 */  .word L80008988
  /* 3D8D8 03E8D8 8003DCD8 */  .word L80008988
  /* 3D8DC 03E8DC 8003DCDC */  .word L80008958
  /* 3D8E0 03E8E0 8003DCE0 */  .word L80008958
  /* 3D8E4 03E8E4 8003DCE4 */  .word L80008958
  /* 3D8E8 03E8E8 8003DCE8 */  .word L80008958
  /* 3D8EC 03E8EC 8003DCEC */  .word L800087D4
  /* 3D8F0 03E8F0 8003DCF0 */  .word L800087D4
  /* 3D8F4 03E8F4 8003DCF4 */  .word L80008958
  /* 3D8F8 03E8F8 8003DCF8 */  .word L800088C8
  /* 3D8FC 03E8FC 8003DCFC */  .word L800086D0
  /* 3D900 03E900 8003DD00 */  .word L800089EC
  /* 3D904 03E904 8003DD04 */  .word L80008A1C
  /* 3D908 03E908 8003DD08 */  .word L80008A54
  /* 3D90C 03E90C 8003DD0C */  .word L80008A8C
  /* 3D910 03E910 8003DD10 */  .word L80008ABC
  /* 3D914 03E914 8003DD14 */  .word L80008B20
  /* 3D918 03E918 8003DD18 */  .word L80008BB0
  /* 3D91C 03E91C 8003DD1C */  .word L80008C14

.section .text
glabel omAddOMMtxForDObjVar
  /* 00915C 8000855C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 009160 80008560 AFBF001C */        sw $ra, 0x1c($sp)
  /* 009164 80008564 AFB00018 */        sw $s0, 0x18($sp)
  /* 009168 80008568 AFA50034 */        sw $a1, 0x34($sp)
  /* 00916C 8000856C AFA60038 */        sw $a2, 0x38($sp)
  /* 009170 80008570 AFA7003C */        sw $a3, 0x3c($sp)
  /* 009174 80008574 908B0056 */       lbu $t3, 0x56($a0)
  /* 009178 80008578 24010005 */     addiu $at, $zero, 5
  /* 00917C 8000857C 00808025 */        or $s0, $a0, $zero
  /* 009180 80008580 15610006 */       bne $t3, $at, .L8000859C
  /* 009184 80008584 01606825 */        or $t5, $t3, $zero
  /* 009188 80008588 3C048004 */       lui $a0, %hi(D_8003DAAC)
  /* 00918C 8000858C 0C008D89 */       jal gsFatalPrintF
  /* 009190 80008590 2484DAAC */     addiu $a0, $a0, %lo(D_8003DAAC)
  .L80008594:
  /* 009194 80008594 1000FFFF */         b .L80008594
  /* 009198 80008598 00000000 */       nop 
  .L8000859C:
  /* 00919C 8000859C 8E02004C */        lw $v0, 0x4c($s0)
  /* 0091A0 800085A0 00002025 */        or $a0, $zero, $zero
  /* 0091A4 800085A4 8FAC0020 */        lw $t4, 0x20($sp)
  /* 0091A8 800085A8 10400020 */      beqz $v0, .L8000862C
  /* 0091AC 800085AC 24430004 */     addiu $v1, $v0, 4
  /* 0091B0 800085B0 00402825 */        or $a1, $v0, $zero
  /* 0091B4 800085B4 8FAA0028 */        lw $t2, 0x28($sp)
  /* 0091B8 800085B8 8FA90024 */        lw $t1, 0x24($sp)
  /* 0091BC 800085BC 24080002 */     addiu $t0, $zero, 2
  /* 0091C0 800085C0 24070001 */     addiu $a3, $zero, 1
  /* 0091C4 800085C4 24060003 */     addiu $a2, $zero, 3
  .L800085C8:
  /* 0091C8 800085C8 90A20000 */       lbu $v0, ($a1)
  /* 0091CC 800085CC 24840001 */     addiu $a0, $a0, 1
  /* 0091D0 800085D0 10400011 */      beqz $v0, .L80008618
  /* 0091D4 800085D4 00000000 */       nop 
  /* 0091D8 800085D8 50470008 */      beql $v0, $a3, .L800085FC
  /* 0091DC 800085DC 00605025 */        or $t2, $v1, $zero
  /* 0091E0 800085E0 50480009 */      beql $v0, $t0, .L80008608
  /* 0091E4 800085E4 00604825 */        or $t1, $v1, $zero
  /* 0091E8 800085E8 5046000A */      beql $v0, $a2, .L80008614
  /* 0091EC 800085EC 00606025 */        or $t4, $v1, $zero
  /* 0091F0 800085F0 10000009 */         b .L80008618
  /* 0091F4 800085F4 00000000 */       nop 
  /* 0091F8 800085F8 00605025 */        or $t2, $v1, $zero
  .L800085FC: # 1
  /* 0091FC 800085FC 10000006 */         b .L80008618
  /* 009200 80008600 24630010 */     addiu $v1, $v1, 0x10
  /* 009204 80008604 00604825 */        or $t1, $v1, $zero
  .L80008608: # 2
  /* 009208 80008608 10000003 */         b .L80008618
  /* 00920C 8000860C 24630014 */     addiu $v1, $v1, 0x14
  /* 009210 80008610 00606025 */        or $t4, $v1, $zero
  .L80008614: # 3
  /* 009214 80008614 24630010 */     addiu $v1, $v1, 0x10
  .L80008618:
  /* 009218 80008618 1486FFEB */       bne $a0, $a2, .L800085C8
  /* 00921C 8000861C 24A50001 */     addiu $a1, $a1, 1
  /* 009220 80008620 AFA90024 */        sw $t1, 0x24($sp)
  /* 009224 80008624 AFAA0028 */        sw $t2, 0x28($sp)
  /* 009228 80008628 AFAC0020 */        sw $t4, 0x20($sp)
  .L8000862C:
  /* 00922C 8000862C 8FAE003C */        lw $t6, 0x3c($sp)
  /* 009230 80008630 8FA90024 */        lw $t1, 0x24($sp)
  /* 009234 80008634 8FAA0028 */        lw $t2, 0x28($sp)
  /* 009238 80008638 01CD082A */       slt $at, $t6, $t5 # arg3 < arg0->unk56
  /* 00923C 8000863C 1020000B */      beqz $at, .L8000866C # if not less than
  /* 009240 80008640 8FAC0020 */        lw $t4, 0x20($sp)
  /* 009244 80008644 000D7880 */       sll $t7, $t5, 2
  /* 009248 80008648 000EC080 */       sll $t8, $t6, 2
  /* 00924C 8000864C 03101821 */      addu $v1, $t8, $s0 # arg0 + (4 * arg3)
  /* 009250 80008650 020F1021 */      addu $v0, $s0, $t7 # arg0 + (4 * unk56)
  .L80008654:
  /* 009254 80008654 8C590054 */        lw $t9, 0x54($v0)
  /* 009258 80008658 2442FFFC */     addiu $v0, $v0, -4
  /* 00925C 8000865C 0062082B */      sltu $at, $v1, $v0
  /* 009260 80008660 1420FFFC */      bnez $at, .L80008654
  /* 009264 80008664 AC59005C */        sw $t9, 0x5c($v0)
  /* 009268 80008668 920B0056 */       lbu $t3, 0x56($s0)
  .L8000866C:
  /* 00926C 8000866C 256F0001 */     addiu $t7, $t3, 1
  /* 009270 80008670 A20F0056 */        sb $t7, 0x56($s0)
  /* 009274 80008674 AFAC0020 */        sw $t4, 0x20($sp)
  /* 009278 80008678 AFAA0028 */        sw $t2, 0x28($sp)
  /* 00927C 8000867C 0C001F57 */       jal omGetOMMtxSetNextAlloc
  /* 009280 80008680 AFA90024 */        sw $t1, 0x24($sp)
  /* 009284 80008684 8FAE003C */        lw $t6, 0x3c($sp)
  /* 009288 80008688 93A30037 */       lbu $v1, 0x37($sp)
  /* 00928C 8000868C 8FA90024 */        lw $t1, 0x24($sp)
  /* 009290 80008690 000EC080 */       sll $t8, $t6, 2
  /* 009294 80008694 0218C821 */      addu $t9, $s0, $t8
  /* 009298 80008698 8FAA0028 */        lw $t2, 0x28($sp)
  /* 00929C 8000869C 8FAC0020 */        lw $t4, 0x20($sp)
  /* 0092A0 800086A0 246FFFFF */     addiu $t7, $v1, -1
  /* 0092A4 800086A4 AF220058 */        sw $v0, 0x58($t9)
  /* 0092A8 800086A8 2DE1003F */     sltiu $at, $t7, 0x3f
  /* 0092AC 800086AC 00402025 */        or $a0, $v0, $zero
  /* 0092B0 800086B0 1020017B */      beqz $at, L80008CA0
  /* 0092B4 800086B4 A0430004 */        sb $v1, 4($v0)
  /* 0092B8 800086B8 000F7880 */       sll $t7, $t7, 2
  /* 0092BC 800086BC 3C018004 */       lui $at, %hi(jtbl_8003DC24)
  /* 0092C0 800086C0 002F0821 */      addu $at, $at, $t7
  /* 0092C4 800086C4 8C2FDC24 */        lw $t7, %lo(jtbl_8003DC24)($at)
  /* 0092C8 800086C8 01E00008 */        jr $t7
  /* 0092CC 800086CC 00000000 */       nop 
  glabel L800086D0
  /* 0092D0 800086D0 3C0E8004 */       lui $t6, %hi(dOMTranslateDefault)
  /* 0092D4 800086D4 25CEB8DC */     addiu $t6, $t6, %lo(dOMTranslateDefault)
  /* 0092D8 800086D8 8DD90000 */        lw $t9, ($t6) # dOMTranslateDefault + 0
  /* 0092DC 800086DC AE190018 */        sw $t9, 0x18($s0)
  /* 0092E0 800086E0 8DD80004 */        lw $t8, 4($t6) # dOMTranslateDefault + 4
  /* 0092E4 800086E4 AE18001C */        sw $t8, 0x1c($s0)
  /* 0092E8 800086E8 8DD90008 */        lw $t9, 8($t6) # dOMTranslateDefault + 8
  /* 0092EC 800086EC AE190020 */        sw $t9, 0x20($s0)
  /* 0092F0 800086F0 8DD8000C */        lw $t8, 0xc($t6) # dOMTranslateDefault + 12
  /* 0092F4 800086F4 AE020018 */        sw $v0, 0x18($s0)
  /* 0092F8 800086F8 10000169 */         b L80008CA0
  /* 0092FC 800086FC AE180024 */        sw $t8, 0x24($s0)
  glabel L80008700
  /* 009300 80008700 3C0F8004 */       lui $t7, %hi(dOMRotateDefaultAXYZ)
  /* 009304 80008704 25EFB8EC */     addiu $t7, $t7, %lo(dOMRotateDefaultAXYZ)
  /* 009308 80008708 8DF80000 */        lw $t8, ($t7) # dOMRotateDefaultAXYZ + 0
  /* 00930C 8000870C AE180028 */        sw $t8, 0x28($s0)
  /* 009310 80008710 8DEE0004 */        lw $t6, 4($t7) # dOMRotateDefaultAXYZ + 4
  /* 009314 80008714 AE0E002C */        sw $t6, 0x2c($s0)
  /* 009318 80008718 8DF80008 */        lw $t8, 8($t7) # dOMRotateDefaultAXYZ + 8
  /* 00931C 8000871C AE180030 */        sw $t8, 0x30($s0)
  /* 009320 80008720 8DEE000C */        lw $t6, 0xc($t7) # dOMRotateDefaultAXYZ + 12
  /* 009324 80008724 AE0E0034 */        sw $t6, 0x34($s0)
  /* 009328 80008728 8DF80010 */        lw $t8, 0x10($t7) # dOMRotateDefaultAXYZ + 16
  /* 00932C 8000872C AE020028 */        sw $v0, 0x28($s0)
  /* 009330 80008730 1000015B */         b L80008CA0
  /* 009334 80008734 AE180038 */        sw $t8, 0x38($s0)
  glabel L80008738
  /* 009338 80008738 3C198004 */       lui $t9, %hi(dOMTranslateDefault)
  /* 00933C 8000873C 2739B8DC */     addiu $t9, $t9, %lo(dOMTranslateDefault)
  /* 009340 80008740 8F2E0000 */        lw $t6, ($t9) # dOMTranslateDefault + 0
  /* 009344 80008744 3C188004 */       lui $t8, %hi(dOMRotateDefaultAXYZ)
  /* 009348 80008748 2718B8EC */     addiu $t8, $t8, %lo(dOMRotateDefaultAXYZ)
  /* 00934C 8000874C AE0E0018 */        sw $t6, 0x18($s0)
  /* 009350 80008750 8F2F0004 */        lw $t7, 4($t9) # dOMTranslateDefault + 4
  /* 009354 80008754 AE0F001C */        sw $t7, 0x1c($s0)
  /* 009358 80008758 8F2E0008 */        lw $t6, 8($t9) # dOMTranslateDefault + 8
  /* 00935C 8000875C AE0E0020 */        sw $t6, 0x20($s0)
  /* 009360 80008760 8F2F000C */        lw $t7, 0xc($t9) # dOMTranslateDefault + 12
  /* 009364 80008764 AE0F0024 */        sw $t7, 0x24($s0)
  /* 009368 80008768 8F0F0000 */        lw $t7, ($t8) # dOMRotateDefaultAXYZ + 0
  /* 00936C 8000876C AE0F0028 */        sw $t7, 0x28($s0)
  /* 009370 80008770 8F190004 */        lw $t9, 4($t8) # dOMRotateDefaultAXYZ + 4
  /* 009374 80008774 AE19002C */        sw $t9, 0x2c($s0)
  /* 009378 80008778 8F0F0008 */        lw $t7, 8($t8) # dOMRotateDefaultAXYZ + 8
  /* 00937C 8000877C AE0F0030 */        sw $t7, 0x30($s0)
  /* 009380 80008780 8F19000C */        lw $t9, 0xc($t8) # dOMRotateDefaultAXYZ + 12
  /* 009384 80008784 AE190034 */        sw $t9, 0x34($s0)
  /* 009388 80008788 8F0F0010 */        lw $t7, 0x10($t8) # dOMRotateDefaultAXYZ + 16
  /* 00938C 8000878C AE020018 */        sw $v0, 0x18($s0)
  /* 009390 80008790 AE020028 */        sw $v0, 0x28($s0)
  /* 009394 80008794 10000142 */         b L80008CA0
  /* 009398 80008798 AE0F0038 */        sw $t7, 0x38($s0)
  glabel L8000879C
  /* 00939C 8000879C 3C0E8004 */       lui $t6, %hi(dOMRotateDefaultRPY)
  /* 0093A0 800087A0 25CEB900 */     addiu $t6, $t6, %lo(dOMRotateDefaultRPY)
  /* 0093A4 800087A4 8DD90000 */        lw $t9, ($t6) # dOMRotateDefaultRPY + 0
  /* 0093A8 800087A8 AE190028 */        sw $t9, 0x28($s0)
  /* 0093AC 800087AC 8DD80004 */        lw $t8, 4($t6) # dOMRotateDefaultRPY + 4
  /* 0093B0 800087B0 AE18002C */        sw $t8, 0x2c($s0)
  /* 0093B4 800087B4 8DD90008 */        lw $t9, 8($t6) # dOMRotateDefaultRPY + 8
  /* 0093B8 800087B8 AE190030 */        sw $t9, 0x30($s0)
  /* 0093BC 800087BC 8DD8000C */        lw $t8, 0xc($t6) # dOMRotateDefaultRPY + 12
  /* 0093C0 800087C0 AE180034 */        sw $t8, 0x34($s0)
  /* 0093C4 800087C4 8DD90010 */        lw $t9, 0x10($t6) # dOMRotateDefaultRPY + 16
  /* 0093C8 800087C8 AE020028 */        sw $v0, 0x28($s0)
  /* 0093CC 800087CC 10000134 */         b L80008CA0
  /* 0093D0 800087D0 AE190038 */        sw $t9, 0x38($s0)
  glabel L800087D4
  /* 0093D4 800087D4 3C0F8004 */       lui $t7, %hi(dOMTranslateDefault)
  /* 0093D8 800087D8 25EFB8DC */     addiu $t7, $t7, %lo(dOMTranslateDefault)
  /* 0093DC 800087DC 8DF80000 */        lw $t8, ($t7) # dOMTranslateDefault + 0
  /* 0093E0 800087E0 3C198004 */       lui $t9, %hi(dOMRotateDefaultRPY)
  /* 0093E4 800087E4 2739B900 */     addiu $t9, $t9, %lo(dOMRotateDefaultRPY)
  /* 0093E8 800087E8 AE180018 */        sw $t8, 0x18($s0)
  /* 0093EC 800087EC 8DEE0004 */        lw $t6, 4($t7) # dOMTranslateDefault + 4
  /* 0093F0 800087F0 AE0E001C */        sw $t6, 0x1c($s0)
  /* 0093F4 800087F4 8DF80008 */        lw $t8, 8($t7) # dOMTranslateDefault + 8
  /* 0093F8 800087F8 AE180020 */        sw $t8, 0x20($s0)
  /* 0093FC 800087FC 8DEE000C */        lw $t6, 0xc($t7) # dOMTranslateDefault + 12
  /* 009400 80008800 AE0E0024 */        sw $t6, 0x24($s0)
  /* 009404 80008804 8F2E0000 */        lw $t6, ($t9) # dOMRotateDefaultRPY + 0
  /* 009408 80008808 AE0E0028 */        sw $t6, 0x28($s0)
  /* 00940C 8000880C 8F2F0004 */        lw $t7, 4($t9) # dOMRotateDefaultRPY + 4
  /* 009410 80008810 AE0F002C */        sw $t7, 0x2c($s0)
  /* 009414 80008814 8F2E0008 */        lw $t6, 8($t9) # dOMRotateDefaultRPY + 8
  /* 009418 80008818 AE0E0030 */        sw $t6, 0x30($s0)
  /* 00941C 8000881C 8F2F000C */        lw $t7, 0xc($t9) # dOMRotateDefaultRPY + 12
  /* 009420 80008820 AE0F0034 */        sw $t7, 0x34($s0)
  /* 009424 80008824 8F2E0010 */        lw $t6, 0x10($t9) # dOMRotateDefaultRPY + 16
  /* 009428 80008828 AE020018 */        sw $v0, 0x18($s0)
  /* 00942C 8000882C AE020028 */        sw $v0, 0x28($s0)
  /* 009430 80008830 1000011B */         b L80008CA0
  /* 009434 80008834 AE0E0038 */        sw $t6, 0x38($s0)
  glabel L80008838
  /* 009438 80008838 3C188004 */       lui $t8, %hi(dOMTranslateDefault)
  /* 00943C 8000883C 2718B8DC */     addiu $t8, $t8, %lo(dOMTranslateDefault)
  /* 009440 80008840 8F0F0000 */        lw $t7, ($t8) # dOMTranslateDefault + 0
  /* 009444 80008844 3C0E8004 */       lui $t6, %hi(dOMRotateDefaultAXYZ)
  /* 009448 80008848 25CEB8EC */     addiu $t6, $t6, %lo(dOMRotateDefaultAXYZ)
  /* 00944C 8000884C AE0F0018 */        sw $t7, 0x18($s0)
  /* 009450 80008850 8F190004 */        lw $t9, 4($t8) # dOMTranslateDefault + 4
  /* 009454 80008854 AE19001C */        sw $t9, 0x1c($s0)
  /* 009458 80008858 8F0F0008 */        lw $t7, 8($t8) # dOMTranslateDefault + 8
  /* 00945C 8000885C AE0F0020 */        sw $t7, 0x20($s0)
  /* 009460 80008860 8F19000C */        lw $t9, 0xc($t8) # dOMTranslateDefault + 12
  /* 009464 80008864 3C0F8004 */       lui $t7, %hi(dOMScaleDefault)
  /* 009468 80008868 25EFB914 */     addiu $t7, $t7, %lo(dOMScaleDefault)
  /* 00946C 8000886C AE190024 */        sw $t9, 0x24($s0)
  /* 009470 80008870 8DD90000 */        lw $t9, ($t6) # dOMRotateDefaultAXYZ + 0
  /* 009474 80008874 AE190028 */        sw $t9, 0x28($s0)
  /* 009478 80008878 8DD80004 */        lw $t8, 4($t6) # dOMRotateDefaultAXYZ + 4
  /* 00947C 8000887C AE18002C */        sw $t8, 0x2c($s0)
  /* 009480 80008880 8DD90008 */        lw $t9, 8($t6) # dOMRotateDefaultAXYZ + 8
  /* 009484 80008884 AE190030 */        sw $t9, 0x30($s0)
  /* 009488 80008888 8DD8000C */        lw $t8, 0xc($t6) # dOMRotateDefaultAXYZ + 12
  /* 00948C 8000888C AE180034 */        sw $t8, 0x34($s0)
  /* 009490 80008890 8DD90010 */        lw $t9, 0x10($t6) # dOMRotateDefaultAXYZ + 16
  /* 009494 80008894 AE190038 */        sw $t9, 0x38($s0)
  /* 009498 80008898 8DF80000 */        lw $t8, ($t7) # dOMScaleDefault + 0
  /* 00949C 8000889C AE18003C */        sw $t8, 0x3c($s0)
  /* 0094A0 800088A0 8DEE0004 */        lw $t6, 4($t7) # dOMScaleDefault + 4
  /* 0094A4 800088A4 AE0E0040 */        sw $t6, 0x40($s0)
  /* 0094A8 800088A8 8DF80008 */        lw $t8, 8($t7) # dOMScaleDefault + 8
  /* 0094AC 800088AC AE180044 */        sw $t8, 0x44($s0)
  /* 0094B0 800088B0 8DEE000C */        lw $t6, 0xc($t7) # dOMScaleDefault + 12
  /* 0094B4 800088B4 AE020018 */        sw $v0, 0x18($s0)
  /* 0094B8 800088B8 AE020028 */        sw $v0, 0x28($s0)
  /* 0094BC 800088BC AE02003C */        sw $v0, 0x3c($s0)
  /* 0094C0 800088C0 100000F7 */         b L80008CA0
  /* 0094C4 800088C4 AE0E0048 */        sw $t6, 0x48($s0)
  glabel L800088C8
  /* 0094C8 800088C8 3C198004 */       lui $t9, %hi(dOMTranslateDefault)
  /* 0094CC 800088CC 2739B8DC */     addiu $t9, $t9, %lo(dOMTranslateDefault)
  /* 0094D0 800088D0 8F2E0000 */        lw $t6, ($t9) # dOMTranslateDefault + 0
  /* 0094D4 800088D4 3C188004 */       lui $t8, %hi(dOMRotateDefaultRPY)
  /* 0094D8 800088D8 2718B900 */     addiu $t8, $t8, %lo(dOMRotateDefaultRPY)
  /* 0094DC 800088DC AE0E0018 */        sw $t6, 0x18($s0)
  /* 0094E0 800088E0 8F2F0004 */        lw $t7, 4($t9) # dOMTranslateDefault + 4
  /* 0094E4 800088E4 AE0F001C */        sw $t7, 0x1c($s0)
  /* 0094E8 800088E8 8F2E0008 */        lw $t6, 8($t9) # dOMTranslateDefault + 8
  /* 0094EC 800088EC AE0E0020 */        sw $t6, 0x20($s0)
  /* 0094F0 800088F0 8F2F000C */        lw $t7, 0xc($t9) # dOMTranslateDefault + 12
  /* 0094F4 800088F4 3C0E8004 */       lui $t6, %hi(dOMScaleDefault)
  /* 0094F8 800088F8 25CEB914 */     addiu $t6, $t6, %lo(dOMScaleDefault)
  /* 0094FC 800088FC AE0F0024 */        sw $t7, 0x24($s0)
  /* 009500 80008900 8F0F0000 */        lw $t7, ($t8) # dOMRotateDefaultRPY + 0
  /* 009504 80008904 AE0F0028 */        sw $t7, 0x28($s0)
  /* 009508 80008908 8F190004 */        lw $t9, 4($t8) # dOMRotateDefaultRPY + 4
  /* 00950C 8000890C AE19002C */        sw $t9, 0x2c($s0)
  /* 009510 80008910 8F0F0008 */        lw $t7, 8($t8) # dOMRotateDefaultRPY + 8
  /* 009514 80008914 AE0F0030 */        sw $t7, 0x30($s0)
  /* 009518 80008918 8F19000C */        lw $t9, 0xc($t8) # dOMRotateDefaultRPY + 12
  /* 00951C 8000891C AE190034 */        sw $t9, 0x34($s0)
  /* 009520 80008920 8F0F0010 */        lw $t7, 0x10($t8) # dOMRotateDefaultRPY + 16
  /* 009524 80008924 AE0F0038 */        sw $t7, 0x38($s0)
  /* 009528 80008928 8DD90000 */        lw $t9, ($t6) # dOMScaleDefault + 0
  /* 00952C 8000892C AE19003C */        sw $t9, 0x3c($s0)
  /* 009530 80008930 8DD80004 */        lw $t8, 4($t6) # dOMScaleDefault + 4
  /* 009534 80008934 AE180040 */        sw $t8, 0x40($s0)
  /* 009538 80008938 8DD90008 */        lw $t9, 8($t6) # dOMScaleDefault + 8
  /* 00953C 8000893C AE190044 */        sw $t9, 0x44($s0)
  /* 009540 80008940 8DD8000C */        lw $t8, 0xc($t6) # dOMScaleDefault + 12
  /* 009544 80008944 AE020018 */        sw $v0, 0x18($s0)
  /* 009548 80008948 AE020028 */        sw $v0, 0x28($s0)
  /* 00954C 8000894C AE02003C */        sw $v0, 0x3c($s0)
  /* 009550 80008950 100000D3 */         b L80008CA0
  /* 009554 80008954 AE180048 */        sw $t8, 0x48($s0)
  glabel L80008958
  /* 009558 80008958 3C0F8004 */       lui $t7, %hi(dOMScaleDefault)
  /* 00955C 8000895C 25EFB914 */     addiu $t7, $t7, %lo(dOMScaleDefault)
  /* 009560 80008960 8DF80000 */        lw $t8, ($t7) # dOMScaleDefault + 0
  /* 009564 80008964 AE18003C */        sw $t8, 0x3c($s0)
  /* 009568 80008968 8DEE0004 */        lw $t6, 4($t7) # dOMScaleDefault + 4
  /* 00956C 8000896C AE0E0040 */        sw $t6, 0x40($s0)
  /* 009570 80008970 8DF80008 */        lw $t8, 8($t7) # dOMScaleDefault + 8
  /* 009574 80008974 AE180044 */        sw $t8, 0x44($s0)
  /* 009578 80008978 8DEE000C */        lw $t6, 0xc($t7) # dOMScaleDefault + 12
  /* 00957C 8000897C AE02003C */        sw $v0, 0x3c($s0)
  /* 009580 80008980 100000C7 */         b L80008CA0
  /* 009584 80008984 AE0E0048 */        sw $t6, 0x48($s0)
  glabel L80008988
  /* 009588 80008988 3C198004 */       lui $t9, %hi(dOMRotateDefaultAXYZ)
  /* 00958C 8000898C 2739B8EC */     addiu $t9, $t9, %lo(dOMRotateDefaultAXYZ)
  /* 009590 80008990 8F2E0000 */        lw $t6, ($t9) # dOMRotateDefaultAXYZ + 0
  /* 009594 80008994 3C188004 */       lui $t8, %hi(dOMScaleDefault)
  /* 009598 80008998 2718B914 */     addiu $t8, $t8, %lo(dOMScaleDefault)
  /* 00959C 8000899C AE0E0028 */        sw $t6, 0x28($s0)
  /* 0095A0 800089A0 8F2F0004 */        lw $t7, 4($t9) # dOMRotateDefaultAXYZ + 4
  /* 0095A4 800089A4 AE0F002C */        sw $t7, 0x2c($s0)
  /* 0095A8 800089A8 8F2E0008 */        lw $t6, 8($t9) # dOMRotateDefaultAXYZ + 8
  /* 0095AC 800089AC AE0E0030 */        sw $t6, 0x30($s0)
  /* 0095B0 800089B0 8F2F000C */        lw $t7, 0xc($t9) # dOMRotateDefaultAXYZ + 12
  /* 0095B4 800089B4 AE0F0034 */        sw $t7, 0x34($s0)
  /* 0095B8 800089B8 8F2E0010 */        lw $t6, 0x10($t9) # dOMRotateDefaultAXYZ + 16
  /* 0095BC 800089BC AE0E0038 */        sw $t6, 0x38($s0)
  /* 0095C0 800089C0 8F0F0000 */        lw $t7, ($t8) # dOMScaleDefault + 0
  /* 0095C4 800089C4 AE0F003C */        sw $t7, 0x3c($s0)
  /* 0095C8 800089C8 8F190004 */        lw $t9, 4($t8) # dOMScaleDefault + 4
  /* 0095CC 800089CC AE190040 */        sw $t9, 0x40($s0)
  /* 0095D0 800089D0 8F0F0008 */        lw $t7, 8($t8) # dOMScaleDefault + 8
  /* 0095D4 800089D4 AE0F0044 */        sw $t7, 0x44($s0)
  /* 0095D8 800089D8 8F19000C */        lw $t9, 0xc($t8) # dOMScaleDefault + 12
  /* 0095DC 800089DC AE020028 */        sw $v0, 0x28($s0)
  /* 0095E0 800089E0 AE02003C */        sw $v0, 0x3c($s0)
  /* 0095E4 800089E4 100000AE */         b L80008CA0
  /* 0095E8 800089E8 AE190048 */        sw $t9, 0x48($s0)
  glabel L800089EC
  /* 0095EC 800089EC 3C0E8004 */       lui $t6, %hi(dOMTranslateDefault)
  /* 0095F0 800089F0 25CEB8DC */     addiu $t6, $t6, %lo(dOMTranslateDefault)
  /* 0095F4 800089F4 8DD90000 */        lw $t9, ($t6) # dOMTranslateDefault + 0
  /* 0095F8 800089F8 AD590000 */        sw $t9, ($t2)
  /* 0095FC 800089FC 8DD80004 */        lw $t8, 4($t6) # dOMTranslateDefault + 4
  /* 009600 80008A00 AD580004 */        sw $t8, 4($t2)
  /* 009604 80008A04 8DD90008 */        lw $t9, 8($t6) # dOMTranslateDefault + 8
  /* 009608 80008A08 AD590008 */        sw $t9, 8($t2)
  /* 00960C 80008A0C 8DD8000C */        lw $t8, 0xc($t6) # dOMTranslateDefault + 12
  /* 009610 80008A10 AD420000 */        sw $v0, ($t2)
  /* 009614 80008A14 100000A2 */         b L80008CA0
  /* 009618 80008A18 AD58000C */        sw $t8, 0xc($t2)
  glabel L80008A1C
  /* 00961C 80008A1C 3C0F8004 */       lui $t7, %hi(dOMRotateDefaultAXYZ)
  /* 009620 80008A20 25EFB8EC */     addiu $t7, $t7, %lo(dOMRotateDefaultAXYZ)
  /* 009624 80008A24 8DF80000 */        lw $t8, ($t7) # dOMRotateDefaultAXYZ + 0
  /* 009628 80008A28 AD380000 */        sw $t8, ($t1)
  /* 00962C 80008A2C 8DEE0004 */        lw $t6, 4($t7) # dOMRotateDefaultAXYZ + 4
  /* 009630 80008A30 AD2E0004 */        sw $t6, 4($t1)
  /* 009634 80008A34 8DF80008 */        lw $t8, 8($t7) # dOMRotateDefaultAXYZ + 8
  /* 009638 80008A38 AD380008 */        sw $t8, 8($t1)
  /* 00963C 80008A3C 8DEE000C */        lw $t6, 0xc($t7) # dOMRotateDefaultAXYZ + 12
  /* 009640 80008A40 AD2E000C */        sw $t6, 0xc($t1)
  /* 009644 80008A44 8DF80010 */        lw $t8, 0x10($t7) # dOMRotateDefaultAXYZ + 16
  /* 009648 80008A48 AD220000 */        sw $v0, ($t1)
  /* 00964C 80008A4C 10000094 */         b L80008CA0
  /* 009650 80008A50 AD380010 */        sw $t8, 0x10($t1)
  glabel L80008A54
  /* 009654 80008A54 3C198004 */       lui $t9, %hi(dOMRotateDefaultRPY)
  /* 009658 80008A58 2739B900 */     addiu $t9, $t9, %lo(dOMRotateDefaultRPY)
  /* 00965C 80008A5C 8F2E0000 */        lw $t6, ($t9) # dOMRotateDefaultRPY + 0
  /* 009660 80008A60 AD2E0000 */        sw $t6, ($t1)
  /* 009664 80008A64 8F2F0004 */        lw $t7, 4($t9) # dOMRotateDefaultRPY + 4
  /* 009668 80008A68 AD2F0004 */        sw $t7, 4($t1)
  /* 00966C 80008A6C 8F2E0008 */        lw $t6, 8($t9) # dOMRotateDefaultRPY + 8
  /* 009670 80008A70 AD2E0008 */        sw $t6, 8($t1)
  /* 009674 80008A74 8F2F000C */        lw $t7, 0xc($t9) # dOMRotateDefaultRPY + 12
  /* 009678 80008A78 AD2F000C */        sw $t7, 0xc($t1)
  /* 00967C 80008A7C 8F2E0010 */        lw $t6, 0x10($t9) # dOMRotateDefaultRPY + 16
  /* 009680 80008A80 AD220000 */        sw $v0, ($t1)
  /* 009684 80008A84 10000086 */         b L80008CA0
  /* 009688 80008A88 AD2E0010 */        sw $t6, 0x10($t1)
  glabel L80008A8C
  /* 00968C 80008A8C 3C188004 */       lui $t8, %hi(dOMScaleDefault)
  /* 009690 80008A90 2718B914 */     addiu $t8, $t8, %lo(dOMScaleDefault)
  /* 009694 80008A94 8F0F0000 */        lw $t7, ($t8) # dOMScaleDefault + 0
  /* 009698 80008A98 AD8F0000 */        sw $t7, ($t4)
  /* 00969C 80008A9C 8F190004 */        lw $t9, 4($t8) # dOMScaleDefault + 4
  /* 0096A0 80008AA0 AD990004 */        sw $t9, 4($t4)
  /* 0096A4 80008AA4 8F0F0008 */        lw $t7, 8($t8) # dOMScaleDefault + 8
  /* 0096A8 80008AA8 AD8F0008 */        sw $t7, 8($t4)
  /* 0096AC 80008AAC 8F19000C */        lw $t9, 0xc($t8) # dOMScaleDefault + 12
  /* 0096B0 80008AB0 AD820000 */        sw $v0, ($t4)
  /* 0096B4 80008AB4 1000007A */         b L80008CA0
  /* 0096B8 80008AB8 AD99000C */        sw $t9, 0xc($t4)
  glabel L80008ABC
  /* 0096BC 80008ABC 3C0E8004 */       lui $t6, %hi(dOMTranslateDefault)
  /* 0096C0 80008AC0 25CEB8DC */     addiu $t6, $t6, %lo(dOMTranslateDefault)
  /* 0096C4 80008AC4 8DD90000 */        lw $t9, ($t6) # dOMTranslateDefault + 0
  /* 0096C8 80008AC8 3C0F8004 */       lui $t7, %hi(dOMRotateDefaultAXYZ)
  /* 0096CC 80008ACC 25EFB8EC */     addiu $t7, $t7, %lo(dOMRotateDefaultAXYZ)
  /* 0096D0 80008AD0 AD590000 */        sw $t9, ($t2)
  /* 0096D4 80008AD4 8DD80004 */        lw $t8, 4($t6) # dOMTranslateDefault + 4
  /* 0096D8 80008AD8 AD580004 */        sw $t8, 4($t2)
  /* 0096DC 80008ADC 8DD90008 */        lw $t9, 8($t6) # dOMTranslateDefault + 8
  /* 0096E0 80008AE0 AD590008 */        sw $t9, 8($t2)
  /* 0096E4 80008AE4 8DD8000C */        lw $t8, 0xc($t6) # dOMTranslateDefault + 12
  /* 0096E8 80008AE8 AD58000C */        sw $t8, 0xc($t2)
  /* 0096EC 80008AEC 8DF80000 */        lw $t8, ($t7) # dOMRotateDefaultAXYZ + 0
  /* 0096F0 80008AF0 AD380000 */        sw $t8, ($t1)
  /* 0096F4 80008AF4 8DEE0004 */        lw $t6, 4($t7) # dOMRotateDefaultAXYZ + 4
  /* 0096F8 80008AF8 AD2E0004 */        sw $t6, 4($t1)
  /* 0096FC 80008AFC 8DF80008 */        lw $t8, 8($t7) # dOMRotateDefaultAXYZ + 8
  /* 009700 80008B00 AD380008 */        sw $t8, 8($t1)
  /* 009704 80008B04 8DEE000C */        lw $t6, 0xc($t7) # dOMRotateDefaultAXYZ + 12
  /* 009708 80008B08 AD2E000C */        sw $t6, 0xc($t1)
  /* 00970C 80008B0C 8DF80010 */        lw $t8, 0x10($t7) # dOMRotateDefaultAXYZ + 16
  /* 009710 80008B10 AD220000 */        sw $v0, ($t1)
  /* 009714 80008B14 AD380010 */        sw $t8, 0x10($t1)
  /* 009718 80008B18 10000061 */         b L80008CA0
  /* 00971C 80008B1C AD420000 */        sw $v0, ($t2)
  glabel L80008B20
  /* 009720 80008B20 3C198004 */       lui $t9, %hi(dOMTranslateDefault)
  /* 009724 80008B24 2739B8DC */     addiu $t9, $t9, %lo(dOMTranslateDefault)
  /* 009728 80008B28 8F2E0000 */        lw $t6, ($t9) # dOMTranslateDefault + 0
  /* 00972C 80008B2C 3C188004 */       lui $t8, %hi(dOMRotateDefaultAXYZ)
  /* 009730 80008B30 2718B8EC */     addiu $t8, $t8, %lo(dOMRotateDefaultAXYZ)
  /* 009734 80008B34 AD4E0000 */        sw $t6, ($t2)
  /* 009738 80008B38 8F2F0004 */        lw $t7, 4($t9) # dOMTranslateDefault + 4
  /* 00973C 80008B3C AD4F0004 */        sw $t7, 4($t2)
  /* 009740 80008B40 8F2E0008 */        lw $t6, 8($t9) # dOMTranslateDefault + 8
  /* 009744 80008B44 AD4E0008 */        sw $t6, 8($t2)
  /* 009748 80008B48 8F2F000C */        lw $t7, 0xc($t9) # dOMTranslateDefault + 12
  /* 00974C 80008B4C 3C0E8004 */       lui $t6, %hi(dOMScaleDefault)
  /* 009750 80008B50 25CEB914 */     addiu $t6, $t6, %lo(dOMScaleDefault)
  /* 009754 80008B54 AD4F000C */        sw $t7, 0xc($t2)
  /* 009758 80008B58 8F0F0000 */        lw $t7, ($t8) # dOMRotateDefaultAXYZ + 0
  /* 00975C 80008B5C AD2F0000 */        sw $t7, ($t1)
  /* 009760 80008B60 8F190004 */        lw $t9, 4($t8) # dOMRotateDefaultAXYZ + 4
  /* 009764 80008B64 AD390004 */        sw $t9, 4($t1)
  /* 009768 80008B68 8F0F0008 */        lw $t7, 8($t8) # dOMRotateDefaultAXYZ + 8
  /* 00976C 80008B6C AD2F0008 */        sw $t7, 8($t1)
  /* 009770 80008B70 8F19000C */        lw $t9, 0xc($t8) # dOMRotateDefaultAXYZ + 12
  /* 009774 80008B74 AD39000C */        sw $t9, 0xc($t1)
  /* 009778 80008B78 8F0F0010 */        lw $t7, 0x10($t8) # dOMRotateDefaultAXYZ + 16
  /* 00977C 80008B7C AD2F0010 */        sw $t7, 0x10($t1)
  /* 009780 80008B80 8DD90000 */        lw $t9, ($t6) # dOMScaleDefault + 0
  /* 009784 80008B84 AD990000 */        sw $t9, ($t4)
  /* 009788 80008B88 8DD80004 */        lw $t8, 4($t6) # dOMScaleDefault + 4
  /* 00978C 80008B8C AD980004 */        sw $t8, 4($t4)
  /* 009790 80008B90 8DD90008 */        lw $t9, 8($t6) # dOMScaleDefault + 8
  /* 009794 80008B94 AD990008 */        sw $t9, 8($t4)
  /* 009798 80008B98 8DD8000C */        lw $t8, 0xc($t6) # dOMScaleDefault + 12
  /* 00979C 80008B9C AD820000 */        sw $v0, ($t4)
  /* 0097A0 80008BA0 AD98000C */        sw $t8, 0xc($t4)
  /* 0097A4 80008BA4 AD220000 */        sw $v0, ($t1)
  /* 0097A8 80008BA8 1000003D */         b L80008CA0
  /* 0097AC 80008BAC AD420000 */        sw $v0, ($t2)
  glabel L80008BB0
  /* 0097B0 80008BB0 3C0F8004 */       lui $t7, %hi(dOMTranslateDefault)
  /* 0097B4 80008BB4 25EFB8DC */     addiu $t7, $t7, %lo(dOMTranslateDefault)
  /* 0097B8 80008BB8 8DF80000 */        lw $t8, ($t7) # dOMTranslateDefault + 0
  /* 0097BC 80008BBC 3C198004 */       lui $t9, %hi(dOMRotateDefaultRPY)
  /* 0097C0 80008BC0 2739B900 */     addiu $t9, $t9, %lo(dOMRotateDefaultRPY)
  /* 0097C4 80008BC4 AD580000 */        sw $t8, ($t2)
  /* 0097C8 80008BC8 8DEE0004 */        lw $t6, 4($t7) # dOMTranslateDefault + 4
  /* 0097CC 80008BCC AD4E0004 */        sw $t6, 4($t2)
  /* 0097D0 80008BD0 8DF80008 */        lw $t8, 8($t7) # dOMTranslateDefault + 8
  /* 0097D4 80008BD4 AD580008 */        sw $t8, 8($t2)
  /* 0097D8 80008BD8 8DEE000C */        lw $t6, 0xc($t7) # dOMTranslateDefault + 12
  /* 0097DC 80008BDC AD4E000C */        sw $t6, 0xc($t2)
  /* 0097E0 80008BE0 8F2E0000 */        lw $t6, ($t9) # dOMRotateDefaultRPY + 0
  /* 0097E4 80008BE4 AD2E0000 */        sw $t6, ($t1)
  /* 0097E8 80008BE8 8F2F0004 */        lw $t7, 4($t9) # dOMRotateDefaultRPY + 4
  /* 0097EC 80008BEC AD2F0004 */        sw $t7, 4($t1)
  /* 0097F0 80008BF0 8F2E0008 */        lw $t6, 8($t9) # dOMRotateDefaultRPY + 8
  /* 0097F4 80008BF4 AD2E0008 */        sw $t6, 8($t1)
  /* 0097F8 80008BF8 8F2F000C */        lw $t7, 0xc($t9) # dOMRotateDefaultRPY + 12
  /* 0097FC 80008BFC AD2F000C */        sw $t7, 0xc($t1)
  /* 009800 80008C00 8F2E0010 */        lw $t6, 0x10($t9) # dOMRotateDefaultRPY + 16
  /* 009804 80008C04 AD220000 */        sw $v0, ($t1)
  /* 009808 80008C08 AD2E0010 */        sw $t6, 0x10($t1)
  /* 00980C 80008C0C 10000024 */         b L80008CA0
  /* 009810 80008C10 AD420000 */        sw $v0, ($t2)
  glabel L80008C14
  /* 009814 80008C14 3C188004 */       lui $t8, %hi(dOMTranslateDefault)
  /* 009818 80008C18 2718B8DC */     addiu $t8, $t8, %lo(dOMTranslateDefault)
  /* 00981C 80008C1C 8F0F0000 */        lw $t7, ($t8) # dOMTranslateDefault + 0
  /* 009820 80008C20 3C0E8004 */       lui $t6, %hi(dOMRotateDefaultRPY)
  /* 009824 80008C24 25CEB900 */     addiu $t6, $t6, %lo(dOMRotateDefaultRPY)
  /* 009828 80008C28 AD4F0000 */        sw $t7, ($t2)
  /* 00982C 80008C2C 8F190004 */        lw $t9, 4($t8) # dOMTranslateDefault + 4
  /* 009830 80008C30 AD590004 */        sw $t9, 4($t2)
  /* 009834 80008C34 8F0F0008 */        lw $t7, 8($t8) # dOMTranslateDefault + 8
  /* 009838 80008C38 AD4F0008 */        sw $t7, 8($t2)
  /* 00983C 80008C3C 8F19000C */        lw $t9, 0xc($t8) # dOMTranslateDefault + 12
  /* 009840 80008C40 3C0F8004 */       lui $t7, %hi(dOMScaleDefault)
  /* 009844 80008C44 25EFB914 */     addiu $t7, $t7, %lo(dOMScaleDefault)
  /* 009848 80008C48 AD59000C */        sw $t9, 0xc($t2)
  /* 00984C 80008C4C 8DD90000 */        lw $t9, ($t6) # dOMRotateDefaultRPY + 0
  /* 009850 80008C50 AD390000 */        sw $t9, ($t1)
  /* 009854 80008C54 8DD80004 */        lw $t8, 4($t6) # dOMRotateDefaultRPY + 4
  /* 009858 80008C58 AD380004 */        sw $t8, 4($t1)
  /* 00985C 80008C5C 8DD90008 */        lw $t9, 8($t6) # dOMRotateDefaultRPY + 8
  /* 009860 80008C60 AD390008 */        sw $t9, 8($t1)
  /* 009864 80008C64 8DD8000C */        lw $t8, 0xc($t6) # dOMRotateDefaultRPY + 12
  /* 009868 80008C68 AD38000C */        sw $t8, 0xc($t1)
  /* 00986C 80008C6C 8DD90010 */        lw $t9, 0x10($t6) # dOMRotateDefaultRPY + 16
  /* 009870 80008C70 AD390010 */        sw $t9, 0x10($t1)
  /* 009874 80008C74 8DF80000 */        lw $t8, ($t7) # dOMScaleDefault + 0
  /* 009878 80008C78 AD980000 */        sw $t8, ($t4)
  /* 00987C 80008C7C 8DEE0004 */        lw $t6, 4($t7) # dOMScaleDefault + 4
  /* 009880 80008C80 AD8E0004 */        sw $t6, 4($t4)
  /* 009884 80008C84 8DF80008 */        lw $t8, 8($t7) # dOMScaleDefault + 8
  /* 009888 80008C88 AD980008 */        sw $t8, 8($t4)
  /* 00988C 80008C8C 8DEE000C */        lw $t6, 0xc($t7) # dOMScaleDefault + 12
  /* 009890 80008C90 AD820000 */        sw $v0, ($t4)
  /* 009894 80008C94 AD8E000C */        sw $t6, 0xc($t4)
  /* 009898 80008C98 AD220000 */        sw $v0, ($t1)
  /* 00989C 80008C9C AD420000 */        sw $v0, ($t2)
  glabel L80008CA0
  /* 0098A0 80008CA0 93B9003B */       lbu $t9, 0x3b($sp)
  /* 0098A4 80008CA4 00801025 */        or $v0, $a0, $zero
  /* 0098A8 80008CA8 A0990005 */        sb $t9, 5($a0)
  /* 0098AC 80008CAC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 0098B0 80008CB0 8FB00018 */        lw $s0, 0x18($sp)
  /* 0098B4 80008CB4 27BD0030 */     addiu $sp, $sp, 0x30
  /* 0098B8 80008CB8 03E00008 */        jr $ra
  /* 0098BC 80008CBC 00000000 */       nop 

