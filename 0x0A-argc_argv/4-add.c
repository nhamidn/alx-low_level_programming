#include "main.h"

/**
 * _isdigit - detect if it's digit or not
 * @c: character to scan
 * Return: 0 if not digit otherwise 1
 *
 */
int _isdigit(int c)
{
	int resp;

	if (c > 47 && c < 58)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}
	return (resp);
}

/**
 * main - sum of positive numbers from args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int r = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (_isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		r = r + atoi(argv[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}
