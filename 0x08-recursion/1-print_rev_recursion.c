#include "main.h"

/**
 * _print_rev_recursion - print a string
 * in reverse using recursion
 * @s: String to print
 * Return: Nothing (void function)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
