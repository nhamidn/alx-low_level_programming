#include "main.h"

/**
 * argstostr - covert arguments to 1d string
 * @ac: number arguments
 * @av: array of strings
 * Return: 1d string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j;
	int len;
	char *str;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		len += j + 1;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[len] = av[i][j];
			j++;
			len++;
		}
		str[len] = '\n';
		len++;
		i++;
	}
	str[len] = '\0';
	return (str);
}
