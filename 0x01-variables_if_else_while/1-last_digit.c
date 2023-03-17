#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
	 * main -our entrypoint
	 * Description:  random assignement another time cool,
	 * Return: 0.
*/
int main(void)
{
int n;
int ld_of_n;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld_of_n = n % 2;
if (ld_of_n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, ld_of_n);
}
else if (ld_of_n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ld_of_n);
}
else if (ld_of_n < 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld_of_n);
}
return (0);
}
