	global main
	extern printf

	section .text
main:
	lea	rdi, [rel mymsg]
	lea	rdi, [rel fmts]
	lea	rdi, [rel mymsg]
	
	mov	al, 0
	call	printf


	mov	rax, 0x3c
	xor	rdi, rdi

	section .data
mymsg: db	"Hello, Holberton",10,0
	fmts: db "%s",0
