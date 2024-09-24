.intel_syntax noprefix

.section .note.GNU-stack

.text

.global mk_dir 

mk_dir: 
 mov rax, 0x53
 mov rsi, 0700 
 syscall
 ret
