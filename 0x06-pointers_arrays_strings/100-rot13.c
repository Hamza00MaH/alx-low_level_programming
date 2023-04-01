#include "main.h"

/**
 * rot13 - encode string with rot13
 * @enc: string to encode
 * Return: enc (encoded string)
 */

char *rot13(char *enc)
{
int length, letrep;
char let[] = "abcdefghijklmnopqrstuvwxyz";
char let13[] = "nopqrstuvwxyzabcdefghijklm";
for (length = 0; enc[length] != '\0'; length++)
{
for (letrep = 0; letrep <= 25; letrep++)
{
if (enc[length] == let[letrep])
enc[length] = let13[letrep];
}
}
return (enc);
}
