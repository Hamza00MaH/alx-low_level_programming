#include "main.h"

/**
 * print_numbers - print numbers
 *
 * description: function that print numbers from 0 to 9
 */

void print_numbers(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
