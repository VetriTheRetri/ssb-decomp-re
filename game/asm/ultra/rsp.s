.include "macros.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .text

.balign 16
glabel D_800396C0 #F3DEX boot?
  .incbin "libultra.raw.bin", 0x392C0, 0xC60

# F3DEX fifo 2.04H
glabel gspF3DEX2_fifoTextStart 
  .incbin "libultra.raw.bin", 0x39F20, 0x1390
.balign 16
glabel gspF3DEX2_fifoTextEnd

.section .rodata

.balign 16
# F3DEX2 data @ 0x3F2B0 in libultra.raw.bin
#   end + 0x420 => 0x3F6D0
# audio after?
glabel gspF3DEX2_fifoDataStart
  .incbin "libultra.raw.bin", 0x3F2B0, 0x420
.balign 16
glabel gspF3DEX2_fifoDataEnd
