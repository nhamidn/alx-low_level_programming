#include "main.h"

/**
 * _sqrt_calculator - calculate square root
 * @a: number
 * @b: number representing steps
 * Return: integer representing result
 */
int _sqrt_calculator(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt_calculator(a, b + 1));
}

/**
 * _sqrt_recursion - calculate square root
 * @n: number
 * Return: integer representing result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (_sqrt_calculator(n, 1));
}
