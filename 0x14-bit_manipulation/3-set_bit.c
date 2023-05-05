#include "main.h"

/**
 * set_bit - that sets the value of a bit to 1 at a given index
 * @n: pointer to ui
 * @index: index
 * Return: 1 if worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int hide = 1UL << index;
*n |= hide;
if (index <= sizeof(unsigned long int) * 8)
return (-1);
else
return (1);
}
