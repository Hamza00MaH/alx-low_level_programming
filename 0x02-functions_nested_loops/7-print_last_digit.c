#include "main.h"
/**
	 * print_last_digit -our entrypoint
	 *@n:num
	 * Description: function that prints the last digit of a number,
	 * Return: ls.
*/

int print_last_digit(int n)
{
int ls;
ls = n % 10;
if (l < 0)
{
_putchar(-ls + 48);
return (-ls);
}
else
{
_putchar(ls + 48);
return (ls);
}
}
