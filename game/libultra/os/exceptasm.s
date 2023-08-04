#include "asm_helper.h"
#include "exceptasm.h"
#include <os.h>

.data

EXPORT(__osHwIntTable)
.word 0x0, 0x0, 0x0, 0x0, 0x0
/* extra words? */
.word      0x0, 0x0, 0x0
.word 0x0, 0x0, 0x0, 0x0

.rdata
#define REDISPATCH 0x00
#define SW1 0x04
#define SW2 0x08
#define RCP 0x0c
#define CART 0x10
#define PRENMI 0x14
#define IP6_HDLR 0x18
#define IP7_HDLR 0x1c
#define COUNTER 0x20
__osIntOffTable:
.byte REDISPATCH
.byte PRENMI 
.byte IP6_HDLR 
.byte IP6_HDLR 
.byte IP7_HDLR 
.byte IP7_HDLR 
.byte IP7_HDLR 
.byte IP7_HDLR 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte COUNTER 
.byte REDISPATCH 
.byte SW1 
.byte SW2 
.byte SW2 
.byte RCP 
.byte RCP 
.byte RCP 
.byte RCP 
.byte CART 
.byte CART 
.byte CART 
.byte CART 
.byte CART 
.byte CART 
.byte CART 
.byte CART 
__osIntTable:
.word redispatch, sw1, sw2, rcp, cart, prenmi, IP6_Hdlr, IP7_Hdlr, counter

.text

LEAF(__osExceptionPreamble)
	lui k0, %hi(__osException)
	addiu k0, k0, %lo(__osException)
	jr k0
END(__osExceptionPreamble)

LEAF(__osException) 
	la k0, __osThreadSave
    /* save AT */
.set noat; sd AT, 32(k0); .set at
    /* save sr */
	STAY2(mfc0 k1, C0_SR)
	sw k1, THREAD_SR(k0)
    /* clear interrupts */
	and k1, k1, -4
	STAY2(mtc0 k1, C0_SR)
    /* save other regs */
	sd t0, THREAD_T0(k0)
	sd t1, THREAD_T1(k0)
	sd t2, THREAD_T2(k0)
    /* say fp has not been used */
	sw zero, THREAD_FP(k0)
	/* this instruction is probably useless, leftover because of bad placement of an ifdef for the debug version */
	STAY2(mfc0 t0, C0_CAUSE)

savecontext:
	move t0, k0
	lw k0 __osRunningThread 
	
	ld t1, THREAD_AT(t0)
	sd t1, THREAD_AT(k0)
	ld t1, THREAD_SR(t0)
	sd t1, THREAD_SR(k0)
	ld t1, THREAD_T0(t0)
	sd t1, THREAD_T0(k0)
	ld t1, THREAD_T1(t0)
	sd t1, THREAD_T1(k0)
	ld t1, THREAD_T2(t0)
	sd t1, THREAD_T2(k0)

3: /* this is probably left over from debug, not referenced but required for instruction ordering to match */

	sd v0, THREAD_V0(k0)
	sd v1, THREAD_V1(k0)
	sd a0, THREAD_A0(k0)
	sd a1, THREAD_A1(k0)
	sd a2, THREAD_A2(k0)
	sd a3, THREAD_A3(k0)
	sd t3, THREAD_T3(k0)
	sd t4, THREAD_T4(k0)
	sd t5, THREAD_T5(k0)
	sd t6, THREAD_T6(k0)
	sd t7, THREAD_T7(k0)
	sd s0, THREAD_S0(k0)
	sd s1, THREAD_S1(k0)
	sd s2, THREAD_S2(k0)
	sd s3, THREAD_S3(k0)
	sd s4, THREAD_S4(k0)
	sd s5, THREAD_S5(k0)
	sd s6, THREAD_S6(k0)
	sd s7, THREAD_S7(k0)
	sd t8, THREAD_T8(k0)
	sd t9, THREAD_T9(k0)
	sd gp, THREAD_GP(k0)
	sd sp, THREAD_SP(k0)
	sd s8, THREAD_S8(k0)
	sd ra, THREAD_RA(k0)

	mflo t0
	sd t0, THREAD_LO(k0)
	mfhi t0
	sd t0, THREAD_HI(k0)

	lw k1, THREAD_SR(k0)
	andi t1, k1, SR_IMASK
	beqz t1, savercp
	
