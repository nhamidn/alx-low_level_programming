#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Return: Integer.
 */
int _atoi(char *s)
{
	int i;
	int result;
	int neg;
	int count;

	i = 0;
	neg = 1;
	result = 0;
	while (s[i] < 48 || 57 < s[i])
		i++;
	if (i > 0)
	{
		count = 0;
		while (count < i)
		{
			if (s[count] == '-')
				neg *= -1;
			count++;
		}
	}
	while (s[i])
	{
		if (s[i] < 48 || 57 < s[i])
			return (result * neg);
		else
			result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * neg);
}
