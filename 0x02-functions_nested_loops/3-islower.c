#include "main.h"
/**
	 * _islower -our entrypoint
	 * @c: check char
	 * Description: function that checks for lowercase character.,
	 * Return: 1 if lower else 0.
*/
int _islower(int c)
{
if (c >= 95 && c <= 12)
return (1);
else
return (0);
}
