#include "main.h"

/**
 * rev_string - entry point
 *@s:reversed string
 *Return: void
 */

void rev_string(char *s)
{
if (str == NULL)
{
return;
}
char *start = str;
char *end = start + strlen(str) - 1;


while (start < end)
{
char temp = *start;
*start++ = *end;
*end-- = temp;
}
}
}
