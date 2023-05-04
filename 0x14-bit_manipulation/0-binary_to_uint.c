#include "main.h"

/**
* binary_to_uint - our function that convert b to ui
* @b: pointer to the binary string
* Return: converted number or 0 if b = NULL || chars != 1&0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int conv_num = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
conv_num = (conv_num << 1) + (*b - '0');
b++;
}
else
return (0);
}
return (conv_num);
}
