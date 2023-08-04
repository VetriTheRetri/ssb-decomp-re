.include "macros.inc"

.section .data

glabel D_8003D620
  .incbin "libultra.raw.bin", 0x3D220, 0x1C

glabel D_8003D63C
  .incbin "libultra.raw.bin", 0x3D23C, 0x4

.section .bss
.balign 16

glabel D_800A0750
    .space 4528
glabel D_800A1900
    .space 24
glabel D_800A1918
    .space 24
glabel D_800A1930
    .space 24
glabel D_800A1948
    .space 24
glabel D_800A1960
    .space 16


# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
glabel osCreateViManager
  /* 039A40 80038E40 27BDFFD0 */     addiu $sp, $sp, -0x30
  /* 039A44 80038E44 AFB00020 */        sw $s0, 0x20($sp)
  /* 039A48 80038E48 3C108004 */       lui $s0, %hi(D_8003D620)
  /* 039A4C 80038E4C 2610D620 */     addiu $s0, $s0, %lo(D_8003D620)
  /* 039A50 80038E50 8E0E0000 */        lw $t6, ($s0) # D_8003D620 + 0
  /* 039A54 80038E54 AFBF0024 */        sw $ra, 0x24($sp)
  /* 039A58 80038E58 AFA40030 */        sw $a0, 0x30($sp)
  /* 039A5C 80038E5C 55C00054 */      bnel $t6, $zero, .L80038FB0
  /* 039A60 80038E60 8FBF0024 */        lw $ra, 0x24($sp)
  /* 039A64 80038E64 0C00D378 */       jal __osTimerServicesInit
  /* 039A68 80038E68 00000000 */       nop 
  /* 039A6C 80038E6C 3C018004 */       lui $at, %hi(D_8003D63C)
  /* 039A70 80038E70 3C04800A */       lui $a0, %hi(D_800A1900)
  /* 039A74 80038E74 3C05800A */       lui $a1, %hi(D_800A1918)
  /* 039A78 80038E78 AC20D63C */        sw $zero, %lo(D_8003D63C)($at)
  /* 039A7C 80038E7C 24A51918 */     addiu $a1, $a1, %lo(D_800A1918)
  /* 039A80 80038E80 24841900 */     addiu $a0, $a0, %lo(D_800A1900)
  /* 039A84 80038E84 0C00D120 */       jal osCreateMesgQueue
  /* 039A88 80038E88 24060005 */     addiu $a2, $zero, 5
  /* 039A8C 80038E8C 3C06800A */       lui $a2, %hi(D_800A1930)
  /* 039A90 80038E90 3C07800A */       lui $a3, %hi(D_800A1948)
  /* 039A94 80038E94 24E71948 */     addiu $a3, $a3, %lo(D_800A1948)
  /* 039A98 80038E98 24C61930 */     addiu $a2, $a2, %lo(D_800A1930)
  /* 039A9C 80038E9C 240F000D */     addiu $t7, $zero, 0xd
  /* 039AA0 80038EA0 2418000E */     addiu $t8, $zero, 0xe
  /* 039AA4 80038EA4 3C05800A */       lui $a1, %hi(D_800A1900)
  /* 039AA8 80038EA8 A4CF0000 */        sh $t7, ($a2) # D_800A1930 + 0
  /* 039AAC 80038EAC A0C00002 */        sb $zero, 2($a2) # D_800A1930 + 2
  /* 039AB0 80038EB0 ACC00004 */        sw $zero, 4($a2) # D_800A1930 + 4
  /* 039AB4 80038EB4 A4F80000 */        sh $t8, ($a3) # D_800A1948 + 0
  /* 039AB8 80038EB8 A0E00002 */        sb $zero, 2($a3) # D_800A1948 + 2
  /* 039ABC 80038EBC ACE00004 */        sw $zero, 4($a3) # D_800A1948 + 4
  /* 039AC0 80038EC0 24A51900 */     addiu $a1, $a1, %lo(D_800A1900)
  /* 039AC4 80038EC4 0C00CD28 */       jal osSetEventMesg
  /* 039AC8 80038EC8 24040007 */     addiu $a0, $zero, 7
  /* 039ACC 80038ECC 3C07800A */       lui $a3, 0x800a
  /* 039AD0 80038ED0 3C05800A */       lui $a1, %hi(D_800A1900)
  /* 039AD4 80038ED4 24E61948 */     addiu $a2, $a3, 0x1948
  /* 039AD8 80038ED8 24A51900 */     addiu $a1, $a1, %lo(D_800A1900)
  /* 039ADC 80038EDC 0C00CD28 */       jal osSetEventMesg
  /* 039AE0 80038EE0 24040003 */     addiu $a0, $zero, 3
  /* 039AE4 80038EE4 2419FFFF */     addiu $t9, $zero, -1
  /* 039AE8 80038EE8 AFB90028 */        sw $t9, 0x28($sp)
  /* 039AEC 80038EEC 0C00D21C */       jal osGetThreadPri
  /* 039AF0 80038EF0 00002025 */        or $a0, $zero, $zero
  /* 039AF4 80038EF4 8FA80030 */        lw $t0, 0x30($sp)
  /* 039AF8 80038EF8 00002025 */        or $a0, $zero, $zero
  /* 039AFC 80038EFC 0048082A */       slt $at, $v0, $t0
  /* 039B00 80038F00 10200003 */      beqz $at, .L80038F10
  /* 039B04 80038F04 01002825 */        or $a1, $t0, $zero
  /* 039B08 80038F08 0C00D1E4 */       jal osSetThreadPri
  /* 039B0C 80038F0C AFA20028 */        sw $v0, 0x28($sp)
  .L80038F10:
  /* 039B10 80038F10 0C00D608 */       jal __osDisableInt
  /* 039B14 80038F14 00000000 */       nop 
  /* 039B18 80038F18 8FAB0030 */        lw $t3, 0x30($sp)
  /* 039B1C 80038F1C 3C03800A */       lui $v1, %hi(D_800A1900)
  /* 039B20 80038F20 3C04800A */       lui $a0, %hi(D_800A0750)
  /* 039B24 80038F24 3C0A800A */       lui $t2, %hi(D_800A1900)
  /* 039B28 80038F28 24840750 */     addiu $a0, $a0, %lo(D_800A0750)
  /* 039B2C 80038F2C 24631900 */     addiu $v1, $v1, %lo(D_800A1900)
  /* 039B30 80038F30 24090001 */     addiu $t1, $zero, 1
  /* 039B34 80038F34 254A1900 */     addiu $t2, $t2, %lo(D_800A1900)
  /* 039B38 80038F38 3C068004 */       lui $a2, %hi(func_80038FC0)
  /* 039B3C 80038F3C AFA2002C */        sw $v0, 0x2c($sp)
  /* 039B40 80038F40 AE090000 */        sw $t1, ($s0) # D_8003D620 + 0
  /* 039B44 80038F44 AE040004 */        sw $a0, 4($s0) # D_8003D620 + 4
  /* 039B48 80038F48 AE030008 */        sw $v1, 8($s0) # D_8003D620 + 8
  /* 039B4C 80038F4C AE03000C */        sw $v1, 0xc($s0) # D_8003D620 + 12
  /* 039B50 80038F50 AE000010 */        sw $zero, 0x10($s0) # D_8003D620 + 16
  /* 039B54 80038F54 AE000014 */        sw $zero, 0x14($s0) # D_8003D620 + 20
  /* 039B58 80038F58 AE000018 */        sw $zero, 0x18($s0) # D_8003D620 + 24
  /* 039B5C 80038F5C 24C68FC0 */     addiu $a2, $a2, %lo(func_80038FC0)
  /* 039B60 80038F60 AFAA0010 */        sw $t2, 0x10($sp)
  /* 039B64 80038F64 00002825 */        or $a1, $zero, $zero
  /* 039B68 80038F68 02003825 */        or $a3, $s0, $zero
  /* 039B6C 80038F6C 0C00C788 */       jal osCreateThread
  /* 039B70 80038F70 AFAB0014 */        sw $t3, 0x14($sp)
  /* 039B74 80038F74 0C00D618 */       jal __osViInit
  /* 039B78 80038F78 00000000 */       nop 
  /* 039B7C 80038F7C 3C04800A */       lui $a0, %hi(D_800A0750)
  /* 039B80 80038F80 0C00E464 */       jal osStartThread
  /* 039B84 80038F84 24840750 */     addiu $a0, $a0, %lo(D_800A0750)
  /* 039B88 80038F88 0C00D610 */       jal __osRestoreInt
  /* 039B8C 80038F8C 8FA4002C */        lw $a0, 0x2c($sp)
  /* 039B90 80038F90 8FAC0028 */        lw $t4, 0x28($sp)
  /* 039B94 80038F94 2401FFFF */     addiu $at, $zero, -1
  /* 039B98 80038F98 00002025 */        or $a0, $zero, $zero
  /* 039B9C 80038F9C 51810004 */      beql $t4, $at, .L80038FB0
  /* 039BA0 80038FA0 8FBF0024 */        lw $ra, 0x24($sp)
  /* 039BA4 80038FA4 0C00D1E4 */       jal osSetThreadPri
  /* 039BA8 80038FA8 01802825 */        or $a1, $t4, $zero
  /* 039BAC 80038FAC 8FBF0024 */        lw $ra, 0x24($sp)
  .L80038FB0:
  /* 039BB0 80038FB0 8FB00020 */        lw $s0, 0x20($sp)
  /* 039BB4 80038FB4 27BD0030 */     addiu $sp, $sp, 0x30
  /* 039BB8 80038FB8 03E00008 */        jr $ra
  /* 039BBC 80038FBC 00000000 */       nop 

