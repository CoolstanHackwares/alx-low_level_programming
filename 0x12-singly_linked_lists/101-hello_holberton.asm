section .data
    message db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    push rbp            ; Prologue for stack frame
    mov rdi, format
    call printf
    pop rbp             ; Epilogue for stack frame

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall

format db "%s", 0

