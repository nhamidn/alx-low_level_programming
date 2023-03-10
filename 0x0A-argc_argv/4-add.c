#include "main.h"

/**
 * _checker - check if a string
 * contain a non digit character
 * @str: string to check
 * Return: 1 if it's digit otherwise 0
 */
int _checker(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - sum of positive numbers from args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_checker(argv[i]) == 0)
		{
			printf("ERROR\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
