#include "main.h"

/**
 * _strncpy - copy at most n chars from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
