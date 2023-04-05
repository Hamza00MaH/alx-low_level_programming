#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searche string for any size
 * @s: string to check
 * @accept: string with the researched char
 * Return: length of s
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*p != '\0')
{
if (*s == *p)
return (s);
p++;
}
s++;
}
return (NULL);
}
