.include "macros.inc"

.section .data
# 10
glabel D_8003C950
  .incbin "system.raw.bin", 0x3C550, 0x1B0

glabel D_8003CB00
  .incbin "system.raw.bin", 0x3C700, 0x18
  /* 3C718 03D718 8003CB18 */  .4byte D_8003C950

glabel D_8003CB1C
  .incbin "system.raw.bin", 0x3C71C, 0x4

glabel D_8003CB20
  .incbin "system.raw.bin", 0x3C720, 0x4

glabel D_8003CB24
  .incbin "system.raw.bin", 0x3C724, 0x4

glabel D_8003CB28
  .incbin "system.raw.bin", 0x3C728, 0x4

glabel D_8003CB2C
  .incbin "system.raw.bin", 0x3C72C, 0x4

glabel D_8003CB30
  .incbin "system.raw.bin", 0x3C730, 0x4

glabel D_8003CB34
  .incbin "system.raw.bin", 0x3C734, 0x8

glabel D_8003CB3C
  /* 3C73C 03D73C 8003CB3C */  .4byte D_800472D0
  .incbin "system.raw.bin", 0x3C740, 0x2D

glabel D_8003CB6D
  .incbin "system.raw.bin", 0x3C76D, 0xF

glabel D_8003CB7C
  .incbin "system.raw.bin", 0x3C77C, 0x4

glabel D_8003CB80
  .incbin "system.raw.bin", 0x3C780, 0x6

glabel D_8003CB86
  .incbin "system.raw.bin", 0x3C786, 0x2

glabel D_8003CB88
  .incbin "system.raw.bin", 0x3C788, 0x28

.section .rodata
# 10
glabel D_8003E410
  /* 3E010 03F010 8003E410 */
  .4byte 0x3f83f794 # .float 1.030993

glabel D_8003E414
  /* 3E014 03F014 8003E414 */
  .4byte 0x40c90fdb # .float 6.2831855

glabel D_8003E418
  /* 3E018 03F018 8003E418 */
  .4byte 0x40c90fdb # .float 6.2831855
  .incbin "system.raw.bin", 0x3E01C, 0x4

.section .bss
# 10?
glabel D_800472D0
    .space 101680
glabel D_80060000
    .space 131200
glabel D_80080080
    .space 119376

# 10?
glabel D_8009D2D0
    .space 8
glabel D_8009D2D8
    .space 16
glabel D_8009D2E8
    .space 4
glabel D_8009D2EC
    .space 4
glabel D_8009D2F0
    .space 8
glabel D_8009D2F8
    .space 24
glabel D_8009D310
    .space 24
glabel D_8009D328
    .space 24
glabel D_8009D340
    .space 4
glabel D_8009D344
    .space 4
glabel D_8009D348
    .space 200
glabel D_8009D410
    .space 1200
glabel D_8009D8C0
    .space 92
glabel D_8009D91C
    .space 4
glabel D_8009D920
    .space 8
glabel D_8009D928
    .space 12
glabel D_8009D934
    .space 4
glabel D_8009D938
    .space 8
glabel D_8009D940
    .space 8
glabel D_8009D948
    .space 8
glabel D_8009D950
    .space 4
glabel D_8009D954
    .space 4
glabel D_8009D958
    .space 4
glabel D_8009D95C
    .space 4
glabel D_8009D960
    .space 4
glabel D_8009D964
    .space 4
glabel D_8009D968
    .space 4
glabel D_8009D96C
    .space 4
glabel D_8009D970
    .space 4
glabel D_8009D974
    .space 4
glabel D_8009D978
    .space 4
glabel D_8009D97C
    .space 4
glabel D_8009D980
    .space 8
glabel D_8009D988
    .space 13
glabel D_8009D995
    .space 6
glabel D_8009D99B
    .space 29
glabel D_8009D9B8
    .space 3
glabel D_8009D9BB
    .space 53
glabel D_8009D9F0
    .space 4
glabel D_8009D9F4
    .space 4
glabel D_8009D9F8
    .space 8

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel func_8001E5C0
  /* 01F1C0 8001E5C0 24030010 */     addiu $v1, $zero, 0x10
  /* 01F1C4 8001E5C4 30AE000F */      andi $t6, $a1, 0xf
  /* 01F1C8 8001E5C8 006E1023 */      subu $v0, $v1, $t6
  /* 01F1CC 8001E5CC 10620003 */       beq $v1, $v0, .L8001E5DC
  /* 01F1D0 8001E5D0 00A27821 */      addu $t7, $a1, $v0
  /* 01F1D4 8001E5D4 10000002 */         b .L8001E5E0
  /* 01F1D8 8001E5D8 AC8F0000 */        sw $t7, ($a0)
  .L8001E5DC:
  /* 01F1DC 8001E5DC AC850000 */        sw $a1, ($a0)
  .L8001E5E0:
  /* 01F1E0 8001E5E0 8C980000 */        lw $t8, ($a0)
  /* 01F1E4 8001E5E4 AC860008 */        sw $a2, 8($a0)
  /* 01F1E8 8001E5E8 AC80000C */        sw $zero, 0xc($a0)
  /* 01F1EC 8001E5EC 03E00008 */        jr $ra
  /* 01F1F0 8001E5F0 AC980004 */        sw $t8, 4($a0)

glabel func_8001E5F4
  /* 01F1F4 8001E5F4 8FAE0010 */        lw $t6, 0x10($sp)
  /* 01F1F8 8001E5F8 AFA40000 */        sw $a0, ($sp)
  /* 01F1FC 8001E5FC AFA50004 */        sw $a1, 4($sp)
  /* 01F200 8001E600 00EE0019 */     multu $a3, $t6
  /* 01F204 8001E604 8CD80008 */        lw $t8, 8($a2)
  /* 01F208 8001E608 8CCF0000 */        lw $t7, ($a2)
  /* 01F20C 8001E60C 8CC40004 */        lw $a0, 4($a2)
  /* 01F210 8001E610 2401FFF0 */     addiu $at, $zero, -0x10
  /* 01F214 8001E614 01F8C821 */      addu $t9, $t7, $t8
  /* 01F218 8001E618 00001825 */        or $v1, $zero, $zero
  /* 01F21C 8001E61C 00001012 */      mflo $v0
  /* 01F220 8001E620 2442000F */     addiu $v0, $v0, 0xf
  /* 01F224 8001E624 00411024 */       and $v0, $v0, $at
  /* 01F228 8001E628 00824021 */      addu $t0, $a0, $v0
  /* 01F22C 8001E62C 0328082B */      sltu $at, $t9, $t0
  /* 01F230 8001E630 14200003 */      bnez $at, .L8001E640
  /* 01F234 8001E634 00824821 */      addu $t1, $a0, $v0
  /* 01F238 8001E638 00801825 */        or $v1, $a0, $zero
  /* 01F23C 8001E63C ACC90004 */        sw $t1, 4($a2)
  .L8001E640:
  /* 01F240 8001E640 03E00008 */        jr $ra
  /* 01F244 8001E644 00601025 */        or $v0, $v1, $zero

glabel alSeqFileNew
  /* 01F248 8001E648 848E0002 */        lh $t6, 2($a0)
  /* 01F24C 8001E64C 00001025 */        or $v0, $zero, $zero
  /* 01F250 8001E650 00801825 */        or $v1, $a0, $zero
  /* 01F254 8001E654 19C0000A */      blez $t6, .L8001E680
  /* 01F258 8001E658 00000000 */       nop 
  /* 01F25C 8001E65C 8C6F0004 */        lw $t7, 4($v1)
  .L8001E660:
  /* 01F260 8001E660 24420001 */     addiu $v0, $v0, 1
  /* 01F264 8001E664 24630008 */     addiu $v1, $v1, 8
  /* 01F268 8001E668 01E5C021 */      addu $t8, $t7, $a1
  /* 01F26C 8001E66C AC78FFFC */        sw $t8, -4($v1)
  /* 01F270 8001E670 84990002 */        lh $t9, 2($a0)
  /* 01F274 8001E674 0059082A */       slt $at, $v0, $t9
  /* 01F278 8001E678 5420FFF9 */      bnel $at, $zero, .L8001E660
  /* 01F27C 8001E67C 8C6F0004 */        lw $t7, 4($v1)
  .L8001E680:
  /* 01F280 8001E680 03E00008 */        jr $ra
  /* 01F284 8001E684 00000000 */       nop 

glabel alBnkfNew
  /* 01F288 8001E688 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 01F28C 8001E68C AFBF0024 */        sw $ra, 0x24($sp)
  /* 01F290 8001E690 AFB30020 */        sw $s3, 0x20($sp)
  /* 01F294 8001E694 AFB2001C */        sw $s2, 0x1c($sp)
  /* 01F298 8001E698 AFB10018 */        sw $s1, 0x18($sp)
  /* 01F29C 8001E69C AFB00014 */        sw $s0, 0x14($sp)
  /* 01F2A0 8001E6A0 848E0002 */        lh $t6, 2($a0)
  /* 01F2A4 8001E6A4 00808825 */        or $s1, $a0, $zero
  /* 01F2A8 8001E6A8 00A09825 */        or $s3, $a1, $zero
  /* 01F2AC 8001E6AC 19C0000F */      blez $t6, .L8001E6EC
  /* 01F2B0 8001E6B0 00009025 */        or $s2, $zero, $zero
  /* 01F2B4 8001E6B4 00808025 */        or $s0, $a0, $zero
  /* 01F2B8 8001E6B8 8E0F0004 */        lw $t7, 4($s0)
  .L8001E6BC:
  /* 01F2BC 8001E6BC 02202825 */        or $a1, $s1, $zero
  /* 01F2C0 8001E6C0 01F12021 */      addu $a0, $t7, $s1
  /* 01F2C4 8001E6C4 10800003 */      beqz $a0, .L8001E6D4
  /* 01F2C8 8001E6C8 AE040004 */        sw $a0, 4($s0)
  /* 01F2CC 8001E6CC 0C0079C2 */       jal func_8001E708
  /* 01F2D0 8001E6D0 02603025 */        or $a2, $s3, $zero
  .L8001E6D4:
  /* 01F2D4 8001E6D4 86390002 */        lh $t9, 2($s1)
  /* 01F2D8 8001E6D8 26520001 */     addiu $s2, $s2, 1
  /* 01F2DC 8001E6DC 26100004 */     addiu $s0, $s0, 4
  /* 01F2E0 8001E6E0 0259082A */       slt $at, $s2, $t9
  /* 01F2E4 8001E6E4 5420FFF5 */      bnel $at, $zero, .L8001E6BC
  /* 01F2E8 8001E6E8 8E0F0004 */        lw $t7, 4($s0)
  .L8001E6EC:
  /* 01F2EC 8001E6EC 8FBF0024 */        lw $ra, 0x24($sp)
  /* 01F2F0 8001E6F0 8FB00014 */        lw $s0, 0x14($sp)
  /* 01F2F4 8001E6F4 8FB10018 */        lw $s1, 0x18($sp)
  /* 01F2F8 8001E6F8 8FB2001C */        lw $s2, 0x1c($sp)
  /* 01F2FC 8001E6FC 8FB30020 */        lw $s3, 0x20($sp)
  /* 01F300 8001E700 03E00008 */        jr $ra
  /* 01F304 8001E704 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_8001E708
  /* 01F308 8001E708 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 01F30C 8001E70C AFBF002C */        sw $ra, 0x2c($sp)
  /* 01F310 8001E710 AFB40028 */        sw $s4, 0x28($sp)
  /* 01F314 8001E714 AFB30024 */        sw $s3, 0x24($sp)
  /* 01F318 8001E718 AFB20020 */        sw $s2, 0x20($sp)
  /* 01F31C 8001E71C AFB1001C */        sw $s1, 0x1c($sp)
  /* 01F320 8001E720 AFB00018 */        sw $s0, 0x18($sp)
  /* 01F324 8001E724 908E0002 */       lbu $t6, 2($a0)
  /* 01F328 8001E728 00A09025 */        or $s2, $a1, $zero
  /* 01F32C 8001E72C 00809825 */        or $s3, $a0, $zero
  /* 01F330 8001E730 15C0001B */      bnez $t6, .L8001E7A0
  /* 01F334 8001E734 00C0A025 */        or $s4, $a2, $zero
  /* 01F338 8001E738 8C820008 */        lw $v0, 8($a0)
  /* 01F33C 8001E73C 240F0001 */     addiu $t7, $zero, 1
  /* 01F340 8001E740 A08F0002 */        sb $t7, 2($a0)
  /* 01F344 8001E744 10400004 */      beqz $v0, .L8001E758
  /* 01F348 8001E748 0045C021 */      addu $t8, $v0, $a1
  /* 01F34C 8001E74C AC980008 */        sw $t8, 8($a0)
  /* 01F350 8001E750 0C0079F0 */       jal func_8001E7C0
  /* 01F354 8001E754 03002025 */        or $a0, $t8, $zero
  .L8001E758:
  /* 01F358 8001E758 86790000 */        lh $t9, ($s3)
  /* 01F35C 8001E75C 00008825 */        or $s1, $zero, $zero
  /* 01F360 8001E760 02608025 */        or $s0, $s3, $zero
  /* 01F364 8001E764 5B20000F */     blezl $t9, .L8001E7A4
  /* 01F368 8001E768 8FBF002C */        lw $ra, 0x2c($sp)
  /* 01F36C 8001E76C 8E08000C */        lw $t0, 0xc($s0)
  .L8001E770:
  /* 01F370 8001E770 02402825 */        or $a1, $s2, $zero
  /* 01F374 8001E774 01122021 */      addu $a0, $t0, $s2
  /* 01F378 8001E778 10800003 */      beqz $a0, .L8001E788
  /* 01F37C 8001E77C AE04000C */        sw $a0, 0xc($s0)
  /* 01F380 8001E780 0C0079F0 */       jal func_8001E7C0
  /* 01F384 8001E784 02803025 */        or $a2, $s4, $zero
  .L8001E788:
  /* 01F388 8001E788 866A0000 */        lh $t2, ($s3)
  /* 01F38C 8001E78C 26310001 */     addiu $s1, $s1, 1
  /* 01F390 8001E790 26100004 */     addiu $s0, $s0, 4
  /* 01F394 8001E794 022A082A */       slt $at, $s1, $t2
  /* 01F398 8001E798 5420FFF5 */      bnel $at, $zero, .L8001E770
  /* 01F39C 8001E79C 8E08000C */        lw $t0, 0xc($s0)
  .L8001E7A0:
  /* 01F3A0 8001E7A0 8FBF002C */        lw $ra, 0x2c($sp)
  .L8001E7A4:
  /* 01F3A4 8001E7A4 8FB00018 */        lw $s0, 0x18($sp)
  /* 01F3A8 8001E7A8 8FB1001C */        lw $s1, 0x1c($sp)
  /* 01F3AC 8001E7AC 8FB20020 */        lw $s2, 0x20($sp)
  /* 01F3B0 8001E7B0 8FB30024 */        lw $s3, 0x24($sp)
  /* 01F3B4 8001E7B4 8FB40028 */        lw $s4, 0x28($sp)
  /* 01F3B8 8001E7B8 03E00008 */        jr $ra
  /* 01F3BC 8001E7BC 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_8001E7C0
  /* 01F3C0 8001E7C0 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 01F3C4 8001E7C4 AFBF002C */        sw $ra, 0x2c($sp)
  /* 01F3C8 8001E7C8 AFB40028 */        sw $s4, 0x28($sp)
  /* 01F3CC 8001E7CC AFB30024 */        sw $s3, 0x24($sp)
  /* 01F3D0 8001E7D0 AFB20020 */        sw $s2, 0x20($sp)
  /* 01F3D4 8001E7D4 AFB1001C */        sw $s1, 0x1c($sp)
  /* 01F3D8 8001E7D8 AFB00018 */        sw $s0, 0x18($sp)
  /* 01F3DC 8001E7DC 908E0003 */       lbu $t6, 3($a0)
  /* 01F3E0 8001E7E0 00A09025 */        or $s2, $a1, $zero
  /* 01F3E4 8001E7E4 00809825 */        or $s3, $a0, $zero
  /* 01F3E8 8001E7E8 15C00013 */      bnez $t6, .L8001E838
  /* 01F3EC 8001E7EC 00C0A025 */        or $s4, $a2, $zero
  /* 01F3F0 8001E7F0 8498000E */        lh $t8, 0xe($a0)
  /* 01F3F4 8001E7F4 240F0001 */     addiu $t7, $zero, 1
  /* 01F3F8 8001E7F8 A08F0003 */        sb $t7, 3($a0)
  /* 01F3FC 8001E7FC 1B00000E */      blez $t8, .L8001E838
  /* 01F400 8001E800 00008825 */        or $s1, $zero, $zero
  /* 01F404 8001E804 00808025 */        or $s0, $a0, $zero
  /* 01F408 8001E808 8E190010 */        lw $t9, 0x10($s0)
  .L8001E80C:
  /* 01F40C 8001E80C 02402825 */        or $a1, $s2, $zero
  /* 01F410 8001E810 02803025 */        or $a2, $s4, $zero
  /* 01F414 8001E814 03322021 */      addu $a0, $t9, $s2
  /* 01F418 8001E818 0C007A16 */       jal func_8001E858
  /* 01F41C 8001E81C AE040010 */        sw $a0, 0x10($s0)
  /* 01F420 8001E820 8669000E */        lh $t1, 0xe($s3)
  /* 01F424 8001E824 26310001 */     addiu $s1, $s1, 1
  /* 01F428 8001E828 26100004 */     addiu $s0, $s0, 4
  /* 01F42C 8001E82C 0229082A */       slt $at, $s1, $t1
  /* 01F430 8001E830 5420FFF6 */      bnel $at, $zero, .L8001E80C
  /* 01F434 8001E834 8E190010 */        lw $t9, 0x10($s0)
  .L8001E838:
  /* 01F438 8001E838 8FBF002C */        lw $ra, 0x2c($sp)
  /* 01F43C 8001E83C 8FB00018 */        lw $s0, 0x18($sp)
  /* 01F440 8001E840 8FB1001C */        lw $s1, 0x1c($sp)
  /* 01F444 8001E844 8FB20020 */        lw $s2, 0x20($sp)
  /* 01F448 8001E848 8FB30024 */        lw $s3, 0x24($sp)
  /* 01F44C 8001E84C 8FB40028 */        lw $s4, 0x28($sp)
  /* 01F450 8001E850 03E00008 */        jr $ra
  /* 01F454 8001E854 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_8001E858
  /* 01F458 8001E858 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 01F45C 8001E85C AFBF0014 */        sw $ra, 0x14($sp)
  /* 01F460 8001E860 908E000E */       lbu $t6, 0xe($a0)
  /* 01F464 8001E864 240F0001 */     addiu $t7, $zero, 1
  /* 01F468 8001E868 55C0000E */      bnel $t6, $zero, .L8001E8A4
  /* 01F46C 8001E86C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 01F470 8001E870 8C980000 */        lw $t8, ($a0)
  /* 01F474 8001E874 8C880004 */        lw $t0, 4($a0)
  /* 01F478 8001E878 8C8A0008 */        lw $t2, 8($a0)
  /* 01F47C 8001E87C 0305C821 */      addu $t9, $t8, $a1
  /* 01F480 8001E880 01054821 */      addu $t1, $t0, $a1
  /* 01F484 8001E884 01455821 */      addu $t3, $t2, $a1
  /* 01F488 8001E888 A08F000E */        sb $t7, 0xe($a0)
  /* 01F48C 8001E88C AC990000 */        sw $t9, ($a0)
  /* 01F490 8001E890 AC890004 */        sw $t1, 4($a0)
  /* 01F494 8001E894 AC8B0008 */        sw $t3, 8($a0)
  /* 01F498 8001E898 0C007A2C */       jal func_8001E8B0
  /* 01F49C 8001E89C 01602025 */        or $a0, $t3, $zero
  /* 01F4A0 8001E8A0 8FBF0014 */        lw $ra, 0x14($sp)
  .L8001E8A4:
  /* 01F4A4 8001E8A4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 01F4A8 8001E8A8 03E00008 */        jr $ra
  /* 01F4AC 8001E8AC 00000000 */       nop 

glabel func_8001E8B0
  /* 01F4B0 8001E8B0 908E0009 */       lbu $t6, 9($a0)
  /* 01F4B4 8001E8B4 240F0001 */     addiu $t7, $zero, 1
  /* 01F4B8 8001E8B8 15C00016 */      bnez $t6, .L8001E914
  /* 01F4BC 8001E8BC 00000000 */       nop 
  /* 01F4C0 8001E8C0 8C980000 */        lw $t8, ($a0)
  /* 01F4C4 8001E8C4 90820008 */       lbu $v0, 8($a0)
  /* 01F4C8 8001E8C8 A08F0009 */        sb $t7, 9($a0)
  /* 01F4CC 8001E8CC 0306C821 */      addu $t9, $t8, $a2
  /* 01F4D0 8001E8D0 14400009 */      bnez $v0, .L8001E8F8
  /* 01F4D4 8001E8D4 AC990000 */        sw $t9, ($a0)
  /* 01F4D8 8001E8D8 8C880010 */        lw $t0, 0x10($a0)
  /* 01F4DC 8001E8DC 8C82000C */        lw $v0, 0xc($a0)
  /* 01F4E0 8001E8E0 01054821 */      addu $t1, $t0, $a1
  /* 01F4E4 8001E8E4 1040000B */      beqz $v0, .L8001E914
  /* 01F4E8 8001E8E8 AC890010 */        sw $t1, 0x10($a0)
  /* 01F4EC 8001E8EC 00455021 */      addu $t2, $v0, $a1
  /* 01F4F0 8001E8F0 03E00008 */        jr $ra
  /* 01F4F4 8001E8F4 AC8A000C */        sw $t2, 0xc($a0)

  .L8001E8F8:
  /* 01F4F8 8001E8F8 24010001 */     addiu $at, $zero, 1
  /* 01F4FC 8001E8FC 14410005 */       bne $v0, $at, .L8001E914
  /* 01F500 8001E900 00000000 */       nop 
  /* 01F504 8001E904 8C82000C */        lw $v0, 0xc($a0)
  /* 01F508 8001E908 10400002 */      beqz $v0, .L8001E914
  /* 01F50C 8001E90C 00455821 */      addu $t3, $v0, $a1
  /* 01F510 8001E910 AC8B000C */        sw $t3, 0xc($a0)
  .L8001E914:
  /* 01F514 8001E914 03E00008 */        jr $ra
  /* 01F518 8001E918 00000000 */       nop 

glabel func_8001E91C
  /* 01F51C 8001E91C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 01F520 8001E920 AFA40030 */        sw $a0, 0x30($sp)
  /* 01F524 8001E924 AFBF0014 */        sw $ra, 0x14($sp)
  /* 01F528 8001E928 AFA50034 */        sw $a1, 0x34($sp)
  /* 01F52C 8001E92C 00A02025 */        or $a0, $a1, $zero
  /* 01F530 8001E930 AFA60038 */        sw $a2, 0x38($sp)
  /* 01F534 8001E934 0C00D14C */       jal osInvalDCache
  /* 01F538 8001E938 00C02825 */        or $a1, $a2, $zero
  /* 01F53C 8001E93C 8FAF0034 */        lw $t7, 0x34($sp)
  /* 01F540 8001E940 8FB80030 */        lw $t8, 0x30($sp)
  /* 01F544 8001E944 8FB90038 */        lw $t9, 0x38($sp)
  /* 01F548 8001E948 3C0E800A */       lui $t6, %hi(D_8009D328)
  /* 01F54C 8001E94C 25CED328 */     addiu $t6, $t6, %lo(D_8009D328)
  /* 01F550 8001E950 3C048004 */       lui $a0, %hi(gRomPiHandle)
  /* 01F554 8001E954 A3A0001A */        sb $zero, 0x1a($sp)
  /* 01F558 8001E958 AFAE001C */        sw $t6, 0x1c($sp)
  /* 01F55C 8001E95C 8C845040 */        lw $a0, %lo(gRomPiHandle)($a0)
  /* 01F560 8001E960 27A50018 */     addiu $a1, $sp, 0x18
  /* 01F564 8001E964 00003025 */        or $a2, $zero, $zero
  /* 01F568 8001E968 AFAF0020 */        sw $t7, 0x20($sp)
  /* 01F56C 8001E96C AFB80024 */        sw $t8, 0x24($sp)
  /* 01F570 8001E970 0C00D0C0 */       jal osEPiStartDma
  /* 01F574 8001E974 AFB90028 */        sw $t9, 0x28($sp)
  /* 01F578 8001E978 3C04800A */       lui $a0, %hi(D_8009D328)
  /* 01F57C 8001E97C 2484D328 */     addiu $a0, $a0, %lo(D_8009D328)
  /* 01F580 8001E980 00002825 */        or $a1, $zero, $zero
  /* 01F584 8001E984 0C00C084 */       jal osRecvMesg
  /* 01F588 8001E988 24060001 */     addiu $a2, $zero, 1
  /* 01F58C 8001E98C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 01F590 8001E990 27BD0030 */     addiu $sp, $sp, 0x30
  /* 01F594 8001E994 03E00008 */        jr $ra
  /* 01F598 8001E998 00000000 */       nop 

glabel func_8001E99C
  /* 01F59C 8001E99C 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 01F5A0 8001E9A0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 01F5A4 8001E9A4 AFB00018 */        sw $s0, 0x18($sp)
  /* 01F5A8 8001E9A8 AFA00024 */        sw $zero, 0x24($sp)
  /* 01F5AC 8001E9AC 8CC30004 */        lw $v1, 4($a2)
  /* 01F5B0 8001E9B0 00808025 */        or $s0, $a0, $zero
  /* 01F5B4 8001E9B4 00C03825 */        or $a3, $a2, $zero
  /* 01F5B8 8001E9B8 00037100 */       sll $t6, $v1, 4
  /* 01F5BC 8001E9BC 00CE1021 */      addu $v0, $a2, $t6
  /* 01F5C0 8001E9C0 8C490008 */        lw $t1, 8($v0)
  /* 01F5C4 8001E9C4 8C4F000C */        lw $t7, 0xc($v0)
  /* 01F5C8 8001E9C8 24420008 */     addiu $v0, $v0, 8
  /* 01F5CC 8001E9CC 0089082B */      sltu $at, $a0, $t1
  /* 01F5D0 8001E9D0 1420000A */      bnez $at, .L8001E9FC
  /* 01F5D4 8001E9D4 012F5021 */      addu $t2, $t1, $t7
  /* 01F5D8 8001E9D8 0085C021 */      addu $t8, $a0, $a1
  /* 01F5DC 8001E9DC 0158082B */      sltu $at, $t2, $t8
  /* 01F5E0 8001E9E0 54200007 */      bnel $at, $zero, .L8001EA00
  /* 01F5E4 8001E9E4 8CEF0000 */        lw $t7, ($a3)
  /* 01F5E8 8001E9E8 8C59000C */        lw $t9, 0xc($v0)
  /* 01F5EC 8001E9EC 03246021 */      addu $t4, $t9, $a0
  /* 01F5F0 8001E9F0 01896823 */      subu $t5, $t4, $t1
  /* 01F5F4 8001E9F4 1000002C */         b .L8001EAA8
  /* 01F5F8 8001E9F8 AFAD002C */        sw $t5, 0x2c($sp)
  .L8001E9FC:
  /* 01F5FC 8001E9FC 8CEF0000 */        lw $t7, ($a3)
  .L8001EA00:
  /* 01F600 8001EA00 246E0001 */     addiu $t6, $v1, 1
  /* 01F604 8001EA04 ACEE0004 */        sw $t6, 4($a3)
  /* 01F608 8001EA08 01CF082B */      sltu $at, $t6, $t7
  /* 01F60C 8001EA0C 14200003 */      bnez $at, .L8001EA1C
  /* 01F610 8001EA10 01C01825 */        or $v1, $t6, $zero
  /* 01F614 8001EA14 ACE00004 */        sw $zero, 4($a3)
  /* 01F618 8001EA18 00001825 */        or $v1, $zero, $zero
  .L8001EA1C:
  /* 01F61C 8001EA1C 0003C100 */       sll $t8, $v1, 4
  /* 01F620 8001EA20 00F81021 */      addu $v0, $a3, $t8
  /* 01F624 8001EA24 8C4B0014 */        lw $t3, 0x14($v0)
  /* 01F628 8001EA28 32080001 */      andi $t0, $s0, 1
  /* 01F62C 8001EA2C AFA80024 */        sw $t0, 0x24($sp)
  /* 01F630 8001EA30 8C590010 */        lw $t9, 0x10($v0)
  /* 01F634 8001EA34 3C0A8004 */       lui $t2, %hi(D_8003CB20)
  /* 01F638 8001EA38 02088023 */      subu $s0, $s0, $t0
  /* 01F63C 8001EA3C 254ACB20 */     addiu $t2, $t2, %lo(D_8003CB20)
  /* 01F640 8001EA40 AC500008 */        sw $s0, 8($v0)
  /* 01F644 8001EA44 AC59000C */        sw $t9, 0xc($v0)
  /* 01F648 8001EA48 8D490000 */        lw $t1, ($t2) # D_8003CB20 + 0
  /* 01F64C 8001EA4C 3C0D800A */       lui $t5, %hi(D_8009D410)
  /* 01F650 8001EA50 25ADD410 */     addiu $t5, $t5, %lo(D_8009D410)
  /* 01F654 8001EA54 00096080 */       sll $t4, $t1, 2
  /* 01F658 8001EA58 01896023 */      subu $t4, $t4, $t1
  /* 01F65C 8001EA5C 000C60C0 */       sll $t4, $t4, 3
  /* 01F660 8001EA60 018D2821 */      addu $a1, $t4, $t5
  /* 01F664 8001EA64 3C0F800A */       lui $t7, %hi(D_8009D328)
  /* 01F668 8001EA68 240E0001 */     addiu $t6, $zero, 1
  /* 01F66C 8001EA6C 25EFD328 */     addiu $t7, $t7, %lo(D_8009D328)
  /* 01F670 8001EA70 A0AE0002 */        sb $t6, 2($a1)
  /* 01F674 8001EA74 ACAF0004 */        sw $t7, 4($a1)
  /* 01F678 8001EA78 ACB0000C */        sw $s0, 0xc($a1)
  /* 01F67C 8001EA7C ACAB0008 */        sw $t3, 8($a1)
  /* 01F680 8001EA80 8C580010 */        lw $t8, 0x10($v0)
  /* 01F684 8001EA84 3C048004 */       lui $a0, %hi(gRomPiHandle)
  /* 01F688 8001EA88 25390001 */     addiu $t9, $t1, 1
  /* 01F68C 8001EA8C ACB80010 */        sw $t8, 0x10($a1)
  /* 01F690 8001EA90 8C845040 */        lw $a0, %lo(gRomPiHandle)($a0)
  /* 01F694 8001EA94 24420008 */     addiu $v0, $v0, 8
  /* 01F698 8001EA98 AD590000 */        sw $t9, ($t2) # D_8003CB20 + 0
  /* 01F69C 8001EA9C 00003025 */        or $a2, $zero, $zero
  /* 01F6A0 8001EAA0 0C00D0C0 */       jal osEPiStartDma
  /* 01F6A4 8001EAA4 AFAB002C */        sw $t3, 0x2c($sp)
  .L8001EAA8:
  /* 01F6A8 8001EAA8 0C00C854 */       jal osVirtualToPhysical
  /* 01F6AC 8001EAAC 8FA4002C */        lw $a0, 0x2c($sp)
  /* 01F6B0 8001EAB0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 01F6B4 8001EAB4 8FAC0024 */        lw $t4, 0x24($sp)
  /* 01F6B8 8001EAB8 8FB00018 */        lw $s0, 0x18($sp)
  /* 01F6BC 8001EABC 27BD0030 */     addiu $sp, $sp, 0x30
  /* 01F6C0 8001EAC0 03E00008 */        jr $ra
  /* 01F6C4 8001EAC4 004C1021 */      addu $v0, $v0, $t4

