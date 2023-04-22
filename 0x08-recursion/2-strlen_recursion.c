#include "main.h"

/**
* _strlen_recursion - our function that returns length of str
* @s:string to measure
* Description: print the length
* Return: lemgth
*/


int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return _strlen_recursion(s + 1);
}
else
{
return (0);
}
}
