section .data
    hello_message db "Hello, Holberton\n", 0

section .text
    global main

main:
    ; Prepare arguments for printf
    mov rdi, hello_message
    mov rax, 0 ; RAX=0 indicates printf
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

section .text
    extern printf
