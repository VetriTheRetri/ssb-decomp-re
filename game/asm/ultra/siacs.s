.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# func_80031A20
glabel __osSiCreateAccessQueue
  /* 032620 80031A20 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 032624 80031A24 AFBF0014 */        sw $ra, 0x14($sp)
  /* 032628 80031A28 240E0001 */     addiu $t6, $zero, 1
  /* 03262C 80031A2C 3C018004 */       lui $at, %hi(D_8003D3D0)
  /* 032630 80031A30 3C04800A */       lui $a0, %hi(D_8009EF88)
  /* 032634 80031A34 3C05800A */       lui $a1, %hi(D_8009EF80)
  /* 032638 80031A38 AC2ED3D0 */        sw $t6, %lo(D_8003D3D0)($at)
  /* 03263C 80031A3C 24A5EF80 */     addiu $a1, $a1, %lo(D_8009EF80)
  /* 032640 80031A40 2484EF88 */     addiu $a0, $a0, %lo(D_8009EF88)
  /* 032644 80031A44 0C00D120 */       jal osCreateMesgQueue
  /* 032648 80031A48 24060001 */     addiu $a2, $zero, 1
  /* 03264C 80031A4C 3C04800A */       lui $a0, %hi(D_8009EF88)
  /* 032650 80031A50 2484EF88 */     addiu $a0, $a0, %lo(D_8009EF88)
  /* 032654 80031A54 00002825 */        or $a1, $zero, $zero
  /* 032658 80031A58 0C00C000 */       jal osSendMesg
  /* 03265C 80031A5C 00003025 */        or $a2, $zero, $zero
  /* 032660 80031A60 8FBF0014 */        lw $ra, 0x14($sp)
  /* 032664 80031A64 27BD0018 */     addiu $sp, $sp, 0x18
  /* 032668 80031A68 03E00008 */        jr $ra
  /* 03266C 80031A6C 00000000 */       nop 

# func_80031A70
glabel __osSiGetAccess
  /* 032670 80031A70 3C0E8004 */       lui $t6, %hi(D_8003D3D0)
  /* 032674 80031A74 8DCED3D0 */        lw $t6, %lo(D_8003D3D0)($t6)
  /* 032678 80031A78 27BDFFE0 */     addiu $sp, $sp, -0x20
  /* 03267C 80031A7C AFBF0014 */        sw $ra, 0x14($sp)
  /* 032680 80031A80 15C00003 */      bnez $t6, .L80031A90
  /* 032684 80031A84 00000000 */       nop 
  /* 032688 80031A88 0C00C688 */       jal __osSiCreateAccessQueue
  /* 03268C 80031A8C 00000000 */       nop 
  .L80031A90:
  /* 032690 80031A90 3C04800A */       lui $a0, %hi(D_8009EF88)
  /* 032694 80031A94 2484EF88 */     addiu $a0, $a0, %lo(D_8009EF88)
  /* 032698 80031A98 27A5001C */     addiu $a1, $sp, 0x1c
  /* 03269C 80031A9C 0C00C084 */       jal osRecvMesg
  /* 0326A0 80031AA0 24060001 */     addiu $a2, $zero, 1
  /* 0326A4 80031AA4 8FBF0014 */        lw $ra, 0x14($sp)
  /* 0326A8 80031AA8 27BD0020 */     addiu $sp, $sp, 0x20
  /* 0326AC 80031AAC 03E00008 */        jr $ra
  /* 0326B0 80031AB0 00000000 */       nop 

# func_80031AB4
glabel __osSiRelAccess
  /* 0326B4 80031AB4 27BDFFE8 */     addiu $sp, $sp, -0x18
  /* 0326B8 80031AB8 AFBF0014 */        sw $ra, 0x14($sp)
  /* 0326BC 80031ABC 3C04800A */       lui $a0, %hi(D_8009EF88)
  /* 0326C0 80031AC0 2484EF88 */     addiu $a0, $a0, %lo(D_8009EF88)
  /* 0326C4 80031AC4 00002825 */        or $a1, $zero, $zero
  /* 0326C8 80031AC8 0C00C000 */       jal osSendMesg
  /* 0326CC 80031ACC 00003025 */        or $a2, $zero, $zero
  /* 0326D0 80031AD0 8FBF0014 */        lw $ra, 0x14($sp)
  /* 0326D4 80031AD4 27BD0018 */     addiu $sp, $sp, 0x18
  /* 0326D8 80031AD8 03E00008 */        jr $ra
  /* 0326DC 80031ADC 00000000 */       nop 
