#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: String
 * @needle: substring
 *
 * Return: A string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *backup = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return (backup);
		}
		haystack++;
	}
	return (0);
}
