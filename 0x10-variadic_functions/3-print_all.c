#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all - our function
* @format: arguments
* Return: void
*/


void print_all(const char * const format, ...)
{
int i = 0;
char c;
char *s;
va_list args;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (float) va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
break;
default:
break;
}
if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}
i++;
}
printf("\n");
va_end(args);
}
