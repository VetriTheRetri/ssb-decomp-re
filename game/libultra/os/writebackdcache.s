#include "asm_helper.h"

.set noreorder
.text
LEAF(osWritebackDCache)
	blez a1, L_48
	nop
	li t3, DCACHE_SIZE
	bgeu a1,t3, L_50
	nop
	move t0, a0
	addu t1, a0,a1
	bgeu t0, t1, L_48
	nop
	andi t2, t0, DCACHE_LINEMASK
	addiu t1, t1, -DCACHE_LINESIZE
	subu t0, t0,t2
GLABEL(L_38)
    cache (C_HWB|CACH_PD), (t0)
	bltu t0, t1, L_38
	addiu t0, t0,16
GLABEL(L_48)
	jr ra
	nop
GLABEL(L_50)
	li t0, KUSIZE
	addu t1, t0,t3
	addiu t1, t1, -DCACHE_LINESIZE
GLABEL(L_5c)
    cache (C_IWBINV|CACH_PD), (t0)
	bltu t0, t1, L_5c
	addiu t0, t0, DCACHE_LINESIZE
	jr ra
	nop
	
END(osWritebackDCache)
/*
*/
