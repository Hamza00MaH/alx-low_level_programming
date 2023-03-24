#include "main.h"
/**
* _isupper - our entry point
* @c: character to be checked
* Description: Check if a charachter is uppercase
* Return: 1 if it's upper and 0 if not
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
