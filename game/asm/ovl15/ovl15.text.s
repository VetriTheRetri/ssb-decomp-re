.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Text Sections
#  0x800D6490 -> 0x800D66E0

glabel func_ovl15_800D6490
  /* 150740 800D6490 8C830000 */        lw $v1, ($a0)
  /* 150744 800D6494 3C18800D */       lui $t8, %hi(D_ovl15_800D66F8)
  /* 150748 800D6498 271866F8 */     addiu $t8, $t8, %lo(D_ovl15_800D66F8)
  /* 15074C 800D649C 246E0008 */     addiu $t6, $v1, 8
  /* 150750 800D64A0 AC8E0000 */        sw $t6, ($a0)
  /* 150754 800D64A4 3C0FDE00 */       lui $t7, 0xde00
  /* 150758 800D64A8 AC6F0000 */        sw $t7, ($v1)
  /* 15075C 800D64AC 03E00008 */        jr $ra
  /* 150760 800D64B0 AC780004 */        sw $t8, 4($v1)

glabel func_ovl15_800D64B4
  /* 150764 800D64B4 240E0001 */     addiu $t6, $zero, 1
  /* 150768 800D64B8 3C01800D */       lui $at, %hi(D_ovl15_800D6720)
  /* 15076C 800D64BC 03E00008 */        jr $ra
  /* 150770 800D64C0 AC2E6720 */        sw $t6, %lo(D_ovl15_800D6720)($at)

glabel func_ovl15_800D64C4
  /* 150774 800D64C4 3C0E8004 */       lui $t6, %hi(D_80045470 + 2)
  /* 150778 800D64C8 95CE5472 */       lhu $t6, %lo(D_80045470 + 2)($t6)
  /* 15077C 800D64CC 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 150780 800D64D0 AFBF001C */        sw $ra, 0x1c($sp)
  /* 150784 800D64D4 31CF1000 */      andi $t7, $t6, 0x1000
  /* 150788 800D64D8 11E00009 */      beqz $t7, .L800D6500
  /* 15078C 800D64DC AFA40020 */        sw $a0, 0x20($sp)
  /* 150790 800D64E0 3C07800D */       lui $a3, %hi(D_ovl15_800D6738)
  /* 150794 800D64E4 2418000D */     addiu $t8, $zero, 0xd
  /* 150798 800D64E8 AFB80010 */        sw $t8, 0x10($sp)
  /* 15079C 800D64EC 24E76738 */     addiu $a3, $a3, %lo(D_ovl15_800D6738)
  /* 1507A0 800D64F0 24040032 */     addiu $a0, $zero, 0x32
  /* 1507A4 800D64F4 24050032 */     addiu $a1, $zero, 0x32
  /* 1507A8 800D64F8 0C0DA75E */       jal func_NF_80369D78 # couldn't be resolved
  /* 1507AC 800D64FC 24060064 */     addiu $a2, $zero, 0x64
  .L800D6500:
  /* 1507B0 800D6500 3C19800D */       lui $t9, %hi(D_ovl15_800D6720)
  /* 1507B4 800D6504 8F396720 */        lw $t9, %lo(D_ovl15_800D6720)($t9)
  /* 1507B8 800D6508 5320000B */      beql $t9, $zero, .L800D6538
  /* 1507BC 800D650C 8FBF001C */        lw $ra, 0x1c($sp)
  /* 1507C0 800D6510 0C0DA7B0 */       jal func_NF_80369EC0 # couldn't be resolved
  /* 1507C4 800D6514 00000000 */       nop 
  /* 1507C8 800D6518 3C02800A */       lui $v0, %hi(gSceneData)
  /* 1507CC 800D651C 24424AD0 */     addiu $v0, $v0, %lo(gSceneData)
  /* 1507D0 800D6520 90480000 */       lbu $t0, ($v0) # gSceneData + 0
  /* 1507D4 800D6524 24090004 */     addiu $t1, $zero, 4
  /* 1507D8 800D6528 A0490000 */        sb $t1, ($v0) # gSceneData + 0
  /* 1507DC 800D652C 0C00171D */       jal func_80005C74
  /* 1507E0 800D6530 A0480001 */        sb $t0, 1($v0) # gSceneData + 1
  /* 1507E4 800D6534 8FBF001C */        lw $ra, 0x1c($sp)
  .L800D6538:
  /* 1507E8 800D6538 27BD0020 */     addiu $sp, $sp, 0x20
  /* 1507EC 800D653C 03E00008 */        jr $ra
  /* 1507F0 800D6540 00000000 */       nop 

