.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x800D6490 -> 0x800D6680

glabel func_ovl12_800D6490
  /* 119DF0 800D6490 240E0001 */     addiu $t6, $zero, 1
  /* 119DF4 800D6494 3C01800D */       lui $at, %hi(D_ovl12_800D6680)
  /* 119DF8 800D6498 03E00008 */        jr $ra
  /* 119DFC 800D649C AC2E6680 */        sw $t6, %lo(D_ovl12_800D6680)($at)

glabel func_ovl12_800D64A0
  /* 119E00 800D64A0 3C0E8004 */       lui $t6, %hi(D_80045470 + 2)
  /* 119E04 800D64A4 95CE5472 */       lhu $t6, %lo(D_80045470 + 2)($t6)
  /* 119E08 800D64A8 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 119E0C 800D64AC AFBF001C */        sw $ra, 0x1c($sp)
  /* 119E10 800D64B0 31CF1000 */      andi $t7, $t6, 0x1000
  /* 119E14 800D64B4 11E00010 */      beqz $t7, .L800D64F8
  /* 119E18 800D64B8 AFA40020 */        sw $a0, 0x20($sp)
  /* 119E1C 800D64BC 3C188037 */       lui $t8, %hi(D_ovl9_80371420)
  /* 119E20 800D64C0 8F181420 */        lw $t8, %lo(D_ovl9_80371420)($t8)
  /* 119E24 800D64C4 24040032 */     addiu $a0, $zero, 0x32
  /* 119E28 800D64C8 24050032 */     addiu $a1, $zero, 0x32
  /* 119E2C 800D64CC 13000005 */      beqz $t8, .L800D64E4
  /* 119E30 800D64D0 24060064 */     addiu $a2, $zero, 0x64
  /* 119E34 800D64D4 0C035924 */       jal func_ovl12_800D6490
  /* 119E38 800D64D8 00000000 */       nop 
  /* 119E3C 800D64DC 10000006 */         b .L800D64F8
  /* 119E40 800D64E0 00000000 */       nop 
  .L800D64E4:
  /* 119E44 800D64E4 3C07800D */       lui $a3, %hi(D_ovl12_800D672C)
  /* 119E48 800D64E8 24190002 */     addiu $t9, $zero, 2
  /* 119E4C 800D64EC AFB90010 */        sw $t9, 0x10($sp)
  /* 119E50 800D64F0 0C0DA75E */       jal func_ovl9_80369D78
  /* 119E54 800D64F4 24E7672C */     addiu $a3, $a3, %lo(D_ovl12_800D672C)
  .L800D64F8:
  /* 119E58 800D64F8 3C08800D */       lui $t0, %hi(D_ovl12_800D6680)
  /* 119E5C 800D64FC 8D086680 */        lw $t0, %lo(D_ovl12_800D6680)($t0)
  /* 119E60 800D6500 51000027 */      beql $t0, $zero, .L800D65A0
  /* 119E64 800D6504 8FBF001C */        lw $ra, 0x1c($sp)
  /* 119E68 800D6508 0C0DA7B0 */       jal func_ovl9_80369EC0
  /* 119E6C 800D650C 00000000 */       nop 
  /* 119E70 800D6510 3C09800D */       lui $t1, %hi(D_ovl12_800D6684)
  /* 119E74 800D6514 8D296684 */        lw $t1, %lo(D_ovl12_800D6684)($t1)
  /* 119E78 800D6518 3C02800A */       lui $v0, %hi(gSceneData)
  /* 119E7C 800D651C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 119E80 800D6520 904A0000 */       lbu $t2, ($v0) # gSceneData + 0
  /* 119E84 800D6524 312300FF */      andi $v1, $t1, 0xff
  /* 119E88 800D6528 28610011 */      slti $at, $v1, 0x11
  /* 119E8C 800D652C A049000F */        sb $t1, 0xf($v0) # gSceneData + 15
  /* 119E90 800D6530 14200016 */      bnez $at, .L800D658C
  /* 119E94 800D6534 A04A0001 */        sb $t2, 1($v0) # gSceneData + 1
  /* 119E98 800D6538 3C04800A */       lui $a0, %hi(D_800A4B18)
  /* 119E9C 800D653C 3C0B800A */       lui $t3, %hi(D_800A4D08)
  /* 119EA0 800D6540 24844B18 */     addiu $a0, $a0, %lo(D_800A4B18)
  /* 119EA4 800D6544 256B4D08 */     addiu $t3, $t3, %lo(D_800A4D08)
  /* 119EA8 800D6548 256F01EC */     addiu $t7, $t3, 0x1ec
  /* 119EAC 800D654C 00807025 */        or $t6, $a0, $zero
  .L800D6550:
  /* 119EB0 800D6550 8D6D0000 */        lw $t5, ($t3) # D_800A4D08 + 0
  /* 119EB4 800D6554 256B000C */     addiu $t3, $t3, 0xc
  /* 119EB8 800D6558 25CE000C */     addiu $t6, $t6, 0xc
  /* 119EBC 800D655C ADCDFFF4 */        sw $t5, -0xc($t6)
  /* 119EC0 800D6560 8D6CFFF8 */        lw $t4, -8($t3) # D_800A4D08 + -8
  /* 119EC4 800D6564 ADCCFFF8 */        sw $t4, -8($t6)
  /* 119EC8 800D6568 8D6DFFFC */        lw $t5, -4($t3) # D_800A4D08 + -4
  /* 119ECC 800D656C 156FFFF8 */       bne $t3, $t7, .L800D6550
  /* 119ED0 800D6570 ADCDFFFC */        sw $t5, -4($t6)
  /* 119ED4 800D6574 8D6D0000 */        lw $t5, ($t3) # D_800A4D08 + 0
  /* 119ED8 800D6578 24180035 */     addiu $t8, $zero, 0x35
  /* 119EDC 800D657C ADCD0000 */        sw $t5, ($t6)
  /* 119EE0 800D6580 A0830001 */        sb $v1, 1($a0) # D_800A4B18 + 1
  /* 119EE4 800D6584 10000003 */         b .L800D6594
  /* 119EE8 800D6588 A0580000 */        sb $t8, ($v0) # gSceneData + 0
  .L800D658C:
  /* 119EEC 800D658C 24190016 */     addiu $t9, $zero, 0x16
  /* 119EF0 800D6590 A0590000 */        sb $t9, ($v0) # gSceneData + 0
  .L800D6594:
  /* 119EF4 800D6594 0C00171D */       jal func_80005C74
  /* 119EF8 800D6598 00000000 */       nop 
  /* 119EFC 800D659C 8FBF001C */        lw $ra, 0x1c($sp)
  .L800D65A0:
  /* 119F00 800D65A0 27BD0020 */     addiu $sp, $sp, 0x20
  /* 119F04 800D65A4 03E00008 */        jr $ra
  /* 119F08 800D65A8 00000000 */       nop 

