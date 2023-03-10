#include "main.h"

/**
 * main - multiply two numbers from args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}

