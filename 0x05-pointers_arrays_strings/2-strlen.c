#include "main.h"

/**
 * _strlen - entry point
 *@s:string
 *Return: length
 */

int _strlen(char *s)
{
int length;
length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