/*if any interrupts are enabled*/
	la t0, __OSGlobalIntMask
	lw t0, 0(t0)
	xor t2, t0, -1 /* not except not using not */
	andi t2, t2, SR_IMASK
	or t4, t1, t2
	and t3, k1, ~SR_IMASK
	or t3, t3, t4
	andi t0, t0, SR_IMASK
	and t1, t1, t0
	and k1, k1, ~SR_IMASK
	
	sw t3, THREAD_SR(k0)
	or k1, k1, t1
savercp:

	lw t1, PHYS_TO_K1(MI_INTR_MASK_REG)
	beqz t1, endrcp

	la t0, __OSGlobalIntMask
	lw t0, 0(t0)
	lw t4, THREAD_RCP(k0)

	srl t0, t0, 0x10
	xor t0, t0, -1
	andi t0, t0, 0x3f
	and t0, t0, t4
	or t1, t1, t0
.set noreorder /* cannot get this to match sadly */
endrcp:
	sw t1, THREAD_RCP(k0)
	mfc0 t0, C0_EPC
	sw t0, THREAD_PC(k0)
	lw t0, THREAD_FP(k0)
	beqz t0, handle_interrupt
	nop
	cfc1 t0, $31
	nop
	sw t0, THREAD_FPCSR(k0)
	sdc1 $f0, THREAD_FP0(k0)
	sdc1 $f2, THREAD_FP2(k0)
	sdc1 $f4, THREAD_FP4(k0)
	sdc1 $f6, THREAD_FP6(k0)
	sdc1 $f8, THREAD_FP8(k0)
	sdc1 $f10, THREAD_FP10(k0)
	sdc1 $f12, THREAD_FP12(k0)
	sdc1 $f14, THREAD_FP14(k0)
	sdc1 $f16, THREAD_FP16(k0)
	sdc1 $f18, THREAD_FP18(k0)
	sdc1 $f20, THREAD_FP20(k0)
	sdc1 $f22, THREAD_FP22(k0)
	sdc1 $f24, THREAD_FP24(k0)
	sdc1 $f26, THREAD_FP26(k0)
	sdc1 $f28, THREAD_FP28(k0)
	sdc1 $f30, THREAD_FP30(k0)
handle_interrupt:
	mfc0 t0, C0_CAUSE
	sw t0, THREAD_CAUSE(k0)
.set reorder

	li t1, OS_STATE_RUNNABLE
	sh t1, THREAD_STATE(k0)
	andi t1, t0, CAUSE_EXCMASK
	li t2, EXC_BREAK
	beq t1, t2, handle_break
	
	li t2, EXC_CPU
	beq t1, t2, handle_CpU
	
	li t2, EXC_INT
	bne t1, t2, panic
	
	and s0, k1, t0
next_interrupt:
	andi t1, s0, SR_IMASK
	srl t2, t1, 0xc
	bnez t2, 1f
	
	srl t2, t1, 0x8
	addi t2, t2, 16
1:

	lbu t2, __osIntOffTable(t2)

	lw t2, __osIntTable(t2)
	jr t2


IP6_Hdlr:
	and s0, s0, ~CAUSE_IP6
	b next_interrupt
	
IP7_Hdlr:
	and s0, s0, ~CAUSE_IP7
	b next_interrupt

counter:
	STAY2(mfc0 t1, C0_COMPARE)
	STAY2(mtc0 t1, C0_COMPARE)
	li a0, MESG(OS_EVENT_COUNTER)
	jal send_mesg
	and s0, s0, ~CAUSE_IP8
	b next_interrupt

