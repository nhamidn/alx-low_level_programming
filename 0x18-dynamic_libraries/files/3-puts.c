#include "main.h"

/**
 * _puts - Prints a string followed by newline
 * @s: string to print
 * Return: Nothing (void function).
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
