.section .text
glabel func_ovl0_800CCFDC
  /* 0489BC 800CCFDC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 0489C0 800CCFE0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 0489C4 800CCFE4 AFA40018 */        sw $a0, 0x18($sp)
  /* 0489C8 800CCFE8 90AE0031 */       lbu $t6, 0x31($a1)
  /* 0489CC 800CCFEC 24010004 */     addiu $at, $zero, 4
  /* 0489D0 800CCFF0 00A02025 */        or $a0, $a1, $zero
  /* 0489D4 800CCFF4 15C10004 */       bne $t6, $at, .L800CD008
  /* 0489D8 800CCFF8 00000000 */       nop 
  /* 0489DC 800CCFFC 0C032DCE */       jal func_ovl0_800CB738
  /* 0489E0 800CD000 AFA5001C */        sw $a1, 0x1c($sp)
  /* 0489E4 800CD004 8FA5001C */        lw $a1, 0x1c($sp)
  .L800CD008:
  /* 0489E8 800CD008 0C002585 */       jal func_80009614
  /* 0489EC 800CD00C 8FA40018 */        lw $a0, 0x18($sp)
  /* 0489F0 800CD010 44800000 */      mtc1 $zero, $f0
  /* 0489F4 800CD014 24190002 */     addiu $t9, $zero, 2
  /* 0489F8 800CD018 A0400063 */        sb $zero, 0x63($v0)
  /* 0489FC 800CD01C A0400062 */        sb $zero, 0x62($v0)
  /* 048A00 800CD020 A0400061 */        sb $zero, 0x61($v0)
  /* 048A04 800CD024 A0400060 */        sb $zero, 0x60($v0)
  /* 048A08 800CD028 A0400067 */        sb $zero, 0x67($v0)
  /* 048A0C 800CD02C A0400066 */        sb $zero, 0x66($v0)
  /* 048A10 800CD030 A0590065 */        sb $t9, 0x65($v0)
  /* 048A14 800CD034 A0590064 */        sb $t9, 0x64($v0)
  /* 048A18 800CD038 E440005C */      swc1 $f0, 0x5c($v0)
  /* 048A1C 800CD03C E4400058 */      swc1 $f0, 0x58($v0)
  /* 048A20 800CD040 8FBF0014 */        lw $ra, 0x14($sp)
  /* 048A24 800CD044 27BD0018 */     addiu $sp, $sp, 0x18
  /* 048A28 800CD048 03E00008 */        jr $ra
  /* 048A2C 800CD04C 00000000 */       nop 

