#include "asm_helper.h"

.set noreorder
.text
LEAF(osWritebackDCacheAll)
	li t0, KUSIZE
	li t2, DCACHE_SIZE
	addu t1, t0,t2
	addiu t1, t1, -DCACHE_LINESIZE
GLABEL(osWritebackDCacheAll_1)
    cache (C_IWBINV | CACH_PD), (t0)
	bltu t0, t1, osWritebackDCacheAll_1
	addiu t0, t0, DCACHE_LINESIZE

	jr ra
	#nop
END(osWritebackDCacheAll)
