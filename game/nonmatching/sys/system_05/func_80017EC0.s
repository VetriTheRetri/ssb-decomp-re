.section .text
glabel func_80017EC0
  /* 018AC0 80017EC0 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 018AC4 80017EC4 AFB00018 */        sw $s0, 0x18($sp)
  /* 018AC8 80017EC8 AFBF003C */        sw $ra, 0x3c($sp)
  /* 018ACC 80017ECC AFBE0038 */        sw $fp, 0x38($sp)
  /* 018AD0 80017ED0 AFB70034 */        sw $s7, 0x34($sp)
  /* 018AD4 80017ED4 AFB60030 */        sw $s6, 0x30($sp)
  /* 018AD8 80017ED8 AFB5002C */        sw $s5, 0x2c($sp)
  /* 018ADC 80017EDC AFB40028 */        sw $s4, 0x28($sp)
  /* 018AE0 80017EE0 AFB30024 */        sw $s3, 0x24($sp)
  /* 018AE4 80017EE4 AFB20020 */        sw $s2, 0x20($sp)
  /* 018AE8 80017EE8 AFB1001C */        sw $s1, 0x1c($sp)
  /* 018AEC 80017EEC 8C950074 */        lw $s5, 0x74($a0)
  /* 018AF0 80017EF0 3C108004 */       lui $s0, %hi(gpDisplayListHead)
  /* 018AF4 80017EF4 261065B0 */     addiu $s0, $s0, %lo(gpDisplayListHead)
  /* 018AF8 80017EF8 0080A025 */        or $s4, $a0, $zero
  /* 018AFC 80017EFC 02002025 */        or $a0, $s0, $zero
  /* 018B00 80017F00 00003025 */        or $a2, $zero, $zero
  /* 018B04 80017F04 0C00598F */       jal func_8001663C
  /* 018B08 80017F08 02A02825 */        or $a1, $s5, $zero
  /* 018B0C 80017F0C 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 0
  /* 018B10 80017F10 3C018004 */       lui $at, %hi(D_800472C0)
  /* 018B14 80017F14 3C16DE00 */       lui $s6, 0xde00
  /* 018B18 80017F18 262E0008 */     addiu $t6, $s1, 8
  /* 018B1C 80017F1C AC2E72C0 */        sw $t6, %lo(D_800472C0)($at)
  /* 018B20 80017F20 AE360000 */        sw $s6, ($s1)
  /* 018B24 80017F24 8E0F0000 */        lw $t7, ($s0) # gpDisplayListHead + 0
  /* 018B28 80017F28 02002025 */        or $a0, $s0, $zero
  /* 018B2C 80017F2C 02A02825 */        or $a1, $s5, $zero
  /* 018B30 80017F30 25F80010 */     addiu $t8, $t7, 0x10
  /* 018B34 80017F34 AE380004 */        sw $t8, 4($s1)
  /* 018B38 80017F38 8E190000 */        lw $t9, ($s0) # gpDisplayListHead + 0
  /* 018B3C 80017F3C 27280010 */     addiu $t0, $t9, 0x10
  /* 018B40 80017F40 0C005BB7 */       jal func_80016EDC
  /* 018B44 80017F44 AE080000 */        sw $t0, ($s0) # gpDisplayListHead + 0
  /* 018B48 80017F48 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 0
  /* 018B4C 80017F4C 3C0ADF00 */       lui $t2, 0xdf00
  /* 018B50 80017F50 3C038004 */       lui $v1, %hi(D_800472C0)
  /* 018B54 80017F54 26290008 */     addiu $t1, $s1, 8
  /* 018B58 80017F58 AE090000 */        sw $t1, ($s0) # gpDisplayListHead + 0
  /* 018B5C 80017F5C AE200004 */        sw $zero, 4($s1)
  /* 018B60 80017F60 AE2A0000 */        sw $t2, ($s1)
  /* 018B64 80017F64 8C6372C0 */        lw $v1, %lo(D_800472C0)($v1)
  /* 018B68 80017F68 3C0BDE01 */       lui $t3, 0xde01
  /* 018B6C 80017F6C 02A02025 */        or $a0, $s5, $zero
  /* 018B70 80017F70 AC6B0000 */        sw $t3, ($v1)
  /* 018B74 80017F74 8E0C0000 */        lw $t4, ($s0) # gpDisplayListHead + 0
  /* 018B78 80017F78 00002825 */        or $a1, $zero, $zero
  /* 018B7C 80017F7C 0C005E0F */       jal func_8001783C
  /* 018B80 80017F80 AC6C0004 */        sw $t4, 4($v1)
  /* 018B84 80017F84 8EAD0080 */        lw $t5, 0x80($s5)
  /* 018B88 80017F88 3C048004 */       lui $a0, %hi(gpDisplayListHead + 4)
  /* 018B8C 80017F8C 248465B4 */     addiu $a0, $a0, %lo(gpDisplayListHead + 4)
  /* 018B90 80017F90 31AE0020 */      andi $t6, $t5, 0x20
  /* 018B94 80017F94 11C00003 */      beqz $t6, .L80017FA4
  /* 018B98 80017F98 02A02825 */        or $a1, $s5, $zero
  /* 018B9C 80017F9C 0C0058CE */       jal func_80016338
  /* 018BA0 80017FA0 24060001 */     addiu $a2, $zero, 1
  .L80017FA4:
  /* 018BA4 80017FA4 3C118004 */       lui $s1, %hi(gpDisplayListHead + 4)
  /* 018BA8 80017FA8 3C128004 */       lui $s2, %hi((D_800472B0 + 4))
  /* 018BAC 80017FAC 3C028004 */       lui $v0, %hi(D_800472C0)
  /* 018BB0 80017FB0 244272C0 */     addiu $v0, $v0, %lo(D_800472C0)
  /* 018BB4 80017FB4 265272B4 */     addiu $s2, $s2, %lo((D_800472B0 + 4))
  /* 018BB8 80017FB8 263165B4 */     addiu $s1, $s1, %lo(gpDisplayListHead + 4)
  .L80017FBC:
  /* 018BBC 80017FBC 8E2F0000 */        lw $t7, ($s1) # gpDisplayListHead + 4 + 0
  /* 018BC0 80017FC0 26520004 */     addiu $s2, $s2, 4
  /* 018BC4 80017FC4 0242082B */      sltu $at, $s2, $v0
  /* 018BC8 80017FC8 25F80008 */     addiu $t8, $t7, 8
  /* 018BCC 80017FCC 26310004 */     addiu $s1, $s1, 4
  /* 018BD0 80017FD0 AE38FFFC */        sw $t8, -4($s1) # gpDisplayListHead + 4 + -4
  /* 018BD4 80017FD4 1420FFF9 */      bnez $at, .L80017FBC
  /* 018BD8 80017FD8 AE58FFFC */        sw $t8, -4($s2) # (D_800472B0 + 4) + -4
  /* 018BDC 80017FDC 8EA80080 */        lw $t0, 0x80($s5)
  /* 018BE0 80017FE0 00002825 */        or $a1, $zero, $zero
  /* 018BE4 80017FE4 31090008 */      andi $t1, $t0, 8
  /* 018BE8 80017FE8 11200003 */      beqz $t1, .L80017FF8
  /* 018BEC 80017FEC 00000000 */       nop 
  /* 018BF0 80017FF0 10000001 */         b .L80017FF8
  /* 018BF4 80017FF4 24050001 */     addiu $a1, $zero, 1
  .L80017FF8:
  /* 018BF8 80017FF8 0C005EE0 */       jal func_80017B80
  /* 018BFC 80017FFC 02802025 */        or $a0, $s4, $zero
  /* 018C00 80018000 3C118004 */       lui $s1, %hi(gpDisplayListHead + 4)
  /* 018C04 80018004 3C128004 */       lui $s2, %hi((D_800472B0 + 4))
  /* 018C08 80018008 265272B4 */     addiu $s2, $s2, %lo((D_800472B0 + 4))
  /* 018C0C 8001800C 263165B4 */     addiu $s1, $s1, %lo(gpDisplayListHead + 4)
  /* 018C10 80018010 24130001 */     addiu $s3, $zero, 1
  /* 018C14 80018014 241E0001 */     addiu $fp, $zero, 1
  /* 018C18 80018018 24170004 */     addiu $s7, $zero, 4
  .L8001801C:
  /* 018C1C 8001801C 8E430000 */        lw $v1, ($s2) # (D_800472B0 + 4) + 0
  /* 018C20 80018020 8E300000 */        lw $s0, ($s1) # gpDisplayListHead + 4 + 0
  /* 018C24 80018024 2462FFF8 */     addiu $v0, $v1, -8
  /* 018C28 80018028 14700004 */       bne $v1, $s0, .L8001803C
  /* 018C2C 8001802C 260B0008 */     addiu $t3, $s0, 8
  /* 018C30 80018030 260AFFF8 */     addiu $t2, $s0, -8
  /* 018C34 80018034 10000023 */         b .L800180C4
  /* 018C38 80018038 AE2A0000 */        sw $t2, ($s1) # gpDisplayListHead + 4 + 0
  .L8001803C:
  /* 018C3C 8001803C AE2B0000 */        sw $t3, ($s1) # gpDisplayListHead + 4 + 0
  /* 018C40 80018040 AC560000 */        sw $s6, ($v0)
  /* 018C44 80018044 8E2C0000 */        lw $t4, ($s1) # gpDisplayListHead + 4 + 0
  /* 018C48 80018048 0200A025 */        or $s4, $s0, $zero
  /* 018C4C 8001804C 167E0004 */       bne $s3, $fp, .L80018060
  /* 018C50 80018050 AC4C0004 */        sw $t4, 4($v0)
  /* 018C54 80018054 8EAD0080 */        lw $t5, 0x80($s5)
  /* 018C58 80018058 31AE0020 */      andi $t6, $t5, 0x20
  /* 018C5C 8001805C 15C00004 */      bnez $t6, .L80018070
  .L80018060:
  /* 018C60 80018060 02202025 */        or $a0, $s1, $zero
  /* 018C64 80018064 02A02825 */        or $a1, $s5, $zero
  /* 018C68 80018068 0C0058CE */       jal func_80016338
  /* 018C6C 8001806C 02603025 */        or $a2, $s3, $zero
  .L80018070:
  /* 018C70 80018070 8E300000 */        lw $s0, ($s1) # gpDisplayListHead + 4 + 0
  /* 018C74 80018074 3C188004 */       lui $t8, %hi(D_800472C0)
  /* 018C78 80018078 02A02025 */        or $a0, $s5, $zero
  /* 018C7C 8001807C 260F0008 */     addiu $t7, $s0, 8
  /* 018C80 80018080 AE2F0000 */        sw $t7, ($s1) # gpDisplayListHead + 4 + 0
  /* 018C84 80018084 AE160000 */        sw $s6, ($s0)
  /* 018C88 80018088 8F1872C0 */        lw $t8, %lo(D_800472C0)($t8)
  /* 018C8C 8001808C 02602825 */        or $a1, $s3, $zero
  /* 018C90 80018090 27190008 */     addiu $t9, $t8, 8
  /* 018C94 80018094 0C005E0F */       jal func_8001783C
  /* 018C98 80018098 AE190004 */        sw $t9, 4($s0)
  /* 018C9C 8001809C 8E300000 */        lw $s0, ($s1) # gpDisplayListHead + 4 + 0
  /* 018CA0 800180A0 3C09DF00 */       lui $t1, 0xdf00
  /* 018CA4 800180A4 3C0ADE01 */       lui $t2, 0xde01
  /* 018CA8 800180A8 26080008 */     addiu $t0, $s0, 8
  /* 018CAC 800180AC AE280000 */        sw $t0, ($s1) # gpDisplayListHead + 4 + 0
  /* 018CB0 800180B0 AE000004 */        sw $zero, 4($s0)
  /* 018CB4 800180B4 AE090000 */        sw $t1, ($s0)
  /* 018CB8 800180B8 AE8A0000 */        sw $t2, ($s4)
  /* 018CBC 800180BC 8E2B0000 */        lw $t3, ($s1) # gpDisplayListHead + 4 + 0
  /* 018CC0 800180C0 AE8B0004 */        sw $t3, 4($s4)
  .L800180C4:
  /* 018CC4 800180C4 26730001 */     addiu $s3, $s3, 1
  /* 018CC8 800180C8 26310004 */     addiu $s1, $s1, 4
  /* 018CCC 800180CC 1677FFD3 */       bne $s3, $s7, .L8001801C
  /* 018CD0 800180D0 26520004 */     addiu $s2, $s2, 4
  /* 018CD4 800180D4 0C005F32 */       jal func_80017CC8
  /* 018CD8 800180D8 02A02025 */        or $a0, $s5, $zero
  /* 018CDC 800180DC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 018CE0 800180E0 8FB00018 */        lw $s0, 0x18($sp)
  /* 018CE4 800180E4 8FB1001C */        lw $s1, 0x1c($sp)
  /* 018CE8 800180E8 8FB20020 */        lw $s2, 0x20($sp)
  /* 018CEC 800180EC 8FB30024 */        lw $s3, 0x24($sp)
  /* 018CF0 800180F0 8FB40028 */        lw $s4, 0x28($sp)
  /* 018CF4 800180F4 8FB5002C */        lw $s5, 0x2c($sp)
  /* 018CF8 800180F8 8FB60030 */        lw $s6, 0x30($sp)
  /* 018CFC 800180FC 8FB70034 */        lw $s7, 0x34($sp)
  /* 018D00 80018100 8FBE0038 */        lw $fp, 0x38($sp)
  /* 018D04 80018104 03E00008 */        jr $ra
  /* 018D08 80018108 27BD0040 */     addiu $sp, $sp, 0x40
