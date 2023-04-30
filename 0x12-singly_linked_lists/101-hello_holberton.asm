mov eax, 4
mov ebx, 1
mov edi, offset fmt
mov esi, offset str
call printf 
str db "Hello, Holberton"
fmt db "%s\n"
