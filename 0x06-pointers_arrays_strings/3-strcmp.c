#include "main.h"

/**
 * _strcmp - compare-two-string
 * @s1: inputs to compare
 * @s2: input to compare
 * Return: 0 if they equal
 * positive if @s1 > @s2
 * negative if @s1 < @s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, res;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
else
{
res = s1[i] - s2[i];
}
i++;
}
return (res);
}
