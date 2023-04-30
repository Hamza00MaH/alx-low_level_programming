	mov eax, 4
	mov ebx, 1
	mov edi, offset foemtttt
	mov esi, offset wrt_it
	call printf 
	wrt_it db "Hello, Holberton"
	formatttt db "%s\n"
	
