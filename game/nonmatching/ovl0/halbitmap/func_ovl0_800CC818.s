.section .late_rodata

glabel D_ovl0_800D5EC4
  /* E684 0518A4 800D5EC4 */
  .word 0x38d1b717 # .float 0.0001

glabel D_ovl0_800D5EC8
  /* E688 0518A8 800D5EC8 */
  .word 0x3f7ff972 # .float 0.9999

glabel D_ovl0_800D5ECC
  /* E68C 0518AC 800D5ECC */
  .word 0x3f7ff972 # .float 0.9999

glabel D_ovl0_800D5ED0
  /* E690 0518B0 800D5ED0 */
  .word 0x3f7ff972 # .float 0.9999

glabel D_ovl0_800D5ED4
  /* E694 0518B4 800D5ED4 */
  .word 0x3f7ff972 # .float 0.9999
  #.incbin "ovl0.raw.bin", 0xE698, 0x8

.section .text
glabel func_ovl0_800CC818
  /* 0481F8 800CC818 27BDFF20 */     addiu $sp, $sp, -0xe0
  /* 0481FC 800CC81C AFB60070 */        sw $s6, 0x70($sp)
  /* 048200 800CC820 24B60010 */     addiu $s6, $a1, 0x10
  /* 048204 800CC824 AFBF007C */        sw $ra, 0x7c($sp)
  /* 048208 800CC828 AFBE0078 */        sw $fp, 0x78($sp)
  /* 04820C 800CC82C AFB70074 */        sw $s7, 0x74($sp)
  /* 048210 800CC830 AFB5006C */        sw $s5, 0x6c($sp)
  /* 048214 800CC834 AFB40068 */        sw $s4, 0x68($sp)
  /* 048218 800CC838 AFB30064 */        sw $s3, 0x64($sp)
  /* 04821C 800CC83C AFB20060 */        sw $s2, 0x60($sp)
  /* 048220 800CC840 AFB1005C */        sw $s1, 0x5c($sp)
  /* 048224 800CC844 AFB00058 */        sw $s0, 0x58($sp)
  /* 048228 800CC848 F7BA0050 */      sdc1 $f26, 0x50($sp)
  /* 04822C 800CC84C F7B80048 */      sdc1 $f24, 0x48($sp)
  /* 048230 800CC850 F7B60040 */      sdc1 $f22, 0x40($sp)
  /* 048234 800CC854 F7B40038 */      sdc1 $f20, 0x38($sp)
  /* 048238 800CC858 3C01800D */       lui $at, %hi(D_ovl0_800D5EC4)
  /* 04823C 800CC85C AFB600DC */        sw $s6, 0xdc($sp)
  /* 048240 800CC860 C4205EC4 */      lwc1 $f0, %lo(D_ovl0_800D5EC4)($at)
  /* 048244 800CC864 C4A40018 */      lwc1 $f4, 0x18($a1)
  /* 048248 800CC868 00A0B825 */        or $s7, $a1, $zero
  /* 04824C 800CC86C 4600203C */    c.lt.s $f4, $f0
  /* 048250 800CC870 00000000 */       nop 
  /* 048254 800CC874 4503017E */     bc1tl .L800CCE70
  /* 048258 800CC878 8FBF007C */        lw $ra, 0x7c($sp)
  /* 04825C 800CC87C C6D4000C */      lwc1 $f20, 0xc($s6)
  /* 048260 800CC880 4600A03C */    c.lt.s $f20, $f0
  /* 048264 800CC884 00000000 */       nop 
  /* 048268 800CC888 45030179 */     bc1tl .L800CCE70
  /* 04826C 800CC88C 8FBF007C */        lw $ra, 0x7c($sp)
  /* 048270 800CC890 8ED20034 */        lw $s2, 0x34($s6)
  /* 048274 800CC894 3C0A800D */       lui $t2, %hi(D_ovl0_800D62BC)
  /* 048278 800CC898 52400175 */      beql $s2, $zero, .L800CCE70
  /* 04827C 800CC89C 8FBF007C */        lw $ra, 0x7c($sp)
  /* 048280 800CC8A0 44800000 */      mtc1 $zero, $f0
  /* 048284 800CC8A4 C4B20058 */      lwc1 $f18, 0x58($a1)
  /* 048288 800CC8A8 3C01800D */       lui $at, %hi(D_ovl0_800D5EC8)
  /* 04828C 800CC8AC 3C0B800D */       lui $t3, %hi(D_ovl0_800D62C0)
  /* 048290 800CC8B0 4600903C */    c.lt.s $f18, $f0
  /* 048294 800CC8B4 00000000 */       nop 
  /* 048298 800CC8B8 45020008 */     bc1fl .L800CC8DC
  /* 04829C 800CC8BC 4600928D */ trunc.w.s $f10, $f18
  /* 0482A0 800CC8C0 C4365EC8 */      lwc1 $f22, %lo(D_ovl0_800D5EC8)($at)
  /* 0482A4 800CC8C4 46169181 */     sub.s $f6, $f18, $f22
  /* 0482A8 800CC8C8 4600320D */ trunc.w.s $f8, $f6
  /* 0482AC 800CC8CC 441E4000 */      mfc1 $fp, $f8
  /* 0482B0 800CC8D0 10000007 */         b .L800CC8F0
  /* 0482B4 800CC8D4 C6F0005C */      lwc1 $f16, 0x5c($s7)
  /* 0482B8 800CC8D8 4600928D */ trunc.w.s $f10, $f18
  .L800CC8DC:
  /* 0482BC 800CC8DC 3C01800D */       lui $at, %hi(D_ovl0_800D5ECC)
  /* 0482C0 800CC8E0 C4365ECC */      lwc1 $f22, %lo(D_ovl0_800D5ECC)($at)
  /* 0482C4 800CC8E4 441E5000 */      mfc1 $fp, $f10
  /* 0482C8 800CC8E8 00000000 */       nop 
  /* 0482CC 800CC8EC C6F0005C */      lwc1 $f16, 0x5c($s7)
  .L800CC8F0:
  /* 0482D0 800CC8F0 4600803C */    c.lt.s $f16, $f0
  /* 0482D4 800CC8F4 00000000 */       nop 
  /* 0482D8 800CC8F8 45020007 */     bc1fl .L800CC918
  /* 0482DC 800CC8FC 4600820D */ trunc.w.s $f8, $f16
  /* 0482E0 800CC900 46168101 */     sub.s $f4, $f16, $f22
  /* 0482E4 800CC904 4600218D */ trunc.w.s $f6, $f4
  /* 0482E8 800CC908 44033000 */      mfc1 $v1, $f6
  /* 0482EC 800CC90C 10000004 */         b .L800CC920
  /* 0482F0 800CC910 00000000 */       nop 
  /* 0482F4 800CC914 4600820D */ trunc.w.s $f8, $f16
  .L800CC918:
  /* 0482F8 800CC918 44034000 */      mfc1 $v1, $f8
  /* 0482FC 800CC91C 00000000 */       nop 
  .L800CC920:
  /* 048300 800CC920 8D4A62BC */        lw $t2, %lo(D_ovl0_800D62BC)($t2)
  /* 048304 800CC924 03CA082A */       slt $at, $fp, $t2
  /* 048308 800CC928 50200151 */      beql $at, $zero, .L800CCE70
  /* 04830C 800CC92C 8FBF007C */        lw $ra, 0x7c($sp)
  /* 048310 800CC930 8D6B62C0 */        lw $t3, %lo(D_ovl0_800D62C0)($t3)
  /* 048314 800CC934 006B082A */       slt $at, $v1, $t3
  /* 048318 800CC938 5020014D */      beql $at, $zero, .L800CCE70
  /* 04831C 800CC93C 8FBF007C */        lw $ra, 0x7c($sp)
  /* 048320 800CC940 92EC0065 */       lbu $t4, 0x65($s7)
  /* 048324 800CC944 24050002 */     addiu $a1, $zero, 2
  /* 048328 800CC948 54AC0004 */      bnel $a1, $t4, .L800CC95C
  /* 04832C 800CC94C 96E20068 */       lhu $v0, 0x68($s7)
  /* 048330 800CC950 10000002 */         b .L800CC95C
  /* 048334 800CC954 86C20004 */        lh $v0, 4($s6)
  /* 048338 800CC958 96E20068 */       lhu $v0, 0x68($s7)
  .L800CC95C:
  /* 04833C 800CC95C 92ED0064 */       lbu $t5, 0x64($s7)
  /* 048340 800CC960 54AD0005 */      bnel $a1, $t5, .L800CC978
  /* 048344 800CC964 96EF006A */       lhu $t7, 0x6a($s7)
  /* 048348 800CC968 86CE002C */        lh $t6, 0x2c($s6)
  /* 04834C 800CC96C 10000003 */         b .L800CC97C
  /* 048350 800CC970 AFAE00C8 */        sw $t6, 0xc8($sp)
  /* 048354 800CC974 96EF006A */       lhu $t7, 0x6a($s7)
  .L800CC978:
  /* 048358 800CC978 AFAF00C8 */        sw $t7, 0xc8($sp)
  .L800CC97C:
  /* 04835C 800CC97C 96D80014 */       lhu $t8, 0x14($s6)
  /* 048360 800CC980 33190020 */      andi $t9, $t8, 0x20
  /* 048364 800CC984 53200044 */      beql $t9, $zero, .L800CCA98
  /* 048368 800CC988 44825000 */      mtc1 $v0, $f10
  /* 04836C 800CC98C 44825000 */      mtc1 $v0, $f10
  /* 048370 800CC990 3C0B800D */       lui $t3, %hi(D_ovl0_800D62C4)
  /* 048374 800CC994 8D6B62C4 */        lw $t3, %lo(D_ovl0_800D62C4)($t3)
  /* 048378 800CC998 46805120 */   cvt.s.w $f4, $f10
  /* 04837C 800CC99C 00608025 */        or $s0, $v1, $zero
  /* 048380 800CC9A0 46049180 */     add.s $f6, $f18, $f4
  /* 048384 800CC9A4 4600320D */ trunc.w.s $f8, $f6
  /* 048388 800CC9A8 44134000 */      mfc1 $s3, $f8
  /* 04838C 800CC9AC 00000000 */       nop 
  /* 048390 800CC9B0 026B082A */       slt $at, $s3, $t3
  /* 048394 800CC9B4 5420012E */      bnel $at, $zero, .L800CCE70
  /* 048398 800CC9B8 8FBF007C */        lw $ra, 0x7c($sp)
  /* 04839C 800CC9BC 86C20028 */        lh $v0, 0x28($s6)
  /* 0483A0 800CC9C0 24010001 */     addiu $at, $zero, 1
  /* 0483A4 800CC9C4 2673FFFF */     addiu $s3, $s3, -1
  /* 0483A8 800CC9C8 14410012 */       bne $v0, $at, .L800CCA14
  /* 0483AC 800CC9CC 02E02825 */        or $a1, $s7, $zero
  /* 0483B0 800CC9D0 8FAC00C8 */        lw $t4, 0xc8($sp)
  /* 0483B4 800CC9D4 240E1000 */     addiu $t6, $zero, 0x1000
  /* 0483B8 800CC9D8 240F0400 */     addiu $t7, $zero, 0x400
  /* 0483BC 800CC9DC 006C6821 */      addu $t5, $v1, $t4
  /* 0483C0 800CC9E0 AFAD001C */        sw $t5, 0x1c($sp)
  /* 0483C4 800CC9E4 AFAF002C */        sw $t7, 0x2c($sp)
  /* 0483C8 800CC9E8 AFAE0028 */        sw $t6, 0x28($sp)
  /* 0483CC 800CC9EC 02C03025 */        or $a2, $s6, $zero
  /* 0483D0 800CC9F0 02403825 */        or $a3, $s2, $zero
  /* 0483D4 800CC9F4 AFBE0010 */        sw $fp, 0x10($sp)
  /* 0483D8 800CC9F8 AFA30014 */        sw $v1, 0x14($sp)
  /* 0483DC 800CC9FC AFB30018 */        sw $s3, 0x18($sp)
  /* 0483E0 800CCA00 AFA00020 */        sw $zero, 0x20($sp)
  /* 0483E4 800CCA04 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 0483E8 800CCA08 AFA00024 */        sw $zero, 0x24($sp)
  /* 0483EC 800CCA0C 10000118 */         b .L800CCE70
  /* 0483F0 800CCA10 8FBF007C */        lw $ra, 0x7c($sp)
  .L800CCA14:
  /* 0483F4 800CCA14 18400115 */      blez $v0, .L800CCE6C
  /* 0483F8 800CCA18 00001825 */        or $v1, $zero, $zero
  /* 0483FC 800CCA1C AFA400E0 */        sw $a0, 0xe0($sp)
  /* 048400 800CCA20 8FB800C8 */        lw $t8, 0xc8($sp)
  .L800CCA24:
  /* 048404 800CCA24 24191000 */     addiu $t9, $zero, 0x1000
  /* 048408 800CCA28 240A0400 */     addiu $t2, $zero, 0x400
  /* 04840C 800CCA2C 02188821 */      addu $s1, $s0, $t8
  /* 048410 800CCA30 8FA400E0 */        lw $a0, 0xe0($sp)
  /* 048414 800CCA34 AFB1001C */        sw $s1, 0x1c($sp)
  /* 048418 800CCA38 AFAA002C */        sw $t2, 0x2c($sp)
  /* 04841C 800CCA3C AFB90028 */        sw $t9, 0x28($sp)
  /* 048420 800CCA40 02E02825 */        or $a1, $s7, $zero
  /* 048424 800CCA44 02C03025 */        or $a2, $s6, $zero
  /* 048428 800CCA48 02403825 */        or $a3, $s2, $zero
  /* 04842C 800CCA4C AFBE0010 */        sw $fp, 0x10($sp)
  /* 048430 800CCA50 AFB00014 */        sw $s0, 0x14($sp)
  /* 048434 800CCA54 AFB30018 */        sw $s3, 0x18($sp)
  /* 048438 800CCA58 AFA00020 */        sw $zero, 0x20($sp)
  /* 04843C 800CCA5C AFA00024 */        sw $zero, 0x24($sp)
  /* 048440 800CCA60 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 048444 800CCA64 AFA300B0 */        sw $v1, 0xb0($sp)
  /* 048448 800CCA68 8FAB00DC */        lw $t3, 0xdc($sp)
  /* 04844C 800CCA6C 8FA300B0 */        lw $v1, 0xb0($sp)
  /* 048450 800CCA70 26520010 */     addiu $s2, $s2, 0x10
  /* 048454 800CCA74 856C0028 */        lh $t4, 0x28($t3)
  /* 048458 800CCA78 24630001 */     addiu $v1, $v1, 1
  /* 04845C 800CCA7C 02208025 */        or $s0, $s1, $zero
  /* 048460 800CCA80 006C082A */       slt $at, $v1, $t4
  /* 048464 800CCA84 5420FFE7 */      bnel $at, $zero, .L800CCA24
  /* 048468 800CCA88 8FB800C8 */        lw $t8, 0xc8($sp)
  /* 04846C 800CCA8C 100000F8 */         b .L800CCE70
  /* 048470 800CCA90 8FBF007C */        lw $ra, 0x7c($sp)
  /* 048474 800CCA94 44825000 */      mtc1 $v0, $f10
  .L800CCA98:
  /* 048478 800CCA98 C6C20008 */      lwc1 $f2, 8($s6)
  /* 04847C 800CCA9C 3C0E800D */       lui $t6, %hi(D_ovl0_800D62C4)
  /* 048480 800CCAA0 46805120 */   cvt.s.w $f4, $f10
  /* 048484 800CCAA4 8DCE62C4 */        lw $t6, %lo(D_ovl0_800D62C4)($t6)
  /* 048488 800CCAA8 46022182 */     mul.s $f6, $f4, $f2
  /* 04848C 800CCAAC 46069200 */     add.s $f8, $f18, $f6
  /* 048490 800CCAB0 46164280 */     add.s $f10, $f8, $f22
  /* 048494 800CCAB4 4600510D */ trunc.w.s $f4, $f10
  /* 048498 800CCAB8 44152000 */      mfc1 $s5, $f4
  /* 04849C 800CCABC 00000000 */       nop 
  /* 0484A0 800CCAC0 02AE082A */       slt $at, $s5, $t6
  /* 0484A4 800CCAC4 542000EA */      bnel $at, $zero, .L800CCE70
  /* 0484A8 800CCAC8 8FBF007C */        lw $ra, 0x7c($sp)
  /* 0484AC 800CCACC 449E3000 */      mtc1 $fp, $f6
  /* 0484B0 800CCAD0 44835000 */      mtc1 $v1, $f10
  /* 0484B4 800CCAD4 86CF0028 */        lh $t7, 0x28($s6)
  /* 0484B8 800CCAD8 46803220 */   cvt.s.w $f8, $f6
  /* 0484BC 800CCADC 24010001 */     addiu $at, $zero, 1
  /* 0484C0 800CCAE0 4600A006 */     mov.s $f0, $f20
  /* 0484C4 800CCAE4 8FB800C8 */        lw $t8, 0xc8($sp)
  /* 0484C8 800CCAE8 46805120 */   cvt.s.w $f4, $f10
  /* 0484CC 800CCAEC 46089301 */     sub.s $f12, $f18, $f8
  /* 0484D0 800CCAF0 15E1003F */       bne $t7, $at, .L800CCBF0
  /* 0484D4 800CCAF4 46048381 */     sub.s $f14, $f16, $f4
  /* 0484D8 800CCAF8 44983000 */      mtc1 $t8, $f6
  /* 0484DC 800CCAFC 3C014480 */       lui $at, (0x44800000 >> 16) # 1024.0
  /* 0484E0 800CCB00 44819000 */      mtc1 $at, $f18 # 1024.0 to cop1
  /* 0484E4 800CCB04 46803220 */   cvt.s.w $f8, $f6
  /* 0484E8 800CCB08 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 0484EC 800CCB0C 4481A000 */      mtc1 $at, $f20 # 0.5 to cop1
  /* 0484F0 800CCB10 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 0484F4 800CCB14 4481B000 */      mtc1 $at, $f22 # 16.0 to cop1
  /* 0484F8 800CCB18 3C014200 */       lui $at, (0x42000000 >> 16) # 32.0
  /* 0484FC 800CCB1C 46004282 */     mul.s $f10, $f8, $f0
  /* 048500 800CCB20 4481C000 */      mtc1 $at, $f24 # 32.0 to cop1
  /* 048504 800CCB24 3C01800D */       lui $at, %hi(D_ovl0_800D5ED0)
  /* 048508 800CCB28 C4265ED0 */      lwc1 $f6, %lo(D_ovl0_800D5ED0)($at)
  /* 04850C 800CCB2C 02E02825 */        or $a1, $s7, $zero
  /* 048510 800CCB30 02C03025 */        or $a2, $s6, $zero
  /* 048514 800CCB34 02403825 */        or $a3, $s2, $zero
  /* 048518 800CCB38 460A8100 */     add.s $f4, $f16, $f10
  /* 04851C 800CCB3C AFBE0010 */        sw $fp, 0x10($sp)
  /* 048520 800CCB40 AFA30014 */        sw $v1, 0x14($sp)
  /* 048524 800CCB44 AFB50018 */        sw $s5, 0x18($sp)
  /* 048528 800CCB48 46062200 */     add.s $f8, $f4, $f6
  /* 04852C 800CCB4C 46029103 */     div.s $f4, $f18, $f2
  /* 048530 800CCB50 4600428D */ trunc.w.s $f10, $f8
  /* 048534 800CCB54 44105000 */      mfc1 $s0, $f10
  /* 048538 800CCB58 00000000 */       nop 
  /* 04853C 800CCB5C AFB0001C */        sw $s0, 0x1c($sp)
  /* 048540 800CCB60 46142180 */     add.s $f6, $f4, $f20
  /* 048544 800CCB64 4600320D */ trunc.w.s $f8, $f6
  /* 048548 800CCB68 44114000 */      mfc1 $s1, $f8
  /* 04854C 800CCB6C 00000000 */       nop 
  /* 048550 800CCB70 44915000 */      mtc1 $s1, $f10
  /* 048554 800CCB74 AFB10028 */        sw $s1, 0x28($sp)
  /* 048558 800CCB78 46805120 */   cvt.s.w $f4, $f10
  /* 04855C 800CCB7C 460C2182 */     mul.s $f6, $f4, $f12
  /* 048560 800CCB80 46163200 */     add.s $f8, $f6, $f22
  /* 048564 800CCB84 46009183 */     div.s $f6, $f18, $f0
  /* 048568 800CCB88 46184283 */     div.s $f10, $f8, $f24
  /* 04856C 800CCB8C 46143200 */     add.s $f8, $f6, $f20
  /* 048570 800CCB90 4600510D */ trunc.w.s $f4, $f10
  /* 048574 800CCB94 4600428D */ trunc.w.s $f10, $f8
  /* 048578 800CCB98 440C2000 */      mfc1 $t4, $f4
  /* 04857C 800CCB9C 44135000 */      mfc1 $s3, $f10
  /* 048580 800CCBA0 000C6823 */      negu $t5, $t4
  /* 048584 800CCBA4 000D7400 */       sll $t6, $t5, 0x10
  /* 048588 800CCBA8 44932000 */      mtc1 $s3, $f4
  /* 04858C 800CCBAC 000E7C03 */       sra $t7, $t6, 0x10
  /* 048590 800CCBB0 AFAF0020 */        sw $t7, 0x20($sp)
  /* 048594 800CCBB4 468021A0 */   cvt.s.w $f6, $f4
  /* 048598 800CCBB8 AFB3002C */        sw $s3, 0x2c($sp)
  /* 04859C 800CCBBC 460E3202 */     mul.s $f8, $f6, $f14
  /* 0485A0 800CCBC0 46164280 */     add.s $f10, $f8, $f22
  /* 0485A4 800CCBC4 46185103 */     div.s $f4, $f10, $f24
  /* 0485A8 800CCBC8 4600218D */ trunc.w.s $f6, $f4
  /* 0485AC 800CCBCC 440A3000 */      mfc1 $t2, $f6
  /* 0485B0 800CCBD0 00000000 */       nop 
  /* 0485B4 800CCBD4 000A5823 */      negu $t3, $t2
  /* 0485B8 800CCBD8 000B6400 */       sll $t4, $t3, 0x10
  /* 0485BC 800CCBDC 000C6C03 */       sra $t5, $t4, 0x10
  /* 0485C0 800CCBE0 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 0485C4 800CCBE4 AFAD0024 */        sw $t5, 0x24($sp)
  /* 0485C8 800CCBE8 100000A1 */         b .L800CCE70
  /* 0485CC 800CCBEC 8FBF007C */        lw $ra, 0x7c($sp)
  .L800CCBF0:
  /* 0485D0 800CCBF0 AFA400E0 */        sw $a0, 0xe0($sp)
  /* 0485D4 800CCBF4 86CE002E */        lh $t6, 0x2e($s6)
  /* 0485D8 800CCBF8 3C014480 */       lui $at, (0x44800000 >> 16) # 1024.0
  /* 0485DC 800CCBFC 44819000 */      mtc1 $at, $f18 # 1024.0 to cop1
  /* 0485E0 800CCC00 448E4000 */      mtc1 $t6, $f8
  /* 0485E4 800CCC04 8FAF00C8 */        lw $t7, 0xc8($sp)
  /* 0485E8 800CCC08 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 0485EC 800CCC0C 468042A0 */   cvt.s.w $f10, $f8
  /* 0485F0 800CCC10 448F2000 */      mtc1 $t7, $f4
  /* 0485F4 800CCC14 E7A00090 */      swc1 $f0, 0x90($sp)
  /* 0485F8 800CCC18 AFB50018 */        sw $s5, 0x18($sp)
  /* 0485FC 800CCC1C AFA30014 */        sw $v1, 0x14($sp)
  /* 048600 800CCC20 468021A0 */   cvt.s.w $f6, $f4
  /* 048604 800CCC24 46005602 */     mul.s $f24, $f10, $f0
  /* 048608 800CCC28 44812000 */      mtc1 $at, $f4 # 0.5 to cop1
  /* 04860C 800CCC2C 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 048610 800CCC30 AFBE0010 */        sw $fp, 0x10($sp)
  /* 048614 800CCC34 02E02825 */        or $a1, $s7, $zero
  /* 048618 800CCC38 46003582 */     mul.s $f22, $f6, $f0
  /* 04861C 800CCC3C 02C03025 */        or $a2, $s6, $zero
  /* 048620 800CCC40 02403825 */        or $a3, $s2, $zero
  /* 048624 800CCC44 46029283 */     div.s $f10, $f18, $f2
  /* 048628 800CCC48 46168500 */     add.s $f20, $f16, $f22
  /* 04862C 800CCC4C 4600A20D */ trunc.w.s $f8, $f20
  /* 048630 800CCC50 44104000 */      mfc1 $s0, $f8
  /* 048634 800CCC54 00000000 */       nop 
  /* 048638 800CCC58 AFB0001C */        sw $s0, 0x1c($sp)
  /* 04863C 800CCC5C 46045180 */     add.s $f6, $f10, $f4
  /* 048640 800CCC60 4600320D */ trunc.w.s $f8, $f6
  /* 048644 800CCC64 44114000 */      mfc1 $s1, $f8
  /* 048648 800CCC68 44814000 */      mtc1 $at, $f8 # 16.0 to cop1
  /* 04864C 800CCC6C 3C014200 */       lui $at, (0x42000000 >> 16) # 32.0
  /* 048650 800CCC70 44915000 */      mtc1 $s1, $f10
  /* 048654 800CCC74 AFB10028 */        sw $s1, 0x28($sp)
  /* 048658 800CCC78 46805120 */   cvt.s.w $f4, $f10
  /* 04865C 800CCC7C 460C2182 */     mul.s $f6, $f4, $f12
  /* 048660 800CCC80 44812000 */      mtc1 $at, $f4 # 32.0 to cop1
  /* 048664 800CCC84 3C013F00 */       lui $at, (0x3F000000 >> 16) # 0.5
  /* 048668 800CCC88 46083280 */     add.s $f10, $f6, $f8
  /* 04866C 800CCC8C 46045183 */     div.s $f6, $f10, $f4
  /* 048670 800CCC90 44812000 */      mtc1 $at, $f4 # 0.5 to cop1
  /* 048674 800CCC94 3C014180 */       lui $at, (0x41800000 >> 16) # 16.0
  /* 048678 800CCC98 46009283 */     div.s $f10, $f18, $f0
  /* 04867C 800CCC9C 4600320D */ trunc.w.s $f8, $f6
  /* 048680 800CCCA0 44144000 */      mfc1 $s4, $f8
  /* 048684 800CCCA4 00000000 */       nop 
  /* 048688 800CCCA8 0014A023 */      negu $s4, $s4
  /* 04868C 800CCCAC 0014A400 */       sll $s4, $s4, 0x10
  /* 048690 800CCCB0 0014A403 */       sra $s4, $s4, 0x10
  /* 048694 800CCCB4 AFB40020 */        sw $s4, 0x20($sp)
  /* 048698 800CCCB8 46045180 */     add.s $f6, $f10, $f4
  /* 04869C 800CCCBC 4600320D */ trunc.w.s $f8, $f6
  /* 0486A0 800CCCC0 44813000 */      mtc1 $at, $f6 # 16.0 to cop1
  /* 0486A4 800CCCC4 3C014200 */       lui $at, (0x42000000 >> 16) # 32.0
  /* 0486A8 800CCCC8 44134000 */      mfc1 $s3, $f8
  /* 0486AC 800CCCCC 00000000 */       nop 
  /* 0486B0 800CCCD0 44935000 */      mtc1 $s3, $f10
  /* 0486B4 800CCCD4 AFB3002C */        sw $s3, 0x2c($sp)
  /* 0486B8 800CCCD8 468056A0 */   cvt.s.w $f26, $f10
  /* 0486BC 800CCCDC 44815000 */      mtc1 $at, $f10 # 32.0 to cop1
  /* 0486C0 800CCCE0 460ED102 */     mul.s $f4, $f26, $f14
  /* 0486C4 800CCCE4 46062200 */     add.s $f8, $f4, $f6
  /* 0486C8 800CCCE8 460A4103 */     div.s $f4, $f8, $f10
  /* 0486CC 800CCCEC 4600218D */ trunc.w.s $f6, $f4
  /* 0486D0 800CCCF0 440D3000 */      mfc1 $t5, $f6
  /* 0486D4 800CCCF4 00000000 */       nop 
  /* 0486D8 800CCCF8 000D7023 */      negu $t6, $t5
  /* 0486DC 800CCCFC 000E7C00 */       sll $t7, $t6, 0x10
  /* 0486E0 800CCD00 000FC403 */       sra $t8, $t7, 0x10
  /* 0486E4 800CCD04 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 0486E8 800CCD08 AFB80024 */        sw $t8, 0x24($sp)
  /* 0486EC 800CCD0C 86D90028 */        lh $t9, 0x28($s6)
  /* 0486F0 800CCD10 26520010 */     addiu $s2, $s2, 0x10
  /* 0486F4 800CCD14 24030001 */     addiu $v1, $zero, 1
  /* 0486F8 800CCD18 272AFFFF */     addiu $t2, $t9, -1
  /* 0486FC 800CCD1C 29410002 */      slti $at, $t2, 2
  /* 048700 800CCD20 5420002C */      bnel $at, $zero, .L800CCDD4
  /* 048704 800CCD24 44903000 */      mtc1 $s0, $f6
  /* 048708 800CCD28 44904000 */      mtc1 $s0, $f8
  .L800CCD2C:
  /* 04870C 800CCD2C 02004825 */        or $t1, $s0, $zero
  /* 048710 800CCD30 AFA90014 */        sw $t1, 0x14($sp)
  /* 048714 800CCD34 468042A0 */   cvt.s.w $f10, $f8
  /* 048718 800CCD38 8FA400E0 */        lw $a0, 0xe0($sp)
  /* 04871C 800CCD3C 02E02825 */        or $a1, $s7, $zero
  /* 048720 800CCD40 02C03025 */        or $a2, $s6, $zero
  /* 048724 800CCD44 02403825 */        or $a3, $s2, $zero
  /* 048728 800CCD48 AFBE0010 */        sw $fp, 0x10($sp)
  /* 04872C 800CCD4C 460AA101 */     sub.s $f4, $f20, $f10
  /* 048730 800CCD50 AFB50018 */        sw $s5, 0x18($sp)
  /* 048734 800CCD54 AFB40020 */        sw $s4, 0x20($sp)
  /* 048738 800CCD58 4618A280 */     add.s $f10, $f20, $f24
  /* 04873C 800CCD5C 4604D182 */     mul.s $f6, $f26, $f4
  /* 048740 800CCD60 AFB10028 */        sw $s1, 0x28($sp)
  /* 048744 800CCD64 AFB3002C */        sw $s3, 0x2c($sp)
  /* 048748 800CCD68 AFA30080 */        sw $v1, 0x80($sp)
  /* 04874C 800CCD6C 4600510D */ trunc.w.s $f4, $f10
  /* 048750 800CCD70 4600320D */ trunc.w.s $f8, $f6
  /* 048754 800CCD74 44102000 */      mfc1 $s0, $f4
  /* 048758 800CCD78 44084000 */      mfc1 $t0, $f8
  /* 04875C 800CCD7C AFB0001C */        sw $s0, 0x1c($sp)
  /* 048760 800CCD80 25080010 */     addiu $t0, $t0, 0x10
  /* 048764 800CCD84 05010002 */      bgez $t0, .L800CCD90
  /* 048768 800CCD88 01000821 */      addu $at, $t0, $zero
  /* 04876C 800CCD8C 2501001F */     addiu $at, $t0, 0x1f
  .L800CCD90:
  /* 048770 800CCD90 00014143 */       sra $t0, $at, 5
  /* 048774 800CCD94 00084023 */      negu $t0, $t0
  /* 048778 800CCD98 00086C00 */       sll $t5, $t0, 0x10
  /* 04877C 800CCD9C 000D7403 */       sra $t6, $t5, 0x10
  /* 048780 800CCDA0 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 048784 800CCDA4 AFAE0024 */        sw $t6, 0x24($sp)
  /* 048788 800CCDA8 8FAF00DC */        lw $t7, 0xdc($sp)
  /* 04878C 800CCDAC 8FA30080 */        lw $v1, 0x80($sp)
  /* 048790 800CCDB0 26520010 */     addiu $s2, $s2, 0x10
  /* 048794 800CCDB4 85F80028 */        lh $t8, 0x28($t7)
  /* 048798 800CCDB8 24630001 */     addiu $v1, $v1, 1
  /* 04879C 800CCDBC 4616A500 */     add.s $f20, $f20, $f22
  /* 0487A0 800CCDC0 2719FFFF */     addiu $t9, $t8, -1
  /* 0487A4 800CCDC4 0079082A */       slt $at, $v1, $t9
  /* 0487A8 800CCDC8 5420FFD8 */      bnel $at, $zero, .L800CCD2C
  /* 0487AC 800CCDCC 44904000 */      mtc1 $s0, $f8
  /* 0487B0 800CCDD0 44903000 */      mtc1 $s0, $f6
  .L800CCDD4:
  /* 0487B4 800CCDD4 864B000C */        lh $t3, 0xc($s2)
  /* 0487B8 800CCDD8 02004825 */        or $t1, $s0, $zero
  /* 0487BC 800CCDDC 46803220 */   cvt.s.w $f8, $f6
  /* 0487C0 800CCDE0 AFA90014 */        sw $t1, 0x14($sp)
  /* 0487C4 800CCDE4 AFB3002C */        sw $s3, 0x2c($sp)
  /* 0487C8 800CCDE8 AFB10028 */        sw $s1, 0x28($sp)
  /* 0487CC 800CCDEC AFB40020 */        sw $s4, 0x20($sp)
  /* 0487D0 800CCDF0 AFB50018 */        sw $s5, 0x18($sp)
  /* 0487D4 800CCDF4 4608A281 */     sub.s $f10, $f20, $f8
  /* 0487D8 800CCDF8 448B4000 */      mtc1 $t3, $f8
  /* 0487DC 800CCDFC AFBE0010 */        sw $fp, 0x10($sp)
  /* 0487E0 800CCE00 8FA400E0 */        lw $a0, 0xe0($sp)
  /* 0487E4 800CCE04 460AD102 */     mul.s $f4, $f26, $f10
  /* 0487E8 800CCE08 02E02825 */        or $a1, $s7, $zero
  /* 0487EC 800CCE0C 02C03025 */        or $a2, $s6, $zero
  /* 0487F0 800CCE10 02403825 */        or $a3, $s2, $zero
  /* 0487F4 800CCE14 468042A0 */   cvt.s.w $f10, $f8
  /* 0487F8 800CCE18 4600218D */ trunc.w.s $f6, $f4
  /* 0487FC 800CCE1C C7A40090 */      lwc1 $f4, 0x90($sp)
  /* 048800 800CCE20 44083000 */      mfc1 $t0, $f6
  /* 048804 800CCE24 46045182 */     mul.s $f6, $f10, $f4
  /* 048808 800CCE28 25080010 */     addiu $t0, $t0, 0x10
  /* 04880C 800CCE2C 05010002 */      bgez $t0, .L800CCE38
  /* 048810 800CCE30 01000821 */      addu $at, $t0, $zero
  /* 048814 800CCE34 2501001F */     addiu $at, $t0, 0x1f
  .L800CCE38:
  /* 048818 800CCE38 00014143 */       sra $t0, $at, 5
  /* 04881C 800CCE3C 46143200 */     add.s $f8, $f6, $f20
  /* 048820 800CCE40 3C01800D */       lui $at, %hi(D_ovl0_800D5ED4)
  /* 048824 800CCE44 C42A5ED4 */      lwc1 $f10, %lo(D_ovl0_800D5ED4)($at)
  /* 048828 800CCE48 00084023 */      negu $t0, $t0
  /* 04882C 800CCE4C 00086C00 */       sll $t5, $t0, 0x10
  /* 048830 800CCE50 460A4100 */     add.s $f4, $f8, $f10
  /* 048834 800CCE54 000D7403 */       sra $t6, $t5, 0x10
  /* 048838 800CCE58 AFAE0024 */        sw $t6, 0x24($sp)
  /* 04883C 800CCE5C 4600218D */ trunc.w.s $f6, $f4
  /* 048840 800CCE60 44103000 */      mfc1 $s0, $f6
  /* 048844 800CCE64 0C032DF5 */       jal func_ovl0_800CB7D4
  /* 048848 800CCE68 AFB0001C */        sw $s0, 0x1c($sp)
  .L800CCE6C:
  /* 04884C 800CCE6C 8FBF007C */        lw $ra, 0x7c($sp)
  .L800CCE70:
  /* 048850 800CCE70 D7B40038 */      ldc1 $f20, 0x38($sp)
  /* 048854 800CCE74 D7B60040 */      ldc1 $f22, 0x40($sp)
  /* 048858 800CCE78 D7B80048 */      ldc1 $f24, 0x48($sp)
  /* 04885C 800CCE7C D7BA0050 */      ldc1 $f26, 0x50($sp)
  /* 048860 800CCE80 8FB00058 */        lw $s0, 0x58($sp)
  /* 048864 800CCE84 8FB1005C */        lw $s1, 0x5c($sp)
  /* 048868 800CCE88 8FB20060 */        lw $s2, 0x60($sp)
  /* 04886C 800CCE8C 8FB30064 */        lw $s3, 0x64($sp)
  /* 048870 800CCE90 8FB40068 */        lw $s4, 0x68($sp)
  /* 048874 800CCE94 8FB5006C */        lw $s5, 0x6c($sp)
  /* 048878 800CCE98 8FB60070 */        lw $s6, 0x70($sp)
  /* 04887C 800CCE9C 8FB70074 */        lw $s7, 0x74($sp)
  /* 048880 800CCEA0 8FBE0078 */        lw $fp, 0x78($sp)
  /* 048884 800CCEA4 03E00008 */        jr $ra
  /* 048888 800CCEA8 27BD00E0 */     addiu $sp, $sp, 0xe0

