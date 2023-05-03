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
unsigned int i = 0;
char *s;
va_list args;
va_start(args, format);
while (format && format[i])
{
while (format[i])
  {
    switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (float) va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
{
s = "(nil)"; 
}
printf("%s", s);
break;
default:
continue;
}
if (format[i])
printf(", ");
}
}
printf("\n");
va_end(args);
}
