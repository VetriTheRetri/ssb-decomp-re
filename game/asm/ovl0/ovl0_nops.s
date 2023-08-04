.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.align 4

  /* 049A00 800CE020 00000000 */       nop 
  /* 049A04 800CE024 00000000 */       nop 
  /* 049A08 800CE028 00000000 */       nop 
  /* 049A0C 800CE02C 00000000 */       nop 

# Likely start of new file
  /* 049A10 800CE030 00000000 */       nop 
  /* 049A14 800CE034 00000000 */       nop 
  /* 049A18 800CE038 00000000 */       nop 
  /* 049A1C 800CE03C 00000000 */       nop 
