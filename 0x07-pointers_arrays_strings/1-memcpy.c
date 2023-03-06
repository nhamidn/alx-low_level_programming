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
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