glabel func_8001EAC8
  /* 01F6C8 8001EAC8 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 01F6CC 8001EACC AFB20028 */        sw $s2, 0x28($sp)
  /* 01F6D0 8001EAD0 3C12800A */       lui $s2, %hi(D_8009D2D8)
  /* 01F6D4 8001EAD4 2652D2D8 */     addiu $s2, $s2, %lo(D_8009D2D8)
  /* 01F6D8 8001EAD8 AFBF0034 */        sw $ra, 0x34($sp)
  /* 01F6DC 8001EADC AFA40040 */        sw $a0, 0x40($sp)
  /* 01F6E0 8001EAE0 240E0048 */     addiu $t6, $zero, 0x48
  /* 01F6E4 8001EAE4 AFB40030 */        sw $s4, 0x30($sp)
  /* 01F6E8 8001EAE8 AFB3002C */        sw $s3, 0x2c($sp)
  /* 01F6EC 8001EAEC AFB10024 */        sw $s1, 0x24($sp)
  /* 01F6F0 8001EAF0 AFB00020 */        sw $s0, 0x20($sp)
  /* 01F6F4 8001EAF4 AFAE0010 */        sw $t6, 0x10($sp)
  /* 01F6F8 8001EAF8 00002025 */        or $a0, $zero, $zero
  /* 01F6FC 8001EAFC 02403025 */        or $a2, $s2, $zero
  /* 01F700 8001EB00 00002825 */        or $a1, $zero, $zero
  /* 01F704 8001EB04 0C00797D */       jal func_8001E5F4
  /* 01F708 8001EB08 24070001 */     addiu $a3, $zero, 1
  /* 01F70C 8001EB0C 240F0004 */     addiu $t7, $zero, 4
  /* 01F710 8001EB10 AC400004 */        sw $zero, 4($v0)
  /* 01F714 8001EB14 AC4F0000 */        sw $t7, ($v0)
  /* 01F718 8001EB18 AFA20038 */        sw $v0, 0x38($sp)
  /* 01F71C 8001EB1C 00008825 */        or $s1, $zero, $zero
  /* 01F720 8001EB20 00408025 */        or $s0, $v0, $zero
  /* 01F724 8001EB24 24140004 */     addiu $s4, $zero, 4
  /* 01F728 8001EB28 24130400 */     addiu $s3, $zero, 0x400
  .L8001EB2C:
  /* 01F72C 8001EB2C 24180400 */     addiu $t8, $zero, 0x400
  /* 01F730 8001EB30 AFB80010 */        sw $t8, 0x10($sp)
  /* 01F734 8001EB34 00002025 */        or $a0, $zero, $zero
  /* 01F738 8001EB38 00002825 */        or $a1, $zero, $zero
  /* 01F73C 8001EB3C 02403025 */        or $a2, $s2, $zero
  /* 01F740 8001EB40 0C00797D */       jal func_8001E5F4
  /* 01F744 8001EB44 24070001 */     addiu $a3, $zero, 1
  /* 01F748 8001EB48 26310001 */     addiu $s1, $s1, 1
  /* 01F74C 8001EB4C 26100010 */     addiu $s0, $s0, 0x10
  /* 01F750 8001EB50 AE020004 */        sw $v0, 4($s0)
  /* 01F754 8001EB54 AE00FFF8 */        sw $zero, -8($s0)
  /* 01F758 8001EB58 AE00FFFC */        sw $zero, -4($s0)
  /* 01F75C 8001EB5C 1634FFF3 */       bne $s1, $s4, .L8001EB2C
  /* 01F760 8001EB60 AE130000 */        sw $s3, ($s0)
  /* 01F764 8001EB64 8FB90038 */        lw $t9, 0x38($sp)
  /* 01F768 8001EB68 8FA80040 */        lw $t0, 0x40($sp)
  /* 01F76C 8001EB6C 3C028002 */       lui $v0, %hi(func_8001E99C)
  /* 01F770 8001EB70 2442E99C */     addiu $v0, $v0, %lo(func_8001E99C)
  /* 01F774 8001EB74 AD190000 */        sw $t9, ($t0)
  /* 01F778 8001EB78 8FBF0034 */        lw $ra, 0x34($sp)
  /* 01F77C 8001EB7C 8FB40030 */        lw $s4, 0x30($sp)
  /* 01F780 8001EB80 8FB3002C */        lw $s3, 0x2c($sp)
  /* 01F784 8001EB84 8FB20028 */        lw $s2, 0x28($sp)
  /* 01F788 8001EB88 8FB10024 */        lw $s1, 0x24($sp)
  /* 01F78C 8001EB8C 8FB00020 */        lw $s0, 0x20($sp)
  /* 01F790 8001EB90 03E00008 */        jr $ra
  /* 01F794 8001EB94 27BD0040 */     addiu $sp, $sp, 0x40

glabel func_8001EB98
  /* 01F798 8001EB98 3C018004 */       lui $at, %hi(D_8003E410)
  /* 01F79C 8001EB9C C420E410 */      lwc1 $f0, %lo(D_8003E410)($at)
  /* 01F7A0 8001EBA0 AFA40000 */        sw $a0, ($sp)
  /* 01F7A4 8001EBA4 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 01F7A8 8001EBA8 308400FF */      andi $a0, $a0, 0xff
  /* 01F7AC 8001EBAC 44811000 */      mtc1 $at, $f2 # 1.0 to cop1
  /* 01F7B0 8001EBB0 1080000A */      beqz $a0, .L8001EBDC
  /* 01F7B4 8001EBB4 308E0001 */      andi $t6, $a0, 1
  .L8001EBB8:
  /* 01F7B8 8001EBB8 11C00003 */      beqz $t6, .L8001EBC8
  /* 01F7BC 8001EBBC 00801025 */        or $v0, $a0, $zero
  /* 01F7C0 8001EBC0 46001082 */     mul.s $f2, $f2, $f0
  /* 01F7C4 8001EBC4 00000000 */       nop 
  .L8001EBC8:
  /* 01F7C8 8001EBC8 00022042 */       srl $a0, $v0, 1
  /* 01F7CC 8001EBCC 46000002 */     mul.s $f0, $f0, $f0
  /* 01F7D0 8001EBD0 308400FF */      andi $a0, $a0, 0xff
  /* 01F7D4 8001EBD4 5480FFF8 */      bnel $a0, $zero, .L8001EBB8
  /* 01F7D8 8001EBD8 308E0001 */      andi $t6, $a0, 1
  .L8001EBDC:
  /* 01F7DC 8001EBDC 03E00008 */        jr $ra
  /* 01F7E0 8001EBE0 46001006 */     mov.s $f0, $f2

glabel func_8001EBE4
  /* 01F7E4 8001EBE4 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 01F7E8 8001EBE8 3C08800A */       lui $t0, %hi(D_8009D9F8)
  /* 01F7EC 8001EBEC 2508D9F8 */     addiu $t0, $t0, %lo(D_8009D9F8)
  /* 01F7F0 8001EBF0 8D030000 */        lw $v1, ($t0) # D_8009D9F8 + 0
  /* 01F7F4 8001EBF4 AFB10018 */        sw $s1, 0x18($sp)
  /* 01F7F8 8001EBF8 AFA60038 */        sw $a2, 0x38($sp)
  /* 01F7FC 8001EBFC AFA7003C */        sw $a3, 0x3c($sp)
  /* 01F800 8001EC00 30E700FF */      andi $a3, $a3, 0xff
  /* 01F804 8001EC04 30C600FF */      andi $a2, $a2, 0xff
  /* 01F808 8001EC08 00A08825 */        or $s1, $a1, $zero
  /* 01F80C 8001EC0C AFBF001C */        sw $ra, 0x1c($sp)
  /* 01F810 8001EC10 AFB00014 */        sw $s0, 0x14($sp)
  /* 01F814 8001EC14 106000A2 */      beqz $v1, .L8001EEA0
  /* 01F818 8001EC18 AFA00028 */        sw $zero, 0x28($sp)
  /* 01F81C 8001EC1C 8C6E0000 */        lw $t6, ($v1)
  /* 01F820 8001EC20 24010001 */     addiu $at, $zero, 1
  /* 01F824 8001EC24 00608025 */        or $s0, $v1, $zero
  /* 01F828 8001EC28 AD0E0000 */        sw $t6, ($t0) # D_8009D9F8 + 0
  /* 01F82C 8001EC2C A0660004 */        sb $a2, 4($v1)
  /* 01F830 8001EC30 AC830000 */        sw $v1, ($a0)
  /* 01F834 8001EC34 93AF0047 */       lbu $t7, 0x47($sp)
  /* 01F838 8001EC38 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F83C 8001EC3C 24190103 */     addiu $t9, $zero, 0x103
  /* 01F840 8001EC40 000FC380 */       sll $t8, $t7, 0xe
  /* 01F844 8001EC44 10C10018 */       beq $a2, $at, .L8001ECA8
  /* 01F848 8001EC48 AFB80028 */        sw $t8, 0x28($sp)
  /* 01F84C 8001EC4C 24010002 */     addiu $at, $zero, 2
  /* 01F850 8001EC50 10C10027 */       beq $a2, $at, .L8001ECF0
  /* 01F854 8001EC54 2402007F */     addiu $v0, $zero, 0x7f
  /* 01F858 8001EC58 24010003 */     addiu $at, $zero, 3
  /* 01F85C 8001EC5C 10C10033 */       beq $a2, $at, .L8001ED2C
  /* 01F860 8001EC60 2402007F */     addiu $v0, $zero, 0x7f
  /* 01F864 8001EC64 24010004 */     addiu $at, $zero, 4
  /* 01F868 8001EC68 10C10041 */       beq $a2, $at, .L8001ED70
  /* 01F86C 8001EC6C 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F870 8001EC70 24010080 */     addiu $at, $zero, 0x80
  /* 01F874 8001EC74 10C10050 */       beq $a2, $at, .L8001EDB8
  /* 01F878 8001EC78 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F87C 8001EC7C 24010081 */     addiu $at, $zero, 0x81
  /* 01F880 8001EC80 10C10059 */       beq $a2, $at, .L8001EDE8
  /* 01F884 8001EC84 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F888 8001EC88 24010082 */     addiu $at, $zero, 0x82
  /* 01F88C 8001EC8C 10C10068 */       beq $a2, $at, .L8001EE30
  /* 01F890 8001EC90 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F894 8001EC94 24010083 */     addiu $at, $zero, 0x83
  /* 01F898 8001EC98 10C10073 */       beq $a2, $at, .L8001EE68
  /* 01F89C 8001EC9C 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F8A0 8001ECA0 10000080 */         b .L8001EEA4
  /* 01F8A4 8001ECA4 8FBF001C */        lw $ra, 0x1c($sp)
  .L8001ECA8:
  /* 01F8A8 8001ECA8 00045843 */       sra $t3, $a0, 1
  /* 01F8AC 8001ECAC 240C007F */     addiu $t4, $zero, 0x7f
  /* 01F8B0 8001ECB0 018B6823 */      subu $t5, $t4, $t3
  /* 01F8B4 8001ECB4 31AE00FF */      andi $t6, $t5, 0xff
  /* 01F8B8 8001ECB8 448E2000 */      mtc1 $t6, $f4
  /* 01F8BC 8001ECBC 03274823 */      subu $t1, $t9, $a3
  /* 01F8C0 8001ECC0 A6000008 */        sh $zero, 8($s0)
  /* 01F8C4 8001ECC4 A6090006 */        sh $t1, 6($s0)
  /* 01F8C8 8001ECC8 A20B000C */        sb $t3, 0xc($s0)
  /* 01F8CC 8001ECCC A20D000D */        sb $t5, 0xd($s0)
  /* 01F8D0 8001ECD0 05C10005 */      bgez $t6, .L8001ECE8
  /* 01F8D4 8001ECD4 468021A0 */   cvt.s.w $f6, $f4
  /* 01F8D8 8001ECD8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01F8DC 8001ECDC 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01F8E0 8001ECE0 00000000 */       nop 
  /* 01F8E4 8001ECE4 46083180 */     add.s $f6, $f6, $f8
  .L8001ECE8:
  /* 01F8E8 8001ECE8 1000006D */         b .L8001EEA0
  /* 01F8EC 8001ECEC E6260000 */      swc1 $f6, ($s1)
  .L8001ECF0:
  /* 01F8F0 8001ECF0 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F8F4 8001ECF4 240F0100 */     addiu $t7, $zero, 0x100
  /* 01F8F8 8001ECF8 01E7C823 */      subu $t9, $t7, $a3
  /* 01F8FC 8001ECFC 2409007F */     addiu $t1, $zero, 0x7f
  /* 01F900 8001ED00 3C0142FE */       lui $at, (0x42FE0000 >> 16) # 127.0
  /* 01F904 8001ED04 44815000 */      mtc1 $at, $f10 # 127.0 to cop1
  /* 01F908 8001ED08 01245023 */      subu $t2, $t1, $a0
  /* 01F90C 8001ED0C A6190006 */        sh $t9, 6($s0)
  /* 01F910 8001ED10 A6190008 */        sh $t9, 8($s0)
  /* 01F914 8001ED14 A2000005 */        sb $zero, 5($s0)
  /* 01F918 8001ED18 A20A000E */        sb $t2, 0xe($s0)
  /* 01F91C 8001ED1C A202000D */        sb $v0, 0xd($s0)
  /* 01F920 8001ED20 A202000C */        sb $v0, 0xc($s0)
  /* 01F924 8001ED24 1000005E */         b .L8001EEA0
  /* 01F928 8001ED28 E62A0000 */      swc1 $f10, ($s1)
  .L8001ED2C:
  /* 01F92C 8001ED2C 93A40043 */       lbu $a0, 0x43($sp)
  /* 01F930 8001ED30 304D00FF */      andi $t5, $v0, 0xff
  /* 01F934 8001ED34 448D8000 */      mtc1 $t5, $f16
  /* 01F938 8001ED38 240C0100 */     addiu $t4, $zero, 0x100
  /* 01F93C 8001ED3C 01875823 */      subu $t3, $t4, $a3
  /* 01F940 8001ED40 A60B0006 */        sh $t3, 6($s0)
  /* 01F944 8001ED44 A6000008 */        sh $zero, 8($s0)
  /* 01F948 8001ED48 A202000C */        sb $v0, 0xc($s0)
  /* 01F94C 8001ED4C A204000D */        sb $a0, 0xd($s0)
  /* 01F950 8001ED50 05A10005 */      bgez $t5, .L8001ED68
  /* 01F954 8001ED54 468084A0 */   cvt.s.w $f18, $f16
  /* 01F958 8001ED58 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01F95C 8001ED5C 44812000 */      mtc1 $at, $f4 # 4294967300.0 to cop1
  /* 01F960 8001ED60 00000000 */       nop 
  /* 01F964 8001ED64 46049480 */     add.s $f18, $f18, $f4
  .L8001ED68:
  /* 01F968 8001ED68 1000004D */         b .L8001EEA0
  /* 01F96C 8001ED6C E6320000 */      swc1 $f18, ($s1)
  .L8001ED70:
  /* 01F970 8001ED70 2418007F */     addiu $t8, $zero, 0x7f
  /* 01F974 8001ED74 0304C823 */      subu $t9, $t8, $a0
  /* 01F978 8001ED78 332900FF */      andi $t1, $t9, 0xff
  /* 01F97C 8001ED7C 44894000 */      mtc1 $t1, $f8
  /* 01F980 8001ED80 240E0100 */     addiu $t6, $zero, 0x100
  /* 01F984 8001ED84 01C77823 */      subu $t7, $t6, $a3
  /* 01F988 8001ED88 A60F0006 */        sh $t7, 6($s0)
  /* 01F98C 8001ED8C A6000008 */        sh $zero, 8($s0)
  /* 01F990 8001ED90 A204000D */        sb $a0, 0xd($s0)
  /* 01F994 8001ED94 A219000C */        sb $t9, 0xc($s0)
  /* 01F998 8001ED98 05210005 */      bgez $t1, .L8001EDB0
  /* 01F99C 8001ED9C 468041A0 */   cvt.s.w $f6, $f8
  /* 01F9A0 8001EDA0 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01F9A4 8001EDA4 44815000 */      mtc1 $at, $f10 # 4294967300.0 to cop1
  /* 01F9A8 8001EDA8 00000000 */       nop 
  /* 01F9AC 8001EDAC 460A3180 */     add.s $f6, $f6, $f10
  .L8001EDB0:
  /* 01F9B0 8001EDB0 1000003B */         b .L8001EEA0
  /* 01F9B4 8001EDB4 E6260000 */      swc1 $f6, ($s1)
  .L8001EDB8:
  /* 01F9B8 8001EDB8 0C007AE6 */       jal func_8001EB98
  /* 01F9BC 8001EDBC A3A7003F */        sb $a3, 0x3f($sp)
  /* 01F9C0 8001EDC0 93A7003F */       lbu $a3, 0x3f($sp)
  /* 01F9C4 8001EDC4 240A0103 */     addiu $t2, $zero, 0x103
  /* 01F9C8 8001EDC8 3C013F80 */       lui $at, (0x3F800000 >> 16) # 1.0
  /* 01F9CC 8001EDCC 44818000 */      mtc1 $at, $f16 # 1.0 to cop1
  /* 01F9D0 8001EDD0 01476023 */      subu $t4, $t2, $a3
  /* 01F9D4 8001EDD4 E600000C */      swc1 $f0, 0xc($s0)
  /* 01F9D8 8001EDD8 A6000008 */        sh $zero, 8($s0)
  /* 01F9DC 8001EDDC A60C0006 */        sh $t4, 6($s0)
  /* 01F9E0 8001EDE0 1000002F */         b .L8001EEA0
  /* 01F9E4 8001EDE4 E6300000 */      swc1 $f16, ($s1)
  .L8001EDE8:
  /* 01F9E8 8001EDE8 240B0100 */     addiu $t3, $zero, 0x100
  /* 01F9EC 8001EDEC 01677023 */      subu $t6, $t3, $a3
  /* 01F9F0 8001EDF0 A60E0006 */        sh $t6, 6($s0)
  /* 01F9F4 8001EDF4 A60E0008 */        sh $t6, 8($s0)
  /* 01F9F8 8001EDF8 0C007AE6 */       jal func_8001EB98
  /* 01F9FC 8001EDFC A2000005 */        sb $zero, 5($s0)
  /* 01FA00 8001EE00 4600010D */ trunc.w.s $f4, $f0
  /* 01FA04 8001EE04 44052000 */      mfc1 $a1, $f4
  /* 01FA08 8001EE08 00000000 */       nop 
  /* 01FA0C 8001EE0C AFA50024 */        sw $a1, 0x24($sp)
  /* 01FA10 8001EE10 0C00D8D8 */       jal alCents2Ratio
  /* 01FA14 8001EE14 00052023 */      negu $a0, $a1
  /* 01FA18 8001EE18 E600000C */      swc1 $f0, 0xc($s0)
  /* 01FA1C 8001EE1C 0C00D8D8 */       jal alCents2Ratio
  /* 01FA20 8001EE20 8FA40024 */        lw $a0, 0x24($sp)
  /* 01FA24 8001EE24 E6000010 */      swc1 $f0, 0x10($s0)
  /* 01FA28 8001EE28 1000001D */         b .L8001EEA0
  /* 01FA2C 8001EE2C E6200000 */      swc1 $f0, ($s1)
  .L8001EE30:
  /* 01FA30 8001EE30 24180100 */     addiu $t8, $zero, 0x100
  /* 01FA34 8001EE34 03074823 */      subu $t1, $t8, $a3
  /* 01FA38 8001EE38 A6090006 */        sh $t1, 6($s0)
  /* 01FA3C 8001EE3C 0C007AE6 */       jal func_8001EB98
  /* 01FA40 8001EE40 A6090008 */        sh $t1, 8($s0)
  /* 01FA44 8001EE44 4600048D */ trunc.w.s $f18, $f0
  /* 01FA48 8001EE48 44049000 */      mfc1 $a0, $f18
  /* 01FA4C 8001EE4C 00000000 */       nop 
  /* 01FA50 8001EE50 00046040 */       sll $t4, $a0, 1
  /* 01FA54 8001EE54 AE0C0010 */        sw $t4, 0x10($s0)
  /* 01FA58 8001EE58 0C00D8D8 */       jal alCents2Ratio
  /* 01FA5C 8001EE5C AE04000C */        sw $a0, 0xc($s0)
  /* 01FA60 8001EE60 1000000F */         b .L8001EEA0
  /* 01FA64 8001EE64 E6200000 */      swc1 $f0, ($s1)
  .L8001EE68:
  /* 01FA68 8001EE68 240B0100 */     addiu $t3, $zero, 0x100
  /* 01FA6C 8001EE6C 01677023 */      subu $t6, $t3, $a3
  /* 01FA70 8001EE70 A60E0006 */        sh $t6, 6($s0)
  /* 01FA74 8001EE74 0C007AE6 */       jal func_8001EB98
  /* 01FA78 8001EE78 A60E0008 */        sh $t6, 8($s0)
  /* 01FA7C 8001EE7C 4600020D */ trunc.w.s $f8, $f0
  /* 01FA80 8001EE80 44054000 */      mfc1 $a1, $f8
  /* 01FA84 8001EE84 00000000 */       nop 
  /* 01FA88 8001EE88 00052023 */      negu $a0, $a1
  /* 01FA8C 8001EE8C 0005C040 */       sll $t8, $a1, 1
  /* 01FA90 8001EE90 AE04000C */        sw $a0, 0xc($s0)
  /* 01FA94 8001EE94 0C00D8D8 */       jal alCents2Ratio
  /* 01FA98 8001EE98 AE180010 */        sw $t8, 0x10($s0)
  /* 01FA9C 8001EE9C E6200000 */      swc1 $f0, ($s1)
  .L8001EEA0:
  /* 01FAA0 8001EEA0 8FBF001C */        lw $ra, 0x1c($sp)
  .L8001EEA4:
  /* 01FAA4 8001EEA4 8FA20028 */        lw $v0, 0x28($sp)
  /* 01FAA8 8001EEA8 8FB00014 */        lw $s0, 0x14($sp)
  /* 01FAAC 8001EEAC 8FB10018 */        lw $s1, 0x18($sp)
  /* 01FAB0 8001EEB0 03E00008 */        jr $ra
  /* 01FAB4 8001EEB4 27BD0030 */     addiu $sp, $sp, 0x30

