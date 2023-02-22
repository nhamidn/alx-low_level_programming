#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number to extract from
 * Return: last digit of the number n.
 */
int print_last_digit(int n)
{
	int result;

	result = abs(n) % 10;
	_putchar(result + '0');
	return (result);
}
