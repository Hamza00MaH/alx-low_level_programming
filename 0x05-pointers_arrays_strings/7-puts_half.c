#include "main.h"
#include <string.h>

/**
 * puts_half - prints half string
 * @str: string
 * Return: Void
 */

void puts_half(char *str)
{
int i = 0;
int len = strlen(str);
if (len % 2 == 0)
{
for (i = len / 2 ; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (len / 2) + 1 ; i < len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
