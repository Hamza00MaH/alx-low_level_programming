#include "main.h"

/**
* _print_rev_recursion - our function that print string revrersed
* @s:string to print
* Description: print the name
* Return: void
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