glabel func_8001EEB8
  /* 01FAB8 8001EEB8 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 01FABC 8001EEBC 240E3E80 */     addiu $t6, $zero, 0x3e80
  /* 01FAC0 8001EEC0 AFBF0014 */        sw $ra, 0x14($sp)
  /* 01FAC4 8001EEC4 AFAE001C */        sw $t6, 0x1c($sp)
  /* 01FAC8 8001EEC8 90820004 */       lbu $v0, 4($a0)
  /* 01FACC 8001EECC 24010001 */     addiu $at, $zero, 1
  /* 01FAD0 8001EED0 00803025 */        or $a2, $a0, $zero
  /* 01FAD4 8001EED4 10410011 */       beq $v0, $at, .L8001EF1C
  /* 01FAD8 8001EED8 24010002 */     addiu $at, $zero, 2
  /* 01FADC 8001EEDC 10410045 */       beq $v0, $at, .L8001EFF4
  /* 01FAE0 8001EEE0 24010003 */     addiu $at, $zero, 3
  /* 01FAE4 8001EEE4 10410064 */       beq $v0, $at, .L8001F078
  /* 01FAE8 8001EEE8 24010004 */     addiu $at, $zero, 4
  /* 01FAEC 8001EEEC 1041008F */       beq $v0, $at, .L8001F12C
  /* 01FAF0 8001EEF0 24010080 */     addiu $at, $zero, 0x80
  /* 01FAF4 8001EEF4 104100BA */       beq $v0, $at, .L8001F1E0
  /* 01FAF8 8001EEF8 24010081 */     addiu $at, $zero, 0x81
  /* 01FAFC 8001EEFC 104100E2 */       beq $v0, $at, .L8001F288
  /* 01FB00 8001EF00 24010082 */     addiu $at, $zero, 0x82
  /* 01FB04 8001EF04 104100F3 */       beq $v0, $at, .L8001F2D4
  /* 01FB08 8001EF08 24010083 */     addiu $at, $zero, 0x83
  /* 01FB0C 8001EF0C 5041011B */      beql $v0, $at, .L8001F37C
  /* 01FB10 8001EF10 94CF0008 */       lhu $t7, 8($a2)
  /* 01FB14 8001EF14 10000141 */         b .L8001F41C
  /* 01FB18 8001EF18 8FBF0014 */        lw $ra, 0x14($sp)
  .L8001EF1C:
  /* 01FB1C 8001EF1C 94CF0008 */       lhu $t7, 8($a2)
  /* 01FB20 8001EF20 94C30006 */       lhu $v1, 6($a2)
  /* 01FB24 8001EF24 25F80001 */     addiu $t8, $t7, 1
  /* 01FB28 8001EF28 3302FFFF */      andi $v0, $t8, 0xffff
  /* 01FB2C 8001EF2C 0043082A */       slt $at, $v0, $v1
  /* 01FB30 8001EF30 14200004 */      bnez $at, .L8001EF44
  /* 01FB34 8001EF34 A4D80008 */        sh $t8, 8($a2)
  /* 01FB38 8001EF38 A4C00008 */        sh $zero, 8($a2)
  /* 01FB3C 8001EF3C 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FB40 8001EF40 94C30006 */       lhu $v1, 6($a2)
  .L8001EF44:
  /* 01FB44 8001EF44 44822000 */      mtc1 $v0, $f4
  /* 01FB48 8001EF48 44835000 */      mtc1 $v1, $f10
  /* 01FB4C 8001EF4C 04410005 */      bgez $v0, .L8001EF64
  /* 01FB50 8001EF50 468021A0 */   cvt.s.w $f6, $f4
  /* 01FB54 8001EF54 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FB58 8001EF58 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01FB5C 8001EF5C 00000000 */       nop 
  /* 01FB60 8001EF60 46083180 */     add.s $f6, $f6, $f8
  .L8001EF64:
  /* 01FB64 8001EF64 04610005 */      bgez $v1, .L8001EF7C
  /* 01FB68 8001EF68 46805420 */   cvt.s.w $f16, $f10
  /* 01FB6C 8001EF6C 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FB70 8001EF70 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FB74 8001EF74 00000000 */       nop 
  /* 01FB78 8001EF78 46128400 */     add.s $f16, $f16, $f18
  .L8001EF7C:
  /* 01FB7C 8001EF7C 46103083 */     div.s $f2, $f6, $f16
  /* 01FB80 8001EF80 3C018004 */       lui $at, %hi(D_8003E414)
  /* 01FB84 8001EF84 C424E414 */      lwc1 $f4, %lo(D_8003E414)($at)
  /* 01FB88 8001EF88 AFA5002C */        sw $a1, 0x2c($sp)
  /* 01FB8C 8001EF8C AFA60028 */        sw $a2, 0x28($sp)
  /* 01FB90 8001EF90 46041302 */     mul.s $f12, $f2, $f4
  /* 01FB94 8001EF94 0C00C0FC */       jal __sinf
  /* 01FB98 8001EF98 00000000 */       nop 
  /* 01FB9C 8001EF9C 8FA60028 */        lw $a2, 0x28($sp)
  /* 01FBA0 8001EFA0 8FA5002C */        lw $a1, 0x2c($sp)
  /* 01FBA4 8001EFA4 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FBA8 8001EFA8 90D9000C */       lbu $t9, 0xc($a2)
  /* 01FBAC 8001EFAC 44994000 */      mtc1 $t9, $f8
  /* 01FBB0 8001EFB0 07210004 */      bgez $t9, .L8001EFC4
  /* 01FBB4 8001EFB4 468042A0 */   cvt.s.w $f10, $f8
  /* 01FBB8 8001EFB8 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FBBC 8001EFBC 00000000 */       nop 
  /* 01FBC0 8001EFC0 46125280 */     add.s $f10, $f10, $f18
  .L8001EFC4:
  /* 01FBC4 8001EFC4 90C8000D */       lbu $t0, 0xd($a2)
  /* 01FBC8 8001EFC8 46005082 */     mul.s $f2, $f10, $f0
  /* 01FBCC 8001EFCC 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FBD0 8001EFD0 44883000 */      mtc1 $t0, $f6
  /* 01FBD4 8001EFD4 05010004 */      bgez $t0, .L8001EFE8
  /* 01FBD8 8001EFD8 46803420 */   cvt.s.w $f16, $f6
  /* 01FBDC 8001EFDC 44812000 */      mtc1 $at, $f4 # 4294967300.0 to cop1
  /* 01FBE0 8001EFE0 00000000 */       nop 
  /* 01FBE4 8001EFE4 46048400 */     add.s $f16, $f16, $f4
  .L8001EFE8:
  /* 01FBE8 8001EFE8 46028200 */     add.s $f8, $f16, $f2
  /* 01FBEC 8001EFEC 1000010A */         b .L8001F418
  /* 01FBF0 8001EFF0 E4A80000 */      swc1 $f8, ($a1)
  .L8001EFF4:
  /* 01FBF4 8001EFF4 90C90005 */       lbu $t1, 5($a2)
  /* 01FBF8 8001EFF8 240B0001 */     addiu $t3, $zero, 1
  /* 01FBFC 8001EFFC 5520000D */      bnel $t1, $zero, .L8001F034
  /* 01FC00 8001F000 90CC000D */       lbu $t4, 0xd($a2)
  /* 01FC04 8001F004 90CA000E */       lbu $t2, 0xe($a2)
  /* 01FC08 8001F008 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FC0C 8001F00C 448A9000 */      mtc1 $t2, $f18
  /* 01FC10 8001F010 05410004 */      bgez $t2, .L8001F024
  /* 01FC14 8001F014 468092A0 */   cvt.s.w $f10, $f18
  /* 01FC18 8001F018 44813000 */      mtc1 $at, $f6 # 4294967300.0 to cop1
  /* 01FC1C 8001F01C 00000000 */       nop 
  /* 01FC20 8001F020 46065280 */     add.s $f10, $f10, $f6
  .L8001F024:
  /* 01FC24 8001F024 E4AA0000 */      swc1 $f10, ($a1)
  /* 01FC28 8001F028 1000000B */         b .L8001F058
  /* 01FC2C 8001F02C A0CB0005 */        sb $t3, 5($a2)
  /* 01FC30 8001F030 90CC000D */       lbu $t4, 0xd($a2)
  .L8001F034:
  /* 01FC34 8001F034 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FC38 8001F038 448C2000 */      mtc1 $t4, $f4
  /* 01FC3C 8001F03C 05810004 */      bgez $t4, .L8001F050
  /* 01FC40 8001F040 46802420 */   cvt.s.w $f16, $f4
  /* 01FC44 8001F044 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01FC48 8001F048 00000000 */       nop 
  /* 01FC4C 8001F04C 46088400 */     add.s $f16, $f16, $f8
  .L8001F050:
  /* 01FC50 8001F050 E4B00000 */      swc1 $f16, ($a1)
  /* 01FC54 8001F054 A0C00005 */        sb $zero, 5($a2)
  .L8001F058:
  /* 01FC58 8001F058 94CD0006 */       lhu $t5, 6($a2)
  /* 01FC5C 8001F05C 000D7140 */       sll $t6, $t5, 5
  /* 01FC60 8001F060 01CD7023 */      subu $t6, $t6, $t5
  /* 01FC64 8001F064 000E7080 */       sll $t6, $t6, 2
  /* 01FC68 8001F068 01CD7021 */      addu $t6, $t6, $t5
  /* 01FC6C 8001F06C 000E71C0 */       sll $t6, $t6, 7
  /* 01FC70 8001F070 100000E9 */         b .L8001F418
  /* 01FC74 8001F074 AFAE001C */        sw $t6, 0x1c($sp)
  .L8001F078:
  /* 01FC78 8001F078 94CF0008 */       lhu $t7, 8($a2)
  /* 01FC7C 8001F07C 94C30006 */       lhu $v1, 6($a2)
  /* 01FC80 8001F080 25F80001 */     addiu $t8, $t7, 1
  /* 01FC84 8001F084 3302FFFF */      andi $v0, $t8, 0xffff
  /* 01FC88 8001F088 0062082A */       slt $at, $v1, $v0
  /* 01FC8C 8001F08C 10200004 */      beqz $at, .L8001F0A0
  /* 01FC90 8001F090 A4D80008 */        sh $t8, 8($a2)
  /* 01FC94 8001F094 A4C00008 */        sh $zero, 8($a2)
  /* 01FC98 8001F098 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FC9C 8001F09C 94C30006 */       lhu $v1, 6($a2)
  .L8001F0A0:
  /* 01FCA0 8001F0A0 44829000 */      mtc1 $v0, $f18
  /* 01FCA4 8001F0A4 44832000 */      mtc1 $v1, $f4
  /* 01FCA8 8001F0A8 04410005 */      bgez $v0, .L8001F0C0
  /* 01FCAC 8001F0AC 468091A0 */   cvt.s.w $f6, $f18
  /* 01FCB0 8001F0B0 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FCB4 8001F0B4 44815000 */      mtc1 $at, $f10 # 4294967300.0 to cop1
  /* 01FCB8 8001F0B8 00000000 */       nop 
  /* 01FCBC 8001F0BC 460A3180 */     add.s $f6, $f6, $f10
  .L8001F0C0:
  /* 01FCC0 8001F0C0 04610005 */      bgez $v1, .L8001F0D8
  /* 01FCC4 8001F0C4 46802220 */   cvt.s.w $f8, $f4
  /* 01FCC8 8001F0C8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FCCC 8001F0CC 44818000 */      mtc1 $at, $f16 # 4294967300.0 to cop1
  /* 01FCD0 8001F0D0 00000000 */       nop 
  /* 01FCD4 8001F0D4 46104200 */     add.s $f8, $f8, $f16
  .L8001F0D8:
  /* 01FCD8 8001F0D8 90D9000D */       lbu $t9, 0xd($a2)
  /* 01FCDC 8001F0DC 46083083 */     div.s $f2, $f6, $f8
  /* 01FCE0 8001F0E0 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FCE4 8001F0E4 44999000 */      mtc1 $t9, $f18
  /* 01FCE8 8001F0E8 07210004 */      bgez $t9, .L8001F0FC
  /* 01FCEC 8001F0EC 468092A0 */   cvt.s.w $f10, $f18
  /* 01FCF0 8001F0F0 44812000 */      mtc1 $at, $f4 # 4294967300.0 to cop1
  /* 01FCF4 8001F0F4 00000000 */       nop 
  /* 01FCF8 8001F0F8 46045280 */     add.s $f10, $f10, $f4
  .L8001F0FC:
  /* 01FCFC 8001F0FC 90C8000C */       lbu $t0, 0xc($a2)
  /* 01FD00 8001F100 460A1082 */     mul.s $f2, $f2, $f10
  /* 01FD04 8001F104 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FD08 8001F108 44888000 */      mtc1 $t0, $f16
  /* 01FD0C 8001F10C 05010004 */      bgez $t0, .L8001F120
  /* 01FD10 8001F110 468081A0 */   cvt.s.w $f6, $f16
  /* 01FD14 8001F114 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01FD18 8001F118 00000000 */       nop 
  /* 01FD1C 8001F11C 46083180 */     add.s $f6, $f6, $f8
  .L8001F120:
  /* 01FD20 8001F120 46023481 */     sub.s $f18, $f6, $f2
  /* 01FD24 8001F124 100000BC */         b .L8001F418
  /* 01FD28 8001F128 E4B20000 */      swc1 $f18, ($a1)
  .L8001F12C:
  /* 01FD2C 8001F12C 94C90008 */       lhu $t1, 8($a2)
  /* 01FD30 8001F130 94C30006 */       lhu $v1, 6($a2)
  /* 01FD34 8001F134 252A0001 */     addiu $t2, $t1, 1
  /* 01FD38 8001F138 3142FFFF */      andi $v0, $t2, 0xffff
  /* 01FD3C 8001F13C 0062082A */       slt $at, $v1, $v0
  /* 01FD40 8001F140 10200004 */      beqz $at, .L8001F154
  /* 01FD44 8001F144 A4CA0008 */        sh $t2, 8($a2)
  /* 01FD48 8001F148 A4C00008 */        sh $zero, 8($a2)
  /* 01FD4C 8001F14C 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FD50 8001F150 94C30006 */       lhu $v1, 6($a2)
  .L8001F154:
  /* 01FD54 8001F154 44822000 */      mtc1 $v0, $f4
  /* 01FD58 8001F158 44834000 */      mtc1 $v1, $f8
  /* 01FD5C 8001F15C 04410005 */      bgez $v0, .L8001F174
  /* 01FD60 8001F160 468022A0 */   cvt.s.w $f10, $f4
  /* 01FD64 8001F164 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FD68 8001F168 44818000 */      mtc1 $at, $f16 # 4294967300.0 to cop1
  /* 01FD6C 8001F16C 00000000 */       nop 
  /* 01FD70 8001F170 46105280 */     add.s $f10, $f10, $f16
  .L8001F174:
  /* 01FD74 8001F174 04610005 */      bgez $v1, .L8001F18C
  /* 01FD78 8001F178 468041A0 */   cvt.s.w $f6, $f8
  /* 01FD7C 8001F17C 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FD80 8001F180 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FD84 8001F184 00000000 */       nop 
  /* 01FD88 8001F188 46123180 */     add.s $f6, $f6, $f18
  .L8001F18C:
  /* 01FD8C 8001F18C 90CB000D */       lbu $t3, 0xd($a2)
  /* 01FD90 8001F190 46065083 */     div.s $f2, $f10, $f6
  /* 01FD94 8001F194 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FD98 8001F198 448B2000 */      mtc1 $t3, $f4
  /* 01FD9C 8001F19C 05610004 */      bgez $t3, .L8001F1B0
  /* 01FDA0 8001F1A0 46802420 */   cvt.s.w $f16, $f4
  /* 01FDA4 8001F1A4 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01FDA8 8001F1A8 00000000 */       nop 
  /* 01FDAC 8001F1AC 46088400 */     add.s $f16, $f16, $f8
  .L8001F1B0:
  /* 01FDB0 8001F1B0 90CC000C */       lbu $t4, 0xc($a2)
  /* 01FDB4 8001F1B4 46101082 */     mul.s $f2, $f2, $f16
  /* 01FDB8 8001F1B8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FDBC 8001F1BC 448C9000 */      mtc1 $t4, $f18
  /* 01FDC0 8001F1C0 05810004 */      bgez $t4, .L8001F1D4
  /* 01FDC4 8001F1C4 468092A0 */   cvt.s.w $f10, $f18
  /* 01FDC8 8001F1C8 44813000 */      mtc1 $at, $f6 # 4294967300.0 to cop1
  /* 01FDCC 8001F1CC 00000000 */       nop 
  /* 01FDD0 8001F1D0 46065280 */     add.s $f10, $f10, $f6
  .L8001F1D4:
  /* 01FDD4 8001F1D4 46025100 */     add.s $f4, $f10, $f2
  /* 01FDD8 8001F1D8 1000008F */         b .L8001F418
  /* 01FDDC 8001F1DC E4A40000 */      swc1 $f4, ($a1)
  .L8001F1E0:
  /* 01FDE0 8001F1E0 94CD0008 */       lhu $t5, 8($a2)
  /* 01FDE4 8001F1E4 94C30006 */       lhu $v1, 6($a2)
  /* 01FDE8 8001F1E8 25AE0001 */     addiu $t6, $t5, 1
  /* 01FDEC 8001F1EC 31C2FFFF */      andi $v0, $t6, 0xffff
  /* 01FDF0 8001F1F0 0043082A */       slt $at, $v0, $v1
  /* 01FDF4 8001F1F4 14200004 */      bnez $at, .L8001F208
  /* 01FDF8 8001F1F8 A4CE0008 */        sh $t6, 8($a2)
  /* 01FDFC 8001F1FC A4C00008 */        sh $zero, 8($a2)
  /* 01FE00 8001F200 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FE04 8001F204 94C30006 */       lhu $v1, 6($a2)
  .L8001F208:
  /* 01FE08 8001F208 44824000 */      mtc1 $v0, $f8
  /* 01FE0C 8001F20C 44833000 */      mtc1 $v1, $f6
  /* 01FE10 8001F210 04410005 */      bgez $v0, .L8001F228
  /* 01FE14 8001F214 46804420 */   cvt.s.w $f16, $f8
  /* 01FE18 8001F218 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FE1C 8001F21C 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FE20 8001F220 00000000 */       nop 
  /* 01FE24 8001F224 46128400 */     add.s $f16, $f16, $f18
  .L8001F228:
  /* 01FE28 8001F228 04610005 */      bgez $v1, .L8001F240
  /* 01FE2C 8001F22C 468032A0 */   cvt.s.w $f10, $f6
  /* 01FE30 8001F230 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FE34 8001F234 44812000 */      mtc1 $at, $f4 # 4294967300.0 to cop1
  /* 01FE38 8001F238 00000000 */       nop 
  /* 01FE3C 8001F23C 46045280 */     add.s $f10, $f10, $f4
  .L8001F240:
  /* 01FE40 8001F240 460A8083 */     div.s $f2, $f16, $f10
  /* 01FE44 8001F244 3C018004 */       lui $at, %hi(D_8003E418)
  /* 01FE48 8001F248 C428E418 */      lwc1 $f8, %lo(D_8003E418)($at)
  /* 01FE4C 8001F24C AFA5002C */        sw $a1, 0x2c($sp)
  /* 01FE50 8001F250 AFA60028 */        sw $a2, 0x28($sp)
  /* 01FE54 8001F254 46081302 */     mul.s $f12, $f2, $f8
  /* 01FE58 8001F258 0C00C0FC */       jal __sinf
  /* 01FE5C 8001F25C 00000000 */       nop 
  /* 01FE60 8001F260 8FA60028 */        lw $a2, 0x28($sp)
  /* 01FE64 8001F264 C4D2000C */      lwc1 $f18, 0xc($a2)
  /* 01FE68 8001F268 46120082 */     mul.s $f2, $f0, $f18
  /* 01FE6C 8001F26C 4600118D */ trunc.w.s $f6, $f2
  /* 01FE70 8001F270 44043000 */      mfc1 $a0, $f6
  /* 01FE74 8001F274 0C00D8D8 */       jal alCents2Ratio
  /* 01FE78 8001F278 00000000 */       nop 
  /* 01FE7C 8001F27C 8FA5002C */        lw $a1, 0x2c($sp)
  /* 01FE80 8001F280 10000065 */         b .L8001F418
  /* 01FE84 8001F284 E4A00000 */      swc1 $f0, ($a1)
  .L8001F288:
  /* 01FE88 8001F288 90D80005 */       lbu $t8, 5($a2)
  /* 01FE8C 8001F28C 24190001 */     addiu $t9, $zero, 1
  /* 01FE90 8001F290 57000006 */      bnel $t8, $zero, .L8001F2AC
  /* 01FE94 8001F294 C4D00010 */      lwc1 $f16, 0x10($a2)
  /* 01FE98 8001F298 C4C4000C */      lwc1 $f4, 0xc($a2)
  /* 01FE9C 8001F29C A0D90005 */        sb $t9, 5($a2)
  /* 01FEA0 8001F2A0 10000004 */         b .L8001F2B4
  /* 01FEA4 8001F2A4 E4A40000 */      swc1 $f4, ($a1)
  /* 01FEA8 8001F2A8 C4D00010 */      lwc1 $f16, 0x10($a2)
  .L8001F2AC:
  /* 01FEAC 8001F2AC A0C00005 */        sb $zero, 5($a2)
  /* 01FEB0 8001F2B0 E4B00000 */      swc1 $f16, ($a1)
  .L8001F2B4:
  /* 01FEB4 8001F2B4 94C80006 */       lhu $t0, 6($a2)
  /* 01FEB8 8001F2B8 00084940 */       sll $t1, $t0, 5
  /* 01FEBC 8001F2BC 01284823 */      subu $t1, $t1, $t0
  /* 01FEC0 8001F2C0 00094880 */       sll $t1, $t1, 2
  /* 01FEC4 8001F2C4 01284821 */      addu $t1, $t1, $t0
  /* 01FEC8 8001F2C8 000949C0 */       sll $t1, $t1, 7
  /* 01FECC 8001F2CC 10000052 */         b .L8001F418
  /* 01FED0 8001F2D0 AFA9001C */        sw $t1, 0x1c($sp)
  .L8001F2D4:
  /* 01FED4 8001F2D4 94CA0008 */       lhu $t2, 8($a2)
  /* 01FED8 8001F2D8 94C30006 */       lhu $v1, 6($a2)
  /* 01FEDC 8001F2DC 254B0001 */     addiu $t3, $t2, 1
  /* 01FEE0 8001F2E0 3162FFFF */      andi $v0, $t3, 0xffff
  /* 01FEE4 8001F2E4 0062082A */       slt $at, $v1, $v0
  /* 01FEE8 8001F2E8 10200004 */      beqz $at, .L8001F2FC
  /* 01FEEC 8001F2EC A4CB0008 */        sh $t3, 8($a2)
  /* 01FEF0 8001F2F0 A4C00008 */        sh $zero, 8($a2)
  /* 01FEF4 8001F2F4 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FEF8 8001F2F8 94C30006 */       lhu $v1, 6($a2)
  .L8001F2FC:
  /* 01FEFC 8001F2FC 44825000 */      mtc1 $v0, $f10
  /* 01FF00 8001F300 44833000 */      mtc1 $v1, $f6
  /* 01FF04 8001F304 04410005 */      bgez $v0, .L8001F31C
  /* 01FF08 8001F308 46805220 */   cvt.s.w $f8, $f10
  /* 01FF0C 8001F30C 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FF10 8001F310 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FF14 8001F314 00000000 */       nop 
  /* 01FF18 8001F318 46124200 */     add.s $f8, $f8, $f18
  .L8001F31C:
  /* 01FF1C 8001F31C 04610005 */      bgez $v1, .L8001F334
  /* 01FF20 8001F320 46803120 */   cvt.s.w $f4, $f6
  /* 01FF24 8001F324 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FF28 8001F328 44818000 */      mtc1 $at, $f16 # 4294967300.0 to cop1
  /* 01FF2C 8001F32C 00000000 */       nop 
  /* 01FF30 8001F330 46102100 */     add.s $f4, $f4, $f16
  .L8001F334:
  /* 01FF34 8001F334 46044083 */     div.s $f2, $f8, $f4
  /* 01FF38 8001F338 8CCC0010 */        lw $t4, 0x10($a2)
  /* 01FF3C 8001F33C 8CCD000C */        lw $t5, 0xc($a2)
  /* 01FF40 8001F340 AFA5002C */        sw $a1, 0x2c($sp)
  /* 01FF44 8001F344 448C5000 */      mtc1 $t4, $f10
  /* 01FF48 8001F348 448D3000 */      mtc1 $t5, $f6
  /* 01FF4C 8001F34C 468054A0 */   cvt.s.w $f18, $f10
  /* 01FF50 8001F350 46803420 */   cvt.s.w $f16, $f6
  /* 01FF54 8001F354 46121082 */     mul.s $f2, $f2, $f18
  /* 01FF58 8001F358 46028081 */     sub.s $f2, $f16, $f2
  /* 01FF5C 8001F35C 4600120D */ trunc.w.s $f8, $f2
  /* 01FF60 8001F360 44044000 */      mfc1 $a0, $f8
  /* 01FF64 8001F364 0C00D8D8 */       jal alCents2Ratio
  /* 01FF68 8001F368 00000000 */       nop 
  /* 01FF6C 8001F36C 8FA5002C */        lw $a1, 0x2c($sp)
  /* 01FF70 8001F370 10000029 */         b .L8001F418
  /* 01FF74 8001F374 E4A00000 */      swc1 $f0, ($a1)
  /* 01FF78 8001F378 94CF0008 */       lhu $t7, 8($a2)
  .L8001F37C:
  /* 01FF7C 8001F37C 94C30006 */       lhu $v1, 6($a2)
  /* 01FF80 8001F380 25F80001 */     addiu $t8, $t7, 1
  /* 01FF84 8001F384 3302FFFF */      andi $v0, $t8, 0xffff
  /* 01FF88 8001F388 0062082A */       slt $at, $v1, $v0
  /* 01FF8C 8001F38C 10200004 */      beqz $at, .L8001F3A0
  /* 01FF90 8001F390 A4D80008 */        sh $t8, 8($a2)
  /* 01FF94 8001F394 A4C00008 */        sh $zero, 8($a2)
  /* 01FF98 8001F398 3002FFFF */      andi $v0, $zero, 0xffff
  /* 01FF9C 8001F39C 94C30006 */       lhu $v1, 6($a2)
  .L8001F3A0:
  /* 01FFA0 8001F3A0 44822000 */      mtc1 $v0, $f4
  /* 01FFA4 8001F3A4 44833000 */      mtc1 $v1, $f6
  /* 01FFA8 8001F3A8 04410005 */      bgez $v0, .L8001F3C0
  /* 01FFAC 8001F3AC 468022A0 */   cvt.s.w $f10, $f4
  /* 01FFB0 8001F3B0 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FFB4 8001F3B4 44819000 */      mtc1 $at, $f18 # 4294967300.0 to cop1
  /* 01FFB8 8001F3B8 00000000 */       nop 
  /* 01FFBC 8001F3BC 46125280 */     add.s $f10, $f10, $f18
  .L8001F3C0:
  /* 01FFC0 8001F3C0 04610005 */      bgez $v1, .L8001F3D8
  /* 01FFC4 8001F3C4 46803420 */   cvt.s.w $f16, $f6
  /* 01FFC8 8001F3C8 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 01FFCC 8001F3CC 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 01FFD0 8001F3D0 00000000 */       nop 
  /* 01FFD4 8001F3D4 46088400 */     add.s $f16, $f16, $f8
  .L8001F3D8:
  /* 01FFD8 8001F3D8 46105083 */     div.s $f2, $f10, $f16
  /* 01FFDC 8001F3DC 8CD90010 */        lw $t9, 0x10($a2)
  /* 01FFE0 8001F3E0 8CC8000C */        lw $t0, 0xc($a2)
  /* 01FFE4 8001F3E4 AFA5002C */        sw $a1, 0x2c($sp)
  /* 01FFE8 8001F3E8 44992000 */      mtc1 $t9, $f4
  /* 01FFEC 8001F3EC 44883000 */      mtc1 $t0, $f6
  /* 01FFF0 8001F3F0 468024A0 */   cvt.s.w $f18, $f4
  /* 01FFF4 8001F3F4 46803220 */   cvt.s.w $f8, $f6
  /* 01FFF8 8001F3F8 46121082 */     mul.s $f2, $f2, $f18
  /* 01FFFC 8001F3FC 46081080 */     add.s $f2, $f2, $f8
  /* 020000 8001F400 4600128D */ trunc.w.s $f10, $f2
  /* 020004 8001F404 44045000 */      mfc1 $a0, $f10
  /* 020008 8001F408 0C00D8D8 */       jal alCents2Ratio
  /* 02000C 8001F40C 00000000 */       nop 
  /* 020010 8001F410 8FA5002C */        lw $a1, 0x2c($sp)
  /* 020014 8001F414 E4A00000 */      swc1 $f0, ($a1)
  .L8001F418:
  /* 020018 8001F418 8FBF0014 */        lw $ra, 0x14($sp)
  .L8001F41C:
  /* 02001C 8001F41C 8FA2001C */        lw $v0, 0x1c($sp)
  /* 020020 8001F420 27BD0028 */     addiu $sp, $sp, 0x28
  /* 020024 8001F424 03E00008 */        jr $ra
  /* 020028 8001F428 00000000 */       nop 

glabel func_8001F42C
  /* 02002C 8001F42C 3C02800A */       lui $v0, %hi(D_8009D9F8)
  /* 020030 8001F430 2442D9F8 */     addiu $v0, $v0, %lo(D_8009D9F8)
  /* 020034 8001F434 8C4E0000 */        lw $t6, ($v0) # D_8009D9F8 + 0
  /* 020038 8001F438 AC8E0000 */        sw $t6, ($a0)
  /* 02003C 8001F43C 03E00008 */        jr $ra
  /* 020040 8001F440 AC440000 */        sw $a0, ($v0) # D_8009D9F8 + 0

glabel func_8001F444
  /* 020044 8001F444 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 020048 8001F448 AFBF0014 */        sw $ra, 0x14($sp)
  /* 02004C 8001F44C 3C04800A */       lui $a0, %hi(D_8009D2F0)
  /* 020050 8001F450 3C05800A */       lui $a1, %hi(D_8009D2F8)
  /* 020054 8001F454 3C06800A */       lui $a2, %hi(D_8009D340)
  /* 020058 8001F458 24C6D340 */     addiu $a2, $a2, %lo(D_8009D340)
  /* 02005C 8001F45C 24A5D2F8 */     addiu $a1, $a1, %lo(D_8009D2F8)
  /* 020060 8001F460 2484D2F0 */     addiu $a0, $a0, %lo(D_8009D2F0)
  /* 020064 8001F464 0C000276 */       jal func_800009D8
  /* 020068 8001F468 24070001 */     addiu $a3, $zero, 1
  /* 02006C 8001F46C 3C04800A */       lui $a0, %hi(D_8009D328)
  /* 020070 8001F470 3C05800A */       lui $a1, %hi(D_8009D348)
  /* 020074 8001F474 24A5D348 */     addiu $a1, $a1, %lo(D_8009D348)
  /* 020078 8001F478 2484D328 */     addiu $a0, $a0, %lo(D_8009D328)
  /* 02007C 8001F47C 0C00D120 */       jal osCreateMesgQueue
  /* 020080 8001F480 24060032 */     addiu $a2, $zero, 0x32
  /* 020084 8001F484 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 020088 8001F488 3C05800A */       lui $a1, %hi(D_8009D344)
  /* 02008C 8001F48C 24A5D344 */     addiu $a1, $a1, %lo(D_8009D344)
  /* 020090 8001F490 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 020094 8001F494 0C00D120 */       jal osCreateMesgQueue
  /* 020098 8001F498 24060001 */     addiu $a2, $zero, 1
  /* 02009C 8001F49C 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 0200A0 8001F4A0 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 0200A4 8001F4A4 00002825 */        or $a1, $zero, $zero
  /* 0200A8 8001F4A8 0C00C000 */       jal osSendMesg
  /* 0200AC 8001F4AC 24060001 */     addiu $a2, $zero, 1
  /* 0200B0 8001F4B0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 0200B4 8001F4B4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 0200B8 8001F4B8 03E00008 */        jr $ra
  /* 0200BC 8001F4BC 00000000 */       nop 

