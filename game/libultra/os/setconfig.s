#include "asm_helper.h"
.set noreorder
.text
LEAF(__osSetConfig)
	mtc0 a0, C0_CONFIG
	jr ra
	nop
END(__osSetConfig)