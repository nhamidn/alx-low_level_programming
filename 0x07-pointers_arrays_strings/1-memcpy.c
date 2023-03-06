#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: where to copy
 * @src: what to copy
 * @n: number of element to copy
 * Return: pointer to char (string).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s;
	char *d;
	int i;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
