#include "main.h"
/**
	 * print_sign -our entrypoint
	 *@n:check num
	 * Description: function that prints the sign of a number,
	 * Return: 1 greater -1 less.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
return (0);
}
