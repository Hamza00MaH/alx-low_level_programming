#include "main.h"

/**
 * string_toupper - conv-low-to-up
 * @U: string to up
 * Return: U
 */

char *string_toupper(char *U)
{
int i = 0;
while (U[i] != '\0')
{
if (U[i] >= 97 && U[i] <= 122)
U[i] = U[i] - 32;
i++;
}
return (U);
}
