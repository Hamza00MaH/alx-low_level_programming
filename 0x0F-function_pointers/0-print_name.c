#include "function_pointers.h"

/**
* print_name - our function that print name
* @name: pointer to  name
* @f: pointer to function
* Description: print the name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
