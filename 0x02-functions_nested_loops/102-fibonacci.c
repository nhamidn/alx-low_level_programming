#include "main.h"
/**
 * main - prints first 50 fibonacci numbers.
 *
 * Return: 0 on success.
 */
int main(void)
{
	long int i = 0;
	long int x = 1;
	long int y = 2;
	long int tmp;

	while (i < 50)
	{
		printf("%ld", x);
		if (i < 49)
			printf(", ");
		else
			printf("\n");
		i++;
		tmp = x + y;
		x = y;
		y = tmp;
	}
	return (0);
}
