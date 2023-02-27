#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: Nothing (void function).
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;
	if (len % 2)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (str[n] != '\0')
	{
		_putchat(str[n]);
		n++;
	}
	_putchar('\n');
}
