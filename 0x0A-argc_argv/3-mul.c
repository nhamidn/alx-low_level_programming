#include "main.h"

/**
 * main - multiply two numbers from args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char **argv)
{
	int r;

	if (argc == 3)
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

