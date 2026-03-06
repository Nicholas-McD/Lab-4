.section .text
.globl sum_array

sum_array:
    xorl %eax, %eax       
    xorq %rcx, %rcx        

loop_start:
    cmpq %rsi, %rcx        
    jge done              
    

    addl (%rdi, %rcx, 4), %eax 

    incq %rcx              
    jmp loop_start

done:
    ret
    
.section .note.GNU-stack,"",@progbits