glabel func_ovl12_800D65AC
  /* 119F0C 800D65AC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 119F10 800D65B0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 119F14 800D65B4 3C05800D */       lui $a1, %hi(func_ovl12_800D64A0)
  /* 119F18 800D65B8 24A564A0 */     addiu $a1, $a1, %lo(func_ovl12_800D64A0)
  /* 119F1C 800D65BC 00002025 */        or $a0, $zero, $zero
  /* 119F20 800D65C0 00003025 */        or $a2, $zero, $zero
  /* 119F24 800D65C4 0C00265A */       jal omMakeGObjCommon
  /* 119F28 800D65C8 3C078000 */       lui $a3, 0x8000
  /* 119F2C 800D65CC 240E00FF */     addiu $t6, $zero, 0xff
  /* 119F30 800D65D0 AFAE0010 */        sw $t6, 0x10($sp)
  /* 119F34 800D65D4 00002025 */        or $a0, $zero, $zero
  /* 119F38 800D65D8 3C058000 */       lui $a1, 0x8000
  /* 119F3C 800D65DC 24060064 */     addiu $a2, $zero, 0x64
  /* 119F40 800D65E0 0C002E7F */       jal func_8000B9FC
  /* 119F44 800D65E4 24070002 */     addiu $a3, $zero, 2
  /* 119F48 800D65E8 0C0DA7B8 */       jal func_ovl9_80369EE0
  /* 119F4C 800D65EC 00000000 */       nop 
  /* 119F50 800D65F0 3C07800D */       lui $a3, %hi(D_ovl12_800D672C)
  /* 119F54 800D65F4 240F0002 */     addiu $t7, $zero, 2
  /* 119F58 800D65F8 AFAF0010 */        sw $t7, 0x10($sp)
  /* 119F5C 800D65FC 24E7672C */     addiu $a3, $a3, %lo(D_ovl12_800D672C)
  /* 119F60 800D6600 24040032 */     addiu $a0, $zero, 0x32
  /* 119F64 800D6604 24050032 */     addiu $a1, $zero, 0x32
  /* 119F68 800D6608 0C0DA75E */       jal func_ovl9_80369D78
  /* 119F6C 800D660C 24060064 */     addiu $a2, $zero, 0x64
  /* 119F70 800D6610 8FBF001C */        lw $ra, 0x1c($sp)
  /* 119F74 800D6614 27BD0020 */     addiu $sp, $sp, 0x20
  /* 119F78 800D6618 03E00008 */        jr $ra
  /* 119F7C 800D661C 00000000 */       nop 

