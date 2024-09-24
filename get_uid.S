.intel_syntax noprefix

.section .note.GNU-stack

.text

.global get_uid


get_uid:
 mov rax, 0x66
 syscall
 ret
