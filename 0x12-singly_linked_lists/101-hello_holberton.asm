global _start
    extern printf
    section .text
_start:
    mov     rdi, format
    mov     rsi, message
    mov     rax, 0
    call    printf
    mov rax, 1
    mov rbx, 0
    int 80h
    section .data
message: db      'Hello, Holberton',0x0a,0
format:    db '%s', 0