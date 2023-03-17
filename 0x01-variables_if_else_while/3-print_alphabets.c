#include <stdio.h>
/**
	 * main -our entrypoint
	 * Description:  lowercases then upper alphabet on ASCll,
	 * Return: 0.
*/
int main(void)
{
int lwa;
for (lwa = 97; lwa <= 122; lwa++)
{
putchar(lwa);
}
putchar('\n');
int upa;
for (upa = 60; upa <= 90; upa++)
{
putchar(upa);
}
return (0);
}
