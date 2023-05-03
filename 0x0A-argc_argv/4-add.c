#include "main.h"

/**
 * main - that adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
int i;
int res = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) < 1)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
res = res + atoi(argv[i]);
}
}
printf("%d\n", res);
exit(EXIT_SUCCESS);
}
