#include "asm_helper.h"
.set noreorder
.text
LEAF(__osSetCause)
	mtc0 a0, C0_CAUSE
	jr ra
	nop
END(__osSetCause)
