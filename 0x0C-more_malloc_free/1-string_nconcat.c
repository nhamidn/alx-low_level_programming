#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of char to copy from s2
 * Return: Pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len])
		len++;

	dest = malloc(sizeof(char) * len + n + 1);
	if (dest == NULL)
		return (NULL);

	i = j = 0;
	while (i < (len + n))
	{
		if (i < len)
			dest[i] = s1[i];
		else
		{
			dest[i] = s2[j];
			j++;
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
