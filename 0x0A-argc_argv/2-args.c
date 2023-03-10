#include "main.h"

/**
 * main - program that print args 1 per line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