glabel func_ovl15_800D6544
  /* 1507F4 800D6544 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 1507F8 800D6548 AFA40040 */        sw $a0, 0x40($sp)
  /* 1507FC 800D654C 8FAA0040 */        lw $t2, 0x40($sp)
  /* 150800 800D6550 3C0E8001 */       lui $t6, %hi(func_80017DBC)
  /* 150804 800D6554 AFBF003C */        sw $ra, 0x3c($sp)
  /* 150808 800D6558 25CE7DBC */     addiu $t6, $t6, %lo(func_80017DBC)
  /* 15080C 800D655C 3C041000 */       lui $a0, (0x10000002 >> 16) # 268435458
  /* 150810 800D6560 3C058001 */       lui $a1, %hi(func_8000B1C4)
  /* 150814 800D6564 240F0032 */     addiu $t7, $zero, 0x32
  /* 150818 800D6568 24180000 */     addiu $t8, $zero, 0
  /* 15081C 800D656C 24190001 */     addiu $t9, $zero, 1
  /* 150820 800D6570 2408FFFF */     addiu $t0, $zero, -1
  /* 150824 800D6574 24090001 */     addiu $t1, $zero, 1
  /* 150828 800D6578 240B0001 */     addiu $t3, $zero, 1
  /* 15082C 800D657C AFAB0030 */        sw $t3, 0x30($sp)
  /* 150830 800D6580 AFA90024 */        sw $t1, 0x24($sp)
  /* 150834 800D6584 AFA80020 */        sw $t0, 0x20($sp)
  /* 150838 800D6588 AFB9001C */        sw $t9, 0x1c($sp)
  /* 15083C 800D658C AFB80018 */        sw $t8, 0x18($sp)
  /* 150840 800D6590 AFAF0014 */        sw $t7, 0x14($sp)
  /* 150844 800D6594 24A5B1C4 */     addiu $a1, $a1, %lo(func_8000B1C4)
  /* 150848 800D6598 34840002 */       ori $a0, $a0, (0x10000002 & 0xFFFF) # 268435458
  /* 15084C 800D659C AFAE0010 */        sw $t6, 0x10($sp)
  /* 150850 800D65A0 AFA00028 */        sw $zero, 0x28($sp)
  /* 150854 800D65A4 AFA00034 */        sw $zero, 0x34($sp)
  /* 150858 800D65A8 00003025 */        or $a2, $zero, $zero
  /* 15085C 800D65AC 3C078000 */       lui $a3, 0x8000
  /* 150860 800D65B0 0C002E4F */       jal func_8000B93C
  /* 150864 800D65B4 AFAA002C */        sw $t2, 0x2c($sp)
  /* 150868 800D65B8 14400003 */      bnez $v0, .L800D65C8
  /* 15086C 800D65BC 00402025 */        or $a0, $v0, $zero
  /* 150870 800D65C0 1000000E */         b .L800D65FC
  /* 150874 800D65C4 00001025 */        or $v0, $zero, $zero
  .L800D65C8:
  /* 150878 800D65C8 8C830074 */        lw $v1, 0x74($a0)
  /* 15087C 800D65CC 3C014396 */       lui $at, (0x43960000 >> 16) # 300.0
  /* 150880 800D65D0 44812000 */      mtc1 $at, $f4 # 300.0 to cop1
  /* 150884 800D65D4 240C0005 */     addiu $t4, $zero, 5
  /* 150888 800D65D8 3C01800D */       lui $at, %hi(D_ovl15_800D69EC)
  /* 15088C 800D65DC AC6C0080 */        sw $t4, 0x80($v1)
  /* 150890 800D65E0 E464004C */      swc1 $f4, 0x4c($v1)
  /* 150894 800D65E4 C42669EC */      lwc1 $f6, %lo(D_ovl15_800D69EC)($at)
  /* 150898 800D65E8 3C014416 */       lui $at, (0x44160000 >> 16) # 600.0
  /* 15089C 800D65EC 44814000 */      mtc1 $at, $f8 # 600.0 to cop1
  /* 1508A0 800D65F0 00801025 */        or $v0, $a0, $zero
  /* 1508A4 800D65F4 E4660044 */      swc1 $f6, 0x44($v1)
  /* 1508A8 800D65F8 E4680040 */      swc1 $f8, 0x40($v1)
  .L800D65FC:
  /* 1508AC 800D65FC 8FBF003C */        lw $ra, 0x3c($sp)
  /* 1508B0 800D6600 27BD0040 */     addiu $sp, $sp, 0x40
  /* 1508B4 800D6604 03E00008 */        jr $ra
  /* 1508B8 800D6608 00000000 */       nop 

