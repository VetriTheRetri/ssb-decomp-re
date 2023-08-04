#include "asm_helper.h"
.set noreorder
.text
LEAF(__osGetTLBLo1)
	mtc0 a0, C0_INX
	nop
	tlbr
	nop
	nop
	nop
	mfc0 v0, C0_ENTRYLO1
	jr ra
    nop
