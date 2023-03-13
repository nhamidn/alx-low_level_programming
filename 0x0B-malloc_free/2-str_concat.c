#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *str;

	len1 = 0;
	len2 = 0;
	i = 0;
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;
	str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + i] = '\0';
	return (str);
}
