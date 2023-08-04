#include <R4300.h>
#include <regdef.h>
#include <sys/asm.h>

.text
.weakext bcmp _bcmp
LEAF(_bcmp)
	xor v0, a0,a1
	blt a2, 16, bytecmp

	negu t8, a0
	andi v0, v0,0x3
	bnez v0, unalgncmp

	andi t8, t8,0x3
	subu a2, a2,t8
	beqz t8, wordcmp
	
	move v0, v1
	lwl v0, 0(a0)
	lwl v1, 0(a1)
	addu a0, a0,t8
	addu a1, a1,t8
	bne v0, v1,cmpne

GLABEL(wordcmp)
	and a3, a2, ~3
	subu a2, a2,a3
	beqz a3, bytecmp

	addu a3, a3,a0
GLABEL(bcmp_1_1)
	lw v0, 0(a0)
	lw v1, 0(a1)
	addiu a0, a0,4
	addiu a1, a1,4
	bne v0, v1,cmpne
	bne a0, a3, bcmp_1_1

	b bytecmp
GLABEL(unalgncmp)
	negu a3, a1
	andi a3, a3,0x3
	subu a2, a2,a3
	beqz a3, partalgncmp

	addu a3, a3,a0
	
GLABEL(bcmp_1_2)
	lbu v0, 0(a0)
	lbu v1, 0(a1)
	addiu a0, a0,1
	addiu a1, a1,1
	bne v0, v1,cmpne
	bne a0, a3, bcmp_1_2

GLABEL(partalgncmp)
	and a3, a2, ~3
	subu a2, a2,a3
	beqz a3, bytecmp

	addu a3, a3,a0
	
GLABEL(bcmp_1_3)
	lwl v0, 0(a0)
	lw v1, 0(a1)
	lwr v0, 3(a0)
	addiu a0, a0,4
	addiu a1, a1,4
	bne v0, v1,cmpne
	bne a0, a3, bcmp_1_3
	
GLABEL(bytecmp)
	addu a3, a2,a0
	blez a2, cmpdone

GLABEL(bcmp_1_4)
	lbu v0, 0(a0)
	lbu v1, 0(a1)
	addiu a0, a0,1
	addiu a1, a1,1
	bne v0, v1,cmpne
	bne a0, a3, bcmp_1_4

GLABEL(cmpdone)
	move v0, zero
	jr ra
GLABEL(cmpne)
	li v0, 1
	jr ra
	
END(_bcmp)