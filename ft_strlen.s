
section .text
    global ft_strlen

ft_strlen:
    test rdi, rdi ; similaire a AND mais ne modifie pas les operande (test si ptr = null)
    je .null_case
    xor rcx, rcx  ; toujours faire ça pour mettre un registre a 0

.loop:
    cmp byte [rdi + rcx], 0
    je .end
    inc rcx
    jmp .loop

.end:
    mov rax, rcx
    ret

.null_case:
    xor rax, rax
    ret