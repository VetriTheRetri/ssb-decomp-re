.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

# Likely start of new file
  /* 039A30 80038E30 00000000 */       nop 
  /* 039A34 80038E34 00000000 */       nop 
  /* 039A38 80038E38 00000000 */       nop 
  /* 039A3C 80038E3C 00000000 */       nop 