cart:
	.set noreorder
	.set noat
	lui t1, %hi(__osHwIntTable)
	addiu t1, t1, %lo(__osHwIntTable)
	lw t2, 8(t1) # __osHwIntTable + 8
	addiu $at, zero, ~CAUSE_IP4
	and s0, s0, $at
	beqz t2, 1f
	addi t1, t1, 8
	jalr t2
	lw sp, 4(t1) # __osHwIntTable + 4
	.set reorder
	.set at

	/* Original 
	and s0, s0, ~CAUSE_IP4
	li t2, 4

	lw t2, __osHwIntTable(t2)

	la sp, leoDiskStack
	li a0, MESG(OS_EVENT_CART)
	addiu sp, sp, OS_PIM_STACKSIZE-16
	beqz t2, 1f

	jalr t2
	*/
	
	li a0, MESG(OS_EVENT_CART)
	beqz v0, 1f
	b redispatch
	
1:
	jal send_mesg
	b next_interrupt
	
rcp:
	lui t0, %hi(__OSGlobalIntMask)
	addiu t0, t0, %lo(__OSGlobalIntMask)
	lw t0, 0(t0)

	lw s1, PHYS_TO_K1(MI_INTR_REG)
	srl t0, t0, 0x10
	and s1, s1, t0
	andi t1, s1, MI_INTR_SP
	beqz t1, vi

	lw t4, PHYS_TO_K1(SP_STATUS_REG)
	li t1, (SP_CLR_INTR | SP_CLR_SIG3)
	
	andi t4, t4, 0x300
	andi s1, s1, 0x3e
	sw t1, PHYS_TO_K1(SP_STATUS_REG)
	beqz t4, sp_other_break
	
	li a0, MESG(OS_EVENT_SP)
	jal send_mesg

	beqz s1, NoMoreRcpInts
	
	b vi

sp_other_break:
	li a0, MESG(OS_EVENT_SP_BREAK)
	jal send_mesg

	beqz s1, NoMoreRcpInts
	
vi:
	andi t1, s1, 0x8
	beqz t1, ai
	
	andi s1, s1, 0x37
	
	sw zero, PHYS_TO_K1(VI_CURRENT_REG)
	li a0, MESG(OS_EVENT_VI)
	jal send_mesg
	beqz s1, NoMoreRcpInts
	
ai:
	andi t1, s1, 0x4
	beqz t1, si

	andi s1, s1, 0x3b
	
	li t1, 1
	sw t1, PHYS_TO_K1(AI_STATUS_REG)

	li a0, MESG(OS_EVENT_AI)
	jal send_mesg
	beqz s1, NoMoreRcpInts
	
si:
	andi t1, s1, 0x2
	beqz t1, pi
	
	andi s1, s1, 0x3d
	/* any write clears interrupts */
	sw zero, PHYS_TO_K1(SI_STATUS_REG) 
	li a0, MESG(OS_EVENT_SI)
	jal send_mesg
	beqz s1, NoMoreRcpInts
	
pi:
	andi t1, s1, 0x10
	beqz t1, dp

	andi s1, s1, 0x2f
	
	li t1, PI_STATUS_CLR_INTR
	sw t1, PHYS_TO_K1(PI_STATUS_REG)

	li a0, MESG(OS_EVENT_PI)
	jal send_mesg
	beqz s1, NoMoreRcpInts
	
dp:
	andi t1, s1, 0x20
	beqz t1, NoMoreRcpInts

	andi s1, s1, 0x1f

	li t1, MI_CLR_DP_INTR
	sw t1, PHYS_TO_K1(MI_INIT_MODE_REG)
	
	li a0, MESG(OS_EVENT_DP)
	jal send_mesg

NoMoreRcpInts:
	and s0, s0, ~CAUSE_IP3
	b next_interrupt

prenmi:
	lw k1, THREAD_SR(k0)

	and k1, k1, ~CAUSE_IP5
	sw k1, THREAD_SR(k0)
	la t1, __osShutdown
	lw t2, 0(t1)
	beqz t2, firstnmi
	
	and s0, s0, ~CAUSE_IP5
	b redispatch

