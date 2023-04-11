#include "main.h"

/**
 * set_bit - set value to 1 at a given index
 * @n: pointer to unsigned int
 * @index: unsigned int index
 * Return: 1 on succesm otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x = x << index;
	*n |= x;
	return (1);
}
