#include "main.h"

/**
* _isdigit - our fucntion/entry point
* @c: character to be checked
* Description: Check if a charachter is digit
* Return: 1 if it's digit and 0 if not
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
else
return (0);
}
