#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: pointer to txt.file
 * @letters: num letters to read and write
 * Return: number of letter read print if succed, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *f = fopen(filename, "r");
char *buff = malloc(sizeof(char) * (letters + 1));
ssize_t c_r = fread(buff, sizeof(char), letters, f);
ssize_t c_w = fwrite(buff, sizeof(char), c_r, stdout);
if (filename == NULL)
return (0);
if (f == NULL)
return (0);
if (buff == NULL)
{
fclose(f);
return (0);
}
if  (c_r <= 0)
{
free(buff);
fclose(f);
return (0);
}
if (c_w != c_r)
{
free(buff);
fclose(f);
return (0);
}
free(buff);
fclose(f);
return (c_r);
}
