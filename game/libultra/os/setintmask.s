#include "asm_helper.h"
.rdata

#define MI_INTR_MASK 0x3f
#define CLR_SP 0x0001
#define SET_SP 0x0002
#define CLR_SI 0x0004
#define SET_SI 0x0008
#define CLR_AI 0x0010
#define SET_AI 0x0020
#define CLR_VI 0x0040
#define SET_VI 0x0080
#define CLR_PI 0x0100
#define SET_PI 0x0200
#define CLR_DP 0x0400
#define SET_DP 0x0800

EXPORT(__osRcpImTable)
/* LUT to convert between MI_INTR and MI_INTR_MASK */
/* MI_INTR is status for each interrupt whereas    */
/* MI_INTR_MASK has seperate bits for set/clr      */
.half CLR_SP | CLR_SI | CLR_AI | CLR_VI | CLR_PI | CLR_DP
.half SET_SP | CLR_SI | CLR_AI | CLR_VI | CLR_PI | CLR_DP
.half CLR_SP | SET_SI | CLR_AI | CLR_VI | CLR_PI | CLR_DP
.half SET_SP | SET_SI | CLR_AI | CLR_VI | CLR_PI | CLR_DP
.half CLR_SP | CLR_SI | SET_AI | CLR_VI | CLR_PI | CLR_DP
.half SET_SP | CLR_SI | SET_AI | CLR_VI | CLR_PI | CLR_DP
.half CLR_SP | SET_SI | SET_AI | CLR_VI | CLR_PI | CLR_DP
.half SET_SP | SET_SI | SET_AI | CLR_VI | CLR_PI | CLR_DP
.half CLR_SP | CLR_SI | CLR_AI | SET_VI | CLR_PI | CLR_DP
.half SET_SP | CLR_SI | CLR_AI | SET_VI | CLR_PI | CLR_DP
.half CLR_SP | SET_SI | CLR_AI | SET_VI | CLR_PI | CLR_DP
.half SET_SP | SET_SI | CLR_AI | SET_VI | CLR_PI | CLR_DP
.half CLR_SP | CLR_SI | SET_AI | SET_VI | CLR_PI | CLR_DP
.half SET_SP | CLR_SI | SET_AI | SET_VI | CLR_PI | CLR_DP
.half CLR_SP | SET_SI | SET_AI | SET_VI | CLR_PI | CLR_DP
.half SET_SP | SET_SI | SET_AI | SET_VI | CLR_PI | CLR_DP
.half CLR_SP | CLR_SI | CLR_AI | CLR_VI | SET_PI | CLR_DP
.half SET_SP | CLR_SI | CLR_AI | CLR_VI | SET_PI | CLR_DP
.half CLR_SP | SET_SI | CLR_AI | CLR_VI | SET_PI | CLR_DP
.half SET_SP | SET_SI | CLR_AI | CLR_VI | SET_PI | CLR_DP
.half CLR_SP | CLR_SI | SET_AI | CLR_VI | SET_PI | CLR_DP
.half SET_SP | CLR_SI | SET_AI | CLR_VI | SET_PI | CLR_DP
.half CLR_SP | SET_SI | SET_AI | CLR_VI | SET_PI | CLR_DP
.half SET_SP | SET_SI | SET_AI | CLR_VI | SET_PI | CLR_DP
.half CLR_SP | CLR_SI | CLR_AI | SET_VI | SET_PI | CLR_DP
.half SET_SP | CLR_SI | CLR_AI | SET_VI | SET_PI | CLR_DP
.half CLR_SP | SET_SI | CLR_AI | SET_VI | SET_PI | CLR_DP
.half SET_SP | SET_SI | CLR_AI | SET_VI | SET_PI | CLR_DP
.half CLR_SP | CLR_SI | SET_AI | SET_VI | SET_PI | CLR_DP
.half SET_SP | CLR_SI | SET_AI | SET_VI | SET_PI | CLR_DP
.half CLR_SP | SET_SI | SET_AI | SET_VI | SET_PI | CLR_DP
.half SET_SP | SET_SI | SET_AI | SET_VI | SET_PI | CLR_DP
.half CLR_SP | CLR_SI | CLR_AI | CLR_VI | CLR_PI | SET_DP
.half SET_SP | CLR_SI | CLR_AI | CLR_VI | CLR_PI | SET_DP
.half CLR_SP | SET_SI | CLR_AI | CLR_VI | CLR_PI | SET_DP
.half SET_SP | SET_SI | CLR_AI | CLR_VI | CLR_PI | SET_DP
.half CLR_SP | CLR_SI | SET_AI | CLR_VI | CLR_PI | SET_DP
.half SET_SP | CLR_SI | SET_AI | CLR_VI | CLR_PI | SET_DP
.half CLR_SP | SET_SI | SET_AI | CLR_VI | CLR_PI | SET_DP
.half SET_SP | SET_SI | SET_AI | CLR_VI | CLR_PI | SET_DP
.half CLR_SP | CLR_SI | CLR_AI | SET_VI | CLR_PI | SET_DP
.half SET_SP | CLR_SI | CLR_AI | SET_VI | CLR_PI | SET_DP
.half CLR_SP | SET_SI | CLR_AI | SET_VI | CLR_PI | SET_DP
.half SET_SP | SET_SI | CLR_AI | SET_VI | CLR_PI | SET_DP
.half CLR_SP | CLR_SI | SET_AI | SET_VI | CLR_PI | SET_DP
.half SET_SP | CLR_SI | SET_AI | SET_VI | CLR_PI | SET_DP
.half CLR_SP | SET_SI | SET_AI | SET_VI | CLR_PI | SET_DP
.half SET_SP | SET_SI | SET_AI | SET_VI | CLR_PI | SET_DP
.half CLR_SP | CLR_SI | CLR_AI | CLR_VI | SET_PI | SET_DP
.half SET_SP | CLR_SI | CLR_AI | CLR_VI | SET_PI | SET_DP
.half CLR_SP | SET_SI | CLR_AI | CLR_VI | SET_PI | SET_DP
.half SET_SP | SET_SI | CLR_AI | CLR_VI | SET_PI | SET_DP
.half CLR_SP | CLR_SI | SET_AI | CLR_VI | SET_PI | SET_DP
.half SET_SP | CLR_SI | SET_AI | CLR_VI | SET_PI | SET_DP
.half CLR_SP | SET_SI | SET_AI | CLR_VI | SET_PI | SET_DP
.half SET_SP | SET_SI | SET_AI | CLR_VI | SET_PI | SET_DP
.half CLR_SP | CLR_SI | CLR_AI | SET_VI | SET_PI | SET_DP
.half SET_SP | CLR_SI | CLR_AI | SET_VI | SET_PI | SET_DP
.half CLR_SP | SET_SI | CLR_AI | SET_VI | SET_PI | SET_DP
.half SET_SP | SET_SI | CLR_AI | SET_VI | SET_PI | SET_DP
.half CLR_SP | CLR_SI | SET_AI | SET_VI | SET_PI | SET_DP
.half SET_SP | CLR_SI | SET_AI | SET_VI | SET_PI | SET_DP
.half CLR_SP | SET_SI | SET_AI | SET_VI | SET_PI | SET_DP
.half SET_SP | SET_SI | SET_AI | SET_VI | SET_PI | SET_DP
.text
.set noreorder
LEAF(osSetIntMask) 
	mfc0 t4, C0_SR

	andi v0, t4, OS_IM_CPU

 la t0, __OSGlobalIntMask
	lw t3, 0(t0)
 
	xor t0, t3,-1
	andi t0, t0,(SR_IMASK)
	or v0, v0,t0

	lw t2, PHYS_TO_K1(MI_INTR_MASK_REG)
	beqz t2, 1f
	srl t1, t3,0x10

	xor t1, t1,-1
	andi t1, t1, MI_INTR_MASK
	or t2, t2,t1
1:
	sll t2, t2,0x10
	or v0, v0,t2

	and t0, a0, MI_INTR_MASK<<0x10
	and t0, t0,t3
	srl t0, t0,0xf
 lhu t2, __osRcpImTable(t0)
	sw t2, PHYS_TO_K1(MI_INTR_MASK_REG)
 
	andi t0, a0, OS_IM_CPU
	andi t1, t3, SR_IMASK
	and t0, t0,t1

	and t4, t4, ~SR_IMASK
	or t4, t4,t0

	mtc0 t4, C0_SR
 nop
 nop
	jr ra
	nop
END(osSetIntMask)