glabel debug_sss_entry
  /* 119F80 800D6620 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 119F84 800D6624 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 119F88 800D6628 3C04800D */       lui $a0, %hi(D_ovl12_800D6764)
  /* 119F8C 800D662C 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 119F90 800D6630 24846764 */     addiu $a0, $a0, %lo(D_ovl12_800D6764)
  /* 119F94 800D6634 AFBF0014 */        sw $ra, 0x14($sp)
  /* 119F98 800D6638 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 119F9C 800D663C 0C001C09 */       jal func_80007024
  /* 119FA0 800D6640 AC8F000C */        sw $t7, 0xc($a0) # D_ovl12_800D6764 + 12
  /* 119FA4 800D6644 3C188037 */       lui $t8, %hi(func_ovl9_80369240)
  /* 119FA8 800D6648 3C19800D */       lui $t9, %hi(D_NF_800D69F0)
  /* 119FAC 800D664C 3C04800D */       lui $a0, %hi(D_ovl12_800D6780)
  /* 119FB0 800D6650 273969F0 */     addiu $t9, $t9, %lo(D_NF_800D69F0)
  /* 119FB4 800D6654 27189240 */     addiu $t8, $t8, %lo(func_ovl9_80369240)
  /* 119FB8 800D6658 24846780 */     addiu $a0, $a0, %lo(D_ovl12_800D6780)
  /* 119FBC 800D665C 03194023 */      subu $t0, $t8, $t9
  /* 119FC0 800D6660 0C001A0F */       jal func_8000683C
  /* 119FC4 800D6664 AC880010 */        sw $t0, 0x10($a0) # D_ovl12_800D6780 + 16
  /* 119FC8 800D6668 8FBF0014 */        lw $ra, 0x14($sp)
  /* 119FCC 800D666C 27BD0018 */     addiu $sp, $sp, 0x18
  /* 119FD0 800D6670 03E00008 */        jr $ra
  /* 119FD4 800D6674 00000000 */       nop 

  /* 119FD8 800D6678 00000000 */       nop 
  /* 119FDC 800D667C 00000000 */       nop 