glabel func_8001F4C0
  /* 0200C0 8001F4C0 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 0200C4 8001F4C4 AFB10024 */        sw $s1, 0x24($sp)
  /* 0200C8 8001F4C8 3C11800A */       lui $s1, %hi(D_8009D988)
  /* 0200CC 8001F4CC 2631D988 */     addiu $s1, $s1, %lo(D_8009D988)
  /* 0200D0 8001F4D0 AFBF002C */        sw $ra, 0x2c($sp)
  /* 0200D4 8001F4D4 AFB20028 */        sw $s2, 0x28($sp)
  /* 0200D8 8001F4D8 AFB00020 */        sw $s0, 0x20($sp)
  /* 0200DC 8001F4DC 8E240000 */        lw $a0, ($s1) # D_8009D988 + 0
  /* 0200E0 8001F4E0 0C00C56C */       jal _bzero
  /* 0200E4 8001F4E4 8E250004 */        lw $a1, 4($s1) # D_8009D988 + 4
  /* 0200E8 8001F4E8 3C12800A */       lui $s2, %hi(D_8009D2D8)
  /* 0200EC 8001F4EC 2652D2D8 */     addiu $s2, $s2, %lo(D_8009D2D8)
  /* 0200F0 8001F4F0 02402025 */        or $a0, $s2, $zero
  /* 0200F4 8001F4F4 8E250000 */        lw $a1, ($s1) # D_8009D988 + 0
  /* 0200F8 8001F4F8 0C007970 */       jal func_8001E5C0
  /* 0200FC 8001F4FC 8E260004 */        lw $a2, 4($s1) # D_8009D988 + 4
  /* 020100 8001F500 8E220020 */        lw $v0, 0x20($s1) # D_8009D988 + 32
  /* 020104 8001F504 3C018000 */       lui $at, 0x8000
  /* 020108 8001F508 00002025 */        or $a0, $zero, $zero
  /* 02010C 8001F50C 0041082B */      sltu $at, $v0, $at
  /* 020110 8001F510 14200004 */      bnez $at, .L8001F524
  /* 020114 8001F514 00002825 */        or $a1, $zero, $zero
  /* 020118 8001F518 3C01800A */       lui $at, %hi(D_8009D958)
  /* 02011C 8001F51C 10000013 */         b .L8001F56C
  /* 020120 8001F520 AC22D958 */        sw $v0, %lo(D_8009D958)($at)
  .L8001F524:
  /* 020124 8001F524 8E2E0024 */        lw $t6, 0x24($s1) # D_8009D988 + 36
  /* 020128 8001F528 02403025 */        or $a2, $s2, $zero
  /* 02012C 8001F52C 24070001 */     addiu $a3, $zero, 1
  /* 020130 8001F530 01C28023 */      subu $s0, $t6, $v0
  /* 020134 8001F534 0C00797D */       jal func_8001E5F4
  /* 020138 8001F538 AFB00010 */        sw $s0, 0x10($sp)
  /* 02013C 8001F53C AFA20048 */        sw $v0, 0x48($sp)
  /* 020140 8001F540 8E240020 */        lw $a0, 0x20($s1) # D_8009D988 + 32
  /* 020144 8001F544 00402825 */        or $a1, $v0, $zero
  /* 020148 8001F548 0C007A47 */       jal func_8001E91C
  /* 02014C 8001F54C 02003025 */        or $a2, $s0, $zero
  /* 020150 8001F550 8FB00048 */        lw $s0, 0x48($sp)
  /* 020154 8001F554 8E250028 */        lw $a1, 0x28($s1) # D_8009D988 + 40
  /* 020158 8001F558 0C0079A2 */       jal alBnkfNew
  /* 02015C 8001F55C 02002025 */        or $a0, $s0, $zero
  /* 020160 8001F560 8E0F0004 */        lw $t7, 4($s0)
  /* 020164 8001F564 3C01800A */       lui $at, %hi(D_8009D958)
  /* 020168 8001F568 AC2FD958 */        sw $t7, %lo(D_8009D958)($at)
  .L8001F56C:
  /* 02016C 8001F56C 8E220014 */        lw $v0, 0x14($s1) # D_8009D988 + 20
  /* 020170 8001F570 3C018000 */       lui $at, 0x8000
  /* 020174 8001F574 00002025 */        or $a0, $zero, $zero
  /* 020178 8001F578 0041082B */      sltu $at, $v0, $at
  /* 02017C 8001F57C 14200004 */      bnez $at, .L8001F590
  /* 020180 8001F580 00002825 */        or $a1, $zero, $zero
  /* 020184 8001F584 3C01800A */       lui $at, %hi(D_8009D950)
  /* 020188 8001F588 10000013 */         b .L8001F5D8
  /* 02018C 8001F58C AC22D950 */        sw $v0, %lo(D_8009D950)($at)
  .L8001F590:
  /* 020190 8001F590 8E380018 */        lw $t8, 0x18($s1) # D_8009D988 + 24
  /* 020194 8001F594 02403025 */        or $a2, $s2, $zero
  /* 020198 8001F598 24070001 */     addiu $a3, $zero, 1
  /* 02019C 8001F59C 03028023 */      subu $s0, $t8, $v0
  /* 0201A0 8001F5A0 0C00797D */       jal func_8001E5F4
  /* 0201A4 8001F5A4 AFB00010 */        sw $s0, 0x10($sp)
  /* 0201A8 8001F5A8 AFA20048 */        sw $v0, 0x48($sp)
  /* 0201AC 8001F5AC 8E240014 */        lw $a0, 0x14($s1) # D_8009D988 + 20
  /* 0201B0 8001F5B0 00402825 */        or $a1, $v0, $zero
  /* 0201B4 8001F5B4 0C007A47 */       jal func_8001E91C
  /* 0201B8 8001F5B8 02003025 */        or $a2, $s0, $zero
  /* 0201BC 8001F5BC 8FB00048 */        lw $s0, 0x48($sp)
  /* 0201C0 8001F5C0 8E25001C */        lw $a1, 0x1c($s1) # D_8009D988 + 28
  /* 0201C4 8001F5C4 0C0079A2 */       jal alBnkfNew
  /* 0201C8 8001F5C8 02002025 */        or $a0, $s0, $zero
  /* 0201CC 8001F5CC 8E190004 */        lw $t9, 4($s0)
  /* 0201D0 8001F5D0 3C01800A */       lui $at, %hi(D_8009D950)
  /* 0201D4 8001F5D4 AC39D950 */        sw $t9, %lo(D_8009D950)($at)
  .L8001F5D8:
  /* 0201D8 8001F5D8 8E22002C */        lw $v0, 0x2c($s1) # D_8009D988 + 44
  /* 0201DC 8001F5DC 3C018000 */       lui $at, 0x8000
  /* 0201E0 8001F5E0 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 0201E4 8001F5E4 0041082B */      sltu $at, $v0, $at
  /* 0201E8 8001F5E8 14200003 */      bnez $at, .L8001F5F8
  /* 0201EC 8001F5EC 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  /* 0201F0 8001F5F0 1000002A */         b .L8001F69C
  /* 0201F4 8001F5F4 AD220000 */        sw $v0, ($t1) # D_8009D95C + 0
  .L8001F5F8:
  /* 0201F8 8001F5F8 240A0004 */     addiu $t2, $zero, 4
  /* 0201FC 8001F5FC AFAA0010 */        sw $t2, 0x10($sp)
  /* 020200 8001F600 00002025 */        or $a0, $zero, $zero
  /* 020204 8001F604 00002825 */        or $a1, $zero, $zero
  /* 020208 8001F608 02403025 */        or $a2, $s2, $zero
  /* 02020C 8001F60C 0C00797D */       jal func_8001E5F4
  /* 020210 8001F610 24070001 */     addiu $a3, $zero, 1
  /* 020214 8001F614 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 020218 8001F618 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  /* 02021C 8001F61C AD220000 */        sw $v0, ($t1) # D_8009D95C + 0
  /* 020220 8001F620 8E24002C */        lw $a0, 0x2c($s1) # D_8009D988 + 44
  /* 020224 8001F624 00402825 */        or $a1, $v0, $zero
  /* 020228 8001F628 0C007A47 */       jal func_8001E91C
  /* 02022C 8001F62C 24060004 */     addiu $a2, $zero, 4
  /* 020230 8001F630 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 020234 8001F634 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  /* 020238 8001F638 8D2B0000 */        lw $t3, ($t1) # D_8009D95C + 0
  /* 02023C 8001F63C 00002025 */        or $a0, $zero, $zero
  /* 020240 8001F640 00002825 */        or $a1, $zero, $zero
  /* 020244 8001F644 85620002 */        lh $v0, 2($t3)
  /* 020248 8001F648 02403025 */        or $a2, $s2, $zero
  /* 02024C 8001F64C 24070001 */     addiu $a3, $zero, 1
  /* 020250 8001F650 000210C0 */       sll $v0, $v0, 3
  /* 020254 8001F654 24420004 */     addiu $v0, $v0, 4
  /* 020258 8001F658 00408025 */        or $s0, $v0, $zero
  /* 02025C 8001F65C 0C00797D */       jal func_8001E5F4
  /* 020260 8001F660 AFA20010 */        sw $v0, 0x10($sp)
  /* 020264 8001F664 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 020268 8001F668 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  /* 02026C 8001F66C AD220000 */        sw $v0, ($t1) # D_8009D95C + 0
  /* 020270 8001F670 8E24002C */        lw $a0, 0x2c($s1) # D_8009D988 + 44
  /* 020274 8001F674 00402825 */        or $a1, $v0, $zero
  /* 020278 8001F678 0C007A47 */       jal func_8001E91C
  /* 02027C 8001F67C 02003025 */        or $a2, $s0, $zero
  /* 020280 8001F680 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 020284 8001F684 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  /* 020288 8001F688 8D240000 */        lw $a0, ($t1) # D_8009D95C + 0
  /* 02028C 8001F68C 0C007992 */       jal alSeqFileNew
  /* 020290 8001F690 8E25002C */        lw $a1, 0x2c($s1) # D_8009D988 + 44
  /* 020294 8001F694 3C09800A */       lui $t1, %hi(D_8009D95C)
  /* 020298 8001F698 2529D95C */     addiu $t1, $t1, %lo(D_8009D95C)
  .L8001F69C:
  /* 02029C 8001F69C 8D240000 */        lw $a0, ($t1) # D_8009D95C + 0
  /* 0202A0 8001F6A0 00004025 */        or $t0, $zero, $zero
  /* 0202A4 8001F6A4 00008025 */        or $s0, $zero, $zero
  /* 0202A8 8001F6A8 848C0002 */        lh $t4, 2($a0)
  /* 0202AC 8001F6AC 19800013 */      blez $t4, .L8001F6FC
  /* 0202B0 8001F6B0 00002825 */        or $a1, $zero, $zero
  /* 0202B4 8001F6B4 00801025 */        or $v0, $a0, $zero
  .L8001F6B8:
  /* 0202B8 8001F6B8 8C430008 */        lw $v1, 8($v0)
  /* 0202BC 8001F6BC 306D0001 */      andi $t5, $v1, 1
  /* 0202C0 8001F6C0 006D7021 */      addu $t6, $v1, $t5
  /* 0202C4 8001F6C4 AC4E0008 */        sw $t6, 8($v0)
  /* 0202C8 8001F6C8 8D240000 */        lw $a0, ($t1) # D_8009D95C + 0
  /* 0202CC 8001F6CC 00851021 */      addu $v0, $a0, $a1
  /* 0202D0 8001F6D0 8C430008 */        lw $v1, 8($v0)
  /* 0202D4 8001F6D4 0203082A */       slt $at, $s0, $v1
  /* 0202D8 8001F6D8 50200003 */      beql $at, $zero, .L8001F6E8
  /* 0202DC 8001F6DC 848F0002 */        lh $t7, 2($a0)
  /* 0202E0 8001F6E0 00608025 */        or $s0, $v1, $zero
  /* 0202E4 8001F6E4 848F0002 */        lh $t7, 2($a0)
  .L8001F6E8:
  /* 0202E8 8001F6E8 25080001 */     addiu $t0, $t0, 1
  /* 0202EC 8001F6EC 24A50008 */     addiu $a1, $a1, 8
  /* 0202F0 8001F6F0 010F082A */       slt $at, $t0, $t7
  /* 0202F4 8001F6F4 1420FFF0 */      bnez $at, .L8001F6B8
  /* 0202F8 8001F6F8 24420008 */     addiu $v0, $v0, 8
  .L8001F6FC:
  /* 0202FC 8001F6FC 3C03800A */       lui $v1, %hi(D_8009D96C)
  /* 020300 8001F700 2463D96C */     addiu $v1, $v1, %lo(D_8009D96C)
  .L8001F704:
  /* 020304 8001F704 00002025 */        or $a0, $zero, $zero
  /* 020308 8001F708 00002825 */        or $a1, $zero, $zero
  /* 02030C 8001F70C 02403025 */        or $a2, $s2, $zero
  /* 020310 8001F710 24070001 */     addiu $a3, $zero, 1
  /* 020314 8001F714 AFB00010 */        sw $s0, 0x10($sp)
  /* 020318 8001F718 0C00797D */       jal func_8001E5F4
  /* 02031C 8001F71C AFA30030 */        sw $v1, 0x30($sp)
  /* 020320 8001F720 8FA30030 */        lw $v1, 0x30($sp)
  /* 020324 8001F724 3C18800A */       lui $t8, %hi(D_8009D970)
  /* 020328 8001F728 2718D970 */     addiu $t8, $t8, %lo(D_8009D970)
  /* 02032C 8001F72C 24630004 */     addiu $v1, $v1, 4
  /* 020330 8001F730 0078082B */      sltu $at, $v1, $t8
  /* 020334 8001F734 1420FFF3 */      bnez $at, .L8001F704
  /* 020338 8001F738 AC62FFFC */        sw $v0, -4($v1)
  /* 02033C 8001F73C 34198000 */       ori $t9, $zero, 0x8000
  /* 020340 8001F740 AFB90010 */        sw $t9, 0x10($sp)
  /* 020344 8001F744 00002025 */        or $a0, $zero, $zero
  /* 020348 8001F748 00002825 */        or $a1, $zero, $zero
  /* 02034C 8001F74C 02403025 */        or $a2, $s2, $zero
  /* 020350 8001F750 0C00797D */       jal func_8001E5F4
  /* 020354 8001F754 24070001 */     addiu $a3, $zero, 1
  /* 020358 8001F758 3C10800A */       lui $s0, %hi(D_8009D938)
  /* 02035C 8001F75C 2610D938 */     addiu $s0, $s0, %lo(D_8009D938)
  /* 020360 8001F760 340A8000 */       ori $t2, $zero, 0x8000
  /* 020364 8001F764 AE020000 */        sw $v0, ($s0) # D_8009D938 + 0
  /* 020368 8001F768 AFAA0010 */        sw $t2, 0x10($sp)
  /* 02036C 8001F76C 00002025 */        or $a0, $zero, $zero
  /* 020370 8001F770 00002825 */        or $a1, $zero, $zero
  /* 020374 8001F774 02403025 */        or $a2, $s2, $zero
  /* 020378 8001F778 0C00797D */       jal func_8001E5F4
  /* 02037C 8001F77C 24070001 */     addiu $a3, $zero, 1
  /* 020380 8001F780 240B0068 */     addiu $t3, $zero, 0x68
  /* 020384 8001F784 AE020004 */        sw $v0, 4($s0) # D_8009D938 + 4
  /* 020388 8001F788 AFAB0010 */        sw $t3, 0x10($sp)
  /* 02038C 8001F78C 00002025 */        or $a0, $zero, $zero
  /* 020390 8001F790 00002825 */        or $a1, $zero, $zero
  /* 020394 8001F794 02403025 */        or $a2, $s2, $zero
  /* 020398 8001F798 0C00797D */       jal func_8001E5F4
  /* 02039C 8001F79C 24070001 */     addiu $a3, $zero, 1
  /* 0203A0 8001F7A0 3C10800A */       lui $s0, %hi(D_8009D948)
  /* 0203A4 8001F7A4 2610D948 */     addiu $s0, $s0, %lo(D_8009D948)
  /* 0203A8 8001F7A8 240C0068 */     addiu $t4, $zero, 0x68
  /* 0203AC 8001F7AC AE020000 */        sw $v0, ($s0) # D_8009D948 + 0
  /* 0203B0 8001F7B0 AFAC0010 */        sw $t4, 0x10($sp)
  /* 0203B4 8001F7B4 00002025 */        or $a0, $zero, $zero
  /* 0203B8 8001F7B8 00002825 */        or $a1, $zero, $zero
  /* 0203BC 8001F7BC 02403025 */        or $a2, $s2, $zero
  /* 0203C0 8001F7C0 0C00797D */       jal func_8001E5F4
  /* 0203C4 8001F7C4 24070001 */     addiu $a3, $zero, 1
  /* 0203C8 8001F7C8 240D0E60 */     addiu $t5, $zero, 0xe60
  /* 0203CC 8001F7CC AE020004 */        sw $v0, 4($s0) # D_8009D948 + 4
  /* 0203D0 8001F7D0 AFAD0010 */        sw $t5, 0x10($sp)
  /* 0203D4 8001F7D4 00002025 */        or $a0, $zero, $zero
  /* 0203D8 8001F7D8 00002825 */        or $a1, $zero, $zero
  /* 0203DC 8001F7DC 02403025 */        or $a2, $s2, $zero
  /* 0203E0 8001F7E0 0C00797D */       jal func_8001E5F4
  /* 0203E4 8001F7E4 24070001 */     addiu $a3, $zero, 1
  /* 0203E8 8001F7E8 3C10800A */       lui $s0, %hi(D_8009D928)
  /* 0203EC 8001F7EC 2610D928 */     addiu $s0, $s0, %lo(D_8009D928)
  /* 0203F0 8001F7F0 240E0E60 */     addiu $t6, $zero, 0xe60
  /* 0203F4 8001F7F4 AE020000 */        sw $v0, ($s0) # D_8009D928 + 0
  /* 0203F8 8001F7F8 AFAE0010 */        sw $t6, 0x10($sp)
  /* 0203FC 8001F7FC 00002025 */        or $a0, $zero, $zero
  /* 020400 8001F800 00002825 */        or $a1, $zero, $zero
  /* 020404 8001F804 02403025 */        or $a2, $s2, $zero
  /* 020408 8001F808 0C00797D */       jal func_8001E5F4
  /* 02040C 8001F80C 24070001 */     addiu $a3, $zero, 1
  /* 020410 8001F810 240F0E60 */     addiu $t7, $zero, 0xe60
  /* 020414 8001F814 AE020004 */        sw $v0, 4($s0) # D_8009D928 + 4
  /* 020418 8001F818 AFAF0010 */        sw $t7, 0x10($sp)
  /* 02041C 8001F81C 00002025 */        or $a0, $zero, $zero
  /* 020420 8001F820 00002825 */        or $a1, $zero, $zero
  /* 020424 8001F824 02403025 */        or $a2, $s2, $zero
  /* 020428 8001F828 0C00797D */       jal func_8001E5F4
  /* 02042C 8001F82C 24070001 */     addiu $a3, $zero, 1
  /* 020430 8001F830 8E230050 */        lw $v1, 0x50($s1) # D_8009D988 + 80
  /* 020434 8001F834 3C018000 */       lui $at, 0x8000
  /* 020438 8001F838 AE020008 */        sw $v0, 8($s0) # D_8009D928 + 8
  /* 02043C 8001F83C 0061082B */      sltu $at, $v1, $at
  /* 020440 8001F840 10200015 */      beqz $at, .L8001F898
  /* 020444 8001F844 00002025 */        or $a0, $zero, $zero
  /* 020448 8001F848 8E380054 */        lw $t8, 0x54($s1) # D_8009D988 + 84
  /* 02044C 8001F84C 00002825 */        or $a1, $zero, $zero
  /* 020450 8001F850 02403025 */        or $a2, $s2, $zero
  /* 020454 8001F854 03038023 */      subu $s0, $t8, $v1
  /* 020458 8001F858 AFB00010 */        sw $s0, 0x10($sp)
  /* 02045C 8001F85C 0C00797D */       jal func_8001E5F4
  /* 020460 8001F860 24070001 */     addiu $a3, $zero, 1
  /* 020464 8001F864 8E240050 */        lw $a0, 0x50($s1) # D_8009D988 + 80
  /* 020468 8001F868 00402825 */        or $a1, $v0, $zero
  /* 02046C 8001F86C 02003025 */        or $a2, $s0, $zero
  /* 020470 8001F870 0C007A47 */       jal func_8001E91C
  /* 020474 8001F874 AFA2003C */        sw $v0, 0x3c($sp)
  /* 020478 8001F878 8FA3003C */        lw $v1, 0x3c($sp)
  /* 02047C 8001F87C 3C018004 */       lui $at, %hi(D_8003CB80)
  /* 020480 8001F880 8C6A0000 */        lw $t2, ($v1)
  /* 020484 8001F884 246B0004 */     addiu $t3, $v1, 4
  /* 020488 8001F888 A62A004C */        sh $t2, 0x4c($s1) # D_8009D988 + 76
  /* 02048C 8001F88C A42ACB88 */        sh $t2, %lo(D_8003CB88)($at)
  /* 020490 8001F890 AE2B0044 */        sw $t3, 0x44($s1) # D_8009D988 + 68
  /* 020494 8001F894 AC2BCB80 */        sw $t3, %lo(D_8003CB80)($at)
  .L8001F898:
  /* 020498 8001F898 8E220058 */        lw $v0, 0x58($s1) # D_8009D988 + 88
  /* 02049C 8001F89C 3C018000 */       lui $at, 0x8000
  /* 0204A0 8001F8A0 00002025 */        or $a0, $zero, $zero
  /* 0204A4 8001F8A4 0041082B */      sltu $at, $v0, $at
  /* 0204A8 8001F8A8 10200024 */      beqz $at, .L8001F93C
  /* 0204AC 8001F8AC 00002825 */        or $a1, $zero, $zero
  /* 0204B0 8001F8B0 8E2D005C */        lw $t5, 0x5c($s1) # D_8009D988 + 92
  /* 0204B4 8001F8B4 02403025 */        or $a2, $s2, $zero
  /* 0204B8 8001F8B8 24070001 */     addiu $a3, $zero, 1
  /* 0204BC 8001F8BC 01A28023 */      subu $s0, $t5, $v0
  /* 0204C0 8001F8C0 0C00797D */       jal func_8001E5F4
  /* 0204C4 8001F8C4 AFB00010 */        sw $s0, 0x10($sp)
  /* 0204C8 8001F8C8 8E240058 */        lw $a0, 0x58($s1) # D_8009D988 + 88
  /* 0204CC 8001F8CC 00402825 */        or $a1, $v0, $zero
  /* 0204D0 8001F8D0 02003025 */        or $a2, $s0, $zero
  /* 0204D4 8001F8D4 0C007A47 */       jal func_8001E91C
  /* 0204D8 8001F8D8 AFA20038 */        sw $v0, 0x38($sp)
  /* 0204DC 8001F8DC 8FA70038 */        lw $a3, 0x38($sp)
  /* 0204E0 8001F8E0 3C018004 */       lui $at, %hi(D_8003CB86)
  /* 0204E4 8001F8E4 00004025 */        or $t0, $zero, $zero
  /* 0204E8 8001F8E8 8CEE0000 */        lw $t6, ($a3)
  /* 0204EC 8001F8EC 24EF0004 */     addiu $t7, $a3, 4
  /* 0204F0 8001F8F0 A62E004A */        sh $t6, 0x4a($s1) # D_8009D988 + 74
  /* 0204F4 8001F8F4 31C2FFFF */      andi $v0, $t6, 0xffff
  /* 0204F8 8001F8F8 A422CB86 */        sh $v0, %lo(D_8003CB86)($at)
  /* 0204FC 8001F8FC AE2F0040 */        sw $t7, 0x40($s1) # D_8009D988 + 64
  /* 020500 8001F900 3C018004 */       lui $at, %hi(D_8003CB7C)
  /* 020504 8001F904 1840000D */      blez $v0, .L8001F93C
  /* 020508 8001F908 AC2FCB7C */        sw $t7, %lo(D_8003CB7C)($at)
  /* 02050C 8001F90C 00001025 */        or $v0, $zero, $zero
  /* 020510 8001F910 8E390040 */        lw $t9, 0x40($s1) # D_8009D988 + 64
  .L8001F914:
  /* 020514 8001F914 25080001 */     addiu $t0, $t0, 1
  /* 020518 8001F918 03221821 */      addu $v1, $t9, $v0
  /* 02051C 8001F91C 8C6A0000 */        lw $t2, ($v1)
  /* 020520 8001F920 24420004 */     addiu $v0, $v0, 4
  /* 020524 8001F924 01475821 */      addu $t3, $t2, $a3
  /* 020528 8001F928 AC6B0000 */        sw $t3, ($v1)
  /* 02052C 8001F92C 962C004A */       lhu $t4, 0x4a($s1) # D_8009D988 + 74
  /* 020530 8001F930 010C082A */       slt $at, $t0, $t4
  /* 020534 8001F934 5420FFF7 */      bnel $at, $zero, .L8001F914
  /* 020538 8001F938 8E390040 */        lw $t9, 0x40($s1) # D_8009D988 + 64
  .L8001F93C:
  /* 02053C 8001F93C 8E220060 */        lw $v0, 0x60($s1) # D_8009D988 + 96
  /* 020540 8001F940 3C018000 */       lui $at, 0x8000
  /* 020544 8001F944 00002025 */        or $a0, $zero, $zero
  /* 020548 8001F948 0041082B */      sltu $at, $v0, $at
  /* 02054C 8001F94C 10200026 */      beqz $at, .L8001F9E8
  /* 020550 8001F950 00002825 */        or $a1, $zero, $zero
  /* 020554 8001F954 8E2D0064 */        lw $t5, 0x64($s1) # D_8009D988 + 100
  /* 020558 8001F958 02403025 */        or $a2, $s2, $zero
  /* 02055C 8001F95C 24070001 */     addiu $a3, $zero, 1
  /* 020560 8001F960 01A28023 */      subu $s0, $t5, $v0
  /* 020564 8001F964 AFB00010 */        sw $s0, 0x10($sp)
  /* 020568 8001F968 00004025 */        or $t0, $zero, $zero
  /* 02056C 8001F96C 0C00797D */       jal func_8001E5F4
  /* 020570 8001F970 AFA00044 */        sw $zero, 0x44($sp)
  /* 020574 8001F974 8E240060 */        lw $a0, 0x60($s1) # D_8009D988 + 96
  /* 020578 8001F978 00402825 */        or $a1, $v0, $zero
  /* 02057C 8001F97C 02003025 */        or $a2, $s0, $zero
  /* 020580 8001F980 0C007A47 */       jal func_8001E91C
  /* 020584 8001F984 AFA20034 */        sw $v0, 0x34($sp)
  /* 020588 8001F988 8FA70034 */        lw $a3, 0x34($sp)
  /* 02058C 8001F98C 3C038004 */       lui $v1, %hi(D_8003CB3C)
  /* 020590 8001F990 2463CB3C */     addiu $v1, $v1, %lo(D_8003CB3C)
  /* 020594 8001F994 8CEE0000 */        lw $t6, ($a3)
  /* 020598 8001F998 24EF0004 */     addiu $t7, $a3, 4
  /* 02059C 8001F99C 8FA80044 */        lw $t0, 0x44($sp)
  /* 0205A0 8001F9A0 31C2FFFF */      andi $v0, $t6, 0xffff
  /* 0205A4 8001F9A4 A4620048 */        sh $v0, 0x48($v1) # D_8003CB3C + 72
  /* 0205A8 8001F9A8 AE2F003C */        sw $t7, 0x3c($s1) # D_8009D988 + 60
  /* 0205AC 8001F9AC AC6F003C */        sw $t7, 0x3c($v1) # D_8003CB3C + 60
  /* 0205B0 8001F9B0 1840000D */      blez $v0, .L8001F9E8
  /* 0205B4 8001F9B4 A62E0048 */        sh $t6, 0x48($s1) # D_8009D988 + 72
  /* 0205B8 8001F9B8 00001025 */        or $v0, $zero, $zero
  /* 0205BC 8001F9BC 8E39003C */        lw $t9, 0x3c($s1) # D_8009D988 + 60
  .L8001F9C0:
  /* 0205C0 8001F9C0 25080001 */     addiu $t0, $t0, 1
  /* 0205C4 8001F9C4 03221821 */      addu $v1, $t9, $v0
  /* 0205C8 8001F9C8 8C6A0000 */        lw $t2, ($v1) # D_8003CB3C + 0
  /* 0205CC 8001F9CC 24420004 */     addiu $v0, $v0, 4
  /* 0205D0 8001F9D0 01475821 */      addu $t3, $t2, $a3
  /* 0205D4 8001F9D4 AC6B0000 */        sw $t3, ($v1) # D_8003CB3C + 0
  /* 0205D8 8001F9D8 962C0048 */       lhu $t4, 0x48($s1) # D_8009D988 + 72
  /* 0205DC 8001F9DC 010C082A */       slt $at, $t0, $t4
  /* 0205E0 8001F9E0 5420FFF7 */      bnel $at, $zero, .L8001F9C0
  /* 0205E4 8001F9E4 8E39003C */        lw $t9, 0x3c($s1) # D_8009D988 + 60
  .L8001F9E8:
  /* 0205E8 8001F9E8 8FBF002C */        lw $ra, 0x2c($sp)
  /* 0205EC 8001F9EC 8FB00020 */        lw $s0, 0x20($sp)
  /* 0205F0 8001F9F0 8FB10024 */        lw $s1, 0x24($sp)
  /* 0205F4 8001F9F4 8FB20028 */        lw $s2, 0x28($sp)
  /* 0205F8 8001F9F8 03E00008 */        jr $ra
  /* 0205FC 8001F9FC 27BD0050 */     addiu $sp, $sp, 0x50

