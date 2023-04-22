#include "function_pointers.h"
#include <stdarg.h>

/**
* int_index - our function comparison
* @array: our array
* @size:size of array
* @cmp: compered str
* Return:if match return !=0 else return -1
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
