#include "main.h"

/**
 * print_line - print numbers
 * @n: num of underscore
 * return: it's a void
 */

void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
