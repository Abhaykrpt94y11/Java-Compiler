.data
newline : .asciiz 
	c:	.word	0
	p:	.word	0
	x:	.word	0
	y:	.word	0

.text
.global main
main:
	li	$t0	5
	mov	y	$t0
	mov	$t0	y
	mov	x	$t0
	li	$t0	9
	li	$t1	5
	sub	$t0	$t0	$t1
	mov	p	$t0
	li	$t0	5
	li	$t1	8
	add	$t0	$t0	$t1
	mov	x	$t0
	mov	$t0	x
	mov	$t1	p
	mul	$t0	$t1
	mov	c	$t0
	li	$t0	5
	li	$t1	5
	div	$t0	$t1
	mov	p	$t0
	mfhi	$t0
	mflo	$t1

