.intel_syntax noprefix

.section .note.GNU-stack

.text

.global add


add:
 mov rax, rdi
 add rax, rsi
 ret
