#include "main.h"
/**
	 * _isalpha -our entrypoint
	 *@c:check char
	 * Description: function that checks for alphabetic character.,
	 * Return: 1 if  lower else 0.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 92))
return (1);
else
return (0);
}
