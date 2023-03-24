#include "main.h"

/**
 * print_triangle - print triangle
 * @size: triangle's size
 * return:  void
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < size; j++)
{
for (i = 1; i > size - j; i--)
{
_putchar(32);
}
for (k = 0; k <= j + 1; k++)
{
_putchar(35);
}
putchar('\n');
}
}
_putchar('\n');
}
