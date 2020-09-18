.global cube
.text
cube:
	pushq   %rbp
        movq    %rsp, %rbp
        movq    %rdi, -24(%rbp)
        cmpq    $1, -24(%rbp)
        jne     .L2
        movl    $1, %eax
        jmp     .L3
.L2:
        movq    -24(%rbp), %rax
        imulq   %rax, %rax
        movq    %rax, -8(%rbp)
        movq    -8(%rbp), %rax
        imulq   -24(%rbp), %rax
.L3:
        popq    %rbp
        ret
