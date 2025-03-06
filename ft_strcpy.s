
section .text
    global ft_strcpy

ft_strcpy:
    test rsi, rsi
    je .null_case

    test rdi, rdi
    je .null_case

    xor rcx, rcx

.copy_loop:
    mov al, [rsi + rcx]
    mov [rdi + rcx], al
    inc rcx
    cmp al, 0
    je .done
    jne .copy_loop

.done:
    mov rax, rdi
    ret

.null_case:
    xor rax, rax
    ret