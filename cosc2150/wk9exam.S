	.data

s1:	ascii	"Hello World"
w2:	.word	0x45A
b3:	.byte	'5'
hw4:	.hword	0x99
bs5:	.byte	'8'
w6:	.word	0x100B

	.text
	.globl main

main:	stmfd	sp!, {lr}




	ldmfd	sp!, {lr}
	mov	r0, #0
	mov	pc, lr
	.end
