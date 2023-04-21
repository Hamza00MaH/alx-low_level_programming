#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - our function
* @n: num of param
* @...:num content varargs
* Return: 0 if n=0 else the sum of all param
*/

int sum_them_all(const unsigned int n, ...);
{
va_list num;
int sum = 0;
unsigned int i;
va_start(num, n);
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
va_end(num);
return (sum);
}
