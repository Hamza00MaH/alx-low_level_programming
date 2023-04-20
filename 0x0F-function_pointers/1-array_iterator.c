#include "function_pointers.h"


/**
* array_iterator - our function
* @array: pointer to array
* @size:the size of array
* @action: pointer to function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n; 
for (n = 0; n < size; n++)
{
action(array[n]);
}
}
