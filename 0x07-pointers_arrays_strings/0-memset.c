#include "main.h"

/**
 * _memset - fill a byte string with a byte value.
 * @s: pointer to char (string)
 * @b: a constant byte 
 * @n: n bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;
	unsigned int i = 0;

	while (i < n)
	{
		tmp[i] = b;
		i++;
	}
	return (tmp);
}
