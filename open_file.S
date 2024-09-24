.intel_syntax noprefix

.section .note.GNU-stack

.text

.global open_file 

open_file:
 push 0x2
 pop rax
 mov rsi, 0x41
 mov rdx, 0644 
 syscall
 ret
