#include "main.h"

/**
 * create_file - our function that create file
 * @filename: name of file to create
 * @text_content: file content
 * Return: 1 = succed , -1 = failed
 */

int create_file(const char *filename, char *text_content)
{
int f;
int f_w;
unsigned int l = strlen(text_content);
if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f < 0)
{
if (errno == EEXIST)
{
f = open(filename, O_WRONLY | O_TRUNC);
if (f == -1)
return (-1);
}
else
return (-1);
}
if (text_content == NULL)
text_content = "";
f_w = write(f, text_content, l);
if (f_w == -1)
return (-1);
close(f);
return (1);
}
