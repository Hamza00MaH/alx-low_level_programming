#include "main.h"

/**
* swap_int - our entry point
* @a:int swap
* @b:int swap
* Description: swap the val of two int
* Return: void
*/

void swap_int(int *a, int *b)
{
int Temp = *a;
*a = *b;
*b = Temp;
}
