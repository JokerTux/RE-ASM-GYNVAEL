.intel_syntax noprefix

.section .note.GNU-stack

.text

.global w_file

w_file:
 push 0x1
 pop rax
 syscall
 ret
