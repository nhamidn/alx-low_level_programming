#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: where to copy
 * @src: what to copy
 * @n: number of element to copy
 *
 * Return: pointer to char (string).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *b = src;
	char *a = dest;
	unsigned int i = 0;

	while (i != n)
	{
		a[i] = b[i];
		i++;
	}

	return (a);
}
