bits 64

section .text
    global ft_write
    extern __errno_location


ft_write:
    mov rax, 1   ; syscall 1 pour write
    syscall

    cmp rax, 0
    jge .done

    neg rax              ; convertis rax en positif (errno attend une valeur positive)
    mov rdi, rax
    call __errno_location wrt ..plt ; met l'adresse de errno ds rax avec mode pie
    mov [rax], rdi        ; ecrit la val de rdi dans l'adresse mémoire pointé par rax (donc stocker ds errno)
    mov rax, -1

.done:
    ret