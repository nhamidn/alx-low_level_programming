#include "main.h"

/**
 * print_diagsums - calculate sum of the
 * two diagonals
 * @a: array
 * @size: size
 * Return: Nothing (void function)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
	printf("\n");
}