glabel func_ovl15_800D660C
  /* 1508BC 800D660C 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 1508C0 800D6610 AFBF001C */        sw $ra, 0x1c($sp)
  /* 1508C4 800D6614 3C05800D */       lui $a1, %hi(func_ovl15_800D64C4)
  /* 1508C8 800D6618 24A564C4 */     addiu $a1, $a1, %lo(func_ovl15_800D64C4)
  /* 1508CC 800D661C 00002025 */        or $a0, $zero, $zero
  /* 1508D0 800D6620 00003025 */        or $a2, $zero, $zero
  /* 1508D4 800D6624 0C00265A */       jal omMakeGObjCommon
  /* 1508D8 800D6628 3C078000 */       lui $a3, 0x8000
  /* 1508DC 800D662C 240E00FF */     addiu $t6, $zero, 0xff
  /* 1508E0 800D6630 AFAE0010 */        sw $t6, 0x10($sp)
  /* 1508E4 800D6634 00002025 */        or $a0, $zero, $zero
  /* 1508E8 800D6638 3C058000 */       lui $a1, 0x8000
  /* 1508EC 800D663C 24060064 */     addiu $a2, $zero, 0x64
  /* 1508F0 800D6640 0C002E7F */       jal func_8000B9FC
  /* 1508F4 800D6644 24070002 */     addiu $a3, $zero, 2
  /* 1508F8 800D6648 0C035951 */       jal func_ovl15_800D6544
  /* 1508FC 800D664C 00002025 */        or $a0, $zero, $zero
  /* 150900 800D6650 0C0DA7B8 */       jal func_NF_80369EE0 # couldn't be resolved
  /* 150904 800D6654 00000000 */       nop 
  /* 150908 800D6658 3C07800D */       lui $a3, %hi(D_ovl15_800D6738)
  /* 15090C 800D665C 240F000D */     addiu $t7, $zero, 0xd
  /* 150910 800D6660 AFAF0010 */        sw $t7, 0x10($sp)
  /* 150914 800D6664 24E76738 */     addiu $a3, $a3, %lo(D_ovl15_800D6738)
  /* 150918 800D6668 24040032 */     addiu $a0, $zero, 0x32
  /* 15091C 800D666C 24050032 */     addiu $a1, $zero, 0x32
  /* 150920 800D6670 0C0DA75E */       jal func_NF_80369D78 # couldn't be resolved
  /* 150924 800D6674 24060064 */     addiu $a2, $zero, 0x64
  /* 150928 800D6678 8FBF001C */        lw $ra, 0x1c($sp)
  /* 15092C 800D667C 27BD0020 */     addiu $sp, $sp, 0x20
  /* 150930 800D6680 03E00008 */        jr $ra
  /* 150934 800D6684 00000000 */       nop 

glabel debug_falls_entry
  /* 150938 800D6688 3C0E800A */       lui $t6, %hi(D_NF_800A5240)
  /* 15093C 800D668C 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 150940 800D6690 3C04800D */       lui $a0, %hi(D_ovl15_800D68A4)
  /* 150944 800D6694 25CE5240 */     addiu $t6, $t6, %lo(D_NF_800A5240)
  /* 150948 800D6698 248468A4 */     addiu $a0, $a0, %lo(D_ovl15_800D68A4)
  /* 15094C 800D669C AFBF0014 */        sw $ra, 0x14($sp)
  /* 150950 800D66A0 25CFE700 */     addiu $t7, $t6, -0x1900
  /* 150954 800D66A4 0C001C09 */       jal func_80007024
  /* 150958 800D66A8 AC8F000C */        sw $t7, 0xc($a0) # D_ovl15_800D68A4 + 12
  /* 15095C 800D66AC 3C188039 */       lui $t8, %hi(D_NF_80392A00)
  /* 150960 800D66B0 3C19800D */       lui $t9, %hi(D_NF_800D6A00)
  /* 150964 800D66B4 3C04800D */       lui $a0, %hi(D_ovl15_800D68C0)
  /* 150968 800D66B8 27396A00 */     addiu $t9, $t9, %lo(D_NF_800D6A00)
  /* 15096C 800D66BC 27182A00 */     addiu $t8, $t8, %lo(D_NF_80392A00)
  /* 150970 800D66C0 248468C0 */     addiu $a0, $a0, %lo(D_ovl15_800D68C0)
  /* 150974 800D66C4 03194023 */      subu $t0, $t8, $t9
  /* 150978 800D66C8 0C001A0F */       jal func_8000683C
  /* 15097C 800D66CC AC880010 */        sw $t0, 0x10($a0) # D_ovl15_800D68C0 + 16
  /* 150980 800D66D0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 150984 800D66D4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 150988 800D66D8 03E00008 */        jr $ra
  /* 15098C 800D66DC 00000000 */       nop 
#
#glabel D_ovl15_800D66E0   # Routine parsed as data
#  /* 150990 800D66E0 20202000 */      addi $zero, $at, 0x2000
#  /* 150994 800D66E4 20202000 */      addi $zero, $at, 0x2000
#glabel D_ovl15_800D66E8   # Routine parsed as data
#  /* 150998 800D66E8 FFFFFF00 */        sd $ra, -0x100($ra)
#  /* 15099C 800D66EC FFFFFF00 */        sd $ra, -0x100($ra)
