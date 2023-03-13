#include "main.h"

/**
 * _strdup - create a copy of a string
 * @str: string to copy
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char *NewStr;
	int len, b;

	len = 0;
	b = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	NewStr = (char *)malloc((len + 1) * sizeof(char));
	if (NewStr == NULL)
		return (NULL);
	while (str[b] != '\0')
	{
		NewStr[b] = str[b];
		b++;
	}
	NewStr[b] = '\0';
	return (NewStr);
}

