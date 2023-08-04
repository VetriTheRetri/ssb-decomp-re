.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel osEPiRawStartDma
  /* 0356F0 80034AF0 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 0356F4 80034AF4 3C03A460 */       lui $v1, (0xA4600010 >> 16) # 2757754896
  /* 0356F8 80034AF8 34630010 */       ori $v1, $v1, (0xA4600010 & 0xFFFF) # 2757754896
  /* 0356FC 80034AFC AFBF001C */        sw $ra, 0x1c($sp)
  /* 035700 80034B00 AFB00018 */        sw $s0, 0x18($sp)
  /* 035704 80034B04 AFA60028 */        sw $a2, 0x28($sp)
  /* 035708 80034B08 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  /* 03570C 80034B0C 00808025 */        or $s0, $a0, $zero
  /* 035710 80034B10 304E0003 */      andi $t6, $v0, 3
  /* 035714 80034B14 51C00006 */      beql $t6, $zero, .L80034B30
  /* 035718 80034B18 92020009 */       lbu $v0, 9($s0)
  /* 03571C 80034B1C 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  .L80034B20:
  /* 035720 80034B20 304F0003 */      andi $t7, $v0, 3
  /* 035724 80034B24 55E0FFFE */      bnel $t7, $zero, .L80034B20
  /* 035728 80034B28 8C620000 */        lw $v0, ($v1) # PI_STATUS_REG + 0
  /* 03572C 80034B2C 92020009 */       lbu $v0, 9($s0)
  .L80034B30:
  /* 035730 80034B30 3C048004 */       lui $a0, %hi(__osCurrentHandle)
  /* 035734 80034B34 92190004 */       lbu $t9, 4($s0)
  /* 035738 80034B38 0002C080 */       sll $t8, $v0, 2
  /* 03573C 80034B3C 00982021 */      addu $a0, $a0, $t8
  /* 035740 80034B40 8C84D430 */        lw $a0, %lo(__osCurrentHandle)($a0)
  /* 035744 80034B44 90880004 */       lbu $t0, 4($a0)
  /* 035748 80034B48 5328003D */      beql $t9, $t0, .L80034C40
  /* 03574C 80034B4C 00E02025 */        or $a0, $a3, $zero
  /* 035750 80034B50 14400019 */      bnez $v0, .L80034BB8
  /* 035754 80034B54 00801825 */        or $v1, $a0, $zero
  /* 035758 80034B58 92020005 */       lbu $v0, 5($s0)
  /* 03575C 80034B5C 90890005 */       lbu $t1, 5($a0)
  /* 035760 80034B60 3C0AA460 */       lui $t2, %hi(PI_BSD_DOM1_LAT_REG)
  /* 035764 80034B64 3C0CA460 */       lui $t4, %hi(PI_BSD_DOM1_PGS_REG)
  /* 035768 80034B68 10490002 */       beq $v0, $t1, .L80034B74
  /* 03576C 80034B6C 3C0EA460 */       lui $t6, %hi(PI_BSD_DOM1_RLS_REG)
  /* 035770 80034B70 AD420014 */        sw $v0, %lo(PI_BSD_DOM1_LAT_REG)($t2)
  .L80034B74:
  /* 035774 80034B74 92020006 */       lbu $v0, 6($s0)
  /* 035778 80034B78 906B0006 */       lbu $t3, 6($v1) # PI_STATUS_REG + 6
  /* 03577C 80034B7C 3C18A460 */       lui $t8, %hi(PI_BSD_DOM1_PWD_REG)
  /* 035780 80034B80 504B0003 */      beql $v0, $t3, .L80034B90
  /* 035784 80034B84 92020007 */       lbu $v0, 7($s0)
  /* 035788 80034B88 AD82001C */        sw $v0, %lo(PI_BSD_DOM1_PGS_REG)($t4)
  /* 03578C 80034B8C 92020007 */       lbu $v0, 7($s0)
  .L80034B90:
  /* 035790 80034B90 906D0007 */       lbu $t5, 7($v1) # PI_STATUS_REG + 7
  /* 035794 80034B94 504D0003 */      beql $v0, $t5, .L80034BA4
  /* 035798 80034B98 92020008 */       lbu $v0, 8($s0)
  /* 03579C 80034B9C ADC20020 */        sw $v0, %lo(PI_BSD_DOM1_RLS_REG)($t6)
  /* 0357A0 80034BA0 92020008 */       lbu $v0, 8($s0)
  .L80034BA4:
  /* 0357A4 80034BA4 906F0008 */       lbu $t7, 8($v1) # PI_STATUS_REG + 8
  /* 0357A8 80034BA8 504F001B */      beql $v0, $t7, .L80034C18
  /* 0357AC 80034BAC 920F0004 */       lbu $t7, 4($s0)
  /* 0357B0 80034BB0 10000018 */         b .L80034C14
  /* 0357B4 80034BB4 AF020018 */        sw $v0, %lo(PI_BSD_DOM1_PWD_REG)($t8)
  .L80034BB8:
  /* 0357B8 80034BB8 92020005 */       lbu $v0, 5($s0)
  /* 0357BC 80034BBC 90790005 */       lbu $t9, 5($v1) # PI_STATUS_REG + 5
  /* 0357C0 80034BC0 3C08A460 */       lui $t0, %hi(PI_BSD_DOM2_LAT_REG)
  /* 0357C4 80034BC4 3C0AA460 */       lui $t2, %hi(PI_BSD_DOM2_PGS_REG)
  /* 0357C8 80034BC8 10590002 */       beq $v0, $t9, .L80034BD4
  /* 0357CC 80034BCC 3C0CA460 */       lui $t4, %hi(PI_BSD_DOM2_RLS_REG)
  /* 0357D0 80034BD0 AD020024 */        sw $v0, %lo(PI_BSD_DOM2_LAT_REG)($t0)
  .L80034BD4:
  /* 0357D4 80034BD4 92020006 */       lbu $v0, 6($s0)
  /* 0357D8 80034BD8 90690006 */       lbu $t1, 6($v1) # PI_STATUS_REG + 6
  /* 0357DC 80034BDC 3C0EA460 */       lui $t6, %hi(PI_BSD_DOM2_PWD_REG)
  /* 0357E0 80034BE0 50490003 */      beql $v0, $t1, .L80034BF0
  /* 0357E4 80034BE4 92020007 */       lbu $v0, 7($s0)
  /* 0357E8 80034BE8 AD42002C */        sw $v0, %lo(PI_BSD_DOM2_PGS_REG)($t2)
  /* 0357EC 80034BEC 92020007 */       lbu $v0, 7($s0)
  .L80034BF0:
  /* 0357F0 80034BF0 906B0007 */       lbu $t3, 7($v1) # PI_STATUS_REG + 7
  /* 0357F4 80034BF4 504B0003 */      beql $v0, $t3, .L80034C04
  /* 0357F8 80034BF8 92020008 */       lbu $v0, 8($s0)
  /* 0357FC 80034BFC AD820030 */        sw $v0, %lo(PI_BSD_DOM2_RLS_REG)($t4)
  /* 035800 80034C00 92020008 */       lbu $v0, 8($s0)
  .L80034C04:
  /* 035804 80034C04 906D0008 */       lbu $t5, 8($v1) # PI_STATUS_REG + 8
  /* 035808 80034C08 504D0003 */      beql $v0, $t5, .L80034C18
  /* 03580C 80034C0C 920F0004 */       lbu $t7, 4($s0)
  /* 035810 80034C10 ADC20028 */        sw $v0, %lo(PI_BSD_DOM2_PWD_REG)($t6)
  .L80034C14:
  /* 035814 80034C14 920F0004 */       lbu $t7, 4($s0)
  .L80034C18:
  /* 035818 80034C18 A06F0004 */        sb $t7, 4($v1) # PI_STATUS_REG + 4
  /* 03581C 80034C1C 92180005 */       lbu $t8, 5($s0)
  /* 035820 80034C20 A0780005 */        sb $t8, 5($v1) # PI_STATUS_REG + 5
  /* 035824 80034C24 92190006 */       lbu $t9, 6($s0)
  /* 035828 80034C28 A0790006 */        sb $t9, 6($v1) # PI_STATUS_REG + 6
  /* 03582C 80034C2C 92080007 */       lbu $t0, 7($s0)
  /* 035830 80034C30 A0680007 */        sb $t0, 7($v1) # PI_STATUS_REG + 7
  /* 035834 80034C34 92090008 */       lbu $t1, 8($s0)
  /* 035838 80034C38 A0690008 */        sb $t1, 8($v1) # PI_STATUS_REG + 8
  /* 03583C 80034C3C 00E02025 */        or $a0, $a3, $zero
  .L80034C40:
  /* 035840 80034C40 0C00C854 */       jal osVirtualToPhysical
  /* 035844 80034C44 AFA50024 */        sw $a1, 0x24($sp)
  /* 035848 80034C48 8FA50024 */        lw $a1, 0x24($sp)
  /* 03584C 80034C4C 3C0AA460 */       lui $t2, %hi(PI_DRAM_ADDR_REG)
  /* 035850 80034C50 AD420000 */        sw $v0, %lo(PI_DRAM_ADDR_REG)($t2)
  /* 035854 80034C54 8FAC0028 */        lw $t4, 0x28($sp)
  /* 035858 80034C58 8E0B000C */        lw $t3, 0xc($s0)
  /* 03585C 80034C5C 3C011FFF */       lui $at, (0x1FFFFFFF >> 16) # 536870911
  /* 035860 80034C60 3421FFFF */       ori $at, $at, (0x1FFFFFFF & 0xFFFF) # 536870911
  /* 035864 80034C64 016C6825 */        or $t5, $t3, $t4
  /* 035868 80034C68 01A17024 */       and $t6, $t5, $at
  /* 03586C 80034C6C 3C0FA460 */       lui $t7, %hi(PI_CART_ADDR_REG)
  /* 035870 80034C70 10A00006 */      beqz $a1, .L80034C8C
  /* 035874 80034C74 ADEE0004 */        sw $t6, %lo(PI_CART_ADDR_REG)($t7)
  /* 035878 80034C78 24010001 */     addiu $at, $zero, 1
  /* 03587C 80034C7C 10A10008 */       beq $a1, $at, .L80034CA0
  /* 035880 80034C80 8FA90030 */        lw $t1, 0x30($sp)
  /* 035884 80034C84 1000000D */         b .L80034CBC
  /* 035888 80034C88 2402FFFF */     addiu $v0, $zero, -1
  .L80034C8C:
  /* 03588C 80034C8C 8FB80030 */        lw $t8, 0x30($sp)
  /* 035890 80034C90 3C08A460 */       lui $t0, %hi(PI_WR_LEN_REG)
  /* 035894 80034C94 2719FFFF */     addiu $t9, $t8, -1
  /* 035898 80034C98 10000007 */         b .L80034CB8
  /* 03589C 80034C9C AD19000C */        sw $t9, %lo(PI_WR_LEN_REG)($t0)
  .L80034CA0:
  /* 0358A0 80034CA0 252AFFFF */     addiu $t2, $t1, -1
  /* 0358A4 80034CA4 3C0BA460 */       lui $t3, %hi(PI_RD_LEN_REG)
  /* 0358A8 80034CA8 10000003 */         b .L80034CB8
  /* 0358AC 80034CAC AD6A0008 */        sw $t2, %lo(PI_RD_LEN_REG)($t3)
  /* 0358B0 80034CB0 10000002 */         b .L80034CBC
  /* 0358B4 80034CB4 2402FFFF */     addiu $v0, $zero, -1
  .L80034CB8:
  /* 0358B8 80034CB8 00001025 */        or $v0, $zero, $zero
  .L80034CBC:
  /* 0358BC 80034CBC 8FBF001C */        lw $ra, 0x1c($sp)
  /* 0358C0 80034CC0 8FB00018 */        lw $s0, 0x18($sp)
  /* 0358C4 80034CC4 27BD0020 */     addiu $sp, $sp, 0x20
  /* 0358C8 80034CC8 03E00008 */        jr $ra
  /* 0358CC 80034CCC 00000000 */       nop 
