#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned int
 * @index: index
 * Return: 1 on succes, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x = x << index;
	*n &= ~x;
	return (1);
}
