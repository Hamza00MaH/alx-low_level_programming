#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - our function
* @separator: str to print
* @n:num of int
* @...: num contt
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
const char *str;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
