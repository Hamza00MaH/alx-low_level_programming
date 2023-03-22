#include "main.h"
/**
	 * print_alphabet_x10 -our entrypoint
	 * Description: prints 10 times the alphabet lowercase followed by a new line,
	 * Return: 0.
*/
void print_alphabet_x10(void)
{
char Lw;
int i;
for (i = 0; i < 10; i++)
{
for (Lw = 'a'; Lw <= 'z'; ++Lw)
_putchar(Lw);
_putchar('\n');
}
}
