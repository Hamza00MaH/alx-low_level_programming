#include "main.h"

/**
 * _strchr - locates char on string
 * @s: pointer to string
 * @c: character
 * Return: if c='\0' return s, if there is no c in s return NULL
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
