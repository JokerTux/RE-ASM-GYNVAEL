.intel_syntax noprefix

.section .note.GNU-stack

.text

.global get_cwd

get_cwd:
 mov rax, 0x4f
 mov rsi, 0xff
 mov rdx, 0xff
 syscall
 ret
