#include <R4300.h>
#include <regdef.h>
#include <sys/asm.h>

.text
.weakext bcopy _bcopy
LEAF(_bcopy)
	move a3, a1
	beqz a2, ret
	beq a0, a1,ret
	blt a1,a0, goforwards
	
	add v0, a0,a2
	bge a1, v0, goforwards
	b gobackwards

GLABEL(goforwards)

	blt a2, 16, forwards_bytecopy
	
	andi v0, a0,0x3
	andi v1, a1,0x3
	beq v0, v1,forwalignable
	

GLABEL(forwards_bytecopy)
	beqz a2, ret
	addu v1, a0,a2
GLABEL(bcopy_loop1)
	lb v0, 0(a0)
	addiu a0, a0,1
	addiu a1, a1,1
	sb v0, -1(a1)
	bne a0, v1, bcopy_loop1
GLABEL(ret)
	move v0, a3
	jr ra

GLABEL(forwalignable)
	beqz v0, forwards
	beq v0, 1,forw_copy3
	beq v0, 2,forw_copy2

	lb v0, 0(a0)
	addiu a0, a0,1
	addiu a1, a1,1
	addiu a2, a2,-1
	sb v0, -1(a1)
	b forwards

GLABEL(forw_copy2)
	lh v0, 0(a0)
	addiu a0, a0,2
	addiu a1, a1,2
	addiu a2, a2,-2
	sh v0, -2(a1)
	b forwards

GLABEL(forw_copy3)
	lb v0, 0(a0)
	lh v1, 1(a0)
	addiu a0, a0,3
	addiu a1, a1,3
	addiu a2, a2,-3
	sb v0, -3(a1)
	sh v1, -2(a1)

GLABEL(forwards)
GLABEL(forwards_32)
	blt a2, 32, forwards_16
	lw v0, 0(a0)
	lw v1, 4(a0)
	lw t0, 8(a0)
	lw t1, 12(a0)
	lw t2, 16(a0)
	lw t3, 20(a0)
	lw t4, 24(a0)
	lw t5, 28(a0)
	addiu a0, a0,32
	addiu a1, a1,32
	addiu a2, a2,-32
	sw v0, -32(a1)
	sw v1, -28(a1)
	sw t0, -24(a1)
	sw t1, -20(a1)
	sw t2, -16(a1)
	sw t3, -12(a1)
	sw t4, -8(a1)
	sw t5, -4(a1)
	b forwards_32

GLABEL(forwards_16)
	blt a2, 16, forwards_4
	lw v0, 0(a0)
	lw v1, 4(a0)
	lw t0, 8(a0)
	lw t1, 12(a0)
	addiu a0, a0,16
	addiu a1, a1,16
	addiu a2, a2,-16
	sw v0, -16(a1)
	sw v1, -12(a1)
	sw t0, -8(a1)
	sw t1, -4(a1)
	b forwards_16

GLABEL(forwards_4)
	blt a2, 4, forwards_bytecopy
	
	lw v0, 0(a0)
	addiu a0, a0,4
	addiu a1, a1,4
	addiu a2, a2,-4
	sw v0, -4(a1)
	b forwards_4
	
GLABEL(gobackwards)
	add a0, a0,a2
	add a1, a1,a2
	blt a2, 16, backwards_bytecopy

	andi v0, a0,0x3
	andi v1, a1,0x3
	beq v0, v1,backalignable
	
GLABEL(backwards_bytecopy)
	beqz a2, ret
	addiu a0, a0,-1
	addiu a1, a1,-1
	subu v1, a0,a2
GLABEL(bcopy_loop2)
	lb v0, 0(a0)
	addiu a0, a0,-1
	addiu a1, a1,-1
	sb v0, 1(a1)
	bne a0, v1,bcopy_loop2

	move v0, a3
	jr ra
GLABEL(backalignable)
	beqz v0, backwards
	beq v0, 3,back_copy3
	beq v0, 2,back_copy2
	lb v0, -1(a0)
	addiu a0, a0,-1
	addiu a1, a1,-1
	addiu a2, a2,-1
	sb v0, 0(a1)
	b backwards

GLABEL(back_copy2)
	lh v0, -2(a0)
	addiu a0, a0,-2
	addiu a1, a1,-2
	addiu a2, a2,-2
	sh v0, 0(a1)
	b backwards

GLABEL(back_copy3)
	lb v0, -1(a0)
	lh v1, -3(a0)
	addiu a0, a0,-3
	addiu a1, a1,-3
	addiu a2, a2,-3
	sb v0, 2(a1)
	sh v1, 0(a1)

GLABEL(backwards)
GLABEL(backwards_32)
	blt a2, 32, backwards_16
	#slti AT, a2,16
	lw v0, -4(a0)
	lw v1, -8(a0)
	lw t0, -12(a0)
	lw t1, -16(a0)
	lw t2, -20(a0)
	lw t3, -24(a0)
	lw t4, -28(a0)
	lw t5, -32(a0)
	addiu a0, a0,-32
	addiu a1, a1,-32
	addiu a2, a2,-32
	sw v0, 28(a1)
	sw v1, 24(a1)
	sw t0, 20(a1)
	sw t1, 16(a1)
	sw t2, 12(a1)
	sw t3, 8(a1)
	sw t4, 4(a1)
	sw t5, 0(a1)
	b backwards_32

GLABEL(backwards_16)
	blt a2, 16, backwards_4
	lw v0, -4(a0)
	lw v1, -8(a0)
	lw t0, -12(a0)
	lw t1, -16(a0)
	addiu a0, a0,-16
	addiu a1, a1,-16
	addiu a2, a2,-16
	sw v0, 12(a1)
	sw v1, 8(a1)
	sw t0, 4(a1)
	sw t1, 0(a1)
	b backwards_16

GLABEL(backwards_4)
	blt a2,4, backwards_bytecopy
	lw v0, -4(a0)
	addiu a0, a0,-4
	addiu a1, a1,-4
	addiu a2, a2,-4
	sw v0, 0(a1)
	b backwards_4
	
END(_bcopy)
/*
*/
