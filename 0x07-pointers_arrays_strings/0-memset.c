#include "main.h"

/**
 * _memset - fills a block of memory with a specified character
 * @s: poiter to a block m
 * @b: with what we fill
 * @n:num of bytes filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n;i++)
{
*(s + 1) = b;
}
return (s);
}
