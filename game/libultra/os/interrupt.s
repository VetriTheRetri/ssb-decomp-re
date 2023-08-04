#include "asm_helper.h"
.set noreorder
.text
LEAF(__osDisableInt)
	mfc0 t0, C0_SR
	and t1, t0, ~SR_IE
	mtc0 t1, C0_SR
	andi v0, t0, SR_IE
	nop
	jr ra
    nop
	
LEAF(__osRestoreInt)
	mfc0 t0, C0_SR
	or t0, t0, a0
	mtc0 t0, C0_SR
    nop
    nop
	jr ra
	nop
	