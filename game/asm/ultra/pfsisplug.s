.include "macros.inc"

.section .bss

#D_800A0710
glabel __osPfsPifRam
    .space 60
glabel D_800A074C
    .space 4

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel osPfsIsPlug
  /* 038470 80037870 27BDFFC0 */     addiu $sp, $sp, -0x40
  /* 038474 80037874 AFBF0014 */        sw $ra, 0x14($sp)
  /* 038478 80037878 240E0003 */     addiu $t6, $zero, 3
  /* 03847C 8003787C AFA40040 */        sw $a0, 0x40($sp)
  /* 038480 80037880 AFA50044 */        sw $a1, 0x44($sp)
  /* 038484 80037884 AFA0003C */        sw $zero, 0x3c($sp)
  /* 038488 80037888 A3A0001F */        sb $zero, 0x1f($sp)
  /* 03848C 8003788C 0C00C69C */       jal __osSiGetAccess
  /* 038490 80037890 AFAE0018 */        sw $t6, 0x18($sp)
  .L80037894:
  /* 038494 80037894 0C00DE84 */       jal __osPfsRequestData
  /* 038498 80037898 00002025 */        or $a0, $zero, $zero
  /* 03849C 8003789C 3C05800A */       lui $a1, %hi(__osPfsPifRam)
  /* 0384A0 800378A0 24A50710 */     addiu $a1, $a1, %lo(__osPfsPifRam)
  /* 0384A4 800378A4 0C00C9D8 */       jal __osSiRawStartDma
  /* 0384A8 800378A8 24040001 */     addiu $a0, $zero, 1
  /* 0384AC 800378AC AFA2003C */        sw $v0, 0x3c($sp)
  /* 0384B0 800378B0 8FA40040 */        lw $a0, 0x40($sp)
  /* 0384B4 800378B4 27A50038 */     addiu $a1, $sp, 0x38
  /* 0384B8 800378B8 0C00C084 */       jal osRecvMesg
  /* 0384BC 800378BC 24060001 */     addiu $a2, $zero, 1
  /* 0384C0 800378C0 3C05800A */       lui $a1, %hi(__osPfsPifRam)
  /* 0384C4 800378C4 24A50710 */     addiu $a1, $a1, %lo(__osPfsPifRam)
  /* 0384C8 800378C8 0C00C9D8 */       jal __osSiRawStartDma
  /* 0384CC 800378CC 00002025 */        or $a0, $zero, $zero
  /* 0384D0 800378D0 AFA2003C */        sw $v0, 0x3c($sp)
  /* 0384D4 800378D4 8FA40040 */        lw $a0, 0x40($sp)
  /* 0384D8 800378D8 27A50038 */     addiu $a1, $sp, 0x38
  /* 0384DC 800378DC 0C00C084 */       jal osRecvMesg
  /* 0384E0 800378E0 24060001 */     addiu $a2, $zero, 1
  /* 0384E4 800378E4 27A40037 */     addiu $a0, $sp, 0x37
  /* 0384E8 800378E8 0C00DEB8 */       jal func_80037AE0
  /* 0384EC 800378EC 27A50024 */     addiu $a1, $sp, 0x24
  /* 0384F0 800378F0 3C0F800A */       lui $t7, %hi(__osMaxControllers)
  /* 0384F4 800378F4 91EFEFE1 */       lbu $t7, %lo(__osMaxControllers)($t7)
  /* 0384F8 800378F8 AFA00020 */        sw $zero, 0x20($sp)
  /* 0384FC 800378FC 19E00014 */      blez $t7, .L80037950
  /* 038500 80037900 00000000 */       nop 
  .L80037904:
  /* 038504 80037904 8FB80020 */        lw $t8, 0x20($sp)
  /* 038508 80037908 0018C880 */       sll $t9, $t8, 2
  /* 03850C 8003790C 03B94021 */      addu $t0, $sp, $t9
  /* 038510 80037910 91080026 */       lbu $t0, 0x26($t0)
  /* 038514 80037914 31090004 */      andi $t1, $t0, 4
  /* 038518 80037918 15200005 */      bnez $t1, .L80037930
  /* 03851C 8003791C 00000000 */       nop 
  /* 038520 80037920 8FAA0018 */        lw $t2, 0x18($sp)
  /* 038524 80037924 254BFFFF */     addiu $t3, $t2, -1
  /* 038528 80037928 10000009 */         b .L80037950
  /* 03852C 8003792C AFAB0018 */        sw $t3, 0x18($sp)
  .L80037930:
  /* 038530 80037930 8FAC0020 */        lw $t4, 0x20($sp)
  /* 038534 80037934 3C0E800A */       lui $t6, %hi(__osMaxControllers)
  /* 038538 80037938 91CEEFE1 */       lbu $t6, %lo(__osMaxControllers)($t6)
  /* 03853C 8003793C 258D0001 */     addiu $t5, $t4, 1
  /* 038540 80037940 AFAD0020 */        sw $t5, 0x20($sp)
  /* 038544 80037944 01AE082A */       slt $at, $t5, $t6
  /* 038548 80037948 1420FFEE */      bnez $at, .L80037904
  /* 03854C 8003794C 00000000 */       nop 
  .L80037950:
  /* 038550 80037950 3C0F800A */       lui $t7, %hi(__osMaxControllers)
  /* 038554 80037954 91EFEFE1 */       lbu $t7, %lo(__osMaxControllers)($t7)
  /* 038558 80037958 8FB80020 */        lw $t8, 0x20($sp)
  /* 03855C 8003795C 15F80002 */       bne $t7, $t8, .L80037968
  /* 038560 80037960 00000000 */       nop 
  /* 038564 80037964 AFA00018 */        sw $zero, 0x18($sp)
  .L80037968:
  /* 038568 80037968 8FB90018 */        lw $t9, 0x18($sp)
  /* 03856C 8003796C 1F20FFC9 */      bgtz $t9, .L80037894
  /* 038570 80037970 00000000 */       nop 
  /* 038574 80037974 3C08800A */       lui $t0, %hi(__osMaxControllers)
  /* 038578 80037978 9108EFE1 */       lbu $t0, %lo(__osMaxControllers)($t0)
  /* 03857C 8003797C AFA00020 */        sw $zero, 0x20($sp)
  /* 038580 80037980 19000019 */      blez $t0, .L800379E8
  /* 038584 80037984 00000000 */       nop 
  .L80037988:
  /* 038588 80037988 8FA90020 */        lw $t1, 0x20($sp)
  /* 03858C 8003798C 27AB0024 */     addiu $t3, $sp, 0x24
  /* 038590 80037990 00095080 */       sll $t2, $t1, 2
  /* 038594 80037994 014B6021 */      addu $t4, $t2, $t3
  /* 038598 80037998 918D0003 */       lbu $t5, 3($t4)
  /* 03859C 8003799C 15A0000A */      bnez $t5, .L800379C8
  /* 0385A0 800379A0 00000000 */       nop 
  /* 0385A4 800379A4 918E0002 */       lbu $t6, 2($t4)
  /* 0385A8 800379A8 31CF0001 */      andi $t7, $t6, 1
  /* 0385AC 800379AC 11E00006 */      beqz $t7, .L800379C8
  /* 0385B0 800379B0 00000000 */       nop 
  /* 0385B4 800379B4 93B8001F */       lbu $t8, 0x1f($sp)
  /* 0385B8 800379B8 24190001 */     addiu $t9, $zero, 1
  /* 0385BC 800379BC 01394004 */      sllv $t0, $t9, $t1
  /* 0385C0 800379C0 03085025 */        or $t2, $t8, $t0
  /* 0385C4 800379C4 A3AA001F */        sb $t2, 0x1f($sp)
  .L800379C8:
  /* 0385C8 800379C8 8FAB0020 */        lw $t3, 0x20($sp)
  /* 0385CC 800379CC 3C0C800A */       lui $t4, %hi(__osMaxControllers)
  /* 0385D0 800379D0 918CEFE1 */       lbu $t4, %lo(__osMaxControllers)($t4)
  /* 0385D4 800379D4 256D0001 */     addiu $t5, $t3, 1
  /* 0385D8 800379D8 AFAD0020 */        sw $t5, 0x20($sp)
  /* 0385DC 800379DC 01AC082A */       slt $at, $t5, $t4
  /* 0385E0 800379E0 1420FFE9 */      bnez $at, .L80037988
  /* 0385E4 800379E4 00000000 */       nop 
  .L800379E8:
  /* 0385E8 800379E8 0C00C6AD */       jal __osSiRelAccess
  /* 0385EC 800379EC 00000000 */       nop 
  /* 0385F0 800379F0 93AE001F */       lbu $t6, 0x1f($sp)
  /* 0385F4 800379F4 8FAF0044 */        lw $t7, 0x44($sp)
  /* 0385F8 800379F8 A1EE0000 */        sb $t6, ($t7)
  /* 0385FC 800379FC 8FBF0014 */        lw $ra, 0x14($sp)
  /* 038600 80037A00 8FA2003C */        lw $v0, 0x3c($sp)
  /* 038604 80037A04 27BD0040 */     addiu $sp, $sp, 0x40
  /* 038608 80037A08 03E00008 */        jr $ra
  /* 03860C 80037A0C 00000000 */       nop 

