#include "main.h"

/**
 * print_most_numbers - print numbers
 * from 1 to 9 except 2 and 4
 *
 * Return: Nothing (void function).
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
