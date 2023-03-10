#include "main.h"

/**
 * main - sum of positive numbers from args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char **argv)
{
	int r = 0;
	int i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			int j = 0;

			while (argv[i][j])
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("ERROR\n");
					return (1);
				}
				j++;
			}
			r = r + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", r);
	return (0);
}
