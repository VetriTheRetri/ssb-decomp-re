.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x80131B00 -> 0x80132100

glabel func_ovl57_80131B00
  /* 17E510 80131B00 3C0E8004 */       lui $t6, %hi(D_800451A4)
  /* 17E514 80131B04 81CE51A4 */        lb $t6, %lo(D_800451A4)($t6)
  /* 17E518 80131B08 3C0F8004 */       lui $t7, 0x8004
  /* 17E51C 80131B0C 148E0003 */       bne $a0, $t6, .L80131B1C
  /* 17E520 80131B10 00000000 */       nop 
  /* 17E524 80131B14 03E00008 */        jr $ra
  /* 17E528 80131B18 24020001 */     addiu $v0, $zero, 1

  .L80131B1C:
  /* 17E52C 80131B1C 81EF51A5 */        lb $t7, 0x51a5($t7)
  /* 17E530 80131B20 3C188004 */       lui $t8, 0x8004
  /* 17E534 80131B24 148F0003 */       bne $a0, $t7, .L80131B34
  /* 17E538 80131B28 00000000 */       nop 
  /* 17E53C 80131B2C 03E00008 */        jr $ra
  /* 17E540 80131B30 24020001 */     addiu $v0, $zero, 1

  .L80131B34:
  /* 17E544 80131B34 831851A6 */        lb $t8, 0x51a6($t8)
  /* 17E548 80131B38 3C198004 */       lui $t9, 0x8004
  /* 17E54C 80131B3C 14980003 */       bne $a0, $t8, .L80131B4C
  /* 17E550 80131B40 00000000 */       nop 
  /* 17E554 80131B44 03E00008 */        jr $ra
  /* 17E558 80131B48 24020001 */     addiu $v0, $zero, 1

  .L80131B4C:
  /* 17E55C 80131B4C 833951A7 */        lb $t9, 0x51a7($t9)
  /* 17E560 80131B50 00001025 */        or $v0, $zero, $zero
  /* 17E564 80131B54 14990003 */       bne $a0, $t9, .L80131B64
  /* 17E568 80131B58 00000000 */       nop 
  /* 17E56C 80131B5C 03E00008 */        jr $ra
  /* 17E570 80131B60 24020001 */     addiu $v0, $zero, 1

  .L80131B64:
  /* 17E574 80131B64 03E00008 */        jr $ra
  /* 17E578 80131B68 00000000 */       nop 

