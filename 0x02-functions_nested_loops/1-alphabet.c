#include "main.h"
/**
* print_alphabet - prints the alphabet followed by a new line
* Return: No return (void function)
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

