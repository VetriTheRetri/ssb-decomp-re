#include "asm_helper.h"
.set noreorder
.text
LEAF(__osProbeTLB)
	mfc0 t0, C0_ENTRYHI
	andi t1, t0, TLBHI_PIDMASK
	and t2, a0, TLBHI_VPN2MASK
	or t1, t1, t2
	mtc0 t1, C0_ENTRYHI
    nop
    nop
    nop
	tlbp
    nop
    nop
	mfc0 t3, C0_INX
	and t3, t3, TLBINX_PROBE
	bnez t3, L_a8
	nop
	tlbr
    nop
    nop
    nop
	mfc0 t3, C0_PAGEMASK
	addi t3, t3, DCACHE_SIZE
	srl t3, t3, 0x1
	and t4, t3, a0
	bnez t4, L_78
	addi t3, t3,-1
	mfc0 v0, C0_ENTRYLO0
	b L_7c
	nop
L_78:
	mfc0 v0, C0_ENTRYLO1
L_7c:
	andi t5, v0,TLBLO_V
	beqz t5, L_a8
	nop
	and v0, v0,TLBLO_PFNMASK
	sll v0, v0,TLBLO_PFNSHIFT
	and t5, a0,t3
	add v0, v0,t5
	b L_ac
	nop
L_a8:
	li v0, -1
L_ac:
	mtc0 t0, C0_ENTRYHI
	jr ra
	nop	
END(__osProbeTLB)
