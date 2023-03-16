#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of memory to allocate
 * Return: Void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
