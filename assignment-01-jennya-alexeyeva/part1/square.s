.global square
.text
square:
    enter $0, $0
    mov %rdi, %rax
    imul %rdi, %rax
    leave
    ret
