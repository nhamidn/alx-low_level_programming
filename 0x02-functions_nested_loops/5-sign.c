#include "main.h"

/**
 * print_sign - check a number if positive of negative.
 * @n: number to test
 * Return: 0 if n = 0, 1 if n > 0, -1 if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
