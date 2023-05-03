#include "main.h"

/**
 * create_array - makes an array with char
 * @size: size of the array created
 * @c: char in the array
 * Return: pointer to array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
