#include "variadic_functions.h"
#include <stdarg.h>

/**
* int index - our function comparison
* @array: our array
* @size:size of array
* Return:if match return !=0 else return -1
*/


int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return i;
}
}
}
return -1;
}
