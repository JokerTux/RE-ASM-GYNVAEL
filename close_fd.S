.intel_syntax noprefix

.section .note.GNU-stack

.text

.global close_fd 

close_fd:
 push 0x3
 pop rax
 syscall
 ret
