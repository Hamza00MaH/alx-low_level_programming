#include "main.h"
#include <string.h>

/**
 * cap_string - cap-words-in-array
 * @cap: to cap
 * Return: cap
 */

char *cap_string(char *cap)
{
int i = 0;
while (cap[i] != '\0')
{
if (cap[i] > 96 && cap[i] < 123)
{
if (i == 0)
{
cap[i] -= 32;
}
if (strchr(" \t\n,;.!?\"(){}|", cap[i - 1]) != NULL)
{
cap[i] -= 32;
}
}
i++;
}
return (cap);
}
