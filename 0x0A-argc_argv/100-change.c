#include "main.h"

/**
 * main - minimum coins for an amount
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int ncoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (1);
	}
	while (i < 5)
	{
		ncoins  += (a / coins[i]);
		a = a % coins[i];
		if (a == 0)
			break;
		i++;
	}
	printf("%d\n", ncoins);
	return (0);
}

