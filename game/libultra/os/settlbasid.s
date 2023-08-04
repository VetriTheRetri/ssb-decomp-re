#include "asm_helper.h"

.set noreorder
.text
LEAF(osSetTLBASID)
	mtc0 a0, C0_ENTRYHI
	jr ra
	nop
END(osSetTLBASID)