glabel func_ovl57_80131B6C
  /* 17E57C 80131B6C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17E580 80131B70 AFB20020 */        sw $s2, 0x20($sp)
  /* 17E584 80131B74 AFB40028 */        sw $s4, 0x28($sp)
  /* 17E588 80131B78 AFB30024 */        sw $s3, 0x24($sp)
  /* 17E58C 80131B7C AFB1001C */        sw $s1, 0x1c($sp)
  /* 17E590 80131B80 AFB00018 */        sw $s0, 0x18($sp)
  /* 17E594 80131B84 3C128004 */       lui $s2, %hi(gContInput)
  /* 17E598 80131B88 00808825 */        or $s1, $a0, $zero
  /* 17E59C 80131B8C AFBF002C */        sw $ra, 0x2c($sp)
  /* 17E5A0 80131B90 26525228 */     addiu $s2, $s2, %lo(gContInput)
  /* 17E5A4 80131B94 00008025 */        or $s0, $zero, $zero
  /* 17E5A8 80131B98 2413000A */     addiu $s3, $zero, 0xa
  /* 17E5AC 80131B9C 24140004 */     addiu $s4, $zero, 4
  .L80131BA0:
  /* 17E5B0 80131BA0 0C04C6C0 */       jal func_ovl57_80131B00
  /* 17E5B4 80131BA4 02002025 */        or $a0, $s0, $zero
  /* 17E5B8 80131BA8 5040000B */      beql $v0, $zero, .L80131BD8
  /* 17E5BC 80131BAC 26100001 */     addiu $s0, $s0, 1
  /* 17E5C0 80131BB0 02130019 */     multu $s0, $s3
  /* 17E5C4 80131BB4 00007012 */      mflo $t6
  /* 17E5C8 80131BB8 024E7821 */      addu $t7, $s2, $t6
  /* 17E5CC 80131BBC 95F80002 */       lhu $t8, 2($t7)
  /* 17E5D0 80131BC0 0311C824 */       and $t9, $t8, $s1
  /* 17E5D4 80131BC4 53200004 */      beql $t9, $zero, .L80131BD8
  /* 17E5D8 80131BC8 26100001 */     addiu $s0, $s0, 1
  /* 17E5DC 80131BCC 10000005 */         b .L80131BE4
  /* 17E5E0 80131BD0 26020001 */     addiu $v0, $s0, 1
  /* 17E5E4 80131BD4 26100001 */     addiu $s0, $s0, 1
  .L80131BD8:
  /* 17E5E8 80131BD8 1614FFF1 */       bne $s0, $s4, .L80131BA0
  /* 17E5EC 80131BDC 00000000 */       nop 
  /* 17E5F0 80131BE0 00001025 */        or $v0, $zero, $zero
  .L80131BE4:
  /* 17E5F4 80131BE4 8FBF002C */        lw $ra, 0x2c($sp)
  /* 17E5F8 80131BE8 8FB00018 */        lw $s0, 0x18($sp)
  /* 17E5FC 80131BEC 8FB1001C */        lw $s1, 0x1c($sp)
  /* 17E600 80131BF0 8FB20020 */        lw $s2, 0x20($sp)
  /* 17E604 80131BF4 8FB30024 */        lw $s3, 0x24($sp)
  /* 17E608 80131BF8 8FB40028 */        lw $s4, 0x28($sp)
  /* 17E60C 80131BFC 03E00008 */        jr $ra
  /* 17E610 80131C00 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_ovl57_80131C04
  /* 17E614 80131C04 3C038013 */       lui $v1, %hi(D_ovl57_801322E4)
  /* 17E618 80131C08 246322E4 */     addiu $v1, $v1, %lo(D_ovl57_801322E4)
  /* 17E61C 80131C0C 8C620000 */        lw $v0, ($v1) # D_ovl57_801322E4 + 0
  /* 17E620 80131C10 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 17E624 80131C14 AFBF0024 */        sw $ra, 0x24($sp)
  /* 17E628 80131C18 10400004 */      beqz $v0, .L80131C2C
  /* 17E62C 80131C1C AFA40030 */        sw $a0, 0x30($sp)
  /* 17E630 80131C20 244EFFFF */     addiu $t6, $v0, -1
  /* 17E634 80131C24 AC6E0000 */        sw $t6, ($v1) # D_ovl57_801322E4 + 0
  /* 17E638 80131C28 01C01025 */        or $v0, $t6, $zero
  .L80131C2C:
  /* 17E63C 80131C2C 14400019 */      bnez $v0, .L80131C94
  /* 17E640 80131C30 3C0F8013 */       lui $t7, %hi(D_ovl57_801322EC)
  /* 17E644 80131C34 8DEF22EC */        lw $t7, %lo(D_ovl57_801322EC)($t7)
  /* 17E648 80131C38 55E00017 */      bnel $t7, $zero, .L80131C98
  /* 17E64C 80131C3C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 17E650 80131C40 0C04C6DB */       jal func_ovl57_80131B6C
  /* 17E654 80131C44 3404D000 */       ori $a0, $zero, 0xd000
  /* 17E658 80131C48 10400012 */      beqz $v0, .L80131C94
  /* 17E65C 80131C4C 27A7002C */     addiu $a3, $sp, 0x2c
  /* 17E660 80131C50 24180001 */     addiu $t8, $zero, 1
  /* 17E664 80131C54 3C018013 */       lui $at, %hi(D_ovl57_801322EC)
  /* 17E668 80131C58 3C198013 */       lui $t9, %hi(D_ovl57_801321C0)
  /* 17E66C 80131C5C AC3822EC */        sw $t8, %lo(D_ovl57_801322EC)($at)
  /* 17E670 80131C60 273921C0 */     addiu $t9, $t9, %lo(D_ovl57_801321C0)
  /* 17E674 80131C64 8F290000 */        lw $t1, ($t9) # D_ovl57_801321C0 + 0
  /* 17E678 80131C68 3C0B8013 */       lui $t3, %hi(D_ovl57_801322F0)
  /* 17E67C 80131C6C 256B22F0 */     addiu $t3, $t3, %lo(D_ovl57_801322F0)
  /* 17E680 80131C70 ACE90000 */        sw $t1, ($a3)
  /* 17E684 80131C74 240A005A */     addiu $t2, $zero, 0x5a
  /* 17E688 80131C78 AFAA0010 */        sw $t2, 0x10($sp)
  /* 17E68C 80131C7C AFAB0018 */        sw $t3, 0x18($sp)
  /* 17E690 80131C80 AFA00014 */        sw $zero, 0x14($sp)
  /* 17E694 80131C84 240403FD */     addiu $a0, $zero, 0x3fd
  /* 17E698 80131C88 2405000D */     addiu $a1, $zero, 0xd
  /* 17E69C 80131C8C 0C035018 */       jal func_ovl0_800D4060
  /* 17E6A0 80131C90 2406000A */     addiu $a2, $zero, 0xa
  .L80131C94:
  /* 17E6A4 80131C94 8FBF0024 */        lw $ra, 0x24($sp)
  .L80131C98:
  /* 17E6A8 80131C98 27BD0030 */     addiu $sp, $sp, 0x30
  /* 17E6AC 80131C9C 03E00008 */        jr $ra
  /* 17E6B0 80131CA0 00000000 */       nop 

  /* 17E6B4 80131CA4 27BDFF88 */     addiu $sp, $sp, -0x78
  /* 17E6B8 80131CA8 240E0008 */     addiu $t6, $zero, 8
  /* 17E6BC 80131CAC 3C018013 */       lui $at, %hi(D_ovl57_801322E4)
  /* 17E6C0 80131CB0 AC2E22E4 */        sw $t6, %lo(D_ovl57_801322E4)($at)
  /* 17E6C4 80131CB4 3C018013 */       lui $at, %hi(D_ovl57_801322E8)
  /* 17E6C8 80131CB8 AC2022E8 */        sw $zero, %lo(D_ovl57_801322E8)($at)
  /* 17E6CC 80131CBC 3C018013 */       lui $at, %hi(D_ovl57_801322EC)
  /* 17E6D0 80131CC0 AC2022EC */        sw $zero, %lo(D_ovl57_801322EC)($at)
  /* 17E6D4 80131CC4 3C0F001B */       lui $t7, %hi(D_NF_001AC870)
  /* 17E6D8 80131CC8 3C180000 */       lui $t8, %hi(D_NF_00000854)
  /* 17E6DC 80131CCC 3C198013 */       lui $t9, %hi(D_ovl57_801322B8)
  /* 17E6E0 80131CD0 AFBF003C */        sw $ra, 0x3c($sp)
  /* 17E6E4 80131CD4 3C018013 */       lui $at, %hi(D_ovl57_801322F0)
  /* 17E6E8 80131CD8 25EFC870 */     addiu $t7, $t7, %lo(D_NF_001AC870)
  /* 17E6EC 80131CDC 27180854 */     addiu $t8, $t8, %lo(D_NF_00000854)
  /* 17E6F0 80131CE0 273922B8 */     addiu $t9, $t9, %lo(D_ovl57_801322B8)
  /* 17E6F4 80131CE4 24080005 */     addiu $t0, $zero, 5
  /* 17E6F8 80131CE8 AC2022F0 */        sw $zero, %lo(D_ovl57_801322F0)($at)
  /* 17E6FC 80131CEC AFAF0058 */        sw $t7, 0x58($sp)
  /* 17E700 80131CF0 AFB8005C */        sw $t8, 0x5c($sp)
  /* 17E704 80131CF4 AFA00060 */        sw $zero, 0x60($sp)
  /* 17E708 80131CF8 AFA00064 */        sw $zero, 0x64($sp)
  /* 17E70C 80131CFC AFB90068 */        sw $t9, 0x68($sp)
  /* 17E710 80131D00 AFA8006C */        sw $t0, 0x6c($sp)
  /* 17E714 80131D04 AFA00070 */        sw $zero, 0x70($sp)
  /* 17E718 80131D08 AFA00074 */        sw $zero, 0x74($sp)
  /* 17E71C 80131D0C 0C0337DE */       jal rldm_initialize
  /* 17E720 80131D10 27A40058 */     addiu $a0, $sp, 0x58
  /* 17E724 80131D14 3C058013 */       lui $a1, %hi(func_ovl57_80131C04)
  /* 17E728 80131D18 24A51C04 */     addiu $a1, $a1, %lo(func_ovl57_80131C04)
  /* 17E72C 80131D1C 00002025 */        or $a0, $zero, $zero
  /* 17E730 80131D20 00003025 */        or $a2, $zero, $zero
  /* 17E734 80131D24 0C00265A */       jal omMakeGObjCommon
  /* 17E738 80131D28 3C078000 */       lui $a3, 0x8000
  /* 17E73C 80131D2C 240900FF */     addiu $t1, $zero, 0xff
  /* 17E740 80131D30 AFA90010 */        sw $t1, 0x10($sp)
  /* 17E744 80131D34 00002025 */        or $a0, $zero, $zero
  /* 17E748 80131D38 3C058000 */       lui $a1, 0x8000
  /* 17E74C 80131D3C 24060064 */     addiu $a2, $zero, 0x64
  /* 17E750 80131D40 0C002E7F */       jal func_8000B9FC
  /* 17E754 80131D44 24070002 */     addiu $a3, $zero, 2
  /* 17E758 80131D48 3C0A800D */       lui $t2, %hi(func_ovl0_800CD2CC)
  /* 17E75C 80131D4C 254AD2CC */     addiu $t2, $t2, %lo(func_ovl0_800CD2CC)
  /* 17E760 80131D50 240B0050 */     addiu $t3, $zero, 0x50
  /* 17E764 80131D54 240C0000 */     addiu $t4, $zero, 0
  /* 17E768 80131D58 240D0001 */     addiu $t5, $zero, 1
  /* 17E76C 80131D5C 240EFFFF */     addiu $t6, $zero, -1
  /* 17E770 80131D60 240F0001 */     addiu $t7, $zero, 1
  /* 17E774 80131D64 24180001 */     addiu $t8, $zero, 1
  /* 17E778 80131D68 AFB80030 */        sw $t8, 0x30($sp)
  /* 17E77C 80131D6C AFAF0028 */        sw $t7, 0x28($sp)
  /* 17E780 80131D70 AFAE0020 */        sw $t6, 0x20($sp)
  /* 17E784 80131D74 AFAD001C */        sw $t5, 0x1c($sp)
  /* 17E788 80131D78 AFAC0018 */        sw $t4, 0x18($sp)
  /* 17E78C 80131D7C AFAB0014 */        sw $t3, 0x14($sp)
  /* 17E790 80131D80 AFAA0010 */        sw $t2, 0x10($sp)
  /* 17E794 80131D84 240403EB */     addiu $a0, $zero, 0x3eb
  /* 17E798 80131D88 00002825 */        or $a1, $zero, $zero
  /* 17E79C 80131D8C 24060009 */     addiu $a2, $zero, 9
  /* 17E7A0 80131D90 3C078000 */       lui $a3, 0x8000
  /* 17E7A4 80131D94 AFA00024 */        sw $zero, 0x24($sp)
  /* 17E7A8 80131D98 AFA0002C */        sw $zero, 0x2c($sp)
  /* 17E7AC 80131D9C 0C002E4F */       jal func_8000B93C
  /* 17E7B0 80131DA0 AFA00034 */        sw $zero, 0x34($sp)
  /* 17E7B4 80131DA4 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17E7B8 80131DA8 44810000 */      mtc1 $at, $f0 # 10.0 to cop1
  /* 17E7BC 80131DAC 3C014366 */       lui $at, (0x43660000 >> 16) # 230.0
  /* 17E7C0 80131DB0 8C430074 */        lw $v1, 0x74($v0)
  /* 17E7C4 80131DB4 44812000 */      mtc1 $at, $f4 # 230.0 to cop1
  /* 17E7C8 80131DB8 44050000 */      mfc1 $a1, $f0
  /* 17E7CC 80131DBC 44060000 */      mfc1 $a2, $f0
  /* 17E7D0 80131DC0 3C07439B */       lui $a3, 0x439b
  /* 17E7D4 80131DC4 24640008 */     addiu $a0, $v1, 8
  /* 17E7D8 80131DC8 0C001C20 */       jal func_80007080
  /* 17E7DC 80131DCC E7A40010 */      swc1 $f4, 0x10($sp)
  /* 17E7E0 80131DD0 240403F0 */     addiu $a0, $zero, 0x3f0
  /* 17E7E4 80131DD4 00002825 */        or $a1, $zero, $zero
  /* 17E7E8 80131DD8 2406000D */     addiu $a2, $zero, 0xd
  /* 17E7EC 80131DDC 0C00265A */       jal omMakeGObjCommon
  /* 17E7F0 80131DE0 3C078000 */       lui $a3, 0x8000
  /* 17E7F4 80131DE4 3C05800D */       lui $a1, %hi(func_ovl0_800CCF00)
  /* 17E7F8 80131DE8 2419FFFF */     addiu $t9, $zero, -1
  /* 17E7FC 80131DEC AFA20050 */        sw $v0, 0x50($sp)
  /* 17E800 80131DF0 AFB90010 */        sw $t9, 0x10($sp)
  /* 17E804 80131DF4 24A5CF00 */     addiu $a1, $a1, %lo(func_ovl0_800CCF00)
  /* 17E808 80131DF8 00402025 */        or $a0, $v0, $zero
  /* 17E80C 80131DFC 00003025 */        or $a2, $zero, $zero
  /* 17E810 80131E00 0C00277D */       jal func_80009DF4
  /* 17E814 80131E04 3C078000 */       lui $a3, 0x8000
  /* 17E818 80131E08 3C088013 */       lui $t0, %hi(D_ovl57_801322E0)
  /* 17E81C 80131E0C 8D0822E0 */        lw $t0, %lo(D_ovl57_801322E0)($t0)
  /* 17E820 80131E10 3C048013 */       lui $a0, %hi(D_ovl57_80132100)
  /* 17E824 80131E14 00084900 */       sll $t1, $t0, 4
  /* 17E828 80131E18 00892021 */      addu $a0, $a0, $t1
  /* 17E82C 80131E1C 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 17E830 80131E20 8C842100 */        lw $a0, %lo(D_ovl57_80132100)($a0)
  /* 17E834 80131E24 00402025 */        or $a0, $v0, $zero
  /* 17E838 80131E28 0C001260 */       jal hal_alloc
  /* 17E83C 80131E2C 24050010 */     addiu $a1, $zero, 0x10
  /* 17E840 80131E30 3C0A8013 */       lui $t2, %hi(D_ovl57_801322E0)
  /* 17E844 80131E34 8D4A22E0 */        lw $t2, %lo(D_ovl57_801322E0)($t2)
  /* 17E848 80131E38 3C048013 */       lui $a0, %hi(D_ovl57_80132100)
  /* 17E84C 80131E3C 00402825 */        or $a1, $v0, $zero
  /* 17E850 80131E40 000A5900 */       sll $t3, $t2, 4
  /* 17E854 80131E44 008B2021 */      addu $a0, $a0, $t3
  /* 17E858 80131E48 0C033722 */       jal rldm_get_file_with_external_heap
  /* 17E85C 80131E4C 8C842100 */        lw $a0, %lo(D_ovl57_80132100)($a0)
  /* 17E860 80131E50 3C0C8013 */       lui $t4, %hi(D_ovl57_801322E0)
  /* 17E864 80131E54 8D8C22E0 */        lw $t4, %lo(D_ovl57_801322E0)($t4)
  /* 17E868 80131E58 3C0E8013 */       lui $t6, %hi(D_ovl57_80132104)
  /* 17E86C 80131E5C 8FA40050 */        lw $a0, 0x50($sp)
  /* 17E870 80131E60 000C6900 */       sll $t5, $t4, 4
  /* 17E874 80131E64 01CD7021 */      addu $t6, $t6, $t5
  /* 17E878 80131E68 8DCE2104 */        lw $t6, %lo(D_ovl57_80132104)($t6)
  /* 17E87C 80131E6C 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 17E880 80131E70 01C22821 */      addu $a1, $t6, $v0
  /* 17E884 80131E74 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17E888 80131E78 44813000 */      mtc1 $at, $f6 # 10.0 to cop1
  /* 17E88C 80131E7C 944F0024 */       lhu $t7, 0x24($v0)
  /* 17E890 80131E80 3C0142F0 */       lui $at, (0x42F00000 >> 16) # 120.0
  /* 17E894 80131E84 44814000 */      mtc1 $at, $f8 # 120.0 to cop1
  /* 17E898 80131E88 31F8FFDF */      andi $t8, $t7, 0xffdf
  /* 17E89C 80131E8C A4580024 */        sh $t8, 0x24($v0)
  /* 17E8A0 80131E90 3C198013 */       lui $t9, %hi(D_ovl57_801322E0)
  /* 17E8A4 80131E94 E4460058 */      swc1 $f6, 0x58($v0)
  /* 17E8A8 80131E98 E448005C */      swc1 $f8, 0x5c($v0)
  /* 17E8AC 80131E9C 8F3922E0 */        lw $t9, %lo(D_ovl57_801322E0)($t9)
  /* 17E8B0 80131EA0 3C048013 */       lui $a0, %hi(D_ovl57_80132108)
  /* 17E8B4 80131EA4 00194100 */       sll $t0, $t9, 4
  /* 17E8B8 80131EA8 00882021 */      addu $a0, $a0, $t0
  /* 17E8BC 80131EAC 0C0336F4 */       jal rldm_bytes_needed_to_load
  /* 17E8C0 80131EB0 8C842108 */        lw $a0, %lo(D_ovl57_80132108)($a0)
  /* 17E8C4 80131EB4 00402025 */        or $a0, $v0, $zero
  /* 17E8C8 80131EB8 0C001260 */       jal hal_alloc
  /* 17E8CC 80131EBC 24050010 */     addiu $a1, $zero, 0x10
  /* 17E8D0 80131EC0 3C098013 */       lui $t1, %hi(D_ovl57_801322E0)
  /* 17E8D4 80131EC4 8D2922E0 */        lw $t1, %lo(D_ovl57_801322E0)($t1)
  /* 17E8D8 80131EC8 3C048013 */       lui $a0, %hi(D_ovl57_80132108)
  /* 17E8DC 80131ECC 00402825 */        or $a1, $v0, $zero
  /* 17E8E0 80131ED0 00095100 */       sll $t2, $t1, 4
  /* 17E8E4 80131ED4 008A2021 */      addu $a0, $a0, $t2
  /* 17E8E8 80131ED8 0C033722 */       jal rldm_get_file_with_external_heap
  /* 17E8EC 80131EDC 8C842108 */        lw $a0, %lo(D_ovl57_80132108)($a0)
  /* 17E8F0 80131EE0 3C0B8013 */       lui $t3, %hi(D_ovl57_801322E0)
  /* 17E8F4 80131EE4 8D6B22E0 */        lw $t3, %lo(D_ovl57_801322E0)($t3)
  /* 17E8F8 80131EE8 3C0D8013 */       lui $t5, %hi(D_ovl57_8013210C)
  /* 17E8FC 80131EEC 8FA40050 */        lw $a0, 0x50($sp)
  /* 17E900 80131EF0 000B6100 */       sll $t4, $t3, 4
  /* 17E904 80131EF4 01AC6821 */      addu $t5, $t5, $t4
  /* 17E908 80131EF8 8DAD210C */        lw $t5, %lo(D_ovl57_8013210C)($t5)
  /* 17E90C 80131EFC 0C0333F7 */       jal func_ovl0_800CCFDC
  /* 17E910 80131F00 01A22821 */      addu $a1, $t5, $v0
  /* 17E914 80131F04 3C014120 */       lui $at, (0x41200000 >> 16) # 10.0
  /* 17E918 80131F08 944E0024 */       lhu $t6, 0x24($v0)
  /* 17E91C 80131F0C 44815000 */      mtc1 $at, $f10 # 10.0 to cop1
  /* 17E920 80131F10 44818000 */      mtc1 $at, $f16 # 10.0 to cop1
  /* 17E924 80131F14 31CFFFDF */      andi $t7, $t6, 0xffdf
  /* 17E928 80131F18 A44F0024 */        sh $t7, 0x24($v0)
  /* 17E92C 80131F1C 3C18800A */       lui $t8, %hi((gSceneData + 0x20))
  /* 17E930 80131F20 E44A0058 */      swc1 $f10, 0x58($v0)
  /* 17E934 80131F24 E450005C */      swc1 $f16, 0x5c($v0)
  /* 17E938 80131F28 8F184AF0 */        lw $t8, %lo((gSceneData + 0x20))($t8)
  /* 17E93C 80131F2C 3C01000F */       lui $at, (0xF4240 >> 16) # 1000000
  /* 17E940 80131F30 34214240 */       ori $at, $at, (0xF4240 & 0xFFFF) # 1000000
  /* 17E944 80131F34 0301082B */      sltu $at, $t8, $at
  /* 17E948 80131F38 14200003 */      bnez $at, .L80131F48
  /* 17E94C 80131F3C 240201D1 */     addiu $v0, $zero, 0x1d1
  /* 17E950 80131F40 10000001 */         b .L80131F48
  /* 17E954 80131F44 240201D2 */     addiu $v0, $zero, 0x1d2
  .L80131F48:
  /* 17E958 80131F48 0C009A70 */       jal func_800269C0
  /* 17E95C 80131F4C 3044FFFF */      andi $a0, $v0, 0xffff
  /* 17E960 80131F50 8FBF003C */        lw $ra, 0x3c($sp)
  /* 17E964 80131F54 27BD0078 */     addiu $sp, $sp, 0x78
  /* 17E968 80131F58 03E00008 */        jr $ra
  /* 17E96C 80131F5C 00000000 */       nop 

