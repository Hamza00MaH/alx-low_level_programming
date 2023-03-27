#include "main.h"

/**
 * print_rev - our entry point
 *@s:printed string in rev
 * Return: void
 */

int _strlen(char *s);
void print_rev(char *s)
{
int i = _strlen();
for (i = _strlen - 1; i >= 0; i--)
{
_putchar(*s + i);
s--;
}
_putchar('\n');
}
