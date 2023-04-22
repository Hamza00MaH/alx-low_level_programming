#include "main.h"

/**
* _pow_recursion - our function that returns x pow y
* @x:powered
* @y:power
* Description: power it
* Return: result
*/

int _pow_recursion(int x, int y)
{
if (y != 0)
return (x * _pow_recursion(x, y - 1));
else if (y < 0)
return (-1);
else
return (1);
}