firstnmi:
	li t2, 1
	sw t2, 0(t1) /* __osShutdown */
	li a0, MESG(OS_EVENT_PRENMI)
	jal send_mesg

	lw t2, __osRunQueue
	
	and s0, s0, ~CAUSE_IP5
	lw k1, THREAD_SR(t2)
	and k1, k1, ~CAUSE_IP5
	sw k1, THREAD_SR(t2)
	b redispatch

sw2:
	and t0, t0, ~CAUSE_SW2
	STAY2(mtc0 t0, C0_CAUSE)

	li a0, MESG(OS_EVENT_SW2)
	jal send_mesg

	and s0, s0, ~CAUSE_SW2
	b next_interrupt

sw1:
	and t0, t0, ~CAUSE_SW1
	STAY2(mtc0 t0, C0_CAUSE)

	li a0, MESG(OS_EVENT_SW1)
	jal send_mesg

	and s0, s0, ~CAUSE_SW1
	b next_interrupt

handle_break:
	li t1, OS_FLAG_CPU_BREAK
	sh t1, THREAD_FLAGS(k0)
	li a0, MESG(OS_EVENT_CPU_BREAK)
	jal send_mesg
	b redispatch
	
redispatch:
	
	lw t2, __osRunQueue
	lw t1, THREAD_PRI(k0)
	lw t3, THREAD_PRI(t2)
	
	bge t1, t3, enqueueRunning
	
	move a1, k0
	la a0, __osRunQueue
	
	jal __osEnqueueThread
	
	j __osDispatchThread
	
enqueueRunning:
	la t1, __osRunQueue
	lw t2, MQ_MTQUEUE(t1)
	sw t2, THREAD_NEXT(k0)
	sw k0, MQ_MTQUEUE(t1)
	j __osDispatchThread
panic:
	sw k0, __osFaultedThread
	li t1, OS_STATE_STOPPED
	sh t1, THREAD_STATE(k0)
	li t1, OS_FLAG_FAULT
	sh t1, THREAD_FLAGS(k0)

	STAY2(mfc0 t2, C0_BADVADDR)

	sw t2, THREAD_BADVADDR(k0)

	li a0, MESG(OS_EVENT_FAULT)
	jal send_mesg
	j __osDispatchThread
	
LEAF(send_mesg)
	la t2, __osEventStateTab
	addu t2, t2, a0
	lw t1, OS_EVENTSTATE_MESSAGE_QUEUE(t2)
	move s2, ra
	beqz t1, send_done
	
	lw t3, MQ_VALIDCOUNT(t1)
	lw t4, MQ_MSGCOUNT(t1)
	
	bge t3, t4, send_done

	lw t5, MQ_FIRST(t1)
	addu t5, t5, t3

	/* t5 = mq->first + mq->validcount % mq->msgcount */
	#rem t5, t5, t4 /* this should work but the instruction ordering gets off and there's an extra nop */
	div zero, t5, t4
	bnez t4, $$1
	break 0x7
$$1:
	bne t4, -1, $$2
	bne t5, 0x80000000, $$2
	break 0x6
$$2:
	lw t4, MQ_MSG(t1)
	mfhi t5
	/* end nasty modulus stuff */

	sll t5, t5, 0x2 /* pointer arithmetic for msg[t5] */
	addu t4, t4, t5
	lw t5, OS_EVENTSTATE_MESSAGE(t2)
	addiu t2, t3, 1
	sw t5, 0(t4) /* msg[t5] = */
	sw t2, MQ_VALIDCOUNT(t1)
	lw t2, MQ_MTQUEUE(t1)
	lw t3, THREAD_NEXT(t2)
	beqz t3, send_done
	
	move a0, t1
	jal __osPopThread

	move t2, v0
	
	move a1, t2
	la a0, __osRunQueue
	jal __osEnqueueThread
	