glabel func_8001FA00
  /* 020600 8001FA00 27BDFEF8 */     addiu $sp, $sp, -0x108
  /* 020604 8001FA04 3C03800A */       lui $v1, %hi(D_8009D2D8)
  /* 020608 8001FA08 2463D2D8 */     addiu $v1, $v1, %lo(D_8009D2D8)
  /* 02060C 8001FA0C 8C6E0004 */        lw $t6, 4($v1) # D_8009D2D8 + 4
  /* 020610 8001FA10 3C01800A */       lui $at, %hi(D_8009D2E8)
  /* 020614 8001FA14 3C02800A */       lui $v0, %hi(D_8009D988)
  /* 020618 8001FA18 AC2ED2E8 */        sw $t6, %lo(D_8009D2E8)($at)
  /* 02061C 8001FA1C 8C6F000C */        lw $t7, 0xc($v1) # D_8009D2D8 + 12
  /* 020620 8001FA20 3C01800A */       lui $at, %hi(D_8009D2EC)
  /* 020624 8001FA24 2442D988 */     addiu $v0, $v0, %lo(D_8009D988)
  /* 020628 8001FA28 AC2FD2EC */        sw $t7, %lo(D_8009D2EC)($at)
  /* 02062C 8001FA2C 9058000B */       lbu $t8, 0xb($v0) # D_8009D988 + 11
  /* 020630 8001FA30 9059000A */       lbu $t9, 0xa($v0) # D_8009D988 + 10
  /* 020634 8001FA34 9049000C */       lbu $t1, 0xc($v0) # D_8009D988 + 12
  /* 020638 8001FA38 3C0A8002 */       lui $t2, %hi(func_8001EAC8)
  /* 02063C 8001FA3C AFBF0054 */        sw $ra, 0x54($sp)
  /* 020640 8001FA40 254AEAC8 */     addiu $t2, $t2, %lo(func_8001EAC8)
  /* 020644 8001FA44 AFBE0050 */        sw $fp, 0x50($sp)
  /* 020648 8001FA48 AFB7004C */        sw $s7, 0x4c($sp)
  /* 02064C 8001FA4C AFB60048 */        sw $s6, 0x48($sp)
  /* 020650 8001FA50 AFB50044 */        sw $s5, 0x44($sp)
  /* 020654 8001FA54 AFB40040 */        sw $s4, 0x40($sp)
  /* 020658 8001FA58 AFB3003C */        sw $s3, 0x3c($sp)
  /* 02065C 8001FA5C AFB20038 */        sw $s2, 0x38($sp)
  /* 020660 8001FA60 AFB10034 */        sw $s1, 0x34($sp)
  /* 020664 8001FA64 AFB00030 */        sw $s0, 0x30($sp)
  /* 020668 8001FA68 F7B60028 */      sdc1 $f22, 0x28($sp)
  /* 02066C 8001FA6C F7B40020 */      sdc1 $f20, 0x20($sp)
  /* 020670 8001FA70 AFAA00F4 */        sw $t2, 0xf4($sp)
  /* 020674 8001FA74 94440008 */       lhu $a0, 8($v0) # D_8009D988 + 8
  /* 020678 8001FA78 AFB800E4 */        sw $t8, 0xe4($sp)
  /* 02067C 8001FA7C AFB900E8 */        sw $t9, 0xe8($sp)
  /* 020680 8001FA80 0C00D48C */       jal osAiSetFrequency
  /* 020684 8001FA84 AFA900EC */        sw $t1, 0xec($sp)
  /* 020688 8001FA88 3C0C800A */       lui $t4, %hi(D_8009D9B8)
  /* 02068C 8001FA8C 918CD9B8 */       lbu $t4, %lo(D_8009D9B8)($t4)
  /* 020690 8001FA90 3C048004 */       lui $a0, %hi(D_8003CB28)
  /* 020694 8001FA94 3C0B800A */       lui $t3, %hi(D_8009D2D8)
  /* 020698 8001FA98 2484CB28 */     addiu $a0, $a0, %lo(D_8003CB28)
  /* 02069C 8001FA9C 256BD2D8 */     addiu $t3, $t3, %lo(D_8009D2D8)
  /* 0206A0 8001FAA0 29810006 */      slti $at, $t4, 6
  /* 0206A4 8001FAA4 AFA200FC */        sw $v0, 0xfc($sp)
  /* 0206A8 8001FAA8 AFAB00F8 */        sw $t3, 0xf8($sp)
  /* 0206AC 8001FAAC AC8C0000 */        sw $t4, ($a0) # D_8003CB28 + 0
  /* 0206B0 8001FAB0 10200003 */      beqz $at, .L8001FAC0
  /* 0206B4 8001FAB4 01801825 */        or $v1, $t4, $zero
  /* 0206B8 8001FAB8 10000008 */         b .L8001FADC
  /* 0206BC 8001FABC A3AC0100 */        sb $t4, 0x100($sp)
  .L8001FAC0:
  /* 0206C0 8001FAC0 00037080 */       sll $t6, $v1, 2
  /* 0206C4 8001FAC4 3C0F8004 */       lui $t7, %hi(D_8003CB00)
  /* 0206C8 8001FAC8 01EE7821 */      addu $t7, $t7, $t6
  /* 0206CC 8001FACC 8DEFCB00 */        lw $t7, %lo(D_8003CB00)($t7)
  /* 0206D0 8001FAD0 240D0006 */     addiu $t5, $zero, 6
  /* 0206D4 8001FAD4 A3AD0100 */        sb $t5, 0x100($sp)
  /* 0206D8 8001FAD8 AFAF0104 */        sw $t7, 0x104($sp)
  .L8001FADC:
  /* 0206DC 8001FADC 3C04800A */       lui $a0, %hi(D_8009D8C0)
  /* 0206E0 8001FAE0 2484D8C0 */     addiu $a0, $a0, %lo(D_8009D8C0)
  /* 0206E4 8001FAE4 0C00B3A2 */       jal n_alInit
  /* 0206E8 8001FAE8 27A500E4 */     addiu $a1, $sp, 0xe4
  /* 0206EC 8001FAEC 8FB800FC */        lw $t8, 0xfc($sp)
  /* 0206F0 8001FAF0 3C014270 */       lui $at, (0x42700000 >> 16) # 60.0
  /* 0206F4 8001FAF4 44814000 */      mtc1 $at, $f8 # 60.0 to cop1
  /* 0206F8 8001FAF8 44982000 */      mtc1 $t8, $f4
  /* 0206FC 8001FAFC 240500B8 */     addiu $a1, $zero, 0xb8
  /* 020700 8001FB00 3C03800A */       lui $v1, %hi(D_8009D91C)
  /* 020704 8001FB04 468021A0 */   cvt.s.w $f6, $f4
  /* 020708 8001FB08 2463D91C */     addiu $v1, $v1, %lo(D_8009D91C)
  /* 02070C 8001FB0C 3C02800A */       lui $v0, %hi(D_8009D988)
  /* 020710 8001FB10 2442D988 */     addiu $v0, $v0, %lo(D_8009D988)
  /* 020714 8001FB14 46083283 */     div.s $f10, $f6, $f8
  /* 020718 8001FB18 4600540D */ trunc.w.s $f16, $f10
  /* 02071C 8001FB1C 44098000 */      mfc1 $t1, $f16
  /* 020720 8001FB20 00000000 */       nop 
  /* 020724 8001FB24 0125001A */       div $zero, $t1, $a1
  /* 020728 8001FB28 00005812 */      mflo $t3
  /* 02072C 8001FB2C 01205025 */        or $t2, $t1, $zero
  /* 020730 8001FB30 AC690000 */        sw $t1, ($v1) # D_8009D91C + 0
  /* 020734 8001FB34 01650019 */     multu $t3, $a1
  /* 020738 8001FB38 14A00002 */      bnez $a1, .L8001FB44
  /* 02073C 8001FB3C 00000000 */       nop 
  /* 020740 8001FB40 0007000D */     break 7
  .L8001FB44:
  /* 020744 8001FB44 2401FFFF */     addiu $at, $zero, -1
  /* 020748 8001FB48 14A10004 */       bne $a1, $at, .L8001FB5C
  /* 02074C 8001FB4C 3C018000 */       lui $at, 0x8000
  /* 020750 8001FB50 15410002 */       bne $t2, $at, .L8001FB5C
  /* 020754 8001FB54 00000000 */       nop 
  /* 020758 8001FB58 0006000D */     break 6
  .L8001FB5C:
  /* 02075C 8001FB5C 00006012 */      mflo $t4
  /* 020760 8001FB60 258D00B8 */     addiu $t5, $t4, 0xb8
  /* 020764 8001FB64 AC6D0000 */        sw $t5, ($v1) # D_8009D91C + 0
  /* 020768 8001FB68 25AFFF48 */     addiu $t7, $t5, -0xb8
  /* 02076C 8001FB6C 3C01800A */       lui $at, %hi(D_8009D920)
  /* 020770 8001FB70 AC2FD920 */        sw $t7, %lo(D_8009D920)($at)
  /* 020774 8001FB74 94440034 */       lhu $a0, 0x34($v0) # D_8009D988 + 52
  /* 020778 8001FB78 90580031 */       lbu $t8, 0x31($v0) # D_8009D988 + 49
  /* 02077C 8001FB7C 90590032 */       lbu $t9, 0x32($v0) # D_8009D988 + 50
  /* 020780 8001FB80 90490033 */       lbu $t1, 0x33($v0) # D_8009D988 + 51
  /* 020784 8001FB84 01A07025 */        or $t6, $t5, $zero
  /* 020788 8001FB88 A7B80094 */        sh $t8, 0x94($sp)
  /* 02078C 8001FB8C A7B90096 */        sh $t9, 0x96($sp)
  /* 020790 8001FB90 10800005 */      beqz $a0, .L8001FBA8
  /* 020794 8001FB94 A7A90098 */        sh $t1, 0x98($sp)
  /* 020798 8001FB98 8C4A0038 */        lw $t2, 0x38($v0) # D_8009D988 + 56
  /* 02079C 8001FB9C A7A4009A */        sh $a0, 0x9a($sp)
  /* 0207A0 8001FBA0 10000009 */         b .L8001FBC8
  /* 0207A4 8001FBA4 AFAA00A4 */        sw $t2, 0xa4($sp)
  .L8001FBA8:
  /* 0207A8 8001FBA8 3C03800A */       lui $v1, %hi(D_8009D950)
  /* 0207AC 8001FBAC 8C63D950 */        lw $v1, %lo(D_8009D950)($v1)
  /* 0207B0 8001FBB0 8C6B000C */        lw $t3, 0xc($v1)
  /* 0207B4 8001FBB4 856C000E */        lh $t4, 0xe($t3)
  /* 0207B8 8001FBB8 A7AC009A */        sh $t4, 0x9a($sp)
  /* 0207BC 8001FBBC 8C6D000C */        lw $t5, 0xc($v1)
  /* 0207C0 8001FBC0 25AE0010 */     addiu $t6, $t5, 0x10
  /* 0207C4 8001FBC4 AFAE00A4 */        sw $t6, 0xa4($sp)
  .L8001FBC8:
  /* 0207C8 8001FBC8 8C4F003C */        lw $t7, 0x3c($v0) # D_8009D988 + 60
  /* 0207CC 8001FBCC 8C580040 */        lw $t8, 0x40($v0) # D_8009D988 + 64
  /* 0207D0 8001FBD0 8C590044 */        lw $t9, 0x44($v0) # D_8009D988 + 68
  /* 0207D4 8001FBD4 94490048 */       lhu $t1, 0x48($v0) # D_8009D988 + 72
  /* 0207D8 8001FBD8 944A004A */       lhu $t2, 0x4a($v0) # D_8009D988 + 74
  /* 0207DC 8001FBDC 944B004C */       lhu $t3, 0x4c($v0) # D_8009D988 + 76
  /* 0207E0 8001FBE0 904D0012 */       lbu $t5, 0x12($v0) # D_8009D988 + 18
  /* 0207E4 8001FBE4 3C0C800A */       lui $t4, %hi(D_8009D2D8)
  /* 0207E8 8001FBE8 AFAF00A8 */        sw $t7, 0xa8($sp)
  /* 0207EC 8001FBEC AFB800AC */        sw $t8, 0xac($sp)
  /* 0207F0 8001FBF0 AFB900B0 */        sw $t9, 0xb0($sp)
  /* 0207F4 8001FBF4 A7A9009C */        sh $t1, 0x9c($sp)
  /* 0207F8 8001FBF8 A7AA009E */        sh $t2, 0x9e($sp)
  /* 0207FC 8001FBFC 258CD2D8 */     addiu $t4, $t4, %lo(D_8009D2D8)
  /* 020800 8001FC00 240E000A */     addiu $t6, $zero, 0xa
  /* 020804 8001FC04 240F0014 */     addiu $t7, $zero, 0x14
  /* 020808 8001FC08 2418001E */     addiu $t8, $zero, 0x1e
  /* 02080C 8001FC0C 24190028 */     addiu $t9, $zero, 0x28
  /* 020810 8001FC10 24090032 */     addiu $t1, $zero, 0x32
  /* 020814 8001FC14 240A003C */     addiu $t2, $zero, 0x3c
  /* 020818 8001FC18 AFAC00B4 */        sw $t4, 0xb4($sp)
  /* 02081C 8001FC1C A7AE00BA */        sh $t6, 0xba($sp)
  /* 020820 8001FC20 A7AF00BC */        sh $t7, 0xbc($sp)
  /* 020824 8001FC24 A7B800BE */        sh $t8, 0xbe($sp)
  /* 020828 8001FC28 A7B900C0 */        sh $t9, 0xc0($sp)
  /* 02082C 8001FC2C A7A900C2 */        sh $t1, 0xc2($sp)
  /* 020830 8001FC30 A7AA00C4 */        sh $t2, 0xc4($sp)
  /* 020834 8001FC34 27A40094 */     addiu $a0, $sp, 0x94
  /* 020838 8001FC38 A7AB00A0 */        sh $t3, 0xa0($sp)
  /* 02083C 8001FC3C 0C009881 */       jal func_80026204
  /* 020840 8001FC40 A3AD00B8 */        sb $t5, 0xb8($sp)
  /* 020844 8001FC44 3C0B800A */       lui $t3, %hi(D_8009D9BB)
  /* 020848 8001FC48 916BD9BB */       lbu $t3, %lo(D_8009D9BB)($t3)
  /* 02084C 8001FC4C 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 020850 8001FC50 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 020854 8001FC54 000B6080 */       sll $t4, $t3, 2
  /* 020858 8001FC58 AFAC0010 */        sw $t4, 0x10($sp)
  /* 02085C 8001FC5C 00002025 */        or $a0, $zero, $zero
  /* 020860 8001FC60 00002825 */        or $a1, $zero, $zero
  /* 020864 8001FC64 0C00797D */       jal func_8001E5F4
  /* 020868 8001FC68 24070001 */     addiu $a3, $zero, 1
  /* 02086C 8001FC6C 3C08800A */       lui $t0, %hi(D_8009D988)
  /* 020870 8001FC70 2508D988 */     addiu $t0, $t0, %lo(D_8009D988)
  /* 020874 8001FC74 910D0033 */       lbu $t5, 0x33($t0) # D_8009D988 + 51
  /* 020878 8001FC78 3C03800A */       lui $v1, %hi(D_8009D954)
  /* 02087C 8001FC7C 2463D954 */     addiu $v1, $v1, %lo(D_8009D954)
  /* 020880 8001FC80 AC620000 */        sw $v0, ($v1) # D_8009D954 + 0
  /* 020884 8001FC84 19A0000C */      blez $t5, .L8001FCB8
  /* 020888 8001FC88 00008825 */        or $s1, $zero, $zero
  /* 02088C 8001FC8C 00008025 */        or $s0, $zero, $zero
  /* 020890 8001FC90 8C6E0000 */        lw $t6, ($v1) # D_8009D954 + 0
  .L8001FC94:
  /* 020894 8001FC94 26310001 */     addiu $s1, $s1, 1
  /* 020898 8001FC98 01D07821 */      addu $t7, $t6, $s0
  /* 02089C 8001FC9C ADE00000 */        sw $zero, ($t7)
  /* 0208A0 8001FCA0 91180033 */       lbu $t8, 0x33($t0) # D_8009D988 + 51
  /* 0208A4 8001FCA4 26100004 */     addiu $s0, $s0, 4
  /* 0208A8 8001FCA8 0238082A */       slt $at, $s1, $t8
  /* 0208AC 8001FCAC 5420FFF9 */      bnel $at, $zero, .L8001FC94
  /* 0208B0 8001FCB0 8C6E0000 */        lw $t6, ($v1) # D_8009D954 + 0
  /* 0208B4 8001FCB4 00008825 */        or $s1, $zero, $zero
  .L8001FCB8:
  /* 0208B8 8001FCB8 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 0208BC 8001FCBC 24190001 */     addiu $t9, $zero, 1
  /* 0208C0 8001FCC0 AFB90010 */        sw $t9, 0x10($sp)
  /* 0208C4 8001FCC4 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 0208C8 8001FCC8 00002025 */        or $a0, $zero, $zero
  /* 0208CC 8001FCCC 00002825 */        or $a1, $zero, $zero
  /* 0208D0 8001FCD0 0C00797D */       jal func_8001E5F4
  /* 0208D4 8001FCD4 24070001 */     addiu $a3, $zero, 1
  /* 0208D8 8001FCD8 3C01800A */       lui $at, %hi(D_8009D970)
  /* 0208DC 8001FCDC 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 0208E0 8001FCE0 24090004 */     addiu $t1, $zero, 4
  /* 0208E4 8001FCE4 AC22D970 */        sw $v0, %lo(D_8009D970)($at)
  /* 0208E8 8001FCE8 AFA90010 */        sw $t1, 0x10($sp)
  /* 0208EC 8001FCEC 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 0208F0 8001FCF0 00002025 */        or $a0, $zero, $zero
  /* 0208F4 8001FCF4 00002825 */        or $a1, $zero, $zero
  /* 0208F8 8001FCF8 0C00797D */       jal func_8001E5F4
  /* 0208FC 8001FCFC 24070001 */     addiu $a3, $zero, 1
  /* 020900 8001FD00 3C01800A */       lui $at, %hi(D_8009D974)
  /* 020904 8001FD04 3C0A800A */       lui $t2, %hi(D_8009D99B)
  /* 020908 8001FD08 914AD99B */       lbu $t2, %lo(D_8009D99B)($t2)
  /* 02090C 8001FD0C AC22D974 */        sw $v0, %lo(D_8009D974)($at)
  /* 020910 8001FD10 3C01800A */       lui $at, %hi(D_8009D968)
  /* 020914 8001FD14 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 020918 8001FD18 240B0020 */     addiu $t3, $zero, 0x20
  /* 02091C 8001FD1C AFAB0010 */        sw $t3, 0x10($sp)
  /* 020920 8001FD20 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 020924 8001FD24 00002025 */        or $a0, $zero, $zero
  /* 020928 8001FD28 00002825 */        or $a1, $zero, $zero
  /* 02092C 8001FD2C 24070014 */     addiu $a3, $zero, 0x14
  /* 020930 8001FD30 0C00797D */       jal func_8001E5F4
  /* 020934 8001FD34 A02AD968 */        sb $t2, %lo(D_8009D968)($at)
  /* 020938 8001FD38 3C04800A */       lui $a0, %hi(D_8009D9F8)
  /* 02093C 8001FD3C 2484D9F8 */     addiu $a0, $a0, %lo(D_8009D9F8)
  /* 020940 8001FD40 AC820000 */        sw $v0, ($a0) # D_8009D9F8 + 0
  /* 020944 8001FD44 244C0014 */     addiu $t4, $v0, 0x14
  /* 020948 8001FD48 AC4C0000 */        sw $t4, ($v0)
  /* 02094C 8001FD4C 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 020950 8001FD50 2403003C */     addiu $v1, $zero, 0x3c
  /* 020954 8001FD54 2405026C */     addiu $a1, $zero, 0x26c
  /* 020958 8001FD58 244D0028 */     addiu $t5, $v0, 0x28
  /* 02095C 8001FD5C AC4D0014 */        sw $t5, 0x14($v0)
  /* 020960 8001FD60 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 020964 8001FD64 00008025 */        or $s0, $zero, $zero
  /* 020968 8001FD68 3C13800A */       lui $s3, %hi(D_8009D988)
  /* 02096C 8001FD6C 244E003C */     addiu $t6, $v0, 0x3c
  /* 020970 8001FD70 AC4E0028 */        sw $t6, 0x28($v0)
  .L8001FD74:
  /* 020974 8001FD74 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 020978 8001FD78 00627821 */      addu $t7, $v1, $v0
  /* 02097C 8001FD7C 25F80014 */     addiu $t8, $t7, 0x14
  /* 020980 8001FD80 0043C821 */      addu $t9, $v0, $v1
  /* 020984 8001FD84 AF380000 */        sw $t8, ($t9)
  /* 020988 8001FD88 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 02098C 8001FD8C 00624821 */      addu $t1, $v1, $v0
  /* 020990 8001FD90 252A0028 */     addiu $t2, $t1, 0x28
  /* 020994 8001FD94 00435821 */      addu $t3, $v0, $v1
  /* 020998 8001FD98 AD6A0014 */        sw $t2, 0x14($t3)
  /* 02099C 8001FD9C 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 0209A0 8001FDA0 00626021 */      addu $t4, $v1, $v0
  /* 0209A4 8001FDA4 258D003C */     addiu $t5, $t4, 0x3c
  /* 0209A8 8001FDA8 00437021 */      addu $t6, $v0, $v1
  /* 0209AC 8001FDAC ADCD0028 */        sw $t5, 0x28($t6)
  /* 0209B0 8001FDB0 8C820000 */        lw $v0, ($a0) # D_8009D9F8 + 0
  /* 0209B4 8001FDB4 00627821 */      addu $t7, $v1, $v0
  /* 0209B8 8001FDB8 0043C821 */      addu $t9, $v0, $v1
  /* 0209BC 8001FDBC 24630050 */     addiu $v1, $v1, 0x50
  /* 0209C0 8001FDC0 25F80050 */     addiu $t8, $t7, 0x50
  /* 0209C4 8001FDC4 1465FFEB */       bne $v1, $a1, .L8001FD74
  /* 0209C8 8001FDC8 AF38003C */        sw $t8, 0x3c($t9)
  /* 0209CC 8001FDCC 8C890000 */        lw $t1, ($a0) # D_8009D9F8 + 0
  /* 0209D0 8001FDD0 3C0B8002 */       lui $t3, %hi(func_8001EBE4)
  /* 0209D4 8001FDD4 3C028002 */       lui $v0, %hi(func_8001EEB8)
  /* 0209D8 8001FDD8 01235021 */      addu $t2, $t1, $v1
  /* 0209DC 8001FDDC AD400000 */        sw $zero, ($t2)
  /* 0209E0 8001FDE0 3C0C8002 */       lui $t4, %hi(func_8001F42C)
  /* 0209E4 8001FDE4 3C0146F0 */       lui $at, (0x46F00000 >> 16) # 30720.0
  /* 0209E8 8001FDE8 258CF42C */     addiu $t4, $t4, %lo(func_8001F42C)
  /* 0209EC 8001FDEC 2442EEB8 */     addiu $v0, $v0, %lo(func_8001EEB8)
  /* 0209F0 8001FDF0 256BEBE4 */     addiu $t3, $t3, %lo(func_8001EBE4)
  /* 0209F4 8001FDF4 3C12800A */       lui $s2, %hi(D_8009D960)
  /* 0209F8 8001FDF8 3C14800A */       lui $s4, %hi(D_8009D964)
  /* 0209FC 8001FDFC 3C15800A */       lui $s5, %hi(D_8009D978)
  /* 020A00 8001FE00 3C16800A */       lui $s6, %hi(D_8009D97C)
  /* 020A04 8001FE04 3C17800A */       lui $s7, %hi(D_8009D980)
  /* 020A08 8001FE08 4481A000 */      mtc1 $at, $f20 # 30720.0 to cop1
  /* 020A0C 8001FE0C 4480B000 */      mtc1 $zero, $f22
  /* 020A10 8001FE10 26F7D980 */     addiu $s7, $s7, %lo(D_8009D980)
  /* 020A14 8001FE14 26D6D97C */     addiu $s6, $s6, %lo(D_8009D97C)
  /* 020A18 8001FE18 26B5D978 */     addiu $s5, $s5, %lo(D_8009D978)
  /* 020A1C 8001FE1C 2694D964 */     addiu $s4, $s4, %lo(D_8009D964)
  /* 020A20 8001FE20 2652D960 */     addiu $s2, $s2, %lo(D_8009D960)
  /* 020A24 8001FE24 AFAB0078 */        sw $t3, 0x78($sp)
  /* 020A28 8001FE28 AFA20074 */        sw $v0, 0x74($sp)
  /* 020A2C 8001FE2C AFAC0070 */        sw $t4, 0x70($sp)
  /* 020A30 8001FE30 2673D988 */     addiu $s3, $s3, %lo(D_8009D988)
  /* 020A34 8001FE34 27BE00C8 */     addiu $fp, $sp, 0xc8
  .L8001FE38:
  /* 020A38 8001FE38 3C0E800A */       lui $t6, %hi(D_8009D995)
  /* 020A3C 8001FE3C 8FA20074 */        lw $v0, 0x74($sp)
  /* 020A40 8001FE40 926D000F */       lbu $t5, 0xf($s3) # D_8009D988 + 15
  /* 020A44 8001FE44 91CED995 */       lbu $t6, %lo(D_8009D995)($t6)
  /* 020A48 8001FE48 8FB80078 */        lw $t8, 0x78($sp)
  /* 020A4C 8001FE4C 8FB90070 */        lw $t9, 0x70($sp)
  /* 020A50 8001FE50 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 020A54 8001FE54 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 020A58 8001FE58 240F0010 */     addiu $t7, $zero, 0x10
  /* 020A5C 8001FE5C 24090088 */     addiu $t1, $zero, 0x88
  /* 020A60 8001FE60 A3AF00D0 */        sb $t7, 0xd0($sp)
  /* 020A64 8001FE64 AFA600D4 */        sw $a2, 0xd4($sp)
  /* 020A68 8001FE68 AFA90010 */        sw $t1, 0x10($sp)
  /* 020A6C 8001FE6C 00002025 */        or $a0, $zero, $zero
  /* 020A70 8001FE70 00002825 */        or $a1, $zero, $zero
  /* 020A74 8001FE74 24070001 */     addiu $a3, $zero, 1
  /* 020A78 8001FE78 AFA200DC */        sw $v0, 0xdc($sp)
  /* 020A7C 8001FE7C AFAD00C8 */        sw $t5, 0xc8($sp)
  /* 020A80 8001FE80 AFAE00CC */        sw $t6, 0xcc($sp)
  /* 020A84 8001FE84 AFB800D8 */        sw $t8, 0xd8($sp)
  /* 020A88 8001FE88 0C00797D */       jal func_8001E5F4
  /* 020A8C 8001FE8C AFB900E0 */        sw $t9, 0xe0($sp)
  /* 020A90 8001FE90 AE420000 */        sw $v0, ($s2) # D_8009D960 + 0
  /* 020A94 8001FE94 00402025 */        or $a0, $v0, $zero
  /* 020A98 8001FE98 0C00B0F4 */       jal func_8002C3D0
  /* 020A9C 8001FE9C 03C02825 */        or $a1, $fp, $zero
  /* 020AA0 8001FEA0 3C05800A */       lui $a1, %hi(D_8009D958)
  /* 020AA4 8001FEA4 8CA5D958 */        lw $a1, %lo(D_8009D958)($a1)
  /* 020AA8 8001FEA8 0C00BEF4 */       jal func_8002FBD0
  /* 020AAC 8001FEAC 8E440000 */        lw $a0, ($s2) # D_8009D960 + 0
  /* 020AB0 8001FEB0 3C06800A */       lui $a2, %hi(D_8009D2D8)
  /* 020AB4 8001FEB4 240A00F8 */     addiu $t2, $zero, 0xf8
  /* 020AB8 8001FEB8 AFAA0010 */        sw $t2, 0x10($sp)
  /* 020ABC 8001FEBC 24C6D2D8 */     addiu $a2, $a2, %lo(D_8009D2D8)
  /* 020AC0 8001FEC0 00002025 */        or $a0, $zero, $zero
  /* 020AC4 8001FEC4 00002825 */        or $a1, $zero, $zero
  /* 020AC8 8001FEC8 0C00797D */       jal func_8001E5F4
  /* 020ACC 8001FECC 24070001 */     addiu $a3, $zero, 1
  /* 020AD0 8001FED0 AE820000 */        sw $v0, ($s4) # D_8009D964 + 0
  /* 020AD4 8001FED4 3C0B800A */       lui $t3, %hi(D_8009D970)
  /* 020AD8 8001FED8 8D6BD970 */        lw $t3, %lo(D_8009D970)($t3)
  /* 020ADC 8001FEDC 3C0E800A */       lui $t6, %hi(D_8009D974)
  /* 020AE0 8001FEE0 240DFFFF */     addiu $t5, $zero, -1
  /* 020AE4 8001FEE4 01716021 */      addu $t4, $t3, $s1
  /* 020AE8 8001FEE8 A1800000 */        sb $zero, ($t4)
  /* 020AEC 8001FEEC 8DCED974 */        lw $t6, %lo(D_8009D974)($t6)
  /* 020AF0 8001FEF0 26310001 */     addiu $s1, $s1, 1
  /* 020AF4 8001FEF4 24010001 */     addiu $at, $zero, 1
  /* 020AF8 8001FEF8 01D07821 */      addu $t7, $t6, $s0
  /* 020AFC 8001FEFC ADED0000 */        sw $t5, ($t7)
  /* 020B00 8001FF00 26100004 */     addiu $s0, $s0, 4
  /* 020B04 8001FF04 26730001 */     addiu $s3, $s3, 1
  /* 020B08 8001FF08 26520004 */     addiu $s2, $s2, 4
  /* 020B0C 8001FF0C 26940004 */     addiu $s4, $s4, 4
  /* 020B10 8001FF10 26B50004 */     addiu $s5, $s5, 4
  /* 020B14 8001FF14 26D60004 */     addiu $s6, $s6, 4
  /* 020B18 8001FF18 26F70004 */     addiu $s7, $s7, 4
  /* 020B1C 8001FF1C AEA0FFFC */        sw $zero, -4($s5) # D_8009D978 + -4
  /* 020B20 8001FF20 E6D4FFFC */      swc1 $f20, -4($s6) # D_8009D97C + -4
  /* 020B24 8001FF24 1621FFC4 */       bne $s1, $at, .L8001FE38
  /* 020B28 8001FF28 E6F6FFFC */      swc1 $f22, -4($s7) # D_8009D980 + -4
  /* 020B2C 8001FF2C 8FBF0054 */        lw $ra, 0x54($sp)
  /* 020B30 8001FF30 D7B40020 */      ldc1 $f20, 0x20($sp)
  /* 020B34 8001FF34 D7B60028 */      ldc1 $f22, 0x28($sp)
  /* 020B38 8001FF38 8FB00030 */        lw $s0, 0x30($sp)
  /* 020B3C 8001FF3C 8FB10034 */        lw $s1, 0x34($sp)
  /* 020B40 8001FF40 8FB20038 */        lw $s2, 0x38($sp)
  /* 020B44 8001FF44 8FB3003C */        lw $s3, 0x3c($sp)
  /* 020B48 8001FF48 8FB40040 */        lw $s4, 0x40($sp)
  /* 020B4C 8001FF4C 8FB50044 */        lw $s5, 0x44($sp)
  /* 020B50 8001FF50 8FB60048 */        lw $s6, 0x48($sp)
  /* 020B54 8001FF54 8FB7004C */        lw $s7, 0x4c($sp)
  /* 020B58 8001FF58 8FBE0050 */        lw $fp, 0x50($sp)
  /* 020B5C 8001FF5C 03E00008 */        jr $ra
  /* 020B60 8001FF60 27BD0108 */     addiu $sp, $sp, 0x108

glabel thread4_audio
  /* 020B64 8001FF64 27BDFF78 */     addiu $sp, $sp, -0x88
  /* 020B68 8001FF68 AFBF004C */        sw $ra, 0x4c($sp)
  /* 020B6C 8001FF6C 240E0002 */     addiu $t6, $zero, 2
  /* 020B70 8001FF70 AFBE0048 */        sw $fp, 0x48($sp)
  /* 020B74 8001FF74 AFB70044 */        sw $s7, 0x44($sp)
  /* 020B78 8001FF78 AFB60040 */        sw $s6, 0x40($sp)
  /* 020B7C 8001FF7C AFB5003C */        sw $s5, 0x3c($sp)
  /* 020B80 8001FF80 AFB40038 */        sw $s4, 0x38($sp)
  /* 020B84 8001FF84 AFB30034 */        sw $s3, 0x34($sp)
  /* 020B88 8001FF88 AFB20030 */        sw $s2, 0x30($sp)
  /* 020B8C 8001FF8C AFB1002C */        sw $s1, 0x2c($sp)
  /* 020B90 8001FF90 AFB00028 */        sw $s0, 0x28($sp)
  /* 020B94 8001FF94 F7B60020 */      sdc1 $f22, 0x20($sp)
  /* 020B98 8001FF98 F7B40018 */      sdc1 $f20, 0x18($sp)
  /* 020B9C 8001FF9C AFA40088 */        sw $a0, 0x88($sp)
  /* 020BA0 8001FFA0 AFA00078 */        sw $zero, 0x78($sp)
  /* 020BA4 8001FFA4 0C007D11 */       jal func_8001F444
  /* 020BA8 8001FFA8 A3AE0073 */        sb $t6, 0x73($sp)
  /* 020BAC 8001FFAC 3C188004 */       lui $t8, %hi(D_8003CB3C)
  /* 020BB0 8001FFB0 2718CB3C */     addiu $t8, $t8, %lo(D_8003CB3C)
  /* 020BB4 8001FFB4 3C0F800A */       lui $t7, %hi(D_8009D988)
  /* 020BB8 8001FFB8 25EFD988 */     addiu $t7, $t7, %lo(D_8009D988)
  /* 020BBC 8001FFBC 27090060 */     addiu $t1, $t8, 0x60
  .L8001FFC0:
  /* 020BC0 8001FFC0 8F080000 */        lw $t0, ($t8) # D_8003CB3C + 0
  /* 020BC4 8001FFC4 2718000C */     addiu $t8, $t8, 0xc
  /* 020BC8 8001FFC8 25EF000C */     addiu $t7, $t7, 0xc
  /* 020BCC 8001FFCC ADE8FFF4 */        sw $t0, -0xc($t7) # D_8009D988 + -12
  /* 020BD0 8001FFD0 8F19FFF8 */        lw $t9, -8($t8) # D_8003CB3C + -8
  /* 020BD4 8001FFD4 ADF9FFF8 */        sw $t9, -8($t7) # D_8009D988 + -8
  /* 020BD8 8001FFD8 8F08FFFC */        lw $t0, -4($t8) # D_8003CB3C + -4
  /* 020BDC 8001FFDC 1709FFF8 */       bne $t8, $t1, .L8001FFC0
  /* 020BE0 8001FFE0 ADE8FFFC */        sw $t0, -4($t7) # D_8009D988 + -4
  /* 020BE4 8001FFE4 8F080000 */        lw $t0, ($t8) # D_8003CB3C + 0
  /* 020BE8 8001FFE8 8F190004 */        lw $t9, 4($t8) # D_8003CB3C + 4
  /* 020BEC 8001FFEC ADE80000 */        sw $t0, ($t7) # D_8009D988 + 0
  /* 020BF0 8001FFF0 0C007D30 */       jal func_8001F4C0
  /* 020BF4 8001FFF4 ADF90004 */        sw $t9, 4($t7) # D_8009D988 + 4
  /* 020BF8 8001FFF8 0C007E80 */       jal func_8001FA00
  /* 020BFC 8001FFFC 00000000 */       nop 