glabel func_ovl57_80131F60
  /* 17E970 80131F60 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17E974 80131F64 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17E978 80131F68 0C0028D0 */       jal func_8000A340
  /* 17E97C 80131F6C 00000000 */       nop 
  /* 17E980 80131F70 3C028013 */       lui $v0, %hi(D_ovl57_801322F0)
  /* 17E984 80131F74 244222F0 */     addiu $v0, $v0, %lo(D_ovl57_801322F0)
  /* 17E988 80131F78 8C4E0000 */        lw $t6, ($v0) # D_ovl57_801322F0 + 0
  /* 17E98C 80131F7C 24040100 */     addiu $a0, $zero, 0x100
  /* 17E990 80131F80 11C00007 */      beqz $t6, .L80131FA0
  /* 17E994 80131F84 00000000 */       nop 
  /* 17E998 80131F88 0C001B86 */       jal func_80006E18
  /* 17E99C 80131F8C AC400000 */        sw $zero, ($v0) # D_ovl57_801322F0 + 0
  /* 17E9A0 80131F90 3C038013 */       lui $v1, %hi(D_ovl57_801322E8)
  /* 17E9A4 80131F94 246322E8 */     addiu $v1, $v1, %lo(D_ovl57_801322E8)
  /* 17E9A8 80131F98 240F0005 */     addiu $t7, $zero, 5
  /* 17E9AC 80131F9C AC6F0000 */        sw $t7, ($v1) # D_ovl57_801322E8 + 0
  .L80131FA0:
  /* 17E9B0 80131FA0 3C038013 */       lui $v1, %hi(D_ovl57_801322E8)
  /* 17E9B4 80131FA4 246322E8 */     addiu $v1, $v1, %lo(D_ovl57_801322E8)
  /* 17E9B8 80131FA8 8C620000 */        lw $v0, ($v1) # D_ovl57_801322E8 + 0
  /* 17E9BC 80131FAC 1040000A */      beqz $v0, .L80131FD8
  /* 17E9C0 80131FB0 2458FFFF */     addiu $t8, $v0, -1
  /* 17E9C4 80131FB4 17000008 */      bnez $t8, .L80131FD8
  /* 17E9C8 80131FB8 AC780000 */        sw $t8, ($v1) # D_ovl57_801322E8 + 0
  /* 17E9CC 80131FBC 3C02800A */       lui $v0, %hi(gSceneData)
  /* 17E9D0 80131FC0 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 17E9D4 80131FC4 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 17E9D8 80131FC8 24090001 */     addiu $t1, $zero, 1
  /* 17E9DC 80131FCC A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 17E9E0 80131FD0 0C00171D */       jal func_80005C74
  /* 17E9E4 80131FD4 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  .L80131FD8:
  /* 17E9E8 80131FD8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17E9EC 80131FDC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17E9F0 80131FE0 03E00008 */        jr $ra
  /* 17E9F4 80131FE4 00000000 */       nop 

