#include "main.h"

/**
 * _puts - Prints a string followed by newline
 *
 * Return: Nothing (void function).
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
