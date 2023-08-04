#include "asm_helper.h"
/* .set noreorder */
.text
LEAF(osInvalICache)
	blez a1, inval_icache_2
	/* nop */
	li t3, ICACHE_SIZE
	bgeu a1, t3, inval_icache_3
	/* nop */
	move t0, a0
	addu t1, a0, a1
	bgeu t0, t1, inval_icache_2
	/* nop */
	andi t2, t0, ICACHE_LINEMASK
	addiu t1, t1, -ICACHE_LINESIZE
	subu t0, t0, t2
GLABEL(inval_icache_1)
	CACHE((C_HINV|CACH_PI), (t0))
    .set noreorder
	bltu t0, t1, inval_icache_1
	addiu t0, t0, ICACHE_LINESIZE
    .set reorder
GLABEL(inval_icache_2)
	jr ra
	/* nop */
GLABEL(inval_icache_3)
	li t0, KUSIZE
	addu t1, t0, t3
	addiu t1, t1, -ICACHE_LINESIZE
GLABEL(inval_icache_4)
	CACHE((C_IINV|CACH_PI), (t0))
    .set noreorder
	bltu t0, t1, inval_icache_4
	addiu t0, t0, ICACHE_LINESIZE
    .set reorder

	jr ra
	/* nop */
END(osInvalICache)
