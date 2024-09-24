.intel_syntax noprefix

.section .note.GNU-stack

.text

.global ch_dir

ch_dir:
 mov rax, 0x50
 syscall
 ret
