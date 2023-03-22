#include "main.h"
/**
	 * print_alphabet -our entrypoint
	 * Description:  prints the alphabet, in lowercase, followed by a new line.,
	 * Return: 0.
*/
void print_alphabet(void)
{
char Lw;
for (Lw = 'a'; Lw <= 'z'; ++Lw)
_putchar(Lw);
_putchar('\n');
}
