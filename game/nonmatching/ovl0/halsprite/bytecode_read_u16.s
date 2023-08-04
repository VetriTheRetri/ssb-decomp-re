.section .text
glabel bytecode_read_u16
  /* 04A5D8 800CEBF8 90820000 */       lbu $v0, ($a0)
  /* 04A5DC 800CEBFC 24840001 */     addiu $a0, $a0, 1
  /* 04A5E0 800CEC00 304E0080 */      andi $t6, $v0, 0x80
  /* 04A5E4 800CEC04 11C00007 */      beqz $t6, .L800CEC24
  /* 04A5E8 800CEC08 00401825 */        or $v1, $v0, $zero
  /* 04A5EC 800CEC0C 908F0000 */       lbu $t7, ($a0)
  /* 04A5F0 800CEC10 3058007F */      andi $t8, $v0, 0x7f
  /* 04A5F4 800CEC14 0018CA00 */       sll $t9, $t8, 8
  /* 04A5F8 800CEC18 01F91021 */      addu $v0, $t7, $t9
  /* 04A5FC 800CEC1C 3043FFFF */      andi $v1, $v0, 0xffff
  /* 04A600 800CEC20 24840001 */     addiu $a0, $a0, 1
  .L800CEC24:
  /* 04A604 800CEC24 24680001 */     addiu $t0, $v1, 1
  /* 04A608 800CEC28 A4A80000 */        sh $t0, ($a1)
  /* 04A60C 800CEC2C 03E00008 */        jr $ra
  /* 04A610 800CEC30 00801025 */        or $v0, $a0, $zero

