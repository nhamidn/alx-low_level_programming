#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the array to reverse
 * Return: Nothing (Void function)
 */
void rev_string(char *s)
{
	int i;
	int n = 0;
	char tmp;

	i = 0;
	while (s[n] != '\0')
		n++;
	n -= 1;
	while (i <= n)
	{
		tmp = s[n];
		s[n] = s[i];
		s[i] = tmp;
		n--;
		i++;
	}
}
