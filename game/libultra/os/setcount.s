#include "asm_helper.h"
.set noreorder
.text
LEAF(__osSetCount)
	mtc0 a0, C0_COUNT
	jr ra
	nop
END(__osSetCount)
