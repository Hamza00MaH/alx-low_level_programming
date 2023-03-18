#include <stdio.h>
/**
	 * main -our entrypoint
	 * Description:  lowercases alphabet on ASCll exepting some letter,
	 * Return: 0.
*/
int main(void)
{
int lwa;
for (lwa = 0; lwa < 26; lwa++)
{
char ltr = 'a' + lwa;
if (ltr == 'q' || ltr == 'e')
{
ltr++;
continue;
}
else
{
putchar(ltr);
}
}
putchar('\n');
return (0);
}
