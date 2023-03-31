#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates-two-strings
 * @dest: Destination string
 * @src: Source string
 * @n: num of char to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_length = strlen(dest);
int tog = 0;
for (tog = 0; tog < n && src[tog] != '\0'; tog++)
{
dest[dest_length + tog] = src[tog];
}
dest[dest_length + tog] = '\0';
return (dest);
}
