#include <R4300.h>
#include <regdef.h>
#include <sys/asm.h>

.text
.weakext bzero _bzero
.weakext blkclr, _blkclr
LEAF(_bzero)
XLEAF(_blkclr)
	negu v1, a0
	blt a1, 12, bytezero

	andi v1, v1, 0x3
	subu a1, a1,v1

	beqz v1, blkzero
	swl zero, 0(a0)
	addu a0, a0,v1
GLABEL(blkzero)
	and a3, a1, ~31
	subu a1, a1,a3
	beqz a3, wordzero

	addu a3, a3,a0
GLABEL(bzero_back_1_1)
	addiu a0, a0, 32
	sw zero, -32(a0)
	sw zero, -28(a0)
	sw zero, -24(a0)
	sw zero, -20(a0)
	sw zero, -16(a0)
	sw zero, -12(a0)
	sw zero, -8(a0)
	sw zero, -4(a0)
	bne a0, a3,bzero_back_1_1

GLABEL(wordzero)
	and a3, a1, ~3
	subu a1, a1,a3
	beqz a3, bytezero

	addu a3, a3,a0
GLABEL(bzero_back_1_2)
	addiu a0, a0, 4
	sw zero, -4(a0)
	bne a0, a3,bzero_back_1_2

GLABEL(bytezero)
	blez a1, zerodone
	#nop
	addu a1, a1,a0
GLABEL(bzero_back_1_3)
	addiu a0, a0, 1
	sb zero, -1(a0)
	bne a0, a1,bzero_back_1_3
GLABEL(zerodone)
	jr ra
END(_bzero)
