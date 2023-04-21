#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - our function
* @separator: str to print
* @n:num of int
* @...: num contt
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
for (unsigned int i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
