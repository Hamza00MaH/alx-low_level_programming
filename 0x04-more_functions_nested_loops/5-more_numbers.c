#include "main.h"
/**
 * more_numbers - print numbers x10 0 to 14
 * return: it's a void
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
_putchar(49);
}
_putchar('0' + i % 10);
}
_putchar('\n');
}
}
