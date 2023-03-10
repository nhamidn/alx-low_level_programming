#include "main.h"

/**
 * _strpbrk - locate characters in string
 * @s: string
 * @accept: characters
 * Return: pointer to first character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		if (accept[i] == *s)
			return (s);
		s++;
	}
	return (0);
}
