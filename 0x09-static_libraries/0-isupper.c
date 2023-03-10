#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: character to test
 * Return: 1 is c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
