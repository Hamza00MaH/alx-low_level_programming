#include "main.h"

/**
 * print_square - print square
 *@size: size of the square,
 * return: void
 */

void print_square(int size)
{
int i = 0, j = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
