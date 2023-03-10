#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print it name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
