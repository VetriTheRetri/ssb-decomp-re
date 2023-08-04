#include "asm_helper.h"
.set noreorder
.text
LEAF(__osGetTLBPageMask)
	mtc0 a0, C0_INX
	nop
	tlbr
	nop
	nop
	nop
	mfc0 v0, C0_PAGEMASK
	jr ra
    nop
