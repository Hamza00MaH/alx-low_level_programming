#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - our function that print name
* @name: pointer to  name
* @f: pointer to function
* Description: print the name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name != 0 || f != 0)
f(name);
}
