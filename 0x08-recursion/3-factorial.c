#include "main.h"

/**
* factorial - our function that returns factorial
* @n:var
* Description: factorial res
* Return: factorial
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n != 0)
{
return (factorial(n - 1) * n);
}
else
{
return (1);
}
}
