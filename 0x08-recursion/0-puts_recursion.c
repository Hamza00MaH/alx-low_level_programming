#include "main.h"

/**
* _puts_recursion - our function that print string
* @s:string to print
* Description: print the name
* Return: void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