glabel __osPfsRequestData
  /* 038610 80037A10 27BDFFF0 */     addiu $sp, $sp, -0x10
  /* 038614 80037A14 3C0D800A */       lui $t5, %hi(__osMaxControllers)
  /* 038618 80037A18 91ADEFE1 */       lbu $t5, %lo(__osMaxControllers)($t5)
  /* 03861C 80037A1C 308400FF */      andi $a0, $a0, 0xff
  /* 038620 80037A20 3C01800A */       lui $at, %hi(__osContLastCmd)
  /* 038624 80037A24 3C0E800A */       lui $t6, %hi(__osPfsPifRam)
  /* 038628 80037A28 A024EFE0 */        sb $a0, %lo(__osContLastCmd)($at)
  /* 03862C 80037A2C 25CE0710 */     addiu $t6, $t6, %lo(__osPfsPifRam)
  /* 038630 80037A30 3C01800A */       lui $at, %hi(D_800A074C)
  /* 038634 80037A34 240F0001 */     addiu $t7, $zero, 1
  /* 038638 80037A38 241800FF */     addiu $t8, $zero, 0xff
  /* 03863C 80037A3C 24190001 */     addiu $t9, $zero, 1
  /* 038640 80037A40 24080003 */     addiu $t0, $zero, 3
  /* 038644 80037A44 240900FF */     addiu $t1, $zero, 0xff
  /* 038648 80037A48 240A00FF */     addiu $t2, $zero, 0xff
  /* 03864C 80037A4C 240B00FF */     addiu $t3, $zero, 0xff
  /* 038650 80037A50 240C00FF */     addiu $t4, $zero, 0xff
  /* 038654 80037A54 AFAE000C */        sw $t6, 0xc($sp)
  /* 038658 80037A58 AC2F074C */        sw $t7, %lo(D_800A074C)($at)
  /* 03865C 80037A5C A3B80004 */        sb $t8, 4($sp)
  /* 038660 80037A60 A3B90005 */        sb $t9, 5($sp)
  /* 038664 80037A64 A3A80006 */        sb $t0, 6($sp)
  /* 038668 80037A68 A3A40007 */        sb $a0, 7($sp)
  /* 03866C 80037A6C A3A90008 */        sb $t1, 8($sp)
  /* 038670 80037A70 A3AA0009 */        sb $t2, 9($sp)
  /* 038674 80037A74 A3AB000A */        sb $t3, 0xa($sp)
  /* 038678 80037A78 A3AC000B */        sb $t4, 0xb($sp)
  /* 03867C 80037A7C 19A00013 */      blez $t5, .L80037ACC
  /* 038680 80037A80 AFA00000 */        sw $zero, ($sp)
  .L80037A84:
  /* 038684 80037A84 27AF0004 */     addiu $t7, $sp, 4
  /* 038688 80037A88 8DE10000 */        lw $at, ($t7)
  /* 03868C 80037A8C 8FAE000C */        lw $t6, 0xc($sp)
  /* 038690 80037A90 3C0C800A */       lui $t4, %hi(__osMaxControllers)
  /* 038694 80037A94 A9C10000 */       swl $at, ($t6)
  /* 038698 80037A98 B9C10003 */       swr $at, 3($t6)
  /* 03869C 80037A9C 8DF90004 */        lw $t9, 4($t7)
  /* 0386A0 80037AA0 A9D90004 */       swl $t9, 4($t6)
  /* 0386A4 80037AA4 B9D90007 */       swr $t9, 7($t6)
  /* 0386A8 80037AA8 8FAA0000 */        lw $t2, ($sp)
  /* 0386AC 80037AAC 918CEFE1 */       lbu $t4, %lo(__osMaxControllers)($t4)
  /* 0386B0 80037AB0 8FA8000C */        lw $t0, 0xc($sp)
  /* 0386B4 80037AB4 254B0001 */     addiu $t3, $t2, 1
  /* 0386B8 80037AB8 016C082A */       slt $at, $t3, $t4
  /* 0386BC 80037ABC 25090008 */     addiu $t1, $t0, 8
  /* 0386C0 80037AC0 AFAB0000 */        sw $t3, ($sp)
  /* 0386C4 80037AC4 1420FFEF */      bnez $at, .L80037A84
  /* 0386C8 80037AC8 AFA9000C */        sw $t1, 0xc($sp)
  .L80037ACC:
  /* 0386CC 80037ACC 8FB8000C */        lw $t8, 0xc($sp)
  /* 0386D0 80037AD0 240D00FE */     addiu $t5, $zero, 0xfe
  /* 0386D4 80037AD4 27BD0010 */     addiu $sp, $sp, 0x10
  /* 0386D8 80037AD8 03E00008 */        jr $ra
  /* 0386DC 80037ADC A30D0000 */        sb $t5, ($t8)

