#include "main.h"
#include <string.h>

/**
 * reverse_array - rev array
 * @a: array to be reversed
 * @n: array's size
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j;
while (i < n / 2)
{
j = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = j;
i++;
}
return;
}