glabel func_80020000
  /* 020C00 80020000 3C0B800A */       lui $t3, %hi(D_8009D988)
  /* 020C04 80020004 256BD988 */     addiu $t3, $t3, %lo(D_8009D988)
  /* 020C08 80020008 3C0A8004 */       lui $t2, %hi(D_8003CB3C)
  /* 020C0C 8002000C 254ACB3C */     addiu $t2, $t2, %lo(D_8003CB3C)
  /* 020C10 80020010 256E0060 */     addiu $t6, $t3, 0x60
  .L80020014:
  /* 020C14 80020014 8D6D0000 */        lw $t5, ($t3) # D_8009D988 + 0
  /* 020C18 80020018 256B000C */     addiu $t3, $t3, 0xc
  /* 020C1C 8002001C 254A000C */     addiu $t2, $t2, 0xc
  /* 020C20 80020020 AD4DFFF4 */        sw $t5, -0xc($t2) # D_8003CB3C + -12
  /* 020C24 80020024 8D6CFFF8 */        lw $t4, -8($t3) # D_8009D988 + -8
  /* 020C28 80020028 AD4CFFF8 */        sw $t4, -8($t2) # D_8003CB3C + -8
  /* 020C2C 8002002C 8D6DFFFC */        lw $t5, -4($t3) # D_8009D988 + -4
  /* 020C30 80020030 156EFFF8 */       bne $t3, $t6, .L80020014
  /* 020C34 80020034 AD4DFFFC */        sw $t5, -4($t2) # D_8003CB3C + -4
  /* 020C38 80020038 8D6D0000 */        lw $t5, ($t3) # D_8009D988 + 0
  /* 020C3C 8002003C 8D6C0004 */        lw $t4, 4($t3) # D_8009D988 + 4
  /* 020C40 80020040 3C048004 */       lui $a0, %hi(gThreadingQueue)
  /* 020C44 80020044 24844D48 */     addiu $a0, $a0, %lo(gThreadingQueue)
  /* 020C48 80020048 24050001 */     addiu $a1, $zero, 1
  /* 020C4C 8002004C 00003025 */        or $a2, $zero, $zero
  /* 020C50 80020050 AD4D0000 */        sw $t5, ($t2) # D_8003CB3C + 0
  /* 020C54 80020054 0C00C000 */       jal osSendMesg
  /* 020C58 80020058 AD4C0004 */        sw $t4, 4($t2) # D_8003CB3C + 4
  /* 020C5C 8002005C 3C0146F0 */       lui $at, (0x46F00000 >> 16) # 30720.0
  /* 020C60 80020060 3C1E800A */       lui $fp, %hi(D_8009D940)
  /* 020C64 80020064 3C17800A */       lui $s7, %hi(D_8009D960)
  /* 020C68 80020068 3C16800A */       lui $s6, %hi(D_8009D970)
  /* 020C6C 8002006C 3C14800A */       lui $s4, %hi(D_8009D968)
  /* 020C70 80020070 4481B000 */      mtc1 $at, $f22 # 30720.0 to cop1
  /* 020C74 80020074 4480A000 */      mtc1 $zero, $f20
  /* 020C78 80020078 2694D968 */     addiu $s4, $s4, %lo(D_8009D968)
  /* 020C7C 8002007C 26D6D970 */     addiu $s6, $s6, %lo(D_8009D970)
  /* 020C80 80020080 26F7D960 */     addiu $s7, $s7, %lo(D_8009D960)
  /* 020C84 80020084 27DED940 */     addiu $fp, $fp, %lo(D_8009D940)
  /* 020C88 80020088 24150001 */     addiu $s5, $zero, 1
  .L8002008C:
  /* 020C8C 8002008C 0C00CD24 */       jal osGetCount
  /* 020C90 80020090 00000000 */       nop 
  /* 020C94 80020094 3C048004 */       lui $a0, %hi(D_8003CB30)
  /* 020C98 80020098 8C84CB30 */        lw $a0, %lo(D_8003CB30)($a0)
  /* 020C9C 8002009C 3C09800A */       lui $t1, %hi(D_8009D948)
  /* 020CA0 800200A0 3C18800A */       lui $t8, %hi(D_8009D938)
  /* 020CA4 800200A4 30920001 */      andi $s2, $a0, 1
  /* 020CA8 800200A8 00128880 */       sll $s1, $s2, 2
  /* 020CAC 800200AC 01314821 */      addu $t1, $t1, $s1
  /* 020CB0 800200B0 2718D938 */     addiu $t8, $t8, %lo(D_8009D938)
  /* 020CB4 800200B4 8D29D948 */        lw $t1, %lo(D_8009D948)($t1)
  /* 020CB8 800200B8 02388021 */      addu $s0, $s1, $t8
  /* 020CBC 800200BC 8E0F0000 */        lw $t7, ($s0)
  /* 020CC0 800200C0 3C01800A */       lui $at, %hi(D_8009D934)
  /* 020CC4 800200C4 AFC90000 */        sw $t1, ($fp) # D_8009D940 + 0
  /* 020CC8 800200C8 AC2FD934 */        sw $t7, %lo(D_8009D934)($at)
  /* 020CCC 800200CC 24010003 */     addiu $at, $zero, 3
  /* 020CD0 800200D0 0081001A */       div $zero, $a0, $at
  /* 020CD4 800200D4 8FB90078 */        lw $t9, 0x78($sp)
  /* 020CD8 800200D8 00009810 */      mfhi $s3
  /* 020CDC 800200DC AFA20074 */        sw $v0, 0x74($sp)
  /* 020CE0 800200E0 2B210171 */      slti $at, $t9, 0x171
  /* 020CE4 800200E4 14200004 */      bnez $at, .L800200F8
  /* 020CE8 800200E8 93A80073 */       lbu $t0, 0x73($sp)
  /* 020CEC 800200EC 24010002 */     addiu $at, $zero, 2
  /* 020CF0 800200F0 15010008 */       bne $t0, $at, .L80020114
  /* 020CF4 800200F4 00000000 */       nop 
  .L800200F8:
  /* 020CF8 800200F8 8FAE0078 */        lw $t6, 0x78($sp)
  /* 020CFC 800200FC 93AB0073 */       lbu $t3, 0x73($sp)
  /* 020D00 80020100 0013C040 */       sll $t8, $s3, 1
  /* 020D04 80020104 29C100B9 */      slti $at, $t6, 0xb9
  /* 020D08 80020108 1420000C */      bnez $at, .L8002013C
  /* 020D0C 8002010C 3C0F8004 */       lui $t7, %hi(D_8003CB34)
  /* 020D10 80020110 1560000A */      bnez $t3, .L8002013C
  .L80020114:
  /* 020D14 80020114 3C0C8004 */       lui $t4, %hi(D_8003CB34)
  /* 020D18 80020118 3C0D800A */       lui $t5, %hi(D_8009D920)
  /* 020D1C 8002011C 8DADD920 */        lw $t5, %lo(D_8009D920)($t5)
  /* 020D20 80020120 258CCB34 */     addiu $t4, $t4, %lo(D_8003CB34)
  /* 020D24 80020124 00135040 */       sll $t2, $s3, 1
  /* 020D28 80020128 014C8821 */      addu $s1, $t2, $t4
  /* 020D2C 8002012C 24090002 */     addiu $t1, $zero, 2
  /* 020D30 80020130 A3A90073 */        sb $t1, 0x73($sp)
  /* 020D34 80020134 1000000A */         b .L80020160
  /* 020D38 80020138 A62D0000 */        sh $t5, ($s1)
  .L8002013C:
  /* 020D3C 8002013C 93A80073 */       lbu $t0, 0x73($sp)
  /* 020D40 80020140 3C19800A */       lui $t9, %hi(D_8009D91C)
  /* 020D44 80020144 8F39D91C */        lw $t9, %lo(D_8009D91C)($t9)
  /* 020D48 80020148 25EFCB34 */     addiu $t7, $t7, %lo(D_8003CB34)
  /* 020D4C 8002014C 030F8821 */      addu $s1, $t8, $t7
  /* 020D50 80020150 11000003 */      beqz $t0, .L80020160
  /* 020D54 80020154 A6390000 */        sh $t9, ($s1)
  /* 020D58 80020158 250EFFFF */     addiu $t6, $t0, -1
  /* 020D5C 8002015C A3AE0073 */        sb $t6, 0x73($sp)
  .L80020160:
  /* 020D60 80020160 0C00D354 */       jal osGetTime
  /* 020D64 80020164 00000000 */       nop 
  /* 020D68 80020168 00135880 */       sll $t3, $s3, 2
  /* 020D6C 8002016C 3C04800A */       lui $a0, %hi(D_8009D928)
  /* 020D70 80020170 3C01800A */       lui $at, %hi(D_8009D9F4)
  /* 020D74 80020174 008B2021 */      addu $a0, $a0, $t3
  /* 020D78 80020178 AC22D9F0 */        sw $v0, %lo(D_8009D9F0)($at)
  /* 020D7C 8002017C AC23D9F4 */        sw $v1, %lo(D_8009D9F4)($at)
  /* 020D80 80020180 0C00C854 */       jal osVirtualToPhysical
  /* 020D84 80020184 8C84D928 */        lw $a0, %lo(D_8009D928)($a0)
  /* 020D88 80020188 3C04800A */       lui $a0, %hi(D_8009D934)
  /* 020D8C 8002018C 8C84D934 */        lw $a0, %lo(D_8009D934)($a0)
  /* 020D90 80020190 27A50080 */     addiu $a1, $sp, 0x80
  /* 020D94 80020194 00403025 */        or $a2, $v0, $zero
  /* 020D98 80020198 0C00B1C2 */       jal func_8002C708
  /* 020D9C 8002019C 86270000 */        lh $a3, ($s1)
  /* 020DA0 800201A0 3C01800A */       lui $at, %hi(D_8009D934)
  /* 020DA4 800201A4 AC22D934 */        sw $v0, %lo(D_8009D934)($at)
  /* 020DA8 800201A8 8FCC0000 */        lw $t4, ($fp) # D_8009D940 + 0
  /* 020DAC 800201AC 240A0002 */     addiu $t2, $zero, 2
  /* 020DB0 800201B0 240D0050 */     addiu $t5, $zero, 0x50
  /* 020DB4 800201B4 AD8A0000 */        sw $t2, ($t4)
  /* 020DB8 800201B8 8FC90000 */        lw $t1, ($fp) # D_8009D940 + 0
  /* 020DBC 800201BC 3C08800A */       lui $t0, %hi(D_8009D310)
  /* 020DC0 800201C0 2508D310 */     addiu $t0, $t0, %lo(D_8009D310)
  /* 020DC4 800201C4 AD2D0004 */        sw $t5, 4($t1)
  /* 020DC8 800201C8 8FD80000 */        lw $t8, ($fp) # D_8009D940 + 0
  /* 020DCC 800201CC 240B0002 */     addiu $t3, $zero, 2
  /* 020DD0 800201D0 AF000014 */        sw $zero, 0x14($t8)
  /* 020DD4 800201D4 8FCF0000 */        lw $t7, ($fp) # D_8009D940 + 0
  /* 020DD8 800201D8 3C18800A */       lui $t8, %hi(D_8009D934)
  /* 020DDC 800201DC ADF50018 */        sw $s5, 0x18($t7)
  /* 020DE0 800201E0 8FD90000 */        lw $t9, ($fp) # D_8009D940 + 0
  /* 020DE4 800201E4 AF20001C */        sw $zero, 0x1c($t9)
  /* 020DE8 800201E8 8FCE0000 */        lw $t6, ($fp) # D_8009D940 + 0
  /* 020DEC 800201EC ADC80020 */        sw $t0, 0x20($t6)
  /* 020DF0 800201F0 8FCA0000 */        lw $t2, ($fp) # D_8009D940 + 0
  /* 020DF4 800201F4 AD4B0028 */        sw $t3, 0x28($t2)
  /* 020DF8 800201F8 8FCC0000 */        lw $t4, ($fp) # D_8009D940 + 0
  /* 020DFC 800201FC 3C0A8004 */       lui $t2, %hi(gRspBootCode)
  /* 020E00 80020200 254A4C40 */     addiu $t2, $t2, %lo(gRspBootCode)
  /* 020E04 80020204 AD80002C */        sw $zero, 0x2c($t4)
  /* 020E08 80020208 8FC90000 */        lw $t1, ($fp) # D_8009D940 + 0
  /* 020E0C 8002020C 8E0D0000 */        lw $t5, ($s0)
  /* 020E10 80020210 AD2D0058 */        sw $t5, 0x58($t1)
  /* 020E14 80020214 8E0F0000 */        lw $t7, ($s0)
  /* 020E18 80020218 8F18D934 */        lw $t8, %lo(D_8009D934)($t8)
  /* 020E1C 8002021C 8FCB0000 */        lw $t3, ($fp) # D_8009D940 + 0
  /* 020E20 80020220 240D0100 */     addiu $t5, $zero, 0x100
  /* 020E24 80020224 030FC823 */      subu $t9, $t8, $t7
  /* 020E28 80020228 001940C3 */       sra $t0, $t9, 3
  /* 020E2C 8002022C 000870C0 */       sll $t6, $t0, 3
  /* 020E30 80020230 AD6E005C */        sw $t6, 0x5c($t3)
  /* 020E34 80020234 8FCC0000 */        lw $t4, ($fp) # D_8009D940 + 0
  /* 020E38 80020238 3C188004 */       lui $t8, %hi(D_800396C0)
  /* 020E3C 8002023C 271896C0 */     addiu $t8, $t8, %lo(D_800396C0)
  /* 020E40 80020240 AD8A0030 */        sw $t2, 0x30($t4)
  /* 020E44 80020244 8FC90000 */        lw $t1, ($fp) # D_8009D940 + 0
  /* 020E48 80020248 24191000 */     addiu $t9, $zero, 0x1000
  /* 020E4C 8002024C 3C0E8004 */       lui $t6, %hi(D_8003F400)
  /* 020E50 80020250 AD2D0034 */        sw $t5, 0x34($t1)
  /* 020E54 80020254 8FCF0000 */        lw $t7, ($fp) # D_8009D940 + 0
  /* 020E58 80020258 25CEF400 */     addiu $t6, $t6, %lo(D_8003F400)
  /* 020E5C 8002025C 240A0800 */     addiu $t2, $zero, 0x800
  /* 020E60 80020260 ADF80038 */        sw $t8, 0x38($t7)
  /* 020E64 80020264 8FC80000 */        lw $t0, ($fp) # D_8009D940 + 0
  /* 020E68 80020268 AD19003C */        sw $t9, 0x3c($t0)
  /* 020E6C 8002026C 8FCB0000 */        lw $t3, ($fp) # D_8009D940 + 0
  /* 020E70 80020270 AD6E0040 */        sw $t6, 0x40($t3)
  /* 020E74 80020274 8FCC0000 */        lw $t4, ($fp) # D_8009D940 + 0
  /* 020E78 80020278 AD8A0044 */        sw $t2, 0x44($t4)
  /* 020E7C 8002027C 8FCD0000 */        lw $t5, ($fp) # D_8009D940 + 0
  /* 020E80 80020280 ADA00048 */        sw $zero, 0x48($t5)
  /* 020E84 80020284 8FC90000 */        lw $t1, ($fp) # D_8009D940 + 0
  /* 020E88 80020288 AD20004C */        sw $zero, 0x4c($t1)
  /* 020E8C 8002028C 8FD80000 */        lw $t8, ($fp) # D_8009D940 + 0
  /* 020E90 80020290 AF000060 */        sw $zero, 0x60($t8)
  /* 020E94 80020294 8FCF0000 */        lw $t7, ($fp) # D_8009D940 + 0
  /* 020E98 80020298 ADE00064 */        sw $zero, 0x64($t7)
  /* 020E9C 8002029C 8FD90000 */        lw $t9, ($fp) # D_8009D940 + 0
  /* 020EA0 800202A0 AF200050 */        sw $zero, 0x50($t9)
  /* 020EA4 800202A4 8FC80000 */        lw $t0, ($fp) # D_8009D940 + 0
  /* 020EA8 800202A8 0C00CD24 */       jal osGetCount
  /* 020EAC 800202AC AD000054 */        sw $zero, 0x54($t0)
  /* 020EB0 800202B0 8FAE0074 */        lw $t6, 0x74($sp)
  /* 020EB4 800202B4 24010B9B */     addiu $at, $zero, 0xb9b
  /* 020EB8 800202B8 3C04800A */       lui $a0, %hi(D_8009D2F8)
  /* 020EBC 800202BC 004E5823 */      subu $t3, $v0, $t6
  /* 020EC0 800202C0 0161001B */      divu $zero, $t3, $at
  /* 020EC4 800202C4 00005012 */      mflo $t2
  /* 020EC8 800202C8 3C01800A */       lui $at, %hi(D_8009D2D0)
  /* 020ECC 800202CC AC2AD2D0 */        sw $t2, %lo(D_8009D2D0)($at)
  /* 020ED0 800202D0 2484D2F8 */     addiu $a0, $a0, %lo(D_8009D2F8)
  /* 020ED4 800202D4 00002825 */        or $a1, $zero, $zero
  /* 020ED8 800202D8 0C00C084 */       jal osRecvMesg
  /* 020EDC 800202DC 02A03025 */        or $a2, $s5, $zero
  /* 020EE0 800202E0 3C0CA450 */       lui $t4, %hi(AI_LEN_REG)
  /* 020EE4 800202E4 8D8D0004 */        lw $t5, %lo(AI_LEN_REG)($t4)
  /* 020EE8 800202E8 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 020EEC 800202EC 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 020EF0 800202F0 000D4882 */       srl $t1, $t5, 2
  /* 020EF4 800202F4 AFA90078 */        sw $t1, 0x78($sp)
  /* 020EF8 800202F8 00002825 */        or $a1, $zero, $zero
  /* 020EFC 800202FC 0C00C084 */       jal osRecvMesg
  /* 020F00 80020300 02A03025 */        or $a2, $s5, $zero
  /* 020F04 80020304 3C138004 */       lui $s3, %hi(D_8003CB30)
  /* 020F08 80020308 8E73CB30 */        lw $s3, %lo(D_8003CB30)($s3)
  /* 020F0C 8002030C 24010003 */     addiu $at, $zero, 3
  /* 020F10 80020310 3C188004 */       lui $t8, %hi(D_8003CB24)
  /* 020F14 80020314 2673FFFF */     addiu $s3, $s3, -1
  /* 020F18 80020318 0261001A */       div $zero, $s3, $at
  /* 020F1C 8002031C 8F18CB24 */        lw $t8, %lo(D_8003CB24)($t8)
  /* 020F20 80020320 00009810 */      mfhi $s3
  /* 020F24 80020324 00137840 */       sll $t7, $s3, 1
  /* 020F28 80020328 17000022 */      bnez $t8, .L800203B4
  /* 020F2C 8002032C 3C198004 */       lui $t9, %hi(D_8003CB34)
  /* 020F30 80020330 2739CB34 */     addiu $t9, $t9, %lo(D_8003CB34)
  /* 020F34 80020334 01F98821 */      addu $s1, $t7, $t9
  /* 020F38 80020338 86280000 */        lh $t0, ($s1)
  /* 020F3C 8002033C 00009025 */        or $s2, $zero, $zero
  /* 020F40 80020340 00135880 */       sll $t3, $s3, 2
  /* 020F44 80020344 00087040 */       sll $t6, $t0, 1
  /* 020F48 80020348 19C0001A */      blez $t6, .L800203B4
  /* 020F4C 8002034C 3C0A800A */       lui $t2, %hi(D_8009D928)
  /* 020F50 80020350 254AD928 */     addiu $t2, $t2, %lo(D_8009D928)
  /* 020F54 80020354 016A8021 */      addu $s0, $t3, $t2
  /* 020F58 80020358 00001825 */        or $v1, $zero, $zero
  /* 020F5C 8002035C 8E0C0000 */        lw $t4, ($s0)
  .L80020360:
  /* 020F60 80020360 26520002 */     addiu $s2, $s2, 2
  /* 020F64 80020364 01831021 */      addu $v0, $t4, $v1
  /* 020F68 80020368 844D0002 */        lh $t5, 2($v0)
  /* 020F6C 8002036C 84490000 */        lh $t1, ($v0)
  /* 020F70 80020370 01A9C021 */      addu $t8, $t5, $t1
  /* 020F74 80020374 07010003 */      bgez $t8, .L80020384
  /* 020F78 80020378 00187843 */       sra $t7, $t8, 1
  /* 020F7C 8002037C 27010001 */     addiu $at, $t8, 1
  /* 020F80 80020380 00017843 */       sra $t7, $at, 1
  .L80020384:
  /* 020F84 80020384 AFAF0080 */        sw $t7, 0x80($sp)
  /* 020F88 80020388 A44F0000 */        sh $t7, ($v0)
  /* 020F8C 8002038C 8E080000 */        lw $t0, ($s0)
  /* 020F90 80020390 8FB90080 */        lw $t9, 0x80($sp)
  /* 020F94 80020394 01037021 */      addu $t6, $t0, $v1
  /* 020F98 80020398 A5D90002 */        sh $t9, 2($t6)
  /* 020F9C 8002039C 862B0000 */        lh $t3, ($s1)
  /* 020FA0 800203A0 24630004 */     addiu $v1, $v1, 4
  /* 020FA4 800203A4 000B5040 */       sll $t2, $t3, 1
  /* 020FA8 800203A8 024A082A */       slt $at, $s2, $t2
  /* 020FAC 800203AC 5420FFEC */      bnel $at, $zero, .L80020360
  /* 020FB0 800203B0 8E0C0000 */        lw $t4, ($s0)
  .L800203B4:
  /* 020FB4 800203B4 3C0D8004 */       lui $t5, %hi(D_8003CB34)
  /* 020FB8 800203B8 3C18800A */       lui $t8, %hi(D_8009D928)
  /* 020FBC 800203BC 2718D928 */     addiu $t8, $t8, %lo(D_8009D928)
  /* 020FC0 800203C0 25ADCB34 */     addiu $t5, $t5, %lo(D_8003CB34)
  /* 020FC4 800203C4 00136040 */       sll $t4, $s3, 1
  /* 020FC8 800203C8 00134880 */       sll $t1, $s3, 2
  /* 020FCC 800203CC 01388021 */      addu $s0, $t1, $t8
  /* 020FD0 800203D0 018D8821 */      addu $s1, $t4, $t5
  /* 020FD4 800203D4 0C00E458 */       jal osWritebackDCacheAll
  /* 020FD8 800203D8 00009025 */        or $s2, $zero, $zero
  /* 020FDC 800203DC 86250000 */        lh $a1, ($s1)
  /* 020FE0 800203E0 8E040000 */        lw $a0, ($s0)
  /* 020FE4 800203E4 0C00E554 */       jal osAiSetNextBuffer
  /* 020FE8 800203E8 00052880 */       sll $a1, $a1, 2
  /* 020FEC 800203EC 3C0F8004 */       lui $t7, %hi(D_8003CB20)
  /* 020FF0 800203F0 8DEFCB20 */        lw $t7, %lo(D_8003CB20)($t7)
  /* 020FF4 800203F4 19E0000C */      blez $t7, .L80020428
  .L800203F8:
  /* 020FF8 800203F8 3C04800A */       lui $a0, %hi(D_8009D328)
  /* 020FFC 800203FC 2484D328 */     addiu $a0, $a0, %lo(D_8009D328)
  /* 021000 80020400 00002825 */        or $a1, $zero, $zero
  /* 021004 80020404 0C00C084 */       jal osRecvMesg
  /* 021008 80020408 00003025 */        or $a2, $zero, $zero
  /* 02100C 8002040C 3C088004 */       lui $t0, %hi(D_8003CB20)
  /* 021010 80020410 8D08CB20 */        lw $t0, %lo(D_8003CB20)($t0)
  /* 021014 80020414 26520001 */     addiu $s2, $s2, 1
  /* 021018 80020418 0248082A */       slt $at, $s2, $t0
  /* 02101C 8002041C 1420FFF6 */      bnez $at, .L800203F8
  /* 021020 80020420 00000000 */       nop 
  /* 021024 80020424 00009025 */        or $s2, $zero, $zero
  .L80020428:
  /* 021028 80020428 0C00E458 */       jal osWritebackDCacheAll
  /* 02102C 8002042C 00000000 */       nop 
  /* 021030 80020430 3C048004 */       lui $a0, %hi(gScheduleTaskQueue)
  /* 021034 80020434 24844FF8 */     addiu $a0, $a0, %lo(gScheduleTaskQueue)
  /* 021038 80020438 8FC50000 */        lw $a1, ($fp) # D_8009D940 + 0
  /* 02103C 8002043C 0C00C000 */       jal osSendMesg
  /* 021040 80020440 00003025 */        or $a2, $zero, $zero
  /* 021044 80020444 3C198004 */       lui $t9, %hi(D_8003CB30)
  /* 021048 80020448 8F39CB30 */        lw $t9, %lo(D_8003CB30)($t9)
  /* 02104C 8002044C 3C04800A */       lui $a0, %hi(D_8009D9BB)
  /* 021050 80020450 9084D9BB */       lbu $a0, %lo(D_8009D9BB)($a0)
  /* 021054 80020454 3C018004 */       lui $at, %hi(D_8003CB30)
  /* 021058 80020458 272E0001 */     addiu $t6, $t9, 1
  /* 02105C 8002045C AC2ECB30 */        sw $t6, %lo(D_8003CB30)($at)
  /* 021060 80020460 3C018004 */       lui $at, %hi(D_8003CB20)
  /* 021064 80020464 18800013 */      blez $a0, .L800204B4
  /* 021068 80020468 AC20CB20 */        sw $zero, %lo(D_8003CB20)($at)
  /* 02106C 8002046C 00008825 */        or $s1, $zero, $zero
  .L80020470:
  /* 021070 80020470 3C0B800A */       lui $t3, %hi(D_8009D954)
  /* 021074 80020474 8D6BD954 */        lw $t3, %lo(D_8009D954)($t3)
  /* 021078 80020478 26520001 */     addiu $s2, $s2, 1
  /* 02107C 8002047C 01711021 */      addu $v0, $t3, $s1
  /* 021080 80020480 8C430000 */        lw $v1, ($v0)
  /* 021084 80020484 50600008 */      beql $v1, $zero, .L800204A8
  /* 021088 80020488 0244082A */       slt $at, $s2, $a0
  /* 02108C 8002048C 946A0010 */       lhu $t2, 0x10($v1)
  /* 021090 80020490 55400005 */      bnel $t2, $zero, .L800204A8
  /* 021094 80020494 0244082A */       slt $at, $s2, $a0
  /* 021098 80020498 AC400000 */        sw $zero, ($v0)
  /* 02109C 8002049C 3C04800A */       lui $a0, %hi(D_8009D9BB)
  /* 0210A0 800204A0 9084D9BB */       lbu $a0, %lo(D_8009D9BB)($a0)
  /* 0210A4 800204A4 0244082A */       slt $at, $s2, $a0
  .L800204A8:
  /* 0210A8 800204A8 1420FFF1 */      bnez $at, .L80020470
  /* 0210AC 800204AC 26310004 */     addiu $s1, $s1, 4
  /* 0210B0 800204B0 00009025 */        or $s2, $zero, $zero
  .L800204B4:
  /* 0210B4 800204B4 8ECC0000 */        lw $t4, ($s6) # D_8009D970 + 0
  .L800204B8:
  /* 0210B8 800204B8 00128880 */       sll $s1, $s2, 2
  /* 0210BC 800204BC 24010002 */     addiu $at, $zero, 2
  /* 0210C0 800204C0 01921021 */      addu $v0, $t4, $s2
  /* 0210C4 800204C4 90440000 */       lbu $a0, ($v0)
  /* 0210C8 800204C8 02F16821 */      addu $t5, $s7, $s1
  /* 0210CC 800204CC 10950008 */       beq $a0, $s5, .L800204F0
  /* 0210D0 800204D0 00801825 */        or $v1, $a0, $zero
  /* 0210D4 800204D4 10610026 */       beq $v1, $at, .L80020570
  /* 0210D8 800204D8 00128880 */       sll $s1, $s2, 2
  /* 0210DC 800204DC 24010003 */     addiu $at, $zero, 3
  /* 0210E0 800204E0 10610043 */       beq $v1, $at, .L800205F0
  /* 0210E4 800204E4 00128880 */       sll $s1, $s2, 2
  /* 0210E8 800204E8 1000004D */         b .L80020620
  /* 0210EC 800204EC 26520001 */     addiu $s2, $s2, 1
  .L800204F0:
  /* 0210F0 800204F0 8DA50000 */        lw $a1, ($t5)
  /* 0210F4 800204F4 3C18800A */       lui $t8, 0x800a
  /* 0210F8 800204F8 8CA90034 */        lw $t1, 0x34($a1)
  /* 0210FC 800204FC 11200005 */      beqz $t1, .L80020514
  /* 021100 80020500 00000000 */       nop 
  /* 021104 80020504 0C00BFA4 */       jal func_8002FE90
  /* 021108 80020508 00A02025 */        or $a0, $a1, $zero
  /* 02110C 8002050C 10000044 */         b .L80020620
  /* 021110 80020510 26520001 */     addiu $s2, $s2, 1
  .L80020514:
  /* 021114 80020514 8F18D974 */        lw $t8, -0x268c($t8)
  /* 021118 80020518 2488FFFF */     addiu $t0, $a0, -1
  /* 02111C 8002051C 3C19800A */       lui $t9, %hi(D_8009D95C)
  /* 021120 80020520 03117821 */      addu $t7, $t8, $s1
  /* 021124 80020524 8DE30000 */        lw $v1, ($t7)
  /* 021128 80020528 3C05800A */       lui $a1, %hi(D_8009D96C)
  /* 02112C 8002052C 04610003 */      bgez $v1, .L8002053C
  /* 021130 80020530 000370C0 */       sll $t6, $v1, 3
  /* 021134 80020534 10000039 */         b .L8002061C
  /* 021138 80020538 A0480000 */        sb $t0, ($v0)
  .L8002053C:
  /* 02113C 8002053C 8F39D95C */        lw $t9, %lo(D_8009D95C)($t9)
  /* 021140 80020540 00B12821 */      addu $a1, $a1, $s1
  /* 021144 80020544 8CA5D96C */        lw $a1, %lo(D_8009D96C)($a1)
  /* 021148 80020548 032E1021 */      addu $v0, $t9, $t6
  /* 02114C 8002054C 8C440004 */        lw $a0, 4($v0)
  /* 021150 80020550 0C007A47 */       jal func_8001E91C
  /* 021154 80020554 8C460008 */        lw $a2, 8($v0)
  /* 021158 80020558 8ECB0000 */        lw $t3, ($s6) # D_8009D970 + 0
  /* 02115C 8002055C 01721021 */      addu $v0, $t3, $s2
  /* 021160 80020560 904A0000 */       lbu $t2, ($v0)
  /* 021164 80020564 254C0001 */     addiu $t4, $t2, 1
  /* 021168 80020568 1000002C */         b .L8002061C
  /* 02116C 8002056C A04C0000 */        sb $t4, ($v0)
  .L80020570:
  /* 021170 80020570 3C0D800A */       lui $t5, %hi(D_8009D964)
  /* 021174 80020574 25ADD964 */     addiu $t5, $t5, %lo(D_8009D964)
  /* 021178 80020578 3C05800A */       lui $a1, %hi(D_8009D96C)
  /* 02117C 8002057C 00B12821 */      addu $a1, $a1, $s1
  /* 021180 80020580 022D9821 */      addu $s3, $s1, $t5
  /* 021184 80020584 8E640000 */        lw $a0, ($s3)
  /* 021188 80020588 8CA5D96C */        lw $a1, %lo(D_8009D96C)($a1)
  /* 02118C 8002058C 0C00A221 */       jal func_80028884
  /* 021190 80020590 02F18021 */      addu $s0, $s7, $s1
  /* 021194 80020594 8E040000 */        lw $a0, ($s0)
  /* 021198 80020598 0C00BE9C */       jal func_8002FA70
  /* 02119C 8002059C 8E650000 */        lw $a1, ($s3)
  /* 0211A0 800205A0 0C00BF6C */       jal func_8002FDB0
  /* 0211A4 800205A4 8E040000 */        lw $a0, ($s0)
  /* 0211A8 800205A8 00001825 */        or $v1, $zero, $zero
  /* 0211AC 800205AC 8E040000 */        lw $a0, ($s0)
  .L800205B0:
  /* 0211B0 800205B0 306500FF */      andi $a1, $v1, 0xff
  /* 0211B4 800205B4 92860000 */       lbu $a2, ($s4) # D_8009D968 + 0
  /* 0211B8 800205B8 0C0097F0 */       jal alSeqpSetChlPriority
  /* 0211BC 800205BC AFA30080 */        sw $v1, 0x80($sp)
  /* 0211C0 800205C0 8FA30080 */        lw $v1, 0x80($sp)
  /* 0211C4 800205C4 24630001 */     addiu $v1, $v1, 1
  /* 0211C8 800205C8 28610010 */      slti $at, $v1, 0x10
  /* 0211CC 800205CC 5420FFF8 */      bnel $at, $zero, .L800205B0
  /* 0211D0 800205D0 8E040000 */        lw $a0, ($s0)
  /* 0211D4 800205D4 8EC90000 */        lw $t1, ($s6) # D_8009D970 + 0
  /* 0211D8 800205D8 AFA30080 */        sw $v1, 0x80($sp)
  /* 0211DC 800205DC 01321021 */      addu $v0, $t1, $s2
  /* 0211E0 800205E0 90580000 */       lbu $t8, ($v0)
  /* 0211E4 800205E4 270F0001 */     addiu $t7, $t8, 1
  /* 0211E8 800205E8 1000000C */         b .L8002061C
  /* 0211EC 800205EC A04F0000 */        sb $t7, ($v0)
  .L800205F0:
  /* 0211F0 800205F0 02F14021 */      addu $t0, $s7, $s1
  /* 0211F4 800205F4 8D190000 */        lw $t9, ($t0)
  /* 0211F8 800205F8 3C0A800A */       lui $t2, %hi(D_8009D974)
  /* 0211FC 800205FC 8F2E0034 */        lw $t6, 0x34($t9)
  /* 021200 80020600 55C00007 */      bnel $t6, $zero, .L80020620
  /* 021204 80020604 26520001 */     addiu $s2, $s2, 1
  /* 021208 80020608 A0400000 */        sb $zero, ($v0)
  /* 02120C 8002060C 8D4AD974 */        lw $t2, %lo(D_8009D974)($t2)
  /* 021210 80020610 240BFFFF */     addiu $t3, $zero, -1
  /* 021214 80020614 01516021 */      addu $t4, $t2, $s1
  /* 021218 80020618 AD8B0000 */        sw $t3, ($t4)
  .L8002061C:
  /* 02121C 8002061C 26520001 */     addiu $s2, $s2, 1
  .L80020620:
  /* 021220 80020620 5A40FFA5 */     blezl $s2, .L800204B8
  /* 021224 80020624 8ECC0000 */        lw $t4, ($s6) # D_8009D970 + 0
  /* 021228 80020628 3C10800A */       lui $s0, %hi(D_8009D978)
  /* 02122C 8002062C 2610D978 */     addiu $s0, $s0, %lo(D_8009D978)
  /* 021230 80020630 00008825 */        or $s1, $zero, $zero
  .L80020634:
  /* 021234 80020634 8E030000 */        lw $v1, ($s0) # D_8009D978 + 0
  /* 021238 80020638 3C09800A */       lui $t1, %hi(D_8009D97C)
  /* 02123C 8002063C 2529D97C */     addiu $t1, $t1, %lo(D_8009D97C)
  /* 021240 80020640 1060001F */      beqz $v1, .L800206C0
  /* 021244 80020644 246DFFFF */     addiu $t5, $v1, -1
  /* 021248 80020648 3C01800A */       lui $at, %hi(D_8009D980)
  /* 02124C 8002064C AE0D0000 */        sw $t5, ($s0) # D_8009D978 + 0
  /* 021250 80020650 00310821 */      addu $at, $at, $s1
  /* 021254 80020654 02291021 */      addu $v0, $s1, $t1
  /* 021258 80020658 C4440000 */      lwc1 $f4, ($v0)
  /* 02125C 8002065C C426D980 */      lwc1 $f6, %lo(D_8009D980)($at)
  /* 021260 80020660 46062200 */     add.s $f8, $f4, $f6
  /* 021264 80020664 E4480000 */      swc1 $f8, ($v0)
  /* 021268 80020668 C4400000 */      lwc1 $f0, ($v0)
  /* 02126C 8002066C 4614003C */    c.lt.s $f0, $f20
  /* 021270 80020670 00000000 */       nop 
  /* 021274 80020674 45020005 */     bc1fl .L8002068C
  /* 021278 80020678 4600B03C */    c.lt.s $f22, $f0
  /* 02127C 8002067C E4540000 */      swc1 $f20, ($v0)
  /* 021280 80020680 10000007 */         b .L800206A0
  /* 021284 80020684 C4400000 */      lwc1 $f0, ($v0)
  /* 021288 80020688 4600B03C */    c.lt.s $f22, $f0
  .L8002068C:
  /* 02128C 8002068C 00000000 */       nop 
  /* 021290 80020690 45020004 */     bc1fl .L800206A4
  /* 021294 80020694 4600028D */ trunc.w.s $f10, $f0
  /* 021298 80020698 E4560000 */      swc1 $f22, ($v0)
  /* 02129C 8002069C C4400000 */      lwc1 $f0, ($v0)
  .L800206A0:
  /* 0212A0 800206A0 4600028D */ trunc.w.s $f10, $f0
  .L800206A4:
  /* 0212A4 800206A4 02F1C021 */      addu $t8, $s7, $s1
  /* 0212A8 800206A8 8F040000 */        lw $a0, ($t8)
  /* 0212AC 800206AC 44055000 */      mfc1 $a1, $f10
  /* 0212B0 800206B0 00000000 */       nop 
  /* 0212B4 800206B4 00052C00 */       sll $a1, $a1, 0x10
  /* 0212B8 800206B8 0C00BF04 */       jal func_8002FC10
  /* 0212BC 800206BC 00052C03 */       sra $a1, $a1, 0x10
  .L800206C0:
  /* 0212C0 800206C0 3C08800A */       lui $t0, %hi(D_8009D97C)
  /* 0212C4 800206C4 2508D97C */     addiu $t0, $t0, %lo(D_8009D97C)
  /* 0212C8 800206C8 26100004 */     addiu $s0, $s0, 4
  /* 0212CC 800206CC 0208082B */      sltu $at, $s0, $t0
  /* 0212D0 800206D0 1420FFD8 */      bnez $at, .L80020634
  /* 0212D4 800206D4 26310004 */     addiu $s1, $s1, 4
  /* 0212D8 800206D8 3C198004 */       lui $t9, %hi(D_8003CB1C)
  /* 0212DC 800206DC 8F39CB1C */        lw $t9, %lo(D_8003CB1C)($t9)
  /* 0212E0 800206E0 3C04800A */       lui $a0, %hi(D_8009D9BB)
  /* 0212E4 800206E4 13200062 */      beqz $t9, .L80020870
  /* 0212E8 800206E8 00000000 */       nop 
  /* 0212EC 800206EC 9084D9BB */       lbu $a0, %lo(D_8009D9BB)($a0)
  /* 0212F0 800206F0 00009025 */        or $s2, $zero, $zero
  /* 0212F4 800206F4 3C02800A */       lui $v0, %hi(D_8009D954)
  /* 0212F8 800206F8 1880000E */      blez $a0, .L80020734
  /* 0212FC 800206FC 24830001 */     addiu $v1, $a0, 1
  /* 021300 80020700 8C42D954 */        lw $v0, %lo(D_8009D954)($v0)
  /* 021304 80020704 AFA30080 */        sw $v1, 0x80($sp)
  .L80020708:
  /* 021308 80020708 8C4E0000 */        lw $t6, ($v0)
  /* 02130C 8002070C 26520001 */     addiu $s2, $s2, 1
  /* 021310 80020710 0244082A */       slt $at, $s2, $a0
  /* 021314 80020714 15C00004 */      bnez $t6, .L80020728
  /* 021318 80020718 24420004 */     addiu $v0, $v0, 4
  /* 02131C 8002071C 8FA30080 */        lw $v1, 0x80($sp)
  /* 021320 80020720 2463FFFF */     addiu $v1, $v1, -1
  /* 021324 80020724 AFA30080 */        sw $v1, 0x80($sp)
  .L80020728:
  /* 021328 80020728 1420FFF7 */      bnez $at, .L80020708
  /* 02132C 8002072C 8FA30080 */        lw $v1, 0x80($sp)
  /* 021330 80020730 00009025 */        or $s2, $zero, $zero
  .L80020734:
  /* 021334 80020734 8EC20000 */        lw $v0, ($s6) # D_8009D970 + 0
  /* 021338 80020738 AFA30080 */        sw $v1, 0x80($sp)
  .L8002073C:
  /* 02133C 8002073C 904A0000 */       lbu $t2, ($v0)
  /* 021340 80020740 26520001 */     addiu $s2, $s2, 1
  /* 021344 80020744 24420001 */     addiu $v0, $v0, 1
  /* 021348 80020748 15400003 */      bnez $t2, .L80020758
  /* 02134C 8002074C 8FA30080 */        lw $v1, 0x80($sp)
  /* 021350 80020750 2463FFFF */     addiu $v1, $v1, -1
  /* 021354 80020754 AFA30080 */        sw $v1, 0x80($sp)
  .L80020758:
  /* 021358 80020758 1655FFF8 */       bne $s2, $s5, .L8002073C
  /* 02135C 8002075C 8FA30080 */        lw $v1, 0x80($sp)
  /* 021360 80020760 1460003F */      bnez $v1, .L80020860
  /* 021364 80020764 AFA30080 */        sw $v1, 0x80($sp)
  /* 021368 80020768 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 02136C 8002076C 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 021370 80020770 00002825 */        or $a1, $zero, $zero
  /* 021374 80020774 0C00C084 */       jal osRecvMesg
  /* 021378 80020778 02A03025 */        or $a2, $s5, $zero
  /* 02137C 8002077C 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 021380 80020780 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 021384 80020784 00002825 */        or $a1, $zero, $zero
  /* 021388 80020788 0C00C000 */       jal osSendMesg
  /* 02138C 8002078C 02A03025 */        or $a2, $s5, $zero
  /* 021390 80020790 3C04800A */       lui $a0, %hi(D_8009D8C0)
  /* 021394 80020794 0C00B392 */       jal n_alClose
  /* 021398 80020798 2484D8C0 */     addiu $a0, $a0, %lo(D_8009D8C0)
  /* 02139C 8002079C 3C0C8004 */       lui $t4, %hi(D_8003CB3C)
  /* 0213A0 800207A0 258CCB3C */     addiu $t4, $t4, %lo(D_8003CB3C)
  /* 0213A4 800207A4 3C0B800A */       lui $t3, %hi(D_8009D988)
  /* 0213A8 800207A8 256BD988 */     addiu $t3, $t3, %lo(D_8009D988)
  /* 0213AC 800207AC 25980060 */     addiu $t8, $t4, 0x60
  .L800207B0:
  /* 0213B0 800207B0 8D890000 */        lw $t1, ($t4) # D_8003CB3C + 0
  /* 0213B4 800207B4 258C000C */     addiu $t4, $t4, 0xc
  /* 0213B8 800207B8 256B000C */     addiu $t3, $t3, 0xc
  /* 0213BC 800207BC AD69FFF4 */        sw $t1, -0xc($t3) # D_8009D988 + -12
  /* 0213C0 800207C0 8D8DFFF8 */        lw $t5, -8($t4) # D_8003CB3C + -8
  /* 0213C4 800207C4 AD6DFFF8 */        sw $t5, -8($t3) # D_8009D988 + -8
  /* 0213C8 800207C8 8D89FFFC */        lw $t1, -4($t4) # D_8003CB3C + -4
  /* 0213CC 800207CC 1598FFF8 */       bne $t4, $t8, .L800207B0
  /* 0213D0 800207D0 AD69FFFC */        sw $t1, -4($t3) # D_8009D988 + -4
  /* 0213D4 800207D4 8D890000 */        lw $t1, ($t4) # D_8003CB3C + 0
  /* 0213D8 800207D8 8D8D0004 */        lw $t5, 4($t4) # D_8003CB3C + 4
  /* 0213DC 800207DC AD690000 */        sw $t1, ($t3) # D_8009D988 + 0
  /* 0213E0 800207E0 0C007D30 */       jal func_8001F4C0
  /* 0213E4 800207E4 AD6D0004 */        sw $t5, 4($t3) # D_8009D988 + 4
  /* 0213E8 800207E8 0C007E80 */       jal func_8001FA00
  /* 0213EC 800207EC 00000000 */       nop 
  /* 0213F0 800207F0 3C08800A */       lui $t0, %hi(D_8009D988)
  /* 0213F4 800207F4 2508D988 */     addiu $t0, $t0, %lo(D_8009D988)
  /* 0213F8 800207F8 3C0F8004 */       lui $t7, %hi(D_8003CB3C)
  /* 0213FC 800207FC 25EFCB3C */     addiu $t7, $t7, %lo(D_8003CB3C)
