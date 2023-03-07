#include "main.h"

/**
 * factorial - factorial of a number in recursion
 * @n: Number
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
