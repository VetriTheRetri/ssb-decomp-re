.section .text
glabel func_ovl0_800D2758
  /* 04E138 800D2758 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 04E13C 800D275C AFB10018 */        sw $s1, 0x18($sp)
  /* 04E140 800D2760 3C11800D */       lui $s1, %hi(D_ovl0_800D6398)
  /* 04E144 800D2764 AFB00014 */        sw $s0, 0x14($sp)
  /* 04E148 800D2768 3C03800D */       lui $v1, %hi(D_ovl0_800D639C)
  /* 04E14C 800D276C 2463639C */     addiu $v1, $v1, %lo(D_ovl0_800D639C)
  /* 04E150 800D2770 26316398 */     addiu $s1, $s1, %lo(D_ovl0_800D6398)
  /* 04E154 800D2774 2490FFFF */     addiu $s0, $a0, -1
  /* 04E158 800D2778 AFBF001C */        sw $ra, 0x1c($sp)
  /* 04E15C 800D277C AE200000 */        sw $zero, ($s1) # D_ovl0_800D6398 + 0
  /* 04E160 800D2780 0600000E */      bltz $s0, .L800D27BC
  /* 04E164 800D2784 AC600000 */        sw $zero, ($v1) # D_ovl0_800D639C + 0
  .L800D2788:
  /* 04E168 800D2788 2404005C */     addiu $a0, $zero, 0x5c
  /* 04E16C 800D278C 0C001260 */       jal hal_alloc
  /* 04E170 800D2790 24050004 */     addiu $a1, $zero, 4
  /* 04E174 800D2794 54400004 */      bnel $v0, $zero, .L800D27A8
  /* 04E178 800D2798 8E2F0000 */        lw $t7, ($s1) # D_ovl0_800D6398 + 0
  /* 04E17C 800D279C 10000011 */         b .L800D27E4
  /* 04E180 800D27A0 00001025 */        or $v0, $zero, $zero
  /* 04E184 800D27A4 8E2F0000 */        lw $t7, ($s1) # D_ovl0_800D6398 + 0
  .L800D27A8:
  /* 04E188 800D27A8 2610FFFF */     addiu $s0, $s0, -1
  /* 04E18C 800D27AC 3C01800D */       lui $at, %hi(D_ovl0_800D6398)
  /* 04E190 800D27B0 AC4F0000 */        sw $t7, ($v0)
  /* 04E194 800D27B4 0601FFF4 */      bgez $s0, .L800D2788
  /* 04E198 800D27B8 AC226398 */        sw $v0, %lo(D_ovl0_800D6398)($at)
  .L800D27BC:
  /* 04E19C 800D27BC 3C01800D */       lui $at, %hi(D_ovl0_800D644A)
  /* 04E1A0 800D27C0 A420644A */        sh $zero, %lo(D_ovl0_800D644A)($at)
  /* 04E1A4 800D27C4 3C01800D */       lui $at, %hi(D_ovl0_800D6450)
  /* 04E1A8 800D27C8 3C05800D */       lui $a1, %hi(func_ovl0_800D2C4C)
  /* 04E1AC 800D27CC A4206450 */        sh $zero, %lo(D_ovl0_800D6450)($at)
  /* 04E1B0 800D27D0 24A52C4C */     addiu $a1, $a1, %lo(func_ovl0_800D2C4C)
  /* 04E1B4 800D27D4 2404FFF9 */     addiu $a0, $zero, -7
  /* 04E1B8 800D27D8 00003025 */        or $a2, $zero, $zero
  /* 04E1BC 800D27DC 0C00265A */       jal omMakeGObjCommon
  /* 04E1C0 800D27E0 3C078000 */       lui $a3, 0x8000
  .L800D27E4:
  /* 04E1C4 800D27E4 8FBF001C */        lw $ra, 0x1c($sp)
  /* 04E1C8 800D27E8 8FB00014 */        lw $s0, 0x14($sp)
  /* 04E1CC 800D27EC 8FB10018 */        lw $s1, 0x18($sp)
  /* 04E1D0 800D27F0 03E00008 */        jr $ra
  /* 04E1D4 800D27F4 27BD0020 */     addiu $sp, $sp, 0x20

