.section .text
glabel unref_8001810C
  /* 018D0C 8001810C 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 018D10 80018110 3C0E8004 */       lui $t6, %hi(D_80046A58)
  /* 018D14 80018114 8DCE6A58 */        lw $t6, %lo(D_80046A58)($t6)
  /* 018D18 80018118 AFBE0038 */        sw $fp, 0x38($sp)
  /* 018D1C 8001811C AFB70034 */        sw $s7, 0x34($sp)
  /* 018D20 80018120 AFB60030 */        sw $s6, 0x30($sp)
  /* 018D24 80018124 AFB30024 */        sw $s3, 0x24($sp)
  /* 018D28 80018128 AFB20020 */        sw $s2, 0x20($sp)
  /* 018D2C 8001812C AFB00018 */        sw $s0, 0x18($sp)
  /* 018D30 80018130 AFBF003C */        sw $ra, 0x3c($sp)
  /* 018D34 80018134 AFB5002C */        sw $s5, 0x2c($sp)
  /* 018D38 80018138 AFB40028 */        sw $s4, 0x28($sp)
  /* 018D3C 8001813C AFB1001C */        sw $s1, 0x1c($sp)
  /* 018D40 80018140 3C108004 */       lui $s0, %hi(gpDisplayListHead + 4)
  /* 018D44 80018144 3C128004 */       lui $s2, %hi((D_800472B0 + 4))
  /* 018D48 80018148 3C178004 */       lui $s7, %hi(D_800472C0)
  /* 018D4C 8001814C 26F772C0 */     addiu $s7, $s7, %lo(D_800472C0)
  /* 018D50 80018150 265272B4 */     addiu $s2, $s2, %lo((D_800472B0 + 4))
  /* 018D54 80018154 261065B4 */     addiu $s0, $s0, %lo(gpDisplayListHead + 4)
  /* 018D58 80018158 24130001 */     addiu $s3, $zero, 1
  /* 018D5C 8001815C 3C16DE00 */       lui $s6, 0xde00
  /* 018D60 80018160 3C1EDF00 */       lui $fp, 0xdf00
  /* 018D64 80018164 8DD50074 */        lw $s5, 0x74($t6)
  .L80018168:
  /* 018D68 80018168 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 4 + 0
  /* 018D6C 8001816C 8E430000 */        lw $v1, ($s2) # (D_800472B0 + 4) + 0
  /* 018D70 80018170 02002025 */        or $a0, $s0, $zero
  /* 018D74 80018174 0220A025 */        or $s4, $s1, $zero
  /* 018D78 80018178 14710004 */       bne $v1, $s1, .L8001818C
  /* 018D7C 8001817C 26380008 */     addiu $t8, $s1, 8
  /* 018D80 80018180 262FFFF8 */     addiu $t7, $s1, -8
  /* 018D84 80018184 1000001C */         b .L800181F8
  /* 018D88 80018188 AE0F0000 */        sw $t7, ($s0) # gpDisplayListHead + 4 + 0
  .L8001818C:
  /* 018D8C 8001818C AE180000 */        sw $t8, ($s0) # gpDisplayListHead + 4 + 0
  /* 018D90 80018190 2462FFF8 */     addiu $v0, $v1, -8
  /* 018D94 80018194 AC560000 */        sw $s6, ($v0)
  /* 018D98 80018198 8E190000 */        lw $t9, ($s0) # gpDisplayListHead + 4 + 0
  /* 018D9C 8001819C 02A02825 */        or $a1, $s5, $zero
  /* 018DA0 800181A0 02603025 */        or $a2, $s3, $zero
  /* 018DA4 800181A4 0C0058CE */       jal func_80016338
  /* 018DA8 800181A8 AC590004 */        sw $t9, 4($v0)
  /* 018DAC 800181AC 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 4 + 0
  /* 018DB0 800181B0 02A02025 */        or $a0, $s5, $zero
  /* 018DB4 800181B4 02602825 */        or $a1, $s3, $zero
  /* 018DB8 800181B8 26280008 */     addiu $t0, $s1, 8
  /* 018DBC 800181BC AE080000 */        sw $t0, ($s0) # gpDisplayListHead + 4 + 0
  /* 018DC0 800181C0 AE360000 */        sw $s6, ($s1)
  /* 018DC4 800181C4 8EE90000 */        lw $t1, ($s7) # D_800472C0 + 0
  /* 018DC8 800181C8 252A0008 */     addiu $t2, $t1, 8
  /* 018DCC 800181CC 0C005E0F */       jal func_8001783C
  /* 018DD0 800181D0 AE2A0004 */        sw $t2, 4($s1)
  /* 018DD4 800181D4 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 4 + 0
  /* 018DD8 800181D8 3C0CDE01 */       lui $t4, 0xde01
  /* 018DDC 800181DC 262B0008 */     addiu $t3, $s1, 8
  /* 018DE0 800181E0 AE0B0000 */        sw $t3, ($s0) # gpDisplayListHead + 4 + 0
  /* 018DE4 800181E4 AE200004 */        sw $zero, 4($s1)
  /* 018DE8 800181E8 AE3E0000 */        sw $fp, ($s1)
  /* 018DEC 800181EC AE8C0000 */        sw $t4, ($s4)
  /* 018DF0 800181F0 8E0D0000 */        lw $t5, ($s0) # gpDisplayListHead + 4 + 0
  /* 018DF4 800181F4 AE8D0004 */        sw $t5, 4($s4)
  .L800181F8:
  /* 018DF8 800181F8 26730001 */     addiu $s3, $s3, 1
  /* 018DFC 800181FC 2A610004 */      slti $at, $s3, 4
  /* 018E00 80018200 26520004 */     addiu $s2, $s2, 4
  /* 018E04 80018204 1420FFD8 */      bnez $at, .L80018168
  /* 018E08 80018208 26100004 */     addiu $s0, $s0, 4
  /* 018E0C 8001820C 0C0014F3 */       jal func_800053CC
  /* 018E10 80018210 00000000 */       nop 
  /* 018E14 80018214 0C0013DE */       jal func_80004F78
  /* 018E18 80018218 00000000 */       nop 
  /* 018E1C 8001821C 3C108004 */       lui $s0, %hi(gpDisplayListHead)
  /* 018E20 80018220 261065B0 */     addiu $s0, $s0, %lo(gpDisplayListHead)
  /* 018E24 80018224 02002025 */        or $a0, $s0, $zero
  /* 018E28 80018228 02A02825 */        or $a1, $s5, $zero
  /* 018E2C 8001822C 0C00598F */       jal func_8001663C
  /* 018E30 80018230 00003025 */        or $a2, $zero, $zero
  /* 018E34 80018234 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 0
  /* 018E38 80018238 02002025 */        or $a0, $s0, $zero
  /* 018E3C 8001823C 02A02825 */        or $a1, $s5, $zero
  /* 018E40 80018240 262E0008 */     addiu $t6, $s1, 8
  /* 018E44 80018244 AEEE0000 */        sw $t6, ($s7) # D_800472C0 + 0
  /* 018E48 80018248 AE360000 */        sw $s6, ($s1)
  /* 018E4C 8001824C 8E0F0000 */        lw $t7, ($s0) # gpDisplayListHead + 0
  /* 018E50 80018250 25F80010 */     addiu $t8, $t7, 0x10
  /* 018E54 80018254 AE380004 */        sw $t8, 4($s1)
  /* 018E58 80018258 8E190000 */        lw $t9, ($s0) # gpDisplayListHead + 0
  /* 018E5C 8001825C 27280010 */     addiu $t0, $t9, 0x10
  /* 018E60 80018260 0C005BB7 */       jal func_80016EDC
  /* 018E64 80018264 AE080000 */        sw $t0, ($s0) # gpDisplayListHead + 0
  /* 018E68 80018268 8E110000 */        lw $s1, ($s0) # gpDisplayListHead + 0
  /* 018E6C 8001826C 3C0ADE01 */       lui $t2, 0xde01
  /* 018E70 80018270 02A02025 */        or $a0, $s5, $zero
  /* 018E74 80018274 26290008 */     addiu $t1, $s1, 8
  /* 018E78 80018278 AE090000 */        sw $t1, ($s0) # gpDisplayListHead + 0
  /* 018E7C 8001827C AE200004 */        sw $zero, 4($s1)
  /* 018E80 80018280 AE3E0000 */        sw $fp, ($s1)
  /* 018E84 80018284 8EE30000 */        lw $v1, ($s7) # D_800472C0 + 0
  /* 018E88 80018288 00002825 */        or $a1, $zero, $zero
  /* 018E8C 8001828C AC6A0000 */        sw $t2, ($v1)
  /* 018E90 80018290 8E0B0000 */        lw $t3, ($s0) # gpDisplayListHead + 0
  /* 018E94 80018294 0C005E0F */       jal func_8001783C
  /* 018E98 80018298 AC6B0004 */        sw $t3, 4($v1)
  /* 018E9C 8001829C 3C128004 */       lui $s2, %hi((D_800472B0 + 4))
  /* 018EA0 800182A0 3C108004 */       lui $s0, %hi(gpDisplayListHead + 4)
  /* 018EA4 800182A4 3C028004 */       lui $v0, %hi(D_800465C0)
  /* 018EA8 800182A8 244265C0 */     addiu $v0, $v0, %lo(D_800465C0)
  /* 018EAC 800182AC 261065B4 */     addiu $s0, $s0, %lo(gpDisplayListHead + 4)
  /* 018EB0 800182B0 265272B4 */     addiu $s2, $s2, %lo((D_800472B0 + 4))
  .L800182B4:
  /* 018EB4 800182B4 8E0C0000 */        lw $t4, ($s0) # gpDisplayListHead + 4 + 0
  /* 018EB8 800182B8 26100004 */     addiu $s0, $s0, 4
  /* 018EBC 800182BC 26520004 */     addiu $s2, $s2, 4
  /* 018EC0 800182C0 258D0008 */     addiu $t5, $t4, 8
  /* 018EC4 800182C4 AE0DFFFC */        sw $t5, -4($s0) # gpDisplayListHead + 4 + -4
  /* 018EC8 800182C8 1602FFFA */       bne $s0, $v0, .L800182B4
  /* 018ECC 800182CC AE4DFFFC */        sw $t5, -4($s2) # (D_800472B0 + 4) + -4
  /* 018ED0 800182D0 8FBF003C */        lw $ra, 0x3c($sp)
  /* 018ED4 800182D4 8FB00018 */        lw $s0, 0x18($sp)
  /* 018ED8 800182D8 8FB1001C */        lw $s1, 0x1c($sp)
  /* 018EDC 800182DC 8FB20020 */        lw $s2, 0x20($sp)
  /* 018EE0 800182E0 8FB30024 */        lw $s3, 0x24($sp)
  /* 018EE4 800182E4 8FB40028 */        lw $s4, 0x28($sp)
  /* 018EE8 800182E8 8FB5002C */        lw $s5, 0x2c($sp)
  /* 018EEC 800182EC 8FB60030 */        lw $s6, 0x30($sp)
  /* 018EF0 800182F0 8FB70034 */        lw $s7, 0x34($sp)
  /* 018EF4 800182F4 8FBE0038 */        lw $fp, 0x38($sp)
  /* 018EF8 800182F8 03E00008 */        jr $ra
  /* 018EFC 800182FC 27BD0040 */     addiu $sp, $sp, 0x40

