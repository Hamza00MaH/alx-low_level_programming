#include "main.h"

/**
*print_diagonal - print numbers "\"
*@n: numbere of "\"
*return: void
*/

void print_diagonal(int n)
{
int i = 0, j = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
