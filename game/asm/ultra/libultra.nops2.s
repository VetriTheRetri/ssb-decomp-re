.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

  /* 033B10 80032F10 00000000 */       nop 
  /* 033B14 80032F14 00000000 */       nop 
  /* 033B18 80032F18 00000000 */       nop 
  /* 033B1C 80032F1C 00000000 */       nop 
