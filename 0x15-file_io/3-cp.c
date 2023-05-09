#include "main.h"

/**
 * main - our main function that copie content from file to another
 * @ac: arg count
 * @av: arg content
 * Return: 0
 */

int main(int ac, char *av[])
{
int f1, f2;
int f_w = 0;
char buffer[1024];
if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
f1 = open(av[1], O_RDONLY);
if (f1 == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
f2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (f2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
do {
f_w = read(f1, buffer, 1024);
if (f_w == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
f_w = write(f2, buffer, f_w);
if (f_w == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
} while (f_w == 1024);
if (close(f1) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
if (close(f2) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
return (0);
}
