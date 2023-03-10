#include "main.h"

/**
 * _isdigit - check c if isdigit
 * @c: element to test.
 * Return: 1 if c is digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
