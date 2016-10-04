# func: selection sort algorithm 
# by whoami
# Oct 1-4 2016
# rdx --- i, rax --- min, rcx --- j, rbx --- tmp

.section .data
data_item:
	.quad 3,67,34,222,45,75,54,34,44,33,22,11,66,0
before_sort:
	.asciz "sorted nums:\n"
sort_output_format:
	.asciz "%d\n"
.section .text
.globl _start
_start:
	movq $0, %rdx	
	out_loop:                                         # outer loop
		movq %rdx, %rax
		movq data_item(,%rdx,8), %rbx             # if arr[i] == 0 print all nums sorted and exit.
		cmp $0, %rbx
		je print_arr
                movq %rdx, %rcx
		incq %rcx
		inner_loop:                               # inner loop, get the min-value
			cmp $0, data_item(,%rcx,8)
			je inner_loop_exit
			movq data_item(,%rax,8), %rbx
			cmp %ebx, data_item(,%rcx,8)
			jg not_change_min
			movq %rcx, %rax
			not_change_min:
				incq %rcx
 				jmp inner_loop
		inner_loop_exit:                          
			movq data_item(,%rdx,8), %rbx     # swap the value, of arr[i] and the min-value.
                        movq data_item(,%rax,8), %rdi
			movq %rdi, data_item(,%rdx,8)     
                	movq %rbx, data_item(,%rax,8)
			incq %rdx
			jmp out_loop                      # inner loop exits.

print_arr:
	movq $0, %rbx                                      # print 'sorted nums:'
	movq $before_sort, %rdi
	call printf
	print_loop:                                        # print all nums sorted in a loop
		movq data_item(,%rbx,8),%rax
		cmp $0, %rax
		je end
		movq $sort_output_format, %rdi 
		movq %rax, %rsi
		call printf
		incq %rbx
		jmp print_loop
end:                                                       # program ends.
	movq $127, %rdi
	movq $60, %rax
	syscall
