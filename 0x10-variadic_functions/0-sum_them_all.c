#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers of integers passed as arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list vaList;

	va_start(vaList, n);

	while (i < n)
	{
		sum += va_arg(vaList, int);
		i++;
	}

	va_end(vaList);
	return (sum);
}
