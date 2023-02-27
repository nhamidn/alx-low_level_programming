#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: the string to print
 * Return: Nothing (void function)
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
