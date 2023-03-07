#include "main.h"

/**
 * _strlen_recursion - calculate length
 * of a string in recursion
 * @s: String
 * Return: Lenght of s
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
		return (0);
	else
		len = _strlen_recursion(s + 1) + 1;
	return (len);
}
