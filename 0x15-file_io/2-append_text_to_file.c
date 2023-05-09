#include "main.h"

/**
 * append_text_to_file -  that appends text at the end of a file
 * @filename: our file
 * @text_content: text to append
 * Return: 1 = succed, -1 = failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
int f;
int f_w;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
f = open(filename, O_WRONLY | O_APPEND);
if (f < 0)
return (-1);
f_w = write(f, text_content, strlen(text_content));
if (f_w < 0)
return (-1);
return (1);
}
