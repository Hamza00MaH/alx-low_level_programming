#include <stdio.h>
/**
	 * main -our entrypoint
	 * Description:  lowercases then upper alphabet on ASCll,
	 * Return: 0.
*/
int main(void)
{
int lwa;
int upa;
for (lwa = 0; lwa < 26; lwa++)
{
putchar('a' + lwa);
}
putchar('\n');
for (upa = 0; upa < 26; upa++)
{
putchar('A' + upa);
}
return (0);
}
