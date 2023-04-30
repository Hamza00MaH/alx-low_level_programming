	mov eax, 4
	mov ebx, 1
	mov edx, offset string
	mov ecx, 12
	int 0x80
	string db "Hello, Holberton", 10
	
