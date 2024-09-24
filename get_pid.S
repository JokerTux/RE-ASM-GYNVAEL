.intel_syntax noprefix

.section .note.GNU-stack

.text

.global get_pid

get_pid:
 mov rax, 0x27 
 syscall
 ret
