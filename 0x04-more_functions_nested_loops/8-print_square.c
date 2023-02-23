#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square.
 * Return: Nothing (void function).
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