glabel func_80020800
  /* 021400 80020800 250A0060 */     addiu $t2, $t0, 0x60
  .L80020804:
  /* 021404 80020804 8D0E0000 */        lw $t6, ($t0) # D_8009D988 + 0
  /* 021408 80020808 2508000C */     addiu $t0, $t0, 0xc
  /* 02140C 8002080C 25EF000C */     addiu $t7, $t7, 0xc
  /* 021410 80020810 ADEEFFF4 */        sw $t6, -0xc($t7) # D_8003CB3C + -12
  /* 021414 80020814 8D19FFF8 */        lw $t9, -8($t0) # D_8009D988 + -8
  /* 021418 80020818 ADF9FFF8 */        sw $t9, -8($t7) # D_8003CB3C + -8
  /* 02141C 8002081C 8D0EFFFC */        lw $t6, -4($t0) # D_8009D988 + -4
  /* 021420 80020820 150AFFF8 */       bne $t0, $t2, .L80020804
  /* 021424 80020824 ADEEFFFC */        sw $t6, -4($t7) # D_8003CB3C + -4
  /* 021428 80020828 8D0E0000 */        lw $t6, ($t0) # D_8009D988 + 0
  /* 02142C 8002082C 8D190004 */        lw $t9, 4($t0) # D_8009D988 + 4
  /* 021430 80020830 3C018004 */       lui $at, %hi(D_8003CB1C)
  /* 021434 80020834 3C048004 */       lui $a0, %hi(gThreadingQueue)
  /* 021438 80020838 ADEE0000 */        sw $t6, ($t7) # D_8003CB3C + 0
  /* 02143C 8002083C ADF90004 */        sw $t9, 4($t7) # D_8003CB3C + 4
  /* 021440 80020840 AC20CB1C */        sw $zero, %lo(D_8003CB1C)($at)
  /* 021444 80020844 AFA00078 */        sw $zero, 0x78($sp)
  /* 021448 80020848 24844D48 */     addiu $a0, $a0, %lo(gThreadingQueue)
  /* 02144C 8002084C 24050001 */     addiu $a1, $zero, 1
  /* 021450 80020850 0C00C000 */       jal osSendMesg
  /* 021454 80020854 00003025 */        or $a2, $zero, $zero
  /* 021458 80020858 10000005 */         b .L80020870
  /* 02145C 8002085C 00000000 */       nop 
  .L80020860:
  /* 021460 80020860 0C00829D */       jal func_80020A74
  /* 021464 80020864 00000000 */       nop 
  /* 021468 80020868 0C00838A */       jal func_80020E28
  /* 02146C 8002086C 00000000 */       nop 
  .L80020870:
  /* 021470 80020870 3C188004 */       lui $t8, %hi(D_8003CB2C)
  /* 021474 80020874 8F18CB2C */        lw $t8, %lo(D_8003CB2C)($t8)
  /* 021478 80020878 1300FE04 */      beqz $t8, .L8002008C
  /* 02147C 8002087C 00000000 */       nop 
  /* 021480 80020880 3C04800A */       lui $a0, %hi(D_8009D9BB)
  /* 021484 80020884 9084D9BB */       lbu $a0, %lo(D_8009D9BB)($a0)
  /* 021488 80020888 00009025 */        or $s2, $zero, $zero
  /* 02148C 8002088C 3C02800A */       lui $v0, %hi(D_8009D954)
  /* 021490 80020890 1880000E */      blez $a0, .L800208CC
  /* 021494 80020894 24830001 */     addiu $v1, $a0, 1
  /* 021498 80020898 8C42D954 */        lw $v0, %lo(D_8009D954)($v0)
  /* 02149C 8002089C AFA30080 */        sw $v1, 0x80($sp)
  .L800208A0:
  /* 0214A0 800208A0 8C4C0000 */        lw $t4, ($v0)
  /* 0214A4 800208A4 26520001 */     addiu $s2, $s2, 1
  /* 0214A8 800208A8 0244082A */       slt $at, $s2, $a0
  /* 0214AC 800208AC 15800004 */      bnez $t4, .L800208C0
  /* 0214B0 800208B0 24420004 */     addiu $v0, $v0, 4
  /* 0214B4 800208B4 8FA30080 */        lw $v1, 0x80($sp)
  /* 0214B8 800208B8 2463FFFF */     addiu $v1, $v1, -1
  /* 0214BC 800208BC AFA30080 */        sw $v1, 0x80($sp)
  .L800208C0:
  /* 0214C0 800208C0 1420FFF7 */      bnez $at, .L800208A0
  /* 0214C4 800208C4 8FA30080 */        lw $v1, 0x80($sp)
  /* 0214C8 800208C8 00009025 */        or $s2, $zero, $zero
  .L800208CC:
  /* 0214CC 800208CC 8EC20000 */        lw $v0, ($s6) # D_8009D970 + 0
  /* 0214D0 800208D0 AFA30080 */        sw $v1, 0x80($sp)
  .L800208D4:
  /* 0214D4 800208D4 904B0000 */       lbu $t3, ($v0)
  /* 0214D8 800208D8 26520001 */     addiu $s2, $s2, 1
  /* 0214DC 800208DC 24420001 */     addiu $v0, $v0, 1
  /* 0214E0 800208E0 15600003 */      bnez $t3, .L800208F0
  /* 0214E4 800208E4 8FA30080 */        lw $v1, 0x80($sp)
  /* 0214E8 800208E8 2463FFFF */     addiu $v1, $v1, -1
  /* 0214EC 800208EC AFA30080 */        sw $v1, 0x80($sp)
  .L800208F0:
  /* 0214F0 800208F0 1655FFF8 */       bne $s2, $s5, .L800208D4
  /* 0214F4 800208F4 8FA30080 */        lw $v1, 0x80($sp)
  /* 0214F8 800208F8 14600030 */      bnez $v1, .L800209BC
  /* 0214FC 800208FC AFA30080 */        sw $v1, 0x80($sp)
  /* 021500 80020900 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 021504 80020904 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 021508 80020908 00002825 */        or $a1, $zero, $zero
  /* 02150C 8002090C 0C00C084 */       jal osRecvMesg
  /* 021510 80020910 02A03025 */        or $a2, $s5, $zero
  /* 021514 80020914 3C04800A */       lui $a0, %hi(D_8009D310)
  /* 021518 80020918 2484D310 */     addiu $a0, $a0, %lo(D_8009D310)
  /* 02151C 8002091C 00002825 */        or $a1, $zero, $zero
  /* 021520 80020920 0C00C000 */       jal osSendMesg
  /* 021524 80020924 02A03025 */        or $a2, $s5, $zero
  /* 021528 80020928 3C04800A */       lui $a0, %hi(D_8009D8C0)
  /* 02152C 8002092C 0C00B392 */       jal n_alClose
  /* 021530 80020930 2484D8C0 */     addiu $a0, $a0, %lo(D_8009D8C0)
  /* 021534 80020934 3C0D800A */       lui $t5, %hi(D_8009D2E8)
  /* 021538 80020938 8DADD2E8 */        lw $t5, %lo(D_8009D2E8)($t5)
  /* 02153C 8002093C 3C02800A */       lui $v0, %hi(D_8009D2D8)
  /* 021540 80020940 2442D2D8 */     addiu $v0, $v0, %lo(D_8009D2D8)
  /* 021544 80020944 3C09800A */       lui $t1, %hi(D_8009D2EC)
  /* 021548 80020948 AC4D0004 */        sw $t5, 4($v0) # D_8009D2D8 + 4
  /* 02154C 8002094C 8D29D2EC */        lw $t1, %lo(D_8009D2EC)($t1)
  /* 021550 80020950 0C007E80 */       jal func_8001FA00
  /* 021554 80020954 AC49000C */        sw $t1, 0xc($v0) # D_8009D2D8 + 12
  /* 021558 80020958 3C08800A */       lui $t0, %hi(D_8009D988)
  /* 02155C 8002095C 2508D988 */     addiu $t0, $t0, %lo(D_8009D988)
  /* 021560 80020960 3C0A8004 */       lui $t2, %hi(D_8003CB3C)
  /* 021564 80020964 254ACB3C */     addiu $t2, $t2, %lo(D_8003CB3C)
  /* 021568 80020968 250E0060 */     addiu $t6, $t0, 0x60
  .L8002096C:
  /* 02156C 8002096C 8D190000 */        lw $t9, ($t0) # D_8009D988 + 0
  /* 021570 80020970 2508000C */     addiu $t0, $t0, 0xc
  /* 021574 80020974 254A000C */     addiu $t2, $t2, 0xc
  /* 021578 80020978 AD59FFF4 */        sw $t9, -0xc($t2) # D_8003CB3C + -12
  /* 02157C 8002097C 8D0FFFF8 */        lw $t7, -8($t0) # D_8009D988 + -8
  /* 021580 80020980 AD4FFFF8 */        sw $t7, -8($t2) # D_8003CB3C + -8
  /* 021584 80020984 8D19FFFC */        lw $t9, -4($t0) # D_8009D988 + -4
  /* 021588 80020988 150EFFF8 */       bne $t0, $t6, .L8002096C
  /* 02158C 8002098C AD59FFFC */        sw $t9, -4($t2) # D_8003CB3C + -4
  /* 021590 80020990 8D190000 */        lw $t9, ($t0) # D_8009D988 + 0
  /* 021594 80020994 8D0F0004 */        lw $t7, 4($t0) # D_8009D988 + 4
  /* 021598 80020998 3C018004 */       lui $at, %hi(D_8003CB2C)
  /* 02159C 8002099C AD590000 */        sw $t9, ($t2) # D_8003CB3C + 0
  /* 0215A0 800209A0 AD4F0004 */        sw $t7, 4($t2) # D_8003CB3C + 4
  /* 0215A4 800209A4 AC20CB2C */        sw $zero, %lo(D_8003CB2C)($at)
  /* 0215A8 800209A8 3C18A450 */       lui $t8, %hi(AI_LEN_REG)
  /* 0215AC 800209AC 8F0C0004 */        lw $t4, %lo(AI_LEN_REG)($t8)
  /* 0215B0 800209B0 000C5882 */       srl $t3, $t4, 2
  /* 0215B4 800209B4 1000FDB5 */         b .L8002008C
  /* 0215B8 800209B8 AFAB0078 */        sw $t3, 0x78($sp)
  .L800209BC:
  /* 0215BC 800209BC 0C00829D */       jal func_80020A74
  /* 0215C0 800209C0 00000000 */       nop 
  /* 0215C4 800209C4 0C00838A */       jal func_80020E28
  /* 0215C8 800209C8 00000000 */       nop 
  /* 0215CC 800209CC 1000FDAF */         b .L8002008C
  /* 0215D0 800209D0 00000000 */       nop 
  /* 0215D4 800209D4 00000000 */       nop 
  /* 0215D8 800209D8 00000000 */       nop 
  /* 0215DC 800209DC 00000000 */       nop 
# Maybe start of new file
  /* 0215E0 800209E0 8FBF004C */        lw $ra, 0x4c($sp)
  /* 0215E4 800209E4 D7B40018 */      ldc1 $f20, 0x18($sp)
  /* 0215E8 800209E8 D7B60020 */      ldc1 $f22, 0x20($sp)
  /* 0215EC 800209EC 8FB00028 */        lw $s0, 0x28($sp)
  /* 0215F0 800209F0 8FB1002C */        lw $s1, 0x2c($sp)
  /* 0215F4 800209F4 8FB20030 */        lw $s2, 0x30($sp)
  /* 0215F8 800209F8 8FB30034 */        lw $s3, 0x34($sp)
  /* 0215FC 800209FC 8FB40038 */        lw $s4, 0x38($sp)
  /* 021600 80020A00 8FB5003C */        lw $s5, 0x3c($sp)
  /* 021604 80020A04 8FB60040 */        lw $s6, 0x40($sp)
  /* 021608 80020A08 8FB70044 */        lw $s7, 0x44($sp)
  /* 02160C 80020A0C 8FBE0048 */        lw $fp, 0x48($sp)
  /* 021610 80020A10 03E00008 */        jr $ra
  /* 021614 80020A14 27BD0088 */     addiu $sp, $sp, 0x88

  /* 021618 80020A18 240E0001 */     addiu $t6, $zero, 1
  /* 02161C 80020A1C 3C018004 */       lui $at, %hi(D_8003CB24)
  /* 021620 80020A20 03E00008 */        jr $ra
  /* 021624 80020A24 AC2ECB24 */        sw $t6, %lo(D_8003CB24)($at)

  /* 021628 80020A28 3C018004 */       lui $at, %hi(D_8003CB24)
  /* 02162C 80020A2C 03E00008 */        jr $ra
  /* 021630 80020A30 AC20CB24 */        sw $zero, %lo(D_8003CB24)($at)

glabel func_80020A34
  /* 021634 80020A34 3C018004 */       lui $at, %hi(D_8003CB24)
  /* 021638 80020A38 03E00008 */        jr $ra
  /* 02163C 80020A3C AC24CB24 */        sw $a0, %lo(D_8003CB24)($at)

glabel func_80020A40
  /* 021640 80020A40 3C0E8004 */       lui $t6, %hi(D_8003CB28)
  /* 021644 80020A44 8DCECB28 */        lw $t6, %lo(D_8003CB28)($t6)
  /* 021648 80020A48 3C028004 */       lui $v0, %hi(D_8003CB2C)
  /* 02164C 80020A4C 2442CB2C */     addiu $v0, $v0, %lo(D_8003CB2C)
  /* 021650 80020A50 108E0006 */       beq $a0, $t6, .L80020A6C
  /* 021654 80020A54 00000000 */       nop 
  /* 021658 80020A58 8C4F0000 */        lw $t7, ($v0) # D_8003CB2C + 0
  /* 02165C 80020A5C 3C01800A */       lui $at, %hi(D_8009D9B8)
  /* 021660 80020A60 25F80001 */     addiu $t8, $t7, 1
  /* 021664 80020A64 AC580000 */        sw $t8, ($v0) # D_8003CB2C + 0
  /* 021668 80020A68 A024D9B8 */        sb $a0, %lo(D_8009D9B8)($at)
  .L80020A6C:
  /* 02166C 80020A6C 03E00008 */        jr $ra
  /* 021670 80020A70 00000000 */       nop 

glabel func_80020A74
  /* 021674 80020A74 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 021678 80020A78 AFB10018 */        sw $s1, 0x18($sp)
  /* 02167C 80020A7C AFB00014 */        sw $s0, 0x14($sp)
  /* 021680 80020A80 AFBF001C */        sw $ra, 0x1c($sp)
  /* 021684 80020A84 00008025 */        or $s0, $zero, $zero
  /* 021688 80020A88 24110001 */     addiu $s1, $zero, 1
  .L80020A8C:
  /* 02168C 80020A8C 0C0082C2 */       jal func_80020B08
  /* 021690 80020A90 02002025 */        or $a0, $s0, $zero
  /* 021694 80020A94 26100001 */     addiu $s0, $s0, 1
  /* 021698 80020A98 1611FFFC */       bne $s0, $s1, .L80020A8C
  /* 02169C 80020A9C 00000000 */       nop 
  /* 0216A0 80020AA0 8FBF001C */        lw $ra, 0x1c($sp)
  /* 0216A4 80020AA4 8FB00014 */        lw $s0, 0x14($sp)
  /* 0216A8 80020AA8 8FB10018 */        lw $s1, 0x18($sp)
  /* 0216AC 80020AAC 03E00008 */        jr $ra
  /* 0216B0 80020AB0 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_80020AB4
  /* 0216B4 80020AB4 3C0E800A */       lui $t6, %hi(D_8009D95C)
  /* 0216B8 80020AB8 8DCED95C */        lw $t6, %lo(D_8009D95C)($t6)
  /* 0216BC 80020ABC 3C19800A */       lui $t9, %hi(D_8009D970)
  /* 0216C0 80020AC0 2402FFFF */     addiu $v0, $zero, -1
  /* 0216C4 80020AC4 85CF0002 */        lh $t7, 2($t6)
  /* 0216C8 80020AC8 00AF082B */      sltu $at, $a1, $t7
  /* 0216CC 80020ACC 1020000C */      beqz $at, .L80020B00
  /* 0216D0 80020AD0 00000000 */       nop 
  /* 0216D4 80020AD4 8F39D970 */        lw $t9, %lo(D_8009D970)($t9)
  /* 0216D8 80020AD8 24180001 */     addiu $t8, $zero, 1
  /* 0216DC 80020ADC 3C09800A */       lui $t1, %hi(D_8009D974)
  /* 0216E0 80020AE0 03244021 */      addu $t0, $t9, $a0
  /* 0216E4 80020AE4 A1180000 */        sb $t8, ($t0)
  /* 0216E8 80020AE8 8D29D974 */        lw $t1, %lo(D_8009D974)($t1)
  /* 0216EC 80020AEC 00045080 */       sll $t2, $a0, 2
  /* 0216F0 80020AF0 00A01025 */        or $v0, $a1, $zero
  /* 0216F4 80020AF4 012A5821 */      addu $t3, $t1, $t2
  /* 0216F8 80020AF8 03E00008 */        jr $ra
  /* 0216FC 80020AFC AD650000 */        sw $a1, ($t3)

  .L80020B00:
  /* 021700 80020B00 03E00008 */        jr $ra
  /* 021704 80020B04 00000000 */       nop 

