.section .text
glabel func_ovl0_800CD538
  /* 048F18 800CD538 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 048F1C 800CD53C AFBF0014 */        sw $ra, 0x14($sp)
  /* 048F20 800CD540 AFA5001C */        sw $a1, 0x1c($sp)
  /* 048F24 800CD544 AFA60020 */        sw $a2, 0x20($sp)
  /* 048F28 800CD548 30C600FF */      andi $a2, $a2, 0xff
  /* 048F2C 800CD54C 30A500FF */      andi $a1, $a1, 0xff
  /* 048F30 800CD550 0C00233C */       jal func_80008CF0
  /* 048F34 800CD554 AFA40018 */        sw $a0, 0x18($sp)
  /* 048F38 800CD558 8FA40018 */        lw $a0, 0x18($sp)
  /* 048F3C 800CD55C 3C0E8004 */       lui $t6, %hi(D_8003B8B4)
  /* 048F40 800CD560 25CEB8B4 */     addiu $t6, $t6, %lo(D_8003B8B4)
  /* 048F44 800CD564 25C80024 */     addiu $t0, $t6, 0x24
  /* 048F48 800CD568 0080C825 */        or $t9, $a0, $zero
  .L800CD56C:
  /* 048F4C 800CD56C 8DD80000 */        lw $t8, ($t6) # D_8003B8B4 + 0
  /* 048F50 800CD570 25CE000C */     addiu $t6, $t6, 0xc
  /* 048F54 800CD574 2739000C */     addiu $t9, $t9, 0xc
  /* 048F58 800CD578 AF38002C */        sw $t8, 0x2c($t9)
  /* 048F5C 800CD57C 8DCFFFF8 */        lw $t7, -8($t6) # D_8003B8B4 + -8
  /* 048F60 800CD580 AF2F0030 */        sw $t7, 0x30($t9)
  /* 048F64 800CD584 8DD8FFFC */        lw $t8, -4($t6) # D_8003B8B4 + -4
  /* 048F68 800CD588 15C8FFF8 */       bne $t6, $t0, .L800CD56C
  /* 048F6C 800CD58C AF380034 */        sw $t8, 0x34($t9)
  /* 048F70 800CD590 8DD80000 */        lw $t8, ($t6) # D_8003B8B4 + 0
  /* 048F74 800CD594 AF380038 */        sw $t8, 0x38($t9)
  /* 048F78 800CD598 AC820038 */        sw $v0, 0x38($a0)
  /* 048F7C 800CD59C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048F80 800CD5A0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 048F84 800CD5A4 03E00008 */        jr $ra
  /* 048F88 800CD5A8 00000000 */       nop 

