#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int i = 0;

	diff = n ^ m;
	while (diff >= 1)
	{
		if ((diff & 1) == 1)
			i++;
		diff = diff >> 1;
	}
	return (i);
}
