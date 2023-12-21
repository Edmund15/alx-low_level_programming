section .data
    hello db "Hello, Holberton", 10, 0  ; The string to be printed with a newline character

section .text
    global _start

_start:
    ; Calling the printf function
    ; printf(const char *format, ...)

    ; Push the format string address
    push hello

    ; Call the printf function
    call printf

    ; Clean up the stack
    add rsp, 8

    ; Exit the program
    call my_exit


section .text
    global my_exit

my_exit:
    ; Exit the program using sys_exit
    mov rax, 60         ; syscall number for sys_exit
    mov rdi, [exitcode] ; exit code (0)
    syscall

