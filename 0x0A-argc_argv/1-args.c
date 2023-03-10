#include "main.h"

/**
 * main - program that print number of args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc)
		printf("%d\n", (argc - 1));
	return (0);
}

