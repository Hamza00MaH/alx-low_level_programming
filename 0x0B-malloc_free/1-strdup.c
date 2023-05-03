#include "main.h"

/**
 * _strdup - returns  pointer to the new allocated memory
 * @str: string to duplicated
 * Return: a pointer to a memory space or NULL if str = NULL
 */

char *_strdup(char *str)
{
unsigned int i;
unsigned int len;
char *p;
if (str == NULL)
return (NULL);
len = strlen(str);
p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
p[i] = *(str + i);
}
p[i] = '\0';
return (p);
}