send_done:
	jr s2
	
END(send_mesg)

LEAF(handle_CpU) /* coprocessor error */
	
	and t1, t0, CAUSE_CEMASK
	srl t1, t1, CAUSE_CESHIFT
	li t2, 1 /* cp1 error */
	bne t1, t2, panic
	
	/* enable cp1 (fpu) for this thread */
	lw k1, THREAD_SR(k0)
	li t1, 1
	or k1, k1, SR_CU1
	sw t1, THREAD_FP(k0)
	sw k1, THREAD_SR(k0)
	b enqueueRunning
END(handle_CpU)

LEAF(__osEnqueueAndYield)
	lui a1, %hi(__osRunningThread)
	lw a1, %lo(__osRunningThread)(a1)
	STAY2(mfc0 t0, C0_SR)
	lw k1, THREAD_FP(a1)
	ori t0, t0, SR_EXL
	sw t0, THREAD_SR(a1)
	sd s0, THREAD_S0(a1)
	sd s1, THREAD_S1(a1)
	sd s2, THREAD_S2(a1)
	sd s3, THREAD_S3(a1)
	sd s4, THREAD_S4(a1)
	sd s5, THREAD_S5(a1)
	sd s6, THREAD_S6(a1)
	sd s7, THREAD_S7(a1)
	sd gp, THREAD_GP(a1)
	sd sp, THREAD_SP(a1)
	sd s8, THREAD_S8(a1)
	sd ra, THREAD_RA(a1)
	sw ra, THREAD_PC(a1)
	beqz k1, 1f
	cfc1 k1, $31
	sdc1 $f20, THREAD_FP20(a1)
	sdc1 $f22, THREAD_FP22(a1)
	sdc1 $f24, THREAD_FP24(a1)
	sdc1 $f26, THREAD_FP26(a1)
	sdc1 $f28, THREAD_FP28(a1)
	sdc1 $f30, THREAD_FP30(a1)
	sw k1, THREAD_FPCSR(a1)
1:
	lw k1, THREAD_SR(a1)
	andi t1, k1, SR_IMASK
	beqz t1, 2f

	la t0, __OSGlobalIntMask
	lw t0, 0(t0)
	xor t0, t0, -1
	andi t0, t0, SR_IMASK
	or t1, t1, t0
	and k1, k1, ~SR_IMASK
	or k1, k1, t1
	sw k1, THREAD_SR(a1)
2:
	lw k1, PHYS_TO_K1(MI_INTR_MASK_REG)
	beqz k1, 3f

	la k0, __OSGlobalIntMask
	lw k0, 0(k0)
	lw t0, THREAD_RCP(a1)

	srl k0, k0, 0x10
	xor k0, k0, -1
	andi k0, k0, 0x3f
	and k0, k0, t0
	or k1, k1, k0
3:
	sw k1, THREAD_RCP(a1)
	beqz a0, noEnqueue
	jal __osEnqueueThread
noEnqueue:
	j __osDispatchThread
END(__osEnqueueAndYield)
	
/*__osEnqueueThread(OSThread **, OSThread *)*/
LEAF(__osEnqueueThread)
	lw t8, 0(a0)
	lw t7, THREAD_PRI(a1)
	move t9, a0
	lw t6, THREAD_PRI(t8)
	blt t6, t7, 1f
2:
	move t9, t8
	lw t8, THREAD_NEXT(t8)
	lw t6, THREAD_PRI(t8)
	bge t6, t7, 2b

1:
	lw t8, THREAD_NEXT(t9)
	sw t8, THREAD_NEXT(a1)
	sw a1, THREAD_NEXT(t9)
	sw a0, THREAD_QUEUE(a1)
	jr ra
END(__osEnqueueThread)


LEAF(__osPopThread)
	lw v0, 0(a0) /* a0 is OSThread** */
	lw t9, THREAD_NEXT(v0)
	sw t9, 0(a0)
	jr ra
END(__osPopThread)

