            .data
format:   .ascii "Hello, Holberton\n"  

            .text
            .global main  
main:
            mov    $format, %rbx
            mov    (%rbx), %rdi
            mov    $1, %rsi
            call     printf
            ret
