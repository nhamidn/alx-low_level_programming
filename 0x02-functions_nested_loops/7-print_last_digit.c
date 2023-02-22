#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number to extract from
 * Return: last digit of the number n.
 */
int print_last_digit(int n)
{
	int result;

	if (n == -2147483648)
		result = 8;
	else	
		result = abs(n) % 10;
	_putchar(result + '0');
	return (result);
}
