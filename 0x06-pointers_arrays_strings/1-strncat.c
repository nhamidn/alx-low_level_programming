#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of chars to copy to dest
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
