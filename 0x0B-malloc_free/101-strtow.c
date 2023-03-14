#include "main.h"

/**
 * strtowi - split string into words
 * @str: string to split
 * Return: 2d char array
 */
char **strtowi(char *str)
{
	char **dest;
	int i = -1, j = 0, len1 = 0, len2;

	if (str == NULL)
		return (NULL);
	while (str[++i] != '\0')
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
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
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
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
/**
 * w - count words in a string
 * @str: string
 * Return: integer
 */
int w(char *str)
{
	int i = 0, len1 = 0;

	while (str[++i] != '\0')
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
				len1++;

	return (len1);
}
/**
 * charcount - count characters in a word
 * @str: string
 * @i: the starting index
 * Return: integer
 */
int charcount(char const *str, int i)
{
	int count;

	count = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * strtow - split string into words
 * @str: string to split
 * Return: 2d char array
 */
char **strtow(char *str)
{
	char **st;
	int i = 0, j = 0, wlen = 0, k;

	wlen = w(str);
	if (str == NULL || wlen == 0)
		return (NULL);
	st = (char **)malloc(sizeof(char *) * (wlen + 1));
	if (st == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = 0;
			st[j] = malloc(sizeof(char) * (charcount(str, i) + 2));
			if (st[j] == NULL)
				return (NULL);
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
				st[j][k++] = str[i++];
			st[j++][k] = '\0';
		}
		else
			i++;
	}
	st[j] = NULL;
	return (st);
}
