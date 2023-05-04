#include "main.h"

/**
* print_binary - our function that print bianry of int
* @n: the int to print in binary
* Return: void
*/

void print_binary(unsigned long int n)
{
int i;
if (n == 0)
{
_putchar('0');
return;
}
for (i = 63; i >= 0; i--)
{
_putchar(((n >> i) & 1) + '0');
}
}
