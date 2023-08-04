.section .text
glabel func_ovl0_800CB674
  /* 047054 800CB674 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 047058 800CB678 AFB20020 */        sw $s2, 0x20($sp)
  /* 04705C 800CB67C AFB1001C */        sw $s1, 0x1c($sp)
  /* 047060 800CB680 AFB00018 */        sw $s0, 0x18($sp)
  /* 047064 800CB684 0086082B */      sltu $at, $a0, $a2
  /* 047068 800CB688 00A08025 */        or $s0, $a1, $zero
  /* 04706C 800CB68C 00808825 */        or $s1, $a0, $zero
  /* 047070 800CB690 00C09025 */        or $s2, $a2, $zero
  /* 047074 800CB694 14200022 */      bnez $at, .L800CB720
  /* 047078 800CB698 AFBF0024 */        sw $ra, 0x24($sp)
  .L800CB69C:
  /* 04707C 800CB69C 92240000 */       lbu $a0, ($s1)
  /* 047080 800CB6A0 30840003 */      andi $a0, $a0, 3
  /* 047084 800CB6A4 0C032D91 */       jal func_ovl0_800CB644
  /* 047088 800CB6A8 308400FF */      andi $a0, $a0, 0xff
  /* 04708C 800CB6AC A2020000 */        sb $v0, ($s0)
  /* 047090 800CB6B0 92240000 */       lbu $a0, ($s1)
  /* 047094 800CB6B4 3084000C */      andi $a0, $a0, 0xc
  /* 047098 800CB6B8 00042083 */       sra $a0, $a0, 2
  /* 04709C 800CB6BC 0C032D91 */       jal func_ovl0_800CB644
  /* 0470A0 800CB6C0 308400FF */      andi $a0, $a0, 0xff
  /* 0470A4 800CB6C4 920E0000 */       lbu $t6, ($s0)
  /* 0470A8 800CB6C8 00027900 */       sll $t7, $v0, 4
  /* 0470AC 800CB6CC 01CFC025 */        or $t8, $t6, $t7
  /* 0470B0 800CB6D0 A2180000 */        sb $t8, ($s0)
  /* 0470B4 800CB6D4 92240000 */       lbu $a0, ($s1)
  /* 0470B8 800CB6D8 30840030 */      andi $a0, $a0, 0x30
  /* 0470BC 800CB6DC 00042103 */       sra $a0, $a0, 4
  /* 0470C0 800CB6E0 0C032D91 */       jal func_ovl0_800CB644
  /* 0470C4 800CB6E4 308400FF */      andi $a0, $a0, 0xff
  /* 0470C8 800CB6E8 A202FFFF */        sb $v0, -1($s0)
  /* 0470CC 800CB6EC 92240000 */       lbu $a0, ($s1)
  /* 0470D0 800CB6F0 308400C0 */      andi $a0, $a0, 0xc0
  /* 0470D4 800CB6F4 00042183 */       sra $a0, $a0, 6
  /* 0470D8 800CB6F8 0C032D91 */       jal func_ovl0_800CB644
  /* 0470DC 800CB6FC 308400FF */      andi $a0, $a0, 0xff
  /* 0470E0 800CB700 9219FFFF */       lbu $t9, -1($s0)
  /* 0470E4 800CB704 2631FFFF */     addiu $s1, $s1, -1
  /* 0470E8 800CB708 00024100 */       sll $t0, $v0, 4
  /* 0470EC 800CB70C 0232082B */      sltu $at, $s1, $s2
  /* 0470F0 800CB710 03284825 */        or $t1, $t9, $t0
  /* 0470F4 800CB714 2610FFFE */     addiu $s0, $s0, -2
  /* 0470F8 800CB718 1020FFE0 */      beqz $at, .L800CB69C
  /* 0470FC 800CB71C A2090001 */        sb $t1, 1($s0)
  .L800CB720:
  /* 047100 800CB720 8FBF0024 */        lw $ra, 0x24($sp)
  /* 047104 800CB724 8FB00018 */        lw $s0, 0x18($sp)
  /* 047108 800CB728 8FB1001C */        lw $s1, 0x1c($sp)
  /* 04710C 800CB72C 8FB20020 */        lw $s2, 0x20($sp)
  /* 047110 800CB730 03E00008 */        jr $ra
  /* 047114 800CB734 27BD0028 */     addiu $sp, $sp, 0x28

