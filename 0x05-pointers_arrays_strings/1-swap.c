#include "main.h"

/**
 * swap_int - swap the values of two pointers
 * @a: the first pointer
 * @b: the second pointer
 * Return: Nothing (void function).
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
