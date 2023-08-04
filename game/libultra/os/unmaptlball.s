#include "asm_helper.h"
.set noreorder
.text
LEAF(osUnmapTLBAll)
	mfc0 t0, C0_ENTRYHI
	li t1, NTLBENTRIES-1 /* last reserved for rdb */
	li t2, KUSIZE
	mtc0 t2, C0_ENTRYHI
	mtc0 zero, C0_ENTRYLO0
	mtc0 zero, C0_ENTRYLO1
L_18:
	mtc0 t1, C0_INX
	nop
	tlbwi
	nop
	nop
	addi t1, t1,-1
	bgez t1, L_18
	nop
	mtc0 t0, C0_ENTRYHI
	jr ra
	nop
END(osUnmapTLBAll)
/*
*/
