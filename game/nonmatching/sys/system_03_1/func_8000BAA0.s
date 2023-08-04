.section .text
glabel func_8000BAA0
  /* 00C6A0 8000BAA0 8C820010 */        lw $v0, 0x10($a0)
  /* 00C6A4 8000BAA4 50400004 */      beql $v0, $zero, .L8000BAB8
  /* 00C6A8 8000BAA8 8C820008 */        lw $v0, 8($a0)
  /* 00C6AC 8000BAAC 03E00008 */        jr $ra
  /* 00C6B0 8000BAB0 00000000 */       nop 

  /* 00C6B4 8000BAB4 8C820008 */        lw $v0, 8($a0)
  .L8000BAB8:
  /* 00C6B8 8000BAB8 24050001 */     addiu $a1, $zero, 1
  /* 00C6BC 8000BABC 10400003 */      beqz $v0, .L8000BACC
  /* 00C6C0 8000BAC0 00000000 */       nop 
  /* 00C6C4 8000BAC4 03E00008 */        jr $ra
  /* 00C6C8 8000BAC8 00000000 */       nop 

  .L8000BACC:
  /* 00C6CC 8000BACC 8C820014 */        lw $v0, 0x14($a0)
  /* 00C6D0 8000BAD0 54A20004 */      bnel $a1, $v0, .L8000BAE4
  /* 00C6D4 8000BAD4 8C430008 */        lw $v1, 8($v0)
  /* 00C6D8 8000BAD8 03E00008 */        jr $ra
  /* 00C6DC 8000BADC 00001025 */        or $v0, $zero, $zero

  /* 00C6E0 8000BAE0 8C430008 */        lw $v1, 8($v0)
  .L8000BAE4:
  /* 00C6E4 8000BAE4 10600003 */      beqz $v1, .L8000BAF4
  /* 00C6E8 8000BAE8 00000000 */       nop 
  /* 00C6EC 8000BAEC 03E00008 */        jr $ra
  /* 00C6F0 8000BAF0 00601025 */        or $v0, $v1, $zero

  .L8000BAF4:
  /* 00C6F4 8000BAF4 1000FFF5 */         b .L8000BACC
  /* 00C6F8 8000BAF8 00402025 */        or $a0, $v0, $zero
  /* 00C6FC 8000BAFC 03E00008 */        jr $ra
  /* 00C700 8000BB00 00801025 */        or $v0, $a0, $zero

