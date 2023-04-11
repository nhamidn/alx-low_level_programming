#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: String representing binary number
 * Return: Unsigned Integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, i = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			i += k;
		k *= 2;
		len--;
	}
	return (i);
}
