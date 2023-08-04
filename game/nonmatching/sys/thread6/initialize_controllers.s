.section .text
glabel initialize_controllers
  /* 004CA0 800040A0 27BDFFB8 */     addiu $sp, $sp, -0x48
  /* 004CA4 800040A4 AFB40028 */        sw $s4, 0x28($sp)
  /* 004CA8 800040A8 3C148004 */       lui $s4, %hi(sInitQueue)
  /* 004CAC 800040AC 269450F0 */     addiu $s4, $s4, %lo(sInitQueue)
  /* 004CB0 800040B0 AFBF002C */        sw $ra, 0x2c($sp)
  /* 004CB4 800040B4 3C058004 */       lui $a1, %hi(sInitMesg)
  /* 004CB8 800040B8 AFB30024 */        sw $s3, 0x24($sp)
  /* 004CBC 800040BC AFB20020 */        sw $s2, 0x20($sp)
  /* 004CC0 800040C0 AFB1001C */        sw $s1, 0x1c($sp)
  /* 004CC4 800040C4 AFB00018 */        sw $s0, 0x18($sp)
  /* 004CC8 800040C8 24A55108 */     addiu $a1, $a1, %lo(sInitMesg)
  /* 004CCC 800040CC 02802025 */        or $a0, $s4, $zero
  /* 004CD0 800040D0 0C00D120 */       jal osCreateMesgQueue
  /* 004CD4 800040D4 24060001 */     addiu $a2, $zero, 1
  /* 004CD8 800040D8 24040005 */     addiu $a0, $zero, 5
  /* 004CDC 800040DC 02802825 */        or $a1, $s4, $zero
  /* 004CE0 800040E0 0C00CD28 */       jal osSetEventMesg
  /* 004CE4 800040E4 24060001 */     addiu $a2, $zero, 1
  /* 004CE8 800040E8 3C068004 */       lui $a2, %hi(sContStatus)
  /* 004CEC 800040EC 24C65178 */     addiu $a2, $a2, %lo(sContStatus)
  /* 004CF0 800040F0 02802025 */        or $a0, $s4, $zero
  /* 004CF4 800040F4 0C00C6B8 */       jal osContInit
  /* 004CF8 800040F8 27A50043 */     addiu $a1, $sp, 0x43
  /* 004CFC 800040FC 3C118004 */       lui $s1, %hi(sContStatus)
  /* 004D00 80004100 3C128004 */       lui $s2, %hi(sMotorPfs)
  /* 004D04 80004104 265252C8 */     addiu $s2, $s2, %lo(sMotorPfs)
  /* 004D08 80004108 26315178 */     addiu $s1, $s1, %lo(sContStatus)
  /* 004D0C 8000410C 00008025 */        or $s0, $zero, $zero
  /* 004D10 80004110 24130068 */     addiu $s3, $zero, 0x68
  .L80004114:
  /* 004D14 80004114 922E0002 */       lbu $t6, 2($s1) # sContStatus + 2
  /* 004D18 80004118 31CF0001 */      andi $t7, $t6, 1
  /* 004D1C 8000411C 51E00009 */      beql $t7, $zero, .L80004144
  /* 004D20 80004120 26100001 */     addiu $s0, $s0, 1
  /* 004D24 80004124 02130019 */     multu $s0, $s3
  /* 004D28 80004128 02802025 */        or $a0, $s4, $zero
  /* 004D2C 8000412C 02003025 */        or $a2, $s0, $zero
  /* 004D30 80004130 0000C012 */      mflo $t8
  /* 004D34 80004134 02582821 */      addu $a1, $s2, $t8
  /* 004D38 80004138 0C00C631 */       jal osMotorInit
  /* 004D3C 8000413C 00000000 */       nop 
  /* 004D40 80004140 26100001 */     addiu $s0, $s0, 1
  .L80004144:
  /* 004D44 80004144 2A010004 */      slti $at, $s0, 4
  /* 004D48 80004148 1420FFF2 */      bnez $at, .L80004114
  /* 004D4C 8000414C 26310004 */     addiu $s1, $s1, 4

  /* 004D50 80004150 3C118004 */       lui $s1, %hi(D_80045160)
  /* 004D54 80004154 26315160 */     addiu $s1, $s1, %lo(D_80045160)
  /* 004D58 80004158 3C058004 */       lui $a1, %hi(D_80045150)
  /* 004D5C 8000415C 24A55150 */     addiu $a1, $a1, %lo(D_80045150)
  /* 004D60 80004160 02202025 */        or $a0, $s1, $zero
  /* 004D64 80004164 0C00D120 */       jal osCreateMesgQueue
  /* 004D68 80004168 24060004 */     addiu $a2, $zero, 4
  /* 004D6C 8000416C 3C028004 */       lui $v0, %hi(D_80045268)
  /* 004D70 80004170 24425268 */     addiu $v0, $v0, %lo(D_80045268)
  /* 004D74 80004174 00008025 */        or $s0, $zero, $zero
  /* 004D78 80004178 24060005 */     addiu $a2, $zero, 5
  .L8000417C:
  /* 004D7C 8000417C AC500008 */        sw $s0, 8($v0) # D_80045268 + 8
  /* 004D80 80004180 26100001 */     addiu $s0, $s0, 1
  /* 004D84 80004184 2A010004 */      slti $at, $s0, 4
  /* 004D88 80004188 24420018 */     addiu $v0, $v0, 0x18
  /* 004D8C 8000418C AC40FFE8 */        sw $zero, -0x18($v0) # D_80045268 + -24
  /* 004D90 80004190 AC46FFEC */        sw $a2, -0x14($v0) # D_80045268 + -20
  /* 004D94 80004194 1420FFF9 */      bnez $at, .L8000417C
  /* 004D98 80004198 AC51FFF4 */        sw $s1, -0xc($v0) # D_80045268 + -12

  /* 004D9C 8000419C 3C118004 */       lui $s1, %hi(sContStatus)
  /* 004DA0 800041A0 3C058004 */       lui $a1, %hi(sContData)
  /* 004DA4 800041A4 3C028004 */       lui $v0, %hi(sContInfo)
  /* 004DA8 800041A8 3C038004 */       lui $v1, %hi(gContInput)
  /* 004DAC 800041AC 3C088004 */       lui $t0, %hi(gUpdateContData)
  /* 004DB0 800041B0 25085250 */     addiu $t0, $t0, %lo(gUpdateContData)
  /* 004DB4 800041B4 24635228 */     addiu $v1, $v1, %lo(gContInput)
  /* 004DB8 800041B8 244251A8 */     addiu $v0, $v0, %lo(sContInfo)
  /* 004DBC 800041BC 24A55188 */     addiu $a1, $a1, %lo(sContData)
  /* 004DC0 800041C0 26315178 */     addiu $s1, $s1, %lo(sContStatus)
  /* 004DC4 800041C4 2407001E */     addiu $a3, $zero, 0x1e
  .L800041C8:
  /* 004DC8 800041C8 A040000F */        sb $zero, 0xf($v0) # sContInfo + 15
  /* 004DCC 800041CC A0600009 */        sb $zero, 9($v1) # gContInput + 9
  
  /* 004DD0 800041D0 8059000F */        lb $t9, 0xf($v0) # sContInfo + 15
  /* 004DD4 800041D4 92290003 */       lbu $t1, 3($s1) # sContStatus + 3
  /* 004DD8 800041D8 922A0002 */       lbu $t2, 2($s1) # sContStatus + 2
  /* 004DDC 800041DC 806B0009 */        lb $t3, 9($v1) # gContInput + 9
  /* 004DE0 800041E0 2463000A */     addiu $v1, $v1, 0xa
  /* 004DE4 800041E4 26310004 */     addiu $s1, $s1, 4
  /* 004DE8 800041E8 24A50006 */     addiu $a1, $a1, 6
  /* 004DEC 800041EC 24420020 */     addiu $v0, $v0, 0x20
  /* 004DF0 800041F0 A4A0FFFA */        sh $zero, -6($a1) # sContData + -6
  /* 004DF4 800041F4 A440FFE6 */        sh $zero, -0x1a($v0) # sContInfo + -26
  /* 004DF8 800041F8 A440FFE2 */        sh $zero, -0x1e($v0) # sContInfo + -30
  /* 004DFC 800041FC A440FFE0 */        sh $zero, -0x20($v0) # sContInfo + -32
  /* 004E00 80004200 AC47FFF8 */        sw $a3, -8($v0) # sContInfo + -8
  /* 004E04 80004204 AC47FFF0 */        sw $a3, -0x10($v0) # sContInfo + -16
  /* 004E08 80004208 AC46FFF4 */        sw $a2, -0xc($v0) # sContInfo + -12
  
  /* 004E0C 8000420C A460FFFA */        sh $zero, -6($v1) # gContInput + -6
  /* 004E10 80004210 A460FFF8 */        sh $zero, -8($v1) # gContInput + -8
  /* 004E14 80004214 A460FFF6 */        sh $zero, -0xa($v1) # gContInput + -10
  /* 004E18 80004218 A059FFEE */        sb $t9, -0x12($v0) # sContInfo + -18
  /* 004E1C 8000421C A049FFFC */        sb $t1, -4($v0) # sContInfo + -4
  /* 004E20 80004220 A04AFFFD */        sb $t2, -3($v0) # sContInfo + -3
  /* 004E24 80004224 1468FFE8 */       bne $v1, $t0, .L800041C8
  /* 004E28 80004228 A06BFFFE */        sb $t3, -2($v1) # gContInput + -2

  /* 004E2C 8000422C 0C000F00 */       jal func_80003C00
  /* 004E30 80004230 00000000 */       nop 
  /* 004E34 80004234 3C018004 */       lui $at, %hi(gUpdateContData)
  /* 004E38 80004238 AC205250 */        sw $zero, %lo(gUpdateContData)($at)
  /* 004E3C 8000423C 3C018004 */       lui $at, %hi(sDelayedContUpdate)
  /* 004E40 80004240 AC205254 */        sw $zero, %lo(sDelayedContUpdate)($at)
  /* 004E44 80004244 24020001 */     addiu $v0, $zero, 1
  /* 004E48 80004248 3C018004 */       lui $at, %hi(sReadContData)
  /* 004E4C 8000424C 8FBF002C */        lw $ra, 0x2c($sp)
  /* 004E50 80004250 3C038004 */       lui $v1, %hi(sStatusUpdateDelay)
  /* 004E54 80004254 AC225258 */        sw $v0, %lo(sReadContData)($at)
  /* 004E58 80004258 2463525C */     addiu $v1, $v1, %lo(sStatusUpdateDelay)
  /* 004E5C 8000425C AC620000 */        sw $v0, ($v1) # sStatusUpdateDelay + 0
  /* 004E60 80004260 3C018004 */       lui $at, %hi(sLeftUntilStatus)
  /* 004E64 80004264 8FB00018 */        lw $s0, 0x18($sp)
  /* 004E68 80004268 8FB1001C */        lw $s1, 0x1c($sp)
  /* 004E6C 8000426C 8FB20020 */        lw $s2, 0x20($sp)
  /* 004E70 80004270 8FB30024 */        lw $s3, 0x24($sp)
  /* 004E74 80004274 8FB40028 */        lw $s4, 0x28($sp)
  /* 004E78 80004278 AC225260 */        sw $v0, %lo(sLeftUntilStatus)($at)
  /* 004E7C 8000427C 03E00008 */        jr $ra
  /* 004E80 80004280 27BD0048 */     addiu $sp, $sp, 0x48

