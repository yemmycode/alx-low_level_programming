section .data
    hello db "Hello, Holberton", 10, 0  ; Null-terminated string with a newline character
    format db "%s", 0                   ; The format specifier for printf

section .text
    global main
    extern printf

main:
    ; Push arguments for printf onto the stack
    push format
    push hello

    ; Call printf
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Return 0 to comfirm successful execution
    xor rdi, rdi
    ret

