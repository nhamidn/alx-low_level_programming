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
	int i;

	if (needle == NULL)
		return (haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0' && haystack[i] != '\0')
		{
			if (needle[i] != haystack[i])
				break;
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
