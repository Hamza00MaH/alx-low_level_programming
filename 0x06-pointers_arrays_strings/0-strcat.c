#include "main.h"

/**
 * _strcat - Concatenates-two-strings
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int dest_length = 0;
int tog = 0;
while (dest[dest_length] != '\0')
{
dest_length++;
}
while (src[tog] != '\0')
{
dest[dest_length] = src[tog];
tog++;
dest_length++;
}
dest[dest_length] = '\0';
return (dest);
}
