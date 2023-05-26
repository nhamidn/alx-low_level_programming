#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: a string
* @accept: string
* Return: the lenght i
*/
unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i = 0;

	while (s[i])
	{
		j = 0;
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
