.section .text
glabel func_ovl0_800CD050
  /* 048A30 800CD050 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 048A34 800CD054 AFBF0024 */        sw $ra, 0x24($sp)
  /* 048A38 800CD058 AFB00020 */        sw $s0, 0x20($sp)
  /* 048A3C 800CD05C 0C00265A */       jal omMakeGObjCommon
  /* 048A40 800CD060 30C600FF */      andi $a2, $a2, 0xff
  /* 048A44 800CD064 14400003 */      bnez $v0, .L800CD074
  /* 048A48 800CD068 00408025 */        or $s0, $v0, $zero
  /* 048A4C 800CD06C 10000013 */         b .L800CD0BC
  /* 048A50 800CD070 00001025 */        or $v0, $zero, $zero
  .L800CD074:
  /* 048A54 800CD074 8FAE0044 */        lw $t6, 0x44($sp)
  /* 048A58 800CD078 02002025 */        or $a0, $s0, $zero
  /* 048A5C 800CD07C 8FA50038 */        lw $a1, 0x38($sp)
  /* 048A60 800CD080 93A6003F */       lbu $a2, 0x3f($sp)
  /* 048A64 800CD084 8FA70040 */        lw $a3, 0x40($sp)
  /* 048A68 800CD088 0C00277D */       jal func_80009DF4
  /* 048A6C 800CD08C AFAE0010 */        sw $t6, 0x10($sp)
  /* 048A70 800CD090 02002025 */        or $a0, $s0, $zero
  /* 048A74 800CD094 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 048A78 800CD098 8FA50048 */        lw $a1, 0x48($sp)
  /* 048A7C 800CD09C 8FA50050 */        lw $a1, 0x50($sp)
  /* 048A80 800CD0A0 02002025 */        or $a0, $s0, $zero
  /* 048A84 800CD0A4 93A6004F */       lbu $a2, 0x4f($sp)
  /* 048A88 800CD0A8 50A00004 */      beql $a1, $zero, .L800CD0BC
  /* 048A8C 800CD0AC 02001025 */        or $v0, $s0, $zero
  /* 048A90 800CD0B0 0C002062 */       jal omAddGObjCommonProc
  /* 048A94 800CD0B4 8FA70054 */        lw $a3, 0x54($sp)
  /* 048A98 800CD0B8 02001025 */        or $v0, $s0, $zero
  .L800CD0BC:
  /* 048A9C 800CD0BC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 048AA0 800CD0C0 8FB00020 */        lw $s0, 0x20($sp)
  /* 048AA4 800CD0C4 27BD0028 */     addiu $sp, $sp, 0x28
  /* 048AA8 800CD0C8 03E00008 */        jr $ra
  /* 048AAC 800CD0CC 00000000 */       nop 

