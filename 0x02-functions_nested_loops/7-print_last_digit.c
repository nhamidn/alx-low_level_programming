#include "main.h"

/**
 * main - print last digit of a number
 * @n: the number to extract from
 * Return: last digit of the number n.
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	_putchar(result + '0');
	return (result);
}
