
section .text
    global ft_strcmp

ft_strcmp:
    test rsi, rsi
    je .null_case

    test rdi, rdi
    je .null_case

    xor rax, rax

.loop:
    movzx rcx, byte [rdi]     ; move with zero extension
    movzx rdx, byte [rsi]
    cmp rcx, rdx
    jne .diff
  

.diff:
    sub rcx, rdx
    mov rax, rcx

.done:
    ret

.null_case:
    xor rax, rax
    ret
