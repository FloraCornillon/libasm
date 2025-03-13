bits 64

section .text
    global ft_strdup
    extern ft_strlen, ft_strcpy, malloc, __errno_location

ft_strdup:
    test rdi, rdi
    jz .return_null
    push rdi                    ; on prepare la stack
    call ft_strlen
    add rax, 1                  ; +1 pour caractere null

    mov rdi, rax
    call malloc wrt ..plt
    test rax, rax
    jz .malloc_failed

    mov rdi, rax
    pop rsi
    call ft_strcpy

    ret

.malloc_failed:
    mov rdi, 12
    call __errno_location wrt ..plt
    mov [rax], rdi
    ret

.return_null:
    xor rax, rax
    ret

