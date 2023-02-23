#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of _ will be printed.
 * Return: Nothing (void function).
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
