#include <stdio.h>
/**
	 * main -our entrypoint
	 * Description:  numbers with putchar (hexadecim),
	 * Return: 0.
*/
int main(void)
{
int n;
int lt;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (lt = 97; lt <= 102; lt++)
{
putchar(lt);
}
putchar('\n');
return (0);
}
