#include "main.h"
/**
 * main - prints the sum of natural number that
 * are multiples of 3 or 5.
 *
 * Return: 0 on success0.
 */
int main(void)
{
	int i = 1024;
	int result = 0;

	while (i > 0)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			result = result + i;
		i--;
	}
	printf("%d\n", result);
	return (0);
}
