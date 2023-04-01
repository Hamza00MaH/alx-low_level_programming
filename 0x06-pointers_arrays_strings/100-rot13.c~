#include "main.h"

/**
 * leet - encode string
 * @enc: string to encode
 * Return: enc (encoded string)
 */

char *leet(char *enc)
{
int length, letrep;
/*length for length ^_^, letrep for checking letters that be replaced */
char let[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (length = 0; enc[length] != '\0'; length++)
{
for (letrep = 0; letrep <= 9; letrep++)
{
if (enc[length] == let[letrep])
enc[length] = num[letrep];
}
}
return (enc);
}