glabel func_80020B08
  /* 021708 80020B08 3C0F800A */       lui $t7, %hi(D_8009D970)
  /* 02170C 80020B0C 8DEFD970 */        lw $t7, %lo(D_8009D970)($t7)
  /* 021710 80020B10 240E0001 */     addiu $t6, $zero, 1
  /* 021714 80020B14 3C08800A */       lui $t0, %hi(D_8009D974)
  /* 021718 80020B18 01E4C021 */      addu $t8, $t7, $a0
  /* 02171C 80020B1C A30E0000 */        sb $t6, ($t8)
  /* 021720 80020B20 8D08D974 */        lw $t0, %lo(D_8009D974)($t0)
  /* 021724 80020B24 00044880 */       sll $t1, $a0, 2
  /* 021728 80020B28 2419FFFF */     addiu $t9, $zero, -1
  /* 02172C 80020B2C 01095021 */      addu $t2, $t0, $t1
  /* 021730 80020B30 03E00008 */        jr $ra
  /* 021734 80020B34 AD590000 */        sw $t9, ($t2)

glabel func_80020B38
  /* 021738 80020B38 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 02173C 80020B3C 2CA17801 */     sltiu $at, $a1, 0x7801
  /* 021740 80020B40 AFBF0014 */        sw $ra, 0x14($sp)
  /* 021744 80020B44 00803825 */        or $a3, $a0, $zero
  /* 021748 80020B48 14200002 */      bnez $at, .L80020B54
  /* 02174C 80020B4C 00A03025 */        or $a2, $a1, $zero
  /* 021750 80020B50 24067800 */     addiu $a2, $zero, 0x7800
  .L80020B54:
  /* 021754 80020B54 00071080 */       sll $v0, $a3, 2
  /* 021758 80020B58 3C04800A */       lui $a0, %hi(D_8009D960)
  /* 02175C 80020B5C 00822021 */      addu $a0, $a0, $v0
  /* 021760 80020B60 00062C00 */       sll $a1, $a2, 0x10
  /* 021764 80020B64 00052C03 */       sra $a1, $a1, 0x10
  /* 021768 80020B68 8C84D960 */        lw $a0, %lo(D_8009D960)($a0)
  /* 02176C 80020B6C AFA2001C */        sw $v0, 0x1c($sp)
  /* 021770 80020B70 0C00BF04 */       jal func_8002FC10
  /* 021774 80020B74 AFA60024 */        sw $a2, 0x24($sp)
  /* 021778 80020B78 8FA60024 */        lw $a2, 0x24($sp)
  /* 02177C 80020B7C 8FA2001C */        lw $v0, 0x1c($sp)
  /* 021780 80020B80 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 021784 80020B84 44862000 */      mtc1 $a2, $f4
  /* 021788 80020B88 04C10004 */      bgez $a2, .L80020B9C
  /* 02178C 80020B8C 468021A0 */   cvt.s.w $f6, $f4
  /* 021790 80020B90 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 021794 80020B94 00000000 */       nop 
  /* 021798 80020B98 46083180 */     add.s $f6, $f6, $f8
  .L80020B9C:
  /* 02179C 80020B9C 3C01800A */       lui $at, %hi(D_8009D97C)
  /* 0217A0 80020BA0 00220821 */      addu $at, $at, $v0
  /* 0217A4 80020BA4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 0217A8 80020BA8 E426D97C */      swc1 $f6, %lo(D_8009D97C)($at)
  /* 0217AC 80020BAC 3C01800A */       lui $at, %hi(D_8009D978)
  /* 0217B0 80020BB0 00220821 */      addu $at, $at, $v0
  /* 0217B4 80020BB4 AC20D978 */        sw $zero, %lo(D_8009D978)($at)
  /* 0217B8 80020BB8 03E00008 */        jr $ra
  /* 0217BC 80020BBC 27BD0020 */     addiu $sp, $sp, 0x20

glabel func_80020BC0
  /* 0217C0 80020BC0 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 0217C4 80020BC4 2CA17801 */     sltiu $at, $a1, 0x7801
  /* 0217C8 80020BC8 14200002 */      bnez $at, .L80020BD4
  /* 0217CC 80020BCC AFBF0014 */        sw $ra, 0x14($sp)
  /* 0217D0 80020BD0 24057800 */     addiu $a1, $zero, 0x7800
  .L80020BD4:
  /* 0217D4 80020BD4 10C0001B */      beqz $a2, .L80020C44
  /* 0217D8 80020BD8 00041080 */       sll $v0, $a0, 2
  /* 0217DC 80020BDC 44852000 */      mtc1 $a1, $f4
  /* 0217E0 80020BE0 3C01800A */       lui $at, %hi(D_8009D978)
  /* 0217E4 80020BE4 00220821 */      addu $at, $at, $v0
  /* 0217E8 80020BE8 AC26D978 */        sw $a2, %lo(D_8009D978)($at)
  /* 0217EC 80020BEC 04A10005 */      bgez $a1, .L80020C04
  /* 0217F0 80020BF0 468021A0 */   cvt.s.w $f6, $f4
  /* 0217F4 80020BF4 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 0217F8 80020BF8 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 0217FC 80020BFC 00000000 */       nop 
  /* 021800 80020C00 46083180 */     add.s $f6, $f6, $f8
  .L80020C04:
  /* 021804 80020C04 3C01800A */       lui $at, %hi(D_8009D97C)
  /* 021808 80020C08 00220821 */      addu $at, $at, $v0
  /* 02180C 80020C0C C42AD97C */      lwc1 $f10, %lo(D_8009D97C)($at)
  /* 021810 80020C10 44869000 */      mtc1 $a2, $f18
  /* 021814 80020C14 3C014F80 */       lui $at, (0x4F800000 >> 16) # 4294967300.0
  /* 021818 80020C18 460A3401 */     sub.s $f16, $f6, $f10
  /* 02181C 80020C1C 04C10004 */      bgez $a2, .L80020C30
  /* 021820 80020C20 46809120 */   cvt.s.w $f4, $f18
  /* 021824 80020C24 44814000 */      mtc1 $at, $f8 # 4294967300.0 to cop1
  /* 021828 80020C28 00000000 */       nop 
  /* 02182C 80020C2C 46082100 */     add.s $f4, $f4, $f8
  .L80020C30:
  /* 021830 80020C30 46048183 */     div.s $f6, $f16, $f4
  /* 021834 80020C34 3C01800A */       lui $at, %hi(D_8009D980)
  /* 021838 80020C38 00220821 */      addu $at, $at, $v0
  /* 02183C 80020C3C 10000003 */         b .L80020C4C
  /* 021840 80020C40 E426D980 */      swc1 $f6, %lo(D_8009D980)($at)
  .L80020C44:
  /* 021844 80020C44 0C0082CE */       jal func_80020B38
  /* 021848 80020C48 00000000 */       nop 
  .L80020C4C:
  /* 02184C 80020C4C 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021850 80020C50 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021854 80020C54 03E00008 */        jr $ra
  /* 021858 80020C58 00000000 */       nop 

  /* 02185C 80020C5C 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 021860 80020C60 2CA10080 */     sltiu $at, $a1, 0x80
  /* 021864 80020C64 AFBF0024 */        sw $ra, 0x24($sp)
  /* 021868 80020C68 AFB30020 */        sw $s3, 0x20($sp)
  /* 02186C 80020C6C AFB2001C */        sw $s2, 0x1c($sp)
  /* 021870 80020C70 AFB10018 */        sw $s1, 0x18($sp)
  /* 021874 80020C74 14200002 */      bnez $at, .L80020C80
  /* 021878 80020C78 AFB00014 */        sw $s0, 0x14($sp)
  /* 02187C 80020C7C 2405007F */     addiu $a1, $zero, 0x7f
  .L80020C80:
  /* 021880 80020C80 3C0F800A */       lui $t7, %hi(D_8009D960)
  /* 021884 80020C84 25EFD960 */     addiu $t7, $t7, %lo(D_8009D960)
  /* 021888 80020C88 00047080 */       sll $t6, $a0, 2
  /* 02188C 80020C8C 01CF8821 */      addu $s1, $t6, $t7
  /* 021890 80020C90 00008025 */        or $s0, $zero, $zero
  /* 021894 80020C94 30B200FF */      andi $s2, $a1, 0xff
  /* 021898 80020C98 24130010 */     addiu $s3, $zero, 0x10
  /* 02189C 80020C9C 8E240000 */        lw $a0, ($s1)
  .L80020CA0:
  /* 0218A0 80020CA0 320500FF */      andi $a1, $s0, 0xff
  /* 0218A4 80020CA4 0C009804 */       jal alSeqpSetChlFXMix
  /* 0218A8 80020CA8 324600FF */      andi $a2, $s2, 0xff
  /* 0218AC 80020CAC 26100001 */     addiu $s0, $s0, 1
  /* 0218B0 80020CB0 5613FFFB */      bnel $s0, $s3, .L80020CA0
  /* 0218B4 80020CB4 8E240000 */        lw $a0, ($s1)
  /* 0218B8 80020CB8 8FBF0024 */        lw $ra, 0x24($sp)
  /* 0218BC 80020CBC 8FB00014 */        lw $s0, 0x14($sp)
  /* 0218C0 80020CC0 8FB10018 */        lw $s1, 0x18($sp)
  /* 0218C4 80020CC4 8FB2001C */        lw $s2, 0x1c($sp)
  /* 0218C8 80020CC8 8FB30020 */        lw $s3, 0x20($sp)
  /* 0218CC 80020CCC 03E00008 */        jr $ra
  /* 0218D0 80020CD0 27BD0028 */     addiu $sp, $sp, 0x28

  /* 0218D4 80020CD4 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 0218D8 80020CD8 AFB10018 */        sw $s1, 0x18($sp)
  /* 0218DC 80020CDC 30B100FF */      andi $s1, $a1, 0xff
  /* 0218E0 80020CE0 2A210080 */      slti $at, $s1, 0x80
  /* 0218E4 80020CE4 AFBF0024 */        sw $ra, 0x24($sp)
  /* 0218E8 80020CE8 AFB30020 */        sw $s3, 0x20($sp)
  /* 0218EC 80020CEC AFB2001C */        sw $s2, 0x1c($sp)
  /* 0218F0 80020CF0 AFB00014 */        sw $s0, 0x14($sp)
  /* 0218F4 80020CF4 14200002 */      bnez $at, .L80020D00
  /* 0218F8 80020CF8 AFA5002C */        sw $a1, 0x2c($sp)
  /* 0218FC 80020CFC 2411007F */     addiu $s1, $zero, 0x7f
  .L80020D00:
  /* 021900 80020D00 3C0F800A */       lui $t7, %hi(D_8009D960)
  /* 021904 80020D04 3C01800A */       lui $at, %hi(D_8009D968)
  /* 021908 80020D08 25EFD960 */     addiu $t7, $t7, %lo(D_8009D960)
  /* 02190C 80020D0C 00047080 */       sll $t6, $a0, 2
  /* 021910 80020D10 A031D968 */        sb $s1, %lo(D_8009D968)($at)
  /* 021914 80020D14 01CF9021 */      addu $s2, $t6, $t7
  /* 021918 80020D18 00008025 */        or $s0, $zero, $zero
  /* 02191C 80020D1C 24130010 */     addiu $s3, $zero, 0x10
  /* 021920 80020D20 8E440000 */        lw $a0, ($s2)
  .L80020D24:
  /* 021924 80020D24 320500FF */      andi $a1, $s0, 0xff
  /* 021928 80020D28 0C0097F0 */       jal alSeqpSetChlPriority
  /* 02192C 80020D2C 322600FF */      andi $a2, $s1, 0xff
  /* 021930 80020D30 26100001 */     addiu $s0, $s0, 1
  /* 021934 80020D34 5613FFFB */      bnel $s0, $s3, .L80020D24
  /* 021938 80020D38 8E440000 */        lw $a0, ($s2)
  /* 02193C 80020D3C 8FBF0024 */        lw $ra, 0x24($sp)
  /* 021940 80020D40 8FB00014 */        lw $s0, 0x14($sp)
  /* 021944 80020D44 8FB10018 */        lw $s1, 0x18($sp)
  /* 021948 80020D48 8FB2001C */        lw $s2, 0x1c($sp)
  /* 02194C 80020D4C 8FB30020 */        lw $s3, 0x20($sp)
  /* 021950 80020D50 03E00008 */        jr $ra
  /* 021954 80020D54 27BD0028 */     addiu $sp, $sp, 0x28

glabel func_80020D58
  /* 021958 80020D58 00047080 */       sll $t6, $a0, 2
  /* 02195C 80020D5C 3C0F800A */       lui $t7, %hi(D_8009D960)
  /* 021960 80020D60 01EE7821 */      addu $t7, $t7, $t6
  /* 021964 80020D64 8DEFD960 */        lw $t7, %lo(D_8009D960)($t7)
  /* 021968 80020D68 24020001 */     addiu $v0, $zero, 1
  /* 02196C 80020D6C 8DF80034 */        lw $t8, 0x34($t7)
  /* 021970 80020D70 17000003 */      bnez $t8, .L80020D80
  /* 021974 80020D74 00000000 */       nop 
  /* 021978 80020D78 03E00008 */        jr $ra
  /* 02197C 80020D7C 00001025 */        or $v0, $zero, $zero

  .L80020D80:
  /* 021980 80020D80 03E00008 */        jr $ra
  /* 021984 80020D84 00000000 */       nop 

glabel func_80020D88
  /* 021988 80020D88 3C06800A */       lui $a2, %hi(D_8009D9BB)
  /* 02198C 80020D8C 90C6D9BB */       lbu $a2, %lo(D_8009D9BB)($a2)
  /* 021990 80020D90 27BDFFD8 */     addiu $sp, $sp, -0x28
  /* 021994 80020D94 AFBF0014 */        sw $ra, 0x14($sp)
  /* 021998 80020D98 00803825 */        or $a3, $a0, $zero
  /* 02199C 80020D9C 18C00017 */      blez $a2, .L80020DFC
  /* 0219A0 80020DA0 00002825 */        or $a1, $zero, $zero
  /* 0219A4 80020DA4 3C02800A */       lui $v0, %hi(D_8009D954)
  /* 0219A8 80020DA8 8C42D954 */        lw $v0, %lo(D_8009D954)($v0)
  /* 0219AC 80020DAC 00001825 */        or $v1, $zero, $zero
  .L80020DB0:
  /* 0219B0 80020DB0 8C4E0000 */        lw $t6, ($v0)
  /* 0219B4 80020DB4 24420004 */     addiu $v0, $v0, 4
  /* 0219B8 80020DB8 15C0000C */      bnez $t6, .L80020DEC
  /* 0219BC 80020DBC 30E4FFFF */      andi $a0, $a3, 0xffff
  /* 0219C0 80020DC0 AFA3001C */        sw $v1, 0x1c($sp)
  /* 0219C4 80020DC4 0C009A70 */       jal func_800269C0
  /* 0219C8 80020DC8 AFA50024 */        sw $a1, 0x24($sp)
  /* 0219CC 80020DCC 3C0F800A */       lui $t7, %hi(D_8009D954)
  /* 0219D0 80020DD0 8DEFD954 */        lw $t7, %lo(D_8009D954)($t7)
  /* 0219D4 80020DD4 8FA3001C */        lw $v1, 0x1c($sp)
  /* 0219D8 80020DD8 8FA50024 */        lw $a1, 0x24($sp)
  /* 0219DC 80020DDC 01E3C021 */      addu $t8, $t7, $v1
  /* 0219E0 80020DE0 AF020000 */        sw $v0, ($t8)
  /* 0219E4 80020DE4 10000006 */         b .L80020E00
  /* 0219E8 80020DE8 00A01025 */        or $v0, $a1, $zero
  .L80020DEC:
  /* 0219EC 80020DEC 24A50001 */     addiu $a1, $a1, 1
  /* 0219F0 80020DF0 00A6082A */       slt $at, $a1, $a2
  /* 0219F4 80020DF4 1420FFEE */      bnez $at, .L80020DB0
  /* 0219F8 80020DF8 24630004 */     addiu $v1, $v1, 4
  .L80020DFC:
  /* 0219FC 80020DFC 2402FFFF */     addiu $v0, $zero, -1
  .L80020E00:
  /* 021A00 80020E00 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021A04 80020E04 27BD0028 */     addiu $sp, $sp, 0x28
  /* 021A08 80020E08 03E00008 */        jr $ra
  /* 021A0C 80020E0C 00000000 */       nop 

  /* 021A10 80020E10 AFA40000 */        sw $a0, ($sp)
  /* 021A14 80020E14 AFA50004 */        sw $a1, 4($sp)
  /* 021A18 80020E18 AFA60008 */        sw $a2, 8($sp)
  /* 021A1C 80020E1C AFA7000C */        sw $a3, 0xc($sp)
  /* 021A20 80020E20 03E00008 */        jr $ra
  /* 021A24 80020E24 2402FFFF */     addiu $v0, $zero, -1

glabel func_80020E28
  /* 021A28 80020E28 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021A2C 80020E2C AFBF0014 */        sw $ra, 0x14($sp)
  /* 021A30 80020E30 0C0099A8 */       jal func_800266A0
  /* 021A34 80020E34 00000000 */       nop 
  /* 021A38 80020E38 3C03800A */       lui $v1, %hi(D_8009D9BB)
  /* 021A3C 80020E3C 9063D9BB */       lbu $v1, %lo(D_8009D9BB)($v1)
  /* 021A40 80020E40 00001025 */        or $v0, $zero, $zero
  /* 021A44 80020E44 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021A48 80020E48 18600004 */      blez $v1, .L80020E5C
  /* 021A4C 80020E4C 24420001 */     addiu $v0, $v0, 1
  .L80020E50:
  /* 021A50 80020E50 0043082A */       slt $at, $v0, $v1
  /* 021A54 80020E54 5420FFFE */      bnel $at, $zero, .L80020E50
  /* 021A58 80020E58 24420001 */     addiu $v0, $v0, 1
  .L80020E5C:
  /* 021A5C 80020E5C 03E00008 */        jr $ra
  /* 021A60 80020E60 27BD0018 */     addiu $sp, $sp, 0x18

  /* 021A64 80020E64 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021A68 80020E68 2C817801 */     sltiu $at, $a0, 0x7801
  /* 021A6C 80020E6C AFBF0014 */        sw $ra, 0x14($sp)
  /* 021A70 80020E70 14200003 */      bnez $at, .L80020E80
  /* 021A74 80020E74 00802825 */        or $a1, $a0, $zero
  /* 021A78 80020E78 10000003 */         b .L80020E88
  /* 021A7C 80020E7C 2404007F */     addiu $a0, $zero, 0x7f
  .L80020E80:
  /* 021A80 80020E80 00052202 */       srl $a0, $a1, 8
  /* 021A84 80020E84 308400FF */      andi $a0, $a0, 0xff
  .L80020E88:
  /* 021A88 80020E88 0C00981C */       jal func_80026070
  /* 021A8C 80020E8C 00000000 */       nop 
  /* 021A90 80020E90 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021A94 80020E94 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021A98 80020E98 03E00008 */        jr $ra
  /* 021A9C 80020E9C 00000000 */       nop 

  /* 021AA0 80020EA0 34018000 */       ori $at, $zero, 0x8000
  /* 021AA4 80020EA4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021AA8 80020EA8 00A1082B */      sltu $at, $a1, $at
  /* 021AAC 80020EAC AFBF0014 */        sw $ra, 0x14($sp)
  /* 021AB0 80020EB0 00803825 */        or $a3, $a0, $zero
  /* 021AB4 80020EB4 14200002 */      bnez $at, .L80020EC0
  /* 021AB8 80020EB8 00A03025 */        or $a2, $a1, $zero
  /* 021ABC 80020EBC 24067FFF */     addiu $a2, $zero, 0x7fff
  .L80020EC0:
  /* 021AC0 80020EC0 3C0E800A */       lui $t6, %hi(D_8009D954)
  /* 021AC4 80020EC4 8DCED954 */        lw $t6, %lo(D_8009D954)($t6)
  /* 021AC8 80020EC8 00077880 */       sll $t7, $a3, 2
  /* 021ACC 80020ECC 00062A02 */       srl $a1, $a2, 8
  /* 021AD0 80020ED0 01CFC021 */      addu $t8, $t6, $t7
  /* 021AD4 80020ED4 8F040000 */        lw $a0, ($t8)
  /* 021AD8 80020ED8 50800004 */      beql $a0, $zero, .L80020EEC
  /* 021ADC 80020EDC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021AE0 80020EE0 0C00985D */       jal func_80026174
  /* 021AE4 80020EE4 30A500FF */      andi $a1, $a1, 0xff
  /* 021AE8 80020EE8 8FBF0014 */        lw $ra, 0x14($sp)
  .L80020EEC:
  /* 021AEC 80020EEC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021AF0 80020EF0 03E00008 */        jr $ra
  /* 021AF4 80020EF4 00000000 */       nop 

  /* 021AF8 80020EF8 30AE00FF */      andi $t6, $a1, 0xff
  /* 021AFC 80020EFC 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021B00 80020F00 29C10080 */      slti $at, $t6, 0x80
  /* 021B04 80020F04 AFBF0014 */        sw $ra, 0x14($sp)
  /* 021B08 80020F08 00803825 */        or $a3, $a0, $zero
  /* 021B0C 80020F0C 14200002 */      bnez $at, .L80020F18
  /* 021B10 80020F10 30A600FF */      andi $a2, $a1, 0xff
  /* 021B14 80020F14 2406007F */     addiu $a2, $zero, 0x7f
  .L80020F18:
  /* 021B18 80020F18 3C0F800A */       lui $t7, %hi(D_8009D954)
  /* 021B1C 80020F1C 8DEFD954 */        lw $t7, %lo(D_8009D954)($t7)
  /* 021B20 80020F20 0007C080 */       sll $t8, $a3, 2
  /* 021B24 80020F24 01F8C821 */      addu $t9, $t7, $t8
  /* 021B28 80020F28 8F240000 */        lw $a0, ($t9)
  /* 021B2C 80020F2C 50800004 */      beql $a0, $zero, .L80020F40
  /* 021B30 80020F30 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021B34 80020F34 0C009841 */       jal func_80026104
  /* 021B38 80020F38 30C500FF */      andi $a1, $a2, 0xff
  /* 021B3C 80020F3C 8FBF0014 */        lw $ra, 0x14($sp)
  .L80020F40:
  /* 021B40 80020F40 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021B44 80020F44 03E00008 */        jr $ra
  /* 021B48 80020F48 00000000 */       nop 

  /* 021B4C 80020F4C 30AE00FF */      andi $t6, $a1, 0xff
  /* 021B50 80020F50 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021B54 80020F54 29C10080 */      slti $at, $t6, 0x80
  /* 021B58 80020F58 AFBF0014 */        sw $ra, 0x14($sp)
  /* 021B5C 80020F5C 00803825 */        or $a3, $a0, $zero
  /* 021B60 80020F60 14200002 */      bnez $at, .L80020F6C
  /* 021B64 80020F64 30A600FF */      andi $a2, $a1, 0xff
  /* 021B68 80020F68 2406007F */     addiu $a2, $zero, 0x7f
  .L80020F6C:
  /* 021B6C 80020F6C 3C0F800A */       lui $t7, %hi(D_8009D954)
  /* 021B70 80020F70 8DEFD954 */        lw $t7, %lo(D_8009D954)($t7)
  /* 021B74 80020F74 0007C080 */       sll $t8, $a3, 2
  /* 021B78 80020F78 01F8C821 */      addu $t9, $t7, $t8
  /* 021B7C 80020F7C 8F240000 */        lw $a0, ($t9)
  /* 021B80 80020F80 50800004 */      beql $a0, $zero, .L80020F94
  /* 021B84 80020F84 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021B88 80020F88 0C009825 */       jal func_80026094
  /* 021B8C 80020F8C 30C500FF */      andi $a1, $a2, 0xff
  /* 021B90 80020F90 8FBF0014 */        lw $ra, 0x14($sp)
  .L80020F94:
  /* 021B94 80020F94 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021B98 80020F98 03E00008 */        jr $ra
  /* 021B9C 80020F9C 00000000 */       nop 

  /* 021BA0 80020FA0 AFA40000 */        sw $a0, ($sp)
  /* 021BA4 80020FA4 03E00008 */        jr $ra
  /* 021BA8 80020FA8 AFA50004 */        sw $a1, 4($sp)

  /* 021BAC 80020FAC 3C0E800A */       lui $t6, %hi(D_8009D954)
  /* 021BB0 80020FB0 8DCED954 */        lw $t6, %lo(D_8009D954)($t6)
  /* 021BB4 80020FB4 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 021BB8 80020FB8 00041080 */       sll $v0, $a0, 2
  /* 021BBC 80020FBC AFBF0014 */        sw $ra, 0x14($sp)
  /* 021BC0 80020FC0 01C27821 */      addu $t7, $t6, $v0
  /* 021BC4 80020FC4 8DE50000 */        lw $a1, ($t7)
  /* 021BC8 80020FC8 10A00008 */      beqz $a1, .L80020FEC
  /* 021BCC 80020FCC 00A02025 */        or $a0, $a1, $zero
  /* 021BD0 80020FD0 0C0099CE */       jal func_80026738
  /* 021BD4 80020FD4 AFA2001C */        sw $v0, 0x1c($sp)
  /* 021BD8 80020FD8 3C18800A */       lui $t8, %hi(D_8009D954)
  /* 021BDC 80020FDC 8FA2001C */        lw $v0, 0x1c($sp)
  /* 021BE0 80020FE0 8F18D954 */        lw $t8, %lo(D_8009D954)($t8)
  /* 021BE4 80020FE4 0302C821 */      addu $t9, $t8, $v0
  /* 021BE8 80020FE8 AF200000 */        sw $zero, ($t9)
  .L80020FEC:
  /* 021BEC 80020FEC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021BF0 80020FF0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 021BF4 80020FF4 03E00008 */        jr $ra
  /* 021BF8 80020FF8 00000000 */       nop 

  /* 021BFC 80020FFC 3C0E800A */       lui $t6, %hi(D_8009D954)
  /* 021C00 80021000 8DCED954 */        lw $t6, %lo(D_8009D954)($t6)
  /* 021C04 80021004 00047880 */       sll $t7, $a0, 2
  /* 021C08 80021008 AFA50004 */        sw $a1, 4($sp)
  /* 021C0C 8002100C 01CFC021 */      addu $t8, $t6, $t7
  /* 021C10 80021010 8F020000 */        lw $v0, ($t8)
  /* 021C14 80021014 30A500FF */      andi $a1, $a1, 0xff
  /* 021C18 80021018 10400002 */      beqz $v0, .L80021024
  /* 021C1C 8002101C 00000000 */       nop 
  /* 021C20 80021020 A045001F */        sb $a1, 0x1f($v0)
  .L80021024:
  /* 021C24 80021024 03E00008 */        jr $ra
  /* 021C28 80021028 00000000 */       nop 

glabel func_8002102C
  /* 021C2C 8002102C 240E0001 */     addiu $t6, $zero, 1
  /* 021C30 80021030 3C018004 */       lui $at, %hi(D_8003CB1C)
  /* 021C34 80021034 03E00008 */        jr $ra
  /* 021C38 80021038 AC2ECB1C */        sw $t6, %lo(D_8003CB1C)($at)

glabel func_8002103C
  /* 021C3C 8002103C 3C028004 */       lui $v0, %hi(D_8003CB1C)
  /* 021C40 80021040 03E00008 */        jr $ra
  /* 021C44 80021044 8C42CB1C */        lw $v0, %lo(D_8003CB1C)($v0)

glabel func_80021048
  /* 021C48 80021048 3C028004 */       lui $v0, %hi(D_8003CB2C)
  /* 021C4C 8002104C 03E00008 */        jr $ra
  /* 021C50 80021050 8C42CB2C */        lw $v0, %lo(D_8003CB2C)($v0)

  /* 021C54 80021054 3C0E8004 */       lui $t6, %hi(D_8003CB2C)
  /* 021C58 80021058 3C0F8004 */       lui $t7, %hi(D_8003CB1C)
  /* 021C5C 8002105C 8DEFCB1C */        lw $t7, %lo(D_8003CB1C)($t7)
  /* 021C60 80021060 8DCECB2C */        lw $t6, %lo(D_8003CB2C)($t6)
  /* 021C64 80021064 03E00008 */        jr $ra
  /* 021C68 80021068 01CF1025 */        or $v0, $t6, $t7

  /* 021C6C 8002106C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 021C70 80021070 AFBF0014 */        sw $ra, 0x14($sp)
  /* 021C74 80021074 3C048004 */       lui $a0, %hi(gThreadingQueue)
  /* 021C78 80021078 24844D48 */     addiu $a0, $a0, %lo(gThreadingQueue)
  /* 021C7C 8002107C 00002825 */        or $a1, $zero, $zero
  /* 021C80 80021080 0C00C084 */       jal osRecvMesg
  /* 021C84 80021084 00003025 */        or $a2, $zero, $zero
  /* 021C88 80021088 240E0001 */     addiu $t6, $zero, 1
  /* 021C8C 8002108C 3C018004 */       lui $at, %hi(D_8003CB1C)
  /* 021C90 80021090 3C048004 */       lui $a0, %hi(gThreadingQueue)
  /* 021C94 80021094 AC2ECB1C */        sw $t6, %lo(D_8003CB1C)($at)
  /* 021C98 80021098 24844D48 */     addiu $a0, $a0, %lo(gThreadingQueue)
  /* 021C9C 8002109C 00002825 */        or $a1, $zero, $zero
  /* 021CA0 800210A0 0C00C084 */       jal osRecvMesg
  /* 021CA4 800210A4 24060001 */     addiu $a2, $zero, 1
  /* 021CA8 800210A8 8FBF0014 */        lw $ra, 0x14($sp)
  /* 021CAC 800210AC 27BD0018 */     addiu $sp, $sp, 0x18
  /* 021CB0 800210B0 03E00008 */        jr $ra
  /* 021CB4 800210B4 00000000 */       nop 

  /* 021CB8 800210B8 00000000 */       nop 
  /* 021CBC 800210BC 00000000 */       nop 
