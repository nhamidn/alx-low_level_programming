#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string
 * @c: character
 *
 * Return: pointer to the located character
 */
char *_strchr(char *s, char c)
{
	while (*str != c && *str)
		str++;
	if (*str == c)
		return (str);
	return (NULL);
}
