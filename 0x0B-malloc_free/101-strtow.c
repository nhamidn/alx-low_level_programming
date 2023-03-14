#include "main.h"

/**
 * strtow - split string into words
 * @str: string to split
 * Return: 2d char array
 */
char **strtow(char *str)
{
	char **dest;
	int i = -1, j = 0, len1 = 0, len2;

	if (str == NULL)
		return (NULL);
	while (str[++i] != '\0')
		if (str[i] != ' ')
			if (i == 0 || str[i - 1] == ' ')
				len1++;
	if (i == 1 || str == NULL || len1 == 0)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (len1 + 1));
	if (dest == NULL)
		return (NULL);
	dest[len1] = NULL;
	i = j = len1 = 0;
	while (str[i] != '\0')
	{
		len2 = 0;
		while (str[i] != ' ')
			i++;
		len2 = i - j;
		if (len2)
		{
			dest[len1] = (char *)malloc(sizeof(char) * (len2 + 1));
			if (dest[len1] == NULL)
				return (NULL);
			i = j;
			while (i - j < len2)
			{
				dest[len1][i - j] = str[i];
				i++;
			}
			dest[len1][len2] = '\0';
			len1++;
		}
		i++;
		j = i;
	}
	return (dest);
}
