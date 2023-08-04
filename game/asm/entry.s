.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers


.section .text
.align 4
glabel entry
         lui $t0, %hi(_systemSegNoloadStart)
         lui $t1, _systemSegNoloadSizeHi
       addiu $t0, $t0, %lo(_systemSegNoloadStart)
         ori $t1, $t1, _systemSegNoloadSizeLo
  .LzeroNoLoad:
        addi $t1, $t1, -8
          sw $zero, ($t0)
          sw $zero, 4($t0)
        bnez $t1, .LzeroNoLoad
        addi $t0, $t0, 8
         lui $t2, %hi(ssb_main)
         lui $sp, %hi(sThread1)
       addiu $t2, $t2, %lo(ssb_main)
          jr $t2
       addiu $sp, $sp, %lo(sThread1)
         nop 
         nop 
         nop 
         nop 
         nop 
         nop 
         nop 
         nop 
         nop 
         nop 