glabel func_80037AE0
  /* 0386E0 80037AE0 3C0F800A */       lui $t7, %hi(__osMaxControllers)
  /* 0386E4 80037AE4 91EFEFE1 */       lbu $t7, %lo(__osMaxControllers)($t7)
  /* 0386E8 80037AE8 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 0386EC 80037AEC 3C0E800A */       lui $t6, %hi(__osPfsPifRam)
  /* 0386F0 80037AF0 25CE0710 */     addiu $t6, $t6, %lo(__osPfsPifRam)
  /* 0386F4 80037AF4 A3A00007 */        sb $zero, 7($sp)
  /* 0386F8 80037AF8 AFAE0014 */        sw $t6, 0x14($sp)
  /* 0386FC 80037AFC 19E00028 */      blez $t7, .L80037BA0
  /* 038700 80037B00 AFA00008 */        sw $zero, 8($sp)
  .L80037B04:
  /* 038704 80037B04 8FB90014 */        lw $t9, 0x14($sp)
  /* 038708 80037B08 27B8000C */     addiu $t8, $sp, 0xc
  /* 03870C 80037B0C 8B210000 */       lwl $at, ($t9)
  /* 038710 80037B10 9B210003 */       lwr $at, 3($t9)
  /* 038714 80037B14 AF010000 */        sw $at, ($t8)
  /* 038718 80037B18 8B290004 */       lwl $t1, 4($t9)
  /* 03871C 80037B1C 9B290007 */       lwr $t1, 7($t9)
  /* 038720 80037B20 AF090004 */        sw $t1, 4($t8)
  /* 038724 80037B24 93AA000E */       lbu $t2, 0xe($sp)
  /* 038728 80037B28 314B00C0 */      andi $t3, $t2, 0xc0
  /* 03872C 80037B2C 000B6103 */       sra $t4, $t3, 4
  /* 038730 80037B30 A0AC0003 */        sb $t4, 3($a1)
  /* 038734 80037B34 90AD0003 */       lbu $t5, 3($a1)
  /* 038738 80037B38 15A0000E */      bnez $t5, .L80037B74
  /* 03873C 80037B3C 00000000 */       nop 
  /* 038740 80037B40 93AE0011 */       lbu $t6, 0x11($sp)
  /* 038744 80037B44 93A80010 */       lbu $t0, 0x10($sp)
  /* 038748 80037B48 240B0001 */     addiu $t3, $zero, 1
  /* 03874C 80037B4C 000E7A00 */       sll $t7, $t6, 8
  /* 038750 80037B50 01E8C025 */        or $t8, $t7, $t0
  /* 038754 80037B54 A4B80000 */        sh $t8, ($a1)
  /* 038758 80037B58 93B90012 */       lbu $t9, 0x12($sp)
  /* 03875C 80037B5C A0B90002 */        sb $t9, 2($a1)
  /* 038760 80037B60 8FAA0008 */        lw $t2, 8($sp)
  /* 038764 80037B64 93A90007 */       lbu $t1, 7($sp)
  /* 038768 80037B68 014B6004 */      sllv $t4, $t3, $t2
  /* 03876C 80037B6C 012C6825 */        or $t5, $t1, $t4
  /* 038770 80037B70 A3AD0007 */        sb $t5, 7($sp)
  .L80037B74:
  /* 038774 80037B74 8FAE0008 */        lw $t6, 8($sp)
  /* 038778 80037B78 3C19800A */       lui $t9, %hi(__osMaxControllers)
  /* 03877C 80037B7C 9339EFE1 */       lbu $t9, %lo(__osMaxControllers)($t9)
  /* 038780 80037B80 8FA80014 */        lw $t0, 0x14($sp)
  /* 038784 80037B84 25CF0001 */     addiu $t7, $t6, 1
  /* 038788 80037B88 01F9082A */       slt $at, $t7, $t9
  /* 03878C 80037B8C 25180008 */     addiu $t8, $t0, 8
  /* 038790 80037B90 AFB80014 */        sw $t8, 0x14($sp)
  /* 038794 80037B94 AFAF0008 */        sw $t7, 8($sp)
  /* 038798 80037B98 1420FFDA */      bnez $at, .L80037B04
  /* 03879C 80037B9C 24A50004 */     addiu $a1, $a1, 4
  .L80037BA0:
  /* 0387A0 80037BA0 93AB0007 */       lbu $t3, 7($sp)
  /* 0387A4 80037BA4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 0387A8 80037BA8 03E00008 */        jr $ra
  /* 0387AC 80037BAC A08B0000 */        sb $t3, ($a0)