LEAF(__osDispatchThread)
	la a0, __osRunQueue
	jal __osPopThread
	sw v0, __osRunningThread
	li t0, OS_STATE_RUNNING
	sh t0, THREAD_STATE(v0)
	move k0, v0
__osDispatchThreadSave:
	lw k1, THREAD_SR(k0)
	la t0, __OSGlobalIntMask
	lw t0, 0(t0)
	andi t1, k1, SR_IMASK
	andi t0, t0, SR_IMASK
	and t1, t1, t0
	and k1, k1, ~SR_IMASK
	or k1, k1, t1
	STAY2(mtc0 k1, C0_SR)
	ld k1, THREAD_LO(k0)
	ld AT, THREAD_AT(k0)
	ld v0, THREAD_V0(k0)
	mtlo k1
	ld k1, THREAD_HI(k0)
	ld v1, THREAD_V1(k0)
	ld a0, THREAD_A0(k0)
	ld a1, THREAD_A1(k0)
	ld a2, THREAD_A2(k0)
	ld a3, THREAD_A3(k0)
	ld t0, THREAD_T0(k0)
	ld t1, THREAD_T1(k0)
	ld t2, THREAD_T2(k0)
	ld t3, THREAD_T3(k0)
	ld t4, THREAD_T4(k0)
	ld t5, THREAD_T5(k0)
	ld t6, THREAD_T6(k0)
	ld t7, THREAD_T7(k0)
	ld s0, THREAD_S0(k0)
	ld s1, THREAD_S1(k0)
	ld s2, THREAD_S2(k0)
	ld s3, THREAD_S3(k0)
	ld s4, THREAD_S4(k0)
	ld s5, THREAD_S5(k0)
	ld s6, THREAD_S6(k0)
	ld s7, THREAD_S7(k0)
	ld t8, THREAD_T8(k0)
	ld t9, THREAD_T9(k0)
	ld gp, THREAD_GP(k0)
	mthi k1
	ld sp, THREAD_SP(k0)
	ld s8, THREAD_S8(k0)
	ld ra, THREAD_RA(k0)
	lw k1, THREAD_PC(k0)

	STAY2(mtc0 k1, C0_EPC)

	lw k1, THREAD_FP(k0)
	beqz k1, 1f
	
	lw k1, THREAD_FPCSR(k0)
	STAY2(ctc1 k1, $31)
	ldc1 $f0, THREAD_FP0(k0)
	ldc1 $f2, THREAD_FP2(k0)
	ldc1 $f4, THREAD_FP4(k0)
	ldc1 $f6, THREAD_FP6(k0)
	ldc1 $f8, THREAD_FP8(k0)
	ldc1 $f10, THREAD_FP10(k0)
	ldc1 $f12, THREAD_FP12(k0)
	ldc1 $f14, THREAD_FP14(k0)
	ldc1 $f16, THREAD_FP16(k0)
	ldc1 $f18, THREAD_FP18(k0)
	ldc1 $f20, THREAD_FP20(k0)
	ldc1 $f22, THREAD_FP22(k0)
	ldc1 $f24, THREAD_FP24(k0)
	ldc1 $f26, THREAD_FP26(k0)
	ldc1 $f28, THREAD_FP28(k0)
	ldc1 $f30, THREAD_FP30(k0)
	
1:
	lw k1, THREAD_RCP(k0)
	la k0, __OSGlobalIntMask
	lw k0, 0(k0)
	srl k0, k0, 0x10
	and k1, k1, k0
	sll k1, k1, 0x1


.set noreorder /*the la wants to switch places with the sll above =/*/
	la k0, __osRcpImTable
	addu k1, k1, k0
	lhu k1, 0(k1)

	la k0, PHYS_TO_K1(MI_INTR_MASK_REG)
	sw k1, 0(k0)

    nop
    nop
    nop
    nop
	eret
.set reorder
END(__osDispatchThread)

LEAF(__osCleanupThread)
	move a0, zero
	jal osDestroyThread
END(__osCleanupThread)