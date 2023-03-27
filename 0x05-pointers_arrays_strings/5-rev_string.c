#include "main.h"

/**
 * rev_string - entry point
 *@s:reversed string
 *Return: void
 */

void rev_string(char *s)
{
char rev;
int n, i;
n = 0;
while (s[n] != '\0')
n++;
for (i = 0; i < n; i++)
{
n--;
rev = s[i];
s[i] = s[n];
s[n] = rev;
}
}
