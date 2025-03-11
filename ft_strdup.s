bits 64

section .text
    global ft_strdup
    extern ft_strlen, ft_strcpy, malloc, ___error

ft_strdup:
    