#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check
 * @accept: string with the researched char
 * Return: length of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length, i;
for (length = 0; s[length] != '\0'; length++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (s[length] == accept[i])
break;
}
if (accept[i] == '\0')
return (length);
}
return (length);
}
