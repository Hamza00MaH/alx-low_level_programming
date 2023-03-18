#include <stdio.h>
/**
	 * main -our entrypoint
	 * Description:  lowercases alphabet on ASCll exepting some letter,
	 * Return: 0.
*/
int main(void)
{
int lwa;
char ltr = 'a' + lwa;
for (lwa = 0; lwa < 26; lwa++)
if (ltr == 'q' || ltr == 'e')
{
ltr++;
continue;
}
else
{
putchar(lwa);
}
putchar('\n');
return (0);
}
