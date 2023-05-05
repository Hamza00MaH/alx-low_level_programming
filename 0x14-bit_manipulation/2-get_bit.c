#include "main.h"

/**
 * get_bit - our function that returns value of bit at given index.
 * @n: num from we take bit
 * @index: index
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hide = 1UL << index;
unsigned long int bit = n & hide;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
else
return ((bit != 0) ? 1 : 0);
}
