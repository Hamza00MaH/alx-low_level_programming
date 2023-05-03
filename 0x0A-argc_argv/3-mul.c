#include "main.h"

/**
 * main - prints the multiplication of arguments program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
if (argc < 3)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
exit(EXIT_SUCCESS);
}
