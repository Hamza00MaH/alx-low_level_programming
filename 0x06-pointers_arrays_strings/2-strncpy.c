#include "main.h"

/**
 * _strncpy - Copy-strings
 * @dest: Destination string
 * @src: Source string
 * @n: num of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int cp;
for (cp = 0; cp < n && src[cp] != '\0'; cp++)
{
dest[cp] = src[cp];
}
for (cp < n)
{
dest[cp] = '\0';
cp++;
}
return (dest);
}
