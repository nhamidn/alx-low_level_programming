#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: element to test
 * Return: 1 if it's alphabetic otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
