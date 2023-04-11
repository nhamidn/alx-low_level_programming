#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index: index
 * Return: bit value, -1 in case of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	n = n >> index;
	if ((n & 1) == 1)
		return (1);
	return (0);
}
