
section .text
    global ft_strcmp

ft_strcmp:
    test rsi, rsi
    je .null_case

    test rdi, rdi
    je .null_case

    xor rax, rax

.loop:
    movzx rax, byte [rdi]     ; move with zero extension
    movzx rdx, byte [rsi]
    cmp rax, rdx
    jne .diff
    test rax, rax
    jz .done
    inc rdi
    inc rsi
    jmp .loop
  
.diff:
    sub rax, rdx

.done:
    ret

.null_case:
    mov rax, -1
    ret