glabel func_ovl57_80131FE8
  /* 17E9F8 80131FE8 8C830000 */        lw $v1, ($a0)
  /* 17E9FC 80131FEC 3C188013 */       lui $t8, %hi(D_ovl57_801321E0)
  /* 17EA00 80131FF0 271821E0 */     addiu $t8, $t8, %lo(D_ovl57_801321E0)
  /* 17EA04 80131FF4 246E0008 */     addiu $t6, $v1, 8
  /* 17EA08 80131FF8 AC8E0000 */        sw $t6, ($a0)
  /* 17EA0C 80131FFC 3C0FDE00 */       lui $t7, 0xde00
  /* 17EA10 80132000 AC6F0000 */        sw $t7, ($v1)
  /* 17EA14 80132004 03E00008 */        jr $ra
  /* 17EA18 80132008 AC780004 */        sw $t8, 4($v1)

glabel overlay_set55_entry
  /* 17EA1C 8013200C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 17EA20 80132010 3C038032 */       lui $v1, (0x80325400 >> 16) # 2150781952
  /* 17EA24 80132014 AFBF0014 */        sw $ra, 0x14($sp)
  /* 17EA28 80132018 34635400 */       ori $v1, $v1, (0x80325400 & 0xFFFF) # 2150781952
  /* 17EA2C 8013201C 3C058040 */       lui $a1, 0x8040
  /* 17EA30 80132020 240200FF */     addiu $v0, $zero, 0xff
  .L80132024:
  /* 17EA34 80132024 24630010 */     addiu $v1, $v1, 0x10
  /* 17EA38 80132028 AC62FFF0 */        sw $v0, -0x10($v1) # D_NF_80325400 + -16
  /* 17EA3C 8013202C AC62FFF4 */        sw $v0, -0xc($v1) # D_NF_80325400 + -12
  /* 17EA40 80132030 AC62FFF8 */        sw $v0, -8($v1) # D_NF_80325400 + -8
  /* 17EA44 80132034 1465FFFB */       bne $v1, $a1, .L80132024
  /* 17EA48 80132038 AC62FFFC */        sw $v0, -4($v1) # D_NF_80325400 + -4
  /* 17EA4C 8013203C 3C03800A */       lui $v1, %hi(gSceneData)
  /* 17EA50 80132040 24634AD0 */     addiu $v1, $v1, %lo(gSceneData)
  /* 17EA54 80132044 90620001 */       lbu $v0, 1($v1) # gSceneData + 1
  /* 17EA58 80132048 24010004 */     addiu $at, $zero, 4
  /* 17EA5C 8013204C 10410009 */       beq $v0, $at, .L80132074
  /* 17EA60 80132050 24010034 */     addiu $at, $zero, 0x34
  /* 17EA64 80132054 10410003 */       beq $v0, $at, .L80132064
  /* 17EA68 80132058 3C018013 */       lui $at, %hi(D_ovl57_801322E0)
  /* 17EA6C 8013205C 10000009 */         b .L80132084
  /* 17EA70 80132060 AC2022E0 */        sw $zero, %lo(D_ovl57_801322E0)($at)
  .L80132064:
  /* 17EA74 80132064 906E0014 */       lbu $t6, 0x14($v1) # gSceneData + 20
  /* 17EA78 80132068 3C018013 */       lui $at, %hi(D_ovl57_801322E0)
  /* 17EA7C 8013206C 10000005 */         b .L80132084
  /* 17EA80 80132070 AC2E22E0 */        sw $t6, %lo(D_ovl57_801322E0)($at)
  .L80132074:
  /* 17EA84 80132074 3C0F800A */       lui $t7, %hi((D_800A4D08 + 0x23))
  /* 17EA88 80132078 91EF4D2B */       lbu $t7, %lo((D_800A4D08 + 0x23))($t7)
  /* 17EA8C 8013207C 3C018013 */       lui $at, %hi(D_ovl57_801322E0)
  /* 17EA90 80132080 AC2F22E0 */        sw $t7, %lo(D_ovl57_801322E0)($at)
  .L80132084:
  /* 17EA94 80132084 3C18800A */       lui $t8, %hi(D_NF_800A5240)
  /* 17EA98 80132088 3C048013 */       lui $a0, %hi(D_ovl57_80132208)
  /* 17EA9C 8013208C 27185240 */     addiu $t8, $t8, %lo(D_NF_800A5240)
  /* 17EAA0 80132090 24842208 */     addiu $a0, $a0, %lo(D_ovl57_80132208)
  /* 17EAA4 80132094 2719E700 */     addiu $t9, $t8, -0x1900
  /* 17EAA8 80132098 0C001C09 */       jal func_80007024
  /* 17EAAC 8013209C AC99000C */        sw $t9, 0xc($a0) # D_ovl57_80132208 + 12
  /* 17EAB0 801320A0 3C088032 */       lui $t0, (0x80325400 >> 16) # 2150781952
  /* 17EAB4 801320A4 3C098013 */       lui $t1, %hi(D_NF_80132300)
  /* 17EAB8 801320A8 3C048013 */       lui $a0, %hi(D_ovl57_80132224)
  /* 17EABC 801320AC 25292300 */     addiu $t1, $t1, %lo(D_NF_80132300)
  /* 17EAC0 801320B0 35085400 */       ori $t0, $t0, (0x80325400 & 0xFFFF) # 2150781952
  /* 17EAC4 801320B4 24842224 */     addiu $a0, $a0, %lo(D_ovl57_80132224)
  /* 17EAC8 801320B8 01095023 */      subu $t2, $t0, $t1
  /* 17EACC 801320BC 0C001A0F */       jal func_8000683C
  /* 17EAD0 801320C0 AC8A0010 */        sw $t2, 0x10($a0) # D_ovl57_80132224 + 16
  /* 17EAD4 801320C4 3C038039 */       lui $v1, 0x8039
  /* 17EAD8 801320C8 24622A00 */     addiu $v0, $v1, 0x2a00
  /* 17EADC 801320CC 3C058040 */       lui $a1, 0x8040
  /* 17EAE0 801320D0 0045082B */      sltu $at, $v0, $a1
  /* 17EAE4 801320D4 10200005 */      beqz $at, .L801320EC
  /* 17EAE8 801320D8 24030001 */     addiu $v1, $zero, 1
  .L801320DC:
  /* 17EAEC 801320DC 24420002 */     addiu $v0, $v0, 2
  /* 17EAF0 801320E0 0045082B */      sltu $at, $v0, $a1
  /* 17EAF4 801320E4 1420FFFD */      bnez $at, .L801320DC
  /* 17EAF8 801320E8 A443FFFE */        sh $v1, -2($v0)
  .L801320EC:
  /* 17EAFC 801320EC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 17EB00 801320F0 27BD0018 */     addiu $sp, $sp, 0x18
  /* 17EB04 801320F4 03E00008 */        jr $ra
  /* 17EB08 801320F8 00000000 */       nop 

  /* 17EB0C 801320FC 00000000 */       nop 

# Likely start of new file
#glabel D_ovl57_80132100   # Routine parsed as data
#  /* 17EB10 80132100 000000BA */      dsrl $zero, $zero, 2