glabel func_80038FC0
  /* 039BC0 80038FC0 27BDFFB0 */     addiu $sp, $sp, -0x50
  /* 039BC4 80038FC4 AFBF0034 */        sw $ra, 0x34($sp)
  /* 039BC8 80038FC8 AFB70030 */        sw $s7, 0x30($sp)
  /* 039BCC 80038FCC 0080B825 */        or $s7, $a0, $zero
  /* 039BD0 80038FD0 AFB6002C */        sw $s6, 0x2c($sp)
  /* 039BD4 80038FD4 AFB50028 */        sw $s5, 0x28($sp)
  /* 039BD8 80038FD8 AFB40024 */        sw $s4, 0x24($sp)
  /* 039BDC 80038FDC AFB30020 */        sw $s3, 0x20($sp)
  /* 039BE0 80038FE0 AFB2001C */        sw $s2, 0x1c($sp)
  /* 039BE4 80038FE4 AFB10018 */        sw $s1, 0x18($sp)
  /* 039BE8 80038FE8 AFB00014 */        sw $s0, 0x14($sp)
  /* 039BEC 80038FEC 0C00E454 */       jal __osViGetCurrentContext
  /* 039BF0 80038FF0 AFA00044 */        sw $zero, 0x44($sp)
  /* 039BF4 80038FF4 94430002 */       lhu $v1, 2($v0)
  /* 039BF8 80038FF8 3C01800A */       lui $at, %hi(D_800A1960)
  /* 039BFC 80038FFC 2416000E */     addiu $s6, $zero, 0xe
  /* 039C00 80039000 14600004 */      bnez $v1, .L80039014
  /* 039C04 80039004 A4231960 */        sh $v1, %lo(D_800A1960)($at)
  /* 039C08 80039008 24030001 */     addiu $v1, $zero, 1
  /* 039C0C 8003900C 3C01800A */       lui $at, %hi(D_800A1960)
  /* 039C10 80039010 A4231960 */        sh $v1, %lo(D_800A1960)($at)
  .L80039014:
  /* 039C14 80039014 3C13800A */       lui $s3, %hi(__osViIntrCount)
  /* 039C18 80039018 3C12800A */       lui $s2, %hi(__osBaseCounter)
  /* 039C1C 8003901C 3C11800A */       lui $s1, %hi(__osCurrentTime)
  /* 039C20 80039020 26310570 */     addiu $s1, $s1, %lo(__osCurrentTime)
  /* 039C24 80039024 26520578 */     addiu $s2, $s2, %lo(__osBaseCounter)
  /* 039C28 80039028 2673057C */     addiu $s3, $s3, %lo(__osViIntrCount)
  /* 039C2C 8003902C 2415000D */     addiu $s5, $zero, 0xd
  /* 039C30 80039030 27B40044 */     addiu $s4, $sp, 0x44
  .L80039034:
  /* 039C34 80039034 8EE4000C */        lw $a0, 0xc($s7)
  .L80039038:
  /* 039C38 80039038 02802825 */        or $a1, $s4, $zero
  /* 039C3C 8003903C 0C00C084 */       jal osRecvMesg
  /* 039C40 80039040 24060001 */     addiu $a2, $zero, 1
  /* 039C44 80039044 8FAE0044 */        lw $t6, 0x44($sp)
  /* 039C48 80039048 95C30000 */       lhu $v1, ($t6)
  /* 039C4C 8003904C 10750005 */       beq $v1, $s5, .L80039064
  /* 039C50 80039050 00000000 */       nop 
  /* 039C54 80039054 1076002A */       beq $v1, $s6, .L80039100
  /* 039C58 80039058 00000000 */       nop 
  /* 039C5C 8003905C 1000FFF6 */         b .L80039038
  /* 039C60 80039060 8EE4000C */        lw $a0, 0xc($s7)
  .L80039064:
  /* 039C64 80039064 0C00D668 */       jal __osViSwapContext
  /* 039C68 80039068 00000000 */       nop 
  /* 039C6C 8003906C 3C03800A */       lui $v1, %hi(D_800A1960)
  /* 039C70 80039070 94631960 */       lhu $v1, %lo(D_800A1960)($v1)
  /* 039C74 80039074 3C01800A */       lui $at, %hi(D_800A1960)
  /* 039C78 80039078 2463FFFF */     addiu $v1, $v1, -1
  /* 039C7C 8003907C 306FFFFF */      andi $t7, $v1, 0xffff
  /* 039C80 80039080 15E0000E */      bnez $t7, .L800390BC
  /* 039C84 80039084 A42F1960 */        sh $t7, %lo(D_800A1960)($at)
  /* 039C88 80039088 0C00E454 */       jal __osViGetCurrentContext
  /* 039C8C 8003908C 00000000 */       nop 
  /* 039C90 80039090 8C580010 */        lw $t8, 0x10($v0)
  /* 039C94 80039094 00408025 */        or $s0, $v0, $zero
  /* 039C98 80039098 00003025 */        or $a2, $zero, $zero
  /* 039C9C 8003909C 53000005 */      beql $t8, $zero, .L800390B4
  /* 039CA0 800390A0 96030002 */       lhu $v1, 2($s0)
  /* 039CA4 800390A4 8C440010 */        lw $a0, 0x10($v0)
  /* 039CA8 800390A8 0C00C000 */       jal osSendMesg
  /* 039CAC 800390AC 8C450014 */        lw $a1, 0x14($v0)
  /* 039CB0 800390B0 96030002 */       lhu $v1, 2($s0)
  .L800390B4:
  /* 039CB4 800390B4 3C01800A */       lui $at, %hi(D_800A1960)
  /* 039CB8 800390B8 A4231960 */        sh $v1, %lo(D_800A1960)($at)
  .L800390BC:
  /* 039CBC 800390BC 8E790000 */        lw $t9, ($s3) # __osViIntrCount + 0
  /* 039CC0 800390C0 8E500000 */        lw $s0, ($s2) # __osBaseCounter + 0
  /* 039CC4 800390C4 27280001 */     addiu $t0, $t9, 1
  /* 039CC8 800390C8 0C00CD24 */       jal osGetCount
  /* 039CCC 800390CC AE680000 */        sw $t0, ($s3) # __osViIntrCount + 0
  /* 039CD0 800390D0 8E2D0004 */        lw $t5, 4($s1) # __osCurrentTime + 4
  /* 039CD4 800390D4 00508023 */      subu $s0, $v0, $s0
  /* 039CD8 800390D8 8E2C0000 */        lw $t4, ($s1) # __osCurrentTime + 0
  /* 039CDC 800390DC 020D7821 */      addu $t7, $s0, $t5
  /* 039CE0 800390E0 240A0000 */     addiu $t2, $zero, 0
  /* 039CE4 800390E4 01ED082B */      sltu $at, $t7, $t5
  /* 039CE8 800390E8 002A7021 */      addu $t6, $at, $t2
  /* 039CEC 800390EC 01CC7021 */      addu $t6, $t6, $t4
  /* 039CF0 800390F0 AE420000 */        sw $v0, ($s2) # __osBaseCounter + 0
  /* 039CF4 800390F4 AE2E0000 */        sw $t6, ($s1) # __osCurrentTime + 0
  /* 039CF8 800390F8 1000FFCE */         b .L80039034
  /* 039CFC 800390FC AE2F0004 */        sw $t7, 4($s1) # __osCurrentTime + 4
  .L80039100:
  /* 039D00 80039100 0C00D39B */       jal __osTimerInterrupt
  /* 039D04 80039104 00000000 */       nop 
  /* 039D08 80039108 1000FFCB */         b .L80039038
  /* 039D0C 8003910C 8EE4000C */        lw $a0, 0xc($s7)
  /* 039D10 80039110 00000000 */       nop 
  /* 039D14 80039114 00000000 */       nop 
  /* 039D18 80039118 00000000 */       nop 
  /* 039D1C 8003911C 00000000 */       nop 
# Maybe start of new file
  /* 039D20 80039120 8FBF0034 */        lw $ra, 0x34($sp)
  /* 039D24 80039124 8FB00014 */        lw $s0, 0x14($sp)
  /* 039D28 80039128 8FB10018 */        lw $s1, 0x18($sp)
  /* 039D2C 8003912C 8FB2001C */        lw $s2, 0x1c($sp)
  /* 039D30 80039130 8FB30020 */        lw $s3, 0x20($sp)
  /* 039D34 80039134 8FB40024 */        lw $s4, 0x24($sp)
  /* 039D38 80039138 8FB50028 */        lw $s5, 0x28($sp)
  /* 039D3C 8003913C 8FB6002C */        lw $s6, 0x2c($sp)
  /* 039D40 80039140 8FB70030 */        lw $s7, 0x30($sp)
  /* 039D44 80039144 03E00008 */        jr $ra
  /* 039D48 80039148 27BD0050 */     addiu $sp, $sp, 0x50

  /* 039D4C 8003914C 00000000 */       nop 
