#include "main.h"

/**
 * get_endianness - function that checks the endian
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
unsigned int i;
char *c;
i = 1;
c = (char *)&i;
if (*c)
return (1);
else
return (0);
}