# Likely start of new file
#glabel D_ovl12_800D6680   # Routine parsed as data
#  /* 119FE0 800D6680 00000000 */       nop 
#glabel D_ovl12_800D6684   # Routine parsed as data
#  /* 119FE4 800D6684 00000000 */       nop 
#glabel D_ovl12_800D6688   # Routine parsed as data
#  /* 119FE8 800D6688 800D6810 */        lb $t5, 0x6810($zero)
#  /* 119FEC 800D668C 800D6818 */        lb $t5, 0x6818($zero)
#  /* 119FF0 800D6690 800D681C */        lb $t5, 0x681c($zero)
#  /* 119FF4 800D6694 800D6824 */        lb $t5, 0x6824($zero)
#  /* 119FF8 800D6698 800D682C */        lb $t5, 0x682c($zero)
#  /* 119FFC 800D669C 800D6834 */        lb $t5, 0x6834($zero)
#  /* 11A000 800D66A0 800D683C */        lb $t5, 0x683c($zero)
#  /* 11A004 800D66A4 800D6844 */        lb $t5, 0x6844($zero)
#  /* 11A008 800D66A8 800D684C */        lb $t5, 0x684c($zero)
#  /* 11A00C 800D66AC 800D6858 */        lb $t5, 0x6858($zero)
#  /* 11A010 800D66B0 800D6860 */        lb $t5, 0x6860($zero)
#  /* 11A014 800D66B4 800D6864 */        lb $t5, 0x6864($zero)
#  /* 11A018 800D66B8 800D686C */        lb $t5, 0x686c($zero)
#  /* 11A01C 800D66BC 800D6874 */        lb $t5, 0x6874($zero)
#  /* 11A020 800D66C0 800D687C */        lb $t5, 0x687c($zero)
#  /* 11A024 800D66C4 800D6884 */        lb $t5, 0x6884($zero)
#  /* 11A028 800D66C8 800D688C */        lb $t5, 0x688c($zero)
#  /* 11A02C 800D66CC 800D6894 */        lb $t5, 0x6894($zero)
#  /* 11A030 800D66D0 800D68A0 */        lb $t5, 0x68a0($zero)
#  /* 11A034 800D66D4 800D68AC */        lb $t5, 0x68ac($zero)
#  /* 11A038 800D66D8 800D68BC */        lb $t5, 0x68bc($zero)
#  /* 11A03C 800D66DC 800D68C8 */        lb $t5, 0x68c8($zero)
#  /* 11A040 800D66E0 800D68D4 */        lb $t5, 0x68d4($zero)
#  /* 11A044 800D66E4 800D68E0 */        lb $t5, 0x68e0($zero)
#  /* 11A048 800D66E8 800D68EC */        lb $t5, 0x68ec($zero)
#  /* 11A04C 800D66EC 800D68FC */        lb $t5, 0x68fc($zero)
#  /* 11A050 800D66F0 800D6908 */        lb $t5, 0x6908($zero)
#  /* 11A054 800D66F4 800D6918 */        lb $t5, 0x6918($zero)
#  /* 11A058 800D66F8 800D6924 */        lb $t5, 0x6924($zero)
#  /* 11A05C 800D66FC 800D6930 */        lb $t5, 0x6930($zero)
#  /* 11A060 800D6700 800D693C */        lb $t5, 0x693c($zero)
#  /* 11A064 800D6704 800D6948 */        lb $t5, 0x6948($zero)
#  /* 11A068 800D6708 800D6958 */        lb $t5, 0x6958($zero)
#  /* 11A06C 800D670C 800D6964 */        lb $t5, 0x6964($zero)
#  /* 11A070 800D6710 800D6970 */        lb $t5, 0x6970($zero)
#  /* 11A074 800D6714 800D697C */        lb $t5, 0x697c($zero)
#  /* 11A078 800D6718 800D6988 */        lb $t5, 0x6988($zero)
#  /* 11A07C 800D671C 800D6998 */        lb $t5, 0x6998($zero)
#  /* 11A080 800D6720 800D69A4 */        lb $t5, 0x69a4($zero)
#  /* 11A084 800D6724 800D69B4 */        lb $t5, 0x69b4($zero)
#  /* 11A088 800D6728 800D69C0 */        lb $t5, 0x69c0($zero)
#glabel D_ovl12_800D672C   # Routine parsed as data
#  /* 11A08C 800D672C 00000000 */       nop 
#  /* 11A090 800D6730 800D6490 */        lb $t5, 0x6490($zero)
#  /* 11A094 800D6734 800D69CC */        lb $t5, 0x69cc($zero)
#  /* 11A098 800D6738 00000000 */       nop 
#  /* 11A09C 800D673C 00000000 */       nop 
# Maybe start of new file
#  /* 11A0A0 800D6740 00000000 */       nop 
#  /* 11A0A4 800D6744 00000000 */       nop 
#  /* 11A0A8 800D6748 00000003 */       sra $zero, $zero, 0
#  /* 11A0AC 800D674C 00000000 */       nop 
#  /* 11A0B0 800D6750 800D6688 */        lb $t5, 0x6688($zero)
#  /* 11A0B4 800D6754 800D6684 */        lb $t5, 0x6684($zero)
#  /* 11A0B8 800D6758 00000000 */       nop 
