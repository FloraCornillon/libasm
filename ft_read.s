bits 64

section .text
    global ft_read
    extern __errno_location

ft_read:
    mov rax, 0
    syscall

    cmp rax, 0
    jge .done

    neg rax
    mov rdi, rax
    call __errno_location wrt ..plt
    mov [rax], rdi
    mov rax, -1

.done:
    ret
