.section .text
glabel func_ovl0_800CD0D0
  /* 048AB0 800CD0D0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 048AB4 800CD0D4 AFBF0014 */        sw $ra, 0x14($sp)
  /* 048AB8 800CD0D8 AFA40020 */        sw $a0, 0x20($sp)
  /* 048ABC 800CD0DC 8C820000 */        lw $v0, ($a0)
  /* 048AC0 800CD0E0 0C0333AB */       jal func_ovl0_800CCEAC
  /* 048AC4 800CD0E4 AFA2001C */        sw $v0, 0x1c($sp)
  /* 048AC8 800CD0E8 8FA3001C */        lw $v1, 0x1c($sp)
  /* 048ACC 800CD0EC 3C0FE700 */       lui $t7, 0xe700
  /* 048AD0 800CD0F0 3C18E300 */       lui $t8, (0xE3000A01 >> 16) # 3808430593
  /* 048AD4 800CD0F4 24640008 */     addiu $a0, $v1, 8
  /* 048AD8 800CD0F8 AC6F0000 */        sw $t7, ($v1)
  /* 048ADC 800CD0FC AC600004 */        sw $zero, 4($v1)
  /* 048AE0 800CD100 24850008 */     addiu $a1, $a0, 8
  /* 048AE4 800CD104 37180A01 */       ori $t8, $t8, (0xE3000A01 & 0xFFFF) # 3808430593
  /* 048AE8 800CD108 AC980000 */        sw $t8, ($a0)
  /* 048AEC 800CD10C AC800004 */        sw $zero, 4($a0)
  /* 048AF0 800CD110 24A60008 */     addiu $a2, $a1, 8
  /* 048AF4 800CD114 3C19F900 */       lui $t9, 0xf900
  /* 048AF8 800CD118 24080008 */     addiu $t0, $zero, 8
  /* 048AFC 800CD11C ACA80004 */        sw $t0, 4($a1)
  /* 048B00 800CD120 ACB90000 */        sw $t9, ($a1)
  /* 048B04 800CD124 3C09E200 */       lui $t1, (0xE2001E01 >> 16) # 3791658497
  /* 048B08 800CD128 35291E01 */       ori $t1, $t1, (0xE2001E01 & 0xFFFF) # 3791658497
  /* 048B0C 800CD12C 24C70008 */     addiu $a3, $a2, 8
  /* 048B10 800CD130 240A0001 */     addiu $t2, $zero, 1
  /* 048B14 800CD134 ACCA0004 */        sw $t2, 4($a2)
  /* 048B18 800CD138 ACC90000 */        sw $t1, ($a2)
  /* 048B1C 800CD13C 3C0BE300 */       lui $t3, (0xE3000C00 >> 16) # 3808431104
  /* 048B20 800CD140 356B0C00 */       ori $t3, $t3, (0xE3000C00 & 0xFFFF) # 3808431104
  /* 048B24 800CD144 ACEB0000 */        sw $t3, ($a3)
  /* 048B28 800CD148 ACE00004 */        sw $zero, 4($a3)
  /* 048B2C 800CD14C 24E20008 */     addiu $v0, $a3, 8
  /* 048B30 800CD150 3C0CE300 */       lui $t4, (0xE3001201 >> 16) # 3808432641
  /* 048B34 800CD154 358C1201 */       ori $t4, $t4, (0xE3001201 & 0xFFFF) # 3808432641
  /* 048B38 800CD158 24440008 */     addiu $a0, $v0, 8
  /* 048B3C 800CD15C 240D2000 */     addiu $t5, $zero, 0x2000
  /* 048B40 800CD160 AC4D0004 */        sw $t5, 4($v0)
  /* 048B44 800CD164 AC4C0000 */        sw $t4, ($v0)
  /* 048B48 800CD168 3C0EE300 */       lui $t6, (0xE3001402 >> 16) # 3808433154
  /* 048B4C 800CD16C 35CE1402 */       ori $t6, $t6, (0xE3001402 & 0xFFFF) # 3808433154
  /* 048B50 800CD170 24850008 */     addiu $a1, $a0, 8
  /* 048B54 800CD174 240F0C00 */     addiu $t7, $zero, 0xc00
  /* 048B58 800CD178 AC8F0004 */        sw $t7, 4($a0)
  /* 048B5C 800CD17C AC8E0000 */        sw $t6, ($a0)
  /* 048B60 800CD180 3C18E300 */       lui $t8, (0xE3000D01 >> 16) # 3808431361
  /* 048B64 800CD184 37180D01 */       ori $t8, $t8, (0xE3000D01 & 0xFFFF) # 3808431361
  /* 048B68 800CD188 24A60008 */     addiu $a2, $a1, 8
  /* 048B6C 800CD18C ACB80000 */        sw $t8, ($a1)
  /* 048B70 800CD190 ACA00004 */        sw $zero, 4($a1)
  /* 048B74 800CD194 3C19E300 */       lui $t9, (0xE3000F00 >> 16) # 3808431872
  /* 048B78 800CD198 37390F00 */       ori $t9, $t9, (0xE3000F00 & 0xFFFF) # 3808431872
  /* 048B7C 800CD19C 24C70008 */     addiu $a3, $a2, 8
  /* 048B80 800CD1A0 ACD90000 */        sw $t9, ($a2)
  /* 048B84 800CD1A4 ACC00004 */        sw $zero, 4($a2)
  /* 048B88 800CD1A8 3C08E300 */       lui $t0, (0xE3001001 >> 16) # 3808432129
  /* 048B8C 800CD1AC 35081001 */       ori $t0, $t0, (0xE3001001 & 0xFFFF) # 3808432129
  /* 048B90 800CD1B0 ACE80000 */        sw $t0, ($a3)
  /* 048B94 800CD1B4 ACE00004 */        sw $zero, 4($a3)
  /* 048B98 800CD1B8 24E30008 */     addiu $v1, $a3, 8
  /* 048B9C 800CD1BC 3C09E200 */       lui $t1, (0xE200001C >> 16) # 3791650844
  /* 048BA0 800CD1C0 3C0A0F0A */       lui $t2, (0xF0A4000 >> 16) # 252329984
  /* 048BA4 800CD1C4 354A4000 */       ori $t2, $t2, (0xF0A4000 & 0xFFFF) # 252329984
  /* 048BA8 800CD1C8 3529001C */       ori $t1, $t1, (0xE200001C & 0xFFFF) # 3791650844
  /* 048BAC 800CD1CC AC690000 */        sw $t1, ($v1)
  /* 048BB0 800CD1D0 AC6A0004 */        sw $t2, 4($v1)
  /* 048BB4 800CD1D4 8FAB0020 */        lw $t3, 0x20($sp)
  /* 048BB8 800CD1D8 24620008 */     addiu $v0, $v1, 8
  /* 048BBC 800CD1DC AD620000 */        sw $v0, ($t3)
  /* 048BC0 800CD1E0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048BC4 800CD1E4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 048BC8 800CD1E8 03E00008 */        jr $ra
  /* 048BCC 800CD1EC 00000000 */       nop 

