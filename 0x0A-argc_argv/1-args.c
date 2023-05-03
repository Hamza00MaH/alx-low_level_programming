#include "main.h"

/**
 * main - prints the nunber of arguments sent to program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) **argv)
{
printf("%d\n", (argc - 1));
exit(EXIT_SUCCESS);
}
